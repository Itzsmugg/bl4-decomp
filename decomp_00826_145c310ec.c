// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c310ec FUN_145c310ec body=665 status=ok
// SIG undefined FUN_145c310ec(void)

void FUN_145c310ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  PSRWLOCK SRWLock;
  bool bVar7;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  longlong local_78;
  undefined1 local_68 [40];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = FUN_140495e96(param_1 + 0x30);
  if (lVar5 == 0) goto LAB_145c311cc;
  FUN_144928b90(local_68,8);
  lVar5 = FUN_1411cfb7f();
  local_b8 = *(undefined8 *)(lVar5 + 0xc4);
  local_b0 = *(undefined4 *)(lVar5 + 0xcc);
  FUN_14147c040(local_68);
  FUN_144928b90(local_a0,3);
  local_c0 = 0;
  FUN_14052b5e0(local_c4,"worldchange_has_vehicle",0);
  FUN_144928d62(local_90,1,local_c4);
  cVar3 = FUN_14493b798(param_2,local_68);
  if (cVar3 == '\0') {
    cVar3 = FUN_14493b798(param_2,local_a0);
    if ((cVar3 != '\0') && (lVar5 = FUN_1400d7050(param_1 + 0x30), lVar5 != 0)) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        if (*(char *)(param_2 + 0x38) == '\x01') {
          bVar7 = *(int *)(param_2 + 0x44) != 0;
          *(bool *)(param_1 + 0x150) = bVar7;
          if (!bVar7) goto LAB_145c3132b;
LAB_145c31267:
          FUN_14030da5e(lVar5,&local_d8);
          SRWLock = (PSRWLOCK)(local_d8 + 0xa0);
          AcquireSRWLockExclusive(SRWLock);
          *(int *)(local_d8 + 0x98) = *(int *)(local_d8 + 0x98) + 1;
          FUN_1400b22c2(local_e8,"vehicle_subtab");
          local_a8 = local_e8;
          iVar4 = FUN_140c8411c(local_d8 + 0x68);
          if (0 < iVar4) goto LAB_145c312bd;
        }
        else {
          cVar3 = FUN_140321d1a(param_2 + 0x38);
          *(char *)(param_1 + 0x150) = cVar3;
          if (cVar3 != '\0') goto LAB_145c31267;
LAB_145c3132b:
          FUN_14030da5e(lVar5,&local_d8);
          SRWLock = (PSRWLOCK)(local_d8 + 0xa0);
          AcquireSRWLockExclusive(SRWLock);
          *(int *)(local_d8 + 0x98) = *(int *)(local_d8 + 0x98) + 1;
          FUN_1400b22c2(local_e8,"vehicle_subtab");
          iVar4 = FUN_1405e9454(local_d8 + 0x68,local_e8);
          if (iVar4 != -1) {
LAB_145c312bd:
            *(int *)(local_d8 + 0x78) = *(int *)(local_d8 + 0x78) + 1;
          }
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockExclusive(SRWLock);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))(local_d0);
            }
          }
        }
      }
    }
  }
  else {
    FUN_145c31386(param_1);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_145c311cc:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c31386 FUN_145c31386 body=788 status=ok
// SIG undefined FUN_145c31386(void)

void FUN_145c31386(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = FUN_145a5afee();
  if ((lVar5 != 0) && (local_e0 = FUN_140495e96(param_1 + 0x30), local_e0 != 0)) {
    local_78 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1400021e4(&DAT_14cbcfbe8,&local_b8);
    uStack_a0._0_4_ = (int)uStack_b0;
    uVar7 = (int)uStack_b0 - 1;
    if ((int)uStack_b0 == 0) {
      uVar7 = 0;
    }
    if (0 < (int)uVar7) {
      uVar8 = 0;
      do {
        uVar3 = *(ushort *)((longlong)local_b8 + uVar8 * 2);
        *(ushort *)((longlong)local_b8 + uVar8 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
    local_a8 = local_b8;
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    FUN_14047a987(&local_a8,"customization",0xd);
    iVar4 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_90,iVar4,local_a8,1);
    FUN_1402b5374(&local_88,0,local_90);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_1446f470e(&local_c0,L"HoverDrive",1);
    FUN_1402b5374(&local_88,1,local_c0);
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    FUN_14037c58c(&local_a8);
    FUN_1403750d6(&local_a8,lVar5);
    if ((longlong)(int)uStack_a0 != 0) {
      plVar1 = local_a8 + (int)uStack_a0;
      plVar10 = local_a8;
      do {
        lVar5 = *plVar10;
        iVar4 = 0;
        if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
          lVar6 = *(longlong *)(lVar5 + 0x4c);
          uVar7 = (uint)((ulonglong)lVar6 >> 0x10);
          uVar11 = (uint)lVar6 & 0xffff;
          lVar9 = *(longlong *)(param_1 + 0x130);
          if (*(longlong *)(param_1 + 0x130) == 0) {
            lVar9 = param_1 + 0x128;
          }
          iVar12 = *(int *)(lVar9 + (ulonglong)
                                    (*(int *)(param_1 + 0x138) - 1U &
                                    (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11)
                                    + (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar11 >> 4)) * 4);
          if (iVar12 != -1) {
            do {
              plVar2 = (longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar12 * 0x14);
              if (*plVar2 == lVar6) {
                iVar4 = 0;
                if (plVar2 != (longlong *)0x0) {
                  iVar4 = (int)plVar2[1];
                }
                break;
              }
              iVar12 = *(int *)((longlong)plVar2 + 0xc);
            } while (iVar12 != -1);
          }
        }
        if ((*(int *)(lVar5 + 0x54) != iVar4) && (lVar6 = FUN_140cee904(local_e0), lVar6 != 0)) {
          FUN_1402b5374(&local_88,2,*(undefined8 *)(lVar5 + 0x4c));
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1400b2348(&local_88,&local_d8,1);
          FUN_145c3169c(lVar6,&local_d8);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar1);
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8(local_a8);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3169c FUN_145c3169c body=164 status=ok
// SIG undefined FUN_145c3169c(void)

void FUN_145c3169c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1409801a0();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  local_38 = *param_2;
  *param_2 = 0;
  local_30 = (undefined4)param_2[1];
  local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_145c31752(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x28));
  FUN_140ceeb80(param_1);
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c31752 FUN_145c31752 body=147 status=ok
// SIG undefined FUN_145c31752(void)

void FUN_145c31752(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  *param_2 = 0;
  local_38 = (undefined4)param_2[1];
  local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140f8bd6c(param_1,local_30);
  FUN_1405e9454(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c317f0 FUN_145c317f0 body=376 status=ok
// SIG undefined FUN_145c317f0(void)

void FUN_145c317f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_14129217a(param_2,0);
  *param_1 = uVar3;
  iVar1 = (**(code **)(*DAT_14cb02878 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[1] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb02890 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[2] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb028a8 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[3] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb028c0 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[4] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb028d8 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[5] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb028f0 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[6] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb02908 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[7] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb02920 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[8] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb02938 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[9] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb02950 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[10] = iVar2;
  iVar1 = (**(code **)(*DAT_14cb02968 + 0xb0))();
  iVar2 = iVar1 + -1;
  if (param_2 < iVar1 + -1) {
    iVar2 = param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  param_1[0xb] = iVar2;
  return;
}



// FUNCTION 145c31968 FUN_145c31968 body=696 status=ok
// SIG undefined FUN_145c31968(void)

undefined4 * FUN_145c31968(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  undefined4 local_c0 [2];
  char *local_b8;
  int local_ac [2];
  int local_a4;
  int local_a0 [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_7c [2];
  int local_74;
  uint local_70;
  int local_6c;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145c31c22(param_1,local_c0);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  pcVar4 = local_b8;
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  pcVar4[8] = '\0';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  puVar1 = (uint *)(local_b8 + 0x10);
  pcVar4[0x10] = '\0';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  pcVar4[0x18] = '\0';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x20] = '\0';
  pcVar4[0x21] = '\0';
  pcVar4[0x22] = '\0';
  pcVar4[0x23] = '\0';
  pcVar4[0x28] = '\0';
  pcVar4[0x29] = '\0';
  pcVar4[0x2a] = '\0';
  pcVar4[0x2b] = '\0';
  pcVar4[0x2c] = '\0';
  pcVar4[0x2d] = '\0';
  pcVar4[0x2e] = '\0';
  pcVar4[0x2f] = '\0';
  pcVar4[0x30] = '\0';
  pcVar4[0x31] = '\0';
  pcVar4[0x32] = '\0';
  pcVar4[0x33] = '\0';
  pcVar4[0x34] = '\0';
  pcVar4[0x35] = '\0';
  pcVar4[0x36] = '\0';
  pcVar4[0x37] = '\0';
  *(undefined4 *)(local_b8 + 8) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)local_b8 = *puVar2;
  FUN_1447715ec(puVar1,puVar2 + 2);
  *(undefined4 *)(local_b8 + 0x38) = *puVar3;
  pcVar4[0x40] = -1;
  pcVar4[0x41] = -1;
  pcVar4[0x42] = -1;
  pcVar4[0x43] = -1;
  if (*local_b8 == '\x01') {
    FUN_1447a97f4(&local_70,puVar1);
    if (0 < local_6c) {
      iVar7 = 0;
      do {
        FUN_144a7c8fe(&local_70,local_7c,iVar7,1);
        if ((((((local_7c[0] == DAT_14cb7beb0) && (local_74 == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_70,local_88,iVar7,1), local_88[0] == DAT_14cb7bec8 &&
               (local_80 == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_70,local_94,iVar7,1), local_94[0] == DAT_14cb7bee0 &&
              (local_8c == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_70,local_a0,iVar7,1), local_a0[0] == DAT_14cb7bef8 &&
             (local_98 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_70,local_ac,iVar7,1), local_ac[0] == DAT_14cb7bf10 &&
            (local_a4 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_70,iVar7,0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_6c);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *puVar1;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar5) {
    uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    local_70 = *(int *)(param_1 + 0x48) - 1U & local_70;
    *(uint *)(local_b8 + 0x44) = local_70;
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar8 = param_1 + 0x38;
    }
    *(undefined4 *)(local_b8 + 0x40) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4);
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar8 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4)
         = local_c0[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_1414f5c70(param_1);
  }
  *param_2 = local_c0[0];
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c31c22 FUN_145c31c22 body=231 status=ok
// SIG undefined FUN_145c31c22(void)

int * FUN_145c31c22(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 145c31d09 FUN_145c31d09 body=358 status=ok
// SIG undefined FUN_145c31d09(void)

_FILETIME FUN_145c31d09(longlong *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  SYSTEMTIME local_28;
  _FILETIME local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28.wYear = FUN_145c31f02();
  local_28.wMonth = FUN_1458c553e(param_1);
  local_28.wDay = FUN_145c31eb8(param_1);
  uVar2 = FUN_145c31e70(param_1);
  if (uVar2 < 7) {
    local_28.wDayOfWeek = *(WORD *)(&DAT_149e41c48 + (ulonglong)uVar2 * 2);
  }
  else {
    local_28.wDayOfWeek = 0;
  }
  lVar4 = *param_1;
  lVar3 = (lVar4 / 36000000000) * 0x2aaaaaab;
  local_28.wHour =
       (short)(lVar4 / 36000000000) +
       ((short)(uint)((ulonglong)lVar3 >> 0x22) - (short)(lVar3 >> 0x3f)) * -0x18;
  auVar1 = SEXT816(lVar4 / 600000000) * ZEXT816(0x8888888888888889);
  local_28.wMinute =
       (short)(lVar4 / 600000000) + ((short)(auVar1._8_4_ >> 5) - (auVar1._14_2_ >> 0xf)) * -0x3c;
  lVar4 = lVar4 / 10000000 - lVar4 / -0x6769800000000000;
  auVar1 = SEXT816(lVar4) * ZEXT816(0x8888888888888889);
  local_28.wSecond = (short)lVar4 + ((short)(auVar1._8_4_ >> 5) - (auVar1._14_2_ >> 0xf)) * -0x3c;
  local_28.wMilliseconds = 0;
  SystemTimeToFileTime(&local_28,&local_18);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c31e70 FUN_145c31e70 body=71 status=ok
// SIG undefined FUN_145c31e70(void)

int FUN_145c31e70(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(*param_1 / 864000000000);
  iVar1 = (int)((ulonglong)((*param_1 / 864000000000) * -0x6db6db6d) >> 0x20) + iVar2;
  return ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + iVar2;
}



// FUNCTION 145c31eb8 FUN_145c31eb8 body=73 status=ok
// SIG undefined FUN_145c31eb8(void)

undefined4 FUN_145c31eb8(undefined8 param_1)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14021332c(param_1,local_14,local_18,&local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c31f02 FUN_145c31f02 body=73 status=ok
// SIG undefined FUN_145c31f02(void)

undefined4 FUN_145c31f02(undefined8 param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14021332c(param_1,&local_14,local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c31f4c FUN_145c31f4c body=40 status=ok
// SIG undefined FUN_145c31f4c(void)

undefined8 FUN_145c31f4c(undefined8 param_1,int param_2)

{
  FUN_145c31f74();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c31f74 FUN_145c31f74 body=102 status=ok
// SIG undefined FUN_145c31f74(void)

void FUN_145c31f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b9820;
  FUN_145c31fda(param_1 + 0x2e);
  param_1[0x1f] = &PTR_FUN_14a4c4280;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1f] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x20);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145c31fda FUN_145c31fda body=84 status=ok
// SIG undefined FUN_145c31fda(void)

void FUN_145c31fda(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4abcd0;
  FUN_141177934(param_1 + 0xe);
  FUN_145c3202e(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 145c3202e FUN_145c3202e body=63 status=ok
// SIG undefined FUN_145c3202e(void)

void FUN_145c3202e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c3206e FUN_145c3206e body=37 status=ok
// SIG undefined FUN_145c3206e(void)

void FUN_145c3206e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_145c32094(param_2);
  return;
}



// FUNCTION 145c32094 FUN_145c32094 body=135 status=ok
// SIG undefined FUN_145c32094(void)

undefined8 * FUN_145c32094(undefined8 *param_1)

{
  FUN_145c3211c();
  *param_1 = &PTR_FUN_14b2e08b0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x30] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x33) = 0x44fa0000;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x37) = 0x43480000;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x3b) = 0x43480000;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 145c3211c FUN_145c3211c body=406 status=ok
// SIG undefined FUN_145c3211c(void)

void FUN_145c3211c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14b2e0950;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  param_1[0xb] = DAT_14c8464e0;
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x13] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x11] = DAT_14c8464f8;
  param_1[0x12] = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x19] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x17] = DAT_14c8464e0;
  param_1[0x18] = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = &PTR_FUN_14a1a0270;
  param_1[0x20] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x1e] = DAT_14c8464f8;
  param_1[0x1f] = uVar1;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x24] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x22] = DAT_14c8464f8;
  param_1[0x23] = uVar1;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0x103;
  *(undefined1 *)((longlong)param_1 + 0x15a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x42340000;
  *(undefined2 *)(param_1 + 0x2c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x162) = 1;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0x4270000042c80000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x41f0000042700000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x41f00000;
  return;
}



// FUNCTION 145c322b2 FUN_145c322b2 body=40 status=ok
// SIG undefined FUN_145c322b2(void)

undefined8 FUN_145c322b2(undefined8 param_1,int param_2)

{
  FUN_145c322da();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c322da FUN_145c322da body=149 status=ok
// SIG undefined FUN_145c322da(void)

void FUN_145c322da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdc9ac0;
  param_1[5] = &PTR_FUN_14bdc9e90;
  param_1[0x13] = &PTR_FUN_14bdc9eb0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3236f(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_145c32397(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1458dc158(param_1);
  return;
}



// FUNCTION 145c3236f FUN_145c3236f body=40 status=ok
// SIG undefined FUN_145c3236f(void)

void FUN_145c3236f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1496d1e06(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 145c32397 FUN_145c32397 body=60 status=ok
// SIG undefined FUN_145c32397(void)

void FUN_145c32397(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_1400020a8();
    }
    FUN_141082778(param_1);
    param_1 = param_1 + 0x230;
  }
  return;
}



// FUNCTION 145c323dc FUN_145c323dc body=425 status=ok
// SIG undefined FUN_145c323dc(void)

undefined8 FUN_145c323dc(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = (uint)*(byte *)(param_1 + 7);
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  switch((undefined1)local_1c) {
  case 0:
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 7)])(param_1);
      *param_1 = 0;
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    FUN_14009d19e(param_1,param_2);
    break;
  case 1:
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 7)])(param_1);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 7) = 1;
    }
    (**(code **)(*param_2 + 0x130))(param_2,param_1);
    break;
  case 2:
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 7)])(param_1);
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 7) = 2;
    }
    uVar3 = FUN_140cdfcd0();
    FUN_14047320e(uVar3,param_2,param_1,0);
    break;
  case 3:
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      (*(code *)(&switchD_148704b3c::switchdataD_14b103c20)[*(byte *)(param_1 + 7)])(param_1);
      FUN_144928b90(param_1,0);
      *(undefined1 *)(param_1 + 7) = 3;
    }
    FUN_1488345b9(param_2,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 145c32586 FUN_145c32586 body=158 status=ok
// SIG undefined FUN_145c32586(void)

void FUN_145c32586(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1414f600e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32626 FUN_145c32626 body=86 status=ok
// SIG undefined FUN_145c32626(void)

undefined8 * FUN_145c32626(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ea000;
  param_1[0x7c] = &PTR_LAB_14a5ea650;
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3267c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3267c FUN_145c3267c body=107 status=ok
// SIG undefined FUN_145c3267c(void)

void FUN_145c3267c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a9fab80;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c326e7 FUN_145c326e7 body=54 status=ok
// SIG undefined FUN_145c326e7(void)

void FUN_145c326e7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa69940;
  FUN_145c3271e(puVar1 + 5);
  puVar1[0x89] = 0;
  puVar1[0x8a] = 0;
  return;
}



// FUNCTION 145c3271e FUN_145c3271e body=698 status=ok
// SIG undefined FUN_145c3271e(void)

undefined1 * FUN_145c3271e(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = param_1 + 8;
  FUN_1414f6638(puVar1);
  puVar2 = param_1 + 0x210;
  FUN_1414f6638(puVar2);
  *(undefined8 *)(param_1 + 0x418) = 0;
  FUN_14045d416(&local_54);
  local_90 = local_54;
  local_98 = 0;
  FUN_1406507bc(puVar1,local_58,0,0x3f800000);
  FUN_14045d416(&local_5c);
  local_90 = local_5c;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x88,local_58,0,0x3f800000);
  FUN_14045d416(&local_60);
  local_90 = local_60;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x108,local_58,0,0x3f800000);
  FUN_14045d416(&local_64);
  local_90 = local_64;
  local_98 = 0;
  FUN_1406507bc(puVar1,local_58,0x3f800000,0x3f800000);
  FUN_14045d416(&local_68);
  local_90 = local_68;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x88,local_58,0x3f800000,0x3f800000);
  FUN_14045d416(&local_6c);
  local_90 = local_6c;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x108,local_58,0x3f800000,0x3f800000);
  FUN_14045d416(&local_70);
  local_90 = local_70;
  local_98 = 0;
  FUN_1406507bc(puVar2,local_58,0,0x3f800000);
  FUN_14045d416(&local_74);
  local_90 = local_74;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x290,local_58,0,0x3f800000);
  FUN_14045d416(&local_78);
  local_90 = local_78;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x310,local_58,0,0x3f800000);
  FUN_14045d416(&local_7c);
  local_90 = local_7c;
  local_98 = 0;
  FUN_1406507bc(puVar2,local_58,0x3f800000,0x3f800000);
  FUN_14045d416(&local_80);
  local_90 = local_80;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x290,local_58,0x3f800000,0x3f800000);
  FUN_14045d416(&local_84);
  local_90 = local_84;
  local_98 = 0;
  FUN_1406507bc(param_1 + 0x310,local_58,0x3f800000,0x3f800000);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c329da FUN_145c329da body=28 status=ok
// SIG undefined FUN_145c329da(void)

undefined8 FUN_145c329da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_145c329f6(param_2,param_3);
  return param_2;
}



// FUNCTION 145c329f6 FUN_145c329f6 body=140 status=ok
// SIG undefined FUN_145c329f6(void)

LONG * FUN_145c329f6(LONG *param_1,LONG *param_2)

{
  HMONITOR hMonitor;
  undefined1 auStack_78 [40];
  tagMONITORINFO local_50;
  RECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28.left = *param_2;
  local_28.top = param_2[1];
  local_28.right = param_2[2];
  local_28.bottom = param_2[3];
  hMonitor = MonitorFromRect(&local_28,2);
  local_50.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_50);
  *param_1 = local_50.rcWork.left;
  param_1[1] = local_50.rcWork.top;
  param_1[2] = local_50.rcWork.right;
  param_1[3] = local_50.rcWork.bottom;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32a84 FUN_145c32a84 body=254 status=ok
// SIG undefined FUN_145c32a84(void)

undefined8
FUN_145c32a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b972280;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b972210;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c32b84(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32b84 FUN_145c32b84 body=216 status=ok
// SIG undefined FUN_145c32b84(void)

undefined8 * FUN_145c32b84(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32c6a FUN_145c32c6a body=24 status=ok
// SIG undefined FUN_145c32c6a(void)

bool FUN_145c32c6a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c32c82 FUN_145c32c82 body=254 status=ok
// SIG undefined FUN_145c32c82(void)

undefined8
FUN_145c32c82(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9b93a0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9330;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c32d82(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32d82 FUN_145c32d82 body=216 status=ok
// SIG undefined FUN_145c32d82(void)

undefined8 * FUN_145c32d82(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32e68 FUN_145c32e68 body=24 status=ok
// SIG undefined FUN_145c32e68(void)

bool FUN_145c32e68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c32e80 FUN_145c32e80 body=254 status=ok
// SIG undefined FUN_145c32e80(void)

undefined8
FUN_145c32e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9b9480;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9b9410;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c32f80(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c32f80 FUN_145c32f80 body=216 status=ok
// SIG undefined FUN_145c32f80(void)

undefined8 * FUN_145c32f80(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c33066 FUN_145c33066 body=24 status=ok
// SIG undefined FUN_145c33066(void)

bool FUN_145c33066(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c3307e FUN_145c3307e body=254 status=ok
// SIG undefined FUN_145c3307e(void)

undefined8
FUN_145c3307e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b97b2d0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b994990;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c3317e(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3317e FUN_145c3317e body=216 status=ok
// SIG undefined FUN_145c3317e(void)

undefined8 * FUN_145c3317e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c33264 FUN_145c33264 body=57 status=ok
// SIG undefined FUN_145c33264(void)

void FUN_145c33264(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_145c3329e(param_2,param_3);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 145c3329e FUN_145c3329e body=88 status=ok
// SIG undefined FUN_145c3329e(void)

longlong * FUN_145c3329e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145c332f6 FUN_145c332f6 body=118 status=ok
// SIG undefined FUN_145c332f6(void)

void FUN_145c332f6(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 3;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (iVar4 != *(int *)(param_1 + 0x70c)) {
    *(int *)(param_1 + 0x70c) = iVar4;
    FUN_147e2888e(param_1,*(undefined4 *)(param_1 + 0x708));
    return;
  }
  return;
}



// FUNCTION 145c3336c FUN_145c3336c body=365 status=ok
// SIG undefined FUN_145c3336c(void)

undefined4 * FUN_145c3336c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c334da(param_1,local_48);
  puVar2 = (ulonglong *)*param_3;
  *local_40 = *puVar2;
  local_40[1] = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)local_40 + 0x1c) = 0;
  *(undefined8 *)((longlong)local_40 + 0x24) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = *local_40;
  plVar3 = (longlong *)local_40[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_145c335be(param_1,uVar6,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x34) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1414f6aa6(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c334da FUN_145c334da body=227 status=ok
// SIG undefined FUN_145c334da(void)

int * FUN_145c334da(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 145c335be FUN_145c335be body=265 status=ok
// SIG undefined FUN_145c335be(void)

undefined8 FUN_145c335be(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar15 = FUN_1414f68dc(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      iVar15 = FUN_1414f68dc(param_1);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar15 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
      plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar15 * 0x38);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = *(longlong **)(puVar2 + 2);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar4 = *(undefined4 *)param_3;
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar8 = *(undefined4 *)(param_3 + 2);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar13 = *(undefined4 *)(param_3 + 5);
      uVar14 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar2[8] = *(undefined4 *)(param_3 + 4);
      puVar2[9] = uVar12;
      puVar2[10] = uVar13;
      puVar2[0xb] = uVar14;
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_145a0e7de(param_1,*param_4);
      *param_4 = iVar15;
      uVar16 = 1;
      goto LAB_145c3362b;
    }
  }
  uVar16 = 0;
LAB_145c3362b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c336d0 FUN_145c336d0 body=476 status=ok
// SIG undefined FUN_145c336d0(void)

undefined8 * FUN_145c336d0(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_140e51bee(param_1);
  *param_1 = &PTR_FUN_14b92cec0;
  param_1[0x72] = &PTR_FUN_14b92d590;
  param_1[0x73] = &PTR_FUN_14b92d610;
  param_1[0x74] = &PTR_FUN_14b92d680;
  param_1[0x75] = &PTR_FUN_14b92d6a8;
  param_1[0x76] = &PTR_FUN_14b92d6c0;
  param_1[0xa4] = &PTR_FUN_14b92d6f0;
  param_1[0xa5] = &PTR_FUN_14b92d740;
  param_1[0xa6] = &PTR_FUN_14b92d770;
  param_1[0xa7] = &PTR_FUN_14b92d7a0;
  param_1[0xa8] = &PTR_FUN_14b92d7b8;
  param_1[0x118] = &PTR_FUN_14b92d7d0;
  param_1[0x119] = &PTR_FUN_14b92d800;
  param_1[0x11a] = &PTR_FUN_14b92d830;
  param_1[0x11b] = &PTR_FUN_14b92d860;
  memset(param_1 + 0x11c,0,0xe4);
  *(undefined1 *)((longlong)param_1 + 0x9c4) = 0xff;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9e4) = 0xff;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa04) = 0xff;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa24) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0;
  param_1[0x157] = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  memset(param_1 + 0x145,0,0x88);
  *(undefined2 *)((longlong)param_1 + 0xac1) = 4;
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0xffffffff;
  memset(param_1 + 0x15b,0,0x88);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfb;
  *(undefined1 *)(param_1 + 0x156) = 0;
  return param_1;
}



// FUNCTION 145c338ac FUN_145c338ac body=135 status=ok
// SIG undefined FUN_145c338ac(void)

void FUN_145c338ac(LPCRITICAL_SECTION param_1,longlong param_2,undefined8 param_3,undefined1 param_4
                  ,int param_5)

{
  longlong lVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)(param_2 + 0x18) + -1;
  if (param_5 != -1) {
    iVar2 = param_5;
  }
  lVar1 = *(longlong *)(param_2 + 0x10) + (longlong)iVar2 * 0x18;
  FUN_14020fad6(lVar1,param_3);
  *(undefined1 *)(lVar1 + 0x10) = param_4;
  FUN_14089e7f6(param_1,3,param_2);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c3391e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 145c33934 FUN_145c33934 body=38 status=ok
// SIG undefined FUN_145c33934(void)

undefined8 FUN_145c33934(undefined8 param_1,int param_2)

{
  FUN_1414f953a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3395a FUN_145c3395a body=40 status=ok
// SIG undefined FUN_145c3395a(void)

undefined8 FUN_145c3395a(undefined8 param_1,int param_2)

{
  FUN_145c33982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33982 FUN_145c33982 body=603 status=ok
// SIG undefined FUN_145c33982(void)

void FUN_145c33982(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a400f70;
  param_1[5] = &PTR_FUN_14a401550;
  param_1[6] = &PTR_LAB_14a401590;
  plVar3 = (longlong *)param_1[0xa8];
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
  plVar3 = (longlong *)param_1[0xa6];
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
  plVar3 = (longlong *)param_1[0xa4];
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
  plVar3 = (longlong *)param_1[0xa2];
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
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9e) = 0;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c33c3e(param_1 + 0x95);
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_145c33c74(param_1 + 0x6b);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b847a(param_1 + 0x61);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145c33c3e FUN_145c33c3e body=53 status=ok
// SIG undefined FUN_145c33c3e(void)

void FUN_145c33c3e(longlong *param_1)

{
  FUN_145c33df4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c33c74 FUN_145c33c74 body=53 status=ok
// SIG undefined FUN_145c33c74(void)

void FUN_145c33c74(longlong *param_1)

{
  FUN_145c33d9a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c33caa FUN_145c33caa body=59 status=ok
// SIG undefined FUN_145c33caa(void)

undefined8 * FUN_145c33caa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40c190;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33ce6 FUN_145c33ce6 body=59 status=ok
// SIG undefined FUN_145c33ce6(void)

undefined8 * FUN_145c33ce6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40c1d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33d22 FUN_145c33d22 body=59 status=ok
// SIG undefined FUN_145c33d22(void)

undefined8 * FUN_145c33d22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40c210;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33d5e FUN_145c33d5e body=59 status=ok
// SIG undefined FUN_145c33d5e(void)

undefined8 * FUN_145c33d5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a40c250;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33d9a FUN_145c33d9a body=90 status=ok
// SIG undefined FUN_145c33d9a(void)

void FUN_145c33d9a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c33df4 FUN_145c33df4 body=90 status=ok
// SIG undefined FUN_145c33df4(void)

void FUN_145c33df4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c33e4e FUN_145c33e4e body=40 status=ok
// SIG undefined FUN_145c33e4e(void)

undefined8 FUN_145c33e4e(undefined8 param_1,int param_2)

{
  FUN_145c33e76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33e76 FUN_145c33e76 body=57 status=ok
// SIG undefined FUN_145c33e76(void)

void FUN_145c33e76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5a9520;
  FUN_1447a1747(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c33eb8 FUN_145c33eb8 body=89 status=ok
// SIG undefined FUN_145c33eb8(void)

undefined8 * FUN_145c33eb8(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_1400ead26(param_1);
  *param_1 = &PTR_FUN_14aa38fc0;
  param_1[5] = &PTR_FUN_14aa395a0;
  param_1[6] = &PTR_LAB_14aa395e0;
  memset(param_1 + 0x55,0,0xd8);
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 6;
  return param_1;
}



// FUNCTION 145c33f12 FUN_145c33f12 body=85 status=ok
// SIG undefined FUN_145c33f12(void)

void FUN_145c33f12(void)

{
  FUN_145c33f67(DAT_14cb12bb0,DAT_14cb12bb8);
  if (DAT_14cb12bb0 != 0) {
    FUN_1400020a8();
  }
  FUN_145c33f98(DAT_14cb12ba0,DAT_14cb12ba8);
  if (DAT_14cb12ba0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c33f67 FUN_145c33f67 body=49 status=ok
// SIG undefined FUN_145c33f67(void)

void FUN_145c33f67(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c33f98 FUN_145c33f98 body=60 status=ok
// SIG undefined FUN_145c33f98(void)

void FUN_145c33f98(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c33fd4 FUN_145c33fd4 body=40 status=ok
// SIG undefined FUN_145c33fd4(void)

undefined8 FUN_145c33fd4(undefined8 param_1,int param_2)

{
  FUN_145c33ffc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c33ffc FUN_145c33ffc body=57 status=ok
// SIG undefined FUN_145c33ffc(void)

void FUN_145c33ffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b290700;
  FUN_14123891a(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145c34044 FUN_145c34044 body=40 status=ok
// SIG undefined FUN_145c34044(void)

undefined8 FUN_145c34044(undefined8 param_1,int param_2)

{
  FUN_1414f9576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3406c FUN_145c3406c body=24 status=ok
// SIG undefined FUN_145c3406c(void)

void FUN_145c3406c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c34080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c34084 FUN_145c34084 body=38 status=ok
// SIG undefined FUN_145c34084(void)

undefined8 FUN_145c34084(undefined8 param_1,int param_2)

{
  FUN_145c340aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c340aa FUN_145c340aa body=118 status=ok
// SIG undefined FUN_145c340aa(void)

void FUN_145c340aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4b890;
  plVar3 = (longlong *)param_1[0x15];
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
  FUN_1449db362(param_1 + 0x12);
  FUN_1449db362(param_1 + 0x10);
  FUN_1449db362(param_1 + 0xe);
  FUN_1449db362(param_1 + 0xc);
  FUN_145c34120(param_1);
  return;
}



// FUNCTION 145c34120 FUN_145c34120 body=111 status=ok
// SIG undefined FUN_145c34120(void)

void FUN_145c34120(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ba4b9a0;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c34190 FUN_145c34190 body=40 status=ok
// SIG undefined FUN_145c34190(void)

undefined8 FUN_145c34190(undefined8 param_1,int param_2)

{
  FUN_145c341b8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c341b8 FUN_145c341b8 body=57 status=ok
// SIG undefined FUN_145c341b8(void)

void FUN_145c341b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb93d70;
  FUN_14111bf7d(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c341f2 FUN_145c341f2 body=40 status=ok
// SIG undefined FUN_145c341f2(void)

undefined8 FUN_145c341f2(undefined8 param_1,int param_2)

{
  FUN_145c3421a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3421a FUN_145c3421a body=57 status=ok
// SIG undefined FUN_145c3421a(void)

void FUN_145c3421a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc245b0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c34254 FUN_145c34254 body=40 status=ok
// SIG undefined FUN_145c34254(void)

undefined8 FUN_145c34254(undefined8 param_1,int param_2)

{
  FUN_145c3427c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3427c FUN_145c3427c body=154 status=ok
// SIG undefined FUN_145c3427c(void)

void FUN_145c3427c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc36bd0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
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
  *param_1 = &PTR_FUN_14bc35270;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145c34316 FUN_145c34316 body=40 status=ok
// SIG undefined FUN_145c34316(void)

undefined8 FUN_145c34316(undefined8 param_1,int param_2)

{
  FUN_145c3433e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3433e FUN_145c3433e body=111 status=ok
// SIG undefined FUN_145c3433e(void)

void FUN_145c3433e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd2e880;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  FUN_145c343ad(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[6];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c343ad FUN_145c343ad body=43 status=ok
// SIG undefined FUN_145c343ad(void)

void FUN_145c343ad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14950680e(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 145c343d8 FUN_145c343d8 body=47 status=ok
// SIG undefined FUN_145c343d8(void)

void FUN_145c343d8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *(undefined1 *)(puVar1 + 5) = 1;
  *puVar1 = &PTR_FUN_14bed8b80;
  FUN_145c34408(puVar1 + 6);
  return;
}



// FUNCTION 145c34408 FUN_145c34408 body=50 status=ok
// SIG undefined FUN_145c34408(void)

byte * FUN_145c34408(byte *param_1)

{
  *param_1 = *param_1 & 0xfc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
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
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_1446f8bcc(param_1 + 0x20,0);
  return param_1;
}



// FUNCTION 145c3443a FUN_145c3443a body=162 status=ok
// SIG undefined FUN_145c3443a(void)

void FUN_145c3443a(longlong *param_1,undefined8 param_2)

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
        goto LAB_145c344c7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c344c7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c344dc FUN_145c344dc body=158 status=ok
// SIG undefined FUN_145c344dc(void)

bool FUN_145c344dc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3457c FUN_145c3457c body=406 status=ok
// SIG undefined FUN_145c3457c(void)

void FUN_145c3457c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    plVar1 = param_1 + 0x1f;
    cVar2 = FUN_144729dda(plVar1);
    if (((cVar2 != '\0') || (cVar2 = FUN_1411e4a18(param_1), cVar2 != '\0')) &&
       (lVar4 = FUN_1408d7900(param_1 + 0x17), lVar4 != 0)) {
      uVar5 = FUN_14479d2ce(plVar1);
      puVar6 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(lVar4 + 8);
      }
      FUN_1447325ac(puVar6,&local_68,1);
      lVar4 = FUN_1403363fe(uVar5,&local_68);
      if (((lVar4 == param_2) && (lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1), lVar4 != 0)) &&
         ((*(char *)(lVar4 + 0x178) == '\x03' && (param_1[0xc] != 0)))) {
        fVar7 = (float)*(double *)(lVar3 + 0x6d0);
        cVar2 = FUN_144729dda(param_1 + 0xb);
        if (cVar2 != '\0') {
          uVar5 = (**(code **)(*(longlong *)param_1[0xc] + 0x18))();
          local_54 = 1;
          local_68 = DAT_14c9a6400;
          local_60 = 0xffffffff;
          local_78 = DAT_14cbc5890;
          local_70 = 0xffffffff;
          local_58 = fVar7;
          FUN_140f8b8f2(uVar5);
          lVar3 = FUN_14479d2ce(plVar1);
          if (param_1[0x1e] != 0) {
            FUN_14480f766(lVar3 + 0x60);
          }
          FUN_148cfc6b2(param_1,fVar7);
          FUN_148cfc87a(param_1,fVar7);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c34714 FUN_145c34714 body=38 status=ok
// SIG undefined FUN_145c34714(void)

undefined8 FUN_145c34714(undefined8 param_1,int param_2)

{
  FUN_145c3473a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3473a FUN_145c3473a body=169 status=ok
// SIG undefined FUN_145c3473a(void)

void FUN_145c3473a(undefined8 *param_1)

{
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c347e4(param_1 + 0x65);
  FUN_1447a1747(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145c347e4 FUN_145c347e4 body=53 status=ok
// SIG undefined FUN_145c347e4(void)

void FUN_145c347e4(longlong *param_1)

{
  FUN_145c3481a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3481a FUN_145c3481a body=346 status=ok
// SIG undefined FUN_145c3481a(void)

void FUN_145c3481a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c34976 FUN_145c34976 body=40 status=ok
// SIG undefined FUN_145c34976(void)

undefined8 FUN_145c34976(undefined8 param_1,int param_2)

{
  FUN_145c3499e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3499e FUN_145c3499e body=239 status=ok
// SIG undefined FUN_145c3499e(void)

void FUN_145c3499e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149fceec0;
  *(undefined4 *)(param_1 + 9) = 0xbfc00000;
  *(undefined4 *)(param_1 + 5) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  FUN_1400b22c2(&local_28,"Destructed");
  if (param_1 + 7 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 8) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x44) = local_1c;
  }
  FUN_145c34a8e(param_1 + 0x22);
  FUN_145c34a8e(param_1 + 0x16);
  FUN_145c34a8e(param_1 + 10);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c34a8e FUN_145c34a8e body=203 status=ok
// SIG undefined FUN_145c34a8e(void)

void FUN_145c34a8e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149fcfbd0;
  *(undefined4 *)(param_1 + 5) = 0xbfc00000;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x1010101ffffffff;
  FUN_1400b22c2(&local_28,"Destructed");
  if (param_1 + 3 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 4) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_1c;
  }
  FUN_145c34b5a(param_1 + 6);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c34b5a FUN_145c34b5a body=195 status=ok
// SIG undefined FUN_145c34b5a(void)

void FUN_145c34b5a(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149fcfa50;
  *(undefined4 *)(param_1 + 1) = 0xbfc00000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd) = 0x3030303;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  FUN_1400b22c2(&local_30,"Destructed");
  if (param_1 + 3 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 4) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_24;
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c34c1e FUN_145c34c1e body=112 status=ok
// SIG undefined FUN_145c34c1e(void)

void FUN_145c34c1e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140170290();
  FUN_145c34c8e(param_1 + -0x30,0xffffffff);
  lVar1 = FUN_1400d7050(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140d27aa0(lVar1);
      FUN_145c34d4a(param_1 + -0x30,*(undefined1 *)(lVar1 + 0x43));
      return;
    }
  }
  return;
}



// FUNCTION 145c34c8e FUN_145c34c8e body=186 status=ok
// SIG undefined FUN_145c34c8e(void)

void FUN_145c34c8e(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (*(int *)(lVar3 + 0x60) == param_2) {
    if (*(int *)(lVar3 + 100) != 0) goto LAB_145c34cf3;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 100) + 1;
  }
  *(int *)(lVar3 + 0x60) = param_2;
  *(int *)(lVar3 + 100) = iVar4;
LAB_145c34cf3:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c34d4a FUN_145c34d4a body=186 status=ok
// SIG undefined FUN_145c34d4a(void)

void FUN_145c34d4a(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  *(int *)(lVar3 + 0x90) = *(int *)(lVar3 + 0x90) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (*(char *)(lVar3 + 0x70) == param_2) {
    if (*(int *)(lVar3 + 0x74) != 0) goto LAB_145c34daf;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x74) + 1;
  }
  *(char *)(lVar3 + 0x70) = param_2;
  *(int *)(lVar3 + 0x74) = iVar4;
LAB_145c34daf:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x98));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c34e06 FUN_145c34e06 body=25 status=ok
// SIG undefined FUN_145c34e06(void)

undefined8 FUN_145c34e06(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145c34e20 FUN_145c34e20 body=66 status=ok
// SIG undefined FUN_145c34e20(void)

void FUN_145c34e20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_145c34e64(param_1,param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c34e64 FUN_145c34e64 body=1981 status=ok
// SIG undefined FUN_145c34e64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c34e64(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  double dVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  byte bVar20;
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  char local_399;
  longlong local_398;
  ulonglong local_390;
  undefined8 *local_388;
  int *local_380;
  longlong local_378;
  ulonglong local_370;
  ulonglong local_368;
  longlong *local_360;
  undefined8 local_358;
  ulonglong local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  longlong local_338 [2];
  undefined2 *local_328;
  int local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 *local_300;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8 [4];
  undefined1 local_2c8;
  undefined1 local_2c0 [16];
  longlong local_2b0;
  undefined1 local_2a0 [32];
  byte local_280;
  undefined1 local_278 [32];
  undefined1 local_258;
  undefined1 local_250 [16];
  longlong local_240;
  undefined1 local_230 [32];
  byte local_210;
  undefined1 local_208 [32];
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  longlong *local_1d0;
  undefined1 local_1c0 [32];
  byte local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_180;
  undefined1 local_108 [152];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar7 = FUN_14479d2ce(param_1 + 8);
  if (lVar7 != 0) {
    local_390 = CONCAT71(local_390._1_7_,param_4[1] == 0 && *param_4 == 0);
    uVar18 = (ulonglong)*(int *)(param_1 + 0x38);
    if (0 < (longlong)uVar18) {
      dVar1 = *(double *)(lVar7 + 0x6d0);
      local_360 = (longlong *)(param_1 + 0x30);
      local_350 = param_3 & 0xff;
      local_388 = (undefined8 *)(lVar7 + 0x458);
      local_398 = lVar7;
      local_380 = param_4;
      local_378 = param_1;
      do {
        local_368 = uVar18 - 1;
        lVar16 = local_368 * 0x150 + *local_360;
        local_370 = uVar18;
        lVar8 = FUN_14479d2ce(lVar16);
        if (lVar8 == param_2) {
          lVar8 = FUN_14479d2ce();
          local_399 = lVar8 == 0;
          bVar20 = (byte)local_390;
          if ((bool)local_399) {
            bVar20 = 1;
          }
          if ((local_390 & 1) == 0) {
            iVar19 = *(int *)(lVar16 + 0xd0);
            uVar18 = (ulonglong)iVar19;
            if (0 < (longlong)uVar18) {
              local_390 = lVar16 + 0x68;
              iVar19 = -iVar19;
              lVar7 = uVar18 * 0x18 + -8;
              do {
                uVar14 = *(ulonglong *)(lVar16 + 200);
                if (*(ulonglong *)(lVar16 + 200) == 0) {
                  uVar14 = local_390;
                }
                lVar8 = uVar14 + lVar7 + -0x10;
                cVar5 = FUN_144729dda(lVar8);
                if ((cVar5 == '\0') || (cVar5 = FUN_140e27ebc(lVar8,local_380), cVar5 != '\0')) {
                  lVar8 = *(longlong *)(uVar14 + lVar7);
                  if (lVar8 != 0) {
                    puVar13 = (undefined8 *)(*(longlong *)(local_398 + 0x1f0) + 0xf0);
                    if (*(longlong *)(local_398 + 0x1f0) == 0) {
                      puVar13 = local_388;
                    }
                    uVar10 = *puVar13;
                    lVar17 = FUN_144a61814(uVar10,(undefined8 *)(uVar14 + lVar7));
                    if (lVar17 != 0) {
                      FUN_1405a424c(uVar10,lVar8);
                    }
                    *(undefined8 *)(uVar14 + lVar7) = 0;
                  }
                  cVar5 = FUN_144729dda(local_380);
                  if (cVar5 != '\0') {
                    local_358 = FUN_140e27f24();
                    uVar2 = *(undefined4 *)(lVar16 + 0x28);
                    uVar10 = FUN_14479d2ce(local_380);
                    FUN_140d8b592(&local_198,uVar10);
                    FUN_1470ac1d8(local_358,uVar2,&local_198,uVar10);
                  }
                  uVar6 = *(uint *)(lVar16 + 0xd0);
                  if (uVar18 != uVar6) {
                    iVar4 = iVar19 + uVar6;
                    if (0 < (int)(iVar19 + uVar6)) {
                      iVar4 = 1;
                    }
                    uVar14 = *(ulonglong *)(lVar16 + 200);
                    if (*(ulonglong *)(lVar16 + 200) == 0) {
                      uVar14 = local_390;
                    }
                    memmove((void *)(uVar14 + lVar7 + -0x10),
                            (void *)(uVar14 + (longlong)(int)(uVar6 - iVar4) * 0x18),
                            (longlong)iVar4 * 0x18);
                    uVar6 = *(uint *)(lVar16 + 0xd0);
                  }
                  *(uint *)(lVar16 + 0xd0) = uVar6 - 1;
                }
                iVar19 = iVar19 + 1;
                lVar7 = lVar7 + -0x18;
                bVar3 = 1 < uVar18;
                uVar18 = uVar18 - 1;
              } while (bVar3);
              iVar19 = *(int *)(lVar16 + 0xd0);
            }
            bVar20 = iVar19 == 0;
            local_390 = CONCAT71(local_390._1_7_,bVar20);
            lVar7 = local_398;
          }
LAB_145c34f76:
          puVar13 = local_388;
          uVar18 = local_368;
          if ((bVar20 & 1) != 0) {
            lVar8 = lVar16 + 0x68;
            if (*(longlong *)(lVar16 + 200) != 0) {
              lVar8 = *(longlong *)(lVar16 + 200);
            }
            if ((longlong)*(int *)(lVar16 + 0xd0) != 0) {
              lVar17 = (longlong)*(int *)(lVar16 + 0xd0) * 0x18;
              plVar15 = (longlong *)(lVar8 + 0x10);
              do {
                lVar8 = *plVar15;
                if (lVar8 != 0) {
                  puVar11 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
                  if (*(longlong *)(lVar7 + 0x1f0) == 0) {
                    puVar11 = puVar13;
                  }
                  uVar10 = *puVar11;
                  lVar9 = FUN_144a61814(uVar10,plVar15);
                  if (lVar9 != 0) {
                    FUN_1405a424c(uVar10,lVar8);
                  }
                  *plVar15 = 0;
                }
                plVar15 = plVar15 + 3;
                lVar17 = lVar17 + -0x18;
              } while (lVar17 != 0);
            }
            local_318 = _DAT_14c9a2ffc;
            uStack_310 = _DAT_14c9a3004;
            _DAT_14c9a2ffc = *(undefined8 *)(lVar16 + 0x18);
            _DAT_14c9a3004 = *(undefined8 *)(lVar16 + 0x20);
            local_1e8 = 0;
            FUN_14101bd16(local_208,&DAT_149dfb77a);
            local_3c8 = (undefined8 *)local_208;
            FUN_140d767d6(&local_1e0,&DAT_14cbcfdb8,3,&DAT_149ebe6ea);
            cVar5 = FUN_140e27f2c(&local_1e0);
            if (cVar5 == '\0') {
              local_2c8 = 0;
              FUN_14101bd16(local_2e8,&DAT_149dfb77a);
              local_3c8 = local_2e8;
              FUN_140d767d6(local_2c0,&DAT_14cbcfdb8,3,&DAT_149ebe6ea);
              FUN_140d76846(&local_198,local_2c0);
            }
            else {
              local_2f0 = CONCAT44(local_2f0._4_4_,
                                   (float)*(int *)(lVar16 + 0x128) / (float)*(int *)(lVar16 + 300));
              local_300 = (undefined1 *)(dVar1 - *(double *)(lVar16 + 8));
              uVar10 = FUN_145c35622();
              uVar18 = local_350;
              if (local_399 != '\0') {
                uVar18 = 3;
              }
              if (param_2 == 0) {
                uVar18 = local_350;
              }
              FUN_1414aa4be(uVar10,&local_198,uVar18);
              FUN_1400021e4(&local_198,local_338 + 2);
              puVar12 = &DAT_149dfb77a;
              if (local_320 != 0) {
                puVar12 = local_328;
              }
              local_338[0] = FUN_1414aa4f6(puVar12);
              local_258 = 0;
              FUN_14101bd16(local_278,&DAT_149dfb77a);
              local_3c8 = (undefined8 *)local_278;
              FUN_140d767d6(local_250,&DAT_14cbcfdb8,3,&DAT_149ebe6ea);
              local_3c8 = &local_2f0;
              local_3c0 = lVar16 + 0x130;
              local_3b8 = lVar16 + 0x134;
              local_3b0 = lVar16 + 300;
              local_3a8 = lVar16 + 0x138;
              FUN_145c356ce(&local_198,local_250,local_338,&local_300);
            }
            FUN_14027c224(local_108);
            FUN_14027c198(local_108);
            FUN_1404eeb8e(&local_198);
            if (cVar5 == '\0') {
              (*(code *)(&PTR_FUN_14a1842f0)[local_280])(local_2a0);
              lVar7 = local_398;
              if (local_2b0 != 0) {
                FUN_1400020a8();
                lVar7 = local_398;
              }
            }
            else {
              (*(code *)(&PTR_FUN_14a1842f0)[local_210])(local_230);
              lVar7 = local_398;
              if (local_240 != 0) {
                FUN_1400020a8();
              }
              if (local_328 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            (*(code *)(&PTR_FUN_14a1842f0)[local_1a0])(local_1c0);
            if (local_1d0 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            local_1e0 = FUN_140e27f24();
            local_338[0] = 0;
            local_338[1] = 0;
            local_348 = *(undefined4 *)(lVar16 + 0x18);
            uStack_344 = *(undefined4 *)(lVar16 + 0x1c);
            uStack_340 = *(undefined4 *)(lVar16 + 0x20);
            uStack_33c = *(undefined4 *)(lVar16 + 0x24);
            local_198 = 0;
            local_180 = 1;
            local_2f0 = 0;
            local_1d8 = &local_2f0;
            local_1d0 = local_338;
            local_2f8 = &local_1e0;
            local_300 = &LAB_14571c398;
            local_190 = local_348;
            uStack_18c = uStack_344;
            uStack_188 = uStack_340;
            uStack_184 = uStack_33c;
            FUN_141427c98(local_1e0,&local_198,&local_300);
            if (local_338[0] != 0) {
              FUN_1400020a8();
            }
            uVar18 = local_368;
            FUN_145c3565c(local_360,local_368 & 0xffffffff);
            _DAT_14c9a2ffc = local_318;
            _DAT_14c9a3004 = uStack_310;
          }
        }
        else {
          cVar5 = FUN_144729dda(lVar16);
          uVar18 = local_368;
          lVar7 = local_398;
          if (cVar5 == '\0') {
            lVar7 = FUN_14479d2ce(lVar16);
            bVar20 = lVar7 == 0;
            lVar7 = local_398;
            local_399 = bVar20;
            goto LAB_145c34f76;
          }
        }
        param_1 = local_378;
      } while (1 < (longlong)local_370);
    }
    if ((param_2 != 0) && ((local_390 & 1) != 0)) {
      FUN_140457ffc(param_2 + 0x3b8,param_1);
      FUN_140457ffc(param_2 + 0x2d0,param_1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c35622 FUN_145c35622 body=57 status=ok
// SIG undefined FUN_145c35622(void)

void FUN_145c35622(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbadfc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbadfc0 = FUN_14171c317(FUN_1465ea61e,uVar1,L"EPlayerEncounterEndReason");
  }
  return;
}



// FUNCTION 145c3565c FUN_145c3565c body=114 status=ok
// SIG undefined FUN_145c3565c(void)

void FUN_145c3565c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x150 + lVar1);
  FUN_145c35744(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x150),(longlong)iVar3 * 0x150);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 145c356ce FUN_145c356ce body=118 status=ok
// SIG undefined FUN_145c356ce(void)

undefined8
FUN_145c356ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_145c358c4(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return param_1;
}



// FUNCTION 145c35744 FUN_145c35744 body=152 status=ok
// SIG undefined FUN_145c35744(void)

void FUN_145c35744(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x138) = &PTR_FUN_14a184350;
  plVar3 = *(longlong **)(param_1 + 0x148);
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
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_145c35836(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c357dc FUN_145c357dc body=24 status=ok
// SIG undefined FUN_145c357dc(void)

void FUN_145c357dc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c357f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c357f4 FUN_145c357f4 body=65 status=ok
// SIG undefined FUN_145c357f4(void)

longlong FUN_145c357f4(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c35836 FUN_145c35836 body=53 status=ok
// SIG undefined FUN_145c35836(void)

void FUN_145c35836(longlong *param_1)

{
  FUN_145c3586c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3586c FUN_145c3586c body=88 status=ok
// SIG undefined FUN_145c3586c(void)

void FUN_145c3586c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c358c4 FUN_145c358c4 body=205 status=ok
// SIG undefined FUN_145c358c4(void)

void FUN_145c358c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_140d76916(param_1,7);
  FUN_1457e191e(param_1,&DAT_14cbcff80,param_2);
  FUN_14572378c(param_1,&DAT_14cbcff90,param_3);
  FUN_145853b8e(param_1,&DAT_14cbcffa0,param_4);
  FUN_145c35992(param_1,&DAT_14cbcffb0,param_5);
  FUN_145c35992(param_1,&DAT_14cbcffc0,param_6);
  FUN_145c35992(param_1,&DAT_14cbcffd0,param_7);
  FUN_145c35a10(param_1,param_8);
  return;
}



// FUNCTION 145c35992 FUN_145c35992 body=126 status=ok
// SIG undefined FUN_145c35992(void)

longlong * FUN_145c35992(longlong *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(longlong *)(lVar2 + lVar4) = (longlong)*param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 145c35a10 FUN_145c35a10 body=201 status=ok
// SIG undefined FUN_145c35a10(void)

longlong * FUN_145c35a10(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    FUN_145c35ada(local_48,param_2);
    *(undefined ***)(lVar2 + lVar4) = &PTR_FUN_14a184350;
    *(undefined8 *)(lVar2 + 8 + lVar4) = local_40;
    *(undefined8 *)(lVar2 + 0x10 + lVar4) = local_38;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 0xb;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = DAT_14cbcffe0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c35ada FUN_145c35ada body=272 status=ok
// SIG undefined FUN_145c35ada(void)

undefined8 * FUN_145c35ada(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b996748;
  puVar5 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  lVar3 = *(longlong *)(param_2 + 8);
  *puVar5 = &PTR_LAB_14b3f7668;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[9] = 0;
  *(undefined4 *)(puVar5 + 10) = 0;
  FUN_140816cc4(puVar5 + 1,lVar3 + 8);
  *puVar5 = &PTR_FUN_14b996758;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b996770;
  plVar6[2] = (longlong)puVar5;
  param_1[1] = puVar5;
  plVar4 = (longlong *)param_1[2];
  if (plVar6 == plVar4) {
    if (plVar6 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) {
      return param_1;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar6;
  }
  else {
    param_1[2] = plVar6;
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return param_1;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 145c35bea FUN_145c35bea body=375 status=ok
// SIG undefined FUN_145c35bea(void)

void FUN_145c35bea(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14110d204();
  lVar2 = FUN_144a126be(param_1);
  local_38 = FUN_145bf38ee;
  local_30 = 0;
  FUN_145c35e10(lVar2 + 0x570,local_28,param_1,&local_38);
  lVar2 = FUN_144a126be(param_1);
  local_38 = FUN_145bf43f2;
  local_30 = 0;
  FUN_145c35e10(lVar2 + 0x588,local_28,param_1,&local_38);
  lVar2 = FUN_144a126be(param_1);
  bVar1 = *(byte *)(lVar2 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    local_38 = FUN_1409cebec;
    local_30 = 0;
    FUN_145c35f10(&DAT_14cb0a8e8,local_28,param_1,&local_38);
    local_38 = FUN_1409cee66;
    local_30 = 0;
    FUN_145c35f10(&DAT_14cb0a900,local_28,param_1,&local_38);
    local_38 = FUN_14073ee16;
    local_30 = 0;
    FUN_145c36010(local_28,param_1,&local_38);
    local_38 = FUN_140488a7e;
    local_30 = 0;
    FUN_145c3610a(local_28,param_1,&local_38);
  }
  uVar3 = FUN_144a126be(param_1);
  FUN_145c35d62(&DAT_14cb121a8,param_1,uVar3);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c35d62 FUN_145c35d62 body=173 status=ok
// SIG undefined FUN_145c35d62(void)

void FUN_145c35d62(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145c35df9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145c35df9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145c35e10 FUN_145c35e10 body=254 status=ok
// SIG undefined FUN_145c35e10(void)

undefined8
FUN_145c35e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ab18ff0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ab2da50;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141332804(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c35f10 FUN_145c35f10 body=254 status=ok
// SIG undefined FUN_145c35f10(void)

undefined8
FUN_145c35f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14aa5a800;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ab2dac0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457be378(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c36010 FUN_145c36010 body=248 status=ok
// SIG undefined FUN_145c36010(void)

undefined8 FUN_145c36010(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14aa5a870;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ab2db30;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1457be566(&DAT_14cb0a918,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3610a FUN_145c3610a body=248 status=ok
// SIG undefined FUN_145c3610a(void)

undefined8 FUN_145c3610a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1ca3a0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ab2dba0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140ea1bb6(&DAT_14cb0a930,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c36204 FUN_145c36204 body=40 status=ok
// SIG undefined FUN_145c36204(void)

undefined8 FUN_145c36204(undefined8 param_1,int param_2)

{
  FUN_145c3622c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3622c FUN_145c3622c body=124 status=ok
// SIG undefined FUN_145c3622c(void)

void FUN_145c3622c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bec6420;
  param_1[5] = &PTR_FUN_14bec66c0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145c362a8(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c362a8 FUN_145c362a8 body=128 status=ok
// SIG undefined FUN_145c362a8(void)

void FUN_145c362a8(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c36328 FUN_145c36328 body=220 status=ok
// SIG undefined FUN_145c36328(void)

void FUN_145c36328(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar7 + lVar8);
      if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
        *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) & 0xfe;
        FUN_140834d9a(lVar4);
      }
      FUN_140ce01e8(lVar4 + 0x20,0);
      FUN_140d2f778(lVar4 + 0x20);
      lVar4 = *(longlong *)(lVar7 + lVar8);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      plVar5 = *(longlong **)(lVar4 + 0x58);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x58) = 0;
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
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
    uVar6 = *(undefined4 *)(param_1 + 0x70);
    lVar7 = *(longlong *)(param_1 + 0x68);
  }
  FUN_1458c721b(lVar7,uVar6);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_145c36404(param_1 + 0x68);
    return;
  }
  return;
}



// FUNCTION 145c36404 FUN_145c36404 body=48 status=ok
// SIG undefined FUN_145c36404(void)

void FUN_145c36404(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145c36434 FUN_145c36434 body=182 status=ok
// SIG undefined FUN_145c36434(void)

void FUN_145c36434(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar1 = DAT_14c762760 + 1;
  *(int *)(puVar2 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar1;
  puVar2[2] = 0;
  FUN_14485c47a(puVar2 + 2,param_2);
  *(undefined1 *)(puVar2 + 3) = 1;
  *puVar2 = &PTR_FUN_14b5afc70;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  FUN_145c364ea(puVar2 + 4,param_3);
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar1 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar1 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar1 * 8) = puVar2;
  return;
}



// FUNCTION 145c364ea FUN_145c364ea body=475 status=ok
// SIG undefined FUN_145c364ea(void)

void FUN_145c364ea(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410534e0();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar3 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_38[2] = lVar6;
  *local_38 = &PTR_FUN_14b96c100;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_2);
  puVar3[4] = FUN_148d19416;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b5afca0;
  plVar5[2] = (longlong)local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(plVar5 + 3) = local_30;
  local_30 = 0;
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) goto LAB_145c36605;
    param_1[1] = 0;
LAB_145c36658:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_145c36605;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar5 + 2);
    plVar7 = (longlong *)param_1[1];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[1] = (longlong)plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_145c36658;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_145c36605:
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c366c6 FUN_145c366c6 body=40 status=ok
// SIG undefined FUN_145c366c6(void)

undefined8 FUN_145c366c6(undefined8 param_1,int param_2)

{
  FUN_145c366ee();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c366ee FUN_145c366ee body=115 status=ok
// SIG undefined FUN_145c366ee(void)

void FUN_145c366ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8a5bb0;
  FUN_1447a1747(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145c36761(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c36761 FUN_145c36761 body=40 status=ok
// SIG undefined FUN_145c36761(void)

void FUN_145c36761(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a48a72(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 145c3678a FUN_145c3678a body=181 status=ok
// SIG undefined FUN_145c3678a(void)

longlong FUN_145c3678a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_145c36817;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145c36840(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_145c36817:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 145c36840 FUN_145c36840 body=283 status=ok
// SIG undefined FUN_145c36840(void)

undefined4 * FUN_145c36840(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c36a0a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1459a1734(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_145c3695c(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1414fabda(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3695c FUN_145c3695c body=174 status=ok
// SIG undefined FUN_145c3695c(void)

undefined8 FUN_145c3695c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_1459a1734(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148cf90ee(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 145c36a0a FUN_145c36a0a body=239 status=ok
// SIG undefined FUN_145c36a0a(void)

int * FUN_145c36a0a(longlong *param_1,int *param_2)

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



// FUNCTION 145c36afa FUN_145c36afa body=96 status=ok
// SIG undefined FUN_145c36afa(void)

longlong * FUN_145c36afa(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x68,0x10);
  FUN_145c36b5a(plVar3);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 145c36b5a FUN_145c36b5a body=99 status=ok
// SIG undefined FUN_145c36b5a(void)

undefined8 * FUN_145c36b5a(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99baf0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = &PTR_FUN_14b6538e0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1412df474(param_1 + 10);
  FUN_141028572((longlong)param_1 + 0x5c);
  return param_1;
}



// FUNCTION 145c36bbe FUN_145c36bbe body=256 status=ok
// SIG undefined FUN_145c36bbe(void)

void FUN_145c36bbe(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x40) + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    uVar2 = FUN_144a7757c();
    lVar3 = FUN_144a78ede(param_1,uVar2);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (lVar4 == lVar3) {
      local_38 = FUN_14571f0be;
      local_30 = 0;
      FUN_145c36cc0(lVar4 + 0x7e8,local_28,param_1,&local_38);
      local_38 = FUN_14571f098;
      local_30 = 0;
      FUN_145c36cc0(*(longlong *)(param_1 + 0x40) + 2000,local_28,param_1,&local_38);
      lVar4 = *(longlong *)(param_1 + 0x40);
    }
    lVar4 = FUN_14011c706(lVar4);
    local_38 = (code *)&LAB_14051dd22;
    local_30 = 0;
    FUN_145c36cc0(lVar4 + 0x158,local_28,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c36cc0 FUN_145c36cc0 body=254 status=ok
// SIG undefined FUN_145c36cc0(void)

undefined8
FUN_145c36cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ab1f970;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c36dca FUN_145c36dca body=353 status=ok
// SIG undefined FUN_145c36dca(void)

undefined8 * FUN_145c36dca(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a673770;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaac8) {
    FUN_144b3d300(&DAT_14caeaac8);
    if (DAT_14caeaac8 == -1) {
      FUN_1414fadc0();
      atexit((_func_5014 *)&LAB_14356d580);
      _Init_thread_footer(&DAT_14caeaac8);
    }
    if (*(int *)((longlong)param_1 + 0xac) < 0) {
      *(undefined4 *)(param_1 + 0x15) = 0;
      FUN_147bb3bca(param_1 + 0x14,0);
      goto LAB_145c36e8a;
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
LAB_145c36e8a:
  FUN_1446f470e(&local_30,&DAT_149dfb77a,1);
  iVar2 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar2 + 1U) {
    FUN_145c36f2c(param_1 + 0x14,iVar2);
  }
  lVar3 = param_1[0x14];
  lVar4 = (longlong)iVar2 * 0x1c;
  *(undefined8 *)(lVar3 + lVar4) = local_30;
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c36f2c FUN_145c36f2c body=153 status=ok
// SIG undefined FUN_145c36f2c(void)

void FUN_145c36f2c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1c,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1c)) {
      uVar5 = uVar4 / 0x1c & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1c,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c36fc6 FUN_145c36fc6 body=169 status=ok
// SIG undefined FUN_145c36fc6(void)

bool FUN_145c36fc6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c37070 FUN_145c37070 body=162 status=ok
// SIG undefined FUN_145c37070(void)

void FUN_145c37070(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = FUN_141302540();
  if (((param_2 != 0) && (iVar2 != -1)) && (iVar2 == param_3)) {
    cVar1 = FUN_145c37114(param_2);
    if ((cVar1 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)) {
      lVar3 = FUN_144a5dd5e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar4 = FUN_145c37124(lVar4);
        if (lVar4 != 0) {
          FUN_1414fae66(lVar4,local_24,param_2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c37114 FUN_145c37114 body=15 status=ok
// SIG undefined FUN_145c37114(void)

undefined8 FUN_145c37114(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x39));
  }
  return 0;
}



// FUNCTION 145c37124 FUN_145c37124 body=105 status=ok
// SIG undefined FUN_145c37124(void)

void FUN_145c37124(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145c3718e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145c37274(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3718e FUN_145c3718e body=228 status=ok
// SIG undefined FUN_145c3718e(void)

longlong FUN_145c3718e(void)

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
  if (DAT_14cbb1d60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_1465f42c2;
    local_38 = &LAB_148c54645;
    local_40 = &LAB_1458dc7d0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_CelebNotifMessage",&DAT_14cbb1d60,
                  FUN_1465f429a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb1d60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c37274 FUN_145c37274 body=76 status=ok
// SIG undefined FUN_145c37274(void)

void FUN_145c37274(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145c3718e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145c372b1;
    }
  }
  lVar2 = 0;
LAB_145c372b1:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145c372cc FUN_145c372cc body=327 status=ok
// SIG undefined FUN_145c372cc(void)

undefined8 * FUN_145c372cc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c37414();
  *param_1 = &PTR_FUN_14aa2bdc0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf7ce0) {
    FUN_144b3d300(&DAT_14caf7ce0);
    if (DAT_14caf7ce0 == -1) {
      FUN_1414fb44c();
      atexit(FUN_14364249b);
      _Init_thread_footer(&DAT_14caf7ce0);
    }
  }
  FUN_1446f470e(&local_28,L"MyConstraintComp",1);
  uVar2 = FUN_14595a0ac();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  FUN_1405bab3a(param_1,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c37414 FUN_145c37414 body=32 status=ok
// SIG undefined FUN_145c37414(void)

undefined8 * FUN_145c37414(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14aa6f8c0;
  return param_1;
}



// FUNCTION 145c37434 FUN_145c37434 body=226 status=ok
// SIG undefined FUN_145c37434(void)

longlong * FUN_145c37434(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e713e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3751c FUN_145c3751c body=138 status=ok
// SIG undefined FUN_145c3751c(void)

undefined1 * FUN_145c3751c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b47e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FPixelShaderUtils::FRasterizeToRectsVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x835;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145c37518;
}



// FUNCTION 145c375a6 FUN_145c375a6 body=146 status=ok
// SIG undefined FUN_145c375a6(void)

code * FUN_145c375a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415a4e00();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FClearLumenCardCapturePS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000836;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fef70;
  return FUN_145c3751c;
}



// FUNCTION 145c37638 FUN_145c37638 body=226 status=ok
// SIG undefined FUN_145c37638(void)

longlong * FUN_145c37638(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e70b6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3771c FUN_145c3771c body=136 status=ok
// SIG undefined FUN_145c3771c(void)

code * FUN_145c3771c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RectUVBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721d3ca;
}



// FUNCTION 145c377a4 FUN_145c377a4 body=138 status=ok
// SIG undefined FUN_145c377a4(void)

code * FUN_145c377a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c3771c;
}



// FUNCTION 145c3782e FUN_145c3782e body=138 status=ok
// SIG undefined FUN_145c3782e(void)

code * FUN_145c3782e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721d340;
}



// FUNCTION 145c378b8 FUN_145c378b8 body=40 status=ok
// SIG undefined FUN_145c378b8(void)

undefined8 FUN_145c378b8(undefined8 param_1,int param_2)

{
  FUN_145c378e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c378e0 FUN_145c378e0 body=110 status=ok
// SIG undefined FUN_145c378e0(void)

void FUN_145c378e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b552b90;
  param_1[0x4a] = &PTR_FUN_14b552f90;
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3794e(param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  FUN_140731102(param_1);
  return;
}



// FUNCTION 145c3794e FUN_145c3794e body=53 status=ok
// SIG undefined FUN_145c3794e(void)

void FUN_145c3794e(longlong *param_1)

{
  FUN_145c37984();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c37984 FUN_145c37984 body=90 status=ok
// SIG undefined FUN_145c37984(void)

void FUN_145c37984(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c379de FUN_145c379de body=40 status=ok
// SIG undefined FUN_145c379de(void)

undefined8 FUN_145c379de(undefined8 param_1,int param_2)

{
  FUN_145c37a06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c37a06 FUN_145c37a06 body=76 status=ok
// SIG undefined FUN_145c37a06(void)

void FUN_145c37a06(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14af002c0;
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
  FUN_145c37a52(param_1);
  return;
}



// FUNCTION 145c37a52 FUN_145c37a52 body=153 status=ok
// SIG undefined FUN_145c37a52(void)

void FUN_145c37a52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af04aa0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145c37aec(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145c37b22(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145c37b58(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c37aec FUN_145c37aec body=53 status=ok
// SIG undefined FUN_145c37aec(void)

void FUN_145c37aec(longlong *param_1)

{
  FUN_145c37b8e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c37b22 FUN_145c37b22 body=53 status=ok
// SIG undefined FUN_145c37b22(void)

void FUN_145c37b22(longlong *param_1)

{
  FUN_145c37ce8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c37b58 FUN_145c37b58 body=53 status=ok
// SIG undefined FUN_145c37b58(void)

void FUN_145c37b58(longlong *param_1)

{
  FUN_145c37e42();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c37b8e FUN_145c37b8e body=345 status=ok
// SIG undefined FUN_145c37b8e(void)

void FUN_145c37b8e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c37ce8 FUN_145c37ce8 body=345 status=ok
// SIG undefined FUN_145c37ce8(void)

void FUN_145c37ce8(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c37e42 FUN_145c37e42 body=345 status=ok
// SIG undefined FUN_145c37e42(void)

void FUN_145c37e42(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c37f9c FUN_145c37f9c body=40 status=ok
// SIG undefined FUN_145c37f9c(void)

undefined8 FUN_145c37f9c(undefined8 param_1,int param_2)

{
  FUN_145c37fc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c37fc4 FUN_145c37fc4 body=78 status=ok
// SIG undefined FUN_145c37fc4(void)

void FUN_145c37fc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4da000;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c38012(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c38012 FUN_145c38012 body=95 status=ok
// SIG undefined FUN_145c38012(void)

void FUN_145c38012(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145c38072(param_1);
  return;
}



// FUNCTION 145c38072 FUN_145c38072 body=55 status=ok
// SIG undefined FUN_145c38072(void)

void FUN_145c38072(longlong *param_1)

{
  FUN_145c380aa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c380aa FUN_145c380aa body=123 status=ok
// SIG undefined FUN_145c380aa(void)

void FUN_145c380aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 145c38126 FUN_145c38126 body=63 status=ok
// SIG undefined FUN_145c38126(void)

void FUN_145c38126(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145c381c0(param_1);
    FUN_145c38166(param_1);
    return;
  }
  FUN_145c38166(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1467f181c(param_1);
  return;
}



// FUNCTION 145c38166 FUN_145c38166 body=90 status=ok
// SIG undefined FUN_145c38166(void)

void FUN_145c38166(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c381c0 FUN_145c381c0 body=335 status=ok
// SIG undefined FUN_145c381c0(void)

void FUN_145c381c0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 145c38310 FUN_145c38310 body=37 status=ok
// SIG undefined FUN_145c38310(void)

void FUN_145c38310(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x360);
  FUN_145c38336(param_2);
  return;
}



// FUNCTION 145c38336 FUN_145c38336 body=330 status=ok
// SIG undefined FUN_145c38336(void)

undefined8 * FUN_145c38336(undefined8 *param_1)

{
  FUN_1410fd622();
  *param_1 = &PTR_FUN_14b5d2500;
  param_1[0x3d] = &PTR_FUN_14b00bdf8;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x404;
  param_1[0x3e] = &DAT_14a176f00;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = &PTR_FUN_14b00bdf8;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x30c) = 0x404;
  param_1[0x54] = &DAT_14a176f00;
  param_1[0x68] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  FUN_14485c47a(param_1 + 0x6b,0);
  return param_1;
}



// FUNCTION 145c38480 FUN_145c38480 body=357 status=ok
// SIG undefined FUN_145c38480(void)

undefined4 * FUN_145c38480(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145c386e4(param_1,local_48);
  FUN_145c385e6(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145c3863e(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1414fb4c2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c385e6 FUN_145c385e6 body=87 status=ok
// SIG undefined FUN_145c385e6(void)

longlong * FUN_145c385e6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145c3863e FUN_145c3863e body=164 status=ok
// SIG undefined FUN_145c3863e(void)

undefined8 FUN_145c3863e(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_140007302(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1470a3bb4(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_145c38699;
    }
  }
  uVar6 = 0;
LAB_145c38699:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c386e4 FUN_145c386e4 body=243 status=ok
// SIG undefined FUN_145c386e4(void)

int * FUN_145c386e4(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145c387d8 FUN_145c387d8 body=52 status=ok
// SIG undefined FUN_145c387d8(void)

void FUN_145c387d8(void)

{
  if (DAT_14ca805f0 < 2) {
    FUN_145c38914();
    FUN_145c3880c();
    return;
  }
  FUN_145c3880c();
  DAT_14ca805f0 = 1;
  FUN_14143dc72();
  return;
}



// FUNCTION 145c3880c FUN_145c3880c body=198 status=ok
// SIG undefined FUN_145c3880c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c3880c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x100000000;
  local_20 = &DAT_14ca805b8;
  local_18 = 0xffffffff;
  local_10 = 0;
  if (DAT_14ca805d0 != 0) {
    FUN_1449c0562(&local_28);
  }
  DAT_14ca805b0 = 0;
  if (DAT_14ca805b4 != 0) {
    FUN_145c388d4();
  }
  _DAT_14ca805d8 = 0xffffffff;
  DAT_14ca805d0 = 0;
  if (0x80 < DAT_14ca805d4) {
    DAT_14ca805d4 = 0x80;
    FUN_1446efbd8(&DAT_14ca805b8,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c388d4 FUN_145c388d4 body=64 status=ok
// SIG undefined FUN_145c388d4(void)

void FUN_145c388d4(void)

{
  if (DAT_14ca805b4 != 0) {
    DAT_14ca805b4 = 0;
    FUN_1446f8d3c(&DAT_14ca805a8,DAT_14ca805b0,0,0x200,8);
  }
  return;
}



// FUNCTION 145c38914 FUN_145c38914 body=370 status=ok
// SIG undefined FUN_145c38914(void)

void FUN_145c38914(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
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
  puVar5 = &DAT_14ca805e0;
  if (DAT_14ca805e8 != (undefined4 *)0x0) {
    puVar5 = DAT_14ca805e8;
  }
  iVar4 = DAT_14ca805f0 + 3;
  if (-1 < DAT_14ca805f0) {
    iVar4 = DAT_14ca805f0;
  }
  if (DAT_14ca805b0 - DAT_14ca805dc < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14ca805b8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14ca805d0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14ca805d0;
    }
    local_78 = &DAT_14ca805a8;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14ca805b8)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        puVar5[*(int *)(*local_78 + 0x1fc + (longlong)iVar2 * 0x200)] = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14ca805a8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14ca805b8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14ca805f0) {
      lVar3 = 0;
      do {
        puVar5[lVar3] = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14ca805f0);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c38a92 FUN_145c38a92 body=87 status=ok
// SIG undefined FUN_145c38a92(void)

undefined8 * FUN_145c38a92(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67ca10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return param_1;
}



// FUNCTION 145c38af4 FUN_145c38af4 body=87 status=ok
// SIG undefined FUN_145c38af4(void)

undefined8 * FUN_145c38af4(undefined8 *param_1)

{
  FUN_14587747c();
  *param_1 = &PTR_FUN_14a6ff760;
  param_1[6] = 0x100000019;
  param_1[7] = 0x1f400000001;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffe0 | 0xf;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = (*(uint *)((longlong)param_1 + 0x4c) & 0xfffffff0) + 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x40a00000;
  return param_1;
}



// FUNCTION 145c38b4b FUN_145c38b4b body=35 status=ok
// SIG undefined FUN_145c38b4b(void)

void FUN_145c38b4b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c38b6e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9ed030;
  return;
}



// FUNCTION 145c38b6e FUN_145c38b6e body=63 status=ok
// SIG undefined FUN_145c38b6e(void)

undefined8 * FUN_145c38b6e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_149f76c60;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 145c38bae FUN_145c38bae body=57 status=ok
// SIG undefined FUN_145c38bae(void)

void FUN_145c38bae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa69dd0;
  FUN_145c38be7(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145c38be7 FUN_145c38be7 body=41 status=ok
// SIG undefined FUN_145c38be7(void)

void FUN_145c38be7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14599ed1e(param_1);
    param_1 = param_1 + 0x440;
  }
  return;
}



// FUNCTION 145c38c10 FUN_145c38c10 body=50 status=ok
// SIG undefined FUN_145c38c10(void)

void FUN_145c38c10(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_145c38c42(param_1 + 0x30);
  }
  FUN_140457ffc(&DAT_14c867408,param_1);
  return;
}



// FUNCTION 145c38c42 FUN_145c38c42 body=48 status=ok
// SIG undefined FUN_145c38c42(void)

void FUN_145c38c42(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145c38c7e FUN_145c38c7e body=185 status=ok
// SIG undefined FUN_145c38c7e(void)

undefined8 * FUN_145c38c7e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b368f30;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  return param_1;
}



// FUNCTION 145c38d42 FUN_145c38d42 body=87 status=ok
// SIG undefined FUN_145c38d42(void)

undefined8 * FUN_145c38d42(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b462f20;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[0xb] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 **)((longlong)param_1 + 100) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 145c38d9a FUN_145c38d9a body=103 status=ok
// SIG undefined FUN_145c38d9a(void)

ulonglong FUN_145c38d9a(longlong param_1)

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
LAB_145c38de4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c38de4;
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



// FUNCTION 145c38e38 FUN_145c38e38 body=89 status=ok
// SIG undefined FUN_145c38e38(void)

void FUN_145c38e38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4e77c0;
  param_1[4] = &PTR_FUN_14b4e77e8;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 8);
  FUN_1457f3dec(param_1);
  return;
}



// FUNCTION 145c38e92 FUN_145c38e92 body=104 status=ok
// SIG undefined FUN_145c38e92(void)

undefined8 FUN_145c38e92(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145c38efc(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c38efc FUN_145c38efc body=42 status=ok
// SIG undefined FUN_145c38efc(void)

undefined8 FUN_145c38efc(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145c62162();
  if (lVar1 != 0) {
    uVar2 = FUN_144837462(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145c38f26 FUN_145c38f26 body=40 status=ok
// SIG undefined FUN_145c38f26(void)

undefined8 FUN_145c38f26(undefined8 param_1,int param_2)

{
  FUN_145c38f4e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c38f4e FUN_145c38f4e body=156 status=ok
// SIG undefined FUN_145c38f4e(void)

void FUN_145c38f4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b832e00;
  param_1[6] = &PTR_FUN_14b8330c0;
  param_1[7] = &PTR_LAB_14b833150;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_141175adb(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c38fea FUN_145c38fea body=25 status=ok
// SIG undefined FUN_145c38fea(void)

void FUN_145c38fea(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145c38fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145c39004 FUN_145c39004 body=38 status=ok
// SIG undefined FUN_145c39004(void)

undefined8 FUN_145c39004(undefined8 param_1,int param_2)

{
  FUN_145c3902a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3902a FUN_145c3902a body=276 status=ok
// SIG undefined FUN_145c3902a(void)

void FUN_145c3902a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba4b090;
  FUN_145c3913e(param_1[0x6b],*(undefined4 *)(param_1 + 0x6c));
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x66));
  FUN_145c3913e(param_1[100],*(undefined4 *)(param_1 + 0x65));
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3918c(param_1 + 0x5f);
  plVar3 = (longlong *)param_1[0x5e];
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
  plVar3 = (longlong *)param_1[0x5b];
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
  FUN_145858433(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  FUN_145859142(param_1);
  return;
}



// FUNCTION 145c3913e FUN_145c3913e body=77 status=ok
// SIG undefined FUN_145c3913e(void)

void FUN_145c3913e(longlong param_1,int param_2)

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



// FUNCTION 145c3918c FUN_145c3918c body=74 status=ok
// SIG undefined FUN_145c3918c(void)

void FUN_145c3918c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145c391d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c391d6 FUN_145c391d6 body=19 status=ok
// SIG undefined FUN_145c391d6(void)

undefined1 FUN_145c391d6(undefined8 param_1,undefined8 param_2)

{
  FUN_145c391ea(param_1,param_2,0);
  return 1;
}



// FUNCTION 145c391ea FUN_145c391ea body=1670 status=ok
// SIG undefined FUN_145c391ea(void)

void FUN_145c391ea(longlong *param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0xffffffff) {
    if (param_3 == '\0') {
      plVar9 = param_1 + 0x3c;
      plVar2 = param_1 + 0x3e;
      local_68 = (longlong *)&DAT_100000000;
      local_58 = 0xffffffff;
      local_50 = local_50 & 0xffffffff00000000;
      iVar13 = 0;
      local_60 = plVar2;
      if ((int)param_1[0x41] != 0) {
        FUN_1449c0562(&local_68);
        iVar13 = (int)param_1[0x41];
      }
      local_88 = local_68;
      local_80 = local_60;
      local_78 = local_58;
      lVar7 = local_78;
      local_70 = (undefined4)local_50;
      local_6c = local_50._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar6 = local_78._4_4_;
      local_90 = plVar9;
      if ((local_78._4_4_ != iVar13) || (local_78 = local_58, local_60 != plVar2)) {
        do {
          local_78 = lVar7;
          lVar7 = *local_90;
          lVar8 = (longlong)iVar6;
          local_68 = *(longlong **)(lVar7 + lVar8 * 0x28);
          local_60 = *(longlong **)(lVar7 + 8 + lVar8 * 0x28);
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          lVar7 = lVar7 + lVar8 * 0x28;
          local_58 = *(longlong *)(lVar7 + 0x10);
          local_50 = *(ulonglong *)(lVar7 + 0x18);
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          if (*(int *)(local_58 + 0x14) == 2) {
            FUN_145c399c4(*(undefined8 *)(local_58 + 0x18));
          }
          FUN_145c39dac(&local_68);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar6 = local_78._4_4_;
          lVar7 = local_78;
        } while (local_90 != plVar9 || (local_80 != plVar2 || local_78._4_4_ != iVar13));
      }
    }
    FUN_148fa298e(param_1 + 0x3c);
    FUN_148fa2b12(param_1 + 0x32);
  }
  else {
    (**(code **)(*param_1 + 0x110))(param_1,&local_68,param_2);
    if (local_68 == (longlong *)0x0) {
      if ((int)param_1[0x47] != *(int *)((longlong)param_1 + 0x264)) {
        plVar9 = param_1 + 0x4d;
        if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[0x4e];
        }
        uVar11 = *(uint *)((longlong)plVar9 + (ulonglong)((int)param_1[0x4f] - 1U & param_2) * 4);
        if (uVar11 != 0xffffffff) {
          do {
            puVar4 = (uint *)(param_1[0x46] + (longlong)(int)uVar11 * 0x18);
            if (*puVar4 == param_2) {
              if (((ulonglong)(puVar4 + 2) & 0xfffffffffffffff7) != 0) {
                plVar9 = (longlong *)FUN_140773fe2();
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*(longlong *)param_1[0x31] + 0x18))
                            ((longlong *)param_1[0x31],&local_98);
                  uVar10 = FUN_145cbb6ba(local_98);
                  lVar7 = (**(code **)(*plVar9 + 0x2d0))(plVar9,param_2,uVar10);
                  if (lVar7 != 0) {
                    FUN_145c399c4(lVar7);
                  }
                }
                FUN_146062ebc(param_1 + 0x46,param_2);
                lVar7 = param_1[0x31];
                local_90 = (longlong *)0x0;
                local_88._0_4_ = 0;
                FUN_1446efa72(&local_90,0,3,0x10);
                *local_90 = (longlong)&PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar12 = DAT_14c758608 + 1;
                lVar8 = DAT_14c758608 + 1;
                if (lVar12 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar12 = DAT_14c758608 + 2;
                  lVar8 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar8;
                local_90[2] = lVar12;
                *local_90 = (longlong)&PTR_FUN_14ba3eaf0;
                local_90[3] = (longlong)param_1;
                *(uint *)(local_90 + 4) = param_2;
                *(char *)((longlong)local_90 + 0x24) = param_3;
                goto LAB_145c394e0;
              }
              break;
            }
            uVar11 = puVar4[4];
          } while (uVar11 != 0xffffffff);
        }
      }
      if (param_3 == '\0') {
        lVar7 = param_1[0x31];
        local_90 = (longlong *)0x0;
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
        FUN_1446efa72(&local_90,0,3,0x10);
        *local_90 = (longlong)&PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_90[2] = lVar12;
        *local_90 = (longlong)&PTR_FUN_14ba3eb60;
        local_90[3] = (longlong)param_1;
        *(uint *)(local_90 + 4) = param_2;
LAB_145c394e0:
        local_88 = (longlong *)CONCAT44(local_88._4_4_,3);
        FUN_145c398c4(lVar7,&local_90);
        FUN_1449db362(&local_90);
      }
    }
    else {
      (**(code **)(*param_1 + 0x100))(param_1,&local_90);
      plVar2 = local_88;
      plVar9 = local_90;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar3 = (int *)((longlong)local_88 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_88 + 0x10))(local_88);
            }
          }
        }
      }
      lVar7 = FUN_141424f26(param_1,param_2);
      plVar1 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_90 = local_68;
        local_88 = (longlong *)0x0;
        FUN_145c39c2c(param_1 + 0x3c);
      }
      else {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        local_90 = local_68;
        local_88 = local_60;
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        FUN_145c39c2c(param_1 + 0x3c);
        LOCK();
        plVar5 = plVar1 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      FUN_145c39872(param_1 + 0x32,param_2);
      if (lVar7 != 0) {
        if (plVar9 != (longlong *)0x0) {
          lVar8 = param_1[0x31];
          local_90 = plVar9;
          local_88 = plVar2;
          if (plVar2 == (longlong *)0x0) {
            FUN_145c3a16e(lVar8,&local_90);
          }
          else {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            FUN_145c3a16e(lVar8);
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar2 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
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
        if (param_3 == '\0') {
          FUN_145c399c4(lVar7);
        }
      }
      plVar1 = local_60;
      plVar9 = local_68;
      lVar7 = param_1[0x31];
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      local_90 = (longlong *)0x0;
      local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
      FUN_1446efa72(&local_90,0,4,0x10);
      local_88 = (longlong *)CONCAT44(local_88._4_4_,4);
      *local_90 = (longlong)&PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_90[2] = lVar12;
      *local_90 = (longlong)&PTR_FUN_14ba3ea80;
      local_90[3] = (longlong)param_1;
      *(uint *)(local_90 + 4) = param_2;
      local_90[5] = (longlong)plVar9;
      local_90[6] = (longlong)plVar1;
      *(char *)(local_90 + 7) = param_3;
      FUN_145c398c4(lVar7,&local_90);
      FUN_1449db362(&local_90);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar2 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    plVar9 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c39872 FUN_145c39872 body=81 status=ok
// SIG undefined FUN_145c39872(void)

void FUN_145c39872(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_145c3991a(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145c398c4 FUN_145c398c4 body=85 status=ok
// SIG undefined FUN_145c398c4(void)

void FUN_145c398c4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  FUN_14009d848(puVar2 + 1,param_2);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0xb0);
    *(undefined8 **)(param_1 + 0xb0) = puVar2;
    UNLOCK();
    LOCK();
    *puVar1 = puVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 145c3991a FUN_145c3991a body=89 status=ok
// SIG undefined FUN_145c3991a(void)

void FUN_145c3991a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145c39974();
  return;
}



// FUNCTION 145c39974 FUN_145c39974 body=80 status=ok
// SIG undefined FUN_145c39974(void)

void FUN_145c39974(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_145c39af6(param_1,param_2);
  return;
}



// FUNCTION 145c399c4 FUN_145c399c4 body=101 status=ok
// SIG undefined FUN_145c399c4(void)

void FUN_145c399c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  bifrost::session::logout(*(User **)(param_1 + 0x2b8));
  FUN_145c39a2a(param_1 + 0x40);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  lVar2 = FUN_140773fe2();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x108), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145c39a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 145c39a2a FUN_145c39a2a body=97 status=ok
// SIG undefined FUN_145c39a2a(void)

void FUN_145c39a2a(longlong param_1)

{
  FUN_145c39fec();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_145c39b6a(param_1);
  *(undefined8 *)(param_1 + 0x40) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}



// FUNCTION 145c39a8c FUN_145c39a8c body=105 status=ok
// SIG undefined FUN_145c39a8c(void)

void FUN_145c39a8c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_145c39e86(param_1 + 0x28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c39af6 FUN_145c39af6 body=116 status=ok
// SIG undefined FUN_145c39af6(void)

void FUN_145c39af6(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145c39b6a FUN_145c39b6a body=192 status=ok
// SIG undefined FUN_145c39b6a(void)

void FUN_145c39b6a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_14480f766(&DAT_14c964278,*(longlong *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_145c39bc8;
    }
    FUN_14480f766(&DAT_14c9647a0);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
LAB_145c39bc8:
  lVar1 = FUN_1414fb80c(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1447210f0(lVar1);
    if (lVar1 != 0) {
      FUN_1400b22c2(local_28,&DAT_149e02088);
      FUN_1414fb6c8(param_1);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c39c2c FUN_145c39c2c body=267 status=ok
// SIG undefined FUN_145c39c2c(void)

void FUN_145c39c2c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar10 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      do {
        lVar3 = *param_1;
        lVar7 = (longlong)iVar6;
        puVar4 = *(undefined8 **)(lVar3 + lVar7 * 0x28);
        plVar8 = *(longlong **)(lVar3 + 8 + lVar7 * 0x28);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        cVar5 = '\x01';
        if (puVar4 != (undefined8 *)*param_2) {
          cVar5 = (**(code **)*puVar4)();
        }
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
        if (cVar5 != '\0') {
          FUN_145c39d38(param_1,*puVar10);
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar10 = (undefined4 *)(lVar3 + 0x20);
      } while (iVar6 != -1);
    }
  }
  plVar8 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000145c39d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c39d38 FUN_145c39d38 body=116 status=ok
// SIG undefined FUN_145c39d38(void)

void FUN_145c39d38(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_145c39dac((longlong)param_2 * 0x28 + *param_1);
  FUN_145c39e12(param_1,param_2);
  return;
}



// FUNCTION 145c39dac FUN_145c39dac body=101 status=ok
// SIG undefined FUN_145c39dac(void)

void FUN_145c39dac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000145c39e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c39e12 FUN_145c39e12 body=116 status=ok
// SIG undefined FUN_145c39e12(void)

void FUN_145c39e12(longlong *param_1,int param_2)

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



// FUNCTION 145c39e86 FUN_145c39e86 body=358 status=ok
// SIG undefined FUN_145c39e86(void)

void FUN_145c39e86(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = 0;
    bVar10 = *plVar2 == lVar5;
    iVar7 = 0;
    do {
      lVar12 = (longlong)iVar7;
      iVar8 = iVar7;
      lVar5 = lVar12;
      iVar4 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar9 = iVar4;
        if (lVar11 <= lVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar9 = iVar8 + 1;
        iVar8 = iVar9;
      } while (bVar10 == (plVar2[lVar5] == lVar3));
      if (bVar10 == false) {
        if (iVar6 != iVar7) {
          memmove(plVar2 + iVar6,plVar2 + lVar12,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar6 = iVar6 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar5 < lVar11);
    *(int *)(param_1 + 1) = iVar6;
  }
  return;
}



// FUNCTION 145c39fec FUN_145c39fec body=384 status=ok
// SIG undefined FUN_145c39fec(void)

void FUN_145c39fec(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*param_1 != 0) && (param_1[1] != 0)) && (0 < *(int *)(param_1[1] + 8))) {
    FUN_1401cb356();
    local_20 = *param_1;
    local_18 = param_1[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = (longlong *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
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
  if (((param_1[2] != 0) && (param_1[3] != 0)) && (0 < *(int *)(param_1[3] + 8))) {
    FUN_1401cb356();
    local_30 = param_1[2];
    local_28 = param_1[3];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = (longlong *)param_1[3];
    param_1[2] = 0;
    param_1[3] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    lVar3 = FUN_1414fb80c(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_1447210f0(lVar3);
      if (lVar3 != 0) {
        FUN_140344206(param_1);
      }
    }
  }
  if (((param_1[4] != 0) && (param_1[5] != 0)) && (0 < *(int *)(param_1[5] + 8))) {
    FUN_1401cb356();
    local_40 = param_1[4];
    local_38 = param_1[5];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    plVar2 = (longlong *)param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    bifrost::telemetry::flush();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3a16e FUN_145c3a16e body=501 status=ok
// SIG undefined FUN_145c3a16e(void)

void FUN_145c3a16e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1414fbd00(*(longlong *)(param_1 + 0xd8),param_2);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1414fba02(*(longlong *)(param_1 + 0xf8),param_2);
  }
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0x138);
  if ((longlong)iVar1 == 0) {
    uStack_50._0_4_ = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x130);
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + lVar7);
      if ((*(char *)((longlong)plVar2 + 0xc) == '\0') &&
         ((int)plVar2[1] == *(int *)(*param_2 + 0x10))) {
        (**(code **)(*plVar2 + 8))();
        uVar4 = uStack_50;
        lVar8 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_145c3a3e2(&local_58,uVar4 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar8 * 0x10) = *(undefined8 *)(lVar6 + lVar7);
        lVar3 = *(longlong *)(lVar6 + 8 + lVar7);
        *(longlong *)(local_58 + 8 + lVar8 * 0x10) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
      }
      uVar4 = uStack_50;
      lVar8 = local_58;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
    if (0 < (int)uStack_50) {
      local_70 = 0;
      local_68 = CONCAT44(local_68._4_4_,(int)uStack_50);
      FUN_145c3a38c(&local_70,uStack_50 & 0xffffffff);
      FUN_145c3a364(local_70,lVar8,uVar4 & 0xffffffff);
      local_60 = 0x41f00000;
      lVar6 = (longlong)*(int *)(param_1 + 0x148);
      uVar5 = *(int *)(param_1 + 0x148) + 1;
      *(uint *)(param_1 + 0x148) = uVar5;
      if (*(uint *)(param_1 + 0x14c) < uVar5) {
        FUN_145c3a466((longlong *)(param_1 + 0x140));
      }
      lVar7 = *(longlong *)(param_1 + 0x140);
      *(undefined8 *)(lVar7 + lVar6 * 0x18) = 0;
      *(longlong *)(lVar7 + lVar6 * 0x18) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar7 + 8 + lVar6 * 0x18) = (undefined4)local_68;
      *(undefined4 *)(lVar7 + 0xc + lVar6 * 0x18) = local_68._4_4_;
      local_68 = 0;
      *(undefined4 *)(lVar7 + 0x10 + lVar6 * 0x18) = local_60;
      FUN_1403472eb(0,0);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1403472eb(local_58,(int)uStack_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3a364 FUN_145c3a364 body=40 status=ok
// SIG undefined FUN_145c3a364(void)

void FUN_145c3a364(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 145c3a38c FUN_145c3a38c body=86 status=ok
// SIG undefined FUN_145c3a38c(void)

void FUN_145c3a38c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
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



// FUNCTION 145c3a3e2 FUN_145c3a3e2 body=132 status=ok
// SIG undefined FUN_145c3a3e2(void)

void FUN_145c3a3e2(longlong param_1,int param_2)

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



// FUNCTION 145c3a466 FUN_145c3a466 body=147 status=ok
// SIG undefined FUN_145c3a466(void)

void FUN_145c3a466(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c3a4fa FUN_145c3a4fa body=9 status=ok
// SIG undefined FUN_145c3a4fa(void)

void FUN_145c3a4fa(longlong param_1)

{
  FUN_145c3a504(param_1 + 0x10);
  return;
}



// FUNCTION 145c3a504 FUN_145c3a504 body=76 status=ok
// SIG undefined FUN_145c3a504(void)

void FUN_145c3a504(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b242840;
  plVar3 = (longlong *)param_1[0x16];
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
  FUN_145c3a550(param_1);
  return;
}



// FUNCTION 145c3a550 FUN_145c3a550 body=87 status=ok
// SIG undefined FUN_145c3a550(void)

void FUN_145c3a550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b243170;
  FUN_145c3a5a7(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2431f0;
  FUN_141069212(param_1 + 0xb);
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 145c3a5a7 FUN_145c3a5a7 body=49 status=ok
// SIG undefined FUN_145c3a5a7(void)

void FUN_145c3a5a7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c3a5d8 FUN_145c3a5d8 body=53 status=ok
// SIG undefined FUN_145c3a5d8(void)

void FUN_145c3a5d8(longlong *param_1)

{
  FUN_145c3a60e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3a60e FUN_145c3a60e body=339 status=ok
// SIG undefined FUN_145c3a60e(void)

void FUN_145c3a60e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_14032314d(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3a762 FUN_145c3a762 body=40 status=ok
// SIG undefined FUN_145c3a762(void)

undefined8 FUN_145c3a762(undefined8 param_1,int param_2)

{
  FUN_145c3a78a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3a78a FUN_145c3a78a body=112 status=ok
// SIG undefined FUN_145c3a78a(void)

void FUN_145c3a78a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad83f60;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3a7fa(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  return;
}



// FUNCTION 145c3a7fa FUN_145c3a7fa body=53 status=ok
// SIG undefined FUN_145c3a7fa(void)

void FUN_145c3a7fa(longlong *param_1)

{
  FUN_145c3a830();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3a830 FUN_145c3a830 body=90 status=ok
// SIG undefined FUN_145c3a830(void)

void FUN_145c3a830(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c3a88a FUN_145c3a88a body=347 status=ok
// SIG undefined FUN_145c3a88a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c3a88a(void)

{
  longlong lVar1;
  
  _DAT_14c82ba00 = 0;
  DAT_14c82ba10 = 0;
  DAT_14c82ba20 = 0;
  DAT_14c82ba50 = 0;
  _DAT_14c82ba58 = 0;
  uRam000000014c82ba60 = 0;
  _DAT_14c82ba68 = &DAT_14c8335c8;
  DAT_14c82ba70 = 0;
  _DAT_14c82ba78 = &DAT_14c833608;
  _DAT_14c82ba80 = 0;
  DAT_14c82ba90 = 0;
  DAT_14c82baa0 = 0;
  DAT_14c82bad0 = 0;
  _DAT_14c82bad8 = 0;
  uRam000000014c82bae0 = 0;
  _DAT_14c82bae8 = &DAT_14c8335c8;
  DAT_14c82baf0 = 0;
  _DAT_14c82baf8 = &DAT_14c833608;
  lVar1 = 0x100;
  do {
    FUN_1414fc09c(&DAT_14c82ba00 + lVar1);
    lVar1 = lVar1 + 0x1200;
  } while (lVar1 != 0x5b00);
  memset(&DAT_14c831500,0,0x2004);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c833580);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c833580,4000);
  DAT_14c8335a8 = 0;
  _DAT_14c8335b0 = 0;
  DAT_14c8335b8 = 0;
  _DAT_14c8335c0 = 0;
  DAT_14c8335c8 = 0;
  _DAT_14c8335d0 = 0;
  _DAT_14c8335d8 = 0;
  uRam000000014c8335e0 = 0;
  _DAT_14c8335e8 = 0;
  uRam000000014c8335f0 = 0;
  _DAT_14c8335f8 = 0x200000000;
  DAT_14c833600 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c833608);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c833608,4000);
  _DAT_14c833630 = 0;
  uRam000000014c833638 = 0;
  _DAT_14c833640 = 2;
  return;
}



// FUNCTION 145c3a9e6 FUN_145c3a9e6 body=40 status=ok
// SIG undefined FUN_145c3a9e6(void)

undefined8 FUN_145c3a9e6(undefined8 param_1,int param_2)

{
  FUN_145c3aa0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3aa0e FUN_145c3aa0e body=159 status=ok
// SIG undefined FUN_145c3aa0e(void)

void FUN_145c3aa0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b368f30;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3aaae(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3aae4(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c3aaae FUN_145c3aaae body=53 status=ok
// SIG undefined FUN_145c3aaae(void)

void FUN_145c3aaae(longlong *param_1)

{
  FUN_145c3ab1a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3aae4 FUN_145c3aae4 body=53 status=ok
// SIG undefined FUN_145c3aae4(void)

void FUN_145c3aae4(longlong *param_1)

{
  FUN_145c3ac58();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3ab1a FUN_145c3ab1a body=317 status=ok
// SIG undefined FUN_145c3ab1a(void)

void FUN_145c3ab1a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c3ac58 FUN_145c3ac58 body=360 status=ok
// SIG undefined FUN_145c3ac58(void)

void FUN_145c3ac58(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c3adc2 FUN_145c3adc2 body=82 status=ok
// SIG undefined FUN_145c3adc2(void)

undefined8 * FUN_145c3adc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1414fc186();
  *param_1 = &PTR_FUN_14b3f3cf0;
  param_1[0x1a] = 0xffffffffbf800000;
  uVar1 = DAT_14c8464e8;
  param_1[0x1b] = DAT_14c8464e0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = DAT_14c8464f0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 145c3ae14 FUN_145c3ae14 body=40 status=ok
// SIG undefined FUN_145c3ae14(void)

undefined8 FUN_145c3ae14(undefined8 param_1,int param_2)

{
  FUN_145c3ae3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c3ae3c FUN_145c3ae3c body=612 status=ok
// SIG undefined FUN_145c3ae3c(void)

void FUN_145c3ae3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa118c0;
  param_1[5] = &PTR_FUN_14aa122e0;
  param_1[6] = &PTR_LAB_14aa12320;
  param_1[0x55] = &PTR_FUN_14aa12370;
  param_1[0x56] = &PTR_FUN_14aa123f0;
  param_1[0x57] = &PTR_FUN_14aa12400;
  puVar1 = (undefined8 *)param_1[0x10d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0xff] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xfe) = 0;
  if (param_1[0xfd] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3b0a0(param_1 + 0xf5);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (param_1[0xf3] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3b0a0(param_1 + 0xeb);
  *(undefined4 *)(param_1 + 0xea) = 0;
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3b106(param_1 + 0xe1);
  FUN_145c3b0d5(param_1[0xde],*(undefined4 *)(param_1 + 0xdf));
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xdd) = 0;
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  FUN_145c3b13c(param_1 + 0xd4);
  FUN_144760e21(param_1[0xd1],*(undefined4 *)(param_1 + 0xd2));
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xce],*(undefined4 *)(param_1 + 0xcf));
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xcb],*(undefined4 *)(param_1 + 0xcc));
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145c3b0a0 FUN_145c3b0a0 body=53 status=ok
// SIG undefined FUN_145c3b0a0(void)

void FUN_145c3b0a0(longlong *param_1)

{
  FUN_145c3b172();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c3b0d5 FUN_145c3b0d5 body=49 status=ok
// SIG undefined FUN_145c3b0d5(void)

void FUN_145c3b0d5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


