// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14154aaea FUN_14154aaea body=1320 status=ok
// SIG undefined FUN_14154aaea(void)

void FUN_14154aaea(PSRWLOCK param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  PSRWLOCK pRVar16;
  ulonglong uVar17;
  PSRWLOCK pRVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  uint uVar15;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  AcquireSRWLockExclusive(param_1);
  DVar3 = GetCurrentThreadId();
  *(DWORD *)&param_1[0x14].Ptr = DVar3;
  uVar4 = *(uint *)&param_1[1].Ptr;
  do {
    LOCK();
    uVar6 = *(uint *)&param_1[1].Ptr;
    bVar20 = uVar4 == uVar6;
    if (bVar20) {
      *(uint *)&param_1[1].Ptr = uVar4 | 1;
      uVar6 = uVar4;
    }
    uVar4 = uVar6;
    UNLOCK();
  } while (!bVar20);
  while (1 < uVar4) {
    FUN_14000f986(0);
    uVar4 = *(uint *)&param_1[1].Ptr;
  }
  cVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  if (cVar2 == '\0') {
    iVar7 = *(int *)&param_1[10].Ptr;
    iVar5 = FUN_145ca16ac(param_1 + 9,&local_40);
    if (iVar5 != iVar7) goto LAB_14154ace5;
    uVar6 = (**(code **)(*local_40 + 0x50))();
    uVar4 = *(uint *)&param_1[0x18].Ptr;
    if (uVar4 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar7 = uVar4 - 1;
      }
      iVar7 = iVar7 >> 5;
    }
    pRVar18 = param_1 + 0x16;
    iVar5 = uVar4 + 1;
    uVar15 = uVar4 + 0x1f;
    if (-1 < (int)uVar4) {
      uVar15 = uVar4;
    }
    iVar14 = (int)uVar15 >> 5;
    if (iVar14 == iVar7) {
      *(int *)&param_1[0x18].Ptr = iVar5;
      lVar12 = 0xb8;
      iVar14 = iVar7;
    }
    else {
      iVar7 = *(int *)((longlong)&param_1[0x18].Ptr + 4);
      if (iVar7 <= (int)uVar4) {
        uVar15 = uVar4;
        if (uVar4 + 0x20 < 0x40) {
          iVar7 = 0x20;
        }
        else {
          uVar19 = uVar4 + 0x20 >> 5;
          if (iVar7 + 0x1fU < 0x40) {
            uVar11 = 4;
            if (4 < uVar19) {
              uVar11 = uVar19;
            }
          }
          else {
            uVar11 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar9 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar9 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar9 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
              }
              else {
                uVar10 = uVar9 + 0xf & 0xfffffffffffffff0;
                if (uVar10 < 0x7ff1) {
                  bVar1 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar13 = 0x32;
                  if (0x32 < bVar1) {
                    uVar13 = (ulonglong)bVar1;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar1;
                  do {
                    uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14154ae72;
                    lVar12 = uVar13 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar12 != 0x33);
                }
                uVar9 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar9 = (ulonglong)DAT_14c841df8;
                }
                uVar9 = -uVar9 & (uVar10 + uVar9) - 1;
              }
            }
            else {
              uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
              uVar15 = *(uint *)&param_1[0x18].Ptr;
            }
          }
LAB_14154ae72:
          iVar5 = (int)(uVar9 >> 2);
          iVar7 = -0x20;
          if ((int)uVar19 <= iVar5) {
            iVar7 = iVar5 << 5;
          }
        }
        *(int *)((longlong)&param_1[0x18].Ptr + 4) = iVar7;
        FUN_14008f53c(pRVar18,uVar15);
        iVar5 = *(int *)&param_1[0x18].Ptr + 1;
      }
      *(int *)&param_1[0x18].Ptr = iVar5;
      iVar7 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar7 = iVar5;
      }
      lVar12 = 0xb8;
      iVar5 = iVar5 % 0x20;
      if (iVar5 != 0) {
        pRVar16 = param_1[0x17].Ptr;
        goto LAB_14154ac99;
      }
    }
  }
  else {
    iVar7 = *(int *)&param_1[0xc].Ptr;
    iVar5 = FUN_145ca16ac(param_1 + 0xb,&local_40);
    if (iVar5 != iVar7) goto LAB_14154ace5;
    uVar6 = (**(code **)(*local_40 + 0x50))();
    uVar4 = *(uint *)&param_1[0x1b].Ptr;
    if (uVar4 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar7 = uVar4 - 1;
      }
      iVar7 = iVar7 >> 5;
    }
    pRVar18 = param_1 + 0x19;
    iVar5 = uVar4 + 1;
    uVar15 = uVar4 + 0x1f;
    if (-1 < (int)uVar4) {
      uVar15 = uVar4;
    }
    iVar14 = (int)uVar15 >> 5;
    if (iVar14 == iVar7) {
      *(int *)&param_1[0x1b].Ptr = iVar5;
      lVar12 = 0xd0;
      iVar14 = iVar7;
    }
    else {
      iVar7 = *(int *)((longlong)&param_1[0x1b].Ptr + 4);
      if (iVar7 <= (int)uVar4) {
        uVar15 = uVar4;
        if (uVar4 + 0x20 < 0x40) {
          iVar7 = 0x20;
        }
        else {
          uVar19 = uVar4 + 0x20 >> 5;
          if (iVar7 + 0x1fU < 0x40) {
            uVar11 = 4;
            if (4 < uVar19) {
              uVar11 = uVar19;
            }
          }
          else {
            uVar11 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar9 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar9 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar9 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
              }
              else {
                uVar10 = uVar9 + 0xf & 0xfffffffffffffff0;
                if (uVar10 < 0x7ff1) {
                  bVar1 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar13 = 0x32;
                  if (0x32 < bVar1) {
                    uVar13 = (ulonglong)bVar1;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar1;
                  do {
                    uVar9 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14154adbc;
                    lVar12 = uVar13 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar12 != 0x33);
                }
                uVar9 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar9 = (ulonglong)DAT_14c841df8;
                }
                uVar9 = -uVar9 & (uVar10 + uVar9) - 1;
              }
            }
            else {
              uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
              uVar15 = *(uint *)&param_1[0x1b].Ptr;
            }
          }
LAB_14154adbc:
          iVar5 = (int)(uVar9 >> 2);
          iVar7 = -0x20;
          if ((int)uVar19 <= iVar5) {
            iVar7 = iVar5 << 5;
          }
        }
        *(int *)((longlong)&param_1[0x1b].Ptr + 4) = iVar7;
        FUN_14008f53c(pRVar18,uVar15);
        iVar5 = *(int *)&param_1[0x1b].Ptr + 1;
      }
      *(int *)&param_1[0x1b].Ptr = iVar5;
      iVar7 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar7 = iVar5;
      }
      lVar12 = 0xd0;
      iVar5 = iVar5 % 0x20;
      if (iVar5 != 0) {
        pRVar16 = param_1[0x1a].Ptr;
LAB_14154ac99:
        if (pRVar16 == (PSRWLOCK)0x0) {
          pRVar16 = pRVar18;
        }
        *(uint *)((longlong)&pRVar16->Ptr + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)&pRVar16->Ptr + (longlong)(iVar7 >> 5) * 4) <<
                   (-(char)iVar5 & 0x1fU)) >> (-(char)iVar5 & 0x1fU);
      }
    }
  }
  pRVar16 = *(PSRWLOCK *)((longlong)&param_1->Ptr + lVar12);
  if (pRVar16 != (PSRWLOCK)0x0) {
    pRVar18 = pRVar16;
  }
  *(uint *)((longlong)&pRVar18->Ptr + (longlong)iVar14 * 4) =
       (uVar6 & 0xff) << ((byte)uVar4 & 0x1f) |
       *(uint *)((longlong)&pRVar18->Ptr + (longlong)iVar14 * 4) & ~(1 << (uVar4 & 0x1f));
LAB_14154ace5:
  LOCK();
  *(uint *)&param_1[1].Ptr = *(uint *)&param_1[1].Ptr & 0xfffffffe;
  UNLOCK();
  *(undefined4 *)&param_1[0x14].Ptr = 0xffffffff;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014154ad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 14154b014 FUN_14154b014 body=203 status=ok
// SIG undefined FUN_14154b014(void)

undefined8 * FUN_14154b014(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14ac8d410;
  FUN_1412cbb62(param_1 + 4);
  *param_1 = &PTR_FUN_14ac8d0e0;
  param_1[4] = &PTR_FUN_14ac8d100;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 14154b0e0 FUN_14154b0e0 body=52 status=ok
// SIG undefined FUN_14154b0e0(void)

undefined4 FUN_14154b0e0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_14127aa70(uVar1,param_2);
  if (lVar2 == 0) {
    uVar3 = 0x3f800000;
  }
  else {
    uVar3 = *(undefined4 *)(lVar2 + 0x7c);
  }
  return uVar3;
}



// FUNCTION 14154b114 FUN_14154b114 body=398 status=ok
// SIG undefined FUN_14154b114(void)

byte FUN_14154b114(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined2 *puVar5;
  byte bVar6;
  int iVar7;
  bool bVar8;
  undefined2 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  byte local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_61 = 0;
  bVar3 = false;
  bVar6 = 0;
  bVar2 = true;
  local_90 = param_2;
  do {
    bVar8 = bVar2;
    if (bVar3) {
      if (*local_90 == 0) break;
      FUN_1400021e4(local_90,&local_88);
      FUN_140ba7826(&local_78,&DAT_149e001d8,&local_88);
      puVar9 = local_78;
      iVar7 = (int)uStack_70;
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar7 = 0;
      puVar9 = (undefined2 *)0x0;
    }
    FUN_1400021e4(param_1,&local_88);
    puVar5 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar5 = local_88;
    }
    FUN_140002266(&local_78,L"OnlineSubsystem%s",puVar5);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar1 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_78,puVar9,iVar1);
    puVar5 = &DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      puVar5 = local_78;
    }
    local_98 = &DAT_14c872ce8;
    bVar4 = FUN_14052bb08(DAT_14c872ce0,puVar5,L"bEnabled",&local_61);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar9 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar9);
    }
    bVar6 = bVar6 | bVar4;
    bVar3 = true;
    bVar2 = false;
  } while (bVar8);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (~bVar6 | local_61) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154b2a4 FUN_14154b2a4 body=164 status=ok
// SIG undefined FUN_14154b2a4(void)

void FUN_14154b2a4(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXSwizzle";
  local_38 = 0x22;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13d00,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154b34a FUN_14154b34a body=68 status=ok
// SIG undefined FUN_14154b34a(void)

undefined8 * FUN_14154b34a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1406f625c(param_2);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(lVar1 + 0x158);
    lVar1 = *(longlong *)(lVar1 + 0x160);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 14154b38e FUN_14154b38e body=95 status=ok
// SIG undefined FUN_14154b38e(void)

void FUN_14154b38e(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x7e);
  if ((bool)*(char *)(param_1 + 0x7d) != (cVar1 != '\0')) {
    *(bool *)(param_1 + 0x7d) = cVar1 != '\0';
    if (cVar1 == '\0') {
      FUN_1449db8d8(param_1);
      return;
    }
    FUN_144958d50(param_1);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      uVar2 = 0x3e4ccccd;
    }
    else {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  return;
}



// FUNCTION 14154b3ee FUN_14154b3ee body=466 status=ok
// SIG undefined FUN_14154b3ee(void)

void FUN_14154b3ee(longlong *param_1,code *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_30 = param_2;
  uVar3 = FUN_14477b072(param_1,DAT_14cac9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (param_2 != (code *)0x0) {
    if (DAT_14cacf818 == 0) {
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463b216c;
      local_58 = &LAB_1479977e3;
      local_60 = &LAB_1463b2171;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x750;
      local_50 = &local_30;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) {
      cVar2 = FUN_1449ce97a(param_2);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x389) = (int)param_1[0x389] + 1;
        cVar2 = FUN_145d8abce(param_1,3);
        if (cVar2 != '\0') {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_2);
          }
          iVar1 = (int)param_1[0x378];
          *(uint *)(param_1 + 0x378) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1bc4) < iVar1 + 1U) {
            FUN_140b51998(param_1 + 0x377,iVar1);
          }
          *(code **)(param_1[0x377] + (longlong)iVar1 * 8) = param_2;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154b5d6 FUN_14154b5d6 body=301 status=ok
// SIG undefined FUN_14154b5d6(void)

void FUN_14154b5d6(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c990bc8 != 0) {
    FUN_144bbeb60();
    DAT_14c990bc8 = 0;
  }
  if (DAT_14c990be8 != 0) {
    FUN_144bba490();
    DAT_14c990be8 = 0;
  }
  FUN_144bb6a70();
  if (DAT_14c990bf0 == '\x01') {
    DAT_14c990bf0 = '\0';
  }
  local_20 = &DAT_149f27af2;
  local_18 = 3;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
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
  lVar2 = FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
  (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x10))();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154b704 FUN_14154b704 body=355 status=ok
// SIG undefined FUN_14154b704(void)

void FUN_14154b704(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = (**(code **)(*DAT_14c990d68 + 0xd0))();
  FUN_1448a8284(uVar5);
  uVar5 = (**(code **)(*DAT_14c990d80 + 0xd0))();
  FUN_1448a8284(uVar5);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e0));
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar6 = 0;
    lVar7 = 8;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -8 + lVar7);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar7);
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x150))();
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 0x150))();
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
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e0));
  if (*(int *)(param_1 + 0xd0) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 200);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72((longlong *)(param_1 + 200),0,0,0x10);
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72((longlong *)(param_1 + 0xd8),0,0,0x10);
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  FUN_14291af4c(param_1,2);
  return;
}



// FUNCTION 14154b868 FUN_14154b868 body=67 status=ok
// SIG undefined FUN_14154b868(void)

void FUN_14154b868(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[2];
  do {
    puVar2 = (undefined8 *)*puVar3;
    FUN_1400020a8(puVar3);
    bVar4 = puVar3 != puVar1;
    puVar3 = puVar2;
  } while (bVar4);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar1;
  }
  return;
}



// FUNCTION 14154b8ac FUN_14154b8ac body=663 status=ok
// SIG undefined FUN_14154b8ac(void)

void FUN_14154b8ac(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_638 [32];
  undefined1 local_618;
  undefined1 *local_610;
  undefined1 local_600 [8];
  undefined1 local_5f8 [8];
  undefined1 local_5f0;
  undefined1 local_5e8 [8];
  undefined1 local_5e0;
  LARGE_INTEGER local_5d8 [2];
  undefined ***local_5c8;
  undefined **local_5b8;
  longlong *local_5b0;
  undefined1 local_598 [1384];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_638;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xa8))();
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
      plVar2 = (longlong *)param_1[2];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1);
      }
      param_1[2] = 0;
    }
    *(undefined2 *)(param_1 + 3) = 0x101;
  }
  else {
    FUN_145efa1cc(local_598);
    FUN_146b1b8d6(local_598);
    local_5c8 = (undefined ***)0x0;
    local_5b8 = &PTR_LAB_149f2a5e0;
    local_5d8[0].QuadPart = (LONGLONG)FUN_14291f5be;
    local_5b0 = (longlong *)local_598;
    (**(code **)(*plVar2 + 0x10))(plVar2,local_5d8);
    if ((code *)local_5d8[0].QuadPart != (code *)0x0) {
      pppuVar3 = local_5c8;
      if (local_5c8 == (undefined ***)0x0) {
        pppuVar3 = &local_5b8;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    auVar4 = roundpd(ZEXT816(0x4197d78402000000),ZEXT816(0x4197d78402000000),1);
    QueryPerformanceCounter(local_5d8);
    local_5b0 = (longlong *)((double)local_5d8[0].QuadPart * DAT_14c83f420 + 16777216.0);
    local_610 = local_5e8;
    local_5e0 = 0;
    local_5c8 = (undefined ***)0x0;
    local_5b8 = &PTR_LAB_149f2a600;
    local_5d8[0].QuadPart = (LONGLONG)&DAT_14291f65a;
    local_618 = 1;
    FUN_145f97fd6(local_598,local_600,local_5d8,(longlong)auVar4._0_8_);
    if ((undefined *)local_5d8[0].QuadPart != (undefined *)0x0) {
      pppuVar3 = local_5c8;
      if (local_5c8 == (undefined ***)0x0) {
        pppuVar3 = &local_5b8;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    if ((char)param_1[3] == '\x01') {
      auVar4 = roundpd(ZEXT816(0x40c3884000000000),ZEXT816(0x40c3884000000000),1);
      local_610 = local_5f8;
      local_5f0 = 0;
      local_5c8 = (undefined ***)0x0;
      local_5b8 = &PTR_LAB_149f2a620;
      local_5d8[0].QuadPart = (LONGLONG)&LAB_14291f690;
      local_618 = 1;
      local_5b0 = plVar2;
      FUN_145f97fd6(local_598,local_600,local_5d8,(longlong)auVar4._0_8_);
      if ((undefined *)local_5d8[0].QuadPart != (undefined *)0x0) {
        pppuVar3 = &local_5b8;
        if (local_5c8 != (undefined ***)0x0) {
          pppuVar3 = local_5c8;
        }
        (*(code *)(*pppuVar3)[2])(pppuVar3);
      }
    }
    do {
      cVar1 = FUN_14291f1e0(local_598,0x7fffffffffffffff);
    } while (cVar1 != '\0');
    FUN_145a5b346(local_598);
    plVar2 = (longlong *)param_1[2];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,1);
      plVar2 = (longlong *)param_1[2];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,1);
      }
      param_1[2] = 0;
    }
    *(undefined2 *)(param_1 + 3) = 0x101;
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154bb44 FUN_14154bb44 body=198 status=ok
// SIG undefined FUN_14154bb44(void)

undefined8 *
FUN_14154bb44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined2 *puVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_50,puVar1,1);
  local_80 = param_6;
  local_88 = param_5;
  local_60 = 0;
  local_68 = 0;
  local_78 = param_3;
  local_70 = param_4;
  FUN_1411bc492(param_1,3,local_50,&local_48);
  *param_1 = &PTR_FUN_149eeb470;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154bc0c FUN_14154bc0c body=203 status=ok
// SIG undefined FUN_14154bc0c(void)

undefined8 * FUN_14154bc0c(undefined8 *param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  double dVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_78 = param_4;
  local_70 = param_2;
  FUN_1411bc492(param_1,4,0,&local_58);
  *param_1 = &PTR_FUN_149eeb588;
  dVar1 = (double)param_3;
  param_1[8] = dVar1;
  param_1[9] = dVar1;
  param_1[10] = dVar1;
  param_1[0xb] = dVar1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154bcd8 FUN_14154bcd8 body=257 status=ok
// SIG undefined FUN_14154bcd8(void)

void FUN_14154bcd8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x960,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb5d0;
  FUN_141479b70(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
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
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154bdda FUN_14154bdda body=257 status=ok
// SIG undefined FUN_14154bdda(void)

void FUN_14154bdda(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x1cd0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149ee9bd0;
  FUN_14627d6e6(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
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
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154bedc FUN_14154bedc body=659 status=ok
// SIG undefined FUN_14154bedc(void)

undefined8 * FUN_14154bedc(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149e01220;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = param_3;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  lVar3 = FUN_140021065();
  puVar4 = (undefined8 *)FUN_140021018(lVar3);
  puVar7 = (undefined8 *)puVar4[1];
  if (puVar7 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar4 + 2) + -1;
    goto LAB_14154bf68;
  }
  puVar7 = (undefined8 *)*puVar4;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14154c170(lVar3 + 0x40);
    puVar4[1] = puVar7;
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar4[1] = puVar7;
      iVar2 = 0x185;
      puVar8 = puVar7;
      do {
        puVar6 = puVar8 + 0x15;
        *puVar8 = puVar6;
        iVar2 = iVar2 + -1;
        puVar8 = puVar6;
      } while (iVar2 != 0);
      goto LAB_14154c0db;
    }
  }
  else {
    puVar4[1] = puVar7;
    puVar6 = puVar4;
LAB_14154c0db:
    *puVar6 = 0;
  }
  *(undefined4 *)(puVar4 + 2) = 0x186;
  iVar2 = 0x185;
LAB_14154bf68:
  puVar4[1] = *puVar7;
  *(int *)(puVar4 + 2) = iVar2;
  FUN_1447247dc(puVar7,0);
  *puVar7 = &PTR_FUN_149e00300;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
  }
  puVar7[0xf] = uVar5;
  puVar7[0x10] = 0xc80000527800c400;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 2;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149e01cf0;
  local_78[0] = FUN_14274ac4e;
  puVar4 = (undefined8 *)param_1[0xe];
  local_50 = param_1;
  local_48 = puVar7;
  if (puVar4 != puVar7) {
    param_1[0xe] = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  (**(code **)(*param_2 + 8))(param_2,local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar9 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar9 = &local_58;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14154c170 FUN_14154c170 body=363 status=ok
// SIG undefined FUN_14154c170(void)

undefined8 FUN_14154c170(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar2 = *param_1;
  uVar7 = (uint)uVar2;
  while( true ) {
    if ((uVar2 & 0x3ffffff) == 0) {
      return 0;
    }
    uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar6 = (ulonglong)((uVar7 & 0x3ffffff) >> 0xe);
    uVar8 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar3 = *(longlong *)(&DAT_14c833b00 + uVar6 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar5 | *(uint *)(lVar3 + 0x10 + uVar8 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
  }
  *(undefined4 *)(lVar3 + uVar8 * 0x18 + 0x10) = 0;
  uVar4 = *(undefined8 *)
           (*(longlong *)(&DAT_14c833b00 + uVar6 * 8) + 8 + (ulonglong)(uVar7 & 0x3fff) * 0x18);
  if (DAT_14c833980 == '\0') {
    DAT_14c833940 = 0;
    DAT_14c833900 = TlsAlloc();
    DAT_14c833980 = '\x01';
  }
  FUN_140108a06(uVar7 & 0x3ffffff);
  return uVar4;
}



// FUNCTION 14154c2db FUN_14154c2db body=1 status=ok
// SIG undefined FUN_14154c2db(void)

void FUN_14154c2db(void)

{
  return;
}



// FUNCTION 14154c2dc FUN_14154c2dc body=181 status=ok
// SIG undefined FUN_14154c2dc(void)

void FUN_14154c2dc(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (((param_2 != 0 & DAT_14c75f464) == 1) && (uVar2 = (ulonglong)DAT_14c9997a8, uVar2 < 8)) {
    if (uVar2 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)((longlong)&DAT_14c9996e8 + lVar3) == param_2) {
          return;
        }
        lVar3 = lVar3 + 0x18;
      } while (uVar2 * 0x18 != lVar3);
    }
    lVar3 = FUN_145949e8c();
    uVar1 = DAT_14c9997a8;
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar3 = (longlong)(int)DAT_14c9997a8;
      DAT_14c9997a8 = DAT_14c9997a8 + 1;
      if (DAT_14c9997ac < DAT_14c9997a8) {
        FUN_146f2fd52(uVar1);
      }
      (&DAT_14c9996e8)[lVar3 * 3] = param_2;
      (&DAT_14c9996f0)[lVar3 * 3] = param_1;
      (&DAT_14c9996f8)[lVar3 * 0x18] = (char)uVar1;
    }
  }
  return;
}



// FUNCTION 14154c392 FUN_14154c392 body=164 status=ok
// SIG undefined FUN_14154c392(void)

void FUN_14154c392(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebc40,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c438 FUN_14154c438 body=164 status=ok
// SIG undefined FUN_14154c438(void)

void FUN_14154c438(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebc28,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c4de FUN_14154c4de body=164 status=ok
// SIG undefined FUN_14154c4de(void)

void FUN_14154c4de(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Vectors";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Vectors";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeae48,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c584 FUN_14154c584 body=164 status=ok
// SIG undefined FUN_14154c584(void)

void FUN_14154c584(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Constants";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Constants";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeac98,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c62a FUN_14154c62a body=164 status=ok
// SIG undefined FUN_14154c62a(void)

void FUN_14154c62a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebc88,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c6d0 FUN_14154c6d0 body=164 status=ok
// SIG undefined FUN_14154c6d0(void)

void FUN_14154c6d0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebc70,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c776 FUN_14154c776 body=164 status=ok
// SIG undefined FUN_14154c776(void)

void FUN_14154c776(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebce8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c81c FUN_14154c81c body=164 status=ok
// SIG undefined FUN_14154c81c(void)

void FUN_14154c81c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebcb8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c8c2 FUN_14154c8c2 body=164 status=ok
// SIG undefined FUN_14154c8c2(void)

void FUN_14154c8c2(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXSplitLeftRight";
  local_38 = 0x29;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13ca0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154c968 FUN_14154c968 body=164 status=ok
// SIG undefined FUN_14154c968(void)

void FUN_14154c968(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXSplitLeftRight";
  local_38 = 0x29;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13cd0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154ca0d FUN_14154ca0d body=73 status=ok
// SIG undefined FUN_14154ca0d(void)

void FUN_14154ca0d(longlong param_1,int param_2)

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



// FUNCTION 14154ca56 FUN_14154ca56 body=604 status=ok
// SIG undefined FUN_14154ca56(void)

undefined4 FUN_14154ca56(undefined8 param_1,char param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined2 *local_130;
  int local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_aa;
  undefined1 local_64;
  longlong local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_145be44b4(local_120);
  FUN_140056680(&local_130,L"quit_game");
  if (param_2 == '\0') {
    pwVar5 = L"_gameplay";
    uVar7 = 9;
  }
  else {
    pwVar5 = L"_main_menu";
    uVar7 = 10;
  }
  FUN_1400020e8(&local_130,pwVar5,uVar7);
  if (param_3 != '\0') {
    FUN_1400020e8(&local_130,L"_party",6);
  }
  FUN_1400020e8(&local_130,&DAT_14b9abda4,3);
  puVar6 = local_130;
  if (local_128 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(local_138,puVar6,1);
  FUN_1446dcdd4(local_58,local_138);
  if (DAT_14cbe4310 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_144837462(DAT_14cbe4310,local_58);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar3 = local_60;
  plVar2 = local_118;
  if (local_60 != 0) {
    plVar1 = *(longlong **)(local_60 + 0x28);
    if (local_118 != plVar1) {
      local_118 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_110 = *(undefined4 *)(lVar3 + 0x30);
    FUN_140390f7a(local_60 + 0x38,local_f8);
    lVar3 = local_60;
    plVar1 = local_108;
    plVar2 = *(longlong **)(local_60 + 0x18);
    if (local_108 != plVar2) {
      local_108 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_100 = *(undefined4 *)(lVar3 + 0x20);
    FUN_1459de186(local_d8,param_4);
    local_b8 = *(undefined8 *)(local_60 + 0x70);
    local_b0 = *(undefined4 *)(local_60 + 0x78);
    local_ac = *(undefined1 *)(local_60 + 0xac);
    local_aa = *(undefined1 *)(local_60 + 0x7c);
    local_64 = *(undefined1 *)(local_60 + 0xae);
    FUN_145be4752(local_e8,local_60 + 0x60);
  }
  uVar4 = FUN_1459dda8e(param_1,local_120);
  if (local_130 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1459ddea2(local_120);
  if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14154ccb4 FUN_14154ccb4 body=48 status=ok
// SIG undefined FUN_14154ccb4(void)

void FUN_14154ccb4(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    return;
  }
  FUN_140628abc(param_1,1);
  FUN_1441aa338(param_1,1,0);
  return;
}



// FUNCTION 14154cce4 FUN_14154cce4 body=356 status=ok
// SIG undefined FUN_14154cce4(void)

undefined8 FUN_14154cce4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 local_30 [16];
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_14577a94c();
  FUN_141237a6a(local_30,param_2,uVar2);
  cVar1 = FUN_141318136(local_30);
  if (cVar1 != '\0') {
    cVar1 = FUN_1413f6f68();
    if (cVar1 != '\0') {
      lVar3 = FUN_1459afa08(local_30);
      if (lVar3 != 0) {
        if (DAT_14cbae3d8 == 0) {
          local_50 = &local_20;
          local_20 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464f5fc4;
          local_58 = &LAB_148c3dd26;
          local_60 = &LAB_1459673ba;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x1360;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        }
        if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
          cVar1 = FUN_14625992e(lVar3);
          uVar2 = 1;
          if (cVar1 == '\0') {
            uVar2 = FUN_146632196(lVar3);
          }
          goto LAB_14154cd31;
        }
      }
    }
  }
  uVar2 = 0;
LAB_14154cd31:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154ce4a FUN_14154ce4a body=289 status=ok
// SIG undefined FUN_14154ce4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14154ce4a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f4e98) {
    FUN_144b3d300(&DAT_14c9f4e98);
    if (DAT_14c9f4e98 == -1) {
      FUN_14154cf6c();
      FUN_145da52e0();
      FUN_140db5666(&DAT_14c9f4df0,0,&DAT_14c9f4d88,L"FReflectionTraceMeshSDFsCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",L"ReflectionTraceMeshSDFsCS"
                    ,5,0x30,FUN_1471efe6c,FUN_1471efe0c,&LAB_141769168,&LAB_142d4a448,&LAB_14712ac0c
                    ,&LAB_14712ac08,0xe0,&DAT_14c9f70b8);
      _DAT_14c9f4df0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a44b);
      _Init_thread_footer(&DAT_14c9f4e98);
    }
  }
  return &DAT_14c9f4df0;
}



// FUNCTION 14154cf6c FUN_14154cf6c body=258 status=ok
// SIG undefined FUN_14154cf6c(void)

void FUN_14154cf6c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f7138) {
    FUN_144b3d300(&DAT_14c9f7138);
    if (DAT_14c9f7138 == -1) {
      FUN_145da542a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x410;
      local_58 = 0x1cf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f70b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59615);
      _Init_thread_footer(&DAT_14c9f7138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d070 FUN_14154d070 body=164 status=ok
// SIG undefined FUN_14154d070(void)

void FUN_14154d070(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caec030,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d116 FUN_14154d116 body=164 status=ok
// SIG undefined FUN_14154d116(void)

void FUN_14154d116(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caec048,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d1bc FUN_14154d1bc body=164 status=ok
// SIG undefined FUN_14154d1bc(void)

void FUN_14154d1bc(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Extras";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caec060,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d262 FUN_14154d262 body=164 status=ok
// SIG undefined FUN_14154d262(void)

void FUN_14154d262(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_140208c1e(&DAT_14caec138,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d308 FUN_14154d308 body=164 status=ok
// SIG undefined FUN_14154d308(void)

void FUN_14154d308(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_140208c1e(&DAT_14caec168,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d3ae FUN_14154d3ae body=705 status=ok
// SIG undefined FUN_14154d3ae(void)

void FUN_14154d3ae(undefined8 param_1,longlong param_2)

{
  void *_Dst;
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong in_stack_00000030;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    lVar7 = FUN_144a78c84();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
       (lVar7 = FUN_14025708c(param_2,DAT_14c9abbf0), lVar7 != 0)) {
      iVar2 = *(int *)(lVar7 + 600);
      if ((longlong)iVar2 < 1) {
        lVar8 = 0;
LAB_14154d462:
        if ((int)lVar8 != iVar2) {
          local_d8 = 0x408f400000000000;
          local_c8 = 0xc08f400000000000;
          local_c0 = 0x406f400000000000;
          local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_88 = DAT_14c8464f0;
          local_68 = 0x40c3880000000000;
          local_58 = 0x402e000000000000;
          local_e0[0] = 0;
          local_d0 = 0;
          local_60 = 0;
          local_50 = 0;
          lStack_48 = 0;
          local_40 = 0;
          local_b8 = 1;
          local_a8 = 0x47efffffe0000000;
          local_a0 = 1;
          local_80 = (undefined4)DAT_14c8464e0;
          uStack_7c = DAT_14c8464e0._4_4_;
          uStack_78 = (undefined4)DAT_14c8464e8;
          uStack_74 = DAT_14c8464e8._4_4_;
          local_70 = DAT_14c8464f0;
          local_b0 = 0;
          FUN_1446f470e(&local_e8,L"Primary",1);
          FUN_145da7162(param_2,*(undefined8 *)(in_stack_00000030 + 0xf8),local_e0,local_e8);
          iVar2 = *(int *)(lVar7 + 0x248);
          uVar6 = iVar2 + 1;
          *(uint *)(lVar7 + 0x248) = uVar6;
          if (*(uint *)(lVar7 + 0x24c) < uVar6) {
            FUN_141020442(lVar7 + 0x240);
          }
          lVar8 = *(longlong *)(lVar7 + 0x240);
          lVar10 = (longlong)iVar2 * 0xb0;
          _Dst = (void *)(lVar8 + lVar10);
          memset(_Dst,0,0xb0);
          puVar1 = (undefined8 *)(lVar8 + lVar10);
          *puVar1 = **(undefined8 **)(lVar7 + 0x250);
          if (puVar1 + 0xc != &DAT_14c8464e0) {
            puVar1[0xe] = DAT_14c8464f0;
            uVar5 = DAT_14c8464e8._4_4_;
            uVar4 = (undefined4)DAT_14c8464e8;
            uVar3 = DAT_14c8464e0._4_4_;
            *(undefined4 *)(puVar1 + 0xc) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)((longlong)puVar1 + 100) = uVar3;
            *(undefined4 *)(puVar1 + 0xd) = uVar4;
            *(undefined4 *)((longlong)puVar1 + 0x6c) = uVar5;
            *(undefined1 *)((longlong)_Dst + 0x78) = 1;
          }
          if ((undefined8 *)((longlong)_Dst + 0x80) != &DAT_14c8464e0) {
            *(undefined8 *)((longlong)_Dst + 0x90) = DAT_14c8464f0;
            uVar5 = DAT_14c8464e8._4_4_;
            uVar4 = (undefined4)DAT_14c8464e8;
            uVar3 = DAT_14c8464e0._4_4_;
            *(undefined4 *)((longlong)_Dst + 0x80) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)((longlong)_Dst + 0x84) = uVar3;
            *(undefined4 *)((longlong)_Dst + 0x88) = uVar4;
            *(undefined4 *)((longlong)_Dst + 0x8c) = uVar5;
            *(undefined1 *)((longlong)_Dst + 0x98) = 1;
          }
          FUN_14583a3d2(&local_f0);
          FUN_14154d670(param_2 + 0x598,param_1,local_f0);
          if (lStack_48 != 0) {
            FUN_1402c7646(&local_50);
          }
        }
      }
      else {
        plVar9 = *(longlong **)(lVar7 + 0x250);
        lVar8 = 0;
        do {
          if (*plVar9 == *(longlong *)(in_stack_00000030 + 0xf8)) goto LAB_14154d462;
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 0x16;
        } while (iVar2 != lVar8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154d670 FUN_14154d670 body=108 status=ok
// SIG undefined FUN_14154d670(void)

void FUN_14154d670(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_1400dccb8(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x598,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154d6de FUN_14154d6de body=12 status=ok
// SIG undefined FUN_14154d6de(void)

byte FUN_14154d6de(longlong param_1)

{
  return (*(byte *)(param_1 + 0x369) & 4) >> 2;
}



// FUNCTION 14154d6ea FUN_14154d6ea body=12 status=ok
// SIG undefined FUN_14154d6ea(void)

byte FUN_14154d6ea(longlong param_1)

{
  return (*(byte *)(param_1 + 0x369) & 8) >> 3;
}



// FUNCTION 14154d6f6 FUN_14154d6f6 body=12 status=ok
// SIG undefined FUN_14154d6f6(void)

byte FUN_14154d6f6(longlong param_1)

{
  return (*(byte *)(param_1 + 0x369) & 0x10) >> 4;
}



// FUNCTION 14154d702 FUN_14154d702 body=87 status=ok
// SIG undefined FUN_14154d702(void)

void FUN_14154d702(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1400f7f2e();
  puVar2 = *(undefined8 **)(param_1 + 0x6c8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x660) = 0;
  FUN_140ad68d4(param_1 + 0x6e8);
  return;
}



// FUNCTION 14154d759 FUN_14154d759 body=964 status=ok
// SIG undefined FUN_14154d759(void)

/* WARNING: Removing unreachable block (ram,0x00014154d940) */

void FUN_14154d759(void)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  uVar5 = DAT_14cb987b8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((DAT_14cb98810 != (longlong *)0x0) && (DAT_14cb98910 != DAT_14cb9893c)) {
    puVar7 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar7 = DAT_14cb98948;
    }
    iVar1 = *(int *)(puVar7 + (ulonglong)(DAT_14cb98950 - 1U & DAT_14cb987b8) * 4);
    while (iVar1 != -1) {
      lVar16 = DAT_14cb98908 + (longlong)iVar1 * 0x20;
      if (*(uint *)(DAT_14cb98908 + (longlong)iVar1 * 0x20) == DAT_14cb987b8) {
        lVar11 = lVar16 + 8;
        if (lVar11 != 0 && lVar16 != 0) {
          if (((*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x150) != 0) &&
              (plVar8 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x148),
              plVar8 != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*plVar8 + 0x30))(), cVar3 != '\0')) {
            local_68 = (longlong *)0x0;
            uStack_60 = 0;
            iVar1 = *(int *)(lVar16 + 0x10);
            local_70 = lVar11;
            if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar1);
            }
            if (iVar1 != 0) {
              FUN_1408be2c4();
              iVar1 = *(int *)(lVar16 + 0x10);
              if ((longlong)iVar1 != 0) {
                lVar11 = *(longlong *)(lVar16 + 8);
                lVar12 = 0;
                uVar2 = uStack_50;
                do {
                  uStack_50 = uVar2;
                  local_58 = (void *)0x0;
                  uVar4 = *(uint *)(lVar11 + 8 + lVar12);
                  _Src = *(void **)(lVar11 + lVar12);
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
                  if ((longlong)(int)uVar4 == 0) {
                    uStack_50 = (ulonglong)uVar4;
                  }
                  else {
                    FUN_1446dd670(&local_58,uVar4,0);
                    memcpy(local_58,_Src,(longlong)(int)uVar4 * 2);
                  }
                  uVar2 = uStack_60;
                  lVar17 = (longlong)(int)uStack_60;
                  uVar4 = (int)uStack_60 + 1;
                  uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
                  if (uStack_60._4_4_ < uVar4) {
                    FUN_1447a1bd6(&local_68,uVar2 & 0xffffffff);
                  }
                  local_68[lVar17 * 2] = 0;
                  local_68[lVar17 * 2] = (longlong)local_58;
                  *(int *)(local_68 + lVar17 * 2 + 1) = (int)uStack_50;
                  *(uint *)((longlong)local_68 + lVar17 * 0x10 + 0xc) = uStack_50._4_4_;
                  uStack_50 = 0;
                  uVar2 = uStack_50;
                  uStack_50 = 0;
                  local_58 = (void *)0x0;
                  lVar12 = lVar12 + 200;
                } while ((longlong)iVar1 * 200 - lVar12 != 0);
              }
            }
            if (*(int *)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x150) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x148);
            }
            (**(code **)(*plVar8 + 0x58))(plVar8,&local_58,uVar5,&local_68);
            FUN_1410e5bda(&local_68,&local_58);
            FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
            if (local_58 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_58 = (void *)0x0;
            uStack_50 = 0;
            if ((longlong)*(int *)(lVar16 + 0x10) != 0) {
              plVar8 = *(longlong **)(lVar16 + 8);
              plVar18 = plVar8 + (longlong)*(int *)(lVar16 + 0x10) * 0x19;
              do {
                uVar2 = uStack_50;
                if ((longlong)(int)uStack_60 != 0) {
                  iVar1 = (int)plVar8[1];
                  plVar9 = local_68;
LAB_14154da76:
                  if ((int)plVar9[1] == iVar1) {
                    if (1 < iVar1) {
                      lVar16 = 0;
                      do {
                        uVar14 = *(ushort *)(*plVar9 + lVar16);
                        uVar15 = (ulonglong)uVar14;
                        uVar10 = *(ushort *)(*plVar8 + lVar16);
                        if (uVar14 == uVar10) {
                          if (uVar14 == 0) break;
                        }
                        else {
                          if (0x7f < (uVar10 | uVar14)) goto LAB_14154dad7;
                          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                          uVar13 = (ulonglong)uVar10;
                          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                          if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar13])
                          goto LAB_14154dad7;
                        }
                        lVar16 = lVar16 + 2;
                      } while( true );
                    }
                    goto LAB_14154dadf;
                  }
                  if ((int)plVar9[1] + iVar1 == 1) goto LAB_14154dadf;
                  goto LAB_14154da88;
                }
LAB_14154da56:
                plVar8 = plVar8 + 0x19;
              } while (plVar8 != plVar18);
            }
            lVar11 = local_70;
            FUN_146589888(local_70,&local_58);
            FUN_145da91ec(local_58,uStack_50 & 0xffffffff);
            if (local_58 != (void *)0x0) {
              FUN_1400020a8();
            }
            FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
            if (local_68 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          uVar6 = (**(code **)(*DAT_14cb98810 + 0xf8))();
          FUN_1461bcd44(uVar6,"Load_Notifications_List_Response",lVar11);
        }
        break;
      }
      iVar1 = *(int *)(lVar16 + 0x18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14154dad7:
  if (uVar14 == uVar10) {
LAB_14154dadf:
    lVar16 = (longlong)(int)uStack_50;
    uVar5 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
    if (uStack_50._4_4_ < uVar5) {
      FUN_148ac5928(&local_58,uVar2 & 0xffffffff);
    }
    FUN_148abf86e((void *)(lVar16 * 200 + (longlong)local_58),plVar8);
    goto LAB_14154da56;
  }
LAB_14154da88:
  plVar9 = plVar9 + 2;
  if (plVar9 == local_68 + (longlong)(int)uStack_60 * 2) goto LAB_14154da56;
  goto LAB_14154da76;
}



// FUNCTION 14154db20 FUN_14154db20 body=289 status=ok
// SIG undefined FUN_14154db20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14154db20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca146d0) {
    FUN_144b3d300(&DAT_14ca146d0);
    if (DAT_14ca146d0 == -1) {
      FUN_14154dc42();
      FUN_145da9942();
      FUN_140db5666(&DAT_14ca14628,0,&DAT_14ca145c0,L"FRasterClearCS",
                    L"/Engine/Private/Nanite/NaniteRasterClear.usf",L"RasterClear",5,8,FUN_1472519aa
                    ,FUN_14725194a,&LAB_142e0a26a,&LAB_147251946,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca17578);
      _DAT_14ca14628 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a2a4);
      _Init_thread_footer(&DAT_14ca146d0);
    }
  }
  return &DAT_14ca14628;
}



// FUNCTION 14154dc42 FUN_14154dc42 body=258 status=ok
// SIG undefined FUN_14154dc42(void)

void FUN_14154dc42(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca175f8) {
    FUN_144b3d300(&DAT_14ca175f8);
    if (DAT_14ca175f8 == -1) {
      FUN_145da9a8c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x26b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17578,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275c7);
      _Init_thread_footer(&DAT_14ca175f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154dd46 FUN_14154dd46 body=300 status=ok
// SIG undefined FUN_14154dd46(void)

undefined8 * FUN_14154dd46(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte bVar6;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar6 = DAT_14c950c29;
  param_1[3] = param_2[3];
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
    bVar6 = DAT_14c950c29;
  }
  param_1[5] = param_2[5];
  lVar1 = param_2[6];
  param_1[6] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
    bVar6 = DAT_14c950c29;
  }
  param_1[7] = param_2[7];
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  if ((lVar1 != 0 & bVar6) == 1) {
    FUN_1456cec3c();
  }
  param_1[9] = param_2[9];
  FUN_1406fd608(param_1 + 10,param_2 + 10);
  uVar2 = *(undefined4 *)((longlong)param_2 + 300);
  uVar3 = *(undefined4 *)(param_2 + 0x26);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
  FUN_1447a97f4(param_1 + 0x27,param_2 + 0x27);
  uVar5 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar5;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  return param_1;
}



// FUNCTION 14154de72 FUN_14154de72 body=296 status=ok
// SIG undefined FUN_14154de72(void)

void FUN_14154de72(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b9837a0;
  if (param_1[0xda] != 0) {
    lVar1 = FUN_1460658f4(param_1);
    if ((lVar1 != 0) && (param_1[0xda] != 0)) {
      FUN_14480f766(lVar1 + 0x2b8);
    }
    param_1[0xda] = 0;
  }
  *(undefined4 *)(param_1 + 0xfa) = 0;
  if (param_1[0xf9] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0xf1);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (param_1[0xef] != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0xe7);
  *(undefined4 *)(param_1 + 0xe6) = 0;
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  FUN_146163596(param_1 + 0xdd);
  *(undefined4 *)(param_1 + 0xd9) = 0;
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_145a42c18(param_1 + 0xd0);
  FUN_144760e21(param_1[0xcd],*(undefined4 *)(param_1 + 0xce));
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  FUN_145a422ca(param_1);
  return;
}



// FUNCTION 14154df9a FUN_14154df9a body=484 status=ok
// SIG undefined FUN_14154df9a(void)

void FUN_14154df9a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*plVar3;
  }
  lVar4 = 9;
  lVar5 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar6 + lVar5);
    uVar8 = (ulonglong)uVar7;
    uVar9 = *(ushort *)((longlong)L"{PROJECT}" + lVar5);
    if (uVar7 != uVar9) break;
    if (uVar7 == 0) goto LAB_14154e022;
LAB_14154dfee:
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) goto LAB_14154e022;
    lVar5 = lVar5 + 2;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar10 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_14154dfee;
  }
  if (uVar7 != uVar9) goto LAB_14154e0c0;
LAB_14154e022:
  uVar1 = FUN_140d6afb0();
  FUN_140056680(&local_40,uVar1);
  puVar6 = local_40;
  if (local_38 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  local_48 = 1;
  FUN_140807d8e(plVar3,&local_30,L"{PROJECT}",puVar6);
  if (plVar3 == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x24) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14154e0c0:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = FUN_1405d8a54(0);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  plVar2 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0x20) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*plVar3;
  }
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar6,0);
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar1 = FUN_14001cc68(uVar1,0);
    *(undefined8 *)(param_1 + 8) = uVar1;
    (**(code **)(*plVar3 + 0x170))(plVar3,uVar1,*(undefined8 *)(param_1 + 0x10));
    (**(code **)*plVar3)(plVar3,1);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154e180 FUN_14154e180 body=289 status=ok
// SIG undefined FUN_14154e180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14154e180(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b70f0) {
    FUN_144b3d300(&DAT_14c9b70f0);
    if (DAT_14c9b70f0 == -1) {
      FUN_14154e2a2();
      FUN_145dabc12();
      FUN_140db5666(&DAT_14c9b7048,0,&DAT_14c9b6fe0,L"FAmbientOcclusionPS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"MainPS",3,0x14,
                    FUN_14713507a,FUN_14713501a,&LAB_142b8b8e2,&LAB_147135016,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8580);
      _DAT_14c9b7048 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8b8f9);
      _Init_thread_footer(&DAT_14c9b70f0);
    }
  }
  return &DAT_14c9b7048;
}



// FUNCTION 14154e2a2 FUN_14154e2a2 body=258 status=ok
// SIG undefined FUN_14154e2a2(void)

void FUN_14154e2a2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b8600) {
    FUN_144b3d300(&DAT_14c9b8600);
    if (DAT_14c9b8600 == -1) {
      FUN_145dabd5c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2d0;
      local_58 = 0x2c9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8580,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b908f5);
      _Init_thread_footer(&DAT_14c9b8600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154e3a6 FUN_14154e3a6 body=81 status=ok
// SIG undefined FUN_14154e3a6(void)

void FUN_14154e3a6(void)

{
  char cVar1;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"norhithread");
  if (cVar1 != '\0') {
    DAT_14c760e20 = 0;
  }
  FUN_143221373();
  return;
}



// FUNCTION 14154e3f8 FUN_14154e3f8 body=365 status=ok
// SIG undefined FUN_14154e3f8(void)

void FUN_14154e3f8(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_14154e4f3;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
LAB_14154e4f3:
  local_f8 = param_1 + 0xb;
  FUN_145c6aa10(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154e566 FUN_14154e566 body=101 status=ok
// SIG undefined FUN_14154e566(void)

bool FUN_14154e566(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  
  FUN_1460d2e08(param_2,param_3);
  if (*(int *)(param_2 + 8) < *(int *)(param_1 + 0x24)) {
    iVar1 = FUN_1465855e2(param_2,param_3);
    bVar2 = iVar1 != -1;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2 == false) && (*(int *)(param_2 + 0x50) != 0)) {
    FUN_148a9a45e(param_2);
    iVar1 = FUN_1465855e2(param_2,param_3);
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}



// FUNCTION 14154e5cc FUN_14154e5cc body=115 status=ok
// SIG undefined FUN_14154e5cc(void)

void FUN_14154e5cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014154e63b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14154e640 FUN_14154e640 body=168 status=ok
// SIG undefined FUN_14154e640(void)

void FUN_14154e640(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"Substrate Ops";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MaterialExpressionSubstrate";
  local_28 = 0x1b;
  FUN_1446e940c(local_38,&local_30);
  local_30 = L"Substrate Operators";
  local_28 = 0x13;
  FUN_140208c1e(&DAT_14caec120,local_38,local_34,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154e6ea FUN_14154e6ea body=925 status=ok
// SIG undefined FUN_14154e6ea(void)

void FUN_14154e6ea(longlong param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  undefined8 *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar3 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0xc) == param_2) {
          FUN_140f0cb98(&local_70,param_2);
          if ((param_4 != 0) && (local_70 != 0)) {
            plVar4 = (longlong *)FUN_140a68038(1);
            if (plVar4 == (longlong *)0x0) {
              local_88 = (longlong *)0x0;
              plStack_80 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar4 + 0xa8))(plVar4,&local_88);
              if (local_88 != (longlong *)0x0) {
                local_98 = 0;
                uStack_90 = 0;
                (**(code **)(*local_88 + 0x28))(local_88,local_70,&local_98);
                if ((int)param_3 < (int)uStack_90 && -1 < (int)param_3) {
                  iVar5 = param_5;
                  if (param_4 < param_5) {
                    iVar5 = param_4;
                  }
                  fVar7 = (float)iVar5;
                  fVar8 = fVar7;
                  if (*(char *)(param_1 + 0xb8) != '\0') {
                    fVar8 = (fVar7 / (float)param_5) * 100.0;
                  }
                  if (param_5 < 1) {
                    fVar8 = fVar7;
                  }
                  local_a0 = (longlong *)FUN_14001cc68(0x70,0x10);
                  local_a0[1] = (longlong)&DAT_100000001;
                  *local_a0 = (longlong)&PTR_FUN_14b4e0430;
                  local_a8 = local_a0 + 2;
                  local_a0[7] = 0;
                  *(undefined4 *)(local_a0 + 8) = 0;
                  local_a0[3] = 0;
                  local_a0[4] = 0;
                  *(undefined8 *)((longlong)local_a0 + 0x44) = 0xffffffff00000080;
                  *(undefined4 *)((longlong)local_a0 + 0x4c) = 0;
                  local_a0[0xb] = 0;
                  *(undefined4 *)(local_a0 + 0xc) = 0;
                  local_a0[2] = (longlong)&PTR_FUN_14b4391c0;
                  *(undefined4 *)(local_a0 + 0xd) = 0;
                  FUN_145c05238(local_a8,(ulonglong)param_3 * 0x20 + local_98,fVar8);
                  plVar4 = local_88;
                  local_bc = (int)uStack_90;
                  local_b8 = (undefined8 *)0x0;
                  local_b0 = 0;
                  FUN_1446efa72(&local_b8,0,4,0x10);
                  local_b0 = 4;
                  *local_b8 = &PTR_LAB_14b438700;
                  LOCK();
                  UNLOCK();
                  lVar6 = DAT_14c758608 + 1;
                  lVar3 = DAT_14c758608 + 1;
                  if (lVar6 == 0) {
                    LOCK();
                    UNLOCK();
                    lVar6 = DAT_14c758608 + 2;
                    lVar3 = DAT_14c758608 + 2;
                  }
                  DAT_14c758608 = lVar3;
                  local_b8[2] = lVar6;
                  *local_b8 = &PTR_FUN_14b4e0450;
                  local_b8[3] = param_1;
                  *(uint *)(local_b8 + 4) = param_2;
                  *(uint *)((longlong)local_b8 + 0x24) = param_3;
                  *(int *)(local_b8 + 5) = param_4;
                  *(int *)((longlong)local_b8 + 0x2c) = param_5;
                  *(undefined4 *)(local_b8 + 6) = local_bc;
                  (**(code **)(*plVar4 + 8))(plVar4,local_70,&local_a8,&local_b8);
                  if (local_b0 == 0) {
LAB_14154ea33:
                    if (local_b8 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (local_b8 != (undefined8 *)0x0) {
                    (**(code **)*local_b8)(local_b8,0);
                    FUN_1446efa72(&local_b8,0,0,0x10);
                    local_b0 = 0;
                    goto LAB_14154ea33;
                  }
                  plVar4 = local_a0;
                  if (local_a0 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_a0 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_a0)(local_a0);
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
                FUN_140f5addd(local_98,(int)uStack_90);
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            plVar4 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_80)(plStack_80);
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
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_68 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)local_68 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154ea88 FUN_14154ea88 body=246 status=ok
// SIG undefined FUN_14154ea88(void)

void FUN_14154ea88(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 < 0x18) {
    uVar4 = FUN_143f2ac96(param_1);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  }
  FUN_14658150c(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    uVar4 = (**(code **)(*local_28 + 0x138))(local_28,(int)param_1[6]);
    uVar4 = FUN_143f2ae02(param_1,uVar4,1);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  }
  cVar3 = FUN_1458c7f24(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x48))(param_1,0x17 < *(int *)((longlong)param_1 + 0x44));
    if (0x18 < *(int *)((longlong)param_1 + 0x44)) {
      FUN_1465812d2(param_1[7],(int)param_1[6]);
      FUN_145d7c4e6(param_1);
      goto LAB_14154eb24;
    }
  }
  else {
    uVar4 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  }
  (**(code **)(*param_1 + 0x98))(param_1);
LAB_14154eb24:
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154eb80 FUN_14154eb80 body=282 status=ok
// SIG undefined FUN_14154eb80(void)

void FUN_14154eb80(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 6) = param_3;
  if (param_2 < 0x18) {
    uVar4 = FUN_143f2ac96(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  }
  plVar5 = (longlong *)FUN_140a68038(1);
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_38);
    if (local_38 != (longlong *)0x0) {
      uVar4 = (**(code **)(*local_38 + 0x138))(local_38,(int)param_1[6]);
      uVar4 = FUN_143f2ae02(param_1,uVar4,0);
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
    }
  }
  cVar3 = FUN_1458c7f24(param_1);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x38))(param_1,0x17 < *(int *)((longlong)param_1 + 0x44));
    if (0x18 < param_2) {
      FUN_1461228d0(param_1[7],(int)param_1[6]);
      FUN_145d7c4e6(param_1);
      goto LAB_14154ec3f;
    }
  }
  else {
    uVar4 = FUN_143f2ac96(param_1,0x17);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  }
  (**(code **)(*param_1 + 0x98))(param_1);
LAB_14154ec3f:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154ec9c FUN_14154ec9c body=164 status=ok
// SIG undefined FUN_14154ec9c(void)

void FUN_14154ec9c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb480,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154ed42 FUN_14154ed42 body=153 status=ok
// SIG undefined FUN_14154ed42(void)

void FUN_14154ed42(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa7ba0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154eddc FUN_14154eddc body=862 status=ok
// SIG undefined FUN_14154eddc(void)

void FUN_14154eddc(longlong param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  if (DAT_14cb05368 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_147a00126();
  }
  iVar6 = (int)param_2[1];
  if (0 < (longlong)iVar6) {
    iVar10 = -iVar6;
    uVar11 = (longlong)iVar6;
    do {
      lVar2 = *(longlong *)(*param_2 + -8 + uVar11 * 8);
      lVar8 = *(longlong *)(lVar2 + 0xa8);
      lVar7 = *(longlong *)(lVar2 + 0xb0);
      if (lVar7 == 0) {
        lVar7 = FUN_1448abda6(lVar2);
      }
      if (lVar7 == param_1) {
        *(undefined4 *)(lVar2 + 0x4a4) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x4a8) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x4ac) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x4b0) = 0x3f800000;
        if (((lVar8 == 0) || (lVar7 = FUN_144a79cc8(lVar8), lVar7 == 0)) ||
           (lVar8 = FUN_144a79cc8(lVar8), (*(byte *)(lVar8 + 0x240) & 0x20) != 0)) {
          if (cVar4 == '\0') {
            if (*(char *)(lVar2 + 0x2f1) == '\x01') {
LAB_14154ee8d:
              if (*(longlong *)(lVar2 + 0x2f8) != 0) goto LAB_14154eede;
            }
            else {
LAB_14154eede:
              if (param_3 == '\0') {
                local_60 = (longlong *)(lVar2 + 0x400);
                local_50 = 0x3f8;
                local_48 = 0x4a0;
                local_58 = 0x410;
                if (*(longlong **)(lVar2 + 0x400) != (longlong *)0x0) {
                  (**(code **)(**(longlong **)(lVar2 + 0x400) + 0x30))();
                  (**(code **)(*(longlong *)*local_60 + 0x38))();
                  if ((longlong *)*local_60 != (longlong *)0x0) {
                    iVar6 = (**(code **)(*(longlong *)*local_60 + 0x30))();
                    local_50 = 0x3f8;
                    local_48 = 0x4a0;
                    local_58 = 0x410;
                    goto LAB_14154f00d;
                  }
                }
LAB_14154f01f:
                puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
                FUN_1414e9958(puVar9);
                *puVar9 = &PTR_FUN_14a897f90;
                puVar9[9] = &PTR_FUN_14a897fd8;
                puVar9[0xc] = 0;
                *(undefined4 *)(puVar9 + 0xd) = 0;
                puVar9[10] = 0;
                *(undefined1 *)(puVar9 + 0xb) = 0;
                FUN_1458867da(local_60,puVar9);
                lVar8 = *local_60;
                iVar6 = *(int *)(lVar2 + 0x304);
                *(int *)(lVar8 + 0x50) = iVar6;
                uVar1 = (ulonglong)(iVar6 + -1 + (uint)(iVar6 == 0)) * 2 + 1;
                lVar7 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                *(uint *)(lVar8 + 0x54) = ((uint)lVar7 ^ 0xffffffc0) + 0x41;
                *(undefined1 *)(lVar8 + 0x58) = 10;
                FUN_140308182(*local_60,0);
                FUN_1448215fa(lVar2);
              }
              else {
                local_60 = (longlong *)(lVar2 + 0x350);
                local_50 = 0x2f8;
                local_48 = 0x3f0;
                local_58 = 0x360;
                if (*(longlong **)(lVar2 + 0x350) == (longlong *)0x0) goto LAB_14154f01f;
                (**(code **)(**(longlong **)(lVar2 + 0x350) + 0x30))();
                (**(code **)(*(longlong *)*local_60 + 0x38))();
                if ((longlong *)*local_60 == (longlong *)0x0) goto LAB_14154f01f;
                iVar6 = (**(code **)(*(longlong *)*local_60 + 0x30))();
                local_50 = 0x2f8;
                local_48 = 0x3f0;
                local_58 = 0x360;
LAB_14154f00d:
                if (iVar6 != *(int *)(lVar2 + 0x304)) goto LAB_14154f01f;
              }
              (**(code **)(**(longlong **)(param_1 + 0x218) + 0x180))
                        (*(longlong **)(param_1 + 0x218),lVar2,
                         CONCAT71((int7)((ulonglong)local_50 >> 8),*(undefined1 *)(lVar2 + 0x30c)),
                         *(undefined8 *)(lVar2 + local_50),*local_60,local_48 + lVar2,
                         local_58 + lVar2,0,lVar2 + 0x4a4);
              FUN_1400fb146(lVar2 + 0x4b8,0);
              *(undefined1 *)(lVar2 + 0x34a) = 1;
              FUN_1448215fa(lVar2);
            }
            uVar5 = *(uint *)(param_2 + 1);
            if (uVar11 != uVar5) {
              memmove((void *)(*param_2 + uVar11 * 8 + -8),(void *)(*param_2 + uVar11 * 8),
                      (longlong)(int)(uVar5 + iVar10) << 3);
              uVar5 = *(uint *)(param_2 + 1);
            }
            *(uint *)(param_2 + 1) = uVar5 - 1;
            FUN_145dbd220(param_2);
          }
          else if (*(char *)(lVar2 + 0x2f1) == '\x01') goto LAB_14154ee8d;
        }
      }
      iVar10 = iVar10 + 1;
      bVar3 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 14154f13a FUN_14154f13a body=767 status=ok
// SIG undefined FUN_14154f13a(void)

void FUN_14154f13a(longlong param_1,longlong param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_14154f15d;
  if ((char)param_3[1] == '\x01') {
    uVar9 = *param_3;
  }
  else {
    lVar7 = FUN_140d97494(param_1);
    if (lVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)*(byte *)(lVar7 + 0x70);
    }
  }
  cVar5 = FUN_1461473bc(param_1,param_2);
  if (cVar5 != '\0') {
    if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(longlong *)(param_1 + 0x108) != 0)) {
      FUN_14480f766(*(longlong *)(param_1 + 0xf8) + 0x88);
    }
    uVar6 = FUN_14050fd64();
    local_68 = 0;
    FUN_14088df30(uVar6,&local_48,param_2,0);
    plVar1 = local_40;
    if ((longlong *)(param_1 + 0xf8) != &local_48) {
      *(longlong *)(param_1 + 0xf8) = local_48;
      local_48 = 0;
      plVar3 = *(longlong **)(param_1 + 0x100);
      if (local_40 != plVar3) {
        local_40 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x100) = plVar1;
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
    }
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    lVar7 = *(longlong *)(param_1 + 0xf8);
    if (lVar7 != 0) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      local_50 = 3;
      *local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_58[2] = lVar8;
      *local_58 = &PTR_FUN_14b40e940;
      local_58[3] = param_1;
      local_58[4] = param_2;
      FUN_140844560(lVar7,&local_48,&local_58);
      *(longlong *)(param_1 + 0x108) = local_48;
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14132e6a6();
    FUN_14132d58e(*(undefined8 *)(param_1 + 0x48),param_2,1);
  }
  lVar7 = FUN_140c8331a(param_1);
  if (lVar7 != 0) {
    FUN_145d6cc76(lVar7,param_2 + 0xb50);
  }
  if (uVar9 == 2) {
    lVar7 = 0xad0;
    cVar5 = *(char *)(param_2 + 0xac0);
joined_r0x00014154f414:
    if (cVar5 == '\0') goto LAB_14154f38b;
  }
  else {
    if (uVar9 == 1) {
      lVar7 = 0xa30;
      cVar5 = *(char *)(param_2 + 0xa20);
      goto joined_r0x00014154f414;
    }
LAB_14154f38b:
    lVar7 = 0xc0;
  }
  FUN_146552988(param_1,lVar7 + param_2);
  FUN_145da2368(param_1,param_2 + 0x140);
  FUN_145c43cd6(param_1,param_2);
  FUN_145ca406c(param_2,&local_48,uVar9);
  FUN_146207d00(param_1,&local_48);
  FUN_140fd5d79(local_48,(ulonglong)local_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1456c1870(param_1);
  FUN_143d853ea(param_1);
  *(longlong *)(param_1 + 0xd8) = param_2;
LAB_14154f15d:
  if ((char)param_3[1] == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14154f43a FUN_14154f43a body=273 status=ok
// SIG undefined FUN_14154f43a(void)

void FUN_14154f43a(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)*param_1;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar2 = param_1[1];
  FUN_1446f470e(&local_38,puVar4,1);
  lVar5 = (longlong)*(int *)(puVar1 + 1);
  if (lVar5 != 0) {
    plVar3 = (longlong *)*puVar1;
    lVar5 = lVar5 * 0x48;
    do {
      if (*plVar3 == CONCAT44(uStack_34,local_38)) {
        if (plVar3 != (longlong *)0x0) {
          local_58 = *param_3;
          uStack_54 = param_3[1];
          uStack_50 = param_3[2];
          uStack_4c = param_3[3];
          local_28 = DAT_14cb8a42c;
          uStack_24 = 0;
          local_48 = (ulonglong)DAT_14cb8a42c;
          local_38 = local_58;
          uStack_34 = uStack_54;
          uStack_30 = uStack_50;
          uStack_2c = uStack_4c;
          FUN_140e06a08(*(undefined8 *)(lVar2 + 0x630),&local_58,plVar3[1],0);
          if (*(longlong *)(lVar2 + 0x3d0) != 0) {
            FUN_146340746(&local_38,local_5c,DAT_14cb8a42c,*(longlong *)(lVar2 + 0x3d0) + 0x28);
            FUN_140e06640(*(longlong *)(lVar2 + 0x3d0) + 0x38,&local_38,local_5c);
          }
        }
        break;
      }
      plVar3 = plVar3 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154f54c FUN_14154f54c body=111 status=ok
// SIG undefined FUN_14154f54c(void)

void FUN_14154f54c(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
    param_1[2] = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
      UNLOCK();
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 14154f5bb FUN_14154f5bb body=369 status=ok
// SIG undefined FUN_14154f5bb(void)

void FUN_14154f5bb(longlong *param_1,short *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == 0) {
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
      *param_1 = 0;
LAB_14154f619:
      if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (DAT_14cb0b4f0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_14580b774;
      local_48 = &LAB_147d6e27b;
      local_50 = &LAB_140307be8;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x158;
      FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
    }
    lVar1 = FUN_14583a8aa(DAT_14cb0b4f0,0,param_2);
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      *param_1 = lVar1;
      if (lVar1 == 0) goto LAB_14154f619;
    }
    else {
      FUN_1456cec3c(lVar1);
      *param_1 = lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14154f744 FUN_14154f744 body=253 status=ok
// SIG undefined FUN_14154f744(void)

void FUN_14154f744(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar1 = *param_3;
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if ((lVar3 != 0) && (lVar3 + 8 != 0)) {
            local_20 = *(undefined8 *)(param_2 + 8);
            local_18 = *(undefined4 *)(param_2 + 0x10);
            FUN_14154f850(lVar3 + 8,&DAT_14ca85100);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154f850 FUN_14154f850 body=1879 status=ok
// SIG undefined FUN_14154f850(void)

void FUN_14154f850(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *_Dst;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar12 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar12 = *(int *)(param_3 + 1);
  }
  if (iVar12 == (int)param_1[5]) goto LAB_14154fd2a;
  FUN_1412ae5cc(param_1);
  *(int *)(param_1 + 5) = iVar12;
  *(int *)(param_1 + 4) = iVar12 * 4 + 4;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  bVar13 = *(int *)((longlong)param_1 + 0x2c) != -1;
  uVar10 = 0x400;
  if (!bVar13) {
    uVar10 = 0x10;
  }
  iVar12 = iVar12 * 4 + 4;
  local_a8 = (undefined8 *)CONCAT44(DAT_14c873998,iVar12);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar13 * 8 + 0x4121);
  if (iVar12 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar10);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar10;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar10);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar10;
  }
  lVar11 = local_b0;
  plVar9 = param_1 + 1;
  if (plVar9 == &local_b0) {
LAB_14154fa4c:
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    lVar11 = *plVar9;
  }
  else {
    lVar5 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_14154fa4c;
    }
  }
  if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x28) & 0x10) == 0)) {
    local_a8._0_3_ = 0x11d00;
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar8 = param_1 + 3;
  if (plVar8 == &local_b0) {
LAB_14154fb83:
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  else {
    lVar11 = *plVar8;
    *plVar8 = local_b0;
    local_b0 = 0;
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar11;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar13) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar13 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar13) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_14154fb83;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar9 == 0) || ((*(byte *)(*plVar9 + 0x28) & 0x10) == 0)) {
      local_a8 = (undefined8 *)0x11d01;
    }
    else {
      local_a8 = (undefined8 *)0x40001;
    }
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar9 = param_1 + 2;
    if (plVar9 != &local_b0) {
      lVar11 = *plVar9;
      *plVar9 = local_b0;
      local_b0 = 0;
      if (lVar11 == 0) goto LAB_14154fd2a;
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
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
    lVar11 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar11;
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
  }
LAB_14154fd2a:
  lVar5 = param_1[4];
  lVar11 = param_1[1];
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar5);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar11,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 2);
  }
  *(undefined4 *)((longlong)_Dst + (longlong)(int)param_1[5] * 4) = 0;
  lVar11 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar11);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar11);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar11 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar11 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar11 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar11 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14154ffa8 FUN_14154ffa8 body=226 status=ok
// SIG undefined FUN_14154ffa8(void)

longlong * FUN_14154ffa8(longlong *param_1)

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
  pcVar13 = FUN_14602e900;
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



// FUNCTION 14155008c FUN_14155008c body=226 status=ok
// SIG undefined FUN_14155008c(void)

longlong * FUN_14155008c(longlong *param_1)

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
  pcVar13 = FUN_145ef0b50;
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



// FUNCTION 141550170 FUN_141550170 body=228 status=ok
// SIG undefined FUN_141550170(void)

void FUN_141550170(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_14151fffe(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_145cb6118(param_1 + 8,0);
  }
  while (*(undefined8 **)(param_1 + 0x158) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x158) = **(undefined8 **)(param_1 + 0x158);
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_146171e06(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d149d4(param_1 + 0x80);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_14151fffe(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141550254 FUN_141550254 body=458 status=ok
// SIG undefined FUN_141550254(void)

undefined8 * FUN_141550254(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14bee9e50;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 3;
  puVar2 = param_1 + 5;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_145cac218(*local_78 + (longlong)iStack_5c * 0x270 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_145dc3d56(plVar1);
  }
  param_1[9] = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x44)) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141550420 FUN_141550420 body=3855 status=ok
// SIG undefined FUN_141550420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141550420(longlong *param_1)

{
  byte bVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  double dVar34;
  double dVar36;
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auStack_3f8 [32];
  uint local_3d8;
  undefined4 local_3d0;
  uint local_3c8;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  double local_368;
  double dStack_360;
  double local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  double local_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  FUN_144842a8a(param_1,&local_148);
  if (local_148._0_4_ < 0x140) {
    bVar1 = *(byte *)((longlong)param_1 + 0x641);
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x65c);
    uVar12 = *(uint *)(param_1 + 0xcb);
    lVar4 = param_1[0xc9];
    lVar17 = param_1[199];
    puVar11 = (undefined8 *)FUN_1447a1f4a(param_1 + 0xc4);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)*puVar11;
    }
    local_3c8 = (uint)bVar1;
    local_3d8 = uVar12;
    local_3d0 = uVar9;
    fVar18 = (float)FUN_147a32385(puVar13,lVar17,(int)lVar4);
    plVar14 = param_1;
    uVar9 = FUN_14480333a(param_1,&local_2c8);
    dVar34 = DAT_14c846480;
    auVar47 = _DAT_149934d80;
    local_348 = DAT_14c8464c0._8_8_;
    dStack_340 = DAT_14c8464d0;
    local_338 = (double)fVar18;
    uStack_330 = 0;
    local_3a8 = (double)-fVar18;
    dStack_3a0 = 0.0;
    dVar37 = local_288._0_8_;
    dVar32 = local_288._8_8_;
    dVar27 = local_278._0_8_;
    dVar46 = local_278._8_8_;
    auVar19 = minpd(_DAT_14c8464c0,local_288);
    auVar24 = minpd(_DAT_14c8464d0,local_278);
    lVar17 = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar30._8_8_ = lVar17;
    auVar30._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    iVar10 = movmskpd(uVar9,auVar30);
    auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar12 = movmskpd((int)plVar14,auVar25);
    local_368 = DAT_14c846480;
    dStack_360 = DAT_14c846488;
    local_378 = (undefined4)DAT_14c846490;
    uStack_374 = DAT_14c846490._4_4_;
    uStack_370 = (undefined4)DAT_14c846498;
    uStack_36c = DAT_14c846498._4_4_;
    auVar2._4_8_ = lVar17;
    auVar2._0_4_ = DAT_14c846490._4_4_;
    auVar19._0_8_ = auVar2._0_8_ << 0x20;
    auVar19._8_4_ = (undefined4)DAT_14c846498;
    auVar19._12_4_ = DAT_14c846498._4_4_;
    local_358 = auVar19._8_8_;
    uStack_350 = (undefined4)DAT_14c846498;
    uStack_34c = DAT_14c846498._4_4_;
    local_398 = _DAT_14c8464c0;
    auVar30 = local_398;
    local_3b8 = _DAT_14c8464d0;
    auVar19 = local_3b8;
    local_3b8._8_8_ = DAT_14c8464d0._8_8_;
    local_398._0_8_ = DAT_14c8464c0;
    local_3b8 = auVar19;
    local_398 = auVar30;
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar38 = (double)CONCAT44(DAT_14c846490._4_4_,(undefined4)DAT_14c846490);
      dVar40 = (double)CONCAT44(DAT_14c846498._4_4_,(undefined4)DAT_14c846498);
      dVar36 = DAT_14c846488 * local_2b8 * -1.0 +
               dVar38 * dStack_2c0 + dVar40 * local_2c8 * 1.0 + DAT_14c846480 * dStack_2b0;
      dVar44 = DAT_14c846480 * local_2b8 * 1.0 +
               dVar40 * dStack_2c0 + dVar38 * local_2c8 * -1.0 + DAT_14c846488 * dStack_2b0;
      dVar42 = dVar37 * 0.0;
      dVar43 = dVar32 * 0.0;
      local_3a8 = local_3a8 * dVar27;
      dVar41 = dVar46 * 0.0;
      dVar39 = dVar43 * local_2c8 - dVar42 * dStack_2c0;
      dVar26 = local_3a8 * dStack_2c0 - dVar43 * local_2b8;
      dVar33 = dVar42 * local_2b8 - local_3a8 * local_2c8;
      dVar49 = dVar41 * dStack_2b0 - dVar41 * dStack_2b0;
      dVar26 = dVar26 + dVar26;
      dVar33 = dVar33 + dVar33;
      dVar39 = dVar39 + dVar39;
      dVar49 = dVar49 + dVar49;
      local_2a8 = (dVar39 * dStack_2c0 - local_2b8 * dVar33) + dStack_2b0 * dVar26 + dVar42 +
                  local_2a8;
      dStack_2a0 = (dVar26 * local_2b8 - dVar39 * local_2c8) + dStack_2b0 * dVar33 + dVar43 +
                   dStack_2a0;
      local_298 = (dVar33 * local_2c8 - dStack_2c0 * dVar26) + dStack_2b0 * dVar39 + local_3a8 +
                  local_298;
      dStack_290 = (dVar49 * dStack_2b0 - dVar49 * dStack_2b0) + dStack_2b0 * dVar49 + dVar41 +
                   dStack_290;
      local_3a8 = dVar27 * dStack_340;
      dStack_3a0 = dVar46 * (double)local_3b8._8_8_;
      local_388._8_8_ = dVar32 * local_348;
      local_388._0_8_ = dVar37 * (double)local_398._0_8_;
      auVar47._8_8_ =
           dVar38 * local_2b8 * -1.0 +
           ((local_2c8 * DAT_14c846480 * -1.0 + dVar40 * dStack_2b0) - dStack_2c0 * DAT_14c846488);
      auVar47._0_8_ =
           dVar40 * local_2b8 * 1.0 +
           ((local_2c8 * DAT_14c846488 * 1.0 + dVar38 * dStack_2b0) - dStack_2c0 * DAT_14c846480);
      uVar9 = 0;
    }
    else {
      dVar44 = dStack_340 * dVar27;
      dVar46 = (double)local_3b8._8_8_ * dVar46;
      dVar26 = dStack_2c0 + dStack_2c0;
      dVar33 = local_2b8 + local_2b8;
      dVar38 = local_2c8 * (local_2c8 + local_2c8);
      local_178 = (1.0 - (dVar38 + dStack_2c0 * dVar26)) * dVar27;
      dVar36 = (local_2c8 + local_2c8) * dStack_2b0;
      dVar40 = (double)local_398._0_8_ * dVar37;
      dVar39 = local_348 * dVar32;
      dVar38 = (DAT_149934d80._8_8_ - (local_2b8 * dVar33 + dVar38)) * dVar32;
      local_198 = (dVar33 * dStack_2c0 + dVar36) * dVar32;
      local_1b8 = (local_2c8 * dVar33 - dVar26 * dStack_2b0) * dVar37;
      local_1c8._8_8_ = (dVar26 * local_2c8 + dVar33 * dStack_2b0) * dVar37;
      local_1c8._0_8_ =
           ((double)DAT_149934d80 - (local_2b8 * dVar33 + dStack_2c0 * dVar26)) * dVar37;
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar38,0);
      local_1a8._0_8_ = (dVar26 * local_2c8 - dVar33 * dStack_2b0) * dVar32;
      local_1a8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_190 = 0;
      local_188._8_8_ = (dVar33 * dStack_2c0 - dVar36) * dVar27;
      local_188._0_8_ = (dVar26 * dStack_2b0 + local_2c8 * dVar33) * dVar27;
      uStack_170 = 0;
      local_168 = local_2a8;
      dStack_160 = dStack_2a0;
      local_158 = local_298;
      uStack_150 = 0x3ff0000000000000;
      dVar32 = DAT_14c846488 + DAT_14c846488;
      dVar37 = (double)CONCAT44(DAT_14c846490._4_4_,(undefined4)DAT_14c846490);
      dVar38 = dVar37 + dVar37;
      dVar27 = DAT_14c846480 * (DAT_14c846480 + DAT_14c846480);
      local_248 = ((double)DAT_149934d80 - (dVar37 * dVar38 + DAT_14c846488 * dVar32)) *
                  (double)local_398._0_8_;
      dStack_220 = (DAT_149934d80._8_8_ - (dVar37 * dVar38 + dVar27)) * local_348;
      dVar37 = (DAT_14c846480 + DAT_14c846480) *
               (double)CONCAT44(DAT_14c846498._4_4_,(undefined4)DAT_14c846498);
      local_208 = (dVar32 * local_358 + DAT_14c846480 * dVar38) * dStack_340;
      local_228 = (dVar32 * DAT_14c846480 - dVar38 * local_358) * local_348;
      dStack_200 = (dVar38 * DAT_14c846488 - dVar37) * dStack_340;
      dStack_240 = (dVar32 * DAT_14c846480 + dVar38 * local_358) * (double)local_398._0_8_;
      local_218 = (dVar38 * DAT_14c846488 + dVar37) * local_348;
      local_238 = (DAT_14c846480 * dVar38 - dVar32 * local_358) * (double)local_398._0_8_;
      uStack_230 = 0;
      uStack_210 = 0;
      local_1f8 = (1.0 - (dVar27 + DAT_14c846488 * dVar32)) * dStack_340;
      uStack_1f0 = 0;
      local_1e8 = 0.0;
      dStack_1e0 = 0.0;
      local_1d8._8_8_ = 0x3ff0000000000000;
      local_1d8._0_8_ = local_3a8;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      local_388._8_4_ = SUB84(dVar39,0);
      local_388._0_8_ = dVar40;
      local_388._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar24._8_8_ = -(ulonglong)(0.0 <= dVar39);
      auVar24._0_8_ = -(ulonglong)(0.0 <= dVar40);
      auVar19 = blendvpd(_DAT_149936790,auVar47,auVar24);
      uVar16 = -(ulonglong)(0.0 <= dVar44);
      dVar37 = (double)(~uVar16 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar16 >> 0x20) & 0x3ff00000) << 0x20);
      dVar27 = auVar19._0_8_;
      local_138 = local_138 * dVar27;
      local_140 = local_140 * dVar27;
      local_148 = local_148 * dVar27;
      dVar27 = auVar19._8_8_;
      local_118 = local_118 * dVar27;
      local_120 = local_120 * dVar27;
      local_128 = dVar27 * local_128;
      local_f8 = local_f8 * dVar37;
      local_100 = local_100 * dVar37;
      local_108 = dVar37 * local_108;
      puVar15 = local_328;
      local_3a8 = dVar44;
      dStack_3a0 = dVar46;
      iVar10 = FUN_14481fd10(puVar15,&local_148);
      uVar9 = SUB84(puVar15,0);
      dVar37 = (double)local_318._0_8_ * (double)local_318._0_8_ +
               (double)local_328._0_8_ * (double)local_328._0_8_;
      dVar27 = (double)local_318._8_8_ * (double)local_318._8_8_ +
               (double)local_328._8_8_ * (double)local_328._8_8_;
      auVar28._0_8_ = dVar37 + dVar27;
      auVar28._8_8_ = dVar37 + dVar27;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar19 = sqrtpd(auVar28,auVar28);
      auVar47 = divpd(auVar47,auVar19);
      auVar48._0_8_ = auVar47._0_8_ * (double)local_318._0_8_;
      auVar48._8_8_ = auVar47._8_8_ * (double)local_318._8_8_;
      dVar36 = (double)((ulonglong)((double)local_328._0_8_ * auVar47._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
      dVar44 = (double)((ulonglong)((double)local_328._8_8_ * auVar47._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
      auVar47 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar20);
      dStack_290 = 0.0;
      local_298 = local_d8;
      local_2a8 = local_e8;
      dStack_2a0 = dStack_e0;
    }
    auVar19 = _DAT_149934d80;
    local_2f8 = 0.0;
    dStack_2f0 = 0.0;
    local_308 = 0.0;
    dStack_300 = 0.0;
    auVar30 = minpd(local_388,local_398);
    auVar3._8_8_ = dStack_3a0;
    auVar3._0_8_ = local_3a8;
    auVar24 = minpd(auVar3,local_3b8);
    auVar31._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
    iVar10 = movmskpd(iVar10,auVar31);
    auVar35._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    uVar12 = movmskpd(uVar9,auVar35);
    dVar37 = auVar47._0_8_;
    dVar27 = auVar47._8_8_;
    uVar5 = local_398._0_8_;
    uVar6 = local_398._8_8_;
    uVar7 = local_388._0_8_;
    uVar8 = local_388._8_8_;
    if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
      dVar40 = (double)CONCAT44(uStack_34c,uStack_350);
      dVar46 = (double)CONCAT44(uStack_374,local_378);
      dVar38 = (double)CONCAT44(uStack_36c,uStack_370);
      dVar32 = dVar36 * dVar46 * 1.0 +
               dVar27 * dStack_360 + dVar34 * dVar37 * -1.0 + dVar40 * dVar44;
      local_328._8_4_ = SUB84(dVar32,0);
      local_328._0_8_ =
           dVar44 * dVar46 * -1.0 + dVar37 * dStack_360 + dVar34 * dVar27 * 1.0 + local_358 * dVar36
      ;
      local_328._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      local_318._8_8_ =
           dVar37 * dVar46 * -1.0 +
           ((dVar34 * dVar36 * -1.0 + dVar40 * dVar27) - dStack_360 * dVar44);
      local_318._0_8_ =
           dVar27 * dVar46 * 1.0 +
           ((dVar34 * dVar44 * 1.0 + local_358 * dVar37) - dStack_360 * dVar36);
      local_2a8 = local_2a8 * (double)local_398._0_8_;
      dStack_2a0 = dStack_2a0 * (double)local_398._8_8_;
      local_298 = local_298 * (double)local_3b8._0_8_;
      dStack_290 = dStack_290 * (double)local_3b8._8_8_;
      dVar37 = dStack_2a0 * local_368 - dStack_360 * local_2a8;
      dVar27 = local_298 * dStack_360 - dVar46 * dStack_2a0;
      dVar32 = local_2a8 * dVar46 - local_368 * local_298;
      dVar34 = dStack_290 * dVar38 - dVar38 * dStack_290;
      dVar27 = dVar27 + dVar27;
      dVar32 = dVar32 + dVar32;
      dVar37 = dVar37 + dVar37;
      dVar34 = dVar34 + dVar34;
      local_308 = (dVar37 * dStack_360 - dVar46 * dVar32) + local_358 * dVar27 + local_2a8 + 0.0;
      dStack_300 = (dVar27 * dVar46 - dVar37 * local_368) + dVar40 * dVar32 + dStack_2a0 + 0.0;
      local_2f8 = local_338 +
                  (dVar32 * local_368 - dStack_360 * dVar27) + local_358 * dVar37 + local_298;
      dStack_2f0 = (dVar34 * dVar38 - dVar34 * dVar38) + dVar40 * dVar34 + dStack_290 + 0.0;
      dVar37 = local_3a8 * (double)local_3b8._0_8_;
      dVar27 = dStack_3a0 * (double)local_3b8._8_8_;
    }
    else {
      dVar32 = dStack_360 + dStack_360;
      dVar40 = (double)CONCAT44(uStack_374,local_378);
      dVar26 = dVar40 + dVar40;
      dVar39 = local_368 * (local_368 + local_368);
      dVar41 = (local_368 + local_368) * (double)CONCAT44(uStack_34c,uStack_350);
      dVar38 = dStack_340 * (dVar26 * dStack_360 - dVar41);
      dVar33 = (dVar32 * local_358 + dVar34 * dVar26) * (double)local_3b8._0_8_;
      dVar46 = (dVar32 * local_368 + dVar26 * local_358) * (double)local_398._0_8_;
      local_198 = (dVar26 * dStack_360 + dVar41) * (double)local_398._8_8_;
      local_1c8._8_4_ = SUB84(dVar46,0);
      local_1c8._0_8_ =
           ((double)DAT_149934d80 - (dVar40 * dVar26 + dStack_360 * dVar32)) *
           (double)local_398._0_8_;
      local_1c8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      local_178 = (1.0 - (dVar39 + dStack_360 * dVar32)) * (double)local_3b8._0_8_;
      dVar46 = (double)local_3b8._8_8_ * dStack_3a0;
      local_3b8._8_4_ = SUB84(dVar46,0);
      local_3b8._0_8_ = (double)local_3b8._0_8_ * local_3a8;
      local_3b8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      local_1b8 = (dVar34 * dVar26 - dVar32 * local_358) * (double)local_398._0_8_;
      uStack_1b0 = 0;
      local_1a8._8_8_ = (DAT_149934d80._8_8_ - (dVar40 * dVar26 + dVar39)) * (double)local_398._8_8_
      ;
      local_1a8._0_8_ = local_348 * (dVar32 * local_368 - dVar26 * local_358);
      uStack_190 = 0;
      local_188._8_4_ = SUB84(dVar38,0);
      local_188._0_8_ = dVar33;
      local_188._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_170 = 0;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_158 = local_338;
      uStack_150 = 0x3ff0000000000000;
      dVar38 = dVar44 + dVar44;
      dVar32 = dVar37 + dVar37;
      dVar34 = dVar36 * (dVar36 + dVar36);
      local_1f8 = (1.0 - (dVar34 + dVar44 * dVar38)) * local_3a8;
      dVar46 = (dVar36 + dVar36) * dVar27;
      local_208 = (dVar36 * dVar32 + dVar38 * dVar27) * local_3a8;
      local_228 = (dVar38 * dVar36 - dVar32 * dVar27) * (double)local_388._8_8_;
      dStack_200 = (dVar32 * dVar44 - dVar46) * local_3a8;
      dVar40 = (double)local_398._0_8_ * (double)local_388._0_8_;
      dVar39 = (double)local_398._8_8_ * (double)local_388._8_8_;
      local_248 = ((double)DAT_149934d80 - (dVar37 * dVar32 + dVar44 * dVar38)) *
                  (double)local_388._0_8_;
      dStack_220 = (DAT_149934d80._8_8_ - (dVar37 * dVar32 + dVar34)) * (double)local_388._8_8_;
      dStack_240 = (dVar38 * dVar36 + dVar32 * dVar27) * (double)local_388._0_8_;
      local_218 = (dVar32 * dVar44 + dVar46) * (double)local_388._8_8_;
      local_238 = (dVar36 * dVar32 - dVar38 * dVar27) * (double)local_388._0_8_;
      uStack_230 = 0;
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1d8._8_4_ = 0;
      local_1d8._0_8_ = local_298;
      local_1d8._12_4_ = 0x3ff00000;
      local_1e8 = local_2a8;
      dStack_1e0 = dStack_2a0;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar39);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar40);
      auVar47 = blendvpd(_DAT_149936790,auVar19,auVar21);
      dVar37 = (double)local_3b8._0_8_;
      dVar27 = (double)local_3b8._8_8_;
      dVar32 = (double)(~-(ulonglong)(0.0 <= (double)local_3b8._0_8_) & 0xbff0000000000000 |
                       (ulonglong)
                       ((uint)(-(ulonglong)(0.0 <= (double)local_3b8._0_8_) >> 0x20) & 0x3ff00000)
                       << 0x20);
      dVar46 = auVar47._0_8_;
      local_138 = local_138 * dVar46;
      local_140 = local_140 * dVar46;
      local_148 = local_148 * dVar46;
      dVar46 = auVar47._8_8_;
      local_118 = local_118 * dVar46;
      local_120 = local_120 * dVar46;
      local_128 = dVar46 * local_128;
      local_f8 = local_f8 * dVar32;
      local_100 = local_100 * dVar32;
      local_108 = dVar32 * local_108;
      FUN_14481fd10(&local_268,&local_148);
      dVar32 = local_258 * local_258 + local_268 * local_268;
      dVar46 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar29._0_8_ = dVar32 + dVar46;
      auVar29._8_8_ = dVar32 + dVar46;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
      auVar47 = sqrtpd(auVar29,auVar29);
      auVar47 = divpd(auVar19,auVar47);
      auVar45._0_8_ = auVar47._0_8_ * local_258;
      auVar45._8_8_ = auVar47._8_8_ * dStack_250;
      local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar22);
      local_328._8_8_ =
           (ulonglong)(dStack_260 * auVar47._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
      local_328._0_8_ =
           (ulonglong)(local_268 * auVar47._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
      local_308 = local_e8;
      dStack_300 = dStack_e0;
      local_2f8 = local_d8;
      dStack_2f0 = 0.0;
    }
    dStack_2e0 = (double)uVar6 * (double)uVar8;
    local_2e8 = (double)uVar5 * (double)uVar7;
    local_2d8._8_4_ = SUB84(dVar27,0);
    local_2d8._0_8_ = dVar37;
    local_2d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    local_3d8 = local_3d8 & 0xffffff00;
    FUN_144927a08(param_1,local_328,0,0);
  }
  FUN_144842a8a(param_1,&local_148);
  if (local_148._0_4_ < 0xf9) {
    *(undefined1 *)((longlong)param_1 + 0x641) = 3;
  }
  FUN_144842a8a(param_1,&local_148);
  if (local_148._0_4_ < 0x139) {
    if (param_1[199] == 0) {
      fVar23 = 0.033333335;
      fVar18 = 30.0;
    }
    else {
      fVar18 = (float)FUN_140324d4e();
      fVar23 = 1.0 / fVar18;
    }
    *(float *)(param_1 + 0xca) = fVar18;
    *(float *)((longlong)param_1 + 0x654) = fVar23;
  }
  (**(code **)(*param_1 + 0x310))(param_1);
  FUN_144842962(param_1);
  if ((local_c0 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141551330 FUN_141551330 body=454 status=ok
// SIG undefined FUN_141551330(void)

void FUN_141551330(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **local_60;
  undefined4 local_58;
  undefined *local_50;
  undefined1 local_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14155143e;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (((bVar1 == 0) &&
      (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
       (cVar2 = FUN_1406917e6(), cVar2 != '\0')))) &&
     (((DAT_14c76194c != 0 &&
       ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0)) &&
      (*(longlong *)(param_1 + 0x630) != 0)))) {
    local_68 = 0x9e00;
    FUN_1448ac24a(param_1,&local_68);
    local_68 = local_68 | 0x1000;
    local_60 = &local_50;
    local_50 = &DAT_14cae9e78;
    local_58 = 1;
    FUN_1408ecec8(*(undefined8 *)(param_1 + 0x630),local_48,&local_60,&local_68);
    puVar3 = local_28;
    if (local_28 == (undefined1 *)0x0) {
      puVar3 = local_48;
    }
    FUN_144717c65(puVar3,local_20);
    if (local_28 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14155143e:
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415514f8 FUN_1415514f8 body=66 status=ok
// SIG undefined FUN_1415514f8(void)

undefined8 * FUN_1415514f8(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(param_1,0);
  uVar2 = FUN_140f4d408();
  puVar1[1] = uVar2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e70020;
  puVar1[0xf] = 0;
  return puVar1;
}



// FUNCTION 14155153a FUN_14155153a body=164 status=ok
// SIG undefined FUN_14155153a(void)

void FUN_14155153a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Execution";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Execution";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caebdf0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415515e0 FUN_1415515e0 body=257 status=ok
// SIG undefined FUN_1415515e0(void)

void FUN_1415515e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b4dfa90;
  FUN_1415bf0d0(&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0xa0))(local_28,param_1 + 7);
    if (param_1[6] != 0) {
      (**(code **)(*local_28 + 0x78))(local_28,param_1 + 6);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  FUN_141567db1(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_141567db1(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415516e2 FUN_1415516e2 body=164 status=ok
// SIG undefined FUN_1415516e2(void)

void FUN_1415516e2(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXRotate2D";
  local_38 = 0x23;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13c40,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141551788 FUN_141551788 body=326 status=ok
// SIG undefined FUN_141551788(void)

void FUN_141551788(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [32];
  undefined1 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    plVar1 = (longlong *)(param_1 + 0x1a0);
    lVar4 = *(longlong *)(param_1 + 0x1a0);
    while( true ) {
      do {
        lVar7 = lVar4;
        lVar4 = 0;
      } while (lVar7 == 0);
      plVar3 = *(longlong **)(lVar7 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = *plVar1;
    }
    lVar4 = *plVar1;
    while ((*(byte *)(lVar4 + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x20))(*(longlong **)(lVar4 + 0x70),0xffffffff);
    }
    local_40 = (undefined1 *)0x0;
    iVar2 = *(int *)(lVar4 + 0xa8);
    local_38 = iVar2;
    if (iVar2 == 0) {
      local_34 = 4;
    }
    else {
      lVar7 = lVar4 + 0x80;
      if (*(longlong *)(lVar4 + 0xa0) != 0) {
        lVar7 = *(longlong *)(lVar4 + 0xa0);
      }
      FUN_144727e94(local_60,iVar2,0);
      puVar6 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar6 = local_60;
      }
      FUN_144727e6e(puVar6,lVar7,iVar2);
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_60,0xff);
    FUN_1497e215e(plVar1);
    FUN_1497e2078(param_1);
    puVar6 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar6 = local_60;
    }
    FUN_144717c65(puVar6,local_38);
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415518d0 FUN_1415518d0 body=493 status=ok
// SIG undefined FUN_1415518d0(void)

void FUN_1415518d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  
  cVar3 = FUN_1487f1456();
  if (cVar3 != '\0') {
    iVar2 = *(int *)(param_1 + 400);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar11 = 0;
      iVar12 = 0;
      iVar7 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x178);
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar12 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar12 = iVar12 + 0x20;
          uVar14 = puVar5[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar11 = 0;
        iVar12 = 0;
      }
      uVar13 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar7) {
        iVar7 = iVar2;
      }
    }
    if (iVar7 != iVar2) {
      uVar14 = 0xffffffff;
      iVar4 = iVar2;
      do {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + (longlong)iVar7 * 0x18);
        if ((lVar15 != 0) && (lVar15 = *(longlong *)(lVar15 + 0x38), lVar15 != 0)) {
          if (*(char *)(lVar15 + 0xc0) == '\x06') {
            uVar6 = FUN_1487ef442(lVar15,param_2);
          }
          else {
            uVar6 = 0;
          }
          FUN_1487ef698(lVar15,uVar6,param_3,param_4);
          iVar4 = *(int *)(param_1 + 400);
        }
        uVar14 = uVar14 & ~(uint)uVar13;
        puVar5 = *(uint **)(param_1 + 0x188);
        if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x178);
        }
        iVar7 = (int)uVar11;
        lVar15 = (longlong)iVar7;
        uVar8 = puVar5[lVar15] & uVar14;
        if (uVar8 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar7 < iVar9) {
            lVar16 = 0;
            do {
              uVar8 = puVar5[lVar15 + lVar16 + 1];
              if (uVar8 != 0) {
                uVar11 = (ulonglong)(iVar7 + (int)lVar16 + 1);
                uVar14 = 0xffffffff;
                goto LAB_141551a3d;
              }
              iVar12 = iVar12 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar10 - lVar15 != lVar16);
            uVar14 = 0xffffffff;
            iVar7 = iVar10;
          }
          uVar11 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar4;
        }
        else {
LAB_141551a3d:
          uVar13 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar13 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar7 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar7) {
            iVar7 = iVar4;
          }
        }
      } while (iVar7 != iVar2);
    }
  }
  return;
}



// FUNCTION 141551abe FUN_141551abe body=527 status=ok
// SIG undefined FUN_141551abe(void)

undefined1 * FUN_141551abe(undefined1 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0x200000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_1 + 0xa0) = &DAT_14cb769e8;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  param_1[200] = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  param_1[0x100] = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  uVar1 = FUN_140938dea();
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0xf;
  *(undefined2 *)(param_1 + 0x210) = 1;
  *(undefined8 *)(param_1 + 0x214) = 0;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0x100000000;
  *(undefined8 *)(param_1 + 0x230) = 1;
  param_1[0x238] = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  param_1[0x240] = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x274) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined2 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0x100000000;
  param_1[0x310] = 0;
  return param_1;
}



// FUNCTION 141551cce FUN_141551cce body=168 status=ok
// SIG undefined FUN_141551cce(void)

void FUN_141551cce(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"Substrate Ops";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MaterialExpressionSubstrate";
  local_28 = 0x1b;
  FUN_1446e940c(local_38,&local_30);
  local_30 = L"Substrate Operators";
  local_28 = 0x13;
  FUN_140208c1e(&DAT_14caec108,local_38,local_34,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141551d78 FUN_141551d78 body=116 status=ok
// SIG undefined FUN_141551d78(void)

void FUN_141551d78(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = DAT_14c760e2c;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    if (DAT_14c760e2c == '\x01') {
      FUN_143221bd4();
      iVar3 = (int)param_1[1];
    }
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        puVar1 = *(undefined8 **)(*param_1 + lVar4 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
          iVar3 = (int)param_1[1];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    if (cVar2 != '\0') {
      FUN_143222393();
    }
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141551dec FUN_141551dec body=130 status=ok
// SIG undefined FUN_141551dec(void)

void FUN_141551dec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b594750;
  param_1[5] = &PTR_FUN_14b594c60;
  param_1[0x2d] = &PTR_FUN_14b594ca0;
  param_1[0x86] = &PTR_FUN_14b594cd0;
  param_1[0x8e] = &PTR_FUN_14b594cf0;
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  FUN_14597cbde(param_1 + 0xb3);
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  FUN_141471a12(param_1);
  return;
}



// FUNCTION 141551e6e FUN_141551e6e body=164 status=ok
// SIG undefined FUN_141551e6e(void)

void FUN_141551e6e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXLuminance";
  local_38 = 0x24;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc139b8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141551f14 FUN_141551f14 body=87 status=ok
// SIG undefined FUN_141551f14(void)

undefined8 FUN_141551f14(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(longlong **)(param_1 + 0x100) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x20))(), cVar1 != '\0')) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x100) + 0x38))();
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
    return param_2;
  }
  FUN_140056680(param_2,L"InvalidSession");
  return param_2;
}



// FUNCTION 141551f6c FUN_141551f6c body=164 status=ok
// SIG undefined FUN_141551f6c(void)

void FUN_141551f6c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb1f0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141552012 FUN_141552012 body=253 status=ok
// SIG undefined FUN_141552012(void)

int * FUN_141552012(longlong *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  int local_120;
  undefined4 local_114;
  undefined2 local_110;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*param_1 == 0) {
LAB_14155208c:
    memcpy(&local_114,&DAT_14c844ee0,0x104);
  }
  else {
    if (*(int *)(*param_1 + 0xb4) == 0) {
      piVar2 = (int *)(*param_1 + 0x60);
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (DAT_14c845ecc == 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        FUN_144716208();
        pcVar1 = (code *)swi(3);
        piVar2 = (int *)(*pcVar1)();
        return piVar2;
      }
    }
    if (piVar2 != (int *)0x0) goto LAB_14155205d;
    if (*param_1 == 0) goto LAB_14155208c;
    local_114 = *(undefined4 *)(*param_1 + 0xb4);
    local_110 = 0;
  }
  FUN_145dca254(&local_114,&local_128);
  puVar3 = local_128;
  if (local_120 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140033559(".\\Runtime/Core/Private/IO/IoDispatcher.cpp",0x4d0,L"I/O Error \'%s\'",puVar3);
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  piVar2 = (int *)0x0;
LAB_14155205d:
  if ((local_10 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar2;
}



// FUNCTION 141552110 FUN_141552110 body=81 status=ok
// SIG undefined FUN_141552110(void)

void FUN_141552110(longlong *param_1)

{
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141552162 FUN_141552162 body=121 status=ok
// SIG undefined FUN_141552162(void)

void FUN_141552162(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      param_1[1] = 0;
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
  plVar3 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001415521cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415521dc FUN_1415521dc body=139 status=ok
// SIG undefined FUN_1415521dc(void)

void FUN_1415521dc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x2c0))(param_1,1);
  FUN_14039914a(param_1,0);
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) & 0xfe;
  }
  if (param_1 != (longlong *)0x0) {
    lVar2 = 0;
    plVar1 = param_1;
    do {
      if ((*(uint *)(plVar1 + 1) & 0x30) != 0) goto LAB_14155222a;
      plVar1 = (longlong *)plVar1[4];
    } while (plVar1 != (longlong *)0x0);
  }
  lVar2 = param_1[4];
LAB_14155222a:
  if ((longlong)*(int *)(lVar2 + 0x90) != 0) {
    lVar3 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar2 + 0x88) + lVar3) == param_1) {
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x90) * 8 != lVar3);
  }
  FUN_140831bbe(lVar2,param_1);
  return;
}



// FUNCTION 141552268 FUN_141552268 body=63 status=ok
// SIG undefined FUN_141552268(void)

undefined8 FUN_141552268(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_1406f625c();
  if (plVar1 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x308))(plVar1,param_2);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141552298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1415522a8 FUN_1415522a8 body=482 status=ok
// SIG undefined FUN_1415522a8(void)

void FUN_1415522a8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x230) == 0) && ((longlong)*(int *)(param_1 + 0x1b0) != 0)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + lVar3);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x19) == '\x01')) {
        FUN_140033559(".\\Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp",0x417,
                      L"Some HandlerComponents require bEnableReliability!!!");
        break;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1b0) * 0x10 != lVar3);
  }
  if (0 < *(int *)(param_1 + 0x1d0)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x1c8);
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = 0;
      puVar2[1] = *(undefined8 *)(lVar4 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x1e0);
        *(undefined8 **)(param_1 + 0x1e0) = puVar2;
        *puVar1 = puVar2;
        lVar4 = *(longlong *)(param_1 + 0x1c8);
      }
      *(undefined8 *)(lVar4 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x1d0));
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_147079f5c((longlong *)(param_1 + 0x1c8));
  }
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x210);
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = 0;
      puVar2[1] = *(undefined8 *)(lVar4 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x220);
        *(undefined8 **)(param_1 + 0x220) = puVar2;
        *puVar1 = puVar2;
        lVar4 = *(longlong *)(param_1 + 0x210);
      }
      *(undefined8 *)(lVar4 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x218));
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_147079f5c((longlong *)(param_1 + 0x210));
  }
  if (*(char *)(param_1 + 1) == '\x02') {
    FUN_140033559(".\\Runtime/PacketHandlers/PacketHandler/Private/PacketHandler.cpp",0x3f4,
                  L"Set new Packet Processor State to the state it is currently in.");
  }
  else {
    *(undefined1 *)(param_1 + 1) = 2;
  }
  if ((((*(byte *)(param_1 + 2) & 2) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
     (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141552409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 14155248a FUN_14155248a body=100 status=ok
// SIG undefined FUN_14155248a(void)

undefined8 * FUN_14155248a(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(DAT_14cb98ab0 + 0x28);
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0x2a8);
  _Src = *(void **)(lVar2 + 0x2a0);
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



// FUNCTION 1415524ee FUN_1415524ee body=165 status=ok
// SIG undefined FUN_1415524ee(void)

void FUN_1415524ee(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MaterialAttributes";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MaterialExpression";
  local_28 = 0x12;
  FUN_1446e940c(local_38,&local_30);
  local_30 = L"Material Attributes";
  local_28 = 0x13;
  FUN_140208c1e(&DAT_14caeb048,local_38,local_34,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141552594 FUN_141552594 body=138 status=ok
// SIG undefined FUN_141552594(void)

undefined8 FUN_141552594(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8426e8) {
    FUN_144b3d300(&DAT_14c8426e8);
    if (DAT_14c8426e8 == -1) {
      uVar1 = FUN_14001cc68(600,0x10);
      FUN_14155319e(uVar1);
      DAT_14c8426d8 = uVar1;
      DAT_14c8426e0 = uVar1;
      atexit(FUN_142759454);
      _Init_thread_footer(&DAT_14c8426e8);
    }
  }
  return DAT_14c8426e0;
}



// FUNCTION 14155261e FUN_14155261e body=1628 status=ok
// SIG undefined FUN_14155261e(void)

HMODULE FUN_14155261e(undefined8 param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  DWORD dwNewMode;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  BOOL BVar7;
  HMODULE pHVar8;
  LPWSTR pWVar9;
  LPCWSTR pWVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [40];
  undefined2 *local_f0;
  int local_e8;
  DWORD local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  LPCWSTR local_a8;
  int local_a0;
  undefined4 local_9c;
  LPCWSTR local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = 0;
  uStack_d0 = 0;
  iVar11 = (DAT_14c8c2b88 - (uint)(DAT_14c8c2b78 < 1)) + 2;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar11 != 0) {
    FUN_1408be2c4(&local_d8);
  }
  FUN_141552c7c(&local_98);
  uVar4 = uStack_d0;
  lVar14 = (longlong)(int)uStack_d0;
  uVar6 = (int)uStack_d0 + 1;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
  if (uStack_d0._4_4_ < uVar6) {
    FUN_1447a1bd6(&local_d8,uVar4 & 0xffffffff);
  }
  pWVar10 = local_98;
  lVar14 = lVar14 * 0x10;
  puVar1 = (undefined8 *)(local_d8 + lVar14);
  *(undefined8 *)(local_d8 + lVar14) = 0;
  lVar13 = (longlong)(int)uStack_90;
  *(int *)(local_d8 + 8 + lVar14) = (int)uStack_90;
  if (lVar13 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,uStack_90 & 0xffffffff,0);
    memcpy((void *)*puVar1,pWVar10,lVar13 * 2);
  }
  if (local_98 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  uVar4 = uStack_d0;
  if (0 < (longlong)DAT_14c8c2b78) {
    lVar13 = (longlong)DAT_14c8c2b78 * 0x10 + DAT_14c8c2b70;
    lVar14 = (longlong)(int)uStack_d0;
    uVar6 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
    if (uStack_d0._4_4_ < uVar6) {
      FUN_1447a1bd6(&local_d8,uVar4 & 0xffffffff);
    }
    lVar14 = lVar14 * 0x10;
    puVar1 = (undefined8 *)(local_d8 + lVar14);
    *(undefined8 *)(local_d8 + lVar14) = 0;
    iVar11 = *(int *)(lVar13 + -8);
    pvVar2 = *(void **)(lVar13 + -0x10);
    *(int *)(local_d8 + 8 + lVar14) = iVar11;
    if ((longlong)iVar11 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar11,0);
      memcpy((void *)*puVar1,pvVar2,(longlong)iVar11 * 2);
    }
  }
  if (0 < DAT_14c8c2b88) {
    lVar14 = 8;
    lVar13 = 0;
    do {
      uVar4 = uStack_d0;
      lVar3 = DAT_14c8c2b80;
      lVar15 = (longlong)(int)uStack_d0;
      uVar6 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
      if (uStack_d0._4_4_ < uVar6) {
        FUN_1447a1bd6(&local_d8,uVar4 & 0xffffffff);
      }
      lVar15 = lVar15 * 0x10;
      puVar1 = (undefined8 *)(local_d8 + lVar15);
      *(undefined8 *)(local_d8 + lVar15) = 0;
      iVar11 = *(int *)(lVar3 + lVar14);
      pvVar2 = *(void **)(lVar3 + -8 + lVar14);
      *(int *)(local_d8 + 8 + lVar15) = iVar11;
      if ((longlong)iVar11 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar11,0);
        memcpy((void *)*puVar1,pvVar2,(longlong)iVar11 * 2);
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while (lVar13 < DAT_14c8c2b88);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c2bec) && (FUN_144b3d300(&DAT_14c8c2bec), DAT_14c8c2bec == -1)) {
    pWVar9 = GetCommandLineW();
    DAT_14c8c2be9 = FUN_14054d46e(pWVar9,L"dllerrors");
    _Init_thread_footer(&DAT_14c8c2bec);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c2bf4) && (FUN_144b3d300(&DAT_14c8c2bf4), DAT_14c8c2bf4 == -1)) {
    pWVar9 = GetCommandLineW();
    DAT_14c8c2bf0 = FUN_14054d46e(pWVar9,L"unattended");
    _Init_thread_footer(&DAT_14c8c2bf4);
  }
  dwNewMode = (DAT_14c8c2bf0 & 1) * 3 + 0x8000;
  if (DAT_14c8c2be9 != '\0') {
    dwNewMode = 0;
  }
  local_dc = 0;
  BVar7 = SetThreadErrorMode(dwNewMode,&local_dc);
  FUN_140056680(&local_f0,param_1);
  puVar12 = local_f0;
  local_a8 = (LPCWSTR)0x0;
  lVar14 = (longlong)local_e8;
  local_a0 = local_e8;
  if (lVar14 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_e8,0);
    memcpy(local_a8,puVar12,lVar14 * 2);
  }
  FUN_140e92164();
  pWVar10 = local_a8;
  if (local_a0 == 0) {
    pWVar10 = L"";
  }
  cVar5 = (**(code **)(DAT_14c8c2640 + 0x78))(&DAT_14c8c2640,pWVar10);
  if (cVar5 != '\0') {
    FUN_1401aea18(&local_98,&local_a8);
    if (local_a8 != (LPCWSTR)0x0) {
      FUN_1400020a8();
    }
    local_a8 = local_98;
    local_a0 = (int)uStack_90;
    local_9c = uStack_90._4_4_;
    pWVar10 = local_98;
    if ((int)uStack_90 == 0) {
      pWVar10 = L"";
    }
    pHVar8 = GetModuleHandleW(pWVar10);
    if (pHVar8 != (HMODULE)0x0) goto LAB_141552ada;
    local_78 = 0;
    local_70 = 0;
    local_98 = (LPCWSTR)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    pWVar10 = L"";
    if (local_a0 != 0) {
      pWVar10 = local_a8;
    }
    FUN_140056680(local_c8,pWVar10);
    FUN_141552e3c(local_c8,&local_d8,&local_b8,&local_98);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (0 < (int)uStack_b0) {
      lVar14 = 0;
      lVar13 = 0;
      do {
        puVar1 = (undefined8 *)(local_b8 + lVar14);
        pWVar10 = L"";
        if (*(int *)(local_b8 + 8 + lVar14) != 0) {
          pWVar10 = (LPCWSTR)*puVar1;
        }
        pHVar8 = GetModuleHandleW(pWVar10);
        if (pHVar8 == (HMODULE)0x0) {
          pWVar10 = L"";
          if (*(int *)(puVar1 + 1) != 0) {
            pWVar10 = (LPCWSTR)*puVar1;
          }
          pHVar8 = LoadLibraryW(pWVar10);
          if (pHVar8 == (HMODULE)0x0) {
            FUN_141552d75(puVar1);
          }
        }
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0x10;
      } while (lVar13 < (int)uStack_b0);
    }
    FUN_1447a1747(local_b8);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_98);
  }
  pWVar10 = local_a8;
  if (local_a0 == 0) {
    pWVar10 = L"";
  }
  pHVar8 = LoadLibraryW(pWVar10);
  if (pHVar8 == (HMODULE)0x0) {
    puVar12 = local_f0;
    if (local_e8 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    cVar5 = (**(code **)(DAT_14c8c2640 + 0x78))(&DAT_14c8c2640,puVar12);
    if (cVar5 != '\0') {
      FUN_141552d75(&local_f0);
    }
    pHVar8 = (HMODULE)0x0;
  }
LAB_141552ada:
  if (local_a8 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if (local_f0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (BVar7 != 0) {
    SetThreadErrorMode(local_dc,(LPDWORD)0x0);
  }
  FUN_1447a1747(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pHVar8;
}



// FUNCTION 141552c7c FUN_141552c7c body=248 status=ok
// SIG undefined FUN_141552c7c(void)

undefined8 FUN_141552c7c(undefined8 param_1)

{
  BOOL BVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  int local_30;
  HMODULE local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8c4290 == 0) {
    BVar1 = GetModuleHandleExW(6,(LPCWSTR)FUN_141552c7c,&local_28);
    if (BVar1 == 0) {
      local_28 = DAT_14c8c26f8;
    }
    GetModuleFileNameW(local_28,&DAT_14c8c4290,0x104);
    pwVar2 = wcsrchr(&DAT_14c8c4290,L'\\');
    *pwVar2 = L'\0';
    FUN_140056680(&local_38,&DAT_14c8c4290);
    FUN_1401ae5e4(&local_38);
    pwVar2 = local_38;
    if (local_30 == 0) {
      pwVar2 = L"";
    }
    wcscpy(&DAT_14c8c4290,pwVar2);
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(param_1,&DAT_14c8c4290);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141552d75 FUN_141552d75 body=198 status=ok
// SIG undefined FUN_141552d75(void)

void FUN_141552d75(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  LPCWSTR lpModuleName;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  cVar2 = FUN_14279b9d9(puVar3,&local_48);
  lVar1 = local_48;
  uVar4 = uStack_40 & 0xffffffff;
  if (cVar2 != '\0') {
    if ((int)uStack_40 == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = (longlong)(int)uStack_40;
      lVar5 = 0;
      do {
        lpModuleName = L"";
        if (*(int *)(lVar1 + 8 + lVar5) != 0) {
          lpModuleName = *(LPCWSTR *)(lVar1 + lVar5);
        }
        GetModuleHandleW(lpModuleName);
        lVar5 = lVar5 + 0x10;
      } while (lVar6 * 0x10 != lVar5);
      uVar4 = uStack_40 & 0xffffffff;
    }
  }
  FUN_1447a1747(local_48,uVar4);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141552e3c FUN_141552e3c body=864 status=ok
// SIG undefined FUN_141552e3c(void)

void FUN_141552e3c(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  void *_Src;
  byte bVar6;
  char cVar7;
  HMODULE pHVar8;
  LPCWSTR lpModuleName;
  undefined2 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98 [2];
  void *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_1;
  }
  local_b0 = param_3;
  local_a8 = param_2;
  bVar6 = FUN_14279b9d9(puVar9,&local_78);
  if ((0 < (int)uStack_70 & bVar6) == 1) {
    local_a0 = param_4 + 7;
    lVar17 = 0;
    do {
      plVar1 = (longlong *)(local_78 + lVar17 * 0x10);
      iVar5 = *(int *)(local_78 + 8 + lVar17 * 0x10);
      iVar15 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar15 = 0;
      }
      uVar14 = 0;
      if (0 < iVar15) {
        puVar9 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar9 = (undefined2 *)*plVar1;
        }
        lVar13 = 0;
        uVar14 = 0;
        do {
          uVar12 = ((uint)(0x19 < (ushort)puVar9[lVar13] - 0x61) * 0x20 +
                   (uint)(ushort)puVar9[lVar13]) - 0x20;
          uVar14 = uVar14 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar14 ^ uVar12) & 0xff) * 4);
          uVar14 = uVar14 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
          lVar13 = lVar13 + 1;
        } while (iVar15 != (int)lVar13);
      }
      if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
        plVar10 = (longlong *)param_4[8];
        if ((longlong *)param_4[8] == (longlong *)0x0) {
          plVar10 = local_a0;
        }
        iVar15 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_4[9] - 1U & uVar14) * 4);
        if (iVar15 != -1) {
          lVar13 = *param_4;
LAB_141552f88:
          lVar11 = (longlong)iVar15;
          iVar15 = *(int *)(lVar13 + 8 + lVar11 * 0x18);
          if (iVar15 == iVar5) {
            if (1 < iVar5) {
              lVar16 = 0;
              do {
                uVar3 = *(ushort *)(*(longlong *)(lVar13 + lVar11 * 0x18) + lVar16);
                uVar4 = *(ushort *)(*plVar1 + lVar16);
                if (uVar3 == uVar4) {
                  if (uVar3 == 0) break;
                }
                else {
                  if (0x7f < (uVar4 | uVar3)) {
                    iVar15 = (uint)uVar3 - (uint)uVar4;
                    goto LAB_141553008;
                  }
                  if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4])
                  goto code_r0x000141553005;
                }
                lVar16 = lVar16 + 2;
              } while( true );
            }
          }
          else if (iVar15 + iVar5 != 1) goto LAB_141552fa6;
          goto LAB_141553045;
        }
      }
LAB_141553014:
      FUN_14482b35e(param_4,&local_88,plVar1);
      lpModuleName = L"";
      if ((int)plVar1[1] != 0) {
        lpModuleName = (LPCWSTR)*plVar1;
      }
      pHVar8 = GetModuleHandleW(lpModuleName);
      if (pHVar8 == (HMODULE)0x0) {
        local_88 = (void *)0x0;
        uStack_80 = 0;
        puVar9 = &DAT_149dfb77a;
        if ((int)plVar1[1] != 0) {
          puVar9 = (undefined2 *)*plVar1;
        }
        FUN_140056680(local_98,puVar9);
        cVar7 = FUN_145d1c1b6(local_98,local_a8,&local_88);
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        plVar1 = local_b0;
        if (cVar7 != '\0') {
          FUN_141552e3c(&local_88,local_a8,local_b0);
          iVar5 = (int)plVar1[1];
          *(uint *)(plVar1 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar1 + 0xc) < iVar5 + 1U) {
            FUN_1447a1bd6(local_b0,iVar5);
          }
          _Src = local_88;
          lVar13 = *local_b0;
          lVar11 = (longlong)iVar5 * 0x10;
          puVar2 = (undefined8 *)(lVar13 + lVar11);
          *(undefined8 *)(lVar13 + lVar11) = 0;
          lVar16 = (longlong)(int)uStack_80;
          *(int *)(lVar13 + 8 + lVar11) = (int)uStack_80;
          if (lVar16 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar2,uStack_80 & 0xffffffff,0);
            memcpy((void *)*puVar2,_Src,lVar16 * 2);
          }
        }
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_141553045:
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uStack_70);
  }
  FUN_1447a1747(local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000141553005:
  iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_141553008:
  if (iVar15 == 0) goto LAB_141553045;
LAB_141552fa6:
  iVar15 = *(int *)(lVar13 + 0x10 + lVar11 * 0x18);
  if (iVar15 == -1) goto LAB_141553014;
  goto LAB_141552f88;
}



// FUNCTION 14155319e FUN_14155319e body=852 status=ok
// SIG undefined FUN_14155319e(void)

undefined8 * FUN_14155319e(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_LAB_149e15840;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),4000);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0x3ff0000000000000;
  param_1[0x3f] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  uVar3 = (ulonglong)(2.0 / DAT_14c83f418);
  param_1[0x44] =
       (longlong)(2.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar3 >> 0x3f | uVar3;
  QueryPerformanceCounter(&local_58);
  *(LARGE_INTEGER *)(param_1 + 0x42) = local_58;
  *(LARGE_INTEGER *)(param_1 + 0x43) = local_58;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_1427590bc(param_1);
  cVar1 = FUN_146268e78();
  if (cVar1 != '\0') {
    if ((0.0 < (double)param_1[0x38]) || (0.0 < (double)param_1[0x3a])) {
      if (DAT_14c846b14 == '\x01') {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c83f0fc) {
          FUN_144b3d300(&DAT_14c83f0fc);
          if (DAT_14c83f0fc == -1) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
            DAT_14c83f0f8 = bVar2 ^ 1;
            _Init_thread_footer(&DAT_14c83f0fc);
          }
        }
        if (DAT_14c83f0f8 != 1) goto LAB_14155345e;
      }
      local_60 = 0;
      local_68 = 0xffffffffffffffff;
      uVar4 = FUN_1411b1052(param_1,L"FHeartBeatThread",0,1);
      param_1[1] = uVar4;
      goto LAB_14155345e;
    }
  }
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
LAB_14155345e:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415534f4 FUN_1415534f4 body=5868 status=ok
// SIG undefined FUN_1415534f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415534f4(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  undefined1 *local_1f0;
  longlong local_1e8 [2];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  GUID local_1a8;
  wchar_t *local_198;
  undefined8 uStack_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  wchar_t *local_178;
  int local_170;
  undefined4 local_16c;
  undefined1 local_161;
  int local_160;
  undefined1 local_159;
  wchar_t *local_158;
  undefined8 uStack_150;
  longlong local_58;
  wchar_t **local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  DAT_14c83bd00 = FUN_14626b8ba();
  DAT_14c83bd01 = FUN_14626b9ae();
  DAT_14c83bd02 = FUN_145818559();
  DAT_14c83bd03 = FUN_14609384a();
  DAT_14c83bd08 = GetCurrentProcessId();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  FUN_14626b538(DAT_14c868708,&local_158,4);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83bd38,pwVar7,0x7f);
  _DAT_14c83be36 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  FUN_14626b538(DAT_14c868708,&local_158,4);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83be38,pwVar7,0x7f);
  _DAT_14c83bf36 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pwVar7 = (wchar_t *)FUN_145c581c1();
  wcsncpy((wchar_t *)&DAT_14c83bf38,pwVar7,0x7f);
  _DAT_14c83c036 = 0;
  FUN_140002266(&local_158,L"UE-%s",&DAT_14c764000);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83c038,pwVar7,0x3f);
  _DAT_14c83c0b6 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  wcsncpy((wchar_t *)&DAT_14c83cdb8,L"",0x3f);
  _DAT_14c83ce36 = 0;
  wcsncpy((wchar_t *)&DAT_14c83da38,L"",0x3f);
  _DAT_14c83dab6 = 0;
  wcsncpy((wchar_t *)&DAT_14c83cd38,L"",0x3f);
  _DAT_14c83cdb6 = 0;
  wcsncpy((wchar_t *)&DAT_14c83c238,L"Shipping",0x3f);
  _DAT_14c83c2b6 = 0;
  pwVar7 = (wchar_t *)FUN_145789b0e(1);
  wcsncpy((wchar_t *)&DAT_14c83c1b8,pwVar7,0x3f);
  _DAT_14c83c236 = 0;
  pwVar7 = (wchar_t *)FUN_1401aee94();
  wcsncpy((wchar_t *)&DAT_14c83c338,pwVar7,0xff);
  _DAT_14c83c536 = 0;
  pwVar7 = (wchar_t *)FUN_1401af3ae();
  wcsncpy((wchar_t *)&DAT_14c83c538,pwVar7,0xff);
  _DAT_14c83c736 = 0;
  FUN_14606d686(&local_158);
  pwVar7 = L"";
  if ((int)uStack_150 != 0) {
    pwVar7 = local_158;
  }
  wcsncpy((wchar_t *)&DAT_14c83c738,pwVar7,0x3f);
  _DAT_14c83c7b6 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_145fce9ea(&local_158);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83c7b8,pwVar7,0x3f);
  _DAT_14c83c836 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = FUN_145c581c1();
  FUN_140002266(&local_178,&DAT_149e0625e,uVar8);
  pwVar7 = local_178;
  if (local_170 == 0) {
    pwVar7 = L"";
  }
  local_1f8 = (wchar_t *)&DAT_14c83c238;
  FUN_140002266(&local_158,L"%s-%s-%s",pwVar7,L"Win64");
  FUN_1448097c4(&local_158,&DAT_149e06124,&DAT_149e060b2,1);
  pwVar7 = local_158;
  local_158 = (wchar_t *)0x0;
  local_170 = (int)uStack_150;
  local_16c = uStack_150._4_4_;
  uStack_150 = 0;
  if (local_178 == (wchar_t *)0x0) {
    local_178 = pwVar7;
  }
  else {
    FUN_1400020a8();
    local_178 = pwVar7;
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  pwVar7 = local_178;
  if (local_170 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83c838,pwVar7,0x7f);
  _DAT_14c83c936 = 0;
  local_188 = (wchar_t *)0x0;
  uStack_180 = 0;
  local_198 = (wchar_t *)0x0;
  uStack_190 = 0;
  FUN_145c232fc(&local_188);
  pwVar7 = L"";
  if ((int)uStack_180 != 0) {
    pwVar7 = local_188;
  }
  wcsncpy((wchar_t *)&DAT_14c83c938,pwVar7,0x3f);
  _DAT_14c83c9b6 = 0;
  pwVar7 = L"";
  if ((int)uStack_190 != 0) {
    pwVar7 = local_198;
  }
  wcsncpy((wchar_t *)&DAT_14c83c9b8,pwVar7,0x3f);
  _DAT_14c83ca36 = 0;
  _DAT_14c83bd10 = FUN_140e55850();
  if (DAT_14c8c27ac < 1) {
    memset(&local_158,0,0x82);
    local_1a8._0_8_ = local_1a8._0_8_ & 0xffffffff00000000;
    local_1b8 = 0;
    local_1c8 = 0;
    FUN_140e55932(&local_158,&local_1a8,&local_1b8,&local_1c8);
    iVar14 = local_1c8;
    local_1f0 = &local_161;
    local_1f8 = (wchar_t *)&local_160;
    FUN_1457b80ec(local_1b8,local_1c8,&local_159,local_1e8);
    DAT_14c8c27ac = iVar14;
    if ((0 < local_160) && (DAT_14c8c27ac = iVar14, local_160 <= iVar14)) {
      DAT_14c8c27ac = local_160;
    }
  }
  _DAT_14c83bd14 = DAT_14c8c27ac;
  FUN_1400b22c2(&local_158,&DAT_14c8c27ca);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83ca38,pwVar7,0x3f);
  _DAT_14c83cab6 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_158,&DAT_14c8c27d7);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83cab8,pwVar7,0x3f);
  _DAT_14c83cb36 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461924c8(&local_158);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83cb38,pwVar7,0x3f);
  _DAT_14c83cbb6 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  pwVar7 = (wchar_t *)FUN_1461681e2(1);
  wcsncpy((wchar_t *)&DAT_14c83cbb8,pwVar7,0x3f);
  _DAT_14c83cc36 = 0;
  FUN_14626e212(&local_158);
  pwVar7 = local_158;
  if ((int)uStack_150 == 0) {
    pwVar7 = L"";
  }
  wcsncpy((wchar_t *)&DAT_14c83cc38,pwVar7,0x3f);
  _DAT_14c83ccb6 = 0;
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_48 = 7;
  local_158 = (wchar_t *)0x64006e00690057;
  uStack_150._0_2_ = L'o';
  uStack_150._2_2_ = L'w';
  uStack_150._4_2_ = L's';
  uStack_150._6_2_ = L'\0';
  local_50 = &local_158;
  wcsncpy((wchar_t *)&DAT_14c83dd38,(wchar_t *)&local_158,0x3f);
  _DAT_14c83ddb6 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_48 = 7;
  local_158 = (wchar_t *)0x64006e00690057;
  uStack_150._0_2_ = L'o';
  uStack_150._2_2_ = L'w';
  uStack_150._4_2_ = L's';
  uStack_150._6_2_ = L'\0';
  local_50 = &local_158;
  wcsncpy((wchar_t *)&DAT_14c83ddb8,(wchar_t *)&local_158,0x3f);
  _DAT_14c83de36 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  wcsncpy((wchar_t *)&DAT_14c83dcb8,L"Unknown",0x3f);
  _DAT_14c83dd36 = 0;
  if (DAT_14c846b14 == '\x01') {
    DAT_14c83bd04 = FUN_145cbeb2e();
    pwVar7 = (wchar_t *)&DAT_14c85eb20;
    if (DAT_14c846b14 == '\0') {
      pwVar7 = L"";
    }
    wcsncpy((wchar_t *)&DAT_14c83ce38,pwVar7,0x3ff);
    _DAT_14c83d636 = 0;
    pwVar7 = L"Game";
    if (DAT_14c872bf0 != '\0') {
      pwVar7 = L"Commandlet";
    }
    wcsncpy((wchar_t *)&DAT_14c83c0b8,pwVar7,0x3f);
    _DAT_14c83c136 = 0;
    wcsncpy((wchar_t *)&DAT_14c83c138,L"Unset",0x3f);
    _DAT_14c83c1b6 = 0;
    FUN_1460119fe(&local_158);
    pwVar7 = L"";
    if ((int)uStack_150 != 0) {
      pwVar7 = local_158;
    }
    wcsncpy((wchar_t *)&DAT_14c83df44,pwVar7,0xff);
    _DAT_14c83e142 = 0;
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_1f0 = (undefined1 *)0x0;
    local_1f8 = (wchar_t *)CONCAT71(local_1f8._1_7_,1);
    FUN_140751ea8(&DAT_14c846b20,L"EPICAPP=",&DAT_14c83c2b8,0x40);
    DAT_14c83bd1c = 0;
    if (DAT_14c846b14 == '\x01') {
      cVar6 = FUN_14054d46e(&DAT_14c846b20,L"fullcrashdumpalways");
      uVar11 = 2;
      if (cVar6 == '\0') {
        cVar6 = FUN_14054d46e(&DAT_14c846b20,L"fullcrashdump");
        uVar11 = 1;
        if (cVar6 == '\0') goto LAB_141553dca;
      }
      DAT_14c83bd1c = uVar11;
    }
LAB_141553dca:
    DAT_14c83df40 = FUN_140b3f358();
    pwVar7 = L"Attended";
    if (DAT_14c83df40 != '\0') {
      pwVar7 = L"Unattended";
    }
    wcsncpy((wchar_t *)&DAT_14c83dcb8,pwVar7,0x3f);
  }
  _DAT_14c83dd36 = 0;
  local_1a8.Data1 = 0;
  local_1a8.Data2 = 0;
  local_1a8.Data3 = 0;
  local_1a8.Data4[0] = '\0';
  local_1a8.Data4[1] = '\0';
  local_1a8.Data4[2] = '\0';
  local_1a8.Data4[3] = '\0';
  local_1a8.Data4[4] = '\0';
  local_1a8.Data4[5] = '\0';
  local_1a8.Data4[6] = '\0';
  local_1a8.Data4[7] = '\0';
  CoCreateGuid(&local_1a8);
  FUN_1400b22c2(&local_1b8,"Windows");
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  uStack_150._4_4_ = 0;
  FUN_1407c869a(&local_1a8,&local_158,0);
  puVar15 = &DAT_149dfb77a;
  local_1f8 = L"";
  if ((int)uStack_150 != 0) {
    local_1f8 = local_158;
  }
  if (local_1b0 != 0) {
    puVar15 = (undefined2 *)CONCAT44(uStack_1b4,local_1b8);
  }
  FUN_140002266(&local_1c8,L"%s%s-%s",L"UECC-",puVar15);
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_1c0 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)CONCAT44(uStack_1c4,local_1c8);
  }
  wcsncpy((wchar_t *)&DAT_14c83ccb8,pwVar7,0x3f);
  _DAT_14c83cd36 = 0;
  pcVar9 = (char *)FUN_145c2cbb6();
  if ((pcVar9 != (char *)0x0) && (*pcVar9 == '\x01')) {
    lVar10 = FUN_140d5712e();
    puVar3 = *(undefined8 **)(lVar10 + 0x28);
    plVar4 = *(longlong **)(lVar10 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      _DAT_14c83bd0c = (**(code **)(*(longlong *)*puVar3 + 0x20))();
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      _DAT_14c83bd0c = (**(code **)(*(longlong *)*puVar3 + 0x20))();
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
    local_158 = (wchar_t *)0x0;
    uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
    FUN_1446efa72(&local_158,0,2,0x10);
    uStack_150._0_4_ = 2;
    *(undefined ***)local_158 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    *(longlong *)(local_158 + 8) = lVar12;
    *(undefined ***)local_158 = &PTR_FUN_149e05730;
    FUN_1448b6402(lVar10 + 8,local_1e8,&local_158);
    if ((int)uStack_150 != 0) {
      if (local_158 == (wchar_t *)0x0) goto LAB_141554007;
      (*(code *)**(undefined8 **)local_158)(local_158,0);
      FUN_1446efa72(&local_158,0,0,0x10);
      uStack_150._0_4_ = 0;
    }
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141554007:
  uVar8 = FUN_1401cb356();
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150 = CONCAT44(uStack_150._4_4_,2);
  *(undefined ***)local_158 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e057a0;
  local_1f8 = (wchar_t *)CONCAT44(local_1f8._4_4_,0x3f800000);
  FUN_1405f67fc(uVar8,local_1d8,&local_158,L"FGenericCrashContext_Initialize_Lambda");
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_1d0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_1d0 + 0x10))();
    }
  }
  if ((int)uStack_150 == 0) {
LAB_1415540f5:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150 = uStack_150 & 0xffffffff00000000;
    goto LAB_1415540f5;
  }
  local_158 = (wchar_t *)0x0;
  uStack_150 = uStack_150 & 0xffffffff00000000;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)local_158 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e05810;
  FUN_14134bd86(&DAT_14c86a930,local_1e8,&local_158);
  if ((int)uStack_150 == 0) {
LAB_1415541c8:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_1415541c8;
  }
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)local_158 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e05880;
  FUN_14134bd86(&DAT_14c86a948,local_1e8,&local_158);
  if ((int)uStack_150 == 0) {
LAB_141554294:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_141554294;
  }
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)local_158 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e058f0;
  FUN_14134bd86(&DAT_14c86a960,local_1e8,&local_158);
  if ((int)uStack_150 == 0) {
LAB_141554360:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_141554360;
  }
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)local_158 = &PTR_LAB_149e059d0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e05960;
  FUN_145ffd908(local_1e8,&local_158);
  if ((int)uStack_150 == 0) {
LAB_14155442c:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_14155442c;
  }
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)local_158 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e05a40;
  FUN_1448b6402(&DAT_14c872cf8,local_1e8,&local_158);
  if ((int)uStack_150 == 0) {
LAB_1415544ff:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_158 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150._0_4_ = 0;
    goto LAB_1415544ff;
  }
  local_158 = (wchar_t *)0x0;
  uStack_150._0_4_ = 0;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150 = CONCAT44(uStack_150._4_4_,2);
  *(undefined ***)local_158 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e05ab0;
  iVar14 = 2;
  if (local_158 == (wchar_t *)0x0) {
LAB_141554b0d:
    if (iVar14 == 0) goto LAB_1415546d7;
    if (local_158 != (wchar_t *)0x0) {
      (*(code *)**(undefined8 **)local_158)(local_158,0);
      FUN_1446efa72(&local_158,0,0,0x10);
      goto LAB_1415546c4;
    }
  }
  else {
    cVar6 = (**(code **)(*(longlong *)local_158 + 0x30))();
    uVar5 = DAT_14c86a998;
    if (cVar6 == '\0') {
      iVar14 = (int)uStack_150;
      goto LAB_141554b0d;
    }
    if ((DAT_14c86a9a4 < 1) &&
       (DAT_14c86a9a0 = DAT_14c86a9a0 + -1, DAT_14c86a9a0 <= (int)DAT_14c86a998)) {
      if (0 < (int)DAT_14c86a998) {
        iVar14 = 0;
        do {
          if (((*(int *)(DAT_14c86a990 + 8 + (longlong)iVar14 * 0x10) == 0) ||
              (plVar4 = *(longlong **)(DAT_14c86a990 + (longlong)iVar14 * 0x10),
              plVar4 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(&DAT_14c86a990,iVar14);
            FUN_14005b248(&DAT_14c86a990);
          }
          else {
            iVar14 = iVar14 + 1;
          }
        } while (iVar14 < (int)DAT_14c86a998);
      }
      DAT_14c86a9a0 = 2;
      if (2 < (int)(DAT_14c86a998 * 2)) {
        DAT_14c86a9a0 = DAT_14c86a998 * 2;
      }
      if ((DAT_14c86a9a0 < (int)uVar5) && (DAT_14c86a99c != DAT_14c86a998)) {
        FUN_14045812c();
      }
    }
    if (((int)uStack_150 != 0) && (local_158 != (wchar_t *)0x0)) {
      (**(code **)(*(longlong *)local_158 + 0x38))(local_158,local_1e8);
    }
    uVar5 = DAT_14c86a998;
    lVar10 = (longlong)(int)DAT_14c86a998;
    DAT_14c86a998 = DAT_14c86a998 + 1;
    if (DAT_14c86a99c < DAT_14c86a998) {
      FUN_1447a71f6(&DAT_14c86a990,uVar5);
    }
    lVar13 = DAT_14c86a990;
    lVar10 = lVar10 * 0x10;
    *(undefined8 *)(DAT_14c86a990 + lVar10) = 0;
    *(undefined4 *)(lVar13 + 8 + lVar10) = 0;
    *(wchar_t **)(lVar13 + lVar10) = local_158;
    local_158 = (wchar_t *)0x0;
    *(int *)(lVar13 + 8 + lVar10) = (int)uStack_150;
LAB_1415546c4:
    uStack_150 = uStack_150 & 0xffffffff00000000;
LAB_1415546d7:
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar8 = FUN_145c3bb50();
  FUN_1462696a8(&local_158);
  FUN_145c73a1e(uVar8,local_1e8,&local_158);
  FUN_1401cb1ee(&local_158);
  local_158 = (wchar_t *)0x0;
  uStack_150 = uStack_150 & 0xffffffff00000000;
  FUN_1446efa72(&local_158,0,2,0x10);
  uStack_150._0_4_ = 2;
  *(undefined ***)local_158 = &PTR_LAB_149e05c00;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  *(longlong *)(local_158 + 8) = lVar13;
  *(undefined ***)local_158 = &PTR_FUN_149e05b90;
  FUN_145f9be62(&DAT_14c86a9a8,local_1e8,&local_158);
  if ((int)uStack_150 != 0) {
    if (local_158 == (wchar_t *)0x0) goto LAB_1415547e3;
    (*(code *)**(undefined8 **)local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    uStack_150._0_4_ = 0;
  }
  if (local_158 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1415547e3:
  lVar10 = FUN_145c0d0d2();
  if (lVar10 != 0) {
    FUN_140056680(&local_158,lVar10);
    FUN_140056680(local_1e8,L"BuildURL");
    FUN_14152eab6(local_1e8,&local_158);
    if (local_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar10 = FUN_1461ab21c();
  if (lVar10 != 0) {
    FUN_140056680(&local_158,lVar10);
    FUN_140056680(local_1e8,L"ExecutingJobURL");
    FUN_14152eab6(local_1e8,&local_158);
    if (local_1e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_158 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14577b282();
  FUN_14626d296();
  DAT_14c83f1dd = 1;
  if (CONCAT44(uStack_1c4,local_1c8) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_1b4,local_1b8) != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141554be2 FUN_141554be2 body=446 status=ok
// SIG undefined FUN_141554be2(void)

void FUN_141554be2(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar7 * 0x50) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_141554d20;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_141554d20:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141554da2 FUN_141554da2 body=446 status=ok
// SIG undefined FUN_141554da2(void)

void FUN_141554da2(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar7 * 0x50) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_141554ee0;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_141554ee0:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141554f62 FUN_141554f62 body=923 status=ok
// SIG undefined FUN_141554f62(void)

void FUN_141554f62(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14ab66aa0;
  param_1[4] = &PTR_FUN_14ab66b50;
  FUN_14586220e();
  FUN_145862352(param_1,0);
  FUN_1414abe7c(param_1);
  FUN_140457ffc(&DAT_14cb1b248,param_1);
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0xc9];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_14641b3b7(param_1[0xc5],*(undefined4 *)(param_1 + 0xc6));
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0xc4];
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
  FUN_1457dfa18(param_1 + 0xae);
  *(undefined4 *)(param_1 + 0xad) = 0;
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  FUN_1457747aa(param_1 + 0xa4);
  puVar4 = (undefined8 *)param_1[0xa1];
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x65];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar5 = (longlong *)param_1[0x62];
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
  if (*(char *)((longlong)param_1 + 0x282) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x282) = 0;
  }
  if (param_1[0x48] != 0) {
    plVar5 = param_1 + 0x4c;
    if ((longlong *)param_1[0x4a] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x4a];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_145862306(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_145862306(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1457dfa74(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_145c251e2(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1457dfaac(param_1 + 0x13);
  puVar4 = (undefined8 *)param_1[0x10];
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  puVar4 = (undefined8 *)param_1[0xd];
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar4 = (undefined8 *)param_1[10];
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar4 = (undefined8 *)param_1[7];
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar3;
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14114f6be(param_1 + 4);
  plVar5 = (longlong *)param_1[3];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415552a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415552fe FUN_1415552fe body=1357 status=ok
// SIG undefined FUN_1415552fe(void)

ulonglong FUN_1415552fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 ****ppppuVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_c8 [32];
  double local_a8;
  float local_a0;
  float local_9c;
  longlong local_98;
  longlong lStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70;
  undefined8 ***local_68;
  int local_60;
  undefined4 local_5c;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_9c = 1.0;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar18 = *(longlong *)(param_1 + 0x40);
  if (lVar18 == 0) {
    lVar15 = 0;
    lStack_90 = 0;
LAB_1415557b8:
    local_88 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_141555615:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar18 + 0x48);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar16 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar16 == (longlong *)0x0) ||
           (((int)plVar16[2] != *(int *)(lVar18 + 0x4c) ||
            ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_141555615;
        lVar15 = *plVar16;
      }
    }
    plVar16 = *(longlong **)(lVar18 + 0x118);
    lStack_90 = param_1;
    if (plVar16 == (longlong *)0x0) goto LAB_1415557b8;
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    bVar7 = false;
    local_88 = plVar16;
  }
  plVar16 = local_88;
  local_98 = CONCAT71(local_98._1_7_,3);
  local_70 = 0;
  local_80._0_4_ = 0;
  if (lVar15 == 0) {
    iVar9 = 0;
    uVar3 = (uint)local_80;
  }
  else {
    uVar3 = *(uint *)(lVar15 + 0xc);
    local_80 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar18 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar18 = 0;
    }
    iVar9 = *(int *)(lVar18 + 0x10);
    if (*(int *)(lVar18 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar9 = *(int *)(lVar18 + 0x10);
      bVar20 = iVar9 == 0;
      if (bVar20) {
        *(int *)(lVar18 + 0x10) = iVar12;
        iVar9 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_80;
      if (bVar20) {
        iVar9 = iVar12;
      }
    }
  }
  local_80._0_4_ = uVar3;
  local_80 = CONCAT44(iVar9,(uint)local_80);
  local_78 = 2;
  if (local_70 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_70 + -1,1);
    local_70 = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar2 = (int *)((longlong)plVar16 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  FUN_1447c3578(lVar4 + 0x88,&local_68,&local_98);
  cVar8 = FUN_140a1daa8(&local_68,&local_9c);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar13 = &local_68;
    if (0x18 < local_50) {
      ppppuVar13 = (undefined8 ****)local_68;
    }
    (*pcVar5)(ppppuVar13);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  lVar18 = DAT_14c9a3da0;
  if ((longlong)local_70 != 0) {
    lVar15 = (longlong)local_70 + -1;
    lVar19 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar18 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar9 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar18 + lVar19) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar19) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar12 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar12 = iVar9;
    }
    bVar6 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_70 = 0;
  }
  if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_88 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (cVar8 == '\0') {
    uVar14 = 0;
    goto LAB_14155575c;
  }
  uVar14 = 0;
  if ((local_9c < 0.0) || (1.0 < local_9c)) goto LAB_14155575c;
  local_98 = 0;
  lStack_90 = 0;
  local_a0 = 0.0;
  uVar10 = FUN_140343d7a(param_1);
  cVar8 = FUN_140558052(*(undefined1 *)(lVar4 + 0x80),uVar10,&local_a0,&local_98);
  if (cVar8 == '\0') {
LAB_14155574b:
    uVar14 = 0;
  }
  else {
    cVar8 = *(char *)(lVar4 + 0xc0);
    if ((local_a0 < local_9c && cVar8 == '\x01') ||
       (uVar14 = CONCAT71((int7)((ulonglong)&local_98 >> 8),1), cVar8 == '\0' && local_9c < local_a0
       )) {
      pwVar17 = L"less";
      if (cVar8 == '\x01') {
        pwVar17 = L"more";
      }
      local_a8 = (double)(local_a0 * 100.0);
      FUN_140002266(&local_68,L"Need %.1f%% or %s. Have: %.1f%% in ",(double)(local_9c * 100.0),
                    pwVar17);
      if ((undefined8 ****)(param_1 + 0x90) == &local_68) {
        if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 ****)(param_1 + 0x90) = local_68;
        local_68 = (undefined8 ****)0x0;
        *(int *)(param_1 + 0x98) = local_60;
        *(undefined4 *)(param_1 + 0x9c) = local_5c;
      }
      uVar10 = FUN_1486b396c();
      FUN_1401cfad2(uVar10,&local_68,*(undefined1 *)(lVar4 + 0x80));
      iVar9 = local_60 + -1;
      if (local_60 == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8((undefined8 ****)(param_1 + 0x90),local_68,iVar9);
      if ((undefined8 ****)local_68 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14155574b;
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_14155575c:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 14155584c FUN_14155584c body=345 status=ok
// SIG undefined FUN_14155584c(void)

ulonglong FUN_14155584c(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  
  puVar9 = &DAT_149e27170;
  if (param_4 == '\x01') {
    puVar9 = &DAT_149e27130;
  }
  uVar5 = (ulonglong)((int)((ulonglong)(param_2 + 2) * 0xaaaaaaab >> 0x20) * 2 & 0xfffffffc);
  *(undefined2 *)(param_3 + uVar5 * 2) = 0;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar11 = param_2 % 3;
    param_3 = param_3 + uVar5 * 2;
    param_1 = param_1 + (ulonglong)param_2;
    if (uVar11 != 0) {
      bVar2 = *(byte *)(param_1 + -1);
      if (uVar11 == 2) {
        pbVar1 = (byte *)(param_1 + -2);
        param_1 = param_1 + -2;
        uVar6 = (uint)*pbVar1 * 0x400 + (uint)bVar2 * 4;
        *(undefined2 *)(param_3 + -2) = 0x3d;
        uVar7 = (ushort)(byte)puVar9[(bVar2 & 0xf) << 2];
      }
      else {
        param_1 = param_1 + -1;
        uVar6 = (uint)bVar2 << 10;
        *(undefined2 *)(param_3 + -2) = 0x3d;
        uVar7 = 0x3d;
      }
      *(ushort *)(param_3 + -4) = uVar7;
      *(ushort *)(param_3 + -6) = (ushort)(byte)puVar9[uVar6 >> 6 & 0x3f];
      *(ushort *)(param_3 + -8) = (ushort)(byte)puVar9[uVar6 >> 0xc];
      param_3 = param_3 + -8;
    }
    if (param_2 != uVar11) {
      puVar8 = (ushort *)(param_3 + -2);
      lVar10 = 0;
      do {
        bVar2 = *(byte *)(param_1 + -1 + lVar10);
        bVar3 = *(byte *)(param_1 + -2 + lVar10);
        bVar4 = *(byte *)(param_1 + -3 + lVar10);
        *puVar8 = (ushort)(byte)puVar9[bVar2 & 0x3f];
        puVar8[-1] = (ushort)(byte)puVar9[(ushort)(CONCAT11(bVar3,bVar2) >> 6) & 0x3f];
        puVar8[-2] = (ushort)(byte)puVar9[((uint)bVar4 << 0x10 | (uint)bVar3 << 8) >> 0xc & 0x3f];
        puVar8[-3] = (ushort)(byte)puVar9[bVar4 >> 2];
        lVar10 = lVar10 + -3;
        puVar8 = puVar8 + -4;
      } while ((param_2 / 3) * -3 != (int)lVar10);
    }
  }
  return uVar5;
}



// FUNCTION 1415559a6 FUN_1415559a6 body=164 status=ok
// SIG undefined FUN_1415559a6(void)

void FUN_1415559a6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Coordinates";
  local_38 = 0xb;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Coordinates";
  local_38 = 0xb;
  FUN_140208c1e(&DAT_14caead88,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141555a4c FUN_141555a4c body=164 status=ok
// SIG undefined FUN_141555a4c(void)

void FUN_141555a4c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Constants";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Constants";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeae30,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141555af2 FUN_141555af2 body=289 status=ok
// SIG undefined FUN_141555af2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141555af2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca250) {
    FUN_144b3d300(&DAT_14c9ca250);
    if (DAT_14c9ca250 == -1) {
      FUN_141555c14();
      FUN_145dd1722();
      FUN_140db5666(&DAT_14c9ca1a8,0,&DAT_14c9ca140,L"FDistortionApplyScreenPS",
                    L"/Engine/Private/DistortApplyScreenPS.usf",L"Main",3,8,FUN_1471579d0,
                    FUN_147157970,&LAB_14715794a,&LAB_147157946,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9cdc98);
      _DAT_14c9ca1a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7e53);
      _Init_thread_footer(&DAT_14c9ca250);
    }
  }
  return &DAT_14c9ca1a8;
}



// FUNCTION 141555c14 FUN_141555c14 body=258 status=ok
// SIG undefined FUN_141555c14(void)

void FUN_141555c14(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cdd18) {
    FUN_144b3d300(&DAT_14c9cdd18);
    if (DAT_14c9cdd18 == -1) {
      FUN_141555d18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x97;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cdc98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1c95f);
      _Init_thread_footer(&DAT_14c9cdd18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141555d18 FUN_141555d18 body=226 status=ok
// SIG undefined FUN_141555d18(void)

longlong * FUN_141555d18(longlong *param_1)

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
  pcVar13 = FUN_1462c2998;
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



// FUNCTION 141555dfc FUN_141555dfc body=289 status=ok
// SIG undefined FUN_141555dfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141555dfc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13958) {
    FUN_144b3d300(&DAT_14ca13958);
    if (DAT_14ca13958 == -1) {
      FUN_141555f1e();
      FUN_145dd1984();
      FUN_140db5666(&DAT_14ca138b0,0,&DAT_14ca13848,L"FNaniteMarkStencilPS",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",L"MarkStencilPS",3,1,
                    FUN_14725102a,FUN_147250fca,&LAB_1462eec90,&LAB_147250fc6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca172d0);
      _DAT_14ca138b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02c74);
      _Init_thread_footer(&DAT_14ca13958);
    }
  }
  return &DAT_14ca138b0;
}



// FUNCTION 141555f1e FUN_141555f1e body=258 status=ok
// SIG undefined FUN_141555f1e(void)

void FUN_141555f1e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17350) {
    FUN_144b3d300(&DAT_14ca17350);
    if (DAT_14ca17350 == -1) {
      FUN_145dd1ace(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x35;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca172d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2758b);
      _Init_thread_footer(&DAT_14ca17350);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141556022 FUN_141556022 body=847 status=ok
// SIG undefined FUN_141556022(void)

uint * FUN_141556022(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar21 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar21 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar21) {
      FUN_140549c28(param_1,uVar21);
    }
    iVar17 = (int)param_1[5];
    if (iVar17 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar10 = iVar17 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar14 = iVar17 + 1;
    iVar19 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar19 = iVar17;
    }
    if (iVar19 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar17) {
        if (iVar17 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar10 = iVar17;
        }
        else {
          uVar13 = iVar17 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar13) {
              uVar22 = uVar13;
            }
          }
          else {
            uVar22 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar22 << 2,0);
          iVar10 = (int)(uVar16 >> 2);
          iVar14 = -0x20;
          if ((int)uVar13 <= iVar10) {
            iVar14 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar15,iVar10);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar10 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar10 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar15;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar10 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar11 = (longlong)(int)uVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar17 & 0x1f;
    puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar19 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    uVar21 = *(uint *)(param_1 + 6);
    lVar11 = (longlong)(int)uVar21;
    iVar17 = *(int *)(*param_1 + 4 + lVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar17;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar17 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  uVar13 = uVar21 + 0x1f;
  if (-1 < (int)uVar21) {
    uVar13 = uVar21;
  }
  puVar2 = (uint *)((longlong)plVar15 + (longlong)((int)uVar13 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar21 & 0x1f);
  iVar17 = 1;
  puVar2 = (uint *)(*param_1 + lVar11 * 0x28);
  puVar4 = (undefined8 *)param_3[1];
  uVar13 = *(uint *)*param_3;
  *puVar2 = uVar13;
  *(undefined8 *)(puVar2 + 2) = *puVar4;
  *(undefined8 *)(puVar2 + 4) = puVar4[1];
  lVar11 = puVar4[2];
  *(longlong *)(puVar2 + 6) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
    uVar13 = *puVar2;
  }
  puVar2[8] = 0xffffffff;
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar22 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar15 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar15 = (longlong *)param_1[8];
      }
      uVar20 = *(uint *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
      if (uVar20 != 0xffffffff) {
        do {
          puVar3 = (uint *)(*param_1 + (longlong)(int)uVar20 * 0x28);
          if (*puVar3 == uVar13) {
            plVar15 = *(longlong **)(puVar3 + 6);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar15 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
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
            uVar13 = *puVar2;
            uVar22 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            uVar7 = puVar2[5];
            uVar8 = puVar2[6];
            uVar9 = puVar2[7];
            puVar3[4] = puVar2[4];
            puVar3[5] = uVar7;
            puVar3[6] = uVar8;
            puVar3[7] = uVar9;
            *puVar3 = uVar13;
            puVar3[1] = uVar22;
            puVar3[2] = uVar5;
            puVar3[3] = uVar6;
            FUN_14691317c(param_1,uVar21);
            uVar21 = uVar20;
            goto LAB_1415561f7;
          }
          uVar20 = puVar3[8];
        } while (uVar20 != 0xffffffff);
      }
    }
    if (3 < uVar22) {
      uVar16 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar11 & 0x1f);
    }
  }
  if (((int)uVar22 < 1) || (iVar17 <= (int)param_1[9])) {
    uVar13 = (int)param_1[9] - 1U & uVar13;
    puVar2[9] = uVar13;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    puVar2[8] = *(uint *)((longlong)plVar15 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(uint *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar17;
    FUN_141556372(param_1);
  }
LAB_1415561f7:
  *param_2 = uVar21;
  return param_2;
}



// FUNCTION 141556372 FUN_141556372 body=536 status=ok
// SIG undefined FUN_141556372(void)

void FUN_141556372(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x28);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x24 + lVar10 * 0x28) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_141556545;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_141556545:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155658c FUN_14155658c body=90 status=ok
// SIG undefined FUN_14155658c(void)

void FUN_14155658c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_100000018;
  param_1[4] = 0;
  param_1[5] = &DAT_100000018;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &DAT_100000018;
  param_1[10] = 0;
  param_1[0xb] = &DAT_100000018;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



// FUNCTION 1415565e6 FUN_1415565e6 body=135 status=ok
// SIG undefined FUN_1415565e6(void)

void FUN_1415565e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b7f50;
  if ((longlong *)param_1[0x61] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x61] + 0x10))();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x58] + 0x10))();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1415c2420(param_1);
  return;
}



// FUNCTION 14155666e FUN_14155666e body=681 status=ok
// SIG undefined FUN_14155666e(void)

undefined8 * FUN_14155666e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_248 [39];
  undefined1 local_221;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_208;
  longlong *local_200;
  undefined1 local_1f8 [424];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b4732a0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0x200000000;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x159) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_14155679f;
  FUN_140a504fe(local_1f8);
  FUN_1461d08ae(local_220,&local_221);
  FUN_14656ebb0(local_220,&local_208,local_1f8);
  plVar1 = local_200;
  if (local_200 == (longlong *)0x0) {
    param_1[5] = local_208;
    plVar4 = (longlong *)param_1[6];
    if (plVar4 != (longlong *)0x0) {
      param_1[6] = 0;
LAB_141556840:
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x00014155686b:
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    param_1[5] = local_208;
    plVar4 = (longlong *)param_1[6];
    if (local_200 == plVar4) {
      LOCK();
      plVar4 = local_200 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar4 = plVar1;
        goto joined_r0x00014155686b;
      }
    }
    else {
      param_1[6] = local_200;
      if (plVar4 != (longlong *)0x0) goto LAB_141556840;
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_218 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar2 = (int *)((longlong)local_218 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  FUN_140a54e77(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(local_1f8);
LAB_14155679f:
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141556918 FUN_141556918 body=291 status=ok
// SIG undefined FUN_141556918(void)

void FUN_141556918(longlong param_1,wchar_t *param_2)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  pwVar6 = wcschr(param_2,L'=');
  if (pwVar6 == (wchar_t *)0x0) {
    sVar7 = wcslen(param_2);
    iVar5 = (int)sVar7;
  }
  else {
    pwVar6 = wcschr(param_2,L'=');
    iVar5 = (int)((ulonglong)((longlong)pwVar6 - (longlong)param_2) >> 1);
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x50);
  uVar11 = (ulonglong)iVar3;
  uVar10 = 0;
  if (0 < (longlong)uVar11) {
    lVar12 = (longlong)iVar5;
    piVar8 = (int *)(*plVar1 + 8);
    uVar9 = 0;
    do {
      uVar10 = uVar9;
      if (*piVar8 == 0) {
        iVar5 = FUN_144a54874(&DAT_149dfb77a,param_2,lVar12);
        if (iVar5 == 0) break;
      }
      else {
        lVar4 = *(longlong *)(piVar8 + -2);
        iVar5 = FUN_144a54874(lVar4,param_2,lVar12);
        if ((iVar5 == 0) &&
           ((sVar2 = *(short *)(lVar4 + lVar12 * 2), sVar2 == 0 || (sVar2 == 0x3d)))) break;
      }
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 4;
      uVar10 = uVar11;
    } while (uVar11 != uVar9);
  }
  if ((int)uVar10 != iVar3) {
    FUN_14020fad6((uVar10 & 0xffffffff) * 0x10 + *plVar1,param_2);
    return;
  }
  *(uint *)(param_1 + 0x50) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
    FUN_1447a1bd6(plVar1,iVar3);
  }
  FUN_140056680(uVar11 * 0x10 + *plVar1,param_2);
  return;
}



// FUNCTION 141556a3c FUN_141556a3c body=327 status=ok
// SIG undefined FUN_141556a3c(void)

undefined8 * FUN_141556a3c(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_98 [32];
  undefined **local_78;
  uint local_70;
  undefined4 uStack_6c;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &PTR_FUN_14a184370;
  local_60 = *(byte *)(param_1 + 0xc);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_60])(&local_70,param_1 + 10);
  local_78 = &PTR_FUN_14a5af930;
  local_58 = 0;
  uStack_50 = 0;
  if ((&DAT_149fc1b6e)[local_60] == '\x01') {
    if ((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) {
      cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x28))();
      local_78 = &PTR_FUN_14a5af930;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_141556ae0;
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
  }
  else {
    cVar2 = (local_70 & 0xffffff) != 0;
LAB_141556ae0:
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
    if (cVar2 != '\0') {
      *param_2 = &PTR_FUN_14a184370;
      bVar1 = *(byte *)(param_1 + 0xc);
      *(byte *)(param_2 + 3) = bVar1;
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_2 + 1,param_1 + 10);
      *param_2 = &PTR_FUN_14a5af930;
      param_2[4] = 0;
      param_2[5] = 0;
      goto LAB_141556b1b;
    }
  }
  (**(code **)(*param_1 + 0x340))(param_1,param_2);
LAB_141556b1b:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141556b84 FUN_141556b84 body=431 status=ok
// SIG undefined FUN_141556b84(void)

longlong *
FUN_141556b84(longlong param_1,undefined8 param_2,int param_3,longlong param_4,undefined8 param_5,
             undefined8 param_6,undefined1 param_7)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar7 = &DAT_149dfb77a;
  local_70 = param_2;
  FUN_14020fad6(param_6,&DAT_149dfb77a);
  local_58[0] = 0;
  local_58[1] = 0;
  if (0 < *(int *)(param_4 + 0x50)) {
    lVar6 = 8;
    lVar8 = 0;
    do {
      FUN_140002184(local_58,0x3f);
      iVar1 = *(int *)(*(longlong *)(param_4 + 0x48) + lVar6);
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(local_58,*(undefined8 *)(*(longlong *)(param_4 + 0x48) + -8 + lVar6),iVar3);
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar8 < *(int *)(param_4 + 0x50));
  }
  plVar2 = *(longlong **)(param_1 + 0x170);
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(param_4 + 0x60) != 0) {
      puVar7 = *(undefined2 **)(param_4 + 0x58);
    }
    FUN_140056680(local_68,puVar7);
    uVar4 = local_70;
    local_78 = param_6;
    local_80 = param_5;
    local_88 = local_58;
    plVar5 = (longlong *)(**(code **)(*plVar2 + 0x760))(plVar2,local_70,param_3,local_68);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar5 != (longlong *)0x0) {
      *(undefined1 *)((longlong)plVar5 + 0x5a4) = param_7;
      FUN_1433b72a0(plVar5,3);
      FUN_140c7ce82(plVar5,param_3 != 0);
      if (param_3 == 2) {
        FUN_14140e92e(plVar5,1,1);
      }
      (**(code **)(*plVar5 + 0xd30))(plVar5,uVar4);
      (**(code **)(*plVar2 + 0x768))(plVar2,plVar5);
      goto LAB_141556cfa;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_141556cfa:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141556d34 FUN_141556d34 body=226 status=ok
// SIG undefined FUN_141556d34(void)

longlong * FUN_141556d34(longlong *param_1)

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
  pcVar13 = FUN_1462dd31e;
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



// FUNCTION 141556e18 FUN_141556e18 body=226 status=ok
// SIG undefined FUN_141556e18(void)

longlong * FUN_141556e18(longlong *param_1)

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
  pcVar13 = FUN_1462e3d5c;
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



// FUNCTION 141556efc FUN_141556efc body=299 status=ok
// SIG undefined FUN_141556efc(void)

void FUN_141556efc(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caa9c48);
  lVar2 = DAT_14caa9c38;
  lVar3 = (longlong)DAT_14caa9c40;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  lVar2 = DAT_14caa9c28;
  lVar3 = (longlong)DAT_14caa9c30;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar4);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  DAT_14caa9c40 = 0;
  if (DAT_14caa9c44 != 0) {
    FUN_145dd59cc(&DAT_14caa9c38);
  }
  DAT_14caa9c30 = 0;
  if (DAT_14caa9c34 != 0) {
    FUN_145dd59cc(&DAT_14caa9c28);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caa9c48);
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14caa9c48);
  if (DAT_14caa9c38 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caa9c28 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141557028 FUN_141557028 body=78 status=ok
// SIG undefined FUN_141557028(void)

void FUN_141557028(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b9838f8;
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x1a0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x1c0) = 0;
  }
  FUN_1461b9528(param_1 + 0x10);
  return;
}



// FUNCTION 141557076 FUN_141557076 body=226 status=ok
// SIG undefined FUN_141557076(void)

longlong * FUN_141557076(longlong *param_1)

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
  pcVar13 = FUN_1462b6dc0;
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



// FUNCTION 14155715a FUN_14155715a body=226 status=ok
// SIG undefined FUN_14155715a(void)

longlong * FUN_14155715a(longlong *param_1)

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
  pcVar13 = FUN_146314402;
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



// FUNCTION 14155723e FUN_14155723e body=164 status=ok
// SIG undefined FUN_14155723e(void)

void FUN_14155723e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb250,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415572e4 FUN_1415572e4 body=164 status=ok
// SIG undefined FUN_1415572e4(void)

void FUN_1415572e4(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Execution";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Execution";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caebda8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155738a FUN_14155738a body=164 status=ok
// SIG undefined FUN_14155738a(void)

void FUN_14155738a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeba60,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557430 FUN_141557430 body=164 status=ok
// SIG undefined FUN_141557430(void)

void FUN_141557430(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb238,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415574d6 FUN_1415574d6 body=164 status=ok
// SIG undefined FUN_1415574d6(void)

void FUN_1415574d6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"VirtualTexture";
  local_38 = 0xe;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"VirtualTexture";
  local_38 = 0xe;
  FUN_140208c1e(&DAT_14caeaa40,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155757c FUN_14155757c body=164 status=ok
// SIG undefined FUN_14155757c(void)

void FUN_14155757c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb268,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557622 FUN_141557622 body=164 status=ok
// SIG undefined FUN_141557622(void)

void FUN_141557622(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Water";
  local_38 = 5;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Water";
  local_38 = 5;
  FUN_140208c1e(&DAT_14caebd00,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415576c8 FUN_1415576c8 body=226 status=ok
// SIG undefined FUN_1415576c8(void)

longlong * FUN_1415576c8(longlong *param_1)

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
  pcVar13 = FUN_1462ed074;
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



// FUNCTION 1415577ac FUN_1415577ac body=226 status=ok
// SIG undefined FUN_1415577ac(void)

longlong * FUN_1415577ac(longlong *param_1)

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
  pcVar13 = FUN_14645fc44;
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



// FUNCTION 141557890 FUN_141557890 body=226 status=ok
// SIG undefined FUN_141557890(void)

longlong * FUN_141557890(longlong *param_1)

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
  pcVar13 = FUN_1462c4702;
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



// FUNCTION 141557974 FUN_141557974 body=164 status=ok
// SIG undefined FUN_141557974(void)

void FUN_141557974(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebb80,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557a1a FUN_141557a1a body=164 status=ok
// SIG undefined FUN_141557a1a(void)

void FUN_141557a1a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebb68,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557ac0 FUN_141557ac0 body=164 status=ok
// SIG undefined FUN_141557ac0(void)

void FUN_141557ac0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb0a0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557b66 FUN_141557b66 body=165 status=ok
// SIG undefined FUN_141557b66(void)

void FUN_141557b66(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MaterialAttributes";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MaterialExpression";
  local_28 = 0x12;
  FUN_1446e940c(local_38,&local_30);
  local_30 = L"Material Attributes";
  local_28 = 0x13;
  FUN_140208c1e(&DAT_14caeb018,local_38,local_34,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557c0c FUN_141557c0c body=164 status=ok
// SIG undefined FUN_141557c0c(void)

void FUN_141557c0c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebc58,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557cb2 FUN_141557cb2 body=164 status=ok
// SIG undefined FUN_141557cb2(void)

void FUN_141557cb2(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebcd0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141557d58 FUN_141557d58 body=479 status=ok
// SIG undefined FUN_141557d58(void)

undefined4 FUN_141557d58(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  lVar6 = (**(code **)(*param_1 + 0x20))();
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x100) == 0)) {
    uVar8 = 0;
  }
  else {
    plVar7 = (longlong *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
    if ((int)param_3[1] < 1) {
      uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    }
    else {
      plVar7 = (longlong *)*plVar7;
      lVar11 = 0;
      do {
        lVar2 = *param_3;
        puVar3 = *(undefined8 **)(lVar2 + lVar11 * 0x10);
        if ((longlong)*(int *)(lVar6 + 0x140) != 0) {
          lVar4 = *(longlong *)(lVar6 + 0x138);
          uVar9 = (longlong)*(int *)(lVar6 + 0x140) * 0x10;
          uVar10 = 0;
          do {
            cVar5 = (**(code **)*puVar3)(puVar3,*(undefined8 *)(lVar4 + uVar10));
            if (cVar5 != '\0') {
              if ((int)(~uVar10 >> 4) != 0) goto LAB_141557ed9;
              break;
            }
            uVar10 = uVar10 + 0x10;
          } while (uVar9 != uVar10);
        }
        iVar1 = *(int *)(lVar6 + 0x140);
        *(uint *)(lVar6 + 0x140) = iVar1 + 1U;
        if (*(uint *)(lVar6 + 0x144) < iVar1 + 1U) {
          FUN_1413eac7e((longlong *)(lVar6 + 0x138),iVar1);
        }
        puVar12 = (undefined8 *)(lVar2 + lVar11 * 0x10);
        lVar2 = *(longlong *)(lVar6 + 0x138);
        uVar9 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + uVar9) = *puVar12;
        lVar4 = puVar12[1];
        *(longlong *)(lVar2 + 8 + uVar9) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*(longlong *)param_1[0x4f] + 0x138))((longlong *)param_1[0x4f],puVar3);
        if ((plVar7 != (longlong *)0x0) && (cVar5 == '\0')) {
          (**(code **)(*plVar7 + 0x128))(plVar7,puVar3[3],1);
          if ((param_1[0x51] == param_2) && (*(int *)(lVar6 + 0x148) == 4)) {
            (**(code **)(*plVar7 + 0x100))(plVar7,puVar3[3]);
          }
        }
LAB_141557ed9:
        FUN_14666f444(param_1,puVar3);
        lVar11 = lVar11 + 1;
        uVar8 = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
      } while (lVar11 < (int)param_3[1]);
    }
  }
  (**(code **)(*param_1 + 0x3b8))(param_1,param_2,param_3,uVar8);
  return uVar8;
}



// FUNCTION 141557f38 FUN_141557f38 body=226 status=ok
// SIG undefined FUN_141557f38(void)

longlong * FUN_141557f38(longlong *param_1)

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
  pcVar13 = FUN_1462e337e;
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



// FUNCTION 14155801c FUN_14155801c body=277 status=ok
// SIG undefined FUN_14155801c(void)

undefined8 FUN_14155801c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14155812b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14155812b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14155812b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1415580d9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1415580d9;
    }
  }
  uVar6 = 0;
LAB_1415580d9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141558132 FUN_141558132 body=40 status=ok
// SIG undefined FUN_141558132(void)

void FUN_141558132(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000141558156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x20))(param_1 + 0x30);
  return;
}



// FUNCTION 14155815a FUN_14155815a body=2300 status=ok
// SIG undefined FUN_14155815a(void)

void FUN_14155815a(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong *local_88;
  uint *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar18 = (longlong *)(param_1 + -0x30);
  lVar10 = FUN_1407ce6c2(plVar18);
  if (lVar10 != 0) {
    FUN_140457ffc(lVar10 + 0x60,plVar18);
    FUN_140457ffc(lVar10 + 0x360,plVar18);
  }
  local_88 = plVar18;
  FUN_140457ffc(&DAT_14cbd0b78,plVar18);
  lVar10 = FUN_14026506e(param_1);
  if (lVar10 != 0) {
    if (DAT_14cba8288 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1464cee30;
      local_a8 = &LAB_148bfac22;
      local_b0 = &LAB_140f21842;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      plVar18 = (longlong *)(lVar10 + 0x71e8);
      FUN_14113fa0e(local_58);
      FUN_1409ca370(plVar18,local_88);
      iVar8 = *(int *)(lVar10 + 0x71f0);
      if (0 < iVar8) {
        lVar11 = 0;
        bVar21 = false;
        do {
          while( true ) {
            lVar19 = *plVar18;
            puVar14 = (uint *)(lVar19 + lVar11 * 0x10);
            if (((((*(longlong *)(lVar19 + 8 + lVar11 * 0x10) != 0) && (puVar14[1] != 0)) &&
                 (uVar2 = *puVar14, -1 < (int)uVar2)) &&
                (((int)uVar2 < DAT_14c9647dc &&
                 (plVar23 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar23 != (longlong *)0x0)))) &&
               ((*(uint *)(plVar23 + 2) == puVar14[1] &&
                (((*(uint *)(plVar23 + 1) >> 0x1c & 1) == 0 && (*plVar23 != 0)))))) break;
            iVar22 = iVar8 + ~(uint)lVar11;
            if (iVar22 != 0) {
              if (0 < iVar22) {
                iVar22 = 1;
              }
              memmove(puVar14,(void *)(lVar19 + (longlong)(iVar8 - iVar22) * 0x10),
                      (longlong)iVar22 << 4);
              iVar8 = *(int *)(lVar10 + 0x71f0);
            }
            iVar8 = iVar8 + -1;
            *(int *)(lVar10 + 0x71f0) = iVar8;
            bVar21 = true;
            if (iVar8 <= lVar11) goto LAB_1415588fb;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        if (bVar21) {
LAB_1415588fb:
          FUN_1400bbcfc(plVar18);
        }
      }
      plVar18 = (longlong *)(lVar10 + 0x7210);
      FUN_14113fa0e(local_60);
      FUN_1409ca370(plVar18,local_88);
      iVar8 = *(int *)(lVar10 + 0x7218);
      if (0 < iVar8) {
        lVar11 = 0;
        bVar21 = false;
        do {
          while( true ) {
            lVar19 = *plVar18;
            puVar14 = (uint *)(lVar19 + lVar11 * 0x10);
            if ((((*(longlong *)(lVar19 + 8 + lVar11 * 0x10) != 0) && (puVar14[1] != 0)) &&
                (uVar2 = *puVar14, -1 < (int)uVar2)) &&
               ((((int)uVar2 < DAT_14c9647dc &&
                 (plVar23 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar23 != (longlong *)0x0)) &&
                ((*(uint *)(plVar23 + 2) == puVar14[1] &&
                 (((*(uint *)(plVar23 + 1) >> 0x1c & 1) == 0 && (*plVar23 != 0)))))))) break;
            iVar22 = iVar8 + ~(uint)lVar11;
            if (iVar22 != 0) {
              if (0 < iVar22) {
                iVar22 = 1;
              }
              memmove(puVar14,(void *)(lVar19 + (longlong)(iVar8 - iVar22) * 0x10),
                      (longlong)iVar22 << 4);
              iVar8 = *(int *)(lVar10 + 0x7218);
            }
            iVar8 = iVar8 + -1;
            *(int *)(lVar10 + 0x7218) = iVar8;
            bVar21 = true;
            if (iVar8 <= lVar11) goto LAB_141558908;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        if (bVar21) {
LAB_141558908:
          FUN_1400bbcfc(plVar18);
        }
      }
    }
  }
  lVar10 = FUN_1400d7050(param_1);
  plVar18 = local_88;
  if (lVar10 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar11 = FUN_140e06fb1(lVar10);
      if (lVar11 != 0) {
        FUN_140457ffc(lVar11 + 0x30,plVar18);
      }
      lVar10 = FUN_1402a1246(lVar10);
      if (lVar10 != 0) {
        FUN_140457ffc(lVar10 + 0xdd0,plVar18);
      }
    }
  }
  lVar10 = FUN_140495e96(param_1);
  if ((lVar10 != 0) && (lVar10 = FUN_1403ca91c(lVar10), lVar10 != 0)) {
    FUN_140457ffc(lVar10 + 0x78,plVar18);
  }
  lVar10 = (**(code **)(*plVar18 + 0x180))(plVar18);
  if (lVar10 != 0) {
    puVar12 = (uint *)FUN_1402735c8();
    puVar14 = puVar12;
    if (*(int *)(param_1 + 0x20) != 0) {
      plVar23 = (longlong *)(param_1 + 0x18);
      if (((longlong *)*plVar23 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*(longlong *)*plVar23 + 0x30))(), cVar7 != '\0')) {
        local_80 = puVar12;
        if ((*(int *)(param_1 + 0x20) == 0) ||
           (plVar4 = (longlong *)*plVar23, plVar4 == (longlong *)0x0)) {
          local_50 = (code *)0x0;
        }
        else {
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_50);
        }
        if ((longlong)(int)puVar12[0x1de] != 0) {
          lVar11 = *(longlong *)(puVar12 + 0x1dc);
          lVar19 = (longlong)(int)puVar12[0x1de] * 0x38;
          do {
            cVar7 = FUN_140114204(lVar11);
            pcVar6 = local_50;
            if ((cVar7 != '\0') && (lVar13 = FUN_140149a73(lVar10,0), lVar13 != 0)) {
              FUN_140825b72(lVar11,pcVar6,lVar13,0);
            }
            lVar11 = lVar11 + 0x38;
            lVar19 = lVar19 + -0x38;
          } while (lVar19 != 0);
        }
        puVar14 = local_80;
        if ((*(int *)(param_1 + 0x20) != 0) &&
           (puVar5 = (undefined8 *)*plVar23, puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,0);
          FUN_1446efa72(plVar23,0,0,0x10);
          *(undefined4 *)(param_1 + 0x20) = 0;
          puVar14 = local_80;
        }
      }
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      plVar23 = (longlong *)(param_1 + 0x48);
      if (((longlong *)*plVar23 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*(longlong *)*plVar23 + 0x30))(), cVar7 != '\0')) {
        local_78 = param_1;
        if ((*(int *)(param_1 + 0x50) == 0) ||
           (plVar18 = (longlong *)*plVar23, plVar18 == (longlong *)0x0)) {
          local_50 = (code *)0x0;
        }
        else {
          (**(code **)(*plVar18 + 0x38))(plVar18,&local_50);
        }
        local_80 = puVar14 + 0x332;
        uVar2 = puVar12[0x338];
        local_70 = plVar23;
        local_68 = lVar10;
        if (uVar2 == 0) {
          uVar24 = 1;
          uVar20 = 0;
          iVar8 = 0;
          uVar9 = 0;
        }
        else {
          puVar14 = *(uint **)(puVar12 + 0x336);
          if (*(uint **)(puVar12 + 0x336) == (uint *)0x0) {
            puVar14 = local_80;
          }
          uVar9 = *puVar14;
          if (uVar9 == 0) {
            iVar8 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar8 = uVar2 - 1;
            }
            uVar20 = 0;
            uVar24 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar24 = uVar20;
            }
            iVar8 = 0;
            do {
              if (uVar24 == uVar20) goto LAB_1415586de;
              iVar8 = iVar8 + 0x20;
              uVar9 = puVar14[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar20 = 0;
            iVar8 = 0;
          }
          uVar24 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar24 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar9 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar9) {
            uVar9 = uVar2;
          }
        }
        if (uVar9 != uVar2) {
          uVar17 = 0xffffffff;
          do {
            lVar10 = (longlong)(int)uVar9 * 0x58 + *(longlong *)(puVar12 + 0x32e);
            cVar7 = FUN_140114204(lVar10);
            pcVar6 = local_50;
            if ((cVar7 != '\0') && (lVar11 = FUN_140149a73(local_68,0), lVar11 != 0)) {
              FUN_140825b72(lVar10,pcVar6,lVar11,0);
            }
            uVar17 = uVar17 & ~(uint)uVar24;
            puVar14 = *(uint **)(puVar12 + 0x336);
            if (*(uint **)(puVar12 + 0x336) == (uint *)0x0) {
              puVar14 = local_80;
            }
            uVar3 = puVar12[0x338];
            iVar22 = (int)uVar20;
            lVar10 = (longlong)iVar22;
            uVar9 = puVar14[lVar10] & uVar17;
            if (uVar9 == 0) {
              iVar15 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar15 = uVar3 - 1;
              }
              iVar15 = iVar15 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar16 = iVar15;
              if (iVar15 < iVar22) {
                iVar16 = iVar22;
              }
              if (iVar22 < iVar15) {
                lVar11 = 0;
                do {
                  uVar9 = puVar14[lVar10 + lVar11 + 1];
                  if (uVar9 != 0) {
                    uVar20 = (ulonglong)(iVar22 + (int)lVar11 + 1);
                    uVar17 = 0xffffffff;
                    goto LAB_1415588b3;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar16 - lVar10 != lVar11);
                uVar17 = 0xffffffff;
                iVar22 = iVar16;
              }
              uVar20 = (ulonglong)(iVar22 + 1);
              uVar9 = uVar3;
            }
            else {
LAB_1415588b3:
              uVar24 = (ulonglong)(-uVar9 & uVar9);
              uVar1 = uVar24 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar9 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar9) {
                uVar9 = uVar3;
              }
            }
          } while (uVar9 != uVar2);
        }
LAB_1415586de:
        plVar23 = local_70;
        param_1 = local_78;
        plVar18 = local_88;
        if ((*(int *)(local_78 + 0x50) != 0) &&
           (puVar5 = (undefined8 *)*local_70, puVar5 != (undefined8 *)0x0)) {
          (**(code **)*puVar5)(puVar5,0);
          FUN_1446efa72(plVar23,0,0,0x10);
          *(undefined4 *)(param_1 + 0x50) = 0;
          plVar18 = local_88;
        }
      }
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,0);
        FUN_1446efa72((longlong *)(param_1 + 0x28),0,0,0x10);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x38);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,0);
        FUN_1446efa72((longlong *)(param_1 + 0x38),0,0,0x10);
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
    }
    lVar10 = FUN_1407ce818(plVar18);
    if (lVar10 != 0) {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_14480f766(lVar10 + 0x48);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    FUN_144256036(plVar18,0,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141558a58 FUN_141558a58 body=10280 status=ok
// SIG undefined FUN_141558a58(void)

void FUN_141558a58(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined2 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  uint *local_2b0;
  undefined1 *local_2a8;
  code *local_2a0;
  uint *local_290;
  longlong *local_288;
  undefined4 local_27c;
  longlong *local_278;
  uint *local_270;
  longlong local_268;
  longlong local_260;
  undefined1 local_258 [4];
  undefined8 local_254;
  undefined4 local_24c;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined2 local_1c7;
  undefined1 local_1c5;
  undefined4 local_1c4;
  undefined1 local_1bc [4];
  undefined8 local_1b8;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  uint local_1a4;
  undefined1 local_1a0;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined2 local_11f;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined1 local_114 [4];
  undefined8 local_110;
  uint local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_308;
  plVar24 = (longlong *)(param_1 + -0x30);
  lVar11 = FUN_1407ce6c2(plVar24);
  if (lVar11 != 0) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b9aba80;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    puVar16[2] = lVar14;
    *puVar16 = &PTR_FUN_14b9a90f0;
    puVar16[3] = 0;
    iVar18 = 0;
    if (plVar24 != (longlong *)0x0) {
      uVar9 = *(uint *)(param_1 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar18 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar22 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar22 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_1411a50ac;
    *(undefined4 *)(puVar16 + 5) = 0;
    plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
    if ((iStack_100 == 0) || (plVar25 == (longlong *)0x0)) {
LAB_14155ade0:
      if (iStack_100 == 0) goto LAB_141558c9c;
      if (plVar25 != (longlong *)0x0) {
        (**(code **)*plVar25)(plVar25,0);
        FUN_1446efa72(&local_108,0,0,0x10);
        goto LAB_141558c89;
      }
    }
    else {
      cVar7 = (**(code **)(*plVar25 + 0x30))();
      if (cVar7 == '\0') {
        plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
        goto LAB_14155ade0;
      }
      plVar25 = (longlong *)(lVar11 + 0x60);
      if (*(int *)(lVar11 + 0x74) < 1) {
        iVar18 = *(int *)(lVar11 + 0x68);
        iVar8 = *(int *)(lVar11 + 0x70) + -1;
        *(int *)(lVar11 + 0x70) = iVar8;
        if (iVar8 <= iVar18) {
          iVar8 = iVar18;
          if (0 < iVar18) {
            iVar19 = 0;
            do {
              if (((*(int *)(*plVar25 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar25 + (longlong)iVar19 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
                FUN_14005b288(plVar25,iVar19);
                FUN_14005b248(plVar25);
              }
              else {
                iVar19 = iVar19 + 1;
              }
              iVar8 = *(int *)(lVar11 + 0x68);
            } while (iVar19 < iVar8);
          }
          iVar19 = 2;
          if (2 < iVar8 * 2) {
            iVar19 = iVar8 * 2;
          }
          *(int *)(lVar11 + 0x70) = iVar19;
          if ((iVar19 < iVar18) && (*(int *)(lVar11 + 0x6c) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      if ((iStack_100 != 0) &&
         (plVar4 = (longlong *)CONCAT44(iStack_104,local_108), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_1b0);
      }
      iVar18 = *(int *)(lVar11 + 0x68);
      *(uint *)(lVar11 + 0x68) = iVar18 + 1U;
      if (*(uint *)(lVar11 + 0x6c) < iVar18 + 1U) {
        FUN_1447a71f6(plVar25,iVar18);
      }
      lVar22 = *plVar25;
      lVar14 = (longlong)iVar18 * 0x10;
      *(undefined8 *)(lVar22 + lVar14) = 0;
      *(undefined4 *)(lVar22 + 8 + lVar14) = 0;
      *(ulonglong *)(lVar22 + lVar14) = CONCAT44(iStack_104,local_108);
      local_108 = 0;
      iStack_104 = 0;
      *(int *)(lVar22 + 8 + lVar14) = iStack_100;
LAB_141558c89:
      iStack_100 = 0;
      plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
LAB_141558c9c:
      if (plVar25 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b9a91d0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    puVar16[2] = lVar14;
    *puVar16 = &PTR_FUN_14b9a9160;
    puVar16[3] = 0;
    iVar18 = 0;
    if (plVar24 != (longlong *)0x0) {
      uVar9 = *(uint *)(param_1 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar18 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar22 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar22 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_14125aff4;
    *(undefined4 *)(puVar16 + 5) = 0;
    plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
    if ((iStack_100 == 0) || (plVar25 == (longlong *)0x0)) {
LAB_14155ae42:
      if (iStack_100 != 0) {
        if (plVar25 == (longlong *)0x0) goto LAB_141558ecf;
        (**(code **)*plVar25)(plVar25,0);
        FUN_1446efa72(&local_108,0,0,0x10);
        goto LAB_141558eb3;
      }
    }
    else {
      cVar7 = (**(code **)(*plVar25 + 0x30))();
      if (cVar7 == '\0') {
        plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
        goto LAB_14155ae42;
      }
      plVar25 = (longlong *)(lVar11 + 0x360);
      if (*(int *)(lVar11 + 0x374) < 1) {
        iVar18 = *(int *)(lVar11 + 0x368);
        iVar8 = *(int *)(lVar11 + 0x370) + -1;
        *(int *)(lVar11 + 0x370) = iVar8;
        if (iVar8 <= iVar18) {
          iVar8 = iVar18;
          if (0 < iVar18) {
            iVar19 = 0;
            do {
              if (((*(int *)(*plVar25 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar25 + (longlong)iVar19 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
                FUN_14005b288(plVar25,iVar19);
                FUN_14005b248(plVar25);
              }
              else {
                iVar19 = iVar19 + 1;
              }
              iVar8 = *(int *)(lVar11 + 0x368);
            } while (iVar19 < iVar8);
          }
          iVar19 = 2;
          if (2 < iVar8 * 2) {
            iVar19 = iVar8 * 2;
          }
          *(int *)(lVar11 + 0x370) = iVar19;
          if ((iVar19 < iVar18) && (*(int *)(lVar11 + 0x36c) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      if ((iStack_100 != 0) &&
         (plVar4 = (longlong *)CONCAT44(iStack_104,local_108), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_1b0);
      }
      iVar18 = *(int *)(lVar11 + 0x368);
      *(uint *)(lVar11 + 0x368) = iVar18 + 1U;
      if (*(uint *)(lVar11 + 0x36c) < iVar18 + 1U) {
        FUN_1447a71f6(plVar25,iVar18);
      }
      lVar11 = *plVar25;
      lVar22 = (longlong)iVar18 * 0x10;
      *(undefined8 *)(lVar11 + lVar22) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar22) = 0;
      *(ulonglong *)(lVar11 + lVar22) = CONCAT44(iStack_104,local_108);
      local_108 = 0;
      iStack_104 = 0;
      *(int *)(lVar11 + 8 + lVar22) = iStack_100;
LAB_141558eb3:
      iStack_100 = 0;
      plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
    }
    if (plVar25 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141558ecf:
  local_108 = 0;
  iStack_104 = 0;
  iStack_100 = 0;
  FUN_1446efa72(&local_108,0,3,0x10);
  iStack_100 = 3;
  puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
  *puVar16 = &PTR_LAB_14b961ce0;
  LOCK();
  UNLOCK();
  lVar22 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar22 == 0) {
    LOCK();
    UNLOCK();
    lVar22 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  puVar16[2] = lVar22;
  *puVar16 = &PTR_FUN_14b9a9240;
  puVar16[3] = 0;
  iVar18 = 0;
  if (plVar24 != (longlong *)0x0) {
    uVar9 = *(uint *)(param_1 + -0x24);
    *(uint *)(puVar16 + 3) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar18 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar18 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar27 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar18;
      if (bVar27) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar18 = *(int *)(lVar11 + 0x10);
      bVar27 = iVar18 == 0;
      if (bVar27) {
        *(int *)(lVar11 + 0x10) = iVar8;
        iVar18 = 0;
      }
      UNLOCK();
      if (bVar27) {
        iVar18 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar16 + 0x1c) = iVar18;
  puVar16[4] = FUN_141566bd6;
  *(undefined4 *)(puVar16 + 5) = 0;
  plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
  if ((iStack_100 == 0) || (plVar25 == (longlong *)0x0)) {
LAB_14155ad77:
    if (iStack_100 == 0) goto LAB_1415590eb;
    if (plVar25 != (longlong *)0x0) {
      (**(code **)*plVar25)(plVar25,0);
      FUN_1446efa72(&local_108,0,0,0x10);
      goto LAB_1415590d8;
    }
  }
  else {
    cVar7 = (**(code **)(*plVar25 + 0x30))();
    uVar9 = DAT_14cbd0b80;
    if (cVar7 == '\0') {
      plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
      goto LAB_14155ad77;
    }
    if ((DAT_14cbd0b8c < 1) &&
       (DAT_14cbd0b88 = DAT_14cbd0b88 + -1, DAT_14cbd0b88 <= (int)DAT_14cbd0b80)) {
      if (0 < (int)DAT_14cbd0b80) {
        iVar18 = 0;
        do {
          if (((*(int *)(DAT_14cbd0b78 + 8 + (longlong)iVar18 * 0x10) == 0) ||
              (plVar25 = *(longlong **)(DAT_14cbd0b78 + (longlong)iVar18 * 0x10),
              plVar25 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar25 + 0x28))(), cVar7 != '\0')) {
            FUN_14005b288(&DAT_14cbd0b78,iVar18);
            FUN_14005b248(&DAT_14cbd0b78);
          }
          else {
            iVar18 = iVar18 + 1;
          }
        } while (iVar18 < (int)DAT_14cbd0b80);
      }
      DAT_14cbd0b88 = 2;
      if (2 < (int)(DAT_14cbd0b80 * 2)) {
        DAT_14cbd0b88 = DAT_14cbd0b80 * 2;
      }
      if ((DAT_14cbd0b88 < (int)uVar9) && (DAT_14cbd0b84 != DAT_14cbd0b80)) {
        FUN_14045812c();
      }
    }
    if ((iStack_100 != 0) &&
       (plVar25 = (longlong *)CONCAT44(iStack_104,local_108), plVar25 != (longlong *)0x0)) {
      (**(code **)(*plVar25 + 0x38))(plVar25,&local_1b0);
    }
    uVar9 = DAT_14cbd0b80;
    lVar11 = (longlong)(int)DAT_14cbd0b80;
    DAT_14cbd0b80 = DAT_14cbd0b80 + 1;
    if (DAT_14cbd0b84 < DAT_14cbd0b80) {
      FUN_1447a71f6(&DAT_14cbd0b78,uVar9);
    }
    lVar22 = DAT_14cbd0b78;
    lVar11 = lVar11 * 0x10;
    *(undefined8 *)(DAT_14cbd0b78 + lVar11) = 0;
    *(undefined4 *)(lVar22 + 8 + lVar11) = 0;
    *(ulonglong *)(lVar22 + lVar11) = CONCAT44(iStack_104,local_108);
    local_108 = 0;
    iStack_104 = 0;
    *(int *)(lVar22 + 8 + lVar11) = iStack_100;
LAB_1415590d8:
    iStack_100 = 0;
    plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
LAB_1415590eb:
    if (plVar25 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar11 = FUN_14026506e(param_1);
  if (lVar11 != 0) {
    if (DAT_14cba8288 == 0) {
      local_108 = 0x41864c34;
      iStack_104 = 1;
      local_2a0 = FUN_14081d0ea;
      local_2a8 = &LAB_1464cee30;
      local_2b8 = &LAB_148bfac22;
      local_2c0 = &LAB_140f21842;
      local_2c8 = &DAT_149e063b2;
      local_2d0 = 0;
      local_2d8 = 0x10000004;
      local_2e0 = 0x10;
      local_2e8 = 0x9cd0;
      local_2b0 = &local_108;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      FUN_14113fa0e(&local_68);
      local_108 = 0;
      iStack_104 = 0;
      iStack_100 = 0;
      iVar18 = iStack_100;
      uStack_fc = 0;
      uVar5 = uStack_fc;
      iStack_100 = (int)local_68;
      iVar8 = iStack_100;
      uStack_fc = (undefined4)((ulonglong)local_68 >> 0x20);
      uVar6 = uStack_fc;
      iStack_100 = iVar8;
      uStack_fc = uVar6;
      if (plVar24 != (longlong *)0x0) {
        local_108 = *(uint *)(param_1 + -0x24);
        if ((int)local_108 < DAT_14c9647dc) {
          lVar22 = (ulonglong)((local_108 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_108 >> 0x10) * 8);
        }
        else {
          lVar22 = 0;
        }
        iVar19 = *(int *)(lVar22 + 0x10);
        if (*(int *)(lVar22 + 0x10) == 0) {
          LOCK();
          iVar19 = DAT_14c964868 + 1;
          UNLOCK();
          iVar20 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar19;
          if (bVar27) {
            iStack_100 = iVar18;
            uStack_fc = uVar5;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar20);
          }
          LOCK();
          iVar19 = *(int *)(lVar22 + 0x10);
          bVar27 = iVar19 == 0;
          if (bVar27) {
            *(int *)(lVar22 + 0x10) = iVar20;
            iVar19 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar19 = iVar20;
          }
        }
        iStack_104 = iVar19;
        iStack_100 = iVar8;
        uStack_fc = uVar6;
        if ((((((local_68 != 0) && (iVar19 != 0)) && (-1 < (int)local_108)) &&
             (((int)local_108 < DAT_14c9647dc &&
              (plVar25 = (longlong *)
                         ((ulonglong)((local_108 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_108 >> 0x10) * 8)),
              plVar25 != (longlong *)0x0)))) && ((int)plVar25[2] == iVar19)) &&
           (((*(uint *)(plVar25 + 1) & 0x10200000) == 0 && (*plVar25 != 0)))) {
          FUN_1400796d0(*(undefined8 *)(*plVar25 + 0x10),local_68,1);
        }
      }
      FUN_14053c012(lVar11 + 0x71e8,&local_108);
      FUN_14113fa0e(&local_70);
      local_108 = 0;
      iStack_104 = 0;
      iStack_100 = 0;
      iVar18 = iStack_100;
      uStack_fc = 0;
      uVar5 = uStack_fc;
      iStack_100 = (int)local_70;
      iVar8 = iStack_100;
      uStack_fc = (undefined4)((ulonglong)local_70 >> 0x20);
      uVar6 = uStack_fc;
      iStack_100 = iVar8;
      uStack_fc = uVar6;
      if (plVar24 != (longlong *)0x0) {
        local_108 = *(uint *)(param_1 + -0x24);
        if ((int)local_108 < DAT_14c9647dc) {
          lVar22 = (ulonglong)((local_108 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_108 >> 0x10) * 8);
        }
        else {
          lVar22 = 0;
        }
        iVar19 = *(int *)(lVar22 + 0x10);
        if (*(int *)(lVar22 + 0x10) == 0) {
          LOCK();
          iVar19 = DAT_14c964868 + 1;
          UNLOCK();
          iVar20 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar19;
          if (bVar27) {
            iStack_100 = iVar18;
            uStack_fc = uVar5;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar20);
          }
          LOCK();
          iVar19 = *(int *)(lVar22 + 0x10);
          bVar27 = iVar19 == 0;
          if (bVar27) {
            *(int *)(lVar22 + 0x10) = iVar20;
            iVar19 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar19 = iVar20;
          }
        }
        iStack_104 = iVar19;
        iStack_100 = iVar8;
        uStack_fc = uVar6;
        if ((((local_70 != 0) && (iVar19 != 0)) && (-1 < (int)local_108)) &&
           ((((int)local_108 < DAT_14c9647dc &&
             (plVar25 = (longlong *)
                        ((ulonglong)((local_108 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_108 >> 0x10) * 8)),
             plVar25 != (longlong *)0x0)) &&
            (((int)plVar25[2] == iVar19 &&
             (((*(uint *)(plVar25 + 1) & 0x10200000) == 0 && (*plVar25 != 0)))))))) {
          FUN_1400796d0(*(undefined8 *)(*plVar25 + 0x10),local_70,1);
        }
      }
      FUN_14053c012(lVar11 + 0x7210,&local_108);
    }
  }
  lVar11 = FUN_1400d7050(param_1);
  local_27c = (undefined4)CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
  if (lVar11 == 0) {
LAB_141559359:
    lVar11 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_108 = 0x41030f22;
      iStack_104 = 1;
      local_2a0 = FUN_14081d0ea;
      local_2a8 = &LAB_1459f2e4c;
      local_2b8 = &LAB_148c39de3;
      local_2c0 = &LAB_1457a9eb2;
      local_2c8 = &DAT_149e063b2;
      local_2d0 = 0;
      local_2d8 = 0x10000004;
      local_2e0 = 0x10;
      local_2e8 = 0x3de0;
      local_2b0 = &local_108;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_141559359;
    lVar22 = FUN_140e06fb1(lVar11);
    if (lVar22 != 0) {
      local_108 = 0;
      iStack_104 = 0;
      iStack_100 = 0;
      FUN_1446efa72(&local_108,0,3,0x10);
      iStack_100 = 3;
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
      *puVar16 = &PTR_LAB_14b41e020;
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar15 == 0) {
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      puVar16[2] = lVar15;
      *puVar16 = &PTR_FUN_14b9a92d0;
      puVar16[3] = 0;
      iVar18 = 0;
      if (plVar24 != (longlong *)0x0) {
        uVar9 = *(uint *)(param_1 + -0x24);
        *(uint *)(puVar16 + 3) = uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar18 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar18 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar18;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar18 = *(int *)(lVar14 + 0x10);
          bVar27 = iVar18 == 0;
          if (bVar27) {
            *(int *)(lVar14 + 0x10) = iVar8;
            iVar18 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar18 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar16 + 0x1c) = iVar18;
      puVar16[4] = FUN_14127814c;
      *(undefined4 *)(puVar16 + 5) = 0;
      plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
      if ((iStack_100 == 0) || (plVar25 == (longlong *)0x0)) {
LAB_14155b017:
        if (iStack_100 != 0) {
          if (plVar25 == (longlong *)0x0) goto LAB_14155a6a2;
          (**(code **)*plVar25)(plVar25,0);
          FUN_1446efa72(&local_108,0,0,0x10);
          goto LAB_14155a686;
        }
      }
      else {
        cVar7 = (**(code **)(*plVar25 + 0x30))();
        if (cVar7 == '\0') {
          plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
          goto LAB_14155b017;
        }
        plVar25 = (longlong *)(lVar22 + 0x30);
        if (*(int *)(lVar22 + 0x44) < 1) {
          iVar18 = *(int *)(lVar22 + 0x38);
          iVar8 = *(int *)(lVar22 + 0x40) + -1;
          *(int *)(lVar22 + 0x40) = iVar8;
          if (iVar8 <= iVar18) {
            iVar8 = iVar18;
            if (0 < iVar18) {
              iVar19 = 0;
              do {
                if (((*(int *)(*plVar25 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                    (plVar4 = *(longlong **)(*plVar25 + (longlong)iVar19 * 0x10),
                    plVar4 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
                  FUN_14005b288(plVar25,iVar19);
                  FUN_14005b248(plVar25);
                }
                else {
                  iVar19 = iVar19 + 1;
                }
                iVar8 = *(int *)(lVar22 + 0x38);
              } while (iVar19 < iVar8);
            }
            iVar19 = 2;
            if (2 < iVar8 * 2) {
              iVar19 = iVar8 * 2;
            }
            *(int *)(lVar22 + 0x40) = iVar19;
            if ((iVar19 < iVar18) && (*(int *)(lVar22 + 0x3c) != iVar8)) {
              FUN_14045812c();
            }
          }
        }
        if ((iStack_100 != 0) &&
           (plVar4 = (longlong *)CONCAT44(iStack_104,local_108), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_1b0);
        }
        iVar18 = *(int *)(lVar22 + 0x38);
        *(uint *)(lVar22 + 0x38) = iVar18 + 1U;
        if (*(uint *)(lVar22 + 0x3c) < iVar18 + 1U) {
          FUN_1447a71f6(plVar25,iVar18);
        }
        lVar22 = *plVar25;
        lVar14 = (longlong)iVar18 * 0x10;
        *(undefined8 *)(lVar22 + lVar14) = 0;
        *(undefined4 *)(lVar22 + 8 + lVar14) = 0;
        *(ulonglong *)(lVar22 + lVar14) = CONCAT44(iStack_104,local_108);
        local_108 = 0;
        iStack_104 = 0;
        *(int *)(lVar22 + 8 + lVar14) = iStack_100;
LAB_14155a686:
        iStack_100 = 0;
        plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
      }
      if (plVar25 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14155a6a2:
    lVar22 = FUN_1402a1246(lVar11);
    if (lVar22 != 0) {
      local_108 = 0;
      iStack_104 = 0;
      iStack_100 = 0;
      FUN_1446efa72(&local_108,0,3,0x10);
      iStack_100 = 3;
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
      *puVar16 = &PTR_LAB_14b9a93b0;
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar15 == 0) {
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      puVar16[2] = lVar15;
      *puVar16 = &PTR_FUN_14b9a9340;
      puVar16[3] = 0;
      iVar18 = 0;
      if (plVar24 != (longlong *)0x0) {
        uVar9 = *(uint *)(param_1 + -0x24);
        *(uint *)(puVar16 + 3) = uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar18 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar18 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar18;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar18 = *(int *)(lVar14 + 0x10);
          bVar27 = iVar18 == 0;
          if (bVar27) {
            *(int *)(lVar14 + 0x10) = iVar8;
            iVar18 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar18 = iVar8;
          }
        }
      }
      *(int *)((longlong)puVar16 + 0x1c) = iVar18;
      puVar16[4] = FUN_141502922;
      *(undefined4 *)(puVar16 + 5) = 0;
      plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
      if ((iStack_100 == 0) || (plVar25 == (longlong *)0x0)) {
LAB_14155b079:
        if (iStack_100 != 0) {
          if (plVar25 == (longlong *)0x0) goto LAB_14155a8ee;
          (**(code **)*plVar25)(plVar25,0);
          FUN_1446efa72(&local_108,0,0,0x10);
          goto LAB_14155a8d2;
        }
      }
      else {
        cVar7 = (**(code **)(*plVar25 + 0x30))();
        if (cVar7 == '\0') {
          plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
          goto LAB_14155b079;
        }
        plVar25 = (longlong *)(lVar22 + 0xdd0);
        if (*(int *)(lVar22 + 0xde4) < 1) {
          iVar18 = *(int *)(lVar22 + 0xdd8);
          iVar8 = *(int *)(lVar22 + 0xde0) + -1;
          *(int *)(lVar22 + 0xde0) = iVar8;
          if (iVar8 <= iVar18) {
            iVar8 = iVar18;
            if (0 < iVar18) {
              iVar19 = 0;
              do {
                if (((*(int *)(*plVar25 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                    (plVar4 = *(longlong **)(*plVar25 + (longlong)iVar19 * 0x10),
                    plVar4 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
                  FUN_14005b288(plVar25,iVar19);
                  FUN_14005b248(plVar25);
                }
                else {
                  iVar19 = iVar19 + 1;
                }
                iVar8 = *(int *)(lVar22 + 0xdd8);
              } while (iVar19 < iVar8);
            }
            iVar19 = 2;
            if (2 < iVar8 * 2) {
              iVar19 = iVar8 * 2;
            }
            *(int *)(lVar22 + 0xde0) = iVar19;
            if ((iVar19 < iVar18) && (*(int *)(lVar22 + 0xddc) != iVar8)) {
              FUN_14045812c();
            }
          }
        }
        if ((iStack_100 != 0) &&
           (plVar4 = (longlong *)CONCAT44(iStack_104,local_108), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x38))(plVar4,&local_1b0);
        }
        iVar18 = *(int *)(lVar22 + 0xdd8);
        *(uint *)(lVar22 + 0xdd8) = iVar18 + 1U;
        if (*(uint *)(lVar22 + 0xddc) < iVar18 + 1U) {
          FUN_1447a71f6(plVar25,iVar18);
        }
        lVar22 = *plVar25;
        lVar14 = (longlong)iVar18 * 0x10;
        *(undefined8 *)(lVar22 + lVar14) = 0;
        *(undefined4 *)(lVar22 + 8 + lVar14) = 0;
        *(ulonglong *)(lVar22 + lVar14) = CONCAT44(iStack_104,local_108);
        local_108 = 0;
        iStack_104 = 0;
        *(int *)(lVar22 + 8 + lVar14) = iStack_100;
LAB_14155a8d2:
        iStack_100 = 0;
        plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
      }
      if (plVar25 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14155a8ee:
    local_27c = 0;
  }
  local_260 = lVar11;
  lVar11 = FUN_140495e96(param_1);
  if ((lVar11 != 0) && (lVar11 = FUN_1403ca91c(lVar11), lVar11 != 0)) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    puVar16[2] = lVar14;
    *puVar16 = &PTR_FUN_14b9a9420;
    puVar16[3] = 0;
    iVar18 = 0;
    if (plVar24 != (longlong *)0x0) {
      uVar9 = *(uint *)(param_1 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar18 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar22 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar22 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_141558132;
    *(undefined4 *)(puVar16 + 5) = 0;
    FUN_1448b6402(lVar11 + 0x78,&local_1b0,&local_108);
    if (iStack_100 != 0) {
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
      if (puVar16 == (undefined8 *)0x0) goto LAB_1415594bb;
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(&local_108,0,0,0x10);
      iStack_100 = 0;
    }
    if (CONCAT44(iStack_104,local_108) != 0) {
      FUN_1400020a8();
    }
  }
LAB_1415594bb:
  local_268 = (**(code **)(*plVar24 + 0x180))(plVar24);
  if (local_268 == 0) goto LAB_14155a30f;
  local_278 = plVar24;
  puVar12 = (uint *)FUN_1402735c8();
  plVar24 = (longlong *)(param_1 + 0x18);
  local_290 = puVar12;
  if (((*(int *)(param_1 + 0x20) == 0) || ((longlong *)*plVar24 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)*plVar24 + 0x30))(), cVar7 == '\0')) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar22 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar22 == 0) {
      LOCK();
      UNLOCK();
      lVar22 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    puVar16[2] = lVar22;
    *puVar16 = &PTR_FUN_14b9a9490;
    puVar16[3] = 0;
    iVar18 = 0;
    if (local_278 != (longlong *)0x0) {
      uVar9 = *(uint *)(param_1 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar18 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar11 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar11 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    iVar8 = iStack_100;
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_144256638;
    *(undefined4 *)(puVar16 + 5) = 0;
    uVar13 = CONCAT44(iStack_104,local_108);
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
LAB_141559610:
      if (*plVar24 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar16 = (undefined8 *)*plVar24;
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)*puVar16)(puVar16,0);
        FUN_1446efa72(plVar24,0,0,0x10);
        *(undefined4 *)(param_1 + 0x20) = 0;
        goto LAB_141559610;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = uVar13;
    *(int *)(param_1 + 0x20) = iVar8;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    if (iStack_100 != 0) {
      if (puVar16 == (undefined8 *)0x0) goto LAB_141559676;
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(&local_108,0,0,0x10);
      iStack_100 = 0;
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141559676:
  *(undefined4 *)(param_1 + 0x60) = 1;
  local_288 = (longlong *)param_1;
  local_270 = puVar12;
  if ((longlong)(int)local_290[0x1de] != 0) {
    lVar11 = *(longlong *)(local_290 + 0x1dc);
    lVar22 = (longlong)(int)local_290[0x1de] * 0x38;
    do {
      local_108 = local_108 & 0xffffff00;
      iStack_104 = 0;
      iStack_100 = 0;
      uStack_fc = 0;
      local_f8 = 0;
      local_e4 = 0;
      local_f4 = 0;
      uStack_ec = 0;
      local_d8 = 0xc69c4000;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_77 = 1;
      local_75 = 0;
      local_74 = 0;
      FUN_1401aa3da((longlong)&uStack_ec + 4,plVar24);
      cVar7 = FUN_140114204(lVar11);
      if (cVar7 != '\0') {
        lVar14 = FUN_140149a73(local_268,0);
        if (lVar14 == 0) {
          local_74 = 2;
        }
        else {
          FUN_140983ba6(lVar11,lVar14,&local_108);
        }
        local_1b0 = local_1b0 & 0xffffff00;
        uStack_1ac = 0;
        uStack_1a8 = 0;
        local_1a4 = 0;
        lVar14 = FUN_140149a73(local_268,0);
        if (lVar14 != 0) {
          FUN_14039fc7b(lVar11,&local_1b0,lVar14,0);
        }
        if ((local_1b0 & 0xff) == 3) {
          bVar27 = CONCAT44(uStack_1a8,uStack_1ac) == 0;
LAB_141559808:
          uVar9 = (uint)!bVar27;
        }
        else {
          uVar9 = local_1a4;
          if ((local_1b0 & 0xff) != 2) {
            if ((char)local_1b0 != '\x01') goto LAB_141559823;
            bVar27 = local_1a4 == 0;
            goto LAB_141559808;
          }
        }
        if (0 < (int)uVar9) {
          *(int *)((longlong)local_288 + 0x60) = *(int *)((longlong)local_288 + 0x60) + 1;
        }
      }
LAB_141559823:
      FUN_1409838b8(&local_108);
      lVar11 = lVar11 + 0x38;
      lVar22 = lVar22 + -0x38;
    } while (lVar22 != 0);
  }
  lVar11 = FUN_1407ce818(local_278);
  plVar24 = local_288;
  if (lVar11 != 0) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b9ab690;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    puVar16[2] = lVar14;
    *puVar16 = &PTR_FUN_14b9a9500;
    puVar16[3] = 0;
    iVar18 = 0;
    if (local_278 != (longlong *)0x0) {
      uVar9 = *(uint *)((longlong)plVar24 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      iVar18 = *(int *)(lVar22 + 0x10);
      if (*(int *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar22 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar22 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_145e2a440;
    *(undefined4 *)(puVar16 + 5) = 0;
    plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
    if ((iStack_100 == 0) || (plVar25 == (longlong *)0x0)) {
LAB_14155afa1:
      if (iStack_100 == 0) {
        uVar13 = 0;
        goto LAB_141559c1a;
      }
      if (plVar25 != (longlong *)0x0) {
        uVar13 = 0;
        (**(code **)*plVar25)(plVar25,0);
        FUN_1446efa72(&local_108,0,0,0x10);
        goto LAB_141559c07;
      }
      uVar13 = 0;
      plVar24 = local_288;
    }
    else {
      cVar7 = (**(code **)(*plVar25 + 0x30))();
      if (cVar7 == '\0') {
        plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
        goto LAB_14155afa1;
      }
      plVar24 = (longlong *)(lVar11 + 0x48);
      if (*(int *)(lVar11 + 0x5c) < 1) {
        iVar18 = *(int *)(lVar11 + 0x50);
        iVar8 = *(int *)(lVar11 + 0x58) + -1;
        *(int *)(lVar11 + 0x58) = iVar8;
        if (iVar8 <= iVar18) {
          iVar8 = iVar18;
          if (0 < iVar18) {
            iVar19 = 0;
            do {
              if (((*(int *)(*plVar24 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                  (plVar25 = *(longlong **)(*plVar24 + (longlong)iVar19 * 0x10),
                  plVar25 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar25 + 0x28))(), cVar7 != '\0')) {
                FUN_14005b288(plVar24,iVar19);
                FUN_14005b248(plVar24);
              }
              else {
                iVar19 = iVar19 + 1;
              }
              iVar8 = *(int *)(lVar11 + 0x50);
            } while (iVar19 < iVar8);
          }
          iVar19 = 2;
          if (2 < iVar8 * 2) {
            iVar19 = iVar8 * 2;
          }
          *(int *)(lVar11 + 0x58) = iVar19;
          if ((iVar19 < iVar18) && (*(int *)(lVar11 + 0x54) != iVar8)) {
            FUN_14045812c();
          }
        }
      }
      uVar13 = 0;
      if ((iStack_100 != 0) &&
         (plVar25 = (longlong *)CONCAT44(iStack_104,local_108), plVar25 != (longlong *)0x0)) {
        (**(code **)(*plVar25 + 0x38))(plVar25,&local_1b0);
        uVar13 = CONCAT44(uStack_1ac,local_1b0);
      }
      iVar18 = *(int *)(lVar11 + 0x50);
      *(uint *)(lVar11 + 0x50) = iVar18 + 1U;
      if (*(uint *)(lVar11 + 0x54) < iVar18 + 1U) {
        FUN_1447a71f6(plVar24,iVar18);
      }
      lVar11 = *plVar24;
      lVar22 = (longlong)iVar18 * 0x10;
      *(undefined8 *)(lVar11 + lVar22) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar22) = 0;
      *(ulonglong *)(lVar11 + lVar22) = CONCAT44(iStack_104,local_108);
      local_108 = 0;
      iStack_104 = 0;
      *(int *)(lVar11 + 8 + lVar22) = iStack_100;
LAB_141559c07:
      iStack_100 = 0;
      plVar25 = (longlong *)CONCAT44(iStack_104,local_108);
LAB_141559c1a:
      plVar24 = local_288;
      if (plVar25 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)((longlong)plVar24 + 0x58) = uVar13;
  }
  plVar4 = local_278;
  plVar25 = (longlong *)((longlong)plVar24 + 0x28);
  if (((*(int *)((longlong)plVar24 + 0x30) == 0) || ((longlong *)*plVar25 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)*plVar25 + 0x30))(), cVar7 == '\0')) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar22 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar22 == 0) {
      LOCK();
      UNLOCK();
      lVar22 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    puVar16[2] = lVar22;
    *puVar16 = &PTR_FUN_14b9a9490;
    puVar16[3] = 0;
    iVar18 = 0;
    if (plVar4 != (longlong *)0x0) {
      uVar9 = *(uint *)((longlong)plVar24 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar18 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar11 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar11 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    iVar8 = iStack_100;
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_1442567a6;
    *(undefined4 *)(puVar16 + 5) = 0;
    uVar13 = CONCAT44(iStack_104,local_108);
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    if (*(int *)((longlong)plVar24 + 0x30) == 0) {
LAB_141559d49:
      if (*plVar25 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar16 = (undefined8 *)*plVar25;
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)*puVar16)(puVar16,0);
        FUN_1446efa72(plVar25,0,0,0x10);
        *(undefined4 *)((longlong)plVar24 + 0x30) = 0;
        goto LAB_141559d49;
      }
    }
    *(undefined8 *)((longlong)plVar24 + 0x28) = uVar13;
    *(int *)((longlong)plVar24 + 0x30) = iVar8;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    if (iStack_100 != 0) {
      if (puVar16 == (undefined8 *)0x0) goto LAB_141559daa;
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(&local_108,0,0,0x10);
      iStack_100 = 0;
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141559daa:
  plVar1 = (longlong *)((longlong)plVar24 + 0x38);
  if (((*(int *)((longlong)plVar24 + 0x40) == 0) || ((longlong *)*plVar1 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)*plVar1 + 0x30))(), cVar7 == '\0')) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar22 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar22 == 0) {
      LOCK();
      UNLOCK();
      lVar22 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    puVar16[2] = lVar22;
    *puVar16 = &PTR_FUN_14b9a9490;
    puVar16[3] = 0;
    iVar18 = 0;
    if (plVar4 != (longlong *)0x0) {
      uVar9 = *(uint *)((longlong)plVar24 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar18 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar11 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar11 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    iVar8 = iStack_100;
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_14425698e;
    *(undefined4 *)(puVar16 + 5) = 0;
    uVar13 = CONCAT44(iStack_104,local_108);
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    if (*(int *)((longlong)plVar24 + 0x40) == 0) {
LAB_141559ebc:
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar16 = (undefined8 *)*plVar1;
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)*puVar16)(puVar16,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)((longlong)plVar24 + 0x40) = 0;
        goto LAB_141559ebc;
      }
    }
    *(undefined8 *)((longlong)plVar24 + 0x38) = uVar13;
    *(int *)((longlong)plVar24 + 0x40) = iVar8;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    if (iStack_100 != 0) {
      if (puVar16 == (undefined8 *)0x0) goto LAB_141559f1d;
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(&local_108,0,0,0x10);
      iStack_100 = 0;
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141559f1d:
  local_288 = (longlong *)((longlong)plVar24 + 0x48);
  if (((*(int *)((longlong)plVar24 + 0x50) == 0) || ((longlong *)*local_288 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)*local_288 + 0x30))(), cVar7 == '\0')) {
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    FUN_1446efa72(&local_108,0,3,0x10);
    iStack_100 = 3;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    *puVar16 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar22 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar22 == 0) {
      LOCK();
      UNLOCK();
      lVar22 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    puVar16[2] = lVar22;
    *puVar16 = &PTR_FUN_14b9a9490;
    puVar16[3] = 0;
    iVar18 = 0;
    if (plVar4 != (longlong *)0x0) {
      uVar9 = *(uint *)((longlong)plVar24 + -0x24);
      *(uint *)(puVar16 + 3) = uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar18 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar27 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar27) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar18 = *(int *)(lVar11 + 0x10);
        bVar27 = iVar18 == 0;
        if (bVar27) {
          *(int *)(lVar11 + 0x10) = iVar8;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar27) {
          iVar18 = iVar8;
        }
      }
    }
    iVar8 = iStack_100;
    *(int *)((longlong)puVar16 + 0x1c) = iVar18;
    puVar16[4] = FUN_144257008;
    *(undefined4 *)(puVar16 + 5) = 0;
    uVar13 = CONCAT44(iStack_104,local_108);
    local_108 = 0;
    iStack_104 = 0;
    iStack_100 = 0;
    if (*(int *)((longlong)plVar24 + 0x50) == 0) {
LAB_14155a040:
      if (*local_288 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar16 = (undefined8 *)*local_288;
      if (puVar16 != (undefined8 *)0x0) {
        (**(code **)*puVar16)(puVar16,0);
        FUN_1446efa72(local_288,0,0,0x10);
        *(undefined4 *)((longlong)plVar24 + 0x50) = 0;
        goto LAB_14155a040;
      }
    }
    *(undefined8 *)((longlong)plVar24 + 0x48) = uVar13;
    *(int *)((longlong)plVar24 + 0x50) = iVar8;
    puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    if (iStack_100 != 0) {
      if (puVar16 == (undefined8 *)0x0) goto LAB_14155a0a8;
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(&local_108,0,0,0x10);
      iStack_100 = 0;
      puVar16 = (undefined8 *)CONCAT44(iStack_104,local_108);
    }
    if (puVar16 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14155a0a8:
  if ((char)local_27c == '\0') {
    uVar13 = FUN_1447210f0(local_260);
    lVar11 = FUN_140149a73(uVar13,0);
    if ((lVar11 != 0) && (plVar24 = (longlong *)FUN_1403a0144(lVar11), plVar24 != (longlong *)0x0))
    {
      uVar23 = 0;
      local_108 = local_108 & 0xffffff00;
      iStack_104 = 0;
      iStack_100 = 0;
      uStack_fc = 0;
      local_f8 = 0;
      local_f4 = 0;
      uStack_ec = 0;
      local_e4 = 0;
      local_d8 = 0xc69c4000;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_77 = 1;
      local_75 = 0;
      local_74 = 0;
      FUN_1401aa3da((longlong)&uStack_ec + 4,plVar25);
      local_110 = 0;
      puVar17 = &DAT_149dfb77a;
      if (DAT_14cbd5f20 != 0) {
        puVar17 = DAT_14cbd5f18;
      }
      FUN_1405f0d29(local_114,puVar17,0);
      (**(code **)(*plVar24 + 0x10))(plVar24,&local_1b0,local_114,&local_108);
      local_1b0 = local_1b0 & 0xffffff00;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = 0;
      local_19c = 0;
      uStack_194 = 0;
      local_18c = 0;
      local_180 = 0xc69c4000;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_11f = 1;
      local_11d = 0;
      local_11c = 0;
      FUN_1401aa3da((longlong)&uStack_194 + 4,plVar1);
      local_1b8 = 0;
      puVar17 = &DAT_149dfb77a;
      if (DAT_14cbd5f30 != 0) {
        puVar17 = DAT_14cbd5f28;
      }
      FUN_1405f0d29(local_1bc,puVar17,0);
      (**(code **)(*plVar24 + 0x10))(plVar24,local_258,local_1bc,&local_1b0);
      local_270 = local_270 + 0x332;
      uVar9 = local_290[0x338];
      if (uVar9 == 0) {
        uVar21 = 1;
        iVar18 = 0;
        uVar10 = 0;
      }
      else {
        puVar12 = *(uint **)(local_290 + 0x336);
        if (*(uint **)(local_290 + 0x336) == (uint *)0x0) {
          puVar12 = local_270;
        }
        uVar10 = *puVar12;
        if (uVar10 == 0) {
          iVar18 = uVar9 + 0x1e;
          if (-1 < (int)(uVar9 - 1)) {
            iVar18 = uVar9 - 1;
          }
          uVar23 = 0;
          uVar21 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar21 = uVar23;
          }
          iVar18 = 0;
          do {
            if (uVar21 == uVar23) goto LAB_14155a2f5;
            iVar18 = iVar18 + 0x20;
            uVar10 = puVar12[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar23 = 0;
          iVar18 = 0;
        }
        uVar21 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar21 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar10 = (iVar18 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)uVar9 <= (int)uVar10) {
          uVar10 = uVar9;
        }
      }
      if (uVar10 != uVar9) {
        uVar26 = 0xffffffff;
        do {
          lVar11 = (longlong)(int)uVar10 * 0x58 + *(longlong *)(local_290 + 0x32e);
          cVar7 = FUN_140114204(lVar11);
          if (cVar7 != '\0') {
            local_258[0] = 0;
            local_254 = 0;
            local_24c = 0;
            local_248 = 0;
            local_234 = 0;
            local_244 = 0;
            uStack_23c = 0;
            local_228 = 0xc69c4000;
            local_1d8 = 0;
            local_1d0 = 0;
            local_1c8 = 0;
            local_1e0 = 0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_210 = 0;
            uStack_208 = 0;
            local_220 = 0;
            uStack_218 = 0;
            local_1c7 = 1;
            local_1c5 = 0;
            local_1c4 = 0;
            FUN_1401aa3da((longlong)&uStack_23c + 4,local_288);
            lVar22 = FUN_140149a73(local_268,0);
            if (lVar22 == 0) {
              local_1c4 = 2;
            }
            else {
              FUN_140983ba6(lVar11,lVar22,local_258);
            }
            FUN_1409838b8(local_258);
          }
          uVar26 = uVar26 & ~(uint)uVar21;
          puVar12 = *(uint **)(local_290 + 0x336);
          if (*(uint **)(local_290 + 0x336) == (uint *)0x0) {
            puVar12 = local_270;
          }
          uVar3 = local_290[0x338];
          iVar8 = (int)uVar23;
          lVar11 = (longlong)iVar8;
          uVar10 = puVar12[lVar11] & uVar26;
          if (uVar10 == 0) {
            iVar19 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar19 = uVar3 - 1;
            }
            iVar19 = iVar19 >> 5;
            iVar18 = iVar18 + 0x20;
            iVar20 = iVar19;
            if (iVar19 < iVar8) {
              iVar20 = iVar8;
            }
            if (iVar8 < iVar19) {
              lVar22 = 0;
              do {
                uVar10 = puVar12[lVar11 + lVar22 + 1];
                if (uVar10 != 0) {
                  uVar23 = (ulonglong)(iVar8 + (int)lVar22 + 1);
                  uVar26 = 0xffffffff;
                  goto LAB_14155a4d7;
                }
                iVar18 = iVar18 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar20 - lVar11 != lVar22);
              uVar26 = 0xffffffff;
              iVar8 = iVar20;
            }
            uVar23 = (ulonglong)(iVar8 + 1);
            uVar10 = uVar3;
          }
          else {
LAB_14155a4d7:
            uVar21 = (ulonglong)(-uVar10 & uVar10);
            uVar2 = uVar21 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar10 = (iVar18 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar10) {
              uVar10 = uVar3;
            }
          }
        } while (uVar10 != uVar9);
      }
LAB_14155a2f5:
      FUN_1409838b8(&local_1b0);
      FUN_1409838b8(&local_108);
    }
  }
LAB_14155a30f:
  if ((local_60 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14155b282 FUN_14155b282 body=386 status=ok
// SIG undefined FUN_14155b282(void)

void FUN_14155b282(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  longlong *plVar3;
  wchar_t *_Str;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = param_1 + 3;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_14155b390;
    }
  }
  local_60 = (undefined1 *)0x0;
  local_f0 = plVar3;
  local_e8 = param_2;
  sVar1 = wcslen(_Str);
  local_50 = FUN_14475aa65(0,_Str,sVar1 & 0xffffffff);
  uVar2 = local_50 + 1;
  local_58 = (undefined1 *)0x0;
  if (0x80 < uVar2) {
    FUN_1446efa72(&local_60,0,uVar2,1);
    local_58 = local_60;
  }
  if (local_58 == (undefined1 *)0x0) {
    local_58 = local_e0;
  }
  FUN_14475a98a(local_58,uVar2,_Str,(int)sVar1 + 1);
  param_2 = local_e8;
  plVar3 = local_f0;
LAB_14155b390:
  local_108 = param_1 + 5;
  local_100 = param_1 + 7;
  FUN_148e98750(param_2,local_58,param_1 + 2,plVar3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14155b406 FUN_14155b406 body=57 status=ok
// SIG undefined FUN_14155b406(void)

void FUN_14155b406(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64e98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64e98 = FUN_140002ddd(FUN_146506fac,uVar1,L"GbxSkillConditionDef");
  }
  return;
}



// FUNCTION 14155b440 FUN_14155b440 body=262 status=ok
// SIG undefined FUN_14155b440(void)

longlong FUN_14155b440(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cb63988 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1486f5f94;
      local_40 = &LAB_14106aa88;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x250;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill",&DAT_14cb63988,FUN_1464fe9ca);
    }
    if ((*(int *)(DAT_14cb63988 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63988 + 0x38) * 8) == DAT_14cb63988 + 0x30)) goto LAB_14155b48d;
  }
  lVar1 = 0;
LAB_14155b48d:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155b548 FUN_14155b548 body=226 status=ok
// SIG undefined FUN_14155b548(void)

longlong * FUN_14155b548(longlong *param_1)

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
  pcVar13 = FUN_146462f14;
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



// FUNCTION 14155b62c FUN_14155b62c body=337 status=ok
// SIG undefined FUN_14155b62c(void)

void FUN_14155b62c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      local_4c = 0xff;
      local_50 = 0;
      local_58 = 0;
      FUN_14488cef8(uVar3,&local_68,lVar2,0);
      if ((((plStack_60 != (longlong *)0x0) && (local_68._4_4_ != 0)) && (-1 < (int)(uint)local_68))
         && ((int)(uint)local_68 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_68._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_60 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_68);
          if (cVar1 != '\0') {
            uVar3 = FUN_14008e0ae(&local_68);
            FUN_14654e92a(uVar3,param_3,param_4);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155b77e FUN_14155b77e body=281 status=ok
// SIG undefined FUN_14155b77e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155b77e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca70118) {
    FUN_144b3d300(&DAT_14ca70118);
    if (DAT_14ca70118 == -1) {
      FUN_145de3034();
      FUN_140db5666(&DAT_14ca70070,0,&DAT_14ca70008,L"TPageTableUpdateVS<false>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdateVS",0,1,FUN_147341012,
                    FUN_147340fea,&LAB_147340fe6,&LAB_147340fe2,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca70070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431225bf);
      _Init_thread_footer(&DAT_14ca70118);
    }
  }
  return &DAT_14ca70070;
}



// FUNCTION 14155b898 FUN_14155b898 body=88 status=ok
// SIG undefined FUN_14155b898(void)

void FUN_14155b898(longlong param_1)

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



// FUNCTION 14155b8f0 FUN_14155b8f0 body=164 status=ok
// SIG undefined FUN_14155b8f0(void)

void FUN_14155b8f0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb408,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155b996 FUN_14155b996 body=164 status=ok
// SIG undefined FUN_14155b996(void)

void FUN_14155b996(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Shading";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Shading";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebd78,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ba3c FUN_14155ba3c body=164 status=ok
// SIG undefined FUN_14155ba3c(void)

void FUN_14155ba3c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaf48,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bae2 FUN_14155bae2 body=164 status=ok
// SIG undefined FUN_14155bae2(void)

void FUN_14155bae2(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaf60,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bb88 FUN_14155bb88 body=164 status=ok
// SIG undefined FUN_14155bb88(void)

void FUN_14155bb88(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaf18,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bc2e FUN_14155bc2e body=164 status=ok
// SIG undefined FUN_14155bc2e(void)

void FUN_14155bc2e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaf30,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bcd4 FUN_14155bcd4 body=164 status=ok
// SIG undefined FUN_14155bcd4(void)

void FUN_14155bcd4(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaf78,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bd7a FUN_14155bd7a body=164 status=ok
// SIG undefined FUN_14155bd7a(void)

void FUN_14155bd7a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaf90,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155be20 FUN_14155be20 body=164 status=ok
// SIG undefined FUN_14155be20(void)

void FUN_14155be20(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebb50,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bec6 FUN_14155bec6 body=164 status=ok
// SIG undefined FUN_14155bec6(void)

void FUN_14155bec6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb0e8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155bf6c FUN_14155bf6c body=164 status=ok
// SIG undefined FUN_14155bf6c(void)

void FUN_14155bf6c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"VectorOps";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"VectorOps";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeb4f0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c012 FUN_14155c012 body=164 status=ok
// SIG undefined FUN_14155c012(void)

void FUN_14155c012(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb360,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c0b8 FUN_14155c0b8 body=164 status=ok
// SIG undefined FUN_14155c0b8(void)

void FUN_14155c0b8(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb378,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c15e FUN_14155c15e body=164 status=ok
// SIG undefined FUN_14155c15e(void)

void FUN_14155c15e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb0b8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c204 FUN_14155c204 body=164 status=ok
// SIG undefined FUN_14155c204(void)

void FUN_14155c204(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb0d0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c2aa FUN_14155c2aa body=164 status=ok
// SIG undefined FUN_14155c2aa(void)

void FUN_14155c2aa(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb178,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c350 FUN_14155c350 body=164 status=ok
// SIG undefined FUN_14155c350(void)

void FUN_14155c350(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb330,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c3f6 FUN_14155c3f6 body=164 status=ok
// SIG undefined FUN_14155c3f6(void)

void FUN_14155c3f6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb318,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c49c FUN_14155c49c body=164 status=ok
// SIG undefined FUN_14155c49c(void)

void FUN_14155c49c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb390,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c542 FUN_14155c542 body=164 status=ok
// SIG undefined FUN_14155c542(void)

void FUN_14155c542(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb3c0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c5e8 FUN_14155c5e8 body=164 status=ok
// SIG undefined FUN_14155c5e8(void)

void FUN_14155c5e8(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb3a8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c68e FUN_14155c68e body=164 status=ok
// SIG undefined FUN_14155c68e(void)

void FUN_14155c68e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"NeuralNetwork";
  local_38 = 0xd;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"NeuralNetwork";
  local_38 = 0xd;
  FUN_140208c1e(&DAT_14caebee8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c734 FUN_14155c734 body=164 status=ok
// SIG undefined FUN_14155c734(void)

void FUN_14155c734(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb3f0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c7da FUN_14155c7da body=164 status=ok
// SIG undefined FUN_14155c7da(void)

void FUN_14155c7da(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Vectors";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Vectors";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeae88,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c880 FUN_14155c880 body=164 status=ok
// SIG undefined FUN_14155c880(void)

void FUN_14155c880(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeba78,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c926 FUN_14155c926 body=164 status=ok
// SIG undefined FUN_14155c926(void)

void FUN_14155c926(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb348,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155c9cc FUN_14155c9cc body=164 status=ok
// SIG undefined FUN_14155c9cc(void)

void FUN_14155c9cc(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb100,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ca72 FUN_14155ca72 body=164 status=ok
// SIG undefined FUN_14155ca72(void)

void FUN_14155ca72(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caead40,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155cb18 FUN_14155cb18 body=164 status=ok
// SIG undefined FUN_14155cb18(void)

void FUN_14155cb18(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb130,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155cbbe FUN_14155cbbe body=164 status=ok
// SIG undefined FUN_14155cbbe(void)

void FUN_14155cbbe(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Sky";
  local_38 = 3;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Sky";
  local_38 = 3;
  FUN_140208c1e(&DAT_14caebca0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155cc64 FUN_14155cc64 body=164 status=ok
// SIG undefined FUN_14155cc64(void)

void FUN_14155cc64(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb2e8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155cd0a FUN_14155cd0a body=164 status=ok
// SIG undefined FUN_14155cd0a(void)

void FUN_14155cd0a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb118,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155cdb0 FUN_14155cdb0 body=164 status=ok
// SIG undefined FUN_14155cdb0(void)

void FUN_14155cdb0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Volume";
  local_38 = 6;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Volume";
  local_38 = 6;
  FUN_140208c1e(&DAT_14caebd30,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ce56 FUN_14155ce56 body=246 status=ok
// SIG undefined FUN_14155ce56(void)

void FUN_14155ce56(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x150);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x48));
  *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  iVar4 = *(int *)(lVar3 + 0x34);
  FUN_1459829d4(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30));
  *(undefined4 *)(lVar3 + 0x30) = 0;
  if ((iVar4 < 0) && (*(int *)(lVar3 + 0x34) != 0)) {
    FUN_148e43a9c(lVar3 + 0x28);
  }
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
  *(undefined4 *)(lVar3 + 8) = 0;
  if (*(int *)(lVar3 + 0xc) != 0) {
    FUN_1402191ca(lVar3,0);
  }
  *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  if (DAT_14caa8578 == *(longlong *)(lVar3 + 0x18)) {
    if (*(int *)(lVar3 + 0x20) != 0) goto LAB_14155cf1a;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x20) + 1;
  }
  *(longlong *)(lVar3 + 0x18) = DAT_14caa8578;
  *(int *)(lVar3 + 0x20) = iVar4;
LAB_14155cf1a:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x48));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155cf4e FUN_14155cf4e body=246 status=ok
// SIG undefined FUN_14155cf4e(void)

void FUN_14155cf4e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764910);
  (**(code **)(*(longlong *)*puVar5 + 0x118))((longlong *)*puVar5,&local_38,*param_2);
  puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
  (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,&local_40);
  if (local_38.QuadPart != local_40) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x588);
    QueryPerformanceCounter(&local_38);
    puVar5[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
    puVar5[2] = uVar1;
    *puVar5 = &PTR_FUN_14ba43b20;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
    *(undefined4 *)(puVar5 + 4) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
    puVar5[5] = param_2[2];
    FUN_143e6b0f2(param_1,puVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d046 FUN_14155d046 body=226 status=ok
// SIG undefined FUN_14155d046(void)

longlong * FUN_14155d046(longlong *param_1)

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
  pcVar13 = FUN_14676298c;
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



// FUNCTION 14155d12a FUN_14155d12a body=289 status=ok
// SIG undefined FUN_14155d12a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155d12a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95a70) {
    FUN_144b3d300(&DAT_14ca95a70);
    if (DAT_14ca95a70 == -1) {
      FUN_14155d24c();
      FUN_145de613a();
      FUN_140db5666(&DAT_14ca959c8,0,&DAT_14ca95960,L"FClearUAVRectsPS",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearTextureRWPS",3,1,
                    FUN_14742bbee,FUN_14742bb8e,&LAB_14742bb76,&LAB_14742bb72,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca95f58);
      _DAT_14ca959c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143212477);
      _Init_thread_footer(&DAT_14ca95a70);
    }
  }
  return &DAT_14ca959c8;
}



// FUNCTION 14155d24c FUN_14155d24c body=258 status=ok
// SIG undefined FUN_14155d24c(void)

void FUN_14155d24c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95fd8) {
    FUN_144b3d300(&DAT_14ca95fd8);
    if (DAT_14ca95fd8 == -1) {
      FUN_145de6284(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x21f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca95f58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143214a8c);
      _Init_thread_footer(&DAT_14ca95fd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d350 FUN_14155d350 body=481 status=ok
// SIG undefined FUN_14155d350(void)

void FUN_14155d350(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_145aa4720(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d532 FUN_14155d532 body=64 status=ok
// SIG undefined FUN_14155d532(void)

void FUN_14155d532(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 200);
    do {
      FUN_14063e017(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14155d572 FUN_14155d572 body=164 status=ok
// SIG undefined FUN_14155d572(void)

void FUN_14155d572(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate BSDFs";
  local_38 = 0xf;
  FUN_140208c1e(&DAT_14caec078,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d618 FUN_14155d618 body=164 status=ok
// SIG undefined FUN_14155d618(void)

void FUN_14155d618(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionSubstrate";
  local_38 = 0x1b;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Substrate Helpers";
  local_38 = 0x11;
  FUN_140208c1e(&DAT_14caec150,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d6be FUN_14155d6be body=164 status=ok
// SIG undefined FUN_14155d6be(void)

void FUN_14155d6be(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXAppend3Vector";
  local_38 = 0x28;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13820,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d764 FUN_14155d764 body=164 status=ok
// SIG undefined FUN_14155d764(void)

void FUN_14155d764(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXRampLeftRight";
  local_38 = 0x28;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13bb0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d80a FUN_14155d80a body=164 status=ok
// SIG undefined FUN_14155d80a(void)

void FUN_14155d80a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXRampLeftRight";
  local_38 = 0x28;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13be0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d8b0 FUN_14155d8b0 body=164 status=ok
// SIG undefined FUN_14155d8b0(void)

void FUN_14155d8b0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Texture";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Texture";
  local_38 = 7;
  FUN_140208c1e(&DAT_14cc26a18,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155d955 FUN_14155d955 body=85 status=ok
// SIG undefined FUN_14155d955(void)

void FUN_14155d955(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
    *param_1 = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
      UNLOCK();
    }
    param_1[1] = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14155d9aa FUN_14155d9aa body=289 status=ok
// SIG undefined FUN_14155d9aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155d9aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5c468) {
    FUN_144b3d300(&DAT_14ca5c468);
    if (DAT_14ca5c468 == -1) {
      FUN_14155dacc();
      FUN_145de89b4();
      FUN_140db5666(&DAT_14ca5c3c0,0,&DAT_14ca5c358,L"FWaterTileVS",
                    L"/Engine/Private/SingleLayerWaterComposite.usf",L"WaterTileVS",0,1,
                    FUN_14731583c,FUN_1473157dc,&LAB_1473157bc,&LAB_1473157b8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5ea78);
      _DAT_14ca5c3c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143089013);
      _Init_thread_footer(&DAT_14ca5c468);
    }
  }
  return &DAT_14ca5c3c0;
}



// FUNCTION 14155dacc FUN_14155dacc body=258 status=ok
// SIG undefined FUN_14155dacc(void)

void FUN_14155dacc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5eaf8) {
    FUN_144b3d300(&DAT_14ca5eaf8);
    if (DAT_14ca5eaf8 == -1) {
      FUN_145de8afe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x37;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5ea78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309d74d);
      _Init_thread_footer(&DAT_14ca5eaf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155dbd0 FUN_14155dbd0 body=164 status=ok
// SIG undefined FUN_14155dbd0(void)

void FUN_14155dbd0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebbb0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155dc76 FUN_14155dc76 body=164 status=ok
// SIG undefined FUN_14155dc76(void)

void FUN_14155dc76(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebbc8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155dd1c FUN_14155dd1c body=164 status=ok
// SIG undefined FUN_14155dd1c(void)

void FUN_14155dd1c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebbe0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ddc2 FUN_14155ddc2 body=120 status=ok
// SIG undefined FUN_14155ddc2(void)

void FUN_14155ddc2(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x10) < 1) {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    if (((*(int *)(param_1 + 0x18) != 0) && (uVar1 = *(uint *)(param_1 + 0x14), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x18))) &&
         ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
          FUN_146001914(param_1,*puVar2);
          return;
        }
        FUN_146001914(param_1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14155de3a FUN_14155de3a body=289 status=ok
// SIG undefined FUN_14155de3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155de3a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec7d0) {
    FUN_144b3d300(&DAT_14c9ec7d0);
    if (DAT_14c9ec7d0 == -1) {
      FUN_14155df5c();
      FUN_145dea10e();
      FUN_140db5666(&DAT_14c9ec728,0,&DAT_14c9ec6c0,L"FLocalFogVolumeTiledRenderVS",
                    L"/Engine/Private/LocalFogVolumes/LocalFogVolumeSplat.usf",
                    L"LocalFogVolumeTiledVS",0,1,FUN_1471dc4ce,FUN_1471dc46e,&LAB_1471dc456,
                    &LAB_1471dc452,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0120);
      _DAT_14c9ec728 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d044ad);
      _Init_thread_footer(&DAT_14c9ec7d0);
    }
  }
  return &DAT_14c9ec728;
}



// FUNCTION 14155df5c FUN_14155df5c body=258 status=ok
// SIG undefined FUN_14155df5c(void)

void FUN_14155df5c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f01a0) {
    FUN_144b3d300(&DAT_14c9f01a0);
    if (DAT_14c9f01a0 == -1) {
      FUN_145dea258(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x29c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0120,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26217);
      _Init_thread_footer(&DAT_14c9f01a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155e060 FUN_14155e060 body=165 status=ok
// SIG undefined FUN_14155e060(void)

void FUN_14155e060(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MaterialAttributes";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MaterialExpression";
  local_28 = 0x12;
  FUN_1446e940c(local_38,&local_30);
  local_30 = L"Material Attributes";
  local_28 = 0x13;
  FUN_140208c1e(&DAT_14caeb030,local_38,local_34,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155e106 FUN_14155e106 body=427 status=ok
// SIG undefined FUN_14155e106(void)

undefined * FUN_14155e106(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02b58) {
    FUN_144b3d300(&DAT_14cb02b58);
    if (DAT_14cb02b58 == -1) {
      FUN_145deaa02(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"WorkingColorSpace";
      local_70 = L"WorkingColorSpace";
      local_78 = L"FWorkingColorSpaceShaderParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x12d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb02ad8,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a11ff);
      _Init_thread_footer(&DAT_14cb02b58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb02ad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155e2b2 FUN_14155e2b2 body=289 status=ok
// SIG undefined FUN_14155e2b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155e2b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30b50) {
    FUN_144b3d300(&DAT_14ca30b50);
    if (DAT_14ca30b50 == -1) {
      FUN_14155e3d4();
      FUN_145deafa8();
      FUN_140db5666(&DAT_14ca30aa8,0,&DAT_14ca30a40,L"FTonemapPS",
                    L"/Engine/Private/PostProcessTonemap.usf",L"MainPS",3,0x300,FUN_14729a5f2,
                    FUN_14729a592,FUN_1417744ae,&LAB_14729a58e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca34118);
      _DAT_14ca30aa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0be4d);
      _Init_thread_footer(&DAT_14ca30b50);
    }
  }
  return &DAT_14ca30aa8;
}



// FUNCTION 14155e3d4 FUN_14155e3d4 body=258 status=ok
// SIG undefined FUN_14155e3d4(void)

void FUN_14155e3d4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca34198) {
    FUN_144b3d300(&DAT_14ca34198);
    if (DAT_14ca34198 == -1) {
      FUN_145deb0f2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x4f0;
      local_58 = 0x194;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34118,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14135);
      _Init_thread_footer(&DAT_14ca34198);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155e4d8 FUN_14155e4d8 body=258 status=ok
// SIG undefined FUN_14155e4d8(void)

void FUN_14155e4d8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca34088) {
    FUN_144b3d300(&DAT_14ca34088);
    if (DAT_14ca34088 == -1) {
      FUN_14155e5dc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FTonemapParameters";
      local_38 = 0;
      local_50 = 0x3f0;
      local_58 = 0x125;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34008,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f1411d);
      _Init_thread_footer(&DAT_14ca34088);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155e5dc FUN_14155e5dc body=226 status=ok
// SIG undefined FUN_14155e5dc(void)

longlong * FUN_14155e5dc(longlong *param_1)

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
  pcVar13 = FUN_1462fed74;
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



// FUNCTION 14155e6c0 FUN_14155e6c0 body=164 status=ok
// SIG undefined FUN_14155e6c0(void)

void FUN_14155e6c0(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebaa8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155e766 FUN_14155e766 body=168 status=ok
// SIG undefined FUN_14155e766(void)

undefined8 * FUN_14155e766(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14a6fde10;
  param_1[5] = &PTR_FUN_14a6fe8e0;
  param_1[6] = &PTR_LAB_14a6fe920;
  param_1[0x55] = &PTR_FUN_14a6fe970;
  param_1[0x56] = &PTR_FUN_14a6fe9f0;
  param_1[0x57] = &PTR_FUN_14a6fea00;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcc] = 2;
  return param_1;
}



// FUNCTION 14155e80e FUN_14155e80e body=289 status=ok
// SIG undefined FUN_14155e80e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155e80e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca265e0) {
    FUN_144b3d300(&DAT_14ca265e0);
    if (DAT_14ca265e0 == -1) {
      FUN_14155e930();
      FUN_145dec708();
      FUN_140db5666(&DAT_14ca26538,0,&DAT_14ca264d0,L"FLUTBlenderPS",
                    L"/Engine/Private/PostProcessCombineLUTs.usf",L"MainPS",3,0x14,FUN_14728ab6e,
                    FUN_14728ab0e,&LAB_142eb6786,&LAB_14728ab0a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca28c68);
      _DAT_14ca26538 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb6789);
      _Init_thread_footer(&DAT_14ca265e0);
    }
  }
  return &DAT_14ca26538;
}



// FUNCTION 14155e930 FUN_14155e930 body=258 status=ok
// SIG undefined FUN_14155e930(void)

void FUN_14155e930(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca28ce8) {
    FUN_144b3d300(&DAT_14ca28ce8);
    if (DAT_14ca28ce8 == -1) {
      FUN_145dec852(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x3b0;
      local_58 = 0x17c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28c68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf75);
      _Init_thread_footer(&DAT_14ca28ce8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ea34 FUN_14155ea34 body=226 status=ok
// SIG undefined FUN_14155ea34(void)

longlong * FUN_14155ea34(longlong *param_1)

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
  pcVar13 = FUN_1462f9912;
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



// FUNCTION 14155eb18 FUN_14155eb18 body=289 status=ok
// SIG undefined FUN_14155eb18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155eb18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec8f8) {
    FUN_144b3d300(&DAT_14c9ec8f8);
    if (DAT_14c9ec8f8 == -1) {
      FUN_14155ec3a();
      FUN_145decc6a();
      FUN_140db5666(&DAT_14c9ec850,0,&DAT_14c9ec7e8,L"FLocalFogVolumeTiledRenderPS",
                    L"/Engine/Private/LocalFogVolumes/LocalFogVolumeSplat.usf",
                    L"LocalFogVolumeTiledPS",3,1,FUN_1471dc5ac,FUN_1471dc54c,&LAB_1471dc534,
                    &LAB_1471dc530,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f01a8);
      _DAT_14c9ec850 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d044b9);
      _Init_thread_footer(&DAT_14c9ec8f8);
    }
  }
  return &DAT_14c9ec850;
}



// FUNCTION 14155ec3a FUN_14155ec3a body=258 status=ok
// SIG undefined FUN_14155ec3a(void)

void FUN_14155ec3a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f0228) {
    FUN_144b3d300(&DAT_14c9f0228);
    if (DAT_14c9f0228 == -1) {
      FUN_145decdb4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 700;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f01a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26223);
      _Init_thread_footer(&DAT_14c9f0228);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ed3e FUN_14155ed3e body=164 status=ok
// SIG undefined FUN_14155ed3e(void)

void FUN_14155ed3e(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeb3d8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ede4 FUN_14155ede4 body=289 status=ok
// SIG undefined FUN_14155ede4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14155ede4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5c0f0) {
    FUN_144b3d300(&DAT_14ca5c0f0);
    if (DAT_14ca5c0f0 == -1) {
      FUN_14155ef06();
      FUN_145ded5c2();
      FUN_140db5666(&DAT_14ca5c048,0,&DAT_14ca5bfe0,L"FSingleLayerWaterCompositePS",
                    L"/Engine/Private/SingleLayerWaterComposite.usf",L"SingleLayerWaterCompositePS",
                    3,8,FUN_1473155aa,FUN_14731554a,&LAB_147315532,&LAB_14731552e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5e7d0);
      _DAT_14ca5c048 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143088fef);
      _Init_thread_footer(&DAT_14ca5c0f0);
    }
  }
  return &DAT_14ca5c048;
}



// FUNCTION 14155ef06 FUN_14155ef06 body=258 status=ok
// SIG undefined FUN_14155ef06(void)

void FUN_14155ef06(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e850) {
    FUN_144b3d300(&DAT_14ca5e850);
    if (DAT_14ca5e850 == -1) {
      FUN_145ded70c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x136;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5e7d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309d711);
      _Init_thread_footer(&DAT_14ca5e850);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155f00a FUN_14155f00a body=226 status=ok
// SIG undefined FUN_14155f00a(void)

longlong * FUN_14155f00a(longlong *param_1)

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
  pcVar13 = FUN_14630ab02;
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



// FUNCTION 14155f0ee FUN_14155f0ee body=1199 status=ok
// SIG undefined FUN_14155f0ee(void)

void FUN_14155f0ee(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 **ppuVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 **local_70;
  int local_68;
  longlong local_60;
  undefined1 local_51;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x120) == 0) goto LAB_14155f12d;
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  if (*(int *)(param_1 + 0x18) < 1) goto LAB_14155f12d;
  cVar8 = *(char *)(param_1 + 0x40);
  local_50 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x130);
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
    UNLOCK();
  }
  local_70 = &local_50;
  local_68 = 1;
  local_60 = param_1;
  if (cVar8 == '\0') {
    FUN_14014fe74(&local_70,0x7fffffffffffffff);
LAB_14155f46f:
    FUN_14155f59e(&local_60);
LAB_14155f479:
    puVar14 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    if ((bVar2 == 0) && ((local_50 == (undefined8 *)0x0 || ((*(byte *)(local_50 + 0x14) & 1) != 0)))
       ) goto LAB_14155f46f;
    puVar11 = TlsGetValue(DAT_14c896140);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar11);
    }
    puVar14 = (undefined8 *)puVar11[1];
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*puVar11;
      if (puVar14 == (undefined8 *)0x0) {
        uVar10 = FUN_14470efbc(&DAT_14c896180);
        if (uVar10 == 0) {
          puVar11[1] = 0;
LAB_14155f55f:
          puVar14 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar11[1] = puVar14;
          iVar9 = 0xff;
          puVar15 = puVar14;
          do {
            puVar13 = puVar15 + 0x20;
            *puVar15 = puVar13;
            iVar9 = iVar9 + -1;
            puVar15 = puVar13;
          } while (iVar9 != 0);
          goto LAB_14155f4dd;
        }
        puVar14 = *(undefined8 **)
                   (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar10 >> 0xe) * 8) + 8 +
                   (ulonglong)(uVar10 & 0x3fff) * 0x18);
        FUN_1447d080c(uVar10);
        puVar11[1] = puVar14;
        if (puVar14 == (undefined8 *)0x0) goto LAB_14155f55f;
      }
      else {
        puVar11[1] = puVar14;
        puVar13 = puVar11;
LAB_14155f4dd:
        *puVar13 = 0;
      }
      *(undefined4 *)(puVar11 + 2) = 0x100;
      iVar9 = 0xff;
    }
    else {
      iVar9 = *(int *)(puVar11 + 2) + -1;
    }
    puVar11[1] = *puVar14;
    *(int *)(puVar11 + 2) = iVar9;
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
    bVar18 = *(char *)(puVar14 + 8) == '\x01';
    if (bVar18) {
      *(char *)(puVar14 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_14008cdb0(puVar14 + 8);
    }
    *puVar14 = &PTR_FUN_14a2a04a8;
    if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
    }
    ppuVar7 = local_70;
    puVar14[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar14[9] = puVar14;
    puVar14[10] = puVar14;
    lVar16 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    iVar9 = 0;
    if (lVar16 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar16 + 0x30);
    }
    puVar14[0xf] = uVar12;
    puVar14[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar14 + 0x1c) = bVar2 ^ 1;
    puVar14[0x15] = local_60;
    *puVar14 = &PTR_FUN_14a2a0498;
    LOCK();
    *(int *)((longlong)puVar14 + 0xc) = *(int *)((longlong)puVar14 + 0xc) + local_68;
    UNLOCK();
    lVar16 = (longlong)local_68;
    if (lVar16 != 0) {
      lVar17 = 0;
      local_78 = puVar14 + 5;
      iVar9 = 0;
      do {
        lVar3 = *(longlong *)((longlong)ppuVar7 + lVar17);
        if ((lVar3 == 0) || (cVar8 = FUN_1456bb142(lVar3 + 0x88,puVar14), cVar8 == '\0')) {
          iVar9 = iVar9 + 1;
        }
        else {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          FUN_1456bb1d4(local_78,lVar3);
        }
        lVar17 = lVar17 + 8;
      } while (lVar16 * 8 != lVar17);
    }
    LOCK();
    *(int *)((longlong)puVar14 + 0xc) = *(int *)((longlong)puVar14 + 0xc) - iVar9;
    UNLOCK();
    local_51 = 1;
    FUN_1447439e4(puVar14);
    if (puVar14 == (undefined8 *)0x0) goto LAB_14155f479;
    iVar9 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar9 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar9 * 8) = puVar14;
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
  }
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x138);
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x138) = puVar14;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
LAB_14155f12d:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155f59e FUN_14155f59e body=1360 status=ok
// SIG undefined FUN_14155f59e(void)

void FUN_14155f59e(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong *plVar28;
  longlong *plVar29;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar9 = *piVar1;
  if (iVar9 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar9 = *piVar1;
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar6 = *param_1;
  if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
    plVar29 = *(longlong **)(lVar6 + 0x10);
    plVar28 = plVar29 + *(int *)(lVar6 + 0x18);
    do {
      lVar7 = *plVar29;
      lVar23 = *(longlong *)(lVar7 + 8);
      if ((*(byte *)(lVar23 + 0x74) & 8) != 0) {
        uVar5 = *(uint *)(lVar7 + 0x15c);
        lVar24 = (longlong)(int)uVar5;
        cVar3 = *(char *)(lVar23 + 0x2a8);
        bVar4 = *(byte *)(lVar23 + 0x2bd);
        lVar8 = *(longlong *)(lVar6 + 8);
        lVar23 = lVar8 + 0xf8;
        if ((lVar24 < 0) || (*(int *)(lVar8 + 0x110) <= (int)uVar5)) {
LAB_14155f68c:
          iVar10 = *(int *)(lVar8 + 0xf0);
          if ((int)uVar5 < iVar10) {
            lVar21 = *(longlong *)(lVar8 + 0xe8);
          }
          else {
            iVar25 = uVar5 + 1;
            *(int *)(lVar8 + 0xf0) = iVar25;
            if ((uint)(*(int *)(lVar8 + 0xf4) - iVar10) < (uint)(iVar25 - iVar10)) {
              FUN_14482b872();
              iVar25 = *(int *)(lVar8 + 0xf0);
            }
            lVar21 = *(longlong *)(lVar8 + 0xe8);
            iVar10 = *(int *)(lVar8 + 0x110);
            if (iVar10 < iVar25) {
              do {
                *(undefined4 *)(lVar21 + (longlong)iVar10 * 0x18) = 0xffffffff;
                iVar25 = *(int *)(lVar8 + 0x118);
                *(int *)(lVar21 + 4 + (longlong)iVar10 * 0x18) = iVar25;
                if (*(int *)(lVar8 + 0x11c) != 0) {
                  *(int *)(lVar21 + (longlong)iVar25 * 0x18) = iVar10;
                }
                *(int *)(lVar8 + 0x118) = iVar10;
                iVar10 = *(int *)(lVar8 + 0x110);
                if (iVar10 == 0) {
                  iVar25 = -1;
                }
                else {
                  iVar25 = iVar10 + 0x1e;
                  if (-1 < iVar10 + -1) {
                    iVar25 = iVar10 + -1;
                  }
                  iVar25 = iVar25 >> 5;
                }
                iVar17 = iVar10 + 1;
                iVar19 = iVar10 + 0x1f;
                if (-1 < iVar10) {
                  iVar19 = iVar10;
                }
                if (iVar19 >> 5 == iVar25) {
                  *(int *)(lVar8 + 0x110) = iVar17;
                }
                else {
                  if (*(int *)(lVar8 + 0x114) <= iVar10) {
                    iVar25 = iVar10;
                    if (iVar10 + 0x20U < 0xa0) {
                      iVar17 = 0x80;
                    }
                    else {
                      uVar27 = iVar10 + 0x20U >> 5;
                      if (*(int *)(lVar8 + 0x114) + 0x1fU < 0xa0) {
                        uVar20 = 4;
                        if (4 < uVar27) {
                          uVar20 = uVar27;
                        }
                      }
                      else {
                        uVar20 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                      }
                      uVar15 = (ulonglong)(uVar20 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar11 = (uint)(uVar15 + 0xf);
                          if (uVar20 < 0x1ffd) {
                            uVar15 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
                          }
                          else {
                            uVar18 = (ulonglong)(uVar11 & 0xfffffff0);
                            if (uVar18 < 0x7ff1) {
                              bVar16 = (&DAT_14c841e00)[uVar11 >> 4];
                              uVar22 = 0x32;
                              if (0x32 < bVar16) {
                                uVar22 = (ulonglong)bVar16;
                              }
                              uVar26 = 0x32 - (ulonglong)bVar16;
                              do {
                                uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0)
                                goto LAB_14155f97a;
                                lVar14 = uVar22 + 1 + uVar26;
                                uVar26 = uVar26 - 1;
                              } while (lVar14 != 0x33);
                            }
                            uVar15 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar15 = 0x10;
                            }
                            uVar15 = -uVar15 & (uVar18 + uVar15) - 1;
                          }
                        }
                        else {
                          uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
                          iVar25 = *(int *)(lVar8 + 0x110);
                        }
                      }
LAB_14155f97a:
                      iVar12 = (int)(uVar15 >> 2);
                      iVar17 = iVar12 << 5;
                      if (iVar12 < (int)uVar27) {
                        iVar17 = -0x20;
                      }
                    }
                    *(int *)(lVar8 + 0x114) = iVar17;
                    FUN_1446efbd8(lVar23,iVar25);
                    iVar17 = *(int *)(lVar8 + 0x110) + 1;
                  }
                  iVar25 = iVar17 + 0x1f;
                  if (-1 < iVar17) {
                    iVar25 = iVar17;
                  }
                  *(int *)(lVar8 + 0x110) = iVar17;
                  if (iVar17 % 0x20 != 0) {
                    lVar14 = *(longlong *)(lVar8 + 0x108);
                    if (*(longlong *)(lVar8 + 0x108) == 0) {
                      lVar14 = lVar23;
                    }
                    bVar16 = -(char)(iVar17 % 0x20);
                    *(uint *)(lVar14 + (longlong)(iVar25 >> 5) * 4) =
                         (uint)(*(int *)(lVar14 + (longlong)(iVar25 >> 5) * 4) << (bVar16 & 0x1f))
                         >> (bVar16 & 0x1f);
                  }
                }
                lVar14 = *(longlong *)(lVar8 + 0x108);
                if (*(longlong *)(lVar8 + 0x108) == 0) {
                  lVar14 = lVar23;
                }
                bVar16 = (byte)iVar10 & 0x1f;
                puVar2 = (uint *)(lVar14 + (longlong)(iVar19 >> 5) * 4);
                *puVar2 = *puVar2 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
                *(int *)(lVar8 + 0x11c) = *(int *)(lVar8 + 0x11c) + 1;
                iVar10 = *(int *)(lVar8 + 0x110);
              } while (iVar10 < *(int *)(lVar8 + 0xf0));
            }
          }
          *(int *)(lVar8 + 0x11c) = *(int *)(lVar8 + 0x11c) + -1;
          iVar10 = *(int *)(lVar21 + lVar24 * 0x18);
          iVar25 = *(int *)(lVar21 + 4 + lVar24 * 0x18);
          if ((longlong)iVar10 == -1) {
            *(int *)(lVar8 + 0x118) = iVar25;
          }
          else {
            *(int *)(lVar21 + 4 + (longlong)iVar10 * 0x18) = iVar25;
          }
          if (iVar25 != -1) {
            *(int *)(lVar21 + (longlong)iVar25 * 0x18) = iVar10;
          }
          if (*(longlong *)(lVar8 + 0x108) != 0) {
            lVar23 = *(longlong *)(lVar8 + 0x108);
          }
          uVar27 = uVar5 + 0x1f;
          if (-1 < (int)uVar5) {
            uVar27 = uVar5;
          }
          puVar2 = (uint *)(lVar23 + (longlong)((int)uVar27 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
          plVar13 = (longlong *)(lVar24 * 0x18 + *(longlong *)(lVar8 + 0xe8));
        }
        else {
          lVar21 = *(longlong *)(lVar8 + 0x108);
          if (*(longlong *)(lVar8 + 0x108) == 0) {
            lVar21 = lVar23;
          }
          if ((*(uint *)(lVar21 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0)
          goto LAB_14155f68c;
          plVar13 = (longlong *)((ulonglong)uVar5 * 0x18 + *(longlong *)(lVar8 + 0xe8));
        }
        *plVar13 = lVar7;
        plVar13[1] = 0xffffffff;
        *(char *)(plVar13 + 2) = cVar3 + '\x01';
        *(undefined2 *)((longlong)plVar13 + 0x11) = 0;
        *(byte *)((longlong)plVar13 + 0x13) = bVar4 >> 2 & 1;
        if (*(char *)(lVar6 + 0x41) == '\0') {
          iVar10 = *(int *)(lVar6 + 0x38);
          *(uint *)(lVar6 + 0x38) = iVar10 + 1U;
          if (*(uint *)(lVar6 + 0x3c) < iVar10 + 1U) {
            FUN_144a78748((longlong *)(lVar6 + 0x30),iVar10);
          }
          *(uint *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar10 * 4) = uVar5;
        }
      }
      plVar29 = plVar29 + 1;
    } while (plVar29 != plVar28);
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar1 = iVar9;
  }
  return;
}



// FUNCTION 14155faee FUN_14155faee body=270 status=ok
// SIG undefined FUN_14155faee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14155faee(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _DAT_14caa8bb0 = &PTR_LAB_149e668b0;
  _DAT_14caa8bb8 = 0;
  FUN_1405bceb4(&DAT_14caa8bb0);
  _DAT_14caa8bb0 = &PTR_FUN_14a3ef500;
  _DAT_14caa8bc0 = 0;
  _DAT_14caa8bc8 = L"/Engine/EditorResources/S_Solver.S_Solver";
  _DAT_14caa8bd0 = 0;
  FUN_1446f470e(&DAT_14caa8bd8,L"Solver",1);
  local_40 = L"Solver";
  local_38 = 6;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"SpriteCategory";
  local_38 = 0xe;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Solver";
  local_38 = 6;
  FUN_140208c1e(&DAT_14caa8be0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155fbfe FUN_14155fbfe body=622 status=ok
// SIG undefined FUN_14155fbfe(void)

void FUN_14155fbfe(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_78;
  int local_70;
  float local_64;
  undefined2 *local_60;
  longlong *local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x350) != 0) && (*(longlong *)(param_1 + 0x358) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x358) + 8))) goto LAB_14155fe29;
  local_78 = *(undefined8 **)(param_1 + 0x48);
  FUN_1400021e4(&local_78,&local_60);
  puVar7 = local_60;
  if ((int)local_58 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L"GbxParty.%s",puVar7);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_64 = 0.0;
  puVar7 = local_50;
  if (local_48 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  local_88 = &DAT_14c872ce8;
  cVar5 = FUN_14153841e(DAT_14c872ce0,puVar7,L"JoinRequestTimeoutSeconds",&local_64);
  if ((cVar5 != '\0') && (0.0 < local_64)) {
    *(float *)(param_1 + 0x348) = local_64;
  }
  uVar6 = FUN_1401cb356();
  uVar2 = *(undefined4 *)(param_1 + 0x348);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  local_70 = 3;
  *local_78 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_78[2] = lVar8;
  *local_78 = &PTR_FUN_14b4f1180;
  local_78[3] = param_1;
  *(undefined1 *)(local_78 + 4) = param_2;
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar2);
  FUN_1405f67fc(uVar6,&local_60,&local_78,L"FGbxParty_JoinFailsafeTimeout");
  *(undefined2 **)(param_1 + 0x350) = local_60;
  local_60 = (undefined2 *)0x0;
  plVar3 = *(longlong **)(param_1 + 0x358);
  *(longlong **)(param_1 + 0x358) = local_58;
  local_58 = (longlong *)0x0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  if (local_70 == 0) {
LAB_14155fe10:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_14155fe10;
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14155fe29:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14155fe6d FUN_14155fe6d body=102 status=ok
// SIG undefined FUN_14155fe6d(void)

undefined4 FUN_14155fe6d(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146583581(&local_28);
  uVar1 = 0;
  if (1 < local_20) {
    uVar1 = FUN_144a1ccda(local_28,0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155fed4 FUN_14155fed4 body=164 status=ok
// SIG undefined FUN_14155fed4(void)

void FUN_14155fed4(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Execution";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Execution";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caebd90,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14155ff7a FUN_14155ff7a body=164 status=ok
// SIG undefined FUN_14155ff7a(void)

void FUN_14155ff7a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Execution";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Execution";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caebe08,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141560020 FUN_141560020 body=164 status=ok
// SIG undefined FUN_141560020(void)

void FUN_141560020(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Texture";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Texture";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeab18,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415600c6 FUN_1415600c6 body=164 status=ok
// SIG undefined FUN_1415600c6(void)

void FUN_1415600c6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Execution";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Execution";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caebdc0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14156016c FUN_14156016c body=151 status=ok
// SIG undefined FUN_14156016c(void)

void FUN_14156016c(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xf8);
  if (lVar4 == 0) {
    uVar3 = FUN_141221512();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xf8) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xf0));
    }
    *(undefined8 *)(param_1 + 0x100) = uVar3;
    return;
  }
  return;
}



// FUNCTION 141560204 FUN_141560204 body=281 status=ok
// SIG undefined FUN_141560204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141560204(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca505b8) {
    FUN_144b3d300(&DAT_14ca505b8);
    if (DAT_14ca505b8 == -1) {
      FUN_145df1986();
      FUN_140db5666(&DAT_14ca50510,0,&DAT_14ca504a8,L"FShadowProjectionPS3falsefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472eeb0e,
                    FUN_1472eeae6,&LAB_1472eea9a,&LAB_1472eea96,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049af6);
      _Init_thread_footer(&DAT_14ca505b8);
    }
  }
  return &DAT_14ca50510;
}



// FUNCTION 14156031e FUN_14156031e body=545 status=ok
// SIG undefined FUN_14156031e(void)

void FUN_14156031e(longlong param_1,undefined1 param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
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
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_3;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if (param_4 == '\0') {
        if (0 < *(int *)(param_1 + 0x7ea0)) {
          local_40 = (code *)&local_48;
          FUN_14104f8f4(param_1 + 0x7e68);
        }
      }
      else {
        puVar1 = (undefined1 *)(param_1 + 0x7e68);
        puVar3 = *(undefined1 **)(param_1 + 0x7e98);
        puVar4 = puVar3;
        if (puVar3 == (undefined1 *)0x0) {
          puVar4 = puVar1;
        }
        iVar2 = *(int *)(param_1 + 0x7ea0);
        lVar6 = (longlong)iVar2;
        if (lVar6 != 0) {
          lVar5 = lVar6 * 0xc;
          do {
            if (*(longlong *)(puVar4 + 4) == param_3) {
              if (puVar4 != (undefined1 *)0x0) goto LAB_141560404;
              break;
            }
            puVar4 = puVar4 + 0xc;
            lVar5 = lVar5 + -0xc;
          } while (lVar5 != 0);
        }
        *(uint *)(param_1 + 0x7ea0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x7ea4) < iVar2 + 1U) {
          FUN_148d54822(puVar1,iVar2);
          puVar3 = *(undefined1 **)(param_1 + 0x7e98);
        }
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = puVar1;
        }
        lVar6 = lVar6 * 0xc;
        *(undefined4 *)(puVar3 + lVar6 + 8) = 0;
        *(undefined8 *)(puVar3 + lVar6) = 0;
        puVar3 = *(undefined1 **)(param_1 + 0x7e98);
        if (*(undefined1 **)(param_1 + 0x7e98) == (undefined1 *)0x0) {
          puVar3 = puVar1;
        }
        puVar4 = puVar3 + lVar6;
        *(longlong *)(puVar3 + lVar6 + 4) = param_3;
LAB_141560404:
        *puVar4 = param_2;
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141560540 FUN_141560540 body=164 status=ok
// SIG undefined FUN_141560540(void)

void FUN_141560540(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"VectorOps";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"VectorOps";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caeb420,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415605e6 FUN_1415605e6 body=164 status=ok
// SIG undefined FUN_1415605e6(void)

void FUN_1415605e6(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeafa8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14156068c FUN_14156068c body=164 status=ok
// SIG undefined FUN_14156068c(void)

void FUN_14156068c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeafc0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141560732 FUN_141560732 body=164 status=ok
// SIG undefined FUN_141560732(void)

void FUN_141560732(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caeaee8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415607d8 FUN_1415607d8 body=164 status=ok
// SIG undefined FUN_1415607d8(void)

void FUN_1415607d8(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebbf8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


