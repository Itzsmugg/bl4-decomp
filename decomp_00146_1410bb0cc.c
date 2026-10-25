// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410bb0cc FUN_1410bb0cc body=887 status=ok
// SIG undefined FUN_1410bb0cc(void)

void FUN_1410bb0cc(longlong *param_1)

{
  int *piVar1;
  uint *_Dst;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  PSRWLOCK *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  PSRWLOCK local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_58;
      local_58 = (PSRWLOCK)FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1464cee30;
      local_98 = &LAB_148bfac22;
      local_a0 = &LAB_140f21842;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1401d61d6(&local_68);
      plVar4 = (longlong *)*local_68;
      local_58 = (PSRWLOCK)(plVar4 + 9);
      local_50 = 1;
      AcquireSRWLockExclusive(local_58);
      local_40 = '\0';
      local_48 = plVar4;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
      plVar4 = local_48;
      iVar5 = (int)local_48[1];
      if (0 < (longlong)iVar5) {
        lVar7 = local_48[2];
        puVar10 = (ulonglong *)(*local_48 + 0x38);
        lVar6 = 0;
        do {
          uVar2 = *(uint *)(lVar3 + 0xc);
          *(int *)(local_48 + 2) = (int)lVar7 + 1 + (int)lVar6;
          if (*puVar10 == (ulonglong)uVar2) {
            if ((int)lVar6 < iVar5) {
              FUN_1457f6a60(local_48);
              if (local_40 == '\0') {
                *(int *)(plVar4 + 8) = (int)plVar4[8] + 1;
                local_40 = '\x01';
              }
            }
            break;
          }
          lVar6 = lVar6 + 1;
          puVar10 = puVar10 + 0x24;
        } while (iVar5 != lVar6);
      }
      FUN_1410bb50a(param_1,&local_58);
      plVar4 = (longlong *)(lVar3 + 0x7f28);
      FUN_1410bb444(local_70);
      FUN_1409ca370(plVar4,param_1);
      iVar5 = *(int *)(lVar3 + 0x7f30);
      if (0 < iVar5) {
        lVar7 = 0;
        bVar8 = false;
        do {
          while( true ) {
            lVar6 = *plVar4;
            _Dst = (uint *)(lVar6 + lVar7 * 0x10);
            if (((((*(longlong *)(lVar6 + 8 + lVar7 * 0x10) != 0) && (_Dst[1] != 0)) &&
                 (uVar2 = *_Dst, -1 < (int)uVar2)) &&
                (((int)uVar2 < DAT_14c9647dc &&
                 (plVar11 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar11 != (longlong *)0x0)))) &&
               ((*(uint *)(plVar11 + 2) == _Dst[1] &&
                (((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0 && (*plVar11 != 0)))))) break;
            iVar9 = ~(uint)lVar7 + iVar5;
            if (iVar9 != 0) {
              if (0 < iVar9) {
                iVar9 = 1;
              }
              memmove(_Dst,(void *)(lVar6 + (longlong)(iVar5 - iVar9) * 0x10),(longlong)iVar9 << 4);
              iVar5 = *(int *)(lVar3 + 0x7f30);
            }
            iVar5 = iVar5 + -1;
            *(int *)(lVar3 + 0x7f30) = iVar5;
            bVar8 = true;
            if (iVar5 <= lVar7) goto LAB_1410bb33d;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
        if (bVar8) {
LAB_1410bb33d:
          FUN_1400bbcfc(plVar4);
        }
      }
      if (local_50 == 0) {
        ReleaseSRWLockShared(local_58);
      }
      else {
        ReleaseSRWLockExclusive(local_58);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bb444 FUN_1410bb444 body=196 status=ok
// SIG undefined FUN_1410bb444(void)

undefined8 * FUN_1410bb444(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8068) {
    FUN_144b3d300(&DAT_14cbd8068);
    if (DAT_14cbd8068 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"eChanged",9);
      builtin_wcsncpy(local_48 + 8,L"terUXNam",8);
      builtin_wcsncpy(local_48,L"OnCharac",8);
      FUN_1446f470e(&DAT_14cbd8060,local_48,1);
      _Init_thread_footer(&DAT_14cbd8068);
    }
  }
  *param_1 = DAT_14cbd8060;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bb50a FUN_1410bb50a body=976 status=ok
// SIG undefined FUN_1410bb50a(void)

void FUN_1410bb50a(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  code *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_b0 = &local_68;
      local_68 = FUN_141864c34;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1464cee30;
      local_b8 = &LAB_148bfac22;
      local_c0 = &LAB_140f21842;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
          DAT_14cba8288 + 0x30)) && (cVar7 = FUN_1449ce79a(plVar4), cVar7 == '\0')) &&
       (uVar14 = (ulonglong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x20), 0 < (longlong)uVar14)) {
      uVar2 = *(uint *)((longlong)plVar4 + 0xc);
      lVar13 = uVar14 * 0x28;
      do {
        lVar8 = *(longlong *)(param_2 + 0x10);
        piVar1 = (int *)(lVar8 + 0x28);
        *piVar1 = *piVar1 + 1;
        if (*(ulonglong *)(*(longlong *)(lVar8 + 0x18) + -0x28 + lVar13) == (ulonglong)uVar2) {
          lVar8 = FUN_145f79862(param_1);
          if (lVar8 != 0) {
            uVar9 = FUN_140eaf18a();
            plVar10 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar9);
            if (plVar10 != (longlong *)0x0) {
              uVar9 = FUN_140eaf18a();
              plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
              if ((plVar11 != (longlong *)0x0 && plVar10 != plVar11) &&
                 (plVar10 = (longlong *)(**(code **)(*plVar11 + 0x10))(plVar11),
                 plVar10 != (longlong *)0x0)) {
                lVar5 = *(longlong *)(param_2 + 0x10);
                piVar1 = (int *)(lVar5 + 0x28);
                *piVar1 = *piVar1 + 1;
                switch(*(undefined4 *)(*(longlong *)(lVar5 + 0x18) + -0x18 + lVar13)) {
                case 0:
                  FUN_1403adc5e(&local_68,lVar8);
                  local_58 = *(undefined8 *)(local_68 + 0x5c0);
                  local_50 = *(longlong *)(local_68 + 0x5c8);
                  if (local_50 != 0) {
                    LOCK();
                    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar10;
                  puVar12 = &local_58;
                  break;
                case 1:
                  FUN_1403adc5e(&local_68,lVar8);
                  local_78 = *(undefined8 *)(local_68 + 0x5d0);
                  local_70 = *(longlong *)(local_68 + 0x5d8);
                  if (local_70 != 0) {
                    LOCK();
                    *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar10;
                  puVar12 = &local_78;
                  break;
                case 2:
                  FUN_1403adc5e(&local_68,lVar8);
                  local_88 = *(undefined8 *)(local_68 + 0x5e0);
                  local_80 = *(longlong *)(local_68 + 0x5e8);
                  if (local_80 != 0) {
                    LOCK();
                    *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar10;
                  puVar12 = &local_88;
                  break;
                case 3:
                  FUN_1403adc5e(&local_68,lVar8);
                  local_98 = *(undefined8 *)(local_68 + 0x5f0);
                  local_90 = *(longlong *)(local_68 + 0x5f8);
                  if (local_90 != 0) {
                    LOCK();
                    *(int *)(local_90 + 0xc) = *(int *)(local_90 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar10;
                  puVar12 = &local_98;
                  break;
                default:
                  goto switchD_1410bb75f_default;
                }
                (**(code **)(lVar8 + 0x18))(plVar10,puVar12);
                plVar10 = local_60;
                if (local_60 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = local_60 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*local_60)(local_60);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
              }
            }
          }
switchD_1410bb75f_default:
          lVar8 = *(longlong *)(param_2 + 0x10);
          piVar1 = (int *)(lVar8 + 0x28);
          *piVar1 = *piVar1 + 1;
          iVar3 = *(int *)(*(longlong *)(lVar8 + 0x18) + -0x18 + lVar13);
          lVar8 = *(longlong *)(param_2 + 0x10);
          if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar8 + 0x38))) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar3 * 4) = 0xffffffff;
            lVar8 = *(longlong *)(param_2 + 0x10);
          }
          FUN_148e4fa30(lVar8 + 0x18,(int)uVar14 + -1);
          if (*(char *)(param_2 + 0x18) == '\0') {
            piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 0x40);
            *piVar1 = *piVar1 + 1;
            *(undefined1 *)(param_2 + 0x18) = 1;
          }
        }
        lVar13 = lVar13 + -0x28;
        bVar6 = 1 < uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410bb8dc FUN_1410bb8dc body=2347 status=ok
// SIG undefined FUN_1410bb8dc(void)

void FUN_1410bb8dc(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  uint local_6c;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + -0x30);
  plVar4 = *(longlong **)(param_1 + -0x10);
  if (plVar4 == (longlong *)0x0) goto LAB_1410bbed2;
  if (DAT_14cba8288 == 0) {
    local_90 = &local_50;
    local_50 = FUN_141864c34;
    local_80 = FUN_14081d0ea;
    local_88 = (code *)&LAB_1464cee30;
    local_98 = &LAB_148bfac22;
    local_a0 = (code *)&LAB_140f21842;
    local_a8 = L"Game";
    local_b0 = 0;
    local_b8 = 0x10000004;
    local_c0 = 0x10;
    local_c8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(plVar4[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
      != DAT_14cba8288 + 0x30)) goto LAB_1410bbed2;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14480f766(plVar4 + 0xe37);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(plVar4 + 0xe3f);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14480f766(plVar4 + 0xe59);
  }
  plVar6 = plVar4 + 0xe47;
  FUN_140fe154e(local_58);
  FUN_1409ca370(plVar6,plVar1);
  iVar5 = (int)plVar4[0xe48];
  if (0 < iVar5) {
    lVar7 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar9 = *plVar6;
        puVar2 = (uint *)(lVar9 + lVar7 * 0x10);
        if ((((*(longlong *)(lVar9 + 8 + lVar7 * 0x10) != 0) && (puVar2[1] != 0)) &&
            (uVar3 = *puVar2, -1 < (int)uVar3)) &&
           ((((int)uVar3 < DAT_14c9647dc &&
             (plVar12 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0)) &&
            ((*(uint *)(plVar12 + 2) == puVar2[1] &&
             (((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0 && (*plVar12 != 0)))))))) break;
        iVar11 = iVar5 + ~(uint)lVar7;
        if (iVar11 != 0) {
          if (0 < iVar11) {
            iVar11 = 1;
          }
          memmove(puVar2,(void *)(lVar9 + (longlong)(iVar5 - iVar11) * 0x10),(longlong)iVar11 << 4);
          iVar5 = (int)plVar4[0xe48];
        }
        iVar5 = iVar5 + -1;
        *(int *)(plVar4 + 0xe48) = iVar5;
        bVar10 = true;
        if (iVar5 <= lVar7) goto LAB_1410bbf4d;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
    if (bVar10) {
LAB_1410bbf4d:
      FUN_1400bbcfc(plVar6);
    }
  }
  plVar6 = plVar4 + 0xe4c;
  FUN_140fe148e(&local_60);
  FUN_1409ca370(plVar6,plVar1,local_60);
  iVar5 = (int)plVar4[0xe4d];
  if (0 < iVar5) {
    lVar7 = 0;
    bVar10 = false;
    do {
      local_6c = ~(uint)lVar7;
      while( true ) {
        lVar9 = *plVar6;
        puVar2 = (uint *)(lVar9 + lVar7 * 0x10);
        if (((((*(longlong *)(lVar9 + 8 + lVar7 * 0x10) != 0) && (puVar2[1] != 0)) &&
             (uVar3 = *puVar2, -1 < (int)uVar3)) &&
            (((int)uVar3 < DAT_14c9647dc &&
             (plVar12 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar12 + 2) == puVar2[1] &&
            (((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0 && (*plVar12 != 0)))))) break;
        iVar11 = iVar5 + local_6c;
        if (iVar11 != 0) {
          if (0 < iVar11) {
            iVar11 = 1;
          }
          memmove(puVar2,(void *)(lVar9 + (longlong)(iVar5 - iVar11) * 0x10),(longlong)iVar11 << 4);
          iVar5 = (int)plVar4[0xe4d];
        }
        iVar5 = iVar5 + -1;
        *(int *)(plVar4 + 0xe4d) = iVar5;
        bVar10 = true;
        if (iVar5 <= lVar7) goto LAB_1410bbf5a;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
    if (bVar10) {
LAB_1410bbf5a:
      FUN_1400bbcfc(plVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  plVar6 = plVar4 + 0xfe5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1410bb444(local_68);
  FUN_1409ca370(plVar6,plVar1);
  iVar5 = (int)plVar4[0xfe6];
  if (0 < iVar5) {
    lVar7 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar9 = *plVar6;
        puVar2 = (uint *)(lVar9 + lVar7 * 0x10);
        if (((((*(longlong *)(lVar9 + 8 + lVar7 * 0x10) != 0) && (puVar2[1] != 0)) &&
             (uVar3 = *puVar2, -1 < (int)uVar3)) &&
            (((int)uVar3 < DAT_14c9647dc &&
             (plVar12 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar12 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar12 + 2) == puVar2[1] &&
            (((*(uint *)(plVar12 + 1) >> 0x1c & 1) == 0 && (*plVar12 != 0)))))) break;
        iVar11 = iVar5 + ~(uint)lVar7;
        if (iVar11 != 0) {
          if (0 < iVar11) {
            iVar11 = 1;
          }
          memmove(puVar2,(void *)(lVar9 + (longlong)(iVar5 - iVar11) * 0x10),(longlong)iVar11 << 4);
          iVar5 = (int)plVar4[0xfe6];
        }
        iVar5 = iVar5 + -1;
        *(int *)(plVar4 + 0xfe6) = iVar5;
        bVar10 = true;
        if (iVar5 <= lVar7) goto LAB_1410bbf67;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
    if (bVar10) {
LAB_1410bbf67:
      FUN_1400bbcfc(plVar6);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14480f766(plVar4 + 0x9d0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (DAT_14cb223d8 == 0) {
    local_90 = &local_50;
    local_50 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_147f29feb;
    local_a0 = FUN_1464384fe;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
  }
  plVar6 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb223d8);
  if (plVar6 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_90 = &local_50;
      local_50 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_147f29feb;
      local_a0 = FUN_1464384fe;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar12 = (longlong *)FUN_144718840(plVar6,DAT_14cb223d8);
    if ((((plVar6 != plVar12) && (plVar12 != (longlong *)0x0)) &&
        (lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12), lVar7 != 0)) &&
       (*(longlong *)(param_1 + 0x38) != 0)) {
      FUN_14480f766(lVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14480f766(plVar4 + 0x7fd);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14480f766(plVar4 + 0x800);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14480f766(plVar4 + 0xffa);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_14480f766(plVar4 + 0x7fa);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (((*(longlong *)(param_1 + 0x90) != 0) &&
      (lVar7 = (**(code **)(*plVar1 + 0x180))(plVar1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x1f0), lVar7 != 0)) {
    uVar8 = (**(code **)(*plVar1 + 0x180))(plVar1);
    lVar7 = FUN_140fe13cc(lVar7,uVar8);
    if ((lVar7 != 0) && (lVar9 = *(longlong *)(lVar7 + 0x430), lVar9 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_90 = &local_50;
        local_50 = FUN_1417de738;
        local_80 = (code *)&LAB_145893408;
        local_88 = (code *)&LAB_1458cbbd2;
        local_98 = &LAB_147ba21f1;
        local_a0 = (code *)&LAB_1463e9233;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x1000000c;
        local_c0 = 8;
        local_c8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar9 = *(longlong *)(lVar7 + 0x430);
        if (lVar9 == 0) goto LAB_1410bbe9d;
      }
      if ((((DAT_14cae9568 != 0) && (lVar7 = *(longlong *)(lVar9 + 0x10), lVar7 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
           == DAT_14cae9568 + 0x30 && (lVar7 = FUN_1403ca91c(), lVar7 != 0)))) {
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_14480f766(lVar7 + 0x60);
        }
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
    }
  }
LAB_1410bbe9d:
  lVar7 = FUN_140fe12e2(plVar1,plVar4);
  if (lVar7 != 0) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_14480f766(lVar7 + 0x750);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
LAB_1410bbed2:
  lVar7 = *(longlong *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar7 != 0) {
    FUN_14127b218(lVar7);
    FUN_1400020a8(lVar7);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14480f766(&DAT_14cbd0b90);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_140457ffc(&DAT_14c9647a0,plVar1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410bc208 FUN_1410bc208 body=439 status=ok
// SIG undefined FUN_1410bc208(void)

void FUN_1410bc208(undefined8 param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_7a8 [32];
  undefined8 local_788;
  undefined8 local_780;
  undefined *local_778;
  code *local_770;
  undefined1 local_768 [1792];
  undefined1 *local_68;
  uint local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7a8;
  if (0 < (int)param_4) {
    do {
      uVar2 = FUN_1410bc3c0();
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952478) {
        FUN_144b3d300(&DAT_14c952478);
        if (DAT_14c952478 == -1) {
          FUN_1446f4b16();
          local_770 = FUN_1403a5f94;
          local_778 = &DAT_14c951c78;
          local_780 = 0;
          local_788 = 0x4018001;
          FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
          atexit(FUN_1428170e8);
          _Init_thread_footer(&DAT_14c952478);
        }
      }
      local_780 = CONCAT44(local_780._4_4_,2);
      local_788 = CONCAT71(local_788._1_7_,1);
      FUN_140021b28(local_768,&DAT_14c952428,uVar2);
      while (0 < (int)local_60) {
        puVar3 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar3 = local_768;
        }
        puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_60 * 0xe0 + -0x18);
        if (*(undefined1 **)(puVar3 + (ulonglong)local_60 * 0xe0 + -0x18) == (undefined1 *)0x0) {
          puVar4 = puVar3 + (ulonglong)local_60 * 0xe0 + -0xd8;
        }
        (**(code **)(*param_2 + 0x88))
                  (param_2,*(undefined8 *)
                            (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_60 * 0xe0 + -8) *
                                      0x18 + 8),0);
        FUN_140caedf2(local_768);
      }
      FUN_140021a7a(local_768);
      bVar1 = 1 < param_4;
      param_4 = param_4 - 1;
    } while (bVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_7a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bc3c0 FUN_1410bc3c0 body=57 status=ok
// SIG undefined FUN_1410bc3c0(void)

void FUN_1410bc3c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab3648 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab3648 = FUN_140002ddd(FUN_14179ec33,uVar1,L"MovieSceneObjectBindingID");
  }
  return;
}



// FUNCTION 1410bc3fa FUN_1410bc3fa body=5288 status=ok
// SIG undefined FUN_1410bc3fa(void)

void FUN_1410bc3fa(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  char cVar22;
  uint *puVar23;
  longlong *plVar24;
  undefined1 auStack_288 [32];
  longlong local_268;
  uint **local_260;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong *local_238;
  ulonglong local_230;
  ulonglong local_228;
  longlong *local_220;
  longlong local_218;
  uint **local_210;
  int local_204;
  longlong *local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  int local_1e8;
  undefined1 local_1e0 [8];
  uint *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined4 local_1a0;
  uint *local_198;
  uint *local_190;
  ulonglong local_188;
  int local_180;
  undefined8 local_178;
  int local_170;
  uint local_16c;
  undefined1 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  ushort local_158;
  undefined4 local_154;
  uint local_150;
  undefined1 local_14c;
  uint local_148 [8];
  undefined8 local_128;
  undefined1 local_120 [32];
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_c8;
  undefined8 local_a0;
  uint local_98 [8];
  undefined8 local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  plVar11 = (longlong *)FUN_14009d2a0();
  lVar12 = (longlong)*(int *)(param_1 + 0x10) * 0x58;
  lVar21 = *plVar11 + lVar12;
  lVar12 = *plVar11 + lVar12;
  plVar16 = (longlong *)(lVar12 + 0x30);
  if ((*(byte *)(lVar12 + 0x50) & 2) == 0) {
    plVar16 = (longlong *)*plVar16;
  }
  (**(code **)(*plVar16 + 0x20))(plVar16,&local_200,lVar21,*(undefined8 *)(param_2 + 0x10));
  if (local_200 == (longlong *)0x0) goto LAB_1410bd023;
  (**(code **)(*local_200 + 8))(local_200,&local_160);
  *(undefined4 *)(param_1 + 0x14) = local_160;
  uVar9 = *(ushort *)(lVar21 + 0x14);
  iVar18 = uVar9 + 1;
  local_50 = 0x10000000000;
  iVar10 = iVar18;
  if (0xff < uVar9) {
    FUN_14497ddce(local_70,0);
    iVar10 = (int)local_50 + iVar18;
  }
  iVar19 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar19 = iVar10;
  }
  local_50 = CONCAT44(local_50._4_4_,iVar10);
  if (iVar10 % 0x20 != 0) {
    bVar15 = -(char)(iVar10 % 0x20);
    local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
  }
  FUN_1447c45ca(local_70,0,iVar18,0);
  local_70[uVar9 >> 5] = local_70[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
  uVar14 = local_50;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x110) != '\0') goto LAB_1410bc51b;
  uVar9 = *(ushort *)((longlong)plVar11 + 0x11a);
  iVar10 = uVar9 + 1;
  iVar18 = iVar10 - (int)local_50;
  if (iVar18 != 0 && (int)local_50 <= iVar10) {
    if ((int)local_50 == 0) {
LAB_1410bd0a5:
      if (local_50._4_4_ <= (int)(uint)uVar9) {
        local_50 = CONCAT44(0x100,(int)local_50);
        FUN_14497ddce(local_70,uVar14 & 0xffffffff);
        iVar10 = (int)local_50 + iVar18;
      }
      iVar19 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar19 = iVar10;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (iVar10 % 0x20 != 0) {
        bVar15 = -(char)(iVar10 % 0x20);
        local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
      }
    }
    else {
      iVar19 = (int)local_50 + 0x1e;
      if (-1 < (int)local_50 + -1) {
        iVar19 = (int)local_50 + -1;
      }
      if (iVar19 >> 5 != (uint)(uVar9 >> 5)) goto LAB_1410bd0a5;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
    }
    FUN_1447c45ca(local_70,uVar14 & 0xffffffff,iVar18,0);
  }
  local_70[uVar9 >> 5] = local_70[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
LAB_1410bc51b:
  uVar9 = *(ushort *)((longlong)plVar11 + 0x11c);
  local_160 = CONCAT22(*(undefined2 *)((longlong)plVar11 + 0x12e),uVar9);
  local_15c = CONCAT22(local_15c._2_2_,(short)plVar11[0x26]);
  local_78 = 0x10000000000;
  lVar21 = 2;
  iVar10 = 0;
  do {
    iVar18 = uVar9 + 1;
    iVar19 = iVar18 - iVar10;
    if (iVar19 != 0 && iVar10 <= iVar18) {
      if (iVar10 == 0) {
LAB_1410bc591:
        if (local_78._4_4_ <= (int)(uint)uVar9) {
          local_78 = CONCAT44(0x100,(int)local_78);
          FUN_14497ddce(local_98,iVar10);
          iVar18 = (int)local_78 + iVar19;
        }
        iVar17 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar17 = iVar18;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar18);
        if (iVar18 % 0x20 != 0) {
          bVar15 = -(char)(iVar18 % 0x20);
          local_98[iVar17 >> 5] = (local_98[iVar17 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        }
      }
      else {
        iVar17 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar17 = iVar10 + -1;
        }
        if (iVar17 >> 5 != (uint)(uVar9 >> 5)) goto LAB_1410bc591;
        local_78 = CONCAT44(local_78._4_4_,iVar18);
      }
      FUN_1447c45ca(local_98,iVar10,iVar19,0);
    }
    local_98[uVar9 >> 5] = local_98[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    if (lVar21 == 6) break;
    uVar9 = *(ushort *)((longlong)&local_160 + lVar21);
    lVar21 = lVar21 + 2;
    iVar10 = (int)local_78;
  } while( true );
  plVar16 = (longlong *)(**(code **)(*local_200 + 0x38))();
  uVar14 = local_178;
  local_220 = plVar11;
  if (plVar16 == (longlong *)0x0) {
    local_238 = (longlong *)(**(code **)(*local_200 + 0x30))();
    if (local_238 == (longlong *)0x0) goto LAB_1410bd023;
    uVar9 = *(ushort *)(plVar11 + 10);
    iVar18 = uVar9 + 1;
    local_160 = CONCAT22(uVar9,(short)local_160);
    local_15c = CONCAT22(*(undefined2 *)((longlong)plVar11 + 0x62),
                         *(undefined2 *)((longlong)plVar11 + 0x4a));
    local_158 = local_158 & 0xff;
    local_154 = 0x6ff;
    local_150 = local_150 & 0xffffff00;
    local_128 = 0x10000000000;
    local_100 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_f8 = 0;
    uStack_f0 = 0;
    local_a0 = 0x10000000000;
    iVar10 = iVar18;
    if (0xff < uVar9) {
      FUN_14497ddce(local_148,0);
      iVar10 = (int)local_128 + iVar18;
    }
    iVar19 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar19 = iVar10;
    }
    local_128._0_4_ = iVar10;
    if (iVar10 % 0x20 != 0) {
      bVar15 = -(char)(iVar10 % 0x20);
      local_148[iVar19 >> 5] = (local_148[iVar19 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
    }
    FUN_1447c45ca(local_148,0,iVar18,0);
    uVar7 = local_15c;
    uVar6 = (ushort)local_15c;
    local_148[uVar9 >> 5] = local_148[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    iVar10 = (int)local_128;
    iVar18 = (local_15c & 0xffff) + 1;
    iVar19 = iVar18 - (int)local_128;
    if (iVar19 != 0 && (int)local_128 <= iVar18) {
      if ((int)local_128 == 0) {
LAB_1410bc757:
        if (local_128._4_4_ <= (int)(local_15c & 0xffff)) {
          local_128._4_4_ = 0x100;
          FUN_14497ddce(local_148,(int)local_128);
          iVar18 = (int)local_128 + iVar19;
        }
        iVar17 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar17 = iVar18;
        }
        local_128._0_4_ = iVar18;
        iVar18 = (int)local_128;
        if (iVar18 % 0x20 != 0) {
          bVar15 = -(char)(iVar18 % 0x20);
          local_148[iVar17 >> 5] = (local_148[iVar17 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
          iVar18 = (int)local_128;
        }
      }
      else {
        iVar17 = (int)local_128 + 0x1e;
        if (-1 < (int)local_128 + -1) {
          iVar17 = (int)local_128 + -1;
        }
        if (iVar17 >> 5 != (uint)((ushort)local_15c >> 5)) goto LAB_1410bc757;
      }
      local_128._0_4_ = iVar18;
      FUN_1447c45ca(local_148,iVar10,iVar19,0);
    }
    uVar8 = local_15c;
    plVar16 = local_220;
    local_148[uVar6 >> 5] = local_148[uVar6 >> 5] | 1 << ((byte)uVar7 & 0x1f);
    iVar10 = (int)local_128;
    uVar9 = local_15c._2_2_;
    iVar18 = local_15c._2_2_ + 1;
    iVar19 = iVar18 - (int)local_128;
    if (iVar19 != 0 && (int)local_128 <= iVar18) {
      if ((int)local_128 == 0) {
LAB_1410bc7f9:
        if (local_128._4_4_ <= (int)(uint)local_15c._2_2_) {
          local_128._4_4_ = 0x100;
          FUN_14497ddce(local_148,(int)local_128);
          iVar18 = (int)local_128 + iVar19;
        }
        iVar17 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar17 = iVar18;
        }
        local_128._0_4_ = iVar18;
        iVar18 = (int)local_128;
        if (iVar18 % 0x20 != 0) {
          bVar15 = -(char)(iVar18 % 0x20);
          local_148[iVar17 >> 5] = (local_148[iVar17 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
          iVar18 = (int)local_128;
        }
      }
      else {
        iVar17 = (int)local_128 + 0x1e;
        if (-1 < (int)local_128 + -1) {
          iVar17 = (int)local_128 + -1;
        }
        if (iVar17 >> 5 != (uint)(local_15c._2_2_ >> 5)) goto LAB_1410bc7f9;
      }
      local_128._0_4_ = iVar18;
      FUN_1447c45ca(local_148,iVar10,iVar19,0);
    }
    local_148[uVar9 >> 5] = local_148[uVar9 >> 5] | 1 << ((byte)(uVar8 >> 0x10) & 0x1f);
    FUN_14010b303(local_70,local_148,1,&local_1d8);
    FUN_14010b303(local_98,local_120,1,&local_1d8);
    if (((local_160._2_2_ != -1) && ((ushort)local_15c != -1)) && (local_15c._2_2_ != -1)) {
      lVar21 = *(longlong *)(param_1 + -0x18);
      local_1d0 = (uint *)(lVar21 + 0x28);
      cVar22 = *(char *)(lVar21 + 0x298);
      if (cVar22 == '\0') {
        *(int *)(lVar21 + 0x28c) = *(int *)(lVar21 + 0x28c) + 1;
      }
      else {
        LOCK();
        *(int *)(lVar21 + 0x28c) = *(int *)(lVar21 + 0x28c) + 1;
        UNLOCK();
      }
      local_1d8 = local_148;
      iVar10 = FUN_1403b8464(&local_1d8,0);
      local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,iVar10);
      if (iVar10 != *(int *)(lVar21 + 0x38)) {
        local_228 = CONCAT71(local_228._1_7_,cVar22);
        local_248 = CONCAT44(local_248._4_4_,*(int *)(lVar21 + 0x38));
        local_240 = param_1;
        do {
          puVar23 = local_1d0;
          lVar21 = *(longlong *)(*(longlong *)(local_1d0 + 0x18) + (longlong)iVar10 * 8);
          if (cVar22 == '\0') {
            *(undefined4 *)(lVar21 + 0x14) = 0;
            local_250 = lVar21;
          }
          else {
            local_250 = 0;
          }
          if (*(ushort *)(lVar21 + 0xc) != 0) {
            plVar16 = *(longlong **)(lVar21 + 0x28);
            lVar12 = (ulonglong)*(ushort *)(lVar21 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar16 + 0x1e) == local_15c._2_2_) goto LAB_1410bc98d;
              plVar16 = plVar16 + 4;
              lVar12 = lVar12 + -0x20;
            } while (lVar12 != 0);
          }
          plVar16 = (longlong *)0x0;
LAB_1410bc98d:
          local_230 = CONCAT44(local_230._4_4_,*(int *)(lVar21 + 0x14));
          if (*(int *)(lVar21 + 0x14) == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
          }
          LOCK();
          *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
          UNLOCK();
          local_210 = (uint **)*plVar16;
          if (*(ushort *)(lVar21 + 0xc) != 0) {
            plVar11 = *(longlong **)(lVar21 + 0x28);
            lVar12 = (ulonglong)*(ushort *)(lVar21 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar11 + 0x1e) == (ushort)local_15c) goto LAB_1410bc9e0;
              plVar11 = plVar11 + 4;
              lVar12 = lVar12 + -0x20;
            } while (lVar12 != 0);
          }
          plVar11 = (longlong *)0x0;
LAB_1410bc9e0:
          iVar18 = *(int *)(lVar21 + 0x14);
          if (iVar18 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
          }
          LOCK();
          *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
          UNLOCK();
          local_218 = *plVar11;
          if (*(ushort *)(lVar21 + 0xc) != 0) {
            puVar20 = *(undefined8 **)(lVar21 + 0x28);
            lVar12 = (ulonglong)*(ushort *)(lVar21 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar20 + 0x1e) == local_160._2_2_) goto LAB_1410bca2d;
              puVar20 = puVar20 + 4;
              lVar12 = lVar12 + -0x20;
            } while (lVar12 != 0);
          }
          puVar20 = (undefined8 *)0x0;
LAB_1410bca2d:
          iVar19 = *(int *)(lVar21 + 0x14);
          if (iVar19 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar20 + 1));
          }
          LOCK();
          *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + 1;
          UNLOCK();
          uVar2 = *puVar20;
          uVar3 = *(undefined8 *)(lVar21 + 0x18);
          local_190 = puVar23;
          local_188 = CONCAT44(local_188._4_4_,iVar10);
          FUN_140cd6274(&local_178,&local_190);
          local_260 = local_210;
          local_268 = local_218;
          (**(code **)*local_238)(local_238,&local_178,uVar3,uVar2);
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
            UNLOCK();
            if ((int)local_230 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
            }
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
            UNLOCK();
            if (iVar18 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
            }
          }
          plVar16 = local_220;
          cVar22 = (char)local_228;
          if (puVar20 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + -1;
            UNLOCK();
            if (iVar19 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar20 + 1));
            }
          }
          param_1 = local_240;
          if (local_250 != 0) {
            *(undefined4 *)(local_250 + 0x14) = 1;
          }
          iVar10 = FUN_1403b8464(&local_1d8,(int)local_1c8 + 1);
          local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,iVar10);
        } while (iVar10 != (int)local_248);
      }
      if (local_1d8 != (uint *)0x0) {
        if ((char)local_1d0[0x9c] == '\0') {
          local_1d0[0x99] = local_1d0[0x99] - 1;
        }
        else {
          LOCK();
          local_1d0[0x99] = local_1d0[0x99] - 1;
          UNLOCK();
        }
      }
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    uVar9 = *(ushort *)((longlong)plVar16 + 0x4a);
    iVar18 = uVar9 + 1;
    local_158 = *(ushort *)(plVar16 + 0x21);
    local_160 = CONCAT22(*(undefined2 *)((longlong)plVar16 + 0x62),uVar9);
    local_15c = *(undefined4 *)((longlong)plVar16 + 0x104);
    local_154._0_2_ = (ushort)(byte)local_154;
    local_150 = 0x6ff;
    local_14c = 0;
    local_128 = 0x10000000000;
    local_100 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_f8 = 0;
    uStack_f0 = 0;
    local_a0 = 0x10000000000;
    iVar10 = iVar18;
    if (0xff < uVar9) {
      FUN_14497ddce(local_148,0);
      iVar10 = (int)local_128 + iVar18;
    }
    iVar19 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar19 = iVar10;
    }
    local_128 = CONCAT44(local_128._4_4_,iVar10);
    if (iVar10 % 0x20 != 0) {
      bVar15 = -(char)(iVar10 % 0x20);
      local_148[iVar19 >> 5] = (local_148[iVar19 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
    }
    FUN_1447c45ca(local_148,0,iVar18,0);
    uVar5 = local_160;
    uVar6 = local_160._2_2_;
    local_148[uVar9 >> 5] = local_148[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    uVar14 = local_128;
    iVar10 = local_160._2_2_ + 1;
    iVar18 = iVar10 - (int)local_128;
    if (iVar18 != 0 && (int)local_128 <= iVar10) {
      if ((int)local_128 == 0) {
LAB_1410bcc8b:
        if (local_128._4_4_ <= (int)(uint)local_160._2_2_) {
          local_128 = CONCAT44(0x100,(int)local_128);
          FUN_14497ddce(local_148,uVar14 & 0xffffffff);
          iVar10 = (int)local_128 + iVar18;
        }
        iVar19 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar19 = iVar10;
        }
        local_128 = CONCAT44(local_128._4_4_,iVar10);
        if (iVar10 % 0x20 != 0) {
          bVar15 = -(char)(iVar10 % 0x20);
          local_148[iVar19 >> 5] = (local_148[iVar19 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
        }
      }
      else {
        iVar19 = (int)local_128 + 0x1e;
        if (-1 < (int)local_128 + -1) {
          iVar19 = (int)local_128 + -1;
        }
        if (iVar19 >> 5 != (uint)(local_160._2_2_ >> 5)) goto LAB_1410bcc8b;
        local_128 = CONCAT44(local_128._4_4_,iVar10);
      }
      FUN_1447c45ca(local_148,uVar14 & 0xffffffff,iVar18,0);
    }
    local_148[uVar6 >> 5] = local_148[uVar6 >> 5] | 1 << ((byte)((uint)uVar5 >> 0x10) & 0x1f);
    FUN_140dad887(&local_15c,local_148);
    FUN_14010b303(local_70,local_148,1,&local_1d8);
    FUN_14010b303(local_98,local_120,1,&local_1d8);
    lVar21 = local_f8;
    if (((short)local_160 != -1) && (local_160._2_2_ != -1)) {
      lVar21 = *(longlong *)(param_1 + -0x18);
      local_188 = lVar21 + 0x28;
      plVar16 = *(longlong **)(lVar21 + 0x270);
      cVar22 = *(char *)(lVar21 + 0x298);
      if (cVar22 == '\0') {
        *(int *)(lVar21 + 0x28c) = *(int *)(lVar21 + 0x28c) + 1;
      }
      else {
        LOCK();
        *(int *)(lVar21 + 0x28c) = *(int *)(lVar21 + 0x28c) + 1;
        UNLOCK();
      }
      local_190 = local_148;
      iVar10 = FUN_1403b8464(&local_190,0);
      local_180 = iVar10;
      if (iVar10 != *(int *)(lVar21 + 0x38)) {
        local_240 = CONCAT71(local_240._1_7_,cVar22);
        local_228 = CONCAT44(local_228._4_4_,*(int *)(lVar21 + 0x38));
        local_220 = plVar16;
        do {
          lVar21 = *(longlong *)(*(longlong *)(local_188 + 0x60) + (longlong)iVar10 * 8);
          local_230 = local_188;
          if (cVar22 == '\0') {
            *(undefined4 *)(lVar21 + 0x14) = 0;
            local_248 = lVar21;
          }
          else {
            local_248 = 0;
          }
          local_180 = iVar10;
          FUN_1410bd8a8(&local_1d8,lVar21,&local_15c,local_220);
          if (*(ushort *)(lVar21 + 0xc) != 0) {
            plVar16 = *(longlong **)(lVar21 + 0x28);
            lVar12 = (ulonglong)*(ushort *)(lVar21 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar16 + 0x1e) == local_160._2_2_) goto LAB_1410bce31;
              plVar16 = plVar16 + 4;
              lVar12 = lVar12 + -0x20;
            } while (lVar12 != 0);
          }
          plVar16 = (longlong *)0x0;
LAB_1410bce31:
          iVar18 = *(int *)(lVar21 + 0x14);
          if (iVar18 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
          }
          LOCK();
          *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
          UNLOCK();
          lVar12 = *plVar16;
          local_250 = CONCAT44(local_250._4_4_,iVar18);
          if (*(ushort *)(lVar21 + 0xc) != 0) {
            puVar20 = *(undefined8 **)(lVar21 + 0x28);
            lVar13 = (ulonglong)*(ushort *)(lVar21 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar20 + 0x1e) == (short)local_160) goto LAB_1410bce7e;
              puVar20 = puVar20 + 4;
              lVar13 = lVar13 + -0x20;
            } while (lVar13 != 0);
          }
          puVar20 = (undefined8 *)0x0;
LAB_1410bce7e:
          iVar18 = *(int *)(lVar21 + 0x14);
          if (iVar18 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar20 + 1));
          }
          lVar13 = local_1a8;
          lVar21 = local_1c0;
          puVar23 = local_1d8;
          LOCK();
          *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + 1;
          UNLOCK();
          local_210 = (uint **)CONCAT44(local_210._4_4_,local_1d0._0_4_);
          local_204 = (int)local_1b8;
          local_1d0 = (uint *)CONCAT44(uStack_1ac,local_1b0);
          local_218 = CONCAT44(local_218._4_4_,local_1a0);
          local_178 = local_230;
          local_1f0 = local_1f0 & 0xffffffffffffff00;
          local_1d8 = local_1c8;
          local_1c8 = local_198;
          local_260 = &local_1d8;
          local_268 = lVar12;
          local_170 = iVar10;
          (**(code **)(*local_238 + 8))(local_238,&local_1f0,&local_178,*puVar20);
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
            UNLOCK();
            if ((int)local_218 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 8));
            }
          }
          if (lVar21 != 0) {
            LOCK();
            *(int *)(lVar21 + 0x18) = *(int *)(lVar21 + 0x18) + -1;
            UNLOCK();
            if (local_204 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(lVar21 + 8));
            }
          }
          if (puVar23 != (uint *)0x0) {
            LOCK();
            puVar23[6] = puVar23[6] - 1;
            UNLOCK();
            if ((int)local_210 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar23 + 2));
            }
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
            UNLOCK();
            if ((int)local_250 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
            }
          }
          lVar21 = local_248;
          if (puVar20 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + -1;
            UNLOCK();
            if (iVar18 == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(puVar20 + 1));
            }
          }
          cVar22 = (char)local_240;
          if (lVar21 != 0) {
            *(undefined4 *)(lVar21 + 0x14) = 1;
          }
          iVar10 = FUN_1403b8464(&local_190,local_180 + 1);
          local_180 = iVar10;
        } while (iVar10 != (int)local_228);
      }
      lVar21 = local_f8;
      if (local_190 != (uint *)0x0) {
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
  }
  else {
    local_178._6_2_ = SUB82(uVar14,6);
    local_178._0_6_ =
         CONCAT24(*(undefined2 *)((longlong)plVar11 + 0x4a),
                  CONCAT22((short)plVar11[10],(undefined2)local_178));
    local_170._0_2_ = (ushort)(byte)local_170;
    local_16c = 0x6ff;
    local_168 = 0;
    local_240 = param_1;
    FUN_140788658(&local_160);
    FUN_14010b303(local_70,local_148,1,&local_1d8);
    FUN_14010b303(local_98,local_120,1,&local_1d8);
    if ((local_160._2_2_ != -1) && ((ushort)local_15c != -1)) {
      lVar21 = *(longlong *)(local_240 + -0x18);
      local_250 = CONCAT71(local_250._1_7_,*(undefined1 *)(lVar21 + 0x298));
      FUN_14150e78a(&local_190,lVar21 + 0x28,local_148);
      local_230 = CONCAT44(local_230._4_4_,*(int *)(lVar21 + 0x38));
      if (local_180 != *(int *)(lVar21 + 0x38)) {
        do {
          iVar10 = local_180;
          local_228 = local_188;
          plVar11 = *(longlong **)(*(longlong *)(local_188 + 0x60) + (longlong)local_180 * 8);
          if ((char)local_250 == '\0') {
            *(undefined4 *)((longlong)plVar11 + 0x14) = 0;
            local_238 = plVar11;
          }
          else {
            local_238 = (longlong *)0x0;
          }
          if (*(ushort *)((longlong)plVar11 + 0xc) != 0) {
            plVar24 = (longlong *)plVar11[5];
            lVar21 = (ulonglong)*(ushort *)((longlong)plVar11 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar24 + 0x1e) == (ushort)local_15c) goto LAB_1410bd6e4;
              plVar24 = plVar24 + 4;
              lVar21 = lVar21 + -0x20;
            } while (lVar21 != 0);
          }
          plVar24 = (longlong *)0x0;
LAB_1410bd6e4:
          iVar18 = *(int *)((longlong)plVar11 + 0x14);
          if (iVar18 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
          }
          LOCK();
          *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
          UNLOCK();
          local_248 = *plVar24;
          if (*(ushort *)((longlong)plVar11 + 0xc) != 0) {
            puVar23 = (uint *)plVar11[5];
            lVar21 = (ulonglong)*(ushort *)((longlong)plVar11 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar23 + 0x1e) == local_160._2_2_) goto LAB_1410bd734;
              puVar23 = puVar23 + 8;
              lVar21 = lVar21 + -0x20;
            } while (lVar21 != 0);
          }
          puVar23 = (uint *)0x0;
LAB_1410bd734:
          iVar19 = *(int *)((longlong)plVar11 + 0x14);
          if (iVar19 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar23 + 2));
          }
          lVar12 = local_248;
          LOCK();
          puVar23[6] = puVar23[6] + 1;
          UNLOCK();
          lVar21 = *(longlong *)puVar23;
          puVar4 = (uint *)plVar11[3];
          local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,iVar19);
          local_1a8 = local_248;
          local_1f0 = local_228;
          local_1e8 = iVar10;
          local_1d8 = puVar4;
          local_1d0 = puVar23;
          local_1c0 = lVar21;
          local_1b8 = plVar24;
          local_1b0 = iVar18;
          FUN_140cd6274(local_1e0,&local_1f0);
          local_268 = lVar12;
          (**(code **)*plVar16)(plVar16,local_1e0,puVar4,lVar21);
          FUN_14332895e(&local_1d8);
          if (local_238 != (longlong *)0x0) {
            *(undefined4 *)((longlong)local_238 + 0x14) = 1;
          }
          local_180 = FUN_1403b8464(&local_190,local_180 + 1);
        } while (local_180 != (int)local_230);
      }
      if (local_190 != (uint *)0x0) {
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
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    uVar2 = local_178;
    local_178 = CONCAT62(local_178._2_6_,*(undefined2 *)((longlong)local_220 + 0x4a));
    uVar3 = local_178;
    local_178._6_2_ = SUB82(uVar2,6);
    local_178._0_6_ = (uint6)(uint5)uVar3;
    local_170 = 0x6ff;
    local_16c = local_16c & 0xffffff00;
    FUN_14769c4ce(&local_178,&local_160,local_70);
    FUN_14010b303(local_98,&local_128,1,&local_1d8);
    lVar21 = local_100;
    if ((short)local_160 != -1) {
      lVar21 = *(longlong *)(local_240 + -0x18);
      cVar22 = *(char *)(lVar21 + 0x298);
      FUN_14150e78a(&local_1d8,lVar21 + 0x28,&local_150);
      iVar10 = *(int *)(lVar21 + 0x38);
      uVar14 = (ulonglong)local_1c8 & 0xffffffff;
      while (puVar23 = local_1d0, iVar18 = (int)uVar14, iVar18 != iVar10) {
        lVar21 = *(longlong *)(*(longlong *)(local_1d0 + 0x18) + (longlong)iVar18 * 8);
        if (cVar22 == '\0') {
          *(undefined4 *)(lVar21 + 0x14) = 0;
          lVar12 = lVar21;
        }
        else {
          lVar12 = 0;
        }
        if (*(ushort *)(lVar21 + 0xc) != 0) {
          puVar20 = *(undefined8 **)(lVar21 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar21 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar20 + 0x1e) == (short)local_160) goto LAB_1410bd5d8;
            puVar20 = puVar20 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        puVar20 = (undefined8 *)0x0;
LAB_1410bd5d8:
        iVar19 = *(int *)(lVar21 + 0x14);
        if (iVar19 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar20 + 1));
        }
        LOCK();
        *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + 1;
        UNLOCK();
        local_190 = (uint *)*puVar20;
        local_1f0 = local_1f0 & 0xffffffffffffff00;
        local_188 = CONCAT44(local_188._4_4_,
                             (uint)*(ushort *)
                                    (*(longlong *)
                                      (*(longlong *)(puVar23 + 0x18) + (longlong)iVar18 * 8) + 0xe))
        ;
        (**(code **)(*plVar16 + 0x10))(plVar16,&local_1f0,&local_190);
        if (puVar20 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar20 + 3) = *(int *)(puVar20 + 3) + -1;
          UNLOCK();
          if (iVar19 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(puVar20 + 1));
          }
        }
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x14) = 1;
        }
        uVar14 = FUN_1403b8464(&local_1d8,(int)local_1c8 + 1);
        local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,(int)uVar14);
      }
      lVar21 = local_100;
      if (local_1d8 != (uint *)0x0) {
        if ((char)local_1d0[0x9c] == '\0') {
          local_1d0[0x99] = local_1d0[0x99] - 1;
        }
        else {
          LOCK();
          local_1d0[0x99] = local_1d0[0x99] - 1;
          UNLOCK();
        }
      }
    }
  }
  if (lVar21 != 0) {
    FUN_1400020a8();
  }
LAB_1410bd023:
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1f8 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar1 = (int *)((longlong)local_1f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1f8 + 0x10))(local_1f8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410bd8a8 FUN_1410bd8a8 body=197 status=ok
// SIG undefined FUN_1410bd8a8(void)

undefined8 * FUN_1410bd8a8(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1410bd9c4(param_2,&local_48,param_3[2]);
  FUN_1410bd96e(param_2,&local_60,param_3[1]);
  FUN_140b325e4(param_2,&local_78,*param_3);
  *param_1 = local_78;
  *(undefined4 *)(param_1 + 1) = local_70;
  param_1[2] = local_68;
  param_1[3] = local_60;
  *(undefined4 *)(param_1 + 4) = local_58;
  param_1[5] = local_50;
  param_1[6] = local_48;
  *(undefined4 *)(param_1 + 7) = local_40;
  param_1[8] = local_38;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bd96e FUN_1410bd96e body=86 status=ok
// SIG undefined FUN_1410bd96e(void)

undefined8 * FUN_1410bd96e(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1457f6d98(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1410bd9c4 FUN_1410bd9c4 body=86 status=ok
// SIG undefined FUN_1410bd9c4(void)

undefined8 * FUN_1410bd9c4(longlong param_1,undefined8 *param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(ushort *)(param_1 + 0xc) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)(lVar2 + 0x1e) == param_3) {
        if (lVar2 != 0) {
          FUN_1410bda1a(param_2,lVar2,*(undefined4 *)(param_1 + 0x14),0);
          return param_2;
        }
        break;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1410bda1a FUN_1410bda1a body=121 status=ok
// SIG undefined FUN_1410bda1a(void)

longlong * FUN_1410bda1a(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 0x10 + *param_2;
  }
  return param_1;
}



// FUNCTION 1410bda94 FUN_1410bda94 body=263 status=ok
// SIG undefined FUN_1410bda94(void)

void FUN_1410bda94(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  if ((longlong)*(int *)(param_2 + 0x98) != 0) {
    piVar7 = *(int **)(param_2 + 0x90);
    piVar2 = piVar7 + (longlong)*(int *)(param_2 + 0x98) * 10;
    do {
      if ((*(longlong *)(piVar7 + 4) != 0) && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
        plVar5 = *(longlong **)(param_1 + 0x30);
        lVar6 = (longlong)*(int *)(param_1 + 0x38) << 4;
        do {
          plVar3 = (longlong *)*plVar5;
          if ((int)plVar3[5] == *piVar7) {
            if (plVar5 != (longlong *)0x0) {
              plVar5 = (longlong *)plVar5[1];
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              if ((plVar3 != (longlong *)0x0) &&
                 ((**(code **)(*plVar3 + 8))(plVar3,param_3), (int)plVar3[4] != 0)) {
                puVar4 = (undefined8 *)plVar3[3];
                if (puVar4 != (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,0);
                  FUN_1446efa72(plVar3 + 3,0,0,0x10);
                  *(undefined4 *)(plVar3 + 4) = 0;
                }
              }
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar5 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
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
            break;
          }
          plVar5 = plVar5 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
      }
      piVar7 = piVar7 + 10;
    } while (piVar7 != piVar2);
  }
  return;
}



// FUNCTION 1410bdb9c FUN_1410bdb9c body=68 status=ok
// SIG undefined FUN_1410bdb9c(void)

undefined8 * FUN_1410bdb9c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42a370;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 1410bdbe0 FUN_1410bdbe0 body=175 status=ok
// SIG undefined FUN_1410bdbe0(void)

void FUN_1410bdbe0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(longlong *)(*param_2 + 0x40) != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar5 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 1410bdc90 FUN_1410bdc90 body=238 status=ok
// SIG undefined FUN_1410bdc90(void)

undefined8 * FUN_1410bdc90(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
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
  iVar3 = FUN_1410bdd7e((longlong *)(param_1 + 0xe8));
  if (iVar3 != -1) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    lVar1 = lVar2 + (longlong)iVar3 * 0x28;
    if ((lVar1 != 0) && (lVar2 + (longlong)iVar3 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar1 + 0x10);
      lVar1 = *(longlong *)(lVar1 + 0x18);
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1410bdd7e FUN_1410bdd7e body=186 status=ok
// SIG undefined FUN_1410bdd7e(void)

int FUN_1410bdd7e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1410bddc1:
      lVar11 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar11 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11 * 0x28) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_1410bde13;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_1410bde13;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1410bde19;
    }
  }
  return -1;
LAB_1410bde13:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_1410bde19:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar11 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1410bddc1;
}



// FUNCTION 1410bde38 FUN_1410bde38 body=25 status=ok
// SIG undefined FUN_1410bde38(void)

undefined8 FUN_1410bde38(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1410bde82 FUN_1410bde82 body=105 status=ok
// SIG undefined FUN_1410bde82(void)

void FUN_1410bde82(longlong param_1)

{
  if (*(char *)(param_1 + 0x90) != '\x01') {
    FUN_140689bda(param_1,1);
    return;
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
  FUN_140689cb8(param_1 + 0x98,param_1 + 0x1d8);
  FUN_140689fa0(param_1 + 0x98,param_1 + 0x1f8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 1410bdeec FUN_1410bdeec body=320 status=ok
// SIG undefined FUN_1410bdeec(void)

void FUN_1410bdeec(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  iVar3 = *(int *)(param_1 + 0x210);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x208) + lVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar3 = *(int *)(param_1 + 0x210);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x220);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x218) + lVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
        iVar3 = *(int *)(param_1 + 0x220);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(int *)(param_1 + 0x214) != 0) {
    FUN_146337d1e((longlong *)(param_1 + 0x208));
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_146337d4e((longlong *)(param_1 + 0x218));
  }
  FUN_145cfc51d(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_147516b9e(param_1 + 0x1e8);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x260);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14152da2c(param_1 + 8);
  FUN_145974bae(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001410be025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1410be02c FUN_1410be02c body=341 status=ok
// SIG undefined FUN_1410be02c(void)

void FUN_1410be02c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar3 = FUN_14477b072(param_1,DAT_14cb67468);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,0);
  lVar4 = FUN_1410be182(*param_2);
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    lVar6 = lVar4 + 0x460;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf8);
  }
  if (param_1 == (longlong *)0x0) {
    FUN_1406338de(lVar6,0);
    return;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar2 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar2 = *(int *)(lVar8 + 0x10);
    bVar9 = iVar2 == 0;
    if (bVar9) {
      *(int *)(lVar8 + 0x10) = iVar7;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar2 = iVar7;
    }
  }
  FUN_1406338de(lVar6,CONCAT44(iVar2,uVar1));
  if (*(longlong *)(lVar4 + 0x1f0) == 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x458);
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
  }
  FUN_1410d4dde(*puVar5,param_1);
  return;
}



// FUNCTION 1410be182 FUN_1410be182 body=113 status=ok
// SIG undefined FUN_1410be182(void)

undefined8 FUN_1410be182(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 100) != 0) && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 100))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
        if (lVar3 != 0) {
          uVar2 = FUN_1447210f0(lVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410be1fe FUN_1410be1fe body=195 status=ok
// SIG undefined FUN_1410be1fe(void)

undefined8 * FUN_1410be1fe(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140834366();
  *param_1 = &PTR_FUN_14b50a340;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      plVar1 = param_1 + 0x75;
      param_1[0x78] = &DAT_14cb98d10;
      param_1[0x77] = param_1;
      lVar3 = DAT_14cb98d10;
      while( true ) {
        param_1[0x75] = lVar3;
        LOCK();
        lVar4 = *(longlong *)param_1[0x78];
        bVar5 = lVar3 == lVar4;
        if (bVar5) {
          *(longlong *)param_1[0x78] = (longlong)plVar1;
          lVar4 = lVar3;
        }
        UNLOCK();
        if (bVar5) break;
        param_1[0x75] = lVar4;
        lVar3 = *(longlong *)param_1[0x78];
      }
      if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 8) = plVar1;
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 1410be2c2 FUN_1410be2c2 body=9 status=ok
// SIG undefined FUN_1410be2c2(void)

undefined2 * FUN_1410be2c2(undefined2 *param_1)

{
  *param_1 = 0xffff;
  return param_1;
}



// FUNCTION 1410be2cc FUN_1410be2cc body=299 status=ok
// SIG undefined FUN_1410be2cc(void)

void FUN_1410be2cc(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x208);
  *(uint *)(param_1 + 0x208) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar2 + 1U) {
    FUN_1404e6c38(param_1,iVar2);
  }
  lVar10 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar10 = param_1;
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(lVar10 + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  lVar10 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar10 = param_1;
  }
  if (1 < *(int *)(param_1 + 0x208)) {
    uVar15 = (ulonglong)(*(int *)(param_1 + 0x208) - 1);
    do {
      uVar11 = (int)uVar15 - 1;
      uVar16 = (ulonglong)(uVar11 >> 1);
      lVar13 = uVar16 * 0x10;
      puVar12 = (undefined8 *)(lVar10 + lVar13);
      local_58 = *puVar12;
      uStack_50 = puVar12[1];
      puVar1 = (undefined4 *)(lVar10 + uVar15 * 0x10);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      cVar9 = FUN_1410be3f8(param_3,&local_68,&local_58);
      if (cVar9 == '\0') break;
      puVar14 = (undefined8 *)(lVar13 + lVar10);
      puVar12 = (undefined8 *)(uVar15 * 0x10 + lVar10);
      uVar6 = *puVar12;
      uVar7 = puVar12[1];
      uVar8 = puVar14[1];
      *puVar12 = *puVar14;
      puVar12[1] = uVar8;
      local_58._0_4_ = (undefined4)uVar6;
      local_58._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar7;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      *(undefined4 *)puVar14 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
      uVar15 = uVar16;
      local_58 = uVar6;
      uStack_50 = uVar7;
    } while (1 < uVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410be3f8 FUN_1410be3f8 body=191 status=ok
// SIG undefined FUN_1410be3f8(void)

undefined8 FUN_1410be3f8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  param_1 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_2 + 1);
  if (((int)uVar1 < 0) || ((int)param_1[5] <= (int)uVar1)) {
LAB_1410be4a7:
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar3 = param_1 + 2;
    }
    if ((*(uint *)((longlong)plVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)
    goto LAB_1410be4a7;
    plVar5 = (longlong *)((ulonglong)uVar1 * 0x80 + *param_1);
    plVar3 = (longlong *)0x0;
    if (*plVar5 == *param_2) {
      plVar3 = plVar5 + 2;
    }
  }
  uVar1 = *(uint *)(param_3 + 1);
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)param_1[5])) {
    plVar5 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    if ((*(uint *)((longlong)plVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      plVar4 = (longlong *)((ulonglong)uVar1 * 0x80 + *param_1);
      plVar5 = (longlong *)0x0;
      if (*plVar4 == *param_3) {
        plVar5 = plVar4 + 2;
      }
      goto LAB_1410be491;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1410be491:
  if (plVar3 == (longlong *)0x0) {
    uVar2 = 1;
  }
  else if (plVar5 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)plVar3[0xb] >> 8),plVar3[0xb] < plVar5[0xb]);
  }
  return uVar2;
}



// FUNCTION 1410be4b8 FUN_1410be4b8 body=84 status=ok
// SIG undefined FUN_1410be4b8(void)

void FUN_1410be4b8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_1410be678();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_14020fad6(param_1 + 10,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001410be500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 1410be50c FUN_1410be50c body=78 status=ok
// SIG undefined FUN_1410be50c(void)

void FUN_1410be50c(longlong param_1,uint param_2)

{
  FUN_1410be55a(param_1 + 0x60,param_1 + 0x50,*(undefined4 *)(param_1 + 0x18),param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 1410be55a FUN_1410be55a body=286 status=ok
// SIG undefined FUN_1410be55a(void)

void FUN_1410be55a(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  if ((param_4 >> 0x11 & 1) != 0) {
    FUN_144a787a6(param_1,param_2);
    return;
  }
  if (DAT_14c8407a8 == 0) {
    FUN_1414b00ea();
  }
  lVar3 = DAT_14c8407a8;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_1410be5b1;
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 != DVar5) goto LAB_1410be5b1;
    }
  }
  if (((param_3 & 0x20) == 0) ||
     (puVar2 = *(undefined8 **)(lVar3 + 0xf0), puVar2 == (undefined8 *)0x0)) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  else {
    (**(code **)*puVar2)(puVar2,param_1,param_2);
  }
LAB_1410be5b1:
  if ((param_4 >> 0x10 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x170) = 1;
  }
  return;
}



// FUNCTION 1410be678 FUN_1410be678 body=495 status=ok
// SIG undefined FUN_1410be678(void)

void FUN_1410be678(ulonglong *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  undefined8 **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_1[9];
  local_58 = param_4;
  if (uVar3 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    param_1[9] = (ulonglong)puVar2;
    (**(code **)(*param_1 + 0xc0))(param_1,&local_50);
    puVar4 = local_50;
    if ((int)local_48 == 0) {
      puVar4 = (ulonglong *)&DAT_149dfb77a;
    }
    FUN_1410be972(puVar2,puVar4,0,0);
    if (local_50 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = param_1[9];
  }
  FUN_1410be972(uVar3,param_2,param_3,param_4);
  if (param_4 != 0) {
    iVar1 = FUN_144a788f7(param_4 & 0xffffffff);
    if (DAT_14c83f430 != DAT_14c83f45c) {
      puVar5 = &DAT_14c83f460;
      if (DAT_14c83f468 != (undefined *)0x0) {
        puVar5 = DAT_14c83f468;
      }
      iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14c83f470 - 1U & iVar1 + (int)(param_4 >> 0x20)) * 4
                      );
      while (iVar1 != -1) {
        puVar4 = (ulonglong *)(DAT_14c83f428 + (longlong)iVar1 * 0x18);
        if (*puVar4 == param_4) {
          if ((puVar4 != (ulonglong *)0x0) && (uVar3 = puVar4[1], uVar3 != 0)) goto LAB_1410be80d;
          break;
        }
        iVar1 = (int)puVar4[2];
      }
    }
    local_60 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_60[4] = 0;
    *(undefined4 *)(local_60 + 5) = 0;
    *local_60 = 0;
    local_60[1] = 0;
    *(undefined8 *)((longlong)local_60 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)local_60 + 0x34) = 0;
    local_60[8] = 0;
    *(undefined4 *)(local_60 + 9) = 0;
    local_48 = &local_60;
    local_50 = &local_58;
    FUN_1467be6a8(&local_3c);
    uVar3 = *(ulonglong *)(DAT_14c83f428 + 8 + (longlong)local_3c * 0x18);
LAB_1410be80d:
    local_50 = param_1;
    FUN_1467bebf6(uVar3,&local_60);
    *(undefined1 *)(param_1[9] + 0x10) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410be868 FUN_1410be868 body=265 status=ok
// SIG undefined FUN_1410be868(void)

undefined8 * FUN_1410be868(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = (uint)(DVar2 != DVar3);
  }
  else {
    uVar4 = 1;
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x58 + (ulonglong)(uVar4 << 4));
  lVar5 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x50 + (ulonglong)(uVar4 << 4));
  if (lVar5 == 0) {
    iVar1 = 0;
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar5 * 2);
    iVar1 = local_30;
  }
  *param_2 = local_38;
  *(int *)(param_2 + 1) = iVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410be972 FUN_1410be972 body=813 status=ok
// SIG undefined FUN_1410be972(void)

void FUN_1410be972(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  uVar7 = FUN_1409e01db(param_2);
  FUN_14020fad6(&local_58,uVar7);
  uVar5 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar12 = 0;
  uVar11 = uVar5;
  if (0 < (int)uVar5) {
    do {
      uVar1 = (uVar11 >> 1) + uVar12;
      if (*(int *)(lVar9 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
        uVar12 = uVar1 + (uVar11 & 1);
      }
      bVar13 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar13);
  }
  if ((((int)uVar5 <= (int)uVar12) || ((int)param_3 < *(int *)(lVar9 + (ulonglong)uVar12 * 0x18)))
     || (puVar10 = (uint *)(lVar9 + (ulonglong)uVar12 * 0x18 + 8), puVar10 == (uint *)0x0)) {
    uVar11 = 0;
    if ((int)uVar5 < 1) {
LAB_1410bea35:
      *(uint *)(param_1 + 1) = uVar5 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) == uVar5) {
        FUN_1410bee4e(param_1,uVar5);
        lVar9 = *param_1;
      }
      lVar4 = (ulonglong)uVar11 * 0x18;
      memmove((void *)(lVar9 + lVar4 + 0x18),(void *)(lVar9 + lVar4),
              (ulonglong)(uVar5 - uVar11) * 0x18);
      puVar10 = (uint *)(lVar4 + *param_1);
    }
    else {
      uVar11 = 0;
      uVar12 = uVar5;
      do {
        uVar1 = (uVar12 >> 1) + uVar11;
        if (*(int *)(lVar9 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
          uVar11 = uVar1 + (uVar12 & 1);
        }
        bVar13 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar13);
      if (((int)uVar5 <= (int)uVar11) || ((int)param_3 < *(int *)(lVar9 + (ulonglong)uVar11 * 0x18))
         ) goto LAB_1410bea35;
      puVar10 = (uint *)(lVar9 + (ulonglong)uVar11 * 0x18);
      FUN_1467bf674(puVar10,1);
    }
    *puVar10 = param_3;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10 = puVar10 + 2;
    FUN_1410beca0(0,0);
  }
  if ((((param_3 & 0xfd000000) != 0x5000000) && ((param_3 & 0xfe000000) != 0xa000000)) &&
     (uVar5 = puVar10[2], 0 < (int)uVar5)) {
    plVar8 = *(longlong **)puVar10;
    if (*plVar8 == param_4) {
      FUN_14099d55c(plVar8 + 1,&local_48);
      if (local_40 == (int)uStack_50) {
        if (local_40 < 2) {
          bVar13 = true;
        }
        else {
          lVar9 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)local_48 + lVar9);
            uVar5 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)local_58 + lVar9);
            uVar11 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1410bebec;
              }
              iVar6 = uVar5 - uVar11;
              goto LAB_1410bec17;
            }
            if (uVar2 == 0) break;
LAB_1410bebec:
            lVar9 = lVar9 + 2;
          }
          iVar6 = 0;
LAB_1410bec17:
          bVar13 = iVar6 == 0;
        }
      }
      else {
        bVar13 = (int)uStack_50 + local_40 == 1;
      }
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (bVar13) goto LAB_1410beb33;
      uVar5 = puVar10[2];
      plVar8 = *(longlong **)puVar10;
    }
    FUN_1410beca0(plVar8,uVar5);
    puVar10[2] = 0;
    if (puVar10[3] != 1) {
      FUN_1457f6ea2(puVar10);
    }
  }
  uVar5 = puVar10[2];
  puVar10[2] = uVar5 + 1;
  if (puVar10[3] < uVar5 + 1) {
    FUN_1410becdc(puVar10,uVar5);
  }
  _Src = local_58;
  plVar8 = (longlong *)(*(longlong *)puVar10 + (longlong)(int)uVar5 * 0x28);
  *plVar8 = param_4;
  local_48 = (void *)0x0;
  lVar9 = (longlong)(int)uStack_50;
  local_40 = (int)uStack_50;
  if (lVar9 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_50 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar9 * 2);
  }
  FUN_140e45006(plVar8 + 1,&local_48);
LAB_1410beb33:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410beca0 FUN_1410beca0 body=60 status=ok
// SIG undefined FUN_1410beca0(void)

void FUN_1410beca0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = 0x20;
    do {
      if (*(longlong *)(param_1 + -8 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1410becdc FUN_1410becdc body=370 status=ok
// SIG undefined FUN_1410becdc(void)

void FUN_1410becdc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410bed65;
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
LAB_1410bed65:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1410bee4e FUN_1410bee4e body=370 status=ok
// SIG undefined FUN_1410bee4e(void)

void FUN_1410bee4e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410beed7;
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
LAB_1410beed7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1410befc0 FUN_1410befc0 body=181 status=ok
// SIG undefined FUN_1410befc0(void)

void FUN_1410befc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_1457f6fda(param_1,&local_38);
      lVar1 = local_38;
      lVar3 = (longlong)(int)uStack_30;
      if (lVar3 != 0) {
        lVar2 = 0;
        do {
          FUN_1406c6e60(*(longlong *)(lVar1 + lVar2) + 0x1288);
          lVar2 = lVar2 + 8;
        } while (lVar3 * 8 != lVar2);
      }
      if (local_38 != 0) {
        FUN_1400020a8(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410bf076 FUN_1410bf076 body=989 status=ok
// SIG undefined FUN_1410bf076(void)

void FUN_1410bf076(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
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
  int local_84;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = param_1 + 0x250;
  local_68 = (code *)0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_80 = param_3;
  local_70 = param_2;
  local_60 = local_78;
  if (*(int *)(param_1 + 0x268) == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = (ulonglong)local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x268);
  }
  lVar4 = local_60;
  plVar5 = local_80;
  iVar13 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar7 = local_50;
  iVar2 = iVar11;
  if (local_58._4_4_ != iVar11 || local_60 != local_78) {
    do {
      local_84 = iVar2;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar12 * 0x10);
      if (lVar10 != 0) {
        lVar15 = *local_70;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar15);
          plVar5 = local_80;
          iVar11 = local_84;
LAB_1410bf18b:
          if (DAT_14cad00c8 == 0) {
            local_68 = FUN_144a7958c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a0 = &local_68;
            local_a8 = &LAB_1479b7a0c;
            local_b0 = &LAB_1463b464e;
            local_b8 = L"Engine";
            local_c0 = 0;
            local_c8 = 0x10000005;
            local_d0 = 8;
            local_d8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            plVar5 = local_80;
            iVar11 = local_84;
            if (DAT_14cad00c8 == 0) goto LAB_1410bf3cd;
          }
          if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1410bf3cd;
          if (*(longlong *)
               (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar15 = 0;
          }
        }
        else {
          if (lVar15 != 0) goto LAB_1410bf18b;
LAB_1410bf3cd:
          lVar15 = 0;
        }
        if ((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar10);
            plVar5 = local_80;
            iVar11 = local_84;
          }
          iVar12 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar12 + 1U) {
            FUN_1457f7140(plVar5,iVar12);
            plVar5 = local_80;
            iVar11 = local_84;
          }
          *(longlong *)(*plVar5 + (longlong)iVar12 * 8) = lVar10;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar10);
            plVar5 = local_80;
            iVar11 = local_84;
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      lVar10 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar10 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar15 = (longlong)iVar13;
      uVar6 = *(uint *)(lVar10 + lVar15 * 4) & uVar14;
      if (uVar6 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar3 = iVar12;
        if (iVar12 < iVar13) {
          iVar3 = iVar13;
        }
        iVar11 = local_84;
        if (iVar13 < iVar12) {
          lVar9 = 0;
          do {
            uVar6 = *(uint *)(lVar10 + lVar15 * 4 + 4 + lVar9 * 4);
            if (uVar6 != 0) {
              iVar13 = iVar13 + (int)lVar9 + 1;
              uVar14 = 0xffffffff;
              goto LAB_1410bf244;
            }
            iVar7 = iVar7 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar3 - lVar15 != lVar9);
          uVar14 = 0xffffffff;
          iVar13 = iVar3;
        }
        iVar13 = iVar13 + 1;
        plVar5 = local_80;
        iVar12 = iVar2;
      }
      else {
LAB_1410bf244:
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
      iVar2 = local_84;
    } while (iVar12 != iVar11 || lVar4 != local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410bf45c FUN_1410bf45c body=160 status=ok
// SIG undefined FUN_1410bf45c(void)

undefined8 * FUN_1410bf45c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140bf6aa4();
  *param_1 = &PTR_FUN_14b1414c0;
  param_1[5] = &PTR_FUN_14b141b20;
  param_1[6] = &PTR_LAB_14b141b60;
  param_1[0xa4] = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  uVar1 = DAT_14c8463d8;
  param_1[0xa8] = DAT_14c8463d0;
  param_1[0xa9] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0xaa] = DAT_14c8463e0;
  param_1[0xab] = uVar1;
  param_1[0xae] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xac] = DAT_14c8464e0;
  param_1[0xad] = uVar1;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xbf;
  *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 4;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 0xe;
  return param_1;
}



// FUNCTION 1410bf50a FUN_1410bf50a body=114 status=ok
// SIG undefined FUN_1410bf50a(void)

undefined8 * FUN_1410bf50a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b29c180;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1410bf58a FUN_1410bf58a body=40 status=ok
// SIG undefined FUN_1410bf58a(void)

undefined8 FUN_1410bf58a(undefined8 param_1,int param_2)

{
  FUN_1410bf5b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410bf5b2 FUN_1410bf5b2 body=202 status=ok
// SIG undefined FUN_1410bf5b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410bf5b2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2ec510;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001410bf660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410bf67c FUN_1410bf67c body=40 status=ok
// SIG undefined FUN_1410bf67c(void)

undefined8 FUN_1410bf67c(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410bf6a4 FUN_1410bf6a4 body=256 status=ok
// SIG undefined FUN_1410bf6a4(void)

void FUN_1410bf6a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b534980;
  FUN_1401b9920(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0x164) != -1) {
    if (param_1[0x2b] != 0) {
      FUN_1400020a8();
    }
    param_1[0x2b] = 0;
    param_1[0x2c] = 0xffffffff00000000;
  }
  plVar3 = (longlong *)param_1[0x2a];
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
  plVar3 = (longlong *)param_1[0x28];
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
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 1410bf7a4 FUN_1410bf7a4 body=716 status=ok
// SIG undefined FUN_1410bf7a4(void)

void FUN_1410bf7a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  longlong lStack_60;
  uint local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (((((iVar1 != 0) && (uVar8 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar8))
       && ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)))) &&
     ((lVar2 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
      (lVar10 = *plVar7, lVar10 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1478c0a72;
      local_90 = &LAB_1417b2375;
      local_98 = L"Engine";
      local_a0 = 0x1000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      uVar4 = FUN_14097cfe8();
      local_47 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
      local_4c = *(undefined4 *)(param_1 + 0x58);
      local_68 = (code *)*param_2;
      lStack_60 = param_2[1];
      local_54 = 0x3f80000000000000;
      local_48 = 0;
      uVar8 = 0;
      if ((uint)lStack_60 == 0) {
LAB_1410bf8dc:
        local_58 = uVar8;
        if (uVar8 < (uint)lStack_60) {
          uVar8 = (uint)lStack_60;
          do {
            uVar9 = local_58;
            lVar5 = FUN_14030a32e(local_68 + (longlong)(int)local_58 * 0x38);
            if (lVar5 == 0) {
              uVar3 = 0;
            }
            else {
              lVar6 = lVar5;
              if (*(char *)(lVar2 + 0x80) != '\0') {
                lVar6 = lVar10;
                lVar10 = lVar5;
              }
              uVar3 = FUN_1410bfa72(uVar4,lVar10,lVar6);
              uVar8 = (uint)lStack_60;
              uVar9 = local_58;
            }
            FUN_1402d7d58(&local_68,uVar3);
            local_58 = uVar9 + 1;
            if ((local_58 < uVar8) &&
               (((byte)local_68[(longlong)(int)local_58 * 0x38 + 0x34] & 1) != 0)) {
              uVar9 = uVar9 + 2;
              do {
                local_58 = uVar8;
                if (uVar8 == uVar9) break;
                lVar5 = (longlong)(int)uVar9;
                local_58 = uVar9;
                uVar9 = uVar9 + 1;
              } while (((byte)local_68[lVar5 * 0x38 + 0x34] & 1) != 0);
            }
          } while (local_58 < uVar8);
        }
      }
      else {
        do {
          if (((byte)local_68[(longlong)(int)uVar8 * 0x38 + 0x34] & 1) == 0) goto LAB_1410bf8dc;
          uVar8 = uVar8 + 1;
        } while ((uint)lStack_60 != uVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bfa72 FUN_1410bfa72 body=122 status=ok
// SIG undefined FUN_1410bfa72(void)

undefined8 FUN_1410bfa72(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14097d052();
  if ((param_2 != 0) && (0 < (int)param_1[1])) {
    lVar2 = 0x10;
    lVar3 = 0;
    do {
      cVar1 = FUN_14069eaf4(*param_1 + lVar2 + -0x10,param_2);
      if (cVar1 != '\0') {
        cVar1 = FUN_14069eaf4(lVar2 + *param_1,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 1410bfaec FUN_1410bfaec body=269 status=ok
// SIG undefined FUN_1410bfaec(void)

void FUN_1410bfaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  longlong local_80;
  undefined1 local_70 [24];
  longlong local_58;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_140094282();
  FUN_1447a97f4(local_98,param_3);
  FUN_1447a97f4(local_70,param_4);
  local_48 = 0xffffffff;
  iVar2 = *(int *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x28) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x2c) < iVar2 + 1U) {
    FUN_1410bfbfa((longlong *)(lVar3 + 0x20),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x20);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x58);
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1404e49fa(lVar3 + (longlong)iVar2 * 0x58,local_98);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_1404e49fa(puVar1 + 5,local_70);
  *(undefined4 *)(puVar1 + 10) = local_48;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bfbfa FUN_1410bfbfa body=369 status=ok
// SIG undefined FUN_1410bfbfa(void)

void FUN_1410bfbfa(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410bfc7f;
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
LAB_1410bfc7f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1410bfd6c FUN_1410bfd6c body=206 status=ok
// SIG undefined FUN_1410bfd6c(void)

void FUN_1410bfd6c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146eb5374(param_2,param_1 + 0x10);
  }
  else {
    FUN_1410bfe3c(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410bfe3c FUN_1410bfe3c body=574 status=ok
// SIG undefined FUN_1410bfe3c(void)

void FUN_1410bfe3c(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 8;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146eb5472(param_2,param_1);
    goto LAB_1410bff6a;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 3,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 3);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1410bff6a;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_1410bff57:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 3);
  }
  else {
    if (local_24 == 8) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x10000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_14171ef34(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_140752556(param_1,iVar4);
        }
        goto LAB_1410bff57;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_1410bff6a:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c007c FUN_1410c007c body=527 status=ok
// SIG undefined FUN_1410c007c(void)

void FUN_1410c007c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_1 + 0x68;
  local_54 = 0;
  if (param_3 == 0) {
    local_58 = 0;
    iVar3 = 0;
  }
  else {
    local_58 = *(uint *)(param_3 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar4;
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    lVar8 = lVar2;
  }
  local_54 = iVar3;
  local_50 = param_4;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0xf0) << 4;
    iVar3 = 1;
    lVar7 = 0;
    do {
      if ((*(longlong *)(lVar8 + 8) == local_50) &&
         (cVar1 = FUN_14038330a(lVar8,&local_58), cVar1 != '\0')) {
        if (iVar3 != 0) {
          iVar4 = *(int *)(param_1 + 0xf0);
          iVar3 = iVar4 - iVar3;
          if (iVar3 != 0) {
            iVar5 = 1;
            if (iVar3 < 1) {
              iVar5 = iVar3;
            }
            lVar8 = *(longlong *)(param_1 + 0xe8);
            if (*(longlong *)(param_1 + 0xe8) == 0) {
              lVar8 = lVar2;
            }
            memmove((void *)((lVar7 >> 0x20) * 0x10 + lVar8),
                    (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar8),(longlong)iVar5 << 4);
            iVar4 = *(int *)(param_1 + 0xf0);
          }
          *(int *)(param_1 + 0xf0) = iVar4 + -1;
          FUN_1410c03da(lVar2);
          lVar2 = FUN_1410c028c(param_2);
          if (lVar2 != 0) {
            FUN_144757f48(lVar2,0x40);
            FUN_140675170(param_2,lVar2);
          }
        }
        break;
      }
      lVar8 = lVar8 + 0x10;
      lVar7 = lVar7 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c028c FUN_1410c028c body=102 status=ok
// SIG undefined FUN_1410c028c(void)

void FUN_1410c028c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1410c02f4();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c02f4 FUN_1410c02f4 body=228 status=ok
// SIG undefined FUN_1410c02f4(void)

longlong FUN_1410c02f4(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5d038 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_148692c2f;
    local_40 = &LAB_145d0961f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x558;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryLocationComponent",&DAT_14cb5d038,FUN_1464d9c86);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c03da FUN_1410c03da body=164 status=ok
// SIG undefined FUN_1410c03da(void)

void FUN_1410c03da(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x8c);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 4,0);
      uVar4 = uVar4 >> 4;
      iVar2 = *(int *)(param_1 + 0x8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar4;
  FUN_148668722(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 1410c047e FUN_1410c047e body=157 status=ok
// SIG undefined FUN_1410c047e(void)

undefined8 * FUN_1410c047e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  BOOL BVar1;
  undefined1 auStack_288 [36];
  undefined1 local_264 [20];
  undefined1 local_250 [16];
  LPCWSTR local_240;
  undefined2 *local_238;
  char local_228;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_140659024(&local_240,param_3);
  *local_238 = 0;
  BVar1 = GetFileAttributesExW(local_240,GetFileExInfoStandard,local_264);
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if (BVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1410c051c(param_2,local_250);
  }
  if ((local_20 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c051c FUN_1410c051c body=146 status=ok
// SIG undefined FUN_1410c051c(void)

undefined8 * FUN_1410c051c(undefined8 *param_1,FILETIME *param_2)

{
  BOOL BVar1;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38;
  undefined4 local_30;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  BVar1 = FileTimeToSystemTime(param_2,&local_20);
  if (BVar1 == 0) {
    *param_1 = 0;
  }
  else {
    local_38 = (uint)local_20.wSecond;
    local_40 = (uint)local_20.wMinute;
    local_48 = (uint)local_20.wHour;
    local_30 = 0;
    FUN_14021300e(param_1,local_20.wYear,local_20.wMonth,local_20.wDay);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c05b0 FUN_1410c05b0 body=102 status=ok
// SIG undefined FUN_1410c05b0(void)

undefined8 * FUN_1410c05b0(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b457c30;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1410c0616 FUN_1410c0616 body=195 status=ok
// SIG undefined FUN_1410c0616(void)

int FUN_1410c0616(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140c04244();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  if (param_2[2] == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    if (lVar5 == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  cVar2 = FUN_1410c06da(param_1 + 0xa8,param_2);
  if (cVar2 == '\0') {
    iVar6 = 0;
  }
  else {
    bVar3 = FUN_1410c0804(param_1 + 0xa8,param_2,param_3);
    iVar6 = bVar3 + 1;
  }
  return iVar6;
}



// FUNCTION 1410c06da FUN_1410c06da body=297 status=ok
// SIG undefined FUN_1410c06da(void)

undefined8 FUN_1410c06da(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    lVar4 = FUN_140c04244();
  }
  uVar5 = *param_2;
  uVar3 = FUN_14477b664(lVar4);
  uVar1 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar6 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar1 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar7 = (uint)uVar5 & 0xffff;
  uVar1 = uVar6 >> 0xd ^
          (((uint)uVar5 << 0x10 | uVar7) + (int)((ulonglong)uVar5 >> 0x20) +
           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) - uVar6;
  uVar7 = uVar1 << 8 ^ (-0x61c88647 - uVar6) - uVar1;
  uVar8 = uVar7 >> 0xd ^ (uVar6 - uVar1) - uVar7;
  uVar1 = uVar8 >> 0xc ^ (uVar1 - uVar7) - uVar8;
  uVar6 = uVar1 << 0x10 ^ (uVar7 - uVar8) - uVar1;
  uVar8 = uVar6 >> 5 ^ (uVar8 - uVar1) - uVar6;
  uVar7 = uVar8 >> 3 ^ (uVar1 - uVar6) - uVar8;
  uVar1 = uVar7 << 10 ^ (uVar6 - uVar8) - uVar7;
  iVar2 = FUN_140d57548(param_1,uVar1 >> 0xf ^ uVar8 - (uVar7 + uVar1),param_2);
  if (iVar2 == -1) {
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x30 + *param_1;
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar4 != 0);
  }
  return uVar5;
}



// FUNCTION 1410c0804 FUN_1410c0804 body=348 status=ok
// SIG undefined FUN_1410c0804(void)

byte FUN_1410c0804(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    lVar5 = FUN_140c04244();
  }
  uVar1 = *param_2;
  uVar4 = FUN_14477b664(lVar5);
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar7 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  uVar3 = uVar7 >> 0xd ^
          (((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) - uVar7;
  uVar8 = uVar3 << 8 ^ (-0x61c88647 - uVar7) - uVar3;
  uVar10 = uVar8 >> 0xd ^ (uVar7 - uVar3) - uVar8;
  uVar3 = uVar10 >> 0xc ^ (uVar3 - uVar8) - uVar10;
  uVar7 = uVar3 << 0x10 ^ (uVar8 - uVar10) - uVar3;
  uVar10 = uVar7 >> 5 ^ (uVar10 - uVar3) - uVar7;
  uVar8 = uVar10 >> 3 ^ (uVar3 - uVar7) - uVar10;
  uVar3 = uVar8 << 10 ^ (uVar7 - uVar10) - uVar8;
  lVar5 = FUN_140d57548(param_1,uVar3 >> 0xf ^ uVar10 - (uVar8 + uVar3),param_2);
  if ((int)lVar5 != -1) {
    lVar5 = (longlong)(int)lVar5 * 0x30;
    bVar6 = 0;
    if (*param_1 + lVar5 != 0) {
      plVar9 = (longlong *)(*param_1 + lVar5 + 0x18);
      if (plVar9 == (longlong *)0x0) goto LAB_1410c0943;
      lVar2 = *plVar9;
      if (lVar2 != 0) {
        lVar5 = FUN_1410c0960(lVar2,param_3);
        bVar6 = 1;
        goto LAB_1410c0943;
      }
    }
  }
  bVar6 = 0;
LAB_1410c0943:
  return (byte)lVar5 & bVar6;
}



// FUNCTION 1410c0960 FUN_1410c0960 body=294 status=ok
// SIG undefined FUN_1410c0960(void)

ulonglong FUN_1410c0960(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x30) == '\0') && (*(char *)(lVar1 + 0x31) != '\x01')) {
      bVar5 = (int)param_2[1] == 0;
      plVar3 = (longlong *)*param_2;
      if (*(int *)(lVar1 + 0x6c) == 2) {
        uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (plVar3 != (longlong *)0x0 && !bVar5) {
          (**(code **)(*plVar3 + 0x60))();
        }
        goto LAB_1410c0a09;
      }
      if (plVar3 == (longlong *)0x0 || bVar5) goto LAB_1410c0a07;
    }
    else {
      uVar4 = 0;
      if (((int)param_2[1] == 0) || (plVar3 = (longlong *)*param_2, plVar3 == (longlong *)0x0))
      goto LAB_1410c0a09;
    }
    cVar2 = (**(code **)(*plVar3 + 0x30))();
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_14009d848(&local_30,param_2);
      FUN_1448b6402(param_1 + 0x38,local_38,&local_30);
      if (local_28 != 0) {
        if (local_30 == (undefined8 *)0x0) goto LAB_1410c0a07;
        (**(code **)*local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1410c0a07:
  uVar4 = 0;
LAB_1410c0a09:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1410c0a88 FUN_1410c0a88 body=205 status=ok
// SIG undefined FUN_1410c0a88(void)

void FUN_1410c0a88(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_1402afe12(param_1,iVar2);
    }
    FUN_1410c0b55((longlong)iVar2 * 8 + *param_1,param_2 - iVar2);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_1447350ca(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_1410c0b68(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1410c0b55 FUN_1410c0b55 body=19 status=ok
// SIG undefined FUN_1410c0b55(void)

void FUN_1410c0b55(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1410c0b68 FUN_1410c0b68 body=63 status=ok
// SIG undefined FUN_1410c0b68(void)

void FUN_1410c0b68(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1410c0ba8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1410c0ba8 FUN_1410c0ba8 body=93 status=ok
// SIG undefined FUN_1410c0ba8(void)

ulonglong FUN_1410c0ba8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1410c0c05 FUN_1410c0c05 body=49 status=ok
// SIG undefined FUN_1410c0c05(void)

void FUN_1410c0c05(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410c0c36 FUN_1410c0c36 body=988 status=ok
// SIG undefined FUN_1410c0c36(void)

void FUN_1410c0c36(longlong param_1,short *param_2,longlong *param_3)

{
  ulonglong uVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  char cVar7;
  short *psVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  undefined2 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStack_d8 [44];
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  longlong local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  psVar8 = param_2;
  if (param_2 != (short *)0x0) {
    for (; sVar2 = *psVar8, sVar2 != 0; psVar8 = psVar8 + 1) {
      if ((sVar2 == 0x2a) || (sVar2 == 0x3f)) {
        FUN_1410c118a(param_1);
        FUN_140056680(&local_90,param_2);
        local_a0 = param_1 + 0x278;
        local_80 = (undefined2 *)0x100000000;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_78 = local_a0;
        if (*(int *)(param_1 + 0x290) == 0) {
          uVar15 = 1;
          local_70._0_4_ = 0xffffffff;
          iVar10 = 0;
          local_70._4_4_ = 0;
          local_80._0_4_ = 0;
        }
        else {
          FUN_1449c0562(&local_80);
          uVar15 = (ulonglong)local_80 >> 0x20;
          iVar10 = *(int *)(param_1 + 0x290);
        }
        lVar9 = local_78;
        iVar12 = (int)local_80;
        uVar17 = (uint)local_70;
        iVar11 = local_70._4_4_;
        iVar16 = local_68;
        lVar21 = param_1;
        plVar6 = param_3;
        if (local_70._4_4_ != iVar10 || local_78 != local_a0) {
          do {
            local_98 = plVar6;
            local_a8 = lVar21;
            local_ac = iVar10;
            puVar22 = (undefined8 *)((longlong)iVar11 * 0x20 + *(longlong *)(local_a8 + 0x268));
            FUN_1400021e4(puVar22,&local_80);
            puVar5 = local_80;
            iVar10 = local_88 + -1;
            if (local_88 == 0) {
              iVar10 = 0;
            }
            puVar18 = &DAT_149dfb77a;
            if (local_88 != 0) {
              puVar18 = local_90;
            }
            puVar13 = local_80;
            if ((int)local_78 == 0) {
              puVar13 = &DAT_149dfb77a;
            }
            iVar11 = (int)local_78 + -1;
            if ((int)local_78 == 0) {
              iVar11 = 0;
            }
            cVar7 = FUN_14038a9c4(puVar13,iVar11,puVar18,iVar10);
            if (puVar5 != (undefined2 *)0x0) {
              FUN_1400020a8(puVar5);
            }
            plVar6 = local_98;
            if (cVar7 != '\0') {
              uVar3 = *puVar22;
              iVar10 = (int)local_98[1];
              *(uint *)(local_98 + 1) = iVar10 + 1U;
              if (*(uint *)((longlong)local_98 + 0xc) < iVar10 + 1U) {
                FUN_1410c1014(local_98,iVar10);
              }
              lVar21 = *plVar6;
              *(undefined8 *)(lVar21 + (longlong)iVar10 * 0x18) = uVar3;
              puVar22 = (undefined8 *)(lVar21 + 8 + (longlong)iVar10 * 0x18);
              *puVar22 = 0;
              puVar22[1] = 0;
            }
            uVar17 = uVar17 & ~(uint)uVar15;
            lVar21 = *(longlong *)(lVar9 + 0x10);
            if (*(longlong *)(lVar9 + 0x10) == 0) {
              lVar21 = lVar9;
            }
            iVar10 = *(int *)(lVar9 + 0x18);
            lVar19 = (longlong)iVar12;
            uVar14 = *(uint *)(lVar21 + lVar19 * 4) & uVar17;
            if (uVar14 == 0) {
              iVar11 = iVar10 + 0x1e;
              if (-1 < iVar10 + -1) {
                iVar11 = iVar10 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar4 = iVar11;
              if (iVar11 < iVar12) {
                iVar4 = iVar12;
              }
              if (iVar12 < iVar11) {
                lVar20 = 0;
                do {
                  uVar14 = *(uint *)(lVar21 + lVar19 * 4 + 4 + lVar20 * 4);
                  if (uVar14 != 0) {
                    iVar12 = iVar12 + (int)lVar20 + 1;
                    uVar17 = 0xffffffff;
                    goto LAB_1410c0f60;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar20 = lVar20 + 1;
                } while (iVar4 - lVar19 != lVar20);
                uVar17 = 0xffffffff;
                iVar12 = iVar4;
              }
              iVar12 = iVar12 + 1;
              iVar11 = iVar10;
            }
            else {
LAB_1410c0f60:
              uVar15 = (ulonglong)(-uVar14 & uVar14);
              uVar1 = uVar15 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar11 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (iVar10 <= iVar11) {
                iVar11 = iVar10;
              }
            }
            iVar10 = local_ac;
            lVar21 = local_a8;
            plVar6 = local_98;
          } while (iVar11 != local_ac || lVar9 != local_a0);
        }
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1410c0d64;
      }
    }
  }
  FUN_1410c118a(param_1);
  FUN_1446f470e(&local_80,param_2,1);
  puVar5 = local_80;
  if (*(int *)(param_1 + 0x270) != *(int *)(param_1 + 0x29c)) {
    uVar17 = (uint)((ulonglong)local_80 >> 0x10);
    uVar14 = (uint)local_80 & 0xffff;
    lVar9 = param_1 + 0x2a0;
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x2a8);
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)
                              (*(int *)(param_1 + 0x2b0) - 1U &
                              (int)((ulonglong)local_80 >> 0x20) + ((uint)local_80 << 0x10 | uVar14)
                              + (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(undefined2 **)(*(longlong *)(param_1 + 0x268) + (longlong)iVar10 * 0x20) == local_80)
        {
          iVar10 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
            FUN_1410c1014(param_3,iVar10);
          }
          lVar9 = *param_3;
          *(undefined2 **)(lVar9 + (longlong)iVar10 * 0x18) = puVar5;
          puVar22 = (undefined8 *)(lVar9 + 8 + (longlong)iVar10 * 0x18);
          *puVar22 = 0;
          puVar22[1] = 0;
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + *(longlong *)(param_1 + 0x268) + 0x18);
      } while (iVar10 != -1);
    }
  }
LAB_1410c0d64:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c1014 FUN_1410c1014 body=373 status=ok
// SIG undefined FUN_1410c1014(void)

void FUN_1410c1014(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410c109d;
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
LAB_1410c109d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1410c118a FUN_1410c118a body=1274 status=ok
// SIG undefined FUN_1410c118a(void)

void FUN_1410c118a(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  size_t sVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  char *_Str;
  ulonglong uVar19;
  ulonglong *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong *puVar24;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong *local_68;
  char *local_60;
  undefined4 local_58;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x260) != 0) {
    local_68 = (ulonglong *)(param_1 + 0x58);
    puVar24 = *(ulonglong **)(param_1 + 600);
    if (*(ulonglong **)(param_1 + 600) == (ulonglong *)0x0) {
      puVar24 = local_68;
    }
    puVar20 = puVar24 + (longlong)*(int *)(param_1 + 0x260) * 4;
    local_78 = (longlong *)(param_1 + 0x268);
    local_80 = param_1 + 0x278;
    lVar1 = param_1 + 0x2a0;
    do {
      uVar19 = *puVar24;
      if ((longlong)uVar19 < 0) {
        _Str = (char *)(uVar19 & 0x7fffffffffffffff);
        if (*(char *)((longlong)puVar24 + 0xc) == '\x01') {
          FUN_1446f470e(&local_60,_Str,1);
          uVar11 = (uint)local_60;
        }
        else {
          local_60 = _Str;
          if (_Str == (char *)0x0) {
            local_58 = 0;
          }
          else {
            sVar14 = strlen(_Str);
            local_58 = (undefined4)sVar14;
          }
          FUN_14001c09c(local_50,&local_60,1);
          uVar11 = local_50[0];
        }
        *puVar24 = (ulonglong)uVar11;
        uVar19 = CONCAT44((int)puVar24[1],uVar11);
      }
      else {
        uVar19 = uVar19 & 0xffffffff | (ulonglong)(uint)puVar24[1] << 0x20;
      }
      if (*(int *)(param_1 + 0x29c) == 0) {
        iVar22 = *(int *)(param_1 + 0x270);
        *(int *)(param_1 + 0x270) = iVar22 + 1;
        if (*(int *)(param_1 + 0x274) == iVar22) {
          FUN_1447711aa(local_78,iVar22);
        }
        iVar21 = *(int *)(param_1 + 0x290);
        if (iVar21 == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar10 = iVar21 + -1;
          }
          iVar10 = iVar10 >> 5;
        }
        iVar16 = iVar21 + 1;
        iVar23 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar23 = iVar21;
        }
        if (iVar23 >> 5 == iVar10) {
          *(int *)(param_1 + 0x290) = iVar16;
        }
        else {
          if (*(int *)(param_1 + 0x294) <= iVar21) {
            if (iVar21 + 0x20U < 0xa0) {
              iVar16 = 0x80;
              iVar10 = iVar21;
            }
            else {
              uVar11 = iVar21 + 0x20U >> 5;
              local_70 = (ulonglong)uVar11;
              if (*(int *)(param_1 + 0x294) + 0x1fU < 0xa0) {
                uVar18 = 4;
                if (4 < uVar11) {
                  uVar18 = uVar11;
                }
              }
              else {
                uVar18 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
              }
              uVar13 = FUN_144a3809e(uVar18 << 2,0);
              iVar10 = (int)(uVar13 >> 2);
              iVar16 = iVar10 << 5;
              if (iVar10 < (int)local_70) {
                iVar16 = -0x20;
              }
              iVar10 = *(int *)(param_1 + 0x290);
            }
            *(int *)(param_1 + 0x294) = iVar16;
            FUN_1446efbd8(local_80,iVar10);
            iVar16 = *(int *)(param_1 + 0x290) + 1;
          }
          iVar10 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar10 = iVar16;
          }
          *(int *)(param_1 + 0x290) = iVar16;
          if (iVar16 % 0x20 != 0) {
            lVar12 = *(longlong *)(param_1 + 0x288);
            if (*(longlong *)(param_1 + 0x288) == 0) {
              lVar12 = local_80;
            }
            bVar15 = -(char)(iVar16 % 0x20);
            *(uint *)(lVar12 + (longlong)(iVar10 >> 5) * 4) =
                 (uint)(*(int *)(lVar12 + (longlong)(iVar10 >> 5) * 4) << (bVar15 & 0x1f)) >>
                 (bVar15 & 0x1f);
          }
        }
        lVar12 = (longlong)iVar22;
        lVar17 = *(longlong *)(param_1 + 0x288);
        if (*(longlong *)(param_1 + 0x288) == 0) {
          lVar17 = local_80;
        }
        bVar15 = (byte)iVar21 & 0x1f;
        puVar2 = (uint *)(lVar17 + (longlong)(iVar23 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
      }
      else {
        iVar22 = *(int *)(param_1 + 0x298);
        lVar12 = (longlong)iVar22;
        iVar21 = *(int *)(*(longlong *)(param_1 + 0x268) + 4 + lVar12 * 0x20);
        *(int *)(param_1 + 0x298) = iVar21;
        iVar10 = *(int *)(param_1 + 0x29c) + -1;
        *(int *)(param_1 + 0x29c) = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar21 * 0x20) = 0xffffffff;
        }
      }
      lVar17 = *(longlong *)(param_1 + 0x288);
      if (*(longlong *)(param_1 + 0x288) == 0) {
        lVar17 = local_80;
      }
      iVar21 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar21 = iVar22;
      }
      puVar2 = (uint *)(lVar17 + (longlong)(iVar21 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar22 & 0x1f);
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x268) + lVar12 * 0x20);
      puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0x268) + lVar12 * 0x20);
      *puVar4 = uVar19;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      FUN_1410c1686(puVar4 + 1,puVar24 + 2);
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      uVar19 = *puVar4;
      uVar11 = (uint)(uVar19 >> 0x10);
      uVar18 = (uint)uVar19 & 0xffff;
      uVar11 = ((uint)uVar19 << 0x10 | uVar18) + (int)(uVar19 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar18 >> 4);
      uVar18 = *(int *)(param_1 + 0x270) - *(int *)(param_1 + 0x29c);
      if ((uVar18 != 0) && (uVar18 != 1)) {
        lVar12 = *(longlong *)(param_1 + 0x2a8);
        if (*(longlong *)(param_1 + 0x2a8) == 0) {
          lVar12 = lVar1;
        }
        iVar21 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x2b0) - 1U & uVar11) * 4);
        if (iVar21 != -1) {
          do {
            puVar5 = (undefined4 *)(*local_78 + (longlong)iVar21 * 0x20);
            if (*(ulonglong *)(*local_78 + (longlong)iVar21 * 0x20) == uVar19) {
              FUN_1449db362(puVar5 + 2);
              uVar6 = *puVar3;
              uVar7 = puVar3[1];
              uVar8 = puVar3[2];
              uVar9 = puVar3[3];
              *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar3 + 4);
              *puVar5 = uVar6;
              puVar5[1] = uVar7;
              puVar5[2] = uVar8;
              puVar5[3] = uVar9;
              FUN_146820fe6(local_78,iVar22);
              goto LAB_1410c144d;
            }
            iVar21 = puVar5[6];
          } while (iVar21 != -1);
        }
      }
      if (uVar18 < 4) {
        iVar21 = 1;
      }
      else {
        uVar19 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
        lVar12 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((int)uVar18 < 1) || (iVar21 <= *(int *)(param_1 + 0x2b0))) {
        uVar11 = *(int *)(param_1 + 0x2b0) - 1U & uVar11;
        puVar3[7] = uVar11;
        lVar12 = *(longlong *)(param_1 + 0x2a8);
        if (*(longlong *)(param_1 + 0x2a8) == 0) {
          lVar12 = lVar1;
        }
        puVar3[6] = *(undefined4 *)
                     (lVar12 + ((longlong)*(int *)(param_1 + 0x2b0) - 1U & (longlong)(int)uVar11) *
                               4);
        lVar12 = *(longlong *)(param_1 + 0x2a8);
        if (*(longlong *)(param_1 + 0x2a8) == 0) {
          lVar12 = lVar1;
        }
        *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x2b0) - 1U & (longlong)(int)uVar11) * 4) =
             iVar22;
      }
      else {
        *(int *)(param_1 + 0x2b0) = iVar21;
        FUN_1410c181c(local_78);
      }
LAB_1410c144d:
      puVar24 = puVar24 + 4;
    } while (puVar24 != puVar20);
    FUN_1457f75e2(local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c1686 FUN_1410c1686 body=305 status=ok
// SIG undefined FUN_1410c1686(void)

void FUN_1410c1686(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1410c1720;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1410c16f9:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1410c16f9;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1410c1720;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410c1720:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c17b8 FUN_1410c17b8 body=100 status=ok
// SIG undefined FUN_1410c17b8(void)

void FUN_1410c17b8(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x10);
    do {
      if ((int)plVar2[1] == 0) {
LAB_1410c17d1:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar1 = (undefined8 *)*plVar2;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72(plVar2,0,0,0x10);
          *(undefined4 *)(plVar2 + 1) = 0;
          goto LAB_1410c17d1;
        }
      }
      plVar2 = plVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410c181c FUN_1410c181c body=597 status=ok
// SIG undefined FUN_1410c181c(void)

void FUN_1410c181c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1410c1a28;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1410c1a28:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c1a72 FUN_1410c1a72 body=187 status=ok
// SIG undefined FUN_1410c1a72(void)

void FUN_1410c1a72(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystem",L"DefaultPlatformService",&local_28);
  if ((int)uStack_20 - 2U < 0x7fffffff) {
    FUN_1446f470e(&local_30,local_28,1);
    cVar1 = FUN_143e6ee36(param_1,local_30);
    if (cVar1 != '\0') goto LAB_1410c1b01;
  }
  FUN_143e6ee36(param_1,DAT_14cb8e198);
LAB_1410c1b01:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c1b2e FUN_1410c1b2e body=369 status=ok
// SIG undefined FUN_1410c1b2e(void)

void FUN_1410c1b2e(longlong param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_6c [4];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_98 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"OnlineSubsystem",L"ConfigDefinedPlatformServices",&local_58);
  if ((int)plStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)plStack_50 & 0xffffffff);
  }
  local_60 = 0;
  if (((ulonglong)plStack_50 & 0xffffffff) != 0) {
    FUN_1468b337c(&local_88);
    local_60 = (int)plStack_50;
  }
  local_68 = local_58;
  FUN_1489b9f2a(&local_68,&local_88);
  FUN_1447a1747(local_58,(ulonglong)plStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_80 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = (longlong)(int)uStack_80 << 5;
    lVar3 = local_88;
    do {
      puVar1 = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 0x18) != 0) {
        puVar1 = *(undefined2 **)(lVar3 + 0x10);
      }
      FUN_1446f470e(&local_68,puVar1,1);
      local_58 = lVar3;
      plStack_50 = &local_68;
      FUN_1489bda9e(param_1 + 0x18,local_6c,&local_58);
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = uStack_80 & 0xffffffff;
  }
  FUN_141535be2(local_88,uVar2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c1ca2 FUN_1410c1ca2 body=372 status=ok
// SIG undefined FUN_1410c1ca2(void)

void FUN_1410c1ca2(longlong param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_6c [4];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_98 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,L"OnlineSubsystem",L"ModuleRedirects",&local_58);
  if ((int)plStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)plStack_50 & 0xffffffff);
  }
  local_60 = 0;
  if (((ulonglong)plStack_50 & 0xffffffff) != 0) {
    FUN_1468b337c(&local_88);
    local_60 = (int)plStack_50;
  }
  local_68 = local_58;
  FUN_1489b9f2a(&local_68,&local_88);
  FUN_1447a1747(local_58,(ulonglong)plStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)uStack_80 == 0) {
    uVar2 = 0;
  }
  else {
    lVar4 = (longlong)(int)uStack_80 << 5;
    lVar3 = local_88;
    do {
      puVar1 = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 0x18) != 0) {
        puVar1 = *(undefined2 **)(lVar3 + 0x10);
      }
      FUN_1446f470e(&local_68,puVar1,1);
      local_58 = lVar3;
      plStack_50 = &local_68;
      FUN_1489bda9e(param_1 + 0x180,local_6c,&local_58);
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = uStack_80 & 0xffffffff;
  }
  FUN_141535be2(local_88,uVar2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c1e18 FUN_1410c1e18 body=563 status=ok
// SIG undefined FUN_1410c1e18(void)

void FUN_1410c1e18(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  iVar2 = DAT_14cb44478;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb44478 == 0) {
    uVar13 = 1;
    uVar12 = 0;
    iVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar10 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar10 = DAT_14cb44470;
    }
    uVar11 = *puVar10;
    if (uVar11 == 0) {
      iVar3 = DAT_14cb44478 + 0x1e;
      if (-1 < DAT_14cb44478 + -1) {
        iVar3 = DAT_14cb44478 + -1;
      }
      uVar12 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar13 == uVar12) goto LAB_1410c1fe6;
        iVar7 = iVar7 + 0x20;
        uVar11 = puVar10[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar3 = (iVar7 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (DAT_14cb44478 <= iVar3) {
      iVar3 = DAT_14cb44478;
    }
  }
  if (iVar3 != DAT_14cb44478) {
    uVar11 = 0xffffffff;
    do {
      lVar8 = *(longlong *)(DAT_14cb44450 + 8 + (longlong)iVar3 * 0x18);
      do {
        local_50 = 0;
        iVar3 = FUN_1408ba072(lVar8 + 0x1ba0,&local_50);
      } while (iVar3 != 0);
      if ((((*(longlong *)(lVar8 + 0x1c10) != 0) &&
           (lVar9 = *(longlong *)(lVar8 + 0x10), lVar9 != 0)) &&
          ((*(byte *)(lVar9 + 0x153) & 0x40) != 0)) &&
         ((((*(byte *)(lVar9 + 0x155) & 0x20) == 0 && (*(char *)(lVar8 + 0x1c01) == '\0')) &&
          (*(char *)(lVar8 + 0x1c02) == '\0')))) {
        FUN_1410c204c();
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      puVar10 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar10 = &DAT_14cb44460;
      }
      iVar3 = (int)uVar12;
      lVar8 = (longlong)iVar3;
      uVar6 = puVar10[lVar8] & uVar11;
      if (uVar6 == 0) {
        iVar4 = DAT_14cb44478 + 0x1e;
        if (-1 < DAT_14cb44478 + -1) {
          iVar4 = DAT_14cb44478 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar5 = iVar4;
        if (iVar4 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar3 < iVar4) {
          lVar9 = 0;
          do {
            uVar6 = puVar10[lVar8 + lVar9 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar3 + (int)lVar9 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1410c1fb8;
            }
            iVar7 = iVar7 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar5 - lVar8 != lVar9);
          uVar11 = 0xffffffff;
          iVar3 = iVar5;
        }
        uVar12 = (ulonglong)(iVar3 + 1);
        iVar3 = DAT_14cb44478;
      }
      else {
LAB_1410c1fb8:
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar13 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar3 = (iVar7 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (DAT_14cb44478 <= iVar3) {
          iVar3 = DAT_14cb44478;
        }
      }
    } while (iVar3 != iVar2);
  }
LAB_1410c1fe6:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c204c FUN_1410c204c body=345 status=ok
// SIG undefined FUN_1410c204c(void)

void FUN_1410c204c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb39e18 == '\x01') {
    lVar1 = param_1 + 8;
    local_28 = param_1 + 0x18;
    local_30 = 0x100000000;
    local_20 = 0xffffffff;
    local_18 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_30);
    }
    local_68 = local_30;
    local_60 = local_28;
    local_58 = local_20;
    uVar3 = local_58;
    local_50 = local_18;
    local_4c = local_14;
    local_38 = 0;
    local_58._4_4_ = (int)((ulonglong)local_20 >> 0x20);
    bVar2 = local_58._4_4_ < *(int *)(local_28 + 0x18);
    local_70 = lVar1;
    local_58 = local_20;
    local_48 = lVar1;
    local_40 = lVar1;
    if (bVar2) {
      local_58 = uVar3;
      do {
        FUN_148110f4c(2);
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
      } while (local_58._4_4_ < *(int *)(local_60 + 0x18));
      if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
        FUN_148122d5e(local_40,*(int *)(local_40 + 8) - *(int *)(local_40 + 0x34),1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c21ba FUN_1410c21ba body=900 status=ok
// SIG undefined FUN_1410c21ba(void)

void FUN_1410c21ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auStack_108 [40];
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0 [9];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_2 + 0x10) != '\0') goto LAB_1410c2216;
  fVar2 = *(float *)(param_1 + 0xb8);
  if ((fVar2 != 0.0) || (NAN(fVar2))) {
    if ((*(double *)(param_1 + 0xa0) == DAT_14c8464e0) &&
       (!NAN(*(double *)(param_1 + 0xa0)) && !NAN(DAT_14c8464e0))) {
      if ((*(double *)(param_1 + 0xa8) == DAT_14c8464e8) &&
         (!NAN(*(double *)(param_1 + 0xa8)) && !NAN(DAT_14c8464e8))) {
        if ((*(double *)(param_1 + 0xb0) == DAT_14c8464f0) &&
           (!NAN(*(double *)(param_1 + 0xb0)) && !NAN(DAT_14c8464f0))) {
          dVar5 = (double)fVar2;
          *(double *)(param_1 + 0xa0) = dVar5;
          *(double *)(param_1 + 0xa8) = dVar5;
          *(double *)(param_1 + 0xb0) = dVar5;
          *(undefined4 *)(param_1 + 0xb8) = 0;
        }
      }
    }
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x120);
  if ((lVar8 < 1) || (*(int *)(param_1 + 0x130) != 0)) goto LAB_1410c2216;
  puVar11 = (undefined8 *)(param_1 + 0x118);
  plVar1 = (longlong *)(param_1 + 0x128);
  local_d8 = puVar11;
  if (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x120)) {
    FUN_1457f76e0(plVar1);
    lVar8 = (longlong)*(int *)(param_1 + 0x120);
    puVar15 = *(undefined8 **)(param_1 + 0x118);
    if (lVar8 != 0) goto LAB_1410c2297;
    uVar7 = 0;
  }
  else {
    puVar15 = (undefined8 *)*puVar11;
LAB_1410c2297:
    puVar11 = puVar15 + lVar8 * 5;
    do {
      local_88 = *puVar15;
      local_80 = *(undefined4 *)(puVar15 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar15 + 0xc);
      uStack_78 = *(undefined4 *)(puVar15 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar15 + 0x14);
      local_70 = (void *)0x0;
      iVar3 = *(int *)(puVar15 + 4);
      pvVar4 = (void *)puVar15[3];
      local_68 = iVar3;
      if ((longlong)iVar3 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,iVar3,0);
        memcpy(local_70,pvVar4,(longlong)iVar3 * 2);
      }
      puVar9 = &DAT_14c964b40;
      puVar12 = local_d0;
      for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      iVar3 = *(int *)(param_1 + 0x130);
      *(uint *)(param_1 + 0x130) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x134) < iVar3 + 1U) {
        FUN_1488bee28(plVar1,iVar3);
      }
      pvVar4 = local_70;
      lVar8 = *plVar1;
      lVar14 = (longlong)iVar3 * 0x98;
      puVar9 = (undefined8 *)(lVar8 + lVar14);
      puVar12 = (undefined8 *)(lVar8 + lVar14);
      puVar12[7] = 0;
      puVar12[8] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[9] = 0;
      puVar10 = local_d0;
      puVar13 = puVar12 + 10;
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      *puVar12 = local_88;
      *(undefined4 *)(puVar12 + 1) = local_80;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uStack_7c;
      *(undefined4 *)(puVar12 + 2) = uStack_78;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_74;
      if (puVar9 != &local_88) {
        lVar6 = (longlong)local_68;
        *(int *)(puVar9 + 4) = local_68;
        if (lVar6 == 0) {
          *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
        }
        else {
          local_e0 = (undefined8 *)(lVar8 + lVar14 + 0x18);
          FUN_1446dd670(local_e0,local_68,0);
          memcpy((void *)*local_e0,pvVar4,lVar6 * 2);
        }
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar15 = puVar15 + 5;
    } while (puVar15 != puVar11);
    uVar7 = *(undefined4 *)(param_1 + 0x120);
    puVar15 = *(undefined8 **)(param_1 + 0x118);
    puVar11 = local_d8;
  }
  FUN_140ae7249(puVar15,uVar7);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_1457f76b0(puVar11);
  }
LAB_1410c2216:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c2540 FUN_1410c2540 body=2314 status=ok
// SIG undefined FUN_1410c2540(void)

void FUN_1410c2540(longlong *param_1,longlong param_2)

{
  void **ppvVar1;
  ushort uVar2;
  void *pvVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined2 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(byte *)((longlong)param_1 + 0x8c) & 8) != 0) || (param_2 == 0)) || (param_1[0x35] == 0))
  goto LAB_1410c2c60;
  uVar7 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 6) = uVar7;
  if ((int)uVar7 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  iVar6 = *(int *)(lVar13 + 0x10);
  if (*(int *)(lVar13 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar15 = DAT_14c964868 + 1;
    bVar18 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar18) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar15);
    }
    LOCK();
    iVar6 = *(int *)(lVar13 + 0x10);
    bVar18 = iVar6 == 0;
    if (bVar18) {
      *(int *)(lVar13 + 0x10) = iVar15;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar18) {
      iVar6 = iVar15;
    }
  }
  *(int *)((longlong)param_1 + 0x34) = iVar6;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) & 0xffffff7b | 4;
  if ((int)param_1[5] == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)param_1[4];
  }
  FUN_140002266(&local_58,L"data_%s",puVar12);
  pvVar3 = local_58;
  iVar6 = (int)uStack_50;
  uVar7 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar7 = 0;
  }
  if (0 < (int)uVar7) {
    uVar11 = 0;
    do {
      uVar2 = *(ushort *)((longlong)local_58 + uVar11 * 2);
      *(ushort *)((longlong)local_58 + uVar11 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  uVar4 = uStack_50._4_4_;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if (param_1[0x14] == 0) {
    param_1[0x14] = (longlong)pvVar3;
    *(int *)(param_1 + 0x15) = iVar6;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  }
  else {
    FUN_1400020a8();
    param_1[0x14] = (longlong)pvVar3;
    *(int *)(param_1 + 0x15) = iVar6;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  (**(code **)(*param_1 + 0x88))(param_1);
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1410c2c88:
    lVar13 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    lVar13 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar17 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar17 == (longlong *)0x0) ||
         (((int)plVar17[2] != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)))) goto LAB_1410c2c88;
      lVar13 = *plVar17;
    }
  }
  ppvVar1 = (void **)(param_1 + 0x32);
  iVar6 = *(int *)(param_1[0x35] + 0x250);
  iVar15 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar15 = 0;
  }
  FUN_1402980a2(ppvVar1,*(undefined8 *)(param_1[0x35] + 0x248),iVar15);
  if ((int)param_1[0x33] < 2) {
    FUN_1400021e4(&DAT_14cb91e70,&local_58);
    if (ppvVar1 == &local_58) {
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x32] != 0) {
        FUN_1400020a8();
      }
      param_1[0x32] = (longlong)local_58;
      local_58 = (void *)0x0;
      *(int *)(param_1 + 0x33) = (int)uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_50._4_4_;
    }
  }
  FUN_1400d3e84(ppvVar1);
  if (ppvVar1 == &local_58) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x32] != 0) {
      FUN_1400020a8();
    }
    param_1[0x32] = (longlong)local_58;
    local_58 = (void *)0x0;
    *(int *)(param_1 + 0x33) = (int)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_50._4_4_;
  }
  if (*(int *)((longlong)param_1 + 0x18c) < 0) {
    *(undefined4 *)(param_1 + 0x31) = 0;
    FUN_1402191ca(param_1 + 0x30);
  }
  else {
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  (**(code **)(*param_1 + 0xa8))(param_1);
  lVar16 = 0;
  if (DAT_14cb91d78 != 0) {
    lVar8 = FUN_1402735c8();
    if ((int)param_1[0x33] == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = *ppvVar1;
    }
    FUN_1446f470e(&local_58,puVar12,1);
    if (0 < (longlong)*(int *)(lVar8 + 0x108)) {
      plVar17 = *(longlong **)(lVar8 + 0x100);
      lVar16 = 0;
      do {
        if ((void *)*plVar17 == local_58) goto LAB_1410c27e8;
        lVar16 = lVar16 + 1;
        plVar17 = plVar17 + 4;
      } while (*(int *)(lVar8 + 0x108) != lVar16);
      lVar16 = 0;
    }
  }
LAB_1410c27e8:
  *(int *)(param_1 + 0x34) = (int)lVar16;
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 0x40;
  *(undefined1 *)((longlong)param_1 + 0x282) = 0;
  (**(code **)(*param_1 + 0xf0))(param_1);
  lVar16 = param_1[0x51];
  if (lVar16 != 0) {
    puVar14 = &DAT_149dfb77a;
    puVar12 = &DAT_149dfb77a;
    if ((int)param_1[5] != 0) {
      puVar12 = (undefined2 *)param_1[4];
    }
    FUN_1446f470e(&local_58,puVar12,1);
    *(void **)(lVar16 + 0xa0) = local_58;
    if ((int)param_1[5] != 0) {
      puVar14 = (undefined2 *)param_1[4];
    }
    FUN_140002266(&local_58,L"Event_%s_DataUpdated",puVar14);
    local_70 = lVar13;
    if ((void **)(lVar16 + 8) == &local_58) {
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar16 + 8) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar16 + 8) = local_58;
      local_58 = (void *)0x0;
      *(int *)(lVar16 + 0x10) = (int)uStack_50;
      *(undefined4 *)(lVar16 + 0x14) = uStack_50._4_4_;
    }
    *(longlong *)(lVar16 + 0x98) = param_1[3];
    *(int *)(lVar16 + 0x48) = (int)param_1[0x34];
    local_78 = lVar16;
    FUN_1402980a2(lVar16 + 0x18);
    lVar13 = FUN_1402735c8();
    iVar6 = *(int *)(lVar13 + 0x108);
    if ((longlong)iVar6 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x100);
      lVar16 = 0;
      lVar8 = 0;
      do {
        local_58 = (void *)0x0;
        uVar7 = *(uint *)(param_1 + 0x33);
        pvVar3 = (void *)param_1[0x32];
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
        if ((longlong)(int)uVar7 == 0) {
          uStack_50 = (ulonglong)uVar7;
        }
        else {
          FUN_1446dd670(&local_58,uVar7,0);
          memcpy(local_58,pvVar3,(longlong)(int)uVar7 * 2);
        }
        cVar5 = FUN_1402ca054(*(undefined8 *)(lVar13 + lVar16));
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar5 != '\0') {
          lVar13 = lVar13 - lVar8;
          if (lVar13 != 0) {
            FUN_144a2b0a4(lVar13 + 0x10);
            lVar13 = local_78;
            if ((void **)(local_78 + 0x28) == &local_58) {
              if (local_58 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(local_78 + 0x28) != 0) {
                FUN_1400020a8();
              }
              *(void **)(lVar13 + 0x28) = local_58;
              local_58 = (void *)0x0;
              *(int *)(lVar13 + 0x30) = (int)uStack_50;
              *(undefined4 *)(lVar13 + 0x34) = uStack_50._4_4_;
            }
          }
          break;
        }
        lVar8 = lVar8 + -0x20;
        lVar16 = lVar16 + 0x20;
      } while (-lVar8 != (longlong)iVar6 * 0x20);
    }
    if ((*(longlong *)(local_78 + 0x90) == 0) &&
       (uVar11 = (ulonglong)*(uint *)(local_70 + 0x430) / (ulonglong)*(byte *)(local_70 + 0x420),
       (uint)uVar11 <= *(uint *)(local_70 + 0x42c))) {
      *(ulonglong *)(local_78 + 0x90) = local_70 + uVar11 * 2 + 0x422;
      *(uint *)(local_78 + 0x88) = *(uint *)(local_70 + 0x430) % (uint)*(byte *)(local_70 + 0x420);
      *(int *)(local_70 + 0x430) = *(int *)(local_70 + 0x430) + 1;
    }
    puVar9 = *(ushort **)(local_78 + 0x80);
    lVar13 = local_70;
    if (puVar9 == (ushort *)0x0) {
      uVar11 = (ulonglong)*(uint *)(local_70 + 0x444) / (ulonglong)*(byte *)(local_70 + 0x434);
      if ((uint)uVar11 <= *(uint *)(local_70 + 0x440)) {
        *(ulonglong *)(local_78 + 0x80) = local_70 + uVar11 * 2 + 0x436;
        *(uint *)(local_78 + 0x78) = *(uint *)(local_70 + 0x444) % (uint)*(byte *)(local_70 + 0x434)
        ;
        *(int *)(local_70 + 0x444) = *(int *)(local_70 + 0x444) + 1;
        puVar9 = *(ushort **)(local_78 + 0x80);
        if (puVar9 != (ushort *)0x0) goto LAB_1410c2ac9;
      }
    }
    else {
LAB_1410c2ac9:
      *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(local_78 + 0x78) & 0x3f));
    }
  }
  puVar9 = (ushort *)param_1[0x2b];
  if (puVar9 == (ushort *)0x0) {
    uVar11 = (ulonglong)*(uint *)(lVar13 + 0x458) / (ulonglong)*(byte *)(lVar13 + 0x448);
    if ((uint)uVar11 <= *(uint *)(lVar13 + 0x454)) {
      param_1[0x2b] = lVar13 + uVar11 * 2 + 0x44a;
      *(uint *)(param_1 + 0x2a) = *(uint *)(lVar13 + 0x458) % (uint)*(byte *)(lVar13 + 0x448);
      *(int *)(lVar13 + 0x458) = *(int *)(lVar13 + 0x458) + 1;
      puVar9 = (ushort *)param_1[0x2b];
      if (puVar9 != (ushort *)0x0) goto LAB_1410c2b45;
    }
  }
  else {
LAB_1410c2b45:
    *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(param_1 + 0x2a) & 0x3f));
  }
  puVar10 = cohtml::IEventHandler::operator_new(0x20);
  *puVar10 = &PTR_FUN_14b478d80;
  puVar10[2] = &LAB_143eb4cd0;
  *(undefined4 *)(puVar10 + 3) = 0;
  puVar10[1] = param_1;
  lVar13 = FUN_140db1ba0(param_1,L"OnDeactivationDone",puVar10);
  param_1[0x40] = lVar13;
  FUN_1400021e4(param_1 + 3,&local_68);
  puVar12 = local_68;
  if (local_60 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_58,L"FGbxUIWidgetClass::Tick - %s",puVar12);
  if ((void **)(param_1 + 0x4c) == &local_58) {
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x4c] != 0) {
      FUN_1400020a8();
    }
    param_1[0x4c] = (longlong)local_58;
    local_58 = (void *)0x0;
    *(int *)(param_1 + 0x4d) = (int)uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x26c) = uStack_50._4_4_;
    uStack_50 = 0;
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(uint *)((longlong)param_1 + 0x8c) =
       *(uint *)((longlong)param_1 + 0x8c) & 0xffffffef | (uint)*(byte *)(param_1[0x35] + 0xe8) << 4
  ;
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_1[0x35] + 0xec);
  (**(code **)(*param_1 + 0x10))(param_1);
LAB_1410c2c60:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c2e4e FUN_1410c2e4e body=215 status=ok
// SIG undefined FUN_1410c2e4e(void)

void FUN_1410c2e4e(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined1 *)((longlong)param_1 + 0x282) = 1;
  (**(code **)(*param_1 + 200))();
  plVar2 = (longlong *)param_1[0x51];
  if ((((plVar2 != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x34) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x34))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar4;
      }
      else {
        lVar5 = 0;
      }
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      if ((*(char *)(lVar5 + 0xca) == '\x01') && (*(char *)(lVar5 + 0xcc) == '\0')) {
        if (*(longlong *)(lVar5 + 0x40) == 0) {
          plVar4 = (longlong *)(lVar5 + 0x28);
        }
        else {
          plVar4 = (longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x238) + 8);
        }
        if (*plVar4 != 0) {
          FUN_1410c3ebe(*plVar4,param_1 + 0x14,plVar2,uVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c2f26 FUN_1410c2f26 body=1185 status=ok
// SIG undefined FUN_1410c2f26(void)

void FUN_1410c2f26(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_140391552();
  if (lVar4 == 0) goto LAB_1410c31a2;
  if (*(longlong *)(param_1 + 0x230) == 0) {
    local_38 = &LAB_140aebd86;
    local_30 = 0;
    FUN_1410c33c8(&local_48,param_1,&local_38);
    local_38 = "OnEventTriggered";
    local_30 = 0x10;
    local_2c = 0;
    uVar3 = FUN_14001a6c0(&local_38,1);
    FUN_140391af6(lVar4,&local_38,uVar3,&local_48);
    *(char **)(param_1 + 0x230) = local_38;
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1410c2fe6;
      if (*(code **)*local_48 == FUN_145715146) {
        *local_48 = &PTR_FUN_14b478da0;
        plVar2 = (longlong *)local_48[4];
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
      else {
        (**(code **)*local_48)(local_48,0);
      }
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1410c2fe6:
  if (*(longlong *)(param_1 + 0x238) == 0) {
    local_38 = &LAB_14013ec5c;
    local_30 = 0;
    FUN_1410c33c8(&local_48,param_1,&local_38);
    local_38 = "OnAnimationStarted";
    local_30 = 0x12;
    local_2c = 0;
    uVar3 = FUN_14001a6c0(&local_38,1);
    FUN_140391af6(lVar4,&local_38,uVar3,&local_48);
    *(char **)(param_1 + 0x238) = local_38;
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1410c307a;
      if (*(code **)*local_48 == FUN_145715146) {
        *local_48 = &PTR_FUN_14b478da0;
        plVar2 = (longlong *)local_48[4];
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
      else {
        (**(code **)*local_48)(local_48,0);
      }
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1410c307a:
  if (*(longlong *)(param_1 + 0x240) == 0) {
    local_38 = &LAB_14013ecc6;
    local_30 = 0;
    FUN_1410c33c8(&local_48,param_1,&local_38);
    local_38 = "OnAnimationStopped";
    local_30 = 0x12;
    local_2c = 0;
    uVar3 = FUN_14001a6c0(&local_38,1);
    FUN_140391af6(lVar4,&local_38,uVar3,&local_48);
    *(char **)(param_1 + 0x240) = local_38;
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1410c310e;
      if (*(code **)*local_48 == FUN_145715146) {
        *local_48 = &PTR_FUN_14b478da0;
        plVar2 = (longlong *)local_48[4];
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
      else {
        (**(code **)*local_48)(local_48,0);
      }
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1410c310e:
  if (*(longlong *)(param_1 + 0x248) == 0) {
    local_38 = &LAB_14013ebe4;
    local_30 = 0;
    FUN_1410c33c8(&local_48,param_1,&local_38);
    local_38 = "OnAnimationCompleted";
    local_30 = 0x14;
    local_2c = 0;
    uVar3 = FUN_14001a6c0(&local_38,1);
    FUN_140391af6(lVar4,&local_38,uVar3,&local_48);
    *(char **)(param_1 + 0x248) = local_38;
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_1410c31a2;
      if (*(code **)*local_48 == FUN_145715146) {
        *local_48 = &PTR_FUN_14b478da0;
        plVar2 = (longlong *)local_48[4];
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
      else {
        (**(code **)*local_48)(local_48,0);
      }
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1410c31a2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c33c8 FUN_1410c33c8 body=428 status=ok
// SIG undefined FUN_1410c33c8(void)

longlong * FUN_1410c33c8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1410c34a8:
    *puVar5 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b478da0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1410c34a8;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b478da0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1410c3574 FUN_1410c3574 body=2115 status=ok
// SIG undefined FUN_1410c3574(void)

void FUN_1410c3574(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  char local_a5;
  uint local_a4;
  longlong *local_a0;
  longlong local_98;
  uint *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined8 *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((((*(int *)(param_1 + 0x17c) != 0) || (*(int *)(param_1 + 0x34) == 0)) ||
        (uVar4 = *(uint *)(param_1 + 0x30), (int)uVar4 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar4 ||
        (plVar16 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar16 == (longlong *)0x0)))) || ((int)plVar16[2] != *(int *)(param_1 + 0x34))) ||
     ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_1410c3939;
  if (*(int *)(param_1 + 0x208) == 0) {
    if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
      lVar23 = *plVar16;
    }
    else {
      lVar23 = 0;
    }
    if ((((*(int *)(lVar23 + 0x374) != 0) && (uVar4 = *(uint *)(lVar23 + 0x370), -1 < (int)uVar4))
        && (((int)uVar4 < DAT_14c9647dc &&
            (((plVar22 = (longlong *)
                         ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
              plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(lVar23 + 0x374))) &&
             ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)))))) &&
       (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 && (*plVar22 != 0)))) {
      uVar20 = 0;
      if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
        lVar23 = *plVar16;
      }
      else {
        lVar23 = 0;
      }
      if (((*(int *)(lVar23 + 0x374) != 0) && (uVar4 = *(uint *)(lVar23 + 0x370), -1 < (int)uVar4))
         && (((int)uVar4 < DAT_14c9647dc &&
             (((puVar12 = (ulonglong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               puVar12 != (ulonglong *)0x0 && ((int)puVar12[2] == *(int *)(lVar23 + 0x374))) &&
              (uVar20 = 0, (puVar12[1] & 0x10200000) == 0)))))) {
        if ((puVar12[1] & 0x10200000) == 0) {
          uVar20 = *puVar12;
        }
        else {
          uVar20 = 0;
        }
        uVar20 = uVar20 >> 4;
      }
      uVar4 = ((uint)(uVar20 >> 0x10) & 0xffff ^ (uint)uVar20) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar4 >> 0x10 ^ uVar4;
      *(uint *)(param_1 + 0x208) = uVar4;
      plVar16 = *(longlong **)(param_1 + 0x288);
      if (plVar16 != (longlong *)0x0) {
        *(uint *)(plVar16 + 0xe) = uVar4;
        plVar22 = *(longlong **)(param_1 + 0x10);
        if (plVar22 == (longlong *)0x0) {
LAB_1410c3c7b:
          plVar16[0xc] = 0;
          plVar13 = (longlong *)plVar16[0xd];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              plVar22 = (longlong *)0x0;
              bVar26 = true;
LAB_1410c3d2c:
              (**(code **)(*plVar13 + 0x10))();
              plVar16[0xd] = (longlong)plVar22;
              if (!bVar26) goto LAB_1410c3793;
            }
            else {
              plVar16[0xd] = 0;
            }
          }
        }
        else {
          iVar5 = (int)plVar22[1];
          do {
            if (iVar5 == 0) goto LAB_1410c3c7b;
            LOCK();
            iVar25 = (int)plVar22[1];
            bVar26 = iVar5 == iVar25;
            if (bVar26) {
              *(int *)(plVar22 + 1) = iVar5 + 1;
              iVar25 = iVar5;
            }
            iVar5 = iVar25;
            UNLOCK();
          } while (!bVar26);
          plVar16[0xc] = *(longlong *)(param_1 + 8);
          if ((longlong *)plVar16[0xd] != plVar22) {
            LOCK();
            *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
            UNLOCK();
            plVar13 = (longlong *)plVar16[0xd];
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                bVar26 = false;
                goto LAB_1410c3d2c;
              }
            }
            plVar16[0xd] = (longlong)plVar22;
          }
LAB_1410c3793:
          LOCK();
          plVar13 = plVar22 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
        *(undefined8 *)((longlong)plVar16 + 0x54) = *(undefined8 *)(param_1 + 0x30);
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x220) == 0) {
    FUN_1410c3dba(&local_60,*(undefined8 *)(param_1 + 0x1a8));
    plVar16 = local_58;
    if ((undefined8 **)(param_1 + 0x210) != &local_60) {
      *(undefined8 **)(param_1 + 0x210) = local_60;
      local_60 = (undefined8 *)0x0;
      plVar22 = *(longlong **)(param_1 + 0x218);
      if (local_58 != plVar22) {
        local_58 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x218) = plVar16;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar22 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
      }
    }
    plVar16 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_58 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    puVar19 = *(undefined8 **)(param_1 + 0x210);
    if ((puVar19 != (undefined8 *)0x0) && (*(longlong *)(param_1 + 0x220) == 0)) {
      local_60 = (undefined8 *)0x0;
      local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
      FUN_1446efa72(&local_60,0,3,0x10);
      local_58 = (longlong *)CONCAT44(local_58._4_4_,3);
      *local_60 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar23 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar23 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar23;
      local_60[2] = lVar17;
      *local_60 = &PTR_FUN_14b478eb0;
      local_60[3] = param_1;
      local_60[4] = FUN_140ddfe0c;
      *(undefined4 *)(local_60 + 5) = 0;
      FUN_140844560(puVar19,local_70,&local_60);
      *(longlong *)(param_1 + 0x220) = local_70[0];
    }
  }
  cVar3 = FUN_1410c6532();
  lVar23 = *(longlong *)(param_1 + 0x1a8);
  iVar5 = *(int *)(lVar23 + 0x128);
  local_50 = param_1;
  if (iVar5 == 0) {
    uVar24 = 1;
    uVar20 = 0;
    iVar25 = 0;
    iVar15 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar23 + 0x120);
    if (*(uint **)(lVar23 + 0x120) == (uint *)0x0) {
      puVar8 = (uint *)(lVar23 + 0x110);
    }
    uVar4 = *puVar8;
    if (uVar4 == 0) {
      iVar25 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar25 = iVar5 + -1;
      }
      uVar20 = 0;
      uVar18 = (ulonglong)(uint)(iVar25 >> 5);
      if (iVar25 >> 5 < 1) {
        uVar18 = uVar20;
      }
      iVar25 = 0;
      do {
        if (uVar18 == uVar20) goto LAB_1410c3939;
        iVar25 = iVar25 + 0x20;
        uVar4 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar20 = 0;
      iVar25 = 0;
    }
    uVar24 = (ulonglong)(-uVar4 & uVar4);
    uVar18 = uVar24 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar15 = (iVar25 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar15) {
      iVar15 = iVar5;
    }
  }
  if (iVar15 != iVar5) {
    local_a5 = DAT_14c951640 != 0 && (byte)(cVar3 - 2U) < 5;
    uVar4 = 0xffffffff;
    local_80 = DAT_14c951640;
    local_90 = (uint *)(lVar23 + 0x110);
    do {
      lVar17 = *(longlong *)(lVar23 + 0x100);
      local_98 = (longlong)iVar15 * 0x38 + lVar17 + 8;
      local_a4 = uVar4;
      lVar6 = FUN_1409f0d56();
      if (lVar6 == 0) {
        FUN_1409f0d56(local_98);
        puVar8 = local_90;
      }
      else {
        lVar17 = lVar17 + (longlong)iVar15 * 0x38;
        if (local_a5 == '\0') {
          FUN_1410c3e12(&local_50,local_98,lVar17);
          puVar8 = local_90;
        }
        else {
          local_60 = *(undefined8 **)(lVar6 + 0x18);
          local_88 = lVar6;
          FUN_1400021e4(&local_60,local_70);
          FUN_144a882a8(&local_60,local_70,L"_Localized");
          lVar6 = local_80;
          if (local_70[0] != 0) {
            FUN_1400020a8();
          }
          puVar19 = (undefined8 *)&DAT_149dfb77a;
          if ((int)local_58 != 0) {
            puVar19 = local_60;
          }
          FUN_1446f470e(&local_78,puVar19,1);
          uVar7 = FUN_1409f0ed2();
          local_b0 = 0;
          local_b8 = 0;
          plVar16 = (longlong *)FUN_1407cc3a2(uVar7,lVar6,local_78,0);
          if (plVar16 == (longlong *)0x0) {
LAB_1410c3c08:
            uVar7 = FUN_1409f0ed2();
            local_a0 = (longlong *)FUN_14092e757(uVar7,local_88,lVar6,0);
            puVar19 = (undefined8 *)&DAT_149dfb77a;
            if ((int)local_58 != 0) {
              puVar19 = local_60;
            }
            (**(code **)(*local_a0 + 0x170))(local_a0,puVar19,lVar6,0);
            if (local_a0 != (longlong *)0x0) {
              uVar7 = 1;
              goto LAB_1410c3b1f;
            }
            FUN_1410c3e12(&local_50,local_98,lVar17);
          }
          else {
            local_a0 = plVar16;
            lVar9 = FUN_1409f0ed2();
            if ((*(int *)(local_a0[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(local_a0[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                lVar9 + 0x30)) goto LAB_1410c3c08;
            uVar7 = 0;
LAB_1410c3b1f:
            local_b8 = CONCAT31(local_b8._1_3_,1);
            FUN_1407cc5e0(param_1,local_a0,uVar7,lVar17);
          }
          puVar8 = local_90;
          if (local_60 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      uVar4 = local_a4 & ~(uint)uVar24;
      puVar21 = *(uint **)(lVar23 + 0x120);
      if (*(uint **)(lVar23 + 0x120) == (uint *)0x0) {
        puVar21 = puVar8;
      }
      iVar2 = *(int *)(lVar23 + 0x128);
      iVar15 = (int)uVar20;
      lVar17 = (longlong)iVar15;
      uVar14 = puVar21[lVar17] & uVar4;
      if (uVar14 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar15 < iVar10) {
          lVar6 = 0;
          do {
            uVar14 = puVar21[lVar17 + lVar6 + 1];
            if (uVar14 != 0) {
              uVar20 = (ulonglong)(iVar15 + (int)lVar6 + 1);
              uVar4 = 0xffffffff;
              goto LAB_1410c3a4e;
            }
            iVar25 = iVar25 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar11 - lVar17 != lVar6);
          uVar4 = 0xffffffff;
          iVar15 = iVar11;
        }
        uVar20 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar2;
      }
      else {
LAB_1410c3a4e:
        uVar24 = (ulonglong)(-uVar14 & uVar14);
        uVar18 = uVar24 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar15 = (iVar25 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar15) {
          iVar15 = iVar2;
        }
      }
    } while (iVar15 != iVar5);
  }
LAB_1410c3939:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c3dba FUN_1410c3dba body=88 status=ok
// SIG undefined FUN_1410c3dba(void)

undefined8 * FUN_1410c3dba(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (DAT_14c872bd8 == '\x01')) || (DAT_14cb92fb8 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar1 = FUN_14050fd64();
    FUN_14088df30(uVar1,param_1,param_2,500,0);
  }
  return param_1;
}



// FUNCTION 1410c3e12 FUN_1410c3e12 body=171 status=ok
// SIG undefined FUN_1410c3e12(void)

void FUN_1410c3e12(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  lVar2 = FUN_1409f0d56(param_2);
  if (lVar2 != 0) {
    lVar2 = FUN_1409f0d56(param_2);
    local_40 = 0;
    if (lVar2 != 0) {
      FUN_1401924dc(lVar2);
      local_40 = lVar2;
    }
    local_30 = &local_40;
    local_38 = param_3;
    FUN_1407cd566(lVar1 + 0xd8,local_24);
    if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c3ebe FUN_1410c3ebe body=364 status=ok
// SIG undefined FUN_1410c3ebe(void)

void FUN_1410c3ebe(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  size_t sVar2;
  uint uVar3;
  wchar_t *_Str;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  DAT_14cb90bc8 = param_4;
  uVar1 = FUN_1401e1b6a(param_1,param_3,param_4);
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    local_50 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
    uVar3 = local_50 + 1;
    local_58 = (undefined1 *)0x0;
    if (0x80 < uVar3) {
      FUN_1446efa72(&local_60,0,uVar3,1);
      local_58 = local_60;
    }
    if (local_58 == (undefined1 *)0x0) {
      local_58 = local_e0;
    }
    FUN_14475a98a(local_58,uVar3,_Str,(int)sVar2 + 1);
  }
  local_e8 = &LAB_1418b57bd;
  (**(code **)(*param_1 + 0x248))(param_1,local_58,param_3,uVar1);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c402c FUN_1410c402c body=277 status=ok
// SIG undefined FUN_1410c402c(void)

void FUN_1410c402c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_140daa3ac();
  if (cVar4 == '\0') {
    local_40 = *param_2;
    local_38 = *(undefined4 *)(param_2 + 1);
    FUN_141057c4c(param_1,&local_30,&local_40,1);
    plVar2 = local_28;
    if (local_30 != 0) {
      local_48 = *(undefined4 *)(param_3 + 1);
      local_50 = *param_3;
      local_60 = local_30;
      local_58 = local_28;
      if (local_28 == (longlong *)0x0) {
        FUN_1410c4142(param_1,&local_60,&local_50);
      }
      else {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        FUN_1410c4142(param_1,&local_60,&local_50);
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
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)local_28 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c4142 FUN_1410c4142 body=349 status=ok
// SIG undefined FUN_1410c4142(void)

void FUN_1410c4142(undefined8 param_1,longlong *param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar3 = *param_2;
  uVar7 = *param_3;
  uVar9 = param_3[2];
  if (uVar9 != 0) {
    uVar7 = uVar9 >> 0xd ^ uVar7 - uVar9;
    uVar10 = uVar7 << 8 ^ (-0x61c88647 - uVar9) - uVar7;
    uVar11 = uVar10 >> 0xd ^ (uVar9 - uVar7) - uVar10;
    uVar9 = uVar11 >> 0xc ^ (uVar7 - uVar10) - uVar11;
    uVar7 = uVar9 << 0x10 ^ (uVar10 - uVar11) - uVar9;
    uVar10 = uVar7 >> 5 ^ (uVar11 - uVar9) - uVar7;
    uVar9 = uVar10 >> 3 ^ (uVar9 - uVar7) - uVar10;
    uVar7 = uVar9 << 10 ^ (uVar7 - uVar10) - uVar9;
    uVar7 = uVar7 >> 0xf ^ uVar10 - (uVar9 + uVar7);
  }
  iVar8 = FUN_141057676((longlong *)(lVar3 + 0x10),uVar7,param_3);
  if (iVar8 != -1) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    lVar3 = lVar4 + (longlong)iVar8 * 0x28;
    if ((lVar3 != 0) && (lVar4 + (longlong)iVar8 * 0x28 != -0x10)) {
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      plVar6 = *(longlong **)(lVar3 + 0x18);
      if (plVar6 == (longlong *)0x0) {
        FUN_14107f81a(uVar5);
        FUN_1410c42a0(*param_2 + 0x10,param_3);
        FUN_1410596ca(param_1,param_2);
        return;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_14107f81a(uVar5);
      FUN_1410c42a0(*param_2 + 0x10,param_3);
      FUN_1410596ca(param_1,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x0001410c4268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c42a0 FUN_1410c42a0 body=370 status=ok
// SIG undefined FUN_1410c42a0(void)

void FUN_1410c42a0(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = *param_2;
    uVar4 = param_2[2];
    uVar7 = uVar5;
    if (uVar4 != 0) {
      uVar7 = uVar4 >> 0xd ^ uVar5 - uVar4;
      uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar4) - uVar7;
      uVar10 = uVar9 >> 0xd ^ (uVar4 - uVar7) - uVar9;
      uVar11 = uVar10 >> 0xc ^ (uVar7 - uVar9) - uVar10;
      uVar7 = uVar11 << 0x10 ^ (uVar9 - uVar10) - uVar11;
      uVar10 = uVar7 >> 5 ^ (uVar10 - uVar11) - uVar7;
      uVar9 = uVar10 >> 3 ^ (uVar11 - uVar7) - uVar10;
      uVar7 = uVar9 << 10 ^ (uVar7 - uVar10) - uVar9;
      uVar7 = uVar7 >> 0xf ^ uVar10 - (uVar9 + uVar7);
    }
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar7 = *(uint *)((longlong)plVar8 + ((longlong)(int)uVar7 & (longlong)(int)param_1[9] - 1U) * 4
                     );
    if (uVar7 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*param_1 + (longlong)(int)uVar7 * 0x28);
        if ((*puVar3 == uVar5) && (puVar3[2] == uVar4)) {
          uVar5 = *(uint *)((longlong)plVar8 + (longlong)(int)puVar3[9] * 4);
          if (uVar5 == uVar7) {
            puVar6 = (uint *)((longlong)plVar8 + (longlong)(int)puVar3[9] * 4);
          }
          else {
            do {
              puVar6 = (uint *)(*param_1 + (longlong)(int)uVar5 * 0x28 + 0x20);
              uVar5 = *puVar6;
            } while (uVar5 != uVar7);
          }
          *puVar6 = puVar3[8];
          plVar8 = *(longlong **)(*param_1 + 0x18 + (longlong)(int)uVar7 * 0x28);
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
          FUN_1410c4412(param_1,uVar7);
          return;
        }
        uVar7 = puVar3[8];
      } while (uVar7 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1410c4412 FUN_1410c4412 body=116 status=ok
// SIG undefined FUN_1410c4412(void)

void FUN_1410c4412(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1410c4486 FUN_1410c4486 body=15 status=ok
// SIG undefined FUN_1410c4486(void)

ulonglong FUN_1410c4486(undefined8 *param_1,ulonglong param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined7 uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return param_2 & 0xffffffff;
  }
  param_2 = param_2 & 0xffffffff;
  if (((*pbVar2 & 0x6b) != 1) || (pbVar2 = *(byte **)(pbVar2 + 8), pbVar2 == (byte *)0x0))
  goto LAB_14000586d;
  bVar1 = *pbVar2;
  uVar3 = (undefined7)(param_2 >> 8);
  if (bVar1 != 0x74) {
    uVar5 = (ulonglong)(bVar1 - 0x30);
    if (bVar1 - 0x30 < 0x40) {
      if ((0x4040000040400001U >> (uVar5 & 0x3f) & 1) != 0) {
        param_2 = 0;
        goto LAB_14000586d;
      }
      if ((0x21000000002U >> (uVar5 & 0x3f) & 1) != 0) goto LAB_14000586b;
      if ((0x8000000080000000U >> (uVar5 & 0x3f) & 1) != 0) {
        bVar1 = (byte)(pbVar2[1] + 0xba) >> 3;
        bVar4 = (pbVar2[1] + 0xba) * ' ' | bVar1;
        if ((bVar4 < 6) && ((0x33U >> (bVar4 & 0x1f) & 1) != 0)) {
          param_2 = CONCAT71(uVar3,0x22 >> bVar1);
        }
        goto LAB_14000586d;
      }
    }
    if (bVar1 != 0x79) goto LAB_14000586d;
  }
LAB_14000586b:
  param_2 = CONCAT71(uVar3,1);
LAB_14000586d:
  return param_2 & 0xffffffffffffff01;
}



// FUNCTION 1410c4496 FUN_1410c4496 body=82 status=ok
// SIG undefined FUN_1410c4496(void)

longlong FUN_1410c4496(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b6e86();
  if ((lVar1 != 0) &&
     (lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x18))(lVar1 + 0x30), lVar1 != 0)) {
    lVar2 = FUN_1410c44e8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1410c44e8 FUN_1410c44e8 body=228 status=ok
// SIG undefined FUN_1410c44e8(void)

longlong FUN_1410c44e8(void)

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
  if (DAT_14cbaa618 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a85e3c;
    local_38 = &LAB_148c122cb;
    local_40 = FUN_1458e9980;
    local_48 = L"GameUserSettings";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/OakGame",L"OakEnhancedInputUserSettings",&DAT_14cbaa618,&DAT_148c122ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa618;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c45ce FUN_1410c45ce body=3027 status=ok
// SIG undefined FUN_1410c45ce(void)

void FUN_1410c45ce(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  char *_Str;
  size_t sVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  uint local_290;
  int local_28c;
  longlong *local_288;
  ulonglong local_280;
  longlong local_278;
  longlong local_270;
  longlong *local_268;
  ulonglong local_260;
  longlong *local_258;
  longlong local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined2 *local_238;
  int local_230;
  longlong local_228;
  undefined8 *local_220;
  undefined1 local_200;
  byte local_1ff;
  longlong local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined2 *local_188;
  int local_180;
  undefined8 *local_178;
  longlong *plStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar7 = FUN_144a06846(param_2,&DAT_14cbc91d0);
  plVar8 = (longlong *)FUN_1407cbaec(uVar7);
  if ((longlong)(int)plVar8[2] != 0) {
    lVar23 = *plVar8;
    lVar18 = (longlong)(int)plVar8[2] * 0x10 + lVar23;
    local_298 = param_1 + 0x1c;
    local_258 = param_1 + 0xf;
    local_250 = lVar18;
    do {
      uVar7 = FUN_144a06846(lVar23,&DAT_14cbc91f8);
      uVar7 = FUN_144a7cdd6(uVar7,0);
      FUN_1400b22c2(&local_188,uVar7);
      uVar7 = FUN_144a06846(lVar23,&DAT_14cbc9248);
      uVar7 = FUN_144a7cdd6(uVar7,0);
      FUN_1446ddc76(local_190,uVar7,1);
      FUN_1447683ea(&local_198,local_190,1);
      puVar16 = &DAT_149dfb77a;
      if (local_180 != 0) {
        puVar16 = local_188;
      }
      uVar7 = FUN_144a797b2();
      lVar9 = FUN_140277b32(uVar7,0,puVar16,0);
      if (lVar9 != 0) {
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_2b0 = 0;
        local_2b8 = 0;
        uVar13 = 0;
        lVar9 = FUN_1457f970c(param_1,lVar9,0);
        *(undefined8 *)(lVar9 + 0x28) = local_198;
        local_178 = (undefined8 *)0x100000000;
        plStack_170 = local_298;
        local_168 = (longlong *)&DAT_ffffffff;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        local_270 = lVar23;
        if ((int)param_1[0x1f] == 0) {
          uVar21 = 1;
          local_290 = 0xffffffff;
          iVar20 = 0;
          iVar14 = 0;
          local_280 = 0;
        }
        else {
          FUN_1449c0562(&local_178);
          local_280 = (ulonglong)local_178 & 0xffffffff;
          uVar21 = (ulonglong)local_178 >> 0x20;
          local_290 = (uint)local_168;
          uVar13 = (ulonglong)*(uint *)(param_1 + 0x1f);
          iVar14 = local_168._4_4_;
          iVar20 = (int)uStack_160;
        }
        local_248 = uVar13;
        if (iVar14 != (int)uVar13 || plStack_170 != local_298) {
          plVar8 = (longlong *)(lVar9 + 0x48);
          lVar23 = lVar9 + 0x80;
          local_288 = param_1;
          local_268 = plStack_170;
          do {
            lVar18 = *(longlong *)(local_288[0x1a] + (longlong)iVar14 * 0x10);
            local_28c = iVar20;
            local_260 = uVar21;
            if ((lVar18 != 0) && ((longlong)*(int *)(lVar18 + 0x38) != 0)) {
              lVar17 = *(longlong *)(lVar18 + 0x30);
              local_278 = (longlong)*(int *)(lVar18 + 0x38) * 0x50 + lVar17;
              do {
                lVar18 = FUN_1402218d6(lVar17);
                if (lVar18 != 0) {
                  FUN_14022188c(lVar17,&local_238);
                  uVar19 = (uint)((ulonglong)local_238 >> 0x10);
                  uVar5 = (uint)local_238 & 0xffff;
                  uVar19 = ((uint)local_238 << 0x10 | uVar5) + (int)((ulonglong)local_238 >> 0x20) +
                           (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar5 >> 4);
                  if (*(int *)(lVar9 + 0x50) != *(int *)(lVar9 + 0x7c)) {
                    lVar18 = *(longlong *)(lVar9 + 0x88);
                    if (*(longlong *)(lVar9 + 0x88) == 0) {
                      lVar18 = lVar23;
                    }
                    iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar9 + 0x90) - 1U & uVar19) * 4
                                     );
                    if (iVar14 != -1) {
                      do {
                        lVar18 = *plVar8 + (longlong)iVar14 * 0x60;
                        if (*(undefined2 **)(*plVar8 + (longlong)iVar14 * 0x60) == local_238) {
                          if (lVar18 != 0) goto LAB_1410c4a3f;
                          break;
                        }
                        iVar14 = *(int *)(lVar18 + 0x58);
                      } while (iVar14 != -1);
                    }
                  }
                  FUN_1410c54a6(plVar8,&local_228);
                  puVar3 = local_220;
                  local_158 = 0;
                  uStack_140 = 0;
                  local_138 = 0;
                  uStack_130 = 0;
                  local_168 = (longlong *)0x0;
                  uStack_160 = 0;
                  local_178 = (undefined8 *)0x0;
                  plStack_170 = (longlong *)0x0;
                  uStack_150 = 0x8000000000;
                  local_148 = 0xffffffff;
                  *local_220 = local_238;
                  FUN_1410c51a2(local_220 + 1,&local_178);
                  uStack_130 = uStack_130 & 0xffffffff00000000;
                  if (local_138 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140d979a6(&local_178);
                  *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
                  uVar6 = (undefined4)local_228;
                  local_2b8 = 0;
                  cVar4 = FUN_1410c5220(plVar8,uVar19,puVar3,&local_228);
                  if (cVar4 == '\0') {
                    uVar5 = *(int *)(lVar9 + 0x50) - *(int *)(lVar9 + 0x7c);
                    if (uVar5 < 4) {
                      iVar14 = 1;
                    }
                    else {
                      uVar13 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
                      lVar18 = 0x3f;
                      if (uVar13 != 0) {
                        for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                        }
                      }
                      iVar14 = 1 << ((byte)lVar18 & 0x1f);
                    }
                    if (((int)uVar5 < 1) || (iVar14 <= *(int *)(lVar9 + 0x90))) {
                      uVar19 = *(int *)(lVar9 + 0x90) - 1U & uVar19;
                      *(uint *)((longlong)puVar3 + 0x5c) = uVar19;
                      lVar18 = *(longlong *)(lVar9 + 0x88);
                      if (*(longlong *)(lVar9 + 0x88) == 0) {
                        lVar18 = lVar23;
                      }
                      *(undefined4 *)(puVar3 + 0xb) =
                           *(undefined4 *)
                            (lVar18 + ((longlong)*(int *)(lVar9 + 0x90) - 1U & (longlong)(int)uVar19
                                      ) * 4);
                      lVar18 = *(longlong *)(lVar9 + 0x88);
                      if (*(longlong *)(lVar9 + 0x88) == 0) {
                        lVar18 = lVar23;
                      }
                      *(undefined4 *)
                       (lVar18 + ((longlong)*(int *)(lVar9 + 0x90) - 1U & (longlong)(int)uVar19) * 4
                       ) = uVar6;
                    }
                    else {
                      *(int *)(lVar9 + 0x90) = iVar14;
                      FUN_1410c574c(plVar8);
                    }
                  }
                }
LAB_1410c4a3f:
                lVar17 = lVar17 + 0x50;
              } while (lVar17 != local_278);
            }
            local_290 = local_290 & ~(uint)local_260;
            plVar22 = (longlong *)local_268[2];
            if ((longlong *)local_268[2] == (longlong *)0x0) {
              plVar22 = local_268;
            }
            iVar15 = (int)local_268[3];
            iVar14 = (int)local_280;
            lVar18 = (longlong)iVar14;
            uVar19 = *(uint *)((longlong)plVar22 + lVar18 * 4) & local_290;
            iVar20 = local_28c;
            if (uVar19 == 0) {
              iVar11 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar11 = iVar15 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar20 = local_28c + 0x20;
              iVar12 = iVar11;
              if (iVar11 < iVar14) {
                iVar12 = iVar14;
              }
              if (iVar14 < iVar11) {
                lVar17 = 0;
                do {
                  uVar19 = *(uint *)((longlong)plVar22 + lVar17 * 4 + lVar18 * 4 + 4);
                  if (uVar19 != 0) {
                    local_280 = (ulonglong)(iVar14 + (int)lVar17 + 1);
                    local_290 = 0xffffffff;
                    goto LAB_1410c4af4;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar12 - lVar18 != lVar17);
                local_290 = 0xffffffff;
                iVar14 = iVar12;
              }
              local_280 = (ulonglong)(iVar14 + 1);
              uVar21 = local_260;
              iVar14 = iVar15;
            }
            else {
LAB_1410c4af4:
              uVar21 = (ulonglong)(-uVar19 & uVar19);
              uVar13 = uVar21 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar14 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar15 <= iVar14) {
                iVar14 = iVar15;
              }
            }
            param_1 = local_288;
          } while (iVar14 != (int)local_248 || local_268 != local_298);
        }
        local_228 = lVar9;
        if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar9);
        }
        local_178 = &local_198;
        plStack_170 = &local_228;
        FUN_1457f97fc(local_258,&local_238,&local_178);
        uVar7 = FUN_144a06846(local_270,&DAT_14cbc9270);
        plVar8 = (longlong *)FUN_1407cbaec(uVar7);
        if ((longlong)(int)plVar8[2] != 0) {
          lVar23 = *plVar8;
          lVar18 = (longlong)(int)plVar8[2] << 4;
          do {
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc9298);
            uVar7 = FUN_144a7cdd6(uVar7,0);
            FUN_1446ddc76(&local_1a0,uVar7,1);
            uVar19 = (uint)((ulonglong)local_1a0 >> 0x10);
            uVar5 = (uint)local_1a0 & 0xffff;
            local_278 = FUN_140f5d5c6(lVar9 + 0x48,
                                      ((uint)local_1a0 << 0x10 | uVar5) +
                                      (int)((ulonglong)local_1a0 >> 0x20) +
                                      (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar5 >> 4),&local_1a0);
            FUN_14644deda(&local_228);
            local_228 = local_1a0;
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc92c0);
            _Str = (char *)FUN_144a7cdd6(uVar7,0);
            if (_Str != (char *)0x0) {
              local_78 = 0;
              sVar10 = strlen(_Str);
              FUN_1446e6fe8(&local_178,_Str,sVar10 & 0xffffffff,1);
              FUN_140056680(&local_238,local_70);
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              puVar16 = &DAT_149dfb77a;
              if (local_230 != 0) {
                puVar16 = local_238;
              }
              FUN_1446f470e(&local_178,puVar16,1);
              plStack_170 = (longlong *)0x0;
              local_168 = (longlong *)0x0;
              FUN_1410c5f78(&local_228,&local_178);
              plVar8 = local_168;
              if (local_168 != (longlong *)0x0) {
                LOCK();
                plVar22 = local_168 + 1;
                *(int *)plVar22 = (int)*plVar22 + -1;
                UNLOCK();
                if ((int)*plVar22 == 0) {
                  (**(code **)*local_168)(local_168);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              if (local_238 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc9388);
            local_200 = FUN_1410451c0(uVar7,0);
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc93b0);
            cVar4 = FUN_1410c4486(uVar7,0);
            local_1ff = local_1ff & 0xfd | cVar4 * '\x02';
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc92e8);
            uVar7 = FUN_144a7cdd6(uVar7,0);
            FUN_1446ddc76(&local_238,uVar7,1);
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc9310);
            uVar7 = FUN_144a7cdd6(uVar7,0);
            FUN_1446ddc76(&local_240,uVar7,1);
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc9338);
            FUN_1410451c0(uVar7,0);
            uVar7 = FUN_144a06846(lVar23,&DAT_14cbc9360);
            uVar6 = FUN_140e1edd4(uVar7,0);
            local_2b8 = CONCAT44(local_2b8._4_4_,uVar6);
            FUN_147d92f8e(&local_178,local_238,local_240);
            FUN_147fa05ac(&local_228,&local_178);
            FUN_147fa3d40(local_278,&local_178,&local_228);
            FUN_1438b5fe0(&local_228);
            lVar23 = lVar23 + 0x10;
            lVar18 = lVar18 + -0x10;
          } while (lVar18 != 0);
        }
        local_178 = (undefined8 *)0x100000000;
        plStack_170 = local_298;
        local_168 = (longlong *)0xffffffff;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        if ((int)param_1[0x1f] == 0) {
          uVar13 = 1;
          local_168._0_4_ = 0xffffffff;
          iVar14 = 0;
          iVar20 = 0;
          local_168._4_4_ = 0;
          local_178._0_4_ = 0;
        }
        else {
          FUN_1449c0562(&local_178);
          uVar13 = (ulonglong)local_178 >> 0x20;
          iVar14 = (int)param_1[0x1f];
          iVar20 = (int)uStack_160;
        }
        plVar8 = plStack_170;
        iVar15 = (int)local_178;
        uVar19 = (uint)local_168;
        iVar11 = local_168._4_4_;
        if (local_168._4_4_ != iVar14 || plStack_170 != local_298) {
          do {
            (**(code **)(*param_1 + 0x338))
                      (param_1,lVar9,*(undefined8 *)(param_1[0x1a] + (longlong)iVar11 * 0x10));
            uVar19 = ~(uint)uVar13 & uVar19;
            plVar22 = (longlong *)plVar8[2];
            if ((longlong *)plVar8[2] == (longlong *)0x0) {
              plVar22 = plVar8;
            }
            iVar12 = (int)plVar8[3];
            lVar23 = (longlong)iVar15;
            uVar5 = *(uint *)((longlong)plVar22 + lVar23 * 4) & uVar19;
            if (uVar5 == 0) {
              iVar11 = iVar12 + 0x1e;
              if (-1 < iVar12 + -1) {
                iVar11 = iVar12 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar2 = iVar11;
              if (iVar11 < iVar15) {
                iVar2 = iVar15;
              }
              if (iVar15 < iVar11) {
                lVar18 = 0;
                do {
                  uVar5 = *(uint *)((longlong)plVar22 + lVar18 * 4 + lVar23 * 4 + 4);
                  if (uVar5 != 0) {
                    iVar15 = iVar15 + (int)lVar18 + 1;
                    uVar19 = 0xffffffff;
                    goto LAB_1410c4ceb;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar2 - lVar23 != lVar18);
                uVar19 = 0xffffffff;
                iVar15 = iVar2;
              }
              iVar15 = iVar15 + 1;
              iVar11 = iVar12;
            }
            else {
LAB_1410c4ceb:
              uVar13 = (ulonglong)(-uVar5 & uVar5);
              uVar21 = uVar13 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar21 != 0) {
                for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              iVar11 = (iVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if (iVar12 <= iVar11) {
                iVar11 = iVar12;
              }
            }
          } while (iVar11 != iVar14 || plVar8 != local_298);
        }
        lVar17 = FUN_1457f9700(param_1);
        lVar23 = local_270;
        lVar18 = local_250;
        if (lVar17 != 0) {
          *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar17 + 0x100);
        }
      }
      if (local_188 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar23 = lVar23 + 0x10;
    } while (lVar23 != lVar18);
  }
  uVar7 = FUN_1410c5694(param_1);
  FUN_1410c59a4(uVar7);
  *(undefined1 *)(param_1 + 0x26) = 1;
  FUN_1457f96f0(param_1 + 8);
  FUN_1457f96f8(param_1 + 0x24);
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c51a2 FUN_1410c51a2 body=125 status=ok
// SIG undefined FUN_1410c51a2(void)

undefined8 * FUN_1410c51a2(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1410c52f4();
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



// FUNCTION 1410c5220 FUN_1410c5220 body=212 status=ok
// SIG undefined FUN_1410c5220(void)

void FUN_1410c5220(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140d979a6((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147fa3caa(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1410c5297;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1410c5297:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1410c52f4 FUN_1410c52f4 body=433 status=ok
// SIG undefined FUN_1410c52f4(void)

longlong * FUN_1410c52f4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_1438b5fe0((longlong)iVar6 * 0x90 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410c54a6 FUN_1410c54a6 body=493 status=ok
// SIG undefined FUN_1410c54a6(void)

int * FUN_1410c54a6(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x60);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1410c5694 FUN_1410c5694 body=17 status=ok
// SIG undefined FUN_1410c5694(void)

void FUN_1410c5694(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001410c56a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 800))(param_1,param_1 + 0xe);
  return;
}



// FUNCTION 1410c574c FUN_1410c574c body=598 status=ok
// SIG undefined FUN_1410c574c(void)

void FUN_1410c574c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x60;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x5c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x58 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1410c5959;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1410c5959:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c59a4 FUN_1410c59a4 body=1389 status=ok
// SIG undefined FUN_1410c59a4(void)

void FUN_1410c59a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_e8 [40];
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  uint *local_b0;
  uint local_a4;
  uint *local_a0;
  uint *local_98;
  longlong *local_90;
  ulonglong local_88;
  uint *local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  uint *local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != 0) {
    local_b0 = (uint *)(param_1 + 0x58);
    local_68 = 0x100000000;
    local_58 = (longlong *)&DAT_ffffffff;
    local_50 = 0;
    local_60 = local_b0;
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar14 = 1;
      uVar12 = 0xffffffff;
      uVar21 = 0;
      uVar9 = 0;
      uVar19 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar19 = local_68 & 0xffffffff;
      uVar14 = local_68 >> 0x20;
      uVar21 = *(uint *)(param_1 + 0x70);
      uVar12 = (uint)local_58;
      uVar9 = local_58._4_4_;
    }
    uVar16 = local_50;
    lVar20 = param_1;
    puVar10 = local_60;
    if (uVar9 != uVar21 || local_60 != local_b0) {
      do {
        local_a0 = puVar10;
        local_b8 = lVar20;
        local_c0 = uVar21;
        lVar20 = *(longlong *)(local_b8 + 0x48) + (longlong)(int)uVar9 * 0x60;
        plVar17 = (longlong *)(lVar20 + 8);
        puVar10 = (uint *)(*(longlong *)(local_b8 + 0x48) + 0x18 + (longlong)(int)uVar9 * 0x60);
        uVar21 = puVar10[6];
        uVar15 = 0;
        uVar11 = 1;
        iVar18 = 0;
        uVar9 = 0;
        if (uVar21 != 0) {
          puVar8 = *(uint **)(lVar20 + 0x28);
          if (*(uint **)(lVar20 + 0x28) == (uint *)0x0) {
            puVar8 = puVar10;
          }
          uVar9 = *puVar8;
          if (uVar9 == 0) {
            iVar18 = uVar21 + 0x1e;
            if (-1 < (int)(uVar21 - 1)) {
              iVar18 = uVar21 - 1;
            }
            uVar13 = 0;
            uVar11 = (ulonglong)(uint)(iVar18 >> 5);
            if (iVar18 >> 5 < 1) {
              uVar11 = uVar13;
            }
            uVar15 = (ulonglong)((int)uVar11 + 1);
            iVar18 = (int)uVar11 * 0x20 + 0x20;
            iVar4 = 0;
            do {
              if (uVar11 == uVar13) {
                uVar11 = 1;
                uVar9 = uVar21;
                goto LAB_1410c5b3f;
              }
              iVar4 = iVar4 + 0x20;
              uVar9 = puVar8[uVar13 + 1];
              uVar13 = uVar13 + 1;
            } while (uVar9 == 0);
            uVar15 = uVar13 & 0xffffffff;
            iVar18 = iVar4;
          }
          else {
            uVar15 = 0;
            iVar18 = 0;
          }
          uVar11 = (ulonglong)(-uVar9 & uVar9);
          uVar13 = uVar11 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar9 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if ((int)uVar21 <= (int)uVar9) {
            uVar9 = uVar21;
          }
        }
LAB_1410c5b3f:
        local_68 = CONCAT44(1 << ((byte)uVar21 & 0x1f),(int)uVar21 >> 5);
        local_58 = (longlong *)CONCAT44(uVar21,-1 << ((byte)uVar21 & 0x1f));
        local_50 = uVar21 & 0xffffffe0;
        local_bc = uVar16;
        local_a4 = uVar12;
        local_88 = uVar14;
        local_70 = uVar19;
        local_60 = puVar10;
        if (*(uint *)(lVar20 + 0x30) != uVar21) {
          FUN_1449c0562(&local_68);
          uVar21 = local_58._4_4_;
        }
        if ((uVar9 != uVar21) || (puVar10 != local_60)) {
          uVar12 = 0xffffffff;
          local_98 = puVar10;
          local_90 = plVar17;
          local_80 = local_60;
          do {
            lVar20 = *plVar17;
            lVar7 = (longlong)(int)uVar9 * 0x90;
            uVar14 = *(ulonglong *)(lVar20 + 0x30 + lVar7);
            uVar19 = *(ulonglong *)(lVar20 + 0x48 + lVar7);
            local_60 = *(uint **)(lVar20 + 0x38 + lVar7);
            local_58 = *(longlong **)(lVar20 + 0x40 + lVar7);
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
            lVar20 = lVar20 + lVar7;
            local_78 = uVar15;
            local_68 = uVar14;
            FUN_1410c5fde(&local_68);
            FUN_1410c5f12(lVar20,&local_68);
            if ((uVar19 == uVar14) && ((*(byte *)(lVar20 + 0x29) & 2) == 0)) {
              FUN_1410c5f78(lVar20,&local_68);
              *(byte *)(lVar20 + 0x29) = *(byte *)(lVar20 + 0x29) | 2;
            }
            plVar3 = local_58;
            plVar17 = local_90;
            puVar10 = local_98;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_58)(local_58);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            uVar12 = uVar12 & ~(uint)uVar11;
            puVar8 = (uint *)plVar17[4];
            if ((uint *)plVar17[4] == (uint *)0x0) {
              puVar8 = puVar10;
            }
            uVar16 = *(uint *)(plVar17 + 5);
            iVar4 = (int)local_78;
            lVar20 = (longlong)iVar4;
            uVar9 = puVar8[lVar20] & uVar12;
            uVar15 = local_78;
            if (uVar9 == 0) {
              iVar5 = uVar16 + 0x1e;
              if (-1 < (int)(uVar16 - 1)) {
                iVar5 = uVar16 - 1;
              }
              iVar5 = iVar5 >> 5;
              iVar18 = iVar18 + 0x20;
              iVar6 = iVar5;
              if (iVar5 < iVar4) {
                iVar6 = iVar4;
              }
              if (iVar4 < iVar5) {
                lVar7 = 0;
                do {
                  uVar9 = puVar8[lVar20 + lVar7 + 1];
                  if (uVar9 != 0) {
                    uVar15 = (ulonglong)(iVar4 + (int)lVar7 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_1410c5cd8;
                  }
                  iVar18 = iVar18 + 0x20;
                  lVar7 = lVar7 + 1;
                } while (iVar6 - lVar20 != lVar7);
                uVar12 = 0xffffffff;
                iVar4 = iVar6;
              }
              uVar15 = (ulonglong)(iVar4 + 1);
              puVar10 = local_98;
              plVar17 = local_90;
              uVar9 = uVar16;
            }
            else {
LAB_1410c5cd8:
              uVar11 = (ulonglong)(-uVar9 & uVar9);
              uVar14 = uVar11 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar9 = (iVar18 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)uVar16 <= (int)uVar9) {
                uVar9 = uVar16;
              }
            }
          } while ((uVar9 != uVar21) || (puVar10 != local_80));
        }
        uVar12 = local_a4 & ~(uint)local_88;
        puVar10 = *(uint **)(local_a0 + 4);
        if (*(uint **)(local_a0 + 4) == (uint *)0x0) {
          puVar10 = local_a0;
        }
        uVar21 = local_a0[6];
        iVar18 = (int)local_70;
        lVar20 = (longlong)iVar18;
        uVar9 = puVar10[lVar20] & uVar12;
        uVar19 = local_70;
        uVar16 = local_bc;
        if (uVar9 == 0) {
          iVar4 = uVar21 + 0x1e;
          if (-1 < (int)(uVar21 - 1)) {
            iVar4 = uVar21 - 1;
          }
          iVar4 = iVar4 >> 5;
          uVar16 = local_bc + 0x20;
          iVar5 = iVar4;
          if (iVar4 < iVar18) {
            iVar5 = iVar18;
          }
          if (iVar18 < iVar4) {
            lVar7 = 0;
            do {
              uVar9 = puVar10[lVar20 + lVar7 + 1];
              if (uVar9 != 0) {
                uVar12 = 0xffffffff;
                uVar19 = (ulonglong)(iVar18 + (int)lVar7 + 1);
                goto LAB_1410c5da0;
              }
              uVar16 = uVar16 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar5 - lVar20 != lVar7);
            uVar12 = 0xffffffff;
            iVar18 = iVar5;
          }
          uVar19 = (ulonglong)(iVar18 + 1);
          uVar14 = local_88;
          uVar9 = uVar21;
        }
        else {
LAB_1410c5da0:
          uVar14 = (ulonglong)(-uVar9 & uVar9);
          uVar15 = uVar14 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar9 = (uVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if ((int)uVar21 <= (int)uVar9) {
            uVar9 = uVar21;
          }
        }
        uVar21 = local_c0;
        lVar20 = local_b8;
        puVar10 = local_a0;
      } while (uVar9 != local_c0 || local_a0 != local_b0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c5f12 FUN_1410c5f12 body=102 status=ok
// SIG undefined FUN_1410c5f12(void)

void FUN_1410c5f12(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (*param_2 != lVar5) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 1;
    lVar5 = *param_2;
  }
  *(longlong *)(param_1 + 0x30) = lVar5;
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  *(longlong *)(param_1 + 0x38) = lVar5;
  *(longlong *)(param_1 + 0x40) = lVar3;
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
                    /* WARNING: Could not recover jumptable at 0x0001410c5f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410c5f78 FUN_1410c5f78 body=102 status=ok
// SIG undefined FUN_1410c5f78(void)

void FUN_1410c5f78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*param_2 != lVar5) {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 1;
    lVar5 = *param_2;
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
  *(longlong *)(param_1 + 0x50) = lVar5;
  *(longlong *)(param_1 + 0x58) = lVar3;
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
                    /* WARNING: Could not recover jumptable at 0x0001410c5fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410c5fde FUN_1410c5fde body=1364 status=ok
// SIG undefined FUN_1410c5fde(void)

void FUN_1410c5fde(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  cVar1 = FUN_140230656();
  if (cVar1 != '\0') {
    return;
  }
  uVar2 = FUN_1410c6532();
  switch(uVar2) {
  case 2:
    lVar3 = *param_1;
    if (lVar3 == DAT_14c965580) {
LAB_1410c60dc:
      puVar4 = &DAT_14c9655c8;
      goto LAB_1410c61a7;
    }
    if (lVar3 != DAT_14c965520) {
      if (lVar3 == DAT_14c9654f0) goto LAB_1410c61a0;
      if (lVar3 == DAT_14c965598) {
LAB_1410c60c4:
        puVar4 = &DAT_14c9654d8;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c9655e0) {
LAB_1410c61f3:
        puVar4 = &DAT_14c9654f0;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c9655c8) {
LAB_1410c6242:
        puVar4 = &DAT_14c965568;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c9654d8) {
LAB_1410c6270:
        puVar4 = &DAT_14c965580;
        goto LAB_1410c61a7;
      }
LAB_1410c607e:
      if (lVar3 != DAT_14c965568) {
switchD_1410c6015_default:
        return;
      }
      goto LAB_1410c6484;
    }
    break;
  case 3:
    lVar3 = *param_1;
    if (lVar3 == DAT_14c965580) goto LAB_1410c60dc;
    if (lVar3 != DAT_14c965520) {
      if (lVar3 != DAT_14c9654f0) {
        if (lVar3 == DAT_14c965598) goto LAB_1410c60c4;
        if (lVar3 == DAT_14c9655e0) goto LAB_1410c61f3;
        if (lVar3 == DAT_14c9655c8) goto LAB_1410c6242;
        if (lVar3 == DAT_14c9654d8) goto LAB_1410c6270;
        if (lVar3 != DAT_14c965628) goto LAB_1410c607e;
LAB_1410c61bd:
        puVar4 = &DAT_14c965628;
        goto LAB_1410c61a7;
      }
LAB_1410c61a0:
      puVar4 = &DAT_14c9655e0;
      goto LAB_1410c61a7;
    }
    break;
  case 4:
    lVar3 = *param_1;
    if (lVar3 == DAT_14c965580) goto LAB_1410c60dc;
    if (lVar3 != DAT_14c965520) {
      if (lVar3 != DAT_14c9654f0) {
        if (lVar3 == DAT_14c966f28) {
LAB_1410c61cf:
          puVar4 = &DAT_14c966f10;
          goto LAB_1410c61a7;
        }
        if (lVar3 == DAT_14c965598) goto LAB_1410c60c4;
        if (lVar3 == DAT_14c9655e0) goto LAB_1410c61f3;
        if (lVar3 == DAT_14c9655c8) goto LAB_1410c6242;
        if (lVar3 == DAT_14c9654d8) goto LAB_1410c6270;
        if (lVar3 == DAT_14c966f10) goto LAB_1410c6285;
        goto LAB_1410c607e;
      }
      goto LAB_1410c61a0;
    }
    break;
  case 5:
    lVar3 = *param_1;
    puVar4 = &DAT_14c965628;
    if (lVar3 == DAT_14c965580) goto LAB_1410c61a7;
    if (lVar3 != DAT_14c965520) {
      if (lVar3 == DAT_14c965100) {
        puVar4 = &DAT_14c966f88;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c966fd0) goto LAB_1410c61cf;
      if (lVar3 != DAT_14c965598) {
        if (lVar3 != DAT_14c9655e0) {
          if (lVar3 == DAT_14c966f88) {
LAB_1410c621b:
            puVar4 = &DAT_14c965100;
            goto LAB_1410c61a7;
          }
          if (lVar3 == DAT_14c9654d8) {
            puVar4 = &DAT_14c9650a0;
            goto LAB_1410c61a7;
          }
          if (lVar3 == DAT_14c965628) goto LAB_1410c6270;
          if (lVar3 == DAT_14c966f10) {
LAB_1410c62cd:
            puVar4 = &DAT_14c966fd0;
            goto LAB_1410c61a7;
          }
          if (lVar3 != DAT_14c9650a0) {
            if (lVar3 != DAT_14c965508) {
              if (lVar3 != DAT_14c965550) {
                if (lVar3 == DAT_14c964ef0) {
                  puVar4 = (undefined8 *)&DAT_14c965658;
                }
                else if (lVar3 == DAT_14c964f08) {
                  puVar4 = (undefined8 *)&DAT_14c965700;
                }
                else if (lVar3 != DAT_14c964f20) {
                  if (lVar3 != DAT_14c964f38) {
                    return;
                  }
                  puVar4 = (undefined8 *)&DAT_14c965610;
                }
                goto LAB_1410c61a7;
              }
              goto LAB_1410c6242;
            }
            goto LAB_1410c622d;
          }
          goto LAB_1410c61e1;
        }
        goto LAB_1410c60c4;
      }
      goto LAB_1410c61a0;
    }
    break;
  case 6:
    lVar3 = *param_1;
    if (lVar3 != DAT_14c965520) {
      if (lVar3 == DAT_14c9654f0) goto LAB_1410c61a0;
      if (lVar3 == DAT_14c965100) goto LAB_1410c61bd;
      if (lVar3 == DAT_14c966fd0) {
LAB_1410c61e1:
        puVar4 = &DAT_14c965508;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c964fe0) {
LAB_1410c622d:
        puVar4 = &DAT_14c965550;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965118) {
        puVar4 = &DAT_14c9650e8;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965148) {
LAB_1410c6285:
        puVar4 = &DAT_14c966f28;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c966f28) {
        puVar4 = &DAT_14c964ff8;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965160) {
        puVar4 = &DAT_14c965010;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965040) {
        puVar4 = &DAT_14c966ec8;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c9650d0) {
        puVar4 = &DAT_14c965118;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c9650e8) {
        puVar4 = &DAT_14c965088;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965598) goto LAB_1410c6242;
      if (lVar3 == DAT_14c9655e0) goto LAB_1410c61f3;
      if (lVar3 == DAT_14c965130) {
        puVar4 = &DAT_14c9650d0;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c966ef8) {
        puVar4 = &DAT_14c964fe0;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c964ff8) {
        puVar4 = &DAT_14c965160;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965010) {
        puVar4 = &DAT_14c965040;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965028) {
        puVar4 = &DAT_14c966ef8;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965058) {
        puVar4 = &DAT_14c965028;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965070) {
        puVar4 = &DAT_14c965148;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c965088) {
        puVar4 = &DAT_14c9650b8;
        goto LAB_1410c61a7;
      }
      if (lVar3 == DAT_14c9654d8) {
        puVar4 = &DAT_14c965130;
        goto LAB_1410c61a7;
      }
      if (lVar3 != DAT_14c965628) {
        if (lVar3 != DAT_14c966f10) {
          if (lVar3 == DAT_14c966eb0) goto LAB_1410c621b;
          if (lVar3 == DAT_14c966ec8) {
            puVar4 = &DAT_14c965058;
            goto LAB_1410c61a7;
          }
          if (lVar3 == DAT_14c966ee0) {
            puVar4 = &DAT_14c965070;
            goto LAB_1410c61a7;
          }
          if (lVar3 == DAT_14c964fc8) {
            puVar4 = &DAT_14c966eb0;
            goto LAB_1410c61a7;
          }
          if (lVar3 == DAT_14c9650b8) {
            puVar4 = &DAT_14c964fc8;
            goto LAB_1410c61a7;
          }
          if (lVar3 == DAT_14c965508) goto LAB_1410c62cd;
          if (lVar3 == DAT_14c965550) {
            puVar4 = &DAT_14c966ee0;
            goto LAB_1410c61a7;
          }
          if (lVar3 != DAT_14c965568) {
            return;
          }
          goto LAB_1410c61cf;
        }
        goto LAB_1410c60c4;
      }
LAB_1410c6484:
      puVar4 = &DAT_14c965520;
      goto LAB_1410c61a7;
    }
    break;
  default:
    goto switchD_1410c6015_default;
  }
  puVar4 = &DAT_14c965598;
LAB_1410c61a7:
  FUN_1413a517a(param_1,puVar4);
  return;
}



// FUNCTION 1410c6532 FUN_1410c6532 body=707 status=ok
// SIG undefined FUN_1410c6532(void)

ulonglong FUN_1410c6532(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  HKL pHVar9;
  undefined2 *puVar10;
  undefined8 unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  size_t _Size;
  undefined7 uVar13;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),DAT_14cb80070);
  if (DAT_14cb80070 != '\0') goto LAB_1410c6556;
  lVar7 = FUN_140d5712e();
  lVar12 = *(longlong *)(lVar7 + 0x28);
  plVar3 = *(longlong **)(lVar7 + 0x30);
  if (plVar3 != (longlong *)0x0) {
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
  }
  if (lVar12 == 0) {
LAB_1410c67dd:
    bVar4 = true;
    if (DAT_14cb80070 == '\0') {
      DAT_14cb80070 = '\x01';
    }
    uVar11 = 0;
  }
  else {
    puVar8 = (undefined8 *)FUN_1457f9d66(lVar12);
    local_38 = (undefined2 *)0x0;
    local_30 = *(int *)(puVar8 + 1);
    lVar12 = (longlong)local_30;
    _Src = (void *)*puVar8;
    if (lVar12 == 0) {
      local_2c = 0;
      _Size = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      _Size = lVar12 * 2;
      memcpy(local_38,_Src,_Size);
    }
    pHVar9 = GetKeyboardLayout(0);
    uVar5 = (uint)pHVar9 & 0x3ff;
    uVar13 = (undefined7)(_Size >> 8);
    uVar11 = CONCAT71(uVar13,1);
    if (uVar5 == 9) goto LAB_1410c6603;
    switch(uVar5) {
    case 7:
      uVar11 = CONCAT71(uVar13,4);
      break;
    default:
      uVar11 = CONCAT71(uVar13,DAT_14cb80070);
      if (DAT_14cb80070 == '\0') {
        puVar10 = local_38;
        if (local_30 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        iVar6 = FUN_144a80a00(puVar10,&DAT_149e178ec);
        if (iVar6 == 0) {
          DAT_14cb80070 = '\x01';
        }
        else {
          puVar10 = local_38;
          if (local_30 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          iVar6 = FUN_144a80a00(puVar10,&DAT_14b40bbee);
          if (iVar6 == 0) {
            DAT_14cb80070 = '\x03';
          }
          else {
            puVar10 = local_38;
            if (local_30 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            iVar6 = FUN_144a80a00(puVar10,&DAT_14b40bbf6);
            if (iVar6 == 0) {
              DAT_14cb80070 = '\x05';
            }
            else {
              puVar10 = local_38;
              if (local_30 == 0) {
                puVar10 = &DAT_149dfb77a;
              }
              iVar6 = FUN_144a80a00(puVar10,&DAT_14b40bbfe);
              if (iVar6 == 0) {
                DAT_14cb80070 = '\x04';
              }
              else {
                puVar10 = local_38;
                if (local_30 == 0) {
                  puVar10 = &DAT_149dfb77a;
                }
                iVar6 = FUN_144a80a00(puVar10,&DAT_14b40bc06);
                if (iVar6 == 0) {
                  DAT_14cb80070 = '\x02';
                }
              }
            }
          }
        }
        if (local_38 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1410c67dd;
      }
      goto LAB_1410c660a;
    case 10:
      uVar11 = CONCAT71(uVar13,3);
      break;
    case 0xc:
      pHVar9 = GetKeyboardLayout(0);
      uVar11 = CONCAT71(uVar13,5);
      if (((uint)pHVar9 & 0xfc000000) != 0x4000000) {
        pHVar9 = GetKeyboardLayout(0);
        uVar11 = CONCAT71(uVar13,(((uint)pHVar9 & 0xfc000000) == 0x8000000) * '\x04' + '\x01');
      }
      break;
    case 0x10:
      uVar11 = CONCAT71(uVar13,2);
    }
LAB_1410c6603:
    DAT_14cb80070 = (char)uVar11;
LAB_1410c660a:
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    bVar4 = false;
  }
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
  if (bVar4) {
    uVar11 = CONCAT71((int7)(uVar11 >> 8),DAT_14cb80070);
  }
LAB_1410c6556:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c67fe FUN_1410c67fe body=159 status=ok
// SIG undefined FUN_1410c67fe(void)

undefined8 * FUN_1410c67fe(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b015940;
  FUN_144894d4c(param_1 + 4);
  param_1[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x11e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x11f) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x8fc) = 0x3c23d70a00000000;
  *(undefined4 *)((longlong)param_1 + 0x904) = 0x3d4ccccd;
  *(undefined1 *)(param_1 + 0x121) = 1;
  *(undefined4 *)((longlong)param_1 + 0x90c) = 0;
  FUN_144894d4c(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
  FUN_144894d4c(param_1 + 0x23e);
  *(undefined4 *)(param_1 + 0x356) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 8;
  return param_1;
}



// FUNCTION 1410c689e FUN_1410c689e body=86 status=ok
// SIG undefined FUN_1410c689e(void)

void FUN_1410c689e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x5e8))(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_140082f10();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1410c68f4(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1410c68f4 FUN_1410c68f4 body=100 status=ok
// SIG undefined FUN_1410c68f4(void)

void FUN_1410c68f4(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    cVar1 = FUN_1409501fe();
    if ((cVar1 == '\0') && (DAT_14cb8d3c0 != 0)) {
      lVar2 = FUN_1409503e6(DAT_14cb8d3c0,param_1);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*param_2 + 0x7e0))(param_2,lVar2 + 0x1c);
        if (lVar2 != 0) {
          FUN_1407d853c(lVar2,param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c6958 FUN_1410c6958 body=675 status=ok
// SIG undefined FUN_1410c6958(void)

double * FUN_1410c6958(longlong *param_1,double *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14066734e(param_1,local_e8);
  dVar8 = local_b8;
  dVar7 = dStack_c0;
  dVar6 = local_c8;
  *param_2 = local_c8;
  param_2[1] = dStack_c0;
  param_2[2] = local_b8;
  if (*param_1 != 0) {
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_1410c6c64(*param_1,&local_f8,0);
    lVar10 = local_f8;
    lVar11 = (longlong)(int)uStack_f0;
    if (lVar11 != 0) {
      lVar12 = 0;
      plVar13 = (longlong *)0x0;
      do {
        plVar3 = *(longlong **)(lVar10 + lVar12);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar9 = (**(code **)(*plVar3 + 0x4c8))(plVar3,DAT_14cbcb2a0), cVar9 != '\0')) {
          plVar13 = plVar3;
        }
        lVar12 = lVar12 + 8;
      } while (lVar11 * 8 != lVar12);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x4a8))(plVar13,local_e8,DAT_14cbcb2a0,0);
        *param_2 = local_c8;
        param_2[1] = dStack_c0;
        param_2[2] = local_b8;
        if ((param_3 != 0) && (lVar10 = FUN_1410c6bfc(param_3), lVar10 != 0)) {
          local_b8 = local_b8 - dVar8;
          local_c8 = local_c8 - dVar6;
          dStack_c0 = dStack_c0 - dVar7;
          dVar15 = local_b8 * local_b8 + local_c8 * local_c8 + dStack_c0 * dStack_c0;
          if (((dVar15 != 1.0) ||
              (dVar14 = dStack_c0, dVar4 = local_b8, dVar5 = local_c8, NAN(dVar15))) &&
             (dVar14 = DAT_14c8464e8, dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar15)) {
            dVar15 = 1.0 / SQRT(dVar15);
            dVar14 = dStack_c0 * dVar15;
            dVar4 = local_b8 * dVar15;
            dVar5 = local_c8 * dVar15;
          }
          dVar15 = *(double *)(lVar10 + 0x280);
          if (*(double *)(lVar10 + 0x288) <= *(double *)(lVar10 + 0x280)) {
            dVar15 = *(double *)(lVar10 + 0x288);
          }
          dVar2 = *(double *)(lVar10 + 0x290);
          fVar1 = *(float *)(lVar10 + 0x640);
          dVar15 = (double)((float)dVar15 * *(float *)(lVar10 + 0x644) + 65.0);
          *param_2 = dVar6 + dVar5 * dVar15;
          param_2[1] = dVar7 + dVar14 * dVar15;
          param_2[2] = (double)((float)dVar2 * fVar1 + 65.0) * dVar4 + dVar8;
        }
      }
    }
    if (local_f8 != 0) {
      FUN_1400020a8(local_f8);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410c6bfc FUN_1410c6bfc body=102 status=ok
// SIG undefined FUN_1410c6bfc(void)

void FUN_1410c6bfc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1400b5618();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c6c64 FUN_1410c6c64 body=139 status=ok
// SIG undefined FUN_1410c6c64(void)

void FUN_1410c6c64(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_148d477d6(param_2,0);
  }
  local_28 = FUN_1410c6cf0();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_1410c6dd6(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c6cf0 FUN_1410c6cf0 body=228 status=ok
// SIG undefined FUN_1410c6cf0(void)

longlong FUN_1410c6cf0(void)

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
  if (DAT_14cb662d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_148725499;
    local_40 = FUN_141858b56;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSocketComponent",&DAT_14cb662d0,&DAT_148725498);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb662d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c6dd6 FUN_1410c6dd6 body=719 status=ok
// SIG undefined FUN_1410c6dd6(void)

void FUN_1410c6dd6(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
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
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1410c6f5f:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_1410c6e41:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148d47a9e(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148d47836(param_1,&local_40,param_4);
      }
      goto LAB_1410c6e7f;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1410c6f5f;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1410c6e41;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1410c70a6(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_148d47bd4(param_1,&local_50,param_4);
  }
LAB_1410c6e7f:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c70a6 FUN_1410c70a6 body=948 status=ok
// SIG undefined FUN_1410c70a6(void)

void FUN_1410c70a6(longlong param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  uint *local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar10 = (uint *)(param_1 + 0x250);
  uVar2 = *(uint *)(param_1 + 0x268);
  if (uVar2 == 0) {
    uVar8 = 1;
    uVar12 = 0;
    uVar3 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar10;
    }
    uVar3 = *puVar4;
    if (uVar3 == 0) {
      iVar7 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar7 = uVar2 - 1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar7 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_1410c72fb;
        iVar7 = iVar7 + 0x20;
        uVar3 = puVar4[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar12 = 0;
      iVar7 = 0;
    }
    uVar8 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar3) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 != uVar2) {
    uVar14 = 0xffffffff;
    local_70 = puVar10;
    local_60 = (ulonglong)uVar2;
    local_58 = param_1;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
      if (lVar9 != 0) {
        lVar13 = *param_2;
        if ((lVar13 != 0 & DAT_14c950c29) == 1) {
          local_68 = param_3;
          FUN_1456cec3c(lVar13);
          puVar10 = local_70;
          param_3 = local_68;
LAB_1410c71ad:
          if (DAT_14cad00c8 == 0) {
            local_90 = &local_50;
            local_50 = FUN_144a7958c;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1479b7a0c;
            local_a0 = &LAB_1463b464e;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000005;
            local_c0 = 8;
            local_c8 = 0x110;
            local_68 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar10 = local_70;
            param_3 = local_68;
            if (DAT_14cad00c8 == 0) goto LAB_1410c73e6;
          }
          if (*(int *)(lVar13 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1410c73e6;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar13 = 0;
          }
        }
        else {
          if (lVar13 != 0) goto LAB_1410c71ad;
LAB_1410c73e6:
          lVar13 = 0;
        }
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          iVar11 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
            FUN_1410c745c(param_3,iVar11);
            param_1 = local_58;
            puVar10 = local_70;
          }
          *(longlong *)(*param_3 + (longlong)iVar11 * 8) = lVar9;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar8;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar10;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar11 = (int)uVar12;
      lVar9 = (longlong)iVar11;
      uVar3 = puVar4[lVar9] & uVar14;
      if (uVar3 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar11) {
          iVar6 = iVar11;
        }
        puVar10 = local_70;
        if (iVar11 < iVar5) {
          lVar13 = 0;
          do {
            uVar3 = puVar4[lVar9 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1410c7282;
            }
            iVar7 = iVar7 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar6 - lVar9 != lVar13);
          uVar14 = 0xffffffff;
          iVar11 = iVar6;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        param_1 = local_58;
        uVar3 = uVar2;
      }
      else {
LAB_1410c7282:
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar3 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar3) {
          uVar3 = uVar2;
        }
      }
    } while (uVar3 != (uint)local_60);
  }
LAB_1410c72fb:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c745c FUN_1410c745c body=353 status=ok
// SIG undefined FUN_1410c745c(void)

void FUN_1410c745c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410c74e1;
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
LAB_1410c74e1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410c75be FUN_1410c75be body=128 status=ok
// SIG undefined FUN_1410c75be(void)

void FUN_1410c75be(longlong param_1)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (char)*(int *)(param_1 + 4) + (char)(*(int *)(param_1 + 4) / 9) * -9;
  uVar2 = cVar1 * 0x56;
  cVar3 = (char)((uVar2 & 0xffff) >> 0xf) + (char)(uVar2 >> 8);
  local_18 = (int)(char)(cVar1 + cVar3 * -3);
  local_14 = (int)cVar3;
  FUN_1410c7640();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c7640 FUN_1410c7640 body=188 status=ok
// SIG undefined FUN_1410c7640(void)

undefined4 FUN_1410c7640(ushort *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  lVar4 = DAT_14ca258b8;
  iVar2 = *param_2;
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar7 = 0;
  }
  else if (iVar3 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  iVar3 = *(int *)(lVar4 + uVar7 * 4);
  uVar1 = *param_1;
  if ((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) {
    puVar8 = &DAT_14ca96938;
    if (DAT_14ca96988 != (undefined4 *)0x0) {
      puVar8 = DAT_14ca96988;
    }
    bVar9 = ((uint)puVar8[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0;
  }
  else {
    bVar9 = false;
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == iVar2 & bVar9);
}



// FUNCTION 1410c76fc FUN_1410c76fc body=142 status=ok
// SIG undefined FUN_1410c76fc(void)

void FUN_1410c76fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b0ad9d0;
    FUN_140c866d1(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_1[0xe];
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
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x12;
  }
  return;
}



// FUNCTION 1410c77a2 FUN_1410c77a2 body=246 status=ok
// SIG undefined FUN_1410c77a2(void)

longlong FUN_1410c77a2(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_1410c7898();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1410c7898 FUN_1410c7898 body=228 status=ok
// SIG undefined FUN_1410c7898(void)

longlong FUN_1410c7898(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6ee80 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_1487a0ef7;
    local_40 = FUN_1418615a7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"RadiateDamageAreaBodyData",&DAT_14cb6ee80,&DAT_1487a0ef6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ee80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c797e FUN_1410c797e body=259 status=ok
// SIG undefined FUN_1410c797e(void)

void FUN_1410c797e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [47];
  char local_39;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x65e];
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0xa9) == '\x01')) &&
      ((param_1[0x73] == 0 || ((*(byte *)(param_1[0x73] + 0x39a) & 8) == 0)))) &&
     ((char)param_1[0x2f] != '\x03')) {
    local_39 = '\0';
    plVar2 = (longlong *)FUN_1410c7a82(lVar4,&local_39);
    if (local_39 == '\x01') {
      lVar1 = plVar2[2];
      lVar4 = *plVar2;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      local_38 = lVar4;
      local_30 = (int)lVar1;
      uVar3 = FUN_14477b072(param_1,DAT_14cbadc68);
      lVar4 = *param_1;
    }
    else {
      local_38 = 0;
      local_30 = 0;
      uVar3 = FUN_14477b072(param_1,DAT_14cbadc68);
      lVar4 = *param_1;
    }
    (**(code **)(lVar4 + 0x248))(param_1,uVar3,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c7a82 FUN_1410c7a82 body=178 status=ok
// SIG undefined FUN_1410c7a82(void)

longlong FUN_1410c7a82(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
    if (*(code **)(*plVar1 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar1 = plVar1 + 0x143;
    }
    else {
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if ((int)plVar1[6] != *(int *)((longlong)plVar1 + 0x5c)) {
      plVar2 = plVar1 + 0xc;
      if ((longlong *)plVar1[0xd] != (longlong *)0x0) {
        plVar2 = (longlong *)plVar1[0xd];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)plVar1[0xe] - 1U & *(uint *)(param_1 + 0x68)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(plVar1[5] + (longlong)iVar3 * 0xe0) == *(uint *)(param_1 + 0x68)) {
            *param_2 = 1;
            return param_1 + 0x58;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0xe0 + plVar1[5] + 0xd0);
        } while (iVar3 != -1);
      }
    }
  }
  *param_2 = 0;
  return param_1 + 0x90;
}



// FUNCTION 1410c7b4a FUN_1410c7b4a body=844 status=ok
// SIG undefined FUN_1410c7b4a(void)

void FUN_1410c7b4a(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = (**(code **)(*param_1 + 0x600))();
  if (cVar3 == '\0') goto LAB_1410c7d2e;
  lVar4 = param_1[0x637];
  if (lVar4 == 0) {
    plVar6 = param_1 + 0x642;
    cVar3 = (char)param_1[0x696];
    if (cVar3 == '\x01') {
      FUN_1410c7ec0(plVar6,param_1 + 0x632);
      cVar3 = (char)param_1[0x696];
      if (cVar3 == '\x01') {
        FUN_143ce8d30(plVar6);
        *(undefined1 *)(param_1 + 0x696) = 0;
        cVar3 = '\0';
      }
    }
    if (param_1[0x62e] == 0) {
      if (cVar3 == '\0') goto LAB_1410c7d2e;
    }
    else {
      plVar6 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    if (((((*(byte *)(param_1 + 0x641) & 2) != 0) ||
         (lVar4 = FUN_140153468(plVar6), param_1 == (longlong *)0x0)) || (param_1[0x15] == 0)) ||
       ((cVar3 = *(char *)(param_1[0x15] + 0x178), cVar3 != '\x03' &&
        ((lVar4 == 0 || cVar3 != '\x02' || ((*(byte *)(lVar4 + 0x101) & 0x10) == 0)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    goto LAB_1410c7d2e;
  }
  if ((param_1 != (longlong *)0x0) && (param_1[0x15] != 0)) {
    cVar3 = *(char *)(param_1[0x15] + 0x178);
    if (cVar3 == '\x02') {
      if ((*(byte *)(lVar4 + 0x101) & 0x10) != 0) goto LAB_1410c7d65;
    }
    else if (cVar3 == '\x03') {
LAB_1410c7d65:
      if ((*(byte *)(lVar4 + 0xf8) & 0x40) != 0) {
        if (param_1[0x62e] == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = *(longlong *)(param_1[0x62e] + 0x378) == lVar4;
        }
        if (((*(uint *)((longlong)param_1 + 0x319c) & 0xfffffffe) != 2 || cVar3 != '\x02') && !bVar7
           ) {
          plVar6 = param_1 + 0x642;
          if ((char)param_1[0x696] == '\x01') {
            FUN_143ce8d30(plVar6);
          }
          FUN_141134e22(plVar6);
          *(undefined1 *)(param_1 + 0x696) = 1;
          FUN_14485c47a(plVar6,param_1);
          lVar4 = param_1[0x637];
          if (lVar4 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
          bVar2 = DAT_14c950c29;
          param_1[0x645] = lVar4;
          if ((lVar4 != 0) && ((bVar2 & 1) != 0)) {
            FUN_1456cec3c(lVar4);
          }
          *(undefined1 *)(param_1 + 0x646) = 1;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
        }
      }
      goto LAB_1410c7d2e;
    }
  }
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar6 = param_1 + 0x642;
      goto LAB_1410c7e5a;
    }
  }
  else {
    plVar6 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_1410c7e5a:
    FUN_1410c7ec0(plVar6,param_1 + 0x632);
  }
  local_38 = param_1[0x63d];
  local_48 = param_1[0x63b];
  lStack_40 = param_1[0x63c];
  if ((int)param_1[0x63a] == 0) {
LAB_1410c7e4c:
    local_60 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x31cc);
    local_60 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != (int)param_1[0x63a] ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1410c7e4c;
      local_60 = *puVar5;
    }
  }
  local_68 = (undefined4)param_1[0x639];
  local_70 = *(undefined4 *)((longlong)param_1 + 0x31c4);
  local_78 = (undefined4)param_1[0x638];
  local_58 = &local_48;
  FUN_141122e06(param_1,param_1 + 0x633,param_1[0x637],0);
LAB_1410c7d2e:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c7ec0 FUN_1410c7ec0 body=129 status=ok
// SIG undefined FUN_1410c7ec0(void)

void FUN_1410c7ec0(uint *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == param_1[1])) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      cVar2 = (**(code **)(*plVar3 + 0x600))();
      if (cVar2 != '\0') {
        FUN_143cf24da(param_1,*(undefined1 *)(param_2 + 0x78));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410c7f42 FUN_1410c7f42 body=92 status=ok
// SIG undefined FUN_1410c7f42(void)

void FUN_1410c7f42(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9a08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c7fa0 FUN_1410c7fa0 body=1373 status=ok
// SIG undefined FUN_1410c7fa0(void)

void FUN_1410c7fa0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  ulonglong uStack_b0;
  longlong *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  ulonglong uStack_90;
  void *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = FUN_14479d2ce(param_1 + 4);
  if ((lVar6 != 0) && (lVar7 = FUN_1457f9f16(), lVar7 != 0)) {
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x378) + 0x18);
    if (lVar6 == 0) {
      puVar8 = &DAT_14c9a1308;
    }
    else {
      puVar8 = (undefined8 *)FUN_1408db3b0(lVar6,"components");
    }
    pbVar2 = (byte *)*puVar8;
    plVar12 = &DAT_14c9a1270;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
      plVar12 = *(longlong **)(pbVar2 + 8);
    }
    if ((int)plVar12[2] < 1) {
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      FUN_1457f9fb2(lVar7,&local_a8);
      if ((longlong)(int)uStack_a0 != 0) {
        plVar12 = local_a8 + (int)uStack_a0;
        plVar13 = local_a8;
        do {
          lVar6 = *plVar13;
          if (lVar6 != 0) {
            local_78 = (void *)0x0;
            uStack_70 = 0;
            local_88 = (void *)0x0;
            uStack_80 = 0;
            local_98 = (longlong *)0x0;
            uStack_90 = 0;
            puVar9 = *(undefined4 **)(lVar6 + 8);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = &DAT_14c9485f0;
            }
            local_b8 = (longlong *)0x0;
            uStack_b0 = 0;
            FUN_1400b2348(puVar9,&local_b8,1);
            uVar3 = uStack_b0;
            plVar15 = local_b8;
            uVar5 = (int)uStack_b0 - 1;
            if ((int)uStack_b0 == 0) {
              uVar5 = 0;
            }
            if (0 < (int)uVar5) {
              uVar10 = 0;
              do {
                uVar1 = *(ushort *)((longlong)local_b8 + uVar10 * 2);
                *(ushort *)((longlong)local_b8 + uVar10 * 2) =
                     (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                uVar10 = uVar10 + 1;
              } while (uVar5 != uVar10);
            }
            local_b8 = (longlong *)0x0;
            uStack_b0 = 0;
            if (local_98 == (longlong *)0x0) {
              local_98 = plVar15;
              uStack_90 = uVar3;
            }
            else {
              FUN_1400020a8();
              local_98 = plVar15;
              uStack_90 = uVar3;
              if (local_b8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            iVar14 = *(int *)(lVar6 + 0x30) + -1;
            if (*(int *)(lVar6 + 0x30) == 0) {
              iVar14 = 0;
            }
            FUN_1402980a2(&local_88,*(undefined8 *)(lVar6 + 0x28),iVar14);
            iVar14 = *(int *)(lVar6 + 0x40) + -1;
            if (*(int *)(lVar6 + 0x40) == 0) {
              iVar14 = 0;
            }
            FUN_1402980a2(&local_78,*(undefined8 *)(lVar6 + 0x38),iVar14);
            iVar14 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar14 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
              FUN_1457f9f1e(param_2,iVar14);
            }
            plVar15 = local_98;
            lVar6 = *param_2;
            lVar7 = (longlong)iVar14 * 0x30;
            puVar8 = (undefined8 *)(lVar6 + lVar7);
            *(undefined8 *)(lVar6 + lVar7) = 0;
            lVar16 = (longlong)(int)uStack_90;
            *(int *)(lVar6 + 8 + lVar7) = (int)uStack_90;
            if (lVar16 == 0) {
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar8,uStack_90 & 0xffffffff,0);
              memcpy((void *)*puVar8,plVar15,lVar16 * 2);
            }
            pvVar4 = local_88;
            puVar8[2] = 0;
            lVar6 = (longlong)(int)uStack_80;
            *(int *)(puVar8 + 3) = (int)uStack_80;
            if (lVar6 == 0) {
              *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
            }
            else {
              FUN_1446dd670(puVar8 + 2,uStack_80 & 0xffffffff,0);
              memcpy((void *)puVar8[2],pvVar4,lVar6 * 2);
            }
            pvVar4 = local_78;
            puVar8[4] = 0;
            lVar6 = (longlong)(int)uStack_70;
            *(int *)(puVar8 + 5) = (int)uStack_70;
            if (lVar6 == 0) {
              *(undefined4 *)((longlong)puVar8 + 0x2c) = 0;
            }
            else {
              FUN_1446dd670(puVar8 + 4,uStack_70 & 0xffffffff,0);
              memcpy((void *)puVar8[4],pvVar4,lVar6 * 2);
            }
            if (local_78 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_98 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar12);
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8(local_a8);
      }
    }
    else {
      lVar6 = 0;
      do {
        pbVar2 = *(byte **)(*plVar12 + lVar6 * 0x10);
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(pbVar2 + 8);
        }
        FUN_1446ddc76(&local_b8,uVar11,1);
        if (local_b8 != (longlong *)0x0) {
          FUN_1446dcdd4(&local_98,&local_b8);
          lVar16 = thunk_FUN_144837462(lVar7);
          if (uStack_80 != 0) {
            FUN_1400020a8();
          }
          if (lVar16 != 0) {
            local_78 = (void *)0x0;
            uStack_70 = 0;
            local_88 = (void *)0x0;
            uStack_80 = 0;
            local_98 = (longlong *)0x0;
            uStack_90 = 0;
            puVar9 = *(undefined4 **)(lVar16 + 8);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = &DAT_14c9485f0;
            }
            local_a8 = (longlong *)0x0;
            uStack_a0 = 0;
            FUN_1400b2348(puVar9,&local_a8,1);
            uVar3 = uStack_a0;
            plVar13 = local_a8;
            uVar5 = (int)uStack_a0 - 1;
            if ((int)uStack_a0 == 0) {
              uVar5 = 0;
            }
            if (0 < (int)uVar5) {
              uVar10 = 0;
              do {
                uVar1 = *(ushort *)((longlong)local_a8 + uVar10 * 2);
                *(ushort *)((longlong)local_a8 + uVar10 * 2) =
                     (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                uVar10 = uVar10 + 1;
              } while (uVar5 != uVar10);
            }
            local_a8 = (longlong *)0x0;
            uStack_a0 = 0;
            if (local_98 == (longlong *)0x0) {
              uStack_90 = uVar3;
              local_98 = plVar13;
            }
            else {
              FUN_1400020a8();
              local_98 = plVar13;
              uStack_90 = uVar3;
              if (local_a8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            FUN_144a787a6(&local_88,lVar16 + 0x28);
            FUN_144a787a6(&local_78,lVar16 + 0x38);
            iVar14 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar14 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar14 + 1U) {
              FUN_1457f9f1e(param_2,iVar14);
            }
            FUN_148a06c12((longlong)iVar14 * 0x30 + *param_2);
            FUN_148a013a8(&local_98);
          }
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)plVar12[2]);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c84fe FUN_1410c84fe body=875 status=ok
// SIG undefined FUN_1410c84fe(void)

void FUN_1410c84fe(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar6 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar6, plStack_60 != plVar14)) {
      do {
        local_78 = lVar6;
        lVar6 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar9 * 0x20);
        if ((lVar6 != 0) &&
           (((*(byte **)(lVar6 + 0x48) != (byte *)0x0 && ((**(byte **)(lVar6 + 0x48) & 0x6b) == 3))
            && (plVar3 = *(longlong **)(lVar6 + 0x30), plVar3 != (longlong *)0x0)))) {
          lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar7 = FUN_1410c886a();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar3);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar6 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar14 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar9 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar8 != iVar12 || local_88 != local_a0) {
      do {
        local_a4 = iVar12;
        plVar14 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar7 = FUN_1410c886a();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar12 = (int)plVar1[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar14 + lVar6 * 4) & uVar11;
        if (uVar10 == 0) {
          iVar8 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar8 = iVar12 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar14 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar11 = 0xffffffff;
                goto LAB_1410c8684;
              }
              iVar15 = iVar15 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar4 - lVar6 != lVar7);
            uVar11 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar12;
        }
        else {
LAB_1410c8684:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar8) {
            iVar8 = iVar12;
          }
        }
        iVar12 = local_a4;
      } while (iVar8 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410c886a FUN_1410c886a body=57 status=ok
// SIG undefined FUN_1410c886a(void)

void FUN_1410c886a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb920a8 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb920a8 = FUN_140002ddd(FUN_14656bfb3,uVar1,L"GbxUIComponent");
  }
  return;
}



// FUNCTION 1410c88a4 FUN_1410c88a4 body=67 status=ok
// SIG undefined FUN_1410c88a4(void)

void FUN_1410c88a4(longlong *param_1,undefined8 param_2)

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



// FUNCTION 1410c88e8 FUN_1410c88e8 body=162 status=ok
// SIG undefined FUN_1410c88e8(void)

void FUN_1410c88e8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1410c8975;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410c8975:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1410c898a FUN_1410c898a body=1225 status=ok
// SIG undefined FUN_1410c898a(void)

void FUN_1410c898a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_30 = 0;
  uStack_2c = 0;
  local_28 = 0x10019100;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_30 = (undefined4)uVar2;
      uStack_2c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_30);
    }
  }
  local_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_60 = FUN_1405ebbb2;
      local_68 = &DAT_14c9520b8;
      local_70 = 0;
      local_78 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_34);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_34 = (undefined4)uVar2;
      uStack_30 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_34);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = CONCAT44(uStack_2c,uStack_30);
  local_48 = local_28;
  local_40 = 0;
  FUN_1410c8e54(local_18,&local_50,local_34);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c8e54 FUN_1410c8e54 body=355 status=ok
// SIG undefined FUN_1410c8e54(void)

void FUN_1410c8e54(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_50,param_1);
  if (local_50 == 0) goto LAB_1410c8f65;
  uVar3 = FUN_1412cbf12(param_2);
  local_60 = 0;
  uStack_58 = 0;
  uVar4 = FUN_1406eea5e();
  lVar5 = FUN_14477b664(uVar4);
  lVar6 = FUN_1406eea5e();
  uVar4 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_40,uVar4,uVar3);
  if (local_40 != 0) {
    uStack_58 = 0;
  }
  local_68 = local_40;
  lVar7 = FUN_1406eea5e();
  if (lVar6 == 0) {
LAB_1410c8f1a:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_1410c8f1a;
  if (lVar5 != lVar7) {
    uStack_58 = 0;
  }
  uVar4 = FUN_14477b664(lVar7);
  local_60 = FUN_14477b664(uVar4);
  if (local_60 != 0 && local_40 != 0) {
    uStack_58 = uVar3;
  }
  FUN_144224336(local_50,&local_68,param_3);
LAB_1410c8f65:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c8fb8 FUN_1410c8fb8 body=35 status=ok
// SIG undefined FUN_1410c8fb8(void)

void FUN_1410c8fb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410c8fdc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8eef60;
  return;
}



// FUNCTION 1410c8fdc FUN_1410c8fdc body=747 status=ok
// SIG undefined FUN_1410c8fdc(void)

undefined8 * FUN_1410c8fdc(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b516250;
  param_1[5] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x404;
  param_1[0x11] = &DAT_14a176f00;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x2e] = 0;
  FUN_1410c92c8(param_1 + 0x3c);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0xbff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x52] = DAT_14c8464e0;
  param_1[0x53] = uVar1;
  param_1[0x54] = DAT_14c8464f0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3f0000003f800000;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3f6666663f666666;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x5a) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x600000000;
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb99748) {
    FUN_144b3d300(&DAT_14cb99748);
    if (DAT_14cb99748 == -1) {
      FUN_145c2632c(&DAT_14cb99730,L"/Engine/EngineMeshes/Cylinder",0);
      atexit(FUN_143f7f5cc);
      _Init_thread_footer(&DAT_14cb99748);
    }
  }
  lVar2 = DAT_14cb99740;
  if (DAT_14c950c29 == '\x01') {
    if (DAT_14cb99740 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = DAT_14cb99740;
    }
  }
  param_1[5] = lVar2;
  param_1[10] = 0x41a0000042000000;
  param_1[0xb] = 0x447a000041a00000;
  *(undefined4 *)(param_1 + 0xc) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x41a000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x4248000041a00000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x41f00000;
  *(undefined2 *)((longlong)param_1 + 0x75) = 1;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x453b800044bb8000;
  param_1[0x2a] = 0x42480000437a0000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xbff0000000000000;
  uVar1 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = uVar1;
  param_1[0x27] = DAT_14c8464f0;
  param_1[0x28] = 0x4120000041200000;
  param_1[0x29] = 0x3f0000003f000000;
  param_1[0x2b] = 0x3e19999a00000000;
  *(undefined1 *)((longlong)param_1 + 0x161) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1410c92c8 FUN_1410c92c8 body=192 status=ok
// SIG undefined FUN_1410c92c8(void)

void FUN_1410c92c8(undefined8 *param_1)

{
  *param_1 = 0x4000000000000000;
  param_1[1] = 0x3ff0000000000000;
  param_1[2] = 0;
  param_1[3] = 0x41f0000041a00000;
  param_1[4] = 0x4641a00000;
  param_1[5] = 0x447a000044fa0000;
  *(undefined4 *)(param_1 + 6) = 0x1010100;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0x3f80000040000000;
  param_1[10] = 0x3f800000447a0000;
  param_1[0xb] = 0x41a0000041a00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x7fefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0x7fefffffffffffff;
  param_1[0x11] = 0xffefffffffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0x41f00000;
  return;
}



// FUNCTION 1410c9394 FUN_1410c9394 body=256 status=ok
// SIG undefined FUN_1410c9394(void)

undefined8 * FUN_1410c9394(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b96638();
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x4000;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *param_1 = &PTR_FUN_14b096a60;
  param_1[5] = &PTR_FUN_14b0970d0;
  param_1[6] = &PTR_LAB_14b097110;
  FUN_140440628(local_50,&DAT_14cb81b58,1);
  FUN_1403719a4(param_1 + 0x6b,local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_48[0];
    if (local_30 < 0x19) {
      ppppuVar2 = local_48;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410c949a FUN_1410c949a body=228 status=ok
// SIG undefined FUN_1410c949a(void)

longlong FUN_1410c949a(void)

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
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caccba8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1463a8d7c;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147938587;
    local_40 = &LAB_145908857;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"BlendProfile",&DAT_14caccba8,&DAT_147938586);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caccba8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c9586 FUN_1410c9586 body=228 status=ok
// SIG undefined FUN_1410c9586(void)

longlong FUN_1410c9586(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14654aeb8;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148685489;
    local_40 = &LAB_1461b4e3e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1360;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDangerZone",&DAT_14cb5c430,FUN_1464d5434);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c966c FUN_1410c966c body=126 status=ok
// SIG undefined FUN_1410c966c(void)

void FUN_1410c966c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149e2c060;
  FUN_140679a12();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c867d48);
  FUN_140679996();
  local_20 = &local_28;
  local_28 = param_1;
  FUN_1410c96ec(&DAT_14c867d78);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c867d48);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c96ec FUN_1410c96ec body=226 status=ok
// SIG undefined FUN_1410c96ec(void)

int FUN_1410c96ec(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  
  iVar3 = (int)param_1[9];
  lVar4 = (longlong)iVar3;
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1;
    }
    iVar2 = 0;
    bVar5 = *plVar10 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar1 = iVar7 + 1;
      if (iVar7 + 1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar1;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar5 == (plVar10[lVar6] == *(longlong *)*param_2));
      if (bVar5 == false) {
        if (iVar2 != iVar7) {
          memmove(plVar10 + iVar2,plVar10 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar2 = iVar2 + (iVar9 - iVar7);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 9) = iVar2;
    iVar3 = iVar3 - iVar2;
  }
  return iVar3;
}



// FUNCTION 1410c97ce FUN_1410c97ce body=247 status=ok
// SIG undefined FUN_1410c97ce(void)

void FUN_1410c97ce(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if ((char)param_1[-0xea] == '\x03') {
    *(byte *)((longlong)param_1 + 0x16c) = *(byte *)((longlong)param_1 + 0x16c) & 0xfe;
  }
  FUN_1447f69b6(param_1 + 0x5a);
  if ((char)param_1[-0xea] == '\x03') {
    *(undefined1 *)(param_1 + 0x83) = 0;
    if (param_2 == '\0') {
      if (0.0 < *(float *)(param_1 + 0x75)) {
        lVar1 = FUN_1447210f0(param_1 + -0x119);
        *(float *)((longlong)param_1 + 0x3ac) =
             (float)(*(double *)(lVar1 + 0x6d0) - (double)*(float *)(param_1 + 0x75));
        *(undefined4 *)(param_1 + 0x75) = 0xbf800000;
      }
      FUN_1410c98c6(param_1 + -0x119,(char)param_1[0x73]);
      return;
    }
    if ((*(byte *)(param_1 + 0x1b) & 2) != 0) {
      (**(code **)(*param_1 + 0x80))(param_1);
    }
    if (((char)param_1[0x73] != '\0') && (lVar1 = param_1[0x55], lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001410c98b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x10e0) + 0x30))(lVar1 + 0x10e0);
      return;
    }
  }
  return;
}



// FUNCTION 1410c98c6 FUN_1410c98c6 body=326 status=ok
// SIG undefined FUN_1410c98c6(void)

void FUN_1410c98c6(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int7 iVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((char)param_2 != '\0') &&
     (plVar4 = *(longlong **)(param_1 + 0xb70), plVar4 != (longlong *)0x0)) {
    uVar3 = FUN_1407ca880();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1407ca880();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
        lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
        if (lVar6 != 0) {
          FUN_140dc01da(lVar6,&local_30,param_2);
          if (local_30 != 0) {
            lVar6 = *(longlong *)(local_30 + 0x30);
            lVar7 = FUN_140ed0e8c();
            plVar4 = local_28;
            lVar6 = *(longlong *)(lVar6 + 0x10);
            iVar2 = *(int *)(lVar7 + 0x38);
            if ((iVar2 <= *(int *)(lVar6 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar2 * 8) == lVar7 + 0x30)) {
              iVar8 = (int7)(int3)((uint)iVar2 >> 8);
              if (local_28 == (longlong *)0x0) {
                FUN_1410c9a0e(local_30,CONCAT71(iVar8,1));
              }
              else {
                LOCK();
                *(int *)(local_28 + 1) = (int)local_28[1] + 1;
                UNLOCK();
                FUN_1410c9a0e(local_30,CONCAT71(iVar8,1));
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
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_28 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar1 = (int *)((longlong)local_28 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_28 + 0x10))(local_28);
              }
            }
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c9a0e FUN_1410c9a0e body=225 status=ok
// SIG undefined FUN_1410c9a0e(void)

void FUN_1410c9a0e(longlong param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x159) == '\0') {
    if ((param_2 != '\0') && (*(byte *)(param_1 + 0x120) < 2)) {
      cVar2 = FUN_1410c9af0(param_1);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x15a) = 1;
        goto LAB_1410c9a2c;
      }
    }
    *(undefined2 *)(param_1 + 0x159) = 1;
    puVar3 = &local_40;
    local_28 = 4;
    local_40 = 1;
    local_20 = 1;
    FUN_1408834b4(param_1,&DAT_14cb8cf18,puVar3);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_28) {
        puVar3 = (undefined4 *)CONCAT44(uStack_3c,local_40);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(CONCAT44(uStack_3c,local_40));
    }
  }
LAB_1410c9a2c:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c9af0 FUN_1410c9af0 body=136 status=ok
// SIG undefined FUN_1410c9af0(void)

bool FUN_1410c9af0(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  
  bVar2 = true;
  if (0.0001 <= *(float *)(param_1[0x2c] + 0x388)) {
    if (1.0 <= *(float *)(param_1[0x2c] + 0x388)) {
      bVar2 = false;
    }
    else {
      fVar4 = (float)(**(code **)(*param_1 + 0x28))();
      fVar1 = *(float *)(param_1[0x2c] + 0x388);
      lVar3 = FUN_1447210f0(param_1[7]);
      if (lVar3 == 0) {
        dVar5 = 0.0;
      }
      else {
        dVar5 = *(double *)(lVar3 + 0x6d0);
      }
      bVar2 = fVar4 * fVar1 < (float)(dVar5 - (double)param_1[0x25]);
    }
  }
  return bVar2;
}



// FUNCTION 1410c9b78 FUN_1410c9b78 body=547 status=ok
// SIG undefined FUN_1410c9b78(void)

void FUN_1410c9b78(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + -0x750) == '\x03') {
    *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | 1;
  }
  FUN_1447f69b6(param_1 + 0x2b8);
  if ((*(char *)(param_1 + 0x398) == '\0') && (*(char *)(param_1 + -0x750) == '\x03')) {
    lVar1 = param_1 + -0x8c8;
    if ((*(byte *)(param_1 + 0x399) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x3c0) = 0;
      if ((*(int *)(param_1 + 0x274) < 2) || ((*(int *)(param_1 + 0x27c) < 1 & (param_2 ^ 1)) == 0))
      {
        *(undefined1 *)(param_1 + 0x16e) = 1;
        local_b8 = (undefined2 *)CONCAT71(local_b8._1_7_,param_2);
        uVar4 = FUN_1410c9d9c(lVar1,DAT_14cbcb940);
        *(undefined1 *)(param_1 + 0x398) = uVar4;
      }
    }
    else {
      lVar5 = FUN_14011c349();
      *(undefined1 *)(param_1 + 0x418) = 1;
      *(byte *)(param_1 + 0x399) = *(byte *)(param_1 + 0x399) & 0xfd | param_2 * '\x02';
      uVar6 = FUN_1401b4c98(lVar1);
      uVar2 = *(undefined4 *)(lVar5 + 0x80c);
      local_b0 = (undefined8 *)0x0;
      local_a8 = 0;
      FUN_1446efa72(&local_b0,0,3,0x10);
      puVar3 = local_b0;
      local_a8 = 3;
      *local_b0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_b0[2] = lVar7;
      *local_b0 = &PTR_FUN_14b977b00;
      local_b0[3] = 0;
      FUN_14485c47a(local_b0 + 3,lVar1);
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar3[4] = FUN_148d57890;
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b0);
      local_58 = 1;
      local_b8 = local_a0;
      local_a0[0] = 0;
      local_9c = 0xbf800000;
      FUN_1406f4044(uVar6,param_1 + 0x3a0,&local_98,uVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      FUN_1449db362(&local_b0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c9d9c FUN_1410c9d9c body=305 status=ok
// SIG undefined FUN_1410c9d9c(void)

undefined4
FUN_1410c9d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  uint *local_b0;
  undefined1 local_a4 [4];
  uint local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
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
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  puVar3 = &local_a0;
  local_88 = 4;
  local_a0 = (uint)param_5;
  local_80 = 1;
  local_b8 = &DAT_14cbcbb88;
  local_b0 = puVar3;
  FUN_140881f5a(&local_78,local_a4,&local_b8,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar3 = (uint *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  uVar2 = FUN_1410c9ece(param_1,param_2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_78);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410c9ece FUN_1410c9ece body=949 status=ok
// SIG undefined FUN_1410c9ece(void)

undefined4 FUN_1410c9ece(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = *(longlong *)(param_1 + 0xb70);
  if (lVar11 == 0) {
    uVar6 = 0;
    goto LAB_1410ca104;
  }
  local_70 = 0;
  local_78 = param_3;
  uVar6 = (**(code **)(*(longlong *)(lVar11 + 0x3ae0) + 0x20))
                    (lVar11 + 0x3ae0,param_2,*(undefined8 *)(param_1 + 0x920),param_1);
  FUN_140dc01da(*(longlong *)(param_1 + 0xb70) + 0x1508,&local_68,uVar6);
  if (local_68 != 0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    plVar1 = local_58;
    local_50 = 3;
    *local_58 = (longlong)&PTR_LAB_14b3e9c20;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_58[2] = lVar8;
    *local_58 = (longlong)&PTR_FUN_14b977c90;
    local_58[3] = 0;
    iVar9 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar9 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar9 = *(int *)(lVar11 + 0x10);
        bVar12 = iVar9 == 0;
        if (bVar12) {
          *(int *)(lVar11 + 0x10) = iVar7;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar9 = iVar7;
        }
      }
    }
    *(int *)((longlong)plVar1 + 0x1c) = iVar9;
    plVar1[4] = (longlong)FUN_1410ab39c;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
       (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
      if (local_50 == 0) goto LAB_1410ca0d6;
      if (local_58 != (longlong *)0x0) {
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        goto LAB_1410ca0c9;
      }
    }
    else {
      plVar1 = (longlong *)(local_68 + 0x18);
      if (*(int *)(local_68 + 0x2c) < 1) {
        iVar9 = *(int *)(local_68 + 0x20);
        iVar7 = *(int *)(local_68 + 0x28) + -1;
        *(int *)(local_68 + 0x28) = iVar7;
        if (iVar7 <= iVar9) {
          iVar7 = iVar9;
          if (0 < iVar9) {
            iVar10 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar1,iVar10);
                FUN_14005b248(plVar1);
              }
              else {
                iVar10 = iVar10 + 1;
              }
              iVar7 = *(int *)(local_68 + 0x20);
            } while (iVar10 < iVar7);
          }
          iVar10 = 2;
          if (2 < iVar7 * 2) {
            iVar10 = iVar7 * 2;
          }
          *(int *)(local_68 + 0x28) = iVar10;
          if ((iVar10 < iVar9) && (*(int *)(local_68 + 0x24) != iVar7)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
        (**(code **)(*local_58 + 0x38))(local_58,local_48);
      }
      iVar9 = *(int *)(local_68 + 0x20);
      *(uint *)(local_68 + 0x20) = iVar9 + 1U;
      if (*(uint *)(local_68 + 0x24) < iVar9 + 1U) {
        FUN_1447a71f6(plVar1,iVar9);
      }
      lVar11 = *plVar1;
      lVar8 = (longlong)iVar9 * 0x10;
      *(undefined8 *)(lVar11 + lVar8) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar8) = 0;
      *(longlong **)(lVar11 + lVar8) = local_58;
      local_58 = (longlong *)0x0;
      *(int *)(lVar11 + 8 + lVar8) = local_50;
LAB_1410ca0c9:
      local_50 = 0;
LAB_1410ca0d6:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1447f69b6(*(longlong *)(param_1 + 0xb70) + 0x6060);
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
LAB_1410ca104:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1410ca284 FUN_1410ca284 body=5832 status=ok
// SIG undefined FUN_1410ca284(void)

void FUN_1410ca284(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  ushort *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  char cVar25;
  longlong lVar26;
  int iVar27;
  undefined8 *puVar28;
  longlong lVar29;
  undefined4 *puVar30;
  uint uVar31;
  uint uVar32;
  longlong *plVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  code *local_2c0;
  undefined1 *local_2b8;
  undefined8 *local_2b0;
  code *local_2a8;
  code *local_2a0;
  undefined1 local_293;
  undefined1 local_292;
  undefined1 local_291;
  longlong local_290;
  uint local_288;
  int local_284;
  ulonglong local_280;
  longlong local_278;
  longlong *local_270;
  int local_264;
  undefined4 local_260;
  undefined4 local_25c;
  longlong *local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong *local_228;
  undefined8 uStack_220;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 local_1ed;
  int local_1ec;
  undefined8 local_1e8;
  uint local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int iStack_1b4;
  float fStack_1b0;
  int iStack_1ac;
  undefined4 uStack_1a8;
  float local_1a4;
  undefined1 local_1a0;
  char local_19f;
  float local_19c;
  undefined1 local_198;
  char local_197;
  uint local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  float local_174;
  undefined1 local_170;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  undefined8 local_158 [5];
  undefined8 local_130;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  byte bStack_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  float fStack_c4;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  longlong local_bd;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = (longlong *)0x0;
  uStack_220 = 0;
  local_270 = *(longlong **)(param_1 + 0x38);
  lVar26 = local_270[0xa9];
  local_290 = lVar26;
  local_278 = param_1;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x68);
    local_258 = plVar21 + (longlong)*(int *)(param_1 + 0x70) * 3;
    do {
      uVar6 = *(ushort *)(plVar21 + 1);
      lVar26 = *(longlong *)(local_290 + 8);
      uVar7 = *(ushort *)(lVar26 + 0x122 + (ulonglong)uVar6 * 0x128);
      if (*plVar21 == 0) {
LAB_1410cae16:
        lVar19 = 0;
      }
      else {
        lVar12 = FUN_1410cba2a();
        lVar20 = *plVar21;
        if ((lVar20 == 0) || (lVar12 == 0)) goto LAB_1410cae16;
        lVar17 = *(longlong *)(lVar20 + 0x10);
        lVar19 = 0;
        if (lVar17 != 0) {
          if (*(int *)(lVar17 + 0x38) < *(int *)(lVar12 + 0x38)) goto LAB_1410cae16;
          lVar19 = lVar20;
          if (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
              lVar12 + 0x30) {
            lVar19 = 0;
          }
        }
      }
      lVar12 = (ulonglong)uVar6 * 0x128 + lVar26;
      local_238 = *(longlong *)(lVar19 + 0x124);
      local_248 = *(undefined8 *)(lVar19 + 0x114);
      uStack_240 = *(undefined8 *)(lVar19 + 0x11c);
      puVar24 = (undefined8 *)(lVar19 + 0x130);
      puVar28 = local_158;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar28 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar28 = puVar28 + 1;
      }
      uVar4 = *(undefined1 *)(lVar19 + 400);
      iVar18 = *(int *)(lVar19 + 0xb0);
      if (iVar18 < 1) {
        cVar10 = '\0';
      }
      else if (*(char *)(lVar19 + 0x98) == '\x02') {
        cVar10 = '\0';
      }
      else {
        FUN_14073c474(lVar19,&local_1e8);
        local_1dc = local_1e8._4_4_;
        iVar18 = local_1e8._4_4_ - iVar18;
        local_1e8 = (code *)CONCAT71(local_1e8._1_7_,1);
        local_1e8 = (code *)CONCAT44(iVar18,(undefined4)local_1e8);
        local_1e0 = local_1e0 & 0xffffff00;
        local_d0._0_4_ = *(int *)(lVar12 + 0x8c);
        if (SBORROW4(0,(int)local_d0)) {
          lVar20 = lVar12 + 4;
          if (*(int *)(lVar12 + 0x88) == 0) {
            lVar20 = lVar12 + 0x10;
          }
          local_d0._0_4_ = *(int *)(lVar20 + 0x68);
        }
        cVar10 = FUN_1400a246c(&local_1e8);
      }
      uVar23 = uStack_210;
      if ((cVar10 == '\0') && ((*(byte *)(lVar12 + 0xe4) & 0x14) == 0)) {
        lVar20 = FUN_1410cbb10();
        if (DAT_14c951858 == 0) {
          local_1e8 = FUN_1449e2820;
          local_2a0 = FUN_14081d0ea;
          local_2a8 = FUN_14081d0ea;
          local_2b0 = &local_1e8;
          local_2b8 = &LAB_1468c5283;
          local_2c0 = FUN_142809da0;
          local_2c8 = L"Engine";
          local_2d0 = 0x400000000;
          local_2d8 = 0x10000000;
          local_2e0 = 8;
          local_2e8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar17 = *(longlong *)(lVar19 + 0x20);
        if (lVar17 == 0) {
          lVar29 = 0;
        }
        else {
          do {
            if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar20 + 0x38)) ||
               (lVar29 = lVar17,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar20 + 0x38) * 8) != lVar20 + 0x30)) {
              lVar29 = 0;
            }
          } while ((lVar29 == 0) && (lVar17 = *(longlong *)(lVar17 + 0x20), lVar17 != 0));
        }
        FUN_14087ad3e(lVar12 + 0x90,&local_1e8);
        uVar35 = *(undefined4 *)(lVar12 + 0x110);
        local_250 = *plVar21;
        if ((local_250 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_250);
        }
        local_164 = CONCAT31(local_164._1_3_,*(undefined1 *)((longlong)plVar21 + 0xc));
        local_168 = (undefined4)plVar21[1];
        local_bd = local_238;
        local_d0._3_1_ = (undefined1)local_248;
        local_d0._4_4_ = (undefined4)((ulonglong)local_248 >> 8);
        bStack_c8 = (byte)((ulonglong)local_248 >> 0x28);
        uStack_c7 = (undefined2)((ulonglong)local_248 >> 0x30);
        uStack_c5 = (undefined1)uStack_240;
        fStack_c4 = (float)((ulonglong)uStack_240 >> 8);
        uStack_c0 = (undefined1)((ulonglong)uStack_240 >> 0x28);
        uStack_bf = (undefined1)((ulonglong)uStack_240 >> 0x30);
        uStack_be = (undefined1)((ulonglong)uStack_240 >> 0x38);
        local_291 = *(undefined1 *)(lVar29 + 0xf8);
        local_284 = *(int *)(lVar12 + 0x8c);
        local_25c = DAT_14cab5ff4;
        if (SBORROW4(0,local_284)) {
          lVar20 = lVar12 + 4;
          if (*(int *)(lVar12 + 0x88) == 0) {
            lVar20 = lVar12 + 0x10;
          }
          local_284 = *(int *)(lVar20 + 0x68);
          uVar37 = *(undefined4 *)(lVar20 + 0x6c);
        }
        else {
          uVar37 = 0;
        }
        FUN_14073c474(lVar19,&local_208);
        iVar18 = -0x7fffffff;
        if ((char)local_208 != '\x02') {
          iVar18 = local_208._4_4_;
        }
        local_288 = 0x7fffffff;
        if ((char)uStack_200 != '\x02') {
          local_288 = uStack_200._4_4_;
        }
        lVar26 = lVar26 + (ulonglong)uVar7 * 0x128;
        local_260 = uVar35;
        if (*(char *)(lVar19 + 0x98) == '\x02') {
LAB_1410ca5a6:
          cVar10 = '\0';
          fVar38 = -1.0;
          iVar27 = iVar18;
        }
        else {
          lVar20 = lVar19 + 0x1c;
          if (*(char *)(lVar19 + 0x78) == '\0') {
            lVar20 = lVar19;
          }
          if (*(int *)(lVar20 + 0x60) < 1) goto LAB_1410ca5a6;
          iVar27 = *(int *)(lVar20 + 0x60) + iVar18;
          FUN_1405bacee(&local_1e8,&local_e0,iVar18);
          FUN_1405bacee(&local_1e8,&local_f0,iVar27);
          fVar38 = -1.0;
          if (((char)local_d8 == '\x01') && ((char)local_e8 == '\x01')) {
            lVar20 = *(longlong *)(lVar26 + 0x80);
            fVar38 = local_f0._4_4_ - local_e0._4_4_;
            auVar36 = roundps(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38),1);
            fVar38 = (fVar38 - auVar36._0_4_) + 0.5 + -0.5;
            if (0.99999994 <= fVar38) {
              fVar38 = 0.99999994;
            }
            if (fVar38 <= 0.0) {
              fVar38 = 0.0;
            }
            fVar38 = ((float)((lVar20 >> 0x20) *
                             (longlong)((int)auVar36._0_4_ + ((int)local_f0 - (int)local_e0))) +
                     (float)(int)((ulonglong)lVar20 >> 0x20) * fVar38) / (float)(int)lVar20;
            lVar20 = *(longlong *)(lVar19 + 0x68);
            if (lVar20 == 0) goto LAB_1410cb23e;
            lVar17 = FUN_1406ed582();
            if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) goto LAB_1410cb23e;
            local_292 = *(undefined1 *)(lVar20 + 0x30);
            cVar10 = '\x01';
          }
          else {
LAB_1410cb23e:
            cVar10 = '\0';
          }
        }
        uVar11 = local_288;
        uVar23 = 0;
        local_264 = iVar18;
        if (*(char *)(lVar19 + 0xa0) == '\x02') {
          fVar39 = -1.0;
          local_280 = (ulonglong)local_288;
LAB_1410cb25d:
          cVar25 = '\0';
        }
        else {
          lVar20 = lVar19 + 4;
          if (*(char *)(lVar19 + 0x90) != '\0') {
            lVar20 = lVar19 + 0x34;
          }
          if (0 < *(int *)(lVar20 + 0x60)) {
            local_280 = (ulonglong)(local_288 - *(int *)(lVar20 + 0x60));
            FUN_1405bacee(&local_1e8,&local_e0);
            FUN_1405bacee(&local_1e8,&local_f0,uVar11);
            fVar39 = -1.0;
            if (((char)local_d8 == '\x01') && ((char)local_e8 == '\x01')) {
              lVar26 = *(longlong *)(lVar26 + 0x80);
              fVar39 = local_f0._4_4_ - local_e0._4_4_;
              auVar36 = roundps(ZEXT416((uint)fVar39),ZEXT416((uint)fVar39),1);
              fVar39 = (fVar39 - auVar36._0_4_) + 0.5 + -0.5;
              if (0.99999994 <= fVar39) {
                fVar39 = 0.99999994;
              }
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = ((float)((lVar26 >> 0x20) *
                               (longlong)((int)auVar36._0_4_ + ((int)local_f0 - (int)local_e0))) +
                       (float)(int)((ulonglong)lVar26 >> 0x20) * fVar39) / (float)(int)lVar26;
              lVar26 = *(longlong *)(lVar19 + 0x80);
              if (lVar26 != 0) {
                lVar20 = FUN_1406ed582();
                if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar26 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar20 + 0x38) * 8) == lVar20 + 0x30)) {
                  local_293 = *(undefined1 *)(lVar26 + 0x30);
                  cVar25 = '\x01';
                  goto LAB_1410ca5f5;
                }
              }
            }
            goto LAB_1410cb25d;
          }
          cVar25 = '\0';
          fVar39 = -1.0;
          local_280 = (ulonglong)local_288;
        }
LAB_1410ca5f5:
        uVar4 = *(undefined1 *)(lVar19 + 0x100);
        uVar11 = *(uint *)(lVar12 + 0x8c);
        if (SBORROW4(0,uVar11)) {
          lVar26 = lVar12 + 4;
          if (*(int *)(lVar12 + 0x88) == 0) {
            lVar26 = lVar12 + 0x10;
          }
          uVar11 = *(uint *)(lVar26 + 0x68);
          uVar23 = (ulonglong)*(uint *)(lVar26 + 0x6c);
        }
        uVar35 = FUN_140cf0978(lVar19,(ulonglong)uVar11 | uVar23 << 0x20);
        uVar23 = uStack_220;
        lVar26 = (longlong)(int)uStack_220;
        uVar11 = (int)uStack_220 + 1;
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar11);
        if (uStack_220._4_4_ < uVar11) {
          FUN_1410cc03e(&local_228,uVar23 & 0xffffffff);
        }
        plVar33 = local_228;
        local_228[lVar26 * 0x10] = local_250;
        if ((local_250 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        *(undefined1 *)((longlong)plVar33 + lVar26 * 0x80 + 0xc) = (undefined1)local_164;
        *(undefined4 *)(plVar33 + lVar26 * 0x10 + 1) = local_168;
        plVar33[lVar26 * 0x10 + 2] =
             CONCAT26(uStack_c7,CONCAT15(bStack_c8,CONCAT41(local_d0._4_4_,local_d0._3_1_)));
        plVar33[lVar26 * 0x10 + 3] =
             CONCAT17(uStack_be,
                      CONCAT16(uStack_bf,CONCAT15(uStack_c0,CONCAT41(fStack_c4,uStack_c5))));
        plVar33[lVar26 * 0x10 + 4] = local_bd;
        *(undefined4 *)(plVar33 + lVar26 * 0x10 + 5) = local_260;
        *(int *)((longlong)plVar33 + lVar26 * 0x80 + 0x2c) = local_264;
        *(int *)(plVar33 + lVar26 * 0x10 + 6) = iVar27;
        *(int *)((longlong)plVar33 + lVar26 * 0x80 + 0x34) = local_284;
        *(undefined4 *)(plVar33 + lVar26 * 0x10 + 7) = uVar37;
        *(int *)((longlong)plVar33 + lVar26 * 0x80 + 0x3c) = (int)local_280;
        *(uint *)(plVar33 + lVar26 * 0x10 + 8) = local_288;
        *(float *)((longlong)plVar33 + lVar26 * 0x80 + 0x44) = fVar38;
        *(char *)((longlong)plVar33 + lVar26 * 0x80 + 0x49) = cVar10;
        if (cVar10 != '\0') {
          *(undefined1 *)(plVar33 + lVar26 * 0x10 + 9) = local_292;
        }
        *(float *)((longlong)plVar33 + lVar26 * 0x80 + 0x4c) = fVar39;
        *(char *)((longlong)plVar33 + lVar26 * 0x80 + 0x51) = cVar25;
        if (cVar25 != '\0') {
          *(undefined1 *)(plVar33 + lVar26 * 0x10 + 10) = local_293;
        }
        *(undefined1 *)((longlong)plVar33 + lVar26 * 0x80 + 0x54) = uVar4;
        *(undefined2 *)((longlong)plVar33 + lVar26 * 0x80 + 0x55) = (undefined2)local_e0;
        *(undefined1 *)((longlong)plVar33 + lVar26 * 0x80 + 0x57) = local_e0._2_1_;
        plVar33[lVar26 * 0x10 + 0xb] = 0;
        plVar33[lVar26 * 0x10 + 0xc] = 0;
        *(undefined4 *)(plVar33 + lVar26 * 0x10 + 0xd) = local_25c;
        *(undefined8 *)((longlong)plVar33 + lVar26 * 0x80 + 0x6c) = 0xffffffffffffffff;
        *(undefined4 *)((longlong)plVar33 + lVar26 * 0x80 + 0x74) = uVar35;
        *(undefined1 *)(plVar33 + lVar26 * 0x10 + 0xf) = local_291;
        if (local_1d8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar26 = plVar21[1];
        puVar24 = local_158;
        puVar30 = (undefined4 *)((longlong)&local_1e8 + 4);
        for (lVar20 = 0x18; lVar20 != 0; lVar20 = lVar20 + -1) {
          *puVar30 = *(undefined4 *)puVar24;
          puVar24 = (undefined8 *)((longlong)puVar24 + 4);
          puVar30 = puVar30 + 1;
        }
        lVar20 = (longlong)(int)uStack_210;
        uVar11 = (int)uStack_210 + 1;
        uStack_210 = CONCAT44(uStack_210._4_4_,uVar11);
        if (uStack_210._4_4_ < uVar11) {
          FUN_1476b8d02(&local_218,uVar23 & 0xffffffff);
        }
        puVar16 = (undefined4 *)(local_218 + lVar20 * 0x90);
        *puVar16 = (int)lVar26;
        *(undefined8 *)(puVar16 + 1) = local_248;
        *(undefined8 *)(puVar16 + 3) = uStack_240;
        *(longlong *)(puVar16 + 5) = local_238;
        puVar24 = &local_1e8;
        puVar30 = puVar16 + 7;
        for (lVar26 = 0x19; lVar26 != 0; lVar26 = lVar26 + -1) {
          *puVar30 = *(undefined4 *)puVar24;
          puVar24 = (undefined8 *)((longlong)puVar24 + 4);
          puVar30 = puVar30 + 1;
        }
        *(undefined1 *)(puVar16 + 0x20) = uVar4;
      }
      lVar26 = local_290;
      plVar21 = plVar21 + 3;
    } while (plVar21 != local_258);
    if (0 < (longlong)(int)uStack_210) {
      puVar22 = (ushort *)(local_218 + (longlong)(int)uStack_210 * 0x90 + -0x90);
      FUN_1476a192a(puVar22,(ulonglong)*puVar22 * 0x128 + *(longlong *)(local_290 + 8));
    }
  }
  plVar21 = local_228;
  local_1e8 = (code *)0x0;
  local_1e0 = 0xffff;
  local_1dc = local_1dc & 0xffffff00;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = DAT_14cab5ff4;
  uStack_1c4 = 0xffffffff;
  uStack_1c0 = 0xffffffff;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  iStack_1b4 = 0;
  fStack_1b0 = 0.0;
  iStack_1ac = 0;
  uStack_1a8 = 0;
  local_1a4 = -1.0;
  local_19f = '\0';
  local_19c = -1.0;
  local_197 = '\0';
  local_194 = local_194 & 0xffffff00;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_180 = DAT_14cab5ff4;
  uStack_17c = 0xffffffff;
  uStack_178 = 0xffffffff;
  local_174 = -1.0;
  local_170 = 0;
  uVar23 = uStack_220 & 0xffffffff;
  if ((int)uStack_220 < 2) {
    if ((int)uStack_220 != 1) goto LAB_1410cacbb;
    lVar20 = *local_228;
    if (DAT_14c950c29 == 1) {
      if (lVar20 == 0) {
        lVar20 = 0;
        lVar26 = local_290;
      }
      else {
        FUN_1456cec3c();
        lVar20 = *plVar21;
        lVar26 = local_290;
      }
    }
    local_1dc = CONCAT31(local_1dc._1_3_,*(undefined1 *)((longlong)plVar21 + 0xc));
    local_1e0 = (uint)plVar21[1];
    uStack_1a8 = (undefined4)plVar21[8];
    local_1d8 = plVar21[2];
    uStack_1d0 = plVar21[3];
    uStack_1b8 = (undefined4)plVar21[6];
    iStack_1b4 = (int)((ulonglong)plVar21[6] >> 0x20);
    fStack_1b0 = (float)plVar21[7];
    iStack_1ac = (int)((ulonglong)plVar21[7] >> 0x20);
    local_1c8 = (undefined4)plVar21[4];
    uVar35 = local_1c8;
    uStack_1c4 = (undefined4)((ulonglong)plVar21[4] >> 0x20);
    uVar37 = uStack_1c4;
    uStack_1c0 = (undefined4)plVar21[5];
    uStack_1bc = (undefined4)((ulonglong)plVar21[5] >> 0x20);
    if (plVar21 == &local_1e8) {
      local_19c = *(float *)((longlong)plVar21 + 0x4c);
    }
    else {
      if (*(char *)((longlong)plVar21 + 0x49) == '\x01') {
        local_1a0 = (undefined1)plVar21[9];
        local_19f = '\x01';
        lVar26 = local_290;
      }
      else if (local_19f != '\0') {
        local_19f = '\0';
        lVar26 = local_290;
      }
      local_19c = *(float *)((longlong)plVar21 + 0x4c);
      if (*(char *)((longlong)plVar21 + 0x51) == '\x01') {
        local_198 = (undefined1)plVar21[10];
        local_197 = '\x01';
      }
      else if (local_197 == '\x01') {
        local_197 = '\0';
      }
    }
    fVar38 = local_19c;
    local_174 = (float)((ulonglong)*(undefined8 *)((longlong)plVar21 + 0x71) >> 0x18);
    local_170 = (undefined1)((ulonglong)*(undefined8 *)((longlong)plVar21 + 0x71) >> 0x38);
    uStack_184 = (undefined4)*(undefined8 *)((longlong)plVar21 + 100);
    uStack_180 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar21 + 100) >> 0x20);
    uStack_17c = (undefined4)*(undefined8 *)((longlong)plVar21 + 0x6c);
    uStack_178 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar21 + 0x6c) >> 0x20);
    local_194 = (uint)*(undefined8 *)((longlong)plVar21 + 0x54);
    uStack_190 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar21 + 0x54) >> 0x20);
    uStack_18c = (undefined4)*(undefined8 *)((longlong)plVar21 + 0x5c);
    uStack_188 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar21 + 0x5c) >> 0x20);
    local_1e8 = (code *)lVar20;
    if ((iStack_1ac < iStack_1b4) ||
       ((local_1a4 = *(float *)((longlong)plVar21 + 0x44), iStack_1ac == iStack_1b4 &&
        (0.0 < fStack_1b0)))) {
      local_174 = 1.0 - local_174;
      if (local_197 == '\0') {
        if (local_19f == '\x01') {
          local_19f = '\0';
        }
      }
      else {
        local_1a0 = local_198;
        local_19f = '\x01';
        local_197 = '\0';
      }
      local_19c = -1.0;
      uStack_190 = (undefined4)local_1d8;
      uStack_18c = (undefined4)((ulonglong)local_1d8 >> 0x20);
      uStack_188 = (undefined4)uStack_1d0;
      uStack_184 = (undefined4)((ulonglong)uStack_1d0 >> 0x20);
      uStack_178 = uStack_1c0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = DAT_14cab5ff4;
      uStack_1c4 = 0xffffffff;
      uStack_1c0 = 0xffffffff;
      lVar26 = local_290;
      local_1a4 = fVar38;
      uStack_180 = uVar35;
      uStack_17c = uVar37;
    }
  }
  else {
    iVar18 = (int)*(undefined8 *)((longlong)local_228 + 0x34);
    if ((iVar18 < (int)local_228[6]) ||
       ((fVar38 = (float)((ulonglong)*(undefined8 *)((longlong)local_228 + 0x34) >> 0x20),
        (int)local_228[6] == iVar18 && (fVar38 < 0.0)))) {
      FUN_1476a1ad2(&local_1e8,local_228);
      uStack_190 = (undefined4)plVar21[0x12];
      uStack_18c = (undefined4)((ulonglong)plVar21[0x12] >> 0x20);
      uStack_188 = (undefined4)plVar21[0x13];
      uStack_184 = (undefined4)((ulonglong)plVar21[0x13] >> 0x20);
      uStack_180 = (undefined4)plVar21[0x14];
      uStack_17c = (undefined4)((ulonglong)plVar21[0x14] >> 0x20);
      uStack_178 = (undefined4)plVar21[0x15];
      lVar26 = local_290;
    }
    else if ((*(int *)((longlong)local_228 + 0x3c) < iVar18) ||
            ((*(int *)((longlong)local_228 + 0x3c) == iVar18 && (0.0 < fVar38)))) {
      FUN_1476a1ad2(&local_1e8,local_228 + 0x10);
      uStack_190 = (undefined4)plVar21[2];
      uStack_18c = (undefined4)((ulonglong)plVar21[2] >> 0x20);
      uStack_188 = (undefined4)plVar21[3];
      uStack_184 = (undefined4)((ulonglong)plVar21[3] >> 0x20);
      uStack_180 = (undefined4)plVar21[4];
      uStack_17c = (undefined4)((ulonglong)plVar21[4] >> 0x20);
      uStack_178 = (undefined4)plVar21[5];
      local_1a4 = *(float *)((longlong)plVar21 + 0x4c);
      if ((float *)((longlong)plVar21 + 0x4c) != &local_1a4) {
        if (*(char *)((longlong)plVar21 + 0x51) == '\x01') {
          local_1a0 = (undefined1)plVar21[10];
          local_19f = '\x01';
        }
        else if (local_19f == '\x01') {
          local_19f = '\0';
        }
      }
      local_19c = -1.0;
      if (local_197 == '\x01') {
        local_197 = '\0';
      }
      local_174 = 1.0 - *(float *)((longlong)plVar21 + 0x74);
      local_194 = CONCAT31(local_194._1_3_,*(undefined1 *)((longlong)plVar21 + 0x54));
      local_170 = 1;
      lVar26 = local_290;
    }
    else {
      FUN_1476a1ad2(&local_1e8,local_228);
      lVar26 = local_290;
    }
  }
  uVar23 = uStack_220 & 0xffffffff;
  if ((int)uStack_220 < 1) goto LAB_1410cacbb;
  lVar26 = *(longlong *)(lVar26 + 8);
  lVar20 = (ulonglong)(ushort)local_1e0 * 0x128;
  local_f0 = *(undefined8 *)(lVar26 + 0x100 + lVar20);
  plVar21 = *(longlong **)(lVar26 + 0x108 + lVar20);
  if (plVar21 == (longlong *)0x0) {
    local_e8 = (longlong *)0x0;
    local_208 = local_1d8;
    uStack_200 = uStack_1d0;
    local_1f8 = CONCAT44(uStack_1c4,local_1c8);
    lVar12 = FUN_1410cbbf6();
  }
  else {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    local_1f8 = CONCAT44(uStack_1c4,local_1c8);
    local_208 = local_1d8;
    uStack_200 = uStack_1d0;
    local_e8 = plVar21;
    lVar12 = FUN_1410cbbf6();
    LOCK();
    plVar33 = plVar21 + 1;
    *(int *)plVar33 = (int)*plVar33 + -1;
    UNLOCK();
    if ((int)*plVar33 == 0) {
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
  plVar21 = local_270;
  if (lVar12 == 0) {
    if (((local_1d8._4_4_ == 0 && (int)local_1d8 == 0) && (int)uStack_1d0 == 0) &&
        uStack_1d0._4_4_ == 0) goto LAB_1410ca9b1;
  }
  else {
LAB_1410ca9b1:
    plVar33 = (longlong *)(lVar26 + lVar20);
    FUN_1410cc13e(local_158,local_270,&local_1e8);
    uVar35 = DAT_14cab6278;
    plVar21 = plVar21 + 0x86;
    FUN_1410cb974(plVar21,&local_e0);
    if (local_e0 == (longlong *)0x0) {
      plVar15 = (longlong *)FUN_14001cc68(0xd8);
      plVar15[1] = (longlong)&DAT_100000001;
      *plVar15 = (longlong)&PTR_FUN_14a4e0e60;
      plVar8 = plVar15 + 2;
      memset(plVar15 + 3,0,0xc0);
      *(undefined8 *)((longlong)plVar15 + 0x54) = 0xffffffff00000080;
      plVar15[0xf] = 0;
      plVar15[0x10] = 0;
      *(undefined8 *)((longlong)plVar15 + 0xa4) = 0xffffffff00000080;
      *(undefined8 *)((longlong)plVar15 + 0xac) = 0;
      *(undefined8 *)((longlong)plVar15 + 0xb4) = 0;
      *(undefined8 *)((longlong)plVar15 + 0xbc) = 0;
      *(undefined8 *)((longlong)plVar15 + 0xc4) = 0;
      *(undefined8 *)((longlong)plVar15 + 0xcc) = 0xffffffff00000000;
      plVar15[2] = (longlong)&PTR_FUN_14a4e0e80;
      bStack_c8 = (byte)plVar15;
      uStack_c7 = (undefined2)((ulonglong)plVar15 >> 8);
      uStack_c5 = (undefined1)((ulonglong)plVar15 >> 0x18);
      fStack_c4 = (float)((ulonglong)plVar15 >> 0x20);
      local_d0 = plVar8;
      FUN_1457fa5d4(&local_d0,plVar8);
      plVar13 = local_d8;
      local_e0 = plVar8;
      if (plVar15 == (longlong *)0x0) {
        if (local_d8 != (longlong *)0x0) {
          local_d8 = (longlong *)0x0;
LAB_1410cb8c7:
          LOCK();
          plVar8 = plVar13 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar18 = *piVar2;
            UNLOCK();
joined_r0x0001410cb905:
            if (iVar18 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        if (plVar15 == local_d8) {
          LOCK();
          plVar8 = plVar15 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar18 = *piVar2;
            UNLOCK();
            plVar13 = plVar15;
            goto joined_r0x0001410cb905;
          }
        }
        else {
          bVar34 = local_d8 != (longlong *)0x0;
          local_d8 = plVar15;
          if (bVar34) goto LAB_1410cb8c7;
        }
      }
      plVar8 = (longlong *)CONCAT44(fStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,bStack_c8)));
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      plVar8 = local_e0;
      (**(code **)(*local_e0 + 0x10))(local_e0,uVar35,plVar21);
      local_d0._0_4_ = (int)plVar8;
      local_d0._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
      bStack_c8 = (byte)local_d8;
      uStack_c7 = (undefined2)((ulonglong)local_d8 >> 8);
      uStack_c5 = (undefined1)((ulonglong)local_d8 >> 0x18);
      fStack_c4 = (float)((ulonglong)local_d8 >> 0x20);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
      FUN_1457fa676(plVar21,uVar35);
    }
    lVar26 = plVar33[0x20];
    plVar21 = (longlong *)plVar33[0x21];
    if (plVar21 == (longlong *)0x0) {
      uVar14 = FUN_14479d2ce(lVar26 + 0x18);
    }
    else {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      if (*(int *)(lVar26 + 0x1c) == 0) {
LAB_1410cad54:
        uVar14 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar26 + 0x18);
        uVar14 = 0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          puVar24 = (undefined8 *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((puVar24 == (undefined8 *)0x0) ||
             ((*(int *)(puVar24 + 2) != *(int *)(lVar26 + 0x1c) ||
              ((*(uint *)(puVar24 + 1) & 0x10200000) != 0)))) goto LAB_1410cad54;
          uVar14 = *puVar24;
        }
      }
      LOCK();
      plVar8 = plVar21 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    plVar8 = local_e0;
    local_1ed = 0;
    plVar21 = local_e0 + 3;
    if ((int)local_e0[4] != *(int *)((longlong)local_e0 + 0x4c)) {
      plVar13 = local_e0 + 10;
      if ((longlong *)local_e0[0xb] != (longlong *)0x0) {
        plVar13 = (longlong *)local_e0[0xb];
      }
      iVar18 = (int)*plVar13;
      if (iVar18 != -1) {
        lVar26 = *plVar21;
        do {
          lVar20 = lVar26 + (longlong)iVar18 * 0x10;
          if (*(char *)(lVar26 + (longlong)iVar18 * 0x10) == '\0') {
            if ((lVar20 != 0) && (local_1ec = *(int *)(lVar20 + 4), local_1ec != -1))
            goto LAB_1410caaed;
            break;
          }
          iVar18 = *(int *)(lVar20 + 8);
        } while (iVar18 != -1);
      }
    }
    FUN_1457fa26c(local_e0 + 0xd,&local_d0);
    puVar9 = (undefined1 *)CONCAT44(fStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,bStack_c8)));
    *puVar9 = 0;
    puVar9[0x20] = 0;
    puVar9[0x24] = 0;
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 0xc) = 0;
    *(undefined8 *)(puVar9 + 0x14) = 0;
    local_1ec = (int)local_d0;
    local_d0 = (longlong *)&local_1ed;
    bStack_c8 = (byte)&local_1ec;
    uStack_c7 = (undefined2)((ulonglong)&local_1ec >> 8);
    uStack_c5 = (undefined1)((ulonglong)&local_1ec >> 0x18);
    fStack_c4 = (float)((ulonglong)&local_1ec >> 0x20);
    FUN_1457fa352(plVar21,&local_168);
LAB_1410caaed:
    local_168 = 0xffffffff;
    local_164 = (undefined4)plVar8[0x18];
    local_160 = local_1ec;
    FUN_140274704(plVar8[0x16],&local_168);
    cVar10 = FUN_14115d04a(plVar8[0x16]);
    bVar5 = *(byte *)(plVar8[0xd] + 0x24 + (longlong)local_160 * 0x28);
    if (cVar10 == '\0') {
      if ((bVar5 & 1) == 0) {
LAB_1410cade6:
        FUN_1457fa734(&local_d0,uVar14);
        FUN_1457fa18a(plVar8,local_1ec,cVar10 + '\x01',&local_d0);
      }
    }
    else if (((bVar5 & 2) != 0) || ((bVar5 & 1) == 0)) {
      uVar11 = *(uint *)(plVar8 + 0x15);
      lVar26 = plVar8[0x14];
      uVar32 = 0;
      if (0 < (int)uVar11) {
        uVar32 = 0;
        uVar31 = uVar11;
        do {
          uVar3 = (uVar31 >> 1) + uVar32;
          if (*(int *)(lVar26 + (ulonglong)uVar3 * 0x24) < local_160) {
            uVar32 = uVar3 + (uVar31 & 1);
          }
          bVar34 = 1 < uVar31;
          uVar31 = uVar31 >> 1;
        } while (bVar34);
      }
      if ((((int)uVar11 <= (int)uVar32) || (local_160 < *(int *)(lVar26 + (ulonglong)uVar32 * 0x24))
          ) || (lVar26 + (ulonglong)uVar32 * 0x24 == -4)) goto LAB_1410cade6;
    }
    plVar21 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_d8)();
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))();
        }
      }
    }
    fVar38 = local_1a4;
    lVar26 = local_278;
    local_d0._0_4_ = 0;
    local_d0._4_4_ = 0;
    bStack_c8 = *(byte *)((longlong)plVar33 + 0xe4) & 1;
    fStack_c4 = local_1a4;
    uStack_bf = local_19f == '\x01';
    if ((bool)uStack_bf) {
      uStack_c0 = local_1a0;
    }
    puVar1 = (uint *)(local_278 + 0x50);
    uStack_be = (undefined1)local_194;
    if (*(int *)(local_278 + 0x54) == 0) {
LAB_1410cad4d:
      lVar20 = 0;
    }
    else {
      uVar11 = *puVar1;
      lVar20 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar21 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar21 == (longlong *)0x0) ||
           (((int)plVar21[2] != *(int *)(local_278 + 0x54) ||
            ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))) goto LAB_1410cad4d;
        lVar20 = *plVar21;
      }
    }
    if (lVar20 == lVar12) {
      lVar20 = *(longlong *)(local_278 + 0x58);
      if ((lVar20 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar20);
      }
      if ((local_1e8 != (code *)lVar20) || (local_1e0 != *(int *)(lVar26 + 0x60)))
      goto LAB_1410cad5b;
      if ((lVar12 != 0) || (0.0 < fVar38)) {
        local_e0 = local_270;
        local_d8 = plVar33;
        FUN_1410cc272(&local_e0,lVar12,&local_d0);
      }
    }
    else {
LAB_1410cad5b:
      uVar14 = FUN_14479d2ce(puVar1);
      local_d0._0_4_ = (int)uVar14;
      local_d0._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
      local_e0 = local_270;
      local_d8 = plVar33;
      FUN_1410cc272(&local_e0,lVar12);
      FUN_14485c47a(puVar1,lVar12);
      lVar20 = (longlong)local_1e8;
      if (DAT_14c950c29 == 1) {
        if (local_1e8 == (code *)0x0) {
          lVar20 = 0;
          lVar26 = local_278;
        }
        else {
          FUN_1456cec3c();
          lVar20 = (longlong)local_1e8;
          lVar26 = local_278;
        }
      }
      *(longlong *)(lVar26 + 0x58) = lVar20;
      *(uint *)(lVar26 + 0x60) = local_1e0;
      *(undefined1 *)(lVar26 + 100) = (undefined1)local_1dc;
    }
    *(undefined8 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8) =
         local_130;
  }
  uVar23 = uStack_220 & 0xffffffff;
LAB_1410cacbb:
  FUN_1410cb94d(local_228,uVar23);
  if (local_228 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cb94d FUN_1410cb94d body=39 status=ok
// SIG undefined FUN_1410cb94d(void)

void FUN_1410cb94d(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x51);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-8] == '\x01') {
        pcVar1[-8] = '\0';
      }
      pcVar1 = pcVar1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410cb974 FUN_1410cb974 body=181 status=ok
// SIG undefined FUN_1410cb974(void)

undefined8 * FUN_1410cb974(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1410cba03;
    }
  }
  uVar6 = 0;
LAB_1410cba03:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1410cba2a FUN_1410cba2a body=228 status=ok
// SIG undefined FUN_1410cba2a(void)

longlong FUN_1410cba2a(void)

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
  if (DAT_14cab4e18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_1475c42fd;
    local_40 = &LAB_145aa47fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneCameraCutSection",&DAT_14cab4e18,
                  FUN_1463476ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4e18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cbb10 FUN_1410cbb10 body=228 status=ok
// SIG undefined FUN_1410cbb10(void)

longlong FUN_1410cbb10(void)

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
  if (DAT_14cab6420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1476bb8b3;
    local_40 = FUN_14634cc9e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneCameraCutTrack",&DAT_14cab6420,
                  &DAT_1476bb8b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cbbf6 FUN_1410cbbf6 body=225 status=ok
// SIG undefined FUN_1410cbbf6(void)

undefined8 FUN_1410cbbf6(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  uint *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1410cbcd8(param_1,&local_28,*param_2,&local_38);
  if (0 < local_20) {
    if (local_28[1] != 0) {
      uVar3 = *local_28;
      uVar6 = 0;
      if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1410cbc8b;
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar5 != (undefined8 *)0x0) &&
         ((*(uint *)(puVar5 + 2) == local_28[1] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
        uVar6 = *puVar5;
        goto LAB_1410cbc8b;
      }
    }
  }
  uVar6 = 0;
LAB_1410cbc8b:
  plVar4 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cbcd8 FUN_1410cbcd8 body=272 status=ok
// SIG undefined FUN_1410cbcd8(void)

undefined8 * FUN_1410cbcd8(int *param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_1[1] != 0 || *param_1 != 0) || param_1[2] != 0) || param_1[3] != 0) {
    lVar4 = FUN_1405e0c42(*param_4 + 0x38);
    if (lVar4 != 0) {
      local_48 = *param_4;
      local_40 = param_4[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_1410cbdea(param_1,local_34,param_3,&local_48);
      local_58 = *param_4;
      local_50 = param_4[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      local_68 = &local_58;
      FUN_1401abfd8(lVar4,param_2,param_1,local_34);
      goto LAB_1410cbd8c;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
LAB_1410cbd8c:
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cbdea FUN_1410cbdea body=182 status=ok
// SIG undefined FUN_1410cbdea(void)

undefined4 *
FUN_1410cbdea(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == -1) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    local_28 = *param_4;
    local_20 = param_4[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
      iVar3 = *(int *)(param_1 + 0x14);
    }
    local_38 = &local_28;
    FUN_1410cbea3(param_2,param_3,iVar3);
  }
  plVar4 = (longlong *)param_4[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cbea3 FUN_1410cbea3 body=329 status=ok
// SIG undefined FUN_1410cbea3(void)

int * FUN_1410cbea3(int *param_1,int param_2,undefined4 param_3,int param_4,longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [64];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((DAT_14cab329c == param_2) || (*(longlong *)(*param_5 + 0x28) == 0)) ||
      (*(int *)(*param_5 + 0x34) == -1)) || (lVar5 = FUN_1400a382a(), lVar5 == 0)) {
    *param_1 = param_4;
  }
  else {
    local_50 = (undefined1 *)0x0;
    local_48 = 0x800000000;
    FUN_1400a31b8(local_90,param_2,lVar5);
    FUN_1410cbfee(local_90,param_3);
    lVar5 = (longlong)(int)local_48;
    if (lVar5 != 0) {
      puVar6 = local_90;
      if (local_50 != (undefined1 *)0x0) {
        puVar6 = local_50;
      }
      lVar7 = 0;
      do {
        iVar4 = *(int *)(puVar6 + lVar7);
        if (param_4 != 0) {
          iVar4 = FUN_144a78877(param_4);
        }
        param_4 = iVar4;
        lVar7 = lVar7 + 8;
      } while (lVar5 * 8 != lVar7);
    }
    *param_1 = param_4;
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar3 = (longlong *)param_5[1];
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410cbfee FUN_1410cbfee body=80 status=ok
// SIG undefined FUN_1410cbfee(void)

void FUN_1410cbfee(void *param_1,int param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0x48);
    iVar2 = param_2;
    if (iVar1 < param_2) {
      iVar2 = iVar1;
    }
    if (iVar2 != 0) {
      if (param_2 < iVar1) {
        _Dst = *(void **)((longlong)param_1 + 0x40);
        if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
          _Dst = param_1;
        }
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)(iVar1 - iVar2) << 3);
        iVar1 = *(int *)((longlong)param_1 + 0x48);
      }
      *(int *)((longlong)param_1 + 0x48) = iVar1 - iVar2;
    }
  }
  return;
}



// FUNCTION 1410cc03e FUN_1410cc03e body=255 status=ok
// SIG undefined FUN_1410cc03e(void)

void FUN_1410cc03e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
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
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1410cc13e FUN_1410cc13e body=308 status=ok
// SIG undefined FUN_1410cc13e(void)

longlong * FUN_1410cc13e(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *param_3;
  *param_1 = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(int *)(param_1 + 1) = (int)param_3[1];
  *(undefined1 *)(param_1 + 2) = 3;
  *(undefined4 *)(param_1 + 3) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)((longlong)param_1 + 0x1c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 4) = iVar3;
  lVar6 = *param_3;
  cVar2 = *(char *)(lVar6 + 0x59);
  if (cVar2 == '\x02') {
    uVar4 = FUN_140ce4600();
    lVar6 = FUN_144a78ede(lVar6,uVar4);
    cVar2 = *(char *)(lVar6 + 0x60);
  }
  *(bool *)(param_1 + 6) = cVar2 == '\x01';
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  param_1[5] = *(longlong *)(lVar6 + 0xec8);
  *(longlong **)(lVar6 + 0xec8) = param_1;
  return param_1;
}



// FUNCTION 1410cc272 FUN_1410cc272 body=2276 status=ok
// SIG undefined FUN_1410cc272(void)

void FUN_1410cc272(longlong *param_1,code *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  longlong *plVar16;
  bool bVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  code *local_b8;
  code *local_b0;
  uint local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  code *local_98;
  float local_90;
  undefined1 local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_7d;
  int local_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = *(code **)(param_1[1] + 0x100);
  plVar11 = *(longlong **)(param_1[1] + 0x108);
  if (plVar11 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_14332c6a0(local_78 + 0x38);
    local_70 = (longlong *)0x0;
    plVar8 = (longlong *)FUN_140165676();
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    plVar7 = (longlong *)FUN_14332c6a0(local_78 + 0x38);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_70 = plVar11;
    plVar8 = (longlong *)FUN_140165676();
    LOCK();
    plVar16 = plVar11 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  if (plVar7 == (longlong *)0x0) {
    if (plVar8 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar8 + 200))(plVar8);
      goto LAB_1410cc31b;
    }
  }
  else {
    cVar4 = (**(code **)*plVar7)(plVar7);
LAB_1410cc31b:
    if (cVar4 == '\0') goto LAB_1410cc725;
  }
  lVar9 = *(longlong *)(param_1[1] + 0x100);
  plVar11 = *(longlong **)(param_1[1] + 0x108);
  if (plVar11 == (longlong *)0x0) {
    if (((((*(int *)(lVar9 + 0x1c) == 0) || (uVar13 = *(uint *)(lVar9 + 0x18), (int)uVar13 < 0)) ||
         (DAT_14c9647dc <= (int)uVar13)) ||
        ((puVar14 = (undefined8 *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
         puVar14 == (undefined8 *)0x0 || (*(int *)(puVar14 + 2) != *(int *)(lVar9 + 0x1c))))) ||
       ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)) goto LAB_1410cc725;
    plVar16 = (longlong *)*puVar14;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    if (*(int *)(lVar9 + 0x1c) == 0) {
LAB_1410cc513:
      plVar16 = (longlong *)0x0;
    }
    else {
      uVar13 = *(uint *)(lVar9 + 0x18);
      plVar16 = (longlong *)0x0;
      if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
        puVar14 = (undefined8 *)
                  ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
        if ((puVar14 == (undefined8 *)0x0) ||
           ((*(int *)(puVar14 + 2) != *(int *)(lVar9 + 0x1c) ||
            ((*(uint *)(puVar14 + 1) & 0x10200000) != 0)))) goto LAB_1410cc513;
        plVar16 = (longlong *)*puVar14;
      }
    }
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
  if ((((plVar16 == (longlong *)0x0) ||
       (lVar9 = (**(code **)(*plVar16 + 0x180))(plVar16), lVar9 == 0)) ||
      (*(longlong *)(lVar9 + 0x1f0) == 0)) ||
     (((*(char *)(lVar9 + 0x152) == '\x02' || (*(char *)(lVar9 + 0x152) == '\x04')) ||
      (lVar9 = FUN_1410ccb57(plVar16), lVar9 == 0)))) goto LAB_1410cc725;
  local_a0 = *(longlong **)(lVar9 + 0x448);
  if ((DAT_14c950c29 == '\x01') && (local_a0 != (longlong *)0x0)) {
    FUN_1456cec3c();
  }
  else if (local_a0 == (longlong *)0x0) goto LAB_1410cc725;
  pcVar15 = (code *)local_a0[0x1d0];
  if (pcVar15 == (code *)0x0) {
    pcVar15 = (code *)local_a0[0x86];
  }
  pcVar3 = (code *)*param_3;
  if (pcVar3 != (code *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_c0 = &local_78;
      local_78 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1478c0a72;
      local_d0 = &LAB_1417b2375;
      local_d8 = L"Engine";
      local_e0 = 0x1000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(pcVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pcVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
        (param_2 == (code *)0x0)) && (pcVar3 != pcVar15)) goto LAB_1410cc725;
  }
  local_98 = pcVar15;
  if (plVar7 == (longlong *)0x0) {
    local_a8 = 0;
  }
  else {
    uVar10 = (**(code **)(*plVar7 + 0x10))(plVar7);
    local_a8 = (uint)CONCAT71((int7)((ulonglong)uVar10 >> 8),local_78._4_1_);
    local_a4 = (undefined4)local_78;
  }
  if (param_2 == (code *)0x0) {
    FUN_1410cb974(*param_1 + 0x430,&local_78,DAT_14cab6278);
    local_7d = 0;
    FUN_1476a17f8(local_78,&local_7c);
    if (local_7c == -1) {
      param_2 = (code *)0x0;
    }
    else {
      lVar12 = FUN_1476a1860();
      if (*(int *)(lVar12 + 0x14) == 0) {
LAB_1410cc909:
        param_2 = (code *)0x0;
      }
      else {
        uVar13 = *(uint *)(lVar12 + 0x10);
        param_2 = (code *)0x0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != *(int *)(lVar12 + 0x14) ||
              ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_1410cc909;
          param_2 = (code *)*plVar11;
        }
      }
      uVar13 = 0;
      if ((char)local_a8 == '\0') {
        uVar13 = local_a8 & 0xff;
      }
      bVar17 = *(char *)(lVar12 + 0x1c) != '\0';
      if (bVar17) {
        local_a4 = *(undefined4 *)(lVar12 + 0x18);
      }
      local_a8 = 1;
      if (!bVar17) {
        local_a8 = uVar13;
      }
    }
    plVar11 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_70 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (param_2 == (code *)0x0) {
LAB_1410cc560:
    pcVar15 = (code *)0x0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_c0 = &local_78;
      local_78 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1478c0a72;
      local_d0 = &LAB_1417b2375;
      local_d8 = L"Engine";
      local_e0 = 0x1000000000;
      local_e8 = 0x10000004;
      local_f0 = 8;
      local_f8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (pcVar15 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_1410cc560;
  }
  plVar11 = (longlong *)FUN_141179630(param_2);
  if (plVar11 != (longlong *)0x0) {
    param_2 = (code *)plVar11[0x15];
  }
  if (param_2 == local_98) {
    if ((char)param_3[1] == '\x01') {
      (**(code **)(*local_a0 + 0x820))();
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x600))(plVar11);
      }
      lVar9 = FUN_14634c082(*param_1);
      if (lVar9 != 0) {
        *(undefined2 *)(lVar9 + 0x91) = 0x101;
      }
    }
    goto LAB_1410cc725;
  }
  if (*(char *)((longlong)param_3 + 0x11) == '\x01') {
    uVar19 = 0x3f800000;
    fVar18 = 1.0;
    if (plVar7 != (longlong *)0x0) {
      fVar18 = (float)(**(code **)(*plVar7 + 8))(plVar7);
    }
    bVar5 = (char)param_3[2] - 4;
    if (bVar5 < 0xe) {
      uVar19 = *(undefined4 *)(&DAT_14a4e0fe8 + (ulonglong)bVar5 * 4);
      uVar6 = (&DAT_14a4e1020)[bVar5];
    }
    else {
      uVar6 = 0;
    }
    fVar18 = fVar18 * *(float *)((longlong)param_3 + 0xc);
    uVar13 = (uint)*(byte *)((longlong)param_3 + 0x12);
    if ((pcVar15 == (code *)0x0) || ((code *)local_a0[0x1d0] != pcVar15)) goto LAB_1410cc638;
  }
  else {
    fVar18 = 0.0;
    uVar6 = 1;
    uVar19 = 0x40000000;
    uVar13 = 0;
LAB_1410cc638:
    local_90 = fVar18;
    local_8c = uVar6;
    local_88 = uVar19;
    local_84 = uVar13;
    (**(code **)(*local_a0 + 0x780))(local_a0,pcVar15);
  }
  lVar12 = *(longlong *)(lVar9 + 0x430);
  if (lVar12 != 0) {
    if (DAT_14cae9568 == 0) {
      local_c0 = &local_78;
      local_78 = FUN_1417de738;
      local_b0 = (code *)&LAB_145893408;
      local_b8 = (code *)&LAB_1458cbbd2;
      local_c8 = &LAB_147ba21f1;
      local_d0 = &LAB_1463e9233;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x1000000c;
      local_f0 = 8;
      local_f8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar12 = *(longlong *)(lVar9 + 0x430);
      if (lVar12 == 0) goto LAB_1410cc6d4;
    }
    if ((((DAT_14cae9568 != 0) && (lVar9 = *(longlong *)(lVar12 + 0x10), lVar9 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30 && ((char)local_a8 != '\0')))) {
      *(char *)(lVar12 + 0xb8) = (char)local_a4;
    }
  }
LAB_1410cc6d4:
  bVar5 = *(byte *)((longlong)param_3 + 0x11) ^ 1 | *(byte *)(param_3 + 1);
  if ((plVar11 != (longlong *)0x0) && ((bVar5 & 1) != 0)) {
    (**(code **)(*plVar11 + 0x600))(plVar11);
  }
  *(uint *)(local_a0 + 0x5cb) =
       *(uint *)(local_a0 + 0x5cb) & 0xffffff7f | (uint)(pcVar15 != (code *)0x0) << 7;
  if ((bVar5 & 1) != 0) {
    (**(code **)(*local_a0 + 0x820))();
    lVar9 = FUN_14634c082(*param_1);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 0x91) = 0x101;
    }
    local_68 = 1;
    local_78 = pcVar15;
    local_70 = plVar11;
    if (plVar7 == (longlong *)0x0) {
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xd8))(plVar8,pcVar15,0,1);
      }
    }
    else {
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_78);
    }
  }
LAB_1410cc725:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ccb57 FUN_1410ccb57 body=425 status=ok
// SIG undefined FUN_1410ccb57(void)

longlong FUN_1410ccb57(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
         DAT_14cac9ca8 + 0x30)) && (lVar4 = param_1[0x2d], lVar4 != 0)) {
      lVar2 = FUN_144a75eb4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_1410ccbff;
    }
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x1f0) + 0x40);
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0x38) + lVar3);
        if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) break;
        lVar3 = lVar3 + 8;
        lVar4 = 0;
      } while (lVar2 * 8 != lVar3);
      goto LAB_1410ccbff;
    }
  }
  lVar4 = 0;
LAB_1410ccbff:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1410ccd0a FUN_1410ccd0a body=199 status=ok
// SIG undefined FUN_1410ccd0a(void)

void FUN_1410ccd0a(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b3affb0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x41700000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  *(undefined4 *)((longlong)param_1 + 0x134) = 10;
  param_1[0x27] = 0x3f80000000000000;
  param_1[0x28] = 0x3f80000000000000;
  return;
}



// FUNCTION 1410ccdd2 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ccdd8 FUN_1410ccdd8 body=12 status=ok
// SIG undefined FUN_1410ccdd8(void)

void FUN_1410ccdd8(longlong param_1)

{
  FUN_1410ccde4(param_1,*(undefined8 *)(param_1 + 0x3b0));
  return;
}



// FUNCTION 1410ccde4 FUN_1410ccde4 body=248 status=ok
// SIG undefined FUN_1410ccde4(void)

void FUN_1410ccde4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[0x76];
  if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x408), plVar2 == param_1)) {
    FUN_1410ccede(lVar1,0);
    local_38 = *(undefined8 *)(lVar1 + 0x408);
    local_40 = lVar1;
    local_30 = plVar2;
    FUN_1447cd2ec(lVar1 + 0x3f8);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x76] = param_2;
    if (param_2 == 0) goto LAB_1410cce96;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0x76] = param_2;
  }
  plVar2 = *(longlong **)(param_2 + 0x408);
  FUN_1410ccede(param_2,param_1);
  local_38 = *(undefined8 *)(param_2 + 0x408);
  local_40 = param_2;
  local_30 = plVar2;
  FUN_1447cd2ec(param_2 + 0x3f8);
LAB_1410cce96:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001410ccec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x650))(param_1,param_2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ccede FUN_1410ccede body=197 status=ok
// SIG undefined FUN_1410ccede(void)

void FUN_1410ccede(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x408);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_1410cd010(&local_30);
      FUN_1410ccfa4(lVar1 + 0x20e,param_1,local_30);
    }
    if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x408) = param_2;
      if (param_2 == 0) goto LAB_1410ccf72;
    }
    else {
      FUN_1456cec3c(param_2);
      *(longlong *)(param_1 + 0x408) = param_2;
    }
    FUN_1410cd010(&local_38);
    FUN_1410cd0d0(param_2 + 0x20e,param_1,&LAB_147ca901a,local_38);
  }
LAB_1410ccf72:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ccfa4 FUN_1410ccfa4 body=106 status=ok
// SIG undefined FUN_1410ccfa4(void)

void FUN_1410ccfa4(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_14111abfe(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x20e,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cd010 FUN_1410cd010 body=190 status=ok
// SIG undefined FUN_1410cd010(void)

undefined8 * FUN_1410cd010(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafdec4) {
    FUN_144b3d300(&DAT_14cafdec4);
    if (DAT_14cafdec4 == -1) {
      builtin_wcsncpy(local_48 + 8,L"ivateDestroyed",0xf);
      builtin_wcsncpy(local_48,L"OnPawnPr",8);
      FUN_1446f470e(&DAT_14cafdebc,local_48,1);
      _Init_thread_footer(&DAT_14cafdec4);
    }
  }
  *param_1 = DAT_14cafdebc;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cd0d0 FUN_1410cd0d0 body=392 status=ok
// SIG undefined FUN_1410cd0d0(void)

void FUN_1410cd0d0(byte *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
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
    }
    uVar5 = (ulonglong)uVar3;
    if (param_4 == 0) {
      param_4 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_4,1);
    }
  }
  local_48 = (ulonglong)uVar7 | uVar5 << 0x20;
  local_40 = param_4;
  FUN_14111abfe(param_1,&local_50);
  bVar2 = FUN_140819c20(param_1 + -0x20e,local_50,&local_48);
  *param_1 = *param_1 | bVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410cd259 FUN_1410cd259 body=1183 status=ok
// SIG undefined FUN_1410cd259(void)

void FUN_1410cd259(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined1 auStack_b8 [40];
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte local_68;
  undefined8 local_60;
  ulonglong local_50;
  
  lVar6 = DAT_14cb71b40;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cb71b40 != 0) {
    uVar5 = FUN_1409231c6();
    lVar6 = FUN_1457fadf6(lVar6,uVar5,1);
    if ((lVar6 != 0) && (lVar7 = FUN_14479d2ce(lVar6), lVar7 != 0)) {
      FUN_1457facd0(lVar7);
      puVar8 = (undefined8 *)FUN_1410cd6fa(param_1);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*puVar8;
      }
      iVar4 = FUN_144a80a00(puVar10,L"PhaseChange");
      if (iVar4 == 0) {
        FUN_1410cda56(param_1,&local_88);
        if ((LARGE_INTEGER *)(lVar6 + 0x40) == &local_88) {
          if (local_88.QuadPart != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar6 + 0x40) != 0) {
            FUN_1400020a8();
          }
          ((LARGE_INTEGER *)(lVar6 + 0x40))->s = (_struct_19)local_88;
          local_88.QuadPart = 0;
          *(undefined4 *)(lVar6 + 0x48) = uStack_80;
          *(undefined4 *)(lVar6 + 0x4c) = uStack_7c;
        }
        FUN_1412e3d1e(&local_88);
        *(DWORD *)(lVar6 + 0x20) = local_88.s.LowPart;
        *(LONG *)(lVar6 + 0x24) = local_88.s.HighPart;
        *(undefined4 *)(lVar6 + 0x28) = uStack_80;
        *(undefined4 *)(lVar6 + 0x2c) = uStack_7c;
      }
      QueryPerformanceCounter(&local_88);
      dVar3 = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
      local_88 = *(LARGE_INTEGER *)(lVar6 + 0x20);
      uStack_80 = *(undefined4 *)(lVar6 + 0x28);
      uStack_7c = *(undefined4 *)(lVar6 + 0x2c);
      local_68 = 6;
      local_60 = DAT_14cb71a30;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      FUN_1457fad26(param_1,DAT_14cb71a40,lVar6 + 0x40);
      local_88 = *(LARGE_INTEGER *)(lVar6 + 0x30);
      uStack_80 = *(undefined4 *)(lVar6 + 0x38);
      uStack_7c = *(undefined4 *)(lVar6 + 0x3c);
      local_68 = 6;
      local_60 = DAT_14cb71a60;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      uVar5 = DAT_14cb71a50;
      local_68 = 0;
      FUN_14101bd16(&local_88,*(undefined8 *)(lVar6 + 0x90));
      local_60 = uVar5;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      local_88 = (LARGE_INTEGER)(longlong)*(int *)(lVar6 + 0x7c);
      local_68 = 2;
      local_60 = DAT_14cb71a70;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      uVar5 = DAT_14cb71a80;
      pwVar12 = L"";
      if (*(int *)(lVar6 + 0x88) == 2) {
        pwVar12 = L"PlayerHosted";
      }
      pwVar11 = L"Dedicated";
      if (*(int *)(lVar6 + 0x88) != 1) {
        pwVar11 = pwVar12;
      }
      local_68 = 0;
      FUN_14101bd16(&local_88,pwVar11);
      local_60 = uVar5;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      FUN_1457fad26(param_1,DAT_14cb71a90,lVar6 + 0x50);
      local_88 = *(LARGE_INTEGER *)(lVar6 + 0x70);
      local_68 = 5;
      local_60 = DAT_14cb71aa0;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      FUN_1402160b8(&local_90);
      local_88 = local_90;
      local_68 = 5;
      local_60 = DAT_14cb71ab0;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      local_88 = (LARGE_INTEGER)(dVar3 - *(double *)(lVar6 + 0x80));
      local_68 = 3;
      local_60 = DAT_14cb71ac0;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      local_88 = (LARGE_INTEGER)(longlong)*(int *)(lVar6 + 0x98);
      local_68 = 2;
      local_60 = DAT_14cb71ad0;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      local_88 = (LARGE_INTEGER)(longlong)*(int *)(lVar6 + 0x9c);
      local_68 = 2;
      local_60 = DAT_14cb71ae0;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      local_88 = (LARGE_INTEGER)(longlong)*(int *)(lVar6 + 0xa0);
      local_68 = 2;
      local_60 = DAT_14cb71af0;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      local_88 = (LARGE_INTEGER)(longlong)*(int *)(lVar6 + 0xa4);
      local_68 = 2;
      local_60 = DAT_14cb71b00;
      FUN_1410cd700(param_1,&local_88);
      (*(code *)(&PTR_FUN_14a1842f0)[local_68])(&local_88);
      plVar9 = (longlong *)FUN_140e5a8ae();
      lVar7 = plVar9[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar1 = *plVar9;
        lVar13 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar13);
          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x38) & 4) != 0)) {
            uVar5 = FUN_1410cd812(lVar2,param_1);
            FUN_1410cd700(param_1,uVar5);
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar13);
      }
      FUN_1457fac5a();
      FUN_1457faffe(lVar6,param_1);
      *(double *)(lVar6 + 0x80) = dVar3;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410cd6fa FUN_1410cd6fa body=5 status=ok
// SIG undefined FUN_1410cd6fa(void)

longlong FUN_1410cd6fa(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 1410cd700 FUN_1410cd700 body=127 status=ok
// SIG undefined FUN_1410cd700(void)

void FUN_1410cd700(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar1 = param_1 + 0x48;
      }
      FUN_1410cd780(&local_38,lVar1 + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x60));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cd780 FUN_1410cd780 body=146 status=ok
// SIG undefined FUN_1410cd780(void)

void FUN_1410cd780(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = *param_1;
  lVar7 = *param_2;
  iVar2 = (int)param_2[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar4 = lVar6 * 0x30;
    lVar5 = lVar7;
    do {
      if (*(longlong *)(lVar5 + 0x28) == *(longlong *)(lVar3 + 0x28)) {
        if (lVar5 != 0) {
          return;
        }
        break;
      }
      lVar5 = lVar5 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_140eed74c(param_2,iVar2);
    lVar7 = *param_2;
  }
  lVar6 = lVar6 * 0x30;
  bVar1 = *(byte *)(lVar3 + 0x20);
  *(byte *)(lVar7 + 0x20 + lVar6) = bVar1;
  (*(code *)(&PTR_LAB_14a184290)[bVar1])(lVar7 + lVar6,lVar3);
  *(undefined8 *)(lVar7 + 0x28 + lVar6) = *(undefined8 *)(lVar3 + 0x28);
  return;
}



// FUNCTION 1410cd812 FUN_1410cd812 body=173 status=ok
// SIG undefined FUN_1410cd812(void)

longlong * FUN_1410cd812(longlong *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(uint *)(param_1 + 7) & 0x90) == 0x10) || ((char)param_1[5] == '\0')) &&
     ((-1 < (char)*(uint *)(param_1 + 7) || ((char)param_1[5] == '\0')))) {
    (**(code **)(*param_1 + 8))(param_1);
    if ((char)param_1[5] == '\0') {
      FUN_140056680(&local_30,&DAT_149dfb77a);
      (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 5)])(param_1 + 1);
      param_1[1] = local_30;
      *(undefined4 *)(param_1 + 2) = local_28;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_24;
      *(undefined1 *)(param_1 + 5) = 4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cd8c0 FUN_1410cd8c0 body=381 status=ok
// SIG undefined FUN_1410cd8c0(void)

longlong * FUN_1410cd8c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
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
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) &&
     ((((*(char *)(param_1 + 0x152) == '\x01' || (*(char *)(param_1 + 0x152) == '\x03')) &&
       (iVar3 = FUN_14490d72a(param_1), iVar3 != 3)) &&
      (plVar4 = *(longlong **)(param_1 + 0x1f0), plVar4 != (longlong *)0x0)))) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_1417c5d06;
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
      plVar4 = *(longlong **)(param_1 + 0x1f0);
      if (plVar4 == (longlong *)0x0) goto LAB_1410cd959;
    }
    if ((((DAT_14cb5e538 != 0) && (lVar1 = plVar4[2], lVar1 != 0)) &&
        ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
           == DAT_14cb5e538 + 0x30 &&
          (cVar2 = (**(code **)(*plVar4 + 0x490))(plVar4), cVar2 == '\0')))))) &&
       (cVar2 = FUN_1410cda3e(plVar4), cVar2 == '\0')) goto LAB_1410cd95b;
  }
LAB_1410cd959:
  plVar4 = (longlong *)0x0;
LAB_1410cd95b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1410cda3e FUN_1410cda3e body=23 status=ok
// SIG undefined FUN_1410cda3e(void)

bool FUN_1410cda3e(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x498))();
  return bVar1 < 6;
}



// FUNCTION 1410cda56 FUN_1410cda56 body=26 status=ok
// SIG undefined FUN_1410cda56(void)

undefined8 FUN_1410cda56(longlong param_1,undefined8 param_2)

{
  FUN_1410cda70(param_1 + 0x20);
  return param_2;
}



// FUNCTION 1410cda70 FUN_1410cda70 body=349 status=ok
// SIG undefined FUN_1410cda70(void)

undefined8 * FUN_1410cda70(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Src;
  wchar_t *pwVar4;
  undefined8 uVar5;
  
  if (param_1[0x20] == '\x04') {
    *param_2 = 0;
    iVar3 = *(int *)(param_1 + 8);
    _Src = *(void **)param_1;
    *(int *)(param_2 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
    return param_2;
  }
  switch(param_1[0x20]) {
  default:
    *param_2 = 0;
    param_2[1] = 0;
    break;
  case '\x01':
    pwVar4 = L"false";
    if (*param_1 != '\0') {
      pwVar4 = L"true";
    }
    FUN_140056680(param_2,pwVar4);
    break;
  case '\x02':
    FUN_140002266(param_2,L"%lld",*(undefined8 *)param_1);
    break;
  case '\x03':
    FUN_140002266(param_2,&DAT_149e02016,*(undefined8 *)param_1);
    break;
  case '\x05':
    FUN_14170a840(param_1,param_2);
    break;
  case '\x06':
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1407c869a(0,param_2,0);
    break;
  case '\a':
  case '\b':
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pwVar4 = L"%f,%f,%f";
    goto LAB_1410cdb05;
  case '\t':
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    pwVar4 = L"%f,%f,%f,%f";
LAB_1410cdb05:
    FUN_140002266(param_2,pwVar4,uVar1,uVar2,uVar5);
    break;
  case '\n':
    FUN_145da5dd4(param_1,param_2);
    break;
  case '\v':
    FUN_1470b08ec(param_1,param_2,0);
  }
  return param_2;
}



// FUNCTION 1410cdbce FUN_1410cdbce body=1034 status=ok
// SIG undefined FUN_1410cdbce(void)

void FUN_1410cdbce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  local_24 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2c = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  uStack_38 = 0;
  uStack_34 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined4)uVar2;
      uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
  local_3c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_14067a048;
      local_60 = 0;
      local_68 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_3c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_3c = (int)uVar2;
      uStack_38 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_3c);
    }
  }
  puVar6 = &local_2c;
  if (puVar4 != (undefined8 *)0x0) {
    puVar6 = puVar4;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_1410cdfda(puVar6,CONCAT44(uStack_34,uStack_38),local_3c != 0);
  *param_3 = uVar5;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cdfda FUN_1410cdfda body=154 status=ok
// SIG undefined FUN_1410cdfda(void)

undefined4 FUN_1410cdfda(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ff2acb(local_40,param_1,param_2);
  uVar2 = FUN_140168b7a(local_40,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ce076 FUN_1410ce076 body=21 status=ok
// SIG undefined FUN_1410ce076(void)

undefined * FUN_1410ce076(void)

{
  FUN_1410ce08c();
  return &DAT_14ca8c738;
}



// FUNCTION 1410ce08c FUN_1410ce08c body=308 status=ok
// SIG undefined FUN_1410ce08c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410ce08c(void)

{
  if ((DAT_14ca8c79f & 2) != 0) {
    return;
  }
  DAT_14ca8c79f = DAT_14ca8c79f | 2;
  _DAT_14ca8c740 = L"FGlobalShaderMapContent";
  _DAT_14ca8c758 = FUN_146826540;
  _DAT_14ca8c760 = FUN_146825d77;
  _DAT_14ca8c768 = FUN_146825fd6;
  _DAT_14ca8c770 = FUN_1407e02ea;
  _DAT_14ca8c778 = FUN_146826273;
  _DAT_14ca8c750 = FUN_1431f5f2e;
  _DAT_14ca8c790 = 0xffffffff00000068;
  _DAT_14ca8c798 = 8;
  DAT_14ca8c79c = 0;
  _DAT_14ca8c780 = &LAB_14741c7f8;
  _DAT_14ca91858 = L"HashedSourceFilename";
  DAT_14ca91882 = FUN_140850cc5();
  _DAT_14ca91860 = FUN_1457fb358();
  _DAT_14ca91870 = &LAB_14682652b;
  _DAT_14ca91878 = &DAT_100000060;
  _DAT_14ca91880 = 0;
  _DAT_14ca91868 = DAT_14ca8c748;
  DAT_14ca8c748 = &DAT_14ca91858;
  FUN_1457fb428();
  FUN_1407e00cc(&DAT_14ca8c738);
  return;
}



// FUNCTION 1410ce1e6 FUN_1410ce1e6 body=258 status=ok
// SIG undefined FUN_1410ce1e6(void)

void FUN_1410ce1e6(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x148) == 0) {
    local_68 = false;
  }
  else {
    cVar1 = FUN_1405bb4f2();
    lVar4 = *(longlong *)(param_1 + 0x148);
    if (lVar4 == 0) {
LAB_1410ce2ce:
      local_68 = false;
    }
    else {
      uVar2 = FUN_1410ce2ea();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      if (plVar3 == (longlong *)0x0) goto LAB_1410ce2ce;
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      local_68 = (*(byte *)(lVar4 + 0x30) & 2) == 0;
    }
    lVar4 = 8;
    puVar5 = param_2;
    if (cVar1 == '\0') goto LAB_1410ce26d;
  }
  puVar5 = param_2 + 2;
  lVar4 = 0x18;
LAB_1410ce26d:
  local_50 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_48 = *(undefined4 *)(param_2 + 5);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_40 = *(undefined4 *)(param_2 + 6);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x34);
  local_38 = param_2[7];
  local_30 = param_2[8];
  local_60 = 1;
  FUN_1410ce3d0(param_1,*(undefined8 *)((longlong)param_2 + lVar4),*puVar5);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ce2ea FUN_1410ce2ea body=228 status=ok
// SIG undefined FUN_1410ce2ea(void)

longlong FUN_1410ce2ea(void)

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
  if (DAT_14cb561b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148630ef1;
    local_40 = FUN_1464b67ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"CorpseInterface",&DAT_14cb561b8,&DAT_148630ef0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb561b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ce3d0 FUN_1410ce3d0 body=1741 status=ok
// SIG undefined FUN_1410ce3d0(void)

void FUN_1410ce3d0(undefined8 *****param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 ****ppppuVar8;
  undefined8 unaff_RBP;
  undefined8 ******ppppppuVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  undefined8 **local_158;
  undefined8 local_148;
  wchar_t *local_140;
  undefined8 *local_138;
  undefined8 *****local_130;
  undefined1 *local_128 [2];
  longlong *local_118;
  longlong local_108 [4];
  undefined8 *****local_e8;
  uint uStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((param_1[0x29] == (undefined8 ****)0x0) || (param_1[0x28] == (undefined8 ****)0x0)) ||
      (param_1[0x2d] == (undefined8 ****)0x0)) ||
     ((((param_1[0x2e] == (undefined8 ****)0x0 || (param_1[0x2f] == (undefined8 ****)0x0)) ||
       ((param_1[0x30] == (undefined8 ****)0x0 ||
        ((param_2 == (longlong *)0x0 || (*(char *)((longlong)param_1 + 0x199) != '\0')))))) ||
      (*(char *)(param_1 + 0x33) != '\0')))) goto LAB_1410ce95f;
  *(undefined1 *)((longlong)param_1 + 0x199) = 1;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  cVar3 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if (cVar3 == '\0') {
    local_130 = &local_e8;
    local_d0 = CONCAT22(local_d0._2_2_,4);
    local_e8 = (undefined8 *****)CONCAT44(local_e8._4_4_,*param_4);
    uStack_c8 = CONCAT31(uStack_c8._1_3_,3);
    local_138 = (undefined8 *)&DAT_14cbcb530;
    FUN_140881f5a(&local_98,&local_148,&local_138,0);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uStack_c8 & 0xff) * 0x120));
  }
  else {
    local_d0 = CONCAT22(local_d0._2_2_,0x18);
    local_e8 = *(undefined8 ******)(param_4 + 2);
    uStack_e0 = param_4[4];
    iStack_dc = param_4[5];
    local_d8 = *(ulonglong *)(param_4 + 6);
    uStack_c8 = CONCAT31(uStack_c8._1_3_,4);
    local_138 = (undefined8 *)&DAT_14cbcb538;
    local_130 = &local_e8;
    FUN_140881f5a(&local_98,&local_148,&local_138,0);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uStack_c8 & 0xff) * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppppuVar9 = &local_e8;
      if (0x18 < (ushort)local_d0) {
        ppppppuVar9 = (undefined8 ******)local_e8;
      }
      (*pcVar5)(ppppppuVar9);
    }
    if (0x18 < (ushort)local_d0) {
      FUN_1400020a8(local_e8);
    }
    local_130 = &local_e8;
    local_d0 = CONCAT22(local_d0._2_2_,8);
    local_e8 = *(undefined8 ******)(param_4 + 8);
    uStack_c8 = CONCAT31(uStack_c8._1_3_,0x12);
    local_138 = (undefined8 *)&DAT_14cbcb540;
    FUN_140881f5a(&local_98,&local_148,&local_138,0);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uStack_c8 & 0xff) * 0x120));
  }
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)();
  }
  if (0x18 < (ushort)local_d0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] == (undefined8 ****)0x0) {
    ppppuVar8 = (undefined8 ****)0x0;
  }
  else {
    ppppuVar8 = param_1[0x2e];
  }
  uVar6 = (*(code *)(*ppppuVar8)[10])();
  plVar7 = (longlong *)
           FUN_143e509b2(uVar6,param_2,
                         CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,&local_98)
  ;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_2;
  }
  uVar1 = *(uint *)((longlong)plVar7 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  iVar4 = *(int *)(lVar11 + 0x10);
  if (*(int *)(lVar11 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar4 = *(int *)(lVar11 + 0x10);
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(lVar11 + 0x10) = iVar10;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar4 = iVar10;
    }
  }
  param_1[0x49] = (undefined8 ****)CONCAT44(iVar4,uVar1);
  iStack_dc = 0;
  uStack_e0 = *(uint *)((longlong)plVar7 + 0xc);
  if ((int)uStack_e0 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uStack_e0 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_e0 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  iVar4 = *(int *)(lVar11 + 0x10);
  local_e8 = param_1;
  if (*(int *)(lVar11 + 0x10) == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar4 = *(int *)(lVar11 + 0x10);
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(lVar11 + 0x10) = iVar10;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar4 = iVar10;
    }
  }
  iStack_dc = iVar4;
  if (param_3 == 0) {
    local_d8._0_4_ = 0;
    iVar4 = 0;
    uVar1 = (uint)local_d8;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    local_d8 = (ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar4 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar4 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar10;
        iVar4 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_d8;
      if (bVar12) {
        iVar4 = iVar10;
      }
    }
  }
  local_d8._0_4_ = uVar1;
  local_d8 = CONCAT44(iVar4,(uint)local_d8);
  local_d0 = *param_4;
  uStack_cc = param_4[1];
  uStack_c8 = param_4[2];
  uStack_c4 = param_4[3];
  local_c0 = param_4[4];
  uStack_bc = param_4[5];
  uStack_b8 = param_4[6];
  uStack_b4 = param_4[7];
  local_b0 = *(undefined8 *)(param_4 + 8);
  local_a8 = param_5;
  local_a7 = param_6;
  if (((param_1[0x2a] == (undefined8 ****)0x0) ||
      (pppuVar2 = param_1[0x2a][0x7ee], pppuVar2 == (undefined8 ***)0x0)) ||
     (*(char *)((longlong)pppuVar2 + 0x75a) != '\x01')) {
    FUN_14416807a(&local_e8);
  }
  else {
    local_128[0] = (undefined1 *)0x0;
    local_118 = (longlong *)FUN_14001cc68(0x50,8);
    *local_118 = (longlong)&PTR_FUN_14b975da0;
    ppppppuVar9 = &local_e8;
    plVar7 = local_118 + 1;
    for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
      *plVar7 = (longlong)*ppppppuVar9;
      ppppppuVar9 = ppppppuVar9 + 1;
      plVar7 = plVar7 + 1;
    }
    if (local_118 + 1 != (longlong *)0x0) {
      local_128[0] = &LAB_14416f7fc;
    }
    ppppuVar8 = param_1[0x29];
    local_148 = 0;
    local_140 = L"PlayDeath";
    local_138 = (undefined8 *)0x0;
    local_130 = (undefined8 *****)((ulonglong)local_130 & 0xffffffff00000000);
    FUN_1446efa72(&local_138,0,6,0x10);
    local_130 = (undefined8 *****)CONCAT44(local_130._4_4_,6);
    FUN_14149ab7e(local_138,ppppuVar8,local_128);
    uVar6 = FUN_1447210f0(ppppuVar8);
    local_158 = &local_138;
    FUN_140d5f492(uVar6,2,2,&local_148);
    if ((int)local_130 == 0) {
LAB_1410ce8fa:
      if (local_138 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_138 != (undefined8 *)0x0) {
      (**(code **)*local_138)(local_138,0);
      FUN_1446efa72(&local_138,0,0,0x10);
      local_130 = (undefined8 *****)((ulonglong)local_130 & 0xffffffff00000000);
      goto LAB_1410ce8fa;
    }
    if (local_128[0] != (undefined1 *)0x0) {
      plVar7 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar7 = local_108;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_98);
LAB_1410ce95f:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ceaba FUN_1410ceaba body=295 status=ok
// SIG undefined FUN_1410ceaba(void)

void FUN_1410ceaba(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xd0);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      iVar2 = *(int *)(param_1 + 0xb8);
      *(uint *)(param_1 + 0xb8) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xbc) < iVar2 + 1U) {
        FUN_1457fbd4e((longlong *)(param_1 + 0xb0),iVar2);
      }
      *(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 8) = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      FUN_140d112b8(param_1,param_1,lVar4);
      FUN_1410cec84(lVar4);
      FUN_1410cf03c(lVar4,param_1);
      FUN_140d112b8(param_1 + 0x18,param_1,lVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_1457fbdd4(param_1 + 0xd0,0);
  }
  FUN_1410cebe2(param_1 + 0x60,param_1);
  return;
}



// FUNCTION 1410cebe2 FUN_1410cebe2 body=162 status=ok
// SIG undefined FUN_1410cebe2(void)

void FUN_1410cebe2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1410cec6f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410cec6f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1410cec84 FUN_1410cec84 body=874 status=ok
// SIG undefined FUN_1410cec84(void)

void FUN_1410cec84(longlong param_1)

{
  int *piVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_14050fd64();
  lVar13 = *(longlong *)(param_1 + 0x110);
  if (lVar13 == 0) {
    uVar9 = FUN_140e2014e();
    lVar13 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x110) = lVar13;
  }
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (((lVar10 == 0) && (lVar10 = 0, lVar13 != 0)) && (*(longlong *)(param_1 + 0x108) != 0)) {
    plVar5 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
      lVar10 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
      lVar10 = FUN_144aff482(uVar9,(longlong *)(param_1 + 0x108));
    }
    *(longlong *)(param_1 + 0x118) = lVar10;
  }
  local_68 = 0;
  FUN_14088df30(uVar8,&local_48,lVar10,0);
  if ((local_48 == 0) ||
     (((*(char *)(local_48 + 0x30) == '\0' && (*(char *)(local_48 + 0x31) == '\0')) &&
      (*(int *)(local_48 + 0x6c) == 2)))) {
    FUN_141144eee(param_1);
  }
  else {
    local_50 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *local_50 = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    ppuVar2 = (undefined8 **)(param_1 + 0x188);
    if (ppuVar2 != &local_50) {
      puVar4 = *ppuVar2;
      *ppuVar2 = local_50;
      local_50 = (undefined8 *)0x0;
      FUN_1410ceff0(ppuVar2,puVar4);
    }
    FUN_1410ceff0(&local_50,local_50);
    plVar5 = *ppuVar2;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)plVar5[1];
    *plVar5 = local_48;
    plVar5[1] = (longlong)local_40;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar4 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_60[2] = lVar10;
    *local_60 = &PTR_FUN_14b421010;
    local_60[3] = 0;
    iVar11 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_60 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar11 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar11 = *(int *)(lVar13 + 0x10);
        bVar14 = iVar11 == 0;
        if (bVar14) {
          *(int *)(lVar13 + 0x10) = iVar12;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar11 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar11;
    puVar4[4] = FUN_141144eee;
    FUN_140844560(local_48,&local_50,&local_60);
    (*ppuVar2)[2] = local_50;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ceff0 FUN_1410ceff0 body=75 status=ok
// SIG undefined FUN_1410ceff0(void)

void FUN_1410ceff0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
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
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 1410cf03c FUN_1410cf03c body=2595 status=ok
// SIG undefined FUN_1410cf03c(void)

void FUN_1410cf03c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_9c;
  longlong *local_98;
  undefined8 local_90;
  int local_84;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar16 = *(longlong *)(param_1 + 0x110);
  local_a8 = param_1;
  if (lVar16 == 0) {
    uVar7 = FUN_140e2014e();
    lVar16 = FUN_14477b664(uVar7);
    *(longlong *)(local_a8 + 0x110) = lVar16;
  }
  local_98 = (longlong *)(local_a8 + 0x108);
  lVar20 = *(longlong *)(local_a8 + 0x118);
  local_90 = param_2;
  if (lVar20 == 0) {
    if (lVar16 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = 0;
      if (*local_98 != 0) {
        plVar2 = *(longlong **)(lVar16 + 0xb8);
        if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')
           ) {
          lVar20 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar20 = FUN_144aff482(uVar7,local_98);
        }
        *(longlong *)(local_a8 + 0x118) = lVar20;
      }
    }
  }
  local_80 = lVar20 + 0x78;
  local_70 = (undefined8 *)0x100000000;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = local_80;
  if (*(int *)(lVar20 + 0x90) == 0) {
    uVar22 = 1;
    local_60._0_4_ = 0xffffffff;
    iVar4 = 0;
    local_60._4_4_ = 0;
    local_70._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    uVar22 = (ulonglong)local_70 >> 0x20;
    iVar4 = *(int *)(lVar20 + 0x90);
  }
  uVar18 = local_68;
  lVar16 = local_a8;
  if (local_60._4_4_ != iVar4 || local_68 != local_80) {
    lVar23 = 0;
    iVar9 = (int)local_70;
    uVar12 = (uint)local_60;
    iVar8 = local_60._4_4_;
    iVar13 = local_58;
    local_9c = iVar4;
    do {
      lVar15 = *(longlong *)(lVar16 + 0x138);
      lVar11 = lVar23 * 0xa8;
      lVar17 = lVar15 + lVar11;
      puVar5 = (undefined8 *)((longlong)iVar8 * 0x90 + *(longlong *)(lVar20 + 0x68));
      *(undefined8 *)(lVar15 + 0x48 + lVar11) = *puVar5;
      *(undefined8 **)(lVar15 + 0x50 + lVar11) = puVar5 + 1;
      if (lVar16 == 0) {
        *(undefined4 *)(lVar17 + 0x58) = 0;
        iVar4 = 0;
      }
      else {
        uVar10 = *(uint *)(lVar16 + 0xc);
        *(uint *)(lVar17 + 0x58) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar4 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar24) {
            local_84 = iVar8;
            local_78 = lVar20;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
            lVar20 = local_78;
            lVar16 = local_a8;
            iVar8 = local_84;
          }
          LOCK();
          iVar4 = *(int *)(lVar15 + 0x10);
          bVar24 = iVar4 == 0;
          if (bVar24) {
            *(int *)(lVar15 + 0x10) = iVar8;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar24) {
            iVar4 = iVar8;
          }
        }
      }
      *(int *)(lVar17 + 0x5c) = iVar4;
      uVar12 = uVar12 & ~(uint)uVar22;
      uVar19 = *(longlong *)(uVar18 + 0x10);
      if (*(longlong *)(uVar18 + 0x10) == 0) {
        uVar19 = uVar18;
      }
      iVar4 = *(int *)(uVar18 + 0x18);
      lVar17 = (longlong)iVar9;
      uVar10 = *(uint *)(uVar19 + lVar17 * 4) & uVar12;
      if (uVar10 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar1 = iVar8;
        if (iVar8 < iVar9) {
          iVar1 = iVar9;
        }
        if (iVar9 < iVar8) {
          lVar15 = 0;
          do {
            uVar10 = *(uint *)(uVar19 + lVar17 * 4 + 4 + lVar15 * 4);
            if (uVar10 != 0) {
              iVar9 = iVar9 + (int)lVar15 + 1;
              uVar12 = 0xffffffff;
              goto LAB_1410cf214;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar1 - lVar17 != lVar15);
          uVar12 = 0xffffffff;
          iVar9 = iVar1;
        }
        iVar9 = iVar9 + 1;
        lVar16 = local_a8;
        iVar8 = iVar4;
      }
      else {
LAB_1410cf214:
        uVar22 = (ulonglong)(-uVar10 & uVar10);
        uVar19 = uVar22 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
      lVar23 = lVar23 + 1;
    } while ((iVar8 != local_9c) || (uVar18 != local_80));
  }
  lVar20 = *(longlong *)(lVar16 + 0x110);
  if (lVar20 == 0) {
    uVar7 = FUN_140e2014e();
    lVar20 = FUN_14477b664(uVar7);
    *(longlong *)(local_a8 + 0x110) = lVar20;
    lVar16 = local_a8;
  }
  lVar16 = *(longlong *)(lVar16 + 0x118);
  if (((lVar16 == 0) && (lVar16 = 0, lVar20 != 0)) && (*local_98 != 0)) {
    plVar2 = *(longlong **)(lVar20 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar16 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar16 = FUN_144aff482(uVar7);
    }
    *(longlong *)(local_a8 + 0x118) = lVar16;
  }
  uVar22 = lVar16 + 200;
  local_70 = (undefined8 *)&DAT_100000000;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = uVar22;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    uVar18 = 1;
    local_60._0_4_ = 0xffffffff;
    iVar4 = 0;
    local_60._4_4_ = 0;
    uVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    uVar19 = (ulonglong)local_70 & 0xffffffff;
    uVar18 = (ulonglong)local_70 >> 0x20;
    iVar4 = *(int *)(lVar16 + 0xe0);
  }
  if (local_60._4_4_ != iVar4 || local_68 != uVar22) {
    lVar20 = 0;
    uVar12 = (uint)local_60;
    iVar9 = local_60._4_4_;
    iVar8 = local_58;
    do {
      iVar13 = (int)uVar19;
      puVar5 = (undefined8 *)((longlong)iVar9 * 0x120 + *(longlong *)(lVar16 + 0xb8));
      lVar23 = *(longlong *)(local_a8 + 0x148);
      lVar17 = lVar20 * 0x88;
      *(undefined8 *)(lVar23 + 0x48 + lVar17) = *puVar5;
      *(undefined8 **)(lVar23 + 0x50 + lVar17) = puVar5 + 1;
      *(longlong *)(lVar23 + 0x58 + lVar17) = local_a8;
      uVar12 = ~(uint)uVar18 & uVar12;
      uVar21 = *(ulonglong *)(local_68 + 0x10);
      if (*(ulonglong *)(local_68 + 0x10) == 0) {
        uVar21 = local_68;
      }
      iVar1 = *(int *)(local_68 + 0x18);
      lVar23 = (longlong)iVar13;
      uVar10 = *(uint *)(uVar21 + lVar23 * 4) & uVar12;
      if (uVar10 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar14 = iVar9;
        if (iVar9 < iVar13) {
          iVar14 = iVar13;
        }
        if (iVar13 < iVar9) {
          lVar17 = 0;
          do {
            uVar10 = *(uint *)(uVar21 + lVar23 * 4 + 4 + lVar17 * 4);
            if (uVar10 != 0) {
              uVar19 = (ulonglong)(iVar13 + (int)lVar17 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1410cf3bb;
            }
            iVar8 = iVar8 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar14 - lVar23 != lVar17);
          uVar12 = 0xffffffff;
          iVar13 = iVar14;
        }
        uVar19 = (ulonglong)(iVar13 + 1);
        iVar9 = iVar1;
      }
      else {
LAB_1410cf3bb:
        uVar18 = (ulonglong)(-uVar10 & uVar10);
        uVar21 = uVar18 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar9 = (iVar8 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar9) {
          iVar9 = iVar1;
        }
      }
      lVar20 = lVar20 + 1;
    } while ((iVar9 != iVar4) || (local_68 != uVar22));
  }
  lVar16 = *(longlong *)(local_a8 + 0x110);
  if (lVar16 == 0) {
    uVar7 = FUN_140e2014e();
    lVar16 = FUN_14477b664(uVar7);
    *(longlong *)(local_a8 + 0x110) = lVar16;
  }
  lVar20 = *(longlong *)(local_a8 + 0x118);
  if (((lVar20 == 0) && (lVar20 = 0, lVar16 != 0)) && (*local_98 != 0)) {
    plVar2 = *(longlong **)(lVar16 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar20 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar20 = FUN_144aff482(uVar7,local_98);
    }
    *(longlong *)(local_a8 + 0x118) = lVar20;
  }
  uVar7 = local_90;
  FUN_140e59660(local_a8,lVar20 + 0x38,local_90);
  lVar16 = *(longlong *)(local_a8 + 0x110);
  if (lVar16 == 0) {
    uVar6 = FUN_140e2014e();
    lVar16 = FUN_14477b664(uVar6);
    *(longlong *)(local_a8 + 0x110) = lVar16;
  }
  lVar20 = *(longlong *)(local_a8 + 0x118);
  if (((lVar20 == 0) && (lVar20 = 0, uVar7 = local_90, lVar16 != 0)) && (*local_98 != 0)) {
    plVar2 = *(longlong **)(lVar16 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar20 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar20 = FUN_144aff482(uVar7,local_98);
    }
    *(longlong *)(local_a8 + 0x118) = lVar20;
    uVar7 = local_90;
  }
  lVar16 = local_a8;
  FUN_140e591ea(local_a8,lVar20 + 0x50,uVar7);
  if ((longlong)*(int *)(lVar16 + 0x150) != 0) {
    lVar20 = *(longlong *)(local_a8 + 0x148);
    lVar16 = (longlong)*(int *)(lVar16 + 0x150) * 0x88 + lVar20;
    do {
      local_70 = (undefined8 *)0x0;
      local_68 = local_68 & 0xffffffff00000000;
      FUN_1446efa72(&local_70,0,3,0x10);
      puVar5 = local_70;
      local_68 = CONCAT44(local_68._4_4_,3);
      *local_70 = &PTR_LAB_14b420b80;
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 1;
      lVar23 = DAT_14c758608 + 1;
      if (lVar17 == 0) {
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 2;
        lVar23 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar23;
      local_70[2] = lVar17;
      *local_70 = &PTR_FUN_14b4210f0;
      local_70[3] = 0;
      if (local_a8 == 0) {
        iVar4 = 0;
      }
      else {
        uVar12 = *(uint *)(local_a8 + 0xc);
        *(uint *)(local_70 + 3) = uVar12;
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar23 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar23 = 0;
        }
        iVar4 = *(int *)(lVar23 + 0x10);
        if (*(int *)(lVar23 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar24 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar24) {
            local_9c = iVar9;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
            iVar9 = local_9c;
          }
          LOCK();
          iVar4 = *(int *)(lVar23 + 0x10);
          bVar24 = iVar4 == 0;
          if (bVar24) {
            *(int *)(lVar23 + 0x10) = iVar9;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar24) {
            iVar4 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar4;
      puVar5[4] = FUN_140d117de;
      FUN_140ca47fa(lVar20,local_50,&local_70);
      uVar7 = local_90;
      if ((int)local_68 == 0) {
LAB_1410cf574:
        if (local_70 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_70 != (undefined8 *)0x0) {
        (**(code **)*local_70)(local_70,0);
        FUN_1446efa72(&local_70,0,0,0x10);
        local_68 = local_68 & 0xffffffff00000000;
        goto LAB_1410cf574;
      }
      FUN_140e58eb0(lVar20);
      FUN_140e57dfe(lVar20,*(longlong *)(lVar20 + 0x50) + 0x18,uVar7);
      lVar20 = lVar20 + 0x88;
    } while (lVar20 != lVar16);
  }
  if ((longlong)*(int *)(local_a8 + 0x140) != 0) {
    lVar16 = *(longlong *)(local_a8 + 0x138);
    lVar20 = (longlong)*(int *)(local_a8 + 0x140) * 0xa8;
    do {
      FUN_140e57fc0(local_a8,lVar16,uVar7,1);
      lVar16 = lVar16 + 0xa8;
      lVar20 = lVar20 + -0xa8;
    } while (lVar20 != 0);
  }
  *(undefined1 *)(local_a8 + 0x191) = 1;
  FUN_1447f69b6(local_a8 + 0xc0);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410cfa60 FUN_1410cfa60 body=99 status=ok
// SIG undefined FUN_1410cfa60(void)

void FUN_1410cfa60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001410cfabf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001410cfaa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1410cfac4 FUN_1410cfac4 body=150 status=ok
// SIG undefined FUN_1410cfac4(void)

void FUN_1410cfac4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_1410cfb5a();
  if (cVar1 == '\0') {
    FUN_1410cfe3c(param_1);
    return;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x60);
  if (lVar2 == 0) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      lVar4 = (longlong)*(int *)(param_1 + 0x40) << 3;
      do {
        lVar3 = FUN_14479d2ce(lVar2);
        if ((lVar3 != 0) && (cVar1 = FUN_1457fbe34(param_1,lVar3), cVar1 != '\0')) {
          return;
        }
        lVar2 = lVar2 + 8;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  else {
    cVar1 = FUN_1457fbe34(param_1,lVar2);
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_140170a76(param_1,&DAT_14cb86208);
  return;
}



// FUNCTION 1410cfb5a FUN_1410cfb5a body=187 status=ok
// SIG undefined FUN_1410cfb5a(void)

bool FUN_1410cfb5a(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1410cfc16();
  if (lVar4 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1410cfcf6(lVar4,&local_38);
    lVar4 = local_38;
    lVar6 = (longlong)(int)uStack_30;
    if (lVar6 == 0) {
      bVar2 = false;
      bVar1 = true;
    }
    else {
      lVar5 = 0;
      do {
        if ((*(longlong **)(lVar4 + lVar5) != (longlong *)0x0) &&
           (cVar3 = (**(code **)(**(longlong **)(lVar4 + lVar5) + 0xfe8))(), cVar3 == '\0')) {
          bVar2 = true;
          bVar1 = false;
          goto LAB_1410cfbc8;
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
      bVar2 = false;
      bVar1 = true;
    }
LAB_1410cfbc8:
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
    if (!bVar1) goto LAB_1410cfbd9;
  }
  bVar2 = false;
LAB_1410cfbd9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return !bVar2;
}



// FUNCTION 1410cfc16 FUN_1410cfc16 body=115 status=ok
// SIG undefined FUN_1410cfc16(void)

undefined8 FUN_1410cfc16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_1410cfc8a(0);
        return uVar6;
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
    uVar6 = FUN_1410cfc8a(*(undefined8 *)(param_1 + 0x18));
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
  return uVar6;
}



// FUNCTION 1410cfc8a FUN_1410cfc8a body=108 status=ok
// SIG undefined FUN_1410cfc8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1410cfc8a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return _DAT_00000010;
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
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
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
  return uVar6;
}



// FUNCTION 1410cfcf6 FUN_1410cfcf6 body=298 status=ok
// SIG undefined FUN_1410cfcf6(void)

void FUN_1410cfcf6(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140f42f34();
  if ((lVar3 == 0) ||
     (local_48 = *(undefined8 *)(*(longlong *)(lVar3 + 8) + 0x100), (char)local_48 == '\0')) {
    FUN_140672052(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  lVar3 = FUN_140ec3d82(*(undefined8 *)(param_1 + 8));
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x238))) {
    iVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar7);
      if (lVar4 != 0) {
        lVar5 = FUN_1449f3324();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (cVar2 = FUN_1412303d0(&local_48,lVar4), cVar2 != '\0')) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1410d048a(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        }
      }
      lVar7 = lVar7 + 8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar3 + 0x238));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410cfe3c FUN_1410cfe3c body=390 status=ok
// SIG undefined FUN_1410cfe3c(void)

void FUN_1410cfe3c(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  code *local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1410cffc4();
  lVar3 = FUN_1410d0064(param_1);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    uVar2 = rand();
    local_98 = FUN_1410cfac4;
    local_90 = 0;
    FUN_1410d00d8(&local_b0,param_1,&local_98);
    local_98 = (code *)0x0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x70,&local_98,(float)(uVar2 & 0x7fff) / 32767.0 + 1.0);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    if (local_a8 != 0) {
      if (local_b0 == (undefined8 *)0x0) goto LAB_1410cff4c;
      (**(code **)*local_b0)(local_b0,0);
      FUN_1446efa72(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1410cff4c:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410cffc4 FUN_1410cffc4 body=159 status=ok
// SIG undefined FUN_1410cffc4(void)

void FUN_1410cffc4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = FUN_1410d0064();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (lVar2 != 0) {
      lVar1 = *plVar3;
      uVar4 = (uint)lVar2;
      if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar5 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0
           ) {
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
          if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
             (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1410d0064 FUN_1410d0064 body=115 status=ok
// SIG undefined FUN_1410d0064(void)

undefined8 FUN_1410d0064(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_140ec3cfc(0);
        return uVar6;
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
    uVar6 = FUN_140ec3cfc(*(undefined8 *)(param_1 + 0x18));
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
  return uVar6;
}



// FUNCTION 1410d00d8 FUN_1410d00d8 body=428 status=ok
// SIG undefined FUN_1410d00d8(void)

longlong * FUN_1410d00d8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1410d01b8:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b418ec0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1410d01b8;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b418ec0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1410d0284 FUN_1410d0284 body=517 status=ok
// SIG undefined FUN_1410d0284(void)

void FUN_1410d0284(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30), lVar3 != 0)) &&
     ((lVar3 = *(longlong *)(lVar3 + 0x360), lVar3 != 0 && (0 < *(int *)(lVar3 + 0x238))))) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar3 + 0x230) + 4 + lVar7 * 8);
      if (((iVar1 != 0) &&
          (uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
         (((int)uVar2 < DAT_14c9647dc &&
          ((((plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)) &&
            ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar4 = *plVar6, lVar4 != 0)))))) {
        if (DAT_14cb61cd0 == 0) {
          local_60 = &local_40;
          local_40 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1463b31ae;
          local_68 = &LAB_1486dca4f;
          local_70 = &LAB_1464f50a6;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 8;
          local_98 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
          lVar5 = (**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958);
          if (lVar5 == param_1) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1410d048a(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
          }
        }
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar3 + 0x238));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d048a FUN_1410d048a body=353 status=ok
// SIG undefined FUN_1410d048a(void)

void FUN_1410d048a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410d050f;
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
LAB_1410d050f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410d05ec FUN_1410d05ec body=286 status=ok
// SIG undefined FUN_1410d05ec(void)

undefined8 FUN_1410d05ec(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1410d0704;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410d0704;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1410d0704:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410d06b1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1410d06b1;
    }
  }
  uVar6 = 0;
LAB_1410d06b1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d070c FUN_1410d070c body=728 status=ok
// SIG undefined FUN_1410d070c(void)

void FUN_1410d070c(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  
  iVar2 = *(int *)(param_1 + 0x140);
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar7 = 0;
    iVar11 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x138);
    if (*(uint **)(param_1 + 0x138) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x128);
    }
    uVar16 = *puVar6;
    if (uVar16 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar16 = 0xffffffff;
    iVar5 = iVar2;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar7 * 0x38);
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x19) != '\x02')) {
        lVar12 = *(longlong *)(param_1 + 0x118) + (longlong)iVar7 * 0x38;
        plVar3 = *(longlong **)(lVar12 + 0x18);
        if ((plVar3 != (longlong *)0x0) &&
           ((*(longlong *)(lVar12 + 0x20) != -1 && (*plVar3 == *(longlong *)(lVar12 + 0x20))))) {
          *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
          if ((int)plVar3[5] != 0) {
            puVar4 = (undefined8 *)plVar3[4];
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,0);
              FUN_1446efa72(plVar3 + 4,0,0,0x10);
              *(undefined4 *)(plVar3 + 5) = 0;
            }
          }
          FUN_14072d42a(lVar12 + 0x18,0);
          *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
          if (((int)plVar3[0x26] < 1) && (FUN_1400847bc(plVar3 + 0x17,0), (int)plVar3[0x21] == 0)) {
            FUN_140087e46(plVar3);
            if (*plVar3 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_1410d088d;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
            }
          }
        }
LAB_1410d088d:
        *(undefined4 *)(lVar12 + 0x10) = 0;
        iVar5 = *(int *)(param_1 + 0x140);
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar6 = *(uint **)(param_1 + 0x138);
      if (*(uint **)(param_1 + 0x138) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x128);
      }
      iVar7 = (int)uVar14;
      lVar12 = (longlong)iVar7;
      uVar8 = puVar6[lVar12] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar13 = 0;
          do {
            uVar8 = puVar6[lVar12 + lVar13 + 1];
            if (uVar8 != 0) {
              uVar14 = (ulonglong)(iVar7 + (int)lVar13 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1410d0907;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar10 - lVar12 != lVar13);
          uVar16 = 0xffffffff;
          iVar7 = iVar10;
        }
        uVar14 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar5;
      }
      else {
LAB_1410d0907:
        uVar15 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar7) {
          iVar7 = iVar5;
        }
      }
    } while (iVar7 != iVar2);
  }
  return;
}



// FUNCTION 1410d09e4 FUN_1410d09e4 body=31 status=ok
// SIG undefined FUN_1410d09e4(void)

undefined8 FUN_1410d09e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410d0a04 FUN_1410d0a04 body=40 status=ok
// SIG undefined FUN_1410d0a04(void)

undefined8 FUN_1410d0a04(undefined8 param_1,int param_2)

{
  FUN_1410d0a2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410d0a2c FUN_1410d0a2c body=491 status=ok
// SIG undefined FUN_1410d0a2c(void)

void FUN_1410d0a2c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b1959b0;
  param_1[5] = &PTR_FUN_14b195c50;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x14;
  puVar2 = param_1 + 0x16;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = puVar2;
  if (*(int *)(param_1 + 0x19) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 3)) {
    do {
      FUN_1486c443e((longlong)iStack_54 * 0x90 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 3));
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_140d97c6c(plVar1,0);
  }
  param_1[0x1a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xcc)) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410d0c19 FUN_1410d0c19 body=60 status=ok
// SIG undefined FUN_1410d0c19(void)

void FUN_1410d0c19(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1410d0c56(param_1,param_2);
    param_1 = param_1 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return;
}



// FUNCTION 1410d0c56 FUN_1410d0c56 body=590 status=ok
// SIG undefined FUN_1410d0c56(void)

undefined8 * FUN_1410d0c56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  plVar3 = (longlong *)param_2[0xc];
  param_1[0xc] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar2 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1411e2848(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined2 *)(param_1 + 0x11) = *(undefined2 *)(param_2 + 0x11);
  param_1[0x10] = param_2[0x10];
  return param_1;
}



// FUNCTION 1410d0ea4 FUN_1410d0ea4 body=195 status=ok
// SIG undefined FUN_1410d0ea4(void)

void FUN_1410d0ea4(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      pbVar1 = (byte *)(lVar4 + 0x89 + lVar5);
      *pbVar1 = *pbVar1 & 0xfb;
      lVar5 = lVar5 + 0x90;
    } while ((longlong)iVar2 * 0x90 != lVar5);
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
      lVar5 = (longlong)*(int *)(param_1 + 0x60) * 0x90 + lVar4;
      do {
        if ((((*(byte *)(lVar4 + 0x89) & 4) != 0) ||
            (((*(byte *)(lVar4 + 0x89) & 1) != 0 && (-1 < *(char *)(lVar4 + 0x88))))) &&
           (iVar2 = *(int *)(lVar4 + 0x78), (longlong)iVar2 != 0)) {
          lVar3 = *(longlong *)(lVar4 + 0x70);
          lVar6 = 0;
          do {
            uVar7 = (uint)*(undefined8 *)(lVar3 + lVar6);
            if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x60))) {
              pbVar1 = (byte *)(*(longlong *)(param_1 + 0x58) + 0x89 +
                               (ulonglong)(uVar7 & 0x7fffffff) * 0x90);
              *pbVar1 = *pbVar1 | 4;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar2 * 8 != lVar6);
        }
        lVar4 = lVar4 + 0x90;
      } while (lVar4 != lVar5);
    }
  }
  return;
}



// FUNCTION 1410d0f68 FUN_1410d0f68 body=368 status=ok
// SIG undefined FUN_1410d0f68(void)

void FUN_1410d0f68(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar2 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar2 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x58);
    lVar7 = 0;
    do {
      pbVar1 = (byte *)(lVar14 + 0x89 + lVar7);
      *pbVar1 = *pbVar1 & 0xfd;
      lVar7 = lVar7 + 0x90;
    } while ((longlong)iVar2 * 0x90 != lVar7);
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x58);
      plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x60) * 0x12;
      do {
        if ((*(byte *)((longlong)plVar3 + 0x89) & 2) == 0) {
          if ((longlong)*(int *)(param_1 + 0x78) != 0) {
            plVar9 = *(longlong **)(param_1 + 0x70);
            plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x78) * 2;
            iVar2 = (int)plVar3[1];
LAB_1410d0ffe:
            if ((int)plVar9[1] == iVar2) {
              if (1 < iVar2) {
                lVar14 = 0;
                do {
                  uVar12 = *(ushort *)(*plVar9 + lVar14);
                  uVar13 = (ulonglong)uVar12;
                  uVar5 = *(ushort *)(*plVar3 + lVar14);
                  if (uVar12 == uVar5) {
                    if (uVar12 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar5 | uVar12)) goto LAB_1410d10ca;
                    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                    uVar11 = (ulonglong)uVar5;
                    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar11]) goto LAB_1410d10ca;
                  }
                  lVar14 = lVar14 + 2;
                } while( true );
              }
            }
            else if ((int)plVar9[1] + iVar2 != 1) goto LAB_1410d100d;
            goto LAB_1410d1067;
          }
        }
        else {
LAB_1410d1067:
          *(byte *)((longlong)plVar3 + 0x89) = *(byte *)((longlong)plVar3 + 0x89) | 2;
          lVar14 = plVar3[0xf];
          if ((longlong)(int)lVar14 != 0) {
            lVar7 = plVar3[0xe];
            lVar10 = 0;
            do {
              uVar6 = (uint)*(undefined8 *)(lVar7 + lVar10);
              if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x60))) {
                pbVar1 = (byte *)(*(longlong *)(param_1 + 0x58) + 0x89 +
                                 (ulonglong)(uVar6 & 0x7fffffff) * 0x90);
                *pbVar1 = *pbVar1 | 2;
              }
              lVar10 = lVar10 + 8;
            } while ((longlong)(int)lVar14 * 8 != lVar10);
          }
        }
LAB_1410d0fe0:
        plVar3 = plVar3 + 0x12;
      } while (plVar3 != plVar4);
    }
  }
  return;
LAB_1410d10ca:
  if (uVar12 == uVar5) goto LAB_1410d1067;
LAB_1410d100d:
  plVar9 = plVar9 + 2;
  if (plVar9 == plVar8) goto LAB_1410d0fe0;
  goto LAB_1410d0ffe;
}



// FUNCTION 1410d10d8 FUN_1410d10d8 body=1058 status=ok
// SIG undefined FUN_1410d10d8(void)

void FUN_1410d10d8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = (longlong *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 100);
  FUN_140d47191(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_148e6b6d0(local_90,0);
  }
  pbVar3 = (byte *)*param_2;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
    puVar8 = (undefined8 *)FUN_1446e60f4(pbVar3,&DAT_14cbd9010);
    pbVar3 = (byte *)*puVar8;
    if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(pbVar3 + 8);
    }
    FUN_1400b22c2(&local_78,uVar10);
    if ((longlong *)(param_1 + 0x18) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_78;
      local_78 = 0;
      *(int *)(param_1 + 0x20) = (int)uStack_70;
      *(uint *)(param_1 + 0x24) = uStack_70._4_4_;
    }
    if (*param_2 == 0) {
      plVar9 = &DAT_14c9a1308;
    }
    else {
      plVar9 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cbd9000);
    }
    if (*plVar9 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = FUN_14000584e(*plVar9,1);
    }
    *(undefined1 *)(param_1 + 0x11) = uVar6;
    if (*param_2 == 0) {
      puVar8 = &DAT_14c9a1308;
    }
    else {
      puVar8 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cbd9018);
    }
    pbVar3 = (byte *)*puVar8;
    puVar8 = &DAT_14c9a1270;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      puVar8 = *(undefined8 **)(pbVar3 + 8);
    }
    local_80 = param_2;
    FUN_1410d165e(local_90,puVar8,0,param_3);
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x60);
    if (uVar14 != 0) {
      lVar15 = 0x110;
      uVar13 = 0;
      plVar9 = local_90;
      local_88 = uVar14;
      do {
        local_78 = 0;
        uStack_70 = 0;
        uVar2 = *(uint *)(param_1 + 0x60);
        lVar18 = *(longlong *)(param_1 + 0x58);
        if (((int)uVar13 < (int)uVar2) && ((int)uVar13 + 1U != uVar2)) {
          lVar16 = lVar18 + uVar13 * 0x90;
          uVar12 = uVar13 + 1;
          lVar17 = lVar15;
          do {
            uVar5 = uStack_70;
            lVar18 = *plVar9;
            lVar4 = *(longlong *)(lVar16 + 0x80);
            if (*(longlong *)(lVar18 + lVar17) <= lVar4) goto LAB_1410d12e1;
            if (*(longlong *)(lVar18 + lVar17) == lVar4 + 1) {
              lVar18 = (longlong)(int)uStack_70;
              uVar7 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
              if (uStack_70._4_4_ < uVar7) {
                FUN_1410d14fc(&local_78,uVar5 & 0xffffffff);
                plVar9 = local_90;
                uVar14 = local_88;
              }
              *(ulonglong *)(local_78 + lVar18 * 8) = uVar12;
            }
            uVar12 = uVar12 + 1;
            lVar17 = lVar17 + 0x90;
          } while (uVar2 != uVar12);
          lVar18 = *plVar9;
        }
LAB_1410d12e1:
        lVar18 = lVar18 + uVar13 * 0x90;
        plVar11 = (longlong *)(lVar18 + 0x70);
        if (plVar11 != &local_78) {
          if (*plVar11 != 0) {
            FUN_1400020a8();
            plVar9 = local_90;
            uVar14 = local_88;
          }
          *plVar11 = local_78;
          local_78 = 0;
          *(int *)(lVar18 + 0x78) = (int)uStack_70;
          *(uint *)(lVar18 + 0x7c) = uStack_70._4_4_;
          uStack_70 = 0;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
          plVar9 = local_90;
          uVar14 = local_88;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x90;
      } while (uVar13 != uVar14);
    }
    FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_1408be2c4(param_1 + 0x70,0);
    }
    if (*local_80 == 0) {
      puVar8 = &DAT_14c9a1308;
    }
    else {
      puVar8 = (undefined8 *)FUN_1446e60f4(*local_80,&DAT_14cbd9020);
    }
    pbVar3 = (byte *)*puVar8;
    plVar9 = &DAT_14c9a1270;
    if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
      plVar9 = *(longlong **)(pbVar3 + 8);
    }
    lVar15 = plVar9[2];
    if ((longlong)(int)lVar15 != 0) {
      lVar18 = *plVar9;
      lVar16 = 0;
      do {
        pbVar3 = *(byte **)(lVar18 + lVar16);
        if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined8 *)(pbVar3 + 8);
        }
        FUN_1400b22c2(&local_78,uVar10);
        FUN_1412fabe8(param_1 + 0x70);
        FUN_1410d0f68(param_1);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        lVar16 = lVar16 + 0x10;
      } while ((longlong)(int)lVar15 * 0x10 != lVar16);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d14fc FUN_1410d14fc body=353 status=ok
// SIG undefined FUN_1410d14fc(void)

void FUN_1410d14fc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410d1581;
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
LAB_1410d1581:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410d165e FUN_1410d165e body=1715 status=ok
// SIG undefined FUN_1410d165e(void)

void FUN_1410d165e(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  code *pcVar6;
  void *_Src;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  ulonglong uVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0 = (ulonglong)*(uint *)(param_2 + 2);
  local_c8 = param_1;
  local_c0 = param_3;
  if (local_a0 != 0) {
    local_b8 = param_4 + 4;
    uVar22 = 0;
    local_b0 = param_2;
    local_a8 = param_4;
    do {
      plVar13 = (longlong *)FUN_1410d1d12(local_c8);
      lVar3 = *param_2;
      lVar20 = uVar22 * 0x10;
      lVar4 = *(longlong *)(lVar3 + lVar20);
      puVar18 = &DAT_14c9a12e0;
      if (lVar4 != 0) {
        puVar18 = (undefined4 *)FUN_140625092(lVar4,&DAT_14c9a12e0);
      }
      local_88 = 0;
      uStack_80 = 0;
      FUN_1400b2348(puVar18,&local_88,1);
      lVar4 = local_88;
      iVar2 = (int)uStack_80;
      uVar12 = (int)uStack_80 - 1;
      if ((int)uStack_80 == 0) {
        uVar12 = 0;
      }
      if (0 < (int)uVar12) {
        uVar19 = 0;
        do {
          uVar1 = *(ushort *)(local_88 + uVar19 * 2);
          *(ushort *)(local_88 + uVar19 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar19 = uVar19 + 1;
        } while (uVar12 != uVar19);
      }
      uVar9 = uStack_80._4_4_;
      local_88 = 0;
      uStack_80 = 0;
      if (*plVar13 == 0) {
        *plVar13 = lVar4;
        *(int *)(plVar13 + 1) = iVar2;
        *(undefined4 *)((longlong)plVar13 + 0xc) = uVar9;
      }
      else {
        FUN_1400020a8();
        *plVar13 = lVar4;
        *(int *)(plVar13 + 1) = iVar2;
        *(undefined4 *)((longlong)plVar13 + 0xc) = uVar9;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      plVar23 = (longlong *)(lVar3 + lVar20);
      puVar14 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        puVar14 = (undefined8 *)FUN_1446e60f4(*plVar23,&DAT_14cbd9028);
      }
      pbVar5 = (byte *)*puVar14;
      if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(pbVar5 + 8);
      }
      FUN_1400b22c2(&local_88,uVar16);
      plVar15 = plVar13 + 2;
      if (plVar15 == &local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (plVar13[2] != 0) {
          FUN_1400020a8();
        }
        plVar13[2] = local_88;
        local_88 = 0;
        *(int *)(plVar13 + 3) = (int)uStack_80;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_80._4_4_;
      }
      FUN_14000bbd8(&local_88,plVar15,0);
      FUN_1410d1eba(local_98,&local_88);
      plVar8 = local_98[0];
      plVar17 = local_98[0];
      if (*(code **)(*local_98[0] + 0x50) != FUN_144828418) {
        plVar17 = (longlong *)(**(code **)(*local_98[0] + 0x50))(local_98[0]);
      }
      FUN_1447a1fc0(plVar17);
      pcVar6 = *(code **)(*plVar8 + 0x28);
      if (pcVar6 == FUN_14482841c) {
        plVar17 = (longlong *)(plVar8[5] + 8);
        if (plVar8[5] == 0) {
          plVar17 = plVar8 + 3;
        }
      }
      else if (pcVar6 == (code *)&LAB_14010c34c) {
        plVar17 = plVar8 + 2;
      }
      else {
        plVar17 = (longlong *)(*pcVar6)(plVar8);
      }
      if (plVar15 != plVar17) {
        iVar2 = (int)plVar17[1];
        _Src = (void *)*plVar17;
        *(int *)(plVar13 + 3) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)plVar13 + 0x1c) == 0) {
          *(undefined4 *)((longlong)plVar13 + 0x1c) = 0;
        }
        else {
          FUN_1446dd670(plVar15,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*plVar15,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      puVar14 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        puVar14 = (undefined8 *)FUN_1446e60f4(*plVar23,&DAT_14cbd9068);
      }
      puVar7 = local_a8;
      param_2 = local_b0;
      pbVar5 = (byte *)*puVar14;
      if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(pbVar5 + 8);
      }
      FUN_1400b22c2(&local_88,uVar16);
      if (plVar13 + 10 == &local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (plVar13[10] != 0) {
          FUN_1400020a8();
        }
        plVar13[10] = local_88;
        local_88 = 0;
        *(int *)(plVar13 + 0xb) = (int)uStack_80;
        *(undefined4 *)((longlong)plVar13 + 0x5c) = uStack_80._4_4_;
      }
      puVar14 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        puVar14 = (undefined8 *)FUN_1446e60f4(*plVar23,&DAT_14cbd9048);
      }
      pbVar5 = (byte *)*puVar14;
      if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined8 *)(pbVar5 + 8);
      }
      FUN_1400b22c2(&local_88,uVar16);
      if (plVar13 + 4 == &local_88) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (plVar13[4] != 0) {
          FUN_1400020a8();
        }
        plVar13[4] = local_88;
        local_88 = 0;
        *(int *)(plVar13 + 5) = (int)uStack_80;
        *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_80._4_4_;
      }
      plVar15 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        plVar15 = (longlong *)FUN_1446e60f4(*plVar23,&DAT_14cbd9060);
      }
      if (*plVar15 == 0) {
        bVar11 = 0;
      }
      else {
        cVar10 = FUN_14000584e(*plVar15,0);
        bVar11 = cVar10 << 5;
      }
      *(byte *)(plVar13 + 0x11) = *(byte *)(plVar13 + 0x11) & 0xdf | bVar11;
      puVar14 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        puVar14 = (undefined8 *)FUN_1446e60f4(*plVar23,&DAT_14cbd9038);
      }
      if ((byte *)*puVar14 == (byte *)0x0) {
        bVar24 = false;
      }
      else {
        bVar24 = (*(byte *)*puVar14 & 3) != 0;
      }
      *(byte *)((longlong)plVar13 + 0x89) = *(byte *)((longlong)plVar13 + 0x89) & 0xfe | bVar24;
      plVar15 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        plVar15 = (longlong *)FUN_1446e60f4(*plVar23,&DAT_14cbd9040);
      }
      if (*plVar15 == 0) {
        bVar11 = *(byte *)(plVar13 + 0x11);
        bVar21 = 0;
      }
      else {
        bVar21 = 0;
        cVar10 = FUN_14000584e(*plVar15,0);
        bVar11 = *(byte *)(plVar13 + 0x11);
        if (cVar10 != '\0') {
          bVar21 = 0x80;
        }
      }
      *(byte *)(plVar13 + 0x11) = bVar11 & 0x7f | bVar21;
      plVar15 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        plVar15 = (longlong *)FUN_1446e60f4(*plVar23,&DAT_14cbd9050);
      }
      if (*plVar15 == 0) {
        bVar11 = *(byte *)((longlong)plVar13 + 0x89);
        bVar21 = 0;
      }
      else {
        bVar21 = 0;
        cVar10 = FUN_14000584e(*plVar15,0);
        bVar11 = *(byte *)((longlong)plVar13 + 0x89);
        if (cVar10 != '\0') {
          bVar21 = 8;
        }
      }
      *(byte *)((longlong)plVar13 + 0x89) = bVar11 & 0xf7 | bVar21;
      plVar15 = &DAT_14c9a1308;
      if (*plVar23 != 0) {
        plVar15 = (longlong *)FUN_1446e60f4(*plVar23,&DAT_14cbd9008);
      }
      if (*plVar15 == 0) {
        bVar11 = 1;
      }
      else {
        bVar11 = FUN_14000584e(*plVar15,1);
      }
      *(byte *)(plVar13 + 0x11) = *(byte *)(plVar13 + 0x11) & 0xfe | bVar11;
      plVar13[0x10] = local_c0;
      pcVar6 = (code *)*puVar7;
      if (pcVar6 != (code *)0x0) {
        plVar15 = (longlong *)puVar7[2];
        if ((longlong *)puVar7[2] == (longlong *)0x0) {
          plVar15 = local_b8;
        }
        uVar16 = (**(code **)(*plVar15 + 8))();
        (*pcVar6)(uVar16,plVar13,plVar23);
      }
      puVar14 = &DAT_14c9a1308;
      if (*(longlong *)(*param_2 + lVar20) != 0) {
        puVar14 = (undefined8 *)FUN_1446e60f4(*(longlong *)(*param_2 + lVar20),&DAT_14cbd9038);
      }
      pbVar5 = (byte *)*puVar14;
      if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) != 0)) {
        puVar14 = &DAT_14c9a1270;
        if ((*pbVar5 & 2) != 0) {
          puVar14 = *(undefined8 **)(pbVar5 + 8);
        }
        FUN_1410d165e(local_c8,puVar14,local_c0 + 1,puVar7);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d1d12 FUN_1410d1d12 body=70 status=ok
// SIG undefined FUN_1410d1d12(void)

longlong FUN_1410d1d12(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1410d2002(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  FUN_1410d1d58(lVar2,1);
  return lVar2;
}



// FUNCTION 1410d1d58 FUN_1410d1d58 body=41 status=ok
// SIG undefined FUN_1410d1d58(void)

void FUN_1410d1d58(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1410d1d82(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 1410d1d82 FUN_1410d1d82 body=311 status=ok
// SIG undefined FUN_1410d1d82(void)

longlong FUN_1410d1d82(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1400b22c2(param_1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x20,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x30,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x40,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x50,&DAT_149e02088);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  *(longlong **)(param_1 + 0x60) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x68) = DAT_14c844848;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 5;
  *(byte *)(param_1 + 0x89) = *(byte *)(param_1 + 0x89) & 0xe0;
  return param_1;
}



// FUNCTION 1410d1eba FUN_1410d1eba body=328 status=ok
// SIG undefined FUN_1410d1eba(void)

longlong * FUN_1410d1eba(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (DAT_14cb8d378 != 0) {
    plVar2 = (longlong *)FUN_144837462();
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      if (DAT_14cb91eb0 == 0) {
        uVar4 = FUN_14580b51a();
        DAT_14cb91eb0 = FUN_140002ddd(FUN_1418b7497,uVar4,L"GbxUIDisplayDataDef_LocalizedText");
        if (DAT_14cb91eb0 == 0) goto LAB_1410d1f5d;
      }
      if ((*(int *)(DAT_14cb91eb0 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cb91eb0 + 0x38) * 8)
          == DAT_14cb91eb0 + 0x30)) {
        plVar2 = plVar2 + 3;
        goto LAB_1410d1f14;
      }
    }
  }
LAB_1410d1f5d:
  plVar2 = (longlong *)&DAT_14c844840;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (undefined8 *)FUN_14494321d();
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
LAB_1410d1f14:
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 1410d2002 FUN_1410d2002 body=275 status=ok
// SIG undefined FUN_1410d2002(void)

void FUN_1410d2002(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x90;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1410d2116 FUN_1410d2116 body=108 status=ok
// SIG undefined FUN_1410d2116(void)

void FUN_1410d2116(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  iVar1 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
    FUN_146564434((longlong *)(param_1 + 0xa0),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001410d216e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  return;
}



// FUNCTION 1410d2182 FUN_1410d2182 body=504 status=ok
// SIG undefined FUN_1410d2182(void)

void FUN_1410d2182(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  int local_a0;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1410d29a6(param_2,param_3);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_145779e36(&local_b8);
  lVar4 = local_b8;
  lVar12 = (longlong)(int)uStack_b0;
  if (lVar12 != 0) {
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(lVar4 + lVar11);
      piVar6 = *(int **)(lVar3 + 8);
      if (piVar6 == (int *)0x0) {
        piVar6 = &DAT_14c9485f0;
      }
      if (((*piVar6 == 0) || (iVar2 = piVar6[1], iVar2 == 0)) || (*piVar6 == DAT_14c948000)) {
LAB_1410d22bd:
        local_a0 = DAT_14c948620;
        local_a8 = DAT_14c948618;
      }
      else {
        if ((iVar2 < 2) && (piVar6[9] < 1)) {
          puVar7 = (ulonglong *)(piVar6 + 2);
        }
        else {
          puVar7 = *(ulonglong **)(piVar6 + 6);
        }
        if (iVar2 < 1) goto LAB_1410d22bd;
        local_a0 = (int)puVar7[1];
        local_a8 = *puVar7;
      }
      uVar10 = local_a8 & 0xffffffff;
      if (local_a0 != 0) {
        uVar5 = FUN_144a78877(uVar10,local_a0);
        uVar10 = (ulonglong)uVar5;
      }
      uVar8 = FUN_1410d237c(param_3,uVar10,&local_a8);
      local_a8 = 0;
      local_98 = (longlong *)0x0;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      local_d8 = 1;
      FUN_1410d25a7(lVar3,uVar8,&local_c8,&local_a8);
      plVar9 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar6 = (int *)((longlong)plVar9 + 0xc);
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (*piVar6 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_a8 != 0) {
        plVar9 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar9 = local_88;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      lVar11 = lVar11 + 8;
    } while (lVar12 * 8 != lVar11);
  }
  if (local_b8 != 0) {
    FUN_1400020a8(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d237c FUN_1410d237c body=343 status=ok
// SIG undefined FUN_1410d237c(void)

longlong FUN_1410d237c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = FUN_1410d24d4();
  if (iVar3 != -1) {
    if (*param_1 + (longlong)iVar3 * 0x28 != 0) {
      lVar1 = *param_1 + (longlong)iVar3 * 0x28;
      goto LAB_1410d2479;
    }
  }
  FUN_1410d27c0(param_1,local_48);
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *local_40 = *param_3;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_1410d2534(param_1,param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar3 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x24) = param_2;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar3;
      FUN_1410d2ad2(param_1);
    }
  }
  lVar1 = *param_1 + (longlong)local_48[0] * 0x28;
LAB_1410d2479:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d24d4 FUN_1410d24d4 body=95 status=ok
// SIG undefined FUN_1410d24d4(void)

int FUN_1410d24d4(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410d2534 FUN_1410d2534 body=115 status=ok
// SIG undefined FUN_1410d2534(void)

undefined8 FUN_1410d2534(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_1410d24d4(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_14891830e(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1410d25a7 FUN_1410d25a7 body=399 status=ok
// SIG undefined FUN_1410d25a7(void)

void FUN_1410d25a7(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  char param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x68);
    if (param_5 == '\0') {
      if (iVar1 != 0) {
LAB_1410d2614:
        lVar10 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar10);
          if ((param_5 == '\0') || (*(char *)(lVar4 + 0x750) == '\0')) {
            pcVar5 = (code *)*param_4;
            if (pcVar5 != (code *)0x0) {
              plVar8 = param_4 + 4;
              if ((longlong *)param_4[2] != (longlong *)0x0) {
                plVar8 = (longlong *)param_4[2];
              }
              local_58 = lVar4;
              uVar9 = (**(code **)(*plVar8 + 8))();
              cVar6 = (*pcVar5)(uVar9,&local_58,local_60);
              if (cVar6 == '\0') goto LAB_1410d2697;
            }
            piVar7 = *(int **)(lVar4 + 8);
            if (piVar7 == (int *)0x0) {
              piVar7 = &DAT_14c9485f0;
            }
            if (((*piVar7 == 0) || (iVar2 = piVar7[1], iVar2 == 0)) || (*piVar7 == DAT_14c948000)) {
LAB_1410d26c8:
              local_50 = DAT_14c948620;
              local_58 = DAT_14c948618;
            }
            else {
              if ((iVar2 < 2) && (piVar7[9] < 1)) {
                plVar8 = (longlong *)(piVar7 + 2);
              }
              else {
                plVar8 = *(longlong **)(piVar7 + 6);
              }
              if (iVar2 < 1) goto LAB_1410d26c8;
              local_50 = (int)plVar8[1];
              local_58 = *plVar8;
            }
            FUN_1410d2738(param_2,&local_58);
          }
LAB_1410d2697:
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar1 * 8 != lVar10);
      }
    }
    else if (iVar1 != 0) {
      lVar10 = 0;
      do {
        if (*(char *)(*(longlong *)(lVar3 + lVar10) + 0x750) == '\0') goto LAB_1410d2614;
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 - lVar10 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d2738 FUN_1410d2738 body=135 status=ok
// SIG undefined FUN_1410d2738(void)

int FUN_1410d2738(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if ((*(int *)(lVar4 + uVar3) == *param_2) && (*(int *)(lVar4 + 8 + uVar3) == param_2[2])) {
        iVar2 = (int)(uVar3 >> 2) * -0x55555555;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0xc;
    } while (lVar5 * 0xc != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446dd912(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(int *)(lVar4 + 8 + lVar5 * 0xc) = param_2[2];
  *(undefined8 *)(lVar4 + lVar5 * 0xc) = *(undefined8 *)param_2;
  return iVar1;
}



// FUNCTION 1410d27c0 FUN_1410d27c0 body=485 status=ok
// SIG undefined FUN_1410d27c0(void)

int * FUN_1410d27c0(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1410d29a6 FUN_1410d29a6 body=299 status=ok
// SIG undefined FUN_1410d29a6(void)

void FUN_1410d29a6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    FUN_1457f4184(0,&local_68);
    if ((longlong)(int)uStack_60 != 0) {
      local_70 = local_68 + (int)uStack_60;
      plVar7 = local_68;
      do {
        lVar4 = *plVar7;
        local_58 = lVar4 + 0x10;
        FUN_1457fd4b0(param_2,&local_4c,&local_58);
        iVar2 = *(int *)(lVar4 + 0x68);
        if ((longlong)iVar2 != 0) {
          lVar1 = *param_2 + (longlong)local_4c * 0x28;
          lVar4 = *(longlong *)(lVar4 + 0x60);
          lVar8 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + lVar8);
            iVar3 = *(int *)(lVar1 + 0x18);
            *(uint *)(lVar1 + 0x18) = iVar3 + 1U;
            if (*(uint *)(lVar1 + 0x1c) < iVar3 + 1U) {
              FUN_1446dd912((longlong *)(lVar1 + 0x10),iVar3);
            }
            lVar6 = *(longlong *)(lVar1 + 0x10);
            *(undefined4 *)(lVar6 + 8 + (longlong)iVar3 * 0xc) = *(undefined4 *)(lVar5 + 0x18);
            *(undefined8 *)(lVar6 + (longlong)iVar3 * 0xc) = *(undefined8 *)(lVar5 + 0x10);
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar2 * 8 != lVar8);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != local_70);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d2ad2 FUN_1410d2ad2 body=605 status=ok
// SIG undefined FUN_1410d2ad2(void)

void FUN_1410d2ad2(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_78 = plVar13;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    plVar13 = local_78;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        local_70 = uVar5;
        if (piVar1[2] == 0) {
          iVar4 = *piVar1;
        }
        else {
          iVar4 = FUN_144a78877(*piVar1,piVar1[2]);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[9] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[8] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_1410d2cca;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_1410d2cca:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d2d30 FUN_1410d2d30 body=2802 status=ok
// SIG undefined FUN_1410d2d30(void)

void FUN_1410d2d30(longlong param_1,uint param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  ushort uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  char cVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  uint uVar27;
  double *pdVar28;
  undefined4 *puVar29;
  int iVar30;
  longlong lVar31;
  int *piVar32;
  int iVar33;
  byte bVar34;
  int iVar35;
  float *pfVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  int *piVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  undefined1 auStack_c8 [44];
  uint local_9c;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
    uVar41 = param_2 & 0x3fffffff;
    piVar32 = *(int **)(param_1 + 0x2e8);
    piVar40 = piVar32 + (longlong)*(int *)(param_1 + 0x2f0) * 0x68;
    iVar33 = param_2 * 4;
    do {
      plVar11 = *(longlong **)(piVar32 + 0x60);
      lVar31 = *plVar11;
      lVar23 = (longlong)(int)plVar11[1];
      if (*(char *)(*(longlong *)(lVar31 + 0x200) + lVar23) == '\x01') {
        iVar35 = piVar32[1];
        if (iVar35 < 1) {
LAB_1410d2de9:
          bVar21 = 0;
        }
        else {
          iVar39 = *piVar32;
          iVar30 = -1;
          do {
            if (iVar39 < 1) {
              iVar39 = piVar32[6];
            }
            if (*(int *)(*(longlong *)(piVar32 + 4) + -4 + (longlong)iVar39 * 8) * 4 < iVar33)
            break;
            iVar39 = iVar39 + -1;
            iVar35 = iVar35 + -1;
            iVar30 = iVar39;
          } while (iVar35 != 0);
          if ((iVar30 == -1) ||
             (pdVar28 = (double *)
                        ((longlong)*(int *)(*(longlong *)(piVar32 + 4) + (longlong)iVar30 * 8) *
                         0x30 + *(longlong *)(param_1 + 0x18)), pdVar28 == (double *)0x0))
          goto LAB_1410d2de9;
          dVar8 = *(double *)(*(longlong *)(lVar31 + 0x28) + lVar23 * 0x18);
          if ((dVar8 != *pdVar28) || (NAN(dVar8) || NAN(*pdVar28))) {
LAB_1410d313f:
            FUN_1410d3824(plVar11);
            bVar21 = 1;
            lVar31 = 1;
          }
          else {
            lVar37 = *(longlong *)(lVar31 + 0x28) + lVar23 * 0x18;
            dVar8 = *(double *)(lVar37 + 8);
            if ((dVar8 != pdVar28[1]) ||
               (((NAN(dVar8) || NAN(pdVar28[1]) ||
                 (dVar8 = *(double *)(lVar37 + 0x10), dVar8 != pdVar28[2])) ||
                (NAN(dVar8) || NAN(pdVar28[2]))))) goto LAB_1410d313f;
            lVar31 = *(longlong *)(lVar31 + 0x48);
            lVar23 = lVar23 * 0x10;
            lVar37 = -(ulonglong)
                      (*(float *)((longlong)pdVar28 + 0x2c) != *(float *)(lVar31 + 0xc + lVar23));
            lVar38 = -(ulonglong)
                      (*(float *)((longlong)pdVar28 + 0x24) != *(float *)(lVar31 + 4 + lVar23));
            auVar12._8_4_ = (int)lVar38;
            auVar12._0_8_ = -(ulonglong)(*(float *)(pdVar28 + 4) != *(float *)(lVar31 + lVar23));
            auVar12._12_4_ = (int)((ulonglong)lVar38 >> 0x20);
            iVar35 = movmskpd((int)lVar23,auVar12);
            auVar13._8_4_ = (int)lVar37;
            auVar13._0_8_ = -(ulonglong)(*(float *)(pdVar28 + 5) != *(float *)(lVar31 + 8 + lVar23))
            ;
            auVar13._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
            uVar27 = movmskpd((int)lVar31,auVar13);
            if ((uVar27 & 0x3fffffff) != 0 || iVar35 != 0) goto LAB_1410d313f;
            bVar21 = 1;
            lVar31 = 0;
          }
        }
        bVar34 = 0;
        plVar26 = (longlong *)0x0;
        if (*(char *)((longlong)plVar11 + 0xc) != '\0') {
          plVar26 = plVar11;
        }
        iVar35 = piVar32[0x11];
        if (0 < iVar35) {
          iVar39 = piVar32[0x10];
          iVar30 = -1;
          do {
            if (iVar39 < 1) {
              iVar39 = piVar32[0x16];
            }
            if (*(int *)(*(longlong *)(piVar32 + 0x14) + -4 + (longlong)iVar39 * 8) * 4 < iVar33)
            break;
            iVar39 = iVar39 + -1;
            iVar35 = iVar35 + -1;
            iVar30 = iVar39;
          } while (iVar35 != 0);
          if ((iVar30 == -1) ||
             (pfVar36 = (float *)((longlong)
                                  *(int *)(*(longlong *)(piVar32 + 0x14) + (longlong)iVar30 * 8) *
                                  0x18 + *(longlong *)(param_1 + 0x38)), pfVar36 == (float *)0x0)) {
            bVar34 = 0;
          }
          else {
            lVar37 = (longlong)(int)plVar26[1];
            lVar23 = *(longlong *)(*plVar26 + 0x278);
            fVar4 = *(float *)(lVar23 + lVar37 * 0xc);
            fVar5 = pfVar36[2];
            fVar6 = *pfVar36;
            fVar7 = pfVar36[1];
            if ((fVar4 == fVar6) && (!NAN(fVar4) && !NAN(fVar6))) {
              fVar4 = *(float *)(lVar23 + 4 + lVar37 * 0xc);
              if ((fVar4 == fVar7) && (!NAN(fVar4) && !NAN(fVar7))) {
                fVar4 = *(float *)(lVar23 + 8 + lVar37 * 0xc);
                if ((fVar4 == fVar5) && (!NAN(fVar4) && !NAN(fVar5))) {
                  lVar38 = *(longlong *)(*plVar26 + 0x290);
                  fVar4 = *(float *)(lVar38 + lVar37 * 0xc);
                  if ((fVar4 == pfVar36[3]) && (!NAN(fVar4) && !NAN(pfVar36[3]))) {
                    fVar4 = *(float *)(lVar38 + 4 + lVar37 * 0xc);
                    if ((fVar4 == pfVar36[4]) && (!NAN(fVar4) && !NAN(pfVar36[4]))) {
                      fVar4 = *(float *)(lVar38 + 8 + lVar37 * 0xc);
                      if ((fVar4 == pfVar36[5]) && (!NAN(fVar4) && !NAN(pfVar36[5]))) {
                        plVar26 = (longlong *)0x0;
                        bVar34 = 1;
                        goto LAB_1410d2e3c;
                      }
                    }
                  }
                }
              }
            }
            pfVar1 = (float *)(lVar23 + lVar37 * 0xc);
            *pfVar1 = fVar6;
            pfVar1[1] = fVar7;
            pfVar1[2] = fVar5;
            fVar4 = pfVar36[5];
            lVar37 = plVar26[1];
            lVar23 = *(longlong *)(*plVar26 + 0x290);
            *(undefined8 *)(lVar23 + (longlong)(int)lVar37 * 0xc) = *(undefined8 *)(pfVar36 + 3);
            *(float *)(lVar23 + 8 + (longlong)(int)lVar37 * 0xc) = fVar4;
            bVar34 = 1;
            plVar26 = (longlong *)&DAT_00000001;
          }
        }
LAB_1410d2e3c:
        if ((byte)(bVar21 & (byte)lVar31 | bVar34 & (byte)plVar26) == 1) {
          if (*(char *)(param_1 + 0x3f1) == '\x01') {
            bVar21 = *(byte *)((longlong)plVar11 + 0xc);
            plVar26 = plVar11;
            if (bVar21 == 0) {
              plVar26 = (longlong *)0x0;
            }
            iVar35 = piVar32[0x31];
            if (0 < iVar35) {
              iVar39 = piVar32[0x30];
              iVar30 = -1;
              do {
                if (iVar39 < 1) {
                  iVar39 = piVar32[0x36];
                }
                if (*(int *)(*(longlong *)(piVar32 + 0x34) + -4 + (longlong)iVar39 * 8) * 4 < iVar33
                   ) break;
                iVar39 = iVar39 + -1;
                iVar35 = iVar35 + -1;
                iVar30 = iVar39;
              } while (iVar35 != 0);
              if ((iVar30 != -1) &&
                 (puVar29 = (undefined4 *)
                            ((longlong)
                             *(int *)(*(longlong *)(piVar32 + 0x34) + (longlong)iVar30 * 8) * 0x40 +
                            *(longlong *)(param_1 + 0xd8)), puVar29 != (undefined4 *)0x0)) {
                lVar31 = *(longlong *)(*plVar26 + 0x2a8);
                lVar23 = (longlong)(int)plVar26[1] * 0x40;
                *(undefined8 *)(lVar31 + 0x30 + lVar23) = *(undefined8 *)(puVar29 + 0xc);
                uVar14 = *puVar29;
                uVar15 = puVar29[1];
                uVar16 = puVar29[2];
                uVar17 = puVar29[3];
                uVar18 = *(undefined8 *)(puVar29 + 4);
                uVar19 = *(undefined8 *)(puVar29 + 6);
                uVar20 = *(undefined8 *)(puVar29 + 10);
                puVar3 = (undefined8 *)(lVar31 + 0x20 + lVar23);
                *puVar3 = *(undefined8 *)(puVar29 + 8);
                puVar3[1] = uVar20;
                puVar3 = (undefined8 *)(lVar31 + 0x10 + lVar23);
                *puVar3 = uVar18;
                puVar3[1] = uVar19;
                puVar29 = (undefined4 *)(lVar31 + lVar23);
                *puVar29 = uVar14;
                puVar29[1] = uVar15;
                puVar29[2] = uVar16;
                puVar29[3] = uVar17;
                bVar21 = *(byte *)((longlong)plVar11 + 0xc);
              }
            }
            plVar26 = (longlong *)0x0;
            if (1 < bVar21) {
              plVar26 = plVar11;
            }
            iVar35 = piVar32[0x21];
            if (0 < iVar35) {
              iVar39 = piVar32[0x20];
              iVar30 = -1;
              do {
                if (iVar39 < 1) {
                  iVar39 = piVar32[0x26];
                }
                if (*(int *)(*(longlong *)(piVar32 + 0x24) + -4 + (longlong)iVar39 * 8) * 4 < iVar33
                   ) break;
                iVar39 = iVar39 + -1;
                iVar35 = iVar35 + -1;
                iVar30 = iVar39;
              } while (iVar35 != 0);
              if (((iVar30 != -1) &&
                  (lVar31 = (longlong)*(int *)(*(longlong *)(piVar32 + 0x24) + (longlong)iVar30 * 8)
                            * 0x2c + *(longlong *)(param_1 + 0x78), lVar31 != 0)) &&
                 (plVar26 != (longlong *)0x0)) {
                if (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xd +
                             (longlong)(int)plVar26[1] * 0x10) != *(char *)(lVar31 + 0x29)) {
                  if (*(char *)(lVar31 + 0x29) == '\0') {
                    FUN_140a36458(*(undefined8 *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8),plVar26);
                  }
                  else {
                    FUN_14016e00e();
                  }
                }
                if (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xb +
                             (longlong)(int)plVar26[1] * 0x10) != *(char *)(lVar31 + 0x1c)) {
                  FUN_1400d2fee(*(undefined8 *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8),plVar26);
                  goto LAB_1410d3109;
                }
                bVar21 = *(byte *)((longlong)plVar11 + 0xc);
              }
            }
            if ((plVar11 == (longlong *)0x0) || (bVar21 < 2)) {
              if ((plVar11 != (longlong *)0x0) && (2 < bVar21)) {
                FUN_1456cc488(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8) + 0x2c8),
                              *(undefined8 *)
                               (*(longlong *)(*plVar11 + 0x98) + (longlong)(int)plVar11[1] * 8));
              }
            }
            else {
              FUN_1456cc2b4(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x3d8) + 0x9c8) + 0x2c8),
                            *(undefined8 *)
                             (*(longlong *)(*plVar11 + 0x98) + (longlong)(int)plVar11[1] * 8));
            }
          }
          else {
            local_9c = uVar41;
            iVar35 = FUN_142a2ccc8(piVar32 + 8,uVar41);
            if ((iVar35 != -1) &&
               (lVar31 = (longlong)*(int *)(*(longlong *)(piVar32 + 0xc) + (longlong)iVar35 * 8) *
                         0x20 + *(longlong *)(param_1 + 0x98), lVar31 != 0)) {
              plVar26 = *(longlong **)(*(longlong *)(param_1 + 0x3d8) + 0x9c8);
              FUN_1400d25b0(plVar26 + 0x20,plVar11);
              (**(code **)(*plVar26 + 0x18))(plVar26,plVar11);
              FUN_1400d260a(plVar11,lVar31);
            }
            bVar21 = *(byte *)((longlong)plVar11 + 0xc);
            plVar26 = (longlong *)0x0;
            if (bVar21 != 0) {
              plVar26 = plVar11;
            }
            iVar35 = FUN_142a2cd0a(piVar32 + 0x30,local_9c);
            if ((iVar35 != -1) &&
               (puVar29 = (undefined4 *)
                          ((longlong)*(int *)(*(longlong *)(piVar32 + 0x34) + (longlong)iVar35 * 8)
                           * 0x40 + *(longlong *)(param_1 + 0xd8)), puVar29 != (undefined4 *)0x0)) {
              lVar31 = *(longlong *)(*plVar26 + 0x2a8);
              lVar23 = (longlong)(int)plVar26[1] * 0x40;
              *(undefined8 *)(lVar31 + 0x30 + lVar23) = *(undefined8 *)(puVar29 + 0xc);
              uVar14 = *puVar29;
              uVar15 = puVar29[1];
              uVar16 = puVar29[2];
              uVar17 = puVar29[3];
              uVar18 = *(undefined8 *)(puVar29 + 4);
              uVar19 = *(undefined8 *)(puVar29 + 6);
              uVar20 = *(undefined8 *)(puVar29 + 10);
              puVar3 = (undefined8 *)(lVar31 + 0x20 + lVar23);
              *puVar3 = *(undefined8 *)(puVar29 + 8);
              puVar3[1] = uVar20;
              puVar3 = (undefined8 *)(lVar31 + 0x10 + lVar23);
              *puVar3 = uVar18;
              puVar3[1] = uVar19;
              puVar29 = (undefined4 *)(lVar31 + lVar23);
              *puVar29 = uVar14;
              puVar29[1] = uVar15;
              puVar29[2] = uVar16;
              puVar29[3] = uVar17;
              bVar21 = *(byte *)((longlong)plVar11 + 0xc);
            }
            plVar26 = (longlong *)0x0;
            if (1 < bVar21) {
              plVar26 = plVar11;
            }
            iVar35 = FUN_142a2cd4c(piVar32 + 0x18,local_9c);
            if ((iVar35 != -1) &&
               ((longlong)*(int *)(*(longlong *)(piVar32 + 0x1c) + (longlong)iVar35 * 8) * 0x30 +
                *(longlong *)(param_1 + 0x58) != 0)) {
              FUN_1400d29a8(plVar26);
              bVar21 = *(byte *)((longlong)plVar11 + 0xc);
            }
            plVar26 = (longlong *)0x0;
            if (1 < bVar21) {
              plVar26 = plVar11;
            }
            iVar35 = FUN_142a2cdb4(piVar32 + 0x20,local_9c);
            if ((iVar35 != -1) &&
               ((longlong)*(int *)(*(longlong *)(piVar32 + 0x24) + (longlong)iVar35 * 8) * 0x2c +
                *(longlong *)(param_1 + 0x78) != 0)) {
              FUN_1400d2d3c(*(undefined8 *)(param_1 + 0x3d8),plVar26);
              bVar21 = *(byte *)((longlong)plVar11 + 0xc);
            }
            uVar41 = local_9c;
            plVar26 = (longlong *)0x0;
            if (1 < bVar21) {
              plVar26 = plVar11;
            }
            iVar35 = FUN_142a2cdfc(piVar32 + 0x28,local_9c);
            if ((iVar35 != -1) &&
               ((longlong)*(int *)(*(longlong *)(piVar32 + 0x2c) + (longlong)iVar35 * 8) * 0x70 +
                *(longlong *)(param_1 + 0xb8) != 0)) {
              FUN_1400d288a(plVar26);
            }
          }
LAB_1410d3109:
          if ((plVar11 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar11 + 0xc))) {
            lVar31 = (longlong)(int)plVar11[1] * 0x10;
            if ((*(char *)(*(longlong *)(*plVar11 + 0x2c0) + 0xb + lVar31) == '\x04') &&
               (lVar23 = *(longlong *)(*plVar11 + 0x1d0), 0 < *(int *)(lVar23 + 8 + lVar31))) {
              local_90 = (longlong *)(lVar23 + lVar31);
              lVar31 = 0;
              local_9c = uVar41;
              do {
                local_98 = *(longlong *)(*local_90 + 8 + lVar31 * 0x10);
                cVar22 = *(char *)(local_98 + 8);
                local_88 = lVar31;
                if (cVar22 == '\x01') {
                  lVar31 = local_98 + 0x40;
                  if (*(longlong *)(local_98 + 0x98) != 0) {
                    lVar31 = *(longlong *)(local_98 + 0x98);
                  }
                  iVar35 = *(int *)(local_98 + 0xa0);
                  if ((longlong)iVar35 != 0) {
                    lVar23 = 0;
                    do {
                      lVar37 = *(longlong *)(lVar31 + 0x10 + lVar23);
                      if ((lVar37 != 0) &&
                         ((((*(ushort *)(lVar37 + 0x374) & 2) == 0 ||
                           ((*(longlong *)(lVar37 + 0x140) != 0 &&
                            ((*(byte *)(*(longlong *)(lVar37 + 0x140) + 10) & 0x40) != 0)))) &&
                          ((*(ushort *)(lVar37 + 0x374) & 1) != 0)))) {
                        FUN_1400c31d0();
                      }
                      lVar23 = lVar23 + 0x58;
                    } while ((longlong)iVar35 * 0x58 - lVar23 != 0);
                    cVar22 = *(char *)(local_98 + 8);
                    goto LAB_1410d32f0;
                  }
                }
                else {
LAB_1410d32f0:
                  if (cVar22 == '\0') {
                    lVar31 = local_98 + 0x50;
                    local_68 = 0x100000000;
                    local_58 = 0xffffffff;
                    local_50 = 0;
                    local_60 = lVar31;
                    if (*(int *)(local_98 + 0x68) == 0) {
                      uVar43 = 1;
                      iVar35 = 0;
                      local_58._4_4_ = 0;
                      uVar42 = 0;
                      uVar41 = 0xffffffff;
                    }
                    else {
                      FUN_1449c0562(&local_68);
                      uVar42 = local_68 & 0xffffffff;
                      uVar43 = local_68 >> 0x20;
                      iVar35 = *(int *)(local_98 + 0x68);
                      uVar41 = (uint)local_58;
                    }
                    lVar23 = local_60;
                    iVar39 = local_58._4_4_;
                    local_80 = lVar31;
                    iVar30 = local_50;
                    if (local_58._4_4_ != iVar35 || local_60 != lVar31) {
                      do {
                        lVar31 = *(longlong *)
                                  (*(longlong *)(local_98 + 0x40) + 0x10 + (longlong)iVar39 * 0x20);
                        if (((lVar31 != 0) &&
                            (((*(ushort *)(lVar31 + 0x374) & 2) == 0 ||
                             ((*(longlong *)(lVar31 + 0x140) != 0 &&
                              ((*(byte *)(*(longlong *)(lVar31 + 0x140) + 10) & 0x40) != 0)))))) &&
                           ((*(ushort *)(lVar31 + 0x374) & 1) != 0)) {
                          local_78 = uVar42;
                          local_70 = uVar43;
                          FUN_1400c31d0();
                          uVar42 = local_78;
                          uVar43 = local_70;
                        }
                        uVar41 = uVar41 & ~(uint)uVar43;
                        lVar31 = *(longlong *)(lVar23 + 0x10);
                        if (*(longlong *)(lVar23 + 0x10) == 0) {
                          lVar31 = lVar23;
                        }
                        iVar10 = *(int *)(lVar23 + 0x18);
                        iVar39 = (int)uVar42;
                        lVar37 = (longlong)iVar39;
                        uVar27 = *(uint *)(lVar31 + lVar37 * 4) & uVar41;
                        if (uVar27 == 0) {
                          iVar24 = iVar10 + 0x1e;
                          if (-1 < iVar10 + -1) {
                            iVar24 = iVar10 + -1;
                          }
                          iVar24 = iVar24 >> 5;
                          iVar30 = iVar30 + 0x20;
                          iVar25 = iVar24;
                          if (iVar24 < iVar39) {
                            iVar25 = iVar39;
                          }
                          if (iVar39 < iVar24) {
                            lVar38 = 0;
                            do {
                              uVar27 = *(uint *)(lVar31 + lVar37 * 4 + 4 + lVar38 * 4);
                              if (uVar27 != 0) {
                                uVar42 = (ulonglong)(iVar39 + (int)lVar38 + 1);
                                uVar41 = 0xffffffff;
                                goto LAB_1410d3458;
                              }
                              iVar30 = iVar30 + 0x20;
                              lVar38 = lVar38 + 1;
                            } while (iVar25 - lVar37 != lVar38);
                            uVar41 = 0xffffffff;
                            iVar39 = iVar25;
                          }
                          uVar42 = (ulonglong)(iVar39 + 1);
                          iVar39 = iVar10;
                        }
                        else {
LAB_1410d3458:
                          uVar43 = (ulonglong)(-uVar27 & uVar27);
                          uVar2 = uVar43 * 2 + 1;
                          lVar31 = 0x3f;
                          if (uVar2 != 0) {
                            for (; uVar2 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                            }
                          }
                          iVar39 = (iVar30 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                          if (iVar10 <= iVar39) {
                            iVar39 = iVar10;
                          }
                        }
                      } while ((iVar39 != iVar35) || (lVar23 != local_80));
                    }
                  }
                }
                if ((*(char *)(local_98 + 8) == '\x02') &&
                   (lVar31 = *(longlong *)(local_98 + 200), lVar31 != 0)) {
                  uVar9 = *(ushort *)(lVar31 + 0x374);
                  if ((uVar9 & 2) == 0) {
                    uVar9 = uVar9 & 1;
                  }
                  else {
                    if ((*(longlong *)(lVar31 + 0x140) == 0) || ((uVar9 & 1) == 0))
                    goto LAB_1410d32fe;
                    uVar9 = *(ushort *)(*(longlong *)(lVar31 + 0x140) + 10) & 0x40;
                  }
                  if (uVar9 != 0) {
                    FUN_1400c31d0();
                  }
                }
LAB_1410d32fe:
                lVar31 = local_88 + 1;
                uVar41 = local_9c;
              } while (lVar31 < (int)local_90[1]);
            }
          }
        }
      }
      piVar32 = piVar32 + 0x68;
    } while (piVar32 != piVar40);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d3824 FUN_1410d3824 body=142 status=ok
// SIG undefined FUN_1410d3824(void)

void FUN_1410d3824(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1[1];
  lVar6 = *(longlong *)(*param_1 + 0x28);
  *(undefined8 *)(lVar6 + 0x10 + (longlong)(int)lVar5 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar6 + (longlong)(int)lVar5 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  uVar4 = param_2[5];
  puVar1 = (undefined8 *)(*(longlong *)(*param_1 + 0x48) + (longlong)(int)param_1[1] * 0x10);
  *puVar1 = param_2[4];
  puVar1[1] = uVar4;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    lVar6 = *(longlong *)(*param_1 + 0x28);
    lVar3 = (longlong)(int)param_1[1] * 0x18;
    lVar5 = *(longlong *)(*param_1 + 0x530);
    *(undefined8 *)(lVar5 + 0x10 + lVar3) = *(undefined8 *)(lVar6 + 0x10 + lVar3);
    puVar1 = (undefined8 *)(lVar6 + lVar3);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + lVar3);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    lVar6 = (longlong)(int)param_1[1] * 0x10;
    puVar1 = (undefined8 *)(*(longlong *)(*param_1 + 0x48) + lVar6);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(*(longlong *)(*param_1 + 0x548) + lVar6);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
  }
  return;
}



// FUNCTION 1410d38b2 FUN_1410d38b2 body=1123 status=ok
// SIG undefined FUN_1410d38b2(void)

void FUN_1410d38b2(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  undefined4 local_158;
  longlong local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined1 local_138;
  undefined8 local_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  longlong local_e8 [2];
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  char local_b8;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  longlong local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((param_3 == 0) || (*(longlong *)(param_3 + 0x78) == 0)) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x78) + 0x80), lVar3 == 0)) goto LAB_1410d3b4c;
  local_48 = FUN_1410d3e06(param_2,param_3);
  if ((local_48 != '\0') && (lVar7 = FUN_14119d4d6(lVar3), lVar7 != 0)) {
    iVar6 = *(int *)(param_1 + 0x1e4);
    if ((bool)*(char *)(param_1 + 0x1e0) == (lVar7 == param_3)) {
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_1410d3bb1;
      }
    }
    else {
LAB_1410d3bb1:
      *(bool *)(param_1 + 0x1e0) = lVar7 == param_3;
      *(int *)(param_1 + 0x1e4) = iVar6 + 1;
    }
    iVar6 = *(int *)(param_1 + 0x1ec);
    if (((bool)*(char *)(param_1 + 0x1e8) != (lVar7 != param_3)) ||
       (bVar9 = iVar6 == 0, iVar6 = 0, bVar9)) {
      *(bool *)(param_1 + 0x1e8) = lVar7 != param_3;
      *(int *)(param_1 + 0x1ec) = iVar6 + 1;
    }
  }
  iVar6 = *(int *)(param_2 + 0x178);
  local_68 = param_1;
  local_60 = param_3;
  local_58 = param_4;
  local_50 = lVar3;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  lVar3 = param_1 + 0x148;
  FUN_1410d3d66(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) != iVar6) {
    FUN_1457fd642(lVar3,iVar6);
  }
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  local_b8 = '\0';
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  local_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_7c = 0;
  cVar5 = FUN_1410d3f0c(&local_68,param_2 + 0x180);
  if (cVar5 == '\0') {
    iVar6 = *(int *)(param_1 + 0x1dc);
    if ((*(char *)(param_1 + 0x1d8) != '\0') || (bVar9 = iVar6 == 0, iVar6 = 0, bVar9)) {
      *(undefined1 *)(param_1 + 0x1d8) = 0;
      *(int *)(param_1 + 0x1dc) = iVar6 + 1;
    }
  }
  else {
    if ((int)local_b4 == 0 || local_b8 == '\0') {
      local_b8 = '\x01';
      local_b4 = CONCAT44(local_b4._4_4_,(int)local_b4 + 1);
    }
    FUN_1457fd6b0(param_1 + 0x160,local_e8);
    iVar6 = *(int *)(param_1 + 0x1dc);
    if ((*(char *)(param_1 + 0x1d8) == '\0') || (bVar9 = iVar6 == 0, iVar6 = 0, bVar9)) {
      *(undefined1 *)(param_1 + 0x1d8) = 1;
      *(int *)(param_1 + 0x1dc) = iVar6 + 1;
    }
    FUN_1457fd5fa(lVar3,local_e8);
  }
  local_138 = 0;
  local_168[0] = 0;
  local_168[1] = 0;
  local_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_134 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0;
  uStack_11c = 0;
  uStack_118 = 0;
  local_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  uStack_108 = 0;
  local_104 = 0;
  uStack_fc = 0;
  if ((longlong)*(int *)(param_2 + 0x178) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x170);
    lVar8 = (longlong)*(int *)(param_2 + 0x178) * 0x38;
    do {
      cVar5 = FUN_1410d3d16(lVar7,param_2 + 0x180);
      if ((cVar5 == '\0') && (cVar5 = FUN_1410d3f0c(&local_68,lVar7,local_168), cVar5 != '\0')) {
        FUN_1457fd5fa(lVar3,local_168);
      }
      lVar7 = lVar7 + 0x38;
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = (longlong *)CONCAT44(local_114,uStack_118);
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
  plVar4 = (longlong *)CONCAT44(uStack_124,uStack_128);
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
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_8c,uStack_90) != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)CONCAT44(local_94,uStack_98);
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
  plVar4 = (longlong *)CONCAT44(uStack_a4,uStack_a8);
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
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1410d3b4c:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d3d16 FUN_1410d3d16 body=80 status=ok
// SIG undefined FUN_1410d3d16(void)

undefined8 FUN_1410d3d16(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (((undefined8 *)*param_1 == (undefined8 *)0x0) || (*param_2 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)*param_1)();
    uVar2 = uVar2 & 0xffffffff;
  }
  if (((undefined8 *)param_1[2] == (undefined8 *)0x0) || (param_2[2] == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(code *)**(undefined8 **)param_1[2])();
  }
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | bVar1);
}



// FUNCTION 1410d3d66 FUN_1410d3d66 body=159 status=ok
// SIG undefined FUN_1410d3d66(void)

void FUN_1410d3d66(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-1];
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
      plVar3 = (longlong *)plVar4[-3];
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
      if (plVar4[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar4[-0xb] != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410d3e06 FUN_1410d3e06 body=260 status=ok
// SIG undefined FUN_1410d3e06(void)

undefined8 FUN_1410d3e06(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined **local_48;
  uint local_40;
  undefined4 uStack_3c;
  byte local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x350))(param_2,&local_48);
    if ((&DAT_149fc1b6e)[local_30] == '\x01') {
      if (((longlong *)CONCAT44(uStack_3c,local_40) == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*(longlong *)CONCAT44(uStack_3c,local_40) + 0x28))(), cVar3 == '\0'))
      goto LAB_1410d3e70;
LAB_1410d3e64:
      lVar1 = *(longlong *)(param_1 + 0x180);
      if (lVar1 == 0) goto LAB_1410d3e70;
      puVar4 = (undefined8 *)FUN_14127b0d4(&local_48);
      cVar3 = (**(code **)*puVar4)(puVar4,lVar1);
      if (cVar3 == '\0') goto LAB_1410d3e70;
      bVar2 = false;
    }
    else {
      if ((local_40 & 0xffffff) != 0) goto LAB_1410d3e64;
LAB_1410d3e70:
      bVar2 = true;
    }
    local_48 = &PTR_FUN_14a5af930;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    local_48 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])(&local_40);
    if (!bVar2) {
      uVar5 = 1;
      goto LAB_1410d3eb1;
    }
  }
  uVar5 = 0;
LAB_1410d3eb1:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1410d3f0c FUN_1410d3f0c body=516 status=ok
// SIG undefined FUN_1410d3f0c(void)

undefined8 FUN_1410d3f0c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x180))();
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_140d6e14c();
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
      if ((*(char *)(param_1 + 0x10) == '\x01') &&
         ((*(char *)((longlong)param_2 + 0x31) != '\x01' || (*(char *)(param_1 + 0x20) == '\0')))) {
        if (param_2[2] != 0) {
          cVar4 = FUN_140b70752(*(longlong *)(lVar5 + 0x30),
                                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe0));
          if (cVar4 != '\0') goto LAB_1410d3fa2;
        }
      }
      else {
LAB_1410d3fa2:
        local_48[2] = 0;
        local_48[3] = 0;
        local_48[0] = 0;
        local_48[1] = 0;
        local_68 = &local_58;
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        cVar4 = FUN_1418bfe34(*(undefined8 *)(param_1 + 8),param_2);
        if (cVar4 != '\0') {
LAB_1410d409b:
          FUN_140775496(param_3,local_48 + 2);
          FUN_140775496(param_3 + 0x18,local_48);
          FUN_14663732c(param_3 + 0x38,param_2);
          plVar3 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (local_48[0] != 0) {
            FUN_1400020a8();
          }
          if (local_48[2] != 0) {
            FUN_1400020a8();
          }
          uVar6 = 1;
          goto LAB_1410d407c;
        }
        if ((*(char *)(param_1 + 0x20) == '\x01') && (*(char *)((longlong)param_2 + 0x31) == '\x01')
           ) {
          cVar4 = FUN_140b66fcc(*(undefined8 *)(param_1 + 8),local_48 + 2,local_48,&local_58);
          if (cVar4 != '\0') goto LAB_1410d409b;
        }
        if (*param_2 != 0) {
          lVar5 = FUN_14127ae7a(*(undefined8 *)(param_1 + 0x18));
          if (lVar5 != 0) {
            cVar4 = FUN_140b66fcc(lVar5,local_48 + 2,local_48,&local_58);
            if (cVar4 != '\0') goto LAB_1410d409b;
          }
        }
        plVar3 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
        if (local_48[2] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar6 = 0;
LAB_1410d407c:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d4112 FUN_1410d4112 body=284 status=ok
// SIG undefined FUN_1410d4112(void)

undefined8 * FUN_1410d4112(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    iVar1 = *(int *)(param_2 + 4);
    pvVar2 = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 3,iVar1,0);
      memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  FUN_1410d422e(param_1 + 7,param_2 + 7);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 1410d422e FUN_1410d422e body=269 status=ok
// SIG undefined FUN_1410d422e(void)

undefined8 * FUN_1410d422e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Src;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[1];
  *param_1 = uVar4;
  param_1[1] = lVar5;
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
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[3];
  param_1[2] = uVar4;
  param_1[3] = lVar5;
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
  if (param_1 != param_2) {
    iVar3 = *(int *)(param_2 + 5);
    _Src = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 4,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)param_1[4],_Src,(longlong)iVar3 * 2);
      }
    }
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  return param_1;
}



// FUNCTION 1410d433c FUN_1410d433c body=327 status=ok
// SIG undefined FUN_1410d433c(void)

undefined8 FUN_1410d433c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    do {
      if (*(char *)(param_3 + 0x10 + lVar13) == '\0') {
        *(undefined1 *)(param_2 + 0x10 + lVar13) = 0;
        *(undefined8 *)(param_2 + 8 + lVar13) = *(undefined8 *)(param_3 + 8 + lVar13);
      }
      lVar1 = param_3 + lVar13;
      uVar5 = *(undefined4 *)(lVar1 + 0x18);
      uVar6 = *(undefined4 *)(lVar1 + 0x1c);
      uVar7 = *(undefined4 *)(lVar1 + 0x20);
      uVar8 = *(undefined4 *)(lVar1 + 0x24);
      uVar9 = *(undefined4 *)(lVar1 + 0x28);
      uVar10 = *(undefined4 *)(lVar1 + 0x2c);
      uVar11 = *(undefined4 *)(lVar1 + 0x30);
      lVar2 = param_2 + 0x48 + lVar13;
      *(undefined4 *)(lVar2 + -0x24) = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x20) = uVar9;
      *(undefined4 *)(lVar2 + -0x1c) = uVar10;
      *(undefined4 *)(lVar2 + -0x18) = uVar11;
      *(undefined4 *)(lVar2 + -0x30) = uVar5;
      *(undefined4 *)(lVar2 + -0x2c) = uVar6;
      *(undefined4 *)(lVar2 + -0x28) = uVar7;
      *(undefined4 *)(lVar2 + -0x24) = uVar8;
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(lVar1 + 0x40);
      FUN_1447715ec(lVar2,lVar1 + 0x48);
      *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(lVar1 + 0x70);
      if (param_2 + lVar13 != param_3 + lVar13) {
        FUN_14092228b(*(undefined8 *)(param_2 + 0x78 + lVar13),
                      *(undefined4 *)(param_2 + 0x80 + lVar13));
        iVar3 = *(int *)(param_3 + 0x80 + lVar13);
        uVar4 = *(undefined8 *)(param_3 + 0x78 + lVar13);
        *(int *)(param_2 + 0x80 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x84 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x84 + lVar13) = 0;
        }
        else {
          puVar12 = (undefined8 *)(param_2 + lVar13 + 0x78);
          FUN_1410d45da(puVar12,iVar3);
          FUN_1410d4556(*puVar12,uVar4,iVar3);
        }
      }
      *(undefined1 *)(param_2 + 0x88 + lVar13) = *(undefined1 *)(param_3 + 0x88 + lVar13);
      FUN_1410d4484(param_2 + lVar13 + 0x90,param_3 + lVar13 + 0x90);
      lVar13 = lVar13 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1410d4484 FUN_1410d4484 body=93 status=ok
// SIG undefined FUN_1410d4484(void)

undefined8 * FUN_1410d4484(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1405d7ab2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1410d4728(param_1,iVar1);
      FUN_1410d44e1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1410d44e1 FUN_1410d44e1 body=117 status=ok
// SIG undefined FUN_1410d44e1(void)

void FUN_1410d44e1(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar3);
      *(undefined2 *)puVar1 = 0;
      *(undefined8 *)((longlong)puVar1 + 4) = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      lVar2 = param_2 + 0x10 + lVar3;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar2 + -8);
      *puVar1 = *(undefined8 *)(lVar2 + -0x10);
      FUN_1447715ec();
      lVar3 = lVar3 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410d4556 FUN_1410d4556 body=132 status=ok
// SIG undefined FUN_1410d4556(void)

void FUN_1410d4556(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410d45da FUN_1410d45da body=334 status=ok
// SIG undefined FUN_1410d45da(void)

void FUN_1410d45da(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410d464c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1410d464c:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410d4728 FUN_1410d4728 body=330 status=ok
// SIG undefined FUN_1410d4728(void)

void FUN_1410d4728(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1410d4796;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_1410d4796:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410d4872 FUN_1410d4872 body=98 status=ok
// SIG undefined FUN_1410d4872(void)

void FUN_1410d4872(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140c602de();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1410d48d6(param_2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d48d6 FUN_1410d48d6 body=265 status=ok
// SIG undefined FUN_1410d48d6(void)

ulonglong FUN_1410d48d6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar7 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(lVar2 + uVar5 * 8);
      if ((((lVar6 == 0) || (lVar3 = FUN_140528a88(), lVar3 == 0)) ||
          (*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar2 + uVar5 * 8);
      }
      lVar3 = *param_2;
      if (((lVar3 == 0) || (lVar4 = FUN_140528a88(), lVar4 == 0)) ||
         ((*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
           lVar4 + 0x30)))) {
        lVar3 = 0;
      }
      else {
        lVar3 = *param_2;
      }
      if (lVar6 == lVar3) {
        if ((int)uVar5 != -1) goto LAB_1410d49b7;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1410d49e0(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_1410d49b7:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1410d49e0 FUN_1410d49e0 body=353 status=ok
// SIG undefined FUN_1410d49e0(void)

void FUN_1410d49e0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410d4a65;
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
LAB_1410d4a65:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410d4b42 FUN_1410d4b42 body=40 status=ok
// SIG undefined FUN_1410d4b42(void)

undefined8 FUN_1410d4b42(undefined8 param_1,int param_2)

{
  FUN_1410d4b6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410d4b6a FUN_1410d4b6a body=293 status=ok
// SIG undefined FUN_1410d4b6a(void)

void FUN_1410d4b6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b516250;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = &DAT_14a176f00;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = &PTR_FUN_14a177080;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_14472eb64(param_1 + 0x12,0);
  }
  param_1[0x18] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xbc)) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80;
    FUN_1446efbd8(param_1 + 0x14,0);
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410d4c90 FUN_1410d4c90 body=308 status=ok
// SIG undefined FUN_1410d4c90(void)

void FUN_1410d4c90(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    lVar5 = lVar3 + 0x460;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf8);
  }
  if (param_1 == (longlong *)0x0) {
    FUN_1406338de(lVar5,0);
    return;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar2 = *(int *)(lVar7 + 0x10);
  if (*(int *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar2 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar8 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar2;
    if (bVar8) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar2 = *(int *)(lVar7 + 0x10);
    bVar8 = iVar2 == 0;
    if (bVar8) {
      *(int *)(lVar7 + 0x10) = iVar6;
      iVar2 = 0;
    }
    UNLOCK();
    if (bVar8) {
      iVar2 = iVar6;
    }
  }
  FUN_1406338de(lVar5,CONCAT44(iVar2,uVar1));
  if (*(longlong *)(lVar3 + 0x1f0) == 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x458);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
  }
  FUN_1410d4dde(*puVar4,param_1);
  return;
}



// FUNCTION 1410d4dde FUN_1410d4dde body=1048 status=ok
// SIG undefined FUN_1410d4dde(void)

void FUN_1410d4dde(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined1 *_Dst;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  void **ppvVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124))) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar12 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x130);
    }
    iVar6 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar2 >> 0x10 ^ uVar2))
                              * 4);
    if (iVar6 != -1) {
      do {
        lVar12 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar6 * 0x60;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar6 * 0x60) == param_2) {
          ppvVar14 = (void **)(lVar12 + 8);
          if (ppvVar14 != (void **)0x0 && lVar12 != 0) {
            uVar16 = 0;
            local_78 = (uint *)0x0;
            local_70 = 0;
            local_98 = (void *)0x0;
            uStack_90 = 0;
            local_6c = 0xffffffff00000080;
            local_64 = 0;
            local_58 = (undefined1 *)0x0;
            local_50 = 0;
            if (&local_98 != ppvVar14) {
              iVar6 = *(int *)(lVar12 + 0x50);
              if ((ulonglong)(longlong)iVar6 < 2) {
                if (iVar6 != 0) goto LAB_1410d4f1a;
              }
              else {
                FUN_1446efa72(&local_58,0,iVar6,4);
LAB_1410d4f1a:
                _Dst = local_60;
                if (local_58 != (undefined1 *)0x0) {
                  _Dst = local_58;
                }
                pvVar10 = (void *)(lVar12 + 0x40);
                if (*(void **)(lVar12 + 0x48) != (void *)0x0) {
                  pvVar10 = *(void **)(lVar12 + 0x48);
                }
                memcpy(_Dst,pvVar10,(longlong)iVar6 << 2);
              }
              uVar2 = *(uint *)(lVar12 + 0x10);
              local_50 = iVar6;
              FUN_1401ad01a(&local_98,uVar2);
              iVar6 = (int)uStack_90;
              uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + uVar2);
              if ((uint)(uStack_90._4_4_ - iVar6) < uVar2) {
                FUN_1446efaca(&local_98);
              }
              local_6c = CONCAT44(*(undefined4 *)(lVar12 + 0x38),(int)local_6c);
              local_64 = *(undefined4 *)(lVar12 + 0x3c);
              uVar3 = *(int *)(lVar12 + 0x30) + 0x1fU & 0xffffffe0;
              local_70 = 0;
              if (((int)local_6c < (int)uVar3) || (0x80 < (int)local_6c)) {
                uVar7 = 0x80;
                if (0x80 < (int)uVar3) {
                  uVar7 = uVar3;
                }
                local_6c = CONCAT44(*(undefined4 *)(lVar12 + 0x38),uVar7);
                FUN_1446efbd8(local_88,0);
              }
              local_70 = *(int *)(lVar12 + 0x30);
              if (local_70 != 0) {
                pvVar10 = (void *)(lVar12 + 0x18);
                if (*(void **)(lVar12 + 0x28) != (void *)0x0) {
                  pvVar10 = *(void **)(lVar12 + 0x28);
                }
                puVar5 = local_88;
                if (local_78 != (uint *)0x0) {
                  puVar5 = local_78;
                }
                memcpy(puVar5,pvVar10,(ulonglong)(local_70 + 0x1fU >> 3 & 0xfffffffc));
              }
              if (uVar2 != 0) {
                memcpy(local_98,*ppvVar14,(longlong)(int)uVar2 << 4);
              }
            }
            iVar6 = local_70;
            if (local_70 == 0) {
              uVar15 = 1;
              iVar11 = 0;
              iVar4 = 0;
              goto LAB_1410d5056;
            }
            puVar5 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar5 = local_88;
            }
            uVar2 = *puVar5;
            if (uVar2 != 0) {
              uVar16 = 0;
              iVar11 = 0;
              goto LAB_1410d5026;
            }
            iVar4 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar4 = local_70 + -1;
            }
            uVar16 = 0;
            uVar15 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar15 = uVar16;
            }
            iVar11 = 0;
            goto LAB_1410d5012;
          }
          break;
        }
        iVar6 = *(int *)(lVar12 + 0x58);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1410d507b;
  while( true ) {
    iVar11 = iVar11 + 0x20;
    uVar2 = puVar5[uVar16 + 1];
    uVar16 = uVar16 + 1;
    if (uVar2 != 0) break;
LAB_1410d5012:
    if (uVar15 == uVar16) goto LAB_1410d505a;
  }
LAB_1410d5026:
  uVar15 = (ulonglong)(-uVar2 & uVar2);
  uVar1 = uVar15 * 2 + 1;
  lVar12 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
  if (local_70 <= iVar4) {
    iVar4 = local_70;
  }
LAB_1410d5056:
  if (iVar4 != local_70) {
    uVar2 = 0xffffffff;
    do {
      FUN_1405a424c(param_1,*(undefined8 *)((longlong)local_98 + (longlong)iVar4 * 0x10));
      uVar2 = ~(uint)uVar15 & uVar2;
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      iVar4 = (int)uVar16;
      lVar12 = (longlong)iVar4;
      uVar3 = puVar5[lVar12] & uVar2;
      if (uVar3 == 0) {
        iVar8 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar8 = local_70 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar4) {
          iVar9 = iVar4;
        }
        if (iVar4 < iVar8) {
          lVar13 = 0;
          do {
            uVar3 = puVar5[lVar12 + lVar13 + 1];
            if (uVar3 != 0) {
              uVar16 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar2 = 0xffffffff;
              goto LAB_1410d513d;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar2 = 0xffffffff;
          iVar4 = iVar9;
        }
        uVar16 = (ulonglong)(iVar4 + 1);
        iVar4 = local_70;
      }
      else {
LAB_1410d513d:
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar4) {
          iVar4 = local_70;
        }
      }
    } while (iVar4 != iVar6);
  }
LAB_1410d505a:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401acfe2(&local_98);
LAB_1410d507b:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d51f8 FUN_1410d51f8 body=502 status=ok
// SIG undefined FUN_1410d51f8(void)

void FUN_1410d51f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x2628) != 0) && (*(longlong *)(param_1 + 0x2630) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x2630) + 8))) goto LAB_1410d5306;
  uVar9 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_38,uVar9);
  if ((longlong *)(param_1 + 0x2628) != &local_38) {
    *(longlong *)(param_1 + 0x2628) = local_38;
    local_38 = 0;
    plVar3 = *(longlong **)(param_1 + 0x2630);
    *(longlong **)(param_1 + 0x2630) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x2630);
  if (plVar3 == (longlong *)0x0) goto LAB_1410d5306;
  iVar8 = (int)plVar3[1];
  do {
    if (iVar8 == 0) goto LAB_1410d5306;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar11 = iVar8 == iVar6;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar11);
  lVar4 = *(longlong *)(param_1 + 0x2628);
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
  if (lVar4 == 0) goto LAB_1410d5306;
  lVar10 = *(longlong *)(param_1 + 0x2650);
  if (lVar10 == 0) {
    local_38 = *(longlong *)(param_1 + 0x2640);
    lVar10 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar10;
    if (lVar10 != 0) goto LAB_1410d52e5;
  }
  else {
LAB_1410d52e5:
    lVar10 = FUN_1407c8d60(lVar10);
    if ((lVar10 != 0) && (lVar5 = *(longlong *)(lVar10 + 0x38), lVar5 != 0)) {
      uVar9 = FUN_1457fd810();
      cVar7 = FUN_1448093f4(lVar5,uVar9);
      if (cVar7 != '\0') {
        lVar5 = *(longlong *)(lVar10 + 0x38);
        plVar3 = *(longlong **)(lVar10 + 0x40);
        if (plVar3 != (longlong *)0x0) {
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
        }
        if ((lVar5 != 0) && (*(char *)(lVar5 + 8) == '\x01')) {
          FUN_1457fd84a(param_1,0);
        }
      }
    }
  }
  FUN_1410d5528(lVar4,param_1);
LAB_1410d5306:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


