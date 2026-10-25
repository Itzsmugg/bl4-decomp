// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140540150 FUN_140540150 body=299 status=ok
// SIG undefined FUN_140540150(void)

void FUN_140540150(undefined8 *param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14a37ab58;
  if (0 < *(short *)((longlong)param_1 + 0x9e)) {
    bVar1 = *(byte *)((longlong)param_1 + 0x9c);
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_1407c8a86(param_1 + 0x11,0x14,&local_38);
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_48 = (uint)bVar1;
    FUN_140033559(".\\Runtime/RHI/Private/PipelineFileCache.cpp",0xda,
                  L"FRHIShader with hash: %s and Frequency: %d still in use by PSO compilation when being destroyed"
                  ,puVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a37f858;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14054027c FUN_14054027c body=614 status=ok
// SIG undefined FUN_14054027c(void)

void FUN_14054027c(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 4;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)(param_1 + 0x10);
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_14572078c(param_2,puVar4);
    goto LAB_1405403c0;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x18) << 2,(longlong)*(int *)(param_1 + 0x1c) << 2
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1405403c0;
    local_30 = *(uint *)(param_1 + 0x18);
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
      }
      else {
        FUN_14572512c(param_2,&local_30);
      }
    }
    else {
      local_30 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    uVar6 = *puVar4;
    uVar8 = ((longlong)uVar6 >> 0x18) + (longlong)puVar4;
    if ((uVar6 & 1) == 0) {
      uVar8 = uVar6;
    }
    lVar7 = *param_2;
LAB_1405403ba:
    (**(code **)(lVar7 + 0x170))(param_2,uVar8,(longlong)(int)local_30 << 2);
  }
  else {
    if (local_2c == 4) {
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar2;
      }
      if (local_30 < 0x20000000) {
        FUN_1405404e4(puVar4);
        iVar3 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar3 + local_30;
        if ((uint)(*(int *)(param_1 + 0x1c) - iVar3) < local_30) {
          FUN_147ce7098(puVar4);
        }
        uVar8 = *puVar4;
        if ((uVar8 & 1) != 0) {
          uVar8 = (longlong)puVar4 + ((longlong)uVar8 >> 0x18);
        }
        lVar7 = *param_2;
        goto LAB_1405403ba;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_1405403c0:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405404e4 FUN_1405404e4 body=42 status=ok
// SIG undefined FUN_1405404e4(void)

void FUN_1405404e4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140540510();
    return;
  }
  return;
}



// FUNCTION 140540510 FUN_140540510 body=341 status=ok
// SIG undefined FUN_140540510(void)

void FUN_140540510(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (param_2 == 0) goto LAB_140540586;
  uVar3 = (longlong)param_2 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar5 = uVar6 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_140540606;
        goto LAB_1405405d8;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_140540578:
  do {
    uVar5 = 0x7fffffff;
    unaff_EDI = param_2;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
LAB_140540586:
    param_2 = unaff_EDI;
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 << 2,2);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar6 = 0;
    FUN_1467ac767();
LAB_140540606:
    bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140540578;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_1405405d8:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 140540672 FUN_140540672 body=378 status=ok
// SIG undefined FUN_140540672(void)

undefined1 FUN_140540672(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
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
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (lVar3 == 0) {
LAB_1405407af:
    plVar4 = (longlong *)FUN_1449db7f2();
    lVar3 = plVar4[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 1000))(plVar4);
      lVar3 = plVar4[0x22];
      if (lVar3 == 0) {
        uVar2 = 2;
        goto LAB_1405406e5;
      }
    }
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1417de738;
      local_20 = &LAB_145893408;
      local_28 = &LAB_1458cbbd2;
      local_38 = &LAB_147ba21f1;
      local_40 = &LAB_1463e9233;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_1 + 0x430);
      if (lVar3 == 0) goto LAB_1405407af;
    }
    if ((((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) ||
        (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
        DAT_14cae9568 + 0x30)) goto LAB_1405407af;
  }
  uVar2 = *(undefined1 *)(lVar3 + 0xb8);
LAB_1405406e5:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1405407ee FUN_1405407ee body=1661 status=ok
// SIG undefined FUN_1405407ee(void)

void FUN_1405407ee(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int *piVar22;
  void *_Buf1;
  longlong lVar23;
  uint uVar24;
  size_t _Size;
  longlong lVar25;
  undefined1 auStack_208 [40];
  ulonglong *local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  longlong local_170;
  uint local_168;
  undefined1 *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [192];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  FUN_1448b284a(*(undefined8 *)(param_1 + 8),param_2,&local_1c8);
  FUN_140540e6e();
  lVar17 = DAT_14ca4b2f0;
  lVar16 = (longlong)DAT_14ca1a680;
  lVar13 = param_3 + 0x10;
  if (*(longlong *)(param_3 + 0x20) != 0) {
    lVar13 = *(longlong *)(param_3 + 0x20);
  }
  _Size = (size_t)DAT_14ca1c00c;
  iVar11 = DAT_14ca1a680 + 0x1f;
  if (-1 < lVar16) {
    iVar11 = DAT_14ca1a680;
  }
  puVar1 = (uint *)(lVar13 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)DAT_14ca1a680 & 0x1f);
  _Buf1 = (void *)((longlong)*(int *)(lVar17 + 4 + lVar16 * 0x60) + *(longlong *)(param_3 + 0x30));
  iVar11 = memcmp(_Buf1,&local_1c8,_Size);
  if (iVar11 != 0) {
    *(undefined1 *)(param_3 + 8) = 1;
    memcpy(_Buf1,&local_1c8,_Size);
  }
  lVar17 = *(longlong *)(param_1 + 8);
  uVar5 = *(undefined4 *)(lVar17 + 0x318);
  *(undefined4 *)(lVar17 + 0x318) = 0;
  if ((-1 < (int)DAT_14ca5c7a0) &&
     (lVar13 = *(longlong *)(lVar17 + 0x10), (int)DAT_14ca5c7a0 < *(int *)(lVar13 + 0x5330))) {
    lVar16 = lVar13 + 0x5318;
    if (*(longlong *)(lVar13 + 0x5328) != 0) {
      lVar16 = *(longlong *)(lVar13 + 0x5328);
    }
    if (((((*(uint *)(lVar16 + (ulonglong)(DAT_14ca5c7a0 >> 5) * 4) >> (DAT_14ca5c7a0 & 0x1f) & 1)
           != 0) &&
         (lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x5308) + (ulonglong)DAT_14ca5c7a0 * 8),
         lVar13 != 0)) &&
        (uVar12 = *(int *)(lVar17 + 0x2a8) - *(int *)(lVar17 + 0x2d4),
        uVar12 != 0 && *(int *)(lVar17 + 0x2d4) <= *(int *)(lVar17 + 0x2a8))) &&
       (*(char *)(DAT_14ca1a520 + 1) == '\x01')) {
      local_1e0 = (ulonglong *)(param_2 + 0x70);
      uVar21 = *(ulonglong *)(param_2 + 0x78);
      local_1d8 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      local_1d0 = local_1d8 + (ulonglong)uVar12 * 8;
      if (uVar21 < local_1d0) {
        lVar16 = (ulonglong)uVar12 * 8;
        FUN_140023dd8(local_1e0,(int)lVar16 + 8);
        uVar21 = *(ulonglong *)(param_2 + 0x78);
        local_1d8 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        local_1d0 = lVar16 + local_1d8;
      }
      puVar9 = local_1e0;
      *local_1e0 = local_1d0;
      uVar19 = (ulonglong)(uint)(*(int *)(lVar17 + 0x2a8) - *(int *)(lVar17 + 0x2d4));
      uVar20 = local_1d0 + uVar19 * 4;
      if (uVar21 < uVar20) {
        lVar16 = uVar19 * 4;
        FUN_140023dd8(local_1e0,(int)lVar16 + 4);
        local_1d0 = *puVar9 + 3 & 0xfffffffffffffffc;
        uVar20 = lVar16 + local_1d0;
      }
      *local_1e0 = uVar20;
      FUN_147263758(lVar13,&local_170);
      local_80 = (undefined1 *)0x0;
      local_78 = 0x800000000;
      if ((int)local_168 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_168);
      }
      if (8 < local_168) {
        FUN_14726d7fc(local_140);
      }
      lVar16 = local_170;
      if (local_168 != 0) {
        lVar23 = 0;
        do {
          uVar21 = local_78;
          lVar25 = (longlong)(int)local_78;
          uVar12 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,uVar12);
          if (local_78._4_4_ < uVar12) {
            FUN_14726d8f6(local_140,uVar21 & 0xffffffff);
          }
          puVar15 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar15 = local_140;
          }
          puVar2 = (undefined4 *)(lVar16 + lVar23);
          *(undefined8 *)(puVar15 + lVar25 * 0x18) = 0;
          *(undefined8 *)((longlong)(puVar15 + lVar25 * 0x18) + 8) = 0;
          *(undefined8 *)(puVar15 + lVar25 * 0x18 + 0x10) = 0;
          uVar6 = puVar2[1];
          uVar7 = puVar2[2];
          uVar8 = puVar2[3];
          puVar3 = (undefined4 *)(puVar15 + lVar25 * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          lVar23 = lVar23 + 0x10;
        } while ((longlong)(int)local_168 * 0x10 != lVar23);
      }
      local_158 = lVar17 + 0x2b0;
      local_160 = (undefined1 *)0x100000000;
      local_150 = 0xffffffff;
      local_148 = 0;
      if (*(int *)(lVar17 + 0x2c8) != 0) {
        FUN_1449c0562(&local_160);
      }
      local_1a0 = local_160;
      local_198 = local_158;
      local_190 = local_150;
      uVar10 = local_190;
      local_188 = CONCAT44(local_144,local_148);
      local_190._4_4_ = (int)((ulonglong)local_150 >> 0x20);
      uVar24 = 0;
      uVar12 = 0;
      local_1a8 = (longlong *)(lVar17 + 0x2a0);
      if (local_190._4_4_ < *(int *)(local_158 + 0x18)) {
        uVar21 = 0;
        iVar11 = local_190._4_4_;
        local_190 = uVar10;
        do {
          lVar17 = *local_1a8;
          piVar14 = (int *)FUN_147ccc4de(*(undefined8 *)
                                          (*(longlong *)(lVar17 + (longlong)iVar11 * 0x28) + 8));
          puVar15 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar15 = local_140;
          }
          if ((longlong)(int)local_78 != 0) {
            piVar18 = (int *)(puVar15 + 0x10);
            do {
              if (((*piVar14 == piVar18[-4]) && (piVar14[1] == piVar18[-3])) &&
                 ((piVar14[2] == piVar18[-2] && (piVar14[3] == piVar18[-1])))) {
                *piVar18 = *piVar18 + 1;
                break;
              }
              piVar22 = piVar18 + 2;
              piVar18 = piVar18 + 6;
            } while (piVar22 != (int *)(puVar15 + (longlong)(int)local_78 * 0x18));
          }
          puVar4 = (undefined8 *)(lVar17 + (longlong)iVar11 * 0x28);
          *(undefined8 *)(local_1d8 + uVar21 * 8) = *puVar4;
          *(undefined4 *)(local_1d0 + uVar21 * 4) = *(undefined4 *)(puVar4 + 3);
          uVar12 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar12;
          local_190 = CONCAT44(local_190._4_4_,(uint)local_190 & ~local_1a0._4_4_);
          FUN_1449c0562(&local_1a0);
          iVar11 = local_190._4_4_;
          uVar10 = local_190;
        } while (local_190._4_4_ < *(int *)(local_198 + 0x18));
      }
      local_190 = uVar10;
      puVar9 = local_1e0;
      puVar15 = local_80;
      if (local_80 == (undefined1 *)0x0) {
        puVar15 = local_140;
      }
      lVar17 = (longlong)(int)local_78;
      if (lVar17 != 0) {
        lVar16 = 0;
        uVar24 = 0;
        do {
          *(uint *)(puVar15 + lVar16 + 0x14) = uVar24;
          uVar24 = uVar24 + *(int *)(puVar15 + lVar16 + 0x10);
          *(undefined4 *)(puVar15 + lVar16 + 0x10) = 0;
          lVar16 = lVar16 + 0x18;
        } while (lVar17 * 0x18 != lVar16);
      }
      uVar20 = *(longlong *)(param_2 + 0x70) + 3U & 0xfffffffffffffffc;
      uVar21 = uVar20 + (ulonglong)uVar24 * 8;
      if (*(ulonglong *)(param_2 + 0x78) < uVar21) {
        lVar17 = (ulonglong)uVar24 * 8;
        FUN_140023dd8(local_1e0,(uint)lVar17 | 4);
        uVar20 = *puVar9 + 3 & 0xfffffffffffffffc;
        uVar21 = lVar17 + uVar20;
      }
      *local_1e0 = uVar21;
      if (uVar12 != 0) {
        uVar21 = 0;
        do {
          piVar14 = (int *)FUN_147ccc4de(*(undefined8 *)(*(longlong *)(local_1d8 + uVar21 * 8) + 8))
          ;
          puVar15 = local_80;
          if (local_80 == (undefined1 *)0x0) {
            puVar15 = local_140;
          }
          if ((longlong)(int)local_78 != 0) {
            piVar18 = (int *)(puVar15 + 0x14);
            do {
              if (((*piVar14 == piVar18[-5]) && (piVar14[1] == piVar18[-4])) &&
                 ((piVar14[2] == piVar18[-3] && (piVar14[3] == piVar18[-2])))) {
                *(ulonglong *)(uVar20 + (ulonglong)(uint)(piVar18[-1] + *piVar18) * 8) =
                     ((ulonglong)(uint)(*(int *)(local_1d0 + uVar21 * 4) * 0x30) << 0x20) + uVar21;
                piVar18[-1] = piVar18[-1] + 1;
                break;
              }
              piVar22 = piVar18 + 1;
              piVar18 = piVar18 + 6;
            } while (piVar22 != (int *)(puVar15 + (longlong)(int)local_78 * 0x18));
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar12);
      }
      local_180 = *(undefined8 *)(lStack_1b0 + 0x40);
      local_1a8 = (longlong *)local_1d8;
      local_1a0 = (undefined1 *)CONCAT44(local_1a0._4_4_,uVar12);
      local_190 = CONCAT44(local_190._4_4_,uVar24);
      local_160 = local_140;
      if (local_80 != (undefined1 *)0x0) {
        local_160 = local_80;
      }
      local_158 = CONCAT44(local_158._4_4_,(int)local_78);
      local_198 = uVar20;
      local_188 = param_2;
      local_178 = uVar5;
      FUN_147315a32(lVar13);
      if (local_80 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_170 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140540e6e FUN_140540e6e body=258 status=ok
// SIG undefined FUN_140540e6e(void)

void FUN_140540e6e(void)

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
              0x110) < DAT_14ca1c050) {
    FUN_144b3d300(&DAT_14ca1c050);
    if (DAT_14ca1c050 == -1) {
      FUN_145720930(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNaniteSkinningParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x47;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1bfd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e687d0);
      _Init_thread_footer(&DAT_14ca1c050);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140540f7e FUN_140540f7e body=359 status=ok
// SIG undefined FUN_140540f7e(void)

void FUN_140540f7e(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = DAT_14c9c0ea0;
  uVar3 = DAT_14c9c0d50;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_140540fd3;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_140540fd3:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x10 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x10 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_14054104f;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14054104f:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x11;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x80;
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(&DAT_14ca11f90 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x1c1c;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a24cf20;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  return;
}



// FUNCTION 1405410e6 FUN_1405410e6 body=827 status=ok
// SIG undefined FUN_1405410e6(void)

void FUN_1405410e6(code *param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  code cVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  code *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined4 *local_78;
  float *local_70;
  undefined4 local_64;
  float local_60;
  undefined1 local_59;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar5 = (code)((byte)param_1[0x24] ^ 1);
  local_59 = cVar5;
  local_58 = param_3;
  if (param_1[0x18] == (code)0x1) {
    lVar2 = FUN_140541594();
    pfVar3 = (float *)(lVar2 + 0x38);
  }
  else {
    pfVar3 = (float *)(param_1 + 0x1c);
  }
  fVar7 = *pfVar3;
  if (*(char *)(*(longlong *)(param_3 + 0x28) + 0x100) == '\x01') {
    local_59 = (code)0x1;
    cVar5 = (code)0x1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xe0);
  local_60 = fVar7;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb6fd70 == 0) {
      local_b0 = &local_90;
      local_90 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_1427b09ee;
      local_b8 = &LAB_1487a9cc9;
      local_c0 = FUN_1465433f8;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x10004001;
      local_e0 = 8;
      local_e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb6fd70);
    if (lVar2 != 0) {
      if (DAT_14cb6fd70 == 0) {
        local_b0 = &local_90;
        local_90 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_1427b09ee;
        local_b8 = &LAB_1487a9cc9;
        local_c0 = FUN_1465433f8;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10004001;
        local_e0 = 8;
        local_e8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar4 = FUN_144718840(lVar2,DAT_14cb6fd70);
      if ((lVar2 != lVar4) && (lVar4 != 0)) {
        fVar6 = (float)FUN_140541422(lVar4);
        fVar7 = fVar7 * fVar6;
        local_60 = fVar7;
      }
    }
  }
  *(float *)(param_3 + 0x120) = fVar7;
  *(float *)(param_3 + 0x124) = fVar7;
  *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) & 0xef | (char)param_1[0x2c] << 4;
  local_64 = *(undefined4 *)(param_3 + 0x60);
  local_78 = &local_64;
  local_88 = &local_59;
  local_80 = &local_58;
  local_70 = &local_60;
  fVar7 = *(float *)(param_1 + 0x28);
  local_90 = param_1;
  if (cVar5 == param_1[0x2c]) {
    if (fVar7 <= 0.0) goto LAB_14054125c;
    *(float *)(param_1 + 0x28) = fVar7 - param_2;
    fVar7 = (*(float *)(param_1 + 0x20) - (fVar7 - param_2)) / *(float *)(param_1 + 0x20);
  }
  else {
    *(float *)(param_1 + 0x28) = fVar7 + param_2;
    fVar7 = (fVar7 + param_2) / *(float *)(param_1 + 0x20);
  }
  FUN_143cd75b8(&local_90,fVar7);
LAB_14054125c:
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140541422 FUN_140541422 body=370 status=ok
// SIG undefined FUN_140541422(void)

float FUN_140541422(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  fVar7 = 1.0;
  if ((plVar2 != (longlong *)0x0) &&
     (fVar4 = (float)FUN_14023bf44(param_1), fVar7 = 1.0, 0.0 < fVar4)) {
    if (*(char *)(lVar1 + 1) == '\0') {
      fVar7 = 1.0;
      uVar3 = 0;
    }
    else {
      fVar7 = (float)(**(code **)(*plVar2 + 0x28))(plVar2,*(char *)(lVar1 + 1) + -1);
      uVar3 = *(undefined1 *)(lVar1 + 1);
    }
    fVar4 = (float)(**(code **)(*plVar2 + 0x28))(plVar2,uVar3);
    fVar5 = (float)FUN_14023c00e(param_1);
    fVar6 = (float)(**(code **)(*plVar2 + 0x20))(plVar2,*(undefined1 *)(lVar1 + 1));
    if (fVar6 < 0.0001) {
      if ((fVar5 == 1.0) && (!NAN(fVar5))) {
        fVar7 = fVar4;
      }
    }
    else {
      fVar6 = (fVar5 - (1.0 - fVar6)) / fVar6;
      if (0.0 < fVar6) {
        if (fVar6 < 0.5) {
          fVar5 = (fVar6 + fVar6) * (fVar6 + fVar6) * 0.5;
        }
        else {
          fVar5 = 1.0 - (fVar6 + fVar6 + -1.0);
          fVar5 = (1.0 - fVar5 * fVar5) * 0.5 + 0.5;
        }
        fVar7 = (fVar4 - fVar7) * (fVar5 + 0.0) + fVar7;
      }
    }
  }
  return fVar7;
}



// FUNCTION 140541594 FUN_140541594 body=520 status=ok
// SIG undefined FUN_140541594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140541594(void)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb75cb0 == (longlong *)0x0) {
    _DAT_14cb75cc8 = 0;
    _DAT_14cb75cd8 = 0;
    _DAT_14cb75ce8 = 0;
    DAT_14cb75cc0 = 0;
    plVar4 = &DAT_14cb75cc0;
    _DAT_14cb75cd0 = 0xffffffff;
    _DAT_14cb75cb8 = &PTR_FUN_14b180730;
    _DAT_14cb75ce0 = 0x7104;
    _DAT_14cb75cf0 = 0x42a00000;
    DAT_14cb75cb0 = (longlong *)&DAT_14cb75cb8;
LAB_1405415c7:
    bVar1 = true;
    plVar6 = plVar4;
LAB_1405415ca:
    plVar5 = DAT_14cb75cb0;
    if (*plVar4 == 0) goto LAB_1405416a2;
    plVar4 = plVar6;
    if (!bVar1) {
      plVar4 = (longlong *)(*plVar6 + 0x30);
    }
    if (*plVar4 == 0) {
      if (((DAT_14c9a1ab0 == 0) || (*plVar6 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar6 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_1405415f7;
      puVar7 = &DAT_14c9485f0;
      if ((undefined4 *)*plVar6 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*plVar6;
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar5,puVar7);
    }
    else {
      if ((((int)DAT_14cb75cb0[3] == *(int *)(*plVar4 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar6 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar6 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_1405415f7;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar5);
    }
    if (cVar2 == '\0') goto LAB_1405415f7;
  }
  else {
    plVar6 = DAT_14cb75cb0 + 1;
    plVar4 = plVar6;
    if ((char)DAT_14cb75cb0[2] == '\0') goto LAB_1405415c7;
    if ((char)DAT_14cb75cb0[2] == '\x02') {
      plVar4 = (longlong *)(*plVar6 + 0x30);
      bVar1 = false;
      goto LAB_1405415ca;
    }
LAB_1405416a2:
    plVar5 = DAT_14cb75cb0;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_1405415f7;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_gbx_character",0);
    FUN_140024ada(&local_48,plVar5);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
LAB_1405415f7:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 14054179e FUN_14054179e body=151 status=ok
// SIG undefined FUN_14054179e(void)

void FUN_14054179e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 **local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_58;
  local_40 = &local_50;
  local_50 = &LAB_1437c26da;
  iVar1 = *(int *)(param_1 + 0x50);
  local_58 = param_2;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(lVar2 + lVar3);
      FUN_140541836(&local_40,&local_38);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140541836 FUN_140541836 body=148 status=ok
// SIG undefined FUN_140541836(void)

undefined8 FUN_140541836(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x38) == '\x01')) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    lVar3 = FUN_14144e1dc();
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if ((((lVar4 != 0) && (lVar3 != 0)) &&
        ((lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0 &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))))) && ((longlong)*(int *)(lVar4 + 0x88) != 0)) {
      puVar2 = (undefined8 *)*param_1;
      lVar3 = *(longlong *)(lVar4 + 0x80);
      lVar4 = (longlong)*(int *)(lVar4 + 0x88) * 0xc0;
      do {
        (*(code *)*puVar2)(puVar2[1],lVar3);
        lVar3 = lVar3 + 0xc0;
        lVar4 = lVar4 + -0xc0;
      } while (lVar4 != 0);
    }
  }
  return 1;
}



// FUNCTION 1405418ca FUN_1405418ca body=442 status=ok
// SIG undefined FUN_1405418ca(void)

void FUN_1405418ca(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[9] != 0) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar17 = (uint)param_2 & 0xffff;
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar13 +
                     (longlong)
                     (int)((int)param_1[9] - 1U &
                          ((uint)param_2 << 0x10 | uVar17) + (int)((ulonglong)param_2 >> 0x20) +
                          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar17 >> 4)) * 4);
    while (iVar15 = iVar16, iVar15 != -1) {
      lVar19 = *param_1;
      iVar16 = *(int *)(lVar19 + 0x38 + (longlong)iVar15 * 0x40);
      if (*(longlong *)(lVar19 + (longlong)iVar15 * 0x40) == param_2) {
        do {
          iVar4 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
            FUN_140541b36(param_3,iVar4);
          }
          FUN_140541a86((longlong)iVar4 * 0x30 + *param_3,lVar19 + (longlong)iVar15 * 0x40 + 8);
          do {
            iVar15 = iVar16;
            if (iVar15 == -1) goto LAB_1405419c0;
            lVar19 = *param_1;
            iVar16 = *(int *)(lVar19 + 0x38 + (longlong)iVar15 * 0x40);
          } while (*(longlong *)(lVar19 + (longlong)iVar15 * 0x40) != param_2);
        } while( true );
      }
    }
  }
LAB_1405419c0:
  if (param_4 != '\0') {
    uVar5 = *(uint *)(param_3 + 1);
    if (1 < (longlong)(int)uVar5) {
      lVar19 = *param_3;
      lVar14 = (longlong)(int)uVar5 * 0x30;
      lVar18 = 0;
      do {
        lVar14 = lVar14 + -0x30;
        uVar6 = *(undefined8 *)(lVar19 + lVar18);
        uVar7 = ((undefined8 *)(lVar19 + lVar18))[1];
        puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar18);
        local_68 = *puVar2;
        uStack_60 = puVar2[1];
        puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar18);
        local_58 = *puVar2;
        uStack_50 = puVar2[1];
        uVar8 = *(undefined8 *)(lVar19 + lVar14);
        uVar9 = ((undefined8 *)(lVar19 + lVar14))[1];
        puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar14);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar14);
        uVar12 = puVar2[1];
        puVar3 = (undefined8 *)(lVar19 + 0x20 + lVar18);
        *puVar3 = *puVar2;
        puVar3[1] = uVar12;
        puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar18);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        *(undefined8 *)(lVar19 + lVar18) = uVar8;
        ((undefined8 *)(lVar19 + lVar18))[1] = uVar9;
        local_78._0_4_ = (undefined4)uVar6;
        local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar7;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar14);
        *puVar2 = local_58;
        puVar2[1] = uStack_50;
        puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar14);
        *puVar2 = local_68;
        puVar2[1] = uStack_60;
        puVar1 = (undefined4 *)(lVar19 + lVar14);
        *puVar1 = (undefined4)local_78;
        puVar1[1] = local_78._4_4_;
        puVar1[2] = (undefined4)uStack_70;
        puVar1[3] = uStack_70._4_4_;
        lVar18 = lVar18 + 0x30;
        local_78 = uVar6;
        uStack_70 = uVar7;
      } while ((ulonglong)(uVar5 >> 1) * 0x30 != lVar18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140541a86 FUN_140541a86 body=176 status=ok
// SIG undefined FUN_140541a86(void)

undefined1 * FUN_140541a86(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 140541b36 FUN_140541b36 body=275 status=ok
// SIG undefined FUN_140541b36(void)

void FUN_140541b36(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140541c4a FUN_140541c4a body=2595 status=ok
// SIG undefined FUN_140541c4a(void)

void FUN_140541c4a(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  uint *local_98;
  longlong *local_90;
  uint *local_88;
  uint *local_80;
  ulonglong local_78;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  iVar13 = *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x84);
  local_a0 = param_2;
  if (iVar13 != iVar4) {
    local_90 = (longlong *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      puVar5 = (uint *)(param_1 + 0x60);
      local_68 = 0;
      uStack_60 = 0;
      uVar26 = *(uint *)(param_1 + 0x78);
      puVar14 = (uint *)(ulonglong)uVar26;
      if (uVar26 == 0) {
        uVar23 = 1;
        uVar25 = 0;
        uVar10 = 0;
        iVar13 = 0;
      }
      else {
        puVar21 = *(uint **)(param_1 + 0x70);
        if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
          puVar21 = puVar5;
        }
        uVar10 = *puVar21;
        if (uVar10 == 0) {
          iVar13 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar13 = uVar26 - 1;
          }
          uVar25 = 0;
          uVar23 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar23 = uVar25;
          }
          iVar13 = 0;
          do {
            if (uVar23 == uVar25) goto LAB_140542522;
            iVar13 = iVar13 + 0x20;
            uVar10 = puVar21[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar25 = 0;
          iVar13 = 0;
        }
        uVar23 = (ulonglong)(-uVar10 & uVar10);
        uVar24 = uVar23 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar10 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar10) {
          uVar10 = uVar26;
        }
      }
      if (uVar10 != uVar26) {
        local_98 = (uint *)(param_1 + 0xd8);
        uVar22 = 0xffffffff;
        local_88 = puVar14;
        local_80 = puVar5;
        do {
          if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
            piVar16 = (int *)((longlong)(int)uVar10 * 0x20 + *(longlong *)(param_1 + 0x50));
            puVar21 = *(uint **)(param_1 + 0xe0);
            if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
              puVar21 = local_98;
            }
            uVar10 = puVar21[(longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)*piVar16];
            if (uVar10 != 0xffffffff) {
              lVar15 = *(longlong *)(param_1 + 0xa0);
LAB_140542357:
              piVar1 = (int *)(lVar15 + (longlong)(int)uVar10 * 0xc);
              if (*piVar1 != *piVar16) goto code_r0x00014054236b;
              uVar26 = puVar21[piVar1[2]];
              if (uVar26 == uVar10) {
                puVar21 = puVar21 + piVar1[2];
              }
              else {
                do {
                  puVar21 = (uint *)(lVar15 + (longlong)(int)uVar26 * 0xc + 4);
                  uVar26 = *puVar21;
                } while (uVar26 != uVar10);
              }
              *puVar21 = piVar1[1];
              FUN_1402c5ddc((longlong *)(param_1 + 0xa0),uVar10,1);
              uVar24 = uStack_60;
              lVar15 = (longlong)(int)uStack_60;
              uVar26 = (int)uStack_60 + 1;
              uStack_60 = CONCAT44(uStack_60._4_4_,uVar26);
              if (uStack_60._4_4_ < uVar26) {
                FUN_140543018(&local_68,uVar24 & 0xffffffff);
              }
              uVar24 = uStack_50;
              *(int *)(local_68 + lVar15 * 4) = *piVar16;
              lVar15 = (longlong)(int)uStack_50;
              uVar26 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar26);
              if (uStack_50._4_4_ < uVar26) {
                FUN_140543018(&local_58,uVar24 & 0xffffffff);
              }
              *(int *)(local_58 + lVar15 * 4) = *piVar16;
              uVar26 = *(uint *)(param_1 + 0x78);
              puVar14 = local_88;
              puVar5 = local_80;
            }
          }
LAB_140542374:
          lVar15 = local_68;
          plVar27 = local_90;
          uVar22 = uVar22 & ~(uint)uVar23;
          puVar21 = *(uint **)(param_1 + 0x70);
          if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
            puVar21 = puVar5;
          }
          iVar4 = (int)uVar25;
          lVar17 = (longlong)iVar4;
          uVar10 = puVar21[lVar17] & uVar22;
          if (uVar10 == 0) {
            iVar12 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar12 = uVar26 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar9 = iVar12;
            if (iVar12 < iVar4) {
              iVar9 = iVar4;
            }
            if (iVar4 < iVar12) {
              lVar19 = 0;
              do {
                uVar10 = puVar21[lVar17 + lVar19 + 1];
                if (uVar10 != 0) {
                  uVar25 = (ulonglong)(iVar4 + (int)lVar19 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_1405423e2;
                }
                iVar13 = iVar13 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar9 - lVar17 != lVar19);
              uVar22 = 0xffffffff;
              lVar17 = (longlong)iVar9;
            }
            uVar25 = lVar17 + 1U & 0xffffffff;
            puVar14 = local_88;
            puVar5 = local_80;
            uVar10 = uVar26;
          }
          else {
LAB_1405423e2:
            uVar23 = (ulonglong)(-uVar10 & uVar10);
            uVar24 = uVar23 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar10 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar26 <= (int)uVar10) {
              uVar10 = uVar26;
            }
          }
        } while (uVar10 != (uint)puVar14);
        lVar17 = (longlong)(int)uStack_60;
        if (lVar17 != 0) {
          lVar19 = 0;
          do {
            local_6c = *(undefined4 *)(lVar15 + lVar19);
            FUN_1405428e6(plVar27,&local_6c);
            lVar19 = lVar19 + 4;
          } while (lVar17 * 4 != lVar19);
        }
        if (local_68 != 0) {
          FUN_1400020a8(local_68);
        }
      }
LAB_140542522:
      iVar13 = *(int *)(param_1 + 0x58);
      iVar4 = *(int *)(param_1 + 0x84);
    }
    if (iVar13 != iVar4) {
      local_68 = 0;
      uStack_60 = 0;
      uVar26 = *(uint *)(param_1 + 0x78);
      if (uVar26 == 0) {
        uVar23 = 1;
        uVar25 = 0;
        uVar10 = 0;
        iVar13 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x70);
        if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x60);
        }
        uVar10 = *puVar5;
        if (uVar10 == 0) {
          iVar13 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar13 = uVar26 - 1;
          }
          uVar25 = 0;
          uVar23 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar23 = uVar25;
          }
          iVar13 = 0;
          do {
            if (uVar23 == uVar25) goto LAB_140541c93;
            iVar13 = iVar13 + 0x20;
            uVar10 = puVar5[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar25 = 0;
          iVar13 = 0;
        }
        uVar23 = (ulonglong)(-uVar10 & uVar10);
        uVar24 = uVar23 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar10 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar10) {
          uVar10 = uVar26;
        }
      }
      if (uVar10 != uVar26) {
        lVar15 = local_a0 + 0xa08;
        uVar22 = 0xffffffff;
        lVar17 = local_a0;
        local_88 = (uint *)(param_1 + 0x60);
        local_78 = (ulonglong)uVar26;
        do {
          local_80 = (uint *)CONCAT44(local_80._4_4_,uVar22);
          local_98 = (uint *)CONCAT44(local_98._4_4_,iVar13);
          lVar19 = *local_90;
          lVar6 = (longlong)(int)uVar10 * 0x20;
          puVar5 = (uint *)(lVar19 + lVar6);
          uVar26 = *(uint *)(lVar19 + 0x10 + lVar6);
          if (0 < (longlong)(int)uVar26) {
            plVar27 = (longlong *)(lVar19 + lVar6 + 8);
            uVar24 = (longlong)(int)uVar26;
            do {
              lVar19 = *plVar27;
              uVar26 = *(uint *)(lVar19 + -4 + uVar24 * 4);
              if ((longlong)(int)uStack_50 != 0) {
                _Dst = (void *)(lVar19 + uVar24 * 4 + -4);
                lVar6 = 0;
                do {
                  if (*(uint *)(local_58 + lVar6) == uVar26) {
                    uVar26 = puVar5[4];
                    if (uVar24 == uVar26) goto LAB_140542097;
                    iVar4 = uVar26 - (int)uVar24;
                    iVar13 = 1;
                    if (iVar4 < 1) {
                      iVar13 = iVar4;
                    }
                    goto LAB_1405425ad;
                  }
                  lVar6 = lVar6 + 4;
                } while ((longlong)(int)uStack_50 * 4 != lVar6);
              }
              uVar10 = *puVar5;
              if ((int)uVar10 < 0) {
LAB_140542052:
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                if ((int)uVar10 < *(int *)(lVar17 + 0xa20)) {
                  lVar19 = *(longlong *)(lVar17 + 0xa18);
                  if (*(longlong *)(lVar17 + 0xa18) == 0) {
                    lVar19 = lVar15;
                  }
                  if (((*(uint *)(lVar19 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) ==
                       0) || (lVar19 = *(longlong *)
                                        (*(longlong *)(lVar17 + 0x9f8) + (ulonglong)uVar10 * 8),
                             lVar19 == 0)) goto LAB_140542052;
                  uVar11 = *(undefined8 *)(lVar19 + 0x48);
                }
              }
              if ((int)uVar26 < 0) {
LAB_140542080:
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                if ((int)uVar26 < *(int *)(lVar17 + 0xa20)) {
                  lVar19 = *(longlong *)(lVar17 + 0xa18);
                  if (*(longlong *)(lVar17 + 0xa18) == 0) {
                    lVar19 = lVar15;
                  }
                  if (((*(uint *)(lVar19 + (ulonglong)(uVar26 >> 5) * 4) >> (uVar26 & 0x1f) & 1) ==
                       0) || (lVar17 = *(longlong *)
                                        (*(longlong *)(lVar17 + 0x9f8) + (ulonglong)uVar26 * 8),
                             lVar17 == 0)) goto LAB_140542080;
                  uVar18 = *(undefined8 *)(lVar17 + 0x48);
                }
              }
              FUN_1405427b8(param_1,uVar11,uVar18);
              uVar26 = puVar5[4];
              if (uVar24 != uVar26) {
                iVar4 = uVar26 - (int)uVar24;
                iVar13 = 1;
                if (iVar4 < 1) {
                  iVar13 = iVar4;
                }
                lVar19 = *plVar27;
                _Dst = (void *)(lVar19 + (uVar24 - 1) * 4);
LAB_1405425ad:
                memmove(_Dst,(void *)(lVar19 + (longlong)(int)(uVar26 - iVar13) * 4),
                        (longlong)iVar13 << 2);
                uVar26 = puVar5[4];
              }
LAB_140542097:
              puVar5[4] = uVar26 - 1;
              FUN_140542718(plVar27);
              bVar3 = 1 < (longlong)uVar24;
              lVar17 = local_a0;
              uVar24 = uVar24 - 1;
            } while (bVar3);
            uVar26 = puVar5[4];
          }
          uVar24 = uStack_60;
          puVar14 = local_88;
          if (uVar26 == 0) {
            lVar19 = (longlong)(int)uStack_60;
            uVar26 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar26);
            if (uStack_60._4_4_ < uVar26) {
              FUN_140543018(&local_68,uVar24 & 0xffffffff);
              lVar17 = local_a0;
            }
            *(uint *)(local_68 + lVar19 * 4) = *puVar5;
          }
          lVar19 = local_68;
          plVar27 = local_90;
          uVar22 = (uint)local_80 & ~(uint)uVar23;
          puVar5 = *(uint **)(param_1 + 0x70);
          if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
            puVar5 = puVar14;
          }
          uVar26 = *(uint *)(param_1 + 0x78);
          iVar4 = (int)uVar25;
          lVar6 = (longlong)iVar4;
          uVar10 = puVar5[lVar6] & uVar22;
          iVar13 = (int)local_98;
          if (uVar10 == 0) {
            iVar12 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar12 = uVar26 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar13 = (int)local_98 + 0x20;
            iVar9 = iVar12;
            if (iVar12 < iVar4) {
              iVar9 = iVar4;
            }
            if (iVar4 < iVar12) {
              lVar20 = 0;
              do {
                uVar10 = puVar5[lVar6 + lVar20 + 1];
                if (uVar10 != 0) {
                  uVar25 = (ulonglong)(iVar4 + (int)lVar20 + 1);
                  uVar22 = 0xffffffff;
                  goto LAB_14054219e;
                }
                iVar13 = iVar13 + 0x20;
                lVar20 = lVar20 + 1;
              } while (iVar9 - lVar6 != lVar20);
              uVar22 = 0xffffffff;
              iVar4 = iVar9;
            }
            uVar25 = (ulonglong)(iVar4 + 1);
            lVar17 = local_a0;
            uVar10 = uVar26;
          }
          else {
LAB_14054219e:
            uVar23 = (ulonglong)(-uVar10 & uVar10);
            uVar24 = uVar23 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            uVar10 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if ((int)uVar26 <= (int)uVar10) {
              uVar10 = uVar26;
            }
          }
        } while (uVar10 != (uint)local_78);
        lVar15 = (longlong)(int)uStack_60;
        if (lVar15 != 0) {
          lVar17 = 0;
          do {
            local_6c = *(undefined4 *)(lVar19 + lVar17);
            FUN_1405428e6(plVar27,&local_6c);
            lVar17 = lVar17 + 4;
          } while (lVar15 * 4 != lVar17);
        }
        if (local_68 != 0) {
          FUN_1400020a8(local_68);
        }
      }
    }
  }
LAB_140541c93:
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    local_98 = (uint *)(param_1 + 0xb0);
    iVar13 = *(int *)(param_1 + 200);
    if (iVar13 == 0) {
      uVar25 = 1;
      uVar23 = 0;
      iVar4 = 0;
      iVar12 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar5 = local_98;
      }
      uVar26 = *puVar5;
      if (uVar26 == 0) {
        iVar4 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar4 = iVar13 + -1;
        }
        uVar23 = 0;
        uVar25 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar25 = uVar23;
        }
        iVar12 = 0;
        do {
          if (uVar25 == uVar23) goto LAB_140541ebc;
          iVar12 = iVar12 + 0x20;
          uVar26 = puVar5[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar23 = 0;
        iVar12 = 0;
      }
      uVar25 = (ulonglong)(-uVar26 & uVar26);
      uVar24 = uVar25 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar13 <= iVar4) {
        iVar4 = iVar13;
      }
    }
    if (iVar4 != iVar13) {
      lVar15 = local_a0 + 0xa08;
      uVar26 = 0xffffffff;
      do {
        puVar5 = (uint *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 0xc);
        FUN_14054266e(param_1,puVar5);
        uVar10 = *puVar5;
        if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(local_a0 + 0xa20))) {
          lVar17 = *(longlong *)(local_a0 + 0xa18);
          if (*(longlong *)(local_a0 + 0xa18) == 0) {
            lVar17 = lVar15;
          }
          if (((((*(uint *)(lVar17 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0) &&
               (lVar17 = *(longlong *)(*(longlong *)(local_a0 + 0x9f8) + (ulonglong)uVar10 * 8),
               lVar17 != 0)) &&
              (plVar27 = *(longlong **)(lVar17 + 0x48), plVar27 != (longlong *)0x0)) &&
             (1 < *(byte *)((longlong)plVar27 + 0xc))) {
            pbVar2 = (byte *)(*(longlong *)(*plVar27 + 0x2c0) + 10 +
                             (longlong)(int)plVar27[1] * 0x10);
            *pbVar2 = *pbVar2 & 0xfd;
          }
        }
        uVar26 = uVar26 & ~(uint)uVar25;
        puVar5 = *(uint **)(param_1 + 0xc0);
        if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
          puVar5 = local_98;
        }
        iVar9 = *(int *)(param_1 + 200);
        iVar4 = (int)uVar23;
        lVar17 = (longlong)iVar4;
        uVar10 = puVar5[lVar17] & uVar26;
        if (uVar10 == 0) {
          iVar7 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar7 = iVar9 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar4) {
            iVar8 = iVar4;
          }
          if (iVar4 < iVar7) {
            lVar19 = 0;
            do {
              uVar10 = puVar5[lVar17 + lVar19 + 1];
              if (uVar10 != 0) {
                uVar23 = (ulonglong)(iVar4 + (int)lVar19 + 1);
                uVar26 = 0xffffffff;
                goto LAB_140541e44;
              }
              iVar12 = iVar12 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar8 - lVar17 != lVar19);
            uVar26 = 0xffffffff;
            iVar4 = iVar8;
          }
          uVar23 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar9;
        }
        else {
LAB_140541e44:
          uVar25 = (ulonglong)(-uVar10 & uVar10);
          uVar24 = uVar25 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar4 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar4) {
            iVar4 = iVar9;
          }
        }
      } while (iVar4 != iVar13);
    }
LAB_140541ebc:
    lVar15 = param_1 + 0xa0;
    if (*(int *)(param_1 + 0xe8) < 2) {
      FUN_1402c63d2(lVar15);
      FUN_140542f9e(lVar15,0);
    }
    else {
      FUN_140542f9e(lVar15,0);
      *(undefined4 *)(param_1 + 0xe8) = 1;
      FUN_1402c65b4(lVar15);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014054236b:
  uVar10 = piVar1[1];
  if (uVar10 == 0xffffffff) goto LAB_140542374;
  goto LAB_140542357;
}



// FUNCTION 14054266e FUN_14054266e body=170 status=ok
// SIG undefined FUN_14054266e(void)

void FUN_14054266e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = (longlong)iVar6 * 0x20;
        lVar1 = lVar2 + lVar5;
        if (*(int *)(lVar2 + lVar5) == *param_2) {
          iVar7 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          if (iVar7 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar7 * 0x20 + lVar2 + 0x18);
              iVar7 = *piVar4;
            } while (iVar7 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x18);
          if (*(longlong *)(*param_1 + 8 + lVar5) != 0) {
            FUN_1400020a8();
          }
          FUN_140542874(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 140542718 FUN_140542718 body=63 status=ok
// SIG undefined FUN_140542718(void)

void FUN_140542718(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140542758(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 140542758 FUN_140542758 body=95 status=ok
// SIG undefined FUN_140542758(void)

ulonglong FUN_140542758(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1405427b8 FUN_1405427b8 body=187 status=ok
// SIG undefined FUN_1405427b8(void)

void FUN_1405427b8(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    bVar2 = *(byte *)((longlong)param_3 + 0xc);
    if (1 < (bVar2 | *(byte *)((longlong)param_2 + 0xc))) {
      uVar3 = *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
      uVar4 = *(undefined4 *)(*(longlong *)(*param_3 + 0x80) + (longlong)(int)param_3[1] * 4);
      if (1 < *(byte *)((longlong)param_2 + 0xc)) {
        FUN_140542a8a(param_1,uVar3,uVar4);
        pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x2c0) + 10 + (longlong)(int)param_2[1] * 0x10);
        *pbVar1 = *pbVar1 | 2;
      }
      if (1 < bVar2) {
        FUN_140542a8a(param_1,uVar4,uVar3);
        pbVar1 = (byte *)(*(longlong *)(*param_3 + 0x2c0) + 10 + (longlong)(int)param_3[1] * 0x10);
        *pbVar1 = *pbVar1 | 2;
      }
    }
  }
  return;
}



// FUNCTION 140542874 FUN_140542874 body=114 status=ok
// SIG undefined FUN_140542874(void)

void FUN_140542874(longlong *param_1,int param_2)

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



// FUNCTION 1405428e6 FUN_1405428e6 body=98 status=ok
// SIG undefined FUN_1405428e6(void)

undefined8 FUN_1405428e6(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_2) {
          FUN_140542948();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140542948 FUN_140542948 body=95 status=ok
// SIG undefined FUN_140542948(void)

void FUN_140542948(longlong *param_1,int param_2)

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
  FUN_1405429a8(param_1,param_2,1);
  return;
}



// FUNCTION 1405429a8 FUN_1405429a8 body=89 status=ok
// SIG undefined FUN_1405429a8(void)

void FUN_1405429a8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140542a02(param_1,param_2,param_3);
  return;
}



// FUNCTION 140542a02 FUN_140542a02 body=136 status=ok
// SIG undefined FUN_140542a02(void)

void FUN_140542a02(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140542a8a FUN_140542a8a body=945 status=ok
// SIG undefined FUN_140542a8a(void)

void FUN_140542a8a(longlong *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  undefined8 *puVar23;
  
  iVar20 = (int)param_1[1];
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  if (iVar20 != iVar7) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar17 = *param_1 + (longlong)iVar8 * 0x20;
        if (*(uint *)(*param_1 + (longlong)iVar8 * 0x20) == param_2) {
          if (lVar17 != 0) goto LAB_140542c4c;
          break;
        }
        iVar8 = *(int *)(lVar17 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if (iVar7 == 0) {
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1447711aa(param_1,iVar20);
    }
    iVar7 = (int)param_1[5];
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
    plVar9 = param_1 + 2;
    iVar14 = iVar7 + 1;
    iVar22 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar22 = iVar7;
    }
    if (iVar22 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        if (iVar7 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar8 = iVar7;
        }
        else {
          uVar16 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar16) {
              uVar13 = uVar16;
            }
          }
          else {
            uVar13 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar13 << 2,0);
          iVar8 = (int)(uVar10 >> 2);
          iVar14 = -0x20;
          if ((int)uVar16 <= iVar8) {
            iVar14 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar9,iVar8);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar8 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar9;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar7 & 0x1f;
    puVar11 = (uint *)((longlong)plVar9 + (longlong)(iVar22 >> 5) * 4);
    *puVar11 = *puVar11 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar17 = (longlong)iVar20;
    iVar8 = *(int *)(*param_1 + 4 + lVar17 * 0x20);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar7 + -1;
    if (iVar7 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x20) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar7 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar7 = iVar20;
  }
  puVar11 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar20 & 0x1f);
  iVar7 = 1;
  lVar21 = *param_1;
  lVar17 = lVar17 * 0x20;
  puVar1 = (undefined4 *)(lVar21 + lVar17);
  *(uint *)(lVar21 + lVar17) = param_2;
  puVar23 = (undefined8 *)(lVar21 + 8 + lVar17);
  *puVar23 = 0;
  puVar23[1] = 0;
  *(undefined4 *)(lVar21 + 0x18 + lVar17) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(uint *)(*param_1 + (longlong)iVar8 * 0x20) == param_2) {
          if (*(longlong *)(puVar2 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
          *puVar2 = uVar3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          FUN_140542874(param_1,iVar20);
          goto LAB_140542c2b;
        }
        iVar8 = puVar2[6];
      } while (iVar8 != -1);
    }
  }
  if (3 < uVar16) {
    uVar10 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar7 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar1[7] = param_2;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    puVar1[6] = *(undefined4 *)
                 ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar20;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_14054317a(param_1);
  }
LAB_140542c2b:
  lVar17 = *param_1 + (longlong)iVar20 * 0x20;
LAB_140542c4c:
  puVar23 = (undefined8 *)(lVar17 + 8);
  puVar11 = (uint *)*puVar23;
  iVar7 = *(int *)(lVar17 + 0x10);
  lVar21 = (longlong)iVar7;
  if (lVar21 != 0) {
    lVar18 = lVar21 * 8;
    puVar15 = puVar11;
    do {
      if (*puVar15 == param_3) {
        if (puVar15 != (uint *)0x0) {
          puVar15[1] = puVar15[1] + 1;
          return;
        }
        break;
      }
      puVar15 = puVar15 + 2;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  *(uint *)(lVar17 + 0x10) = iVar7 + 1U;
  if (*(uint *)(lVar17 + 0x14) < iVar7 + 1U) {
    FUN_140542e3c(puVar23,iVar7);
    puVar11 = (uint *)*puVar23;
  }
  *(ulonglong *)(puVar11 + lVar21 * 2) = (ulonglong)param_3 | 0x100000000;
  return;
}



// FUNCTION 140542e3c FUN_140542e3c body=353 status=ok
// SIG undefined FUN_140542e3c(void)

void FUN_140542e3c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140542ec1;
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
LAB_140542ec1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140542f9e FUN_140542f9e body=121 status=ok
// SIG undefined FUN_140542f9e(void)

void FUN_140542f9e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 140543018 FUN_140543018 body=353 status=ok
// SIG undefined FUN_140543018(void)

void FUN_140543018(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14054309d;
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
LAB_14054309d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14054317a FUN_14054317a body=539 status=ok
// SIG undefined FUN_14054317a(void)

void FUN_14054317a(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140543350;
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
LAB_140543350:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140543396 FUN_140543396 body=85 status=ok
// SIG undefined FUN_140543396(void)

longlong FUN_140543396(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1405433ec();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  if (DAT_14cade0a0 == '\0') {
    FUN_1405434d2(lVar2,0);
    DAT_14cade0a0 = '\x01';
  }
  return lVar2;
}



// FUNCTION 1405433ec FUN_1405433ec body=228 status=ok
// SIG undefined FUN_1405433ec(void)

longlong FUN_1405433ec(void)

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
  if (DAT_14cac16c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1478708b1;
    local_40 = &LAB_145a3321d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/Engine",L"GbxViewFilterManager",&DAT_14cac16c0,&DAT_1478708b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac16c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405434d2 FUN_1405434d2 body=1047 status=ok
// SIG undefined FUN_1405434d2(void)

void FUN_1405434d2(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  uint *local_118;
  undefined8 local_110;
  undefined2 *local_108;
  int local_100;
  undefined2 *local_f8;
  int local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar5 = FUN_140851d9a();
  iVar12 = 0;
  lVar6 = FUN_140277b32(uVar5,0,L"/Script/GbxCore.EGbxViewFlag",1);
  FUN_140056680(local_58,L"EngineFlag");
  FUN_140056680(local_68,L"GameFlag");
  FUN_140056680(local_78,L"DisplayName");
  FUN_140056680(local_88,L"bOwner");
  FUN_140056680(local_98,L"bOnlyOwner");
  FUN_140056680(local_a8,L"bOnlyViewportOwner");
  FUN_140056680(local_b8,L"bShowForViewport");
  FUN_140056680(local_c8,L"bHideForViewport");
  FUN_140056680(local_d8,&DAT_149e0209e);
  FUN_140056680(local_e8);
  uVar4 = *(uint *)(lVar6 + 0x48);
  uVar10 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar7 = uVar4;
  if (*(uint *)(param_1 + 0x54) != uVar4) {
    FUN_1402191ca(plVar1);
    iVar12 = *(int *)(param_1 + 0x50);
    uVar7 = *(uint *)(param_1 + 0x54);
  }
  *(uint *)(param_1 + 0x50) = iVar12 + uVar4;
  if (uVar7 - iVar12 < uVar4) {
    FUN_1446f84a2(plVar1);
  }
  memset((void *)((longlong)iVar12 * 8 + *(longlong *)(param_1 + 0x48)),0,uVar10 * 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (uVar4 == 0) {
    uVar4 = 0xf;
    uVar7 = 5;
    uVar8 = 8;
  }
  else {
    uVar13 = 0;
    do {
      FUN_1401cfb1c(lVar6,&local_f8,uVar13 & 0xffffffff);
      puVar9 = &DAT_149dfb77a;
      if (local_f0 != 0) {
        puVar9 = local_f8;
      }
      FUN_1446f470e(&local_108,puVar9,1);
      *(undefined2 **)(*plVar1 + uVar13 * 8) = local_108;
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
    uVar4 = *(uint *)(param_1 + 0x58) | 0xf;
    uVar7 = *(uint *)(param_1 + 0x5c) | 5;
    uVar8 = *(uint *)(param_1 + 0x60) | 8;
  }
  *(uint *)(param_1 + 0x58) = uVar4;
  *(uint *)(param_1 + 0x5c) = uVar7;
  *(uint *)(param_1 + 0x60) = uVar8;
  iVar12 = *(int *)(param_1 + 0x40);
  if (0 < iVar12) {
    local_118 = (uint *)(param_1 + 0x58);
    lVar6 = 0x10;
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x38);
      if (*(longlong *)(lVar3 + -0xc + lVar6) != 0) {
        bVar2 = *(byte *)(lVar6 + lVar3 + -0x10);
        FUN_1400021e4(*plVar1 + (ulonglong)((uint)bVar2 * 8),&local_f8);
        FUN_1400021e4(lVar6 + lVar3 + -0xc,&local_108);
        puVar9 = &DAT_149dfb77a;
        if (local_100 != 0) {
          puVar9 = local_108;
        }
        FUN_1446f470e(&local_110,puVar9,1);
        *(undefined8 *)(*plVar1 + (ulonglong)((uint)bVar2 * 8)) = local_110;
        if (*(char *)(lVar3 + -4 + lVar6) == '\x01') {
          *local_118 = *local_118 | 1 << (bVar2 & 0x1f);
        }
        if (*(char *)(lVar3 + -3 + lVar6) == '\x01') {
          *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1 << (bVar2 & 0x1f);
        }
        if (*(char *)(lVar3 + -2 + lVar6) == '\x01') {
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1 << (bVar2 & 0x1f);
        }
        if (*(char *)(lVar3 + -1 + lVar6) == '\x01') {
          *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1 << (bVar2 & 0x1f);
        }
        if (*(char *)(lVar3 + lVar6) == '\x01') {
          *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1 << (bVar2 & 0x1f);
        }
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar12 = *(int *)(param_1 + 0x40);
      }
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0x14;
    } while (lVar11 < iVar12);
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405438ec FUN_1405438ec body=3074 status=ok
// SIG undefined FUN_1405438ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405438ec(ulonglong param_1,undefined8 param_2,undefined1 (*param_3) [16],
                       double param_4,undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  double *pdVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  float fVar37;
  double dVar38;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  longlong *plVar39;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auStack_348 [40];
  double local_320;
  double local_318 [4];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double *local_2a8;
  longlong *local_2a0;
  undefined1 *local_298;
  double *local_290;
  longlong local_280 [2];
  double local_270;
  longlong local_268 [11];
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  longlong *local_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined1 local_158 [8];
  longlong *plStack_150;
  undefined1 local_148 [16];
  longlong *local_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  dVar6 = 1.0 / param_6[2];
  dVar5 = 1.0 / param_6[1];
  dVar27 = 1.0 / *param_6;
  local_270 = param_4;
  FUN_1405444ef(local_268,param_2,param_6);
  if (param_5 == (undefined8 *)0x0) {
    pauVar21 = param_3;
    pdVar22 = local_318;
    for (lVar16 = 0xc; auVar41 = _local_158, lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar22 = *(double *)*pauVar21;
      pauVar21 = (undefined1 (*) [16])(*pauVar21 + 8);
      pdVar22 = pdVar22 + 1;
    }
    local_2e8 = local_2e8 * param_6[2];
    dStack_2f0 = dStack_2f0 * param_6[1];
    local_2f8 = local_2f8 * *param_6;
    uStack_2e0 = 0;
    if ((0.9 < ABS(*(double *)(param_3[1] + 8))) ||
       (ABS(*(double *)(param_3[1] + 8) + -0.7071067690849304) <= 0.01)) {
      (**(code **)(local_268[0] + 0x80))(local_268,local_1d8);
      FUN_1400c6592(local_1d8,local_158,local_318);
      dVar32 = ABS(param_4);
      dVar4 = (dStack_130 + dVar32) * dVar6;
      plVar39 = (longlong *)(((double)local_138 + dVar32) * dVar5);
      dVar36 = ((double)local_148._8_8_ + dVar32) * dVar27;
      dVar6 = ((double)local_148._0_8_ - dVar32) * dVar6;
      plVar7 = (longlong *)(((double)plStack_150 - dVar32) * dVar5);
      dVar27 = ((double)local_158 - dVar32) * dVar27;
      dVar5 = dVar6;
      if (dVar4 <= dVar6) {
        dVar5 = dVar4;
      }
      plVar10 = plVar7;
      if ((double)plVar39 <= (double)plVar7) {
        plVar10 = plVar39;
      }
      dVar32 = dVar27;
      if (dVar36 <= dVar27) {
        dVar32 = dVar36;
      }
      if (dVar6 <= dVar4) {
        dVar6 = dVar4;
      }
      if ((double)plVar7 <= (double)plVar39) {
        plVar7 = plVar39;
      }
      if (dVar27 <= dVar36) {
        dVar27 = dVar36;
      }
      plStack_150 = plVar10;
      local_158 = (undefined1  [8])dVar32;
      local_148._8_8_ = dVar27;
      local_148._0_8_ = dVar5;
      fVar37 = (float)*(double *)param_3[1];
      fVar43 = (float)*(double *)(param_3[1] + 8);
      fVar44 = (float)*(double *)*param_3;
      fVar45 = (float)*(double *)(*param_3 + 8);
      dStack_1b0 = *param_6;
      dStack_1a8 = param_6[1];
      dStack_1a0 = param_6[2];
      local_188 = 0;
      fVar26 = fVar44 * fVar44 + fVar45 * fVar45;
      fVar31 = fVar37 * fVar37 + fVar43 * fVar43;
      auVar42._0_4_ = fVar31 + fVar26;
      auVar42._4_4_ = fVar31 + fVar26;
      auVar42._8_4_ = fVar26 + fVar31;
      auVar42._12_4_ = fVar26 + fVar31;
      auVar41._4_4_ = -(uint)(1e-08 <= auVar42._4_4_);
      auVar41._0_4_ = -(uint)(1e-08 <= auVar42._0_4_);
      auVar41._8_4_ = -(uint)(1e-08 <= auVar42._8_4_);
      auVar41._12_4_ = -(uint)(1e-08 <= auVar42._12_4_);
      auVar42 = sqrtps(auVar42,auVar42);
      auVar42 = divps(_DAT_1499314a0,auVar42);
      auVar48._0_4_ = auVar42._0_4_ * fVar44;
      auVar48._4_4_ = auVar42._4_4_ * fVar45;
      auVar48._8_4_ = auVar42._8_4_ * fVar37;
      auVar48._12_4_ = auVar42._12_4_ * fVar43;
      local_1d8 = blendvps(_DAT_149932320,auVar48,auVar41);
      local_1c8._0_4_ = (float)(*(double *)param_3[2] * *param_6);
      local_1c8._4_4_ = (float)(*(double *)(param_3[2] + 8) * param_6[1]);
      local_1c8._8_4_ = (float)(*(double *)param_3[3] * param_6[2]);
      local_1c8._12_4_ = 0;
      local_1b8 = local_268;
      local_198 = param_4;
      local_190 = param_1;
      local_138 = plVar7;
      dStack_130 = dVar6;
      if (*(int *)(param_1 + 0xe8) != 0) {
        local_2b8 = (longlong *)0x0;
        uStack_2b0 = 0;
        FUN_14481578e(&local_2b8,0x10);
        uVar23 = uStack_2b0;
        puVar20 = (undefined8 *)(longlong)(int)uStack_2b0;
        uVar13 = (int)uStack_2b0 + 1;
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar13);
        if (uStack_2b0._4_4_ < uVar13) {
          FUN_1446f48e2(&local_2b8,uVar23 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_2b8 + (longlong)puVar20 * 4) = 0;
        if ((int)uStack_2b0 != 0) {
          puVar20 = &local_2b8;
          do {
            lVar16 = (longlong)(int)uStack_2b0;
            uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)uStack_2b0 + -1);
            lVar24 = (longlong)*(int *)((longlong)local_2b8 + lVar16 * 4 + -4) * 0x50 +
                     *(longlong *)(param_1 + 0xe0);
            lVar16 = 0;
            bVar11 = true;
            do {
              bVar18 = bVar11;
              uVar23 = uStack_2b0;
              iVar3 = *(int *)(lVar24 + 0x40 + lVar16 * 4);
              uVar25 = (ulonglong)iVar3;
              if (uVar25 != 0xffffffffffffffff) {
                lVar17 = lVar16 * 0x20;
                pfVar2 = (float *)(lVar24 + 0x10 + lVar17);
                pfVar1 = (float *)(lVar24 + lVar17);
                auVar33._4_4_ = -(uint)((float)(double)plVar7 < pfVar1[1]);
                auVar33._0_4_ = -(uint)((float)dVar27 < *pfVar1);
                auVar33._8_4_ = -(uint)((float)dVar6 < pfVar1[2]);
                auVar33._12_4_ = -(uint)(0.0 < pfVar1[3]);
                auVar29._4_4_ = -(uint)(pfVar2[1] < (float)(double)plVar10);
                auVar29._0_4_ = -(uint)(*pfVar2 < (float)dVar32);
                auVar29._8_4_ = -(uint)(pfVar2[2] < (float)dVar5);
                auVar29._12_4_ = -(uint)(pfVar2[3] < 0.0);
                iVar15 = movmskps((int)lVar17,auVar33 | auVar29);
                if (iVar15 == 0) {
                  iVar15 = *(int *)(lVar24 + 0x48 + lVar16 * 4);
                  if (iVar15 == 0) {
                    lVar16 = (longlong)(int)uStack_2b0;
                    uVar13 = (int)uStack_2b0 + 1;
                    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar13);
                    if (uStack_2b0._4_4_ < uVar13) {
                      FUN_1446f48e2(puVar20,uVar23 & 0xffffffff);
                    }
                    *(int *)((longlong)local_2b8 + lVar16 * 4) = iVar3;
                  }
                  else if (0 < iVar15) {
                    uVar23 = uVar25 << 5 | 0x10;
                    do {
                      lVar16 = *(longlong *)(param_1 + 0xf0);
                      pfVar1 = (float *)(lVar16 + uVar23);
                      pfVar2 = (float *)(lVar16 + -0x10 + uVar23);
                      auVar34._4_4_ = -(uint)((float)(double)plVar7 < pfVar2[1]);
                      auVar34._0_4_ = -(uint)((float)dVar27 < *pfVar2);
                      auVar34._8_4_ = -(uint)((float)dVar6 < pfVar2[2]);
                      auVar34._12_4_ = -(uint)(0.0 < pfVar2[3]);
                      auVar30._4_4_ = -(uint)(pfVar1[1] < (float)(double)plVar10);
                      auVar30._0_4_ = -(uint)(*pfVar1 < (float)dVar32);
                      auVar30._8_4_ = -(uint)(pfVar1[2] < (float)dVar5);
                      auVar30._12_4_ = -(uint)(pfVar1[3] < 0.0);
                      iVar14 = movmskps((int)lVar16,auVar34 | auVar30);
                      if ((iVar14 == 0) &&
                         (cVar12 = FUN_1405448f0(local_1d8,uVar25 & 0xffffffff), cVar12 == '\0'))
                      goto LAB_14054423c;
                      uVar25 = uVar25 + 1;
                      uVar23 = uVar23 + 0x20;
                    } while ((longlong)uVar25 < (longlong)(iVar15 + iVar3));
                  }
                }
              }
              lVar16 = 1;
              bVar11 = false;
            } while (bVar18);
          } while ((int)uStack_2b0 != 0);
        }
LAB_14054423c:
        if (local_2b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar23 = CONCAT71((int7)((ulonglong)puVar20 >> 8),local_188);
        goto LAB_140543e5f;
      }
    }
    else {
      param_4 = ABS(param_4);
      dVar4 = ((local_1e8 + param_4) - (local_200 - param_4)) * 0.5;
      dVar35 = ((local_1f0 + param_4) - (local_208 - param_4)) * 0.5;
      dVar38 = ((local_1f8 + param_4) - (local_210 - param_4)) * 0.5;
      dVar46 = (local_200 - param_4) + dVar4;
      dVar32 = (local_208 - param_4) + dVar35;
      dVar9 = (local_210 - param_4) + dVar38;
      dVar49 = dVar9 * local_318[2] - local_318[0] * dVar46;
      dVar36 = dVar32 * local_318[0] - local_318[1] * dVar9;
      dVar8 = dVar46 * local_318[1] - local_318[2] * dVar32;
      dVar8 = dVar8 + dVar8;
      dVar49 = dVar49 + dVar49;
      dVar36 = dVar36 + dVar36;
      local_2f8 = local_2f8 +
                  (dVar36 * local_318[1] - dVar49 * local_318[2]) + local_318[3] * dVar8 + dVar9;
      dStack_2f0 = dStack_2f0 +
                   (local_318[2] * dVar8 - local_318[0] * dVar36) + local_318[3] * dVar49 + dVar32;
      local_2e8 = local_2e8 +
                  dVar36 * local_318[3] + dVar46 + (dVar49 * local_318[0] - dVar8 * local_318[1]);
      uStack_2e0 = 0;
      local_158._4_4_ = (float)dVar5;
      local_158._0_4_ = (float)dVar27;
      plStack_150._4_4_ = auVar41._12_4_;
      plStack_150._0_4_ = (float)dVar6;
      local_2b8 = (longlong *)CONCAT44((float)dVar35,(float)dVar38);
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(float)dVar4);
      local_320 = dVar5;
      FUN_1402e7b1c(local_1d8,local_318,&local_2b8,local_158);
      fVar37 = (float)*(double *)param_3[1];
      fVar43 = (float)*(double *)(param_3[1] + 8);
      fVar44 = (float)*(double *)*param_3;
      fVar45 = (float)*(double *)(*param_3 + 8);
      dStack_130 = *param_6;
      dStack_128 = param_6[1];
      dStack_120 = param_6[2];
      local_118 = local_270;
      local_108 = local_108 & 0xffffffffffffff00;
      fVar26 = fVar44 * fVar44 + fVar45 * fVar45;
      fVar31 = fVar37 * fVar37 + fVar43 * fVar43;
      auVar40._0_4_ = fVar31 + fVar26;
      auVar40._4_4_ = fVar31 + fVar26;
      auVar40._8_4_ = fVar26 + fVar31;
      auVar40._12_4_ = fVar26 + fVar31;
      auVar28._4_4_ = -(uint)(1e-08 <= auVar40._4_4_);
      auVar28._0_4_ = -(uint)(1e-08 <= auVar40._0_4_);
      auVar28._8_4_ = -(uint)(1e-08 <= auVar40._8_4_);
      auVar28._12_4_ = -(uint)(1e-08 <= auVar40._12_4_);
      auVar41 = sqrtps(auVar40,auVar40);
      auVar41 = divps(_DAT_1499314a0,auVar41);
      auVar47._0_4_ = auVar41._0_4_ * fVar44;
      auVar47._4_4_ = auVar41._4_4_ * fVar45;
      auVar47._8_4_ = auVar41._8_4_ * fVar37;
      auVar47._12_4_ = auVar41._12_4_ * fVar43;
      _local_158 = blendvps(_DAT_149932320,auVar47,auVar28);
      local_148._0_4_ = (float)(*(double *)param_3[2] * *param_6);
      local_148._4_4_ = (float)(*(double *)(param_3[2] + 8) * param_6[1]);
      local_148._8_4_ = (float)(*(double *)param_3[3] * param_6[2]);
      local_148._12_4_ = 0;
      local_138 = local_268;
      uStack_110 = param_1;
      if (*(int *)(param_1 + 0xe8) != 0) {
        local_2b8 = (longlong *)0x0;
        uStack_2b0 = 0;
        FUN_14481578e(&local_2b8,0x10);
        uVar23 = uStack_2b0;
        puVar19 = (undefined1 *)(longlong)(int)uStack_2b0;
        uVar13 = (int)uStack_2b0 + 1;
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar13);
        if (uStack_2b0._4_4_ < uVar13) {
          FUN_1446f48e2(&local_2b8,uVar23 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_2b8 + (longlong)puVar19 * 4) = 0;
        if ((int)uStack_2b0 != 0) {
          puVar19 = local_1d8;
          do {
            lVar16 = (longlong)(int)uStack_2b0;
            uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)uStack_2b0 + -1);
            lVar16 = (longlong)*(int *)((longlong)local_2b8 + lVar16 * 4 + -4) * 0x50 +
                     *(longlong *)(param_1 + 0xe0);
            lVar24 = 0;
            bVar11 = true;
            do {
              bVar18 = bVar11;
              iVar3 = *(int *)(lVar16 + 0x40 + lVar24 * 4);
              uVar23 = (ulonglong)iVar3;
              if ((uVar23 != 0xffffffffffffffff) &&
                 (cVar12 = FUN_1402e78fc(puVar19,lVar24 * 0x20 + lVar16), uVar25 = uStack_2b0,
                 cVar12 != '\0')) {
                iVar15 = *(int *)(lVar16 + 0x48 + lVar24 * 4);
                if (iVar15 == 0) {
                  lVar24 = (longlong)(int)uStack_2b0;
                  uVar13 = (int)uStack_2b0 + 1;
                  uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar13);
                  if (uStack_2b0._4_4_ < uVar13) {
                    FUN_1446f48e2(&local_2b8,uVar25 & 0xffffffff);
                  }
                  *(int *)((longlong)local_2b8 + lVar24 * 4) = iVar3;
                }
                else if (0 < iVar15) {
                  lVar24 = uVar23 << 5;
                  do {
                    cVar12 = FUN_1402e78fc(puVar19,*(longlong *)(param_1 + 0xf0) + lVar24);
                    if ((cVar12 != '\0') &&
                       (cVar12 = FUN_1405448f0(local_158,uVar23 & 0xffffffff), cVar12 == '\0'))
                    goto LAB_140543e45;
                    uVar23 = uVar23 + 1;
                    lVar24 = lVar24 + 0x20;
                  } while ((longlong)uVar23 < (longlong)(iVar15 + iVar3));
                }
              }
              lVar24 = 1;
              bVar11 = false;
            } while (bVar18);
          } while ((int)uStack_2b0 != 0);
        }
LAB_140543e45:
        if (local_2b8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar23 = CONCAT71((int7)((ulonglong)puVar19 >> 8),(undefined1)local_108);
        goto LAB_140543e5f;
      }
    }
    uVar23 = 0;
  }
  else {
    pauVar21 = param_3;
    puVar20 = (undefined8 *)local_1d8;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar20 = *(undefined8 *)*pauVar21;
      pauVar21 = (undefined1 (*) [16])(*pauVar21 + 8);
      puVar20 = puVar20 + 1;
    }
    dStack_1a8 = dStack_1a8 * param_6[2];
    dStack_1b0 = dStack_1b0 * param_6[1];
    local_1b8 = (longlong *)((double)local_1b8 * *param_6);
    dStack_1a0 = 0.0;
    (**(code **)(local_268[0] + 0x80))(local_268,local_158);
    FUN_1400c6592(local_158,local_318,local_1d8);
    param_4 = ABS(param_4);
    dVar36 = (dStack_2f0 + param_4) * dVar6;
    dVar4 = (local_2f8 + param_4) * dVar5;
    dVar32 = (local_318[3] + param_4) * dVar27;
    dStack_2f0 = (local_318[2] - param_4) * dVar6;
    local_2f8 = (local_318[1] - param_4) * dVar5;
    local_318[3] = (local_318[0] - param_4) * dVar27;
    local_318[2] = dStack_2f0;
    if (dVar36 <= dStack_2f0) {
      local_318[2] = dVar36;
    }
    local_318[1] = local_2f8;
    if (dVar4 <= local_2f8) {
      local_318[1] = dVar4;
    }
    local_318[0] = local_318[3];
    if (dVar32 <= local_318[3]) {
      local_318[0] = dVar32;
    }
    if (dStack_2f0 <= dVar36) {
      dStack_2f0 = dVar36;
    }
    if (local_2f8 <= dVar4) {
      local_2f8 = dVar4;
    }
    if (local_318[3] <= dVar32) {
      local_318[3] = dVar32;
    }
    FUN_140d8788e(param_1 + 0xe0,local_280,local_318);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    dStack_128 = *(double *)param_3[3] * param_6[2];
    dStack_130 = *(double *)(param_3[2] + 8) * param_6[1];
    _local_158 = *param_3;
    local_138 = (longlong *)(*(double *)param_3[2] * *param_6);
    local_148 = param_3[1];
    dStack_120 = 0.0;
    local_118 = 1.0;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    local_2a8 = param_6;
    local_290 = &local_270;
    local_2b8 = local_280;
    uStack_2b0 = param_1;
    local_2a0 = local_268;
    local_298 = local_158;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar13 = FUN_146e59424(&local_2b8,param_1 + 0x60,param_5);
    }
    else {
      uVar13 = FUN_146e596f4(&local_2b8,param_1 + 0x70,param_5);
    }
    uVar23 = (ulonglong)uVar13;
    if (local_280[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_140543e5f:
  FUN_140062896(local_268);
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffff01;
}



// FUNCTION 1405444ef FUN_1405444ef body=184 status=ok
// SIG undefined FUN_1405444ef(void)

undefined8 FUN_1405444ef(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_1405445a8(local_a8,&local_c8,&local_c0,0);
  FUN_1405447d8(param_1,local_a8);
  FUN_140062896(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405445a8 FUN_1405445a8 body=242 status=ok
// SIG undefined FUN_1405445a8(void)

undefined8 *
FUN_1405445a8(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bf10;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_14054469a(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 14054469a FUN_14054469a body=128 status=ok
// SIG undefined FUN_14054469a(void)

void FUN_14054469a(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar2 * 8);
    uVar3 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar3 & 0x3eb0c6f7a0000000 | ~uVar3 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar2 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar2 * 8) = 1.0 / dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x20) * *(double *)(*(longlong *)(param_1 + 0x88) + 0x10) +
       *(double *)(param_1 + 0x50);
  FUN_14054471a();
  return;
}



// FUNCTION 14054471a FUN_14054471a body=190 status=ok
// SIG undefined FUN_14054471a(void)

void FUN_14054471a(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  dVar5 = (double)*(float *)(lVar1 + 0x48) * *(double *)(param_1 + 0x30);
  dVar7 = (double)*(float *)(lVar1 + 0x44) * *(double *)(param_1 + 0x28);
  dVar10 = (double)*(float *)(lVar1 + 0x40) * *(double *)(param_1 + 0x20);
  dVar8 = (double)*(float *)(lVar1 + 0x54) * *(double *)(param_1 + 0x30);
  dVar9 = (double)*(float *)(lVar1 + 0x50) * *(double *)(param_1 + 0x28);
  dVar6 = (double)*(float *)(lVar1 + 0x4c) * *(double *)(param_1 + 0x20);
  dVar2 = dVar5;
  if (dVar8 <= dVar5) {
    dVar2 = dVar8;
  }
  dVar3 = dVar7;
  if (dVar9 <= dVar7) {
    dVar3 = dVar9;
  }
  dVar4 = dVar10;
  if (dVar6 <= dVar10) {
    dVar4 = dVar6;
  }
  *(double *)(param_1 + 0x58) = dVar4;
  *(double *)(param_1 + 0x60) = dVar3;
  *(double *)(param_1 + 0x68) = dVar2;
  if (dVar5 <= dVar8) {
    dVar5 = dVar8;
  }
  if (dVar7 <= dVar9) {
    dVar7 = dVar9;
  }
  if (dVar10 <= dVar6) {
    dVar10 = dVar6;
  }
  *(double *)(param_1 + 0x70) = dVar10;
  *(double *)(param_1 + 0x78) = dVar7;
  *(double *)(param_1 + 0x80) = dVar5;
  return;
}



// FUNCTION 1405447d8 FUN_1405447d8 body=279 status=ok
// SIG undefined FUN_1405447d8(void)

void FUN_1405447d8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x88) + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar2;
  *(byte *)((longlong)param_1 + 0x1d) = bVar2;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bf10;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar1;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}



// FUNCTION 1405448f0 FUN_1405448f0 body=917 status=ok
// SIG undefined FUN_1405448f0(void)

ulonglong FUN_1405448f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  float fVar18;
  undefined1 auStack_168 [32];
  double *local_148;
  double *local_140;
  double *local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined1 *local_90;
  undefined8 local_88;
  code *local_80;
  longlong local_78;
  float local_70;
  undefined4 local_6c;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
    local_138 = &local_e8;
    local_140 = &local_c8;
    local_148 = &local_a8;
    FUN_146e53748(param_1 + 0x28,param_2,lVar1 + 0x20,lVar1 + 0x60);
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x48);
    lVar1 = *(longlong *)(lVar1 + 0x70);
    lVar4 = (longlong)(int)param_2;
    uVar3 = (ulonglong)*(ushort *)(lVar1 + lVar4 * 6);
    fVar8 = (float)*(double *)(param_1 + 0x38);
    fVar10 = (float)*(double *)(param_1 + 0x30);
    fVar18 = (float)*(double *)(param_1 + 0x28);
    local_98 = (double)(*(float *)(lVar2 + 8 + uVar3 * 0xc) * fVar8);
    dStack_a0 = (double)(*(float *)(lVar2 + 4 + uVar3 * 0xc) * fVar10);
    local_a8 = (double)(*(float *)(lVar2 + uVar3 * 0xc) * fVar18);
    uVar5 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar4 * 6);
    dStack_c0 = (double)(*(float *)(lVar2 + 4 + uVar5 * 0xc) * fVar10);
    local_c8 = (double)(*(float *)(lVar2 + uVar5 * 0xc) * fVar18);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar4 * 6);
    local_b8 = (double)(*(float *)(lVar2 + 8 + uVar5 * 0xc) * fVar8);
    local_d8 = (double)(fVar8 * *(float *)(lVar2 + 8 + uVar3 * 0xc));
    dStack_e0 = (double)(fVar10 * *(float *)(lVar2 + 4 + uVar3 * 0xc));
    local_e8 = (double)(fVar18 * *(float *)(lVar2 + uVar3 * 0xc));
  }
  fVar8 = (float)local_98;
  local_128._0_4_ = (float)local_a8;
  local_128._4_4_ = (float)dStack_a0;
  local_128._8_4_ = fVar8;
  local_128._12_4_ = 0;
  local_118._0_4_ = (float)local_c8;
  local_118._4_4_ = (float)dStack_c0;
  local_118._8_4_ = (float)local_b8;
  local_118._12_4_ = 0;
  fVar18 = (float)local_d8;
  fVar11 = (float)local_e8;
  fVar12 = (float)dStack_e0;
  fVar10 = (float)local_b8 - fVar8;
  local_f8._4_4_ =
       (fVar11 - local_128._0_4_) * fVar10 - (local_118._0_4_ - local_128._0_4_) * (fVar18 - fVar8);
  local_f8._0_4_ =
       (fVar18 - fVar8) * (local_118._4_4_ - local_128._4_4_) - fVar10 * (fVar12 - local_128._4_4_);
  local_f8._8_4_ =
       (fVar12 - local_128._4_4_) * (local_118._0_4_ - local_128._0_4_) -
       (local_118._4_4_ - local_128._4_4_) * (fVar11 - local_128._0_4_);
  local_f8._12_4_ = 0;
  local_108._4_4_ = fVar12;
  local_108._0_4_ = fVar11;
  local_108._8_4_ = fVar18;
  local_108._12_4_ = 0;
  local_140 = *(double **)(param_1 + 0x40);
  local_78 = *(longlong *)(param_1 + 0x20);
  dVar7 = *(double *)(local_78 + 0x80) - *(double *)(local_78 + 0x68);
  dVar13 = *(double *)(local_78 + 0x78) - *(double *)(local_78 + 0x60);
  dVar9 = *(double *)(local_78 + 0x70) - *(double *)(local_78 + 0x58);
  if ((dVar9 <= dVar13 || dVar9 <= dVar7) && (dVar9 = dVar13, dVar13 <= dVar7)) {
    dVar9 = dVar7;
  }
  auVar16._4_4_ = local_128._4_4_;
  auVar16._0_4_ = local_128._0_4_;
  auVar16._8_4_ = fVar8;
  auVar16._12_4_ = 0;
  auVar15 = minps(auVar16,local_118);
  auVar6._4_4_ = fVar12;
  auVar6._0_4_ = fVar11;
  auVar6._8_4_ = fVar18;
  auVar6._12_4_ = 0;
  auVar16 = minps(auVar15,auVar6);
  auVar6 = maxps(local_128,local_118);
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar18;
  auVar15._12_4_ = 0;
  auVar6 = maxps(auVar6,auVar15);
  dVar14 = (double)auVar6._0_4_ - (double)auVar16._0_4_;
  dVar17 = (double)auVar6._4_4_ - (double)auVar16._4_4_;
  dVar13 = (double)auVar6._8_4_ - (double)auVar16._8_4_;
  dVar7 = dVar17;
  if (dVar17 <= dVar13) {
    dVar7 = dVar13;
  }
  local_70 = (float)*(double *)(local_78 + 0x10);
  dVar7 = (double)((-(ulonglong)(dVar13 < dVar14) & (ulonglong)dVar14 |
                   ~-(ulonglong)(dVar13 < dVar14) & (ulonglong)dVar7) &
                   -(ulonglong)(dVar17 < dVar14) | ~-(ulonglong)(dVar17 < dVar14) & (ulonglong)dVar7
                  );
  if (dVar7 <= dVar9) {
    dVar7 = dVar9;
  }
  local_6c = 0;
  local_68 = FUN_144a12d46;
  local_90 = local_128;
  local_88 = 0;
  local_80 = FUN_14014b546;
  local_138 = (double *)local_f8;
  local_148 = (double *)param_1;
  uVar3 = FUN_144946907(&local_90,&local_78,dVar7,param_1 + 0x10);
  if ((char)uVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 ^ 1;
}



// FUNCTION 140544c86 FUN_140544c86 body=1103 status=ok
// SIG undefined FUN_140544c86(void)

undefined8 * FUN_140544c86(longlong param_1,undefined8 *param_2)

{
  double _Y;
  longlong *plVar1;
  undefined1 *_Dst;
  undefined8 *_Dst_00;
  float *pfVar2;
  undefined1 *puVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [32];
  undefined1 *local_c0;
  uint local_b8;
  byte local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong local_78 [3];
  undefined1 *local_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = **(longlong **)(param_1 + 8);
  if ((*(char *)(lVar4 + 0x17a8) != '\x01') ||
     ((*(int *)(lVar4 + 0x1720) != 6 &&
      ((*(int *)(lVar4 + 0x1720) != 5 ||
       (1.0 < *(float *)(lVar4 + 0x171c) || *(float *)(lVar4 + 0x171c) == 1.0)))))) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    local_108 = *(double *)(lVar4 + 0xd0);
    uStack_100 = *(undefined8 *)(lVar4 + 0xd8);
    dStack_f8 = *(double *)(lVar4 + 0xe0) - (double)*(float *)(lVar4 + 0x11c);
    fVar5 = (float)FUN_14022aac6(*(longlong **)(param_1 + 8) + 6,&local_108,
                                 *(double *)(lVar4 + 0xe0),*(longlong *)(param_1 + 0x28) + 0x140);
  }
  else {
    dVar6 = **(double **)(param_1 + 0x10);
    _Y = (*(double **)(param_1 + 0x10))[1];
    if ((((dVar6 != 0.0) || (NAN(dVar6))) || (_Y != 0.0)) || (NAN(_Y))) {
      dVar6 = atan2(_Y,dVar6);
      fVar5 = (float)(dVar6 * 57.29577951308232);
    }
    else {
      fVar5 = 0.0;
    }
  }
  dVar6 = (double)FUN_144719204(SUB84((double)fVar5 -
                                      *(double *)(*(longlong *)(param_1 + 0x20) + 0x20),0));
  dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                  (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
  fVar5 = (float)(double)(~-(ulonglong)(180.0 < dVar6) & (ulonglong)dVar6 |
                         (ulonglong)(dVar6 + -360.0) & -(ulonglong)(180.0 < dVar6));
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  pfVar2 = (float *)(*(longlong *)(param_1 + 0x28) + 0x13c);
  if (*(char *)(lVar4 + 0x3c) != '\0') {
    pfVar2 = (float *)(lVar4 + 0x38);
  }
  fVar7 = *pfVar2;
  if (fVar7 <= 1.0) {
    fVar7 = 1.0;
  }
  if (ABS(fVar5) < fVar7) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0xe] = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined1 *)(param_2 + 1) = 1;
    goto LAB_140544e49;
  }
  local_108 = (double)fVar5;
  uStack_100 = 0;
  dStack_f8 = 0.0;
  FUN_140545298(&local_a8,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x148),&local_108,0);
  if (CONCAT44(uStack_9c,uStack_a0) == 0 || (int)local_58 < 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0xe] = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    local_e8 = local_88;
    dStack_f8 = local_98;
    uStack_f0 = uStack_90;
    local_108 = (double)CONCAT44(uStack_a4,local_a8);
    uStack_100 = CONCAT44(uStack_9c,uStack_a0);
    local_c0 = (undefined1 *)0x0;
    local_b8 = local_58;
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_80;
    }
    FUN_144891736(local_e0,local_58,0);
    _Dst = local_c0;
    if (local_c0 == (undefined1 *)0x0) {
      _Dst = local_e0;
    }
    memcpy(_Dst,puVar3,(ulonglong)local_58 << 4);
    local_b0 = 1;
    plVar1 = local_78;
    if (local_60 != (undefined1 *)0x0) {
      plVar1 = (longlong *)(local_60 + 8);
    }
    lVar4 = *plVar1;
    *param_2 = 0x3f80000000000000;
    *(undefined1 *)(param_2 + 1) = 0;
    param_2[2] = lVar4;
    if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
      *(undefined1 *)(param_2 + 0xe) = 1;
LAB_140544f9b:
      param_2[7] = local_e8;
      param_2[5] = dStack_f8;
      param_2[6] = uStack_f0;
      *(undefined4 *)(param_2 + 3) = (undefined4)local_108;
      *(undefined4 *)((longlong)param_2 + 0x1c) = local_108._4_4_;
      *(undefined4 *)(param_2 + 4) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)param_2 + 0x24) = uStack_100._4_4_;
      param_2[0xc] = 0;
      lVar4 = (longlong)(int)local_b8;
      *(uint *)(param_2 + 0xd) = local_b8;
      if (lVar4 == 0) {
        *(undefined4 *)((longlong)param_2 + 0x6c) = 2;
      }
      else {
        puVar3 = local_e0;
        if (local_c0 != (undefined1 *)0x0) {
          puVar3 = local_c0;
        }
        FUN_144891736(param_2 + 8,local_b8,0);
        _Dst_00 = (undefined8 *)param_2[0xc];
        if ((undefined8 *)param_2[0xc] == (undefined8 *)0x0) {
          _Dst_00 = param_2 + 8;
        }
        memcpy(_Dst_00,puVar3,lVar4 << 4);
      }
    }
    else {
      FUN_1456cec3c();
      *(byte *)(param_2 + 0xe) = local_b0;
      if ((local_b0 & 1) != 0) goto LAB_140544f9b;
    }
    if (((local_b0 & 1) != 0) && (local_c0 != (undefined1 *)0x0)) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[2] != 0) {
    if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_140544e49:
  if (*(char *)(param_2 + 0xe) == '\x01') {
    if (param_2[0xc] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  FUN_1405450d6(*(undefined8 *)(param_1 + 0x28),param_2,*(longlong *)(param_1 + 0x20) + 0x58,
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x24));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_128);
}



// FUNCTION 1405450d6 FUN_1405450d6 body=450 status=ok
// SIG undefined FUN_1405450d6(void)

float * FUN_1405450d6(undefined8 param_1,float *param_2,undefined8 *param_3,float param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  float *_Dst;
  undefined8 *_Src;
  float fVar10;
  float fVar11;
  
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 1);
  *(undefined8 *)param_2 = *param_3;
  lVar9 = param_3[2];
  *(longlong *)(param_2 + 4) = lVar9;
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = *(byte *)(param_3 + 0xe);
  *(byte *)(param_2 + 0x1c) = bVar7;
  if (bVar7 == 1) {
    *(undefined8 *)(param_2 + 0xe) = param_3[7];
    fVar11 = *(float *)(param_3 + 3);
    fVar10 = *(float *)((longlong)param_3 + 0x1c);
    fVar2 = *(float *)(param_3 + 4);
    fVar3 = *(float *)((longlong)param_3 + 0x24);
    fVar4 = *(float *)((longlong)param_3 + 0x2c);
    fVar5 = *(float *)(param_3 + 6);
    fVar6 = *(float *)((longlong)param_3 + 0x34);
    param_2[10] = *(float *)(param_3 + 5);
    param_2[0xb] = fVar4;
    param_2[0xc] = fVar5;
    param_2[0xd] = fVar6;
    param_2[6] = fVar11;
    param_2[7] = fVar10;
    param_2[8] = fVar2;
    param_2[9] = fVar3;
    param_2[0x18] = 0.0;
    param_2[0x19] = 0.0;
    fVar11 = *(float *)(param_3 + 0xd);
    puVar1 = (undefined8 *)param_3[0xc];
    param_2[0x1a] = fVar11;
    if ((longlong)(int)fVar11 == 0) {
      param_2[0x1b] = 2.8026e-45;
    }
    else {
      _Src = param_3 + 8;
      if (puVar1 != (undefined8 *)0x0) {
        _Src = puVar1;
      }
      FUN_144891736(param_2 + 0x10,fVar11,0);
      _Dst = *(float **)(param_2 + 0x18);
      if (*(float **)(param_2 + 0x18) == (float *)0x0) {
        _Dst = param_2 + 0x10;
      }
      memcpy(_Dst,_Src,(longlong)(int)fVar11 << 4);
      bVar7 = *(byte *)(param_2 + 0x1c);
    }
  }
  *(undefined1 *)(param_2 + 2) = 1;
  *param_2 = param_4 + *param_2;
  if ((bVar7 & 1) != 0) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  cVar8 = FUN_1449c239e(param_1,*(undefined8 *)(param_2 + 4));
  if (cVar8 == '\x01') {
    if (*(longlong **)(param_2 + 4) == (longlong *)0x0) {
      return param_2;
    }
    fVar11 = *param_2;
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      fVar10 = param_2[6];
    }
    else {
      fVar10 = (float)(**(code **)(**(longlong **)(param_2 + 4) + 0x2b0))();
    }
    if (fVar11 <= fVar10) {
      return param_2;
    }
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      fVar11 = param_2[6];
    }
    else if (*(longlong **)(param_2 + 4) == (longlong *)0x0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)(**(code **)(**(longlong **)(param_2 + 4) + 0x2b0))();
    }
    *param_2 = *param_2 - fVar11;
  }
  else {
    *param_2 = 0.0;
  }
  lVar9 = FUN_1437fa852(param_1);
  if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(param_2 + 4) = lVar9;
  return param_2;
}



// FUNCTION 140545298 FUN_140545298 body=522 status=ok
// SIG undefined FUN_140545298(void)

float * FUN_140545298(float *param_1,longlong param_2,float *param_3,float param_4)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_ac;
  longlong local_a8;
  ulonglong uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  *(longlong *)(param_1 + 2) = param_2;
  fVar11 = param_3[1];
  fVar2 = param_3[2];
  fVar4 = param_3[3];
  param_1[4] = *param_3;
  param_1[5] = fVar11;
  param_1[6] = fVar2;
  param_1[7] = fVar4;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x15] = 2.8026e-45;
  if (param_2 != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_ac = 0xffffffff;
    local_b8 = 1;
    cVar6 = FUN_1448d8806(param_2,param_1 + 4);
    if (cVar6 != '\0') {
      fVar11 = (float)FUN_1405b2250(*(undefined8 *)(param_1 + 2),&local_a8);
      lVar5 = local_a8;
      *param_1 = fVar11;
      fVar11 = param_4 / fVar11;
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      param_1[1] = fVar11;
      lVar10 = *(longlong *)(param_1 + 2);
      lVar7 = (longlong)(int)uStack_a0;
      if (lVar7 != 0) {
        lVar9 = 0;
        do {
          iVar1 = *(int *)(lVar5 + lVar9);
          if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar10 + 0x118))) &&
             (lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x110) + (longlong)iVar1 * 0x28),
             lVar3 != 0)) {
            fVar11 = *(float *)(lVar5 + 0x10 + lVar9);
            if (1.0 <= fVar11) {
              fVar11 = 1.0;
            }
            fVar2 = param_1[0x14];
            param_1[0x14] = (float)((int)fVar2 + 1);
            if ((uint)param_1[0x15] < (uint)((int)fVar2 + 1)) {
              FUN_147e3e572(param_1 + 10,fVar2);
            }
            pfVar8 = *(float **)(param_1 + 0x12);
            if (*(float **)(param_1 + 0x12) == (float *)0x0) {
              pfVar8 = param_1 + 10;
            }
            if (fVar11 <= 0.0) {
              fVar11 = 0.0;
            }
            pfVar8[(longlong)(int)fVar2 * 4] = fVar11;
            *(longlong *)(pfVar8 + (longlong)(int)fVar2 * 4 + 2) = lVar3;
          }
          lVar9 = lVar9 + 0x60;
        } while (lVar7 * 0x60 != lVar9);
        lVar10 = *(longlong *)(param_1 + 2);
      }
      if (((lVar10 != 0) && (0 < (int)param_1[0x14])) && (0.0 < *param_1)) {
        param_1[1] = param_4 / *param_1;
      }
    }
    FUN_1448d844e(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405454a4 FUN_1405454a4 body=120 status=ok
// SIG undefined FUN_1405454a4(void)

undefined8 FUN_1405454a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_14054551c((longlong *)(param_1 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar5 = (longlong)iVar1 * 0x40;
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar5) = lVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  if (lVar3 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x10);
  }
  return 1;
}



// FUNCTION 14054551c FUN_14054551c body=255 status=ok
// SIG undefined FUN_14054551c(void)

void FUN_14054551c(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14054561c FUN_14054561c body=1396 status=ok
// SIG undefined FUN_14054561c(void)

void FUN_14054561c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char cVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int *piVar18;
  bool bVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong *local_60;
  undefined *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar18 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    piVar18 = &DAT_14c760db4;
  }
  if ((3 < *piVar18) || ((*piVar18 == 3 && (*(char *)(param_1 + 0x50) != '\0')))) {
    FUN_1446f470e(&local_70,L"FFXFSR3TemporalUpscaling",1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar8 = (longlong *)FUN_1401e3324(&DAT_14c874628,local_70);
    lVar9 = (**(code **)(*plVar8 + 0x40))(plVar8);
    iVar4 = *(int *)(param_2 + 0x10);
    if (0 < iVar4) {
      piVar18 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      lVar20 = 0;
      bVar19 = false;
      local_78 = lVar9;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar20 * 8);
        if (lVar1 != 0) {
          if (lVar9 != 0) {
            piVar14 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              piVar14 = &DAT_14c760db4;
            }
            uVar16 = *(ulonglong *)
                      (&DAT_14ca8c1f0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar14 * 2) * 8);
            local_68 = uVar16;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cc29628) && (FUN_144b3d300(&DAT_14cc29628), DAT_14cc29628 == -1))
            {
              FUN_1409992c6(&DAT_14cc29620,L"/Engine/Private/SSRT/SSRTReflections.usf");
              _Init_thread_footer(&DAT_14cc29628);
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cc29638) && (FUN_144b3d300(), DAT_14cc29638 == -1)) {
              FUN_1409992c6(&DAT_14cc29630,L"FScreenSpaceReflectionsPS");
              _Init_thread_footer();
            }
            lVar9 = DAT_14cc28a68;
            iVar4 = *piVar18;
            if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
              uVar15 = 0;
            }
            else if (iVar4 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              uVar15 = (ulonglong)(DVar6 != DVar7);
            }
            else {
              uVar15 = 1;
            }
            lVar11 = DAT_14cc28c78;
            if (*(int *)(lVar9 + uVar15 * 4) == 0) {
              bVar22 = false;
            }
            else {
              if (*piVar18 == 0x40000002) {
                uVar15 = 0;
              }
              else {
                bVar3 = FUN_144a61b4f();
                uVar15 = (ulonglong)(bVar3 ^ 1);
              }
              bVar22 = *(int *)(lVar11 + uVar15 * 4) == 0;
            }
            lVar9 = FUN_140545b98(uVar16,&DAT_14cc29620);
            if (lVar9 != 0) {
              uVar5 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
              uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
              if (DAT_14cc295a0 != DAT_14cc295cc) {
                puVar10 = DAT_14cc295d8;
                if (DAT_14cc295d8 == (undefined *)0x0) {
                  puVar10 = &DAT_14cc295d0;
                }
                iVar4 = *(int *)(puVar10 +
                                (ulonglong)(DAT_14cc295e0 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
                while (iVar4 != -1) {
                  lVar11 = DAT_14cc29598 + (longlong)iVar4 * 0x20;
                  if (*(ulonglong *)(DAT_14cc29598 + (longlong)iVar4 * 0x20) == uVar16) {
                    if (lVar11 != 0) goto LAB_14054586c;
                    break;
                  }
                  iVar4 = *(int *)(lVar11 + 0x18);
                }
              }
              local_60 = &local_68;
              local_58 = &DAT_14bea6ba0;
              FUN_145720bac(&local_4c);
              lVar11 = (longlong)local_4c * 0x20 + DAT_14cc29598;
LAB_14054586c:
              if (*(longlong *)(lVar11 + 8) == *(longlong *)(lVar9 + 0x28)) {
                cVar13 = *(char *)(lVar11 + 0x10);
              }
              else {
                *(longlong *)(lVar11 + 8) = *(longlong *)(lVar9 + 0x28);
                *(undefined1 *)(lVar11 + 0x10) = 0;
                cVar13 = '\0';
              }
              if (bVar22 != (bool)cVar13) {
                puVar17 = (ulonglong *)(*(longlong *)(lVar9 + 0x28) + 0x38);
                lVar9 = 0;
                do {
                  uVar16 = *puVar17;
                  uVar15 = ((longlong)uVar16 >> 0x18) + (longlong)puVar17;
                  if ((uVar16 & 1) == 0) {
                    uVar15 = uVar16;
                  }
                  uVar16 = *(ulonglong *)(uVar15 + lVar9);
                  uVar2 = *(ulonglong *)(uVar15 + 0x28 + lVar9);
                  uVar21 = ((longlong)uVar16 >> 0x18) + uVar15 + lVar9;
                  if ((uVar16 & 1) == 0) {
                    uVar21 = uVar16;
                  }
                  uVar16 = ((longlong)uVar2 >> 0x18) + 0x28 + uVar15 + lVar9;
                  if ((uVar2 & 1) == 0) {
                    uVar16 = uVar2;
                  }
                  *(ulonglong *)(uVar15 + lVar9) = uVar16;
                  uVar16 = *puVar17;
                  uVar15 = ((longlong)uVar16 >> 0x18) + (longlong)puVar17;
                  if ((uVar16 & 1) == 0) {
                    uVar15 = uVar16;
                  }
                  *(ulonglong *)(uVar15 + 0x28 + lVar9) = uVar21;
                  lVar9 = lVar9 + 8;
                } while (lVar9 != 0x28);
                *(bool *)(lVar11 + 0x10) = bVar22;
              }
            }
            iVar4 = *(int *)(param_2 + 0x10);
            lVar9 = local_78;
          }
          bVar19 = (bool)(bVar19 | *(int *)(lVar1 + 0x3024) == 1);
        }
        lVar1 = DAT_14cc28a68;
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar4);
      if (bVar19) {
        iVar4 = *piVar18;
        if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
          uVar16 = 0;
        }
        else if (iVar4 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar16 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar16 = 1;
        }
        if ((*(int *)(lVar1 + uVar16 * 4) != 0) && (*(longlong *)(param_2 + 0x188) == 0)) {
          FUN_1415e18b4(DAT_14cb0d2b0,lVar9 + 0x80);
          puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar12 = &PTR_FUN_14bea6ea0;
          puVar12[1] = &PTR_FUN_14bea6ed0;
          puVar12[2] = lVar9;
          *(undefined8 **)(param_2 + 0x188) = puVar12;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140545b98 FUN_140545b98 body=121 status=ok
// SIG undefined FUN_140545b98(void)

longlong FUN_140545b98(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[9] - 1U & (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4
                    );
    if (iVar3 != -1) {
      while (plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18), *plVar2 != lVar1) {
        iVar3 = (int)plVar2[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      if (plVar2 + 1 == (longlong *)0x0) {
        return 0;
      }
      return plVar2[1];
    }
  }
  return 0;
}



// FUNCTION 140545c12 FUN_140545c12 body=12 status=ok
// SIG undefined FUN_140545c12(void)

void FUN_140545c12(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140545c1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140545c1e FUN_140545c1e body=31 status=ok
// SIG undefined FUN_140545c1e(void)

undefined8 FUN_140545c1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140545d22 FUN_140545d22 body=639 status=ok
// SIG undefined FUN_140545d22(void)

void FUN_140545d22(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar4) {
    return;
  }
  plVar7 = (longlong *)
           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar7[2] != *(int *)(param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
    return;
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
    lVar8 = *plVar7;
  }
  else {
    lVar8 = 0;
  }
  lVar8 = *(longlong *)(lVar8 + 0x11e8);
  if ((lVar8 != 0) &&
     (((((dVar1 != 0.0 || (NAN(dVar1))) || (dVar2 != 0.0)) || ((NAN(dVar2) || (dVar3 != 0.0)))) ||
      (NAN(dVar3))))) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar7;
    }
    else {
      lVar9 = 0;
    }
    cVar6 = FUN_140546024(lVar9);
    dVar10 = 0.0;
    if (cVar6 == '\0') {
      dVar10 = dVar2;
    }
    *(double *)(lVar8 + 0x2f70) = dVar1;
    *(double *)(lVar8 + 0x2f78) = dVar10;
    *(double *)(lVar8 + 0x2f80) = dVar3;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar4) {
    return;
  }
  lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x3c)) {
    return;
  }
  if ((*(uint *)(lVar8 + 8) & 0x10200000) != 0) {
    return;
  }
  if (((dVar1 == 0.0) && (!NAN(dVar1))) &&
     ((dVar2 == 0.0 && (((!NAN(dVar2) && (dVar3 == 0.0)) && (!NAN(dVar3))))))) {
    return;
  }
  FUN_140545fa2();
  iVar5 = *(int *)(param_1 + 0x3c);
  if (iVar5 == 0) {
LAB_140545f81:
    lVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x38);
    lVar8 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar5 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_140545f81;
      lVar8 = *plVar7;
    }
  }
  if (*(char *)(lVar8 + 0xa99) != '\x01') {
    return;
  }
  if (*(char *)(lVar8 + 0xa98) != '\x01') {
    return;
  }
  if (iVar5 != 0) {
    uVar4 = *(uint *)(param_1 + 0x38);
    lVar8 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140545f6c;
    plVar7 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((plVar7 != (longlong *)0x0) &&
       (((int)plVar7[2] == iVar5 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
      lVar8 = *plVar7;
      goto LAB_140545f6c;
    }
  }
  lVar8 = 0;
LAB_140545f6c:
  if (*(longlong *)(lVar8 + 0x31f8) != 0) {
    *(undefined1 *)(*(longlong *)(lVar8 + 0x31f8) + 0x84) = 1;
  }
  return;
}



// FUNCTION 140545fa2 FUN_140545fa2 body=129 status=ok
// SIG undefined FUN_140545fa2(void)

void FUN_140545fa2(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  *(undefined4 *)((longlong)param_1 + 0x3c0c) = 0;
  if (*(char *)((longlong)param_1 + 0x3c1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c1c) = 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar1 != '\0') {
    fVar2 = *(float *)(param_1 + 0x782);
    if (fVar2 < 0.0) {
      FUN_1412022f0(param_1);
      fVar2 = *(float *)(param_1 + 0x782);
    }
    *(float *)((longlong)param_1 + 0x3c14) = fVar2;
    if ((param_1[0x1e8] != 0) && (0 < *(int *)(param_1[0x1e8] + 0x67e0))) {
      FUN_14572108a();
      return;
    }
  }
  return;
}



// FUNCTION 140546024 FUN_140546024 body=167 status=ok
// SIG undefined FUN_140546024(void)

undefined1 FUN_140546024(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x11e8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x3170) == 0) {
      if (*(char *)(lVar2 + 0x34b0) != '\x01') {
        return 0;
      }
      lVar3 = lVar2 + 0x3210;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x3170) + 0xd8;
    }
    lVar1 = FUN_140153468(lVar3);
    if (((lVar1 != 0) && ((*(byte *)(lVar3 + 0x298) & 2) == 0)) &&
       (*(longlong *)(lVar2 + 0x110) != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x11e8);
      if (*(longlong *)(lVar2 + 0x3170) == 0) {
        if (*(char *)(lVar2 + 0x34b0) != '\x01') {
          return 0;
        }
        lVar2 = lVar2 + 0x3210;
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x3170) + 0xd8;
      }
      lVar2 = FUN_140153468(lVar2);
      if (lVar2 != 0) {
        return *(undefined1 *)(lVar2 + 0xfd);
      }
    }
  }
  return 0;
}



// FUNCTION 1405460cc FUN_1405460cc body=747 status=ok
// SIG undefined FUN_1405460cc(void)

void FUN_1405460cc(longlong param_1,double *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  double local_40;
  double dStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
       (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x3c))))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_140546311;
  local_40 = *param_2;
  dStack_38 = param_2[1];
  if (param_3 == '\0') {
    FUN_1405463b8();
  }
  else {
    FUN_148d19334(param_1,&local_40);
  }
  dVar4 = dStack_38;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_14054638e:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_14054638e;
      plVar6 = (longlong *)*puVar5;
    }
  }
  (**(code **)(*plVar6 + 0xc88))(plVar6,(float)dStack_38);
  dVar3 = local_40;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_140546395:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_140546395;
      plVar6 = (longlong *)*puVar5;
    }
  }
  (**(code **)(*plVar6 + 0xc90))(plVar6,(float)local_40);
  if ((((dVar4 == 0.0) && (!NAN(dVar4))) && (dVar3 == 0.0)) && (!NAN(dVar3))) goto LAB_140546311;
  FUN_140545fa2();
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
LAB_1405463a3:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar2 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1405463a3;
      lVar7 = *plVar6;
    }
  }
  if ((*(char *)(lVar7 + 0xa99) != '\x01') || (*(char *)(lVar7 + 0xa98) != '\x01'))
  goto LAB_140546311;
  if (iVar2 == 0) {
LAB_1405463aa:
    lVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    lVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar2 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1405463aa;
      lVar7 = *plVar6;
    }
  }
  if (*(longlong *)(lVar7 + 0x31f8) != 0) {
    *(undefined1 *)(*(longlong *)(lVar7 + 0x31f8) + 0x85) = 1;
  }
LAB_140546311:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405463b8 FUN_1405463b8 body=882 status=ok
// SIG undefined FUN_1405463b8(void)

void FUN_1405463b8(longlong param_1,double *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  
  iVar5 = *(int *)(param_1 + 0x44);
  if (iVar5 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar6 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar6[2] != iVar5) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
    return;
  }
  fVar8 = 1.0;
  if (((((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x3c))))) &&
     ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar7;
    }
    else {
      lVar3 = 0;
    }
    if ((*(char *)(lVar3 + 0xa99) == '\x01') && (*(char *)(lVar3 + 0xa98) != '\0')) {
      if (*(char *)(lVar3 + 0xa98) == '\x01') {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar6;
        }
        else {
          lVar3 = 0;
        }
        fVar8 = *(float *)(lVar3 + 0x378);
      }
    }
    else {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar6;
      }
      else {
        lVar3 = 0;
      }
      fVar8 = *(float *)(lVar3 + 0x374);
    }
  }
  if ((((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x34))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
LAB_140546535:
    uVar1 = *(uint *)(param_1 + 0x40);
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != iVar5 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1405466f5;
      lVar3 = *plVar6;
    }
  }
  else {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar6;
    }
    else {
      lVar3 = 0;
    }
    cVar2 = (**(code **)(*(longlong *)(lVar3 + 0x3b60) + 0x50))(lVar3 + 0x3b60);
    iVar5 = *(int *)(param_1 + 0x44);
    if (cVar2 != '\0') {
      if (iVar5 == 0) {
LAB_140546703:
        lVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x40);
        lVar3 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar6 == (longlong *)0x0) ||
             (((int)plVar6[2] != iVar5 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
          goto LAB_140546703;
          lVar3 = *plVar6;
        }
      }
      *param_2 = (double)(*(float *)(lVar3 + 900) * fVar8) * *param_2;
      if (*(int *)(param_1 + 0x44) == 0) {
LAB_140546707:
        lVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x40);
        lVar3 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar6 == (longlong *)0x0) ||
             (((int)plVar6[2] != *(int *)(param_1 + 0x44) ||
              ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_140546707;
          lVar3 = *plVar6;
        }
      }
      pfVar4 = (float *)(lVar3 + 0x388);
      goto LAB_1405465f2;
    }
    if (iVar5 != 0) goto LAB_140546535;
LAB_1405466f5:
    lVar3 = 0;
  }
  *param_2 = (double)(*(float *)(lVar3 + 0x37c) * fVar8) * *param_2;
  if (*(int *)(param_1 + 0x44) == 0) {
LAB_1405466fc:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x40);
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x44) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_1405466fc;
      lVar3 = *plVar6;
    }
  }
  pfVar4 = (float *)(lVar3 + 0x380);
LAB_1405465f2:
  param_2[1] = (double)(fVar8 * *pfVar4) * param_2[1];
  return;
}



// FUNCTION 14054672a FUN_14054672a body=304 status=ok
// SIG undefined FUN_14054672a(void)

void FUN_14054672a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 param_7,longlong *param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = FUN_14054685b(param_1,*(undefined8 *)(param_3 + 0x3100));
  local_80 = *(undefined4 *)(*param_8 + 0x2b40);
  local_88 = *(undefined8 *)(*(longlong *)(*param_8 + 0x10) + 0x28);
  local_58 = *param_6;
  local_a0 = &local_58;
  local_50 = param_6[1];
  local_78 = param_10;
  local_98 = CONCAT44(local_98._4_4_,param_7);
  local_a8 = param_5;
  local_90 = uVar1;
  FUN_14059760d(param_1,param_2,param_3,param_4);
  local_68 = *param_6;
  local_60 = param_6[1];
  local_90 = param_11;
  local_98 = param_10;
  local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,param_9);
  local_a8 = CONCAT71(local_a8._1_7_,1);
  FUN_140546ac3(param_1,param_3,&local_68,uVar1);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054685b FUN_14054685b body=615 status=ok
// SIG undefined FUN_14054685b(void)

ulonglong FUN_14054685b(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_36;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_36 = 0xff000e00;
  local_68 = &DAT_00020008;
  local_3c = 0x10001;
  local_38 = 0x101;
  uStack_60 = 1;
  local_48 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_44 = DAT_14ca84e40;
  if ((int)param_2 < DAT_14ca84e40) {
    local_44 = (int)param_2;
  }
  if (local_44 < 2) {
    local_44 = 1;
  }
  iVar5 = (int)((ulonglong)param_2 >> 0x20);
  local_40 = DAT_14ca84e40;
  if (iVar5 < DAT_14ca84e40) {
    local_40 = iVar5;
  }
  if (local_40 < 2) {
    local_40 = 1;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar6 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar3 = uVar6 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar3) {
    FUN_140023dd8(plVar1,0x128);
    uVar6 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar3 = uVar6 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar3;
  FUN_1456bbb8c(uVar6,L"Shadow.Virtual.ShadowMask",&local_68,0);
  iVar5 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar5);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar6;
  *(int *)(uVar6 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  if (*(int *)(DAT_14ca66e88 + 4) != 0) {
    uVar2 = *(undefined1 *)(uVar6 + 0x94);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    puVar7[1] = *(undefined8 *)(uVar6 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar7 + 5) = 0;
    *puVar7 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar7 + 6) = uVar2;
    *(undefined1 *)(puVar7 + 7) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar7 + 0x35) = 0;
    puVar7[8] = uVar6;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    local_68 = (undefined1 *)0x0;
    uStack_60 = 0;
    uStack_5c = 0;
    FUN_140c4fe69(param_1,puVar7,&local_68,2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140546ac3 FUN_140546ac3 body=1537 status=ok
// SIG undefined FUN_140546ac3(void)

void FUN_140546ac3(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5,byte param_6,undefined8 *param_7,undefined8 param_8)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined1 local_99;
  undefined8 *local_98;
  longlong lStack_90;
  undefined *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined8 *)(param_2 + 0x13818);
  FUN_141572f3c();
  FUN_141572f3c();
  FUN_1448e935e(uVar4,&local_98,&DAT_14ca671c0,0);
  FUN_141572f3c();
  local_c0 = local_98;
  puVar9 = &DAT_14ca54780;
  if (param_5 != '\0') {
    puVar9 = &DAT_14ca54750;
  }
  if (param_6 != 0) {
    puVar9 = &DAT_14c9c9ae0;
  }
  local_b0 = lStack_90;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(undefined8 *)(puVar9 + 0x10);
  if (param_7 == (undefined8 *)0x0) {
    puVar11 = puVar10 + 0x24;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(puVar1,0x130);
      puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar10 + 0x24;
    }
    *puVar1 = (ulonglong)puVar11;
    *puVar10 = &PTR_FUN_14a3298d8;
    puVar2 = puVar10 + 2;
    puVar10[2] = 0;
    lVar7 = 0x32;
    do {
      *(undefined1 (*) [16])((longlong)puVar10 + lVar7 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar10 + lVar7 + -2) = 0xffff0000;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xf2);
    *(undefined4 *)((longlong)puVar10 + 0xf4) = 0;
    puVar10[0x1c] = 0;
    puVar10[0x1d] = 0;
    *(undefined2 *)(puVar10 + 0x1e) = 0;
    *(undefined4 *)(puVar10 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0xfc) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x104) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x10c) = 0;
    puVar10[0x22] = 0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar10;
    puVar10[2] = param_4;
    *(uint *)(puVar10 + 3) = (uint)param_6;
    puVar10[4] = param_8;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 6) = 0xffff0001;
    FUN_14157305e();
    uVar4 = *(undefined8 *)(param_2 + 0x13818);
    FUN_14157305e();
    local_98 = (undefined8 *)0x0;
    lStack_90 = 0;
    FUN_1448f70da(local_c0,&DAT_14ca68970,puVar2);
    uVar5 = *param_3;
    uVar6 = param_3[1];
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_14157305e();
    FUN_140069376(param_1);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 0x41;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x210);
      puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar11 + 0x41;
    }
    *puVar1 = (ulonglong)puVar10;
    lStack_90 = DAT_14ca689b8;
    if (DAT_14ca689b8 != 0) {
      LOCK();
      *(int *)(DAT_14ca689b8 + 8) = *(int *)(DAT_14ca689b8 + 8) + 1;
      UNLOCK();
    }
    local_88 = &DAT_14ca68970;
    local_c8 = 2;
    local_98 = puVar2;
    FUN_140068f1a(puVar11,&local_99,&local_98,1);
    *puVar11 = &PTR_FUN_14a3298e0;
    puVar11[0x37] = puVar2;
    puVar11[0x38] = uVar4;
    puVar11[0x39] = local_c0;
    puVar11[0x3a] = local_b0;
    puVar11[0x3b] = uVar5;
    puVar11[0x3c] = uVar6;
    puVar11[0x3d] = local_b8;
    puVar11[0x3e] = local_78;
    puVar11[0x3f] = uStack_70;
    *(undefined4 *)(puVar11 + 0x40) = local_68;
  }
  else {
    puVar11 = puVar10 + 0x2a;
    if (*(undefined8 **)(param_1 + 0x78) < puVar11) {
      FUN_140023dd8(puVar1,0x160);
      puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar11 = puVar10 + 0x2a;
    }
    *puVar1 = (ulonglong)puVar11;
    *puVar10 = &PTR_FUN_14a329788;
    local_a8 = puVar10 + 2;
    puVar10[2] = 0;
    lVar7 = 0x32;
    do {
      *(undefined1 (*) [16])((longlong)puVar10 + lVar7 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar10 + lVar7 + -2) = 0xffff0000;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0xf2);
    *(undefined4 *)((longlong)puVar10 + 0xf4) = 0;
    *(undefined1 (*) [16])(puVar10 + 0x1c) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar10 + 0x1e) = 0;
    *(undefined4 *)(puVar10 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0xfc) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x104) = 0xffffffff;
    *(undefined4 *)(puVar10 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x10c) = 0;
    puVar10[0x22] = 0;
    puVar10[0x24] = 0;
    *(undefined1 *)(puVar10 + 0x25) = 1;
    puVar10[0x26] = 0;
    puVar10[0x28] = 0;
    *(undefined4 *)(puVar10 + 0x29) = 4;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar10;
    lVar7 = FUN_1447e4f80();
    cVar8 = '\x02';
    if (*(char *)(lVar7 + 0x41) != '\x03') {
      cVar8 = *(char *)(lVar7 + 0x41);
    }
    puVar10[0x24] = *(undefined8 *)(param_2 + 0x18);
    *(char *)(puVar10 + 0x25) = cVar8;
    puVar10[0x26] = param_7[2];
    puVar10[2] = param_4;
    *(uint *)(puVar10 + 3) = (uint)param_6;
    puVar10[4] = param_8;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 6) = 0xffff0001;
    puVar10[0x28] = *param_7;
    *(undefined4 *)(puVar10 + 0x29) = 4;
    FUN_14732d40e(*(undefined8 *)(param_2 + 0x13818),&local_78);
    uVar4 = *param_3;
    uVar5 = param_3[1];
    FUN_14733349e();
    FUN_140069376(param_1);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 0x3f;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x200);
      puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar11 + 0x3f;
    }
    puVar2 = local_a8;
    *puVar1 = (ulonglong)puVar10;
    local_98 = local_a8;
    lStack_90 = DAT_14ca691b8;
    if (DAT_14ca691b8 != 0) {
      LOCK();
      *(int *)(DAT_14ca691b8 + 8) = *(int *)(DAT_14ca691b8 + 8) + 1;
      UNLOCK();
    }
    local_88 = &DAT_14ca69170;
    local_c8 = 2;
    FUN_140068f1a(puVar11,&local_99,&local_98,1);
    *puVar11 = &PTR_FUN_14a329790;
    puVar11[0x37] = local_b8;
    puVar11[0x38] = local_78;
    puVar11[0x39] = uStack_70;
    puVar11[0x3a] = local_c0;
    puVar11[0x3b] = local_b0;
    puVar11[0x3c] = uVar4;
    puVar11[0x3d] = uVar5;
    puVar11[0x3e] = puVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar11);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405470c6 FUN_1405470c6 body=454 status=ok
// SIG undefined FUN_1405470c6(void)

void FUN_1405470c6(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint *param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  uint *local_e0 [4];
  undefined8 local_c0;
  undefined4 auStack_80 [12];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar1 = FUN_14054728d(*(undefined4 *)(param_1 + 0x20),param_3,*(undefined8 *)param_4,
                        *param_5 >> 9 & 1);
  if (cVar1 != '\0') {
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    memset(&local_e8,0,0x98);
    FUN_14608850e();
    local_e0[DAT_14c9d74f0] = (uint *)&DAT_14c9d74a8;
    auStack_80[DAT_14c9d74f0] = 0;
    FUN_145e1be58();
    local_e0[DAT_14c9d7618] = (uint *)&DAT_14c9d75d0;
    auStack_80[DAT_14c9d7618] = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    lStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    cVar1 = FUN_14007744c(param_3,&local_e8,*(undefined8 *)param_4);
    if (cVar1 != '\0') {
      if (local_148 != 0) {
        local_1a8 = local_148;
        uStack_1a0 = local_158;
      }
      if (lStack_130 != 0) {
        local_198 = lStack_130;
        uStack_190 = local_158;
      }
      local_e0[2] = (uint *)&local_1a8;
      local_e0[3] = param_5;
      local_c0 = param_6;
      local_e8 = param_1;
      local_e0[0] = param_4;
      local_e0[1] = (uint *)param_3;
      FUN_142c656c6(&local_e8,0);
      FUN_142c656c6(&local_e8,1);
      FUN_142c656c6(&local_e8,2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054728d FUN_14054728d body=296 status=ok
// SIG undefined FUN_14054728d(void)

ulonglong FUN_14054728d(int param_1,longlong *param_2,longlong param_3,byte param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da720) {
    FUN_144b3d300(&DAT_14c9da720);
    if (DAT_14c9da720 == -1) {
      FUN_1446f470e(local_40,L"FHairStrandsVertexFactory",1);
      FUN_14099931e(local_48,local_40);
      DAT_14c9da718 = FUN_140187afe(local_48);
      _Init_thread_footer(&DAT_14c9da720);
    }
  }
  bVar2 = 0;
  if ((2 < param_1) && (param_2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2);
    if (cVar1 == '\0') {
      bVar2 = 0;
    }
    else {
      bVar2 = FUN_144a7cdf8(param_2);
    }
  }
  if (DAT_14c9da718 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (((bVar2 & param_4) == 1) &&
       (*(longlong *)(param_3 + 0x20) == *(longlong *)(DAT_14c9da718 + 0x20))) {
      iVar3 = (**(code **)(*param_2 + 0x30))(param_2);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),iVar3 != 3);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405473b6 FUN_1405473b6 body=194 status=ok
// SIG undefined FUN_1405473b6(void)

undefined8 FUN_1405473b6(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (DAT_14cb7fa40 == 0) {
    if (((DAT_14cb7fbc0 == 0) || (DAT_14cb7fbb8 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*DAT_14cb7fbb8 + 0x30))(), cVar2 == '\0')) {
      uVar3 = FUN_14001cc68(0x550,0x10);
      FUN_1403df946(uVar3);
    }
    else {
      plVar4 = DAT_14cb7fbb8;
      if (DAT_14cb7fbc0 == 0) {
        plVar4 = (longlong *)0x0;
      }
      uVar3 = (**(code **)(*plVar4 + 0x58))();
    }
    uVar1 = DAT_14cb7fa40;
    lVar5 = (longlong)(int)DAT_14cb7fa40;
    DAT_14cb7fa40 = DAT_14cb7fa40 + 1;
    if (DAT_14cb7fa44 < DAT_14cb7fa40) {
      FUN_1457210ba(&DAT_14cb7fa38,uVar1);
    }
    *(undefined8 *)(DAT_14cb7fa38 + lVar5 * 8) = uVar3;
  }
  lVar5 = (longlong)(int)DAT_14cb7fa40;
  DAT_14cb7fa40 = DAT_14cb7fa40 - 1;
  return *(undefined8 *)(DAT_14cb7fa38 + -8 + lVar5 * 8);
}



// FUNCTION 140547485 FUN_140547485 body=368 status=ok
// SIG undefined FUN_140547485(void)

void FUN_140547485(int param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = DAT_14c9c0d50;
  uVar3 = DAT_14c9c07c0;
  if (param_3 != 0) {
    param_1 = *(int *)(param_3 + 0x3090);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1405474e4;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1405474e4:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x10 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x10 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_140547560;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_140547560:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x11;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x80;
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(&DAT_14ca11f2c + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x303;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a1ec3d0;
  puVar5[8] = uVar4;
  puVar5[9] = uVar3;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  return;
}



// FUNCTION 1405475f6 FUN_1405475f6 body=284 status=ok
// SIG undefined FUN_1405475f6(void)

void FUN_1405475f6(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x30);
    puVar5 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar5 = &PTR_FUN_14a216fc8;
  puVar5[2] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  uVar4 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
  puVar5[2] = uVar4;
  local_38 = puVar5 + 2;
  FUN_1448e53bc();
  local_40 = DAT_14c9cad48;
  FUN_140547714(param_1 + 0x1a8,plVar1,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140547714 FUN_140547714 body=661 status=ok
// SIG undefined FUN_140547714(void)

undefined8 *
FUN_140547714(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
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
              0x110) < DAT_14c9cadb0) {
    FUN_144b3d300(&DAT_14c9cadb0);
    if (DAT_14c9cadb0 == -1) {
      FUN_1456e2fe6(local_40);
      local_50 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_88 = L"ForegroundClipUB";
      local_90 = L"ForegroundClip";
      local_98 = L"FForegroundClipUniformParameters";
      local_58 = 0;
      local_70 = 0x10;
      local_78 = 0xd;
      local_68 = local_40;
      FUN_140b49562(&DAT_14c9cad30,1,2);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bfeddb);
      _Init_thread_footer(&DAT_14c9cadb0);
    }
  }
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9cad78;
  puVar6[4] = DAT_14c9cad78;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9cad30;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a216fd0;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405479aa FUN_1405479aa body=438 status=ok
// SIG undefined FUN_1405479aa(void)

void FUN_1405479aa(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  iVar5 = *(int *)(param_1 + 0xac);
  *(int *)(param_1 + 0xac) = iVar5 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0xa0);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0xac) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x98);
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar12 = uVar6;
      while (((*(int *)(*plVar1 + lVar10) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar10), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0xac) + -1;
          *(int *)(param_1 + 0xac) = iVar5;
          if (bVar8) goto LAB_140547acd;
          goto LAB_140547a4f;
        }
      }
      uVar6 = uVar12 - 1;
      bVar8 = true;
    } while (1 < uVar12);
    iVar5 = *(int *)(param_1 + 0xac) + -1;
    *(int *)(param_1 + 0xac) = iVar5;
LAB_140547acd:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0xa0);
      iVar7 = iVar5;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10), plVar2 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar9);
            FUN_14005b248(plVar1);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = *(int *)(param_1 + 0xa0);
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 0xa8) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)(param_1 + 0xa4) != iVar7)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_140547a4f:
  iVar5 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar5 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x68);
    lVar11 = 0;
    do {
      FUN_140547bd4(*(undefined8 *)(lVar10 + lVar11),param_2);
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar5 * 0x10 != lVar11);
  }
  cVar4 = FUN_140547b60(param_1);
  if (cVar4 == '\0') {
    FUN_1405485da(param_1);
    return;
  }
  return;
}



// FUNCTION 140547b60 FUN_140547b60 body=116 status=ok
// SIG undefined FUN_140547b60(void)

undefined8 FUN_140547b60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar2);
      if (0 < *(int *)(lVar1 + 0xd0)) {
        return 1;
      }
      if ((*(byte *)(lVar1 + 0x108) & 6) != 0) {
        return 1;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x70) * 0x10 != lVar2);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x98) + 8 + lVar2) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x98) + lVar2) != 0)) {
        return 1;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xa0) * 0x10 != lVar2);
  }
  return 0;
}



// FUNCTION 140547bd4 FUN_140547bd4 body=150 status=ok
// SIG undefined FUN_140547bd4(void)

void FUN_140547bd4(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140547c6a();
  bVar2 = *(byte *)(param_1 + 0x108);
  if ((bVar2 & 2) != 0) {
    FUN_1405486b6(param_1);
    bVar2 = *(byte *)(param_1 + 0x108) & 0xfd;
    *(byte *)(param_1 + 0x108) = bVar2;
  }
  if ((bVar2 & 4) != 0) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
      do {
        FUN_140547e66(param_1);
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar3 = 0;
      do {
        if (*(char *)(lVar4 + 0x39 + lVar3) == '\x01') {
          *(undefined1 *)(lVar4 + 0x38 + lVar3) = 0;
        }
        lVar3 = lVar3 + 0x40;
      } while ((longlong)iVar1 * 0x40 != lVar3);
    }
    *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfb;
  }
  return;
}



// FUNCTION 140547c6a FUN_140547c6a body=506 status=ok
// SIG undefined FUN_140547c6a(void)

void FUN_140547c6a(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0xd0) < 1) {
LAB_140547ca2:
    if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar8 = (longlong)*(int *)(param_1 + 0xd0);
LAB_140547cf5:
  uVar9 = uVar8 - 1;
  puVar3 = (undefined1 *)(*(longlong *)(param_1 + 200) + uVar9 * 0x18);
  FUN_140548388(param_1,&local_80,*puVar3);
  fVar10 = *(float *)(param_1 + 0xf0) * param_2;
  if (puVar3[1] == '\x01') {
    if ((local_80 == 0) || (1.0 <= *(float *)(puVar3 + 4))) {
      FUN_140549f0c(param_1 + 200,uVar9 & 0xffffffff);
      FUN_14054a010(param_1 + 200);
    }
    else {
      fVar10 = fVar10 + *(float *)(puVar3 + 4);
      fVar11 = 1.0;
      if (fVar10 <= 1.0) {
        fVar11 = fVar10;
      }
      *(float *)(puVar3 + 4) = fVar11;
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x48);
        lVar7 = (longlong)*(int *)(param_1 + 0x50) << 6;
        do {
          if (*(int *)(lVar6 + 0xc) == *(int *)(local_80 + 0x18)) goto LAB_140547d85;
          lVar6 = lVar6 + 0x40;
          lVar7 = lVar7 + -0x40;
        } while (lVar7 != 0);
      }
    }
  }
  else if (puVar3[1] == '\0') {
    if ((local_80 == 0) || (*(float *)(puVar3 + 4) <= 0.0)) {
      *(undefined4 *)(puVar3 + 4) = 0;
      puVar3[1] = 1;
      FUN_14054a0ae(param_1,*puVar3,puVar3 + 8);
    }
    else {
      fVar10 = *(float *)(puVar3 + 4) - fVar10;
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      *(float *)(puVar3 + 4) = fVar11;
      if ((longlong)*(int *)(param_1 + 0x50) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x48);
        lVar7 = (longlong)*(int *)(param_1 + 0x50) << 6;
        do {
          if (*(int *)(lVar6 + 0xc) == *(int *)(local_80 + 0x18)) goto LAB_140547d85;
          lVar6 = lVar6 + 0x40;
          lVar7 = lVar7 + -0x40;
        } while (lVar7 != 0);
      }
    }
  }
  goto LAB_140547d95;
LAB_140547d85:
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x38) = 1;
    *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 4;
  }
LAB_140547d95:
  plVar5 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  bVar4 = (longlong)uVar8 < 2;
  uVar8 = uVar9;
  if (bVar4) goto LAB_140547ca2;
  goto LAB_140547cf5;
}



// FUNCTION 140547e66 FUN_140547e66 body=1312 status=ok
// SIG undefined FUN_140547e66(void)

void FUN_140547e66(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x48);
    lVar17 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + lVar15;
    local_e8 = param_1;
    do {
      if ((*(char *)(lVar15 + 0x39) == '\x01') && (*(char *)(lVar15 + 0x38) == '\x01')) {
        FUN_140548388(param_1,&local_d8,*(undefined1 *)(lVar15 + 8));
        if (local_d8 != (longlong *)0x0) {
          if (*(char *)((longlong)local_d8 + 0x24) == '\x01') {
            fVar19 = *(float *)(local_d8 + 4);
          }
          else {
            fVar19 = 0.0;
          }
          fVar18 = 1.0;
          if ((longlong)*(int *)(local_e8 + 0xd0) != 0) {
            pcVar9 = *(char **)(local_e8 + 200);
            lVar16 = (longlong)*(int *)(local_e8 + 0xd0) * 0x18;
            do {
              if (*pcVar9 == *(char *)(lVar15 + 8)) {
                fVar18 = 1.0;
                if (pcVar9 != (char *)0x0) {
                  fVar18 = *(float *)(pcVar9 + 4);
                }
                break;
              }
              pcVar9 = pcVar9 + 0x18;
              lVar16 = lVar16 + -0x18;
              fVar18 = 1.0;
            } while (lVar16 != 0);
          }
          (**(code **)(*local_d8 + 0x20))(local_d8,fVar19 * fVar18);
          if ((longlong)*(int *)(lVar15 + 0x30) != 0) {
            lVar16 = *(longlong *)(lVar15 + 0x28);
            local_e0 = lVar16 + (longlong)*(int *)(lVar15 + 0x30) * 0x14;
            do {
              uVar4 = param_2[4];
              if ((longlong)(int)uVar4 != 0) {
                lVar6 = *(longlong *)(param_2 + 2);
                lVar14 = 0;
                do {
                  if ((*(int *)(lVar6 + lVar14) == *(int *)(lVar15 + 0xc)) &&
                     (lVar8 = *(longlong *)(lVar6 + 8 + lVar14), lVar8 != 0)) {
                    uVar13 = param_2[1];
                    if ((uVar13 != 0) &&
                       ((((uVar5 = *param_2, -1 < (int)uVar5 && ((int)uVar5 < DAT_14c9647dc)) &&
                         (puVar7 = (undefined8 *)
                                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                         puVar7 != (undefined8 *)0x0)) &&
                        ((*(uint *)(puVar7 + 2) == uVar13 &&
                         ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))))) {
                      cVar3 = *(char *)(lVar15 + 8);
                      if (cVar3 == '\x01') {
                        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
                          plVar12 = (longlong *)*puVar7;
                        }
                        else {
                          plVar12 = (longlong *)0x0;
                        }
                        lVar8 = (**(code **)(*plVar12 + 0x658))();
                        if (*(longlong *)(lVar6 + 8 + lVar14) != lVar8) {
                          if ((param_2[1] == 0) || (uVar13 = *param_2, (int)uVar13 < 0)) {
LAB_140548309:
                            plVar12 = (longlong *)0x0;
                          }
                          else {
                            plVar12 = (longlong *)0x0;
                            if ((int)uVar13 < DAT_14c9647dc) {
                              puVar7 = (undefined8 *)
                                       ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                                       *(longlong *)
                                        (DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
                              if (((puVar7 == (undefined8 *)0x0) ||
                                  (*(uint *)(puVar7 + 2) != param_2[1])) ||
                                 ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_140548309;
                              plVar12 = (longlong *)*puVar7;
                            }
                          }
                          lVar8 = (**(code **)(*plVar12 + 0x658))();
                          if (lVar8 == 0) {
                            plVar12 = (longlong *)FUN_14479d2ce(param_2);
                            (**(code **)(*plVar12 + 0x660))
                                      (plVar12,*(undefined8 *)(lVar6 + 8 + lVar14));
                          }
                        }
                      }
                      else if (cVar3 == '\x02') {
                        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
                          plVar12 = (longlong *)*puVar7;
                        }
                        else {
                          plVar12 = (longlong *)0x0;
                        }
                        lVar8 = (**(code **)(*plVar12 + 0x648))();
                        if (*(longlong *)(lVar6 + 8 + lVar14) != lVar8) {
                          plVar12 = (longlong *)FUN_14479d2ce(param_2);
                          lVar8 = (**(code **)(*plVar12 + 0x648))(plVar12);
                          if (lVar8 == 0) {
                            plVar12 = (longlong *)FUN_14479d2ce(param_2);
                            (**(code **)(*plVar12 + 0x650))
                                      (plVar12,*(undefined8 *)(lVar6 + 8 + lVar14));
                          }
                        }
                      }
                      else if (cVar3 == '\x03') {
                        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
                          plVar12 = (longlong *)*puVar7;
                        }
                        else {
                          plVar12 = (longlong *)0x0;
                        }
                        lVar10 = plVar12[0xc6];
                        if (lVar10 == 0) {
                          if (*(code **)(*plVar12 + 0xa68) != (code *)&LAB_14470a070) {
                            lVar10 = (**(code **)(*plVar12 + 0xa68))();
                            lVar8 = *(longlong *)(lVar6 + 8 + lVar14);
                            goto LAB_1405482d2;
                          }
LAB_14054816c:
                          uVar5 = *param_2;
                          if ((((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) ||
                             ((puVar7 = (undefined8 *)
                                        ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
                              puVar7 == (undefined8 *)0x0 ||
                              ((*(uint *)(puVar7 + 2) != uVar13 ||
                               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))))) {
LAB_1405482e8:
                            plVar12 = (longlong *)0x0;
                          }
                          else {
                            plVar12 = (longlong *)*puVar7;
                          }
                          if (plVar12[0xc6] == 0) {
                            if (*(code **)(*plVar12 + 0xa68) != (code *)&LAB_14470a070) {
                              lVar8 = (**(code **)(*plVar12 + 0xa68))();
                              if (lVar8 != 0) goto LAB_140547ff4;
                              uVar13 = param_2[1];
                            }
                            if ((uVar13 == 0) || (uVar5 = *param_2, (int)uVar5 < 0)) {
LAB_140548302:
                              uVar11 = 0;
                            }
                            else {
                              uVar11 = 0;
                              if ((int)uVar5 < DAT_14c9647dc) {
                                puVar7 = (undefined8 *)
                                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                                if (((puVar7 == (undefined8 *)0x0) ||
                                    (*(uint *)(puVar7 + 2) != uVar13)) ||
                                   ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_140548302;
                                uVar11 = *puVar7;
                              }
                            }
                            FUN_14054853a(uVar11,*(undefined8 *)(lVar6 + 8 + lVar14));
                          }
                        }
                        else {
LAB_1405482d2:
                          if (lVar8 != lVar10) {
                            uVar13 = param_2[1];
                            if (uVar13 != 0) goto LAB_14054816c;
                            uVar13 = 0;
                            goto LAB_1405482e8;
                          }
                        }
                      }
                    }
LAB_140547ff4:
                    local_c8[0] = 0;
                    local_80 = 0;
                    uStack_78 = 0;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_a0 = 0;
                    uStack_98 = 0;
                    local_b0 = 0;
                    uStack_a8 = 0;
                    local_c0 = 0;
                    uStack_b8 = 0;
                    local_f8 = local_c8;
                    FUN_140042bb4(*(undefined8 *)(lVar6 + 8 + lVar14),lVar16,
                                  *(undefined4 *)(lVar16 + 0x10),0);
                  }
                  lVar14 = lVar14 + 0x10;
                } while ((longlong)(int)uVar4 * 0x10 != lVar14);
              }
              lVar16 = lVar16 + 0x14;
            } while (lVar16 != local_e0);
          }
        }
        plVar12 = local_d0;
        param_1 = local_e8;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            param_1 = local_e8;
            if (*piVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              param_1 = local_e8;
            }
          }
        }
      }
      lVar15 = lVar15 + 0x40;
    } while (lVar15 != lVar17);
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140548388 FUN_140548388 body=141 status=ok
// SIG undefined FUN_140548388(void)

void FUN_140548388(longlong param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & (uint)param_3) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 0x20) == param_3) {
          if ((lVar2 != 0) && (lVar2 != -8)) {
            *param_2 = *(undefined8 *)(lVar2 + 8);
            lVar2 = *(longlong *)(lVar2 + 0x10);
            param_2[1] = lVar2;
            if (lVar2 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140548416 FUN_140548416 body=104 status=ok
// SIG undefined FUN_140548416(void)

void FUN_140548416(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + -8) + 0x48);
  if (lVar3 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + -8) + 0x40);
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 8,param_1,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar3 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 14054847e FUN_14054847e body=186 status=ok
// SIG undefined FUN_14054847e(void)

void FUN_14054847e(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_4;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x98) + 0x30;
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar1 = param_1 + 0x18;
    }
    if (lVar1 == 0) goto LAB_1405484fc;
    uVar2 = *param_2;
    local_28 = FUN_1448c9f94(lVar1,param_4,0);
    if ((*(int *)(param_3 + 0x18) == -1) || (*(int *)(param_3 + 0x1c) == -1)) goto LAB_1405484fc;
    puVar3 = &local_28;
  }
  else {
    if ((*(int *)(param_3 + 0x18) == -1) || (*(int *)(param_3 + 0x1c) == -1)) goto LAB_1405484fc;
    uVar2 = *param_2;
    puVar3 = &local_24;
  }
  FUN_144848652(uVar2,param_3 + 0x18,param_1 + 8,puVar3);
LAB_1405484fc:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054853a FUN_14054853a body=159 status=ok
// SIG undefined FUN_14054853a(void)

void FUN_14054853a(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_1[0xc6] != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0xc6] = param_2;
    (**(code **)(*param_1 + 0x310))(param_1);
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar1 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar1 & 1) == 0) {
LAB_1405485aa:
        *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (param_1[0x16] == 0) {
        lVar2 = FUN_1448abda6(param_1);
        if (lVar2 == 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x9d);
          goto LAB_1405485aa;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405485da FUN_1405485da body=59 status=ok
// SIG undefined FUN_1405485da(void)

void FUN_1405485da(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xf1) & 0x10) != 0) {
    *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) & 0xef;
    FUN_1449db8d8();
    if ((*(byte *)(param_1 + 0xf1) & 0x20) != 0) {
      FUN_140327036(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140548616 FUN_140548616 body=160 status=ok
// SIG undefined FUN_140548616(void)

undefined8 FUN_140548616(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_140549db2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1405486b6 FUN_1405486b6 body=5129 status=ok
// SIG undefined FUN_1405486b6(void)

void FUN_1405486b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  float *pfVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  byte *local_d0;
  undefined4 local_c8 [2];
  byte *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  uint local_8c;
  int iStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  uint local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  iStack_88 = -1;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  iVar35 = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    plVar17 = *(longlong **)(param_1 + 0x68);
    plVar26 = plVar17 + (longlong)*(int *)(param_1 + 0x70) * 2;
    local_f8 = param_1;
    local_f0 = plVar26;
    do {
      plVar24 = (longlong *)*plVar17;
      if (*(char *)((longlong)plVar24 + 0x24) == '\x01') {
        fVar37 = *(float *)(plVar24 + 4);
      }
      else {
        fVar37 = 0.0;
      }
      bVar10 = (**(code **)(*plVar24 + 0x18))();
      if ((int)uStack_b0 != local_84) {
        puVar15 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar15 = local_80;
        }
        iVar35 = *(int *)(puVar15 + (ulonglong)(local_70 - 1 & (uint)bVar10) * 4);
        while (iVar35 != -1) {
          pbVar3 = (byte *)(local_b8 + (longlong)iVar35 * 0x28);
          if (*pbVar3 == bVar10) {
            if ((pbVar3 != (byte *)0x0) &&
               (pfVar31 = (float *)(pbVar3 + 8), pfVar31 != (float *)0x0)) {
              lVar14 = *plVar17;
              if (*(char *)(lVar14 + 0x24) == '\x01') {
                fVar36 = *(float *)(lVar14 + 0x20);
              }
              else {
                fVar36 = 0.0;
              }
              if (*pfVar31 <= fVar36 && fVar36 != *pfVar31) {
                lVar33 = plVar17[1];
                if (lVar33 != 0) {
                  LOCK();
                  *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
                  UNLOCK();
                }
                plVar24 = *(longlong **)(pbVar3 + 0x18);
                *(longlong *)(pbVar3 + 0x10) = lVar14;
                *(longlong *)(pbVar3 + 0x18) = lVar33;
                if (plVar24 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar24 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar24)(plVar24);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar24 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar24 + 0x10))(plVar24);
                    }
                  }
                }
                *pfVar31 = fVar37;
              }
              goto LAB_140548b92;
            }
            break;
          }
          iVar35 = *(int *)(pbVar3 + 0x20);
        }
      }
      plVar26 = (longlong *)*plVar17;
      local_e8 = (longlong *)plVar17[1];
      plVar24 = plVar26;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
        UNLOCK();
        plVar24 = (longlong *)*plVar17;
      }
      bVar10 = (**(code **)(*plVar24 + 0x18))();
      iVar35 = iStack_88;
      uVar16 = uStack_b0;
      local_e0 = plVar26;
      if (local_84 == 0) {
        iVar35 = (int)uStack_b0;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
        if (uStack_b0._4_4_ == iVar35) {
          FUN_140549c28(&local_b8,uVar16 & 0xffffffff);
        }
        iVar22 = local_90;
        if (local_90 == 0) {
          iVar12 = -1;
        }
        else {
          iVar12 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar12 = local_90 + -1;
          }
          iVar12 = iVar12 >> 5;
        }
        iVar23 = local_90 + 1;
        iVar29 = local_90 + 0x1f;
        if (-1 < local_90) {
          iVar29 = local_90;
        }
        if (iVar29 >> 5 == iVar12) {
          local_90 = iVar23;
        }
        else {
          if ((int)local_8c <= local_90) {
            if (local_90 + 0x20U < 0xa0) {
              local_8c = 0x80;
            }
            else {
              uVar30 = local_90 + 0x20U >> 5;
              if (local_8c + 0x1f < 0xa0) {
                uVar27 = 4;
                if (4 < uVar30) {
                  uVar27 = uVar30;
                }
              }
              else {
                uVar27 = uVar30 + (uVar30 * 3 >> 3) + 0x10;
              }
              uVar16 = (ulonglong)(uVar27 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar13 = (uint)(uVar16 + 0xf);
                  if (uVar27 < 0x1ffd) {
                    uVar16 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
                  }
                  else {
                    uVar32 = (ulonglong)(uVar13 & 0xfffffff0);
                    if (uVar32 < 0x7ff1) {
                      bVar21 = (&DAT_14c841e00)[uVar13 >> 4];
                      uVar28 = 0x32;
                      if (0x32 < bVar21) {
                        uVar28 = (ulonglong)bVar21;
                      }
                      uVar34 = 0x32 - (ulonglong)bVar21;
                      do {
                        uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_1405494a2;
                        lVar14 = uVar28 + 1 + uVar34;
                        uVar34 = uVar34 - 1;
                      } while (lVar14 != 0x33);
                    }
                    uVar16 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar16 = (ulonglong)DAT_14c841df8;
                    }
                    uVar16 = -uVar16 & (uVar32 + uVar16) - 1;
                  }
                }
                else {
                  uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                }
              }
LAB_1405494a2:
              iVar12 = (int)(uVar16 >> 2);
              local_8c = 0xffffffe0;
              if ((int)uVar30 <= iVar12) {
                local_8c = iVar12 << 5;
              }
            }
            FUN_1446efbd8(local_a8,local_90);
            iVar23 = local_90 + 1;
          }
          iVar12 = iVar23 + 0x1f;
          if (-1 < iVar23) {
            iVar12 = iVar23;
          }
          local_90 = iVar23;
          if (iVar23 % 0x20 != 0) {
            puVar20 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar20 = local_a8;
            }
            bVar21 = -(char)(iVar23 % 0x20);
            puVar20[iVar12 >> 5] = (puVar20[iVar12 >> 5] << (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
          }
        }
        lVar14 = (longlong)iVar35;
        puVar20 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar20 = local_a8;
        }
        bVar21 = (byte)iVar22 & 0x1f;
        puVar20[iVar29 >> 5] = puVar20[iVar29 >> 5] & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
      }
      else {
        lVar14 = (longlong)iStack_88;
        iStack_88 = *(int *)(local_b8 + 4 + lVar14 * 0x28);
        local_84 = local_84 + -1;
        if (local_84 != 0) {
          *(undefined4 *)(local_b8 + (longlong)iStack_88 * 0x28) = 0xffffffff;
        }
      }
      uVar30 = 1 << ((byte)iVar35 & 0x1f);
      puVar20 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar20 = local_a8;
      }
      iVar22 = iVar35 + 0x1f;
      if (-1 < iVar35) {
        iVar22 = iVar35;
      }
      puVar20[iVar22 >> 5] = puVar20[iVar22 >> 5] | uVar30;
      pbVar3 = (byte *)(local_b8 + lVar14 * 0x28);
      *pbVar3 = bVar10;
      *(float *)(pbVar3 + 8) = fVar37;
      *(longlong **)(pbVar3 + 0x10) = local_e0;
      *(longlong **)(pbVar3 + 0x18) = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
        UNLOCK();
        bVar10 = *pbVar3;
      }
      pbVar3[0x20] = 0xff;
      pbVar3[0x21] = 0xff;
      pbVar3[0x22] = 0xff;
      pbVar3[0x23] = 0xff;
      uVar27 = (int)uStack_b0 - local_84;
      if (1 < uVar27) {
        puVar15 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar15 = local_80;
        }
        iVar12 = *(int *)(puVar15 + (ulonglong)(local_70 - 1 & (uint)bVar10) * 4);
        while (iVar12 != -1) {
          pbVar4 = (byte *)(local_b8 + (longlong)iVar12 * 0x28);
          if (*pbVar4 == bVar10) {
            plVar26 = *(longlong **)(pbVar4 + 0x18);
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              plVar24 = plVar26 + 1;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)*plVar24 == 0) {
                (**(code **)*plVar26)(plVar26);
                LOCK();
                piVar2 = (int *)((longlong)plVar26 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                }
              }
            }
            uVar6 = *(undefined4 *)pbVar3;
            uVar7 = *(undefined4 *)(pbVar3 + 4);
            uVar8 = *(undefined4 *)(pbVar3 + 8);
            uVar9 = *(undefined4 *)(pbVar3 + 0xc);
            uVar5 = *(undefined8 *)(pbVar3 + 0x18);
            *(undefined8 *)(pbVar4 + 0x10) = *(undefined8 *)(pbVar3 + 0x10);
            *(undefined8 *)(pbVar4 + 0x18) = uVar5;
            *(undefined4 *)pbVar4 = uVar6;
            *(undefined4 *)(pbVar4 + 4) = uVar7;
            *(undefined4 *)(pbVar4 + 8) = uVar8;
            *(undefined4 *)(pbVar4 + 0xc) = uVar9;
            if (local_84 != 0) {
              *(int *)(local_b8 + (longlong)iStack_88 * 0x28) = iVar35;
            }
            *(undefined4 *)(local_b8 + lVar14 * 0x28) = 0xffffffff;
            iVar12 = -1;
            if (0 < local_84) {
              iVar12 = iStack_88;
            }
            *(int *)(local_b8 + 4 + lVar14 * 0x28) = iVar12;
            iStack_88 = iVar35;
            local_84 = local_84 + 1;
            puVar20 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar20 = local_a8;
            }
            puVar20[iVar22 >> 5] = puVar20[iVar22 >> 5] & (uVar30 ^ 0xffffffff);
            plVar26 = local_f0;
            goto LAB_140548b79;
          }
          iVar12 = *(int *)(pbVar4 + 0x20);
        }
      }
      uVar30 = 1;
      if (3 < uVar27) {
        uVar16 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar30 = 1 << ((byte)lVar14 & 0x1f);
      }
      if (((int)uVar27 < 1) || ((int)uVar30 <= (int)local_70)) {
        uVar30 = local_70 - 1 & (uint)bVar10;
        *(uint *)(pbVar3 + 0x24) = uVar30;
        puVar15 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar15 = local_80;
        }
        *(undefined4 *)(pbVar3 + 0x20) =
             *(undefined4 *)(puVar15 + (ulonglong)(local_70 - 1 & uVar30) * 4);
        puVar15 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar15 = local_80;
        }
        *(int *)(puVar15 + (ulonglong)(local_70 - 1 & uVar30) * 4) = iVar35;
        plVar26 = local_f0;
      }
      else {
        local_70 = uVar30;
        if (local_78 == (undefined1 *)0x0) {
          puVar15 = (undefined1 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,0,4);
          puVar15 = local_78;
          plVar26 = local_f0;
          if (local_70 == 0) goto LAB_140548b79;
        }
        uVar30 = local_70;
        plVar26 = local_f0;
        if ((1 < local_70) || (puVar15 != (undefined1 *)0x0)) {
          uVar27 = 0;
          if (1 < local_70) {
            uVar27 = local_70;
          }
          FUN_1446efa72(&local_78,0,uVar27,4);
        }
        if (0 < (int)uVar30) {
          uVar27 = 0;
          do {
            puVar15 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            *(undefined4 *)(puVar15 + (ulonglong)(local_70 + 0x7fffffff & uVar27) * 4) = 0xffffffff;
            uVar27 = uVar27 + 1;
          } while (uVar30 != uVar27);
        }
        if (local_90 == 0) {
          uVar32 = 1;
          uVar16 = 0;
          iVar35 = 0;
          iVar22 = 0;
        }
        else {
          puVar20 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar20 = local_a8;
          }
          uVar30 = *puVar20;
          if (uVar30 == 0) {
            iVar35 = local_90 + 0x1e;
            if (-1 < local_90 + -1) {
              iVar35 = local_90 + -1;
            }
            uVar16 = 0;
            uVar32 = (ulonglong)(uint)(iVar35 >> 5);
            if (iVar35 >> 5 < 1) {
              uVar32 = uVar16;
            }
            iVar22 = 0;
            do {
              if (uVar32 == uVar16) goto LAB_140548b79;
              iVar22 = iVar22 + 0x20;
              uVar30 = puVar20[uVar16 + 1];
              uVar16 = uVar16 + 1;
            } while (uVar30 == 0);
          }
          else {
            uVar16 = 0;
            iVar22 = 0;
          }
          uVar32 = (ulonglong)(-uVar30 & uVar30);
          uVar28 = uVar32 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar28 != 0) {
            for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar35 = (iVar22 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (local_90 <= iVar35) {
            iVar35 = local_90;
          }
        }
        if (iVar35 < local_90) {
          uVar30 = 0xffffffff;
          do {
            lVar14 = (longlong)iVar35;
            uVar27 = local_70 - 1 & (uint)*(byte *)(local_b8 + lVar14 * 0x28);
            *(uint *)(local_b8 + 0x24 + lVar14 * 0x28) = uVar27;
            puVar15 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            *(undefined4 *)(local_b8 + 0x20 + lVar14 * 0x28) =
                 *(undefined4 *)(puVar15 + (ulonglong)(local_70 - 1 & uVar27) * 4);
            puVar15 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            *(int *)(puVar15 + (ulonglong)(local_70 - 1 & uVar27) * 4) = iVar35;
            uVar30 = ~(uint)uVar32 & uVar30;
            puVar20 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar20 = local_a8;
            }
            iVar35 = (int)uVar16;
            lVar14 = (longlong)iVar35;
            uVar27 = puVar20[lVar14] & uVar30;
            if (uVar27 == 0) {
              iVar12 = local_90 + 0x1e;
              if (-1 < local_90 + -1) {
                iVar12 = local_90 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar23 = iVar12;
              if (iVar12 < iVar35) {
                iVar23 = iVar35;
              }
              if (iVar12 <= iVar35) break;
              lVar33 = 0;
              while( true ) {
                iVar22 = iVar22 + 0x20;
                uVar27 = puVar20[lVar14 + lVar33 + 1];
                if (uVar27 != 0) break;
                lVar33 = lVar33 + 1;
                if (iVar23 - lVar14 == lVar33) goto LAB_140548b79;
              }
              uVar16 = (ulonglong)(iVar35 + (int)lVar33 + 1);
              uVar30 = 0xffffffff;
            }
            uVar32 = (ulonglong)(-uVar27 & uVar27);
            uVar28 = uVar32 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar35 = (iVar22 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          } while (iVar35 < local_90);
        }
      }
LAB_140548b79:
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_e8 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*local_e8)();
          LOCK();
          piVar2 = (int *)((longlong)local_e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e8 + 0x10))();
          }
        }
      }
LAB_140548b92:
      iVar22 = local_90;
      plVar17 = plVar17 + 2;
    } while (plVar17 != plVar26);
    if (local_90 == 0) {
      iVar35 = 0;
    }
    else {
      puVar20 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar20 = local_a8;
      }
      uVar30 = *puVar20;
      iVar35 = local_90;
      if (uVar30 == 0) {
        iVar12 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar12 = local_90 + -1;
        }
        uVar16 = 0;
        uVar32 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar32 = uVar16;
        }
        iVar12 = 0;
        do {
          if (uVar32 == uVar16) goto LAB_140548e6f;
          iVar12 = iVar12 + 0x20;
          uVar30 = puVar20[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar30 == 0);
      }
      else {
        iVar12 = 0;
        uVar16 = 0;
      }
      uVar28 = (ulonglong)(-uVar30 & uVar30);
      uVar32 = uVar28 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar23 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar23 < local_90) {
        local_e8 = (longlong *)(local_f8 + 0x78);
        local_e0 = (longlong *)(local_f8 + 0xb0);
        uVar30 = 0xffffffff;
        lVar14 = local_f8;
        do {
          lVar33 = local_b8;
          bVar10 = *(byte *)(local_b8 + (longlong)iVar23 * 0x28);
          uVar27 = (uint)bVar10;
          if (*(int *)(lVar14 + 0x80) != *(int *)(lVar14 + 0xac)) {
            plVar17 = *(longlong **)(lVar14 + 0xb8);
            if (*(longlong **)(lVar14 + 0xb8) == (longlong *)0x0) {
              plVar17 = local_e0;
            }
            iVar35 = *(int *)((longlong)plVar17 +
                             (ulonglong)(*(int *)(lVar14 + 0xc0) - 1U & uVar27) * 4);
            if (iVar35 != -1) {
              do {
                lVar19 = *local_e8 + (longlong)iVar35 * 0x20;
                if (*(byte *)(*local_e8 + (longlong)iVar35 * 0x20) == bVar10) {
                  if (lVar19 != 0) goto LAB_140548da4;
                  break;
                }
                iVar35 = *(int *)(lVar19 + 0x18);
              } while (iVar35 != -1);
            }
          }
          local_f0 = (longlong *)CONCAT44(local_f0._4_4_,uVar30);
          FUN_14054a486(local_e8,local_c8);
          *local_c0 = bVar10;
          local_c0[8] = 0;
          local_c0[9] = 0;
          local_c0[10] = 0;
          local_c0[0xb] = 0;
          local_c0[0xc] = 0;
          local_c0[0xd] = 0;
          local_c0[0xe] = 0;
          local_c0[0xf] = 0;
          local_c0[0x10] = 0;
          local_c0[0x11] = 0;
          local_c0[0x12] = 0;
          local_c0[0x13] = 0;
          local_c0[0x14] = 0;
          local_c0[0x15] = 0;
          local_c0[0x16] = 0;
          local_c0[0x17] = 0;
          local_c0[0x18] = 0xff;
          local_c0[0x19] = 0xff;
          local_c0[0x1a] = 0xff;
          local_c0[0x1b] = 0xff;
          local_d8 = (longlong *)CONCAT44(local_d8._4_4_,local_c8[0]);
          local_d0 = local_c0;
          cVar11 = FUN_14054a354(local_e8,bVar10);
          if (cVar11 == '\0') {
            uVar30 = *(int *)(local_f8 + 0x80) - *(int *)(local_f8 + 0xac);
            iVar35 = 1;
            if (3 < uVar30) {
              uVar32 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
              lVar14 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar35 = 1 << ((byte)lVar14 & 0x1f);
            }
            if (((int)uVar30 < 1) || (iVar35 <= *(int *)(local_f8 + 0xc0))) {
              uVar30 = *(int *)(local_f8 + 0xc0) - 1U & uVar27;
              *(uint *)(local_d0 + 0x1c) = uVar30;
              plVar17 = *(longlong **)(local_f8 + 0xb8);
              if (*(longlong **)(local_f8 + 0xb8) == (longlong *)0x0) {
                plVar17 = local_e0;
              }
              *(undefined4 *)(local_d0 + 0x18) =
                   *(undefined4 *)
                    ((longlong)plVar17 + (ulonglong)(*(int *)(local_f8 + 0xc0) - 1U & uVar30) * 4);
              plVar17 = *(longlong **)(local_f8 + 0xb8);
              if (*(longlong **)(local_f8 + 0xb8) == (longlong *)0x0) {
                plVar17 = local_e0;
              }
              *(int *)((longlong)plVar17 + (ulonglong)(*(int *)(local_f8 + 0xc0) - 1U & uVar30) * 4)
                   = (int)local_d8;
            }
            else {
              *(int *)(local_f8 + 0xc0) = iVar35;
              FUN_14054ad44(local_e8);
            }
          }
          lVar19 = (longlong)(int)local_d8 * 0x20 + *local_e8;
          lVar14 = local_f8;
          uVar30 = (uint)local_f0;
LAB_140548da4:
          lVar33 = lVar33 + (longlong)iVar23 * 0x28;
          plVar17 = *(longlong **)(lVar19 + 8);
          if ((plVar17 == (longlong *)0x0) || (plVar17 != *(longlong **)(lVar33 + 0x10))) {
            local_f0 = (longlong *)CONCAT44(local_f0._4_4_,uVar30);
            if (plVar17 != (longlong *)0x0) {
              lVar19 = (**(code **)(*plVar17 + 0x10))();
              lVar18 = (**(code **)(**(longlong **)(lVar33 + 0x10) + 0x10))();
              lVar14 = local_f8;
              if (lVar19 == lVar18) {
                uVar5 = *(undefined8 *)(lVar33 + 0x10);
                plVar17 = *(longlong **)(lVar33 + 0x18);
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                }
                if (*(int *)(local_f8 + 0x80) == *(int *)(local_f8 + 0xac)) {
LAB_140549a96:
                  lVar33 = 0;
                }
                else {
                  plVar26 = *(longlong **)(local_f8 + 0xb8);
                  if (*(longlong **)(local_f8 + 0xb8) == (longlong *)0x0) {
                    plVar26 = local_e0;
                  }
                  iVar35 = *(int *)((longlong)plVar26 +
                                   (ulonglong)(*(int *)(local_f8 + 0xc0) - 1U & uVar27) * 4);
                  if (iVar35 == -1) goto LAB_140549a96;
                  do {
                    lVar33 = *local_e8 + (longlong)iVar35 * 0x20;
                    if (*(byte *)(*local_e8 + (longlong)iVar35 * 0x20) == bVar10)
                    goto LAB_140549a9d;
                    iVar35 = *(int *)(lVar33 + 0x18);
                  } while (iVar35 != -1);
                  lVar33 = 0;
                }
LAB_140549a9d:
                *(undefined8 *)(lVar33 + 8) = uVar5;
                plVar26 = *(longlong **)(lVar33 + 0x10);
                if (plVar17 == plVar26) {
LAB_140549940:
                  plVar26 = plVar17;
                  lVar14 = local_f8;
                  uVar30 = (uint)local_f0;
                  if (plVar26 != (longlong *)0x0) {
LAB_140549949:
                    LOCK();
                    plVar17 = plVar26 + 1;
                    *(int *)plVar17 = (int)*plVar17 + -1;
                    UNLOCK();
                    lVar14 = local_f8;
                    if ((int)*plVar17 == 0) {
                      (**(code **)*plVar26)(plVar26);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar26 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      lVar14 = local_f8;
                      uVar30 = (uint)local_f0;
                      if (*piVar2 == 0) {
                        lVar14 = *plVar26;
LAB_140549299:
                        (**(code **)(lVar14 + 0x10))(plVar26);
                        lVar14 = local_f8;
                        uVar30 = (uint)local_f0;
                      }
                    }
                  }
                }
                else {
                  *(longlong **)(lVar33 + 0x10) = plVar17;
                  uVar30 = (uint)local_f0;
                  if (plVar26 != (longlong *)0x0) {
LAB_14054926b:
                    LOCK();
                    plVar17 = plVar26 + 1;
                    *(int *)plVar17 = (int)*plVar17 + -1;
                    UNLOCK();
                    lVar14 = local_f8;
                    uVar30 = (uint)local_f0;
                    if ((int)*plVar17 == 0) {
                      (**(code **)*plVar26)(plVar26);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar26 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      lVar14 = local_f8;
                      uVar30 = (uint)local_f0;
                      if (*piVar2 == 0) {
                        lVar14 = *plVar26;
                        goto LAB_140549299;
                      }
                    }
                  }
                }
                goto LAB_140548dbe;
              }
            }
            lVar19 = *(longlong *)(lVar14 + 200);
            iVar35 = *(int *)(lVar14 + 0xd0);
            lVar18 = (longlong)iVar35;
            if (lVar18 != 0) {
              plVar24 = (longlong *)(lVar19 + 0x10);
              lVar25 = lVar18 * 0x18;
              do {
                if (*(byte *)(plVar24 + -2) == bVar10) {
                  if (plVar24 != (longlong *)&DAT_00000010) {
                    if (*(char *)((longlong)plVar24 + -0xf) != '\0') {
                      uVar30 = (uint)local_f0;
                      if (*(char *)((longlong)plVar24 + -0xf) == '\x01') {
                        lVar19 = *(longlong *)(lVar33 + 0x10);
                        plVar17 = *(longlong **)(lVar33 + 0x18);
                        if (plVar17 == (longlong *)0x0) {
                          plVar24[-1] = lVar19;
                          plVar26 = (longlong *)*plVar24;
                          if (plVar26 != (longlong *)0x0) {
                            *plVar24 = 0;
LAB_140549585:
                            LOCK();
                            plVar17 = plVar26 + 1;
                            *(int *)plVar17 = (int)*plVar17 + -1;
                            UNLOCK();
                            if ((int)*plVar17 == 0) {
                              (**(code **)*plVar26)(plVar26);
                              LOCK();
                              piVar2 = (int *)((longlong)plVar26 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              iVar35 = *piVar2;
                              UNLOCK();
                              plVar17 = plVar26;
                              goto joined_r0x0001405495ab;
                            }
                          }
                        }
                        else {
                          LOCK();
                          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                          UNLOCK();
                          plVar24[-1] = lVar19;
                          plVar26 = (longlong *)*plVar24;
                          if (plVar17 == plVar26) {
                            LOCK();
                            plVar26 = plVar17 + 1;
                            *(int *)plVar26 = (int)*plVar26 + -1;
                            UNLOCK();
                            if ((int)*plVar26 == 0) {
                              (**(code **)*plVar17)(plVar17);
                              LOCK();
                              piVar2 = (int *)((longlong)plVar17 + 0xc);
                              *piVar2 = *piVar2 + -1;
                              iVar35 = *piVar2;
                              UNLOCK();
joined_r0x0001405495ab:
                              lVar14 = local_f8;
                              uVar30 = (uint)local_f0;
                              if (iVar35 == 0) {
                                (**(code **)(*plVar17 + 0x10))(plVar17);
                                lVar14 = local_f8;
                                uVar30 = (uint)local_f0;
                              }
                            }
                          }
                          else {
                            *plVar24 = (longlong)plVar17;
                            if (plVar26 != (longlong *)0x0) goto LAB_140549585;
                          }
                        }
                        *(undefined1 *)((longlong)plVar24 + -0xf) = 0;
                      }
                      goto LAB_140548dbe;
                    }
                    lVar14 = *(longlong *)(lVar33 + 0x10);
                    plVar17 = *(longlong **)(lVar33 + 0x18);
                    if (plVar17 == (longlong *)0x0) {
                      plVar24[-1] = lVar14;
                      plVar26 = (longlong *)*plVar24;
                      if (plVar26 != (longlong *)0x0) {
                        *plVar24 = 0;
LAB_1405498d6:
                        LOCK();
                        plVar17 = plVar26 + 1;
                        *(int *)plVar17 = (int)*plVar17 + -1;
                        UNLOCK();
                        if ((int)*plVar17 == 0) {
                          local_d8 = plVar26;
                          (**(code **)*plVar26)(plVar26);
                          LOCK();
                          piVar2 = (int *)((longlong)local_d8 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          iVar35 = *piVar2;
                          UNLOCK();
                          plVar17 = plVar26;
                          goto joined_r0x0001405498f7;
                        }
                      }
                    }
                    else {
                      LOCK();
                      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                      UNLOCK();
                      plVar24[-1] = lVar14;
                      plVar26 = (longlong *)*plVar24;
                      if (plVar17 == plVar26) {
                        LOCK();
                        plVar26 = plVar17 + 1;
                        *(int *)plVar26 = (int)*plVar26 + -1;
                        UNLOCK();
                        if ((int)*plVar26 == 0) {
                          (**(code **)*plVar17)(plVar17);
                          LOCK();
                          piVar2 = (int *)((longlong)plVar17 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          iVar35 = *piVar2;
                          UNLOCK();
joined_r0x0001405498f7:
                          if (iVar35 == 0) {
                            (**(code **)(*plVar17 + 0x10))(plVar17);
                          }
                        }
                      }
                      else {
                        *plVar24 = (longlong)plVar17;
                        if (plVar26 != (longlong *)0x0) goto LAB_1405498d6;
                      }
                    }
                    lVar19 = (**(code **)(**(longlong **)(lVar33 + 0x10) + 0x10))();
                    lVar18 = (**(code **)(*(longlong *)plVar24[-1] + 0x10))();
                    lVar14 = local_f8;
                    uVar30 = (uint)local_f0;
                    if (lVar19 != lVar18) goto LAB_140548dbe;
                    *(undefined1 *)((longlong)plVar24 + -0xf) = 1;
                    lVar19 = *(longlong *)(lVar33 + 0x10);
                    plVar26 = *(longlong **)(lVar33 + 0x18);
                    if (plVar26 == (longlong *)0x0) {
                      plVar24[-1] = lVar19;
                      plVar26 = (longlong *)*plVar24;
                      if (plVar26 == (longlong *)0x0) goto LAB_140548dbe;
                      *plVar24 = 0;
                      goto LAB_140549949;
                    }
                    LOCK();
                    *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
                    UNLOCK();
                    plVar24[-1] = lVar19;
                    plVar17 = (longlong *)*plVar24;
                    if (plVar26 == plVar17) goto LAB_14054926b;
                    *plVar24 = (longlong)plVar26;
                    goto LAB_140549940;
                  }
                  break;
                }
                plVar24 = plVar24 + 3;
                lVar25 = lVar25 + -0x18;
              } while (lVar25 != 0);
            }
            *(uint *)(lVar14 + 0xd0) = iVar35 + 1U;
            if (*(uint *)(lVar14 + 0xd4) < iVar35 + 1U) {
              FUN_14054afba((longlong *)(lVar14 + 200),iVar35);
              lVar19 = *(longlong *)(lVar14 + 200);
            }
            pbVar3 = (byte *)(lVar19 + lVar18 * 0x18);
            FUN_140549d9e(pbVar3);
            *pbVar3 = bVar10;
            uVar5 = *(undefined8 *)(lVar33 + 0x10);
            plVar17 = *(longlong **)(lVar33 + 0x18);
            uVar30 = (uint)local_f0;
            if (plVar17 == (longlong *)0x0) {
              *(undefined8 *)(pbVar3 + 8) = uVar5;
              plVar26 = *(longlong **)(pbVar3 + 0x10);
              if (plVar26 != (longlong *)0x0) {
                pbVar3[0x10] = 0;
                pbVar3[0x11] = 0;
                pbVar3[0x12] = 0;
                pbVar3[0x13] = 0;
                pbVar3[0x14] = 0;
                pbVar3[0x15] = 0;
                pbVar3[0x16] = 0;
                pbVar3[0x17] = 0;
LAB_140549a12:
                LOCK();
                plVar17 = plVar26 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)*plVar26)(plVar26);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar26 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar35 = *piVar2;
                  UNLOCK();
joined_r0x000140549a63:
                  uVar30 = (uint)local_f0;
                  if (iVar35 == 0) {
                    (**(code **)(*plVar26 + 0x10))(plVar26);
                    uVar30 = (uint)local_f0;
                  }
                }
              }
            }
            else {
              LOCK();
              *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
              UNLOCK();
              *(undefined8 *)(pbVar3 + 8) = uVar5;
              plVar26 = *(longlong **)(pbVar3 + 0x10);
              if (plVar17 == plVar26) {
                LOCK();
                plVar26 = plVar17 + 1;
                *(int *)plVar26 = (int)*plVar26 + -1;
                UNLOCK();
                if ((int)*plVar26 == 0) {
                  (**(code **)*plVar17)(plVar17);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar17 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar35 = *piVar2;
                  UNLOCK();
                  plVar26 = plVar17;
                  goto joined_r0x000140549a63;
                }
              }
              else {
                *(longlong **)(pbVar3 + 0x10) = plVar17;
                if (plVar26 != (longlong *)0x0) goto LAB_140549a12;
              }
            }
            pbVar3[1] = 0;
            pbVar3[4] = 0;
            pbVar3[5] = 0;
            pbVar3[6] = 0x80;
            pbVar3[7] = 0x3f;
            lVar14 = local_f8;
          }
LAB_140548dbe:
          uVar30 = uVar30 & ~(uint)uVar28;
          puVar20 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar20 = local_a8;
          }
          iVar35 = (int)uVar16;
          lVar33 = (longlong)iVar35;
          uVar27 = puVar20[lVar33] & uVar30;
          if (uVar27 == 0) {
            iVar23 = local_90 + 0x1e;
            if (-1 < local_90 + -1) {
              iVar23 = local_90 + -1;
            }
            iVar23 = iVar23 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar29 = iVar23;
            if (iVar23 < iVar35) {
              iVar29 = iVar35;
            }
            if (iVar35 < iVar23) {
              lVar19 = 0;
              do {
                uVar27 = puVar20[lVar33 + lVar19 + 1];
                if (uVar27 != 0) {
                  uVar16 = (ulonglong)(iVar35 + (int)lVar19 + 1);
                  uVar30 = 0xffffffff;
                  goto LAB_140548e39;
                }
                iVar12 = iVar12 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar29 - lVar33 != lVar19);
              uVar30 = 0xffffffff;
              lVar33 = (longlong)iVar29;
            }
            uVar16 = lVar33 + 1U & 0xffffffff;
            lVar14 = local_f8;
            iVar23 = local_90;
          }
          else {
LAB_140548e39:
            uVar28 = (ulonglong)(-uVar27 & uVar27);
            uVar32 = uVar28 * 2 + 1;
            lVar33 = 0x3f;
            if (uVar32 != 0) {
              for (; uVar32 >> lVar33 == 0; lVar33 = lVar33 + -1) {
              }
            }
            iVar23 = (iVar12 - ((uint)lVar33 ^ 0x3f)) + 0x3e;
            if (local_90 <= iVar23) {
              iVar23 = local_90;
            }
          }
          iVar35 = local_90;
        } while (iVar23 != iVar22);
      }
    }
  }
LAB_140548e6f:
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
    iVar35 = local_90;
  }
  if (iVar35 == 0) {
    uVar32 = 1;
    uVar16 = 0;
    iVar22 = 0;
    iVar12 = 0;
  }
  else {
    puVar20 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar20 = local_a8;
    }
    uVar30 = *puVar20;
    if (uVar30 == 0) {
      iVar22 = iVar35 + 0x1e;
      if (-1 < iVar35 + -1) {
        iVar22 = iVar35 + -1;
      }
      uVar16 = 0;
      uVar32 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar32 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar32 == uVar16) goto LAB_140548fbe;
        iVar12 = iVar12 + 0x20;
        uVar30 = puVar20[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar32 = (ulonglong)(-uVar30 & uVar30);
    uVar28 = uVar32 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar22 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar35 <= iVar22) {
      iVar22 = iVar35;
    }
  }
  if (iVar22 < iVar35) {
    uVar30 = 0xffffffff;
    do {
      plVar17 = *(longlong **)(local_b8 + 0x18 + (longlong)iVar22 * 0x28);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar26 = plVar17 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
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
      uVar30 = uVar30 & ~(uint)uVar32;
      puVar20 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar20 = local_a8;
      }
      iVar35 = (int)uVar16;
      lVar14 = (longlong)iVar35;
      uVar27 = puVar20[lVar14] & uVar30;
      if (uVar27 == 0) {
        iVar22 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar22 = local_90 + -1;
        }
        iVar22 = iVar22 >> 5;
        iVar23 = iVar22;
        if (iVar22 < iVar35) {
          iVar23 = iVar35;
        }
        if (iVar22 <= iVar35) break;
        lVar33 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar27 = puVar20[lVar14 + lVar33 + 1];
          if (uVar27 != 0) break;
          lVar33 = lVar33 + 1;
          if (iVar23 - lVar14 == lVar33) goto LAB_140548fbe;
        }
        uVar16 = (ulonglong)(iVar35 + (int)lVar33 + 1);
        uVar30 = 0xffffffff;
      }
      uVar32 = (ulonglong)(-uVar27 & uVar27);
      uVar28 = uVar32 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar22 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar22 < local_90);
  }
LAB_140548fbe:
  uVar16 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_140549ad6(&local_b8,0);
  }
  iStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140549ad6 FUN_140549ad6 body=328 status=ok
// SIG undefined FUN_140549ad6(void)

void FUN_140549ad6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140549b6e;
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
LAB_140549b6e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x28)) {
      uVar5 = uVar3 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x28,8);
  }
  return;
}



// FUNCTION 140549c28 FUN_140549c28 body=373 status=ok
// SIG undefined FUN_140549c28(void)

void FUN_140549c28(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140549cb1;
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
LAB_140549cb1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140549d9e FUN_140549d9e body=20 status=ok
// SIG undefined FUN_140549d9e(void)

void FUN_140549d9e(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return;
}



// FUNCTION 140549db2 FUN_140549db2 body=91 status=ok
// SIG undefined FUN_140549db2(void)

void FUN_140549db2(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140549f86(param_1,param_2,1);
  return;
}



// FUNCTION 140549e0e FUN_140549e0e body=254 status=ok
// SIG undefined FUN_140549e0e(void)

void FUN_140549e0e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
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
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 140549f0c FUN_140549f0c body=122 status=ok
// SIG undefined FUN_140549f0c(void)

void FUN_140549f0c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x10 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar5) * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 140549f86 FUN_140549f86 body=138 status=ok
// SIG undefined FUN_140549f86(void)

void FUN_140549f86(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14054a010 FUN_14054a010 body=158 status=ok
// SIG undefined FUN_14054a010(void)

void FUN_14054a010(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 14054a0ae FUN_14054a0ae body=656 status=ok
// SIG undefined FUN_14054a0ae(void)

void FUN_14054a0ae(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140548388(param_1,&local_58,param_2);
  if ((local_58 != (longlong *)0x0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x48);
    lVar4 = (longlong)*(int *)(param_1 + 0x50) << 6;
    do {
      if (*(int *)(lVar9 + 0xc) == (int)local_58[3]) {
        if (lVar9 != 0) {
          (**(code **)(*local_58 + 0x20))(local_58,0);
          *(undefined2 *)(lVar9 + 0x38) = 1;
          *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 4;
        }
        break;
      }
      lVar9 = lVar9 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  lVar9 = param_1 + 0x78;
  FUN_14054a486(lVar9,local_40);
  bVar7 = (byte)param_2;
  *local_38 = bVar7;
  *(undefined8 *)(local_38 + 8) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(local_38 + 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    bVar7 = *local_38;
  }
  local_38[0x18] = 0xff;
  local_38[0x19] = 0xff;
  local_38[0x1a] = 0xff;
  local_38[0x1b] = 0xff;
  local_44 = local_40[0];
  cVar3 = FUN_14054a354(lVar9,bVar7,local_38);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0xc0))) {
      uVar6 = *(int *)(param_1 + 0xc0) - 1U & (uint)bVar7;
      *(uint *)(local_38 + 0x1c) = uVar6;
      lVar9 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar9 = param_1 + 0xb0;
      }
      *(undefined4 *)(local_38 + 0x18) =
           *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar9 = param_1 + 0xb0;
      }
      *(undefined4 *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & uVar6) * 4) = local_44;
    }
    else {
      *(int *)(param_1 + 0xc0) = iVar8;
      FUN_14054ad44(lVar9);
    }
  }
  FUN_140548388(param_1,&local_68,param_2);
  if ((local_68 != 0) && ((longlong)*(int *)(param_1 + 0x50) != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x48);
    lVar4 = (longlong)*(int *)(param_1 + 0x50) << 6;
    do {
      if (*(int *)(lVar9 + 0xc) == *(int *)(local_68 + 0x18)) {
        if (lVar9 != 0) {
          *(undefined2 *)(lVar9 + 0x38) = 0x101;
          *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 4;
          if ((longlong)*(int *)(param_1 + 0x40) != 0) {
            lVar9 = (longlong)*(int *)(param_1 + 0x40) * 0x18;
            do {
              FUN_14054a65c();
              lVar9 = lVar9 + -0x18;
            } while (lVar9 != 0);
          }
        }
        break;
      }
      lVar9 = lVar9 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
  }
  if (local_60 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_60 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14054a354 FUN_14054a354 body=305 status=ok
// SIG undefined FUN_14054a354(void)

undefined8 FUN_14054a354(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar13 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar13 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar13 * 0x20) == *param_3) {
          plVar11 = (longlong *)puVar3[2];
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
          uVar8 = *(undefined8 *)param_3;
          uVar9 = *(undefined8 *)(param_3 + 8);
          puVar3[2] = *(undefined8 *)(param_3 + 0x10);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          iVar5 = *param_4;
          lVar6 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar6 + (longlong)(int)param_1[6] * 0x20) = iVar5;
          }
          *(undefined4 *)(lVar6 + (longlong)iVar5 * 0x20) = 0xffffffff;
          uVar10 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar10 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar6 + (longlong)iVar5 * 0x20 + 4) = uVar10;
          *(int *)(param_1 + 6) = iVar5;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar11 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar11 = (longlong *)param_1[4];
          }
          iVar12 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar12 = iVar5;
          }
          bVar7 = (byte)iVar5 & 0x1f;
          puVar4 = (uint *)((longlong)plVar11 + (longlong)(iVar12 >> 5) * 4);
          *puVar4 = *puVar4 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
          *param_4 = iVar13;
          return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        }
        iVar13 = *(int *)(puVar3 + 3);
      } while (iVar13 != -1);
    }
  }
  return 0;
}



// FUNCTION 14054a486 FUN_14054a486 body=469 status=ok
// SIG undefined FUN_14054a486(void)

int * FUN_14054a486(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x20);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14054a65c FUN_14054a65c body=1483 status=ok
// SIG undefined FUN_14054a65c(void)

void FUN_14054a65c(undefined8 param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  
  if (param_2[1] == 0) {
    return;
  }
  uVar7 = *param_2;
  if ((int)uVar7 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar7) {
    return;
  }
  plVar8 = (longlong *)
           ((ulonglong)((uVar7 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar8 + 2) != param_2[1]) {
    return;
  }
  if ((*(uint *)(plVar8 + 1) & 0x10200000) != 0) {
    return;
  }
  lVar3 = *plVar8;
  if (lVar3 == 0) {
    return;
  }
  puVar10 = *(uint **)(param_2 + 2);
  uVar7 = param_2[4];
  lVar11 = (longlong)(int)uVar7;
  if (lVar11 != 0) {
    lVar4 = lVar11 << 4;
    puVar9 = puVar10;
    do {
      if (*puVar9 == param_3[3]) {
        if (puVar9 != (uint *)0x0) goto LAB_14054a732;
        break;
      }
      puVar9 = puVar9 + 4;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  param_2[4] = uVar7 + 1;
  if (param_2[5] < uVar7 + 1) {
    FUN_14054ac36(param_2 + 2,uVar7);
    puVar10 = *(uint **)(param_2 + 2);
  }
  puVar9 = puVar10 + lVar11 * 4;
  FUN_14054ac27();
  puVar10[lVar11 * 4] = param_3[3];
LAB_14054a732:
  if (*(longlong *)(puVar9 + 2) == 0) {
    lVar11 = *(longlong *)(lVar3 + 0xa8);
    if (*(longlong *)(lVar3 + 0xa8) == 0) {
      lVar11 = lVar3;
    }
    if (param_3[1] == 0) {
LAB_14054aa86:
      uVar5 = 0;
    }
    else {
      uVar7 = *param_3;
      uVar5 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar6 + 2) != param_3[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
        goto LAB_14054aa86;
        uVar5 = *puVar6;
      }
    }
    lVar3 = FUN_14090ceee(uVar5,lVar11,0);
    if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(puVar9 + 2) = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      FUN_1456cec3c();
      *(longlong *)(puVar9 + 2) = lVar3;
    }
  }
  if (*(char *)((longlong)param_3 + 0x39) != '\x01') {
    return;
  }
  cVar1 = (char)param_3[2];
  if (cVar1 == '\x01') {
    if (param_2[1] == 0) {
LAB_14054ab76:
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar7 = *param_2;
      plVar8 = (longlong *)0x0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar6 + 2) != param_2[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
        goto LAB_14054ab76;
        plVar8 = (longlong *)*puVar6;
      }
    }
    lVar3 = (**(code **)(*plVar8 + 0x658))();
    if (lVar3 != 0) {
      plVar8 = (longlong *)FUN_14479d2ce(param_2);
      lVar3 = (**(code **)(*plVar8 + 0x658))(plVar8);
      if ((longlong)(int)param_2[4] == 0) {
        return;
      }
      lVar11 = *(longlong *)(param_2 + 2);
      lVar4 = (longlong)(int)param_2[4] << 4;
      while (*(longlong *)(lVar11 + 8) != lVar3) {
        lVar11 = lVar11 + 0x10;
        lVar4 = lVar4 + -0x10;
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar11 == 0) {
        return;
      }
    }
    if (param_2[1] == 0) {
LAB_14054ab7d:
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar7 = *param_2;
      plVar8 = (longlong *)0x0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar6 + 2) != param_2[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
        goto LAB_14054ab7d;
        plVar8 = (longlong *)*puVar6;
      }
    }
    uVar5 = *(undefined8 *)(puVar9 + 2);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 0x660);
LAB_14054a994:
                    /* WARNING: Could not recover jumptable at 0x00014054a9a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar8,uVar5);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x02') {
      return;
    }
    if (param_2[1] == 0) {
LAB_14054ab9d:
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar7 = *param_2;
      plVar8 = (longlong *)0x0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar6 + 2) != param_2[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
        goto LAB_14054ab9d;
        plVar8 = (longlong *)*puVar6;
      }
    }
    lVar3 = (**(code **)(*plVar8 + 0x648))();
    if (lVar3 != 0) {
      plVar8 = (longlong *)FUN_14479d2ce(param_2);
      lVar3 = (**(code **)(*plVar8 + 0x648))(plVar8);
      if ((longlong)(int)param_2[4] == 0) {
        return;
      }
      lVar11 = *(longlong *)(param_2 + 2);
      lVar4 = (longlong)(int)param_2[4] << 4;
      while (*(longlong *)(lVar11 + 8) != lVar3) {
        lVar11 = lVar11 + 0x10;
        lVar4 = lVar4 + -0x10;
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar11 == 0) {
        return;
      }
    }
    if (param_2[1] == 0) {
LAB_14054aba4:
      plVar8 = (longlong *)0x0;
    }
    else {
      uVar7 = *param_2;
      plVar8 = (longlong *)0x0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((puVar6 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar6 + 2) != param_2[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
        goto LAB_14054aba4;
        plVar8 = (longlong *)*puVar6;
      }
    }
    uVar5 = *(undefined8 *)(puVar9 + 2);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar8 + 0x650);
    goto LAB_14054a994;
  }
  uVar7 = param_2[1];
  if (uVar7 == 0) {
LAB_14054ab8f:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar2 = *param_2;
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != uVar7 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_14054ab8f;
      plVar8 = (longlong *)*puVar6;
    }
  }
  if (plVar8[0xc6] != 0) {
LAB_14054aa9b:
    if (uVar7 != 0) {
      uVar2 = *param_2;
      plVar8 = (longlong *)0x0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14054aaeb;
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 != (undefined8 *)0x0) &&
         ((*(uint *)(puVar6 + 2) == uVar7 && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
        plVar8 = (longlong *)*puVar6;
        goto LAB_14054aaeb;
      }
    }
    plVar8 = (longlong *)0x0;
LAB_14054aaeb:
    lVar3 = plVar8[0xc6];
    if (lVar3 == 0) {
      if (*(code **)(*plVar8 + 0xa68) == (code *)&LAB_14470a070) {
        lVar3 = 0;
      }
      else {
        lVar3 = (**(code **)(*plVar8 + 0xa68))();
      }
    }
    if ((longlong)(int)param_2[4] != 0) {
      lVar11 = *(longlong *)(param_2 + 2);
      lVar4 = (longlong)(int)param_2[4] << 4;
      do {
        if (*(longlong *)(lVar11 + 8) == lVar3) {
          if (lVar11 == 0) {
            return;
          }
          uVar7 = param_2[1];
          goto LAB_14054a868;
        }
        lVar11 = lVar11 + 0x10;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
    return;
  }
  if (*(code **)(*plVar8 + 0xa68) != (code *)&LAB_14470a070) {
    lVar3 = (**(code **)(*plVar8 + 0xa68))();
    uVar7 = param_2[1];
    if (lVar3 != 0) goto LAB_14054aa9b;
  }
LAB_14054a868:
  if (uVar7 != 0) {
    uVar2 = *param_2;
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14054a8b8;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar6 + 2) == uVar7 && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar5 = *puVar6;
      goto LAB_14054a8b8;
    }
  }
  uVar5 = 0;
LAB_14054a8b8:
  FUN_14054853a(uVar5,*(undefined8 *)(puVar9 + 2));
  return;
}



// FUNCTION 14054ac27 FUN_14054ac27 body=15 status=ok
// SIG undefined FUN_14054ac27(void)

void FUN_14054ac27(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14054ac36 FUN_14054ac36 body=269 status=ok
// SIG undefined FUN_14054ac36(void)

void FUN_14054ac36(longlong param_1,int param_2)

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



// FUNCTION 14054ad44 FUN_14054ad44 body=630 status=ok
// SIG undefined FUN_14054ad44(void)

void FUN_14054ad44(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_14054ada6;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar9 != uVar4);
LAB_14054ada6:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar9 = puVar12[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar14) {
      iVar14 = iVar3;
    }
  }
  if (iVar14 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x20;
      uVar4 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar8 + lVar15);
      *(uint *)(lVar8 + 0x1c + lVar15) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x18 + lVar15) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar14 = (int)uVar5;
      lVar8 = (longlong)iVar14;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar15 + 1];
          if (uVar4 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar3);
  }
  return;
}



// FUNCTION 14054afba FUN_14054afba body=370 status=ok
// SIG undefined FUN_14054afba(void)

void FUN_14054afba(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14054b043;
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
LAB_14054b043:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14054b12c FUN_14054b12c body=38 status=ok
// SIG undefined FUN_14054b12c(void)

undefined8 FUN_14054b12c(undefined8 param_1,int param_2)

{
  FUN_14054b152();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14054b152 FUN_14054b152 body=439 status=ok
// SIG undefined FUN_14054b152(void)

void FUN_14054b152(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f626a0;
  param_1[0x44] = &PTR_FUN_149f4b7f0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  param_1[0x40] = &PTR_FUN_149f62cf0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3c] = &PTR_FUN_149f62cf0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  param_1[0x38] = &PTR_FUN_149f62cf0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  param_1[0x32] = &PTR_FUN_149f62f70;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &PTR_LAB_149f62700;
  FUN_140191cbb(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2a] = &PTR_FUN_149f4b7f0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x24] = &PTR_FUN_149f62f70;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f62790;
  param_1[0x1f] = &PTR_LAB_149f627f0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  param_1[0x19] = &PTR_FUN_149f62f70;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x18];
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
  FUN_14054b30a(param_1);
  return;
}



// FUNCTION 14054b30a FUN_14054b30a body=99 status=ok
// SIG undefined FUN_14054b30a(void)

void FUN_14054b30a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f64e30;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b36e(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b3a6(param_1 + 1);
  return;
}



// FUNCTION 14054b36e FUN_14054b36e body=55 status=ok
// SIG undefined FUN_14054b36e(void)

void FUN_14054b36e(longlong *param_1)

{
  FUN_14054b3de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14054b3a6 FUN_14054b3a6 body=55 status=ok
// SIG undefined FUN_14054b3a6(void)

void FUN_14054b3a6(longlong *param_1)

{
  FUN_14054b458(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14054b3de FUN_14054b3de body=121 status=ok
// SIG undefined FUN_14054b3de(void)

void FUN_14054b3de(longlong param_1,int param_2)

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



// FUNCTION 14054b458 FUN_14054b458 body=532 status=ok
// SIG undefined FUN_14054b458(void)

void FUN_14054b458(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar13 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_14054b5ba;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x28 + (longlong)iVar7 * 0x40);
      if (plVar6 != (longlong *)0x0) {
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_14054b5ba;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14054b5ba:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14054b66e FUN_14054b66e body=21 status=ok
// SIG undefined FUN_14054b66e(void)

void FUN_14054b66e(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014054b67f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14054b684 FUN_14054b684 body=29 status=ok
// SIG undefined FUN_14054b684(void)

undefined8 FUN_14054b684(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14054b6a2 FUN_14054b6a2 body=25 status=ok
// SIG undefined FUN_14054b6a2(void)

void FUN_14054b6a2(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014054b6b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14054b6bc FUN_14054b6bc body=4102 status=ok
// SIG undefined FUN_14054b6bc(void)

void FUN_14054b6bc(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2,0,0x198);
  *(undefined4 *)(param_2 + 0x32) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)((longlong)param_2 + 0x194) = *(undefined4 *)(param_1 + 0x290);
  lVar6 = *param_3;
  uVar4 = *(uint *)(param_3 + 1);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (&local_48 == param_2) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_48;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  }
  lVar6 = param_3[2];
  uVar4 = *(uint *)(param_3 + 3);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 2 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    param_2[2] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  }
  if (param_2 == param_3) {
    FUN_14054c6c4(param_2 + 10,param_3 + 10);
  }
  else {
    iVar5 = (int)param_3[5];
    pvVar7 = (void *)param_3[4];
    *(int *)(param_2 + 5) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 4,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[4],pvVar7,(longlong)iVar5 << 2);
      }
    }
    iVar5 = (int)param_3[7];
    pvVar7 = (void *)param_3[6];
    *(int *)(param_2 + 7) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 6,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[6],pvVar7,(longlong)iVar5 << 2);
      }
    }
    iVar5 = (int)param_3[9];
    pvVar7 = (void *)param_3[8];
    *(int *)(param_2 + 9) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 8,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[8],pvVar7,(longlong)iVar5 << 2);
      }
    }
    FUN_14054c6c4(param_2 + 10,param_3 + 10);
    iVar5 = (int)param_3[0xd];
    pvVar7 = (void *)param_3[0xc];
    *(int *)(param_2 + 0xd) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 0xc,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0xc],pvVar7,(longlong)iVar5 << 2);
      }
    }
    iVar5 = (int)param_3[0xf];
    pvVar7 = (void *)param_3[0xe];
    *(int *)(param_2 + 0xf) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x7c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 0xe,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0xe],pvVar7,(longlong)iVar5 << 2);
      }
    }
    iVar5 = (int)param_3[0x11];
    pvVar7 = (void *)param_3[0x10];
    *(int *)(param_2 + 0x11) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 0x10,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0x10],pvVar7,(longlong)iVar5 << 2);
      }
    }
  }
  lVar6 = param_3[0x2a];
  uVar4 = *(uint *)(param_3 + 0x2b);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x2a == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x2a] != 0) {
      FUN_1400020a8();
    }
    param_2[0x2a] = local_48;
    *(undefined4 *)(param_2 + 0x2b) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x15c) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x2c];
  uVar4 = *(uint *)(param_3 + 0x2d);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_146ed4f5e(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x18 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar1 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar1;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 0xc + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0x10;
    } while ((ulonglong)uVar4 << 4 != lVar8);
  }
  if (param_2 + 0x2c == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x2c] != 0) {
      FUN_1400020a8();
    }
    param_2[0x2c] = local_48;
    *(undefined4 *)(param_2 + 0x2d) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x16c) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x2e];
  uVar4 = *(uint *)(param_3 + 0x2f);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x2e == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x2e] != 0) {
      FUN_1400020a8();
    }
    param_2[0x2e] = local_48;
    *(undefined4 *)(param_2 + 0x2f) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x17c) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x30];
  uVar4 = *(uint *)(param_3 + 0x31);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x30 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x30] != 0) {
      FUN_1400020a8();
    }
    param_2[0x30] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x18c) = uStack_40._4_4_;
  }
  FUN_14054c6c4(param_2 + 0x12,param_3 + 0x12);
  if (param_2 != param_3) {
    iVar5 = (int)param_3[0x15];
    pvVar7 = (void *)param_3[0x14];
    *(int *)(param_2 + 0x15) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0xac) == 0) {
      *(undefined4 *)((longlong)param_2 + 0xac) = 0;
    }
    else {
      FUN_14479fa02(param_2 + 0x14,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0x14],pvVar7,(longlong)iVar5 << 4);
      }
    }
  }
  lVar6 = param_3[0x16];
  uVar4 = *(uint *)(param_3 + 0x17);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x16 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x16] != 0) {
      FUN_1400020a8();
    }
    param_2[0x16] = local_48;
    *(undefined4 *)(param_2 + 0x17) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xbc) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x18];
  uVar4 = *(uint *)(param_3 + 0x19);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x18 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    param_2[0x18] = local_48;
    *(undefined4 *)(param_2 + 0x19) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xcc) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x1a];
  uVar4 = *(uint *)(param_3 + 0x1b);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x1a == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x1a] != 0) {
      FUN_1400020a8();
    }
    param_2[0x1a] = local_48;
    *(undefined4 *)(param_2 + 0x1b) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xdc) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x1c];
  uVar4 = *(uint *)(param_3 + 0x1d);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x1c == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x1c] != 0) {
      FUN_1400020a8();
    }
    param_2[0x1c] = local_48;
    *(undefined4 *)(param_2 + 0x1d) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xec) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x1e];
  uVar4 = *(uint *)(param_3 + 0x1f);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x1e == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x1e] != 0) {
      FUN_1400020a8();
    }
    param_2[0x1e] = local_48;
    *(undefined4 *)(param_2 + 0x1f) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xfc) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x20];
  uVar4 = *(uint *)(param_3 + 0x21);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x20 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x20] != 0) {
      FUN_1400020a8();
    }
    param_2[0x20] = local_48;
    *(undefined4 *)(param_2 + 0x21) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x10c) = uStack_40._4_4_;
  }
  lVar6 = param_3[0x22];
  uVar4 = *(uint *)(param_3 + 0x23);
  local_48 = 0;
  uStack_40 = (ulonglong)uVar4;
  if (((ulonglong)uVar4 != 0) && (FUN_140c0b6f2(&local_48,0), 0 < (int)uVar4)) {
    lVar8 = 0;
    do {
      dVar2 = *(double *)(lVar6 + 0x10 + lVar8 * 2);
      dVar3 = *(double *)(lVar6 + 8 + lVar8 * 2);
      *(float *)(local_48 + lVar8) = (float)*(double *)(lVar6 + lVar8 * 2);
      *(float *)(local_48 + 4 + lVar8) = (float)dVar3;
      *(float *)(local_48 + 8 + lVar8) = (float)dVar2;
      lVar8 = lVar8 + 0xc;
    } while ((ulonglong)uVar4 * 0xc != lVar8);
  }
  if (param_2 + 0x22 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_2[0x22] != 0) {
      FUN_1400020a8();
    }
    param_2[0x22] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_2 + 0x23) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x11c) = uStack_40._4_4_;
  }
  if (param_2 != param_3) {
    iVar5 = (int)param_3[0x25];
    pvVar7 = (void *)param_3[0x24];
    *(int *)(param_2 + 0x25) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 300) == 0) {
      *(undefined4 *)((longlong)param_2 + 300) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 0x24,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0x24],pvVar7,(longlong)iVar5 << 2);
      }
    }
    iVar5 = (int)param_3[0x27];
    pvVar7 = (void *)param_3[0x26];
    *(int *)(param_2 + 0x27) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x13c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x13c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 0x26,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0x26],pvVar7,(longlong)iVar5 << 2);
      }
    }
    iVar5 = (int)param_3[0x29];
    pvVar7 = (void *)param_3[0x28];
    *(int *)(param_2 + 0x29) = iVar5;
    if (iVar5 == 0 && *(int *)((longlong)param_2 + 0x14c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x14c) = 0;
    }
    else {
      FUN_1447c510a(param_2 + 0x28,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)param_2[0x28],pvVar7,(longlong)iVar5 << 2);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14054c6c4 FUN_14054c6c4 body=88 status=ok
// SIG undefined FUN_14054c6c4(void)

undefined8 * FUN_14054c6c4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14054c71c FUN_14054c71c body=357 status=ok
// SIG undefined FUN_14054c71c(void)

void FUN_14054c71c(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_14054c882(param_1 + 0x20,*(undefined4 *)(param_1 + 0xc0));
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    FUN_140731c2a(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) < 0) {
      FUN_144727cd0(param_1 + 0x30,0);
    }
    *(undefined8 *)(param_1 + 0x60) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar7 * 8);
      if (plVar2 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(param_1 + 0xe0) == 0) {
          lVar4 = param_1 + 200;
        }
        (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(lVar4 + lVar7 * 4));
        iVar1 = *(int *)(param_1 + 0xf8);
        if ((longlong)iVar1 != 0) {
          lVar4 = *(longlong *)(param_1 + 0xf0);
          lVar6 = 0;
          do {
            lVar5 = *(longlong *)(lVar4 + lVar6);
            lVar3 = *(longlong *)(lVar5 + 0x60);
            lVar5 = lVar5 + 0x10;
            if (lVar3 != 0) {
              lVar5 = lVar3;
            }
            local_58 = *(undefined8 *)(lVar5 + lVar7 * 0x10);
            local_50 = *(undefined4 *)(lVar5 + 8 + lVar7 * 0x10);
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x88) + lVar7 * 8);
            (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar1 * 8 != lVar6);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x90));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054c882 FUN_14054c882 body=41 status=ok
// SIG undefined FUN_14054c882(void)

void FUN_14054c882(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_140992e4e();
  return;
}



// FUNCTION 14054c8ac FUN_14054c8ac body=599 status=ok
// SIG undefined FUN_14054c8ac(void)

ulonglong FUN_14054c8ac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  undefined7 uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar9 = 0;
    }
  }
  else {
    local_40 = (longlong *)param_2[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_48 = lVar4;
    FUN_14054cb04(&local_38,param_1 + 0x68,&local_48);
    plVar5 = plStack_30;
    lVar4 = local_38;
    plVar2 = local_40;
    local_38 = 0;
    if (plStack_30 != (longlong *)0x0) {
      plStack_30 = (longlong *)0x0;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    uVar7 = *(uint *)(param_1 + 0xa0);
    uVar10 = (undefined7)((ulonglong)plVar2 >> 8);
    uVar9 = CONCAT71(uVar10,1);
    if ((ulonglong)uVar7 != 0) {
      if (lVar4 == 0) {
        uVar9 = 0;
      }
      else {
        if ((int)uVar7 < 1) {
          local_38 = 0;
          plStack_30 = (longlong *)0x0;
        }
        else {
          lVar8 = (ulonglong)uVar7 * 0x10;
          local_38 = *(longlong *)(*(longlong *)(param_1 + 0x98) + -0x10 + lVar8);
          plStack_30 = *(longlong **)(*(longlong *)(param_1 + 0x98) + -8 + lVar8);
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
            UNLOCK();
          }
        }
        cVar6 = FUN_146981260(lVar4,&local_38);
        uVar9 = CONCAT71(uVar10,1);
        if ((cVar6 == '\0') &&
           (*(longlong *)
             (*(longlong *)(param_1 + 0x98) + (longlong)(*(int *)(param_1 + 0xa0) + -1) * 0x10) !=
            lVar4)) {
          if (plVar5 == (longlong *)0x0) {
            local_40 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_40 = plVar5;
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_48 = lVar4;
          uVar7 = (**(code **)(*(longlong *)(param_1 + -0x148) + 0x118))
                            ((longlong *)(param_1 + -0x148),&local_48);
          plVar2 = local_40;
          uVar9 = (ulonglong)uVar7;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
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
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
        plVar2 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_30)(plStack_30);
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054cb04 FUN_14054cb04 body=447 status=ok
// SIG undefined FUN_14054cb04(void)

longlong * FUN_14054cb04(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (0 < (int)param_2[1]) {
    lVar10 = 8;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(*param_2 + -8 + lVar10);
      plVar4 = *(longlong **)(*param_2 + lVar10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      lVar5 = *(longlong *)(lVar3 + 0x510);
      plVar6 = *(longlong **)(lVar3 + 0x518);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      if (lVar5 == *param_3) {
        *param_1 = lVar3;
        param_1[1] = (longlong)plVar4;
        bVar8 = true;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
      }
      else {
        FUN_14054cb04(param_1,lVar3 + 0x600,param_3);
        bVar8 = true;
        if (*param_1 == 0) {
          plVar7 = (longlong *)param_1[1];
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
          bVar8 = false;
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (bVar8) {
        return param_1;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 < (int)param_2[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14054ccc4 FUN_14054ccc4 body=1295 status=ok
// SIG undefined FUN_14054ccc4(void)

undefined8
FUN_14054ccc4(longlong param_1,undefined4 param_2,uint param_3,uint *param_4,undefined1 *param_5,
             longlong *param_6)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined1 local_5c [4];
  longlong **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = 0;
  param_6[1] = 0;
  *(undefined4 *)(param_6 + 5) = *(undefined4 *)(param_1 + 0x24);
  param_6[3] = 0;
  *(undefined4 *)(param_6 + 2) = 0xffffffff;
  *param_6 = 0;
  if (param_3 == 3) goto LAB_14054cfe0;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  uVar10 = 2;
  if ((param_4 == (uint *)0x0) || (1 < *param_4)) goto LAB_14054cfe0;
  iVar3 = *(int *)(param_1 + 0x18) + -1;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
  }
  uVar11 = (ulonglong)iVar3;
  FUN_1402980a2(&local_78,*(undefined8 *)(param_1 + 0x10),iVar3);
  if (param_4[1] == 0) {
LAB_14054cddc:
    if ((char)param_4[6] == '\x01') {
      pwVar8 = AK::StreamMgr::GetCurrentLanguage();
      sVar7 = wcslen(pwVar8);
      if (sVar7 != 0) {
        uVar11 = uVar11 + sVar7 + 1;
        if (0x103 < uVar11) goto LAB_14054d07c;
        sVar7 = wcslen(pwVar8);
        FUN_1400020e8(&local_78,pwVar8,sVar7 & 0xffffffff);
        FUN_1400020e8(&local_78,&DAT_149e065c6,1);
      }
    }
    uVar10 = 2;
    if (uVar11 + 0xf < 0x105) {
      FUN_140002266(&local_58,&DAT_149e061aa,param_2);
      iVar3 = (int)local_50 + -1;
      if ((int)local_50 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_78,local_58,iVar3);
      if (local_58 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      pwVar8 = L".wem";
      if (param_4[1] == 0) {
        pwVar8 = L".bnk";
      }
      FUN_1400020e8(&local_78,pwVar8,4);
      if (1 < (int)uStack_70) {
        if (param_3 == 0) {
          plVar4 = (longlong *)FUN_14054d1d4();
          puVar9 = local_78;
          if ((int)uStack_70 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          lVar5 = (**(code **)(*plVar4 + 0x108))(plVar4,puVar9);
          *param_6 = lVar5;
          if (0 < lVar5) {
            plVar6 = (longlong *)FUN_1400dbadc();
            plVar4 = (longlong *)*plVar6;
            if (plVar4 == (longlong *)0x0) {
              plVar4 = (longlong *)FUN_140e92164();
              *plVar6 = (longlong)plVar4;
            }
            puVar9 = local_78;
            if ((int)uStack_70 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            lVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,puVar9);
            if (lVar5 != 0) {
              *param_5 = 1;
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
              plVar4 = (longlong *)FUN_14001cc68(0x38,0x10);
              plVar4[1] = (longlong)&DAT_100000001;
              *plVar4 = (longlong)&PTR_FUN_14acb52a0;
              local_88 = plVar4 + 2;
              *(undefined1 *)(plVar4 + 3) = 0;
              plVar4[2] = (longlong)&PTR_FUN_14acb52c0;
              plVar4[4] = lVar5;
              plVar4[5] = 0;
              plVar4[6] = 0;
              local_80 = plVar4;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                LOCK();
                plVar6 = plVar4 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*plVar4)();
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))();
                  }
                }
              }
              param_6[3] = (longlong)local_88;
              *(uint *)(param_6 + 2) = -(uint)(local_88 == (longlong *)0x0) | 0x10;
LAB_14054cf8b:
              local_50 = &local_88;
              local_58 = &local_90;
              local_90 = local_88;
              FUN_1449dba4a(param_1 + 0x28,local_5c);
              plVar4 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar6 = local_80 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
              uVar10 = 1;
            }
          }
        }
        else if (param_3 < 3) {
          plVar6 = (longlong *)FUN_1400dbadc();
          plVar4 = (longlong *)*plVar6;
          if (plVar4 == (longlong *)0x0) {
            plVar4 = (longlong *)FUN_140e92164();
            *plVar6 = (longlong)plVar4;
          }
          puVar9 = local_78;
          if ((int)uStack_70 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          lVar5 = (**(code **)(*plVar4 + 0x100))(plVar4,puVar9,0,0);
          if (lVar5 != 0) {
            *param_5 = 1;
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
            plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar4[1] = (longlong)&DAT_100000001;
            *plVar4 = (longlong)&PTR_FUN_14acb5320;
            local_88 = plVar4 + 2;
            *(undefined1 *)(plVar4 + 3) = 0;
            plVar4[2] = (longlong)&PTR_FUN_14acb5340;
            plVar4[4] = lVar5;
            local_80 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              plVar6 = plVar4 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar4)();
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar4 + 0x10))();
                }
              }
            }
            param_6[3] = (longlong)local_88;
            *(uint *)(param_6 + 2) = -(uint)(local_88 == (longlong *)0x0) | 0x10;
            goto LAB_14054cf8b;
          }
        }
      }
    }
  }
  else {
    FUN_1400b22c2(&local_58,"Media");
    bVar2 = true;
    iVar3 = (int)local_50 + -1;
    if ((int)local_50 == 0) {
      iVar3 = 0;
    }
    if ((int)local_50 != 0 && (int)local_50 + -1 != 0) {
      uVar11 = uVar11 + (longlong)iVar3 + 1;
      if (uVar11 < 0x104) {
        FUN_1400020e8(&local_78,local_58);
        FUN_1400020e8(&local_78,&DAT_149e065c6,1);
      }
      else {
        bVar2 = false;
      }
    }
    if (local_58 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_14054cddc;
LAB_14054d07c:
    uVar10 = 2;
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14054cfe0:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14054d1d4 FUN_14054d1d4 body=98 status=ok
// SIG undefined FUN_14054d1d4(void)

undefined8 * FUN_14054d1d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83ff48) {
    FUN_144b3d300(&DAT_14c83ff48);
    if (DAT_14c83ff48 == -1) {
      DAT_14c83ff40 = &PTR_LAB_149e13660;
      _Init_thread_footer(&DAT_14c83ff48);
    }
  }
  return &DAT_14c83ff40;
}



// FUNCTION 14054d236 FUN_14054d236 body=567 status=ok
// SIG undefined FUN_14054d236(void)

void FUN_14054d236(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14054d424;
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
LAB_14054d424:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054d46e FUN_14054d46e body=177 status=ok
// SIG undefined FUN_14054d46e(void)

ulonglong FUN_14054d46e(wint_t *param_1,wchar_t *param_2)

{
  wint_t _C;
  int iVar1;
  wint_t *pwVar2;
  size_t sVar3;
  ulonglong unaff_RBP;
  
  if ((*param_1 == 0) ||
     (pwVar2 = (wint_t *)FUN_144a29ec4(param_1,param_2,1), pwVar2 == (wint_t *)0x0)) {
    unaff_RBP = 0;
  }
  else {
    do {
      if (((param_1 < pwVar2) && ((pwVar2[-1] | 2) == 0x2f)) &&
         ((pwVar2 + -2 < param_1 || (iVar1 = iswspace(pwVar2[-2]), iVar1 != 0)))) {
        sVar3 = wcslen(param_2);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        if ((pwVar2 + (int)sVar3 == (wint_t *)0x0) ||
           ((_C = pwVar2[(int)sVar3], _C == 0 || (iVar1 = iswspace(_C), iVar1 != 0)))) break;
      }
      pwVar2 = (wint_t *)FUN_144a29ec4(pwVar2 + 1,param_2,1);
      unaff_RBP = 0;
    } while (pwVar2 != (wint_t *)0x0);
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14054d520 FUN_14054d520 body=137 status=ok
// SIG undefined FUN_14054d520(void)

void FUN_14054d520(longlong param_1)

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



// FUNCTION 14054d5aa FUN_14054d5aa body=162 status=ok
// SIG undefined FUN_14054d5aa(void)

void FUN_14054d5aa(longlong *param_1,undefined8 param_2)

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
        goto LAB_14054d637;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14054d637:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14054d64c FUN_14054d64c body=63 status=ok
// SIG undefined FUN_14054d64c(void)

undefined1 FUN_14054d64c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054d68c(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 14054d68c FUN_14054d68c body=80 status=ok
// SIG undefined FUN_14054d68c(void)

void FUN_14054d68c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  FUN_14054d6dc(param_1 + 1,param_2 + 1);
  param_1[0x4e] = param_2[0x4e];
  return;
}



// FUNCTION 14054d6dc FUN_14054d6dc body=586 status=ok
// SIG undefined FUN_14054d6dc(void)

longlong FUN_14054d6dc(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  FUN_14054d9c0();
  FUN_14054d9c0(param_1 + 0x50,param_2 + 0x50);
  FUN_14054da5a(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140725242(param_1 + 0xb0,param_2 + 0xb0);
  cVar2 = *(char *)(param_1 + 0x100);
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      plVar4 = *(longlong **)(param_1 + 0x110);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    else if (cVar2 == '\x01') {
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  cVar2 = *(char *)(param_2 + 0x100);
  *(char *)(param_1 + 0x100) = cVar2;
  lVar7 = param_2;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
      goto LAB_14054d7a9;
    }
    if (cVar2 != '\x03') goto LAB_14054d7a9;
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
    lVar7 = *(longlong *)(param_2 + 0x110);
    *(longlong *)(param_1 + 0x110) = lVar7;
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
      *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
      goto LAB_14054d7a9;
    }
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
    lVar7 = param_1;
    if (*(char *)(param_1 + 0x100) != '\x01') goto LAB_14054d7a9;
  }
  lVar7 = *(longlong *)(lVar7 + 0x108);
  *(undefined1 *)(param_1 + 0x100) = 2;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar7 == 0) {
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x108) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x10c) = iVar5;
LAB_14054d7a9:
  FUN_14495544a(param_1 + 0x128,param_2 + 0x128);
  FUN_14054d926(param_1 + 0x130,param_2 + 0x130);
  FUN_14054d926(param_1 + 0x198,param_2 + 0x198);
  FUN_14054d926(param_1 + 0x200,param_2 + 0x200);
  return param_1;
}



// FUNCTION 14054d926 FUN_14054d926 body=154 status=ok
// SIG undefined FUN_14054d926(void)

longlong FUN_14054d926(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x60);
  plVar1 = (longlong *)(param_1 + 0x58);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14054d990;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x50);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x50);
  if (*(void **)(param_2 + 0x58) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x58);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14054d990:
  *(int *)(param_1 + 0x60) = iVar2;
  FUN_142b329b0(param_1,param_2);
  return param_1;
}



// FUNCTION 14054d9c0 FUN_14054d9c0 body=154 status=ok
// SIG undefined FUN_14054d9c0(void)

longlong FUN_14054d9c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14054da2a;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14054da2a:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14054daaa(param_1,param_2);
  return param_1;
}



// FUNCTION 14054da5a FUN_14054da5a body=80 status=ok
// SIG undefined FUN_14054da5a(void)

longlong * FUN_14054da5a(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    if (*(int *)((longlong)param_2 + 0xc) == -1) {
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = 0;
        param_1[1] = -0x100000000;
      }
    }
    else {
      FUN_14034a368(param_1);
    }
  }
  return param_1;
}



// FUNCTION 14054daaa FUN_14054daaa body=382 status=ok
// SIG undefined FUN_14054daaa(void)

longlong * FUN_14054daaa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *_Dst;
  longlong lVar9;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14063a3c4(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14021b4e8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar7 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar7;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar6 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar6 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar6 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
          *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
        }
        else {
          *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          FUN_14034cca6(lVar9 + lVar4 + 8,lVar3 + 8 + lVar9);
          *(undefined8 *)(lVar4 + 0x40 + lVar9) = *(undefined8 *)(lVar3 + 0x40 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x48;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 14054dc28 FUN_14054dc28 body=192 status=ok
// SIG undefined FUN_14054dc28(void)

void FUN_14054dc28(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar9 != -1) {
      lVar4 = *param_1;
      do {
        lVar10 = (longlong)iVar9 * 0x20;
        lVar2 = lVar4 + lVar10;
        if (*(int *)(lVar4 + lVar10) == param_2) {
          iVar8 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          if (iVar8 == iVar9) {
            puVar7 = (undefined4 *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
          }
          else {
            do {
              lVar6 = (longlong)iVar8;
              iVar8 = *(int *)(lVar4 + 0x18 + lVar6 * 0x20);
            } while (iVar8 != iVar9);
            puVar7 = (undefined4 *)(lVar6 * 0x20 + lVar4 + 0x18);
          }
          *puVar7 = *(undefined4 *)(lVar2 + 0x18);
          lVar4 = *(longlong *)(*param_1 + 0x10 + lVar10);
          if (lVar4 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar4 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          FUN_14054dce8(param_1,iVar9);
          return;
        }
        iVar9 = *(int *)(lVar2 + 0x18);
      } while (iVar9 != -1);
    }
  }
  return;
}



// FUNCTION 14054dce8 FUN_14054dce8 body=114 status=ok
// SIG undefined FUN_14054dce8(void)

void FUN_14054dce8(longlong *param_1,int param_2)

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



// FUNCTION 14054dd5a FUN_14054dd5a body=1036 status=ok
// SIG undefined FUN_14054dd5a(void)

int * FUN_14054dd5a(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447711aa(param_1,iVar22);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar10 = iVar18 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar15 = iVar18 + 1;
    iVar26 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar26 = iVar18;
    }
    if (iVar26 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        iVar10 = iVar18;
        if (iVar18 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar23 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar23) {
              uVar19 = uVar23;
            }
          }
          else {
            uVar19 = uVar23 + (uVar23 * 3 >> 3) + 0x10;
          }
          uVar16 = (ulonglong)(uVar19 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar16 + 0xf);
              if (uVar19 < 0x1ffd) {
                uVar16 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
              }
              else {
                uVar17 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar17 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar14) {
                    uVar21 = (ulonglong)bVar14;
                  }
                  uVar25 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0) goto LAB_14054e030;
                    lVar24 = uVar21 + 1 + uVar25;
                    uVar25 = uVar25 - 1;
                  } while (lVar24 != 0x33);
                }
                uVar16 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar16 = (ulonglong)DAT_14c841df8;
                }
                uVar16 = -uVar16 & (uVar17 + uVar16) - 1;
              }
            }
            else {
              uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_14054e030:
          iVar12 = (int)(uVar16 >> 2);
          iVar15 = -0x20;
          if ((int)uVar23 <= iVar12) {
            iVar15 = iVar12 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar13,iVar10);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar10 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar10 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar13;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar10 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar24 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar26 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar24 = (longlong)iVar22;
    iVar18 = *(int *)(*param_1 + 4 + lVar24 * 0x20);
    *(int *)(param_1 + 6) = iVar18;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x20) = 0xffffffff;
    }
  }
  iVar18 = 1;
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar10 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar10 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  lVar27 = *param_1;
  lVar24 = lVar24 * 0x20;
  puVar2 = (undefined4 *)(lVar27 + lVar24);
  uVar5 = *(undefined8 *)*param_4;
  *(undefined8 *)(lVar27 + lVar24) = uVar5;
  puVar4 = (undefined8 *)(lVar27 + 8 + lVar24);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar27 + 0x18 + lVar24) = 0xffffffff;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar23) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar10 != -1) {
      lVar24 = *param_1;
      do {
        lVar27 = (longlong)iVar10 * 0x20;
        puVar3 = (undefined4 *)(lVar24 + lVar27);
        if ((*(int *)(lVar24 + lVar27) == (int)uVar5) &&
           (*(int *)(lVar24 + 4 + lVar27) == (int)((ulonglong)uVar5 >> 0x20))) {
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_14572113e(param_1,iVar22);
          goto LAB_14054dedf;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  if (3 < uVar23) {
    uVar16 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar24 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar18 = 1 << ((byte)lVar24 & 0x1f);
  }
  if (((int)uVar23 < 1) || (iVar18 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    puVar2[7] = param_3;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4)
    ;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar22;
  }
  else {
    *(int *)(param_1 + 9) = iVar18;
    FUN_1449dcec4(param_1);
  }
LAB_14054dedf:
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 14054e166 FUN_14054e166 body=35 status=ok
// SIG undefined FUN_14054e166(void)

void FUN_14054e166(longlong param_1)

{
  FUN_14054e18a(param_1 + 0x670,0);
  FUN_1447c0e7a(param_1);
  return;
}



// FUNCTION 14054e18a FUN_14054e18a body=124 status=ok
// SIG undefined FUN_14054e18a(void)

void FUN_14054e18a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14054e206 FUN_14054e206 body=290 status=ok
// SIG undefined FUN_14054e206(void)

undefined8 FUN_14054e206(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14054e321;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14054e321;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14054e321:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14054e2cc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_14054e2cc;
    }
  }
  uVar6 = 0;
LAB_14054e2cc:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054e32a FUN_14054e32a body=448 status=ok
// SIG undefined FUN_14054e32a(void)

void FUN_14054e32a(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 < 2 && *(int *)(param_2 + 0x24) < 1) {
    param_2 = param_2 + 8;
  }
  else {
    if (4 < iVar1) goto LAB_14054e3b3;
    param_2 = *(longlong *)(param_2 + 0x18);
  }
  if (((*(int *)(param_2 + (longlong)(iVar1 + -1) * 0xc) != (int)DAT_14cb88978) ||
      (*(int *)(param_2 + (longlong)(iVar1 + -1) * 0xc + 8) != DAT_14cb88980)) ||
     (iVar1 < 3 || *param_3 != DAT_14cb88928 && *param_3 != DAT_14cb88920)) goto LAB_14054e3b3;
  local_58 = *(undefined8 *)(param_2 + 0x18);
  local_50 = *(undefined4 *)(param_2 + 0x20);
  FUN_1448075d0(local_48,&local_58);
  lVar4 = FUN_14060eaf6(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (lVar4 == 0) goto LAB_14054e3b3;
  lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar5 == 0) goto LAB_14054e3b3;
  uVar6 = FUN_1406d3bdc();
  cVar3 = FUN_1448093f4(lVar5,uVar6);
  if (cVar3 == '\0') goto LAB_14054e3b3;
  if (((longlong *)param_1[0x1b] == (longlong *)0x0) || (*(int *)((longlong)param_1 + 0xd4) == 0)) {
LAB_14054e449:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1a);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_1 + 0xd4))) ||
         ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_14054e449;
      uVar6 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))();
    }
  }
  if (*(int *)(lVar5 + 0x26c) == 2) {
    lVar5 = FUN_14054e4ec(param_1[0x19],uVar6);
    if (lVar5 == lVar4) {
      FUN_1402798cc(param_1);
    }
  }
LAB_14054e3b3:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054e4ec FUN_14054e4ec body=266 status=ok
// SIG undefined FUN_14054e4ec(void)

undefined8 FUN_14054e4ec(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14054e628(&local_28,param_1,param_2);
  if ((longlong)local_20 != 0) {
    lVar6 = (longlong)local_20 * 0x48;
    lVar5 = local_28;
    do {
      iVar3 = FUN_14054e860(lVar5);
      if (iVar3 == 2) {
        lVar6 = *(longlong *)(lVar5 + 8);
        local_40 = lVar6;
        uVar4 = FUN_14060ed7a();
        local_38 = FUN_14477b664(uVar4);
        local_30 = 0;
        uVar4 = 0;
        if ((local_38 == 0) || (lVar6 == 0)) goto LAB_14054e5a7;
        plVar1 = *(longlong **)(local_38 + 0xb8);
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 != '\0') {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            uVar4 = FUN_144aff482(uVar4,&local_40);
            goto LAB_14054e5a7;
          }
        }
        break;
      }
      lVar5 = lVar5 + 0x48;
      lVar6 = lVar6 + -0x48;
    } while (lVar6 != 0);
  }
  uVar4 = 0;
LAB_14054e5a7:
  FUN_14054e5f7(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054e5f7 FUN_14054e5f7 body=49 status=ok
// SIG undefined FUN_14054e5f7(void)

void FUN_14054e5f7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
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



// FUNCTION 14054e628 FUN_14054e628 body=204 status=ok
// SIG undefined FUN_14054e628(void)

undefined8 * FUN_14054e628(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  plVar3 = (longlong *)FUN_14054e771(param_3);
  if ((plVar3 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar3 + 0x10))(plVar3), cVar2 == '\0'))
  {
    if (param_2 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 0x250);
    uVar6 = *(undefined8 *)(param_2 + 0x248);
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
LAB_14054e6e3:
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    FUN_14054e9ce(param_1,iVar1,0);
    uVar5 = *param_1;
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
    FUN_14053c150(lVar4);
    *param_1 = 0;
    iVar1 = *(int *)(lVar4 + 0x588);
    uVar6 = *(undefined8 *)(lVar4 + 0x580);
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) goto LAB_14054e6e3;
    FUN_14054e9ce(param_1,iVar1,0);
    uVar5 = *param_1;
  }
  FUN_14054e6f4(uVar5,uVar6,iVar1);
  return param_1;
}



// FUNCTION 14054e6f4 FUN_14054e6f4 body=125 status=ok
// SIG undefined FUN_14054e6f4(void)

void FUN_14054e6f4(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar6);
      *(undefined4 *)(puVar2 + -4) = *puVar1;
      *(undefined4 *)((longlong)puVar2 + -0x1c) = uVar3;
      *(undefined4 *)(puVar2 + -3) = uVar4;
      *(undefined4 *)((longlong)puVar2 + -0x14) = uVar5;
      *(undefined2 *)(puVar2 + -2) = 0;
      *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[-2] = *(undefined8 *)(puVar1 + 4);
      *(undefined4 *)(puVar2 + -1) = puVar1[6];
      FUN_1447715ec();
      lVar6 = lVar6 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14054e771 FUN_14054e771 body=237 status=ok
// SIG undefined FUN_14054e771(void)

longlong FUN_14054e771(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14027972a();
    lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_14027972a();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if ((lVar2 != lVar3) && (lVar3 != 0)) goto LAB_14054e78d;
    }
    local_20 = FUN_14027972a();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    plVar4 = (longlong *)FUN_144881120(param_1,&local_20);
    if (plVar4 != (longlong *)0x0) {
      uVar1 = FUN_14027972a();
      lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar1);
      if (lVar2 != 0) {
        uVar1 = FUN_14027972a();
        lVar3 = FUN_144718840(lVar2,uVar1);
        if (lVar2 != lVar3) goto LAB_14054e78d;
      }
    }
  }
  lVar3 = 0;
LAB_14054e78d:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14054e860 FUN_14054e860 body=307 status=ok
// SIG undefined FUN_14054e860(void)

int FUN_14054e860(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    lVar4 = FUN_14054e994();
    local_28 = *(undefined8 *)(lVar4 + 0x18);
    FUN_1400021e4(&local_28,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    cVar1 = FUN_1402ca054(*param_1,local_38,iVar2);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      lVar4 = FUN_14060ed7a();
      local_28 = *(undefined8 *)(lVar4 + 0x18);
      FUN_1400021e4(&local_28,&local_48);
      iVar2 = local_40 + -1;
      if (local_40 == 0) {
        iVar2 = 0;
      }
      cVar1 = FUN_1402ca054(*param_1,local_48,iVar2);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      iVar2 = 2;
      if (cVar1 == '\0') {
        lVar4 = FUN_140820982();
        local_28 = *(undefined8 *)(lVar4 + 0x18);
        FUN_1400021e4(&local_28,&local_58);
        iVar2 = local_50 + -1;
        if (local_50 == 0) {
          iVar2 = 0;
        }
        uVar3 = FUN_1402ca054(*param_1,local_58,iVar2);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        iVar2 = (uVar3 & 0xff) * 3;
      }
    }
    else {
      iVar2 = 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054e994 FUN_14054e994 body=57 status=ok
// SIG undefined FUN_14054e994(void)

void FUN_14054e994(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1168 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1168 = FUN_140002ddd(FUN_1418c43d3,uVar1,L"GbxChallengeDef");
  }
  return;
}



// FUNCTION 14054e9ce FUN_14054e9ce body=334 status=ok
// SIG undefined FUN_14054e9ce(void)

void FUN_14054e9ce(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x48;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14054ea40;
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
LAB_14054ea40:
    iVar5 = (int)(uVar4 / 0x48);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x48,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14054eb1c FUN_14054eb1c body=60 status=ok
// SIG undefined FUN_14054eb1c(void)

void FUN_14054eb1c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = 0;
    param_1[7] = 0x3f80000000000000;
    param_1[8] = 0xffffffffffffffff;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 14054eb58 FUN_14054eb58 body=275 status=ok
// SIG undefined FUN_14054eb58(void)

void FUN_14054eb58(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14054ec84 FUN_14054ec84 body=354 status=ok
// SIG undefined FUN_14054ec84(void)

void FUN_14054ec84(longlong param_1,undefined8 param_2,void *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = FUN_14486f0b8();
  lVar7 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar5 + 1) = 0xb0;
    *puVar5 = &PTR_FUN_14a2e82a0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined8 **)(param_1 + 8) = puVar5;
  }
  uVar2 = *(ulonglong *)(lVar7 + 8);
  if ((uVar2 & 2) == 0) {
    local_34 = *(undefined4 *)(puVar5 + 5);
    *(byte *)(lVar7 + 0x14) = *(byte *)(lVar7 + 0x14) | 0x17;
    *(ulonglong *)(lVar7 + 8) = uVar2 | 2;
    FUN_1402a8efa(lVar7 + 0x20,&local_34,(uint)uVar2 & 1);
  }
  else {
    uVar4 = (uint)uVar2 & 1;
    lVar6 = lVar7 + 0x20;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      lVar6 = *(longlong *)(lVar7 + 0x40);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)uVar4 * 4);
    if (iVar8 != -1) goto LAB_14054ed70;
    uVar1 = *(undefined4 *)(puVar5 + 5);
    *(byte *)(lVar7 + 0x14) = *(byte *)(lVar7 + 0x14) | 0x17;
    *(undefined4 *)(lVar6 + (ulonglong)uVar4 * 4) = uVar1;
  }
  iVar8 = *(int *)(puVar5 + 5);
  *(uint *)(puVar5 + 5) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x2c) < iVar8 + 1U) {
    FUN_1446f48e2(puVar5 + 4,iVar8);
  }
  *(int *)(puVar5[4] + (longlong)iVar8 * 4) = iVar3;
  iVar8 = *(int *)(puVar5 + 3);
  *(uint *)(puVar5 + 3) = iVar8 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x1c) < iVar8 + 1U) {
    FUN_14054ede8(puVar5 + 2,iVar8);
  }
LAB_14054ed70:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  memcpy((void *)((longlong)iVar8 * 0xb0 + puVar5[2]),param_3,0xb0);
  return;
}



// FUNCTION 14054ede8 FUN_14054ede8 body=274 status=ok
// SIG undefined FUN_14054ede8(void)

void FUN_14054ede8(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14054eefb FUN_14054eefb body=372 status=ok
// SIG undefined FUN_14054eefb(void)

longlong FUN_14054eefb(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = 0x10119;
  local_48 = &DAT_100000004;
  local_58 = 0;
  lVar15 = FUN_1449de0d8(param_1,&local_48,param_2,param_3);
  iVar3 = *(int *)(param_1 + 0x590);
  *(uint *)(param_1 + 0x590) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x594) < iVar3 + 1U) {
    FUN_144775ac8((longlong *)(param_1 + 0x588),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x588);
  lVar16 = (longlong)iVar3 * 0x120;
  lVar1 = lVar4 + lVar16;
  *(undefined2 *)(lVar4 + lVar16) = 1;
  *(longlong *)(lVar4 + 8 + lVar16) = lVar15;
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar16) = *param_4;
  *(undefined8 *)(lVar4 + 0x30 + lVar16) = param_4[2];
  param_4[2] = 0;
  uVar12 = param_4[4];
  uVar13 = param_4[5];
  uVar14 = param_4[7];
  puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar16);
  *puVar2 = param_4[6];
  puVar2[1] = uVar14;
  puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar16);
  *puVar2 = uVar12;
  puVar2[1] = uVar13;
  if (*(longlong *)(lVar4 + 0x20 + lVar16) != 0) {
    *param_4 = 0;
  }
  *(undefined8 *)(lVar1 + 0x60) = *param_5;
  *(undefined8 *)(lVar1 + 0x70) = param_5[2];
  param_5[2] = 0;
  uVar5 = *(undefined4 *)(param_5 + 4);
  uVar6 = *(undefined4 *)((longlong)param_5 + 0x24);
  uVar7 = *(undefined4 *)(param_5 + 5);
  uVar8 = *(undefined4 *)((longlong)param_5 + 0x2c);
  uVar9 = *(undefined4 *)((longlong)param_5 + 0x34);
  uVar10 = *(undefined4 *)(param_5 + 7);
  uVar11 = *(undefined4 *)((longlong)param_5 + 0x3c);
  *(undefined4 *)(lVar1 + 0x90) = *(undefined4 *)(param_5 + 6);
  *(undefined4 *)(lVar1 + 0x94) = uVar9;
  *(undefined4 *)(lVar1 + 0x98) = uVar10;
  *(undefined4 *)(lVar1 + 0x9c) = uVar11;
  *(undefined4 *)(lVar1 + 0x80) = uVar5;
  *(undefined4 *)(lVar1 + 0x84) = uVar6;
  *(undefined4 *)(lVar1 + 0x88) = uVar7;
  *(undefined4 *)(lVar1 + 0x8c) = uVar8;
  if (*(longlong *)(lVar1 + 0x60) != 0) {
    *param_5 = 0;
  }
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(byte *)(lVar15 + 0x24) = *(byte *)(lVar15 + 0x24) | 0x80;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054f070 FUN_14054f070 body=2026 status=ok
// SIG undefined FUN_14054f070(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14054f070(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_2628 [32];
  longlong *local_2608;
  longlong local_2600;
  uint local_25f0;
  DWORD local_25ec;
  longlong *local_25e8;
  longlong local_25e0;
  int *local_25d8;
  longlong local_25d0;
  undefined8 local_25c8;
  undefined8 local_25c0;
  double local_25b8;
  double local_25b0;
  longlong local_25a8 [372];
  undefined1 local_1a08 [6504];
  ulonglong local_a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14054f086;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2628;
  iVar8 = (int)param_2[1];
  if (0 < iVar8) {
    local_25d8 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
    ;
    lVar20 = 0x13750;
    lVar12 = 0;
    local_25e8 = param_2;
    do {
      lVar2 = *param_2;
      lVar19 = lVar2 + lVar20 + -0x13750;
      cVar6 = FUN_1400edda3(lVar19);
      if (cVar6 != '\0') {
        bVar16 = 1;
        if ((*(char *)(lVar2 + -0x11384 + lVar20) == '\0') &&
           (*(char *)(lVar2 + -0x11354 + lVar20) == '\0')) {
          bVar16 = (*(byte *)(lVar2 + -0x11a0 + lVar20) & 8) >> 3;
        }
        lVar3 = *(longlong *)(lVar2 + -0x10648 + lVar20);
        local_25f0 = *(uint *)(DAT_14ca6c2f8 + 4);
        uVar15 = 3;
        if ((int)local_25f0 < 3) {
          uVar15 = local_25f0;
        }
        if ((int)uVar15 < 1) {
          uVar15 = 0;
        }
        iVar8 = *(int *)(lVar2 + -0x10650 + lVar20);
        iVar17 = *(int *)(lVar2 + -0x1064c + lVar20);
        iVar14 = *(int *)(lVar2 + -0x10654 + lVar20);
        iVar18 = *(int *)(lVar2 + -0x10658 + lVar20);
        local_25e0 = lVar12;
        local_25d0 = lVar19;
        fVar22 = (float)FUN_14054f85b(uVar15);
        lVar12 = DAT_14ca6c310;
        iVar7 = *local_25d8;
        if (iVar7 == 0x40000002) {
          uVar11 = 0;
        }
        else {
          bVar21 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
            if (iVar7 == 1) {
              local_25ec = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              bVar21 = local_25ec == DVar10;
            }
            else {
              bVar21 = false;
            }
          }
          uVar11 = (ulonglong)(bVar21 ^ 1);
        }
        iVar7 = *(int *)(lVar12 + uVar11 * 4);
        *(uint *)(lVar3 + 0x1ef0) = uVar15;
        if ((uVar15 & 0x7ffffffe) == 2) {
          iVar7 = 2;
        }
        else {
          if (3 < iVar7) {
            iVar7 = 4;
          }
          if (iVar7 < 1) {
            iVar7 = 0;
          }
        }
        *(int *)(lVar3 + 0x1ef4) = iVar7;
        if ((*(byte *)(lVar3 + 0x1e84) | bVar16) == 1) {
          *(undefined2 *)(lVar3 + 0x1e84) = 0;
          *(undefined8 *)(lVar3 + 0x1e88) = 0x3f800000;
          *(undefined8 *)(lVar3 + 0x1e90) = 0;
          *(undefined8 *)(lVar3 + 0x1e98) = DAT_14c967818;
        }
        fVar23 = (float)(iVar8 - iVar18) * fVar22;
        fVar22 = (float)(iVar17 - iVar14) * fVar22;
        iVar17 = (int)ROUND(fVar23 + fVar23 + 0.5) >> 1;
        iVar8 = (int)ROUND(fVar22 + fVar22 + 0.5) >> 1;
        uVar9 = *(uint *)(lVar3 + 0x1e80);
        *(uint *)(lVar3 + 0x1e80) = 1 - uVar9;
        if (((*(int *)(lVar3 + 0x1ea0) == iVar17) && (*(int *)(lVar3 + 0x1ea4) == iVar8)) &&
           (2 - (uint)(uVar15 - 1 < 3) == *(int *)(lVar3 + 0x1e78))) {
          iVar14 = (uint)(local_25f0 == 2) * 2 + 2;
          if (2 < (int)local_25f0) {
            iVar14 = 1;
          }
          if (iVar14 != *(int *)(lVar3 + 0x1e7c)) goto LAB_14054f63e;
        }
        else {
LAB_14054f63e:
          uVar15 = (uint)(uVar15 - 1 < 3);
          iVar18 = 2 - uVar15;
          *(int *)(lVar3 + 0x1e78) = iVar18;
          iVar14 = 1;
          if ((int)local_25f0 < 3) {
            iVar14 = (local_25f0 == 2) + 2 + (uint)(local_25f0 == 2);
          }
          *(int *)(lVar3 + 0x1e7c) = iVar14;
          *(ulonglong *)(lVar3 + 0x1ea0) = CONCAT44(iVar8,iVar17);
          uVar15 = uVar15 ^ 1;
          lVar12 = (longlong)(int)(iVar8 + uVar15) / (longlong)iVar18;
          uVar11 = (longlong)(int)(uVar15 + iVar17) / (longlong)iVar18;
          *(ulonglong *)(lVar3 + 0x1ea8) = (uVar11 & 0xffffffff) + (lVar12 << 0x20);
          *(ulonglong *)(lVar3 + 0x1eb0) =
               (longlong)((int)uVar11 + iVar14 + -1) / (longlong)iVar14 & 0xffffffffU |
               (longlong)((int)lVar12 + iVar14 + -1) / (longlong)iVar14 << 0x20;
          plVar4 = *(longlong **)(lVar3 + 0x1ed8);
          if (plVar4 != (longlong *)0x0) {
            *(undefined8 *)(lVar3 + 0x1ed8) = 0;
            (**(code **)(*plVar4 + 0x38))();
          }
          plVar4 = *(longlong **)(lVar3 + 0x1ee0);
          if (plVar4 != (longlong *)0x0) {
            *(undefined8 *)(lVar3 + 0x1ee0) = 0;
            (**(code **)(*plVar4 + 0x38))();
          }
          plVar4 = *(longlong **)(lVar3 + 0x1ee8);
          if (plVar4 != (longlong *)0x0) {
            *(undefined8 *)(lVar3 + 0x1ee8) = 0;
            (**(code **)(*plVar4 + 0x38))();
          }
        }
        plVar4 = *(longlong **)(lVar3 + 0x1eb8 + (ulonglong)*(uint *)(lVar3 + 0x1e80) * 8);
        if (plVar4 != (longlong *)0x0) {
          lVar12 = (**(code **)(*plVar4 + 0x10))();
          plVar4 = *(longlong **)(lVar3 + 0x1eb8 + (ulonglong)*(uint *)(lVar3 + 0x1e80) * 8);
          if (plVar4 != (longlong *)0x0) {
            iVar8 = *(int *)(lVar3 + 0x1e78);
            if ((*(int *)(lVar12 + 0x2c) !=
                 (iVar8 + (int)*(undefined8 *)(lVar3 + 0x1ea0) + -1) / iVar8) ||
               (*(int *)(lVar12 + 0x30) !=
                (iVar8 + (int)((ulonglong)*(undefined8 *)(lVar3 + 0x1ea0) >> 0x20) + -1) / iVar8)) {
              *(undefined8 *)(lVar3 + 0x1eb8 + (ulonglong)*(uint *)(lVar3 + 0x1e80) * 8) = 0;
              (**(code **)(*plVar4 + 0x38))();
              plVar4 = *(longlong **)(lVar3 + 0x1ec8 + (ulonglong)*(uint *)(lVar3 + 0x1e80) * 8);
              if (plVar4 != (longlong *)0x0) {
                *(undefined8 *)(lVar3 + 0x1ec8 + (ulonglong)*(uint *)(lVar3 + 0x1e80) * 8) = 0;
                (**(code **)(*plVar4 + 0x38))();
              }
            }
          }
        }
        if (bVar16 == 0) {
          bVar21 = *(longlong *)(lVar3 + 0x1eb8 + (ulonglong)uVar9 * 8) != 0;
        }
        else {
          bVar21 = false;
        }
        *(bool *)(lVar3 + 0x1e85) = bVar21;
        uVar9 = *(int *)(lVar3 + 0x1e90) + (uint)(*(int *)(lVar3 + 0x1e8c) == 0);
        uVar15 = *(uint *)(lVar3 + 0x1e7c);
        *(uint *)(lVar3 + 0x1e90) = uVar9;
        *(uint *)(lVar3 + 0x1e94) = uVar9 % (uVar15 * uVar15);
        uVar11 = (ulonglong)(*(int *)(lVar3 + 0x1e8c) + 1) % (ulonglong)(uVar15 * uVar15);
        *(int *)(lVar3 + 0x1e8c) = (int)uVar11;
        if (uVar15 == 2) {
          uVar13 = (ulonglong)(*(uint *)(&DAT_14a330370 + uVar11 * 4) >> 1);
          uVar15 = *(uint *)(&DAT_14a330370 + uVar11 * 4) & 1;
        }
        else if (uVar15 == 4) {
          uVar13 = (ulonglong)(*(uint *)(&DAT_14a330380 + uVar11 * 4) >> 2);
          uVar15 = *(uint *)(&DAT_14a330380 + uVar11 * 4) & 3;
        }
        else {
          uVar13 = uVar11 / uVar15;
          uVar15 = (uint)(uVar11 % (ulonglong)uVar15);
        }
        *(ulonglong *)(lVar3 + 0x1e98) = (ulonglong)uVar15 | uVar13 << 0x20;
        if ((*(uint *)(lVar3 + 0x1ef0) | 2) == 3) {
          *(undefined8 *)(lVar3 + 0x1e98) = DAT_14c967818;
        }
        plVar4 = (longlong *)(lVar2 + lVar20);
        memcpy(local_1a08,*(void **)(lVar2 + lVar20 + -0x10640),0x1960);
        uVar15 = *(uint *)(lVar3 + 0x1e78);
        memcpy(local_25a8,(void *)(lVar2 + lVar20 + -0x13250),0xba0);
        FUN_1448e6e32(local_25a8);
        dVar5 = (double)((float)uVar15 * 0.5);
        local_25b8 = (-2.0 / (double)(int)*(undefined8 *)(lVar3 + 0x1ea8)) *
                     (((double)(int)*(undefined8 *)(lVar3 + 0x1e98) + 0.5) - dVar5);
        local_25b0 = (2.0 / (double)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x1ea8) >> 0x20)) *
                     (((double)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x1e98) >> 0x20) + 0.5) -
                     dVar5);
        FUN_14054fa8c(local_25a8,&local_25b8);
        local_2600 = lVar2 + lVar20 + -0x1180;
        local_25c0 = *(undefined8 *)(lVar3 + 0x1eb0);
        local_25c8 = 0;
        local_2608 = local_25a8;
        FUN_14054f8e6(local_25d0,local_1a08,lVar3 + 0x1eb0,&local_25c8);
        FUN_1401ee234(local_25a8,local_1a08,1,1);
        if (plVar4 == local_25a8) {
LAB_14054f7c9:
          lVar12 = local_25e0;
          param_2 = local_25e8;
          if (local_25a8[0] != 0) {
            LOCK();
            puVar1 = (uint *)(local_25a8[0] + 8);
            uVar15 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar15 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        else {
          lVar2 = *plVar4;
          *plVar4 = local_25a8[0];
          local_25a8[0] = 0;
          lVar12 = local_25e0;
          param_2 = local_25e8;
          if (lVar2 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar2 + 8);
            uVar15 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar15 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
            goto LAB_14054f7c9;
          }
        }
        iVar8 = (int)param_2[1];
      }
      lVar12 = lVar12 + 1;
      lVar20 = lVar20 + 0x13c10;
    } while (lVar12 < iVar8);
  }
  if ((local_a0 ^ (ulonglong)auStack_2628) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054f85b FUN_14054f85b body=138 status=ok
// SIG undefined FUN_14054f85b(void)

float FUN_14054f85b(int param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  float fVar6;
  
  lVar2 = DAT_14ca6c328;
  if (param_1 == 2) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
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
    fVar6 = *(float *)(lVar2 + uVar5 * 4);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if (fVar6 <= 0.1) {
      fVar6 = 0.1;
    }
  }
  else {
    fVar6 = 1.0;
  }
  return fVar6;
}



// FUNCTION 14054f8e6 FUN_14054f8e6 body=421 status=ok
// SIG undefined FUN_14054f8e6(void)

void FUN_14054f8e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 8);
  local_108 = lVar1 + 0x48;
  local_110 = &local_108;
  local_100 = *(undefined8 *)(param_1 + 0x4d8);
  local_f8 = *(undefined8 *)(param_1 + 0x4e0);
  local_f0 = *(undefined8 *)(lVar1 + 0x88);
  uStack_e8 = *(undefined8 *)(lVar1 + 0x90);
  local_e0 = *(undefined8 *)(lVar1 + 0x98);
  local_d8 = *(undefined8 *)(param_1 + 0x23d0);
  local_c8 = *(undefined8 *)(param_1 + 0x2400);
  uStack_c0 = *(undefined8 *)(param_1 + 0x2408);
  local_b8 = *(undefined4 *)(param_1 + 0x2410);
  uStack_b4 = *(undefined4 *)(param_1 + 0x2414);
  uStack_b0 = *(undefined4 *)(param_1 + 0x2418);
  uStack_ac = *(undefined4 *)(param_1 + 0x241c);
  local_a8 = *(undefined8 *)(param_1 + 0x23a0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x23a8);
  local_98 = *(undefined8 *)(param_1 + 0x1e50);
  uStack_90 = *(undefined8 *)(param_1 + 0x1e58);
  local_88 = *(undefined8 *)(param_1 + 0x1e70);
  uStack_80 = *(undefined8 *)(param_1 + 0x1e78);
  local_78 = *(undefined8 *)(param_1 + 0x1e60);
  uStack_70 = *(undefined8 *)(param_1 + 0x1e68);
  local_68 = *(undefined8 *)(param_1 + 0x1e80);
  uStack_60 = *(undefined8 *)(param_1 + 0x1e88);
  local_58 = 0;
  local_50 = *(undefined8 *)(lVar1 + 0xb0);
  local_48 = *(undefined4 *)(lVar1 + 0xac);
  local_44 = *(undefined4 *)(param_1 + 0x30a8);
  local_40 = *(undefined4 *)(param_1 + 0x2dac);
  local_3c = *(undefined4 *)(param_1 + 0x1de8);
  local_38 = *(undefined4 *)(param_1 + 0x2b8c);
  local_34 = 0;
  local_33 = *(undefined1 *)(param_1 + 0x2398);
  local_32 = *(undefined1 *)(param_1 + 0x23cc);
  local_31 = *(undefined1 *)(lVar1 + 0xdf);
  local_118 = param_6;
  FUN_1449de3b2(param_2,param_3,param_4,param_5);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14054fa8c FUN_14054fa8c body=3175 status=ok
// SIG undefined FUN_14054fa8c(void)

void FUN_14054fa8c(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar16;
  double dVar18;
  double dVar20;
  double dVar22;
  double dVar24;
  double dVar26;
  double dVar28;
  double dVar29;
  double dVar31;
  double dVar33;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined8 uVar60;
  longlong lVar61;
  undefined8 *puVar62;
  undefined8 *puVar63;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined8 local_148 [17];
  ulonglong local_c0;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar11;
  double dVar13;
  double dVar15;
  double dVar17;
  double dVar19;
  double dVar21;
  double dVar23;
  double dVar25;
  double dVar27;
  double dVar30;
  double dVar32;
  double dVar34;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  uVar60 = param_2[1];
  *(undefined8 *)(param_1 + 0xb88) = *param_2;
  *(undefined8 *)(param_1 + 0xb90) = uVar60;
  lVar61 = (ulonglong)(1.0 < *(double *)(param_1 + 0x3a8) || *(double *)(param_1 + 0x3a8) == 1.0) *
           0x20;
  *(double *)(lVar61 + 0x370 + param_1) =
       *(double *)(param_1 + 0xb88) + *(double *)(lVar61 + 0x370 + param_1);
  *(double *)(lVar61 + 0x378 + param_1) =
       *(double *)(param_1 + 0xb90) + *(double *)(lVar61 + 0x378 + param_1);
  FUN_1449dec08(local_148,param_1 + 0x330);
  puVar62 = local_148;
  puVar63 = (undefined8 *)(param_1 + 0x430);
  for (lVar61 = 0x10; lVar61 != 0; lVar61 = lVar61 + -1) {
    *puVar63 = *puVar62;
    puVar62 = puVar62 + 1;
    puVar63 = puVar63 + 1;
  }
  *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0xb88) + *(double *)(param_1 + 0x140);
  *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0xb90) + *(double *)(param_1 + 0x148);
  FUN_1449dec08(local_148,param_1 + 0x100);
  puVar62 = local_148;
  puVar63 = (undefined8 *)(param_1 + 0x180);
  for (lVar61 = 0x10; lVar61 != 0; lVar61 = lVar61 + -1) {
    *puVar63 = *puVar62;
    puVar62 = puVar62 + 1;
    puVar63 = puVar63 + 1;
  }
  local_2b8 = *(double *)(param_1 + 0x330);
  dStack_2b0 = *(double *)(param_1 + 0x338);
  local_288 = *(double *)(param_1 + 0x340);
  dStack_280 = *(double *)(param_1 + 0x348);
  local_278 = *(double *)(param_1 + 0x350);
  dStack_270 = *(double *)(param_1 + 0x358);
  local_298 = *(double *)(param_1 + 0x360);
  dStack_290 = *(double *)(param_1 + 0x368);
  local_268 = *(double *)(param_1 + 0x370);
  dStack_260 = *(double *)(param_1 + 0x378);
  local_258 = *(double *)(param_1 + 0x380);
  dStack_250 = *(double *)(param_1 + 0x388);
  local_2a8 = *(double *)(param_1 + 0x390);
  dStack_2a0 = *(double *)(param_1 + 0x398);
  local_248 = *(double *)(param_1 + 0x3a0);
  dStack_240 = *(double *)(param_1 + 0x3a8);
  dVar1 = *(double *)(param_1 + 0x4b0);
  dVar2 = *(double *)(param_1 + 0x4b0);
  dVar3 = *(double *)(param_1 + 0x4b8);
  dVar4 = *(double *)(param_1 + 0x4b8);
  dVar5 = *(double *)(param_1 + 0x4c0);
  dVar6 = *(double *)(param_1 + 0x4c0);
  dVar7 = *(double *)(param_1 + 0x4c8);
  dVar8 = *(double *)(param_1 + 0x4c8);
  dVar38 = local_2a8 * dVar7 + local_268 * dVar5 + local_278 * dVar3 + local_2b8 * dVar1;
  dVar39 = dStack_2a0 * dVar8 + dStack_260 * dVar6 + dStack_270 * dVar4 + dStack_2b0 * dVar2;
  auVar35._8_4_ = SUB84(dVar39,0);
  auVar35._0_8_ = dVar38;
  auVar35._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  dVar59 = dVar8 * dStack_240 + dVar6 * dStack_250 + dVar4 * dStack_290 + dVar2 * dStack_280;
  dVar2 = *(double *)(param_1 + 0x4d0);
  dVar4 = *(double *)(param_1 + 0x4d0);
  dVar6 = *(double *)(param_1 + 0x4d8);
  dVar8 = *(double *)(param_1 + 0x4d8);
  dVar39 = *(double *)(param_1 + 0x4e0);
  dVar9 = *(double *)(param_1 + 0x4e0);
  dVar10 = *(double *)(param_1 + 0x4e8);
  dVar11 = *(double *)(param_1 + 0x4e8);
  dVar12 = *(double *)(param_1 + 0x4f0);
  dVar13 = *(double *)(param_1 + 0x4f0);
  dVar14 = *(double *)(param_1 + 0x4f8);
  dVar15 = *(double *)(param_1 + 0x4f8);
  dVar16 = *(double *)(param_1 + 0x500);
  dVar17 = *(double *)(param_1 + 0x500);
  dVar18 = *(double *)(param_1 + 0x508);
  dVar19 = *(double *)(param_1 + 0x508);
  dVar20 = *(double *)(param_1 + 0x510);
  dVar21 = *(double *)(param_1 + 0x510);
  dVar22 = *(double *)(param_1 + 0x518);
  dVar23 = *(double *)(param_1 + 0x518);
  dVar24 = *(double *)(param_1 + 0x520);
  dVar25 = *(double *)(param_1 + 0x520);
  dVar26 = *(double *)(param_1 + 0x528);
  dVar27 = *(double *)(param_1 + 0x528);
  dVar47 = dStack_2a0 * dVar27 + dStack_260 * dVar25 + dStack_270 * dVar23 + dStack_2b0 * dVar21;
  dVar21 = dVar27 * dStack_240 + dVar25 * dStack_250 + dVar23 * dStack_290 + dVar21 * dStack_280;
  local_2c8._8_8_ = auVar35._8_8_;
  *(double *)(param_1 + 0x5b0) = dVar38;
  *(undefined8 *)(param_1 + 0x5b8) = local_2c8._8_8_;
  auVar57._8_4_ = SUB84(dVar59,0);
  auVar57._0_8_ = dVar7 * local_248 + dVar5 * local_258 + dVar3 * local_298 + dVar1 * local_288;
  auVar57._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5c0) = auVar57;
  *(double *)(param_1 + 0x5d0) =
       local_2a8 * dVar10 + local_268 * dVar39 + local_278 * dVar6 + local_2b8 * dVar2;
  *(double *)(param_1 + 0x5d8) =
       dStack_2a0 * dVar11 + dStack_260 * dVar9 + dStack_270 * dVar8 + dStack_2b0 * dVar4;
  *(double *)(param_1 + 0x5e0) =
       dVar10 * local_248 + dVar39 * local_258 + dVar6 * local_298 + dVar2 * local_288;
  *(double *)(param_1 + 0x5e8) =
       dVar11 * dStack_240 + dVar9 * dStack_250 + dVar8 * dStack_290 + dVar4 * dStack_280;
  *(double *)(param_1 + 0x5f0) =
       local_2a8 * dVar18 + local_268 * dVar16 + local_278 * dVar14 + local_2b8 * dVar12;
  *(double *)(param_1 + 0x5f8) =
       dStack_2a0 * dVar19 + dStack_260 * dVar17 + dStack_270 * dVar15 + dStack_2b0 * dVar13;
  *(double *)(param_1 + 0x600) =
       dVar18 * local_248 + dVar16 * local_258 + dVar14 * local_298 + dVar12 * local_288;
  *(double *)(param_1 + 0x608) =
       dVar19 * dStack_240 + dVar17 * dStack_250 + dVar15 * dStack_290 + dVar13 * dStack_280;
  auVar46._8_4_ = SUB84(dVar47,0);
  auVar46._0_8_ = local_2a8 * dVar26 + local_268 * dVar24 + local_278 * dVar22 + local_2b8 * dVar20;
  auVar46._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x610) = auVar46;
  auVar44._8_4_ = SUB84(dVar21,0);
  auVar44._0_8_ = dVar26 * local_248 + dVar24 * local_258 + dVar22 * local_298 + dVar20 * local_288;
  auVar44._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x620) = auVar44;
  dVar24 = *(double *)(param_1 + 0x530);
  dVar25 = *(double *)(param_1 + 0x538);
  dVar26 = *(double *)(param_1 + 0x540);
  dVar27 = *(double *)(param_1 + 0x548);
  dVar38 = *(double *)(param_1 + 0x550);
  dVar47 = *(double *)(param_1 + 0x558);
  dVar59 = *(double *)(param_1 + 0x560);
  dVar28 = *(double *)(param_1 + 0x568);
  local_188 = *(double *)(param_1 + 0x430);
  dStack_180 = *(double *)(param_1 + 0x430);
  local_158 = *(double *)(param_1 + 0x438);
  dStack_150 = *(double *)(param_1 + 0x438);
  dVar29 = *(double *)(param_1 + 0x570);
  dVar30 = *(double *)(param_1 + 0x578);
  dVar2 = *(double *)(param_1 + 0x440);
  dVar1 = *(double *)(param_1 + 0x440);
  local_2c8._8_4_ = SUB84(dVar1,0);
  local_2c8._0_8_ = dVar2;
  local_2c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar31 = *(double *)(param_1 + 0x580);
  dVar32 = *(double *)(param_1 + 0x588);
  dVar33 = *(double *)(param_1 + 0x590);
  dVar34 = *(double *)(param_1 + 0x598);
  dVar4 = *(double *)(param_1 + 0x448);
  dVar3 = *(double *)(param_1 + 0x448);
  local_168._8_4_ = SUB84(dVar3,0);
  local_168._0_8_ = dVar4;
  local_168._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar40 = *(double *)(param_1 + 0x5a0);
  dVar42 = *(double *)(param_1 + 0x5a8);
  dVar23 = dVar42 * dVar3 + dVar32 * dVar1 + dVar28 * dStack_150 + dVar27 * dStack_180;
  dVar6 = *(double *)(param_1 + 0x450);
  dVar5 = *(double *)(param_1 + 0x450);
  local_1b8._8_4_ = SUB84(dVar5,0);
  local_1b8._0_8_ = dVar6;
  local_1b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_198 = *(double *)(param_1 + 0x458);
  dStack_190 = *(double *)(param_1 + 0x458);
  dVar8 = *(double *)(param_1 + 0x460);
  dVar7 = *(double *)(param_1 + 0x460);
  local_178._8_4_ = SUB84(dVar7,0);
  local_178._0_8_ = dVar8;
  local_178._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar39 = *(double *)(param_1 + 0x468);
  dVar9 = *(double *)(param_1 + 0x468);
  local_1a8._8_4_ = SUB84(dVar9,0);
  local_1a8._0_8_ = dVar39;
  local_1a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar21 = dVar34 * dVar9 + dVar30 * dVar7 + dVar47 * dStack_190 + dVar25 * dVar5;
  dVar10 = *(double *)(param_1 + 0x470);
  dVar11 = *(double *)(param_1 + 0x470);
  local_1f8._8_4_ = SUB84(dVar11,0);
  local_1f8._0_8_ = dVar10;
  local_1f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_1d8 = *(double *)(param_1 + 0x478);
  dStack_1d0 = *(double *)(param_1 + 0x478);
  dVar12 = *(double *)(param_1 + 0x480);
  dVar13 = *(double *)(param_1 + 0x480);
  local_1c8._8_4_ = SUB84(dVar13,0);
  local_1c8._0_8_ = dVar12;
  local_1c8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_1e8 = *(double *)(param_1 + 0x488);
  dStack_1e0 = *(double *)(param_1 + 0x488);
  dVar20 = dVar42 * dStack_1e0 + dVar32 * dVar13 + dVar28 * dStack_1d0 + dVar27 * dVar11;
  dVar14 = *(double *)(param_1 + 0x490);
  dVar15 = *(double *)(param_1 + 0x490);
  local_228._8_4_ = SUB84(dVar15,0);
  local_228._0_8_ = dVar14;
  local_228._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_208 = *(double *)(param_1 + 0x498);
  dStack_200 = *(double *)(param_1 + 0x498);
  dVar16 = *(double *)(param_1 + 0x4a0);
  dVar17 = *(double *)(param_1 + 0x4a0);
  local_218._8_4_ = SUB84(dVar17,0);
  local_218._0_8_ = dVar16;
  local_218._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar18 = *(double *)(param_1 + 0x4a8);
  dVar19 = *(double *)(param_1 + 0x4a8);
  local_238._8_4_ = SUB84(dVar19,0);
  local_238._0_8_ = dVar18;
  local_238._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar22 = dVar34 * dVar19 + dVar30 * dVar17 + dVar47 * dStack_200 + dVar25 * dVar15;
  dVar15 = dVar42 * dVar19 + dVar32 * dVar17 + dVar28 * dStack_200 + dVar27 * dVar15;
  *(double *)(param_1 + 0x630) =
       dVar33 * dVar4 + dVar29 * dVar2 + dVar38 * local_158 + dVar24 * local_188;
  *(double *)(param_1 + 0x638) =
       dVar34 * dVar3 + dVar30 * dVar1 + dVar47 * dStack_150 + dVar25 * dStack_180;
  auVar58._8_4_ = SUB84(dVar23,0);
  auVar58._0_8_ = dVar40 * dVar4 + dVar31 * dVar2 + dVar59 * local_158 + dVar26 * local_188;
  auVar58._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x640) = auVar58;
  auVar43._8_4_ = SUB84(dVar21,0);
  auVar43._0_8_ = dVar33 * dVar39 + dVar29 * dVar8 + dVar38 * local_198 + dVar24 * dVar6;
  auVar43._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x650) = auVar43;
  *(double *)(param_1 + 0x660) =
       dVar40 * dVar39 + dVar31 * dVar8 + dVar59 * local_198 + dVar26 * dVar6;
  *(double *)(param_1 + 0x668) =
       dVar42 * dVar9 + dVar32 * dVar7 + dVar28 * dStack_190 + dVar27 * dVar5;
  *(double *)(param_1 + 0x670) =
       dVar33 * local_1e8 + dVar29 * dVar12 + dVar38 * local_1d8 + dVar24 * dVar10;
  *(double *)(param_1 + 0x678) =
       dVar34 * dStack_1e0 + dVar30 * dVar13 + dVar47 * dStack_1d0 + dVar25 * dVar11;
  auVar36._8_4_ = SUB84(dVar20,0);
  auVar36._0_8_ = dVar40 * local_1e8 + dVar31 * dVar12 + dVar59 * local_1d8 + dVar26 * dVar10;
  auVar36._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x680) = auVar36;
  auVar49._8_4_ = SUB84(dVar22,0);
  auVar49._0_8_ = dVar33 * dVar18 + dVar29 * dVar16 + dVar38 * local_208 + dVar24 * dVar14;
  auVar49._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x690) = auVar49;
  auVar48._8_4_ = SUB84(dVar15,0);
  auVar48._0_8_ = dVar40 * dVar18 + dVar31 * dVar16 + dVar59 * local_208 + dVar26 * dVar14;
  auVar48._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x6a0) = auVar48;
  dVar1 = *(double *)(param_1 + 0x730);
  dVar3 = *(double *)(param_1 + 0x730);
  dVar5 = *(double *)(param_1 + 0x738);
  dVar7 = *(double *)(param_1 + 0x738);
  dVar9 = *(double *)(param_1 + 0x740);
  dVar11 = *(double *)(param_1 + 0x740);
  dVar13 = *(double *)(param_1 + 0x748);
  dVar15 = *(double *)(param_1 + 0x748);
  dVar42 = local_2a8 * dVar13 + local_268 * dVar9 + local_278 * dVar5 + local_2b8 * dVar1;
  dVar17 = dStack_2a0 * dVar15 + dStack_260 * dVar11 + dStack_270 * dVar7 + dStack_2b0 * dVar3;
  local_2d8._8_4_ = SUB84(dVar17,0);
  local_2d8._0_8_ = dVar42;
  local_2d8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar40 = dVar15 * dStack_240 + dVar11 * dStack_250 + dVar7 * dStack_290 + dVar3 * dStack_280;
  dVar7 = *(double *)(param_1 + 0x750);
  dVar3 = *(double *)(param_1 + 0x750);
  dVar11 = *(double *)(param_1 + 0x758);
  dVar15 = *(double *)(param_1 + 0x758);
  dVar17 = *(double *)(param_1 + 0x760);
  dVar19 = *(double *)(param_1 + 0x760);
  dVar20 = *(double *)(param_1 + 0x768);
  dVar21 = *(double *)(param_1 + 0x768);
  dVar22 = *(double *)(param_1 + 0x770);
  dVar23 = *(double *)(param_1 + 0x770);
  dVar24 = *(double *)(param_1 + 0x778);
  dVar25 = *(double *)(param_1 + 0x778);
  dVar26 = *(double *)(param_1 + 0x780);
  dVar27 = *(double *)(param_1 + 0x780);
  dVar38 = *(double *)(param_1 + 0x788);
  dVar47 = *(double *)(param_1 + 0x788);
  dVar59 = *(double *)(param_1 + 0x790);
  dVar28 = *(double *)(param_1 + 0x790);
  dVar29 = *(double *)(param_1 + 0x798);
  dVar30 = *(double *)(param_1 + 0x798);
  dVar31 = *(double *)(param_1 + 0x7a0);
  dVar32 = *(double *)(param_1 + 0x7a0);
  dVar33 = *(double *)(param_1 + 0x7a8);
  dVar34 = *(double *)(param_1 + 0x7a8);
  dVar54 = dStack_2a0 * dVar34 + dStack_260 * dVar32 + dStack_270 * dVar30 + dStack_2b0 * dVar28;
  dVar28 = dStack_240 * dVar34 + dStack_250 * dVar32 + dStack_290 * dVar30 + dStack_280 * dVar28;
  *(double *)(param_1 + 0x930) = dVar42;
  *(undefined8 *)(param_1 + 0x938) = local_2d8._8_8_;
  auVar37._8_4_ = SUB84(dVar40,0);
  auVar37._0_8_ = dVar13 * local_248 + dVar9 * local_258 + dVar5 * local_298 + dVar1 * local_288;
  auVar37._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x940) = auVar37;
  *(double *)(param_1 + 0x950) =
       local_2a8 * dVar20 + local_268 * dVar17 + local_278 * dVar11 + local_2b8 * dVar7;
  *(double *)(param_1 + 0x958) =
       dStack_2a0 * dVar21 + dStack_260 * dVar19 + dStack_270 * dVar15 + dStack_2b0 * dVar3;
  *(double *)(param_1 + 0x960) =
       dVar20 * local_248 + dVar17 * local_258 + dVar11 * local_298 + dVar7 * local_288;
  *(double *)(param_1 + 0x968) =
       dVar21 * dStack_240 + dVar19 * dStack_250 + dVar15 * dStack_290 + dVar3 * dStack_280;
  *(double *)(param_1 + 0x970) =
       local_2a8 * dVar38 + local_268 * dVar26 + local_278 * dVar24 + local_2b8 * dVar22;
  *(double *)(param_1 + 0x978) =
       dStack_2a0 * dVar47 + dStack_260 * dVar27 + dStack_270 * dVar25 + dStack_2b0 * dVar23;
  *(double *)(param_1 + 0x980) =
       dVar38 * local_248 + dVar26 * local_258 + dVar24 * local_298 + dVar22 * local_288;
  *(double *)(param_1 + 0x988) =
       dVar47 * dStack_240 + dVar27 * dStack_250 + dVar25 * dStack_290 + dVar23 * dStack_280;
  auVar52._8_4_ = SUB84(dVar54,0);
  auVar52._0_8_ = local_2a8 * dVar33 + local_268 * dVar31 + local_278 * dVar29 + local_2b8 * dVar59;
  auVar52._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x990) = auVar52;
  auVar50._8_4_ = SUB84(dVar28,0);
  auVar50._0_8_ = local_248 * dVar33 + local_258 * dVar31 + local_298 * dVar29 + local_288 * dVar59;
  auVar50._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9a0) = auVar50;
  dVar13 = *(double *)(param_1 + 0x7b0);
  dVar15 = *(double *)(param_1 + 0x7b8);
  dVar17 = *(double *)(param_1 + 2000);
  dVar19 = *(double *)(param_1 + 0x7d8);
  dVar20 = *(double *)(param_1 + 0x7c0);
  dVar1 = *(double *)(param_1 + 0x7c8);
  dVar21 = *(double *)(param_1 + 0x7e0);
  dVar22 = *(double *)(param_1 + 0x7e8);
  dVar23 = *(double *)(param_1 + 0x7f0);
  dVar24 = *(double *)(param_1 + 0x7f8);
  dVar25 = *(double *)(param_1 + 0x800);
  dVar26 = *(double *)(param_1 + 0x808);
  dVar27 = *(double *)(param_1 + 0x810);
  dVar38 = *(double *)(param_1 + 0x818);
  dVar47 = *(double *)(param_1 + 0x820);
  dVar59 = *(double *)(param_1 + 0x828);
  dVar3 = (double)local_168._8_8_ * dVar59 +
          (double)local_2c8._8_8_ * dVar26 + dStack_150 * dVar22 + dStack_180 * dVar1;
  dVar5 = (double)local_1a8._8_8_ * dVar38 +
          (double)local_178._8_8_ * dVar24 + dStack_190 * dVar19 + (double)local_1b8._8_8_ * dVar15;
  dVar7 = (double)local_1a8._8_8_ * dVar59 +
          (double)local_178._8_8_ * dVar26 + dStack_190 * dVar22 + (double)local_1b8._8_8_ * dVar1;
  dVar9 = dStack_1e0 * dVar38 +
          (double)local_1c8._8_8_ * dVar24 + dStack_1d0 * dVar19 + (double)local_1f8._8_8_ * dVar15;
  dVar11 = dStack_1e0 * dVar59 +
           (double)local_1c8._8_8_ * dVar26 + dStack_1d0 * dVar22 + (double)local_1f8._8_8_ * dVar1;
  dVar1 = (double)local_238._8_8_ * dVar59 +
          (double)local_218._8_8_ * dVar26 + dStack_200 * dVar22 + (double)local_228._8_8_ * dVar1;
  *(double *)(param_1 + 0x9b0) =
       dVar4 * dVar27 + dVar2 * dVar23 + local_158 * dVar17 + local_188 * dVar13;
  *(double *)(param_1 + 0x9b8) =
       (double)local_168._8_8_ * dVar38 +
       (double)local_2c8._8_8_ * dVar24 + dStack_150 * dVar19 + dStack_180 * dVar15;
  auVar45._8_4_ = SUB84(dVar3,0);
  auVar45._0_8_ = dVar4 * dVar47 + dVar2 * dVar25 + local_158 * dVar21 + local_188 * dVar20;
  auVar45._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9c0) = auVar45;
  auVar51._8_4_ = SUB84(dVar5,0);
  auVar51._0_8_ = dVar39 * dVar27 + dVar8 * dVar23 + local_198 * dVar17 + dVar6 * dVar13;
  auVar51._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9d0) = auVar51;
  auVar55._8_4_ = SUB84(dVar7,0);
  auVar55._0_8_ = dVar39 * dVar47 + dVar8 * dVar25 + local_198 * dVar21 + dVar6 * dVar20;
  auVar55._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9e0) = auVar55;
  auVar53._8_4_ = SUB84(dVar9,0);
  auVar53._0_8_ = local_1e8 * dVar27 + dVar12 * dVar23 + local_1d8 * dVar17 + dVar10 * dVar13;
  auVar53._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9f0) = auVar53;
  auVar56._8_4_ = SUB84(dVar11,0);
  auVar56._0_8_ = local_1e8 * dVar47 + dVar12 * dVar25 + local_1d8 * dVar21 + dVar10 * dVar20;
  auVar56._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa00) = auVar56;
  *(double *)(param_1 + 0xa10) =
       dVar27 * dVar18 + dVar23 * dVar16 + dVar17 * local_208 + dVar13 * dVar14;
  *(double *)(param_1 + 0xa18) =
       dVar38 * (double)local_238._8_8_ +
       dVar24 * (double)local_218._8_8_ + dVar19 * dStack_200 + dVar15 * (double)local_228._8_8_;
  auVar41._8_4_ = SUB84(dVar1,0);
  auVar41._0_8_ = dVar18 * dVar47 + dVar16 * dVar25 + local_208 * dVar21 + dVar14 * dVar20;
  auVar41._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa20) = auVar41;
  if ((local_c0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405506f4 FUN_1405506f4 body=168 status=ok
// SIG undefined FUN_1405506f4(void)

undefined8 FUN_1405506f4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar2 * 0x14);
        if (*plVar4 == param_2) goto LAB_14055077c;
        iVar2 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14055077c:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    *param_3 = (int)*plVar5;
  }
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),plVar5 != (longlong *)0x0);
}



// FUNCTION 14055079c FUN_14055079c body=19 status=ok
// SIG undefined FUN_14055079c(void)

int FUN_14055079c(void)

{
  int iVar1;
  
  iVar1 = FUN_1405507b0();
  return iVar1 + 0x390;
}



// FUNCTION 1405507b0 FUN_1405507b0 body=102 status=ok
// SIG undefined FUN_1405507b0(void)

int FUN_1405507b0(longlong param_1)

{
  return *(int *)(param_1 + 0x2d4) * 0x58 + *(int *)(param_1 + 0xf4) * 8 +
         *(int *)(param_1 + 0x2f4) * 0xb0 + *(int *)(param_1 + 0x2e4) * 0x20 +
         (*(int *)(param_1 + 0x2b4) + *(int *)(param_1 + 0x2c4) + *(int *)(param_1 + 0x2a4)) * 0x38
         + *(int *)(param_1 + 0x304) * 0x28 + *(int *)(param_1 + 0x314) * 0x30;
}



// FUNCTION 140550820 FUN_140550820 body=653 status=ok
// SIG undefined FUN_140550820(void)

undefined8 FUN_140550820(double *param_1,longlong *param_2)

{
  float *pfVar1;
  double *pdVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x15 < uVar4) {
    iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar5 != 0x1a) {
      pdVar2 = *(double **)param_2[1];
      if ((double *)((longlong *)param_2[1])[1] < pdVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
        }
        else {
          thunk_FUN_146821949(param_2,param_1);
        }
      }
      else {
        *param_1 = *pdVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
      pdVar2 = *(double **)param_2[1];
      if ((double *)((longlong *)param_2[1])[1] < pdVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,8);
        }
        else {
          thunk_FUN_146821949(param_2);
        }
      }
      else {
        param_1[1] = *pdVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
      param_1 = param_1 + 2;
      pdVar2 = *(double **)param_2[1];
      if ((double *)((longlong *)param_2[1])[1] < pdVar2 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,8);
        }
        else {
          thunk_FUN_146821949(param_2,param_1);
        }
      }
      else {
        *param_1 = *pdVar2;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
      goto LAB_140550913;
    }
  }
  puVar3 = (ulonglong *)param_2[1];
  pfVar1 = (float *)*puVar3 + 1;
  if ((float *)puVar3[1] < pfVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(float *)*puVar3;
    *puVar3 = (ulonglong)pfVar1;
  }
  puVar3 = (ulonglong *)param_2[1];
  pfVar1 = (float *)*puVar3 + 1;
  if ((float *)puVar3[1] < pfVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_20);
    }
  }
  else {
    local_20 = *(float *)*puVar3;
    *puVar3 = (ulonglong)pfVar1;
  }
  puVar3 = (ulonglong *)param_2[1];
  pfVar1 = (float *)*puVar3 + 1;
  if ((float *)puVar3[1] < pfVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(float *)*puVar3;
    *puVar3 = (ulonglong)pfVar1;
  }
  *param_1 = (double)local_1c;
  param_1[1] = (double)local_20;
  param_1[2] = (double)local_24;
LAB_140550913:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140550aae FUN_140550aae body=112 status=ok
// SIG undefined FUN_140550aae(void)

ulonglong FUN_140550aae(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar1 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0xc) == param_2) {
          uVar2 = FUN_140550b1e();
          return uVar2 ^ 1;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 140550b1e FUN_140550b1e body=209 status=ok
// SIG undefined FUN_140550b1e(void)

ulonglong FUN_140550b1e(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x74);
  plVar4 = (longlong *)(ulonglong)uVar3;
  plVar2 = plVar4;
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
    lVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140550b9f;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((*(uint *)(plVar4 + 2) == uVar3 &&
         (uVar3 = *(uint *)(plVar4 + 1), plVar2 = (longlong *)(ulonglong)uVar3,
         (uVar3 & 0x10200000) == 0)) &&
        (plVar4 = (longlong *)*plVar4, plVar5 = plVar4, plVar4 != (longlong *)0x0)))) {
      do {
        if (plVar5[5] != 0) break;
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2f0))(plVar5);
      } while (plVar5 != (longlong *)0x0);
      lVar6 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
      goto LAB_140550b9f;
    }
  }
  plVar4 = plVar2;
  lVar6 = 0;
LAB_140550b9f:
  uVar7 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
  if (((-1 < (int)param_2) && (lVar6 != 0)) && ((int)param_2 < *(int *)(param_1 + 0x80))) {
    if (*(int *)(*(longlong *)(param_1 + 0x78) + 0x278 + (ulonglong)param_2 * 0x280) == 0) {
      uVar7 = 0;
    }
    else {
      uVar3 = FUN_1405d584e(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x280 + 0x270,lVar6
                           );
      uVar7 = (ulonglong)uVar3 ^ 1;
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140550bfe FUN_140550bfe body=40 status=ok
// SIG undefined FUN_140550bfe(void)

undefined8 FUN_140550bfe(undefined8 param_1,int param_2)

{
  FUN_140550c26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140550c26 FUN_140550c26 body=247 status=ok
// SIG undefined FUN_140550c26(void)

void FUN_140550c26(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b080120;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_143c44063(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_143c440ba(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_143c44106(param_1 + 0x22);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 140550d1e FUN_140550d1e body=1534 status=ok
// SIG undefined FUN_140550d1e(void)

void FUN_140550d1e(longlong param_1)

{
  longlong **pplVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  PSRWLOCK local_e8;
  longlong **local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == 0)) goto LAB_140550d61;
  FUN_146ea1408(param_1);
  local_e8 = (PSRWLOCK)(param_1 + 0x148);
  AcquireSRWLockShared(local_e8);
  if (lVar7 == 0) {
LAB_1405511c7:
    plVar2 = (longlong *)(param_1 + 0xf8);
    lVar12 = param_1 + 0x108;
    local_e0 = (longlong **)0x100000000;
    local_d0 = (longlong *)0xffffffff;
    local_c8 = local_c8 & 0xffffffff00000000;
    iVar10 = 0;
    local_d8 = lVar12;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_1449c0562(&local_e0);
      iVar10 = *(int *)(param_1 + 0x120);
    }
    local_80 = local_d0;
    uVar5 = local_80;
    local_78 = local_c8;
    uStack_90 = local_e0;
    local_88 = local_d8;
    local_80._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
    iVar6 = local_80._4_4_;
    local_98 = plVar2;
    if ((local_80._4_4_ != iVar10) || (local_80 = uVar5, local_d8 != lVar12)) {
      do {
        local_80 = uVar5;
        plVar4 = *(longlong **)(*local_98 + 8 + (longlong)iVar6 * 0x18);
        (**(code **)(*plVar4 + 8))(plVar4,lVar7);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar6 = local_80._4_4_;
        uVar5 = local_80;
      } while (local_98 != plVar2 || (local_88 != lVar12 || local_80._4_4_ != iVar10));
    }
  }
  else {
    if (*(int *)(param_1 + 0x100) - *(int *)(param_1 + 300) <=
        (*(int *)(param_1 + 0xb0) + *(int *)(lVar7 + 0x30)) -
        (*(int *)(param_1 + 0xdc) + *(int *)(lVar7 + 0x5c))) goto LAB_1405511c7;
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      local_78 = 0;
      iVar10 = 0;
      local_70 = 0;
      local_98 = (longlong *)0x0;
      uStack_90 = (longlong **)0x0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      uVar11 = *(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x5c);
      if (uVar11 != 0) {
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar11);
        }
        FUN_146e9f564(&local_98,uVar11);
        iVar6 = 1;
        if (3 < uVar11) {
          uVar11 = (uVar11 | 1) + 0xe;
          iVar6 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 1 << ((byte)iVar6 & 0x1f);
        }
        if ((local_50 == 0) || (local_50 < iVar6)) {
          local_50 = iVar6;
          FUN_146e9f702();
        }
      }
      pplVar1 = (longlong **)(lVar7 + 0x28);
      lVar12 = lVar7 + 0x38;
      local_b8 = 0x100000000;
      local_a8._0_4_ = 0xffffffff;
      local_a8._4_4_ = 0;
      local_a0 = 0;
      local_b0 = (longlong *)lVar12;
      if (*(int *)(lVar7 + 0x50) != 0) {
        FUN_1449c0562(&local_b8);
        iVar10 = *(int *)(lVar7 + 0x50);
      }
      local_c8._0_4_ = (uint)local_a8;
      local_c8._4_4_ = local_a8._4_4_;
      local_c0 = local_a0;
      local_bc = local_9c;
      local_d8 = local_b8;
      local_d0 = local_b0;
      local_e0 = pplVar1;
      if ((local_a8._4_4_ != iVar10) || (local_b0 != (longlong *)lVar12)) {
        do {
          if (*(int *)(param_1 + 0xa0) != 0) {
            uVar3 = *(ulonglong *)((*local_e0)[(longlong)local_c8._4_4_ * 4] + 0x10);
            uVar11 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            lVar8 = *(longlong *)(param_1 + 0x98);
            if (*(longlong *)(param_1 + 0x98) == 0) {
              lVar8 = param_1 + 0x90;
            }
            iVar6 = *(int *)(lVar8 + (longlong)
                                     (int)(*(int *)(param_1 + 0xa0) - 1U & (uVar11 >> 0x10 ^ uVar11)
                                          ) * 4);
            while (iVar9 = iVar6, iVar9 != -1) {
              lVar8 = *(longlong *)(param_1 + 0x58);
              iVar6 = *(int *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18);
              if (*(ulonglong *)(lVar8 + (longlong)iVar9 * 0x18) == uVar3) {
                do {
                  FUN_146e9f8e0(&local_98,&local_b8,lVar8 + (longlong)iVar9 * 0x18 + 8);
                  do {
                    iVar9 = iVar6;
                    if (iVar9 == -1) goto LAB_140550f89;
                    lVar8 = *(longlong *)(param_1 + 0x58);
                    iVar6 = *(int *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18);
                  } while (*(ulonglong *)(lVar8 + (longlong)iVar9 * 0x18) != uVar3);
                } while( true );
              }
            }
          }
LAB_140550f89:
          local_c8._0_4_ = (uint)local_c8 & ~local_d8._4_4_;
          FUN_1449c0562(&local_d8);
        } while (local_e0 != pplVar1 || (local_d0 != (longlong *)lVar12 || local_c8._4_4_ != iVar10)
                );
      }
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar10 = 0;
      local_b0 = &local_88;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
        iVar10 = local_70;
      }
      local_c8 = local_a8;
      uVar3 = local_c8;
      local_c0 = local_a0;
      local_bc = local_9c;
      local_d8 = local_b8;
      local_d0 = local_b0;
      local_c8._4_4_ = (int)(local_a8 >> 0x20);
      local_e0 = &local_98;
      if ((local_c8._4_4_ != iVar10) || (local_b0 != &local_88)) {
        iVar6 = local_c8._4_4_;
        local_c8 = uVar3;
        do {
          (**(code **)(*(longlong *)(*local_e0)[(longlong)iVar6 * 2] + 8))
                    ((longlong *)(*local_e0)[(longlong)iVar6 * 2],lVar7);
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar6 = local_c8._4_4_;
          uVar3 = local_c8;
        } while (local_e0 != &local_98 || (local_d0 != &local_88 || local_c8._4_4_ != iVar10));
      }
      local_c8 = uVar3;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_146e9fbee(&local_98);
    }
    plVar2 = (longlong *)(param_1 + 0xa8);
    lVar12 = param_1 + 0xb8;
    local_e0 = (longlong **)0x100000000;
    local_d0 = (longlong *)0xffffffff;
    local_c8 = local_c8 & 0xffffffff00000000;
    iVar10 = 0;
    local_d8 = lVar12;
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_1449c0562(&local_e0);
      iVar10 = *(int *)(param_1 + 0xd0);
    }
    local_80 = local_d0;
    uVar5 = local_80;
    local_78 = local_c8;
    uStack_90 = local_e0;
    local_88 = local_d8;
    local_80._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
    iVar6 = local_80._4_4_;
    local_98 = plVar2;
    if ((local_80._4_4_ != iVar10) || (local_80 = uVar5, local_d8 != lVar12)) {
      do {
        local_80 = uVar5;
        plVar4 = *(longlong **)(*local_98 + 8 + (longlong)iVar6 * 0x18);
        (**(code **)(*plVar4 + 8))(plVar4,lVar7);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar6 = local_80._4_4_;
        uVar5 = local_80;
      } while (local_98 != plVar2 || (local_88 != lVar12 || local_80._4_4_ != iVar10));
    }
  }
  ReleaseSRWLockShared(local_e8);
  FUN_146ea1488(param_1);
LAB_140550d61:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140551326 FUN_140551326 body=416 status=ok
// SIG undefined FUN_140551326(void)

void FUN_140551326(undefined8 param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar1 = (double)param_2[0x48];
  dVar2 = (double)param_2[0x49];
  dVar3 = (double)param_2[0x4a];
  dVar4 = dVar2 + dVar2;
  dVar5 = dVar3 + dVar3;
  dVar6 = dVar1 * (dVar1 + dVar1);
  local_f8 = 1.0 - (dVar3 * dVar5 + dVar2 * dVar4);
  dStack_d0 = 1.0 - (dVar3 * dVar5 + dVar6);
  local_a8 = 1.0 - (dVar6 + dVar2 * dVar4);
  local_e8 = (double)param_2[0x4b];
  local_d8 = dVar5 * local_e8;
  dStack_b0 = (dVar1 + dVar1) * (double)param_2[0x4b];
  local_e8 = dVar4 * local_e8;
  dStack_f0 = dVar4 * dVar1 + local_d8;
  local_c8 = dVar5 * dVar2 + dStack_b0;
  local_b8 = local_e8 + (double)param_2[0x48] * dVar5;
  local_d8 = dVar4 * dVar1 - local_d8;
  dStack_b0 = dVar5 * dVar2 - dStack_b0;
  local_e8 = (double)param_2[0x48] * dVar5 - local_e8;
  uStack_e0 = 0;
  uStack_c0 = 0;
  uStack_a0 = 0;
  local_98 = param_2[0x4c];
  lStack_90 = param_2[0x4d];
  local_88 = param_2[0x4e];
  uStack_80 = 0x3ff0000000000000;
  (**(code **)(*param_2 + 0x5f8))(param_2);
  FUN_1405514c8(param_1,param_2[0x73],&local_f8);
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405514c8 FUN_1405514c8 body=1342 status=ok
// SIG undefined FUN_1405514c8(void)

void FUN_1405514c8(longlong param_1,longlong param_2,void *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [160];
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_2 == 0) || (lVar4 = *(longlong *)(param_2 + 0x18), (*(byte *)(lVar4 + 0xe4) & 2) == 0))
  goto LAB_140551654;
  local_128 = param_1;
  local_120 = lVar4;
  memcpy(local_118,param_3,0xa0);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_140551548;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14055154d;
      goto LAB_14055157f;
    }
  }
  else {
LAB_140551548:
    if (iVar7 != 0x10) {
LAB_14055157f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_14055154d;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14055154d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14055171c;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_142fb49ae);
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
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14055171c:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar15 = (uint *)(puVar17 + 0x2c);
          uVar14 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar17 + 0x2c);
            uVar14 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14055179c;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14055179c:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a2e8e20;
        memcpy(puVar17 + 0x16,&local_128,0xb0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78[0] = (undefined1 *)0x0;
        plVar10 = (longlong *)FUN_14001cc68(0xc0,0x10);
        *plVar10 = (longlong)&PTR_LAB_14a2e8dd0;
        local_68 = plVar10;
        memcpy(plVar10 + 2,&local_128,0xb0);
        if (plVar10 != (longlong *)&DAT_fffffffffffffff0) {
          local_78[0] = &LAB_14024e7ae;
        }
        local_138 = local_78;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateLightTransform",&DAT_14ca44cd0);
        if (local_78[0] != (undefined1 *)0x0) {
          plVar10 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar10 = local_58;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      goto LAB_140551654;
    }
  }
LAB_14055154d:
  FUN_14024e7c8(*(undefined8 *)(param_1 + 0x5660),lVar4,local_118);
LAB_140551654:
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140551a08 FUN_140551a08 body=34 status=ok
// SIG undefined FUN_140551a08(void)

void FUN_140551a08(undefined8 param_1)

{
  FUN_1405527ea();
  FUN_14055215c(param_1);
  FUN_140551a2a(param_1);
  return;
}



// FUNCTION 140551a2a FUN_140551a2a body=840 status=ok
// SIG undefined FUN_140551a2a(void)

void FUN_140551a2a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 local_e4 [4];
  int local_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar13 = *(longlong *)(param_1 + 8);
  cVar5 = FUN_140047f5c(param_1 + 0x98);
  if ((((lVar13 == 0) || (cVar5 == '\0')) || (DAT_14c760aa8 == 0)) ||
     ((((*(byte *)(param_1 + 0xf5) & 8) == 0 || (*(int *)(lVar13 + 0x4d18) < 1)) ||
      ((*(char *)(*(longlong *)(lVar13 + 0x4d10) + 0x6c) != '\x01' ||
       (*(float *)(*(longlong *)(lVar13 + 0x4d10) + 0x98) <= 0.0)))))) {
    iVar6 = *(int *)(param_1 + 0x3f0);
    if (0 < iVar6) {
      lVar14 = 0x3108;
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 1000);
        lVar11 = *(longlong *)(lVar12 + lVar14);
        if (lVar11 != 0) {
          plVar9 = *(longlong **)(lVar11 + 0x1e08);
          if (plVar9 != (longlong *)0x0) {
            *(undefined8 *)(lVar11 + 0x1e08) = 0;
            (**(code **)(*plVar9 + 0x38))();
            lVar11 = *(longlong *)(lVar12 + lVar14);
          }
          *(undefined4 *)(lVar11 + 0x1dd8) = 0x3f800000;
          uVar4 = DAT_14c8461b4;
          *(undefined8 *)(*(longlong *)(lVar12 + lVar14) + 0x1ddc) = DAT_14c8461b4;
          *(undefined8 *)(*(longlong *)(lVar12 + lVar14) + 0x1de4) = uVar4;
          *(undefined8 *)(*(longlong *)(lVar12 + lVar14) + 0x1dec) = uVar4;
          *(undefined8 *)(*(longlong *)(lVar12 + lVar14) + 0x1df4) = uVar4;
          lVar11 = *(longlong *)(lVar12 + -0x3100 + lVar14);
          puVar10 = (undefined *)(lVar11 + 0x1b8);
          if (*(char *)(lVar11 + 0xd0) == '\0') {
            puVar10 = &DAT_14cb05410;
          }
          iVar6 = (int)*(undefined8 *)(puVar10 + 0x10);
          local_e0 = 1;
          if (1 < iVar6) {
            local_e0 = iVar6;
          }
          iStack_dc = (int)((ulonglong)*(undefined8 *)(puVar10 + 0x10) >> 0x20);
          if (iStack_dc < 2) {
            iStack_dc = 1;
          }
          FUN_140047e94(&local_d8,&local_e0,local_e4);
          lVar12 = *(longlong *)(lVar12 + lVar14);
          *(undefined4 *)(lVar12 + 0x1e04) = local_d0;
          *(undefined8 *)(lVar12 + 0x1dfc) = local_d8;
          iVar6 = *(int *)(param_1 + 0x3f0);
        }
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0x13c10;
      } while (lVar13 < iVar6);
    }
  }
  else if (0 < *(int *)(param_1 + 0x3f0)) {
    lVar13 = 0;
    do {
      lVar12 = lVar13 * 0x13c10 + *(longlong *)(param_1 + 1000);
      FUN_140551d73(lVar12,&local_d8);
      FUN_1403d783a();
      local_f0 = 1;
      local_f8 = 1;
      (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_e0,&local_d8,DAT_14ca6af50);
      lVar14 = CONCAT44(iStack_dc,local_e0);
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
        lVar11 = CONCAT44(iStack_dc,local_e0);
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
              plVar7 = (longlong *)FUN_14001cc68(0x10,8);
              plVar7[1] = lVar11;
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar7 = (longlong)plVar9;
                  LOCK();
                  bVar15 = plVar9 != DAT_14ca843c0;
                  plVar8 = plVar7;
                  if (bVar15) {
                    plVar9 = DAT_14ca843c0;
                    plVar8 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar8;
                  UNLOCK();
                } while (bVar15);
              }
              else {
                do {
                  *plVar7 = (longlong)plVar8;
                  LOCK();
                  bVar15 = plVar8 != DAT_14ca843c8;
                  plVar9 = plVar7;
                  if (bVar15) {
                    plVar8 = DAT_14ca843c8;
                    plVar9 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar9;
                  UNLOCK();
                } while (bVar15);
              }
            }
          }
        }
      }
      lVar11 = *(longlong *)(lVar12 + 0x137a0);
      *(longlong *)(lVar12 + 0x137a0) = lVar14;
      if (lVar11 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar11 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x3f0));
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140551d73 FUN_140551d73 body=999 status=ok
// SIG undefined FUN_140551d73(void)

void FUN_140551d73(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined *puVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [36];
  int local_e4;
  int iStack_e0;
  int local_dc;
  int local_d8;
  int iStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iStack_e0 = *(int *)(param_1 + 0x3104) - *(int *)(param_1 + 0x30fc);
  local_e4 = *(int *)(param_1 + 0x3100) - *(int *)(param_1 + 0x30f8);
  FUN_140047e94(&local_d8,&local_e4,&local_cc);
  puVar10 = &DAT_14cb05410;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0xd0) != '\0') {
    puVar10 = (undefined *)(*(longlong *)(param_1 + 8) + 0x1b8);
  }
  iVar7 = (int)*(undefined8 *)(puVar10 + 0x10);
  local_c8 = 1;
  if (1 < iVar7) {
    local_c8 = iVar7;
  }
  iVar7 = (int)((ulonglong)*(undefined8 *)(puVar10 + 0x10) >> 0x20);
  local_c4 = 1;
  if (1 < iVar7) {
    local_c4 = iVar7;
  }
  FUN_140047e94(&local_e4,&local_c8,&local_cc);
  *(int *)(param_2 + 1) = local_d0;
  *param_2 = CONCAT44(iStack_d4,local_d8);
  *(float *)(param_2 + 2) = (float)local_d8;
  *(float *)((longlong)param_2 + 0x14) = (float)iStack_d4;
  *(float *)(param_2 + 3) = (float)local_d0;
  param_2[4] = CONCAT44(iStack_e0,local_e4);
  *(int *)(param_2 + 5) = local_dc;
  fVar16 = (float)local_e4;
  fVar17 = (float)iStack_e0;
  *(float *)(param_2 + 6) = fVar16;
  *(float *)((longlong)param_2 + 0x34) = fVar17;
  *(float *)(param_2 + 7) = (float)local_dc;
  fVar5 = DAT_14c760ab0;
  fVar12 = *(float *)(param_1 + 0x120b8);
  fVar14 = *(float *)(param_1 + 0x2170);
  if (*(float *)(param_1 + 0x2170) <= *(float *)(param_1 + 0x120c4)) {
    fVar14 = *(float *)(param_1 + 0x120c4);
  }
  dVar3 = (double)fVar14 + 9.5;
  dVar4 = (double)fVar12;
  dVar2 = (double)(local_dc + -1) / (double)DAT_14c760ab0;
  dVar13 = (double)exp2(dVar2);
  dVar4 = (dVar4 - dVar13 * dVar3) / (dVar4 - dVar3);
  exp2(dVar2);
  fVar15 = (float)((1.0 - dVar4) / dVar3);
  fVar18 = (float)dVar4;
  logf((float)dVar3 * fVar15 + fVar18);
  logf(fVar14 * fVar15 + fVar18);
  logf(fVar12 * fVar15 + fVar18);
  *(float *)(param_2 + 8) = fVar15;
  *(float *)((longlong)param_2 + 0x44) = fVar18;
  *(float *)(param_2 + 9) = fVar5;
  fVar12 = DAT_14c8461b4._4_4_ / (fVar17 * (float)local_cc);
  *(float *)(param_2 + 10) = (float)DAT_14c8461b4 / (fVar16 * (float)local_cc);
  *(float *)((longlong)param_2 + 0x54) = fVar12;
  param_2[0x10] = CONCAT44(local_cc,local_cc);
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_1 + 0x120b8);
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_1 + 0x11fc8);
  param_2[0xc] = *(undefined8 *)(param_1 + 0x11fc0);
  *(undefined4 *)(param_2 + 0xf) = DAT_14c846338;
  param_2[0xe] = DAT_14c846330;
  if (((*(char *)(param_1 + 0x120c0) == '\x01') && (*(char *)(param_1 + 0x124f0) == '\x01')) &&
     (*(longlong *)(param_1 + 0x124d0) == 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x12520);
    param_2[0xe] = *(undefined8 *)(param_1 + 0x12518);
    *(undefined4 *)(param_2 + 0xf) = uVar1;
  }
  lVar6 = DAT_14ca6af00;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
    uVar11 = 0;
  }
  else if (iVar7 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar11 = 1;
  }
  fVar12 = *(float *)(lVar6 + uVar11 * 4);
  fVar5 = 0.0;
  if (0.0 <= fVar12) {
    fVar5 = fVar12;
  }
  *(float *)((longlong)param_2 + 0x5c) = fVar5;
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14055215c FUN_14055215c body=1676 status=ok
// SIG undefined FUN_14055215c(void)

void FUN_14055215c(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  longlong lVar19;
  double *pdVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  ulonglong in_R10;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((DAT_14c76011c != 0) && (DAT_14c76013c != 0)) &&
      ((uVar7 = *(ushort *)(param_1 + 0x8a8), (&DAT_14ca814b8)[(ulonglong)uVar7 * 0xf] != 1 ||
       ((cVar18 = FUN_147430715(), cVar18 != '\0' && ((&DAT_14ca814b8)[(ulonglong)uVar7 * 0xf] != 1)
        ))))) && (lVar19 = *(longlong *)(param_1 + 8), 0 < *(int *)(lVar19 + 0x3710))) {
    lVar24 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar19 + 0x3708) + lVar24 * 8);
      plVar10 = *(longlong **)(lVar9 + 8);
      if (((*(byte *)(plVar10 + 0xe) & 1) != 0) &&
         ((*(byte *)((longlong)plVar10 + 0x72) & 0x10) != 0)) {
        local_108 = (longlong *)0x0;
        uStack_100 = 0;
        FUN_1472ab2a8(lVar9,&local_108);
        lVar19 = *(longlong *)(*local_108 + 8);
        dVar25 = *(double *)(lVar19 + 0x180);
        dVar6 = *(double *)(lVar19 + 0x188);
        dVar2 = *(double *)(lVar19 + 400);
        local_120 = *(double *)(lVar19 + 0x198);
        dVar3 = *(double *)(lVar19 + 0x1a0);
        dVar4 = *(double *)(lVar19 + 0x1a8);
        dVar5 = *(double *)(lVar19 + 0x1b0);
        if (1 < (longlong)(int)uStack_100) {
          lVar19 = 1;
          dVar27 = dVar6;
          dVar26 = dVar2;
          dVar29 = dVar25;
          dVar17 = dVar5;
          dVar15 = dVar4;
          dVar16 = dVar3;
          dVar14 = local_120;
          do {
            lVar11 = *(longlong *)(local_108[lVar19] + 8);
            dVar31 = dVar27;
            dVar28 = dVar26;
            dVar30 = dVar29;
            if ((*(byte *)(lVar11 + 0x70) & 1) != 0) {
              dVar2 = dVar29 - dVar14;
              dVar14 = dVar14 + dVar29;
              dVar3 = dVar27 - dVar16;
              dVar16 = dVar16 + dVar27;
              dVar4 = dVar26 - dVar15;
              dVar15 = dVar15 + dVar26;
              uVar33 = SUB84(dVar2,0);
              uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
              if (dVar14 <= dVar2) {
                uVar33 = SUB84(dVar14,0);
                uVar34 = (undefined4)((ulonglong)dVar14 >> 0x20);
              }
              dVar31 = dVar3;
              if (dVar16 <= dVar3) {
                dVar31 = dVar16;
              }
              dVar28 = dVar4;
              if (dVar15 <= dVar4) {
                dVar28 = dVar15;
              }
              if (dVar2 <= dVar14) {
                dVar2 = dVar14;
              }
              if (dVar3 <= dVar16) {
                dVar3 = dVar16;
              }
              if (dVar4 <= dVar15) {
                dVar4 = dVar15;
              }
              local_138._0_8_ = dVar17;
              dVar25 = *(double *)(lVar11 + 400);
              dVar6 = *(double *)(lVar11 + 0x180);
              dVar14 = *(double *)(lVar11 + 0x188);
              dVar5 = dVar6 - *(double *)(lVar11 + 0x198);
              if (dVar5 <= (double)CONCAT44(uVar34,uVar33)) {
                uVar33 = SUB84(dVar5,0);
                uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              if (dVar2 <= dVar5) {
                dVar2 = dVar5;
              }
              dVar5 = dVar14 - *(double *)(lVar11 + 0x1a0);
              if (dVar5 <= dVar31) {
                dVar31 = dVar5;
              }
              if (dVar3 <= dVar5) {
                dVar3 = dVar5;
              }
              dVar5 = dVar25 - *(double *)(lVar11 + 0x1a8);
              if (dVar5 <= dVar28) {
                dVar28 = dVar5;
              }
              if (dVar4 <= dVar5) {
                dVar4 = dVar5;
              }
              dVar5 = *(double *)(lVar11 + 0x198) + dVar6;
              if (dVar5 <= (double)CONCAT44(uVar34,uVar33)) {
                uVar33 = SUB84(dVar5,0);
                uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
              }
              if (dVar2 <= dVar5) {
                dVar2 = dVar5;
              }
              dVar15 = *(double *)(lVar11 + 0x1a8) + dVar25;
              dVar5 = *(double *)(lVar11 + 0x1a0) + dVar14;
              if (dVar5 <= dVar31) {
                dVar31 = dVar5;
              }
              if (dVar15 <= dVar28) {
                dVar28 = dVar15;
              }
              if (dVar3 <= dVar5) {
                dVar3 = dVar5;
              }
              if (dVar4 <= dVar15) {
                dVar4 = dVar15;
              }
              dVar4 = (dVar4 - dVar28) * 0.5;
              dVar3 = (dVar3 - dVar31) * 0.5;
              local_120 = (dVar2 - (double)CONCAT44(uVar34,uVar33)) * 0.5;
              dVar31 = dVar31 + dVar3;
              dVar30 = (double)CONCAT44(uVar34,uVar33) + local_120;
              dVar28 = dVar28 + dVar4;
              dVar5 = SQRT(dVar4 * dVar4 + local_120 * local_120 + dVar3 * dVar3);
              dVar2 = SQRT((dVar25 - dVar28) * (dVar25 - dVar28) +
                           (dVar6 - dVar30) * (dVar6 - dVar30) +
                           (dVar14 - dVar31) * (dVar14 - dVar31)) + *(double *)(lVar11 + 0x1b0);
              dVar27 = dVar17 + SQRT((dVar26 - dVar28) * (dVar26 - dVar28) +
                                     (dVar29 - dVar30) * (dVar29 - dVar30) +
                                     (dVar27 - dVar31) * (dVar27 - dVar31));
              if (dVar27 <= dVar2) {
                dVar27 = dVar2;
              }
              dVar25 = dVar30;
              dVar2 = dVar28;
              dVar6 = dVar31;
              dVar15 = dVar4;
              dVar16 = dVar3;
              dVar17 = dVar5;
              dVar14 = local_120;
              if (dVar27 <= dVar5) {
                dVar5 = dVar27;
                dVar17 = dVar27;
              }
            }
            lVar19 = lVar19 + 1;
            dVar27 = dVar31;
            dVar26 = dVar28;
            dVar29 = dVar30;
          } while ((int)uStack_100 != lVar19);
        }
        if (0 < *(int *)(param_1 + 0x3f0)) {
          local_138._8_4_ = SUB84(dVar25,0);
          local_138._0_8_ = dVar25;
          local_138._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          local_118._8_4_ = SUB84(dVar2,0);
          local_118._0_8_ = dVar2;
          local_118._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          lVar19 = 0;
          local_128 = dVar5;
          do {
            dVar2 = local_128;
            fVar32 = DAT_14c760124;
            lVar11 = *(longlong *)(param_1 + 1000);
            cVar18 = (**(code **)(*plVar10 + 0x198))(plVar10);
            if (cVar18 != '\0') {
              fVar32 = (float)(dVar2 * 0.5 + (double)fVar32);
            }
            lVar1 = lVar11 + lVar19 * 0x13c10;
            iVar8 = *(int *)(lVar11 + 0x2130 + lVar19 * 0x13c10);
            if (0 < iVar8) {
              dVar2 = (double)fVar32;
              dVar25 = dVar4 + dVar2;
              dVar5 = ABS(dVar2 + local_120);
              dVar2 = ABS(dVar3 + dVar2);
              pdVar20 = (double *)(lVar1 + 0x2020);
              if (*(double **)(lVar1 + 0x2120) != (double *)0x0) {
                pdVar20 = *(double **)(lVar1 + 0x2120);
              }
              iVar21 = 0;
              do {
                auVar12._8_8_ =
                     -(ulonglong)
                      (ABS(pdVar20[9] * dVar25) + ABS(pdVar20[5]) * dVar2 + ABS(pdVar20[1]) * dVar5
                      < ((double)local_118._8_8_ * pdVar20[9] +
                        dVar6 * pdVar20[5] + (double)local_138._8_8_ * pdVar20[1]) - pdVar20[0xd]);
                auVar12._0_8_ =
                     -(ulonglong)
                      (ABS(pdVar20[8] * dVar25) + ABS(pdVar20[4]) * dVar2 + ABS(*pdVar20) * dVar5 <
                      ((double)local_118._0_8_ * pdVar20[8] +
                      dVar6 * pdVar20[4] + (double)local_138._0_8_ * *pdVar20) - pdVar20[0xc]);
                param_4 = movmskpd(param_4,auVar12);
                auVar13._8_8_ =
                     -(ulonglong)
                      (ABS(pdVar20[0xb] * dVar25) +
                       ABS(pdVar20[7]) * dVar2 + ABS(pdVar20[3]) * dVar5 <
                      ((double)local_118._8_8_ * pdVar20[0xb] +
                      dVar6 * pdVar20[7] + (double)local_138._8_8_ * pdVar20[3]) - pdVar20[0xf]);
                auVar13._0_8_ =
                     -(ulonglong)
                      (ABS(pdVar20[10] * dVar25) + ABS(pdVar20[6]) * dVar2 + ABS(pdVar20[2]) * dVar5
                      < ((double)local_118._0_8_ * pdVar20[10] +
                        dVar6 * pdVar20[6] + (double)local_138._0_8_ * pdVar20[2]) - pdVar20[0xe]);
                iVar22 = movmskpd((int)in_R10,auVar13);
                uVar23 = iVar22 << 2 | param_4;
                in_R10 = (ulonglong)uVar23;
                if (uVar23 != 0) goto LAB_140552720;
                pdVar20 = pdVar20 + 0x10;
                iVar21 = iVar21 + 4;
              } while (iVar21 < iVar8);
            }
            iVar8 = *(int *)(lVar1 + 0x13848);
            *(uint *)(lVar1 + 0x13848) = iVar8 + 1U;
            if (*(uint *)(lVar1 + 0x1384c) < iVar8 + 1U) {
              FUN_14175e8cc((longlong *)(lVar1 + 0x13840),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar1 + 0x13840) + (longlong)iVar8 * 8) = lVar9;
LAB_140552720:
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(param_1 + 0x3f0));
        }
        FUN_140046388(&local_108);
        lVar19 = *(longlong *)(param_1 + 8);
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < *(int *)(lVar19 + 0x3710));
  }
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405527ea FUN_1405527ea body=1969 status=ok
// SIG undefined FUN_1405527ea(void)

void FUN_1405527ea(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  byte bVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint *puVar29;
  bool bVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  undefined1 auStack_138 [36];
  undefined4 local_114;
  uint local_110;
  int local_10c;
  uint *local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar10 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3558);
  iVar19 = *(int *)(param_1 + 0x4e0);
  *(uint *)(param_1 + 0x4e0) = iVar19 + uVar10;
  if ((uint)(*(int *)(param_1 + 0x4e4) - iVar19) < uVar10) {
    FUN_140335fc2(param_1 + 0x4d8,iVar19);
  }
  lVar12 = (longlong)iVar19 * 0x68 + *(longlong *)(param_1 + 0x4d8);
  FUN_144b17a6b(lVar12);
  uVar11 = (ulonglong)*(uint *)(param_1 + 0x3f0);
  if (0 < (int)*(uint *)(param_1 + 0x3f0)) {
    lVar12 = *(longlong *)(param_1 + 8);
    lVar27 = 0;
    do {
      iVar19 = *(int *)(lVar12 + 0x3558);
      if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar19);
      }
      lVar28 = *(longlong *)(param_1 + 1000) + lVar27 * 0x13c10;
      plVar22 = (longlong *)(lVar28 + 0x3780);
      FUN_144734185(*plVar22);
      *(undefined4 *)(lVar28 + 0x3788) = 0;
      if (*(int *)(lVar28 + 0x378c) != iVar19) {
        FUN_1402cf77e(plVar22);
      }
      lVar12 = *(longlong *)(param_1 + 8);
      if (0 < *(int *)(lVar12 + 0x3558)) {
        iVar19 = 0;
        do {
          iVar20 = *(int *)(lVar28 + 0x3788);
          uVar10 = iVar20 + 1;
          *(uint *)(lVar28 + 0x3788) = uVar10;
          if (*(uint *)(lVar28 + 0x378c) < uVar10) {
            FUN_1472e8828(plVar22);
          }
          lVar12 = *plVar22;
          lVar13 = (longlong)iVar20 * 0x78;
          *(undefined8 *)(lVar12 + 0x20 + lVar13) = 0;
          *(undefined8 *)(lVar12 + 0x28 + lVar13) = 0x8000000000;
          *(undefined8 *)(lVar12 + lVar13) = 0;
          ((undefined8 *)(lVar12 + lVar13))[1] = 0;
          puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          pbVar2 = (byte *)(lVar12 + 0x40 + lVar13);
          *pbVar2 = *pbVar2 & 0xfc;
          *(undefined8 *)(lVar12 + 0x58 + lVar13) = 0;
          *(undefined8 *)(lVar12 + 0x60 + lVar13) = 0x8000000000;
          iVar19 = iVar19 + 1;
          puVar1 = (undefined8 *)(lVar12 + 0x68 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar12 = *(longlong *)(param_1 + 8);
        } while (iVar19 < *(int *)(lVar12 + 0x3558));
      }
      lVar27 = lVar27 + 1;
      uVar11 = (ulonglong)*(int *)(param_1 + 0x3f0);
    } while (lVar27 < (longlong)uVar11);
  }
  uVar23 = 0;
  if (*(int *)(param_1 + 0x8a4) < 2) {
    local_114 = 0;
    if (DAT_14c76048c == 0) goto LAB_1405529b9;
    if ((*(byte *)(param_1 + 0xf1) & 0x80) != 0) {
      local_114 = (undefined4)
                  CONCAT71((int7)((ulonglong)lVar12 >> 8),*(byte *)(param_1 + 0xed) >> 7);
      goto LAB_1405529b9;
    }
  }
  local_114 = 0;
LAB_1405529b9:
  lVar12 = *(longlong *)(param_1 + 8);
  puVar29 = (uint *)(lVar12 + 0x3560);
  iVar19 = *(int *)(lVar12 + 0x3578);
  if (iVar19 == 0) {
    uVar26 = 1;
    iVar20 = 0;
    iVar15 = 0;
  }
  else {
    puVar18 = *(uint **)(lVar12 + 0x3570);
    if (*(uint **)(lVar12 + 0x3570) == (uint *)0x0) {
      puVar18 = puVar29;
    }
    uVar10 = *puVar18;
    if (uVar10 == 0) {
      iVar20 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar20 = iVar19 + -1;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar26 = uVar23;
      }
      iVar20 = 0;
      do {
        if (uVar26 == uVar23) goto LAB_140552f21;
        iVar20 = iVar20 + 0x20;
        uVar10 = puVar18[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar23 = 0;
      iVar20 = 0;
    }
    uVar26 = (ulonglong)(-uVar10 & uVar10);
    uVar25 = uVar26 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar10 = (uint)lVar27 ^ 0x3f;
    param_3 = (ulonglong)uVar10;
    iVar15 = (iVar20 - uVar10) + 0x3e;
    if (iVar19 <= iVar15) {
      iVar15 = iVar19;
    }
  }
  if (iVar15 < iVar19) {
    uVar25 = 0xffffffff;
    local_108 = puVar29;
    local_100 = lVar12;
    do {
      uVar10 = (uint)uVar25;
      if (0 < (int)uVar11) {
        uVar3 = *(ulonglong *)(*(longlong *)(lVar12 + 0x3550) + 0x30 + (longlong)iVar15 * 0x40);
        lVar12 = 0;
        local_110 = (uint)uVar25;
        local_10c = iVar20;
        local_f8 = uVar26;
        local_f0 = uVar23;
        do {
          plVar22 = *(longlong **)(uVar3 + 0x28);
          lVar27 = *(longlong *)(param_1 + 1000) + lVar12 * 0x13c10;
          lVar28 = *(longlong *)(*(longlong *)(param_1 + 1000) + 0x3780 + lVar12 * 0x13c10) +
                   (longlong)iVar15 * 0x78;
          if ((byte)((char)plVar22[0x3d] - 1U) < 3) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            dVar4 = (double)CONCAT44(uStack_e4,local_e8);
            dVar5 = (double)CONCAT44(uStack_dc,uStack_e0);
            if (*(int *)(lVar27 + 0x2130) < 1) {
              bVar30 = true;
            }
            else {
              dVar32 = (double)(float)dStack_d0;
              dVar33 = (double)(float)dStack_d0;
              pdVar14 = (double *)(lVar27 + 0x2020);
              if (*(double **)(lVar27 + 0x2120) != (double *)0x0) {
                pdVar14 = *(double **)(lVar27 + 0x2120);
              }
              uVar11 = 4;
              do {
                lVar13 = -(ulonglong)
                          (dVar33 < (pdVar14[9] * local_d8 +
                                    pdVar14[5] * (double)CONCAT44(uStack_dc,uStack_e0) +
                                    pdVar14[1] * dVar4) - pdVar14[0xd]);
                auVar6._8_4_ = (int)lVar13;
                auVar6._0_8_ = -(ulonglong)
                                (dVar32 < (pdVar14[8] * local_d8 +
                                          pdVar14[4] * dVar5 + *pdVar14 * dVar4) - pdVar14[0xc]);
                auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
                uVar10 = movmskpd((int)param_3,auVar6);
                lVar13 = -(ulonglong)
                          (dVar33 < (pdVar14[0xb] * local_d8 +
                                    pdVar14[7] * (double)CONCAT44(uStack_dc,uStack_e0) +
                                    pdVar14[3] * dVar4) - pdVar14[0xf]);
                auVar7._8_4_ = (int)lVar13;
                auVar7._0_8_ = -(ulonglong)
                                (dVar32 < (pdVar14[10] * local_d8 +
                                          pdVar14[6] * dVar5 + pdVar14[2] * dVar4) - pdVar14[0xe]);
                auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
                iVar19 = movmskpd((int)uVar25,auVar7);
                uVar24 = iVar19 << 2 | uVar10;
                uVar25 = (ulonglong)uVar24;
                bVar30 = uVar24 == 0;
                param_3 = (ulonglong)uVar10;
                if (!bVar30) break;
                pdVar14 = pdVar14 + 0x10;
                iVar19 = (int)uVar11;
                uVar11 = (ulonglong)(iVar19 + 4);
                param_3 = uVar11;
              } while (iVar19 < *(int *)(lVar27 + 0x2130));
            }
            if (1.0 < *(double *)(lVar27 + 0x8a8) || *(double *)(lVar27 + 0x8a8) == 1.0) {
              *(uint *)(lVar28 + 0x40) = (uint)bVar30 + (*(uint *)(lVar28 + 0x40) & 0xfffffffc) + 2;
            }
            else {
              dVar32 = local_d8 - *(double *)(lVar27 + 0x1058);
              dVar5 = dVar5 - *(double *)(lVar27 + 0x1050);
              dVar4 = dVar4 - *(double *)(lVar27 + 0x1048);
              fVar34 = (float)(dVar32 * dVar32 + dVar4 * dVar4 + dVar5 * dVar5);
              fVar31 = (float)(**(code **)(*plVar22 + 0x100))(plVar22);
              dVar4 = 0.00019999999494757503;
              if ((double)DAT_14c760a04 / dStack_d0 <= 0.00019999999494757503) {
                dVar4 = (double)DAT_14c760a04 / dStack_d0;
              }
              dVar4 = (double)*(float *)(lVar27 + 0x23c8) * dVar4;
              if (1.0 <= (double)fVar34 * dVar4 * dVar4) {
                uVar24 = *(uint *)(lVar28 + 0x40) & 0xfffffffc;
                uVar10 = 0;
              }
              else if (fVar31 <= 0.0) {
                uVar24 = *(uint *)(lVar28 + 0x40) & 0xfffffffc | (uint)bVar30;
                uVar10 = 2;
              }
              else {
                bVar8 = fVar34 < fVar31 * DAT_14c760a08 * fVar31 * DAT_14c760a08;
                bVar21 = bVar30 & bVar8;
                param_3 = (ulonglong)bVar21;
                uVar24 = *(uint *)(lVar28 + 0x40) & 0xfffffffc | (uint)bVar21;
                uVar10 = (uint)bVar8 * 2;
              }
              *(uint *)(lVar28 + 0x40) = uVar24 | uVar10;
            }
          }
          else {
            *(byte *)(lVar28 + 0x40) = *(byte *)(lVar28 + 0x40) | 3;
            if ((((char)local_114 != '\0') && ((*(byte *)(uVar3 + 0xe4) & 4) != 0)) &&
               (cVar9 = FUN_142cfe696(lVar27,*(undefined8 *)(uVar3 + 0x28)), cVar9 != '\0')) {
              param_3 = uVar3;
              FUN_1471dbda9(&local_e8,lVar27);
              *(undefined8 *)(lVar27 + 0x13808) = local_b8;
              *(undefined8 *)(lVar27 + 0x137f8) = local_c8;
              *(undefined8 *)(lVar27 + 0x13800) = uStack_c0;
              *(double *)(lVar27 + 0x137e8) = local_d8;
              *(double *)(lVar27 + 0x137f0) = dStack_d0;
              *(undefined4 *)(lVar27 + 0x137d8) = local_e8;
              *(undefined4 *)(lVar27 + 0x137dc) = uStack_e4;
              *(undefined4 *)(lVar27 + 0x137e0) = uStack_e0;
              *(undefined4 *)(lVar27 + 0x137e4) = uStack_dc;
              *(undefined1 *)(lVar27 + 0x13810) = 1;
            }
          }
          if (((*(char *)(lVar27 + 0x23eb) == '\x01') && ((*(byte *)(lVar28 + 0x40) & 1) != 0)) &&
             (((*(byte *)(plVar22 + 0x3a) & 4) != 0 &&
              (((char)plVar22[0x3d] != '\0' &&
               (dVar4 = (double)plVar22[0x28] - *(double *)(lVar27 + 0x1058),
               dVar5 = (double)plVar22[0x27] - *(double *)(lVar27 + 0x1050),
               dVar32 = (double)plVar22[0x26] - *(double *)(lVar27 + 0x1048),
               fVar31 = (float)(**(code **)(*plVar22 + 0x18))(plVar22),
               (float)(dVar4 * dVar4 + dVar32 * dVar32 + dVar5 * dVar5) < fVar31 * fVar31)))))) {
            iVar19 = *(int *)(lVar27 + 0x3798);
            *(uint *)(lVar27 + 0x3798) = iVar19 + 1U;
            if (*(uint *)(lVar27 + 0x379c) < iVar19 + 1U) {
              FUN_1472e887e((longlong *)(lVar27 + 0x3790),iVar19);
            }
            *(longlong **)(*(longlong *)(lVar27 + 0x3790) + (longlong)iVar19 * 8) = plVar22;
          }
          lVar12 = lVar12 + 1;
          uVar11 = (ulonglong)*(int *)(param_1 + 0x3f0);
        } while (lVar12 < (longlong)uVar11);
        iVar19 = *(int *)(local_100 + 0x3578);
        lVar12 = local_100;
        uVar23 = local_f0;
        uVar26 = local_f8;
        puVar29 = local_108;
        iVar20 = local_10c;
        uVar10 = local_110;
      }
      uVar10 = uVar10 & ~(uint)uVar26;
      uVar25 = (ulonglong)uVar10;
      puVar18 = *(uint **)(lVar12 + 0x3570);
      if (*(uint **)(lVar12 + 0x3570) == (uint *)0x0) {
        puVar18 = puVar29;
      }
      iVar15 = (int)uVar23;
      lVar27 = (longlong)iVar15;
      uVar10 = puVar18[lVar27] & uVar10;
      if (uVar10 == 0) {
        iVar16 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar16 = iVar19 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar15) {
          iVar17 = iVar15;
        }
        if (iVar16 <= iVar15) break;
        lVar28 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar10 = puVar18[lVar27 + lVar28 + 1];
          if (uVar10 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar17 - lVar27 == lVar28) goto LAB_140552f21;
        }
        uVar23 = (ulonglong)(iVar15 + (int)lVar28 + 1);
        uVar25 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar10 & uVar10);
      uVar3 = uVar26 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      uVar10 = (uint)lVar27 ^ 0x3f;
      param_3 = (ulonglong)uVar10;
      iVar15 = (iVar20 - uVar10) + 0x3e;
    } while (iVar15 < iVar19);
  }
LAB_140552f21:
  FUN_14064f784(param_1);
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140552fc6 FUN_140552fc6 body=131 status=ok
// SIG undefined FUN_140552fc6(void)

void FUN_140552fc6(ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (param_2 != 0) goto LAB_140553026;
  do {
    uVar3 = (uint)uVar1;
    if (uVar3 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    uVar2 = *param_1;
    if ((uVar2 & 1) == 0) {
      if ((int)uVar3 < 1 && uVar2 == 0) {
        return;
      }
      if (-1 < (int)uVar3) {
        uVar1 = FUN_14001fdce(uVar2,uVar1 << 3,4);
        *param_1 = uVar1;
        return;
      }
    }
    else if (uVar3 <= (uint)param_1[1]) {
      return;
    }
    param_2 = 8;
    FUN_1467ac767();
LAB_140553026:
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar1 = 0x7fffffff;
    if (param_2 <= (int)(uVar2 >> 3)) {
      uVar1 = uVar2 >> 3 & 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14055304a FUN_14055304a body=77 status=ok
// SIG undefined FUN_14055304a(void)

undefined8 * FUN_14055304a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14055313c(param_1,iVar1,0);
    FUN_140553097(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 140553097 FUN_140553097 body=165 status=ok
// SIG undefined FUN_140553097(void)

void FUN_140553097(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar6);
      puVar2 = (undefined8 *)(param_1 + 0x18 + lVar6);
      *(undefined2 *)((longlong)puVar2 + -0x14) = *(undefined2 *)(puVar1 + 1);
      *(undefined4 *)(puVar2 + -3) = *puVar1;
      *(undefined2 *)(puVar2 + -2) = 0;
      *(undefined8 *)((longlong)puVar2 + -0xc) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[-2] = *(undefined8 *)(puVar1 + 2);
      *(undefined4 *)(puVar2 + -1) = puVar1[4];
      FUN_1447715ec(puVar2,puVar1 + 6);
      uVar3 = puVar1[0x11];
      uVar4 = puVar1[0x12];
      uVar5 = puVar1[0x13];
      *(undefined4 *)(puVar2 + 5) = puVar1[0x10];
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar3;
      *(undefined4 *)(puVar2 + 6) = uVar4;
      *(undefined4 *)((longlong)puVar2 + 0x34) = uVar5;
      lVar6 = lVar6 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14055313c FUN_14055313c body=233 status=ok
// SIG undefined FUN_14055313c(void)

void FUN_14055313c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x50);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x50,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140553226 FUN_140553226 body=894 status=ok
// SIG undefined FUN_140553226(void)

undefined8 FUN_140553226(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_1a8 [32];
  undefined1 *local_188;
  undefined8 *local_180;
  undefined4 *local_178;
  undefined4 local_170;
  undefined2 *local_168;
  undefined4 *local_160;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  undefined2 local_122;
  undefined **local_120 [10];
  longlong *local_d0;
  int local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (DAT_14c75ef48 != '\x01') goto LAB_140553283;
  if (DAT_14c86a9f8 == '\x01') {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 == 2) goto LAB_1405532c3;
    if (iVar3 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1405532c3;
    }
  }
  else {
LAB_1405532c3:
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (iVar3 = *(int *)(param_1 + 0x4c), *(int *)(param_1 + 0x4c) = iVar3 + -1,
       lVar6 = DAT_14c98e618, 0 < iVar3)) {
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar10 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar10,1,1);
        DAT_14c9670a0 = plVar10;
      }
      (**(code **)(*DAT_14c9670a0 + 0x60))(DAT_14c9670a0,&local_a4,*(undefined4 *)(param_1 + 0x1c));
      if (-1 < local_a4) {
        lVar4 = DAT_14c968088[1];
        plVar10 = (longlong *)DAT_14c968088[2];
        if (plVar10 == (longlong *)0x0) {
          lVar12 = *(longlong *)(param_1 + 0x20);
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          lVar12 = *(longlong *)(param_1 + 0x20);
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
        plVar5 = DAT_14c968090;
        plVar1 = DAT_14c968088;
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        local_a0 = *(undefined4 *)(param_1 + 0x18);
        local_9c = 1;
        if (lVar4 == lVar12) {
          if (DAT_14c968090 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar1 + 0x58))(plVar1,&local_122);
          plVar10 = plVar5;
        }
        else {
          local_122 = 0;
        }
        local_140 = (undefined4)DAT_14c966e80;
        uStack_13c = DAT_14c966e80._4_4_;
        uStack_138 = (undefined4)DAT_14c966e88;
        uStack_134 = DAT_14c966e88._4_4_;
        local_130 = DAT_14c966e90;
        if (DAT_14c966e90 != 0) {
          LOCK();
          *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
          UNLOCK();
        }
        puVar11 = &local_98;
        if (lVar4 == lVar12) {
          puVar11 = (undefined8 *)(lVar6 + 0x150);
        }
        FUN_1400bbf02(param_1,local_148,10);
        FUN_14007d9be(param_1,local_150,10);
        local_160 = &local_a0;
        local_168 = &local_122;
        local_178 = &local_140;
        local_170 = 0;
        local_188 = local_148;
        local_180 = puVar11;
        FUN_140553814(local_120,local_a4,10,local_150);
        if ((lVar4 == lVar12) && (plVar10 != (longlong *)0x0)) {
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
        FUN_14058dffc(lVar6,local_120,1);
        local_120[0] = &PTR_FUN_149eda650;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_d0 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1405535a6(&local_98);
        uVar9 = 1;
        goto LAB_140553285;
      }
    }
  }
LAB_140553283:
  uVar9 = 0;
LAB_140553285:
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405535a6 FUN_1405535a6 body=55 status=ok
// SIG undefined FUN_1405535a6(void)

void FUN_1405535a6(longlong *param_1)

{
  FUN_1405535de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405535de FUN_1405535de body=565 status=ok
// SIG undefined FUN_1405535de(void)

void FUN_1405535de(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar16 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_140553613;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar15 = (longlong)iVar9;
      uVar6 = puVar10[lVar15] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar15 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) goto LAB_140553613;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140553613:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar6 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140553814 FUN_140553814 body=481 status=ok
// SIG undefined FUN_140553814(void)

undefined8 *
FUN_140553814(undefined8 *param_1,undefined4 param_2,undefined4 param_3,float *param_4,
             float *param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8,
             undefined2 *param_9,undefined4 *param_10)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149eda670;
  *(undefined2 *)(param_1 + 1) = *param_9;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[3] = 0;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_14001cc68(0x78,0x10,param_2);
    FUN_14593912e(plVar6,1,1);
    param_2 = *(undefined4 *)(param_1 + 2);
    DAT_14c9670a0 = plVar6;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_64,param_2);
  *(undefined4 *)((longlong)param_1 + 0xc) = local_64;
  *param_1 = &PTR_FUN_149eda650;
  param_1[4] = *(undefined8 *)param_4;
  param_1[5] = *(undefined8 *)param_5;
  fVar3 = param_4[1];
  fVar4 = param_5[1];
  *(float *)(param_1 + 6) = *param_4 - *param_5;
  *(float *)((longlong)param_1 + 0x34) = fVar3 - fVar4;
  param_1[7] = param_6;
  param_1[8] = *param_7;
  param_1[9] = param_7[1];
  lVar5 = param_7[2];
  param_1[10] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0xb) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f80000000000000;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_8;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  if (*(char *)(param_10 + 1) == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *param_10;
  }
  plVar6 = (longlong *)param_7[2];
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
  if (*(char *)(param_10 + 1) == '\x01') {
    *(undefined1 *)(param_10 + 1) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405539f6 FUN_1405539f6 body=162 status=ok
// SIG undefined FUN_1405539f6(void)

void FUN_1405539f6(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_48 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_60 = param_1 + 0x40;
  local_58 = param_6;
  local_68 = param_5;
  FUN_140553a9a(uVar1,&local_48,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140553a9a FUN_140553a9a body=471 status=ok
// SIG undefined FUN_140553a9a(void)

void FUN_140553a9a(undefined8 *param_1,longlong *param_2,char param_3,undefined4 param_4,int param_5
                  ,undefined8 *param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [37];
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *param_2;
  if ((((lVar6 != 0) && (lVar3 = FUN_140553c72(), lVar3 != 0)) &&
      (*(int *)(lVar3 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30 && (lVar6 = *param_2, lVar6 != 0)))) {
    plVar4 = (longlong *)*param_1;
    iVar1 = *(int *)(param_1 + 1);
    lVar3 = (longlong)iVar1;
    if (lVar3 != 0) {
      lVar5 = lVar3 * 0xb0;
      plVar7 = plVar4;
      do {
        if (*plVar7 == lVar6) {
          if (plVar7 != (longlong *)0x0) goto LAB_140553b88;
          break;
        }
        plVar7 = plVar7 + 0x16;
        lVar5 = lVar5 + -0xb0;
      } while (lVar5 != 0);
    }
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_140553d50(param_1,iVar1);
      plVar4 = (longlong *)*param_1;
    }
    plVar7 = plVar4 + lVar3 * 0x16;
    plVar4[lVar3 * 0x16] = lVar6;
    *(undefined1 *)(plVar4 + lVar3 * 0x16 + 4) = 0;
    plVar4[lVar3 * 0x16 + 0x14] = 0;
    plVar4[lVar3 * 0x16 + 0x15] = 0x500000000;
LAB_140553b88:
    if (param_3 == '\0') {
      if (((char)plVar7[4] != '\x01') || (*(int *)((longlong)plVar7 + 0xc) < param_5)) {
        uVar2 = *param_6;
        *(undefined1 *)(plVar7 + 1) = 0;
        *(int *)((longlong)plVar7 + 0xc) = param_5;
        *(undefined4 *)(plVar7 + 2) = param_4;
        *(undefined8 *)((longlong)plVar7 + 0x14) = uVar2;
        *(uint *)((longlong)plVar7 + 0x1c) = (uint)param_7;
        *(undefined1 *)(plVar7 + 4) = 1;
      }
    }
    else {
      uVar2 = *param_6;
      iVar1 = (int)plVar7[0x15];
      lVar6 = (longlong)iVar1;
      *(uint *)(plVar7 + 0x15) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xac) < iVar1 + 1U) {
        FUN_1489a17a6(plVar7 + 5,iVar1);
      }
      plVar4 = plVar7 + 5;
      if ((longlong *)plVar7[0x14] != (longlong *)0x0) {
        plVar4 = (longlong *)plVar7[0x14];
      }
      *(char *)(plVar4 + lVar6 * 3) = param_3;
      *(undefined2 *)((longlong)plVar4 + lVar6 * 0x18 + 1) = local_53;
      *(undefined1 *)((longlong)plVar4 + lVar6 * 0x18 + 3) = local_51;
      *(int *)((longlong)plVar4 + lVar6 * 0x18 + 4) = param_5;
      *(undefined4 *)(plVar4 + lVar6 * 3 + 1) = param_4;
      *(undefined8 *)((longlong)plVar4 + lVar6 * 0x18 + 0xc) = uVar2;
      *(undefined4 *)((longlong)plVar4 + lVar6 * 0x18 + 0x14) = 0;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140553c72 FUN_140553c72 body=221 status=ok
// SIG undefined FUN_140553c72(void)

longlong FUN_140553c72(void)

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
  if (DAT_14cb66c98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14872e12f;
    local_40 = FUN_146511f0c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType",&DAT_14cb66c98,&DAT_14872e12e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66c98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140553d50 FUN_140553d50 body=264 status=ok
// SIG undefined FUN_140553d50(void)

void FUN_140553d50(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140553e5a FUN_140553e5a body=172 status=ok
// SIG undefined FUN_140553e5a(void)

undefined8 * FUN_140553e5a(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (((DAT_14cb7d6a0 == 0) || (DAT_14cb7d698 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*DAT_14cb7d698 + 0x30))(), cVar1 == '\0')) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b3e3f80;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    plVar4 = DAT_14cb7d698;
    if (DAT_14cb7d6a0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar4 + 0x58))();
  }
  *param_1 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_14b401a90;
  puVar3[2] = puVar2;
  param_1[1] = puVar3;
  return param_1;
}



// FUNCTION 140553f06 FUN_140553f06 body=36 status=ok
// SIG undefined FUN_140553f06(void)

undefined8 * FUN_140553f06(undefined8 *param_1)

{
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a470fa0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  return param_1;
}



// FUNCTION 140553f2a FUN_140553f2a body=158 status=ok
// SIG undefined FUN_140553f2a(void)

undefined8 * FUN_140553f2a(undefined8 *param_1,longlong *param_2)

{
  undefined2 uVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a471660;
  param_1[5] = 0;
  uVar1 = 0xffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0x10;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
  if ((*(byte *)(param_1[2] + 0xd4) & 1) == 0) {
    uVar1 = FUN_1409095b8(&DAT_14cab2788);
  }
  *(undefined2 *)((longlong)param_1 + 0x36) = uVar1;
  return param_1;
}



// FUNCTION 140553fc8 thunk_FUN_140553fce body=5 status=ok
// SIG undefined thunk_FUN_140553fce(void)

void thunk_FUN_140553fce(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 uStack_21;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf5e0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    uStack_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&uStack_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_48);
  }
  if ((uStack_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140554025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x800))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140553fce FUN_140553fce body=140 status=ok
// SIG undefined FUN_140553fce(void)

void FUN_140553fce(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf5e0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140554025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x800))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140554065 FUN_140554065 body=234 status=ok
// SIG undefined FUN_140554065(void)

void FUN_140554065(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)(int)param_6[1] != 0) {
    lVar3 = *param_6;
    lVar5 = (longlong)(int)param_6[1] * 0x13c10;
    do {
      uVar1 = uStack_50;
      lVar4 = (longlong)(int)uStack_50;
      uVar2 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
      if (uStack_50._4_4_ < uVar2) {
        FUN_140554150(&local_58,uVar1 & 0xffffffff);
      }
      *(longlong *)(local_58 + lVar4 * 8) = lVar3;
      lVar3 = lVar3 + 0x13c10;
      lVar5 = lVar5 + -0x13c10;
    } while (lVar5 != 0);
  }
  local_60 = &local_58;
  local_68 = param_5;
  FUN_1405542b1(param_1,param_2,param_3,param_4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140554150 FUN_140554150 body=353 status=ok
// SIG undefined FUN_140554150(void)

void FUN_140554150(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405541d5;
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
LAB_1405541d5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405542b1 FUN_1405542b1 body=2260 status=ok
// SIG undefined FUN_1405542b1(void)

void FUN_1405542b1(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  int iVar21;
  undefined4 uVar22;
  longlong lVar23;
  uint *puVar24;
  int iVar25;
  undefined8 *puVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong local_160;
  ulonglong *local_158;
  longlong local_150;
  uint local_144;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  undefined8 *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  uint *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  undefined4 local_77;
  undefined3 uStack_73;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  piVar14 = (int *)(*(longlong *)(param_5 + 0x40) + 8);
  if (*(longlong *)(param_5 + 0x40) == 0) {
    piVar14 = &DAT_14c760db4;
  }
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*piVar14 * 2);
  puVar16 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar16 = DAT_14ca96af8;
  }
  if (((uint)puVar16[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = (uint)CONCAT11((byte)(uVar1 >> 0xd),2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]);
  }
  lVar23 = (longlong)(int)param_6[1];
  local_160 = param_3;
  local_140 = param_2;
  local_120 = param_4;
  if (0 < lVar23) {
    local_f8 = DAT_14c9c0db0;
    local_100 = DAT_14c9c0d98;
    puVar24 = (uint *)(param_5 + 0xd4);
    local_158 = (ulonglong *)(param_1 + 0x70);
    local_138 = (longlong *)(param_1 + 0x98);
    local_118 = param_1 + 0x168;
    lVar27 = 0;
    local_144 = uVar18;
    local_130 = lVar23;
    local_110 = param_1;
    local_108 = puVar24;
    do {
      puVar7 = local_158;
      lVar3 = *(longlong *)(*param_6 + lVar27 * 8);
      puVar10 = puVar24;
      if (*(longlong *)(lVar3 + 0x23e0) == 0) {
LAB_14055440b:
        uVar13 = *puVar10;
      }
      else {
        uVar20 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x23e0) + 0x1c);
        uVar13 = 0xb;
        if (uVar20 < 7) {
          puVar10 = (uint *)(&DAT_14a2f1c58 + uVar20 * 4);
          goto LAB_14055440b;
        }
      }
      uVar9 = uVar13;
      if ((uVar13 & 0xfffffffe) == 6) {
        uVar9 = 0;
      }
      if ((char)uVar18 == '\0') {
        uVar9 = uVar13;
      }
      if ((9 < uVar9) || ((0x304U >> (uVar9 & 0x1f) & 1) == 0)) {
        bVar28 = uVar9 == 0;
        iVar2 = *(int *)(param_5 + 0xd8);
        puVar15 = &DAT_14c9c0d50;
        if (iVar2 == 1 && bVar28) {
          puVar15 = &DAT_14ca46a60;
        }
        if (iVar2 == 2 && bVar28) {
          puVar15 = &DAT_14c9c0600;
        }
        uVar22 = 0;
        if ((*(byte *)(local_160 + 0x93) < 0x12) &&
           ((0x22002U >> (*(byte *)(local_160 + 0x93) & 0x1f) & 1) != 0)) {
          uVar22 = (undefined4)
                   (((ulonglong)(byte)(&DAT_14ca814cf)[(ulonglong)DAT_14ca85550 * 0x3c] &
                    0xffffffffffffff20) >> 5);
        }
        local_150 = CONCAT44(local_150._4_4_,uVar22);
        piVar14 = (int *)(*(longlong *)(param_5 + 0x40) + 8);
        if (*(longlong *)(param_5 + 0x40) == 0) {
          piVar14 = &DAT_14c760db4;
        }
        iVar25 = 8;
        iVar21 = 8;
        if (uVar9 < 0xb) {
          iVar25 = *(int *)(&DAT_14a2f1c74 + (ulonglong)uVar9 * 4);
          iVar21 = *(int *)(&DAT_14a2f1ca0 + (ulonglong)uVar9 * 4);
        }
        local_d8 = *puVar15;
        if ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar14 * 2) * 0xf]
            == 1) {
          iVar25 = iVar21;
        }
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar15 = puVar26 + 0x28;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_158,0x150);
          puVar26 = (undefined8 *)(*puVar7 + 0xf & 0xfffffffffffffff0);
          puVar15 = puVar26 + 0x28;
        }
        *local_158 = (ulonglong)puVar15;
        *puVar26 = &PTR_FUN_14a2f0d90;
        local_128 = puVar26 + 2;
        puVar26[2] = 0;
        *(undefined1 *)(puVar26 + 3) = 1;
        puVar26[4] = 0;
        *(undefined1 *)(puVar26 + 5) = 1;
        puVar26[6] = 0;
        *(undefined1 *)(puVar26 + 7) = 1;
        lVar23 = 0x52;
        do {
          puVar15 = (undefined8 *)((longlong)puVar26 + lVar23 + -0x12);
          *puVar15 = 0;
          puVar15[1] = 0;
          *(undefined4 *)((longlong)puVar26 + lVar23 + -2) = 0xffff0000;
          lVar23 = lVar23 + 0x18;
        } while (lVar23 != 0x112);
        *(undefined4 *)((longlong)puVar26 + 0x114) = 0;
        puVar26[0x20] = 0;
        puVar26[0x21] = 0;
        *(undefined2 *)(puVar26 + 0x22) = 0;
        *(undefined4 *)(puVar26 + 0x23) = 0xffffffff;
        *(undefined4 *)((longlong)puVar26 + 0x11c) = 0xffffffff;
        *(undefined4 *)(puVar26 + 0x24) = 0xffffffff;
        *(undefined4 *)((longlong)puVar26 + 0x124) = 0xffffffff;
        *(undefined4 *)(puVar26 + 0x25) = 0;
        *(undefined2 *)((longlong)puVar26 + 300) = 0;
        puVar26[0x26] = 0;
        iVar21 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar21 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar21 + 1U) {
          FUN_1448cfae8(local_138,iVar21);
        }
        *(undefined8 **)(*local_138 + (longlong)iVar21 * 8) = puVar26;
        lVar23 = FUN_1447e4f80();
        cVar8 = *(char *)(lVar23 + 0x41);
        if (*(char *)(lVar23 + 0x41) == '\x03') {
          cVar8 = '\x02';
        }
        puVar26[2] = *(undefined8 *)(lVar3 + 0x18);
        *(char *)(puVar26 + 3) = cVar8;
        puVar16 = (undefined4 *)(*(longlong *)(param_5 + 0x40) + 8);
        if (*(longlong *)(param_5 + 0x40) == 0) {
          puVar16 = &DAT_14c760db4;
        }
        FUN_140119f90(local_140,&local_c8,*puVar16);
        *(undefined4 *)(puVar26 + 6) = uStack_b8;
        *(undefined4 *)((longlong)puVar26 + 0x34) = uStack_b4;
        *(undefined4 *)(puVar26 + 7) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar26 + 0x3c) = uStack_b0._4_4_;
        *(undefined4 *)(puVar26 + 4) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar26 + 0x24) = local_c8._4_4_;
        *(undefined4 *)(puVar26 + 5) = uStack_c0;
        *(undefined4 *)((longlong)puVar26 + 0x2c) = uStack_bc;
        puVar26[8] = local_160;
        puVar26[9] = 0;
        *(bool *)(puVar26 + 10) = bVar28 && (iVar2 == 2 || iVar2 == 1);
        *(undefined1 *)((longlong)puVar26 + 0x51) = 0;
        *(undefined2 *)((longlong)puVar26 + 0x52) = 0xffff;
        uVar4 = *(undefined8 *)(lVar3 + 0x13818);
        uVar11 = FUN_1417ed4a6();
        FUN_1448e935e(uVar4,&local_c8,uVar11,0);
        FUN_1417ed4a6();
        puVar15 = local_c8;
        lVar23 = CONCAT44(uStack_bc,uStack_c0);
        uVar4 = *(undefined8 *)(lVar3 + 0x13818);
        uVar18 = (uint)(byte)local_150;
        FUN_14157d826();
        FUN_1448e935e(uVar4,&local_c8,&DAT_14ca451d8,iVar25 + uVar18 * 8);
        FUN_14157d826();
        puVar26 = local_c8;
        lVar6 = CONCAT44(uStack_bc,uStack_c0);
        local_f0 = DAT_14ca94df8;
        if (puVar15 == (undefined8 *)0x0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar23 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)puVar15 + 0xd4) * 8);
          if (lVar12 == 0) {
            lVar12 = FUN_1400bafc2(*(longlong *)(lVar23 + 8),
                                   (longlong)*(int *)((longlong)puVar15 + 0xd4),1);
          }
        }
        param_1 = local_110;
        local_150 = lVar23;
        if (puVar26 == (undefined8 *)0x0) {
          lVar23 = 0;
        }
        else {
          lVar5 = *(longlong *)(lVar6 + 8);
          lVar23 = *(longlong *)
                    (*(longlong *)(lVar5 + 0x50) + (longlong)*(int *)((longlong)puVar26 + 0xd4) * 8)
          ;
          if (lVar23 == 0) {
            lVar23 = FUN_1400bafc2(lVar5,(longlong)*(int *)((longlong)puVar26 + 0xd4),1);
          }
        }
        local_e0 = puVar15;
        if (*(char *)(*(longlong *)(lVar3 + 8) + 0x340) == '\x01') {
          uVar20 = *(ulonglong *)(local_160 + 0x84);
        }
        else {
          if (((int)local_130 == 6) && (*(char *)(lVar3 + 0x23e9) != '\0')) {
            uVar20 = *(ulonglong *)(local_160 + 0x84);
            uVar17 = uVar20 >> 0x20;
          }
          else {
            uVar17 = (ulonglong)(uint)(*(int *)(lVar3 + 0x4f4) - *(int *)(lVar3 + 0x4ec));
            uVar20 = (ulonglong)(uint)(*(int *)(lVar3 + 0x4f0) - *(int *)(lVar3 + 0x4e8));
          }
          uVar20 = uVar20 & 0xffffffff | uVar17 << 0x20;
        }
        uStack_7c = uStack_73;
        uStack_80 = local_77;
        local_e8 = lVar6;
        FUN_14157d948();
        FUN_140069376(param_1);
        puVar7 = local_158;
        puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar15 = puVar19 + 0x5a;
        if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
          FUN_140023dd8(local_158,0x2d8);
          puVar19 = (undefined8 *)(*puVar7 + 7 & 0xfffffffffffffff8);
          puVar15 = puVar19 + 0x5a;
        }
        *local_158 = (ulonglong)puVar15;
        local_c8 = local_128;
        uStack_c0 = (undefined4)DAT_14ca46c50;
        uStack_bc = (undefined4)((ulonglong)DAT_14ca46c50 >> 0x20);
        if (DAT_14ca46c50 != 0) {
          LOCK();
          *(int *)(DAT_14ca46c50 + 8) = *(int *)(DAT_14ca46c50 + 8) + 1;
          UNLOCK();
        }
        uStack_b8 = 0x4ca46c08;
        uStack_b4 = 1;
        local_168 = 2;
        FUN_140068f1a(puVar19,&local_c9,&local_c8,1);
        *puVar19 = &PTR_FUN_14a2f0da0;
        puVar19[0x37] = local_128;
        puVar19[0x38] = local_f0;
        puVar19[0x39] = lVar12;
        puVar19[0x3a] = lVar23;
        puVar19[0x3b] = 0;
        puVar19[0x3c] = 0;
        puVar19[0x3d] = 0;
        puVar19[0x3e] = local_d8;
        puVar19[0x3f] = local_f8;
        puVar19[0x40] = local_100;
        puVar19[0x41] = 0;
        puVar19[0x42] = 0;
        puVar19[0x43] = 0;
        puVar19[0x44] = 0;
        puVar19[0x45] = 0;
        puVar19[0x46] = 0;
        puVar19[0x47] = 0;
        puVar19[0x48] = 0;
        puVar19[0x49] = 0;
        puVar19[0x4a] = 0;
        puVar19[0x4b] = 0;
        puVar19[0x4c] = 0;
        *(undefined1 *)(puVar19 + 0x4d) = 0;
        *(undefined4 *)((longlong)puVar19 + 0x269) = uStack_80;
        *(uint *)((longlong)puVar19 + 0x26c) = CONCAT31(uStack_7c,uStack_80._3_1_);
        puVar19[0x50] = 0;
        puVar19[0x4e] = 0;
        puVar19[0x4f] = 0;
        *(undefined4 *)(puVar19 + 0x51) = 1;
        puVar19[0x52] = 0;
        puVar19[0x53] = local_e0;
        puVar19[0x54] = local_150;
        puVar19[0x55] = puVar26;
        puVar19[0x56] = local_e8;
        puVar19[0x57] = lVar3;
        *(int *)(puVar19 + 0x58) = (int)lVar27;
        *(ulonglong *)((longlong)puVar19 + 0x2c4) = uVar20;
        iVar2 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
          FUN_14470e57a(local_118,iVar2);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar19;
        *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1,puVar19);
        lVar23 = local_130;
        puVar24 = local_108;
        uVar18 = local_144;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != lVar23);
  }
  lVar27 = local_120;
  lVar23 = local_140;
  if ((local_120 != 0) && ((*(byte *)(param_5 + 99) & 8) != 0)) {
    FUN_14024386e(*(longlong *)(local_140 + 0x1c0) + 0x60,local_120 + 0x60);
    uStack_c0 = DAT_14c9a52a0;
    local_c8 = DAT_14c9a5298;
    uStack_b4 = DAT_14c9a52a0;
    local_a8 = DAT_14c9a52a0;
    local_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 1;
    uStack_98 = 0;
    local_94 = 0x100000000;
    uStack_bc = (undefined4)DAT_14c967818;
    uStack_b8 = (undefined4)((ulonglong)DAT_14c967818 >> 0x20);
    uStack_b0 = DAT_14c967818;
    FUN_1400e8d41(param_1,*(undefined8 *)(lVar23 + 0x1c0),lVar27);
  }
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140554b90 FUN_140554b90 body=40 status=ok
// SIG undefined FUN_140554b90(void)

undefined8 FUN_140554b90(undefined8 param_1,int param_2)

{
  FUN_140554bb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140554bb8 FUN_140554bb8 body=47 status=ok
// SIG undefined FUN_140554bb8(void)

void FUN_140554bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a78f560;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140554be8 FUN_140554be8 body=26 status=ok
// SIG undefined FUN_140554be8(void)

void FUN_140554be8(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x000140554bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd0))(plVar1);
  return;
}



// FUNCTION 140554c08 FUN_140554c08 body=233 status=ok
// SIG undefined FUN_140554c08(void)

undefined8 FUN_140554c08(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(byte *)((longlong)param_1 + 0x634) & 0x80) == 0) {
LAB_140554ce1:
    uVar4 = 0;
  }
  else {
    if (param_1[0x7a] == 0) {
      if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      iVar1 = FUN_14487fd02(param_1);
      if ((iVar1 != 3) || (param_1[0x1e9] == 0)) goto LAB_140554ce1;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x6b8))(param_1);
      lVar3 = FUN_14497e828(param_1);
      if (lVar3 != 0) {
        FUN_1403ca142();
      }
      if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      iVar1 = FUN_14487fd02(param_1);
      if ((lVar2 != 0) && (iVar1 == 3)) {
        lVar3 = FUN_140554cf2();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_140554ce1;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 140554cf2 FUN_140554cf2 body=228 status=ok
// SIG undefined FUN_140554cf2(void)

longlong FUN_140554cf2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb096d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c328e;
    local_38 = &LAB_147d4cd77;
    local_40 = &LAB_145c25c08;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/Engine",L"SpectatorPawn",&DAT_14cb096d0,&DAT_147d4cd76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb096d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140554dd8 FUN_140554dd8 body=68 status=ok
// SIG undefined FUN_140554dd8(void)

int FUN_140554dd8(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140554e38(param_1,iVar1);
  }
  FUN_140554e1c((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140554e1c FUN_140554e1c body=27 status=ok
// SIG undefined FUN_140554e1c(void)

void FUN_140554e1c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140554e38 FUN_140554e38 body=269 status=ok
// SIG undefined FUN_140554e38(void)

void FUN_140554e38(longlong param_1,int param_2)

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



// FUNCTION 140554f46 FUN_140554f46 body=2235 status=ok
// SIG undefined FUN_140554f46(void)

void FUN_140554f46(int *param_1,longlong *param_2,double *param_3,undefined8 *param_4,char param_5,
                  int param_6,undefined4 param_7,longlong *param_8)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  double *pdVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  int local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  undefined1 local_188;
  double local_180;
  double local_178;
  double local_170;
  double dStack_168;
  undefined1 local_160;
  longlong local_158;
  longlong local_150;
  double local_148;
  double local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar12 = param_3[2];
  dVar13 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[3];
  dVar4 = (double)(float)param_1[1] * 0.01;
  if (param_6 == 0) {
    iVar10 = (int)param_2[1];
    if (0 < (longlong)iVar10) {
      uVar11 = (ulonglong)(iVar10 - 1);
      lVar5 = *param_2;
      pdVar8 = (double *)(lVar5 + 8);
      dVar14 = 0.0;
      uVar9 = 0;
      do {
        lVar6 = (longlong)(int)uVar11 * 0x10;
        dVar14 = dVar14 + (*(double *)(lVar5 + lVar6) * *pdVar8 -
                          *(double *)(lVar5 + 8 + lVar6) * pdVar8[-1]);
        uVar11 = uVar9 & 0xffffffff;
        uVar9 = uVar9 + 1;
        pdVar8 = pdVar8 + 2;
      } while ((longlong)iVar10 != uVar9);
      if (0.0 < dVar14 * 0.5) {
        local_100 = *param_4;
        dStack_e8 = (double)param_4[1];
        local_f0 = dVar3 - dVar4;
        dStack_f8 = dVar12 - dVar4;
        dStack_108 = dVar2 + dVar4;
        local_110 = dVar13 + dVar4;
        local_e0 = 1;
        if (param_8 == (longlong *)0x0) {
          local_1c0 = *param_1;
          local_d8 = *(undefined8 *)(param_1 + 6);
          uStack_d0 = *(undefined8 *)(param_1 + 8);
          local_c0 = *(undefined8 *)(param_1 + 10);
          uStack_b8 = *(undefined8 *)(param_1 + 0xc);
          local_c8 = 0;
          local_b0 = 0;
          local_a8 = 1;
          local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,param_7);
          local_1b8 = 0;
          FUN_14486e48c(*(undefined8 *)(param_1 + 0x10),param_1 + 0x10,&local_d8,&local_110);
        }
        else {
          iVar10 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_8 + 0xc) < iVar10 + 1U) {
            FUN_140555802(param_8,iVar10);
          }
          lVar5 = *param_8;
          lVar6 = (longlong)iVar10 * 0x38;
          *(ulonglong *)(lVar5 + 0x30 + lVar6) = CONCAT71(uStack_df,local_e0);
          pdVar8 = (double *)(lVar5 + 0x20 + lVar6);
          *pdVar8 = local_f0;
          pdVar8[1] = dStack_e8;
          puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
          *puVar1 = local_100;
          puVar1[1] = dStack_f8;
          *(double *)(lVar5 + lVar6) = local_110;
          ((double *)(lVar5 + lVar6))[1] = dStack_108;
        }
      }
    }
    goto LAB_14055539d;
  }
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_140 = (dVar3 + dVar2) * 0.5;
  local_148 = (dVar12 + dVar13) * 0.5;
  uVar15 = 0;
  if (param_5 == '\0') {
    uVar16 = 0x3ff00000;
  }
  else {
    uVar16 = 0;
    uVar15 = 0x3ff00000;
  }
  dVar12 = (dVar12 - dVar13) * (dVar3 - dVar2);
  local_158 = (ulonglong)uVar16 << 0x20;
  local_150 = (ulonglong)uVar15 << 0x20;
  local_1c8 = &local_138;
  FUN_14018dea8(param_2,&local_148);
  local_178 = (param_3[3] - param_3[1]) * 0.5 * (double)((ulonglong)uVar15 << 0x20) + param_3[1];
  local_180 = (param_3[2] - *param_3) * 0.5 * (double)((ulonglong)uVar16 << 0x20) + *param_3;
  local_170 = param_3[2];
  dStack_168 = param_3[3];
  local_160 = 1;
  lVar5 = (longlong)(int)uStack_120;
  if (lVar5 < 1) {
    dVar12 = dVar12 * 0.5 + dVar12 * -0.0001;
    if (dVar12 < 0.0) goto LAB_14055554f;
  }
  else {
    iVar7 = (int)uStack_120 + -1;
    pdVar8 = (double *)(local_128 + 8);
    dVar13 = 0.0;
    lVar6 = 0;
    iVar10 = iVar7;
    do {
      dVar13 = dVar13 + (*(double *)(local_128 + (longlong)iVar10 * 0x10) * *pdVar8 -
                        *(double *)(local_128 + 8 + (longlong)iVar10 * 0x10) * pdVar8[-1]);
      iVar10 = (int)lVar6;
      lVar6 = lVar6 + 1;
      pdVar8 = pdVar8 + 2;
    } while (lVar5 != lVar6);
    dVar12 = dVar12 * 0.5 + dVar12 * -0.0001;
    if (dVar12 < dVar13 * 0.5) {
LAB_14055554f:
      local_100 = *param_4;
      dStack_e8 = (double)param_4[1];
      local_f0 = dStack_168 - dVar4;
      dStack_f8 = local_170 - dVar4;
      dStack_108 = local_178 + dVar4;
      local_110 = local_180 + dVar4;
      local_e0 = 1;
      if (param_8 == (longlong *)0x0) {
        local_1c0 = *param_1;
        local_d8 = *(undefined8 *)(param_1 + 6);
        uStack_d0 = *(undefined8 *)(param_1 + 8);
        local_c0 = *(undefined8 *)(param_1 + 10);
        uStack_b8 = *(undefined8 *)(param_1 + 0xc);
        local_c8 = 0;
        local_b0 = 0;
        local_a8 = 1;
        local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,param_7);
        local_1b8 = 0;
        FUN_14486e48c(*(undefined8 *)(param_1 + 0x10),param_1 + 0x10);
      }
      else {
        iVar10 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar10 + 1U) {
          FUN_140555802(param_8,iVar10);
        }
        lVar5 = *param_8;
        lVar6 = (longlong)iVar10 * 0x38;
        *(ulonglong *)(lVar5 + 0x30 + lVar6) = CONCAT71(uStack_df,local_e0);
        pdVar8 = (double *)(lVar5 + 0x20 + lVar6);
        *pdVar8 = local_f0;
        pdVar8[1] = dStack_e8;
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
        *puVar1 = local_100;
        puVar1[1] = dStack_f8;
        *(double *)(lVar5 + lVar6) = local_110;
        ((double *)(lVar5 + lVar6))[1] = dStack_108;
      }
    }
    else {
      pdVar8 = (double *)(local_128 + 8);
      dVar13 = 0.0;
      lVar6 = 0;
      do {
        dVar13 = dVar13 + (*(double *)(local_128 + (longlong)iVar7 * 0x10) * *pdVar8 -
                          *(double *)(local_128 + 8 + (longlong)iVar7 * 0x10) * pdVar8[-1]);
        iVar7 = (int)lVar6;
        lVar6 = lVar6 + 1;
        pdVar8 = pdVar8 + 2;
      } while (lVar5 != lVar6);
      if (0.0 < dVar13 * 0.5) {
        local_1c0 = param_6 + -1;
        local_1b0 = param_8;
        local_1b8 = param_7;
        local_1c8 = (longlong *)(CONCAT71(local_1c8._1_7_,param_5) ^ 1);
        FUN_140554f46(param_1,&local_128,&local_180);
      }
    }
  }
  local_190 = param_3[3] - (double)((ulonglong)uVar15 << 0x20) * (param_3[3] - param_3[1]) * 0.5;
  local_198 = param_3[2] - (double)((ulonglong)uVar16 << 0x20) * (param_3[2] - *param_3) * 0.5;
  local_1a8 = *param_3;
  dStack_1a0 = param_3[1];
  local_188 = 1;
  lVar5 = (longlong)(int)uStack_130;
  if (lVar5 < 1) {
    if (dVar12 < 0.0) goto LAB_14055562e;
  }
  else {
    iVar7 = (int)uStack_130 + -1;
    pdVar8 = (double *)(local_138 + 8);
    dVar13 = 0.0;
    lVar6 = 0;
    iVar10 = iVar7;
    do {
      dVar13 = dVar13 + (*(double *)(local_138 + (longlong)iVar10 * 0x10) * *pdVar8 -
                        *(double *)(local_138 + 8 + (longlong)iVar10 * 0x10) * pdVar8[-1]);
      iVar10 = (int)lVar6;
      lVar6 = lVar6 + 1;
      pdVar8 = pdVar8 + 2;
    } while (lVar5 != lVar6);
    if (dVar12 < dVar13 * 0.5) {
LAB_14055562e:
      local_100 = *param_4;
      dStack_e8 = (double)param_4[1];
      local_f0 = local_190 - dVar4;
      dStack_f8 = local_198 - dVar4;
      dStack_108 = dStack_1a0 + dVar4;
      local_110 = dVar4 + local_1a8;
      local_e0 = 1;
      if (param_8 == (longlong *)0x0) {
        local_1c0 = *param_1;
        local_d8 = *(undefined8 *)(param_1 + 6);
        uStack_d0 = *(undefined8 *)(param_1 + 8);
        local_c0 = *(undefined8 *)(param_1 + 10);
        uStack_b8 = *(undefined8 *)(param_1 + 0xc);
        local_c8 = 0;
        local_b0 = 0;
        local_a8 = 1;
        local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,param_7);
        local_1b8 = 0;
        FUN_14486e48c(*(undefined8 *)(param_1 + 0x10),param_1 + 0x10,&local_d8,&local_110);
      }
      else {
        iVar10 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar10 + 1U) {
          FUN_140555802(param_8,iVar10);
        }
        lVar5 = *param_8;
        lVar6 = (longlong)iVar10 * 0x38;
        *(ulonglong *)(lVar5 + 0x30 + lVar6) = CONCAT71(uStack_df,local_e0);
        pdVar8 = (double *)(lVar5 + 0x20 + lVar6);
        *pdVar8 = local_f0;
        pdVar8[1] = dStack_e8;
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
        *puVar1 = local_100;
        puVar1[1] = dStack_f8;
        *(double *)(lVar5 + lVar6) = local_110;
        ((double *)(lVar5 + lVar6))[1] = dStack_108;
      }
    }
    else {
      pdVar8 = (double *)(local_138 + 8);
      dVar12 = 0.0;
      lVar6 = 0;
      do {
        dVar12 = dVar12 + (*(double *)(local_138 + (longlong)iVar7 * 0x10) * *pdVar8 -
                          *(double *)(local_138 + 8 + (longlong)iVar7 * 0x10) * pdVar8[-1]);
        iVar7 = (int)lVar6;
        lVar6 = lVar6 + 1;
        pdVar8 = pdVar8 + 2;
      } while (lVar5 != lVar6);
      if (0.0 < dVar12 * 0.5) {
        local_1c0 = param_6 + -1;
        local_1b0 = param_8;
        local_1b8 = param_7;
        local_1c8 = (longlong *)(CONCAT71(local_1c8._1_7_,param_5) ^ 1);
        FUN_140554f46(param_1,&local_138,&local_1a8,param_4);
      }
    }
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_14055539d:
  if ((local_a0 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140555802 FUN_140555802 body=369 status=ok
// SIG undefined FUN_140555802(void)

void FUN_140555802(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140555887;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_140555887:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 140555974 FUN_140555974 body=6983 status=ok
// SIG undefined FUN_140555974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140555974(undefined8 *param_1,longlong *param_2,double *param_3,undefined8 *param_4,
                       double *param_5,byte param_6,undefined1 param_7,double *param_8,
                       undefined8 *param_9)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  undefined4 uVar17;
  double *pdVar18;
  undefined8 uVar19;
  uint uVar20;
  double *pdVar21;
  longlong lVar22;
  undefined4 uVar23;
  uint uVar24;
  double *pdVar25;
  ulonglong uVar26;
  longlong *plVar27;
  double *pdVar28;
  longlong lVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar36;
  double dVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar42;
  double dVar43;
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar66;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStack_468 [32];
  ulonglong local_448;
  longlong *local_440;
  double *local_438;
  undefined8 uStack_430;
  longlong *local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  longlong *local_3f8;
  longlong *local_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double *local_3a8;
  double dStack_3a0;
  double **local_398;
  double local_390 [3];
  double *local_378;
  double dStack_370;
  double **local_368;
  double adStack_360 [3];
  undefined8 **local_348;
  undefined4 local_340;
  undefined8 **local_338;
  undefined4 local_330;
  longlong *local_328;
  int local_320;
  longlong **local_318;
  undefined4 local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  longlong **local_2a8;
  undefined4 local_2a0;
  double *local_298;
  int local_290;
  longlong *local_288;
  undefined8 *local_280;
  double local_278;
  double *pdStack_270;
  double dStack_268;
  double **ppdStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double *local_1f8;
  double dStack_1f0;
  double **local_1e8;
  double dStack_1e0;
  undefined1 auStack_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double *pdStack_170;
  double local_168;
  double **ppdStack_160;
  undefined1 auStack_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_2a0 = 1;
  local_2a8 = &local_288;
  local_288 = param_2;
  local_280 = param_4;
  FUN_1405574d6(*param_1,&local_298);
  auVar44 = _DAT_149934d80;
  dVar38 = DAT_14c8463e0;
  dVar42 = DAT_14c8463e8;
  dVar40 = DAT_14c8463d0;
  dVar70 = DAT_14c8463d8;
  if (local_288 == (longlong *)0x0) {
LAB_140556c97:
    pdVar25 = (double *)&DAT_14c8464f0;
    pdVar21 = (double *)&DAT_14c8464e0;
    pdVar18 = (double *)&DAT_14c8464e8;
  }
  else {
    lVar22 = *local_288;
    pdVar25 = (double *)&DAT_14c8464f0;
    pdVar18 = (double *)&DAT_14c8464e8;
    pdVar21 = (double *)&DAT_14c8464e0;
    if (lVar22 == 0) goto LAB_140556c97;
    iVar16 = *(int *)(lVar22 + 0x1c);
    if (iVar16 == 0xb) {
      plVar27 = (longlong *)(lVar22 + 0x40);
LAB_140555a6d:
      lVar29 = *plVar27;
      if (lVar29 != 0) {
        dVar38 = (double)*(float *)(lVar29 + 0x48);
        dVar42 = (double)*(float *)(lVar29 + 0x4c);
        dVar40 = (double)*(float *)(lVar29 + 0x40);
        dVar70 = (double)*(float *)(lVar29 + 0x44);
      }
    }
    else if (iVar16 == 2) {
      iVar1 = (int)local_288[1];
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar22 + 0x418))) &&
         (lVar29 = (longlong)*(int *)(*(longlong *)(lVar22 + 0x410) + (longlong)iVar1 * 4),
         lVar29 != -1)) {
        plVar27 = (longlong *)(lVar29 * 8 + *(longlong *)(lVar22 + 0x440));
        goto LAB_140555a6d;
      }
    }
    else if (iVar16 == 0xc) {
      plVar27 = (longlong *)(lVar22 + 0x128);
      goto LAB_140555a6d;
    }
    if (iVar16 == 0xb) {
      plVar27 = (longlong *)(lVar22 + 0x40);
LAB_140555aa5:
      lVar22 = *plVar27;
      if (lVar22 != 0) {
        pdVar21 = (double *)(lVar22 + 0x20);
        pdVar18 = (double *)(lVar22 + 0x28);
        pdVar25 = (double *)(lVar22 + 0x30);
      }
    }
    else if (iVar16 == 2) {
      iVar16 = (int)local_288[1];
      if (((-1 < (longlong)iVar16) && (iVar16 < *(int *)(lVar22 + 0x418))) &&
         (lVar29 = (longlong)*(int *)(*(longlong *)(lVar22 + 0x410) + (longlong)iVar16 * 4),
         lVar29 != -1)) {
        plVar27 = (longlong *)(lVar29 * 8 + *(longlong *)(lVar22 + 0x440));
        goto LAB_140555aa5;
      }
    }
    else if (iVar16 == 0xc) {
      plVar27 = (longlong *)(lVar22 + 0x128);
      goto LAB_140555aa5;
    }
  }
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  auVar64 = *(undefined1 (*) [16])(param_3 + 8);
  dVar51 = auVar64._0_8_;
  dVar58 = auVar64._8_8_;
  auVar71 = *(undefined1 (*) [16])(param_3 + 10);
  dVar32 = auVar71._0_8_;
  auVar62 = minpd(_DAT_149934d80,auVar64);
  auVar67 = minpd(ZEXT816(0x3ff0000000000000),auVar71);
  auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
  auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
  iVar16 = movmskpd((int)pdVar18,auVar63);
  auVar62._8_8_ = -(ulonglong)(auVar67._8_8_ < 0.0);
  auVar62._0_8_ = -(ulonglong)(auVar67._0_8_ < 0.0);
  uVar20 = movmskpd((int)pdVar21,auVar62);
  if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
    dVar60 = *param_3;
    dVar61 = param_3[1];
    dVar39 = param_3[3];
    dVar53 = param_3[3];
    dVar43 = param_3[1];
    dVar52 = param_3[1];
    dVar7 = param_3[2];
    dVar8 = param_3[3];
    dVar59 = param_3[2];
    dVar66 = param_3[2];
    dVar69 = dVar40 * dVar66 * 1.0 + dVar42 * dVar52 + dVar38 * *param_3 * -1.0 + dVar70 * dVar53;
    dVar51 = *pdVar21 * dVar51;
    dVar58 = *pdVar18 * dVar58;
    dVar46 = *pdVar25 * dVar32;
    dVar50 = auVar71._8_8_ * 0.0;
    dVar31 = dVar58 * dVar60 - dVar51 * dVar61;
    dVar36 = dVar46 * dVar61 - dVar58 * dVar7;
    dVar37 = dVar51 * dVar7 - dVar46 * dVar60;
    dVar54 = dVar50 * dVar8 - dVar50 * dVar8;
    dVar36 = dVar36 + dVar36;
    dVar37 = dVar37 + dVar37;
    dVar31 = dVar31 + dVar31;
    dVar54 = dVar54 + dVar54;
    local_2e8 = (dVar31 * dVar61 - dVar7 * dVar37) + dVar39 * dVar36 + dVar51 + param_3[4];
    dStack_2e0 = (dVar36 * dVar7 - dVar31 * dVar60) + dVar53 * dVar37 + dVar58 + param_3[5];
    local_2d8 = (dVar37 * dVar60 - dVar61 * dVar36) + dVar39 * dVar31 + dVar46 + param_3[6];
    dStack_2d0 = (dVar54 * dVar8 - dVar54 * dVar8) + dVar53 * dVar54 + dVar50 + param_3[7];
    local_308._8_4_ = SUB84(dVar69,0);
    local_308._0_8_ =
         dVar70 * dVar59 * -1.0 + dVar38 * dVar43 + dVar42 * *param_3 * 1.0 + dVar40 * dVar39;
    local_308._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
    local_2f8._8_8_ =
         dVar38 * dVar66 * -1.0 + ((*param_3 * dVar40 * -1.0 + dVar42 * dVar53) - dVar70 * dVar52);
    local_2f8._0_8_ =
         dVar42 * dVar59 * 1.0 + ((*param_3 * dVar70 * 1.0 + dVar38 * dVar39) - dVar40 * dVar43);
  }
  else {
    dVar52 = *param_3;
    dVar59 = param_3[1];
    dVar53 = param_3[2];
    dVar66 = dVar59 + dVar59;
    dVar69 = dVar53 + dVar53;
    dVar43 = dVar52 * (dVar52 + dVar52);
    local_1f8 = (double *)(((double)DAT_149934d80 - (dVar53 * dVar69 + dVar59 * dVar66)) * dVar51);
    dVar39 = (DAT_149934d80._8_8_ - (dVar53 * dVar69 + dVar43)) * dVar58;
    dVar53 = param_3[3];
    dVar31 = dVar69 * dVar53;
    dVar54 = (dVar52 + dVar52) * param_3[3];
    dVar53 = dVar66 * dVar53;
    dStack_1b0 = (dVar69 * dVar59 - dVar54) * dVar32;
    local_1b8 = (dVar53 + *param_3 * dVar69) * dVar32;
    dStack_1f0 = (dVar66 * dVar52 + dVar31) * dVar51;
    local_1c8 = (dVar69 * dVar59 + dVar54) * dVar58;
    local_1a8 = (1.0 - (dVar43 + dVar59 * dVar66)) * dVar32;
    local_1e8 = (double **)((*param_3 * dVar69 - dVar53) * dVar51);
    dStack_1e0 = 0.0;
    auStack_1d8._8_4_ = SUB84(dVar39,0);
    auStack_1d8._0_8_ = (dVar66 * dVar52 - dVar31) * dVar58;
    auStack_1d8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = param_3[6];
    uStack_180 = 0x3ff0000000000000;
    dVar43 = dVar70 + dVar70;
    dVar53 = dVar38 + dVar38;
    dVar39 = dVar40 * (dVar40 + dVar40);
    local_278 = (double)DAT_149934d80 - (dVar38 * dVar53 + dVar70 * dVar43);
    dVar38 = DAT_149934d80._8_8_ - (dVar38 * dVar53 + dVar39);
    local_228 = 1.0 - (dVar39 + dVar70 * dVar43);
    dVar39 = (dVar40 + dVar40) * dVar42;
    pdStack_270 = (double *)(dVar43 * dVar40 + dVar53 * dVar42);
    local_248 = dVar53 * dVar70 + dVar39;
    dStack_268 = dVar40 * dVar53 - dVar43 * dVar42;
    ppdStack_260 = (double **)0x0;
    local_258._8_4_ = SUB84(dVar38,0);
    local_258._0_8_ = dVar43 * dVar40 - dVar53 * dVar42;
    local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    uStack_240 = 0;
    local_238._8_8_ = dVar53 * dVar70 - dVar39;
    local_238._0_8_ = dVar40 * dVar53 + dVar43 * dVar42;
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *pdVar21;
    dStack_210 = *pdVar18;
    local_208 = *pdVar25;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar67._8_8_ = -(ulonglong)(0.0 <= dVar58);
    auVar67._0_8_ = -(ulonglong)(0.0 <= dVar51);
    auVar62 = blendvpd(_DAT_149936790,auVar44,auVar67);
    uVar30 = -(ulonglong)(0.0 <= dVar32 * 1.0);
    dVar38 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
    dVar42 = auVar62._0_8_;
    local_168 = local_168 * dVar42;
    pdStack_170 = (double *)((double)pdStack_170 * dVar42);
    local_178 = local_178 * dVar42;
    dVar42 = auVar62._8_8_;
    local_148 = local_148 * dVar42;
    auStack_158._8_8_ = (double)auStack_158._8_8_ * dVar42;
    auStack_158._0_8_ = dVar42 * (double)auStack_158._0_8_;
    local_128 = local_128 * dVar38;
    local_138._8_8_ = (double)local_138._8_8_ * dVar38;
    local_138._0_8_ = dVar38 * (double)local_138._0_8_;
    FUN_14481fd10(&local_378,&local_178);
    dVar38 = (double)local_368 * (double)local_368 + (double)local_378 * (double)local_378;
    dVar42 = adStack_360[0] * adStack_360[0] + dStack_370 * dStack_370;
    auVar47._0_8_ = dVar38 + dVar42;
    auVar47._8_8_ = dVar38 + dVar42;
    auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
    auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
    auVar62 = sqrtpd(auVar47,auVar47);
    auVar44 = divpd(auVar44,auVar62);
    auVar57._0_8_ = auVar44._0_8_ * (double)local_368;
    auVar57._8_8_ = auVar44._8_8_ * adStack_360[0];
    local_2f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar33);
    local_308._8_8_ =
         (ulonglong)(dStack_370 * auVar44._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
    local_308._0_8_ =
         (ulonglong)((double)local_378 * auVar44._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
    local_2e8 = local_118;
    dStack_2e0 = dStack_110;
    local_2d8 = local_108;
    dStack_2d0 = 0.0;
  }
  dStack_2b0 = auVar71._8_8_ * 0.0;
  local_2b8 = dVar32 * 1.0;
  local_310 = 1;
  local_318 = &local_288;
  local_2c8 = auVar64;
  FUN_14075aa78(*param_1,&local_178);
  uVar74 = (undefined4)DAT_149934d80;
  uVar75 = DAT_149934d80._4_4_;
  uVar76 = DAT_149934d80._8_4_;
  uVar77 = DAT_149934d80._12_4_;
  if (local_148._0_1_ == '\0') {
    local_418 = ZEXT816(0);
    local_438 = (double *)0x0;
    local_408 = 0.0;
    dStack_400 = 0.0;
    local_428 = (longlong *)0x0;
  }
  else {
    dVar40 = *param_3;
    dVar70 = param_3[1];
    dVar51 = param_3[2];
    dVar32 = param_3[8];
    dVar58 = param_3[9];
    dVar53 = param_3[10];
    dVar69 = dVar51 + dVar51;
    dVar59 = dVar40 + dVar40;
    dVar66 = dVar70 + dVar70;
    dVar38 = param_3[3];
    dVar42 = param_3[3];
    dVar52 = dVar66 * dVar38;
    auVar44._0_8_ = (dVar52 + *param_3 * dVar69) * dVar53;
    auVar44._8_8_ = (dVar59 * dVar42 + *param_3 * dVar59) * param_3[0xb];
    dVar38 = dVar69 * dVar38;
    dVar42 = dVar59 * dVar42;
    auVar64._0_8_ = ((double)DAT_149934d80 - (dVar69 * dVar51 + dVar66 * dVar70)) * dVar32;
    auVar64._8_8_ = (DAT_149934d80._8_8_ - (dVar69 * dVar51 + dVar59 * dVar40)) * dVar58;
    dVar39 = (dVar38 + dVar66 * dVar40) * dVar32;
    dVar43 = (dVar42 + dVar69 * dVar70) * dVar58;
    dVar32 = (*param_3 * dVar69 - dVar52) * dVar32;
    auVar71._0_8_ = dVar58 * (dVar66 * dVar40 - dVar38);
    auVar71._8_8_ = dVar53 * (dVar69 * dVar70 - dVar42);
    auVar44 = blendpd(auVar44,auVar71,2);
    auVar71 = blendpd(auVar71,auVar64,2);
    dVar53 = (1.0 - (dVar59 * dVar40 + dVar66 * dVar70)) * dVar53;
    dVar66 = (local_178 + (double)ppdStack_160) * 0.5;
    dVar69 = ((double)pdStack_170 + (double)auStack_158._0_8_) * 0.5;
    dVar51 = (local_168 + (double)auStack_158._8_8_) * 0.5;
    dVar58 = ((double)ppdStack_160 - local_178) * 0.5;
    dVar52 = ((double)auStack_158._0_8_ - (double)pdStack_170) * 0.5;
    dVar59 = ((double)auStack_158._8_8_ - local_168) * 0.5;
    dVar38 = dVar51 * auVar44._0_8_ + dVar69 * auVar71._0_8_ + dVar66 * auVar64._0_8_ + param_3[4];
    dVar42 = dVar51 * auVar44._8_8_ + dVar69 * auVar71._8_8_ + dVar66 * dVar39 + param_3[5];
    dVar40 = ABS(dVar59 * auVar44._0_8_) + ABS(auVar71._0_8_ * dVar52) + ABS(dVar58 * auVar64._0_8_)
    ;
    dVar70 = ABS(dVar59 * auVar44._8_8_) + ABS(auVar71._8_8_ * dVar52) + ABS(dVar58 * dVar39);
    local_408 = dVar38 - dVar40;
    dStack_400 = dVar42 - dVar70;
    dVar70 = dVar70 + dVar42;
    local_418._8_4_ = SUB84(dVar70,0);
    local_418._0_8_ = dVar40 + dVar38;
    local_418._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
    dVar38 = dVar51 * dVar53 + dVar69 * dVar43 + dVar66 * dVar32 + param_3[6];
    dVar42 = ABS(dVar52 * dVar43) + ABS(dVar58 * dVar32) + ABS(dVar59 * dVar53);
    local_428 = (longlong *)(dVar38 - dVar42);
    local_438 = (double *)(dVar38 + dVar42);
  }
  uStack_420 = 0;
  uStack_430 = 0;
  local_330 = 1;
  local_338 = &local_280;
  pdVar21 = (double *)FUN_1405574d6(*param_1,&local_328);
  dVar38 = DAT_14c8463e0;
  dVar42 = DAT_14c8463e8;
  dVar40 = DAT_14c8463d0;
  dVar70 = DAT_14c8463d8;
  if ((local_280 == (undefined8 *)0x0) || (pdVar21 = (double *)*local_280, pdVar21 == (double *)0x0)
     ) {
    pdVar18 = (double *)&DAT_14c8464e0;
    pdVar25 = (double *)&DAT_14c8464e8;
    pdVar28 = (double *)&DAT_14c8464f0;
    goto LAB_140556037;
  }
  iVar16 = *(int *)((longlong)pdVar21 + 0x1c);
  if (iVar16 == 0xb) {
    pdVar18 = pdVar21 + 8;
LAB_140555fc6:
    dVar51 = *pdVar18;
    if (dVar51 != 0.0) {
      dVar38 = (double)*(float *)((longlong)dVar51 + 0x48);
      dVar42 = (double)*(float *)((longlong)dVar51 + 0x4c);
      dVar40 = (double)*(float *)((longlong)dVar51 + 0x40);
      dVar70 = (double)*(float *)((longlong)dVar51 + 0x44);
    }
  }
  else if (iVar16 == 2) {
    iVar1 = *(int *)(local_280 + 1);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(pdVar21 + 0x83))) &&
       (lVar22 = (longlong)*(int *)((longlong)pdVar21[0x82] + (longlong)iVar1 * 4), lVar22 != -1)) {
      pdVar18 = (double *)(lVar22 * 8 + (longlong)pdVar21[0x88]);
      goto LAB_140555fc6;
    }
  }
  else if (iVar16 == 0xc) {
    pdVar18 = pdVar21 + 0x25;
    goto LAB_140555fc6;
  }
  pdVar18 = (double *)&DAT_14c8464e0;
  pdVar25 = (double *)&DAT_14c8464e8;
  pdVar28 = (double *)&DAT_14c8464f0;
  if (iVar16 == 0xb) {
    pdVar21 = pdVar21 + 8;
  }
  else if (iVar16 == 2) {
    iVar16 = *(int *)(local_280 + 1);
    if ((((longlong)iVar16 < 0) || (*(int *)(pdVar21 + 0x83) <= iVar16)) ||
       (lVar22 = (longlong)*(int *)((longlong)pdVar21[0x82] + (longlong)iVar16 * 4), lVar22 == -1))
    goto LAB_140556037;
    pdVar21 = (double *)(lVar22 * 8 + (longlong)pdVar21[0x88]);
  }
  else {
    if (iVar16 != 0xc) {
      uVar74 = 0;
      uVar75 = 0x3ff00000;
      uVar76 = 0;
      uVar77 = 0x3ff00000;
      goto LAB_140556037;
    }
    pdVar21 = pdVar21 + 0x25;
    uVar74 = 0;
    uVar75 = 0x3ff00000;
    uVar76 = 0;
    uVar77 = 0x3ff00000;
  }
  pdVar21 = (double *)*pdVar21;
  if (pdVar21 != (double *)0x0) {
    pdVar18 = pdVar21 + 4;
    pdVar25 = pdVar21 + 5;
    pdVar21 = pdVar21 + 6;
    pdVar28 = pdVar21;
  }
LAB_140556037:
  auVar44 = *(undefined1 (*) [16])(param_5 + 8);
  dVar51 = auVar44._0_8_;
  dVar58 = auVar44._8_8_;
  auVar64 = *(undefined1 (*) [16])(param_5 + 10);
  dVar32 = auVar64._0_8_;
  dVar53 = auVar64._8_8_;
  auVar55._4_4_ = uVar75;
  auVar55._0_4_ = uVar74;
  auVar55._12_4_ = uVar77;
  auVar55._8_4_ = uVar76;
  auVar71 = minpd(auVar55,auVar44);
  auVar64 = minpd(ZEXT816(0x3ff0000000000000),auVar64);
  auVar56._8_8_ = -(ulonglong)(auVar71._8_8_ < 0.0);
  auVar56._0_8_ = -(ulonglong)(auVar71._0_8_ < 0.0);
  iVar16 = movmskpd((int)pdVar21,auVar56);
  auVar65._8_8_ = -(ulonglong)(auVar64._8_8_ < 0.0);
  auVar65._0_8_ = -(ulonglong)(auVar64._0_8_ < 0.0);
  uVar20 = movmskpd((int)pdVar18,auVar65);
  if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
    dVar54 = *param_5;
    dVar37 = param_5[1];
    dVar39 = param_5[3];
    dVar43 = param_5[3];
    dVar52 = param_5[1];
    dVar59 = param_5[1];
    dVar60 = param_5[2];
    dVar61 = param_5[3];
    dVar69 = param_5[2];
    dVar66 = param_5[2];
    dVar31 = dVar40 * dVar66 * 1.0 + dVar42 * dVar59 + dVar38 * *param_5 * -1.0 + dVar70 * dVar43;
    local_3c8._8_4_ = SUB84(dVar31,0);
    local_3c8._0_8_ =
         dVar70 * dVar69 * -1.0 + dVar38 * dVar52 + dVar42 * *param_5 * 1.0 + dVar40 * dVar39;
    local_3c8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    dVar59 = dVar38 * dVar66 * -1.0 +
             ((*param_5 * dVar40 * -1.0 + dVar42 * dVar43) - dVar70 * dVar59);
    local_3b8._8_4_ = SUB84(dVar59,0);
    local_3b8._0_8_ =
         dVar42 * dVar69 * 1.0 + ((*param_5 * dVar70 * 1.0 + dVar38 * dVar39) - dVar40 * dVar52);
    local_3b8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    dVar51 = *pdVar18 * dVar51;
    dVar58 = *pdVar25 * dVar58;
    dVar52 = *pdVar28 * dVar32;
    dVar59 = dVar53 * 0.0;
    dVar38 = dVar58 * dVar54 - dVar51 * dVar37;
    dVar40 = dVar52 * dVar37 - dVar58 * dVar60;
    dVar70 = dVar51 * dVar60 - dVar52 * dVar54;
    dVar42 = dVar59 * dVar61 - dVar59 * dVar61;
    dVar40 = dVar40 + dVar40;
    dVar70 = dVar70 + dVar70;
    dVar38 = dVar38 + dVar38;
    dVar42 = dVar42 + dVar42;
    dStack_110 = (dVar40 * dVar60 - dVar38 * dVar54) + dVar43 * dVar70 + dVar58 + param_5[5];
    local_3e8 = (dVar70 * dVar54 - dVar37 * dVar40) + dVar39 * dVar38 + dVar52 + param_5[6];
    dStack_3e0 = (dVar42 * dVar61 - dVar42 * dVar61) + dVar43 * dVar42 + dVar59 + param_5[7];
    local_3d8._8_4_ = SUB84(dVar53 * 0.0,0);
    local_3d8._0_8_ = dVar32 * 1.0;
    local_3d8._12_4_ = (int)((ulonglong)(dVar53 * 0.0) >> 0x20);
    dVar38 = (dVar38 * dVar37 - dVar60 * dVar70) + dVar39 * dVar40 + dVar51 + param_5[4];
  }
  else {
    dVar52 = *param_5;
    dVar59 = param_5[1];
    dVar39 = param_5[2];
    dVar66 = dVar59 + dVar59;
    dVar69 = dVar39 + dVar39;
    dVar37 = dVar52 * (dVar52 + dVar52);
    local_1f8 = (double *)
                (((double)CONCAT44(uVar75,uVar74) - (dVar39 * dVar69 + dVar59 * dVar66)) * dVar51);
    dVar43 = ((double)CONCAT44(uVar77,uVar76) - (dVar39 * dVar69 + dVar37)) * dVar58;
    dVar39 = param_5[3];
    dVar31 = dVar69 * dVar39;
    dVar54 = (dVar52 + dVar52) * param_5[3];
    dVar39 = dVar66 * dVar39;
    dStack_1b0 = (dVar69 * dVar59 - dVar54) * dVar32;
    local_1b8 = (dVar39 + *param_5 * dVar69) * dVar32;
    dStack_1f0 = (dVar66 * dVar52 + dVar31) * dVar51;
    local_1c8 = (dVar69 * dVar59 + dVar54) * dVar58;
    local_1a8 = (1.0 - (dVar37 + dVar59 * dVar66)) * dVar32;
    local_1e8 = (double **)((*param_5 * dVar69 - dVar39) * dVar51);
    dStack_1e0 = 0.0;
    auStack_1d8._8_4_ = SUB84(dVar43,0);
    auStack_1d8._0_8_ = (dVar66 * dVar52 - dVar31) * dVar58;
    auStack_1d8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_5[4];
    dStack_190 = param_5[5];
    local_188 = param_5[6];
    uStack_180 = 0x3ff0000000000000;
    dVar52 = dVar70 + dVar70;
    dVar59 = dVar38 + dVar38;
    dVar39 = dVar40 * (dVar40 + dVar40);
    local_278 = (double)CONCAT44(uVar75,uVar74) - (dVar38 * dVar59 + dVar70 * dVar52);
    local_228 = 1.0 - (dVar39 + dVar70 * dVar52);
    dVar43 = (dVar40 + dVar40) * dVar42;
    pdStack_270 = (double *)(dVar52 * dVar40 + dVar59 * dVar42);
    local_248 = dVar59 * dVar70 + dVar43;
    dVar43 = dVar59 * dVar70 - dVar43;
    dStack_268 = dVar40 * dVar59 - dVar52 * dVar42;
    ppdStack_260 = (double **)0x0;
    local_258._8_8_ = (double)CONCAT44(uVar77,uVar76) - (dVar38 * dVar59 + dVar39);
    local_258._0_8_ = dVar52 * dVar40 - dVar59 * dVar42;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar43,0);
    local_238._0_8_ = dVar52 * dVar42 + dVar40 * dVar59;
    local_238._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0x3ff0000000000000;
    local_218 = *pdVar18;
    dStack_210 = *pdVar25;
    local_208 = *pdVar28;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar58);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar51);
    auVar6._4_4_ = uVar75;
    auVar6._0_4_ = uVar74;
    auVar6._8_4_ = uVar76;
    auVar6._12_4_ = uVar77;
    auVar64 = blendvpd(_DAT_149936790,auVar6,auVar34);
    local_3d8._8_4_ = SUB84(dVar53 * 0.0,0);
    local_3d8._0_8_ = dVar32 * 1.0;
    local_3d8._12_4_ = (int)((ulonglong)(dVar53 * 0.0) >> 0x20);
    uVar30 = -(ulonglong)(0.0 <= dVar32 * 1.0);
    dVar38 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
    dVar42 = auVar64._0_8_;
    local_168 = local_168 * dVar42;
    pdStack_170 = (double *)((double)pdStack_170 * dVar42);
    local_178 = local_178 * dVar42;
    dVar42 = auVar64._8_8_;
    local_148 = local_148 * dVar42;
    auStack_158._8_8_ = (double)auStack_158._8_8_ * dVar42;
    auStack_158._0_8_ = dVar42 * (double)auStack_158._0_8_;
    local_128 = local_128 * dVar38;
    local_138._8_8_ = (double)local_138._8_8_ * dVar38;
    local_138._0_8_ = dVar38 * (double)local_138._0_8_;
    FUN_14481fd10(&local_378,&local_178);
    dVar38 = (double)local_368 * (double)local_368 + (double)local_378 * (double)local_378;
    dVar42 = adStack_360[0] * adStack_360[0] + dStack_370 * dStack_370;
    auVar45._0_8_ = dVar38 + dVar42;
    auVar45._8_8_ = dVar38 + dVar42;
    auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
    auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
    auVar64 = sqrtpd(auVar45,auVar45);
    auVar48._4_4_ = uVar75;
    auVar48._0_4_ = uVar74;
    auVar48._12_4_ = uVar77;
    auVar48._8_4_ = uVar76;
    auVar64 = divpd(auVar48,auVar64);
    auVar49._0_8_ = auVar64._0_8_ * (double)local_368;
    auVar49._8_8_ = auVar64._8_8_ * adStack_360[0];
    local_3c8._8_8_ =
         (ulonglong)(dStack_370 * auVar64._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
    local_3c8._0_8_ =
         (ulonglong)((double)local_378 * auVar64._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
    local_3b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar35);
    local_3e8 = local_108;
    dStack_3e0 = 0.0;
    dVar38 = local_118;
  }
  uVar73 = (undefined4)((ulonglong)dStack_110 >> 0x20);
  local_340 = 1;
  uVar23 = SUB84(&local_178,0);
  local_348 = &local_280;
  uVar17 = FUN_14075aa78(*param_1);
  dVar40 = dStack_3e0;
  dVar42 = local_3e8;
  if (local_148._0_1_ == '\0') {
    dVar70 = 0.0;
    dVar51 = 0.0;
    dVar32 = 0.0;
    dVar58 = 0.0;
    dVar53 = 0.0;
    dVar39 = 0.0;
  }
  else {
    dVar39 = *param_5;
    dVar52 = param_5[1];
    dVar58 = param_5[2];
    dVar59 = param_5[8];
    dVar66 = param_5[9];
    dVar43 = param_5[10];
    dVar32 = dVar58 + dVar58;
    dVar54 = dVar39 + dVar39;
    dVar37 = dVar52 + dVar52;
    dVar70 = param_5[3];
    dVar51 = param_5[3];
    dVar60 = dVar37 * dVar70;
    auVar72._0_8_ = (dVar60 + *param_5 * dVar32) * dVar43;
    auVar72._8_8_ = (dVar54 * dVar51 + *param_5 * dVar54) * param_5[0xb];
    dVar70 = dVar32 * dVar70;
    dVar51 = dVar54 * dVar51;
    dVar53 = ((double)CONCAT44(uVar75,uVar74) - (dVar32 * dVar58 + dVar37 * dVar52)) * dVar59;
    dVar58 = ((double)CONCAT44(uVar77,uVar76) - (dVar32 * dVar58 + dVar54 * dVar39)) * dVar66;
    dVar69 = (dVar70 + dVar37 * dVar39) * dVar59;
    dVar31 = (dVar51 + dVar32 * dVar52) * dVar66;
    dVar59 = (*param_5 * dVar32 - dVar60) * dVar59;
    auVar68._0_8_ = dVar66 * (dVar37 * dVar39 - dVar70);
    auVar68._8_8_ = dVar43 * (dVar32 * dVar52 - dVar51);
    auVar71 = blendpd(auVar72,auVar68,2);
    auVar5._8_4_ = SUB84(dVar58,0);
    auVar5._0_8_ = dVar53;
    auVar5._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    auVar64 = blendpd(auVar68,auVar5,2);
    dVar43 = (1.0 - (dVar54 * dVar39 + dVar37 * dVar52)) * dVar43;
    dVar32 = (local_178 + (double)ppdStack_160) * 0.5;
    dVar58 = ((double)pdStack_170 + (double)auStack_158._0_8_) * 0.5;
    dVar52 = (local_168 + (double)auStack_158._8_8_) * 0.5;
    dVar37 = ((double)ppdStack_160 - local_178) * 0.5;
    dVar60 = ((double)auStack_158._0_8_ - (double)pdStack_170) * 0.5;
    dVar61 = ((double)auStack_158._8_8_ - local_168) * 0.5;
    dVar66 = dVar52 * auVar71._0_8_ + dVar58 * auVar64._0_8_ + dVar32 * dVar53 + param_5[4];
    dVar54 = dVar52 * auVar71._8_8_ + dVar58 * auVar64._8_8_ + dVar32 * dVar69 + param_5[5];
    dVar70 = ABS(dVar61 * auVar71._0_8_) + ABS(auVar64._0_8_ * dVar60) + ABS(dVar37 * dVar53);
    dVar51 = ABS(dVar61 * auVar71._8_8_) + ABS(auVar64._8_8_ * dVar60) + ABS(dVar37 * dVar69);
    dVar53 = dVar66 - dVar70;
    dVar39 = dVar54 - dVar51;
    dVar70 = dVar70 + dVar66;
    dVar51 = dVar51 + dVar54;
    dVar58 = dVar52 * dVar43 + dVar58 * dVar31 + dVar32 * dVar59 + param_5[6];
    dVar43 = ABS(dVar60 * dVar31) + ABS(dVar37 * dVar59) + ABS(dVar61 * dVar43);
    dVar32 = dVar58 - dVar43;
    dVar58 = dVar58 + dVar43;
  }
  auVar4._8_4_ = (int)-(ulonglong)(dVar51 < dStack_400);
  auVar4._0_8_ = -(ulonglong)(dVar70 < local_408);
  auVar4._12_4_ = (int)(-(ulonglong)(dVar51 < dStack_400) >> 0x20);
  uVar20 = movmskpd(uVar17,auVar4);
  uVar30 = 0;
  uVar26 = 0;
  uVar13 = local_3b8._0_8_;
  uVar14 = local_3b8._8_8_;
  if ((uVar20 & 1) == 0) {
    auVar41._8_8_ = -(ulonglong)((double)local_418._8_8_ < dVar39);
    auVar41._0_8_ = -(ulonglong)((double)local_418._0_8_ < dVar53);
    uVar24 = movmskpd(uVar23,auVar41);
    if ((((uVar24 & 1) == 0) && ((byte)((byte)uVar20 >> 1) == 0)) &&
       ((uVar30 = uVar26, (byte)((byte)uVar24 >> 1) == 0 &&
        (((double)local_428 <= dVar58 && (dVar32 <= (double)local_438)))))) {
      if ((longlong)local_320 == 0) {
        uVar30 = 0;
      }
      else {
        local_3f8 = local_328 + local_320;
        local_408 = (double)CONCAT44(local_408._4_4_,param_6 + 1);
        local_448 = 0;
        local_428 = param_9 + 4;
        uVar11 = local_3c8._0_8_;
        uVar12 = local_3c8._8_8_;
        uVar9 = local_3d8._0_8_;
        uVar10 = local_3d8._8_8_;
        plVar27 = local_328;
        do {
          lVar22 = *plVar27;
          local_3f0 = plVar27;
          if (((lVar22 != 0) &&
              (plVar27 = *(longlong **)(lVar22 + 0x10), plVar27 != (longlong *)0x0)) &&
             ((char)plVar27[3] == '\x01')) {
            local_178 = (double)uVar11;
            pdStack_170 = (double *)uVar12;
            local_168 = (double)uVar13;
            ppdStack_160 = (double **)uVar14;
            auStack_158._8_4_ = SUB84(dStack_110,0);
            auStack_158._0_8_ = dVar38;
            auStack_158._12_4_ = uVar73;
            local_148 = dVar42;
            dStack_140 = dVar40;
            local_128 = (double)uVar9;
            uStack_120 = uVar10;
            local_138 = auVar44;
            (**(code **)(*plVar27 + 0x88))(plVar27,&local_1f8,&local_178);
            local_1f8 = (double *)((double)local_1f8 + ABS(*param_8));
            dStack_1f0 = dStack_1f0 + ABS(param_8[1]);
            local_1e8 = (double **)((double)local_1e8 + ABS(param_8[2]));
            dStack_1e0 = dStack_1e0 - ABS(*param_8);
            adStack_360[1] = (double)auStack_1d8._0_8_ - ABS(param_8[1]);
            auStack_1d8._8_8_ = (double)auStack_1d8._8_8_ - ABS(param_8[2]);
            auStack_1d8._0_8_ = adStack_360[1];
            local_368 = local_1e8;
            local_378 = local_1f8;
            dStack_370 = dStack_1f0;
            adStack_360[2] = (double)auStack_1d8._8_8_;
            adStack_360[0] = dStack_1e0;
            if ((longlong)local_290 != 0) {
              local_418._0_8_ = lVar22;
              local_438 = local_298 + local_290;
              pdVar21 = local_298;
              local_440 = plVar27;
              do {
                dVar70 = *pdVar21;
                if ((dVar70 != 0.0) && ((*(uint *)((longlong)dVar70 + 0x5c) & local_408._0_4_) != 0)
                   ) {
                  plVar2 = *(longlong **)((longlong)dVar70 + 0x10);
                  pdVar18 = (double *)local_308;
                  pdVar25 = &local_178;
                  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                    *pdVar25 = *pdVar18;
                    pdVar18 = pdVar18 + 1;
                    pdVar25 = pdVar25 + 1;
                  }
                  (**(code **)(*plVar2 + 0x88))(plVar2,&local_1f8);
                  local_1f8 = (double *)((double)local_1f8 + ABS(*param_8));
                  dStack_1f0 = dStack_1f0 + ABS(param_8[1]);
                  local_1e8 = (double **)((double)local_1e8 + ABS(param_8[2]));
                  dStack_1e0 = dStack_1e0 - ABS(*param_8);
                  local_390[1] = (double)auStack_1d8._0_8_ - ABS(param_8[1]);
                  auStack_1d8._8_8_ = (double)auStack_1d8._8_8_ - ABS(param_8[2]);
                  auStack_1d8._0_8_ = local_390[1];
                  local_398 = local_1e8;
                  local_3a8 = local_1f8;
                  dStack_3a0 = dStack_1f0;
                  local_390[2] = (double)auStack_1d8._8_8_;
                  local_390[0] = dStack_1e0;
                  lVar22 = 0;
                  do {
                    if ((adStack_360[lVar22] <= (double)(&local_3a8)[lVar22] &&
                         (double)(&local_3a8)[lVar22] != adStack_360[lVar22]) ||
                       (local_390[lVar22] <= (double)(&local_378)[lVar22] &&
                        (double)(&local_378)[lVar22] != local_390[lVar22])) goto LAB_1405569cd;
                    lVar22 = lVar22 + 1;
                  } while (lVar22 != 3);
                  dStack_268 = (double)CONCAT71(dStack_268._1_7_,param_7);
                  local_178 = (double)uVar11;
                  pdStack_170 = (double *)uVar12;
                  local_168 = (double)uVar13;
                  ppdStack_160 = (double **)uVar14;
                  auStack_158._0_8_ = dVar38;
                  local_148 = dVar42;
                  dStack_140 = dVar40;
                  local_128 = (double)uVar9;
                  uStack_120 = uVar10;
                  local_278 = dVar70;
                  pdStack_270 = (double *)local_308;
                  ppdStack_260 = &local_1f8;
                  local_138 = auVar44;
                  cVar15 = FUN_140557745(plVar27,&local_178,&local_278);
                  plVar27 = local_440;
                  if (cVar15 != '\0') {
                    pdStack_170 = local_3a8;
                    local_168 = dStack_3a0;
                    ppdStack_160 = local_398;
                    auStack_158._8_8_ = local_390[1];
                    auStack_158._0_8_ = local_390[0];
                    local_148 = local_390[2];
                    local_278 = (double)local_418._0_8_;
                    ppdStack_260 = local_368;
                    pdStack_270 = local_378;
                    dStack_268 = dStack_370;
                    local_258._8_8_ = adStack_360[1];
                    local_258._0_8_ = adStack_360[0];
                    local_248 = adStack_360[2];
                    pcVar3 = (code *)*param_9;
                    plVar27 = (longlong *)param_9[2];
                    if ((longlong *)param_9[2] == (longlong *)0x0) {
                      plVar27 = local_428;
                    }
                    local_178 = dVar70;
                    uVar19 = (**(code **)(*plVar27 + 8))();
                    uVar19 = (*pcVar3)(uVar19,&local_178,&local_278,&local_1f8);
                    if ((char)uVar19 == '\0') {
                      uVar30 = CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
                      goto LAB_140556a1a;
                    }
                    local_448 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
                    plVar27 = local_440;
                  }
                }
LAB_1405569cd:
                pdVar21 = pdVar21 + 1;
              } while (pdVar21 != local_438);
            }
          }
          plVar27 = local_3f0 + 1;
          uVar30 = local_448;
        } while (plVar27 != local_3f8);
      }
    }
  }
LAB_140556a1a:
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_298 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar30 & 0xffffff01;
}



// FUNCTION 1405574d6 FUN_1405574d6 body=266 status=ok
// SIG undefined FUN_1405574d6(void)

longlong * FUN_1405574d6(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)(int)param_3[1] != 0) {
    plVar7 = (longlong *)*param_3;
    plVar1 = plVar7 + (int)param_3[1];
    do {
      plVar5 = (longlong *)*plVar7;
      if ((plVar5 == (longlong *)0x0) || (lVar8 = *plVar5, lVar8 == 0)) goto LAB_140557579;
      iVar2 = *(int *)(lVar8 + 0x1c);
      if (iVar2 == 0xb) {
        plVar5 = (longlong *)(lVar8 + 0x40);
LAB_14055751f:
        lVar8 = *plVar5;
        if (lVar8 != 0) {
          lVar6 = lVar8 + 0x78;
          if (*(longlong *)(lVar8 + 0x80) != 0) {
            lVar6 = *(longlong *)(lVar8 + 0x80);
          }
          iVar2 = *(int *)(lVar8 + 0x88);
          if ((longlong)iVar2 != 0) {
            lVar8 = 0;
            do {
              uVar4 = *(undefined8 *)(lVar6 + lVar8);
              iVar3 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
                FUN_1405575e0(param_2,iVar3);
              }
              *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
              lVar8 = lVar8 + 8;
            } while ((longlong)iVar2 * 8 != lVar8);
          }
        }
      }
      else if (iVar2 == 2) {
        iVar2 = (int)plVar5[1];
        if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar8 + 0x418))) &&
           (lVar6 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x410) + (longlong)iVar2 * 4),
           lVar6 != -1)) {
          plVar5 = (longlong *)(lVar6 * 8 + *(longlong *)(lVar8 + 0x440));
          goto LAB_14055751f;
        }
      }
      else if (iVar2 == 0xc) {
        plVar5 = (longlong *)(lVar8 + 0x128);
        goto LAB_14055751f;
      }
LAB_140557579:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return param_2;
}



// FUNCTION 1405575e0 FUN_1405575e0 body=356 status=ok
// SIG undefined FUN_1405575e0(void)

void FUN_1405575e0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140557665;
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
LAB_140557665:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140557745 FUN_140557745 body=1056 status=ok
// SIG undefined FUN_140557745(void)

void FUN_140557745(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\b') {
    if ((char)param_3[2] == '\0') {
      local_90 = 0;
    }
    else {
      local_90 = param_3[3];
    }
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
LAB_1405577af:
    local_98 = 0;
    FUN_140ea601d(uVar3,local_88,param_1);
    goto LAB_1405577b4;
  }
  switch(cVar1) {
  case '\0':
  case '\x02':
switchD_1405577f0_caseD_0:
    if ((char)param_3[2] == '\0') {
      local_90 = 0;
    }
    else {
      local_90 = param_3[3];
    }
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
    break;
  case '\x01':
    if ((char)param_3[2] == '\0') {
      local_90 = 0;
    }
    else {
      local_90 = param_3[3];
    }
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
LAB_1405578e3:
    local_98 = 0;
    FUN_1405c9af5(uVar3,local_88,param_1);
    goto LAB_1405577b4;
  case '\x03':
    if ((char)param_3[2] == '\0') {
      local_90 = 0;
    }
    else {
      local_90 = param_3[3];
    }
    puVar4 = (undefined8 *)param_3[1];
    puVar5 = local_88;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar3 = *(undefined8 *)(*param_3 + 0x10);
LAB_14055791b:
    local_98 = 0;
    FUN_144945691(uVar3,local_88,param_1);
    goto LAB_1405577b4;
  case '\x04':
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_140557745(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_1405577b4;
  default:
    switch(cVar1) {
    case '@':
      param_1 = *(longlong *)(param_1 + 0x28);
      if ((char)param_3[2] == '\0') {
        local_90 = 0;
      }
      else {
        local_90 = param_3[3];
      }
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      break;
    case 'A':
      param_1 = *(longlong *)(param_1 + 0x28);
      if ((char)param_3[2] == '\0') {
        local_90 = 0;
      }
      else {
        local_90 = param_3[3];
      }
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      goto LAB_1405578e3;
    case 'B':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
      goto switchD_1405577f0_caseD_0;
    case 'C':
      param_1 = *(longlong *)(param_1 + 0x28);
      if ((char)param_3[2] == '\0') {
        local_90 = 0;
      }
      else {
        local_90 = param_3[3];
      }
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      goto LAB_14055791b;
    case 'H':
      param_1 = *(longlong *)(param_1 + 0x28);
      if ((char)param_3[2] == '\0') {
        local_90 = 0;
      }
      else {
        local_90 = param_3[3];
      }
      puVar4 = (undefined8 *)param_3[1];
      puVar5 = local_88;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar3 = *(undefined8 *)(*param_3 + 0x10);
      goto LAB_1405577af;
    default:
      switch(cVar1) {
      case -0x80:
        if ((char)param_3[2] == '\0') {
          local_90 = 0;
        }
        else {
          local_90 = param_3[3];
        }
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cd55a9(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
        break;
      case -0x7f:
        if ((char)param_3[2] == '\0') {
          local_90 = 0;
        }
        else {
          local_90 = param_3[3];
        }
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cd93af(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
        break;
      default:
        goto switchD_1405577f0_caseD_0;
      case -0x7d:
        if ((char)param_3[2] == '\0') {
          local_90 = 0;
        }
        else {
          local_90 = param_3[3];
        }
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_146cdd0cb(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
        break;
      case -0x78:
        if ((char)param_3[2] == '\0') {
          local_90 = 0;
        }
        else {
          local_90 = param_3[3];
        }
        puVar4 = (undefined8 *)param_3[1];
        puVar5 = local_88;
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_98 = 0;
        FUN_140a08058(*(undefined8 *)(*param_3 + 0x10),local_88,param_1);
      }
      goto LAB_1405577b4;
    }
  }
  local_98 = 0;
  FUN_140682465(uVar3,local_88,param_1);
LAB_1405577b4:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140557bc8 FUN_140557bc8 body=567 status=ok
// SIG undefined FUN_140557bc8(void)

void FUN_140557bc8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1[0x11a] != 0) {
    lVar2 = param_1[0x16];
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
      if (lVar2 == 0) goto LAB_140557c90;
    }
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = param_1[0x11a];
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
    param_1[0x11a] = 0;
  }
LAB_140557c90:
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  FUN_1402a37f2(param_1,0);
  if (((param_1[0xec] != 0) && (param_1[0xb5] != 0)) &&
     ((*(longlong *)(param_1[0xb5] + 0x2f0) != 0 && (*(longlong *)(param_1[0xec] + 0x30) != 0)))) {
    FUN_14043e894();
  }
  FUN_1448c6f34(param_1);
  if ((*(ushort *)((longlong)param_1 + 0x7cc) & 0x180) != 0) goto LAB_140557dbd;
  if (param_1[0x118] != 0) {
    FUN_148110b96(param_1[0x118],param_1);
    param_1[0x118] = 0;
  }
  local_18 = param_1;
  FUN_1447cd2ec(param_1 + 0xf4);
  FUN_143a09e98(param_1 + 0xc4,param_1);
  if ((char)param_1[0xf3] == '\x03') {
    *(undefined1 *)(param_1 + 0xf3) = 2;
LAB_140557d6c:
    lVar2 = param_1[0x16];
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    lVar2 = FUN_1400bd118(lVar2);
    if (lVar2 != 0) {
      FUN_1439f54b0(*(undefined8 *)(lVar2 + 0x1b30),param_1);
    }
  }
  else {
    if ((char)param_1[0xf3] == '\x01') goto LAB_140557d6c;
    if ((*(uint *)(param_1 + 0xf2) & 1) == 0) {
      if ((*(uint *)(param_1 + 0xf2) & 4) != 0) {
        FUN_141821d0e(param_1);
      }
      if ((*(byte *)((longlong)param_1 + 0x9c) & 2) != 0) {
        (**(code **)(*param_1 + 0x340))(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x420))(param_1,0);
    }
  }
  if ((int)param_1[0x105] != -1) {
    FUN_140388f74(param_1);
  }
LAB_140557dbd:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140557e00 FUN_140557e00 body=593 status=ok
// SIG undefined FUN_140557e00(void)

void FUN_140557e00(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [44];
  float local_dc;
  longlong local_d8;
  longlong lStack_d0;
  uint local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_b7;
  longlong local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_b8 = *(int *)(lVar3 + 0xe0) != 1;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_b7 = *(undefined1 *)(lVar3 + 0x78);
  local_bc = *(undefined4 *)(param_1 + 0x58);
  lVar5 = *param_2;
  lStack_d0 = param_2[1];
  local_c4 = 0x3f80000000000000;
  uVar6 = (uint)lStack_d0;
  uVar10 = 0;
  local_d8 = lVar5;
  if ((uint)lStack_d0 == 0) {
LAB_140557ec1:
    local_c8 = uVar10;
    if (uVar10 < (uint)lStack_d0) {
      fVar12 = *(float *)(param_1 + 0x60) + -0.001;
      fVar13 = *(float *)(param_1 + 100) + 0.001;
      fVar1 = *(float *)(&DAT_14b40ee68 + (ulonglong)(*(int *)(lVar3 + 0xe0) != 1) * 4);
      do {
        uVar10 = local_c8;
        local_dc = 0.0;
        uVar8 = FUN_14030a32e((longlong)(int)local_c8 * 0x38 + lVar5);
        cVar7 = FUN_140558052(*(undefined1 *)(lVar3 + 0xe4),uVar8,&local_dc,local_a8);
        fVar11 = fVar1;
        if (((cVar7 != '\0') && (fVar12 < local_dc)) && (local_dc < fVar13)) {
          fVar2 = *(float *)(param_1 + 0x68);
          fVar4 = (float)(~-(uint)(local_dc < fVar2) & (uint)(fVar13 - fVar2) |
                         (uint)(fVar2 - fVar12) & -(uint)(local_dc < fVar2));
          fVar11 = 0.0;
          if (0.0 < fVar4) {
            fVar11 = ABS(local_dc - fVar2) / fVar4;
          }
        }
        FUN_14023b10e(&local_d8,fVar11);
        local_c8 = uVar10 + 1;
        if ((local_c8 < uVar6) &&
           ((*(byte *)(lVar5 + 0x34 + (longlong)(int)local_c8 * 0x38) & 1) != 0)) {
          uVar10 = uVar10 + 2;
          do {
            local_c8 = uVar6;
            if (uVar6 == uVar10) break;
            lVar9 = (longlong)(int)uVar10;
            local_c8 = uVar10;
            uVar10 = uVar10 + 1;
          } while ((*(byte *)(lVar5 + 0x34 + lVar9 * 0x38) & 1) != 0);
        }
      } while (local_c8 < uVar6);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    do {
      if ((*(byte *)(lVar5 + 0x34 + (longlong)(int)uVar10 * 0x38) & 1) == 0) goto LAB_140557ec1;
      uVar10 = uVar10 + 1;
    } while ((uint)lStack_d0 != uVar10);
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140558052 FUN_140558052 body=698 status=ok
// SIG undefined FUN_140558052(void)

undefined8 FUN_140558052(char param_1,longlong param_2,float *param_3,code **param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
LAB_14055827b:
    pwVar5 = L"Can\'t query \'IDamageableInterface\'";
LAB_140558193:
    FUN_14020fad6(param_4,pwVar5);
  }
  else {
    if (DAT_14cb56270 == 0) {
      local_80 = &local_60;
      local_60 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1427b09ee;
      local_88 = &LAB_148630fef;
      local_90 = FUN_1464b6a91;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10004001;
      local_b0 = 8;
      local_b8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar2 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (plVar2 == (longlong *)0x0) goto LAB_14055827b;
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (lVar3 == 0) {
      pwVar5 = L"No Health State";
      goto LAB_140558193;
    }
    if (param_1 == '\0') {
      if ((longlong)*(int *)(lVar3 + 0x40) == 0) {
        fVar9 = 0.0;
LAB_1405581d5:
        fVar8 = 0.0;
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 0x38);
        lVar7 = (longlong)*(int *)(lVar3 + 0x40) * 0x88;
        fVar9 = 0.0;
        do {
          fVar8 = (float)FUN_14055830e(lVar6);
          fVar9 = fVar9 + fVar8;
          lVar6 = lVar6 + 0x88;
          lVar7 = lVar7 + -0x88;
        } while (lVar7 != 0);
        if ((longlong)*(int *)(lVar3 + 0x40) == 0) goto LAB_1405581d5;
        lVar6 = *(longlong *)(lVar3 + 0x38);
        lVar3 = (longlong)*(int *)(lVar3 + 0x40) * 0x88;
        fVar8 = 0.0;
        do {
          FUN_1405583ce(lVar6);
          fVar8 = fVar8 + extraout_XMM0_Da;
          lVar6 = lVar6 + 0x88;
          lVar3 = lVar3 + -0x88;
        } while (lVar3 != 0);
      }
      *param_3 = fVar9 / fVar8;
LAB_140558152:
      uVar4 = 1;
      goto LAB_140558154;
    }
    uVar4 = 0;
    iVar1 = 0;
    if (param_1 != '\x01') {
      if (param_1 == '\x02') {
        iVar1 = 1;
      }
      else {
        if (param_1 != '\x03') goto LAB_140558154;
        iVar1 = 2;
      }
    }
    if (iVar1 < *(int *)(lVar3 + 0x40)) {
      FUN_14055848a((ulonglong)(uint)(iVar1 * 0x88) + *(longlong *)(lVar3 + 0x38));
      *param_3 = extraout_XMM0_Da_00;
      goto LAB_140558152;
    }
    FUN_140002266(&local_60,L"Can\'t get %d Health Pool. Have only: %d",iVar1 + 1);
    if (&local_60 == param_4) {
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != (code *)0x0) {
        FUN_1400020a8();
      }
      *param_4 = local_60;
      *(undefined4 *)(param_4 + 1) = local_58;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_54;
    }
  }
  uVar4 = 0;
LAB_140558154:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14055830e FUN_14055830e body=191 status=ok
// SIG undefined FUN_14055830e(void)

undefined4 FUN_14055830e(char *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if (*param_1 == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x38);
    uVar6 = 0xbf800000;
    if ((plVar3 != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0)) {
      puVar4 = (uint *)(param_1 + 0x30);
      uVar1 = *puVar4;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x34))) &&
           ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
          if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar3 = plVar3 + 0xd9;
          }
          else {
            plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
          }
          cVar2 = FUN_14486eb0e(plVar3,puVar4);
          if (cVar2 != '\0') {
            lVar5 = FUN_140280ec4(puVar4);
            uVar6 = *(undefined4 *)(lVar5 + 200);
          }
        }
      }
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x74);
  }
  return uVar6;
}



// FUNCTION 1405583ce FUN_1405583ce body=188 status=ok
// SIG undefined FUN_1405583ce(void)

undefined4 FUN_1405583ce(char *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (*param_1 == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      return 0;
    }
    puVar4 = (uint *)(param_1 + 0x30);
    uVar1 = *puVar4;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x34)) {
      return 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
      return 0;
    }
    if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_1447a1f2e) {
      plVar3 = plVar3 + 0xd9;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    }
    cVar2 = FUN_14486eb0e(plVar3,puVar4);
    if (cVar2 == '\0') {
      return 0;
    }
    lVar5 = FUN_140280ec4(puVar4);
    param_1 = (char *)(lVar5 + 0x30);
  }
  else {
    param_1 = param_1 + 0x54;
  }
  return *(undefined4 *)param_1;
}



// FUNCTION 14055848a FUN_14055848a body=262 status=ok
// SIG undefined FUN_14055848a(void)

float FUN_14055848a(char *param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (*param_1 == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      return -1.0;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      return -1.0;
    }
    puVar4 = (uint *)(param_1 + 0x30);
    uVar1 = *puVar4;
    if ((int)uVar1 < 0) {
      return -1.0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return -1.0;
    }
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar5 == 0) {
      return -1.0;
    }
    if (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x34)) {
      return -1.0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) {
      return -1.0;
    }
    if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_1447a1f2e) {
      plVar3 = plVar3 + 0xd9;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    }
    cVar2 = FUN_14486eb0e(plVar3,puVar4);
    if (cVar2 == '\0') {
      return -1.0;
    }
    lVar5 = FUN_140280ec4(puVar4);
    fVar6 = *(float *)(lVar5 + 0x30) - *(float *)(lVar5 + 0x24);
    if ((fVar6 == 0.0) && (!NAN(fVar6))) {
      return 0.0;
    }
    fVar7 = *(float *)(lVar5 + 200) - *(float *)(lVar5 + 0x24);
  }
  else {
    fVar6 = *(float *)(param_1 + 0x54);
    if (fVar6 <= 0.0) {
      return -1.0;
    }
    fVar7 = *(float *)(param_1 + 0x74);
  }
  return fVar7 / fVar6;
}



// FUNCTION 1405585fa FUN_1405585fa body=652 status=ok
// SIG undefined FUN_1405585fa(void)

void FUN_1405585fa(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [4];
  float local_194;
  undefined4 local_f4;
  undefined4 local_c8;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((1e-06 <= (float)param_2) && (param_1[0x22] != 0)) {
    param_1[0x27] = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar8 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 300) = uVar8;
    *(undefined4 *)(param_1 + 0x26) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar10;
    (**(code **)(*param_1 + 0xb88))(param_1);
    dVar1 = (double)param_1[0x25];
    dVar2 = (double)param_1[0x26];
    dVar3 = (double)param_1[0x27];
    if (((dVar1 != 0.0) || (((NAN(dVar1) || (dVar2 != 0.0)) || (NAN(dVar2))))) ||
       ((dVar3 != 0.0 || (NAN(dVar3))))) {
      *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
      lVar4 = param_1[0x22];
      dVar5 = *(double *)(lVar4 + 0x260);
      dVar6 = *(double *)(lVar4 + 0x268);
      dVar7 = *(double *)(lVar4 + 0x270);
      dVar11 = (double)(float)param_2;
      local_88 = dVar3 * dVar11;
      local_90 = dVar2 * dVar11;
      local_98 = dVar1 * dVar11;
      memset(local_198,0,0x100);
      local_c8 = 0xffffffff;
      local_f4 = 0xffffffff;
      local_194 = 1.0;
      local_1b8 = *(undefined8 *)(lVar4 + 0x240);
      uStack_1b0 = *(undefined8 *)(lVar4 + 0x248);
      local_1a8 = *(undefined4 *)(lVar4 + 0x250);
      uStack_1a4 = *(undefined4 *)(lVar4 + 0x254);
      uStack_1a0 = *(undefined4 *)(lVar4 + 600);
      uStack_19c = *(undefined4 *)(lVar4 + 0x25c);
      local_1c0 = 0;
      local_1c8 = local_198;
      FUN_1402eda10(param_1,&local_98,&local_1b8,1);
      if (local_194 < 1.0) {
        (**(code **)(*param_1 + 0x4c8))(param_1,local_198,param_2,&local_98);
        local_1c0 = 1;
        local_1c8 = local_198;
        (**(code **)(*param_1 + 0x508))(param_1,&local_98,1.0 - local_194);
      }
      if ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) {
        lVar4 = param_1[0x22];
        dVar2 = *(double *)(lVar4 + 0x268);
        dVar1 = *(double *)(lVar4 + 0x270);
        dVar11 = 1.0 / dVar11;
        param_1[0x25] = (longlong)(dVar11 * (*(double *)(lVar4 + 0x260) - dVar5));
        param_1[0x26] = (longlong)((dVar2 - dVar6) * dVar11);
        param_1[0x27] = (longlong)((dVar1 - dVar7) * dVar11);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140558888 FUN_140558888 body=105 status=ok
// SIG undefined FUN_140558888(void)

void FUN_140558888(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    local_1c = param_2;
    uVar2 = FUN_14477b072(plVar1,DAT_14cacf700);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405588f2 FUN_1405588f2 body=730 status=ok
// SIG undefined FUN_1405588f2(void)

void FUN_1405588f2(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_190 [4];
  float local_18c;
  undefined4 local_ec;
  undefined4 local_c0;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  fVar8 = (float)param_2;
  if (((1e-06 <= fVar8) && (lVar2 = param_1[0x22], lVar2 != 0)) &&
     (0.0 < *(float *)((longlong)param_1 + 0x10f4))) {
    *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
    lVar7 = DAT_14c8464e8;
    param_1[0x25] = DAT_14c8464e0;
    param_1[0x26] = lVar7;
    param_1[0x27] = DAT_14c8464f0;
    *(float *)(param_1 + 0x21f) = *(float *)(param_1 + 0x21f) + fVar8;
    dVar3 = *(double *)(lVar2 + 0x260);
    dVar4 = *(double *)(lVar2 + 0x268);
    dVar5 = *(double *)(lVar2 + 0x270);
    dVar1 = *(double *)(lVar2 + 0x268);
    FUN_140558bce(param_1 + 0x218,&local_78,param_1[0x3e]);
    local_80 = local_68 - dVar5;
    local_88 = local_70 - dVar1;
    local_90 = local_78 - dVar3;
    if (((9.999999747378752e-05 < ABS(local_90)) || (9.999999747378752e-05 < ABS(local_88))) ||
       (9.999999747378752e-05 < ABS(local_80))) {
      memset(local_190,0,0x100);
      local_c0 = 0xffffffff;
      local_ec = 0xffffffff;
      local_18c = 1.0;
      lVar2 = param_1[0x22];
      local_1b8 = *(undefined8 *)(lVar2 + 0x240);
      uStack_1b0 = *(undefined8 *)(lVar2 + 0x248);
      local_1a8 = *(undefined4 *)(lVar2 + 0x250);
      uStack_1a4 = *(undefined4 *)(lVar2 + 0x254);
      uStack_1a0 = *(undefined4 *)(lVar2 + 600);
      uStack_19c = *(undefined4 *)(lVar2 + 0x25c);
      local_1c0 = 0;
      local_1c8 = local_190;
      FUN_1402eda10(param_1,&local_90,&local_1b8,1);
      if (local_18c < 1.0) {
        (**(code **)(*param_1 + 0x4c8))(param_1,local_190,param_2,&local_90);
        local_1c0 = 1;
        local_1c8 = local_190;
        (**(code **)(*param_1 + 0x508))(param_1,&local_90,1.0 - local_18c);
      }
      if ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) {
        lVar2 = param_1[0x22];
        dVar6 = *(double *)(lVar2 + 0x268);
        dVar1 = *(double *)(lVar2 + 0x270);
        dVar9 = 1.0 / (double)fVar8;
        param_1[0x25] = (longlong)(dVar9 * (*(double *)(lVar2 + 0x260) - dVar3));
        param_1[0x26] = (longlong)((dVar6 - dVar4) * dVar9);
        param_1[0x27] = (longlong)((dVar1 - dVar5) * dVar9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140558bce FUN_140558bce body=220 status=ok
// SIG undefined FUN_140558bce(void)

double * FUN_140558bce(double *param_1,double *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  
  if (((param_3 != 0) && (0.0 < *(float *)((longlong)param_1 + 0x34))) &&
     (lVar6 = FUN_1447210f0(param_3), lVar6 != 0)) {
    FUN_140558caa(param_3);
    fVar1 = *(float *)(param_1 + 6);
    fVar7 = *(float *)(param_1 + 7);
    if (*(float *)((longlong)param_1 + 0x34) <= *(float *)(param_1 + 7)) {
      fVar7 = *(float *)((longlong)param_1 + 0x34);
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar2 = param_1[5];
    dVar8 = (double)fVar7;
    dVar3 = param_1[4];
    dVar4 = param_1[2];
    dVar5 = param_1[1];
    *param_2 = dVar8 * param_1[3] + 0.0 + *param_1;
    param_2[1] = dVar3 * dVar8 + 0.0 + dVar5;
    param_2[2] = dVar8 * 0.0 + (double)(fVar1 * 0.5 * fVar7 * fVar7 + (float)dVar2 * fVar7) + dVar4;
    return param_2;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 140558caa FUN_140558caa body=537 status=ok
// SIG undefined FUN_140558caa(void)

bool FUN_140558caa(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      pcVar2 = *(code **)(*param_1 + 0x5e8);
      if (pcVar2 == FUN_140972dde) {
        lVar4 = param_1[0x76];
        if (lVar4 == 0) {
          pcVar2 = *(code **)(*param_1 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (*(int *)((longlong)param_1 + 0x75b4) != 0) {
                uVar1 = *(uint *)(param_1 + 0xeb6);
                lVar4 = 0;
                if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140558da2;
                plVar3 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((plVar3 != (longlong *)0x0) &&
                   (((int)plVar3[2] == *(int *)((longlong)param_1 + 0x75b4) &&
                    ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
                    lVar4 = *plVar3;
                  }
                  else {
                    lVar4 = 0;
                  }
                  lVar4 = lVar4 + 0x110;
                  goto LAB_140558ddc;
                }
              }
            }
            else {
              lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140558ddc:
              if (lVar4 != 0) {
                lVar4 = *(longlong *)(lVar4 + 0x20);
                goto LAB_140558de5;
              }
            }
          }
          else {
            lVar4 = (*pcVar2)(param_1);
LAB_140558de5:
            if (lVar4 != 0) {
              lVar4 = *(longlong *)(lVar4 + 0x3b0);
              goto LAB_140558da2;
            }
          }
          lVar4 = 0;
        }
      }
      else {
        lVar4 = (*pcVar2)(param_1);
      }
LAB_140558da2:
      bVar5 = lVar4 != 0;
      goto LAB_140558da8;
    }
  }
  bVar5 = false;
LAB_140558da8:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140558ed4 FUN_140558ed4 body=83 status=ok
// SIG undefined FUN_140558ed4(void)

undefined4 FUN_140558ed4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  if ((char)uVar2 == '\0') {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_140558f28(uVar3,param_1,uVar1,0);
  }
  return uVar2;
}



// FUNCTION 140558f28 FUN_140558f28 body=1022 status=ok
// SIG undefined FUN_140558f28(void)

void FUN_140558f28(undefined8 *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  char *_Str;
  void *_Src;
  char cVar5;
  size_t sVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_4;
  if (((param_2 != (longlong *)0x0) &&
      ((**(code **)(*param_2 + 0x20))(param_2,param_3), param_3 != 0)) &&
     (pbVar3 = (byte *)*param_1, pbVar3 != (byte *)0x0)) {
    bVar10 = *pbVar3 & 0x6b;
    if (bVar10 == 2) {
      if ((*pbVar3 & 2) == 0) {
        puVar7 = &DAT_14c9a1270;
      }
      else {
        puVar7 = *(undefined8 **)(pbVar3 + 8);
      }
      if ((longlong)*(int *)(puVar7 + 2) != 0) {
        puVar19 = (undefined8 *)*puVar7;
        puVar7 = puVar19 + (longlong)*(int *)(puVar7 + 2) * 2;
        do {
          pbVar3 = (byte *)*puVar19;
          plVar4 = (longlong *)puVar19[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) == 1)) {
            _Str = *(char **)(pbVar3 + 8);
            if (_Str == (char *)0x0) {
LAB_1405590f2:
              local_68 = 0;
              uVar14 = 0;
            }
            else {
              sVar6 = strlen(_Str);
              iVar9 = (int)sVar6;
              if (iVar9 == 0) goto LAB_1405590f2;
              lVar11 = (longlong)iVar9;
              pcVar17 = _Str + lVar11 + -1;
              if (pcVar17 < _Str) {
                lVar16 = 0;
              }
              else {
                uVar8 = 0;
                do {
                  if (9 < (byte)(*pcVar17 - 0x30U)) break;
                  uVar8 = uVar8 + 1;
                  pcVar17 = pcVar17 + -1;
                } while (_Str <= pcVar17);
                if (((((uVar8 == 0) || (iVar9 <= (int)uVar8)) || (10 < uVar8)) ||
                    (lVar18 = -(ulonglong)uVar8, _Str[lVar18 + lVar11 + -1] != '_')) ||
                   ((uVar8 != 1 && (_Str[lVar18 + lVar11] == '0')))) {
LAB_14055903a:
                  lVar16 = 0;
                }
                else {
                  lVar15 = 0;
                  do {
                    lVar16 = (longlong)_Str[lVar18 + lVar11] + lVar15 * 10;
                    lVar15 = lVar16 + -0x30;
                    lVar18 = lVar18 + 1;
                  } while (lVar18 != 0);
                  if (0x7ffffffe < lVar15) goto LAB_14055903a;
                  iVar9 = ~uVar8 + iVar9;
                  lVar16 = lVar16 + -0x2f;
                }
                if (iVar9 == 0) goto LAB_1405590f2;
              }
              local_4c = 0;
              local_58 = _Str;
              local_50 = iVar9;
              uVar8 = FUN_14001a6c0(&local_58,1);
              uVar14 = lVar16 << 0x20;
              local_68 = (ulonglong)uVar8;
            }
            local_68 = local_68 | uVar14;
            if ((local_90 == 0) || (cVar5 = FUN_1407df772(local_90,&local_68), cVar5 == '\0')) {
              local_58 = (char *)0x0;
              FUN_1405593a8(param_3,&local_58,&local_68);
              (**(code **)(*param_2 + 8))(param_2,&local_58);
            }
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
          puVar19 = puVar19 + 2;
        } while (puVar19 != puVar7);
      }
    }
    else if (bVar10 == 1) {
      FUN_1400b22c2(&local_58,*(undefined8 *)(pbVar3 + 8));
      local_68 = 0;
      uStack_60 = 0;
      local_98 = 1;
      FUN_144a38a52(&local_58,&local_68,&PTR_DAT_149e00c20,4);
      uVar14 = local_68;
      lVar11 = (longlong)(int)uStack_60;
      uVar12 = 0;
      if (lVar11 != 0) {
        lVar16 = 0;
        do {
          local_78 = (undefined2 *)0x0;
          local_70 = *(int *)(uVar14 + 8 + lVar16);
          lVar18 = (longlong)local_70;
          _Src = *(void **)(uVar14 + lVar16);
          if (lVar18 == 0) {
            local_6c = 0;
LAB_140559222:
            puVar13 = &DAT_149dfb77a;
          }
          else {
            FUN_1446dd670(&local_78,local_70,0);
            memcpy(local_78,_Src,lVar18 * 2);
            puVar13 = local_78;
            if (local_70 == 0) goto LAB_140559222;
          }
          FUN_1446f470e(local_80,puVar13);
          if ((local_90 == 0) || (cVar5 = FUN_1407df772(local_90,local_80), cVar5 == '\0')) {
            local_88 = 0;
            FUN_1405593a8(param_3,&local_88);
            (**(code **)(*param_2 + 8))(param_2,&local_88);
          }
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar16 = lVar16 + 0x10;
        } while (lVar11 * 0x10 != lVar16);
        uVar12 = uStack_60 & 0xffffffff;
      }
      FUN_1447a1747(local_68,uVar12);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (char *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140559328 FUN_140559328 body=128 status=ok
// SIG undefined FUN_140559328(void)

undefined8 FUN_140559328(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) {
    if (*(longlong *)(param_1 + 8) == 0) {
      *(longlong *)(param_1 + 8) = lVar1;
      lVar3 = *param_2;
    }
    else if (*(longlong *)(param_1 + 8) != lVar1) {
      return 0;
    }
    uVar4 = (uint)(*(ushort *)(lVar3 + 8) >> 6);
    uVar5 = *(ushort *)(lVar3 + 8) & 0x3f;
    if (*(int *)(param_1 + 0x18) <= (int)uVar4) {
      FUN_140100520((longlong *)(param_1 + 0x10),uVar4 + 1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1)
                   );
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar2 = *(ulonglong *)(lVar3 + (ulonglong)uVar4 * 8);
    if ((uVar2 >> uVar5 & 1) == 0) {
      *(ulonglong *)(lVar3 + (ulonglong)uVar4 * 8) = uVar2 | 1L << (sbyte)uVar5;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1405593a8 FUN_1405593a8 body=407 status=ok
// SIG undefined FUN_1405593a8(void)

void FUN_1405593a8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  short sVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  SRWLock = (PSRWLOCK)(param_1 + 0xd);
  AcquireSRWLockShared(SRWLock);
  *param_2 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar4 == lVar1) {
          if (((plVar4 != (longlong *)0x0) && (plVar4 + 1 != (longlong *)0x0)) &&
             (lVar1 = plVar4[1], lVar1 != 0)) {
            *param_2 = lVar1;
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
          }
          break;
        }
        iVar6 = (int)plVar4[2];
      } while (iVar6 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockExclusive(SRWLock);
  local_50 = (longlong *)FUN_14001cc68(0x18,0x10);
  sVar2 = (short)(int)param_1[0xc];
  *(short *)(param_1 + 0xc) = sVar2 + 1;
  *local_50 = *param_3;
  *(short *)(local_50 + 1) = sVar2;
  local_50[2] = (longlong)param_1;
  local_40 = &local_50;
  local_48 = param_3;
  FUN_140559556(param_1,local_34,&local_48,0);
  iVar6 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar6 + 1U) {
    FUN_140559b30(param_1 + 10,iVar6);
  }
  *(longlong **)(param_1[10] + (longlong)iVar6 * 8) = local_50;
  *param_2 = (longlong)local_50;
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140559556 FUN_140559556 body=1498 status=ok
// SIG undefined FUN_140559556(void)

void FUN_140559556(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_14482b872(param_1,iVar21);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar5 = iVar18 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar10 = iVar18 + 1;
    iVar14 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar14 = iVar18;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar18;
        }
        else {
          uVar23 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar23) {
              uVar6 = uVar23;
            }
          }
          else {
            uVar6 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar10 = -0x20;
          if ((int)uVar23 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar16,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar16;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar7 = (longlong)iVar21;
    iVar18 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar18;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar18 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar18 = iVar21;
  }
  puVar11[iVar18 >> 5] = puVar11[iVar18 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  plVar16 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar12 = (longlong *)param_3[1];
  lVar7 = *(longlong *)*param_3;
  *plVar16 = lVar7;
  plVar16[1] = *plVar12;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  uVar23 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar6 = (uint)lVar7 & 0xffff;
  uVar23 = ((uint)lVar7 << 0x10 | uVar6) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar6 >> 4);
  cVar8 = '\0';
  iVar18 = iVar21;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
    if (iVar18 != -1) {
      do {
        plVar12 = (longlong *)(*param_1 + (longlong)iVar18 * 0x18);
        if (*plVar12 == lVar7) {
          uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
          lVar7 = plVar16[1];
          uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
          *(int *)plVar12 = (int)*plVar16;
          *(undefined4 *)((longlong)plVar12 + 4) = uVar3;
          *(int *)(plVar12 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uVar4;
          FUN_14709b466(param_1,iVar21);
          cVar8 = '\x01';
          goto LAB_1405596cf;
        }
        iVar18 = (int)plVar12[2];
      } while (iVar18 != -1);
    }
    cVar8 = '\0';
    iVar18 = iVar21;
  }
LAB_1405596cf:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar8;
  }
  if (cVar8 != '\0') goto LAB_140559753;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 < 4) {
    uVar19 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar23 = (int)param_1[9] - 1U & uVar23;
    *(uint *)((longlong)plVar16 + 0x14) = uVar23;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
         iVar18;
    goto LAB_140559753;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar12 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_1405597f9:
    uVar23 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar12;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar23) * 4) =
           0xffffffff;
      uVar23 = uVar23 + 1;
    } while (uVar19 != uVar23);
  }
  else {
    if (uVar19 == 0) goto LAB_140559753;
    FUN_1446efa72(plVar16,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_1405597f9;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar13 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar23 = *puVar11;
    if (uVar23 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar13 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar13) goto LAB_140559753;
        iVar10 = iVar10 + 0x20;
        uVar23 = puVar11[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar23 & uVar23);
    uVar22 = uVar17 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 < iVar21) {
    uVar23 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar20 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar7 + lVar20 * 0x18);
      uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar19 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar19) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar19 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar7 + 0x14 + lVar20 * 0x18) = iVar21;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar12;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar20 * 0x18) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar12;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar23 = ~(uint)uVar17 & uVar23;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar5 = (int)uVar13;
      lVar7 = (longlong)iVar5;
      uVar6 = puVar11[lVar7] & uVar23;
      if (uVar6 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar20 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar11[lVar7 + lVar20 + 1];
          if (uVar6 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar15 - lVar7 == lVar20) goto LAB_140559753;
        }
        uVar13 = (ulonglong)(iVar5 + (int)lVar20 + 1);
        uVar23 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar22 = uVar17 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar21);
  }
LAB_140559753:
  *param_2 = iVar18;
  return;
}



// FUNCTION 140559b30 FUN_140559b30 body=353 status=ok
// SIG undefined FUN_140559b30(void)

void FUN_140559b30(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140559bb7;
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
LAB_140559bb7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140559c92 FUN_140559c92 body=91 status=ok
// SIG undefined FUN_140559c92(void)

void FUN_140559c92(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined1 *)(param_1[2] + uVar2) = *(undefined1 *)(param_2[2] + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 140559cf8 FUN_140559cf8 body=109 status=ok
// SIG undefined FUN_140559cf8(void)

void FUN_140559cf8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < (uint)(param_2 - iVar2)) {
      FUN_1447403be(plVar1);
    }
    memset((void *)((longlong)iVar2 + *plVar1),0,(longlong)(param_2 - iVar2));
    return;
  }
  if (-1 < param_2) {
    if (iVar2 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_140b3f66e(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140559d66 FUN_140559d66 body=348 status=ok
// SIG undefined FUN_140559d66(void)

void FUN_140559d66(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  uint local_40;
  int local_3c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0x3f800000;
  local_a8 = 0x3dcccccd;
  local_a4 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x3dcccccd;
  local_84 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (undefined4)DAT_14c8464e0;
  uStack_54 = DAT_14c8464e0._4_4_;
  uStack_50 = (undefined4)DAT_14c8464e8;
  uStack_4c = DAT_14c8464e8._4_4_;
  local_48 = DAT_14c8464f0;
  local_3c = 0;
  local_c8 = 3;
  if (param_2 == 0) {
    local_40 = 0;
    iVar1 = 0;
  }
  else {
    local_40 = *(uint *)(param_2 + 0xc);
    if ((int)local_40 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_40 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar3;
      }
    }
  }
  local_3c = iVar1;
  FUN_140559ec4(param_1);
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140559ec4 FUN_140559ec4 body=173 status=ok
// SIG undefined FUN_140559ec4(void)

void FUN_140559ec4(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0xe08);
  AcquireSRWLockExclusive(SRWLock);
  iVar2 = *(int *)(param_1 + 0xda0);
  *(uint *)(param_1 + 0xda0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xda4) < iVar2 + 1U) {
    FUN_14055a0bc(param_1 + 0xaf8,iVar2);
  }
  lVar10 = param_1 + 0xaf8;
  if (*(longlong *)(param_1 + 0xd98) != 0) {
    lVar10 = *(longlong *)(param_1 + 0xd98);
  }
  puVar1 = (undefined1 *)(lVar10 + (longlong)iVar2 * 0xa8);
  *puVar1 = *param_2;
  FUN_140559f72(puVar1 + 8,param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  uVar4 = *(undefined4 *)(param_2 + 0x90);
  uVar5 = *(undefined4 *)(param_2 + 0x94);
  uVar6 = *(undefined4 *)(param_2 + 0x98);
  uVar7 = *(undefined4 *)(param_2 + 0x9c);
  uVar8 = *(undefined4 *)(param_2 + 0xa0);
  uVar9 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(puVar1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(puVar1 + 0x8c) = uVar3;
  *(undefined4 *)(puVar1 + 0x90) = uVar4;
  *(undefined4 *)(puVar1 + 0x94) = uVar5;
  *(undefined4 *)(puVar1 + 0x98) = uVar6;
  *(undefined4 *)(puVar1 + 0x9c) = uVar7;
  *(undefined4 *)(puVar1 + 0xa0) = uVar8;
  *(undefined4 *)(puVar1 + 0xa4) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x000140559f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 140559f72 FUN_140559f72 body=329 status=ok
// SIG undefined FUN_140559f72(void)

undefined8 * FUN_140559f72(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar1 = param_2[9];
  param_1[9] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  lVar1 = param_2[0xc];
  param_1[0xc] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  param_1[0xf] = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  return param_1;
}



// FUNCTION 14055a0bc FUN_14055a0bc body=366 status=ok
// SIG undefined FUN_14055a0bc(void)

void FUN_14055a0bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x2a8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    iVar9 = 4;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (4 < *(uint *)(param_1 + 0x2ac)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0xa8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14055a151;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14055a151:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    iVar7 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 0x2ac) = iVar9;
  FUN_14055a22a(param_1,param_2,iVar9,0xa8);
  return;
}



// FUNCTION 14055a22a FUN_14055a22a body=151 status=ok
// SIG undefined FUN_14055a22a(void)

void FUN_14055a22a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2a0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xa8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2a0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x2a0),param_1,(longlong)param_2 * 0xa8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2a0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14055a2c2 FUN_14055a2c2 body=1775 status=ok
// SIG undefined FUN_14055a2c2(void)

void FUN_14055a2c2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  undefined1 uVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  undefined1 local_b0;
  undefined1 local_af;
  byte local_ae;
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x24) != 0) {
    uVar4 = *(uint *)(lVar6 + 0x20);
    local_d0 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_14055a347;
    plVar21 = (longlong *)
              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((plVar21 != (longlong *)0x0) &&
       (((int)plVar21[2] == *(int *)(lVar6 + 0x24) && ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))
       ) {
      local_d0 = *plVar21;
      goto LAB_14055a347;
    }
  }
  local_d0 = 0;
LAB_14055a347:
  lVar18 = *(longlong *)(*(longlong *)(local_d0 + 0x548) + 8);
  lVar20 = (ulonglong)*(ushort *)(lVar6 + 0x30) * 0x128;
  lVar3 = lVar18 + lVar20;
  lVar18 = lVar18 + lVar20;
  puVar22 = (undefined8 *)(lVar18 + 0xa0);
  *(undefined8 *)(lVar18 + 0x88) = *(undefined8 *)(param_3 + 8);
  uVar9 = *param_3;
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar12 = param_3[3];
  uVar13 = param_3[5];
  uVar14 = param_3[6];
  uVar15 = param_3[7];
  *(undefined4 *)(lVar18 + 0x78) = param_3[4];
  *(undefined4 *)(lVar18 + 0x7c) = uVar13;
  *(undefined4 *)(lVar18 + 0x80) = uVar14;
  *(undefined4 *)(lVar18 + 0x84) = uVar15;
  *(undefined4 *)(lVar18 + 0x68) = uVar9;
  *(undefined4 *)(lVar18 + 0x6c) = uVar10;
  *(undefined4 *)(lVar18 + 0x70) = uVar11;
  *(undefined4 *)(lVar18 + 0x74) = uVar12;
  *(undefined4 *)(lVar18 + 0x98) = param_3[0xc];
  *(undefined8 *)(lVar18 + 0x90) = *(undefined8 *)(param_3 + 10);
  if (puVar22 != (undefined8 *)(param_3 + 0xe)) {
    FUN_1447bda9c(*(undefined8 *)(lVar3 + 0xa0),*(undefined4 *)(lVar3 + 0xa8));
    iVar5 = param_3[0x10];
    uVar7 = *(undefined8 *)(param_3 + 0xe);
    *(int *)(lVar3 + 0xa8) = iVar5;
    if (iVar5 == 0 && *(int *)(lVar3 + 0xac) == 0) {
      *(undefined4 *)(lVar3 + 0xac) = 0;
    }
    else {
      FUN_14753cf4a(puVar22,iVar5);
      FUN_14753cfbd(*puVar22,uVar7,iVar5);
    }
  }
  puVar22 = (undefined8 *)(lVar3 + 0xb0);
  if (puVar22 != (undefined8 *)(param_3 + 0x12)) {
    iVar5 = param_3[0x14];
    pvVar8 = *(void **)(param_3 + 0x12);
    *(int *)(lVar3 + 0xb8) = iVar5;
    if (iVar5 == 0 && *(int *)(lVar3 + 0xbc) == 0) {
      *(undefined4 *)(lVar3 + 0xbc) = 0;
    }
    else {
      FUN_1456c5740(puVar22,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar22,pvVar8,(longlong)iVar5 << 3);
      }
    }
  }
  *(undefined1 *)(lVar3 + 0xc0) = *(undefined1 *)(param_3 + 0x16);
  puVar22 = (undefined8 *)(lVar3 + 200);
  if (puVar22 != (undefined8 *)(param_3 + 0x18)) {
    iVar5 = param_3[0x1a];
    pvVar8 = *(void **)(param_3 + 0x18);
    *(int *)(lVar3 + 0xd0) = iVar5;
    if (iVar5 == 0 && *(int *)(lVar3 + 0xd4) == 0) {
      *(undefined4 *)(lVar3 + 0xd4) = 0;
    }
    else {
      FUN_1447bda9e(puVar22,iVar5);
      if (iVar5 != 0) {
        memcpy((void *)*puVar22,pvVar8,(longlong)iVar5 << 2);
      }
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(lVar3 + 0xdd) = *(undefined8 *)((longlong)param_3 + 0x75);
  *(undefined8 *)(lVar3 + 0xd8) = uVar7;
  lVar18 = *(longlong *)(*param_2 + 0x28);
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar18);
  }
  lVar18 = FUN_14055aa88(lVar18,*(undefined4 *)(param_1 + 0x28));
  iVar5 = *(int *)(*param_2 + 0x14);
  if (((((iVar5 == 0) || (uVar4 = *(uint *)(*param_2 + 0x10), (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar21 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar21 == (longlong *)0x0 || ((int)plVar21[2] != iVar5)))) ||
     (((*(uint *)(plVar21 + 1) & 0x10200000) != 0 || (local_c8 = *plVar21, local_c8 == 0)))) {
    FUN_14055c180(lVar3,local_d0,0);
  }
  else {
    if (*(char *)(param_1 + 0x2d) == '\0') {
      *(byte *)(param_1 + 0x2c) = *(byte *)(local_c8 + 99) >> 2 & 1;
      *(undefined1 *)(param_1 + 0x2d) = 1;
      local_a8 = *param_2;
      local_a0 = param_2[1];
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
        UNLOCK();
      }
      plVar21 = (longlong *)FUN_140165676(&local_a8);
      if (plVar21 != (longlong *)0x0) {
        uVar17 = 1;
        if (*(char *)(param_1 + 0x2d) == '\0') {
          uVar17 = (**(code **)(*plVar21 + 0x98))(plVar21);
        }
        *(undefined1 *)(param_1 + 0x2c) = uVar17;
        *(undefined1 *)(param_1 + 0x2d) = 1;
      }
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_14055a9ea(&local_c0,param_3);
    if (param_3[8] == 0) {
      local_ac = *(int *)(&DAT_14a46e600 + (ulonglong)((char)local_b8 == '\x01') * 4) + iStack_b4 +
                 -1;
    }
    else {
      local_ac = iStack_bc + *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)local_c0 == '\0') * 4);
    }
    cVar16 = FUN_1400a246c(param_1 + 8);
    puVar22 = (undefined8 *)(param_1 + 0x30);
    if (cVar16 == '\0') {
      FUN_14055ab72(puVar22);
      if (lVar18 == 0) {
        *(undefined8 *)(param_1 + 8) = 2;
        *(undefined8 *)(param_1 + 0x10) = 2;
      }
      else {
        FUN_14055c024(lVar18,local_ac,param_1 + 8,&local_98);
      }
      local_af = 0;
      iStack_bc = DAT_14cab2cd4;
      local_b8 = *(int *)(lVar6 + 0x30);
      local_b0 = *(undefined1 *)(local_c8 + 0x60);
      local_c0 = 0;
      if (*(char *)(param_1 + 0x2d) == '\x01') {
        bVar19 = *(char *)(param_1 + 0x2c) << 2;
      }
      else {
        bVar19 = 0;
      }
      local_ae = bVar19 | local_ae & 0xf8;
      local_d8 = param_1 + 0x80;
      local_e8 = &local_98;
      local_e0 = puVar22;
      iStack_b4 = local_b8;
      FUN_14055e5dc(lVar3,local_d0,&local_c0,lVar18);
    }
    else if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      local_af = 0;
      iStack_bc = DAT_14cab2cd4;
      local_b8 = *(int *)(lVar6 + 0x30);
      local_b0 = *(undefined1 *)(local_c8 + 0x60);
      local_c0 = 0;
      if (*(char *)(param_1 + 0x2d) == '\x01') {
        bVar19 = *(char *)(param_1 + 0x2c) << 2;
      }
      else {
        bVar19 = 0;
      }
      local_ae = bVar19 | local_ae & 0xf8;
      local_e8 = puVar22;
      iStack_b4 = local_b8;
      FUN_1475469f8(lVar3,local_d0,&local_c0,lVar18);
    }
    if ((lVar18 != 0) &&
       ((((longlong)*(int *)(lVar18 + 0x78) != -1 &&
         (*(int *)(*(longlong *)(lVar18 + 0x80) + 4 + (longlong)*(int *)(lVar18 + 0x78) * 0xc) != 0)
         ) || (((longlong)*(int *)(lVar18 + 0x7c) != -1 &&
               (*(int *)(*(longlong *)(lVar18 + 0xa0) + 4 + (longlong)*(int *)(lVar18 + 0x7c) * 0xc)
                != 0)))))) {
      FUN_14055ab72(&local_98);
      FUN_14055a9ea(&local_c0,param_3);
      FUN_14055abb8(lVar18,&local_c0,&local_98);
      if ((int)uStack_90 != local_64) {
        local_af = 0;
        iStack_bc = DAT_14cab2cd4;
        local_b8 = *(int *)(lVar6 + 0x30);
        local_b0 = *(undefined1 *)(local_c8 + 0x60);
        local_c0 = 0;
        if (*(char *)(param_1 + 0x2d) == '\x01') {
          bVar19 = *(char *)(param_1 + 0x2c) << 2;
        }
        else {
          bVar19 = 0;
        }
        local_ae = bVar19 | local_ae & 0xf8;
        local_e0 = (undefined8 *)(param_1 + 0x80);
        local_e8 = &local_98;
        iStack_b4 = local_b8;
        FUN_14055e0cc(lVar3,local_d0,&local_c0,lVar18);
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14055a9b2(&local_98);
  }
  plVar21 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055a9b2 FUN_14055a9b2 body=55 status=ok
// SIG undefined FUN_14055a9b2(void)

void FUN_14055a9b2(longlong *param_1)

{
  FUN_14055aaf6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14055a9ea FUN_14055a9ea body=158 status=ok
// SIG undefined FUN_14055a9ea(void)

void FUN_14055a9ea(longlong *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)CONCAT71((int7)((ulonglong)param_3 >> 8),2);
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  cVar1 = param_2[0xc];
  if (cVar1 != '\x02') {
    uVar2 = (uint)(cVar1 == '\x01' || *(float *)(param_2 + 0x14) != 0.0) + *(int *)(param_2 + 0x10);
    param_1[1] = (ulonglong)uVar2 << 0x20;
  }
  if (*param_2 != '\x02') {
    *param_1 = ((ulonglong)
                ((uint)((*(int *)(param_2 + 4) < (int)uVar2 || cVar1 == '\x02') &&
                       (*param_2 == '\0' || *(float *)(param_2 + 8) != 0.0)) + *(int *)(param_2 + 4)
                ) << 0x20) + 1;
  }
  return;
}



// FUNCTION 14055aa88 FUN_14055aa88 body=109 status=ok
// SIG undefined FUN_14055aa88(void)

longlong FUN_14055aa88(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_1 + 0x1fc)) {
    lVar1 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x208);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x210) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x100;
        if (*(uint *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar3 * 0x100) == param_2)
        goto LAB_14055aae9;
        iVar3 = *(int *)(lVar1 + 0xf8);
      } while (iVar3 != -1);
    }
  }
  lVar1 = 0;
LAB_14055aae9:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 14055aaf6 FUN_14055aaf6 body=123 status=ok
// SIG undefined FUN_14055aaf6(void)

void FUN_14055aaf6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 14055ab72 FUN_14055ab72 body=70 status=ok
// SIG undefined FUN_14055ab72(void)

void FUN_14055ab72(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14056246a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14055abb8 FUN_14055abb8 body=447 status=ok
// SIG undefined FUN_14055abb8(void)

void FUN_14055abb8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [44];
  undefined1 local_cc [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int iStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14055b2f2(&local_68,param_1 + 0x60,*param_2);
  if ((local_58 != -1) || (iStack_54 == 0)) {
    do {
      local_88 = local_68;
      uStack_84 = uStack_64;
      uStack_80 = uStack_60;
      uStack_7c = uStack_5c;
      cVar3 = FUN_14055ad78(param_2,&local_88);
      if (cVar3 == '\0') break;
      FUN_14055ae82(&local_88,param_1 + 0x60,CONCAT44(iStack_54,local_58));
      local_a8 = local_88;
      uStack_a4 = uStack_84;
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      lVar2 = CONCAT44(uStack_84,local_88);
      local_98 = local_78;
      lVar7 = CONCAT44(uStack_84,local_88);
      lVar6 = CONCAT44(uStack_7c,uStack_80);
      uVar4 = local_78;
      lVar5 = lVar6;
      if (lVar6 != 0 || (int)local_78 != 0) {
        do {
          if ((longlong)*(int *)(lVar6 + 0x1c) == -1) {
            lVar7 = 0;
          }
          else {
            lVar7 = (longlong)
                    *(int *)(*(longlong *)(lVar7 + 0x40) + (longlong)*(int *)(lVar6 + 0x1c) * 0xc) *
                    8 + *(longlong *)(lVar7 + 0x50);
          }
          local_b8 = *(undefined4 *)(lVar7 + 4 + (longlong)(int)uVar4 * 8);
          puVar1 = (undefined4 *)
                   (*(longlong *)(param_1 + 0xc0) +
                   (longlong)*(int *)(lVar7 + (longlong)(int)uVar4 * 8) * 0x10);
          local_c8 = *puVar1;
          uStack_c4 = puVar1[1];
          uStack_c0 = puVar1[2];
          uStack_bc = puVar1[3];
          FUN_14055b026(param_3,local_cc,&local_c8);
          FUN_14055af82(&local_a8);
          lVar7 = CONCAT44(uStack_a4,local_a8);
          lVar6 = CONCAT44(uStack_9c,uStack_a0);
          uVar4 = local_98 & 0xffffffff;
        } while (((lVar7 != lVar2) || (lVar6 != 0)) || (lVar5 = 0, (int)local_98 != 0));
      }
      FUN_14055b6c8(&local_68,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
    } while ((local_58 != -1) || (iStack_54 == 0));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055ad78 FUN_14055ad78 body=266 status=ok
// SIG undefined FUN_14055ad78(void)

undefined8 FUN_14055ad78(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulonglong in_RAX;
  undefined7 uVar8;
  bool bVar9;
  
  cVar1 = *param_1;
  if ((cVar1 != '\x02') && (param_1[8] != '\x02')) {
    uVar4 = *(uint *)(param_1 + 0xc);
    in_RAX = (ulonglong)uVar4;
    if ((int)uVar4 < (int)*(uint *)(param_1 + 4)) {
      return 0;
    }
    if (*(uint *)(param_1 + 4) == uVar4) {
      in_RAX = 0;
      if (cVar1 == '\0') {
        return 0;
      }
      if (param_1[8] == '\0') {
        return 0;
      }
    }
  }
  cVar2 = *param_2;
  cVar3 = param_2[8];
  if (cVar2 == '\x02') {
    uVar8 = (undefined7)(in_RAX >> 8);
    bVar7 = true;
    bVar9 = true;
    if (cVar1 == '\x02' || cVar3 == '\x02') goto LAB_14055ae49;
  }
  else {
    if (cVar3 != '\x02') {
      uVar4 = *(uint *)(param_2 + 0xc);
      in_RAX = (ulonglong)uVar4;
      if ((int)uVar4 < (int)*(uint *)(param_2 + 4)) {
        return 0;
      }
      if (*(uint *)(param_2 + 4) == uVar4) {
        in_RAX = 0;
        if (cVar2 == '\0') {
          return 0;
        }
        if (cVar3 == '\0') {
          return 0;
        }
      }
    }
    uVar8 = (undefined7)(in_RAX >> 8);
    bVar7 = true;
    if (param_1[8] != '\x02') {
      iVar5 = *(int *)(param_2 + 4);
      iVar6 = *(int *)(param_1 + 0xc);
      bVar7 = iVar5 < iVar6;
      if (param_1[8] == '\x01') {
        bVar7 = iVar5 < iVar6;
        if (cVar2 == '\x01') {
          bVar7 = iVar5 <= iVar6;
        }
        uVar8 = 0;
      }
    }
    bVar9 = true;
    if (cVar1 == '\x02' || cVar3 == '\x02') goto LAB_14055ae49;
  }
  iVar5 = *(int *)(param_2 + 0xc);
  iVar6 = *(int *)(param_1 + 4);
  bVar9 = iVar6 < iVar5;
  if (cVar1 == '\x01') {
    bVar9 = iVar6 < iVar5;
    if (cVar3 == '\x01') {
      bVar9 = iVar6 <= iVar5;
    }
  }
LAB_14055ae49:
  return CONCAT71(uVar8,bVar7 & bVar9);
}



// FUNCTION 14055ae82 FUN_14055ae82 body=255 status=ok
// SIG undefined FUN_14055ae82(void)

void FUN_14055ae82(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  if (param_3 >> 0x20 == 0 || (param_3 & 0xffffffff) != 0xffffffff) {
    lVar3 = param_2;
    if ((int)param_3 != -1) {
      lVar3 = ((longlong)param_3 >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)param_3 * 0xc) *
              0x20 + *(longlong *)(param_2 + 0x30);
    }
    param_1[1] = lVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    while( true ) {
      if ((lVar3 == 0) ||
         (((longlong)*(int *)(lVar3 + 0x1c) != -1 &&
          (0 < *(int *)(*(longlong *)(param_2 + 0x40) + 4 + (longlong)*(int *)(lVar3 + 0x1c) * 0xc))
          ))) {
        return;
      }
      if ((*(int *)(lVar3 + 0x10) == -1) && (*(int *)(lVar3 + 0x14) != 0)) break;
      plVar1 = (longlong *)(lVar3 + 0x10);
      iVar2 = (int)*plVar1;
      lVar3 = param_2;
      if (iVar2 != -1) {
        lVar3 = (*plVar1 >> 0x20) * 0x20 +
                (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar2 * 0xc) * 0x20 +
                *(longlong *)(param_2 + 0x30);
      }
      param_1[1] = lVar3;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    param_1[1] = 0;
  }
  else {
    param_1[1] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14055af82 FUN_14055af82 body=163 status=ok
// SIG undefined FUN_14055af82(void)

void FUN_14055af82(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar3;
  lVar1 = param_1[1];
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if ((longlong)*(int *)(lVar1 + 0x1c) == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(longlong *)(*param_1 + 0x40) + 4 + (longlong)*(int *)(lVar1 + 0x1c) * 0xc);
    }
    if ((-1 < iVar3) && (iVar3 < iVar4)) break;
    if ((*(int *)(lVar1 + 0x10) == -1) && (*(int *)(lVar1 + 0x14) != 0)) {
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
    lVar2 = *param_1;
    iVar3 = (int)*(longlong *)(lVar1 + 0x10);
    if (iVar3 != -1) {
      lVar2 = (*(longlong *)(lVar1 + 0x10) >> 0x20) * 0x20 +
              (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar3 * 0xc) * 0x20 +
              *(longlong *)(lVar2 + 0x30);
    }
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    iVar3 = 0;
    lVar1 = lVar2;
  }
  return;
}



// FUNCTION 14055b026 FUN_14055b026 body=303 status=ok
// SIG undefined FUN_14055b026(void)

undefined4 * FUN_14055b026(longlong param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14055bba2(param_1,local_48);
  local_40[4] = param_3[4];
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar5;
  local_40[2] = uVar4;
  local_40[3] = uVar1;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = local_40[1] ^ *local_40 ^ local_40[2];
  local_58 = 0;
  cVar2 = FUN_14055b156(param_1,uVar5,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[6] = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14055bd90(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14055b156 FUN_14055b156 body=182 status=ok
// SIG undefined FUN_14055b156(void)

void FUN_14055b156(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
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
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *(undefined4 *)(param_3 + 1);
    local_40 = *param_3;
    iVar8 = FUN_14055b20e();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x1c) = *(undefined4 *)(param_3 + 2);
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_14055b630(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_14055b1e1;
    }
  }
  uVar7 = 0;
LAB_14055b1e1:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14055b20e FUN_14055b20e body=226 status=ok
// SIG undefined FUN_14055b20e(void)

int FUN_14055b20e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar1 = (longlong)iVar5 * 0x1c;
        local_60 = *(int *)(lVar4 + 8 + lVar1);
        local_68 = *(undefined8 *)(lVar4 + lVar1);
        local_48 = *param_3;
        local_40 = *(int *)(param_3 + 1);
        local_58 = local_68;
        local_50 = local_60;
        cVar2 = FUN_1401246e4(&local_58,&local_48);
        if ((cVar2 != '\0') && (local_50 == local_40)) goto LAB_14055b2ca;
        lVar4 = *param_1;
        iVar5 = *(int *)(lVar4 + 0x14 + lVar1);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14055b2ca:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14055b2f2 FUN_14055b2f2 body=703 status=ok
// SIG undefined FUN_14055b2f2(void)

ulonglong * FUN_14055b2f2(ulonglong *param_1,undefined4 *param_2,ulonglong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  ulonglong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = (ulonglong)param_2;
  local_58[1] = 2;
  uVar14 = param_1[2];
  local_58[0] = param_3;
  while( true ) {
    puVar15 = param_2;
    if ((int)uVar14 != -1) {
      puVar15 = (undefined4 *)
                (((longlong)uVar14 >> 0x20) * 0x20 +
                (longlong)*(int *)(*(longlong *)(param_2 + 8) + (longlong)(int)uVar14 * 0xc) * 0x20
                + *(longlong *)(param_2 + 0xc));
    }
    uVar2 = puVar15[1];
    uVar3 = puVar15[2];
    uVar4 = puVar15[3];
    *(undefined4 *)param_1 = *puVar15;
    *(undefined4 *)((longlong)param_1 + 4) = uVar2;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    lVar7 = (longlong)(int)puVar15[6];
    if (lVar7 == -1) goto LAB_14055b4e3;
    uVar6 = *(uint *)(*(longlong *)(param_2 + 8) + 4 + lVar7 * 0xc);
    local_60 = puVar15;
    if ((int)uVar6 < 1) break;
    lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + lVar7 * 0xc) * 0x20 +
            *(longlong *)(param_2 + 0xc);
    uVar9 = 0;
    uVar14 = (ulonglong)uVar6;
    uVar13 = uVar6;
    do {
      uVar14 = uVar14 >> 1;
      uVar17 = (uint)uVar14 + (int)uVar9;
      cVar5 = FUN_14055b5b2(*(undefined8 *)(lVar7 + (ulonglong)uVar17 * 0x20),param_3);
      if (cVar5 != '\0') {
        uVar9 = (ulonglong)(uVar17 + (uVar13 & 1));
      }
      bVar1 = 1 < uVar13;
      uVar13 = (uint)uVar14;
    } while (bVar1);
    iVar16 = (int)uVar9;
    if (iVar16 < (int)uVar6) {
      lVar10 = uVar9 * 0x20;
      uVar14 = *(ulonglong *)(lVar7 + lVar10);
      if (((char)uVar14 != (char)param_3) ||
         (((char)param_3 != '\x02' && ((uVar14 ^ param_3) >> 0x20 != 0)))) {
        if (iVar16 < 1) goto LAB_14055b471;
        uVar9 = (ulonglong)(iVar16 - 1);
        cVar5 = FUN_14055ad78(uVar9 * 0x20 + lVar7,local_58);
        if (cVar5 == '\0') {
          uVar14 = *(ulonglong *)(lVar10 + lVar7);
LAB_14055b471:
          uVar8 = uVar14 & 0xffffffff00000000;
          if ((char)uVar14 == '\x01') {
            uVar14 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = uVar14;
            if ((uVar14 & 0xff) == 0) {
              uVar14 = 0;
              uVar9 = 1;
            }
          }
          if (iVar16 < 1) {
LAB_14055b566:
            uVar6 = (uint)uVar14;
            uVar14 = *param_1;
            uVar11 = uVar14;
            uVar12 = uVar14;
          }
          else {
LAB_14055b499:
            uVar6 = (uint)uVar14;
            uVar14 = *(ulonglong *)(lVar7 + 8 + (ulonglong)(iVar16 - 1) * 0x20);
            if ((char)uVar14 == '\x01') {
              uVar11 = 0;
              uVar12 = 0;
            }
            else {
              uVar11 = uVar14;
              uVar12 = uVar14;
              if ((uVar14 & 0xff) == 0) {
                uVar11 = 0;
                uVar12 = 1;
              }
            }
          }
          *param_1 = uVar12 & 0xff |
                     (ulonglong)((uint)uVar11 & 0xffffff00) | uVar14 & 0xffffffff00000000;
          param_1[1] = uVar9 & 0xff | uVar6 & 0xffffff00 | uVar8;
LAB_14055b4e3:
          if ((local_58[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_1;
        }
      }
    }
    else {
      if ((int)uVar6 < iVar16) break;
      uVar9 = (ulonglong)(iVar16 - 1);
      cVar5 = FUN_14055ad78(uVar9 * 0x20 + lVar7,local_58);
      if (cVar5 == '\0') {
        uVar14 = param_1[1];
        uVar8 = uVar14 & 0xffffffff00000000;
        uVar9 = uVar14;
        goto LAB_14055b499;
      }
    }
    uVar14 = uVar9 << 0x20 | (ulonglong)(uint)local_60[6];
    param_1[2] = uVar14;
    param_2 = (undefined4 *)param_1[3];
  }
  uVar14 = param_1[1];
  uVar8 = uVar14 & 0xffffffff00000000;
  uVar9 = uVar14;
  goto LAB_14055b566;
}



// FUNCTION 14055b5b2 FUN_14055b5b2 body=125 status=ok
// SIG undefined FUN_14055b5b2(void)

bool FUN_14055b5b2(ulonglong param_1,ulonglong param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  char cVar8;
  ulonglong local_10;
  ulonglong local_8;
  
  puVar6 = &local_10;
  puVar7 = &local_10;
  local_8 = param_1;
  local_10 = param_2;
  cVar1 = (char)param_2;
  cVar3 = (char)param_1;
  if (cVar3 == '\x02') {
    bVar2 = cVar1 != '\x02';
  }
  else {
    iVar4 = (int)(param_1 >> 0x20);
    if (cVar1 == '\x02') {
      cVar8 = '\x02';
    }
    else {
      iVar5 = (int)(param_2 >> 0x20);
      if (iVar4 < iVar5) {
        puVar6 = &local_8;
      }
      else if ((iVar4 <= iVar5) && (puVar6 = &local_10, cVar3 == '\x01')) {
        puVar6 = &local_8;
      }
      cVar8 = (char)*puVar6;
      puVar7 = puVar6;
    }
    if ((cVar8 == cVar3) && (*(int *)((longlong)puVar7 + 4) == iVar4)) {
      bVar2 = param_1 >> 0x20 != param_2 >> 0x20 || cVar1 != cVar3;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}



// FUNCTION 14055b630 FUN_14055b630 body=151 status=ok
// SIG undefined FUN_14055b630(void)

void FUN_14055b630(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x1c + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14055b6c8 FUN_14055b6c8 body=905 status=ok
// SIG undefined FUN_14055b6c8(void)

void FUN_14055b6c8(ulonglong *param_1,byte param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  byte local_68;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = (ulonglong)(uint)param_1[2];
  while( true ) {
    if (((int)uVar8 == -1) && (*(int *)((longlong)param_1 + 0x14) != 0)) goto LAB_14055b8c1;
    uVar8 = param_1[2];
    uVar15 = param_1[3];
    if ((int)uVar8 != -1) {
      uVar15 = ((longlong)uVar8 >> 0x20) * 0x20 +
               (longlong)*(int *)(*(longlong *)(uVar15 + 0x20) + (longlong)(int)uVar8 * 0xc) * 0x20
               + *(longlong *)(uVar15 + 0x30);
    }
    uVar13 = *(ulonglong *)(uVar15 + (ulonglong)param_2 * 8);
    uVar12 = *param_1;
    uVar4 = param_1[1];
    uVar10 = uVar12;
    if (param_2 != 0) {
      uVar10 = uVar4;
    }
    cVar9 = (char)uVar13;
    if ((cVar9 != (char)uVar10) || (cVar9 != '\x02' && (uVar10 ^ uVar13) >> 0x20 != 0)) break;
    uVar8 = *(ulonglong *)(uVar15 + 0x10);
    param_1[2] = uVar8;
  }
  if ((char)uVar4 != '\x02' && (char)uVar12 != '\x02') {
    uVar15 = 2;
    iVar14 = (int)(uVar12 >> 0x20);
    iVar3 = (int)(uVar4 >> 0x20);
    if (iVar3 < iVar14) {
LAB_14055b9db:
      uVar13 = 0;
      uVar10 = 0;
      goto LAB_14055b7a3;
    }
    if (iVar14 == iVar3) {
      uVar13 = 0;
      if ((char)uVar12 == '\0') goto LAB_14055b9db;
      uVar10 = 0;
      if ((char)uVar4 == '\0') goto LAB_14055b7a3;
    }
  }
  if (param_2 == 0) {
    uVar4 = uVar12;
  }
  uVar10 = uVar4 >> 0x20;
  if ((char)uVar4 == '\0') {
    uVar13 = uVar4 & 0xff;
    uVar15 = 1;
  }
  else if (((uint)uVar4 & 0xff) == 1) {
    uVar13 = 0;
    uVar15 = 0;
  }
  else {
    uVar13 = (ulonglong)((uint)uVar4 & 0xffffff00);
    uVar15 = uVar4 & 0xff;
  }
LAB_14055b7a3:
  uVar13 = uVar10 << 0x20 | uVar13 | uVar15;
  local_68 = param_2;
  FUN_14055ba52(param_1,&local_40,uVar8,uVar13);
  if (((int)local_40 == -1) && (local_40._4_4_ != 0)) {
    bVar1 = false;
  }
  else {
    do {
      puVar5 = (undefined8 *)param_1[3];
      if ((int)local_40 != -1) {
        puVar5 = (undefined8 *)
                 (((longlong)local_40 >> 0x20) * 0x20 +
                 (longlong)*(int *)(puVar5[4] + (longlong)(int)local_40 * 0xc) * 0x20 + puVar5[6]);
      }
      if (param_2 == 0) {
        uVar6 = puVar5[1];
      }
      else {
        uVar6 = *puVar5;
      }
      bVar1 = true;
      if (((char)uVar6 != (char)uVar15) ||
         (((int)uVar15 != 2 && ((int)((ulonglong)uVar6 >> 0x20) != (int)uVar10))))
      goto LAB_14055b865;
      param_1[2] = local_40;
      local_68 = param_2;
      FUN_14055ba52(param_1,&local_48,local_40,uVar13);
      local_40 = local_48;
    } while ((local_48 >> 0x20 == 0) || ((int)local_48 != -1));
    bVar1 = false;
  }
LAB_14055b865:
  puVar11 = (ulonglong *)param_1[3];
  iVar3 = (int)param_1[2];
  puVar7 = puVar11;
  if (iVar3 != -1) {
    puVar7 = (ulonglong *)
             (((longlong)param_1[2] >> 0x20) * 0x20 +
             (longlong)*(int *)(puVar11[4] + (longlong)iVar3 * 0xc) * 0x20 + puVar11[6]);
  }
  if (param_2 != 0) {
    puVar7 = puVar7 + 1;
  }
  uVar8 = *puVar7;
  if (bVar1) {
    if ((int)local_40 != -1) {
      puVar11 = (ulonglong *)
                (((longlong)local_40 >> 0x20) * 0x20 +
                (longlong)*(int *)(puVar11[4] + (longlong)(int)local_40 * 0xc) * 0x20 + puVar11[6]);
    }
    uVar12 = *puVar11;
    uVar4 = puVar11[1];
    if (param_2 == 0) {
      puVar11 = &local_58;
      cVar9 = (char)uVar4;
      uVar2 = uVar4;
    }
    else {
      puVar11 = &local_50;
      cVar9 = (char)uVar12;
      uVar2 = uVar12;
    }
    if ((cVar9 != (char)uVar15) || (((int)uVar15 != 2 && ((int)(uVar2 >> 0x20) != (int)uVar10)))) {
      local_50 = uVar12;
      local_58 = uVar4;
      uVar15 = *puVar11;
      if ((char)uVar15 == '\x01') {
        uVar12 = 0;
        uVar8 = 0;
      }
      else if ((uVar15 & 0xff) == 0) {
        uVar8 = uVar15 & 0xff;
        uVar12 = 1;
      }
      else {
        uVar8 = (ulonglong)((uint)uVar15 & 0xffffff00);
        uVar12 = uVar15 & 0xff;
      }
      uVar8 = uVar15 & 0xffffffff00000000 | uVar12 | uVar8;
    }
  }
  uVar15 = uVar13;
  if (param_2 != 0) {
    uVar15 = uVar8;
    uVar8 = uVar13;
  }
  *param_1 = uVar8;
  param_1[1] = uVar15;
LAB_14055b8c1:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055ba52 FUN_14055ba52 body=335 status=ok
// SIG undefined FUN_14055ba52(void)

undefined4 *
FUN_14055ba52(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  lVar7 = lVar10;
  if ((int)param_3 != -1) {
    lVar7 = (param_3 >> 0x20) * 0x20 +
            (longlong)*(int *)(*(longlong *)(lVar10 + 0x20) + (longlong)(int)param_3 * 0xc) * 0x20 +
            *(longlong *)(lVar10 + 0x30);
  }
  lVar5 = (longlong)*(int *)(lVar7 + 0x18);
  uVar6 = 0xffffffff;
  if (lVar5 != -1) {
    uVar2 = *(uint *)(*(longlong *)(lVar10 + 0x20) + 4 + lVar5 * 0xc);
    if (uVar2 != 0) {
      lVar10 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x20) + lVar5 * 0xc) * 0x20 +
               *(longlong *)(lVar10 + 0x30);
      if (param_5 == '\0') {
        if ((int)uVar2 < 1) goto LAB_14055bb82;
        iVar8 = 0;
        uVar9 = uVar2;
        do {
          uVar1 = (uVar9 >> 1) + iVar8;
          cVar3 = FUN_147554c48(param_4,*(undefined8 *)(lVar10 + 8 + (ulonglong)uVar1 * 0x20));
          if (cVar3 == '\0') {
            iVar8 = uVar1 + (uVar9 & 1);
          }
          bVar11 = 1 < uVar9;
          uVar9 = uVar9 >> 1;
        } while (bVar11);
        iVar8 = iVar8 + -1;
      }
      else {
        if ((int)uVar2 < 1) goto LAB_14055bb82;
        iVar8 = 0;
        uVar9 = uVar2;
        do {
          uVar1 = iVar8 + (uVar9 >> 1);
          cVar3 = FUN_14055b5b2(*(undefined8 *)(lVar10 + (ulonglong)uVar1 * 0x20),param_4);
          if (cVar3 != '\0') {
            iVar8 = uVar1 + (uVar9 & 1);
          }
          bVar11 = 1 < uVar9;
          uVar9 = uVar9 >> 1;
        } while (bVar11);
      }
      iVar4 = -1;
      if (iVar8 < 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0xffffffff;
        if (iVar8 < (int)uVar2) {
          uVar6 = *(undefined4 *)(lVar7 + 0x18);
          iVar4 = iVar8;
        }
      }
      goto LAB_14055bb87;
    }
  }
LAB_14055bb82:
  iVar4 = -1;
LAB_14055bb87:
  *param_2 = uVar6;
  param_2[1] = iVar4;
  return param_2;
}



// FUNCTION 14055bba2 FUN_14055bba2 body=493 status=ok
// SIG undefined FUN_14055bba2(void)

int * FUN_14055bba2(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x1c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 14055bd90 FUN_14055bd90 body=659 status=ok
// SIG undefined FUN_14055bd90(void)

void FUN_14055bd90(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_14055bdf4;
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
  } while (uVar9 != uVar2);
LAB_14055bdf4:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar7 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar15 * 0x1c;
      uVar7 = (longlong)
              (int)(*(uint *)(lVar8 + 4 + lVar14) ^ *(uint *)(lVar8 + lVar14) ^
                   *(uint *)(lVar8 + 8 + lVar14)) & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar8 + 0x18 + lVar14) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x14 + lVar14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar8 = (longlong)iVar15;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar10 <= iVar15) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 14055c024 FUN_14055c024 body=347 status=ok
// SIG undefined FUN_14055c024(void)

void FUN_14055c024(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14055b2f2(&local_58,param_1,(param_2 << 0x20) + 1);
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  FUN_14055ae82(&local_70,param_1,local_48);
  local_88 = local_70;
  uStack_84 = uStack_6c;
  uStack_80 = uStack_68;
  uStack_7c = uStack_64;
  local_78 = local_60;
  lVar3 = CONCAT44(uStack_6c,local_70);
  lVar2 = CONCAT44(uStack_64,uStack_68);
  if (lVar2 != 0 || (int)local_60 != 0) {
    do {
      if ((longlong)*(int *)(lVar2 + 0x1c) == -1) {
        lVar3 = 0;
      }
      else {
        lVar3 = (longlong)
                *(int *)(*(longlong *)(lVar3 + 0x40) + (longlong)*(int *)(lVar2 + 0x1c) * 0xc) * 8 +
                *(longlong *)(lVar3 + 0x50);
      }
      local_98 = *(undefined4 *)(lVar3 + 4 + (longlong)(int)local_60 * 8);
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0xc0) +
               (longlong)*(int *)(lVar3 + (longlong)(int)local_60 * 8) * 0x10);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      FUN_14055b026(param_4,local_ac,&local_a8);
      FUN_14055af82(&local_88);
      lVar3 = CONCAT44(uStack_84,local_88);
      lVar2 = CONCAT44(uStack_7c,uStack_80);
      local_60 = local_78 & 0xffffffff;
    } while ((lVar3 != CONCAT44(uStack_6c,local_70) || lVar2 != 0) || (int)local_78 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14055c180 FUN_14055c180 body=1090 status=ok
// SIG undefined FUN_14055c180(void)

void FUN_14055c180(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_f8 [46];
  undefined2 local_ca;
  int local_c8;
  uint local_c4;
  ulonglong local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [32];
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = FUN_14009d2a0();
  local_ca = *(undefined2 *)(lVar7 + 0x11a);
  lVar7 = FUN_14009d2a0();
  local_4c = 0;
  iVar16 = *(int *)(lVar7 + 0x164);
  local_50 = 0;
  uVar5 = iVar16 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar5) {
    local_4c = 0x100;
    if (0x100 < uVar5) {
      local_4c = uVar5;
    }
    FUN_14497ddce(local_70,0);
    iVar16 = *(int *)(lVar7 + 0x164);
  }
  local_50 = iVar16;
  if (iVar16 != 0) {
    memcpy(local_70,(void *)(lVar7 + 0x144),(ulonglong)(iVar16 + 0x1fU >> 3 & 0xfffffffc));
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  puVar2 = (uint *)(param_1 + 0x20);
  iVar16 = *(int *)(param_1 + 0x38);
  if (iVar16 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar8 = puVar2;
    }
    uVar5 = *puVar8;
    if (uVar5 == 0) {
      iVar18 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar18 = iVar16 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar15 == uVar17) {
          iVar6 = 1;
          goto LAB_14055c3f8;
        }
        iVar18 = iVar18 + 0x20;
        uVar5 = puVar8[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar3 = uVar15 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar10) {
      iVar10 = iVar16;
    }
  }
  iVar6 = iVar16;
  if (iVar10 != iVar16) {
    uVar5 = 0xffffffff;
    do {
      lVar7 = *plVar1;
      sVar14 = *(short *)(lVar7 + 0x10 + (longlong)iVar10 * 0x1c);
      if (sVar14 != -1) {
        local_c4 = uVar5;
        local_c0 = uVar17;
        if (param_3 == 1) {
          local_c8 = iVar18;
          FUN_14055c5c4(param_2 + 0x28,sVar14,local_ca);
          sVar14 = *(short *)(lVar7 + (longlong)iVar10 * 0x1c + 0x10);
          iVar18 = local_c8;
        }
        FUN_14055c6c6(param_2 + 0x28,sVar14,local_70);
        iVar6 = *(int *)(param_1 + 0x38);
        uVar17 = local_c0;
        uVar5 = local_c4;
      }
      uVar5 = uVar5 & ~(uint)uVar15;
      puVar8 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar8 = puVar2;
      }
      iVar10 = (int)uVar17;
      lVar7 = (longlong)iVar10;
      uVar11 = puVar8[lVar7] & uVar5;
      if (uVar11 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar10 < iVar12) {
          lVar9 = 0;
          do {
            uVar11 = puVar8[lVar7 + lVar9 + 1];
            if (uVar11 != 0) {
              uVar17 = (ulonglong)(iVar10 + (int)lVar9 + 1);
              uVar5 = 0xffffffff;
              goto LAB_14055c3cd;
            }
            iVar18 = iVar18 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar13 - lVar7 != lVar9);
          uVar5 = 0xffffffff;
          lVar7 = (longlong)iVar13;
        }
        uVar17 = lVar7 + 1U & 0xffffffff;
        iVar10 = iVar6;
      }
      else {
LAB_14055c3cd:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar3 = uVar15 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar10 = (iVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar10) {
          iVar10 = iVar6;
        }
      }
    } while (iVar10 != iVar16);
  }
LAB_14055c3f8:
  iVar16 = *(int *)(param_1 + 0x58);
  if (iVar16 < 2) {
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar18 = iVar16 + 3;
    if (-1 < iVar16) {
      iVar18 = iVar16;
    }
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) < iVar18 >> 2) {
      local_90 = 0x100000000;
      local_80 = 0xffffffff;
      uStack_78 = 0;
      uStack_88 = puVar2;
      if (iVar6 == 0) {
        iVar16 = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        iVar16 = *(int *)(param_1 + 0x38);
      }
      local_b0 = (undefined4)local_90;
      uStack_ac = local_90._4_4_;
      uStack_a8 = (undefined4)uStack_88;
      uStack_a4 = uStack_88._4_4_;
      uStack_98 = CONCAT44(uStack_74,uStack_78);
      local_a0 = local_80;
      uVar4 = local_a0;
      local_a0._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      iVar18 = local_a0._4_4_;
      local_b8 = plVar1;
      if ((local_a0._4_4_ != iVar16) || (local_a0 = local_80, uStack_88 != puVar2)) {
        do {
          local_a0 = uVar4;
          *(undefined4 *)
           (lVar7 + (longlong)*(int *)(*local_b8 + 0x18 + (longlong)iVar18 * 0x1c) * 4) = 0xffffffff
          ;
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
          FUN_1449c0562(&local_b0);
          iVar18 = local_a0._4_4_;
          uVar4 = local_a0;
        } while (local_b8 != plVar1 ||
                 ((uint *)CONCAT44(uStack_a4,uStack_a8) != puVar2 || local_a0._4_4_ != iVar16));
      }
    }
    else if (iVar16 == 1) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lVar7 + lVar9 * 4) = 0xffffffff;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x58));
    }
    FUN_140957a3c(plVar1,0);
  }
  else {
    FUN_140957a3c(plVar1,0);
    *(undefined4 *)(param_1 + 0x58) = 1;
    FUN_140560d86(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055c5c4 FUN_14055c5c4 body=257 status=ok
// SIG undefined FUN_14055c5c4(void)

void FUN_14055c5c4(longlong param_1,ushort param_2,undefined4 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  uVar1 = (undefined2)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14055cd1c();
  local_48 = param_1;
  local_40 = uVar1;
  if (*(int *)(param_1 + 0x118) != 0) {
    lVar2 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x110);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uint)param_2) * 4);
    while (iVar3 = iVar4, iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xd0);
      iVar4 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
      if (*(ushort *)(lVar2 + (longlong)iVar3 * 0xc) == param_2) {
        do {
          FUN_14055cd1c(param_1,*(undefined2 *)(lVar2 + 2 + (longlong)iVar3 * 0xc),param_3);
          FUN_14055cc56(param_1,*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xd0) + 2 + (longlong)iVar3 * 0xc),
                        &local_48);
          do {
            iVar3 = iVar4;
            if (iVar3 == -1) goto LAB_14055c6a2;
            lVar2 = *(longlong *)(param_1 + 0xd0);
            iVar4 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
          } while (*(ushort *)(lVar2 + (longlong)iVar3 * 0xc) != param_2);
        } while( true );
      }
    }
  }
LAB_14055c6a2:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055c6c6 FUN_14055c6c6 body=257 status=ok
// SIG undefined FUN_14055c6c6(void)

void FUN_14055c6c6(longlong param_1,ushort param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14055c88e();
  local_48 = param_1;
  local_40 = param_3;
  if (*(int *)(param_1 + 0x118) != 0) {
    lVar1 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x110);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uint)param_2) * 4);
    while (iVar2 = iVar3, iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      if (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) {
        do {
          FUN_14055c88e(param_1,*(undefined2 *)(lVar1 + 2 + (longlong)iVar2 * 0xc),param_3);
          FUN_14055c7c8(param_1,*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xd0) + 2 + (longlong)iVar2 * 0xc),
                        &local_48);
          do {
            iVar2 = iVar3;
            if (iVar2 == -1) goto LAB_14055c7a4;
            lVar1 = *(longlong *)(param_1 + 0xd0);
            iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
          } while (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) != param_2);
        } while( true );
      }
    }
  }
LAB_14055c7a4:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055c7c8 FUN_14055c7c8 body=197 status=ok
// SIG undefined FUN_14055c7c8(void)

void FUN_14055c7c8(longlong param_1,ushort param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    lVar1 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x110);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uint)param_2) * 4);
    while (iVar2 = iVar3, iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      if (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) {
        do {
          FUN_14055c88e(*param_3,*(undefined2 *)(lVar1 + 2 + (longlong)iVar2 * 0xc),param_3[1]);
          FUN_14055c7c8(param_1,*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xd0) + 2 + (longlong)iVar2 * 0xc),param_3
                       );
          do {
            iVar2 = iVar3;
            if (iVar2 == -1) {
              return;
            }
            lVar1 = *(longlong *)(param_1 + 0xd0);
            iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
          } while (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 14055c88e FUN_14055c88e body=415 status=ok
// SIG undefined FUN_14055c88e(void)

void FUN_14055c88e(longlong param_1,undefined4 param_2,void *param_3)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [39];
  undefined1 local_61;
  undefined1 local_60 [32];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar12 = *(int *)((longlong)param_3 + 0x20);
  uVar7 = iVar12 + 0x1f;
  if (0x1f < uVar7) {
    iVar9 = 0;
    uVar13 = 0;
    do {
      uVar10 = *(uint *)((longlong)param_3 + uVar13 * 4);
      if (uVar10 != 0) {
        iVar4 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        if ((iVar4 - iVar9 < iVar12) && (iVar4 + 1 != iVar9)) {
          local_40 = 0;
          uVar7 = uVar7 & 0xffffffe0;
          if (0 < (int)uVar7) {
            uVar10 = 0x100;
            if (0x100 < uVar7) {
              uVar10 = uVar7;
            }
            local_40 = (ulonglong)uVar10 << 0x20;
            FUN_14497ddce(local_60,0);
            iVar12 = *(int *)((longlong)param_3 + 0x20);
          }
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (iVar12 != 0) {
            memcpy(local_60,param_3,(ulonglong)(iVar12 + 0x1fU >> 3 & 0xfffffffc));
          }
          lVar3 = *(longlong *)(param_1 + 0x98);
          uVar13 = (ulonglong)(ushort)param_2;
          uVar1 = *(ushort *)(lVar3 + uVar13 * 8);
          if (uVar1 != 0xffff) {
            lVar11 = (ulonglong)((uint)uVar1 * 0x28) + *(longlong *)(param_1 + 8);
            FUN_14010b303(lVar11,local_60,1,&local_61);
            cVar5 = FUN_1403b8874(local_60,lVar11,0);
            if (cVar5 != '\0') break;
          }
          uVar8 = FUN_14055ca2e(param_1,local_60,0);
          sVar2 = *(short *)(lVar3 + uVar13 * 8);
          if (sVar2 == -1) {
            uVar6 = FUN_1449dfe96(param_1,uVar8,param_2,1);
          }
          else {
            uVar6 = FUN_14055cf42(param_1,uVar8,sVar2,*(undefined2 *)(lVar3 + 2 + uVar13 * 8));
          }
          *(short *)(lVar3 + uVar13 * 8) = (short)uVar8;
          *(undefined2 *)(lVar3 + 2 + uVar13 * 8) = uVar6;
          *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
          *(undefined1 *)(param_1 + 0x261) = 1;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      iVar9 = iVar9 + -0x20;
    } while (uVar7 >> 5 != uVar13);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055ca2e FUN_14055ca2e body=551 status=ok
// SIG undefined FUN_14055ca2e(void)

ulonglong FUN_14055ca2e(longlong param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  
  uVar10 = *(uint *)(param_1 + 0x58);
  if (uVar10 == 0) {
    uVar13 = 1;
    uVar9 = 0;
    iVar12 = 0;
    uVar15 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x40);
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar12 = uVar10 + 0x1e;
      if (-1 < (int)(uVar10 - 1)) {
        iVar12 = uVar10 - 1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_14055cb8d;
        iVar12 = iVar12 + 0x20;
        uVar7 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      iVar12 = 0;
      uVar15 = 0;
    }
    uVar13 = (ulonglong)(-uVar7 & uVar7);
    uVar9 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar7 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    uVar9 = (ulonglong)uVar7;
    if ((int)uVar10 <= (int)uVar7) {
      uVar9 = (ulonglong)uVar10;
    }
  }
  if ((int)uVar9 < (int)uVar10) {
    uVar10 = 0xffffffff;
    do {
      cVar1 = FUN_1403b8874((longlong)(int)uVar9 * 0x28 + *(longlong *)(param_1 + 8),param_2,0);
      if (cVar1 != '\0') {
        if (param_3 != (uint *)0x0) {
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)(int)uVar9 * 8);
          uVar10 = (uint)*(ushort *)(lVar11 + 0x12) - (uint)*(ushort *)(lVar11 + 0xe);
          if ((int)*param_3 <= (int)uVar10) {
            uVar10 = *param_3;
          }
          if ((int)(uint)*(ushort *)(lVar11 + 0x10) < (int)(*(ushort *)(lVar11 + 0xe) + uVar10)) {
            FUN_1405625b8(param_1,uVar9,uVar10);
          }
          *param_3 = uVar10;
        }
        return uVar9;
      }
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x40);
      }
      uVar7 = *(uint *)(param_1 + 0x58);
      iVar14 = (int)uVar15;
      lVar11 = (longlong)iVar14;
      uVar2 = puVar5[lVar11] & uVar10;
      if (uVar2 == 0) {
        iVar3 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar3 = uVar7 - 1;
        }
        iVar3 = iVar3 >> 5;
        iVar4 = iVar3;
        if (iVar3 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar3 <= iVar14) break;
        lVar6 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar2 = puVar5[lVar11 + lVar6 + 1];
          if (uVar2 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar4 - lVar11 == lVar6) goto LAB_14055cb8d;
        }
        uVar15 = (ulonglong)(iVar14 + (int)lVar6 + 1);
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar9 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar8 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      uVar2 = uVar8;
      if ((int)uVar7 <= (int)uVar8) {
        uVar2 = uVar7;
      }
      uVar9 = (ulonglong)uVar2;
    } while ((int)uVar8 < (int)uVar7);
  }
LAB_14055cb8d:
  uVar10 = 4;
  if (param_3 != (uint *)0x0) {
    uVar10 = 0x40;
    if ((ushort)*param_3 < 0x40) {
      uVar10 = *param_3;
    }
    *param_3 = uVar10 & 0xffff;
  }
  uVar9 = FUN_14055d75c(param_1,param_2,uVar10);
  return uVar9;
}



// FUNCTION 14055cc56 FUN_14055cc56 body=198 status=ok
// SIG undefined FUN_14055cc56(void)

void FUN_14055cc56(longlong param_1,ushort param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    lVar1 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x110);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uint)param_2) * 4);
    while (iVar2 = iVar3, iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      if (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) {
        do {
          FUN_14055cd1c(*param_3,*(undefined2 *)(lVar1 + 2 + (longlong)iVar2 * 0xc),
                        *(undefined2 *)(param_3 + 1));
          FUN_14055cc56(param_1,*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xd0) + 2 + (longlong)iVar2 * 0xc),param_3
                       );
          do {
            iVar2 = iVar3;
            if (iVar2 == -1) {
              return;
            }
            lVar1 = *(longlong *)(param_1 + 0xd0);
            iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
          } while (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 14055cd1c FUN_14055cd1c body=549 status=ok
// SIG undefined FUN_14055cd1c(void)

void FUN_14055cd1c(longlong param_1,ushort param_2,ushort param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x98);
  uVar14 = (ulonglong)param_2;
  uVar10 = *(ushort *)(lVar1 + uVar14 * 8);
  uVar11 = (ulonglong)uVar10;
  if ((uVar11 != 0xffff) && (param_3 != 0xffff)) {
    lVar5 = (ulonglong)((uint)uVar10 * 0x28) + *(longlong *)(param_1 + 8);
    if (((int)(uint)param_3 < *(int *)(lVar5 + 0x20)) &&
       ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0)) {
      local_50 = 0x10000000000;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar11 * 8);
      uVar10 = *(ushort *)(lVar5 + 0xc);
      if (uVar10 == 0) {
        uVar3 = *(undefined2 *)(lVar1 + 2 + uVar14 * 8);
LAB_14055cf29:
        *(undefined4 *)(lVar1 + uVar14 * 8) = 0xffff;
        FUN_145721252(param_1,uVar11,uVar3);
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x28);
        local_78 = (ulonglong)uVar10 * 0x20 + lVar5;
        bVar2 = false;
        lVar9 = local_78;
        do {
          while( true ) {
            uVar11 = local_50;
            lVar12 = lVar5 + 0x20;
            uVar10 = *(ushort *)(lVar5 + 0x1e);
            lVar5 = lVar12;
            if (uVar10 != param_3) break;
            if (lVar12 == lVar9) {
              uVar10 = *(ushort *)(lVar1 + uVar14 * 8);
              uVar11 = (ulonglong)uVar10;
              uVar3 = *(undefined2 *)(lVar1 + 2 + uVar14 * 8);
              if (!bVar2) goto LAB_14055cf29;
              goto LAB_14055cec9;
            }
          }
          iVar7 = uVar10 + 1;
          iVar13 = iVar7 - (int)local_50;
          if (iVar13 != 0 && (int)local_50 <= iVar7) {
            if ((int)local_50 == 0) {
LAB_14055ce1f:
              if (local_50._4_4_ == uVar10 || (int)local_50._4_4_ < (int)(uint)uVar10) {
                local_50 = CONCAT44(0x100,(int)local_50);
                FUN_14497ddce(local_70,uVar11 & 0xffffffff);
                iVar7 = (int)local_50 + iVar13;
              }
              iVar8 = iVar7 + 0x1f;
              if (-1 < iVar7) {
                iVar8 = iVar7;
              }
              local_50 = CONCAT44(local_50._4_4_,iVar7);
              if (iVar7 % 0x20 != 0) {
                bVar6 = -(char)(iVar7 % 0x20);
                local_70[iVar8 >> 5] = (local_70[iVar8 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
              }
            }
            else {
              iVar8 = (int)local_50 + 0x1e;
              if (-1 < (int)local_50 + -1) {
                iVar8 = (int)local_50 + -1;
              }
              if (iVar8 >> 5 != (uint)(uVar10 >> 5)) goto LAB_14055ce1f;
              local_50 = CONCAT44(local_50._4_4_,iVar7);
            }
            FUN_1447c45ca(local_70,uVar11 & 0xffffffff,iVar13,0);
            lVar9 = local_78;
          }
          local_70[uVar10 >> 5] = local_70[uVar10 >> 5] | 1 << ((byte)uVar10 & 0x1f);
          bVar2 = true;
        } while (lVar12 != lVar9);
        uVar10 = *(ushort *)(lVar1 + uVar14 * 8);
        uVar3 = *(undefined2 *)(lVar1 + 2 + uVar14 * 8);
LAB_14055cec9:
        uVar4 = FUN_14055ca2e(param_1,local_70,0);
        uVar3 = FUN_14055cf42(param_1,uVar4,uVar10,uVar3);
        *(short *)(lVar1 + uVar14 * 8) = (short)uVar4;
        *(undefined2 *)(lVar1 + 2 + uVar14 * 8) = uVar3;
      }
      *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
      *(undefined1 *)(param_1 + 0x261) = 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14055cf42 FUN_14055cf42 body=1474 status=ok
// SIG undefined FUN_14055cf42(void)

int FUN_14055cf42(longlong param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ushort uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  void *pvVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong *plVar21;
  void *pvVar22;
  int iVar23;
  ulonglong uVar24;
  int local_a4;
  
  puVar8 = *(ulonglong **)(*(longlong *)(param_1 + 0x60) + (longlong)param_2 * 8);
  puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x60) + (longlong)param_3 * 8);
  if ((short)puVar8[2] == *(short *)((longlong)puVar8 + 0xe)) {
    puVar8 = (ulonglong *)FUN_1405625b8(param_1,param_2,1);
  }
  lVar14 = (longlong)param_4;
  iVar5 = FUN_1449dfe96(param_1,param_2,*(undefined2 *)(puVar2[3] + lVar14 * 2),1);
  lVar16 = (ulonglong)*(ushort *)((longlong)puVar2 + 0xe) - 1;
  uVar10 = *(ulonglong *)(param_1 + 0x248);
  uVar20 = *puVar2;
  if (*puVar2 < uVar10) {
    uVar20 = uVar10;
  }
  *puVar2 = uVar20;
  uVar20 = *puVar8;
  if (*puVar8 < uVar10) {
    uVar20 = uVar10;
  }
  *puVar8 = uVar20;
  iVar15 = (int)lVar16;
  lVar6 = (longlong)iVar15;
  uVar13 = (uint)*(ushort *)((longlong)puVar2 + 0xc);
  if (*(short *)((longlong)puVar8 + 0xc) == 0) {
    iVar23 = 0;
  }
  else {
    uVar20 = 0;
    uVar24 = 0;
    do {
      bVar11 = *(byte *)(puVar8[5] + 0x1c + uVar20 * 0x20);
      if (bVar11 != 0) {
        plVar21 = (longlong *)(puVar8[5] + uVar20 * 0x20);
        if ((int)uVar24 < (int)uVar13) {
          uVar24 = (ulonglong)(int)uVar24;
          uVar9 = puVar2[5];
          lVar18 = uVar24 * 0x20;
          uVar12 = *(ushort *)(uVar9 + 0x1e + lVar18);
          bVar4 = true;
          if (uVar12 < *(ushort *)((longlong)plVar21 + 0x1e)) {
            do {
              uVar7 = *(ulonglong *)(uVar9 + 0x10 + lVar18);
              if (uVar7 < uVar10) {
                uVar7 = uVar10;
              }
              *(ulonglong *)(uVar9 + 0x10 + lVar18) = uVar7;
              bVar11 = *(byte *)(uVar9 + 0x1c + lVar18);
              if (bVar11 != 0) {
                lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
                puVar19 = (undefined8 *)(lVar3 + (ulonglong)uVar12 * 0x10);
                pvVar17 = (void *)((longlong)(int)((uint)bVar11 * param_4) +
                                  *(longlong *)(uVar9 + lVar18));
                if ((*(byte *)(lVar3 + 10 + (ulonglong)uVar12 * 0x10) & 2) == 0) {
                  (**(code **)(*(longlong *)*puVar19 + 0x10))((longlong *)*puVar19,pvVar17,1);
                }
                if (iVar15 != param_4) {
                  pvVar22 = (void *)((ulonglong)*(byte *)(uVar9 + 0x1c + lVar18) * lVar16 +
                                    *(longlong *)(uVar9 + lVar18));
                  if ((~*(byte *)((longlong)puVar19 + 10) & 6) == 0) {
                    memmove(pvVar17,pvVar22,(ulonglong)*(byte *)(puVar19 + 1));
                  }
                  else {
                    (**(code **)(*(longlong *)*puVar19 + 0x20))
                              ((longlong *)*puVar19,pvVar17,pvVar22,1);
                  }
                }
              }
              if ((ulonglong)uVar13 - 1 == uVar24) {
                bVar4 = false;
                uVar24 = (ulonglong)uVar13;
                goto LAB_14055d065;
              }
              uVar9 = puVar2[5];
              uVar12 = *(ushort *)(uVar9 + 0x3e + lVar18);
              lVar18 = lVar18 + 0x20;
              uVar24 = uVar24 + 1;
            } while (uVar12 < *(ushort *)((longlong)plVar21 + 0x1e));
            bVar4 = (longlong)uVar24 < (longlong)(ulonglong)uVar13;
          }
LAB_14055d065:
          bVar11 = *(byte *)((longlong)plVar21 + 0x1c);
        }
        else {
          bVar4 = false;
        }
        puVar19 = (undefined8 *)
                  ((ulonglong)*(ushort *)((longlong)plVar21 + 0x1e) * 0x10 +
                  *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118));
        pvVar17 = (void *)((ulonglong)((uint)bVar11 * iVar5) + *plVar21);
        if (bVar4) {
          uVar9 = puVar2[5];
          lVar18 = (longlong)(int)uVar24 * 0x20;
          if (*(ushort *)(uVar9 + 0x1e + lVar18) == *(ushort *)((longlong)plVar21 + 0x1e)) {
            pvVar22 = (void *)((longlong)param_4 * (ulonglong)*(byte *)(uVar9 + 0x1c + lVar18) +
                              *(longlong *)(uVar9 + lVar18));
            if ((~*(byte *)((longlong)puVar19 + 10) & 6) == 0) {
              memmove(pvVar17,pvVar22,(ulonglong)*(byte *)(puVar19 + 1));
            }
            else {
              (**(code **)(*(longlong *)*puVar19 + 0x20))((longlong *)*puVar19,pvVar17,pvVar22,1);
            }
            if (iVar15 != param_4) {
              pvVar17 = (void *)((ulonglong)*(byte *)(puVar2[5] + 0x1c + lVar18) * lVar6 +
                                *(longlong *)(puVar2[5] + lVar18));
              if ((~*(byte *)((longlong)puVar19 + 10) & 6) == 0) {
                memmove(pvVar22,pvVar17,(ulonglong)*(byte *)(puVar19 + 1));
              }
              else {
                (**(code **)(*(longlong *)*puVar19 + 0x20))((longlong *)*puVar19,pvVar22,pvVar17,1);
              }
            }
            uVar24 = (ulonglong)((int)uVar24 + 1);
            goto LAB_14055d0e2;
          }
        }
        if ((*(byte *)((longlong)puVar19 + 10) & 1) == 0) {
          (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,pvVar17,1);
        }
        else {
          memset(pvVar17,0,(ulonglong)*(byte *)(puVar19 + 1));
        }
      }
LAB_14055d0e2:
      iVar23 = (int)uVar24;
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ushort *)((longlong)puVar8 + 0xc));
  }
  local_a4 = uVar13 - iVar23;
  if (local_a4 != 0 && iVar23 <= (int)uVar13) {
    uVar20 = (longlong)iVar23 << 5 | 0x1e;
    do {
      uVar24 = puVar2[5];
      uVar9 = *(ulonglong *)((uVar24 - 0xe) + uVar20);
      if (uVar9 < uVar10) {
        uVar9 = uVar10;
      }
      *(ulonglong *)((uVar24 - 0xe) + uVar20) = uVar9;
      bVar11 = *(byte *)((uVar24 - 2) + uVar20);
      if (bVar11 != 0) {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x118);
        lVar18 = (ulonglong)*(ushort *)(uVar24 + uVar20) * 0x10;
        puVar19 = (undefined8 *)(lVar16 + lVar18);
        pvVar17 = (void *)((longlong)(int)((uint)bVar11 * param_4) +
                          *(longlong *)((uVar24 - 0x1e) + uVar20));
        if ((*(byte *)(lVar16 + 10 + lVar18) & 2) == 0) {
          (**(code **)(*(longlong *)*puVar19 + 0x10))((longlong *)*puVar19,pvVar17,1);
        }
        if (iVar15 != param_4) {
          pvVar22 = (void *)((ulonglong)*(byte *)((uVar24 - 2) + uVar20) * (longlong)iVar15 +
                            *(longlong *)((uVar24 - 0x1e) + uVar20));
          if ((~*(byte *)((longlong)puVar19 + 10) & 6) == 0) {
            memmove(pvVar17,pvVar22,(ulonglong)*(byte *)(puVar19 + 1));
          }
          else {
            (**(code **)(*(longlong *)*puVar19 + 0x20))((longlong *)*puVar19,pvVar17,pvVar22,1);
          }
        }
      }
      uVar20 = uVar20 + 0x20;
      local_a4 = local_a4 + -1;
    } while (local_a4 != 0);
  }
  if (iVar15 != param_4) {
    *(undefined2 *)(puVar2[3] + lVar14 * 2) = *(undefined2 *)(puVar2[3] + lVar6 * 2);
    uVar10 = (ulonglong)*(ushort *)(puVar2[3] + lVar14 * 2);
    lVar14 = *(longlong *)(param_1 + 0x98);
    *(short *)(lVar14 + uVar10 * 8) = (short)param_3;
    *(short *)(lVar14 + 2 + uVar10 * 8) = (short)param_4;
    lVar14 = lVar6;
  }
  *(undefined2 *)(puVar2[3] + lVar14 * 2) = 0xffff;
  uVar12 = *(short *)((longlong)puVar2 + 0xe) - 1;
  *(ushort *)((longlong)puVar2 + 0xe) = uVar12;
  if (*(short *)((longlong)puVar8 + 0xe) == *(short *)((longlong)puVar8 + 0x12)) {
    lVar14 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x50);
    }
    iVar15 = param_2 + 0x1f;
    if (-1 < param_2) {
      iVar15 = param_2;
    }
    bVar11 = (byte)param_2 & 0x1f;
    puVar1 = (uint *)(lVar14 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
    uVar12 = *(ushort *)((longlong)puVar2 + 0xe);
  }
  if (uVar12 == 0) {
    FUN_14085836e(param_1,puVar2);
    FUN_14055d61a(param_1 + 8,param_3);
    FUN_14055d5b2(param_1 + 0x60,param_3);
    lVar14 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x50);
    }
    iVar15 = param_3 + 0x1f;
    if (-1 < param_3) {
      iVar15 = param_3;
    }
    bVar11 = (byte)param_3 & 0x1f;
    puVar1 = (uint *)(lVar14 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else if (*(ushort *)((longlong)puVar2 + 0x12) - 1 == (uint)uVar12) {
    lVar14 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x50);
    }
    iVar15 = param_3 + 0x1f;
    if (-1 < param_3) {
      iVar15 = param_3;
    }
    puVar1 = (uint *)(lVar14 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  }
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x261) = 1;
  return iVar5;
}



// FUNCTION 14055d506 FUN_14055d506 body=82 status=ok
// SIG undefined FUN_14055d506(void)

void FUN_14055d506(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  
  if (0 < param_4) {
    uVar2 = param_4 + 1;
    do {
      bVar1 = *(byte *)(param_3 + 0x50);
      *(byte *)(param_2 + 0x50) = bVar1;
      (*(code *)(&PTR_LAB_14a46c4a0)[bVar1])(param_2,param_3);
      *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
      param_2 = param_2 + 0x60;
      param_3 = param_3 + 0x60;
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  return;
}


