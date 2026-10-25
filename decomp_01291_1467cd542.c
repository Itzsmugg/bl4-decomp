// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467cd542 FUN_1467cd542 body=115 status=ok
// SIG undefined FUN_1467cd542(void)

undefined8 * FUN_1467cd542(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8446f0) {
    FUN_144b3d300(&DAT_14c8446f0);
    if (DAT_14c8446f0 == -1) {
      FUN_140056680(&DAT_14c8446e0,L"<MISSING STRING TABLE ENTRY>");
      atexit((_func_5014 *)&LAB_1427604d8);
      _Init_thread_footer(&DAT_14c8446f0);
    }
  }
  return &DAT_14c8446e0;
}



// FUNCTION 1467cd5b6 FUN_1467cd5b6 body=4 status=ok
// SIG undefined FUN_1467cd5b6(void)

undefined1 FUN_1467cd5b6(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



// FUNCTION 1467cd5ba FUN_1467cd5ba body=26 status=ok
// SIG undefined FUN_1467cd5ba(void)

undefined8 FUN_1467cd5ba(longlong param_1,undefined8 param_2)

{
  FUN_1467e1cc6(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 1467cd5d4 FUN_1467cd5d4 body=190 status=ok
// SIG undefined FUN_1467cd5d4(void)

longlong * FUN_1467cd5d4(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_4;
  lVar4 = FUN_14001cc68(0x38,0x10);
  FUN_1467d6420(lVar4,param_2,param_3,&local_38);
  *param_1 = lVar4 + 0x10;
  param_1[1] = lVar4;
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
  if (*param_3 != 0) {
    FUN_1400020a8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467cd694 FUN_1467cd694 body=232 status=ok
// SIG undefined FUN_1467cd694(void)

ulonglong FUN_1467cd694(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  uVar5 = FUN_144afd4c3(param_2);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x20;
        if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x20) == *param_2) {
          if (lVar6 != 0) {
            lVar3 = *(longlong *)(lVar6 + 8);
            plVar4 = *(longlong **)(lVar6 + 0x10);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),lVar3 != 0);
            if (lVar3 != 0) {
              FUN_144a787a6(param_3,lVar3 + 0x10);
            }
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
            goto LAB_1467cd6c7;
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  uVar8 = 0;
LAB_1467cd6c7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return uVar8 & 0xffffffff;
}



// FUNCTION 1467cd77c FUN_1467cd77c body=78 status=ok
// SIG undefined FUN_1467cd77c(void)

void FUN_1467cd77c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_142761b58;
  local_20 = param_2;
  FUN_1467cd7cc();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cd7cc FUN_1467cd7cc body=306 status=ok
// SIG undefined FUN_1467cd7cc(void)

void FUN_1467cd7cc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar2 = param_1 + 0x30;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x48);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (uStack_50 != lVar2)) {
    do {
      cVar3 = (*(code *)*param_2)(param_2[1],*local_80 + (longlong)iStack_64 * 0x20,
                                  *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x20) + 0x10);
      if (cVar3 == '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar4));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cd900 FUN_1467cd900 body=229 status=ok
// SIG undefined FUN_1467cd900(void)

undefined8 * FUN_1467cd900(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  uVar4 = FUN_144afd4c3(param_3);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      uVar5 = 0;
      do {
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x20;
        if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x20) == *param_3) {
          if (lVar6 == 0) goto LAB_1467cd931;
          uVar5 = *(undefined8 *)(lVar6 + 8);
          plVar3 = *(longlong **)(lVar6 + 0x10);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            *param_2 = uVar5;
            param_2[1] = plVar3;
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
            goto LAB_1467cd93e;
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
      goto LAB_1467cd933;
    }
  }
LAB_1467cd931:
  uVar5 = 0;
LAB_1467cd933:
  *param_2 = uVar5;
  param_2[1] = 0;
LAB_1467cd93e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  return param_2;
}



// FUNCTION 1467cd9e6 FUN_1467cd9e6 body=406 status=ok
// SIG undefined FUN_1467cd9e6(void)

undefined8 * FUN_1467cd9e6(longlong param_1,undefined8 *param_2,int *param_3,longlong param_4)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  uVar1 = FUN_144afd4c3(param_3);
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar3 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 0x60;
        if (*(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 0x60) == *param_3) {
          if (((longlong *)(lVar3 + 8) != (longlong *)0x0 && lVar3 != 0) &&
             (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c))) {
            uVar1 = (uint)((ulonglong)param_4 >> 0x10);
            uVar5 = (uint)param_4 & 0xffff;
            lVar4 = lVar3 + 0x40;
            if (*(longlong *)(lVar3 + 0x48) != 0) {
              lVar4 = *(longlong *)(lVar3 + 0x48);
            }
            iVar2 = *(int *)(lVar4 + (ulonglong)
                                     (*(int *)(lVar3 + 0x50) - 1U &
                                     (int)((ulonglong)param_4 >> 0x20) +
                                     ((uint)param_4 << 0x10 | uVar5) +
                                     (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
            if (iVar2 != -1) {
              lVar3 = *(longlong *)(lVar3 + 8);
              goto LAB_1467cdb0f;
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x58);
      } while (iVar2 != -1);
    }
  }
  goto LAB_1467cda25;
  while (iVar2 = *(int *)(lVar4 + 0x18), iVar2 != -1) {
LAB_1467cdb0f:
    lVar4 = lVar3 + (longlong)iVar2 * 0x20;
    if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x20) == param_4) {
      if (lVar4 != 0) {
        *param_2 = 0;
        iVar2 = *(int *)(lVar4 + 0x10);
        _Src = *(void **)(lVar4 + 8);
        *(int *)(param_2 + 1) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar2,0);
          memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
        }
        goto LAB_1467cda2b;
      }
      break;
    }
  }
LAB_1467cda25:
  *param_2 = 0;
  param_2[1] = 0;
LAB_1467cda2b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  return param_2;
}



// FUNCTION 1467cdb7c FUN_1467cdb7c body=459 status=ok
// SIG undefined FUN_1467cdb7c(void)

void FUN_1467cdb7c(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  uVar4 = FUN_144afd4c3(param_2);
  uVar2 = local_70;
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar6 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xd8);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & uVar4) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 0x60;
        if (*(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 0x60) == *param_2) {
          plVar8 = (longlong *)(lVar6 + 8);
          if (plVar8 != (longlong *)0x0 && lVar6 != 0) {
            lVar1 = lVar6 + 0x18;
            local_60 = 0x100000000;
            local_50 = 0xffffffff;
            uStack_48 = 0;
            uStack_58 = lVar1;
            if (*(int *)(lVar6 + 0x30) == 0) {
              iVar7 = 0;
            }
            else {
              FUN_1449c0562(&local_60);
              iVar7 = *(int *)(lVar6 + 0x30);
            }
            local_80 = (undefined4)local_60;
            uStack_7c = local_60._4_4_;
            uStack_78 = (undefined4)uStack_58;
            uStack_74 = uStack_58._4_4_;
            uStack_68 = CONCAT44(uStack_44,uStack_48);
            local_70 = local_50;
            uVar2 = local_70;
            local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
            local_88 = plVar8;
            if ((local_70._4_4_ != iVar7) || (uStack_58 != lVar1)) {
              iVar5 = local_70._4_4_;
              local_70 = uVar2;
              goto LAB_1467cdcda;
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar6 + 0x58);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1467cdbca;
  while( true ) {
    local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
    FUN_1449c0562(&local_80);
    iVar5 = local_70._4_4_;
    uVar2 = local_70;
    if (local_88 == plVar8 && (CONCAT44(uStack_74,uStack_78) == lVar1 && local_70._4_4_ == iVar7))
    break;
LAB_1467cdcda:
    local_60 = *(undefined8 *)(*local_88 + (longlong)iVar5 * 0x20);
    cVar3 = (*(code *)*param_3)(param_3[1],&local_60);
    uVar2 = local_70;
    if (cVar3 == '\0') break;
  }
LAB_1467cdbca:
  local_70 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe8));
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cdd48 FUN_1467cdd48 body=2537 status=ok
// SIG undefined FUN_1467cdd48(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1467cdd48(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 **ppuVar2;
  int *piVar3;
  longlong *plVar4;
  longlong **pplVar5;
  undefined8 **ppuVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  void *_Src;
  longlong *plVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  LPCRITICAL_SECTION local_160;
  undefined4 *local_158;
  LPCRITICAL_SECTION local_150;
  undefined8 local_148;
  longlong *plStack_140;
  void *local_130;
  int local_128;
  undefined4 local_124;
  undefined4 local_11c;
  int local_118;
  undefined4 uStack_114;
  longlong **local_108;
  undefined8 uStack_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_dc;
  int *local_d8;
  undefined8 **ppuStack_d0;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe);
  EnterCriticalSection(lpCriticalSection);
  local_150 = (LPCRITICAL_SECTION)(param_1 + 0x1d);
  EnterCriticalSection(local_150);
  FUN_14003e2d8((undefined4 *)((longlong)param_1 + 0x1c),param_2);
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_dc = 0;
      puVar8 = (ulonglong *)param_2[1];
      piVar3 = (int *)*puVar8 + 1;
      if ((int *)puVar8[1] < piVar3) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          local_160 = lpCriticalSection;
          (**(code **)(*param_2 + 0x170))(param_2,&local_dc,4);
        }
        else {
          local_160 = lpCriticalSection;
          FUN_14572512c(param_2,&local_dc);
        }
      }
      else {
        local_dc = *(int *)*puVar8;
        *puVar8 = (ulonglong)piVar3;
        local_160 = lpCriticalSection;
      }
      FUN_145e0e078(param_1,local_dc);
      if (0 < local_dc) {
        local_168 = param_1 + 4;
        iVar17 = 0;
        local_158 = (undefined4 *)((longlong)param_1 + 0x1c);
        do {
          puVar1 = local_158;
          local_11c = 0xffffffff;
          FUN_14003e2d8(&local_11c,param_2);
          local_108 = (longlong **)0x0;
          uStack_100 = (int *)0x0;
          FUN_14021219d(param_2,&local_108);
          pplVar5 = local_108;
          uVar10 = local_11c;
          uVar7 = *puVar1;
          local_130 = (void *)0x0;
          lVar16 = (longlong)(int)uStack_100;
          local_128 = (int)uStack_100;
          if (lVar16 == 0) {
            local_124 = 0;
          }
          else {
            FUN_1446dd670(&local_130,(ulonglong)uStack_100 & 0xffffffff,0);
            memcpy(local_130,pplVar5,lVar16 * 2);
          }
          plVar9 = (longlong *)param_1[1];
          if (plVar9 == (longlong *)0x0) {
LAB_1467ce36f:
            local_148 = 0;
            plStack_140 = (longlong *)0x0;
            FUN_1467cd5d4(&local_d8,&local_148,&local_130,CONCAT44(uVar10,uVar7));
          }
          else {
            iVar13 = (int)plVar9[1];
            do {
              if (iVar13 == 0) goto LAB_1467ce36f;
              LOCK();
              iVar11 = (int)plVar9[1];
              bVar19 = iVar13 == iVar11;
              if (bVar19) {
                *(int *)(plVar9 + 1) = iVar13 + 1;
                iVar11 = iVar13;
              }
              iVar13 = iVar11;
              UNLOCK();
            } while (!bVar19);
            local_148 = *param_1;
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            plStack_140 = plVar9;
            FUN_1467cd5d4(&local_d8,&local_148,&local_130,CONCAT44(uVar10,uVar7));
            LOCK();
            plVar4 = plVar9 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          local_b8 = (longlong *)&local_11c;
          uStack_b0 = (longlong **)&local_d8;
          FUN_1467dc18a(local_168,&local_118);
          ppuVar6 = ppuStack_d0;
          if (ppuStack_d0 != (undefined8 **)0x0) {
            LOCK();
            ppuVar2 = ppuStack_d0 + 1;
            *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
            UNLOCK();
            if (*(int *)ppuVar2 == 0) {
              (*(code *)**ppuStack_d0)(ppuStack_d0);
              LOCK();
              piVar3 = (int *)((longlong)ppuVar6 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (*(code *)(*ppuVar6)[2])(ppuVar6);
              }
            }
          }
          if (local_108 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < local_dc);
      }
      local_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = (longlong **)0x0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_1467dbb54(param_2,&local_b8);
      puVar18 = param_1 + 0x13;
      iVar17 = *(int *)(param_1 + 0x14);
      iVar13 = iVar17;
      if (iVar17 != *(int *)((longlong)param_1 + 0xcc)) {
        FUN_145e0e442(puVar18);
        FUN_1467dc2c2(puVar18);
        iVar13 = *(int *)(param_1 + 0x14);
        iVar17 = *(int *)((longlong)param_1 + 0xcc);
      }
      uVar15 = (longlong)(int)uStack_b0 - (longlong)local_84;
      uVar14 = (uint)uVar15;
      if ((uint)(iVar13 - iVar17) < uVar14) {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar15);
        }
        FUN_1467dc402(puVar18,uVar15 & 0xffffffff);
        iVar17 = 1;
        if (3 < uVar14) {
          uVar14 = (uVar14 | 1) + 0xe;
          iVar17 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar17 == 0; iVar17 = iVar17 + -1) {
            }
          }
          iVar17 = 1 << ((byte)iVar17 & 0x1f);
        }
        if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x1c) < iVar17)) {
          *(int *)(param_1 + 0x1c) = iVar17;
          FUN_1467db1c8(puVar18);
        }
      }
      local_d8 = (int *)&DAT_100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      ppuStack_d0 = &local_a8;
      if (local_90 == 0) {
        iVar17 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar17 = local_90;
      }
      uStack_e8 = CONCAT44(uStack_bc,uStack_c0);
      local_f0 = local_c8;
      uVar15 = local_f0;
      uStack_100 = local_d8;
      local_f8 = ppuStack_d0;
      local_f0._4_4_ = (int)(local_c8 >> 0x20);
      local_108 = &local_b8;
      if ((local_f0._4_4_ != iVar17) || (ppuStack_d0 != &local_a8)) {
        iVar13 = local_f0._4_4_;
        local_f0 = uVar15;
        do {
          plVar9 = *local_108 + (longlong)iVar13 * 0xd;
          local_d8 = (int *)*plVar9;
          iVar13 = (int)plVar9[1] + -1;
          if ((int)plVar9[1] == 0) {
            iVar13 = 0;
          }
          ppuStack_d0 = (undefined8 **)CONCAT44(ppuStack_d0._4_4_,iVar13);
          FUN_1446e940c(&local_dc,&local_d8);
          local_d8 = &local_dc;
          ppuStack_d0 = (undefined8 **)(plVar9 + 2);
          FUN_1467dc5a4(puVar18,&local_118,&local_d8);
          local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~uStack_100._4_4_);
          FUN_1449c0562(&uStack_100);
          iVar13 = local_f0._4_4_;
          uVar15 = local_f0;
        } while (local_108 != &local_b8 || (local_f8 != &local_a8 || local_f0._4_4_ != iVar17));
      }
      local_f0 = uVar15;
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1409261c2(&local_b8);
      lpCriticalSection = local_160;
    }
  }
  else {
    local_d8 = (int *)CONCAT44(local_d8._4_4_,
                               *(int *)(param_1 + 5) - *(int *)((longlong)param_1 + 0x54));
    puVar8 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar8 + 1;
    if ((undefined4 *)puVar8[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        local_160 = lpCriticalSection;
        (**(code **)(*param_2 + 0x170))(param_2,&local_d8,4);
      }
      else {
        local_160 = lpCriticalSection;
        FUN_14572512c(param_2,&local_d8);
      }
    }
    else {
      local_d8 = (int *)CONCAT44(local_d8._4_4_,*(undefined4 *)*puVar8);
      *puVar8 = (ulonglong)puVar1;
      local_160 = lpCriticalSection;
    }
    plVar9 = param_1 + 4;
    puVar18 = param_1 + 6;
    local_108 = (longlong **)&DAT_100000000;
    local_f8 = (undefined8 **)0xffffffff;
    local_f0 = local_f0 & 0xffffffff00000000;
    iVar17 = 0;
    local_168 = param_1;
    uStack_100 = (int *)puVar18;
    if (*(int *)(param_1 + 9) != 0) {
      FUN_1449c0562(&local_108);
      iVar17 = *(int *)(local_168 + 9);
    }
    local_a0 = local_f8;
    uVar12 = local_a0;
    local_98 = local_f0;
    uStack_b0 = local_108;
    local_a8 = (undefined8 *)uStack_100;
    local_a0._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    iVar13 = local_a0._4_4_;
    local_b8 = plVar9;
    if ((local_a0._4_4_ != iVar17) || (local_a0 = uVar12, uStack_100 != (int *)puVar18)) {
      do {
        local_a0 = uVar12;
        lVar16 = *local_b8;
        local_118 = *(int *)(lVar16 + (longlong)iVar13 * 0x20);
        FUN_14003e2d8(&local_118,param_2);
        lVar16 = *(longlong *)(lVar16 + 8 + (longlong)iVar13 * 0x20);
        local_108 = (longlong **)0x0;
        uVar14 = *(uint *)(lVar16 + 0x18);
        _Src = *(void **)(lVar16 + 0x10);
        uStack_100 = (int *)CONCAT44(uStack_100._4_4_,uVar14);
        if ((longlong)(int)uVar14 == 0) {
          uStack_100 = (int *)(ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_108,uVar14,0);
          memcpy(local_108,_Src,(longlong)(int)uVar14 * 2);
        }
        FUN_14021219d(param_2,&local_108);
        if (local_108 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
        FUN_1449c0562(&uStack_b0);
        iVar13 = local_a0._4_4_;
        uVar12 = local_a0;
      } while (local_b8 != plVar9 || (local_a8 != puVar18 || local_a0._4_4_ != iVar17));
    }
    lpCriticalSection = local_160;
    puVar18 = local_168;
    local_98 = 0;
    iVar17 = 0;
    local_90 = 0;
    local_b8 = (longlong *)0x0;
    uStack_b0 = (longlong **)0x0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar14 = *(int *)(local_168 + 0x14) - *(int *)((longlong)local_168 + 0xcc);
    if (uVar14 != 0) {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar14);
      }
      FUN_1467db4d8(&local_b8,uVar14);
      iVar13 = 1;
      if (3 < uVar14) {
        uVar14 = (uVar14 | 1) + 0xe;
        iVar13 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar13 == 0; iVar13 = iVar13 + -1) {
          }
        }
        iVar13 = 1 << ((byte)iVar13 & 0x1f);
      }
      if ((local_70 == 0) || (local_70 < iVar13)) {
        local_70 = iVar13;
        FUN_1467db672();
      }
    }
    pplVar5 = (longlong **)(puVar18 + 0x13);
    ppuVar6 = (undefined8 **)(puVar18 + 0x15);
    local_d8 = (int *)&DAT_100000000;
    local_c8 = 0xffffffff;
    uStack_c0 = 0;
    ppuStack_d0 = ppuVar6;
    if (*(int *)(puVar18 + 0x18) != 0) {
      FUN_1449c0562(&local_d8);
      iVar17 = *(int *)(puVar18 + 0x18);
    }
    local_f0 = local_c8;
    uVar15 = local_f0;
    uStack_e8 = CONCAT44(uStack_bc,uStack_c0);
    uStack_100 = local_d8;
    local_f8 = ppuStack_d0;
    local_f0._4_4_ = (int)(local_c8 >> 0x20);
    iVar13 = local_f0._4_4_;
    local_108 = pplVar5;
    if ((local_f0._4_4_ != iVar17) || (local_f0 = uVar15, ppuStack_d0 != ppuVar6)) {
      do {
        local_f0 = uVar15;
        plVar9 = *local_108;
        FUN_1467e1cc6(plVar9 + (longlong)iVar13 * 0xc,&local_118);
        local_d8 = &local_118;
        ppuStack_d0 = (undefined8 **)(plVar9 + (longlong)iVar13 * 0xc + 1);
        FUN_1467db840(&local_b8,&local_dc);
        if (CONCAT44(uStack_114,local_118) != 0) {
          FUN_1400020a8();
        }
        local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~uStack_100._4_4_);
        FUN_1449c0562(&uStack_100);
        iVar13 = local_f0._4_4_;
        uVar15 = local_f0;
      } while (local_108 != pplVar5 || (local_f8 != ppuVar6 || local_f0._4_4_ != iVar17));
    }
    FUN_1467dbb54(param_2,&local_b8);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1409261c2(&local_b8);
  }
  LeaveCriticalSection(local_150);
  LeaveCriticalSection(lpCriticalSection);
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467ce734 FUN_1467ce734 body=100 status=ok
// SIG undefined FUN_1467ce734(void)

undefined8 * FUN_1467ce734(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FUN_144832102(param_2,param_3);
  return param_2;
}



// FUNCTION 1467ce798 FUN_1467ce798 body=249 status=ok
// SIG undefined FUN_1467ce798(void)

void FUN_1467ce798(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (DAT_14c844648 != DAT_14c844674) {
    lVar3 = *param_1;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    puVar8 = &DAT_14c844678;
    if (DAT_14c844680 != (undefined *)0x0) {
      puVar8 = DAT_14c844680;
    }
    iVar2 = *(int *)(puVar8 + (ulonglong)
                              (DAT_14c844688 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c844640 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          *param_1 = plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  pcVar6 = (char *)FUN_145c2cbb6();
  if ((((pcVar6 != (char *)0x0) && (*pcVar6 == '\x01')) && (DAT_14c844c74 < '\x01')) &&
     (((DAT_14c844c78 != (longlong *)0x0 &&
       (cVar5 = (**(code **)(*DAT_14c844c78 + 8))(), cVar5 != '\0')) &&
      (DAT_14c844c78 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001467ce88e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c844c78 + 0x20))(DAT_14c844c78,param_1);
    return;
  }
  return;
}



// FUNCTION 1467ce892 FUN_1467ce892 body=298 status=ok
// SIG undefined FUN_1467ce892(void)

void FUN_1467ce892(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  if (DAT_14c844698 == DAT_14c8446c4) {
    return;
  }
  uVar2 = (uint)((ulonglong)param_1 >> 0x10);
  uVar4 = (uint)param_1 & 0xffff;
  puVar6 = &DAT_14c8446c8;
  if (DAT_14c8446d0 != (undefined *)0x0) {
    puVar6 = DAT_14c8446d0;
  }
  iVar5 = *(int *)(puVar6 + (ulonglong)
                            (DAT_14c8446d8 - 1U &
                            (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar4) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
  while( true ) {
    if (iVar5 == -1) {
      return;
    }
    lVar1 = DAT_14c844690 + (longlong)iVar5 * 0x60;
    if (*(longlong *)(DAT_14c844690 + (longlong)iVar5 * 0x60) == param_1) break;
    iVar5 = *(int *)(lVar1 + 0x58);
  }
  if ((longlong *)(lVar1 + 8) == (longlong *)0x0 || lVar1 == 0) {
    return;
  }
  uVar2 = FUN_144afd4c3(param_2);
  if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
    return;
  }
  lVar3 = lVar1 + 0x40;
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x48);
  }
  iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x50) - 1U & uVar2) * 4);
  if (iVar5 == -1) {
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 8);
  while (lVar3 = lVar1 + (longlong)iVar5 * 0x10,
        *(int *)(lVar1 + (longlong)iVar5 * 0x10) != *param_2) {
    iVar5 = *(int *)(lVar3 + 8);
    if (iVar5 == -1) {
      return;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 4) == -1) {
    return;
  }
  *param_2 = *(int *)(lVar3 + 4);
  return;
}



// FUNCTION 1467ce9bc FUN_1467ce9bc body=34 status=ok
// SIG undefined FUN_1467ce9bc(void)

void FUN_1467ce9bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1467ce798();
  FUN_1467ce892(*param_1,param_2);
  return;
}



// FUNCTION 1467ce9de FUN_1467ce9de body=226 status=ok
// SIG undefined FUN_1467ce9de(void)

void FUN_1467ce9de(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  local_58 = *param_3;
  local_50 = (longlong *)param_3[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  FUN_1467dd350(param_1,local_2c);
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ceac2 FUN_1467ceac2 body=54 status=ok
// SIG undefined FUN_1467ceac2(void)

void FUN_1467ceac2(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  FUN_1467dd8a8(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001467ceaf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  return;
}



// FUNCTION 1467ceaf8 FUN_1467ceaf8 body=267 status=ok
// SIG undefined FUN_1467ceaf8(void)

undefined8 * FUN_1467ceaf8(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar7 = (uint)param_3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      uVar5 = 0;
      do {
        lVar3 = *param_1 + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == param_3) {
          if (lVar3 == 0) goto LAB_1467ceb21;
          uVar5 = *(undefined8 *)(lVar3 + 8);
          plVar6 = *(longlong **)(lVar3 + 0x10);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
            *param_2 = uVar5;
            param_2[1] = plVar6;
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
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
            goto LAB_1467ceb2e;
          }
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x18);
      } while (iVar8 != -1);
      goto LAB_1467ceb23;
    }
  }
LAB_1467ceb21:
  uVar5 = 0;
LAB_1467ceb23:
  *param_2 = uVar5;
  param_2[1] = 0;
LAB_1467ceb2e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return param_2;
}



// FUNCTION 1467cec04 FUN_1467cec04 body=124 status=ok
// SIG undefined FUN_1467cec04(void)

undefined8 FUN_1467cec04(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1467ceaf8(param_1,&local_28,param_2);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(local_28 + 0x10);
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



// FUNCTION 1467cec82 FUN_1467cec82 body=471 status=ok
// SIG undefined FUN_1467cec82(void)

void FUN_1467cec82(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  LPCRITICAL_SECTION local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (LPCRITICAL_SECTION)(param_1 + 10);
  EnterCriticalSection(local_98);
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 != iVar9) || (uStack_60 != plVar1)) {
    do {
      lVar5 = *local_90;
      lVar8 = (longlong)iStack_74 * 0x20;
      local_68 = *(undefined8 *)(lVar5 + 8 + lVar8);
      plVar6 = *(longlong **)(lVar5 + 0x10 + lVar8);
      if (plVar6 == (longlong *)0x0) {
        uStack_60 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        uStack_60 = plVar6;
      }
      cVar7 = (*(code *)*param_2)(param_2[1],lVar5 + lVar8,&local_68);
      plVar4 = uStack_60;
      if (uStack_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = uStack_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*uStack_60)(uStack_60);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (cVar7 == '\0') break;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar9));
  }
  LeaveCriticalSection(local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467cee5a FUN_1467cee5a body=91 status=ok
// SIG undefined FUN_1467cee5a(void)

undefined4 FUN_1467cee5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  uVar1 = FUN_1467cf050();
  if ((char)uVar1 != '\0') {
    FUN_1467e785c(&local_1c,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ceeb6 FUN_1467ceeb6 body=146 status=ok
// SIG undefined FUN_1467ceeb6(void)

undefined8 * FUN_1467ceeb6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
  (**(code **)(*plVar1 + 0x60))(plVar1);
  if ((local_20 == -1) && (local_1c == -1)) {
    local_30 = 0;
    local_24 = 0xffffffff;
    local_28 = 0;
  }
  else {
    local_34 = local_20;
    FUN_1467e1cc6(&local_34,&local_30);
  }
  *param_1 = local_30;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cef4a FUN_1467cef4a body=39 status=ok
// SIG undefined FUN_1467cef4a(void)

undefined8 FUN_1467cef4a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  return param_1;
}



// FUNCTION 1467cef72 FUN_1467cef72 body=145 status=ok
// SIG undefined FUN_1467cef72(void)

undefined8 * FUN_1467cef72(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
  (**(code **)(*plVar1 + 0x60))(plVar1);
  if ((local_20 == -1) && (local_1c == -1)) {
    local_30 = 0;
    local_24 = 0xffffffff;
    local_28 = 0;
  }
  else {
    local_34 = local_1c;
    FUN_1467e1cc6(&local_34,&local_30);
  }
  *param_1 = local_30;
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cf004 FUN_1467cf004 body=10 status=ok
// SIG undefined FUN_1467cf004(void)

void FUN_1467cf004(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001467cf00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  return;
}



// FUNCTION 1467cf00e FUN_1467cf00e body=40 status=ok
// SIG undefined FUN_1467cf00e(void)

void FUN_1467cf00e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001467cf032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x28))();
  return;
}



// FUNCTION 1467cf036 FUN_1467cf036 body=25 status=ok
// SIG undefined FUN_1467cf036(void)

void FUN_1467cf036(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar1);
  return;
}



// FUNCTION 1467cf050 FUN_1467cf050 body=81 status=ok
// SIG undefined FUN_1467cf050(void)

bool FUN_1467cf050(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
  cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2);
  if (cVar1 == '\v') {
    uVar3 = (**(code **)(*(longlong *)*param_1 + 0x48))();
    FUN_1467e6994(uVar3,param_2,param_3);
  }
  return cVar1 == '\v';
}



// FUNCTION 1467cf0a2 FUN_1467cf0a2 body=49 status=ok
// SIG undefined FUN_1467cf0a2(void)

void FUN_1467cf0a2(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0001467cf0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,param_1,param_2,*(code **)(*plVar1 + 0x98));
  return;
}



// FUNCTION 1467cf0d4 FUN_1467cf0d4 body=49 status=ok
// SIG undefined FUN_1467cf0d4(void)

void FUN_1467cf0d4(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0001467cf102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_1,param_2,*(code **)(*plVar1 + 0xa0));
  return;
}



// FUNCTION 1467cf105 FUN_1467cf105 body=255 status=ok
// SIG undefined FUN_1467cf105(void)

void FUN_1467cf105(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar2 + 0x218))(plVar2,&DAT_149e3cc28);
  iVar4 = FUN_1448332aa(plVar2,&DAT_149e3cc28);
  if (0x14 < iVar4) {
    FUN_1456bb002(*param_1,param_2);
  }
  FUN_1456bb002(*param_1,param_2 + 1);
  local_29 = *(char *)(param_2 + 4);
  plVar2 = *(longlong **)(*param_1 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_29,1);
  }
  else {
    local_29 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  *(int *)(param_2 + 4) = (int)local_29;
  FUN_144aa02de(*param_1,param_2 + 8);
  FUN_144aa02de(*param_1,param_2 + 0xc);
  FUN_144aa02de(*param_1,param_2 + 0x10);
  FUN_144aa02de(*param_1,param_2 + 0x14);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cf206 FUN_1467cf206 body=60 status=ok
// SIG undefined FUN_1467cf206(void)

undefined4 FUN_1467cf206(char *param_1,char *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) &&
     (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8) &&
       (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
      (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))))) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                     *(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1467cf242 FUN_1467cf242 body=117 status=ok
// SIG undefined FUN_1467cf242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1467cf242(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844814) {
    FUN_144b3d300(&DAT_14c844814);
    if (DAT_14c844814 == -1) {
      _DAT_14c8447fc = 0x100;
      _DAT_14c844800 = 0;
      uRam000000014c844804 = 1;
      uRam000000014c844808 = 0x144;
      uRam000000014c84480c = 0;
      _DAT_14c844810 = 3;
      _Init_thread_footer(&DAT_14c844814);
    }
  }
  return &DAT_14c8447fc;
}



// FUNCTION 1467cf2b8 FUN_1467cf2b8 body=13 status=ok
// SIG undefined FUN_1467cf2b8(void)

undefined2 * FUN_1467cf2b8(undefined2 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1467cf2c6 FUN_1467cf2c6 body=199 status=ok
// SIG undefined FUN_1467cf2c6(void)

longlong * FUN_1467cf2c6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar1);
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  FUN_1467c97c0(local_40,uVar1);
  lVar2 = FUN_14001cc68(0x38,0x10);
  local_30 = (longlong *)*param_1;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)param_1[1];
  FUN_1467e5d56(lVar2,local_40,&local_30,0);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *param_2 = lVar2;
  *(undefined4 *)(param_2 + 1) = 1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cf38e FUN_1467cf38e body=199 status=ok
// SIG undefined FUN_1467cf38e(void)

longlong * FUN_1467cf38e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar1);
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  FUN_1467c9848(local_40,uVar1);
  lVar2 = FUN_14001cc68(0x38,0x10);
  local_30 = (longlong *)*param_1;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  local_28 = (undefined4)param_1[1];
  FUN_1467e5d56(lVar2,local_40,&local_30,1);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *param_2 = lVar2;
  *(undefined4 *)(param_2 + 1) = 1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cf456 FUN_1467cf456 body=302 status=ok
// SIG undefined FUN_1467cf456(void)

longlong * FUN_1467cf456(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar3);
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  if ((int)plVar4[1] - 2U < 0x7fffffff) {
    lVar8 = 0;
    do {
      cVar1 = FUN_140665610(*(undefined2 *)(*plVar4 + lVar8 * 2));
      if (cVar1 == '\0') break;
      lVar8 = lVar8 + 1;
      iVar2 = (int)plVar4[1] + -1;
      if ((int)plVar4[1] == 0) {
        iVar2 = 0;
      }
    } while (lVar8 < iVar2);
    if ((int)lVar8 != 0) {
      iVar2 = (int)plVar4[1];
      iVar5 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      iVar7 = iVar5 - (int)lVar8;
      if (iVar2 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar4;
      }
      iVar2 = iVar5;
      if (iVar7 < iVar5) {
        iVar2 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar2) {
        iVar7 = iVar2;
      }
      FUN_140056680(local_40,(longlong)puVar6 + ((longlong)iVar5 * 2 - (ulonglong)(uint)(iVar7 * 2))
                   );
      if ((*(byte *)(param_2 + 1) & 2) == 0) {
        FUN_140233b1a(param_1,local_40);
      }
      else {
        FUN_145aa9352(param_1,local_40);
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1467cf503;
    }
  }
  plVar4 = (longlong *)*param_2;
  *param_1 = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
LAB_1467cf503:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cf586 FUN_1467cf586 body=293 status=ok
// SIG undefined FUN_1467cf586(void)

longlong * FUN_1467cf586(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar5);
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  uVar4 = (int)plVar6[1] - 1;
  if ((int)plVar6[1] == 0) {
    uVar4 = 0;
  }
  uVar10 = (ulonglong)uVar4;
  uVar8 = uVar4 + 1;
  do {
    uVar9 = (int)uVar4 >> 0x1f & uVar4;
    if ((int)uVar10 < 1) break;
    lVar1 = uVar10 * 2;
    uVar10 = uVar10 - 1;
    cVar3 = FUN_140665610(*(undefined2 *)(*plVar6 + -2 + lVar1));
    uVar8 = uVar8 - 1;
    uVar9 = uVar8;
  } while (cVar3 != '\0');
  iVar2 = (int)plVar6[1];
  uVar4 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  if (uVar9 == uVar4) {
    plVar6 = (longlong *)*param_2;
    *param_1 = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  else {
    if (iVar2 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*plVar6;
    }
    if ((int)uVar9 < (int)uVar4) {
      uVar4 = uVar9;
    }
    uVar8 = 0;
    if (0 < (int)uVar4) {
      uVar8 = uVar4;
    }
    FUN_14006620a(local_48,puVar7,uVar8);
    if ((*(byte *)(param_2 + 1) & 2) == 0) {
      FUN_140233b1a(param_1,local_48);
    }
    else {
      FUN_145aa9352(param_1,local_48);
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467cf6ac FUN_1467cf6ac body=358 status=ok
// SIG undefined FUN_1467cf6ac(void)

longlong * FUN_1467cf6ac(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar3);
  plVar4 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar5 = (int)plVar4[1];
  uVar8 = 0;
  if (iVar5 - 2U < 0x7fffffff) {
    uVar8 = 0;
    do {
      cVar1 = FUN_140665610(*(undefined2 *)(*plVar4 + uVar8 * 2));
      iVar5 = (int)plVar4[1];
      if (cVar1 == '\0') break;
      uVar8 = uVar8 + 1;
      iVar2 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar2 = 0;
      }
    } while ((longlong)uVar8 < (longlong)iVar2);
  }
  iVar2 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar2 = 0;
  }
  lVar7 = (longlong)iVar2;
  iVar2 = (int)uVar8;
  iVar5 = (uint)(iVar5 != 0) - iVar5;
  do {
    iVar6 = iVar5;
    lVar7 = lVar7 + -1;
    if (lVar7 <= iVar2) break;
    cVar1 = FUN_140665610(*(undefined2 *)(*plVar4 + lVar7 * 2));
    iVar5 = iVar6 + 1;
  } while (cVar1 != '\0');
  if ((iVar2 == 0) && ((uint)((int)plVar4[1] != 0) - (int)plVar4[1] == iVar6)) {
    plVar4 = (longlong *)*param_2;
    *param_1 = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  else {
    FUN_144a63a7c(plVar4,local_58,uVar8 & 0xffffffff,-(iVar6 + iVar2));
    if ((*(byte *)(param_2 + 1) & 2) == 0) {
      FUN_140233b1a(param_1,local_58);
    }
    else {
      FUN_145aa9352(param_1,local_58);
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cf814 FUN_1467cf814 body=85 status=ok
// SIG undefined FUN_1467cf814(void)

char FUN_1467cf814(longlong *param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  
  lVar2 = *param_1;
  pcVar1 = (char *)(lVar2 + 0x28);
  LOCK();
  bVar4 = *(char *)(lVar2 + 0x28) == '\0';
  if (bVar4) {
    *(char *)(lVar2 + 0x28) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1447d2058(pcVar1);
  }
  cVar3 = FUN_1467d4fd6(lVar2,param_2);
  if (pcVar1 != (char *)0x0) {
    LOCK();
    cVar3 = *pcVar1;
    bVar4 = cVar3 == '\x01';
    if (bVar4) {
      *pcVar1 = '\0';
      cVar3 = '\x01';
    }
    UNLOCK();
    if (!bVar4) {
      cVar3 = FUN_14008cdb0(pcVar1);
      return cVar3;
    }
  }
  return cVar3;
}



// FUNCTION 1467cf86a FUN_1467cf86a body=22 status=ok
// SIG undefined FUN_1467cf86a(void)

undefined8 FUN_1467cf86a(undefined8 param_1)

{
  FUN_1467cf880();
  return param_1;
}



// FUNCTION 1467cf880 FUN_1467cf880 body=681 status=ok
// SIG undefined FUN_1467cf880(void)

undefined8 * FUN_1467cf880(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)param_3[1] < 1) {
    FUN_140e82300();
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else {
    FUN_140e82300();
    local_78 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_70 = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    iVar3 = (int)param_3[1];
    uVar7 = (ulonglong)iVar3;
    if ((longlong)uVar7 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3 + 1);
    }
    if (-1 < iVar3) {
      FUN_14598e1ac(local_98 + 2);
    }
    local_68 = 4;
    local_58 = (longlong *)*param_2;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    local_50 = (undefined4)param_2[1];
    FUN_140056680(local_a8,L"Delimiter");
    FUN_140233eec(local_98 + 2,local_a8,&local_68);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (0 < iVar3) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar4 = *param_3;
        FUN_140002266(&local_68,&DAT_149e063bc,uVar6 & 0xffffffff);
        FUN_1467de67a(local_98 + 2,&local_68,lVar4 + lVar5);
        if (CONCAT44(uStack_64,local_68) != 0) {
          FUN_1400020a8();
        }
        FUN_140002184(local_98,0x7b);
        FUN_144a83b10(local_98,uVar6 & 0xffffffff);
        FUN_140002184(local_98,0x7d);
        uVar6 = uVar6 + 1;
        if (uVar6 < uVar7) {
          FUN_1400020e8(local_98,L"{Delimiter}",0xb);
        }
        lVar5 = lVar5 + 0x20;
      } while (uVar7 != uVar6);
    }
    FUN_145aa9352(&local_68,local_98);
    FUN_140008f88(&local_78,&local_68);
    if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_68,&local_78,1);
    local_b8 = 0;
    FUN_140233db2(param_1,&local_68,local_98 + 2,0);
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
    FUN_14010f8af(local_98[2],local_98[3] & 0xffffffff);
    if (local_98[2] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cfb2c FUN_1467cfb2c body=62 status=ok
// SIG undefined FUN_1467cfb2c(void)

longlong * FUN_1467cfb2c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((int)param_3[1] == 1) {
    param_3 = (longlong *)*param_3;
    plVar1 = (longlong *)*param_3;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)param_3[1];
  }
  else {
    FUN_14598de80(param_1);
  }
  return param_1;
}



// FUNCTION 1467cfb6a FUN_1467cfb6a body=41 status=ok
// SIG undefined FUN_1467cfb6a(void)

undefined8 FUN_1467cfb6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1467df85e();
  FUN_1467df95e(uVar1,param_1,param_2);
  return param_1;
}



// FUNCTION 1467cfb94 FUN_1467cfb94 body=22 status=ok
// SIG undefined FUN_1467cfb94(void)

undefined8 FUN_1467cfb94(undefined8 param_1)

{
  FUN_1467cfbaa();
  return param_1;
}



// FUNCTION 1467cfbaa FUN_1467cfbaa body=369 status=ok
// SIG undefined FUN_1467cfbaa(void)

longlong * FUN_1467cfbaa(longlong *param_1,ulonglong param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_145c56324();
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x80))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_48 = *(undefined8 *)(puVar5 + 4);
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = *(ulonglong *)(puVar5 + 2);
  FUN_14010d0dd(0,param_2 & 0xff,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_78[2] = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_88 = local_78 + 2;
  uStack_50 = param_2 & 0xff;
  FUN_1402349c6(lVar4,local_78,&local_58,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cfd1c FUN_1467cfd1c body=369 status=ok
// SIG undefined FUN_1467cfd1c(void)

longlong * FUN_1467cfd1c(longlong *param_1,ulonglong param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_145c56324();
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x80))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_48 = *(undefined8 *)(puVar5 + 4);
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = *(ulonglong *)(puVar5 + 2);
  FUN_14010d0dd(0,param_2 & 0xffff,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_78[2] = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_88 = local_78 + 2;
  uStack_50 = param_2 & 0xffff;
  FUN_1402349c6(lVar4,local_78,&local_58,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467cfe8e FUN_1467cfe8e body=32 status=ok
// SIG undefined FUN_1467cfe8e(void)

undefined8 FUN_1467cfe8e(undefined8 param_1)

{
  FUN_1467cfeae();
  return param_1;
}



// FUNCTION 1467cfeae FUN_1467cfeae body=501 status=ok
// SIG undefined FUN_1467cfeae(void)

longlong *
FUN_1467cfeae(longlong *param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_145c56324();
  puVar5 = (undefined8 *)*param_5;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x90))((longlong *)*puVar5,param_3);
  puVar5 = (undefined8 *)(lVar4 + 0x8c);
  if (param_4 != (undefined8 *)0x0) {
    puVar5 = param_4;
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_68 = puVar5[2];
  local_78 = *puVar5;
  uStack_70 = puVar5[1];
  FUN_140235a22(SUB84((double)param_2,0),lVar4);
  lVar4 = FUN_14001cc68(0x80,0x10);
  local_88 = *param_5;
  local_80 = param_5[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_90;
  _Src = (void *)*param_3;
  if (lVar6 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar6 * 2);
  }
  local_78 = CONCAT44(local_78._4_4_,2);
  local_68 = 0;
  local_60 = 0;
  uStack_70 = CONCAT44(uStack_70._4_4_,param_2);
  local_b0 = &local_88;
  local_b8 = param_4;
  FUN_1467e4234(lVar4,local_a8,&local_78,&local_98);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d00a4 FUN_1467d00a4 body=32 status=ok
// SIG undefined FUN_1467d00a4(void)

undefined8 FUN_1467d00a4(undefined8 param_1)

{
  FUN_1467d00c4();
  return param_1;
}



// FUNCTION 1467d00c4 FUN_1467d00c4 body=496 status=ok
// SIG undefined FUN_1467d00c4(void)

longlong *
FUN_1467d00c4(longlong *param_1,uint param_2,undefined8 *param_3,undefined4 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_145c56324();
  puVar8 = (undefined8 *)*param_5;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar8 + 0x90))((longlong *)*puVar8,param_3);
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_4 != (undefined4 *)0x0) {
    puVar5 = param_4;
  }
  local_a8 = local_98;
  local_98[0] = 0;
  local_98[1] = 0;
  local_58 = *(undefined8 *)(puVar5 + 4);
  local_68 = *puVar5;
  uStack_64 = puVar5[1];
  lStack_60 = *(longlong *)(puVar5 + 2);
  uVar6 = -param_2;
  if ((int)-param_2 < 0) {
    uVar6 = param_2;
  }
  FUN_14010d0dd(param_2 >> 0x1f,uVar6,lVar4);
  lVar4 = FUN_14001cc68(0x80,0x10);
  local_78 = *param_5;
  local_70 = param_5[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_80;
  _Src = (void *)*param_3;
  if (lVar7 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,_Src,lVar7 * 2);
  }
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  lStack_60 = (longlong)(int)param_2;
  local_a0 = &local_78;
  local_a8 = (longlong *)param_4;
  FUN_1467e4234(lVar4,local_98,&local_68,&local_88);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d02b6 FUN_1467d02b6 body=556 status=ok
// SIG undefined FUN_1467d02b6(void)

longlong *
FUN_1467d02b6(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  double dStack_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_145c56324();
  puVar8 = (undefined8 *)*param_4;
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(lVar5 + 0x38);
    plVar3 = *(longlong **)(lVar5 + 0x40);
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
  }
  lVar5 = (**(code **)(*(longlong *)*puVar8 + 0x90))((longlong *)*puVar8,param_3);
  if (param_5 < 0) {
    param_5 = *(int *)(lVar5 + 0xa0);
  }
  iVar6 = 0x12;
  if (param_5 < 0x12) {
    iVar6 = param_5;
  }
  dVar4 = (double)param_2 /
          (((double)CONCAT44(0x43300000,(int)(&DAT_149e17340)[iVar6]) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,(int)((ulonglong)(&DAT_149e17340)[iVar6] >> 0x20)) -
          1.9342813113834067e+25));
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_68 = *(undefined8 *)(lVar5 + 0x9c);
  local_78 = *(undefined8 *)(lVar5 + 0x8c);
  dStack_70 = *(double *)(lVar5 + 0x94);
  FUN_140235a22(SUB84(dVar4,0),lVar5);
  lVar5 = FUN_14001cc68(0x80,0x10);
  local_88 = *param_4;
  local_80 = param_4[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  local_98 = (void *)0x0;
  local_90 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_90;
  _Src = (void *)*param_3;
  if (lVar7 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar7 * 2);
  }
  local_78 = CONCAT44(local_78._4_4_,3);
  local_68 = 0;
  local_60 = 0;
  local_b0 = &local_88;
  local_b8 = 0;
  dStack_70 = dVar4;
  FUN_1467e4234(lVar5,local_a8,&local_78,&local_98);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d04e4 FUN_1467d04e4 body=22 status=ok
// SIG undefined FUN_1467d04e4(void)

undefined8 FUN_1467d04e4(undefined8 param_1)

{
  FUN_1467d04fa();
  return param_1;
}



// FUNCTION 1467d04fa FUN_1467d04fa body=400 status=ok
// SIG undefined FUN_1467d04fa(void)

longlong * FUN_1467d04fa(longlong *param_1,double param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_88 [3];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  double dStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_145c56324();
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x88))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_58 = *(undefined8 *)(puVar5 + 4);
  local_68 = *puVar5;
  uStack_64 = puVar5[1];
  dStack_60 = *(double *)(puVar5 + 2);
  FUN_140235a22(param_2 * 100.0,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_88[2] = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_68 = 3;
  local_58 = 0;
  local_50 = 0;
  local_98 = local_88 + 2;
  dStack_60 = param_2;
  FUN_1467e3e02(lVar4,local_88,&local_68,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d068c FUN_1467d068c body=22 status=ok
// SIG undefined FUN_1467d068c(void)

undefined8 FUN_1467d068c(undefined8 param_1)

{
  FUN_1467d06a2();
  return param_1;
}



// FUNCTION 1467d06a2 FUN_1467d06a2 body=401 status=ok
// SIG undefined FUN_1467d06a2(void)

longlong * FUN_1467d06a2(longlong *param_1,float param_2,undefined4 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_88 [3];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_145c56324();
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x88))();
  puVar5 = (undefined4 *)(lVar4 + 0x8c);
  if (param_3 != (undefined4 *)0x0) {
    puVar5 = param_3;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_58 = *(undefined8 *)(puVar5 + 4);
  local_68 = *puVar5;
  uStack_64 = puVar5[1];
  fStack_60 = (float)puVar5[2];
  uStack_5c = puVar5[3];
  FUN_140235a22((double)(param_2 * 100.0),lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_88[2] = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_68 = 2;
  local_58 = 0;
  local_50 = 0;
  local_98 = local_88 + 2;
  fStack_60 = param_2;
  FUN_1467e3e02(lVar4,local_88,&local_68,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d0834 FUN_1467d0834 body=375 status=ok
// SIG undefined FUN_1467d0834(void)

longlong *
FUN_1467d0834(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  void **local_88;
  longlong *local_80;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_145c56324();
  lVar5 = *param_5;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  local_88 = (void **)lVar5;
  FUN_1467c93d6(local_70,param_2,param_3,param_4);
  lVar5 = FUN_14001cc68(0x50,0x10);
  local_50 = *param_5;
  local_48 = param_5[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_4 + 1);
  lVar4 = (longlong)local_58;
  _Src = (void *)*param_4;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar4 * 2);
  }
  local_80 = &local_50;
  local_88 = &local_60;
  FUN_1467e4a72(lVar5,local_70,*param_2,param_3);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d09ac FUN_1467d09ac body=398 status=ok
// SIG undefined FUN_1467d09ac(void)

longlong *
FUN_1467d09ac(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  longlong *local_88;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_145c56324();
  lVar5 = *param_6;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  local_98 = param_5;
  local_90 = (void **)lVar5;
  FUN_1467c95c2(local_78,param_2,param_3,param_4);
  lVar5 = FUN_14001cc68(0x60,0x10);
  local_58 = *param_6;
  local_50 = param_6[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_5 + 1);
  lVar4 = (longlong)local_60;
  _Src = (void *)*param_5;
  if (lVar4 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar4 * 2);
  }
  local_88 = &local_58;
  local_90 = &local_68;
  local_98 = (undefined8 *)CONCAT44(local_98._4_4_,param_4);
  FUN_1467e5620(lVar5,local_78,*param_2,param_3);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d0b3c FUN_1467d0b3c body=375 status=ok
// SIG undefined FUN_1467d0b3c(void)

longlong *
FUN_1467d0b3c(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  void **local_88;
  longlong *local_80;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_145c56324();
  lVar5 = *param_5;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x38);
    plVar3 = *(longlong **)(lVar4 + 0x40);
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
  }
  local_88 = (void **)lVar5;
  FUN_1467c94cc(local_70,param_2,param_3,param_4);
  lVar5 = FUN_14001cc68(0x50,0x10);
  local_50 = *param_5;
  local_48 = param_5[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_4 + 1);
  lVar4 = (longlong)local_58;
  _Src = (void *)*param_4;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar4 * 2);
  }
  local_80 = &local_50;
  local_88 = &local_60;
  FUN_1467e5044(lVar5,local_70,*param_2,param_3);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d0cb4 FUN_1467d0cb4 body=1911 status=ok
// SIG undefined FUN_1467d0cb4(void)

undefined8 FUN_1467d0cb4(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  longlong local_d8 [2];
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong *local_90 [2];
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined8 local_70;
  wchar_t *local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = FUN_145c56324();
  lVar9 = *param_3;
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(lVar5 + 0x38);
    plVar11 = *(longlong **)(lVar5 + 0x40);
  }
  else {
    plVar11 = (longlong *)param_3[1];
  }
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_2;
  lVar7 = lVar5 / 10000000 - lVar5 / -0x6769800000000000;
  auVar4 = SEXT816(lVar7) * ZEXT816(0x8888888888888889);
  uVar12 = (lVar5 / 600000000) % 0x3c;
  iVar6 = (int)lVar7 + ((int)(auVar4._8_8_ >> 5) - (auVar4._12_4_ >> 0x1f)) * -0x3c;
  local_80[0] = 0x100;
  local_7c = 0;
  local_70 = 0x300000000;
  local_78 = &DAT_200000002;
  local_100 = param_1;
  local_c8 = lVar9;
  local_c0 = plVar11;
  if ((int)((double)lVar5 / 36000000000.0) < 1) {
    local_68 = L"Format_MinutesSeconds";
    local_60._0_4_ = 0x15;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = L"Timespan";
    local_60._0_4_ = 8;
    FUN_1446e940c(&local_b8,&local_68);
    local_68 = L"{Minutes}:{Seconds}";
    local_60 = CONCAT44(local_60._4_4_,0x13);
    FUN_140208c1e(local_90,&local_b8,&local_a8,&local_68);
    local_a8 = 0;
    uStack_a0 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffff00000000);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_60 = uVar12;
    FUN_140056680(&local_b8,L"Minutes");
    FUN_140233eec(&local_a8,&local_b8,&local_68);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = local_100;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    FUN_1413a454c(&local_b8,iVar6,local_80,&local_c8);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_b8;
    local_b8 = (longlong *)0x0;
    local_50 = local_b0;
    FUN_140e82300();
    plVar3 = local_b8;
    if (local_b8 != DAT_14c844840) {
      local_b8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    local_b0 = 0;
    FUN_140056680(local_d8,L"Seconds");
    FUN_140233eec(&local_a8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    puVar8 = local_f8;
  }
  else {
    local_68 = L"Format_HoursMinutesSeconds";
    local_60._0_4_ = 0x1a;
    FUN_1446e940c(&local_a8,&local_68);
    local_68 = L"Timespan";
    local_60._0_4_ = 8;
    FUN_1446e940c(&local_b8,&local_68);
    local_68 = L"{Hours}:{Minutes}:{Seconds}";
    local_60 = CONCAT44(local_60._4_4_,0x1b);
    FUN_140208c1e(local_90,&local_b8,&local_a8,&local_68);
    local_a8 = 0;
    uStack_a0 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffff00000000);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_60 = (ulonglong)(uint)(int)((double)lVar5 / 36000000000.0);
    FUN_140056680(&local_b8,L"Hours");
    FUN_140233eec(&local_a8,&local_b8,&local_68);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = local_100;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    FUN_1413a454c(&local_b8,uVar12 & 0xffffffff,local_80,&local_c8);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_b8;
    local_b8 = (longlong *)0x0;
    local_50 = local_b0;
    FUN_140e82300();
    plVar3 = local_b8;
    if (local_b8 != DAT_14c844840) {
      local_b8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    local_b0 = 0;
    FUN_140056680(local_d8,L"Minutes");
    FUN_140233eec(&local_a8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_c8 = lVar9;
    local_c0 = plVar11;
    FUN_1413a454c(&local_b8,iVar6,local_80,&local_c8);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    local_58 = local_b8;
    local_b8 = (longlong *)0x0;
    local_50 = local_b0;
    FUN_140e82300();
    plVar3 = local_b8;
    if (local_b8 != DAT_14c844840) {
      local_b8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    local_b0 = 0;
    FUN_140056680(local_d8,L"Seconds");
    FUN_140233eec(&local_a8,local_d8,&local_68);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_58 = (longlong *)0x0;
      local_50 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x10))();
    }
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    puVar8 = local_e8;
  }
  FUN_14023409e(puVar8,local_90,1);
  FUN_140233c04(uVar10,puVar8,&local_a8);
  FUN_14010f8af(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_90[0] != (longlong *)0x0) {
    (**(code **)(*local_90[0] + 0x10))();
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d142c FUN_1467d142c body=121 status=ok
// SIG undefined FUN_1467d142c(void)

undefined8 FUN_1467d142c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_38 = param_3;
  FUN_14023326e(0,param_2,0,&local_28);
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d14a6 FUN_1467d14a6 body=29 status=ok
// SIG undefined FUN_1467d14a6(void)

undefined8 FUN_1467d14a6(undefined8 param_1)

{
  FUN_140056680(param_1,L"Etc/Unknown");
  return param_1;
}



// FUNCTION 1467d14c4 FUN_1467d14c4 body=97 status=ok
// SIG undefined FUN_1467d14c4(void)

longlong * FUN_1467d14c4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  FUN_146067e0c();
  lVar1 = FUN_14001cc68(0x20,0x10);
  FUN_1467e610a(lVar1,param_2,param_3,param_4);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1467d1526 FUN_1467d1526 body=91 status=ok
// SIG undefined FUN_1467d1526(void)

undefined8 FUN_1467d1526(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_20 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    local_18 = (int)sVar1;
  }
  FUN_14598ddda(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d1582 FUN_1467d1582 body=25 status=ok
// SIG undefined FUN_1467d1582(void)

undefined8 FUN_1467d1582(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140208cc8(FUN_1456e5a62);
  return *(undefined8 *)(lVar1 + 0x78);
}



// FUNCTION 1467d159c FUN_1467d159c body=39 status=ok
// SIG undefined FUN_1467d159c(void)

undefined8 FUN_1467d159c(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  return param_2;
}



// FUNCTION 1467d15c4 FUN_1467d15c4 body=92 status=ok
// SIG undefined FUN_1467d15c4(void)

void FUN_1467d15c4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar2);
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  FUN_1467c98d0(uVar2,uVar1,param_3);
  return;
}



// FUNCTION 1467d1620 FUN_1467d1620 body=90 status=ok
// SIG undefined FUN_1467d1620(void)

void FUN_1467d1620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar2);
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  FUN_1467c98d0(uVar2,uVar1,2);
  return;
}



// FUNCTION 1467d167a FUN_1467d167a body=96 status=ok
// SIG undefined FUN_1467d167a(void)

bool FUN_1467d167a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar2);
  uVar2 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x50))();
  FUN_1447a1fc0(uVar3);
  uVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar1 = FUN_1467c98d0(uVar3,uVar2,2);
  return iVar1 == 0;
}



// FUNCTION 1467d16da FUN_1467d16da body=365 status=ok
// SIG undefined FUN_1467d16da(void)

void FUN_1467d16da(longlong *param_1,int *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  char local_31;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = (char)*param_2;
  plVar2 = *(longlong **)(*param_1 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  local_30 = param_1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_31,1);
  }
  else {
    local_31 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  *param_2 = (int)local_31;
  switch(local_31) {
  case '\0':
    FUN_1408383eb(*(undefined8 *)(*param_1 + 8),param_2 + 2);
    break;
  case '\x01':
  case '\x05':
    FUN_144aa04bc(*param_1,param_2 + 2);
    break;
  case '\x02':
    FUN_144aa025c(*param_1,param_2 + 2);
    break;
  case '\x03':
    FUN_144aa029c(*param_1,param_2 + 2);
    break;
  case '\x04':
    lVar4 = FUN_144aff0ec(&local_30);
    if ((*(byte *)(lVar4 + 0x28) & 1) != 0) {
      FUN_140e82300();
      local_48 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_40 = 0;
      if (*(longlong **)(param_2 + 4) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 4) + 0x10))();
      }
      FUN_14023423e(param_2 + 4,&local_48);
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x158))(*(longlong **)(*param_1 + 8),param_2 + 4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467d1848 FUN_1467d1848 body=104 status=ok
// SIG undefined FUN_1467d1848(void)

ulonglong FUN_1467d1848(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  if ((uVar1 != *param_2) || (5 < uVar1)) {
    return 0;
  }
  switch(uVar1) {
  default:
    lVar3 = *(longlong *)(param_1 + 2);
    bVar4 = lVar3 == *(longlong *)(param_2 + 2);
    break;
  case 2:
    bVar4 = (float)param_2[2] == (float)param_1[2];
    goto LAB_1467d18a3;
  case 3:
    bVar4 = *(double *)(param_2 + 2) == *(double *)(param_1 + 2);
LAB_1467d18a3:
    return (ulonglong)(-(uint)bVar4 & 1);
  case 4:
    uVar2 = FUN_14010cee6(param_1 + 4,param_2 + 4);
    return uVar2;
  case 5:
    lVar3 = CONCAT71((int7)((ulonglong)
                            ((longlong)&switchD_1467d1863::switchdataD_149e1a118 +
                            (longlong)(int)(&switchD_1467d1863::switchdataD_149e1a118)[uVar1]) >> 8)
                     ,(char)param_1[2]);
    bVar4 = (char)param_1[2] == (char)param_2[2];
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar4);
}



// FUNCTION 1467d18b0 FUN_1467d18b0 body=379 status=ok
// SIG undefined FUN_1467d18b0(void)

void FUN_1467d18b0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*param_1) {
  case 0:
    FUN_140002266(&local_30,L"%lld",*(undefined8 *)(param_1 + 2));
    break;
  case 1:
    FUN_140002266(&local_30,L"%llu",*(undefined8 *)(param_1 + 2));
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0x75;
    goto LAB_1467d19dd;
  case 2:
    FUN_140002266(&local_30,&DAT_149e02016,(double)(float)param_1[2]);
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_30,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0x66;
LAB_1467d19dd:
    FUN_140002184(param_2,uVar2);
    goto switchD_1467d18e6_default;
  case 3:
    FUN_140002266(&local_30,&DAT_149e02016,*(undefined8 *)(param_1 + 2));
    break;
  case 4:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  default:
    goto switchD_1467d18e6_default;
  }
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
switchD_1467d18e6_default:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467d1a5a FUN_1467d1a5a body=424 status=ok
// SIG undefined FUN_1467d1a5a(void)

void FUN_1467d1a5a(undefined8 param_1,undefined8 *param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 1) & 2) == 0) {
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
    cVar2 = (**(code **)(*plVar3 + 0x90))(plVar3,param_1,param_4);
    if (cVar2 != '\0') goto LAB_1467d1aa7;
    if (param_3 == '\0') {
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x50))();
      FUN_1447a1fc0(uVar4);
      (**(code **)(*(longlong *)*param_2 + 0x28))();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_1400020e8(param_1,&DAT_149e01f5a,1);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x50))();
    FUN_1447a1fc0(uVar4);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    FUN_1467ce734(uVar4,&local_38,0);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    puVar5 = &DAT_149e01f5a;
    uVar4 = 1;
  }
  else {
    FUN_1400020e8(param_1,L"INVTEXT(\"",9);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x50))();
    FUN_1447a1fc0(uVar4);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    FUN_1467ce734(uVar4,&local_38,0);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    puVar5 = (undefined2 *)&DAT_149e192fc;
    uVar4 = 2;
  }
  FUN_1400020e8(param_1,puVar5,uVar4);
LAB_1467d1aa7:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d1c19 FUN_1467d1c19 body=100 status=ok
// SIG undefined FUN_1467d1c19(void)

void FUN_1467d1c19(undefined8 param_1,wchar_t *param_2,byte param_3)

{
  size_t sVar1;
  wchar_t *_Str;
  
  sVar1 = wcslen(param_2);
  FUN_1400020e8(param_1,param_2,sVar1 & 0xffffffff);
  if (param_3 < 3) {
    _Str = (wchar_t *)(&DAT_149e19f88 + *(int *)(&DAT_149e19f88 + (ulonglong)param_3 * 4));
  }
  else {
    _Str = L"<Unknown ETextGender>";
  }
  sVar1 = wcslen(_Str);
  FUN_1400020e8(param_1,_Str,sVar1 & 0xffffffff);
  return;
}



// FUNCTION 1467d1c7e FUN_1467d1c7e body=371 status=ok
// SIG undefined FUN_1467d1c7e(void)

longlong FUN_1467d1c7e(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong **pplVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844868) {
    FUN_144b3d300(&DAT_14c844868);
    if (DAT_14c844868 == -1) {
      FUN_140056680(&DAT_14c844858,L"ETextGender::");
      atexit((_func_5014 *)&LAB_142760c12);
      _Init_thread_footer(&DAT_14c844868);
    }
  }
  local_38 = (longlong *)((ulonglong)local_38 & 0xffffffffffffff00);
  lVar1 = FUN_1467d1df2(param_2);
  if (lVar1 == 0) {
    lVar1 = FUN_1467dfa8b(param_2,param_1);
    if (lVar1 == 0) {
      FUN_140e82300();
      local_38 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_30 = 0;
      local_48 = 1;
      lVar1 = FUN_140c97480(param_2,&local_38,0,0);
      if (lVar1 != 0) {
        *param_1 = 4;
        pplVar2 = (longlong **)(param_1 + 4);
        if (&local_38 != pplVar2) {
          if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 0x10))();
          }
          FUN_14023423e(pplVar2,&local_38);
        }
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  else {
    *param_1 = 5;
    *(ulonglong *)(param_1 + 2) = (ulonglong)local_38 & 0xff;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d1df2 FUN_1467d1df2 body=217 status=ok
// SIG undefined FUN_1467d1df2(void)

longlong FUN_1467d1df2(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar6 = DAT_14c844860 + -1;
  puVar4 = DAT_14c844858;
  if (DAT_14c844860 == 0) {
    puVar4 = &DAT_149dfb77a;
    iVar6 = 0;
  }
  cVar2 = FUN_1467dfa35(param_1,puVar4,iVar6);
  if (cVar2 != '\0') {
    iVar6 = DAT_14c844860 + -1;
    if (DAT_14c844860 == 0) {
      iVar6 = 0;
    }
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    lVar3 = FUN_1467dfda7(param_1 + (longlong)iVar6 * 2,&local_38);
    puVar4 = local_38;
    if (lVar3 == 0) {
LAB_1467d1e73:
      bVar1 = true;
    }
    else {
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_30 != 0) {
        puVar5 = local_38;
      }
      cVar2 = FUN_1467d24e3(param_2,puVar5);
      if (cVar2 == '\0') goto LAB_1467d1e73;
      bVar1 = false;
    }
    if (puVar4 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar4);
    }
    if (!bVar1) goto LAB_1467d1e8a;
  }
  lVar3 = 0;
LAB_1467d1e8a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d1ecc FUN_1467d1ecc body=100 status=ok
// SIG undefined FUN_1467d1ecc(void)

void FUN_1467d1ecc(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0x10) = 4;
  FUN_140e82300();
  plVar2 = DAT_14c844840;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != DAT_14c844840) {
    *(longlong **)(param_1 + 0x18) = DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = DAT_14c844848;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1467d1f30 FUN_1467d1f30 body=241 status=ok
// SIG undefined FUN_1467d1f30(void)

undefined4 * FUN_1467d1f30(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    uVar4 = *(ulonglong *)(param_1 + 0x28);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    param_2[6] = 0;
    break;
  default:
    *param_2 = 4;
    FUN_140e82300();
    plVar2 = DAT_14c844840;
    *(longlong **)(param_2 + 4) = DAT_14c844840;
    uVar3 = DAT_14c844848;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
      uVar3 = DAT_14c844848;
    }
    goto LAB_1467d1ff5;
  case 2:
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    *param_2 = 2;
    *(undefined8 *)(param_2 + 4) = 0;
    param_2[6] = 0;
    param_2[2] = uVar3;
    return param_2;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *param_2 = 3;
    *(undefined8 *)(param_2 + 4) = 0;
    param_2[6] = 0;
    *(undefined8 *)(param_2 + 2) = uVar1;
    return param_2;
  case 4:
    *param_2 = 4;
    plVar2 = *(longlong **)(param_1 + 0x18);
    *(longlong **)(param_2 + 4) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x20);
LAB_1467d1ff5:
    param_2[6] = uVar3;
    return param_2;
  case 5:
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x40);
    *param_2 = 5;
    *(undefined8 *)(param_2 + 4) = 0;
    param_2[6] = 0;
  }
  *(ulonglong *)(param_2 + 2) = uVar4;
  return param_2;
}



// FUNCTION 1467d2021 FUN_1467d2021 body=664 status=ok
// SIG undefined FUN_1467d2021(void)

void FUN_1467d2021(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar2 + 0x218))(plVar2,&DAT_149e3cc28);
  (**(code **)(*plVar2 + 0x218))(plVar2,&DAT_149e3cc08);
  if ((*(byte *)(plVar2 + 5) & 1) != 0) {
    if ((int)plVar2[8] < 0x1e8) {
      FUN_140e82300();
      local_38 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_30 = 0;
      (**(code **)(**(longlong **)(*param_1 + 8) + 0x158))(*(longlong **)(*param_1 + 8),&local_38);
      uVar6 = (**(code **)(*local_38 + 0x50))();
      FUN_1447a1fc0(uVar6);
      uVar6 = (**(code **)(*local_38 + 0x28))();
      FUN_144a787a6(param_2,uVar6);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    else {
      FUN_14021219d(*(undefined8 *)(*param_1 + 8),param_2);
    }
  }
  bVar7 = *(byte *)(plVar2 + 5);
  if ((bVar7 & 4) != 0) {
    FUN_14021219d(*(undefined8 *)(*param_1 + 8),param_2);
    bVar7 = *(byte *)(plVar2 + 5);
  }
  local_39 = *(undefined1 *)(param_2 + 0x10);
  if ((bVar7 & 1) == 0) {
    if ((bVar7 & 4) != 0) {
LAB_1467d2234:
      plVar3 = *(longlong **)(*param_1 + 8);
      puVar4 = (ulonglong *)plVar3[1];
      puVar1 = (undefined1 *)*puVar4 + 1;
      if ((undefined1 *)puVar4[1] < puVar1) {
        (**(code **)(*plVar3 + 0x170))(plVar3,&local_39,1);
      }
      else {
        local_39 = *(undefined1 *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
    }
    *(undefined1 *)(param_2 + 0x10) = local_39;
    switch(local_39) {
    case 0:
      iVar5 = FUN_1448332aa(plVar2,&DAT_149e3cc08);
      if (iVar5 < 0xc) {
        local_38 = (longlong *)CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 0x28));
        FUN_144aa02de(*param_1,&local_38);
        *(longlong *)(param_2 + 0x28) = (longlong)(int)local_38;
      }
      else {
        FUN_1408383eb(*(undefined8 *)(*param_1 + 8),param_2 + 0x28);
      }
      break;
    case 2:
      FUN_144aa025c(*param_1,param_2 + 0x30);
      break;
    case 3:
      FUN_144aa029c(*param_1,param_2 + 0x38);
      break;
    case 4:
      goto switchD_1467d20c5_caseD_4;
    case 5:
      plVar2 = *(longlong **)(*param_1 + 8);
      puVar1 = *(undefined1 **)plVar2[1];
      if ((undefined1 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
        (**(code **)(*plVar2 + 0x170))(plVar2,(undefined1 *)(param_2 + 0x40),1);
      }
      else {
        *(undefined1 *)(param_2 + 0x40) = *puVar1;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 1;
      }
    }
  }
  else {
    FUN_1467d1ecc(param_2);
    iVar5 = FUN_1448332aa(plVar2,&DAT_149e3cc28);
    if (4 < iVar5) goto LAB_1467d2234;
    local_39 = 4;
    *(undefined1 *)(param_2 + 0x10) = 4;
switchD_1467d20c5_caseD_4:
    (**(code **)(**(longlong **)(*param_1 + 8) + 0x158))
              (*(longlong **)(*param_1 + 8),param_2 + 0x18);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d22ba FUN_1467d22ba body=215 status=ok
// SIG undefined FUN_1467d22ba(void)

undefined8 *
FUN_1467d22ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50 [2];
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e82300();
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 1) = 0;
  local_58 = param_5;
  lVar2 = FUN_140c97480(param_2,param_1,param_3,param_4);
  if (lVar2 == 0) {
    FUN_140056680(local_50,param_2);
    FUN_140233b1a(local_40,local_50);
    FUN_140008f88(param_1,local_40);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d2392 FUN_1467d2392 body=188 status=ok
// SIG undefined FUN_1467d2392(void)

undefined4 FUN_1467d2392(wchar_t *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = wcsncmp(param_1,L"INVTEXT",7);
  if (iVar2 != 0) {
    cVar1 = FUN_140c9826e(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_14578c7dc(param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_14578c7fe(param_1);
        if (cVar1 == '\0') {
          cVar1 = FUN_14578c7d8(param_1);
          if (cVar1 == '\0') {
            cVar1 = FUN_14578c820(param_1);
            if (cVar1 == '\0') {
              cVar1 = FUN_14578c842(param_1);
              if (cVar1 == '\0') {
                cVar1 = FUN_14578c864(param_1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_14578c886(param_1);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_14578c8a8(param_1);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_14578c8ca(param_1);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_14578c90e(param_1);
                        if (cVar1 == '\0') {
                          uVar3 = FUN_14578c8ec(param_1);
                          return uVar3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}



// FUNCTION 1467d244e FUN_1467d244e body=132 status=ok
// SIG undefined FUN_1467d244e(void)

void FUN_1467d244e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_140188794(local_28,&local_38);
  FUN_14615b53a(param_1,local_28);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d24e3 FUN_1467d24e3 body=262 status=ok
// SIG undefined FUN_1467d24e3(void)

undefined8 FUN_1467d24e3(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined7 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  lVar3 = 0;
  while( true ) {
    uVar5 = *(ushort *)(param_2 + lVar3);
    uVar4 = (ulonglong)uVar5;
    uVar6 = *(ushort *)((longlong)L"Masculine" + lVar3);
    if (uVar5 != uVar6) break;
    if (uVar5 == 0) goto LAB_1467d25d9;
LAB_1467d250e:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_1467d250e;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_1467d2547;
  }
LAB_1467d25d9:
  uVar1 = 0;
  uVar2 = 0;
  goto LAB_1467d25db;
LAB_1467d2547:
  uVar5 = *(ushort *)(param_2 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"Feminine" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_1467d25e1;
LAB_1467d2560:
    lVar3 = lVar3 + 2;
    goto LAB_1467d2547;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_1467d2560;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_1467d2595;
  }
LAB_1467d25e1:
  uVar1 = 1;
  uVar2 = 0x149e05d;
  goto LAB_1467d25db;
LAB_1467d2595:
  uVar5 = *(ushort *)(param_2 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"Neuter" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_1467d25e5;
LAB_1467d25aa:
    lVar3 = lVar3 + 2;
    goto LAB_1467d2595;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_1467d25aa;
  }
  if (uVar5 != uVar6) {
    return 0;
  }
LAB_1467d25e5:
  uVar1 = 2;
  uVar2 = 0x149e05d;
LAB_1467d25db:
  *param_1 = uVar1;
  return CONCAT71(uVar2,1);
}



// FUNCTION 1467d25e9 FUN_1467d25e9 body=535 status=ok
// SIG undefined FUN_1467d25e9(void)

undefined8 FUN_1467d25e9(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)(param_2 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"Default" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_1467d27d5;
LAB_1467d2614:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d2614;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d264d;
  }
LAB_1467d27d5:
  uVar1 = 0;
  goto LAB_1467d27d7;
LAB_1467d264d:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"Short" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d27dd;
LAB_1467d2666:
    lVar2 = lVar2 + 2;
    goto LAB_1467d264d;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d2666;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d269f;
  }
LAB_1467d27dd:
  uVar1 = 1;
  goto LAB_1467d27d7;
LAB_1467d269f:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"Medium" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d27e4;
LAB_1467d26b8:
    lVar2 = lVar2 + 2;
    goto LAB_1467d269f;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d26b8;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d26f1;
  }
LAB_1467d27e4:
  uVar1 = 2;
  goto LAB_1467d27d7;
LAB_1467d26f1:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149e1833e + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d27eb;
LAB_1467d270a:
    lVar2 = lVar2 + 2;
    goto LAB_1467d26f1;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d270a;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d2743;
  }
LAB_1467d27eb:
  uVar1 = 3;
  goto LAB_1467d27d7;
LAB_1467d2743:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)&DAT_149e19f3a + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d27f2;
LAB_1467d275c:
    lVar2 = lVar2 + 2;
    goto LAB_1467d2743;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d275c;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d2791;
  }
LAB_1467d27f2:
  uVar1 = 4;
  goto LAB_1467d27d7;
LAB_1467d2791:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"Custom" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d27f9;
LAB_1467d27a6:
    lVar2 = lVar2 + 2;
    goto LAB_1467d2791;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d27a6;
  }
  if (uVar4 != uVar5) {
    return 0;
  }
LAB_1467d27f9:
  uVar1 = 5;
LAB_1467d27d7:
  *param_1 = uVar1;
  return 1;
}



// FUNCTION 1467d2800 FUN_1467d2800 body=27 status=ok
// SIG undefined FUN_1467d2800(void)

wchar_t * FUN_1467d2800(uint param_1)

{
  if (param_1 < 6) {
    return (wchar_t *)(&PTR_u_Default_149e19f98)[param_1];
  }
  return L"<Unknown EDateTimeStyle>";
}



// FUNCTION 1467d281b FUN_1467d281b body=624 status=ok
// SIG undefined FUN_1467d281b(void)

undefined8 FUN_1467d281b(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)(param_2 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"HalfToEven" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_1467d2a59;
LAB_1467d2846:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d2846;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d287f;
  }
LAB_1467d2a59:
  uVar1 = 0;
  goto LAB_1467d2a5b;
LAB_1467d287f:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"HalfFromZero" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d2a61;
LAB_1467d2898:
    lVar2 = lVar2 + 2;
    goto LAB_1467d287f;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d2898;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d28d1;
  }
LAB_1467d2a61:
  uVar1 = 1;
  goto LAB_1467d2a5b;
LAB_1467d28d1:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"HalfToZero" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d2a68;
LAB_1467d28ea:
    lVar2 = lVar2 + 2;
    goto LAB_1467d28d1;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d28ea;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d2923;
  }
LAB_1467d2a68:
  uVar1 = 2;
  goto LAB_1467d2a5b;
LAB_1467d2923:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"FromZero" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d2a6f;
LAB_1467d293c:
    lVar2 = lVar2 + 2;
    goto LAB_1467d2923;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d293c;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d2975;
  }
LAB_1467d2a6f:
  uVar1 = 3;
  goto LAB_1467d2a5b;
LAB_1467d2975:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"ToZero" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d2a76;
LAB_1467d298e:
    lVar2 = lVar2 + 2;
    goto LAB_1467d2975;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d298e;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d29c7;
  }
LAB_1467d2a76:
  uVar1 = 4;
  goto LAB_1467d2a5b;
LAB_1467d29c7:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"ToNegativeInfinity" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d2a7d;
LAB_1467d29e0:
    lVar2 = lVar2 + 2;
    goto LAB_1467d29c7;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d29e0;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_1467d2a15;
  }
LAB_1467d2a7d:
  uVar1 = 5;
  goto LAB_1467d2a5b;
LAB_1467d2a15:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"ToPositiveInfinity" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_1467d2a84;
LAB_1467d2a2a:
    lVar2 = lVar2 + 2;
    goto LAB_1467d2a15;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_1467d2a2a;
  }
  if (uVar4 != uVar5) {
    return 0;
  }
LAB_1467d2a84:
  uVar1 = 6;
LAB_1467d2a5b:
  *param_1 = uVar1;
  return 1;
}



// FUNCTION 1467d2a8b FUN_1467d2a8b body=30 status=ok
// SIG undefined FUN_1467d2a8b(void)

wchar_t * FUN_1467d2a8b(uint param_1)

{
  if (param_1 < 7) {
    return (wchar_t *)(&DAT_149e19fc8 + *(int *)(&DAT_149e19fc8 + (ulonglong)param_1 * 4));
  }
  return L"<Unknown ERoundingMode>";
}



// FUNCTION 1467d2aaa FUN_1467d2aaa body=281 status=ok
// SIG undefined FUN_1467d2aaa(void)

void FUN_1467d2aaa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar2 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar2) || (uStack_50 != plVar1)) {
    do {
      FUN_1467defac(param_1,(longlong)iStack_64 * 0x10 + *local_80);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar2));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d2bc4 FUN_1467d2bc4 body=521 status=ok
// SIG undefined FUN_1467d2bc4(void)

undefined8 FUN_1467d2bc4(undefined8 *param_1,longlong *param_2)

{
  wint_t *pwVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  undefined4 uVar8;
  wint_t *pwVar9;
  wint_t *pwVar10;
  longlong lVar11;
  int iVar12;
  wint_t *pwVar13;
  wint_t *pwVar14;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  int local_8c;
  longlong *local_88;
  int local_7c;
  wint_t *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pwVar10 = (wint_t *)*param_1;
  lVar6 = (longlong)*(int *)(param_1 + 1);
  pwVar1 = pwVar10 + lVar6;
  if (0 < lVar6) {
    do {
      iVar4 = iswspace(*pwVar10);
      lVar6 = CONCAT44(extraout_var,iVar4);
      if (iVar4 == 0) break;
      pwVar10 = pwVar10 + 1;
    } while (pwVar10 < pwVar1);
  }
  uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  plVar2 = param_2;
  if (pwVar10 < pwVar1) {
LAB_1467d2c2f:
    do {
      local_88 = plVar2;
      iVar4 = iswspace(*pwVar10);
      if (iVar4 != 0) {
        pwVar10 = pwVar10 + 1;
        plVar2 = local_88;
        if (pwVar10 < pwVar1) goto LAB_1467d2c2f;
      }
      pwVar14 = pwVar10;
      if (*pwVar10 == 0x22) {
        local_78 = (wint_t *)0x0;
        uStack_70 = 0;
        local_7c = 0;
        cVar3 = thunk_FUN_140c9761d(pwVar10,&local_78,&local_7c);
        if (cVar3 == '\0') {
          if (local_78 != (wint_t *)0x0) {
            FUN_1400020a8();
          }
          goto joined_r0x0001467d2cc0;
        }
        pwVar14 = pwVar10 + local_7c;
        pwVar10 = local_78;
        if ((int)uStack_70 == 0) {
          pwVar10 = &DAT_149dfb77a;
        }
        pwVar9 = local_78;
        iVar4 = (int)uStack_70;
        iVar12 = (int)uStack_70 + -1;
        uVar8 = uStack_70._4_4_;
        if ((int)uStack_70 == 0) {
          iVar12 = 0;
        }
      }
      else {
joined_r0x0001467d2cc0:
        for (; (pwVar14 < pwVar1 && (*pwVar14 != 0x2c)); pwVar14 = pwVar14 + 1) {
        }
        pwVar9 = (wint_t *)0x0;
        iVar4 = 0;
        iVar12 = (int)((ulonglong)((longlong)pwVar14 - (longlong)pwVar10) >> 1);
        uVar8 = 0;
      }
      if (iVar12 == 0) {
LAB_1467d2d8e:
        if (pwVar9 != (wint_t *)0x0) {
          FUN_1400020a8(pwVar9);
        }
        uVar7 = 0;
        goto LAB_1467d2d9d;
      }
      if (pwVar14 < pwVar1) {
        do {
          local_90 = uVar8;
          pwVar13 = pwVar14;
          iVar5 = iswspace(*pwVar13);
          uVar8 = local_90;
          if (iVar5 == 0) {
            if (*pwVar13 != 0x2c) goto LAB_1467d2d8e;
            pwVar14 = pwVar13 + 1;
            goto LAB_1467d2d32;
          }
          pwVar14 = pwVar13 + 1;
        } while (pwVar13 + 1 < pwVar1);
        pwVar14 = pwVar13 + 1;
      }
LAB_1467d2d32:
      plVar2 = local_88;
      iVar5 = (int)local_88[1];
      *(uint *)(local_88 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)local_88 + 0xc) < iVar5 + 1U) {
        local_90 = uVar8;
        local_8c = iVar4;
        FUN_1467df0c6(local_88,iVar5);
        iVar4 = local_8c;
        uVar8 = local_90;
      }
      lVar6 = *plVar2;
      lVar11 = (longlong)iVar5 * 0x20;
      *(wint_t **)(lVar6 + lVar11) = pwVar10;
      *(int *)(lVar6 + 8 + lVar11) = iVar12;
      *(wint_t **)(lVar6 + 0x10 + lVar11) = pwVar9;
      *(int *)(lVar6 + 0x18 + lVar11) = iVar4;
      *(undefined4 *)(lVar6 + 0x1c + lVar11) = uVar8;
      pwVar10 = pwVar14;
      plVar2 = local_88;
    } while (pwVar14 < pwVar1);
    uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
LAB_1467d2d9d:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1467d2dce FUN_1467d2dce body=785 status=ok
// SIG undefined FUN_1467d2dce(void)

undefined8 * FUN_1467d2dce(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  byte local_d8;
  undefined1 local_c1;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  uVar11 = (ulonglong)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  cVar6 = FUN_141339dcc(param_3,&local_78,0x3d,0x2c);
  if (cVar6 != '\0') {
    local_88 = 0;
    uStack_80 = 0;
    if ((int)uStack_70 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_70 & 0xffffffff);
    }
    local_c0 = 0;
    iVar8 = 0;
    uVar13 = 0;
    if ((uStack_70 & 0xffffffff) != 0) {
      FUN_1467df14c(&local_88);
      local_c0 = 0;
      iVar8 = 0;
      uVar13 = 0;
      if ((longlong)(int)uStack_70 != 0) {
        local_c1 = (undefined1)param_2;
        lVar12 = (longlong)(int)uStack_70 << 6;
        local_c0 = 0;
        local_bc = 0;
        lVar14 = local_78;
        do {
          lVar12 = lVar12 + -0x40;
          local_a8 = *param_4;
          local_a0 = param_4[1];
          if (local_a0 != 0) {
            LOCK();
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            UNLOCK();
          }
          FUN_14006620a(local_b8,*(undefined8 *)(lVar14 + 0x20),*(undefined4 *)(lVar14 + 0x28));
          FUN_1467d30e2(&local_98,local_b8,&local_a8);
          if (local_b8[0] != 0) {
            FUN_1400020a8();
          }
          bVar7 = FUN_1413396fc(&local_98);
          lVar4 = local_98;
          if (bVar7 != 0) {
            if (local_c0 < *(int *)(lVar14 + 0x28)) {
              local_c0 = *(int *)(lVar14 + 0x28);
            }
            pcVar1 = (char *)(local_98 + 0x28);
            LOCK();
            bVar15 = *(char *)(local_98 + 0x28) == '\0';
            if (bVar15) {
              *(char *)(local_98 + 0x28) = '\x01';
            }
            UNLOCK();
            if (!bVar15) {
              FUN_1447d2058();
            }
            iVar8 = *(int *)(lVar4 + 0x68);
            if (pcVar1 != (char *)0x0) {
              LOCK();
              cVar6 = *pcVar1;
              if (cVar6 == '\x01') {
                *pcVar1 = '\0';
              }
              UNLOCK();
              if (cVar6 != '\x01') {
                FUN_14008cdb0(pcVar1);
              }
            }
            local_bc = CONCAT31((int3)((uint)local_bc >> 8),(byte)local_bc | iVar8 == 2);
            FUN_1467df1b4(&local_88,lVar14,&local_98);
          }
          plVar5 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_90 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          lVar14 = lVar14 + 0x40;
        } while ((bVar7 & lVar12 != 0) != 0);
        uVar11 = CONCAT71((int7)((ulonglong)local_b8 >> 8),local_c1);
        iVar8 = (int)uStack_70;
        uVar13 = local_bc;
      }
    }
    if ((int)uStack_80 == iVar8) {
      uVar9 = FUN_14001cc68(0x78,0x10);
      local_d8 = (byte)uVar13 & 1;
      FUN_1467d317e(uVar9,uVar11 & 0xffffffff,&local_88,local_c0);
      *param_1 = uVar9;
      puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar10[1] = &DAT_100000001;
      *puVar10 = &PTR_LAB_149e190a0;
      puVar10[2] = uVar9;
      param_1[1] = puVar10;
      FUN_1467d65a3(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1467d2e2a;
    }
    FUN_1467d65a3(local_88);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1467d2e2a:
  FUN_1413397e9(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467d30e2 FUN_1467d30e2 body=152 status=ok
// SIG undefined FUN_1467d30e2(void)

undefined8 FUN_1467d30e2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_14116971a(param_1,param_2,&local_28,1);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d317e FUN_1467d317e body=2758 status=ok
// SIG undefined FUN_1467d317e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1467d317e(undefined8 *param_1,undefined1 param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_98 [36];
  uint local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149e18640;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  *(undefined1 *)(param_1 + 2) = param_5;
  lVar12 = 0x18;
  local_70 = param_3;
  do {
    FUN_1410a5228((longlong)param_1 + lVar12);
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x78);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844890) && (FUN_144b3d300(&DAT_14c844890), DAT_14c844890 == -1)) {
    DAT_14c844870 = L"zero";
    DAT_14c844878 = 4;
    DAT_14c844880 = 0;
    uRam000000014c844888 = 0;
    atexit((_func_5014 *)&LAB_142760cf8);
    _Init_thread_footer(&DAT_14c844890);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8448b8) && (FUN_144b3d300(&DAT_14c8448b8), DAT_14c8448b8 == -1)) {
    DAT_14c844898 = L"one";
    DAT_14c8448a0 = 3;
    DAT_14c8448a8 = 0;
    uRam000000014c8448b0 = 0;
    atexit((_func_5014 *)&LAB_142760d09);
    _Init_thread_footer(&DAT_14c8448b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8448e0) && (FUN_144b3d300(&DAT_14c8448e0), DAT_14c8448e0 == -1)) {
    DAT_14c8448c0 = L"two";
    DAT_14c8448c8 = 3;
    DAT_14c8448d0 = 0;
    uRam000000014c8448d8 = 0;
    atexit((_func_5014 *)&LAB_142760d1a);
    _Init_thread_footer(&DAT_14c8448e0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844908) && (FUN_144b3d300(&DAT_14c844908), DAT_14c844908 == -1)) {
    DAT_14c8448e8 = L"few";
    DAT_14c8448f0 = 3;
    DAT_14c8448f8 = 0;
    uRam000000014c844900 = 0;
    atexit((_func_5014 *)&LAB_142760d2b);
    _Init_thread_footer(&DAT_14c844908);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844930) && (FUN_144b3d300(&DAT_14c844930), DAT_14c844930 == -1)) {
    DAT_14c844910 = L"many";
    DAT_14c844918 = 4;
    DAT_14c844920 = 0;
    uRam000000014c844928 = 0;
    atexit((_func_5014 *)&LAB_142760d3c);
    _Init_thread_footer(&DAT_14c844930);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844958) && (FUN_144b3d300(&DAT_14c844958), DAT_14c844958 == -1)) {
    DAT_14c844938 = L"other";
    DAT_14c844940 = 5;
    DAT_14c844948 = 0;
    _DAT_14c844950 = 0;
    atexit((_func_5014 *)&LAB_142760d4d);
    _Init_thread_footer(&DAT_14c844958);
  }
  iVar8 = DAT_14c844878;
  pwVar6 = DAT_14c844870;
  local_74 = *(uint *)(local_70 + 1);
  lVar12 = *local_70;
  if ((int)local_74 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = local_74;
    do {
      uVar3 = (uVar11 >> 1) + uVar13;
      lVar9 = (ulonglong)uVar3 * 0x30;
      iVar7 = *(int *)(lVar12 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar12),pwVar6,(longlong)iVar7), iVar7 < 0)))) {
        uVar13 = uVar3 + (uVar11 & 1);
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
  }
  if ((int)uVar13 < (int)local_74) {
    iVar8 = *(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x30);
    if ((DAT_14c844878 < iVar8) ||
       (((puVar10 = (undefined8 *)(lVar12 + (ulonglong)uVar13 * 0x30), DAT_14c844878 <= iVar8 &&
         (iVar8 = wcsncmp(DAT_14c844870,(wchar_t *)*puVar10,(longlong)DAT_14c844878), iVar8 < 0)) ||
        (puVar10 + 4 == (undefined8 *)0x0)))) goto LAB_1467d334f;
    local_68 = puVar10[4];
    plStack_60 = (longlong *)puVar10[5];
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_60 + 8) = *(int *)((longlong)plStack_60 + 8) + 1;
      UNLOCK();
    }
  }
  else {
LAB_1467d334f:
    FUN_1410a5228(&local_68);
  }
  local_58 = param_1[3];
  plVar5 = (longlong *)param_1[4];
  param_1[3] = local_68;
  param_1[4] = plStack_60;
  local_68 = local_58;
  plStack_60 = plVar5;
  plStack_50 = plVar5;
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
  iVar8 = DAT_14c8448a0;
  pwVar6 = DAT_14c844898;
  local_74 = *(uint *)(local_70 + 1);
  lVar12 = *local_70;
  if ((int)local_74 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = local_74;
    do {
      uVar3 = (uVar11 >> 1) + uVar13;
      lVar9 = (ulonglong)uVar3 * 0x30;
      iVar7 = *(int *)(lVar12 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar12),pwVar6,(longlong)iVar7), iVar7 < 0)))) {
        uVar13 = uVar3 + (uVar11 & 1);
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
  }
  if ((int)uVar13 < (int)local_74) {
    iVar8 = *(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x30);
    if (((DAT_14c8448a0 < iVar8) ||
        ((puVar10 = (undefined8 *)(lVar12 + (ulonglong)uVar13 * 0x30), DAT_14c8448a0 <= iVar8 &&
         (iVar8 = wcsncmp(DAT_14c844898,(wchar_t *)*puVar10,(longlong)DAT_14c8448a0), iVar8 < 0))))
       || (puVar10 + 4 == (undefined8 *)0x0)) goto LAB_1467d3438;
    local_68 = puVar10[4];
    plStack_60 = (longlong *)puVar10[5];
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
  }
  else {
LAB_1467d3438:
    FUN_1410a5228(&local_68);
  }
  local_58 = param_1[5];
  plVar5 = (longlong *)param_1[6];
  param_1[5] = local_68;
  param_1[6] = plStack_60;
  local_68 = local_58;
  plStack_60 = plVar5;
  plStack_50 = plVar5;
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
  iVar8 = DAT_14c8448c8;
  pwVar6 = DAT_14c8448c0;
  local_74 = *(uint *)(local_70 + 1);
  lVar12 = *local_70;
  if ((int)local_74 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = local_74;
    do {
      uVar3 = (uVar11 >> 1) + uVar13;
      lVar9 = (ulonglong)uVar3 * 0x30;
      iVar7 = *(int *)(lVar12 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar12),pwVar6,(longlong)iVar7), iVar7 < 0)))) {
        uVar13 = uVar3 + (uVar11 & 1);
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
  }
  if ((int)uVar13 < (int)local_74) {
    iVar8 = *(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x30);
    if ((DAT_14c8448c8 < iVar8) ||
       (((puVar10 = (undefined8 *)(lVar12 + (ulonglong)uVar13 * 0x30), DAT_14c8448c8 <= iVar8 &&
         (iVar8 = wcsncmp(DAT_14c8448c0,(wchar_t *)*puVar10,(longlong)DAT_14c8448c8), iVar8 < 0)) ||
        (puVar10 + 4 == (undefined8 *)0x0)))) goto LAB_1467d3523;
    local_68 = puVar10[4];
    plStack_60 = (longlong *)puVar10[5];
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
  }
  else {
LAB_1467d3523:
    FUN_1410a5228(&local_68);
  }
  local_58 = param_1[7];
  plVar5 = (longlong *)param_1[8];
  param_1[7] = local_68;
  param_1[8] = plStack_60;
  local_68 = local_58;
  plStack_60 = plVar5;
  plStack_50 = plVar5;
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
  iVar8 = DAT_14c8448f0;
  pwVar6 = DAT_14c8448e8;
  local_74 = *(uint *)(local_70 + 1);
  lVar12 = *local_70;
  if ((int)local_74 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = local_74;
    do {
      uVar3 = (uVar11 >> 1) + uVar13;
      lVar9 = (ulonglong)uVar3 * 0x30;
      iVar7 = *(int *)(lVar12 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar12),pwVar6,(longlong)iVar7), iVar7 < 0)))) {
        uVar13 = uVar3 + (uVar11 & 1);
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
  }
  if ((int)uVar13 < (int)local_74) {
    iVar8 = *(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x30);
    if (((DAT_14c8448f0 < iVar8) ||
        ((puVar10 = (undefined8 *)(lVar12 + (ulonglong)uVar13 * 0x30), DAT_14c8448f0 <= iVar8 &&
         (iVar8 = wcsncmp(DAT_14c8448e8,(wchar_t *)*puVar10,(longlong)DAT_14c8448f0), iVar8 < 0))))
       || (puVar10 + 4 == (undefined8 *)0x0)) goto LAB_1467d360e;
    local_68 = puVar10[4];
    plStack_60 = (longlong *)puVar10[5];
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
  }
  else {
LAB_1467d360e:
    FUN_1410a5228(&local_68);
  }
  local_58 = param_1[9];
  plVar5 = (longlong *)param_1[10];
  param_1[9] = local_68;
  param_1[10] = plStack_60;
  local_68 = local_58;
  plStack_60 = plVar5;
  plStack_50 = plVar5;
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
  iVar8 = DAT_14c844918;
  pwVar6 = DAT_14c844910;
  local_74 = *(uint *)(local_70 + 1);
  lVar12 = *local_70;
  if ((int)local_74 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = local_74;
    do {
      uVar3 = (uVar11 >> 1) + uVar13;
      lVar9 = (ulonglong)uVar3 * 0x30;
      iVar7 = *(int *)(lVar12 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar12),pwVar6,(longlong)iVar7), iVar7 < 0)))) {
        uVar13 = uVar3 + (uVar11 & 1);
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
  }
  if ((int)uVar13 < (int)local_74) {
    iVar8 = *(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x30);
    if ((DAT_14c844918 < iVar8) ||
       (((puVar10 = (undefined8 *)(lVar12 + (ulonglong)uVar13 * 0x30), DAT_14c844918 <= iVar8 &&
         (iVar8 = wcsncmp(DAT_14c844910,(wchar_t *)*puVar10,(longlong)DAT_14c844918), iVar8 < 0)) ||
        (puVar10 + 4 == (undefined8 *)0x0)))) goto LAB_1467d36f9;
    local_68 = puVar10[4];
    plStack_60 = (longlong *)puVar10[5];
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
  }
  else {
LAB_1467d36f9:
    FUN_1410a5228(&local_68);
  }
  local_58 = param_1[0xb];
  plVar5 = (longlong *)param_1[0xc];
  param_1[0xb] = local_68;
  param_1[0xc] = plStack_60;
  local_68 = local_58;
  plStack_60 = plVar5;
  plStack_50 = plVar5;
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
  iVar8 = DAT_14c844940;
  pwVar6 = DAT_14c844938;
  local_74 = *(uint *)(local_70 + 1);
  lVar12 = *local_70;
  if ((int)local_74 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = local_74;
    do {
      uVar3 = (uVar11 >> 1) + uVar13;
      lVar9 = (ulonglong)uVar3 * 0x30;
      iVar7 = *(int *)(lVar12 + 8 + lVar9);
      if ((iVar7 < iVar8) ||
         ((iVar7 <= iVar8 &&
          (iVar7 = wcsncmp(*(wchar_t **)(lVar9 + lVar12),pwVar6,(longlong)iVar7), iVar7 < 0)))) {
        uVar13 = uVar3 + (uVar11 & 1);
      }
      bVar4 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar4);
  }
  if ((int)uVar13 < (int)local_74) {
    iVar8 = *(int *)(lVar12 + 8 + (ulonglong)uVar13 * 0x30);
    if (((iVar8 <= DAT_14c844940) &&
        ((puVar10 = (undefined8 *)(lVar12 + (ulonglong)uVar13 * 0x30), iVar8 < DAT_14c844940 ||
         (iVar8 = wcsncmp(DAT_14c844938,(wchar_t *)*puVar10,(longlong)DAT_14c844940), -1 < iVar8))))
       && (puVar10 + 4 != (undefined8 *)0x0)) {
      local_68 = puVar10[4];
      plStack_60 = (longlong *)puVar10[5];
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
        UNLOCK();
      }
      goto LAB_1467d37f0;
    }
  }
  FUN_1410a5228(&local_68);
LAB_1467d37f0:
  local_58 = param_1[0xd];
  plVar5 = (longlong *)param_1[0xe];
  param_1[0xd] = local_68;
  param_1[0xe] = plStack_60;
  local_68 = local_58;
  plStack_60 = plVar5;
  plStack_50 = plVar5;
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467d3c46 FUN_1467d3c46 body=1048 status=ok
// SIG undefined FUN_1467d3c46(void)

/* WARNING: Removing unreachable block (ram,0x0001467d3edc) */
/* WARNING: Removing unreachable block (ram,0x0001467d3df3) */
/* WARNING: Removing unreachable block (ram,0x0001467d3f74) */

ulonglong FUN_1467d3c46(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  size_t _Size;
  bool bVar18;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_2;
  puVar9 = (undefined8 *)(**(code **)(**(longlong **)*param_2 + 0xa8))();
  local_58 = (void *)0x0;
  local_50 = *(int *)(puVar9 + 1);
  _Size = (size_t)local_50;
  _Src = (void *)*puVar9;
  if (_Size == 0) {
    local_4c = 0;
  }
  else {
    FUN_1467df3fe(&local_58,local_50);
    memcpy(local_58,_Src,_Size);
    if (local_50 == 1) {
      pwVar13 = L"Ordinal";
      pwVar14 = L"Ordinal";
      if (*(char *)(param_1 + 8) == '\0') {
        pwVar14 = L"Cardinal";
      }
      FUN_140002266(&local_68,
                    L"%s plural form argument modifier is redundant as this culture only has a single plural form"
                    ,pwVar14);
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_3,iVar3);
      }
      lVar15 = *param_3;
      lVar17 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar15 + lVar17) = 0;
      *(undefined8 *)(lVar15 + lVar17) = local_68;
      *(undefined4 *)(lVar15 + 8 + lVar17) = (undefined4)local_60;
      *(undefined4 *)(lVar15 + 0xc + lVar17) = local_60._4_4_;
      local_60 = (longlong *)0x0;
      local_68 = 0;
      pcVar16 = *(char **)(param_1 + 0x68);
      if (*pcVar16 == '\0') {
        uVar10 = (**(code **)(**(longlong **)(pcVar16 + 0x18) + 0x50))();
        FUN_1447a1fc0(uVar10);
        pcVar16 = (char *)(**(code **)(**(longlong **)(pcVar16 + 0x18) + 0x28))();
      }
      else {
        pcVar16 = pcVar16 + 0x30;
      }
      if (*(int *)(pcVar16 + 8) < 2) {
        if (*(char *)(param_1 + 8) == '\0') {
          pwVar13 = L"Cardinal";
        }
        FUN_140002266(&local_68,
                      L"%s plural form argument modifier is missing a required plural form for \'%s\'"
                      ,pwVar13,L"other");
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(param_3,iVar3);
        }
        lVar15 = *param_3;
        lVar17 = (longlong)iVar3 * 0x10;
        *(undefined8 *)(lVar15 + lVar17) = 0;
        *(undefined8 *)(lVar15 + lVar17) = local_68;
        *(undefined4 *)(lVar15 + 8 + lVar17) = (undefined4)local_60;
        *(undefined4 *)(lVar15 + 0xc + lVar17) = local_60._4_4_;
      }
      uVar12 = 0;
      goto LAB_1467d3f7b;
    }
  }
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  lVar15 = 0;
  do {
    bVar6 = true;
    bVar7 = (byte)lVar15;
    if ((longlong)local_50 != 0) {
      lVar17 = 0;
      do {
        bVar18 = *(byte *)((longlong)local_58 + lVar17) == bVar7;
        bVar6 = !bVar18;
        if (bVar18) break;
        bVar18 = (longlong)local_50 + -1 != lVar17;
        lVar17 = lVar17 + 1;
      } while (bVar18);
    }
    pcVar16 = *(char **)(lVar15 * 0x10 + param_1 + 0x18);
    if (*pcVar16 == '\0') {
      uVar10 = (**(code **)(**(longlong **)(pcVar16 + 0x18) + 0x50))();
      FUN_1447a1fc0(uVar10);
      pcVar16 = (char *)(**(code **)(**(longlong **)(pcVar16 + 0x18) + 0x28))();
    }
    else {
      pcVar16 = pcVar16 + 0x30;
    }
    if (*(int *)(pcVar16 + 8) < 2) {
      if (!bVar6) {
        pwVar14 = L"other";
        if (bVar7 < 5) {
          pwVar14 = (wchar_t *)(&PTR_u_zero_149e19fe8)[(uint)lVar15 & 7];
        }
        pwVar13 = L"Ordinal";
        if (*(char *)(param_1 + 8) == '\0') {
          pwVar13 = L"Cardinal";
        }
        pwVar11 = L"%s plural form argument modifier is missing a required plural form for \'%s\'";
LAB_1467d3d99:
        FUN_140002266(&local_68,pwVar11,pwVar13,pwVar14);
        lVar17 = param_3[1];
        uVar8 = (int)lVar17 + 1;
        *(uint *)(param_3 + 1) = uVar8;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar8) {
          FUN_1447a1bd6(param_3);
        }
        lVar4 = *param_3;
        lVar17 = (longlong)(int)lVar17 * 0x10;
        *(undefined8 *)(lVar4 + lVar17) = 0;
        *(undefined8 *)(lVar4 + lVar17) = local_68;
        *(undefined4 *)(lVar4 + 8 + lVar17) = (undefined4)local_60;
        *(undefined4 *)(lVar4 + 0xc + lVar17) = local_60._4_4_;
        local_60 = (longlong *)0x0;
        local_68 = 0;
        uVar12 = 0;
      }
    }
    else if (bVar6) {
      pwVar14 = L"other";
      if (bVar7 < 5) {
        pwVar14 = (wchar_t *)(&PTR_u_zero_149e19fe8)[(uint)lVar15 & 7];
      }
      pwVar13 = L"Ordinal";
      if (*(char *)(param_1 + 8) == '\0') {
        pwVar13 = L"Cardinal";
      }
      pwVar11 = L"%s plural form argument modifier has an unused plural form for \'%s\'";
      goto LAB_1467d3d99;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 6);
LAB_1467d3f7b:
  lVar15 = 0x18;
  do {
    local_68 = *local_70;
    plVar5 = (longlong *)local_70[1];
    local_60 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      bVar7 = FUN_1467d4060(param_1 + lVar15,&local_68,param_3);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar7 = FUN_1467d4060(param_1 + lVar15,&local_68,param_3);
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
    }
    uVar12 = CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 & bVar7);
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x78);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d4060 FUN_1467d4060 body=93 status=ok
// SIG undefined FUN_1467d4060(void)

undefined4 FUN_1467d4060(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  bool bVar5;
  
  lVar3 = *param_1;
  pcVar1 = (char *)(lVar3 + 0x28);
  LOCK();
  bVar5 = *(char *)(lVar3 + 0x28) == '\0';
  if (bVar5) {
    *(char *)(lVar3 + 0x28) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_1447d2058(pcVar1);
  }
  uVar4 = FUN_1467d4e1c(lVar3,param_2,param_3);
  if (pcVar1 != (char *)0x0) {
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
  }
  return uVar4;
}



// FUNCTION 1467d40be FUN_1467d40be body=480 status=ok
// SIG undefined FUN_1467d40be(void)

void FUN_1467d40be(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  int local_a0;
  byte local_91;
  longlong local_90;
  undefined8 local_88;
  char local_80;
  undefined7 uStack_7f;
  int local_78 [4];
  longlong *local_68;
  undefined4 local_60;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_145c56324();
  uVar7 = *(undefined8 *)(lVar5 + 0x28);
  plVar6 = *(longlong **)(lVar5 + 0x30);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  local_91 = 5;
  local_90 = param_1;
  local_88 = uVar7;
  cVar4 = FUN_142760c24(&local_90,param_2,1);
  if ((cVar4 == '\0') && (*param_2 == 4)) {
    plVar6 = *(longlong **)(param_2 + 4);
    local_a8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    local_a0 = param_2[6];
    local_80 = '\0';
    local_78[0] = 4;
    FUN_140e82300();
    local_68 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      (**(code **)(*DAT_14c844840 + 8))();
    }
    local_60 = DAT_14c844848;
    local_40 = '\0';
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    cVar4 = (**(code **)(*plVar6 + 0xa0))(plVar6,&local_a8,&local_80);
    if (cVar4 != '\0') {
      uVar7 = 1;
      if (local_80 == '\x01') {
        uVar7 = 100;
      }
      FUN_142760c24(&local_90,local_78,uVar7,&local_91);
    }
    if (local_40 == '\x01') {
      local_40 = '\0';
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  FUN_14010c352(&local_80,param_1 + (ulonglong)local_91 * 0x10 + 0x18,param_3);
  iVar3 = local_78[0] + -1;
  if (local_78[0] == 0) {
    iVar3 = 0;
  }
  FUN_1400020e8(param_4,CONCAT71(uStack_7f,local_80),iVar3);
  if (CONCAT71(uStack_7f,local_80) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d42a0 FUN_1467d42a0 body=90 status=ok
// SIG undefined FUN_1467d42a0(void)

void FUN_1467d42a0(longlong param_1,undefined8 param_2)

{
  FUN_1467cf814(param_1 + 0x18);
  FUN_1467cf814(param_1 + 0x28,param_2);
  FUN_1467cf814(param_1 + 0x38,param_2);
  FUN_1467cf814(param_1 + 0x48,param_2);
  FUN_1467cf814(param_1 + 0x58,param_2);
  FUN_1467cf814(param_1 + 0x68,param_2);
  return;
}



// FUNCTION 1467d4306 FUN_1467d4306 body=1265 status=ok
// SIG undefined FUN_1467d4306(void)

undefined8 * FUN_1467d4306(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined8 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  cVar10 = FUN_1467d2bc4(param_2);
  if ((cVar10 != '\0') && (((uint)uStack_60 & 0xfffffffe) == 2)) {
    local_88 = *param_3;
    local_80 = param_3[1];
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    FUN_14006620a(&local_98,*local_68,*(undefined4 *)(local_68 + 1));
    FUN_1467d30e2(&local_78,&local_98,&local_88);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    local_a8 = *param_3;
    local_a0 = param_3[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    FUN_14006620a(&local_b8,local_68[4],*(undefined4 *)(local_68 + 5));
    FUN_1467d30e2(&local_98,&local_b8,&local_a8);
    if (CONCAT44(uStack_b4,local_b8) != 0) {
      FUN_1400020a8();
    }
    FUN_1410a5228(&local_b8);
    if ((uint)uStack_60 == 3) {
      local_d8 = *param_3;
      local_d0 = param_3[1];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_14006620a(local_e8,local_68[8],*(undefined4 *)(local_68 + 9));
      FUN_1467d30e2(&local_c8,local_e8,&local_d8);
      uVar9 = uStack_ac;
      uVar8 = uStack_b0;
      uVar7 = uStack_b4;
      uVar6 = local_b8;
      local_b8 = local_c8;
      uStack_b4 = uStack_c4;
      uStack_b0 = uStack_c0;
      uStack_ac = uStack_bc;
      local_c8 = uVar6;
      uStack_c4 = uVar7;
      uStack_c0 = uVar8;
      uStack_bc = uVar9;
      plVar14 = (longlong *)CONCAT44(uVar9,uVar8);
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
          }
        }
      }
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar10 = FUN_1413396fc(&local_78);
    if ((cVar10 != '\0') && (cVar10 = FUN_1413396fc(&local_98), lVar5 = local_78, cVar10 != '\0')) {
      iVar13 = *(int *)(local_68 + 1);
      if (*(int *)(local_68 + 1) < *(int *)(local_68 + 5)) {
        iVar13 = *(int *)(local_68 + 5);
      }
      if (((uint)uStack_60 == 3) && (iVar13 < *(int *)(local_68 + 9))) {
        iVar13 = *(int *)(local_68 + 9);
      }
      pcVar3 = (char *)(local_78 + 0x28);
      LOCK();
      bVar15 = *(char *)(local_78 + 0x28) == '\0';
      if (bVar15) {
        *(char *)(local_78 + 0x28) = '\x01';
      }
      UNLOCK();
      if (!bVar15) {
        FUN_1447d2058();
      }
      iVar4 = *(int *)(lVar5 + 0x68);
      if (pcVar3 != (char *)0x0) {
        LOCK();
        cVar10 = *pcVar3;
        if (cVar10 == '\x01') {
          *pcVar3 = '\0';
        }
        UNLOCK();
        if (cVar10 != '\x01') {
          FUN_14008cdb0(pcVar3);
        }
      }
      lVar5 = local_98;
      bVar15 = true;
      if (iVar4 != 2) {
        pcVar3 = (char *)(local_98 + 0x28);
        LOCK();
        bVar15 = *(char *)(local_98 + 0x28) == '\0';
        if (bVar15) {
          *(char *)(local_98 + 0x28) = '\x01';
        }
        UNLOCK();
        if (!bVar15) {
          FUN_1447d2058();
        }
        iVar4 = *(int *)(lVar5 + 0x68);
        if (pcVar3 != (char *)0x0) {
          LOCK();
          cVar10 = *pcVar3;
          if (cVar10 == '\x01') {
            *pcVar3 = '\0';
          }
          UNLOCK();
          if (cVar10 != '\x01') {
            FUN_14008cdb0(pcVar3);
          }
        }
        bVar15 = true;
        if (iVar4 != 2) {
          lVar5 = CONCAT44(uStack_b4,local_b8);
          pcVar3 = (char *)(lVar5 + 0x28);
          LOCK();
          bVar15 = *(char *)(lVar5 + 0x28) == '\0';
          if (bVar15) {
            *(char *)(lVar5 + 0x28) = '\x01';
          }
          UNLOCK();
          if (!bVar15) {
            FUN_1447d2058();
          }
          iVar4 = *(int *)(lVar5 + 0x68);
          if (pcVar3 != (char *)0x0) {
            LOCK();
            cVar10 = *pcVar3;
            if (cVar10 == '\x01') {
              *pcVar3 = '\0';
            }
            UNLOCK();
            if (cVar10 != '\x01') {
              FUN_14008cdb0(pcVar3);
            }
          }
          bVar15 = iVar4 == 2;
        }
      }
      puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      *puVar11 = &PTR_FUN_149e186a0;
      *(int *)(puVar11 + 1) = iVar13;
      *(bool *)((longlong)puVar11 + 0xc) = bVar15;
      puVar11[2] = local_78;
      puVar11[3] = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      puVar11[4] = local_98;
      puVar11[5] = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      puVar11[6] = CONCAT44(uStack_b4,local_b8);
      lVar5 = CONCAT44(uStack_ac,uStack_b0);
      puVar11[7] = lVar5;
      if (lVar5 == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        plVar14 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
      }
      *param_1 = puVar11;
      puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      puVar12[1] = &DAT_100000001;
      *puVar12 = &PTR_LAB_149e190c0;
      puVar12[2] = puVar11;
      param_1[1] = puVar12;
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
          }
        }
      }
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_90 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
          }
        }
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_70 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      goto LAB_1467d4657;
    }
    plVar14 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
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
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_90 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_70 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1467d4657:
  FUN_1467df44e(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467d47f8 FUN_1467d47f8 body=452 status=ok
// SIG undefined FUN_1467d47f8(void)

undefined8 FUN_1467d47f8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    uVar6 = FUN_1467d4060(param_1 + 0x10,&local_48,param_3);
    uVar7 = (ulonglong)uVar6;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar6 = FUN_1467d4060(param_1 + 0x10,&local_48,param_3);
    uVar7 = (ulonglong)uVar6;
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
  local_48 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    bVar4 = FUN_1467d4060(param_1 + 0x20,&local_48,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar4 = FUN_1467d4060(param_1 + 0x20,&local_48,param_3);
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
  local_48 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    bVar5 = FUN_1467d4060(param_1 + 0x30,&local_48,param_3);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar5 = FUN_1467d4060(param_1 + 0x30,&local_48,param_3);
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & bVar4 & bVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d49be FUN_1467d49be body=149 status=ok
// SIG undefined FUN_1467d49be(void)

void FUN_1467d49be(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 5) {
    cVar1 = (char)param_2[2];
    if (cVar1 == '\x02') {
      param_1 = param_1 + 0x30;
    }
    else if (cVar1 == '\x01') {
      param_1 = param_1 + 0x20;
    }
    else {
      if (cVar1 != '\0') goto LAB_1467d4a36;
      param_1 = param_1 + 0x10;
    }
    FUN_14010c352(&local_28,param_1);
    iVar2 = local_20 + -1;
    if (local_20 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_4,local_28,iVar2);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1467d4a36:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d4a54 FUN_1467d4a54 body=54 status=ok
// SIG undefined FUN_1467d4a54(void)

void FUN_1467d4a54(longlong param_1,undefined8 param_2)

{
  FUN_1467cf814(param_1 + 0x10);
  FUN_1467cf814(param_1 + 0x20,param_2);
  FUN_1467cf814(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 1467d4a96 FUN_1467d4a96 body=214 status=ok
// SIG undefined FUN_1467d4a96(void)

undefined8 * FUN_1467d4a96(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  bVar1 = FUN_1467d2bc4(param_2,&local_28);
  if (((int)uStack_20 == 2 & bVar1) == 1) {
    uVar2 = FUN_14001cc68(0x50,0x10);
    FUN_1467d4b6e(uVar2,local_28,local_28 + 0x20);
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar3[1] = &DAT_100000001;
    *puVar3 = &PTR_LAB_149e190e0;
    puVar3[2] = uVar2;
  }
  else {
    uVar2 = 0;
    puVar3 = (undefined8 *)0x0;
  }
  *param_1 = uVar2;
  param_1[1] = puVar3;
  FUN_1467df44e(local_28,(int)uStack_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d4b6e FUN_1467d4b6e body=204 status=ok
// SIG undefined FUN_1467d4b6e(void)

undefined8 * FUN_1467d4b6e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_149e186d0;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = 0;
  param_1[3] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[5] = *param_3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 1);
  param_1[7] = 0;
  param_1[7] = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((*(int *)(param_1 + 2) == 2) && (*(int *)(param_1 + 6) == 1)) {
    iVar1 = wcsncmp((wchar_t *)param_1[1],L"으로",2);
    if (iVar1 == 0) {
      iVar1 = wcsncmp((wchar_t *)param_1[5],L"로",1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 9) = 1;
      }
    }
  }
  return param_1;
}



// FUNCTION 1467d4c3e FUN_1467d4c3e body=284 status=ok
// SIG undefined FUN_1467d4c3e(void)

void FUN_1467d4c3e(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar3 = 0;
  }
  FUN_14010cc50(param_2,*(undefined1 *)(param_3 + 0x14),*(undefined1 *)(param_3 + 0x15));
  iVar2 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar2 = 0;
  }
  if ((iVar3 == iVar2) ||
     (uVar1 = *(ushort *)(*param_4 + -2 + (longlong)iVar2 * 2),
     0x2ba3 < (ushort)(uVar1 + 0x5400) && 9 < (ushort)(uVar1 - 0x30))) {
    return;
  }
  iVar3 = (int)((ulonglong)((longlong)(int)(uVar1 - 0xac00) * -0x6db6db6d) >> 0x20) + (uint)uVar1 +
          -0xac00;
  iVar3 = (uVar1 - 0xac00) + ((iVar3 >> 4) - (iVar3 >> 0x1f)) * -0x1c;
  if ((iVar3 != 0) ||
     ((uVar1 < 0x39 && ((0x1cb000000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) != 0)))) {
    lVar4 = 0x10;
    lVar5 = 8;
    if ((*(int *)(param_1 + 0x48) != 1) ||
       ((iVar3 != 8 &&
        ((0x38 < uVar1 || ((0x182000000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0))))))
    goto LAB_1467d4d08;
  }
  lVar4 = 0x30;
  lVar5 = 0x28;
LAB_1467d4d08:
  FUN_1400020e8(param_4,*(undefined8 *)(param_1 + lVar5),*(undefined4 *)(param_1 + lVar4));
  return;
}



// FUNCTION 1467d4d68 FUN_1467d4d68 body=11 status=ok
// SIG undefined FUN_1467d4d68(void)

void FUN_1467d4d68(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1467d4d74(*param_1,*param_2);
  return;
}



// FUNCTION 1467d4d74 FUN_1467d4d74 body=99 status=ok
// SIG undefined FUN_1467d4d74(void)

undefined8 FUN_1467d4d74(char *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  bool bVar6;
  
  cVar1 = *param_1;
  if (cVar1 == *param_2) {
    if (cVar1 == '\x01') {
      if ((param_3 & 2) != 0) {
        iVar3 = *(int *)(param_1 + 0x38);
        iVar2 = *(int *)(param_2 + 0x38);
        if (iVar3 == iVar2) {
          if (iVar3 < 2) {
            return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
          }
          iVar3 = wcscmp(*(wchar_t **)(param_1 + 0x30),*(wchar_t **)(param_2 + 0x30));
          uVar5 = CONCAT44(extraout_var,iVar3);
          bVar6 = iVar3 == 0;
        }
        else {
          uVar5 = (ulonglong)(uint)(iVar2 + iVar3);
          bVar6 = iVar2 + iVar3 == 1;
        }
        return CONCAT71((int7)(uVar5 >> 8),bVar6);
      }
    }
    else if (cVar1 == '\0') {
      uVar4 = FUN_14010cee6(param_1 + 0x18,param_2 + 0x18);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1467d4dd8 FUN_1467d4dd8 body=68 status=ok
// SIG undefined FUN_1467d4dd8(void)

longlong * FUN_1467d4dd8(undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    plVar2 = *(longlong **)(pcVar1 + 0x18);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(pcVar1 + 0x20);
  }
  else {
    FUN_140009b9a(param_2,pcVar1 + 0x30);
  }
  return param_2;
}



// FUNCTION 1467d4e1c FUN_1467d4e1c body=440 status=ok
// SIG undefined FUN_1467d4e1c(void)

ulonglong FUN_1467d4e1c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  undefined7 uVar9;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14010c940();
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(int *)(param_1 + 0x68) == 2) {
    local_40 = *param_2;
    if (local_40 == 0) {
      lVar6 = FUN_145c56324();
      local_40 = *(longlong *)(lVar6 + 0x28);
      local_38 = *(longlong **)(lVar6 + 0x30);
    }
    else {
      local_38 = (longlong *)param_2[1];
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    uVar7 = CONCAT71(uVar9,1);
    if (((*(byte *)(param_1 + 1) & 1) != 0) && ((longlong)*(int *)(param_1 + 0x48) != 0)) {
      piVar10 = *(int **)(param_1 + 0x40);
      piVar11 = piVar10 + (longlong)*(int *)(param_1 + 0x48) * 0x18;
      uVar7 = CONCAT71(uVar9,1);
      do {
        if ((((*piVar10 == -0x69f11528) && (piVar10[1] == 0x34d44d08)) &&
            (piVar10[2] == -0x43eee727)) && (piVar10[3] == 0x5bdf8d43)) {
          bVar5 = (**(code **)(**(longlong **)(piVar10 + 10) + 8))
                            (*(longlong **)(piVar10 + 10),&local_40,param_3);
          uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & bVar5);
        }
        piVar10 = piVar10 + 0x18;
      } while (piVar10 != piVar11);
    }
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar10 = (int *)((longlong)plVar4 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    uVar7 = CONCAT71(uVar9,1);
    if (*(int *)(param_1 + 0x68) == 0) {
      if (1 < *(int *)(param_1 + 0x78)) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(param_3,iVar3);
        }
        lVar6 = *param_3;
        lVar8 = (longlong)iVar3 * 0x10;
        puVar2 = (undefined8 *)(lVar6 + lVar8);
        *(undefined8 *)(lVar6 + lVar8) = 0;
        iVar3 = *(int *)(param_1 + 0x78);
        _Src = *(void **)(param_1 + 0x70);
        *(int *)(lVar6 + 8 + lVar8) = iVar3;
        if ((longlong)iVar3 != 0) {
          uVar7 = 0;
          FUN_1446dd670(puVar2,iVar3,0);
          memcpy((void *)*puVar2,_Src,(longlong)iVar3 * 2);
          goto LAB_1467d4e5f;
        }
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      uVar7 = 0;
    }
  }
LAB_1467d4e5f:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d4fd6 FUN_1467d4fd6 body=503 status=ok
// SIG undefined FUN_1467d4fd6(void)

/* WARNING: Removing unreachable block (ram,0x0001467d5186) */

void FUN_1467d4fd6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *_Str2;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14010c940();
  local_68 = param_1;
  if ((*(int *)(param_1 + 0x68) == 2) && ((longlong)*(int *)(param_1 + 0x48) != 0)) {
    piVar7 = *(int **)(param_1 + 0x40);
    local_60 = piVar7 + (longlong)*(int *)(param_1 + 0x48) * 0x18;
    do {
      if (piVar7[3] == -0x2cabdab9 &&
          (piVar7[2] == -0x6df9aa9a && (piVar7[1] == -0x62b7b29b && *piVar7 == 0x5fd9ef1a))) {
        iVar1 = piVar7[8];
        if ((longlong)(int)param_2[1] != 0) {
          puVar5 = (undefined8 *)*param_2;
          lVar4 = (longlong)(int)param_2[1] << 4;
          do {
            iVar2 = *(int *)(puVar5 + 1);
            iVar3 = iVar2 + -1;
            if (iVar2 == 0) {
              iVar3 = 0;
            }
            if (iVar1 == iVar3) {
              _Str2 = L"";
              if (iVar2 != 0) {
                _Str2 = (wchar_t *)*puVar5;
              }
              iVar2 = wcsncmp(*(wchar_t **)(piVar7 + 6),_Str2,(longlong)iVar1);
              if (iVar2 == 0) {
                if (puVar5 != (undefined8 *)0x0) goto LAB_1467d518b;
                break;
              }
            }
            puVar5 = puVar5 + 2;
            lVar4 = lVar4 + -0x10;
          } while (lVar4 != 0);
        }
        FUN_14006620a(&local_58,*(undefined8 *)(piVar7 + 6),iVar1);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(param_2,iVar1);
        }
        lVar4 = *param_2;
        lVar6 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar4 + lVar6) = 0;
        *(undefined8 *)(lVar4 + lVar6) = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar4 + 8 + lVar6) = (undefined4)local_50;
        *(undefined4 *)(lVar4 + 0xc + lVar6) = local_50._4_4_;
        local_50 = 0;
      }
      else if ((piVar7[3] == 0x5bdf8d43 &&
                (piVar7[2] == -0x43eee727 && (piVar7[1] == 0x34d44d08 && *piVar7 == -0x69f11528)))
              && ((*(byte *)(local_68 + 1) & 1) != 0)) {
        (**(code **)(**(longlong **)(piVar7 + 10) + 0x18))(*(longlong **)(piVar7 + 10),param_2);
      }
LAB_1467d518b:
      piVar7 = piVar7 + 0x18;
    } while (piVar7 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d51ce FUN_1467d51ce body=165 status=ok
// SIG undefined FUN_1467d51ce(void)

longlong *
FUN_1467d51ce(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_5;
  FUN_1467d5274(local_40);
  lVar1 = FUN_14001cc68(0x40,0x10);
  FUN_1467e2de8(lVar1,local_40,param_2,param_3);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d5274 FUN_1467d5274 body=372 status=ok
// SIG undefined FUN_1467d5274(void)

undefined8
FUN_1467d5274(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  code *local_98;
  longlong **local_90;
  int local_88;
  undefined1 local_84;
  undefined1 local_83;
  longlong *local_80;
  undefined4 **local_78;
  undefined4 *local_70;
  undefined4 local_68 [4];
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a9 = param_4;
  local_a8 = param_2;
  local_a0 = param_1;
  FUN_144a53f06();
  lVar3 = param_3[1];
  if ((longlong)(int)lVar3 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_3;
    lVar6 = 0;
    iVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + 0x18 + lVar6);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
      FUN_1447a1fc0(uVar4);
      lVar5 = (**(code **)(*plVar2 + 0x28))(plVar2);
      iVar8 = *(int *)(lVar5 + 8) + -1;
      if (*(int *)(lVar5 + 8) == 0) {
        iVar8 = 0;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      iVar7 = iVar7 + iVar8;
      lVar6 = lVar6 + 0x48;
    } while ((longlong)(int)lVar3 * 0x48 != lVar6);
  }
  local_68[0] = 4;
  FUN_140e82300();
  local_58 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  uVar4 = local_a0;
  local_70 = local_68;
  local_50 = DAT_14c844848;
  local_78 = &local_70;
  local_90 = &local_80;
  local_98 = FUN_142762744;
  local_84 = local_a9;
  local_83 = param_5;
  local_88 = iVar7;
  local_80 = param_3;
  FUN_14010c352(local_a0,local_a8);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d53ea FUN_1467d53ea body=111 status=ok
// SIG undefined FUN_1467d53ea(void)

void FUN_1467d53ea(longlong *param_1,short *param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (short *)0x0) {
    param_3 = 0;
  }
  else if (*param_2 == 0) {
    param_3 = 0;
  }
  FUN_14006620a(local_28,param_2,param_3);
  (**(code **)(*param_1 + 8))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d545a FUN_1467d545a body=159 status=ok
// SIG undefined FUN_1467d545a(void)

void FUN_1467d545a(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d54fa FUN_1467d54fa body=188 status=ok
// SIG undefined FUN_1467d54fa(void)

void FUN_1467d54fa(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  local_38 = (void *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_30;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 * 2);
  }
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d55b8 FUN_1467d55b8 body=68 status=ok
// SIG undefined FUN_1467d55b8(void)

void FUN_1467d55b8(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  (**(code **)(*param_1 + 0x28))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d55fe FUN_1467d55fe body=83 status=ok
// SIG undefined FUN_1467d55fe(void)

void FUN_1467d55fe(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_10 = 0;
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d5652 FUN_1467d5652 body=116 status=ok
// SIG undefined FUN_1467d5652(void)

void FUN_1467d5652(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  local_28 = *puVar2;
  local_20 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d56c8 FUN_1467d56c8 body=57 status=ok
// SIG undefined FUN_1467d56c8(void)

undefined8 * FUN_1467d56c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e17cb0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d5702 FUN_1467d5702 body=83 status=ok
// SIG undefined FUN_1467d5702(void)

undefined8 * FUN_1467d5702(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1467d5756 FUN_1467d5756 body=83 status=ok
// SIG undefined FUN_1467d5756(void)

undefined8 * FUN_1467d5756(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1467d57aa FUN_1467d57aa body=99 status=ok
// SIG undefined FUN_1467d57aa(void)

undefined8 FUN_1467d57aa(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"Boolean");
  FUN_1467cadbe(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d580e FUN_1467d580e body=111 status=ok
// SIG undefined FUN_1467d580e(void)

undefined8 * FUN_1467d580e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Array");
  FUN_1467cadbe(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d587e FUN_1467d587e body=111 status=ok
// SIG undefined FUN_1467d587e(void)

undefined8 * FUN_1467d587e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Object");
  FUN_1467cadbe(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d58f4 FUN_1467d58f4 body=32 status=ok
// SIG undefined FUN_1467d58f4(void)

undefined8 FUN_1467d58f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"String");
  return param_2;
}



// FUNCTION 1467d5914 FUN_1467d5914 body=29 status=ok
// SIG undefined FUN_1467d5914(void)

undefined8 FUN_1467d5914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d5932 FUN_1467d5932 body=47 status=ok
// SIG undefined FUN_1467d5932(void)

undefined8 FUN_1467d5932(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (*(char *)(param_1 + 8) != '\0') {
    pwVar1 = L"true";
  }
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 1467d5962 FUN_1467d5962 body=111 status=ok
// SIG undefined FUN_1467d5962(void)

undefined8 * FUN_1467d5962(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"String");
  FUN_1467cadbe(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d59dc FUN_1467d59dc body=32 status=ok
// SIG undefined FUN_1467d59dc(void)

undefined8 FUN_1467d59dc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Boolean");
  return param_2;
}



// FUNCTION 1467d59fc FUN_1467d59fc body=69 status=ok
// SIG undefined FUN_1467d59fc(void)

undefined8 * FUN_1467d59fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e17d70;
  FUN_1467d65da(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d5a42 FUN_1467d5a42 body=75 status=ok
// SIG undefined FUN_1467d5a42(void)

undefined8 * FUN_1467d5a42(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1467d6624(param_2,iVar1);
    FUN_1467d667c(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1467d5a94 FUN_1467d5a94 body=32 status=ok
// SIG undefined FUN_1467d5a94(void)

undefined8 FUN_1467d5a94(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Array");
  return param_2;
}



// FUNCTION 1467d5ab4 FUN_1467d5ab4 body=83 status=ok
// SIG undefined FUN_1467d5ab4(void)

undefined8 * FUN_1467d5ab4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149e17dd0;
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



// FUNCTION 1467d5b2a FUN_1467d5b2a body=32 status=ok
// SIG undefined FUN_1467d5b2a(void)

undefined8 FUN_1467d5b2a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Object");
  return param_2;
}



// FUNCTION 1467d5b4a FUN_1467d5b4a body=103 status=ok
// SIG undefined FUN_1467d5b4a(void)

undefined8 * FUN_1467d5b4a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149e18640;
  lVar4 = 0x70;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d5bb2 FUN_1467d5bb2 body=38 status=ok
// SIG undefined FUN_1467d5bb2(void)

undefined8 FUN_1467d5bb2(undefined8 param_1,int param_2)

{
  FUN_1467df7ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d5bd8 FUN_1467d5bd8 body=71 status=ok
// SIG undefined FUN_1467d5bd8(void)

undefined8 * FUN_1467d5bd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e186d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d5c20 FUN_1467d5c20 body=360 status=ok
// SIG undefined FUN_1467d5c20(void)

undefined8 FUN_1467d5c20(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 1);
    iVar10 = uVar4 - iVar3;
    iVar9 = iVar10;
    if ((int)param_1[6] == -1) {
      uVar12 = 0;
    }
    else {
      lVar6 = *param_1;
      uVar12 = 0;
      iVar13 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar13 * 0x18);
        if (iVar13 < iVar10) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar13 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar8 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar11 = uVar14;
          do {
            puVar15 = puVar8;
            uVar14 = uVar11 - 1;
            uVar16 = uVar11 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar8 = puVar15 + -3;
            uVar11 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar12 = puVar15[-3];
          uVar7 = puVar15[-2];
          uVar11 = 1 << ((byte)iVar13 & 0x1f);
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar12;
          puVar1[1] = uVar7;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar18 = iVar13;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | uVar11;
          uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
        }
        iVar13 = iVar5;
      } while (iVar5 != -1);
      iVar13 = (int)param_1[1] - uVar4;
      if (iVar13 != 0) {
        _Dst = (void *)((longlong)iVar10 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar13 * 0x18);
        iVar9 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
    FUN_144a6134a(param_1 + 2,iVar10,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
    }
  }
  return uVar12;
}



// FUNCTION 1467d5d88 FUN_1467d5d88 body=100 status=ok
// SIG undefined FUN_1467d5d88(void)

undefined8 * FUN_1467d5d88(undefined8 *param_1)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x76) = 1;
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0x100;
  param_1[0x12] = 0x100000000;
  param_1[0x13] = 0x144;
  *(undefined4 *)(param_1 + 0x14) = 3;
  builtin_wcsncpy((wchar_t *)(param_1 + 0xf),L"0123",4);
  builtin_wcsncpy((wchar_t *)(param_1 + 0x10),L"4567",4);
  *(undefined4 *)(param_1 + 0x11) = 0x390038;
  return param_1;
}



// FUNCTION 1467d5dec FUN_1467d5dec body=138 status=ok
// SIG undefined FUN_1467d5dec(void)

void FUN_1467d5dec(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467d5e76 FUN_1467d5e76 body=373 status=ok
// SIG undefined FUN_1467d5e76(void)

void FUN_1467d5e76(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1408be27e(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      puVar5 = (undefined8 *)((longlong)iStack_64 * 0x20 + *local_80);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_2,iVar2);
      }
      lVar3 = *param_2;
      lVar4 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar4);
      *(undefined8 *)(lVar3 + lVar4) = 0;
      iVar2 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(lVar3 + 8 + lVar4) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467d5fec FUN_1467d5fec body=142 status=ok
// SIG undefined FUN_1467d5fec(void)

longlong FUN_1467d5fec(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_144a7df4c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_1467d6025;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_1467d607c(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_1467d6025:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d607c FUN_1467d607c body=353 status=ok
// SIG undefined FUN_1467d607c(void)

undefined4 *
FUN_1467d607c(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409bc900(param_1,local_50);
  puVar1 = (undefined8 *)*param_4;
  *local_48 = 0;
  iVar5 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_48 + 1) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)local_48 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_48,iVar5,0);
    memcpy((void *)*local_48,_Src,(longlong)iVar5 * 2);
  }
  *(undefined4 *)(local_48 + 2) = 0;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_58 = param_5;
  cVar2 = FUN_1409bc7bc(param_1,param_3,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_48 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1409bd292(param_1);
    }
  }
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d61de FUN_1467d61de body=259 status=ok
// SIG undefined FUN_1467d61de(void)

undefined4 FUN_1467d61de(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar2,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_1467d6258:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x20);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1467d62c9;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1467d62c9;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1467d62cf;
      }
      if (iVar1 + iVar2 == 1) goto LAB_1467d62cf;
      goto LAB_1467d62b9;
    }
  }
  return 0;
LAB_1467d62c9:
  if (uVar7 == uVar6) {
LAB_1467d62cf:
    FUN_1467d62e2(param_1);
    return 1;
  }
LAB_1467d62b9:
  iVar1 = (int)plVar3[3];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_1467d6258;
}



// FUNCTION 1467d62e2 FUN_1467d62e2 body=96 status=ok
// SIG undefined FUN_1467d62e2(void)

void FUN_1467d62e2(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1467d6342(param_1,param_2,1);
  return;
}



// FUNCTION 1467d6342 FUN_1467d6342 body=79 status=ok
// SIG undefined FUN_1467d6342(void)

void FUN_1467d6342(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_14575ddfc(param_1,param_2,param_3);
  return;
}



// FUNCTION 1467d6392 FUN_1467d6392 body=52 status=ok
// SIG undefined FUN_1467d6392(void)

void FUN_1467d6392(longlong *param_1)

{
  FUN_1467d63c6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467d63c6 FUN_1467d63c6 body=89 status=ok
// SIG undefined FUN_1467d63c6(void)

void FUN_1467d63c6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1467d6420 FUN_1467d6420 body=159 status=ok
// SIG undefined FUN_1467d6420(void)

undefined8 *
FUN_1467d6420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_149e18dd0;
  uVar1 = *param_4;
  local_20 = *param_3;
  *param_3 = 0;
  local_18 = *(undefined4 *)(param_3 + 1);
  local_14 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1467cd410(param_1 + 2,&local_30,&local_20,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d64c0 FUN_1467d64c0 body=56 status=ok
// SIG undefined FUN_1467d64c0(void)

void FUN_1467d64c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467d64ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1467d64f8 FUN_1467d64f8 body=29 status=ok
// SIG undefined FUN_1467d64f8(void)

undefined8 FUN_1467d64f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d6516 FUN_1467d6516 body=52 status=ok
// SIG undefined FUN_1467d6516(void)

void FUN_1467d6516(longlong *param_1)

{
  FUN_1467d654a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467d654a FUN_1467d654a body=89 status=ok
// SIG undefined FUN_1467d654a(void)

void FUN_1467d654a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1467d65a3 FUN_1467d65a3 body=38 status=ok
// SIG undefined FUN_1467d65a3(void)

void FUN_1467d65a3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_142761634(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1467d65ca FUN_1467d65ca body=16 status=ok
// SIG undefined FUN_1467d65ca(void)

void FUN_1467d65ca(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467d65d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1467d65da FUN_1467d65da body=73 status=ok
// SIG undefined FUN_1467d65da(void)

void FUN_1467d65da(longlong param_1,int param_2)

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



// FUNCTION 1467d6624 FUN_1467d6624 body=88 status=ok
// SIG undefined FUN_1467d6624(void)

void FUN_1467d6624(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1467d667c FUN_1467d667c body=40 status=ok
// SIG undefined FUN_1467d667c(void)

void FUN_1467d667c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1467d66a4 FUN_1467d66a4 body=236 status=ok
// SIG undefined FUN_1467d66a4(void)

void FUN_1467d66a4(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1467d6792(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 200 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined2 *)(puVar2 + 4) = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      *(undefined4 *)((longlong)puVar2 + 0x54) = 0x80;
      *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x17] = 0;
      puVar2[0x18] = 0;
      *(undefined4 *)((longlong)puVar2 + 0xa4) = 0x80;
      *(undefined4 *)(puVar2 + 0x15) = 0xffffffff;
      puVar2 = puVar2 + 0x19;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1467d682a(param_1,param_2,iVar1 - param_2);
    FUN_1467d688c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467d6792 FUN_1467d6792 body=150 status=ok
// SIG undefined FUN_1467d6792(void)

void FUN_1467d6792(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467d682a FUN_1467d682a body=98 status=ok
// SIG undefined FUN_1467d682a(void)

void FUN_1467d682a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 200 + *param_1);
  FUN_1467d68ca(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 200 + (longlong)_Dst),(longlong)iVar2 * 200);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1467d688c FUN_1467d688c body=62 status=ok
// SIG undefined FUN_1467d688c(void)

void FUN_1467d688c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467d6b4e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,200,8);
  }
  return;
}



// FUNCTION 1467d68ca FUN_1467d68ca body=41 status=ok
// SIG undefined FUN_1467d68ca(void)

void FUN_1467d68ca(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1467d68f4(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 1467d68f4 FUN_1467d68f4 body=122 status=ok
// SIG undefined FUN_1467d68f4(void)

void FUN_1467d68f4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1467d696e(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1467d696e(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467d696e FUN_1467d696e body=54 status=ok
// SIG undefined FUN_1467d696e(void)

void FUN_1467d696e(longlong *param_1)

{
  FUN_1467d69a4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467d69a4 FUN_1467d69a4 body=350 status=ok
// SIG undefined FUN_1467d69a4(void)

void FUN_1467d69a4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_1467d6b04((longlong)iStack_54 * 0x28 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467d6b04 FUN_1467d6b04 body=74 status=ok
// SIG undefined FUN_1467d6b04(void)

void FUN_1467d6b04(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467d6b4e FUN_1467d6b4e body=114 status=ok
// SIG undefined FUN_1467d6b4e(void)

ulonglong FUN_1467d6b4e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 200) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1467d6b87;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 200,8);
      param_2 = param_2 / 200;
    }
  }
LAB_1467d6b87:
  return param_2 & 0xffffffff;
}



// FUNCTION 1467d6bc0 FUN_1467d6bc0 body=24 status=ok
// SIG undefined FUN_1467d6bc0(void)

void FUN_1467d6bc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467d6bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1467d6bd8 FUN_1467d6bd8 body=29 status=ok
// SIG undefined FUN_1467d6bd8(void)

undefined8 FUN_1467d6bd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d6bf5 FUN_1467d6bf5 body=279 status=ok
// SIG undefined FUN_1467d6bf5(void)

void FUN_1467d6bf5(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar3;
joined_r0x0001467d6c16:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        lVar9 = (longlong)(iVar3 * 2) + 2;
        iVar8 = (int)lVar9;
        if ((iVar8 < (int)param_2) && ((byte)param_1[iVar6] <= (byte)param_1[lVar9])) {
          iVar6 = iVar8;
        }
        bVar1 = param_1[iVar3];
        if (bVar1 < (byte)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = bVar1;
          iVar3 = iVar6;
          goto joined_r0x0001467d6c16;
        }
      }
      bVar10 = iVar7 != 0;
      iVar3 = iVar7 + -1;
      iVar7 = iVar3;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar7 = 0;
          do {
            lVar9 = (longlong)iVar3 + 2;
            iVar8 = iVar6;
            if ((lVar9 < (longlong)uVar5) && ((byte)param_1[iVar6] <= (byte)param_1[lVar9])) {
              iVar8 = (int)lVar9;
            }
            bVar1 = param_1[iVar7];
            if ((byte)param_1[iVar8] <= bVar1) break;
            param_1[iVar7] = param_1[iVar8];
            param_1[iVar8] = bVar1;
            iVar3 = iVar8 * 2;
            iVar6 = iVar8 * 2 + 1;
            iVar7 = iVar8;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1467d6d0c FUN_1467d6d0c body=203 status=ok
// SIG undefined FUN_1467d6d0c(void)

int FUN_1467d6d0c(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1467d6d56:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1467d6dcc;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1467d6dcc;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1467d6dbd;
    }
  }
  return -1;
LAB_1467d6dcc:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1467d6dbd:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1467d6d56;
}



// FUNCTION 1467d6dd8 FUN_1467d6dd8 body=319 status=ok
// SIG undefined FUN_1467d6dd8(void)

undefined4 * FUN_1467d6dd8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467d6f18(param_1,local_48);
  FUN_1467d706c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1467d6ffe(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467d719a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d6f18 FUN_1467d6f18 body=230 status=ok
// SIG undefined FUN_1467d6f18(void)

int * FUN_1467d6f18(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1467d6ffe FUN_1467d6ffe body=109 status=ok
// SIG undefined FUN_1467d6ffe(void)

undefined8 FUN_1467d6ffe(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar9 = FUN_1467d6d0c(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_1467d7150(puVar1);
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
    FUN_1467d70de(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1467d706c FUN_1467d706c body=113 status=ok
// SIG undefined FUN_1467d706c(void)

undefined8 * FUN_1467d706c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
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
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1467d70de FUN_1467d70de body=114 status=ok
// SIG undefined FUN_1467d70de(void)

void FUN_1467d70de(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 1467d7150 FUN_1467d7150 body=74 status=ok
// SIG undefined FUN_1467d7150(void)

void FUN_1467d7150(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467d719a FUN_1467d719a body=476 status=ok
// SIG undefined FUN_1467d719a(void)

void FUN_1467d719a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d7378 FUN_1467d7378 body=322 status=ok
// SIG undefined FUN_1467d7378(void)

void FUN_1467d7378(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1467d74bc FUN_1467d74bc body=371 status=ok
// SIG undefined FUN_1467d74bc(void)

undefined8 FUN_1467d74bc(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  void *_Dst;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 == 0) {
    uVar14 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 1);
    iVar12 = uVar4 - iVar3;
    iVar11 = iVar12;
    if ((int)param_1[6] == -1) {
      uVar14 = 0;
    }
    else {
      lVar6 = *param_1;
      uVar14 = 0;
      iVar15 = (int)param_1[6];
      uVar16 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar15 * 0x28);
        if (iVar15 < iVar12) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar15 * 0x28);
          plVar19 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar19 = param_1 + 2;
          }
          puVar10 = (undefined8 *)(lVar6 + 0x28 + (longlong)(int)(uVar16 - 1) * 0x28);
          uVar13 = uVar16;
          do {
            puVar17 = puVar10;
            uVar16 = uVar13 - 1;
            uVar18 = uVar13 + 0x1e;
            if (-1 < (int)uVar16) {
              uVar18 = uVar16;
            }
            puVar10 = puVar17 + -5;
            uVar13 = uVar16;
          } while ((*(uint *)((longlong)plVar19 + (longlong)((int)uVar18 >> 5) * 4) >>
                    (uVar16 & 0x1f) & 1) == 0);
          uVar14 = puVar17[-5];
          uVar7 = puVar17[-4];
          uVar8 = puVar17[-3];
          uVar9 = puVar17[-2];
          puVar1[4] = puVar17[-1];
          uVar13 = 1 << ((byte)iVar15 & 0x1f);
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          *puVar1 = uVar14;
          puVar1[1] = uVar7;
          plVar19 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar19 = param_1 + 2;
          }
          iVar20 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar20 = iVar15;
          }
          puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar20 >> 5) * 4);
          *puVar2 = *puVar2 | uVar13;
          uVar14 = CONCAT71((uint7)(uint3)(uVar13 >> 8),1);
        }
        iVar15 = iVar5;
      } while (iVar5 != -1);
      iVar15 = (int)param_1[1] - uVar4;
      if (iVar15 != 0) {
        _Dst = (void *)((longlong)iVar12 * 0x28 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x28),(longlong)iVar15 * 0x28);
        iVar11 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar11;
    FUN_144a6134a(param_1 + 2,iVar12,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140549ad6(param_1);
    }
  }
  return uVar14;
}



// FUNCTION 1467d7630 FUN_1467d7630 body=311 status=ok
// SIG undefined FUN_1467d7630(void)

undefined8 * FUN_1467d7630(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  return param_1;
}



// FUNCTION 1467d7768 FUN_1467d7768 body=114 status=ok
// SIG undefined FUN_1467d7768(void)

void FUN_1467d7768(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 1467d77da FUN_1467d77da body=228 status=ok
// SIG undefined FUN_1467d77da(void)

int FUN_1467d77da(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 != -1) {
      lVar4 = *param_3;
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      lVar8 = (longlong)iVar3;
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x18);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      if (lVar5 == lVar4) {
        return iVar3;
      }
      iVar3 = *(int *)(*param_1 + 0x10 + lVar8 * 0x18);
    }
  }
  return -1;
}



// FUNCTION 1467d78be FUN_1467d78be body=113 status=ok
// SIG undefined FUN_1467d78be(void)

void FUN_1467d78be(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1467d7930 FUN_1467d7930 body=65 status=ok
// SIG undefined FUN_1467d7930(void)

void FUN_1467d7930(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
    iVar2 = *(int *)(param_2 + 1) + -1;
  }
  FUN_140854f42(param_1,puVar1,0,iVar2,param_3,param_4);
  return;
}



// FUNCTION 1467d7972 FUN_1467d7972 body=110 status=ok
// SIG undefined FUN_1467d7972(void)

void FUN_1467d7972(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar3 = 0;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
    iVar3 = *(int *)(puVar2 + 1) + -1;
  }
  FUN_140854f42(param_1,puVar4,0,iVar3,param_3,param_4);
  return;
}



// FUNCTION 1467d79e0 FUN_1467d79e0 body=60 status=ok
// SIG undefined FUN_1467d79e0(void)

undefined8 FUN_1467d79e0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    FUN_140854fd0();
    uVar1 = FUN_14275f901(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1467d7a1c FUN_1467d7a1c body=74 status=ok
// SIG undefined FUN_1467d7a1c(void)

undefined8 FUN_1467d7a1c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_2 + 1) < 2) {
    return 0;
  }
  FUN_140854fd0(param_1,*param_2,0,*(uint *)(param_2 + 1) - 1,param_1 + 0x10,1);
  uVar1 = FUN_14275f901(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  return uVar1;
}



// FUNCTION 1467d7a66 FUN_1467d7a66 body=55 status=ok
// SIG undefined FUN_1467d7a66(void)

void FUN_1467d7a66(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  FUN_1467d7a1c(param_1,uVar1);
  return;
}



// FUNCTION 1467d7a9e FUN_1467d7a9e body=53 status=ok
// SIG undefined FUN_1467d7a9e(void)

undefined8 FUN_1467d7a9e(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    FUN_140854fd0();
    uVar1 = FUN_140f7db11(param_1 + 0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1467d7ad4 FUN_1467d7ad4 body=67 status=ok
// SIG undefined FUN_1467d7ad4(void)

undefined8 FUN_1467d7ad4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_2 + 1) < 2) {
    return 0;
  }
  FUN_140854fd0(param_1,*param_2,0,*(uint *)(param_2 + 1) - 1,param_1 + 0x10,1);
  uVar1 = FUN_140f7db11(param_1 + 0x10);
  return uVar1;
}



// FUNCTION 1467d7b18 FUN_1467d7b18 body=55 status=ok
// SIG undefined FUN_1467d7b18(void)

void FUN_1467d7b18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x50))();
  FUN_1447a1fc0(uVar1);
  uVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  FUN_1467d7ad4(param_1,uVar1);
  return;
}



// FUNCTION 1467d7b50 FUN_1467d7b50 body=48 status=ok
// SIG undefined FUN_1467d7b50(void)

void FUN_1467d7b50(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1467d7b80 FUN_1467d7b80 body=128 status=ok
// SIG undefined FUN_1467d7b80(void)

void FUN_1467d7b80(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14626a426(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1467d7c00 FUN_1467d7c00 body=48 status=ok
// SIG undefined FUN_1467d7c00(void)

void FUN_1467d7c00(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1467d7c30 FUN_1467d7c30 body=9 status=ok
// SIG undefined FUN_1467d7c30(void)

void FUN_1467d7c30(longlong param_1)

{
  FUN_1467d7c58(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1467d7c3a FUN_1467d7c3a body=29 status=ok
// SIG undefined FUN_1467d7c3a(void)

undefined8 FUN_1467d7c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d7c58 FUN_1467d7c58 body=61 status=ok
// SIG undefined FUN_1467d7c58(void)

void FUN_1467d7c58(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1467d696e(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1467d7c96 FUN_1467d7c96 body=319 status=ok
// SIG undefined FUN_1467d7c96(void)

undefined4 * FUN_1467d7c96(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467d7dd6(param_1,local_48);
  FUN_1467d7f2a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1467d7ebc(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467d80d6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d7dd6 FUN_1467d7dd6 body=230 status=ok
// SIG undefined FUN_1467d7dd6(void)

int * FUN_1467d7dd6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1467d7ebc FUN_1467d7ebc body=109 status=ok
// SIG undefined FUN_1467d7ebc(void)

undefined8 FUN_1467d7ebc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
     (iVar9 = FUN_1467d7f98(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_1467d6b04(puVar1);
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
    FUN_1467d8064(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1467d7f2a FUN_1467d7f2a body=110 status=ok
// SIG undefined FUN_1467d7f2a(void)

undefined8 * FUN_1467d7f2a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
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
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



// FUNCTION 1467d7f98 FUN_1467d7f98 body=203 status=ok
// SIG undefined FUN_1467d7f98(void)

int FUN_1467d7f98(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1467d7fe2:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1467d8058;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1467d8058;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1467d8049;
    }
  }
  return -1;
LAB_1467d8058:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1467d8049:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1467d7fe2;
}



// FUNCTION 1467d8064 FUN_1467d8064 body=114 status=ok
// SIG undefined FUN_1467d8064(void)

void FUN_1467d8064(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 1467d80d6 FUN_1467d80d6 body=476 status=ok
// SIG undefined FUN_1467d80d6(void)

void FUN_1467d80d6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d82b4 FUN_1467d82b4 body=319 status=ok
// SIG undefined FUN_1467d82b4(void)

undefined4 * FUN_1467d82b4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467d7dd6(param_1,local_48);
  FUN_1467d83f4(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1467d7ebc(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1467d80d6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d83f4 FUN_1467d83f4 body=113 status=ok
// SIG undefined FUN_1467d83f4(void)

undefined8 * FUN_1467d83f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
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
  param_1[2] = *param_3;
  lVar2 = param_3[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1467d847e FUN_1467d847e body=29 status=ok
// SIG undefined FUN_1467d847e(void)

undefined8 FUN_1467d847e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d84b4 FUN_1467d84b4 body=29 status=ok
// SIG undefined FUN_1467d84b4(void)

undefined8 FUN_1467d84b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d84ea FUN_1467d84ea body=29 status=ok
// SIG undefined FUN_1467d84ea(void)

undefined8 FUN_1467d84ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d8508 FUN_1467d8508 body=24 status=ok
// SIG undefined FUN_1467d8508(void)

void FUN_1467d8508(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467d851c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1467d8520 FUN_1467d8520 body=29 status=ok
// SIG undefined FUN_1467d8520(void)

undefined8 FUN_1467d8520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467d853d FUN_1467d853d body=943 status=ok
// SIG undefined FUN_1467d853d(void)

void FUN_1467d853d(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  uint uVar20;
  float fVar21;
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_360 = param_4;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar10 = &local_358;
    do {
      puVar9 = (undefined8 *)*plVar10;
      puVar17 = (undefined8 *)plVar10[1];
      iVar16 = (int)plVar10[2];
      iVar13 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar9) >> 4);
      local_368 = plVar10;
      if (iVar16 != 0) {
LAB_1467d85f3:
        if (8 < (int)(iVar13 + 1U)) {
          uVar11 = (ulonglong)(iVar13 + 1U >> 1);
          uVar3 = puVar9[uVar11 * 2];
          uVar4 = (puVar9 + uVar11 * 2)[1];
          uVar5 = puVar9[1];
          puVar9[uVar11 * 2] = *puVar9;
          (puVar9 + uVar11 * 2)[1] = uVar5;
          *puVar9 = uVar3;
          puVar9[1] = uVar4;
          puVar12 = puVar17 + 2;
          puVar8 = puVar9;
LAB_1467d862b:
          do {
            puVar7 = puVar8;
            puVar8 = puVar7 + 2;
            if (puVar17 < puVar8) break;
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar7 + 3) != 0) {
              puVar18 = (undefined2 *)puVar7[2];
            }
            puVar19 = &DAT_149dfb77a;
            if (*(int *)(puVar9 + 1) != 0) {
              puVar19 = (undefined2 *)*puVar9;
            }
            lVar14 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar19 + lVar14);
              uVar20 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar18 + lVar14);
              uVar15 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467d8668;
                }
                iVar13 = uVar20 - uVar15;
                goto LAB_1467d8692;
              }
              if (uVar1 == 0) break;
LAB_1467d8668:
              lVar14 = lVar14 + 2;
            }
            iVar13 = 0;
LAB_1467d8692:
          } while (-1 < iVar13);
LAB_1467d8697:
          puVar6 = puVar12;
          puVar12 = puVar6 + -2;
          if (puVar9 < puVar12) {
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar9 + 1) != 0) {
              puVar18 = (undefined2 *)*puVar9;
            }
            puVar19 = &DAT_149dfb77a;
            if (*(int *)(puVar6 + -1) != 0) {
              puVar19 = (undefined2 *)puVar6[-2];
            }
            lVar14 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar19 + lVar14);
              uVar2 = *(ushort *)((longlong)puVar18 + lVar14);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_1467d8700;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar13 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_1467d8702;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_1467d8702;
                }
              }
              lVar14 = lVar14 + 2;
            } while( true );
          }
          goto LAB_1467d8706;
        }
        for (; puVar12 = puVar9, puVar8 = puVar9, puVar9 < puVar17; puVar17 = puVar17 + -2) {
joined_r0x0001467d87fd:
          puVar7 = puVar8 + 2;
          if (puVar7 <= puVar17) {
            puVar18 = &DAT_149dfb77a;
            if (*(int *)(puVar8 + 3) != 0) {
              puVar18 = (undefined2 *)puVar8[2];
            }
            puVar19 = &DAT_149dfb77a;
            if (*(int *)(puVar12 + 1) != 0) {
              puVar19 = (undefined2 *)*puVar12;
            }
            lVar14 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar19 + lVar14);
              uVar20 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar18 + lVar14);
              uVar15 = (uint)uVar2;
              puVar8 = puVar7;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x0001467d87fd;
LAB_1467d883d:
              lVar14 = lVar14 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467d883d;
            }
            if ((int)(uVar20 - uVar15) < 0) {
              puVar12 = puVar7;
            }
            goto joined_r0x0001467d87fd;
          }
          local_58 = *puVar12;
          uStack_50 = puVar12[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          uVar3 = puVar17[1];
          *puVar12 = *puVar17;
          puVar12[1] = uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar17 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar17 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar17 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar17 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_1467d88a0;
      }
LAB_1467d87db:
      FUN_1467d88ed(puVar9);
LAB_1467d88a0:
      plVar10 = local_368 + -3;
    } while (&local_358 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1467d8700:
  iVar13 = 0;
LAB_1467d8702:
  if (iVar13 < 0) goto LAB_1467d8706;
  goto LAB_1467d8697;
LAB_1467d8706:
  if (puVar8 <= puVar12) {
    uVar3 = *puVar8;
    uVar4 = puVar7[3];
    uVar5 = puVar6[-1];
    *puVar8 = *puVar12;
    puVar7[3] = uVar5;
    *puVar12 = uVar3;
    puVar6[-1] = uVar4;
    goto LAB_1467d862b;
  }
  local_58 = *puVar9;
  uStack_50 = puVar9[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar3 = puVar6[-1];
  *puVar9 = *puVar12;
  puVar9[1] = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar12 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar6 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar6 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar6 + -4) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar6 = puVar6 + -4;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar6 - (longlong)puVar9 < (longlong)puVar17 - (longlong)puVar8) {
    if (puVar8 < puVar17) {
      *local_368 = (longlong)puVar8;
      local_368[1] = (longlong)puVar17;
      *(int *)(local_368 + 2) = iVar16;
      local_368 = local_368 + 3;
    }
    if (puVar12 <= puVar9 + 2) goto LAB_1467d88a0;
  }
  else {
    if (puVar9 + 2 < puVar12) {
      *local_368 = (longlong)puVar9;
      local_368[1] = (longlong)puVar6;
      *(int *)(local_368 + 2) = iVar16;
      local_368 = local_368 + 3;
    }
    puVar6 = puVar17;
    puVar9 = puVar8;
    if (puVar17 <= puVar8) goto LAB_1467d88a0;
  }
  iVar13 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar9) >> 4);
  puVar17 = puVar6;
  if (iVar16 == 0) goto LAB_1467d87db;
  goto LAB_1467d85f3;
}



// FUNCTION 1467d88ed FUN_1467d88ed body=870 status=ok
// SIG undefined FUN_1467d88ed(void)

void FUN_1467d88ed(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar13 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      iVar10 = iVar13 * 2 + 1;
      iVar15 = iVar13;
      if (iVar10 < (int)param_2) {
LAB_1467d8948:
        iVar17 = iVar15 * 2 + 2;
        iVar16 = iVar10;
        if (iVar17 < (int)param_2) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar10 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar10 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar17 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[(longlong)iVar17 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar8 = (uint)uVar3;
            iVar16 = iVar17;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_1467d89c7;
LAB_1467d8997:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1467d8997;
          }
          if ((int)(uVar9 - uVar8) < 0) {
            iVar16 = iVar10;
          }
        }
LAB_1467d89c7:
        lVar20 = (longlong)iVar16;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar18 = (longlong)iVar15;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar18 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar18 * 2];
        }
        puVar19 = param_1 + lVar18 * 2;
        puVar11 = param_1 + lVar20 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar8 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_1467d8a34;
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_1467d8a34;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
LAB_1467d8a6b:
      bVar21 = iVar13 != 0;
      iVar13 = iVar13 + -1;
    } while (bVar21);
    if (1 < (int)param_2) {
      uVar14 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar14 * 2)[1];
      *param_1 = param_1[uVar14 * 2];
      param_1[1] = uVar6;
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar14 * 2;
      *(undefined4 *)puVar11 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
LAB_1467d8ae4:
        iVar13 = 1;
        iVar15 = 0;
        iVar10 = 0;
LAB_1467d8aef:
        iVar15 = iVar15 + 2;
        lVar20 = (longlong)iVar15;
        iVar16 = iVar13;
        if (lVar20 < (longlong)uVar14) {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(param_1 + (longlong)iVar13 * 2 + 1) != 0) {
            puVar12 = (undefined2 *)param_1[(longlong)iVar13 * 2];
          }
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
            puVar7 = (undefined2 *)param_1[lVar20 * 2];
          }
          lVar20 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
            uVar8 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
            uVar9 = (uint)uVar3;
            iVar16 = iVar15;
            if (uVar2 != uVar3) break;
            if (uVar2 == 0) goto LAB_1467d8b6a;
LAB_1467d8b3b:
            lVar20 = lVar20 + 2;
          }
          if ((uVar3 | uVar2) < 0x80) {
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1467d8b3b;
          }
          if ((int)(uVar8 - uVar9) < 0) {
            iVar16 = iVar13;
          }
        }
LAB_1467d8b6a:
        lVar20 = (longlong)iVar16;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar20 * 2 + 1) != 0) {
          puVar12 = (undefined2 *)param_1[lVar20 * 2];
        }
        lVar18 = (longlong)iVar10;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(param_1 + lVar18 * 2 + 1) != 0) {
          puVar7 = (undefined2 *)param_1[lVar18 * 2];
        }
        puVar11 = param_1 + lVar18 * 2;
        puVar19 = param_1 + lVar20 * 2;
        lVar20 = 0;
        do {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar20);
          uVar8 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar12 + lVar20);
          uVar9 = (uint)uVar3;
          if (uVar2 == uVar3) {
            if (uVar2 == 0) goto LAB_1467d8c10;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) goto LAB_1467d8bd5;
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_1467d8bd5;
          }
          lVar20 = lVar20 + 2;
        } while( true );
      }
    }
  }
LAB_1467d8ab7:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1467d8a34:
  if (-1 < (int)(uVar9 - uVar8)) goto LAB_1467d8a6b;
  uVar4 = *puVar19;
  uVar5 = puVar19[1];
  uVar6 = puVar11[1];
  *puVar19 = *puVar11;
  puVar19[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  iVar10 = iVar16 * 2 + 1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  iVar15 = iVar16;
  if ((int)param_2 <= iVar10) goto LAB_1467d8a6b;
  goto LAB_1467d8948;
LAB_1467d8bd5:
  if (-1 < (int)(uVar8 - uVar9)) goto LAB_1467d8c10;
  uVar4 = *puVar11;
  uVar5 = puVar11[1];
  uVar6 = puVar19[1];
  *puVar11 = *puVar19;
  puVar11[1] = uVar6;
  *puVar19 = uVar4;
  puVar19[1] = uVar5;
  iVar15 = iVar16 * 2;
  iVar13 = iVar16 * 2 + 1;
  iVar10 = iVar16;
  if ((longlong)uVar14 <= (longlong)iVar13) goto LAB_1467d8c10;
  goto LAB_1467d8aef;
LAB_1467d8c10:
  uVar1 = uVar14 - 1;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = (param_1 + uVar1 * 2)[1];
  *param_1 = param_1[uVar1 * 2];
  param_1[1] = uVar6;
  local_58._0_4_ = (undefined4)uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar5;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  puVar11 = param_1 + uVar1 * 2;
  *(undefined4 *)puVar11 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
  bVar21 = uVar14 < 3;
  uVar14 = uVar1;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (bVar21) goto LAB_1467d8ab7;
  goto LAB_1467d8ae4;
}



// FUNCTION 1467d8c54 FUN_1467d8c54 body=411 status=ok
// SIG undefined FUN_1467d8c54(void)

void FUN_1467d8c54(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28 + -0x24);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1467d8def FUN_1467d8def body=1206 status=ok
// SIG undefined FUN_1467d8def(void)

void FUN_1467d8def(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  char cVar16;
  float fVar17;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  int local_374;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar17 + fVar17);
    plVar10 = &local_358;
    do {
      plVar13 = (longlong *)*plVar10;
      plVar7 = (longlong *)plVar10[1];
      local_374 = (int)plVar10[2];
      iVar8 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar13) >> 4);
      plVar11 = plVar7;
      plVar15 = plVar13;
      local_380 = plVar10;
      if (local_374 != 0) {
LAB_1467d8e93:
        plVar10 = local_380;
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          lVar3 = plVar13[uVar9 * 2];
          lVar4 = (plVar13 + uVar9 * 2)[1];
          lVar6 = plVar13[1];
          plVar13[uVar9 * 2] = *plVar13;
          (plVar13 + uVar9 * 2)[1] = lVar6;
          local_58._0_4_ = (undefined4)lVar3;
          local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
          *(undefined4 *)plVar13 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar13 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_50._4_4_;
          plVar14 = plVar11 + 2;
          plVar12 = plVar13;
          local_370 = plVar11;
          local_368 = plVar15;
          local_360 = plVar7;
          local_58 = lVar3;
          uStack_50 = lVar4;
          do {
            plVar10 = local_370;
            plVar11 = plVar12 + 2;
            plVar7 = plVar12 + 2;
            do {
              plVar12 = plVar7;
              plVar15 = plVar11;
              if (plVar10 < plVar12) break;
              lVar3 = *plVar12;
              plVar11 = (longlong *)plVar12[1];
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              lVar4 = *plVar13;
              plVar7 = (longlong *)plVar13[1];
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
              }
              if (lVar4 == 0 && lVar3 == 0) {
                cVar16 = '\0';
              }
              else {
                cVar16 = lVar3 != 0;
                if ((lVar4 != 0) == (bool)cVar16) {
                  cVar16 = FUN_1467cb1ba();
                }
              }
              if (plVar7 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar7 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
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
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar7 = plVar11 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
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
              plVar11 = plVar15 + 2;
              plVar7 = plVar12 + 2;
            } while (cVar16 == '\0');
            plVar10 = plVar14 + -4;
            do {
              plVar11 = plVar14;
              plVar7 = plVar10;
              plVar14 = plVar11 + -2;
              if (plVar14 <= plVar13) break;
              lVar3 = *plVar13;
              plVar10 = (longlong *)plVar13[1];
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              lVar4 = *plVar14;
              plVar5 = (longlong *)plVar11[-1];
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                UNLOCK();
              }
              if (lVar4 == 0 && lVar3 == 0) {
                cVar16 = '\0';
              }
              else {
                cVar16 = lVar3 != 0;
                if ((lVar4 != 0) == (bool)cVar16) {
                  cVar16 = FUN_1467cb1ba();
                }
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
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar10 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
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
              plVar10 = plVar7 + -2;
            } while (cVar16 == '\0');
            if (plVar14 < plVar12) goto LAB_1467d907e;
            lVar3 = *plVar12;
            lVar4 = plVar12[1];
            lVar6 = plVar11[-1];
            *plVar12 = *plVar14;
            plVar12[1] = lVar6;
            local_58._0_4_ = (undefined4)lVar3;
            local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar4;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
            *(undefined4 *)plVar14 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar11 + -0xc) = local_58._4_4_;
            *(undefined4 *)(plVar11 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar11 + -4) = uStack_50._4_4_;
            local_58 = lVar3;
            uStack_50 = lVar4;
          } while( true );
        }
        for (; local_380 = plVar10, plVar15 = plVar13, plVar7 = plVar13, plVar13 < plVar11;
            plVar11 = plVar11 + -2) {
          while (plVar10 = plVar15, plVar7 = plVar7 + 2, plVar7 <= plVar11) {
            lVar3 = *plVar7;
            plVar15 = (longlong *)plVar7[1];
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
            }
            lVar4 = *plVar10;
            plVar14 = (longlong *)plVar10[1];
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            if (lVar4 == 0 && lVar3 == 0) {
              cVar16 = '\0';
            }
            else {
              cVar16 = lVar3 != 0;
              if ((lVar4 != 0) == (bool)cVar16) {
                cVar16 = FUN_1467cb1ba();
              }
            }
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar14 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
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
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar15 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
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
            plVar15 = plVar7;
            if (cVar16 == '\0') {
              plVar15 = plVar10;
            }
          }
          local_58 = *plVar10;
          uStack_50 = plVar10[1];
          lVar4 = local_58;
          lVar6 = uStack_50;
          lVar3 = plVar11[1];
          *plVar10 = *plVar11;
          plVar10[1] = lVar3;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)plVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_50._4_4_;
          plVar10 = local_380;
          local_58 = lVar4;
          uStack_50 = lVar6;
        }
        goto LAB_1467d9266;
      }
LAB_1467d9259:
      FUN_1467d92a6(plVar13);
      plVar10 = local_380;
LAB_1467d9266:
      plVar10 = plVar10 + -3;
    } while (&local_358 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1467d907e:
  local_58 = *plVar13;
  uStack_50 = plVar13[1];
  lVar4 = local_58;
  lVar6 = uStack_50;
  lVar3 = plVar11[-1];
  *plVar13 = *plVar14;
  plVar13[1] = lVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar14 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar11 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar11 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar11 + -4) = uStack_50._4_4_;
  local_374 = local_374 + -1;
  local_58 = lVar4;
  uStack_50 = lVar6;
  if ((longlong)plVar7 - (longlong)local_368 < (longlong)local_360 - (longlong)plVar15) {
    plVar10 = local_380;
    if (plVar12 < local_370) {
      *local_380 = (longlong)plVar12;
      local_380[1] = (longlong)local_370;
      *(int *)(local_380 + 2) = local_374;
      plVar10 = local_380 + 3;
    }
    plVar15 = plVar13;
    plVar11 = plVar11 + -4;
    if (plVar14 <= plVar13 + 2) goto LAB_1467d9266;
  }
  else {
    if (plVar13 + 2 < plVar14) {
      *local_380 = (longlong)plVar13;
      local_380[1] = (longlong)(plVar11 + -4);
      *(int *)(local_380 + 2) = local_374;
      local_380 = local_380 + 3;
    }
    plVar10 = local_380;
    plVar7 = local_370;
    plVar13 = plVar12;
    plVar11 = local_370;
    if (local_370 <= plVar12) goto LAB_1467d9266;
  }
  local_370 = plVar11;
  local_380 = plVar10;
  iVar8 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar15) >> 4);
  plVar11 = local_370;
  if (local_374 == 0) goto LAB_1467d9259;
  goto LAB_1467d8e93;
}



// FUNCTION 1467d92a6 FUN_1467d92a6 body=1130 status=ok
// SIG undefined FUN_1467d92a6(void)

void FUN_1467d92a6(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  char cVar17;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar9 = (int)param_2;
  if (iVar9 != 0) {
    uVar6 = (iVar9 - (iVar9 + -2 >> 0x1f)) + -2 >> 1;
    local_68 = param_2;
    do {
      uVar8 = (ulonglong)uVar6;
      uVar14 = uVar6 * 2 + 1;
      local_60 = uVar8;
      if ((int)uVar14 < (int)param_2) {
        do {
          uVar11 = uVar6 * 2 + 2;
          uVar6 = uVar14;
          if ((int)uVar11 < (int)param_2) {
            lVar3 = param_1[(longlong)(int)uVar14 * 2];
            plVar16 = (longlong *)param_1[(longlong)(int)uVar14 * 2 + 1];
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
            }
            lVar15 = param_1[(longlong)(int)uVar11 * 2];
            plVar4 = (longlong *)(param_1 + (longlong)(int)uVar11 * 2)[1];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            if (lVar15 == 0 && lVar3 == 0) {
              cVar17 = '\0';
            }
            else {
              cVar17 = lVar3 != 0;
              if ((lVar15 != 0) == (bool)cVar17) {
                cVar17 = FUN_1467cb1ba();
              }
            }
            if (plVar4 != (longlong *)0x0) {
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
            if (cVar17 == '\0') {
              uVar6 = uVar11;
            }
          }
          lVar15 = (longlong)(int)uVar6;
          lVar3 = param_1[lVar15 * 2];
          plVar16 = (longlong *)param_1[lVar15 * 2 + 1];
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          plVar10 = param_1 + (longlong)(int)uVar8 * 2;
          lVar5 = *plVar10;
          plVar4 = (longlong *)plVar10[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (lVar5 == 0 && lVar3 == 0) {
            cVar17 = '\0';
          }
          else {
            cVar17 = lVar3 != 0;
            if ((lVar5 != 0) == (bool)cVar17) {
              cVar17 = FUN_1467cb1ba();
            }
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
          param_2 = local_68;
          if (cVar17 == '\0') break;
          plVar16 = param_1 + lVar15 * 2;
          lVar3 = *plVar10;
          lVar15 = plVar10[1];
          lVar5 = plVar16[1];
          *plVar10 = *plVar16;
          plVar10[1] = lVar5;
          local_58._0_4_ = (undefined4)lVar3;
          local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar15;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)plVar16 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar16 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar16 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_50._4_4_;
          uVar14 = uVar6 * 2 + 1;
          uVar8 = (ulonglong)uVar6;
          local_58 = lVar3;
          uStack_50 = lVar15;
        } while ((int)uVar14 < (int)local_68);
      }
      uVar6 = (int)local_60 - 1;
    } while ((int)local_60 != 0);
    if (1 < (int)param_2) {
      uVar8 = (param_2 & 0xffffffff) - 1;
      lVar3 = *param_1;
      lVar15 = param_1[1];
      lVar5 = (param_1 + uVar8 * 2)[1];
      *param_1 = param_1[uVar8 * 2];
      param_1[1] = lVar5;
      local_58._0_4_ = (undefined4)lVar3;
      local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_50._0_4_ = (undefined4)lVar15;
      uStack_50._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
      plVar16 = param_1 + uVar8 * 2;
      *(undefined4 *)plVar16 = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar16 + 4) = local_58._4_4_;
      *(undefined4 *)(plVar16 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_50._4_4_;
      local_58 = lVar3;
      uStack_50 = lVar15;
      if ((int)param_2 != 2) {
        do {
          iVar9 = 0;
          iVar13 = 1;
          local_68 = uVar8;
          iVar7 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar12 = iVar13;
            if ((longlong)iVar9 < (longlong)local_68) {
              lVar3 = param_1[(longlong)iVar13 * 2];
              plVar16 = (longlong *)param_1[(longlong)iVar13 * 2 + 1];
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              lVar15 = param_1[(longlong)iVar9 * 2];
              plVar4 = (longlong *)(param_1 + (longlong)iVar9 * 2)[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              if (lVar15 == 0 && lVar3 == 0) {
                cVar17 = '\0';
              }
              else {
                cVar17 = lVar3 != 0;
                if ((lVar15 != 0) == (bool)cVar17) {
                  cVar17 = FUN_1467cb1ba();
                }
              }
              if (plVar4 != (longlong *)0x0) {
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
              if (cVar17 == '\0') {
                iVar12 = iVar9;
              }
            }
            lVar15 = (longlong)iVar12;
            lVar3 = param_1[lVar15 * 2];
            plVar16 = (longlong *)param_1[lVar15 * 2 + 1];
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
            }
            plVar10 = param_1 + (longlong)iVar7 * 2;
            lVar5 = *plVar10;
            plVar4 = (longlong *)plVar10[1];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            if (lVar5 == 0 && lVar3 == 0) {
              cVar17 = '\0';
            }
            else {
              cVar17 = lVar3 != 0;
              if ((lVar5 != 0) == (bool)cVar17) {
                cVar17 = FUN_1467cb1ba();
              }
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
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
            if (cVar17 == '\0') break;
            plVar16 = param_1 + lVar15 * 2;
            lVar3 = *plVar10;
            lVar15 = plVar10[1];
            lVar5 = plVar16[1];
            *plVar10 = *plVar16;
            plVar10[1] = lVar5;
            local_58._0_4_ = (undefined4)lVar3;
            local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar15;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
            *(undefined4 *)plVar16 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar16 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar16 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_50._4_4_;
            iVar9 = iVar12 * 2;
            iVar13 = iVar12 * 2 + 1;
            local_58 = lVar3;
            uStack_50 = lVar15;
            iVar7 = iVar12;
          } while ((longlong)iVar13 < (longlong)local_68);
          uVar8 = local_68 - 1;
          lVar3 = *param_1;
          lVar15 = param_1[1];
          lVar5 = (param_1 + uVar8 * 2)[1];
          *param_1 = param_1[uVar8 * 2];
          param_1[1] = lVar5;
          local_58._0_4_ = (undefined4)lVar3;
          local_58._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar15;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          plVar16 = param_1 + uVar8 * 2;
          *(undefined4 *)plVar16 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar16 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar16 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_50._4_4_;
          local_58 = lVar3;
          uStack_50 = lVar15;
        } while (2 < local_68);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467d9712 FUN_1467d9712 body=132 status=ok
// SIG undefined FUN_1467d9712(void)

void FUN_1467d9712(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467d9798 FUN_1467d9798 body=89 status=ok
// SIG undefined FUN_1467d9798(void)

void FUN_1467d9798(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1467d65da(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1467d97f2 FUN_1467d97f2 body=62 status=ok
// SIG undefined FUN_1467d97f2(void)

void FUN_1467d97f2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467d9830(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1467d9830 FUN_1467d9830 body=93 status=ok
// SIG undefined FUN_1467d9830(void)

ulonglong FUN_1467d9830(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1467d988e FUN_1467d988e body=561 status=ok
// SIG undefined FUN_1467d988e(void)

void FUN_1467d988e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined8 *puVar15;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  lVar6 = *(longlong *)(param_1 + 0x80);
  lVar10 = lVar6;
  if (lVar6 == 0) {
    lVar10 = param_1;
  }
  if ((int)uVar3 < 1) {
    uVar13 = 0;
  }
  else {
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar5 = (undefined2 *)*param_2;
    }
    uVar13 = 0;
    uVar9 = (ulonglong)uVar3;
    uVar11 = uVar3;
    do {
      uVar9 = uVar9 >> 1;
      uVar12 = (uint)uVar9 + uVar13;
      lVar8 = (ulonglong)uVar12 * 0x20;
      puVar14 = &DAT_149dfb77a;
      if (*(int *)(lVar10 + 8 + lVar8) != 0) {
        puVar14 = *(undefined2 **)(lVar10 + lVar8);
      }
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar14 + lVar8);
        uVar2 = *(ushort *)((longlong)puVar5 + lVar8);
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_1467d995a;
LAB_1467d992f:
        lVar8 = lVar8 + 2;
      }
      if ((uVar2 | uVar1) < 0x80) {
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1467d992f;
        iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      }
      else {
        iVar7 = (uint)uVar1 - (uint)uVar2;
      }
      if (iVar7 < 0) {
        uVar13 = uVar12 + (uVar11 & 1);
      }
LAB_1467d995a:
      bVar4 = 1 < uVar11;
      uVar11 = (uint)uVar9;
    } while (bVar4);
    if ((int)uVar13 < (int)uVar3) {
      lVar8 = (ulonglong)uVar13 * 0x20;
      if (*(int *)(lVar10 + 8 + lVar8) == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      else {
        puVar14 = *(undefined2 **)(lVar10 + lVar8);
      }
      puVar15 = (undefined8 *)(lVar10 + lVar8);
      lVar10 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar5 + lVar10);
        uVar11 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)puVar14 + lVar10);
        uVar12 = (uint)uVar2;
        if (uVar1 != uVar2) break;
        if (uVar1 == 0) goto LAB_1467d9a8f;
LAB_1467d9a60:
        lVar10 = lVar10 + 2;
      }
      if ((uVar2 | uVar1) < 0x80) {
        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467d9a60;
      }
      if ((int)(uVar11 - uVar12) < 0) goto LAB_1467d998b;
LAB_1467d9a8f:
      FUN_141535be2(puVar15,1);
      goto LAB_1467d99e0;
    }
  }
LAB_1467d998b:
  *(uint *)(param_1 + 0x88) = uVar3 + 1;
  if (*(uint *)(param_1 + 0x8c) == uVar3) {
    FUN_1467d9ac0(param_1,uVar3);
    lVar6 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar6 == 0) {
    lVar6 = param_1;
  }
  lVar10 = (ulonglong)uVar13 * 0x20;
  memmove((void *)(lVar6 + lVar10 + 0x20),(void *)(lVar6 + lVar10),(ulonglong)(uVar3 - uVar13) << 5)
  ;
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  puVar15 = (undefined8 *)(lVar6 + lVar10);
LAB_1467d99e0:
  *puVar15 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar15 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar15[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(puVar15 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar15 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  return;
}



// FUNCTION 1467d9ac0 FUN_1467d9ac0 body=119 status=ok
// SIG undefined FUN_1467d9ac0(void)

void FUN_1467d9ac0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1467d9b38(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467d9b38 FUN_1467d9b38 body=141 status=ok
// SIG undefined FUN_1467d9b38(void)

void FUN_1467d9b38(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x20);
  return;
}



// FUNCTION 1467d9bc6 FUN_1467d9bc6 body=330 status=ok
// SIG undefined FUN_1467d9bc6(void)

undefined4 * FUN_1467d9bc6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467d9d12(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1467d9eae(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x17) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_144afd4c3((longlong)local_40 + 4);
  uVar4 = FUN_144afd4c3(local_40);
  uVar5 = FUN_144a78877(uVar4,uVar3);
  cVar2 = FUN_1467d9e00(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar2 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0xbc) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x17) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1467da168(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467d9d12 FUN_1467d9d12 body=238 status=ok
// SIG undefined FUN_1467d9d12(void)

int * FUN_1467d9d12(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140d69980(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xc0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xc0) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc0 + *param_1;
  return param_2;
}



// FUNCTION 1467d9e00 FUN_1467d9e00 body=173 status=ok
// SIG undefined FUN_1467d9e00(void)

undefined8 FUN_1467d9e00(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0xc0;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          FUN_1467da0e0((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xb8);
          FUN_1467da066(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0xb8);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467d9eae FUN_1467d9eae body=440 status=ok
// SIG undefined FUN_1467d9eae(void)

undefined1 * FUN_1467d9eae(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  pvVar2 = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar1,0);
    memcpy(*(void **)(param_1 + 0x28),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  pvVar2 = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x38,iVar1,0);
    memcpy(*(void **)(param_1 + 0x38),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_14058acb2(param_1 + 0x48,param_2 + 0x48);
  param_1[0x98] = param_2[0x98];
  plVar3 = *(longlong **)(param_2 + 0xa0);
  *(longlong **)(param_1 + 0xa0) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 1467da066 FUN_1467da066 body=122 status=ok
// SIG undefined FUN_1467da066(void)

void FUN_1467da066(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0 + 4) = uVar4;
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



// FUNCTION 1467da0e0 FUN_1467da0e0 body=136 status=ok
// SIG undefined FUN_1467da0e0(void)

void FUN_1467da0e0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467da168 FUN_1467da168 body=479 status=ok
// SIG undefined FUN_1467da168(void)

void FUN_1467da168(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar12 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4)
             = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar2 = lVar4 + (longlong)iVar6 * 0xc0;
        uVar7 = FUN_144afd4c3(lVar2 + 4);
        uVar8 = FUN_144afd4c3(lVar4 + (longlong)iVar6 * 0xc0);
        iVar9 = FUN_144a78877(uVar8,uVar7);
        uVar10 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xbc) = iVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xb8) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467da348 FUN_1467da348 body=189 status=ok
// SIG undefined FUN_1467da348(void)

longlong FUN_1467da348(longlong *param_1,uint param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xb0;
        if (*(char *)(*param_1 + (longlong)iVar1 * 0xb0) == *param_3) {
          if (lVar3 != 0) goto LAB_1467da3e8;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xa8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1467da406(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xb0 + *param_1;
LAB_1467da3e8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1467da406 FUN_1467da406 body=279 status=ok
// SIG undefined FUN_1467da406(void)

undefined4 * FUN_1467da406(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467da51e(param_1,local_48);
  FUN_1467da6ae(param_4,local_40);
  *(undefined4 *)(local_40 + 0xa8) = 0xffffffff;
  cVar1 = FUN_1467da60c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xac) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xa8) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1467daa32(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467da51e FUN_1467da51e body=237 status=ok
// SIG undefined FUN_1467da51e(void)

int * FUN_1467da51e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14573f9e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb0) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xb0 + *param_1;
  return param_2;
}



// FUNCTION 1467da60c FUN_1467da60c body=162 status=ok
// SIG undefined FUN_1467da60c(void)

undefined8 FUN_1467da60c(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb0);
        if (*(char *)(*param_1 + (longlong)iVar2 * 0xb0) == *param_3) {
          FUN_1467da762((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xa8);
          FUN_1467da9b8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xa8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467da6ae FUN_1467da6ae body=178 status=ok
// SIG undefined FUN_1467da6ae(void)

undefined1 * FUN_1467da6ae(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [44];
  undefined8 local_9c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 local_4c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa0);
  local_9c = 0xffffffff00000080;
  local_58 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  *param_2 = *(undefined1 *)*param_1;
  FUN_1467da7b6(param_2 + 8,local_c8);
  FUN_1467da7b6(param_2 + 0x58,&local_78);
  FUN_1467da762(local_c8);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467da762 FUN_1467da762 body=83 status=ok
// SIG undefined FUN_1467da762(void)

void FUN_1467da762(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1);
  return;
}



// FUNCTION 1467da7b6 FUN_1467da7b6 body=123 status=ok
// SIG undefined FUN_1467da7b6(void)

undefined8 * FUN_1467da7b6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1467da832();
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



// FUNCTION 1467da832 FUN_1467da832 body=388 status=ok
// SIG undefined FUN_1467da832(void)

longlong * FUN_1467da832(longlong *param_1,longlong *param_2)

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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467da9b8 FUN_1467da9b8 body=122 status=ok
// SIG undefined FUN_1467da9b8(void)

void FUN_1467da9b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1467daa32 FUN_1467daa32 body=423 status=ok
// SIG undefined FUN_1467daa32(void)

void FUN_1467daa32(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0xb0;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xac + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xa8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467dabda FUN_1467dabda body=229 status=ok
// SIG undefined FUN_1467dabda(void)

int * FUN_1467dabda(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1467dacc0 FUN_1467dacc0 body=187 status=ok
// SIG undefined FUN_1467dacc0(void)

undefined8 FUN_1467dacc0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1467dad7c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467dad7c FUN_1467dad7c body=114 status=ok
// SIG undefined FUN_1467dad7c(void)

void FUN_1467dad7c(longlong *param_1,int param_2)

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



// FUNCTION 1467dadee FUN_1467dadee body=444 status=ok
// SIG undefined FUN_1467dadee(void)

void FUN_1467dadee(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_144afd4c3(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467dafac FUN_1467dafac body=238 status=ok
// SIG undefined FUN_1467dafac(void)

int * FUN_1467dafac(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1467db09a FUN_1467db09a body=180 status=ok
// SIG undefined FUN_1467db09a(void)

undefined8 FUN_1467db09a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140bb2a1a((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1467db14e(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467db14e FUN_1467db14e body=122 status=ok
// SIG undefined FUN_1467db14e(void)

void FUN_1467db14e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1467db1c8 FUN_1467db1c8 body=445 status=ok
// SIG undefined FUN_1467db1c8(void)

void FUN_1467db1c8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_144afd4c3(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467db386 FUN_1467db386 body=154 status=ok
// SIG undefined FUN_1467db386(void)

undefined8 FUN_1467db386(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1467db420(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467db420 FUN_1467db420 body=96 status=ok
// SIG undefined FUN_1467db420(void)

void FUN_1467db420(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1467db480(param_1,param_2,1);
  return;
}


