// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14012e330 FUN_14012e330 body=310 status=ok
// SIG undefined FUN_14012e330(void)

void FUN_14012e330(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((((DAT_14c762a4c != 0) && (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0)) &&
        ((*(byte *)(lVar4 + 0x153) & 0x40) != 0)) &&
       (((*(byte *)(lVar4 + 0x155) & 0x20) == 0 && (*(char *)(param_1 + 0x1c01) == '\0')))) &&
      (*(char *)(param_1 + 0x1c02) == '\0')) &&
     ((bVar1 = *(byte *)(lVar4 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    FUN_1456d06d8(&local_30,0x10,1,0);
    uVar6 = (ulonglong)local_20;
    lVar4 = local_30;
    iVar3 = local_28;
    if (-1 < (int)local_20) {
      do {
        if (iVar3 <= (int)(uint)uVar6) break;
        lVar2 = *(longlong *)(lVar4 + (uVar6 & 0xffffffff) * 8);
        uVar5 = (uint)uVar6;
        if (lVar2 != 0) {
          FUN_14012fc50(*(undefined8 *)(param_1 + 0x1b30),lVar2,*(undefined8 *)(param_1 + 0x10));
          lVar4 = local_30;
          iVar3 = local_28;
          uVar5 = local_20;
        }
        uVar6 = (longlong)(int)uVar5;
        do {
          uVar7 = uVar6;
          uVar6 = uVar7 + 1;
          local_20 = (uint)uVar6;
          if ((longlong)iVar3 <= (longlong)uVar6) break;
        } while (*(longlong *)(lVar4 + uVar6 * 8) == 0);
      } while (-2 < (longlong)uVar7);
    }
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14012e468 FUN_14012e468 body=358 status=ok
// SIG undefined FUN_14012e468(void)

longlong * FUN_14012e468(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  if (DAT_14cb39ca0 == 0) {
    local_60 = &local_40;
    local_40 = FUN_144a7958c;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_14638c6c0;
    local_68 = &LAB_14811044c;
    local_70 = &LAB_1407f5cf8;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x8e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
  }
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_98 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(DAT_14cb39ca0,&local_40,param_3,param_2);
  lVar2 = (longlong)(int)param_1[2];
  do {
    lVar2 = lVar2 + 1;
    *(int *)(param_1 + 2) = (int)lVar2;
    if ((int)param_1[1] <= lVar2) break;
  } while (*(longlong *)(*param_1 + lVar2 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012e5d0 FUN_14012e5d0 body=1535 status=ok
// SIG undefined FUN_14012e5d0(void)

void FUN_14012e5d0(void)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar12 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_14012e60f;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_14012e618;
      goto LAB_14012e712;
    }
  }
  else {
LAB_14012e60f:
    if (iVar16 != 0x10) {
LAB_14012e712:
      if (DAT_14ca9a438 != '\0') goto LAB_14012e743;
      if ((DAT_14c86a9f8 == '\x01') && (iVar16 = *(int *)(lVar12 + 0xc60), iVar16 != 2)) {
        if (iVar16 != 1) {
LAB_14012e743:
          if (DAT_14ca9a43c == 0) {
            puVar3 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar8 = (uint *)*puVar3;
            if (puVar8 != (uint *)0x0) goto LAB_14012e86b;
            while( true ) {
              uVar14 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar14 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar14 | 1;
                __tlregdtor(&LAB_143a7d97b);
              }
              lVar12 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar7 = *(undefined4 **)(lVar12 + 0x310);
              *(undefined8 *)(lVar12 + 0x310) = 0;
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar7 = 0xffffffff;
              *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
              puVar7[0x12] = 0;
              *puVar3 = puVar7;
              FUN_140217a48(puVar3);
              puVar8 = (uint *)*puVar3;
LAB_14012e86b:
              puVar15 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar11 = (uint *)(puVar15 + 0x16);
              uVar14 = puVar8[0x12];
              if (puVar11 <= puVar8 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
                LOCK();
                uVar2 = *puVar8;
                *puVar8 = *puVar8 + uVar14 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar14) != 0xffffffff) break;
                puVar8 = (uint *)*puVar3;
                *puVar8 = 0xffffffff;
                *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
                puVar8[0x12] = 0;
                *puVar3 = puVar8;
                puVar15 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
                puVar11 = (uint *)(puVar15 + 0x16);
                uVar14 = 0;
                if (puVar11 <= puVar8 + 0x4000) {
                  uVar14 = 1;
                  goto LAB_14012e8eb;
                }
              }
            }
            uVar14 = uVar14 + 1;
LAB_14012e8eb:
            *(uint **)(puVar8 + 0x10) = puVar11;
            puVar8[0x12] = uVar14;
            iVar16 = 0;
            FUN_1447247dc(puVar15,0);
            *puVar15 = &PTR_FUN_14adf32a8;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar14 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                iVar16 = 0;
              }
              else {
                uVar13 = 2;
              }
            }
            else {
              iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar13 = 5;
            }
            if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
            }
            puVar15[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar15[9] = puVar15;
            puVar15[10] = puVar15;
            lVar12 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar12 == 0) {
              uVar4 = 1;
              if ((char)uVar13 != '\x06') {
                uVar4 = uVar13;
              }
              uVar13 = uVar4;
              uVar9 = 0;
            }
            else {
              if ((char)uVar13 == '\x06') {
                uVar13 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
              }
              uVar9 = *(undefined8 *)(lVar12 + 0x30);
            }
            puVar15[0xf] = uVar9;
            puVar15[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar15 + 0x1c) = iVar16;
            if (puVar15 == (undefined8 *)0x0) {
              local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
              UNLOCK();
              local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
              FUN_1447439e4(puVar15);
              LOCK();
              piVar1 = (int *)(puVar15 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar15)(puVar15,1);
              }
            }
          }
          else {
            local_78 = local_68;
            local_58 = (undefined ***)0x0;
            local_48[0] = &PTR_LAB_14adf3250;
            local_68[0] = FUN_143a7fa52;
            FUN_14005a792(&DAT_14ca9a440,L"FlushDeletionListCommand",&DAT_14cb3e634);
            if (local_68[0] != (code *)0x0) {
              pppuVar10 = local_58;
              if (local_58 == (undefined ***)0x0) {
                pppuVar10 = local_48;
              }
              (*(code *)(*pppuVar10)[2])();
            }
          }
          if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 != DVar6) goto LAB_14012e743;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
      if (0 < DAT_14cb3dad0) {
        uVar14 = 0;
        do {
          lVar12 = (longlong)(int)uVar14;
          if (*(int *)(*(longlong *)(DAT_14cb3dac8 + lVar12 * 8) + 8) == 0) {
            puVar3 = *(undefined8 **)(DAT_14cb3dac8 + lVar12 * 8);
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            iVar16 = ~uVar14 + DAT_14cb3dad0;
            if (iVar16 != 0) {
              if (0 < iVar16) {
                iVar16 = 1;
              }
              memmove((void *)(DAT_14cb3dac8 + lVar12 * 8),
                      (void *)(DAT_14cb3dac8 + (longlong)(DAT_14cb3dad0 - iVar16) * 8),
                      (longlong)iVar16 << 3);
            }
            DAT_14cb3dad0 = DAT_14cb3dad0 + -1;
            FUN_14182ec16();
          }
          else {
            uVar14 = uVar14 + 1;
          }
        } while ((int)uVar14 < DAT_14cb3dad0);
      }
      goto LAB_14012e6c3;
    }
  }
LAB_14012e618:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  if (0 < DAT_14cb3dad0) {
    uVar14 = 0;
    do {
      lVar12 = (longlong)(int)uVar14;
      if (*(int *)(*(longlong *)(DAT_14cb3dac8 + lVar12 * 8) + 8) == 0) {
        puVar3 = *(undefined8 **)(DAT_14cb3dac8 + lVar12 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar16 = ~uVar14 + DAT_14cb3dad0;
        if (iVar16 != 0) {
          if (0 < iVar16) {
            iVar16 = 1;
          }
          memmove((void *)(DAT_14cb3dac8 + lVar12 * 8),
                  (void *)(DAT_14cb3dac8 + (longlong)(DAT_14cb3dad0 - iVar16) * 8),
                  (longlong)iVar16 << 3);
        }
        DAT_14cb3dad0 = DAT_14cb3dad0 + -1;
        FUN_14182ec16();
      }
      else {
        uVar14 = uVar14 + 1;
      }
    } while ((int)uVar14 < DAT_14cb3dad0);
  }
LAB_14012e6c3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14012ebe4 FUN_14012ebe4 body=4202 status=ok
// SIG undefined FUN_14012ebe4(void)

/* WARNING: Removing unreachable block (ram,0x00014012f9e8) */

void FUN_14012ebe4(undefined8 *param_1,float param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  undefined8 **ppuVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined4 uVar23;
  undefined8 unaff_RBX;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_248 [32];
  float local_228;
  int local_220;
  undefined1 local_218;
  undefined4 local_204;
  undefined8 *local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8 [4];
  undefined8 **local_1b8;
  ulonglong local_1b0;
  DWORD local_1a8;
  LONG LStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  char cStack_174;
  undefined1 local_170 [32];
  undefined1 *local_150;
  int local_148;
  undefined8 local_140;
  undefined1 local_138 [32];
  undefined1 *local_118;
  int local_110;
  LARGE_INTEGER local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined5 uStack_d8;
  undefined1 local_d0 [32];
  undefined1 *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((*(int *)(param_1 + 10) == 0) || ((*(byte *)(param_1 + 6) & 1) == 0)) goto LAB_14012f04b;
  if ((param_1[0xa8] != 0) && ((*(byte *)(param_1[0xa8] + 0xa0) & 1) == 0)) {
    if (param_3 == '\0') goto LAB_14012f04b;
    FUN_14012d1c4(param_1,0);
  }
  puVar4 = (undefined8 *)param_1[0xa7];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0xa7] = 0;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0xa8];
  if (puVar4 != (undefined8 *)0x0) {
    param_1[0xa8] = 0;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar24 = -1;
  uVar23 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((((param_1[5] == 0) || (DAT_14caf6068 < 1)) || ((DAT_14c7616fc & 1) == 0)) ||
     (lVar11 = FUN_14005c7aa(), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    QueryPerformanceCounter(&local_108);
    lVar24 = CONCAT44(local_108.s.HighPart,local_108.s.LowPart);
    uVar23 = 0;
  }
  local_1ec = DAT_14cb3a5f8;
  if (DAT_14cb3a5f8 != 0) {
    lVar12 = FUN_14811173e();
    if (param_1 == (undefined8 *)0x0) {
      lVar29 = lVar12 + 0x88;
    }
    else {
      lVar29 = FUN_1481f6aa2(param_1);
    }
    FUN_148121460(lVar12,lVar29);
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 4;
  if (*(char *)((longlong)param_1 + 0x534) == '\x01') {
    if (*(float *)(param_1 + 0xa6) <= param_2) {
      param_2 = *(float *)(param_1 + 0xa6);
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
  }
  if (*(char *)(param_1[2] + 0x44a) == '\x01') {
    param_2 = *(float *)(param_1[2] + 0x45c);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if ((undefined4 *)param_1[0x9e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9e] = uVar3;
  }
  if ((undefined4 *)param_1[0x9f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9f] = uVar3;
  }
  if ((undefined4 *)param_1[0xa0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa0] = DAT_14c762924;
  }
  if ((undefined4 *)param_1[0xa1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa1] = DAT_14c762924;
  }
  if ((undefined4 *)param_1[0xa2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa2] = DAT_14c762928;
  }
  if ((undefined4 *)param_1[0xa3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa3] = DAT_14c762928;
  }
  lVar12 = FUN_1400bd118(param_1[5]);
  iVar9 = *(int *)(param_1 + 10);
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  local_1f8 = lVar24;
  local_1f0 = uVar23;
  local_1e0 = lVar11;
  if (*(int *)((longlong)param_1 + 0x74) < iVar9) {
    FUN_140802f38(param_1 + 0xd);
    iVar9 = *(int *)(param_1 + 10);
  }
  local_1e8 = lVar12;
  if (0 < iVar9) {
    do {
      lVar24 = *(longlong *)param_1[9];
      iVar9 = FUN_143ac6210(lVar24);
      if (iVar9 == *(int *)(param_1 + 4)) {
        FUN_143ac7ac0(lVar24,param_2);
        iVar9 = *(int *)(lVar24 + 0x18);
        if ((longlong)iVar9 < 0) goto LAB_14012eecd;
        iVar16 = *(int *)(param_1 + 10);
        if (iVar9 < iVar16) {
          if (*(longlong *)(param_1[9] + (longlong)iVar9 * 8) == lVar24) {
            FUN_144962840(param_1,lVar24,3);
          }
          goto LAB_14012eecd;
        }
      }
      else {
        FUN_143ad0ca6(lVar12,&local_108,iVar9,param_1[2]);
        uVar15 = CONCAT44(local_108.s.HighPart,local_108.s.LowPart);
        plVar19 = (longlong *)CONCAT44(uStack_fc,uStack_100);
        if (plVar19 == (longlong *)0x0) {
          FUN_14032de7e(uVar15,lVar24);
        }
        else {
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
          plVar27 = (longlong *)CONCAT44(uStack_fc,uStack_100);
          if (plVar27 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar27 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar27)(plVar27);
              LOCK();
              piVar2 = (int *)((longlong)plVar27 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
              }
            }
          }
          FUN_14032de7e(uVar15,lVar24);
          LOCK();
          plVar27 = plVar19 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
LAB_14012eecd:
        iVar16 = *(int *)(param_1 + 10);
      }
    } while (0 < iVar16);
  }
  uVar17 = *(uint *)(param_1 + 6);
  iVar9 = *(int *)(param_1 + 0xe);
  if (iVar9 < 1) {
    *(uint *)(param_1 + 6) = uVar17 & 0xfffffffb;
    lVar24 = local_1f8;
    goto LAB_14012f011;
  }
  if ((uVar17 & 2) == 0) {
    FUN_14032eef2(param_1,*(undefined8 *)param_1[0xd]);
    uVar17 = *(uint *)(param_1 + 6);
    iVar9 = *(int *)(param_1 + 0xe);
  }
  local_218 = (uVar17 & 8) == 0;
  local_228 = param_2;
  local_220 = iVar9;
  FUN_143ac92da(&local_1a8,param_1,param_1 + 0xd,param_1 + 0x2a);
  lVar24 = local_1f8;
  if (cStack_174 != '\x01') {
    lVar11 = param_1[2];
    if (*(longlong *)(lVar11 + 0x4d0) != 0) {
      puVar4 = *(undefined8 **)(lVar11 + 0x4d0);
      if ((*(byte *)(*(longlong *)(lVar11 + 0x4d0) + 0xa0) & 1) == 0) {
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
          FUN_140082318(puVar4);
          FUN_140802e3c(param_1,&local_1a8);
          LOCK();
          piVar2 = (int *)(puVar4 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          goto LAB_14012efd7;
        }
      }
      else if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar11 + 0x4d0) = 0;
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    FUN_140802e3c(param_1,&local_1a8);
    goto LAB_14012efd7;
  }
  local_1b8 = (undefined8 **)0x0;
  local_1b0 = 0x400000000;
  lVar24 = param_1[2];
  lVar11 = *(longlong *)(lVar24 + 0x4d0);
  if (lVar11 == 0) {
LAB_14012f0b3:
    local_204 = (undefined4)CONCAT71((int7)((ulonglong)lVar24 >> 8),1);
  }
  else {
    local_200 = *(undefined8 **)(lVar24 + 0x4d0);
    if ((*(byte *)(lVar11 + 0xa0) & 1) == 0) {
      if (local_200 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_200 + 1) = *(int *)(local_200 + 1) + 1;
        UNLOCK();
        local_1b0 = 0x400000001;
        local_1b8 = (undefined8 **)0x0;
        LOCK();
        *(int *)(local_200 + 1) = *(int *)(local_200 + 1) + 1;
        UNLOCK();
        local_204 = 0;
        local_1d8[0] = local_200;
        goto LAB_14012f0c2;
      }
      goto LAB_14012f0b3;
    }
    local_204 = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    if (local_200 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar24 + 0x4d0) = 0;
      LOCK();
      piVar2 = (int *)(local_200 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_200)(local_200,1);
      }
    }
  }
  local_200 = (undefined8 *)0x0;
LAB_14012f0c2:
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar14 = (uint *)*puVar4;
  if (puVar14 != (uint *)0x0) goto LAB_14012f169;
  do {
    uVar17 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar17 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar17 | 1;
      __tlregdtor(&LAB_143acaafd);
    }
    lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar13 = *(undefined4 **)(lVar24 + 0x310);
    *(undefined8 *)(lVar24 + 0x310) = 0;
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar13 = 0xffffffff;
    *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
    puVar13[0x12] = 0;
    *puVar4 = puVar13;
    FUN_140217a48(puVar4);
    puVar14 = (uint *)*puVar4;
LAB_14012f169:
    uVar25 = *(longlong *)(puVar14 + 0x10) + 7;
    uVar17 = puVar14[0x12];
    while( true ) {
      puVar26 = (undefined8 *)(uVar25 & 0xfffffffffffffff8);
      if (puVar26 + 0x2b <= puVar14 + 0x4000) {
        *(undefined8 **)(puVar14 + 0x10) = puVar26 + 0x2b;
        puVar14[0x12] = uVar17 + 1;
        FUN_1447247dc(puVar26,local_1d8);
        iVar9 = local_148;
        *puVar26 = &PTR_FUN_14ae26ce0;
        local_108.s.LowPart = local_1a8;
        local_108.s.HighPart = LStack_1a4;
        uStack_100 = uStack_1a0;
        uStack_fc = uStack_19c;
        local_f8 = local_198;
        uStack_f4 = uStack_194;
        uStack_f0 = uStack_190;
        uStack_ec = uStack_18c;
        local_e8 = local_188;
        uStack_e4 = uStack_184;
        uStack_e0 = uStack_180;
        uStack_d8 = CONCAT14(cStack_174,uStack_178);
        uStack_dc = uStack_17c;
        local_b0 = (undefined1 *)0x0;
        local_a8 = local_148;
        if (local_148 == 0) {
          local_a4 = 4;
        }
        else {
          puVar18 = local_170;
          if (local_150 != (undefined1 *)0x0) {
            puVar18 = local_150;
          }
          FUN_144727e94(local_d0,local_148,0);
          puVar21 = local_b0;
          if (local_b0 == (undefined1 *)0x0) {
            puVar21 = local_d0;
          }
          FUN_144727e6e(puVar21,puVar18,iVar9);
        }
        local_a0 = local_140;
        local_78 = (undefined1 *)0x0;
        local_70 = local_110;
        if ((longlong)local_110 == 0) {
          local_6c = 4;
        }
        else {
          puVar18 = local_138;
          if (local_118 != (undefined1 *)0x0) {
            puVar18 = local_118;
          }
          FUN_144b38ea8(local_98,local_110);
          puVar21 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar21 = local_98;
          }
          memcpy(puVar21,puVar18,(longlong)local_110 << 3);
        }
        iVar9 = local_a8;
        *(ulonglong *)((longlong)puVar26 + 0xdd) = CONCAT53(uStack_d8,uStack_dc._1_3_);
        *(undefined4 *)(puVar26 + 0x1a) = local_e8;
        *(undefined4 *)((longlong)puVar26 + 0xd4) = uStack_e4;
        *(undefined4 *)(puVar26 + 0x1b) = uStack_e0;
        *(undefined4 *)((longlong)puVar26 + 0xdc) = uStack_dc;
        *(undefined4 *)(puVar26 + 0x18) = local_f8;
        *(undefined4 *)((longlong)puVar26 + 0xc4) = uStack_f4;
        *(undefined4 *)(puVar26 + 0x19) = uStack_f0;
        *(undefined4 *)((longlong)puVar26 + 0xcc) = uStack_ec;
        *(DWORD *)(puVar26 + 0x16) = local_108.s.LowPart;
        *(LONG *)((longlong)puVar26 + 0xb4) = local_108.s.HighPart;
        *(undefined4 *)(puVar26 + 0x17) = uStack_100;
        *(undefined4 *)((longlong)puVar26 + 0xbc) = uStack_fc;
        puVar26[0x21] = 0;
        *(int *)(puVar26 + 0x22) = local_a8;
        if (local_a8 == 0) {
          *(undefined4 *)((longlong)puVar26 + 0x114) = 4;
        }
        else {
          puVar18 = local_d0;
          if (local_b0 != (undefined1 *)0x0) {
            puVar18 = local_b0;
          }
          FUN_144727e94(puVar26 + 0x1d,local_a8,0);
          puVar28 = (undefined8 *)puVar26[0x21];
          if ((undefined8 *)puVar26[0x21] == (undefined8 *)0x0) {
            puVar28 = puVar26 + 0x1d;
          }
          FUN_144727e6e(puVar28,puVar18,iVar9);
        }
        puVar26[0x23] = local_a0;
        puVar26[0x28] = 0;
        lVar24 = (longlong)local_70;
        *(int *)(puVar26 + 0x29) = local_70;
        if (lVar24 == 0) {
          *(undefined4 *)((longlong)puVar26 + 0x14c) = 4;
        }
        else {
          puVar18 = local_98;
          if (local_78 != (undefined1 *)0x0) {
            puVar18 = local_78;
          }
          FUN_144b38ea8(puVar26 + 0x24,local_70);
          puVar28 = (undefined8 *)puVar26[0x28];
          if ((undefined8 *)puVar26[0x28] == (undefined8 *)0x0) {
            puVar28 = puVar26 + 0x24;
          }
          memcpy(puVar28,puVar18,lVar24 << 3);
        }
        puVar26[0x2a] = 0;
        uVar17 = 3;
        if ((int)DAT_14c7629d8 < 3) {
          uVar17 = DAT_14c7629d8;
        }
        uVar10 = 0;
        if (0 < (int)uVar17) {
          uVar10 = uVar17;
        }
        uVar25 = (ulonglong)uVar10;
        uVar17 = (&DAT_14cb43480)[uVar25 * 0x10];
        if (((uVar17 == 0x400) && (DAT_14c7585d8 == 0)) ||
           ((uVar17 == 0x800 && (DAT_14c7585dc == 0)))) {
          uVar17 = *(uint *)(&DAT_14cb43488 + uVar25 * 0x40);
        }
        else {
          uVar17 = uVar17 | (&DAT_14cb43484)[uVar25 * 0x10];
        }
        *(uint *)(puVar26 + 0x15) = uVar17 | 0xff;
        puVar14 = (uint *)*puVar4;
        if (puVar14 != (uint *)0x0) goto LAB_14012f52a;
        goto LAB_14012f4aa;
      }
      *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
      LOCK();
      uVar10 = *puVar14;
      *puVar14 = *puVar14 + uVar17 + 1;
      UNLOCK();
      if ((uVar10 ^ uVar17) != 0xffffffff) break;
      puVar14 = (uint *)*puVar4;
      *puVar14 = 0xffffffff;
      *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
      puVar14[0x12] = 0;
      *puVar4 = puVar14;
      uVar25 = (longlong)puVar14 + 0x5f;
      uVar17 = 0;
    }
  } while( true );
LAB_14012f4aa:
  uVar17 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x318);
  if ((uVar17 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar17 | 1;
    __tlregdtor(&LAB_143acaafd);
  }
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar13 = *(undefined4 **)(lVar24 + 0x310);
  *(undefined8 *)(lVar24 + 0x310) = 0;
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar13 = 0xffffffff;
  *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
  puVar13[0x12] = 0;
  *puVar4 = puVar13;
  FUN_140217a48(puVar4);
  puVar14 = (uint *)*puVar4;
LAB_14012f52a:
  puVar28 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar22 = (uint *)(puVar28 + 0x1b);
  uVar17 = puVar14[0x12];
  if (puVar22 <= puVar14 + 0x4000) goto LAB_14012fa5f;
  while( true ) {
    *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
    LOCK();
    uVar10 = *puVar14;
    *puVar14 = *puVar14 + uVar17 + 1;
    UNLOCK();
    if ((uVar10 ^ uVar17) != 0xffffffff) break;
    puVar14 = (uint *)*puVar4;
    *puVar14 = 0xffffffff;
    *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
    puVar14[0x12] = 0;
    *puVar4 = puVar14;
    puVar28 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
    puVar22 = (uint *)(puVar28 + 0x1b);
    uVar17 = 0;
    if (puVar22 <= puVar14 + 0x4000) {
      uVar17 = 1;
      goto LAB_14012f5ac;
    }
  }
  goto LAB_14012f4aa;
LAB_14012fa5f:
  uVar17 = uVar17 + 1;
LAB_14012f5ac:
  *(uint **)(puVar14 + 0x10) = puVar22;
  puVar14[0x12] = uVar17;
  FUN_1447247dc(puVar28,0);
  *puVar28 = &PTR_FUN_14ae26cd0;
  puVar28[0x19] = 0;
  puVar28[0x1a] = 0x400000000;
  puVar26[0x23] = puVar28 + 0x15;
  if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
  }
  puVar28[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar28[9] = puVar28;
  puVar28[10] = puVar28;
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar11 = *(longlong *)(lVar24 + 0x2b8);
  if (lVar11 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar11 + 0x30);
  }
  puVar28[0xf] = uVar15;
  puVar28[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar28 + 0x1c) = 3;
  puVar26[0x2a] = puVar28;
  if (puVar28 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
    UNLOCK();
  }
  puVar4 = (undefined8 *)param_1[0xa8];
  param_1[0xa8] = puVar28;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar18 = local_b0;
  if (local_b0 == (undefined1 *)0x0) {
    puVar18 = local_d0;
  }
  FUN_144717c65(puVar18,local_a8);
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar17 = *(uint *)(puVar26 + 0x15);
  if (((ulonglong)uVar17 & 0xff) == 0xff) {
    uVar10 = uVar17 >> 10 & 3;
    iVar9 = 0;
    if ((uVar17 >> 9 & 1) == 0 || uVar10 < 2) {
      uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
      iVar9 = 0;
    }
    else {
      uVar25 = 2;
    }
  }
  else {
    iVar9 = (uVar17 >> 7 & 2 | uVar17 >> 9 & 1) +
            *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar17 & 0xff) * 4);
    uVar25 = 5;
  }
  if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
  }
  puVar4 = local_200;
  puVar26[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar26[9] = puVar26;
  puVar26[10] = puVar26;
  lVar24 = *(longlong *)(lVar24 + 0x2b8);
  if (lVar24 == 0) {
    uVar8 = 1;
    if ((char)uVar25 != '\x06') {
      uVar8 = uVar25;
    }
    uVar25 = uVar8;
    uVar15 = 0;
  }
  else {
    if ((char)uVar25 == '\x06') {
      uVar25 = *(ulonglong *)(lVar24 + 0x38) >> 0x3b;
    }
    uVar15 = *(undefined8 *)(lVar24 + 0x30);
  }
  puVar26[0xf] = uVar15;
  puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
  *(int *)((longlong)puVar26 + 0x1c) = iVar9;
  if (puVar26 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
    UNLOCK();
  }
  puVar28 = (undefined8 *)param_1[0xa7];
  param_1[0xa7] = puVar26;
  if (puVar28 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar28 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar28)(puVar28,1);
    }
  }
  lVar24 = (longlong)(int)((longlong *)CONCAT44(uStack_18c,uStack_190))[1];
  if (lVar24 != 0) {
    lVar11 = *(longlong *)CONCAT44(uStack_18c,uStack_190);
    lVar29 = 0;
    do {
      lVar5 = *(longlong *)(lVar11 + lVar29);
      puVar28 = (undefined8 *)param_1[0xa7];
      puVar6 = *(undefined8 **)(lVar5 + 0x7a0);
      if (puVar6 != puVar28) {
        *(undefined8 **)(lVar5 + 0x7a0) = puVar28;
        if (puVar28 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
          UNLOCK();
        }
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar6 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      }
      lVar29 = lVar29 + 8;
    } while (lVar24 * 8 != lVar29);
  }
  local_108.s.LowPart._0_1_ = 1;
  FUN_1447439e4(puVar26);
  if (((*(byte *)(param_1[2] + 0x4f8) & 4) == 0) || (DAT_14cb43948 == 0)) {
    if ((longlong)*(int *)(lVar12 + 0x3f8) != 0) {
      plVar19 = *(longlong **)(lVar12 + 0x3f0);
      lVar24 = (longlong)*(int *)(lVar12 + 0x3f8) << 4;
      do {
        if ((undefined8 *)*plVar19 == param_1) {
          if (plVar19 != (longlong *)0x0) goto LAB_14012f965;
          break;
        }
        plVar19 = plVar19 + 2;
        lVar24 = lVar24 + -0x10;
      } while (lVar24 != 0);
    }
    plVar19 = (longlong *)param_1[1];
    bVar7 = true;
    if (plVar19 == (longlong *)0x0) {
      plVar19 = (longlong *)0x0;
      uVar15 = 0;
    }
    else {
      iVar9 = (int)plVar19[1];
      uVar15 = 0;
      do {
        if (iVar9 == 0) {
          plVar19 = (longlong *)0x0;
          goto LAB_14012f91b;
        }
        LOCK();
        iVar16 = (int)plVar19[1];
        bVar30 = iVar9 == iVar16;
        if (bVar30) {
          *(int *)(plVar19 + 1) = iVar9 + 1;
          iVar16 = iVar9;
        }
        iVar9 = iVar16;
        UNLOCK();
      } while (!bVar30);
      uVar15 = *param_1;
      bVar7 = false;
    }
LAB_14012f91b:
    plVar27 = (longlong *)(local_1e8 + 0x3f0);
    iVar9 = *(int *)(lVar12 + 0x3f8);
    *(uint *)(lVar12 + 0x3f8) = iVar9 + 1U;
    if (*(uint *)(lVar12 + 0x3fc) < iVar9 + 1U) {
      FUN_1401b1f42(plVar27,iVar9);
    }
    lVar24 = *plVar27;
    *(undefined8 *)(lVar24 + (longlong)iVar9 * 0x10) = uVar15;
    *(longlong **)(lVar24 + 8 + (longlong)iVar9 * 0x10) = plVar19;
    if (!bVar7) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      LOCK();
      plVar27 = plVar19 + 1;
      *(int *)plVar27 = (int)*plVar27 + -1;
      UNLOCK();
      if ((int)*plVar27 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  else {
    FUN_1481fbaa4(lVar12,param_1);
  }
LAB_14012f965:
  if ((char)local_204 == '\0') {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  ppuVar20 = local_1d8;
  if (local_1b8 != (undefined8 **)0x0) {
    ppuVar20 = local_1b8;
  }
  FUN_144717c65(ppuVar20,local_1b0 & 0xffffffff);
  lVar24 = local_1f8;
  if (local_1b8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
LAB_14012efd7:
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar18 = local_150;
  if (local_150 == (undefined1 *)0x0) {
    puVar18 = local_170;
  }
  FUN_144717c65(puVar18,local_148);
  if (local_150 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14012f011:
  if (local_1ec != 0) {
    uVar15 = FUN_14811173e();
    FUN_1481117c2(uVar15);
  }
  if (lVar24 != -1) {
    QueryPerformanceCounter(&local_108);
    if ((char)local_1f0 == '\0') {
      *(longlong *)(local_1e0 + 8) =
           *(longlong *)(local_1e0 + 8) +
           (CONCAT44(local_108.s.HighPart,local_108.s.LowPart) - lVar24);
    }
  }
LAB_14012f04b:
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14012fc50 FUN_14012fc50 body=620 status=ok
// SIG undefined FUN_14012fc50(void)

void FUN_14012fc50(longlong param_1,ulonglong param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  ulonglong local_58;
  undefined8 uStack_50;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x60) & 4) != 0)) {
    uVar8 = *(uint *)(param_2 + 0x28);
    if (*(uint *)(param_2 + 0x2c) < *(uint *)(param_2 + 0x28)) {
      uVar8 = *(uint *)(param_2 + 0x2c);
    }
    if ((((((uVar8 != 0) && ((*(byte *)(param_3 + 0x155) & 0x20) == 0)) &&
          (*(longlong *)(param_3 + 0x218) != 0)) &&
         ((*(longlong *)(param_2 + 0x4d8) == 0 ||
          ((*(byte *)(*(longlong *)(param_2 + 0x4d8) + 0xa0) & 1) != 0)))) &&
        (((*(byte *)(param_2 + 0x4a0) & 2) != 0 &&
         ((puVar5 = (undefined8 *)(**(code **)(**(longlong **)(param_3 + 0x218) + 0x420))(),
          puVar5 != (undefined8 *)0x0 &&
          (lVar6 = (**(code **)*puVar5)(puVar5,&DAT_14cb3e918), lVar6 != 0)))))) &&
       ((bVar1 = *(byte *)(param_3 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
      FUN_14032cd6a(&local_39,param_2);
      local_58 = param_2;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar6 = FUN_140b31800(param_1 + 0x28,uVar4 >> 0x10 ^ uVar4,&local_58);
      iVar9 = uVar8 - *(uint *)(lVar6 + 8);
      if (*(uint *)(lVar6 + 8) <= uVar8 && iVar9 != 0) {
        local_58 = 0;
        uStack_50 = 0;
        FUN_148111248(&local_58,iVar9);
        uVar2 = local_58;
        lVar11 = (longlong)(int)uStack_50;
        if (lVar11 != 0) {
          lVar10 = 0;
          do {
            local_68 = 1;
            uVar7 = FUN_1439f8232(lVar6,param_3,param_2,2);
            *(undefined8 *)(uVar2 + lVar10) = uVar7;
            FUN_1439f62f4(uVar7);
            if (DAT_14c762844 != 0) {
              FUN_140b506dc(*(undefined8 *)(uVar2 + lVar10),param_3,0);
            }
            uVar3 = local_58;
            lVar10 = lVar10 + 8;
          } while (lVar11 * 8 != lVar10);
          lVar6 = (longlong)(int)uStack_50;
          if (lVar6 != 0) {
            lVar11 = 0;
            do {
              (**(code **)(**(longlong **)(uVar3 + lVar11) + 0xa48))();
              lVar11 = lVar11 + 8;
            } while (lVar6 * 8 != lVar11);
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8(local_58);
        }
      }
      if (local_39 == '\x01') {
        uVar7 = FUN_14811173e();
        FUN_1481117c2(uVar7);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14012febe FUN_14012febe body=1804 status=ok
// SIG undefined FUN_14012febe(void)

undefined8 FUN_14012febe(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  wchar_t *local_200;
  undefined4 local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  undefined2 **local_1e0;
  undefined2 *local_1d0;
  undefined **local_1c8;
  longlong *local_1c0;
  undefined ***local_1b8;
  undefined ****local_1b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(code **)(*param_2 + 0x218) != (code *)&DAT_14477614a) {
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  }
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    if ((short)param_3[1] == 3) {
      lVar7 = DAT_14cb420c0;
      if (DAT_14cb420c0 != 0) {
LAB_1401300a0:
        if (DAT_14c948fa0 == 0) {
          local_1d0 = &DAT_1427db2a2;
          lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948fa0 = lVar6;
          FUN_1446f470e(&local_1c8,L"ScriptStruct",1);
          local_1e8 = &LAB_1468915ce;
          local_1f0 = FUN_1427dc742;
          local_200 = L"Engine";
          local_1f8 = 199;
          local_208 = 0x10;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
          local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
          local_1e0 = &local_1d0;
          FUN_14574b4b2(lVar6);
          DAT_14c948fa0 = lVar6;
          uVar4 = FUN_1446f8646();
          lVar6 = DAT_14c948fa0;
          uVar5 = FUN_1449e2fb2();
          local_218 = L"ScriptStruct";
          FUN_14574b446(uVar5,lVar6,uVar4,L"/Script/CoreUObject");
        }
        if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (lVar6 = lVar7,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) {
LAB_1401300d6:
          lVar3 = lVar6;
          lVar6 = lVar3;
          if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x0001401300e5;
          goto LAB_1401300f4;
        }
      }
    }
    else {
      lVar6 = *param_3;
      if (lVar6 != 0) {
        if (DAT_14c948f88 == 0) {
          local_1d0 = &DAT_1427db2a2;
          lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948f88 = lVar7;
          FUN_1446f470e(&local_1c8,L"Struct",1);
          local_1e8 = &LAB_146891313;
          local_1f0 = FUN_146272f63;
          local_200 = L"Engine";
          local_1f8 = 199;
          local_208 = 8;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
          local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
          local_1e0 = &local_1d0;
          FUN_14574b4b2(lVar7);
          DAT_14c948f88 = lVar7;
          uVar4 = FUN_1446f8646();
          lVar7 = DAT_14c948f88;
          uVar5 = FUN_1400163b0();
          local_218 = L"Struct";
          FUN_14574b446(uVar5,lVar7,uVar4,L"/Script/CoreUObject");
          lVar6 = *param_3;
          if (lVar6 == 0) goto LAB_14012ff0a;
        }
        lVar7 = 0;
        if ((DAT_14c948f88 == 0) || (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 == 0))
        goto LAB_14012ff0c;
        if ((*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (lVar7 = lVar6,
           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
           == DAT_14c948f88 + 0x30)) goto LAB_1401300a0;
      }
    }
  }
LAB_14012ff0a:
  lVar7 = 0;
  goto LAB_14012ff0c;
code_r0x0001401300e5:
  lVar6 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_1401300d6;
  lVar6 = FUN_142840154(lVar3);
LAB_1401300f4:
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar3 + 0x20);
    goto LAB_1401300d6;
  }
  if (lVar6 != DAT_14c951640) goto LAB_14012ff0a;
  *(byte *)((longlong)param_3 + 10) = *(byte *)((longlong)param_3 + 10) | 2;
  lVar6 = FUN_1481f9776(lVar7);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *param_3 = lVar6;
LAB_14012ff0c:
  bVar1 = *(byte *)(param_2 + 5);
  if (((bVar1 & 5) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)) {
    if (DAT_14cb43cc0 == (longlong *)0x0) {
      uVar4 = FUN_140aec9fd();
      DAT_14cb43cc0 = (longlong *)FUN_140002ddd(FUN_14647b421,uVar4,L"NiagaraTypeDefinition");
    }
    local_1b0 = &local_1b8;
    local_1c8 = &PTR_FUN_149e37810;
    local_1b8 = &local_1c8;
    local_1c0 = param_2;
    if (*(code **)(*DAT_14cb43cc0 + 0x2d0) == FUN_145705cf0) {
      local_218 = (wchar_t *)0x0;
      uStack_210 = 0;
      FUN_145705cf0(0,local_1b0,param_3,DAT_14cb43cc0);
    }
    else {
      local_218 = (wchar_t *)0x0;
      uStack_210 = 0;
      (**(code **)(*DAT_14cb43cc0 + 0x2d0))(0,local_1b0,param_3,DAT_14cb43cc0);
    }
    bVar1 = *(byte *)(param_2 + 5);
  }
  if ((((bVar1 & 1) != 0) && ((short)param_3[1] != 3)) && (lVar6 = *param_3, lVar6 != 0)) {
    if (DAT_14c948f88 == 0) {
      local_1d0 = &DAT_1427db2a2;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = lVar6;
      FUN_1446f470e(&local_1c8,L"Struct",1);
      local_1e8 = &LAB_146891313;
      local_1f0 = FUN_146272f63;
      local_200 = L"Engine";
      local_1f8 = 199;
      local_208 = 8;
      uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
      local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
      local_1e0 = &local_1d0;
      FUN_14574b4b2(lVar6);
      DAT_14c948f88 = lVar6;
      uVar4 = FUN_1446f8646();
      lVar6 = DAT_14c948f88;
      uVar5 = FUN_1400163b0();
      local_218 = L"Struct";
      FUN_14574b446(uVar5,lVar6,uVar4,L"/Script/CoreUObject");
      lVar6 = *param_3;
      if (lVar6 == 0) goto LAB_14012fff7;
    }
    if ((DAT_14c948f88 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)) {
      iVar2 = *(int *)(lVar3 + 0x38);
      if ((*(int *)(DAT_14c948f88 + 0x38) <= iVar2) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
          == DAT_14c948f88 + 0x30)) {
        if (DAT_14c948fa0 == 0) {
          local_1d0 = &DAT_1427db2a2;
          lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,
                                CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x30) >> 8),1));
          DAT_14c948fa0 = lVar3;
          FUN_1446f470e(&local_1c8,L"ScriptStruct",1);
          local_1e8 = &LAB_1468915ce;
          local_1f0 = FUN_1427dc742;
          local_200 = L"Engine";
          local_1f8 = 199;
          local_208 = 0x10;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
          local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
          local_1e0 = &local_1d0;
          FUN_14574b4b2(lVar3);
          DAT_14c948fa0 = lVar3;
          uVar4 = FUN_1446f8646();
          lVar3 = DAT_14c948fa0;
          uVar5 = FUN_1449e2fb2();
          local_218 = L"ScriptStruct";
          FUN_14574b446(uVar5,lVar3,uVar4,L"/Script/CoreUObject");
          lVar3 = *(longlong *)(lVar6 + 0x10);
          iVar2 = *(int *)(lVar3 + 0x38);
        }
        if (((*(int *)(DAT_14c948fa0 + 0x38) <= iVar2) &&
            (*(longlong *)
              (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
             DAT_14c948fa0 + 0x30)) && ((*(byte *)((longlong)param_3 + 10) & 2) != 0)) {
          lVar6 = FUN_140c6ca38(lVar6);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          *param_3 = lVar6;
          *(byte *)((longlong)param_3 + 10) = *(byte *)((longlong)param_3 + 10) & 0xfd;
        }
      }
    }
  }
LAB_14012fff7:
  if (lVar7 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar7);
    }
    *param_3 = lVar7;
    *(byte *)((longlong)param_3 + 10) = *(byte *)((longlong)param_3 + 10) & 0xfd;
  }
  if ((local_38 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1401305cc FUN_1401305cc body=238 status=ok
// SIG undefined FUN_1401305cc(void)

undefined8 * FUN_1401305cc(undefined8 *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) =
       param_3 * *(int *)((longlong)param_2 + 0x34) + *(int *)((longlong)param_2 + 0x44);
  if (((uint)*(ulonglong *)(param_2[1] + 0x18) >> 0x11 & 1) == 0) {
    bVar5 = (*(ulonglong *)(param_2[1] + 0x18) & 0x1000001000000) != 0;
  }
  else {
    bVar5 = *(char *)((longlong)param_2 + 0x73) == -1;
  }
  *(bool *)((longlong)param_1 + 0xc) = bVar5;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)(param_2[1] + 0x1f) & 1;
  uVar1 = (**(code **)(*param_2 + 0x178))(param_2);
  bVar2 = 3;
  if (uVar1 < 8) {
    bVar2 = (char)(uVar1 >> 1) - (char)(uVar1 >> 3);
  }
  *(byte *)((longlong)param_1 + 0xe) = bVar2;
  uVar1 = *(uint *)((longlong)param_2 + 0x34) >> (bVar2 & 0x1f);
  if ((*(ulonglong *)(param_2[1] + 0x18) & 0x120000) == 0) {
    bVar5 = (~param_2[7] & 0x1000000200U) == 0;
  }
  else if (((uint)*(ulonglong *)(param_2[1] + 0x18) >> 0x11 & 1) == 0) {
    bVar5 = (bool)(uVar1 < 0x10 & *(byte *)(param_2[0xe] + 0xb0) >> 4);
  }
  else {
    bVar5 = *(char *)((longlong)param_2 + 0x73) == -1;
  }
  uVar4 = 0;
  if (bVar5 != false) {
    uVar4 = uVar1;
  }
  uVar3 = (undefined1)uVar4;
  if (0xff < uVar1) {
    uVar3 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0xf) = uVar3;
  return param_1;
}



// FUNCTION 1401306ba FUN_1401306ba body=859 status=ok
// SIG undefined FUN_1401306ba(void)

void FUN_1401306ba(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,byte param_6)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  code *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  lVar3 = DAT_14c951c70;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_5 == 0 && (param_6 & 1) == 0) &&
      (param_5 = 0, (*(byte *)((longlong)param_1 + 0x39) & 0x10) != 0)) &&
     (*(int *)(param_2 + 0x30) < 1)) {
    if (((*(byte *)(param_2 + 0x28) & 4) == 0) && ((*(byte *)(param_2 + 0x2b) & 8) == 0)) {
      iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar5 = 0;
      }
      else if (iVar4 == 1) {
        DVar1 = FUN_140ad26c0();
        DVar2 = GetCurrentThreadId();
        uVar5 = (ulonglong)(DVar1 != DVar2);
      }
      else {
        uVar5 = 1;
      }
      if (*(uint *)(lVar3 + uVar5 * 4) < 2) {
        param_5 = 0;
      }
      else {
        param_5 = FUN_1468da2e4(param_1,param_4);
      }
      (**(code **)(*param_1 + 0x1f0))(param_1,param_3,param_5);
    }
    else {
      param_5 = 0;
    }
  }
  if (param_5 == param_4) goto LAB_140130852;
  if (param_5 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x39) & 0x10) == 0) {
      (**(code **)(*param_1 + 0x1f0))(param_1,param_3,0);
    }
    local_50 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x1f0))(param_1,param_3,param_5);
    if (DAT_14c9512c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = FUN_1468be0cd;
      local_80 = (code *)&LAB_145d7be2f;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0xf8;
      FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",&DAT_14c9512c8,
                    &DAT_1468be114);
    }
    lVar3 = *(longlong *)(param_5 + 0x10);
    iVar4 = *(int *)(lVar3 + 0x38);
    if ((iVar4 < *(int *)(DAT_14c9512c8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c9512c8 + 0x38) * 8) !=
        DAT_14c9512c8 + 0x30)) {
      if (DAT_14c9512b0 == 0) {
        local_70 = &local_38;
        local_38 = FUN_140631fbe;
        local_60 = (code *)&LAB_145834656;
        local_68 = (code *)&LAB_146272d4c;
        local_78 = (code *)&LAB_1468be089;
        local_80 = FUN_14609ba58;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x410;
        FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,&DAT_1468be08e
                     );
        lVar3 = *(longlong *)(param_5 + 0x10);
        iVar4 = *(int *)(lVar3 + 0x38);
      }
      if ((*(int *)(DAT_14c9512b0 + 0x38) <= iVar4) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8)
          == DAT_14c9512b0 + 0x30)) {
        lVar3 = param_5 + 0x250;
        puVar6 = &local_48;
        goto LAB_140130898;
      }
    }
    else {
      lVar3 = param_5 + 0x28;
      puVar6 = &local_40;
LAB_140130898:
      *puVar6 = param_1;
      FUN_1468bdcba(lVar3,puVar6,param_3);
    }
    local_50 = param_5;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_5);
    }
  }
  (**(code **)(*param_1 + 0x230))(param_1,param_3,&local_50);
LAB_140130852:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140130a16 FUN_140130a16 body=125 status=ok
// SIG undefined FUN_140130a16(void)

void FUN_140130a16(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = param_1;
  }
  lVar4 = (longlong)(*(int *)(param_1 + 0x88) + -1);
  bVar2 = *(byte *)(lVar5 + 2 + lVar4 * 4);
  if ((bVar2 != 0) || (*(char *)(lVar5 + lVar4 * 4) == '\x7f')) {
    if (*(char *)(lVar5 + 1 + lVar4 * 4) == '\0') {
      FUN_14013161c(param_1 + 0x98,*(int *)(param_1 + 0xc0) - (uint)bVar2);
    }
    FUN_140130a94(param_1);
    lVar3 = *(longlong *)(param_1 + 0x80);
    lVar4 = (longlong)(*(int *)(param_1 + 0x88) + -1);
  }
  if (lVar3 != 0) {
    param_1 = lVar3;
  }
  pcVar1 = (char *)(param_1 + lVar4 * 4);
  *pcVar1 = *pcVar1 + '\x01';
  return;
}



// FUNCTION 140130a94 FUN_140130a94 body=82 status=ok
// SIG undefined FUN_140130a94(void)

int FUN_140130a94(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_1456d0846(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  FUN_140130ae6(lVar2 + (longlong)iVar1 * 4,1);
  return iVar1;
}



// FUNCTION 140130ae6 FUN_140130ae6 body=19 status=ok
// SIG undefined FUN_140130ae6(void)

void FUN_140130ae6(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 140130afa FUN_140130afa body=1843 status=ok
// SIG undefined FUN_140130afa(void)

undefined8 FUN_140130afa(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  wchar_t *local_200;
  undefined4 local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  undefined2 **local_1e0;
  undefined2 *local_1d0;
  undefined **local_1c8;
  longlong *local_1c0;
  undefined ***local_1b8;
  undefined ****local_1b0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(code **)(*param_2 + 0x218) != (code *)&DAT_14477614a) {
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  }
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    if ((short)param_1[1] == 3) {
      lVar7 = DAT_14cb420c0;
      if (DAT_14cb420c0 != 0) {
LAB_140130d00:
        if (DAT_14c948fa0 == 0) {
          local_1d0 = &DAT_1427db2a2;
          lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948fa0 = lVar6;
          FUN_1446f470e(&local_1c8,L"ScriptStruct",1);
          local_1e8 = &LAB_1468915ce;
          local_1f0 = FUN_1427dc742;
          local_200 = L"Engine";
          local_1f8 = 199;
          local_208 = 0x10;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
          local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
          local_1e0 = &local_1d0;
          FUN_14574b4b2(lVar6);
          DAT_14c948fa0 = lVar6;
          uVar4 = FUN_1446f8646();
          lVar6 = DAT_14c948fa0;
          uVar5 = FUN_1449e2fb2();
          local_218 = L"ScriptStruct";
          FUN_14574b446(uVar5,lVar6,uVar4,L"/Script/CoreUObject");
        }
        if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (lVar6 = lVar7,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) {
LAB_140130d36:
          lVar3 = lVar6;
          lVar6 = lVar3;
          if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x000140130d45;
          goto LAB_140130d54;
        }
      }
    }
    else {
      lVar6 = *param_1;
      if (lVar6 != 0) {
        if (DAT_14c948f88 == 0) {
          local_1d0 = &DAT_1427db2a2;
          lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948f88 = lVar7;
          FUN_1446f470e(&local_1c8,L"Struct",1);
          local_1e8 = &LAB_146891313;
          local_1f0 = FUN_146272f63;
          local_200 = L"Engine";
          local_1f8 = 199;
          local_208 = 8;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
          local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
          local_1e0 = &local_1d0;
          FUN_14574b4b2(lVar7);
          DAT_14c948f88 = lVar7;
          uVar4 = FUN_1446f8646();
          lVar7 = DAT_14c948f88;
          uVar5 = FUN_1400163b0();
          local_218 = L"Struct";
          FUN_14574b446(uVar5,lVar7,uVar4,L"/Script/CoreUObject");
          lVar6 = *param_1;
          if (lVar6 == 0) goto LAB_140130b46;
        }
        lVar7 = 0;
        if ((DAT_14c948f88 == 0) || (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 == 0))
        goto LAB_140130b48;
        if ((*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (lVar7 = lVar6,
           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
           == DAT_14c948f88 + 0x30)) goto LAB_140130d00;
      }
    }
  }
LAB_140130b46:
  lVar7 = 0;
  goto LAB_140130b48;
code_r0x000140130d45:
  lVar6 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_140130d36;
  lVar6 = FUN_142840154(lVar3);
LAB_140130d54:
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar3 + 0x20);
    goto LAB_140130d36;
  }
  if (lVar6 != DAT_14c951640) goto LAB_140130b46;
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) | 2;
  lVar6 = FUN_1481f9776(lVar7);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *param_1 = lVar6;
LAB_140130b48:
  bVar1 = *(byte *)(param_2 + 5);
  if (((bVar1 & 5) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)) {
    if (DAT_14cb43cc0 == (longlong *)0x0) {
      uVar4 = FUN_140aec9fd();
      DAT_14cb43cc0 = (longlong *)FUN_140002ddd(FUN_14647b421,uVar4,L"NiagaraTypeDefinition");
    }
    local_1b0 = &local_1b8;
    local_1c8 = &PTR_FUN_149e37810;
    local_1b8 = &local_1c8;
    local_1c0 = param_2;
    if (*(code **)(*DAT_14cb43cc0 + 0x2d0) == FUN_145705cf0) {
      if ((*(byte *)(param_2 + 5) & 0x40) == 0) {
        local_218 = (wchar_t *)0x0;
        FUN_140131bdc(DAT_14cb43cc0,local_1b0,param_1,DAT_14cb43cc0);
      }
      else {
        local_218 = (wchar_t *)0x0;
        FUN_14483d664(DAT_14cb43cc0,local_1b0,param_1,DAT_14cb43cc0);
      }
    }
    else {
      local_218 = (wchar_t *)0x0;
      uStack_210 = 0;
      (**(code **)(*DAT_14cb43cc0 + 0x2d0))(0,local_1b0,param_1,DAT_14cb43cc0);
    }
    bVar1 = *(byte *)(param_2 + 5);
  }
  if ((((bVar1 & 1) != 0) && ((short)param_1[1] != 3)) && (lVar6 = *param_1, lVar6 != 0)) {
    if (DAT_14c948f88 == 0) {
      local_1d0 = &DAT_1427db2a2;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = lVar6;
      FUN_1446f470e(&local_1c8,L"Struct",1);
      local_1e8 = &LAB_146891313;
      local_1f0 = FUN_146272f63;
      local_200 = L"Engine";
      local_1f8 = 199;
      local_208 = 8;
      uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
      local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
      local_1e0 = &local_1d0;
      FUN_14574b4b2(lVar6);
      DAT_14c948f88 = lVar6;
      uVar4 = FUN_1446f8646();
      lVar6 = DAT_14c948f88;
      uVar5 = FUN_1400163b0();
      local_218 = L"Struct";
      FUN_14574b446(uVar5,lVar6,uVar4,L"/Script/CoreUObject");
      lVar6 = *param_1;
      if (lVar6 == 0) goto LAB_140130c3e;
    }
    if ((DAT_14c948f88 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)) {
      iVar2 = *(int *)(lVar3 + 0x38);
      if ((*(int *)(DAT_14c948f88 + 0x38) <= iVar2) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
          == DAT_14c948f88 + 0x30)) {
        if (DAT_14c948fa0 == 0) {
          local_1d0 = &DAT_1427db2a2;
          lVar3 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,
                                CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x30) >> 8),1));
          DAT_14c948fa0 = lVar3;
          FUN_1446f470e(&local_1c8,L"ScriptStruct",1);
          local_1e8 = &LAB_1468915ce;
          local_1f0 = FUN_1427dc742;
          local_200 = L"Engine";
          local_1f8 = 199;
          local_208 = 0x10;
          uStack_210 = CONCAT44(uStack_210._4_4_,0x10000020);
          local_218 = (wchar_t *)CONCAT44(local_218._4_4_,8);
          local_1e0 = &local_1d0;
          FUN_14574b4b2(lVar3);
          DAT_14c948fa0 = lVar3;
          uVar4 = FUN_1446f8646();
          lVar3 = DAT_14c948fa0;
          uVar5 = FUN_1449e2fb2();
          local_218 = L"ScriptStruct";
          FUN_14574b446(uVar5,lVar3,uVar4,L"/Script/CoreUObject");
          lVar3 = *(longlong *)(lVar6 + 0x10);
          iVar2 = *(int *)(lVar3 + 0x38);
        }
        if (((*(int *)(DAT_14c948fa0 + 0x38) <= iVar2) &&
            (*(longlong *)
              (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
             DAT_14c948fa0 + 0x30)) && ((*(byte *)((longlong)param_1 + 10) & 2) != 0)) {
          lVar6 = FUN_140c6ca38(lVar6);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          *param_1 = lVar6;
          *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) & 0xfd;
        }
      }
    }
  }
LAB_140130c3e:
  if (lVar7 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar7);
    }
    *param_1 = lVar7;
    *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) & 0xfd;
  }
  if ((local_38 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14013122e FUN_14013122e body=380 status=ok
// SIG undefined FUN_14013122e(void)

undefined **
FUN_14013122e(longlong *param_1,longlong param_2,undefined **param_3,ulonglong param_4,
             undefined8 param_5,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined *puVar3;
  char cVar4;
  undefined1 extraout_AL;
  undefined1 uVar5;
  longlong lVar6;
  int7 extraout_var;
  int7 iVar8;
  undefined8 uVar7;
  undefined **ppuVar9;
  ulonglong uVar10;
  undefined **ppuVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  longlong *plStack_58;
  undefined *puStack_50;
  int iStack_48;
  ulonglong uStack_40;
  
  bVar12 = *(byte *)((longlong)param_1 + 0xf);
  ppuVar9 = (undefined **)(ulonglong)bVar12;
  if (*(char *)((longlong)param_1 + 0xd) == '\x01') {
    if (bVar12 == 0) {
      return (undefined **)0x0;
    }
    lVar6 = *param_1;
    uVar14 = *(uint *)(param_1 + 1);
    uStack_40 = 0x1401312a9;
    cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x1b8))();
    plVar2 = *(longlong **)(lVar6 + 0x70);
    if (cVar4 == '\0') {
      uVar5 = *(undefined1 *)
               (param_2 + (ulonglong)uVar14 +
               (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
      iVar8 = (int7)(int3)((uint)(int)plVar2[6] >> 8);
    }
    else {
      uStack_40 = 0x1401312bd;
      (**(code **)(*plVar2 + 0x1c8))(plVar2,param_2 + (ulonglong)uVar14);
      uVar5 = extraout_AL;
      iVar8 = extraout_var;
    }
    return (undefined **)(CONCAT71(iVar8,uVar5) ^ 1);
  }
  if (bVar12 == 1) {
    bVar12 = *(byte *)((longlong)param_1 + 0xe);
    ppuVar11 = (undefined **)(param_2 + (ulonglong)*(uint *)(param_1 + 1));
    ppuVar9 = &switchD_14013126d::switchdataD_149e69b50;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar12) {
    case 0:
      return (undefined **)(ulonglong)(*(char *)ppuVar11 == '\0');
    case 1:
      return (undefined **)(ulonglong)(*(short *)ppuVar11 == 0);
    case 2:
      return (undefined **)(ulonglong)(*(int *)ppuVar11 == 0);
    case 3:
      return (undefined **)(ulonglong)(*ppuVar11 == (undefined *)0x0);
    case 5:
      goto switchD_14013128b_caseD_1;
    case 6:
      goto switchD_14013128b_caseD_2;
    case 7:
      goto switchD_14013128b_caseD_3;
    case 8:
      goto switchD_14013128b_caseD_4;
    case 9:
      goto switchD_14013128b_caseD_5;
    case 10:
      goto switchD_14013128b_caseD_6;
    case 0xb:
      goto switchD_14013128b_caseD_7;
    case 0xc:
      goto switchD_14013128b_caseD_8;
    case 0xd:
      goto switchD_14013128b_caseD_9;
    case 0xe:
      goto switchD_14013128b_caseD_a;
    case 0xf:
      goto switchD_14013128b_caseD_b;
    case 0x10:
      goto switchD_14013128b_caseD_c;
    case 0x11:
      goto switchD_14013128b_caseD_d;
    case 0x12:
      goto switchD_14013128b_caseD_e;
    case 0x13:
      goto switchD_14013128b_caseD_f;
    case 0x14:
      goto switchD_14013128b_caseD_10;
    }
  }
  else {
    if (bVar12 == 0) {
      return (undefined **)0x0;
    }
    bVar12 = *(byte *)((longlong)param_1 + 0xe);
    ppuVar11 = (undefined **)(param_2 + (ulonglong)*(uint *)(param_1 + 1));
    param_3 = &switchD_14013128b::switchdataD_149e69b70;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar12) {
    case 1:
switchD_14013128b_caseD_1:
      if ((int)ppuVar9 != 0) {
        uVar10 = 0;
        uVar13 = 0;
        do {
          uVar13 = uVar13 | *(ushort *)((longlong)ppuVar11 + uVar10 * 2);
          uVar10 = uVar10 + 1;
        } while (((ulonglong)ppuVar9 & 0xffffffff) != uVar10);
        return (undefined **)CONCAT71((int7)(((ulonglong)ppuVar9 & 0xffffffff) >> 8),uVar13 == 0);
      }
      return (undefined **)&DAT_00000001;
    case 2:
switchD_14013128b_caseD_2:
      if ((int)ppuVar9 != 0) {
        uVar10 = 0;
        uVar14 = 0;
        do {
          uVar14 = uVar14 | *(uint *)((longlong)ppuVar11 + uVar10 * 4);
          uVar10 = uVar10 + 1;
        } while (((ulonglong)ppuVar9 & 0xffffffff) != uVar10);
        return (undefined **)CONCAT71((int7)(((ulonglong)ppuVar9 & 0xffffffff) >> 8),uVar14 == 0);
      }
      return (undefined **)&DAT_00000001;
    case 3:
switchD_14013128b_caseD_3:
      if ((int)ppuVar9 != 0) {
        uVar10 = 0;
        uVar15 = 0;
        do {
          uVar15 = uVar15 | (ulonglong)ppuVar11[uVar10];
          uVar10 = uVar10 + 1;
        } while (((ulonglong)ppuVar9 & 0xffffffff) != uVar10);
        return (undefined **)CONCAT71((int7)(((ulonglong)ppuVar9 & 0xffffffff) >> 8),uVar15 == 0);
      }
      return (undefined **)&DAT_00000001;
    case 4:
switchD_14013128b_caseD_4:
      ppuVar9[2] = (undefined *)&PTR_caseD_4_149e69b90;
      puVar3 = ppuVar11[2];
      ppuVar9[3] = ppuVar11[1];
      ppuVar9[4] = puVar3;
      ppuVar9[5] = ppuVar11[3];
      return ppuVar9 + 3;
    case 5:
switchD_14013128b_caseD_5:
      return ppuVar11 + 1;
    case 6:
switchD_14013128b_caseD_6:
                    /* WARNING: Could not recover jumptable at 0x0001427da16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar9 = (undefined **)(**(code **)(*ppuVar11 + 0x18))(ppuVar11,0);
      return ppuVar9;
    case 7:
switchD_14013128b_caseD_7:
      if ((int)ppuVar9 != 0) {
        FUN_1400020a8(ppuVar11);
      }
      return ppuVar11;
    case 8:
switchD_14013128b_caseD_8:
      ppuVar9[2] = (undefined *)&PTR_caseD_8_149e69bb0;
      ppuVar9[3] = ppuVar11[1];
      return ppuVar9 + 3;
    case 9:
switchD_14013128b_caseD_9:
      return ppuVar11 + 1;
    case 10:
switchD_14013128b_caseD_a:
                    /* WARNING: Could not recover jumptable at 0x0001427da2d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ppuVar9 = (undefined **)(**(code **)(*ppuVar11 + 0x18))(ppuVar11,0);
      return ppuVar9;
    case 0xb:
switchD_14013128b_caseD_b:
      if ((int)ppuVar9 != 0) {
        FUN_1400020a8(ppuVar11);
      }
      return ppuVar11;
    case 0xc:
switchD_14013128b_caseD_c:
      *ppuVar11 = (undefined *)&PTR_LAB_149e064c0;
      if ((int)ppuVar9 != 0) {
        FUN_1400020a8(ppuVar11);
      }
      return ppuVar11;
    case 0xd:
switchD_14013128b_caseD_d:
      uStack_40 = 0x1403100b7;
      uVar7 = FUN_14001cc68(0x60,0x10);
      ppuVar9 = (undefined **)FUN_1403100d4(uVar7,ppuVar11 + 1,ppuVar11[4],ppuVar9);
      return ppuVar9;
    case 0xe:
switchD_14013128b_caseD_e:
      uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
      if (param_6 == 0) {
        FUN_1400eecdc(&plStack_58,param_3);
      }
      else {
        plStack_58 = (longlong *)FUN_14001cc68(0x20,0x10);
        plStack_58[1] = 0;
        plStack_58[2] = 0;
        *plStack_58 = param_6;
        *(int *)(plStack_58 + 1) = (int)param_3;
        *(char *)(plStack_58 + 3) = (char)((ulonglong)param_3 >> 0x20);
        *(undefined1 *)((longlong)plStack_58 + 0x19) = 0;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_58 + 0xc) = *(int *)((longlong)plStack_58 + 0xc) + 1;
          UNLOCK();
        }
      }
      lVar6 = FUN_14001cc68(0x90,0x10);
      FUN_1400d6540(lVar6,param_5,&plStack_58);
      uStack_68 = 0;
      uStack_60 = 0;
      puStack_50 = ppuVar11[1];
      iStack_48 = *(int *)(ppuVar11 + 2);
      ppuStack_78 = ppuVar9;
      ppuStack_70 = param_3;
      FUN_1400d65e0(lVar6,&puStack_50,&ppuStack_78,
                    *(undefined4 *)(&DAT_149e69990 + (param_4 & 0xff) * 4));
      plVar2 = plStack_58;
      if (plStack_58 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_144716208(plStack_58);
          FUN_1400020a8(plVar2);
        }
      }
      ppuVar9 = (undefined **)(lVar6 + 0x30);
      if (lVar6 == 0) {
        ppuVar9 = (undefined **)0x0;
      }
      if ((uStack_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return ppuVar9;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    case 0xf:
switchD_14013128b_caseD_f:
      return (undefined **)&DAT_00000001;
    case 0x10:
switchD_14013128b_caseD_10:
      return (undefined **)(ulonglong)bVar12;
    }
  }
  if ((int)ppuVar9 != 0) {
    uVar10 = 0;
    bVar12 = 0;
    do {
      bVar12 = bVar12 | *(byte *)((longlong)ppuVar11 + uVar10);
      uVar10 = uVar10 + 1;
    } while (((ulonglong)ppuVar9 & 0xffffffff) != uVar10);
    return (undefined **)CONCAT71((int7)(((ulonglong)ppuVar9 & 0xffffffff) >> 8),bVar12 == 0);
  }
  return (undefined **)&DAT_00000001;
}



// FUNCTION 140131310 FUN_140131310 body=252 status=ok
// SIG undefined FUN_140131310(void)

void FUN_140131310(longlong param_1,byte param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x80);
  lVar7 = lVar4;
  if (lVar4 == 0) {
    lVar7 = param_1;
  }
  lVar6 = (longlong)(*(int *)(param_1 + 0x88) + -1);
  if (*(char *)(lVar7 + 2 + lVar6 * 4) == '\x7f') {
    if (*(char *)(lVar7 + 1 + lVar6 * 4) == '\0') {
      FUN_14013161c(param_1 + 0x98,*(int *)(param_1 + 0xc0) + -0x7f,0x7f);
    }
    FUN_140130a94(param_1);
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar6 = (longlong)(*(int *)(param_1 + 0x88) + -1);
  }
  if (lVar4 == 0) {
    lVar4 = param_1;
  }
  pcVar1 = (char *)(lVar4 + 2 + lVar6 * 4);
  *pcVar1 = *pcVar1 + '\x01';
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar4 = param_1;
  }
  pbVar2 = (byte *)(lVar4 + 1 + (longlong)(*(int *)(param_1 + 0x88) + -1) * 4);
  *pbVar2 = *pbVar2 | param_2;
  uVar3 = FUN_14013140c(param_1 + 0x98,1);
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    lVar4 = param_1 + 0x98;
  }
  uVar5 = uVar3 + 0x1f;
  if (-1 < (int)uVar3) {
    uVar5 = uVar3;
  }
  *(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4) =
       (uint)param_2 << ((byte)uVar3 & 0x1f) |
       *(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4) & ~(1 << (uVar3 & 0x1f));
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | param_2 ^ 1;
  return;
}



// FUNCTION 14013140c FUN_14013140c body=154 status=ok
// SIG undefined FUN_14013140c(void)

int FUN_14013140c(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < param_2) {
    iVar3 = -1;
    if (iVar1 != 0) {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    iVar5 = iVar1 + param_2 + -1;
    iVar8 = iVar1 + param_2 + 0x1e;
    if (-1 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar8 >> 5 == iVar3) {
      *(int *)(param_1 + 0x28) = iVar1 + param_2;
    }
    else {
      FUN_1401314a6(param_1);
      uVar6 = *(int *)(param_1 + 0x28) + param_2;
      uVar2 = *(int *)(param_1 + 0x28) + param_2 + 0x1f;
      if (-1 < (int)uVar6) {
        uVar2 = uVar6;
      }
      *(uint *)(param_1 + 0x28) = uVar6;
      iVar3 = uVar6 - (uVar2 & 0xffffffe0);
      if (iVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x20);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar7 = param_1;
        }
        bVar4 = -(char)iVar3;
        *(uint *)(lVar7 + (longlong)((int)uVar2 >> 5) * 4) =
             (uint)(*(int *)(lVar7 + (longlong)((int)uVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
  }
  return iVar1;
}



// FUNCTION 1401314a6 FUN_1401314a6 body=151 status=ok
// SIG undefined FUN_1401314a6(void)

void FUN_1401314a6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (param_2 <= *(int *)(param_1 + 0x2c)) {
    return;
  }
  if (param_2 + 0x1fU < 0x120) {
    iVar2 = 0x100;
  }
  else {
    uVar4 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0x2c) + 0x1fU < 0x120) {
      uVar1 = 4;
      if (4 < uVar4) {
        uVar1 = uVar4;
      }
    }
    else {
      uVar1 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
    }
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1 << 2,0);
      uVar1 = (uint)(uVar3 >> 2);
    }
    iVar2 = -0x20;
    if ((int)uVar4 <= (int)uVar1) {
      iVar2 = uVar1 << 5;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  FUN_1456d07e4(param_1,*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14013153e FUN_14013153e body=47 status=ok
// SIG undefined FUN_14013153e(void)

void FUN_14013153e(undefined8 param_1,longlong *param_2)

{
  if ((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 0x40) != 0) {
    FUN_14483d664();
    return;
  }
  FUN_140131bdc();
  return;
}



// FUNCTION 14013156e FUN_14013156e body=174 status=ok
// SIG undefined FUN_14013156e(void)

void FUN_14013156e(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar4 = lVar2;
  if (lVar2 == 0) {
    lVar4 = param_1;
  }
  if (*(char *)(lVar4 + 1 + (longlong)(int)(uVar3 - 1) * 4) == '\0') {
    FUN_14013161c(param_1 + 0x98,
                  *(int *)(param_1 + 0xc0) -
                  (uint)*(byte *)(lVar4 + 2 + (longlong)(int)(uVar3 - 1) * 4));
    uVar3 = *(uint *)(param_1 + 0x88);
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if (1 < (int)uVar3) {
    lVar4 = lVar2;
    if (lVar2 == 0) {
      lVar4 = param_1;
    }
    uVar5 = (ulonglong)uVar3;
    do {
      uVar3 = (uint)uVar5;
      if (*(char *)(lVar4 + -2 + uVar5 * 4) != '\0') break;
      *(uint *)(param_1 + 0x88) = uVar3 - 1;
      uVar3 = 1;
      bVar1 = 2 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(undefined1 *)(param_1 + 3 + (longlong)(int)(uVar3 - 1) * 4) = 1;
  return;
}



// FUNCTION 14013161c FUN_14013161c body=126 status=ok
// SIG undefined FUN_14013161c(void)

void FUN_14013161c(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = param_3 + (int)param_2;
  iVar1 = *(int *)(param_1 + 0x28) - iVar4;
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    FUN_14493566c(lVar2,param_2,lVar2,iVar4,iVar1);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  iVar4 = iVar4 - param_3;
  iVar1 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  if (iVar4 % 0x20 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    bVar3 = -(char)(iVar4 % 0x20);
    *(uint *)(lVar2 + (longlong)(iVar1 >> 5) * 4) =
         (uint)(*(int *)(lVar2 + (longlong)(iVar1 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1401316bc FUN_1401316bc body=271 status=ok
// SIG undefined FUN_1401316bc(void)

void FUN_1401316bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [38];
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar5 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(lVar5 + lVar6);
      local_32 = (ushort)(uVar2 >> 0x10) & 0x100 |
                 (ushort)(uVar2 >> 7) & 0xfe00 | (ushort)(uVar2 >> 1) & 0x80 | (ushort)uVar2 & 0xff;
      plVar3 = *(longlong **)(*param_2 + 8);
      puVar4 = (ulonglong *)plVar3[1];
      if (puVar4[1] < *puVar4 + 2) {
        if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar3 + 0x170))(plVar3,&local_32,2);
        }
        else {
          thunk_FUN_1457251a8(plVar3,&local_32);
        }
      }
      else {
        *puVar4 = *puVar4 + 2;
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar5 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    FUN_140131964(param_1,param_2,*(int *)(param_1 + 0xc0),lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401317cc FUN_1401317cc body=407 status=ok
// SIG undefined FUN_1401317cc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_1401317cc(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *_Src;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_1088 [40];
  undefined4 local_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined1 local_1050 [4096];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1088;
  piVar9 = *(int **)(param_1 + 0xa8);
  if (*(int **)(param_1 + 0xa8) == (int *)0x0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0x10000000000;
    lVar10 = *(longlong *)(param_1 + 0x70);
    if (lVar10 == 0) {
      uVar4 = 8;
    }
    else {
      do {
        iVar2 = *(int *)(lVar10 + 0x30);
        if (0 < iVar2) {
          iVar8 = 0;
          do {
            FUN_1401305cc(&local_1060,lVar10,iVar8);
            uVar3 = local_48;
            lVar11 = (longlong)(int)local_48;
            uVar4 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,uVar4);
            if (local_48._4_4_ < uVar4) {
              FUN_1401334c4(local_1050,uVar3 & 0xffffffff);
            }
            puVar5 = local_50;
            if (local_50 == (undefined1 *)0x0) {
              puVar5 = local_1050;
            }
            puVar1 = (undefined4 *)(puVar5 + lVar11 * 0x10);
            *puVar1 = local_1060;
            puVar1[1] = uStack_105c;
            puVar1[2] = uStack_1058;
            puVar1[3] = uStack_1054;
            iVar8 = iVar8 + 1;
          } while (iVar2 != iVar8);
        }
        lVar10 = *(longlong *)(lVar10 + 0x48);
      } while (lVar10 != 0);
      uVar4 = (int)local_48 << 4 | 8;
    }
    piVar6 = (int *)FUN_14001cc68(uVar4,8);
    puVar5 = local_50;
    *piVar6 = (int)local_48;
    _Src = local_1050;
    if (local_50 != (undefined1 *)0x0) {
      _Src = local_50;
    }
    memcpy(piVar6 + 2,_Src,(longlong)(int)local_48 << 4);
    if (puVar5 != (undefined1 *)0x0) {
      FUN_1400020a8(puVar5);
    }
    LOCK();
    piVar7 = *(int **)(param_1 + 0xa8);
    bVar12 = piVar7 == (int *)0x0;
    if (bVar12) {
      *(int **)(param_1 + 0xa8) = piVar6;
      piVar7 = (int *)0x0;
    }
    UNLOCK();
    piVar9 = piVar6;
    if ((!bVar12) && (piVar9 = piVar7, piVar6 != (int *)0x0)) {
      FUN_1400020a8(piVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1088) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar9;
}



// FUNCTION 140131964 FUN_140131964 body=247 status=ok
// SIG undefined FUN_140131964(void)

void FUN_140131964(undefined8 param_1,longlong *param_2,uint param_3,undefined4 *param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  if (param_3 < 9) {
    local_3c = CONCAT31(local_3c._1_3_,(byte)uVar3 & (byte)*param_4);
    plVar1 = *(longlong **)(*param_2 + 8);
    puVar2 = (ulonglong *)plVar1[1];
    if (puVar2[1] < *puVar2 + 1) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_3c,1);
    }
    else {
      *puVar2 = *puVar2 + 1;
    }
  }
  else if (param_3 < 0x11) {
    local_3c = CONCAT22(local_3c._2_2_,(ushort)uVar3 & (ushort)*param_4);
    FUN_144afeef0(*param_2);
  }
  else {
    uVar4 = (param_3 + 0x1f >> 5) - 1;
    if (uVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)uVar4;
      uVar6 = 0;
      do {
        local_3c = param_4[uVar6];
        FUN_144afef32(*param_2,&local_3c);
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
    local_3c = uVar3 & param_4[uVar5];
    FUN_144afef32(*param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140131a5c FUN_140131a5c body=239 status=ok
// SIG undefined FUN_140131a5c(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000149e6a2f0) overlaps instruction at (ram,0x000149e6a2ef)
    */
/* WARNING: Removing unreachable block (ram,0x000149e6a2e5) */
/* WARNING: Removing unreachable block (ram,0x000149e6a300) */
/* WARNING: Removing unreachable block (ram,0x000149e6a28d) */
/* WARNING: Removing unreachable block (ram,0x000149e6a28f) */
/* WARNING: Removing unreachable block (ram,0x000149e6a20b) */

void FUN_140131a5c(longlong *param_1,byte *param_2,byte param_3)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  char cVar12;
  char *pcVar7;
  undefined7 uVar13;
  char *pcVar9;
  int *piVar10;
  longlong *plVar11;
  char *pcVar14;
  undefined1 uVar15;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined1 unaff_SIL;
  char *unaff_RDI;
  char *pcVar16;
  byte *pbVar17;
  undefined2 in_SS;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  ushort uVar6;
  byte *pbVar8;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar15 = SUB81(param_2,0);
  plVar11 = *(longlong **)(*param_1 + 8);
  pbVar8 = *(byte **)plVar11[1];
  pbVar17 = (byte *)((undefined8 *)plVar11[1])[1];
  pcVar16 = (char *)((longlong)&switchD_140131a80::caseD_4 +
                    (longlong)(int)(&switchD_140131a80::caseD_4)[param_3]);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_3) {
  case 0:
    if (pbVar8 + 1 <= pbVar17) {
      *param_2 = *pbVar8;
      *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 1;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140131b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x170))(plVar11,uVar15,1);
    return;
  case 1:
    break;
  case 2:
    if (pbVar8 + 4 <= pbVar17) {
      *(undefined4 *)param_2 = *(undefined4 *)pbVar8;
      *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
      return;
    }
    if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140131b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x170))(plVar11,uVar15,4);
      return;
    }
    FUN_14572512c();
    return;
  case 3:
    if (pbVar8 + 8 <= pbVar17) {
      *(undefined8 *)param_2 = *(undefined8 *)pbVar8;
      *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 8;
      return;
    }
    if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140131af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x170))(plVar11,uVar15,8);
      return;
    }
    FUN_146821949();
    return;
  case 7:
  default:
    pcVar14 = (char *)((longlong)plVar11 + -1);
    bVar2 = (byte)pbVar8;
    uVar13 = (undefined7)((ulonglong)pbVar8 >> 8);
    if (pcVar14 != (char *)0x0 && pcVar16 == (char *)0x0) {
      *pbVar8 = *pbVar8 + bVar2 +
                (0xfffffffeb6195e2fU <
                (ulonglong)(longlong)(int)(&switchD_140131a80::caseD_4)[param_3]);
      *pbVar8 = *pbVar8 | bVar2;
      *pbVar8 = *pbVar8 + bVar2;
      *pcVar16 = *pcVar16 + (char)pcVar16;
      *pcVar14 = *pcVar14 + bVar2;
      cVar4 = bVar2 + *pbVar8;
      uStack_8 = (int *)CONCAT71(uVar13,cVar4);
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      *(char *)uStack_8 = (char)*uStack_8 + unaff_BL;
      cVar12 = (char)((ulonglong)pbVar8 >> 8);
      *unaff_RDI = *unaff_RDI - cVar12;
      *uStack_8 = *uStack_8 + (int)pcVar16;
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      *unaff_RDI = *unaff_RDI - cVar12;
      *uStack_8 = *uStack_8 + (int)pcVar16;
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      param_2[0x149e6] = param_2[0x149e6] + cVar12;
      *(char *)uStack_8 = (char)*uStack_8 + cVar4;
      pcVar7 = (char *)(ulonglong)(uint)(int)(short)uStack_8;
      *(undefined2 *)((longlong)&uStack_8 + (longlong)pcVar14 * 2 + 1) = in_SS;
      *pcVar7 = *pcVar7 + cVar4;
      *pcVar7 = *pcVar7 + cVar4;
      *pcVar7 = *pcVar7 + cVar4;
      *pcVar7 = *pcVar7 + cVar4;
      if (*pcVar7 != '\0') {
        *pcVar7 = *pcVar7 + cVar4;
        *pcVar7 = *pcVar7 + cVar4;
        *pcVar7 = *pcVar7 + cVar4;
        *pcVar7 = *pcVar7 + cVar4;
        pcVar7 = (char *)func_0x00014b2cca25();
      }
      *pcVar7 = *pcVar7 + (char)pcVar7;
      uVar13 = (undefined7)((ulonglong)pcVar7 >> 8);
      bVar5 = (char)pcVar7 + (char)pcVar14;
      pbVar8 = (byte *)CONCAT71(uVar13,bVar5);
      bRam00000000000149e6 = bVar5;
      *pbVar8 = *pbVar8 + bVar5;
      *pbVar8 = *pbVar8 + bVar5;
      *pbVar8 = *pbVar8 + bVar5;
      bVar2 = *pbVar8;
      *pbVar8 = *pbVar8 + bVar5;
      *pbVar8 = *pbVar8 + bVar5 + CARRY1(bVar2,bVar5);
      *pbVar8 = *pbVar8 | bVar5;
      *pbVar8 = *pbVar8 + bVar5;
      *pcVar16 = *pcVar16 + (char)pcVar16;
      *pcVar14 = *pcVar14 + bVar5;
      cVar4 = bVar5 + *pbVar8;
      pcVar9 = (char *)CONCAT71(uVar13,cVar4);
      pcVar9[0x1462728] = pcVar9[0x1462728] + cVar4;
      *pcVar9 = *pcVar9 + cVar4;
      cVar4 = cVar4 + (char)((ulonglong)pcVar14 >> 8);
      piVar10 = (int *)CONCAT71(uVar13,cVar4);
      *unaff_RDI = *unaff_RDI - (char)((ulonglong)pcVar7 >> 8);
      *piVar10 = *piVar10 + (int)pcVar16;
      *(char *)piVar10 = (char)*piVar10 + cVar4;
      plVar11 = (longlong *)((ulonglong)auStack_10 & 0xffffffff);
      uRam8cf00000000149e6 = unaff_SIL;
      *plVar11 = (longlong)(pcVar16 + *plVar11);
      cVar4 = (char)plVar11;
      *(char *)plVar11 = (char)*plVar11 + cVar4;
      *(char *)plVar11 = (char)*plVar11 + cVar4;
      *(char *)plVar11 = (char)*plVar11 + cVar4;
      *(char *)plVar11 = (char)*plVar11 + cVar4;
      *(char *)plVar11 = (char)*plVar11 + cVar4;
      *pcVar14 = *pcVar14 + (char)pbVar17;
      out(*(undefined1 *)((ulonglong)piVar10 & 0xffffffff),CONCAT11(cVar3,uVar15));
      *(char *)CONCAT71(unaff_00000019,unaff_BL) =
           *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (-1 < (char)(bVar2 + 10)) {
      uVar1 = (ushort)*(byte *)(CONCAT71(unaff_00000019,unaff_BL) + -0x909d388);
      uVar6 = (ushort)CONCAT71(uVar13,bVar2 + 10);
      cVar3 = (char)(uVar6 / uVar1);
      pcVar16 = (char *)CONCAT62((int6)((ulonglong)pbVar8 >> 0x10),
                                 CONCAT11((char)(uVar6 % uVar1),cVar3));
      *pcVar16 = *pcVar16 + cVar3;
      *pcVar16 = *pcVar16 + cVar3;
      *pcVar16 = *pcVar16 + cVar3;
      *pcVar16 = *pcVar16 + cVar3;
      *pcVar16 = *pcVar16 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pbVar8 + 2 <= pbVar17) {
    *(undefined2 *)param_2 = *(undefined2 *)pbVar8;
    *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140131b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x170))(plVar11,uVar15,2);
    return;
  }
  thunk_FUN_1457251a8();
  return;
}



// FUNCTION 140131b4c FUN_140131b4c body=142 status=ok
// SIG undefined FUN_140131b4c(void)

bool FUN_140131b4c(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  short sVar2;
  bool bVar3;
  float fVar4;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == (float *)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *param_3;
  }
  fVar1 = *param_2;
  local_34 = fVar1;
  sVar2 = _fdtest();
  if (sVar2 == 2) {
    local_34 = fVar4;
    sVar2 = _fdtest();
    bVar3 = sVar2 == 2;
  }
  else {
    bVar3 = (bool)(-(fVar1 == fVar4) & 1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140131bdc FUN_140131bdc body=6121 status=ok
// SIG undefined FUN_140131bdc(void)

void FUN_140131bdc(longlong *param_1,longlong *param_2,longlong param_3,wchar_t *param_4,
                  longlong param_5)

{
  byte *pbVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  DWORD DVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  DWORD dwTlsIndex;
  DWORD DVar12;
  LPVOID pvVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  wchar_t *pwVar21;
  longlong *plVar22;
  byte bVar23;
  wchar_t *pwVar24;
  wchar_t *unaff_R14;
  bool bVar25;
  undefined1 auStack_3e8 [32];
  wchar_t *local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  wchar_t *local_3b0;
  wchar_t *local_3a8;
  code *local_3a0;
  undefined1 *local_398;
  code **local_390;
  code *local_388;
  code *local_380;
  byte local_371;
  longlong *local_370;
  longlong *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  wchar_t *local_358;
  undefined8 local_350;
  longlong *local_348;
  longlong *local_340;
  longlong local_338;
  char *local_330;
  undefined8 local_328;
  undefined8 local_320;
  uint local_318;
  uint uStack_314;
  undefined8 local_304 [5];
  int local_2dc [3];
  undefined8 local_2d0;
  int local_2b8;
  int iStack_2b4;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  code *local_2a0;
  undefined1 local_298 [8];
  code *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  int local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined5 uStack_220;
  undefined4 uStack_21b;
  undefined1 uStack_217;
  char cStack_216;
  char cStack_215;
  undefined1 uStack_214;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  plVar3 = *(longlong **)(*param_2 + 8);
  dwTlsIndex = DAT_14c75ec34;
  local_370 = param_1;
  local_368 = param_2;
  local_358 = param_4;
  local_338 = param_3;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar12 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c75ec34 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar25) {
      DVar12 = DAT_14c75ec34;
      DVar6 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar6;
    UNLOCK();
    if (bVar25) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar12;
    }
  }
  pwVar24 = local_358;
  pvVar13 = TlsGetValue(dwTlsIndex);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar13);
    FUN_140fddf04(pvVar13);
    TlsSetValue(dwTlsIndex,pvVar13);
  }
  if (DAT_14c949118 == 0) {
    local_2a0 = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar17 = FUN_140011aa6();
      lVar16 = FUN_140011c0e(uVar17,0x250,8);
    }
    else {
      lVar16 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar16;
    FUN_1446f470e(local_298,L"Class",1);
    local_390 = &local_2a0;
    local_398 = &LAB_146891e90;
    local_3a0 = (code *)&LAB_146273097;
    local_3b0 = L"Engine";
    local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,199);
    local_3b8 = 0x20;
    local_3c0 = CONCAT44(local_3c0._4_4_,0x10000000);
    local_3c8._0_4_ = 8;
    FUN_14574b4b2(lVar16);
    DAT_14c949118 = lVar16;
    if (DAT_14c951858 == 0) {
      local_390 = (code **)&local_288;
      local_288 = FUN_1449e2820;
      local_380 = FUN_14081d0ea;
      local_388 = FUN_14081d0ea;
      local_398 = &LAB_1468c5283;
      local_3a0 = FUN_142809da0;
      local_3a8 = L"Engine";
      local_3b0 = (wchar_t *)0x400000000;
      local_3b8 = CONCAT44(local_3b8._4_4_,0x10000000);
      local_3c0 = CONCAT44(local_3c0._4_4_,8);
      local_3c8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar19 = DAT_14c951858;
    lVar16 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_290 = (code *)&DAT_1427db2a2;
      if (DAT_14c963f04 == '\0') {
        uVar17 = FUN_140011aa6();
        lVar18 = FUN_140011c0e(uVar17,0x250,8);
      }
      else {
        lVar18 = FUN_14001cc68(0x250,8);
      }
      unaff_R14 = L"Struct";
      DAT_14c948f88 = lVar18;
      FUN_1446f470e(&local_318,L"Struct",1);
      local_390 = &local_290;
      local_398 = &LAB_146891313;
      local_3a0 = FUN_146272f63;
      local_3b0 = L"Engine";
      local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,199);
      local_3b8 = 8;
      local_3c0 = CONCAT44(local_3c0._4_4_,0x10000020);
      local_3c8._0_4_ = 8;
      FUN_14574b4b2(lVar18);
      DAT_14c948f88 = lVar18;
      if (DAT_14c927740 == (longlong *)0x0) {
        local_390 = (code **)&local_288;
        local_288 = FUN_1449e2820;
        local_380 = FUN_14081d0ea;
        local_388 = FUN_14081d0ea;
        local_398 = &LAB_146856450;
        local_3a0 = FUN_1427b121c;
        local_3a8 = L"Engine";
        local_3b0 = (wchar_t *)0x0;
        local_3b8 = CONCAT44(local_3b8._4_4_,0x10000021);
        local_3c0 = CONCAT44(local_3c0._4_4_,8);
        local_3c8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar18 = DAT_14c948f88;
      plVar22 = DAT_14c927740;
      uVar17 = FUN_1400163b0();
      local_3c8 = L"Struct";
      FUN_14574b446(uVar17,lVar18,plVar22,L"/Script/CoreUObject");
    }
    local_3c8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar16,lVar19,L"/Script/CoreUObject");
    pwVar24 = local_358;
  }
  bVar20 = 1;
  if ((*(int *)(local_370[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(local_370[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
      DAT_14c949118 + 0x30)) {
LAB_140131d8c:
    local_328 = 0;
    local_350 = 0;
    uVar17 = 0;
  }
  else {
    if (*(int *)((longlong)plVar3 + 0x44) < 0x3f3) {
LAB_140131d8a:
      bVar20 = 0;
      goto LAB_140131d8c;
    }
    local_318 = local_318 & 0xffffff00;
    if ((*(byte *)(plVar3 + 5) & 4) != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1))
      {
        FUN_145dfc00c(&DAT_14c951778);
        atexit((_func_5014 *)&LAB_142809c19);
        _Init_thread_footer(&DAT_14c951808);
      }
      local_318 = local_318 & 0xffffff00;
    }
    plVar22 = *(longlong **)(*local_368 + 8);
    puVar4 = (ulonglong *)plVar22[1];
    pbVar1 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar1) {
      (**(code **)(*plVar22 + 0x170))(plVar22,&local_318,1);
      bVar20 = (byte)local_318;
    }
    else {
      bVar20 = *(byte *)*puVar4;
      local_318 = CONCAT31(local_318._1_3_,bVar20);
      *puVar4 = (ulonglong)pbVar1;
    }
    if ((bVar20 & 2) == 0) goto LAB_140131d8a;
    if ((*(byte *)(plVar3 + 5) & 4) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_1468c37cc(0,0,0);
    }
    local_290 = (code *)CONCAT71(local_290._1_7_,uVar8);
    plVar22 = *(longlong **)(*local_368 + 8);
    puVar4 = (ulonglong *)plVar22[1];
    puVar2 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar2) {
      (**(code **)(*plVar22 + 0x170))(plVar22,&local_290,1);
    }
    else {
      local_290 = (code *)CONCAT71(local_290._1_7_,*(undefined1 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    if ((*(byte *)(plVar3 + 5) & 1) == 0) goto LAB_140131d8a;
    if ((((*(byte *)((longlong)plVar3 + 0x2c) & 2) != 0) &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951808)) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
    uVar17 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    local_288 = (code *)CONCAT71(local_288._1_7_,1);
    lVar19 = local_338;
    FUN_145d252ee(&DAT_14c951778,local_338);
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_350 = CONCAT71((int7)((ulonglong)lVar19 >> 8),*(char *)(lVar16 + 0xd60));
    bVar20 = 0;
    local_328 = 0;
    if (*(char *)(lVar16 + 0xd60) != '\0') {
      local_328 = *(undefined8 *)(lVar16 + 0xd58);
    }
    *(undefined1 *)(lVar16 + 0xd60) = 1;
    *(undefined8 *)(lVar16 + 0xd58) = 0;
  }
  if (((int)plVar3[8] < 0x1f7) || ((*(byte *)((longlong)plVar3 + 0x2b) & 0x40) == 0)) {
    local_35c = 0;
  }
  else {
    local_35c = (**(code **)(*local_370 + 0x350))();
  }
  bVar23 = *(byte *)(plVar3 + 5);
  local_320 = uVar17;
  if ((bVar23 & 1) != 0) {
    plVar22 = (longlong *)local_370[0xe];
    if (plVar22 == (longlong *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = (int)plVar22[6];
    }
    bVar20 = *(byte *)((longlong)plVar3 + 0x2b);
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_258 = 0;
    uStack_250 = 0;
    local_268 = 0;
    uStack_260 = 0;
    uStack_278._0_4_ = 0;
    uStack_278._4_4_ = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    local_288 = (code *)0x0;
    uStack_280._0_4_ = 0;
    uStack_280._4_4_ = 0;
    local_248 = -1;
    local_240 = 0xffffffffffffffff;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    uStack_21b = 0;
    uStack_217 = 0;
    cStack_216 = '\0';
    cStack_215 = '\0';
    uStack_214 = 0;
    FUN_140241707(local_368,&local_288);
    if (CONCAT44(uStack_270,uStack_278._4_4_) != 0) {
      bVar20 = bVar20 >> 6 & (bVar23 & 2) == 0;
      local_348 = (longlong *)(lVar16 + 0xd58);
      bVar23 = 0;
      do {
        if ((bVar23 & 1) != 0) {
          if (iVar11 < 2) {
            plVar14 = (longlong *)plVar22[9];
            if (plVar14 == (longlong *)0x0) {
              iVar11 = 0;
              plVar22 = (longlong *)0x0;
            }
            else {
              do {
                if ((*(code **)(*plVar3 + 0x80) == FUN_1449734ec) ||
                   (cVar7 = (**(code **)(*plVar3 + 0x80))(plVar3,plVar14), cVar7 == '\0')) {
                  uVar15 = plVar14[7];
                  uVar10 = (uint)uVar15;
                  if ((((uVar10 >> 0x18 & 1) != 0) ||
                      ((*(byte *)((longlong)plVar3 + 0x2b) & 0x40) == 0)) &&
                     (((uVar15 & 0x80800c20202000) == 0 ||
                      (((((((uVar10 >> 0xd & 1) == 0 ||
                           ((*(byte *)((longlong)plVar3 + 0x29) & 1) == 0)) || (0 < (int)plVar3[6]))
                         && (((uVar10 >> 0x15 & 1) == 0 ||
                             ((*(byte *)((longlong)plVar3 + 0x35) & 0x10) == 0)))) &&
                        ((((uVar15 >> 0x2f & 1) == 0 ||
                          ((*(uint *)((longlong)plVar3 + 0x34) & 0x401000) != 0x1000)) &&
                         ((((uVar10 >> 0x1d & 1) == 0 ||
                           ((*(byte *)((longlong)plVar3 + 0x37) & 8) != 0)) ||
                          ((*(byte *)(plVar3 + 5) & 0x24) == 0)))))) &&
                       ((((uVar15 >> 0x37 & 1) == 0 ||
                         (((*(byte *)(plVar3 + 5) & 0x20) == 0 &&
                          ((*(byte *)((longlong)plVar3 + 0x37) & 0x20) != 0)))) &&
                        (((uVar15 & 0x800000000) == 0 ||
                         ((*(byte *)((longlong)plVar3 + 0x2b) & 0x20) == 0)))))))))) {
                    iVar11 = (int)plVar14[6];
                    plVar22 = plVar14;
                    break;
                  }
                }
                plVar14 = (longlong *)plVar14[9];
                iVar11 = 0;
                plVar22 = (longlong *)0x0;
              } while (plVar14 != (longlong *)0x0);
            }
          }
          else {
            iVar11 = iVar11 + -1;
          }
        }
        if ((uStack_21b._3_1_ != '\0' & (byte)local_35c) == 1) {
          (**(code **)(*local_370 + 0x340))(local_370,&local_318,&local_228);
          if ((CONCAT44(uStack_314,local_318) != 0) &&
             (CONCAT44(uStack_270,uStack_278._4_4_) != CONCAT44(uStack_314,local_318))) {
            uStack_278._4_4_ = local_318;
            uStack_270 = uStack_314;
          }
        }
        plVar14 = plVar22;
        if ((plVar22 == (longlong *)0x0) || (plVar22[4] != CONCAT44(uStack_270,uStack_278._4_4_))) {
          if ((bVar20 != 0) && ((*(ushort *)((longlong)plVar3 + 0x35) & 0x4010) == 0)) {
            for (lVar16 = FUN_146890bba(local_370); lVar16 != 0;
                lVar16 = *(longlong *)(lVar16 + 0x40)) {
              FUN_14280ca20(&local_318,lVar16,CONCAT44(uStack_270,uStack_278._4_4_));
              if (CONCAT44(uStack_314,local_318) != 0) {
                uStack_278._4_4_ = local_318;
                uStack_270 = uStack_314;
                break;
              }
            }
          }
          if (plVar22 != (longlong *)0x0) {
            do {
              if (plVar14[4] == CONCAT44(uStack_270,uStack_278._4_4_)) goto LAB_1401320dc;
              plVar14 = (longlong *)plVar14[9];
            } while (plVar14 != (longlong *)0x0);
          }
          plVar14 = (longlong *)local_370[0xe];
          if ((plVar14 != (longlong *)0x0) && (plVar14 != plVar22)) {
            do {
              if ((plVar14[4] == CONCAT44(uStack_270,uStack_278._4_4_)) ||
                 (plVar14 = (longlong *)plVar14[9], plVar14 == (longlong *)0x0)) break;
            } while (plVar14 != plVar22);
          }
          if (plVar14 == (longlong *)0x0 || plVar14 == plVar22) {
            iVar11 = 0;
            plVar14 = (longlong *)0x0;
          }
          else {
LAB_1401320dc:
            iVar11 = (int)plVar14[6];
          }
        }
        lVar16 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (plVar14 == (longlong *)0x0) {
          plVar14 = (longlong *)
                    (**(code **)(*local_370 + 0x2f8))
                              (local_370,CONCAT44(uStack_270,uStack_278._4_4_));
        }
        if (cStack_216 == '\x01') {
          bVar23 = 0;
        }
        else {
          if ((bVar20 != 0) && (FUN_1468dc184(&local_318,(int)uStack_280,plVar14), local_318 != 0))
          {
            FUN_140241d2e(&local_288);
          }
          FUN_144b005a8(&local_288,plVar14);
          if ((((plVar14 == (longlong *)0x0) || (uVar15 = plVar14[7], (uVar15 & 0x800000000) != 0))
              || (local_248 < 0)) || ((int)plVar14[6] <= local_248)) {
LAB_1401323f8:
            lVar19 = (**(code **)(*plVar3 + 0x28))(plVar3);
            bVar23 = 0;
          }
          else {
            if (*(code **)(*plVar3 + 0x80) != FUN_1449734ec) {
              cVar7 = (**(code **)(*plVar3 + 0x80))(plVar3,plVar14);
              if (cVar7 != '\0') goto LAB_1401323f8;
              uVar15 = plVar14[7];
            }
            uVar10 = (uint)uVar15;
            if ((((uVar10 >> 0x18 & 1) == 0) && ((*(byte *)((longlong)plVar3 + 0x2b) & 0x40) != 0))
               || (((uVar15 & 0x80800c20202000) != 0 &&
                   (((((((uVar10 >> 0xd & 1) != 0 && ((*(byte *)((longlong)plVar3 + 0x29) & 1) != 0)
                        ) && ((int)plVar3[6] < 1)) ||
                      (((uVar10 >> 0x15 & 1) != 0 &&
                       ((*(byte *)((longlong)plVar3 + 0x35) & 0x10) != 0)))) ||
                     ((((uVar15 >> 0x2f & 1) != 0 &&
                       ((*(uint *)((longlong)plVar3 + 0x34) & 0x401000) == 0x1000)) ||
                      ((((uVar10 >> 0x1d & 1) != 0 &&
                        ((*(byte *)((longlong)plVar3 + 0x37) & 8) == 0)) &&
                       ((*(byte *)(plVar3 + 5) & 0x24) != 0)))))) ||
                    ((((uVar15 >> 0x37 & 1) != 0 &&
                      (((*(byte *)(plVar3 + 5) & 0x20) != 0 ||
                       ((*(byte *)((longlong)plVar3 + 0x37) & 0x20) == 0)))) ||
                     (((uVar15 & 0x800000000) != 0 &&
                      ((*(byte *)((longlong)plVar3 + 0x2b) & 0x20) != 0))))))))))
            goto LAB_1401323f8;
            if (*(char *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x114
                         ) == '\0') {
              __dyn_tls_on_demand_init();
            }
            if ((cStack_215 != '\0' && *local_348 != 0) &&
               ((cStack_215 != '\x02' || ((*(byte *)((longlong)plVar14 + 0x3f) & 4) == 0)))) {
              FUN_1468c47ee(*local_348,cStack_215,plVar3[0xf],plVar14);
            }
            local_3c0 = param_5;
            local_3c8 = local_358;
            iVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14,&local_288,local_368,local_338);
            if (iVar9 == 0) {
              (**(code **)(*plVar14 + 0x168))(plVar14,&local_318);
              if (CONCAT44((undefined4)uStack_278,uStack_280._4_4_) ==
                  CONCAT44(uStack_314,local_318)) {
                iVar9 = *(int *)((longlong)plVar14 + 0x44);
                lVar19 = (longlong)local_248 * (longlong)*(int *)((longlong)plVar14 + 0x34);
                if ((param_5 == 0) ||
                   ((local_358 != (wchar_t *)0x0 &&
                    (*(int *)(local_358 + 0x2c) <
                     *(int *)((longlong)plVar14 + 0x34) * (int)plVar14[6] + iVar9)))) {
                  local_3c8 = (wchar_t *)0x0;
                }
                else {
                  local_3c8 = (wchar_t *)(param_5 + iVar9 + lVar19);
                }
                FUN_142817a2a(&local_288,local_368,plVar14,iVar9 + local_338 + lVar19);
                goto LAB_1401323a5;
              }
              bVar23 = 0;
            }
            else {
              if (iVar9 != 1) {
                if (iVar9 == 3) {
                  (**(code **)(*plVar3 + 0x28))(plVar3);
                  bVar23 = 1;
                  goto LAB_140132425;
                }
                goto LAB_1401323f8;
              }
LAB_1401323a5:
              bVar23 = *(byte *)((longlong)plVar3 + 0x29) >> 2 ^ 1;
            }
            lVar19 = (**(code **)(*plVar3 + 0x28))(plVar3);
            if ((bVar23 & 1) != 0) goto LAB_140132425;
          }
          if (lVar19 - lVar16 != (longlong)uStack_250._4_4_) {
            (**(code **)(*plVar3 + 0x1a0))(plVar3,lVar16 + uStack_250._4_4_);
          }
        }
LAB_140132425:
        local_258 = 0;
        uStack_250 = 0;
        local_268 = 0;
        uStack_260 = 0;
        uStack_278._0_4_ = 0;
        uStack_278._4_4_ = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        local_288 = (code *)0x0;
        uStack_280._0_4_ = 0;
        uStack_280._4_4_ = 0;
        local_248 = -1;
        local_240 = 0xffffffffffffffff;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        uStack_21b = 0;
        uStack_217 = 0;
        cStack_216 = '\0';
        cStack_215 = '\0';
        uStack_214 = 0;
        FUN_140241707(local_368,&local_288);
        plVar22 = plVar14;
      } while (CONCAT44(uStack_270,uStack_278._4_4_) != 0);
    }
    goto LAB_140132a6f;
  }
  if (pwVar24 == (wchar_t *)0x0) {
    local_360 = 0;
  }
  else {
    if (DAT_14c948fa0 == 0) {
      local_2a0 = (code *)&DAT_1427db2a2;
      if (DAT_14c963f04 == '\0') {
        uVar17 = FUN_140011aa6();
        lVar16 = FUN_140011c0e(uVar17,0x250,8);
      }
      else {
        lVar16 = FUN_14001cc68(0x250,8);
      }
      DAT_14c948fa0 = lVar16;
      FUN_1446f470e(local_298,L"ScriptStruct",1);
      local_390 = &local_2a0;
      local_398 = &LAB_1468915ce;
      local_3a0 = FUN_1427dc742;
      local_3b0 = L"Engine";
      local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,199);
      local_3b8 = 0x10;
      local_3c0 = CONCAT44(local_3c0._4_4_,0x10000020);
      local_3c8._0_4_ = 8;
      FUN_14574b4b2(lVar16);
      DAT_14c948fa0 = lVar16;
      if (DAT_14c927740 == (longlong *)0x0) {
        local_390 = (code **)&local_288;
        local_288 = FUN_1449e2820;
        local_380 = FUN_14081d0ea;
        local_388 = FUN_14081d0ea;
        local_398 = &LAB_146856450;
        local_3a0 = FUN_1427b121c;
        local_3a8 = L"Engine";
        local_3b0 = (wchar_t *)0x0;
        local_3b8 = CONCAT44(local_3b8._4_4_,0x10000021);
        local_3c0 = CONCAT44(local_3c0._4_4_,8);
        local_3c8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar16 = DAT_14c948fa0;
      plVar22 = DAT_14c927740;
      if (DAT_14c948f88 == 0) {
        local_290 = (code *)&DAT_1427db2a2;
        if (DAT_14c963f04 == '\0') {
          uVar17 = FUN_140011aa6();
          lVar19 = FUN_140011c0e(uVar17,0x250,8);
        }
        else {
          lVar19 = FUN_14001cc68(0x250,8);
        }
        DAT_14c948f88 = lVar19;
        FUN_1446f470e(&local_318,L"Struct",1);
        local_390 = &local_290;
        local_398 = &LAB_146891313;
        local_3a0 = FUN_146272f63;
        local_3b0 = L"Engine";
        local_3a8 = (wchar_t *)CONCAT44(local_3a8._4_4_,199);
        local_3b8 = 8;
        local_3c0 = CONCAT44(local_3c0._4_4_,0x10000020);
        local_3c8._0_4_ = 8;
        FUN_14574b4b2(lVar19);
        local_348 = DAT_14c927740;
        DAT_14c948f88 = lVar19;
        if (DAT_14c927740 == (longlong *)0x0) {
          local_390 = (code **)&local_288;
          local_288 = FUN_1449e2820;
          local_380 = FUN_14081d0ea;
          local_388 = FUN_14081d0ea;
          local_398 = &LAB_146856450;
          local_3a0 = FUN_1427b121c;
          local_3a8 = L"Engine";
          local_3b0 = (wchar_t *)0x0;
          local_3b8 = CONCAT44(local_3b8._4_4_,0x10000021);
          local_3c0 = CONCAT44(local_3c0._4_4_,8);
          local_3c8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar19 = DAT_14c948f88;
        local_348 = DAT_14c927740;
        uVar17 = FUN_1400163b0();
        local_3c8 = L"Struct";
        FUN_14574b446(uVar17,lVar19,local_348,L"/Script/CoreUObject");
      }
      local_3c8 = L"ScriptStruct";
      FUN_14574b446(DAT_14c948f88,lVar16,plVar22,L"/Script/CoreUObject");
      pwVar24 = local_358;
    }
    if ((*(int *)(*(longlong *)(pwVar24 + 8) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar24 + 8) + 0x30) +
         (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30)) {
      local_360 = 0;
    }
    else {
      uVar15 = CONCAT71((int7)((ulonglong)(DAT_14c948fa0 + 0x30) >> 8),(char)pwVar24[0x58]) &
               0xffffffffffffff10;
      local_360 = (undefined4)CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 >> 4);
    }
  }
  local_371 = 1;
  if ((*(byte *)((longlong)plVar3 + 0x2a) & 8) == 0) {
    local_371 = param_5 == 0 & bVar20;
  }
  local_340 = (longlong *)plVar3[0xc];
  if ((*(byte *)((longlong)plVar3 + 0x2c) & 1) == 0) {
    local_340 = local_370 + 0xe;
    plVar22 = (longlong *)0x0;
LAB_140132574:
    plVar14 = (longlong *)*local_340;
    local_340 = plVar22;
    if (plVar14 != (longlong *)0x0) {
      local_330 = (char *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xd60);
      do {
        if (*(code **)(*plVar3 + 0x80) == FUN_1449734ec) {
LAB_1401325bc:
          bVar20 = local_371;
          uVar15 = plVar14[7];
          uVar10 = (uint)uVar15;
          if ((((uVar10 >> 0x18 & 1) == 0) && ((*(byte *)((longlong)plVar3 + 0x2b) & 0x40) != 0)) ||
             (((uVar15 & 0x80800c20202000) != 0 &&
              ((((((((uVar10 >> 0xd & 1) != 0 && ((*(byte *)((longlong)plVar3 + 0x29) & 1) != 0)) &&
                   ((int)plVar3[6] < 1)) ||
                  (((uVar10 >> 0x15 & 1) != 0 && ((*(byte *)((longlong)plVar3 + 0x35) & 0x10) != 0))
                  )) || (((uVar15 >> 0x2f & 1) != 0 &&
                         ((*(uint *)((longlong)plVar3 + 0x34) & 0x401000) == 0x1000)))) ||
                ((((uVar10 >> 0x1d & 1) != 0 && ((*(byte *)((longlong)plVar3 + 0x37) & 8) == 0)) &&
                 ((*(byte *)(plVar3 + 5) & 0x24) != 0)))) ||
               ((((uVar15 >> 0x37 & 1) != 0 &&
                 (((*(byte *)(plVar3 + 5) & 0x20) != 0 ||
                  ((*(byte *)((longlong)plVar3 + 0x37) & 0x20) == 0)))) ||
                (((uVar15 >> 0x23 & 1) != 0 && ((*(byte *)((longlong)plVar3 + 0x2b) & 0x20) != 0))))
               )))))) goto LAB_140132990;
          if (local_340 != (longlong *)0x0) {
            iVar9 = (int)local_340[1];
            iVar11 = iVar9 + 1;
LAB_140132609:
            bVar25 = local_340 == (longlong *)0x0;
            plVar22 = (longlong *)(longlong)iVar9;
            local_348 = (longlong *)(longlong)iVar11;
            do {
              iVar11 = *(int *)((longlong)plVar14 + 0x44);
              lVar16 = (longlong)plVar22 * (longlong)*(int *)((longlong)plVar14 + 0x34);
              if ((param_5 == 0) ||
                 ((pwVar24 != (wchar_t *)0x0 &&
                  (*(int *)(pwVar24 + 0x2c) <
                   *(int *)((longlong)plVar14 + 0x34) * (int)plVar14[6] + iVar11)))) {
                pwVar21 = (wchar_t *)0x0;
              }
              else {
                pwVar21 = (wchar_t *)(param_5 + iVar11 + lVar16);
              }
              lVar16 = iVar11 + local_338 + lVar16;
              if (bVar25 && bVar20 == 0) {
                if (*(char *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x114) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                if (*local_330 == '\x01') {
                  cVar7 = FUN_1468c36c6(plVar3,plVar14,lVar16,pwVar21);
                  if (cVar7 != '\0') goto LAB_14013266a;
                }
                if (*(char *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x114) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                if (*local_330 == '\0') {
                  cVar7 = (**(code **)(*plVar14 + 200))
                                    (plVar14,lVar16,pwVar21,*(undefined4 *)((longlong)plVar3 + 0x34)
                                    );
                  if (cVar7 == '\0') goto LAB_14013266a;
                }
              }
              else {
LAB_14013266a:
                if ((char)local_360 != '\0') {
                  pwVar21 = (wchar_t *)0x0;
                }
                FUN_140a6bd9e(&local_318,plVar14,(ulonglong)plVar22 & 0xffffffff,lVar16);
                if (((byte)local_35c != '\0') &&
                   ((plVar3[0xd] == 0 || (*(longlong *)(plVar3[0xd] + 0x10) == 0)))) {
                  (**(code **)(*local_370 + 0x348))(local_370,&local_288,local_304[0]);
                  local_2a8 = ((local_288._4_4_ != 0 || (int)local_288 != 0) || (int)uStack_280 != 0
                              ) || uStack_280._4_4_ != 0;
                  local_2b8 = (int)local_288;
                  iStack_2b4 = local_288._4_4_;
                  uStack_2b0 = uStack_280;
                }
                uStack_270 = uStack_270 & 0xffffff00;
                local_288 = (code *)&local_268;
                uStack_278 = local_68;
                uStack_280 = local_288;
                FUN_14005eb5c(local_304,&local_288);
                *(undefined2 *)uStack_280 = 0;
                FUN_140241707(local_368,&local_318);
                iVar11 = (**(code **)(*plVar3 + 0x28))(plVar3);
                local_3c8 = pwVar21;
                if ((local_340 == (longlong *)0x0) ||
                   ((*(byte *)((longlong)plVar3 + 0x2c) & 1) == 0)) {
                  FUN_142817a2a(&local_318,local_368,plVar14,lVar16);
                }
                else {
                  lVar19 = plVar3[0xc];
                  plVar3[0xc] = local_340[2];
                  FUN_142817a2a(&local_318,local_368,plVar14,lVar16);
                  if (lVar19 != 0) {
                    plVar3[0xc] = lVar19;
                  }
                }
                local_2dc[0] = (**(code **)(*plVar3 + 0x28))(plVar3);
                pwVar24 = local_358;
                local_2dc[0] = local_2dc[0] - iVar11;
                if (0 < local_2dc[0]) {
                  uVar17 = (**(code **)(*plVar3 + 0x28))(plVar3);
                  (**(code **)(*plVar3 + 0x1a0))(plVar3,local_2d0);
                  plVar5 = (longlong *)plVar3[1];
                  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
                    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
                      (**(code **)(*plVar3 + 0x170))(plVar3,local_2dc,4);
                    }
                    else {
                      FUN_14572512c(plVar3,local_2dc);
                    }
                  }
                  else {
                    local_2dc[0] = *(int *)*plVar5;
                    *plVar5 = *plVar5 + 4;
                  }
                  (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar17);
                }
                if ((char)uStack_270 == '\x01') {
                  FUN_1400020a8(local_288);
                }
              }
              plVar22 = (longlong *)((longlong)plVar22 + 1);
            } while (local_348 != plVar22);
            goto LAB_140132990;
          }
          iVar11 = (int)plVar14[6];
          iVar9 = 0;
          if (0 < iVar11) goto LAB_140132609;
          if ((*(byte *)((longlong)plVar3 + 0x2c) & 1) != 0) break;
LAB_140132997:
          plVar14 = plVar14 + 9;
        }
        else {
          cVar7 = (**(code **)(*plVar3 + 0x80))(plVar3,plVar14);
          if (cVar7 == '\0') goto LAB_1401325bc;
LAB_140132990:
          if ((*(byte *)((longlong)plVar3 + 0x2c) & 1) == 0) goto LAB_140132997;
          if ((local_340 == (longlong *)0x0) ||
             (plVar14 = (longlong *)local_340[3], local_340 = plVar14, plVar14 == (longlong *)0x0))
          break;
        }
        plVar14 = (longlong *)*plVar14;
      } while (plVar14 != (longlong *)0x0);
    }
  }
  else {
    plVar22 = local_340;
    if (local_340 != (longlong *)0x0) goto LAB_140132574;
  }
  local_288 = (code *)0x0;
  (**(code **)(*plVar3 + 0x160))(plVar3);
LAB_140132a6f:
  if ((char)local_320 != '\0') {
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined8 *)(lVar16 + 0xd58) = 0;
    *(undefined1 *)(lVar16 + 0xd60) = 0;
    if ((char)local_350 != '\0') {
      *(undefined1 *)(lVar16 + 0xd60) = 1;
      *(undefined8 *)(lVar16 + 0xd58) = local_328;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401333da FUN_1401333da body=90 status=ok
// SIG undefined FUN_1401333da(void)

ulonglong * FUN_1401333da(longlong *param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  uVar1 = *(ulonglong *)(*param_1 + -8 + (longlong)iVar2 * 8);
  *param_2 = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  if (param_3 == '\x01') {
    FUN_140133434(param_1);
  }
  return param_2;
}



// FUNCTION 140133434 FUN_140133434 body=143 status=ok
// SIG undefined FUN_140133434(void)

void FUN_140133434(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1401334c4 FUN_1401334c4 body=462 status=ok
// SIG undefined FUN_1401334c4(void)

void FUN_1401334c4(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x1008);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 0x101) {
    *(undefined4 *)((longlong)param_1 + 0x100c) = 0x100;
    _Src = *(void **)((longlong)param_1 + 0x1000);
joined_r0x000140133602:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (0x100 < *(uint *)((longlong)param_1 + 0x100c)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x100c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x1000);
    }
    else {
      *(uint *)((longlong)param_1 + 0x100c) = uVar3;
      _Src = *(void **)((longlong)param_1 + 0x1000);
      if (uVar3 < 0x101) goto joined_r0x000140133602;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x1000,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0x1000),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x1000,param_2,uVar4,0x10);
  return;
}



// FUNCTION 140133692 FUN_140133692 body=29 status=ok
// SIG undefined FUN_140133692(void)

void FUN_140133692(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1401336b0 FUN_1401336b0 body=73 status=ok
// SIG undefined FUN_1401336b0(void)

undefined8 * FUN_1401336b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2a0d80;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401336fa FUN_1401336fa body=29 status=ok
// SIG undefined FUN_1401336fa(void)

void FUN_1401336fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140133718 FUN_140133718 body=73 status=ok
// SIG undefined FUN_140133718(void)

undefined8 * FUN_140133718(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2a0da0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140133762 FUN_140133762 body=29 status=ok
// SIG undefined FUN_140133762(void)

void FUN_140133762(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140133780 FUN_140133780 body=73 status=ok
// SIG undefined FUN_140133780(void)

undefined8 * FUN_140133780(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2a0dc0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1401337ca FUN_1401337ca body=330 status=ok
// SIG undefined FUN_1401337ca(void)

undefined4 *
FUN_1401337ca(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140133a0c(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  local_58 = param_4;
  cVar6 = FUN_140133916(param_1,uVar7,local_40,&local_4c);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar9 < 4) {
      iVar10 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_140098d88(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140133916 FUN_140133916 body=123 status=ok
// SIG undefined FUN_140133916(void)

void FUN_140133916(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_140133992();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x1c) = param_3[4];
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_146b85688(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_140133945;
    }
  }
  uVar7 = 0;
LAB_140133945:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 140133992 FUN_140133992 body=121 status=ok
// SIG undefined FUN_140133992(void)

int FUN_140133992(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar1 * 0x1c;
        if ((((*(int *)(lVar2 + lVar3) == *param_3) && (*(int *)(lVar2 + 4 + lVar3) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar3) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar3) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + lVar2 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140133a0c FUN_140133a0c body=482 status=ok
// SIG undefined FUN_140133a0c(void)

int * FUN_140133a0c(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1406245f8(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x1c);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x1c) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 140133bee FUN_140133bee body=109 status=ok
// SIG undefined FUN_140133bee(void)

undefined8 * FUN_140133bee(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = *param_2;
  local_18 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = 0;
  }
  FUN_1448405cc(&local_20,param_1,param_1 + 1,param_1 + 2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140133c5c FUN_140133c5c body=607 status=ok
// SIG undefined FUN_140133c5c(void)

double * FUN_140133c5c(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  float *pfVar10;
  double *pdVar11;
  bool bVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  
  iVar13 = *(int *)(param_1 + 0x200);
  if (iVar13 < 1) {
    dVar7 = 0.0;
    dVar8 = 0.0;
  }
  else {
    dVar8 = 0.0;
    lVar15 = 0;
    dVar7 = 0.0;
    cVar9 = DAT_14c96b1e1;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar15 * 8);
      if (*(char *)(*(longlong *)(lVar6 + 0x10) + 0x39) != cVar9) {
        pfVar10 = (float *)FUN_140133f88(lVar6 + 0x20);
        fVar1 = *pfVar10;
        fVar2 = pfVar10[1];
        fVar18 = pfVar10[2];
        fVar17 = pfVar10[3];
        FUN_140133f12(lVar6 + 0x80);
        pdVar11 = (double *)FUN_140133ffe(lVar6 + 0x48);
        dVar3 = *pdVar11;
        dVar16 = pdVar11[1];
        dVar4 = pdVar11[2];
        dVar5 = pdVar11[3];
        cVar9 = FUN_140133ebc();
        if (cVar9 != '\0') {
          pfVar10 = (float *)(*(longlong *)(lVar6 + 0x10) + 0x168);
          if ((*(byte *)(*(longlong *)(lVar6 + 0x10) + 0x31) & 0x20) == 0) {
            pfVar10 = (float *)&DAT_14c84635c;
          }
          fVar18 = *pfVar10;
          fVar17 = pfVar10[1];
        }
        if ((dVar3 != dVar4) || (NAN(dVar3) || NAN(dVar4))) {
          bVar12 = false;
        }
        else {
          bVar12 = dVar3 == 0.0 || dVar3 == 1.0;
        }
        if ((dVar16 != dVar5) || (NAN(dVar16) || NAN(dVar5))) {
          bVar14 = false;
        }
        else {
          bVar14 = dVar16 == 0.0 || dVar16 == 1.0;
        }
        dVar3 = 0.0;
        if (bVar12) {
          dVar16 = (double)ABS(fVar1);
        }
        else {
          dVar16 = 0.0;
        }
        if (bVar14) {
          dVar3 = (double)ABS(fVar2);
        }
        if (dVar8 <= dVar16 + (double)fVar18) {
          dVar8 = dVar16 + (double)fVar18;
        }
        if (dVar7 <= (double)fVar17 + dVar3) {
          dVar7 = (double)fVar17 + dVar3;
        }
        iVar13 = *(int *)(param_1 + 0x200);
        cVar9 = DAT_14c96b1e1;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar13);
  }
  *param_2 = dVar8;
  param_2[1] = dVar7;
  return param_2;
}



// FUNCTION 140133ebc FUN_140133ebc body=85 status=ok
// SIG undefined FUN_140133ebc(void)

undefined1 FUN_140133ebc(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xb8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0xb0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0xa8) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0xa8);
}



// FUNCTION 140133f12 FUN_140133f12 body=117 status=ok
// SIG undefined FUN_140133f12(void)

undefined4 * FUN_140133f12(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[8] != 0) && (*(longlong **)(param_1 + 6) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 6) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[8] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 6);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_28);
      *param_1 = local_28;
      param_1[1] = uStack_24;
      param_1[2] = uStack_20;
      param_1[3] = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140133f88 FUN_140133f88 body=117 status=ok
// SIG undefined FUN_140133f88(void)

undefined4 * FUN_140133f88(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1[8] != 0) && (*(longlong **)(param_1 + 6) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 6) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[8] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 6);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_28);
      *param_1 = local_28;
      param_1[1] = uStack_24;
      param_1[2] = uStack_20;
      param_1[3] = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140133ffe FUN_140133ffe body=125 status=ok
// SIG undefined FUN_140133ffe(void)

undefined4 * FUN_140133ffe(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[0xc] != 0) && (*(longlong **)(param_1 + 10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 10) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[0xc] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 10);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_38);
      *(undefined8 *)(param_1 + 4) = local_28;
      *(undefined8 *)(param_1 + 6) = uStack_20;
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14013408e FUN_14013408e body=116 status=ok
// SIG undefined FUN_14013408e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013408e(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + 1;
  UNLOCK();
  puVar3 = (undefined8 *)FUN_140134102(DAT_14cb77e48);
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + 1;
  UNLOCK();
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)FUN_140134102(*puVar3)) {
    lVar1 = puVar3[2];
    cVar2 = FUN_144729dda(lVar1 + 0x12a8);
    if ((cVar2 != '\0') && (*(int *)(lVar1 + 0x12d0) != 0)) {
      FUN_143d10d78(lVar1);
    }
  }
  LOCK();
  UNLOCK();
  LOCK();
  _DAT_14cb77e50 = _DAT_14cb77e50 + -2;
  UNLOCK();
  return;
}



// FUNCTION 140134102 FUN_140134102 body=132 status=ok
// SIG undefined FUN_140134102(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140134102(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_140134177:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_140134177;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 14013418c FUN_14013418c body=57 status=ok
// SIG undefined FUN_14013418c(void)

void FUN_14013418c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a810 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a810 = FUN_140002ddd(FUN_1464cad3f,uVar1,L"GbxBodyNodeState_Switch");
  }
  return;
}



// FUNCTION 1401341c6 FUN_1401341c6 body=116 status=ok
// SIG undefined FUN_1401341c6(void)

undefined8 * FUN_1401341c6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x68) == '\0') {
      FUN_1401342a6(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48),param_2);
      lVar1 = *(longlong *)(param_1 + 0x38);
    }
    local_20 = lVar1;
    FUN_14013423c(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14013423c FUN_14013423c body=105 status=ok
// SIG undefined FUN_14013423c(void)

ulonglong FUN_14013423c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_140134274;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14013439c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar5 * 8) = *param_2;
LAB_140134274:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1401342a6 FUN_1401342a6 body=245 status=ok
// SIG undefined FUN_1401342a6(void)

void FUN_1401342a6(longlong param_1,ulonglong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x80);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x20) == param_2) {
          if ((undefined8 *)(lVar2 + 8) == (undefined8 *)0x0 || lVar2 == 0) {
            return;
          }
          uVar1 = *(uint *)(lVar2 + 0x10);
          if ((longlong)(int)uVar1 == 0) {
            return;
          }
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + uVar1;
          if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar3) < uVar1) {
            FUN_14013439c(param_3,iVar3);
          }
          memcpy((void *)((longlong)iVar3 * 8 + *param_3),*(void **)(lVar2 + 8),
                 (longlong)(int)uVar1 << 3);
          return;
        }
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14013439c FUN_14013439c body=353 status=ok
// SIG undefined FUN_14013439c(void)

void FUN_14013439c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140134421;
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
LAB_140134421:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1401344fe FUN_1401344fe body=135 status=ok
// SIG undefined FUN_1401344fe(void)

void FUN_1401344fe(longlong *param_1,float param_2)

{
  char cVar1;
  
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  cVar1 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if ((cVar1 == '\0') && (0.0 < *(float *)((longlong)param_1 + 0x31c))) {
    param_2 = *(float *)((longlong)param_1 + 0x31c) - param_2;
    *(float *)((longlong)param_1 + 0x31c) = param_2;
    if (param_2 <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00014013457e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14013458a FUN_14013458a body=1606 status=ok
// SIG undefined FUN_14013458a(void)

void FUN_14013458a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0 [4];
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0[3] = 0;
  uStack_b0 = 0;
  if ((longlong)*(int *)(param_1 + 0xa0) == 0) {
    fVar13 = 1.0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x98);
    lVar11 = (longlong)*(int *)(param_1 + 0xa0) << 5;
    fVar13 = 1.0;
    do {
      if (1e-08 < ABS(fVar13)) {
        lVar12 = plVar10[1];
        if (lVar12 == 0) {
          uVar7 = FUN_140d47262();
          lVar12 = FUN_14477b664(uVar7);
          plVar10[1] = lVar12;
        }
        if (plVar10[2] == 0) {
          if ((lVar12 != 0) && (*plVar10 != 0)) {
            plVar1 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              plVar10[2] = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar12 = FUN_144aff482(uVar7,plVar10);
              plVar10[2] = lVar12;
              if (lVar12 != 0) goto LAB_140134862;
            }
          }
        }
        else {
LAB_140134862:
          fVar14 = *(float *)(plVar10 + 3);
          iVar2 = (int)param_2[1];
          lVar12 = (longlong)iVar2;
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_140134eb8(param_2,iVar2);
          }
          lVar8 = *param_2;
          *(undefined8 *)(lVar8 + lVar12 * 8) = 0;
          lVar6 = plVar10[1];
          if (lVar6 == 0) {
            uVar7 = FUN_140d47262();
            lVar6 = FUN_14477b664(uVar7);
            plVar10[1] = lVar6;
          }
          lVar5 = plVar10[2];
          if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar10 != 0)) {
            local_d8 = *(longlong **)(lVar6 + 0xb8);
            if ((local_d8 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*local_d8 + 0x108))(), cVar3 == '\0')) {
              lVar5 = 0;
            }
            else {
              uVar7 = (**(code **)(*local_d8 + 0x110))();
              lVar5 = FUN_144aff482(uVar7,plVar10);
            }
            plVar10[2] = lVar5;
          }
          if (fVar13 <= fVar14) {
            fVar14 = fVar13;
          }
          *(undefined4 *)(lVar8 + lVar12 * 8) = *(undefined4 *)(lVar5 + 0x38);
          *(float *)(lVar8 + 4 + lVar12 * 8) = fVar14;
          lVar12 = plVar10[1];
          if (lVar12 == 0) {
            uVar7 = FUN_140d47262();
            lVar12 = FUN_14477b664(uVar7);
            plVar10[1] = lVar12;
          }
          lVar8 = plVar10[2];
          if (((lVar8 == 0) && (lVar8 = 0, lVar12 != 0)) && (*plVar10 != 0)) {
            plVar1 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar8 = FUN_144aff482(uVar7,plVar10);
            }
            plVar10[2] = lVar8;
          }
          local_d0[1] = 0;
          local_d0[2] = 0;
          local_d0[0] = lVar8;
          FUN_1448417d2(local_d0);
          uVar9 = uStack_b0;
          lVar12 = (longlong)(int)(uint)uStack_b0;
          uVar4 = (uint)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
          if (uStack_b0._4_4_ < uVar4) {
            FUN_140134d46(local_d0 + 3,uVar9 & 0xffffffff);
          }
          fVar14 = fVar13 - fVar14;
          fVar13 = 0.0;
          if (0.0 <= fVar14) {
            fVar13 = fVar14;
          }
          plVar1 = (longlong *)(local_d0[3] + lVar12 * 0x18);
          *plVar1 = 0;
          plVar1[1] = 0;
          plVar1[2] = 0;
          *plVar1 = local_d0[0];
          FUN_1448417d2();
          FUN_140134bf8(local_d0);
        }
      }
      plVar10 = plVar10 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  if ((1e-08 < ABS(fVar13)) && ((longlong)*(int *)(param_1 + 0x90) != 0)) {
    plVar10 = *(longlong **)(param_1 + 0x88);
    lVar11 = (longlong)*(int *)(param_1 + 0x90) << 5;
    do {
      iVar2 = (int)param_2[1];
      lVar12 = (longlong)iVar2;
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_140134eb8(param_2,iVar2);
      }
      lVar8 = *param_2;
      *(undefined8 *)(lVar8 + lVar12 * 8) = 0;
      lVar6 = plVar10[1];
      if (lVar6 == 0) {
        uVar7 = FUN_140d47262();
        lVar6 = FUN_14477b664(uVar7);
        plVar10[1] = lVar6;
      }
      lVar5 = plVar10[2];
      if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar10 != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (local_d8 = plVar1, cVar3 = (**(code **)(*plVar1 + 0x108))(), cVar3 == '\0')) {
          lVar5 = 0;
        }
        else {
          uVar7 = (**(code **)(*local_d8 + 0x110))();
          lVar5 = FUN_144aff482(uVar7,plVar10);
        }
        plVar10[2] = lVar5;
      }
      *(undefined4 *)(lVar8 + lVar12 * 8) = *(undefined4 *)(lVar5 + 0x38);
      *(float *)(lVar8 + 4 + lVar12 * 8) = *(float *)(plVar10 + 3) * fVar13;
      lVar12 = plVar10[1];
      if (lVar12 == 0) {
        uVar7 = FUN_140d47262();
        lVar12 = FUN_14477b664(uVar7);
        plVar10[1] = lVar12;
      }
      lVar8 = plVar10[2];
      if (((lVar8 == 0) && (lVar8 = 0, lVar12 != 0)) && (*plVar10 != 0)) {
        plVar1 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar8 = FUN_144aff482(uVar7,plVar10);
        }
        plVar10[2] = lVar8;
      }
      local_d0[1] = 0;
      local_d0[2] = 0;
      local_d0[0] = lVar8;
      FUN_1448417d2(local_d0);
      uVar9 = uStack_b0;
      lVar12 = (longlong)(int)(uint)uStack_b0;
      uVar4 = (uint)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
      if (uStack_b0._4_4_ < uVar4) {
        FUN_140134d46(local_d0 + 3,uVar9 & 0xffffffff);
      }
      plVar1 = (longlong *)(local_d0[3] + lVar12 * 0x18);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar1 = local_d0[0];
      FUN_1448417d2();
      FUN_140134bf8(local_d0);
      plVar10 = plVar10 + 4;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
  }
  plVar10 = (longlong *)(param_1 + 0xb8);
  FUN_140134bd1(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_140134cc6(plVar10);
  }
  uVar9 = uStack_b0;
  if ((uint)uStack_b0 == 0) {
    uVar9 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar2 + (uint)uStack_b0;
    if ((uint)(*(int *)(param_1 + 0xc4) - iVar2) < (uint)uStack_b0) {
      FUN_140134d46(plVar10,iVar2);
    }
    FUN_140134cf6((longlong)iVar2 * 0x18 + *plVar10,local_d0[3],uVar9 & 0xffffffff);
    uVar9 = uStack_b0 & 0xffffffff;
  }
  FUN_140134bd1(local_d0[3],uVar9);
  if (local_d0[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140134bd1 FUN_140134bd1 body=38 status=ok
// SIG undefined FUN_140134bd1(void)

void FUN_140134bd1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140134bf8(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 140134bf8 FUN_140134bf8 body=50 status=ok
// SIG undefined FUN_140134bf8(void)

void FUN_140134bf8(longlong param_1)

{
  FUN_140134c2a();
  FUN_144841b78(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140134c2a FUN_140134c2a body=59 status=ok
// SIG undefined FUN_140134c2a(void)

void FUN_140134c2a(longlong param_1)

{
  FUN_144841b78(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_140134c66(param_1 + 8,0);
    return;
  }
  return;
}



// FUNCTION 140134c66 FUN_140134c66 body=96 status=ok
// SIG undefined FUN_140134c66(void)

void FUN_140134c66(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 140134cc6 FUN_140134cc6 body=48 status=ok
// SIG undefined FUN_140134cc6(void)

void FUN_140134cc6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 140134cf6 FUN_140134cf6 body=79 status=ok
// SIG undefined FUN_140134cf6(void)

void FUN_140134cf6(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = *param_2;
    FUN_1448417d2(param_1);
    param_1 = param_1 + 3;
    param_2 = param_2 + 3;
  }
  return;
}



// FUNCTION 140134d46 FUN_140134d46 body=370 status=ok
// SIG undefined FUN_140134d46(void)

void FUN_140134d46(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140134dcf;
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
LAB_140134dcf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140134eb8 FUN_140134eb8 body=353 status=ok
// SIG undefined FUN_140134eb8(void)

void FUN_140134eb8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140134f3d;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140134f3d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14013501a FUN_14013501a body=353 status=ok
// SIG undefined FUN_14013501a(void)

void FUN_14013501a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14013509f;
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
LAB_14013509f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14013517c FUN_14013517c body=90 status=ok
// SIG undefined FUN_14013517c(void)

void FUN_14013517c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
  *(undefined4 *)(lVar1 + 0x30) = 3;
  if ((LPCRITICAL_SECTION)(lVar1 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 8));
  }
  AK::SoundEngine::PrepareBank
            (0,*(uint *)(param_2 + 0x38),FUN_1438abae4,*(void **)(param_2 + 0x48),1,0);
  return;
}



// FUNCTION 1401351d6 FUN_1401351d6 body=85 status=ok
// SIG undefined FUN_1401351d6(void)

void FUN_1401351d6(longlong param_1,longlong param_2)

{
  if (DAT_14cb259f8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014013521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
  if (param_2 != 0) {
    FUN_140f4e6ac(*(undefined8 *)(DAT_14cb259f8 + 0x60));
    return;
  }
  return;
}



// FUNCTION 14013522c FUN_14013522c body=356 status=ok
// SIG undefined FUN_14013522c(void)

void FUN_14013522c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401352b1;
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
LAB_1401352b1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140135392 FUN_140135392 body=128 status=ok
// SIG undefined FUN_140135392(void)

undefined8 FUN_140135392(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 **local_30;
  undefined8 local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  LOCK();
  *(undefined1 *)(param_2 + 0x2f4) = 4;
  UNLOCK();
  local_10 = &local_20;
  local_30 = &local_18;
  local_18 = &LAB_1427d8388;
  local_38 = *(longlong *)(param_2 + 0x298) + 0x468;
  local_20 = param_1;
  FUN_140166858(param_2,param_1,0x2f8,4);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140135414 FUN_140135414 body=213 status=ok
// SIG undefined FUN_140135414(void)

undefined8 FUN_140135414(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(undefined1 *)(param_2 + 0x2f4) = 7;
  UNLOCK();
  if ((*(char *)(param_2 + 0x368) == '\0') && (*(char *)(param_2 + 0x11d) == '\x01')) {
    lVar2 = FUN_144aff51a(*(longlong *)(param_2 + 0x298) + 0x2a8,*(undefined8 *)(param_2 + 0xf8),
                          *(undefined8 *)(param_2 + 0x108));
    *(undefined2 *)(lVar2 + 100) = 1;
    *(undefined1 *)(lVar2 + 0x67) = 1;
  }
  if ((*(int *)(param_2 + 0x168) != 0) && (DAT_14c868748 != (longlong *)0x0 && DAT_14c868750 != 0))
  {
    local_28 = *(undefined4 *)(param_2 + 0x160);
    uStack_24 = *(undefined4 *)(param_2 + 0x164);
    uStack_20 = *(undefined4 *)(param_2 + 0x168);
    uStack_1c = *(undefined4 *)(param_2 + 0x16c);
    (**(code **)(*DAT_14c868748 + 0x60))();
  }
  FUN_1427cf286(param_2,3);
  piVar1 = (int *)(*(longlong *)(param_2 + 0x2c0) + 0x18);
  *piVar1 = *piVar1 + -1;
  FUN_1427cd7b2(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401354ea FUN_1401354ea body=856 status=ok
// SIG undefined FUN_1401354ea(void)

undefined8 FUN_1401354ea(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  LPVOID lpTlsValue;
  LPVOID lpTlsValue_00;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  longlong local_98;
  code **local_90;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    uVar3 = TlsAlloc();
    uVar4 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c75ec34 != 0xffffffff;
    uVar2 = uVar3;
    if (bVar15) {
      uVar4 = DAT_14c75ec34;
      uVar2 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = uVar2;
    UNLOCK();
    if (bVar15) {
      TlsFree(uVar3);
      uVar3 = uVar4;
    }
  }
  lpTlsValue = TlsGetValue(uVar3);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(uVar3,lpTlsValue);
  }
  uVar13 = *(undefined4 *)((longlong)lpTlsValue + 0x50);
  *(undefined4 *)((longlong)lpTlsValue + 0x50) = 0x400000;
  uVar10 = (ulonglong)DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar5 = TlsAlloc();
    uVar10 = (ulonglong)DVar5;
    uVar3 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c75ec34 != 0xffffffff;
    uVar4 = DVar5;
    if (bVar15) {
      uVar3 = DAT_14c75ec34;
      uVar4 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = uVar4;
    UNLOCK();
    if (bVar15) {
      uVar10 = (ulonglong)uVar3;
      TlsFree(DVar5);
    }
  }
  lpTlsValue_00 = TlsGetValue((DWORD)uVar10);
  if (lpTlsValue_00 == (LPVOID)0x0) {
    lpTlsValue_00 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue_00);
    FUN_140fddf04(lpTlsValue_00);
    TlsSetValue((DWORD)uVar10,lpTlsValue_00);
  }
  uVar14 = *(undefined8 *)((longlong)lpTlsValue_00 + 0x40);
  *(longlong *)((longlong)lpTlsValue_00 + 0x40) = param_2;
  local_68 = *(undefined8 *)((longlong)lpTlsValue_00 + 0x48);
  uVar7 = *(ulonglong *)(param_2 + 0x298);
  lVar9 = uVar7 + 8;
  if (uVar7 == 0) {
    lVar9 = 0;
  }
  *(longlong *)((longlong)lpTlsValue_00 + 0x48) = lVar9;
  uVar1 = *(undefined1 *)((longlong)lpTlsValue_00 + 0x20);
  *(undefined1 *)((longlong)lpTlsValue_00 + 0x20) = 1;
  if (*(char *)(param_2 + 0x368) == '\0') {
    local_78 = *(longlong *)(param_2 + 0x298);
    local_7c = uVar13;
    if (DAT_14c86a9f8 == '\x01') {
      uVar3 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      uVar7 = (ulonglong)uVar3;
      if (uVar3 == 2) goto LAB_140135832;
      if (uVar3 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)DVar6;
        if (DVar5 == DVar6) goto LAB_140135832;
      }
      local_80 = 0;
    }
    else {
LAB_140135832:
      *(int *)(local_78 + 0x5e0) = *(int *)(local_78 + 0x5e0) + 1;
      local_80 = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
    }
    iVar12 = *(int *)(param_2 + 0x2e4);
    local_70 = uVar14;
    if (iVar12 < *(int *)(param_2 + 0x288)) {
      do {
        lVar9 = *(longlong *)(param_2 + 0x280);
        uVar3 = FUN_1427cec66(param_1);
        uVar10 = (ulonglong)uVar3;
        if ((char)uVar3 != '\0') break;
        if (*(int *)(lVar9 + 4 + (longlong)iVar12 * 8) == 1) {
          lVar9 = (longlong)*(int *)(lVar9 + (longlong)iVar12 * 8) * 0x20;
          if (((*(char *)(*(longlong *)(param_2 + 0x270) + 0x18 + lVar9) == '\0') &&
              (plVar8 = (longlong *)(*(longlong *)(param_2 + 0x270) + lVar9),
              *(char *)((longlong)plVar8 + 0x19) == '\0')) &&
             (lVar9 = *plVar8, (*(uint *)(lVar9 + 8) >> 0xc & 1) != 0)) {
            *(longlong *)((longlong)lpTlsValue_00 + 0x38) = lVar9;
            FUN_1400337aa();
            *(undefined8 *)((longlong)lpTlsValue_00 + 0x38) = 0;
          }
        }
        iVar12 = *(int *)(param_2 + 0x2e4) + 1;
        *(int *)(param_2 + 0x2e4) = iVar12;
      } while (iVar12 < *(int *)(param_2 + 0x288));
    }
    else {
      uVar10 = 0;
    }
    if ((char)local_80 != '\0') {
      *(int *)(local_78 + 0x5e0) = *(int *)(local_78 + 0x5e0) + -1;
    }
    uVar14 = local_70;
    uVar13 = local_7c;
    if ((char)uVar10 != '\0') {
      uVar11 = 0;
      goto LAB_14013571d;
    }
  }
  *(undefined4 *)(param_2 + 0x2e4) = 0;
  iVar12 = *(int *)(param_2 + 0x2e0) + 1;
  *(int *)(param_2 + 0x2e0) = iVar12;
  uVar11 = CONCAT71((int7)(uVar10 >> 8),1);
  if (iVar12 == *(int *)(param_2 + 0x170)) {
    *(undefined4 *)(param_2 + 0x2e0) = 0;
    LOCK();
    *(undefined1 *)(param_2 + 0x2f4) = 10;
    UNLOCK();
    local_50 = &local_60;
    local_90 = &local_58;
    local_58 = FUN_1427d83b4;
    local_98 = *(longlong *)(param_2 + 0x298) + 0x470;
    local_60 = param_1;
    FUN_140166858(param_2,param_1,0x330,10);
  }
LAB_14013571d:
  *(undefined1 *)((longlong)lpTlsValue_00 + 0x20) = uVar1;
  *(undefined8 *)((longlong)lpTlsValue_00 + 0x40) = uVar14;
  *(undefined8 *)((longlong)lpTlsValue_00 + 0x48) = local_68;
  *(undefined4 *)((longlong)lpTlsValue + 0x50) = uVar13;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 140135844 FUN_140135844 body=38 status=ok
// SIG undefined FUN_140135844(void)

undefined8 FUN_140135844(undefined8 param_1,int param_2)

{
  FUN_14013586a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14013586a FUN_14013586a body=90 status=ok
// SIG undefined FUN_14013586a(void)

void FUN_14013586a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e03550;
  if (param_1[1] != 0) {
    if (*(char *)((longlong)param_1 + 0x55) == '\0') {
      FUN_1400020a8();
    }
    param_1[1] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0x89) & 1) != 0) {
    FUN_1467b6e20(param_1[0xe],param_1);
  }
  param_1[0xe] = 0;
  FUN_140187ede(param_1);
  return;
}



// FUNCTION 1401358c4 FUN_1401358c4 body=410 status=ok
// SIG undefined FUN_1401358c4(void)

void FUN_1401358c4(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140135a5e(param_2,iVar3);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140135a5e(param_2,iVar3);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar1;
  iVar3 = *(int *)(param_1 + 0x88);
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar4);
      if (lVar2 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140135a5e(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
        iVar3 = *(int *)(param_1 + 0x88);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar5 < iVar3);
  }
  if ((param_3 == '\0') && (iVar3 = *(int *)(param_1 + 0x240), 0 < iVar3)) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x238) + lVar5 * 8);
      if (((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x28), lVar2 != 0)) &&
         ((param_4 == '\0' || ((*(byte *)(lVar4 + 0x38) & 1) != 0)))) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140135a5e(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar2;
        iVar3 = *(int *)(param_1 + 0x240);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x268);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_140135a5e(param_2,iVar3);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar1;
  }
  return;
}



// FUNCTION 140135a5e FUN_140135a5e body=356 status=ok
// SIG undefined FUN_140135a5e(void)

void FUN_140135a5e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140135ae3;
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
LAB_140135ae3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140135bc4 FUN_140135bc4 body=119 status=ok
// SIG undefined FUN_140135bc4(void)

void FUN_140135bc4(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  
  if (param_3 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x318))();
    if (cVar1 != '\0') {
      if (param_2 < 0.0) {
        FUN_140033559(".\\Runtime/Engine/Private/UnrealEngine.cpp",0x2e64,
                      L"Negative delta time! Please see https://udn.epicgames.com/lists/showpost.php?list=ue3bugs&id=4364"
                     );
      }
      if (0.2 <= param_2) {
        param_2 = 0.2;
      }
      *(float *)(param_1 + 0x211) =
           (param_2 - *(float *)(param_1 + 0x211)) * 0.0033333334 + *(float *)(param_1 + 0x211);
    }
  }
  return;
}



// FUNCTION 140135c4c FUN_140135c4c body=357 status=ok
// SIG undefined FUN_140135c4c(void)

undefined4 FUN_140135c4c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 3) == 0) {
    uVar1 = *(uint *)(param_1 + 0x88);
  }
  else if ((*(uint *)(param_1 + 8) & 4) == 0) {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      return 0;
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x78) + 8);
  }
  else {
    lVar2 = FUN_14484244a();
    uVar1 = (uint)(lVar2 != 0);
  }
  if ((int)uVar1 < 1) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 3) == 0) {
    uVar1 = *(uint *)(param_1 + 0x88);
LAB_140135ca4:
    if (uVar1 != 1) goto LAB_140135ce6;
    if ((*(uint *)(param_1 + 8) & 3) == 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x80);
      goto LAB_140135cc0;
    }
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      puVar4 = (undefined8 *)FUN_140135db2(param_1);
      puVar6 = (undefined4 *)*puVar4;
      goto LAB_140135cc0;
    }
  }
  else {
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      lVar2 = FUN_14484244a();
      uVar1 = (uint)(lVar2 != 0);
      goto LAB_140135ca4;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x78) + 8);
      goto LAB_140135ca4;
    }
LAB_140135ce6:
    if (*(int *)(param_2 + 0x5b0) < 1) {
      return 0;
    }
    lVar2 = param_2 + 0x3f8;
    if (*(longlong *)(param_2 + 0x5a8) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x5a8);
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x110))
                      (*(longlong **)(param_1 + 0x10),*(undefined4 *)(lVar2 + 0x28));
    if ((*(uint *)(param_1 + 8) & 3) == 0) {
      uVar5 = *(uint *)(param_1 + 0x88);
    }
    else if ((*(uint *)(param_1 + 8) & 4) == 0) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        return 0;
      }
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x78) + 8);
    }
    else {
      lVar2 = FUN_14484244a();
      uVar5 = (uint)(lVar2 != 0);
    }
    if ((int)uVar5 <= (int)(uVar1 & 0xffff)) {
      return 0;
    }
    if ((*(uint *)(param_1 + 8) & 3) == 0) {
      puVar6 = (undefined4 *)((ulonglong)((uVar1 & 0xffff) << 2) + *(longlong *)(param_1 + 0x80));
      goto LAB_140135cc0;
    }
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      plVar3 = (longlong *)FUN_140135db2(param_1);
      puVar6 = (undefined4 *)((ulonglong)((uVar1 & 0xffff) << 2) + *plVar3);
      goto LAB_140135cc0;
    }
  }
  puVar6 = (undefined4 *)(param_1 + 0x78);
LAB_140135cc0:
  return *puVar6;
}



// FUNCTION 140135db2 FUN_140135db2 body=170 status=ok
// SIG undefined FUN_140135db2(void)

undefined8 FUN_140135db2(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 4) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    local_2c = uVar2;
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    *(undefined8 **)(param_1 + 0x78) = puVar5;
    *(uint *)(param_1 + 8) = uVar1 & 0xfffffffb;
    lVar6 = FUN_14484244a(&local_2c);
    if (lVar6 != 0) {
      plVar4 = *(longlong **)(param_1 + 0x78);
      iVar3 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
        FUN_1417255d0(plVar4,iVar3);
      }
      *(undefined4 *)(*plVar4 + (longlong)iVar3 * 4) = uVar2;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140135e5e FUN_140135e5e body=221 status=ok
// SIG undefined FUN_140135e5e(void)

void FUN_140135e5e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((DAT_14c760b64 < (int)param_1[6]) &&
     (uVar6 = FUN_14473bdf6(*(undefined8 *)(*(longlong *)(*param_1 + 0x10) + 0x538),1),
     0 < (int)param_1[6])) {
    lVar7 = 1;
    do {
      lVar2 = *(longlong *)(param_1[5] + -8 + lVar7 * 8);
      if ((*(int *)(*(longlong *)(lVar2 + 8) + 8) == 1) &&
         ((ulonglong)(*(longlong *)(lVar2 + 0x20) + param_2) <= uVar6)) {
        iVar5 = (int)param_1[6];
        if (iVar5 != (int)lVar7) {
          memmove((void *)(param_1[5] + lVar7 * 8 + -8),(void *)(param_1[5] + lVar7 * 8),
                  (longlong)(iVar5 - (int)lVar7) << 3);
          iVar5 = (int)param_1[6];
        }
        *(int *)(param_1 + 6) = iVar5 + -1;
        FUN_140a6e6f0(param_1 + 5);
        if (lVar2 == 0) {
          return;
        }
        puVar3 = *(undefined8 **)(lVar2 + 8);
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        FUN_1400020a8(lVar2);
        return;
      }
      bVar4 = lVar7 < (int)param_1[6];
      lVar7 = lVar7 + 1;
    } while (bVar4);
  }
  return;
}



// FUNCTION 140135f3c FUN_140135f3c body=125 status=ok
// SIG undefined FUN_140135f3c(void)

undefined8 * FUN_140135f3c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_140135fba();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 140135fba FUN_140135fba body=150 status=ok
// SIG undefined FUN_140135fba(void)

longlong * FUN_140135fba(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140136050 FUN_140136050 body=13 status=ok
// SIG undefined FUN_140136050(void)

void FUN_140136050(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_14484255c(param_2,200);
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0xc));
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    uVar2 = FUN_1427d8864(lVar1 + 0x10);
    FUN_14484255c(param_2,uVar2);
  }
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0x44) * 2);
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0x54) * 0xd0);
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 100) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0x74) * 0x14);
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0x84) << 2);
  return;
}



// FUNCTION 14013605e FUN_14013605e body=161 status=ok
// SIG undefined FUN_14013605e(void)

void FUN_14013605e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_14484255c(param_2,200);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xc));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_1427d8864(param_1 + 0x10);
    FUN_14484255c(param_2,uVar1);
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x44) * 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x54) * 0xd0);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 100) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x74) * 0x14);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x84) << 2);
  return;
}



// FUNCTION 140136100 FUN_140136100 body=299 status=ok
// SIG undefined FUN_140136100(void)

undefined4 *
FUN_140136100(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400e6050(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  *(undefined4 *)(local_50 + 2) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1400e5fb8(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1448426b2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140136232 FUN_140136232 body=678 status=ok
// SIG undefined FUN_140136232(void)

void FUN_140136232(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140927840(param_1,&local_48);
  if (*(longlong *)(param_1 + 0x9f0) != local_48) {
    *(undefined8 *)(param_1 + 0xa00) = 0;
  }
  *(longlong *)(param_1 + 0x9f0) = local_48;
  if ((longlong *)*(longlong *)(param_1 + 0x9f8) != uStack_40) {
    *(undefined8 *)(param_1 + 0xa00) = 0;
  }
  uVar6 = FUN_14477b664();
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0x9f8) = uVar6;
  *(undefined8 *)(param_1 + 0xa00) = local_38;
  FUN_140136622(param_1);
  FUN_1401364da(param_1);
  if (*(int *)(param_1 + 0x988) != 0) {
    *(undefined4 *)(param_1 + 0x950) = 2;
  }
  lVar7 = *(longlong *)(param_1 + 0xbc0);
  if (lVar7 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar7 = *(longlong *)(param_1 + 0xbc0);
    }
    *(longlong *)(param_1 + 0xbc8) = lVar7;
    *(undefined8 *)(param_1 + 0xbc0) = 0;
  }
  local_58 = 0x6ed614a0;
  uStack_54 = 0x7aa24103;
  uStack_50 = 0xbfbfdc74;
  uStack_4c = 0x48a3d66;
  iVar5 = FUN_1448a256a(param_1);
  if ((iVar5 < 0) && (*(longlong *)(param_1 + 0xb68) != 0)) {
    FUN_147e24096(*(longlong *)(param_1 + 0xb68),param_1 + 0xb70);
  }
  cVar4 = *(char *)(param_1 + 0xb70);
  if (cVar4 == '\0') {
LAB_140136313:
    lVar7 = *(longlong *)(param_1 + 0xb78);
joined_r0x000140136464:
    if (lVar7 != 0) goto LAB_140136321;
  }
  else {
    if (cVar4 != '\x01') {
      if (cVar4 != '\x02') goto LAB_140136495;
      goto LAB_140136313;
    }
    lVar7 = *(longlong *)(param_1 + 0xb98);
    if (lVar7 == 0) {
      uVar6 = FUN_145ef056c();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0xb98) = lVar7;
    }
    if (*(longlong *)(param_1 + 0xba0) != 0) goto LAB_140136321;
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0xb90) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
        *(undefined8 *)(param_1 + 0xba0) = 0;
        goto LAB_140136495;
      }
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0xb90));
      *(longlong *)(param_1 + 0xba0) = lVar7;
      goto joined_r0x000140136464;
    }
  }
LAB_140136495:
  FUN_147e2415a(param_1 + 0xb70);
LAB_140136321:
  FUN_140136f76(param_1 + 0xb70,&local_68);
  uVar6 = *(undefined8 *)(param_1 + 0xba8);
  plVar3 = *(longlong **)(param_1 + 0xbb0);
  *(ulonglong *)(param_1 + 0xba8) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xbb0) = CONCAT44(uStack_5c,uStack_60);
  local_48._0_4_ = (undefined4)uVar6;
  local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_40._0_4_ = SUB84(plVar3,0);
  uStack_40._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_48 = uVar6;
  uStack_40 = plVar3;
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
  *(undefined8 *)(param_1 + 0xb68) = 0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401364da FUN_1401364da body=192 status=ok
// SIG undefined FUN_1401364da(void)

void FUN_1401364da(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x7f8) + 0x18))(param_1 + 0x7f8);
  plVar1 = (longlong *)(param_1 + 0xbd0);
  if (plVar3 == (longlong *)0x0) {
    FUN_140136e3c(plVar1);
    return;
  }
  if (0 < *(int *)(param_1 + 0xbd8)) {
    iVar7 = 0;
    do {
      if ((longlong)(int)plVar3[1] != 0) {
        lVar4 = (longlong)iVar7 * 0x58 + *plVar1;
        lVar5 = 0x38;
        lVar6 = 0;
        do {
          if (*(longlong *)(*plVar3 + lVar5) == *(longlong *)(lVar4 + 0x38)) {
            lVar6 = *plVar3 - lVar6;
            if ((lVar6 != 0) && (cVar2 = FUN_144a43716(lVar6 + 8,lVar4 + 8), cVar2 == '\0')) {
              iVar7 = iVar7 + 1;
              goto LAB_140136582;
            }
            break;
          }
          lVar6 = lVar6 + -0x58;
          lVar5 = lVar5 + 0x58;
        } while ((longlong)(int)plVar3[1] * -0x58 - lVar6 != 0);
      }
      FUN_147e284dc(plVar1,iVar7);
LAB_140136582:
    } while (iVar7 < *(int *)(param_1 + 0xbd8));
  }
  return;
}



// FUNCTION 14013659a FUN_14013659a body=45 status=ok
// SIG undefined FUN_14013659a(void)

undefined8 FUN_14013659a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1400d690e(param_1 + 0x1e0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401365b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xe0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1401365c8 FUN_1401365c8 body=90 status=ok
// SIG undefined FUN_1401365c8(void)

undefined8 * FUN_1401365c8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      uVar1 = FUN_1400d690e(lVar4);
      puVar2 = (undefined8 *)FUN_140136e7e(uVar1);
      if (puVar2 != (undefined8 *)0x0) {
        return puVar2;
      }
      lVar4 = lVar4 + 0xf8;
      lVar3 = lVar3 + -0xf8;
    } while (lVar3 != 0);
  }
  return &DAT_14c9a7840;
}



// FUNCTION 140136622 FUN_140136622 body=229 status=ok
// SIG undefined FUN_140136622(void)

void FUN_140136622(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_144842962();
  iVar1 = *(int *)(param_1 + 0x678);
  if (0 < (longlong)iVar1) {
    lVar3 = *(longlong *)(param_1 + 0x670);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        iVar2 = *(int *)(param_1 + 0x688);
        *(uint *)(param_1 + 0x688) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x68c) < iVar2 + 1U) {
          FUN_140b51998((longlong *)(param_1 + 0x680),iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x680) + (longlong)iVar2 * 8) = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
    *(undefined4 *)(param_1 + 0x678) = 0;
    if (*(int *)(param_1 + 0x67c) != 0) {
      FUN_147e2bbc4(param_1 + 0x670);
      return;
    }
  }
  return;
}



// FUNCTION 140136708 FUN_140136708 body=108 status=ok
// SIG undefined FUN_140136708(void)

void FUN_140136708(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0x348);
  _Src = *(void **)(param_1 + 0x340);
  *(int *)(param_1 + 0x358) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x35c) == 0) {
    *(undefined4 *)(param_1 + 0x35c) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)(param_1 + 0x350),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x350),_Src,(longlong)iVar1 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 140136774 FUN_140136774 body=184 status=ok
// SIG undefined FUN_140136774(void)

void FUN_140136774(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,local_20);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0xb9) == '\x01') {
    FUN_144842a8a(param_1,local_20);
    if ((local_20[0] < 0x1bd) && ((*(uint *)(param_1 + 1) & 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14013683c FUN_14013683c body=182 status=ok
// SIG undefined FUN_14013683c(void)

void FUN_14013683c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144842a8a(param_2,local_28);
  if ((int)local_28[0] < 0xdc) {
    bVar2 = true;
  }
  else {
    if (local_28[0] < 0xff) {
      lVar1 = FUN_140e2e6d8();
      if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
        bVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30;
        goto LAB_14013687c;
      }
    }
    bVar2 = false;
  }
LAB_14013687c:
  FUN_140136902(param_1,bVar2);
  if ((0xfe < (int)local_28[0]) && (*(longlong *)(param_1 + 0x44) == DAT_14cad0ef0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140136902 FUN_140136902 body=1336 status=ok
// SIG undefined FUN_140136902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140136902(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined8 local_6d;
  undefined8 uStack_65;
  undefined8 local_5d;
  undefined8 uStack_55;
  undefined8 local_4c;
  undefined1 local_40 [16];
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_1 + 0x44);
  iVar8 = *(int *)(param_1 + 0xa4);
  lVar9 = lVar10;
  if ((((iVar8 != 0) && (uVar1 = *(uint *)(param_1 + 0xa0), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar11 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar8)) &&
      (((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0 && (*plVar11 != 0)))))) {
    lVar9 = *(longlong *)(*plVar11 + 0x18c);
  }
  if (param_2 != '\0') {
    if (DAT_14cad0ef0 != lVar9 && lVar9 != 0) {
      local_78 = (code *)0x0;
      local_70 = 0;
      local_6e = 1;
      local_6d = _DAT_14cad0ed0;
      uStack_65 = _DAT_14cad0ed8;
      local_5d = _DAT_14cad0ee0;
      uStack_55 = uRam000000014cad0ee8;
      local_4c = 0;
      local_40 = (undefined1  [16])0x0;
      if (DAT_14cacfd48 == (longlong *)0x0) {
        local_90 = &local_30;
        local_30 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_140eca530;
        local_98 = &LAB_1479b02e7;
        local_a0 = &LAB_146063820;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000006;
        local_c0 = 8;
        local_c8 = 0x170;
        FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
      }
      plVar11 = DAT_14cacfd48;
      lVar10 = DAT_14cacfd48[0x22];
      if (lVar10 == 0) {
        (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
        lVar10 = plVar11[0x22];
      }
      if (DAT_14cacfd78 == '\0') {
        FUN_1416bf7d6(lVar10,0);
        DAT_14cacfd78 = '\x01';
      }
      cVar7 = FUN_1479b0440(lVar10,lVar9,&local_78);
      if ((((cVar7 == '\0') || ((char)local_70 != *(char *)(param_1 + 0x17))) ||
          (local_70._1_1_ != *(char *)(param_1 + 0x15))) ||
         (auVar5._8_8_ = uStack_65, auVar5._0_8_ = local_6d, auVar6._8_8_ = uStack_55,
         auVar6._0_8_ = local_5d,
         auVar6 != *(undefined1 (*) [16])(param_1 + 0x78) ||
         auVar5 != *(undefined1 (*) [16])(param_1 + 0x68))) {
        *(longlong *)(param_1 + 0x44) = DAT_14cad0ef0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
      }
      if (local_40._0_8_ != 0) {
        FUN_1400020a8();
      }
    }
    goto LAB_140136c72;
  }
  if (DAT_14cad0ef0 == lVar9 || lVar9 == 0) {
LAB_140136b09:
    if (((iVar8 == 0) || (uVar1 = *(uint *)(param_1 + 0xa0), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) goto LAB_140136c58;
    plVar11 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar11 != (longlong *)0x0) &&
       ((((int)plVar11[2] == iVar8 && ((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0)) &&
        (*plVar11 != 0)))) {
      lVar10 = *(longlong *)(*plVar11 + 0x18c);
    }
    if ((lVar10 != 0) && (DAT_14cad0ef0 != lVar10)) goto LAB_140136c72;
    if ((int)uVar1 < DAT_14c9647dc) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar11 != (longlong *)0x0) && ((int)plVar11[2] == iVar8)) &&
         ((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0)) {
        if ((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0) {
          lVar9 = *plVar11;
        }
        else {
          lVar9 = 0;
        }
        *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(lVar9 + 0x18c);
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(lVar9 + 0x15d);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(lVar9 + 0x15f);
        if (*(undefined1 (*) [16])(lVar9 + 0x1c0) != *(undefined1 (*) [16])(param_1 + 0x78) ||
            *(undefined1 (*) [16])(lVar9 + 0x1b0) != *(undefined1 (*) [16])(param_1 + 0x68)) {
          uVar2 = *(undefined8 *)(lVar9 + 0x1b0);
          uVar3 = *(undefined8 *)(lVar9 + 0x1b8);
          uVar4 = *(undefined8 *)(lVar9 + 0x1c8);
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar9 + 0x1c0);
          *(undefined8 *)(param_1 + 0x80) = uVar4;
          *(undefined8 *)(param_1 + 0x68) = uVar2;
          *(undefined8 *)(param_1 + 0x70) = uVar3;
          FUN_147c47728((undefined8 *)(param_1 + 0x68));
        }
        goto LAB_140136c72;
      }
    }
  }
  else {
    if (DAT_14cacfd48 == (longlong *)0x0) {
      local_90 = &local_78;
      local_78 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_140eca530;
      local_98 = &LAB_1479b02e7;
      local_a0 = &LAB_146063820;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000006;
      local_c0 = 8;
      local_c8 = 0x170;
      FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
    }
    plVar11 = DAT_14cacfd48;
    lVar10 = DAT_14cacfd48[0x22];
    if (lVar10 == 0) {
      (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
      lVar10 = plVar11[0x22];
    }
    if (DAT_14cacfd78 == '\0') {
      FUN_1416bf7d6(lVar10,0);
      DAT_14cacfd78 = '\x01';
    }
    cVar7 = FUN_1447ce3c2(lVar10,lVar9,param_1);
    lVar10 = DAT_14cad0ef0;
    if (cVar7 != '\0') {
      lVar10 = *(longlong *)(param_1 + 0x44);
      iVar8 = *(int *)(param_1 + 0xa4);
      goto LAB_140136b09;
    }
    *(longlong *)(param_1 + 0x44) = DAT_14cad0ef0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
LAB_140136c58:
    if ((lVar10 != 0) && (DAT_14cad0ef0 != lVar10)) goto LAB_140136c72;
  }
  FUN_144842c0a(param_1 + 0x68);
LAB_140136c72:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140136e3c FUN_140136e3c body=66 status=ok
// SIG undefined FUN_140136e3c(void)

void FUN_140136e3c(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_140358fe5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1407866d8(param_1,0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 140136e7e FUN_140136e7e body=246 status=ok
// SIG undefined FUN_140136e7e(void)

longlong FUN_140136e7e(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  byte local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    uVar2 = FUN_1417fec38();
    cVar1 = FUN_1448093f4(param_1,uVar2);
    local_20 = (longlong *)0x0;
    if (cVar1 == '\0') {
      lVar4 = (**(code **)(*param_1 + 0xe0))(param_1);
      lVar3 = 0;
      if (*(int *)(lVar4 + 8) != 0) {
        lVar3 = lVar4;
      }
    }
    else {
      local_20 = param_1;
      FUN_1437eb802(&local_30,&local_20);
      if ((local_28 == 0) && ((longlong)(int)param_1[0x13] != 0)) {
        lVar4 = param_1[0x12];
        lVar5 = (longlong)(int)param_1[0x13] * 0xf8;
        do {
          lVar5 = lVar5 + -0xf8;
          uVar2 = FUN_1400d690e(lVar4);
          lVar3 = FUN_140136e7e(uVar2);
          if (lVar3 != 0) break;
          lVar4 = lVar4 + 0xf8;
        } while (lVar5 != 0);
      }
      else {
        lVar3 = 0;
      }
      if ((local_28 & 1) == 0) {
        *(int *)(local_30 + 0x28) = *(int *)(local_30 + 0x28) + -1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140136f76 FUN_140136f76 body=455 status=ok
// SIG undefined FUN_140136f76(void)

longlong * FUN_140136f76(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*param_1 == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x28);
    if (lVar8 == 0) {
      uVar6 = FUN_145ef056c();
      lVar8 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x28) = lVar8;
    }
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) {
      if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          param_1[0x30] = '\0';
          param_1[0x31] = '\0';
          param_1[0x32] = '\0';
          param_1[0x33] = '\0';
          param_1[0x34] = '\0';
          param_1[0x35] = '\0';
          param_1[0x36] = '\0';
          param_1[0x37] = '\0';
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,param_1 + 0x20);
          *(longlong *)(param_1 + 0x30) = lVar7;
          if (lVar7 != 0) goto LAB_140136ff2;
        }
      }
      *param_2 = DAT_14cb1afc8;
      lVar8 = DAT_14cb1afd0;
      param_2[1] = DAT_14cb1afd0;
      if (lVar8 == 0) {
        return param_2;
      }
      LOCK();
      piVar2 = (int *)(lVar8 + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return param_2;
    }
LAB_140136ff2:
    *param_2 = lVar7;
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar5[1] = &DAT_100000001;
    *puVar5 = &PTR_LAB_14ab66d20;
    puVar5[2] = lVar7;
    param_2[1] = (longlong)puVar5;
    return param_2;
  }
  lVar8 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    if (lVar8 != 0) {
      *param_2 = lVar8;
      param_2[1] = 0;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    if (lVar8 != 0) {
      *param_2 = lVar8;
      param_2[1] = (longlong)plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      goto LAB_140136fc1;
    }
  }
  *param_2 = DAT_14cb1afc8;
  lVar8 = DAT_14cb1afd0;
  param_2[1] = DAT_14cb1afd0;
  if (lVar8 != 0) {
    LOCK();
    piVar2 = (int *)(lVar8 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
LAB_140136fc1:
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
  return param_2;
}



// FUNCTION 14013713e FUN_14013713e body=204 status=ok
// SIG undefined FUN_14013713e(void)

undefined4 * FUN_14013713e(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (1.1754944e-38 < *(float *)(param_1 + 0x134)) {
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    if ((((fVar1 != 0.0) || (NAN(fVar1))) || (fVar2 != 0.0)) ||
       (((NAN(fVar2) || (fVar3 != 0.0)) || (NAN(fVar3))))) {
      local_18 = (double)fVar3;
      local_20 = (double)fVar2;
      local_28 = (double)fVar1;
      FUN_14013720c(param_2,param_1 + 0xc0,&local_28,0x3ff0000000000000);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0xc0);
  uVar5 = *(undefined4 *)(param_1 + 0xc4);
  uVar6 = *(undefined4 *)(param_1 + 200);
  uVar7 = *(undefined4 *)(param_1 + 0xcc);
  uVar8 = *(undefined4 *)(param_1 + 0xd4);
  uVar9 = *(undefined4 *)(param_1 + 0xd8);
  uVar10 = *(undefined4 *)(param_1 + 0xdc);
  param_2[4] = *(undefined4 *)(param_1 + 0xd0);
  param_2[5] = uVar8;
  param_2[6] = uVar9;
  param_2[7] = uVar10;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14013720c FUN_14013720c body=343 status=ok
// SIG undefined FUN_14013720c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_14013720c(ulonglong *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar12 = param_2[3];
  dVar7 = param_3[1];
  dVar10 = param_3[1];
  dVar11 = param_3[2];
  dVar1 = param_3[2];
  param_4 = param_4 * 0.5;
  dVar5 = (dVar3 * dVar11 * -1.0 + dVar7 * dVar4 + *param_3 * dVar12 * 1.0 + dVar2 * 0.0) * param_4
          + dVar2;
  dVar6 = (dVar2 * dVar1 * 1.0 + dVar10 * dVar12 + *param_3 * dVar4 * -1.0 + dVar3 * 0.0) * param_4
          + dVar3;
  dVar11 = (dVar12 * dVar11 * 1.0 + ((*param_3 * dVar3 * 1.0 + dVar4 * 0.0) - dVar7 * dVar2)) *
           param_4 + dVar4;
  dVar12 = (dVar4 * dVar1 * -1.0 + ((*param_3 * dVar2 * -1.0 + dVar12 * 0.0) - dVar10 * dVar3)) *
           param_4 + dVar12;
  dVar7 = dVar11 * dVar11 + dVar5 * dVar5;
  dVar10 = dVar12 * dVar12 + dVar6 * dVar6;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar13 = divpd(_DAT_149934d80,auVar9);
  auVar14._0_8_ = auVar13._0_8_ * dVar11;
  auVar14._8_8_ = auVar13._8_8_ * dVar12;
  auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar9 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar14,auVar9);
  *param_1 = (ulonglong)(dVar5 * auVar13._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_)
  ;
  param_1[1] = (ulonglong)(dVar6 * auVar13._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  *(undefined1 (*) [16])(param_1 + 2) = auVar9;
  return param_1;
}



// FUNCTION 140137364 FUN_140137364 body=122 status=ok
// SIG undefined FUN_140137364(void)

void FUN_140137364(longlong *param_1)

{
  char cVar1;
  
  FUN_1401374ee();
  cVar1 = (**(code **)(*param_1 + 0xf38))(param_1);
  if ((((cVar1 != '\0') && (param_1[0x3e] != 0)) && ((*(byte *)(param_1[0x3e] + 0x550) & 0x10) == 0)
      ) && ((longlong *)param_1[0x841] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))();
    if (cVar1 != '\0') {
      cVar1 = FUN_1401536e4(param_1,0,0);
      if ((cVar1 == '\0') || ((*(byte *)(param_1 + 0x88b) & 1) == 0)) {
        FUN_140153cb0(param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1401373de FUN_1401373de body=271 status=ok
// SIG undefined FUN_1401373de(void)

bool FUN_1401373de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x4430) == 0) {
    return false;
  }
  lVar3 = *(longlong *)(param_1 + 0x4430) + 0x18;
  lVar1 = FUN_14485c28e(lVar3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14485c28e(lVar3);
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return false;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar2 = FUN_140153468(lVar3);
  if (lVar2 == 0) {
    return false;
  }
  if ((*(byte *)(lVar3 + 0x298) & 2) != 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return false;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar3);
  if (lVar1 == 0) {
    return false;
  }
  if (lVar3 == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      lVar3 = 0;
      goto LAB_1401374bf;
    }
    param_1 = param_1 + 0x3210;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(param_1);
LAB_1401374bf:
  return lVar3 == lVar1;
}



// FUNCTION 1401374ee FUN_1401374ee body=490 status=ok
// SIG undefined FUN_1401374ee(void)

void FUN_1401374ee(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((((0.0 < *(float *)((longlong)param_1 + 0x2bd4)) && (param_1[0x3e] != 0)) &&
      ((*(byte *)(param_1[0x3e] + 0x550) & 0x18) == 0)) &&
     (((longlong *)param_1[0x39d] != (longlong *)0x0 &&
      (cVar3 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))(), cVar3 != '\0')))) {
    lVar4 = param_1[0x16];
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
      if (lVar4 == 0) goto LAB_140137506;
      lVar4 = param_1[0x16];
      if (lVar4 == 0) {
        lVar4 = FUN_1448abda6(param_1);
      }
    }
    if (((param_1[0x39e] != 0) && (fVar1 = *(float *)(param_1[0x39e] + 0x40), 0.0 < fVar1)) &&
       ((float)*(double *)(lVar4 + 0x6d0) < fVar1 + *(float *)((longlong)param_1 + 0x2bd4))) {
      *(byte *)(param_1[0x3e] + 0x550) = *(byte *)(param_1[0x3e] + 0x550) | 8;
    }
    cVar3 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    if ((cVar3 == '\0') || ((char)param_1[0x595] == '\x01')) {
      *(undefined4 *)((longlong)param_1 + 0x2bd4) = 0xbf800000;
    }
  }
LAB_140137506:
  *(undefined1 *)(param_1 + 0x779) = 0;
  cVar3 = (**(code **)(*param_1 + 0xeb8))(param_1);
  if (((cVar3 != '\0') && (param_1[0x3e] != 0)) &&
     (bVar2 = *(byte *)(param_1[0x3e] + 0x550), (bVar2 & 0x10) == 0)) {
    if ((bVar2 & 8) == 0) {
      if ((longlong *)param_1[0x39d] == (longlong *)0x0) {
        return;
      }
      cVar3 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))();
      if (cVar3 == '\0') {
        return;
      }
      cVar3 = (**(code **)(*param_1 + 0xec8))(param_1);
      if (cVar3 != '\0') {
        if ((*(byte *)(param_1 + 0x774) & 1) != 0) {
          return;
        }
        cVar3 = FUN_1401787de(param_1);
        if (cVar3 != '\0') {
          return;
        }
      }
      if (param_1[0x76c] == 0) {
        return;
      }
      cVar3 = (**(code **)(*param_1 + 0xeb8))(param_1);
      uVar5 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x779) = 1;
      if (param_1[0x76c] == 0) {
        return;
      }
      cVar3 = (**(code **)(*param_1 + 0xeb8))(param_1);
      uVar5 = 8;
    }
    if (cVar3 != '\0') {
      FUN_1410fee4e(param_1,uVar5);
      return;
    }
  }
  return;
}



// FUNCTION 1401376d8 FUN_1401376d8 body=71 status=ok
// SIG undefined FUN_1401376d8(void)

void FUN_1401376d8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      DAT_14cb0fae0 = DAT_14cb0fae0 + -1;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 14013771f FUN_14013771f body=42 status=ok
// SIG undefined FUN_14013771f(void)

void FUN_14013771f(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_1401376d8(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140137749 FUN_140137749 body=52 status=ok
// SIG undefined FUN_140137749(void)

void FUN_140137749(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14013777e FUN_14013777e body=14 status=ok
// SIG undefined FUN_14013777e(void)

void FUN_14013777e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14013778c();
    return;
  }
  return;
}



// FUNCTION 14013778c FUN_14013778c body=450 status=ok
// SIG undefined FUN_14013778c(void)

void FUN_14013778c(undefined8 *param_1,uint param_2)

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
LAB_1401378a7:
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
LAB_1401378e4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1401377e2;
LAB_1401377d7:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1401377e2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014013780e;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140137864:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1401378e4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1401378a7;
code_r0x00014013780e:
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
      goto LAB_140137864;
    }
  }
  goto LAB_1401377d7;
}



// FUNCTION 14013794e FUN_14013794e body=241 status=ok
// SIG undefined FUN_14013794e(void)

undefined8 * FUN_14013794e(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14ae0f1f0;
  param_1[0x2b] = &PTR_FUN_14ad42c10;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2e] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[0x2b] = &PTR_FUN_14a38cff0;
  if (param_1[0x2d] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x2d] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[0x2b] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x166) = 2;
  if ((*(int *)(param_1 + 0x2c) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  FUN_140137a40(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140137a40 FUN_140137a40 body=88 status=ok
// SIG undefined FUN_140137a40(void)

void FUN_140137a40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ae09a40;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140137a98(param_1 + 8);
  FUN_14476820c(param_1 + 2);
  return;
}



// FUNCTION 140137a98 FUN_140137a98 body=205 status=ok
// SIG undefined FUN_140137a98(void)

void FUN_140137a98(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3d4720;
  if (param_1[0x12] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x12] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14005bcf4(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[8] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[3] != 0 && (param_1[3] & 1) == 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140137b66 FUN_140137b66 body=141 status=ok
// SIG undefined FUN_140137b66(void)

undefined8 * FUN_140137b66(undefined8 *param_1,int param_2)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_14ae0dda0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ae09a28;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140137bf4 FUN_140137bf4 body=99 status=ok
// SIG undefined FUN_140137bf4(void)

void FUN_140137bf4(longlong *param_1)

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



// FUNCTION 140137c57 FUN_140137c57 body=155 status=ok
// SIG undefined FUN_140137c57(void)

void FUN_140137c57(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar5 = (longlong *)(param_1 + 8);
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        piVar4 = (int *)((lVar3 + -8) - (ulonglong)*(uint *)(lVar3 + -8));
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
            lVar3 = DAT_14c872d30;
            if (DAT_14c872d30 == 0) {
              lVar3 = FUN_145bdc178();
            }
            FUN_140028df4(lVar3,piVar4);
          }
          else {
            FUN_144705e74(piVar4);
          }
        }
      }
      if (plVar5[-1] != 0) {
        LOCK();
        puVar1 = (uint *)(plVar5[-1] + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar5 = plVar5 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140137cf2 FUN_140137cf2 body=87 status=ok
// SIG undefined FUN_140137cf2(void)

int FUN_140137cf2(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < param_2) {
    FUN_147bcda28(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar2 = param_1;
  }
  FUN_140137d49(lVar2 + (longlong)iVar1 * 8,param_2);
  return iVar1;
}



// FUNCTION 140137d49 FUN_140137d49 body=19 status=ok
// SIG undefined FUN_140137d49(void)

void FUN_140137d49(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 140137d5c FUN_140137d5c body=26050 status=ok
// SIG undefined FUN_140137d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140137d5c(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 auVar11 [15];
  undefined1 uVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined1 *puVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  float *pfVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined8 uVar28;
  char cVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  undefined1 *_Src;
  byte bVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  longlong *plVar36;
  longlong *plVar37;
  ulonglong uVar38;
  size_t sVar39;
  int iVar40;
  int iVar41;
  float *pfVar42;
  undefined8 uVar43;
  longlong lVar44;
  longlong *unaff_R12;
  undefined7 uVar45;
  uint uVar46;
  char cVar47;
  undefined4 uVar48;
  void *pvVar49;
  undefined4 uVar50;
  undefined8 uVar51;
  double dVar53;
  undefined1 auVar54 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar52;
  undefined1 auVar57 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar58;
  undefined1 in_XMM1 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auStack_5c8 [32];
  longlong *local_5a8;
  undefined8 local_598;
  longlong *local_590;
  longlong *local_588;
  uint local_57c;
  longlong *local_578;
  uint local_56c;
  longlong local_568;
  longlong local_560;
  undefined1 *local_558;
  ulonglong *local_550;
  ulonglong *local_548;
  undefined8 *local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  byte local_528;
  float local_520 [2];
  undefined1 local_518;
  float *local_4a0;
  undefined8 local_498;
  float *local_338;
  undefined8 local_330;
  undefined8 *local_320 [2];
  char local_310;
  undefined1 local_308 [128];
  undefined1 *local_288;
  uint local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  byte local_268;
  undefined1 local_260 [128];
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  byte local_1b8;
  undefined1 local_1b0 [128];
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float afStack_100 [2];
  void *local_f8;
  int local_f0;
  float *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  local_558 = (undefined1 *)param_5[1];
  *(undefined4 *)(param_4 + 0x21) = 0;
  local_578 = param_3;
  local_560 = param_2;
  if (*(int *)((longlong)param_4 + 0x10c) < 0) {
    FUN_147d12ef2(param_4);
  }
  local_540 = param_1;
  if (*(int *)((longlong)param_4 + 0x31c) < 0) {
    *(undefined4 *)(param_4 + 99) = 0;
    FUN_147d12fd0(param_4 + 0x22);
  }
  else {
    *(undefined4 *)(param_4 + 99) = 0;
  }
  puVar21 = (undefined1 *)*param_5;
  if (puVar21 < local_558) {
    local_588 = param_4 + 0x22;
    local_548 = (ulonglong *)(local_560 + 0x20);
    local_550 = (ulonglong *)(local_560 + 0x108);
    local_590 = param_4;
    do {
      auVar54 = _local_108;
      plVar18 = local_590;
      *param_5 = (longlong)(puVar21 + 1);
      uVar45 = (undefined7)((ulonglong)unaff_R12 >> 8);
      auVar11 = stack0xfffffffffffffef9;
      plVar36 = param_4;
      switch(*puVar21) {
      case 1:
        bVar14 = puVar21[1];
        *param_5 = (longlong)(puVar21 + 2);
        lVar31 = 0;
        lVar30 = 0;
        uVar27 = 0;
        if (bVar14 == 0x19) {
          uVar5 = *(ushort *)(puVar21 + 2);
          *param_5 = (longlong)(puVar21 + 4);
          lVar30 = param_5[4];
          lVar32 = (ulonglong)uVar5 * 0x10;
          lVar31 = *(longlong *)(lVar30 + lVar32);
          uVar27 = *(uint *)(lVar30 + 0xc + lVar32);
          lVar30 = (longlong)*(int *)(lVar30 + 8 + lVar32) + param_5[6];
        }
        lVar32 = local_590[0x21];
        uVar15 = (int)lVar32 + 1;
        *(uint *)(local_590 + 0x21) = uVar15;
        if (*(uint *)((longlong)local_590 + 0x10c) < uVar15) {
          FUN_147d13022(local_590);
        }
        param_4 = local_590;
        lVar44 = *plVar18;
        lVar32 = (longlong)(int)lVar32 * 0x20;
        *(longlong *)(lVar44 + lVar32) = lVar31;
        *(longlong *)(lVar44 + 8 + lVar32) = lVar30;
        *(uint *)(lVar44 + 0x10 + lVar32) = uVar27;
        *(byte *)(lVar44 + 0x18 + lVar32) = bVar14;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        iVar23 = (int)local_590[99];
        *(uint *)(local_590 + 99) = iVar23 + uVar27;
        if ((uint)(*(int *)((longlong)local_590 + 0x31c) - iVar23) < uVar27) {
          FUN_147d12c5e(local_588);
        }
        sVar39 = (longlong)(int)uVar27 << 3;
        pvVar49 = (void *)((longlong)iVar23 * 8 + *local_588);
LAB_14013a606:
        memset(pvVar49,0,sVar39);
        unaff_R12 = plVar18;
        break;
      case 2:
        bVar14 = puVar21[1];
        unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
        _Src = puVar21 + 2;
        *param_5 = (longlong)_Src;
        lVar31 = 0;
        lVar30 = 0;
        plVar36 = (longlong *)0x0;
        if (bVar14 == 0x19) {
          uVar5 = *(ushort *)(puVar21 + 2);
          _Src = puVar21 + 4;
          *param_5 = (longlong)_Src;
          lVar30 = param_5[4];
          lVar32 = (ulonglong)uVar5 * 0x10;
          lVar31 = *(longlong *)(lVar30 + lVar32);
          plVar36 = (longlong *)(ulonglong)*(uint *)(lVar30 + 0xc + lVar32);
          lVar30 = (longlong)*(int *)(lVar30 + 8 + lVar32) + param_5[6];
        }
        iVar23 = (int)local_590[0x21];
        *(uint *)(local_590 + 0x21) = iVar23 + 1U;
        local_598 = (float *)CONCAT44(local_598._4_4_,(int)plVar36);
        if (*(uint *)((longlong)local_590 + 0x10c) < iVar23 + 1U) {
          FUN_147d13022(local_590,iVar23);
          plVar36 = (longlong *)((ulonglong)local_598 & 0xffffffff);
        }
        lVar32 = *plVar18;
        lVar44 = (longlong)iVar23 * 0x20;
        *(longlong *)(lVar32 + lVar44) = lVar31;
        *(longlong *)(lVar32 + 8 + lVar44) = lVar30;
        *(int *)(lVar32 + 0x10 + lVar44) = (int)plVar36;
        *(byte *)(lVar32 + 0x18 + lVar44) = bVar14;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          plVar36 = (longlong *)
                    (ulonglong)(uint)(int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        iVar23 = (int)local_590[99];
        uVar27 = (uint)plVar36;
        *(uint *)(local_590 + 99) = iVar23 + uVar27;
        if ((uint)(*(int *)((longlong)local_590 + 0x31c) - iVar23) < uVar27) {
          FUN_147d12c5e(local_588);
        }
        plVar18 = local_588;
        memset((void *)(*local_588 + (longlong)iVar23 * 8),0,(longlong)(int)uVar27 << 3);
        param_4 = local_590;
        lVar32 = (longlong)iVar23 * 8 + *plVar18;
        if (lVar31 == 0) {
          if (0 < (int)uVar27) {
            bVar22 = 0x1c;
            if (bVar14 < 0x1c) {
              bVar22 = bVar14;
            }
            cVar13 = (&DAT_14aa842bb)[(ulonglong)bVar22 * 0x10];
            plVar18 = (longlong *)0x0;
            do {
              memcpy((void *)((longlong)plVar18 * 8 + lVar32),_Src,(longlong)cVar13);
              _Src = _Src + cVar13;
              plVar18 = (longlong *)((longlong)plVar18 + 1);
            } while (plVar36 != plVar18);
            *param_5 = (longlong)_Src;
          }
        }
        else if (0 < (int)uVar27) {
          lVar31 = (longlong)(int)local_598;
          plVar18 = (longlong *)0x0;
          do {
            if (((longlong)plVar18 < lVar31) &&
               (bVar14 = *(char *)(lVar30 + (longlong)plVar18) - 1, bVar14 < 5)) {
              sVar39 = *(size_t *)(&DAT_14aa85e30 + (ulonglong)bVar14 * 8);
            }
            else {
              sVar39 = 0;
            }
            memcpy((void *)((longlong)plVar18 * 8 + lVar32),_Src,sVar39);
            _Src = _Src + sVar39;
            plVar18 = (longlong *)((longlong)plVar18 + 1);
          } while (plVar36 != plVar18);
          *param_5 = (longlong)_Src;
          unaff_R12 = plVar36;
          param_4 = local_590;
        }
        break;
      case 3:
        uVar5 = *(ushort *)(puVar21 + 1);
        *param_5 = (longlong)(puVar21 + 3);
        if (local_560 != 0) {
          uVar26 = *local_548;
          uVar38 = ((longlong)uVar26 >> 0x18) + (longlong)local_548;
          if ((uVar26 & 1) == 0) {
            uVar38 = uVar26;
          }
          lVar31 = (ulonglong)uVar5 * 0x1c + uVar38;
          if ((longlong *)*local_578 == (longlong *)0x0) {
LAB_14013a764:
            uVar26 = (ulonglong)*(byte *)(lVar31 + 0x14);
            if (uVar26 < 3) {
              lVar30 = uVar26 * 3;
              cVar13 = (&DAT_14aa85959)[lVar30];
              uVar15 = (uint)cVar13;
              cVar3 = (&DAT_14aa8595a)[lVar30];
              uVar12 = (&DAT_14aa85958)[lVar30];
              lVar30 = param_4[0x21];
              uVar27 = (int)lVar30 + 1;
              *(uint *)(param_4 + 0x21) = uVar27;
              if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
                FUN_147d13022(param_4);
              }
              lVar32 = *param_4;
              lVar30 = (longlong)(int)lVar30 * 0x20;
              *(undefined8 *)(lVar32 + lVar30) = 0;
              ((undefined8 *)(lVar32 + lVar30))[1] = 0;
              *(undefined4 *)(lVar32 + 0x10 + lVar30) = 0;
              *(undefined1 *)(lVar32 + 0x18 + lVar30) = uVar12;
              iVar23 = (int)param_4[99];
              *(uint *)(param_4 + 99) = iVar23 + uVar15;
              if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < uVar15) {
                FUN_147d12c5e(local_588);
              }
              memset((void *)(*local_588 + (longlong)iVar23 * 8),0,(longlong)(int)uVar15 << 3);
              if ('\0' < cVar13) {
                lVar30 = *local_588;
                uVar26 = *local_550;
                uVar38 = ((longlong)uVar26 >> 0x18) + (longlong)local_550;
                if ((uVar26 & 1) == 0) {
                  uVar38 = uVar26;
                }
                pvVar49 = (void *)(*(uint *)(lVar31 + 0x18) + uVar38);
                uVar26 = 0;
                do {
                  memcpy((void *)((longlong)iVar23 * 8 + lVar30 + uVar26 * 8),pvVar49,
                         (longlong)cVar3);
                  pvVar49 = (void *)((longlong)pvVar49 + (longlong)cVar3);
                  uVar26 = uVar26 + 1;
                } while (uVar15 != uVar26);
              }
              break;
            }
            FUN_1406a507c(local_560,&local_538,uVar26,*(undefined4 *)(lVar31 + 0x18));
          }
          else {
            local_f8 = (void *)CONCAT71(local_f8._1_7_,0xff);
            local_5a8 = local_578;
            cVar13 = (**(code **)(*(longlong *)*local_578 + 0x48))();
            if (cVar13 == '\0') goto LAB_14013a764;
            FUN_144b25876(&local_118);
          }
          lVar31 = param_4[0x21];
          uVar27 = (int)lVar31 + 1;
          *(uint *)(param_4 + 0x21) = uVar27;
          if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
            FUN_147d13022(param_4);
          }
          lVar30 = *param_4;
          lVar31 = (longlong)(int)lVar31 * 0x20;
          *(undefined1 (*) [16])(lVar30 + lVar31) = ZEXT816(0);
          *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
          *(byte *)(lVar30 + 0x18 + lVar31) = local_528;
          if (local_528 == 0x19) {
            *(undefined8 *)(lVar30 + lVar31) = *local_538;
            *(undefined1 (*) [16])((undefined8 *)(lVar30 + lVar31) + 1) =
                 *(undefined1 (*) [16])(local_538 + 5);
          }
          lVar31 = (longlong)(int)(uint)local_498;
          pfVar25 = local_4a0;
          if (lVar31 != 0) {
            iVar23 = (int)param_4[99];
            *(uint *)(param_4 + 99) = iVar23 + (uint)local_498;
            if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < (uint)local_498) {
              FUN_147d12c5e(local_588,iVar23);
            }
            pfVar25 = local_4a0;
            if (local_4a0 == (float *)0x0) {
              pfVar25 = local_520;
            }
            memcpy((void *)((longlong)iVar23 * 8 + *local_588),pfVar25,lVar31 << 3);
            pfVar25 = local_4a0;
          }
          goto LAB_14013cf04;
        }
        lVar31 = param_4[0x21];
        uVar27 = (int)lVar31 + 1;
        *(uint *)(param_4 + 0x21) = uVar27;
        if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
          FUN_147d13022(param_4);
        }
        lVar30 = *param_4;
        lVar31 = (longlong)(int)lVar31 * 0x20;
        *(undefined1 (*) [16])(lVar30 + lVar31) = ZEXT816(0);
        *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
        *(undefined1 *)(lVar30 + 0x18 + lVar31) = 1;
        iVar23 = (int)param_4[99];
        *(int *)(param_4 + 99) = iVar23 + 1;
        if (*(int *)((longlong)param_4 + 0x31c) == iVar23) {
          FUN_147d12c5e(local_588);
        }
        *(undefined8 *)(*local_588 + (longlong)iVar23 * 8) = 0;
        break;
      case 4:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar50 = CONCAT31((int3)((uint)iVar24 >> 8),bVar14);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 != 0 || *(longlong *)(lVar30 + lVar44) != 0) goto LAB_14013a259;
        if (0x1b < bVar14) {
          uVar27 = 0x1c;
        }
        bVar14 = *(byte *)(lVar31 + 0x18);
        unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
        uVar15 = 0x1c;
        if (bVar14 < 0x1c) {
          uVar15 = (uint)bVar14;
        }
        cVar13 = (&DAT_14aa842ba)[uVar15 << 4];
        uVar17 = (uint)cVar13;
        cVar3 = (&DAT_14aa842ba)[uVar27 << 4];
        uVar26 = (ulonglong)cVar3;
        uVar16 = (uint)cVar3;
        if ((uVar17 == 1) || (cVar3 == '\x01')) {
          uVar38 = (ulonglong)uVar16;
          if (cVar3 < cVar13) {
            uVar38 = (ulonglong)uVar17;
          }
        }
        else {
          uVar38 = uVar26 & 0xffffffff;
          if (cVar13 <= cVar3) {
            uVar38 = (ulonglong)uVar17;
          }
        }
        lVar31 = (longlong)((int)param_4[99] - (iVar24 + iVar23));
        pfVar25 = (float *)(param_4[0x22] + lVar31 * 8);
        cVar29 = (char)uVar38;
        uVar46 = (uint)cVar29;
        cVar4 = (&DAT_14aa842b9)[uVar27 << 4];
        cVar47 = (&DAT_14aa842b9)[uVar15 << 4];
        uVar27 = (uint)uVar38;
        if ((cVar4 == '\x01') && (cVar47 == '\x01')) {
          if (3 < (uVar27 & 0xff) - 1) {
            if ((uVar27 & 0xff) == 0x10) {
              uVar38 = 0x15;
              plVar36 = local_590;
            }
            else {
              uVar38 = 0;
              uVar12 = 0;
              plVar36 = local_590;
              if (cVar29 < '\x01') goto LAB_14013b30a;
            }
          }
          uVar12 = (undefined1)uVar38;
          pfVar20 = (float *)(param_4[0x22] + lVar31 * 8 + uVar26 * 8);
          uVar26 = 0;
          pfVar42 = pfVar25;
          do {
            *(float *)((longlong)&local_538 + uVar26 * 4) = *pfVar20 + *pfVar42;
            uVar26 = uVar26 + 1;
            pfVar42 = pfVar42 + (ulonglong)(cVar3 != '\x01') * 2;
            pfVar20 = pfVar20 + (ulonglong)(cVar13 != '\x01') * 2;
          } while (uVar46 != uVar26);
          uVar26 = 0;
          do {
            pfVar25[uVar26 * 2] = *(float *)((longlong)&local_538 + uVar26 * 4);
            uVar26 = uVar26 + 1;
          } while (uVar46 != uVar26);
        }
        else {
          uVar15 = uVar27 & 0xff;
          local_1c8 = pfVar25;
          if ((cVar4 == '\x02') || (cVar47 == '\x02')) {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86105;
              break;
            case 2:
              local_598._0_4_ = 0x4aa86106;
              break;
            case 3:
              local_598._0_4_ = 0x4aa86107;
              break;
            case 4:
              local_598._0_4_ = 0x4aa86108;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x16;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d131cd(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d131cd();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                *(double *)(pfVar25 + uVar26 * 2) =
                     (double)(&local_118)[uVar26] + (double)(&local_538)[uVar26];
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else if ((cVar4 == '\x01') || (cVar47 == '\x01')) {
            switch(uVar15) {
            case 1:
            case 2:
            case 3:
            case 4:
LAB_14013d8e7:
              local_598 = (float *)CONCAT44(local_598._4_4_,uVar27);
              break;
            default:
              if (uVar15 == 0x10) {
                uVar27 = 0x15;
                goto LAB_14013d8e7;
              }
              local_598 = (float *)((ulonglong)local_598._4_4_ << 0x20);
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d133ed(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d133ed();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                pfVar25[uVar26 * 2] =
                     *(float *)((longlong)&local_118 + uVar26 * 4) +
                     *(float *)((longlong)&local_538 + uVar26 * 4);
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86109;
              break;
            case 2:
              local_598._0_4_ = 0x4aa8610a;
              break;
            case 3:
              local_598._0_4_ = 0x4aa8610b;
              break;
            case 4:
              local_598._0_4_ = 0x4aa8610c;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x15;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d132e5(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d132e5();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                pfVar25[uVar26 * 2] =
                     (float)(*(int *)((longlong)&local_538 + uVar26 * 4) +
                            *(int *)((longlong)&local_118 + uVar26 * 4));
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
LAB_14013dee5:
          uVar12 = SUB81(local_598,0);
          plVar36 = local_590;
        }
LAB_14013b30a:
        iVar23 = (int)plVar36[0x21];
        *(int *)(plVar36 + 0x21) = iVar23 + -1;
        if (uVar46 != uVar16 + uVar17) {
          *(uint *)(plVar36 + 99) = (int)plVar36[99] + (uVar46 - (uVar16 + uVar17));
        }
LAB_14013b32d:
        *(undefined1 *)(*plVar36 + 0x18 + (longlong)(iVar23 + -2) * 0x20) = uVar12;
        param_4 = plVar36;
        break;
      case 5:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar50 = CONCAT31((int3)((uint)iVar24 >> 8),bVar14);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 == 0 && *(longlong *)(lVar30 + lVar44) == 0) {
          if (0x1b < bVar14) {
            uVar27 = 0x1c;
          }
          bVar14 = *(byte *)(lVar31 + 0x18);
          unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
          uVar15 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar15 = (uint)bVar14;
          }
          cVar13 = (&DAT_14aa842ba)[uVar15 << 4];
          uVar17 = (uint)cVar13;
          cVar3 = (&DAT_14aa842ba)[uVar27 << 4];
          uVar26 = (ulonglong)cVar3;
          uVar16 = (uint)cVar3;
          if ((uVar17 == 1) || (cVar3 == '\x01')) {
            uVar38 = (ulonglong)uVar16;
            if (cVar3 < cVar13) {
              uVar38 = (ulonglong)uVar17;
            }
          }
          else {
            uVar38 = uVar26 & 0xffffffff;
            if (cVar13 <= cVar3) {
              uVar38 = (ulonglong)uVar17;
            }
          }
          lVar31 = (longlong)((int)param_4[99] - (iVar24 + iVar23));
          pfVar25 = (float *)(param_4[0x22] + lVar31 * 8);
          cVar29 = (char)uVar38;
          uVar46 = (uint)cVar29;
          cVar4 = (&DAT_14aa842b9)[uVar27 << 4];
          cVar47 = (&DAT_14aa842b9)[uVar15 << 4];
          uVar27 = (uint)uVar38;
          if ((cVar4 == '\x01') && (cVar47 == '\x01')) {
            if (3 < (uVar27 & 0xff) - 1) {
              if ((uVar27 & 0xff) == 0x10) {
                uVar38 = 0x15;
                plVar36 = local_590;
              }
              else {
                uVar38 = 0;
                uVar12 = 0;
                plVar36 = local_590;
                if (cVar29 < '\x01') goto LAB_14013b30a;
              }
            }
            uVar12 = (undefined1)uVar38;
            pfVar20 = (float *)(param_4[0x22] + lVar31 * 8 + uVar26 * 8);
            uVar26 = 0;
            pfVar42 = pfVar25;
            do {
              *(float *)((longlong)&local_538 + uVar26 * 4) = *pfVar42 - *pfVar20;
              uVar26 = uVar26 + 1;
              pfVar42 = pfVar42 + (ulonglong)(cVar3 != '\x01') * 2;
              pfVar20 = pfVar20 + (ulonglong)(cVar13 != '\x01') * 2;
            } while (uVar46 != uVar26);
            uVar26 = 0;
            do {
              pfVar25[uVar26 * 2] = *(float *)((longlong)&local_538 + uVar26 * 4);
              uVar26 = uVar26 + 1;
            } while (uVar46 != uVar26);
            goto LAB_14013b30a;
          }
          uVar15 = uVar27 & 0xff;
          local_1c8 = pfVar25;
          if ((cVar4 == '\x02') || (cVar47 == '\x02')) {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86105;
              break;
            case 2:
              local_598._0_4_ = 0x4aa86106;
              break;
            case 3:
              local_598._0_4_ = 0x4aa86107;
              break;
            case 4:
              local_598._0_4_ = 0x4aa86108;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x16;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d131cd(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d131cd();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                *(double *)(pfVar25 + uVar26 * 2) =
                     (double)(&local_538)[uVar26] - (double)(&local_118)[uVar26];
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else if ((cVar4 == '\x01') || (cVar47 == '\x01')) {
            switch(uVar15) {
            case 1:
            case 2:
            case 3:
            case 4:
LAB_14013d869:
              local_598 = (float *)CONCAT44(local_598._4_4_,uVar27);
              break;
            default:
              if (uVar15 == 0x10) {
                uVar27 = 0x15;
                goto LAB_14013d869;
              }
              local_598 = (float *)((ulonglong)local_598._4_4_ << 0x20);
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d133ed(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d133ed();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                pfVar25[uVar26 * 2] =
                     *(float *)((longlong)&local_538 + uVar26 * 4) -
                     *(float *)((longlong)&local_118 + uVar26 * 4);
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86009;
              break;
            case 2:
              local_598._0_4_ = 0x4aa8600a;
              break;
            case 3:
              local_598._0_4_ = 0x4aa8600b;
              break;
            case 4:
              local_598._0_4_ = 0x4aa8600c;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x15;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d132e5(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d132e5();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                pfVar25[uVar26 * 2] =
                     (float)(*(int *)((longlong)&local_538 + uVar26 * 4) -
                            *(int *)((longlong)&local_118 + uVar26 * 4));
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          goto LAB_14013dee5;
        }
        goto LAB_14013a259;
      case 6:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar50 = CONCAT31((int3)((uint)iVar24 >> 8),bVar14);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 == 0 && *(longlong *)(lVar30 + lVar44) == 0) {
          if (0x1b < bVar14) {
            uVar27 = 0x1c;
          }
          bVar14 = *(byte *)(lVar31 + 0x18);
          unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
          uVar15 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar15 = (uint)bVar14;
          }
          cVar13 = (&DAT_14aa842ba)[uVar15 << 4];
          uVar17 = (uint)cVar13;
          cVar3 = (&DAT_14aa842ba)[uVar27 << 4];
          uVar26 = (ulonglong)cVar3;
          uVar16 = (uint)cVar3;
          if ((uVar17 == 1) || (cVar3 == '\x01')) {
            uVar38 = (ulonglong)uVar16;
            if (cVar3 < cVar13) {
              uVar38 = (ulonglong)uVar17;
            }
          }
          else {
            uVar38 = uVar26 & 0xffffffff;
            if (cVar13 <= cVar3) {
              uVar38 = (ulonglong)uVar17;
            }
          }
          lVar31 = (longlong)((int)param_4[99] - (iVar24 + iVar23));
          pfVar25 = (float *)(param_4[0x22] + lVar31 * 8);
          cVar29 = (char)uVar38;
          uVar46 = (uint)cVar29;
          cVar4 = (&DAT_14aa842b9)[uVar27 << 4];
          cVar47 = (&DAT_14aa842b9)[uVar15 << 4];
          uVar27 = (uint)uVar38;
          if ((cVar4 == '\x01') && (cVar47 == '\x01')) {
            if (3 < (uVar27 & 0xff) - 1) {
              if ((uVar27 & 0xff) == 0x10) {
                uVar38 = 0x15;
                plVar36 = local_590;
              }
              else {
                uVar38 = 0;
                uVar12 = 0;
                plVar36 = local_590;
                if (cVar29 < '\x01') goto LAB_14013b30a;
              }
            }
            uVar12 = (undefined1)uVar38;
            pfVar20 = (float *)(param_4[0x22] + lVar31 * 8 + uVar26 * 8);
            uVar26 = 0;
            pfVar42 = pfVar25;
            do {
              *(float *)((longlong)&local_538 + uVar26 * 4) = *pfVar20 * *pfVar42;
              uVar26 = uVar26 + 1;
              pfVar42 = pfVar42 + (ulonglong)(cVar3 != '\x01') * 2;
              pfVar20 = pfVar20 + (ulonglong)(cVar13 != '\x01') * 2;
            } while (uVar46 != uVar26);
            uVar26 = 0;
            do {
              pfVar25[uVar26 * 2] = *(float *)((longlong)&local_538 + uVar26 * 4);
              uVar26 = uVar26 + 1;
            } while (uVar46 != uVar26);
            goto LAB_14013b30a;
          }
          uVar15 = uVar27 & 0xff;
          local_1c8 = pfVar25;
          if ((cVar4 == '\x02') || (cVar47 == '\x02')) {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86005;
              break;
            case 2:
              local_598._0_4_ = 0x4aa86006;
              break;
            case 3:
              local_598._0_4_ = 0x4aa86007;
              break;
            case 4:
              local_598._0_4_ = 0x4aa86008;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x16;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d131cd(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d131cd();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                *(double *)(pfVar25 + uVar26 * 2) =
                     (double)(&local_118)[uVar26] * (double)(&local_538)[uVar26];
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else if ((cVar4 == '\x01') || (cVar47 == '\x01')) {
            switch(uVar15) {
            case 1:
            case 2:
            case 3:
            case 4:
LAB_14013d965:
              local_598 = (float *)CONCAT44(local_598._4_4_,uVar27);
              break;
            default:
              if (uVar15 == 0x10) {
                uVar27 = 0x15;
                goto LAB_14013d965;
              }
              local_598 = (float *)((ulonglong)local_598._4_4_ << 0x20);
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d133ed(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d133ed();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                pfVar25[uVar26 * 2] =
                     *(float *)((longlong)&local_118 + uVar26 * 4) *
                     *(float *)((longlong)&local_538 + uVar26 * 4);
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86009;
              break;
            case 2:
              local_598._0_4_ = 0x4aa8600a;
              break;
            case 3:
              local_598._0_4_ = 0x4aa8600b;
              break;
            case 4:
              local_598._0_4_ = 0x4aa8600c;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x15;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d132e5(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d132e5();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                pfVar25[uVar26 * 2] =
                     (float)(*(int *)((longlong)&local_538 + uVar26 * 4) *
                            *(int *)((longlong)&local_118 + uVar26 * 4));
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          goto LAB_14013dee5;
        }
        goto LAB_14013a259;
      case 7:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar50 = CONCAT31((int3)((uint)iVar24 >> 8),bVar14);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 != 0 || *(longlong *)(lVar30 + lVar44) != 0) goto LAB_14013a259;
        if (0x1b < bVar14) {
          uVar27 = 0x1c;
        }
        bVar14 = *(byte *)(lVar31 + 0x18);
        unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
        uVar15 = 0x1c;
        if (bVar14 < 0x1c) {
          uVar15 = (uint)bVar14;
        }
        cVar13 = (&DAT_14aa842ba)[uVar15 << 4];
        uVar16 = (uint)cVar13;
        cVar3 = (&DAT_14aa842ba)[uVar27 << 4];
        local_568 = (longlong)cVar3;
        local_57c = (uint)cVar3;
        if ((uVar16 == 1) || (cVar3 == '\x01')) {
          uVar26 = (ulonglong)local_57c;
          if (cVar3 < cVar13) {
            uVar26 = (ulonglong)uVar16;
          }
        }
        else {
          uVar17 = (int)cVar3;
          if (cVar13 <= cVar3) {
            uVar17 = uVar16;
          }
          uVar26 = (ulonglong)uVar17;
        }
        uVar17 = (uint)uVar26;
        pfVar25 = (float *)(param_4[0x22] + (longlong)((int)param_4[99] - (iVar24 + iVar23)) * 8);
        cVar47 = (char)uVar26;
        uVar46 = (uint)cVar47;
        cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
        cVar4 = (&DAT_14aa842b9)[uVar15 << 4];
        uVar45 = (undefined7)(uVar26 >> 8);
        local_598 = pfVar25;
        if ((cVar13 == '\x01') && (cVar4 == '\x01')) {
          if ((uVar17 & 0xff) - 1 < 4) {
LAB_14013b11e:
            unaff_R12 = (longlong *)0x0;
            uVar26 = 0;
            local_56c = uVar17;
            do {
              fVar62 = *pfVar25;
              fVar58 = (float)FUN_144b293fa();
              *(float *)((longlong)&local_538 + uVar26 * 4) = fVar62 / fVar58;
              uVar26 = uVar26 + 1;
              pfVar25 = pfVar25 + (ulonglong)(cVar3 != '\x01') * 2;
            } while (uVar46 != uVar26);
            uVar26 = 0;
            do {
              local_598[uVar26 * 2] = *(float *)((longlong)&local_538 + uVar26 * 4);
              uVar26 = uVar26 + 1;
              uVar27 = local_56c;
            } while (uVar46 != uVar26);
          }
          else {
            if ((uVar17 & 0xff) == 0x10) {
              uVar17 = (uint)CONCAT71(uVar45,0x15);
              goto LAB_14013b11e;
            }
            uVar17 = 0;
            uVar27 = 0;
            if ('\0' < cVar47) goto LAB_14013b11e;
          }
          uVar12 = (undefined1)uVar27;
        }
        else {
          uVar38 = (ulonglong)uVar46;
          uVar17 = uVar17 & 0xff;
          local_1c8 = pfVar25;
          if ((cVar13 == '\x02') || (cVar4 == '\x02')) {
            switch(uVar17) {
            case 1:
              uVar12 = 5;
              break;
            case 2:
              uVar12 = 6;
              break;
            case 3:
              uVar12 = 7;
              break;
            case 4:
              uVar12 = 8;
              break;
            default:
              if (uVar17 == 0x10) {
                uVar12 = 0x16;
              }
              else {
                uVar12 = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_57c);
            FUN_147d131cd(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + local_568 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar16);
            FUN_147d131cd((ulonglong)unaff_R12 & 0xffffffff);
            if ('\0' < cVar47) {
              uVar26 = 0;
              do {
                dVar52 = (double)(&local_538)[uVar26];
                dVar53 = (double)FUN_147d1309a((&local_118)[uVar26]);
                *(double *)(local_598 + uVar26 * 2) = dVar52 / dVar53;
                uVar26 = uVar26 + 1;
              } while (uVar38 != uVar26);
            }
          }
          else if ((cVar13 == '\x01') || (cVar4 == '\x01')) {
            switch(uVar17) {
            case 1:
            case 2:
            case 3:
            case 4:
              break;
            default:
              if (uVar17 == 0x10) {
                uVar26 = CONCAT71(uVar45,0x15);
              }
              else {
                uVar26 = 0;
              }
            }
            uVar12 = (undefined1)uVar26;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_57c);
            FUN_147d133ed(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + local_568 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar16);
            FUN_147d133ed((ulonglong)unaff_R12 & 0xffffffff);
            if ('\0' < cVar47) {
              uVar26 = 0;
              do {
                fVar62 = *(float *)((longlong)&local_538 + uVar26 * 4);
                fVar58 = (float)FUN_144b293fa();
                local_598[uVar26 * 2] = fVar62 / fVar58;
                uVar26 = uVar26 + 1;
              } while (uVar38 != uVar26);
            }
          }
          else {
            switch(uVar17) {
            case 1:
              uVar12 = 9;
              break;
            case 2:
              uVar12 = 10;
              break;
            case 3:
              uVar12 = 0xb;
              break;
            case 4:
              uVar12 = 0xc;
              break;
            default:
              if (uVar17 == 0x10) {
                uVar12 = 0x15;
              }
              else {
                uVar12 = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_57c);
            FUN_147d132e5(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + local_568 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar16);
            FUN_147d132e5((ulonglong)unaff_R12 & 0xffffffff);
            if ('\0' < cVar47) {
              uVar26 = 0;
              do {
                iVar23 = *(int *)((longlong)&local_538 + uVar26 * 4);
                iVar24 = FUN_147d0d4b1(*(undefined4 *)((longlong)&local_118 + uVar26 * 4));
                local_598[uVar26 * 2] = (float)(iVar23 / iVar24);
                uVar26 = uVar26 + 1;
              } while (uVar38 != uVar26);
            }
          }
        }
        lVar31 = local_590[0x21];
        *(int *)(local_590 + 0x21) = (int)lVar31 + -1;
        if (uVar46 != local_57c + uVar16) {
          *(uint *)(local_590 + 99) = (int)local_590[99] + (uVar46 - (local_57c + uVar16));
        }
        *(undefined1 *)(*local_590 + 0x18 + (longlong)((int)lVar31 + -2) * 0x20) = uVar12;
        param_4 = local_590;
        break;
      case 8:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar50 = CONCAT31((int3)((uint)iVar24 >> 8),bVar14);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 == 0 && *(longlong *)(lVar30 + lVar44) == 0) {
          if (0x1b < bVar14) {
            uVar27 = 0x1c;
          }
          bVar14 = *(byte *)(lVar31 + 0x18);
          unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
          uVar15 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar15 = (uint)bVar14;
          }
          cVar13 = (&DAT_14aa842ba)[uVar15 << 4];
          uVar16 = (uint)cVar13;
          cVar3 = (&DAT_14aa842ba)[uVar27 << 4];
          local_57c = (uint)cVar3;
          if ((uVar16 == 1) || (cVar3 == '\x01')) {
            uVar26 = (ulonglong)local_57c;
            if (cVar3 < cVar13) {
              uVar26 = (ulonglong)uVar16;
            }
          }
          else {
            uVar17 = (int)cVar3;
            if (cVar13 <= cVar3) {
              uVar17 = uVar16;
            }
            uVar26 = (ulonglong)uVar17;
          }
          uVar17 = (uint)uVar26;
          pfVar25 = (float *)(param_4[0x22] + (longlong)((int)param_4[99] - (iVar24 + iVar23)) * 8);
          cVar13 = (char)uVar26;
          uVar46 = (uint)cVar13;
          uVar45 = (undefined7)(uVar26 >> 8);
          local_598 = pfVar25;
          if (((&DAT_14aa842b9)[uVar27 << 4] == '\x01') && ((&DAT_14aa842b9)[uVar15 << 4] == '\x01')
             ) {
            if (3 < (uVar17 & 0xff) - 1) {
              if ((uVar17 & 0xff) == 0x10) {
                uVar17 = (uint)CONCAT71(uVar45,0x15);
              }
              else {
                uVar12 = 0;
                uVar17 = 0;
                if (cVar13 < '\x01') goto LAB_14013aeab;
              }
            }
            unaff_R12 = (longlong *)(ulonglong)uVar46;
            plVar18 = (longlong *)0x0;
            local_56c = uVar17;
            do {
              uVar51 = FUN_144b293fa();
              in_XMM1._8_4_ = (int)extraout_XMM0_Qb;
              in_XMM1._0_8_ = (double)uVar51;
              in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
              uVar50 = FUN_1447c7e44();
              *(undefined4 *)((longlong)&local_538 + (longlong)plVar18 * 4) = uVar50;
              plVar18 = (longlong *)((longlong)plVar18 + 1);
            } while (unaff_R12 != plVar18);
            plVar18 = (longlong *)0x0;
            do {
              local_598[(longlong)plVar18 * 2] =
                   *(float *)((longlong)&local_538 + (longlong)plVar18 * 4);
              plVar18 = (longlong *)((longlong)plVar18 + 1);
            } while (unaff_R12 != plVar18);
            uVar12 = (undefined1)local_56c;
          }
          else {
            uVar17 = uVar17 & 0xff;
            local_1c8 = pfVar25;
            if (((&DAT_14aa842b9)[uVar27 << 4] == '\x02') ||
               ((&DAT_14aa842b9)[uVar15 << 4] == '\x02')) {
              switch(uVar17) {
              case 1:
                uVar12 = 5;
                break;
              case 2:
                uVar12 = 6;
                break;
              case 3:
                uVar12 = 7;
                break;
              case 4:
                uVar12 = 8;
                break;
              default:
                if (uVar17 == 0x10) {
                  uVar12 = 0x16;
                }
                else {
                  uVar12 = 0;
                }
              }
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_57c);
              FUN_147d131cd(uVar50,&local_1c8,&local_538);
              local_278 = pfVar25 + (longlong)cVar3 * 2;
              uStack_270 = CONCAT44(uStack_270._4_4_,uVar16);
              FUN_147d131cd((ulonglong)unaff_R12 & 0xffffffff);
              if ('\0' < cVar13) {
                uVar26 = 0;
                do {
                  uVar51 = FUN_147d1309a((&local_118)[uVar26]);
                  in_XMM1._8_4_ = (int)extraout_XMM0_Qb_01;
                  in_XMM1._0_8_ = (double)uVar51;
                  in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
                  uVar51 = FUN_144719204();
                  *(undefined8 *)(local_598 + uVar26 * 2) = uVar51;
                  uVar26 = uVar26 + 1;
                } while (uVar46 != uVar26);
              }
            }
            else {
              switch(uVar17) {
              case 1:
              case 2:
              case 3:
              case 4:
                break;
              default:
                if (uVar17 == 0x10) {
                  uVar26 = CONCAT71(uVar45,0x15);
                }
                else {
                  uVar26 = 0;
                }
              }
              uVar12 = (undefined1)uVar26;
              uStack_1c0 = CONCAT44(uStack_1c0._4_4_,local_57c);
              FUN_147d133ed(uVar50,&local_1c8,&local_538);
              local_278 = pfVar25 + (longlong)cVar3 * 2;
              uStack_270 = CONCAT44(uStack_270._4_4_,uVar16);
              FUN_147d133ed((ulonglong)unaff_R12 & 0xffffffff);
              if ('\0' < cVar13) {
                uVar26 = 0;
                do {
                  uVar51 = FUN_144b293fa();
                  in_XMM1._8_4_ = (int)extraout_XMM0_Qb_00;
                  in_XMM1._0_8_ = (double)uVar51;
                  in_XMM1._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                  fVar62 = (float)FUN_1447c7e44();
                  local_598[uVar26 * 2] = fVar62;
                  uVar26 = uVar26 + 1;
                } while (uVar46 != uVar26);
              }
            }
          }
LAB_14013aeab:
          iVar23 = (int)local_590[0x21];
          *(int *)(local_590 + 0x21) = iVar23 + -1;
          plVar36 = local_590;
          if (uVar46 != local_57c + uVar16) {
            *(uint *)(local_590 + 99) = (int)local_590[99] + (uVar46 - (local_57c + uVar16));
          }
          goto LAB_14013b32d;
        }
        goto LAB_14013a259;
      case 9:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        plVar18 = (longlong *)(lVar30 + lVar44);
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        if (*plVar18 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          lVar30 = (ulonglong)bVar22 * 0x10;
          iVar41 = (int)(char)(&DAT_14aa842ba)[lVar30];
        }
        else {
          iVar41 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        bVar22 = *(byte *)(lVar31 + 0x18);
        if (lVar32 == 0) {
          bVar33 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar33 = bVar22;
          }
          iVar40 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar33 * 0x10];
        }
        else {
          iVar40 = *(int *)(lVar31 + 0x10);
        }
        if (lVar32 != 0 || *plVar18 != 0) goto LAB_14013a259;
        local_538 = (undefined8 *)
                    ((longlong)((int)param_4[99] - (iVar23 + iVar41)) * 8 + param_4[0x22]);
        local_118 = (longlong *)((ulonglong)local_118._4_4_ << 0x20);
        uStack_530 = CONCAT44(uStack_530._4_4_,iVar40 + iVar41);
        uVar12 = FUN_147d10eb6(CONCAT31((int3)((uint)iVar24 >> 8),bVar14),
                               CONCAT71((int7)((ulonglong)lVar30 >> 8),bVar22),&local_538,&local_118
                              );
LAB_14013aba5:
        lVar30 = param_4[0x21];
        *(int *)(param_4 + 0x21) = (int)lVar30 + -1;
        if ((int)local_118 != 0) {
          *(int *)(param_4 + 99) = (int)param_4[99] - (int)local_118;
        }
        lVar31 = *param_4;
        iVar23 = (int)lVar30 + -2;
LAB_1401399f5:
        *(undefined1 *)(lVar31 + 0x18 + (longlong)iVar23 * 0x20) = uVar12;
        break;
      case 10:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        plVar18 = (longlong *)(lVar30 + lVar44);
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        if (*plVar18 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          lVar30 = (ulonglong)bVar22 * 0x10;
          iVar41 = (int)(char)(&DAT_14aa842ba)[lVar30];
        }
        else {
          iVar41 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        bVar22 = *(byte *)(lVar31 + 0x18);
        if (lVar32 == 0) {
          bVar33 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar33 = bVar22;
          }
          iVar40 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar33 * 0x10];
        }
        else {
          iVar40 = *(int *)(lVar31 + 0x10);
        }
        if (lVar32 == 0 && *plVar18 == 0) {
          local_538 = (undefined8 *)
                      ((longlong)((int)param_4[99] - (iVar23 + iVar41)) * 8 + param_4[0x22]);
          local_118 = (longlong *)((ulonglong)local_118._4_4_ << 0x20);
          uStack_530 = CONCAT44(uStack_530._4_4_,iVar40 + iVar41);
          uVar12 = FUN_147d10adc(CONCAT31((int3)((uint)iVar24 >> 8),bVar14),
                                 CONCAT71((int7)((ulonglong)lVar30 >> 8),bVar22),&local_538,
                                 &local_118);
          goto LAB_14013aba5;
        }
        goto LAB_14013a259;
      case 0xb:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar50 = CONCAT31((int3)((uint)iVar24 >> 8),bVar14);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 == 0 && *(longlong *)(lVar30 + lVar44) == 0) {
          if (0x1b < bVar14) {
            uVar27 = 0x1c;
          }
          bVar14 = *(byte *)(lVar31 + 0x18);
          unaff_R12 = (longlong *)CONCAT71(uVar45,bVar14);
          uVar15 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar15 = (uint)bVar14;
          }
          cVar13 = (&DAT_14aa842ba)[uVar15 << 4];
          uVar17 = (uint)cVar13;
          cVar3 = (&DAT_14aa842ba)[uVar27 << 4];
          uVar26 = (ulonglong)cVar3;
          uVar16 = (uint)cVar3;
          if ((uVar17 == 1) || (cVar3 == '\x01')) {
            uVar38 = (ulonglong)uVar16;
            if (cVar3 < cVar13) {
              uVar38 = (ulonglong)uVar17;
            }
          }
          else {
            uVar38 = uVar26 & 0xffffffff;
            if (cVar13 <= cVar3) {
              uVar38 = (ulonglong)uVar17;
            }
          }
          lVar31 = (longlong)((int)param_4[99] - (iVar24 + iVar23));
          pfVar25 = (float *)(param_4[0x22] + lVar31 * 8);
          cVar29 = (char)uVar38;
          uVar46 = (uint)cVar29;
          cVar4 = (&DAT_14aa842b9)[uVar27 << 4];
          cVar47 = (&DAT_14aa842b9)[uVar15 << 4];
          uVar27 = (uint)uVar38;
          if ((cVar4 == '\x01') && (cVar47 == '\x01')) {
            if (3 < (uVar27 & 0xff) - 1) {
              if ((uVar27 & 0xff) == 0x10) {
                uVar38 = 0x15;
                plVar36 = local_590;
              }
              else {
                uVar38 = 0;
                uVar12 = 0;
                plVar36 = local_590;
                if (cVar29 < '\x01') goto LAB_14013b30a;
              }
            }
            uVar12 = (undefined1)uVar38;
            pfVar20 = (float *)(param_4[0x22] + lVar31 * 8 + uVar26 * 8);
            uVar26 = 0;
            pfVar42 = pfVar25;
            do {
              fVar62 = *pfVar42;
              if (*pfVar42 <= *pfVar20) {
                fVar62 = *pfVar20;
              }
              *(float *)((longlong)&local_538 + uVar26 * 4) = fVar62;
              uVar26 = uVar26 + 1;
              pfVar42 = pfVar42 + (ulonglong)(cVar3 != '\x01') * 2;
              pfVar20 = pfVar20 + (ulonglong)(cVar13 != '\x01') * 2;
            } while (uVar46 != uVar26);
            uVar26 = 0;
            do {
              pfVar25[uVar26 * 2] = *(float *)((longlong)&local_538 + uVar26 * 4);
              uVar26 = uVar26 + 1;
            } while (uVar46 != uVar26);
            goto LAB_14013b30a;
          }
          uVar15 = uVar27 & 0xff;
          local_1c8 = pfVar25;
          if ((cVar4 == '\x02') || (cVar47 == '\x02')) {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86005;
              break;
            case 2:
              local_598._0_4_ = 0x4aa86006;
              break;
            case 3:
              local_598._0_4_ = 0x4aa86007;
              break;
            case 4:
              local_598._0_4_ = 0x4aa86008;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x16;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d131cd(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d131cd();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                dVar52 = (double)(&local_538)[uVar26];
                if ((double)(&local_538)[uVar26] <= (double)(&local_118)[uVar26]) {
                  dVar52 = (double)(&local_118)[uVar26];
                }
                *(double *)(pfVar25 + uVar26 * 2) = dVar52;
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else if ((cVar4 == '\x01') || (cVar47 == '\x01')) {
            switch(uVar15) {
            case 1:
            case 2:
            case 3:
            case 4:
LAB_14013d9f4:
              local_598 = (float *)CONCAT44(local_598._4_4_,uVar27);
              break;
            default:
              if (uVar15 == 0x10) {
                uVar27 = 0x15;
                goto LAB_14013d9f4;
              }
              local_598 = (float *)((ulonglong)local_598._4_4_ << 0x20);
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d133ed(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d133ed();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                fVar58 = *(float *)((longlong)&local_538 + uVar26 * 4);
                fVar62 = *(float *)((longlong)&local_118 + uVar26 * 4);
                if (fVar58 <= fVar62) {
                  fVar58 = fVar62;
                }
                pfVar25[uVar26 * 2] = fVar58;
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          else {
            switch(uVar15) {
            case 1:
              local_598._0_4_ = 0x4aa86009;
              break;
            case 2:
              local_598._0_4_ = 0x4aa8600a;
              break;
            case 3:
              local_598._0_4_ = 0x4aa8600b;
              break;
            case 4:
              local_598._0_4_ = 0x4aa8600c;
              break;
            default:
              if (uVar15 == 0x10) {
                local_598._0_4_ = 0x15;
              }
              else {
                local_598._0_4_ = 0;
              }
            }
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
            FUN_147d132e5(uVar50,&local_1c8,&local_538);
            local_278 = pfVar25 + uVar26 * 2;
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar17);
            FUN_147d132e5();
            if ('\0' < cVar29) {
              uVar26 = 0;
              do {
                fVar62 = *(float *)((longlong)&local_118 + uVar26 * 4);
                fVar58 = *(float *)((longlong)&local_538 + uVar26 * 4);
                if ((int)fVar58 < (int)fVar62) {
                  fVar58 = fVar62;
                }
                pfVar25[uVar26 * 2] = fVar58;
                uVar26 = uVar26 + 1;
              } while (uVar46 != uVar26);
            }
          }
          goto LAB_14013dee5;
        }
        goto LAB_14013a259;
      case 0xc:
        lVar30 = *param_4;
        iVar23 = (int)param_4[0x21] + -1;
        lVar32 = (longlong)(int)param_4[0x21] * 0x20;
        lVar31 = *(longlong *)(lVar30 + -0x20 + lVar32);
        uVar27 = *(uint *)(lVar30 + -0x10 + lVar32);
        bVar14 = *(byte *)(lVar30 + -8 + lVar32);
        *(int *)(param_4 + 0x21) = iVar23;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        lVar32 = (longlong)(int)param_4[99] - (longlong)(int)uVar27;
        if (uVar27 != 0) {
          *(int *)(param_4 + 99) = (int)lVar32;
        }
        lVar44 = param_4[0x22];
        local_80 = (float *)0x0;
        local_78 = 0x1000000000;
        local_118 = (longlong *)0x0;
        uStack_110 = 0;
        auVar8[0xf] = 0;
        auVar8._0_15_ = stack0xfffffffffffffef9;
        _local_108 = auVar8 << 8;
        if (lVar31 == 0) {
          local_118 = (longlong *)0x0;
          uStack_110 = 0;
          local_108[0] = bVar14;
          _local_108 = CONCAT151(auVar11,local_108[0]);
          local_78 = CONCAT44(0x10,uVar27);
          if (uVar27 < 0x11) {
            if (uVar27 == 0) goto LAB_1401388cd;
          }
          else {
            FUN_147bcda28(afStack_100,0);
          }
          pfVar25 = local_80;
          if (local_80 == (float *)0x0) {
            pfVar25 = afStack_100;
          }
          memcpy(pfVar25,(void *)(lVar32 * 8 + lVar44),(longlong)(int)uVar27 << 3);
          lVar30 = *param_4;
          iVar23 = (int)param_4[0x21];
        }
LAB_1401388cd:
        lVar32 = (longlong)iVar23 * 0x20;
        lVar31 = *(longlong *)(lVar30 + -0x20 + lVar32);
        uVar27 = *(uint *)(lVar30 + -0x10 + lVar32);
        bVar14 = *(byte *)(lVar30 + -8 + lVar32);
        iVar23 = iVar23 + -1;
        *(int *)(param_4 + 0x21) = iVar23;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        lVar44 = (longlong)(int)param_4[99] - (longlong)(int)uVar27;
        lVar32 = param_4[0x22];
        if (uVar27 != 0) {
          *(int *)(param_4 + 99) = (int)lVar44;
        }
        local_130 = (undefined1 *)0x0;
        local_128 = 0x1000000000;
        local_1c8 = (float *)0x0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        if (lVar31 == 0) {
          local_1c8 = (float *)0x0;
          uStack_1c0 = 0;
          local_128 = CONCAT44(0x10,uVar27);
          local_1b8 = bVar14;
          if (uVar27 < 0x11) {
            if (uVar27 == 0) goto LAB_1401389be;
          }
          else {
            FUN_147bcda28(local_1b0,0);
          }
          puVar21 = local_130;
          if (local_130 == (undefined1 *)0x0) {
            puVar21 = local_1b0;
          }
          memcpy(puVar21,(void *)(lVar44 * 8 + lVar32),(longlong)(int)uVar27 << 3);
          lVar30 = *param_4;
          iVar23 = (int)param_4[0x21];
        }
LAB_1401389be:
        lVar32 = (longlong)iVar23 * 0x20;
        lVar31 = *(longlong *)(lVar30 + -0x20 + lVar32);
        uVar27 = *(uint *)(lVar30 + -0x10 + lVar32);
        bVar14 = *(byte *)(lVar30 + -8 + lVar32);
        *(int *)(param_4 + 0x21) = iVar23 + -1;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        lVar32 = (longlong)(int)param_4[99] - (longlong)(int)uVar27;
        lVar30 = param_4[0x22];
        if (uVar27 != 0) {
          *(int *)(param_4 + 99) = (int)lVar32;
        }
        local_1e0 = (undefined1 *)0x0;
        local_1d8 = 0x1000000000;
        local_278 = (float *)0x0;
        uStack_270 = 0;
        local_268 = 0;
        if (lVar31 == 0) {
          local_278 = (float *)0x0;
          uStack_270 = 0;
          local_1d8 = CONCAT44(0x10,uVar27);
          local_268 = bVar14;
          if (uVar27 < 0x11) {
            if (uVar27 == 0) goto LAB_140138aa1;
          }
          else {
            FUN_147bcda28(local_260,0);
          }
          puVar21 = local_1e0;
          if (local_1e0 == (undefined1 *)0x0) {
            puVar21 = local_260;
          }
          memcpy(puVar21,(void *)(lVar32 * 8 + lVar30),(longlong)(int)uVar27 << 3);
        }
LAB_140138aa1:
        FUN_144b28e2a(&local_538,&local_278,&local_1c8);
        FUN_144b2885a(local_320);
        if (local_4a0 != (float *)0x0) {
          FUN_1400020a8();
        }
        lVar31 = param_4[0x21];
        uVar27 = (int)lVar31 + 1;
        *(uint *)(param_4 + 0x21) = uVar27;
        if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
          FUN_147d13022(param_4);
        }
        lVar30 = *param_4;
        lVar31 = (longlong)(int)lVar31 * 0x20;
        *(undefined1 (*) [16])(lVar30 + lVar31) = ZEXT816(0);
        *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
        *(char *)(lVar30 + 0x18 + lVar31) = local_310;
        if (local_310 == '\x19') {
          *(undefined8 *)(lVar30 + lVar31) = *local_320[0];
          *(undefined1 (*) [16])((undefined8 *)(lVar30 + lVar31) + 1) =
               *(undefined1 (*) [16])(local_320[0] + 5);
        }
        lVar31 = (longlong)(int)local_280;
        if (lVar31 != 0) {
          iVar23 = (int)param_4[99];
          *(uint *)(param_4 + 99) = iVar23 + local_280;
          if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < local_280) {
            FUN_147d12c5e(local_588,iVar23);
          }
          puVar21 = local_288;
          if (local_288 == (undefined1 *)0x0) {
            puVar21 = local_308;
          }
          memcpy((void *)((longlong)iVar23 * 8 + *local_588),puVar21,lVar31 << 3);
        }
        if (local_288 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1e0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14013ceea;
      case 0xd:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          plVar18 = (longlong *)(longlong)(int)(char)bVar22;
          lVar31 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              plVar36 = (longlong *)0x0;
              do {
                fVar62 = sinf(*(float *)(lVar31 + (longlong)plVar36 * 8));
                *(float *)(lVar31 + (longlong)plVar36 * 8) = fVar62;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while (plVar18 != plVar36);
            }
          }
          else if (cVar13 == '\x02') {
            if (uVar26 - 1 < 0x18) {
              plVar36 = (longlong *)0x0;
              do {
                dVar52 = sin(*(double *)(lVar31 + (longlong)plVar36 * 8));
                *(double *)(lVar31 + (longlong)plVar36 * 8) = dVar52;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while (plVar18 != plVar36);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_140139b5a;
              }
            }
            bVar14 = bVar22;
            unaff_R12 = (longlong *)0x0;
            do {
              switch(cVar13) {
              case '\x01':
                fVar62 = *(float *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              case '\x02':
                fVar62 = (float)*(double *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              case '\x03':
                fVar62 = (float)*(int *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              case '\x04':
                fVar62 = (float)*(byte *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              default:
                fVar62 = 0.0;
              }
              fVar62 = sinf(fVar62);
              *(float *)(lVar31 + (longlong)unaff_R12 * 8) = fVar62;
              unaff_R12 = (longlong *)((longlong)unaff_R12 + 1);
            } while (plVar18 != unaff_R12);
          }
LAB_140139b5a:
          *(byte *)(*local_590 + 0x18 + (longlong)((int)local_590[0x21] + -1) * 0x20) = bVar14;
          param_4 = local_590;
        }
        break;
      case 0xe:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          plVar18 = (longlong *)(longlong)(int)(char)bVar22;
          lVar31 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              plVar36 = (longlong *)0x0;
              do {
                fVar62 = cosf(*(float *)(lVar31 + (longlong)plVar36 * 8));
                *(float *)(lVar31 + (longlong)plVar36 * 8) = fVar62;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while (plVar18 != plVar36);
            }
          }
          else if (cVar13 == '\x02') {
            if (uVar26 - 1 < 0x18) {
              plVar36 = (longlong *)0x0;
              do {
                dVar52 = cos(*(double *)(lVar31 + (longlong)plVar36 * 8));
                *(double *)(lVar31 + (longlong)plVar36 * 8) = dVar52;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while (plVar18 != plVar36);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_140139b5a;
              }
            }
            bVar14 = bVar22;
            unaff_R12 = (longlong *)0x0;
            do {
              switch(cVar13) {
              case '\x01':
                fVar62 = *(float *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              case '\x02':
                fVar62 = (float)*(double *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              case '\x03':
                fVar62 = (float)*(int *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              case '\x04':
                fVar62 = (float)*(byte *)(lVar31 + (longlong)unaff_R12 * 8);
                break;
              default:
                fVar62 = 0.0;
              }
              fVar62 = cosf(fVar62);
              *(float *)(lVar31 + (longlong)unaff_R12 * 8) = fVar62;
              unaff_R12 = (longlong *)((longlong)unaff_R12 + 1);
            } while (plVar18 != unaff_R12);
          }
          goto LAB_140139b5a;
        }
        break;
      case 0xf:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d1047e();
LAB_1401399e6:
          lVar31 = *param_4;
          iVar23 = (int)param_4[0x21] + -1;
          goto LAB_1401399f5;
        }
        break;
      case 0x10:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d105c6();
          goto LAB_1401399e6;
        }
        break;
      case 0x11:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d107ad();
          goto LAB_1401399e6;
        }
        break;
      case 0x12:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d10994();
          goto LAB_1401399e6;
        }
        break;
      case 0x13:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        iVar24 = (int)param_4[0x21] + -2;
        lVar44 = (longlong)iVar24 * 0x20;
        plVar18 = (longlong *)(lVar30 + lVar44);
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        if (*plVar18 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          lVar30 = (ulonglong)bVar22 * 0x10;
          iVar41 = (int)(char)(&DAT_14aa842ba)[lVar30];
        }
        else {
          iVar41 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        bVar22 = *(byte *)(lVar31 + 0x18);
        if (lVar32 == 0) {
          bVar33 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar33 = bVar22;
          }
          iVar40 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar33 * 0x10];
        }
        else {
          iVar40 = *(int *)(lVar31 + 0x10);
        }
        if (lVar32 == 0 && *plVar18 == 0) {
          local_538 = (undefined8 *)
                      ((longlong)((int)param_4[99] - (iVar23 + iVar41)) * 8 + param_4[0x22]);
          local_118 = (longlong *)((ulonglong)local_118._4_4_ << 0x20);
          uStack_530 = CONCAT44(uStack_530._4_4_,iVar40 + iVar41);
          uVar12 = FUN_147d112d9(CONCAT31((int3)((uint)iVar24 >> 8),bVar14),
                                 CONCAT71((int7)((ulonglong)lVar30 >> 8),bVar22),&local_538,
                                 &local_118);
          goto LAB_14013aba5;
        }
        goto LAB_14013a259;
      case 0x14:
        goto LAB_14013a259;
      case 0x15:
        goto LAB_14013a259;
      case 0x16:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d0fc71();
          goto LAB_1401399e6;
        }
        break;
      case 0x17:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          uVar27 = *(uint *)(*param_4 + lVar31 + 0x18);
          bVar14 = (byte)uVar27;
          uVar15 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar15 = uVar27;
          }
          uVar26 = (ulonglong)(uVar15 & 0xff);
          uVar27 = (uVar15 & 0xff) << 4;
          bVar22 = (&DAT_14aa842ba)[uVar27];
          plVar18 = (longlong *)(longlong)(int)(char)bVar22;
          lVar31 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              plVar36 = (longlong *)0x0;
              do {
                fVar62 = (float)FUN_144b293fa();
                in_XMM1 = ZEXT416((uint)(1.0 / fVar62));
                *(float *)(lVar31 + (longlong)plVar36 * 8) = 1.0 / fVar62;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while (plVar18 != plVar36);
            }
          }
          else if (cVar13 == '\x02') {
            if (uVar26 - 1 < 0x18) {
              plVar36 = (longlong *)0x0;
              do {
                dVar52 = (double)FUN_147d1309a(*(undefined8 *)(lVar31 + (longlong)plVar36 * 8));
                in_XMM1._0_8_ = 1.0 / dVar52;
                in_XMM1._8_8_ = 0;
                *(double *)(lVar31 + (longlong)plVar36 * 8) = in_XMM1._0_8_;
                plVar36 = (longlong *)((longlong)plVar36 + 1);
              } while (plVar18 != plVar36);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_140139b5a;
              }
            }
            bVar14 = bVar22;
            unaff_R12 = (longlong *)0x0;
            do {
              switch(cVar13) {
              case '\x01':
                break;
              case '\x02':
                break;
              case '\x03':
                break;
              case '\x04':
              }
              fVar62 = (float)FUN_144b293fa();
              in_XMM1 = ZEXT416((uint)(1.0 / fVar62));
              *(float *)(lVar31 + (longlong)unaff_R12 * 8) = 1.0 / fVar62;
              unaff_R12 = (longlong *)((longlong)unaff_R12 + 1);
            } while (plVar18 != unaff_R12);
          }
          goto LAB_140139b5a;
        }
        break;
      case 0x18:
        lVar31 = *param_4;
        lVar32 = (longlong)(int)param_4[0x21] * 0x20;
        lVar30 = *(longlong *)(lVar31 + -0x20 + lVar32);
        uVar27 = *(uint *)(lVar31 + -0x10 + lVar32);
        bVar14 = *(byte *)(lVar31 + -8 + lVar32);
        *(int *)(param_4 + 0x21) = (int)param_4[0x21] + -1;
        if (lVar30 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        lVar31 = (longlong)(int)param_4[99] - (longlong)(int)uVar27;
        if (uVar27 != 0) {
          *(int *)(param_4 + 99) = (int)lVar31;
        }
        lVar32 = param_4[0x22];
        local_80 = (float *)0x0;
        local_78 = 0x1000000000;
        local_118 = (longlong *)0x0;
        uStack_110 = 0;
        auVar9[0xf] = 0;
        auVar9._0_15_ = stack0xfffffffffffffef9;
        _local_108 = auVar9 << 8;
        if (lVar30 == 0) {
          local_118 = (longlong *)0x0;
          uStack_110 = 0;
          local_108[0] = bVar14;
          _local_108 = CONCAT151(auVar11,local_108[0]);
          local_78 = CONCAT44(0x10,uVar27);
          if (uVar27 < 0x11) {
            if (uVar27 == 0) goto LAB_140139db9;
          }
          else {
            FUN_147bcda28(afStack_100,0);
          }
          pfVar25 = local_80;
          if (local_80 == (float *)0x0) {
            pfVar25 = afStack_100;
          }
          memcpy(pfVar25,(void *)(lVar31 * 8 + lVar32),(longlong)(int)uVar27 << 3);
        }
LAB_140139db9:
        FUN_1436ae64b(&local_538);
        plVar18 = local_590;
        if (local_528 == 0x19) {
          memset(&local_1c8,0,0xa8);
          local_128 = CONCAT44(0x10,(uint)local_128);
        }
        else {
          bVar14 = 0x1c;
          if (local_528 < 0x1c) {
            bVar14 = local_528;
          }
          bVar22 = (&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10];
          local_130 = (undefined1 *)0x0;
          local_128 = 0x1000000000;
          cVar13 = (&DAT_14aa842b9)[(ulonglong)bVar14 * 0x10];
          lVar31 = (longlong)(char)bVar22;
          if (cVar13 == '\x02') {
            switch(bVar22) {
            case 1:
              local_1b8 = 5;
              break;
            case 2:
              local_1b8 = 6;
              break;
            case 3:
              local_1b8 = 7;
              break;
            case 4:
              local_1b8 = 8;
              break;
            default:
              if (bVar22 == 0x10) {
                local_1b8 = 0x16;
              }
              else {
                local_1b8 = 0;
              }
            }
            local_1c8 = (float *)0x0;
            uStack_1c0 = 0;
            FUN_14013e547(local_320);
            param_4 = local_590;
            if ('\0' < (char)bVar22) {
              lVar30 = 0;
              do {
                dVar52 = (double)(&local_278)[lVar30];
                in_XMM1 = ZEXT816(0);
                if (dVar52 < 0.0) {
                  dVar52 = sqrt(dVar52);
                }
                else {
                  dVar52 = SQRT(dVar52);
                }
                lVar32 = (longlong)(int)(uint)local_128;
                uVar27 = (uint)local_128 + 1;
                local_128 = CONCAT44(local_128._4_4_,uVar27);
                if (local_128._4_4_ < uVar27) {
                  FUN_147bcda28(local_1b0);
                }
                puVar21 = local_130;
                if (local_130 == (undefined1 *)0x0) {
                  puVar21 = local_1b0;
                }
                *(double *)(puVar21 + lVar32 * 8) = dVar52;
                lVar30 = lVar30 + 1;
                param_4 = local_590;
              } while (lVar31 != lVar30);
            }
          }
          else {
            if (bVar22 == 1) {
              local_1c8 = (float *)0x0;
              uStack_1c0 = 0;
              local_1b8 = 1;
              pfVar25 = local_4a0;
              if (local_4a0 == (float *)0x0) {
                pfVar25 = local_520;
              }
              if (cVar13 == '\x01') {
                fVar62 = *pfVar25;
                plVar18 = param_4;
              }
              else if (cVar13 == '\x03') {
                fVar62 = (float)(int)*pfVar25;
              }
              else {
                fVar62 = 0.0;
                if (cVar13 == '\x04') {
                  fVar62 = (float)*(byte *)pfVar25;
                }
              }
              local_278 = (float *)CONCAT44(fVar62,fVar62);
              uStack_270 = CONCAT44(fVar62,fVar62);
LAB_140139e82:
              param_4 = plVar18;
              if ((char)bVar22 < '\x01') goto LAB_14013ce2d;
            }
            else {
              local_1b8 = bVar22;
              if (bVar22 < 4) {
                if ((bVar22 != 2) && (local_1b8 = 0, bVar22 == 3)) {
                  local_1b8 = bVar22;
                }
              }
              else if ((bVar22 != 4) && (local_1b8 = 0, bVar22 == 0x10)) {
                local_1b8 = 0x15;
              }
              local_1c8 = (float *)0x0;
              uStack_1c0 = 0;
              bVar14 = 4;
              if ((char)bVar22 < '\x04') {
                bVar14 = bVar22;
              }
              if ((char)bVar22 < '\x01') {
LAB_14013c772:
                memset((void *)((longlong)&local_278 + lVar31 * 4),0,
                       (ulonglong)(3 - (int)(char)bVar14) * 4 + 4);
                goto LAB_140139e82;
              }
              pfVar25 = local_4a0;
              if (local_4a0 == (float *)0x0) {
                pfVar25 = local_520;
              }
              uVar26 = 0;
              do {
                if (cVar13 == '\x01') {
                  fVar62 = pfVar25[uVar26 * 2];
                }
                else if (cVar13 == '\x03') {
                  fVar62 = (float)(int)pfVar25[uVar26 * 2];
                }
                else {
                  fVar62 = 0.0;
                  if (cVar13 == '\x04') {
                    fVar62 = (float)*(byte *)(pfVar25 + uVar26 * 2);
                  }
                }
                *(float *)((longlong)&local_278 + uVar26 * 4) = fVar62;
                uVar26 = uVar26 + 1;
              } while ((uint)(int)(char)bVar14 != uVar26);
              if ((char)bVar22 < '\x04') goto LAB_14013c772;
            }
            lVar30 = 0;
            do {
              fVar62 = *(float *)((longlong)&local_278 + lVar30 * 4);
              in_XMM1 = ZEXT816(0);
              if (fVar62 < 0.0) {
                fVar62 = sqrtf(fVar62);
              }
              else {
                fVar62 = SQRT(fVar62);
              }
              lVar32 = (longlong)(int)(uint)local_128;
              uVar27 = (uint)local_128 + 1;
              local_128 = CONCAT44(local_128._4_4_,uVar27);
              if (local_128._4_4_ < uVar27) {
                FUN_147bcda28(local_1b0);
              }
              puVar21 = local_130;
              if (local_130 == (undefined1 *)0x0) {
                puVar21 = local_1b0;
              }
              *(float *)(puVar21 + lVar32 * 8) = fVar62;
              *(undefined4 *)(puVar21 + lVar32 * 8 + 4) = 0;
              lVar30 = lVar30 + 1;
              param_4 = plVar18;
            } while (lVar31 != lVar30);
          }
        }
LAB_14013ce2d:
        if (local_4a0 != (float *)0x0) {
          FUN_1400020a8();
        }
        lVar31 = param_4[0x21];
        uVar27 = (int)lVar31 + 1;
        *(uint *)(param_4 + 0x21) = uVar27;
        if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
          FUN_147d13022(param_4);
        }
        lVar30 = *param_4;
        lVar31 = (longlong)(int)lVar31 * 0x20;
        *(undefined1 (*) [16])(lVar30 + lVar31) = ZEXT816(0);
        *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
        *(byte *)(lVar30 + 0x18 + lVar31) = local_1b8;
        if (local_1b8 == 0x19) {
          *(undefined8 *)(lVar30 + lVar31) = *(undefined8 *)local_1c8;
          *(undefined1 (*) [16])((undefined8 *)(lVar30 + lVar31) + 1) =
               *(undefined1 (*) [16])(local_1c8 + 10);
        }
        lVar31 = (longlong)(int)(uint)local_128;
        if (lVar31 != 0) {
          iVar23 = (int)param_4[99];
          *(uint *)(param_4 + 99) = iVar23 + (uint)local_128;
          if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < (uint)local_128) {
            FUN_147d12c5e(local_588,iVar23);
          }
          puVar21 = local_130;
          if (local_130 == (undefined1 *)0x0) {
            puVar21 = local_1b0;
          }
          memcpy((void *)((longlong)iVar23 * 8 + *local_588),puVar21,lVar31 << 3);
        }
LAB_14013ceea:
        pfVar25 = local_80;
        if (local_130 != (undefined1 *)0x0) {
          FUN_1400020a8();
          pfVar25 = local_80;
        }
        goto LAB_14013cf04;
      case 0x19:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          uVar27 = *(uint *)(*param_4 + lVar31 + 0x18);
          bVar14 = (byte)uVar27;
          uVar15 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar15 = uVar27;
          }
          uVar26 = (ulonglong)(uVar15 & 0xff);
          uVar15 = (uVar15 & 0xff) << 4;
          uVar27 = (uint)(char)(&DAT_14aa842ba)[uVar15];
          lVar31 = (longlong)(int)((int)param_4[99] - uVar27) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar15];
          if (cVar13 == '\x01') {
LAB_140138ef6:
            if (uVar26 - 1 < 0x18) {
              fVar62 = 0.0;
              uVar26 = 0;
              do {
                fVar58 = *(float *)(lVar31 + uVar26 * 8);
                fVar62 = fVar62 + fVar58 * fVar58;
                uVar26 = uVar26 + 1;
              } while (uVar27 != uVar26);
              if (fVar62 <= 9.9999994e-11) {
                fVar62 = 9.9999994e-11;
              }
              uVar26 = 0;
              do {
                fVar58 = *(float *)(lVar31 + uVar26 * 8) * (1.0 / SQRT(fVar62));
                in_XMM1 = ZEXT416((uint)fVar58);
                *(float *)(lVar31 + uVar26 * 8) = fVar58;
                uVar26 = uVar26 + 1;
              } while (uVar27 != uVar26);
            }
          }
          else {
            if (cVar13 != '\x02') {
              if (cVar13 == '\x03') {
                if (uVar26 - 1 < 0x18) {
                  uVar38 = 0;
                  do {
                    *(float *)(lVar31 + uVar38 * 8) = (float)*(int *)(lVar31 + uVar38 * 8);
                    uVar38 = uVar38 + 1;
                  } while (uVar27 != uVar38);
                }
                bVar14 = bVar14 - 8;
                param_4 = local_590;
              }
              else {
                param_4 = local_590;
                if (cVar13 != '\x04') goto LAB_140138f53;
                if (uVar26 - 1 < 0x18) {
                  uVar38 = 0;
                  do {
                    *(float *)(lVar31 + uVar38 * 8) = (float)*(byte *)(lVar31 + uVar38 * 8);
                    uVar38 = uVar38 + 1;
                  } while (uVar27 != uVar38);
                }
                bVar14 = bVar14 - 0xc;
              }
              goto LAB_140138ef6;
            }
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              dVar52 = 0.0;
              lVar30 = 0;
              do {
                dVar53 = *(double *)(lVar31 + lVar30 * 8);
                dVar52 = dVar52 + dVar53 * dVar53;
                lVar30 = lVar30 + 1;
              } while ((int)uVar27 != lVar30);
              if (dVar52 <= 1.0000000000000002e-10) {
                dVar52 = 1.0000000000000002e-10;
              }
              lVar30 = 0;
              do {
                in_XMM1._0_8_ = *(double *)(lVar31 + lVar30 * 8) * (1.0 / SQRT(dVar52));
                in_XMM1._8_8_ = 0;
                *(double *)(lVar31 + lVar30 * 8) = in_XMM1._0_8_;
                lVar30 = lVar30 + 1;
              } while ((int)uVar27 != lVar30);
            }
          }
LAB_140138f53:
          *(byte *)(*param_4 + 0x18 + (longlong)((int)param_4[0x21] + -1) * 0x20) = bVar14;
        }
        break;
      case 0x1a:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          lVar31 = (longlong)(int)(char)bVar22;
          lVar30 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                fVar62 = *(float *)(lVar30 + lVar32 * 8);
                if (1.0 <= fVar62) {
                  fVar62 = 1.0;
                }
                in_XMM1 = ZEXT816(0);
                if (fVar62 <= 0.0) {
                  fVar62 = 0.0;
                }
                *(float *)(lVar30 + lVar32 * 8) = fVar62;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar13 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                dVar52 = *(double *)(lVar30 + lVar32 * 8);
                if (1.0 <= dVar52) {
                  dVar52 = 1.0;
                }
                in_XMM1 = ZEXT816(0);
                if (dVar52 <= 0.0) {
                  dVar52 = 0.0;
                }
                *(double *)(lVar30 + lVar32 * 8) = dVar52;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              in_XMM1 = ZEXT816(0);
              switch(cVar13) {
              case '\x01':
                in_XMM1 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                break;
              case '\x02':
                in_XMM1 = ZEXT416((uint)(float)*(double *)(lVar30 + lVar32 * 8));
                break;
              case '\x03':
                in_XMM1 = ZEXT416((uint)(float)*(int *)(lVar30 + lVar32 * 8));
                break;
              case '\x04':
                in_XMM1 = ZEXT416((uint)(float)*(byte *)(lVar30 + lVar32 * 8));
              }
              if (1.0 <= in_XMM1._0_4_) {
                in_XMM1._0_4_ = 1.0;
              }
              if (in_XMM1._0_4_ <= 0.0) {
                auVar7._12_4_ = 0;
                auVar7._0_12_ = in_XMM1._4_12_;
                in_XMM1 = auVar7 << 0x20;
              }
              *(int *)(lVar30 + lVar32 * 8) = in_XMM1._0_4_;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
LAB_14013a18e:
          *(byte *)(*param_4 + 0x18 + (longlong)((int)param_4[0x21] + -1) * 0x20) = bVar14;
        }
        break;
      case 0x1b:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar26 = (ulonglong)bVar22;
          cVar13 = (&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
          lVar31 = (longlong)(int)cVar13;
          lVar30 = (longlong)((int)param_4[99] - (int)cVar13) * 8 + param_4[0x22];
          cVar3 = (&DAT_14aa842b9)[(ulonglong)bVar22 * 0x10];
          if (cVar3 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                *(uint *)(lVar30 + lVar32 * 8) = *(uint *)(lVar30 + lVar32 * 8) & 0x7fffffff;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar3 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                *(ulonglong *)(lVar30 + lVar32 * 8) =
                     *(ulonglong *)(lVar30 + lVar32 * 8) & 0x7fffffffffffffff;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            switch(cVar13) {
            case '\x01':
              bVar22 = 9;
              break;
            case '\x02':
              bVar22 = 10;
              break;
            case '\x03':
              bVar22 = 0xb;
              break;
            case '\x04':
              bVar22 = 0xc;
              break;
            default:
              if (cVar13 == '\x10') {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              uVar27 = 0;
              switch(cVar3) {
              case '\x01':
                uVar27 = (uint)*(float *)(lVar30 + lVar32 * 8);
                break;
              case '\x02':
                uVar27 = (uint)*(double *)(lVar30 + lVar32 * 8);
                break;
              case '\x03':
                uVar27 = *(uint *)(lVar30 + lVar32 * 8);
                break;
              case '\x04':
                uVar27 = (uint)(*(char *)(lVar30 + lVar32 * 8) != '\0');
              }
              uVar15 = -uVar27;
              if ((int)-uVar27 < 0) {
                uVar15 = uVar27;
              }
              *(uint *)(lVar30 + lVar32 * 8) = uVar15;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
          goto LAB_14013a18e;
        }
        break;
      case 0x1c:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          lVar31 = (longlong)(int)(char)bVar22;
          lVar30 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                auVar54 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                auVar54 = roundps(auVar54,auVar54,1);
                *(int *)(lVar30 + lVar32 * 8) = auVar54._0_4_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar13 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                auVar55._8_8_ = 0;
                auVar55._0_8_ = *(ulonglong *)(lVar30 + lVar32 * 8);
                auVar54 = roundpd(auVar55,auVar55,1);
                *(longlong *)(lVar30 + lVar32 * 8) = auVar54._0_8_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              switch(cVar13) {
              case '\x01':
                auVar54 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                break;
              case '\x02':
                auVar54 = ZEXT416((uint)(float)*(double *)(lVar30 + lVar32 * 8));
                break;
              case '\x03':
                auVar54 = ZEXT416((uint)(float)*(int *)(lVar30 + lVar32 * 8));
                break;
              case '\x04':
                auVar54 = ZEXT416((uint)(float)*(byte *)(lVar30 + lVar32 * 8));
                break;
              default:
                auVar54 = ZEXT816(0);
              }
              in_XMM1 = ZEXT416(auVar54._0_4_);
              auVar54 = roundps(auVar54,in_XMM1,1);
              *(int *)(lVar30 + lVar32 * 8) = auVar54._0_4_;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
          goto LAB_14013a18e;
        }
        break;
      case 0x1d:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          lVar31 = (longlong)(int)(char)bVar22;
          lVar30 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                auVar54 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                auVar54 = roundps(auVar54,auVar54,2);
                *(int *)(lVar30 + lVar32 * 8) = auVar54._0_4_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar13 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                auVar56._8_8_ = 0;
                auVar56._0_8_ = *(ulonglong *)(lVar30 + lVar32 * 8);
                auVar54 = roundpd(auVar56,auVar56,2);
                *(longlong *)(lVar30 + lVar32 * 8) = auVar54._0_8_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              switch(cVar13) {
              case '\x01':
                auVar54 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                break;
              case '\x02':
                auVar54 = ZEXT416((uint)(float)*(double *)(lVar30 + lVar32 * 8));
                break;
              case '\x03':
                auVar54 = ZEXT416((uint)(float)*(int *)(lVar30 + lVar32 * 8));
                break;
              case '\x04':
                auVar54 = ZEXT416((uint)(float)*(byte *)(lVar30 + lVar32 * 8));
                break;
              default:
                auVar54 = ZEXT816(0);
              }
              in_XMM1 = ZEXT416(auVar54._0_4_);
              auVar54 = roundps(auVar54,in_XMM1,2);
              *(int *)(lVar30 + lVar32 * 8) = auVar54._0_4_;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
          goto LAB_14013a18e;
        }
        break;
      case 0x1e:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          lVar31 = (longlong)(int)(char)bVar22;
          lVar30 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                fVar62 = *(float *)(lVar30 + lVar32 * 8) + 0.5;
                in_XMM1 = ZEXT416((uint)fVar62);
                auVar54 = roundps(ZEXT416((uint)fVar62),in_XMM1,1);
                *(int *)(lVar30 + lVar32 * 8) = auVar54._0_4_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar13 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                auVar61._0_8_ = *(double *)(lVar30 + lVar32 * 8) + 0.5;
                auVar61._8_8_ = 0;
                auVar54 = roundpd(auVar61,auVar61,1);
                *(longlong *)(lVar30 + lVar32 * 8) = auVar54._0_8_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              switch(cVar13) {
              case '\x01':
                auVar54 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                break;
              case '\x02':
                auVar54 = ZEXT416((uint)(float)*(double *)(lVar30 + lVar32 * 8));
                break;
              case '\x03':
                auVar54 = ZEXT416((uint)(float)*(int *)(lVar30 + lVar32 * 8));
                break;
              case '\x04':
                auVar54 = ZEXT416((uint)(float)*(byte *)(lVar30 + lVar32 * 8));
                break;
              default:
                auVar54 = ZEXT816(0);
              }
              auVar57._4_12_ = auVar54._4_12_;
              auVar57._0_4_ = auVar54._0_4_ + 0.5;
              in_XMM1 = ZEXT416((uint)auVar57._0_4_);
              auVar54 = roundps(auVar57,in_XMM1,1);
              *(int *)(lVar30 + lVar32 * 8) = auVar54._0_4_;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
          goto LAB_14013a18e;
        }
        break;
      case 0x1f:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d0fa05();
          goto LAB_1401399e6;
        }
        break;
      case 0x20:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar26 = (ulonglong)bVar22;
          cVar13 = (&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
          lVar31 = (longlong)(int)cVar13;
          lVar30 = (longlong)((int)param_4[99] - (int)cVar13) * 8 + param_4[0x22];
          cVar3 = (&DAT_14aa842b9)[(ulonglong)bVar22 * 0x10];
          if (cVar3 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                fVar62 = *(float *)(lVar30 + lVar32 * 8);
                uVar27 = -(uint)(0.0 < fVar62);
                uVar15 = ~uVar27 & -(uint)(fVar62 < 0.0) & 0xbf800000;
                in_XMM1 = ZEXT416(uVar15);
                *(uint *)(lVar30 + lVar32 * 8) = uVar27 & 0x3f800000 | uVar15;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar3 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                dVar52 = *(double *)(lVar30 + lVar32 * 8);
                uVar26 = -(ulonglong)(0.0 < dVar52);
                in_XMM1._0_8_ = (double)(~uVar26 & -(ulonglong)(dVar52 < 0.0) & 0xbff0000000000000);
                in_XMM1._8_8_ = 0;
                *(ulonglong *)(lVar30 + lVar32 * 8) =
                     uVar26 & 0x3ff0000000000000 | (ulonglong)in_XMM1._0_8_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            switch(cVar13) {
            case '\x01':
              bVar22 = 9;
              break;
            case '\x02':
              bVar22 = 10;
              break;
            case '\x03':
              bVar22 = 0xb;
              break;
            case '\x04':
              bVar22 = 0xc;
              break;
            default:
              if (cVar13 == '\x10') {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              iVar23 = 0;
              switch(cVar3) {
              case '\x01':
                uVar27 = (uint)*(float *)(lVar30 + lVar32 * 8);
                break;
              case '\x02':
                uVar27 = (uint)*(double *)(lVar30 + lVar32 * 8);
                break;
              case '\x03':
                uVar27 = *(uint *)(lVar30 + lVar32 * 8);
                break;
              case '\x04':
                uVar27 = (uint)(*(char *)(lVar30 + lVar32 * 8) != '\0');
                break;
              default:
                goto switchD_14013d525_default;
              }
              iVar23 = 1;
              if ((int)uVar27 < 1) {
                iVar23 = -(uint)(uVar27 != 0);
              }
switchD_14013d525_default:
              *(int *)(lVar30 + lVar32 * 8) = iVar23;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
          goto LAB_14013a18e;
        }
        break;
      case 0x21:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar14 = *(byte *)(*param_4 + 0x18 + lVar31);
          uVar27 = 0x1c;
          if (bVar14 < 0x1c) {
            uVar27 = (uint)bVar14;
          }
          uVar26 = (ulonglong)uVar27;
          bVar22 = (&DAT_14aa842ba)[uVar27 << 4];
          lVar31 = (longlong)(int)(char)bVar22;
          lVar30 = (longlong)((int)param_4[99] - (int)(char)bVar22) * 8 + param_4[0x22];
          cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
          if (cVar13 == '\x01') {
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                fVar62 = *(float *)(lVar30 + lVar32 * 8);
                in_XMM1 = roundss(ZEXT816(0),ZEXT416((uint)fVar62),9);
                *(float *)(lVar30 + lVar32 * 8) = fVar62 - in_XMM1._0_4_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else if (cVar13 == '\x02') {
            param_4 = local_590;
            if (uVar26 - 1 < 0x18) {
              lVar32 = 0;
              do {
                dVar52 = *(double *)(lVar30 + lVar32 * 8);
                auVar60._8_8_ = 0;
                auVar60._0_8_ = dVar52;
                in_XMM1 = roundsd(ZEXT816(0),auVar60,9);
                *(double *)(lVar30 + lVar32 * 8) = dVar52 - in_XMM1._0_8_;
                lVar32 = lVar32 + 1;
              } while (lVar31 != lVar32);
            }
          }
          else {
            if (3 < bVar22 - 1) {
              if (bVar22 == 0x10) {
                bVar22 = 0x15;
              }
              else {
                bVar14 = 0;
                param_4 = local_590;
                bVar22 = 0;
                if (0x17 < uVar26 - 1) goto LAB_14013a18e;
              }
            }
            bVar14 = bVar22;
            lVar32 = 0;
            do {
              switch(cVar13) {
              case '\x01':
                auVar54 = ZEXT416(*(uint *)(lVar30 + lVar32 * 8));
                break;
              case '\x02':
                auVar54 = ZEXT416((uint)(float)*(double *)(lVar30 + lVar32 * 8));
                break;
              case '\x03':
                auVar54 = ZEXT416((uint)(float)*(int *)(lVar30 + lVar32 * 8));
                break;
              case '\x04':
                auVar54 = ZEXT416((uint)(float)*(byte *)(lVar30 + lVar32 * 8));
                break;
              default:
                auVar54 = ZEXT816(0);
              }
              in_XMM1 = roundss(ZEXT816(0),auVar54,9);
              *(float *)(lVar30 + lVar32 * 8) = auVar54._0_4_ - in_XMM1._0_4_;
              lVar32 = lVar32 + 1;
              param_4 = local_590;
            } while (lVar31 != lVar32);
          }
          goto LAB_14013a18e;
        }
        break;
      case 0x22:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d0fb35();
          goto LAB_1401399e6;
        }
        break;
      case 0x23:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d101c4();
          goto LAB_1401399e6;
        }
        break;
      case 0x24:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d10344();
          goto LAB_1401399e6;
        }
        break;
      case 0x25:
        lVar31 = *param_4;
        lVar30 = (longlong)((int)param_4[0x21] + -1);
        lVar32 = lVar30 * 0x20;
        uVar27 = *(uint *)(lVar31 + 0x18 + lVar32);
        uVar15 = 0x1c;
        if ((byte)uVar27 < 0x1c) {
          uVar15 = uVar27;
        }
        bVar14 = puVar21[1];
        uVar16 = (uint)bVar14;
        bVar22 = puVar21[2];
        bVar33 = puVar21[3];
        bVar1 = puVar21[4];
        *param_5 = (longlong)(puVar21 + 6);
        bVar2 = puVar21[5];
        unaff_R12 = (longlong *)0x0;
        uVar27 = (uint)bVar2;
        if (bVar2 != 0xff) {
          uVar27 = 0;
        }
        if ((0x22222U >> (uVar15 & 0x1f) & 1) == 0) {
          uVar27 = (uint)bVar2;
        }
        local_57c = (uint)bVar1;
        if (bVar1 != 0xff) {
          local_57c = 0;
        }
        if ((0x22222U >> (uVar15 & 0x1f) & 1) == 0) {
          local_57c = (uint)bVar1;
        }
        plVar18 = (longlong *)(ulonglong)(uint)bVar33;
        if (bVar33 != 0xff) {
          plVar18 = unaff_R12;
        }
        if ((0x22222U >> (uVar15 & 0x1f) & 1) == 0) {
          unaff_R12 = (longlong *)(ulonglong)(uint)bVar22;
          plVar18 = (longlong *)(ulonglong)bVar33;
        }
        iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar15 & 0xff) << 4];
        if (bVar22 == 0xff) {
          unaff_R12 = (longlong *)(ulonglong)bVar22;
        }
        uVar15 = uVar16 - iVar23;
        local_598 = (float *)CONCAT44(local_598._4_4_,iVar23);
        lVar44 = lVar31;
        if (uVar15 == 0 || (int)uVar16 < iVar23) {
          if ((int)uVar15 < 0) {
            *(uint *)(local_590 + 99) = (int)local_590[99] + uVar15;
          }
        }
        else {
          lVar10 = param_4[99];
          *(uint *)(param_4 + 99) = (int)lVar10 + uVar15;
          if ((uint)(*(int *)((longlong)param_4 + 0x31c) - (int)lVar10) < uVar15) {
            FUN_147d12c5e(local_588);
            lVar30 = (longlong)((int)local_590[0x21] + -1);
            lVar44 = *local_590;
          }
        }
        uVar15 = *(uint *)(lVar31 + lVar32 + 0x18);
        uVar26 = 0x1c;
        if ((byte)uVar15 < 0x1c) {
          uVar26 = (ulonglong)uVar15;
        }
        uVar12 = FUN_14484659f(CONCAT71((int7)(uVar26 >> 8),
                                        (&DAT_14aa842b9)[((uint)uVar26 & 0xff) << 4]),bVar14);
        *(undefined1 *)(lVar44 + 0x18 + lVar30 * 0x20) = uVar12;
        if (uVar16 - 1 < 4) {
          puVar19 = (undefined8 *)
                    (((longlong)(int)local_590[99] - (ulonglong)uVar16) * 8 + local_590[0x22]);
          iVar23 = (int)unaff_R12;
          iVar24 = (int)plVar18;
          param_4 = local_590;
          switch(uVar16) {
          case 1:
            if (iVar23 < (int)local_598) {
              uVar51 = puVar19[(longlong)unaff_R12];
            }
            else {
              uVar51 = 0;
            }
            *puVar19 = uVar51;
            break;
          case 2:
            if (iVar23 < (int)local_598) {
              uVar51 = puVar19[(longlong)unaff_R12];
            }
            else {
              uVar51 = 0;
            }
            if (iVar24 < (int)local_598) {
              uVar28 = puVar19[(longlong)plVar18];
            }
            else {
              uVar28 = 0;
            }
            *puVar19 = uVar51;
            puVar19[1] = uVar28;
            break;
          case 3:
            if (iVar23 < (int)local_598) {
              uVar51 = puVar19[(longlong)unaff_R12];
            }
            else {
              uVar51 = 0;
            }
            if (iVar24 < (int)local_598) {
              uVar28 = puVar19[(longlong)plVar18];
            }
            else {
              uVar28 = 0;
            }
            if ((int)local_57c < (int)local_598) {
              uVar35 = puVar19[local_57c];
            }
            else {
              uVar35 = 0;
            }
            *puVar19 = uVar51;
            puVar19[1] = uVar28;
            puVar19[2] = uVar35;
            break;
          case 4:
            if (iVar23 < (int)local_598) {
              uVar51 = puVar19[(longlong)unaff_R12];
            }
            else {
              uVar51 = 0;
            }
            if (iVar24 < (int)local_598) {
              uVar28 = puVar19[(longlong)plVar18];
            }
            else {
              uVar28 = 0;
            }
            if ((int)local_57c < (int)local_598) {
              uVar35 = puVar19[local_57c];
            }
            else {
              uVar35 = 0;
            }
            if ((int)uVar27 < (int)local_598) {
              uVar43 = puVar19[uVar27];
            }
            else {
              uVar43 = 0;
            }
            *puVar19 = uVar51;
            puVar19[1] = uVar28;
            puVar19[2] = uVar35;
            puVar19[3] = uVar43;
          }
        }
        else {
          FUN_140033559(".\\Runtime/Engine/Private/Shader/Preshader.cpp",0x41d,
                        L"Invalid number of swizzle elements: %d",uVar16);
          param_4 = local_590;
        }
        break;
      case 0x26:
        lVar30 = *param_4;
        lVar32 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        lVar31 = lVar30 + lVar32;
        lVar32 = *(longlong *)(lVar30 + lVar32);
        if (lVar32 == 0) {
          uVar27 = 0x1c;
          if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
            uVar27 = *(uint *)(lVar31 + 0x18);
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar27 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10);
        }
        lVar44 = (longlong)((int)param_4[0x21] + -2) * 0x20;
        bVar14 = *(byte *)(lVar30 + 0x18 + lVar44);
        uVar27 = (uint)bVar14;
        if (*(longlong *)(lVar30 + lVar44) == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        else {
          iVar24 = *(int *)(lVar30 + 0x10 + lVar44);
        }
        if (lVar32 != 0 || *(longlong *)(lVar30 + lVar44) != 0) goto LAB_14013a259;
        if (0x1b < bVar14) {
          uVar27 = 0x1c;
        }
        uVar15 = 0x1c;
        if ((byte)*(uint *)(lVar31 + 0x18) < 0x1c) {
          uVar15 = *(uint *)(lVar31 + 0x18);
        }
        uVar16 = (uVar15 & 0xff) << 4;
        bVar14 = (&DAT_14aa842ba)[uVar27 << 4];
        uVar17 = (uint)(char)bVar14;
        uVar15 = (int)(char)(&DAT_14aa842ba)[uVar16] + uVar17;
        uVar26 = 4;
        if ((int)uVar15 < 4) {
          uVar26 = (ulonglong)uVar15;
        }
        cVar13 = (&DAT_14aa842b9)[uVar27 << 4];
        cVar3 = (&DAT_14aa842b9)[uVar16];
        uVar27 = (uint)uVar26;
        if (cVar13 != cVar3) {
          lVar31 = (longlong)((int)param_4[99] - (iVar24 + iVar23)) * 8 + param_4[0x22];
          lVar30 = (longlong)(int)uVar17;
          if ((cVar13 == '\x02') || (cVar3 == '\x02')) {
            if (cVar13 == '\x02') {
              if ((int)uVar17 < (int)uVar27) {
                lVar30 = (longlong)(int)uVar17;
                do {
                  switch(cVar3) {
                  case '\x01':
                    dVar52 = (double)*(float *)(lVar31 + lVar30 * 8);
                    break;
                  case '\x02':
                    dVar52 = *(double *)(lVar31 + lVar30 * 8);
                    break;
                  case '\x03':
                    dVar52 = (double)*(int *)(lVar31 + lVar30 * 8);
                    break;
                  case '\x04':
                    dVar52 = (double)*(byte *)(lVar31 + lVar30 * 8);
                    break;
                  default:
                    dVar52 = 0.0;
                  }
                  *(double *)(lVar31 + lVar30 * 8) = dVar52;
                  lVar30 = lVar30 + 1;
                } while ((int)uVar27 != lVar30);
              }
            }
            else if ('\0' < (char)bVar14) {
              uVar16 = 4;
              if (bVar14 < 4) {
                uVar16 = uVar17;
              }
              uVar38 = 0;
              do {
                if (cVar13 == '\x04') {
                  dVar52 = (double)*(byte *)(lVar31 + uVar38 * 8);
                }
                else if (cVar13 == '\x03') {
                  dVar52 = (double)*(int *)(lVar31 + uVar38 * 8);
                }
                else {
                  dVar52 = 0.0;
                  if (cVar13 == '\x01') {
                    dVar52 = (double)*(float *)(lVar31 + uVar38 * 8);
                  }
                }
                *(double *)(lVar31 + uVar38 * 8) = dVar52;
                uVar38 = uVar38 + 1;
              } while ((uVar16 & 0xff) != uVar38);
            }
            if (4 < uVar27) goto LAB_14013e1fd;
            uVar38 = 0x807060500;
          }
          else {
            if ((cVar13 == '\x01') || (cVar3 == '\x01')) {
              if (cVar13 == '\x01') {
                if ((int)uVar17 < (int)uVar27) {
                  do {
                    if (cVar3 == '\x04') {
                      fVar62 = (float)*(byte *)(lVar31 + lVar30 * 8);
                    }
                    else if (cVar3 == '\x03') {
                      fVar62 = (float)*(int *)(lVar31 + lVar30 * 8);
                    }
                    else {
                      fVar62 = 0.0;
                      if (cVar3 == '\x01') {
                        fVar62 = *(float *)(lVar31 + lVar30 * 8);
                      }
                    }
                    *(float *)(lVar31 + lVar30 * 8) = fVar62;
                    lVar30 = lVar30 + 1;
                  } while ((int)uVar27 != lVar30);
                }
              }
              else if ('\0' < (char)bVar14) {
                uVar16 = 4;
                if (bVar14 < 4) {
                  uVar16 = uVar17;
                }
                uVar38 = 0;
                do {
                  if (cVar13 == '\x04') {
                    fVar62 = (float)*(byte *)(lVar31 + uVar38 * 8);
                  }
                  else {
                    fVar62 = 0.0;
                    if (cVar13 == '\x03') {
                      fVar62 = (float)*(int *)(lVar31 + uVar38 * 8);
                    }
                  }
                  *(float *)(lVar31 + uVar38 * 8) = fVar62;
                  uVar38 = uVar38 + 1;
                } while ((uVar16 & 0xff) != uVar38);
              }
              uVar38 = 0;
              param_4 = local_590;
              if (uVar27 < 5) {
                uVar38 = uVar26;
              }
              goto switchD_14013bd4d_default;
            }
            if ('\0' < (char)bVar14) {
              bVar22 = 4;
              if (bVar14 < 4) {
                bVar22 = bVar14;
              }
              uVar38 = 0;
              do {
                if (cVar13 == '\x04') {
                  uVar16 = (uint)(*(char *)(lVar31 + uVar38 * 8) != '\0');
                }
                else {
                  uVar16 = 0;
                  if (cVar13 == '\x03') {
                    uVar16 = *(uint *)(lVar31 + uVar38 * 8);
                  }
                }
                *(uint *)(lVar31 + uVar38 * 8) = uVar16;
                uVar38 = uVar38 + 1;
              } while (bVar22 != uVar38);
            }
            if ((int)uVar17 < (int)uVar27) {
              do {
                uVar16 = 0;
                if (cVar3 == '\x04') {
                  uVar16 = (uint)(*(char *)(lVar31 + lVar30 * 8) != '\0');
                }
                else if (cVar3 == '\x03') {
                  uVar16 = *(uint *)(lVar31 + lVar30 * 8);
                }
                *(uint *)(lVar31 + lVar30 * 8) = uVar16;
                lVar30 = lVar30 + 1;
              } while ((int)uVar27 != lVar30);
            }
switchD_14013bd4d_caseD_3:
            if (4 < uVar27) goto LAB_14013e1fd;
            uVar38 = 0xc0b0a0900;
          }
          goto LAB_14013d0c8;
        }
        uVar38 = 0;
        if ((cVar13 != '\0') && (uVar15 != 0)) {
          if (cVar13 == '\x01') {
            uVar38 = 0;
            if (uVar27 < 5) {
              uVar38 = uVar26;
            }
          }
          else {
            uVar38 = 0;
            switch(cVar13) {
            case '\x02':
              if (uVar27 < 5) {
                uVar38 = 0x807060500 >> ((char)uVar26 * '\b' & 0x3fU);
              }
              else {
                uVar38 = 0;
              }
              break;
            case '\x03':
              goto switchD_14013bd4d_caseD_3;
            case '\x04':
              if (uVar27 < 5) {
                uVar38 = 0x100f0e0d00;
                goto LAB_14013d0c8;
              }
LAB_14013e1fd:
              uVar38 = 0;
              param_4 = local_590;
              break;
            case '\x05':
              if (4 < uVar27) goto LAB_14013e1fd;
              uVar38 = 0x1413121100;
LAB_14013d0c8:
              uVar38 = uVar38 >> ((char)uVar26 * '\b' & 0x3fU);
              param_4 = local_590;
            }
          }
        }
switchD_14013bd4d_default:
        lVar31 = param_4[0x21];
        *(int *)(param_4 + 0x21) = (int)lVar31 + -1;
        if (4 < (int)uVar15) {
          *(uint *)(param_4 + 99) = (int)param_4[99] + (uVar27 - uVar15);
        }
        *(char *)(*param_4 + 0x18 + (longlong)((int)lVar31 + -2) * 0x20) = (char)uVar38;
        break;
      case 0x27:
        local_538 = (undefined8 *)0x0;
        local_118 = (longlong *)0x0;
        FUN_1436b01af(local_578);
        puVar19 = local_538;
        if ((local_538 == (undefined8 *)0x0) || (lVar31 = FUN_1448463c0(local_538), lVar31 == 0)) {
          if (local_118 == (longlong *)0x0) {
LAB_14013a6ee:
            lVar31 = param_4[0x21];
            uVar27 = (int)lVar31 + 1;
            *(uint *)(param_4 + 0x21) = uVar27;
            if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
              FUN_147d13022(param_4);
            }
            lVar30 = *param_4;
            lVar31 = (longlong)(int)lVar31 * 0x20;
            *(undefined8 *)(lVar30 + lVar31) = 0;
            ((undefined8 *)(lVar30 + lVar31))[1] = 0;
            *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
            *(undefined1 *)(lVar30 + 0x18 + lVar31) = 3;
            iVar23 = (int)param_4[99];
            *(int *)(param_4 + 99) = iVar23 + 3;
            if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < 3) {
              FUN_147d12c5e(local_588);
            }
            lVar31 = *local_588;
            puVar19 = (undefined8 *)(lVar31 + (longlong)iVar23 * 8);
            *puVar19 = 0;
            puVar19[1] = 0;
            *(undefined8 *)(lVar31 + 0x10 + (longlong)iVar23 * 8) = 0;
            break;
          }
          uVar16 = (**(code **)(*local_118 + 0x2a0))();
          uVar15 = (**(code **)(*local_118 + 0x2a8))();
          uVar27 = (**(code **)(*local_118 + 0x2b0))();
        }
        else {
          plVar18 = (longlong *)FUN_1448463c0(puVar19);
          uVar16 = (**(code **)(*plVar18 + 0x30))(plVar18);
          plVar18 = (longlong *)FUN_1448463c0(puVar19);
          uVar15 = (**(code **)(*plVar18 + 0x38))(plVar18);
          plVar18 = (longlong *)FUN_1448463c0(puVar19);
          uVar27 = (**(code **)(*plVar18 + 0x40))();
        }
        lVar31 = param_4[0x21];
        uVar17 = (int)lVar31 + 1;
        *(uint *)(param_4 + 0x21) = uVar17;
        if (*(uint *)((longlong)param_4 + 0x10c) < uVar17) {
          FUN_147d13022();
        }
        auVar59 = in_XMM1._4_12_;
        lVar30 = *param_4;
        lVar31 = (longlong)(int)lVar31 * 0x20;
        *(undefined8 *)(lVar30 + lVar31) = 0;
        ((undefined8 *)(lVar30 + lVar31))[1] = 0;
        *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
        *(undefined1 *)(lVar30 + 0x18 + lVar31) = 3;
        iVar23 = (int)param_4[99];
        lVar31 = (longlong)iVar23;
        *(int *)(param_4 + 99) = iVar23 + 3;
        if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < 3) {
          FUN_147d12c5e();
          auVar59 = in_XMM1._4_12_;
        }
        in_XMM1._0_4_ = (float)uVar15;
        in_XMM1._4_12_ = auVar59;
        lVar30 = *local_588;
        *(float *)(lVar30 + lVar31 * 8) = (float)uVar16;
        *(undefined4 *)(lVar30 + 4 + lVar31 * 8) = 0;
        *(float *)(lVar30 + 8 + lVar31 * 8) = in_XMM1._0_4_;
        *(undefined4 *)(lVar30 + 0xc + lVar31 * 8) = 0;
        *(float *)(lVar30 + 0x10 + lVar31 * 8) = (float)uVar27;
        goto LAB_14013a514;
      case 0x28:
        local_538 = (undefined8 *)0x0;
        local_118 = (longlong *)0x0;
        FUN_1436b01af(local_578);
        puVar19 = local_538;
        if ((local_538 == (undefined8 *)0x0) || (lVar31 = FUN_1448463c0(local_538), lVar31 == 0)) {
          if (local_118 == (longlong *)0x0) goto LAB_14013a6ee;
          uVar27 = (**(code **)(*local_118 + 0x2a0))();
          uVar15 = (**(code **)(*local_118 + 0x2a8))();
          uVar16 = (**(code **)(*local_118 + 0x2b0))();
          lVar31 = param_4[0x21];
          uVar17 = (int)lVar31 + 1;
          *(uint *)(param_4 + 0x21) = uVar17;
          if (*(uint *)((longlong)param_4 + 0x10c) < uVar17) {
            FUN_147d13022();
          }
          lVar30 = *param_4;
          lVar31 = (longlong)(int)lVar31 * 0x20;
          *(undefined8 *)(lVar30 + lVar31) = 0;
          ((undefined8 *)(lVar30 + lVar31))[1] = 0;
          *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
          *(undefined1 *)(lVar30 + 0x18 + lVar31) = 3;
          iVar23 = (int)param_4[99];
          lVar31 = (longlong)iVar23;
          *(int *)(param_4 + 99) = iVar23 + 3;
          if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < 3) {
            FUN_147d12c5e();
          }
          in_XMM1 = ZEXT416((uint)(1.0 / (float)uVar27));
          lVar30 = *local_588;
          *(float *)(lVar30 + lVar31 * 8) = 1.0 / (float)uVar27;
          *(undefined4 *)(lVar30 + 4 + lVar31 * 8) = 0;
          *(float *)(lVar30 + 8 + lVar31 * 8) = 1.0 / (float)uVar15;
          *(undefined4 *)(lVar30 + 0xc + lVar31 * 8) = 0;
          *(float *)(lVar30 + 0x10 + lVar31 * 8) = 1.0 / (float)uVar16;
        }
        else {
          plVar18 = (longlong *)FUN_1448463c0(puVar19);
          uVar27 = (**(code **)(*plVar18 + 0x30))(plVar18);
          plVar18 = (longlong *)FUN_1448463c0(puVar19);
          uVar15 = (**(code **)(*plVar18 + 0x38))(plVar18);
          plVar18 = (longlong *)FUN_1448463c0(puVar19);
          uVar16 = (**(code **)(*plVar18 + 0x40))();
          fVar62 = 0.0;
          if (uVar16 != 0) {
            fVar62 = 1.0 / (float)uVar16;
          }
          lVar31 = param_4[0x21];
          uVar16 = (int)lVar31 + 1;
          *(uint *)(param_4 + 0x21) = uVar16;
          if (*(uint *)((longlong)param_4 + 0x10c) < uVar16) {
            FUN_147d13022();
          }
          lVar30 = *param_4;
          lVar31 = (longlong)(int)lVar31 * 0x20;
          *(undefined8 *)(lVar30 + lVar31) = 0;
          ((undefined8 *)(lVar30 + lVar31))[1] = 0;
          *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
          *(undefined1 *)(lVar30 + 0x18 + lVar31) = 3;
          iVar23 = (int)param_4[99];
          lVar31 = (longlong)iVar23;
          *(int *)(param_4 + 99) = iVar23 + 3;
          if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < 3) {
            FUN_147d12c5e();
          }
          in_XMM1 = ZEXT416((uint)(1.0 / (float)uVar15));
          lVar30 = *local_588;
          *(float *)(lVar30 + lVar31 * 8) = 1.0 / (float)uVar27;
          *(undefined4 *)(lVar30 + 4 + lVar31 * 8) = 0;
          *(float *)(lVar30 + 8 + lVar31 * 8) = 1.0 / (float)uVar15;
          *(undefined4 *)(lVar30 + 0xc + lVar31 * 8) = 0;
          *(float *)(lVar30 + 0x10 + lVar31 * 8) = fVar62;
        }
LAB_14013a514:
        *(undefined4 *)(lVar30 + 0x14 + lVar31 * 8) = 0;
        break;
      case 0x29:
        uVar50 = *(undefined4 *)(param_5[2] + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        uVar48 = *(undefined4 *)(param_5[2] + 8 + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        local_538 = *(undefined8 **)(puVar21 + 3);
        uStack_530 = *(undefined8 *)(puVar21 + 0xb);
        uVar34 = *(undefined4 *)(puVar21 + 0x13);
        *param_5 = (longlong)(puVar21 + 0x17);
        local_1c8 = (float *)CONCAT44(uVar48,uVar50);
        local_5a8 = (longlong *)CONCAT44(local_5a8._4_4_,uVar34);
        FUN_147bc7c16();
        local_538 = (undefined8 *)0x3f800000;
        uStack_530 = 0x3f80000000000000;
        if (((local_118._4_4_ == 0 && (int)local_118 == 0) && (int)uStack_110 == 0) &&
            uStack_110._4_4_ == 0) {
          uVar50 = 0;
          uVar34 = 0x3f800000;
          uVar48 = 0;
          fVar62 = 1.0;
        }
        else {
          FUN_14026fbac();
          FUN_147a9605c();
LAB_14013bd1f:
          fVar62 = (float)local_538;
          uVar50 = (int)uStack_530;
          uVar48 = local_538._4_4_;
          uVar34 = uStack_530._4_4_;
        }
        goto LAB_14013bac3;
      case 0x2a:
        uVar50 = *(undefined4 *)(param_5[2] + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        uVar48 = *(undefined4 *)(param_5[2] + 8 + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        local_538 = *(undefined8 **)(puVar21 + 3);
        uStack_530 = *(undefined8 *)(puVar21 + 0xb);
        uVar34 = *(undefined4 *)(puVar21 + 0x13);
        *param_5 = (longlong)(puVar21 + 0x17);
        local_1c8 = (float *)CONCAT44(uVar48,uVar50);
        local_5a8 = (longlong *)CONCAT44(local_5a8._4_4_,uVar34);
        FUN_147bc7c16();
        local_538 = (undefined8 *)0x0;
        uStack_530 = 0;
        fVar62 = 0.0;
        uVar50 = 0;
        uVar48 = 0;
        uVar34 = 0;
        if (((local_118._4_4_ != 0 || (int)local_118 != 0) || (int)uStack_110 != 0) ||
            uStack_110._4_4_ != 0) {
          FUN_14026fbac();
          FUN_147a960e0();
          goto LAB_14013bd1f;
        }
LAB_14013bac3:
        plVar18 = local_590;
        lVar31 = local_590[0x21];
        uVar27 = (int)lVar31 + 1;
        *(uint *)(local_590 + 0x21) = uVar27;
        if (*(uint *)((longlong)local_590 + 0x10c) < uVar27) {
          FUN_147d13022();
        }
        lVar30 = *plVar18;
        lVar31 = (longlong)(int)lVar31 * 0x20;
        *(undefined1 (*) [16])(lVar30 + lVar31) = ZEXT816(0);
        *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
        *(undefined1 *)(lVar30 + 0x18 + lVar31) = 4;
        iVar23 = (int)plVar18[99];
        lVar31 = (longlong)iVar23;
        *(int *)(plVar18 + 99) = iVar23 + 4;
        if ((uint)(*(int *)((longlong)plVar18 + 0x31c) - iVar23) < 4) {
          FUN_147d12c5e();
        }
        lVar30 = *local_588;
        *(float *)(lVar30 + lVar31 * 8) = fVar62;
        *(undefined4 *)(lVar30 + 4 + lVar31 * 8) = 0;
        *(undefined4 *)(lVar30 + 8 + lVar31 * 8) = uVar48;
        *(undefined4 *)(lVar30 + 0xc + lVar31 * 8) = 0;
        *(undefined4 *)(lVar30 + 0x10 + lVar31 * 8) = uVar50;
        *(undefined4 *)(lVar30 + 0x14 + lVar31 * 8) = 0;
        *(undefined4 *)(lVar30 + 0x18 + lVar31 * 8) = uVar34;
        *(undefined4 *)(lVar30 + 0x1c + lVar31 * 8) = 0;
        param_4 = local_590;
        break;
      case 0x2b:
        local_118 = *(longlong **)(param_5[2] + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        iVar23 = *(int *)(param_5[2] + 8 + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        uStack_110 = CONCAT44(*(undefined4 *)(puVar21 + 3),iVar23);
        local_108[0] = puVar21[7];
        uVar27 = *(uint *)(puVar21 + 8);
        uVar15 = *(uint *)(puVar21 + 0xc);
        uVar26 = (ulonglong)uVar15;
        *param_5 = (longlong)(puVar21 + 0x10);
        if ((iVar23 == 0 && (int)local_118 == 0) || ((longlong *)*local_578 == (longlong *)0x0)) {
LAB_140138479:
          (**(code **)(*(longlong *)local_578[1] + 0x4d8))();
          if ((((int)uVar27 < 0) || ((int)uStack_530 <= (int)uVar27)) ||
             (puVar19 = (undefined8 *)local_538[uVar27], puVar19 == (undefined8 *)0x0)) {
            if (DAT_14cb05d00 == '\0') {
              DAT_14cb05d00 = '\x01';
            }
          }
          else {
            lVar31 = FUN_141108188();
            if ((*(int *)(lVar31 + 0x38) <= *(int *)(puVar19[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(puVar19[2] + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8) ==
                lVar31 + 0x30)) goto LAB_14013a300;
          }
          puVar19 = (undefined8 *)0x0;
        }
        else {
          local_518 = 0xff;
          local_5a8 = local_578;
          cVar13 = (**(code **)(*(longlong *)*local_578 + 0x48))();
          puVar19 = local_538;
          if (cVar13 == '\0') goto LAB_140138479;
        }
LAB_14013a300:
        plVar18 = local_590;
        if ((uVar15 == 0xffffffff) || (puVar19 == (undefined8 *)0x0)) {
          lVar31 = param_4[0x21];
          uVar27 = (int)lVar31 + 1;
          *(uint *)(param_4 + 0x21) = uVar27;
          if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
            FUN_147d13022(param_4);
          }
          lVar30 = *param_4;
          lVar31 = (longlong)(int)lVar31 * 0x20;
          *(undefined8 *)(lVar30 + lVar31) = 0;
          ((undefined8 *)(lVar30 + lVar31))[1] = 0;
          *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
          *(undefined1 *)(lVar30 + 0x18 + lVar31) = 4;
          iVar23 = (int)param_4[99];
          *(int *)(param_4 + 99) = iVar23 + 4;
          if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < 4) {
            FUN_147d12c5e(local_588);
          }
          lVar31 = *local_588;
          puVar19 = (undefined8 *)(lVar31 + 0x10 + (longlong)iVar23 * 8);
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19 = (undefined8 *)(lVar31 + (longlong)iVar23 * 8);
          *puVar19 = 0;
          puVar19[1] = 0;
        }
        else {
          if (uVar15 < 4) {
            uVar51 = puVar19[uVar26 * 4 + 0xc];
            uVar28 = puVar19[uVar26 * 4 + 0xf];
            unaff_R12 = (longlong *)puVar19[uVar26 * 4 + 0xd];
            uVar35 = puVar19[uVar26 * 4 + 0xe];
          }
          else {
            uVar51 = 0;
            unaff_R12 = (longlong *)0x0;
            uVar35 = 0;
            uVar28 = 0;
          }
          lVar31 = local_590[0x21];
          uVar27 = (int)lVar31 + 1;
          *(uint *)(local_590 + 0x21) = uVar27;
          if (*(uint *)((longlong)local_590 + 0x10c) < uVar27) {
            FUN_147d13022(local_590);
          }
          lVar30 = *plVar18;
          lVar31 = (longlong)(int)lVar31 * 0x20;
          *(undefined1 (*) [16])(lVar30 + lVar31) = ZEXT816(0);
          *(undefined4 *)(lVar30 + 0x10 + lVar31) = 0;
          *(undefined1 *)(lVar30 + 0x18 + lVar31) = 8;
          iVar23 = (int)plVar18[99];
          lVar31 = (longlong)iVar23;
          *(int *)(plVar18 + 99) = iVar23 + 4;
          if ((uint)(*(int *)((longlong)plVar18 + 0x31c) - iVar23) < 4) {
            FUN_147d12c5e(local_588);
          }
          lVar30 = *local_588;
          *(undefined8 *)(lVar30 + lVar31 * 8) = uVar51;
          *(longlong **)(lVar30 + 8 + lVar31 * 8) = unaff_R12;
          *(undefined8 *)(lVar30 + 0x10 + lVar31 * 8) = uVar35;
          *(undefined8 *)(lVar30 + 0x18 + lVar31 * 8) = uVar28;
          param_4 = local_590;
        }
        break;
      case 0x2c:
        local_118 = *(longlong **)(param_5[2] + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        iVar23 = *(int *)(param_5[2] + 8 + (ulonglong)*(ushort *)(puVar21 + 1) * 0xc);
        uStack_110 = CONCAT44(*(undefined4 *)(puVar21 + 3),iVar23);
        local_108[0] = puVar21[7];
        uVar27 = *(uint *)(puVar21 + 8);
        iVar24 = *(int *)(puVar21 + 0xc);
        *param_5 = (longlong)(puVar21 + 0x10);
        if ((iVar23 == 0 && (int)local_118 == 0) || ((longlong *)*local_578 == (longlong *)0x0)) {
LAB_14013a27d:
          (**(code **)(*(longlong *)local_578[1] + 0x4d8))();
          if ((((int)uVar27 < 0) || ((int)uStack_530 <= (int)uVar27)) ||
             (puVar19 = (undefined8 *)local_538[uVar27], puVar19 == (undefined8 *)0x0)) {
            if (DAT_14cb05d01 == '\0') {
              DAT_14cb05d01 = '\x01';
            }
          }
          else {
            lVar31 = FUN_1411c531a();
            if ((*(int *)(lVar31 + 0x38) <= *(int *)(puVar19[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(puVar19[2] + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8) ==
                lVar31 + 0x30)) goto LAB_14013a52f;
          }
          puVar19 = (undefined8 *)0x0;
        }
        else {
          local_518 = 0xff;
          local_5a8 = local_578;
          cVar13 = (**(code **)(*(longlong *)*local_578 + 0x48))();
          puVar19 = local_538;
          if (cVar13 == '\0') goto LAB_14013a27d;
        }
LAB_14013a52f:
        iVar23 = (int)param_4[0x21];
        uVar27 = iVar23 + 1;
        *(uint *)(param_4 + 0x21) = uVar27;
        if ((iVar24 == -1) || (puVar19 == (undefined8 *)0x0)) {
          if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
            FUN_147d13022(param_4);
          }
          lVar31 = *param_4;
          lVar30 = (longlong)iVar23 * 0x20;
          *(undefined8 *)(lVar31 + lVar30) = 0;
          ((undefined8 *)(lVar31 + lVar30))[1] = 0;
          *(undefined4 *)(lVar31 + 0x10 + lVar30) = 0;
          *(undefined1 *)(lVar31 + 0x18 + lVar30) = 4;
          iVar23 = (int)param_4[99];
          *(int *)(param_4 + 99) = iVar23 + 4;
          uVar27 = *(int *)((longlong)param_4 + 0x31c) - iVar23;
        }
        else {
          if (*(uint *)((longlong)param_4 + 0x10c) < uVar27) {
            FUN_147d13022(param_4);
          }
          lVar31 = *param_4;
          lVar30 = (longlong)iVar23 * 0x20;
          *(undefined8 *)(lVar31 + lVar30) = 0;
          ((undefined8 *)(lVar31 + lVar30))[1] = 0;
          *(undefined4 *)(lVar31 + 0x10 + lVar30) = 0;
          *(undefined1 *)(lVar31 + 0x18 + lVar30) = 8;
          iVar23 = (int)param_4[99];
          *(int *)(param_4 + 99) = iVar23 + 4;
          uVar27 = *(int *)((longlong)param_4 + 0x31c) - iVar23;
        }
        if (uVar27 < 4) {
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
          FUN_147d12c5e(local_588);
        }
        lVar31 = *local_588;
        *(undefined1 (*) [16])(lVar31 + 0x10 + (longlong)iVar23 * 8) = ZEXT816(0);
        *(undefined1 (*) [16])(lVar31 + (longlong)iVar23 * 8) = ZEXT816(0);
        break;
      case 0x2d:
        lVar31 = *param_4;
        lVar30 = (longlong)(int)param_4[0x21] * 0x20;
        iVar23 = *(int *)(lVar31 + -0x10 + lVar30);
        bVar14 = *(byte *)(lVar31 + -8 + lVar30);
        lVar31 = *(longlong *)(lVar31 + -0x20 + lVar30);
        *(int *)(param_4 + 0x21) = (int)param_4[0x21] + -1;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        lVar31 = param_4[99];
        if (iVar23 != 0) {
          *(int *)(param_4 + 99) = (int)lVar31 - iVar23;
        }
        lVar30 = param_4[0x22];
        local_118 = (longlong *)0x0;
        uStack_110 = 0;
        local_108 = (undefined1  [8])(local_108._4_8_ << 0x20);
        bVar14 = puVar21[1];
        afStack_100._1_7_ = auVar54._9_7_;
        afStack_100[0]._0_1_ = bVar14;
        if (bVar14 == 0x19) {
          lVar32 = param_5[4];
          lVar44 = (ulonglong)*(ushort *)(puVar21 + 2) * 0x10;
          local_118 = *(longlong **)(lVar32 + lVar44);
          uVar27 = *(uint *)(lVar32 + 0xc + lVar44);
          uStack_110 = (longlong)*(int *)(lVar32 + 8 + lVar44) + param_5[6];
          local_108._0_4_ = uVar27;
          plVar18 = (longlong *)(ulonglong)*(uint *)(puVar21 + 4);
          *param_5 = (longlong)(puVar21 + 8);
          if (local_118 == (longlong *)0x0) goto LAB_14013bbf1;
        }
        else {
          plVar18 = (longlong *)(ulonglong)*(uint *)(puVar21 + 2);
          *param_5 = (longlong)(puVar21 + 6);
LAB_14013bbf1:
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        plVar36 = (longlong *)(ulonglong)uVar27;
        local_338 = (float *)0x0;
        local_330 = 0x4000000000;
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(plVar36);
        }
        if ((uVar27 == 0x40) ||
           (FUN_147d12a92(&local_538,plVar36), unaff_R12 = plVar18, uVar27 != 0)) {
          plVar37 = (longlong *)0x0;
          do {
            uVar26 = local_330;
            lVar32 = (longlong)(int)local_330;
            uVar27 = (int)local_330 + 1;
            local_330 = CONCAT44(local_330._4_4_,uVar27);
            if (local_330._4_4_ < uVar27) {
              FUN_147d12b88(&local_538,uVar26 & 0xffffffff);
            }
            pfVar25 = local_338;
            if (local_338 == (float *)0x0) {
              pfVar25 = (float *)&local_538;
            }
            *(undefined8 *)(pfVar25 + lVar32 * 2) =
                 *(undefined8 *)
                  (lVar30 + (longlong)(int)plVar18 * 8 + (longlong)(int)lVar31 * 8 +
                            (longlong)iVar23 * -8 + (longlong)plVar37 * 8);
            plVar37 = (longlong *)((longlong)plVar37 + 1);
            unaff_R12 = plVar36;
          } while (plVar36 != plVar37);
        }
        local_1c8 = local_338;
        if (local_338 == (float *)0x0) {
          local_1c8 = (float *)&local_538;
        }
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)local_330);
        param_4 = local_590;
        goto LAB_14013e1a7;
      case 0x2e:
        lVar31 = *param_4;
        iVar23 = (int)param_4[0x21];
        lVar30 = (longlong)iVar23 * 0x20;
        uVar27 = *(uint *)(lVar31 + -0x10 + lVar30);
        bVar14 = *(byte *)(lVar31 + -8 + lVar30);
        lVar30 = *(longlong *)(lVar31 + -0x20 + lVar30);
        *(int *)(param_4 + 0x21) = iVar23 + -1;
        if (lVar30 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        iVar41 = (int)param_4[99] - uVar27;
        iVar24 = (int)param_4[99];
        if (uVar27 != 0) {
          *(int *)(param_4 + 99) = iVar41;
          iVar24 = iVar41;
        }
        lVar30 = (longlong)(iVar23 + -2) * 0x20;
        if (*(longlong *)(lVar31 + lVar30) == 0) {
          uVar15 = *(uint *)(lVar31 + lVar30 + 0x18);
          uVar16 = 0x1c;
          if ((byte)uVar15 < 0x1c) {
            uVar16 = uVar15;
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[(uVar16 & 0xff) << 4];
        }
        else {
          iVar23 = *(int *)(lVar31 + 0x10 + lVar30);
        }
        lVar31 = param_4[0x22];
        puVar19 = (undefined8 *)(lVar31 + (longlong)iVar41 * 8);
        lVar30 = (longlong)(iVar24 - iVar23);
        iVar23 = *(int *)(puVar21 + 1);
        uVar15 = *(uint *)(puVar21 + 5);
        *param_5 = (longlong)(puVar21 + 9);
        if (uVar27 == 1) {
          if (0 < (int)uVar15) {
            uVar51 = *puVar19;
            lVar32 = (ulonglong)uVar15 - 1;
            auVar54._8_4_ = (int)lVar32;
            auVar54._0_8_ = lVar32;
            auVar54._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
            lVar31 = lVar31 + lVar30 * 8 + (longlong)iVar23 * 8;
            in_XMM1 = pmovsxbq(in_XMM1,0x100);
            uVar26 = 0;
            do {
              auVar61 = auVar54 ^ _DAT_149931e80;
              auVar60 = _DAT_149931e80 ^ in_XMM1;
              if ((bool)(~(auVar61._0_8_ < auVar60._0_8_) & 1)) {
                *(undefined8 *)(lVar31 + uVar26 * 8) = uVar51;
              }
              if (auVar60._8_8_ <= auVar61._8_8_) {
                *(undefined8 *)(lVar31 + 8 + uVar26 * 8) = uVar51;
              }
              uVar26 = uVar26 + 2;
              lVar30 = in_XMM1._8_8_;
              in_XMM1._0_8_ = (double)(in_XMM1._0_8_ + 2);
              in_XMM1._8_8_ = lVar30 + 2;
            } while ((uVar15 + 1 & 0xfffffffe) != uVar26);
          }
        }
        else {
          uVar16 = uVar27;
          if ((int)uVar15 < (int)uVar27) {
            uVar16 = uVar15;
          }
          if (0 < (int)uVar16) {
            uVar26 = 0;
            do {
              *(undefined8 *)(lVar31 + lVar30 * 8 + (longlong)iVar23 * 8 + uVar26 * 8) =
                   puVar19[uVar26];
              uVar26 = uVar26 + 1;
            } while (uVar16 != uVar26);
          }
          if ((int)uVar27 < (int)uVar15) {
            pvVar49 = (void *)(lVar31 + ((int)(iVar23 + uVar16) + lVar30) * 8);
            sVar39 = (ulonglong)(~uVar16 + uVar15) * 8 + 8;
            plVar18 = unaff_R12;
            goto LAB_14013a606;
          }
        }
        break;
      case 0x2f:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d0f8d8();
          goto LAB_1401399e6;
        }
        break;
      case 0x30:
        *param_5 = (longlong)(puVar21 + (longlong)*(int *)(puVar21 + 1) + 5);
        break;
      case 0x31:
        iVar23 = *(int *)(puVar21 + 1);
        *param_5 = (longlong)(puVar21 + 5);
        lVar31 = *param_4;
        lVar32 = (longlong)(int)param_4[0x21] * 0x20;
        lVar30 = *(longlong *)(lVar31 + -0x20 + lVar32);
        uVar27 = *(uint *)(lVar31 + -0x10 + lVar32);
        bVar14 = *(byte *)(lVar31 + -8 + lVar32);
        *(int *)(param_4 + 0x21) = (int)param_4[0x21] + -1;
        if (lVar30 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          uVar27 = (uint)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        lVar31 = (longlong)(int)param_4[99] - (longlong)(int)uVar27;
        if (uVar27 != 0) {
          *(int *)(param_4 + 99) = (int)lVar31;
        }
        lVar32 = param_4[0x22];
        local_4a0 = (float *)0x0;
        local_498 = 0x1000000000;
        local_538 = (undefined8 *)0x0;
        uStack_530 = 0;
        local_528 = 0;
        if (lVar30 == 0) {
          local_538 = (undefined8 *)0x0;
          uStack_530 = 0;
          local_498 = CONCAT44(0x10,uVar27);
          local_528 = bVar14;
          if (uVar27 < 0x11) {
            if (uVar27 == 0) goto LAB_14013b9f9;
          }
          else {
            FUN_147bcda28(local_520,0);
          }
          pfVar25 = local_4a0;
          if (local_4a0 == (float *)0x0) {
            pfVar25 = local_520;
          }
          memcpy(pfVar25,(void *)(lVar31 * 8 + lVar32),(longlong)(int)uVar27 << 3);
        }
LAB_14013b9f9:
        FUN_147d0d2fc(&local_538);
        lVar31 = 0;
        do {
          pfVar25 = local_4a0;
          if (*(char *)((longlong)&local_118 + lVar31) == '\x01') goto LAB_14013cf04;
          lVar31 = lVar31 + 1;
        } while (lVar31 != 4);
        *param_5 = (longlong)(puVar21 + 5 + iVar23);
        goto LAB_14013cf04;
      case 0x32:
        uVar5 = *(ushort *)(puVar21 + 1);
        uVar26 = (ulonglong)uVar5;
        *param_5 = (longlong)(puVar21 + 3);
        iVar23 = (int)param_4[0x21];
        lVar30 = (longlong)(int)(~(uint)uVar5 + iVar23) * 0x20;
        iVar24 = 0;
        lVar31 = *param_4;
        puVar19 = (undefined8 *)(lVar31 + lVar30);
        local_118 = (longlong *)*puVar19;
        uStack_110 = puVar19[1];
        in_XMM1 = *(undefined1 (*) [16])(lVar31 + 0x10 + lVar30);
        if (uVar5 != 0) {
          iVar24 = 0;
          do {
            iVar23 = iVar23 + -1;
            lVar30 = lVar31 + (longlong)iVar23 * 0x20;
            if (*(longlong *)(lVar31 + (longlong)iVar23 * 0x20) == 0) {
              uVar27 = *(uint *)(lVar30 + 0x18);
              uVar15 = 0x1c;
              if ((byte)uVar27 < 0x1c) {
                uVar15 = uVar27;
              }
              iVar41 = (int)(char)(&DAT_14aa842ba)[(uVar15 & 0xff) << 4];
            }
            else {
              iVar41 = *(int *)(lVar30 + 0x10);
            }
            iVar24 = iVar24 + iVar41;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        if (local_118 == (longlong *)0x0) {
          afStack_100[0] = in_XMM1._8_4_;
          fVar62 = 3.92364e-44;
          if (in_XMM1[8] < 0x1c) {
            fVar62 = afStack_100[0];
          }
          iVar23 = (int)(char)(&DAT_14aa842ba)[((uint)fVar62 & 0xff) << 4];
        }
        else {
          local_108._0_4_ = in_XMM1._0_4_;
          iVar23 = local_108._0_4_;
        }
        pvVar49 = (void *)((longlong)((int)param_4[99] - (iVar24 + iVar23)) * 8 + param_4[0x22]);
        local_338 = (float *)0x0;
        local_330 = CONCAT44(local_330._4_4_,iVar23);
        local_f0 = iVar23;
        _local_108 = in_XMM1;
        local_f8 = pvVar49;
        if (iVar23 == 0) {
          local_330 = 0x4000000000;
          local_330._0_4_ = 0;
        }
        else {
          FUN_147d12c00(&local_538,iVar23);
          pfVar25 = local_338;
          if (local_338 == (float *)0x0) {
            pfVar25 = (float *)&local_538;
          }
          memcpy(pfVar25,pvVar49,(longlong)iVar23 << 3);
        }
        local_1c8 = local_338;
        if (local_338 == (float *)0x0) {
          local_1c8 = (float *)&local_538;
        }
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)local_330);
        goto LAB_14013e1a7;
      case 0x33:
        goto LAB_14013a259;
      case 0x34:
        lVar31 = *param_4;
        iVar23 = (int)param_4[0x21] + -1;
        lVar30 = (longlong)(int)param_4[0x21] * 0x20;
        puVar19 = (undefined8 *)(lVar31 + -0x20 + lVar30);
        local_118 = (longlong *)*puVar19;
        uStack_110 = puVar19[1];
        in_XMM1 = *(undefined1 (*) [16])(lVar31 + -0x10 + lVar30);
        *(int *)(param_4 + 0x21) = iVar23;
        if (local_118 == (longlong *)0x0) {
          afStack_100[0] = in_XMM1._8_4_;
          fVar62 = 3.92364e-44;
          if (in_XMM1[8] < 0x1c) {
            fVar62 = afStack_100[0];
          }
          local_108._0_4_ = SEXT14((char)(&DAT_14aa842ba)[((uint)fVar62 & 0xff) << 4]);
        }
        else {
          local_108._0_4_ = in_XMM1._0_4_;
        }
        lVar32 = (longlong)(int)local_108._0_4_;
        lVar30 = (int)param_4[99] - lVar32;
        pvVar49 = (void *)(lVar30 * 8 + param_4[0x22]);
        local_f0 = local_108._0_4_;
        local_f8 = pvVar49;
        if (local_108._0_4_ == 0) {
          local_338 = (float *)0x0;
          local_330 = 0x4000000000;
          auVar54 = in_XMM1;
        }
        else {
          *(int *)(param_4 + 99) = (int)lVar30;
          local_338 = (float *)0x0;
          local_330 = CONCAT44(local_330._4_4_,local_108._0_4_);
          _local_108 = in_XMM1;
          FUN_147d12c00(&local_538,local_f0);
          pfVar25 = local_338;
          if (local_338 == (float *)0x0) {
            pfVar25 = (float *)&local_538;
          }
          memcpy(pfVar25,pvVar49,lVar32 << 3);
          lVar31 = *param_4;
          iVar23 = (int)param_4[0x21];
          auVar54 = _local_108;
        }
        _local_108 = auVar54;
        lVar30 = (longlong)iVar23 * 0x20;
        iVar24 = *(int *)(lVar31 + -0x10 + lVar30);
        bVar14 = *(byte *)(lVar31 + -8 + lVar30);
        lVar31 = *(longlong *)(lVar31 + -0x20 + lVar30);
        *(int *)(param_4 + 0x21) = iVar23 + -1;
        if (lVar31 == 0) {
          bVar22 = 0x1c;
          if (bVar14 < 0x1c) {
            bVar22 = bVar14;
          }
          iVar24 = (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar22 * 0x10];
        }
        if (iVar24 != 0) {
          *(int *)(param_4 + 99) = (int)param_4[99] - iVar24;
        }
        local_1c8 = local_338;
        if (local_338 == (float *)0x0) {
          local_1c8 = (float *)&local_538;
        }
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(int)local_330);
LAB_14013e1a7:
        FUN_147d0c9d0(param_4);
        pfVar25 = local_338;
LAB_14013cf04:
        if (pfVar25 != (float *)0x0) {
          FUN_1400020a8();
        }
        break;
      case 0x35:
        goto LAB_14013a259;
      case 0x36:
        goto LAB_14013a259;
      case 0x37:
LAB_14013a259:
        FUN_1436ae2c0(param_4);
        break;
      case 0x38:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d0fdfa();
          goto LAB_1401399e6;
        }
        break;
      case 0x39:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d0ff42();
          goto LAB_1401399e6;
        }
        break;
      case 0x3a:
        lVar31 = (longlong)((int)param_4[0x21] + -1) * 0x20;
        if (*(longlong *)(*param_4 + lVar31) == 0) {
          bVar22 = (byte)*(undefined4 *)(*param_4 + lVar31 + 0x18);
          bVar14 = 0x1c;
          if (bVar22 < 0x1c) {
            bVar14 = bVar22;
          }
          local_538 = (undefined8 *)
                      ((longlong)
                       ((int)param_4[99] - (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]) *
                       8 + param_4[0x22]);
          uStack_530 = CONCAT44(uStack_530._4_4_,
                                (int)(char)(&DAT_14aa842ba)[(ulonglong)bVar14 * 0x10]);
          uVar12 = FUN_147d1007c();
          goto LAB_1401399e6;
        }
        break;
      case 0x3b:
        if (*local_578 == 0) {
          uVar51 = 0;
          puVar19 = (undefined8 *)0x0;
        }
        else {
          FUN_143579df4(*local_578,&local_538);
          uVar51 = uStack_530;
          puVar19 = local_538;
        }
        iVar23 = (int)param_4[0x21];
        *(uint *)(param_4 + 0x21) = iVar23 + 1U;
        if (*(uint *)((longlong)param_4 + 0x10c) < iVar23 + 1U) {
          FUN_147d13022(param_4,iVar23);
        }
        lVar31 = *param_4;
        lVar30 = (longlong)iVar23 * 0x20;
        *(undefined1 (*) [16])(lVar31 + lVar30) = ZEXT816(0);
        *(undefined4 *)(lVar31 + 0x10 + lVar30) = 0;
        *(undefined1 *)(lVar31 + 0x18 + lVar30) = 4;
        iVar23 = (int)param_4[99];
        lVar31 = (longlong)iVar23;
        *(int *)(param_4 + 99) = iVar23 + 4;
        if ((uint)(*(int *)((longlong)param_4 + 0x31c) - iVar23) < 4) {
          FUN_147d12c5e(local_588,iVar23);
        }
        lVar30 = *local_588;
        *(int *)(lVar30 + lVar31 * 8) = (int)puVar19;
        *(undefined4 *)(lVar30 + 4 + lVar31 * 8) = 0;
        *(int *)(lVar30 + 8 + lVar31 * 8) = (int)((ulonglong)puVar19 >> 0x20);
        *(undefined4 *)(lVar30 + 0xc + lVar31 * 8) = 0;
        *(int *)(lVar30 + 0x10 + lVar31 * 8) = (int)uVar51;
        *(undefined4 *)(lVar30 + 0x14 + lVar31 * 8) = 0;
        *(int *)(lVar30 + 0x18 + lVar31 * 8) = (int)((ulonglong)uVar51 >> 0x20);
        *(undefined4 *)(lVar30 + 0x1c + lVar31 * 8) = 0;
        break;
      default:
        FUN_140033559(".\\Runtime/Engine/Private/Shader/Preshader.cpp");
      }
      puVar21 = (undefined1 *)*param_5;
    } while (puVar21 < local_558);
  }
  puVar19 = local_540;
  *(undefined1 *)(local_540 + 3) = 0;
  local_540[4] = 0;
  *(undefined4 *)(local_540 + 5) = 0;
  *local_540 = 0;
  local_540[1] = 0;
  *(undefined4 *)(local_540 + 2) = 0;
  if (0 < (int)param_4[0x21]) {
    puVar6 = (undefined8 *)*param_4;
    uVar51 = *puVar6;
    uVar28 = puVar6[1];
    uVar35 = puVar6[3];
    local_540[2] = puVar6[2];
    local_540[3] = uVar35;
    *local_540 = uVar51;
    local_540[1] = uVar28;
    lVar31 = param_4[99];
    local_540[4] = param_4[0x22];
    *(int *)(local_540 + 5) = (int)lVar31;
    *(undefined4 *)(param_4 + 0x21) = 0;
    if (*(int *)((longlong)param_4 + 0x10c) < 0) {
      FUN_147d12ef2(param_4);
    }
    *(undefined4 *)(param_4 + 99) = 0;
    if (*(int *)((longlong)param_4 + 0x31c) < 0) {
      FUN_147d12fd0(param_4 + 0x22);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar19;
}



// FUNCTION 14013e320 FUN_14013e320 body=219 status=ok
// SIG undefined FUN_14013e320(void)

void FUN_14013e320(longlong *param_1,int *param_2,uint param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  int local_40;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2[2] != 0 || *param_2 != 0) &&
     (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    local_28 = 0xff;
    local_58 = param_1;
    cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,6,param_2);
    if (cVar2 != '\0') {
      *param_4 = local_48;
      goto LAB_14013e3d3;
    }
  }
  (**(code **)(*(longlong *)param_1[1] + 0x4d8))((longlong *)param_1[1],&local_48);
  if ((((int)param_3 < 0) || (local_40 <= (int)param_3)) ||
     (lVar4 = *(longlong *)(local_48 + (ulonglong)param_3 * 8), lVar4 == 0)) {
    if (DAT_14caf1ed5 == '\0') {
      DAT_14caf1ed5 = '\x01';
    }
LAB_14013e3ce:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_141108188();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14013e3ce;
  }
  *param_4 = lVar4;
LAB_14013e3d3:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14013e3fc FUN_14013e3fc body=331 status=ok
// SIG undefined FUN_14013e3fc(void)

float * FUN_14013e3fc(longlong param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar3 = 0x1c;
  if ((byte)*(uint *)(param_1 + 0x10) < 0x1c) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar3 = (uVar3 & 0xff) << 4;
  cVar1 = (&DAT_14aa842ba)[uVar3];
  if ((longlong)cVar1 == 1) {
    pdVar4 = (double *)(param_1 + 0x18);
    if (*(double **)(param_1 + 0x98) != (double *)0x0) {
      pdVar4 = *(double **)(param_1 + 0x98);
    }
    cVar1 = (&DAT_14aa842b9)[uVar3];
    if (cVar1 == '\x01') {
      fVar8 = *(float *)pdVar4;
    }
    else if (cVar1 == '\x02') {
      fVar8 = (float)*pdVar4;
    }
    else if (cVar1 == '\x03') {
      fVar8 = (float)*(int *)pdVar4;
    }
    else {
      fVar8 = 0.0;
      if (cVar1 == '\x04') {
        fVar8 = (float)*(byte *)pdVar4;
      }
    }
    *param_2 = fVar8;
    param_2[1] = fVar8;
    param_2[2] = fVar8;
    param_2[3] = fVar8;
  }
  else {
    uVar6 = 4;
    if (cVar1 < '\x04') {
      uVar6 = (int)cVar1;
    }
    if ('\0' < cVar1) {
      cVar2 = (&DAT_14aa842b9)[uVar3];
      lVar5 = param_1 + 0x18;
      if (*(longlong *)(param_1 + 0x98) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x98);
      }
      uVar7 = 0;
      do {
        if (cVar2 == '\x02') {
          fVar8 = (float)*(double *)(lVar5 + uVar7 * 8);
        }
        else if (cVar2 == '\x01') {
          fVar8 = *(float *)(lVar5 + uVar7 * 8);
        }
        else if (cVar2 == '\x03') {
          fVar8 = (float)*(int *)(lVar5 + uVar7 * 8);
        }
        else {
          fVar8 = 0.0;
          if (cVar2 == '\x04') {
            fVar8 = (float)*(byte *)(lVar5 + uVar7 * 8);
          }
        }
        param_2[uVar7] = fVar8;
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
      if ('\x03' < cVar1) {
        return param_2;
      }
    }
    memset(param_2 + cVar1,0,(ulonglong)(3 - uVar6) * 4 + 4);
  }
  return param_2;
}



// FUNCTION 14013e547 FUN_14013e547 body=311 status=ok
// SIG undefined FUN_14013e547(void)

void FUN_14013e547(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  char cVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  double *pdVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  
  uVar6 = 0x1c;
  if ((byte)*(uint *)(param_2 + 0x10) < 0x1c) {
    uVar6 = *(uint *)(param_2 + 0x10);
  }
  uVar6 = (uVar6 & 0xff) << 4;
  cVar2 = (&DAT_14aa842ba)[uVar6];
  if ((longlong)cVar2 == 1) {
    pdVar7 = (double *)(param_2 + 0x18);
    if (*(double **)(param_2 + 0x98) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x98);
    }
    switch((&DAT_14aa842b9)[uVar6]) {
    case 1:
      dVar1 = (double)*(float *)pdVar7;
      break;
    case 2:
      dVar1 = *pdVar7;
      break;
    case 3:
      dVar1 = (double)(int)*(float *)pdVar7;
      break;
    case 4:
      dVar1 = (double)*(byte *)pdVar7;
      break;
    default:
      dVar1 = 0.0;
    }
    uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = uVar11;
    *param_3 = auVar4;
    auVar5._8_4_ = SUB84(dVar1,0);
    auVar5._0_8_ = dVar1;
    auVar5._12_4_ = uVar11;
    param_3[1] = auVar5;
    return;
  }
  uVar10 = 4;
  if (cVar2 < '\x04') {
    uVar10 = (int)cVar2;
  }
  if ('\0' < cVar2) {
    cVar3 = (&DAT_14aa842b9)[uVar6];
    uVar8 = 0;
    do {
      lVar9 = *(longlong *)(param_2 + 0x98);
      if (*(longlong *)(param_2 + 0x98) == 0) {
        lVar9 = param_2 + 0x18;
      }
      if (cVar3 == '\x02') {
        dVar1 = *(double *)(lVar9 + uVar8 * 8);
      }
      else if (cVar3 == '\x04') {
        dVar1 = (double)*(byte *)(lVar9 + uVar8 * 8);
      }
      else if (cVar3 == '\x03') {
        dVar1 = (double)*(int *)(lVar9 + uVar8 * 8);
      }
      else {
        dVar1 = 0.0;
        if (cVar3 == '\x01') {
          dVar1 = (double)*(float *)(lVar9 + uVar8 * 8);
        }
      }
      *(double *)(*param_3 + uVar8 * 8) = dVar1;
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar8);
    if ('\x03' < cVar2) {
      return;
    }
  }
  memset(*param_3 + (longlong)cVar2 * 8,0,(ulonglong)(3 - uVar10) * 8 + 8);
  return;
}



// FUNCTION 14013e67e FUN_14013e67e body=127 status=ok
// SIG undefined FUN_14013e67e(void)

void FUN_14013e67e(longlong *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_48;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2[2] != 0 || *param_2 != 0) &&
     (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    local_28 = 0xff;
    local_58 = param_1;
    cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,7,param_2);
    if (cVar2 != '\0') goto LAB_14013e6cf;
  }
  local_48 = FUN_14013e6fe(param_1[1],param_3);
LAB_14013e6cf:
  *param_4 = local_48;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14013e6fe FUN_14013e6fe body=145 status=ok
// SIG undefined FUN_14013e6fe(void)

longlong FUN_14013e6fe(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_20);
  if ((((int)param_2 < 0) || (local_18 <= (int)param_2)) ||
     (lVar2 = *(longlong *)(local_20 + (ulonglong)param_2 * 8), lVar2 == 0)) {
    if (DAT_14caf1ed6 == '\0') {
      DAT_14caf1ed6 = '\x01';
    }
  }
  else {
    lVar1 = FUN_1411c531a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_14013e770;
  }
  lVar2 = 0;
LAB_14013e770:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14013e790 FUN_14013e790 body=229 status=ok
// SIG undefined FUN_14013e790(void)

void FUN_14013e790(longlong param_1,float *param_2,float *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  iVar3 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x90);
  iVar5 = *(int *)(param_1 + 0x8c);
  iVar6 = *(int *)(param_1 + 0x84);
  iVar7 = *(int *)(param_1 + 0x88);
  iVar8 = *(int *)(param_1 + 0x48);
  uVar9 = *(uint *)(param_1 + 0x40);
  *param_2 = (float)*(int *)(param_1 + 0x80) * 0.0625;
  param_2[1] = (float)iVar6 * 0.0625;
  param_2[2] = (float)iVar7 * 0.0625;
  param_2[3] = (float)(iVar8 << 0x16 | (uVar2 & 0x7ff) << 0xb | uVar9 & 0x7ff);
  *param_3 = 1.0 / (float)iVar5;
  param_3[1] = 1.0 / (float)iVar4;
  param_3[2] = 1.0 / (float)iVar3;
  param_3[3] = 0.0;
  uVar1 = *(ushort *)(param_1 + 0x98);
  param_3[3] = (float)(uint)uVar1;
  param_3[3] = (float)((uint)uVar1 + *(int *)(param_1 + 0x9c) * 0x10000 + -0x10000);
  return;
}



// FUNCTION 14013e875 FUN_14013e875 body=341 status=ok
// SIG undefined FUN_14013e875(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013e875(void)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96590) && (FUN_144b3d300(&DAT_14ca96590), DAT_14ca96590 == -1)) {
    QueryPerformanceCounter(&local_48);
    _DAT_14ca96588 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    _Init_thread_footer(&DAT_14ca96590);
  }
  QueryPerformanceCounter(&local_48);
  dVar2 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar6 = dVar2 - _DAT_14ca96588;
  FUN_143220bf7(dVar2);
  dVar3 = _DAT_14ca96588;
  if ((0.025 <= (float)dVar6) && (dVar3 = dVar2, 0 < DAT_14ca9a3e0)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(DAT_14ca9a3d8 + lVar5 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if (cVar4 != '\0') {
        (**(code **)(*plVar1 + 8))(plVar1,(float)dVar6);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < DAT_14ca9a3e0);
  }
  _DAT_14ca96588 = dVar3;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14013e9cc FUN_14013e9cc body=351 status=ok
// SIG undefined FUN_14013e9cc(void)

longlong FUN_14013e9cc(longlong param_1,undefined4 *param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144928b90(param_1,1);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_2[1];
  local_40 = *param_3;
  if (local_40 == 0) {
    uStack_38 = DAT_14cb7bba0;
    local_40 = (int)DAT_14cb7bb98;
    uStack_3c = (undefined4)((ulonglong)DAT_14cb7bb98 >> 0x20);
  }
  else {
    uStack_3c = (undefined4)*(undefined8 *)(param_3 + 1);
    uStack_38 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20);
  }
  lVar1 = param_1 + 0x10;
  FUN_144928d62(lVar1,1,&local_40);
  local_50 = *(undefined8 *)(param_2 + 2);
  local_48 = param_2[4];
  FUN_14013eb2c(param_1);
  local_58 = param_2[7];
  local_60 = *(undefined8 *)(param_2 + 5);
  FUN_14013eb54(param_1);
  local_68 = param_2[10];
  local_70 = *(undefined8 *)(param_2 + 8);
  FUN_144928d62(lVar1,4);
  local_78 = param_2[0xd];
  local_80 = *(undefined8 *)(param_2 + 0xb);
  FUN_144928d62(lVar1,5);
  FUN_140114204(param_1);
  FUN_144976b9c(param_1 + 0x38,*(undefined8 *)(param_2 + 0xe));
  FUN_144976b9c(param_1 + 0x48,*(undefined8 *)(param_2 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14013eb2c FUN_14013eb2c body=39 status=ok
// SIG undefined FUN_14013eb2c(void)

void FUN_14013eb2c(longlong param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_144928d62(param_1 + 0x10,2,param_2);
    return;
  }
  FUN_144928d62(param_1 + 0x10,2,&DAT_14cb7bd68);
  return;
}



// FUNCTION 14013eb54 FUN_14013eb54 body=39 status=ok
// SIG undefined FUN_14013eb54(void)

void FUN_14013eb54(longlong param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_144928d62(param_1 + 0x10,3,param_2);
    return;
  }
  FUN_144928d62(param_1 + 0x10,3,&DAT_14cb7bd80);
  return;
}



// FUNCTION 14013eb7c FUN_14013eb7c body=103 status=ok
// SIG undefined FUN_14013eb7c(void)

ulonglong FUN_14013eb7c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14013ebc6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14013ebc6;
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
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 14013ebf8 FUN_14013ebf8 body=100 status=ok
// SIG undefined FUN_14013ebf8(void)

void FUN_14013ebf8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((lVar1 != 0) && ((*(byte *)(param_1 + 0x8c) & 0x80) != 0)) &&
     ((longlong)*(int *)(param_1 + 600) != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x250) + lVar3) == *param_2) {
        *(byte *)(lVar1 + 0x4c) = *(byte *)(lVar1 + 0x4c) & 0xfd;
        puVar2 = *(ushort **)(lVar1 + 0x80);
        if (puVar2 == (ushort *)0x0) {
          return;
        }
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 600) * 8 != lVar3);
  }
  return;
}



// FUNCTION 14013ed38 FUN_14013ed38 body=144 status=ok
// SIG undefined FUN_14013ed38(void)

undefined8 FUN_14013ed38(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb26440;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb26440 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14013edca FUN_14013edca body=726 status=ok
// SIG undefined FUN_14013edca(void)

longlong * FUN_14013edca(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = (**(code **)(*param_1 + 0x300))();
  if (cVar3 != '\0') {
    if (((*param_2 == 0) || (iVar4 = param_2[1], iVar4 == 0)) || (*param_2 == DAT_14c948000)) {
LAB_14013f07b:
      local_28 = DAT_14c948620;
      local_30 = DAT_14c948618;
    }
    else {
      if ((iVar4 < 2) && (param_2[9] < 1)) {
        puVar9 = (ulonglong *)(param_2 + 2);
      }
      else {
        puVar9 = *(ulonglong **)(param_2 + 6);
      }
      if (iVar4 < 1) goto LAB_14013f07b;
      local_28 = (int)puVar9[1];
      local_30 = *puVar9;
    }
    uVar11 = local_30 & 0xffffffff;
    if (local_28 != 0) {
      uVar5 = FUN_144a78877(uVar11,local_28);
      uVar11 = (ulonglong)uVar5;
    }
    iVar4 = FUN_1448467de(param_1 + 0x3f,uVar11,&local_30);
    if (iVar4 != -1) {
      lVar8 = param_1[0x3f];
      lVar6 = lVar8 + (longlong)iVar4 * 0x70;
      if ((lVar6 != 0) && (lVar8 + (longlong)iVar4 * 0x70 != -0x10)) {
        puVar10 = (uint *)&DAT_14c948618;
        puVar12 = (uint *)&DAT_14c948620;
        if ((*param_2 != 0) &&
           (((param_2[1] != 0 && (*param_2 != DAT_14c948000)) && (1 < param_2[1])))) {
          puVar10 = (uint *)(*(longlong *)(param_2 + 6) + 0xc);
          puVar12 = (uint *)(*(longlong *)(param_2 + 6) + 0x14);
        }
        uVar5 = *puVar10;
        uVar2 = *puVar12;
        uVar15 = uVar5;
        if (uVar2 != 0) {
          uVar15 = uVar2 >> 0xd ^ uVar5 - uVar2;
          uVar16 = uVar15 << 8 ^ (-0x61c88647 - uVar2) - uVar15;
          uVar17 = uVar16 >> 0xd ^ (uVar2 - uVar15) - uVar16;
          uVar18 = uVar17 >> 0xc ^ (uVar15 - uVar16) - uVar17;
          uVar15 = uVar18 << 0x10 ^ (uVar16 - uVar17) - uVar18;
          uVar16 = uVar15 >> 5 ^ (uVar17 - uVar18) - uVar15;
          uVar17 = uVar16 >> 3 ^ (uVar18 - uVar15) - uVar16;
          uVar15 = uVar17 << 10 ^ (uVar15 - uVar16) - uVar17;
          uVar15 = uVar15 >> 0xf ^ uVar16 - (uVar17 + uVar15);
        }
        if (*(int *)(lVar6 + 0x20) != *(int *)(lVar6 + 0x4c)) {
          lVar8 = lVar6 + 0x50;
          if (*(longlong *)(lVar6 + 0x58) != 0) {
            lVar8 = *(longlong *)(lVar6 + 0x58);
          }
          iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar6 + 0x60) - 1U & uVar15) * 4);
          if (iVar4 != -1) {
            lVar8 = *(longlong *)(lVar6 + 0x18);
            do {
              lVar6 = (longlong)iVar4 * 0x20;
              if ((*(uint *)(lVar8 + lVar6) == uVar5) &&
                 (lVar1 = lVar8 + lVar6, *(uint *)(lVar1 + 8) == uVar2)) {
                if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0)) {
                  plVar14 = *(longlong **)(lVar1 + 0x10);
                  goto LAB_14013ef6a;
                }
                break;
              }
              iVar4 = *(int *)(lVar8 + 0x18 + lVar6);
            } while (iVar4 != -1);
          }
        }
      }
    }
  }
  uVar7 = FUN_1400e3c00(param_1,param_2,1);
  lVar8 = FUN_14013f0dc(param_1,uVar7,param_2,1);
  if (lVar8 != 0) {
    plVar14 = *(longlong **)(lVar8 + 0x30);
LAB_14013ef6a:
    if (plVar14 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar14 + 8))(plVar14);
      lVar6 = FUN_14013f0a2();
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar8 + 0x38))) {
        plVar13 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30) {
          plVar13 = plVar14;
        }
        goto LAB_14013efa2;
      }
    }
  }
  plVar13 = (longlong *)0x0;
LAB_14013efa2:
  if (*(longlong *)(param_2 + 6) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar13;
}



// FUNCTION 14013f0a2 FUN_14013f0a2 body=57 status=ok
// SIG undefined FUN_14013f0a2(void)

void FUN_14013f0a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb256f8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb256f8 = FUN_140002ddd(FUN_1464479a9,uVar1,L"WwiseObjectDef");
  }
  return;
}



// FUNCTION 14013f0dc FUN_14013f0dc body=505 status=ok
// SIG undefined FUN_14013f0dc(void)

undefined8 FUN_14013f0dc(undefined8 param_1,longlong param_2,uint *param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar13 = *(int *)(param_2 + 0xc0);
  uVar10 = *param_3;
  if ((longlong)iVar13 == -1) {
    if (((uVar10 != 0) && (param_3[1] != 0)) && (uVar10 != DAT_14c948000)) {
      puVar3 = &DAT_14c948028;
      goto LAB_14013f124;
    }
  }
  else if (((uVar10 != 0) && (uVar2 = param_3[1], uVar2 != 0)) && (uVar10 != DAT_14c948000)) {
    puVar11 = param_3 + 2;
    if (0 < (int)param_3[9]) {
      puVar11 = *(uint **)(param_3 + 6);
    }
    if (1 < (int)uVar2) {
      puVar11 = *(uint **)(param_3 + 6);
    }
    if (uVar2 == 1 && 0 < iVar13) {
      puVar5 = (uint *)&DAT_14c948618;
      if (*(int *)(param_2 + 0xc4) == 1) {
        puVar5 = puVar11;
      }
      uVar10 = *puVar5;
      puVar3 = (ulonglong *)(puVar5 + 1);
      goto LAB_14013f124;
    }
    if (iVar13 < (int)uVar2) {
      puVar3 = (ulonglong *)(puVar11 + (longlong)iVar13 * 3 + 1);
      uVar10 = puVar11[(longlong)iVar13 * 3];
      goto LAB_14013f124;
    }
  }
  puVar3 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
  uVar10 = (uint)DAT_14c948618;
LAB_14013f124:
  uVar9 = (uint)(*puVar3 >> 0x20);
  uVar2 = uVar10;
  if (*puVar3 >> 0x20 != 0) {
    uVar2 = uVar9 >> 0xd ^ uVar10 - uVar9;
    uVar12 = uVar2 << 8 ^ (-0x61c88647 - uVar2) - uVar9;
    uVar6 = uVar12 >> 0xd ^ (uVar9 - uVar2) - uVar12;
    uVar8 = uVar6 >> 0xc ^ (uVar2 - uVar12) - uVar6;
    uVar2 = uVar8 << 0x10 ^ (uVar12 - uVar6) - uVar8;
    uVar12 = uVar2 >> 5 ^ (uVar6 - uVar8) - uVar2;
    uVar6 = uVar12 >> 3 ^ (uVar8 - uVar2) - uVar12;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar12) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar12 - (uVar6 + uVar2);
  }
  if (*(int *)(param_2 + 0x78) != *(int *)(param_2 + 0xa4)) {
    lVar14 = param_2 + 0xa8;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      lVar14 = *(longlong *)(param_2 + 0xb0);
    }
    iVar13 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_2 + 0xb8) - 1U & uVar2) * 4);
    if (iVar13 != -1) {
      lVar14 = *(longlong *)(param_2 + 0x70);
      while ((lVar7 = (longlong)iVar13 * 0x20, *(uint *)(lVar14 + lVar7) != uVar10 ||
             (lVar1 = lVar14 + lVar7, *(uint *)(lVar1 + 8) != uVar9))) {
        iVar13 = *(int *)(lVar14 + 0x18 + lVar7);
        if (iVar13 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0) {
        return 0;
      }
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      if (param_4 != '\0') {
        uVar4 = FUN_14013f2d6(param_1,uVar4);
        return uVar4;
      }
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14013f2d6 FUN_14013f2d6 body=847 status=ok
// SIG undefined FUN_14013f2d6(void)

longlong FUN_14013f2d6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar13 = *(longlong *)(param_2 + 0x60);
    if (lVar13 != 0) {
      lVar7 = *(longlong *)(param_2 + 0x68);
      if (lVar7 == param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
      local_58 = (longlong *)0x0;
      local_50 = 0x400000001;
      local_78[0] = param_2;
      do {
        while (((lVar12 = *(longlong *)(lVar13 + 8), lVar12 == 0 ||
                (*(int *)(lVar13 + 0x10) < *(int *)(lVar12 + 0x168))) ||
               ((*(byte *)(lVar12 + 0x160) & 4) != 0))) {
          lVar13 = *(longlong *)(lVar13 + 0x40);
          if (lVar13 == 0) goto LAB_14013f56c;
        }
        puVar11 = (uint *)(lVar13 + 0x18);
        FUN_14064096e(puVar11,&local_80,1);
        FUN_14064096e(lVar7,&local_88);
        if ((local_80 == local_88) || (lVar7 = FUN_1400e3c00(param_1,puVar11), lVar7 != 0)) {
          iVar9 = *(int *)(lVar7 + 0xc0);
          uVar10 = *puVar11;
          if ((longlong)iVar9 == -1) {
            if (((uVar10 != 0) && (*(int *)(lVar13 + 0x1c) != 0)) &&
               (puVar5 = &DAT_14c948028, uVar10 != DAT_14c948000)) goto LAB_14013f460;
LAB_14013f5a8:
            puVar5 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
            uVar10 = (uint)DAT_14c948618;
          }
          else {
            if (((uVar10 == 0) || (iVar2 = *(int *)(lVar13 + 0x1c), iVar2 == 0)) ||
               (uVar10 == DAT_14c948000)) goto LAB_14013f5a8;
            puVar11 = (uint *)(lVar13 + 0x20);
            if (0 < *(int *)(lVar13 + 0x3c)) {
              puVar11 = *(uint **)(lVar13 + 0x30);
            }
            if (1 < iVar2) {
              puVar11 = *(uint **)(lVar13 + 0x30);
            }
            if ((iVar9 < 1) || (iVar2 != 1)) {
              if (iVar2 <= iVar9) goto LAB_14013f5a8;
              puVar5 = (ulonglong *)(puVar11 + (longlong)iVar9 * 3 + 1);
              uVar10 = puVar11[(longlong)iVar9 * 3];
            }
            else {
              puVar8 = (uint *)&DAT_14c948618;
              if (*(int *)(lVar7 + 0xc4) == 1) {
                puVar8 = puVar11;
              }
              uVar10 = *puVar8;
              puVar5 = (ulonglong *)(puVar8 + 1);
            }
          }
LAB_14013f460:
          uVar3 = *puVar5;
          uVar14 = uVar3 >> 0x20;
          uVar4 = uVar10;
          if (uVar14 != 0) {
            uVar4 = FUN_144a78877(uVar10,uVar14);
          }
          uVar14 = local_50;
          if (*(int *)(lVar7 + 0x78) != *(int *)(lVar7 + 0xa4)) {
            lVar13 = lVar7 + 0xa8;
            if (*(longlong *)(lVar7 + 0xb0) != 0) {
              lVar13 = *(longlong *)(lVar7 + 0xb0);
            }
            iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar7 + 0xb8) - 1U & uVar4) * 4);
            if (iVar9 != -1) {
              lVar13 = *(longlong *)(lVar7 + 0x70);
              while ((lVar12 = (longlong)iVar9 * 0x20, *(uint *)(lVar13 + lVar12) != uVar10 ||
                     (lVar1 = lVar13 + lVar12, *(int *)(lVar1 + 8) != (int)(uVar3 >> 0x20)))) {
                iVar9 = *(int *)(lVar13 + 0x18 + lVar12);
                if (iVar9 == -1) goto LAB_14013f569;
              }
              if (lVar1 != 0) {
                param_2 = 0;
                if ((longlong *)(lVar1 + 0x10) == (longlong *)0x0) break;
                param_2 = *(longlong *)(lVar1 + 0x10);
                if (param_2 != 0) {
                  if (*(longlong *)(param_2 + 0x60) != 0) {
                    plVar6 = local_58;
                    if (local_58 == (longlong *)0x0) {
                      plVar6 = local_78;
                    }
                    lVar13 = (longlong)(int)local_50;
                    if (lVar13 != 0) {
                      lVar12 = 0;
                      do {
                        if (*(longlong *)((longlong)plVar6 + lVar12) == param_2) goto LAB_14013f569;
                        lVar12 = lVar12 + 8;
                      } while (lVar13 * 8 - lVar12 != 0);
                    }
                    uVar10 = (int)local_50 + 1;
                    local_50 = CONCAT44(local_50._4_4_,uVar10);
                    if (local_50._4_4_ < uVar10) {
                      FUN_14709f8b8(local_78,uVar14 & 0xffffffff);
                    }
                    plVar6 = local_58;
                    if (local_58 == (longlong *)0x0) {
                      plVar6 = local_78;
                    }
                    plVar6[lVar13] = param_2;
                    lVar13 = *(longlong *)(param_2 + 0x60);
                    goto LAB_14013f558;
                  }
                  break;
                }
              }
            }
          }
LAB_14013f569:
          param_2 = 0;
          break;
        }
        lVar7 = *(longlong *)(param_2 + 0x68);
        lVar13 = *(longlong *)(lVar13 + 0x40);
LAB_14013f558:
      } while (lVar13 != 0);
LAB_14013f56c:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14013f642 FUN_14013f642 body=200 status=ok
// SIG undefined FUN_14013f642(void)

void FUN_14013f642(longlong param_1)

{
  uint *_Dst;
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  iVar2 = *(int *)(param_1 + 0x8e0);
  if (0 < iVar2) {
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      _Dst = (uint *)(*(longlong *)(param_1 + 0x8d8) + uVar4 * 8);
      if ((((_Dst[1] == 0) || (uVar1 = *_Dst, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
         (((plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != _Dst[1])) ||
          (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (*plVar5 == 0)))))) {
        if (~uVar3 + iVar2 != 0) {
          memmove(_Dst,_Dst + 2,(longlong)(int)(~uVar3 + iVar2) << 3);
          iVar2 = *(int *)(param_1 + 0x8e0);
        }
        *(int *)(param_1 + 0x8e0) = iVar2 + -1;
        FUN_148123ba2((longlong *)(param_1 + 0x8d8));
        uVar3 = uVar3 - 1;
      }
      else {
        FUN_1448c6f34(*plVar5);
      }
      uVar4 = (ulonglong)(uVar3 + 1);
      iVar2 = *(int *)(param_1 + 0x8e0);
    } while ((int)(uVar3 + 1) < iVar2);
  }
  return;
}



// FUNCTION 14013f70a FUN_14013f70a body=55 status=ok
// SIG undefined FUN_14013f70a(void)

void FUN_14013f70a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2c0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x5c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14013f741 FUN_14013f741 body=75 status=ok
// SIG undefined FUN_14013f741(void)

void FUN_14013f741(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14013f78c FUN_14013f78c body=48 status=ok
// SIG undefined FUN_14013f78c(void)

void FUN_14013f78c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14013f7bc FUN_14013f7bc body=586 status=ok
// SIG undefined FUN_14013f7bc(void)

void FUN_14013f7bc(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 auStack_138 [32];
  code *local_118;
  longlong lStack_110;
  longlong *local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = (code *)0x0;
  local_108 = (longlong *)0x0;
  plVar12 = (longlong *)*DAT_14cb44118;
  if (plVar12 != (longlong *)0x0) {
    do {
      lVar9 = lStack_e0;
      lVar8 = local_e8;
      lVar7 = lStack_f0;
      lVar6 = local_f8;
      pcVar1 = (code *)plVar12[2];
      lVar2 = plVar12[3];
      plVar3 = (longlong *)plVar12[4];
      lVar4 = plVar12[5];
      local_e8 = plVar12[8];
      lStack_e0 = plVar12[9];
      local_f8 = plVar12[6];
      lStack_f0 = plVar12[7];
      plVar12[8] = lVar8;
      plVar12[9] = lVar9;
      plVar12[6] = lVar6;
      plVar12[7] = lVar7;
      plVar12[4] = (longlong)local_108;
      plVar12[5] = lStack_100;
      plVar12[2] = (longlong)local_118;
      plVar12[3] = lStack_110;
      plVar5 = DAT_14cb44118;
      local_98 = plVar12[2];
      uStack_90 = plVar12[3];
      local_88 = (longlong *)plVar12[4];
      uStack_80 = plVar12[5];
      local_78 = plVar12[6];
      uStack_70 = plVar12[7];
      local_68 = plVar12[8];
      uStack_60 = plVar12[9];
      lVar10 = local_68;
      lVar11 = uStack_60;
      lVar8 = local_78;
      lVar9 = uStack_70;
      lVar7 = uStack_80;
      lVar6 = uStack_90;
      DAT_14cb44118 = plVar12;
      plVar12[8] = CONCAT44(uStack_a4,local_a8);
      plVar12[9] = CONCAT44(uStack_9c,uStack_a0);
      plVar12[6] = CONCAT44(uStack_b4,local_b8);
      plVar12[7] = CONCAT44(uStack_ac,uStack_b0);
      plVar12[4] = 0;
      plVar12[5] = CONCAT44(uStack_bc,uStack_c0);
      plVar12[2] = 0;
      plVar12[3] = CONCAT44(uStack_cc,uStack_d0);
      uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
      local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
      local_a8 = (undefined4)local_68;
      uStack_a4 = local_68._4_4_;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      local_b8 = (undefined4)local_78;
      uStack_b4 = local_78._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      local_c8 = local_88;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      local_d8 = local_98;
      uStack_d0 = (undefined4)uStack_90;
      uStack_cc = uStack_90._4_4_;
      local_118 = pcVar1;
      lStack_110 = lVar2;
      local_108 = plVar3;
      lStack_100 = lVar4;
      uStack_90 = lVar6;
      uStack_80 = lVar7;
      local_78 = lVar8;
      uStack_70 = lVar9;
      local_68 = lVar10;
      uStack_60 = lVar11;
      if (local_98 != 0) {
        plVar12 = local_c8;
        if (local_88 == (longlong *)0x0) {
          plVar12 = (longlong *)&local_b8;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (plVar5 != (longlong *)0x0) {
        if (plVar5[2] != 0) {
          plVar12 = plVar5 + 6;
          if ((longlong *)plVar5[4] != (longlong *)0x0) {
            plVar12 = (longlong *)plVar5[4];
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        FUN_1400020a8(plVar5);
      }
      pcVar1 = local_118;
      plVar12 = local_108;
      if (local_108 == (longlong *)0x0) {
        plVar12 = &local_f8;
      }
      uVar13 = (**(code **)(*plVar12 + 8))();
      (*pcVar1)(uVar13);
      plVar12 = (longlong *)*DAT_14cb44118;
    } while (plVar12 != (longlong *)0x0);
  }
  if (local_118 != (code *)0x0) {
    plVar12 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar12 = &local_f8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14013fa08 FUN_14013fa08 body=519 status=ok
// SIG undefined FUN_14013fa08(void)

void FUN_14013fa08(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar9 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(uint *)(param_1 + 0x528);
  if (0 < (int)uVar6) {
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x520) + -8 + (ulonglong)uVar6 * 8);
      *(uint *)(param_1 + 0x528) = uVar6 - 1;
      iVar7 = FUN_143ac6210(uVar3);
      if (iVar7 != *(int *)(param_1 + 0x20)) {
        FUN_143ad0ca6(uVar9,&local_58,iVar7,*(undefined8 *)(param_1 + 0x10));
        plVar5 = local_50;
        uVar4 = local_58;
        if (local_50 == (longlong *)0x0) {
          FUN_14032de7e(local_58,uVar3);
        }
        else {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_14032de7e(uVar4,uVar3);
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
      uVar6 = *(uint *)(param_1 + 0x528);
    } while (0 < (int)uVar6);
  }
  *(undefined4 *)(param_1 + 0x528) = 0;
  if (*(int *)(param_1 + 0x52c) < 0) {
    FUN_140802f38(param_1 + 0x520,0);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    iVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar7 * 8);
      iVar8 = FUN_143ac6210(uVar3);
      if (iVar8 == *(int *)(param_1 + 0x20)) {
        iVar7 = iVar7 + 1;
      }
      else {
        FUN_143ad0ca6(uVar9,&local_58,iVar8,*(undefined8 *)(param_1 + 0x10));
        plVar5 = local_50;
        uVar4 = local_58;
        if (local_50 == (longlong *)0x0) {
          FUN_14032de7e(local_58,uVar3);
        }
        else {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_14032de7e(uVar4,uVar3);
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
    } while (iVar7 < *(int *)(param_1 + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14013fc10 FUN_14013fc10 body=432 status=ok
// SIG undefined FUN_14013fc10(void)

void FUN_14013fc10(undefined8 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (DAT_14c76292d == '\x01') {
    iVar2 = *(int *)(param_1 + 6);
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar14 = 0;
      iVar10 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 3);
      }
      uVar7 = *puVar6;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar10 = 0;
        do {
          if (uVar15 == uVar14) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar7 = puVar6[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar14 = 0;
        iVar10 = 0;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar7 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[1] + 8 + (longlong)iVar5 * 0x18);
        (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2,*param_1);
        uVar7 = ~(uint)uVar15 & uVar7;
        puVar6 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 3);
        }
        iVar3 = *(int *)(param_1 + 6);
        iVar5 = (int)uVar14;
        lVar12 = (longlong)iVar5;
        uVar11 = puVar6[lVar12] & uVar7;
        if (uVar11 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar13 = 0;
            do {
              uVar11 = puVar6[lVar12 + lVar13 + 1];
              if (uVar11 != 0) {
                uVar14 = (ulonglong)(iVar5 + (int)lVar13 + 1);
                uVar7 = 0xffffffff;
                goto LAB_14013fd6c;
              }
              iVar10 = iVar10 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar9 - lVar12 != lVar13);
            uVar7 = 0xffffffff;
            lVar12 = (longlong)iVar9;
          }
          uVar14 = lVar12 + 1U & 0xffffffff;
          iVar5 = iVar3;
        }
        else {
LAB_14013fd6c:
          uVar15 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
  return;
}



// FUNCTION 14013fdc0 FUN_14013fdc0 body=33 status=ok
// SIG undefined FUN_14013fdc0(void)

void FUN_14013fdc0(longlong param_1)

{
  FUN_14013fde2();
  FUN_14013fe7a(param_1 + 0x130);
  return;
}



// FUNCTION 14013fde2 FUN_14013fde2 body=151 status=ok
// SIG undefined FUN_14013fde2(void)

void FUN_14013fde2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  FUN_144846d14();
  lVar4 = *(longlong *)(param_1 + 0x180);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
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
  return;
}



// FUNCTION 14013fe7a FUN_14013fe7a body=347 status=ok
// SIG undefined FUN_14013fe7a(void)

void FUN_14013fe7a(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = 0;
  bVar11 = true;
  do {
    bVar10 = bVar11;
    lVar6 = lVar6 * 0x10;
    lVar2 = param_1 + 0x18 + lVar6;
    lVar5 = *(longlong *)(param_1 + 0x18 + lVar6);
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x20 + lVar6) != 0)) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      local_40 = *(longlong *)(lVar2 + 8);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_48 = lVar5;
      if (DAT_14cae1358 != -1) {
        FUN_14014008e(&local_48);
      }
      lVar6 = local_40;
      if (local_40 != 0) {
        LOCK();
        puVar1 = (uint *)(local_40 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_40 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_40 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar6;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar11 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar11) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar11);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar11 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar11) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar11);
            }
          }
        }
      }
      if (local_48 != 0) {
        LOCK();
        puVar1 = (uint *)(local_48 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    FUN_14013ffd6(lVar2);
    lVar6 = 1;
    bVar11 = false;
  } while (bVar10);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14013ffd6 FUN_14013ffd6 body=184 status=ok
// SIG undefined FUN_14013ffd6(void)

void FUN_14013ffd6(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    param_1[1] = 0;
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
  return;
}



// FUNCTION 14014008e FUN_14014008e body=459 status=ok
// SIG undefined FUN_14014008e(void)

void FUN_14014008e(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  uVar7 = DAT_14c7590b0;
  uVar3 = *(uint *)(*param_1 + 0x20);
  uVar13 = 0;
  uVar12 = 0x12;
  do {
    uVar11 = uVar13 + uVar12 >> 1;
    uVar8 = uVar11;
    if (uVar3 <= (uint)(&DAT_14a913650)[uVar11 - 1]) {
      uVar8 = uVar13;
      uVar12 = uVar11;
    }
    uVar13 = uVar8;
  } while (1 < uVar12 - uVar13);
  uVar12 = DAT_14c7590b0 % 3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae0e98);
  lVar15 = (ulonglong)uVar13 * 0x10 + (ulonglong)uVar12 * 0x120;
  plVar14 = (longlong *)(&DAT_14cae0e88 + lVar15 + 0x158);
  iVar4 = *(int *)(&DAT_14cae0e88 + lVar15 + 0x160);
  *(uint *)(&DAT_14cae0e88 + lVar15 + 0x160) = iVar4 + 1U;
  if (*(uint *)(&DAT_14cae0e88 + lVar15 + 0x164) < iVar4 + 1U) {
    FUN_14017503a(plVar14,iVar4);
  }
  plVar14 = (longlong *)(*plVar14 + (longlong)iVar4 * 0x18);
  *plVar14 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  lVar15 = CONCAT44(uVar7,uVar3);
  plVar14[1] = lVar6;
  if (lVar6 == 0) {
    plVar14[2] = lVar15;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae0e98);
  }
  else {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    plVar14[2] = lVar15;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae0e98);
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar6 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar6;
        plVar14 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar14;
            LOCK();
            bVar16 = plVar14 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar16) {
              plVar14 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar16 = plVar10 != DAT_14ca843c8;
            plVar14 = plVar9;
            if (bVar16) {
              plVar10 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14014025a FUN_14014025a body=105 status=ok
// SIG undefined FUN_14014025a(void)

void FUN_14014025a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140140310();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1401402c4(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401402c4 FUN_1401402c4 body=76 status=ok
// SIG undefined FUN_1401402c4(void)

void FUN_1401402c4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140140310();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140140301;
    }
  }
  lVar2 = 0;
LAB_140140301:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140140310 FUN_140140310 body=228 status=ok
// SIG undefined FUN_140140310(void)

longlong FUN_140140310(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad8a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147a95d6e;
    local_40 = FUN_1463c8001;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"ViewportStatsSubsystem",&DAT_14cad8a28,FUN_1463c7fda);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad8a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401403f6 FUN_1401403f6 body=3219 status=ok
// SIG undefined FUN_1401403f6(void)

undefined8 FUN_1401403f6(longlong param_1,char *param_2)

{
  void *_Dst;
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  LARGE_INTEGER LVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  LPCRITICAL_SECTION p_Var21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  bool bVar31;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  LPCRITICAL_SECTION local_98;
  longlong local_90;
  char *local_88;
  longlong *local_80;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c75f5d0 == '\x01') {
    local_78.QuadPart = 0;
    uStack_70 = (longlong **)0x0;
    p_Var21 = (LPCRITICAL_SECTION)(param_2 + 0x18);
    EnterCriticalSection(p_Var21);
    FUN_144b07d40(param_2);
    if (*param_2 == '\x01') {
      local_98 = p_Var21;
      if ((longlong)*(int *)(param_2 + 0x48) != 0) {
        lVar28 = *(longlong *)(param_2 + 0x40);
        lVar29 = lVar28 + (longlong)*(int *)(param_2 + 0x48) * 0x28;
        local_a0 = param_1;
        local_88 = param_2;
        do {
          iVar19 = *(int *)(lVar28 + 0x10);
          if (0 < (longlong)iVar19) {
            iVar15 = -iVar19;
            uVar20 = (longlong)iVar19;
            do {
              plVar13 = *(longlong **)(*(longlong *)(lVar28 + 8) + -8 + uVar20 * 8);
              if (*(char *)((longlong)plVar13 + 0xc6) == '\x01') {
                *(undefined4 *)(lVar28 + 4) = 0xffffffff;
                lVar26 = (longlong)(int)uStack_70;
                uVar9 = (int)uStack_70 + 1;
                uStack_70 = (longlong **)CONCAT44(uStack_70._4_4_,uVar9);
                if (uStack_70._4_4_ < uVar9) {
                  local_90 = lVar26;
                  FUN_140259550(&local_78,lVar26);
                  lVar26 = local_90;
                }
                *(longlong **)(local_78.QuadPart + lVar26 * 8) = plVar13;
                if (*(longlong **)(lVar28 + 0x18) == plVar13) {
                  if (*(longlong **)(lVar28 + 0x20) == plVar13) {
                    *(longlong *)(lVar28 + 0x18) = 0;
                    *(undefined8 *)(lVar28 + 0x20) = 0;
                  }
                  else {
                    lVar26 = *plVar13;
                    *(longlong *)(lVar28 + 0x18) = lVar26;
                    *(undefined8 *)(lVar26 + 8) = 0;
                    *plVar13 = 0;
                  }
                }
                else {
                  plVar30 = (longlong *)plVar13[1];
                  if (*(longlong **)(lVar28 + 0x20) == plVar13) {
                    *(longlong **)(lVar28 + 0x20) = plVar30;
                    *plVar30 = 0;
                    plVar13[1] = 0;
                  }
                  else {
                    *(longlong **)(*plVar13 + 8) = plVar30;
                    *plVar30 = *plVar13;
                    *plVar13 = 0;
                    plVar13[1] = 0;
                  }
                }
                uVar9 = *(uint *)(lVar28 + 0x10);
                if (uVar20 != uVar9) {
                  memmove((void *)(*(longlong *)(lVar28 + 8) + uVar20 * 8 + -8),
                          (void *)(*(longlong *)(lVar28 + 8) + uVar20 * 8),
                          (longlong)(int)(uVar9 + iVar15) << 3);
                  uVar9 = *(uint *)(lVar28 + 0x10);
                }
                *(uint *)(lVar28 + 0x10) = uVar9 - 1;
              }
              iVar15 = iVar15 + 1;
              bVar31 = 1 < uVar20;
              uVar20 = uVar20 - 1;
            } while (bVar31);
          }
          lVar28 = lVar28 + 0x28;
        } while (lVar28 != lVar29);
        iVar19 = *(int *)(local_88 + 0x48);
        lVar29 = (longlong)iVar19;
        param_2 = local_88;
        param_1 = local_a0;
        if (lVar29 != 0) {
          lVar28 = *(longlong *)(local_88 + 0x40);
          iVar18 = 0;
          bVar31 = *(int *)(lVar28 + 0x10) == 0;
          iVar15 = 0;
          do {
            lVar26 = (longlong)iVar15;
            iVar22 = iVar15 + 1;
            if (iVar15 + 1 < iVar19) {
              iVar22 = iVar19;
            }
            piVar24 = (int *)(lVar28 + 0x38 + lVar26 * 0x28);
            iVar16 = iVar15;
            lVar27 = lVar26;
            do {
              lVar27 = lVar27 + 1;
              iVar17 = iVar22;
              if (lVar29 <= lVar27) break;
              iVar1 = *piVar24;
              iVar16 = iVar16 + 1;
              piVar24 = piVar24 + 10;
              iVar17 = iVar16;
            } while (bVar31 == (iVar1 == 0));
            if (bVar31 == false) {
              if (iVar18 != iVar15) {
                memmove((void *)(lVar28 + (longlong)iVar18 * 0x28),(void *)(lVar28 + lVar26 * 0x28),
                        (longlong)(iVar17 - iVar15) * 0x28);
              }
              iVar18 = iVar18 + (iVar17 - iVar15);
            }
            else {
              FUN_1417366bc(lVar28 + lVar26 * 0x28);
            }
            bVar31 = (bool)(bVar31 ^ 1);
            iVar15 = iVar17;
          } while (lVar27 < lVar29);
          *(int *)(local_88 + 0x48) = iVar18;
          param_2 = local_88;
          param_1 = local_a0;
        }
      }
LAB_140140806:
      lVar29 = (longlong)(int)uStack_70;
      p_Var21 = local_98;
      if (lVar29 != 0) {
LAB_140140815:
        LVar10 = local_78;
        do {
          lVar28 = *(longlong *)LVar10;
          *(undefined4 *)(lVar28 + 200) = 2;
          LOCK();
          piVar24 = (int *)(*(longlong *)(lVar28 + 0x10) + 0x30);
          *piVar24 = *piVar24 + 1;
          UNLOCK();
          LVar10.QuadPart = LVar10.QuadPart + 8;
          p_Var21 = local_98;
        } while ((longlong *)LVar10.QuadPart != (longlong *)(local_78.QuadPart + lVar29 * 8));
      }
    }
    else {
      iVar19 = *(int *)(param_2 + 0x10);
      if (0 < (longlong)iVar19) {
        iVar15 = -iVar19;
        uVar20 = (longlong)iVar19;
        local_98 = p_Var21;
        do {
          lVar29 = *(longlong *)(*(longlong *)(param_2 + 8) + -8 + uVar20 * 8);
          if (*(char *)(lVar29 + 0xc6) == '\x01') {
            lVar28 = (longlong)(int)uStack_70;
            uVar9 = (int)uStack_70 + 1;
            uStack_70 = (longlong **)CONCAT44(uStack_70._4_4_,uVar9);
            if (uStack_70._4_4_ < uVar9) {
              FUN_140259550(&local_78);
            }
            *(longlong *)(local_78.QuadPart + lVar28 * 8) = lVar29;
            uVar9 = *(uint *)(param_2 + 0x10);
            if (uVar20 != uVar9) {
              memmove((void *)(*(longlong *)(param_2 + 8) + uVar20 * 8 + -8),
                      (void *)(*(longlong *)(param_2 + 8) + uVar20 * 8),
                      (longlong)(int)(uVar9 + iVar15) << 3);
              uVar9 = *(uint *)(param_2 + 0x10);
            }
            iVar19 = uVar9 - 1;
            *(int *)(param_2 + 0x10) = iVar19;
          }
          iVar15 = iVar15 + 1;
          bVar31 = 1 < uVar20;
          uVar20 = uVar20 - 1;
        } while (bVar31);
        lVar29 = (longlong)(int)uStack_70;
        p_Var21 = local_98;
        if (lVar29 != 0) {
          if (iVar19 != 0) {
            lVar29 = *(longlong *)(param_2 + 8);
            iVar15 = (iVar19 - (iVar19 + -2 >> 0x1f)) + -2 >> 1;
            iVar18 = iVar15;
joined_r0x000140140747:
            do {
              iVar22 = iVar15 * 2 + 1;
              if (iVar22 < iVar19) {
                iVar16 = iVar15 * 2 + 2;
                if (iVar16 < iVar19) {
                  lVar28 = *(longlong *)(lVar29 + (longlong)iVar16 * 8);
                  lVar26 = *(longlong *)(lVar29 + (longlong)iVar22 * 8);
                  iVar1 = *(int *)(lVar26 + 0x94);
                  iVar17 = *(int *)(lVar28 + 0x94);
                  bVar31 = iVar17 < iVar1;
                  if (iVar1 == iVar17) {
                    bVar31 = *(uint *)(lVar26 + 0x90) < *(uint *)(lVar28 + 0x90);
                  }
                  if (!bVar31) {
                    iVar22 = iVar16;
                  }
                }
                lVar28 = *(longlong *)(lVar29 + (longlong)iVar15 * 8);
                lVar26 = *(longlong *)(lVar29 + (longlong)iVar22 * 8);
                bVar31 = *(int *)(lVar28 + 0x94) < *(int *)(lVar26 + 0x94);
                if (*(int *)(lVar26 + 0x94) == *(int *)(lVar28 + 0x94)) {
                  bVar31 = *(uint *)(lVar26 + 0x90) < *(uint *)(lVar28 + 0x90);
                }
                if (bVar31) {
                  *(longlong *)(lVar29 + (longlong)iVar15 * 8) = lVar26;
                  *(longlong *)(lVar29 + (longlong)iVar22 * 8) = lVar28;
                  iVar15 = iVar22;
                  goto joined_r0x000140140747;
                }
              }
              bVar31 = iVar18 != 0;
              iVar15 = iVar18 + -1;
              iVar18 = iVar15;
            } while (bVar31);
            goto LAB_140140806;
          }
          goto LAB_140140815;
        }
      }
    }
    LeaveCriticalSection(p_Var21);
    if ((int)uStack_70 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      if ((longlong)(int)uStack_70 != 0) {
        lVar29 = 0;
        do {
          puVar3 = *(undefined8 **)(local_78.QuadPart + lVar29);
          if (*(undefined8 **)(param_1 + 0x68) == (undefined8 *)0x0) {
            *(undefined8 **)(param_1 + 0x60) = puVar3;
            uVar12 = 0;
          }
          else {
            **(undefined8 **)(param_1 + 0x68) = puVar3;
            uVar12 = *(undefined8 *)(param_1 + 0x68);
          }
          puVar3[1] = uVar12;
          *(undefined8 **)(param_1 + 0x68) = puVar3;
          *puVar3 = 0;
          lVar29 = lVar29 + 8;
        } while ((longlong)(int)uStack_70 * 8 != lVar29);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      if (*(int *)(*(undefined8 **)(param_1 + 8) + 1) == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)**(undefined8 **)(param_1 + 8);
      }
      (**(code **)(*plVar13 + 0x58))();
    }
    if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar29 = *(longlong *)(param_1 + 0x18);
    p_Var21 = (LPCRITICAL_SECTION)(lVar29 + 0x18);
    EnterCriticalSection(p_Var21);
    puVar3 = *(undefined8 **)(lVar29 + 0x40);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar29 + 0x40) = *puVar3;
      LeaveCriticalSection(p_Var21);
      *(undefined8 **)(param_1 + 0x30) = puVar3;
      goto LAB_14014090b;
    }
    LeaveCriticalSection(p_Var21);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
LAB_14014090b:
    p_Var21 = (LPCRITICAL_SECTION)(param_2 + 0x18);
    EnterCriticalSection(p_Var21);
    FUN_144b07d40(param_2);
    if (*param_2 == '\x01') {
      if (*(int *)(param_2 + 0x48) == 0) {
LAB_140140b60:
        LeaveCriticalSection(p_Var21);
        goto LAB_140140e0c;
      }
      lVar29 = (longlong)(*(int *)(param_2 + 0x48) + -1);
      piVar24 = (int *)(*(longlong *)(param_2 + 0x40) + lVar29 * 0x28);
      uVar9 = piVar24[4];
      local_a0 = param_1;
      if (uVar9 == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar30 = (longlong *)(*(longlong *)(param_2 + 0x40) + lVar29 * 0x28 + 8);
        uVar25 = piVar24[1];
        if (uVar25 == 0xffffffff) {
          uVar20 = *(ulonglong *)(param_2 + 0x50);
          uVar4 = *(ulonglong *)(param_2 + 0x58);
          iVar19 = *(int *)(param_2 + 0x60);
          if (DAT_14c99fe58 < 1) {
            bVar31 = false;
          }
          else {
            dVar7 = ((double)DAT_14c99fe58 * 1000.0) / DAT_14c83f418;
            uVar11 = (ulonglong)dVar7;
            QueryPerformanceCounter(&local_78);
            bVar31 = ((longlong)(dVar7 - 9.223372036854776e+18) & (longlong)uVar11 >> 0x3f | uVar11)
                     <= (ulonglong)
                        (local_78.QuadPart - *(longlong *)(*(longlong *)(piVar24 + 6) + 0x98));
          }
          if (((uVar4 == 0) || (bVar31)) || ((DAT_14c75f5e8 == 0 && (iVar19 != *piVar24)))) {
LAB_140140c0f:
            uVar9 = piVar24[4];
            lVar29 = *(longlong *)(piVar24 + 2);
          }
          else {
            uVar9 = piVar24[4];
            lVar29 = *(longlong *)(piVar24 + 2);
            if (0 < (int)uVar9) {
              uVar14 = 0;
              uVar11 = (ulonglong)uVar9;
              uVar23 = uVar9;
              do {
                uVar11 = uVar11 >> 1;
                uVar25 = (uint)uVar11 + (int)uVar14;
                lVar28 = *(longlong *)(lVar29 + (ulonglong)uVar25 * 8);
                uVar5 = **(ulonglong **)(lVar28 + 0x10);
                bVar31 = uVar5 < uVar4;
                if (uVar5 == uVar4) {
                  bVar31 = *(ulonglong *)(lVar28 + 0x18) < uVar20;
                }
                if (bVar31) {
                  uVar14 = (ulonglong)(uVar25 + (uVar23 & 1));
                }
                uVar25 = (uint)uVar14;
                bVar31 = 1 < uVar23;
                uVar23 = (uint)uVar11;
              } while (bVar31);
              if ((((int)uVar25 < (int)uVar9) &&
                  (lVar28 = *(longlong *)(lVar29 + uVar14 * 8),
                  **(ulonglong **)(lVar28 + 0x10) == uVar4)) &&
                 (((longlong)DAT_14c99fe40 < 1 ||
                  (uVar20 - *(longlong *)(lVar28 + 0x18) <=
                   (ulonglong)((longlong)DAT_14c99fe40 * 0x400))))) goto LAB_140140c46;
              goto LAB_140140c0f;
            }
          }
          uVar25 = 0xffffffff;
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            lVar26 = (longlong)(int)uVar9 << 3;
            lVar28 = 0;
            do {
              if (*(longlong *)(lVar29 + lVar28 * 8) == *(longlong *)(piVar24 + 6)) {
                uVar25 = (uint)lVar28;
                break;
              }
              lVar28 = lVar28 + 1;
              lVar26 = lVar26 + -8;
            } while (lVar26 != 0);
          }
        }
        else {
          lVar29 = *plVar30;
        }
LAB_140140c46:
        plVar13 = *(longlong **)(lVar29 + (longlong)(int)uVar25 * 8);
        if (~uVar25 + uVar9 != 0) {
          _Dst = (void *)(lVar29 + (longlong)(int)uVar25 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar25 + uVar9) << 3);
          uVar9 = piVar24[4];
        }
        piVar24[4] = uVar9 - 1;
        FUN_144aa7916(plVar30);
        if (*(longlong **)(piVar24 + 6) == plVar13) {
          if (*(longlong **)(piVar24 + 8) == plVar13) {
            *(longlong *)(piVar24 + 6) = 0;
            piVar24[8] = 0;
            piVar24[9] = 0;
          }
          else {
            lVar29 = *plVar13;
            *(longlong *)(piVar24 + 6) = lVar29;
            *(undefined8 *)(lVar29 + 8) = 0;
            *plVar13 = 0;
          }
        }
        else {
          plVar30 = (longlong *)plVar13[1];
          if (*(longlong **)(piVar24 + 8) == plVar13) {
            *(longlong **)(piVar24 + 8) = plVar30;
            *plVar30 = 0;
            plVar13[1] = 0;
          }
          else {
            *(longlong **)(*plVar13 + 8) = plVar30;
            *plVar30 = *plVar13;
            *plVar13 = 0;
            plVar13[1] = 0;
          }
        }
        piVar24[1] = -1;
      }
      uVar12 = *(undefined8 *)plVar13[2];
      uVar2 = *(undefined4 *)((longlong)plVar13 + 0x94);
      *(longlong *)(param_2 + 0x50) = plVar13[3];
      *(undefined8 *)(param_2 + 0x58) = uVar12;
      *(undefined4 *)(param_2 + 0x60) = uVar2;
      param_1 = local_a0;
      if (piVar24[4] == 0) {
        lVar29 = *(longlong *)(param_2 + 0x40);
        lVar26 = (longlong)*(int *)(param_2 + 0x48);
        lVar28 = *(longlong *)(lVar29 + -0x20 + lVar26 * 0x28);
        puVar3 = (undefined8 *)(lVar29 + -0x10 + lVar26 * 0x28);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = (undefined8 *)(lVar29 + -0x20 + lVar26 * 0x28);
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar19 = *(int *)(param_2 + 0x48);
        lVar26 = (longlong)iVar19;
        lVar29 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(lVar29 + -0x20 + lVar26 * 0x28) != 0) {
          FUN_1400020a8();
          if (*(int *)(param_2 + 0x48) - iVar19 != 0) {
            memmove((void *)(lVar29 + lVar26 * 0x28 + -0x28),(void *)(lVar29 + lVar26 * 0x28),
                    (longlong)(*(int *)(param_2 + 0x48) - iVar19) * 0x28);
            iVar19 = *(int *)(param_2 + 0x48);
          }
        }
        *(int *)(param_2 + 0x48) = iVar19 + -1;
        FUN_1417372da(param_2 + 0x40);
        param_1 = local_a0;
        if (lVar28 != 0) {
          FUN_1400020a8(lVar28);
          param_1 = local_a0;
        }
      }
    }
    else {
      iVar19 = *(int *)(param_2 + 0x10);
      if (iVar19 == 0) goto LAB_140140b60;
      puVar3 = *(undefined8 **)(param_2 + 8);
      plVar13 = (longlong *)*puVar3;
      iVar15 = iVar19 + -1;
      if (iVar15 == 0) {
        param_2[0x10] = '\0';
        param_2[0x11] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
      }
      else {
        iVar18 = 1;
        if (0 < iVar15) {
          iVar15 = 1;
        }
        memmove(puVar3,puVar3 + (iVar19 - iVar15),(longlong)iVar15 << 3);
        iVar15 = *(int *)(param_2 + 0x10);
        lVar29 = *(longlong *)(param_2 + 8);
        iVar19 = iVar15 + -1;
        *(int *)(param_2 + 0x10) = iVar19;
        if (2 < iVar15) {
          iVar15 = 0;
          iVar22 = 0;
          do {
            iVar15 = iVar15 + 2;
            iVar16 = iVar18;
            if (iVar15 < iVar19) {
              lVar28 = *(longlong *)(lVar29 + (longlong)iVar15 * 8);
              lVar26 = *(longlong *)(lVar29 + (longlong)iVar18 * 8);
              iVar17 = *(int *)(lVar26 + 0x94);
              iVar18 = *(int *)(lVar28 + 0x94);
              bVar31 = iVar18 < iVar17;
              if (iVar17 == iVar18) {
                bVar31 = *(uint *)(lVar26 + 0x90) < *(uint *)(lVar28 + 0x90);
              }
              if (!bVar31) {
                iVar16 = iVar15;
              }
            }
            lVar28 = *(longlong *)(lVar29 + (longlong)iVar22 * 8);
            lVar26 = *(longlong *)(lVar29 + (longlong)iVar16 * 8);
            bVar31 = *(int *)(lVar28 + 0x94) < *(int *)(lVar26 + 0x94);
            if (*(int *)(lVar26 + 0x94) == *(int *)(lVar28 + 0x94)) {
              bVar31 = *(uint *)(lVar26 + 0x90) < *(uint *)(lVar28 + 0x90);
            }
            if (!bVar31) break;
            *(longlong *)(lVar29 + (longlong)iVar22 * 8) = lVar26;
            *(longlong *)(lVar29 + (longlong)iVar16 * 8) = lVar28;
            iVar15 = iVar16 * 2;
            iVar18 = iVar16 * 2 + 1;
            iVar22 = iVar16;
          } while (iVar18 < iVar19);
        }
      }
    }
    *(undefined4 *)(plVar13 + 0x19) = 2;
    LOCK();
    *(int *)(plVar13[2] + 0x30) = *(int *)(plVar13[2] + 0x30) + 1;
    UNLOCK();
    LeaveCriticalSection(p_Var21);
    if (plVar13 != (longlong *)0x0) {
      if (*(char *)((longlong)plVar13 + 0xc5) == '\0' && *(char *)((longlong)plVar13 + 0xc6) == '\0'
         ) {
        plVar13[6] = *(longlong *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = 0;
        uVar12 = *(undefined8 *)(plVar13[6] + 8);
        lVar29 = *(longlong *)(param_1 + 0x20);
        if ((*(longlong *)(lVar29 + 8) != 0) && (*(int *)(lVar29 + 0x18) != *(int *)(lVar29 + 0x44))
           ) {
          lVar28 = plVar13[5];
          lVar26 = lVar29 + 0x48;
          if (*(longlong *)(lVar29 + 0x50) != 0) {
            lVar26 = *(longlong *)(lVar29 + 0x50);
          }
          iVar19 = *(int *)(lVar26 + (ulonglong)
                                     (*(int *)(lVar29 + 0x58) - 1U &
                                     (int)lVar28 + (int)((ulonglong)lVar28 >> 0x20) * 0x17) * 4);
          if (iVar19 != -1) {
            do {
              plVar30 = (longlong *)(*(longlong *)(lVar29 + 0x10) + (longlong)iVar19 * 0x18);
              if (*plVar30 == lVar28) {
                if ((plVar30 != (longlong *)0x0) &&
                   (plVar30 = (longlong *)plVar30[1], plVar30 != (longlong *)0x0)) {
                  plVar6 = (longlong *)plVar30[1];
                  *(longlong **)(*plVar30 + 8) = plVar6;
                  *plVar6 = *plVar30;
                  *plVar30 = lVar29 + 0x60;
                  plVar30[1] = *(longlong *)(lVar29 + 0x68);
                  *(longlong **)(lVar29 + 0x68) = plVar30;
                  *(longlong **)plVar30[1] = plVar30;
                  memcpy(*(void **)(plVar13[6] + 8),(void *)plVar30[3],*(size_t *)(lVar29 + 0xa0));
                  goto LAB_140140e28;
                }
                break;
              }
              iVar19 = (int)plVar30[2];
            } while (iVar19 != -1);
          }
        }
        plVar30 = *(longlong **)plVar13[2];
        *(undefined1 *)((longlong)plVar13 + 0xc5) = 1;
        iVar19 = 10;
        do {
          cVar8 = (**(code **)(*plVar30 + 0x10))(plVar30,plVar13[3]);
          if ((cVar8 != '\0') &&
             (cVar8 = (**(code **)(*plVar30 + 0x20))(plVar30,uVar12,plVar13[4]), cVar8 != '\0')) {
            *(undefined1 *)((longlong)plVar13 + 0xc5) = 0;
            lVar29 = *(longlong *)(param_1 + 0x20);
            if ((*(longlong *)(lVar29 + 8) != 0) &&
               ((ulonglong)*(uint *)(plVar13 + 0x18) < (ulonglong)plVar13[4])) {
              plVar30 = *(longlong **)(lVar29 + 0x80);
              local_80 = plVar30;
              if (plVar30 != (longlong *)(lVar29 + 0x60)) {
                FUN_147080e98(lVar29 + 0x10,plVar30[2]);
                plVar30[2] = plVar13[5];
                plVar6 = (longlong *)plVar30[1];
                *(longlong **)(*plVar30 + 8) = plVar6;
                *plVar6 = *plVar30;
                *plVar30 = lVar29 + 0x60;
                plVar30[1] = *(longlong *)(lVar29 + 0x68);
                *(longlong **)(lVar29 + 0x68) = plVar30;
                *(longlong **)plVar30[1] = plVar30;
                memcpy((void *)plVar30[3],*(void **)(plVar13[6] + 8),*(size_t *)(lVar29 + 0xa0));
                uStack_70 = &local_80;
                local_78.QuadPart = (LONGLONG)(plVar30 + 2);
                FUN_147080fc8(lVar29 + 0x10,local_64);
              }
            }
            break;
          }
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
LAB_140140e28:
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      if (*(undefined8 **)(param_1 + 0x68) == (undefined8 *)0x0) {
        *(longlong **)(param_1 + 0x60) = plVar13;
        lVar29 = 0;
      }
      else {
        **(undefined8 **)(param_1 + 0x68) = plVar13;
        lVar29 = *(longlong *)(param_1 + 0x68);
      }
      plVar13[1] = lVar29;
      *(longlong **)(param_1 + 0x68) = plVar13;
      *plVar13 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
      if (*(int *)(*(undefined8 **)(param_1 + 8) + 1) == 0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)**(undefined8 **)(param_1 + 8);
      }
      (**(code **)(*plVar13 + 0x58))();
      uVar12 = 1;
      goto LAB_140140e80;
    }
  }
LAB_140140e0c:
  uVar12 = 0;
LAB_140140e80:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14014108a FUN_14014108a body=316 status=ok
// SIG undefined FUN_14014108a(void)

void FUN_14014108a(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar6 = param_1 + 0x40;
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      plVar1 = (longlong *)(param_1 + 8);
      do {
        lVar6 = *plVar1 + (longlong)iVar5 * 0x20;
        if (*(uint *)(*plVar1 + (longlong)iVar5 * 0x20) == param_2) {
          if (lVar6 == 0) {
            return;
          }
          if (lVar6 == -8) {
            return;
          }
          puVar3 = *(undefined8 **)(lVar6 + 0x10);
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar6 + 0x10) = 0;
            LOCK();
            piVar9 = (int *)(puVar3 + 1);
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
            return;
          }
          lVar6 = param_1 + 0x40;
          if (*(longlong *)(param_1 + 0x48) != 0) {
            lVar6 = *(longlong *)(param_1 + 0x48);
          }
          iVar5 = *(int *)(lVar6 + ((longlong)(int)param_2 & (longlong)*(int *)(param_1 + 0x50) - 1U
                                   ) * 4);
          if (iVar5 == -1) {
            return;
          }
          lVar4 = *plVar1;
          do {
            lVar7 = (longlong)iVar5 * 0x20;
            lVar2 = lVar4 + lVar7;
            if (*(uint *)(lVar4 + lVar7) == param_2) {
              iVar8 = *(int *)(lVar6 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
              if (iVar8 == iVar5) {
                piVar9 = (int *)(lVar6 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
              }
              else {
                do {
                  piVar9 = (int *)(lVar4 + (longlong)iVar8 * 0x20 + 0x18);
                  iVar8 = *piVar9;
                } while (iVar8 != iVar5);
              }
              *piVar9 = *(int *)(lVar2 + 0x18);
              puVar3 = *(undefined8 **)(*plVar1 + 0x10 + lVar7);
              if (puVar3 != (undefined8 *)0x0) {
                LOCK();
                piVar9 = (int *)(puVar3 + 1);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)*puVar3)(puVar3,1);
                }
              }
              FUN_1401411c6(plVar1,iVar5);
              return;
            }
            iVar5 = *(int *)(lVar2 + 0x18);
          } while (iVar5 != -1);
          return;
        }
        iVar5 = *(int *)(lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1401411c6 FUN_1401411c6 body=114 status=ok
// SIG undefined FUN_1401411c6(void)

void FUN_1401411c6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140141238 FUN_140141238 body=70 status=ok
// SIG undefined FUN_140141238(void)

char FUN_140141238(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  
  fVar2 = (float)FUN_14014127e(param_3);
  fVar3 = *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28);
  if (fVar2 < fVar3) {
    cVar1 = '\0';
  }
  else {
    FUN_14014127e(param_1 + 0x30);
    cVar1 = (extraout_XMM0_Da < fVar3) * '\x02';
  }
  return cVar1;
}



// FUNCTION 14014127e FUN_14014127e body=97 status=ok
// SIG undefined FUN_14014127e(void)

ulonglong FUN_14014127e(double *param_1)

{
  byte bVar1;
  double dVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 2) {
    dVar2 = *param_1 * *param_1;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return 0;
      }
      return (ulonglong)
             (uint)(float)(param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1]);
    }
    dVar2 = *param_1 * *param_1 + param_1[1] * param_1[1];
  }
  return CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
}



// FUNCTION 1401412e0 FUN_1401412e0 body=1526 status=ok
// SIG undefined FUN_1401412e0(void)

undefined8 *
FUN_1401412e0(longlong *param_1,undefined8 *param_2,char param_3,undefined4 param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  
  if ((byte *)*param_1 == (byte *)0x0) {
    *param_2 = 0;
    lVar22 = param_1[1];
    param_2[1] = lVar22;
    if (lVar22 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  bVar16 = *(byte *)*param_1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14009b010(param_2,bVar16 & 3,param_5);
  pbVar8 = (byte *)*param_2;
  uVar6 = *(undefined4 *)*param_1;
  *(undefined4 *)pbVar8 = uVar6;
  pbVar8[3] = pbVar8[3] & 0x18 | (byte)((uint)uVar6 >> 0x18) & 0xe7;
  pbVar8[1] = (byte)((uint)uVar6 >> 8) & 0xfd;
  *(undefined2 *)(pbVar8 + 0x20) = *(undefined2 *)(*param_1 + 0x20);
  *(undefined8 *)(pbVar8 + 0x28) = *(undefined8 *)(*param_1 + 0x28);
  *(undefined4 *)(pbVar8 + 0x24) = *(undefined4 *)(*param_1 + 0x24);
  *(undefined4 *)(pbVar8 + 4) = *(undefined4 *)(*param_1 + 4);
  pbVar12 = (byte *)*param_1;
  bVar16 = *pbVar12;
  if ((bVar16 & 3) == 1) {
    lVar22 = *(longlong *)(pbVar12 + 0x10);
    if (lVar22 == 0) {
      if (*(longlong *)(pbVar12 + 8) == 0) goto LAB_1401413a4;
      uVar11 = FUN_1401418d6();
    }
    else {
      if (*(longlong *)(pbVar12 + 0x18) == 0) {
        uVar11 = 0;
      }
      else {
        LOCK();
        piVar1 = (int *)(*(longlong *)(pbVar12 + 0x18) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar22 = *(longlong *)(pbVar12 + 0x10);
        uVar11 = *(undefined8 *)(pbVar12 + 0x18);
      }
      *(longlong *)(pbVar8 + 0x10) = lVar22;
      plVar26 = *(longlong **)(pbVar8 + 0x18);
      *(undefined8 *)(pbVar8 + 0x18) = uVar11;
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar26 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar1 = (int *)((longlong)plVar26 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      uVar11 = *(undefined8 *)(*param_1 + 8);
    }
    *(undefined8 *)(pbVar8 + 8) = uVar11;
    pbVar12 = (byte *)*param_1;
    bVar16 = *pbVar12;
  }
LAB_1401413a4:
  if ((bVar16 & 2) != 0) {
    if (param_3 == '\0') {
      if ((*pbVar8 & 2) == 0) {
        puVar15 = &DAT_14c9a1288;
      }
      else {
        puVar15 = (undefined8 *)(*(longlong *)(pbVar8 + 8) + 0x18);
      }
      FUN_140142078(puVar15,*(longlong *)(pbVar12 + 8) + 0x18);
      puVar27 = &DAT_14c9a1270;
      puVar15 = &DAT_14c9a1270;
      if ((*(byte *)*param_1 & 2) != 0) {
        puVar15 = *(undefined8 **)((byte *)*param_1 + 8);
      }
      if ((*pbVar8 & 2) != 0) {
        puVar27 = *(undefined8 **)(pbVar8 + 8);
      }
      if (puVar27 != puVar15) {
        FUN_14474dad8(*puVar27,*(undefined4 *)(puVar27 + 2));
        iVar10 = *(int *)(puVar15 + 2);
        uVar11 = *puVar15;
        *(int *)(puVar27 + 2) = iVar10;
        if (iVar10 == 0 && *(int *)((longlong)puVar27 + 0x14) == 0) {
          *(undefined4 *)((longlong)puVar27 + 0x14) = 0;
        }
        else {
          FUN_145de92b4(puVar27,iVar10);
          FUN_14709b573(*puVar27,uVar11,iVar10);
        }
      }
    }
    else {
      bVar16 = *pbVar8;
      if ((bVar16 & 3) == 3) {
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar2 = (undefined4 *)(lVar22 + 0xc7c);
        uVar6 = *puVar2;
        pbVar3 = (byte *)(lVar22 + 0xc80);
        bVar19 = param_5 == '\x01' & *pbVar3;
        if (bVar19 == 1) {
          *pbVar3 = 0;
          *puVar2 = 0xffffffff;
          bVar16 = *pbVar8;
        }
        puVar15 = &DAT_14c9a1288;
        puVar27 = &DAT_14c9a1288;
        if ((bVar16 & 2) != 0) {
          puVar27 = (undefined8 *)(*(longlong *)(pbVar8 + 8) + 0x18);
        }
        if ((*pbVar12 & 2) != 0) {
          puVar15 = (undefined8 *)(*(longlong *)(pbVar12 + 8) + 0x18);
        }
        uVar24 = (longlong)*(int *)(puVar15 + 2) - (longlong)*(int *)((longlong)puVar15 + 0x3c);
        uVar14 = (uint)uVar24;
        if ((uint)(*(int *)(puVar27 + 2) - *(int *)((longlong)puVar27 + 0x3c)) < uVar14) {
          if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b(uVar24);
          }
          FUN_144846f0c(puVar27,uVar24 & 0xffffffff);
          iVar10 = 1;
          if (3 < uVar14) {
            uVar14 = (uVar14 | 1) + 0xe;
            iVar10 = 0x1f;
            if (uVar14 != 0) {
              for (; uVar14 >> iVar10 == 0; iVar10 = iVar10 + -1) {
              }
            }
            iVar10 = 1 << ((byte)iVar10 & 0x1f);
          }
          if ((*(int *)(puVar27 + 10) == 0) || (*(int *)(puVar27 + 10) < iVar10)) {
            *(int *)(puVar27 + 10) = iVar10;
            FUN_1446eb800(puVar27);
          }
        }
        if (bVar19 != 0) {
          *puVar2 = uVar6;
          *pbVar3 = 1;
        }
        if ((*(byte *)*param_1 & 2) == 0) {
          plVar26 = &DAT_14c9a1288;
        }
        else {
          plVar26 = (longlong *)(*(longlong *)((byte *)*param_1 + 8) + 0x18);
        }
        iVar10 = (int)plVar26[6];
        if (iVar10 == 0) {
          uVar24 = 1;
          uVar25 = 0;
          iVar9 = 0;
          iVar20 = 0;
        }
        else {
          puVar13 = (uint *)plVar26[5];
          if ((uint *)plVar26[5] == (uint *)0x0) {
            puVar13 = (uint *)(plVar26 + 3);
          }
          uVar14 = *puVar13;
          if (uVar14 == 0) {
            iVar9 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar9 = iVar10 + -1;
            }
            uVar25 = 0;
            uVar24 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar24 = uVar25;
            }
            iVar20 = 0;
            do {
              if (uVar24 == uVar25) {
                return param_2;
              }
              iVar20 = iVar20 + 0x20;
              uVar14 = puVar13[uVar25 + 1];
              uVar25 = uVar25 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar25 = 0;
            iVar20 = 0;
          }
          uVar24 = (ulonglong)(-uVar14 & uVar14);
          uVar4 = uVar24 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar9 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar9) {
            iVar9 = iVar10;
          }
        }
        if (iVar9 != iVar10) {
          uVar14 = 0xffffffff;
          do {
            FUN_14014191c(pbVar8,*plVar26 + (longlong)iVar9 * 0x40,
                          *plVar26 + (longlong)iVar9 * 0x40 + 0x28,1,param_5);
            uVar14 = ~(uint)uVar24 & uVar14;
            puVar13 = (uint *)plVar26[5];
            if ((uint *)plVar26[5] == (uint *)0x0) {
              puVar13 = (uint *)(plVar26 + 3);
            }
            iVar7 = (int)plVar26[6];
            iVar9 = (int)uVar25;
            lVar22 = (longlong)iVar9;
            uVar21 = puVar13[lVar22] & uVar14;
            if (uVar21 == 0) {
              iVar17 = iVar7 + 0x1e;
              if (-1 < iVar7 + -1) {
                iVar17 = iVar7 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar18 = iVar17;
              if (iVar17 < iVar9) {
                iVar18 = iVar9;
              }
              if (iVar9 < iVar17) {
                lVar23 = 0;
                do {
                  uVar21 = puVar13[lVar22 + lVar23 + 1];
                  if (uVar21 != 0) {
                    uVar25 = (ulonglong)(iVar9 + (int)lVar23 + 1);
                    uVar14 = 0xffffffff;
                    goto LAB_1401415da;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar18 - lVar22 != lVar23);
                uVar14 = 0xffffffff;
                iVar9 = iVar18;
              }
              uVar25 = (ulonglong)(iVar9 + 1);
              iVar9 = iVar7;
            }
            else {
LAB_1401415da:
              uVar24 = (ulonglong)(-uVar21 & uVar21);
              uVar4 = uVar24 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              iVar9 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if (iVar7 <= iVar9) {
                iVar9 = iVar7;
              }
            }
          } while (iVar9 != iVar10);
        }
      }
      else if ((bVar16 & 3) == 2) {
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar2 = (undefined4 *)(lVar22 + 0xc7c);
        uVar6 = *puVar2;
        pbVar3 = (byte *)(lVar22 + 0xc80);
        bVar19 = param_5 == '\x01' & *pbVar3;
        if (bVar19 == 1) {
          *pbVar3 = 0;
          *puVar2 = 0xffffffff;
          bVar16 = *pbVar8;
        }
        puVar27 = &DAT_14c9a1270;
        puVar15 = &DAT_14c9a1270;
        if ((bVar16 & 2) != 0) {
          puVar15 = *(undefined8 **)(pbVar8 + 8);
        }
        if ((*pbVar12 & 2) != 0) {
          puVar27 = *(undefined8 **)(pbVar12 + 8);
        }
        iVar10 = *(int *)(puVar27 + 2);
        if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar10);
        }
        if (*(int *)((longlong)puVar15 + 0x14) < iVar10) {
          FUN_14009b4be();
        }
        if (bVar19 != 0) {
          *puVar2 = uVar6;
          *pbVar3 = 1;
        }
        if ((*(byte *)*param_1 & 2) == 0) {
          plVar26 = &DAT_14c9a1270;
        }
        else {
          plVar26 = *(longlong **)((byte *)*param_1 + 8);
        }
        if ((longlong)(int)plVar26[2] != 0) {
          lVar22 = *plVar26;
          lVar23 = (longlong)(int)plVar26[2] << 4;
          do {
            FUN_140141db6(pbVar8,lVar22,param_4,1,param_5);
            lVar22 = lVar22 + 0x10;
            lVar23 = lVar23 + -0x10;
          } while (lVar23 != 0);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1401418d6 FUN_1401418d6 body=69 status=ok
// SIG undefined FUN_1401418d6(void)

char * FUN_1401418d6(char *param_1)

{
  size_t sVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    if (0 < (int)sVar1) {
      uVar2 = (ulonglong)((int)sVar1 + 1);
      pcVar3 = (char *)FUN_14001cc68(uVar2 + (uVar2 == 0),0x10);
      pcVar3 = strcpy(pcVar3,param_1);
      return pcVar3;
    }
  }
  return (char *)0x0;
}



// FUNCTION 14014191c FUN_14014191c body=239 status=ok
// SIG undefined FUN_14014191c(void)

undefined8
FUN_14014191c(byte *param_1,undefined8 param_2,undefined8 *param_3,char param_4,undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  byte *local_40;
  longlong *local_38;
  undefined8 local_30;
  byte **local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((param_1[1] & 2) == 0) && ((~*param_1 & 3) == 0)) &&
      (pbVar3 = (byte *)*param_3, pbVar3 != (byte *)0x0)) && ((*pbVar3 & 3) != 0)) {
    lVar4 = *(longlong *)(param_1 + 8);
    if (param_4 == '\0') {
      local_38 = (longlong *)param_3[1];
      local_40 = pbVar3;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
    }
    else {
      local_48 = param_5;
      FUN_1401412e0(param_3,&local_40,1,0);
    }
    local_28 = &local_40;
    local_30 = param_2;
    FUN_140141a0c(lVar4 + 0x18,local_1c,&local_30,0);
    plVar5 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140141a0c FUN_140141a0c body=937 status=ok
// SIG undefined FUN_140141a0c(void)

uint * FUN_140141a0c(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  longlong *plVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  longlong *plVar27;
  uint uVar28;
  int iVar29;
  uint *puVar30;
  longlong lVar31;
  
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    uVar19 = *(uint *)(param_1 + 2);
    *(uint *)(param_1 + 2) = uVar19 + 1;
    if (*(uint *)((longlong)param_1 + 0x14) == uVar19) {
      FUN_1404a00f2(param_1,uVar19);
    }
    iVar26 = (int)param_1[6];
    if (iVar26 == 0) {
      iVar22 = -1;
    }
    else {
      iVar22 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar22 = iVar26 + -1;
      }
      iVar22 = iVar22 >> 5;
    }
    plVar20 = param_1 + 3;
    iVar24 = iVar26 + 1;
    iVar29 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar29 = iVar26;
    }
    if (iVar29 >> 5 == iVar22) {
      *(int *)(param_1 + 6) = iVar24;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x34) <= iVar26) {
        if (iVar26 + 0x20U < 0xa0) {
          iVar24 = 0x80;
          iVar22 = iVar26;
        }
        else {
          uVar23 = iVar26 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar28 = 4;
            if (4 < uVar23) {
              uVar28 = uVar23;
            }
          }
          else {
            uVar28 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar25 = FUN_144a3809e(uVar28 << 2,0);
          iVar22 = (int)(uVar25 >> 2);
          iVar24 = -0x20;
          if ((int)uVar23 <= iVar22) {
            iVar24 = iVar22 << 5;
          }
          iVar22 = (int)param_1[6];
        }
        *(int *)((longlong)param_1 + 0x34) = iVar24;
        FUN_1446efbd8(plVar20,iVar22);
        iVar24 = (int)param_1[6] + 1;
      }
      iVar22 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar22 = iVar24;
      }
      *(int *)(param_1 + 6) = iVar24;
      if (iVar24 % 0x20 != 0) {
        plVar27 = (longlong *)param_1[5];
        if ((longlong *)param_1[5] == (longlong *)0x0) {
          plVar27 = plVar20;
        }
        bVar21 = -(char)(iVar24 % 0x20);
        *(uint *)((longlong)plVar27 + (longlong)(iVar22 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar27 + (longlong)(iVar22 >> 5) * 4) << (bVar21 & 0x1f)) >>
             (bVar21 & 0x1f);
      }
    }
    lVar31 = (longlong)(int)uVar19;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[5];
    }
    bVar21 = (byte)iVar26 & 0x1f;
    puVar30 = (uint *)((longlong)plVar20 + (longlong)(iVar29 >> 5) * 4);
    *puVar30 = *puVar30 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
  }
  else {
    uVar19 = *(uint *)(param_1 + 7);
    lVar31 = (longlong)(int)uVar19;
    iVar26 = *(int *)(*param_1 + 4 + lVar31 * 0x40);
    *(int *)(param_1 + 7) = iVar26;
    iVar22 = *(int *)((longlong)param_1 + 0x3c) + -1;
    *(int *)((longlong)param_1 + 0x3c) = iVar22;
    if (iVar22 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar26 * 0x40) = 0xffffffff;
    }
  }
  plVar20 = param_1 + 3;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    plVar20 = (longlong *)param_1[5];
  }
  uVar23 = uVar19 + 0x1f;
  if (-1 < (int)uVar19) {
    uVar23 = uVar19;
  }
  puVar30 = (uint *)((longlong)plVar20 + (longlong)((int)uVar23 >> 5) * 4);
  *puVar30 = *puVar30 | 1 << ((byte)uVar19 & 0x1f);
  lVar3 = *param_1;
  lVar31 = lVar31 * 0x40;
  puVar30 = (uint *)(lVar3 + lVar31);
  puVar4 = (undefined8 *)param_3[1];
  FUN_1447a97f4(puVar30,*param_3);
  *(undefined8 *)(lVar3 + 0x28 + lVar31) = *puVar4;
  lVar5 = puVar4[1];
  *(longlong *)(lVar3 + 0x30 + lVar31) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar30[0xe] = 0xffffffff;
  uVar23 = *puVar30;
  if (1 < (uint)((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c))) {
    plVar20 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[9];
    }
    uVar28 = *(uint *)((longlong)plVar20 + (ulonglong)((int)param_1[10] - 1U & uVar23) * 4);
    if (uVar28 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*param_1 + (longlong)(int)uVar28 * 0x40);
        if (*(uint *)(*param_1 + (longlong)(int)uVar28 * 0x40) == uVar23) {
          plVar20 = *(longlong **)(puVar2 + 0xc);
          if (plVar20 != (longlong *)0x0) {
            LOCK();
            plVar27 = plVar20 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            if ((int)*plVar27 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar20 + 0x10))();
              }
            }
          }
          if (*(longlong *)(puVar2 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar6 = *puVar30;
          uVar7 = puVar30[1];
          uVar8 = puVar30[2];
          uVar9 = puVar30[3];
          uVar10 = puVar30[4];
          uVar11 = puVar30[5];
          uVar12 = puVar30[6];
          uVar13 = puVar30[7];
          uVar14 = puVar30[8];
          uVar15 = puVar30[9];
          uVar16 = puVar30[10];
          uVar17 = puVar30[0xb];
          *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar30 + 0xc);
          puVar2[8] = uVar14;
          puVar2[9] = uVar15;
          puVar2[10] = uVar16;
          puVar2[0xb] = uVar17;
          puVar2[4] = uVar10;
          puVar2[5] = uVar11;
          puVar2[6] = uVar12;
          puVar2[7] = uVar13;
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          FUN_140458984(param_1,uVar19,1);
          cVar18 = '\x01';
          goto LAB_140141b2a;
        }
        uVar28 = puVar2[0xe];
      } while (uVar28 != 0xffffffff);
    }
  }
  cVar18 = '\0';
  uVar28 = uVar19;
LAB_140141b2a:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar18;
  }
  if (cVar18 == '\0') {
    uVar19 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
    iVar26 = 1;
    if (3 < uVar19) {
      uVar25 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar31 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      iVar26 = 1 << ((byte)lVar31 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar26 <= (int)param_1[10])) {
      uVar23 = (int)param_1[10] - 1U & uVar23;
      puVar30[0xf] = uVar23;
      plVar20 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar20 = param_1 + 8;
      }
      puVar30[0xe] = *(uint *)((longlong)plVar20 +
                              ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar23) * 4);
      plVar20 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar20 = param_1 + 8;
      }
      *(uint *)((longlong)plVar20 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar23) * 4) =
           uVar28;
    }
    else {
      *(int *)(param_1 + 10) = iVar26;
      FUN_1446eb800(param_1);
    }
  }
  *param_2 = uVar28;
  return param_2;
}



// FUNCTION 140141db6 FUN_140141db6 body=338 status=ok
// SIG undefined FUN_140141db6(void)

undefined8
FUN_140141db6(byte *param_1,undefined8 *param_2,undefined8 param_3,char param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((param_1[1] & 2) == 0) && ((*param_1 & 3) == 2)) && ((byte *)*param_2 != (byte *)0x0)) &&
     ((*(byte *)*param_2 & 3) != 0)) {
    local_48 = param_5;
    cVar5 = FUN_140141f0a(param_1,param_2);
    if (cVar5 != '\0') {
      if ((*param_1 & 2) == 0) {
        plVar7 = &DAT_14c9a1270;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 8);
      }
      if (param_4 == '\0') {
        local_38 = *param_2;
        local_30 = (longlong *)param_2[1];
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
      }
      else {
        local_48 = param_5;
        FUN_1401412e0(param_2,&local_38,1,0);
      }
      iVar2 = (int)plVar7[2];
      *(uint *)(plVar7 + 2) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar7 + 0x14) < iVar2 + 1U) {
        FUN_14000961e(plVar7,iVar2);
      }
      plVar4 = local_30;
      lVar3 = *plVar7;
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = local_38;
      *(longlong **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_30 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_30)(local_30);
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
      uVar6 = 1;
      goto LAB_140141e92;
    }
  }
  uVar6 = 0;
LAB_140141e92:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140141f0a FUN_140141f0a body=364 status=ok
// SIG undefined FUN_140141f0a(void)

ulonglong FUN_140141f0a(byte *param_1,undefined8 *param_2,ulonglong param_3,char param_4,
                       undefined1 param_5)

{
  longlong *plVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  longlong *unaff_RSI;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong *local_50;
  int *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((param_1[1] & 2) != 0) || ((*param_1 & 3) != 2)) ||
      (pbVar2 = (byte *)*param_2, pbVar2 == (byte *)0x0)) || (bVar4 = *pbVar2 & 3, bVar4 == 0)) {
    param_3 = 0;
    goto LAB_140141f52;
  }
  if ((char)*param_1 < '\0') {
    param_3 = param_3 & 0xffffffff;
    if (*(int *)(param_1 + 0x24) == 0) {
      if (bVar4 != 1) goto LAB_140141f52;
    }
    else if (bVar4 != 3) goto LAB_140141f52;
    piVar3 = (int *)FUN_140625092(pbVar2,&DAT_14c9a12e0);
    if (((*piVar3 == 0) || (piVar3[1] == 0)) || (*piVar3 == DAT_14c948000)) goto LAB_140141f52;
    if ((*param_1 & 2) == 0) {
      puVar5 = &DAT_14c9a1288;
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
    }
    if (param_4 == '\0') {
      local_58 = *param_2;
      local_50 = (longlong *)param_2[1];
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
      }
    }
    else {
      local_68 = param_5;
      FUN_1401412e0(param_2,&local_58,1,0);
    }
    local_40 = &local_58;
    local_48 = piVar3;
    FUN_140141a0c(puVar5,local_34,&local_48,0);
    unaff_RSI = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar3 = (int *)((longlong)unaff_RSI + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*unaff_RSI + 0x10))(unaff_RSI);
        }
      }
    }
  }
  param_3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_140141f52:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffffff;
}



// FUNCTION 140142078 FUN_140142078 body=154 status=ok
// SIG undefined FUN_140142078(void)

longlong FUN_140142078(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x48);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1401420cd;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x40);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x40);
  if (*(void **)(param_2 + 0x48) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x48);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_1401420cd:
  *(int *)(param_1 + 0x50) = iVar2;
  FUN_140142112(param_1,param_2);
  return param_1;
}



// FUNCTION 140142112 FUN_140142112 body=369 status=ok
// SIG undefined FUN_140142112(void)

undefined8 * FUN_140142112(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined8 *_Dst;
  undefined4 *puVar9;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 2);
    FUN_140b147f8(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 2);
    *(uint *)(param_1 + 2) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x14) - iVar2) < uVar1) {
      FUN_1404a00f2(param_1);
    }
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    uVar4 = *(int *)(param_2 + 6) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 6) = 0;
    if ((*(int *)((longlong)param_1 + 0x34) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x34))) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar6 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x34) = uVar6;
      FUN_1446efbd8(param_1 + 3,0);
    }
    iVar2 = *(int *)(param_2 + 6);
    *(int *)(param_1 + 6) = iVar2;
    if (iVar2 != 0) {
      puVar5 = (undefined8 *)param_2[5];
      if ((undefined8 *)param_2[5] == (undefined8 *)0x0) {
        puVar5 = param_2 + 3;
      }
      _Dst = param_1 + 3;
      if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[5];
      }
      memcpy(_Dst,puVar5,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar8 = (undefined4 *)*param_1;
      puVar9 = (undefined4 *)*param_2;
      uVar7 = 0;
      do {
        puVar5 = (undefined8 *)param_2[5];
        if ((undefined8 *)param_2[5] == (undefined8 *)0x0) {
          puVar5 = param_2 + 3;
        }
        if ((*(uint *)((longlong)puVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
        }
        else {
          FUN_1447a97f4(puVar8,puVar9);
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar9 + 10);
          lVar3 = *(longlong *)(puVar9 + 0xc);
          *(longlong *)(puVar8 + 0xc) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(puVar8 + 0xe) = *(undefined8 *)(puVar9 + 0xe);
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 0x10;
        puVar8 = puVar8 + 0x10;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 140142284 FUN_140142284 body=9 status=ok
// SIG undefined FUN_140142284(void)

void FUN_140142284(longlong param_1)

{
  FUN_1448470d8(param_1 + 0x10);
  return;
}



// FUNCTION 14014228e FUN_14014228e body=4 status=ok
// SIG undefined FUN_14014228e(void)

void FUN_14014228e(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 140142292 FUN_140142292 body=1010 status=ok
// SIG undefined FUN_140142292(void)

longlong FUN_140142292(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  uint local_108;
  uint local_100;
  uint local_f8;
  uint local_f0;
  uint local_e8;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  longlong *local_d0;
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined4 *local_a8;
  longlong *plStack_a0;
  undefined1 local_8c [4];
  longlong local_88 [9];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar11 = param_1 + 1;
  DVar4 = GetCurrentThreadId();
  uVar5 = param_1[1];
  if ((uVar5 & 1) == 0) {
    LOCK();
    uVar10 = *puVar11;
    bVar17 = uVar5 == uVar10;
    if (bVar17) {
      *puVar11 = uVar5 | 1;
      uVar10 = uVar5;
    }
    uVar5 = uVar10;
    UNLOCK();
    if (!bVar17) goto LAB_1401422e5;
    param_1[2] = DVar4;
  }
  else {
LAB_1401422e5:
    if (param_1[2] == DVar4) {
      LOCK();
      *puVar11 = *puVar11 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar11,uVar5);
    }
  }
  uVar6 = FUN_144a48dbc(param_3);
  plVar7 = (longlong *)FUN_144a4897e(param_1 + 0x4a,uVar6,param_3);
  lVar13 = *plVar7;
  if (lVar13 == 0) {
    local_88[6] = 0;
    local_88[7] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    uVar8 = (ulonglong)*(byte *)(param_3 + 0x19);
    local_c8 = puVar11;
    local_c0 = param_2;
    if (uVar8 == 0) {
      uVar14 = 0;
      local_dc = 0;
      uVar5 = 0;
      local_d8 = 0;
      uVar16 = 0;
      uVar10 = 0;
      if ((*(byte *)(param_3 + 0x44) & 2) != 0) {
        uVar14 = 0;
        local_dc = 0;
        local_d8 = 0;
      }
    }
    else {
      uVar2 = param_1[0x2a];
      uVar9 = 0;
      uVar14 = 0;
      local_dc = 0;
      uVar5 = 0;
      local_d8 = 0;
      uVar16 = 0;
      uVar10 = 0;
      do {
        uVar3 = *(uint *)(param_3 + 0x1c + uVar9 * 4);
        uVar12 = uVar3 & 0x3fffff;
        if (uVar12 < uVar2) {
          lVar13 = (ulonglong)uVar12 * 0xf0;
          if (uVar3 >> 0x16 != (uint)*(ushort *)(*(longlong *)(param_1 + 0x28) + 0xec + lVar13))
          goto LAB_140142445;
          lVar13 = *(longlong *)(param_1 + 0x28) + lVar13;
          local_88[uVar9] = lVar13;
          if (lVar13 != 0) {
            if (uVar14 < *(uint *)(lVar13 + 0x18)) {
              uVar14 = *(uint *)(lVar13 + 0x18);
            }
            if (local_dc < *(uint *)(lVar13 + 0x1c)) {
              local_dc = *(uint *)(lVar13 + 0x1c);
            }
            if (uVar5 < *(ushort *)(lVar13 + 0x24)) {
              uVar5 = (uint)*(ushort *)(lVar13 + 0x24);
            }
            if (uVar10 < *(ushort *)(lVar13 + 0x26)) {
              uVar10 = (uint)*(ushort *)(lVar13 + 0x26);
            }
            if (uVar16 < *(uint *)(lVar13 + 0x20)) {
              uVar16 = *(uint *)(lVar13 + 0x20);
            }
            local_d8 = (uint)(byte)((byte)local_d8 | *(byte *)(lVar13 + 0xc));
          }
        }
        else {
LAB_140142445:
          local_88[uVar9] = 0;
        }
        uVar9 = uVar9 + 1;
      } while (uVar8 != uVar9);
      if ((*(byte *)(param_3 + 0x44) & 2) != 0) {
        local_a8 = (undefined4 *)0x0;
        plStack_a0 = (longlong *)0x0;
        plVar15 = local_88;
        uVar9 = 0;
        local_d4 = uVar14;
        local_d0 = plVar7;
        do {
          if (*plVar15 != 0) {
            FUN_14163a206(&local_a8,plVar15);
            uVar8 = (ulonglong)*(byte *)(param_3 + 0x19);
          }
          uVar14 = local_d4;
          uVar9 = uVar9 + 1;
          plVar15 = plVar15 + 1;
        } while (uVar9 < uVar8);
        plVar7 = local_d0;
        if (local_a8 != (undefined4 *)0x0) {
          FUN_1400020a8();
          plVar7 = local_d0;
        }
      }
    }
    if (param_1[3] == 0x10) {
      FUN_14312348e(param_1,1);
    }
    lVar13 = FUN_14001cc68(0xe8,0x10);
    local_100 = local_dc;
    local_110 = local_88;
    local_118 = param_3;
    local_108 = uVar14;
    local_f8 = uVar5;
    local_f0 = uVar10;
    local_e8 = uVar16;
    FUN_1404938e2(lVar13,local_c0,param_1,*param_1);
    puVar11 = local_c8;
    *plVar7 = lVar13;
    *(undefined4 *)(lVar13 + 0x68) = 1;
    if ((local_d8 & 1) != 0) {
      iVar1 = param_1[0x60];
      param_1[0x60] = iVar1 + 1U;
      if ((uint)param_1[0x61] < iVar1 + 1U) {
        FUN_140430e10(param_1 + 0x5e,iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x5e) + (longlong)iVar1 * 8) = lVar13;
      *(undefined1 *)(*plVar7 + 0x6c) = 1;
      lVar13 = *plVar7;
    }
    local_b8[0] = *(undefined4 *)(lVar13 + 0x8c);
    plStack_a0 = &local_b0;
    local_a8 = local_b8;
    local_b0 = lVar13;
    FUN_1406f4bbc(param_1 + 0x62,local_8c,&local_a8,0);
  }
  else {
    iVar1 = *(int *)(lVar13 + 0x68);
    *(int *)(lVar13 + 0x68) = iVar1 + 1;
    if (iVar1 == 0) {
      local_88[0] = *plVar7;
      FUN_143123be0(param_1 + 0x46,local_88,0);
    }
  }
  lVar13 = *plVar7;
  uVar5 = *puVar11;
  if (uVar5 < 4) {
    param_1[2] = 0;
    if (uVar5 < 2) {
      LOCK();
      uVar10 = *puVar11;
      if (uVar5 == uVar10) {
        *puVar11 = 0;
      }
      UNLOCK();
      if (uVar5 == uVar10) goto LAB_140142645;
    }
    FUN_140d366d2(puVar11);
  }
  else {
    LOCK();
    *puVar11 = *puVar11 - 4;
    UNLOCK();
  }
LAB_140142645:
  if ((local_88[8] ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar13;
}



// FUNCTION 140142686 FUN_140142686 body=2864 status=ok
// SIG undefined FUN_140142686(void)

undefined8 *
FUN_140142686(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar23;
  ulonglong uVar24;
  char *_Str;
  char cVar25;
  uint *puVar26;
  undefined8 *puVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined1 local_18c;
  undefined1 local_18b;
  undefined2 local_18a;
  undefined8 local_188;
  longlong local_180;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_127;
  char local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  int local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined1 local_c8;
  undefined1 local_c7;
  char local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulonglong local_90;
  size_t sVar22;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_126 = *(char *)((longlong)param_3 + 0x32);
  local_158 = *param_3;
  local_125 = *(undefined1 *)((longlong)param_3 + 0x33);
  local_124 = *(undefined1 *)((longlong)param_3 + 0x34);
  local_134 = *(undefined8 *)((longlong)param_3 + 0x24);
  local_12c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_128 = *(undefined1 *)(param_3 + 6);
  local_127 = *(undefined1 *)((longlong)param_3 + 0x31);
  local_150 = param_3[1];
  uStack_148 = param_3[2];
  local_140 = *(undefined4 *)(param_3 + 3);
  uStack_138 = *(undefined4 *)(param_3 + 4);
  local_123 = *(undefined1 *)((longlong)param_3 + 0x35);
  local_13c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_120 = 0x70;
  uStack_118 = param_5;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  local_16c = param_4;
  local_168 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96830) && (FUN_144b3d300(&DAT_14ca96830), DAT_14ca96830 == -1)) {
    DAT_14ca96820 = 0x800000014a38d19a;
    local_f8._0_1_ = 0x13;
    local_f8._1_1_ = '\0';
    local_f8._2_1_ = 0;
    local_f8._3_1_ = 0;
    DAT_14ca96828 = FUN_14577453c();
    DAT_14ca9682c = '\x01';
    _Init_thread_footer(&DAT_14ca96830);
  }
  local_180 = param_1;
  if ((longlong)DAT_14ca96820 < 0) {
    _Str = (char *)(DAT_14ca96820 & 0x7fffffffffffffff);
    if (DAT_14ca9682c == '\x01') {
      puVar26 = (uint *)&local_f8;
      FUN_1446f470e(puVar26,_Str,1);
    }
    else {
      local_f8._0_1_ = SUB81(_Str,0);
      local_f8._1_1_ = (char)((ulonglong)_Str >> 8);
      local_f8._2_1_ = (undefined1)((ulonglong)_Str >> 0x10);
      local_f8._3_1_ = (undefined1)((ulonglong)_Str >> 0x18);
      local_f8._4_1_ = (undefined1)((ulonglong)_Str >> 0x20);
      local_f8._5_1_ = (undefined1)((ulonglong)_Str >> 0x28);
      local_f8._6_2_ = (undefined2)((ulonglong)_Str >> 0x30);
      if (_Str == (char *)0x0) {
        uVar15 = 0;
      }
      else {
        sVar22 = strlen(_Str);
        uVar15 = (undefined4)sVar22;
      }
      uStack_f0 = (undefined2)uVar15;
      uStack_ee = (undefined2)((uint)uVar15 >> 0x10);
      puVar26 = (uint *)&local_160;
      FUN_14001c09c(puVar26,&local_f8,1);
    }
    uVar24 = (ulonglong)*puVar26;
    uStack_108 = (ulonglong)DAT_14ca96828 << 0x20;
    DAT_14ca96820 = uVar24;
  }
  else {
    uVar24 = (ulonglong)DAT_14ca96828 << 0x20;
    uStack_108 = DAT_14ca96820 & 0xffffffff;
  }
  uStack_108 = uStack_108 | uVar24;
  puVar17 = (undefined8 *)FUN_14001cc68(0xf0);
  uVar12 = local_124;
  uVar11 = local_125;
  uVar10 = local_128;
  uVar9 = local_134;
  uVar8 = local_140;
  uVar5 = local_158;
  local_170 = (undefined4)local_150;
  uVar15 = local_150._4_4_;
  uVar6 = (undefined4)uStack_148;
  uVar7 = uStack_148._4_4_;
  local_174 = 0;
  if (local_126 == '\x02') {
    local_174 = local_12c;
  }
  bVar28 = local_126 == '\x01';
  bVar29 = local_126 == '\x04';
  bVar2 = local_126 - 3;
  local_18a = local_12c._2_2_;
  local_18b = local_123;
  local_18c = local_127;
  local_188 = param_2;
  if (local_120 == 0) {
    puVar27 = &local_f8;
    local_c6 = local_126;
    local_f8._0_1_ = (undefined1)local_158;
    local_f8._1_1_ = (char)((ulonglong)local_158 >> 8);
    local_f8._2_1_ = (undefined1)((ulonglong)local_158 >> 0x10);
    local_f8._3_1_ = (undefined1)((ulonglong)local_158 >> 0x18);
    local_f8._4_1_ = (undefined1)((ulonglong)local_158 >> 0x20);
    local_f8._5_1_ = (undefined1)((ulonglong)local_158 >> 0x28);
    local_f8._6_2_ = (undefined2)((ulonglong)local_158 >> 0x30);
    local_c5 = local_125;
    local_c4 = local_124;
    local_d4 = local_134;
    local_cc = (undefined2)local_12c;
    local_ca = local_12c._2_2_;
    local_c8 = local_128;
    local_c7 = local_127;
    uStack_f0 = (undefined2)local_150;
    uStack_ee = (undefined2)((ulonglong)local_150 >> 0x10);
    uStack_e8 = uStack_148;
    local_e0 = local_140;
    local_c3 = local_123;
    local_dc = CONCAT44(uStack_138,local_13c);
    local_c0 = local_120;
    uStack_bc = uStack_11c;
    uStack_b8 = (undefined4)uStack_118;
    uStack_b4 = uStack_118._4_4_;
    local_b0 = (undefined4)local_110;
    uStack_ac = local_110._4_4_;
    uStack_a8 = (undefined4)uStack_108;
    uStack_a4 = uStack_108._4_4_;
    local_a0 = local_100;
    uStack_ec = local_150._4_4_;
    local_c0 = FUN_1431edf91(local_158,CONCAT71((int7)((ulonglong)&local_150 >> 8),local_110 != 0));
    lVar19 = *DAT_14ca83900;
  }
  else {
    lVar19 = *DAT_14ca83900;
    puVar27 = &local_158;
  }
  (**(code **)(lVar19 + 0x1a0))(DAT_14ca83900,&local_160,local_188,puVar27);
  lVar4 = local_180;
  puVar17[1] = 0;
  puVar17[2] = 0;
  lVar19 = 0;
  puVar17[3] = 0;
  *puVar17 = &PTR_FUN_14a391e40;
  puVar17[4] = local_180;
  puVar17[5] = L"UnknownTexture";
  *(undefined4 *)(puVar17 + 6) = local_170;
  *(undefined4 *)((longlong)puVar17 + 0x34) = uVar15;
  *(undefined4 *)(puVar17 + 7) = uVar6;
  *(undefined4 *)((longlong)puVar17 + 0x3c) = uVar7;
  *(undefined4 *)(puVar17 + 8) = uVar8;
  puVar17[9] = uVar5;
  *(undefined1 *)(puVar17 + 10) = uVar11;
  *(undefined1 *)((longlong)puVar17 + 0x51) = uVar12;
  *(undefined8 *)((longlong)puVar17 + 0x54) = uVar9;
  *(short *)((longlong)puVar17 + 0x5c) = (short)local_174;
  *(undefined2 *)((longlong)puVar17 + 0x5e) = local_18a;
  *(undefined1 *)(puVar17 + 0xc) = uVar10;
  *(undefined1 *)((longlong)puVar17 + 0x61) = local_18c;
  *(undefined1 *)((longlong)puVar17 + 0x62) = local_18b;
  *(char *)((longlong)puVar17 + 99) = (bVar2 < 2) * '\x02' | (bVar29 || bVar28);
  puVar17[0xd] = 0;
  *(undefined4 *)(puVar17 + 0xf) = 0;
  puVar17[0xe] = &PTR_FUN_14a391e88;
  puVar17[0x10] = local_160;
  if (local_160 != 0) {
    LOCK();
    *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
    UNLOCK();
    lVar19 = puVar17[2];
  }
  plVar23 = puVar17 + 1;
  puVar17[0x14] = 0;
  puVar17[0x15] = 0x100000000;
  puVar17[0x19] = 0;
  *(undefined4 *)(puVar17 + 0x1a) = 0;
  *(undefined4 *)((longlong)puVar17 + 0xd4) = 1;
  *(undefined4 *)(puVar17 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)puVar17 + 0xdc) = 0xffffffff;
  puVar17[0x1c] = 0xffffffff;
  *(undefined1 *)(puVar17 + 0x1d) = 1;
  if (lVar19 != local_160) {
    puVar17[2] = local_160;
    if (local_160 != 0) {
      LOCK();
      *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
      UNLOCK();
    }
    if (lVar19 != 0) {
      LOCK();
      puVar26 = (uint *)(lVar19 + 8);
      uVar1 = *puVar26;
      *puVar26 = *puVar26 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar26 = (uint *)(lVar19 + 8);
        LOCK();
        uVar1 = *puVar26;
        *puVar26 = *puVar26 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar19 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar19;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar21;
              LOCK();
              bVar28 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar18;
              if (bVar28) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar28);
          }
          else {
            do {
              *plVar18 = (longlong)plVar20;
              LOCK();
              bVar28 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar18;
              if (bVar28) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar28);
          }
        }
      }
    }
    lVar19 = puVar17[2];
  }
  lVar3 = *plVar23;
  if (lVar3 != lVar19) {
    *plVar23 = lVar19;
    if (lVar19 != 0) {
      LOCK();
      *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      LOCK();
      puVar26 = (uint *)(lVar3 + 8);
      uVar1 = *puVar26;
      *puVar26 = *puVar26 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar26 = (uint *)(lVar3 + 8);
        LOCK();
        uVar1 = *puVar26;
        *puVar26 = *puVar26 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar3 + 0xd);
          plVar18 = (longlong *)FUN_14001cc68(0x10,8);
          plVar18[1] = lVar3;
          plVar21 = DAT_14ca843c0;
          plVar20 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar18 = (longlong)plVar21;
              LOCK();
              bVar28 = plVar21 != DAT_14ca843c0;
              plVar20 = plVar18;
              if (bVar28) {
                plVar21 = DAT_14ca843c0;
                plVar20 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar20;
              UNLOCK();
            } while (bVar28);
          }
          else {
            do {
              *plVar18 = (longlong)plVar20;
              LOCK();
              bVar28 = plVar20 != DAT_14ca843c8;
              plVar21 = plVar18;
              if (bVar28) {
                plVar20 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar28);
          }
        }
      }
    }
  }
  lVar19 = local_160;
  if (local_160 != 0) {
    LOCK();
    puVar26 = (uint *)(local_160 + 8);
    uVar1 = *puVar26;
    *puVar26 = *puVar26 - 1;
    UNLOCK();
    if ((uVar1 & 0x3fffffff) == 1) {
      puVar26 = (uint *)(local_160 + 8);
      LOCK();
      uVar1 = *puVar26;
      *puVar26 = *puVar26 | 0x40000000;
      UNLOCK();
      if ((uVar1 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_160 + 0xd);
        plVar18 = (longlong *)FUN_14001cc68(0x10,8);
        plVar18[1] = lVar19;
        plVar21 = DAT_14ca843c0;
        plVar20 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar18 = (longlong)plVar21;
            LOCK();
            bVar28 = plVar21 != DAT_14ca843c0;
            plVar20 = plVar18;
            if (bVar28) {
              plVar21 = DAT_14ca843c0;
              plVar20 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar20;
            UNLOCK();
          } while (bVar28);
        }
        else {
          do {
            *plVar18 = (longlong)plVar20;
            LOCK();
            bVar28 = plVar20 != DAT_14ca843c8;
            plVar21 = plVar18;
            if (bVar28) {
              plVar20 = DAT_14ca843c8;
              plVar21 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar21;
            UNLOCK();
          } while (bVar28);
        }
      }
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar17 + 0xd) = *(int *)(puVar17 + 0xd) + 1;
    UNLOCK();
  }
  iVar14 = *(int *)(lVar4 + 0x30);
  *(uint *)(lVar4 + 0x30) = iVar14 + 1U;
  if (*(uint *)(lVar4 + 0x34) < iVar14 + 1U) {
    FUN_145d3c018(lVar4 + 0x28,iVar14);
  }
  *(undefined8 **)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar14 * 8) = puVar17;
  iVar14 = *(int *)(lVar4 + 0x20);
  *(uint *)(lVar4 + 0x20) = iVar14 + 1U;
  if (*(uint *)(lVar4 + 0x24) < iVar14 + 1U) {
    FUN_1447808da((longlong *)(lVar4 + 0x18),iVar14);
  }
  *(undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar14 * 4) = local_16c;
  if ((*(byte *)((longlong)local_168 + 2) & 2) != 0) {
    if (DAT_14ca84e27 == '\x01') {
      cVar13 = (char)*(undefined4 *)((longlong)local_168 + 0x34);
      cVar25 = *(char *)((longlong)local_168 + 0x33);
      if (cVar13 != '\0') {
        cVar25 = cVar13;
      }
      plVar23 = (longlong *)*plVar23;
      local_f8._1_1_ = 0;
      local_f8._2_1_ = 0;
      local_f8._3_1_ = 0;
      local_f8._5_1_ = 0;
      local_f8._6_2_ = 0;
      uStack_f0 = 0;
      uStack_ee = 0;
      uStack_ec = 0;
      local_f8._0_1_ = 3;
      local_f8._4_1_ = 1;
      lVar19 = (**(code **)(*plVar23 + 8))(plVar23);
      if (*(byte *)(lVar19 + 0x32) < 5) {
        local_f8._2_1_ = (undefined1)(0x4030502010 >> ((*(byte *)(lVar19 + 0x32) & 7) << 3));
      }
      local_198 = &local_f8;
      local_f8._3_1_ = 0;
      local_f8._6_2_ = 0;
      uStack_f0 = 0;
      local_f8._1_1_ = cVar25;
      (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_160,local_188,plVar23);
      lVar19 = puVar17[3];
      puVar17[3] = local_160;
      local_160 = 0;
      if (lVar19 != 0) {
        LOCK();
        puVar26 = (uint *)(lVar19 + 8);
        uVar1 = *puVar26;
        *puVar26 = *puVar26 - 1;
        UNLOCK();
        if ((uVar1 & 0x3fffffff) == 1) {
          puVar26 = (uint *)(lVar19 + 8);
          LOCK();
          uVar1 = *puVar26;
          *puVar26 = *puVar26 | 0x40000000;
          UNLOCK();
          if ((uVar1 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar19 + 0xd);
            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
            plVar20[1] = lVar19;
            plVar23 = DAT_14ca843c0;
            plVar21 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar20 = (longlong)plVar23;
                LOCK();
                bVar28 = plVar23 != DAT_14ca843c0;
                plVar21 = plVar20;
                if (bVar28) {
                  plVar23 = DAT_14ca843c0;
                  plVar21 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar21;
                UNLOCK();
              } while (bVar28);
            }
            else {
              do {
                *plVar20 = (longlong)plVar21;
                LOCK();
                bVar28 = plVar21 != DAT_14ca843c8;
                plVar23 = plVar20;
                if (bVar28) {
                  plVar21 = DAT_14ca843c8;
                  plVar23 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar23;
                UNLOCK();
              } while (bVar28);
            }
          }
        }
        lVar19 = local_160;
        if (local_160 != 0) {
          LOCK();
          puVar26 = (uint *)(local_160 + 8);
          uVar1 = *puVar26;
          *puVar26 = *puVar26 - 1;
          UNLOCK();
          if ((uVar1 & 0x3fffffff) == 1) {
            puVar26 = (uint *)(local_160 + 8);
            LOCK();
            uVar1 = *puVar26;
            *puVar26 = *puVar26 | 0x40000000;
            UNLOCK();
            if ((uVar1 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(local_160 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = lVar19;
              plVar23 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar23;
                  LOCK();
                  bVar28 = plVar23 != DAT_14ca843c0;
                  plVar21 = plVar20;
                  if (bVar28) {
                    plVar23 = DAT_14ca843c0;
                    plVar21 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar21;
                  UNLOCK();
                } while (bVar28);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar28 = plVar21 != DAT_14ca843c8;
                  plVar23 = plVar20;
                  if (bVar28) {
                    plVar21 = DAT_14ca843c8;
                    plVar23 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar23;
                  UNLOCK();
                } while (bVar28);
              }
            }
          }
        }
      }
    }
    else {
      plVar23 = (longlong *)*plVar23;
      local_f8._1_1_ = '\0';
      local_f8._2_1_ = 0;
      local_f8._3_1_ = 0;
      local_f8._5_1_ = 0;
      local_f8._6_2_ = 0;
      uStack_f0 = 0;
      uStack_ee = 0;
      uStack_ec = 0;
      local_f8._0_1_ = 3;
      local_f8._4_1_ = 1;
      lVar19 = (**(code **)(*plVar23 + 8))(plVar23);
      if (*(byte *)(lVar19 + 0x32) < 5) {
        local_f8._2_1_ = (undefined1)(0x4030502010 >> ((*(byte *)(lVar19 + 0x32) & 7) << 3));
      }
      local_198 = &local_f8;
      local_f8._3_1_ = 0;
      local_f8._6_2_ = 0;
      uStack_f0 = 0;
      (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_160,local_188,plVar23);
      lVar19 = puVar17[3];
      puVar17[3] = local_160;
      local_160 = 0;
      if (lVar19 != 0) {
        LOCK();
        puVar26 = (uint *)(lVar19 + 8);
        uVar1 = *puVar26;
        *puVar26 = *puVar26 - 1;
        UNLOCK();
        if ((uVar1 & 0x3fffffff) == 1) {
          puVar26 = (uint *)(lVar19 + 8);
          LOCK();
          uVar1 = *puVar26;
          *puVar26 = *puVar26 | 0x40000000;
          UNLOCK();
          if ((uVar1 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar19 + 0xd);
            plVar20 = (longlong *)FUN_14001cc68(0x10,8);
            plVar20[1] = lVar19;
            plVar23 = DAT_14ca843c0;
            plVar21 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar20 = (longlong)plVar23;
                LOCK();
                bVar28 = plVar23 != DAT_14ca843c0;
                plVar21 = plVar20;
                if (bVar28) {
                  plVar23 = DAT_14ca843c0;
                  plVar21 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar21;
                UNLOCK();
              } while (bVar28);
            }
            else {
              do {
                *plVar20 = (longlong)plVar21;
                LOCK();
                bVar28 = plVar21 != DAT_14ca843c8;
                plVar23 = plVar20;
                if (bVar28) {
                  plVar21 = DAT_14ca843c8;
                  plVar23 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar23;
                UNLOCK();
              } while (bVar28);
            }
          }
        }
        lVar19 = local_160;
        if (local_160 != 0) {
          LOCK();
          puVar26 = (uint *)(local_160 + 8);
          uVar1 = *puVar26;
          *puVar26 = *puVar26 - 1;
          UNLOCK();
          if ((uVar1 & 0x3fffffff) == 1) {
            puVar26 = (uint *)(local_160 + 8);
            LOCK();
            uVar1 = *puVar26;
            *puVar26 = *puVar26 | 0x40000000;
            UNLOCK();
            if ((uVar1 >> 0x1e & 1) == 0) {
              bVar2 = *(byte *)(local_160 + 0xd);
              plVar20 = (longlong *)FUN_14001cc68(0x10,8);
              plVar20[1] = lVar19;
              plVar23 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c8;
              if ((bVar2 & 2) == 0) {
                do {
                  *plVar20 = (longlong)plVar23;
                  LOCK();
                  bVar28 = plVar23 != DAT_14ca843c0;
                  plVar21 = plVar20;
                  if (bVar28) {
                    plVar23 = DAT_14ca843c0;
                    plVar21 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar21;
                  UNLOCK();
                } while (bVar28);
              }
              else {
                do {
                  *plVar20 = (longlong)plVar21;
                  LOCK();
                  bVar28 = plVar21 != DAT_14ca843c8;
                  plVar23 = plVar20;
                  if (bVar28) {
                    plVar21 = DAT_14ca843c8;
                    plVar23 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar23;
                  UNLOCK();
                } while (bVar28);
              }
            }
          }
        }
      }
    }
  }
  iVar14 = (**(code **)(*DAT_14ca83900 + 0x1d0))(DAT_14ca83900,puVar17[1]);
  if (puVar17[2] != puVar17[1]) {
    iVar16 = (**(code **)(*DAT_14ca83900 + 0x1d0))();
    iVar14 = iVar14 + iVar16;
  }
  *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + (iVar14 + 0x3ffU >> 10);
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar17;
}



// FUNCTION 1401431b7 FUN_1401431b7 body=121 status=ok
// SIG undefined FUN_1401431b7(void)

char FUN_1401431b7(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  if (*(char *)(param_1 + 0x30c8) == '\0') {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x48);
    if (*(int *)(param_1 + 0x3090) < 3) {
      if (((uVar1 & 1) != 0) && (DAT_14c760e14 != '\0')) goto LAB_1401431e3;
    }
    else if ((uVar1 & 1) != 0) goto LAB_1401431e3;
  }
  if ((*(byte *)(param_1 + 0x125b2) & 1) == 0) {
    return '\0';
  }
LAB_1401431e3:
  iVar2 = *(int *)(param_1 + 0x3020);
  if ((iVar2 != 2) && (iVar2 != 4)) {
    return '\0';
  }
  cVar3 = (iVar2 == 4) + '\x01';
  cVar4 = '\x03';
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x188) == 0) {
    cVar4 = cVar3;
  }
  if (*(int *)(DAT_14ca35c20 + 4) == 0) {
    return cVar3;
  }
  return cVar4;
}



// FUNCTION 140143230 FUN_140143230 body=286 status=ok
// SIG undefined FUN_140143230(void)

ulonglong FUN_140143230(void)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined7 uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb529e4) {
    FUN_144b3d300(&DAT_14cb529e4);
    if (DAT_14cb529e4 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14cb529e0 = FUN_14054d46e(&DAT_14c846b20,L"slforcetagging");
      _Init_thread_footer(&DAT_14cb529e4);
    }
  }
  lVar1 = DAT_14cb52978;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (DAT_14cb529e0 == '\0') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar5 = 0;
    }
    else if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    if (*(char *)(lVar1 + uVar5) == '\0') {
      iVar2 = FUN_1401433c5();
      if (iVar2 == 0) {
        iVar2 = FUN_14014334e();
        uVar6 = CONCAT71(uVar7,iVar2 != 0);
      }
      else {
        uVar6 = 0;
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14014334e FUN_14014334e body=119 status=ok
// SIG undefined FUN_14014334e(void)

undefined1 FUN_14014334e(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  lVar2 = DAT_14cb528d0;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  iVar1 = *(int *)(lVar2 + uVar5 * 4);
  uVar6 = iVar1 == 1;
  if (iVar1 == 2) {
    uVar6 = 2;
  }
  return uVar6;
}



// FUNCTION 1401433c5 FUN_1401433c5 body=496 status=ok
// SIG undefined FUN_1401433c5(void)

undefined4 FUN_1401433c5(void)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (DAT_14cb529e8 != '\0') {
    return DAT_14c76320c;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') {
      DAT_14c76320c = 1;
      DAT_14cb529e8 = 1;
      return 1;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      DAT_14c76320c = 1;
      DAT_14cb529e8 = 1;
      return 1;
    }
  }
  else if (DAT_14c8442b8 != 0) {
    DAT_14c76320c = 1;
    DAT_14cb529e8 = 1;
    return 1;
  }
  cVar3 = FUN_144848644();
  plVar1 = DAT_14cb527c8;
  if (cVar3 == '\0') {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
    if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
      cVar3 = (**(code **)(*DAT_14cb527c8 + 0x38))(DAT_14cb527c8);
      uVar2 = 6;
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
        iVar4 = FUN_1456d0c02(1000,uVar5);
        uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
        FUN_1401435b5(1000,uVar5);
        if (iVar4 == 0) {
          DAT_14c76320c = 0;
          DAT_14cb529e8 = 1;
          FUN_140527e63(1);
          return DAT_14c76320c;
        }
        switch(iVar4) {
        case 2:
          uVar2 = 5;
          break;
        case 3:
          uVar2 = 4;
          break;
        case 4:
          uVar2 = 3;
          break;
        case 6:
        case 7:
          uVar2 = 2;
          break;
        default:
          if (iVar4 == 0x1c) {
            DAT_14c76320c = 6;
            DAT_14cb529e8 = 1;
            return 6;
          }
        case 5:
          uVar2 = 1;
        }
      }
    }
  }
  DAT_14c76320c = uVar2;
  DAT_14cb529e8 = 1;
  return DAT_14c76320c;
}



// FUNCTION 1401435b5 FUN_1401435b5 body=292 status=ok
// SIG undefined FUN_1401435b5(void)

void FUN_1401435b5(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar1 = (*DAT_14cb52708)();
  if (iVar1 != 0x1f) {
    local_68 = 0;
    local_60 = 0x6d5b51f0;
    local_5c = 0x76b;
    local_5a = 0x486d;
    local_58 = 0xc1f54310565a9599;
    local_50 = 1;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    (*DAT_14cb52748)(param_1);
    local_120 = 0;
    local_118 = 0x4bc6ac6d66714097;
    local_110 = 0x1fb6a6550f1e1589;
    local_108 = 2;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_b0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    (*DAT_14cb52740)(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401436e2 FUN_1401436e2 body=284 status=ok
// SIG undefined FUN_1401436e2(void)

undefined8 * FUN_1401436e2(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b056c00;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_1[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1401437fe FUN_1401437fe body=68 status=ok
// SIG undefined FUN_1401437fe(void)

longlong FUN_1401437fe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140143864(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x14 + *param_1;
  FUN_140143842(lVar2,1);
  return lVar2;
}



// FUNCTION 140143842 FUN_140143842 body=33 status=ok
// SIG undefined FUN_140143842(void)

void FUN_140143842(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 2;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 140143864 FUN_140143864 body=373 status=ok
// SIG undefined FUN_140143864(void)

void FUN_140143864(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1401438ed;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1401438ed:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1401439da FUN_1401439da body=1148 status=ok
// SIG undefined FUN_1401439da(void)

void FUN_1401439da(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  uint local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = (longlong)(int)param_1[0xd9];
  uVar10 = 0;
  if ((((0 < lVar5) && (*(int *)(param_1[0xd8] + -4 + lVar5 * 4) != 1)) &&
      (uVar10 = (uint)((int)param_1[0xd9] != 1), (*(byte *)((longlong)param_1 + 0x8a2) & 1) != 0))
     && ((*(byte *)((longlong)param_1 + 0x8a1) & 0x40) == 0)) {
    lVar9 = 0;
    do {
      if (*(int *)(param_1[0xd8] + lVar9 * 4) == 0) {
        uVar10 = 2;
        break;
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
  }
  if (*(int *)((longlong)param_1 + 0x6cc) < 0) {
    *(undefined4 *)(param_1 + 0xd9) = 0;
    FUN_147a15946(param_1 + 0xd8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd9) = 0;
  }
  if (param_1[0x115] == 0) goto LAB_140143cf3;
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_140143de7;
    if (param_1[0xcc] == 0) goto LAB_140143cf3;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140143de7:
    FUN_1456cec3c();
  }
  if ((((*(byte *)((longlong)param_1 + 0x8a1) & 0x10) == 0) &&
      ((*(byte *)((longlong)param_1 + 0x89f) & 0x40) == 0)) &&
     ((*(char *)((longlong)param_1 + 0x89c) != '\0' && (*(char *)(param_1[0x115] + 0x38) != '\0'))))
  goto LAB_140143cf3;
  uVar11 = *(uint *)((longlong)param_1 + 0x854);
  lVar5 = param_1[0xcb];
  if (lVar5 == 0) {
    lVar5 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar5 != 0) != 0) goto LAB_140143d7f;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140143d7f:
    FUN_1456cec3c(lVar5);
  }
  if (*(int *)(lVar5 + 0xb8) == -1) {
    uVar6 = FUN_140083894();
    cVar3 = FUN_1406bafe2(uVar6,3);
    if (cVar3 == '\0') goto LAB_140143ad7;
  }
  else {
LAB_140143ad7:
    if ((param_1[0x115] != 0) &&
       (uVar4 = (uint)*(byte *)(*(longlong *)(param_1[0x115] + 0x40) + 0x1c),
       (int)uVar11 < (int)uVar4)) {
      uVar11 = uVar4;
    }
  }
  lVar5 = (**(code **)(*param_1 + 0xa90))(param_1);
  if ((lVar5 == 0) || ((int)uVar11 < 0)) {
    if ((int)uVar11 < 0) goto LAB_140143cf3;
  }
  else if ((int)uVar11 < *(int *)(lVar5 + 8)) {
    if ((*DAT_14cad2a08 == 0) || (*(char *)((longlong)param_1 + 0x89e) < '\0')) {
      FUN_140f81080(param_1 + 0xf8,0);
    }
    local_78 = (ulonglong)uVar11 * 0x58 + param_1[0x104];
    local_88 = param_1 + 0x102;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = uVar10;
    (**(code **)(*(longlong *)param_1[0x115] + 0x18))
              ((longlong *)param_1[0x115],uVar11,param_1,param_1 + 0xf8);
    *(undefined1 *)(param_1[0x115] + 0x38) = 1;
    *(byte *)((longlong)param_1 + 0x8a1) = *(byte *)((longlong)param_1 + 0x8a1) & 0xef;
    FUN_14480e57e(param_1,0);
  }
  if ((((int)param_1[0xd7] <= (int)uVar11) ||
      ((longlong)*(char *)(param_1[0xd6] + (ulonglong)uVar11) == -1)) ||
     (plVar1 = *(longlong **)
                (param_1[0xd4] + (longlong)*(char *)(param_1[0xd6] + (ulonglong)uVar11) * 8),
     plVar1 == (longlong *)0x0)) goto LAB_140143cf3;
  local_58 = 2;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  if (param_1[0x16] == 0) {
    local_60 = 0;
  }
  else {
    local_60 = *(undefined8 *)(param_1[0x16] + 0x218);
  }
  plVar7 = (longlong *)param_1[0xcb];
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_140143e1c;
    plVar12 = param_1;
    if (plVar7 == (longlong *)0x0) goto LAB_140143c31;
LAB_140143daf:
    plVar12 = plVar7;
    if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) {
LAB_140143e4a:
      FUN_1456cec3c(plVar7);
      plVar12 = plVar7;
    }
  }
  else {
    plVar12 = plVar7;
    if (DAT_14c950c29 != 0) {
LAB_140143e1c:
      FUN_1456cec3c(plVar7);
      plVar7 = (longlong *)param_1[0xcb];
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)param_1[0xcc];
        goto LAB_140143daf;
      }
      plVar12 = plVar7;
      if ((DAT_14c950c29 & 1) == 0) goto LAB_140143c31;
      goto LAB_140143e4a;
    }
  }
LAB_140143c31:
  uStack_50 = (undefined4)plVar12[3];
  uStack_4c = (undefined4)((ulonglong)plVar12[3] >> 0x20);
  lVar5 = param_1[0x115];
  FUN_1446efa72(&uStack_48,0,3,0x10);
  iStack_40 = 3;
  puVar2 = (undefined8 *)CONCAT44(uStack_44,uStack_48);
  *puVar2 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar8;
  *puVar2 = &PTR_FUN_14a879340;
  puVar2[3] = lVar5;
  *(uint *)(puVar2 + 4) = uVar11;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,&local_60);
  if (iStack_40 != 0) {
    puVar2 = (undefined8 *)CONCAT44(uStack_44,uStack_48);
    if (puVar2 == (undefined8 *)0x0) goto LAB_140143cf3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(&uStack_48,0,0,0x10);
    iStack_40 = 0;
  }
  if (CONCAT44(uStack_44,uStack_48) != 0) {
    FUN_1400020a8();
  }
LAB_140143cf3:
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xfb;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140143e58 FUN_140143e58 body=104 status=ok
// SIG undefined FUN_140143e58(void)

void * FUN_140143e58(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 8);
    if (*(void **)((longlong)param_2 + 8) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x10) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 2;
    }
    else {
      FUN_140143ec0(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 8);
        if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140143ec0 FUN_140143ec0 body=97 status=ok
// SIG undefined FUN_140143ec0(void)

void FUN_140143ec0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_147313bbc(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 140143f32 FUN_140143f32 body=101 status=ok
// SIG undefined FUN_140143f32(void)

void FUN_140143f32(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_140143f97(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 140143f97 FUN_140143f97 body=51 status=ok
// SIG undefined FUN_140143f97(void)

void FUN_140143f97(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140143fca FUN_140143fca body=70 status=ok
// SIG undefined FUN_140143fca(void)

bool FUN_140143fca(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 140144010 FUN_140144010 body=1297 status=ok
// SIG undefined FUN_140144010(void)

void FUN_140144010(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [12];
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double *pdVar18;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  int *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  double local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined1 local_ec;
  double local_e8;
  double dStack_e0;
  undefined4 local_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar4 = *(longlong **)(*param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    pdVar18 = *(double **)(param_2 + 0x440);
    iVar3 = *(int *)(param_2 + 0x448);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      if (iVar3 != 0) {
        pdVar1 = pdVar18 + iVar3;
        local_160 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
        do {
          dVar5 = *pdVar18;
          if (dVar5 != 0.0) {
            uVar2 = *(undefined2 *)((longlong)dVar5 + 0x5c);
            if (*(char *)((longlong)dVar5 + 0x1b9) == '\0') {
              lVar9 = *(longlong *)((longlong)dVar5 + 0x80);
              if (*(longlong *)((longlong)dVar5 + 0x80) == 0) {
                lVar9 = (longlong)dVar5 + 0x78;
              }
              if ((longlong)*(int *)((longlong)dVar5 + 0x88) != 0) {
                lVar16 = 0;
                do {
                  if ((*(byte *)(*(longlong *)(lVar9 + lVar16) + 0x71 +
                                (ulonglong)((*(byte *)(*(longlong *)(lVar9 + lVar16) + 8) & 3) == 0)
                                * 8) & 2) == 0) goto LAB_1401441a1;
                  lVar16 = lVar16 + 8;
                } while ((longlong)*(int *)((longlong)dVar5 + 0x88) * 8 != lVar16);
              }
              local_120 = dVar5;
              if (*(undefined8 **)((longlong)dVar5 + 0x10) == (undefined8 *)0x0) {
                local_118 = 0;
              }
              else {
                local_118 = (**(code **)**(undefined8 **)((longlong)dVar5 + 0x10))();
              }
              local_110 = *(undefined4 *)((longlong)dVar5 + 0x58);
              local_fc = 0;
              uStack_f4 = 0;
              local_10c = 0;
              uStack_104 = 0;
              local_ec = 0;
              if (((DAT_14c992a90 == '\0') && (DAT_14c86a9f8 == '\x01')) && (*local_160 == 1)) {
                FUN_140ad26c0();
                GetCurrentThreadId();
              }
              lVar9 = (longlong)dVar5 + 0x78;
              if (*(longlong *)((longlong)dVar5 + 0x80) != 0) {
                lVar9 = *(longlong *)((longlong)dVar5 + 0x80);
              }
              if ((longlong)*(int *)((longlong)dVar5 + 0x88) != 0) {
                lVar16 = (longlong)*(int *)((longlong)dVar5 + 0x88) * 8;
                lVar15 = 0;
                uVar10 = (uint)local_10c;
                uVar11 = local_10c._4_4_;
                uVar12 = (uint)uStack_104;
                uVar13 = uStack_104._4_4_;
                do {
                  lVar6 = *(longlong *)(lVar9 + lVar15);
                  if ((lVar6 != 0) &&
                     ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) &
                      2) != 0)) {
                    uVar14 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
                    uVar10 = uVar10 | *(uint *)(lVar6 + 0x48 + uVar14 * 8);
                    uVar11 = uVar11 | *(uint *)(lVar6 + 0x4c + uVar14 * 8);
                    local_10c = CONCAT44(uVar11,uVar10);
                    uVar12 = uVar12 | *(uint *)(lVar6 + 0x50 + uVar14 * 8);
                    uVar13 = uVar13 | *(uint *)(lVar6 + 0x54 + uVar14 * 8);
                    uStack_104 = CONCAT44(uVar13,uVar12);
                  }
                  lVar15 = lVar15 + 8;
                } while (lVar16 != lVar15);
                uVar14 = uStack_f4 >> 0x20;
                lVar15 = 0;
                uVar10 = (uint)local_fc;
                uVar11 = local_fc._4_4_;
                uVar12 = (uint)uStack_f4;
                do {
                  lVar6 = *(longlong *)(lVar9 + lVar15);
                  if ((lVar6 != 0) &&
                     ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) &
                      5) != 0)) {
                    uVar17 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
                    uVar10 = uVar10 | *(uint *)(lVar6 + 0x58 + uVar17 * 8);
                    uVar11 = uVar11 | *(uint *)(lVar6 + 0x5c + uVar17 * 8);
                    local_fc = CONCAT44(uVar11,uVar10);
                    uVar12 = uVar12 | *(uint *)(lVar6 + 0x60 + uVar17 * 8);
                    uVar13 = (uint)uVar14 | *(uint *)(lVar6 + 100 + uVar17 * 8);
                    uVar14 = (ulonglong)uVar13;
                    uStack_f4 = CONCAT44(uVar13,uVar12);
                  }
                  lVar15 = lVar15 + 8;
                } while (lVar16 != lVar15);
              }
              local_ec = 1;
              dVar5 = *pdVar18;
              plVar7 = *(longlong **)((longlong)dVar5 + 0x50);
              if ((plVar7 == (longlong *)0x0) || (*(char *)((longlong)plVar7 + 0x1a) != '\x01')) {
                local_148 = *(undefined8 *)((longlong)dVar5 + 0x30);
                local_158 = *(undefined8 *)((longlong)dVar5 + 0x20);
                uStack_150 = *(undefined8 *)((longlong)dVar5 + 0x28);
                local_130 = *(undefined8 *)((longlong)dVar5 + 0x30);
                local_140 = *(undefined4 *)((longlong)dVar5 + 0x20);
                uStack_13c = *(undefined4 *)((longlong)dVar5 + 0x24);
                uStack_138 = *(undefined4 *)((longlong)dVar5 + 0x28);
                uStack_134 = *(undefined4 *)((longlong)dVar5 + 0x2c);
              }
              else {
                uStack_cc = (undefined4)
                            ((ulonglong)(double)*(float *)((longlong)dVar5 + 0x4c) >> 0x20);
                dStack_e0 = (double)*(float *)((longlong)dVar5 + 0x44);
                local_e8 = (double)*(float *)((longlong)dVar5 + 0x40);
                auVar8._8_4_ = SUB84((double)*(float *)((longlong)dVar5 + 0x4c),0);
                auVar8._0_8_ = (double)*(float *)((longlong)dVar5 + 0x48);
                local_d8 = SUB84((double)*(float *)((longlong)dVar5 + 0x48),0);
                uStack_d4 = auVar8._4_8_;
                uStack_c8 = *(undefined4 *)((longlong)dVar5 + 0x20);
                uStack_c4 = *(undefined8 *)((longlong)dVar5 + 0x24);
                uStack_bc = *(undefined4 *)((longlong)dVar5 + 0x2c);
                uStack_b8 = (undefined4)*(undefined8 *)((longlong)dVar5 + 0x30);
                local_b4 = (uint)((ulonglong)*(undefined8 *)((longlong)dVar5 + 0x30) >> 0x20);
                uStack_b0 = 0;
                local_a8 = 0x3ff0000000000000;
                uStack_a0 = 0x3ff0000000000000;
                local_98 = 0x3ff0000000000000;
                uStack_90 = 0;
                (**(code **)(*plVar7 + 0x88))(plVar7,&local_158,&local_e8);
              }
              local_168 = uVar2;
              (**(code **)(*plVar4 + 0x88))(plVar4,&local_120,&local_158,1);
            }
            else {
LAB_1401441a1:
              local_e8 = dVar5;
              if (*(undefined8 **)((longlong)dVar5 + 0x10) == (undefined8 *)0x0) {
                dStack_e0 = 0.0;
              }
              else {
                dStack_e0 = (double)(**(code **)**(undefined8 **)((longlong)dVar5 + 0x10))();
              }
              local_d8 = *(undefined4 *)((longlong)dVar5 + 0x58);
              uStack_c4 = 0;
              uStack_bc = 0;
              uStack_b8 = 0;
              uStack_d4 = 0;
              uStack_cc = 0;
              uStack_c8 = 0;
              local_b4 = local_b4 & 0xffffff00;
              if (((DAT_14c992a90 == '\0') && (DAT_14c86a9f8 == '\x01')) && (*local_160 == 1)) {
                FUN_140ad26c0();
                GetCurrentThreadId();
              }
              (**(code **)(*plVar4 + 0x80))(plVar4,&local_e8,uVar2);
            }
          }
          pdVar18 = pdVar18 + 1;
        } while (pdVar18 != pdVar1);
      }
    }
    else if (iVar3 != 0) {
      lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar16 = 0;
      do {
        dVar5 = *(double *)((longlong)pdVar18 + lVar16);
        if (dVar5 != 0.0) {
          local_e8 = dVar5;
          if (*(undefined8 **)((longlong)dVar5 + 0x10) == (undefined8 *)0x0) {
            dStack_e0 = 0.0;
          }
          else {
            dStack_e0 = (double)(**(code **)**(undefined8 **)((longlong)dVar5 + 0x10))();
          }
          local_d8 = *(undefined4 *)((longlong)dVar5 + 0x58);
          uStack_c4 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_d4 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          local_b4 = local_b4 & 0xffffff00;
          if (((DAT_14c992a90 == '\0') && (DAT_14c86a9f8 == '\x01')) &&
             (*(int *)(lVar9 + 0xc60) == 1)) {
            FUN_140ad26c0();
            GetCurrentThreadId();
          }
          (**(code **)(*plVar4 + 0x80))
                    (plVar4,&local_e8,
                     *(undefined2 *)(*(longlong *)((longlong)pdVar18 + lVar16) + 0x5c));
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar3 * 8 != lVar16);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140144522 FUN_140144522 body=1794 status=ok
// SIG undefined FUN_140144522(void)

void FUN_140144522(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  char cVar23;
  byte bVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  bool bVar34;
  longlong lVar35;
  undefined1 auStack_158 [44];
  uint local_12c;
  ulonglong local_128;
  undefined4 local_11e;
  undefined2 local_11a;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar32 = *(longlong *)(param_2 + 0x40);
  piVar6 = *(int **)(lVar32 + 0x70);
  if (piVar6 == (int *)0x0) goto LAB_140144ab7;
  iVar26 = *piVar6;
  if (iVar26 == 8) {
    if ((*(longlong *)(piVar6 + 2) == 0) ||
       (piVar6 = *(int **)(*(longlong *)(piVar6 + 2) + 0x10), piVar6 == (int *)0x0))
    goto LAB_140144ab7;
    iVar26 = *piVar6;
  }
  if ((((((iVar26 != 1) || (puVar7 = *(uint **)(piVar6 + 2), puVar7 == (uint *)0x0)) ||
        (uVar27 = puVar7[0x51], uVar27 == 0)) ||
       ((uVar28 = puVar7[0x50], (int)uVar28 < 0 || (DAT_14c9647dc <= (int)uVar28)))) ||
      (lVar29 = (ulonglong)((uVar28 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8), lVar29 == 0)) ||
     ((*(uint *)(lVar29 + 0x10) != uVar27 || ((*(uint *)(lVar29 + 8) & 0x10200000) != 0))))
  goto LAB_140144ab7;
  if ((puVar7[2] & 8) == 0) {
    if (((((puVar7[2] & 1) == 0) || (puVar7[1] == 0)) || (uVar27 = *puVar7, (int)uVar27 < 0)) ||
       (((DAT_14c9647dc <= (int)uVar27 ||
         (plVar25 = (longlong *)
                    ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
         plVar25 == (longlong *)0x0)) ||
        ((*(uint *)(plVar25 + 2) != puVar7[1] || ((*(uint *)(plVar25 + 1) & 0x10200000) != 0))))))
    goto LAB_140144ab7;
    if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
      lVar29 = *plVar25;
    }
    else {
      lVar29 = 0;
    }
    lVar35 = DAT_14c997cc0;
    if (DAT_14c997cc0 == 0) {
      plVar25 = (longlong *)FUN_145a62958();
      lVar35 = plVar25[0x22];
      if (lVar35 == 0) {
        (**(code **)(*plVar25 + 1000))(plVar25);
        lVar35 = plVar25[0x22];
      }
    }
    cVar23 = *(char *)(lVar35 + 0x75);
    if (*(char *)(lVar29 + 0x31) != '\0') {
      cVar23 = *(char *)(lVar29 + 0x31);
    }
    if (((cVar23 == '\x03') || (*(longlong *)(puVar7 + 0x4e) == 0)) ||
       (uVar27 = puVar7[0x51], uVar27 == 0)) goto LAB_140144ab7;
  }
  uVar28 = puVar7[0x50];
  if (((int)uVar28 < 0) || (DAT_14c9647dc <= (int)uVar28)) goto LAB_140144ab7;
  plVar25 = (longlong *)
            ((ulonglong)((uVar28 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8));
  if ((plVar25 == (longlong *)0x0) ||
     (((*(uint *)(plVar25 + 2) != uVar27 || ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)) ||
      (lVar29 = *plVar25, lVar29 == 0)))) goto LAB_140144ab7;
  dVar9 = (double)*(float *)(lVar32 + 0x4c);
  dVar16 = (double)*(float *)(lVar32 + 0x48);
  dVar10 = (double)*(float *)(lVar32 + 0x44);
  dVar18 = (double)*(float *)(lVar32 + 0x40);
  dVar3 = *(double *)(lVar32 + 0x30);
  dVar4 = *(double *)(lVar32 + 0x20);
  dVar5 = *(double *)(lVar32 + 0x28);
  dVar20 = *(double *)(lVar29 + 0x260);
  dVar21 = *(double *)(lVar29 + 0x268);
  dVar22 = *(double *)(lVar29 + 0x270);
  lVar35 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0x28) - dVar21));
  auVar13._8_4_ = (int)lVar35;
  auVar13._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0x20) - dVar20));
  auVar13._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
  iVar26 = movmskpd(*(uint *)(plVar25 + 1),auVar13);
  auVar12._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - *(double *)(lVar29 + 0x278)));
  auVar12._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0x30) - dVar22));
  uVar27 = movmskpd(uVar28 >> 0x10,auVar12);
  if ((uVar27 & 0x3fffffff) == 0 && iVar26 == 0) {
    lVar32 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar10 - *(double *)(lVar29 + 0x248)));
    auVar19._8_4_ = (int)lVar32;
    auVar19._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 - *(double *)(lVar29 + 0x240)));
    auVar19._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    uVar27 = movmskpd(iVar26,auVar19);
    lVar32 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar9 - *(double *)(lVar29 + 600)));
    auVar14._8_4_ = (int)lVar32;
    auVar14._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar16 - *(double *)(lVar29 + 0x250)));
    auVar14._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar26 = movmskpd(0,auVar14);
    uVar28 = iVar26 << 2 | uVar27;
    if (uVar28 != 0) {
      auVar11._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar29 + 0x248) + dVar10));
      auVar11._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar29 + 0x240) + dVar18));
      iVar26 = movmskpd(uVar27,auVar11);
      lVar32 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar29 + 600) + dVar9));
      auVar8._8_4_ = (int)lVar32;
      auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar29 + 0x250) + dVar16))
      ;
      auVar8._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
      uVar27 = movmskpd(uVar28,auVar8);
      if ((uVar27 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_1401447f3;
    }
    bVar33 = false;
  }
  else {
LAB_1401447f3:
    bVar33 = puVar7[3] == 0xffffffff;
    if (bVar33) {
      lVar32 = *(longlong *)(param_2 + 0x40);
      uVar27 = 0;
      if ((lVar32 != 0) && (1 < *(byte *)(lVar32 + 0x90))) {
        uVar27 = (uint)*(byte *)(lVar32 + 0x1c1);
      }
      uVar28 = *(uint *)(lVar29 + 0xc);
      uVar30 = (ulonglong)uVar28;
      if ((int)uVar28 < DAT_14c9647dc) {
        lVar32 = (ulonglong)((uVar28 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8);
      }
      else {
        lVar32 = 0;
      }
      iVar26 = *(int *)(lVar32 + 0x10);
      if (*(int *)(lVar32 + 0x10) == 0) {
        LOCK();
        iVar26 = DAT_14c964868 + 1;
        UNLOCK();
        iVar31 = DAT_14c964868 + 1;
        bVar34 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar26;
        local_12c = uVar27;
        local_128 = uVar30;
        if (bVar34) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar31);
        }
        LOCK();
        iVar26 = *(int *)(lVar32 + 0x10);
        bVar34 = iVar26 == 0;
        if (bVar34) {
          *(int *)(lVar32 + 0x10) = iVar31;
          iVar26 = 0;
        }
        UNLOCK();
        uVar30 = local_128;
        uVar27 = local_12c;
        if (bVar34) {
          iVar26 = iVar31;
        }
      }
      iVar31 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar31 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar31 + 1U) {
        local_12c = uVar27;
        local_128 = uVar30;
        FUN_1417e7f98((longlong *)(param_1 + 0x18),iVar31);
        uVar30 = local_128;
        uVar27 = local_12c;
      }
      lVar32 = *(longlong *)(param_1 + 0x18);
      lVar35 = (longlong)iVar31 * 0x50;
      *(double *)(lVar32 + lVar35) = dVar4 - dVar20;
      *(double *)(lVar32 + 8 + lVar35) = dVar5 - dVar21;
      *(double *)(lVar32 + 0x10 + lVar35) = dVar3 - dVar22;
      auVar17._8_4_ = SUB84(dVar10,0);
      auVar17._0_8_ = dVar18;
      auVar17._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x20 + lVar35) = auVar17;
      auVar15._8_4_ = SUB84(dVar9,0);
      auVar15._0_8_ = dVar16;
      auVar15._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar32 + 0x30 + lVar35) = auVar15;
      *(int *)(lVar32 + 0x40 + lVar35) = (int)uVar30;
      *(int *)(lVar32 + 0x44 + lVar35) = iVar26;
      *(undefined1 *)(lVar32 + 0x48 + lVar35) = 1;
      *(char *)(lVar32 + 0x49 + lVar35) = (char)uVar27;
      *(undefined4 *)(lVar32 + 0x4a + lVar35) = local_118;
      *(undefined2 *)(lVar32 + 0x4e + lVar35) = (undefined2)uStack_114;
    }
    FUN_144840e24(*(undefined8 *)(param_1 + 8),puVar7 + 0x4e);
  }
  lVar32 = *(longlong *)(param_2 + 0x40);
  bVar24 = *(byte *)(lVar32 + 0x90);
  if (((lVar32 != 0) && (1 < bVar24)) &&
     (cVar23 = *(char *)(lVar32 + 0x1c1), !bVar33 && cVar23 != '\0')) {
    uVar27 = *(uint *)(lVar29 + 0xc);
    if ((int)uVar27 < DAT_14c9647dc) {
      lVar32 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
    }
    else {
      lVar32 = 0;
    }
    iVar26 = *(int *)(lVar32 + 0x10);
    if (*(int *)(lVar32 + 0x10) == 0) {
      LOCK();
      iVar26 = DAT_14c964868 + 1;
      UNLOCK();
      iVar31 = DAT_14c964868 + 1;
      bVar33 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar26;
      if (bVar33) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar31);
      }
      LOCK();
      iVar26 = *(int *)(lVar32 + 0x10);
      bVar33 = iVar26 == 0;
      if (bVar33) {
        *(int *)(lVar32 + 0x10) = iVar31;
        iVar26 = 0;
      }
      UNLOCK();
      if (bVar33) {
        iVar26 = iVar31;
      }
    }
    iVar31 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar31 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar31 + 1U) {
      FUN_1417e7f98((longlong *)(param_1 + 0x18),iVar31);
    }
    lVar32 = *(longlong *)(param_1 + 0x18);
    lVar29 = (longlong)iVar31 * 0x50;
    puVar2 = (undefined8 *)(lVar32 + 0x30 + lVar29);
    *puVar2 = local_e8;
    puVar2[1] = uStack_e0;
    puVar2 = (undefined8 *)(lVar32 + 0x20 + lVar29);
    *puVar2 = local_f8;
    puVar2[1] = uStack_f0;
    puVar2 = (undefined8 *)(lVar32 + 0x10 + lVar29);
    *puVar2 = local_108;
    puVar2[1] = uStack_100;
    puVar1 = (undefined4 *)(lVar32 + lVar29);
    *puVar1 = local_118;
    puVar1[1] = uStack_114;
    puVar1[2] = uStack_110;
    puVar1[3] = uStack_10c;
    *(uint *)(lVar32 + 0x40 + lVar29) = uVar27;
    *(int *)(lVar32 + 0x44 + lVar29) = iVar26;
    *(undefined1 *)(lVar32 + 0x48 + lVar29) = 0;
    *(char *)(lVar32 + 0x49 + lVar29) = cVar23;
    *(undefined4 *)(lVar32 + 0x4a + lVar29) = local_11e;
    *(undefined2 *)(lVar32 + 0x4e + lVar29) = local_11a;
    lVar32 = *(longlong *)(param_2 + 0x40);
    bVar24 = *(byte *)(lVar32 + 0x90);
  }
  if ((lVar32 != 0) && (1 < bVar24)) {
    *(undefined1 *)(lVar32 + 0x1c1) = 0;
  }
LAB_140144ab7:
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140144c26 FUN_140144c26 body=1914 status=ok
// SIG undefined FUN_140144c26(void)

void FUN_140144c26(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong *plVar34;
  int iVar35;
  undefined1 uVar36;
  bool bVar37;
  longlong lVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined1 *local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_f0 [8];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [8];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f0[0] = 0;
  local_e8 = 0;
  local_e0 = 1;
  local_148 = *(undefined8 *)(param_2 + 0x120);
  lVar8 = *(longlong *)(param_2 + 0x128);
  uVar28 = (undefined4)*param_1;
  lVar27 = FUN_147c812ca();
  if (lVar27 == 0) goto LAB_140144f11;
  dVar10 = (double)*(float *)(lVar8 + 0x4c);
  dVar17 = (double)*(float *)(lVar8 + 0x48);
  uVar39 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar11 = (double)*(float *)(lVar8 + 0x44);
  dVar19 = (double)*(float *)(lVar8 + 0x40);
  uVar40 = (undefined4)((ulonglong)dVar11 >> 0x20);
  local_1a8._8_4_ = SUB84(dVar11,0);
  local_1a8._0_8_ = dVar19;
  local_1a8._12_4_ = uVar40;
  local_198._8_4_ = SUB84(dVar10,0);
  local_198._0_8_ = dVar17;
  local_198._12_4_ = uVar39;
  dVar4 = *(double *)(lVar8 + 0x30);
  dVar5 = *(double *)(lVar8 + 0x20);
  dVar6 = *(double *)(lVar8 + 0x28);
  local_188 = *(double *)(lVar8 + 0x20);
  dStack_180 = *(double *)(lVar8 + 0x28);
  local_178 = *(double *)(lVar8 + 0x30);
  uStack_170 = 0;
  local_168 = 0x3ff0000000000000;
  uStack_160 = 0x3ff0000000000000;
  local_158 = 0x3ff0000000000000;
  uStack_150 = 0;
  dVar21 = *(double *)(lVar27 + 0x260);
  dVar22 = *(double *)(lVar27 + 0x268);
  dVar23 = *(double *)(lVar27 + 0x270);
  lVar38 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_180 - dVar22));
  auVar14._8_4_ = (int)lVar38;
  auVar14._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_188 - dVar21));
  auVar14._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
  iVar26 = movmskpd((int)lVar27,auVar14);
  auVar13._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(0.0 - *(double *)(lVar27 + 0x278)));
  auVar13._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_178 - dVar23));
  uVar29 = movmskpd(uVar28,auVar13);
  if ((uVar29 & 0x3fffffff) == 0 && iVar26 == 0) {
    lVar38 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 - *(double *)(lVar27 + 0x248)));
    auVar20._8_4_ = (int)lVar38;
    auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 - *(double *)(lVar27 + 0x240)));
    auVar20._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
    uVar29 = movmskpd(iVar26,auVar20);
    lVar38 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar10 - *(double *)(lVar27 + 600)));
    auVar15._8_4_ = (int)lVar38;
    auVar15._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 - *(double *)(lVar27 + 0x250)));
    auVar15._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
    iVar26 = movmskpd(0,auVar15);
    uVar30 = iVar26 << 2 | uVar29;
    if (uVar30 != 0) {
      auVar12._8_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar27 + 0x248) + dVar11));
      auVar12._0_8_ =
           -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar27 + 0x240) + dVar19));
      iVar26 = movmskpd(uVar29,auVar12);
      lVar38 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar27 + 600) + dVar10));
      auVar9._8_4_ = (int)lVar38;
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar27 + 0x250) + dVar17))
      ;
      auVar9._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
      uVar29 = movmskpd(uVar30,auVar9);
      if ((uVar29 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_140144db0;
    }
    cVar7 = *(char *)(lVar8 + 0x1c1);
    if (cVar7 != '\0') {
      uVar29 = *(uint *)(lVar27 + 0xc);
      if ((int)uVar29 < DAT_14c9647dc) {
        lVar38 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
      }
      else {
        lVar38 = 0;
      }
      iVar26 = *(int *)(lVar38 + 0x10);
      if (*(int *)(lVar38 + 0x10) == 0) {
        LOCK();
        iVar26 = DAT_14c964868 + 1;
        UNLOCK();
        iVar35 = DAT_14c964868 + 1;
        bVar37 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar26;
        if (bVar37) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar35);
        }
        LOCK();
        iVar26 = *(int *)(lVar38 + 0x10);
        bVar37 = iVar26 == 0;
        if (bVar37) {
          *(int *)(lVar38 + 0x10) = iVar35;
          iVar26 = 0;
        }
        UNLOCK();
        if (bVar37) {
          iVar26 = iVar35;
        }
      }
      iVar35 = (int)param_1[4];
      *(uint *)(param_1 + 4) = iVar35 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar35 + 1U) {
        FUN_1417e7f98(param_1 + 3,iVar35);
      }
      lVar38 = param_1[3];
      lVar31 = (longlong)iVar35 * 0x50;
      puVar2 = (undefined8 *)(lVar38 + 0x30 + lVar31);
      *puVar2 = local_108;
      puVar2[1] = uStack_100;
      puVar2 = (undefined8 *)(lVar38 + 0x20 + lVar31);
      *puVar2 = local_118;
      puVar2[1] = uStack_110;
      puVar2 = (undefined8 *)(lVar38 + 0x10 + lVar31);
      *puVar2 = local_128;
      puVar2[1] = uStack_120;
      puVar1 = (undefined4 *)(lVar38 + lVar31);
      *puVar1 = (undefined4)local_138;
      puVar1[1] = local_138._4_4_;
      puVar1[2] = (int)uStack_130;
      puVar1[3] = uStack_130._4_4_;
      *(uint *)(lVar38 + 0x40 + lVar31) = uVar29;
      *(int *)(lVar38 + 0x44 + lVar31) = iVar26;
      *(undefined1 *)(lVar38 + 0x48 + lVar31) = 0;
      *(char *)(lVar38 + 0x49 + lVar31) = cVar7;
      *(undefined4 *)(lVar38 + 0x4a + lVar31) = local_13e;
      *(undefined2 *)(lVar38 + 0x4e + lVar31) = local_13a;
    }
    local_1b0 = (undefined1 *)(lVar8 + 0x1c1);
    if (DAT_14c761735 == '\0') goto LAB_140144e8b;
    local_138 = (longlong *)0x0;
    uStack_130 = 0;
    FUN_14360892e(lVar27,local_1a8,&local_138);
    if ((longlong)(int)uStack_130 != 0) {
      plVar34 = local_138 + (longlong)(int)uStack_130 * 0xe;
      plVar33 = local_138;
      do {
        lVar27 = *plVar33;
        dVar6 = (double)plVar33[6];
        dVar10 = (double)plVar33[7];
        dVar4 = (double)plVar33[8];
        dVar5 = *(double *)(lVar27 + 0x270);
        dVar11 = *(double *)(lVar27 + 0x260);
        dVar17 = *(double *)(lVar27 + 0x268);
        uVar36 = *local_1b0;
        lVar38 = plVar33[2];
        lVar31 = plVar33[3];
        lVar24 = plVar33[4];
        lVar25 = plVar33[5];
        uVar29 = 0;
        iVar26 = 0;
        if (lVar27 != 0) {
          uVar29 = *(uint *)(lVar27 + 0xc);
          if ((int)uVar29 < DAT_14c9647dc) {
            lVar27 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
          }
          else {
            lVar27 = 0;
          }
          iVar26 = *(int *)(lVar27 + 0x10);
          if (*(int *)(lVar27 + 0x10) == 0) {
            LOCK();
            iVar26 = DAT_14c964868 + 1;
            UNLOCK();
            iVar35 = DAT_14c964868 + 1;
            bVar37 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar26;
            if (bVar37) {
              local_1b8 = plVar34;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
              plVar34 = local_1b8;
            }
            LOCK();
            iVar26 = *(int *)(lVar27 + 0x10);
            bVar37 = iVar26 == 0;
            if (bVar37) {
              *(int *)(lVar27 + 0x10) = iVar35;
              iVar26 = 0;
            }
            UNLOCK();
            if (bVar37) {
              iVar26 = iVar35;
            }
          }
        }
        iVar35 = (int)param_1[4];
        *(uint *)(param_1 + 4) = iVar35 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar35 + 1U) {
          local_1b8 = (longlong *)CONCAT71(local_1b8._1_7_,uVar36);
          FUN_1417e7f98(param_1 + 3,iVar35);
          uVar36 = local_1b8._0_1_;
        }
        lVar27 = param_1[3];
        lVar32 = (longlong)iVar35 * 0x50;
        *(double *)(lVar27 + lVar32) = dVar6 - dVar11;
        *(double *)(lVar27 + 8 + lVar32) = dVar10 - dVar17;
        *(double *)(lVar27 + 0x10 + lVar32) = dVar4 - dVar5;
        plVar3 = (longlong *)(lVar27 + 0x20 + lVar32);
        *plVar3 = lVar38;
        plVar3[1] = lVar31;
        plVar3 = (longlong *)(lVar27 + 0x30 + lVar32);
        *plVar3 = lVar24;
        plVar3[1] = lVar25;
        *(uint *)(lVar27 + 0x40 + lVar32) = uVar29;
        *(int *)(lVar27 + 0x44 + lVar32) = iVar26;
        *(undefined1 *)(lVar27 + 0x48 + lVar32) = 1;
        *(undefined1 *)(lVar27 + 0x49 + lVar32) = uVar36;
        *(undefined4 *)(lVar27 + 0x4a + lVar32) = local_13e;
        *(undefined2 *)(lVar27 + 0x4e + lVar32) = local_13a;
        plVar33 = plVar33 + 0xe;
      } while (plVar33 != plVar34);
    }
    if (local_138 != (longlong *)0x0) {
      FUN_1400020a8(local_138);
    }
  }
  else {
LAB_140144db0:
    uVar29 = *(uint *)(lVar27 + 0xc);
    if ((int)uVar29 < DAT_14c9647dc) {
      lVar38 = (ulonglong)((uVar29 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar29 >> 0x10) * 8);
    }
    else {
      lVar38 = 0;
    }
    uVar36 = *(undefined1 *)(lVar8 + 0x1c1);
    iVar26 = *(int *)(lVar38 + 0x10);
    if (*(int *)(lVar38 + 0x10) == 0) {
      LOCK();
      iVar26 = DAT_14c964868 + 1;
      UNLOCK();
      iVar35 = DAT_14c964868 + 1;
      bVar37 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar26;
      if (bVar37) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar35);
      }
      LOCK();
      iVar26 = *(int *)(lVar38 + 0x10);
      bVar37 = iVar26 == 0;
      if (bVar37) {
        *(int *)(lVar38 + 0x10) = iVar35;
        iVar26 = 0;
      }
      UNLOCK();
      if (bVar37) {
        iVar26 = iVar35;
      }
    }
    iVar35 = (int)param_1[4];
    *(uint *)(param_1 + 4) = iVar35 + 1U;
    if (*(uint *)((longlong)param_1 + 0x24) < iVar35 + 1U) {
      FUN_1417e7f98(param_1 + 3,iVar35);
    }
    lVar38 = param_1[3];
    lVar31 = (longlong)iVar35 * 0x50;
    *(double *)(lVar38 + lVar31) = dVar5 - dVar21;
    *(double *)(lVar38 + 8 + lVar31) = dVar6 - dVar22;
    *(double *)(lVar38 + 0x10 + lVar31) = dVar4 - dVar23;
    auVar18._8_4_ = SUB84(dVar11,0);
    auVar18._0_8_ = dVar19;
    auVar18._12_4_ = uVar40;
    *(undefined1 (*) [16])(lVar38 + 0x20 + lVar31) = auVar18;
    auVar16._8_4_ = SUB84(dVar10,0);
    auVar16._0_8_ = dVar17;
    auVar16._12_4_ = uVar39;
    *(undefined1 (*) [16])(lVar38 + 0x30 + lVar31) = auVar16;
    *(uint *)(lVar38 + 0x40 + lVar31) = uVar29;
    *(int *)(lVar38 + 0x44 + lVar31) = iVar26;
    *(undefined1 *)(lVar38 + 0x48 + lVar31) = 1;
    *(undefined1 *)(lVar38 + 0x49 + lVar31) = uVar36;
    *(undefined4 *)(lVar38 + 0x4a + lVar31) = (undefined4)local_138;
    *(undefined2 *)(lVar38 + 0x4e + lVar31) = local_138._4_2_;
LAB_140144e8b:
    local_1b0 = (undefined1 *)(lVar8 + 0x1c1);
    FUN_14360892e(lVar27,local_1a8,0);
  }
  lVar8 = *(longlong *)(lVar8 + 0x50);
  if ((lVar8 == 0) ||
     (((*(char *)(lVar8 + 0x1c) != '\x0f' && (*(char *)(lVar8 + 0x1c) != '\x05')) ||
      (*(int *)(lVar8 + 0x28) < 1)))) {
    local_138 = &local_148;
    uStack_130 = CONCAT44(uStack_130._4_4_,1);
    FUN_147c813dc(local_d8,&local_138,*(undefined8 *)(*param_1 + 0x28));
  }
  else {
    local_138 = &local_148;
    uStack_130 = CONCAT44(uStack_130._4_4_,1);
    FUN_14075980a(local_d8,&local_138,*(undefined8 *)(*param_1 + 0x28));
  }
  *local_1b0 = 0;
  if ((local_f0[0] & 1) != 0) {
    FUN_1447e63de(local_f0);
  }
LAB_140144f11:
  if ((local_d0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401453a2 FUN_1401453a2 body=3962 status=ok
// SIG undefined FUN_1401453a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1401453a2(longlong param_1,longlong param_2,int param_3,longlong param_4,float *param_5,
             longlong param_6,double param_7)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong lVar27;
  char cVar28;
  double *pdVar29;
  undefined8 uVar30;
  longlong lVar31;
  undefined1 (*pauVar32) [16];
  undefined4 *puVar33;
  longlong lVar34;
  undefined4 *puVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  double dVar50;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar51;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  longlong local_1c0;
  int local_1b4;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  double local_188;
  double local_180;
  double local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar39 = param_4;
    if (param_4 == 0) {
      lVar39 = param_2;
    }
    lVar37 = *(longlong *)(lVar39 + 8);
    if (lVar37 != 0) {
      local_1c0 = param_1;
      if (param_6 == 0) {
        local_1b0 = *(longlong **)(param_1 + 0x158);
      }
      else {
        local_1b0 = (longlong *)FUN_146ee6a30();
        local_1c8 = 0;
        if (*(double *)(param_6 + 0x28) * *(double *)(param_6 + 0x28) +
            *(double *)(param_6 + 0x18) * *(double *)(param_6 + 0x18) +
            *(double *)(param_6 + 0x20) * *(double *)(param_6 + 0x20) <
            (double)_DAT_14c75f308 * (double)_DAT_14c75f308) {
          local_1c8 = (int)ROUND((double)_DAT_14c75f30c / param_7 + (double)_DAT_14c75f30c / param_7
                                 + -0.5) >> 1;
        }
        local_148 = *(undefined8 *)(param_6 + 0x30);
        uStack_140 = *(undefined8 *)(param_6 + 0x38);
        local_138 = *(undefined4 *)(param_6 + 0x40);
        uStack_134 = *(undefined4 *)(param_6 + 0x44);
        uStack_130 = *(undefined4 *)(param_6 + 0x48);
        uStack_12c = *(undefined4 *)(param_6 + 0x4c);
        local_168 = *(undefined8 *)(param_6 + 0x18);
        uStack_160 = *(undefined8 *)(param_6 + 0x20);
        local_158 = *(undefined8 *)(param_6 + 0x28);
        (**(code **)(*local_1b0 + 0x28))(local_1b0,&local_168,&local_148,param_3);
      }
      *(undefined1 *)(local_1c0 + 0x130) = *(undefined1 *)(lVar39 + 0x91);
      *(undefined1 *)(local_1c0 + 0x131) = 0;
      iVar7 = *(int *)(lVar39 + 0xa0);
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      plVar1 = (longlong *)(local_1c0 + 0x138);
      *(undefined4 *)(local_1c0 + 0x140) = 0;
      local_1b4 = param_3;
      local_1a8 = lVar37;
      local_1a0 = param_2;
      local_190 = param_4;
      if (*(int *)(local_1c0 + 0x144) != iVar7) {
        FUN_146eed996(plVar1);
      }
      lVar37 = local_1c0;
      local_198 = lVar39;
      if ((longlong)*(int *)(lVar39 + 0xa0) != 0) {
        puVar35 = *(undefined4 **)(lVar39 + 0x98);
        puVar33 = puVar35 + (longlong)*(int *)(lVar39 + 0xa0) * 0x24;
        do {
          uVar46 = *puVar35;
          uVar12 = *(undefined8 *)(puVar35 + 4);
          uVar13 = *(undefined8 *)(puVar35 + 6);
          uVar14 = *(undefined8 *)(puVar35 + 8);
          uVar15 = *(undefined8 *)(puVar35 + 10);
          uVar16 = *(undefined8 *)(puVar35 + 0xc);
          uVar17 = *(undefined8 *)(puVar35 + 0xe);
          uVar18 = *(undefined8 *)(puVar35 + 0x10);
          uVar19 = *(undefined8 *)(puVar35 + 0x12);
          uVar20 = *(undefined8 *)(puVar35 + 0x14);
          uVar21 = *(undefined8 *)(puVar35 + 0x16);
          uVar22 = *(undefined8 *)(puVar35 + 0x18);
          uVar23 = *(undefined8 *)(puVar35 + 0x1a);
          uVar30 = *(undefined8 *)(puVar35 + 0x1c);
          uVar9 = *(undefined8 *)(puVar35 + 0x1e);
          uVar47 = puVar35[0x20];
          iVar7 = *(int *)(lVar37 + 0x140);
          *(uint *)(lVar37 + 0x140) = iVar7 + 1U;
          if (*(uint *)(lVar37 + 0x144) < iVar7 + 1U) {
            FUN_146eeda06(plVar1,iVar7);
            lVar37 = local_1c0;
          }
          lVar39 = *plVar1;
          lVar31 = (longlong)iVar7 * 0x90;
          *(undefined4 *)(lVar39 + lVar31) = uVar46;
          puVar2 = (undefined8 *)(lVar39 + 0x10 + lVar31);
          *puVar2 = uVar12;
          puVar2[1] = uVar13;
          puVar2 = (undefined8 *)(lVar39 + 0x20 + lVar31);
          *puVar2 = uVar14;
          puVar2[1] = uVar15;
          puVar2 = (undefined8 *)(lVar39 + 0x30 + lVar31);
          *puVar2 = uVar16;
          puVar2[1] = uVar17;
          puVar2 = (undefined8 *)(lVar39 + 0x40 + lVar31);
          *puVar2 = uVar18;
          puVar2[1] = uVar19;
          puVar2 = (undefined8 *)(lVar39 + 0x50 + lVar31);
          *puVar2 = uVar20;
          puVar2[1] = uVar21;
          puVar2 = (undefined8 *)(lVar39 + 0x60 + lVar31);
          *puVar2 = uVar22;
          puVar2[1] = uVar23;
          *(undefined8 *)(lVar39 + 0x70 + lVar31) = uVar30;
          *(undefined8 *)(lVar39 + 0x78 + lVar31) = uVar9;
          *(undefined4 *)(lVar39 + 0x80 + lVar31) = uVar47;
          puVar35 = puVar35 + 0x24;
        } while (puVar35 != puVar33);
      }
      lVar27 = local_198;
      lVar39 = *(longlong *)(local_198 + 0xa8);
      lVar31 = *(longlong *)(lVar37 + 0x128);
      if (lVar39 != 0) {
        LOCK();
        *(int *)(lVar39 + 8) = *(int *)(lVar39 + 8) + 1;
        UNLOCK();
        local_170 = lVar39;
        FUN_1406188f0();
        *(undefined1 *)(local_1c0 + 0x131) = 1;
        lVar31 = *(longlong *)(local_1c0 + 0x128);
        lVar37 = local_1c0;
      }
      lVar39 = local_1a0;
      dVar41 = (double)*(float *)(lVar27 + 0x80);
      fVar26 = 0.0;
      if (0.0 < *(float *)(lVar27 + 0x80)) {
        dVar43 = 1.0 / dVar41;
      }
      else {
        dVar43 = 0.0;
      }
      *(double *)(lVar31 + 0x148) = dVar41;
      *(double *)(*(longlong *)(lVar37 + 0x128) + 0x150) = dVar43;
      fVar3 = *(float *)(lVar27 + 0x8c);
      fVar4 = *(float *)(lVar27 + 0x84);
      fVar5 = *(float *)(lVar27 + 0x88);
      if ((((fVar4 != 0.0) || (NAN(fVar4))) || (fVar5 != 0.0)) || (NAN(fVar5))) {
LAB_14014566e:
        fVar24 = 1.0 / fVar3;
        fVar25 = 1.0 / fVar5;
        fVar26 = 1.0 / fVar4;
      }
      else {
        fVar25 = 0.0;
        fVar24 = 0.0;
        if ((fVar3 != 0.0) || (NAN(fVar3))) goto LAB_14014566e;
      }
      lVar31 = *(longlong *)(lVar37 + 0x128);
      *(float *)(lVar31 + 0x130) = fVar4;
      *(float *)(lVar31 + 0x134) = fVar5;
      *(float *)(lVar31 + 0x138) = fVar3;
      lVar31 = *(longlong *)(lVar37 + 0x128);
      *(float *)(lVar31 + 0x13c) = fVar26;
      *(float *)(lVar31 + 0x140) = fVar25;
      *(float *)(lVar31 + 0x144) = fVar24;
      lVar31 = *(longlong *)(lVar37 + 0x128);
      cVar28 = *(char *)(lVar27 + 0x90);
      if (cVar28 == '\x01' && *(char *)(lVar31 + 0x1ac) == '\x04') {
        *(undefined1 *)(lVar31 + 0x1c1) = 2;
LAB_1401462f4:
        *(undefined1 (*) [16])(lVar31 + 0x98) = ZEXT416(0);
        *(undefined8 *)(lVar31 + 0xa8) = 0;
        *(byte *)(lVar31 + 0x94) = *(byte *)(lVar31 + 0x94) & 0xfb;
      }
      else if (cVar28 == '\x04' && *(char *)(lVar31 + 0x1ac) == '\x01') {
        *(undefined1 *)(lVar31 + 0x1c1) = 1;
      }
      else if (cVar28 == '\x01') goto LAB_1401462f4;
      *(char *)(lVar31 + 0x1ac) = cVar28;
      lVar31 = *(longlong *)(lVar37 + 0x128);
      if (0 < *(int *)(lVar31 + 0x88)) {
        lVar40 = 0;
        lVar34 = 0;
        lVar38 = 0;
        do {
          lVar36 = *(longlong *)(lVar31 + 0x80);
          if (*(longlong *)(lVar31 + 0x80) == 0) {
            lVar36 = lVar31 + 0x78;
          }
          lVar10 = *(longlong *)(lVar36 + lVar38 * 8);
          if (lVar10 != 0) {
            if (lVar38 < *(int *)(lVar27 + 200)) {
              pauVar32 = (undefined1 (*) [16])(*(longlong *)(lVar27 + 0xc0) + lVar40);
              if ((*(byte *)(lVar10 + 8) & 3) == 0) {
                FUN_146285926();
                lVar37 = local_1c0;
              }
              else {
                auVar53 = *pauVar32;
                uVar46 = *(undefined4 *)pauVar32[1];
                uVar47 = *(undefined4 *)(pauVar32[1] + 4);
                uVar48 = *(undefined4 *)(pauVar32[1] + 8);
                uVar49 = *(undefined4 *)(pauVar32[1] + 0xc);
                uVar30 = *(undefined8 *)(pauVar32[2] + 8);
                *(undefined8 *)(lVar10 + 0x68) = *(undefined8 *)pauVar32[2];
                *(undefined8 *)(lVar10 + 0x70) = uVar30;
                *(undefined4 *)(lVar10 + 0x58) = uVar46;
                *(undefined4 *)(lVar10 + 0x5c) = uVar47;
                *(undefined4 *)(lVar10 + 0x60) = uVar48;
                *(undefined4 *)(lVar10 + 100) = uVar49;
                *(undefined1 (*) [16])(lVar10 + 0x48) = auVar53;
              }
            }
            if (lVar38 < *(int *)(lVar27 + 0xd8)) {
              lVar10 = *(longlong *)(lVar36 + lVar38 * 8);
              pauVar32 = (undefined1 (*) [16])(*(longlong *)(lVar27 + 0xd0) + lVar34);
              if ((*(uint *)(lVar10 + 8) & 3) == 0) {
                lVar11 = *(longlong *)(lVar10 + 0x48);
                *(undefined1 (*) [16])(lVar10 + 0x50) = *pauVar32;
                uVar8 = *(uint *)(lVar10 + 0xc);
                *(uint *)(lVar10 + 0xc) = uVar8 | 1;
                if ((lVar11 != 0 && uVar8 == 0) && (*(longlong *)(lVar11 + 8) != 0)) {
                  FUN_144821112(*(longlong *)(lVar11 + 8) + 0x70,lVar11,*(uint *)(lVar10 + 8) >> 3);
                  lVar37 = local_1c0;
                }
              }
              else {
                *(undefined1 (*) [16])(lVar10 + 0x48) = *pauVar32;
              }
            }
            if (lVar38 < *(int *)(lVar27 + 0xe8)) {
              lVar36 = *(longlong *)(lVar36 + lVar38 * 8);
              pauVar32 = (undefined1 (*) [16])(*(longlong *)(lVar27 + 0xe0) + lVar34);
              if ((*(uint *)(lVar36 + 8) & 3) == 0) {
                lVar10 = *(longlong *)(lVar36 + 0x48);
                *(undefined1 (*) [16])(lVar36 + 0x60) = *pauVar32;
                uVar8 = *(uint *)(lVar36 + 0xc);
                *(uint *)(lVar36 + 0xc) = uVar8 | 1;
                if ((lVar10 != 0 && uVar8 == 0) && (*(longlong *)(lVar10 + 8) != 0)) {
                  FUN_144821112(*(longlong *)(lVar10 + 8) + 0x70,lVar10,*(uint *)(lVar36 + 8) >> 3);
                  lVar37 = local_1c0;
                }
              }
              else {
                *(undefined1 (*) [16])(lVar36 + 0x58) = *pauVar32;
              }
            }
          }
          lVar38 = lVar38 + 1;
          lVar34 = lVar34 + 0x10;
          lVar40 = lVar40 + 0x30;
        } while (lVar38 < *(int *)(lVar31 + 0x88));
      }
      lVar27 = local_190;
      lVar31 = local_1a8;
      plVar1 = local_1b0;
      iVar7 = local_1b4;
      if (local_190 == 0) {
        if (*(int *)(local_1a8 + 0x20) <= local_1b4) {
          lVar31 = *(longlong *)(lVar37 + 0x128);
          *(undefined8 *)(lVar31 + 0x30) = *(undefined8 *)(lVar39 + 0x28);
          uVar30 = *(undefined8 *)(lVar39 + 0x20);
          *(undefined8 *)(lVar31 + 0x20) = *(undefined8 *)(lVar39 + 0x18);
          *(undefined8 *)(lVar31 + 0x28) = uVar30;
        }
        if (*(int *)(local_1a8 + 0x50) <= local_1b4) {
          dVar41 = *(double *)(lVar39 + 0x48);
          dVar43 = *(double *)(lVar39 + 0x40);
          dVar56 = *(double *)(lVar39 + 0x38);
          lVar31 = *(longlong *)(lVar37 + 0x128);
          *(float *)(lVar31 + 0x40) = (float)*(double *)(lVar39 + 0x30);
          *(float *)(lVar31 + 0x44) = (float)dVar56;
          *(float *)(lVar31 + 0x48) = (float)dVar43;
          *(float *)(lVar31 + 0x4c) = (float)dVar41;
        }
        if (*(int *)(local_1a8 + 0x78) <= local_1b4) {
          dVar41 = *(double *)(lVar39 + 0x60);
          dVar43 = *(double *)(lVar39 + 0x58);
          lVar31 = *(longlong *)(lVar37 + 0x128);
          *(float *)(lVar31 + 0x98) = (float)*(double *)(lVar39 + 0x50);
          *(float *)(lVar31 + 0x9c) = (float)dVar43;
          *(float *)(lVar31 + 0xa0) = (float)dVar41;
        }
        if (*(int *)(local_1a8 + 0x98) <= local_1b4) {
          dVar41 = *(double *)(lVar39 + 0x78);
          dVar43 = *(double *)(lVar39 + 0x68);
          dVar56 = *(double *)(lVar39 + 0x70);
          goto LAB_1401460c0;
        }
      }
      else {
        if (local_1b0 == (longlong *)0x0) {
          cVar28 = '\0';
        }
        else {
          (**(code **)(*local_1b0 + 0x30))(local_1b0,local_1b4,SUB84(param_7,0));
          cVar28 = (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar37 = local_1c0;
        }
        pdVar29 = (double *)(lVar31 + 8);
        if (*(int *)(lVar31 + 0x20) < iVar7) {
          pdVar29 = (double *)(lVar39 + 0x18);
        }
        if (pdVar29 != (double *)0x0 && *(int *)(lVar31 + 0x20) <= iVar7) {
          if ((plVar1 != (longlong *)0x0) && (0.0 < DAT_14c9968b4)) {
            local_178 = *(double *)(lVar27 + 0x28) - pdVar29[2];
            local_180 = *(double *)(lVar27 + 0x20) - pdVar29[1];
            local_188 = *(double *)(lVar27 + 0x18) - *pdVar29;
            (**(code **)(*plVar1 + 0x38))(plVar1);
            lVar37 = local_1c0;
          }
          dVar56 = (double)*param_5;
          dVar41 = (*(double *)(lVar27 + 0x28) - pdVar29[2]) * dVar56 + pdVar29[2];
          dVar43 = (*(double *)(lVar27 + 0x20) - pdVar29[1]) * dVar56 + pdVar29[1];
          dVar56 = (*(double *)(lVar27 + 0x18) - *pdVar29) * dVar56 + *pdVar29;
          if (cVar28 != '\0') {
            (**(code **)(*plVar1 + 0x18))(local_1b0,&local_128);
            dVar41 = dVar41 + (double)local_118._0_8_;
            dVar43 = dVar43 + dStack_120;
            dVar56 = dVar56 + local_128;
            lVar37 = local_1c0;
          }
          lVar34 = *(longlong *)(lVar37 + 0x128);
          *(double *)(lVar34 + 0x20) = dVar56;
          *(double *)(lVar34 + 0x28) = dVar43;
          *(double *)(lVar34 + 0x30) = dVar41;
        }
        lVar34 = lVar31;
        if (*(int *)(lVar31 + 0x50) < iVar7) {
          lVar34 = lVar39;
        }
        if (lVar34 != -0x30 && *(int *)(lVar31 + 0x50) <= iVar7) {
          if (cVar28 == '\0') {
            dVar41 = *(double *)(lVar34 + 0x30);
            uVar46 = SUB84(dVar41,0);
            uVar47 = (undefined4)((ulonglong)dVar41 >> 0x20);
            dVar6 = *(double *)(lVar34 + 0x38);
            dVar43 = *(double *)(lVar27 + 0x30);
            dVar50 = *(double *)(lVar27 + 0x38);
            dVar56 = *(double *)(lVar34 + 0x40);
            uVar48 = SUB84(dVar56,0);
            uVar49 = (undefined4)((ulonglong)dVar56 >> 0x20);
            dVar44 = *(double *)(lVar27 + 0x40);
            uVar59 = SUB84(dVar44,0);
            uVar60 = (undefined4)((ulonglong)dVar44 >> 0x20);
            dVar42 = *(double *)(lVar34 + 0x48);
            uVar61 = SUB84(dVar42,0);
            uVar62 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar51 = *(double *)(lVar27 + 0x48);
            uVar63 = SUB84(dVar51,0);
            uVar64 = (undefined4)((ulonglong)dVar51 >> 0x20);
            dVar41 = dVar42 * dVar51 + dVar56 * dVar44 + dVar41 * dVar43 + dVar6 * dVar50;
            dVar44 = dVar41 * (double)(&DAT_149931160)[0.0 <= dVar41];
            dVar56 = 1.0 - (double)*param_5;
            dVar41 = (double)(&DAT_149931160)[0.0 <= dVar41] * (double)*param_5;
            if (dVar44 < 0.9999) {
              dVar43 = dVar44;
              if (1.0 <= dVar44) {
                dVar43 = 1.0;
              }
              dVar43 = acos((double)(-(ulonglong)(dVar44 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar44 < -1.0) & (ulonglong)dVar43));
              dVar44 = sin(dVar43);
              dVar56 = sin(dVar56 * dVar43);
              dVar56 = dVar56 * (1.0 / dVar44);
              dVar41 = sin(dVar41 * dVar43);
              dVar41 = dVar41 * (1.0 / dVar44);
              uVar61 = (undefined4)*(undefined8 *)(lVar34 + 0x48);
              uVar62 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x48) >> 0x20);
              uVar63 = (undefined4)*(undefined8 *)(lVar27 + 0x48);
              uVar64 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x48) >> 0x20);
              uVar48 = (undefined4)*(undefined8 *)(lVar34 + 0x40);
              uVar49 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x40) >> 0x20);
              uVar59 = (undefined4)*(undefined8 *)(lVar27 + 0x40);
              uVar60 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x40) >> 0x20);
              uVar46 = (undefined4)*(undefined8 *)(lVar34 + 0x30);
              uVar47 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x30) >> 0x20);
              dVar6 = *(double *)(lVar34 + 0x38);
              dVar43 = *(double *)(lVar27 + 0x30);
              dVar50 = *(double *)(lVar27 + 0x38);
              lVar37 = local_1c0;
            }
            dVar42 = (double)CONCAT44(uVar62,uVar61) * dVar56 +
                     (double)CONCAT44(uVar64,uVar63) * dVar41;
            dVar44 = (double)CONCAT44(uVar49,uVar48) * dVar56 +
                     (double)CONCAT44(uVar60,uVar59) * dVar41;
            dVar51 = dVar6 * dVar56 + dVar50 * dVar41;
            dVar41 = (double)CONCAT44(uVar47,uVar46) * dVar56 + dVar43 * dVar41;
            dVar43 = dVar44 * dVar44 + dVar41 * dVar41;
            dVar56 = dVar42 * dVar42 + dVar51 * dVar51;
            auVar54._0_8_ = dVar43 + dVar56;
            auVar54._8_8_ = dVar43 + dVar56;
            auVar53._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
            auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
            auVar55 = sqrtpd(auVar54,auVar54);
            auVar55 = divpd(_DAT_149934d80,auVar55);
            auVar57._0_8_ = auVar55._0_8_ * dVar44;
            auVar57._8_8_ = auVar55._8_8_ * dVar42;
            dVar41 = (double)((ulonglong)(dVar41 * auVar55._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_));
            dVar43 = (double)((ulonglong)(dVar51 * auVar55._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_));
            auVar55 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar53);
          }
          else {
            (**(code **)(*local_1b0 + 0x20))(local_1b0,&local_128,*param_5);
            dVar41 = *(double *)(lVar34 + 0x30);
            uVar48 = SUB84(dVar41,0);
            uVar49 = (undefined4)((ulonglong)dVar41 >> 0x20);
            dVar6 = *(double *)(lVar34 + 0x38);
            dVar43 = *(double *)(lVar27 + 0x30);
            dVar56 = *(double *)(lVar27 + 0x38);
            dVar44 = *(double *)(lVar34 + 0x40);
            uVar46 = SUB84(dVar44,0);
            uVar47 = (undefined4)((ulonglong)dVar44 >> 0x20);
            dVar42 = *(double *)(lVar27 + 0x40);
            uVar59 = SUB84(dVar42,0);
            uVar60 = (undefined4)((ulonglong)dVar42 >> 0x20);
            dVar51 = *(double *)(lVar34 + 0x48);
            uVar61 = SUB84(dVar51,0);
            uVar62 = (undefined4)((ulonglong)dVar51 >> 0x20);
            dVar50 = *(double *)(lVar27 + 0x48);
            uVar63 = SUB84(dVar50,0);
            uVar64 = (undefined4)((ulonglong)dVar50 >> 0x20);
            dVar41 = dVar51 * dVar50 + dVar44 * dVar42 + dVar41 * dVar43 + dVar6 * dVar56;
            dVar42 = dVar41 * (double)(&DAT_149931160)[0.0 <= dVar41];
            dVar44 = 1.0 - (double)*param_5;
            dVar41 = (double)(&DAT_149931160)[0.0 <= dVar41] * (double)*param_5;
            if (dVar42 < 0.9999) {
              dVar43 = dVar42;
              if (1.0 <= dVar42) {
                dVar43 = 1.0;
              }
              dVar43 = acos((double)(-(ulonglong)(dVar42 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar42 < -1.0) & (ulonglong)dVar43));
              dVar56 = sin(dVar43);
              dVar44 = sin(dVar44 * dVar43);
              dVar44 = dVar44 * (1.0 / dVar56);
              dVar41 = sin(dVar41 * dVar43);
              dVar41 = dVar41 * (1.0 / dVar56);
              uVar61 = (undefined4)*(undefined8 *)(lVar34 + 0x48);
              uVar62 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x48) >> 0x20);
              uVar63 = (undefined4)*(undefined8 *)(lVar27 + 0x48);
              uVar64 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x48) >> 0x20);
              uVar46 = (undefined4)*(undefined8 *)(lVar34 + 0x40);
              uVar47 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x40) >> 0x20);
              uVar59 = (undefined4)*(undefined8 *)(lVar27 + 0x40);
              uVar60 = (undefined4)((ulonglong)*(undefined8 *)(lVar27 + 0x40) >> 0x20);
              uVar48 = (undefined4)*(undefined8 *)(lVar34 + 0x30);
              uVar49 = (undefined4)((ulonglong)*(undefined8 *)(lVar34 + 0x30) >> 0x20);
              dVar6 = *(double *)(lVar34 + 0x38);
              dVar43 = *(double *)(lVar27 + 0x30);
              dVar56 = *(double *)(lVar27 + 0x38);
            }
            dVar51 = (double)CONCAT44(uVar62,uVar61) * dVar44 +
                     (double)CONCAT44(uVar64,uVar63) * dVar41;
            dVar42 = (double)CONCAT44(uVar47,uVar46) * dVar44 +
                     (double)CONCAT44(uVar60,uVar59) * dVar41;
            dVar50 = dVar6 * dVar44 + dVar56 * dVar41;
            dVar41 = (double)CONCAT44(uVar49,uVar48) * dVar44 + dVar43 * dVar41;
            dVar43 = dVar42 * dVar42 + dVar41 * dVar41;
            dVar56 = dVar51 * dVar51 + dVar50 * dVar50;
            auVar52._0_8_ = dVar43 + dVar56;
            auVar52._8_8_ = dVar43 + dVar56;
            auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
            auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
            auVar53 = sqrtpd(auVar52,auVar52);
            auVar53 = divpd(_DAT_149934d80,auVar53);
            auVar58._0_8_ = auVar53._0_8_ * dVar42;
            auVar58._8_8_ = auVar53._8_8_ * dVar51;
            dVar56 = (double)((ulonglong)(dVar41 * auVar53._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
            dVar44 = (double)((ulonglong)(dVar50 * auVar53._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
            auVar53 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar58,auVar45);
            dVar42 = auVar53._0_8_;
            dVar51 = auVar53._8_8_;
            dVar41 = dVar44 * (double)local_118._0_8_ * -1.0 +
                     dVar42 * dStack_120 +
                     local_128 * dVar51 * 1.0 + (double)local_118._8_8_ * dVar56;
            dVar43 = dVar56 * (double)local_118._0_8_ * 1.0 +
                     dVar51 * dStack_120 +
                     local_128 * dVar42 * -1.0 + (double)local_118._8_8_ * dVar44;
            auVar55._0_8_ =
                 dVar51 * (double)local_118._0_8_ * 1.0 +
                 ((local_128 * dVar44 * 1.0 + (double)local_118._8_8_ * dVar42) -
                 dVar56 * dStack_120);
            auVar55._8_8_ =
                 dVar42 * (double)local_118._0_8_ * -1.0 +
                 ((local_128 * dVar56 * -1.0 + (double)local_118._8_8_ * dVar51) -
                 dVar44 * dStack_120);
            lVar37 = local_1c0;
          }
          lVar34 = *(longlong *)(lVar37 + 0x128);
          *(float *)(lVar34 + 0x40) = (float)dVar41;
          *(float *)(lVar34 + 0x44) = (float)dVar43;
          *(float *)(lVar34 + 0x48) = (float)auVar55._0_8_;
          *(float *)(lVar34 + 0x4c) = (float)auVar55._8_8_;
        }
        pdVar29 = (double *)(lVar31 + 0x60);
        if (*(int *)(lVar31 + 0x78) < iVar7) {
          pdVar29 = (double *)(lVar39 + 0x50);
        }
        if (pdVar29 != (double *)0x0 && *(int *)(lVar31 + 0x78) <= iVar7) {
          dVar41 = *(double *)(lVar27 + 0x60);
          dVar43 = pdVar29[2];
          dVar56 = *(double *)(lVar27 + 0x58);
          dVar44 = pdVar29[1];
          dVar42 = (double)*param_5;
          lVar34 = *(longlong *)(lVar37 + 0x128);
          *(float *)(lVar34 + 0x98) =
               (float)((*(double *)(lVar27 + 0x50) - *pdVar29) * dVar42 + *pdVar29);
          *(float *)(lVar34 + 0x9c) = (float)((dVar56 - dVar44) * dVar42 + dVar44);
          *(float *)(lVar34 + 0xa0) = (float)((dVar41 - dVar43) * dVar42 + dVar43);
        }
        pdVar29 = (double *)(lVar39 + 0x68);
        if (iVar7 <= *(int *)(lVar31 + 0x98)) {
          pdVar29 = (double *)(lVar31 + 0x80);
        }
        if (pdVar29 != (double *)0x0 && *(int *)(lVar31 + 0x98) <= iVar7) {
          dVar43 = (double)*param_5;
          dVar41 = (*(double *)(lVar27 + 0x78) - pdVar29[2]) * dVar43 + pdVar29[2];
          dVar56 = (*(double *)(lVar27 + 0x70) - pdVar29[1]) * dVar43 + pdVar29[1];
          dVar43 = (*(double *)(lVar27 + 0x68) - *pdVar29) * dVar43 + *pdVar29;
LAB_1401460c0:
          lVar39 = *(longlong *)(lVar37 + 0x128);
          *(float *)(lVar39 + 0xa4) = (float)dVar43;
          *(float *)(lVar39 + 0xa8) = (float)dVar56;
          *(float *)(lVar39 + 0xac) = (float)dVar41;
        }
      }
      lVar39 = *(longlong *)(lVar37 + 0x128);
      dStack_120 = (double)*(float *)(lVar39 + 0x44);
      local_128 = (double)*(float *)(lVar39 + 0x40);
      local_118._8_4_ = SUB84((double)*(float *)(lVar39 + 0x4c),0);
      local_118._0_8_ = (double)*(float *)(lVar39 + 0x48);
      local_118._12_4_ = (int)((ulonglong)(double)*(float *)(lVar39 + 0x4c) >> 0x20);
      local_108 = *(undefined8 *)(lVar39 + 0x20);
      uStack_100 = *(undefined8 *)(lVar39 + 0x28);
      local_f8 = *(undefined8 *)(lVar39 + 0x30);
      uStack_f0 = 0;
      local_e8 = 0x3ff0000000000000;
      uStack_e0 = 0x3ff0000000000000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      if ((*(longlong *)(lVar39 + 0x50) != 0) &&
         (*(char *)(*(longlong *)(lVar39 + 0x50) + 0x1a) == '\x01')) {
        lVar37 = lVar39 + 0x78;
        if (*(longlong *)(lVar39 + 0x80) != 0) {
          lVar37 = *(longlong *)(lVar39 + 0x80);
        }
        iVar7 = *(int *)(lVar39 + 0x88);
        if ((longlong)iVar7 != 0) {
          lVar39 = 0;
          do {
            FUN_14484a332(*(undefined8 *)(lVar37 + lVar39),&local_128);
            lVar39 = lVar39 + 8;
          } while ((longlong)iVar7 * 8 != lVar39);
        }
      }
      uVar30 = 1;
      goto LAB_1401461b3;
    }
  }
  uVar30 = 0;
LAB_1401461b3:
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30;
}



// FUNCTION 14014631e FUN_14014631e body=144 status=ok
// SIG undefined FUN_14014631e(void)

longlong * FUN_14014631e(longlong *param_1,longlong *param_2,double param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_1[5]) {
    lVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(*param_1 + lVar3 * 8);
      FUN_1401463ae(uVar2,param_3 - (double)*(float *)(param_1[6] + lVar3 * 4));
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1401467b8(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[5]);
  }
  return param_2;
}



// FUNCTION 1401463ae FUN_1401463ae body=258 status=ok
// SIG undefined FUN_1401463ae(void)

void FUN_1401463ae(longlong param_1,double param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((0.0 <= param_2) &&
     ((*(longlong *)(param_1 + 0x38) == 0 ||
      (*(double *)(*(longlong *)(param_1 + 0x38) + 0xb0) < param_2)))) {
    FUN_14484f202(param_1);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar2 = FUN_14014691a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
      *(longlong *)(param_1 + 0x38) = lVar2;
      if (lVar2 == 0) goto LAB_14014646a;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (param_2 < *(double *)(lVar2 + 0xb0) || param_2 == *(double *)(lVar2 + 0xb0))
      goto LAB_140146427;
      cVar1 = FUN_1401464b0(param_1);
    } while (cVar1 != '\0');
    lVar2 = *(longlong *)(param_1 + 0x38);
LAB_140146427:
    if (lVar2 != 0) {
      FUN_14014789c(param_1);
    }
  }
LAB_14014646a:
  FUN_140146eda(param_1);
  return;
}



// FUNCTION 1401464b0 FUN_1401464b0 body=147 status=ok
// SIG undefined FUN_1401464b0(void)

bool FUN_1401464b0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = FUN_14014691a(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_140146544(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0xa8));
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    FUN_14014742e(param_1);
    *(longlong *)(param_1 + 0x38) = lVar1;
    dVar2 = *(double *)(lVar1 + 0xb0);
    dVar3 = *(double *)(param_1 + 0x48);
    if (dVar2 <= dVar3) {
      FUN_1401490f2(param_1);
      dVar2 = *(double *)(lVar1 + 0xb0);
      dVar3 = *(double *)(param_1 + 0x48);
    }
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    *(double *)(param_1 + 0x48) = dVar3;
  }
  return lVar1 != 0;
}



// FUNCTION 140146544 FUN_140146544 body=168 status=ok
// SIG undefined FUN_140146544(void)

void FUN_140146544(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    iVar4 = 1;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) == param_2) {
        *(undefined1 *)((longlong)param_3 + 10 + lVar1 + lVar3) = 1;
        if (*(char *)(lVar1 + 10 + lVar3) != '\x01') {
          return;
        }
        if (*(char *)(lVar1 + 0xb + lVar3) != '\x01') {
          return;
        }
        FUN_1401465ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar1 + lVar3));
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 - iVar4 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3),
                  (void *)(*(longlong *)(param_1 + 0x18) + lVar3 + 0x10),
                  (longlong)(iVar2 - iVar4) << 4);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar2 + -1;
        FUN_14014663a((longlong *)(param_1 + 0x18));
        return;
      }
      lVar3 = lVar3 + 0x10;
      iVar4 = iVar4 + 1;
    } while ((ulonglong)*(uint *)(param_1 + 0x20) << 4 != lVar3);
  }
  return;
}



// FUNCTION 1401465ec FUN_1401465ec body=78 status=ok
// SIG undefined FUN_1401465ec(void)

void FUN_1401465ec(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140146a7a(param_2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 14014663a FUN_14014663a body=137 status=ok
// SIG undefined FUN_14014663a(void)

void FUN_14014663a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1401466c8 FUN_1401466c8 body=227 status=ok
// SIG undefined FUN_1401466c8(void)

undefined8 FUN_1401466c8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        lVar1 = 0;
      } while (iVar4 != -1);
      goto LAB_140146792;
    }
  }
  lVar1 = 0;
LAB_140146792:
  return *(undefined8 *)(lVar1 + 0x30);
}



// FUNCTION 1401467b8 FUN_1401467b8 body=353 status=ok
// SIG undefined FUN_1401467b8(void)

void FUN_1401467b8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14014683d;
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
LAB_14014683d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14014691a FUN_14014691a body=351 status=ok
// SIG undefined FUN_14014691a(void)

undefined8 FUN_14014691a(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar9 = (ulonglong)*(int *)(param_1 + 0x20);
  if ((longlong)uVar9 < 1) {
LAB_140146961:
    lVar7 = *(longlong *)(param_1 + 0x10);
    lVar10 = **(longlong **)(lVar7 + 0x88);
    if (lVar10 != 0) {
      lVar5 = *(longlong *)(lVar10 + 8);
      lVar6 = *(longlong *)(lVar7 + 0x88);
      *(longlong *)(lVar7 + 0x88) = lVar10;
      *(undefined8 *)(lVar10 + 8) = 0;
      if (lVar6 != 0) {
        FUN_1400020a8();
      }
      if (lVar5 != 0) {
        iVar4 = *(int *)(param_1 + 0x28);
        lVar7 = (longlong)iVar4;
        if (lVar7 < 1) {
LAB_1401469cc:
          do {
            *(undefined1 *)((longlong)&uStack_30 + lVar7) = 1;
            *(undefined1 *)((longlong)&uStack_30 + lVar7 + 2) = 1;
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 != 2);
        }
        else {
          lVar10 = 0;
          do {
            *(undefined1 *)((longlong)&uStack_30 + lVar10) = 0;
            *(undefined1 *)((longlong)&uStack_30 + lVar10 + 2) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar7 != lVar10);
          if (iVar4 == 1) goto LAB_1401469cc;
        }
        iVar4 = *(int *)(param_1 + 0x20);
        lVar10 = (longlong)iVar4;
        *(uint *)(param_1 + 0x20) = iVar4 + 1U;
        local_38 = lVar5;
        if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
          FUN_1456d0e90(plVar1,iVar4);
        }
        puVar2 = (undefined4 *)(*plVar1 + lVar10 * 0x10);
        *puVar2 = (undefined4)local_38;
        puVar2[1] = local_38._4_4_;
        puVar2[2] = uStack_30;
        puVar2[3] = uStack_2c;
        lVar7 = *plVar1;
        goto LAB_140146a07;
      }
    }
    uVar8 = 0;
  }
  else {
    lVar7 = *plVar1;
    if (*(char *)((longlong)param_2 + -8 + uVar9 * 0x10 + lVar7) != '\0') goto LAB_140146961;
    pcVar11 = (char *)(uVar9 * 0x10 + (longlong)param_2 + lVar7 + -0x18);
    do {
      if (uVar9 < 2) {
        uVar9 = 0;
        goto LAB_140146a71;
      }
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + -0x10;
    } while (cVar3 != '\x01');
    if (uVar9 == 0xffffffffffffffff) goto LAB_140146961;
LAB_140146a71:
    lVar10 = (longlong)(int)uVar9;
LAB_140146a07:
    *(undefined1 *)((longlong)param_2 + 8 + lVar7 + lVar10 * 0x10) = 1;
    uVar8 = *(undefined8 *)(lVar7 + lVar10 * 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140146a7a FUN_140146a7a body=371 status=ok
// SIG undefined FUN_140146a7a(void)

void FUN_140146a7a(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_14484f1b4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14172c1b0(param_1,0);
  }
  if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
    FUN_1401494fa(param_1 + 2);
    FUN_140149322(param_1 + 2);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x6c);
  FUN_140146c68(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x6c) != 0)) {
    FUN_14172c298(param_1 + 0xc,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x7c);
  FUN_140146c3d(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) {
    FUN_146e2e260(param_1 + 0xe,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x8c);
  FUN_14484f169(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
    FUN_140148042(param_1 + 0x10,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x9c);
  FUN_140146bed(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x9c) != 0)) {
    FUN_1456d0d4a(param_1 + 0x12,0);
    return;
  }
  return;
}



// FUNCTION 140146bed FUN_140146bed body=80 status=ok
// SIG undefined FUN_140146bed(void)

void FUN_140146bed(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140146c3d FUN_140146c3d body=43 status=ok
// SIG undefined FUN_140146c3d(void)

void FUN_140146c3d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ce581e(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 140146c68 FUN_140146c68 body=99 status=ok
// SIG undefined FUN_140146c68(void)

void FUN_140146c68(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar5 = (longlong *)(param_1 + 0x18);
    do {
      puVar3 = (undefined8 *)*plVar5;
      if (puVar3 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar4 = (longlong *)plVar5[-1];
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
      plVar5 = plVar5 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140146ccc FUN_140146ccc body=306 status=ok
// SIG undefined FUN_140146ccc(void)

void FUN_140146ccc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140146d65;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    iVar4 = 0;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140146d3e:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140146d3e;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140146d65;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140146d65:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140146dff FUN_140146dff body=55 status=ok
// SIG undefined FUN_140146dff(void)

void FUN_140146dff(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146ce581e(param_1 + 0xf0);
    FUN_146ce581e(param_1);
    param_1 = param_1 + 0x1e0;
  }
  return;
}



// FUNCTION 140146e36 FUN_140146e36 body=163 status=ok
// SIG undefined FUN_140146e36(void)

void FUN_140146e36(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar5 = (longlong *)(param_1 + 0x38);
    do {
      puVar3 = (undefined8 *)*plVar5;
      if (puVar3 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar4 = (longlong *)plVar5[-1];
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
      puVar3 = (undefined8 *)plVar5[-4];
      if (puVar3 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      plVar4 = (longlong *)plVar5[-5];
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
      plVar5 = plVar5 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140146eda FUN_140146eda body=838 status=ok
// SIG undefined FUN_140146eda(void)

longlong * FUN_140146eda(longlong *param_1,undefined8 param_2,double param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  uint local_74;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(float *)(param_1 + 8) = (float)param_3;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = (int)param_1[0xf];
  if (iVar1 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0xc);
    }
    uVar16 = *puVar5;
    if (uVar16 == 0) {
      iVar11 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar11 = iVar1 + -1;
      }
      uVar19 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar19;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar19) goto LAB_140146f30;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar5[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar19 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar8 = uVar17 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar10) {
      iVar10 = iVar1;
    }
  }
  if (iVar10 != iVar1) {
    local_70 = param_1 + 10;
    uVar16 = 0xffffffff;
    do {
      local_80 = *local_70;
      local_88 = *(longlong *)(local_80 + (longlong)iVar10 * 0xb0);
      plVar3 = *(longlong **)(local_88 + 0x60);
      local_74 = uVar16;
      if ((plVar3 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), cVar4 == '\0')) {
        uVar8 = uStack_50;
        lVar12 = (longlong)(int)uStack_50;
        uVar16 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar16);
        if (uStack_50._4_4_ < uVar16) {
          FUN_140711e5c(&local_58,uVar8 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar12 * 8) = local_88;
      }
      else if ((int)plVar3[1] == -1) {
        lVar15 = local_80 + (longlong)iVar10 * 0xb0;
        iVar10 = FUN_146d8d4fc(param_1);
        *(int *)(plVar3 + 1) = iVar10;
        local_88 = *param_1;
        lVar12 = (longlong)iVar10 * 0x120;
        local_80 = local_88 + lVar12;
        local_60 = local_88 + lVar12 + 0x90;
        local_68 = lVar12;
        FUN_1429afc90(local_60,lVar15 + 0x10);
        lVar12 = local_88 + lVar12;
        puVar13 = (undefined8 *)(lVar15 + 0x28);
        puVar14 = (undefined8 *)(lVar12 + 0xa8);
        for (lVar18 = 0xd; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)(lVar12 + 0x110) = *(undefined1 *)(lVar15 + 0x90);
        FUN_1429afc90(local_80,local_60);
        puVar13 = (undefined8 *)(lVar12 + 0xa8);
        puVar14 = (undefined8 *)(local_88 + local_68 + 0x18);
        for (lVar15 = 0xd; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        *(undefined1 *)(local_88 + local_68 + 0x80) = *(undefined1 *)(lVar12 + 0x110);
      }
      lVar12 = local_58;
      uVar16 = local_74 & ~(uint)uVar17;
      puVar5 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0xc);
      }
      iVar2 = (int)param_1[0xf];
      iVar10 = (int)uVar19;
      lVar15 = (longlong)iVar10;
      uVar9 = puVar5[lVar15] & uVar16;
      if (uVar9 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar18 = 0;
          do {
            uVar9 = puVar5[lVar15 + lVar18 + 1];
            if (uVar9 != 0) {
              uVar19 = (ulonglong)(iVar10 + (int)lVar18 + 1);
              uVar16 = 0xffffffff;
              goto LAB_14014709a;
            }
            iVar11 = iVar11 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar7 - lVar15 != lVar18);
          uVar16 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar19 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar2;
      }
      else {
LAB_14014709a:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar8 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar10) {
          iVar10 = iVar2;
        }
      }
    } while (iVar10 != iVar1);
    lVar15 = (longlong)(int)uStack_50;
    if (lVar15 != 0) {
      lVar18 = 0;
      do {
        FUN_1401877f0(local_70,*(undefined8 *)(lVar12 + lVar18));
        lVar18 = lVar18 + 8;
      } while (lVar15 * 8 != lVar18);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
LAB_140146f30:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140147222 FUN_140147222 body=190 status=ok
// SIG undefined FUN_140147222(void)

longlong FUN_140147222(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_140147284;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140147d0e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_140147284:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1401472fa FUN_1401472fa body=306 status=ok
// SIG undefined FUN_1401472fa(void)

void FUN_1401472fa(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140147383;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14014735c:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14014735c;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140147383;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140147383:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014742e FUN_14014742e body=1133 status=ok
// SIG undefined FUN_14014742e(void)

void FUN_14014742e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong *puVar20;
  longlong lVar21;
  ulonglong *puVar22;
  
  lVar19 = param_2[1];
  if ((longlong)(int)lVar19 != 0) {
    lVar12 = *param_2;
    lVar13 = 0;
    do {
      pcVar4 = *(char **)(lVar12 + 8 + lVar13);
      if ((((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) &&
          (lVar10 = *(longlong *)(lVar12 + lVar13), lVar10 != 0)) &&
         ((lVar18 = *(longlong *)(lVar10 + 0x60), lVar18 != 0 &&
          (*(int *)(lVar18 + 0xc) == (int)param_1[0x15])))) {
        lVar21 = (longlong)*(int *)(lVar18 + 8);
        if (lVar21 == -1) {
          iVar8 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_1 + 0xc) == iVar8) {
            FUN_1462862d2(param_1,iVar8);
          }
          lVar21 = (longlong)iVar8;
          FUN_144b048c5(lVar21 * 0x120 + *param_1);
          *(int *)(lVar18 + 8) = iVar8;
          lVar10 = *(longlong *)(lVar12 + lVar13);
        }
        lVar18 = *param_1;
        *(longlong *)(lVar18 + lVar21 * 0x120) = lVar10;
        uVar5 = *(undefined8 *)(lVar12 + 8 + lVar13);
        lVar10 = *(longlong *)(lVar12 + 0x10 + lVar13);
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        lVar18 = lVar18 + lVar21 * 0x120;
        plVar11 = *(longlong **)(lVar18 + 0x10);
        *(undefined8 *)(lVar18 + 8) = uVar5;
        *(longlong *)(lVar18 + 0x10) = lVar10;
        if (plVar11 != (longlong *)0x0) {
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
        }
        puVar3 = (undefined8 *)(lVar12 + lVar13);
        puVar14 = puVar3 + 3;
        puVar16 = (undefined8 *)(lVar18 + 0x18);
        for (lVar10 = 0xd; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined1 *)(lVar18 + 0x80) = *(undefined1 *)(puVar3 + 0x10);
        *(undefined8 *)(lVar18 + 0x90) = *puVar3;
        uVar5 = puVar3[1];
        lVar10 = puVar3[2];
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
        }
        plVar11 = *(longlong **)(lVar18 + 0xa0);
        *(undefined8 *)(lVar18 + 0x98) = uVar5;
        *(longlong *)(lVar18 + 0xa0) = lVar10;
        if (plVar11 != (longlong *)0x0) {
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
        }
        puVar14 = puVar3 + 3;
        puVar16 = (undefined8 *)(lVar18 + 0xa8);
        for (lVar10 = 0xd; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined1 *)(lVar18 + 0x110) = *(undefined1 *)(puVar3 + 0x10);
      }
      lVar13 = lVar13 + 0x90;
    } while ((longlong)(int)lVar19 * 0x90 != lVar13);
  }
  if ((longlong)(int)param_2[0xd] != 0) {
    plVar11 = (longlong *)param_2[0xc];
    lVar19 = (longlong)(int)param_2[0xd] << 5;
    do {
      if ((((char *)plVar11[1] != (char *)0x0) && (*(char *)plVar11[1] == '\0')) &&
         ((*plVar11 != 0 &&
          ((lVar12 = *(longlong *)(*plVar11 + 0x880), lVar12 != 0 &&
           (*(int *)(lVar12 + 0xc) == (int)param_1[0x15])))))) {
        iVar8 = *(int *)(lVar12 + 8);
        if (iVar8 == -1) {
          iVar8 = FUN_1400eef04(param_1 + 2);
          *(int *)(lVar12 + 8) = iVar8;
        }
        lVar12 = param_1[2];
        FUN_1429afd36(lVar12 + (longlong)iVar8 * 0x40,plVar11);
        FUN_1429afd36(lVar12 + (longlong)iVar8 * 0x40 + 0x20,plVar11);
      }
      plVar11 = plVar11 + 4;
      lVar19 = lVar19 + -0x20;
    } while (lVar19 != 0);
  }
  if ((longlong)(int)param_2[0xf] != 0) {
    plVar11 = (longlong *)param_2[0xe];
    lVar19 = (longlong)(int)param_2[0xf] * 0xf0;
    do {
      if (((((char *)plVar11[1] != (char *)0x0) && (*(char *)plVar11[1] == '\0')) && (*plVar11 != 0)
          ) && ((lVar12 = *(longlong *)(*plVar11 + 0x158), lVar12 != 0 &&
                (*(int *)(lVar12 + 0xc) == (int)param_1[0x15])))) {
        iVar8 = *(int *)(lVar12 + 8);
        if (iVar8 == -1) {
          iVar8 = FUN_146d9841a(param_1 + 4);
          *(int *)(lVar12 + 8) = iVar8;
        }
        lVar12 = param_1[4];
        FUN_146d98454(lVar12 + (longlong)iVar8 * 0x1e0,plVar11);
        FUN_146d98454(lVar12 + (longlong)iVar8 * 0x1e0 + 0xf0,plVar11);
      }
      plVar11 = plVar11 + 0x1e;
      lVar19 = lVar19 + -0xf0;
    } while (lVar19 != 0);
  }
  if ((longlong)(int)param_2[1] != 0) {
    puVar20 = (ulonglong *)*param_2;
    puVar22 = puVar20 + (longlong)(int)param_2[1] * 0x12;
    do {
      if ((((char *)puVar20[1] != (char *)0x0) && (*(char *)puVar20[1] == '\0')) &&
         ((uVar6 = *puVar20, uVar6 != 0 &&
          (((*(longlong *)(uVar6 + 0x60) != 0 &&
            (*(int *)(*(longlong *)(uVar6 + 0x60) + 0xc) == (int)param_1[0x15])) &&
           ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84))))))) {
        uVar9 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        plVar11 = (longlong *)param_1[0x12];
        if ((longlong *)param_1[0x12] == (longlong *)0x0) {
          plVar11 = param_1 + 0x11;
        }
        iVar8 = *(int *)((longlong)plVar11 +
                        (ulonglong)((int)param_1[0x13] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar8 != -1) {
          do {
            lVar19 = param_1[10] + (longlong)iVar8 * 0xb0;
            if (*(ulonglong *)(param_1[10] + (longlong)iVar8 * 0xb0) == uVar6) {
              if ((lVar19 + 0x10U & 0xffffffffffffffef) != 0) {
                *(ulonglong *)(lVar19 + 0x10) = uVar6;
                uVar6 = puVar20[1];
                uVar7 = puVar20[2];
                if (uVar7 != 0) {
                  LOCK();
                  *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
                  UNLOCK();
                }
                plVar11 = *(longlong **)(lVar19 + 0x20);
                *(ulonglong *)(lVar19 + 0x18) = uVar6;
                *(ulonglong *)(lVar19 + 0x20) = uVar7;
                if (plVar11 != (longlong *)0x0) {
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
                }
                puVar15 = puVar20 + 3;
                puVar17 = (ulonglong *)(lVar19 + 0x28);
                for (lVar12 = 0xd; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *puVar17 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar17 = puVar17 + 1;
                }
                *(char *)(lVar19 + 0x90) = (char)puVar20[0x10];
              }
              break;
            }
            iVar8 = *(int *)(lVar19 + 0xa0);
          } while (iVar8 != -1);
        }
      }
      puVar20 = puVar20 + 0x12;
    } while (puVar20 != puVar22);
  }
  return;
}



// FUNCTION 14014789c FUN_14014789c body=1138 status=ok
// SIG undefined FUN_14014789c(void)

void FUN_14014789c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  
  lVar19 = param_2[1];
  if ((longlong)(int)lVar19 != 0) {
    lVar11 = *param_2;
    lVar12 = 0;
    do {
      pcVar2 = *(char **)(lVar11 + 8 + lVar12);
      if ((((pcVar2 != (char *)0x0) && (*pcVar2 == '\0')) &&
          (lVar9 = *(longlong *)(lVar11 + lVar12), lVar9 != 0)) &&
         ((lVar3 = *(longlong *)(lVar9 + 0x60), lVar3 != 0 &&
          (*(int *)(lVar3 + 0xc) == (int)param_1[0x15])))) {
        lVar15 = (longlong)*(int *)(lVar3 + 8);
        if (lVar15 == -1) {
          iVar7 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0xc) == iVar7) {
            FUN_1462862d2(param_1,iVar7);
          }
          lVar15 = (longlong)iVar7;
          FUN_144b048c5(*param_1 + lVar15 * 0x120);
          *(int *)(lVar3 + 8) = iVar7;
          FUN_140426e22(lVar9,lVar15 * 0x120 + *param_1);
          lVar9 = *(longlong *)(lVar11 + lVar12);
        }
        lVar3 = *param_1;
        *(longlong *)(lVar3 + 0x90 + lVar15 * 0x120) = lVar9;
        uVar4 = *(undefined8 *)(lVar11 + 8 + lVar12);
        lVar9 = *(longlong *)(lVar11 + 0x10 + lVar12);
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        lVar3 = lVar3 + lVar15 * 0x120;
        plVar10 = *(longlong **)(lVar3 + 0xa0);
        *(undefined8 *)(lVar3 + 0x98) = uVar4;
        *(longlong *)(lVar3 + 0xa0) = lVar9;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar18 = plVar10 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
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
        puVar13 = (undefined8 *)(lVar11 + lVar12 + 0x18);
        puVar16 = (undefined8 *)(lVar3 + 0xa8);
        for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar16 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar16 = puVar16 + 1;
        }
        *(undefined1 *)(lVar3 + 0x110) = *(undefined1 *)(lVar11 + lVar12 + 0x80);
      }
      lVar12 = lVar12 + 0x90;
    } while ((longlong)(int)lVar19 * 0x90 != lVar12);
  }
  if ((longlong)(int)param_2[0xd] != 0) {
    plVar10 = param_1 + 2;
    plVar18 = (longlong *)param_2[0xc];
    lVar19 = (longlong)(int)param_2[0xd] << 5;
    do {
      if ((((char *)plVar18[1] != (char *)0x0) && (*(char *)plVar18[1] == '\0')) &&
         ((lVar11 = *plVar18, lVar11 != 0 &&
          ((lVar12 = *(longlong *)(lVar11 + 0x880), lVar12 != 0 &&
           (*(int *)(lVar12 + 0xc) == (int)param_1[0x15])))))) {
        lVar9 = (longlong)*(int *)(lVar12 + 8);
        if (lVar9 == -1) {
          iVar7 = FUN_1400eef04(plVar10);
          *(int *)(lVar12 + 8) = iVar7;
          lVar12 = *plVar10;
          lVar9 = (longlong)iVar7;
          FUN_1401f6576(lVar9 * 0x40 + lVar12,lVar11);
          *(byte *)(lVar11 + 0x319) = *(byte *)(lVar11 + 0x319) & 0xef;
          lVar12 = *(longlong *)(lVar12 + 0x18 + lVar9 * 0x40);
          *(undefined8 *)(lVar12 + 0x10) = 0;
          FUN_1401f660a(lVar12,lVar11 + 0x5d0);
        }
        FUN_1429afd36(*plVar10 + lVar9 * 0x40 + 0x20,plVar18);
      }
      plVar18 = plVar18 + 4;
      lVar19 = lVar19 + -0x20;
    } while (lVar19 != 0);
  }
  if ((longlong)(int)param_2[0xf] != 0) {
    plVar10 = param_1 + 4;
    plVar18 = (longlong *)param_2[0xe];
    lVar19 = (longlong)(int)param_2[0xf] * 0xf0;
    do {
      if (((((char *)plVar18[1] != (char *)0x0) && (*(char *)plVar18[1] == '\0')) &&
          (lVar11 = *plVar18, lVar11 != 0)) &&
         ((lVar12 = *(longlong *)(lVar11 + 0x158), lVar12 != 0 &&
          (*(int *)(lVar12 + 0xc) == (int)param_1[0x15])))) {
        lVar9 = (longlong)*(int *)(lVar12 + 8);
        if (lVar9 == -1) {
          iVar7 = FUN_146d9841a(plVar10);
          *(int *)(lVar12 + 8) = iVar7;
          lVar9 = (longlong)iVar7;
          FUN_142a13150(lVar11,lVar9 * 0x1e0 + *plVar10);
        }
        FUN_146d98454(lVar9 * 0x1e0 + *plVar10 + 0xf0,plVar18);
      }
      plVar18 = plVar18 + 0x1e;
      lVar19 = lVar19 + -0xf0;
    } while (lVar19 != 0);
  }
  if ((longlong)(int)param_2[1] != 0) {
    puVar20 = (ulonglong *)*param_2;
    puVar21 = puVar20 + (longlong)(int)param_2[1] * 0x12;
    do {
      if ((((char *)puVar20[1] != (char *)0x0) && (*(char *)puVar20[1] == '\0')) &&
         ((uVar5 = *puVar20, uVar5 != 0 &&
          (((*(longlong *)(uVar5 + 0x60) != 0 &&
            (*(int *)(*(longlong *)(uVar5 + 0x60) + 0xc) == (int)param_1[0x15])) &&
           ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84))))))) {
        uVar8 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        plVar10 = (longlong *)param_1[0x12];
        if ((longlong *)param_1[0x12] == (longlong *)0x0) {
          plVar10 = param_1 + 0x11;
        }
        iVar7 = *(int *)((longlong)plVar10 +
                        (ulonglong)((int)param_1[0x13] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        if (iVar7 != -1) {
          do {
            lVar19 = param_1[10] + (longlong)iVar7 * 0xb0;
            if (*(ulonglong *)(param_1[10] + (longlong)iVar7 * 0xb0) == uVar5) {
              if ((lVar19 + 0x10U & 0xffffffffffffffef) != 0) {
                *(ulonglong *)(lVar19 + 0x10) = uVar5;
                uVar5 = puVar20[1];
                uVar6 = puVar20[2];
                if (uVar6 != 0) {
                  LOCK();
                  *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
                  UNLOCK();
                }
                plVar10 = *(longlong **)(lVar19 + 0x20);
                *(ulonglong *)(lVar19 + 0x18) = uVar5;
                *(ulonglong *)(lVar19 + 0x20) = uVar6;
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = plVar10 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
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
                puVar14 = puVar20 + 3;
                puVar17 = (ulonglong *)(lVar19 + 0x28);
                for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar17 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar17 = puVar17 + 1;
                }
                *(char *)(lVar19 + 0x90) = (char)puVar20[0x10];
              }
              break;
            }
            iVar7 = *(int *)(lVar19 + 0xa0);
          } while (iVar7 != -1);
        }
      }
      puVar20 = puVar20 + 0x12;
    } while (puVar20 != puVar21);
  }
  return;
}



// FUNCTION 140147d0e FUN_140147d0e body=298 status=ok
// SIG undefined FUN_140147d0e(void)

undefined4 *
FUN_140147d0e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14014832a(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  *(undefined8 *)(local_50 + 4) = 0;
  local_50[6] = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140147e3a(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140148e72(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140147e3a FUN_140147e3a body=194 status=ok
// SIG undefined FUN_140147e3a(void)

void FUN_140147e3a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146c58c90(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_140147e68;
    }
  }
  uVar6 = 0;
LAB_140147e68:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140147efc FUN_140147efc body=325 status=ok
// SIG undefined FUN_140147efc(void)

void FUN_140147efc(longlong *param_1)

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



// FUNCTION 140148042 FUN_140148042 body=328 status=ok
// SIG undefined FUN_140148042(void)

void FUN_140148042(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401480ac;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1401480ac:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 14014818a FUN_14014818a body=415 status=ok
// SIG undefined FUN_14014818a(void)

void FUN_14014818a(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) goto LAB_1401482c8;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar3 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)uVar9;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) goto LAB_1401482c8;
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1401482c8:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 14014832a FUN_14014832a body=485 status=ok
// SIG undefined FUN_14014832a(void)

int * FUN_14014832a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447711aa(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140148510 FUN_140148510 body=238 status=ok
// SIG undefined FUN_140148510(void)

void FUN_140148510(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x118) == '\0') {
    local_38 = &local_30;
    local_30 = 0;
    local_28 = 1;
    FUN_140b19abe(param_1,DAT_14c9974b0,DAT_14c9974a8,param_1 + 0xf8);
    local_38 = (undefined8 *)DAT_14c9974a8;
    FUN_1408a6bca(param_1,*(undefined8 *)(param_1 + 0xb8),DAT_14c9974b0,DAT_14c9974b0);
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  uVar1 = 1 << ((byte)param_2 & 0x1f);
  lVar4 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe8);
  }
  iVar2 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  lVar3 = (longlong)(iVar2 >> 5);
  if (param_3 == '\0') {
    uVar1 = ~uVar1 & *(uint *)(lVar4 + lVar3 * 4);
  }
  else {
    uVar1 = uVar1 | *(uint *)(lVar4 + lVar3 * 4);
  }
  *(uint *)(lVar4 + lVar3 * 4) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140148600 FUN_140148600 body=104 status=ok
// SIG undefined FUN_140148600(void)

double * FUN_140148600(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x40);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = (double)param_3;
  *param_2 = (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30)) * dVar5 +
             *(double *)(param_1 + 0x30);
  param_2[1] = (dVar3 - dVar4) * dVar5 + dVar4;
  param_2[2] = (dVar1 - dVar2) * dVar5 + dVar2;
  return param_2;
}



// FUNCTION 140148668 FUN_140148668 body=975 status=ok
// SIG undefined FUN_140148668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140148668(longlong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  
  cVar4 = (**(code **)(*param_1 + 0x10))();
  auVar3 = _DAT_149934d80;
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0x68))(param_1);
    uVar7 = 0;
  }
  else {
    uVar8 = *(uint *)((longlong)param_1 + 0x14);
    uVar9 = *(uint *)(param_1 + 0x12);
    uVar6 = (ulonglong)uVar9;
    if ((int)uVar8 < (int)uVar9) {
      uVar9 = uVar8;
    }
    if (0 < (int)uVar9) {
      uVar23 = (undefined4)param_1[10];
      uVar24 = (undefined4)((ulonglong)param_1[10] >> 0x20);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = param_1[0xb];
      auVar28._8_8_ = 0;
      auVar28._0_8_ = param_1[0xc];
      dVar13 = (double)param_1[0xd];
      uVar9 = uVar9 + 1;
      dVar14 = DAT_14c8463e0;
      dVar18 = DAT_14c8463d8;
      dVar19 = DAT_14c8463d0;
      do {
        dVar20 = auVar22._0_8_;
        dVar16 = auVar28._0_8_;
        iVar5 = (int)uVar6;
        fVar10 = (float)(iVar5 + -1) / (float)iVar5;
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        param_1[8] = param_1[5];
        param_1[6] = param_1[3];
        param_1[7] = param_1[4];
        dVar26 = (double)fVar10;
        param_1[3] = (longlong)((double)param_1[3] * dVar26);
        param_1[4] = (longlong)((double)param_1[4] * dVar26);
        param_1[5] = (longlong)((double)param_1[5] * dVar26);
        param_1[0x10] = param_1[0xc];
        param_1[0x11] = param_1[0xd];
        param_1[0xe] = param_1[10];
        param_1[0xf] = param_1[0xb];
        uVar25 = SUB84(DAT_14c8463e8,0);
        uVar29 = (undefined4)((ulonglong)DAT_14c8463e8 >> 0x20);
        dVar11 = DAT_14c8463e8 * dVar13 +
                 dVar14 * dVar16 + dVar19 * (double)CONCAT44(uVar24,uVar23) + dVar18 * dVar20;
        dVar12 = dVar11 * (double)(&DAT_149931160)[0.0 <= dVar11];
        dVar15 = 1.0 - dVar26;
        dVar26 = (double)(&DAT_149931160)[0.0 <= dVar11] * dVar26;
        if (dVar12 < 0.9999) {
          dVar13 = dVar12;
          if (1.0 <= dVar12) {
            dVar13 = 1.0;
          }
          dVar13 = acos((double)(-(ulonglong)(dVar12 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar12 < -1.0) & (ulonglong)dVar13));
          dVar14 = sin(dVar13);
          dVar15 = sin(dVar15 * dVar13);
          dVar15 = dVar15 * (1.0 / dVar14);
          dVar26 = sin(dVar26 * dVar13);
          dVar26 = dVar26 * (1.0 / dVar14);
          uVar25 = SUB84(DAT_14c8463e8,0);
          uVar29 = (undefined4)((ulonglong)DAT_14c8463e8 >> 0x20);
          dVar13 = (double)param_1[0xd];
          dVar16 = (double)param_1[0xc];
          uVar23 = (undefined4)param_1[10];
          uVar24 = (undefined4)((ulonglong)param_1[10] >> 0x20);
          dVar20 = (double)param_1[0xb];
          iVar5 = (int)param_1[0x12];
          dVar14 = DAT_14c8463e0;
          dVar18 = DAT_14c8463d8;
          dVar19 = DAT_14c8463d0;
        }
        dVar11 = (double)CONCAT44(uVar29,uVar25) * dVar15 + dVar13 * dVar26;
        dVar12 = dVar15 * dVar14 + dVar16 * dVar26;
        dVar16 = dVar15 * dVar18 + dVar20 * dVar26;
        dVar13 = dVar15 * dVar19 + (double)CONCAT44(uVar24,uVar23) * dVar26;
        dVar20 = dVar12 * dVar12 + dVar13 * dVar13;
        dVar15 = dVar11 * dVar11 + dVar16 * dVar16;
        auVar21._0_8_ = dVar20 + dVar15;
        auVar21._8_8_ = dVar20 + dVar15;
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
        auVar22 = sqrtpd(auVar21,auVar21);
        auVar22 = divpd(auVar3,auVar22);
        auVar27._0_8_ = auVar22._0_8_ * dVar12;
        auVar27._8_8_ = auVar22._8_8_ * dVar11;
        uVar6 = (ulonglong)(dVar13 * auVar22._0_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
        uVar23 = (undefined4)uVar6;
        uVar24 = (undefined4)(uVar6 >> 0x20);
        uVar2 = (ulonglong)(dVar16 * auVar22._8_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
        uVar25 = (undefined4)(uVar2 >> 0x20);
        auVar28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar17);
        auVar1._8_4_ = (int)uVar2;
        auVar1._0_8_ = uVar6;
        auVar1._12_4_ = uVar25;
        *(undefined1 (*) [16])(param_1 + 10) = auVar1;
        *(undefined1 (*) [16])(param_1 + 0xc) = auVar28;
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        uVar6 = (ulonglong)(iVar5 - 1U);
        *(uint *)(param_1 + 0x12) = iVar5 - 1U;
        auVar22._8_4_ = (int)uVar2;
        auVar22._0_8_ = uVar2;
        auVar22._12_4_ = uVar25;
        dVar13 = auVar28._8_8_;
        uVar9 = uVar9 - 1;
      } while (1 < uVar9);
      uVar8 = *(uint *)((longlong)param_1 + 0x14);
    }
    uVar7 = CONCAT71((int7)(uVar6 >> 8),0 < (int)uVar8);
  }
  return uVar7;
}



// FUNCTION 140148aa6 FUN_140148aa6 body=614 status=ok
// SIG undefined FUN_140148aa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140148aa6(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  dVar5 = *(double *)(param_1 + 0x70);
  dVar1 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x58);
  uVar15 = SUB84(dVar3,0);
  uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar2 = *(double *)(param_1 + 0x78);
  dVar6 = *(double *)(param_1 + 0x80);
  dVar7 = *(double *)(param_1 + 0x60);
  uVar17 = SUB84(dVar7,0);
  uVar18 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar4 = *(double *)(param_1 + 0x88);
  uVar13 = SUB84(dVar4,0);
  uVar14 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar11 = *(double *)(param_1 + 0x68);
  uVar19 = SUB84(dVar11,0);
  uVar20 = (undefined4)((ulonglong)dVar11 >> 0x20);
  dVar3 = dVar4 * dVar11 + dVar6 * dVar7 + dVar5 * dVar1 + dVar2 * dVar3;
  dVar4 = dVar3 * (double)(&DAT_149931160)[0.0 <= dVar3];
  dVar7 = 1.0 - (double)param_3;
  dVar3 = (double)(&DAT_149931160)[0.0 <= dVar3] * (double)param_3;
  if (dVar4 < 0.9999) {
    dVar5 = dVar4;
    if (1.0 <= dVar4) {
      dVar5 = 1.0;
    }
    dVar5 = acos((double)(-(ulonglong)(dVar4 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar4 < -1.0) & (ulonglong)dVar5));
    dVar6 = sin(dVar5);
    dVar7 = sin(dVar7 * dVar5);
    dVar7 = dVar7 * (1.0 / dVar6);
    dVar3 = sin(dVar3 * dVar5);
    dVar3 = dVar3 * (1.0 / dVar6);
    uVar13 = (undefined4)*(undefined8 *)(param_1 + 0x88);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
    uVar19 = (undefined4)*(undefined8 *)(param_1 + 0x68);
    uVar20 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    dVar6 = *(double *)(param_1 + 0x80);
    uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x60);
    uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    dVar2 = *(double *)(param_1 + 0x78);
    dVar1 = *(double *)(param_1 + 0x50);
    uVar15 = (undefined4)*(undefined8 *)(param_1 + 0x58);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
    dVar5 = *(double *)(param_1 + 0x70);
  }
  *param_2 = dVar5 * dVar7 + dVar1 * dVar3;
  param_2[1] = dVar2 * dVar7 + (double)CONCAT44(uVar16,uVar15) * dVar3;
  param_2[2] = dVar6 * dVar7 + (double)CONCAT44(uVar18,uVar17) * dVar3;
  param_2[3] = (double)CONCAT44(uVar14,uVar13) * dVar7 + (double)CONCAT44(uVar20,uVar19) * dVar3;
  dVar5 = *param_2;
  dVar3 = param_2[1];
  dVar6 = param_2[2];
  dVar7 = param_2[3];
  dVar4 = dVar6 * dVar6 + dVar5 * dVar5;
  dVar11 = dVar7 * dVar7 + dVar3 * dVar3;
  auVar9._0_8_ = dVar4 + dVar11;
  auVar9._8_8_ = dVar4 + dVar11;
  auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_);
  auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_);
  auVar10 = sqrtpd(auVar9,auVar9);
  auVar10 = divpd(_DAT_149934d80,auVar10);
  auVar12._0_8_ = auVar10._0_8_ * dVar6;
  auVar12._8_8_ = auVar10._8_8_ * dVar7;
  *param_2 = (double)((ulonglong)(dVar5 * auVar10._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar9._0_8_));
  param_2[1] = (double)((ulonglong)(dVar3 * auVar10._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar9._8_8_));
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar12,auVar8);
  *(undefined1 (*) [16])(param_2 + 2) = auVar8;
  return param_2;
}



// FUNCTION 140148d0c FUN_140148d0c body=358 status=ok
// SIG undefined FUN_140148d0c(void)

void FUN_140148d0c(longlong *param_1,double *param_2,double *param_3,int param_4,undefined4 param_5)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  *(undefined4 *)(param_1 + 0x12) = param_5;
  *(int *)(param_1 + 2) = param_4 + -1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  cVar13 = (**(code **)(*param_1 + 0x10))();
  if (cVar13 != '\0') {
    param_1[3] = (longlong)(*param_2 + (double)param_1[3]);
    param_1[4] = (longlong)(param_2[1] + (double)param_1[4]);
    param_1[5] = (longlong)(param_2[2] + (double)param_1[5]);
    param_1[6] = param_1[3];
    param_1[7] = param_1[4];
    param_1[8] = param_1[5];
    dVar9 = *param_3;
    dVar10 = param_3[1];
    dVar11 = param_3[2];
    dVar12 = param_3[3];
    dVar1 = (double)param_1[0xd];
    dVar2 = (double)param_1[0xd];
    dVar3 = (double)param_1[0xb];
    dVar4 = (double)param_1[0xb];
    dVar5 = (double)param_1[10];
    dVar6 = (double)param_1[10];
    dVar7 = (double)param_1[0xc];
    dVar8 = (double)param_1[0xc];
    param_1[10] = (longlong)
                  (dVar10 * dVar7 * -1.0 + dVar11 * dVar3 + dVar5 * dVar12 * 1.0 + dVar1 * dVar9);
    param_1[0xb] = (longlong)
                   (dVar9 * dVar8 * 1.0 + dVar12 * dVar4 + dVar6 * dVar11 * -1.0 + dVar2 * dVar10);
    param_1[0xc] = (longlong)
                   (dVar12 * dVar7 * 1.0 + ((dVar5 * dVar10 * 1.0 + dVar1 * dVar11) - dVar3 * dVar9)
                   );
    param_1[0xd] = (longlong)
                   (dVar11 * dVar8 * -1.0 +
                   ((dVar6 * dVar9 * -1.0 + dVar2 * dVar12) - dVar4 * dVar10));
    param_1[0x10] = param_1[0xc];
    param_1[0x11] = param_1[0xd];
    param_1[0xe] = param_1[10];
    param_1[0xf] = param_1[0xb];
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140148e6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 140148e72 FUN_140148e72 body=640 status=ok
// SIG undefined FUN_140148e72(void)

void FUN_140148e72(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140148ed5;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140148ed5:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1401490f2 FUN_1401490f2 body=558 status=ok
// SIG undefined FUN_1401490f2(void)

void FUN_1401490f2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  int iVar13;
  ulonglong *puVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = (longlong)(int)(*(longlong **)(param_1 + 0x38))[1];
  if (lVar8 != 0) {
    puVar14 = (ulonglong *)**(longlong **)(param_1 + 0x38);
    puVar10 = puVar14 + lVar8 * 0x12;
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if (((((char *)puVar14[1] != (char *)0x0) && (*(char *)puVar14[1] == '\0')) &&
          (uVar6 = *puVar14, local_60 = uVar6, uVar6 != 0)) &&
         ((*(longlong *)(uVar6 + 0x60) != 0 &&
          (*(int *)(*(longlong *)(uVar6 + 0x60) + 0xc) == *(int *)(param_1 + 0xa8))))) {
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = uVar7 >> 0x10 ^ uVar7;
        if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
          lVar8 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar8 = param_1 + 0x88;
          }
          iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar7) * 4);
          if (iVar13 != -1) {
            do {
              lVar8 = *plVar1 + (longlong)iVar13 * 0xb0;
              if (*(ulonglong *)(*plVar1 + (longlong)iVar13 * 0xb0) == uVar6) {
                if (lVar8 != 0) goto LAB_140149261;
                break;
              }
              iVar13 = *(int *)(lVar8 + 0xa0);
            } while (iVar13 != -1);
          }
        }
        local_58 = &local_60;
        FUN_1456d1060(plVar1,&local_4c,uVar7,&local_58);
        lVar8 = *plVar1 + (longlong)local_4c * 0xb0;
        uVar6 = *puVar14;
LAB_140149261:
        *(ulonglong *)(lVar8 + 0x10) = uVar6;
        uVar6 = puVar14[1];
        uVar4 = puVar14[2];
        if (uVar4 != 0) {
          LOCK();
          *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
          UNLOCK();
        }
        plVar5 = *(longlong **)(lVar8 + 0x20);
        *(ulonglong *)(lVar8 + 0x18) = uVar6;
        *(ulonglong *)(lVar8 + 0x20) = uVar4;
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
        puVar11 = puVar14 + 3;
        puVar12 = (ulonglong *)(lVar8 + 0x28);
        for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        *(char *)(lVar8 + 0x90) = (char)puVar14[0x10];
      }
      puVar14 = puVar14 + 0x12;
    } while (puVar14 != puVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140149322 FUN_140149322 body=471 status=ok
// SIG undefined FUN_140149322(void)

void FUN_140149322(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_140149467;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar6 * 0x70);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_140149467;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140149467:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_141154a24(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 1401494fa FUN_1401494fa body=534 status=ok
// SIG undefined FUN_1401494fa(void)

void FUN_1401494fa(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[8];
  }
  iVar5 = (int)param_1[9];
  iVar12 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar12 = iVar5;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar12 >> 2) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar5 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 >> 0x20;
      iVar5 = (int)param_1[5];
    }
    iVar15 = (int)local_68;
    uVar9 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ != iVar5 || local_60 != plVar1) {
      do {
        *(undefined4 *)
         ((longlong)plVar8 + (longlong)*(int *)(*param_1 + 100 + (longlong)iVar12 * 0x70) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar10 & uVar9;
        plVar14 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar14 = local_60;
        }
        iVar3 = (int)local_60[3];
        lVar6 = (longlong)iVar15;
        uVar11 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar9;
        if (uVar11 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar4 = iVar12;
          if (iVar12 < iVar15) {
            iVar4 = iVar15;
          }
          if (iVar15 < iVar12) {
            lVar13 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar6 * 4 + 4);
              if (uVar11 != 0) {
                iVar15 = iVar15 + (int)lVar13 + 1;
                uVar9 = 0xffffffff;
                goto LAB_140149662;
              }
              iVar7 = iVar7 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar4 - lVar6 != lVar13);
            uVar9 = 0xffffffff;
            iVar15 = iVar4;
          }
          iVar15 = iVar15 + 1;
          iVar12 = iVar3;
        }
        else {
LAB_140149662:
          uVar10 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar10 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar12 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar12) {
            iVar12 = iVar3;
          }
        }
      } while (iVar12 != iVar5 || local_60 != plVar1);
    }
  }
  else if (0 < iVar5) {
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)plVar8 + lVar6 * 4) = 0xffffffff;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[9]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140149712 FUN_140149712 body=433 status=ok
// SIG undefined FUN_140149712(void)

void FUN_140149712(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14484ff40(param_1,local_28);
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1401498c4 FUN_1401498c4 body=180 status=ok
// SIG undefined FUN_1401498c4(void)

bool FUN_1401498c4(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar1 = *(byte *)(param_2 + 0x60);
  bVar2 = *(byte *)(param_1 + 0x80);
  if (bVar1 == bVar2) {
    lVar4 = FUN_14014997a(param_1);
    if (lVar4 == 0) {
      bVar3 = true;
      goto LAB_140149911;
    }
    uVar6 = *(ulonglong *)(lVar4 + 0x30);
    if ((uVar6 == DAT_14c948034) && (*(int *)(lVar4 + 0x2c) != DAT_14c948030)) {
      FUN_14011791e(&local_28,*(int *)(lVar4 + 0x2c),uVar6 >> 0x20);
      uVar6 = local_28;
    }
    bVar3 = true;
    if (*(ulonglong *)(param_1 + 0x78) == uVar6) goto LAB_140149911;
  }
  else {
    uVar5 = -(uint)bVar2;
    if (bVar1 < bVar2) {
      uVar5 = bVar2 ^ 0xff;
    }
    bVar3 = (int)(uVar5 + bVar1) < 0x7f;
  }
  *(bool *)param_3 = bVar3;
  bVar3 = false;
LAB_140149911:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014997a FUN_14014997a body=51 status=ok
// SIG undefined FUN_14014997a(void)

undefined8 FUN_14014997a(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1401499b2();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1401499e8(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014014999f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0xe0))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1401499b2 FUN_1401499b2 body=54 status=ok
// SIG undefined FUN_1401499b2(void)

undefined8 FUN_1401499b2(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((char)param_1[0xd] == '\x01') ||
     (param_1 = (longlong *)param_1[5], param_1 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      uVar2 = FUN_140149a73(lVar1,0);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1401499e8 FUN_1401499e8 body=139 status=ok
// SIG undefined FUN_1401499e8(void)

undefined8 FUN_1401499e8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  while ((((*(int *)(param_1 + 100) != 0 && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
          ((int)uVar1 < DAT_14c9647dc)) &&
         (((puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar3 != (undefined8 *)0x0 && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 100))) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0))))) {
    if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
      plVar2 = (longlong *)*puVar3;
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2f8))();
    if (plVar2 == (longlong *)0x0) break;
    param_1 = (**(code **)(*plVar2 + 0x2b0))(plVar2);
    if (param_1 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(param_1 + 0x138);
}



// FUNCTION 140149a73 FUN_140149a73 body=398 status=ok
// SIG undefined FUN_140149a73(void)

undefined8 FUN_140149a73(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x1f0), lVar3 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_28;
      local_28 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar3 = *(longlong *)(param_1 + 0x1f0);
      if (lVar3 == 0) goto LAB_140149bf5;
    }
    if ((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
          == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar3 + 0x1e0) != 0)) &&
        ((plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x1e0) + 0x38), plVar2 != (longlong *)0x0 &&
         (lVar3 = (**(code **)(*plVar2 + 0x308))(plVar2,param_2), lVar3 != 0)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140149bf5:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140149c1a FUN_140149c1a body=71 status=ok
// SIG undefined FUN_140149c1a(void)

void FUN_140149c1a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140149c62();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_147178b0e();
      return;
    }
  }
  return;
}



// FUNCTION 140149c62 FUN_140149c62 body=85 status=ok
// SIG undefined FUN_140149c62(void)

void FUN_140149c62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_140149cb8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 140149cb8 FUN_140149cb8 body=450 status=ok
// SIG undefined FUN_140149cb8(void)

void FUN_140149cb8(undefined8 *param_1,uint param_2)

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
LAB_140149dd3:
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
LAB_140149e10:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140149d0e;
LAB_140149d03:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140149d0e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000140149d3a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140149d90:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140149e10;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140149dd3;
code_r0x000140149d3a:
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
      goto LAB_140149d90;
    }
  }
  goto LAB_140149d03;
}



// FUNCTION 140149e7a FUN_140149e7a body=327 status=ok
// SIG undefined FUN_140149e7a(void)

void FUN_140149e7a(longlong param_1)

{
  undefined1 auStack_d8 [32];
  code *local_b8;
  longlong *local_b0;
  code *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 *local_90;
  code *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    FUN_1495189f0(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) < 0) {
      FUN_140957390(param_1 + 0x68,0);
    }
    *(undefined8 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = FUN_14453d9e8;
  local_98 = param_1;
  local_90 = &local_78;
  local_80 = &local_98;
  FUN_14014a076(*(undefined8 *)(param_1 + 8));
  local_a8 = FUN_14453db4a;
  local_a0 = &local_98;
  local_98 = param_1;
  local_90 = &local_78;
  FUN_14014a076(*(undefined8 *)(param_1 + 8));
  local_b8 = FUN_14453dcac;
  local_b0 = &local_98;
  local_98 = param_1;
  FUN_14014a076(*(undefined8 *)(param_1 + 8));
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_78);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140149fc2 FUN_140149fc2 body=55 status=ok
// SIG undefined FUN_140149fc2(void)

void FUN_140149fc2(longlong *param_1)

{
  FUN_140149ffa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140149ffa FUN_140149ffa body=123 status=ok
// SIG undefined FUN_140149ffa(void)

void FUN_140149ffa(longlong param_1,int param_2)

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



// FUNCTION 14014a076 FUN_14014a076 body=441 status=ok
// SIG undefined FUN_14014a076(void)

ulonglong FUN_14014a076(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong *plVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)0x0;
  uStack_50 = CONCAT44(uStack_50._4_4_,2);
  FUN_14014a230(&local_58,2,0);
  uVar7 = uStack_50;
  plVar3 = local_58;
  *local_58 = param_1 + 0x150;
  local_58[1] = param_1 + 0x158;
  iVar4 = (int)uStack_50;
  lVar9 = (longlong)(int)uStack_50;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_14014a36d(plVar3,uVar7 & 0xffffffff);
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      puVar2 = *(uint **)((longlong)plVar3 + lVar10);
      DVar5 = GetCurrentThreadId();
      uVar6 = *puVar2;
      if ((uVar6 & 1) == 0) {
        LOCK();
        uVar1 = *puVar2;
        bVar12 = uVar6 == uVar1;
        if (bVar12) {
          *puVar2 = uVar6 | 1;
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
        UNLOCK();
        if (!bVar12) goto LAB_14014a131;
        puVar2[1] = DVar5;
      }
      else {
LAB_14014a131:
        if (puVar2[1] == DVar5) {
          LOCK();
          *puVar2 = *puVar2 + 4;
          UNLOCK();
        }
        else {
          FUN_1402441ea(puVar2,uVar6);
        }
      }
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 - lVar10 != 0);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar7 = 0;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar11 = *(undefined4 **)(param_1 + 0x10);
    lVar10 = (longlong)*(int *)(param_1 + 0x18) * 0x38;
    do {
      local_68 = *puVar11;
      uStack_64 = puVar11[1];
      uStack_60 = puVar11[2];
      uStack_5c = puVar11[3];
      lVar8 = FUN_1494fe768(param_1,&local_68);
      uVar7 = 0;
      if (lVar8 != 0) {
        uVar7 = (*(code *)*param_2)(param_2[1],lVar8,puVar11);
      }
      puVar11 = puVar11 + 0xe;
      lVar10 = lVar10 + -0x38;
    } while (lVar10 != 0);
  }
  if (iVar4 != 0) {
    lVar10 = 0;
    do {
      puVar2 = *(uint **)((longlong)plVar3 + lVar10);
      uVar6 = *puVar2;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 < 4) {
        puVar2[1] = 0;
        if (uVar6 < 2) {
          LOCK();
          uVar1 = *puVar2;
          if (uVar6 == uVar1) {
            *puVar2 = 0;
          }
          else {
            uVar7 = (ulonglong)uVar1;
          }
          UNLOCK();
          if (uVar6 == uVar1) goto LAB_14014a190;
        }
        uVar7 = FUN_140d366d2();
      }
      else {
        LOCK();
        *puVar2 = *puVar2 - 4;
        UNLOCK();
      }
LAB_14014a190:
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar7 = FUN_1400020a8(plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14014a230 FUN_14014a230 body=317 status=ok
// SIG undefined FUN_14014a230(void)

void FUN_14014a230(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14014a29e;
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
LAB_14014a29e:
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



// FUNCTION 14014a36d FUN_14014a36d body=567 status=ok
// SIG undefined FUN_14014a36d(void)

void FUN_14014a36d(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar2 = (ulonglong *)*plVar8;
      puVar9 = (ulonglong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 3);
      puVar6 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_14014a409:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar7 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar7 + -2;
            do {
              puVar10 = puVar7;
              puVar15 = puVar1;
              puVar7 = puVar10 + -1;
              if (puVar7 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar7);
            if (puVar7 < puVar3) goto LAB_14014a514;
            uVar12 = *puVar3;
            *puVar3 = *puVar7;
            *puVar7 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar6 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                if (uVar12 < *puVar13) {
                  puVar6 = puVar13;
                  uVar12 = *puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar6;
            *puVar6 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_14014a45b;
      }
LAB_14014a498:
      FUN_14688ba6c(puVar2);
LAB_14014a45b:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14014a514:
  uVar12 = *puVar2;
  *puVar2 = *puVar7;
  *puVar7 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar6 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar7 <= puVar2 + 1) goto LAB_14014a45b;
  }
  else {
    if (puVar2 + 1 < puVar7) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_14014a45b;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 3);
  puVar6 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_14014a498;
  goto LAB_14014a409;
}



// FUNCTION 14014a5a6 FUN_14014a5a6 body=52 status=ok
// SIG undefined FUN_14014a5a6(void)

void FUN_14014a5a6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1400bd118();
  if (lVar1 != 0) {
    FUN_14014a5da(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 14014a5da FUN_14014a5da body=93 status=ok
// SIG undefined FUN_14014a5da(void)

void FUN_14014a5da(longlong param_1)

{
  longlong lVar1;
  
  FUN_143a0754c(*(undefined8 *)(param_1 + 0x1c78));
  if ((((*(longlong *)(param_1 + 0x1c10) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) &&
      ((*(byte *)(lVar1 + 0x153) & 0x40) != 0)) &&
     ((((*(byte *)(lVar1 + 0x155) & 0x20) == 0 && (*(char *)(param_1 + 0x1c01) == '\0')) &&
      (*(char *)(param_1 + 0x1c02) == '\0')))) {
    FUN_1439f7cae();
    return;
  }
  return;
}



// FUNCTION 14014a648 FUN_14014a648 body=122 status=ok
// SIG undefined FUN_14014a648(void)

void FUN_14014a648(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x50 + lVar1);
  FUN_14014a6c2(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x50),(longlong)iVar3 * 0x50);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14014a6c2 FUN_14014a6c2 body=61 status=ok
// SIG undefined FUN_14014a6c2(void)

void FUN_14014a6c2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14014a700(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 14014a700 FUN_14014a700 body=55 status=ok
// SIG undefined FUN_14014a700(void)

void FUN_14014a700(longlong *param_1)

{
  FUN_140213722(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14014a737 FUN_14014a737 body=127 status=ok
// SIG undefined FUN_14014a737(void)

void FUN_14014a737(undefined8 *param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  size_t sVar2;
  ulonglong uVar3;
  
  if (param_2 == (longlong *)0x0) {
    sVar2 = strlen(param_3);
    lVar1 = param_1[2];
    uVar3 = param_1[3] - lVar1;
    if (uVar3 < sVar2) {
      FUN_140c91e84(param_1,sVar2,uVar3,param_3,sVar2);
    }
    else {
      param_1[2] = sVar2 + lVar1;
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      memmove((void *)(lVar1 + (longlong)param_1),param_3,sVar2);
      *(undefined1 *)((longlong)param_1 + sVar2 + lVar1) = 0;
    }
  }
  else {
    sVar2 = strlen(param_3);
    *param_2 = *param_2 + sVar2;
  }
  return;
}



// FUNCTION 14014a7b6 FUN_14014a7b6 body=99 status=ok
// SIG undefined FUN_14014a7b6(void)

undefined8 * FUN_14014a7b6(undefined8 *param_1,size_t param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1[2];
  if ((ulonglong)(param_1[3] - lVar1) < param_2) {
    param_1 = (undefined8 *)FUN_14014ad7a(param_1,param_2,param_3,param_2,(char)param_3);
  }
  else {
    param_1[2] = lVar1 + param_2;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    memset((void *)(lVar1 + (longlong)puVar2),(int)param_3,param_2);
    *(undefined1 *)((longlong)puVar2 + lVar1 + param_2) = 0;
  }
  return param_1;
}



// FUNCTION 14014a81a FUN_14014a81a body=373 status=ok
// SIG undefined FUN_14014a81a(void)

void FUN_14014a81a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14014a8a3;
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
LAB_14014a8a3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14014a990 FUN_14014a990 body=1000 status=ok
// SIG undefined FUN_14014a990(void)

ulonglong FUN_14014a990(byte *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  char *pcVar7;
  wchar_t *_Str;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_4 == '\0') {
    iVar4 = (int)*(short *)(param_1 + 0x20);
    if (*(short *)(param_1 + 0x20) < 0) {
      bVar3 = *param_1;
      if (((((bVar3 & 0x3c) == 0) && ((bVar3 & 0x83) != 0x82)) &&
          (((param_1[1] & 4) == 0 && (((param_1[1] & 8) == 0 || ((bVar3 & 3) != 1)))))) &&
         ((param_1[3] & 5) == 0)) goto LAB_14014a9ff;
    }
    else if (DAT_14c9a1ab0 != 0) {
      if (iVar4 == 0x7fff) {
        pcVar7 = "Asset";
      }
      else if (((*(int *)(DAT_14c9a1ab0 + 0xd0) <= iVar4) ||
               (lVar1 = *(longlong *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (longlong)iVar4 * 8),
               lVar1 == 0)) || (pcVar7 = *(char **)(lVar1 + 0xb8), pcVar7 == (char *)0x0))
      goto LAB_14014aaa4;
      if ((param_1[1] & 1) == 0) {
        FUN_14014a737(param_2,param_3,"!ref_");
      }
      else {
        pcVar7 = "!uobject";
      }
      FUN_14014a737(param_2,param_3,pcVar7);
    }
LAB_14014aaa4:
    bVar3 = *param_1;
    if (((param_1[1] & 8) != 0) && ((bVar3 & 3) == 1)) {
      FUN_14014a737(param_2,param_3,&DAT_14a177612);
      bVar3 = *param_1;
    }
    if ((bVar3 & 0x83) == 0x82) {
      if (*(int *)(param_1 + 0x24) == 0) {
        FUN_14014a737(param_2,param_3,"!tags");
      }
      else {
        FUN_14014a737(param_2,param_3,"!objs_");
        iVar4 = *(int *)(param_1 + 0x24);
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
        lVar1 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar4 / 0x199) * 8);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
        local_d8 = (wchar_t *)0x0;
        uStack_d0 = 0;
        FUN_1400b2348((ulonglong)(uint)(iVar4 % 0x199) * 0x28 + lVar1,&local_d8,1);
        uVar2 = (int)uStack_d0 - 1;
        if ((int)uStack_d0 == 0) {
          uVar2 = 0;
        }
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            local_d8[uVar6] =
                 (ushort)((ushort)local_d8[uVar6] - 0x41 < 0x1a) * 0x20 + local_d8[uVar6];
            uVar6 = uVar6 + 1;
          } while (uVar2 != uVar6);
        }
        _Str = L"";
        if ((int)uStack_d0 != 0) {
          _Str = local_d8;
        }
        local_48 = 0;
        if (_Str == (wchar_t *)0x0) {
          local_40 = 0;
          local_38 = 0;
        }
        else {
          sVar5 = wcslen(_Str);
          FUN_1449b853c(local_c8,_Str,sVar5 & 0xffffffff,1);
        }
        FUN_14014a737(param_2,param_3,local_40);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if ((param_1[1] & 4) != 0) {
      FUN_14014a737(param_2,param_3,"!editor");
    }
    if ((param_1[3] & 2) != 0) {
      FUN_14014a737(param_2,param_3,"!noinherit");
    }
    bVar3 = *param_1;
    if ((bVar3 & 0x20) != 0) {
      FUN_14014a737(param_2,param_3,"!remove");
      bVar3 = *param_1;
    }
    if ((bVar3 & 0x10) != 0) {
      FUN_14014a737(param_2,param_3,"!replace");
      bVar3 = *param_1;
    }
    if ((bVar3 & 8) != 0) {
      FUN_14014a737(param_2,param_3,"!layer_remove");
      bVar3 = *param_1;
    }
    if ((bVar3 & 4) != 0) {
      FUN_14014a737(param_2,param_3,"!layer_replace");
    }
    bVar3 = param_1[3];
    if ((bVar3 & 1) != 0) {
      FUN_14014a737(param_2,param_3,"!skipnexusaccum");
      bVar3 = param_1[3];
    }
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((bVar3 & 4) != 0) {
      FUN_14014a737(param_2,param_3,"!searchable_name");
    }
  }
  else {
LAB_14014a9ff:
    uVar6 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14014ad7a FUN_14014ad7a body=354 status=ok
// SIG undefined FUN_14014ad7a(void)

undefined8 *
FUN_14014ad7a(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,
             undefined1 param_5)

{
  size_t _Size;
  ulonglong uVar1;
  void *_Src;
  void *_Dst;
  ulonglong uVar2;
  int _Val;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  void *pvVar4;
  
  uVar3 = 0x7fffffffffffffff;
  _Size = param_1[2];
  if (0x7fffffffffffffff - _Size < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  param_2 = param_2 + _Size;
  uVar1 = param_1[3];
  uVar2 = 0x8000000000000000;
  if ((-1 < (longlong)param_2) &&
     (uVar2 = 0x8000000000000000, uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar3 = (uVar1 >> 1) + uVar1;
    if (uVar3 < (param_2 | 0xf)) {
      uVar3 = param_2 | 0xf;
    }
    uVar2 = uVar3 + 1;
    if (uVar2 < 0x1000) {
      if (uVar2 == 0) {
        uVar3 = 0xffffffffffffffff;
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar2,0x10);
      }
      goto LAB_14014ae14;
    }
  }
  _Dst = (void *)FUN_140c1ca1d(uVar2);
LAB_14014ae14:
  param_1[2] = param_2;
  param_1[3] = uVar3;
  _Val = (int)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  if (uVar1 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    memset((void *)(_Size + (longlong)_Dst),_Val,param_4);
    *(undefined1 *)(param_4 + (longlong)(_Size + (longlong)_Dst)) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    memset((void *)(_Size + (longlong)_Dst),_Val,param_4);
    *(undefined1 *)(param_4 + (longlong)(_Size + (longlong)_Dst)) = 0;
    pvVar4 = _Src;
    if ((uVar1 - 0xfff < 0xfffffffffffff000) &&
       (pvVar4 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(pvVar4);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 14014aede FUN_14014aede body=891 status=ok
// SIG undefined FUN_14014aede(void)

undefined8 *
FUN_14014aede(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             uint param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar12 = (uint *)*puVar1;
  if (puVar12 != (uint *)0x0) goto LAB_14014afa9;
  do {
    uVar10 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar10 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar10 | 1;
      __tlregdtor(&LAB_142733bf0);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar11 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar11 = 0xffffffff;
    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
    puVar11[0x12] = 0;
    *puVar1 = puVar11;
    FUN_140217a48(puVar1);
    puVar12 = (uint *)*puVar1;
LAB_14014afa9:
    uVar14 = *(longlong *)(puVar12 + 0x10) + 0xf;
    while( true ) {
      puVar15 = (undefined8 *)(uVar14 & 0xfffffffffffffff0);
      if (puVar15 + 0x20 <= puVar12 + 0x4000) {
        *(undefined8 **)(puVar12 + 0x10) = puVar15 + 0x20;
        puVar12[0x12] = puVar12[0x12] + 1;
        FUN_1447247dc(puVar15,param_4);
        *puVar15 = &PTR_FUN_149e00328;
        puVar15[0x16] = *param_2;
        puVar15[0x18] = param_2[2];
        param_2[2] = 0;
        lVar2 = param_2[4];
        uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
        lVar7 = param_2[5];
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
        uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
        lVar8 = param_2[7];
        uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
        *(int *)(puVar15 + 0x1c) = (int)param_2[6];
        *(undefined4 *)((longlong)puVar15 + 0xe4) = uVar5;
        *(int *)(puVar15 + 0x1d) = (int)lVar8;
        *(undefined4 *)((longlong)puVar15 + 0xec) = uVar6;
        *(int *)(puVar15 + 0x1a) = (int)lVar2;
        *(undefined4 *)((longlong)puVar15 + 0xd4) = uVar3;
        *(int *)(puVar15 + 0x1b) = (int)lVar7;
        *(undefined4 *)((longlong)puVar15 + 0xdc) = uVar4;
        if (puVar15[0x16] != 0) {
          *param_2 = 0;
        }
        *(uint *)(puVar15 + 0x1e) = param_5;
        if ((param_5 & 0xff) == 0xff) {
          uVar10 = param_5 >> 10 & 3;
          iVar16 = 0;
          if ((param_5 >> 9 & 1) == 0 || uVar10 < 2) {
            uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
          }
          else {
            uVar14 = 2;
          }
        }
        else {
          iVar16 = (param_5 >> 7 & 2 | param_5 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + (ulonglong)(param_5 & 0xff) * 4);
          uVar14 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar2 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar2 == 0) {
          uVar9 = 1;
          if ((char)uVar14 != '\x06') {
            uVar9 = uVar14;
          }
          uVar14 = uVar9;
          uVar13 = 0;
        }
        else {
          if ((char)uVar14 == '\x06') {
            uVar14 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar2 + 0x30);
        }
        puVar15[0xf] = uVar13;
        puVar15[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar16;
        *param_1 = puVar15;
        uVar13 = 0;
        if (puVar15 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          uVar13 = *param_1;
        }
        local_39 = 1;
        FUN_1447439e4(uVar13);
        if (*param_2 != 0) {
          plVar17 = param_2 + 4;
          if ((longlong *)param_2[2] != (longlong *)0x0) {
            plVar17 = (longlong *)param_2[2];
          }
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
        if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
      LOCK();
      uVar10 = *puVar12;
      *puVar12 = *puVar12 + puVar12[0x12] + 1;
      UNLOCK();
      if ((uVar10 ^ puVar12[0x12]) != 0xffffffff) break;
      puVar12 = (uint *)*puVar1;
      *puVar12 = 0xffffffff;
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar1 = puVar12;
      uVar14 = (longlong)puVar12 + 0x67;
    }
  } while( true );
}



// FUNCTION 14014b25a FUN_14014b25a body=428 status=ok
// SIG undefined FUN_14014b25a(void)

void FUN_14014b25a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  longlong **local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *param_1;
  uVar11 = *(uint *)(lVar7 + 0x58);
  iVar1 = *(int *)(lVar7 + 0x88);
  *(uint *)(lVar7 + 0x88) = iVar1 + uVar11;
  if ((uint)(*(int *)(lVar7 + 0x8c) - iVar1) < uVar11) {
    FUN_140061a02((longlong *)(lVar7 + 0x80),iVar1);
  }
  FUN_1447545b9((longlong)iVar1 * 0x18 + *(longlong *)(lVar7 + 0x80),uVar11);
  lVar7 = DAT_14ca5b2d8;
  if (DAT_14c760a44 == 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    iVar1 = *(int *)(lVar7 + uVar8 * 4);
    lVar7 = *param_1;
    lVar2 = (longlong)(*(int *)(*(longlong *)(lVar7 + 8) + 0x3338) + iVar1 + -1);
    uVar8 = lVar2 / (longlong)iVar1;
    iVar9 = (int)uVar8;
    uVar12 = uVar8 & 0xffffffff;
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12,lVar2 % (longlong)iVar1 & 0xffffffff);
    }
    if (*(int *)(lVar7 + 0x7c) < iVar9) {
      FUN_140110548(lVar7 + 0x70,uVar8 & 0xffffffff);
    }
    if (iVar9 != 0) {
      iVar10 = 0;
      iVar9 = 0;
      do {
        iVar4 = *(int *)(*(longlong *)(*param_1 + 8) + 0x3338) + iVar10;
        iVar3 = iVar1;
        if (iVar4 <= iVar1) {
          iVar3 = iVar4;
        }
        FUN_147310e90(param_1,iVar9,iVar3);
        iVar9 = iVar9 + iVar1;
        iVar10 = iVar10 - iVar1;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
  }
  else {
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x7c) < 100) {
      FUN_140110548(lVar7 + 0x70,100);
      lVar7 = *param_1;
    }
    local_48 = &local_38;
    local_40 = param_1;
    local_38 = param_1;
    FUN_14472726a(*(longlong *)(lVar7 + 8) + 0x4f50,0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14014b410 FUN_14014b410 body=263 status=ok
// SIG undefined FUN_14014b410(void)

undefined4 FUN_14014b410(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar9 = *(longlong **)(param_1 + 0x10);
  bVar2 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar9[1];
    plVar8 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_14014b44d;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar8 = *(longlong **)(param_1 + 8);
    bVar2 = false;
  }
LAB_14014b44d:
  plVar7 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  iVar5 = (**(code **)(*DAT_14c8445c0 + 0xb0))();
  if (iVar5 != 0) {
    (**(code **)(*plVar7 + 0x78))(plVar7,uVar6);
    iVar5 = (**(code **)(*plVar7 + 0x88))(plVar7);
    if (iVar5 - 0xac00U < 0x2ba4) {
      while ((cVar4 = (**(code **)(*plVar7 + 0xb0))(plVar7), cVar4 != '\0' &&
             (iVar5 = (**(code **)(*plVar7 + 0xa8))(plVar7), iVar5 - 0xac00U < 0x2ba4))) {
        uVar6 = *(undefined4 *)((longlong)plVar7 + 0xc);
      }
    }
  }
  uVar6 = (**(code **)(*plVar8 + 0x80))(plVar8,uVar6);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  if (!bVar2) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar6;
}



// FUNCTION 14014b518 FUN_14014b518 body=46 status=ok
// SIG undefined FUN_14014b518(void)

void FUN_14014b518(longlong param_1)

{
  FUN_144852512(*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 14014b546 FUN_14014b546 body=152 status=ok
// SIG undefined FUN_14014b546(void)

undefined8 FUN_14014b546(undefined1 (*param_1) [16],undefined8 param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar14 = param_3[2];
  fVar15 = param_3[3];
  auVar6 = *param_1;
  auVar1 = param_1[1];
  auVar5 = param_1[2];
  fVar7 = auVar6._0_4_ * fVar3 + auVar6._4_4_ * fVar4;
  fVar8 = auVar6._8_4_ * fVar14 + auVar6._12_4_ * fVar15;
  fVar12 = auVar1._0_4_ * fVar3 + auVar1._4_4_ * fVar4;
  fVar13 = auVar1._8_4_ * fVar14 + auVar1._12_4_ * fVar15;
  fVar9 = fVar8 + fVar7;
  fVar10 = fVar8 + fVar7;
  fVar11 = fVar7 + fVar8;
  fVar7 = fVar7 + fVar8;
  fVar3 = fVar3 * auVar5._0_4_ + fVar4 * auVar5._4_4_;
  fVar4 = fVar14 * auVar5._8_4_ + fVar15 * auVar5._12_4_;
  fVar14 = fVar13 + fVar12;
  fVar15 = fVar13 + fVar12;
  fVar8 = fVar12 + fVar13;
  fVar12 = fVar12 + fVar13;
  auVar2._4_4_ = -(uint)(fVar4 + fVar3 <= fVar10 && fVar15 <= fVar10);
  auVar2._0_4_ = -(uint)(fVar4 + fVar3 <= fVar9 && fVar14 <= fVar9);
  auVar2._8_4_ = -(uint)(fVar3 + fVar4 <= fVar11 && fVar8 <= fVar11);
  auVar2._12_4_ = -(uint)(fVar3 + fVar4 <= fVar7 && fVar12 <= fVar7);
  auVar5 = blendvps(auVar5,auVar6,auVar2);
  auVar6._4_4_ = -(uint)(fVar4 + fVar3 <= fVar15 && fVar10 <= fVar15);
  auVar6._0_4_ = -(uint)(fVar4 + fVar3 <= fVar14 && fVar9 <= fVar14);
  auVar6._8_4_ = -(uint)(fVar3 + fVar4 <= fVar8 && fVar11 <= fVar8);
  auVar6._12_4_ = -(uint)(fVar3 + fVar4 <= fVar12 && fVar7 <= fVar12);
  auVar6 = blendvps(auVar5,auVar1,auVar6);
  return auVar6._0_8_;
}



// FUNCTION 14014b5de FUN_14014b5de body=5665 status=ok
// SIG undefined FUN_14014b5de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14014b5de(longlong *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4,
             undefined1 (*param_5) [16],undefined1 (*param_6) [16],float *param_7,float *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  longlong *plVar21;
  undefined8 uVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  uint uVar32;
  undefined4 uVar33;
  longlong lVar34;
  float *pfVar35;
  uint uVar36;
  ulonglong uVar37;
  longlong lVar38;
  float *pfVar39;
  int iVar40;
  longlong lVar41;
  ulonglong *puVar42;
  uint uVar43;
  longlong lVar44;
  int iVar45;
  longlong *plVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  bool bVar49;
  bool bVar50;
  float extraout_XMM0_Da;
  float fVar51;
  float fVar52;
  float extraout_XMM0_Db;
  float fVar64;
  undefined8 extraout_XMM0_Qa;
  float fVar65;
  undefined1 auVar53 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar66;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar90;
  undefined1 auVar89 [16];
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar100;
  float fVar101;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar102 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar110;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auStack_f78 [32];
  undefined8 *local_f58;
  undefined1 (*local_f50) [16];
  float local_f48;
  float fStack_f44;
  float fStack_f40;
  float fStack_f3c;
  float local_f34;
  float local_f30;
  float local_f2c;
  float local_f28;
  float fStack_f24;
  float fStack_f20;
  float fStack_f1c;
  ulonglong local_f18;
  undefined8 uStack_f10;
  undefined1 local_f08 [8];
  float fStack_f00;
  float fStack_efc;
  undefined8 local_ef8;
  float fStack_ef0;
  float fStack_eec;
  undefined8 local_ee8;
  float fStack_ee0;
  float fStack_edc;
  undefined1 local_ed8 [16];
  undefined1 local_ec8 [16];
  undefined8 *local_eb8;
  longlong *local_eb0;
  float local_ea8;
  float fStack_ea4;
  float fStack_ea0;
  float fStack_e9c;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined1 local_e88 [256];
  undefined1 *local_d88;
  undefined8 local_d80;
  undefined1 local_d78 [256];
  undefined1 *local_c78;
  undefined8 local_c70;
  undefined1 local_c68 [128];
  undefined1 *local_be8;
  undefined8 local_be0;
  undefined8 local_bd8 [320];
  undefined8 *local_1d8;
  undefined8 local_1c8;
  float local_1b8 [7];
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [8];
  float afStack_170 [2];
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  float afStack_130 [2];
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [16];
  ulonglong local_f0;
  undefined1 auVar103 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_f78;
  local_f58 = local_bd8;
  local_1d8 = (undefined8 *)0x0;
  local_1c8 = 0x2000000000;
  local_f50 = param_6;
  local_f48 = (float)param_2;
  fStack_f44 = (float)(param_2 >> 0x20);
  local_eb8 = param_3;
  local_eb0 = param_4;
  cVar23 = FUN_1429a2a8a();
  if (cVar23 == '\0') {
    *(undefined8 *)*param_5 = 0;
    *(undefined8 *)(*param_5 + 8) = 0;
    param_7[0] = 0.0;
    param_7[1] = 0.0;
    param_7[2] = 0.0;
    param_7[3] = 0.0;
    param_8[0] = 0.0;
    param_8[1] = 0.0;
    param_8[2] = 0.0;
    param_8[3] = 0.0;
    uVar26 = 3;
LAB_14014c808:
    if (local_1d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if ((local_f0 ^ (ulonglong)auStack_f78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar26;
  }
  local_be8 = (undefined1 *)0x0;
  local_be0 = 0x2000000000;
  if ((int)local_1c8 < 1) {
    local_be0._0_4_ = 0;
    puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
  }
  else {
    lVar38 = 0x28;
    lVar34 = 0;
    puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    iVar25 = (int)local_1c8;
    do {
      uVar47 = local_be0;
      puVar29 = local_1d8;
      if (local_1d8 == (undefined8 *)0x0) {
        puVar29 = local_bd8;
      }
      auVar112 = *(undefined1 (*) [16])((longlong)puVar29 + lVar38 + -0x18);
      auVar122._4_4_ = -(uint)(auVar112._4_4_ <= 0.0);
      auVar122._0_4_ = -(uint)(auVar112._0_4_ <= 0.0);
      auVar122._8_4_ = -(uint)(auVar112._8_4_ <= 0.0);
      auVar122._12_4_ = -(uint)(auVar112._12_4_ <= 0.0);
      uVar32 = movmskps((int)param_2,auVar122);
      param_2 = (ulonglong)uVar32;
      if (uVar32 == 0) {
        param_2 = *puVar42;
        lVar44 = *param_1;
        pfVar39 = (float *)((longlong)puVar29 + lVar38 + -0x28);
        fVar91 = *pfVar39;
        fVar93 = pfVar39[1];
        fVar95 = pfVar39[2];
        fVar52 = auVar112._0_4_ * fVar91;
        fVar68 = auVar112._4_4_ * fVar93;
        fVar97 = auVar112._8_4_ * fVar95;
        lVar41 = (longlong)*(int *)((longlong)puVar29 + lVar38 + -8) * 0x10;
        pfVar39 = (float *)(lVar44 + lVar41);
        pfVar1 = (float *)(param_2 + lVar41);
        lVar41 = (longlong)*(int *)((longlong)puVar29 + lVar38 + -4) * 0x10;
        pfVar35 = (float *)(lVar44 + lVar41);
        pfVar2 = (float *)(param_2 + lVar41);
        fVar64 = (*pfVar39 - *pfVar1) - fVar52;
        fVar66 = (pfVar39[1] - pfVar1[1]) - fVar68;
        fVar67 = (pfVar39[2] - pfVar1[2]) - fVar97;
        fVar100 = (*pfVar35 - *pfVar2) - fVar52;
        fVar101 = (pfVar35[1] - pfVar2[1]) - fVar68;
        fVar51 = (pfVar35[2] - pfVar2[2]) - fVar97;
        lVar41 = (longlong)*(int *)((longlong)puVar29 + lVar38) * 0x10;
        pfVar39 = (float *)(lVar44 + lVar41);
        pfVar1 = (float *)(param_2 + lVar41);
        fVar52 = (*pfVar39 - *pfVar1) - fVar52;
        fVar68 = (pfVar39[1] - pfVar1[1]) - fVar68;
        fVar97 = (pfVar39[2] - pfVar1[2]) - fVar97;
        fVar65 = (fVar64 * fVar68 - fVar66 * fVar52) * fVar95 +
                 (fVar66 * fVar97 - fVar67 * fVar68) * fVar91 +
                 (fVar67 * fVar52 - fVar64 * fVar97) * fVar93;
        fVar52 = (fVar52 * fVar101 - fVar68 * fVar100) * fVar95 +
                 (fVar68 * fVar51 - fVar97 * fVar101) * fVar91 +
                 (fVar97 * fVar100 - fVar52 * fVar51) * fVar93;
        fVar91 = (fVar66 * fVar100 - fVar101 * fVar64) * fVar95 +
                 (fVar67 * fVar101 - fVar51 * fVar66) * fVar91 +
                 (fVar64 * fVar51 - fVar100 * fVar67) * fVar93;
        auVar112._0_4_ = -(uint)((0.0 < fVar91 || 0.0 < fVar52) && fVar65 < 0.0);
        auVar112._4_4_ = -(uint)((0.0 < fVar91 || 0.0 < fVar52) && fVar65 < 0.0);
        auVar112._8_4_ = -(uint)((0.0 < fVar91 || 0.0 < fVar52) && fVar65 < 0.0);
        auVar112._12_4_ = -(uint)((0.0 < fVar91 || 0.0 < fVar52) && fVar65 < 0.0);
        auVar82._0_4_ = -(uint)((fVar91 < 0.0 || fVar52 < 0.0) && 0.0 < fVar65);
        auVar82._4_4_ = -(uint)((fVar91 < 0.0 || fVar52 < 0.0) && 0.0 < fVar65);
        auVar82._8_4_ = -(uint)((fVar91 < 0.0 || fVar52 < 0.0) && 0.0 < fVar65);
        auVar82._12_4_ = -(uint)((fVar91 < 0.0 || fVar52 < 0.0) && 0.0 < fVar65);
        iVar27 = movmskps((int)lVar41,auVar82 | auVar112);
        if (iVar27 == 0) goto LAB_14014b738;
      }
      else {
LAB_14014b738:
        lVar44 = (longlong)(int)(uint)local_be0;
        uVar32 = (uint)local_be0 + 1;
        local_be0 = CONCAT44(local_be0._4_4_,uVar32);
        if (local_be0._4_4_ < uVar32) {
          param_2 = uVar47 & 0xffffffff;
          FUN_1456cba76(local_c68);
          puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
        }
        puVar30 = local_be8;
        if (local_be8 == (undefined1 *)0x0) {
          puVar30 = local_c68;
        }
        *(int *)(puVar30 + lVar44 * 4) = (int)lVar34;
        iVar25 = (int)local_1c8;
      }
      lVar34 = lVar34 + 1;
      lVar38 = lVar38 + 0x50;
    } while (lVar34 < iVar25);
  }
  auVar112 = _DAT_1499314a0;
  local_c78 = (undefined1 *)0x0;
  local_c70 = 0x2000000000;
  local_d88 = (undefined1 *)0x0;
  local_d80 = 0x2000000000;
  local_f28 = SUB84(param_1,0);
  fStack_f24 = (float)((ulonglong)param_1 >> 0x20);
  if ((int)(uint)local_be0 < 1) {
    puVar29 = local_1d8;
    if (local_1d8 == (undefined8 *)0x0) {
      puVar29 = local_bd8;
    }
  }
  else {
    puVar30 = local_be8;
    if (local_be8 == (undefined1 *)0x0) {
      puVar30 = local_c68;
    }
    puVar29 = local_1d8;
    if (local_1d8 == (undefined8 *)0x0) {
      puVar29 = local_bd8;
    }
    puVar29 = puVar29 + (longlong)*(int *)(puVar30 + (ulonglong)(uint)local_be0 * 4 + -4) * 10;
  }
  local_f34 = *(float *)(puVar29 + 4);
  local_f30 = *(float *)((longlong)puVar29 + 0x24);
  local_f2c = *(float *)(puVar29 + 5);
  bVar50 = true;
  uVar43 = 0;
  auVar122 = _DAT_149934d10;
  uVar32 = (uint)local_be0;
  local_f18 = *puVar29;
  uStack_f10 = puVar29[1];
  _local_f08 = *(undefined1 (*) [16])(puVar29 + 2);
  while( true ) {
    uVar36 = 0x80;
    if (0x80 < uVar43) {
      uVar36 = uVar43;
    }
    do {
      if ((uVar32 == 0) || (uVar43 = uVar43 + 1, uVar36 + 1 == uVar43)) {
        uVar33 = 1;
        uVar47 = local_f18;
        uVar22 = uStack_f10;
        auVar82 = _local_f08;
        goto LAB_14014c3ba;
      }
      uVar24 = uVar32;
      if (bVar50) {
        puVar30 = local_be8;
        if (local_be8 == (undefined1 *)0x0) {
          puVar30 = local_c68;
        }
        FUN_144b04149(puVar30,puVar30 + (longlong)(int)uVar32 * 4);
        puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
        uVar24 = (uint)local_be0;
      }
      puVar30 = local_be8;
      if (local_be8 == (undefined1 *)0x0) {
        puVar30 = local_c68;
      }
      uVar32 = uVar24 - 1;
      local_be0 = CONCAT44(local_be0._4_4_,uVar32);
      puVar29 = local_1d8;
      if (local_1d8 == (undefined8 *)0x0) {
        puVar29 = local_bd8;
      }
      lVar34 = (longlong)*(int *)(puVar30 + (longlong)(int)uVar24 * 4 + -4) * 0x50;
      bVar50 = false;
      uVar33 = 0;
    } while (*(char *)((longlong)puVar29 + lVar34 + 0x44) != '\0');
    pfVar39 = (float *)(puVar29 + (longlong)*(int *)(puVar30 + (longlong)(int)uVar24 * 4 + -4) * 10)
    ;
    auVar53._4_4_ = -(uint)(auVar122._4_4_ < pfVar39[5]);
    auVar53._0_4_ = -(uint)(auVar122._0_4_ < pfVar39[4]);
    auVar53._8_4_ = -(uint)(auVar122._8_4_ < pfVar39[6]);
    auVar53._12_4_ = -(uint)(auVar122._12_4_ < pfVar39[7]);
    iVar25 = movmskps(uVar32,auVar53);
    plVar46 = (longlong *)CONCAT44(fStack_f24,local_f28);
    if (iVar25 != 0) goto LAB_14014c3bf;
    local_e98 = *(undefined8 *)pfVar39;
    uStack_e90 = *(undefined8 *)(pfVar39 + 2);
    (*(code *)local_eb8[2])(*local_eb8);
    plVar21 = local_eb0;
    fVar67 = 0.0 - *pfVar39;
    fVar78 = 0.0 - pfVar39[1];
    fVar79 = 0.0 - pfVar39[2];
    fVar80 = 0.0 - pfVar39[3];
    fVar91 = *(float *)(local_eb0 + 4);
    fVar93 = *(float *)((longlong)local_eb0 + 0x24);
    fVar95 = *(float *)(local_eb0 + 5);
    fVar52 = *(float *)((longlong)local_eb0 + 0x2c);
    fVar68 = *(float *)(local_eb0 + 2);
    fVar97 = *(float *)((longlong)local_eb0 + 0x14);
    fVar100 = *(float *)(local_eb0 + 3);
    fVar101 = *(float *)((longlong)local_eb0 + 0x1c);
    fVar51 = fVar78 * fVar68 - fVar67 * fVar97;
    fVar64 = fVar79 * fVar97 - fVar78 * fVar100;
    fVar65 = fVar67 * fVar100 - fVar79 * fVar68;
    fVar66 = fVar80 * fVar101 - fVar80 * fVar101;
    fVar51 = fVar51 + fVar51;
    fVar64 = fVar64 + fVar64;
    fVar65 = fVar65 + fVar65;
    fVar66 = fVar66 + fVar66;
    local_ea8 = (fVar51 * fVar97 - fVar65 * fVar100) + fVar101 * fVar64 + fVar67;
    fStack_ea4 = (fVar64 * fVar100 - fVar51 * fVar68) + fVar101 * fVar65 + fVar78;
    fStack_ea0 = (fVar65 * fVar68 - fVar64 * fVar97) + fVar101 * fVar51 + fVar79;
    fStack_e9c = (fVar66 * fVar101 - fVar66 * fVar101) + fVar101 * fVar66 + fVar80;
    uVar26 = (*(code *)((undefined8 *)*local_eb0)[2])(*(undefined8 *)*local_eb0);
    fVar97 = (float)extraout_XMM0_Qa;
    fVar100 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
    fVar101 = (float)extraout_XMM0_Qb_00;
    fVar51 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar64 = fVar100 * fVar91 - fVar93 * fVar97;
    fVar65 = fVar101 * fVar93 - fVar95 * fVar100;
    fVar66 = fVar97 * fVar95 - fVar91 * fVar101;
    fVar67 = fVar51 * fVar52 - fVar52 * fVar51;
    fVar64 = fVar64 + fVar64;
    fVar65 = fVar65 + fVar65;
    fVar66 = fVar66 + fVar66;
    fVar67 = fVar67 + fVar67;
    fVar68 = *(float *)((longlong)plVar21 + 0x3c);
    fVar97 = (fVar64 * fVar93 - fVar66 * fVar95) + fVar52 * fVar65 + fVar97 +
             *(float *)(plVar21 + 6);
    fVar100 = (fVar65 * fVar95 - fVar64 * fVar91) + fVar52 * fVar66 + fVar100 +
              *(float *)((longlong)plVar21 + 0x34);
    fVar101 = (fVar66 * fVar91 - fVar65 * fVar93) + fVar52 * fVar64 + fVar101 +
              *(float *)(plVar21 + 7);
    fVar91 = extraout_XMM0_Da - fVar97;
    fVar93 = extraout_XMM0_Db - fVar100;
    fVar95 = (float)extraout_XMM0_Qb - fVar101;
    uVar47 = *(ulonglong *)pfVar39;
    uVar19 = *(undefined8 *)pfVar39;
    pfVar1 = pfVar39 + 2;
    uVar22 = *(undefined8 *)pfVar1;
    uVar20 = *(undefined8 *)pfVar1;
    pauVar4 = (undefined1 (*) [16])(pfVar39 + 4);
    auVar82 = *pauVar4;
    auVar53 = *pauVar4;
    auVar121._0_4_ = *pfVar1 * fVar95 + *pfVar39 * fVar91 + pfVar39[1] * fVar93;
    auVar121._4_4_ = auVar121._0_4_;
    auVar121._8_4_ = auVar121._0_4_;
    auVar121._12_4_ = auVar121._0_4_;
    auVar122 = minps(auVar121,auVar122);
    fVar64 = auVar122._0_4_;
    fVar65 = auVar122._4_4_;
    fVar66 = auVar122._8_4_;
    fVar78 = auVar122._12_4_;
    auVar70._4_4_ = -(uint)(fVar65 <= ABS(pfVar39[5]) * 1.01);
    auVar70._0_4_ = -(uint)(fVar64 <= ABS(*(float *)*pauVar4) * 1.01);
    auVar70._8_4_ = -(uint)(fVar66 <= ABS(pfVar39[6]) * 1.01);
    auVar70._12_4_ = -(uint)(fVar78 <= ABS(pfVar39[7]) * 1.01);
    iVar25 = movmskps(uVar26,auVar70);
    if (iVar25 != 0) break;
    auVar54._4_4_ = -(uint)(fVar65 < pfVar39[5]);
    auVar54._0_4_ = -(uint)(fVar64 < *(float *)*pauVar4);
    auVar54._8_4_ = -(uint)(fVar66 < pfVar39[6]);
    auVar54._12_4_ = -(uint)(fVar78 < pfVar39[7]);
    iVar25 = movmskps(0,auVar54);
    puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    if (iVar25 != 0) goto LAB_14014c3bf;
    local_f34 = pfVar39[8];
    local_f30 = pfVar39[9];
    fVar79 = pfVar39[10];
    uVar32 = *(uint *)(plVar46 + 1);
    *(uint *)(plVar46 + 1) = uVar32 + 1;
    if (*(uint *)((longlong)plVar46 + 0xc) < uVar32 + 1) {
      FUN_141728230(plVar46,CONCAT44(0,uVar32));
      puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    }
    local_ec8._0_8_ = CONCAT44(0,uVar32);
    local_ef8 = (longlong)(int)uVar32 * 0x10;
    pfVar35 = (float *)(*plVar46 + local_ef8);
    *pfVar35 = extraout_XMM0_Da;
    pfVar35[1] = extraout_XMM0_Db;
    pfVar35[2] = (float)extraout_XMM0_Qb;
    pfVar35[3] = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    iVar25 = (int)puVar42[1];
    *(uint *)(puVar42 + 1) = iVar25 + 1U;
    if (*(uint *)((longlong)puVar42 + 0xc) < iVar25 + 1U) {
      FUN_141728230(puVar42,iVar25);
      puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    }
    pfVar35 = (float *)(*puVar42 + (longlong)iVar25 * 0x10);
    *pfVar35 = fVar97;
    pfVar35[1] = fVar100;
    pfVar35[2] = fVar101;
    pfVar35[3] = (fVar67 * fVar52 - fVar67 * fVar52) + fVar52 * fVar67 + fVar51 + fVar68;
    *(undefined1 *)(pfVar39 + 0x11) = 1;
    bVar50 = (longlong)local_c70 < 0;
    local_c70 = local_c70 & 0xffffffff00000000;
    if (bVar50) {
      FUN_146cc4790(local_d78,0);
      puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    }
    bVar50 = (longlong)local_d80 < 0;
    local_d80 = local_d80 & 0xffffffff00000000;
    if (bVar50) {
      FUN_146cc4790(local_e88,0);
      puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    }
    puVar29 = local_1d8;
    if (local_1d8 == (undefined8 *)0x0) {
      puVar29 = local_bd8;
    }
    lVar38 = -0xc;
    do {
      uVar37 = local_d80;
      uVar26 = *(undefined4 *)((longlong)puVar29 + lVar38 + lVar34 + 0x38);
      uVar33 = *(undefined4 *)((longlong)puVar29 + lVar38 + lVar34 + 0x44);
      lVar44 = (longlong)(int)(uint)local_d80;
      uVar32 = (uint)local_d80 + 1;
      local_d80 = CONCAT44(local_d80._4_4_,uVar32);
      if (local_d80._4_4_ < uVar32) {
        FUN_146cc488c(local_e88,uVar37 & 0xffffffff);
        puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
      }
      puVar30 = local_d88;
      if (local_d88 == (undefined1 *)0x0) {
        puVar30 = local_e88;
      }
      *(ulonglong *)(puVar30 + lVar44 * 8) = CONCAT44(uVar33,uVar26);
      lVar38 = lVar38 + 4;
    } while (lVar38 != 0);
    if ((uint)local_d80 != 0) {
      iVar25 = 0x2711;
      uVar32 = (uint)local_d80;
      do {
        uVar37 = local_c70;
        iVar25 = iVar25 + -1;
        if (iVar25 == 0) break;
        puVar30 = local_d88;
        if (local_d88 == (undefined1 *)0x0) {
          puVar30 = local_e88;
        }
        uVar10 = *(undefined8 *)(puVar30 + (longlong)(int)uVar32 * 8 + -8);
        iVar27 = uVar32 - 1;
        local_d80 = CONCAT44(local_d80._4_4_,iVar27);
        puVar29 = local_1d8;
        if (local_1d8 == (undefined8 *)0x0) {
          puVar29 = local_bd8;
        }
        lVar34 = (longlong)(int)uVar10 * 0x50;
        if (*(char *)((longlong)puVar29 + lVar34 + 0x44) == '\0') {
          pfVar35 = (float *)(puVar29 + (longlong)(int)uVar10 * 10);
          fVar52 = pfVar35[2] * fVar95 + *pfVar35 * fVar91 + pfVar35[1] * fVar93;
          auVar55._4_4_ = -(uint)(fVar52 < pfVar35[5]);
          auVar55._0_4_ = -(uint)(fVar52 < pfVar35[4]);
          auVar55._8_4_ = -(uint)(fVar52 < pfVar35[6]);
          auVar55._12_4_ = -(uint)(fVar52 < pfVar35[7]);
          iVar28 = movmskps((int)lVar34,auVar55);
          if (iVar28 == 0) {
            *(undefined1 *)(pfVar35 + 0x11) = 1;
            iVar28 = (int)((ulonglong)uVar10 >> 0x20);
            lVar34 = (longlong)(((iVar28 + 1) / 3) * -3 + iVar28 + 1);
            fVar52 = pfVar35[lVar34 + 0xb];
            fVar68 = pfVar35[lVar34 + 0xe];
            local_d80._0_4_ = uVar32;
            if (local_d80._4_4_ < uVar32) {
              FUN_146cc488c(local_e88,iVar27);
              puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
            }
            puVar30 = local_d88;
            if (local_d88 == (undefined1 *)0x0) {
              puVar30 = local_e88;
            }
            *(ulonglong *)(puVar30 + (longlong)iVar27 * 8) = CONCAT44(fVar68,fVar52);
            uVar32 = (uint)local_d80;
            lVar34 = (longlong)(((iVar28 + 2) / 3) * -3 + iVar28 + 2);
            fVar52 = pfVar35[lVar34 + 0xb];
            fVar68 = pfVar35[lVar34 + 0xe];
            lVar34 = (longlong)(int)(uint)local_d80;
            local_d80._0_4_ = (uint)local_d80 + 1;
            if (local_d80._4_4_ < (uint)local_d80) {
              FUN_146cc488c(local_e88,uVar32);
              puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
            }
            puVar30 = local_d88;
            if (local_d88 == (undefined1 *)0x0) {
              puVar30 = local_e88;
            }
            *(ulonglong *)(puVar30 + lVar34 * 8) = CONCAT44(fVar68,fVar52);
          }
          else {
            lVar34 = (longlong)(int)(uint)local_c70;
            uVar32 = (uint)local_c70 + 1;
            local_c70 = CONCAT44(local_c70._4_4_,uVar32);
            if (local_c70._4_4_ < uVar32) {
              FUN_146cc488c(local_d78,uVar37 & 0xffffffff);
              puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
            }
            puVar30 = local_c78;
            if (local_c78 == (undefined1 *)0x0) {
              puVar30 = local_d78;
            }
            *(undefined8 *)(puVar30 + lVar34 * 8) = uVar10;
          }
        }
        uVar32 = (uint)local_d80;
      } while ((uint)local_d80 != 0);
    }
    uVar32 = (uint)local_c70;
    uVar37 = local_c70 & 0xffffffff;
    iVar25 = (int)local_1c8;
    local_f18 = local_1c8 & 0xffffffff;
    local_ed8._0_4_ = (int)local_1c8 + (uint)local_c70;
    local_1c8 = CONCAT44(local_1c8._4_4_,(int)local_1c8 + (uint)local_c70);
    if ((uint)(local_1c8._4_4_ - iVar25) < (uint)local_c70) {
      FUN_140fd11b6(local_bd8,local_f18);
      puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
    }
    uVar33 = 2;
    local_f2c = fVar79;
    if ((int)uVar32 < 3) {
LAB_14014c3ba:
      _local_f08 = auVar82;
      uStack_f10 = uVar22;
      local_f18 = uVar47;
      plVar46 = (longlong *)CONCAT44(fStack_f24,local_f28);
      goto LAB_14014c3bf;
    }
    local_ee8 = (longlong)(int)local_f18;
    lVar34 = local_ee8 * 0x50;
    bVar50 = false;
    uVar48 = local_f18 & 0xffffffff;
    local_f08 = (undefined1  [8])local_ee8;
    uVar47 = 1;
    do {
      puVar30 = local_c78;
      if (local_c78 == (undefined1 *)0x0) {
        puVar30 = local_d78;
      }
      puVar29 = local_1d8;
      if (local_1d8 == (undefined8 *)0x0) {
        puVar29 = local_bd8;
      }
      iVar25 = *(int *)(puVar30 + uVar47 * 8 + -8);
      puVar31 = puVar29 + (longlong)iVar25 * 10;
      iVar27 = *(int *)(puVar30 + uVar47 * 8 + -4);
      lVar44 = (longlong)iVar27;
      iVar28 = *(int *)((longlong)puVar31 + lVar44 * 4 + 0x20);
      iVar9 = *(int *)((longlong)puVar31 +
                      (longlong)(iVar27 + ((iVar27 + 1) / 3) * -3 + 1) * 4 + 0x20);
      uVar11 = *puVar42;
      lVar38 = *(longlong *)CONCAT44(fStack_f24,local_f28);
      lVar41 = (longlong)iVar9 * 0x10;
      pfVar6 = (float *)(lVar38 + lVar41);
      pfVar35 = (float *)(uVar11 + lVar41);
      fVar91 = *pfVar6 - *pfVar35;
      fVar93 = pfVar6[1] - pfVar35[1];
      fVar95 = pfVar6[2] - pfVar35[2];
      lVar41 = (longlong)iVar28 * 0x10;
      pfVar7 = (float *)(lVar38 + lVar41);
      pfVar2 = (float *)(uVar11 + lVar41);
      pfVar8 = (float *)(lVar38 + local_ef8);
      pfVar3 = (float *)(uVar11 + local_ef8);
      fVar51 = (*pfVar7 - *pfVar2) - fVar91;
      fVar67 = (pfVar7[1] - pfVar2[1]) - fVar93;
      fVar79 = (pfVar7[2] - pfVar2[2]) - fVar95;
      fVar80 = (pfVar7[3] - pfVar2[3]) - (pfVar6[3] - pfVar35[3]);
      fVar52 = (*pfVar8 - *pfVar3) - fVar91;
      fVar97 = (pfVar8[1] - pfVar3[1]) - fVar93;
      fVar100 = (pfVar8[2] - pfVar3[2]) - fVar95;
      fVar101 = (pfVar8[3] - pfVar3[3]) - (pfVar6[3] - pfVar35[3]);
      fVar68 = fVar97 * fVar51 - fVar67 * fVar52;
      fVar97 = fVar100 * fVar67 - fVar79 * fVar97;
      fVar52 = fVar52 * fVar79 - fVar51 * fVar100;
      auVar81._0_4_ = fVar97 * fVar97 + fVar52 * fVar52 + fVar68 * fVar68;
      auVar81._4_4_ = auVar81._0_4_;
      auVar81._8_4_ = auVar81._0_4_;
      auVar81._12_4_ = auVar81._0_4_;
      auVar86._4_4_ = -(uint)(auVar81._0_4_ < 0.0001);
      auVar86._0_4_ = -(uint)(auVar81._0_4_ < 0.0001);
      auVar86._8_4_ = -(uint)(auVar81._0_4_ < 0.0001);
      auVar86._12_4_ = -(uint)(auVar81._0_4_ < 0.0001);
      iVar40 = movmskps((int)local_ef8,auVar86);
      iVar45 = (int)uVar48;
      if (iVar40 != 0) {
        *(int *)((longlong)puVar31 + lVar44 * 4 + 0x2c) = iVar45;
        *(undefined4 *)((longlong)puVar31 + lVar44 * 4 + 0x38) = 0;
        uVar33 = 2;
        plVar46 = (longlong *)CONCAT44(fStack_f24,local_f28);
        goto LAB_14014c8d6;
      }
      iVar40 = local_ed8._0_4_;
      if (local_ee8 < (longlong)local_f08) {
        iVar40 = iVar45;
      }
      auVar82 = sqrtps(auVar81,auVar81);
      auVar82 = divps(auVar112,auVar82);
      fVar97 = auVar82._0_4_ * fVar97;
      fVar52 = auVar82._4_4_ * fVar52;
      fVar68 = auVar82._8_4_ * fVar68;
      pfVar35 = (float *)((longlong)puVar29 + lVar34);
      *pfVar35 = fVar97;
      pfVar35[1] = fVar52;
      pfVar35[2] = fVar68;
      pfVar35[3] = auVar82._12_4_ * (fVar101 * fVar80 - fVar80 * fVar101);
      *(int *)((longlong)puVar29 + lVar34 + 0x20) = iVar9;
      *(int *)((longlong)puVar29 + lVar34 + 0x24) = iVar28;
      *(int *)((longlong)puVar29 + lVar34 + 0x28) = local_ec8._0_4_;
      *(int *)((longlong)puVar29 + lVar34 + 0x2c) = iVar25;
      uVar48 = (ulonglong)(iVar45 + 1U);
      *(int *)((longlong)puVar29 + lVar34 + 0x30) = iVar40 + -1;
      uVar32 = (uint)local_f18;
      if ((longlong)uVar47 < (longlong)(int)(uint)local_c70) {
        uVar32 = iVar45 + 1U;
      }
      *(uint *)((longlong)puVar29 + lVar34 + 0x34) = uVar32;
      *(int *)((longlong)puVar29 + lVar34 + 0x38) = iVar27;
      *(undefined1 **)((longlong)puVar29 + lVar34 + 0x3c) = &DAT_100000002;
      fVar91 = fVar95 * fVar68 + fVar91 * fVar97 + fVar93 * fVar52;
      pfVar35 = (float *)((longlong)puVar29 + lVar34 + 0x10);
      *pfVar35 = fVar91;
      pfVar35[1] = fVar91;
      pfVar35[2] = fVar91;
      pfVar35[3] = fVar91;
      *(undefined1 *)((longlong)puVar29 + lVar34 + 0x44) = 0;
      *(int *)((longlong)puVar31 + lVar44 * 4 + 0x2c) = iVar45;
      *(undefined4 *)((longlong)puVar31 + lVar44 * 4 + 0x38) = 0;
      auVar82 = *(undefined1 (*) [16])((longlong)puVar29 + lVar34 + 0x10);
      fVar91 = auVar82._0_4_;
      fVar93 = auVar82._4_4_;
      fVar95 = auVar82._8_4_;
      auVar56._4_4_ = -(uint)(fVar93 <= fVar65);
      auVar56._0_4_ = -(uint)(fVar91 <= fVar64);
      auVar56._8_4_ = -(uint)(fVar95 <= fVar66);
      auVar56._12_4_ = -(uint)(auVar82._12_4_ <= fVar78);
      iVar25 = movmskps((int)puVar31,auVar56);
      if (iVar25 == 0) {
        puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
      }
      else {
        auVar57._4_4_ = -(uint)(fVar93 <= 0.0);
        auVar57._0_4_ = -(uint)(fVar91 <= 0.0);
        auVar57._8_4_ = -(uint)(fVar95 <= 0.0);
        auVar57._12_4_ = -(uint)(auVar82._12_4_ <= 0.0);
        iVar25 = movmskps(iVar25,auVar57);
        puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
        if (iVar25 == 0) {
          uVar11 = *puVar42;
          lVar38 = *(longlong *)CONCAT44(fStack_f24,local_f28);
          pfVar35 = (float *)((longlong)puVar29 + lVar34);
          fVar52 = *pfVar35;
          fVar68 = pfVar35[1];
          fVar97 = pfVar35[2];
          fVar91 = fVar91 * fVar52;
          fVar93 = fVar93 * fVar68;
          fVar95 = fVar95 * fVar97;
          lVar44 = (longlong)*(int *)((longlong)puVar29 + lVar34 + 0x20) * 0x10;
          pfVar35 = (float *)(lVar38 + lVar44);
          pfVar2 = (float *)(uVar11 + lVar44);
          lVar44 = (longlong)*(int *)((longlong)puVar29 + lVar34 + 0x24) * 0x10;
          pfVar3 = (float *)(lVar38 + lVar44);
          pfVar6 = (float *)(uVar11 + lVar44);
          fVar67 = (*pfVar35 - *pfVar2) - fVar91;
          fVar80 = (pfVar35[1] - pfVar2[1]) - fVar93;
          fVar88 = (pfVar35[2] - pfVar2[2]) - fVar95;
          fVar100 = (*pfVar3 - *pfVar6) - fVar91;
          fVar101 = (pfVar3[1] - pfVar6[1]) - fVar93;
          fVar51 = (pfVar3[2] - pfVar6[2]) - fVar95;
          lVar44 = (longlong)*(int *)((longlong)puVar29 + lVar34 + 0x28) * 0x10;
          pfVar35 = (float *)(lVar38 + lVar44);
          pfVar2 = (float *)(uVar11 + lVar44);
          fVar91 = (*pfVar35 - *pfVar2) - fVar91;
          fVar93 = (pfVar35[1] - pfVar2[1]) - fVar93;
          fVar95 = (pfVar35[2] - pfVar2[2]) - fVar95;
          fVar79 = (fVar67 * fVar93 - fVar80 * fVar91) * fVar97 +
                   (fVar80 * fVar95 - fVar88 * fVar93) * fVar52 +
                   (fVar88 * fVar91 - fVar67 * fVar95) * fVar68;
          fVar91 = (fVar91 * fVar101 - fVar93 * fVar100) * fVar97 +
                   (fVar93 * fVar51 - fVar95 * fVar101) * fVar52 +
                   (fVar95 * fVar100 - fVar91 * fVar51) * fVar68;
          fVar93 = (fVar80 * fVar100 - fVar101 * fVar67) * fVar97 +
                   (fVar88 * fVar101 - fVar51 * fVar80) * fVar52 +
                   (fVar67 * fVar51 - fVar100 * fVar88) * fVar68;
          auVar58._0_4_ = -(uint)((0.0 < fVar93 || 0.0 < fVar91) && fVar79 < 0.0);
          auVar58._4_4_ = -(uint)((0.0 < fVar93 || 0.0 < fVar91) && fVar79 < 0.0);
          auVar58._8_4_ = -(uint)((0.0 < fVar93 || 0.0 < fVar91) && fVar79 < 0.0);
          auVar58._12_4_ = -(uint)((0.0 < fVar93 || 0.0 < fVar91) && fVar79 < 0.0);
          auVar83._0_4_ = -(uint)((fVar93 < 0.0 || fVar91 < 0.0) && 0.0 < fVar79);
          auVar83._4_4_ = -(uint)((fVar93 < 0.0 || fVar91 < 0.0) && 0.0 < fVar79);
          auVar83._8_4_ = -(uint)((fVar93 < 0.0 || fVar91 < 0.0) && 0.0 < fVar79);
          auVar83._12_4_ = -(uint)((fVar93 < 0.0 || fVar91 < 0.0) && 0.0 < fVar79);
          iVar25 = movmskps((int)lVar44,auVar83 | auVar58);
          if (iVar25 != 0) goto LAB_14014c304;
        }
        lVar38 = (longlong)(int)(uint)local_be0;
        uVar32 = (uint)local_be0 + 1;
        local_be0 = CONCAT44(local_be0._4_4_,uVar32);
        if (local_be0._4_4_ < uVar32) {
          FUN_1456cba76(local_c68);
          puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
        }
        puVar30 = local_be8;
        if (local_be8 == (undefined1 *)0x0) {
          puVar30 = local_c68;
        }
        *(int *)(puVar30 + lVar38 * 4) = iVar45;
        bVar50 = true;
      }
LAB_14014c304:
      lVar34 = lVar34 + 0x50;
      local_f08 = (undefined1  [8])((longlong)local_f08 + 1);
      bVar49 = uVar47 != uVar37;
      uVar47 = uVar47 + 1;
    } while (bVar49);
    uVar32 = (uint)local_be0;
    local_f18 = uVar19;
    uStack_f10 = uVar20;
    _local_f08 = auVar53;
  }
  local_f34 = pfVar39[8];
  local_f30 = pfVar39[9];
  local_f2c = pfVar39[10];
LAB_14014c8d6:
  _local_f08 = *pauVar4;
  uStack_f10 = *(undefined8 *)pfVar1;
  local_f18 = *(ulonglong *)pfVar39;
  puVar42 = (ulonglong *)CONCAT44(fStack_f44,local_f48);
LAB_14014c3bf:
  uVar47 = *puVar42;
  lVar34 = *plVar46;
  _local_138 = *(undefined1 (*) [16])(lVar34 + (longlong)(int)local_f34 * 0x10);
  local_128 = *(undefined1 (*) [16])(lVar34 + (longlong)(int)local_f30 * 0x10);
  pauVar4 = (undefined1 (*) [16])(lVar34 + (longlong)(int)local_f2c * 0x10);
  local_118 = *(float *)*pauVar4;
  fStack_114 = *(float *)(*pauVar4 + 4);
  fStack_110 = *(float *)(*pauVar4 + 8);
  fStack_10c = *(float *)(*pauVar4 + 0xc);
  auVar84 = *pauVar4;
  local_108 = ZEXT816(0);
  _local_178 = *(undefined1 (*) [16])(uVar47 + (longlong)(int)local_f34 * 0x10);
  local_168 = *(undefined1 (*) [16])(uVar47 + (longlong)(int)local_f30 * 0x10);
  pauVar5 = (undefined1 (*) [16])(uVar47 + (longlong)(int)local_f2c * 0x10);
  local_158 = *(float *)*pauVar5;
  fStack_154 = *(float *)(*pauVar5 + 4);
  fStack_150 = *(float *)(*pauVar5 + 8);
  fStack_14c = *(float *)(*pauVar5 + 0xc);
  local_148 = local_108;
  fVar51 = local_138._0_4_ - local_178._0_4_;
  fVar64 = local_138._4_4_ - local_178._4_4_;
  auVar87._0_8_ = CONCAT44(fVar64,fVar51);
  auVar87._8_4_ = local_138._8_4_ - local_178._8_4_;
  auVar87._12_4_ = local_138._12_4_ - local_178._12_4_;
  fVar65 = local_128._0_4_ - local_168._0_4_;
  fVar66 = local_128._4_4_ - local_168._4_4_;
  fVar67 = local_128._8_4_ - local_168._8_4_;
  fVar78 = local_128._12_4_ - local_168._12_4_;
  fVar91 = local_118 - local_158;
  fVar93 = fStack_114 - fStack_154;
  fVar95 = fStack_110 - fStack_150;
  fVar52 = fStack_10c - fStack_14c;
  fVar79 = fVar65 - fVar51;
  fVar80 = fVar66 - fVar64;
  fVar88 = fVar67 - auVar87._8_4_;
  fVar90 = fVar78 - auVar87._12_4_;
  fVar110 = fVar91 - fVar51;
  fVar113 = fVar93 - fVar64;
  fVar114 = fVar95 - auVar87._8_4_;
  fVar115 = fVar52 - auVar87._12_4_;
  fVar68 = fVar113 * fVar79 - fVar80 * fVar110;
  fVar97 = fVar114 * fVar80 - fVar88 * fVar113;
  fVar100 = fVar110 * fVar88 - fVar79 * fVar114;
  fVar101 = fVar115 * fVar90 - fVar90 * fVar115;
  fVar120 = fVar100 * fVar100 + fVar97 * fVar97 + fVar68 * fVar68;
  if (auVar87._8_4_ * 1.1754944e-38 * auVar87._8_4_ * 1.1754944e-38 +
      fVar51 * 1.1754944e-38 * fVar51 * 1.1754944e-38 +
      fVar64 * 1.1754944e-38 * fVar64 * 1.1754944e-38 < fVar120) {
    auVar98._0_4_ =
         (0.0 - auVar87._8_4_) * fVar88 + (0.0 - fVar51) * fVar79 + (0.0 - fVar64) * fVar80;
    auVar98._4_4_ = auVar98._0_4_;
    auVar98._8_4_ = auVar98._0_4_;
    auVar98._12_4_ = auVar98._0_4_;
    auVar123._0_4_ =
         (0.0 - auVar87._8_4_) * fVar114 + (0.0 - fVar51) * fVar110 + (0.0 - fVar64) * fVar113;
    auVar123._4_4_ = auVar123._0_4_;
    auVar123._8_4_ = auVar123._0_4_;
    auVar123._12_4_ = auVar123._0_4_;
    auVar61._4_4_ = (float)-(uint)(auVar98._0_4_ <= 0.0);
    auVar61._0_4_ = (float)-(uint)(auVar98._0_4_ <= 0.0);
    auVar61._8_4_ = (float)-(uint)(auVar98._0_4_ <= 0.0);
    auVar61._12_4_ = (float)-(uint)(auVar98._0_4_ <= 0.0);
    auVar117._0_4_ = -(uint)(auVar123._0_4_ <= 0.0 && auVar98._0_4_ <= 0.0);
    auVar117._4_4_ = -(uint)(auVar123._0_4_ <= 0.0 && auVar98._0_4_ <= 0.0);
    auVar117._8_4_ = -(uint)(auVar123._0_4_ <= 0.0 && auVar98._0_4_ <= 0.0);
    auVar117._12_4_ = -(uint)(auVar123._0_4_ <= 0.0 && auVar98._0_4_ <= 0.0);
    iVar25 = movmskps((int)lVar34,auVar117);
    auVar104._0_12_ = ZEXT812(0x3f800000);
    auVar104._12_4_ = 0;
    lVar34 = 1;
    if (iVar25 == 0) {
      auVar61._0_4_ = fVar88 * (0.0 - fVar67) + fVar79 * (0.0 - fVar65) + fVar80 * (0.0 - fVar66);
      auVar61._4_4_ = auVar61._0_4_;
      auVar61._8_4_ = auVar61._0_4_;
      auVar61._12_4_ = auVar61._0_4_;
      fVar69 = (0.0 - fVar67) * fVar114 + (0.0 - fVar65) * fVar110 + (0.0 - fVar66) * fVar113;
      auVar17._4_4_ = -(uint)(fVar69 <= auVar61._0_4_ && 0.0 <= auVar61._0_4_);
      auVar17._0_4_ = -(uint)(fVar69 <= auVar61._0_4_ && 0.0 <= auVar61._0_4_);
      auVar17._8_4_ = -(uint)(fVar69 <= auVar61._0_4_ && 0.0 <= auVar61._0_4_);
      auVar17._12_4_ = -(uint)(fVar69 <= auVar61._0_4_ && 0.0 <= auVar61._0_4_);
      iVar25 = movmskps(0,auVar17);
      local_f48 = local_158;
      fStack_f44 = fStack_154;
      fStack_f40 = fStack_150;
      fStack_f3c = fStack_14c;
      local_f28 = local_118;
      fStack_f24 = fStack_114;
      fStack_f20 = fStack_110;
      fStack_f1c = fStack_10c;
      if (iVar25 == 0) {
        fVar92 = auVar98._0_4_ * fVar69 - auVar61._0_4_ * auVar123._0_4_;
        fVar94 = auVar98._0_4_ * fVar69 - auVar61._0_4_ * auVar123._0_4_;
        fStack_ee0 = auVar98._0_4_ * fVar69 - auVar61._0_4_ * auVar123._0_4_;
        fStack_edc = auVar98._0_4_ * fVar69 - auVar61._0_4_ * auVar123._0_4_;
        auVar118._0_4_ = auVar98._0_4_ - auVar61._0_4_;
        auVar118._4_4_ = auVar98._0_4_ - auVar61._0_4_;
        auVar118._8_4_ = auVar98._0_4_ - auVar61._0_4_;
        auVar118._12_4_ = auVar98._0_4_ - auVar61._0_4_;
        local_ee8 = CONCAT44(fVar94,fVar92);
        fStack_ef0 = (float)-(uint)(fStack_ee0 <= 0.0);
        fStack_eec = (float)-(uint)(fStack_edc <= 0.0);
        local_ef8 = CONCAT44(-(uint)(fVar94 <= 0.0),-(uint)(fVar92 <= 0.0));
        auVar14._4_4_ =
             -(uint)(((auVar61._0_4_ <= 0.0 && 0.0 <= auVar98._0_4_) && 0.0 < auVar118._4_4_) &&
                    fVar94 <= 0.0);
        auVar14._0_4_ =
             -(uint)(((auVar61._0_4_ <= 0.0 && 0.0 <= auVar98._0_4_) && 0.0 < auVar118._0_4_) &&
                    fVar92 <= 0.0);
        auVar14._8_4_ =
             -(uint)(((auVar61._0_4_ <= 0.0 && 0.0 <= auVar98._0_4_) && 0.0 < auVar118._8_4_) &&
                    fStack_ee0 <= 0.0);
        auVar14._12_4_ =
             -(uint)(((auVar61._0_4_ <= 0.0 && 0.0 <= auVar98._0_4_) && 0.0 < auVar118._12_4_) &&
                    fStack_edc <= 0.0);
        iVar25 = movmskps(0,auVar14);
        local_ed8 = local_168;
        local_ec8 = local_128;
        if (iVar25 != 0) {
          auVar112 = divps(auVar98,auVar118);
          fVar91 = auVar112._0_4_;
          auVar104._0_4_ = 1.0 - fVar91;
          fVar93 = auVar112._4_4_;
          auVar105._4_4_ = 1.0 - fVar93;
          auVar105._0_4_ = auVar104._0_4_;
          auVar105._8_4_ = auVar105._4_4_;
          auVar105._12_4_ = fVar93;
          auVar104._8_8_ = auVar105._8_8_;
          auVar104._4_4_ = fVar91;
          auVar87._0_4_ = fVar51 + fVar79 * fVar91;
          auVar87._4_4_ = fVar64 + fVar80 * fVar93;
          auVar87._8_4_ = auVar87._8_4_ + fVar88 * auVar112._8_4_;
          auVar87._12_4_ = auVar87._12_4_ + fVar90 * auVar112._12_4_;
LAB_14014c96d:
          lVar34 = 2;
          goto LAB_14014c63b;
        }
        fVar79 = fVar88 * (0.0 - fVar95) + fVar79 * (0.0 - fVar91) + fVar80 * (0.0 - fVar93);
        fStack_ef0 = (0.0 - fVar95) * fVar114 + (0.0 - fVar91) * fVar110 + (0.0 - fVar93) * fVar113;
        local_ef8 = CONCAT44(fStack_ef0,fStack_ef0);
        auVar18._4_4_ = -(uint)(fVar79 <= fStack_ef0 && 0.0 <= fStack_ef0);
        auVar18._0_4_ = -(uint)(fVar79 <= fStack_ef0 && 0.0 <= fStack_ef0);
        auVar18._8_4_ = -(uint)(fVar79 <= fStack_ef0 && 0.0 <= fStack_ef0);
        auVar18._12_4_ = -(uint)(fVar79 <= fStack_ef0 && 0.0 <= fStack_ef0);
        iVar25 = movmskps(0,auVar18);
        fStack_eec = fStack_ef0;
        if (iVar25 == 0) {
          fVar80 = fVar79 * auVar123._0_4_ - auVar98._0_4_ * fStack_ef0;
          fVar88 = fVar79 * auVar123._0_4_ - auVar98._0_4_ * fStack_ef0;
          fVar90 = fVar79 * auVar123._0_4_ - auVar98._0_4_ * fStack_ef0;
          fVar96 = fVar79 * auVar123._0_4_ - auVar98._0_4_ * fStack_ef0;
          auVar119._0_4_ = auVar123._0_4_ - fStack_ef0;
          auVar119._4_4_ = auVar123._0_4_ - fStack_ef0;
          auVar119._8_4_ = auVar123._0_4_ - fStack_ef0;
          auVar119._12_4_ = auVar123._0_4_ - fStack_ef0;
          auVar15._4_4_ =
               -(uint)(((fStack_ef0 <= 0.0 && 0.0 <= auVar123._0_4_) && 0.0 < auVar119._4_4_) &&
                      fVar88 <= 0.0);
          auVar15._0_4_ =
               -(uint)(((fStack_ef0 <= 0.0 && 0.0 <= auVar123._0_4_) && 0.0 < auVar119._0_4_) &&
                      fVar80 <= 0.0);
          auVar15._8_4_ =
               -(uint)(((fStack_ef0 <= 0.0 && 0.0 <= auVar123._0_4_) && 0.0 < auVar119._8_4_) &&
                      fVar90 <= 0.0);
          auVar15._12_4_ =
               -(uint)(((fStack_ef0 <= 0.0 && 0.0 <= auVar123._0_4_) && 0.0 < auVar119._12_4_) &&
                      fVar96 <= 0.0);
          iVar27 = movmskps(1,auVar15);
          if (iVar27 != 0) {
            auVar112 = divps(auVar123,auVar119);
            fVar91 = auVar112._0_4_;
            auVar104._0_4_ = 1.0 - fVar91;
            fVar93 = auVar112._4_4_;
            auVar106._4_4_ = 1.0 - fVar93;
            auVar106._0_4_ = auVar104._0_4_;
            auVar106._8_4_ = auVar106._4_4_;
            auVar106._12_4_ = fVar93;
            auVar104._8_8_ = auVar106._8_8_;
            auVar104._4_4_ = fVar91;
            local_128 = *pauVar4;
            local_168 = *pauVar5;
            auVar87._0_4_ = fVar51 + fVar110 * fVar91;
            auVar87._4_4_ = fVar64 + fVar113 * fVar93;
            auVar87._8_4_ = auVar87._8_4_ + fVar114 * auVar112._8_4_;
            auVar87._12_4_ = auVar87._12_4_ + fVar115 * auVar112._12_4_;
            auVar61 = *pauVar5;
            goto LAB_14014c96d;
          }
          fVar110 = auVar61._0_4_ * fStack_ef0 - fVar79 * fVar69;
          fVar113 = auVar61._0_4_ * fStack_ef0 - fVar79 * fVar69;
          fVar114 = auVar61._0_4_ * fStack_ef0 - fVar79 * fVar69;
          fVar115 = auVar61._0_4_ * fStack_ef0 - fVar79 * fVar69;
          auVar77._0_4_ = fVar69 - auVar61._0_4_;
          auVar77._4_4_ = fVar69 - auVar61._0_4_;
          auVar77._8_4_ = fVar69 - auVar61._0_4_;
          auVar77._12_4_ = fVar69 - auVar61._0_4_;
          auVar99._0_4_ = auVar77._0_4_ + (fVar79 - fStack_ef0);
          auVar99._4_4_ = auVar77._4_4_ + (fVar79 - fStack_ef0);
          auVar99._8_4_ = auVar77._8_4_ + (fVar79 - fStack_ef0);
          auVar99._12_4_ = auVar77._12_4_ + (fVar79 - fStack_ef0);
          auVar62._0_4_ =
               -(uint)(((0.0 <= auVar77._0_4_ && 0.0 <= fVar79 - fStack_ef0) && 0.0 < auVar99._0_4_)
                      && fVar110 <= 0.0);
          auVar62._4_4_ =
               -(uint)(((0.0 <= auVar77._4_4_ && 0.0 <= fVar79 - fStack_ef0) && 0.0 < auVar99._4_4_)
                      && fVar113 <= 0.0);
          auVar62._8_4_ =
               -(uint)(((0.0 <= auVar77._8_4_ && 0.0 <= fVar79 - fStack_ef0) && 0.0 < auVar99._8_4_)
                      && fVar114 <= 0.0);
          auVar62._12_4_ =
               -(uint)(((0.0 <= auVar77._12_4_ && 0.0 <= fVar79 - fStack_ef0) &&
                       0.0 < auVar99._12_4_) && fVar115 <= 0.0);
          iVar27 = movmskps(0,auVar62);
          if (iVar27 == 0) {
            auVar63._4_4_ = fVar100;
            auVar63._0_4_ = fVar97;
            auVar108._0_4_ = fVar110 + fVar80 + fVar92;
            auVar108._4_4_ = fVar113 + fVar88 + fVar94;
            auVar108._8_4_ = fVar114 + fVar90 + fStack_ee0;
            auVar108._12_4_ = fVar115 + fVar96 + fStack_edc;
            auVar122 = divps(_DAT_1499314a0,auVar108);
            fVar80 = fVar80 * auVar122._0_4_;
            fVar92 = auVar122._0_4_ * fVar92;
            auVar104._0_4_ = (1.0 - fVar80) - fVar92;
            auVar63._8_4_ = fVar68;
            auVar63._12_4_ = fVar101;
            auVar16._4_4_ = fVar120;
            auVar16._0_4_ = fVar120;
            auVar16._8_4_ = fVar120;
            auVar16._12_4_ = fVar120;
            auVar112 = divps(auVar63,auVar16);
            fVar51 = fVar51 * auVar112._0_4_;
            fVar64 = fVar64 * auVar112._4_4_;
            fVar91 = auVar87._8_4_ * auVar112._8_4_;
            fVar93 = auVar87._12_4_ * auVar112._12_4_;
            auVar61._0_4_ = fVar51 + fVar64;
            auVar61._4_4_ = fVar91 + fVar93;
            auVar61._8_4_ = fVar51 + fVar64;
            auVar61._12_4_ = fVar91 + fVar93;
            auVar109._4_4_ = fVar92;
            auVar109._0_4_ = auVar104._0_4_;
            auVar109._8_4_ = fVar92;
            auVar109._12_4_ = fVar88 * auVar122._4_4_;
            auVar104._8_8_ = auVar109._8_8_;
            auVar104._4_4_ = fVar80;
            fVar91 = fVar91 + auVar61._0_4_;
            auVar87._0_4_ = fVar91 * fVar97;
            auVar87._4_4_ = fVar91 * fVar100;
            auVar87._8_4_ = fVar91 * fVar68;
            auVar87._12_4_ = fVar91 * fVar101;
            lVar34 = 3;
            goto LAB_14014c63b;
          }
          auVar112 = divps(auVar77,auVar99);
          fVar68 = auVar112._0_4_;
          auVar104._0_4_ = 1.0 - fVar68;
          fVar97 = auVar112._4_4_;
          auVar107._4_4_ = 1.0 - fVar97;
          auVar107._0_4_ = auVar104._0_4_;
          auVar107._8_4_ = auVar107._4_4_;
          auVar107._12_4_ = fVar97;
          auVar104._8_8_ = auVar107._8_8_;
          auVar104._4_4_ = fVar68;
          fVar91 = fVar65 + (fVar91 - fVar65) * fVar68;
          fVar93 = fVar66 + (fVar93 - fVar66) * fVar97;
          fVar95 = fVar67 + (fVar95 - fVar67) * auVar112._8_4_;
          fVar52 = fVar78 + (fVar52 - fVar78) * auVar112._12_4_;
          _local_138 = local_128;
          _local_178 = local_168;
          local_128 = auVar84;
          local_168 = *pauVar5;
          lVar34 = 2;
        }
        else {
          _local_138 = *pauVar4;
          _local_178 = *pauVar5;
          auVar84 = *pauVar5;
        }
      }
      else {
        _local_138 = local_128;
        _local_178 = local_168;
        auVar84 = auVar61;
        fVar91 = fVar65;
        fVar93 = fVar66;
        fVar95 = fVar67;
        fVar52 = fVar78;
      }
    }
    else {
LAB_14014c63b:
      auVar84 = auVar61;
      fVar91 = auVar87._0_4_;
      fVar93 = auVar87._4_4_;
      fVar95 = auVar87._8_4_;
      fVar52 = auVar87._12_4_;
    }
  }
  else {
    fVar91 = (0.0 - auVar87._8_4_) * fVar88 + (0.0 - fVar51) * fVar79 + (0.0 - fVar64) * fVar80;
    fVar93 = fVar88 * fVar88 + fVar79 * fVar79 + fVar80 * fVar80;
    auVar59._4_4_ = -(uint)(fVar93 <= fVar91);
    auVar59._0_4_ = -(uint)(fVar93 <= fVar91);
    auVar59._8_4_ = -(uint)(fVar93 <= fVar91);
    auVar59._12_4_ = -(uint)(fVar93 <= fVar91);
    auVar84._4_4_ = -(uint)(fVar93 <= 1.1754944e-38);
    auVar84._0_4_ = -(uint)(fVar93 <= 1.1754944e-38);
    auVar84._8_4_ = -(uint)(fVar93 <= 1.1754944e-38);
    auVar84._12_4_ = -(uint)(fVar93 <= 1.1754944e-38);
    auVar84 = auVar84 | auVar59;
    auVar116._8_4_ = auVar87._8_4_;
    auVar116._0_8_ = auVar87._0_8_;
    auVar116._12_4_ = auVar87._12_4_;
    auVar12._4_4_ = fVar66;
    auVar12._0_4_ = fVar65;
    auVar12._8_4_ = fVar67;
    auVar12._12_4_ = fVar78;
    auVar122 = blendvps(auVar116,auVar12,auVar84);
    auVar111._0_4_ = fVar91 / fVar93;
    _local_138 = blendvps(_local_138,local_128,auVar84);
    auVar71._0_8_ = CONCAT44(-(uint)(fVar91 <= 0.0),-(uint)(fVar91 <= 0.0));
    auVar71._8_4_ = -(uint)(fVar91 <= 0.0);
    auVar71._12_4_ = -(uint)(fVar91 <= 0.0);
    _local_178 = blendvps(_local_178,local_168,auVar84);
    auVar111._4_4_ = auVar111._0_4_;
    auVar111._8_4_ = auVar111._0_4_;
    auVar111._12_4_ = auVar111._0_4_;
    auVar112 = maxps(auVar111,local_108);
    auVar112 = minps(auVar112,_DAT_1499314a0);
    fVar93 = auVar112._0_4_;
    fVar95 = auVar112._4_4_;
    auVar89._0_4_ = fVar79 * fVar93 + fVar51;
    auVar89._4_4_ = fVar80 * fVar95 + fVar64;
    auVar89._8_4_ = fVar88 * auVar112._8_4_ + auVar87._8_4_;
    auVar89._12_4_ = fVar90 * auVar112._12_4_ + auVar87._12_4_;
    auVar13._4_4_ = fVar66;
    auVar13._0_4_ = fVar65;
    auVar13._8_4_ = fVar67;
    auVar13._12_4_ = fVar78;
    auVar112 = blendvps(auVar89,auVar13,auVar84);
    auVar102._0_4_ = 1.0 - fVar93;
    auVar103._4_4_ = 1.0 - fVar95;
    auVar103._0_4_ = auVar102._0_4_;
    auVar60._8_4_ = -(uint)(fVar91 <= 0.0);
    auVar60._0_8_ = auVar71._0_8_;
    auVar60._12_4_ = -(uint)(fVar91 <= 0.0);
    auVar112 = blendvps(auVar112,auVar122,auVar60);
    auVar103._8_4_ = auVar103._4_4_;
    auVar103._12_4_ = fVar95;
    auVar102._8_8_ = auVar103._8_8_;
    auVar102._4_4_ = fVar93;
    auVar84 = auVar84 | auVar71;
    iVar25 = movmskps((int)lVar34,auVar84);
    auVar72._0_12_ = ZEXT812(0x3f800000);
    auVar72._12_4_ = 0;
    auVar104 = blendvps(auVar102,auVar72,auVar84);
    lVar34 = (ulonglong)(iVar25 == 0) + 1;
    fVar91 = auVar112._0_4_;
    fVar93 = auVar112._4_4_;
    fVar95 = auVar112._8_4_;
    fVar52 = auVar112._12_4_;
  }
  *(float *)*param_6 = fVar91;
  *(float *)(*param_6 + 4) = fVar93;
  *(float *)(*param_6 + 8) = fVar95;
  *(float *)(*param_6 + 0xc) = fVar52;
  fVar91 = fVar91 * fVar91 + fVar93 * fVar93;
  fVar93 = fVar95 * fVar95 + fVar52 * fVar52;
  auVar73._0_4_ = fVar93 + fVar91;
  auVar73._4_4_ = fVar93 + fVar91;
  auVar73._8_4_ = fVar91 + fVar93;
  auVar73._12_4_ = fVar91 + fVar93;
  auVar112 = sqrtps(auVar84,auVar73);
  auVar74._4_4_ = -(uint)((float)((uint)auVar73._4_4_ & 0x7f800000) == INFINITY);
  auVar74._0_4_ = -(uint)((float)((uint)auVar73._0_4_ & 0x7f800000) == INFINITY);
  auVar74._8_4_ = -(uint)((float)((uint)auVar73._8_4_ & 0x7f800000) == INFINITY);
  auVar74._12_4_ = -(uint)((float)((uint)auVar73._12_4_ & 0x7f800000) == INFINITY);
  iVar25 = movmskps(iVar25,auVar74);
  uVar26 = 4;
  if (iVar25 == 0) {
    uVar26 = uVar33;
  }
  *param_5 = auVar112;
  auVar75._4_4_ = -(uint)(auVar112._4_4_ < 0.0001);
  auVar75._0_4_ = -(uint)(auVar112._0_4_ < 0.0001);
  auVar75._8_4_ = -(uint)(auVar112._8_4_ < 0.0001);
  auVar75._12_4_ = -(uint)(auVar112._12_4_ < 0.0001);
  iVar25 = movmskps(iVar25,auVar75);
  if (iVar25 == 0) {
    auVar112 = divps(*param_6,auVar112);
    *param_6 = auVar112;
    auVar85._4_4_ = -(uint)((float)local_f08._4_4_ < 0.0);
    auVar85._0_4_ = -(uint)((float)local_f08._0_4_ < 0.0);
    auVar85._8_4_ = -(uint)(fStack_f00 < 0.0);
    auVar85._12_4_ = -(uint)(fStack_efc < 0.0);
    iVar25 = movmskps(0,auVar85);
    if (iVar25 != 0) {
      *(float *)*param_6 = 0.0 - auVar112._0_4_;
      *(float *)(*param_6 + 4) = 0.0 - auVar112._4_4_;
      *(float *)(*param_6 + 8) = 0.0 - auVar112._8_4_;
      *(float *)(*param_6 + 0xc) = 0.0 - auVar112._12_4_;
      goto LAB_14014c747;
    }
  }
  else {
    *(ulonglong *)*param_6 = local_f18;
    *(undefined8 *)(*param_6 + 8) = uStack_f10;
    auVar76._4_4_ = -(uint)((float)local_f08._4_4_ < 0.0);
    auVar76._0_4_ = -(uint)((float)local_f08._0_4_ < 0.0);
    auVar76._8_4_ = -(uint)(fStack_f00 < 0.0);
    auVar76._12_4_ = -(uint)(fStack_efc < 0.0);
    iVar25 = movmskps(iVar25,auVar76);
    if (iVar25 != 0) {
LAB_14014c747:
      fVar91 = *(float *)(*param_5 + 4);
      fVar93 = *(float *)(*param_5 + 8);
      fVar95 = *(float *)(*param_5 + 0xc);
      *(float *)*param_5 = 0.0 - *(float *)*param_5;
      *(float *)(*param_5 + 4) = 0.0 - fVar91;
      *(float *)(*param_5 + 8) = 0.0 - fVar93;
      *(float *)(*param_5 + 0xc) = 0.0 - fVar95;
    }
  }
  param_7[0] = 0.0;
  param_7[1] = 0.0;
  param_7[2] = 0.0;
  param_7[3] = 0.0;
  param_8[0] = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  local_1b8[0] = auVar104._0_4_;
  local_1b8[4] = auVar104._4_4_;
  local_198 = auVar104._8_4_;
  local_188 = auVar104._12_4_;
  local_1b8[1] = local_1b8[0];
  local_1b8[2] = local_1b8[0];
  local_1b8[3] = local_1b8[0];
  local_1b8[5] = local_1b8[4];
  local_1b8[6] = local_1b8[4];
  uStack_19c = local_1b8[4];
  uStack_194 = local_198;
  uStack_190 = local_198;
  uStack_18c = local_198;
  uStack_184 = local_188;
  uStack_180 = local_188;
  uStack_17c = local_188;
  lVar38 = 0;
  do {
    fVar91 = *(float *)((longlong)local_1b8 + lVar38);
    fVar93 = *(float *)((longlong)local_1b8 + lVar38 + 4);
    fVar95 = *(float *)((longlong)local_1b8 + lVar38 + 8);
    fVar52 = *(float *)((longlong)local_1b8 + lVar38 + 0xc);
    fVar68 = *(float *)(local_138 + lVar38 + 4);
    fVar97 = *(float *)(local_138 + lVar38 + 8);
    fVar100 = *(float *)(local_138 + lVar38 + 0xc);
    *param_7 = *(float *)(local_138 + lVar38) * fVar91 + *param_7;
    param_7[1] = fVar68 * fVar93 + param_7[1];
    param_7[2] = fVar97 * fVar95 + param_7[2];
    param_7[3] = fVar100 * fVar52 + param_7[3];
    fVar68 = *(float *)(local_178 + lVar38 + 4);
    fVar97 = *(float *)(local_178 + lVar38 + 8);
    fVar100 = *(float *)(local_178 + lVar38 + 0xc);
    *param_8 = fVar91 * *(float *)(local_178 + lVar38) + *param_8;
    param_8[1] = fVar93 * fVar68 + param_8[1];
    param_8[2] = fVar95 * fVar97 + param_8[2];
    param_8[3] = fVar52 * fVar100 + param_8[3];
    lVar38 = lVar38 + 0x10;
    lVar34 = lVar34 + -1;
  } while (lVar34 != 0);
  if (local_d88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_be8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14014c808;
}



// FUNCTION 14014cc00 FUN_14014cc00 body=269 status=ok
// SIG undefined FUN_14014cc00(void)

void FUN_14014cc00(longlong param_1,int param_2)

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



// FUNCTION 14014cd0e FUN_14014cd0e body=159 status=ok
// SIG undefined FUN_14014cd0e(void)

double FUN_14014cd0e(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double local_28;
  double local_20;
  
  local_28 = 1.79769313486232e+308;
  local_20 = 1.79769313486232e+308;
  pdVar6 = &local_28;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    uVar4 = (ulonglong)(((byte)~bVar1 & 1) << 3);
    dVar7 = *(double *)(param_3 + uVar4);
    lVar3 = param_2;
    lVar5 = param_1 + 0x10;
    if ((0.0 < dVar7) || (lVar3 = param_1, lVar5 = param_2, dVar7 < 0.0)) {
      *pdVar6 = dVar7 * (*(double *)(lVar5 + uVar4) - *(double *)(lVar3 + uVar4));
    }
    pdVar6 = &local_20;
    bVar2 = false;
  } while (bVar1);
  dVar7 = ABS(local_28);
  if (ABS(local_20) <= ABS(local_28)) {
    dVar7 = ABS(local_20);
  }
  return dVar7;
}



// FUNCTION 14014cdae FUN_14014cdae body=830 status=ok
// SIG undefined FUN_14014cdae(void)

undefined8
FUN_14014cdae(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1a8 [32];
  double local_188;
  double *local_180;
  double *local_178;
  double *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_188 = dVar4 * param_5;
    local_90 = dVar7 * dVar1;
    local_98 = dVar6 * dVar1;
    local_a0 = dVar5 * dVar1;
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_108 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_110 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_100 = 0;
    local_f8 = 0x3ff0000000000000;
    uStack_f0 = 0x3ff0000000000000;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0;
    local_78 = *(undefined8 *)(param_1 + 0x30);
    local_148 = &local_88;
    local_88 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    local_150 = param_12;
    local_158 = param_11;
    local_160 = param_10;
    local_168 = param_9;
    local_170 = &local_d0;
    local_178 = &local_b8;
    local_180 = &local_d8;
    cVar2 = FUN_140c7f95e(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_d8 < param_5)) {
      *param_6 = dVar1 * local_d8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_b8;
      param_7[1] = dVar5 * local_b0;
      param_7[2] = dVar6 * local_a8;
      local_c0 = *(double *)(param_1 + 0x48) * local_c0;
      local_c8 = *(double *)(param_1 + 0x40) * local_c8;
      local_d0 = *(double *)(param_1 + 0x38) * local_d0;
      dVar6 = local_c0 * local_c0 + local_d0 * local_d0 + local_c8 * local_c8;
      if (((dVar6 != 1.0) || (dVar5 = local_c0, dVar4 = local_c8, dVar7 = local_d0, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_c0 * dVar6;
        dVar4 = local_c8 * dVar6;
        dVar7 = local_d0 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_14014cf92;
    }
  }
  uVar3 = 0;
LAB_14014cf92:
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}


