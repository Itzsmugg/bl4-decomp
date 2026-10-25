// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14260e210 FUN_14260e210 body=354 status=ok
// SIG undefined FUN_14260e210(void)

int FUN_14260e210(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_80 [8];
  ushort local_78;
  undefined1 local_76 [2];
  uint local_74;
  undefined1 *local_68;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  iVar1 = *(int *)(param_1 + 0x288);
  param_2 = param_2 + (uint)((*(uint *)(*(longlong *)(param_1 + 0x280) + (longlong)param_2 * 0x10) &
                             0xfffffffe) == 0xc);
  FUN_1424a7060(local_80,0,L"other",5);
  lVar4 = *(longlong *)(param_1 + 0x280);
  do {
    lVar6 = (longlong)param_2 * 0x10;
    iVar5 = 0;
    if (*(int *)(lVar4 + lVar6) == 6) break;
    if ((local_78 & 1) == 0) {
      uVar8 = local_74;
      if (-1 < (short)local_78) {
        uVar8 = (int)(short)local_78 >> 5;
      }
      uVar9 = 0;
      if (0 < (int)uVar8) {
        uVar9 = uVar8;
      }
      puVar7 = local_76;
      if ((local_78 & 2) == 0) {
        puVar7 = local_68;
      }
      cVar3 = FUN_1424a7e30(param_1 + 0x238,*(undefined4 *)(lVar4 + 4 + lVar6),
                            *(undefined2 *)(lVar4 + 8 + lVar6),puVar7,(int)uVar8 >> 0x1f & uVar8,
                            uVar9);
    }
    else {
      cVar3 = (*(byte *)(param_1 + 0x240) & 1) == 0;
    }
    iVar5 = param_2 + 1;
    if (cVar3 == '\0') break;
    lVar4 = *(longlong *)(param_1 + 0x280);
    if ((*(uint *)(lVar4 + (longlong)iVar5 * 0x10) & 0xfffffffe) == 0xc) {
      iVar5 = param_2 + 2;
    }
    iVar2 = *(int *)(lVar4 + 0xc + (longlong)iVar5 * 0x10);
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    param_2 = iVar5 + 1;
    iVar5 = 0;
  } while (param_2 < iVar1);
  FUN_140859a90(local_80);
  return iVar5;
}



// FUNCTION 14260e390 Unwind@14260e390 body=51 status=ok
// SIG undefined Unwind@14260e390(void)

void Unwind_14260e390(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 14260e3d0 FUN_14260e3d0 body=269 status=ok
// SIG undefined FUN_14260e3d0(void)

int FUN_14260e3d0(longlong param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x280);
  do {
    lVar10 = (longlong)param_2 * 0x10 + 0x10;
    do {
      iVar6 = param_2;
      iVar2 = *(int *)(lVar4 + lVar10);
      if (iVar2 == 1) {
        return 0;
      }
      if (iVar2 == 4) {
        return -1;
      }
      param_2 = iVar6 + 1;
      lVar10 = lVar10 + 0x10;
    } while (iVar2 != 5);
    if ((*(ushort *)(lVar4 + -6 + lVar10) < 2) && (uVar1 = *(ushort *)(param_3 + 8), 0x1f < uVar1))
    {
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          uVar5 = *(uint *)(param_3 + 0xc);
        }
        else {
          uVar5 = (int)(short)uVar1 >> 5;
        }
        uVar9 = 0;
        if (0 < (int)uVar5) {
          uVar9 = uVar5;
        }
        lVar8 = param_3 + 10;
        if ((uVar1 & 2) == 0) {
          lVar8 = *(longlong *)(param_3 + 0x18);
        }
        lVar7 = (longlong)(iVar6 + 2) * 0x10;
        cVar3 = FUN_1424a7e30(param_1 + 0x238,*(undefined4 *)(lVar4 + 4 + lVar7),
                              *(undefined2 *)(lVar4 + 8 + lVar7),lVar8,(int)uVar5 >> 0x1f & uVar5,
                              uVar9);
      }
      else {
        cVar3 = (*(byte *)(param_1 + 0x240) & 1) == 0;
      }
      if (cVar3 == '\0') {
        return param_2;
      }
      lVar4 = *(longlong *)(param_1 + 0x280);
    }
    iVar2 = *(int *)(lVar4 + -4 + lVar10);
    if (param_2 < iVar2) {
      param_2 = iVar2;
    }
  } while( true );
}



// FUNCTION 14260e4e0 FUN_14260e4e0 body=1990 status=ok
// SIG undefined FUN_14260e4e0(void)

ulonglong *
FUN_14260e4e0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,int *param_5,
             int *param_6)

{
  ushort uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined **local_1e8;
  undefined2 local_1e0;
  undefined1 local_1a8 [8];
  ushort local_1a0;
  int local_19c;
  undefined **local_168;
  ushort local_160;
  undefined1 local_15e [2];
  uint local_15c;
  undefined1 *local_150;
  undefined **local_128;
  ushort local_120;
  undefined1 local_11e [2];
  int local_11c;
  undefined1 *local_110;
  undefined2 local_e8 [16];
  ulonglong *local_c8;
  undefined2 *local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong *local_88;
  ulonglong *local_80;
  ulonglong local_78;
  undefined **local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_5 = 0;
  if (*param_6 < 1) {
    if (*(char *)(param_1 + 0x2a4) == '\0') {
      uVar17 = (ulonglong)(int)(*(int *)(param_1 + 0x2c0) + (uint)(*(int *)(param_1 + 0x2c0) == 0));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar17;
      uVar9 = 0xffffffffffffffff;
      if (SUB168(auVar3 * ZEXT816(0x70),8) == 0) {
        uVar9 = SUB168(auVar3 * ZEXT816(0x70),0) | 8;
      }
      local_78 = param_2;
      local_58 = (ulonglong *)thunk_FUN_1424da030(uVar9);
      if (local_58 == (ulonglong *)0x0) {
        puVar15 = (ulonglong *)0x0;
      }
      else {
        *local_58 = uVar17;
        puVar15 = local_58 + 1;
        local_50 = 0;
        puVar18 = puVar15;
        do {
          FUN_14252c810(puVar18);
          puVar18 = puVar18 + 0xe;
          local_50 = local_50 + -0x70;
        } while (uVar17 * -0x70 - local_50 != 0);
      }
      local_a8 = param_1 + 0x228;
      local_50 = param_1 + 0x238;
      lVar8 = *(longlong *)(param_1 + 0x280);
      lVar6 = (longlong)(int)local_78 * 0x10;
      iVar16 = (uint)*(ushort *)(lVar8 + 8 + lVar6) + *(int *)(lVar8 + 4 + lVar6);
      iVar20 = *(int *)(param_4 + 8);
      local_70 = icu_64::ParsePosition::vftable;
      local_68 = 0xffffffff00000000;
      local_b0 = param_3 + 10;
      uVar9 = local_78;
      local_c8 = puVar15;
      local_98 = param_1;
      local_80 = puVar15;
      local_60 = param_4;
      local_58 = (ulonglong *)param_3;
LAB_14260e692:
      do {
        iVar5 = (int)uVar9;
        lVar6 = ((longlong)iVar5 + 1) * 0x10;
        uVar11 = *(uint *)(lVar8 + lVar6);
        iVar19 = *(int *)(lVar8 + 4 + lVar6) - iVar16;
        local_78 = uVar9;
        if (iVar19 != 0) {
          uVar1 = *(ushort *)((longlong)local_58 + 8);
          if ((uVar1 & 1) == 0) {
            if ((short)uVar1 < 0) {
              iVar10 = *(int *)((longlong)local_58 + 0xc);
              if (iVar20 < 0) goto LAB_14260e70d;
LAB_14260e6d8:
              iVar12 = iVar10;
              if (iVar10 < iVar20) goto LAB_14260e710;
              iVar12 = iVar20;
              if (-1 < iVar19) goto LAB_14260e6e5;
LAB_14260e717:
              iVar10 = 0;
LAB_14260e719:
              iVar21 = iVar10;
            }
            else {
              iVar10 = (int)(short)uVar1 >> 5;
              if (-1 < iVar20) goto LAB_14260e6d8;
LAB_14260e70d:
              iVar12 = 0;
LAB_14260e710:
              if (iVar19 < 0) goto LAB_14260e717;
LAB_14260e6e5:
              iVar10 = iVar10 - iVar12;
              iVar21 = iVar19;
              if (iVar10 < iVar19) goto LAB_14260e719;
            }
            lVar22 = local_b0;
            if ((uVar1 & 2) == 0) {
              lVar22 = *(longlong *)((longlong)local_58 + 0x18);
            }
            cVar4 = FUN_1424a7e30(local_50,iVar16,iVar19,lVar22,iVar12,iVar21);
          }
          else {
            cVar4 = (*(byte *)(local_98 + 0x240) & 1) == 0;
          }
          if (cVar4 != '\0') {
            *(int *)(local_60 + 0xc) = iVar20;
            puVar15 = local_80;
            goto LAB_14260ec62;
          }
        }
        puVar18 = local_58;
        puVar15 = local_80;
        lVar22 = local_98;
        iVar20 = iVar19 + iVar20;
        if (uVar11 == 1) {
          *(int *)(local_60 + 8) = iVar20;
          thunk_FUN_1424b70d0(&local_70);
          return local_80;
        }
        uVar14 = (int)local_78 + 1;
        uVar9 = (ulonglong)uVar14;
        if ((uVar11 & 0xfffffffe) != 2) {
          uVar11 = *(uint *)(*(longlong *)(local_98 + 0x280) + 0xc + lVar6);
          if ((int)uVar11 <= (int)uVar14) {
            uVar11 = uVar14;
          }
          iVar16 = (int)*(short *)(lVar8 + 10 + lVar6);
          if (1 < *(int *)(lVar6 + lVar8) - 5U) {
            iVar16 = 0;
          }
          local_90 = (longlong)
                     *(short *)((longlong)iVar5 * 0x10 + 0x2a + *(longlong *)(local_98 + 0x280));
          local_1e8 = &PTR_FUN_149e18960;
          local_1e0 = 2;
          local_88 = local_80 + local_90 * 0xe;
          local_a0 = (ulonglong)(int)uVar11;
          if (((*(longlong *)(local_98 + 0x2e0) == 0) ||
              (plVar7 = (longlong *)FUN_142502740(*(longlong *)(local_98 + 0x2e0),uVar14),
              plVar7 == (longlong *)0x0)) ||
             (lVar8 = __RTDynamicCast(plVar7,0,&icu_64::Format::RTTI_Type_Descriptor,
                                      &icu_64::MessageFormat::DummyFormat::RTTI_Type_Descriptor,0),
             lVar8 != 0)) {
            if ((iVar16 == 0) ||
               ((*(longlong *)(lVar22 + 0x2e0) != 0 &&
                (lVar8 = FUN_142502740(*(longlong *)(lVar22 + 0x2e0),uVar14), lVar8 != 0)))) {
              lVar8 = *(longlong *)(lVar22 + 0x280);
              lVar6 = local_a0 * 0x10;
              iVar16 = (uint)*(ushort *)(lVar8 + 8 + lVar6) + *(int *)(lVar8 + 4 + lVar6);
              local_128 = &PTR_FUN_149e18960;
              local_120 = 2;
              for (lVar6 = lVar6 + 0x18; uVar11 = *(uint *)(lVar8 + -8 + lVar6),
                  FUN_1424a9690(&local_128,local_50,iVar16,*(int *)(lVar8 + -4 + lVar6) - iVar16),
                  (uVar11 & 0xfffffffb) != 1; lVar6 = lVar6 + 0x10) {
                iVar16 = (uint)*(ushort *)(lVar8 + lVar6) + *(int *)(lVar8 + -4 + lVar6);
                lVar8 = *(longlong *)(lVar22 + 0x280);
              }
              if (local_120 < 0x20) {
                if (*(short *)((longlong)puVar18 + 8) < 0) {
                  iVar16 = *(int *)((longlong)puVar18 + 0xc);
                }
                else {
                  iVar16 = (int)*(short *)((longlong)puVar18 + 8) >> 5;
                }
LAB_14260ea38:
                if (-1 < iVar16) {
                  FUN_1424a84d0(puVar18,local_1a8,iVar20,iVar16 - iVar20);
                  local_168 = &PTR_FUN_149e18960;
                  local_160 = 2;
                  local_e8[0] = 0x7b;
                  FUN_1424a6cf0(&local_168,local_e8,0,1);
                  FUN_1425647e0(local_e8,0x10,local_90,10,0);
                  FUN_1424a6cf0(&local_168,local_e8,0,0xffffffff);
                  local_b8 = local_e8;
                  local_e8[0] = 0x7d;
                  FUN_1424a6cf0(&local_168,local_b8,0,1);
                  if ((local_160 & 1) == 0) {
                    iVar20 = local_19c;
                    if (-1 < (short)local_1a0) {
                      iVar20 = (int)(short)local_1a0 >> 5;
                    }
                    uVar11 = local_15c;
                    if (-1 < (short)local_160) {
                      uVar11 = (int)(short)local_160 >> 5;
                    }
                    uVar14 = 0;
                    if (0 < (int)uVar11) {
                      uVar14 = uVar11;
                    }
                    puVar13 = local_15e;
                    if ((local_160 & 2) == 0) {
                      puVar13 = local_150;
                    }
                    cVar4 = FUN_1424a7e30(local_1a8,0,iVar20,puVar13,(int)uVar11 >> 0x1f & uVar11,
                                          uVar14);
                  }
                  else {
                    cVar4 = (local_1a0 & 1) == 0;
                  }
                  bVar23 = cVar4 != '\0';
                  if (bVar23) {
                    FUN_14252d3d0(local_88,local_1a8);
                  }
                  FUN_140859a90(&local_168);
                  FUN_140859a90(local_1a8);
                  FUN_140859a90(&local_128);
                  goto LAB_14260eb8d;
                }
              }
              else {
                sVar2 = *(short *)((longlong)puVar18 + 8);
                if (iVar20 < 0) {
                  iVar16 = *(int *)((longlong)puVar18 + 0xc);
                  iVar5 = 0;
                }
                else {
                  iVar16 = *(int *)((longlong)puVar18 + 0xc);
                  iVar5 = (int)sVar2 >> 5;
                  if (sVar2 < 0) {
                    iVar5 = iVar16;
                  }
                  if (iVar20 <= iVar5) {
                    iVar5 = iVar20;
                  }
                }
                iVar19 = (int)sVar2 >> 5;
                if (sVar2 < 0) {
                  iVar19 = iVar16;
                }
                if ((local_120 & 1) == 0) {
                  iVar16 = local_11c;
                  if (-1 < (short)local_120) {
                    iVar16 = (int)(short)local_120 >> 5;
                  }
                  if (0 < iVar16) {
                    puVar13 = local_11e;
                    if ((local_120 & 2) == 0) {
                      puVar13 = local_110;
                    }
                    iVar16 = FUN_1424a8860(puVar18,puVar13,0,iVar16,iVar5,iVar19 - iVar5);
                    goto LAB_14260ea38;
                  }
                }
              }
              *(int *)(local_60 + 0xc) = iVar20;
              FUN_140859a90(&local_128);
              goto LAB_14260ec59;
            }
            if (iVar16 != 2) {
              if (iVar16 - 3U < 3) {
                *param_6 = 0x10;
              }
              else {
                *param_6 = 5;
              }
              goto LAB_14260ec59;
            }
            local_68 = CONCAT44(local_68._4_4_,iVar20);
            uVar24 = FUN_1426c6700(local_a8,(int)local_78 + 3,puVar18,&local_70);
            if ((int)local_68 == iVar20) goto LAB_14260ec2e;
            FUN_14252d340(local_88,uVar24);
            bVar23 = true;
            iVar16 = (int)local_68;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,iVar20);
            (**(code **)(*plVar7 + 0x30))(plVar7,puVar18,local_88,&local_70);
            bVar23 = true;
            iVar16 = (int)local_68;
            if ((int)local_68 == iVar20) {
LAB_14260ec2e:
              *(int *)(local_60 + 0xc) = iVar20;
LAB_14260ec59:
              FUN_140859a90(&local_1e8);
LAB_14260ec62:
              thunk_FUN_1424b70d0(&local_70);
              if (puVar15 == (ulonglong *)0x0) {
                return (ulonglong *)0x0;
              }
              if (puVar15[-1] != 0) {
                lVar8 = puVar15[-1] * 0x70;
                do {
                  FUN_14252d110((longlong)puVar15 + lVar8 + -0x70);
                  lVar8 = lVar8 + -0x70;
                } while (lVar8 != 0);
              }
              FUN_1424b70c0(puVar15 + -1);
              return (ulonglong *)0x0;
            }
          }
LAB_14260eb8d:
          iVar20 = iVar16;
          uVar9 = local_a0;
          if ((bVar23) && (*param_5 <= (int)local_90)) {
            *param_5 = (int)local_90 + 1;
          }
          iVar16 = (uint)*(ushort *)(*(longlong *)(lVar22 + 0x280) + 8 + local_a0 * 0x10) +
                   *(int *)(*(longlong *)(lVar22 + 0x280) + 4 + local_a0 * 0x10);
          FUN_140859a90(&local_1e8);
          lVar8 = *(longlong *)(lVar22 + 0x280);
          uVar9 = uVar9 & 0xffffffff;
          goto LAB_14260e692;
        }
        iVar16 = (uint)*(ushort *)(lVar8 + 8 + lVar6) + *(int *)(lVar6 + lVar8 + 4);
        lVar8 = *(longlong *)(local_98 + 0x280);
      } while( true );
    }
    *param_6 = 0x1010c;
  }
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_4 + 8);
  return (ulonglong *)0x0;
}



// FUNCTION 14260ecb0 Unwind@14260ecb0 body=115 status=ok
// SIG undefined Unwind@14260ecb0(void)

void Unwind_14260ecb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    *(longlong *)(param_2 + 0x1c8) = -*(longlong *)(param_2 + 0x1c8);
    lVar1 = *(longlong *)(param_2 + 0x1c0);
    do {
      lVar2 = *(longlong *)(param_2 + 0x1c8);
      FUN_14252d110(lVar1 + -0x68 + lVar2);
      lVar2 = lVar2 + -0x70;
      *(longlong *)(param_2 + 0x1c8) = lVar2;
    } while (lVar2 != 0);
  }
  FUN_1424b70c0(*(undefined8 *)(param_2 + 0x1c0));
  return;
}



// FUNCTION 14260ed30 Unwind@14260ed30 body=55 status=ok
// SIG undefined Unwind@14260ed30(void)

void Unwind_14260ed30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf0);
  return;
}



// FUNCTION 14260ed70 Unwind@14260ed70 body=64 status=ok
// SIG undefined Unwind@14260ed70(void)

void Unwind_14260ed70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 14260edb0 Unwind@14260edb0 body=55 status=ok
// SIG undefined Unwind@14260edb0(void)

void Unwind_14260edb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xf0);
  return;
}



// FUNCTION 14260edf0 Unwind@14260edf0 body=55 status=ok
// SIG undefined Unwind@14260edf0(void)

void Unwind_14260edf0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14260ee30 Unwind@14260ee30 body=70 status=ok
// SIG undefined Unwind@14260ee30(void)

void Unwind_14260ee30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x1a8);
  FUN_14260eec0(param_2 + 0x150);
  return;
}



// FUNCTION 14260ee80 Unwind@14260ee80 body=59 status=ok
// SIG undefined Unwind@14260ee80(void)

void Unwind_14260ee80(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x158) = param_2 + 0x130;
  return;
}



// FUNCTION 14260eec0 FUN_14260eec0 body=87 status=ok
// SIG undefined FUN_14260eec0(void)

void FUN_14260eec0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + -8) != 0) {
      lVar2 = *(longlong *)(lVar1 + -8) * 0x70;
      do {
        FUN_14252d110(lVar1 + -0x70 + lVar2);
        lVar2 = lVar2 + -0x70;
      } while (lVar2 != 0);
    }
    FUN_1424b70c0(lVar1 + -8);
    return;
  }
  return;
}



// FUNCTION 14260ef20 FUN_14260ef20 body=75 status=ok
// SIG undefined FUN_14260ef20(void)

void FUN_14260ef20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 *local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_20 = &local_14;
  local_28 = param_4;
  FUN_14260e4e0(param_1,0,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 14260ef80 FUN_14260ef80 body=174 status=ok
// SIG undefined FUN_14260ef80(void)

longlong FUN_14260ef80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_1 + 0x2a4) == '\0') {
    local_38 = icu_64::ParsePosition::vftable;
    local_30 = 0xffffffff00000000;
    lVar1 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,&local_38,param_3);
    if ((int)local_30 == 0) {
      *param_4 = 6;
      if (lVar1 != 0) {
        if (*(longlong *)(lVar1 + -8) != 0) {
          lVar2 = *(longlong *)(lVar1 + -8) * 0x70;
          do {
            FUN_14252d110(lVar1 + -0x70 + lVar2);
            lVar2 = lVar2 + -0x70;
          } while (lVar2 != 0);
        }
        FUN_1424b70c0(lVar1 + -8);
      }
      lVar1 = 0;
    }
    thunk_FUN_1424b70d0(&local_38);
  }
  else {
    *param_4 = 0x1010c;
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14260f030 Unwind@14260f030 body=36 status=ok
// SIG undefined Unwind@14260f030(void)

void Unwind_14260f030(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x20);
  return;
}



// FUNCTION 14260f060 FUN_14260f060 body=86 status=ok
// SIG undefined FUN_14260f060(void)

void FUN_14260f060(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  lVar1 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,param_4,&local_14);
  if (lVar1 != 0) {
    FUN_14252d460(param_3,lVar1,local_14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14260f0c0 FUN_14260f0c0 body=1208 status=ok
// SIG undefined FUN_14260f0c0(void)

longlong *
FUN_14260f0c0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_428 [456];
  undefined4 local_260 [118];
  undefined1 local_88 [64];
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (0 < *param_6) {
    return (longlong *)0x0;
  }
  iVar2 = FUN_14260f740(param_2,&PTR_u_number_149c4e990);
  switch(iVar2) {
  case 0:
    *param_4 = 1;
    uVar5 = FUN_14260f740(param_3,&PTR_DAT_149c4e9d0);
    switch(uVar5) {
    case 0:
      plVar6 = (longlong *)FUN_140236d20(param_1 + 0x148,param_6);
      return plVar6;
    case 1:
      plVar6 = (longlong *)FUN_1424bb8e0(param_1 + 0x148,param_6);
      return plVar6;
    case 2:
      plVar6 = (longlong *)FUN_1424bb8f0(param_1 + 0x148,param_6);
      return plVar6;
    case 3:
      *param_4 = 2;
      plVar6 = (longlong *)
               FUN_14260f940(&switchD_14260f217::switchdataD_149c4eeac,param_1 + 0x148,param_6);
      return plVar6;
    }
    iVar2 = FUN_1425cc8a0(param_3,0);
    cVar1 = FUN_1424a7e30(param_3,iVar2,2,&DAT_149c4ebf8,0,2);
    if (cVar1 == '\0') {
      FUN_1424a84d0(param_3,local_88,iVar2 + 2,0x7fffffff);
      FUN_142568f90(local_428,local_88,param_6);
      FUN_142568f70(local_428,local_260,param_1 + 0x148);
      plVar6 = (longlong *)FUN_14256a2a0(local_260,param_6);
      FUN_142569480(local_260);
      FUN_1424ca310(local_428);
      FUN_140859a90(local_88);
      return plVar6;
    }
    plVar6 = (longlong *)FUN_140236d20(param_1 + 0x148,param_6);
    if (plVar6 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    plVar7 = (longlong *)
             __RTDynamicCast(plVar6,0,&icu_64::Format::RTTI_Type_Descriptor,
                             &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x230))(plVar7,param_3,param_5,param_6);
      return plVar6;
    }
    return plVar6;
  case 1:
  case 2:
    *param_4 = 0;
    iVar3 = FUN_1425cc8a0(param_3,0);
    uVar5 = 2;
    cVar1 = FUN_1424a7e30(param_3,iVar3,2,&DAT_149c4ebf8,0,2);
    if (cVar1 == '\0') {
      FUN_1424a84d0(param_3,local_260,iVar3 + 2,0x7fffffff);
      plVar6 = (longlong *)FUN_1424be360(local_260,param_1 + 0x148,param_6);
      FUN_140859a90(local_260);
      return plVar6;
    }
    uVar4 = FUN_14260f740(param_3,&PTR_DAT_149c4ea00);
    if (-1 < (int)uVar4) {
      uVar5 = *(undefined4 *)(&DAT_149c4ea30 + (ulonglong)uVar4 * 4);
    }
    if (iVar2 == 1) {
      plVar6 = (longlong *)FUN_1424bde60();
    }
    else {
      plVar6 = (longlong *)FUN_1424bde30(uVar5,param_1 + 0x148);
    }
    if (-1 < (int)uVar4) {
      return plVar6;
    }
    if (plVar6 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    plVar7 = (longlong *)
             __RTDynamicCast(plVar6,0,&icu_64::Format::RTTI_Type_Descriptor,
                             &icu_64::SimpleDateFormat::RTTI_Type_Descriptor,0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0xf8))(plVar7,param_3);
      return plVar6;
    }
    return plVar6;
  case 3:
    *param_4 = 1;
    local_48 = (longlong *)thunk_FUN_1424da030(0x2f8);
    if (local_48 != (longlong *)0x0) {
      FUN_142545940(local_48,0,param_1 + 0x148,param_6);
LAB_14260f2e9:
      plVar6 = local_48;
      if (0 < *param_6) {
        return local_48;
      }
      if (*(short *)(param_3 + 8) < 0) {
        iVar2 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_3 + 8) >> 5;
      }
      if (0 < iVar2) {
        local_260[0] = 0;
        (**(code **)(*local_48 + 0x170))(local_48,param_3,local_260);
        return plVar6;
      }
      return local_48;
    }
    break;
  case 4:
    *param_4 = 1;
    local_48 = (longlong *)thunk_FUN_1424da030(0x2f8);
    if (local_48 != (longlong *)0x0) {
      FUN_142545940(local_48,1,param_1 + 0x148,param_6);
      goto LAB_14260f2e9;
    }
    break;
  case 5:
    *param_4 = 1;
    local_48 = (longlong *)thunk_FUN_1424da030(0x2f8);
    if (local_48 != (longlong *)0x0) {
      FUN_142545940(local_48,2,param_1 + 0x148,param_6);
      goto LAB_14260f2e9;
    }
    break;
  default:
    *param_4 = 3;
    *param_6 = 1;
    return (longlong *)0x0;
  }
  *param_6 = 7;
  return (longlong *)0x0;
}



// FUNCTION 14260f580 Unwind@14260f580 body=54 status=ok
// SIG undefined Unwind@14260f580(void)

void Unwind_14260f580(undefined8 param_1,longlong param_2)

{
  FUN_142569480(param_2 + 0x1f8);
  return;
}



// FUNCTION 14260f5c0 Unwind@14260f5c0 body=51 status=ok
// SIG undefined Unwind@14260f5c0(void)

void Unwind_14260f5c0(undefined8 param_1,longlong param_2)

{
  FUN_1424ca310(param_2 + 0x30);
  return;
}



// FUNCTION 14260f600 Unwind@14260f600 body=54 status=ok
// SIG undefined Unwind@14260f600(void)

void Unwind_14260f600(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x3d0);
  return;
}



// FUNCTION 14260f640 Unwind@14260f640 body=54 status=ok
// SIG undefined Unwind@14260f640(void)

void Unwind_14260f640(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x410));
  return;
}



// FUNCTION 14260f680 Unwind@14260f680 body=54 status=ok
// SIG undefined Unwind@14260f680(void)

void Unwind_14260f680(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x410));
  return;
}



// FUNCTION 14260f6c0 Unwind@14260f6c0 body=54 status=ok
// SIG undefined Unwind@14260f6c0(void)

void Unwind_14260f6c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x410));
  return;
}



// FUNCTION 14260f700 Unwind@14260f700 body=54 status=ok
// SIG undefined Unwind@14260f700(void)

void Unwind_14260f700(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1f8);
  return;
}



// FUNCTION 14260f740 FUN_14260f740 body=353 status=ok
// SIG undefined FUN_14260f740(void)

ulonglong FUN_14260f740(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  size_t sVar5;
  wchar_t *_Str;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_170 [224];
  undefined1 local_90 [8];
  short local_88;
  int local_84;
  longlong local_48;
  longlong local_40;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  uVar1 = *(ushort *)(param_1 + 8);
  uVar6 = 0;
  if (0x1f < uVar1) {
    if ((short)uVar1 < 0) {
      local_34[0] = *(int *)(param_1 + 0xc);
    }
    else {
      local_34[0] = (int)(short)uVar1 >> 5;
    }
    if ((uVar1 & 0x11) == 0) {
      if ((uVar1 & 2) == 0) {
        param_1 = *(longlong *)(param_1 + 0x18);
      }
      else {
        param_1 = param_1 + 10;
      }
    }
    else {
      param_1 = 0;
    }
    uVar4 = FUN_1425cc960(param_1,local_34);
    FUN_1424a7060(local_90,0,uVar4,local_34[0]);
    uVar8 = 0;
    FUN_1412ae150(local_170,&DAT_149e02088,0,0,0);
    FUN_1424d6530(local_90,local_170);
    FUN_1414b3f60(local_170);
    _Str = (wchar_t *)*param_2;
    uVar6 = 0xffffffff;
    if (_Str != (wchar_t *)0x0) {
      uVar7 = 0;
      do {
        sVar5 = wcslen(_Str);
        iVar2 = local_84;
        if (-1 < local_88) {
          iVar2 = (int)local_88 >> 5;
        }
        local_40 = param_2[uVar7];
        uVar8 = uVar8 & 0xffffffff00000000;
        cVar3 = FUN_1424a7e30(local_90,0,iVar2,local_40,uVar8,(int)sVar5);
        local_48 = local_40;
        if (cVar3 == '\0') {
          uVar6 = uVar7 & 0xffffffff;
          break;
        }
        _Str = (wchar_t *)param_2[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (_Str != (wchar_t *)0x0);
    }
    FUN_140859a90(local_90);
  }
  return uVar6;
}



// FUNCTION 14260f8b0 Unwind@14260f8b0 body=43 status=ok
// SIG undefined Unwind@14260f8b0(void)

void Unwind_14260f8b0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x38);
  return;
}



// FUNCTION 14260f8e0 Unwind@14260f8e0 body=47 status=ok
// SIG undefined Unwind@14260f8e0(void)

void Unwind_14260f8e0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_2 + 0x168);
  return;
}



// FUNCTION 14260f910 Unwind@14260f910 body=46 status=ok
// SIG undefined Unwind@14260f910(void)

void Unwind_14260f910(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x118);
  return;
}



// FUNCTION 14260f940 FUN_14260f940 body=117 status=ok
// SIG undefined FUN_14260f940(void)

longlong FUN_14260f940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_140236d20(param_2,param_3);
  if (lVar1 != 0) {
    plVar2 = (longlong *)
             __RTDynamicCast(lVar1,0,&icu_64::NumberFormat::RTTI_Type_Descriptor,
                             &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0xe0))(plVar2,0);
      (**(code **)(*plVar2 + 0x208))(plVar2,0);
      (**(code **)(*plVar2 + 0xb0))(plVar2,1);
    }
  }
  return lVar1;
}



// FUNCTION 14260f9c0 FUN_14260f9c0 body=3 status=ok
// SIG undefined FUN_14260f9c0(void)

undefined1 FUN_14260f9c0(void)

{
  return 1;
}



// FUNCTION 14260f9d0 FUN_14260f9d0 body=89 status=ok
// SIG undefined FUN_14260f9d0(void)

undefined8 * FUN_14260f9d0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)thunk_FUN_1424da030(0x148);
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,0x148);
    FUN_142537a10(_Dst);
    *_Dst = icu_64::MessageFormat::DummyFormat::vftable;
  }
  return _Dst;
}



// FUNCTION 14260fa30 Unwind@14260fa30 body=32 status=ok
// SIG undefined Unwind@14260fa30(void)

void Unwind_14260fa30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14260fa50 FUN_14260fa50 body=18 status=ok
// SIG undefined FUN_14260fa50(void)

undefined8 FUN_14260fa50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  if (0 < *param_4) {
    return param_3;
  }
  *param_4 = 0x10;
  return param_3;
}



// FUNCTION 14260fa70 FUN_14260fa70 body=21 status=ok
// SIG undefined FUN_14260fa70(void)

undefined8
FUN_14260fa70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 14260fa90 FUN_14260fa90 body=21 status=ok
// SIG undefined FUN_14260fa90(void)

undefined8
FUN_14260fa90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  if (0 < *param_5) {
    return param_3;
  }
  *param_5 = 0x10;
  return param_3;
}



// FUNCTION 14260fab0 FUN_14260fab0 body=1 status=ok
// SIG undefined FUN_14260fab0(void)

void FUN_14260fab0(void)

{
  return;
}



// FUNCTION 14260fac0 FUN_14260fac0 body=39 status=ok
// SIG undefined FUN_14260fac0(void)

undefined8 FUN_14260fac0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 1) {
    if (*(int *)(param_1 + 0x78) < *(int *)(*(longlong *)(param_1 + 0x80) + 8)) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      uVar1 = FUN_142516630(*(longlong *)(param_1 + 0x80));
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 14260faf0 FUN_14260faf0 body=8 status=ok
// SIG undefined FUN_14260faf0(void)

void FUN_14260faf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 14260fb00 FUN_14260fb00 body=19 status=ok
// SIG undefined FUN_14260fb00(void)

undefined4 FUN_14260fb00(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 8);
  }
  return 0;
}



// FUNCTION 14260fb20 FUN_14260fb20 body=557 status=ok
// SIG undefined FUN_14260fb20(void)

undefined8
FUN_14260fb20(longlong param_1,undefined8 param_2,undefined4 *param_3,double param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  undefined1 local_98 [72];
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar4 = FUN_1412ad590(*(longlong *)(param_1 + 8) + 0x148,*(undefined4 *)(param_1 + 0x18),
                            param_5);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      if (0 < *param_5) goto LAB_14260fc6a;
    }
    uVar2 = FUN_14260e210(*(undefined8 *)(param_1 + 8),*param_3);
    iVar3 = FUN_14260e3d0(*(undefined8 *)(param_1 + 8),uVar2,*(undefined8 *)(param_3 + 2));
    param_3[0x22] = iVar3;
    if ((0 < iVar3) && (lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2e0), lVar6 != 0)) {
      uVar4 = FUN_142502740(lVar6,iVar3);
      *(undefined8 *)(param_3 + 0x24) = uVar4;
    }
    if (*(longlong *)(param_3 + 0x24) == 0) {
      lVar6 = *(longlong *)(param_1 + 8);
      puVar5 = *(undefined8 **)(lVar6 + 0x2d0);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_140236d20(lVar6 + 0x148,param_5);
        *(undefined8 **)(lVar6 + 0x2d0) = puVar5;
        if (*param_5 < 1) {
          if (puVar5 == (undefined8 *)0x0) {
            *param_5 = 7;
            puVar5 = *(undefined8 **)(lVar6 + 0x2d0);
          }
        }
        else {
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          *(undefined8 *)(lVar6 + 0x2d0) = 0;
          puVar5 = (undefined8 *)0x0;
        }
      }
      *(undefined8 **)(param_3 + 0x24) = puVar5;
      *(undefined1 *)(param_3 + 0x36) = 1;
    }
    puVar1 = param_3 + 4;
    dVar7 = (double)FUN_14252d270(puVar1,param_5);
    if ((dVar7 == param_4) && (!NAN(dVar7) && !NAN(param_4))) {
      FUN_142537ad0(*(undefined8 *)(param_3 + 0x24),puVar1,param_3 + 0x26,param_5);
      lVar6 = __RTDynamicCast(*(undefined8 *)(param_3 + 0x24),0,
                              &icu_64::Format::RTTI_Type_Descriptor,
                              &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
      if (lVar6 != 0) {
        FUN_142537d10(local_98);
        FUN_1424ca1d0(lVar6,puVar1,local_98,param_5);
        if (*param_5 < 1) {
          FUN_1424c1400(*(undefined8 *)(param_1 + 0x10),param_2,local_98);
        }
        else {
          FUN_1424a7060(param_2,0,L"other",5);
        }
        FUN_142537d50(local_98);
        return param_2;
      }
      FUN_1424c1440(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
      return param_2;
    }
    *param_5 = 5;
  }
LAB_14260fc6a:
  FUN_1424a7060(param_2,0,L"other",5);
  return param_2;
}



// FUNCTION 14260fd50 Unwind@14260fd50 body=61 status=ok
// SIG undefined Unwind@14260fd50(void)

void Unwind_14260fd50(undefined8 param_1,longlong param_2)

{
  FUN_142537d50(param_2 + 0x30);
  return;
}



// FUNCTION 14260fd90 FUN_14260fd90 body=38 status=ok
// SIG undefined FUN_14260fd90(void)

undefined8 FUN_14260fd90(undefined8 param_1,int param_2)

{
  FUN_14260b0f0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14260fdc0 FUN_14260fdc0 body=73 status=ok
// SIG undefined FUN_14260fdc0(void)

undefined8 * FUN_14260fdc0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::FormatNameEnumeration::vftable;
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14250a7a0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14260fe10 FUN_14260fe10 body=70 status=ok
// SIG undefined FUN_14260fe10(void)

undefined8 * FUN_14260fe10(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::MessageFormat::PluralSelectorProvider::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425fb4f0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14260fe60 FUN_14260fe60 body=38 status=ok
// SIG undefined FUN_14260fe60(void)

undefined8 FUN_14260fe60(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14260fe90 FUN_14260fe90 body=382 status=ok
// SIG undefined FUN_14260fe90(void)

longlong FUN_14260fe90(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    return param_1;
  }
  if ((uVar1 & 2) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    if ((short)uVar1 < 0) goto LAB_14260fed0;
LAB_14260feb8:
    uVar8 = (int)(short)uVar1 >> 5;
  }
  else {
    lVar7 = param_1 + 10;
    if (-1 < (short)uVar1) goto LAB_14260feb8;
LAB_14260fed0:
    uVar8 = *(uint *)(param_1 + 0xc);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  uVar9 = (ulonglong)uVar8;
  do {
    uVar10 = (uint)uVar9;
    uVar9 = (ulonglong)(uVar10 - 1);
    uVar1 = *(ushort *)(lVar7 + uVar9 * 2);
    uVar5 = (uint)uVar1;
    if ((uVar1 & 0xfc00) == 0xdc00) {
      if (uVar10 < 2) {
        uVar9 = 0;
      }
      else {
        uVar2 = *(ushort *)(lVar7 + (ulonglong)(uVar10 - 2) * 2);
        if ((uVar2 & 0xfc00) == 0xd800) {
          uVar5 = (uint)uVar1 + (uint)uVar2 * 0x400 + 0xfca02400;
          uVar9 = (ulonglong)(uVar10 - 2);
        }
      }
LAB_14260fee3:
      cVar3 = FUN_140665610(uVar5);
      if (cVar3 == '\0') break;
    }
    else if (uVar1 != 0x20) goto LAB_14260fee3;
    uVar10 = (uint)uVar9;
  } while (0 < (int)uVar10);
  if ((int)uVar10 < (int)uVar8) {
    if (0x3ff < (int)uVar10) {
      *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0xffe0;
      *(uint *)(param_1 + 0xc) = uVar10;
      goto LAB_14260ff7f;
    }
    *(ushort *)(param_1 + 8) = (ushort)(uVar10 << 5) | *(ushort *)(param_1 + 8) & 0x1f;
  }
  if ((int)uVar10 < 1) {
    return param_1;
  }
LAB_14260ff7f:
  uVar8 = 0;
  do {
    uVar5 = uVar8 + 1;
    uVar1 = *(ushort *)(lVar7 + (longlong)(int)uVar8 * 2);
    uVar6 = (uint)uVar1;
    if (((uVar1 & 0xfc00) == 0xd800) && (uVar5 != uVar10)) {
      uVar4 = (uint)*(ushort *)(lVar7 + (longlong)(int)uVar5 * 2);
      if ((uVar4 & 0xfc00) == 0xdc00) {
        uVar5 = uVar8 + 2;
        uVar6 = (uint)uVar1 * 0x400 + uVar4 + 0xfca02400;
      }
LAB_14260ff90:
      cVar3 = FUN_140665610(uVar6);
      if (cVar3 == '\0') break;
    }
    else if (uVar1 != 0x20) goto LAB_14260ff90;
    uVar8 = uVar5;
  } while ((int)uVar8 < (int)uVar10);
  if (0 < (int)uVar8) {
    FUN_1424a9130(param_1,0,uVar8,0,0,0);
  }
  return param_1;
}



// FUNCTION 142610030 FUN_142610030 body=470 status=ok
// SIG undefined FUN_142610030(void)

longlong * FUN_142610030(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_78 [16];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    local_38 = lVar1;
    FUN_1424a7060(local_78,1,L"[-,./[:whitespace:]]",0x14);
    lVar1 = local_38;
    FUN_1425c5b90(local_38,local_78,param_2);
    *param_1 = lVar1;
    FUN_140859a90(local_78);
  }
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    local_38 = lVar1;
    FUN_1424a7060(local_78,1,L"[-.:[:whitespace:]]",0x13);
    lVar1 = local_38;
    FUN_1425c5b90(local_38,local_78,param_2);
    param_1[1] = lVar1;
    FUN_140859a90(local_78);
  }
  lVar1 = thunk_FUN_1424da030(200);
  if (lVar1 == 0) {
    param_1[2] = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) goto LAB_142610199;
  }
  else {
    local_38 = lVar1;
    FUN_1424a7060(local_78,1,L"[:whitespace:]",0xe);
    lVar1 = local_38;
    FUN_1425c5b90(local_38,local_78,param_2);
    param_1[2] = lVar1;
    FUN_140859a90(local_78);
    lVar1 = *param_1;
    lVar2 = param_1[1];
    if (((lVar1 != 0) && (lVar2 != 0)) && (param_1[2] != 0)) {
      FUN_1425151b0(lVar1);
      FUN_1425151b0(param_1[1]);
      FUN_1425151b0(param_1[2]);
      return param_1;
    }
    if (lVar1 == 0) goto LAB_1426101ad;
LAB_142610199:
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  lVar2 = param_1[1];
LAB_1426101ad:
  *param_1 = 0;
  if (lVar2 != 0) {
    FUN_1425121d0(lVar2);
    FUN_1401773f0(lVar2);
  }
  param_1[1] = 0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[2] = 0;
  *param_2 = 7;
  return param_1;
}



// FUNCTION 142610210 Unwind@142610210 body=40 status=ok
// SIG undefined Unwind@142610210(void)

void Unwind_142610210(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142610240 Unwind@142610240 body=40 status=ok
// SIG undefined Unwind@142610240(void)

void Unwind_142610240(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 142610270 Unwind@142610270 body=40 status=ok
// SIG undefined Unwind@142610270(void)

void Unwind_142610270(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1426102a0 Unwind@1426102a0 body=40 status=ok
// SIG undefined Unwind@1426102a0(void)

void Unwind_1426102a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 1426102d0 Unwind@1426102d0 body=40 status=ok
// SIG undefined Unwind@1426102d0(void)

void Unwind_1426102d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142610300 Unwind@142610300 body=40 status=ok
// SIG undefined Unwind@142610300(void)

void Unwind_142610300(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 142610330 FUN_142610330 body=113 status=ok
// SIG undefined FUN_142610330(void)

void FUN_142610330(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  *param_1 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[1] = 0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    FUN_1425121d0(lVar1);
    FUN_1401773f0(lVar1);
  }
  param_1[2] = 0;
  return;
}



// FUNCTION 1426103b0 FUN_1426103b0 body=257 status=ok
// SIG undefined FUN_1426103b0(void)

undefined8 FUN_1426103b0(uint param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  local_1c[0] = 0;
  if ((DAT_14c7fc3d0 == 2) || (cVar1 = FUN_142501800(&DAT_14c7fc3d0), cVar1 == '\0')) {
    if (0 < DAT_14c7fc3d4) {
      return 0;
    }
    if (0 < local_1c[0]) {
      return 0;
    }
  }
  else {
    FUN_14251f960(0x18,FUN_1426104e0);
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      DAT_14c7fc3c8 = (undefined8 *)0x0;
      local_1c[0] = 7;
    }
    else {
      FUN_142610030(puVar2,local_1c);
      DAT_14c7fc3c8 = puVar2;
    }
    DAT_14c7fc3d4 = local_1c[0];
    FUN_1425019c0(&DAT_14c7fc3d0);
    if (0 < local_1c[0]) {
      return 0;
    }
  }
  if (param_1 < 0x1b) {
    if ((0x180f0U >> (param_1 & 0x1f) & 1) != 0) {
      puVar2 = DAT_14c7fc3c8 + 1;
      goto LAB_14261049a;
    }
    puVar2 = DAT_14c7fc3c8;
    if ((0x600000eU >> (param_1 & 0x1f) & 1) != 0) goto LAB_14261049a;
  }
  puVar2 = DAT_14c7fc3c8 + 2;
LAB_14261049a:
  return *puVar2;
}



// FUNCTION 1426104c0 Unwind@1426104c0 body=32 status=ok
// SIG undefined Unwind@1426104c0(void)

void Unwind_1426104c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1426104e0 FUN_1426104e0 body=60 status=ok
// SIG undefined FUN_1426104e0(void)

undefined8 FUN_1426104e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_14c7fc3c8;
  if (DAT_14c7fc3c8 != 0) {
    FUN_142610330(DAT_14c7fc3c8);
    FUN_1401773f0(lVar1);
  }
  uVar2 = DAT_14c7fc3d0;
  DAT_14c7fc3c8 = 0;
  LOCK();
  DAT_14c7fc3d0 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 142610520 thunk_FUN_14257c350 body=5 status=ok
// SIG undefined thunk_FUN_14257c350(void)

void thunk_FUN_14257c350(void)

{
  return;
}



// FUNCTION 142610530 FUN_142610530 body=105 status=ok
// SIG undefined FUN_142610530(void)

void FUN_142610530(longlong *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (void *)0x0) && (0 < (int)param_3)) {
    uVar1 = *(uint *)(param_1 + 3);
    if (0 < (int)uVar1) {
      iVar3 = uVar1 - param_3;
      iVar2 = 0;
      if (0 < iVar3) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 3) = iVar2;
      if (-1 < iVar3) {
        return;
      }
      param_2 = (void *)((longlong)param_2 + (ulonglong)uVar1);
      param_3 = -iVar3;
    }
    iVar2 = *(int *)((longlong)param_1 + 0x14);
    *(uint *)((longlong)param_1 + 0x14) = iVar2 + param_3;
    if ((void *)((longlong)iVar2 + param_1[1]) != param_2) {
      if ((int)param_3 <= (int)param_1[2] - iVar2) {
        memcpy((void *)((longlong)iVar2 + param_1[1]),param_2,(ulonglong)param_3);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014261058a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x20))();
      return;
    }
  }
  return;
}



// FUNCTION 1426105a0 FUN_1426105a0 body=115 status=ok
// SIG undefined FUN_1426105a0(void)

longlong FUN_1426105a0(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,int param_5
                      ,int *param_6)

{
  char cVar1;
  int iVar2;
  
  if ((param_2 < 1) || (param_5 < param_2)) {
    *param_6 = 0;
    return 0;
  }
  if ((int)param_1[3] < 1) {
    iVar2 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x14);
    if (iVar2 < param_2) {
      cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,*(int *)((longlong)param_1 + 0x14));
      if (cVar1 == '\0') goto LAB_1426105c5;
      *param_6 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x14);
    }
    else {
      *param_6 = iVar2;
    }
    param_4 = (longlong)*(int *)((longlong)param_1 + 0x14) + param_1[1];
  }
  else {
LAB_1426105c5:
    *param_6 = param_5;
  }
  return param_4;
}



// FUNCTION 142610620 FUN_142610620 body=1 status=ok
// SIG undefined FUN_142610620(void)

void FUN_142610620(void)

{
  return;
}



// FUNCTION 142610630 FUN_142610630 body=3 status=ok
// SIG undefined FUN_142610630(void)

undefined1 FUN_142610630(void)

{
  return 1;
}



// FUNCTION 142610640 FUN_142610640 body=9249 status=ok
// SIG undefined FUN_142610640(void)

void FUN_142610640(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,byte param_5
                  ,longlong *param_6,char param_7,int *param_8)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  ulonglong uVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  undefined1 uVar22;
  uint uVar23;
  byte bVar24;
  bool bVar25;
  int local_1a0;
  undefined1 *local_190;
  int local_188;
  undefined1 local_183 [43];
  int local_158;
  byte local_154;
  undefined1 local_14f;
  char local_14e;
  char local_14d;
  uint local_14c;
  undefined1 *local_148;
  int local_140;
  char local_13c;
  undefined1 local_13b [43];
  int local_110;
  byte local_10c;
  undefined1 *local_108;
  int local_100;
  char local_fc;
  undefined1 local_fb [43];
  int local_d0;
  byte local_cc;
  ulonglong local_c8;
  undefined1 *local_c0;
  int local_b8;
  char local_b4;
  undefined1 local_b3 [43];
  int local_88;
  byte local_84;
  uint local_80;
  int local_7c;
  longlong local_78;
  int local_6c;
  longlong *local_68;
  uint local_5c;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_8) {
    return;
  }
  local_14c = *(uint *)(param_3 + 0x18);
  uVar21 = (local_14c >> 7 & 8 | *(uint *)(&DAT_149c4ef30 + (longlong)((int)local_14c >> 0xc) * 4))
           >> (param_5 & 0x1f);
  param_5 = param_5 & 0x1f;
  local_5c = uVar21 << param_5;
  if (uVar21 << param_5 == 0) {
    return;
  }
  uVar21 = *(int *)(param_3 + 0x1c) + 1;
  if ((local_14c & 0xc) == 0) {
    uVar21 = 0;
  }
  uVar23 = local_14c & 0x600;
  uVar13 = 0x3f3f;
  if (uVar23 == 0x200) {
    uVar13 = 0xff3f;
  }
  local_190 = local_183;
  local_188 = 0x28;
  bVar2 = false;
  local_158 = 0;
  local_154 = 1;
  local_148 = local_13b;
  local_140 = 0x28;
  local_13c = '\0';
  local_110 = 0;
  local_10c = 1;
  local_c0 = local_b3;
  local_b8 = 0x28;
  local_b4 = '\0';
  local_88 = 0;
  local_84 = 1;
  local_108 = local_fb;
  local_100 = 0x28;
  local_fc = '\0';
  local_d0 = 0;
  local_cc = 1;
  local_1a0 = 0;
  uVar15 = 0;
  iVar20 = 0;
  local_7c = 0;
  local_80 = 0;
  local_6c = 0;
  local_4c = 0 << param_5;
  local_78 = param_3;
  local_68 = param_4;
  do {
    local_58 = (undefined1 *)(ulonglong)local_80;
    do {
      if (*(int *)(param_1 + 0x170) == *(int *)(param_1 + 0x18)) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x170) = 0;
      }
      local_c8 = FUN_14255e910(param_1,param_8);
      uVar18 = local_c8 >> 0x20;
      uVar5 = (uint)(local_c8 >> 0x20);
      if ((uVar5 < uVar21) && (0x2000000 < uVar5)) {
        param_3 = local_78;
        if (iVar20 != 0) {
          if (iVar20 < 0x72) {
            cVar19 = (char)iVar20 + -1;
          }
          else {
            iVar20 = iVar20 + 0x70;
            do {
              iVar14 = iVar20;
              iVar20 = local_d0;
              if (local_d0 < local_100) {
LAB_142610894:
                local_108[local_d0] = 0x8c;
                local_d0 = local_d0 + 1;
              }
              else if (local_cc != 0) {
                iVar6 = local_100 * 2;
                if (local_100 * 2 <= local_d0 + 2) {
                  iVar6 = local_d0 + 2;
                }
                if (iVar6 < 0xc9) {
                  iVar6 = 200;
                }
                puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                if (puVar10 != (undefined1 *)0x0) {
                  if (0 < iVar20) {
                    if (local_100 < iVar20) {
                      iVar20 = local_100;
                    }
                    if (iVar6 <= iVar20) {
                      iVar20 = iVar6;
                    }
                    memcpy(puVar10,local_108,(longlong)iVar20);
                  }
                  if (local_fc != '\0') {
                    FUN_1424da110(local_108);
                  }
                  local_fc = '\x01';
                  local_108 = puVar10;
                  local_100 = iVar6;
                  goto LAB_142610894;
                }
                local_cc = 0;
              }
              iVar20 = iVar14 + -0x71;
            } while (0xe1 < iVar20);
            cVar19 = (char)iVar14 + '\x1e';
          }
          iVar20 = local_d0;
          if (local_d0 < local_100) {
LAB_1426109fa:
            local_108[local_d0] = cVar19 + '\x1c';
            local_d0 = local_d0 + 1;
            param_3 = local_78;
          }
          else {
            param_3 = local_78;
            if (local_cc != 0) {
              iVar14 = local_100 * 2;
              if (local_100 * 2 <= local_d0 + 2) {
                iVar14 = local_d0 + 2;
              }
              if (iVar14 < 0xc9) {
                iVar14 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar14);
              if (puVar10 != (undefined1 *)0x0) {
                if (0 < iVar20) {
                  if (local_100 < iVar20) {
                    iVar20 = local_100;
                  }
                  if (iVar14 <= iVar20) {
                    iVar20 = iVar14;
                  }
                  memcpy(puVar10,local_108,(longlong)iVar20);
                }
                if (local_fc != '\0') {
                  FUN_1424da110(local_108);
                }
                local_fc = '\x01';
                local_108 = puVar10;
                local_100 = iVar14;
                goto LAB_1426109fa;
              }
              local_cc = 0;
              param_3 = local_78;
            }
          }
        }
        do {
          if ((local_5c & 0x20) != 0) {
            if (*(longlong *)(param_3 + 0x20) == 0) {
LAB_142610a54:
              if ((uint)uVar18 < 0x1b000000) goto LAB_142610b1e;
LAB_142610a7b:
              iVar20 = local_d0;
              if (local_d0 < local_100) {
LAB_142610b0d:
                local_108[local_d0] = 0x1b;
                local_d0 = local_d0 + 1;
                goto LAB_142610b1e;
              }
              if (local_cc == 0) goto LAB_142610b1e;
              iVar14 = local_100 * 2;
              if (local_100 * 2 <= local_d0 + 2) {
                iVar14 = local_d0 + 2;
              }
              if (iVar14 < 0xc9) {
                iVar14 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar14);
              if (puVar10 != (undefined1 *)0x0) {
                if (0 < iVar20) {
                  if (local_100 < iVar20) {
                    iVar20 = local_100;
                  }
                  if (iVar14 <= iVar20) {
                    iVar20 = iVar14;
                  }
                  memcpy(puVar10,local_108,(longlong)iVar20);
                }
                if (local_fc != '\0') {
                  FUN_1424da110(local_108);
                }
                local_fc = '\x01';
                local_108 = puVar10;
                local_100 = iVar14;
                goto LAB_142610b0d;
              }
              local_cc = 0;
              if ((uVar18 & 0xff0000) == 0) goto LAB_142610b51;
LAB_142610b26:
              if ((uVar18 & 0xff00) == 0) {
                iVar20 = 2;
              }
              else {
                iVar20 = 4 - (uint)((char)uVar18 == '\0');
              }
            }
            else {
              bVar17 = *(byte *)(*(longlong *)(param_3 + 0x20) + (uVar18 >> 0x18));
              if ((1 < (uint)uVar18) && (bVar17 == 0)) {
                uVar5 = FUN_1426138b0(param_3,uVar18);
                uVar18 = (ulonglong)uVar5;
                goto LAB_142610a54;
              }
              uVar5 = (uint)uVar18 & 0xffffff | (uint)bVar17 << 0x18;
              uVar18 = (ulonglong)uVar5;
              if (0x1affffff < uVar5) goto LAB_142610a7b;
LAB_142610b1e:
              if ((uVar18 & 0xff0000) != 0) goto LAB_142610b26;
LAB_142610b51:
              iVar20 = 1;
            }
            iVar14 = local_d0;
            if (local_100 < local_d0 + iVar20) {
              if (local_cc != 0) {
                iVar6 = local_d0 + iVar20 * 2;
                iVar20 = local_100 * 2;
                if (local_100 * 2 <= iVar6) {
                  iVar20 = iVar6;
                }
                if (iVar20 < 0xc9) {
                  iVar20 = 200;
                }
                puVar10 = (undefined1 *)FUN_1424da030(iVar20);
                if (puVar10 != (undefined1 *)0x0) {
                  if (0 < iVar14) {
                    if (local_100 < iVar14) {
                      iVar14 = local_100;
                    }
                    if (iVar20 <= iVar14) {
                      iVar14 = iVar20;
                    }
                    memcpy(puVar10,local_108,(longlong)iVar14);
                  }
                  if (local_fc != '\0') {
                    FUN_1424da110(local_108);
                  }
                  local_fc = '\x01';
                  local_108 = puVar10;
                  local_100 = iVar20;
                  iVar14 = local_d0;
                  goto LAB_142610bf4;
                }
                local_cc = 0;
              }
            }
            else {
LAB_142610bf4:
              local_108[iVar14] = (char)(uVar18 >> 0x18);
              local_d0 = iVar14 + 1;
              if ((uVar18 & 0xff0000) != 0) {
                local_108[iVar14 + 1] = (char)(uVar18 >> 0x10);
                local_d0 = iVar14 + 2;
                if ((uVar18 & 0xff00) != 0) {
                  local_108[iVar14 + 2] = (char)(uVar18 >> 8);
                  local_d0 = iVar14 + 3;
                  if ((char)uVar18 != '\0') {
                    local_108[iVar14 + 3] = (char)uVar18;
                    local_d0 = iVar14 + 4;
                  }
                }
              }
            }
          }
          do {
            uVar11 = FUN_14255e910(param_1,param_8);
            uVar18 = uVar11 >> 0x20;
          } while (uVar18 == 0);
          iVar20 = 0;
          uVar5 = (uint)(uVar11 >> 0x20);
          local_c8 = uVar11;
        } while ((uVar5 < uVar21) && (0x2000000 < uVar5));
      }
      uVar5 = (uint)uVar18;
      if (((local_5c & 2) != 0) && (1 < uVar5)) {
        cVar19 = *(char *)(param_2 + (uVar18 >> 0x18));
        if (*(longlong *)(param_3 + 0x20) != 0) {
          bVar17 = *(byte *)(*(longlong *)(param_3 + 0x20) + (uVar18 >> 0x18));
          if (bVar17 == 0) {
            uVar5 = FUN_1426138b0(param_3,uVar18);
            uVar18 = (ulonglong)uVar5;
          }
          else {
            uVar18 = (ulonglong)(uVar5 & 0xffffff | (uint)bVar17 << 0x18);
          }
        }
        uVar5 = (uint)uVar18;
        if ((cVar19 == '\0') || ((uint)(uVar18 >> 0x18) != local_4c >> 0x18)) {
          if (local_4c == 0) {
LAB_142610e2d:
            iVar14 = (int)local_68[3];
            if (0 < iVar14) goto LAB_142610e3f;
LAB_142610dae:
            iVar14 = *(int *)((longlong)local_68 + 0x14);
            if (iVar14 < (int)local_68[2]) {
LAB_142610dd9:
              *(char *)(local_68[1] + (longlong)iVar14) = (char)(uVar18 >> 0x18);
            }
            else {
              cVar3 = (**(code **)(*local_68 + 0x28))(local_68,1);
              if (cVar3 != '\0') {
                iVar14 = *(int *)((longlong)local_68 + 0x14);
                goto LAB_142610dd9;
              }
            }
            *(int *)((longlong)local_68 + 0x14) = *(int *)((longlong)local_68 + 0x14) + 1;
          }
          else {
            if (uVar5 < local_4c) {
              if (uVar5 < 0x3000000) goto LAB_142610e2d;
              iVar14 = (int)local_68[3];
              if (iVar14 < 1) {
                iVar14 = *(int *)((longlong)local_68 + 0x14);
                uVar22 = 3;
                if ((int)local_68[2] <= iVar14) {
                  cVar3 = (**(code **)(*local_68 + 0x28))(local_68,1);
                  if (cVar3 == '\0') goto LAB_142610e2a;
                  iVar14 = *(int *)((longlong)local_68 + 0x14);
                  uVar22 = 3;
                }
                goto LAB_142610e1f;
              }
            }
            else {
              iVar14 = (int)local_68[3];
              if (iVar14 < 1) {
                iVar14 = *(int *)((longlong)local_68 + 0x14);
                uVar22 = 0xff;
                if (iVar14 < (int)local_68[2]) {
LAB_142610e1f:
                  *(undefined1 *)(local_68[1] + (longlong)iVar14) = uVar22;
                }
                else {
                  cVar3 = (**(code **)(*local_68 + 0x28))(local_68,1);
                  if (cVar3 != '\0') {
                    iVar14 = *(int *)((longlong)local_68 + 0x14);
                    uVar22 = 0xff;
                    goto LAB_142610e1f;
                  }
                }
LAB_142610e2a:
                *(int *)((longlong)local_68 + 0x14) = *(int *)((longlong)local_68 + 0x14) + 1;
                goto LAB_142610e2d;
              }
            }
            iVar14 = iVar14 + -1;
            *(int *)(local_68 + 3) = iVar14;
            if (iVar14 < 1) goto LAB_142610dae;
LAB_142610e3f:
            *(int *)(local_68 + 3) = iVar14 + -1;
          }
          local_4c = 0;
          if (cVar19 != '\0') {
            local_4c = uVar5;
          }
        }
        if ((uVar18 & 0xff0000) != 0) {
          local_14f = (undefined1)(uVar18 >> 0x10);
          local_14e = (char)(uVar18 >> 8);
          local_14d = (char)uVar18;
          iVar14 = 3 - (uint)(local_14d == '\0');
          if (local_14e == '\0') {
            iVar14 = 1;
          }
          (**(code **)(*local_68 + 8))(local_68,&local_14f,iVar14);
        }
        if ((param_7 == '\0') && ((int)local_68[2] < *(int *)((longlong)local_68 + 0x14))) {
          if (*param_8 < 1) goto LAB_14261287e;
          goto LAB_142612892;
        }
      }
      iVar14 = local_110;
    } while ((uint)local_c8 == 0);
    uVar7 = (uint)local_58;
    if (((local_5c & 4) != 0) && (0xffff < (uint)local_c8)) {
      uVar8 = (uint)(local_c8 >> 0x10);
      uVar16 = uVar8 & 0xffff;
      if ((uVar16 == 0x500) && ((local_14c & 0x800) == 0 || uVar5 != 0x2000000)) {
        uVar7 = uVar7 + 1;
      }
      else {
        uVar22 = (undefined1)uVar16;
        if ((local_14c & 0x800) == 0) {
          if (uVar7 != 0) {
            if ((int)uVar7 < 0x22) {
              iVar14 = uVar7 - 1;
            }
            else {
              uVar7 = uVar7 + 0x20;
              do {
                iVar14 = local_110;
                puVar10 = (undefined1 *)(ulonglong)uVar7;
                if (local_110 < local_140) {
LAB_14261126b:
                  local_58 = puVar10;
                  local_148[local_110] = 0x25;
                  local_110 = local_110 + 1;
LAB_14261127a:
                  uVar8 = (uint)local_58;
                }
                else {
                  uVar8 = uVar7;
                  if (local_10c != 0) {
                    iVar6 = local_140 * 2;
                    if (local_140 * 2 <= local_110 + 2) {
                      iVar6 = local_110 + 2;
                    }
                    if (iVar6 < 0xc9) {
                      iVar6 = 200;
                    }
                    local_58 = (undefined1 *)(ulonglong)uVar7;
                    puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                    if (puVar10 != (undefined1 *)0x0) {
                      if (0 < iVar14) {
                        if (local_140 < iVar14) {
                          iVar14 = local_140;
                        }
                        if (iVar6 <= iVar14) {
                          iVar14 = iVar6;
                        }
                        memcpy(puVar10,local_148,(longlong)iVar14);
                      }
                      if (local_13c != '\0') {
                        FUN_1424da110(local_148);
                      }
                      local_13c = '\x01';
                      local_148 = puVar10;
                      local_140 = iVar6;
                      puVar10 = local_58;
                      goto LAB_14261126b;
                    }
                    local_10c = 0;
                    goto LAB_14261127a;
                  }
                }
                uVar7 = uVar8 - 0x21;
              } while (0x41 < (int)uVar7);
              iVar14 = uVar8 - 0x42;
            }
            iVar6 = local_110;
            uVar7 = iVar14 + 5;
            if (0x4ffffff < (uint)local_c8) {
              uVar7 = 0x45 - iVar14;
            }
            puVar10 = (undefined1 *)(ulonglong)uVar7;
            if (local_110 < local_140) {
LAB_142611d7f:
              local_58 = puVar10;
              local_148[local_110] = (char)local_58;
              local_110 = local_110 + 1;
            }
            else if (local_10c != 0) {
              iVar14 = local_140 * 2;
              if (local_140 * 2 <= local_110 + 2) {
                iVar14 = local_110 + 2;
              }
              if (iVar14 < 0xc9) {
                iVar14 = 200;
              }
              local_58 = (undefined1 *)(ulonglong)uVar7;
              puVar10 = (undefined1 *)FUN_1424da030(iVar14);
              if (puVar10 != (undefined1 *)0x0) {
                if (0 < iVar6) {
                  if (local_140 < iVar6) {
                    iVar6 = local_140;
                  }
                  if (iVar14 <= iVar6) {
                    iVar6 = iVar14;
                  }
                  memcpy(puVar10,local_148,(longlong)iVar6);
                }
                if (local_13c != '\0') {
                  FUN_1424da110(local_148);
                }
                local_13c = '\x01';
                local_148 = puVar10;
                local_140 = iVar14;
                puVar10 = local_58;
                goto LAB_142611d7f;
              }
              local_10c = 0;
            }
          }
          param_3 = local_78;
          iVar14 = local_110;
          iVar6 = 2 - (uint)((local_c8 & 0xff0000) == 0);
          if (local_140 < local_110 + iVar6) {
            local_80 = 0;
            uVar7 = local_80;
            if (local_10c != 0) {
              iVar9 = local_110 + iVar6 * 2;
              iVar6 = local_140 * 2;
              if (local_140 * 2 <= iVar9) {
                iVar6 = iVar9;
              }
              if (iVar6 < 0xc9) {
                iVar6 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar6);
              if (puVar10 != (undefined1 *)0x0) {
                local_58 = puVar10;
                if (0 < iVar14) {
                  if (local_140 < iVar14) {
                    iVar14 = local_140;
                  }
                  if (iVar6 <= iVar14) {
                    iVar14 = iVar6;
                  }
                  memcpy(puVar10,local_148,(longlong)iVar14);
                }
                if (local_13c != '\0') {
                  FUN_1424da110(local_148);
                }
                local_148 = local_58;
                local_13c = '\x01';
                local_140 = iVar6;
                iVar14 = local_110;
                goto LAB_142611e6d;
              }
              local_10c = 0;
              uVar7 = local_80;
            }
          }
          else {
LAB_142611e6d:
            local_80 = 0;
            local_148[iVar14] = (char)(local_c8 >> 0x18);
            local_110 = iVar14 + 1;
            uVar7 = local_80;
            if ((local_c8 & 0xff0000) != 0) {
              local_148[iVar14 + 1] = uVar22;
              local_110 = iVar14 + 2;
            }
          }
        }
        else {
          if (uVar7 == 0) {
            uVar15 = 0;
          }
          else {
            local_80 = uVar7 - 1;
            iVar6 = (int)local_80 % 0x21;
            cVar19 = 'E' - (char)iVar6;
            if (uVar15 < 0x500) {
              cVar19 = (char)iVar6 + '\x05';
            }
            if (local_110 < local_140) {
LAB_1426118a2:
              local_148[local_110] = cVar19;
              local_110 = local_110 + 1;
            }
            else if (local_10c != 0) {
              iVar9 = local_140 * 2;
              if (local_140 * 2 <= local_110 + 2) {
                iVar9 = local_110 + 2;
              }
              if (iVar9 < 0xc9) {
                iVar9 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar9);
              if (puVar10 != (undefined1 *)0x0) {
                if (0 < iVar14) {
                  if (local_140 < iVar14) {
                    iVar14 = local_140;
                  }
                  if (iVar9 <= iVar14) {
                    iVar14 = iVar9;
                  }
                  memcpy(puVar10,local_148,(longlong)iVar14);
                }
                if (local_13c != '\0') {
                  FUN_1424da110(local_148);
                }
                local_13c = '\x01';
                local_148 = puVar10;
                local_140 = iVar9;
                goto LAB_1426118a2;
              }
              local_10c = 0;
            }
            uVar15 = local_80 - iVar6;
            if (uVar15 != 0 && iVar6 <= (int)local_80) {
              uVar7 = ((int)local_58 - iVar6) + 0x20;
              do {
                iVar14 = local_110;
                puVar10 = (undefined1 *)(ulonglong)uVar7;
                if (local_110 < local_140) {
LAB_1426118db:
                  local_58 = puVar10;
                  local_148[local_110] = 0x25;
                  local_110 = local_110 + 1;
LAB_1426118ea:
                  uVar15 = (uint)local_58;
                }
                else {
                  uVar15 = uVar7;
                  if (local_10c != 0) {
                    iVar6 = local_140 * 2;
                    if (local_140 * 2 <= local_110 + 2) {
                      iVar6 = local_110 + 2;
                    }
                    if (iVar6 < 0xc9) {
                      iVar6 = 200;
                    }
                    local_58 = (undefined1 *)(ulonglong)uVar7;
                    puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                    if (puVar10 != (undefined1 *)0x0) {
                      if (0 < iVar14) {
                        if (local_140 < iVar14) {
                          iVar14 = local_140;
                        }
                        if (iVar6 <= iVar14) {
                          iVar14 = iVar6;
                        }
                        memcpy(puVar10,local_148,(longlong)iVar14);
                      }
                      if (local_13c != '\0') {
                        FUN_1424da110(local_148);
                      }
                      local_13c = '\x01';
                      local_148 = puVar10;
                      local_140 = iVar6;
                      puVar10 = local_58;
                      goto LAB_1426118db;
                    }
                    local_10c = 0;
                    goto LAB_1426118ea;
                  }
                }
                uVar7 = uVar15 - 0x21;
              } while (0x21 < (int)uVar7);
              uVar15 = uVar15 - 0x42;
            }
          }
          param_3 = local_78;
          iVar14 = local_110;
          local_80 = uVar15;
          if (uVar5 - 1 < 0x2000000) {
            if (local_1a0 < local_110 + -1) {
              puVar12 = local_148 + local_1a0;
              puVar10 = local_148 + (longlong)local_110 + -2;
              do {
                uVar22 = *puVar12;
                *puVar12 = puVar10[1];
                puVar12 = puVar12 + 1;
                puVar10[1] = uVar22;
                bVar25 = puVar12 < puVar10;
                puVar10 = puVar10 + -1;
              } while (bVar25);
            }
            if (local_110 < local_140) {
LAB_1426122aa:
              local_148[local_110] = '\x02' - (uVar5 == 1);
              local_110 = local_110 + 1;
            }
            else if (local_10c != 0) {
              iVar6 = local_140 * 2;
              if (local_140 * 2 <= local_110 + 2) {
                iVar6 = local_110 + 2;
              }
              if (iVar6 < 0xc9) {
                iVar6 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar6);
              if (puVar10 != (undefined1 *)0x0) {
                local_58 = puVar10;
                if (0 < iVar14) {
                  if (local_140 < iVar14) {
                    iVar14 = local_140;
                  }
                  if (iVar6 <= iVar14) {
                    iVar14 = iVar6;
                  }
                  memcpy(puVar10,local_148,(longlong)iVar14);
                }
                if (local_13c != '\0') {
                  FUN_1424da110(local_148);
                }
                local_148 = local_58;
                local_13c = '\x01';
                local_140 = iVar6;
                goto LAB_1426122aa;
              }
              local_10c = 0;
            }
            uVar15 = 0;
            local_1a0 = local_110;
            uVar7 = local_80;
          }
          else {
            iVar6 = 2 - (uint)((local_c8 & 0xff0000) == 0);
            if (local_140 < local_110 + iVar6) {
              if (local_10c != 0) {
                iVar6 = local_110 + iVar6 * 2;
                iVar9 = local_140 * 2;
                if (local_140 * 2 <= iVar6) {
                  iVar9 = iVar6;
                }
                if (iVar9 < 0xc9) {
                  iVar9 = 200;
                }
                puVar10 = (undefined1 *)FUN_1424da030(iVar9);
                if (puVar10 != (undefined1 *)0x0) {
                  if (0 < iVar14) {
                    if (local_140 < iVar14) {
                      iVar14 = local_140;
                    }
                    if (iVar9 <= iVar14) {
                      iVar14 = iVar9;
                    }
                    memcpy(puVar10,local_148,(longlong)iVar14);
                  }
                  if (local_13c != '\0') {
                    FUN_1424da110(local_148);
                  }
                  local_13c = '\x01';
                  local_148 = puVar10;
                  local_140 = iVar9;
                  goto LAB_142611ab2;
                }
                local_10c = 0;
              }
            }
            else {
LAB_142611ab2:
              uVar4 = (undefined1)(local_c8 >> 0x18);
              if ((local_c8 & 0xff0000) == 0) {
                local_148[local_110] = uVar4;
                local_110 = local_110 + 1;
              }
              else {
                local_148[local_110] = uVar22;
                local_148[(longlong)local_110 + 1] = uVar4;
                local_110 = local_110 + 2;
              }
            }
            uVar15 = uVar8 & 0xffff;
            param_3 = local_78;
            uVar7 = local_80;
          }
        }
      }
    }
    local_80 = uVar7;
    puVar10 = local_58;
    if ((local_5c & 8) != 0) {
      if (local_14c < 0x1000) {
        if (uVar5 != 0) {
LAB_142610fdd:
          uVar5 = (uint)(local_c8 >> 8);
          if (((local_c8 & 0xc000) == 0) && (1 < (uVar5 & 0xff))) {
            local_6c = local_6c + 1;
          }
          else {
            local_58 = (undefined1 *)(CONCAT44(local_58._4_4_,uVar5) & 0xffffffff000000ff);
            if ((local_14c & 0x100) == 0) {
              if (local_6c == 0) goto LAB_1426123a4;
              if ((1 < (uint)local_58) || (iVar14 = 0, local_158 != 0)) {
                if (local_6c < 8) {
                  iVar14 = local_6c + -1;
                }
                else {
                  iVar6 = local_6c + 6;
                  do {
                    iVar14 = iVar6;
                    iVar6 = local_158;
                    if (local_158 < local_188) {
LAB_142611184:
                      local_190[local_158] = 0x70;
                      local_158 = local_158 + 1;
                    }
                    else if (local_154 != 0) {
                      iVar9 = local_188 * 2;
                      if (local_188 * 2 <= local_158 + 2) {
                        iVar9 = local_158 + 2;
                      }
                      if (iVar9 < 0xc9) {
                        iVar9 = 200;
                      }
                      puVar10 = (undefined1 *)FUN_1424da030(iVar9);
                      if (puVar10 != (undefined1 *)0x0) {
                        if (0 < iVar6) {
                          if (local_188 < iVar6) {
                            iVar6 = local_188;
                          }
                          if (iVar9 <= iVar6) {
                            iVar6 = iVar9;
                          }
                          memcpy(puVar10,local_190,(longlong)iVar6);
                        }
                        if (bVar2) {
                          FUN_1424da110(local_190);
                        }
                        bVar2 = true;
                        local_190 = puVar10;
                        local_188 = iVar9;
                        goto LAB_142611184;
                      }
                      local_154 = 0;
                    }
                    iVar6 = iVar14 + -7;
                  } while (0xd < iVar6);
                  iVar14 = iVar14 + -0xe;
                  param_3 = local_78;
                }
                iVar6 = local_158;
                local_6c = iVar14 + 1;
                if (1 < (uint)local_58) {
                  local_6c = 0xd - iVar14;
                }
                if (local_158 < local_188) {
LAB_14261238c:
                  local_190[local_158] = (char)local_6c << 4;
                  local_158 = local_158 + 1;
                }
                else if (local_154 != 0) {
                  iVar14 = local_188 * 2;
                  if (local_188 * 2 <= local_158 + 2) {
                    iVar14 = local_158 + 2;
                  }
                  if (iVar14 < 0xc9) {
                    iVar14 = 200;
                  }
                  puVar10 = (undefined1 *)FUN_1424da030(iVar14);
                  if (puVar10 != (undefined1 *)0x0) {
                    if (0 < iVar6) {
                      if (local_188 < iVar6) {
                        iVar6 = local_188;
                      }
                      if (iVar14 <= iVar6) {
                        iVar6 = iVar14;
                      }
                      memcpy(puVar10,local_190,(longlong)iVar6);
                    }
                    if (bVar2) {
                      FUN_1424da110(local_190);
                    }
                    bVar2 = true;
                    local_190 = puVar10;
                    local_188 = iVar14;
                    goto LAB_14261238c;
                  }
                  local_154 = 0;
                }
LAB_1426123a4:
                uVar5 = (uint)local_58;
                if (1 < (uint)local_58) {
                  uVar5 = ((uint)(local_c8 >> 10) & 0x30) + 0xd0;
                }
                goto LAB_1426123c1;
              }
            }
            else {
              if (local_6c != 0) {
                if (local_6c < 0xe) {
                  local_6c = local_6c + -1;
                }
                else {
                  iVar14 = local_6c + 0xc;
                  do {
                    iVar6 = iVar14;
                    iVar14 = local_158;
                    if (local_158 < local_188) {
LAB_142611454:
                      local_190[local_158] = 0x30;
                      local_158 = local_158 + 1;
                    }
                    else if (local_154 != 0) {
                      iVar9 = local_188 * 2;
                      if (local_188 * 2 <= local_158 + 2) {
                        iVar9 = local_158 + 2;
                      }
                      if (iVar9 < 0xc9) {
                        iVar9 = 200;
                      }
                      puVar10 = (undefined1 *)FUN_1424da030(iVar9);
                      if (puVar10 != (undefined1 *)0x0) {
                        if (0 < iVar14) {
                          if (local_188 < iVar14) {
                            iVar14 = local_188;
                          }
                          if (iVar9 <= iVar14) {
                            iVar14 = iVar9;
                          }
                          memcpy(puVar10,local_190,(longlong)iVar14);
                        }
                        if (bVar2) {
                          FUN_1424da110(local_190);
                        }
                        bVar2 = true;
                        local_190 = puVar10;
                        local_188 = iVar9;
                        goto LAB_142611454;
                      }
                      local_154 = 0;
                    }
                    iVar14 = iVar6 + -0xd;
                  } while (0x19 < iVar14);
                  local_6c = iVar6 + -0x1a;
                  param_3 = local_78;
                }
                iVar14 = local_158;
                if (local_158 < local_188) {
LAB_142611753:
                  local_190[local_158] = (char)local_6c * '\x10' + '0';
                  local_158 = local_158 + 1;
                }
                else if (local_154 != 0) {
                  iVar6 = local_188 * 2;
                  if (local_188 * 2 <= local_158 + 2) {
                    iVar6 = local_158 + 2;
                  }
                  if (iVar6 < 0xc9) {
                    iVar6 = 200;
                  }
                  puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                  if (puVar10 != (undefined1 *)0x0) {
                    if (0 < iVar14) {
                      if (local_188 < iVar14) {
                        iVar14 = local_188;
                      }
                      if (iVar6 <= iVar14) {
                        iVar14 = iVar6;
                      }
                      memcpy(puVar10,local_190,(longlong)iVar14);
                    }
                    if (bVar2) {
                      FUN_1424da110(local_190);
                    }
                    bVar2 = true;
                    local_190 = puVar10;
                    local_188 = iVar6;
                    goto LAB_142611753;
                  }
                  local_154 = 0;
                }
              }
              uVar5 = (uint)local_58;
              if (1 < (uint)local_58) {
                uVar5 = ~(uint)local_c8 >> 10 & 0x30;
              }
LAB_1426123c1:
              local_58 = (undefined1 *)CONCAT44(local_58._4_4_,uVar5);
              local_6c = 0;
              iVar14 = local_158;
            }
            if (iVar14 < local_188) {
LAB_14261245d:
              local_190[iVar14] = (char)local_58;
              local_158 = iVar14 + 1;
              puVar10 = local_58;
            }
            else {
              puVar10 = local_58;
              if (local_154 != 0) {
                iVar6 = local_188 * 2;
                if (local_188 * 2 <= iVar14 + 2) {
                  iVar6 = iVar14 + 2;
                }
                if (iVar6 < 0xc9) {
                  iVar6 = 200;
                }
                puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                if (puVar10 != (undefined1 *)0x0) {
                  if (0 < iVar14) {
                    if (local_188 < iVar14) {
                      iVar14 = local_188;
                    }
                    if (iVar6 <= iVar14) {
                      iVar14 = iVar6;
                    }
                    memcpy(puVar10,local_190,(longlong)iVar14);
                  }
                  if (bVar2) {
                    FUN_1424da110(local_190);
                  }
                  bVar2 = true;
                  local_190 = puVar10;
                  local_188 = iVar6;
                  iVar14 = local_158;
                  goto LAB_14261245d;
                }
                local_154 = 0;
                puVar10 = local_58;
              }
            }
          }
        }
      }
      else if (0xffff < (uint)local_c8) goto LAB_142610fdd;
    }
    local_58 = puVar10;
    if ((local_5c & 0x10) != 0) {
      uVar5 = uVar13 & (uint)local_c8;
      local_58 = (undefined1 *)(ulonglong)uVar5;
      if (uVar5 == 0x500) {
        local_7c = local_7c + 1;
        local_58 = puVar10;
      }
      else {
        cVar19 = (char)local_7c;
        if (uVar23 == 0x200) {
          if ((local_14c & 0x100) == 0) {
            if (local_7c != 0) {
              if (local_7c < 0x22) {
                cVar19 = cVar19 + -1;
              }
              else {
                iVar14 = local_7c + 0x20;
                do {
                  iVar6 = iVar14;
                  iVar14 = local_88;
                  if (local_88 < local_b8) {
LAB_142611057:
                    local_c0[local_88] = 0x25;
                    local_88 = local_88 + 1;
                  }
                  else if (local_84 != 0) {
                    iVar9 = local_b8 * 2;
                    if (local_b8 * 2 <= local_88 + 2) {
                      iVar9 = local_88 + 2;
                    }
                    if (iVar9 < 0xc9) {
                      iVar9 = 200;
                    }
                    puVar10 = (undefined1 *)FUN_1424da030(iVar9);
                    if (puVar10 != (undefined1 *)0x0) {
                      if (0 < iVar14) {
                        if (local_b8 < iVar14) {
                          iVar14 = local_b8;
                        }
                        if (iVar9 <= iVar14) {
                          iVar14 = iVar9;
                        }
                        memcpy(puVar10,local_c0,(longlong)iVar14);
                      }
                      if (local_b4 != '\0') {
                        FUN_1424da110(local_c0);
                      }
                      local_b4 = '\x01';
                      local_c0 = puVar10;
                      local_b8 = iVar9;
                      goto LAB_142611057;
                    }
                    local_84 = 0;
                  }
                  iVar14 = iVar6 + -0x21;
                } while (0x41 < iVar14);
                cVar19 = (char)iVar6 + -0x42;
              }
              iVar14 = local_88;
              cVar3 = cVar19 + '\x05';
              if (0x4ff < (uint)local_58) {
                cVar3 = 'E' - cVar19;
              }
              if (local_88 < local_b8) {
LAB_142611b89:
                local_c0[local_88] = cVar3;
                local_88 = local_88 + 1;
              }
              else if (local_84 != 0) {
                iVar6 = local_b8 * 2;
                if (local_b8 * 2 <= local_88 + 2) {
                  iVar6 = local_88 + 2;
                }
                if (iVar6 < 0xc9) {
                  iVar6 = 200;
                }
                puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                if (puVar10 != (undefined1 *)0x0) {
                  if (0 < iVar14) {
                    if (local_b8 < iVar14) {
                      iVar14 = local_b8;
                    }
                    if (iVar6 <= iVar14) {
                      iVar14 = iVar6;
                    }
                    memcpy(puVar10,local_c0,(longlong)iVar14);
                  }
                  if (local_b4 != '\0') {
                    FUN_1424da110(local_c0);
                  }
                  local_b4 = '\x01';
                  local_c0 = puVar10;
                  local_b8 = iVar6;
                  goto LAB_142611b89;
                }
                local_84 = 0;
              }
            }
            uVar7 = (uint)local_58;
            uVar5 = uVar7 + 0x4000;
            goto LAB_142611ba8;
          }
          if (0x100 < uVar5) {
            if ((uint)local_c8 < 0x10000) {
              local_58 = (undefined1 *)(ulonglong)(uVar5 + 0x4000);
            }
            else {
              uVar5 = uVar5 ^ 0xc000;
              uVar7 = uVar5 - 0x4000;
              if (0xc4ff < uVar5) {
                uVar7 = uVar5;
              }
              local_58 = (undefined1 *)(ulonglong)uVar7;
            }
          }
          if (local_7c != 0) {
            if (local_7c < 0x22) {
              cVar19 = cVar19 + -1;
            }
            else {
              iVar14 = local_7c + 0x20;
              do {
                iVar6 = iVar14;
                iVar14 = local_88;
                if (local_88 < local_b8) {
LAB_142611ee7:
                  local_c0[local_88] = 0xa5;
                  local_88 = local_88 + 1;
                }
                else if (local_84 != 0) {
                  iVar9 = local_b8 * 2;
                  if (local_b8 * 2 <= local_88 + 2) {
                    iVar9 = local_88 + 2;
                  }
                  if (iVar9 < 0xc9) {
                    iVar9 = 200;
                  }
                  puVar10 = (undefined1 *)FUN_1424da030(iVar9);
                  if (puVar10 != (undefined1 *)0x0) {
                    if (0 < iVar14) {
                      if (local_b8 < iVar14) {
                        iVar14 = local_b8;
                      }
                      if (iVar9 <= iVar14) {
                        iVar14 = iVar9;
                      }
                      memcpy(puVar10,local_c0,(longlong)iVar14);
                    }
                    if (local_b4 != '\0') {
                      FUN_1424da110(local_c0);
                    }
                    local_b4 = '\x01';
                    local_c0 = puVar10;
                    local_b8 = iVar9;
                    goto LAB_142611ee7;
                  }
                  local_84 = 0;
                }
                iVar14 = iVar6 + -0x21;
              } while (0x41 < iVar14);
              cVar19 = (char)iVar6 + -0x42;
            }
            iVar14 = local_88;
            cVar3 = cVar19 + -0x7b;
            if (0x84ff < (uint)local_58) {
              cVar3 = -0x3b - cVar19;
            }
            if (local_88 < local_b8) {
LAB_14261209b:
              local_c0[local_88] = cVar3;
              local_88 = local_88 + 1;
            }
            else if (local_84 != 0) {
              iVar6 = local_b8 * 2;
              if (local_b8 * 2 <= local_88 + 2) {
                iVar6 = local_88 + 2;
              }
              if (iVar6 < 0xc9) {
                iVar6 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar6);
              if (puVar10 != (undefined1 *)0x0) {
                if (0 < iVar14) {
                  if (local_b8 < iVar14) {
                    iVar14 = local_b8;
                  }
                  if (iVar6 <= iVar14) {
                    iVar14 = iVar6;
                  }
                  memcpy(puVar10,local_c0,(longlong)iVar14);
                }
                if (local_b4 != '\0') {
                  FUN_1424da110(local_c0);
                }
                local_b4 = '\x01';
                local_c0 = puVar10;
                local_b8 = iVar6;
                goto LAB_14261209b;
              }
              local_84 = 0;
            }
          }
          param_3 = local_78;
          iVar14 = local_88;
          iVar6 = 2 - (uint)((char)local_58 == '\0');
          if (local_88 + iVar6 <= local_b8) {
LAB_14261218a:
            local_7c = 0;
            local_c0[iVar14] = (char)((ulonglong)local_58 >> 8);
            local_88 = iVar14 + 1;
            if ((char)local_58 != '\0') {
              local_c0[iVar14 + 1] = (char)local_58;
              local_88 = iVar14 + 2;
            }
            goto LAB_142612490;
          }
          local_7c = 0;
          if (local_84 == 0) goto LAB_142612490;
          iVar9 = local_88 + iVar6 * 2;
          iVar6 = local_b8 * 2;
          if (local_b8 * 2 <= iVar9) {
            iVar6 = iVar9;
          }
          if (iVar6 < 0xc9) {
            iVar6 = 200;
          }
          puVar10 = (undefined1 *)FUN_1424da030(iVar6);
          if (puVar10 != (undefined1 *)0x0) {
            if (0 < iVar14) {
              if (local_b8 < iVar14) {
                iVar14 = local_b8;
              }
              if (iVar6 <= iVar14) {
                iVar14 = iVar6;
              }
              memcpy(puVar10,local_c0,(longlong)iVar14);
            }
            if (local_b4 != '\0') {
              FUN_1424da110(local_c0);
            }
            local_b4 = '\x01';
            local_c0 = puVar10;
            local_b8 = iVar6;
            iVar14 = local_88;
            goto LAB_14261218a;
          }
LAB_1426121e9:
          local_84 = 0;
        }
        else {
          if (local_7c != 0) {
            if (local_7c < 0x62) {
              cVar19 = cVar19 + -1;
            }
            else {
              iVar14 = local_7c + 0x60;
              do {
                iVar6 = iVar14;
                iVar14 = local_88;
                if (local_88 < local_b8) {
LAB_142611357:
                  local_c0[local_88] = 0x65;
                  local_88 = local_88 + 1;
                }
                else if (local_84 != 0) {
                  iVar9 = local_b8 * 2;
                  if (local_b8 * 2 <= local_88 + 2) {
                    iVar9 = local_88 + 2;
                  }
                  if (iVar9 < 0xc9) {
                    iVar9 = 200;
                  }
                  puVar10 = (undefined1 *)FUN_1424da030(iVar9);
                  if (puVar10 != (undefined1 *)0x0) {
                    if (0 < iVar14) {
                      if (local_b8 < iVar14) {
                        iVar14 = local_b8;
                      }
                      if (iVar9 <= iVar14) {
                        iVar14 = iVar9;
                      }
                      memcpy(puVar10,local_c0,(longlong)iVar14);
                    }
                    if (local_b4 != '\0') {
                      FUN_1424da110(local_c0);
                    }
                    local_b4 = '\x01';
                    local_c0 = puVar10;
                    local_b8 = iVar9;
                    goto LAB_142611357;
                  }
                  local_84 = 0;
                }
                iVar14 = iVar6 + -0x61;
              } while (0xc1 < iVar14);
              cVar19 = (char)iVar6 + '>';
            }
            iVar14 = local_88;
            cVar3 = cVar19 + '\x05';
            if (0x4ff < (uint)local_58) {
              cVar3 = -0x3b - cVar19;
            }
            if (local_88 < local_b8) {
LAB_142611680:
              local_c0[local_88] = cVar3;
              local_88 = local_88 + 1;
            }
            else if (local_84 != 0) {
              iVar6 = local_b8 * 2;
              if (local_b8 * 2 <= local_88 + 2) {
                iVar6 = local_88 + 2;
              }
              if (iVar6 < 0xc9) {
                iVar6 = 200;
              }
              puVar10 = (undefined1 *)FUN_1424da030(iVar6);
              if (puVar10 != (undefined1 *)0x0) {
                if (0 < iVar14) {
                  if (local_b8 < iVar14) {
                    iVar14 = local_b8;
                  }
                  if (iVar6 <= iVar14) {
                    iVar14 = iVar6;
                  }
                  memcpy(puVar10,local_c0,(longlong)iVar14);
                }
                if (local_b4 != '\0') {
                  FUN_1424da110(local_c0);
                }
                local_b4 = '\x01';
                local_c0 = puVar10;
                local_b8 = iVar6;
                goto LAB_142611680;
              }
              local_84 = 0;
            }
          }
          uVar7 = (uint)local_58;
          uVar5 = uVar7 + 0xc000;
LAB_142611ba8:
          param_3 = local_78;
          iVar14 = local_88;
          if (uVar7 < 0x501) {
            uVar5 = uVar7;
          }
          iVar6 = 2 - (uint)((uVar5 & 0x3f) == 0);
          if (local_b8 < iVar6 + local_88) {
            local_7c = 0;
            if (local_84 == 0) goto LAB_142612490;
            iVar9 = local_88 + iVar6 * 2;
            iVar6 = local_b8 * 2;
            if (local_b8 * 2 <= iVar9) {
              iVar6 = iVar9;
            }
            if (iVar6 < 0xc9) {
              iVar6 = 200;
            }
            puVar10 = (undefined1 *)FUN_1424da030(iVar6);
            if (puVar10 == (undefined1 *)0x0) goto LAB_1426121e9;
            local_58 = puVar10;
            if (0 < iVar14) {
              if (local_b8 < iVar14) {
                iVar14 = local_b8;
              }
              if (iVar6 <= iVar14) {
                iVar14 = iVar6;
              }
              memcpy(puVar10,local_c0,(longlong)iVar14);
            }
            if (local_b4 != '\0') {
              FUN_1424da110(local_c0);
            }
            local_c0 = local_58;
            local_b4 = '\x01';
            local_b8 = iVar6;
            iVar14 = local_88;
          }
          local_7c = 0;
          local_c0[iVar14] = (char)(uVar5 >> 8);
          local_88 = iVar14 + 1;
          if ((uVar5 & 0x3f) != 0) {
            local_c0[iVar14 + 1] = (char)uVar5;
            local_88 = iVar14 + 2;
          }
        }
      }
    }
LAB_142612490:
    if ((local_5c & 0x20) != 0) {
      uVar5 = (uint)local_c8;
      uVar7 = uVar5 & 0xffff;
      if (((local_c8 & 0xc0) == 0) && (0x100 < uVar7)) {
        iVar20 = iVar20 + 1;
      }
      else if (((local_14c & 0xc) == 0) && ((uVar7 == 0x100 && (local_d0 == 0)))) {
        if (local_100 < 1) {
          if (local_cc == 0) goto LAB_1426107e2;
          iVar14 = local_100 * 2;
          if (local_100 * 2 < 0xc9) {
            iVar14 = 200;
          }
          puVar10 = (undefined1 *)FUN_1424da030(iVar14);
          if (puVar10 == (undefined1 *)0x0) {
LAB_1426127ce:
            local_cc = 0;
            goto LAB_1426107e2;
          }
          if (local_fc != '\0') {
            FUN_1424da110(local_108);
          }
          local_fc = '\x01';
          local_108 = puVar10;
          local_100 = iVar14;
        }
        else {
          local_d0 = 0;
        }
        local_108[local_d0] = 1;
        local_d0 = local_d0 + 1;
      }
      else {
        if (iVar20 != 0) {
          if (iVar20 < 0x72) {
            cVar19 = (char)iVar20 + -1;
          }
          else {
            iVar20 = iVar20 + 0x70;
            do {
              iVar14 = iVar20;
              iVar20 = local_d0;
              if (local_d0 < local_100) {
LAB_142612514:
                local_108[local_d0] = 0x8c;
                local_d0 = local_d0 + 1;
              }
              else if (local_cc != 0) {
                iVar6 = local_100 * 2;
                if (local_100 * 2 <= local_d0 + 2) {
                  iVar6 = local_d0 + 2;
                }
                if (iVar6 < 0xc9) {
                  iVar6 = 200;
                }
                puVar10 = (undefined1 *)FUN_1424da030(iVar6);
                if (puVar10 != (undefined1 *)0x0) {
                  if (0 < iVar20) {
                    if (local_100 < iVar20) {
                      iVar20 = local_100;
                    }
                    if (iVar6 <= iVar20) {
                      iVar20 = iVar6;
                    }
                    memcpy(puVar10,local_108,(longlong)iVar20);
                  }
                  if (local_fc != '\0') {
                    FUN_1424da110(local_108);
                  }
                  local_fc = '\x01';
                  local_108 = puVar10;
                  local_100 = iVar6;
                  goto LAB_142612514;
                }
                local_cc = 0;
              }
              iVar20 = iVar14 + -0x71;
            } while (0xe1 < iVar20);
            cVar19 = (char)iVar14 + '\x1e';
          }
          iVar20 = local_d0;
          cVar3 = cVar19 + '\x1c';
          if (uVar7 != 0x100) {
            cVar3 = -4 - cVar19;
          }
          if (local_d0 < local_100) {
LAB_1426126d6:
            local_108[local_d0] = cVar3;
            local_d0 = local_d0 + 1;
          }
          else if (local_cc != 0) {
            iVar14 = local_100 * 2;
            if (local_100 * 2 <= local_d0 + 2) {
              iVar14 = local_d0 + 2;
            }
            if (iVar14 < 0xc9) {
              iVar14 = 200;
            }
            puVar10 = (undefined1 *)FUN_1424da030(iVar14);
            if (puVar10 != (undefined1 *)0x0) {
              if (0 < iVar20) {
                if (local_100 < iVar20) {
                  iVar20 = local_100;
                }
                if (iVar14 <= iVar20) {
                  iVar20 = iVar14;
                }
                memcpy(puVar10,local_108,(longlong)iVar20);
              }
              if (local_fc != '\0') {
                FUN_1424da110(local_108);
              }
              local_fc = '\x01';
              local_108 = puVar10;
              local_100 = iVar14;
              goto LAB_1426126d6;
            }
            local_cc = 0;
          }
        }
        param_3 = local_78;
        iVar14 = local_d0;
        local_58 = (undefined1 *)(CONCAT44(local_58._4_4_,uVar5) & 0xffffffff0000ffff);
        if (local_100 <= local_d0) {
          iVar20 = 0;
          if (local_cc == 0) goto LAB_1426107e2;
          iVar6 = local_100 * 2;
          if (local_100 * 2 <= local_d0 + 2) {
            iVar6 = local_d0 + 2;
          }
          if (iVar6 < 0xc9) {
            iVar6 = 200;
          }
          puVar10 = (undefined1 *)FUN_1424da030(iVar6);
          if (puVar10 == (undefined1 *)0x0) goto LAB_1426127ce;
          if (0 < iVar14) {
            if (local_100 < iVar14) {
              iVar14 = local_100;
            }
            if (iVar6 <= iVar14) {
              iVar14 = iVar6;
            }
            memcpy(puVar10,local_108,(longlong)iVar14);
          }
          if (local_fc != '\0') {
            FUN_1424da110(local_108);
          }
          local_fc = '\x01';
          local_108 = puVar10;
          local_100 = iVar6;
        }
        bVar17 = (byte)(local_c8 >> 6) & 3 | 0xfc;
        if ((uint)local_58 == 0x100) {
          bVar17 = 1;
        }
        local_108[local_d0] = bVar17;
        iVar20 = 0;
        local_d0 = local_d0 + 1;
      }
    }
LAB_1426107e2:
  } while (((uint)local_c8 & 0xff000000) != 0x1000000);
  if (*param_8 < 1) {
    bVar17 = 1;
    if ((local_5c & 4) != 0) {
      cVar19 = (**(code **)(*param_6 + 8))(param_6,2);
      bVar17 = local_10c;
      if (cVar19 == '\0') goto LAB_142612892;
      FUN_142612b30(local_68,1);
      (**(code **)(*local_68 + 8))(local_68,local_148,local_110 + -1);
      bVar17 = bVar17 & 1;
    }
    if ((local_5c & 8) != 0) {
      cVar19 = (**(code **)(*param_6 + 8))(param_6,3);
      if (cVar19 == '\0') goto LAB_142612892;
      bVar17 = bVar17 & local_154;
      FUN_142612b30(local_68,1);
      iVar20 = local_158 + -1;
      bVar24 = 0;
      for (uVar21 = 0; (int)uVar21 < iVar20; uVar21 = uVar21 + 1) {
        bVar1 = local_190[uVar21];
        if (bVar24 != 0) {
          if ((int)local_68[3] < 1) {
            iVar14 = *(int *)((longlong)local_68 + 0x14);
            if (iVar14 < (int)local_68[2]) {
LAB_1426129d2:
              *(byte *)(local_68[1] + (longlong)iVar14) = bVar1 >> 4 | bVar24;
            }
            else {
              cVar19 = (**(code **)(*local_68 + 0x28))(local_68,1);
              if (cVar19 != '\0') {
                iVar14 = *(int *)((longlong)local_68 + 0x14);
                goto LAB_1426129d2;
              }
            }
            *(int *)((longlong)local_68 + 0x14) = *(int *)((longlong)local_68 + 0x14) + 1;
          }
          else {
            *(int *)(local_68 + 3) = (int)local_68[3] + -1;
          }
          bVar1 = 0;
        }
        bVar24 = bVar1;
      }
      if (bVar24 != 0) {
        FUN_142612b30(local_68,bVar24);
      }
    }
    if ((local_5c & 0x10) != 0) {
      cVar19 = (**(code **)(*param_6 + 8))(param_6,4);
      bVar24 = local_84;
      if (cVar19 == '\0') goto LAB_142612892;
      FUN_142612b30(local_68,1);
      (**(code **)(*local_68 + 8))(local_68,local_c0,local_88 + -1);
      bVar17 = bVar17 & bVar24;
    }
    if ((local_5c & 0x20) != 0) {
      cVar19 = (**(code **)(*param_6 + 8))(param_6,5);
      bVar24 = local_cc;
      if (cVar19 == '\0') goto LAB_142612892;
      FUN_142612b30(local_68,1);
      (**(code **)(*local_68 + 8))(local_68,local_108,local_d0 + -1);
      bVar17 = bVar17 & bVar24;
    }
    if (bVar17 != 0) {
LAB_14261287e:
      if (local_68[1] != 0) goto LAB_142612892;
    }
    *param_8 = 7;
  }
LAB_142612892:
  if (local_fc != '\0') {
    FUN_1424da110(local_108);
  }
  if (local_b4 != '\0') {
    FUN_1424da110(local_c0);
  }
  if (local_13c != '\0') {
    FUN_1424da110(local_148);
  }
  if (bVar2) {
    FUN_1424da110(local_190);
  }
  return;
}



// FUNCTION 142612ac0 Unwind@142612ac0 body=112 status=ok
// SIG undefined Unwind@142612ac0(void)

void Unwind_142612ac0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xdc) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0xd0));
  }
  if (*(char *)(param_2 + 0x124) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x118));
  }
  if (*(char *)(param_2 + 0x9c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x90));
  }
  if (*(char *)(param_2 + 0x54) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 142612b30 FUN_142612b30 body=78 status=ok
// SIG undefined FUN_142612b30(void)

void FUN_142612b30(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  
  if (0 < (int)param_1[3]) {
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    return;
  }
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  if ((int)param_1[2] <= iVar2) {
    cVar1 = (**(code **)(*param_1 + 0x28))(param_1,1);
    if (cVar1 == '\0') goto LAB_142612b74;
    iVar2 = *(int *)((longlong)param_1 + 0x14);
  }
  *(undefined1 *)(param_1[1] + (longlong)iVar2) = param_2;
LAB_142612b74:
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  return;
}



// FUNCTION 142612b80 FUN_142612b80 body=109 status=ok
// SIG undefined FUN_142612b80(void)

void * FUN_142612b80(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  void *_Dst;
  void *_Src;
  
  _Dst = (void *)FUN_1424da030((longlong)param_2);
  if (_Dst != (void *)0x0) {
    if (0 < (int)param_3) {
      if (*(int *)(param_1 + 8) < 0) {
        _Src = *(void **)(param_1 + 0x10);
      }
      else {
        _Src = (void *)(param_1 + 0x10);
      }
      memcpy(_Dst,_Src,(ulonglong)param_3);
    }
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x10));
      uVar1 = *(uint *)(param_1 + 8);
    }
    *(void **)(param_1 + 0x10) = _Dst;
    *(int *)(param_1 + 0x18) = param_2;
    *(uint *)(param_1 + 8) = uVar1 | 0x80000000;
  }
  return _Dst;
}



// FUNCTION 142612bf0 FUN_142612bf0 body=18 status=ok
// SIG undefined FUN_142612bf0(void)

longlong FUN_142612bf0(longlong param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 2;
  return param_1;
}



// FUNCTION 142612c10 FUN_142612c10 body=21 status=ok
// SIG undefined FUN_142612c10(void)

void FUN_142612c10(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x80000000 | param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 142612c30 FUN_142612c30 body=18 status=ok
// SIG undefined FUN_142612c30(void)

longlong FUN_142612c30(longlong param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  return param_1;
}



// FUNCTION 142612c50 FUN_142612c50 body=136 status=ok
// SIG undefined FUN_142612c50(void)

undefined8 * FUN_142612c50(undefined8 *param_1,longlong param_2)

{
  undefined4 local_14;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = icu_64::CollationSettings::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  local_14 = 0;
  FUN_142612ce0(0,param_2,&local_14);
  if (-1 < *(int *)(param_1 + 10)) {
    memcpy((void *)((longlong)param_1 + 0x54),(void *)(param_2 + 0x54),0x300);
  }
  return param_1;
}



// FUNCTION 142612ce0 FUN_142612ce0 body=393 status=ok
// SIG undefined FUN_142612ce0(void)

void FUN_142612ce0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  void *_Src_00;
  void *_Src_01;
  void *pvVar3;
  uint uVar4;
  
  if (*param_3 < 1) {
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      _Src = *(void **)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x4c) == 0) {
        *(void **)(param_1 + 0x20) = _Src;
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      }
      else if (*param_3 < 1) {
        iVar1 = *(int *)(param_2 + 0x38);
        _Src_00 = *(void **)(param_2 + 0x30);
        iVar2 = *(int *)(param_2 + 0x48);
        _Src_01 = *(void **)(param_2 + 0x40);
        uVar4 = *(uint *)(param_1 + 0x4c);
        if ((int)uVar4 < iVar2 + iVar1) {
          uVar4 = iVar2 + iVar1 + 3U & 0xfffffffc;
          pvVar3 = (void *)FUN_1424da030((longlong)(int)(uVar4 * 4 + 0x100));
          if (pvVar3 == (void *)0x0) {
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x48) = 0;
            *param_3 = 7;
            return;
          }
          if (*(int *)(param_1 + 0x4c) != 0) {
            FUN_1424da110(*(undefined8 *)(param_1 + 0x40));
          }
          *(void **)(param_1 + 0x40) = pvVar3;
          *(uint *)(param_1 + 0x4c) = uVar4;
        }
        else {
          pvVar3 = *(void **)(param_1 + 0x40);
        }
        memcpy((void *)((longlong)pvVar3 + (longlong)(int)uVar4 * 4),_Src,0x100);
        memcpy(pvVar3,_Src_01,(longlong)iVar2 * 4);
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)iVar2 * 4);
        memcpy(pvVar3,_Src_00,(longlong)iVar1 * 4);
        *(longlong *)(param_1 + 0x20) =
             (longlong)*(int *)(param_1 + 0x4c) * 4 + *(longlong *)(param_1 + 0x40);
        *(int *)(param_1 + 0x48) = iVar2;
        *(void **)(param_1 + 0x30) = pvVar3;
        *(int *)(param_1 + 0x38) = iVar1;
      }
    }
  }
  return;
}



// FUNCTION 142612e70 FUN_142612e70 body=46 status=ok
// SIG undefined FUN_142612e70(void)

void FUN_142612e70(undefined8 *param_1)

{
  *param_1 = icu_64::CollationSettings::vftable;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_1424da110(param_1[8]);
  }
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142612ea0 FUN_142612ea0 body=99 status=ok
// SIG undefined FUN_142612ea0(void)

ulonglong FUN_142612ea0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint3 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((*(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18)) &&
     (((*(uint *)(param_1 + 0x18) & 0xc) == 0 ||
      (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))) {
    uVar1 = *(uint *)(param_1 + 0x48);
    if (uVar1 == *(uint *)(param_2 + 0x48)) {
      uVar2 = (uint3)(uVar1 >> 8);
      if ((int)uVar1 < 1) {
        return CONCAT71((uint7)uVar2,1);
      }
      if (**(int **)(param_1 + 0x40) == **(int **)(param_2 + 0x40)) {
        uVar3 = 1;
        do {
          uVar4 = uVar3;
          if (uVar1 == uVar4) break;
          uVar3 = uVar4 + 1;
        } while ((*(int **)(param_1 + 0x40))[uVar4] == (*(int **)(param_2 + 0x40))[uVar4]);
        return (ulonglong)CONCAT31(uVar2,uVar1 <= uVar4);
      }
    }
  }
  return 0;
}



// FUNCTION 142612f10 FUN_142612f10 body=151 status=ok
// SIG undefined FUN_142612f10(void)

uint FUN_142612f10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar4 = 0;
  if ((*(uint *)(param_1 + 0x18) & 0xc) != 0) {
    uVar4 = *(uint *)(param_1 + 0x1c);
  }
  uVar4 = *(uint *)(param_1 + 0x18) << 8 ^ uVar1 ^ uVar4;
  if (0 < (int)uVar1) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar6 = (ulonglong)(uVar1 & 3);
    if (uVar1 < 4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        bVar3 = (byte)uVar5;
        uVar4 = *(int *)(lVar2 + 0xc + uVar5 * 4) << (bVar3 + 3 & 0x1f) ^
                *(int *)(lVar2 + 8 + uVar5 * 4) << (bVar3 + 2 & 0x1f) ^
                *(int *)(lVar2 + 4 + uVar5 * 4) << (bVar3 + 1 & 0x1f) ^
                *(int *)(lVar2 + uVar5 * 4) << (bVar3 & 0x1f) ^ uVar4;
        uVar5 = uVar5 + 4;
      } while (uVar5 != (uVar1 & 0xfffffffc));
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar4 = uVar4 ^ *(int *)(lVar2 + uVar5 * 4) << ((byte)uVar5 & 0x1f);
      uVar5 = uVar5 + 1;
    }
  }
  return uVar4;
}



// FUNCTION 142612fb0 FUN_142612fb0 body=30 status=ok
// SIG undefined FUN_142612fb0(void)

void FUN_142612fb0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 142612fd0 FUN_142612fd0 body=388 status=ok
// SIG undefined FUN_142612fd0(void)

void FUN_142612fd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  short *param_5,uint param_6,longlong param_7,int *param_8)

{
  char *pcVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (0 < *param_8) {
    return;
  }
  if (param_7 != 0) {
    if (param_6 == 0) {
      if (*(char *)(param_7 + 1) != '\0') {
        uVar2 = 0;
        do {
          if (*(char *)(param_7 + 2 + uVar2) == '\0') {
            uVar4 = uVar2 + 1;
            break;
          }
          if (*(char *)(param_7 + 3 + uVar2) == '\0') {
            uVar4 = uVar2 + 2;
            break;
          }
          if (*(char *)(param_7 + 4 + uVar2) == '\0') {
            uVar4 = uVar2 + 3;
            break;
          }
          if (*(char *)(param_7 + 5 + uVar2) == '\0') {
            uVar4 = uVar2 + 4;
            break;
          }
          if (uVar2 == 0xfa) goto LAB_1426130cd;
          uVar4 = uVar2 + 5;
          pcVar1 = (char *)(param_7 + 6 + uVar2);
          uVar2 = uVar4;
        } while (*pcVar1 != '\0');
        if (0xfe < uVar4) goto LAB_1426130cd;
      }
    }
    else if (((1 < (int)param_6) && (*param_5 == 0)) && (param_5[(ulonglong)(param_6 - 1) * 2] != 0)
            ) {
LAB_1426130cd:
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x40));
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      *(longlong *)(param_1 + 0x20) = param_7;
      *(undefined8 *)(param_1 + 0x40) = param_3;
      *(undefined4 *)(param_1 + 0x48) = param_4;
      if ((int)param_6 < 1) {
        uVar2 = 0;
LAB_142613114:
        iVar3 = param_6 - (int)uVar2;
        if (iVar3 != 0) {
          *(uint *)(param_1 + 0x28) = (uint)(ushort)param_5[(longlong)(int)param_6 * 2 + -1] << 0x10
          ;
          *(short **)(param_1 + 0x30) = param_5 + (uVar2 & 0xffffffff) * 2;
          *(int *)(param_1 + 0x38) = iVar3;
          return;
        }
      }
      else {
        uVar2 = 0;
        do {
          if ((char)param_5[uVar2 * 2 + 1] != '\0') goto LAB_142613114;
          uVar2 = uVar2 + 1;
        } while (param_6 != uVar2);
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      return;
    }
  }
  FUN_142613160(param_1,param_2,param_3,param_4,param_8);
  return;
}



// FUNCTION 142613160 FUN_142613160 body=1631 status=ok
// SIG undefined FUN_142613160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142613160(longlong param_1,undefined8 param_2,int *param_3,int param_4,int *param_5)

{
  char *pcVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  uint uVar16;
  ulonglong uVar17;
  void *pvVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  char cVar29;
  char cVar33;
  char cVar35;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar50 [16];
  uint uVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  short sVar58;
  int iVar60;
  int iVar67;
  int iVar68;
  undefined1 auVar65 [16];
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  short sVar74;
  undefined1 auVar78 [16];
  short sVar79;
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  char local_228 [256];
  undefined1 local_128 [8];
  uint local_120;
  longlong local_110;
  int *local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 uVar32;
  undefined1 uVar34;
  undefined1 uVar36;
  undefined4 uVar59;
  undefined6 uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [12];
  undefined1 auVar64 [14];
  undefined1 auVar66 [16];
  undefined1 auVar75 [12];
  undefined1 auVar76 [14];
  undefined1 auVar77 [16];
  undefined4 uVar80;
  undefined6 uVar81;
  undefined8 uVar82;
  undefined1 auVar83 [12];
  undefined1 auVar84 [14];
  undefined1 auVar86 [16];
  
  local_f0 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  if ((param_4 == 0) || ((param_4 == 1 && (*param_3 == 0x67)))) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  FUN_142517d10(local_128);
  local_108 = param_3;
  FUN_142563d50(param_2,param_3,param_4,local_128,param_5);
  if (0 < *param_5) goto LAB_14261325a;
  lVar20 = (longlong)(int)local_120;
  if (lVar20 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    goto LAB_14261325a;
  }
  *(uint *)(param_1 + 0x28) = (uint)*(ushort *)(local_110 + -2 + lVar20 * 4) << 0x10;
  local_f8 = local_110;
  lVar25 = local_110;
  local_100 = lVar20;
  if ((int)local_120 < 1) {
    uVar22 = 0;
    uVar23 = 0xffffffff;
LAB_142613587:
    uVar21 = (ulonglong)uVar22;
    uVar17 = 0x100 - uVar21;
    if (((7 < uVar17) && ((uint)(0xff - uVar21) <= -uVar22 - 2)) && (0xff - uVar21 >> 0x20 == 0)) {
      if (uVar17 < 0x10) {
        uVar27 = 0;
      }
      else {
        uVar27 = uVar17 & 0xfffffffffffffff0;
        uVar32 = (undefined1)(uVar22 >> 8);
        auVar31 = ZEXT416(CONCAT22(CONCAT11(uVar32,uVar32),CONCAT11((char)uVar22,(char)uVar22)));
        auVar31 = pshuflw(auVar31,auVar31,0);
        cVar29 = auVar31[0];
        cVar33 = auVar31[1];
        cVar35 = cVar33 + '\x01';
        cVar37 = auVar31[2];
        cVar38 = cVar37 + '\x02';
        cVar40 = auVar31[3];
        cVar42 = cVar40 + '\x03';
        cVar44 = cVar29 + '\x04';
        cVar39 = cVar33 + '\x05';
        cVar41 = cVar37 + '\x06';
        cVar43 = cVar40 + '\a';
        cVar45 = cVar29 + '\b';
        cVar46 = cVar33 + '\t';
        cVar47 = cVar37 + '\n';
        cVar48 = cVar40 + '\v';
        cVar49 = cVar29 + '\f';
        cVar33 = cVar33 + '\r';
        cVar37 = cVar37 + '\x0e';
        cVar40 = cVar40 + '\x0f';
        uVar22 = (int)uVar27 + uVar22;
        uVar28 = 0;
        do {
          pcVar1 = local_228 + uVar28 + uVar21;
          *pcVar1 = cVar29;
          pcVar1[1] = cVar35;
          pcVar1[2] = cVar38;
          pcVar1[3] = cVar42;
          pcVar1[4] = cVar44;
          pcVar1[5] = cVar39;
          pcVar1[6] = cVar41;
          pcVar1[7] = cVar43;
          pcVar1[8] = cVar45;
          pcVar1[9] = cVar46;
          pcVar1[10] = cVar47;
          pcVar1[0xb] = cVar48;
          pcVar1[0xc] = cVar49;
          pcVar1[0xd] = cVar33;
          pcVar1[0xe] = cVar37;
          pcVar1[0xf] = cVar40;
          uVar28 = uVar28 + 0x10;
          cVar29 = cVar29 + '\x10';
          cVar35 = cVar35 + '\x10';
          cVar38 = cVar38 + '\x10';
          cVar42 = cVar42 + '\x10';
          cVar44 = cVar44 + '\x10';
          cVar39 = cVar39 + '\x10';
          cVar41 = cVar41 + '\x10';
          cVar43 = cVar43 + '\x10';
          cVar45 = cVar45 + '\x10';
          cVar46 = cVar46 + '\x10';
          cVar47 = cVar47 + '\x10';
          cVar48 = cVar48 + '\x10';
          cVar49 = cVar49 + '\x10';
          cVar33 = cVar33 + '\x10';
          cVar37 = cVar37 + '\x10';
          cVar40 = cVar40 + '\x10';
        } while (uVar27 != uVar28);
        lVar25 = local_f8;
        if (uVar17 == uVar27) goto LAB_1426136b1;
        if ((uVar17 & 8) == 0) {
          uVar21 = uVar27 + uVar21;
          goto LAB_1426136a0;
        }
      }
      uVar28 = uVar17 & 0xfffffffffffffff8;
      uVar36 = (undefined1)(uVar22 >> 0x18);
      uVar34 = (undefined1)(uVar22 >> 0x10);
      uVar32 = (undefined1)(uVar22 >> 8);
      auVar30._4_4_ =
           (int)(CONCAT35(CONCAT21(CONCAT11(uVar36,uVar36),uVar34),CONCAT14(uVar34,uVar22)) >> 0x20)
      ;
      auVar30[3] = uVar32;
      auVar30[2] = uVar32;
      auVar30[0] = (undefined1)uVar22;
      auVar30[1] = auVar30[0];
      auVar30._8_8_ = 0;
      auVar31 = pshuflw(auVar30,auVar30,0);
      cVar29 = auVar31[0];
      cVar33 = auVar31[1] + '\x01';
      cVar35 = auVar31[2] + '\x02';
      cVar37 = auVar31[3] + '\x03';
      cVar38 = auVar31[4] + '\x04';
      cVar40 = auVar31[5] + '\x05';
      cVar42 = auVar31[6] + '\x06';
      cVar44 = auVar31[7] + '\a';
      do {
        pcVar1 = local_228 + uVar27 + uVar21;
        *pcVar1 = cVar29;
        pcVar1[1] = cVar33;
        pcVar1[2] = cVar35;
        pcVar1[3] = cVar37;
        pcVar1[4] = cVar38;
        pcVar1[5] = cVar40;
        pcVar1[6] = cVar42;
        pcVar1[7] = cVar44;
        uVar27 = uVar27 + 8;
        cVar29 = cVar29 + '\b';
        cVar33 = cVar33 + '\b';
        cVar35 = cVar35 + '\b';
        cVar37 = cVar37 + '\b';
        cVar38 = cVar38 + '\b';
        cVar40 = cVar40 + '\b';
        cVar42 = cVar42 + '\b';
        cVar44 = cVar44 + '\b';
      } while (uVar28 != uVar27);
      uVar21 = uVar28 + uVar21;
      lVar25 = local_f8;
      if (uVar17 == uVar28) goto LAB_1426136b1;
    }
LAB_1426136a0:
    do {
      local_228[uVar21] = (char)uVar21;
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 != 0x100);
  }
  else {
    uVar21 = 0;
    uVar23 = 0xffffffff;
    uVar22 = 0;
    do {
      uVar2 = *(uint *)(lVar25 + uVar21 * 4);
      uVar16 = uVar2 >> 0x18;
      uVar17 = (ulonglong)uVar16;
      if (uVar22 < uVar16) {
        uVar27 = (ulonglong)uVar22;
        uVar28 = uVar17 - uVar27;
        if (7 < uVar28) {
          if (uVar28 < 0x10) {
            uVar26 = 0;
            uVar51 = uVar22;
          }
          else {
            uVar26 = uVar28 & 0xfffffffffffffff0;
            iVar54 = uVar22 + 0xc;
            iVar55 = uVar22 + 0xd;
            iVar56 = uVar22 + 0xe;
            iVar57 = uVar22 + 0xf;
            iVar60 = uVar22 + 8;
            iVar67 = uVar22 + 9;
            iVar68 = uVar22 + 10;
            iVar69 = uVar22 + 0xb;
            iVar70 = uVar22 + 4;
            iVar71 = uVar22 + 5;
            iVar72 = uVar22 + 6;
            iVar73 = uVar22 + 7;
            iVar19 = uVar22 + 1;
            iVar52 = uVar22 + 2;
            iVar53 = uVar22 + 3;
            uVar51 = (int)uVar26 + uVar22;
            uVar24 = 0;
            do {
              auVar78._0_4_ = uVar2 + iVar54;
              auVar78._4_4_ = uVar2 + iVar55;
              auVar78._8_4_ = uVar2 + iVar56;
              auVar78._12_4_ = uVar2 + iVar57;
              auVar85._0_4_ = uVar2 + iVar60;
              auVar85._4_4_ = uVar2 + iVar67;
              auVar85._8_4_ = uVar2 + iVar68;
              auVar85._12_4_ = uVar2 + iVar69;
              auVar87._0_4_ = uVar2 + iVar70;
              auVar87._4_4_ = uVar2 + iVar71;
              auVar87._8_4_ = uVar2 + iVar72;
              auVar87._12_4_ = uVar2 + iVar73;
              auVar31._0_4_ = uVar2 + uVar22;
              auVar31._4_4_ = uVar2 + iVar19;
              auVar31._8_4_ = uVar2 + iVar52;
              auVar31._12_4_ = uVar2 + iVar53;
              auVar31 = auVar31 & _DAT_1499d1ec0;
              auVar87 = auVar87 & _DAT_1499d1ec0;
              sVar3 = auVar31._0_2_;
              cVar44 = (0 < sVar3) * (sVar3 < 0x100) * auVar31[0] - (0xff < sVar3);
              sVar3 = auVar31._2_2_;
              sVar74 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar31[2] - (0xff < sVar3),cVar44);
              sVar3 = auVar31._4_2_;
              cVar42 = (0 < sVar3) * (sVar3 < 0x100) * auVar31[4] - (0xff < sVar3);
              sVar3 = auVar31._6_2_;
              uVar59 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * auVar31[6] - (0xff < sVar3),
                                CONCAT12(cVar42,sVar74));
              sVar3 = auVar31._8_2_;
              cVar40 = (0 < sVar3) * (sVar3 < 0x100) * auVar31[8] - (0xff < sVar3);
              sVar3 = auVar31._10_2_;
              uVar61 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar31[10] - (0xff < sVar3),
                                CONCAT14(cVar40,uVar59));
              sVar3 = auVar31._12_2_;
              cVar38 = (0 < sVar3) * (sVar3 < 0x100) * auVar31[0xc] - (0xff < sVar3);
              sVar3 = auVar31._14_2_;
              uVar62 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * auVar31[0xe] - (0xff < sVar3),
                                CONCAT16(cVar38,uVar61));
              sVar3 = auVar87._0_2_;
              cVar37 = (0 < sVar3) * (sVar3 < 0x100) * auVar87[0] - (0xff < sVar3);
              sVar3 = auVar87._2_2_;
              auVar75._0_10_ =
                   CONCAT19((0 < sVar3) * (sVar3 < 0x100) * auVar87[2] - (0xff < sVar3),
                            CONCAT18(cVar37,uVar62));
              sVar3 = auVar87._4_2_;
              cVar35 = (0 < sVar3) * (sVar3 < 0x100) * auVar87[4] - (0xff < sVar3);
              auVar75[10] = cVar35;
              sVar3 = auVar87._6_2_;
              auVar75[0xb] = (0 < sVar3) * (sVar3 < 0x100) * auVar87[6] - (0xff < sVar3);
              sVar3 = auVar87._8_2_;
              cVar33 = (0 < sVar3) * (sVar3 < 0x100) * auVar87[8] - (0xff < sVar3);
              auVar76[0xc] = cVar33;
              auVar76._0_12_ = auVar75;
              sVar3 = auVar87._10_2_;
              auVar76[0xd] = (0 < sVar3) * (sVar3 < 0x100) * auVar87[10] - (0xff < sVar3);
              sVar3 = auVar87._12_2_;
              cVar29 = (0 < sVar3) * (sVar3 < 0x100) * auVar87[0xc] - (0xff < sVar3);
              auVar77[0xe] = cVar29;
              auVar77._0_14_ = auVar76;
              sVar3 = auVar87._14_2_;
              auVar77[0xf] = (0 < sVar3) * (sVar3 < 0x100) * auVar87[0xe] - (0xff < sVar3);
              auVar85 = auVar85 & _DAT_1499d1ec0;
              auVar78 = auVar78 & _DAT_1499d1ec0;
              sVar3 = auVar85._0_2_;
              cVar39 = (0 < sVar3) * (sVar3 < 0x100) * auVar85[0] - (0xff < sVar3);
              sVar3 = auVar85._2_2_;
              sVar79 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar85[2] - (0xff < sVar3),cVar39);
              sVar3 = auVar85._4_2_;
              cVar41 = (0 < sVar3) * (sVar3 < 0x100) * auVar85[4] - (0xff < sVar3);
              sVar3 = auVar85._6_2_;
              uVar80 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * auVar85[6] - (0xff < sVar3),
                                CONCAT12(cVar41,sVar79));
              sVar3 = auVar85._8_2_;
              cVar43 = (0 < sVar3) * (sVar3 < 0x100) * auVar85[8] - (0xff < sVar3);
              sVar3 = auVar85._10_2_;
              uVar81 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar85[10] - (0xff < sVar3),
                                CONCAT14(cVar43,uVar80));
              sVar3 = auVar85._12_2_;
              cVar45 = (0 < sVar3) * (sVar3 < 0x100) * auVar85[0xc] - (0xff < sVar3);
              sVar3 = auVar85._14_2_;
              uVar82 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * auVar85[0xe] - (0xff < sVar3),
                                CONCAT16(cVar45,uVar81));
              sVar3 = auVar78._0_2_;
              cVar46 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[0] - (0xff < sVar3);
              sVar3 = auVar78._2_2_;
              auVar83._0_10_ =
                   CONCAT19((0 < sVar3) * (sVar3 < 0x100) * auVar78[2] - (0xff < sVar3),
                            CONCAT18(cVar46,uVar82));
              sVar3 = auVar78._4_2_;
              cVar47 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[4] - (0xff < sVar3);
              auVar83[10] = cVar47;
              sVar3 = auVar78._6_2_;
              auVar83[0xb] = (0 < sVar3) * (sVar3 < 0x100) * auVar78[6] - (0xff < sVar3);
              sVar3 = auVar78._8_2_;
              cVar48 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[8] - (0xff < sVar3);
              auVar84[0xc] = cVar48;
              auVar84._0_12_ = auVar83;
              sVar3 = auVar78._10_2_;
              auVar84[0xd] = (0 < sVar3) * (sVar3 < 0x100) * auVar78[10] - (0xff < sVar3);
              sVar3 = auVar78._12_2_;
              cVar49 = (0 < sVar3) * (sVar3 < 0x100) * auVar78[0xc] - (0xff < sVar3);
              auVar86[0xe] = cVar49;
              auVar86._0_14_ = auVar84;
              sVar3 = auVar78._14_2_;
              auVar86[0xf] = (0 < sVar3) * (sVar3 < 0x100) * auVar78[0xe] - (0xff < sVar3);
              sVar3 = (short)((uint)uVar59 >> 0x10);
              sVar4 = (short)((uint6)uVar61 >> 0x20);
              sVar5 = (short)((ulonglong)uVar62 >> 0x30);
              sVar6 = (short)((unkuint10)auVar75._0_10_ >> 0x40);
              sVar7 = auVar75._10_2_;
              sVar8 = auVar76._12_2_;
              sVar9 = auVar77._14_2_;
              sVar58 = (short)((uint)uVar80 >> 0x10);
              sVar10 = (short)((uint6)uVar81 >> 0x20);
              sVar11 = (short)((ulonglong)uVar82 >> 0x30);
              sVar12 = (short)((unkuint10)auVar83._0_10_ >> 0x40);
              sVar13 = auVar83._10_2_;
              sVar14 = auVar84._12_2_;
              sVar15 = auVar86._14_2_;
              pcVar1 = local_228 + uVar24 + uVar27;
              *pcVar1 = (0 < sVar74) * (sVar74 < 0x100) * cVar44 - (0xff < sVar74);
              pcVar1[1] = (0 < sVar3) * (sVar3 < 0x100) * cVar42 - (0xff < sVar3);
              pcVar1[2] = (0 < sVar4) * (sVar4 < 0x100) * cVar40 - (0xff < sVar4);
              pcVar1[3] = (0 < sVar5) * (sVar5 < 0x100) * cVar38 - (0xff < sVar5);
              pcVar1[4] = (0 < sVar6) * (sVar6 < 0x100) * cVar37 - (0xff < sVar6);
              pcVar1[5] = (0 < sVar7) * (sVar7 < 0x100) * cVar35 - (0xff < sVar7);
              pcVar1[6] = (0 < sVar8) * (sVar8 < 0x100) * cVar33 - (0xff < sVar8);
              pcVar1[7] = (0 < sVar9) * (sVar9 < 0x100) * cVar29 - (0xff < sVar9);
              pcVar1[8] = (0 < sVar79) * (sVar79 < 0x100) * cVar39 - (0xff < sVar79);
              pcVar1[9] = (0 < sVar58) * (sVar58 < 0x100) * cVar41 - (0xff < sVar58);
              pcVar1[10] = (0 < sVar10) * (sVar10 < 0x100) * cVar43 - (0xff < sVar10);
              pcVar1[0xb] = (0 < sVar11) * (sVar11 < 0x100) * cVar45 - (0xff < sVar11);
              pcVar1[0xc] = (0 < sVar12) * (sVar12 < 0x100) * cVar46 - (0xff < sVar12);
              pcVar1[0xd] = (0 < sVar13) * (sVar13 < 0x100) * cVar47 - (0xff < sVar13);
              pcVar1[0xe] = (0 < sVar14) * (sVar14 < 0x100) * cVar48 - (0xff < sVar14);
              pcVar1[0xf] = (0 < sVar15) * (sVar15 < 0x100) * cVar49 - (0xff < sVar15);
              uVar24 = uVar24 + 0x10;
              uVar22 = uVar22 + 0x10;
              iVar19 = iVar19 + 0x10;
              iVar52 = iVar52 + 0x10;
              iVar53 = iVar53 + 0x10;
              iVar70 = iVar70 + 0x10;
              iVar71 = iVar71 + 0x10;
              iVar72 = iVar72 + 0x10;
              iVar73 = iVar73 + 0x10;
              iVar60 = iVar60 + 0x10;
              iVar67 = iVar67 + 0x10;
              iVar68 = iVar68 + 0x10;
              iVar69 = iVar69 + 0x10;
              iVar54 = iVar54 + 0x10;
              iVar55 = iVar55 + 0x10;
              iVar56 = iVar56 + 0x10;
              iVar57 = iVar57 + 0x10;
            } while (uVar26 != uVar24);
            uVar22 = uVar16;
            if (uVar28 == uVar26) goto LAB_14261352b;
            if ((uVar28 & 8) == 0) {
              uVar27 = uVar26 + uVar27;
              goto LAB_142613510;
            }
          }
          uVar24 = uVar28 & 0xfffffffffffffff8;
          iVar54 = uVar51 + 4;
          iVar55 = uVar51 + 5;
          iVar56 = uVar51 + 6;
          iVar57 = uVar51 + 7;
          iVar19 = uVar51 + 1;
          iVar52 = uVar51 + 2;
          iVar53 = uVar51 + 3;
          do {
            auVar50._0_4_ = uVar2 + iVar54;
            auVar50._4_4_ = uVar2 + iVar55;
            auVar50._8_4_ = uVar2 + iVar56;
            auVar50._12_4_ = uVar2 + iVar57;
            auVar65._0_4_ = uVar2 + uVar51;
            auVar65._4_4_ = uVar2 + iVar19;
            auVar65._8_4_ = uVar2 + iVar52;
            auVar65._12_4_ = uVar2 + iVar53;
            auVar65 = auVar65 & _DAT_1499d1ec0;
            auVar50 = auVar50 & _DAT_1499d1ec0;
            sVar3 = auVar65._0_2_;
            cVar29 = (0 < sVar3) * (sVar3 < 0x100) * auVar65[0] - (0xff < sVar3);
            sVar3 = auVar65._2_2_;
            sVar58 = CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar65[2] - (0xff < sVar3),cVar29);
            sVar3 = auVar65._4_2_;
            cVar44 = (0 < sVar3) * (sVar3 < 0x100) * auVar65[4] - (0xff < sVar3);
            sVar3 = auVar65._6_2_;
            uVar59 = CONCAT13((0 < sVar3) * (sVar3 < 0x100) * auVar65[6] - (0xff < sVar3),
                              CONCAT12(cVar44,sVar58));
            sVar3 = auVar65._8_2_;
            cVar42 = (0 < sVar3) * (sVar3 < 0x100) * auVar65[8] - (0xff < sVar3);
            sVar3 = auVar65._10_2_;
            uVar61 = CONCAT15((0 < sVar3) * (sVar3 < 0x100) * auVar65[10] - (0xff < sVar3),
                              CONCAT14(cVar42,uVar59));
            sVar3 = auVar65._12_2_;
            cVar40 = (0 < sVar3) * (sVar3 < 0x100) * auVar65[0xc] - (0xff < sVar3);
            sVar3 = auVar65._14_2_;
            uVar62 = CONCAT17((0 < sVar3) * (sVar3 < 0x100) * auVar65[0xe] - (0xff < sVar3),
                              CONCAT16(cVar40,uVar61));
            sVar3 = auVar50._0_2_;
            cVar38 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[0] - (0xff < sVar3);
            sVar3 = auVar50._2_2_;
            auVar63._0_10_ =
                 CONCAT19((0 < sVar3) * (sVar3 < 0x100) * auVar50[2] - (0xff < sVar3),
                          CONCAT18(cVar38,uVar62));
            sVar3 = auVar50._4_2_;
            cVar37 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[4] - (0xff < sVar3);
            auVar63[10] = cVar37;
            sVar3 = auVar50._6_2_;
            auVar63[0xb] = (0 < sVar3) * (sVar3 < 0x100) * auVar50[6] - (0xff < sVar3);
            sVar3 = auVar50._8_2_;
            cVar35 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[8] - (0xff < sVar3);
            auVar64[0xc] = cVar35;
            auVar64._0_12_ = auVar63;
            sVar3 = auVar50._10_2_;
            auVar64[0xd] = (0 < sVar3) * (sVar3 < 0x100) * auVar50[10] - (0xff < sVar3);
            sVar3 = auVar50._12_2_;
            cVar33 = (0 < sVar3) * (sVar3 < 0x100) * auVar50[0xc] - (0xff < sVar3);
            auVar66[0xe] = cVar33;
            auVar66._0_14_ = auVar64;
            sVar3 = auVar50._14_2_;
            auVar66[0xf] = (0 < sVar3) * (sVar3 < 0x100) * auVar50[0xe] - (0xff < sVar3);
            sVar3 = (short)((uint)uVar59 >> 0x10);
            sVar4 = (short)((uint6)uVar61 >> 0x20);
            sVar5 = (short)((ulonglong)uVar62 >> 0x30);
            sVar6 = (short)((unkuint10)auVar63._0_10_ >> 0x40);
            sVar7 = auVar63._10_2_;
            sVar8 = auVar64._12_2_;
            sVar9 = auVar66._14_2_;
            *(ulonglong *)(local_228 + uVar26 + uVar27) =
                 CONCAT17((0 < sVar9) * (sVar9 < 0x100) * cVar33 - (0xff < sVar9),
                          CONCAT16((0 < sVar8) * (sVar8 < 0x100) * cVar35 - (0xff < sVar8),
                                   CONCAT15((0 < sVar7) * (sVar7 < 0x100) * cVar37 - (0xff < sVar7),
                                            CONCAT14((0 < sVar6) * (sVar6 < 0x100) * cVar38 -
                                                     (0xff < sVar6),
                                                     CONCAT13((0 < sVar5) * (sVar5 < 0x100) * cVar40
                                                              - (0xff < sVar5),
                                                              CONCAT12((0 < sVar4) * (sVar4 < 0x100)
                                                                       * cVar42 - (0xff < sVar4),
                                                                       CONCAT11((0 < sVar3) *
                                                                                (sVar3 < 0x100) *
                                                                                cVar44 - (0xff < 
                                                  sVar3),(0 < sVar58) * (sVar58 < 0x100) * cVar29 -
                                                         (0xff < sVar58))))))));
            uVar26 = uVar26 + 8;
            uVar51 = uVar51 + 8;
            iVar19 = iVar19 + 8;
            iVar52 = iVar52 + 8;
            iVar53 = iVar53 + 8;
            iVar54 = iVar54 + 8;
            iVar55 = iVar55 + 8;
            iVar56 = iVar56 + 8;
            iVar57 = iVar57 + 8;
          } while (uVar24 != uVar26);
          lVar25 = local_f8;
          uVar27 = uVar24 + uVar27;
          uVar22 = uVar16;
          if (uVar28 == uVar24) goto LAB_14261352b;
        }
LAB_142613510:
        do {
          local_228[uVar27] = (char)uVar2 + (char)uVar27;
          uVar27 = uVar27 + 1;
          lVar25 = local_f8;
          uVar22 = uVar16;
        } while (uVar17 != uVar27);
      }
LAB_14261352b:
      if ((uVar2 & 0xff0000) != 0) {
        local_228[uVar17] = '\0';
        uVar22 = uVar16 + 1;
        if ((int)uVar23 < 0) {
          uVar23 = (uint)uVar21;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != local_120);
    if (uVar22 < 0x100) goto LAB_142613587;
  }
LAB_1426136b1:
  iVar19 = (int)local_100 - uVar23;
  uVar22 = uVar23;
  if ((int)uVar23 < 1) {
    uVar22 = 0;
  }
  if ((int)uVar23 < 0) {
    iVar19 = 0;
  }
  if (*param_5 < 1) {
    uVar23 = *(uint *)(param_1 + 0x4c);
    if ((int)uVar23 < iVar19 + param_4) {
      uVar23 = iVar19 + param_4 + 3U & 0xfffffffc;
      pvVar18 = (void *)FUN_1424da030((longlong)(int)(uVar23 * 4 + 0x100));
      if (pvVar18 == (void *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        *param_5 = 7;
        goto LAB_14261325a;
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x40));
      }
      *(void **)(param_1 + 0x40) = pvVar18;
      *(uint *)(param_1 + 0x4c) = uVar23;
      lVar25 = local_f8;
    }
    else {
      pvVar18 = *(void **)(param_1 + 0x40);
    }
    memcpy((void *)((longlong)pvVar18 + (longlong)(int)uVar23 * 4),local_228,0x100);
    memcpy(pvVar18,local_108,(longlong)(param_4 * 4));
    pvVar18 = (void *)((longlong)pvVar18 + (longlong)param_4 * 4);
    memcpy(pvVar18,(void *)(lVar25 + (ulonglong)uVar22 * 4),(longlong)(iVar19 * 4));
    *(longlong *)(param_1 + 0x20) =
         (longlong)*(int *)(param_1 + 0x4c) * 4 + *(longlong *)(param_1 + 0x40);
    *(int *)(param_1 + 0x48) = param_4;
    *(void **)(param_1 + 0x30) = pvVar18;
    *(int *)(param_1 + 0x38) = iVar19;
  }
LAB_14261325a:
  FUN_142517df0(local_128);
                    /* WARNING: Read-only address (ram,0x0001499d1ec0) is written */
  return;
}



// FUNCTION 1426137d0 Unwind@1426137d0 body=213 status=ok
// SIG undefined Unwind@1426137d0(void)

void Unwind_1426137d0(undefined8 param_1,longlong param_2)

{
  FUN_142517df0(param_2 + 0x130);
  return;
}



// FUNCTION 1426138b0 FUN_1426138b0 body=49 status=ok
// SIG undefined FUN_1426138b0(void)

uint FUN_1426138b0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 < *(uint *)(param_1 + 0x28)) {
    puVar2 = *(uint **)(param_1 + 0x30);
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (uVar1 <= (param_2 | 0xffff));
    param_2 = param_2 + uVar1 * 0x1000000;
  }
  return param_2;
}



// FUNCTION 1426138f0 FUN_1426138f0 body=61 status=ok
// SIG undefined FUN_1426138f0(void)

void FUN_1426138f0(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (0 < *param_4) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0xffff0fff;
  if (3 < param_2) {
    if (param_2 == 0xffffffff) {
      *(uint *)(param_1 + 0x18) = uVar1 | param_3 & 0xf000;
      return;
    }
    if (param_2 != 0xf) {
      *param_4 = 1;
      return;
    }
  }
  *(uint *)(param_1 + 0x18) = uVar1 | param_2 << 0xc;
  return;
}



// FUNCTION 142613930 FUN_142613930 body=63 status=ok
// SIG undefined FUN_142613930(void)

void FUN_142613930(longlong param_1,uint param_2,int param_3,uint param_4,int *param_5)

{
  if (0 < *param_5) {
    return;
  }
  if (param_3 == -1) {
    *(uint *)(param_1 + 0x18) =
         (param_4 ^ *(uint *)(param_1 + 0x18)) & param_2 ^ *(uint *)(param_1 + 0x18);
    return;
  }
  if (param_3 == 0x10) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & ~param_2;
    return;
  }
  if (param_3 == 0x11) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_2;
    return;
  }
  *param_5 = 1;
  return;
}



// FUNCTION 142613970 FUN_142613970 body=89 status=ok
// SIG undefined FUN_142613970(void)

void FUN_142613970(longlong param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (0 < *param_4) {
    return;
  }
  if (param_2 + 1U < 0x1b) {
    uVar1 = *(uint *)(param_1 + 0x18) & 0xfffffcff;
    switch(param_2) {
    case 0x10:
      *(uint *)(param_1 + 0x18) = uVar1;
      return;
    case 0x18:
      *(uint *)(param_1 + 0x18) = uVar1 | 0x200;
      return;
    case 0x19:
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x300;
      return;
    case -1:
      *(uint *)(param_1 + 0x18) = uVar1 | param_3 & 0x300;
      return;
    }
  }
  *param_4 = 1;
  return;
}



// FUNCTION 1426139d0 FUN_1426139d0 body=58 status=ok
// SIG undefined FUN_1426139d0(void)

void FUN_1426139d0(longlong param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (0 < *param_4) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0xfffffff3;
  if (param_2 == -1) {
    *(uint *)(param_1 + 0x18) = uVar1 | param_3 & 0xc;
    return;
  }
  if (param_2 == 0x14) {
    *(uint *)(param_1 + 0x18) = uVar1 | 4;
    return;
  }
  if (param_2 == 0x15) {
    *(uint *)(param_1 + 0x18) = uVar1;
    return;
  }
  *param_4 = 1;
  return;
}



// FUNCTION 142613a10 FUN_142613a10 body=51 status=ok
// SIG undefined FUN_142613a10(void)

void FUN_142613a10(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  if (0 < *param_4) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0xffffff8f;
  if (param_2 < 4) {
    *(uint *)(param_1 + 0x18) = uVar1 | param_2 << 4;
    return;
  }
  if (param_2 == 0xffffffff) {
    *(uint *)(param_1 + 0x18) = uVar1 | param_3 & 0x70;
    return;
  }
  *param_4 = 1;
  return;
}



// FUNCTION 142613a50 FUN_142613a50 body=65 status=ok
// SIG undefined FUN_142613a50(void)

void FUN_142613a50(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  if (*param_3 < 1) {
    *(int *)(param_1 + 0xc) = *param_3;
    *param_1 = param_2;
    param_1[1] = param_2[4];
    FUN_14257f9a0(*param_2,0,&LAB_142613aa0,param_1);
    *param_3 = *(int *)(param_1 + 0xc);
  }
  return;
}



// FUNCTION 142613ab0 FUN_142613ab0 body=381 status=ok
// SIG undefined FUN_142613ab0(void)

bool FUN_142613ab0(undefined8 *param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((~param_4 & 0xc0) == 0) {
    param_4 = FUN_1425638b0(*param_1,param_4);
    if (param_4 == 0xc0) goto LAB_142613ae5;
  }
  if ((int)param_3 <= (int)param_2) {
    param_3 = param_2;
  }
  do {
    plVar2 = *(longlong **)param_1[1];
    if (param_2 < 0xd800) {
      uVar1 = *(ushort *)(*plVar2 + (ulonglong)(param_2 >> 5) * 2);
LAB_142613b8c:
      iVar4 = (param_2 & 0x1f) + (uint)uVar1 * 4;
    }
    else {
      if (param_2 < 0x10000) {
        lVar5 = *plVar2;
        uVar6 = (ulonglong)((param_2 >> 5) + 0x140);
        if (0xdbff < param_2) {
          uVar6 = (ulonglong)(param_2 >> 5);
        }
LAB_142613b87:
        uVar1 = *(ushort *)(lVar5 + uVar6 * 2);
        goto LAB_142613b8c;
      }
      iVar4 = 0x80;
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)((longlong)plVar2 + 0x2c)) {
          lVar5 = *plVar2;
          uVar6 = (ulonglong)(param_2 >> 5 & 0x3f) +
                  (ulonglong)*(ushort *)(lVar5 + 0x1040 + (ulonglong)(param_2 >> 0xb) * 2);
          goto LAB_142613b87;
        }
        iVar4 = (int)plVar2[6];
      }
    }
    uVar3 = FUN_1425638e0((longlong *)param_1[1],*(undefined4 *)(plVar2[2] + (longlong)iVar4 * 4));
    if ((((param_4 & 0xc0) == 0xc0) &&
        ((4 < (param_4 & 0xf) || ((0x16U >> (param_4 & 0xf) & 1) == 0)))) ||
       (((~uVar3 & 0xc0) == 0 && ((4 < (uVar3 & 0xf) || ((0x16U >> (uVar3 & 0xf) & 1) == 0)))))) {
      FUN_142613c40(param_1,param_2,param_4,uVar3);
    }
    else if (param_4 != uVar3) {
      FUN_142513960(param_1[2],param_2);
    }
    param_2 = param_2 + 1;
  } while (param_3 + 1 != param_2);
LAB_142613ae5:
  return *(int *)(param_1 + 0xc) < 1;
}



// FUNCTION 142613c40 FUN_142613c40 body=1369 status=ok
// SIG undefined FUN_142613c40(void)

void FUN_142613c40(longlong *param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  undefined1 local_c8 [40];
  undefined1 local_a0 [68];
  undefined4 local_5c;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar8 = param_4 & 0xffffffff;
  uVar10 = param_3 & 0xffffffff;
  uVar6 = (uint)param_4;
  if (((uint)param_3 & 0xcf) == 200) {
    lVar2 = *(longlong *)(*param_1 + 0x18);
    uVar10 = param_3 >> 0xd & 0x7ffff;
    lVar1 = lVar2 + uVar10 * 2;
    uVar5 = FUN_1425638e0(*param_1,CONCAT22(*(undefined2 *)(lVar2 + uVar10 * 2),
                                            *(undefined2 *)(lVar2 + 2 + uVar10 * 2)));
    uVar10 = (ulonglong)uVar5;
    if ((uVar6 & 0xcf) == 200) {
      lVar2 = *(longlong *)(param_1[1] + 0x18);
      uVar8 = (ulonglong)(uVar6 >> 0xd);
      uVar6 = FUN_1425638e0(param_1[1],
                            CONCAT22(*(undefined2 *)(lVar2 + uVar8 * 2),
                                     *(undefined2 *)(lVar2 + 2 + uVar8 * 2)));
      FUN_1426142a0(param_1,param_2,lVar1 + 4,lVar2 + uVar8 * 2 + 4);
      uVar8 = (ulonglong)uVar6;
    }
    else {
      lVar2 = *param_1;
      local_50 = uVar8;
      FUN_1426c6b30(local_c8,lVar1 + 4,0,param_1 + 0xc);
      while (cVar4 = FUN_1426c6c60(local_c8,param_1 + 0xc), cVar4 != '\0') {
        FUN_142614970(param_1,lVar2,local_a0,param_2,local_5c);
      }
LAB_142613de9:
      FUN_1426c6c30(local_c8);
      uVar8 = local_50;
    }
  }
  else if ((uVar6 & 0xcf) == 200) {
    lVar1 = *(longlong *)(param_1[1] + 0x18);
    uVar8 = param_4 >> 0xd & 0x7ffff;
    local_50 = FUN_1425638e0(param_1[1],
                             CONCAT22(*(undefined2 *)(lVar1 + uVar8 * 2),
                                      *(undefined2 *)(lVar1 + 2 + uVar8 * 2)));
    lVar2 = param_1[1];
    FUN_1426c6b30(local_c8,lVar1 + uVar8 * 2 + 4,0,param_1 + 0xc);
    while (cVar4 = FUN_1426c6c60(local_c8,param_1 + 0xc), cVar4 != '\0') {
      FUN_142614970(param_1,lVar2,local_a0,param_2,local_5c);
    }
    goto LAB_142613de9;
  }
  if (((uint)uVar10 & 0xcf) == 0xc9) {
    puVar14 = (undefined2 *)((uVar10 >> 0xd) * 2 + *(longlong *)(*param_1 + 0x18));
    uVar15 = uVar10 & 0x100;
    uVar10 = 1;
    if (uVar15 == 0) {
      uVar6 = FUN_1425638e0(*param_1,CONCAT22(*puVar14,puVar14[1]));
      uVar10 = (ulonglong)uVar6;
    }
    if (((uint)uVar8 & 0xcf) == 0xc9) {
      puVar11 = (undefined2 *)((uVar8 >> 0xd & 0x7ffff) * 2 + *(longlong *)(param_1[1] + 0x18));
      uVar15 = uVar8 & 0x100;
      uVar8 = 1;
      if (uVar15 == 0) {
        uVar6 = FUN_1425638e0(param_1[1],CONCAT22(*puVar11,puVar11[1]));
        uVar8 = (ulonglong)uVar6;
      }
      FUN_1426145c0(param_1,param_2,puVar14 + 2,puVar11 + 2);
    }
    else {
      FUN_1426c6b30(local_c8,puVar14 + 2,0,param_1 + 0xc);
      while (cVar4 = FUN_1426c6c60(local_c8,param_1 + 0xc), cVar4 != '\0') {
        FUN_142614b30(param_1,param_2,local_a0);
      }
LAB_142613f6e:
      FUN_1426c6c30(local_c8);
    }
  }
  else if (((uint)uVar8 & 0xcf) == 0xc9) {
    lVar1 = *(longlong *)(param_1[1] + 0x18);
    uVar15 = uVar8 >> 0xd & 0x7ffff;
    uVar6 = FUN_1425638e0(param_1[1],
                          CONCAT22(*(undefined2 *)(lVar1 + uVar15 * 2),
                                   *(undefined2 *)(lVar1 + 2 + uVar15 * 2)));
    uVar8 = (ulonglong)uVar6;
    FUN_1426c6b30(local_c8,lVar1 + uVar15 * 2 + 4,0,param_1 + 0xc);
    while (cVar4 = FUN_1426c6c60(local_c8,param_1 + 0xc), cVar4 != '\0') {
      FUN_142614b30(param_1,param_2,local_a0);
    }
    goto LAB_142613f6e;
  }
  uVar5 = (uint)uVar10;
  uVar12 = (uint)uVar8;
  uVar6 = 0xffffffff;
  if (((~uVar12 & 0xc0) == 0) && (uVar6 = uVar12 & 0xf, uVar6 == 0xe)) {
    if ((uVar5 & 0xcf) != 0xc1) goto LAB_14261417a;
    uVar7 = FUN_142620c40(param_2,*(undefined8 *)
                                   (*(longlong *)(param_1[1] + 0x10) + (uVar8 >> 0xd & 0x7ffff) * 8)
                         );
    uVar6 = 0xe;
    if ((uVar5 & 0xffffff00) != uVar7) goto LAB_14261417a;
  }
  uVar7 = -(uint)((~uVar5 & 0xc0) != 0) | uVar5 & 0xf;
  if (uVar7 == uVar6) {
    if (uVar7 == 0xc) {
      iVar9 = param_2 + -0xac00;
      cVar4 = FUN_142512880(param_1[2],
                            ((uint)((ulonglong)((longlong)iVar9 * 0x6f74ae27) >> 0x28) -
                            (iVar9 >> 0x1f)) + 0x1100 & 0xffff);
      if (cVar4 == '\0') {
        iVar13 = (int)((ulonglong)((longlong)iVar9 * -0x6db6db6d) >> 0x20) + param_2 + -0xac00;
        iVar13 = (iVar13 >> 4) - (iVar13 >> 0x1f);
        cVar4 = FUN_142512880(param_1[2],iVar13 % 0x15 + 0x1161);
        if (cVar4 == '\0') {
          iVar9 = iVar9 + iVar13 * -0x1c;
          if (iVar9 == 0) {
            return;
          }
          cVar4 = FUN_142512880(param_1[2],iVar9 + 0x11a7);
          if (cVar4 == '\0') {
            return;
          }
        }
      }
    }
    else {
      uVar6 = (uint)(uVar10 >> 8);
      uVar3 = (uint)(uVar8 >> 8);
      if (uVar7 == 6) {
        uVar6 = uVar6 & 0x1f;
        if (uVar6 == (uVar3 & 0x1f)) {
          if ((uVar10 & 0x1f00) == 0) {
            return;
          }
          uVar8 = 0;
          while (*(longlong *)
                  ((ulonglong)(uVar5 >> 0xd) * 8 + *(longlong *)(*param_1 + 0x10) + uVar8 * 8) ==
                 *(longlong *)
                  ((ulonglong)(uVar12 >> 0xd) * 8 + *(longlong *)(param_1[1] + 0x10) + uVar8 * 8)) {
            uVar8 = uVar8 + 1;
            if (uVar6 == uVar8) {
              return;
            }
          }
        }
      }
      else if (uVar7 == 5) {
        uVar6 = uVar6 & 0x1f;
        if (uVar6 == (uVar3 & 0x1f)) {
          if ((uVar10 & 0x1f00) == 0) {
            return;
          }
          uVar8 = 0;
          while (*(int *)((ulonglong)(uVar5 >> 0xd) * 4 + *(longlong *)(*param_1 + 8) + uVar8 * 4)
                 == *(int *)((ulonglong)(uVar12 >> 0xd) * 4 + *(longlong *)(param_1[1] + 8) +
                            uVar8 * 4)) {
            uVar8 = uVar8 + 1;
            if (uVar6 == uVar8) {
              return;
            }
          }
        }
      }
      else if (uVar5 == uVar12) {
        return;
      }
    }
  }
LAB_14261417a:
  FUN_1426148a0(param_1,param_2);
  return;
}



// FUNCTION 1426141a0 Unwind@1426141a0 body=55 status=ok
// SIG undefined Unwind@1426141a0(void)

void Unwind_1426141a0(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x30);
  return;
}



// FUNCTION 1426141e0 Unwind@1426141e0 body=55 status=ok
// SIG undefined Unwind@1426141e0(void)

void Unwind_1426141e0(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x30);
  return;
}



// FUNCTION 142614220 Unwind@142614220 body=55 status=ok
// SIG undefined Unwind@142614220(void)

void Unwind_142614220(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x30);
  return;
}



// FUNCTION 142614260 Unwind@142614260 body=55 status=ok
// SIG undefined Unwind@142614260(void)

void Unwind_142614260(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x30);
  return;
}



// FUNCTION 1426142a0 FUN_1426142a0 body=566 status=ok
// SIG undefined FUN_1426142a0(void)

void FUN_1426142a0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 local_180 [64];
  undefined1 local_140 [40];
  undefined1 local_118 [68];
  undefined4 local_d4;
  undefined1 local_c8 [40];
  undefined1 local_a0 [68];
  undefined4 local_5c;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar1 = param_1 + 0xc;
  FUN_1426c6b30(local_140,param_3,0,puVar1);
  FUN_1426c6b30(local_c8,param_4,0,puVar1);
  FUN_1424a6c10(local_180,0xffff);
  local_50 = param_1 + 3;
  do {
    puVar9 = (undefined1 *)0x0;
    puVar10 = (undefined1 *)0x0;
LAB_142614326:
    if (puVar10 == (undefined1 *)0x0) {
      cVar3 = FUN_1426c6c60(local_140,puVar1);
      puVar10 = local_180;
      if (cVar3 != '\0') {
        puVar10 = local_118;
      }
    }
    puVar8 = puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      cVar3 = FUN_1426c6c60(local_c8,puVar1);
      puVar9 = local_a0;
      puVar8 = local_180;
      if (cVar3 == '\0') goto LAB_142614355;
    }
    else {
LAB_142614355:
      puVar9 = puVar8;
      if ((puVar10 == local_180) && (puVar8 == local_180)) {
        FUN_140859a90(local_180);
        FUN_1426c6c30(local_c8);
        FUN_1426c6c30(local_140);
        return;
      }
    }
    uVar4 = *(ushort *)(puVar9 + 8);
    uVar2 = *(ushort *)(puVar10 + 8);
    if ((uVar4 & 1) == 0) {
      if ((short)uVar2 < 0) {
        iVar7 = *(int *)(puVar10 + 0xc);
        if (-1 < (short)uVar4) goto LAB_1426143a6;
LAB_1426143cd:
        uVar5 = *(uint *)(puVar9 + 0xc);
      }
      else {
        iVar7 = (int)(short)uVar2 >> 5;
        if ((short)uVar4 < 0) goto LAB_1426143cd;
LAB_1426143a6:
        uVar5 = (int)(short)uVar4 >> 5;
      }
      uVar6 = 0;
      if (0 < (int)uVar5) {
        uVar6 = uVar5;
      }
      if ((uVar4 & 2) == 0) {
        puVar8 = *(undefined1 **)(puVar9 + 0x18);
      }
      else {
        puVar8 = puVar9 + 10;
      }
      cVar3 = FUN_1424a7e30(puVar10,0,iVar7,puVar8,(int)uVar5 >> 0x1f & uVar5,uVar6);
      if (-1 < cVar3) goto LAB_142614411;
      FUN_142614970(param_1,*param_1,puVar10,param_2,local_d4);
      puVar10 = (undefined1 *)0x0;
      goto LAB_142614326;
    }
    cVar3 = (uVar2 & 1) == 0;
LAB_142614411:
    if (cVar3 != '\0') {
      FUN_142614970(param_1,param_1[1],puVar9,param_2,local_5c);
      puVar9 = (undefined1 *)0x0;
      goto LAB_142614326;
    }
    FUN_1424a7c80(local_50,puVar10);
    if (*(short *)(param_1 + 4) < 0) {
      iVar7 = *(int *)((longlong)param_1 + 0x24);
    }
    else {
      iVar7 = (int)*(short *)(param_1 + 4) >> 5;
    }
    FUN_1424a98a0(local_50,0,iVar7);
    FUN_142613c40(param_1,param_2,local_d4,local_5c);
    uVar4 = *(ushort *)(param_1 + 4) & 0x1f;
    if ((*(ushort *)(param_1 + 4) & 1) != 0) {
      uVar4 = 2;
    }
    *(ushort *)(param_1 + 4) = uVar4;
  } while( true );
}



// FUNCTION 142614500 Unwind@142614500 body=55 status=ok
// SIG undefined Unwind@142614500(void)

void Unwind_142614500(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 142614540 Unwind@142614540 body=55 status=ok
// SIG undefined Unwind@142614540(void)

void Unwind_142614540(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0xf0);
  return;
}



// FUNCTION 142614580 Unwind@142614580 body=55 status=ok
// SIG undefined Unwind@142614580(void)

void Unwind_142614580(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x78);
  return;
}



// FUNCTION 1426145c0 FUN_1426145c0 body=502 status=ok
// SIG undefined FUN_1426145c0(void)

void FUN_1426145c0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 local_180 [40];
  undefined1 local_158 [68];
  undefined4 local_114;
  undefined1 local_108 [40];
  undefined1 local_e0 [68];
  undefined4 local_9c;
  undefined1 local_90 [70];
  undefined2 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x60;
  FUN_1426c6b30(local_180,param_3,0,lVar1);
  FUN_1426c6b30(local_108,param_4,0,lVar1);
  FUN_1424a6c10(local_90,0xffff);
  local_4a = 0xffff;
  FUN_1424a6cf0(local_90,&local_4a,0,1);
  do {
    puVar9 = (undefined1 *)0x0;
    puVar10 = (undefined1 *)0x0;
LAB_142614663:
    if (puVar10 == (undefined1 *)0x0) {
      cVar4 = FUN_1426c6c60(local_180,lVar1);
      puVar10 = local_90;
      if (cVar4 != '\0') {
        puVar10 = local_158;
      }
    }
    puVar8 = puVar9;
    if (puVar9 == (undefined1 *)0x0) {
      cVar4 = FUN_1426c6c60(local_108,lVar1);
      puVar9 = local_e0;
      puVar8 = local_90;
      if (cVar4 == '\0') goto LAB_142614685;
    }
    else {
LAB_142614685:
      puVar9 = puVar8;
      if ((puVar10 == local_90) && (puVar9 == local_90)) {
        FUN_140859a90(local_90);
        FUN_1426c6c30(local_108);
        FUN_1426c6c30(local_180);
        return;
      }
    }
    uVar2 = *(ushort *)(puVar9 + 8);
    uVar3 = *(ushort *)(puVar10 + 8);
    if ((uVar2 & 1) == 0) {
      if ((short)uVar3 < 0) {
        iVar7 = *(int *)(puVar10 + 0xc);
        if (-1 < (short)uVar2) goto LAB_1426146d4;
LAB_1426146fd:
        uVar5 = *(uint *)(puVar9 + 0xc);
      }
      else {
        iVar7 = (int)(short)uVar3 >> 5;
        if ((short)uVar2 < 0) goto LAB_1426146fd;
LAB_1426146d4:
        uVar5 = (int)(short)uVar2 >> 5;
      }
      uVar6 = 0;
      if (0 < (int)uVar5) {
        uVar6 = uVar5;
      }
      if ((uVar2 & 2) == 0) {
        puVar8 = *(undefined1 **)(puVar9 + 0x18);
      }
      else {
        puVar8 = puVar9 + 10;
      }
      cVar4 = FUN_1424a7e30(puVar10,0,iVar7,puVar8,(int)uVar5 >> 0x1f & uVar5,uVar6);
      if (-1 < cVar4) goto LAB_142614742;
      FUN_142614b30(param_1,param_2,puVar10);
      puVar10 = (undefined1 *)0x0;
      goto LAB_142614663;
    }
    cVar4 = (uVar3 & 1) == 0;
LAB_142614742:
    if (cVar4 != '\0') {
      FUN_142614b30(param_1,param_2,puVar9);
      puVar9 = (undefined1 *)0x0;
      goto LAB_142614663;
    }
    *(undefined1 **)(param_1 + 0x58) = puVar10;
    FUN_142613c40(param_1,param_2,local_114,local_9c);
    *(undefined8 *)(param_1 + 0x58) = 0;
  } while( true );
}



// FUNCTION 1426147e0 Unwind@1426147e0 body=58 status=ok
// SIG undefined Unwind@1426147e0(void)

void Unwind_1426147e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x128);
  return;
}



// FUNCTION 142614820 Unwind@142614820 body=55 status=ok
// SIG undefined Unwind@142614820(void)

void Unwind_142614820(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0xb0);
  return;
}



// FUNCTION 142614860 Unwind@142614860 body=55 status=ok
// SIG undefined Unwind@142614860(void)

void Unwind_142614860(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x38);
  return;
}



// FUNCTION 1426148a0 FUN_1426148a0 body=159 status=ok
// SIG undefined FUN_1426148a0(void)

void FUN_1426148a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_68 [64];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((*(ushort *)(param_1 + 0x20) < 0x20) && (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_142513960(*(undefined8 *)(param_1 + 0x10),param_2);
    return;
  }
  FUN_1424a6be0(local_68,param_1 + 0x18);
  FUN_1424a7d60(local_68,param_2);
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(short *)(lVar1 + 8) < 0) {
      iVar2 = *(int *)(lVar1 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(lVar1 + 8) >> 5;
    }
    FUN_1424a9690(local_68,lVar1,0,iVar2);
  }
  FUN_142513b40(*(undefined8 *)(param_1 + 0x10),local_68);
  FUN_140859a90(local_68);
  return;
}



// FUNCTION 142614940 Unwind@142614940 body=36 status=ok
// SIG undefined Unwind@142614940(void)

void Unwind_142614940(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142614970 FUN_142614970 body=305 status=ok
// SIG undefined FUN_142614970(void)

void FUN_142614970(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 local_b8 [40];
  undefined1 local_90 [80];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar1 = param_1 + 0x18;
  FUN_1424a7c80(lVar1,param_3);
  if (*(short *)(param_1 + 0x20) < 0) {
    iVar7 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar7 = (int)*(short *)(param_1 + 0x20) >> 5;
  }
  FUN_1424a98a0(lVar1,0,iVar7);
  uVar5 = FUN_1425638e0(param_2,param_5);
  if ((uVar5 & 0xcf) == 0xc9) {
    FUN_1426c6b30(local_b8,*(longlong *)(param_2 + 0x18) + (ulonglong)(uVar5 >> 0xd) * 2 + 4,0,
                  param_1 + 0x60);
    while( true ) {
      cVar3 = FUN_1426c6c60(local_b8,param_1 + 0x60);
      if (cVar3 == '\0') break;
      FUN_142614b30(param_1,param_4,local_90);
    }
    FUN_1426c6c30(local_b8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_1424a6be0(local_b8,lVar1);
  uVar6 = FUN_1424a7d60(local_b8,param_4);
  FUN_142513b40(uVar2,uVar6);
  FUN_140859a90(local_b8);
  uVar4 = 2;
  if ((*(ushort *)(param_1 + 0x20) & 1) == 0) {
    uVar4 = *(ushort *)(param_1 + 0x20) & 0x1f;
  }
  *(ushort *)(param_1 + 0x20) = uVar4;
  return;
}



// FUNCTION 142614ab0 Unwind@142614ab0 body=51 status=ok
// SIG undefined Unwind@142614ab0(void)

void Unwind_142614ab0(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x20);
  return;
}



// FUNCTION 142614af0 Unwind@142614af0 body=51 status=ok
// SIG undefined Unwind@142614af0(void)

void Unwind_142614af0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142614b30 FUN_142614b30 body=125 status=ok
// SIG undefined FUN_142614b30(void)

void FUN_142614b30(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_70 [64];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1424a6be0(local_70,param_1 + 0x18);
  uVar2 = FUN_1424a7d60(local_70,param_2);
  if (*(short *)(param_3 + 8) < 0) {
    iVar3 = *(int *)(param_3 + 0xc);
  }
  else {
    iVar3 = (int)*(short *)(param_3 + 8) >> 5;
  }
  uVar2 = FUN_1424a9690(uVar2,param_3,0,iVar3);
  FUN_142513b40(uVar1,uVar2);
  FUN_140859a90(local_70);
  return;
}



// FUNCTION 142614bb0 Unwind@142614bb0 body=40 status=ok
// SIG undefined Unwind@142614bb0(void)

void Unwind_142614bb0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 142614be0 FUN_142614be0 body=1 status=ok
// SIG undefined FUN_142614be0(void)

void FUN_142614be0(void)

{
  return;
}



// FUNCTION 142614bf0 FUN_142614bf0 body=136 status=ok
// SIG undefined FUN_142614bf0(void)

void FUN_142614bf0(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (*param_3 < 1) {
    *(int *)(param_1 + 0x5f) = *param_3;
    if (param_2[4] != 0) {
      *(undefined1 *)((longlong)param_1 + 0x21) = 0xff;
    }
    *param_1 = param_2;
    FUN_14257f9a0(*param_2,0,FUN_142614c80,param_1);
    iVar2 = *(int *)(param_1 + 0x5f);
    if ((param_2[4] != 0) && (iVar2 < 1)) {
      FUN_1425151b0(param_1 + 5);
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      puVar1 = (undefined8 *)param_2[4];
      *param_1 = puVar1;
      FUN_14257f9a0(*puVar1,0,FUN_142614c80,param_1);
      iVar2 = *(int *)(param_1 + 0x5f);
    }
    *param_3 = iVar2;
  }
  return;
}



// FUNCTION 142614c80 FUN_142614c80 body=239 status=ok
// SIG undefined FUN_142614c80(void)

bool FUN_142614c80(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(char *)(param_1 + 0x21) < '\0') {
      if (param_4 == 0xc0) {
        return true;
      }
      FUN_142511a00(param_1 + 0x28,param_2,param_3);
    }
    else {
      lVar1 = param_1 + 0x28;
      if (param_2 == param_3) {
        cVar4 = FUN_142512880(lVar1,param_2);
        if (cVar4 != '\0') {
          return true;
        }
      }
      else {
        cVar4 = FUN_142512dc0(lVar1,param_2,param_3);
        if (cVar4 == '\0') {
          lVar2 = param_1 + 0xf0;
          uVar3 = FUN_1425133e0(lVar2,param_2,param_3);
          FUN_142514040(uVar3,lVar1);
          iVar5 = FUN_142512820(lVar2);
          if (0 < iVar5) {
            iVar8 = 0;
            do {
              uVar6 = FUN_142512830(lVar2,iVar8);
              uVar7 = FUN_142512850(lVar2,iVar8);
              FUN_142614d70(param_1,uVar7,uVar6,param_4);
              iVar8 = iVar8 + 1;
            } while (iVar5 != iVar8);
          }
          goto LAB_142614cf6;
        }
      }
    }
  }
  FUN_142614d70(param_1,param_2,param_3,param_4);
LAB_142614cf6:
  return *(int *)(param_1 + 0x2f8) < 1;
}



// FUNCTION 142614d70 FUN_142614d70 body=1118 status=ok
// SIG undefined FUN_142614d70(void)

void FUN_142614d70(longlong *param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined **local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined1 *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined1 local_1c0 [320];
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined2 *local_68;
  undefined2 *puStack_60;
  undefined8 *local_58;
  int local_50;
  undefined2 local_4a;
  undefined8 local_48;
  
  uVar8 = (uint)param_4;
  local_48 = 0xfffffffffffffffe;
  if ((~uVar8 & 0xc0) != 0) {
LAB_142614dc1:
    plVar5 = (longlong *)param_1[3];
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    uVar6 = (ulonglong)(uVar8 << 8) & 0xffff | CONCAT44(uVar8,uVar8 << 0x10) & 0xffff0000ff000000;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 8);
    goto LAB_142614dfd;
  }
  puVar2 = (undefined8 *)*param_1;
  switch(uVar8 & 0xf) {
  default:
    goto switchD_142614dbf_caseD_0;
  case 1:
switchD_142614dbf_caseD_1:
    plVar5 = (longlong *)param_1[3];
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    uVar6 = (ulonglong)(uVar8 & 0xffffff00) << 0x20 | 0x5000500;
    goto LAB_142614e64;
  case 2:
switchD_142614dbf_caseD_2:
    plVar5 = (longlong *)param_1[3];
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    uVar6 = (ulonglong)(uVar8 & 0xffffff00);
LAB_142614e64:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 8);
LAB_142614dfd:
                    /* WARNING: Could not recover jumptable at 0x000142614e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar5,uVar6);
    return;
  case 3:
  case 7:
  case 0xd:
switchD_142614dbf_caseD_3:
    if (0 < (int)param_1[0x5f]) {
      return;
    }
    *(undefined4 *)(param_1 + 0x5f) = 5;
    return;
  case 4:
switchD_142614dbf_caseD_4:
    plVar5 = (longlong *)param_1[3];
    if (plVar5 != (longlong *)0x0) {
      plVar9 = param_1 + 0x40;
      param_1[0x40] = (CONCAT44((uint)param_4,(int)(param_4 >> 8)) & 0xff0000000000ff00) + 0x5000000
      ;
      param_1[0x41] = (ulonglong)(((uint)param_4 & 0xff00) << 0x10 | 0x500);
      lVar4 = *plVar5;
      uVar8 = 2;
LAB_142614eca:
      (**(code **)(lVar4 + 0x10))(plVar5,plVar9,uVar8);
    }
    break;
  case 5:
switchD_142614dbf_caseD_5:
    plVar5 = (longlong *)param_1[3];
    if (plVar5 != (longlong *)0x0) {
      uVar8 = (uint)(param_4 >> 8) & 0x1f;
      if ((param_4 & 0x1f00) != 0) {
        lVar4 = puVar2[1];
        uVar6 = 0;
        do {
          uVar1 = *(uint *)((param_4 >> 0xd & 0x7ffff) * 4 + lVar4 + uVar6 * 4);
          if ((uVar1 & 0xff) < 0xc0) {
            uVar11 = (ulonglong)(uVar1 & 0xff) << 8 |
                     CONCAT44(uVar1,uVar1 << 0x10) & 0xffff0000ff000000;
          }
          else {
            uVar11 = (ulonglong)(uVar1 & 0xffffff00);
            if ((uVar1 & 0xf) == 1) {
              uVar11 = uVar11 << 0x20 | 0x5000500;
            }
          }
          param_1[uVar6 + 0x40] = uVar11;
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar6);
      }
      plVar9 = param_1 + 0x40;
      lVar4 = *plVar5;
      goto LAB_142614eca;
    }
    break;
  case 6:
switchD_142614dbf_caseD_6:
    plVar5 = (longlong *)param_1[3];
    if (plVar5 != (longlong *)0x0) {
      uVar8 = (uint)(param_4 >> 8) & 0x1f;
      plVar9 = (longlong *)((param_4 >> 0xd & 0x7ffff) * 8 + puVar2[2]);
      lVar4 = *plVar5;
      goto LAB_142614eca;
    }
    break;
  case 8:
switchD_142614dbf_caseD_8:
    FUN_142615210(param_1,param_2,param_3);
    return;
  case 9:
switchD_142614dbf_caseD_9:
    FUN_1426153b0(param_1,param_2,param_3);
    return;
  case 10:
switchD_142614dbf_caseD_a:
    puVar10 = (uint *)((param_4 >> 0xd & 0x7ffff) * 4 + puVar2[1]);
    do {
      uVar8 = *puVar10;
      param_4 = (ulonglong)uVar8;
      if ((~uVar8 & 0xc0) != 0) goto LAB_142614dc1;
      switch(uVar8 & 0xf) {
      default:
        goto switchD_142614dbf_caseD_0;
      case 1:
        goto switchD_142614dbf_caseD_1;
      case 2:
        goto switchD_142614dbf_caseD_2;
      case 3:
      case 7:
      case 0xd:
        goto switchD_142614dbf_caseD_3;
      case 4:
        goto switchD_142614dbf_caseD_4;
      case 5:
        goto switchD_142614dbf_caseD_5;
      case 6:
        goto switchD_142614dbf_caseD_6;
      case 8:
        goto switchD_142614dbf_caseD_8;
      case 9:
        goto switchD_142614dbf_caseD_9;
      case 10:
        goto switchD_142614dbf_caseD_a;
      case 0xb:
switchD_142614dbf_caseD_b:
        puVar10 = (uint *)puVar2[1];
        break;
      case 0xc:
        goto switchD_142614dbf_caseD_c;
      }
    } while( true );
  case 0xb:
    goto switchD_142614dbf_caseD_b;
  case 0xc:
switchD_142614dbf_caseD_c:
    if (param_1[3] != 0) {
      local_1e8 = *puVar2;
      local_1d8 = 0;
      local_1d0 = local_1c0;
      local_1c8 = 0x28;
      local_1c4 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0xffffffff;
      local_6c = 0;
      local_1f0 = icu_64::UTF16CollationIterator::vftable;
      local_68 = (undefined2 *)0x0;
      puStack_60 = (undefined2 *)0x0;
      local_58 = (undefined8 *)0x0;
      local_1e0 = puVar2;
      if (param_2 <= param_3) {
        local_50 = param_3 + 1;
        iVar7 = param_2;
        do {
          local_4a = (undefined2)iVar7;
          FUN_1426192c0(&local_1f0);
          local_58 = &local_48;
          local_68 = &local_4a;
          puStack_60 = &local_4a;
          iVar3 = FUN_142619300(&local_1f0,param_1 + 0x5f);
          if (0 < (int)param_1[0x5f]) {
            thunk_FUN_1426191b0(&local_1f0);
            return;
          }
          (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],local_1d0,iVar3 + -1)
          ;
          iVar7 = iVar7 + 1;
        } while (local_50 != iVar7);
      }
      thunk_FUN_1426191b0(&local_1f0);
    }
    if (0x1f < *(ushort *)(param_1 + 0x38)) {
      return;
    }
    if (param_1[0x3f] != 0) {
      FUN_142615500(param_1,param_2,param_3);
      return;
    }
    if (param_1[2] == 0) {
      return;
    }
    FUN_142511a00(param_1[2],param_2,param_3);
    return;
  }
  if (*(ushort *)(param_1 + 0x38) < 0x20) {
    if (param_1[0x3f] != 0) {
      FUN_142615500(param_1,param_2,param_3);
      return;
    }
    if (param_1[2] != 0) {
      FUN_142511a00(param_1[2],param_2,param_3);
      return;
    }
  }
switchD_142614dbf_caseD_0:
  return;
}



// FUNCTION 1426151d0 Unwind@1426151d0 body=55 status=ok
// SIG undefined Unwind@1426151d0(void)

void Unwind_1426151d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1426191b0(param_2 + 0x28);
  return;
}



// FUNCTION 142615210 FUN_142615210 body=322 status=ok
// SIG undefined FUN_142615210(void)

void FUN_142615210(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined1 local_c0 [40];
  undefined1 local_98 [68];
  undefined4 local_54;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(*param_1 + 0x18);
  FUN_142614d70();
  if ((char)param_1[4] != '\0') {
    FUN_1426c6b30(local_c0,lVar1 + (ulonglong)(param_4 >> 0xd) * 2 + 4,0,param_1 + 0x5f);
    while( true ) {
      cVar2 = FUN_1426c6c60(local_c0,param_1 + 0x5f);
      if (cVar2 == '\0') break;
      FUN_1424a7c80(param_1 + 0x37,local_98);
      if ((short)param_1[0x38] < 0) {
        iVar4 = *(int *)((longlong)param_1 + 0x1c4);
      }
      else {
        iVar4 = (int)(short)param_1[0x38] >> 5;
      }
      FUN_1424a98a0(param_1 + 0x37,0,iVar4);
      FUN_142615500(param_1,param_2,param_3,param_1[1]);
      FUN_142615500(param_1,param_2,param_3,param_1[2]);
      FUN_142614d70(param_1,param_2,param_3,local_54);
    }
    uVar3 = 2;
    if ((*(ushort *)(param_1 + 0x38) & 1) == 0) {
      uVar3 = *(ushort *)(param_1 + 0x38) & 0x1f;
    }
    *(ushort *)(param_1 + 0x38) = uVar3;
    FUN_1426c6c30(local_c0);
  }
  return;
}



// FUNCTION 142615370 Unwind@142615370 body=55 status=ok
// SIG undefined Unwind@142615370(void)

void Unwind_142615370(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x28);
  return;
}



// FUNCTION 1426153b0 FUN_1426153b0 body=259 status=ok
// SIG undefined FUN_1426153b0(void)

void FUN_1426153b0(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 local_b8 [40];
  undefined1 local_90 [68];
  undefined4 local_4c;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar2 = (undefined2 *)((ulonglong)(param_4 >> 0xd) * 2 + *(longlong *)(*param_1 + 0x18));
  if ((param_4 & 0x100) == 0) {
    FUN_142614d70(param_1,param_2,param_3,CONCAT22(*puVar2,puVar2[1]));
  }
  FUN_1426c6b30(local_b8,puVar2 + 2,0,param_1 + 0x5f);
  while( true ) {
    cVar1 = FUN_1426c6c60(local_b8,param_1 + 0x5f);
    if (cVar1 == '\0') break;
    param_1[0x3f] = (longlong)local_90;
    FUN_142615500(param_1,param_2,param_3,param_1[1]);
    if (0x1f < *(ushort *)(param_1 + 0x38)) {
      FUN_142615500(param_1,param_2,param_3,param_1[2]);
    }
    FUN_142614d70(param_1,param_2,param_3,local_4c);
  }
  param_1[0x3f] = 0;
  FUN_1426c6c30(local_b8);
  return;
}



// FUNCTION 1426154c0 Unwind@1426154c0 body=51 status=ok
// SIG undefined Unwind@1426154c0(void)

void Unwind_1426154c0(undefined8 param_1,longlong param_2)

{
  FUN_1426c6c30(param_2 + 0x20);
  return;
}



// FUNCTION 142615500 FUN_142615500 body=297 status=ok
// SIG undefined FUN_142615500(void)

void FUN_142615500(longlong param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_78 [8];
  ushort local_70;
  uint local_6c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (param_4 != 0) {
    FUN_1424a6be0(local_78,param_1 + 0x1b8);
    if (param_3 <= param_2) {
      param_3 = param_2;
    }
    do {
      FUN_1424a7d60(local_78,param_2);
      lVar1 = *(longlong *)(param_1 + 0x1f8);
      if (lVar1 != 0) {
        if (*(short *)(lVar1 + 8) < 0) {
          iVar4 = *(int *)(lVar1 + 0xc);
        }
        else {
          iVar4 = (int)*(short *)(lVar1 + 8) >> 5;
        }
        FUN_1424a9690(local_78,lVar1,0,iVar4);
      }
      FUN_142513b40(param_4,local_78);
      if (*(short *)(param_1 + 0x1c0) < 0) {
        uVar3 = *(uint *)(param_1 + 0x1c4);
      }
      else {
        uVar3 = (int)*(short *)(param_1 + 0x1c0) >> 5;
      }
      if ((uVar3 == 0) && ((local_70 & 1) != 0)) {
        FUN_1424a8e40(local_78);
      }
      else {
        uVar2 = local_6c;
        if (-1 < (short)local_70) {
          uVar2 = (int)(short)local_70 >> 5;
        }
        if (uVar3 < uVar2) {
          if ((int)uVar3 < 0x400) {
            local_70 = (ushort)(uVar3 << 5) | local_70 & 0x1f;
          }
          else {
            local_70 = local_70 | 0xffe0;
            local_6c = uVar3;
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_3 + 1 != param_2);
    FUN_140859a90(local_78);
  }
  return;
}



// FUNCTION 142615640 Unwind@142615640 body=44 status=ok
// SIG undefined Unwind@142615640(void)

void Unwind_142615640(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 142615670 FUN_142615670 body=775 status=ok
// SIG undefined FUN_142615670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_142615670(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ushort uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint local_84;
  
  uVar13 = 0xffffffff;
  if ((param_4 == 0x180) && (pbVar4 = *(byte **)(param_1 + 0x58), pbVar4 != (byte *)0x0)) {
    if ((*(uint *)(param_2 + 0x18) & 0xc) == 0) {
      uVar23 = 0xbff;
    }
    else {
      uVar13 = *(uint *)(param_2 + 0x18) >> 4 & 7;
      if ((uint)*pbVar4 <= uVar13 + 1) {
        return 0xffffffff;
      }
      uVar23 = (uint)*(ushort *)(pbVar4 + (ulonglong)uVar13 * 2 + 2);
    }
    bVar20 = false;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      local_84 = 0;
      iVar18 = 0x1000;
      uVar22 = 0;
      uVar13 = 0;
      uVar17 = 0;
      do {
        uVar14 = FUN_142563bc0(param_1,iVar18);
        bVar2 = *(byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar14 >> 0x18));
        if ((uVar14 < 2) || (bVar2 != 0)) {
          uVar14 = uVar14 & 0xffffff | (uint)bVar2 << 0x18;
        }
        else {
          uVar14 = FUN_1426138b0(param_2,uVar14);
        }
        uVar21 = uVar22;
        uVar12 = uVar22;
        uVar16 = uVar14;
        if ((iVar18 != 0x1004) && (uVar21 = uVar13, uVar16 = uVar17, uVar14 != 0)) {
          if (uVar14 < uVar22) {
            return 0xffffffff;
          }
          uVar12 = uVar14;
          if (((uVar17 != 0) && (local_84 == 0)) && (local_84 = 0, uVar22 == uVar13)) {
            local_84 = uVar14;
          }
        }
        uVar22 = uVar12;
        iVar18 = iVar18 + 1;
        uVar13 = uVar21;
        uVar17 = uVar16;
      } while (iVar18 != 0x1008);
      uVar13 = FUN_142563bc0(param_1,0x19);
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar13 >> 0x18));
      if ((uVar13 < 2) || (bVar2 != 0)) {
        uVar13 = uVar13 & 0xffffff | (uint)bVar2 << 0x18;
      }
      else {
        uVar13 = FUN_1426138b0(param_2);
      }
      if (uVar13 < uVar22) {
        return 0xffffffff;
      }
      if (local_84 != 0) {
        uVar13 = local_84;
      }
      bVar20 = uVar13 <= uVar16 || uVar16 <= uVar21;
    }
    auVar11 = _DAT_149c4f070;
    auVar10 = _DAT_149c4f060;
    auVar9 = _DAT_149c4f050;
    pbVar4 = pbVar4 + (ulonglong)*pbVar4 * 2;
    if ((ulonglong)(param_3 - (longlong)pbVar4) < 0x10) {
      lVar15 = 1;
      do {
        uVar3 = *(ushort *)(pbVar4 + lVar15 * 2 + -2);
        uVar19 = uVar3 & 0xfff8;
        if (uVar3 <= uVar23) {
          uVar19 = 0;
        }
        if (0xfff < uVar3) {
          uVar19 = uVar3 & 0xfc00;
        }
        *(ushort *)(param_3 + -2 + lVar15 * 2) = uVar19;
        uVar3 = *(ushort *)(pbVar4 + lVar15 * 2);
        uVar19 = uVar3 & 0xfff8;
        if (uVar3 <= uVar23) {
          uVar19 = 0;
        }
        if (0xfff < uVar3) {
          uVar19 = uVar3 & 0xfc00;
        }
        *(ushort *)(param_3 + lVar15 * 2) = uVar19;
        lVar15 = lVar15 + 2;
      } while (lVar15 != 0x181);
    }
    else {
      lVar15 = 0;
      do {
        auVar1 = *(undefined1 (*) [16])(pbVar4 + lVar15 * 2);
        auVar24 = psubusw(auVar9,auVar1);
        auVar25._0_2_ = -(ushort)(auVar24._0_2_ == 0);
        auVar25._2_2_ = -(ushort)(auVar24._2_2_ == 0);
        auVar25._4_2_ = -(ushort)(auVar24._4_2_ == 0);
        auVar25._6_2_ = -(ushort)(auVar24._6_2_ == 0);
        auVar25._8_2_ = -(ushort)(auVar24._8_2_ == 0);
        auVar25._10_2_ = -(ushort)(auVar24._10_2_ == 0);
        auVar25._12_2_ = -(ushort)(auVar24._12_2_ == 0);
        auVar25._14_2_ = -(ushort)(auVar24._14_2_ == 0);
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar1._0_10_;
        auVar5._12_2_ = auVar1._6_2_;
        auVar6._8_2_ = auVar1._4_2_;
        auVar6._0_8_ = auVar1._0_8_;
        auVar6._10_4_ = auVar5._10_4_;
        auVar8._6_8_ = 0;
        auVar8._0_6_ = auVar6._8_6_;
        auVar7._4_2_ = auVar1._2_2_;
        auVar7._0_4_ = auVar1._0_4_;
        auVar7._6_8_ = SUB148(auVar8 << 0x40,6);
        auVar26._0_4_ = -(uint)(uVar23 < auVar1._8_2_);
        auVar26._4_4_ = -(uint)(uVar23 < auVar1._10_2_);
        auVar26._8_4_ = -(uint)(uVar23 < auVar1._12_2_);
        auVar26._12_4_ = -(uint)(uVar23 < auVar1._14_2_);
        auVar24._0_4_ = -(uint)(uVar23 < (auVar1._0_4_ & 0xffff));
        auVar24._4_4_ = -(uint)(uVar23 < auVar7._4_4_);
        auVar24._8_4_ = -(uint)((int)uVar23 < auVar6._8_4_);
        auVar24._12_4_ = -(uint)(uVar23 < auVar5._10_4_ >> 0x10);
        auVar24 = packssdw(auVar24,auVar26);
        *(undefined1 (*) [16])(param_3 + lVar15 * 2) =
             ~auVar25 & auVar24 & auVar1 & auVar11 | auVar1 & auVar25 & auVar10;
        lVar15 = lVar15 + 8;
      } while (lVar15 != 0x180);
    }
    if ((bVar20) || (uVar13 = *(uint *)(param_2 + 0x18), (uVar13 & 2) != 0)) {
      *(undefined1 (*) [16])(param_3 + 0x60) = (undefined1  [16])0x0;
      *(undefined4 *)(param_3 + 0x70) = 0;
      uVar13 = *(uint *)(param_2 + 0x18);
    }
    uVar13 = uVar23 << 0x10 | uVar13;
  }
                    /* WARNING: Read-only address (ram,0x000149c4f050) is written */
                    /* WARNING: Read-only address (ram,0x000149c4f060) is written */
                    /* WARNING: Read-only address (ram,0x000149c4f070) is written */
  return uVar13;
}



// FUNCTION 142615980 FUN_142615980 body=4115 status=ok
// SIG undefined FUN_142615980(void)

void FUN_142615980(byte *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                  longlong param_6,int param_7)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int *local_80;
  undefined4 *local_78;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  lVar3 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = param_1 + (ulonglong)*param_1 * 2;
  uVar11 = param_3 >> 0x10;
  local_64 = param_3 & 0xffff;
  local_4c = 0;
  local_50 = 0;
  uVar9 = 0;
  uVar4 = 0;
LAB_1426159e7:
  do {
    if (uVar4 == 0) {
      lVar7 = (longlong)local_4c;
      if (local_4c == param_5) {
        uVar4 = 2;
      }
      else {
        local_4c = local_4c + 1;
        uVar1 = *(ushort *)(param_4 + lVar7 * 2);
        uVar10 = (ulonglong)uVar1;
        if (uVar1 < 0x180) {
          uVar2 = *(ushort *)(param_2 + uVar10 * 2);
          uVar4 = (uint)uVar2;
          if (uVar2 == 0) {
            uVar8 = uVar10;
            if (((param_3 & 2) != 0) && (0xfff5 < (ushort)(uVar1 - 0x3a))) goto LAB_142615cd1;
LAB_142615a5d:
            uVar5 = (uint)*(ushort *)(param_1 + uVar8 * 2);
LAB_142615a62:
            uVar4 = uVar5;
            if (uVar5 < 0x1000) goto LAB_142615a72;
            uVar4 = uVar5 & 0xfc00;
          }
        }
        else {
          if ((uVar1 & 0xffc0) == 0x2000) {
            uVar8 = (ulonglong)(uVar1 - 0x1e80);
            goto LAB_142615a5d;
          }
          uVar5 = 1;
          if (uVar10 == 0xffff) {
            uVar5 = 0xfca8;
          }
          uVar4 = 3;
          if (uVar10 != 0xfffe) goto LAB_142615a62;
LAB_142615a72:
          if (uVar4 <= uVar11) {
            local_78 = &param_5;
            local_80 = &local_4c;
            local_88 = 0;
            uVar4 = FUN_142616aa0(param_1,uVar10,uVar4,param_4);
            if (uVar4 == 1) goto LAB_142615cd1;
            uVar5 = uVar4 & 0xffff;
            if (uVar5 < 0x1000) {
              if (uVar11 < uVar5) {
                uVar4 = uVar4 & 0xfff8fff8;
              }
              else if (0xbff < uVar5) {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = uVar4 & 0xfc00fc00;
            }
            goto LAB_1426159e7;
          }
          uVar4 = uVar4 & 0xff8;
        }
      }
    }
    while ((int)uVar9 == 0) {
      lVar7 = (longlong)local_50;
      if (local_50 == param_7) {
        uVar9 = 2;
        if (uVar4 == 2) goto LAB_142615ca5;
        goto LAB_142615c6e;
      }
      local_50 = local_50 + 1;
      uVar1 = *(ushort *)(lVar3 + lVar7 * 2);
      uVar10 = (ulonglong)uVar1;
      if (uVar1 < 0x180) {
        uVar2 = *(ushort *)(param_2 + uVar10 * 2);
        uVar9 = (ulonglong)uVar2;
        if (uVar2 != 0) break;
        uVar9 = uVar10;
        if (((param_3 & 2) != 0) && (0xfff5 < (ushort)(uVar1 - 0x3a))) goto LAB_142615cd1;
LAB_142615bad:
        uVar5 = (uint)*(ushort *)(param_1 + uVar9 * 2);
LAB_142615bb2:
        uVar6 = uVar5;
        if (0xfff < uVar5) {
          uVar5 = uVar5 & 0xfc00;
          uVar9 = (ulonglong)uVar5;
          goto joined_r0x000142615cc7;
        }
      }
      else {
        if ((uVar1 & 0xffc0) == 0x2000) {
          uVar9 = (ulonglong)(uVar1 - 0x1e80);
          goto LAB_142615bad;
        }
        uVar5 = 1;
        if (uVar10 == 0xffff) {
          uVar5 = 0xfca8;
        }
        uVar6 = 3;
        if (uVar10 != 0xfffe) goto LAB_142615bb2;
      }
      if (uVar11 < uVar6) {
        uVar9 = (ulonglong)(uVar6 & 0xff8);
        break;
      }
      local_78 = &param_7;
      local_80 = &local_50;
      local_88 = 0;
      uVar5 = FUN_142616aa0(param_1,uVar10,uVar6,lVar3);
      if (uVar5 == 1) goto LAB_142615cd1;
      uVar6 = uVar5 & 0xffff;
      if (uVar6 < 0x1000) {
        if (uVar11 < uVar6) {
          uVar9 = (ulonglong)(uVar5 & 0xfff8fff8);
        }
        else {
          if (0xbff < uVar6) {
            uVar5 = 0;
          }
          uVar9 = (ulonglong)uVar5;
        }
      }
      else {
        uVar9 = (ulonglong)(uVar5 & 0xfc00fc00);
      }
    }
    uVar5 = (uint)uVar9;
joined_r0x000142615cc7:
    if (uVar4 != uVar5) {
LAB_142615c6e:
      if ((uVar4 & 0xffff) != ((uint)uVar9 & 0xffff)) goto LAB_142615cd1;
      if (uVar4 == 2) break;
      uVar9 = uVar9 >> 0x10;
      uVar4 = uVar4 >> 0x10;
      goto LAB_1426159e7;
    }
LAB_142615ca5:
    uVar9 = 0;
    bVar12 = uVar4 != 2;
    uVar4 = 0;
  } while (bVar12);
  if (0xfff < local_64) {
    local_50 = 0;
    local_4c = 0;
    uVar9 = 0;
    uVar4 = 0;
LAB_1426160cc:
    do {
      uVar5 = uVar4;
      if (uVar4 == 0) {
        lVar7 = (longlong)local_4c;
        if (local_4c == param_5) {
          uVar5 = 2;
        }
        else {
          local_4c = local_4c + 1;
          uVar1 = *(ushort *)(param_4 + lVar7 * 2);
          if (uVar1 < 0x180) {
            uVar6 = (uint)*(ushort *)(param_1 + (ulonglong)uVar1 * 2);
LAB_142616136:
            uVar4 = uVar6;
            if (uVar6 < 0x1000) goto LAB_142616144;
LAB_1426161f3:
            uVar6 = uVar6 & 0x3e0;
            uVar5 = uVar6 * 0x10000 + 0x2000c0;
            if (uVar6 < 0x180) {
              uVar5 = uVar6 + 0x20;
            }
          }
          else {
            if (((uVar1 & 0xffc0) == 0x2000) || ((uVar1 & 0xffc0) == 0x2000)) {
              uVar6 = (uint)*(ushort *)(param_1 + (ulonglong)(uVar1 - 0x1e80) * 2);
              goto LAB_142616136;
            }
            uVar6 = 0xfca8;
            if (uVar1 != 0xffff) {
              uVar6 = 1;
            }
            uVar4 = 3;
            if (uVar1 != 0xfffe) goto LAB_142616136;
LAB_142616144:
            uVar5 = 0xc0;
            if (uVar4 <= uVar11) {
              local_78 = &param_5;
              local_80 = &local_4c;
              local_88 = 0;
              uVar6 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar4,param_4);
              if (uVar6 < 0x10000) {
                if (0xfff < uVar6) goto LAB_1426161f3;
                if (uVar6 <= uVar11) {
                  uVar4 = 0;
                  if (uVar6 < 0xc00) {
                    uVar4 = uVar6;
                  }
                  goto LAB_1426160cc;
                }
              }
              else {
                uVar4 = 0xc000c0;
                if ((uVar6 & 0xffff) <= uVar11) {
                  uVar4 = 0;
                }
                if ((uVar6 & 0xffff) < 0x1000) goto LAB_1426160cc;
                uVar5 = (uVar6 & 0x3e003e0) + 0x200020;
              }
            }
          }
        }
      }
LAB_14261623c:
      do {
        if ((int)uVar9 != 0) {
LAB_1426163c0:
          uVar6 = (uint)uVar9;
          goto joined_r0x000142616385;
        }
        lVar7 = (longlong)local_50;
        if (local_50 == param_7) {
          uVar9 = 2;
          goto LAB_1426163c0;
        }
        local_50 = local_50 + 1;
        uVar1 = *(ushort *)(lVar3 + lVar7 * 2);
        if (uVar1 < 0x180) {
          uVar4 = (uint)*(ushort *)(param_1 + (ulonglong)uVar1 * 2);
LAB_1426162a6:
          uVar6 = uVar4;
          if (uVar4 < 0x1000) goto LAB_1426162b4;
LAB_142616363:
          uVar4 = uVar4 & 0x3e0;
          uVar6 = uVar4 * 0x10000 + 0x2000c0;
          if (uVar4 < 0x180) {
            uVar6 = uVar4 + 0x20;
          }
          uVar9 = (ulonglong)uVar6;
          goto joined_r0x000142616385;
        }
        if (((uVar1 & 0xffc0) == 0x2000) || ((uVar1 & 0xffc0) == 0x2000)) {
          uVar4 = (uint)*(ushort *)(param_1 + (ulonglong)(uVar1 - 0x1e80) * 2);
          goto LAB_1426162a6;
        }
        uVar4 = 0xfca8;
        if (uVar1 != 0xffff) {
          uVar4 = 1;
        }
        uVar6 = 3;
        if (uVar1 != 0xfffe) goto LAB_1426162a6;
LAB_1426162b4:
        uVar9 = 0xc0;
        if (uVar11 < uVar6) goto LAB_1426163c0;
        local_78 = &param_7;
        local_80 = &local_50;
        local_88 = 0;
        uVar4 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar6,lVar3);
        if (uVar4 < 0x10000) {
          if (0xfff < uVar4) goto LAB_142616363;
          if (uVar11 < uVar4) goto LAB_1426163c0;
          uVar9 = 0;
          if (uVar4 < 0xc00) {
            uVar9 = (ulonglong)uVar4;
          }
          goto LAB_14261623c;
        }
        uVar9 = 0xc000c0;
        if ((uVar4 & 0xffff) <= uVar11) {
          uVar9 = 0;
        }
      } while ((uVar4 & 0xffff) < 0x1000);
      uVar6 = (uVar4 & 0x3e003e0) + 0x200020;
      uVar9 = (ulonglong)uVar6;
joined_r0x000142616385:
      if (uVar5 != uVar6) {
        if ((uVar5 & 0xffff) != ((uint)uVar9 & 0xffff)) goto LAB_142615cd1;
        if (uVar5 == 2) break;
        uVar4 = uVar5 >> 0x10;
        uVar9 = uVar9 >> 0x10;
        goto LAB_1426160cc;
      }
      uVar9 = 0;
      uVar4 = 0;
    } while (uVar5 != 2);
  }
  if ((param_3 & 0x400) != 0) {
    local_50 = 0;
    local_4c = 0;
    uVar9 = 0;
    uVar10 = 0;
LAB_142616420:
    do {
      uVar4 = local_64;
      if ((int)uVar10 == 0) {
        lVar7 = (longlong)local_4c;
        if (local_4c == param_5) {
          uVar10 = 2;
        }
        else {
          local_4c = local_4c + 1;
          uVar1 = *(ushort *)(param_4 + lVar7 * 2);
          uVar10 = (ulonglong)uVar1;
          if (uVar1 < 0x180) {
LAB_142616477:
            uVar10 = (ulonglong)*(ushort *)(param_1 + uVar10 * 2);
LAB_14261647b:
            uVar8 = uVar10;
            if ((uint)uVar10 < 0xc00) goto LAB_1426164b1;
          }
          else {
            if ((uVar1 & 0xffc0) == 0x2000) {
              uVar10 = (ulonglong)(uVar1 - 0x1e80);
              goto LAB_142616477;
            }
            uVar10 = 1;
            if (uVar1 == 0xffff) {
              uVar10 = 0xfca8;
            }
            uVar8 = 3;
            if (uVar1 != 0xfffe) goto LAB_14261647b;
LAB_1426164b1:
            local_78 = &param_5;
            local_80 = &local_4c;
            local_88 = 0;
            uVar10 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar8,param_4);
            uVar5 = (uint)uVar10;
            if (0xffff < uVar5) {
              if ((uVar5 & 0xffff) < 0x1000) {
                uVar10 = 0;
                if (uVar11 < (uVar5 & 0xffff)) {
                  uVar10 = 0x80008;
                  goto LAB_1426165a0;
                }
              }
              else if ((uVar4 < 0x1000) && (uVar5 < 0x4000000)) {
                uVar10 = (ulonglong)(uVar5 & 0x18);
              }
              else {
                uVar10 = (ulonglong)(uVar5 & 0x180018);
              }
              goto LAB_142616420;
            }
          }
          uVar5 = (uint)uVar10;
          if (uVar5 < 0x1000) {
            if (uVar5 <= uVar11) {
              uVar10 = uVar10 & 0xffffffff;
              if (0xbff < uVar5) {
                uVar10 = 0;
              }
              goto LAB_142616420;
            }
            uVar10 = 8;
          }
          else {
            uVar6 = uVar5 & 0x18;
            uVar10 = (ulonglong)uVar6;
            if ((uVar4 < 0x1000) || ((uVar5 & 0x380) < 0x180)) goto LAB_142616420;
            uVar10 = (ulonglong)(uVar6 | 0x80000);
          }
        }
      }
LAB_1426165a0:
      do {
        uVar4 = (uint)uVar10;
        if ((int)uVar9 != 0) {
LAB_14261673e:
          uVar6 = (uint)uVar9;
          goto joined_r0x000142616741;
        }
        lVar7 = (longlong)local_50;
        if (local_50 == param_7) {
          uVar9 = 2;
          if (uVar4 == 2) goto LAB_142616743;
          goto LAB_142616703;
        }
        local_50 = local_50 + 1;
        uVar1 = *(ushort *)(lVar3 + lVar7 * 2);
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < 0x180) {
LAB_1426165f2:
          uVar5 = (uint)*(ushort *)(param_1 + uVar9 * 2);
LAB_1426165f6:
          uVar6 = uVar5;
          if (uVar5 < 0xc00) goto LAB_142616631;
        }
        else {
          if ((uVar1 & 0xffc0) == 0x2000) {
            uVar9 = (ulonglong)(uVar1 - 0x1e80);
            goto LAB_1426165f2;
          }
          uVar5 = 1;
          if (uVar1 == 0xffff) {
            uVar5 = 0xfca8;
          }
          uVar6 = 3;
          if (uVar1 != 0xfffe) goto LAB_1426165f6;
LAB_142616631:
          local_78 = &param_7;
          local_80 = &local_50;
          local_88 = 0;
          uVar5 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar6,lVar3);
          if (0xffff < uVar5) {
            if ((uVar5 & 0xffff) < 0x1000) {
              uVar9 = 0;
              if (uVar11 < (uVar5 & 0xffff)) {
                uVar9 = 0x80008;
                if (uVar4 == 0x80008) goto LAB_142616743;
                goto LAB_142616703;
              }
            }
            else if ((local_64 < 0x1000) && (uVar5 < 0x4000000)) {
              uVar9 = (ulonglong)(uVar5 & 0x18);
            }
            else {
              uVar9 = (ulonglong)(uVar5 & 0x180018);
            }
            goto LAB_1426165a0;
          }
        }
        if (uVar5 < 0x1000) {
          if (uVar11 < uVar5) {
            uVar9 = 8;
            goto LAB_14261673e;
          }
          uVar9 = (ulonglong)uVar5;
          if (0xbff < uVar5) {
            uVar9 = 0;
          }
          goto LAB_1426165a0;
        }
        uVar6 = uVar5 & 0x18;
        uVar9 = (ulonglong)uVar6;
      } while ((local_64 < 0x1000) || ((uVar5 & 0x380) < 0x180));
      uVar6 = uVar6 | 0x80000;
      uVar9 = (ulonglong)uVar6;
joined_r0x000142616741:
      if (uVar4 != uVar6) {
LAB_142616703:
        if ((uVar4 & 0xffff) != ((uint)uVar9 & 0xffff)) goto LAB_142615cd1;
        if (uVar4 == 2) break;
        uVar9 = uVar9 >> 0x10;
        uVar10 = (ulonglong)(uVar4 >> 0x10);
        goto LAB_142616420;
      }
LAB_142616743:
      uVar9 = 0;
      uVar10 = 0;
    } while (uVar4 != 2);
  }
  if (0x1fff < local_64) {
    local_54 = param_3 & 0x600;
    bVar12 = local_54 == 0x200;
    local_50 = 0;
    local_4c = 0;
    local_60 = 0x200020;
    if (bVar12) {
      local_60 = 0x280028;
    }
    local_5c = 0x70007;
    if (bVar12) {
      local_5c = 0x1f001f;
    }
    local_58 = (uint)bVar12 * 8 + 0x20;
    uVar5 = 0;
    uVar4 = 0;
LAB_142615d90:
    if (uVar4 == 0) {
      lVar7 = (longlong)local_4c;
      if (local_4c == param_5) {
        uVar4 = 2;
      }
      else {
        local_4c = local_4c + 1;
        uVar1 = *(ushort *)(param_4 + lVar7 * 2);
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < 0x180) {
LAB_142615de2:
          uVar4 = (uint)*(ushort *)(param_1 + uVar9 * 2);
LAB_142615de6:
          uVar6 = uVar4;
          if (uVar4 < 0xc00) goto LAB_142615e13;
        }
        else {
          if ((uVar1 & 0xffc0) == 0x2000) {
            uVar9 = (ulonglong)(uVar1 - 0x1e80);
            goto LAB_142615de2;
          }
          uVar4 = 1;
          if (uVar1 == 0xffff) {
            uVar4 = 0xfca8;
          }
          uVar6 = 3;
          if (uVar1 != 0xfffe) goto LAB_142615de6;
LAB_142615e13:
          local_78 = &param_5;
          local_80 = &local_4c;
          local_88 = 0;
          uVar6 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar6,param_4);
          uVar4 = uVar6;
          if (0xffff < uVar6) {
            if (0xfff < (uVar6 & 0xffff)) {
              uVar4 = uVar6 & local_5c | 0x200020;
              goto LAB_142615f00;
            }
            uVar4 = 0;
            if ((uVar6 & 0xffff) <= uVar11) goto LAB_142615d90;
            uVar4 = uVar6 & 0x70007 | local_60;
            goto LAB_142615f00;
          }
        }
        if (uVar4 < 0x1000) {
          if (uVar4 <= uVar11) {
            if (0xbff < uVar4) {
              uVar4 = 0;
            }
            goto LAB_142615d90;
          }
          uVar4 = uVar4 & 7 | local_58;
        }
        else if (local_54 == 0x200) {
          uVar6 = 0x20;
          if (0x17f < (uVar4 & 0x380)) {
            uVar6 = 0x280020;
          }
          uVar4 = uVar6 | uVar4 & 0x1f;
        }
        else {
          uVar4 = (uint)(0x17f < (uVar4 & 0x380)) * 0x200000 + (uVar4 & 7) + 0x20;
        }
      }
    }
LAB_142615f00:
    do {
      while( true ) {
        if (uVar5 != 0) goto LAB_142616070;
        lVar7 = (longlong)local_50;
        if (local_50 == param_7) {
          uVar5 = 2;
          goto LAB_142616070;
        }
        local_50 = local_50 + 1;
        uVar1 = *(ushort *)(lVar3 + lVar7 * 2);
        uVar9 = (ulonglong)uVar1;
        if (0x17f < uVar1) break;
LAB_142615f52:
        uVar5 = (uint)*(ushort *)(param_1 + uVar9 * 2);
LAB_142615f56:
        uVar6 = uVar5;
        if (uVar5 < 0xc00) goto LAB_142615f83;
LAB_142615fb5:
        if (0xfff < uVar5) {
          if (local_54 == 0x200) {
            uVar6 = 0x20;
            if (0x17f < (uVar5 & 0x380)) {
              uVar6 = 0x280020;
            }
            uVar5 = uVar6 | uVar5 & 0x1f;
          }
          else {
            uVar5 = (uint)(0x17f < (uVar5 & 0x380)) * 0x200000 + (uVar5 & 7) + 0x20;
          }
          goto LAB_142616070;
        }
        if (uVar11 < uVar5) {
          uVar5 = uVar5 & 7 | local_58;
          goto LAB_142616070;
        }
        if (0xbff < uVar5) {
          uVar5 = 0;
        }
      }
      if ((uVar1 & 0xffc0) == 0x2000) {
        uVar9 = (ulonglong)(uVar1 - 0x1e80);
        goto LAB_142615f52;
      }
      uVar5 = 1;
      if (uVar1 == 0xffff) {
        uVar5 = 0xfca8;
      }
      uVar6 = 3;
      if (uVar1 != 0xfffe) goto LAB_142615f56;
LAB_142615f83:
      local_78 = &param_7;
      local_80 = &local_50;
      local_88 = 0;
      uVar6 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar6,lVar3);
      uVar5 = uVar6;
      if (uVar6 < 0x10000) goto LAB_142615fb5;
      if (0xfff < (uVar6 & 0xffff)) {
        uVar5 = uVar6 & local_5c | 0x200020;
        goto LAB_142616070;
      }
      uVar5 = 0;
    } while ((uVar6 & 0xffff) <= uVar11);
    uVar5 = uVar6 & 0x70007 | local_60;
LAB_142616070:
    if (uVar4 != uVar5) {
      if ((uVar4 & 0xffff) != (uVar5 & 0xffff)) goto LAB_142615cd1;
      if (uVar4 == 2) goto LAB_14261676b;
      uVar4 = uVar4 >> 0x10;
      uVar5 = uVar5 >> 0x10;
      goto LAB_142615d90;
    }
    uVar5 = 0;
    bVar12 = uVar4 == 2;
    uVar4 = 0;
    if (bVar12) goto LAB_14261676b;
    goto LAB_142615d90;
  }
  goto LAB_142615cd1;
LAB_14261676b:
  if (0x2fff < local_64) {
    local_50 = 0;
    local_4c = 0;
    uVar4 = 0;
    uVar5 = 0;
LAB_1426167b0:
    do {
      if (uVar5 == 0) {
        lVar7 = (longlong)local_4c;
        if (local_4c == param_5) {
          uVar5 = 2;
        }
        else {
          local_4c = local_4c + 1;
          uVar1 = *(ushort *)(param_4 + lVar7 * 2);
          uVar9 = (ulonglong)uVar1;
          if (uVar1 < 0x180) {
LAB_142616802:
            uVar6 = (uint)*(ushort *)(param_1 + uVar9 * 2);
LAB_142616806:
            uVar5 = uVar6;
            if (uVar6 < 0xc00) goto LAB_14261682e;
          }
          else {
            if ((uVar1 & 0xffc0) == 0x2000) {
              uVar9 = (ulonglong)(uVar1 - 0x1e80);
              goto LAB_142616802;
            }
            uVar6 = 1;
            if (uVar1 == 0xffff) {
              uVar6 = 0xfca8;
            }
            uVar5 = 3;
            if (uVar1 != 0xfffe) goto LAB_142616806;
LAB_14261682e:
            local_78 = &param_5;
            local_80 = &local_4c;
            local_88 = 0;
            uVar6 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar5,param_4);
            if (0xffff < uVar6) {
              if (uVar11 < (uVar6 & 0xffff)) {
                uVar5 = 0xfc00fc00;
                goto LAB_1426168e0;
              }
              uVar5 = uVar6 & 0xfff8fff8;
              goto LAB_1426167b0;
            }
          }
          if (uVar6 < 0x1000) {
            if (uVar6 <= uVar11) {
              uVar5 = uVar6 & 0xfff8;
              if (uVar6 < 0xc00) {
                uVar5 = uVar6;
              }
              goto LAB_1426167b0;
            }
            uVar5 = 0xfc00;
          }
          else {
            uVar5 = (uint)((uVar6 & 0x380) < 0x180) * 0x4000000 + 0xfc00fc00;
          }
        }
      }
LAB_1426168e0:
      while (uVar4 == 0) {
        lVar7 = (longlong)local_50;
        if (local_50 == param_7) {
          uVar4 = 2;
          break;
        }
        local_50 = local_50 + 1;
        uVar1 = *(ushort *)(lVar3 + lVar7 * 2);
        uVar9 = (ulonglong)uVar1;
        if (uVar1 < 0x180) {
LAB_142616932:
          uVar6 = (uint)*(ushort *)(param_1 + uVar9 * 2);
LAB_142616936:
          uVar4 = uVar6;
          if (uVar6 < 0xc00) goto LAB_14261695e;
LAB_142616990:
          if (0xfff < uVar6) {
            uVar4 = (uint)((uVar6 & 0x380) < 0x180) * 0x4000000 + 0xfc00fc00;
            break;
          }
          if (uVar11 < uVar6) {
            uVar4 = 0xfc00;
            break;
          }
          uVar4 = uVar6 & 0xfff8;
          if (uVar6 < 0xc00) {
            uVar4 = uVar6;
          }
        }
        else {
          if ((uVar1 & 0xffc0) == 0x2000) {
            uVar9 = (ulonglong)(uVar1 - 0x1e80);
            goto LAB_142616932;
          }
          uVar6 = 1;
          if (uVar1 == 0xffff) {
            uVar6 = 0xfca8;
          }
          uVar4 = 3;
          if (uVar1 != 0xfffe) goto LAB_142616936;
LAB_14261695e:
          local_78 = &param_7;
          local_80 = &local_50;
          local_88 = 0;
          uVar6 = FUN_142616aa0(param_1,(ulonglong)uVar1,uVar4,lVar3);
          if (uVar6 < 0x10000) goto LAB_142616990;
          if (uVar11 < (uVar6 & 0xffff)) {
            uVar4 = 0xfc00fc00;
            break;
          }
          uVar4 = uVar6 & 0xfff8fff8;
        }
      }
      if (uVar5 != uVar4) {
        if (((uVar5 & 0xffff) != (uVar4 & 0xffff)) || (uVar5 == 2)) break;
        uVar4 = uVar4 >> 0x10;
        uVar5 = uVar5 >> 0x10;
        goto LAB_1426167b0;
      }
      uVar4 = 0;
      bVar12 = uVar5 != 2;
      uVar5 = 0;
    } while (bVar12);
  }
LAB_142615cd1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142616aa0 FUN_142616aa0 body=499 status=ok
// SIG undefined FUN_142616aa0(void)

uint FUN_142616aa0(longlong param_1,int param_2,uint param_3,longlong param_4,longlong param_5,
                  int *param_6,int *param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  if (param_3 - 0xc00 < 0xfffff800) {
    return param_3;
  }
  if (0x7ff < param_3) {
    return *(uint *)(param_1 + 0x380 + (ulonglong)(param_3 & 0x3ff) * 2);
  }
  iVar4 = *param_7;
  if ((param_2 == 0) && (iVar4 < 0)) {
    *param_7 = *param_6 + -1;
    return 2;
  }
  uVar8 = (param_3 & 0x3ff) + 0x1c0;
  iVar5 = *param_6;
  if (iVar5 == iVar4) goto LAB_142616ba1;
  lVar9 = (longlong)iVar5;
  uVar11 = lVar9 + 1;
  if (param_4 == 0) {
    bVar1 = *(byte *)(param_5 + lVar9);
    uVar10 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((((byte)(bVar1 + 0x3a) < 0xfc) || ((int)uVar11 == iVar4)) ||
         (-0x41 < (char)*(byte *)(param_5 + uVar11))) {
        lVar9 = lVar9 + 2;
        if ((-1 < iVar4) && (iVar4 <= (int)lVar9)) {
          return 1;
        }
        if (uVar10 == 0xef) {
          if (*(char *)(param_5 + uVar11) != -0x41) {
            return 1;
          }
          uVar10 = 0xffffffff;
          if ((*(byte *)(param_5 + lVar9) & 0xfe) != 0xbe) {
            return 1;
          }
        }
        else {
          if (uVar10 != 0xe2) {
            return 1;
          }
          if (*(char *)(param_5 + uVar11) != -0x80) {
            return 1;
          }
          if (-0x41 < (char)*(byte *)(param_5 + lVar9)) {
            return 1;
          }
          uVar10 = *(byte *)(param_5 + lVar9) | 0x100;
        }
        uVar11 = (ulonglong)(iVar5 + 3);
        goto LAB_142616b70;
      }
      uVar10 = (uVar10 * 0x40 + (uint)*(byte *)(param_5 + uVar11)) - 0x3080;
      uVar11 = (ulonglong)(iVar5 + 2);
    }
joined_r0x000142616c16:
    if (uVar10 == 0) {
LAB_142616b63:
      if (iVar4 < 0) {
        *param_7 = iVar5;
        uVar10 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = *(ushort *)(param_4 + lVar9 * 2);
    uVar10 = (uint)uVar2;
    if (uVar2 < 0x180) goto joined_r0x000142616c16;
    if ((uVar2 & 0xffc0) == 0x2000) {
      uVar10 = uVar2 - 0x1e80;
      if (uVar10 != 0) goto LAB_142616b70;
      goto LAB_142616b63;
    }
    uVar10 = 0xffffffff;
    if (uVar2 < 0xfffe) {
      return 1;
    }
  }
LAB_142616b70:
  uVar12 = (uint)*(ushort *)(param_1 + (ulonglong)uVar8 * 2);
  uVar7 = (ulonglong)uVar8;
  do {
    uVar6 = (int)uVar7 + (uVar12 >> 9);
    uVar7 = (ulonglong)uVar6;
    uVar12 = (uint)*(ushort *)(param_1 + uVar7 * 2);
  } while ((int)(uVar12 & 0x1ff) < (int)uVar10);
  if ((uVar12 & 0x1ff) == uVar10) {
    *param_6 = (int)uVar11;
    uVar8 = uVar6;
  }
LAB_142616ba1:
  lVar9 = (longlong)(int)uVar8;
  uVar2 = *(ushort *)(param_1 + lVar9 * 2) >> 9;
  uVar8 = 1;
  if (uVar2 != 1) {
    uVar3 = *(ushort *)(param_1 + 2 + lVar9 * 2);
    uVar8 = (uint)uVar3;
    if (uVar2 != 2) {
      uVar8 = CONCAT22(*(undefined2 *)(param_1 + 4 + lVar9 * 2),uVar3);
    }
  }
  return uVar8;
}



// FUNCTION 142616ca0 FUN_142616ca0 body=4767 status=ok
// SIG undefined FUN_142616ca0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142616ca0(byte *param_1,longlong param_2,uint param_3,longlong param_4,int param_5,
                  longlong param_6,int param_7)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int *local_80;
  undefined4 *local_78;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  lVar4 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = param_1 + (ulonglong)*param_1 * 2;
  uVar14 = param_3 >> 0x10;
  local_64 = param_3 & 0xffff;
  local_4c = 0;
  local_50 = 0;
  uVar15 = 0;
  uVar7 = 0;
LAB_142616d06:
  do {
    if (uVar7 == 0) {
      lVar10 = (longlong)local_4c;
      if (local_4c == param_5) {
        uVar7 = 2;
      }
      else {
        lVar1 = lVar10 + 1;
        iVar13 = (int)lVar1;
        bVar2 = *(byte *)(param_4 + lVar10);
        uVar11 = (ulonglong)bVar2;
        uVar8 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          if ((((byte)(bVar2 + 0x3a) < 0xfc) || (iVar13 == param_5)) ||
             (-0x41 < (char)*(byte *)(param_4 + lVar1))) {
            uVar7 = 1;
            if ((param_5 < 0) || ((int)(lVar10 + 2) < param_5)) {
              bVar3 = *(byte *)(param_4 + lVar10 + 2);
              local_4c = local_4c + 3;
              if (((bVar2 == 0xe2) &&
                  ((*(char *)(param_4 + lVar1) == -0x80 && ((char)bVar3 < '\0')))) && (bVar3 < 0xc0)
                 ) {
                uVar11 = (ulonglong)bVar3 | 0x100;
                uVar8 = 0xe2;
                goto LAB_142616db2;
              }
              iVar13 = local_4c;
              if ((uVar8 == 0xef) && (*(char *)(param_4 + lVar1) == -0x41)) {
                uVar11 = 0xef;
                if ((ulonglong)bVar3 == 0xbe) {
                  uVar7 = 3;
                }
                else if (bVar3 == 0xbf) {
                  uVar7 = 0xfca8;
                  goto LAB_142616ebd;
                }
              }
            }
LAB_142616dc4:
            local_4c = iVar13;
            if (uVar7 <= uVar14) {
              local_78 = &param_5;
              local_80 = &local_4c;
              local_88 = param_4;
              uVar7 = FUN_142616aa0(param_1,uVar11,uVar7,0);
              if (uVar7 == 1) goto LAB_14261712f;
              uVar8 = uVar7 & 0xffff;
              if (uVar8 < 0x1000) {
                if (uVar14 < uVar8) {
                  uVar7 = uVar7 & 0xfff8fff8;
                }
                else if (0xbff < uVar8) {
                  uVar7 = 0;
                }
              }
              else {
                uVar7 = uVar7 & 0xfc00fc00;
              }
              goto LAB_142616d06;
            }
            uVar7 = uVar7 & 0xff8;
          }
          else {
            local_4c = local_4c + 2;
            uVar11 = (ulonglong)((uint)bVar2 * 0x40 - 0x3080) +
                     (ulonglong)*(byte *)(param_4 + lVar1);
            uVar6 = *(ushort *)(param_2 + uVar11 * 2);
            uVar7 = (uint)uVar6;
            uVar8 = (uint)uVar11;
            if (uVar6 == 0) goto LAB_142616db2;
          }
        }
        else {
          uVar6 = *(ushort *)(param_2 + uVar11 * 2);
          uVar7 = (uint)uVar6;
          local_4c = iVar13;
          if (uVar6 == 0) {
            if (((param_3 & 2) != 0) && (uVar8 = (uint)bVar2, 0xf5 < (byte)(bVar2 - 0x3a)))
            goto LAB_14261712f;
LAB_142616db2:
            lVar10 = uVar11 * 2;
            uVar7 = (uint)*(ushort *)(param_1 + lVar10);
            uVar11 = (ulonglong)uVar8;
            iVar13 = local_4c;
            if (*(ushort *)(param_1 + lVar10) < 0x1000) goto LAB_142616dc4;
LAB_142616ebd:
            uVar7 = uVar7 & 0xfc00;
          }
        }
      }
    }
    while ((int)uVar15 == 0) {
      lVar10 = (longlong)local_50;
      if (local_50 == param_7) {
        uVar15 = 2;
        if (uVar7 == 2) goto LAB_1426170f5;
        goto LAB_1426170be;
      }
      lVar1 = lVar10 + 1;
      iVar13 = (int)lVar1;
      bVar2 = *(byte *)(lVar4 + lVar10);
      uVar11 = (ulonglong)bVar2;
      uVar8 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        if (((0xfb < (byte)(bVar2 + 0x3a)) && (iVar13 != param_7)) &&
           ((char)*(byte *)(lVar4 + lVar1) < -0x40)) {
          local_50 = local_50 + 2;
          uVar11 = (ulonglong)((uint)bVar2 * 0x40 - 0x3080) + (ulonglong)*(byte *)(lVar4 + lVar1);
          uVar6 = *(ushort *)(param_2 + uVar11 * 2);
          uVar15 = (ulonglong)uVar6;
          uVar8 = (uint)uVar11;
          if (uVar6 == 0) goto LAB_142616f92;
          break;
        }
        uVar9 = 1;
        if ((-1 < param_7) && (param_7 <= (int)(lVar10 + 2))) goto LAB_142616fa6;
        bVar3 = *(byte *)(lVar4 + lVar10 + 2);
        local_50 = local_50 + 3;
        if (((bVar2 == 0xe2) && ((*(char *)(lVar4 + lVar1) == -0x80 && ((char)bVar3 < '\0')))) &&
           (bVar3 < 0xc0)) {
          uVar11 = (ulonglong)bVar3 | 0x100;
          uVar8 = 0xe2;
          goto LAB_142616f92;
        }
        iVar13 = local_50;
        if ((uVar8 == 0xef) && (*(char *)(lVar4 + lVar1) == -0x41)) {
          uVar11 = 0xef;
          if ((ulonglong)bVar3 == 0xbe) {
            uVar9 = 3;
            goto LAB_142616fa6;
          }
          if (bVar3 != 0xbf) goto LAB_142616fa6;
          uVar9 = 0xfca8;
          goto LAB_14261711b;
        }
      }
      else {
        uVar6 = *(ushort *)(param_2 + uVar11 * 2);
        uVar15 = (ulonglong)uVar6;
        local_50 = iVar13;
        if (uVar6 != 0) break;
        if (((param_3 & 2) != 0) && (uVar8 = (uint)bVar2, 0xf5 < (byte)(bVar2 - 0x3a)))
        goto LAB_14261712f;
LAB_142616f92:
        lVar10 = uVar11 * 2;
        uVar9 = (uint)*(ushort *)(param_1 + lVar10);
        uVar11 = (ulonglong)uVar8;
        iVar13 = local_50;
        if (0xfff < *(ushort *)(param_1 + lVar10)) {
LAB_14261711b:
          uVar9 = uVar9 & 0xfc00;
          uVar15 = (ulonglong)uVar9;
          goto joined_r0x000142617125;
        }
      }
LAB_142616fa6:
      local_50 = iVar13;
      if (uVar14 < uVar9) {
        uVar15 = (ulonglong)(uVar9 & 0xff8);
        break;
      }
      local_78 = &param_7;
      local_80 = &local_50;
      local_88 = lVar4;
      uVar8 = FUN_142616aa0(param_1,uVar11,uVar9,0);
      if (uVar8 == 1) goto LAB_14261712f;
      uVar9 = uVar8 & 0xffff;
      if (uVar9 < 0x1000) {
        if (uVar14 < uVar9) {
          uVar15 = (ulonglong)(uVar8 & 0xfff8fff8);
        }
        else {
          if (0xbff < uVar9) {
            uVar8 = 0;
          }
          uVar15 = (ulonglong)uVar8;
        }
      }
      else {
        uVar15 = (ulonglong)(uVar8 & 0xfc00fc00);
      }
    }
    uVar9 = (uint)uVar15;
joined_r0x000142617125:
    if (uVar7 != uVar9) {
LAB_1426170be:
      if ((uVar7 & 0xffff) != ((uint)uVar15 & 0xffff)) goto LAB_14261712f;
      if (uVar7 == 2) break;
      uVar15 = uVar15 >> 0x10;
      uVar7 = uVar7 >> 0x10;
      goto LAB_142616d06;
    }
LAB_1426170f5:
    uVar15 = 0;
    bVar16 = uVar7 != 2;
    uVar7 = 0;
  } while (bVar16);
  if (local_64 < 0x1000) {
LAB_14261715e:
    if ((param_3 & 0x400) != 0) {
      local_50 = 0;
      local_4c = 0;
      uVar15 = 0;
      uVar11 = 0;
LAB_142617920:
      do {
        uVar7 = local_64;
        if ((int)uVar11 == 0) {
          lVar10 = (longlong)local_4c;
          if (local_4c == param_5) {
            uVar11 = 2;
          }
          else {
            bVar2 = *(byte *)(param_4 + lVar10);
            uVar12 = (ulonglong)bVar2;
            uVar11 = uVar12;
            iVar13 = (int)(lVar10 + 1);
            if ((char)bVar2 < '\0') {
              if (bVar2 < 0xc6) {
                uVar11 = (uVar12 * 0x40 + (ulonglong)*(byte *)(param_4 + lVar10 + 1)) - 0x3080;
                iVar13 = local_4c + 2;
                goto LAB_1426179a0;
              }
              bVar3 = *(byte *)(lVar10 + 2 + param_4);
              local_4c = local_4c + 3;
              if (bVar2 == 0xe2) {
                uVar11 = (ulonglong)bVar3 | 0x100;
                iVar13 = local_4c;
                goto LAB_1426179a0;
              }
              uVar6 = 3;
              if (bVar3 != 0xbe) {
                uVar11 = 8;
                goto LAB_142617ac0;
              }
LAB_1426179af:
              local_78 = &param_5;
              local_80 = &local_4c;
              local_88 = param_4;
              uVar11 = FUN_142616aa0(param_1,uVar12,uVar6,0);
              uVar8 = (uint)uVar11;
              if (0xffff < uVar8) {
                if ((uVar8 & 0xffff) < 0x1000) {
                  uVar11 = 0;
                  if (uVar14 < (uVar8 & 0xffff)) {
                    uVar11 = 0x80008;
                    goto LAB_142617ac0;
                  }
                }
                else if ((uVar7 < 0x1000) && (uVar8 < 0x4000000)) {
                  uVar11 = (ulonglong)(uVar8 & 0x18);
                }
                else {
                  uVar11 = (ulonglong)(uVar8 & 0x180018);
                }
                goto LAB_142617920;
              }
            }
            else {
LAB_1426179a0:
              local_4c = iVar13;
              uVar6 = *(ushort *)(param_1 + uVar11 * 2);
              uVar11 = (ulonglong)uVar6;
              if (uVar6 < 0xc00) goto LAB_1426179af;
            }
            uVar8 = (uint)uVar11;
            if (uVar8 < 0x1000) {
              if (uVar8 <= uVar14) {
                uVar11 = uVar11 & 0xffffffff;
                if (0xbff < uVar8) {
                  uVar11 = 0;
                }
                goto LAB_142617920;
              }
              uVar11 = 8;
            }
            else {
              uVar9 = uVar8 & 0x18;
              uVar11 = (ulonglong)uVar9;
              if ((uVar7 < 0x1000) || ((uVar8 & 0x380) < 0x180)) goto LAB_142617920;
              uVar11 = (ulonglong)(uVar9 | 0x80000);
            }
          }
        }
LAB_142617ac0:
        do {
          uVar7 = (uint)uVar11;
          if ((int)uVar15 != 0) {
LAB_142617c50:
            if (uVar7 == (uint)uVar15) goto LAB_142617c55;
            goto LAB_142617c79;
          }
          lVar10 = (longlong)local_50;
          if (local_50 == param_7) {
            uVar15 = 2;
            if (uVar7 == 2) goto LAB_142617c55;
            goto LAB_142617c79;
          }
          bVar2 = *(byte *)(lVar4 + lVar10);
          uVar12 = (ulonglong)bVar2;
          uVar15 = uVar12;
          iVar13 = (int)(lVar10 + 1);
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xc6) {
              uVar15 = (uVar12 * 0x40 + (ulonglong)*(byte *)(lVar4 + lVar10 + 1)) - 0x3080;
              iVar13 = local_50 + 2;
              goto LAB_142617b50;
            }
            bVar3 = *(byte *)(lVar10 + 2 + lVar4);
            local_50 = local_50 + 3;
            if (bVar2 == 0xe2) {
              uVar15 = (ulonglong)bVar3 | 0x100;
              iVar13 = local_50;
              goto LAB_142617b50;
            }
            uVar6 = 3;
            if (bVar3 == 0xbe) goto LAB_142617b5b;
LAB_142617c38:
            uVar15 = 8;
            if (uVar7 == 8) goto LAB_142617c55;
            goto LAB_142617c79;
          }
LAB_142617b50:
          local_50 = iVar13;
          uVar6 = *(ushort *)(param_1 + uVar15 * 2);
          uVar8 = (uint)uVar6;
          if (0xbff < uVar6) {
LAB_142617b8c:
            if (uVar8 < 0x1000) {
              if (uVar14 < uVar8) goto LAB_142617c38;
              uVar15 = (ulonglong)uVar8;
              if (0xbff < uVar8) {
                uVar15 = 0;
              }
            }
            else {
              uVar9 = uVar8 & 0x18;
              uVar15 = (ulonglong)uVar9;
              if ((0xfff < local_64) && (0x17f < (uVar8 & 0x380))) {
                uVar15 = (ulonglong)(uVar9 | 0x80000);
                goto LAB_142617c50;
              }
            }
            goto LAB_142617ac0;
          }
LAB_142617b5b:
          local_78 = &param_7;
          local_80 = &local_50;
          local_88 = lVar4;
          uVar8 = FUN_142616aa0(param_1,uVar12,uVar6,0);
          if (uVar8 < 0x10000) goto LAB_142617b8c;
          if (0xfff < (uVar8 & 0xffff)) {
            if ((local_64 < 0x1000) && (uVar8 < 0x4000000)) {
              uVar15 = (ulonglong)(uVar8 & 0x18);
            }
            else {
              uVar15 = (ulonglong)(uVar8 & 0x180018);
            }
            goto LAB_142617ac0;
          }
          uVar15 = 0;
        } while ((uVar8 & 0xffff) <= uVar14);
        uVar15 = 0x80008;
        if (uVar7 != 0x80008) {
LAB_142617c79:
          if ((uVar7 & 0xffff) != ((uint)uVar15 & 0xffff)) goto LAB_14261712f;
          if (uVar7 == 2) break;
          uVar15 = uVar15 >> 0x10;
          uVar11 = (ulonglong)(uVar7 >> 0x10);
          goto LAB_142617920;
        }
LAB_142617c55:
        uVar15 = 0;
        uVar11 = 0;
      } while (uVar7 != 2);
    }
    if (0x1fff < local_64) {
      local_54 = param_3 & 0x600;
      bVar16 = local_54 == 0x200;
      local_50 = 0;
      local_4c = 0;
      local_60 = 0x200020;
      if (bVar16) {
        local_60 = 0x280028;
      }
      local_5c = 0x70007;
      if (bVar16) {
        local_5c = 0x1f001f;
      }
      local_58 = (uint)bVar16 * 8 + 0x20;
      uVar8 = 0;
      uVar7 = 0;
LAB_1426171f0:
      if (uVar7 == 0) {
        lVar10 = (longlong)local_4c;
        if (local_4c == param_5) {
          uVar7 = 2;
        }
        else {
          bVar2 = *(byte *)(param_4 + lVar10);
          uVar11 = (ulonglong)bVar2;
          uVar15 = uVar11;
          iVar13 = (int)(lVar10 + 1);
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xc6) {
              uVar15 = (uVar11 * 0x40 + (ulonglong)*(byte *)(param_4 + lVar10 + 1)) - 0x3080;
              iVar13 = local_4c + 2;
              goto LAB_142617270;
            }
            bVar3 = *(byte *)(lVar10 + 2 + param_4);
            local_4c = local_4c + 3;
            if (bVar2 == 0xe2) {
              uVar15 = (ulonglong)bVar3 | 0x100;
              iVar13 = local_4c;
              goto LAB_142617270;
            }
            uVar6 = 3;
            if (bVar3 == 0xbe) goto LAB_14261727b;
            uVar9 = 0xfca8;
          }
          else {
LAB_142617270:
            local_4c = iVar13;
            uVar6 = *(ushort *)(param_1 + uVar15 * 2);
            uVar9 = (uint)uVar6;
            if (uVar6 < 0xc00) {
LAB_14261727b:
              local_78 = &param_5;
              local_80 = &local_4c;
              local_88 = param_4;
              uVar9 = FUN_142616aa0(param_1,uVar11,uVar6,0);
              if (0xffff < uVar9) {
                if ((uVar9 & 0xffff) < 0x1000) {
                  uVar7 = 0;
                  if (uVar14 < (uVar9 & 0xffff)) {
                    uVar7 = uVar9 & 0x70007 | local_60;
                    goto LAB_142617380;
                  }
                  goto LAB_1426171f0;
                }
                uVar7 = uVar9 & local_5c | 0x200020;
                goto LAB_142617380;
              }
            }
            if (uVar9 < 0x1000) {
              if (uVar14 < uVar9) {
                uVar7 = uVar9 & 7 | local_58;
                goto LAB_142617380;
              }
              uVar7 = uVar9;
              if (0xbff < uVar9) {
                uVar7 = 0;
              }
              goto LAB_1426171f0;
            }
          }
          if (local_54 == 0x200) {
            uVar7 = 0x20;
            if (0x17f < (uVar9 & 0x380)) {
              uVar7 = 0x280020;
            }
            uVar7 = uVar7 | uVar9 & 0x1f;
          }
          else {
            uVar7 = (uint)(0x17f < (uVar9 & 0x380)) * 0x200000 + (uVar9 & 7) + 0x20;
          }
        }
      }
LAB_142617380:
      do {
        if (uVar8 != 0) goto LAB_142617500;
        lVar10 = (longlong)local_50;
        if (local_50 == param_7) {
          uVar8 = 2;
          goto LAB_142617500;
        }
        bVar2 = *(byte *)(lVar4 + lVar10);
        uVar11 = (ulonglong)bVar2;
        uVar15 = uVar11;
        iVar13 = (int)(lVar10 + 1);
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xc6) {
            uVar15 = (uVar11 * 0x40 + (ulonglong)*(byte *)(lVar4 + lVar10 + 1)) - 0x3080;
            iVar13 = local_50 + 2;
            goto LAB_142617400;
          }
          bVar3 = *(byte *)(lVar10 + 2 + lVar4);
          local_50 = local_50 + 3;
          if (bVar2 == 0xe2) {
            uVar15 = (ulonglong)bVar3 | 0x100;
            iVar13 = local_50;
            goto LAB_142617400;
          }
          uVar6 = 3;
          if (bVar3 == 0xbe) goto LAB_14261740b;
          uVar9 = 0xfca8;
LAB_14261748a:
          if (local_54 == 0x200) {
            uVar8 = 0x20;
            if (0x17f < (uVar9 & 0x380)) {
              uVar8 = 0x280020;
            }
            uVar8 = uVar8 | uVar9 & 0x1f;
          }
          else {
            uVar8 = (uint)(0x17f < (uVar9 & 0x380)) * 0x200000 + (uVar9 & 7) + 0x20;
          }
          goto LAB_142617500;
        }
LAB_142617400:
        local_50 = iVar13;
        uVar6 = *(ushort *)(param_1 + uVar15 * 2);
        uVar9 = (uint)uVar6;
        if (0xbff < uVar6) {
LAB_14261743c:
          if (0xfff < uVar9) goto LAB_14261748a;
          if (uVar14 < uVar9) {
            uVar8 = uVar9 & 7 | local_58;
            goto LAB_142617500;
          }
          uVar8 = uVar9;
          if (0xbff < uVar9) {
            uVar8 = 0;
          }
          goto LAB_142617380;
        }
LAB_14261740b:
        local_78 = &param_7;
        local_80 = &local_50;
        local_88 = lVar4;
        uVar9 = FUN_142616aa0(param_1,uVar11,uVar6,0);
        if (uVar9 < 0x10000) goto LAB_14261743c;
        if (0xfff < (uVar9 & 0xffff)) {
          uVar8 = uVar9 & local_5c | 0x200020;
          goto LAB_142617500;
        }
        uVar8 = 0;
      } while ((uVar9 & 0xffff) <= uVar14);
      uVar8 = uVar9 & 0x70007 | local_60;
LAB_142617500:
      if (uVar7 != uVar8) {
        if ((uVar7 & 0xffff) != (uVar8 & 0xffff)) goto LAB_14261712f;
        if (uVar7 == 2) goto LAB_142617c9d;
        uVar8 = uVar8 >> 0x10;
        uVar7 = uVar7 >> 0x10;
        goto LAB_1426171f0;
      }
      uVar8 = 0;
      bVar16 = uVar7 == 2;
      uVar7 = 0;
      if (bVar16) goto LAB_142617c9d;
      goto LAB_1426171f0;
    }
    goto LAB_14261712f;
  }
  local_50 = 0;
  local_4c = 0;
  uVar15 = 0;
  uVar7 = 0;
LAB_14261756c:
  if (uVar7 != 0) goto LAB_14261771c;
  lVar10 = (longlong)local_4c;
  iVar13 = (int)uVar15;
  if (local_4c == param_5) {
    uVar7 = 2;
    goto joined_r0x0001426176a3;
  }
  bVar2 = *(byte *)(param_4 + lVar10);
  uVar12 = (ulonglong)bVar2;
  uVar11 = uVar12;
  iVar5 = local_4c + 1;
  if ((char)bVar2 < '\0') {
    if (bVar2 < 0xc6) {
      uVar11 = (uVar12 * 0x40 + (ulonglong)*(byte *)(param_4 + 1 + lVar10)) - 0x3080;
      iVar5 = local_4c + 2;
      goto LAB_1426175f0;
    }
    bVar3 = *(byte *)(lVar10 + 2 + param_4);
    local_4c = local_4c + 3;
    if (bVar2 == 0xe2) {
      uVar11 = (ulonglong)bVar3 | 0x100;
      iVar5 = local_4c;
      goto LAB_1426175f0;
    }
    uVar8 = 3;
    if (bVar3 == 0xbe) goto LAB_1426175fe;
    uVar9 = 0xfca8;
  }
  else {
LAB_1426175f0:
    local_4c = iVar5;
    uVar6 = *(ushort *)(param_1 + uVar11 * 2);
    uVar8 = (uint)uVar6;
    uVar9 = (uint)uVar6;
    if (uVar6 < 0x1000) {
LAB_1426175fe:
      uVar7 = 0xc0;
      if (uVar14 < uVar8) goto LAB_14261771c;
      local_78 = &param_5;
      local_80 = &local_4c;
      local_88 = param_4;
      uVar8 = FUN_142616aa0(param_1,uVar12,uVar8,0);
      if (uVar8 < 0x10000) {
        if (0xfff < uVar8) {
          uVar8 = uVar8 & 0x3e0;
          uVar7 = uVar8 * 0x10000 + 0x2000c0;
          if (uVar8 < 0x180) {
            uVar7 = uVar8 + 0x20;
          }
          goto joined_r0x0001426176a3;
        }
        if (uVar14 < uVar8) goto LAB_14261771c;
        uVar7 = uVar8;
        if (0xbff < uVar8) {
          uVar7 = 0;
        }
        goto LAB_14261756c;
      }
      uVar7 = 0;
      if (uVar14 < (uVar8 & 0xffff)) {
        uVar7 = 0xc000c0;
      }
      if ((uVar8 & 0xffff) < 0x1000) goto LAB_14261756c;
      uVar7 = (uVar8 & 0x3e003e0) + 0x200020;
      goto joined_r0x0001426176a3;
    }
  }
  uVar9 = uVar9 & 0x3e0;
  uVar7 = uVar9 * 0x10000 + 0x2000c0;
  if (uVar9 < 0x180) {
    uVar7 = uVar9 + 0x20;
  }
joined_r0x0001426176a3:
  if (iVar13 == 0) {
    do {
      lVar10 = (longlong)local_50;
      if (local_50 == param_7) {
        uVar15 = 2;
        if (uVar7 == 2) goto LAB_1426178b5;
        goto LAB_142617873;
      }
      bVar2 = *(byte *)(lVar4 + lVar10);
      uVar11 = (ulonglong)bVar2;
      uVar15 = uVar11;
      iVar13 = local_50 + 1;
      if (-1 < (char)bVar2) {
LAB_1426177a0:
        local_50 = iVar13;
        uVar6 = *(ushort *)(param_1 + uVar15 * 2);
        uVar8 = (uint)uVar6;
        uVar9 = (uint)uVar6;
        if (uVar6 < 0x1000) goto LAB_1426177b2;
LAB_14261783d:
        uVar9 = uVar9 & 0x3e0;
        uVar8 = uVar9 * 0x10000 + 0x2000c0;
        if (uVar9 < 0x180) {
          uVar8 = uVar9 + 0x20;
        }
joined_r0x000142617864:
        uVar15 = (ulonglong)uVar8;
        goto joined_r0x000142617864;
      }
      if (bVar2 < 0xc6) {
        uVar15 = (uVar11 * 0x40 + (ulonglong)*(byte *)(lVar4 + 1 + lVar10)) - 0x3080;
        iVar13 = local_50 + 2;
        goto LAB_1426177a0;
      }
      bVar3 = *(byte *)(lVar10 + 2 + lVar4);
      local_50 = local_50 + 3;
      if (bVar2 == 0xe2) {
        uVar15 = (ulonglong)bVar3 | 0x100;
        iVar13 = local_50;
        goto LAB_1426177a0;
      }
      uVar8 = 3;
      if (bVar3 != 0xbe) {
        uVar9 = 0xfca8;
        goto LAB_14261783d;
      }
LAB_1426177b2:
      uVar15 = 0xc0;
      if (uVar14 < uVar8) break;
      local_78 = &param_7;
      local_80 = &local_50;
      local_88 = lVar4;
      uVar9 = FUN_142616aa0(param_1,uVar11,uVar8,0);
      if (0xffff < uVar9) goto LAB_142617700;
      if (0xfff < uVar9) {
        uVar9 = uVar9 & 0x3e0;
        uVar8 = uVar9 * 0x10000 + 0x2000c0;
        if (uVar9 < 0x180) {
          uVar8 = uVar9 + 0x20;
        }
        goto joined_r0x000142617864;
      }
      if (uVar14 < uVar9) break;
      uVar15 = (ulonglong)uVar9;
      if (0xbff < uVar9) {
        uVar15 = 0;
      }
      if ((int)uVar15 != 0) break;
    } while( true );
  }
  goto LAB_1426178b0;
LAB_142617700:
  uVar15 = 0;
  if (uVar14 < (uVar9 & 0xffff)) {
    uVar15 = 0xc000c0;
  }
  if ((uVar9 & 0xffff) < 0x1000) {
LAB_14261771c:
    iVar13 = (int)uVar15;
    goto joined_r0x0001426176a3;
  }
  uVar15 = (ulonglong)((uVar9 & 0x3e003e0) + 0x200020);
LAB_1426178b0:
  uVar8 = (uint)uVar15;
joined_r0x000142617864:
  if (uVar7 != uVar8) {
LAB_142617873:
    if ((uVar7 & 0xffff) != ((uint)uVar15 & 0xffff)) goto LAB_14261712f;
    if (uVar7 == 2) goto LAB_14261715e;
    uVar15 = uVar15 >> 0x10;
    uVar7 = uVar7 >> 0x10;
    goto LAB_14261756c;
  }
LAB_1426178b5:
  uVar15 = 0;
  bVar16 = uVar7 == 2;
  uVar7 = 0;
  if (bVar16) goto LAB_14261715e;
  goto LAB_14261756c;
LAB_142617c9d:
  if (0x2fff < local_64) {
    local_50 = 0;
    local_4c = 0;
    uVar8 = 0;
    uVar7 = 0;
LAB_142617ce0:
    do {
      if (uVar7 == 0) {
        lVar10 = (longlong)local_4c;
        if (local_4c == param_5) {
          uVar7 = 2;
        }
        else {
          bVar2 = *(byte *)(param_4 + lVar10);
          uVar11 = (ulonglong)bVar2;
          uVar15 = uVar11;
          iVar13 = (int)(lVar10 + 1);
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xc6) {
              uVar15 = (uVar11 * 0x40 + (ulonglong)*(byte *)(param_4 + lVar10 + 1)) - 0x3080;
              iVar13 = local_4c + 2;
              goto LAB_142617d50;
            }
            bVar3 = *(byte *)(lVar10 + 2 + param_4);
            local_4c = local_4c + 3;
            if (bVar2 == 0xe2) {
              uVar15 = (ulonglong)bVar3 | 0x100;
              iVar13 = local_4c;
              goto LAB_142617d50;
            }
            uVar6 = 3;
            if (bVar3 == 0xbe) goto LAB_142617d5b;
            uVar9 = 0xfca8;
          }
          else {
LAB_142617d50:
            local_4c = iVar13;
            uVar6 = *(ushort *)(param_1 + uVar15 * 2);
            uVar9 = (uint)uVar6;
            if (uVar6 < 0xc00) {
LAB_142617d5b:
              local_78 = &param_5;
              local_80 = &local_4c;
              local_88 = param_4;
              uVar9 = FUN_142616aa0(param_1,uVar11,uVar6,0);
              if (0xffff < uVar9) {
                if (uVar14 < (uVar9 & 0xffff)) {
                  uVar7 = 0xfc00fc00;
                  goto LAB_142617e10;
                }
                uVar7 = uVar9 & 0xfff8fff8;
                goto LAB_142617ce0;
              }
            }
            if (uVar9 < 0x1000) {
              if (uVar14 < uVar9) {
                uVar7 = 0xfc00;
                goto LAB_142617e10;
              }
              uVar7 = uVar9 & 0xfff8;
              if (uVar9 < 0xc00) {
                uVar7 = uVar9;
              }
              goto LAB_142617ce0;
            }
          }
          uVar7 = (uint)((uVar9 & 0x380) < 0x180) * 0x4000000 + 0xfc00fc00;
        }
      }
LAB_142617e10:
      while (uVar8 == 0) {
        lVar10 = (longlong)local_50;
        if (local_50 == param_7) {
          uVar8 = 2;
          break;
        }
        bVar2 = *(byte *)(lVar4 + lVar10);
        uVar11 = (ulonglong)bVar2;
        uVar15 = uVar11;
        iVar13 = (int)(lVar10 + 1);
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xc6) {
            uVar15 = (uVar11 * 0x40 + (ulonglong)*(byte *)(lVar4 + lVar10 + 1)) - 0x3080;
            iVar13 = local_50 + 2;
            goto LAB_142617ea0;
          }
          bVar3 = *(byte *)(lVar10 + 2 + lVar4);
          local_50 = local_50 + 3;
          if (bVar2 == 0xe2) {
            uVar15 = (ulonglong)bVar3 | 0x100;
            iVar13 = local_50;
            goto LAB_142617ea0;
          }
          uVar6 = 3;
          if (bVar3 == 0xbe) goto LAB_142617eab;
          uVar9 = 0xfca8;
LAB_142617f27:
          uVar8 = (uint)((uVar9 & 0x380) < 0x180) * 0x4000000 + 0xfc00fc00;
          break;
        }
LAB_142617ea0:
        local_50 = iVar13;
        uVar6 = *(ushort *)(param_1 + uVar15 * 2);
        uVar9 = (uint)uVar6;
        if (uVar6 < 0xc00) {
LAB_142617eab:
          local_78 = &param_7;
          local_80 = &local_50;
          local_88 = lVar4;
          uVar9 = FUN_142616aa0(param_1,uVar11,uVar6,0);
          if (uVar9 < 0x10000) goto LAB_142617edc;
          if (uVar14 < (uVar9 & 0xffff)) {
            uVar8 = 0xfc00fc00;
            break;
          }
          uVar8 = uVar9 & 0xfff8fff8;
        }
        else {
LAB_142617edc:
          if (0xfff < uVar9) goto LAB_142617f27;
          if (uVar14 < uVar9) {
            uVar8 = 0xfc00;
            break;
          }
          uVar8 = uVar9 & 0xfff8;
          if (uVar9 < 0xc00) {
            uVar8 = uVar9;
          }
        }
      }
      if (uVar7 != uVar8) {
        if (((uVar7 & 0xffff) != (uVar8 & 0xffff)) || (uVar7 == 2)) break;
        uVar8 = uVar8 >> 0x10;
        uVar7 = uVar7 >> 0x10;
        goto LAB_142617ce0;
      }
      uVar8 = 0;
      bVar16 = uVar7 != 2;
      uVar7 = 0;
    } while (bVar16);
  }
LAB_14261712f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142617ff0 thunk_FUN_1426191b0 body=5 status=ok
// SIG undefined thunk_FUN_1426191b0(void)

void thunk_FUN_1426191b0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = icu_64::CollationIterator::vftable;
  lVar1 = param_1[0x2f];
  if (lVar1 != 0) {
    FUN_140859a90(lVar1 + 0x40);
    FUN_140859a90(lVar1);
    FUN_1401773f0(lVar1);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    FUN_1424da110(param_1[4]);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142618000 FUN_142618000 body=66 status=ok
// SIG undefined FUN_142618000(void)

undefined8 FUN_142618000(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_142619210();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188);
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                     lVar2 == *(longlong *)(param_2 + 400) - *(longlong *)(param_2 + 0x188));
  }
  return uVar3;
}



// FUNCTION 142618050 FUN_142618050 body=43 status=ok
// SIG undefined FUN_142618050(void)

void FUN_142618050(longlong param_1,int param_2)

{
  FUN_1426192c0();
  *(longlong *)(param_1 + 400) = (longlong)param_2 * 2 + *(longlong *)(param_1 + 0x188);
  return;
}



// FUNCTION 142618080 FUN_142618080 body=18 status=ok
// SIG undefined FUN_142618080(void)

ulonglong FUN_142618080(longlong param_1)

{
  return (ulonglong)(*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188)) >> 1;
}



// FUNCTION 1426180a0 FUN_1426180a0 body=78 status=ok
// SIG undefined FUN_1426180a0(void)

undefined4 FUN_1426180a0(longlong param_1,uint *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 400);
  if (puVar2 != *(ushort **)(param_1 + 0x198)) {
    *(ushort **)(param_1 + 400) = puVar2 + 1;
    uVar1 = *puVar2;
    *param_2 = (uint)uVar1;
    return *(undefined4 *)
            ((*(longlong **)(param_1 + 8))[2] +
            ((ulonglong)(uVar1 & 0x1f) +
            (ulonglong)*(ushort *)(**(longlong **)(param_1 + 8) + (ulonglong)(uVar1 >> 5) * 2) * 4)
            * 4);
  }
  *param_2 = 0xffffffff;
  return 0xc0;
}



// FUNCTION 1426180f0 FUN_1426180f0 body=53 status=ok
// SIG undefined FUN_1426180f0(void)

ushort FUN_1426180f0(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 400);
  if (puVar2 != *(ushort **)(param_1 + 0x198)) {
    uVar1 = *puVar2;
    if ((uVar1 & 0xfc00) == 0xdc00) {
      *(ushort **)(param_1 + 400) = puVar2 + 1;
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 142618130 FUN_142618130 body=41 status=ok
// SIG undefined FUN_142618130(void)

undefined8 FUN_142618130(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 400) + -2;
  *(longlong *)(param_1 + 400) = lVar1;
  *(longlong *)(param_1 + 0x198) = lVar1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 142618160 FUN_142618160 body=132 status=ok
// SIG undefined FUN_142618160(void)

uint FUN_142618160(longlong param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  
  puVar4 = *(ushort **)(param_1 + 400);
  puVar5 = *(ushort **)(param_1 + 0x198);
  uVar6 = 0xffffffff;
  if (puVar4 != puVar5) {
    uVar2 = *puVar4;
    if ((puVar5 == (ushort *)0x0) && (uVar2 == 0)) {
      *(ushort **)(param_1 + 0x198) = puVar4;
      return uVar6;
    }
    uVar6 = (uint)uVar2;
    puVar1 = puVar4 + 1;
    *(ushort **)(param_1 + 400) = puVar1;
    if (((uVar2 & 0xfc00) == 0xd800) &&
       ((puVar1 != puVar5 && (uVar3 = *puVar1, (uVar3 & 0xfc00) == 0xdc00)))) {
      *(ushort **)(param_1 + 400) = puVar4 + 2;
      uVar6 = (uint)uVar2 * 0x400 + (uint)uVar3 + 0xfca02400;
    }
  }
  return uVar6;
}



// FUNCTION 1426181f0 FUN_1426181f0 body=112 status=ok
// SIG undefined FUN_1426181f0(void)

uint FUN_1426181f0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 400);
  if (lVar3 != *(longlong *)(param_1 + 0x188)) {
    *(longlong *)(param_1 + 400) = lVar3 + -2;
    uVar1 = *(ushort *)(lVar3 + -2);
    uVar4 = (uint)uVar1;
    if (((lVar3 + -2 != *(longlong *)(param_1 + 0x188)) && ((uVar1 & 0xfc00) == 0xdc00)) &&
       (uVar2 = *(ushort *)(lVar3 + -4), (uVar2 & 0xfc00) == 0xd800)) {
      *(longlong *)(param_1 + 400) = lVar3 + -4;
      uVar4 = (uint)uVar1 + (uint)uVar2 * 0x400 + 0xfca02400;
    }
    return uVar4;
  }
  return 0xffffffff;
}



// FUNCTION 142618260 FUN_142618260 body=129 status=ok
// SIG undefined FUN_142618260(void)

void FUN_142618260(longlong param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  
  if (0 < param_2) {
    puVar5 = *(ushort **)(param_1 + 400);
    puVar2 = *(ushort **)(param_1 + 0x198);
    uVar4 = param_2 + 1;
    do {
      if (puVar5 == puVar2) {
        return;
      }
      uVar1 = *puVar5;
      if ((puVar2 == (ushort *)0x0) && (uVar1 == 0)) {
        *(ushort **)(param_1 + 0x198) = puVar5;
        return;
      }
      puVar3 = puVar5 + 1;
      *(ushort **)(param_1 + 400) = puVar3;
      if ((((uVar1 & 0xfc00) == 0xd800) && (puVar3 != puVar2)) && ((*puVar3 & 0xfc00) == 0xdc00)) {
        *(ushort **)(param_1 + 400) = puVar5 + 2;
        puVar3 = puVar5 + 2;
      }
      puVar5 = puVar3;
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  return;
}



// FUNCTION 1426182f0 FUN_1426182f0 body=116 status=ok
// SIG undefined FUN_1426182f0(void)

void FUN_1426182f0(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  if (0 < param_2) {
    lVar3 = *(longlong *)(param_1 + 400);
    uVar2 = param_2 + 1;
    do {
      if (lVar3 == *(longlong *)(param_1 + 0x188)) {
        return;
      }
      lVar1 = lVar3 + -2;
      *(longlong *)(param_1 + 400) = lVar1;
      if (((lVar1 != *(longlong *)(param_1 + 0x188)) &&
          ((*(ushort *)(lVar3 + -2) & 0xfc00) == 0xdc00)) &&
         ((*(ushort *)(lVar3 + -4) & 0xfc00) == 0xd800)) {
        *(longlong *)(param_1 + 400) = lVar3 + -4;
        lVar1 = lVar3 + -4;
      }
      lVar3 = lVar1;
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}



// FUNCTION 142618370 FUN_142618370 body=43 status=ok
// SIG undefined FUN_142618370(void)

void FUN_142618370(undefined8 *param_1)

{
  *param_1 = icu_64::FCDUTF16CollationIterator::vftable;
  FUN_140859a90(param_1 + 0x39);
  FUN_1426191b0(param_1);
  return;
}



// FUNCTION 1426183a0 FUN_1426183a0 body=175 status=ok
// SIG undefined FUN_1426183a0(void)

undefined8 FUN_1426183a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar2 = FUN_142619210();
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x208) != *(char *)(param_2 + 0x208))) {
LAB_142618446:
    uVar4 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x208) == '\0') {
      lVar5 = *(longlong *)(param_1 + 0x188);
      lVar1 = *(longlong *)(param_1 + 0x1a8);
      lVar3 = *(longlong *)(param_2 + 0x188);
      if ((lVar5 != lVar1) == (lVar3 == *(longlong *)(param_2 + 0x1a8))) goto LAB_142618446;
      if (lVar5 == lVar1) goto LAB_1426183cc;
      if (lVar1 - *(longlong *)(param_1 + 0x1a0) !=
          *(longlong *)(param_2 + 0x1a8) - *(longlong *)(param_2 + 0x1a0)) goto LAB_142618446;
      lVar5 = *(longlong *)(param_1 + 400) - lVar5;
    }
    else {
LAB_1426183cc:
      lVar5 = *(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x1a0);
      lVar3 = *(longlong *)(param_2 + 0x1a0);
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar5 == *(longlong *)(param_2 + 400) - lVar3);
  }
  return uVar4;
}



// FUNCTION 142618450 FUN_142618450 body=78 status=ok
// SIG undefined FUN_142618450(void)

void FUN_142618450(longlong param_1,int param_2)

{
  longlong lVar1;
  
  FUN_1426192c0();
  lVar1 = (longlong)param_2 * 2 + *(longlong *)(param_1 + 0x1a0);
  *(longlong *)(param_1 + 400) = lVar1;
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  *(longlong *)(param_1 + 0x188) = lVar1;
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined1 *)(param_1 + 0x208) = 1;
  return;
}



// FUNCTION 1426184a0 FUN_1426184a0 body=73 status=ok
// SIG undefined FUN_1426184a0(void)

ulonglong FUN_1426184a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x208) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x188) != lVar1) {
      if (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188)) {
        return (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a0)) >> 1;
      }
      goto LAB_1426184b0;
    }
  }
  lVar1 = *(longlong *)(param_1 + 400);
LAB_1426184b0:
  return lVar1 - *(longlong *)(param_1 + 0x1a0) >> 1;
}



// FUNCTION 1426184f0 FUN_1426184f0 body=448 status=ok
// SIG undefined FUN_1426184f0(void)

undefined4 FUN_1426184f0(longlong param_1,uint *param_2,undefined8 param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  
  if (*(char *)(param_1 + 0x208) < '\x01') {
    puVar3 = *(ushort **)(param_1 + 0x1b0);
    puVar9 = *(ushort **)(param_1 + 400);
    if (*(char *)(param_1 + 0x208) != '\0') {
      *(ushort **)(param_1 + 0x1a8) = puVar9;
      *(ushort **)(param_1 + 0x188) = puVar9;
      if (puVar9 != puVar3) {
        *(undefined1 *)(param_1 + 0x208) = 0;
        puVar4 = puVar9;
        puVar5 = puVar9;
        goto joined_r0x000142618590;
      }
LAB_1426185af:
      *(ushort **)(param_1 + 0x198) = *(ushort **)(param_1 + 0x1b8);
      *(undefined1 *)(param_1 + 0x208) = 1;
      if (puVar9 == *(ushort **)(param_1 + 0x1b8)) goto LAB_14261863d;
      goto LAB_1426185c2;
    }
    puVar4 = *(ushort **)(param_1 + 0x188);
    puVar5 = *(ushort **)(param_1 + 0x1a8);
joined_r0x000142618590:
    if (puVar9 == *(ushort **)(param_1 + 0x198)) {
      if (puVar4 != puVar5) {
        *(ushort **)(param_1 + 0x1a8) = puVar3;
        *(ushort **)(param_1 + 0x188) = puVar3;
        *(ushort **)(param_1 + 400) = puVar3;
        puVar9 = puVar3;
      }
      goto LAB_1426185af;
    }
  }
  else {
    puVar9 = *(ushort **)(param_1 + 400);
    if (puVar9 == *(ushort **)(param_1 + 0x198)) goto LAB_14261863d;
LAB_1426185c2:
    plVar1 = (longlong *)(param_1 + 400);
    *plVar1 = (longlong)(puVar9 + 1);
    uVar2 = *puVar9;
    uVar7 = (uint)uVar2;
    *param_2 = (uint)uVar2;
    uVar8 = (uint)uVar2;
    if (uVar2 < 0xc0) goto LAB_142618687;
    uVar8 = uVar7;
    if ((((ulonglong)(byte)(&DAT_149d5bf70)[uVar2 >> 5] == 0) ||
        ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar2 >> 5] * 4) >>
          (uVar2 & 0x1f) & 1) == 0)) ||
       ((puVar9 = (ushort *)*plVar1, (uVar2 & 0xff01) != 0xf01 &&
        ((((puVar9 == *(ushort **)(param_1 + 0x198) || (uVar2 = *puVar9, uVar2 < 0x300)) ||
          ((ulonglong)(byte)(&DAT_149d5b650)[uVar2 >> 5] == 0)) ||
         ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar2 >> 5] * 4) >>
           (uVar2 & 0x1f) & 1) == 0)))))) goto LAB_142618687;
    *(ushort **)(param_1 + 400) = puVar9 + -1;
    cVar6 = FUN_1426186b0(param_1,param_3);
    if (cVar6 == '\0') {
LAB_14261863d:
      *param_2 = 0xffffffff;
      return 0xc0;
    }
    puVar9 = (ushort *)*plVar1;
  }
  *(ushort **)(param_1 + 400) = puVar9 + 1;
  uVar2 = *puVar9;
  *param_2 = (uint)uVar2;
  uVar8 = (uint)uVar2;
LAB_142618687:
  return *(undefined4 *)
          ((*(longlong **)(param_1 + 8))[2] +
          ((ulonglong)(uVar8 & 0x1f) +
          (ulonglong)*(ushort *)(**(longlong **)(param_1 + 8) + (ulonglong)(uVar8 >> 5) * 2) * 4) *
          4);
}



// FUNCTION 1426186b0 FUN_1426186b0 body=692 status=ok
// SIG undefined FUN_1426186b0(void)

undefined8 FUN_1426186b0(longlong param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  
  if (0 < *param_2) {
    return 0;
  }
  puVar9 = *(ushort **)(param_1 + 400);
  puVar10 = *(ushort **)(param_1 + 0x1b8);
  puVar12 = puVar9;
  uVar5 = 0;
  do {
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    puVar11 = puVar12 + 1;
    uVar2 = *puVar12;
    uVar8 = (uint)uVar2;
    if (uVar2 < *(ushort *)(lVar6 + 8)) {
      uVar4 = 0;
    }
    else {
      bVar1 = *(byte *)(*(longlong *)(lVar6 + 0x38) + (ulonglong)(uVar2 >> 8));
      uVar4 = 0;
      if ((bVar1 != 0) && ((ushort)((ushort)(1 << ((byte)uVar2 >> 5)) & (ushort)bVar1) != 0)) {
        if (((uVar2 & 0xfc00) == 0xd800) &&
           ((puVar11 != puVar10 && ((*puVar11 & 0xfc00) == 0xdc00)))) {
          uVar8 = (uint)uVar2 * 0x400 + (uint)*puVar11 + 0xfca02400;
          puVar11 = puVar12 + 2;
        }
        uVar4 = FUN_1425d5c90(lVar6,uVar8);
        puVar9 = *(ushort **)(param_1 + 400);
      }
    }
    if ((uVar4 < 0x100) && (puVar12 != puVar9)) {
      *(ushort **)(param_1 + 0x1b0) = puVar12;
      *(ushort **)(param_1 + 0x198) = puVar12;
      goto LAB_142618959;
    }
    if ((0xff < uVar4) &&
       (((uVar4 >> 8 < (uVar5 & 0xff) || (uVar4 == 0x8184)) || (uVar4 == 0x8182))))
    goto LAB_142618806;
  } while (((char)uVar4 != '\0') &&
          (puVar10 = *(ushort **)(param_1 + 0x1b8), puVar12 = puVar11, uVar5 = uVar4,
          puVar11 != puVar10));
  *(ushort **)(param_1 + 0x1b0) = puVar11;
  *(ushort **)(param_1 + 0x198) = puVar11;
  goto LAB_142618959;
  while( true ) {
    uVar5 = *puVar10;
    uVar8 = (uint)uVar5;
    if (uVar5 < *(ushort *)(lVar6 + 8)) goto LAB_1426188c0;
    bVar1 = *(byte *)(*(longlong *)(lVar6 + 0x38) + (ulonglong)(uVar5 >> 8));
    if ((bVar1 == 0) || ((ushort)((ushort)(1 << ((byte)uVar5 >> 5)) & (ushort)bVar1) == 0))
    goto LAB_1426188c0;
    puVar11 = puVar10 + 1;
    if (((uVar5 & 0xfc00) == 0xd800) &&
       ((puVar11 != *(ushort **)(param_1 + 0x1b8) && ((*puVar11 & 0xfc00) == 0xdc00)))) {
      uVar8 = (uint)uVar5 * 0x400 + (uint)*puVar11 + 0xfca02400;
      puVar11 = puVar10 + 2;
    }
    uVar5 = FUN_1425d5c90(lVar6,uVar8);
    if (uVar5 < 0x100) break;
LAB_142618806:
    puVar10 = puVar11;
    lVar6 = *(longlong *)(param_1 + 0x1c0);
    if (puVar10 == *(ushort **)(param_1 + 0x1b8)) goto LAB_1426188c0;
  }
  lVar6 = *(longlong *)(param_1 + 0x1c0);
LAB_1426188c0:
  lVar3 = *(longlong *)(param_1 + 400);
  FUN_1425d0ef0(lVar6,lVar3,puVar10,param_1 + 0x1c8,
                (int)((ulonglong)((longlong)puVar10 - lVar3) >> 1),param_2);
  if (0 < *param_2) {
    return 0;
  }
  *(longlong *)(param_1 + 0x1a8) = lVar3;
  *(ushort **)(param_1 + 0x1b0) = puVar10;
  uVar5 = *(ushort *)(param_1 + 0x1d0);
  if ((uVar5 & 0x11) == 0) {
    if ((uVar5 & 2) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x1e0);
    }
    else {
      lVar6 = param_1 + 0x1d2;
    }
  }
  else {
    lVar6 = 0;
  }
  *(longlong *)(param_1 + 0x188) = lVar6;
  if ((short)uVar5 < 0) {
    iVar7 = *(int *)(param_1 + 0x1d4);
  }
  else {
    iVar7 = (int)(short)uVar5 >> 5;
  }
  *(longlong *)(param_1 + 0x198) = lVar6 + (longlong)iVar7 * 2;
  *(longlong *)(param_1 + 400) = lVar6;
LAB_142618959:
  *(undefined1 *)(param_1 + 0x208) = 0;
  return 1;
}



// FUNCTION 142618970 FUN_142618970 body=48 status=ok
// SIG undefined FUN_142618970(void)

undefined8 FUN_142618970(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 400) + -2;
  *(longlong *)(param_1 + 400) = lVar1;
  *(longlong *)(param_1 + 0x1b8) = lVar1;
  *(longlong *)(param_1 + 0x198) = lVar1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1426189a0 FUN_1426189a0 body=520 status=ok
// SIG undefined FUN_1426189a0(void)

uint FUN_1426189a0(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  char cVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  if (*(char *)(param_1 + 0x208) < '\x01') {
    puVar2 = *(ushort **)(param_1 + 0x1b0);
    puVar8 = *(ushort **)(param_1 + 0x1b8);
    puVar6 = *(ushort **)(param_1 + 400);
    if (*(char *)(param_1 + 0x208) != '\0') {
      *(ushort **)(param_1 + 0x1a8) = puVar6;
      *(ushort **)(param_1 + 0x188) = puVar6;
      if (puVar6 != puVar2) {
        *(undefined1 *)(param_1 + 0x208) = 0;
        puVar7 = puVar6;
        puVar3 = puVar6;
        goto joined_r0x000142618a20;
      }
LAB_142618a43:
      *(ushort **)(param_1 + 0x198) = puVar8;
      *(undefined1 *)(param_1 + 0x208) = 1;
      goto LAB_142618a51;
    }
    puVar7 = *(ushort **)(param_1 + 0x188);
    puVar3 = *(ushort **)(param_1 + 0x1a8);
joined_r0x000142618a20:
    if (puVar6 == *(ushort **)(param_1 + 0x198)) {
      if (puVar7 != puVar3) {
        *(ushort **)(param_1 + 0x1a8) = puVar2;
        *(ushort **)(param_1 + 0x188) = puVar2;
        *(ushort **)(param_1 + 400) = puVar2;
        puVar6 = puVar2;
      }
      goto LAB_142618a43;
    }
  }
  else {
    puVar6 = *(ushort **)(param_1 + 400);
    puVar8 = *(ushort **)(param_1 + 0x198);
LAB_142618a51:
    if (puVar6 == puVar8) {
      return 0xffffffff;
    }
    puVar2 = puVar6 + 1;
    *(ushort **)(param_1 + 400) = puVar2;
    uVar1 = *puVar6;
    uVar5 = (uint)uVar1;
    puVar7 = puVar2;
    if (uVar1 < 0xc0) {
      if (uVar1 == 0) {
        if (puVar8 != (ushort *)0x0) {
          return 0;
        }
        *(ushort **)(param_1 + 400) = puVar6;
        *(ushort **)(param_1 + 0x1b8) = puVar6;
        *(ushort **)(param_1 + 0x198) = puVar6;
        return 0xffffffff;
      }
      goto LAB_142618aed;
    }
    if ((((ulonglong)(byte)(&DAT_149d5bf70)[uVar1 >> 5] == 0) ||
        ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar1 >> 5] * 4) >>
          (uVar1 & 0x1f) & 1) == 0)) ||
       (((uVar1 & 0xff01) != 0xf01 &&
        ((((puVar7 = puVar8, puVar2 == puVar8 || (uVar1 = *puVar2, puVar7 = puVar2, uVar1 < 0x300))
          || ((ulonglong)(byte)(&DAT_149d5b650)[uVar1 >> 5] == 0)) ||
         ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar1 >> 5] * 4) >>
           (uVar1 & 0x1f) & 1) == 0)))))) goto LAB_142618aed;
    *(ushort **)(param_1 + 400) = puVar6;
    cVar4 = FUN_1426186b0(param_1);
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    puVar6 = *(ushort **)(param_1 + 400);
  }
  *(ushort **)(param_1 + 400) = puVar6 + 1;
  uVar5 = (uint)*puVar6;
  puVar7 = puVar6 + 1;
LAB_142618aed:
  if ((((uVar5 & 0xfc00) == 0xd800) && (puVar7 != *(ushort **)(param_1 + 0x198))) &&
     (uVar1 = *puVar7, (uVar1 & 0xfc00) == 0xdc00)) {
    *(ushort **)(param_1 + 400) = puVar7 + 1;
    uVar5 = uVar5 * 0x400 + (uint)uVar1 + 0xfca02400;
  }
  return uVar5;
}



// FUNCTION 142618bb0 FUN_142618bb0 body=467 status=ok
// SIG undefined FUN_142618bb0(void)

uint FUN_142618bb0(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (*(char *)(param_1 + 0x208) < '\0') {
    puVar7 = *(ushort **)(param_1 + 0x188);
    puVar6 = *(ushort **)(param_1 + 400);
LAB_142618c52:
    if (puVar6 == puVar7) {
      return 0xffffffff;
    }
    puVar2 = puVar6 + -1;
    *(ushort **)(param_1 + 400) = puVar2;
    uVar1 = puVar6[-1];
    uVar5 = (uint)uVar1;
    puVar4 = puVar2;
    if ((((uVar1 < 0x300) || ((ulonglong)(byte)(&DAT_149d5b650)[uVar1 >> 5] == 0)) ||
        ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar1 >> 5] * 4) >>
          (uVar1 & 0x1f) & 1) == 0)) ||
       (((uVar1 & 0xff01) != 0xf01 &&
        (((puVar4 = puVar7, puVar2 == puVar7 || (uVar1 = puVar6[-2], puVar4 = puVar2, uVar1 < 0xc0))
         || (((ulonglong)(byte)(&DAT_149d5bf70)[uVar1 >> 5] == 0 ||
             ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar1 >> 5] * 4) >>
               (uVar1 & 0x1f) & 1) == 0)))))))) goto LAB_142618d2f;
    *(ushort **)(param_1 + 400) = puVar6;
    cVar3 = FUN_142618d90(param_1);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    puVar4 = (ushort *)(*(longlong *)(param_1 + 400) + -2);
    *(ushort **)(param_1 + 400) = puVar4;
  }
  else {
    puVar2 = *(ushort **)(param_1 + 0x1a8);
    puVar7 = *(ushort **)(param_1 + 0x1a0);
    puVar6 = *(ushort **)(param_1 + 400);
    if (*(char *)(param_1 + 0x208) != '\0') {
      *(ushort **)(param_1 + 0x1b0) = puVar6;
      *(ushort **)(param_1 + 0x198) = puVar6;
      if (puVar6 != puVar2) {
        *(undefined1 *)(param_1 + 0x208) = 0;
        goto LAB_142618bfc;
      }
LAB_142618c44:
      *(ushort **)(param_1 + 0x188) = puVar7;
      *(undefined1 *)(param_1 + 0x208) = 0xff;
      goto LAB_142618c52;
    }
LAB_142618bfc:
    if (puVar6 == *(ushort **)(param_1 + 0x188)) {
      if (*(ushort **)(param_1 + 0x188) != puVar2) {
        *(ushort **)(param_1 + 0x1b0) = puVar2;
        *(ushort **)(param_1 + 0x198) = puVar2;
        *(ushort **)(param_1 + 400) = puVar2;
        puVar6 = puVar2;
      }
      goto LAB_142618c44;
    }
    puVar4 = puVar6 + -1;
    *(ushort **)(param_1 + 400) = puVar4;
  }
  uVar5 = (uint)*puVar4;
LAB_142618d2f:
  if ((((uVar5 & 0xfc00) == 0xdc00) && (puVar4 != *(ushort **)(param_1 + 0x188))) &&
     (uVar1 = puVar4[-1], (uVar1 & 0xfc00) == 0xd800)) {
    *(ushort **)(param_1 + 400) = puVar4 + -1;
    uVar5 = uVar5 + (uint)uVar1 * 0x400 + 0xfca02400;
  }
  return uVar5;
}



// FUNCTION 142618d90 FUN_142618d90 body=681 status=ok
// SIG undefined FUN_142618d90(void)

undefined8 FUN_142618d90(longlong param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (0 < *param_2) {
    return 0;
  }
  uVar9 = *(ulonglong *)(param_1 + 400);
  uVar5 = *(ulonglong *)(param_1 + 0x1a0);
  uVar6 = 0;
  uVar11 = uVar9;
  do {
    lVar7 = *(longlong *)(param_1 + 0x1c0);
    uVar10 = uVar11 - 2;
    uVar2 = *(ushort *)(uVar11 - 2);
    uVar8 = (uint)uVar2;
    if (uVar2 < *(ushort *)(lVar7 + 8)) {
      uVar3 = 0;
    }
    else {
      if ((uVar2 & 0xfc00) == 0xdc00) {
        if ((uVar5 < uVar10) && ((*(ushort *)(uVar11 - 4) & 0xfc00) == 0xd800)) {
          uVar10 = uVar11 - 4;
          uVar8 = (uint)uVar2 + (uint)*(ushort *)(uVar11 - 4) * 0x400 + 0xfca02400;
        }
      }
      else {
        bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x38) + (ulonglong)(uVar2 >> 8));
        uVar3 = 0;
        if ((bVar1 == 0) || ((ushort)((ushort)(1 << ((byte)uVar2 >> 5)) & (ushort)bVar1) == 0))
        goto LAB_142618e5d;
      }
      uVar3 = FUN_1425d5c90(lVar7,uVar8);
      uVar9 = *(ulonglong *)(param_1 + 400);
    }
LAB_142618e5d:
    if (((uVar3 & 0xff) == 0) && (uVar11 != uVar9)) {
      *(ulonglong *)(param_1 + 0x1a8) = uVar11;
      *(ulonglong *)(param_1 + 0x188) = uVar11;
      goto LAB_142619039;
    }
    uVar8 = uVar3 & 0xffff;
    if (((uVar3 & 0xff) != 0) &&
       (((((char)uVar6 != '\0' && ((ushort)uVar6 < ((ushort)uVar3 & 0xff))) || (uVar8 == 0x8184)) ||
        (uVar8 == 0x8182)))) goto LAB_142618ee1;
    if (uVar8 < 0x100) break;
    uVar6 = uVar8 >> 8;
    uVar5 = *(ulonglong *)(param_1 + 0x1a0);
    uVar11 = uVar10;
  } while (uVar10 != uVar5);
  *(ulonglong *)(param_1 + 0x1a8) = uVar10;
  *(ulonglong *)(param_1 + 0x188) = uVar10;
LAB_142619039:
  *(undefined1 *)(param_1 + 0x208) = 0;
  return 1;
LAB_142618ee1:
  uVar5 = uVar10;
  if (((uVar3 & 0xffff) < 0x100) || (uVar5 == *(ulonglong *)(param_1 + 0x1a0))) goto LAB_142618f91;
  lVar7 = *(longlong *)(param_1 + 0x1c0);
  uVar2 = *(ushort *)(uVar5 - 2);
  uVar6 = (uint)uVar2;
  if (uVar2 < *(ushort *)(lVar7 + 8)) goto LAB_142618f91;
  uVar10 = uVar5 - 2;
  if ((uVar2 & 0xfc00) == 0xdc00) {
    if ((*(ulonglong *)(param_1 + 0x1a0) < uVar10) && ((*(ushort *)(uVar5 - 4) & 0xfc00) == 0xd800))
    {
      uVar10 = uVar5 - 4;
      uVar6 = (uint)uVar2 + (uint)*(ushort *)(uVar5 - 4) * 0x400 + 0xfca02400;
    }
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x38) + (ulonglong)(uVar2 >> 8));
    if ((bVar1 == 0) || ((ushort)((ushort)(1 << ((byte)uVar2 >> 5)) & (ushort)bVar1) == 0))
    goto LAB_142618f91;
  }
  uVar3 = FUN_1425d5c90(lVar7,uVar6);
  if ((short)uVar3 == 0) goto LAB_142618f91;
  goto LAB_142618ee1;
LAB_142618f91:
  lVar7 = *(longlong *)(param_1 + 400);
  FUN_1425d0ef0(*(undefined8 *)(param_1 + 0x1c0),uVar5,lVar7,param_1 + 0x1c8,
                (int)(lVar7 - uVar5 >> 1),param_2);
  if (0 < *param_2) {
    return 0;
  }
  *(ulonglong *)(param_1 + 0x1a8) = uVar5;
  *(longlong *)(param_1 + 0x1b0) = lVar7;
  uVar2 = *(ushort *)(param_1 + 0x1d0);
  if ((uVar2 & 0x11) == 0) {
    if ((uVar2 & 2) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x1e0);
    }
    else {
      lVar7 = param_1 + 0x1d2;
    }
  }
  else {
    lVar7 = 0;
  }
  *(longlong *)(param_1 + 0x188) = lVar7;
  if ((short)uVar2 < 0) {
    iVar4 = *(int *)(param_1 + 0x1d4);
  }
  else {
    iVar4 = (int)(short)uVar2 >> 5;
  }
  lVar7 = lVar7 + (longlong)iVar4 * 2;
  *(longlong *)(param_1 + 0x198) = lVar7;
  *(longlong *)(param_1 + 400) = lVar7;
  goto LAB_142619039;
}



// FUNCTION 142619050 FUN_142619050 body=65 status=ok
// SIG undefined FUN_142619050(void)

void FUN_142619050(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_1426189a0(param_1,param_3);
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1426190a0 FUN_1426190a0 body=65 status=ok
// SIG undefined FUN_1426190a0(void)

void FUN_1426190a0(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_142618bb0(param_1,param_3);
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1426190f0 FUN_1426190f0 body=182 status=ok
// SIG undefined FUN_1426190f0(void)

ulonglong FUN_1426190f0(uint *param_1,int param_2,int *param_3)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((int)param_1[4] < (int)(param_2 + uVar4)) {
    uVar2 = param_1[4];
    if (*param_3 < 1) {
      do {
        uVar1 = uVar2;
        uVar2 = uVar1 << ((int)uVar1 < 1000) + 1;
      } while ((int)uVar2 < (int)(param_2 + uVar4));
      if ((0 < (int)uVar1) &&
         (_Dst = (void *)FUN_1424da030((ulonglong)uVar2 << 3), _Dst != (void *)0x0)) {
        if (0 < (int)uVar4) {
          if ((int)param_1[4] < (int)uVar4) {
            uVar4 = param_1[4];
          }
          if ((int)uVar2 <= (int)uVar4) {
            uVar4 = uVar2;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar4 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar2;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_142619197;
      }
      *param_3 = 7;
    }
    uVar3 = 0;
  }
LAB_142619197:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1426191b0 FUN_1426191b0 body=85 status=ok
// SIG undefined FUN_1426191b0(void)

void FUN_1426191b0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = icu_64::CollationIterator::vftable;
  lVar1 = param_1[0x2f];
  if (lVar1 != 0) {
    FUN_140859a90(lVar1 + 0x40);
    FUN_140859a90(lVar1);
    FUN_1401773f0(lVar1);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    FUN_1424da110(param_1[4]);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 142619210 FUN_142619210 body=170 status=ok
// SIG undefined FUN_142619210(void)

ulonglong FUN_142619210(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint3 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar5 = __RTtypeid();
  lVar6 = __RTtypeid(param_2);
  iVar4 = __std_type_info_compare(lVar5 + 8,lVar6 + 8);
  if (iVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((((uVar1 == *(uint *)(param_2 + 0x18)) &&
         (*(int *)(param_1 + 0x170) == *(int *)(param_2 + 0x170))) &&
        (*(int *)(param_1 + 0x180) == *(int *)(param_2 + 0x180))) &&
       (*(char *)(param_1 + 0x184) == *(char *)(param_2 + 0x184))) {
      uVar2 = (uint3)(uVar1 >> 8);
      if ((int)uVar1 < 1) {
        return CONCAT71((uint7)uVar2,1);
      }
      if (**(longlong **)(param_1 + 0x20) == **(longlong **)(param_2 + 0x20)) {
        uVar3 = 1;
        do {
          uVar7 = uVar3;
          if (uVar1 == uVar7) break;
          uVar3 = uVar7 + 1;
        } while ((*(longlong **)(param_1 + 0x20))[uVar7] == (*(longlong **)(param_2 + 0x20))[uVar7])
        ;
        return (ulonglong)CONCAT31(uVar2,uVar1 <= uVar7);
      }
    }
  }
  return 0;
}



// FUNCTION 1426192c0 FUN_1426192c0 body=64 status=ok
// SIG undefined FUN_1426192c0(void)

void FUN_1426192c0(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    uVar2 = 2;
    if ((*(ushort *)(lVar1 + 8) & 1) == 0) {
      uVar2 = *(ushort *)(lVar1 + 8) & 0x1f;
    }
    *(ushort *)(lVar1 + 8) = uVar2;
    *(undefined4 *)(lVar1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 142619300 FUN_142619300 body=73 status=ok
// SIG undefined FUN_142619300(void)

undefined4 FUN_142619300(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  while ((iVar1 < 1 && (lVar2 = FUN_14255e910(param_1,param_2), lVar2 != 0x101000100))) {
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x18);
    iVar1 = *param_2;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 142619350 FUN_142619350 body=186 status=ok
// SIG undefined FUN_142619350(void)

undefined4 FUN_142619350(longlong *param_1,uint *param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
  *param_2 = uVar4;
  if ((int)uVar4 < 0) {
    return 0xc0;
  }
  plVar2 = *(longlong **)param_1[2];
  if (uVar4 < 0xd800) {
    uVar1 = *(ushort *)(*plVar2 + (ulonglong)(uVar4 >> 5) * 2);
  }
  else {
    if (uVar4 < 0x10000) {
      uVar3 = (uVar4 >> 5) + 0x140;
      if (0xdbff < uVar4) {
        uVar3 = uVar4 >> 5;
      }
      uVar7 = (ulonglong)uVar3;
      lVar5 = *plVar2;
    }
    else {
      iVar6 = 0x80;
      if (0x10ffff < uVar4) goto LAB_1426193f7;
      if (*(int *)((longlong)plVar2 + 0x2c) <= (int)uVar4) {
        iVar6 = (int)plVar2[6];
        goto LAB_1426193f7;
      }
      lVar5 = *plVar2;
      uVar7 = (ulonglong)(uVar4 >> 5 & 0x3f) +
              (ulonglong)*(ushort *)(lVar5 + 0x1040 + (ulonglong)(uVar4 >> 0xb) * 2);
    }
    uVar1 = *(ushort *)(lVar5 + uVar7 * 2);
  }
  iVar6 = (uVar4 & 0x1f) + (uint)uVar1 * 4;
LAB_1426193f7:
  return *(undefined4 *)(plVar2[2] + (longlong)iVar6 * 4);
}



// FUNCTION 142619410 FUN_142619410 body=3 status=ok
// SIG undefined FUN_142619410(void)

undefined8 FUN_142619410(void)

{
  return 0;
}



// FUNCTION 142619420 FUN_142619420 body=3 status=ok
// SIG undefined FUN_142619420(void)

undefined8 FUN_142619420(void)

{
  return 0;
}



// FUNCTION 142619430 FUN_142619430 body=3 status=ok
// SIG undefined FUN_142619430(void)

undefined8 FUN_142619430(void)

{
  return 0;
}



// FUNCTION 142619440 FUN_142619440 body=150 status=ok
// SIG undefined FUN_142619440(void)

undefined4 FUN_142619440(longlong param_1,uint param_2)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
  if (param_2 < 0xd800) {
    uVar1 = *(ushort *)(*plVar2 + (ulonglong)(param_2 >> 5) * 2);
  }
  else {
    if (param_2 < 0x10000) {
      uVar3 = (param_2 >> 5) + 0x140;
      if (0xdbff < param_2) {
        uVar3 = param_2 >> 5;
      }
      uVar6 = (ulonglong)uVar3;
      lVar4 = *plVar2;
    }
    else {
      iVar5 = 0x80;
      if (0x10ffff < param_2) goto LAB_1426194c9;
      if (*(int *)((longlong)plVar2 + 0x2c) <= (int)param_2) {
        iVar5 = (int)plVar2[6];
        goto LAB_1426194c9;
      }
      lVar4 = *plVar2;
      uVar6 = (ulonglong)(param_2 >> 5 & 0x3f) +
              (ulonglong)*(ushort *)(lVar4 + 0x1040 + (ulonglong)(param_2 >> 0xb) * 2);
    }
    uVar1 = *(ushort *)(lVar4 + uVar6 * 2);
  }
  iVar5 = (param_2 & 0x1f) + (uint)uVar1 * 4;
LAB_1426194c9:
  return *(undefined4 *)(plVar2[2] + (longlong)iVar5 * 4);
}



// FUNCTION 1426194e0 FUN_1426194e0 body=19 status=ok
// SIG undefined FUN_1426194e0(void)

undefined8 FUN_1426194e0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (0 < *param_3) {
    return 0;
  }
  *param_3 = 5;
  return 0;
}



// FUNCTION 142619500 FUN_142619500 body=73 status=ok
// SIG undefined FUN_142619500(void)

undefined8 FUN_142619500(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *in_stack_00000028;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  FUN_142619550();
  uVar2 = 1;
  if (*in_stack_00000028 < 1) {
    iVar1 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = iVar1 + 1;
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8);
  }
  return uVar2;
}



// FUNCTION 142619550 FUN_142619550 body=3978 status=ok
// SIG undefined FUN_142619550(void)

void FUN_142619550(longlong *param_1,longlong *param_2,uint param_3,uint param_4,char param_5,
                  int *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  void *pvVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int iVar20;
  int *in_stack_ffffffffffffffa0;
  undefined4 uVar21;
  
  if ((~param_4 & 0xc0) == 0) {
    uVar13 = (ulonglong)param_3;
    do {
      uVar7 = (uint)uVar13;
      switch(param_4 & 0xf) {
      default:
        if (0 < *param_6) {
          return;
        }
        *param_6 = 5;
        return;
      case 1:
        uVar7 = *(uint *)(param_1 + 3);
        if ((0x27 < (int)uVar7) && ((int)*(uint *)(param_1 + 5) <= (int)uVar7)) {
          uVar14 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar16 = uVar14;
            uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
          } while ((int)uVar14 <= (int)uVar7);
          if (((int)uVar16 < 1) ||
             (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0))
          goto LAB_14261a4d8;
          if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
            uVar7 = *(uint *)(param_1 + 5);
          }
          if ((int)uVar14 <= (int)uVar7) {
            uVar7 = uVar14;
          }
          memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
          if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            FUN_1424da110(param_1[4]);
          }
          param_1[4] = (longlong)pvVar10;
          *(uint *)(param_1 + 5) = uVar14;
          *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
          uVar7 = *(uint *)(param_1 + 3);
        }
        uVar13 = (ulonglong)(param_4 & 0xffffff00);
        goto LAB_14261a0b4;
      case 2:
        uVar7 = *(uint *)(param_1 + 3);
        if ((0x27 < (int)uVar7) && ((int)*(uint *)(param_1 + 5) <= (int)uVar7)) {
          uVar14 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar16 = uVar14;
            uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
          } while ((int)uVar14 <= (int)uVar7);
          if (((int)uVar16 < 1) ||
             (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0))
          goto LAB_14261a4d8;
          if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
            uVar7 = *(uint *)(param_1 + 5);
          }
          if ((int)uVar14 <= (int)uVar7) {
            uVar7 = uVar14;
          }
          memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
          if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            FUN_1424da110(param_1[4]);
          }
          param_1[4] = (longlong)pvVar10;
          *(uint *)(param_1 + 5) = uVar14;
          *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
          uVar7 = *(uint *)(param_1 + 3);
        }
        uVar13 = (ulonglong)(param_4 & 0xffffff00);
        goto LAB_14261a0bf;
      case 4:
        uVar7 = *(uint *)(param_1 + 3);
        if ((int)*(uint *)(param_1 + 5) < (int)(uVar7 + 2)) {
          uVar14 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar16 = uVar14;
            uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
          } while ((int)uVar14 < (int)(uVar7 + 2));
          if (((int)uVar16 < 1) ||
             (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0))
          goto LAB_14261a4d8;
          if (0 < (int)uVar7) {
            if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
              uVar7 = *(uint *)(param_1 + 5);
            }
            if ((int)uVar14 <= (int)uVar7) {
              uVar7 = uVar14;
            }
            memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
          }
          if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            FUN_1424da110(param_1[4]);
          }
          param_1[4] = (longlong)pvVar10;
          *(uint *)(param_1 + 5) = uVar14;
          *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
          uVar7 = *(uint *)(param_1 + 3);
        }
        else {
          pvVar10 = (void *)param_1[4];
        }
        *(ulonglong *)((longlong)pvVar10 + (longlong)(int)uVar7 * 8) =
             (CONCAT44(param_4,param_4 >> 8) & 0xff0000000000ff00) + 0x5000000;
        *(ulonglong *)(param_1[4] + 8 + (longlong)(int)param_1[3] * 8) =
             (ulonglong)((param_4 & 0xff00) << 0x10 | 0x500);
        *(int *)(param_1 + 3) = (int)param_1[3] + 2;
        return;
      case 5:
        puVar17 = (uint *)((ulonglong)(param_4 >> 0xd) * 4 + param_2[1]);
        uVar14 = param_4 >> 8 & 0x1f;
        uVar7 = *(uint *)(param_1 + 3);
        iVar6 = uVar7 + uVar14;
        if ((int)*(uint *)(param_1 + 5) < iVar6) {
          uVar16 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar15 = uVar16;
            uVar16 = uVar15 << ((int)uVar15 < 1000) + 1;
          } while ((int)uVar16 < iVar6);
          if (((int)uVar15 < 1) ||
             (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar16 << 3), pvVar10 == (void *)0x0))
          goto LAB_14261a4d8;
          if (0 < (int)uVar7) {
            if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
              uVar7 = *(uint *)(param_1 + 5);
            }
            if ((int)uVar16 <= (int)uVar7) {
              uVar7 = uVar16;
            }
            memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
          }
          if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            FUN_1424da110(param_1[4]);
          }
          param_1[4] = (longlong)pvVar10;
          *(uint *)(param_1 + 5) = uVar16;
          *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
        }
        iVar6 = uVar14 + 1;
        do {
          uVar7 = *puVar17;
          if ((uint)((ulonglong)uVar7 & 0xff) < 0xc0) {
            uVar13 = ((ulonglong)uVar7 & 0xff) << 8 |
                     CONCAT44(uVar7,uVar7 << 0x10) & 0xffff0000ff000000;
          }
          else {
            uVar13 = (ulonglong)(uVar7 & 0xffffff00);
            if ((uVar7 & 0xf) == 1) {
              uVar13 = uVar13 << 0x20 | 0x5000500;
            }
          }
          puVar17 = puVar17 + 1;
          lVar12 = param_1[3];
          *(int *)(param_1 + 3) = (int)lVar12 + 1;
          *(ulonglong *)(param_1[4] + (longlong)(int)lVar12 * 8) = uVar13;
          iVar6 = iVar6 + -1;
        } while (1 < iVar6);
        return;
      case 6:
        puVar18 = (undefined8 *)((ulonglong)(param_4 >> 0xd) * 8 + param_2[2]);
        uVar14 = param_4 >> 8 & 0x1f;
        uVar7 = *(uint *)(param_1 + 3);
        iVar6 = uVar7 + uVar14;
        if ((int)*(uint *)(param_1 + 5) < iVar6) {
          uVar16 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar15 = uVar16;
            uVar16 = uVar15 << ((int)uVar15 < 1000) + 1;
          } while ((int)uVar16 < iVar6);
          if (((int)uVar15 < 1) ||
             (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar16 << 3), pvVar10 == (void *)0x0))
          goto LAB_14261a4d8;
          if (0 < (int)uVar7) {
            if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
              uVar7 = *(uint *)(param_1 + 5);
            }
            if ((int)uVar16 <= (int)uVar7) {
              uVar7 = uVar16;
            }
            memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
          }
          if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            FUN_1424da110(param_1[4]);
          }
          param_1[4] = (longlong)pvVar10;
          *(uint *)(param_1 + 5) = uVar16;
          *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
        }
        iVar6 = uVar14 + 1;
        do {
          uVar3 = *puVar18;
          puVar18 = puVar18 + 1;
          lVar12 = param_1[3];
          *(int *)(param_1 + 3) = (int)lVar12 + 1;
          *(undefined8 *)(param_1[4] + (longlong)(int)lVar12 * 8) = uVar3;
          iVar6 = iVar6 + -1;
        } while (1 < iVar6);
        return;
      case 7:
        uVar14 = (**(code **)(*param_1 + 0x70))(param_1,param_4,param_6);
        if (0 < *param_6) {
          return;
        }
        if (uVar14 == 0xc0) {
          param_2 = *(longlong **)(param_1[2] + 0x20);
          plVar2 = (longlong *)*param_2;
          if (uVar7 < 0xd800) {
            uVar5 = *(ushort *)(*plVar2 + (uVar13 >> 5) * 2);
LAB_142619997:
            iVar6 = (uVar7 & 0x1f) + (uint)uVar5 * 4;
          }
          else {
            if (uVar7 < 0x10000) {
              lVar12 = *plVar2;
              uVar19 = (ulonglong)((int)(uVar13 >> 5) + 0x140);
              if (0xdbff < uVar7) {
                uVar19 = uVar13 >> 5;
              }
LAB_142619992:
              uVar5 = *(ushort *)(lVar12 + uVar19 * 2);
              goto LAB_142619997;
            }
            iVar6 = 0x80;
            if (uVar7 < 0x110000) {
              if ((int)uVar7 < *(int *)((longlong)plVar2 + 0x2c)) {
                lVar12 = *plVar2;
                uVar19 = (ulonglong)((uint)(uVar13 >> 5) & 0x3f) +
                         (ulonglong)*(ushort *)(lVar12 + 0x1040 + (uVar13 >> 0xb) * 2);
                goto LAB_142619992;
              }
              iVar6 = (int)plVar2[6];
            }
          }
          uVar14 = *(uint *)(plVar2[2] + (longlong)iVar6 * 4);
        }
        break;
      case 8:
        if (param_5 == '\0') {
          uVar14 = FUN_14261a4f0(param_1,param_2,param_4,param_6);
        }
        else {
          (**(code **)(*param_1 + 0x60))(param_1,1,param_6);
          uVar14 = FUN_14261a4f0(param_1,param_2,param_4,param_6);
          (**(code **)(*param_1 + 0x58))(param_1,1,param_6);
        }
        break;
      case 9:
        lVar12 = param_2[3];
        uVar19 = (ulonglong)(param_4 >> 0xd);
        uVar14 = CONCAT22(*(undefined2 *)(lVar12 + uVar19 * 2),
                          *(undefined2 *)(lVar12 + 2 + uVar19 * 2));
        if (param_5 != '\0') {
          lVar1 = param_1[0x2f];
          if ((lVar1 == 0) && ((int)param_1[0x30] < 0)) {
            uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_6);
            uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
            uVar7 = (uint)uVar9;
            if (-1 < (int)uVar7) {
              if ((param_4 & 0x200) == 0) goto LAB_142619a8f;
              if (0x2ff < uVar7) {
                uVar16 = ((uint)(uVar9 >> 10) & 0x3fffff) + 0xd7c0 & 0xffff;
                if (uVar7 < 0x10000) {
                  uVar16 = uVar7;
                }
                if (((ulonglong)(byte)(&DAT_149d5b650)[uVar16 >> 5] != 0) &&
                   ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar16 >> 5] * 4)
                     >> (uVar16 & 0x1f) & 1) != 0)) goto LAB_142619a8f;
              }
              (**(code **)(*param_1 + 0x60))(param_1,1,param_6);
            }
          }
          else {
            if (lVar1 == 0) {
LAB_142619a20:
              if ((int)param_1[0x30] == 0) break;
              uVar9 = (**(code **)(*param_1 + 0x28))(param_1,param_6);
              lVar1 = param_1[0x2f];
              if (((lVar1 != 0) && (-1 < (int)uVar9)) && (0x1f < *(ushort *)(lVar1 + 8))) {
                *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
              }
              if (((int)uVar9 < 0) || ((int)param_1[0x30] < 1)) goto LAB_142619a7f;
              *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
            }
            else {
              if (*(short *)(lVar1 + 8) < 0) {
                iVar6 = *(int *)(lVar1 + 0xc);
              }
              else {
                iVar6 = (int)*(short *)(lVar1 + 8) >> 5;
              }
              if (iVar6 <= *(int *)(lVar1 + 0x80)) goto LAB_142619a20;
              uVar9 = FUN_1424a8030(lVar1);
              *(uint *)(lVar1 + 0x80) = (*(int *)(lVar1 + 0x80) - (uint)((uint)uVar9 < 0x10000)) + 2
              ;
LAB_142619a7f:
              if ((int)uVar9 < 0) break;
            }
            uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
            uVar7 = (uint)uVar9;
            if ((param_4 & 0x200) == 0) {
LAB_142619a8f:
              in_stack_ffffffffffffffa0 = (int *)CONCAT44(uVar21,uVar7);
              uVar14 = FUN_14261a680(param_1,param_2,param_4,uVar19 * 2 + lVar12 + 4,uVar14,
                                     in_stack_ffffffffffffffa0,param_6);
              if (uVar14 == 1) {
                return;
              }
            }
            else {
              if (0x2ff < uVar7) {
                uVar16 = ((uint)(uVar9 >> 10) & 0x3fffff) + 0xd7c0 & 0xffff;
                if (uVar7 < 0x10000) {
                  uVar16 = uVar7;
                }
                if (((ulonglong)(byte)(&DAT_149d5b650)[uVar16 >> 5] != 0) &&
                   ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar16 >> 5] * 4)
                     >> (uVar16 & 0x1f) & 1) != 0)) goto LAB_142619a8f;
              }
              lVar12 = param_1[0x2f];
              uVar7 = 1;
              if ((lVar12 != 0) && (uVar5 = *(ushort *)(lVar12 + 8), 0x1f < uVar5)) {
                if ((short)uVar5 < 0) {
                  iVar6 = *(int *)(lVar12 + 0xc);
                }
                else {
                  iVar6 = (int)(short)uVar5 >> 5;
                }
                iVar11 = *(int *)(lVar12 + 0x80);
                if (iVar6 < iVar11) {
                  iVar20 = iVar11 + -1;
                }
                else {
                  iVar20 = FUN_1424a81b0(lVar12,iVar11,0xffffffff);
                }
                uVar7 = (uint)(iVar6 < iVar11);
                *(int *)(lVar12 + 0x80) = iVar20;
              }
              (**(code **)(*param_1 + 0x60))(param_1,uVar7,param_6);
              if (-1 < (int)param_1[0x30]) {
                *(uint *)(param_1 + 0x30) = (int)param_1[0x30] + uVar7;
              }
            }
          }
        }
        break;
      case 10:
        if (*(char *)((longlong)param_1 + 0x184) != '\0') {
          FUN_14261ace0(param_1,param_4,param_5,param_6);
          return;
        }
        uVar14 = *(uint *)(param_2[1] + (ulonglong)(param_4 >> 0xd) * 4);
        break;
      case 0xb:
        if ((param_5 != '\0') && (cVar4 = (**(code **)(*param_1 + 0x48))(param_1), cVar4 != '\0')) {
          uVar7 = *(uint *)(param_1 + 3);
          if ((0x27 < (int)uVar7) && ((int)*(uint *)(param_1 + 5) <= (int)uVar7)) {
            uVar14 = *(uint *)(param_1 + 5);
            if (0 < *param_6) {
              return;
            }
            do {
              uVar16 = uVar14;
              uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
            } while ((int)uVar14 <= (int)uVar7);
            if (((int)uVar16 < 1) ||
               (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0))
            goto LAB_14261a4d8;
            if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
              uVar7 = *(uint *)(param_1 + 5);
            }
            if ((int)uVar14 <= (int)uVar7) {
              uVar7 = uVar14;
            }
            memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
            if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
              FUN_1424da110(param_1[4]);
            }
            param_1[4] = (longlong)pvVar10;
            *(uint *)(param_1 + 5) = uVar14;
            *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
            uVar7 = *(uint *)(param_1 + 3);
          }
          *(uint *)(param_1 + 3) = uVar7 + 1;
          *(undefined8 *)(param_1[4] + (longlong)(int)uVar7 * 8) = 0x101000100;
          return;
        }
        uVar14 = *(uint *)param_2[1];
        break;
      case 0xc:
        lVar12 = param_2[5];
        iVar6 = uVar7 - 0xac00;
        iVar11 = (int)((ulonglong)((longlong)iVar6 * -0x6db6db6d) >> 0x20) + uVar7 + -0xac00;
        iVar11 = (iVar11 >> 4) - (iVar11 >> 0x1f);
        iVar20 = iVar6 + iVar11 * -0x1c;
        iVar11 = iVar11 % 0x15;
        if ((param_4 & 0x100) != 0) {
          uVar7 = *(uint *)(param_1 + 3);
          iVar8 = (3 - (uint)(iVar20 == 0)) + uVar7;
          if ((int)*(uint *)(param_1 + 5) < iVar8) {
            uVar14 = *(uint *)(param_1 + 5);
            if (0 < *param_6) {
              return;
            }
            do {
              uVar16 = uVar14;
              uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
            } while ((int)uVar14 < iVar8);
            if (((int)uVar16 < 1) ||
               (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0))
            goto LAB_14261a4d8;
            if (0 < (int)uVar7) {
              if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
                uVar7 = *(uint *)(param_1 + 5);
              }
              if ((int)uVar14 <= (int)uVar7) {
                uVar7 = uVar14;
              }
              memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
            }
            if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
              FUN_1424da110(param_1[4]);
            }
            param_1[4] = (longlong)pvVar10;
            *(uint *)(param_1 + 5) = uVar14;
            *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
          }
          uVar7 = *(uint *)(lVar12 + (longlong)(iVar6 / 0x24c) * 4);
          if ((uVar7 & 0xff) < 0xc0) {
            uVar13 = (ulonglong)(uVar7 & 0xff) << 8 |
                     CONCAT44(uVar7,uVar7 << 0x10) & 0xffff0000ff000000;
          }
          else {
            uVar13 = (ulonglong)(uVar7 & 0xffffff00);
            if ((uVar7 & 0xf) == 1) {
              uVar13 = uVar13 << 0x20 | 0x5000500;
            }
          }
          *(ulonglong *)(param_1[4] + (longlong)(int)param_1[3] * 8) = uVar13;
          uVar7 = *(uint *)(lVar12 + 0x4c + (longlong)iVar11 * 4);
          if ((uVar7 & 0xff) < 0xc0) {
            uVar13 = (ulonglong)(uVar7 & 0xff) << 8 |
                     CONCAT44(uVar7,uVar7 << 0x10) & 0xffff0000ff000000;
          }
          else {
            uVar13 = (ulonglong)(uVar7 & 0xffffff00);
            if ((uVar7 & 0xf) == 1) {
              uVar13 = uVar13 << 0x20 | 0x5000500;
            }
          }
          *(ulonglong *)(param_1[4] + 8 + (longlong)(int)param_1[3] * 8) = uVar13;
          iVar6 = (int)param_1[3];
          *(int *)(param_1 + 3) = iVar6 + 2;
          if (iVar20 == 0) {
            return;
          }
          uVar7 = *(uint *)(lVar12 + (ulonglong)(iVar20 + 0x27) * 4);
          if ((uVar7 & 0xff) < 0xc0) {
            uVar13 = (ulonglong)(uVar7 & 0xff) << 8 |
                     CONCAT44(uVar7,uVar7 << 0x10) & 0xffff0000ff000000;
          }
          else {
            uVar13 = (ulonglong)(uVar7 & 0xffffff00);
            if ((uVar7 & 0xf) == 1) {
              uVar13 = uVar13 << 0x20 | 0x5000500;
            }
          }
          *(int *)(param_1 + 3) = iVar6 + 3;
          *(ulonglong *)(param_1[4] + 0x10 + (longlong)iVar6 * 8) = uVar13;
          return;
        }
        FUN_142619550(param_1,param_2,0xffffffff,
                      *(undefined4 *)(lVar12 + (longlong)(iVar6 / 0x24c) * 4),param_5,param_6);
        in_stack_ffffffffffffffa0 = param_6;
        FUN_142619550(param_1,param_2,0xffffffff,
                      *(undefined4 *)(lVar12 + 0x4c + (longlong)iVar11 * 4),param_5,param_6);
        if (iVar20 == 0) {
          return;
        }
        uVar13 = 0xffffffff;
        uVar14 = *(uint *)(lVar12 + (ulonglong)(iVar20 + 0x27) * 4);
        break;
      case 0xd:
        uVar5 = (**(code **)(*param_1 + 0x40))(param_1);
        uVar14 = 0xffffffff;
        if ((uVar5 & 0xfc00) == 0xdc00) {
          uVar7 = uVar7 * 0x400 + (uint)uVar5 + 0xfca02400;
          uVar13 = (ulonglong)uVar7;
          if ((param_4 & 0x300) != 0) {
            if ((param_4 & 0x300) != 0x100) {
              plVar2 = (longlong *)*param_2;
              if ((int)uVar7 < *(int *)((longlong)plVar2 + 0x2c)) {
                iVar6 = (uVar5 & 0x1f) +
                        (uint)*(ushort *)
                               (*plVar2 +
                               ((ulonglong)(uVar7 >> 5 & 0x3f) +
                               (ulonglong)
                               *(ushort *)(*plVar2 + 0x1040 + (longlong)((int)uVar7 >> 0xb) * 2)) *
                               2) * 4;
              }
              else {
                iVar6 = (int)plVar2[6];
              }
              uVar14 = *(uint *)(plVar2[2] + (longlong)iVar6 * 4);
              if (uVar14 != 0xc0) break;
            }
            param_2 = (longlong *)param_2[4];
            plVar2 = (longlong *)*param_2;
            if ((int)uVar7 < *(int *)((longlong)plVar2 + 0x2c)) {
              iVar6 = (uVar5 & 0x1f) +
                      (uint)*(ushort *)
                             (*plVar2 +
                             ((ulonglong)(uVar7 >> 5 & 0x3f) +
                             (ulonglong)
                             *(ushort *)(*plVar2 + 0x1040 + (longlong)((int)uVar7 >> 0xb) * 2)) * 2)
                      * 4;
            }
            else {
              iVar6 = (int)plVar2[6];
            }
            uVar14 = *(uint *)(plVar2[2] + (longlong)iVar6 * 4);
          }
        }
        break;
      case 0xe:
        uVar7 = FUN_142620c40(uVar13,*(undefined8 *)(param_2[2] + (ulonglong)(param_4 >> 0xd) * 8));
        uVar13 = (ulonglong)uVar7;
        uVar7 = *(uint *)(param_1 + 3);
        if ((0x27 < (int)uVar7) && ((int)*(uint *)(param_1 + 5) <= (int)uVar7)) {
          uVar14 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar16 = uVar14;
            uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
          } while ((int)uVar14 <= (int)uVar7);
          goto LAB_14261a058;
        }
        goto LAB_14261a0b4;
      case 0xf:
        if ((uVar7 & 0xfffff800) == 0xd800) {
          cVar4 = (**(code **)(*param_1 + 0x50))(param_1);
          param_4 = 0xfffd0505;
          if (cVar4 != '\0') goto LAB_14261959c;
        }
        uVar7 = FUN_142620d50(uVar13);
        uVar13 = (ulonglong)uVar7;
        uVar7 = *(uint *)(param_1 + 3);
        if ((0x27 < (int)uVar7) && ((int)*(uint *)(param_1 + 5) <= (int)uVar7)) {
          uVar14 = *(uint *)(param_1 + 5);
          if (0 < *param_6) {
            return;
          }
          do {
            uVar16 = uVar14;
            uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
          } while ((int)uVar14 <= (int)uVar7);
LAB_14261a058:
          if (((int)uVar16 < 1) ||
             (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0))
          goto LAB_14261a4d8;
          if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
            uVar7 = *(uint *)(param_1 + 5);
          }
          if ((int)uVar14 <= (int)uVar7) {
            uVar7 = uVar14;
          }
          memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
          if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
            FUN_1424da110(param_1[4]);
          }
          param_1[4] = (longlong)pvVar10;
          *(uint *)(param_1 + 5) = uVar14;
          *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
          uVar7 = *(uint *)(param_1 + 3);
        }
LAB_14261a0b4:
        uVar13 = uVar13 << 0x20 | 0x5000500;
LAB_14261a0bf:
        *(uint *)(param_1 + 3) = uVar7 + 1;
        *(ulonglong *)(param_1[4] + (longlong)(int)uVar7 * 8) = uVar13;
        return;
      }
      param_4 = uVar14;
    } while ((~param_4 & 0xc0) == 0);
  }
LAB_14261959c:
  uVar7 = *(uint *)(param_1 + 3);
  if ((0x27 < (int)uVar7) && ((int)*(uint *)(param_1 + 5) <= (int)uVar7)) {
    uVar14 = *(uint *)(param_1 + 5);
    if (0 < *param_6) {
      return;
    }
    do {
      uVar16 = uVar14;
      uVar14 = uVar16 << ((int)uVar16 < 1000) + 1;
    } while ((int)uVar14 <= (int)uVar7);
    if (((int)uVar16 < 1) ||
       (pvVar10 = (void *)FUN_1424da030((ulonglong)uVar14 << 3), pvVar10 == (void *)0x0)) {
LAB_14261a4d8:
      *param_6 = 7;
      return;
    }
    if ((int)*(uint *)(param_1 + 5) < (int)uVar7) {
      uVar7 = *(uint *)(param_1 + 5);
    }
    if ((int)uVar14 <= (int)uVar7) {
      uVar7 = uVar14;
    }
    memcpy(pvVar10,(void *)param_1[4],(longlong)(int)uVar7 << 3);
    if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
      FUN_1424da110(param_1[4]);
    }
    param_1[4] = (longlong)pvVar10;
    *(uint *)(param_1 + 5) = uVar14;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
    uVar7 = *(uint *)(param_1 + 3);
  }
  *(uint *)(param_1 + 3) = uVar7 + 1;
  *(ulonglong *)(param_1[4] + (longlong)(int)uVar7 * 8) =
       (ulonglong)((param_4 & 0xff) << 8) | CONCAT44(param_4,param_4 << 0x10) & 0xffff0000ff000000;
  return;
}



// FUNCTION 14261a4f0 FUN_14261a4f0 body=337 status=ok
// SIG undefined FUN_14261a4f0(void)

uint FUN_14261a4f0(longlong *param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 local_60;
  ushort *local_58;
  ushort *local_50;
  undefined4 local_48;
  ushort *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_2 + 0x18);
  uVar7 = (ulonglong)(param_3 >> 0xd);
  uVar6 = CONCAT22(*(undefined2 *)(lVar2 + uVar7 * 2),*(undefined2 *)(lVar2 + 2 + uVar7 * 2));
  local_58 = (ushort *)(lVar2 + uVar7 * 2 + 4);
  local_60 = 0;
  local_48 = 0xffffffff;
  iVar8 = 0;
  local_50 = local_58;
  local_40 = local_58;
  do {
    iVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_4);
    if (iVar3 < 0) break;
    uVar4 = FUN_1425e7410(&local_60,iVar3);
    if (1 < (int)uVar4) {
      puVar5 = local_50 + 1;
      uVar1 = *local_50;
      uVar6 = (uint)uVar1;
      if ((short)uVar1 < 0) {
        uVar6 = uVar6 & 0x7fff;
        if (0x3fff < uVar6) {
          if (uVar6 == 0x7fff) {
            uVar6 = (uint)local_50[1] << 0x10;
            puVar5 = local_50 + 2;
          }
          else {
            uVar6 = uVar6 * 0x10000 + 0xc0000000;
          }
          uVar6 = *puVar5 | uVar6;
        }
      }
      else if (uVar6 < 0x4040) {
        uVar6 = (uVar1 >> 6) - 1;
      }
      else if (uVar6 < 0x7fc0) {
        uVar6 = (uVar1 & 0x7fc0) * 0x400 + (uint)*puVar5 + 0xfeff0000;
      }
      else {
        uVar6 = CONCAT22(local_50[1],local_50[2]);
      }
    }
    iVar8 = iVar8 + 1;
  } while ((uVar4 & 1) != 0);
  (**(code **)(*param_1 + 0x58))(param_1,iVar8,param_4);
  FUN_1425e7160(&local_60);
  return uVar6;
}



// FUNCTION 14261a650 Unwind@14261a650 body=44 status=ok
// SIG undefined Unwind@14261a650(void)

void Unwind_14261a650(undefined8 param_1,longlong param_2)

{
  FUN_1425e7160(param_2 + 0x28);
  return;
}



// FUNCTION 14261a680 FUN_14261a680 body=1469 status=ok
// SIG undefined FUN_14261a680(void)

uint FUN_14261a680(longlong *param_1,longlong param_2,uint param_3,ushort *param_4,uint param_5,
                  uint param_6,undefined8 param_7)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = 0;
  local_60 = 0xffffffff;
  lVar2 = param_1[0x2f];
  if ((lVar2 != 0) && (0x1f < *(ushort *)(lVar2 + 8))) {
    *(ushort **)(lVar2 + 0x88) = param_4;
    *(ushort **)(lVar2 + 0x90) = param_4;
    *(undefined4 *)(lVar2 + 0x98) = 0xffffffff;
  }
  local_70 = param_4;
  uStack_68 = param_4;
  local_58 = param_2;
  local_4c = param_3;
  uVar4 = FUN_1425e71a0(&local_78,param_6);
  iVar8 = 1;
  uVar9 = 1;
  if ((int)uVar4 < 2) goto LAB_14261a750;
  while( true ) {
    puVar7 = uStack_68 + 1;
    uVar3 = *uStack_68;
    param_5 = (uint)uVar3;
    if ((short)uVar3 < 0) {
      param_5 = param_5 & 0x7fff;
      if (0x3fff < param_5) {
        if (param_5 == 0x7fff) {
          param_5 = (uint)uStack_68[1] << 0x10;
          puVar7 = uStack_68 + 2;
        }
        else {
          param_5 = param_5 * 0x10000 + 0xc0000000;
        }
        param_5 = *puVar7 | param_5;
      }
    }
    else if (param_5 < 0x4040) {
      param_5 = (uVar3 >> 6) - 1;
    }
    else if (param_5 < 0x7fc0) {
      param_5 = (param_5 & 0x7fc0) * 0x400 + (uint)*puVar7 + 0xfeff0000;
    }
    else {
      param_5 = CONCAT22(uStack_68[1],uStack_68[2]);
    }
    if ((uVar4 & 1) == 0) break;
    lVar2 = param_1[0x2f];
    if (lVar2 == 0) {
LAB_14261a940:
      if ((int)param_1[0x30] == 0) break;
      param_6 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
      lVar2 = param_1[0x2f];
      if (((lVar2 != 0) && (-1 < (int)param_6)) && (0x1f < *(ushort *)(lVar2 + 8))) {
        *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      }
      if (((int)param_6 < 0) || ((int)param_1[0x30] < 1)) goto LAB_14261a9a0;
      *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
    }
    else {
      if (*(short *)(lVar2 + 8) < 0) {
        iVar6 = *(int *)(lVar2 + 0xc);
      }
      else {
        iVar6 = (int)*(short *)(lVar2 + 8) >> 5;
      }
      if (iVar6 <= *(int *)(lVar2 + 0x80)) goto LAB_14261a940;
      param_6 = FUN_1424a8030(lVar2);
      *(uint *)(lVar2 + 0x80) = (*(int *)(lVar2 + 0x80) - (uint)(param_6 < 0x10000)) + 2;
LAB_14261a9a0:
      if ((int)param_6 < 0) break;
    }
    lVar2 = param_1[0x2f];
    uVar9 = 1;
    if ((lVar2 != 0) && (0x1f < *(ushort *)(lVar2 + 8))) {
      *(undefined4 *)(lVar2 + 0x88) = (undefined4)local_70;
      *(undefined4 *)(lVar2 + 0x8c) = local_70._4_4_;
      *(undefined4 *)(lVar2 + 0x90) = (undefined4)uStack_68;
      *(undefined4 *)(lVar2 + 0x94) = uStack_68._4_4_;
      *(undefined4 *)(lVar2 + 0x98) = local_60;
    }
    while( true ) {
      uVar4 = FUN_1425e7410(&local_78,param_6);
      iVar8 = iVar8 + 1;
      if (1 < (int)uVar4) break;
LAB_14261a750:
      if (uVar4 == 0) {
LAB_14261a9fb:
        if (((local_4c & 0x400) != 0) && (((local_4c & 0x100) == 0 || ((int)uVar9 < iVar8)))) {
          if (1 < (int)uVar9) {
            lVar2 = param_1[0x2f];
            uVar4 = uVar9;
            if ((lVar2 != 0) && (uVar3 = *(ushort *)(lVar2 + 8), 0x1f < uVar3)) {
              if ((short)uVar3 < 0) {
                iVar6 = *(int *)(lVar2 + 0xc);
              }
              else {
                iVar6 = (int)(short)uVar3 >> 5;
              }
              iVar5 = *(int *)(lVar2 + 0x80);
              uVar4 = iVar5 - iVar6;
              if (uVar4 == 0 || iVar5 < iVar6) {
                iVar5 = FUN_1424a81b0(lVar2,iVar5,-uVar9);
                uVar4 = 0;
              }
              else if (uVar4 < uVar9) {
                iVar5 = FUN_1424a81b0(lVar2,iVar6,uVar4 - uVar9);
              }
              else {
                iVar5 = iVar5 - uVar9;
                uVar4 = uVar9;
              }
              *(int *)(lVar2 + 0x80) = iVar5;
            }
            (**(code **)(*param_1 + 0x60))(param_1,uVar4,param_7);
            iVar6 = (int)param_1[0x30];
            if (-1 < iVar6) {
              iVar6 = iVar6 + uVar4;
              *(int *)(param_1 + 0x30) = iVar6;
            }
            lVar2 = param_1[0x2f];
            if (lVar2 == 0) {
LAB_14261ab0a:
              if (iVar6 == 0) {
                param_6 = 0xffffffff;
              }
              else {
                param_6 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
                lVar2 = param_1[0x2f];
                if (((lVar2 != 0) && (-1 < (int)param_6)) && (0x1f < *(ushort *)(lVar2 + 8))) {
                  *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
                }
                if ((-1 < (int)param_6) && (0 < (int)param_1[0x30])) {
                  *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
                }
              }
            }
            else {
              if (*(short *)(lVar2 + 8) < 0) {
                iVar5 = *(int *)(lVar2 + 0xc);
              }
              else {
                iVar5 = (int)*(short *)(lVar2 + 8) >> 5;
              }
              if (iVar5 <= *(int *)(lVar2 + 0x80)) goto LAB_14261ab0a;
              param_6 = FUN_1424a8030(lVar2);
              *(uint *)(lVar2 + 0x80) = (*(int *)(lVar2 + 0x80) - (uint)(param_6 < 0x10000)) + 2;
            }
            iVar8 = (iVar8 - uVar9) + 1;
            uVar9 = 1;
          }
          lVar2 = *(longlong *)(local_58 + 0x30);
          if ((int)(uint)*(ushort *)(lVar2 + 8) <= (int)param_6) {
            if ((int)param_6 < 0x10000) {
              bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (longlong)((int)param_6 >> 8));
              if ((bVar1 == 0) || ((1 << ((byte)param_6 >> 5) & (uint)bVar1) == 0))
              goto LAB_14261abf0;
            }
            uVar3 = FUN_1425d5c90(lVar2,param_6);
            if (0xff < uVar3) {
              param_5 = FUN_14261b210(param_1,local_58,&local_78,param_5,iVar8,param_6,param_7);
              goto LAB_14261ac7f;
            }
          }
        }
LAB_14261abf0:
        lVar2 = param_1[0x2f];
        if ((lVar2 != 0) && (uVar3 = *(ushort *)(lVar2 + 8), 0x1f < uVar3)) {
          if ((short)uVar3 < 0) {
            iVar8 = *(int *)(lVar2 + 0xc);
          }
          else {
            iVar8 = (int)(short)uVar3 >> 5;
          }
          iVar6 = *(int *)(lVar2 + 0x80);
          uVar4 = iVar6 - iVar8;
          if (uVar4 == 0 || iVar6 < iVar8) {
            iVar6 = FUN_1424a81b0(lVar2,iVar6,-uVar9);
            uVar9 = 0;
          }
          else if ((int)uVar4 < (int)uVar9) {
            iVar6 = FUN_1424a81b0(lVar2);
            uVar9 = uVar4;
          }
          else {
            iVar6 = iVar6 - uVar9;
          }
          *(int *)(lVar2 + 0x80) = iVar6;
        }
        (**(code **)(*param_1 + 0x60))(param_1,uVar9,param_7);
        if (-1 < (int)param_1[0x30]) {
          *(uint *)(param_1 + 0x30) = (int)param_1[0x30] + uVar9;
        }
        goto LAB_14261ac7f;
      }
      lVar2 = param_1[0x2f];
      if (lVar2 == 0) {
LAB_14261a830:
        if ((int)param_1[0x30] == 0) goto LAB_14261a9fb;
        uVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
        lVar2 = param_1[0x2f];
        if (((lVar2 != 0) && (-1 < (int)uVar4)) && (0x1f < *(ushort *)(lVar2 + 8))) {
          *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
        }
        if (((int)uVar4 < 0) || ((int)param_1[0x30] < 1)) goto LAB_14261a890;
        *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
      }
      else {
        if (*(short *)(lVar2 + 8) < 0) {
          iVar6 = *(int *)(lVar2 + 0xc);
        }
        else {
          iVar6 = (int)*(short *)(lVar2 + 8) >> 5;
        }
        if (iVar6 <= *(int *)(lVar2 + 0x80)) goto LAB_14261a830;
        uVar4 = FUN_1424a8030(lVar2);
        *(uint *)(lVar2 + 0x80) = (*(int *)(lVar2 + 0x80) - (uint)(uVar4 < 0x10000)) + 2;
LAB_14261a890:
        if ((int)uVar4 < 0) goto LAB_14261a9fb;
      }
      param_6 = uVar4;
      uVar9 = uVar9 + 1;
    }
  }
LAB_14261ac7f:
  FUN_1425e7160(&local_78);
  return param_5;
}



// FUNCTION 14261aca0 Unwind@14261aca0 body=52 status=ok
// SIG undefined Unwind@14261aca0(void)

void Unwind_14261aca0(undefined8 param_1,longlong param_2)

{
  FUN_1425e7160(param_2 + 0x40);
  return;
}



// FUNCTION 14261ace0 FUN_14261ace0 body=1231 status=ok
// SIG undefined FUN_14261ace0(void)

void FUN_14261ace0(longlong *param_1,uint param_2,char param_3,int *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  int local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_78 = (undefined1 *)((longlong)&local_6c + 1);
  local_70 = 0x28;
  local_6c = 0;
  local_40 = 0;
  if (param_3 == '\0') {
    do {
      FUN_1425034d0(&local_78,param_2 >> 8 & 0xffffff0f,param_4);
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1,param_4);
      if ((int)uVar6 < 0) goto LAB_14261b0fc;
      plVar10 = (longlong *)param_1[2];
      plVar3 = (longlong *)*plVar10;
      lVar8 = plVar3[2];
      if (uVar6 < 0xd800) {
        param_2 = *(uint *)(lVar8 + ((ulonglong)(uVar6 & 0x1f) +
                                    (ulonglong)*(ushort *)(*plVar3 + (ulonglong)(uVar6 >> 5) * 2) *
                                    4) * 4);
        if (param_2 == 0xc0) {
          lVar8 = (*(longlong **)plVar10[4])[2];
          uVar2 = *(ushort *)(**(longlong **)plVar10[4] + (ulonglong)(uVar6 >> 5) * 2);
LAB_14261af31:
          iVar12 = (uVar6 & 0x1f) + (uint)uVar2 * 4;
LAB_14261af35:
          param_2 = *(uint *)(lVar8 + (longlong)iVar12 * 4);
        }
      }
      else if (uVar6 < 0x10000) {
        uVar4 = (uVar6 >> 5) + 0x140;
        if (0xdbff < uVar6) {
          uVar4 = uVar6 >> 5;
        }
        param_2 = *(uint *)(lVar8 + ((ulonglong)(uVar6 & 0x1f) +
                                    (ulonglong)*(ushort *)(*plVar3 + (ulonglong)uVar4 * 2) * 4) * 4)
        ;
        if (param_2 == 0xc0) {
          plVar10 = *(longlong **)plVar10[4];
          lVar8 = plVar10[2];
LAB_14261af0f:
          uVar4 = (uVar6 >> 5) + 0x140;
          if (0xdbff < uVar6) {
            uVar4 = uVar6 >> 5;
          }
          uVar14 = (ulonglong)uVar4;
          lVar11 = *plVar10;
LAB_14261af29:
          uVar2 = *(ushort *)(lVar11 + uVar14 * 2);
          goto LAB_14261af31;
        }
      }
      else {
        iVar12 = 0x80;
        if (uVar6 < 0x110000) {
          if ((int)uVar6 < *(int *)((longlong)plVar3 + 0x2c)) {
            iVar12 = (uVar6 & 0x1f) +
                     (uint)*(ushort *)
                            (*plVar3 +
                            ((ulonglong)(uVar6 >> 5 & 0x3f) +
                            (ulonglong)*(ushort *)(*plVar3 + 0x1040 + (ulonglong)(uVar6 >> 0xb) * 2)
                            ) * 2) * 4;
          }
          else {
            iVar12 = (int)plVar3[6];
          }
        }
        param_2 = *(uint *)(lVar8 + (longlong)iVar12 * 4);
        if (param_2 == 0xc0) {
          plVar10 = *(longlong **)plVar10[4];
          lVar8 = plVar10[2];
          if (uVar6 < 0x10000) goto LAB_14261af0f;
          iVar12 = 0x80;
          if (uVar6 < 0x110000) {
            if ((int)uVar6 < *(int *)((longlong)plVar10 + 0x2c)) {
              lVar11 = *plVar10;
              uVar14 = (ulonglong)(uVar6 >> 5 & 0x3f) +
                       (ulonglong)*(ushort *)(lVar11 + 0x1040 + (ulonglong)(uVar6 >> 0xb) * 2);
              goto LAB_14261af29;
            }
            iVar12 = (int)plVar10[6];
          }
          goto LAB_14261af35;
        }
      }
    } while ((param_2 & 0xcf) == 0xca);
    (**(code **)(*param_1 + 0x58))(param_1,1,param_4);
LAB_14261b0fc:
    puVar9 = local_78 + (longlong)local_40 + -1;
    puVar5 = local_78;
    if (local_78 < puVar9) {
      do {
        puVar7 = puVar5 + 1;
        uVar1 = *puVar5;
        *puVar5 = *puVar9;
        *puVar9 = uVar1;
        puVar9 = puVar9 + -1;
        puVar5 = puVar7;
      } while (puVar7 < puVar9);
    }
LAB_14261b13d:
    if (*param_4 < 1) {
      uVar14 = 0;
      do {
        uVar6 = local_40 - 1;
        if ((int)uVar14 < (int)uVar6) {
          uVar14 = (ulonglong)(int)uVar14;
          do {
            if (local_78[uVar14] != '\0') goto LAB_14261b182;
            uVar14 = uVar14 + 1;
          } while ((longlong)uVar14 < (longlong)(int)uVar6);
          uVar14 = (ulonglong)uVar6;
        }
LAB_14261b182:
        iVar13 = (int)uVar14;
        iVar12 = local_40 - iVar13;
        if (0xfd < iVar12) {
          iVar12 = 0xfe;
        }
        FUN_14261bad0(param_1,local_78 + iVar13,iVar12,param_4);
      } while ((*param_4 < 1) &&
              (uVar14 = (ulonglong)(uint)(iVar13 + iVar12), iVar13 + iVar12 < local_40));
    }
    if ((char)local_6c != '\0') {
      FUN_1424da110(local_78);
    }
    return;
  }
  do {
    FUN_1425034d0(&local_78,(ulonglong)(uint3)(param_2 >> 8) & 0xffffffffffffff0f,param_4);
    if (((int)param_1[0x30] == 0) ||
       (uVar6 = (**(code **)(*param_1 + 0x28))(param_1,param_4), (int)uVar6 < 0))
    goto LAB_14261b13d;
    plVar10 = (longlong *)param_1[2];
    plVar3 = (longlong *)*plVar10;
    lVar8 = plVar3[2];
    if (uVar6 < 0xd800) {
      param_2 = *(uint *)(lVar8 + ((ulonglong)(uVar6 & 0x1f) +
                                  (ulonglong)*(ushort *)(*plVar3 + (ulonglong)(uVar6 >> 5) * 2) * 4)
                                  * 4);
      if (param_2 == 0xc0) {
        lVar8 = (*(longlong **)plVar10[4])[2];
        uVar2 = *(ushort *)(**(longlong **)plVar10[4] + (ulonglong)(uVar6 >> 5) * 2);
LAB_14261ae9d:
        iVar12 = (uVar6 & 0x1f) + (uint)uVar2 * 4;
LAB_14261aea1:
        param_2 = *(uint *)(lVar8 + (longlong)iVar12 * 4);
      }
    }
    else if (uVar6 < 0x10000) {
      uVar4 = (uVar6 >> 5) + 0x140;
      if (0xdbff < uVar6) {
        uVar4 = uVar6 >> 5;
      }
      param_2 = *(uint *)(lVar8 + ((ulonglong)(uVar6 & 0x1f) +
                                  (ulonglong)*(ushort *)(*plVar3 + (ulonglong)uVar4 * 2) * 4) * 4);
      if (param_2 == 0xc0) {
        plVar10 = *(longlong **)plVar10[4];
        lVar8 = plVar10[2];
LAB_14261ae7b:
        uVar4 = (uVar6 >> 5) + 0x140;
        if (0xdbff < uVar6) {
          uVar4 = uVar6 >> 5;
        }
        uVar14 = (ulonglong)uVar4;
        lVar11 = *plVar10;
LAB_14261ae95:
        uVar2 = *(ushort *)(lVar11 + uVar14 * 2);
        goto LAB_14261ae9d;
      }
    }
    else {
      iVar12 = 0x80;
      if (uVar6 < 0x110000) {
        if ((int)uVar6 < *(int *)((longlong)plVar3 + 0x2c)) {
          iVar12 = (uVar6 & 0x1f) +
                   (uint)*(ushort *)
                          (*plVar3 +
                          ((ulonglong)(uVar6 >> 5 & 0x3f) +
                          (ulonglong)*(ushort *)(*plVar3 + 0x1040 + (ulonglong)(uVar6 >> 0xb) * 2))
                          * 2) * 4;
        }
        else {
          iVar12 = (int)plVar3[6];
        }
      }
      param_2 = *(uint *)(lVar8 + (longlong)iVar12 * 4);
      if (param_2 == 0xc0) {
        plVar10 = *(longlong **)plVar10[4];
        lVar8 = plVar10[2];
        if (uVar6 < 0x10000) goto LAB_14261ae7b;
        iVar12 = 0x80;
        if (uVar6 < 0x110000) {
          if ((int)uVar6 < *(int *)((longlong)plVar10 + 0x2c)) {
            lVar11 = *plVar10;
            uVar14 = (ulonglong)(uVar6 >> 5 & 0x3f) +
                     (ulonglong)*(ushort *)(lVar11 + 0x1040 + (ulonglong)(uVar6 >> 0xb) * 2);
            goto LAB_14261ae95;
          }
          iVar12 = (int)plVar10[6];
        }
        goto LAB_14261aea1;
      }
    }
    if ((param_2 & 0xcf) != 0xca) {
      (**(code **)(*param_1 + 0x60))(param_1,1,param_4);
      goto LAB_14261b13d;
    }
    if (0 < (int)param_1[0x30]) {
      *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
    }
  } while( true );
}



// FUNCTION 14261b1d0 Unwind@14261b1d0 body=50 status=ok
// SIG undefined Unwind@14261b1d0(void)

void Unwind_14261b1d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 14261b210 FUN_14261b210 body=2212 status=ok
// SIG undefined FUN_14261b210(void)

uint FUN_14261b210(longlong *param_1,undefined8 *param_2,longlong param_3,uint param_4,int param_5,
                  int param_6,int *param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong *plVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ushort *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 in_stack_ffffffffffffffb0;
  
  if (0 < *param_7) {
    return 0;
  }
  lVar13 = param_2[6];
  if (param_6 < (int)(uint)*(ushort *)(lVar13 + 8)) {
    uVar10 = 0;
  }
  else {
    if (param_6 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(lVar13 + 0x38) + (longlong)(param_6 >> 8));
      uVar10 = 0;
      if ((bVar1 == 0) || (uVar10 = 0, (1 << ((byte)param_6 >> 5) & (uint)bVar1) == 0))
      goto LAB_14261b296;
    }
    uVar10 = FUN_1425d5c90(lVar13);
  }
LAB_14261b296:
  lVar13 = param_1[0x2f];
  if (lVar13 == 0) {
LAB_14261b2b8:
    if ((int)param_1[0x30] != 0) {
      uVar6 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
      uVar17 = (ulonglong)uVar6;
      lVar13 = param_1[0x2f];
      if (((lVar13 != 0) && (-1 < (int)uVar6)) && (0x1f < *(ushort *)(lVar13 + 8))) {
        *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
      }
      if (((int)uVar6 < 0) || ((int)param_1[0x30] < 1)) goto LAB_14261b334;
      *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
      goto LAB_14261b33d;
    }
LAB_14261b3cb:
    iVar18 = 1;
    if ((lVar13 == 0) || (uVar2 = *(ushort *)(lVar13 + 8), uVar2 < 0x20)) goto LAB_14261b4ae;
    if ((short)uVar2 < 0) {
      iVar14 = *(int *)(lVar13 + 0xc);
    }
    else {
      iVar14 = (int)(short)uVar2 >> 5;
    }
    iVar7 = *(int *)(lVar13 + 0x80);
    if (iVar14 < iVar7) {
      iVar7 = iVar7 + -1;
    }
    else {
      uVar16 = 0xffffffff;
LAB_14261b49c:
      iVar7 = FUN_1424a81b0(lVar13,iVar7,uVar16);
      iVar18 = 0;
    }
  }
  else {
    if (*(short *)(lVar13 + 8) < 0) {
      iVar18 = *(int *)(lVar13 + 0xc);
    }
    else {
      iVar18 = (int)*(short *)(lVar13 + 8) >> 5;
    }
    if (iVar18 <= *(int *)(lVar13 + 0x80)) goto LAB_14261b2b8;
    uVar6 = FUN_1424a8030(lVar13);
    uVar17 = (ulonglong)uVar6;
    *(uint *)(lVar13 + 0x80) = (*(int *)(lVar13 + 0x80) - (uint)(uVar6 < 0x10000)) + 2;
LAB_14261b334:
    if ((int)uVar17 < 0) {
      lVar13 = param_1[0x2f];
      goto LAB_14261b3cb;
    }
LAB_14261b33d:
    lVar13 = param_2[6];
    if ((uint)*(ushort *)(lVar13 + 8) <= (uint)uVar17) {
      if ((uint)uVar17 < 0x10000) {
        bVar1 = *(byte *)(*(longlong *)(lVar13 + 0x38) + (uVar17 >> 8));
        if ((bVar1 == 0) || ((1 << ((byte)(uVar17 >> 5) & 7) & (uint)bVar1) == 0))
        goto LAB_14261b390;
      }
      uVar6 = FUN_1425d5c90(lVar13,uVar17);
      if (0xff < (uVar6 & 0xffff)) {
        lVar13 = param_1[0x2f];
        if (lVar13 == 0) {
          puVar11 = (undefined8 *)thunk_FUN_1424da030(0xa0);
          if (puVar11 == (undefined8 *)0x0) {
            param_1[0x2f] = 0;
            *param_7 = 7;
            return 0;
          }
          *puVar11 = &PTR_FUN_149e18960;
          *(undefined2 *)(puVar11 + 1) = 2;
          puVar11[8] = &PTR_FUN_149e18960;
          *(undefined2 *)(puVar11 + 9) = 2;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
          param_1[0x2f] = (longlong)puVar11;
        }
        else if (0x1f < *(ushort *)(lVar13 + 8)) {
          if ((*(longlong *)(param_3 + 8) != 0) &&
             (*(longlong *)(param_3 + 8) == *(longlong *)(lVar13 + 0x88))) {
            *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar13 + 0x90);
            *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(lVar13 + 0x98);
          }
          goto LAB_14261b5b6;
        }
        uVar16 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_3 + 0x10) = uVar16;
        *(undefined4 *)(param_3 + 0x18) = 0xffffffff;
        if (1 < param_5) {
          (**(code **)(*param_1 + 0x60))(param_1,param_5 + 1,param_7);
          uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
          FUN_1425e71a0(param_3,uVar8);
          if (param_5 != 2) {
            param_5 = param_5 + -2;
            do {
              uVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
              FUN_1425e7410(param_3,uVar8);
              param_5 = param_5 + -1;
            } while (param_5 != 0);
          }
          (**(code **)(*param_1 + 0x58))(param_1,2,param_7);
          uVar16 = *(undefined8 *)(param_3 + 8);
        }
        lVar13 = param_1[0x2f];
        *(undefined8 *)(lVar13 + 0x88) = uVar16;
        *(undefined8 *)(lVar13 + 0x90) = *(undefined8 *)(param_3 + 0x10);
        *(undefined4 *)(lVar13 + 0x98) = *(undefined4 *)(param_3 + 0x18);
LAB_14261b5b6:
        lVar13 = param_1[0x2f];
        *(undefined4 *)(lVar13 + 0x84) = 0;
        FUN_1424a8e40(lVar13 + 0x40);
        if (*(short *)(lVar13 + 0x48) < 0) {
          iVar18 = *(int *)(lVar13 + 0x4c);
        }
        else {
          iVar18 = (int)*(short *)(lVar13 + 0x48) >> 5;
        }
        FUN_1424a90a0(lVar13 + 0x40,0,iVar18,param_6);
        iVar18 = 2;
LAB_14261b62b:
        if (((ushort)uVar10 & 0xff) < ((ushort)(uVar6 >> 8) & 0xff)) {
          uVar9 = FUN_1425e7410(param_3,uVar17);
          uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
          if ((int)uVar9 < 2) goto LAB_14261b680;
          puVar3 = *(ushort **)(param_3 + 0x10);
          puVar12 = puVar3 + 1;
          uVar2 = *puVar3;
          if ((short)uVar2 < 0) {
            param_4 = uVar2 & 0x7fff;
            if (0x3fff < param_4) {
              if (param_4 == 0x7fff) {
                param_4 = (uint)puVar3[1] << 0x10;
                puVar12 = puVar3 + 2;
              }
              else {
                param_4 = param_4 * 0x10000 + 0xc0000000;
              }
              param_4 = *puVar12 | param_4;
            }
          }
          else if (uVar2 < 0x4040) {
            param_4 = (uVar2 >> 6) - 1;
          }
          else if (uVar2 < 0x7fc0) {
            param_4 = (uVar2 & 0x7fc0) * 0x400 + (uint)*puVar12 + 0xfeff0000;
          }
          else {
            param_4 = CONCAT22(puVar3[1],puVar3[2]);
          }
          lVar13 = param_1[0x2f];
          if (*(short *)(lVar13 + 0x48) < 0) {
            iVar18 = *(int *)(lVar13 + 0x4c);
          }
          else {
            iVar18 = (int)*(short *)(lVar13 + 0x48) >> 5;
          }
          *(int *)(lVar13 + 0x84) = iVar18;
          if ((uVar9 & 1) == 0) {
            iVar18 = 0;
LAB_14261b88d:
            lVar13 = param_1[0x2f];
            if ((lVar13 != 0) && (uVar2 = *(ushort *)(lVar13 + 8), 0x1f < uVar2)) {
              if ((short)uVar2 < 0) {
                iVar14 = *(int *)(lVar13 + 0xc);
              }
              else {
                iVar14 = (int)(short)uVar2 >> 5;
              }
              iVar7 = *(int *)(lVar13 + 0x80);
              iVar15 = iVar7 - iVar14;
              if (iVar15 == 0 || iVar7 < iVar14) {
                iVar7 = FUN_1424a81b0(lVar13,iVar7,-iVar18);
                iVar18 = 0;
              }
              else if (iVar15 < iVar18) {
                iVar7 = FUN_1424a81b0(lVar13);
                iVar18 = iVar15;
              }
              else {
                iVar7 = iVar7 - iVar18;
              }
              *(int *)(lVar13 + 0x80) = iVar7;
            }
            (**(code **)(*param_1 + 0x60))(param_1,iVar18,param_7);
            if (-1 < (int)param_1[0x30]) {
              *(int *)(param_1 + 0x30) = (int)param_1[0x30] + iVar18;
            }
            lVar13 = param_1[0x2f];
            uVar2 = *(ushort *)(lVar13 + 8);
            FUN_1424a9610(lVar13,0,*(undefined4 *)(lVar13 + 0x80),lVar13 + 0x40,0,
                          CONCAT44(uVar8,*(undefined4 *)(lVar13 + 0x84)));
            *(undefined4 *)(lVar13 + 0x80) = 0;
            if (0x1f < uVar2) {
              return param_4;
            }
            if (*(ushort *)(param_1[0x2f] + 8) < 0x20) {
              return param_4;
            }
            uVar10 = 0xffffffff;
            do {
              do {
                FUN_142619550(param_1,param_2,uVar10,param_4,1,param_7);
                lVar13 = param_1[0x2f];
                uVar2 = *(ushort *)(lVar13 + 8);
                if ((short)uVar2 < 0) {
                  iVar18 = *(int *)(lVar13 + 0xc);
                }
                else {
                  iVar18 = (int)(short)uVar2 >> 5;
                }
                if (iVar18 <= *(int *)(lVar13 + 0x80)) {
                  uVar5 = 2;
                  if (((int)(short)uVar2 & 1U) == 0) {
                    uVar5 = uVar2 & 0x1f;
                  }
                  *(ushort *)(lVar13 + 8) = uVar5;
                  *(undefined4 *)(lVar13 + 0x80) = 0;
                  return 1;
                }
                uVar10 = FUN_1424a8030(lVar13);
                *(uint *)(lVar13 + 0x80) = (*(int *)(lVar13 + 0x80) - (uint)(uVar10 < 0x10000)) + 2;
                param_4 = (**(code **)(*param_1 + 0x68))(param_1,uVar10);
                param_2 = (undefined8 *)param_1[2];
              } while (param_4 != 0xc0);
              param_2 = (undefined8 *)param_2[4];
              plVar4 = (longlong *)*param_2;
              if (uVar10 < 0xd800) {
                uVar2 = *(ushort *)(*plVar4 + (ulonglong)(uVar10 >> 5) * 2);
LAB_14261b997:
                iVar18 = (uVar10 & 0x1f) + (uint)uVar2 * 4;
              }
              else {
                if (uVar10 < 0x10000) {
                  lVar13 = *plVar4;
                  uVar17 = (ulonglong)((uVar10 >> 5) + 0x140);
                  if (0xdbff < uVar10) {
                    uVar17 = (ulonglong)(uVar10 >> 5);
                  }
LAB_14261ba59:
                  uVar2 = *(ushort *)(lVar13 + uVar17 * 2);
                  goto LAB_14261b997;
                }
                iVar18 = 0x80;
                if (uVar10 < 0x110000) {
                  if ((int)uVar10 < *(int *)((longlong)plVar4 + 0x2c)) {
                    lVar13 = *plVar4;
                    uVar17 = (ulonglong)(uVar10 >> 5 & 0x3f) +
                             (ulonglong)
                             *(ushort *)(lVar13 + 0x1040 + (ulonglong)(uVar10 >> 0xb) * 2);
                    goto LAB_14261ba59;
                  }
                  iVar18 = (int)plVar4[6];
                }
              }
              param_4 = *(uint *)(plVar4[2] + (longlong)iVar18 * 4);
            } while( true );
          }
          lVar13 = param_1[0x2f];
          *(undefined8 *)(lVar13 + 0x88) = *(undefined8 *)(param_3 + 8);
          *(undefined8 *)(lVar13 + 0x90) = *(undefined8 *)(param_3 + 0x10);
          *(undefined4 *)(lVar13 + 0x98) = *(undefined4 *)(param_3 + 0x18);
          iVar18 = 0;
        }
        else {
LAB_14261b680:
          FUN_1424a7d60(param_1[0x2f] + 0x40,uVar17);
          uVar10 = uVar6;
          if ((*(longlong *)(param_3 + 8) != 0) &&
             (lVar13 = param_1[0x2f], *(longlong *)(param_3 + 8) == *(longlong *)(lVar13 + 0x88))) {
            *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar13 + 0x90);
            *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(lVar13 + 0x98);
          }
        }
        uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
        lVar13 = param_1[0x2f];
        if (lVar13 == 0) {
LAB_14261b7ca:
          if ((int)param_1[0x30] == 0) goto LAB_14261b88d;
          uVar6 = (**(code **)(*param_1 + 0x28))(param_1,param_7);
          uVar17 = (ulonglong)uVar6;
          lVar13 = param_1[0x2f];
          if (((lVar13 != 0) && (-1 < (int)uVar6)) && (0x1f < *(ushort *)(lVar13 + 8))) {
            *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
          }
          if (((int)uVar6 < 0) || ((int)param_1[0x30] < 1)) goto LAB_14261b822;
          *(int *)(param_1 + 0x30) = (int)param_1[0x30] + -1;
        }
        else {
          if (*(short *)(lVar13 + 8) < 0) {
            iVar14 = *(int *)(lVar13 + 0xc);
          }
          else {
            iVar14 = (int)*(short *)(lVar13 + 8) >> 5;
          }
          if (iVar14 <= *(int *)(lVar13 + 0x80)) goto LAB_14261b7ca;
          uVar6 = FUN_1424a8030(lVar13);
          uVar17 = (ulonglong)uVar6;
          *(uint *)(lVar13 + 0x80) = (*(int *)(lVar13 + 0x80) - (uint)(uVar6 < 0x10000)) + 2;
LAB_14261b822:
          uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
          if ((int)uVar17 < 0) goto LAB_14261b88d;
        }
        uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
        iVar18 = iVar18 + 1;
        lVar13 = param_2[6];
        if ((uint)uVar17 < (uint)*(ushort *)(lVar13 + 8)) goto LAB_14261b88d;
        if ((uint)uVar17 < 0x10000) {
          bVar1 = *(byte *)(*(longlong *)(lVar13 + 0x38) + (uVar17 >> 8));
          if ((bVar1 == 0) || ((1 << ((byte)(uVar17 >> 5) & 7) & (uint)bVar1) == 0))
          goto LAB_14261b88d;
        }
        uVar6 = FUN_1425d5c90(lVar13,uVar17);
        uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
        if ((uVar6 & 0xffff) < 0x100) goto LAB_14261b88d;
        goto LAB_14261b62b;
      }
    }
LAB_14261b390:
    lVar13 = param_1[0x2f];
    iVar18 = 2;
    if ((lVar13 == 0) || (uVar2 = *(ushort *)(lVar13 + 8), uVar2 < 0x20)) goto LAB_14261b4ae;
    if ((short)uVar2 < 0) {
      iVar14 = *(int *)(lVar13 + 0xc);
    }
    else {
      iVar14 = (int)(short)uVar2 >> 5;
    }
    iVar7 = *(int *)(lVar13 + 0x80);
    if (iVar7 <= iVar14) {
      uVar16 = 0xfffffffe;
      goto LAB_14261b49c;
    }
    if (iVar7 - iVar14 == 1) {
      iVar7 = FUN_1424a81b0(lVar13,iVar14,0xffffffff);
      iVar18 = 1;
    }
    else {
      iVar7 = iVar7 + -2;
    }
  }
  *(int *)(lVar13 + 0x80) = iVar7;
LAB_14261b4ae:
  (**(code **)(*param_1 + 0x60))(param_1,iVar18,param_7);
  if (-1 < (int)param_1[0x30]) {
    *(int *)(param_1 + 0x30) = (int)param_1[0x30] + iVar18;
  }
  return param_4;
}



// FUNCTION 14261bad0 FUN_14261bad0 body=1615 status=ok
// SIG undefined FUN_14261bad0(void)

void FUN_14261bad0(longlong param_1,char *param_2,uint param_3,int *param_4)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  uVar11 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if ((int)param_3 < 8) {
    uVar13 = (uint)*param_2;
    if (((((1 < (int)param_3) && (uVar13 = (int)param_2[1] + uVar13 * 10, param_3 != 2)) &&
         (uVar13 = (int)param_2[2] + uVar13 * 10, param_3 != 3)) &&
        ((uVar13 = (int)param_2[3] + uVar13 * 10, param_3 != 4 &&
         (uVar13 = (int)param_2[4] + uVar13 * 10, param_3 != 5)))) &&
       (uVar13 = (int)param_2[5] + uVar13 * 10, param_3 != 6)) {
      uVar13 = (int)param_2[6] + uVar13 * 10;
    }
    if ((int)uVar13 < 0x4a) {
      uVar10 = *(uint *)(param_1 + 0x18);
      if ((0x27 < (int)uVar10) && ((int)*(uint *)(param_1 + 0x28) <= (int)uVar10)) {
        uVar7 = *(uint *)(param_1 + 0x28);
        if (0 < *param_4) {
          return;
        }
        do {
          uVar14 = uVar7;
          uVar7 = uVar14 << ((int)uVar14 < 1000) + 1;
        } while ((int)uVar7 <= (int)uVar10);
        if (((int)uVar14 < 1) ||
           (pvVar4 = (void *)FUN_1424da030((ulonglong)uVar7 << 3), pvVar4 == (void *)0x0))
        goto LAB_14261c127;
        if ((int)*(uint *)(param_1 + 0x28) < (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x28);
        }
        if ((int)uVar7 <= (int)uVar10) {
          uVar10 = uVar7;
        }
        memcpy(pvVar4,*(void **)(param_1 + 0x20),(longlong)(int)uVar10 << 3);
        if (*(char *)(param_1 + 0x2c) != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
        }
        *(void **)(param_1 + 0x20) = pvVar4;
        *(uint *)(param_1 + 0x28) = uVar7;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        uVar10 = *(uint *)(param_1 + 0x18);
      }
      uVar15 = (ulonglong)(uVar11 | uVar13 * 0x10000 + 0x20000);
    }
    else if (uVar13 < 0x27fa) {
      uVar10 = *(uint *)(param_1 + 0x18);
      if ((0x27 < (int)uVar10) && ((int)*(uint *)(param_1 + 0x28) <= (int)uVar10)) {
        uVar7 = *(uint *)(param_1 + 0x28);
        if (0 < *param_4) {
          return;
        }
        do {
          uVar14 = uVar7;
          uVar7 = uVar14 << ((int)uVar14 < 1000) + 1;
        } while ((int)uVar7 <= (int)uVar10);
        if (((int)uVar14 < 1) ||
           (pvVar4 = (void *)FUN_1424da030((ulonglong)uVar7 << 3), pvVar4 == (void *)0x0))
        goto LAB_14261c127;
        if ((int)*(uint *)(param_1 + 0x28) < (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x28);
        }
        if ((int)uVar7 <= (int)uVar10) {
          uVar10 = uVar7;
        }
        memcpy(pvVar4,*(void **)(param_1 + 0x20),(longlong)(int)uVar10 << 3);
        if (*(char *)(param_1 + 0x2c) != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
        }
        *(void **)(param_1 + 0x20) = pvVar4;
        *(uint *)(param_1 + 0x28) = uVar7;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        uVar10 = *(uint *)(param_1 + 0x18);
      }
      uVar7 = (uVar13 - 0x4a & 0xffff) / 0xfe;
      uVar15 = (ulonglong)
               (uVar11 | uVar7 * 0x10000 + 0x4c0000 |
               ((uVar7 * -0xfe + uVar13) - 0x4a & 0xffff) * 0x100 + 0x200);
    }
    else {
      if (0xfe839 < uVar13) goto LAB_14261bcb1;
      uVar10 = *(uint *)(param_1 + 0x18);
      if ((0x27 < (int)uVar10) && ((int)*(uint *)(param_1 + 0x28) <= (int)uVar10)) {
        uVar7 = *(uint *)(param_1 + 0x28);
        if (0 < *param_4) {
          return;
        }
        do {
          uVar14 = uVar7;
          uVar7 = uVar14 << ((int)uVar14 < 1000) + 1;
        } while ((int)uVar7 <= (int)uVar10);
        if (((int)uVar14 < 1) ||
           (pvVar4 = (void *)FUN_1424da030((ulonglong)uVar7 << 3), pvVar4 == (void *)0x0))
        goto LAB_14261c127;
        if ((int)*(uint *)(param_1 + 0x28) < (int)uVar10) {
          uVar10 = *(uint *)(param_1 + 0x28);
        }
        if ((int)uVar7 <= (int)uVar10) {
          uVar10 = uVar7;
        }
        memcpy(pvVar4,*(void **)(param_1 + 0x20),(longlong)(int)uVar10 << 3);
        if (*(char *)(param_1 + 0x2c) != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
        }
        *(void **)(param_1 + 0x20) = pvVar4;
        *(uint *)(param_1 + 0x28) = uVar7;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        uVar10 = *(uint *)(param_1 + 0x18);
      }
      uVar7 = uVar13 - 0x27fa >> 1;
      uVar15 = (ulonglong)
               (uVar11 | (((uint)((ulonglong)(uVar13 - 0x27fa >> 2) * 0x41030815 >> 0x20) &
                          0xffff000) << 4 |
                         (uVar13 + (uVar7 / 0x7f) * 2 + (uVar7 / 0x7f) * -0x100) - 0x27fa) +
                         0x740002 |
               (((uint)(((ulonglong)uVar7 / 0x7f & 0xffff) >> 1) / 0x7f) * -0xfe + uVar7 / 0x7f &
               0xffff) * 0x100 + 0x200);
    }
    *(uint *)(param_1 + 0x18) = uVar10 + 1;
    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar10 * 8) =
         uVar15 << 0x20 | 0x5000500;
  }
  else {
LAB_14261bcb1:
    uVar13 = ((param_3 - ((int)(param_3 + 1) >> 0x1f)) + 1 & 0xfffffffe) * 0x8000 + 0x800000 |
             uVar11;
    pcVar3 = param_2 + (longlong)(int)param_3 + -1;
    do {
      uVar10 = param_3;
      if (*pcVar3 != '\0') break;
      pcVar1 = pcVar3 + -1;
      pcVar3 = pcVar3 + -2;
      param_3 = uVar10 - 2;
    } while (*pcVar1 == '\0');
    iVar12 = (int)*param_2;
    uVar7 = 1;
    if ((uVar10 & 1) == 0) {
      iVar12 = (int)param_2[1] + iVar12 * 10;
      uVar7 = 2;
    }
    iVar12 = iVar12 * 2;
    iVar6 = 8;
    if ((int)uVar7 < (int)uVar10) {
      uVar15 = (ulonglong)uVar7;
      do {
        if (iVar6 == 0) {
          uVar14 = *(uint *)(param_1 + 0x18);
          uVar7 = uVar11;
          if (((int)uVar14 < 0x28) || ((int)uVar14 < (int)*(uint *)(param_1 + 0x28))) {
LAB_14261bd8b:
            *(uint *)(param_1 + 0x18) = uVar14 + 1;
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar14 * 8) =
                 (ulonglong)(iVar12 + 0xbU | uVar13) << 0x20 | 0x5000500;
            iVar6 = 0x10;
          }
          else {
            iVar6 = 0x10;
            uVar9 = *(uint *)(param_1 + 0x28);
            if (*param_4 < 1) {
              do {
                uVar8 = uVar9;
                uVar9 = uVar8 << ((int)uVar8 < 1000) + 1;
              } while ((int)uVar9 <= (int)uVar14);
              if ((0 < (int)uVar8) &&
                 (pvVar4 = (void *)FUN_1424da030((ulonglong)uVar9 << 3), pvVar4 != (void *)0x0)) {
                if ((int)*(uint *)(param_1 + 0x28) < (int)uVar14) {
                  uVar14 = *(uint *)(param_1 + 0x28);
                }
                if ((int)uVar9 <= (int)uVar14) {
                  uVar14 = uVar9;
                }
                memcpy(pvVar4,*(void **)(param_1 + 0x20),(longlong)(int)uVar14 << 3);
                if (*(char *)(param_1 + 0x2c) != '\0') {
                  FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
                }
                *(void **)(param_1 + 0x20) = pvVar4;
                *(uint *)(param_1 + 0x28) = uVar9;
                *(undefined1 *)(param_1 + 0x2c) = 1;
                uVar14 = *(uint *)(param_1 + 0x18);
                goto LAB_14261bd8b;
              }
              *param_4 = 7;
            }
          }
        }
        else {
          bVar5 = (byte)iVar6;
          iVar6 = iVar6 + -8;
          uVar7 = iVar12 + 0xbU << (bVar5 & 0x1f) | uVar13;
        }
        uVar13 = uVar7;
        pcVar3 = param_2 + uVar15;
        lVar2 = uVar15 + 1;
        uVar15 = uVar15 + 2;
        iVar12 = ((int)param_2[lVar2] + *pcVar3 * 10) * 2;
      } while ((int)uVar15 < (int)uVar10);
    }
    uVar11 = *(uint *)(param_1 + 0x18);
    if ((0x27 < (int)uVar11) && ((int)*(uint *)(param_1 + 0x28) <= (int)uVar11)) {
      uVar10 = *(uint *)(param_1 + 0x28);
      if (0 < *param_4) {
        return;
      }
      do {
        uVar7 = uVar10;
        uVar10 = uVar7 << ((int)uVar7 < 1000) + 1;
      } while ((int)uVar10 <= (int)uVar11);
      if (((int)uVar7 < 1) ||
         (pvVar4 = (void *)FUN_1424da030((ulonglong)uVar10 << 3), pvVar4 == (void *)0x0)) {
LAB_14261c127:
        *param_4 = 7;
        return;
      }
      if ((int)*(uint *)(param_1 + 0x28) < (int)uVar11) {
        uVar11 = *(uint *)(param_1 + 0x28);
      }
      if ((int)uVar10 <= (int)uVar11) {
        uVar11 = uVar10;
      }
      memcpy(pvVar4,*(void **)(param_1 + 0x20),(longlong)(int)uVar11 << 3);
      if (*(char *)(param_1 + 0x2c) != '\0') {
        FUN_1424da110(*(undefined8 *)(param_1 + 0x20));
      }
      *(void **)(param_1 + 0x20) = pvVar4;
      *(uint *)(param_1 + 0x28) = uVar10;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      uVar11 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar11 + 1;
    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar11 * 8) =
         (ulonglong)(iVar12 + 10 << ((byte)iVar6 & 0x1f) | uVar13) << 0x20 | 0x5000500;
  }
  return;
}



// FUNCTION 14261c140 FUN_14261c140 body=1843 status=ok
// SIG undefined FUN_14261c140(void)

uint FUN_14261c140(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  int local_64;
  uint local_60;
  
  if (0 < *param_4) {
    return 0;
  }
  uVar5 = *(uint *)(param_3 + 0x18);
  uVar9 = *(int *)(param_3 + 0x1c) + 1;
  if ((uVar5 & 0xc) == 0) {
    uVar9 = 0;
  }
  bVar24 = false;
LAB_14261c199:
  uVar6 = FUN_14255e910(param_1,param_4);
  uVar21 = uVar6 >> 0x20;
  uVar18 = (uint)(uVar6 >> 0x20);
  if ((uVar18 < uVar9) && (0x2000000 < uVar18)) {
    do {
      *(ulonglong *)(*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x170) * 8) =
           uVar6 & 0xffffffff00000000;
      while( true ) {
        uVar6 = FUN_14255e910(param_1,param_4);
        uVar21 = uVar6 >> 0x20;
        if (uVar21 != 0) break;
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x170) * 8) = 0;
      }
      bVar24 = true;
      uVar18 = (uint)(uVar6 >> 0x20);
    } while ((uVar18 < uVar9) && (0x2000000 < uVar18));
  }
  else if (uVar18 == 0) goto LAB_14261c199;
  do {
    uVar18 = (uint)uVar21;
    uVar6 = FUN_14255e910(param_2);
    uVar20 = uVar6 >> 0x20;
    uVar4 = (uint)(uVar6 >> 0x20);
    if ((uVar4 < uVar9) && (0x2000000 < uVar4)) goto LAB_14261c260;
  } while (uVar4 == 0);
  goto LAB_14261c2c1;
LAB_14261c260:
  do {
    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + -8 + (longlong)*(int *)(param_2 + 0x170) * 8) =
         uVar6 & 0xffffffff00000000;
    while( true ) {
      uVar6 = FUN_14255e910(param_2);
      uVar20 = uVar6 >> 0x20;
      if (uVar20 != 0) break;
      *(undefined8 *)(*(longlong *)(param_2 + 0x20) + -8 + (longlong)*(int *)(param_2 + 0x170) * 8)
           = 0;
    }
    bVar24 = true;
    uVar4 = (uint)(uVar6 >> 0x20);
  } while ((uVar4 < uVar9) && (0x2000000 < uVar4));
LAB_14261c2c1:
  uVar4 = (uint)uVar20;
  if (uVar18 != uVar4) {
    lVar7 = *(longlong *)(param_3 + 0x20);
    if (lVar7 != 0) {
      bVar2 = *(byte *)(lVar7 + (uVar21 >> 0x18));
      if ((uVar18 < 2) || (bVar2 != 0)) {
        uVar18 = uVar18 & 0xffffff | (uint)bVar2 << 0x18;
      }
      else {
        uVar18 = FUN_1426138b0(param_3,uVar21);
        lVar7 = *(longlong *)(param_3 + 0x20);
      }
      bVar2 = *(byte *)(lVar7 + (uVar20 >> 0x18));
      if ((uVar4 < 2) || (bVar2 != 0)) {
        uVar4 = uVar4 & 0xffffff | (uint)bVar2 << 0x18;
      }
      else {
        uVar4 = FUN_1426138b0(param_3,uVar20);
      }
    }
    bVar24 = uVar18 < uVar4;
    goto LAB_14261c423;
  }
  if (uVar18 == 1) goto code_r0x00014261c2d4;
  goto LAB_14261c199;
code_r0x00014261c2d4:
  local_60 = 0;
  if (0 < *param_4) {
    return 0;
  }
  if (0xfff < (int)uVar5) {
    lVar7 = *(longlong *)(param_1 + 0x20);
    lVar14 = *(longlong *)(param_2 + 0x20);
    if ((uVar5 & 0x800) == 0) {
      lVar22 = 0;
      lVar15 = 0;
      do {
        lVar22 = (longlong)(int)lVar22;
        do {
          uVar9 = *(uint *)(lVar7 + lVar22 * 8);
          lVar22 = lVar22 + 1;
        } while (uVar9 < 0x10000);
        lVar15 = (longlong)(int)lVar15;
        do {
          uVar18 = *(uint *)(lVar14 + lVar15 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar18 < 0x10000);
        uVar9 = uVar9 >> 0x10;
        uVar18 = uVar18 >> 0x10;
        if (uVar9 != uVar18) {
          local_60 = -(uint)(uVar9 < uVar18) | 1;
        }
        iVar10 = (uint)(uVar9 == 0x100) << 4;
        if (uVar9 != uVar18) {
          iVar10 = 1;
        }
      } while (iVar10 == 0);
      if (iVar10 != 0x10) {
        return local_60;
      }
    }
    else {
      iVar10 = 0;
      local_64 = 0;
      do {
        lVar15 = lVar7 + (longlong)iVar10 * 8;
        iVar16 = iVar10;
        do {
          iVar17 = iVar16;
          piVar1 = (int *)(lVar15 + 4);
          iVar16 = iVar17 + 1;
          lVar15 = lVar15 + 8;
        } while (*piVar1 + 0xfdffffffU < 0xfe000000);
        lVar15 = lVar14 + (longlong)local_64 * 8;
        iVar19 = local_64;
        do {
          iVar12 = iVar19;
          piVar1 = (int *)(lVar15 + 4);
          iVar19 = iVar12 + 1;
          lVar15 = lVar15 + 8;
        } while (*piVar1 + 0xfdffffffU < 0xfe000000);
        do {
          bVar23 = true;
          uVar9 = 0;
          if (iVar10 < iVar17) {
            lVar15 = (longlong)iVar17;
            do {
              lVar15 = lVar15 + -1;
              uVar18 = *(uint *)(lVar7 + lVar15 * 8);
              bVar23 = uVar18 < 0x10000;
              iVar17 = iVar17 + -1;
              if (0xffff < uVar18) break;
            } while (iVar10 < lVar15);
            uVar18 = uVar18 >> 0x10;
          }
          else {
            uVar18 = 0;
          }
          if (local_64 < iVar12) {
            lVar15 = (longlong)iVar12;
            do {
              lVar15 = lVar15 + -1;
              uVar9 = *(uint *)(lVar14 + lVar15 * 8);
              iVar12 = iVar12 + -1;
              if (0xffff < uVar9) break;
            } while (local_64 < lVar15);
            uVar9 = uVar9 >> 0x10;
          }
          if (uVar18 != uVar9) {
            local_60 = -(uint)(uVar18 < uVar9) | 1;
          }
          iVar11 = 0;
          if (bVar23) {
            iVar11 = 0x1c;
          }
          if (uVar18 != uVar9) {
            iVar11 = 1;
          }
        } while (iVar11 == 0);
        if ((iVar11 == 0x1c) && (iVar11 = 0, local_64 = iVar19, iVar10 = iVar16, *piVar1 == 1))
        goto LAB_14261c60f;
      } while (iVar11 == 0);
      if (iVar11 != 0x16) {
        return local_60;
      }
    }
  }
LAB_14261c60f:
  if ((uVar5 & 0x400) != 0) {
    lVar7 = 0;
    lVar14 = 0;
    do {
      lVar7 = (longlong)(int)lVar7;
      if (uVar5 < 0x1000) {
        do {
          do {
            uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
            lVar7 = lVar7 + 1;
          } while (uVar6 >> 0x20 == 0);
        } while ((int)uVar6 == 0);
        lVar14 = (longlong)(int)lVar14;
        do {
          do {
            uVar21 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + lVar14 * 8);
            lVar14 = lVar14 + 1;
          } while (uVar21 >> 0x20 == 0);
        } while ((int)uVar21 == 0);
      }
      else {
        do {
          uVar9 = *(uint *)(*(longlong *)(param_1 + 0x20) + lVar7 * 8);
          uVar6 = (ulonglong)uVar9;
          lVar7 = lVar7 + 1;
        } while (uVar9 < 0x10000);
        lVar14 = (longlong)(int)lVar14;
        do {
          uVar9 = *(uint *)(*(longlong *)(param_2 + 0x20) + lVar14 * 8);
          uVar21 = (ulonglong)uVar9;
          lVar14 = lVar14 + 1;
        } while (uVar9 < 0x10000);
      }
      uVar9 = (uint)uVar21 & 0xc000;
      uVar18 = (uint)uVar6 & 0xc000;
      if (uVar18 != uVar9) {
        if ((uVar5 & 0x100) != 0) {
          uVar5 = (uVar18 < uVar9) - 1;
          goto LAB_14261c425;
        }
        bVar24 = uVar18 < uVar9;
        goto LAB_14261c423;
      }
    } while (((uint)uVar6 & 0xffff0000) != 0x1000000);
  }
  if ((int)uVar5 < 0x2000) {
    return 0;
  }
  uVar9 = 0x3f3f;
  if ((uVar5 & 0x600) == 0x200) {
    uVar9 = 0xff3f;
  }
  lVar14 = 0;
  lVar7 = 0;
  uVar18 = 0;
  while( true ) {
    lVar14 = (longlong)(int)lVar14;
    do {
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + lVar14 * 8);
      lVar14 = lVar14 + 1;
      uVar18 = uVar18 | uVar4;
      uVar13 = uVar9 & uVar4;
    } while (uVar13 == 0);
    lVar7 = (longlong)(int)lVar7;
    do {
      uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      uVar18 = uVar18 | uVar3;
      uVar8 = uVar9 & uVar3;
    } while (uVar8 == 0);
    if (uVar13 != uVar8) break;
    if (uVar13 == 0x100) {
      if ((int)uVar5 < 0x3000) {
        return 0;
      }
      if ((!bVar24) && ((uVar18 & 0xc0) == 0)) {
        return 0;
      }
      lVar14 = 0;
      lVar7 = 0;
      while( true ) {
        lVar14 = (longlong)(int)lVar14;
        do {
          uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + lVar14 * 8);
          lVar14 = lVar14 + 1;
          uVar5 = (uint)uVar6;
          uVar6 = uVar6 >> 0x20;
          if (0x100 < (uVar5 & 0xffff)) {
            uVar6 = (ulonglong)(uVar5 | 0xffffff3f);
          }
          uVar5 = (uint)uVar6;
        } while (uVar5 == 0);
        lVar7 = (longlong)(int)lVar7;
        do {
          uVar21 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + lVar7 * 8);
          lVar7 = lVar7 + 1;
          uVar9 = (uint)uVar21;
          uVar21 = uVar21 >> 0x20;
          if (0x100 < (uVar9 & 0xffff)) {
            uVar21 = (ulonglong)(uVar9 | 0xffffff3f);
          }
          uVar9 = (uint)uVar21;
        } while (uVar9 == 0);
        if (uVar5 != uVar9) break;
        if (uVar5 == 1) {
          return 0;
        }
      }
      if (*(longlong *)(param_3 + 0x20) != 0) {
        uVar5 = FUN_14261c8b0(param_3,uVar6);
        uVar9 = FUN_14261c8b0(param_3,uVar21);
      }
      bVar24 = uVar5 < uVar9;
LAB_14261c423:
      uVar5 = -(uint)bVar24;
LAB_14261c425:
      return uVar5 | 1;
    }
  }
  if ((uVar5 & 0x700) == 0x300) {
    if (0x100 < uVar13) {
      if (uVar4 < 0x10000) {
        uVar13 = uVar13 + 0x4000;
      }
      else {
        uVar13 = uVar13 ^ 0xc000;
      }
    }
    if (0x100 < uVar8) {
      if (uVar3 < 0x10000) {
        uVar8 = uVar8 + 0x4000;
      }
      else {
        uVar8 = uVar8 ^ 0xc000;
      }
    }
  }
  bVar24 = uVar13 < uVar8;
  goto LAB_14261c423;
}



// FUNCTION 14261c8b0 FUN_14261c8b0 body=46 status=ok
// SIG undefined FUN_14261c8b0(void)

ulonglong FUN_14261c8b0(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = (uint)param_2;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x20) + (param_2 >> 0x18 & 0xff));
  if ((1 < uVar3) && (bVar1 == 0)) {
    param_2 = param_2 & 0xffffffff;
    if (uVar3 < *(uint *)(param_1 + 0x28)) {
      puVar4 = *(uint **)(param_1 + 0x30);
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
      } while (uVar2 <= (uVar3 | 0xffff));
      param_2 = (ulonglong)(uVar3 + uVar2 * 0x1000000);
    }
    return param_2;
  }
  return (ulonglong)(uVar3 & 0xffffff | (uint)bVar1 << 0x18);
}



// FUNCTION 14261c8e0 thunk_FUN_1426191b0 body=5 status=ok
// SIG undefined thunk_FUN_1426191b0(void)

void thunk_FUN_1426191b0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = icu_64::CollationIterator::vftable;
  lVar1 = param_1[0x2f];
  if (lVar1 != 0) {
    FUN_140859a90(lVar1 + 0x40);
    FUN_140859a90(lVar1);
    FUN_1401773f0(lVar1);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    FUN_1424da110(param_1[4]);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14261c8f0 FUN_14261c8f0 body=29 status=ok
// SIG undefined FUN_14261c8f0(void)

void FUN_14261c8f0(longlong param_1,undefined4 param_2)

{
  FUN_1426192c0();
  *(undefined4 *)(param_1 + 400) = param_2;
  return;
}



// FUNCTION 14261c910 FUN_14261c910 body=7 status=ok
// SIG undefined FUN_14261c910(void)

undefined4 FUN_14261c910(longlong param_1)

{
  return *(undefined4 *)(param_1 + 400);
}



// FUNCTION 14261c920 FUN_14261c920 body=540 status=ok
// SIG undefined FUN_14261c920(void)

undefined4 FUN_14261c920(longlong param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  iVar7 = *(int *)(param_1 + 400);
  if (iVar7 == *(int *)(param_1 + 0x194)) {
    *param_2 = 0xffffffff;
    return 0xc0;
  }
  *(int *)(param_1 + 400) = iVar7 + 1;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar7);
  *param_2 = (uint)bVar1;
  if (-1 < (char)bVar1) {
    return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (ulonglong)bVar1 * 4);
  }
  iVar7 = *(int *)(param_1 + 0x194);
  if ((bVar1 & 0xf0) == 0xe0) {
    lVar6 = (longlong)*(int *)(param_1 + 400) + 1;
    if (((int)lVar6 < iVar7) || (iVar7 < 0)) {
      uVar5 = bVar1 & 0xf;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
      if ((((byte)(&DAT_14bd49f86)[uVar5] >> (bVar1 >> 5) & 1) != 0) &&
         (uVar9 = *(byte *)(*(longlong *)(param_1 + 0x188) + lVar6) ^ 0x80, (byte)uVar9 < 0x40)) {
        *param_2 = (bVar1 & 0x3f) << 6 | uVar5 << 0xc | uVar9;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
        return *(undefined4 *)
                ((*(longlong **)(param_1 + 8))[2] +
                ((ulonglong)(*param_2 & 0x1f) +
                (ulonglong)
                *(ushort *)(**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2) * 4)
                * 4);
      }
    }
LAB_14261ca8f:
    lVar6 = *(longlong *)(param_1 + 0x188);
  }
  else {
    if (0x1d < (byte)(bVar1 + 0x3e)) goto LAB_14261ca8f;
    lVar6 = *(longlong *)(param_1 + 0x188);
    if ((*(int *)(param_1 + 400) != iVar7) &&
       (uVar8 = (ulonglong)*(byte *)(lVar6 + *(int *)(param_1 + 400)) ^ 0x80, (byte)uVar8 < 0x40)) {
      uVar3 = *(undefined4 *)
               ((*(longlong **)(param_1 + 8))[2] +
               (*(ushort *)(**(longlong **)(param_1 + 8) + 0xec0 + (ulonglong)bVar1 * 2) + uVar8) *
               4);
      *param_2 = (bVar1 & 0x1f) << 6 | (uint)uVar8;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      return uVar3;
    }
  }
  uVar5 = FUN_142580cc0(lVar6);
  *param_2 = uVar5;
  plVar4 = (longlong *)**(longlong **)(param_1 + 0x10);
  if (uVar5 < 0xd800) {
    uVar2 = *(ushort *)(*plVar4 + (ulonglong)(uVar5 >> 5) * 2);
  }
  else {
    if (uVar5 < 0x10000) {
      uVar9 = (uVar5 >> 5) + 0x140;
      if (0xdbff < uVar5) {
        uVar9 = uVar5 >> 5;
      }
      uVar8 = (ulonglong)uVar9;
      lVar6 = *plVar4;
    }
    else {
      iVar7 = 0x80;
      if (0x10ffff < uVar5) goto LAB_14261cb27;
      if (*(int *)((longlong)plVar4 + 0x2c) <= (int)uVar5) {
        iVar7 = (int)plVar4[6];
        goto LAB_14261cb27;
      }
      lVar6 = *plVar4;
      uVar8 = (ulonglong)(uVar5 >> 5 & 0x3f) +
              (ulonglong)*(ushort *)(lVar6 + 0x1040 + (ulonglong)(uVar5 >> 0xb) * 2);
    }
    uVar2 = *(ushort *)(lVar6 + uVar8 * 2);
  }
  iVar7 = (uVar5 & 0x1f) + (uint)uVar2 * 4;
LAB_14261cb27:
  return *(undefined4 *)(plVar4[2] + (longlong)iVar7 * 4);
}



// FUNCTION 14261cb40 FUN_14261cb40 body=35 status=ok
// SIG undefined FUN_14261cb40(void)

undefined8 FUN_14261cb40(longlong param_1)

{
  int iVar1;
  
  if (-1 < *(int *)(param_1 + 0x194)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 400) + -1;
  *(int *)(param_1 + 400) = iVar1;
  *(int *)(param_1 + 0x194) = iVar1;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 14261cb70 FUN_14261cb70 body=3 status=ok
// SIG undefined FUN_14261cb70(void)

undefined1 FUN_14261cb70(void)

{
  return 1;
}



// FUNCTION 14261cb80 FUN_14261cb80 body=348 status=ok
// SIG undefined FUN_14261cb80(void)

uint FUN_14261cb80(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar7 = *(uint *)(param_1 + 400);
  uVar4 = *(uint *)(param_1 + 0x194);
  uVar6 = 0xffffffff;
  if (uVar7 != uVar4) {
    lVar9 = (longlong)(int)uVar7;
    lVar3 = *(longlong *)(param_1 + 0x188);
    if (((int)uVar4 < 0) && (*(char *)(lVar3 + lVar9) == '\0')) {
      *(uint *)(param_1 + 0x194) = uVar7;
    }
    else {
      uVar10 = lVar9 + 1;
      *(uint *)(param_1 + 400) = (uint)uVar10;
      bVar1 = *(byte *)(lVar3 + lVar9);
      uVar6 = (uint)bVar1;
      if (((char)bVar1 < '\0') && (uVar6 = 0xfffd, (uint)uVar10 != uVar4)) {
        if (bVar1 < 0xe0) {
          if (bVar1 < 0xc2) {
            return 0xfffd;
          }
          uVar7 = bVar1 & 0x1f;
        }
        else {
          if (bVar1 < 0xf0) {
            uVar7 = bVar1 & 0xf;
            if (((byte)(&DAT_14bd49f86)[uVar7] >> (*(byte *)(lVar3 + uVar10) >> 5) & 1) == 0) {
              return 0xfffd;
            }
            bVar5 = *(byte *)(lVar3 + uVar10) & 0x3f;
          }
          else {
            if (0xf4 < bVar1) {
              return 0xfffd;
            }
            bVar2 = *(byte *)(lVar3 + uVar10);
            if (((uint)(int)(char)(&DAT_14bd49f97)[bVar2 >> 4] >> (bVar1 - 0xf0 & 0x1f) & 1) == 0) {
              return 0xfffd;
            }
            uVar10 = lVar9 + 2;
            *(uint *)(param_1 + 400) = (uint)uVar10;
            if ((uint)uVar10 == uVar4) {
              return 0xfffd;
            }
            bVar5 = *(char *)(lVar3 + uVar10) + 0x80;
            if (0x3f < bVar5) {
              return 0xfffd;
            }
            uVar7 = bVar2 & 0x3f | (bVar1 - 0xf0) * 0x40;
            uVar10 = uVar10 & 0xffffffff;
          }
          uVar8 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar8;
          *(uint *)(param_1 + 400) = uVar8;
          if (uVar8 == uVar4) {
            return 0xfffd;
          }
          uVar7 = (uint)bVar5 | uVar7 << 6;
        }
        uVar4 = *(byte *)(lVar3 + (int)uVar10) ^ 0x80;
        if ((byte)uVar4 < 0x40) {
          uVar6 = uVar7 << 6 | uVar4;
          *(int *)(param_1 + 400) = (int)uVar10 + 1;
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 14261cce0 FUN_14261cce0 body=80 status=ok
// SIG undefined FUN_14261cce0(void)

ulonglong FUN_14261cce0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *(int *)(param_1 + 400);
  if ((longlong)iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 400) = iVar2 + -1;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x188) + -1 + (longlong)iVar2);
    uVar3 = (ulonglong)bVar1;
    if ((char)bVar1 < '\0') {
      uVar3 = FUN_142580f00(*(longlong *)(param_1 + 0x188),0,param_1 + 400,bVar1,0xfd);
    }
  }
  return uVar3;
}



// FUNCTION 14261cd30 FUN_14261cd30 body=338 status=ok
// SIG undefined FUN_14261cd30(void)

void FUN_14261cd30(longlong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (0 < param_2) {
    uVar3 = *(uint *)(param_1 + 0x194);
    lVar4 = *(longlong *)(param_1 + 0x188);
    iVar6 = *(int *)(param_1 + 400);
    param_2 = param_2 + 1;
    do {
      lVar7 = (longlong)iVar6;
      if ((int)uVar3 <= iVar6) {
        if (-1 < (int)uVar3) {
          return;
        }
        if (*(char *)(lVar4 + lVar7) == '\0') {
          return;
        }
      }
      uVar8 = lVar7 + 1;
      *(uint *)(param_1 + 400) = (uint)uVar8;
      bVar1 = *(byte *)(lVar4 + lVar7);
      if ((0xcc < (byte)(bVar1 + 0xb)) && ((uint)uVar8 != uVar3)) {
        bVar2 = *(byte *)(lVar4 + uVar8);
        if ((bVar1 & 0xf0) == 0xe0) {
          if (((byte)(&DAT_14bd49f86)[bVar1 & 0xf] >> (bVar2 >> 5) & 1) != 0) {
            uVar9 = (longlong)iVar6 + 2;
            *(uint *)(param_1 + 400) = (uint)uVar9;
            uVar8 = (ulonglong)uVar3;
            if ((uint)uVar9 != uVar3) {
              iVar5 = 3;
              bVar2 = *(byte *)(lVar4 + uVar9);
joined_r0x00014261ce81:
              uVar8 = uVar9 & 0xffffffff;
              goto joined_r0x00014261ce1e;
            }
          }
        }
        else if (bVar1 < 0xe0) {
          iVar5 = 2;
joined_r0x00014261ce1e:
          if ((char)bVar2 < -0x40) {
            *(int *)(param_1 + 400) = iVar6 + iVar5;
            uVar8 = (ulonglong)(uint)(iVar6 + iVar5);
          }
        }
        else if (((byte)(&DAT_14bd49f97)[bVar2 >> 4] >> (bVar1 & 7) & 1) != 0) {
          uVar9 = (longlong)iVar6 + 2;
          *(uint *)(param_1 + 400) = (uint)uVar9;
          uVar8 = (ulonglong)uVar3;
          if (((uint)uVar9 != uVar3) &&
             (uVar8 = uVar9 & 0xffffffff, *(char *)(lVar4 + uVar9) < -0x40)) {
            uVar9 = (longlong)iVar6 + 3;
            *(uint *)(param_1 + 400) = (uint)uVar9;
            uVar8 = (ulonglong)uVar3;
            if ((uint)uVar9 != uVar3) {
              iVar5 = 4;
              bVar2 = *(byte *)(lVar4 + uVar9);
              goto joined_r0x00014261ce81;
            }
          }
        }
      }
      param_2 = param_2 + -1;
      iVar6 = (int)uVar8;
    } while (1 < param_2);
  }
  return;
}



// FUNCTION 14261cea0 FUN_14261cea0 body=82 status=ok
// SIG undefined FUN_14261cea0(void)

void FUN_14261cea0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (0 < param_2) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 400);
    param_2 = param_2 + 1;
    do {
      if ((int)uVar2 < 1) {
        return;
      }
      uVar1 = (int)uVar2 - 1;
      uVar2 = (ulonglong)uVar1;
      *(uint *)(param_1 + 400) = uVar1;
      if (*(char *)(*(longlong *)(param_1 + 0x188) + uVar2) < -0x40) {
        uVar2 = FUN_142581150(*(longlong *)(param_1 + 0x188),0,uVar1);
        *(int *)(param_1 + 400) = (int)uVar2;
      }
      param_2 = param_2 + -1;
    } while (1 < param_2);
  }
  return;
}



// FUNCTION 14261cf00 FUN_14261cf00 body=43 status=ok
// SIG undefined FUN_14261cf00(void)

void FUN_14261cf00(undefined8 *param_1)

{
  *param_1 = icu_64::FCDUTF8CollationIterator::vftable;
  FUN_140859a90(param_1 + 0x36);
  FUN_1426191b0(param_1);
  return;
}



// FUNCTION 14261cf30 FUN_14261cf30 body=45 status=ok
// SIG undefined FUN_14261cf30(void)

void FUN_14261cf30(longlong param_1,undefined4 param_2)

{
  FUN_1426192c0();
  *(undefined4 *)(param_1 + 400) = param_2;
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  *(undefined4 *)(param_1 + 0x198) = 0;
  return;
}



// FUNCTION 14261cf60 FUN_14261cf60 body=43 status=ok
// SIG undefined FUN_14261cf60(void)

int FUN_14261cf60(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 400);
  if (*(int *)(param_1 + 0x198) == 3) {
    if (*piVar1 == 0) {
      piVar1 = (int *)(param_1 + 0x19c);
    }
    else {
      piVar1 = (int *)(param_1 + 0x1a0);
    }
  }
  return *piVar1;
}



// FUNCTION 14261cf90 FUN_14261cf90 body=1074 status=ok
// SIG undefined FUN_14261cf90(void)

ulonglong FUN_14261cf90(longlong param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  piVar1 = (int *)(param_1 + 400);
  do {
    switch(*(undefined4 *)(param_1 + 0x198)) {
    case 0:
      iVar9 = *(int *)(param_1 + 400);
      if (iVar9 == *(int *)(param_1 + 0x194)) goto LAB_14261d2ef;
      *(int *)(param_1 + 400) = iVar9 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar9);
      *param_2 = (uint)bVar2;
      if (-1 < (char)bVar2) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
        uVar7 = (ulonglong)(uint)bVar2;
LAB_14261d3c5:
        uVar11 = *(uint *)(lVar8 + uVar7 * 4);
        goto LAB_14261d3c8;
      }
      iVar9 = *(int *)(param_1 + 0x194);
      if ((bVar2 & 0xf0) != 0xe0) {
        if (0x1d < (byte)(bVar2 + 0x3e)) goto LAB_14261d261;
        lVar8 = *(longlong *)(param_1 + 0x188);
        if ((*(int *)(param_1 + 400) == iVar9) ||
           (uVar7 = (ulonglong)*(byte *)(lVar8 + *(int *)(param_1 + 400)) ^ 0x80, 0x3f < (byte)uVar7
           )) goto LAB_14261d268;
        uVar11 = *(uint *)((*(longlong **)(param_1 + 8))[2] +
                          (*(ushort *)(**(longlong **)(param_1 + 8) + 0xec0 + (ulonglong)bVar2 * 2)
                          + uVar7) * 4);
        *param_2 = (bVar2 & 0x1f) << 6 | (uint)uVar7;
        iVar12 = *(int *)(param_1 + 400);
        iVar9 = iVar12 + 1;
        *(int *)(param_1 + 400) = iVar9;
        uVar10 = *param_2;
        if (((0xbf < (int)uVar10) && ((ulonglong)(byte)(&DAT_149d5bf70)[uVar10 >> 5] != 0)) &&
           (((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar10 >> 5] * 4) >>
              (uVar10 & 0x1f) & 1) != 0 &&
            ((iVar9 != *(int *)(param_1 + 0x194) && (cVar6 = FUN_14261d3e0(param_1), cVar6 != '\0'))
            )))) {
          iVar12 = iVar12 + -1;
          goto LAB_14261d2d5;
        }
        goto LAB_14261d3c8;
      }
      lVar8 = (longlong)*piVar1 + 1;
      if (((int)lVar8 < iVar9) || (iVar9 < 0)) {
        uVar11 = bVar2 & 0xf;
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*piVar1);
        if ((((byte)(&DAT_14bd49f86)[uVar11] >> (bVar3 >> 5) & 1) != 0) &&
           (uVar10 = *(byte *)(*(longlong *)(param_1 + 0x188) + lVar8) ^ 0x80, (byte)uVar10 < 0x40))
        {
          *param_2 = (bVar3 & 0x3f) << 6 | uVar11 << 0xc | uVar10;
          iVar12 = *piVar1;
          iVar9 = iVar12 + 2;
          *piVar1 = iVar9;
          uVar13 = *param_2;
          if (((((int)uVar13 < 0xc0) || ((ulonglong)(byte)(&DAT_149d5bf70)[uVar13 >> 5] == 0)) ||
              ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar13 >> 5] * 4) >>
                (uVar13 & 0x1f) & 1) == 0)) ||
             (((uVar13 & 0x1fff01) != 0xf01 &&
              ((iVar9 == *(int *)(param_1 + 0x194) ||
               (cVar6 = FUN_14261d3e0(param_1), cVar6 == '\0')))))) goto LAB_14261d3a5;
          iVar12 = iVar12 + -1;
          goto LAB_14261d2d5;
        }
      }
LAB_14261d261:
      lVar8 = *(longlong *)(param_1 + 0x188);
LAB_14261d268:
      uVar11 = FUN_142580cc0(lVar8,piVar1,iVar9,(ulonglong)bVar2,0xfd);
      *param_2 = uVar11;
      if (uVar11 == 0xfffd) {
        uVar11 = 0xfffd0505;
        goto LAB_14261d3c8;
      }
      uVar10 = (uVar11 >> 10) + 0xd7c0 & 0xffff;
      if ((((uVar10 < 0xc0) || ((ulonglong)(byte)(&DAT_149d5bf70)[uVar10 >> 5] == 0)) ||
          ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar10 >> 5] * 4) >>
            (uVar11 >> 10 & 0x1f) & 1) == 0)) ||
         ((iVar12 = *(int *)(param_1 + 400), iVar12 == *(int *)(param_1 + 0x194) ||
          (cVar6 = FUN_14261d3e0(param_1), cVar6 == '\0')))) {
        plVar5 = (longlong *)**(longlong **)(param_1 + 0x10);
        lVar8 = plVar5[2];
        if ((int)uVar11 < *(int *)((longlong)plVar5 + 0x2c)) {
          iVar9 = (uVar11 & 0x1f) +
                  (uint)*(ushort *)
                         (*plVar5 +
                         ((ulonglong)(uVar11 >> 5 & 0x3f) +
                         (ulonglong)
                         *(ushort *)(*plVar5 + 0x1040 + (longlong)((int)uVar11 >> 0xb) * 2)) * 2) *
                  4;
        }
        else {
          iVar9 = (int)plVar5[6];
        }
        uVar7 = (ulonglong)iVar9;
        goto LAB_14261d3c5;
      }
      iVar12 = iVar12 + -4;
LAB_14261d2d5:
      *(int *)(param_1 + 400) = iVar12;
      cVar6 = FUN_14261d550(param_1,param_3);
      if (cVar6 == '\0') {
LAB_14261d2ef:
        *param_2 = 0xffffffff;
        uVar11 = 0xc0;
LAB_14261d3c8:
        return (ulonglong)uVar11;
      }
      break;
    case 1:
      *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 0x198) = (uint)(*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1a0)) * 2;
      break;
    case 2:
      if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1a0)) {
        uVar7 = FUN_14261c920(param_1,param_2);
        return uVar7;
      }
      goto LAB_14261d18c;
    case 3:
      sVar4 = *(short *)(param_1 + 0x1b8);
      if (sVar4 < 0) {
        uVar11 = *(uint *)(param_1 + 0x1bc);
      }
      else {
        uVar11 = (int)sVar4 >> 5;
      }
      uVar10 = *(uint *)(param_1 + 400);
      if (uVar10 != uVar11) {
        *piVar1 = uVar10 + 1;
        uVar13 = 0xffff;
        if (uVar10 < uVar11) {
          if (((int)sVar4 & 2U) == 0) {
            lVar8 = *(longlong *)(param_1 + 0x1c8);
          }
          else {
            lVar8 = param_1 + 0x1ba;
          }
          uVar13 = (uint)*(ushort *)(lVar8 + (longlong)(int)uVar10 * 2);
        }
        *param_2 = uVar13;
LAB_14261d3a5:
        lVar8 = (*(longlong **)(param_1 + 8))[2];
        uVar7 = (ulonglong)(uVar13 & 0x1f) +
                (ulonglong)
                *(ushort *)(**(longlong **)(param_1 + 8) + (longlong)((int)uVar13 >> 5) * 2) * 4;
        goto LAB_14261d3c5;
      }
    default:
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a0);
LAB_14261d18c:
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
  } while( true );
}



// FUNCTION 14261d3e0 FUN_14261d3e0 body=368 status=ok
// SIG undefined FUN_14261d3e0(void)

undefined8 FUN_14261d3e0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  lVar7 = (longlong)*(int *)(param_1 + 400);
  bVar9 = *(byte *)(lVar1 + lVar7);
  if (bVar9 < 0xcc) {
    return 0;
  }
  if ((bVar9 != 0xea) && ((byte)(bVar9 + 0x1c) < 10)) {
    return 0;
  }
  uVar6 = lVar7 + 1;
  uVar3 = *(uint *)(param_1 + 0x194);
  uVar2 = 0xfffd;
  if ((uint)uVar6 == uVar3) goto LAB_14261d525;
  uVar4 = (uint)bVar9;
  if (bVar9 < 0xe0) {
    uVar4 = uVar4 & 0x1f;
  }
  else {
    if (bVar9 < 0xf0) {
      uVar4 = uVar4 & 0xf;
      if (((byte)(&DAT_14bd49f86)[uVar4] >> (*(byte *)(lVar1 + uVar6) >> 5) & 1) == 0)
      goto LAB_14261d525;
      bVar9 = *(byte *)(lVar1 + uVar6) & 0x3f;
    }
    else {
      if (0xf4 < bVar9) goto LAB_14261d525;
      if (((((uint)(int)(char)(&DAT_14bd49f97)[*(byte *)(lVar1 + uVar6) >> 4] >>
             (uVar4 - 0xf0 & 0x1f) & 1) == 0) || (uVar8 = lVar7 + 2, (uint)uVar8 == uVar3)) ||
         (bVar9 = *(char *)(lVar1 + uVar8) + 0x80, 0x3f < bVar9)) goto LAB_14261d525;
      uVar4 = *(byte *)(lVar1 + uVar6) & 0x3f | (uVar4 - 0xf0) * 0x40;
      uVar6 = uVar8 & 0xffffffff;
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    if (uVar5 == uVar3) goto LAB_14261d525;
    uVar4 = (uint)bVar9 | uVar4 << 6;
  }
  uVar3 = *(byte *)(lVar1 + (int)uVar6) ^ 0x80;
  if ((byte)uVar3 < 0x40) {
    uVar3 = uVar4 << 6 | uVar3;
    uVar4 = (uVar4 >> 4) + 0xd7c0 & 0xffff;
    if (uVar3 < 0x10000) {
      uVar4 = uVar3;
    }
    uVar2 = (ulonglong)uVar4;
    if (uVar4 < 0x300) {
      return 0;
    }
  }
LAB_14261d525:
  if ((ulonglong)(byte)(&DAT_149d5b650)[uVar2 >> 5] == 0) {
    return 0;
  }
  return CONCAT71((int7)(uVar2 >> 8),
                  (*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar2 >> 5] * 4) >>
                   ((uint)uVar2 & 0x1f) & 1) != 0);
}



// FUNCTION 14261d550 FUN_14261d550 body=1197 status=ok
// SIG undefined FUN_14261d550(void)

ulonglong FUN_14261d550(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined **local_98;
  undefined2 local_90;
  int *local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    uVar9 = 0;
    goto LAB_14261da0e;
  }
  iVar11 = *(int *)(param_1 + 400);
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  local_58 = param_2;
  local_4c = iVar11;
  uVar12 = 0;
LAB_14261d5b0:
  lVar2 = *(longlong *)(param_1 + 0x188);
  lVar8 = (longlong)iVar11;
  uVar9 = lVar8 + 1;
  *(uint *)(param_1 + 400) = (uint)uVar9;
  bVar1 = *(byte *)(lVar2 + lVar8);
  uVar7 = (uint)bVar1;
  uVar5 = uVar7;
  if ((char)bVar1 < '\0') {
    uVar4 = *(uint *)(param_1 + 0x194);
    uVar5 = 0xfffd;
    if ((uint)uVar9 != uVar4) {
      if (bVar1 < 0xe0) {
        if (0xc1 < bVar1) {
          uVar7 = uVar7 & 0x1f;
LAB_14261d740:
          uVar4 = *(byte *)(lVar2 + (int)uVar9) ^ 0x80;
          if ((byte)uVar4 < 0x40) {
            *(int *)(param_1 + 400) = (int)uVar9 + 1;
            uVar5 = uVar7 << 6 | uVar4;
          }
        }
      }
      else if (bVar1 < 0xf0) {
        uVar7 = uVar7 & 0xf;
        if (((byte)(&DAT_14bd49f86)[uVar7] >> (*(byte *)(lVar2 + uVar9) >> 5) & 1) != 0) {
          bVar10 = *(byte *)(lVar2 + uVar9) & 0x3f;
LAB_14261d713:
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
          *(uint *)(param_1 + 400) = uVar6;
          if (uVar6 != uVar4) {
            uVar7 = (uint)bVar10 | uVar7 << 6;
            goto LAB_14261d740;
          }
        }
      }
      else if (bVar1 < 0xf5) {
        bVar1 = *(byte *)(lVar2 + uVar9);
        if (((uint)(int)(char)(&DAT_14bd49f97)[bVar1 >> 4] >> (uVar7 - 0xf0 & 0x1f) & 1) != 0) {
          uVar9 = lVar8 + 2;
          *(uint *)(param_1 + 400) = (uint)uVar9;
          if (((uint)uVar9 != uVar4) && (bVar10 = *(char *)(lVar2 + uVar9) + 0x80, bVar10 < 0x40)) {
            uVar7 = bVar1 & 0x3f | (uVar7 - 0xf0) * 0x40;
            uVar9 = uVar9 & 0xffffffff;
            goto LAB_14261d713;
          }
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if ((int)uVar5 < (int)(uint)*(ushort *)(lVar2 + 8)) {
    uVar7 = 0;
  }
  else {
    if ((int)uVar5 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (longlong)((int)uVar5 >> 8));
      uVar7 = 0;
      if ((bVar1 == 0) || ((1 << ((byte)uVar5 >> 5) & (uint)bVar1) == 0)) goto LAB_14261d662;
    }
    uVar7 = FUN_1425d5c90(lVar2,uVar5);
  }
LAB_14261d662:
  uVar4 = uVar7 & 0xffff;
  if ((0xff < uVar4) || (iVar11 == local_4c)) {
    FUN_1424a7d60(&local_98,uVar5);
    if ((0xff < uVar4) &&
       ((((ushort)(uVar4 >> 8) < ((ushort)uVar12 & 0xff) || (uVar4 == 0x8184)) || (uVar4 == 0x8182))
       )) {
      goto LAB_14261d7e0;
    }
    iVar11 = *(int *)(param_1 + 400);
    if (((char)uVar7 == '\0') || (uVar12 = uVar7, iVar11 == *(int *)(param_1 + 0x194)))
    goto LAB_14261d98e;
    goto LAB_14261d5b0;
  }
  *(int *)(param_1 + 400) = iVar11;
LAB_14261d98e:
  *(int *)(param_1 + 0x1a0) = iVar11;
  *(int *)(param_1 + 400) = local_4c;
  *(undefined4 *)(param_1 + 0x198) = 2;
LAB_14261da02:
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_14261da05;
LAB_14261d7e0:
  uVar12 = *(uint *)(param_1 + 400);
  uVar5 = *(uint *)(param_1 + 0x194);
  if (uVar12 == uVar5) goto LAB_14261d9b1;
  lVar8 = (longlong)(int)uVar12;
  lVar2 = *(longlong *)(param_1 + 0x188);
  uVar9 = lVar8 + 1;
  *(uint *)(param_1 + 400) = (uint)uVar9;
  bVar1 = *(byte *)(lVar2 + lVar8);
  uVar7 = (uint)bVar1;
  uVar4 = uVar7;
  if (((char)bVar1 < '\0') && (uVar4 = 0xfffd, (uint)uVar9 != uVar5)) {
    if (bVar1 < 0xe0) {
      if (0xc1 < bVar1) {
        uVar7 = uVar7 & 0x1f;
LAB_14261d891:
        uVar5 = *(byte *)(lVar2 + (int)uVar9) ^ 0x80;
        if ((byte)uVar5 < 0x40) {
          *(int *)(param_1 + 400) = (int)uVar9 + 1;
          uVar4 = uVar7 << 6 | uVar5;
        }
      }
    }
    else if (bVar1 < 0xf0) {
      uVar7 = uVar7 & 0xf;
      if (((byte)(&DAT_14bd49f86)[uVar7] >> (*(byte *)(lVar2 + uVar9) >> 5) & 1) != 0) {
        bVar10 = *(byte *)(lVar2 + uVar9) & 0x3f;
LAB_14261d864:
        uVar6 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar6;
        *(uint *)(param_1 + 400) = uVar6;
        if (uVar6 != uVar5) {
          uVar7 = (uint)bVar10 | uVar7 << 6;
          goto LAB_14261d891;
        }
      }
    }
    else if (bVar1 < 0xf5) {
      bVar1 = *(byte *)(lVar2 + uVar9);
      if (((uint)(int)(char)(&DAT_14bd49f97)[bVar1 >> 4] >> (uVar7 - 0xf0 & 0x1f) & 1) != 0) {
        uVar9 = lVar8 + 2;
        *(uint *)(param_1 + 400) = (uint)uVar9;
        if (((uint)uVar9 != uVar5) && (bVar10 = *(char *)(lVar2 + uVar9) + 0x80, bVar10 < 0x40)) {
          uVar7 = bVar1 & 0x3f | (uVar7 - 0xf0) * 0x40;
          uVar9 = uVar9 & 0xffffffff;
          goto LAB_14261d864;
        }
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  if ((int)uVar4 < (int)(uint)*(ushort *)(lVar2 + 8)) {
LAB_14261d9aa:
    *(uint *)(param_1 + 400) = uVar12;
    goto LAB_14261d9b1;
  }
  if ((int)uVar4 < 0x10000) {
    bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (longlong)((int)uVar4 >> 8));
    if ((bVar1 == 0) || ((1 << ((byte)uVar4 >> 5) & (uint)bVar1) == 0)) goto LAB_14261d9aa;
  }
  uVar3 = FUN_1425d5c90(lVar2,uVar4);
  if (uVar3 < 0x100) goto LAB_14261d9aa;
  FUN_1424a7d60(&local_98,uVar4);
  goto LAB_14261d7e0;
LAB_14261d9b1:
  FUN_1425d0e70(*(undefined8 *)(param_1 + 0x1a8),&local_98,param_1 + 0x1b0,local_58);
  if (*local_58 < 1) {
    *(int *)(param_1 + 0x19c) = local_4c;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x198) = 3;
    *(undefined4 *)(param_1 + 400) = 0;
    goto LAB_14261da02;
  }
  uVar9 = 0;
LAB_14261da05:
  FUN_140859a90(&local_98);
LAB_14261da0e:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14261da30 Unwind@14261da30 body=52 status=ok
// SIG undefined Unwind@14261da30(void)

void Unwind_14261da30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14261da70 FUN_14261da70 body=112 status=ok
// SIG undefined FUN_14261da70(void)

ushort FUN_14261da70(longlong param_1)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x198) == 3) {
    uVar2 = *(uint *)(param_1 + 400);
    sVar1 = *(short *)(param_1 + 0x1b8);
    if (sVar1 < 0) {
      uVar5 = *(uint *)(param_1 + 0x1bc);
    }
    else {
      uVar5 = (int)sVar1 >> 5;
    }
    uVar3 = 0xffff;
    if (uVar2 < uVar5) {
      if (((int)sVar1 & 2U) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x1c8);
      }
      else {
        lVar4 = param_1 + 0x1ba;
      }
      uVar3 = *(ushort *)(lVar4 + (longlong)(int)uVar2 * 2);
      if ((uVar3 & 0xfc00) == 0xdc00) {
        *(uint *)(param_1 + 400) = uVar2 + 1;
      }
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 14261dae0 FUN_14261dae0 body=44 status=ok
// SIG undefined FUN_14261dae0(void)

undefined8 FUN_14261dae0(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x198) == 0) && (*(int *)(param_1 + 0x194) < 0)) {
    iVar1 = *(int *)(param_1 + 400) + -1;
    *(int *)(param_1 + 400) = iVar1;
    *(int *)(param_1 + 0x194) = iVar1;
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 14261db10 FUN_14261db10 body=1156 status=ok
// SIG undefined FUN_14261db10(void)

uint FUN_14261db10(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  
  do {
    switch(*(undefined4 *)(param_1 + 0x198)) {
    case 0:
      uVar7 = *(uint *)(param_1 + 400);
      lVar8 = (longlong)(int)uVar7;
      uVar4 = *(uint *)(param_1 + 0x194);
      if (uVar7 == uVar4) {
        return 0xffffffff;
      }
      lVar2 = *(longlong *)(param_1 + 0x188);
      bVar1 = *(byte *)(lVar2 + lVar8);
      if (((int)uVar4 < 0) && (bVar1 == 0)) {
        return 0xffffffff;
      }
      if (-1 < (char)bVar1) {
        uVar4 = (uint)bVar1;
        iVar5 = uVar7 + 1;
LAB_14261dea6:
        *(int *)(param_1 + 400) = iVar5;
        return uVar4;
      }
      uVar9 = lVar8 + 1;
      *(uint *)(param_1 + 400) = (uint)uVar9;
      bVar1 = *(byte *)(lVar2 + lVar8);
      uVar7 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((uint)uVar9 == uVar4) {
LAB_14261dbde:
          uVar9 = (ulonglong)uVar4;
LAB_14261dbe1:
          uVar7 = 0xfffd;
          goto LAB_14261dbe7;
        }
        if (0xdf < bVar1) {
          if (bVar1 < 0xf0) {
            uVar7 = uVar7 & 0xf;
            if (((byte)(&DAT_14bd49f86)[uVar7] >> (*(byte *)(lVar2 + uVar9) >> 5) & 1) != 0) {
              bVar10 = *(byte *)(lVar2 + uVar9) & 0x3f;
LAB_14261dd69:
              uVar6 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar6;
              *(uint *)(param_1 + 400) = uVar6;
              if (uVar6 == uVar4) goto LAB_14261dbde;
              uVar6 = (uint)bVar10 | uVar7 << 6;
              goto LAB_14261dd9a;
            }
          }
          else if (bVar1 < 0xf5) {
            bVar1 = *(byte *)(lVar2 + uVar9);
            if (((uint)(int)(char)(&DAT_14bd49f97)[bVar1 >> 4] >> (uVar7 - 0xf0 & 0x1f) & 1) != 0) {
              uVar9 = lVar8 + 2;
              *(uint *)(param_1 + 400) = (uint)uVar9;
              if ((uint)uVar9 == uVar4) goto LAB_14261dbde;
              bVar10 = *(char *)(lVar2 + uVar9) + 0x80;
              if (bVar10 < 0x40) {
                uVar7 = bVar1 & 0x3f | (uVar7 - 0xf0) * 0x40;
                uVar9 = uVar9 & 0xffffffff;
                goto LAB_14261dd69;
              }
              uVar9 = uVar9 & 0xffffffff;
            }
          }
          goto LAB_14261dbe1;
        }
        if (bVar1 < 0xc2) goto LAB_14261dbe1;
        uVar6 = uVar7 & 0x1f;
LAB_14261dd9a:
        uVar7 = *(byte *)(lVar2 + (int)uVar9) ^ 0x80;
        if (0x3f < (byte)uVar7) goto LAB_14261dbe1;
        uVar7 = uVar6 << 6 | uVar7;
        uVar11 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar11;
        *(uint *)(param_1 + 400) = uVar11;
        if (uVar7 < 0x10000) goto LAB_14261dbe7;
        uVar6 = (uVar6 >> 4) + 0xd7c0 & 0xffff;
      }
      else {
LAB_14261dbe7:
        uVar11 = (uint)uVar9;
        uVar6 = uVar7;
      }
      if (uVar6 < 0xc0) {
        return uVar7;
      }
      if ((ulonglong)(byte)(&DAT_149d5bf70)[uVar6 >> 5] == 0) {
        return uVar7;
      }
      if ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar6 >> 5] * 4) >>
           (uVar6 & 0x1f) & 1) == 0) {
        return uVar7;
      }
      if ((uVar7 & 0x1fff01) == 0xf01) {
LAB_14261dc2b:
        uVar4 = 0xfffffffd;
        if ((0xd7ff < uVar7) && (uVar4 = 0, 0xffefdfff < uVar7 - 0x110000)) {
          uVar4 = uVar7 < 0x10000 | 0xfffffffc;
        }
      }
      else {
        if (uVar11 == uVar4) {
          return uVar7;
        }
        cVar3 = FUN_14261d3e0(param_1);
        if (cVar3 == '\0') {
          return uVar7;
        }
        uVar4 = 0xffffffff;
        if ((0x7f < uVar7) && (uVar4 = 0xfffffffe, 0x7ff < uVar7)) goto LAB_14261dc2b;
      }
      *(uint *)(param_1 + 400) = uVar11 + uVar4;
      cVar3 = FUN_14261d550(param_1,param_2);
      if (cVar3 == '\0') {
        return 0xffffffff;
      }
      break;
    case 1:
      *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 0x198) = (uint)(*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1a0)) * 2;
      break;
    case 2:
      lVar8 = (longlong)*(int *)(param_1 + 400);
      if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1a0)) {
        lVar2 = *(longlong *)(param_1 + 0x188);
        uVar9 = lVar8 + 1;
        *(uint *)(param_1 + 400) = (uint)uVar9;
        bVar1 = *(byte *)(lVar2 + lVar8);
        uVar7 = (uint)bVar1;
        if (-1 < (char)bVar1) {
          return uVar7;
        }
        uVar4 = *(uint *)(param_1 + 0x194);
        if ((uint)uVar9 == uVar4) {
          return 0xfffd;
        }
        if (bVar1 < 0xe0) {
          if (bVar1 < 0xc2) {
            return 0xfffd;
          }
          uVar7 = uVar7 & 0x1f;
        }
        else {
          if (bVar1 < 0xf0) {
            uVar7 = uVar7 & 0xf;
            if (((byte)(&DAT_14bd49f86)[uVar7] >> (*(byte *)(lVar2 + uVar9) >> 5) & 1) == 0) {
              return 0xfffd;
            }
            bVar10 = *(byte *)(lVar2 + uVar9) & 0x3f;
          }
          else {
            if (0xf4 < bVar1) {
              return 0xfffd;
            }
            bVar1 = *(byte *)(lVar2 + uVar9);
            if (((uint)(int)(char)(&DAT_14bd49f97)[bVar1 >> 4] >> (uVar7 - 0xf0 & 0x1f) & 1) == 0) {
              return 0xfffd;
            }
            uVar9 = lVar8 + 2;
            *(uint *)(param_1 + 400) = (uint)uVar9;
            if ((uint)uVar9 == uVar4) {
              return 0xfffd;
            }
            bVar10 = *(char *)(lVar2 + uVar9) + 0x80;
            if (0x3f < bVar10) {
              return 0xfffd;
            }
            uVar7 = bVar1 & 0x3f | (uVar7 - 0xf0) * 0x40;
            uVar9 = uVar9 & 0xffffffff;
          }
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
          *(uint *)(param_1 + 400) = uVar6;
          if (uVar6 == uVar4) {
            return 0xfffd;
          }
          uVar7 = (uint)bVar10 | uVar7 << 6;
        }
        uVar4 = *(byte *)(lVar2 + (int)uVar9) ^ 0x80;
        if (0x3f < (byte)uVar4) {
          return 0xfffd;
        }
        uVar4 = uVar7 << 6 | uVar4;
        iVar5 = (int)uVar9 + 1;
        goto LAB_14261dea6;
      }
      goto LAB_14261dcc9;
    case 3:
      if (*(short *)(param_1 + 0x1b8) < 0) {
        iVar5 = *(int *)(param_1 + 0x1bc);
      }
      else {
        iVar5 = (int)*(short *)(param_1 + 0x1b8) >> 5;
      }
      if (*(int *)(param_1 + 400) != iVar5) {
        uVar4 = FUN_1424a8030(param_1 + 0x1b0);
        iVar5 = (*(int *)(param_1 + 400) - (uint)(uVar4 < 0x10000)) + 2;
        goto LAB_14261dea6;
      }
    default:
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x1a0);
LAB_14261dcc9:
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
  } while( true );
}



// FUNCTION 14261dfc0 FUN_14261dfc0 body=723 status=ok
// SIG undefined FUN_14261dfc0(void)

void FUN_14261dfc0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar1 = (int *)(param_1 + 400);
LAB_14261e029:
  do {
    while (iVar7 = *(int *)(param_1 + 0x198), iVar7 == 2) {
      iVar7 = *(int *)(param_1 + 400);
      if (iVar7 != *(int *)(param_1 + 0x19c)) {
        *(int *)(param_1 + 400) = iVar7 + -1;
        cVar5 = *(char *)(*(longlong *)(param_1 + 0x188) + -1 + (longlong)iVar7);
        if (cVar5 < '\0') {
          local_58 = 0xfd;
          FUN_142580f00(*(longlong *)(param_1 + 0x188),0,piVar1,cVar5);
        }
        goto LAB_14261e240;
      }
LAB_14261e16e:
      *(undefined4 *)(param_1 + 0x198) = 1;
    }
    if (iVar7 == 1) break;
    iVar3 = *piVar1;
    if ((2 < iVar7) && (iVar3 != 0)) {
      uVar6 = FUN_1424a8030(param_1 + 0x1b0,iVar3 + -1);
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + (uVar6 < 0x10000 | 0xfffffffe);
      goto LAB_14261e240;
    }
    if (iVar7 != 0) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x19c);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x19c);
      goto LAB_14261e16e;
    }
    *(int *)(param_1 + 0x1a0) = iVar3;
    *(uint *)(param_1 + 0x198) = (iVar3 != *(int *)(param_1 + 0x19c)) + 1;
  } while( true );
  lVar8 = (longlong)*piVar1;
  if (lVar8 == 0) goto LAB_14261e240;
  lVar4 = *(longlong *)(param_1 + 0x188);
  iVar7 = (int)(lVar8 + -1);
  if (-1 < *(char *)(lVar4 + -1 + lVar8)) {
    *piVar1 = iVar7;
LAB_14261e240:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  *piVar1 = iVar7;
  bVar2 = *(byte *)(lVar4 + lVar8 + -1);
  uVar11 = (ulonglong)bVar2;
  if ((char)bVar2 < '\0') {
    local_58 = 0xfd;
    uVar6 = FUN_142580f00(lVar4,0,piVar1,uVar11);
    uVar11 = (ulonglong)uVar6;
  }
  uVar10 = (uint)uVar11;
  uVar6 = (int)(uVar11 >> 10) + 0xd7c0U & 0xffff;
  if ((int)uVar10 < 0x10000) {
    uVar6 = uVar10;
  }
  if ((((int)uVar6 < 0x300) || ((ulonglong)(byte)(&DAT_149d5b650)[uVar6 >> 5] == 0)) ||
     ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar6 >> 5] * 4) >>
       (uVar6 & 0x1f) & 1) == 0)) goto LAB_14261e240;
  if ((uVar10 & 0x1fff01) == 0xf01) {
LAB_14261e0dd:
    iVar7 = 3;
    if ((0xd7ff < uVar10) && (iVar7 = 0, 0xffefdfff < uVar10 - 0x110000)) {
      iVar7 = 4 - (uint)(uVar10 < 0x10000);
    }
  }
  else {
    lVar8 = (longlong)*piVar1;
    if ((lVar8 == 0) || (lVar4 = *(longlong *)(param_1 + 0x188), -1 < *(char *)(lVar4 + -1 + lVar8))
       ) goto LAB_14261e240;
    local_4c = (undefined4)(lVar8 + -1);
    bVar2 = *(byte *)(lVar4 + lVar8 + -1);
    uVar6 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      local_58 = 0xfd;
      uVar6 = FUN_142580f00(lVar4,0,&local_4c,bVar2);
    }
    uVar9 = (uVar6 >> 10) + 0xd7c0 & 0xffff;
    if ((int)uVar6 < 0x10000) {
      uVar9 = uVar6;
    }
    if ((((int)uVar9 < 0xc0) || ((ulonglong)(byte)(&DAT_149d5bf70)[uVar9 >> 5] == 0)) ||
       ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar9 >> 5] * 4) >>
         (uVar9 & 0x1f) & 1) == 0)) goto LAB_14261e240;
    iVar7 = 1;
    if ((0x7f < uVar10) && (iVar7 = 2, 0x7ff < uVar10)) goto LAB_14261e0dd;
  }
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + iVar7;
  cVar5 = FUN_14261e2c0(param_1,param_2);
  if (cVar5 == '\0') goto LAB_14261e240;
  goto LAB_14261e029;
}



// FUNCTION 14261e2c0 FUN_14261e2c0 body=733 status=ok
// SIG undefined FUN_14261e2c0(void)

ulonglong FUN_14261e2c0(longlong param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined **local_98;
  short local_90;
  int local_8c;
  int *local_58;
  int local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    uVar7 = 0;
    goto LAB_14261e544;
  }
  piVar1 = (int *)(param_1 + 400);
  iVar8 = *(int *)(param_1 + 400);
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  uVar5 = 0;
  local_58 = param_2;
  local_4c = iVar8;
LAB_14261e320:
  *(int *)(param_1 + 400) = iVar8 + -1;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x188) + -1 + (longlong)iVar8);
  uVar4 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar4 = FUN_142580f00(*(longlong *)(param_1 + 0x188),0,piVar1,bVar2,0xfd);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  if ((int)uVar4 < (int)(uint)*(ushort *)(lVar3 + 8)) {
    uVar6 = 0;
  }
  else {
    if ((int)uVar4 < 0x10000) {
      bVar2 = *(byte *)(*(longlong *)(lVar3 + 0x38) + (longlong)((int)uVar4 >> 8));
      uVar6 = 0;
      if ((bVar2 == 0) || ((1 << ((byte)uVar4 >> 5) & (uint)bVar2) == 0)) goto LAB_14261e3b2;
    }
    uVar6 = FUN_1425d5c90(lVar3,uVar4);
  }
LAB_14261e3b2:
  if (((uVar6 & 0xff) != 0) || (iVar8 == local_4c)) {
    FUN_1424a7d60(&local_98,uVar4);
    uVar4 = uVar6 & 0xffff;
    if (((uVar6 & 0xff) != 0) &&
       (((((char)uVar5 != '\0' && ((ushort)uVar5 < ((ushort)uVar6 & 0xff))) || (uVar4 == 0x8184)) ||
        (uVar4 == 0x8182)))) {
      goto LAB_14261e420;
    }
    iVar8 = *piVar1;
    if ((uVar4 < 0x100) || (uVar5 = uVar4 >> 8, iVar8 == 0)) goto LAB_14261e4d4;
    goto LAB_14261e320;
  }
  *piVar1 = iVar8;
LAB_14261e4d4:
  *(int *)(param_1 + 0x19c) = iVar8;
  *(int *)(param_1 + 400) = local_4c;
  *(undefined4 *)(param_1 + 0x198) = 2;
LAB_14261e4ee:
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_14261e53b;
LAB_14261e420:
  if ((uVar6 & 0xffff) < 0x100) goto LAB_14261e4f5;
  iVar8 = *piVar1;
  if ((longlong)iVar8 == 0) goto LAB_14261e4f5;
  *(int *)(param_1 + 400) = iVar8 + -1;
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x188) + -1 + (longlong)iVar8);
  uVar5 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar5 = FUN_142580f00(*(longlong *)(param_1 + 0x188),0,piVar1,bVar2,0xfd);
  }
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  if ((int)uVar5 < (int)(uint)*(ushort *)(lVar3 + 8)) {
LAB_14261e4f3:
    *piVar1 = iVar8;
    goto LAB_14261e4f5;
  }
  if ((int)uVar5 < 0x10000) {
    bVar2 = *(byte *)(*(longlong *)(lVar3 + 0x38) + (longlong)((int)uVar5 >> 8));
    if ((bVar2 == 0) || ((1 << ((byte)uVar5 >> 5) & (uint)bVar2) == 0)) goto LAB_14261e4f3;
  }
  uVar6 = FUN_1425d5c90(lVar3,uVar5);
  if ((short)uVar6 == 0) goto LAB_14261e4f3;
  FUN_1424a7d60(&local_98);
  goto LAB_14261e420;
LAB_14261e4f5:
  if (-1 < local_90) {
    local_8c = (int)local_90 >> 5;
  }
  FUN_1424a98a0(&local_98,0,local_8c);
  FUN_1425d0e70(*(undefined8 *)(param_1 + 0x1a8),&local_98,param_1 + 0x1b0,local_58);
  if (*local_58 < 1) {
    *(int *)(param_1 + 0x1a0) = local_4c;
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x198) = 3;
    if (*(short *)(param_1 + 0x1b8) < 0) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1bc);
    }
    else {
      *(int *)(param_1 + 400) = (int)*(short *)(param_1 + 0x1b8) >> 5;
    }
    goto LAB_14261e4ee;
  }
  uVar7 = 0;
LAB_14261e53b:
  FUN_140859a90(&local_98);
LAB_14261e544:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14261e5b0 Unwind@14261e5b0 body=55 status=ok
// SIG undefined Unwind@14261e5b0(void)

void Unwind_14261e5b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 14261e5f0 FUN_14261e5f0 body=65 status=ok
// SIG undefined FUN_14261e5f0(void)

void FUN_14261e5f0(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_14261db10(param_1,param_3);
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14261e640 FUN_14261e640 body=65 status=ok
// SIG undefined FUN_14261e640(void)

void FUN_14261e640(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_14261dfc0(param_1,param_3);
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14261e690 thunk_FUN_1426191b0 body=5 status=ok
// SIG undefined thunk_FUN_1426191b0(void)

void thunk_FUN_1426191b0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = icu_64::CollationIterator::vftable;
  lVar1 = param_1[0x2f];
  if (lVar1 != 0) {
    FUN_140859a90(lVar1 + 0x40);
    FUN_140859a90(lVar1);
    FUN_1401773f0(lVar1);
  }
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    FUN_1424da110(param_1[4]);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14261e6a0 FUN_14261e6a0 body=41 status=ok
// SIG undefined FUN_14261e6a0(void)

void FUN_14261e6a0(longlong param_1,undefined4 param_2)

{
  FUN_1426192c0();
                    /* WARNING: Could not recover jumptable at 0x00014261e6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))(*(longlong *)(param_1 + 0x188),param_2,0);
  return;
}



// FUNCTION 14261e6d0 FUN_14261e6d0 body=19 status=ok
// SIG undefined FUN_14261e6d0(void)

void FUN_14261e6d0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014261e6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(longlong *)(param_1 + 0x188),1);
  return;
}



// FUNCTION 14261e6f0 FUN_14261e6f0 body=75 status=ok
// SIG undefined FUN_14261e6f0(void)

undefined4 FUN_14261e6f0(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
  *param_2 = uVar1;
  if ((int)uVar1 < 0) {
    uVar2 = 0xc0;
  }
  else {
    uVar2 = *(undefined4 *)
             ((*(longlong **)(param_1 + 8))[2] +
             ((ulonglong)(uVar1 & 0x1f) +
             (ulonglong)*(ushort *)(**(longlong **)(param_1 + 8) + (ulonglong)(uVar1 >> 5) * 2) * 4)
             * 4);
  }
  return uVar2;
}



// FUNCTION 14261e740 FUN_14261e740 body=58 status=ok
// SIG undefined FUN_14261e740(void)

uint FUN_14261e740(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
  if ((-1 < (int)uVar1) && ((uVar1 & 0xfffffc00) != 0xdc00)) {
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
  }
  return uVar1;
}



// FUNCTION 14261e780 FUN_14261e780 body=12 status=ok
// SIG undefined FUN_14261e780(void)

void FUN_14261e780(longlong param_1)

{
  FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
  return;
}



// FUNCTION 14261e790 FUN_14261e790 body=12 status=ok
// SIG undefined FUN_14261e790(void)

void FUN_14261e790(longlong param_1)

{
  FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188));
  return;
}



// FUNCTION 14261e7a0 FUN_14261e7a0 body=49 status=ok
// SIG undefined FUN_14261e7a0(void)

void FUN_14261e7a0(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14261e7e0 FUN_14261e7e0 body=49 status=ok
// SIG undefined FUN_14261e7e0(void)

void FUN_14261e7e0(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188));
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14261e820 FUN_14261e820 body=43 status=ok
// SIG undefined FUN_14261e820(void)

void FUN_14261e820(undefined8 *param_1)

{
  *param_1 = icu_64::FCDUIterCollationIterator::vftable;
  FUN_140859a90(param_1 + 0x35);
  FUN_1426191b0(param_1);
  return;
}



// FUNCTION 14261e850 FUN_14261e850 body=54 status=ok
// SIG undefined FUN_14261e850(void)

void FUN_14261e850(longlong param_1,undefined4 param_2)

{
  FUN_1426192c0();
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))(*(longlong *)(param_1 + 0x188),param_2,0);
  *(undefined4 *)(param_1 + 0x194) = param_2;
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}



// FUNCTION 14261e890 FUN_14261e890 body=59 status=ok
// SIG undefined FUN_14261e890(void)

ulonglong FUN_14261e890(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 400) < 2) {
                    /* WARNING: Could not recover jumptable at 0x00014261e8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(longlong *)(param_1 + 0x188),1);
    return uVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x198);
  if (*(int *)(param_1 + 400) != 2) {
    if (uVar1 == 0) {
      return (ulonglong)*(uint *)(param_1 + 0x194);
    }
    uVar1 = *(uint *)(param_1 + 0x19c);
  }
  return (ulonglong)uVar1;
}



// FUNCTION 14261e8d0 FUN_14261e8d0 body=565 status=ok
// SIG undefined FUN_14261e8d0(void)

undefined4 FUN_14261e8d0(longlong param_1,uint *param_2,undefined8 param_3)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
LAB_14261e92d:
  do {
    while (iVar5 = *(int *)(param_1 + 400), iVar5 == 2) {
      if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x19c)) {
        uVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
        *param_2 = uVar4;
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
LAB_14261eadd:
        return *(undefined4 *)
                ((*(longlong **)(param_1 + 8))[2] +
                ((ulonglong)(*param_2 & 0x1f) +
                (ulonglong)
                *(ushort *)(**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2) * 4)
                * 4);
      }
LAB_14261ea88:
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (iVar5 != 0) {
      if (2 < iVar5) {
        sVar1 = *(short *)(param_1 + 0x1b0);
        if (sVar1 < 0) {
          uVar4 = *(uint *)(param_1 + 0x1b4);
        }
        else {
          uVar4 = (int)sVar1 >> 5;
        }
        uVar2 = *(uint *)(param_1 + 0x198);
        if (uVar2 != uVar4) {
          *(uint *)(param_1 + 0x198) = uVar2 + 1;
          uVar6 = 0xffff;
          if (uVar2 < uVar4) {
            if (((int)sVar1 & 2U) == 0) {
              lVar7 = *(longlong *)(param_1 + 0x1c0);
            }
            else {
              lVar7 = param_1 + 0x1b2;
            }
            uVar6 = (uint)*(ushort *)(lVar7 + (longlong)(int)uVar2 * 2);
          }
          *param_2 = uVar6;
          goto LAB_14261eadd;
        }
      }
      if (iVar5 == 4) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))
                  (*(longlong *)(param_1 + 0x188),
                   *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x194),1);
      }
      else if (iVar5 == 1) {
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))
                          (*(longlong *)(param_1 + 0x188),1);
        *(int *)(param_1 + 0x198) = iVar5;
        *(int *)(param_1 + 0x194) = iVar5;
        *(uint *)(param_1 + 400) = (uint)(iVar5 != *(int *)(param_1 + 0x19c)) * 2;
        goto LAB_14261e92d;
      }
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x19c);
      goto LAB_14261ea88;
    }
    uVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
    *param_2 = uVar4;
    if ((int)uVar4 < 0) {
      return 0xc0;
    }
    if ((((uVar4 < 0xc0) || ((ulonglong)(byte)(&DAT_149d5bf70)[uVar4 >> 5] == 0)) ||
        ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar4 >> 5] * 4) >>
          (uVar4 & 0x1f) & 1) == 0)) ||
       (((uVar4 & 0x1fff01) != 0xf01 &&
        (((uVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x40))(), (int)uVar4 < 0x300 ||
          ((ulonglong)(byte)(&DAT_149d5b650)[uVar4 >> 5] == 0)) ||
         ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar4 >> 5] * 4) >>
           (uVar4 & 0x1f) & 1) == 0)))))) goto LAB_14261eadd;
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
    cVar3 = FUN_14261eb20(param_1,param_3);
    if (cVar3 == '\0') {
      *param_2 = 0xffffffff;
      return 0xc0;
    }
  } while( true );
}



// FUNCTION 14261eb20 FUN_14261eb20 body=659 status=ok
// SIG undefined FUN_14261eb20(void)

ulonglong FUN_14261eb20(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined **local_90;
  ushort local_88;
  int local_84;
  int *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    uVar9 = 0;
    goto LAB_14261ed6b;
  }
  local_50 = param_2;
  uVar5 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(longlong *)(param_1 + 0x188),1);
  *(undefined4 *)(param_1 + 0x198) = uVar5;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  uVar8 = 0;
  do {
    uVar6 = FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
    if ((int)uVar6 < 0) break;
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    if (uVar6 < *(ushort *)(lVar2 + 8)) {
LAB_14261ebb6:
      uVar4 = 0;
      uVar7 = 0;
LAB_14261ec16:
      bVar3 = true;
      if (0x1f < local_88) {
        FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188));
        break;
      }
    }
    else {
      if (uVar6 < 0x10000) {
        bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)(uVar6 >> 8));
        uVar4 = 0;
        if (bVar1 == 0) goto LAB_14261ebb6;
        uVar7 = 0;
        if ((1 << ((byte)uVar6 >> 5) & (uint)bVar1) != 0) goto LAB_14261ebf7;
        goto LAB_14261ec16;
      }
LAB_14261ebf7:
      uVar7 = FUN_1425d5c90(lVar2,uVar6);
      uVar4 = (ushort)((uVar7 & 0xffff) >> 8);
      if ((uVar7 & 0xffff) < 0x100) goto LAB_14261ec16;
      bVar3 = false;
    }
    FUN_1424a7d60(&local_90,uVar6);
    if ((!bVar3) &&
       (((uVar4 < ((ushort)uVar8 & 0xff) || ((uVar7 & 0xffff) == 0x8184)) ||
        ((uVar7 & 0xffff) == 0x8182)))) {
      goto LAB_14261ec70;
    }
    uVar8 = uVar7;
  } while ((char)uVar7 != '\0');
  if (-1 < (short)local_88) {
    local_84 = (int)(short)local_88 >> 5;
  }
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x198) + local_84;
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))(*(longlong *)(param_1 + 0x188),-local_84,1);
  *(undefined4 *)(param_1 + 400) = 2;
LAB_14261ed5f:
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_14261ed62;
LAB_14261ec70:
  uVar8 = FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
  if ((int)uVar8 < 0) goto LAB_14261ecf0;
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  if (uVar8 < *(ushort *)(lVar2 + 8)) {
LAB_14261ece4:
    FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188));
    goto LAB_14261ecf0;
  }
  if (uVar8 < 0x10000) {
    bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)(uVar8 >> 8));
    if ((bVar1 == 0) || ((1 << ((byte)(uVar8 >> 5) & 7) & (uint)bVar1) == 0)) goto LAB_14261ece4;
  }
  uVar4 = FUN_1425d5c90(lVar2,uVar8);
  if (uVar4 < 0x100) goto LAB_14261ece4;
  FUN_1424a7d60(&local_90,uVar8);
  goto LAB_14261ec70;
LAB_14261ecf0:
  FUN_1425d0e70(*(undefined8 *)(param_1 + 0x1a0),&local_90,param_1 + 0x1a8,local_50);
  if (*local_50 < 1) {
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x198);
    if (-1 < (short)local_88) {
      local_84 = (int)(short)local_88 >> 5;
    }
    *(int *)(param_1 + 0x19c) = local_84 + *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 400) = 3;
    *(undefined4 *)(param_1 + 0x198) = 0;
    goto LAB_14261ed5f;
  }
  uVar9 = 0;
LAB_14261ed62:
  FUN_140859a90(&local_90);
LAB_14261ed6b:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14261edc0 Unwind@14261edc0 body=52 status=ok
// SIG undefined Unwind@14261edc0(void)

void Unwind_14261edc0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14261ee00 FUN_14261ee00 body=173 status=ok
// SIG undefined FUN_14261ee00(void)

ulonglong FUN_14261ee00(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 400) < 3) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
    uVar6 = (ulonglong)uVar3;
    if ((uVar3 & 0xfffffc00) == 0xdc00) {
      if (*(int *)(param_1 + 400) == 2) {
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
      }
    }
    else if (-1 < (int)uVar3) {
      (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x198);
    sVar1 = *(short *)(param_1 + 0x1b0);
    if (sVar1 < 0) {
      uVar5 = *(uint *)(param_1 + 0x1b4);
    }
    else {
      uVar5 = (int)sVar1 >> 5;
    }
    uVar6 = CONCAT62((int6)((ulonglong)unaff_RDI >> 0x10),0xffff);
    if (uVar3 < uVar5) {
      if (((int)sVar1 & 2U) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x1c0);
      }
      else {
        lVar4 = param_1 + 0x1b2;
      }
      uVar2 = *(ushort *)(lVar4 + (longlong)(int)uVar3 * 2);
      uVar6 = (ulonglong)uVar2;
      if ((uVar2 & 0xfc00) == 0xdc00) {
        *(uint *)(param_1 + 0x198) = uVar3 + 1;
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14261eeb0 FUN_14261eeb0 body=570 status=ok
// SIG undefined FUN_14261eeb0(void)

uint FUN_14261eeb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
LAB_14261ef0d:
  do {
    while (iVar4 = *(int *)(param_1 + 400), iVar4 == 2) {
      if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x19c)) {
        uVar2 = FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
LAB_14261f0e2:
        *(uint *)(param_1 + 0x198) = (*(int *)(param_1 + 0x198) - (uint)(uVar2 < 0x10000)) + 2;
        return uVar2;
      }
LAB_14261f071:
      *(undefined4 *)(param_1 + 400) = 0;
    }
    if (iVar4 != 0) {
      if (2 < iVar4) {
        if (*(short *)(param_1 + 0x1b0) < 0) {
          iVar5 = *(int *)(param_1 + 0x1b4);
        }
        else {
          iVar5 = (int)*(short *)(param_1 + 0x1b0) >> 5;
        }
        if (*(int *)(param_1 + 0x198) != iVar5) {
          uVar2 = FUN_1424a8030(param_1 + 0x1a8);
          goto LAB_14261f0e2;
        }
      }
      if (iVar4 == 4) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))
                  (*(longlong *)(param_1 + 0x188),
                   *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x194),1);
      }
      else if (iVar4 == 1) {
        iVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))
                          (*(longlong *)(param_1 + 0x188),1);
        *(int *)(param_1 + 0x198) = iVar4;
        *(int *)(param_1 + 0x194) = iVar4;
        *(uint *)(param_1 + 400) = (uint)(iVar4 != *(int *)(param_1 + 0x19c)) * 2;
        goto LAB_14261ef0d;
      }
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x19c);
      goto LAB_14261f071;
    }
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((((uVar2 < 0xc0) || ((ulonglong)(byte)(&DAT_149d5bf70)[uVar2 >> 5] == 0)) ||
        ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar2 >> 5] * 4) >>
          (uVar2 & 0x1f) & 1) == 0)) ||
       (((uVar2 & 0x1fff01) != 0xf01 &&
        (((uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x40))(), (int)uVar3 < 0x300 ||
          ((ulonglong)(byte)(&DAT_149d5b650)[uVar3 >> 5] == 0)) ||
         ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar3 >> 5] * 4) >>
           (uVar3 & 0x1f) & 1) == 0)))))) {
      if ((uVar2 & 0xfffffc00) != 0xd800) {
        return uVar2;
      }
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
      if ((uVar3 & 0xfffffc00) == 0xdc00) {
        return uVar2 * 0x400 + uVar3 + 0xfca02400;
      }
      if ((int)uVar3 < 0) {
        return uVar2;
      }
      (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
      return uVar2;
    }
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
    cVar1 = FUN_14261eb20(param_1,param_2);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14261f110 FUN_14261f110 body=600 status=ok
// SIG undefined FUN_14261f110(void)

uint FUN_14261f110(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
LAB_14261f16d:
  do {
    while (iVar4 = *(int *)(param_1 + 400), iVar4 == 2) {
      if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x194)) {
        uVar2 = FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188));
LAB_14261f33b:
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + (uVar2 < 0x10000 | 0xfffffffe);
        return uVar2;
      }
LAB_14261f167:
      *(undefined4 *)(param_1 + 400) = 1;
    }
    if (iVar4 != 1) {
      if ((2 < iVar4) && (*(int *)(param_1 + 0x198) != 0)) {
        uVar2 = FUN_1424a8030(param_1 + 0x1a8,*(int *)(param_1 + 0x198) + -1);
        goto LAB_14261f33b;
      }
      if (iVar4 == 3) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))
                  (*(longlong *)(param_1 + 0x188),
                   *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x19c),1);
      }
      else if (iVar4 == 0) {
        iVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))
                          (*(longlong *)(param_1 + 0x188),1);
        *(int *)(param_1 + 0x198) = iVar4;
        *(int *)(param_1 + 0x19c) = iVar4;
        *(uint *)(param_1 + 400) = (iVar4 != *(int *)(param_1 + 0x194)) + 1;
        goto LAB_14261f16d;
      }
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x194);
      goto LAB_14261f167;
    }
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
    if ((int)uVar2 < 0) {
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined8 *)(param_1 + 400) = 2;
      return 0xffffffff;
    }
    if (uVar2 < 0x300) {
      return uVar2;
    }
    if ((ulonglong)(byte)(&DAT_149d5b650)[uVar2 >> 5] == 0) {
      return uVar2;
    }
    if ((*(uint *)(&DAT_149d5be50 + (ulonglong)(byte)(&DAT_149d5b650)[uVar2 >> 5] * 4) >>
         (uVar2 & 0x1f) & 1) == 0) {
      return uVar2;
    }
    uVar3 = 0xffffffff;
    if (((uVar2 & 0x1fff01) != 0xf01) &&
       (((uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(), (int)uVar3 < 0xc0 ||
         ((ulonglong)(byte)(&DAT_149d5bf70)[uVar3 >> 5] == 0)) ||
        ((*(uint *)(&DAT_149d5c770 + (ulonglong)(byte)(&DAT_149d5bf70)[uVar3 >> 5] * 4) >>
          (uVar3 & 0x1f) & 1) == 0)))) {
      if ((uVar2 & 0xfffffc00) == 0xdc00) {
        if ((int)uVar3 < 0) {
          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))();
        }
        if ((uVar3 & 0xfffffc00) == 0xd800) {
          return uVar2 + uVar3 * 0x400 + 0xfca02400;
        }
      }
      if (-1 < (int)uVar3) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
        return uVar2;
      }
      return uVar2;
    }
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
    if (-1 < (int)uVar3) {
      (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))();
    }
    cVar1 = FUN_14261f380(param_1,param_2);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14261f380 FUN_14261f380 body=729 status=ok
// SIG undefined FUN_14261f380(void)

ulonglong FUN_14261f380(longlong param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined **local_90;
  ushort local_88;
  int local_84;
  int *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    uVar8 = 0;
    goto LAB_14261f5f1;
  }
  local_50 = param_2;
  uVar6 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(longlong *)(param_1 + 0x188),1);
  *(undefined4 *)(param_1 + 0x198) = uVar6;
  local_90 = &PTR_FUN_149e18960;
  local_88 = 2;
  uVar9 = 0;
  do {
    uVar7 = FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188));
    if ((int)uVar7 < 0) break;
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    if (uVar7 < *(ushort *)(lVar2 + 8)) {
      uVar5 = 0;
LAB_14261f470:
      if (0x1f < local_88) {
        FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
        break;
      }
      bVar4 = true;
      uVar10 = 0;
    }
    else {
      if (uVar7 < 0x10000) {
        bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)(uVar7 >> 8));
        uVar5 = 0;
        if ((bVar1 == 0) || ((1 << ((byte)uVar7 >> 5) & (uint)bVar1) == 0)) goto LAB_14261f470;
      }
      uVar5 = FUN_1425d5c90(lVar2,uVar7);
      uVar10 = uVar5 & 0xff;
      if ((uVar5 & 0xff) == 0) goto LAB_14261f470;
      bVar4 = false;
    }
    FUN_1424a7d60(&local_90,uVar7);
    if ((!bVar4) &&
       (((((char)uVar9 != '\0' && (uVar9 < uVar10)) || (uVar5 == 0x8184)) || (uVar5 == 0x8182)))) {
      goto LAB_14261f4c0;
    }
    uVar9 = uVar5 >> 8;
  } while (0xff < uVar5);
  if (-1 < (short)local_88) {
    local_84 = (int)(short)local_88 >> 5;
  }
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x198) - local_84;
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))(*(longlong *)(param_1 + 0x188),local_84,1);
  *(undefined4 *)(param_1 + 400) = 2;
LAB_14261f591:
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  goto LAB_14261f5e8;
LAB_14261f4c0:
  if ((uVar5 < 0x100) || (uVar7 = FUN_1424e5e30(*(undefined8 *)(param_1 + 0x188)), (int)uVar7 < 0))
  goto LAB_14261f5a2;
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  if (*(ushort *)(lVar2 + 8) <= uVar7) {
    if (uVar7 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (ulonglong)(uVar7 >> 8));
      if ((bVar1 == 0) || ((1 << ((byte)(uVar7 >> 5) & 7) & (uint)bVar1) == 0)) goto LAB_14261f596;
    }
    uVar5 = FUN_1425d5c90(lVar2,uVar7);
    if (uVar5 == 0) goto LAB_14261f596;
    FUN_1424a7d60(&local_90);
    goto LAB_14261f4c0;
  }
LAB_14261f596:
  FUN_1424e5dd0(*(undefined8 *)(param_1 + 0x188));
LAB_14261f5a2:
  iVar3 = local_84;
  if (-1 < (short)local_88) {
    iVar3 = (int)(short)local_88 >> 5;
  }
  FUN_1424a98a0(&local_90,0,iVar3);
  FUN_1425d0e70(*(undefined8 *)(param_1 + 0x1a0),&local_90,param_1 + 0x1a8,local_50);
  if (*local_50 < 1) {
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x198);
    if (-1 < (short)local_88) {
      local_84 = (int)(short)local_88 >> 5;
    }
    *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x198) - local_84;
    *(undefined4 *)(param_1 + 400) = 4;
    if (*(short *)(param_1 + 0x1b0) < 0) {
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1b4);
    }
    else {
      *(int *)(param_1 + 0x198) = (int)*(short *)(param_1 + 0x1b0) >> 5;
    }
    goto LAB_14261f591;
  }
  uVar8 = 0;
LAB_14261f5e8:
  FUN_140859a90(&local_90);
LAB_14261f5f1:
  return uVar8 & 0xffffffff;
}



// FUNCTION 14261f660 Unwind@14261f660 body=52 status=ok
// SIG undefined Unwind@14261f660(void)

void Unwind_14261f660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14261f6a0 FUN_14261f6a0 body=65 status=ok
// SIG undefined FUN_14261f6a0(void)

void FUN_14261f6a0(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_14261eeb0(param_1,param_3);
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14261f6f0 FUN_14261f6f0 body=65 status=ok
// SIG undefined FUN_14261f6f0(void)

void FUN_14261f6f0(undefined8 param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      iVar2 = FUN_14261f110(param_1,param_3);
      if (iVar2 < 0) {
        return;
      }
      bVar1 = 1 < param_2;
      param_2 = param_2 + -1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 14261f740 FUN_14261f740 body=1073 status=ok
// SIG undefined FUN_14261f740(void)

void FUN_14261f740(uint param_1,longlong param_2,int param_3,longlong *param_4)

{
  ushort uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  char cVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint *local_a0;
  int local_90;
  uint local_8c;
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < param_3) {
    local_90 = param_3 * 2;
    iVar4 = 0;
    do {
      local_a0 = &local_8c;
      local_a8 = 0x40;
      pcVar2 = (char *)(**(code **)(*param_4 + 0x10))(param_4,1,local_90,local_88);
      if ((int)local_8c < 0x10) {
        local_8c = 0x40;
        pcVar2 = local_88;
      }
      pcVar7 = pcVar2;
      if (iVar4 < param_3) {
        do {
          if (pcVar2 + ((ulonglong)local_8c - 4) < pcVar7) break;
          uVar6 = param_1 & 0xffffff80 ^ 0xffffffb0;
          if (0xffffadff < param_1 - 0xa000) {
            uVar6 = 0xffff89ac;
          }
          iVar5 = iVar4 + 1;
          uVar1 = *(ushort *)(param_2 + (longlong)iVar4 * 2);
          param_1 = (uint)uVar1;
          if ((((uVar1 & 0xfc00) == 0xd800) && (iVar5 != param_3)) &&
             (uVar9 = (uint)*(ushort *)(param_2 + (longlong)iVar5 * 2), (uVar9 & 0xfc00) == 0xdc00))
          {
            iVar5 = iVar4 + 2;
            param_1 = (uint)uVar1 * 0x400 + uVar9 + 0xfca02400;
LAB_14261f8c3:
            uVar6 = uVar6 + param_1;
            iVar4 = iVar5;
            if ((int)uVar6 < -0x50) {
              if (uVar6 < 0xffffd654) {
                uVar9 = -uVar6 % 0xfd;
                cVar3 = -(char)uVar9;
                if (uVar9 == 0) {
                  cVar3 = '\x03';
                }
                uVar9 = (uint)(uVar9 != 0) + -uVar6 / 0xfd;
                if (0xfffd0eed < uVar6) {
                  pcVar7[2] = cVar3;
                  uVar6 = (uVar9 & 0xffff) / 0xfd;
                  iVar5 = uVar9 + uVar6 * -0xfd;
                  bVar10 = (byte)uVar6;
                  cVar3 = -(char)iVar5;
                  bVar8 = ~bVar10;
                  if ((short)iVar5 == 0) {
                    cVar3 = '\x03';
                    bVar8 = -bVar10;
                  }
                  pcVar7[1] = cVar3;
                  cVar3 = bVar8 + 7;
                  goto LAB_14261fa8a;
                }
                pcVar7[3] = cVar3;
                uVar6 = uVar9 % 0xfd;
                cVar3 = -(char)uVar6;
                if (uVar6 == 0) {
                  cVar3 = '\x03';
                }
                uVar6 = (uint)(uVar6 != 0) + uVar9 / 0xfd;
                iVar5 = uVar6 + ((uVar6 & 0xffff) / 0xfd) * -0xfd;
                cVar11 = -(char)iVar5;
                if ((short)iVar5 == 0) {
                  cVar11 = '\x03';
                }
                pcVar7[2] = cVar3;
                pcVar7[1] = cVar11;
                *pcVar7 = '\x03';
LAB_14261fb67:
                pcVar7 = pcVar7 + 4;
              }
              else {
                uVar9 = (-uVar6 & 0xffff) / 0xfd;
                iVar5 = -uVar6 + uVar9 * -0xfd;
                cVar3 = -(char)iVar5;
                bVar10 = (byte)uVar9;
                bVar8 = ~bVar10;
                if ((short)iVar5 == 0) {
                  cVar3 = '\x03';
                  bVar8 = -bVar10;
                }
                *pcVar7 = bVar8 + 0x31;
LAB_14261f975:
                pcVar7[1] = cVar3;
                pcVar7 = pcVar7 + 2;
              }
            }
            else {
              cVar3 = (char)uVar6;
              if ((int)uVar6 < 0x51) {
                *pcVar7 = cVar3 + -0x7f;
                goto joined_r0x00014261f8a6;
              }
              if (uVar6 < 0x29ac) {
                cVar11 = (char)((uVar6 & 0xffff) / 0xfd);
                *pcVar7 = cVar11 + -0x2e;
                cVar3 = cVar3 + cVar11 * '\x03' + '\x03';
                goto LAB_14261f975;
              }
              cVar11 = cVar3 + (char)(uVar6 / 0xfd) * '\x03' + '\x03';
              cVar3 = (char)(uVar6 / 0xfd);
              if (0x2f111 < uVar6) {
                pcVar7[3] = cVar11;
                pcVar7[2] = cVar3 + (char)((uVar6 / 0xfd) / 0xfd) * '\x03' + '\x03';
                pcVar7[1] = (char)(uVar6 / 0xfa09) +
                            (char)((uVar6 / 0xfa09 & 0xffff) / 0xfd) * '\x03' + '\x03';
                *pcVar7 = -1;
                goto LAB_14261fb67;
              }
              pcVar7[2] = cVar11;
              pcVar7[1] = cVar3 + (char)((uVar6 / 0xfd & 0xffff) / 0xfd) * '\x03' + '\x03';
              cVar3 = (char)(uVar6 / 0xfa09) + -4;
LAB_14261fa8a:
              *pcVar7 = cVar3;
              pcVar7 = pcVar7 + 3;
            }
          }
          else {
            if (uVar1 != 0xfffe) goto LAB_14261f8c3;
            *pcVar7 = '\x02';
            param_1 = 0;
joined_r0x00014261f8a6:
            pcVar7 = pcVar7 + 1;
            iVar4 = iVar5;
          }
        } while (iVar4 < param_3);
      }
      (**(code **)(*param_4 + 8))(param_4,pcVar2,(int)pcVar7 - (int)pcVar2);
    } while (iVar4 < param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14261fbc0 FUN_14261fbc0 body=8 status=ok
// SIG undefined FUN_14261fbc0(void)

undefined * FUN_14261fbc0(void)

{
  return &DAT_14c7fc3dc;
}



// FUNCTION 14261fbd0 FUN_14261fbd0 body=68 status=ok
// SIG undefined FUN_14261fbd0(void)

void FUN_14261fbd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x28);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14261fc20 FUN_14261fc20 body=79 status=ok
// SIG undefined FUN_14261fc20(void)

ulonglong FUN_14261fc20(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0x1c) < '\0') && (lVar2 = *(longlong *)(param_1 + 0x20), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 8);
    if (iVar1 != 0) {
      uVar3 = 0;
      uVar4 = (uint)(*(int *)(param_1 + 0x18) != 0) + *(int *)(*(longlong *)(param_1 + 8) + 0x18);
      if (((-1 < (int)uVar4) && (0 < iVar1)) && ((int)uVar4 < iVar1)) {
        uVar3 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar4 * 4);
      }
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014261fc2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  return uVar3;
}



// FUNCTION 14261fc70 FUN_14261fc70 body=207 status=ok
// SIG undefined FUN_14261fc70(void)

uint FUN_14261fc70(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  if (*param_2 < 1) {
    if ((char)*(byte *)(param_1 + 0x1c) < '\x02') {
      if (1 < *(byte *)(param_1 + 0x1c)) {
        *param_2 = 0x1b;
        return 0xffffffff;
      }
      *(undefined1 *)(param_1 + 0x1c) = 2;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 != 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        return uVar1;
      }
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar2 + 0x170) == *(int *)(lVar2 + 0x18)) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined4 *)(lVar2 + 0x170) = 0;
      lVar2 = *(longlong *)(param_1 + 8);
    }
    lVar2 = FUN_14255e910(lVar2);
    if (lVar2 != 0x101000100) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
      uVar1 = (uint)((ulonglong)lVar2 >> 8);
      uVar4 = uVar1 & 0xff | (uint)((ulonglong)lVar2 >> 0x10) & 0xff00 | uVar3 & 0xffff0000;
      uVar1 = (uint)lVar2 & 0x3f | uVar1 & 0xff00 | uVar3 << 0x10;
      if (uVar1 != 0) {
        *(uint *)(param_1 + 0x18) = uVar1 | 0xc0;
      }
    }
  }
  return uVar4;
}



// FUNCTION 14261fd40 FUN_14261fd40 body=564 status=ok
// SIG undefined FUN_14261fd40(void)

void FUN_14261fd40(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  
  if (0 < *param_3) {
    return;
  }
  FUN_1424a7c80(param_1 + 0x28);
  if ((*(ushort *)(param_1 + 0x30) & 0x11) == 0) {
    if ((*(ushort *)(param_1 + 0x30) & 2) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x40);
    }
    else {
      lVar7 = param_1 + 0x32;
    }
  }
  else {
    lVar7 = 0;
  }
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 0x18);
  bVar6 = bVar2 >> 1 & 1;
  if ((bVar2 & 1) == 0) {
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x1a0);
    if (puVar5 == (undefined8 *)0x0) {
LAB_14261fdde:
      *param_3 = 7;
      return;
    }
    if (*(short *)(param_1 + 0x30) < 0) {
      iVar4 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x30) >> 5;
    }
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8);
    *puVar5 = icu_64::CollationIterator::vftable;
    puVar5[1] = *puVar3;
    puVar5[2] = puVar3;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5[4] = puVar5 + 6;
    *(undefined4 *)(puVar5 + 5) = 0x28;
    *(undefined1 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined4 *)(puVar5 + 0x2e) = 0;
    puVar5[0x2f] = 0;
    *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
    *(byte *)((longlong)puVar5 + 0x184) = bVar6;
    *puVar5 = icu_64::UTF16CollationIterator::vftable;
    puVar5[0x31] = lVar7;
    puVar5[0x32] = lVar7;
    puVar5[0x33] = lVar7 + (longlong)iVar4 * 2;
  }
  else {
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x210);
    if (puVar5 == (undefined8 *)0x0) goto LAB_14261fdde;
    if (*(short *)(param_1 + 0x30) < 0) {
      iVar4 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar4 = (int)*(short *)(param_1 + 0x30) >> 5;
    }
    lVar1 = lVar7 + (longlong)iVar4 * 2;
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8);
    *puVar5 = icu_64::CollationIterator::vftable;
    puVar5[1] = *puVar3;
    puVar5[2] = puVar3;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5[4] = puVar5 + 6;
    *(undefined4 *)(puVar5 + 5) = 0x28;
    *(undefined1 *)((longlong)puVar5 + 0x2c) = 0;
    *(undefined4 *)(puVar5 + 0x2e) = 0;
    puVar5[0x2f] = 0;
    *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
    *(byte *)((longlong)puVar5 + 0x184) = bVar6;
    puVar5[0x31] = lVar7;
    puVar5[0x32] = lVar7;
    puVar5[0x33] = lVar1;
    *puVar5 = icu_64::FCDUTF16CollationIterator::vftable;
    puVar5[0x34] = lVar7;
    puVar5[0x35] = lVar7;
    puVar5[0x36] = 0;
    puVar5[0x37] = lVar1;
    puVar5[0x38] = puVar3[6];
    puVar5[0x39] = &PTR_FUN_149e18960;
    *(undefined2 *)(puVar5 + 0x3a) = 2;
    *(undefined1 *)(puVar5 + 0x41) = 1;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 **)(param_1 + 8) = puVar5;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 14261ff80 FUN_14261ff80 body=106 status=ok
// SIG undefined FUN_14261ff80(void)

undefined8 *
FUN_14261ff80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = icu_64::CollationElementIterator::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 6) = 2;
  FUN_14261fd40(param_1,param_2,param_4);
  return param_1;
}



// FUNCTION 14261fff0 Unwind@14261fff0 body=39 status=ok
// SIG undefined Unwind@14261fff0(void)

void Unwind_14261fff0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 142620020 FUN_142620020 body=144 status=ok
// SIG undefined FUN_142620020(void)

undefined8 * FUN_142620020(undefined8 *param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  *param_1 = icu_64::CollationElementIterator::vftable;
  param_1[1] = 0;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 6) = 2;
  if (*param_4 < 1) {
    (**(code **)(*param_2 + 200))(param_2,param_1 + 5);
    FUN_14261fd40(param_1,param_1 + 5,param_4);
  }
  return param_1;
}



// FUNCTION 1426200b0 Unwind@1426200b0 body=41 status=ok
// SIG undefined Unwind@1426200b0(void)

void Unwind_1426200b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x20));
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1426200e0 FUN_1426200e0 body=299 status=ok
// SIG undefined FUN_1426200e0(void)

undefined8 FUN_1426200e0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined ***local_330;
  undefined2 local_328;
  undefined1 local_320 [200];
  undefined1 local_258 [200];
  undefined **local_190;
  undefined2 local_188;
  undefined8 local_150;
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  int *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((*param_2 < 1) &&
     (uVar1 = FUN_142501e10(&LAB_142503320,&LAB_142503330,&LAB_142503330,param_2), *param_2 < 1)) {
    local_48 = icu_64::_anon_2977AD58::MaxExpSink::vftable;
    local_348 = 0;
    uStack_340 = 0;
    local_338 = 0;
    local_330 = &local_48;
    local_328 = 1;
    local_40 = uVar1;
    local_38 = param_2;
    FUN_142511900(local_320);
    FUN_142511900(local_258);
    local_190 = &PTR_FUN_149e18960;
    local_188 = 2;
    local_150 = 0;
    local_50 = 0;
    FUN_142614bf0(&local_348,param_1,param_2);
    FUN_140859a90(&local_190);
    FUN_1425121d0(local_258);
    FUN_1425121d0(local_320);
    if (0 < *param_2) {
      FUN_142502220(uVar1);
      uVar1 = 0;
    }
    FUN_142614be0(&local_48);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142620210 Unwind@142620210 body=43 status=ok
// SIG undefined Unwind@142620210(void)

void Unwind_142620210(undefined8 param_1,longlong param_2)

{
  FUN_14255e0a0(param_2 + 0x20);
  return;
}



// FUNCTION 142620240 Unwind@142620240 body=43 status=ok
// SIG undefined Unwind@142620240(void)

void Unwind_142620240(undefined8 param_1,longlong param_2)

{
  FUN_1425121d0(param_2 + 0x48);
  return;
}



// FUNCTION 142620270 Unwind@142620270 body=46 status=ok
// SIG undefined Unwind@142620270(void)

void Unwind_142620270(undefined8 param_1,longlong param_2)

{
  FUN_142614be0(param_2 + 800);
  return;
}



// FUNCTION 1426202a0 FUN_1426202a0 body=88 status=ok
// SIG undefined FUN_1426202a0(void)

longlong FUN_1426202a0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x28);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142620300 FUN_142620300 body=38 status=ok
// SIG undefined FUN_142620300(void)

undefined8 FUN_142620300(undefined8 param_1,int param_2)

{
  FUN_142614be0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 142620330 FUN_142620330 body=1 status=ok
// SIG undefined FUN_142620330(void)

void FUN_142620330(void)

{
  return;
}



// FUNCTION 142620340 FUN_142620340 body=411 status=ok
// SIG undefined FUN_142620340(void)

void FUN_142620340(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if (1 < (int)param_3) {
    if (3 < param_3) {
      uVar7 = (ulonglong)(param_3 & 0xfffffffc);
      lVar10 = 0;
      iVar11 = 0;
      iVar12 = 0;
      iVar9 = 0;
      iVar5 = 0;
      do {
        puVar1 = (uint *)(param_2 + lVar10);
        puVar2 = (uint *)(param_2 + 0x10 + lVar10);
        iVar11 = (iVar11 + 2) - (uint)((*puVar1 & 0xff003f) == 0 && (puVar1[1] & 0xffff) == 0);
        iVar12 = (iVar12 + 2) - (uint)((puVar1[2] & 0xff003f) == 0 && (puVar1[3] & 0xffff) == 0);
        iVar9 = (iVar9 + 2) - (uint)((*puVar2 & 0xff003f) == 0 && (puVar2[1] & 0xffff) == 0);
        iVar5 = (iVar5 + 2) - (uint)((puVar2[2] & 0xff003f) == 0 && (puVar2[3] & 0xffff) == 0);
        lVar10 = lVar10 + 0x20;
      } while ((ulonglong)(param_3 >> 2) << 5 != lVar10);
      iVar9 = iVar5 + iVar12 + iVar9 + iVar11;
      goto joined_r0x000142620416;
    }
    uVar7 = 0;
    iVar9 = 0;
    do {
      iVar9 = (iVar9 - (uint)((*(ulonglong *)(param_2 + uVar7 * 8) & 0xffff00ff003f) == 0)) + 2;
      uVar7 = uVar7 + 1;
joined_r0x000142620416:
    } while (uVar7 != param_3);
    uVar3 = *(undefined8 *)(param_2 + (ulonglong)(param_3 - 1) * 8);
    uVar6 = (uint)((ulonglong)uVar3 >> 0x20);
    uVar4 = (uint)((ulonglong)uVar3 >> 8);
    uVar8 = (uint)uVar3 & 0x3f | uVar4 & 0xff00 | uVar6 << 0x10;
    if (uVar8 == 0) {
      uVar8 = uVar4 & 0xff | (uint)((ulonglong)uVar3 >> 0x10) & 0xff00 | uVar6 & 0xffff0000;
    }
    else {
      uVar8 = uVar8 | 0xc0;
    }
    iVar5 = FUN_142502980(*(undefined8 *)(param_1 + 8),uVar8);
    if (iVar5 < iVar9) {
      FUN_142502d70(*(undefined8 *)(param_1 + 8),uVar8,iVar9,*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 1426204e0 FUN_1426204e0 body=8 status=ok
// SIG undefined FUN_1426204e0(void)

void FUN_1426204e0(undefined8 *param_1)

{
  FUN_1424da110(*param_1);
  return;
}



// FUNCTION 1426204f0 FUN_1426204f0 body=110 status=ok
// SIG undefined FUN_1426204f0(void)

uint FUN_1426204f0(byte *param_1,uint param_2)

{
  if ((int)param_2 < 0x51) {
    return param_2 - 0x10;
  }
  if (param_2 < 0x6c) {
    return (param_2 * 0x100 + (uint)*param_1) - 0x5100;
  }
  if (param_2 < 0x7e) {
    return ((uint)param_1[1] + ((uint)*param_1 << 8 | param_2 << 0x10)) - 0x6c0000;
  }
  if (param_2 == 0x7e) {
    return (uint)param_1[1] << 8 | (uint)*param_1 << 0x10 | (uint)param_1[2];
  }
  return (uint)param_1[3] |
         (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18;
}



// FUNCTION 142620560 FUN_142620560 body=656 status=ok
// SIG undefined FUN_142620560(void)

byte FUN_142620560(longlong param_1,byte *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  
  if (param_3 == 0) {
    param_3 = (uint)*param_2;
    param_2 = param_2 + 1;
  }
  uVar4 = param_3 + 1;
  uVar8 = (ulonglong)uVar4;
  if (4 < (int)param_3) {
    do {
      uVar5 = uVar8 >> 1;
      if ((int)param_4 < (int)(uint)*param_2) {
        bVar1 = param_2[1];
        uVar4 = (uint)bVar1;
        if (bVar1 < 0xc0) {
          pbVar6 = param_2 + 2;
        }
        else if (bVar1 < 0xf0) {
          pbVar6 = param_2 + 3;
          uVar4 = ((uint)bVar1 * 0x100 + (uint)param_2[2]) - 0xc000;
        }
        else if (bVar1 < 0xfe) {
          uVar4 = ((uint)param_2[3] + ((uint)param_2[2] << 8 | (uint)bVar1 << 0x10)) - 0xf00000;
          pbVar6 = param_2 + 4;
        }
        else if (bVar1 == 0xfe) {
          uVar4 = (uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4];
          pbVar6 = param_2 + 5;
        }
        else {
          uVar4 = (uint)param_2[5] |
                  (uint)param_2[4] << 8 | (uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18;
          pbVar6 = param_2 + 6;
        }
        pbVar6 = pbVar6 + (int)uVar4;
      }
      else {
        uVar5 = (ulonglong)(uint)((int)uVar8 - (int)uVar5);
        bVar1 = param_2[1];
        pbVar6 = param_2 + 2;
        if (0xbf < bVar1) {
          if (bVar1 < 0xf0) {
            pbVar6 = param_2 + 3;
          }
          else if (bVar1 < 0xfe) {
            pbVar6 = param_2 + 4;
          }
          else {
            pbVar6 = param_2 + 2 + (ulonglong)(bVar1 & 1) + 3;
          }
        }
      }
      param_2 = pbVar6;
      uVar4 = (uint)uVar5;
      uVar8 = uVar5;
    } while (5 < (int)uVar4);
  }
  iVar3 = uVar4 + 1;
  do {
    if (*param_2 == param_4) {
      pbVar6 = param_2 + 1;
      bVar1 = *pbVar6;
      bVar2 = 2;
      if ((bVar1 & 1) == 0) {
        uVar4 = (uint)(bVar1 >> 1);
        if (bVar1 < 0xa2) {
          pbVar7 = param_2 + 2;
          uVar4 = uVar4 - 0x10;
        }
        else if (bVar1 < 0xd8) {
          pbVar7 = param_2 + 3;
          uVar4 = (uVar4 * 0x100 + (uint)param_2[2]) - 0x5100;
        }
        else if (bVar1 < 0xfc) {
          uVar4 = ((uint)param_2[3] + ((uint)param_2[2] << 8 | uVar4 << 0x10)) - 0x6c0000;
          pbVar7 = param_2 + 4;
        }
        else if (uVar4 == 0x7e) {
          uVar4 = (uint)param_2[3] << 8 | (uint)param_2[2] << 0x10 | (uint)param_2[4];
          pbVar7 = param_2 + 5;
        }
        else {
          uVar4 = (uint)param_2[5] |
                  (uint)param_2[4] << 8 | (uint)param_2[3] << 0x10 | (uint)param_2[2] << 0x18;
          pbVar7 = param_2 + 6;
        }
        pbVar6 = pbVar7 + (int)uVar4;
        bVar2 = 1;
        if (0x1f < pbVar7[(int)uVar4]) {
          bVar2 = pbVar7[(int)uVar4] & 1 ^ 3;
        }
      }
      *(byte **)(param_1 + 0x10) = pbVar6;
      return bVar2;
    }
    pbVar6 = param_2 + 2;
    bVar1 = param_2[1];
    if (0xa1 < bVar1) {
      if (bVar1 < 0xd8) {
        pbVar6 = param_2 + 3;
      }
      else if (bVar1 < 0xfc) {
        pbVar6 = param_2 + 4;
      }
      else {
        pbVar6 = param_2 + (ulonglong)((bVar1 >> 1 & 1) != 0) + 5;
      }
    }
    iVar3 = iVar3 + -1;
    param_2 = pbVar6;
  } while (2 < iVar3);
  if (*pbVar6 == param_4) {
    *(byte **)(param_1 + 0x10) = pbVar6 + 1;
    bVar1 = 1;
    if (0x1f < pbVar6[1]) {
      return pbVar6[1] & 1 ^ 3;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    bVar1 = 0;
  }
  return bVar1;
}



// FUNCTION 142620820 FUN_142620820 body=174 status=ok
// SIG undefined FUN_142620820(void)

ulonglong FUN_142620820(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  
  bVar1 = *param_2;
  while( true ) {
    pbVar4 = param_2 + 1;
    if (bVar1 < 0x10) {
      uVar2 = FUN_142620560(param_1,pbVar4);
      return uVar2;
    }
    if (bVar1 < 0x20) break;
    if ((bVar1 & 1) != 0) goto LAB_1426208c5;
    if (0xa1 < bVar1) {
      if (bVar1 < 0xd8) {
        pbVar4 = param_2 + 2;
      }
      else if (bVar1 < 0xfc) {
        pbVar4 = param_2 + 3;
      }
      else {
        pbVar4 = pbVar4 + (ulonglong)((bVar1 >> 1 & 1) != 0) + 3;
      }
    }
    bVar1 = *pbVar4;
    param_2 = pbVar4;
  }
  if (*pbVar4 == param_3) {
    *(uint *)(param_1 + 0x18) = bVar1 - 0x11;
    *(byte **)(param_1 + 0x10) = param_2 + 2;
    if (0x10 < bVar1) {
      return 1;
    }
    uVar3 = (uint)param_2[2];
    if (uVar3 < 0x20) {
      return 1;
    }
    return (ulonglong)(uVar3 & 1 ^ 3);
  }
LAB_1426208c5:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return 0;
}



// FUNCTION 1426208d0 FUN_1426208d0 body=268 status=ok
// SIG undefined FUN_1426208d0(void)

ulonglong FUN_1426208d0(longlong param_1,uint param_2)

{
  byte *pbVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  uVar3 = 0;
  if (pbVar6 != (byte *)0x0) {
    uVar4 = param_2 + 0x100;
    if (-1 < (int)param_2) {
      uVar4 = param_2;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    pbVar1 = pbVar6 + 1;
    bVar8 = *pbVar6;
    uVar5 = (uint)bVar8;
    if (iVar2 < 0) {
      if (0xf < bVar8) {
        do {
          pbVar7 = pbVar1;
          bVar8 = (byte)uVar5;
          if (bVar8 < 0x20) {
            if (uVar4 != *pbVar7) {
LAB_1426209dd:
              *(undefined8 *)(param_1 + 0x10) = 0;
              return 0;
            }
            *(uint *)(param_1 + 0x18) = uVar5 - 0x11;
            *(byte **)(param_1 + 0x10) = pbVar6 + 2;
            if (0x10 < bVar8) {
              return 1;
            }
            uVar4 = (uint)pbVar6[2];
            if (uVar4 < 0x20) {
              return 1;
            }
            goto LAB_14262092a;
          }
          if ((uVar5 & 1) != 0) goto LAB_1426209dd;
          if (0xa1 < bVar8) {
            if (bVar8 < 0xd8) {
              pbVar7 = pbVar6 + 2;
            }
            else if (bVar8 < 0xfc) {
              pbVar7 = pbVar6 + 3;
            }
            else {
              pbVar7 = pbVar7 + (ulonglong)((uVar5 >> 1 & 1) != 0) + 3;
            }
          }
          uVar5 = (uint)*pbVar7;
          pbVar1 = pbVar7 + 1;
          pbVar6 = pbVar7;
        } while (0xf < uVar5);
      }
      uVar3 = FUN_142620560();
      return uVar3;
    }
    if (uVar4 == bVar8) {
      uVar3 = 1;
      *(int *)(param_1 + 0x18) = iVar2 + -1;
      *(byte **)(param_1 + 0x10) = pbVar1;
      if ((iVar2 == 0) && (uVar4 = (uint)*pbVar1, 0x1f < *pbVar1)) {
LAB_14262092a:
        uVar3 = (ulonglong)(uVar4 & 1 ^ 3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1426209f0 FUN_1426209f0 body=160 status=ok
// SIG undefined FUN_1426209f0(void)

uint FUN_1426209f0(uint param_1,char param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1 >> 0x10 & 0xff;
  if (param_2 == '\0') {
    iVar3 = (int)((ulonglong)((longlong)(int)(uVar1 + param_3 + -2) * -0x7efdfbf7) >> 0x20) +
            uVar1 + param_3 + -2;
    iVar3 = (iVar3 >> 7) - (iVar3 >> 0x1f);
    uVar1 = (uVar1 + param_3 + iVar3 * -0xfe + -2) * 0x10000 + 0x20000;
  }
  else {
    iVar2 = uVar1 + param_3 + -4;
    iVar3 = (int)((ulonglong)((longlong)iVar2 * -0x7d734041) >> 0x20) + uVar1 + param_3 + -4;
    iVar3 = (iVar3 >> 7) - (iVar3 >> 0x1f);
    uVar1 = (iVar2 + iVar3 * -0xfb) * 0x10000 + 0x40000;
  }
  return iVar3 * 0x1000000 + (param_1 & 0xff000000) | uVar1;
}



// FUNCTION 142620a90 FUN_142620a90 body=244 status=ok
// SIG undefined FUN_142620a90(void)

uint FUN_142620a90(uint param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  
  bVar4 = (byte)(param_1 >> 8);
  iVar5 = (uint)bVar4 + param_3;
  iVar1 = (int)((ulonglong)((longlong)(int)((uint)bVar4 + param_3 + -2) * -0x7efdfbf7) >> 0x20) +
          iVar5 + -2;
  iVar1 = (iVar1 >> 7) - (iVar1 >> 0x1f);
  uVar6 = param_1 >> 0x10 & 0xff;
  if (param_2 == '\0') {
    iVar3 = (int)((ulonglong)((longlong)(int)(iVar1 + uVar6 + -2) * -0x7efdfbf7) >> 0x20) +
            uVar6 + iVar1 + -2;
    iVar3 = (iVar3 >> 7) - (iVar3 >> 0x1f);
    uVar6 = (uVar6 + iVar1 + iVar3 * -0xfe + -2) * 0x10000 + 0x20000;
  }
  else {
    iVar2 = iVar1 + uVar6 + -4;
    iVar3 = (int)((ulonglong)((longlong)iVar2 * -0x7d734041) >> 0x20) + uVar6 + iVar1 + -4;
    iVar3 = (iVar3 >> 7) - (iVar3 >> 0x1f);
    uVar6 = (iVar2 + iVar3 * -0xfb) * 0x10000 + 0x40000;
  }
  return iVar3 * 0x1000000 + (param_1 & 0xff000000) | (iVar1 * -0xfe + iVar5 + -2) * 0x100 + 0x200U
         | uVar6;
}



// FUNCTION 142620b90 FUN_142620b90 body=55 status=ok
// SIG undefined FUN_142620b90(void)

uint FUN_142620b90(uint param_1,char param_2,int param_3)

{
  param_3 = (param_1 >> 0x10 & 0xff) - param_3;
  if (param_2 == '\0') {
    if (1 < param_3) goto LAB_142620bbb;
    param_3 = param_3 + 0xfe;
  }
  else {
    if (3 < param_3) goto LAB_142620bbb;
    param_3 = param_3 + 0xfb;
  }
  param_1 = param_1 - 0x1000000;
LAB_142620bbb:
  return param_3 << 0x10 | param_1 & 0xff000000;
}



// FUNCTION 142620bd0 FUN_142620bd0 body=105 status=ok
// SIG undefined FUN_142620bd0(void)

uint FUN_142620bd0(uint param_1,char param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  param_3 = (param_1 >> 8 & 0xff) - param_3;
  if (1 < param_3) {
    return param_3 * 0x100 | param_1 & 0xffff0000;
  }
  uVar3 = param_1 >> 0x10 & 0xff;
  if (param_2 == '\0') {
    bVar4 = uVar3 < 3;
    if (bVar4) {
      param_1 = param_1 - 0x1000000;
    }
    iVar1 = 0xff;
  }
  else {
    bVar4 = uVar3 < 5;
    if (bVar4) {
      param_1 = param_1 - 0x1000000;
    }
    iVar1 = 0xfe;
  }
  iVar2 = uVar3 - 1;
  if (bVar4) {
    iVar2 = iVar1;
  }
  return param_3 * 0x100 + 0xfe00U | param_1 & 0xff000000 | iVar2 << 0x10;
}



// FUNCTION 142620c40 FUN_142620c40 body=259 status=ok
// SIG undefined FUN_142620c40(void)

uint FUN_142620c40(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = ((uint)param_2 & 0x7f) * (param_1 - ((int)(uint)param_2 >> 8));
  uVar3 = (uint)(byte)((ulonglong)param_2 >> 0x28);
  iVar1 = uVar3 + iVar4;
  iVar4 = (int)((ulonglong)((longlong)(int)(uVar3 + iVar4 + -2) * -0x7efdfbf7) >> 0x20) + iVar1 + -2
  ;
  iVar4 = (iVar4 >> 7) - (iVar4 >> 0x1f);
  iVar5 = ((ushort)((ulonglong)param_2 >> 0x30) & 0xff) + iVar4;
  if ((char)param_2 < '\0') {
    iVar2 = (int)((ulonglong)((longlong)(iVar5 + -4) * -0x7d734041) >> 0x20) + iVar5 + -4;
    iVar2 = (iVar2 >> 7) - (iVar2 >> 0x1f);
    uVar3 = (iVar5 + -4 + iVar2 * -0xfb) * 0x10000 + 0x40000;
  }
  else {
    iVar2 = (int)((ulonglong)((longlong)(iVar5 + -2) * -0x7efdfbf7) >> 0x20) + iVar5 + -2;
    iVar2 = (iVar2 >> 7) - (iVar2 >> 0x1f);
    uVar3 = (iVar5 + iVar2 * -0xfe + -2) * 0x10000 + 0x20000;
  }
  return iVar2 * 0x1000000 + ((uint)((ulonglong)param_2 >> 0x20) & 0xff000000) |
         (iVar4 * -0xfe + iVar1 + -2) * 0x100 + 0x200U | uVar3;
}



// FUNCTION 142620d50 FUN_142620d50 body=178 status=ok
// SIG undefined FUN_142620d50(void)

uint FUN_142620d50(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + 1;
  iVar1 = param_1 / 0x12;
  iVar2 = param_1 / 0x11dc;
  return (iVar2 + ((uint)((ulonglong)((longlong)iVar2 * 0x828cbfbf) >> 0x27) - (iVar2 >> 0x1f)) *
                  -0xfb) * 0x10000 + 0x40000 |
         (((uint)((ulonglong)((longlong)iVar1 * 0x81020409) >> 0x27) - (iVar1 >> 0x1f)) * -0xfe +
         iVar1) * 0x100 + 0x200 | (param_1 % 0x12) * 0xe + 2U | 0xfe000000;
}



// FUNCTION 142620e10 FUN_142620e10 body=14 status=ok
// SIG undefined FUN_142620e10(void)

undefined8 * FUN_142620e10(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142620e20 FUN_142620e20 body=1 status=ok
// SIG undefined FUN_142620e20(void)

void FUN_142620e20(void)

{
  return;
}



// FUNCTION 142620e30 FUN_142620e30 body=12 status=ok
// SIG undefined FUN_142620e30(void)

void FUN_142620e30(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 142620e40 FUN_142620e40 body=55 status=ok
// SIG undefined FUN_142620e40(void)

undefined4 FUN_142620e40(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    if (cVar1 == '\x02') {
      bVar3 = param_3 == *(int *)(param_1 + 8) && param_2 == *(int *)(param_1 + 0x14);
    }
    else {
      if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      bVar3 = *(int *)(param_1 + 0x14) == param_2;
    }
    uVar2 = CONCAT31(cVar1 >> 7,bVar3);
  }
  return uVar2;
}



// FUNCTION 142620e80 FUN_142620e80 body=19 status=ok
// SIG undefined FUN_142620e80(void)

void FUN_142620e80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return;
}



// FUNCTION 142620ea0 FUN_142620ea0 body=1 status=ok
// SIG undefined FUN_142620ea0(void)

void FUN_142620ea0(void)

{
  return;
}



// FUNCTION 142620eb0 FUN_142620eb0 body=1 status=ok
// SIG undefined FUN_142620eb0(void)

void FUN_142620eb0(void)

{
  return;
}


