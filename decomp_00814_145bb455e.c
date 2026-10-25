// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145bb455e FUN_145bb455e body=227 status=ok
// SIG undefined FUN_145bb455e(void)

longlong FUN_145bb455e(void)

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
  if (DAT_14cc327b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_149911037;
    local_40 = FUN_1467723f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AppleImageUtils",L"AppleImageInterface",&DAT_14cc327b8,&DAT_149911036);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc327b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb4642 FUN_145bb4642 body=40 status=ok
// SIG undefined FUN_145bb4642(void)

undefined8 FUN_145bb4642(undefined8 param_1,int param_2)

{
  FUN_145bb466a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145bb466a FUN_145bb466a body=135 status=ok
// SIG undefined FUN_145bb466a(void)

void FUN_145bb466a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac9cb20;
  param_1[5] = &PTR_FUN_14ac9cdd0;
  param_1[10] = &PTR_FUN_14ac9ce00;
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
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_14071fe68(param_1);
  return;
}



// FUNCTION 145bb46f2 FUN_145bb46f2 body=1279 status=ok
// SIG undefined FUN_145bb46f2(void)

void FUN_145bb46f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_64;
  int local_5c;
  ulonglong local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar9 = FUN_144a8940a(param_1 + 0x28,(undefined8 *)(param_2 + 0x10));
  if (cVar9 == '\0') {
    local_68 = *(undefined4 *)(param_2 + 0x24);
    local_70 = *(undefined8 *)(param_2 + 0x1c);
    local_64 = *(ulonglong *)(param_2 + 0x28);
    local_5c = *(int *)(param_2 + 0x30);
    local_58 = *(ulonglong *)(param_2 + 0x34);
    local_50 = *(int *)(param_2 + 0x3c);
    local_4c = 0;
    if (*(char *)(param_2 + 0x50) == '\x01') {
      FUN_140d7f1a8(param_1,&local_80,&local_70);
      plVar18 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = (int)local_78[1] + 1;
        UNLOCK();
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
      }
    }
    else {
      uVar10 = *(uint *)(param_2 + 0x1c);
      if (*(int *)(param_2 + 0x24) != 0) {
        uVar10 = FUN_144a78877(uVar10);
      }
      uVar11 = (uint)local_64;
      if (local_5c != 0) {
        uVar11 = FUN_144a78877(local_64 & 0xffffffff);
      }
      uVar12 = (uint)local_58;
      if (local_50 != 0) {
        uVar12 = FUN_144a78877(local_58 & 0xffffffff);
      }
      iVar13 = FUN_140d7f9b6((longlong *)(param_1 + 0x98),uVar11 ^ uVar10 ^ uVar12,&local_70);
      if ((iVar13 == -1) ||
         (lVar14 = (longlong)iVar13 * 0x40 + *(longlong *)(param_1 + 0x98),
         lVar14 == -0x28 || lVar14 == 0)) goto LAB_145bb47df;
      local_80 = *(longlong *)(lVar14 + 0x28);
      plVar18 = *(longlong **)(lVar14 + 0x30);
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
    }
    if (local_80 != 0) {
      FUN_145bb4bf8(local_80,param_2);
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
  }
  else {
    if (*(char *)(param_2 + 0x50) == '\x01') {
      iVar13 = *(int *)(param_1 + 0x100);
      *(uint *)(param_1 + 0x100) = iVar13 + 1U;
      if (*(uint *)(param_1 + 0x104) < iVar13 + 1U) {
        FUN_148915228((longlong *)(param_1 + 0xf8),iVar13);
      }
      lVar14 = *(longlong *)(param_1 + 0xf8);
      lVar15 = (longlong)iVar13 * 0x58;
      *(undefined ***)(lVar14 + lVar15) = &PTR_FUN_14b3ca180;
      *(undefined1 *)(lVar14 + 8 + lVar15) = *(undefined1 *)(param_2 + 8);
      *(undefined ***)(lVar14 + lVar15) = &PTR_FUN_14b3cae00;
      *(undefined4 *)(lVar14 + 0x18 + lVar15) = *(undefined4 *)(param_2 + 0x18);
      *(undefined8 *)(lVar14 + 0x10 + lVar15) = *(undefined8 *)(param_2 + 0x10);
      *(undefined4 *)(lVar14 + 0x24 + lVar15) = *(undefined4 *)(param_2 + 0x24);
      *(undefined8 *)(lVar14 + 0x1c + lVar15) = *(undefined8 *)(param_2 + 0x1c);
      *(undefined4 *)(lVar14 + 0x30 + lVar15) = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)(lVar14 + 0x28 + lVar15) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(lVar14 + 0x34 + lVar15) = *(undefined8 *)(param_2 + 0x34);
      *(undefined4 *)(lVar14 + 0x3c + lVar15) = *(undefined4 *)(param_2 + 0x3c);
      uVar5 = *(undefined4 *)(param_2 + 0x44);
      uVar6 = *(undefined4 *)(param_2 + 0x48);
      uVar7 = *(undefined4 *)(param_2 + 0x4c);
      puVar3 = (undefined4 *)(lVar14 + 0x40 + lVar15);
      *puVar3 = *(undefined4 *)(param_2 + 0x40);
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(undefined1 *)(lVar14 + 0x50 + lVar15) = *(undefined1 *)(param_2 + 0x50);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
    }
    local_a8 = (ulonglong)*(int *)(param_1 + 0x100);
    if (local_a8 != 0) {
      local_b8 = *(longlong *)(param_1 + 0xf8);
      local_88 = param_2 + 0x1c;
      cVar9 = FUN_140ac16b0(local_b8 + 0x1c);
      local_b0 = 0;
      bVar19 = false;
      if (cVar9 != '\0') {
        if ((*(int *)(local_b8 + 0x40) == *(int *)(param_2 + 0x40)) &&
           (*(int *)(local_b8 + 0x48) == *(int *)(param_2 + 0x48))) {
          bVar19 = *(int *)(local_b8 + 0x4c) == *(int *)(param_2 + 0x4c);
        }
        else {
          bVar19 = false;
        }
      }
      local_90 = -local_a8;
      local_98 = local_b8 + 0x74;
      local_c8 = 0;
      uVar8 = local_c8;
LAB_145bb4a2b:
      do {
        local_c0 = uVar8;
        uVar10 = (int)local_c0 + 1;
        if ((int)uVar10 < (int)local_a8) {
          lVar16 = (longlong)(int)local_c0;
          local_c8 = lVar16 + 1;
          lVar14 = local_90 + lVar16;
          local_a0 = lVar16 * 0x58;
          lVar15 = local_98 + local_a0;
          bVar4 = true;
          lVar17 = 0;
          do {
            cVar9 = FUN_140ac16b0(lVar15,local_88);
            if (((cVar9 == '\0') || (*(int *)(lVar15 + 0x24) != *(int *)(param_2 + 0x40))) ||
               (*(int *)(lVar15 + 0x2c) != *(int *)(param_2 + 0x48))) {
              if (bVar19) {
                FUN_145c196fc(local_a0 + local_b8,(int)lVar17 + 1);
                if (!bVar4) goto LAB_145bb4bab;
                bVar19 = false;
                uVar8 = local_c8 + lVar17;
                goto LAB_145bb4a2b;
              }
            }
            else if ((*(int *)(lVar15 + 0x30) == *(int *)(param_2 + 0x4c)) != bVar19) {
              uVar8 = (ulonglong)(uint)((int)local_c8 + (int)lVar17);
              break;
            }
            bVar4 = lVar16 + lVar17 + 2 < (longlong)local_a8;
            lVar17 = lVar17 + 1;
            lVar15 = lVar15 + 0x58;
            uVar8 = local_a8;
          } while (lVar14 + 1 + lVar17 != 0);
        }
        else {
          bVar4 = false;
          uVar8 = (ulonglong)uVar10;
        }
        local_c8 = uVar8;
        iVar13 = (int)local_c8 - (int)local_c0;
        if (bVar19 == false) {
          if ((int)local_b0 != (int)local_c0) {
            memmove((void *)((longlong)(int)local_b0 * 0x58 + local_b8),
                    (void *)((longlong)(int)local_c0 * 0x58 + local_b8),(longlong)iVar13 * 0x58);
          }
          local_b0 = (ulonglong)(uint)((int)local_b0 + iVar13);
          bVar19 = true;
          uVar8 = local_c8;
          if (!bVar4) break;
          goto LAB_145bb4a2b;
        }
        FUN_145c196fc((longlong)(int)local_c0 * 0x58 + local_b8,iVar13);
        bVar19 = false;
        local_c0 = local_c8;
        uVar8 = local_c0;
      } while (bVar4);
LAB_145bb4bab:
      *(int *)(param_1 + 0x100) = (int)local_b0;
    }
  }
LAB_145bb47df:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145bb4bf8 FUN_145bb4bf8 body=120 status=ok
// SIG undefined FUN_145bb4bf8(void)

void FUN_145bb4bf8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_2 + 0x48);
  local_28 = *(undefined8 *)(param_2 + 0x40);
  lVar1 = FUN_140d7e9a0(param_1,&local_28,*(undefined4 *)(param_2 + 0x4c),
                        *(undefined1 *)(param_2 + 0x50));
  if (lVar1 != 0) {
    *(bool *)(lVar1 + 0x1a) = *(char *)(param_2 + 0x50) != '\0';
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb4c80 FUN_145bb4c80 body=72 status=ok
// SIG undefined FUN_145bb4c80(void)

void FUN_145bb4c80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab18750;
  FUN_145bb4cfe();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145bb4cc8(param_1 + 1);
  return;
}



// FUNCTION 145bb4cc8 FUN_145bb4cc8 body=53 status=ok
// SIG undefined FUN_145bb4cc8(void)

void FUN_145bb4cc8(longlong *param_1)

{
  FUN_145bb4dae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145bb4cfe FUN_145bb4cfe body=112 status=ok
// SIG undefined FUN_145bb4cfe(void)

void FUN_145bb4cfe(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145bb4d6e(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145bb4d6e FUN_145bb4d6e body=63 status=ok
// SIG undefined FUN_145bb4d6e(void)

void FUN_145bb4d6e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145bb4dae(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1402ac8d4(param_1);
    return;
  }
  FUN_147dbae7e(param_1);
  FUN_145bb4dae(param_1);
  return;
}



// FUNCTION 145bb4dae FUN_145bb4dae body=89 status=ok
// SIG undefined FUN_145bb4dae(void)

void FUN_145bb4dae(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 145bb4e0e FUN_145bb4e0e body=228 status=ok
// SIG undefined FUN_145bb4e0e(void)

longlong FUN_145bb4e0e(void)

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
  if (DAT_14c952648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e45b7;
    local_40 = FUN_14627591d;
    local_48 = L"Engine";
    local_50 = 0x80000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Int16Property",&DAT_14c952648,&DAT_1468e45bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb4ef4 FUN_145bb4ef4 body=21 status=ok
// SIG undefined FUN_145bb4ef4(void)

void FUN_145bb4ef4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145cdd2c2();
  FUN_145bb4f0a(uVar1);
  return;
}



// FUNCTION 145bb4f0a FUN_145bb4f0a body=57 status=ok
// SIG undefined FUN_145bb4f0a(void)

void FUN_145bb4f0a(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x10) != 0) && (DAT_14c98e618 != 0)) {
    FUN_14480f766(DAT_14c98e618 + 0x550);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 145bb4f4a FUN_145bb4f4a body=228 status=ok
// SIG undefined FUN_145bb4f4a(void)

longlong FUN_145bb4f4a(void)

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
  if (DAT_14c9a05f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_147088ed3;
    local_40 = &LAB_1459ac25d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreCredits",&DAT_14c9a05f0,&DAT_147088ed2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a05f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5036 FUN_145bb5036 body=228 status=ok
// SIG undefined FUN_145bb5036(void)

longlong FUN_145bb5036(void)

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
  if (DAT_14c9a0680 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_147088eeb;
    local_40 = &LAB_145aedbc7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreGlobals",&DAT_14c9a0680,&DAT_147088eea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0680;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5122 FUN_145bb5122 body=228 status=ok
// SIG undefined FUN_145bb5122(void)

longlong FUN_145bb5122(void)

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
  if (DAT_14c9a08a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459203d0;
    local_38 = &LAB_1470890ff;
    local_40 = &LAB_14597e63c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusSerializeTest_ArrayDefStore",&DAT_14c9a08a8,
                  &DAT_1470890fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a08a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb520e FUN_145bb520e body=228 status=ok
// SIG undefined FUN_145bb520e(void)

longlong FUN_145bb520e(void)

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
  if (DAT_14c9a0908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459203d0;
    local_38 = &LAB_14708910d;
    local_40 = &LAB_145aedc53;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusSerializeTest_BasicDefStore",&DAT_14c9a0908,
                  &DAT_14708910c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb52fa FUN_145bb52fa body=228 status=ok
// SIG undefined FUN_145bb52fa(void)

longlong FUN_145bb52fa(void)

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
  if (DAT_14c9a0958 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459203d0;
    local_38 = &LAB_14708d1f3;
    local_40 = &LAB_145aedcdf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusSerializeTest_GameplayTagDefStore",&DAT_14c9a0958,
                  &DAT_14708d1f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0958;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb53e6 FUN_145bb53e6 body=228 status=ok
// SIG undefined FUN_145bb53e6(void)

longlong FUN_145bb53e6(void)

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
  if (DAT_14c9a09a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459203d0;
    local_38 = &LAB_14708d1f7;
    local_40 = &LAB_145aedd6b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusSerializeTest_MapDefStore",&DAT_14c9a09a0,
                  &DAT_14708d1f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a09a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb54d2 FUN_145bb54d2 body=228 status=ok
// SIG undefined FUN_145bb54d2(void)

longlong FUN_145bb54d2(void)

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
  if (DAT_14c9a0a30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459203d0;
    local_38 = &LAB_14708d1fb;
    local_40 = &LAB_145aeddf7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusSerializeTest_SetDefStore",&DAT_14c9a0a30,
                  &DAT_14708d1fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0a30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb55be FUN_145bb55be body=228 status=ok
// SIG undefined FUN_145bb55be(void)

longlong FUN_145bb55be(void)

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
  if (DAT_14c9a4228 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1470b7151;
    local_40 = &LAB_145aede83;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxEngine",L"NexusConfigStoreDeveloperSettings",&DAT_14c9a4228,
                  &DAT_1470b7150);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4228;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb56aa FUN_145bb56aa body=228 status=ok
// SIG undefined FUN_145bb56aa(void)

longlong FUN_145bb56aa(void)

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
  if (DAT_14c9a5088 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1470c7b7d;
    local_40 = &LAB_14595f3c9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxEngine",L"TestConfigStore_IntegrationTest_Cook",&DAT_14c9a5088,
                  &DAT_1470c7b7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5088;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5796 FUN_145bb5796 body=228 status=ok
// SIG undefined FUN_145bb5796(void)

longlong FUN_145bb5796(void)

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
  if (DAT_14c9a5b98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1470d1db7;
    local_40 = &LAB_145fd62d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxEngine",L"NexusConfigStoreAttributeDefs",&DAT_14c9a5b98,
                  &DAT_1470d1db6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5b98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5882 FUN_145bb5882 body=228 status=ok
// SIG undefined FUN_145bb5882(void)

longlong FUN_145bb5882(void)

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
  if (DAT_14c9a5be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_1470d1dc3;
    local_40 = &LAB_145c0d239;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x360;
    FUN_14081cfa3(L"/Script/GbxEngine",L"NexusConfigStoreDefSelectors",&DAT_14c9a5be0,&DAT_1470d1dc2
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb596e FUN_145bb596e body=228 status=ok
// SIG undefined FUN_145bb596e(void)

longlong FUN_145bb596e(void)

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
  if (DAT_14c9a5bf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1470d1dc7;
    local_40 = &LAB_145ff498d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/GbxEngine",L"NexusConfigStoreGbxUEDataTableDefs",&DAT_14c9a5bf8,
                  &DAT_1470d1dc6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5bf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5b22 FUN_145bb5b22 body=67 status=ok
// SIG undefined FUN_145bb5b22(void)

undefined8 * FUN_145bb5b22(undefined8 *param_1)

{
  FUN_140307bf4();
  *param_1 = &PTR_FUN_14a656150;
  param_1[0x19] = &PTR_FUN_14a656510;
  param_1[0x1a] = &PTR_FUN_14a656550;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0x11;
  return param_1;
}



// FUNCTION 145bb5b76 FUN_145bb5b76 body=67 status=ok
// SIG undefined FUN_145bb5b76(void)

undefined8 * FUN_145bb5b76(undefined8 *param_1)

{
  FUN_1459c8818();
  *param_1 = &PTR_FUN_14a6eb5c0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x85) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 3;
  *(undefined4 *)(param_1 + 0x15) = 1;
  return param_1;
}



// FUNCTION 145bb5bc4 FUN_145bb5bc4 body=67 status=ok
// SIG undefined FUN_145bb5bc4(void)

undefined8 * FUN_145bb5bc4(undefined8 *param_1)

{
  FUN_140307bf4();
  *param_1 = &PTR_FUN_14a740350;
  param_1[0x19] = &PTR_FUN_14a740710;
  param_1[0x1a] = &PTR_FUN_14a740750;
  *(undefined1 *)((longlong)param_1 + 0xf6) = 0x16;
  return param_1;
}



// FUNCTION 145bb5c12 FUN_145bb5c12 body=67 status=ok
// SIG undefined FUN_145bb5c12(void)

undefined8 * FUN_145bb5c12(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a76b020;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0x800000008;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 145bb5c62 FUN_145bb5c62 body=228 status=ok
// SIG undefined FUN_145bb5c62(void)

longlong FUN_145bb5c62(void)

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
  if (DAT_14cacfd48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1479b02e7;
    local_40 = &LAB_146063820;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacfd48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5d5a FUN_145bb5d5a body=228 status=ok
// SIG undefined FUN_145bb5d5a(void)

longlong FUN_145bb5d5a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae8e90 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_143558588;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147b97a55;
    local_40 = &LAB_145c28e7e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelInstanceSubsystem",&DAT_14cae8e90,&DAT_147b97a54);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8e90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5e5e FUN_145bb5e5e body=228 status=ok
// SIG undefined FUN_145bb5e5e(void)

longlong FUN_145bb5e5e(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11be0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14639adaa;
    local_28 = &LAB_14594a852;
    local_38 = &LAB_147dccb45;
    local_40 = FUN_1437b166d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeCellDataSpatialHash",&DAT_14cb11be0,
                  &DAT_147dccb44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11be0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb5f50 FUN_145bb5f50 body=228 status=ok
// SIG undefined FUN_145bb5f50(void)

longlong FUN_145bb5f50(void)

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
  if (DAT_14cb1a508 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e195ed;
    local_40 = &LAB_146165707;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"NexusConfigStore_GbxActor",&DAT_14cb1a508,&DAT_147e195ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a508;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb603c FUN_145bb603c body=228 status=ok
// SIG undefined FUN_145bb603c(void)

longlong FUN_145bb603c(void)

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
  if (DAT_14cb1a9b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e1c0a9;
    local_40 = &LAB_145ef0251;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"NexusConfigStoreSpawnerStyle",&DAT_14cb1a9b8,&DAT_147e1c0a8)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a9b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6128 FUN_145bb6128 body=228 status=ok
// SIG undefined FUN_145bb6128(void)

longlong FUN_145bb6128(void)

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
  if (DAT_14cb1ad30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e1d8cf;
    local_40 = &LAB_146130281;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"NexusConfigStore_TaggedAnims",&DAT_14cb1ad30,&DAT_147e1d8ce)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ad30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6214 FUN_145bb6214 body=228 status=ok
// SIG undefined FUN_145bb6214(void)

longlong FUN_145bb6214(void)

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
  if (DAT_14cb1bb38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e31daf;
    local_40 = &LAB_145fdae70;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxNav",L"NexusConfigStoreNavFilterOverride",&DAT_14cb1bb38,
                  &DAT_147e31dae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bb38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6300 FUN_145bb6300 body=228 status=ok
// SIG undefined FUN_145bb6300(void)

longlong FUN_145bb6300(void)

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
  if (DAT_14cb1bd10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e31fbf;
    local_40 = &LAB_145cd6984;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxNav",L"NexusConfigStore_GbxNavLink",&DAT_14cb1bd10,&DAT_147e31fbe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bd10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb63ec FUN_145bb63ec body=228 status=ok
// SIG undefined FUN_145bb63ec(void)

longlong FUN_145bb63ec(void)

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
  if (DAT_14cb1c510 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e36897;
    local_40 = &LAB_145fd684d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxNav",L"NexusConfigStoreStanceUserData",&DAT_14cb1c510,&DAT_147e36896)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb64d8 FUN_145bb64d8 body=228 status=ok
// SIG undefined FUN_145bb64d8(void)

longlong FUN_145bb64d8(void)

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
  if (DAT_14cb1c780 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147e398d9;
    local_40 = &LAB_145ef05a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxNav",L"NexusConfigStore_Stance",&DAT_14cb1c780,&DAT_147e398d8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb65c4 FUN_145bb65c4 body=228 status=ok
// SIG undefined FUN_145bb65c4(void)

longlong FUN_145bb65c4(void)

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
  if (DAT_14cb1d478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146422fec;
    local_38 = &LAB_147e6dc69;
    local_40 = FUN_146423234;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavArea_Obstacle",&DAT_14cb1d478,&DAT_147e6dc68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb66b8 FUN_145bb66b8 body=343 status=ok
// SIG undefined FUN_145bb66b8(void)

undefined8 * FUN_145bb66b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
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
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8cae0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  param_1[0x13] = DAT_14c8464e0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x19] = DAT_14c8464f8;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  param_1[0x21] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  param_1[0x2a] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x2b) = 2;
  param_1[0x29] = &PTR_FUN_14a1a0a20;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x42c80000;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 145bb6816 FUN_145bb6816 body=228 status=ok
// SIG undefined FUN_145bb6816(void)

longlong FUN_145bb6816(void)

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
  if (DAT_14cb239b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147f42f97;
    local_40 = &LAB_145fd0c8c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxAI",L"NexusConfigStoreSense",&DAT_14cb239b8,&DAT_147f42f96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb239b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6902 FUN_145bb6902 body=228 status=ok
// SIG undefined FUN_145bb6902(void)

longlong FUN_145bb6902(void)

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
  if (DAT_14cb239d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147f42f9b;
    local_40 = &LAB_145fd0e5c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxAI",L"NexusConfigStoreTeam",&DAT_14cb239d0,&DAT_147f42f9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb239d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb69e8 FUN_145bb69e8 body=41 status=ok
// SIG undefined FUN_145bb69e8(void)

void FUN_145bb69e8(longlong param_1,undefined8 param_2)

{
  FUN_145bb6a12();
  FUN_140aa1618(param_1 + 0x140,param_2);
  return;
}



// FUNCTION 145bb6a12 FUN_145bb6a12 body=115 status=ok
// SIG undefined FUN_145bb6a12(void)

void FUN_145bb6a12(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x88,param_2);
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar1 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar2;
    do {
      FUN_140aa1618(lVar2,param_2);
      FUN_140aa1618(lVar2 + 0x20,param_2);
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 145bb6a92 FUN_145bb6a92 body=228 status=ok
// SIG undefined FUN_145bb6a92(void)

longlong FUN_145bb6a92(void)

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
  if (DAT_14cb25648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_147f75eff;
    local_40 = &LAB_145cd754b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStoreAudioProvider",&DAT_14cb25648,&DAT_147f75efe
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb25648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6b7e FUN_145bb6b7e body=228 status=ok
// SIG undefined FUN_145bb6b7e(void)

longlong FUN_145bb6b7e(void)

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
  if (DAT_14cb25678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f03;
    local_40 = &LAB_1458048e3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseAuxBus",&DAT_14cb25678,&DAT_147f75f02)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb25678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6c6a FUN_145bb6c6a body=228 status=ok
// SIG undefined FUN_145bb6c6a(void)

longlong FUN_145bb6c6a(void)

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
  if (DAT_14cb256a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f1f;
    local_40 = &LAB_145bdada8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseEvents",&DAT_14cb256a8,&DAT_147f75f1e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb256a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6d56 FUN_145bb6d56 body=228 status=ok
// SIG undefined FUN_145bb6d56(void)

longlong FUN_145bb6d56(void)

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
  if (DAT_14cb256d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f23;
    local_40 = &LAB_145bdae4a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseGameParameters",&DAT_14cb256d8,
                  &DAT_147f75f22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb256d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6e42 FUN_145bb6e42 body=228 status=ok
// SIG undefined FUN_145bb6e42(void)

longlong FUN_145bb6e42(void)

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
  if (DAT_14cb25738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f31;
    local_40 = &LAB_145bdaeec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseSoundBank",&DAT_14cb25738,
                  &DAT_147f75f30);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb25738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb6f2e FUN_145bb6f2e body=228 status=ok
// SIG undefined FUN_145bb6f2e(void)

longlong FUN_145bb6f2e(void)

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
  if (DAT_14cb25768 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f35;
    local_40 = &LAB_145bdaf8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseStates",&DAT_14cb25768,&DAT_147f75f34)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb25768;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb701a FUN_145bb701a body=228 status=ok
// SIG undefined FUN_145bb701a(void)

longlong FUN_145bb701a(void)

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
  if (DAT_14cb25798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f39;
    local_40 = &LAB_145bdb030;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseSwitches",&DAT_14cb25798,
                  &DAT_147f75f38);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb25798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7106 FUN_145bb7106 body=228 status=ok
// SIG undefined FUN_145bb7106(void)

longlong FUN_145bb7106(void)

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
  if (DAT_14cb257c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d4ff8;
    local_38 = &LAB_147f75f3d;
    local_40 = &LAB_145bdb0d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxAudio",L"NexusConfigStore_WwiseTriggers",&DAT_14cb257c8,
                  &DAT_147f75f3c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb257c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb71fe FUN_145bb71fe body=228 status=ok
// SIG undefined FUN_145bb71fe(void)

longlong FUN_145bb71fe(void)

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
  if (DAT_14cb27d88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147fa421f;
    local_40 = FUN_146450127;
    local_48 = L"StateTree";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/StateTreeModule",L"StateTreeSettings",&DAT_14cb27d88,&DAT_147fa421e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27d88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb72e3 FUN_145bb72e3 body=78 status=ok
// SIG undefined FUN_145bb72e3(void)

void FUN_145bb72e3(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458d9d10(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae4db10;
  puVar1[5] = &PTR_FUN_14ae4de30;
  *(undefined1 *)((longlong)puVar1 + 0xafd) = 1;
  lVar2 = puVar1[0x167];
  if (lVar2 == 0) {
    return;
  }
  *(byte *)(lVar2 + 0x3d4) = *(byte *)(lVar2 + 0x3d4) & 0xfe | 1;
  return;
}



// FUNCTION 145bb733c FUN_145bb733c body=113 status=ok
// SIG undefined FUN_145bb733c(void)

undefined8 * FUN_145bb733c(undefined8 *param_1)

{
  FUN_145bb73ae();
  *param_1 = &PTR_FUN_14aef4200;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[9] = &DAT_100000004;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 145bb73ae FUN_145bb73ae body=32 status=ok
// SIG undefined FUN_145bb73ae(void)

undefined8 * FUN_145bb73ae(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aea27e0;
  return param_1;
}



// FUNCTION 145bb73d4 FUN_145bb73d4 body=228 status=ok
// SIG undefined FUN_145bb73d4(void)

longlong FUN_145bb73d4(void)

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
  if (DAT_14cb53d20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1485fcf01;
    local_40 = &LAB_145bdb174;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/GbxTimeOfDay",L"NexusConfigStoreTimeOfDayCycle",&DAT_14cb53d20,
                  &DAT_1485fcf00);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb53d20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb74c0 FUN_145bb74c0 body=228 status=ok
// SIG undefined FUN_145bb74c0(void)

longlong FUN_145bb74c0(void)

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
  if (DAT_14cb54068 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_143c25460;
    local_38 = &LAB_1485fdad7;
    local_40 = &LAB_1458d6a07;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxTimeOfDay",L"TimeOfDayWeatherOverrideVolume",&DAT_14cb54068,
                  &DAT_1485fdad6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb54068;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb75ac FUN_145bb75ac body=228 status=ok
// SIG undefined FUN_145bb75ac(void)

longlong FUN_145bb75ac(void)

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
  if (DAT_14cb54840 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_148613cc7;
    local_40 = &LAB_145aee1d0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreActivityRequest",&DAT_14cb54840,
                  &DAT_148613cc6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb54840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7698 FUN_145bb7698 body=228 status=ok
// SIG undefined FUN_145bb7698(void)

longlong FUN_145bb7698(void)

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
  if (DAT_14cb548d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_148613ce7;
    local_40 = &LAB_145aee25d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreActivityRequestSettings",&DAT_14cb548d0,
                  &DAT_148613ce6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb548d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7784 FUN_145bb7784 body=228 status=ok
// SIG undefined FUN_145bb7784(void)

longlong FUN_145bb7784(void)

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
  if (DAT_14cb555a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_1486247dd;
    local_40 = FUN_1464b2806;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_Breadcrumb",&DAT_14cb555a0,&DAT_1486247dc)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb555a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7870 FUN_145bb7870 body=228 status=ok
// SIG undefined FUN_145bb7870(void)

longlong FUN_145bb7870(void)

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
  if (DAT_14cb55bb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148629d3b;
    local_40 = &LAB_145fd6dc6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_CharacterSoundDef",&DAT_14cb55bb8,
                  &DAT_148629d3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55bb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb795c FUN_145bb795c body=228 status=ok
// SIG undefined FUN_145bb795c(void)

longlong FUN_145bb795c(void)

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
  if (DAT_14cb55c48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148629d53;
    local_40 = &LAB_145fd6f99;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_CharacterSoundTagDef",&DAT_14cb55c48,
                  &DAT_148629d52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55c48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7a48 FUN_145bb7a48 body=228 status=ok
// SIG undefined FUN_145bb7a48(void)

longlong FUN_145bb7a48(void)

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
  if (DAT_14cb55d40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14862d387;
    local_40 = &LAB_145aee2e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreClimbableInteract",&DAT_14cb55d40,
                  &DAT_14862d386);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55d40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7b34 FUN_145bb7b34 body=228 status=ok
// SIG undefined FUN_145bb7b34(void)

longlong FUN_145bb7b34(void)

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
  if (DAT_14cb570f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14863c68f;
    local_40 = &LAB_145aee375;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogParameters",&DAT_14cb570f8,
                  &DAT_14863c68e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb570f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7c20 FUN_145bb7c20 body=228 status=ok
// SIG undefined FUN_145bb7c20(void)

longlong FUN_145bb7c20(void)

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
  if (DAT_14cb574e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14863f9d3;
    local_40 = &LAB_146071f4a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreEffectCollection",&DAT_14cb574e0,
                  &DAT_14863f9d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb574e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7d0c FUN_145bb7d0c body=228 status=ok
// SIG undefined FUN_145bb7d0c(void)

longlong FUN_145bb7d0c(void)

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
  if (DAT_14cb57b08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14864708d;
    local_40 = &LAB_14607219c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreFiringPattern",&DAT_14cb57b08,&DAT_14864708c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57b08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7df8 FUN_145bb7df8 body=228 status=ok
// SIG undefined FUN_145bb7df8(void)

longlong FUN_145bb7df8(void)

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
  if (DAT_14cb57fa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14864bd03;
    local_40 = &LAB_145aee401;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxActivityAreaStampContext",&DAT_14cb57fa8,
                  &DAT_14864bd02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7ee4 FUN_145bb7ee4 body=228 status=ok
// SIG undefined FUN_145bb7ee4(void)

longlong FUN_145bb7ee4(void)

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
  if (DAT_14cb58028 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14864bd13;
    local_40 = &LAB_145aee48d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxActivityAreaStampLayout",&DAT_14cb58028,
                  &DAT_14864bd12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb7fd0 FUN_145bb7fd0 body=228 status=ok
// SIG undefined FUN_145bb7fd0(void)

longlong FUN_145bb7fd0(void)

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
  if (DAT_14cb58058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14864bd17;
    local_40 = &LAB_145aee519;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxActivityAreaStampGroupLayout",
                  &DAT_14cb58058,&DAT_14864bd16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb80bc FUN_145bb80bc body=228 status=ok
// SIG undefined FUN_145bb80bc(void)

longlong FUN_145bb80bc(void)

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
  if (DAT_14cb58290 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14864efb9;
    local_40 = &LAB_145aee5a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxActivityMapInitialization",&DAT_14cb58290
                  ,&DAT_14864efb8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb81a8 FUN_145bb81a8 body=228 status=ok
// SIG undefined FUN_145bb81a8(void)

longlong FUN_145bb81a8(void)

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
  if (DAT_14cb590d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14865d5a9;
    local_40 = &LAB_145fdb4df;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAINodeFollowSettings",&DAT_14cb590d8,
                  &DAT_14865d5a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb590d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8294 FUN_145bb8294 body=228 status=ok
// SIG undefined FUN_145bb8294(void)

longlong FUN_145bb8294(void)

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
  if (DAT_14cb59120 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14865d5ad;
    local_40 = &LAB_145fdb6b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAINodeLeadSettings",&DAT_14cb59120,
                  &DAT_14865d5ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb59120;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8380 FUN_145bb8380 body=228 status=ok
// SIG undefined FUN_145bb8380(void)

longlong FUN_145bb8380(void)

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
  if (DAT_14cb5a038 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14866297b;
    local_40 = &LAB_145fdb88b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_AnimUpdateRateParametersDef",&DAT_14cb5a038,
                  &DAT_14866297a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb846c FUN_145bb846c body=228 status=ok
// SIG undefined FUN_145bb846c(void)

longlong FUN_145bb846c(void)

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
  if (DAT_14cb5b210 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148677217;
    local_40 = &LAB_14614de5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxCameraShake",&DAT_14cb5b210,&DAT_148677216
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5b210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8558 FUN_145bb8558 body=228 status=ok
// SIG undefined FUN_145bb8558(void)

longlong FUN_145bb8558(void)

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
  if (DAT_14cb5bc88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_148680d05;
    local_40 = &LAB_145aee631;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreSliding",&DAT_14cb5bc88,&DAT_148680d04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5bc88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8644 FUN_145bb8644 body=228 status=ok
// SIG undefined FUN_145bb8644(void)

longlong FUN_145bb8644(void)

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
  if (DAT_14cb5bd18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_148680d21;
    local_40 = &LAB_145aee6bd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSwimming",&DAT_14cb5bd18,&DAT_148680d20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5bd18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8730 FUN_145bb8730 body=228 status=ok
// SIG undefined FUN_145bb8730(void)

longlong FUN_145bb8730(void)

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
  if (DAT_14cb5bec0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148681555;
    local_40 = &LAB_145cd7755;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCinematicMode",&DAT_14cb5bec0,&DAT_148681554)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5bec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb881c FUN_145bb881c body=228 status=ok
// SIG undefined FUN_145bb881c(void)

longlong FUN_145bb881c(void)

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
  if (DAT_14cb5c2c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1486851e7;
    local_40 = &LAB_145aee749;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCustomizationData",&DAT_14cb5c2c0,
                  &DAT_1486851e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c2c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8908 FUN_145bb8908 body=228 status=ok
// SIG undefined FUN_145bb8908(void)

longlong FUN_145bb8908(void)

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
  if (DAT_14cb5ce30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14869277f;
    local_40 = &LAB_145d882d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryCategoryDef",&DAT_14cb5ce30,
                  &DAT_14869277e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ce30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb89f4 FUN_145bb89f4 body=228 status=ok
// SIG undefined FUN_145bb89f4(void)

longlong FUN_145bb89f4(void)

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
  if (DAT_14cb5ce60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148692783;
    local_40 = &LAB_145d81cb0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryDiscovererDef",&DAT_14cb5ce60,
                  &DAT_148692782);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ce60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8ae0 FUN_145bb8ae0 body=228 status=ok
// SIG undefined FUN_145bb8ae0(void)

longlong FUN_145bb8ae0(void)

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
  if (DAT_14cb5cf28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148692bd7;
    local_40 = &LAB_145d81f39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryGeneratorDef",&DAT_14cb5cf28,
                  &DAT_148692bd6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cf28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8bcc FUN_145bb8bcc body=228 status=ok
// SIG undefined FUN_145bb8bcc(void)

longlong FUN_145bb8bcc(void)

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
  if (DAT_14cb5cfb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148692beb;
    local_40 = &LAB_145d821c1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryIconSizeDef",&DAT_14cb5cfb8,
                  &DAT_148692bea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cfb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8cb8 FUN_145bb8cb8 body=228 status=ok
// SIG undefined FUN_145bb8cb8(void)

longlong FUN_145bb8cb8(void)

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
  if (DAT_14cb5cfe8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148692bef;
    local_40 = &LAB_1460723ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryInWorldIndicatorDef",
                  &DAT_14cb5cfe8,&DAT_148692bee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cfe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8da4 FUN_145bb8da4 body=228 status=ok
// SIG undefined FUN_145bb8da4(void)

longlong FUN_145bb8da4(void)

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
  if (DAT_14cb5d090 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148692d03;
    local_40 = &LAB_146022597;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryLocationMetaData",&DAT_14cb5d090,
                  &DAT_148692d02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8e90 FUN_145bb8e90 body=228 status=ok
// SIG undefined FUN_145bb8e90(void)

longlong FUN_145bb8e90(void)

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
  if (DAT_14cb5d0d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148692d0f;
    local_40 = &LAB_146072640;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryLocationTypeDef",&DAT_14cb5d0d8,
                  &DAT_148692d0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d0d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb8f7c FUN_145bb8f7c body=228 status=ok
// SIG undefined FUN_145bb8f7c(void)

longlong FUN_145bb8f7c(void)

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
  if (DAT_14cb5d1a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148696275;
    local_40 = &LAB_146072892;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryPresentationDef",&DAT_14cb5d1a0,
                  &DAT_148696274);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d1a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9068 FUN_145bb9068 body=228 status=ok
// SIG undefined FUN_145bb9068(void)

longlong FUN_145bb9068(void)

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
  if (DAT_14cb5d308 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486962dd;
    local_40 = &LAB_146079b1f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryRegionMapDef",&DAT_14cb5d308,
                  &DAT_1486962dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d308;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9154 FUN_145bb9154 body=228 status=ok
// SIG undefined FUN_145bb9154(void)

longlong FUN_145bb9154(void)

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
  if (DAT_14cb5d568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486963dd;
    local_40 = &LAB_145d82449;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryViewableMapBehaviorDef",
                  &DAT_14cb5d568,&DAT_1486963dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9240 FUN_145bb9240 body=228 status=ok
// SIG undefined FUN_145bb9240(void)

longlong FUN_145bb9240(void)

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
  if (DAT_14cb5d598 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486963e1;
    local_40 = &LAB_146072ae4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryViewableMapDef",&DAT_14cb5d598,
                  &DAT_1486963e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb932c FUN_145bb932c body=228 status=ok
// SIG undefined FUN_145bb932c(void)

longlong FUN_145bb932c(void)

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
  if (DAT_14cb5d628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148696413;
    local_40 = &LAB_145fd102c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxDiscoveryViewableMapMetaData",
                  &DAT_14cb5d628,&DAT_148696412);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9418 FUN_145bb9418 body=228 status=ok
// SIG undefined FUN_145bb9418(void)

longlong FUN_145bb9418(void)

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
  if (DAT_14cb5dc40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14869c0d3;
    local_40 = &LAB_145d0fd2f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxEntitlement",&DAT_14cb5dc40,
                  &DAT_14869c0d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5dc40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9504 FUN_145bb9504 body=228 status=ok
// SIG undefined FUN_145bb9504(void)

longlong FUN_145bb9504(void)

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
  if (DAT_14cb5ddd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14869e507;
    local_40 = &LAB_145aee7d5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxFeedbackDef",&DAT_14cb5ddd0,&DAT_14869e506
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ddd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb95f0 FUN_145bb95f0 body=228 status=ok
// SIG undefined FUN_145bb95f0(void)

longlong FUN_145bb95f0(void)

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
  if (DAT_14cb5df40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14869e741;
    local_40 = &LAB_145d826d1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxFlyToActorConfigDef",&DAT_14cb5df40,
                  &DAT_14869e740);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5df40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb96dc FUN_145bb96dc body=228 status=ok
// SIG undefined FUN_145bb96dc(void)

longlong FUN_145bb96dc(void)

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
  if (DAT_14cb5e840 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486a7d99;
    local_40 = &LAB_145cd795f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxGameModeModuleEvent",&DAT_14cb5e840,
                  &DAT_1486a7d98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb97c8 FUN_145bb97c8 body=228 status=ok
// SIG undefined FUN_145bb97c8(void)

longlong FUN_145bb97c8(void)

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
  if (DAT_14cb5eae0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486ac4e1;
    local_40 = &LAB_145c5ebd2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxGameModePhaseDef",&DAT_14cb5eae0,
                  &DAT_1486ac4e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5eae0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb98b4 FUN_145bb98b4 body=228 status=ok
// SIG undefined FUN_145bb98b4(void)

longlong FUN_145bb98b4(void)

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
  if (DAT_14cb5f710 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486b8d69;
    local_40 = &LAB_145fd11fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreIngredients",&DAT_14cb5f710,&DAT_1486b8d68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5f710;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb99a0 FUN_145bb99a0 body=228 status=ok
// SIG undefined FUN_145bb99a0(void)

longlong FUN_145bb99a0(void)

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
  if (DAT_14cb5fd30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486b8e4d;
    local_40 = &LAB_145cd176b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxItemBreakDown",&DAT_14cb5fd30,
                  &DAT_1486b8e4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fd30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9a8c FUN_145bb9a8c body=228 status=ok
// SIG undefined FUN_145bb9a8c(void)

longlong FUN_145bb9a8c(void)

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
  if (DAT_14cb5fde0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486c0e9d;
    local_40 = &LAB_145c68d5e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxItemFilter",&DAT_14cb5fde0,&DAT_1486c0e9c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fde0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9b78 FUN_145bb9b78 body=228 status=ok
// SIG undefined FUN_145bb9b78(void)

longlong FUN_145bb9b78(void)

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
  if (DAT_14cb5fec0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_1486c1021;
    local_40 = FUN_1464ea3c4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_RoadConnector",&DAT_14cb5fec0,
                  &DAT_1486c1020);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9c64 FUN_145bb9c64 body=228 status=ok
// SIG undefined FUN_145bb9c64(void)

longlong FUN_145bb9c64(void)

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
  if (DAT_14cb600a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_1486c109f;
    local_40 = FUN_1464eadc2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_GbxLevelSequenceActor",&DAT_14cb600a0,
                  &DAT_1486c109e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb600a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9d50 FUN_145bb9d50 body=228 status=ok
// SIG undefined FUN_145bb9d50(void)

longlong FUN_145bb9d50(void)

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
  if (DAT_14cb60358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486c4d9f;
    local_40 = &LAB_145fe0bc4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLevelStationType",&DAT_14cb60358,
                  &DAT_1486c4d9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9e3c FUN_145bb9e3c body=228 status=ok
// SIG undefined FUN_145bb9e3c(void)

longlong FUN_145bb9e3c(void)

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
  if (DAT_14cb60430 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486c4dd5;
    local_40 = &LAB_145d10083;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLoadingScreenDataDefs",&DAT_14cb60430,
                  &DAT_1486c4dd4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60430;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bb9f28 FUN_145bb9f28 body=228 status=ok
// SIG undefined FUN_145bb9f28(void)

longlong FUN_145bb9f28(void)

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
  if (DAT_14cb61758 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486db845;
    local_40 = &LAB_145cd7b69;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxMusic",&DAT_14cb61758,&DAT_1486db844);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61758;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba014 FUN_145bba014 body=228 status=ok
// SIG undefined FUN_145bba014(void)

longlong FUN_145bba014(void)

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
  if (DAT_14cb61a10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486dbbc5;
    local_40 = &LAB_145cd7d73;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxOpportunisticAmbientAudio",&DAT_14cb61a10
                  ,&DAT_1486dbbc4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61a10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba100 FUN_145bba100 body=228 status=ok
// SIG undefined FUN_145bba100(void)

longlong FUN_145bba100(void)

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
  if (DAT_14cb61b60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486dc107;
    local_40 = &LAB_145cd7f7d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxPlayerBot",&DAT_14cb61b60,&DAT_1486dc106)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61b60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba1ec FUN_145bba1ec body=228 status=ok
// SIG undefined FUN_145bba1ec(void)

longlong FUN_145bba1ec(void)

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
  if (DAT_14cb61d98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1486dfab7;
    local_40 = &LAB_145aee861;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStorePlayerGroup",&DAT_14cb61d98,&DAT_1486dfab6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61d98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba2d8 FUN_145bba2d8 body=228 status=ok
// SIG undefined FUN_145bba2d8(void)

longlong FUN_145bba2d8(void)

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
  if (DAT_14cb62288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486e0a2d;
    local_40 = &LAB_145cd8187;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxProgressionCommandListDef",&DAT_14cb62288
                  ,&DAT_1486e0a2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba3c4 FUN_145bba3c4 body=228 status=ok
// SIG undefined FUN_145bba3c4(void)

longlong FUN_145bba3c4(void)

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
  if (DAT_14cb62448 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486e4f3f;
    local_40 = &LAB_145fd716b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxProgressPointPoolDef",&DAT_14cb62448,
                  &DAT_1486e4f3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba4b0 FUN_145bba4b0 body=228 status=ok
// SIG undefined FUN_145bba4b0(void)

longlong FUN_145bba4b0(void)

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
  if (DAT_14cb625f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486e4f8f;
    local_40 = &LAB_145c9a625;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxRadioScript",&DAT_14cb625f8,
                  &DAT_1486e4f8e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb625f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba59c FUN_145bba59c body=228 status=ok
// SIG undefined FUN_145bba59c(void)

longlong FUN_145bba59c(void)

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
  if (DAT_14cb62658 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486e4f93;
    local_40 = &LAB_145cd8391;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxRadioStation",&DAT_14cb62658,
                  &DAT_1486e4f92);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62658;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba688 FUN_145bba688 body=228 status=ok
// SIG undefined FUN_145bba688(void)

longlong FUN_145bba688(void)

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
  if (DAT_14cb62670 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458cc2f2;
    local_38 = &LAB_1486e4f97;
    local_40 = FUN_1464f8579;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxRadioSystem",&DAT_14cb62670,&DAT_1486e4f96);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62670;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba774 FUN_145bba774 body=228 status=ok
// SIG undefined FUN_145bba774(void)

longlong FUN_145bba774(void)

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
  if (DAT_14cb626a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486e4fed;
    local_40 = &LAB_14603fbee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x400;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreRecipes",&DAT_14cb626a0,&DAT_1486e4fec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb626a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba860 FUN_145bba860 body=228 status=ok
// SIG undefined FUN_145bba860(void)

longlong FUN_145bba860(void)

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
  if (DAT_14cb628f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486e7807;
    local_40 = &LAB_145fd733d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxRewardsDef",&DAT_14cb628f0,&DAT_1486e7806
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb628f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bba94c FUN_145bba94c body=228 status=ok
// SIG undefined FUN_145bba94c(void)

longlong FUN_145bba94c(void)

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
  if (DAT_14cb62fd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1486ed413;
    local_40 = &LAB_145aee8ed;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxRumbleDef",&DAT_14cb62fd0,&DAT_1486ed412);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb62fd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbaa38 FUN_145bbaa38 body=228 status=ok
// SIG undefined FUN_145bbaa38(void)

longlong FUN_145bbaa38(void)

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
  if (DAT_14cb63018 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1486ed41b;
    local_40 = &LAB_145c26fa2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSceneViewerDef",&DAT_14cb63018,
                  &DAT_1486ed41a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbab24 FUN_145bbab24 body=228 status=ok
// SIG undefined FUN_145bbab24(void)

longlong FUN_145bbab24(void)

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
  if (DAT_14cb63808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_1486f4d1d;
    local_40 = FUN_1464fe2f2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_GbxShotOriginActor",&DAT_14cb63808,
                  &DAT_1486f4d1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbac16 FUN_145bbac16 body=228 status=ok
// SIG undefined FUN_145bbac16(void)

longlong FUN_145bbac16(void)

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
  if (DAT_14cb64480 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411827ec;
    local_38 = &LAB_1487046d1;
    local_40 = FUN_1418573eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillChannel",&DAT_14cb64480,&DAT_1487046d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64480;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbad02 FUN_145bbad02 body=228 status=ok
// SIG undefined FUN_145bbad02(void)

longlong FUN_145bbad02(void)

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
  if (DAT_14cb664a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148728157;
    local_40 = &LAB_14609b30f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxStandInSceneDef",&DAT_14cb664a8,
                  &DAT_148728156);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb664a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbadee FUN_145bbadee body=228 status=ok
// SIG undefined FUN_145bbadee(void)

longlong FUN_145bbadee(void)

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
  if (DAT_14cb67b18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14873f747;
    local_40 = &LAB_145c426b0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSymphonicAmbientAudio",&DAT_14cb67b18,
                  &DAT_14873f746);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67b18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbaee6 FUN_145bbaee6 body=228 status=ok
// SIG undefined FUN_145bbaee6(void)

longlong FUN_145bbaee6(void)

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
  if (DAT_14cb68798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148744cb3;
    local_40 = &LAB_145fe0d9f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_UIRewardTier",&DAT_14cb68798,&DAT_148744cb2)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbafd2 FUN_145bbafd2 body=228 status=ok
// SIG undefined FUN_145bbafd2(void)

longlong FUN_145bbafd2(void)

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
  if (DAT_14cb687c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148744cb7;
    local_40 = &LAB_145ce1838;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_UIRewardType",&DAT_14cb687c8,&DAT_148744cb6)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb687c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb0be FUN_145bbb0be body=228 status=ok
// SIG undefined FUN_145bbb0be(void)

longlong FUN_145bbb0be(void)

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
  if (DAT_14cb68870 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148744cc3;
    local_40 = &LAB_145d172d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_StatDisplay",&DAT_14cb68870,&DAT_148744cc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb1aa FUN_145bbb1aa body=228 status=ok
// SIG undefined FUN_145bbb1aa(void)

longlong FUN_145bbb1aa(void)

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
  if (DAT_14cb68888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148744cc7;
    local_40 = &LAB_145ce1a4b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_StatDisplayGroup",&DAT_14cb68888,
                  &DAT_148744cc6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb296 FUN_145bbb296 body=228 status=ok
// SIG undefined FUN_145bbb296(void)

longlong FUN_145bbb296(void)

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
  if (DAT_14cb68c78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148747983;
    local_40 = FUN_14651d82c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxWorldDebugger_ImGui_Settings",&DAT_14cb68c78,
                  &DAT_148747982);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68c78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb382 FUN_145bbb382 body=228 status=ok
// SIG undefined FUN_145bbb382(void)

longlong FUN_145bbb382(void)

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
  if (DAT_14cb69908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148755ba1;
    local_40 = &LAB_145d829ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreImpactEffectCollection",&DAT_14cb69908,
                  &DAT_148755ba0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb46e FUN_145bbb46e body=228 status=ok
// SIG undefined FUN_145bbb46e(void)

longlong FUN_145bbb46e(void)

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
  if (DAT_14cb6a9e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_148768e69;
    local_40 = &LAB_145c01a21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLanding",&DAT_14cb6a9e0,&DAT_148768e68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a9e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb55a FUN_145bbb55a body=228 status=ok
// SIG undefined FUN_145bbb55a(void)

longlong FUN_145bbb55a(void)

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
  if (DAT_14cb6b5d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_1487740cd;
    local_40 = &LAB_145aee979;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreManagedActor",&DAT_14cb6b5d8,&DAT_1487740cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b5d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb646 FUN_145bbb646 body=228 status=ok
// SIG undefined FUN_145bbb646(void)

longlong FUN_145bbb646(void)

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
  if (DAT_14cb6b6a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14877446d;
    local_40 = &LAB_145aeea05;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMantle",&DAT_14cb6b6a0,&DAT_14877446c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b6a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb732 FUN_145bbb732 body=228 status=ok
// SIG undefined FUN_145bbb732(void)

longlong FUN_145bbb732(void)

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
  if (DAT_14cb6bc48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_148777523;
    local_40 = &LAB_145cd1971;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMissionArchetype",&DAT_14cb6bc48,
                  &DAT_148777522);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6bc48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb81e FUN_145bbb81e body=228 status=ok
// SIG undefined FUN_145bbb81e(void)

longlong FUN_145bbb81e(void)

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
  if (DAT_14cb6cec0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5d7;
    local_40 = &LAB_145d103d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAimAssistParameters",&DAT_14cb6cec0,
                  &DAT_14878d5d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cec0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb90a FUN_145bbb90a body=228 status=ok
// SIG undefined FUN_145bbb90a(void)

longlong FUN_145bbb90a(void)

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
  if (DAT_14cb6ced8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5db;
    local_40 = &LAB_145d63bc0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarArchetypes",&DAT_14cb6ced8,
                  &DAT_14878d5da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ced8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbb9f6 FUN_145bbb9f6 body=228 status=ok
// SIG undefined FUN_145bbb9f6(void)

longlong FUN_145bbb9f6(void)

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
  if (DAT_14cb6cef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5df;
    local_40 = &LAB_145d63e39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarAspects",&DAT_14cb6cef0,&DAT_14878d5de)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbbae2 FUN_145bbbae2 body=228 status=ok
// SIG undefined FUN_145bbbae2(void)

longlong FUN_145bbbae2(void)

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
  if (DAT_14cb6cf08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878d5e3;
    local_40 = &LAB_145ce0b26;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x368;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarFeatures",&DAT_14cb6cf08,&DAT_14878d5e2
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbbbce FUN_145bbbbce body=228 status=ok
// SIG undefined FUN_145bbbbce(void)

longlong FUN_145bbbbce(void)

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
  if (DAT_14cb6cf20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5e7;
    local_40 = &LAB_145d640b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarForms",&DAT_14cb6cf20,&DAT_14878d5e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbbcba FUN_145bbbcba body=228 status=ok
// SIG undefined FUN_145bbbcba(void)

longlong FUN_145bbbcba(void)

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
  if (DAT_14cb6cf38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5eb;
    local_40 = &LAB_145d64329;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarMaterialDrivers",&DAT_14cb6cf38,
                  &DAT_14878d5ea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbbda6 FUN_145bbbda6 body=228 status=ok
// SIG undefined FUN_145bbbda6(void)

longlong FUN_145bbbda6(void)

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
  if (DAT_14cb6cf50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878d5ef;
    local_40 = &LAB_145cbbb31;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x370;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarParts",&DAT_14cb6cf50,&DAT_14878d5ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbbe92 FUN_145bbbe92 body=228 status=ok
// SIG undefined FUN_145bbbe92(void)

longlong FUN_145bbbe92(void)

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
  if (DAT_14cb6cf68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5f3;
    local_40 = &LAB_145bc9d6a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarRequirements",&DAT_14cb6cf68,
                  &DAT_14878d5f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbbf7e FUN_145bbbf7e body=228 status=ok
// SIG undefined FUN_145bbbf7e(void)

longlong FUN_145bbbf7e(void)

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
  if (DAT_14cb6cf80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d5f7;
    local_40 = &LAB_145d39eb3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreAvatarSelectors",&DAT_14cb6cf80,
                  &DAT_14878d5f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc06a FUN_145bbc06a body=228 status=ok
// SIG undefined FUN_145bbc06a(void)

longlong FUN_145bbc06a(void)

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
  if (DAT_14cb6cf98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878d5fb;
    local_40 = &LAB_145c9797b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCameraModeBehavior",&DAT_14cb6cf98,
                  &DAT_14878d5fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cf98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc156 FUN_145bbc156 body=228 status=ok
// SIG undefined FUN_145bbc156(void)

longlong FUN_145bbc156(void)

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
  if (DAT_14cb6cfb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878d5ff;
    local_40 = &LAB_145c97a62;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCameraModeTransition",&DAT_14cb6cfb0,
                  &DAT_14878d5fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cfb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc242 FUN_145bbc242 body=228 status=ok
// SIG undefined FUN_145bbc242(void)

longlong FUN_145bbc242(void)

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
  if (DAT_14cb6cfc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d603;
    local_40 = &LAB_145aeea91;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCameraMode",&DAT_14cb6cfc8,&DAT_14878d602);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cfc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc32e FUN_145bbc32e body=228 status=ok
// SIG undefined FUN_145bbc32e(void)

longlong FUN_145bbc32e(void)

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
  if (DAT_14cb6cfe0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d607;
    local_40 = &LAB_145aeeb1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCameraTransition",&DAT_14cb6cfe0,
                  &DAT_14878d606);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cfe0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc41a FUN_145bbc41a body=228 status=ok
// SIG undefined FUN_145bbc41a(void)

longlong FUN_145bbc41a(void)

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
  if (DAT_14cb6cff8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d60b;
    local_40 = &LAB_145d1072b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCapital",&DAT_14cb6cff8,&DAT_14878d60a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6cff8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc506 FUN_145bbc506 body=228 status=ok
// SIG undefined FUN_145bbc506(void)

longlong FUN_145bbc506(void)

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
  if (DAT_14cb6d010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d60f;
    local_40 = &LAB_145d82c33;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreCoordinatedEffectFilter",&DAT_14cb6d010,
                  &DAT_14878d60e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc5f2 FUN_145bbc5f2 body=228 status=ok
// SIG undefined FUN_145bbc5f2(void)

longlong FUN_145bbc5f2(void)

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
  if (DAT_14cb6d028 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d613;
    local_40 = &LAB_145d82ebb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreHealthType",&DAT_14cb6d028,&DAT_14878d612);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc6de FUN_145bbc6de body=228 status=ok
// SIG undefined FUN_145bbc6de(void)

longlong FUN_145bbc6de(void)

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
  if (DAT_14cb6d040 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d617;
    local_40 = &LAB_145d83143;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDamageType",&DAT_14cb6d040,&DAT_14878d616);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d040;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc7ca FUN_145bbc7ca body=228 status=ok
// SIG undefined FUN_145bbc7ca(void)

longlong FUN_145bbc7ca(void)

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
  if (DAT_14cb6d058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d61b;
    local_40 = &LAB_146072d36;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDamageSource",&DAT_14cb6d058,&DAT_14878d61a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc8b6 FUN_145bbc8b6 body=228 status=ok
// SIG undefined FUN_145bbc8b6(void)

longlong FUN_145bbc8b6(void)

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
  if (DAT_14cb6d070 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d61f;
    local_40 = &LAB_145dec43a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDamageModifier",&DAT_14cb6d070,&DAT_14878d61e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbc9a2 FUN_145bbc9a2 body=228 status=ok
// SIG undefined FUN_145bbc9a2(void)

longlong FUN_145bbc9a2(void)

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
  if (DAT_14cb6d088 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d623;
    local_40 = &LAB_145c6ecdc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDamage",&DAT_14cb6d088,&DAT_14878d622);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d088;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbca8e FUN_145bbca8e body=228 status=ok
// SIG undefined FUN_145bbca8e(void)

longlong FUN_145bbca8e(void)

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
  if (DAT_14cb6d0a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d627;
    local_40 = &LAB_146072f88;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDamageFilter",&DAT_14cb6d0a0,&DAT_14878d626);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d0a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbcb7a FUN_145bbcb7a body=228 status=ok
// SIG undefined FUN_145bbcb7a(void)

longlong FUN_145bbcb7a(void)

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
  if (DAT_14cb6d0b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d62b;
    local_40 = &LAB_145c56b44;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogEchoPresentations",&DAT_14cb6d0b8,
                  &DAT_14878d62a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d0b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbcc66 FUN_145bbcc66 body=228 status=ok
// SIG undefined FUN_145bbcc66(void)

longlong FUN_145bbcc66(void)

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
  if (DAT_14cb6d0d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d62f;
    local_40 = &LAB_145aeeba9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogEvents",&DAT_14cb6d0d0,&DAT_14878d62e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d0d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbcd52 FUN_145bbcd52 body=228 status=ok
// SIG undefined FUN_145bbcd52(void)

longlong FUN_145bbcd52(void)

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
  if (DAT_14cb6d0e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d633;
    local_40 = &LAB_145fd750f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogNameTags",&DAT_14cb6d0e8,&DAT_14878d632
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d0e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbce3e FUN_145bbce3e body=228 status=ok
// SIG undefined FUN_145bbce3e(void)

longlong FUN_145bbce3e(void)

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
  if (DAT_14cb6d100 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d637;
    local_40 = &LAB_145aeec35;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogQuietTimes",&DAT_14cb6d100,
                  &DAT_14878d636);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbcf2a FUN_145bbcf2a body=228 status=ok
// SIG undefined FUN_145bbcf2a(void)

longlong FUN_145bbcf2a(void)

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
  if (DAT_14cb6d118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878d63b;
    local_40 = &LAB_1459de3c3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x458;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogScripts",&DAT_14cb6d118,&DAT_14878d63a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd016 FUN_145bbd016 body=228 status=ok
// SIG undefined FUN_145bbd016(void)

longlong FUN_145bbd016(void)

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
  if (DAT_14cb6d130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d63f;
    local_40 = &LAB_145aeecc1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreDialogStyles",&DAT_14cb6d130,&DAT_14878d63e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd102 FUN_145bbd102 body=228 status=ok
// SIG undefined FUN_145bbd102(void)

longlong FUN_145bbd102(void)

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
  if (DAT_14cb6d148 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d643;
    local_40 = &LAB_146079d7b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreEffectRelevance",&DAT_14cb6d148,
                  &DAT_14878d642);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d148;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd1ee FUN_145bbd1ee body=228 status=ok
// SIG undefined FUN_145bbd1ee(void)

longlong FUN_145bbd1ee(void)

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
  if (DAT_14cb6d160 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d647;
    local_40 = &LAB_145d10a7f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreExperienceProgression",&DAT_14cb6d160,
                  &DAT_14878d646);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd2da FUN_145bbd2da body=228 status=ok
// SIG undefined FUN_145bbd2da(void)

longlong FUN_145bbd2da(void)

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
  if (DAT_14cb6d178 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e2cca;
    local_38 = &LAB_14878d64b;
    local_40 = &LAB_145a47c95;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGameMode",&DAT_14cb6d178,&DAT_14878d64a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd3c6 FUN_145bbd3c6 body=228 status=ok
// SIG undefined FUN_145bbd3c6(void)

longlong FUN_145bbd3c6(void)

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
  if (DAT_14cb6d190 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d64f;
    local_40 = &LAB_145d833cb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGameResource",&DAT_14cb6d190,&DAT_14878d64e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd4b2 FUN_145bbd4b2 body=228 status=ok
// SIG undefined FUN_145bbd4b2(void)

longlong FUN_145bbd4b2(void)

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
  if (DAT_14cb6d1a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d653;
    local_40 = &LAB_145d8855d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGameResourcePool",&DAT_14cb6d1a8,
                  &DAT_14878d652);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd59e FUN_145bbd59e body=228 status=ok
// SIG undefined FUN_145bbd59e(void)

longlong FUN_145bbd59e(void)

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
  if (DAT_14cb6d1c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d657;
    local_40 = &LAB_145aeed4d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreJumpGoal",&DAT_14cb6d1c0,&DAT_14878d656);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d1c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd68a FUN_145bbd68a body=228 status=ok
// SIG undefined FUN_145bbd68a(void)

longlong FUN_145bbd68a(void)

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
  if (DAT_14cb6d1d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d65b;
    local_40 = &LAB_145aeedd9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreJumpGoalCollection",&DAT_14cb6d1d8,
                  &DAT_14878d65a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d1d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd776 FUN_145bbd776 body=228 status=ok
// SIG undefined FUN_145bbd776(void)

longlong FUN_145bbd776(void)

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
  if (DAT_14cb6d1f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878d65f;
    local_40 = &LAB_145aeee65;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxCharacterMovement",&DAT_14cb6d1f0,
                  &DAT_14878d65e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd862 FUN_145bbd862 body=228 status=ok
// SIG undefined FUN_145bbd862(void)

longlong FUN_145bbd862(void)

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
  if (DAT_14cb6d208 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d663;
    local_40 = &LAB_145d17631;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxClosedCaption",&DAT_14cb6d208,
                  &DAT_14878d662);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d208;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbd94e FUN_145bbd94e body=228 status=ok
// SIG undefined FUN_145bbd94e(void)

longlong FUN_145bbd94e(void)

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
  if (DAT_14cb6d220 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d667;
    local_40 = &LAB_145cd859b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputAction",&DAT_14cb6d220,&DAT_14878d666
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbda3a FUN_145bbda3a body=228 status=ok
// SIG undefined FUN_145bbda3a(void)

longlong FUN_145bbda3a(void)

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
  if (DAT_14cb6d238 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d66b;
    local_40 = &LAB_145cd87a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputActionGroup",&DAT_14cb6d238,
                  &DAT_14878d66a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d238;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbdb26 FUN_145bbdb26 body=228 status=ok
// SIG undefined FUN_145bbdb26(void)

longlong FUN_145bbdb26(void)

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
  if (DAT_14cb6d250 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d66f;
    local_40 = &LAB_145cd89af;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputContext",&DAT_14cb6d250,
                  &DAT_14878d66e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d250;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbdc12 FUN_145bbdc12 body=228 status=ok
// SIG undefined FUN_145bbdc12(void)

longlong FUN_145bbdc12(void)

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
  if (DAT_14cb6d268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d673;
    local_40 = &LAB_145d10dd3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputFeel",&DAT_14cb6d268,&DAT_14878d672);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbdcfe FUN_145bbdcfe body=228 status=ok
// SIG undefined FUN_145bbdcfe(void)

longlong FUN_145bbdcfe(void)

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
  if (DAT_14cb6d280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d677;
    local_40 = &LAB_145cd8bb9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputKeyRebind",&DAT_14cb6d280,
                  &DAT_14878d676);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbddea FUN_145bbddea body=228 status=ok
// SIG undefined FUN_145bbddea(void)

longlong FUN_145bbddea(void)

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
  if (DAT_14cb6d298 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d67b;
    local_40 = &LAB_145cd8dc3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputRebindContext",&DAT_14cb6d298,
                  &DAT_14878d67a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d298;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbded6 FUN_145bbded6 body=228 status=ok
// SIG undefined FUN_145bbded6(void)

longlong FUN_145bbded6(void)

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
  if (DAT_14cb6d2b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d67f;
    local_40 = &LAB_145c05353;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxInputSchema",&DAT_14cb6d2b0,&DAT_14878d67e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d2b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbdfc2 FUN_145bbdfc2 body=228 status=ok
// SIG undefined FUN_145bbdfc2(void)

longlong FUN_145bbdfc2(void)

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
  if (DAT_14cb6d2c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d683;
    local_40 = &LAB_1460731da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxMaterialParameter",&DAT_14cb6d2c8,
                  &DAT_14878d682);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d2c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe0ae FUN_145bbe0ae body=228 status=ok
// SIG undefined FUN_145bbe0ae(void)

longlong FUN_145bbe0ae(void)

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
  if (DAT_14cb6d2e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d687;
    local_40 = &LAB_14604b455;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3f8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxProgressGraph",&DAT_14cb6d2e0,
                  &DAT_14878d686);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d2e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe19a FUN_145bbe19a body=228 status=ok
// SIG undefined FUN_145bbe19a(void)

longlong FUN_145bbe19a(void)

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
  if (DAT_14cb6d2f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d68b;
    local_40 = &LAB_145fd76e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxProgressGraphGroup",&DAT_14cb6d2f8,
                  &DAT_14878d68a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d2f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe286 FUN_145bbe286 body=228 status=ok
// SIG undefined FUN_145bbe286(void)

longlong FUN_145bbe286(void)

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
  if (DAT_14cb6d310 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d68f;
    local_40 = &LAB_145fd78b3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxProgression",&DAT_14cb6d310,&DAT_14878d68e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d310;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe372 FUN_145bbe372 body=228 status=ok
// SIG undefined FUN_145bbe372(void)

longlong FUN_145bbe372(void)

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
  if (DAT_14cb6d328 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d693;
    local_40 = &LAB_145fd7a85;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkill",&DAT_14cb6d328,&DAT_14878d692);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d328;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe45e FUN_145bbe45e body=228 status=ok
// SIG undefined FUN_145bbe45e(void)

longlong FUN_145bbe45e(void)

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
  if (DAT_14cb6d340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d697;
    local_40 = &LAB_145cd8fcd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillActionExecFilter",&DAT_14cb6d340,
                  &DAT_14878d696);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe54a FUN_145bbe54a body=228 status=ok
// SIG undefined FUN_145bbe54a(void)

longlong FUN_145bbe54a(void)

{
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  wchar_t *pwStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6d358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d69b;
    puStack_40 = &LAB_145fd7c57;
    pwStack_48 = L"Engine";
    uStack_50 = 0;
    uStack_58 = 0x10000006;
    uStack_60 = 8;
    uStack_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillAlias",&DAT_14cb6d358,&DAT_14878d69a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe636 FUN_145bbe636 body=228 status=ok
// SIG undefined FUN_145bbe636(void)

longlong FUN_145bbe636(void)

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
  if (DAT_14cb6d370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d69f;
    local_40 = &LAB_145cdcd60;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillComponentIdentifier",&DAT_14cb6d370,
                  &DAT_14878d69e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe722 FUN_145bbe722 body=228 status=ok
// SIG undefined FUN_145bbe722(void)

longlong FUN_145bbe722(void)

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
  if (DAT_14cb6d388 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d6a3;
    local_40 = &LAB_145fd7e29;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillCondition",&DAT_14cb6d388,
                  &DAT_14878d6a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe80e FUN_145bbe80e body=228 status=ok
// SIG undefined FUN_145bbe80e(void)

longlong FUN_145bbe80e(void)

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
  if (DAT_14cb6d3a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d6a7;
    local_40 = &LAB_145c2b9d2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillEffect",&DAT_14cb6d3a0,&DAT_14878d6a6
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d3a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe8fa FUN_145bbe8fa body=228 status=ok
// SIG undefined FUN_145bbe8fa(void)

longlong FUN_145bbe8fa(void)

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
  if (DAT_14cb6d3b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d6ab;
    local_40 = &LAB_145c0555f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillEvent",&DAT_14cb6d3b8,&DAT_14878d6aa)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d3b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbe9e6 FUN_145bbe9e6 body=228 status=ok
// SIG undefined FUN_145bbe9e6(void)

longlong FUN_145bbe9e6(void)

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
  if (DAT_14cb6d3d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878d6af;
    local_40 = &LAB_145d0039d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillLibrary",&DAT_14cb6d3d0,
                  &DAT_14878d6ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d3d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbead2 FUN_145bbead2 body=228 status=ok
// SIG undefined FUN_145bbead2(void)

longlong FUN_145bbead2(void)

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
  if (DAT_14cb6d3f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea1b;
    local_40 = &LAB_145cd91d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillManagedResourceGroup",&DAT_14cb6d3f0,
                  &DAT_14878ea1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d3f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbebbe FUN_145bbebbe body=228 status=ok
// SIG undefined FUN_145bbebbe(void)

longlong FUN_145bbebbe(void)

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
  if (DAT_14cb6d408 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea1f;
    local_40 = &LAB_145fd7ffb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillState",&DAT_14cb6d408,&DAT_14878ea1e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d408;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbecaa FUN_145bbecaa body=228 status=ok
// SIG undefined FUN_145bbecaa(void)

longlong FUN_145bbecaa(void)

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
  if (DAT_14cb6d420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea23;
    local_40 = &LAB_145cd93e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillStateCondition",&DAT_14cb6d420,
                  &DAT_14878ea22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbed96 FUN_145bbed96 body=228 status=ok
// SIG undefined FUN_145bbed96(void)

longlong FUN_145bbed96(void)

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
  if (DAT_14cb6d438 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878ea27;
    local_40 = &LAB_145cd1b77;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillStateMachine",&DAT_14cb6d438,
                  &DAT_14878ea26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d438;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbee82 FUN_145bbee82 body=228 status=ok
// SIG undefined FUN_145bbee82(void)

longlong FUN_145bbee82(void)

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
  if (DAT_14cb6d450 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea2b;
    local_40 = &LAB_145cd95eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillTargetList",&DAT_14cb6d450,
                  &DAT_14878ea2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d450;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbef6e FUN_145bbef6e body=228 status=ok
// SIG undefined FUN_145bbef6e(void)

longlong FUN_145bbef6e(void)

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
  if (DAT_14cb6d468 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea2f;
    local_40 = &LAB_145cd97f5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxSkillTargetResolutionStrategy",
                  &DAT_14cb6d468,&DAT_14878ea2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf05a FUN_145bbf05a body=228 status=ok
// SIG undefined FUN_145bbf05a(void)

longlong FUN_145bbf05a(void)

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
  if (DAT_14cb6d480 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea33;
    local_40 = &LAB_145cd99ff;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxStatusEffectPushEvent",&DAT_14cb6d480,
                  &DAT_14878ea32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d480;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf146 FUN_145bbf146 body=228 status=ok
// SIG undefined FUN_145bbf146(void)

longlong FUN_145bbf146(void)

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
  if (DAT_14cb6d498 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea37;
    local_40 = &LAB_145cd9c09;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxStatusEffectRule",&DAT_14cb6d498,
                  &DAT_14878ea36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d498;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf232 FUN_145bbf232 body=228 status=ok
// SIG undefined FUN_145bbf232(void)

longlong FUN_145bbf232(void)

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
  if (DAT_14cb6d4b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea3b;
    local_40 = &LAB_145cd9e13;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxStatusEffectSeverityChannel",
                  &DAT_14cb6d4b0,&DAT_14878ea3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d4b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf31e FUN_145bbf31e body=228 status=ok
// SIG undefined FUN_145bbf31e(void)

longlong FUN_145bbf31e(void)

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
  if (DAT_14cb6d4c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea3f;
    local_40 = &LAB_145fd81cd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGbxStatusEffectTickGroup",&DAT_14cb6d4c8,
                  &DAT_14878ea3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d4c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf40a FUN_145bbf40a body=228 status=ok
// SIG undefined FUN_145bbf40a(void)

longlong FUN_145bbf40a(void)

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
  if (DAT_14cb6d4e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878ea43;
    local_40 = &LAB_145bdb216;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGimme",&DAT_14cb6d4e0,&DAT_14878ea42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d4e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf4f6 FUN_145bbf4f6 body=228 status=ok
// SIG undefined FUN_145bbf4f6(void)

longlong FUN_145bbf4f6(void)

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
  if (DAT_14cb6d4f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea47;
    local_40 = &LAB_14607342c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGore",&DAT_14cb6d4f8,&DAT_14878ea46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d4f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf5e2 FUN_145bbf5e2 body=228 status=ok
// SIG undefined FUN_145bbf5e2(void)

longlong FUN_145bbf5e2(void)

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
  if (DAT_14cb6d510 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea4b;
    local_40 = &LAB_145d83653;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreGoreRegion",&DAT_14cb6d510,&DAT_14878ea4a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf6ce FUN_145bbf6ce body=228 status=ok
// SIG undefined FUN_145bbf6ce(void)

longlong FUN_145bbf6ce(void)

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
  if (DAT_14cb6d528 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878ea4f;
    local_40 = &LAB_145aeeef1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStorePuddleHazard",&DAT_14cb6d528,&DAT_14878ea4e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf7ba FUN_145bbf7ba body=228 status=ok
// SIG undefined FUN_145bbf7ba(void)

longlong FUN_145bbf7ba(void)

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
  if (DAT_14cb6d540 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878ea53;
    local_40 = &LAB_145aeef7d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreHazardInteractionState",&DAT_14cb6d540,
                  &DAT_14878ea52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d540;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf8a6 FUN_145bbf8a6 body=228 status=ok
// SIG undefined FUN_145bbf8a6(void)

longlong FUN_145bbf8a6(void)

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
  if (DAT_14cb6d558 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878ea57;
    local_40 = &LAB_145aef009;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreHazardInteraction",&DAT_14cb6d558,
                  &DAT_14878ea56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbf992 FUN_145bbf992 body=228 status=ok
// SIG undefined FUN_145bbf992(void)

longlong FUN_145bbf992(void)

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
  if (DAT_14cb6d570 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea5b;
    local_40 = &LAB_145d838db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreHitRegion",&DAT_14cb6d570,&DAT_14878ea5a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d570;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbfa7e FUN_145bbfa7e body=228 status=ok
// SIG undefined FUN_145bbfa7e(void)

longlong FUN_145bbfa7e(void)

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
  if (DAT_14cb6d588 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878ea5f;
    local_40 = &LAB_145cbe34c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x300;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreImpactResponse",&DAT_14cb6d588,&DAT_14878ea5e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbfb6a FUN_145bbfb6a body=228 status=ok
// SIG undefined FUN_145bbfb6a(void)

longlong FUN_145bbfb6a(void)

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
  if (DAT_14cb6d5a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ea63;
    local_40 = &LAB_146119b72;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3f8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreImpactEffect",&DAT_14cb6d5a0,&DAT_14878ea62);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d5a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbfc56 FUN_145bbfc56 body=228 status=ok
// SIG undefined FUN_145bbfc56(void)

longlong FUN_145bbfc56(void)

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
  if (DAT_14cb6d600 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878ef91;
    local_40 = &LAB_145caf183;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x300;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryAspect",&DAT_14cb6d600,
                  &DAT_14878ef90);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbfd42 FUN_145bbfd42 body=228 status=ok
// SIG undefined FUN_145bbfd42(void)

longlong FUN_145bbfd42(void)

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
  if (DAT_14cb6d618 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ef95;
    local_40 = &LAB_145d83b63;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryCriteriaPreset",&DAT_14cb6d618,
                  &DAT_14878ef94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d618;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbfe2e FUN_145bbfe2e body=228 status=ok
// SIG undefined FUN_145bbfe2e(void)

longlong FUN_145bbfe2e(void)

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
  if (DAT_14cb6d630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ef99;
    local_40 = &LAB_145d83deb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryCriterionPreset",&DAT_14cb6d630,
                  &DAT_14878ef98);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bbff1a FUN_145bbff1a body=228 status=ok
// SIG undefined FUN_145bbff1a(void)

longlong FUN_145bbff1a(void)

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
  if (DAT_14cb6d648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878ef9d;
    local_40 = &LAB_14607d9f3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryCustomization",&DAT_14cb6d648,
                  &DAT_14878ef9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0006 FUN_145bc0006 body=228 status=ok
// SIG undefined FUN_145bc0006(void)

longlong FUN_145bc0006(void)

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
  if (DAT_14cb6d660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878efa1;
    local_40 = &LAB_145ce1c5d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryNamePart",&DAT_14cb6d660,
                  &DAT_14878efa0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc00f2 FUN_145bc00f2 body=228 status=ok
// SIG undefined FUN_145bc00f2(void)

longlong FUN_145bc00f2(void)

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
  if (DAT_14cb6d678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878efa5;
    local_40 = &LAB_145ce50ca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryNameStrategy",&DAT_14cb6d678,
                  &DAT_14878efa4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc01de FUN_145bc01de body=228 status=ok
// SIG undefined FUN_145bc01de(void)

longlong FUN_145bc01de(void)

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
  if (DAT_14cb6d690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878efa9;
    local_40 = &LAB_14603f5a9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryParams",&DAT_14cb6d690,
                  &DAT_14878efa8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc02ca FUN_145bc02ca body=228 status=ok
// SIG undefined FUN_145bc02ca(void)

longlong FUN_145bc02ca(void)

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
  if (DAT_14cb6d6a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878efad;
    local_40 = &LAB_14614e175;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreInventoryRarity",&DAT_14cb6d6a8,
                  &DAT_14878efac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d6a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc03b6 FUN_145bc03b6 body=228 status=ok
// SIG undefined FUN_145bc03b6(void)

longlong FUN_145bc03b6(void)

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
  if (DAT_14cb6d6e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f061;
    local_40 = &LAB_145cda01d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreItemPoolPreferredParts",&DAT_14cb6d6e0,
                  &DAT_14878f060);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d6e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc04a2 FUN_145bc04a2 body=228 status=ok
// SIG undefined FUN_145bc04a2(void)

longlong FUN_145bc04a2(void)

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
  if (DAT_14cb6d718 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f28b;
    local_40 = &LAB_145fd8571;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreItemPoolList",&DAT_14cb6d718,&DAT_14878f28a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc058e FUN_145bc058e body=228 status=ok
// SIG undefined FUN_145bc058e(void)

longlong FUN_145bc058e(void)

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
  if (DAT_14cb6d730 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878f28f;
    local_40 = &LAB_145d887ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x528;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLevels",&DAT_14cb6d730,&DAT_14878f28e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d730;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc067a FUN_145bc067a body=228 status=ok
// SIG undefined FUN_145bc067a(void)

longlong FUN_145bc067a(void)

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
  if (DAT_14cb6d748 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f293;
    local_40 = &LAB_145d84073;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLightBeam",&DAT_14cb6d748,&DAT_14878f292);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d748;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0766 FUN_145bc0766 body=228 status=ok
// SIG undefined FUN_145bc0766(void)

longlong FUN_145bc0766(void)

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
  if (DAT_14cb6d760 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f297;
    local_40 = &LAB_145d842fb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLightProjectile",&DAT_14cb6d760,
                  &DAT_14878f296);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d760;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0852 FUN_145bc0852 body=228 status=ok
// SIG undefined FUN_145bc0852(void)

longlong FUN_145bc0852(void)

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
  if (DAT_14cb6d778 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f29b;
    local_40 = &LAB_14614e48f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreLootConfig",&DAT_14cb6d778,&DAT_14878f29a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d778;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc093e FUN_145bc093e body=228 status=ok
// SIG undefined FUN_145bc093e(void)

longlong FUN_145bc093e(void)

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
  if (DAT_14cb6d790 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f29f;
    local_40 = &LAB_1460787a0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreManufacturer",&DAT_14cb6d790,&DAT_14878f29e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d790;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0a2a FUN_145bc0a2a body=228 status=ok
// SIG undefined FUN_145bc0a2a(void)

longlong FUN_145bc0a2a(void)

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
  if (DAT_14cb6d7a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2ab;
    local_40 = &LAB_145d84583;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMelee",&DAT_14cb6d7a8,&DAT_14878f2aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d7a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0b16 FUN_145bc0b16 body=228 status=ok
// SIG undefined FUN_145bc0b16(void)

longlong FUN_145bc0b16(void)

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
  if (DAT_14cb6d7c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878f2af;
    local_40 = &LAB_145c96fc5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x578;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMissions",&DAT_14cb6d7c0,&DAT_14878f2ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d7c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0c02 FUN_145bc0c02 body=228 status=ok
// SIG undefined FUN_145bc0c02(void)

longlong FUN_145bc0c02(void)

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
  if (DAT_14cb6d7d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2b3;
    local_40 = &LAB_145fd13cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMissionSets",&DAT_14cb6d7d8,&DAT_14878f2b2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d7d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0cee FUN_145bc0cee body=228 status=ok
// SIG undefined FUN_145bc0cee(void)

longlong FUN_145bc0cee(void)

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
  if (DAT_14cb6d7f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878f2b7;
    local_40 = &LAB_145b017a4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMissionSource",&DAT_14cb6d7f0,&DAT_14878f2b6)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d7f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0dda FUN_145bc0dda body=228 status=ok
// SIG undefined FUN_145bc0dda(void)

longlong FUN_145bc0dda(void)

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
  if (DAT_14cb6d808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878f2bb;
    local_40 = &LAB_145c63156;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreMissionTask",&DAT_14cb6d808,&DAT_14878f2ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0ec6 FUN_145bc0ec6 body=228 status=ok
// SIG undefined FUN_145bc0ec6(void)

longlong FUN_145bc0ec6(void)

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
  if (DAT_14cb6d820 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878f2bf;
    local_40 = &LAB_145aef095;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreProfileDefaults",&DAT_14cb6d820,
                  &DAT_14878f2be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc0fb2 FUN_145bc0fb2 body=228 status=ok
// SIG undefined FUN_145bc0fb2(void)

longlong FUN_145bc0fb2(void)

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
  if (DAT_14cb6d838 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878f2c3;
    local_40 = &LAB_14595f60e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreSpawnPattern",&DAT_14cb6d838,&DAT_14878f2c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc109e FUN_145bc109e body=228 status=ok
// SIG undefined FUN_145bc109e(void)

longlong FUN_145bc109e(void)

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
  if (DAT_14cb6d850 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878f2c7;
    local_40 = &LAB_145c081cb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x358;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreStats",&DAT_14cb6d850,&DAT_14878f2c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d850;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc118a FUN_145bc118a body=228 status=ok
// SIG undefined FUN_145bc118a(void)

longlong FUN_145bc118a(void)

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
  if (DAT_14cb6d868 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2cb;
    local_40 = &LAB_145c2034e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreUIDisplayData",&DAT_14cb6d868,&DAT_14878f2ca)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d868;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1276 FUN_145bc1276 body=228 status=ok
// SIG undefined FUN_145bc1276(void)

longlong FUN_145bc1276(void)

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
  if (DAT_14cb6d880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2cf;
    local_40 = &LAB_145d8480b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreUIMaterialAnimationDataDef",&DAT_14cb6d880,
                  &DAT_14878f2ce);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1362 FUN_145bc1362 body=228 status=ok
// SIG undefined FUN_145bc1362(void)

longlong FUN_145bc1362(void)

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
  if (DAT_14cb6d898 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_14878f2d3;
    local_40 = &LAB_145bdb2b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreUnlockables",&DAT_14cb6d898,&DAT_14878f2d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc144e FUN_145bc144e body=228 status=ok
// SIG undefined FUN_145bc144e(void)

longlong FUN_145bc144e(void)

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
  if (DAT_14cb6d8b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_14878f2d7;
    local_40 = &LAB_145aef121;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreUsabilityData",&DAT_14cb6d8b0,&DAT_14878f2d6)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d8b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc153a FUN_145bc153a body=228 status=ok
// SIG undefined FUN_145bc153a(void)

longlong FUN_145bc153a(void)

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
  if (DAT_14cb6d8c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_14878f2db;
    local_40 = &LAB_145aef1ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreUsabilityResponse",&DAT_14cb6d8c8,
                  &DAT_14878f2da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d8c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1626 FUN_145bc1626 body=228 status=ok
// SIG undefined FUN_145bc1626(void)

longlong FUN_145bc1626(void)

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
  if (DAT_14cb6d8e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e2db6;
    local_38 = &LAB_14878f2df;
    local_40 = &LAB_145aef239;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreUsableConsumer",&DAT_14cb6d8e0,&DAT_14878f2de
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d8e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1712 FUN_145bc1712 body=228 status=ok
// SIG undefined FUN_145bc1712(void)

longlong FUN_145bc1712(void)

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
  if (DAT_14cb6d8f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2e3;
    local_40 = &LAB_146110830;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreWaypoints",&DAT_14cb6d8f8,&DAT_14878f2e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d8f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc17fe FUN_145bc17fe body=228 status=ok
// SIG undefined FUN_145bc17fe(void)

longlong FUN_145bc17fe(void)

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
  if (DAT_14cb6d910 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2e7;
    local_40 = &LAB_1460738d0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStoreWorldRegion",&DAT_14cb6d910,&DAT_14878f2e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d910;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc18ea FUN_145bc18ea body=228 status=ok
// SIG undefined FUN_145bc18ea(void)

longlong FUN_145bc18ea(void)

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
  if (DAT_14cb6d928 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2eb;
    local_40 = &LAB_145fd159c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxActivity",&DAT_14cb6d928,&DAT_14878f2ea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d928;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc19d6 FUN_145bc19d6 body=228 status=ok
// SIG undefined FUN_145bc19d6(void)

longlong FUN_145bc19d6(void)

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
  if (DAT_14cb6d940 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2ef;
    local_40 = &LAB_145a60c99;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x400;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GbxActorPart",&DAT_14cb6d940,&DAT_14878f2ee)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d940;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1ac2 FUN_145bc1ac2 body=228 status=ok
// SIG undefined FUN_145bc1ac2(void)

longlong FUN_145bc1ac2(void)

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
  if (DAT_14cb6d958 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2f3;
    local_40 = &LAB_145cd1c7a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_GlobalActivities",&DAT_14cb6d958,
                  &DAT_14878f2f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d958;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1bae FUN_145bc1bae body=228 status=ok
// SIG undefined FUN_145bc1bae(void)

longlong FUN_145bc1bae(void)

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
  if (DAT_14cb6d970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_14878f2f7;
    local_40 = &LAB_145cd1e81;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_Rotation",&DAT_14cb6d970,&DAT_14878f2f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1c9a FUN_145bc1c9a body=228 status=ok
// SIG undefined FUN_145bc1c9a(void)

longlong FUN_145bc1c9a(void)

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
  if (DAT_14cb6d9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_14878f2fb;
    local_40 = FUN_146536d09;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_ActivityAreaStamp",&DAT_14cb6d9a0,
                  &DAT_14878f2fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1d86 FUN_145bc1d86 body=228 status=ok
// SIG undefined FUN_145bc1d86(void)

longlong FUN_145bc1d86(void)

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
  if (DAT_14cb6d9e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_14878f2ff;
    local_40 = FUN_146536e47;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_GbxActivityArea",&DAT_14cb6d9e8,
                  &DAT_14878f2fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6d9e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1e72 FUN_145bc1e72 body=228 status=ok
// SIG undefined FUN_145bc1e72(void)

longlong FUN_145bc1e72(void)

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
  if (DAT_14cb6da30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_14878f303;
    local_40 = FUN_146536f85;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_RefreshArea",&DAT_14cb6da30,&DAT_14878f302
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6da30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc1f5e FUN_145bc1f5e body=228 status=ok
// SIG undefined FUN_145bc1f5e(void)

longlong FUN_145bc1f5e(void)

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
  if (DAT_14cb6da48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_14878f307;
    local_40 = FUN_146536fd7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_Road",&DAT_14cb6da48,&DAT_14878f306);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6da48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc204a FUN_145bc204a body=228 status=ok
// SIG undefined FUN_145bc204a(void)

longlong FUN_145bc204a(void)

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
  if (DAT_14cb6da78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_14878f30b;
    local_40 = FUN_146537083;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_StaticLI",&DAT_14cb6da78,&DAT_14878f30a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6da78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc2136 FUN_145bc2136 body=228 status=ok
// SIG undefined FUN_145bc2136(void)

longlong FUN_145bc2136(void)

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
  if (DAT_14cb6da90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_14878f30f;
    local_40 = FUN_1465370d5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_Station",&DAT_14cb6da90,&DAT_14878f30e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6da90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc2222 FUN_145bc2222 body=228 status=ok
// SIG undefined FUN_145bc2222(void)

longlong FUN_145bc2222(void)

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
  if (DAT_14cb6dab0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_1487905c7;
    local_40 = FUN_146537afb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_Waypoint",&DAT_14cb6dab0,&DAT_1487905c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6dab0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc230e FUN_145bc230e body=228 status=ok
// SIG undefined FUN_145bc230e(void)

longlong FUN_145bc230e(void)

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
  if (DAT_14cb6dac8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418445be;
    local_38 = &LAB_1487905cb;
    local_40 = FUN_146537b4d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigSubType_Zone",&DAT_14cb6dac8,&DAT_1487905ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6dac8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc23fa FUN_145bc23fa body=228 status=ok
// SIG undefined FUN_145bc23fa(void)

longlong FUN_145bc23fa(void)

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
  if (DAT_14cb6e3d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e15444;
    local_38 = &LAB_1487980f1;
    local_40 = &LAB_14614e7a9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStore_PerchUser",&DAT_14cb6e3d0,&DAT_1487980f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e3d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145bc24e6 FUN_145bc24e6 body=228 status=ok
// SIG undefined FUN_145bc24e6(void)

longlong FUN_145bc24e6(void)

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
  if (DAT_14cb6e478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14103f348;
    local_38 = &LAB_148798105;
    local_40 = &LAB_145aef2c5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxGame",L"NexusConfigStorePingFeedback",&DAT_14cb6e478,&DAT_148798104);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


