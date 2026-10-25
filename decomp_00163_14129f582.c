// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14129f582 FUN_14129f582 body=50 status=ok
// SIG undefined FUN_14129f582(void)

void FUN_14129f582(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  FUN_14588b6b4(uVar2,param_1);
  return;
}



// FUNCTION 14129f5b4 FUN_14129f5b4 body=592 status=ok
// SIG undefined FUN_14129f5b4(void)

void FUN_14129f5b4(void)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong *local_100;
  ulonglong local_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [48];
  undefined1 local_a8 [48];
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((DAT_14ca84d88 == '\x01') &&
     (((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0 ||
      (cVar2 = FUN_1406917e6(), cVar2 != '\0')))) {
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_f0 = 0x9e40;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x200000000;
    plVar4 = (longlong *)FUN_14588b90c();
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      do {
        uVar1 = local_50;
        lVar7 = plVar4[2];
        lVar6 = (longlong)(int)local_50;
        uVar3 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar3);
        if (local_50._4_4_ < uVar3) {
          FUN_140df0cf8(local_78,uVar1 & 0xffffffff);
        }
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_78;
        }
        *(longlong *)(puVar5 + lVar6 * 0x10) = lVar7;
        *(undefined8 *)(puVar5 + lVar6 * 0x10 + 8) = 0;
        plVar4 = (longlong *)*plVar4;
      } while (plVar4 != (longlong *)0x0);
    }
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)((longlong)&DAT_14caea080 + lVar7);
      if (plVar4 != (longlong *)0x0) {
        local_f0 = local_f0 & 0xffffffffff0fffff;
        if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
          cVar2 = FUN_1406917e6();
          if (cVar2 != '\0') {
            plVar4 = *(longlong **)((longlong)&DAT_14caea080 + lVar7);
            goto LAB_14129f6f8;
          }
        }
        else {
LAB_14129f6f8:
          local_108 = 1;
          local_100 = local_e8;
          (**(code **)(*plVar4 + 0x368))(plVar4,local_a8,local_78,&local_f0);
          FUN_14588b8d6(local_a8);
        }
        local_f0 = local_f0 & 0xffffffffff0fffff | 0x200000;
        if (((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) ||
           (cVar2 = FUN_1406917e6(), cVar2 != '\0')) {
          local_108 = 1;
          local_100 = local_e8;
          (**(code **)(**(longlong **)((longlong)&DAT_14caea080 + lVar7) + 0x368))
                    (*(longlong **)((longlong)&DAT_14caea080 + lVar7),local_d8,local_78,&local_f0);
          FUN_14588b8d6(local_d8);
        }
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x38);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14129f806 FUN_14129f806 body=810 status=ok
// SIG undefined FUN_14129f806(void)

longlong FUN_14129f806(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  char local_91;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0x400000000;
  local_90 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14129fa45;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if ((((bVar2 == 0) && (0 < *(int *)(param_1 + 600))) &&
      (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
       (cVar3 = FUN_1406917e6(), cVar3 != '\0')))) && (DAT_14caea070 == '\x01')) {
    local_91 = DAT_14cb0cc00;
    uVar7 = DAT_14caec4b4 | *(uint *)(param_1 + 0xb8) | 1 << ((byte)DAT_14c760db4 & 0x1f);
    do {
      uVar6 = -uVar7 & uVar7;
      iVar1 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
      if (uVar6 == 0) {
        iVar1 = 0;
      }
      if (0 < (longlong)*(int *)(param_1 + 600)) {
        lVar8 = 0;
        lVar9 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x250) + lVar8 * 8);
          if (*(int *)(lVar4 + 0x24) == iVar1) {
            if (*(char *)(lVar4 + 0x20) == '\x04') {
              lVar9 = lVar4;
            }
            if (*(char *)(lVar4 + 0x20) == local_91) break;
          }
          lVar4 = lVar9;
          lVar8 = lVar8 + 1;
          lVar9 = lVar4;
        } while (*(int *)(param_1 + 600) != lVar8);
        if (lVar4 != 0) {
          local_b0 = param_5;
          local_b8 = param_4;
          local_a8 = param_6;
          FUN_14009125e(lVar4,local_78);
          lVar9 = local_90;
          lVar8 = (longlong)(int)local_50;
          if (lVar8 != 0) {
            iVar1 = *(int *)(local_90 + 0x28);
            *(uint *)(local_90 + 0x28) = local_50 + iVar1;
            local_88 = param_3;
            local_80 = param_1;
            if ((uint)(*(int *)(local_90 + 0x2c) - iVar1) < local_50) {
              FUN_14476a5c8(local_90,iVar1);
            }
            puVar5 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar5 = local_78;
            }
            lVar4 = *(longlong *)(lVar9 + 0x20);
            if (lVar4 == 0) {
              lVar4 = lVar9;
            }
            memmove((void *)(lVar4 + (longlong)iVar1 * 8),puVar5,lVar8 << 3);
            local_50 = 0;
            param_3 = local_88;
            param_1 = local_80;
          }
          puVar5 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar5 = local_78;
          }
          FUN_144717c65(puVar5,0);
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      bVar10 = uVar6 != uVar7;
      uVar7 = uVar6 ^ uVar7;
    } while (bVar10);
  }
LAB_14129fa45:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129fb32 FUN_14129fb32 body=265 status=ok
// SIG undefined FUN_14129fb32(void)

undefined8 FUN_14129fb32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      lVar2 = param_2 + 0x18 + lVar5;
      *(undefined2 *)(lVar2 + -8) = *(undefined2 *)(param_3 + lVar5 + 0x10);
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(param_3 + lVar5 + 8);
      FUN_1404306dc();
      FUN_1408cbbee(param_2 + lVar5 + 0x28,param_3 + lVar5 + 0x28);
      lVar2 = param_2 + lVar5;
      lVar1 = param_3 + lVar5;
      FUN_140472cde(lVar2 + 0x38,lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar1 + 0x48);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
      if (param_2 != param_3) {
        iVar3 = *(int *)(param_3 + 0x60 + lVar5);
        _Src = *(void **)(param_3 + 0x58 + lVar5);
        *(int *)(param_2 + 0x60 + lVar5) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 100 + lVar5) == 0) {
          *(undefined4 *)(param_2 + 100 + lVar5) = 0;
        }
        else {
          puVar4 = (undefined8 *)(param_2 + lVar5 + 0x58);
          FUN_14129fc3c(puVar4,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar4,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x68 + lVar5) = *(undefined4 *)(param_3 + 0x68 + lVar5);
      lVar5 = lVar5 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14129fc3c FUN_14129fc3c body=317 status=ok
// SIG undefined FUN_14129fc3c(void)

void FUN_14129fc3c(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14129fcaa;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_14129fcaa:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14129fd7a FUN_14129fd7a body=295 status=ok
// SIG undefined FUN_14129fd7a(void)

void FUN_14129fd7a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  FUN_140655f5e();
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar3 = (**(code **)(*param_2 + 8))();
  lVar4 = FUN_14129fea2();
  if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      plVar6 = param_2;
    }
  }
  *(longlong **)(param_1 + 0x2310) = plVar6;
  lVar3 = *(longlong *)(param_1 + 0x22b0);
  if (lVar3 == 0) {
    uVar5 = FUN_1457512de();
    lVar3 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x22b0) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x22b8) == 0) {
    plVar6 = (longlong *)(param_1 + 0x22a8);
    if ((lVar3 != 0) && (*plVar6 != 0)) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x22b8) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar3 = FUN_144aff482(uVar5,plVar6);
        *(longlong *)(param_1 + 0x22b8) = lVar3;
        if (lVar3 != 0) goto LAB_14129fe43;
      }
    }
    FUN_148ca4234(plVar6,*(longlong *)(param_1 + 0x2310) + 0x4c0);
  }
LAB_14129fe43:
  *(undefined8 *)(param_1 + 0x24b8) = *(undefined8 *)(*(longlong *)(param_1 + 0x2310) + 0x4d8);
  return;
}



// FUNCTION 14129fea2 FUN_14129fea2 body=57 status=ok
// SIG undefined FUN_14129fea2(void)

void FUN_14129fea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd370 = FUN_140002ddd(FUN_14660e77a,uVar1,L"OakVendingMachineTypeDef");
  }
  return;
}



// FUNCTION 14129fedc FUN_14129fedc body=228 status=ok
// SIG undefined FUN_14129fedc(void)

longlong FUN_14129fedc(void)

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
  if (DAT_14cb55d98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b5876;
    local_38 = &LAB_14862d475;
    local_40 = &LAB_14135b047;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1e60;
    FUN_14081cfa3(L"/Script/GbxGame",L"ClimbableInteractiveObject",&DAT_14cb55d98,FUN_1464b584e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55d98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14129ffc2 FUN_14129ffc2 body=3216 status=ok
// SIG undefined FUN_14129ffc2(void)

void FUN_14129ffc2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  uint *local_b8;
  uint local_ac;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  uint local_70;
  uint local_6c;
  int iStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar27 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  iStack_68 = -1;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar16 = *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x42c);
  if (uVar16 != 0) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar16);
    }
    FUN_1446f4a44(&local_98);
    iVar6 = (int)uStack_90;
    lVar26 = (longlong)(int)uStack_90;
    uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + uVar16);
    if ((uint)(uStack_90._4_4_ - iVar6) < uVar16) {
      FUN_1447711aa(&local_98);
    }
    if (iVar6 < (int)uVar16) {
      piVar12 = (int *)((ulonglong)uVar16 * 0x20 + local_98 + -0x1c);
      uVar20 = (ulonglong)uVar16;
      do {
        uVar15 = uVar20 - 1;
        if (local_64 == 0) {
          iVar6 = (int)uVar20 + -1;
        }
        else {
          *(int *)(local_98 + (longlong)iStack_68 * 0x20) = (int)uVar20 + -1;
          iVar6 = (int)uVar15;
        }
        piVar12[-1] = -1;
        iVar21 = -1;
        if (0 < local_64) {
          iVar21 = iStack_68;
        }
        *piVar12 = iVar21;
        local_64 = local_64 + 1;
        piVar12 = piVar12 + -8;
        uVar20 = uVar15;
        iStack_68 = iVar6;
      } while (lVar26 < (longlong)uVar15);
    }
    uVar29 = uVar16 + 0x1f >> 5;
    local_70 = uVar16;
    if (local_6c + 0x1f >> 5 < uVar29) {
      FUN_14499171c(local_88,0,uVar29,4);
      local_6c = uVar16 + 0x1f & 0xffffffe0;
    }
    puVar9 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar9 = local_88;
    }
    if (uVar16 < 0x101) {
      uVar29 = uVar29 + (uVar29 == 0);
    }
    memset(puVar9,0,(ulonglong)(uVar29 << 2));
    uVar29 = local_70 + 0x1f;
    if (-1 < (int)local_70) {
      uVar29 = local_70;
    }
    if ((int)local_70 % 0x20 != 0) {
      puVar9 = local_88;
      if (local_78 != (undefined1 *)0x0) {
        puVar9 = local_78;
      }
      bVar10 = -(char)((int)local_70 % 0x20);
      *(uint *)(puVar9 + (longlong)((int)uVar29 >> 5) * 4) =
           (uint)(*(int *)(puVar9 + (longlong)((int)uVar29 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
    iVar6 = 1;
    if (3 < uVar16) {
      uVar16 = (uVar16 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_1412a0eb6();
    }
  }
  puVar24 = (uint *)(param_1 + 0x410);
  uVar16 = *(uint *)(param_1 + 0x420);
  uVar20 = (ulonglong)uVar16;
  local_b8 = puVar24;
  local_a0 = param_2;
  if (uVar16 == 0) {
    uVar15 = 1;
    uVar29 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x418);
    if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
      puVar8 = puVar24;
    }
    uVar29 = *puVar8;
    if (uVar29 == 0) {
      iVar6 = uVar16 + 0x1e;
      if (-1 < (int)(uVar16 - 1)) {
        iVar6 = uVar16 - 1;
      }
      uVar27 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar27;
      }
      iVar6 = 0;
      do {
        if (uVar15 == uVar27) goto LAB_1412a020c;
        iVar6 = iVar6 + 0x20;
        uVar29 = puVar8[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar27 = 0;
      iVar6 = 0;
    }
    uVar15 = (ulonglong)(-uVar29 & uVar29);
    uVar13 = uVar15 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar29 = (iVar6 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if ((int)uVar16 <= (int)uVar29) {
      uVar29 = uVar16;
    }
  }
  if (uVar29 != uVar16) {
    local_c0 = uVar20;
    uVar16 = 0xffffffff;
    do {
      local_ac = uVar16;
      iVar21 = iStack_68;
      uVar13 = uStack_90;
      lVar26 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar26 = param_1;
      }
      local_a8 = uVar27;
      if (local_64 == 0) {
        iVar21 = (int)uStack_90;
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
        if (uStack_90._4_4_ == iVar21) {
          FUN_1447711aa(&local_98,uVar13 & 0xffffffff);
        }
        lVar25 = (longlong)iVar21;
        iVar11 = FUN_144a54ea4(local_88,1);
        puVar9 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar9 = local_88;
        }
        iVar22 = iVar11 + 0x1f;
        if (-1 < iVar11) {
          iVar22 = iVar11;
        }
        bVar10 = (byte)iVar11 & 0x1f;
        *(uint *)(puVar9 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar9 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
        uVar20 = local_c0;
      }
      else {
        lVar25 = (longlong)iStack_68;
        iStack_68 = *(int *)(local_98 + 4 + lVar25 * 0x20);
        local_64 = local_64 + -1;
        if (local_64 != 0) {
          *(undefined4 *)(local_98 + (longlong)iStack_68 * 0x20) = 0xffffffff;
        }
      }
      uVar27 = local_a8;
      puVar24 = local_b8;
      puVar14 = (undefined4 *)(lVar26 + (longlong)(int)uVar29 * 0x20);
      puVar9 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar9 = local_88;
      }
      iVar11 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar11 = iVar21;
      }
      *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar11 >> 5) * 4) | 1 << ((byte)iVar21 & 0x1f);
      lVar25 = lVar25 * 0x20;
      puVar1 = (undefined4 *)(local_98 + lVar25);
      uVar7 = puVar14[1];
      uVar3 = puVar14[2];
      uVar4 = puVar14[3];
      puVar2 = (undefined4 *)(local_98 + lVar25);
      *puVar2 = *puVar14;
      puVar2[1] = uVar7;
      puVar2[2] = uVar3;
      puVar2[3] = uVar4;
      *(undefined8 *)(local_98 + 0x10 + lVar25) = *(undefined8 *)(puVar14 + 4);
      *(undefined4 *)(local_98 + 0x18 + lVar25) = 0xffffffff;
      uVar13 = *(ulonglong *)(local_98 + lVar25);
      uVar16 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      uVar16 = uVar16 >> 0x10 ^ uVar16;
      uVar29 = (int)uStack_90 - local_64;
      if ((uVar29 != 0) && (uVar29 != 1)) {
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        iVar11 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & uVar16) * 4);
        while (iVar11 != -1) {
          puVar14 = (undefined4 *)(local_98 + (longlong)iVar11 * 0x20);
          if (*(ulonglong *)(local_98 + (longlong)iVar11 * 0x20) == uVar13) {
            uVar7 = *puVar1;
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            *(undefined8 *)(puVar14 + 4) = *(undefined8 *)(puVar1 + 4);
            *puVar14 = uVar7;
            puVar14[1] = uVar3;
            puVar14[2] = uVar4;
            puVar14[3] = uVar5;
            FUN_147e295de(&local_98,iVar21);
            uVar20 = local_c0;
            uVar27 = local_a8;
            goto LAB_1412a08f5;
          }
          uVar20 = local_c0;
          iVar11 = puVar14[6];
        }
      }
      iVar11 = 1;
      if (3 < uVar29) {
        uVar13 = (ulonglong)(uVar29 & 0xfffffffe) + 0xf;
        lVar26 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar26 & 0x1f);
      }
      if (((int)uVar29 < 1) || (iVar11 <= local_50)) {
        uVar16 = local_50 - 1U & uVar16;
        puVar1[7] = uVar16;
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        puVar1[6] = *(undefined4 *)(puVar9 + ((longlong)local_50 - 1U & (longlong)(int)uVar16) * 4);
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        *(int *)(puVar9 + ((longlong)local_50 - 1U & (longlong)(int)uVar16) * 4) = iVar21;
      }
      else {
        local_50 = iVar11;
        FUN_1412a0eb6();
        uVar20 = local_c0;
      }
LAB_1412a08f5:
      uVar16 = local_ac & ~(uint)uVar15;
      puVar8 = *(uint **)(param_1 + 0x418);
      if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
        puVar8 = puVar24;
      }
      uVar23 = *(uint *)(param_1 + 0x420);
      iVar21 = (int)uVar27;
      lVar26 = (longlong)iVar21;
      uVar29 = puVar8[lVar26] & uVar16;
      if (uVar29 == 0) {
        iVar11 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar11 = uVar23 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar22 = iVar11;
        if (iVar11 < iVar21) {
          iVar22 = iVar21;
        }
        if (iVar21 < iVar11) {
          lVar25 = 0;
          do {
            uVar29 = puVar8[lVar26 + lVar25 + 1];
            if (uVar29 != 0) {
              uVar27 = (ulonglong)(iVar21 + (int)lVar25 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1412a0959;
            }
            iVar6 = iVar6 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar22 - lVar26 != lVar25);
          uVar16 = 0xffffffff;
          iVar21 = iVar22;
        }
        uVar27 = (ulonglong)(iVar21 + 1);
        uVar29 = uVar23;
      }
      else {
LAB_1412a0959:
        uVar15 = (ulonglong)(-uVar29 & uVar29);
        uVar13 = uVar15 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar29 = (iVar6 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if ((int)uVar23 <= (int)uVar29) {
          uVar29 = uVar23;
        }
      }
    } while (uVar29 != (uint)uVar20);
  }
LAB_1412a020c:
  FUN_1412a0c54();
  uVar27 = (longlong)(int)uStack_90 - (longlong)local_64;
  iVar6 = *(int *)(param_1 + 0x408);
  uVar16 = (uint)uVar27;
  if ((uint)(iVar6 - *(int *)(param_1 + 0x42c)) < uVar16) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar27);
    }
    uVar29 = uVar16 - iVar6;
    if (uVar29 != 0 && iVar6 <= (int)uVar16) {
      iVar21 = *(int *)(param_1 + 0x40c);
      iVar11 = iVar6;
      if (iVar21 < (int)uVar16) {
        FUN_140b3d13e(param_1);
        iVar11 = *(int *)(param_1 + 0x408);
        iVar21 = *(int *)(param_1 + 0x40c);
      }
      *(uint *)(param_1 + 0x408) = iVar11 + uVar29;
      if ((uint)(iVar21 - iVar11) < uVar29) {
        FUN_1467c2d2a(param_1);
      }
      lVar26 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar26 = param_1;
      }
      if (iVar11 < (int)uVar16) {
        uVar20 = uVar27 & 0xffffffff;
        iVar21 = *(int *)(param_1 + 0x42c);
        puVar14 = (undefined4 *)(uVar20 * 0x20 + lVar26 + -0x1c);
        do {
          iVar22 = (int)uVar20;
          if (iVar21 != 0) {
            *(int *)(lVar26 + (longlong)*(int *)(param_1 + 0x428) * 0x20) = iVar22 + -1;
          }
          puVar14[-1] = 0xffffffff;
          if (*(int *)(param_1 + 0x42c) < 1) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(param_1 + 0x428);
          }
          uVar20 = uVar20 - 1;
          *puVar14 = uVar7;
          *(int *)(param_1 + 0x428) = iVar22 + -1;
          iVar21 = *(int *)(param_1 + 0x42c) + 1;
          *(int *)(param_1 + 0x42c) = iVar21;
          puVar14 = puVar14 + -8;
        } while ((longlong)iVar11 < (longlong)uVar20);
      }
      if (iVar6 == 0) {
        *(uint *)(param_1 + 0x420) = uVar29;
        uVar23 = uVar29 + 0x1f >> 5;
        if (*(int *)(param_1 + 0x424) + 0x1fU >> 5 < uVar23) {
          FUN_144aa70c6(puVar24,0,uVar23,4);
          *(uint *)(param_1 + 0x424) = uVar29 + 0x1f & 0xffffffe0;
        }
        puVar8 = *(uint **)(param_1 + 0x418);
        if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
          puVar8 = puVar24;
        }
        if (uVar29 < 0x101) {
          uVar23 = uVar23 + (uVar23 == 0);
        }
        memset(puVar8,0,(ulonglong)(uVar23 << 2));
        iVar6 = *(int *)(param_1 + 0x420);
        iVar21 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar21 = iVar6;
        }
        if (iVar6 % 0x20 != 0) {
          puVar8 = *(uint **)(param_1 + 0x418);
          if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
            puVar8 = puVar24;
          }
          bVar10 = -(char)(iVar6 % 0x20);
          puVar8[iVar21 >> 5] = (puVar8[iVar21 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
        }
      }
      else if (-1 < (int)uVar29) {
        uVar7 = FUN_14489e6aa(puVar24,uVar29);
        FUN_1470f4066(puVar24,uVar7,uVar29,0);
      }
    }
    uVar27 = (ulonglong)
             ((((uint)(uVar27 >> 1) & 0x7fffffff) - 1) + (uint)((uVar27 >> 1 & 0x7fffffff) == 0)) *
             2 + 1;
    lVar26 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar26 & 0x1f);
    if ((uint)lVar26 < 4) {
      iVar6 = 0x10;
    }
    if (uVar16 < 4) {
      iVar6 = 0x10;
    }
    if (*(int *)(param_1 + 0x478) < iVar6) {
      *(int *)(param_1 + 0x478) = iVar6;
      FUN_141015ed8();
    }
  }
  for (puVar19 = *(undefined8 **)(local_a0 + 0x4a8); puVar19 != (undefined8 *)0x0;
      puVar19 = (undefined8 *)*puVar19) {
    FUN_14092a2ac();
  }
  iVar6 = *(int *)(param_1 + 0x420);
  if (iVar6 == 0) {
    uVar20 = 1;
    uVar27 = 0;
    iVar21 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x418);
    if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
      puVar8 = puVar24;
    }
    uVar16 = *puVar8;
    if (uVar16 == 0) {
      iVar21 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar21 = iVar6 + -1;
      }
      uVar27 = 0;
      uVar20 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar20 = uVar27;
      }
      iVar11 = 0;
      do {
        if (uVar20 == uVar27) goto LAB_1412a04b3;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar8[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar27 = 0;
      iVar11 = 0;
    }
    uVar20 = (ulonglong)(-uVar16 & uVar16);
    uVar15 = uVar20 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar21 = (iVar11 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar21) {
      iVar21 = iVar6;
    }
  }
  if (iVar21 != iVar6) {
    uVar16 = 0xffffffff;
    iVar22 = iVar6;
    do {
      lVar26 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar26 = param_1;
      }
      if ((int)uStack_90 != local_64) {
        uVar15 = *(ulonglong *)(lVar26 + (longlong)iVar21 * 0x20);
        uVar29 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
        uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_60;
        }
        iVar17 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & (uVar29 >> 0x10 ^ uVar29)) * 4);
        puVar24 = local_b8;
        if (iVar17 != -1) {
          do {
            lVar25 = local_98 + (longlong)iVar17 * 0x20;
            if (*(ulonglong *)(local_98 + (longlong)iVar17 * 0x20) == uVar15) {
              if ((lVar25 != 0) && ((undefined4 *)(lVar25 + 8) != (undefined4 *)0x0)) {
                *(undefined4 *)(lVar26 + (longlong)iVar21 * 0x20 + 8) = *(undefined4 *)(lVar25 + 8);
                iVar22 = *(int *)(param_1 + 0x420);
              }
              break;
            }
            iVar17 = *(int *)(lVar25 + 0x18);
          } while (iVar17 != -1);
        }
      }
      uVar16 = uVar16 & ~(uint)uVar20;
      puVar8 = *(uint **)(param_1 + 0x418);
      if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
        puVar8 = puVar24;
      }
      iVar21 = (int)uVar27;
      lVar26 = (longlong)iVar21;
      uVar29 = puVar8[lVar26] & uVar16;
      if (uVar29 == 0) {
        iVar17 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar17 = iVar22 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar21) {
          iVar18 = iVar21;
        }
        lVar25 = lVar26;
        if (iVar21 < iVar17) {
          lVar28 = 0;
          do {
            uVar29 = puVar8[lVar26 + lVar28 + 1];
            if (uVar29 != 0) {
              uVar27 = (ulonglong)(iVar21 + (int)lVar28 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1412a06ba;
            }
            iVar11 = iVar11 + 0x20;
            lVar28 = lVar28 + 1;
            uVar16 = 0xffffffff;
            lVar25 = (longlong)iVar18;
          } while (iVar18 - lVar26 != lVar28);
        }
        uVar27 = lVar25 + 1U & 0xffffffff;
        iVar21 = iVar22;
      }
      else {
LAB_1412a06ba:
        uVar20 = (ulonglong)(-uVar29 & uVar29);
        uVar15 = uVar20 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar21 = (iVar11 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar21) {
          iVar21 = iVar22;
        }
      }
    } while (iVar21 != iVar6);
  }
LAB_1412a04b3:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar27 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar27 != 0) {
    FUN_1446f4a44(&local_98,0);
  }
  iStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a0c54 FUN_1412a0c54 body=610 status=ok
// SIG undefined FUN_1412a0c54(void)

void FUN_1412a0c54(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x42c)) {
    lVar5 = param_1 + 0x430;
    if (*(longlong *)(param_1 + 0x470) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x470);
    }
    iVar2 = *(int *)(param_1 + 0x478);
    iVar15 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar15 = iVar2;
    }
    if (*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x42c) < iVar15 >> 2) {
      iVar2 = *(int *)(param_1 + 0x420);
      if (iVar2 == 0) {
        uVar12 = 0;
        uVar14 = 1;
        iVar15 = 0;
        iVar11 = 0;
      }
      else {
        puVar13 = *(uint **)(param_1 + 0x418);
        if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x410);
        }
        uVar10 = *puVar13;
        if (uVar10 == 0) {
          iVar15 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar15 = iVar2 + -1;
          }
          uVar12 = 0;
          uVar14 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar14 = uVar12;
          }
          iVar11 = 0;
          do {
            if (uVar14 == uVar12) goto LAB_1412a0d18;
            iVar11 = iVar11 + 0x20;
            uVar10 = puVar13[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar12 = 0;
          iVar11 = 0;
        }
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar14 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar15 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar15) {
          iVar15 = iVar2;
        }
      }
      if (iVar15 != iVar2) {
        uVar10 = 0xffffffff;
        do {
          lVar6 = *(longlong *)(param_1 + 0x400);
          if (*(longlong *)(param_1 + 0x400) == 0) {
            lVar6 = param_1;
          }
          *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar6 + 0x1c + (longlong)iVar15 * 0x20) * 4) =
               0xffffffff;
          uVar10 = ~(uint)uVar14 & uVar10;
          puVar13 = *(uint **)(param_1 + 0x418);
          if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
            puVar13 = (uint *)(param_1 + 0x410);
          }
          iVar3 = *(int *)(param_1 + 0x420);
          iVar15 = (int)uVar12;
          lVar6 = (longlong)iVar15;
          uVar7 = puVar13[lVar6] & uVar10;
          if (uVar7 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar11 = iVar11 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar15) {
              iVar9 = iVar15;
            }
            lVar4 = lVar6;
            if (iVar15 < iVar8) {
              lVar16 = 0;
              do {
                uVar7 = puVar13[lVar6 + lVar16 + 1];
                if (uVar7 != 0) {
                  uVar12 = (ulonglong)(iVar15 + (int)lVar16 + 1);
                  uVar10 = 0xffffffff;
                  goto LAB_1412a0e0b;
                }
                iVar11 = iVar11 + 0x20;
                lVar16 = lVar16 + 1;
                uVar10 = 0xffffffff;
                lVar4 = (longlong)iVar9;
              } while (iVar9 - lVar6 != lVar16);
            }
            uVar12 = lVar4 + 1U & 0xffffffff;
            iVar15 = iVar3;
          }
          else {
LAB_1412a0e0b:
            uVar14 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar14 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar15 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar15) {
              iVar15 = iVar3;
            }
          }
        } while (iVar15 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar5 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x478));
    }
LAB_1412a0d18:
    *(undefined4 *)(param_1 + 0x408) = 0;
    if (*(int *)(param_1 + 0x40c) < 0) {
      FUN_140b3d13e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x428) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x420) = 0;
  }
  return;
}



// FUNCTION 1412a0eb6 FUN_1412a0eb6 body=655 status=ok
// SIG undefined FUN_1412a0eb6(void)

void FUN_1412a0eb6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0);
    }
LAB_1412a0efb:
    uVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_1412a0fed;
    FUN_1446efa72(plVar4,0);
    if (0 < (int)uVar7) goto LAB_1412a0efb;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_1412a0fbf;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_1412a0fbf:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c * 0x20;
      uVar7 = ((uint)(*(ulonglong *)(lVar2 + lVar5) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar2 + lVar5) >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x1c + lVar5) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x18 + lVar5) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1412a0fed:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a1146 FUN_1412a1146 body=1209 status=ok
// SIG undefined FUN_1412a1146(void)

void FUN_1412a1146(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = lVar2 + *(int *)((longlong)plVar1 + 0x44);
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_1412a122d;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_1412a122d:
  local_2a = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = lVar2 + *(int *)((longlong)plVar1 + 0x44);
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2a);
            goto LAB_1412a12f6;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_2a) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2a,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2a,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2a,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2a,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
LAB_1412a12f6:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0x700))(param_1,local_29,local_2a);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerStartReloading_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x708))(param_1,local_29,local_2a);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a1604 FUN_1412a1604 body=601 status=ok
// SIG undefined FUN_1412a1604(void)

void FUN_1412a1604(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)((longlong)param_1 + 0xb51) = (byte)((param_3 & 0xffffffff) >> 1) & 1;
  if (param_1[0x1ac] == DAT_14cb94e50) {
    *(byte *)(param_1 + 0x19a) = ((byte)param_3 & 1) + 1;
  }
  else {
    (**(code **)(*param_1 + 0x898))(param_1,param_2,param_3 & 0xffffff01);
    lVar3 = param_1[0x1ac];
    if (lVar3 != DAT_14cb95100) {
      if ((((lVar3 != DAT_14cb95120) && (lVar3 != DAT_14cb94e38)) && (lVar3 != DAT_14cb94e50)) &&
         ((param_1[0x163] != 0 && ((longlong *)param_1[0x164] != (longlong *)0x0)))) {
        uVar2 = (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
        cVar1 = FUN_1403ae2fa(uVar2,2,0);
        if (cVar1 == '\0') {
          *(char *)(param_1 + 0x19a) = (char)(param_3 & 0xffffff01) + '\x01';
          lVar3 = FUN_1447210f0(param_1);
          if (*(longlong *)(lVar3 + 0x1f0) == 0) {
            puVar4 = (undefined8 *)(lVar3 + 0x458);
          }
          else {
            puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
          }
          uVar2 = *puVar4;
          local_a0 = (undefined8 *)0x0;
          local_98 = 0;
          FUN_1446efa72(&local_a0,0,3,0x10);
          puVar4 = local_a0;
          local_98 = 3;
          *local_a0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_a0[2] = lVar5;
          *local_a0 = &PTR_FUN_14b4ab980;
          local_a0[3] = 0;
          FUN_14485c47a(local_a0 + 3,param_1);
          *(undefined4 *)(puVar4 + 5) = 0;
          puVar4[4] = FUN_146577b7e;
          local_88 = 0;
          local_80 = 0;
          FUN_14487d8d8(&local_88,&local_a0);
          local_48 = 1;
          local_a8 = local_90;
          local_90[0] = 1;
          local_8c = 0xbf800000;
          FUN_1406f4044(uVar2,param_1 + 0x19b,&local_88,0x3dcccccd);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
          FUN_1449db362(&local_a0);
          goto LAB_1412a166d;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
    }
  }
LAB_1412a166d:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a1874 FUN_1412a1874 body=7042 status=ok
// SIG undefined FUN_1412a1874(void)

void FUN_1412a1874(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar6 = (**(code **)(*param_1 + 0x10))();
  if (cVar6 == '\0') goto LAB_1412a292e;
  plVar1 = param_1 + -6;
  lVar8 = FUN_140495e96(param_1);
  if ((lVar8 != 0) && (lVar8 = FUN_1403ca91c(lVar8), lVar8 != 0)) {
    iVar10 = *(int *)(lVar8 + 0x80);
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(lVar8 + 0x78);
      lVar13 = 0;
      do {
        if (((*(int *)(lVar11 + 8 + lVar13) != 0) &&
            (plVar9 = *(longlong **)(lVar11 + lVar13), plVar9 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,plVar1), cVar6 != '\0'))
        goto LAB_1412a193a;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar13);
    }
    local_68 = FUN_140f65e26;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_14588c110(lVar8 + 0x78,&local_50,plVar1);
  }
LAB_1412a193a:
  lVar8 = DAT_14cb7df80;
  lVar11 = (longlong)DAT_14cb7df88;
  if (lVar11 != 0) {
    lVar13 = 0;
    do {
      if (((*(int *)(lVar8 + 8 + lVar13) != 0) &&
          (plVar9 = *(longlong **)(lVar8 + lVar13), plVar9 != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,plVar1), cVar6 != '\0')) goto LAB_1412a1a8f;
      lVar13 = lVar13 + 0x10;
    } while (lVar11 * 0x10 != lVar13);
  }
  local_68 = (code *)0x0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  FUN_1446efa72(&local_68,0,3,0x10);
  pcVar4 = local_68;
  uStack_60 = CONCAT44(uStack_60._4_4_,3);
  *(undefined ***)local_68 = &PTR_LAB_14b3ecf50;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_68 + 0x10) = lVar11;
  *(undefined ***)local_68 = &PTR_FUN_14b9ba220;
  *(longlong *)(local_68 + 0x18) = 0;
  iVar10 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + -0x24);
    *(uint *)(local_68 + 0x18) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar10 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar10 = *(int *)(lVar8 + 0x10);
      bVar14 = iVar10 == 0;
      if (bVar14) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar10 = iVar7;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar10;
  *(code **)(pcVar4 + 0x20) = FUN_148e5cf1a;
  *(undefined4 *)(pcVar4 + 0x28) = 0;
  FUN_1412a3750(&DAT_14cb7df80,&local_50,&local_68);
  if ((int)uStack_60 == 0) {
LAB_1412a1a72:
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    uStack_60 = uStack_60 & 0xffffffff00000000;
    goto LAB_1412a1a72;
  }
  param_1[10] = local_50;
LAB_1412a1a8f:
  lVar8 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
  if (lVar8 != 0) {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_68;
      local_68 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_68 = (code *)0x0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1446efa72(&local_68,0,3,0x10);
      plVar9 = (longlong *)local_68;
      uStack_60 = CONCAT44(uStack_60._4_4_,3);
      *(undefined ***)local_68 = &PTR_LAB_14b9ba300;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)((longlong)local_68 + 0x10) = lVar13;
      *(undefined ***)local_68 = &PTR_FUN_14b9ba290;
      *(longlong *)((longlong)local_68 + 0x18) = 0;
      iVar10 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x24);
        *(uint *)((longlong)local_68 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar10 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar10 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar7;
          }
        }
      }
      *(int *)((longlong)plVar9 + 0x1c) = iVar10;
      plVar9[4] = (longlong)FUN_14147c542;
      *(undefined4 *)(plVar9 + 5) = 0;
      if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_1412a3014:
        if ((int)uStack_60 == 0) goto LAB_1412a1ca2;
        if (local_68 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          goto LAB_1412a1c8f;
        }
      }
      else {
        cVar6 = (**(code **)(*(longlong *)local_68 + 0x30))();
        if (cVar6 == '\0') {
          goto LAB_1412a3014;
        }
        plVar9 = (longlong *)(lVar8 + 0x5fe8);
        if (*(int *)(lVar8 + 0x5ffc) < 1) {
          iVar10 = *(int *)(lVar8 + 0x5ff0);
          iVar7 = *(int *)(lVar8 + 0x5ff8) + -1;
          *(int *)(lVar8 + 0x5ff8) = iVar7;
          if (iVar7 <= iVar10) {
            iVar7 = iVar10;
            if (0 < iVar10) {
              iVar12 = 0;
              do {
                if (((*(int *)(*plVar9 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar12 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar9,iVar12);
                  FUN_14005b248(plVar9);
                }
                else {
                  iVar12 = iVar12 + 1;
                }
                iVar7 = *(int *)(lVar8 + 0x5ff0);
              } while (iVar12 < iVar7);
            }
            iVar12 = 2;
            if (2 < iVar7 * 2) {
              iVar12 = iVar7 * 2;
            }
            *(int *)(lVar8 + 0x5ff8) = iVar12;
            if ((iVar12 < iVar10) && (*(int *)(lVar8 + 0x5ff4) != iVar7)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_50);
        }
        iVar10 = *(int *)(lVar8 + 0x5ff0);
        *(uint *)(lVar8 + 0x5ff0) = iVar10 + 1U;
        if (*(uint *)(lVar8 + 0x5ff4) < iVar10 + 1U) {
          FUN_1447a71f6(plVar9,iVar10);
        }
        lVar11 = *plVar9;
        lVar13 = (longlong)iVar10 * 0x10;
        *(undefined8 *)(lVar11 + lVar13) = 0;
        *(undefined4 *)(lVar11 + 8 + lVar13) = 0;
        *(code **)(lVar11 + lVar13) = local_68;
        local_68 = (code *)0x0;
        *(int *)(lVar11 + 8 + lVar13) = (int)uStack_60;
LAB_1412a1c8f:
        uStack_60 = uStack_60 & 0xffffffff00000000;
LAB_1412a1ca2:
        if (local_68 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1401073f6(lVar8 + 0x5fc0,plVar1);
      FUN_1412a3650(&local_70);
      local_68 = (code *)0x0;
      uStack_60 = 0;
      uVar5 = local_70;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x24);
        local_68 = (code *)(ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar10 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar10 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar10 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_68;
          if (bVar14) {
            iVar10 = iVar7;
          }
        }
        local_68._0_4_ = uVar2;
        local_68 = (code *)CONCAT44(iVar10,(uint)local_68);
        uStack_60 = local_70;
        uVar5 = uStack_60;
        if ((((((local_70 != 0) && (iVar10 != 0)) && (-1 < (int)(uint)local_68)) &&
             (((int)(uint)local_68 < DAT_14c9647dc &&
              (plVar9 = (longlong *)
                        ((ulonglong)(((uint)local_68 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_68 >> 0x10) * 8)),
              plVar9 != (longlong *)0x0)))) && ((int)plVar9[2] == iVar10)) &&
           (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))) {
          FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),local_70,1);
          uVar5 = uStack_60;
        }
      }
      uStack_60 = uVar5;
      FUN_14053c012(lVar8 + 0x5fc0,&local_68);
      local_68 = (code *)0x0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1446efa72(&local_68,0,3,0x10);
      plVar9 = (longlong *)local_68;
      uStack_60 = CONCAT44(uStack_60._4_4_,3);
      *(undefined ***)local_68 = &PTR_LAB_14b4e4c20;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)((longlong)local_68 + 0x10) = lVar13;
      *(undefined ***)local_68 = &PTR_FUN_14b9ba370;
      *(longlong *)((longlong)local_68 + 0x18) = 0;
      iVar10 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x24);
        *(uint *)((longlong)local_68 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar10 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar10 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar7;
          }
        }
      }
      *(int *)((longlong)plVar9 + 0x1c) = iVar10;
      plVar9[4] = (longlong)FUN_146205d48;
      *(undefined4 *)(plVar9 + 5) = 0;
      if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_1412a3076:
        if ((int)uStack_60 == 0) goto LAB_1412a1f61;
        if (local_68 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          goto LAB_1412a1f4e;
        }
      }
      else {
        cVar6 = (**(code **)(*(longlong *)local_68 + 0x30))();
        if (cVar6 == '\0') {
          goto LAB_1412a3076;
        }
        plVar9 = (longlong *)(lVar8 + 0x6000);
        if (*(int *)(lVar8 + 0x6014) < 1) {
          iVar10 = *(int *)(lVar8 + 0x6008);
          iVar7 = *(int *)(lVar8 + 0x6010) + -1;
          *(int *)(lVar8 + 0x6010) = iVar7;
          if (iVar7 <= iVar10) {
            iVar7 = iVar10;
            if (0 < iVar10) {
              iVar12 = 0;
              do {
                if (((*(int *)(*plVar9 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar12 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar9,iVar12);
                  FUN_14005b248(plVar9);
                }
                else {
                  iVar12 = iVar12 + 1;
                }
                iVar7 = *(int *)(lVar8 + 0x6008);
              } while (iVar12 < iVar7);
            }
            iVar12 = 2;
            if (2 < iVar7 * 2) {
              iVar12 = iVar7 * 2;
            }
            *(int *)(lVar8 + 0x6010) = iVar12;
            if ((iVar12 < iVar10) && (*(int *)(lVar8 + 0x600c) != iVar7)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_50);
        }
        iVar10 = *(int *)(lVar8 + 0x6008);
        *(uint *)(lVar8 + 0x6008) = iVar10 + 1U;
        if (*(uint *)(lVar8 + 0x600c) < iVar10 + 1U) {
          FUN_1447a71f6(plVar9,iVar10);
        }
        lVar11 = *plVar9;
        lVar13 = (longlong)iVar10 * 0x10;
        *(undefined8 *)(lVar11 + lVar13) = 0;
        *(undefined4 *)(lVar11 + 8 + lVar13) = 0;
        *(code **)(lVar11 + lVar13) = local_68;
        local_68 = (code *)0x0;
        *(int *)(lVar11 + 8 + lVar13) = (int)uStack_60;
LAB_1412a1f4e:
        uStack_60 = uStack_60 & 0xffffffff00000000;
LAB_1412a1f61:
        if (local_68 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      local_68 = (code *)0x0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1446efa72(&local_68,0,3,0x10);
      plVar9 = (longlong *)local_68;
      uStack_60 = CONCAT44(uStack_60._4_4_,3);
      *(undefined ***)local_68 = &PTR_LAB_14b96ec30;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)((longlong)local_68 + 0x10) = lVar13;
      *(undefined ***)local_68 = &PTR_FUN_14b9ba3e0;
      *(longlong *)((longlong)local_68 + 0x18) = 0;
      iVar10 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x24);
        *(uint *)((longlong)local_68 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar10 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar10 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar7;
          }
        }
      }
      *(int *)((longlong)plVar9 + 0x1c) = iVar10;
      plVar9[4] = (longlong)FUN_145a9e59a;
      *(undefined4 *)(plVar9 + 5) = 0;
      if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_1412a30d8:
        if ((int)uStack_60 == 0) goto LAB_1412a212e;
        if (local_68 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          goto LAB_1412a211b;
        }
      }
      else {
        cVar6 = (**(code **)(*(longlong *)local_68 + 0x30))();
        if (cVar6 == '\0') {
          goto LAB_1412a30d8;
        }
        plVar9 = (longlong *)(lVar8 + 0x7790);
        if (*(int *)(lVar8 + 0x77a4) < 1) {
          iVar10 = *(int *)(lVar8 + 0x7798);
          iVar7 = *(int *)(lVar8 + 0x77a0) + -1;
          *(int *)(lVar8 + 0x77a0) = iVar7;
          if (iVar7 <= iVar10) {
            iVar7 = iVar10;
            if (0 < iVar10) {
              iVar12 = 0;
              do {
                if (((*(int *)(*plVar9 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar12 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar9,iVar12);
                  FUN_14005b248(plVar9);
                }
                else {
                  iVar12 = iVar12 + 1;
                }
                iVar7 = *(int *)(lVar8 + 0x7798);
              } while (iVar12 < iVar7);
            }
            iVar12 = 2;
            if (2 < iVar7 * 2) {
              iVar12 = iVar7 * 2;
            }
            *(int *)(lVar8 + 0x77a0) = iVar12;
            if ((iVar12 < iVar10) && (*(int *)(lVar8 + 0x779c) != iVar7)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_50);
        }
        iVar10 = *(int *)(lVar8 + 0x7798);
        *(uint *)(lVar8 + 0x7798) = iVar10 + 1U;
        if (*(uint *)(lVar8 + 0x779c) < iVar10 + 1U) {
          FUN_1447a71f6(plVar9,iVar10);
        }
        lVar11 = *plVar9;
        lVar13 = (longlong)iVar10 * 0x10;
        *(undefined8 *)(lVar11 + lVar13) = 0;
        *(undefined4 *)(lVar11 + 8 + lVar13) = 0;
        *(code **)(lVar11 + lVar13) = local_68;
        local_68 = (code *)0x0;
        *(int *)(lVar11 + 8 + lVar13) = (int)uStack_60;
LAB_1412a211b:
        uStack_60 = uStack_60 & 0xffffffff00000000;
LAB_1412a212e:
        if (local_68 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      local_68 = (code *)0x0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1446efa72(&local_68,0,3,0x10);
      plVar9 = (longlong *)local_68;
      uStack_60 = CONCAT44(uStack_60._4_4_,3);
      *(undefined ***)local_68 = &PTR_LAB_14b9abb90;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)((longlong)local_68 + 0x10) = lVar13;
      *(undefined ***)local_68 = &PTR_FUN_14b9ba450;
      *(longlong *)((longlong)local_68 + 0x18) = 0;
      iVar10 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x24);
        *(uint *)((longlong)local_68 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar10 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar10 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar7;
          }
        }
      }
      *(int *)((longlong)plVar9 + 0x1c) = iVar10;
      plVar9[4] = (longlong)FUN_1415da8b4;
      *(undefined4 *)(plVar9 + 5) = 0;
      if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_1412a313a:
        if ((int)uStack_60 == 0) goto LAB_1412a22fb;
        if (local_68 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          goto LAB_1412a22e8;
        }
      }
      else {
        cVar6 = (**(code **)(*(longlong *)local_68 + 0x30))();
        if (cVar6 == '\0') {
          goto LAB_1412a313a;
        }
        plVar9 = (longlong *)(lVar8 + 0x77a8);
        if (*(int *)(lVar8 + 0x77bc) < 1) {
          iVar10 = *(int *)(lVar8 + 0x77b0);
          iVar7 = *(int *)(lVar8 + 0x77b8) + -1;
          *(int *)(lVar8 + 0x77b8) = iVar7;
          if (iVar7 <= iVar10) {
            iVar7 = iVar10;
            if (0 < iVar10) {
              iVar12 = 0;
              do {
                if (((*(int *)(*plVar9 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar12 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar9,iVar12);
                  FUN_14005b248(plVar9);
                }
                else {
                  iVar12 = iVar12 + 1;
                }
                iVar7 = *(int *)(lVar8 + 0x77b0);
              } while (iVar12 < iVar7);
            }
            iVar12 = 2;
            if (2 < iVar7 * 2) {
              iVar12 = iVar7 * 2;
            }
            *(int *)(lVar8 + 0x77b8) = iVar12;
            if ((iVar12 < iVar10) && (*(int *)(lVar8 + 0x77b4) != iVar7)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_50);
        }
        iVar10 = *(int *)(lVar8 + 0x77b0);
        *(uint *)(lVar8 + 0x77b0) = iVar10 + 1U;
        if (*(uint *)(lVar8 + 0x77b4) < iVar10 + 1U) {
          FUN_1447a71f6(plVar9,iVar10);
        }
        lVar11 = *plVar9;
        lVar13 = (longlong)iVar10 * 0x10;
        *(undefined8 *)(lVar11 + lVar13) = 0;
        *(undefined4 *)(lVar11 + 8 + lVar13) = 0;
        *(code **)(lVar11 + lVar13) = local_68;
        local_68 = (code *)0x0;
        *(int *)(lVar11 + 8 + lVar13) = (int)uStack_60;
LAB_1412a22e8:
        uStack_60 = uStack_60 & 0xffffffff00000000;
LAB_1412a22fb:
        if (local_68 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      local_68 = (code *)0x0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1446efa72(&local_68,0,3,0x10);
      pcVar4 = local_68;
      uStack_60 = CONCAT44(uStack_60._4_4_,3);
      *(undefined ***)local_68 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_68 + 0x10) = lVar13;
      *(undefined ***)local_68 = &PTR_FUN_14b9ba1b0;
      *(longlong *)(local_68 + 0x18) = 0;
      iVar10 = 0;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + -0x24);
        *(uint *)(local_68 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar10 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar10 = *(int *)(lVar11 + 0x10);
          bVar14 = iVar10 == 0;
          if (bVar14) {
            *(int *)(lVar11 + 0x10) = iVar7;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar10 = iVar7;
          }
        }
      }
      *(int *)(pcVar4 + 0x1c) = iVar10;
      *(code **)(pcVar4 + 0x20) = FUN_1457d0700;
      *(undefined4 *)(pcVar4 + 0x28) = 0;
      FUN_1448b6402(lVar8 + 0x52f0,&local_50,&local_68);
      if ((int)uStack_60 == 0) {
LAB_1412a23fb:
        if (local_68 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        goto LAB_1412a23fb;
      }
      uVar2 = *(uint *)(lVar8 + 0xc);
      *(uint *)(param_1 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar10 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar10 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar10 = iVar7;
        }
      }
      *(int *)((longlong)param_1 + 0x1c) = iVar10;
    }
  }
  lVar8 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x1f0) != 0)) && (lVar8 = FUN_1400d6ce6(), lVar8 != 0)
     ) {
    iVar10 = *(int *)(lVar8 + 0x198);
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(lVar8 + 400);
      lVar13 = 0;
      do {
        if (((*(int *)(lVar11 + 8 + lVar13) != 0) &&
            (plVar9 = *(longlong **)(lVar11 + lVar13), plVar9 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,plVar1), cVar6 != '\0'))
        goto LAB_1412a2685;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar13);
    }
    local_68 = (code *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_1446efa72(&local_68,0,3,0x10);
    pcVar4 = local_68;
    uStack_60 = CONCAT44(uStack_60._4_4_,3);
    *(undefined ***)local_68 = &PTR_LAB_14b9a7080;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    *(longlong *)(local_68 + 0x10) = lVar13;
    *(undefined ***)local_68 = &PTR_FUN_14b9ba4c0;
    *(longlong *)(local_68 + 0x18) = 0;
    iVar10 = 0;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + -0x24);
      *(uint *)(local_68 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar10 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar10 = *(int *)(lVar11 + 0x10);
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar7;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar10 = iVar7;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar10;
    *(code **)(pcVar4 + 0x20) = FUN_1414c55e2;
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_1412a31b8:
      if ((int)uStack_60 == 0) goto LAB_1412a267c;
      if (local_68 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        goto LAB_1412a2669;
      }
    }
    else {
      cVar6 = (**(code **)(*(longlong *)local_68 + 0x30))();
      if (cVar6 == '\0') {
        goto LAB_1412a31b8;
      }
      plVar9 = (longlong *)(lVar8 + 400);
      if (*(int *)(lVar8 + 0x1a4) < 1) {
        iVar10 = *(int *)(lVar8 + 0x198);
        iVar7 = *(int *)(lVar8 + 0x1a0) + -1;
        *(int *)(lVar8 + 0x1a0) = iVar7;
        if (iVar7 <= iVar10) {
          iVar7 = iVar10;
          if (0 < iVar10) {
            iVar12 = 0;
            do {
              if (((*(int *)(*plVar9 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar12 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar3 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar9,iVar12);
                FUN_14005b248(plVar9);
              }
              else {
                iVar12 = iVar12 + 1;
              }
              iVar7 = *(int *)(lVar8 + 0x198);
            } while (iVar12 < iVar7);
          }
          iVar12 = 2;
          if (2 < iVar7 * 2) {
            iVar12 = iVar7 * 2;
          }
          *(int *)(lVar8 + 0x1a0) = iVar12;
          if ((iVar12 < iVar10) && (*(int *)(lVar8 + 0x19c) != iVar7)) {
            FUN_14045812c();
          }
        }
      }
      if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_50);
      }
      iVar10 = *(int *)(lVar8 + 0x198);
      *(uint *)(lVar8 + 0x198) = iVar10 + 1U;
      if (*(uint *)(lVar8 + 0x19c) < iVar10 + 1U) {
        FUN_1447a71f6(plVar9,iVar10);
      }
      lVar11 = *plVar9;
      lVar13 = (longlong)iVar10 * 0x10;
      *(undefined8 *)(lVar11 + lVar13) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar13) = 0;
      *(code **)(lVar11 + lVar13) = local_68;
      local_68 = (code *)0x0;
      *(int *)(lVar11 + 8 + lVar13) = (int)uStack_60;
LAB_1412a2669:
      uStack_60 = uStack_60 & 0xffffffff00000000;
LAB_1412a267c:
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_1412a2685:
    iVar10 = *(int *)(lVar8 + 0x168);
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(lVar8 + 0x160);
      lVar13 = 0;
      do {
        if (((*(int *)(lVar11 + 8 + lVar13) != 0) &&
            (plVar9 = *(longlong **)(lVar11 + lVar13), plVar9 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,plVar1), cVar6 != '\0'))
        goto LAB_1412a27da;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar13);
    }
    local_68 = (code *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_1446efa72(&local_68,0,3,0x10);
    pcVar4 = local_68;
    uStack_60 = CONCAT44(uStack_60._4_4_,3);
    *(undefined ***)local_68 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    *(longlong *)(local_68 + 0x10) = lVar13;
    *(undefined ***)local_68 = &PTR_FUN_14b9ba1b0;
    *(longlong *)(local_68 + 0x18) = 0;
    iVar10 = 0;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + -0x24);
      *(uint *)(local_68 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar10 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar10 = *(int *)(lVar11 + 0x10);
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar7;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar10 = iVar7;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar10;
    *(code **)(pcVar4 + 0x20) = FUN_1418f8fa4;
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    FUN_1448b6402(lVar8 + 0x160,&local_50,&local_68);
    if ((int)uStack_60 == 0) {
LAB_1412a27c9:
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_68 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      uStack_60 = uStack_60 & 0xffffffff00000000;
      goto LAB_1412a27c9;
    }
LAB_1412a27da:
    iVar10 = *(int *)(lVar8 + 0x180);
    if ((longlong)iVar10 != 0) {
      lVar11 = *(longlong *)(lVar8 + 0x178);
      lVar13 = 0;
      do {
        if (((*(int *)(lVar11 + 8 + lVar13) != 0) &&
            (plVar9 = *(longlong **)(lVar11 + lVar13), plVar9 != (longlong *)0x0)) &&
           (cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,plVar1), cVar6 != '\0'))
        goto LAB_1412a2926;
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar13);
    }
    local_68 = (code *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_1446efa72(&local_68,0,3,0x10);
    pcVar4 = local_68;
    uStack_60 = CONCAT44(uStack_60._4_4_,3);
    *(undefined ***)local_68 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    *(longlong *)(local_68 + 0x10) = lVar13;
    *(undefined ***)local_68 = &PTR_FUN_14b9ba1b0;
    *(longlong *)(local_68 + 0x18) = 0;
    iVar10 = 0;
    if (plVar1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + -0x24);
      *(uint *)(local_68 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar10 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar10 = *(int *)(lVar11 + 0x10);
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar7;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar10 = iVar7;
        }
      }
    }
    *(int *)(pcVar4 + 0x1c) = iVar10;
    *(undefined **)(pcVar4 + 0x20) = &DAT_148e5d07a;
    *(undefined4 *)(pcVar4 + 0x28) = 0;
    FUN_1448b6402(lVar8 + 0x178,&local_50,&local_68);
    if ((int)uStack_60 != 0) {
      if (local_68 == (code *)0x0) goto LAB_1412a2926;
      (*(code *)**(undefined8 **)local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      uStack_60 = uStack_60 & 0xffffffff00000000;
    }
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1412a2926:
  FUN_1412a3970(plVar1);
LAB_1412a292e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a3650 FUN_1412a3650 body=176 status=ok
// SIG undefined FUN_1412a3650(void)

undefined8 * FUN_1412a3650(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d80) {
    FUN_144b3d300(&DAT_14cbd6d80);
    if (DAT_14cbd6d80 == -1) {
      builtin_wcsncpy(local_38 + 8,L"Changed",8);
      builtin_wcsncpy(local_38,L"OnWeapon",8);
      FUN_1446f470e(&DAT_14cbd6d78,local_38,1);
      _Init_thread_footer(&DAT_14cbd6d80);
    }
  }
  *param_1 = DAT_14cbd6d78;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a3750 FUN_1412a3750 body=375 status=ok
// SIG undefined FUN_1412a3750(void)

undefined8 * FUN_1412a3750(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412a3970 FUN_1412a3970 body=2065 status=ok
// SIG undefined FUN_1412a3970(void)

void FUN_1412a3970(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int iStack_70;
  wchar_t awStack_6c [22];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (uint *)(param_1 + 0x50);
  cVar4 = FUN_140f66224();
  if (cVar4 != '\0') goto LAB_1412a3ec7;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 == 0) {
LAB_1412a3f5f:
    lVar6 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar5 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_1412a3f5f;
      lVar6 = *plVar7;
    }
  }
  if ((0 < *(int *)(lVar6 + 0xbf0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xbe8) + 0x10), lVar6 != 0)) {
    local_78 = (undefined8 *)0x0;
    iStack_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar3 = local_78;
    iStack_70 = 3;
    *local_78 = &PTR_LAB_149e020b0;
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
    local_78[2] = lVar8;
    *local_78 = &PTR_FUN_14b9ba1b0;
    local_78[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_78 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar5 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar5 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar5;
    puVar3[4] = FUN_140f64a3c;
    *(undefined4 *)(puVar3 + 5) = 0;
    FUN_1448b6402(lVar6 + 0x40,&local_80,&local_78);
    if (iStack_70 == 0) {
LAB_1412a3b05:
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      iStack_70 = 0;
      goto LAB_1412a3b05;
    }
    *(undefined8 *)(param_1 + 0x58) = local_80;
    iVar5 = *(int *)(param_1 + 0x54);
  }
  if (iVar5 == 0) {
LAB_1412a3f66:
    lVar6 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar5 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_1412a3f66;
      lVar6 = *plVar7;
    }
  }
  if ((1 < *(int *)(lVar6 + 0xbf0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xbe8) + 0x98), lVar6 != 0)) {
    local_78 = (undefined8 *)0x0;
    iStack_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar3 = local_78;
    iStack_70 = 3;
    *local_78 = &PTR_LAB_149e020b0;
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
    local_78[2] = lVar8;
    *local_78 = &PTR_FUN_14b9ba1b0;
    local_78[3] = 0;
    iVar5 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_78 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar5 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar5 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar3 + 0x1c) = iVar5;
    puVar3[4] = FUN_140f64a3c;
    *(undefined4 *)(puVar3 + 5) = 0;
    FUN_1448b6402(lVar6 + 0x40,&local_80,&local_78);
    if (iStack_70 == 0) {
LAB_1412a3c80:
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      iStack_70 = 0;
      goto LAB_1412a3c80;
    }
    *(undefined8 *)(param_1 + 0x60) = local_80;
    iVar5 = *(int *)(param_1 + 0x54);
  }
  if (iVar5 == 0) {
LAB_1412a3f6d:
    lVar6 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar5 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_1412a3f6d;
      lVar6 = *plVar7;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd8ca8) && (FUN_144b3d300(&DAT_14cbd8ca8), DAT_14cbd8ca8 == -1)) {
    builtin_wcsncpy(awStack_6c + 10,L"Modes",6);
    builtin_wcsncpy(awStack_6c + 2,L"witching",8);
    local_78 = (undefined8 *)0x740053006e004f;
    iStack_70._0_2_ = L'a';
    iStack_70._2_2_ = L'r';
    awStack_6c[0] = L't';
    awStack_6c[1] = L'S';
    FUN_1446f470e(&DAT_14cbd8ca0,&local_78,1);
    _Init_thread_footer(&DAT_14cbd8ca8);
  }
  FUN_1412a4324(lVar6 + 0xa00,param_1,DAT_14cbd8ca0);
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1412a3f74:
    lVar6 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1412a3f74;
      lVar6 = *plVar7;
    }
  }
  FUN_1412a4182(&local_88);
  FUN_1412a4324(lVar6 + 0xa10,param_1,local_88);
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1412a3f7b:
    lVar6 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1412a3f7b;
      lVar6 = *plVar7;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd8cb8) && (FUN_144b3d300(&DAT_14cbd8cb8), DAT_14cbd8cb8 == -1)) {
    builtin_wcsncpy(awStack_6c + 2,L"Started",8);
    local_78 = (undefined8 *)0x650052006e004f;
    iStack_70._0_2_ = L'l';
    iStack_70._2_2_ = L'o';
    awStack_6c[0] = L'a';
    awStack_6c[1] = L'd';
    FUN_1446f470e(&DAT_14cbd8cb0,&local_78,1);
    _Init_thread_footer(&DAT_14cbd8cb8);
  }
  FUN_1412a4578(lVar6 + 0xa20,param_1,DAT_14cbd8cb0);
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1412a3f82:
    lVar6 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1412a3f82;
      lVar6 = *plVar7;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbd8cc8) && (FUN_144b3d300(&DAT_14cbd8cc8), DAT_14cbd8cc8 == -1)) {
    builtin_wcsncpy(awStack_6c + 2,L"Ended",6);
    local_78 = (undefined8 *)0x650052006e004f;
    iStack_70._0_2_ = L'l';
    iStack_70._2_2_ = L'o';
    awStack_6c[0] = L'a';
    awStack_6c[1] = L'd';
    FUN_1446f470e(&DAT_14cbd8cc0,&local_78,1);
    _Init_thread_footer(&DAT_14cbd8cc8);
  }
  FUN_1412a4578(lVar6 + 0xa30,param_1,DAT_14cbd8cc0);
  FUN_1412a4234(param_1);
LAB_1412a3ec7:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a4182 FUN_1412a4182 body=176 status=ok
// SIG undefined FUN_1412a4182(void)

undefined8 * FUN_1412a4182(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb949cc) {
    FUN_144b3d300(&DAT_14cb949cc);
    if (DAT_14cb949cc == -1) {
      builtin_wcsncpy(local_38,L"OnSwitchedMode",0xf);
      FUN_1446f470e(&DAT_14cb949c4,local_38,1);
      _Init_thread_footer(&DAT_14cb949cc);
    }
  }
  *param_1 = DAT_14cb949c4;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a4234 FUN_1412a4234 body=238 status=ok
// SIG undefined FUN_1412a4234(void)

void FUN_1412a4234(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1410f362a();
  if (cVar2 != '\0') {
    cVar2 = FUN_140f66224(param_1 + 0x50);
    if (cVar2 == '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 0x50);
      bVar1 = *(byte *)(lVar3 + 0xbd8);
      if (((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(lVar3 + 0xbe8) + 0x40 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar3 != 0)) {
        local_48 = FUN_140da7558;
        local_40 = 0;
        FUN_14588bf10(lVar3 + 0x38,&local_38,param_1,&local_48);
        *(undefined8 *)(param_1 + 0x68) = local_38;
        local_48 = FUN_1412d0304;
        local_40 = 0;
        FUN_14588c010(lVar3 + 0x68,&local_38,param_1,&local_48);
        *(undefined8 *)(param_1 + 0x70) = local_38;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a4324 FUN_1412a4324 body=595 status=ok
// SIG undefined FUN_1412a4324(void)

void FUN_1412a4324(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_3;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_1412a4519;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_1412a4519:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a4578 FUN_1412a4578 body=595 status=ok
// SIG undefined FUN_1412a4578(void)

void FUN_1412a4578(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_3;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_1412a476d;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_1412a476d:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a47cc FUN_1412a47cc body=100 status=ok
// SIG undefined FUN_1412a47cc(void)

void FUN_1412a47cc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6f1e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a4832 FUN_1412a4832 body=59 status=ok
// SIG undefined FUN_1412a4832(void)

undefined8 * FUN_1412a4832(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1f9580;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412a486e FUN_1412a486e body=374 status=ok
// SIG undefined FUN_1412a486e(void)

/* WARNING: Removing unreachable block (ram,0x0001412a49c7) */
/* WARNING: Removing unreachable block (ram,0x0001412a49d6) */
/* WARNING: Removing unreachable block (ram,0x0001412a49da) */

undefined8 FUN_1412a486e(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  undefined8 uStack_188;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_190,local_78);
  local_48 = &PTR_FUN_14b47b0c0;
  uStack_40 = local_190;
  uStack_38 = uStack_188;
  local_190 = 0;
  uStack_188 = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = FUN_1418b8b88;
  puVar3[4] = 0;
  local_58 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_48._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_40._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_38._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_2c;
  local_68 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_190 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_80 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1412a49e6 FUN_1412a49e6 body=476 status=ok
// SIG undefined FUN_1412a49e6(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x0001412a4bb8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_1412a49e6(longlong param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar1 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b0,local_88);
  local_1a0 = *param_3;
  uStack_198 = *param_4;
  puVar5 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar2 = &PTR_FUN_14b47b030;
  plVar6 = puVar2 + 1;
  *plVar6 = local_1b0;
  local_1b0 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_1a8._4_4_;
  local_1a8 = 0;
  *(undefined4 *)(puVar2 + 3) = (undefined4)local_1a0;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = local_1a0._4_4_;
  *(undefined4 *)(puVar2 + 4) = (undefined4)uStack_198;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_198._4_4_;
  if (plVar6 != (longlong *)0x0) {
    puVar5 = &LAB_1412bf778;
    local_78 = &LAB_1412bf778;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = puVar5;
  puVar3[4] = puVar2;
  local_68 = 0;
  *(undefined4 *)(puVar3 + 8) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_44;
  *(undefined4 *)(puVar3 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar3 + 6) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_54;
  *(undefined4 *)(puVar3 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_4c;
  if (plVar6 != (longlong *)0x0) {
    local_78 = (undefined1 *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = puVar3;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      uVar4 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1b0 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1412a4bc4 FUN_1412a4bc4 body=1152 status=ok
// SIG undefined FUN_1412a4bc4(void)

void FUN_1412a4bc4(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
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
  uStack_20 = 0;
  uStack_19 = 0;
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
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined7)uVar2;
      uStack_19 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_21 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_140a4831c;
      local_48 = 0x1000000008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (undefined1)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_21);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412a5046(local_18,CONCAT17(uStack_19,uStack_20),local_21);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a5046 FUN_1412a5046 body=239 status=ok
// SIG undefined FUN_1412a5046(void)

void FUN_1412a5046(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    FUN_141031670(0,&local_48);
    if ((longlong)(int)uStack_40 != 0) {
      plVar1 = local_48 + (int)uStack_40;
      plVar3 = local_48;
      do {
        plVar2 = (longlong *)*plVar3;
        if (plVar2 == (longlong *)0x0) goto LAB_1412a50ae;
        if (param_2 == 0) {
LAB_1412a50b9:
          (**(code **)(*plVar2 + 0x620))();
        }
        else if (param_3 == '\0') {
          lVar4 = *(longlong *)((longlong)plVar2 + 0x34c);
joined_r0x0001412a512e:
          if (lVar4 == param_2) goto LAB_1412a50b9;
        }
        else if (param_3 == '\x02') {
          if ((longlong)(int)plVar2[0xf] != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(plVar2[0xe] + lVar4) == param_2) goto LAB_1412a50b9;
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar2[0xf] * 8 != lVar4);
          }
        }
        else if (param_3 == '\x01') {
          lVar4 = plVar2[0x25];
          goto joined_r0x0001412a512e;
        }
LAB_1412a50ae:
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a5136 FUN_1412a5136 body=87 status=ok
// SIG undefined FUN_1412a5136(void)

void FUN_1412a5136(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x38);
  FUN_140aa1618(param_1 + 0x58,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  return;
}



// FUNCTION 1412a518d FUN_1412a518d body=55 status=ok
// SIG undefined FUN_1412a518d(void)

void FUN_1412a518d(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_1412a51c4(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1412a51c4 FUN_1412a51c4 body=361 status=ok
// SIG undefined FUN_1412a51c4(void)

longlong FUN_1412a51c4(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_140dd90de();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_1447715ec(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x60);
    _Src = *(void **)(param_2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x58),iVar1,0);
      memcpy(*(void **)(param_1 + 0x58),_Src,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 1412a532e FUN_1412a532e body=133 status=ok
// SIG undefined FUN_1412a532e(void)

void FUN_1412a532e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_140d5fbf2(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412a53b4 FUN_1412a53b4 body=877 status=ok
// SIG undefined FUN_1412a53b4(void)

void FUN_1412a53b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_84;
  ulonglong local_80;
  longlong local_78;
  uint *local_70;
  longlong local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar18 = *(longlong *)(param_1 + 0x308);
  if (lVar18 != 0) {
    uVar20 = *(uint *)(lVar18 + 0x430);
    if (uVar20 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      uVar8 = 0;
      iVar14 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar18 + 0x428);
      if (*(uint **)(lVar18 + 0x428) == (uint *)0x0) {
        puVar9 = (uint *)(lVar18 + 0x418);
      }
      uVar8 = *puVar9;
      if (uVar8 == 0) {
        iVar14 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar14 = uVar20 - 1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar14 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_1412a5634;
          iVar14 = iVar14 + 0x20;
          uVar8 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar15 = 0;
        iVar14 = 0;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar11 = uVar16 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar8 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar20 <= (int)uVar8) {
        uVar8 = uVar20;
      }
    }
    if (uVar8 != uVar20) {
      uVar19 = 0xffffffff;
      local_80 = (ulonglong)uVar20;
      local_78 = lVar18;
      local_70 = (uint *)(lVar18 + 0x418);
      local_68 = param_2;
      do {
        lVar18 = *(longlong *)(local_78 + 0x408);
        lVar10 = (longlong)(int)uVar8;
        uVar3 = *(undefined8 *)(lVar18 + 8 + lVar10 * 0x28);
        plVar4 = *(longlong **)(lVar18 + 0x10 + lVar10 * 0x28);
        local_84 = uVar19;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        FUN_1412a5814(param_2,local_58);
        puVar6 = local_50;
        uVar5 = *(undefined8 *)(lVar18 + lVar10 * 0x28);
        *local_50 = uVar5;
        local_50[1] = uVar3;
        local_50[2] = plVar4;
        *(undefined4 *)(local_50 + 3) = 0xffffffff;
        local_5c = local_58[0];
        uVar20 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar8 = (uint)uVar5 & 0xffff;
        uVar20 = ((uint)uVar5 << 0x10 | uVar8) + (int)((ulonglong)uVar5 >> 0x20) +
                 (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar8 >> 4);
        local_98 = 0;
        cVar7 = FUN_1412a5722(param_2,uVar20,local_50,&local_5c);
        if (cVar7 == '\0') {
          uVar8 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
          iVar17 = 1;
          if (3 < uVar8) {
            uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
            lVar18 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
              }
            }
            iVar17 = 1 << ((byte)lVar18 & 0x1f);
          }
          if (((int)uVar8 < 1) || (iVar17 <= *(int *)(param_2 + 0x48))) {
            uVar20 = *(int *)(param_2 + 0x48) - 1U & uVar20;
            *(uint *)((longlong)puVar6 + 0x1c) = uVar20;
            lVar18 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              lVar18 = param_2 + 0x38;
            }
            *(undefined4 *)(puVar6 + 3) =
                 *(undefined4 *)
                  (lVar18 + ((longlong)*(int *)(param_2 + 0x48) - 1U & (longlong)(int)uVar20) * 4);
            lVar18 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x40) == 0) {
              lVar18 = param_2 + 0x38;
            }
            *(undefined4 *)
             (lVar18 + ((longlong)*(int *)(param_2 + 0x48) - 1U & (longlong)(int)uVar20) * 4) =
                 local_5c;
          }
          else {
            *(int *)(param_2 + 0x48) = iVar17;
            FUN_1412a59f0(param_2);
          }
        }
        uVar19 = local_84 & ~(uint)uVar16;
        puVar9 = *(uint **)(local_78 + 0x428);
        if (*(uint **)(local_78 + 0x428) == (uint *)0x0) {
          puVar9 = local_70;
        }
        uVar20 = *(uint *)(local_78 + 0x430);
        iVar17 = (int)uVar15;
        lVar18 = (longlong)iVar17;
        uVar8 = puVar9[lVar18] & uVar19;
        if (uVar8 == 0) {
          iVar12 = uVar20 + 0x1e;
          if (-1 < (int)(uVar20 - 1)) {
            iVar12 = uVar20 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar17) {
            iVar13 = iVar17;
          }
          if (iVar17 < iVar12) {
            lVar10 = 0;
            do {
              uVar8 = puVar9[lVar18 + lVar10 + 1];
              if (uVar8 != 0) {
                uVar15 = (ulonglong)(iVar17 + (int)lVar10 + 1);
                uVar19 = 0xffffffff;
                goto LAB_1412a5603;
              }
              iVar14 = iVar14 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar13 - lVar18 != lVar10);
            uVar19 = 0xffffffff;
            iVar17 = iVar13;
          }
          uVar15 = (ulonglong)(iVar17 + 1);
          uVar8 = uVar20;
        }
        else {
LAB_1412a5603:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar11 = uVar16 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar8 = (iVar14 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar20 <= (int)uVar8) {
            uVar8 = uVar20;
          }
        }
      } while (uVar8 != (uint)local_80);
    }
  }
LAB_1412a5634:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a5722 FUN_1412a5722 body=242 status=ok
// SIG undefined FUN_1412a5722(void)

void FUN_1412a5722(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14588db30(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          break;
        }
        iVar10 = puVar3[6];
        uVar8 = 0;
      } while (iVar10 != -1);
      goto LAB_1412a5752;
    }
  }
  uVar8 = 0;
LAB_1412a5752:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 1412a5814 FUN_1412a5814 body=476 status=ok
// SIG undefined FUN_1412a5814(void)

int * FUN_1412a5814(longlong *param_1,int *param_2)

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



// FUNCTION 1412a59f0 FUN_1412a59f0 body=694 status=ok
// SIG undefined FUN_1412a59f0(void)

void FUN_1412a59f0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1412a5a56;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1412a5a56:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1412a5ca6 FUN_1412a5ca6 body=85 status=ok
// SIG undefined FUN_1412a5ca6(void)

void FUN_1412a5ca6(longlong *param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = (int)param_2[1];
  lVar2 = *param_2;
  uVar4 = (longlong)iVar5 * 2;
  do {
    if (uVar4 == 0) goto LAB_1412a5cf4;
    sVar1 = *(short *)(lVar2 + -2 + uVar4);
    uVar4 = uVar4 - 2;
  } while ((sVar1 != 0x2f) && (sVar1 != 0x5c));
  if (lVar2 + uVar4 != 0) {
    iVar3 = (int)(uVar4 >> 1);
    if (iVar5 <= iVar3) {
      iVar3 = iVar5;
    }
    iVar5 = 0;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    *param_1 = lVar2;
    *(int *)(param_1 + 1) = iVar5;
    return;
  }
LAB_1412a5cf4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1412a5cfc FUN_1412a5cfc body=106 status=ok
// SIG undefined FUN_1412a5cfc(void)

void FUN_1412a5cfc(PSRWLOCK param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  
  AcquireSRWLockShared(param_1);
  lVar1 = *(longlong *)((longlong)param_1[3].Ptr + (longlong)(param_2 / 0x555) * 8);
  FUN_140a6aedf(param_3,*(undefined8 *)(lVar1 + (longlong)(param_2 % 0x555) * 0x18),
                *(undefined4 *)(lVar1 + 8 + (longlong)(param_2 % 0x555) * 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001412a5d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(param_1);
  return;
}



// FUNCTION 1412a5d66 FUN_1412a5d66 body=120 status=ok
// SIG undefined FUN_1412a5d66(void)

undefined * FUN_1412a5d66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845168) {
    FUN_144b3d300(&DAT_14c845168);
    if (DAT_14c845168 == -1) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = &DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
  }
  return DAT_14c845160;
}



// FUNCTION 1412a5dde FUN_1412a5dde body=667 status=ok
// SIG undefined FUN_1412a5dde(void)

longlong FUN_1412a5dde(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  int *local_e8;
  int local_dc;
  undefined8 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b4 [4];
  longlong *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14006620a(&local_b0,*param_2,*(undefined4 *)(param_2 + 1));
  local_d8 = local_b0;
  iStack_d0 = (int)uStack_a8;
  uStack_cc = uStack_a8._4_4_;
  FUN_140aa5ef8(&local_c8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140e4328c();
  plVar5 = local_c8;
  plVar1 = param_1 + 2;
  local_b0 = local_c8;
  iVar4 = (int)uStack_c0;
  uVar9 = 0;
  iVar7 = (int)uStack_c0 + -1;
  if ((int)uStack_c0 == 0) {
    iVar7 = 0;
  }
  uStack_a8 = (int *)CONCAT44(uStack_a8._4_4_,iVar7);
  if (0 < iVar7) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      uVar3 = *(ushort *)((longlong)local_c8 + lVar8 * 2);
      uVar10 = ((uint)(0x19 < uVar3 - 0x61) * 0x20 + (uint)uVar3) - 0x20;
      uVar11 = (uint)(uVar9 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar7 != (int)lVar8);
  }
  iVar7 = FUN_1413ec388(plVar1,uVar9,&local_b0);
  if ((iVar7 == -1) || (lVar8 = (longlong)iVar7 * 0x20 + *plVar1, lVar8 == 0)) {
    local_dc = -1;
  }
  else {
    iVar7 = *(int *)(lVar8 + 0x10);
    if (iVar7 != -1) goto LAB_1412a5eef;
  }
  uVar6 = uStack_c0._4_4_;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar7 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  local_e8 = param_3;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_14626a892(param_1,iVar7);
  }
  lVar8 = (longlong)iVar7 * 0x68;
  puVar2 = (undefined8 *)(*param_1 + lVar8);
  *puVar2 = plVar5;
  local_b0 = (longlong *)0x0;
  *(int *)(puVar2 + 1) = iVar4;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
  uStack_a8 = (int *)0x0;
  FUN_1458d6518(puVar2 + 2,&local_a0);
  *(undefined1 *)(puVar2 + 0xc) = local_50;
  local_58 = 0;
  local_dc = iVar7;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_14142ff8c(&local_a0);
  param_3 = local_e8;
  if (local_b0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = *(undefined8 **)(*param_1 + lVar8);
  iVar4 = *(int *)(*param_1 + 8 + lVar8);
  iStack_d0 = iVar4 + -1;
  if (iVar4 == 0) {
    iStack_d0 = 0;
  }
  local_b0 = (longlong *)&local_d8;
  uStack_a8 = &local_dc;
  FUN_14596147a(plVar1,local_b4);
  iVar7 = local_dc;
LAB_1412a5eef:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar7;
  }
  lVar8 = *param_1;
  if ((undefined8 **)local_c8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar8 + (longlong)iVar7 * 0x68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a607a caseD_42 body=1 status=ok
// SIG undefined caseD_42(void)

void switchD_143c3d4dc::caseD_42(void)

{
  return;
}



// FUNCTION 1412a607c FUN_1412a607c body=278 status=ok
// SIG undefined FUN_1412a607c(void)

void FUN_1412a607c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_2 != 0) && ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8)) &&
      (iVar1 = FUN_14487fd02(param_2), iVar1 != 3)) &&
     ((*(char *)(param_1 + 0xb0) != '\0' && (*(char *)(param_1 + 0xb0) != '\t')))) {
    FUN_148d7ffd0(param_1 + 0x168);
    local_2c = 0;
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar2 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar2);
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar3 + 0x10) = iVar2;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar2;
      }
    }
    local_2c = iVar1;
    FUN_145a5d306(param_1 + 0x168);
    FUN_1441ab0ce(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a6194 FUN_1412a6194 body=279 status=ok
// SIG undefined FUN_1412a6194(void)

void FUN_1412a6194(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a2a0f10;
  param_1[1] = &PTR_FUN_14a2a0f40;
  lVar3 = 0;
  do {
    puVar2 = *(undefined8 **)((longlong)param_1 + lVar3 + 0x310);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != -0x30);
  lVar3 = param_1[0x5c];
  if (lVar3 != 0) {
    FUN_1401a8ad8(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = param_1[0x5b];
  if (lVar3 != 0) {
    FUN_14588e32e(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_14588e29e(param_1 + 0x54);
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 1);
  return;
}



// FUNCTION 1412a62ac FUN_1412a62ac body=94 status=ok
// SIG undefined FUN_1412a62ac(void)

void FUN_1412a62ac(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 6) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 != 0 ||
      (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)))) {
    FUN_1401b4182(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1412a630a FUN_1412a630a body=197 status=ok
// SIG undefined FUN_1412a630a(void)

int FUN_1412a630a(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1412a634c:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1412a63a8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1412a63a8;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1412a6366;
    }
  }
  return -1;
LAB_1412a63a8:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1412a6366:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1412a634c;
}



// FUNCTION 1412a63d0 FUN_1412a63d0 body=485 status=ok
// SIG undefined FUN_1412a63d0(void)

void FUN_1412a63d0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 1412a65b6 FUN_1412a65b6 body=961 status=ok
// SIG undefined FUN_1412a65b6(void)

undefined8 FUN_1412a65b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  
  if (param_4 != 0) {
    lVar23 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar23) = *(undefined2 *)(param_3 + 0x10 + lVar23);
      *(undefined8 *)(param_2 + 8 + lVar23) = *(undefined8 *)(param_3 + 8 + lVar23);
      *(undefined8 *)(param_2 + 0x38 + lVar23) = *(undefined8 *)(param_3 + 0x38 + lVar23);
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar23);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar23);
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x28 + lVar23);
      *puVar4 = *puVar3;
      puVar4[1] = uVar11;
      puVar4[2] = uVar12;
      puVar4[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar23);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      *(undefined2 *)(param_2 + 0x48 + lVar23) = *(undefined2 *)(param_3 + 0x48 + lVar23);
      *(undefined8 *)(param_2 + 0x40 + lVar23) = *(undefined8 *)(param_3 + 0x40 + lVar23);
      lVar22 = *(longlong *)(param_3 + 0x50 + lVar23);
      if (DAT_14c950c29 == 1) {
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar22 = *(longlong *)(param_3 + 0x50 + lVar23);
        }
      }
      bVar21 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x50 + lVar23) = lVar22;
      lVar22 = *(longlong *)(param_3 + 0x58 + lVar23);
      if ((bVar21 & 1) != 0) {
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar22 = *(longlong *)(param_3 + 0x58 + lVar23);
        }
      }
      lVar1 = param_3 + lVar23;
      lVar2 = param_2 + lVar23;
      *(longlong *)(param_2 + 0x58 + lVar23) = lVar22;
      puVar24 = (undefined8 *)(param_3 + 0x60 + lVar23);
      uVar18 = puVar24[1];
      puVar25 = (undefined8 *)(param_3 + 0x70 + lVar23);
      uVar19 = *puVar25;
      uVar20 = puVar25[1];
      puVar25 = (undefined8 *)(param_2 + 0x60 + lVar23);
      *puVar25 = *puVar24;
      puVar25[1] = uVar18;
      puVar24 = (undefined8 *)(param_2 + 0x70 + lVar23);
      *puVar24 = uVar19;
      puVar24[1] = uVar20;
      *(undefined4 *)(param_2 + 0x80 + lVar23) = *(undefined4 *)(param_3 + 0x80 + lVar23);
      puVar3 = (undefined4 *)(param_3 + 0x88 + lVar23);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x98 + lVar23);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0xa8 + lVar23);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      uVar16 = puVar4[2];
      uVar17 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x88 + lVar23);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x98 + lVar23);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0xa8 + lVar23);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      *(undefined8 *)(param_2 + 0xb8 + lVar23) = *(undefined8 *)(param_3 + 0xb8 + lVar23);
      FUN_140d2c6ac(lVar2 + 0xc0,lVar1 + 0xc0);
      *(undefined1 *)(param_2 + 0xd0 + lVar23) = *(undefined1 *)(param_3 + 0xd0 + lVar23);
      puVar24 = (undefined8 *)(lVar1 + 0xe0);
      puVar25 = (undefined8 *)(lVar2 + 0xe0);
      for (lVar22 = 0x10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar25 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar25 = puVar25 + 1;
      }
      *(undefined2 *)(param_2 + 0x1cc + lVar23) = *(undefined2 *)(param_3 + 0x1cc + lVar23);
      *(undefined4 *)(param_2 + 0x1c8 + lVar23) = *(undefined4 *)(param_3 + 0x1c8 + lVar23);
      FUN_14093c00e(lVar2 + 0x1d0,lVar1 + 0x1d0);
      lVar22 = *(longlong *)(param_3 + 0x1e0 + lVar23);
      if (DAT_14c950c29 == 1) {
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar22 = *(longlong *)(param_3 + 0x1e0 + lVar23);
        }
      }
      *(longlong *)(param_2 + 0x1e0 + lVar23) = lVar22;
      puVar3 = (undefined4 *)(param_3 + 0x1e8 + lVar23);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x1f8 + lVar23);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x208 + lVar23);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      uVar16 = puVar4[2];
      uVar17 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x1e8 + lVar23);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x1f8 + lVar23);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0x208 + lVar23);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      if (lVar2 != lVar1) {
        iVar5 = *(int *)(param_3 + 0x220 + lVar23);
        pvVar6 = *(void **)(param_3 + 0x218 + lVar23);
        *(int *)(param_2 + 0x220 + lVar23) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x224 + lVar23) == 0) {
          *(undefined4 *)(param_2 + 0x224 + lVar23) = 0;
        }
        else {
          puVar24 = (undefined8 *)(param_2 + lVar23 + 0x218);
          FUN_1412a69ce(puVar24,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar24,pvVar6,(longlong)iVar5 * 0x30);
          }
        }
      }
      FUN_1405b70a4(lVar2 + 0x228,lVar1 + 0x228);
      FUN_1412a6978(lVar2 + 0x238,lVar1 + 0x238);
      puVar3 = (undefined4 *)(param_3 + 0x248 + lVar23);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 600 + lVar23);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x268 + lVar23);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      uVar16 = puVar4[2];
      uVar17 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x248 + lVar23);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 600 + lVar23);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0x268 + lVar23);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      *(undefined8 *)(param_2 + 0x278 + lVar23) = *(undefined8 *)(param_3 + 0x278 + lVar23);
      FUN_1405b70a4(lVar2 + 0x280,lVar1 + 0x280);
      if (lVar2 != lVar1) {
        iVar5 = *(int *)(param_3 + 0x298 + lVar23);
        pvVar6 = *(void **)(param_3 + 0x290 + lVar23);
        *(int *)(param_2 + 0x298 + lVar23) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x29c + lVar23) == 0) {
          *(undefined4 *)(param_2 + 0x29c + lVar23) = 0;
        }
        else {
          puVar24 = (undefined8 *)(param_2 + lVar23 + 0x290);
          FUN_1474fd7ce(puVar24,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar24,pvVar6,(longlong)iVar5 << 2);
          }
        }
      }
      FUN_14054c6c4(lVar2 + 0x2a0,lVar1 + 0x2a0);
      lVar23 = lVar23 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412a6978 FUN_1412a6978 body=85 status=ok
// SIG undefined FUN_1412a6978(void)

undefined8 * FUN_1412a6978(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14588ed64(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 1412a69ce FUN_1412a69ce body=233 status=ok
// SIG undefined FUN_1412a69ce(void)

void FUN_1412a69ce(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
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
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1412a6ab8 FUN_1412a6ab8 body=2141 status=ok
// SIG undefined FUN_1412a6ab8(void)

ulonglong FUN_1412a6ab8(undefined8 *param_1,undefined8 *param_2,double *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  char cVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong lVar31;
  longlong lVar32;
  byte bVar33;
  float *pfVar34;
  undefined4 *puVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1e8 [39];
  byte local_1c1;
  undefined4 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  float local_1a0;
  float local_19c;
  longlong local_198;
  ulonglong uStack_190;
  undefined1 local_180 [256];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1412a753c(param_2);
  if ((*(int *)(param_3 + 3) < 0) ||
     (local_1b8 = param_1, (int)*(uint *)(param_1 + 0x16) <= *(int *)(param_3 + 3))) {
    uVar29 = 0;
    goto LAB_1412a6b0c;
  }
  uVar29 = 0;
  if (((int)param_4[6] < 0) || (*(uint *)(param_1 + 0x16) <= (uint)param_4[6])) goto LAB_1412a6b0c;
  uVar4 = *param_1;
  lVar27 = param_1[1];
  if (lVar27 != 0) {
    LOCK();
    *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = uVar4;
  plVar5 = (longlong *)param_2[1];
  param_2[1] = lVar27;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  dVar12 = *param_3;
  dVar13 = param_3[1];
  dVar14 = param_3[3];
  param_2[4] = param_3[2];
  param_2[5] = dVar14;
  param_2[2] = dVar12;
  param_2[3] = dVar13;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar7 = param_4[2];
  uVar8 = param_4[3];
  uVar9 = param_4[5];
  uVar10 = param_4[6];
  uVar11 = param_4[7];
  *(undefined4 *)(param_2 + 8) = param_4[4];
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar9;
  *(undefined4 *)(param_2 + 9) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar11;
  *(undefined4 *)(param_2 + 6) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar3;
  *(undefined4 *)(param_2 + 7) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar8;
  iVar23 = *(int *)(param_3 + 3);
  iVar17 = param_4[6];
  local_1c0 = param_4;
  if (iVar23 == iVar17) {
    uVar29 = 1;
    goto LAB_1412a6b0c;
  }
  local_198 = 0;
  uStack_190 = 0;
  uVar18 = *(uint *)(param_1 + 0x12);
  local_1b0 = param_2;
  if ((int)uVar18 < 1) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar18);
    }
  }
  else {
    uStack_190 = (ulonglong)uVar18;
    FUN_1412a75c6(&local_198);
    FUN_1412a7395(local_198,uVar18);
    iVar23 = *(int *)(param_3 + 3);
    iVar17 = local_1c0[6];
  }
  local_80 = (undefined1 *)0x0;
  local_78 = 0x2000000000;
  lVar31 = (longlong)iVar17 * 0x78 + param_1[0x15];
  lVar27 = param_1[0x15] + (longlong)iVar23 * 0x78;
  puVar30 = (undefined8 *)(lVar27 + 0x48);
  fVar36 = (float)FUN_1412a7316(*puVar30,lVar31);
  local_1a8 = lVar31;
  local_19c = fVar36;
  local_1a0 = (float)FUN_1412a7316(*(undefined8 *)(lVar27 + 0x58),lVar31);
  bVar16 = local_1a0 < fVar36;
  lVar31 = 1;
  pfVar34 = &local_19c;
  bVar33 = !(bool)bVar16;
  do {
    uVar29 = local_78;
    lVar32 = local_198;
    uVar26 = (ulonglong)((bVar16 & 1) << 4);
    lVar19 = (longlong)*(int *)(lVar27 + 0x50 + uVar26);
    *(undefined4 *)(local_198 + 0xc + lVar19 * 0x18) = *(undefined4 *)(lVar27 + 0x54 + uVar26);
    fVar36 = *pfVar34;
    *(float *)(local_198 + lVar19 * 0x18) = fVar36;
    *(float *)(local_198 + 4 + lVar19 * 0x18) = fVar36;
    pdVar6 = *(double **)((longlong)puVar30 + uVar26);
    *(float *)(local_198 + 8 + lVar19 * 0x18) =
         (float)((pdVar6[2] - param_3[2]) * (pdVar6[2] - param_3[2]) +
                (pdVar6[1] - param_3[1]) * (pdVar6[1] - param_3[1]) +
                (*pdVar6 - *param_3) * (*pdVar6 - *param_3));
    *(undefined4 *)(local_198 + 0x10 + lVar19 * 0x18) = 0;
    iVar23 = (int)(float)local_78;
    uVar18 = (int)(float)local_78 + 1;
    local_78 = CONCAT44(local_78._4_4_,uVar18);
    bVar16 = bVar33;
    if (local_78._4_4_ < uVar18) {
      local_1c1 = bVar33;
      FUN_143dbcfee(local_180,uVar29 & 0xffffffff);
      bVar16 = local_1c1;
    }
    puVar21 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      puVar21 = local_180;
    }
    *(undefined4 *)(puVar21 + (longlong)iVar23 * 8) =
         *(undefined4 *)((longlong)puVar30 + uVar26 + 8);
    *(undefined4 *)(puVar21 + (longlong)iVar23 * 8 + 4) =
         *(undefined4 *)((longlong)puVar30 + uVar26 + 0xc);
    *(int *)(lVar32 + lVar19 * 0x18 + 0x14) = iVar23;
    cVar28 = (char)lVar31;
    lVar31 = 0;
    pfVar34 = &local_1a0;
    bVar33 = bVar16;
  } while (cVar28 != '\0');
  puVar35 = local_1c0;
  puVar30 = local_1b8;
  while (local_1b8 = puVar30, (float)local_78 != 0.0) {
    puVar21 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      puVar21 = local_180;
    }
    lVar19 = (longlong)(int)(float)local_78;
    iVar23 = *(int *)(puVar21 + lVar19 * 8 + -8);
    lVar27 = puVar30[0x11] + (longlong)iVar23 * 0x90;
    lVar32 = *(longlong *)(lVar27 + 0x78);
    if (lVar32 == 0) {
      lVar32 = lVar27 + 0x38;
    }
    if (*(int *)(lVar32 + 8 + (longlong)*(int *)(puVar21 + lVar19 * 8 + -4) * 0x10) == puVar35[6]) {
      if ((-1 < iVar23) && (iVar23 < (int)uStack_190)) {
        iVar23 = *(int *)(local_198 + 0x10 + (longlong)iVar23 * 0x18);
        lVar27 = (longlong)iVar23;
        if (0 < lVar27) {
          plVar5 = local_1b0 + 10;
          FUN_14588edd4(plVar5,iVar23);
          lVar22 = (longlong)*(int *)(puVar21 + lVar19 * 8 + -8) * 0x90 + puVar30[0x11];
          lVar32 = *(longlong *)(lVar22 + 0x78);
          if (lVar32 == 0) {
            lVar32 = lVar22 + 0x38;
          }
          lVar32 = *(longlong *)(lVar32 + (longlong)*(int *)(puVar21 + lVar19 * 8 + -4) * 0x10) +
                   (ulonglong)
                   (*(int *)(lVar32 + 0xc + (longlong)*(int *)(puVar21 + lVar19 * 8 + -4) * 0x10) ==
                   0) * 0x10;
          iVar23 = *(int *)(lVar32 + 0x50);
          lVar19 = lVar27 * 0xc + -4;
          lVar27 = lVar27 + 1;
          goto LAB_1412a71b3;
        }
      }
      break;
    }
    uVar29 = *(ulonglong *)(puVar21 + lVar19 * 8 + -8);
    local_78._4_4_ = (uint)(local_78 >> 0x20);
    local_78 = CONCAT44(local_78._4_4_,(int)(float)local_78 + -1);
    FUN_1412a73b0();
    lVar27 = puVar30[0x11];
    lVar32 = (longlong)(int)uVar29;
    *(undefined4 *)(local_198 + 0x14 + lVar32 * 0x18) = 0xffffffff;
    if (0 < *(int *)(lVar27 + 0x80 + lVar32 * 0x90)) {
      lVar31 = local_198 + lVar32 * 0x18;
      lVar27 = lVar27 + lVar32 * 0x90;
      uVar26 = 0;
      do {
        if (uVar26 != uVar29 >> 0x20) {
          lVar32 = *(longlong *)(lVar27 + 0x78);
          if (*(longlong *)(lVar27 + 0x78) == 0) {
            lVar32 = lVar27 + 0x38;
          }
          lVar19 = *(longlong *)(lVar32 + uVar26 * 0x10);
          lVar22 = (ulonglong)(*(int *)(lVar32 + 0xc + uVar26 * 0x10) == 0) * 0x10;
          lVar32 = (longlong)*(int *)(lVar19 + 0x50 + lVar22);
          fVar36 = *(float *)(lVar19 + 0x28) * *(float *)(lVar19 + 0x28) + *(float *)(lVar31 + 8);
          if (fVar36 < *(float *)(local_198 + 8 + lVar32 * 0x18)) {
            pfVar34 = (float *)(local_198 + lVar32 * 0x18);
            fVar37 = pfVar34[1];
            if ((fVar37 == 3.4028235e+38) && (!NAN(fVar37))) {
              fVar37 = (float)FUN_1412a7316(*(undefined8 *)(lVar19 + 0x48 + lVar22),local_1a8);
              pfVar34[1] = fVar37;
            }
            uVar25 = local_78;
            lVar19 = lVar19 + lVar22;
            pfVar34[3] = *(float *)(lVar19 + 0x54);
            pfVar34[4] = (float)(*(int *)(lVar31 + 0x10) + 1);
            pfVar34[2] = fVar36;
            *pfVar34 = fVar37 + fVar36;
            uVar20 = (ulonglong)(int)pfVar34[5];
            fVar15 = (float)local_78;
            if (uVar20 == 0xffffffffffffffff) {
              lVar32 = (longlong)(int)(float)local_78;
              if (lVar32 != 0) {
                puVar21 = local_80;
                if (local_80 == (undefined1 *)0x0) {
                  puVar21 = local_180;
                }
                if (*(float *)(local_198 + (longlong)*(int *)(puVar21 + lVar32 * 8 + -8) * 0x18) <=
                    fVar37 + fVar36) {
                  *(float *)(local_198 + (longlong)*(int *)(puVar21 + lVar32 * 8 + -8) * 0x18 + 0x14
                            ) = (float)local_78;
                  lVar32 = (longlong)(int)(float)local_78 + -1;
                  pfVar34[5] = (float)lVar32;
                  uVar18 = (int)(float)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,uVar18);
                  if (local_78._4_4_ < uVar18) {
                    FUN_143dbcfee(local_180,uVar25 & 0xffffffff);
                  }
                  puVar21 = local_80;
                  if (local_80 == (undefined1 *)0x0) {
                    puVar21 = local_180;
                  }
                  memmove(puVar21 + lVar32 * 8 + 8,puVar21 + lVar32 * 8,
                          (ulonglong)(uint)((int)fVar15 - (int)(float)lVar32) << 3);
                  fVar36 = pfVar34[5];
                  if (0 < (int)fVar36) {
                    do {
                      puVar21 = local_80;
                      if (local_80 == (undefined1 *)0x0) {
                        puVar21 = local_180;
                      }
                      uVar25 = (ulonglong)(uint)fVar36;
                      iVar23 = *(int *)(puVar21 + uVar25 * 8 + -8);
                      fVar37 = *(float *)(local_198 + (longlong)iVar23 * 0x18);
                      if (*pfVar34 <= fVar37 && fVar37 != *pfVar34) break;
                      *(undefined8 *)(puVar21 + uVar25 * 8) =
                           *(undefined8 *)(puVar21 + uVar25 * 8 + -8);
                      fVar37 = pfVar34[5];
                      *(float *)(local_198 + (longlong)iVar23 * 0x18 + 0x14) = fVar37;
                      fVar36 = (float)((int)fVar37 + -1);
                      pfVar34[5] = fVar36;
                    } while (1 < (int)fVar37);
                  }
                  puVar21 = local_80;
                  if (local_80 == (undefined1 *)0x0) {
                    puVar21 = local_180;
                  }
                  *(undefined8 *)(puVar21 + (longlong)(int)fVar36 * 8) =
                       *(undefined8 *)(lVar19 + 0x50);
                  puVar35 = local_1c0;
                  goto LAB_1412a6f64;
                }
              }
              uVar18 = (int)(float)local_78 + 1;
              local_78 = CONCAT44(local_78._4_4_,uVar18);
              if (local_78._4_4_ < uVar18) {
                FUN_143dbcfee(local_180,uVar25 & 0xffffffff);
              }
              puVar21 = local_80;
              if (local_80 == (undefined1 *)0x0) {
                puVar21 = local_180;
              }
              *(undefined4 *)(puVar21 + lVar32 * 8) = *(undefined4 *)(lVar19 + 0x50);
              *(undefined4 *)(puVar21 + lVar32 * 8 + 4) = *(undefined4 *)(lVar19 + 0x54);
              pfVar34[5] = fVar15;
            }
            else {
              puVar21 = local_80;
              if (local_80 == (undefined1 *)0x0) {
                puVar21 = local_180;
              }
              uVar2 = *(undefined4 *)(puVar21 + uVar20 * 8);
              uVar3 = *(undefined4 *)(lVar19 + 0x54);
              lVar32 = uVar20 + 1;
              if ((int)lVar32 < (int)(float)local_78) {
                do {
                  fVar36 = (float)uVar20;
                  puVar21 = local_80;
                  if (local_80 == (undefined1 *)0x0) {
                    puVar21 = local_180;
                  }
                  iVar23 = *(int *)(puVar21 + lVar32 * 8);
                  fVar37 = *(float *)(local_198 + (longlong)iVar23 * 0x18);
                  if (*pfVar34 <= fVar37 && fVar37 != *pfVar34) break;
                  *(undefined8 *)(puVar21 + (longlong)(int)fVar36 * 8) =
                       *(undefined8 *)(puVar21 + lVar32 * 8);
                  *(float *)(local_198 + (longlong)iVar23 * 0x18 + 0x14) = pfVar34[5];
                  fVar36 = (float)((int)fVar36 + 1);
                  uVar20 = (ulonglong)(uint)fVar36;
                  pfVar34[5] = fVar36;
                  lVar32 = lVar32 + 1;
                } while (lVar32 < (int)(float)local_78);
                uVar20 = (ulonglong)(int)fVar36;
              }
              puVar21 = local_80;
              if (local_80 == (undefined1 *)0x0) {
                puVar21 = local_180;
              }
              *(undefined4 *)(puVar21 + uVar20 * 8) = uVar2;
              *(undefined4 *)(puVar21 + uVar20 * 8 + 4) = uVar3;
            }
          }
        }
LAB_1412a6f64:
        uVar26 = uVar26 + 1;
      } while ((longlong)uVar26 < (longlong)*(int *)(lVar27 + 0x80));
    }
    puVar30 = local_1b8;
  }
  goto LAB_1412a723f;
  while( true ) {
    lVar19 = lVar19 + -0xc;
    lVar32 = lVar32 + lVar22;
    lVar27 = lVar27 + -1;
    if ((int)uStack_190 <= iVar23) break;
LAB_1412a71b3:
    if (lVar27 + -1 == 0 || lVar27 < 1) {
      uVar29 = CONCAT71((int7)((ulonglong)lVar31 >> 8),1);
      goto LAB_1412a7250;
    }
    uVar2 = *(undefined4 *)(lVar32 + 0x54);
    lVar24 = (longlong)iVar23;
    lVar32 = puVar30[0x11];
    lVar22 = *plVar5;
    *(int *)(lVar22 + -8 + lVar19) = iVar23;
    *(undefined4 *)(lVar22 + -4 + lVar19) = *(undefined4 *)(local_198 + 0xc + lVar24 * 0x18);
    *(undefined4 *)(lVar22 + lVar19) = uVar2;
    lVar32 = lVar32 + lVar24 * 0x90;
    lVar22 = *(longlong *)(lVar32 + 0x78);
    if (lVar22 == 0) {
      lVar22 = lVar32 + 0x38;
    }
    lVar24 = (longlong)*(int *)(local_198 + 0xc + lVar24 * 0x18) * 0x10;
    lVar32 = *(longlong *)(lVar22 + lVar24);
    lVar22 = (ulonglong)(*(int *)(lVar22 + 0xc + lVar24) == 0) * 0x10;
    iVar23 = *(int *)(lVar32 + 0x50 + lVar22);
    if (iVar23 < 0) break;
  }
LAB_1412a723f:
  FUN_1412a753c(local_1b0);
  uVar29 = 0;
LAB_1412a7250:
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
LAB_1412a6b0c:
  if ((local_70 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar29 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a7316 FUN_1412a7316 body=127 status=ok
// SIG undefined FUN_1412a7316(void)

undefined8 FUN_1412a7316(double *param_1,longlong param_2)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  pdVar1 = *(double **)(param_2 + 0x48);
  dVar3 = *pdVar1 - *param_1;
  dVar6 = pdVar1[1] - param_1[1];
  dVar4 = pdVar1[2] - param_1[2];
  dVar3 = dVar4 * dVar4 + dVar6 * dVar6 + dVar3 * dVar3;
  fVar2 = (float)dVar3;
  pdVar1 = *(double **)(param_2 + 0x58);
  dVar4 = *pdVar1 - *param_1;
  dVar7 = pdVar1[1] - param_1[1];
  dVar6 = pdVar1[2] - param_1[2];
  fVar5 = (float)(dVar6 * dVar6 + dVar7 * dVar7 + dVar4 * dVar4);
  if (fVar5 <= fVar2) {
    fVar2 = fVar5;
  }
  return CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar2);
}



// FUNCTION 1412a7395 FUN_1412a7395 body=27 status=ok
// SIG undefined FUN_1412a7395(void)

void FUN_1412a7395(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0x7f7fffff7f7fffff;
    param_1[1] = 0xffffffff7f7fffff;
    param_1[2] = 0xffffffffffffffff;
    param_1 = param_1 + 3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1412a73b0 FUN_1412a73b0 body=395 status=ok
// SIG undefined FUN_1412a73b0(void)

void FUN_1412a73b0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x108);
  uVar4 = *(uint *)(param_1 + 0x10c);
  uVar7 = 0x20;
  if (0x20 < (ulonglong)uVar3) {
    iVar5 = uVar4 - uVar3;
    if (((longlong)iVar5 & 0x1ffffffffffff800U) == 0) {
      if (iVar5 < 0x41 || (int)(uVar4 * 2) <= (int)(uVar3 * 3)) {
        return;
      }
    }
    else if (iVar5 < 0x41) {
      return;
    }
    uVar7 = uVar3;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar9 = uVar8 + 0xf;
          if (uVar3 < 0xfff) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
          }
          else {
            if ((uVar9 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar9 >> 4];
              uVar6 = 0x32;
              if (0x32 < bVar2) {
                uVar6 = (ulonglong)bVar2;
              }
              uVar10 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_1412a746b;
                lVar1 = uVar6 + 1 + uVar10;
                uVar10 = uVar10 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar9 & 0x7fffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
          uVar4 = *(uint *)(param_1 + 0x10c);
        }
      }
LAB_1412a746b:
      uVar7 = (uint)(uVar8 >> 3);
    }
  }
  if (uVar7 == uVar4) {
    return;
  }
  *(uint *)(param_1 + 0x10c) = uVar7;
  FUN_143dbd13e(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 1412a753c FUN_1412a753c body=137 status=ok
// SIG undefined FUN_1412a753c(void)

void FUN_1412a753c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
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
  param_1[4] = DAT_14c8464f0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[2] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  param_1[8] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  if (-1 < *(int *)((longlong)param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1488dced6(param_1 + 10,0);
  return;
}



// FUNCTION 1412a75c6 FUN_1412a75c6 body=363 status=ok
// SIG undefined FUN_1412a75c6(void)

void FUN_1412a75c6(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0x555) {
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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1412a765a;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1412a765a:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 / 0x18)) {
    uVar6 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x18,4);
  return;
}



// FUNCTION 1412a7732 FUN_1412a7732 body=275 status=ok
// SIG undefined FUN_1412a7732(void)

void FUN_1412a7732(longlong param_1,int param_2)

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



// FUNCTION 1412a784e FUN_1412a784e body=630 status=ok
// SIG undefined FUN_1412a784e(void)

undefined8 * FUN_1412a784e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  memset(param_1 + 1,0,0x2b8);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14ac73fa0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = &PTR_FUN_14a1a0a40;
  param_1[0xd] = 0;
  param_1[0xc] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0xf) = 0x44fa0000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a60;
  uVar1 = DAT_14c8464e8;
  param_1[0x13] = DAT_14c8464e0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0;
  param_1[0x1b] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x19] = DAT_14c8464f8;
  param_1[0x1a] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x21] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  param_1[0x24] = 0;
  param_1[0x23] = &PTR_FUN_14a1a0a40;
  param_1[0x28] = 0;
  param_1[0x27] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2a) = 0x42b40000;
  param_1[0x2d] = 0;
  param_1[0x2c] = &PTR_FUN_14a1a0270;
  param_1[0x31] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x2f] = DAT_14c8464f8;
  param_1[0x30] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x191) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x33] = DAT_14c8464f8;
  param_1[0x34] = uVar1;
  param_1[0x35] = DAT_14c846508;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = &PTR_FUN_14a1a0a60;
  param_1[0x3d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x3b] = DAT_14c8464e0;
  param_1[0x3c] = uVar1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined1 *)((longlong)param_1 + 0x201) = 0;
  param_1[0x43] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x41] = DAT_14c8464f8;
  param_1[0x42] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x49] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x47] = DAT_14c8464e0;
  param_1[0x48] = uVar1;
  param_1[0x4c] = 0;
  param_1[0x4b] = &PTR_FUN_14a1a0270;
  param_1[0x50] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x4e] = DAT_14c8464f8;
  param_1[0x4f] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x289) = 0;
  param_1[0x54] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x52] = DAT_14c8464f8;
  param_1[0x53] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *param_1 = &PTR_FUN_14ac8c290;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x58] = &PTR_FUN_14a1a06d0;
  param_1[0x5b] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 1412a7ac4 FUN_1412a7ac4 body=297 status=ok
// SIG undefined FUN_1412a7ac4(void)

undefined8 FUN_1412a7ac4(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1412a7be6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412a7be6;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1412a7be6:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412a7b91;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1412a7b91;
    }
  }
  uVar6 = 0;
LAB_1412a7b91:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a7bee FUN_1412a7bee body=49 status=ok
// SIG undefined FUN_1412a7bee(void)

void FUN_1412a7bee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1412a866a(param_1,param_3);
  FUN_1412a8e58(param_1,param_2);
  FUN_1412a7c20(param_1 + 0x30);
  return;
}



// FUNCTION 1412a7c20 FUN_1412a7c20 body=1517 status=ok
// SIG undefined FUN_1412a7c20(void)

void FUN_1412a7c20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  float fVar13;
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
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  undefined1 auVar14 [16];
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + -0x30;
  lVar12 = *(longlong *)(param_1 + -0x10);
  if (lVar12 != 0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar8 = (**(code **)(*(longlong *)(lVar12 + 0x3c20) + 0x18))(lVar12 + 0x3c20);
      if ((lVar8 == 0) || (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 == 0)) {
        lVar12 = lVar12 + 0x60e8;
      }
      else {
        lVar12 = (**(code **)(*(longlong *)(lVar8 + 0x510) + 0x18))(lVar8 + 0x510);
      }
      puVar9 = (uint *)FUN_14016530a(lVar12,0);
      if ((((puVar9 != (uint *)0x0) &&
           (plVar11 = *(longlong **)(puVar9 + 2), plVar11 != (longlong *)0x0)) && (puVar9[1] != 0))
         && ((uVar4 = *puVar9, -1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)))) {
        lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if ((lVar12 != 0) &&
           ((*(uint *)(lVar12 + 0x10) == puVar9[1] && ((*(uint *)(lVar12 + 8) & 0x10200000) == 0))))
        {
          if (*(code **)(*plVar11 + 0x10) == (code *)&LAB_1447a1f2e) {
            plVar11 = plVar11 + 0xd9;
          }
          else {
            plVar11 = (longlong *)(**(code **)(*plVar11 + 0x10))();
          }
          cVar6 = FUN_14486eb0e(plVar11,puVar9);
          if (cVar6 != '\0') {
            uVar10 = FUN_1409715bc(lVar1);
            cVar6 = FUN_14011bf50(uVar10);
            if (cVar6 == '\0') {
              if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            FUN_1403adc5e(&local_48,uVar10);
            pfVar5 = *(float **)(local_48 + 0xa0);
            AcquireSRWLockExclusive((PSRWLOCK)(pfVar5 + 0x32));
            plVar11 = local_40;
            pfVar5[0x30] = (float)((int)pfVar5[0x30] + 1);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_40 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar3 = (int *)((longlong)plVar11 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            cVar6 = FUN_1403ae288(puVar9);
            if (cVar6 == '\0') {
              if (pfVar5[1] == 0.0 || *pfVar5 != 0.0) {
                *pfVar5 = 0.0;
                pfVar5[1] = (float)((int)pfVar5[1] + 1);
              }
              if (pfVar5[3] == 0.0 || pfVar5[2] != 0.0) {
                pfVar5[2] = 0.0;
                pfVar5[3] = (float)((int)pfVar5[3] + 1);
              }
              if (pfVar5[5] == 0.0 || pfVar5[4] != 0.0) {
                pfVar5[4] = 0.0;
                pfVar5[5] = (float)((int)pfVar5[5] + 1);
              }
              if (pfVar5[0xb] == 0.0 || *(char *)(pfVar5 + 10) != '\x04') {
                *(undefined1 *)(pfVar5 + 10) = 4;
                pfVar5[0xb] = (float)((int)pfVar5[0xb] + 1);
              }
            }
            else {
              lVar12 = FUN_140280ec4(puVar9);
              fVar13 = *(float *)(lVar12 + 200);
              if (((fVar13 != *pfVar5) || (NAN(fVar13) || NAN(*pfVar5))) || (pfVar5[1] == 0.0)) {
                *pfVar5 = fVar13;
                pfVar5[1] = (float)((int)pfVar5[1] + 1);
              }
              lVar12 = FUN_140280ec4(puVar9);
              fVar13 = *(float *)(lVar12 + 0x24);
              if (((fVar13 != pfVar5[2]) || (NAN(fVar13) || NAN(pfVar5[2]))) || (pfVar5[3] == 0.0))
              {
                pfVar5[2] = fVar13;
                pfVar5[3] = (float)((int)pfVar5[3] + 1);
              }
              lVar12 = FUN_140280ec4(puVar9);
              if ((*(longlong *)(lVar12 + 0x18) == 0) ||
                 (*(char *)(*(longlong *)(lVar12 + 0x18) + 0x18) != '\x01')) {
                fVar13 = *(float *)(lVar12 + 0x30);
              }
              else {
                auVar14 = roundps(ZEXT416(*(uint *)(lVar12 + 0x30)),
                                  ZEXT416(*(uint *)(lVar12 + 0x30)),3);
                fVar13 = auVar14._0_4_;
              }
              if (((fVar13 != pfVar5[4]) || (NAN(fVar13) || NAN(pfVar5[4]))) || (pfVar5[5] == 0.0))
              {
                pfVar5[4] = fVar13;
                pfVar5[5] = (float)((int)pfVar5[5] + 1);
              }
              local_48 = (code *)CONCAT71(local_48._1_7_,4);
              uVar10 = FUN_140280ec4(puVar9);
              cVar6 = FUN_140280f4a(uVar10,&local_48);
              if (cVar6 != '\0') {
                if (pfVar5[0xb] == 0.0 || (char)local_48 != *(char *)(pfVar5 + 10)) {
                  *(char *)(pfVar5 + 10) = (char)local_48;
                  pfVar5[0xb] = (float)((int)pfVar5[0xb] + 1);
                }
              }
            }
            ReleaseSRWLockExclusive((PSRWLOCK)(pfVar5 + 0x32));
          }
        }
      }
    }
  }
  lVar12 = FUN_14047210e(lVar1);
  if (lVar12 != 0) {
    FUN_140fbb8dc(lVar1,lVar12);
    FUN_1412a8226(lVar1,lVar12);
  }
  if (((*(int *)(param_1 + 100) != 0) && (uVar4 = *(uint *)(param_1 + 0x60), -1 < (int)uVar4)) &&
     ((int)uVar4 < DAT_14c9647dc)) {
    lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    if (((lVar12 != 0) && (*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 100))) &&
       ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)) {
      FUN_1404722a0(lVar1);
      goto LAB_1412a7faf;
    }
  }
  uVar10 = FUN_1409715bc(lVar1);
  cVar6 = FUN_14011bf50(uVar10);
  if (cVar6 == '\0') goto LAB_1412a7faf;
  FUN_1403adc5e(&local_48,uVar10);
  lVar12 = *(longlong *)(local_48 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 200));
  *(int *)(lVar12 + 0xc0) = *(int *)(lVar12 + 0xc0) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((*(float *)(lVar12 + 0x68) != 0.0) || (NAN(*(float *)(lVar12 + 0x68)))) {
    iVar7 = *(int *)(lVar12 + 0x6c) + 1;
LAB_1412a8019:
    *(undefined4 *)(lVar12 + 0x68) = 0;
    *(int *)(lVar12 + 0x6c) = iVar7;
  }
  else if (*(int *)(lVar12 + 0x6c) == 0) {
    iVar7 = 1;
    goto LAB_1412a8019;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar12 + 200));
LAB_1412a7faf:
  FUN_1412a83e6(lVar1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1412a8226 FUN_1412a8226 body=136 status=ok
// SIG undefined FUN_1412a8226(void)

void FUN_1412a8226(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x90) = 0;
  bVar1 = *(byte *)(param_2 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(param_2 + 0xbf0)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_2 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xb0), lVar2 != 0)) {
      lVar3 = FUN_140086990();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_14485c47a(param_1 + 0x90,lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412a82ae FUN_1412a82ae body=291 status=ok
// SIG undefined FUN_1412a82ae(void)

void FUN_1412a82ae(undefined8 param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14047210e();
  if (lVar5 == 0) {
LAB_1412a82d3:
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar6 = FUN_1409715bc(param_1);
  cVar4 = FUN_14011bf50(uVar6);
  if (cVar4 == '\0') goto LAB_1412a82d3;
  FUN_1403adc5e(&local_38,uVar6);
  lVar2 = *(longlong *)(local_38 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 200));
  *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((*(longlong *)(lVar5 + 0xb28) == 0) ||
     (plVar3 = *(longlong **)(lVar5 + 0xb30), plVar3 == (longlong *)0x0)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined1 *)(lVar5 + 0xbe3));
  }
  if (*(char *)(lVar2 + 0x98) == cVar4) {
    if (*(int *)(lVar2 + 0x9c) != 0) goto LAB_1412a8382;
    iVar7 = 1;
  }
  else {
    iVar7 = *(int *)(lVar2 + 0x9c) + 1;
  }
  *(char *)(lVar2 + 0x98) = cVar4;
  *(int *)(lVar2 + 0x9c) = iVar7;
LAB_1412a8382:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1412a83e6 FUN_1412a83e6 body=623 status=ok
// SIG undefined FUN_1412a83e6(void)

void FUN_1412a83e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar8 = FUN_1409715bc();
  cVar6 = FUN_14011bf50(uVar8);
  if (cVar6 == '\0') {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403adc5e(&local_38,uVar8);
  lVar5 = *(longlong *)(local_38 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 200));
  *(int *)(lVar5 + 0xc0) = *(int *)(lVar5 + 0xc0) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)();
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  puVar3 = (uint *)(param_1 + 0x90);
  iVar7 = *(int *)(param_1 + 0x94);
  if (iVar7 == 0) {
LAB_1412a855a:
    bVar10 = false;
  }
  else {
    uVar4 = *puVar3;
    bVar10 = false;
    if ((-1 < (int)uVar4) && (bVar10 = false, (int)uVar4 < DAT_14c9647dc)) {
      lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != iVar7)) goto LAB_1412a855a;
      bVar10 = (*(uint *)(lVar9 + 8) & 0x10200000) == 0;
    }
  }
  if ((bool)*(char *)(lVar5 + 0x70) == bVar10) {
    if (*(int *)(lVar5 + 0x74) == 0) {
      iVar7 = 1;
      goto LAB_1412a85b9;
    }
  }
  else {
    iVar7 = *(int *)(lVar5 + 0x74) + 1;
LAB_1412a85b9:
    *(bool *)(lVar5 + 0x70) = bVar10;
    *(int *)(lVar5 + 0x74) = iVar7;
    iVar7 = *(int *)(param_1 + 0x94);
  }
  if (((iVar7 == 0) || (uVar4 = *puVar3, (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) {
LAB_1412a8506:
    if (*(char *)(lVar5 + 0x78) == '\0') {
      if (*(int *)(lVar5 + 0x7c) == 0) {
        iVar7 = 1;
        goto LAB_1412a85ce;
      }
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x7c) + 1;
LAB_1412a85ce:
      *(undefined1 *)(lVar5 + 0x78) = 0;
      *(int *)(lVar5 + 0x7c) = iVar7;
    }
    if (*(char *)(lVar5 + 0x80) == '\0') {
      if (*(int *)(lVar5 + 0x84) != 0) goto LAB_1412a853a;
      iVar7 = 1;
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x84) + 1;
    }
    *(undefined1 *)(lVar5 + 0x80) = 0;
  }
  else {
    lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    if (((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != iVar7)) ||
       ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) goto LAB_1412a8506;
    uVar8 = FUN_14479d2ce(puVar3);
    cVar6 = FUN_14588ef84(uVar8);
    if (*(char *)(lVar5 + 0x78) == cVar6) {
      if (*(int *)(lVar5 + 0x7c) == 0) {
        iVar7 = 1;
        goto LAB_1412a85de;
      }
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x7c) + 1;
LAB_1412a85de:
      *(char *)(lVar5 + 0x78) = cVar6;
      *(int *)(lVar5 + 0x7c) = iVar7;
    }
    lVar9 = FUN_14479d2ce(puVar3);
    bVar10 = 1 < *(int *)(lVar9 + 0xbc);
    if ((bool)*(char *)(lVar5 + 0x80) == bVar10) {
      if (*(int *)(lVar5 + 0x84) != 0) goto LAB_1412a853a;
      iVar7 = 1;
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x84) + 1;
    }
    *(bool *)(lVar5 + 0x80) = bVar10;
  }
  *(int *)(lVar5 + 0x84) = iVar7;
LAB_1412a853a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1412a866a FUN_1412a866a body=2008 status=ok
// SIG undefined FUN_1412a866a(void)

void FUN_1412a866a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(int *)(param_1 + 0x94) != 0) && (uVar3 = *(uint *)(param_1 + 0x90), -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0 &&
       (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x94))) &&
      ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  FUN_140d9136e(param_1 + 0x58);
  if (param_2 == 0) goto LAB_1412a86e3;
  FUN_1412a9efa(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_148e1195e(param_1 + 0xb0,0);
  }
  plVar1 = (longlong *)(param_2 + 0xa60);
  FUN_1412a9f48(&local_40);
  FUN_1409ca370(plVar1,param_1,local_40);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0xa68);
  if (0 < (int)*(uint *)(param_2 + 0xa68)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a8763:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a878c;
        iVar2 = *(int *)(param_2 + 0xa68);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0xa60) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0xa60)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0xa68);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0xa68) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8b45;
    } while( true );
  }
  goto LAB_1412a87a5;
code_r0x0001412a878c:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0xa68);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a879b;
  goto LAB_1412a8763;
code_r0x0001412a8800:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0xa78);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a880f;
  goto LAB_1412a87d7;
code_r0x0001412a880f:
  if (bVar9) {
LAB_1412a8bae:
    FUN_1400bbcfc(plVar1);
  }
  goto LAB_1412a8819;
code_r0x0001412a8874:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0xa98);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a8883;
  goto LAB_1412a884b;
code_r0x0001412a8883:
  if (bVar9) {
LAB_1412a8c17:
    FUN_1400bbcfc(plVar1);
  }
  goto LAB_1412a888d;
code_r0x0001412a88e8:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0xa18);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a88f7;
  goto LAB_1412a88bf;
code_r0x0001412a88f7:
  if (bVar9) {
LAB_1412a8c80:
    FUN_1400bbcfc(plVar1);
  }
  goto LAB_1412a8901;
code_r0x0001412a895c:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0x9b0);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a896b;
  goto LAB_1412a8933;
code_r0x0001412a896b:
  if (bVar9) {
LAB_1412a8ce9:
    FUN_1400bbcfc(plVar1);
  }
  goto LAB_1412a8975;
code_r0x0001412a89d0:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0x9d0);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a89df;
  goto LAB_1412a89a7;
code_r0x0001412a89df:
  if (bVar9) {
LAB_1412a8d52:
    FUN_1400bbcfc(plVar1);
  }
  goto LAB_1412a89e9;
code_r0x0001412a8a44:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0x9e0);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a8a53;
  goto LAB_1412a8a1b;
code_r0x0001412a8a53:
  if (bVar9) {
LAB_1412a8dbb:
    FUN_1400bbcfc(plVar1);
  }
  goto LAB_1412a8a5d;
code_r0x0001412a8abb:
  lVar7 = lVar7 + 1;
  uVar5 = (ulonglong)*(int *)(param_2 + 0xa48);
  if ((longlong)uVar5 <= lVar7) goto code_r0x0001412a8aca;
  goto LAB_1412a8a92;
code_r0x0001412a8aca:
  if (bVar9) {
LAB_1412a8e23:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  goto LAB_1412a86e3;
code_r0x0001412a879b:
  if (bVar9) {
LAB_1412a8b45:
    FUN_1400bbcfc(plVar1);
  }
LAB_1412a87a5:
  plVar1 = (longlong *)(param_2 + 0xa70);
  FUN_1412a9f48(&local_48);
  FUN_1409ca370(plVar1,param_1,local_48);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0xa78);
  if (0 < (int)*(uint *)(param_2 + 0xa78)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a87d7:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a8800;
        iVar2 = *(int *)(param_2 + 0xa78);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0xa70) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0xa70)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0xa78);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0xa78) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8bae;
    } while( true );
  }
LAB_1412a8819:
  plVar1 = (longlong *)(param_2 + 0xa90);
  FUN_1412aa216(&local_50);
  FUN_1409ca370(plVar1,param_1,local_50);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0xa98);
  if (0 < (int)*(uint *)(param_2 + 0xa98)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a884b:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a8874;
        iVar2 = *(int *)(param_2 + 0xa98);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0xa90) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0xa90)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0xa98);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0xa98) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8c17;
    } while( true );
  }
LAB_1412a888d:
  plVar1 = (longlong *)(param_2 + 0xa10);
  FUN_1412aa0b2(&local_58);
  FUN_1409ca370(plVar1,param_1,local_58);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0xa18);
  if (0 < (int)*(uint *)(param_2 + 0xa18)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a88bf:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a88e8;
        iVar2 = *(int *)(param_2 + 0xa18);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0xa10) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0xa10)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0xa18);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0xa18) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8c80;
    } while( true );
  }
LAB_1412a8901:
  plVar1 = (longlong *)(param_2 + 0x9a8);
  FUN_1412a9ffa(&local_60);
  FUN_1409ca370(plVar1,param_1,local_60);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x9b0);
  if (0 < (int)*(uint *)(param_2 + 0x9b0)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a8933:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a895c;
        iVar2 = *(int *)(param_2 + 0x9b0);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0x9a8) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0x9a8)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0x9b0);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0x9b0) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8ce9;
    } while( true );
  }
LAB_1412a8975:
  plVar1 = (longlong *)(param_2 + 0x9c8);
  FUN_1412a9ffa(&local_68);
  FUN_1409ca370(plVar1,param_1,local_68);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x9d0);
  if (0 < (int)*(uint *)(param_2 + 0x9d0)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a89a7:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a89d0;
        iVar2 = *(int *)(param_2 + 0x9d0);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0x9c8) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0x9c8)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0x9d0);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0x9d0) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8d52;
    } while( true );
  }
LAB_1412a89e9:
  plVar1 = (longlong *)(param_2 + 0x9d8);
  FUN_1412aa164(&local_70);
  FUN_1409ca370(plVar1,param_1,local_70);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0x9e0);
  if (0 < (int)*(uint *)(param_2 + 0x9e0)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a8a1b:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      if (*(longlong *)(*plVar1 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(*plVar1 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a8a44;
        iVar2 = *(int *)(param_2 + 0x9e0);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0x9d8) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0x9d8)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0x9e0);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0x9e0) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8dbb;
    } while( true );
  }
LAB_1412a8a5d:
  FUN_1412aa2ca(&local_78);
  FUN_1409ca370((longlong *)(param_2 + 0xa40),param_1,local_78);
  uVar5 = (ulonglong)*(uint *)(param_2 + 0xa48);
  if (0 < (int)*(uint *)(param_2 + 0xa48)) {
    lVar7 = 0;
    bVar9 = false;
LAB_1412a8a92:
    lVar10 = lVar7 * 0x10;
    do {
      iVar2 = (int)uVar5;
      lVar4 = *(longlong *)(param_2 + 0xa40);
      if (*(longlong *)(lVar4 + 8 + lVar10) != 0) {
        lVar4 = FUN_144a34e94(lVar4 + lVar10,1);
        if (lVar4 != 0) goto code_r0x0001412a8abb;
        iVar2 = *(int *)(param_2 + 0xa48);
      }
      iVar6 = ~(uint)lVar7 + iVar2;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(*(longlong *)(param_2 + 0xa40) + lVar10),
                (void *)((longlong)(iVar2 - iVar8) * 0x10 + *(longlong *)(param_2 + 0xa40)),
                (longlong)iVar8 << 4);
        iVar2 = *(int *)(param_2 + 0xa48);
      }
      uVar3 = iVar2 - 1;
      uVar5 = (ulonglong)uVar3;
      *(uint *)(param_2 + 0xa48) = uVar3;
      bVar9 = true;
      if ((int)uVar3 <= lVar7) goto LAB_1412a8e23;
    } while( true );
  }
LAB_1412a86e3:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a8e58 FUN_1412a8e58 body=4257 status=ok
// SIG undefined FUN_1412a8e58(void)

void FUN_1412a8e58(code *param_1,longlong param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  char cVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == 0) goto LAB_1412a8e82;
  param_1[0x48] = *(code *)(param_2 + 0xd44);
  FUN_1412a9f48(&local_68);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_68;
  if ((local_68 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0xa60,&local_58);
  FUN_1412a9f48(&local_70);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_70;
  if ((local_70 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0xa70,&local_58);
  FUN_1412aa216(&local_78);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_78;
  if ((local_78 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0xa90,&local_58);
  FUN_1412aa0b2(&local_80);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_80;
  if ((local_80 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0xa10,&local_58);
  FUN_1412a9ffa(&local_88);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_88;
  if ((local_88 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0x9a8,&local_58);
  FUN_1412a9ffa(&local_90);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_90;
  if ((local_90 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0x9c8,&local_58);
  FUN_1412aa164(&local_98);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_98;
  if ((local_98 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0x9d8,&local_58);
  FUN_1412aa2ca(&local_a0);
  local_58._0_4_ = 0;
  uStack_50 = 0;
  if (param_1 == (code *)0x0) {
    iVar17 = 0;
    uVar2 = (uint)local_58;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_58 = (code *)(ulonglong)uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar17 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar17 = *(int *)(lVar20 + 0x10);
      bVar21 = iVar17 == 0;
      if (bVar21) {
        *(int *)(lVar20 + 0x10) = iVar19;
        iVar17 = 0;
      }
      UNLOCK();
      uVar2 = (uint)local_58;
      if (bVar21) {
        iVar17 = iVar19;
      }
    }
  }
  local_58._0_4_ = uVar2;
  local_58 = (code *)CONCAT44(iVar17,(uint)local_58);
  uStack_50 = local_a0;
  if ((local_a0 != 0) && (lVar20 = FUN_14479d2ce(&local_58), lVar20 != 0)) {
    FUN_1400796d0(*(undefined8 *)(lVar20 + 0x10),uStack_50,1);
  }
  FUN_14053c012(param_2 + 0xa40,&local_58);
  lVar20 = *(longlong *)(param_1 + 0x20);
  if (lVar20 == 0) {
LAB_1412a9ce2:
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    param_1[0x74] = (code)0xff;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_58 = FUN_141864c34;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1464cee30;
      local_c8 = &LAB_148bfac22;
      local_d0 = &LAB_140f21842;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x9cd0;
      local_c0 = &local_58;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1412a9ce2;
    lVar12 = (**(code **)(*(longlong *)(lVar20 + 0x3c20) + 0x18))(lVar20 + 0x3c20);
    if ((lVar12 == 0) || (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 == 0)) {
      lVar20 = lVar20 + 0x60e8;
    }
    else {
      lVar20 = (**(code **)(*(longlong *)(lVar12 + 0x510) + 0x18))(lVar12 + 0x510);
    }
    puVar13 = (undefined4 *)FUN_14016530a(lVar20,0);
    if (puVar13 != (undefined4 *)0x0) {
      uVar6 = *puVar13;
      uVar7 = puVar13[1];
      uVar8 = puVar13[2];
      uVar9 = puVar13[3];
      uVar16 = *(undefined8 *)(puVar13 + 6);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar13 + 4);
      *(undefined8 *)(param_1 + 0x70) = uVar16;
      *(undefined4 *)(param_1 + 0x58) = uVar6;
      *(undefined4 *)(param_1 + 0x5c) = uVar7;
      *(undefined4 *)(param_1 + 0x60) = uVar8;
      *(undefined4 *)(param_1 + 100) = uVar9;
    }
  }
  FUN_1412a9efa(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_148e1195e(param_1 + 0xb0,0);
  }
  uVar18 = 0xff;
  lVar20 = 8;
  iVar17 = 0;
  do {
    if ((((uVar18 & 1) != 0) && (local_58 = param_1, iVar17 < *(int *)(param_2 + 0xbf0))) &&
       (lVar12 = *(longlong *)(*(longlong *)(param_2 + 0xbe8) + lVar20), lVar12 != 0)) {
      plVar3 = *(longlong **)(lVar12 + 0x48);
      if (plVar3 != (longlong *)0x0) {
        lVar14 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar15 = FUN_140fbbcdc();
        if (((lVar15 != 0) && (*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
            lVar15 + 0x30)) {
          lVar14 = plVar3[6];
          if (lVar14 == 0) {
            uVar16 = FUN_1458b6df2();
            lVar14 = FUN_14477b664(uVar16);
            plVar3[6] = lVar14;
          }
          if (plVar3[7] == 0) {
            if ((lVar14 != 0) && (plVar5 = plVar3 + 5, *plVar5 != 0)) {
              plVar4 = *(longlong **)(lVar14 + 0xb8);
              local_a8 = plVar5;
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar11 == '\0')) {
                plVar3[7] = 0;
              }
              else {
                uVar16 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar14 = FUN_144aff482(uVar16,local_a8);
                plVar3[7] = lVar14;
                if (lVar14 != 0) goto LAB_1412a994e;
              }
            }
          }
          else {
LAB_1412a994e:
            FUN_1412aa390(&local_58,plVar3);
          }
        }
      }
      plVar3 = *(longlong **)(lVar12 + 0x50);
      if (plVar3 != (longlong *)0x0) {
        lVar12 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar14 = FUN_140fbbcdc();
        if (((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
            lVar14 + 0x30)) {
          lVar12 = plVar3[6];
          if (lVar12 == 0) {
            uVar16 = FUN_1458b6df2();
            lVar12 = FUN_14477b664(uVar16);
            plVar3[6] = lVar12;
          }
          if (plVar3[7] == 0) {
            if ((lVar12 != 0) && (plVar3[5] != 0)) {
              plVar5 = *(longlong **)(lVar12 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar11 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar11 == '\0')) {
                plVar3[7] = 0;
              }
              else {
                uVar16 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar12 = FUN_144aff482(uVar16,plVar3 + 5);
                plVar3[7] = lVar12;
                if (lVar12 != 0) goto LAB_1412a997b;
              }
            }
          }
          else {
LAB_1412a997b:
            FUN_1412aa390(&local_58,plVar3);
          }
        }
      }
    }
    uVar18 = uVar18 >> 1;
    lVar20 = lVar20 + 0x88;
    iVar17 = iVar17 + 1;
  } while (lVar20 != 0x448);
  pcVar1 = param_1 + 0x58;
  cVar11 = FUN_1403ae288(pcVar1);
  if (cVar11 != '\0') {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      lVar12 = FUN_14008e0ae(pcVar1);
      local_58 = (code *)0x0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      FUN_1446efa72(&local_58,0,3,0x10);
      pcVar10 = local_58;
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      *(undefined ***)local_58 = &PTR_LAB_14b3f76f0;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar20 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar20 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar20;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b9b6f10;
      *(undefined8 *)(local_58 + 0x18) = 0;
      iVar17 = 0;
      if (param_1 != (code *)0x0) {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_58 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar17 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar17 = DAT_14c964868 + 1;
          UNLOCK();
          iVar19 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar17;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar19);
          }
          LOCK();
          iVar17 = *(int *)(lVar20 + 0x10);
          bVar21 = iVar17 == 0;
          if (bVar21) {
            *(int *)(lVar20 + 0x10) = iVar19;
            iVar17 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar17 = iVar19;
          }
        }
      }
      *(int *)(pcVar10 + 0x1c) = iVar17;
      *(code **)(pcVar10 + 0x20) = FUN_1412e52e4;
      *(undefined4 *)(pcVar10 + 0x28) = 0;
      FUN_14104d758(lVar12 + 0x150,&local_60,&local_58);
      if ((int)uStack_50 == 0) {
LAB_1412a970c:
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        goto LAB_1412a970c;
      }
      *(undefined8 *)(param_1 + 0x78) = local_60;
    }
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar12 = FUN_14008e0ae(pcVar1);
      local_58 = (code *)0x0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      FUN_1446efa72(&local_58,0,3,0x10);
      pcVar1 = local_58;
      uStack_50 = CONCAT44(uStack_50._4_4_,3);
      *(undefined ***)local_58 = &PTR_LAB_14b3f7900;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar20 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar20 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar20;
      *(longlong *)(local_58 + 0x10) = lVar14;
      *(undefined ***)local_58 = &PTR_FUN_14b9b6f80;
      *(undefined8 *)(local_58 + 0x18) = 0;
      iVar17 = 0;
      if (param_1 != (code *)0x0) {
        uVar2 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_58 + 0x18) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar20 = 0;
        }
        iVar17 = *(int *)(lVar20 + 0x10);
        if (*(int *)(lVar20 + 0x10) == 0) {
          LOCK();
          iVar17 = DAT_14c964868 + 1;
          UNLOCK();
          iVar19 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar17;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar19);
          }
          LOCK();
          iVar17 = *(int *)(lVar20 + 0x10);
          bVar21 = iVar17 == 0;
          if (bVar21) {
            *(int *)(lVar20 + 0x10) = iVar19;
            iVar17 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar17 = iVar19;
          }
        }
      }
      *(int *)(pcVar1 + 0x1c) = iVar17;
      *(code **)(pcVar1 + 0x20) = FUN_140971450;
      *(undefined4 *)(pcVar1 + 0x28) = 0;
      FUN_140e2bd22(lVar12 + 0x138,&local_60,&local_58);
      if ((int)uStack_50 == 0) {
LAB_1412a9836:
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_58 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        uStack_50 = uStack_50 & 0xffffffff00000000;
        goto LAB_1412a9836;
      }
      *(undefined8 *)(param_1 + 0x80) = local_60;
    }
  }
  FUN_1412a8226(param_1,param_2);
  FUN_1412a83e6(param_1);
LAB_1412a8e82:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412a9efa FUN_1412a9efa body=77 status=ok
// SIG undefined FUN_1412a9efa(void)

void FUN_1412a9efa(longlong param_1,int param_2)

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



// FUNCTION 1412a9f48 FUN_1412a9f48 body=176 status=ok
// SIG undefined FUN_1412a9f48(void)

undefined8 * FUN_1412a9f48(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8c48) {
    FUN_144b3d300(&DAT_14cbd8c48);
    if (DAT_14cbd8c48 == -1) {
      builtin_wcsncpy(local_38,L"OnZoomInChange",0xf);
      FUN_1446f470e(&DAT_14cbd8c40,local_38,1);
      _Init_thread_footer(&DAT_14cbd8c48);
    }
  }
  *param_1 = DAT_14cbd8c40;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412a9ffa FUN_1412a9ffa body=182 status=ok
// SIG undefined FUN_1412a9ffa(void)

undefined8 * FUN_1412a9ffa(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8c78) {
    FUN_144b3d300(&DAT_14cbd8c78);
    if (DAT_14cbd8c78 == -1) {
      builtin_wcsncpy(local_38 + 8,L"Equipped",9);
      builtin_wcsncpy(local_38,L"OnWeapon",8);
      FUN_1446f470e(&DAT_14cbd8c70,local_38,1);
      _Init_thread_footer(&DAT_14cbd8c78);
    }
  }
  *param_1 = DAT_14cbd8c70;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aa0b2 FUN_1412aa0b2 body=176 status=ok
// SIG undefined FUN_1412aa0b2(void)

undefined8 * FUN_1412aa0b2(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8c68) {
    FUN_144b3d300(&DAT_14cbd8c68);
    if (DAT_14cbd8c68 == -1) {
      builtin_wcsncpy(local_38,L"OnModeSwitched",0xf);
      FUN_1446f470e(&DAT_14cbd8c60,local_38,1);
      _Init_thread_footer(&DAT_14cbd8c68);
    }
  }
  *param_1 = DAT_14cbd8c60;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aa164 FUN_1412aa164 body=176 status=ok
// SIG undefined FUN_1412aa164(void)

undefined8 * FUN_1412aa164(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8c88) {
    FUN_144b3d300(&DAT_14cbd8c88);
    if (DAT_14cbd8c88 == -1) {
      builtin_wcsncpy(local_38 + 8,L"PutDown",8);
      builtin_wcsncpy(local_38,L"OnWeapon",8);
      FUN_1446f470e(&DAT_14cbd8c80,local_38,1);
      _Init_thread_footer(&DAT_14cbd8c88);
    }
  }
  *param_1 = DAT_14cbd8c80;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aa216 FUN_1412aa216 body=179 status=ok
// SIG undefined FUN_1412aa216(void)

undefined8 * FUN_1412aa216(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8c58) {
    FUN_144b3d300(&DAT_14cbd8c58);
    if (DAT_14cbd8c58 == -1) {
      builtin_wcsncpy(local_28,L"OnZoomedOut",0xc);
      FUN_1446f470e(&DAT_14cbd8c50,local_28,1);
      _Init_thread_footer(&DAT_14cbd8c58);
    }
  }
  *param_1 = DAT_14cbd8c50;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aa2ca FUN_1412aa2ca body=197 status=ok
// SIG undefined FUN_1412aa2ca(void)

undefined8 * FUN_1412aa2ca(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8c98) {
    FUN_144b3d300(&DAT_14cbd8c98);
    if (DAT_14cbd8c98 == -1) {
      builtin_wcsncpy(local_48,L"OnWeaponTargetLockChanged",0x1a);
      FUN_1446f470e(&DAT_14cbd8c90,local_48,1);
      _Init_thread_footer(&DAT_14cbd8c98);
    }
  }
  *param_1 = DAT_14cbd8c90;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aa390 FUN_1412aa390 body=1184 status=ok
// SIG undefined FUN_1412aa390(void)

void FUN_1412aa390(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  longlong local_98 [5];
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *param_1;
  lVar14 = *(longlong *)(param_2 + 0x30);
  if (lVar14 == 0) {
    uVar9 = FUN_1458b6df2();
    lVar14 = FUN_14477b664(uVar9);
    *(longlong *)(param_2 + 0x30) = lVar14;
  }
  plVar13 = (longlong *)(param_2 + 0x28);
  lVar10 = *(longlong *)(param_2 + 0x38);
  if (lVar10 == 0) {
    if ((lVar14 == 0) || (*plVar13 == 0)) goto LAB_1412aa7f9;
    plVar11 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar7 == '\0')) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      goto LAB_1412aa7f9;
    }
    uVar9 = (**(code **)(*plVar11 + 0x110))(plVar11);
    lVar10 = FUN_144aff482(uVar9,plVar13);
    *(longlong *)(param_2 + 0x38) = lVar10;
    if (lVar10 == 0) goto LAB_1412aa7f9;
    lVar14 = *(longlong *)(param_2 + 0x30);
  }
  if (lVar14 == 0) {
    uVar9 = FUN_1458b6df2();
    lVar14 = FUN_14477b664(uVar9);
    *(longlong *)(param_2 + 0x30) = lVar14;
    lVar10 = *(longlong *)(param_2 + 0x38);
    if (((lVar10 == 0) && (lVar10 = 0, lVar14 != 0)) && (*plVar13 != 0)) {
      plVar11 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar11 == (longlong *)0x0) ||
         (cVar7 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar7 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar11 + 0x110))(plVar11);
        lVar10 = FUN_144aff482(uVar9,plVar13);
      }
      *(longlong *)(param_2 + 0x38) = lVar10;
    }
  }
  if ((longlong)*(int *)(lVar4 + 0xb8) != 0) {
    plVar13 = *(longlong **)(lVar4 + 0xb0);
    plVar11 = plVar13 + (longlong)*(int *)(lVar4 + 0xb8) * 2;
    do {
      lVar14 = *plVar13;
      plVar5 = (longlong *)plVar13[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x10) == lVar10)) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar5 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
            }
          }
        }
        goto LAB_1412aa7f9;
      }
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
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar11);
  }
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_70 = 0x10000;
  local_6c = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x8c;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98[0] = lVar10;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar6 = local_a8;
  local_a0 = 3;
  *local_a8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_a8[2] = lVar10;
  *local_a8 = &PTR_FUN_14b9ba140;
  local_a8[3] = 0;
  iVar8 = 0;
  if (lVar4 != 0) {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *(uint *)(local_a8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar8;
  puVar6[4] = FUN_148e5cd56;
  *(undefined4 *)(puVar6 + 5) = 0;
  FUN_140861d4c(local_98,&local_a8);
  FUN_140fb05f2(local_98,&local_40);
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 == 0) {
LAB_1412aa5a6:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_1412aa5a6;
  }
  if (local_40 != 0) {
    iVar8 = *(int *)(lVar4 + 0xb8);
    *(uint *)(lVar4 + 0xb8) = iVar8 + 1U;
    if (*(uint *)(lVar4 + 0xbc) < iVar8 + 1U) {
      FUN_148e119be((longlong *)(lVar4 + 0xb0),iVar8);
    }
    lVar4 = *(longlong *)(lVar4 + 0xb0);
    *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = local_40;
    *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_38 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_1412aa7f9:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412aa84a FUN_1412aa84a body=778 status=ok
// SIG undefined FUN_1412aa84a(void)

void FUN_1412aa84a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412aab56();
  local_30 = 0;
  local_40 = 0;
  local_38 = 1;
  local_50 = 1;
  local_4f = local_37;
  local_4b = local_33;
  local_49 = local_31;
  local_48 = 0;
  local_58 = 0x100000000;
  local_68 = L"bAbsoluteLocation";
  local_60 = &DAT_100000008;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bAbsoluteRotation";
  local_60 = (undefined1 *)0x100000009;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bAbsoluteScale";
  local_60 = &DAT_10000000a;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bVisible";
  local_60 = &DAT_10000000b;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bShouldBeAttached";
  local_60 = &DAT_10000000c;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bShouldSnapLocationWhenAttached";
  local_60 = (undefined1 *)0x10000000d;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bShouldSnapRotationWhenAttached";
  local_60 = (undefined1 *)0x10000000e;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"bShouldSnapScaleWhenAttached";
  local_60 = &DAT_10000000f;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"AttachParent";
  local_60 = &DAT_100000002;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"AttachChildren";
  local_60 = &DAT_100000004;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"AttachSocketName";
  local_60 = &DAT_100000003;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"RelativeLocation";
  local_60 = (undefined1 *)0x100000005;
  FUN_140c2c993(&local_68,param_2,&local_58);
  local_68 = L"RelativeRotation";
  local_60 = (undefined1 *)0x100000006;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"RelativeScale3D";
  local_60 = &DAT_100000007;
  FUN_140c2c993(&local_68,param_2,&local_40);
  local_68 = L"Mobility";
  local_60 = &DAT_100000010;
  FUN_140c2c993(&local_68,param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aab56 FUN_1412aab56 body=225 status=ok
// SIG undefined FUN_1412aab56(void)

void FUN_1412aab56(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14043ab18();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x3f0))(plVar1,param_2);
    }
  }
  local_28 = 0;
  local_38 = 0;
  local_30 = 1;
  local_48 = L"bIsActive";
  local_40 = &DAT_100000001;
  FUN_140c2c993(&local_48,param_2,&local_38);
  local_48 = L"bReplicates";
  local_40 = (undefined1 *)0x100000000;
  FUN_140c2c993(&local_48,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aac38 FUN_1412aac38 body=203 status=ok
// SIG undefined FUN_1412aac38(void)

void FUN_1412aac38(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      iVar2 = *(int *)(param_2 + 0x10 + lVar3);
      _Src = *(void **)(param_2 + 8 + lVar3);
      *(int *)(param_1 + 0x10 + lVar3) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar3) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar3,iVar2,0);
        memcpy(*(void **)(param_1 + 8 + lVar3),_Src,(longlong)iVar2 * 2);
      }
      lVar1 = param_2 + lVar3;
      *(undefined4 *)(param_1 + 0x20 + lVar3) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(lVar1 + 0x18);
      lVar1 = *(longlong *)(lVar1 + 0x28);
      *(longlong *)(param_1 + 0x28 + lVar3) = lVar1;
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c();
      }
      lVar3 = lVar3 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1412aad04 FUN_1412aad04 body=667 status=ok
// SIG undefined FUN_1412aad04(void)

void FUN_1412aad04(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = lVar2 + *(int *)((longlong)plVar1 + 0x44);
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_1412aadeb;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_1412aadeb:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0xac0))(param_1,local_29);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerSetWantsWeaponLowered_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xac8))(param_1,local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412aafaa FUN_1412aafaa body=284 status=ok
// SIG undefined FUN_1412aafaa(void)

undefined8 FUN_1412aafaa(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1412ab0c0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412ab0c0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1412ab0c0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412ab06d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1412ab06d;
    }
  }
  uVar6 = 0;
LAB_1412ab06d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ab0c8 FUN_1412ab0c8 body=206 status=ok
// SIG undefined FUN_1412ab0c8(void)

void FUN_1412ab0c8(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((char)param_1[0x126f] != '\0') {
    *(undefined1 *)(param_1 + 0x126f) = 0;
    (**(code **)(*param_1 + 0x578))();
    uVar1 = param_1[5];
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001412ab193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x6a);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        lVar4 = *(longlong *)(lVar2 + 0x18);
        if (*(longlong *)(lVar2 + 0x18) == 0) {
          lVar4 = lVar2 + 8;
        }
        *(uint *)(lVar4 + 0xc) = *(uint *)(lVar4 + 0xc) | 0x400;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1412ab196 FUN_1412ab196 body=256 status=ok
// SIG undefined FUN_1412ab196(void)

void FUN_1412ab196(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x148);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x140);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_14a3496e0;
  puVar3 = *(undefined8 **)(param_1 + 0xd0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_1412ab296(param_1 + 0x50);
  return;
}



// FUNCTION 1412ab296 FUN_1412ab296 body=314 status=ok
// SIG undefined FUN_1412ab296(void)

void FUN_1412ab296(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14a349810;
  puVar3 = (undefined8 *)param_1[0xb];
  while (puVar3 != (undefined8 *)0x0) {
    param_1[0xb] = *puVar3;
    puVar2 = (undefined8 *)puVar3[2];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)puVar3[1];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400020a8(puVar3);
    puVar3 = (undefined8 *)param_1[0xb];
  }
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  while (puVar3 = (undefined8 *)param_1[7], puVar3 != (undefined8 *)0x0) {
    param_1[7] = *puVar3;
    puVar2 = (undefined8 *)puVar3[1];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    FUN_1400020a8(puVar3);
  }
  *param_1 = &PTR_LAB_14a3496e0;
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412ab350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 1412ab3d0 FUN_1412ab3d0 body=199 status=ok
// SIG undefined FUN_1412ab3d0(void)

int FUN_1412ab3d0(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1412ab416:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1412ab483;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1412ab483;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1412ab430;
    }
  }
  return -1;
LAB_1412ab483:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1412ab430:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1412ab416;
}



// FUNCTION 1412ab498 FUN_1412ab498 body=202 status=ok
// SIG undefined FUN_1412ab498(void)

void FUN_1412ab498(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((longlong)*(int *)(param_1 + 0x90) == 0) {
LAB_1412ab53d:
    *param_2 = 0;
    param_2[1] = 0;
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x90) * 2;
  iVar1 = (int)param_3[1];
LAB_1412ab4cc:
  lVar2 = *plVar3;
  if (*(int *)(lVar2 + 0x30) == iVar1) {
    if (1 < iVar1) {
      lVar8 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(lVar2 + 0x28) + lVar8);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*param_3 + lVar8);
        if (uVar5 == uVar7) {
          if (uVar5 == 0) break;
        }
        else {
          if (0x7f < (uVar7 | uVar5)) goto LAB_1412ab532;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar9 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_1412ab532;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
    goto LAB_1412ab538;
  }
  if (*(int *)(lVar2 + 0x30) + iVar1 == 1) goto LAB_1412ab538;
  goto LAB_1412ab4e0;
LAB_1412ab532:
  if (uVar5 == uVar7) {
LAB_1412ab538:
    if (plVar3 != (longlong *)0x0) {
      *param_2 = lVar2;
      lVar2 = plVar3[1];
      param_2[1] = lVar2;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return;
    }
    goto LAB_1412ab53d;
  }
LAB_1412ab4e0:
  plVar3 = plVar3 + 2;
  if (plVar3 == plVar4) goto LAB_1412ab53d;
  goto LAB_1412ab4cc;
}



// FUNCTION 1412ab562 FUN_1412ab562 body=266 status=ok
// SIG undefined FUN_1412ab562(void)

undefined8 * FUN_1412ab562(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,param_1 + 5);
  FUN_1412ab686(param_1 + 7,param_1 + 5);
  param_1[9] = 0;
  param_1[10] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x38))((longlong *)*param_1,param_1 + 0xb);
  (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_1 + 0xd);
  (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1 + 0xf);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x60))((longlong *)*param_1,param_1 + 0x13);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x68))((longlong *)*param_1,param_1 + 0x17);
  (**(code **)(*(longlong *)*param_1 + 0x70))((longlong *)*param_1,param_1 + 0x19);
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x78))();
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1412ab70c(param_1,&local_48,1);
  FUN_1447a1747(0,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ab670 FUN_1412ab670 body=21 status=ok
// SIG undefined FUN_1412ab670(void)

void FUN_1412ab670(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1424a5500();
  FUN_1424d5160(uVar1);
  return;
}



// FUNCTION 1412ab686 FUN_1412ab686 body=133 status=ok
// SIG undefined FUN_1412ab686(void)

longlong * FUN_1412ab686(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  
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
    lVar3 = param_1[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_1;
      lVar4 = 0;
      do {
        sVar5 = *(short *)(lVar2 + lVar4);
        if (sVar5 == 0x2d) {
          sVar5 = 0x5f;
        }
        *(short *)(lVar2 + lVar4) = sVar5;
        lVar4 = lVar4 + 2;
      } while ((longlong)(int)lVar3 * 2 != lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1412ab70c FUN_1412ab70c body=1010 status=ok
// SIG undefined FUN_1412ab70c(void)

void FUN_1412ab70c(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&local_40);
  if (param_1 + 1 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 2) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_34;
  }
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  FUN_1412abe28(&local_50,param_1 + 1);
  if (param_3 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8442f0) {
      FUN_144b3d300(&DAT_14c8442f0);
      if (DAT_14c8442f0 == -1) {
        FUN_140056680(&DAT_14c8442e0,&DAT_149e19e7a);
        atexit((_func_5014 *)&LAB_14275e9c1);
        _Init_thread_footer(&DAT_14c8442f0);
      }
    }
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,&local_40);
    if (param_1 + 3 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
    }
    local_60 = &DAT_14c8442e0;
    local_58 = 1;
    FUN_1412abe28(&local_60,param_1 + 3);
    FUN_1412abbc6(&local_40,param_1 + 0xf,param_1 + 0x17,param_1 + 0x13);
    (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,&local_70);
    if (param_1 + 9 == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[9] != 0) {
        FUN_1400020a8();
      }
      param_1[9] = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 10) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x54) = local_64;
    }
    local_80 = local_40;
    local_78 = local_38;
    FUN_1412abe28(&local_80,param_1 + 9);
    (**(code **)(*(longlong *)*param_1 + 0x50))((longlong *)*param_1,&local_70);
    if (param_1 + 0x11 == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x11] != 0) {
        FUN_1400020a8();
      }
      param_1[0x11] = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x12) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x94) = local_64;
    }
    local_90 = local_40;
    local_88 = local_38;
    FUN_1412abe28(&local_90,param_1 + 0x11);
    (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,&local_70);
    if (param_1 + 0x15 == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x15] != 0) {
        FUN_1400020a8();
      }
      param_1[0x15] = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x16) = local_68;
      *(undefined4 *)((longlong)param_1 + 0xb4) = local_64;
    }
    local_a0 = local_40;
    local_98 = local_38;
    FUN_1412abe28(&local_a0,param_1 + 0x15);
    FUN_1447a1747(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412abb00 FUN_1412abb00 body=37 status=ok
// SIG undefined FUN_1412abb00(void)

void FUN_1412abb00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1424a3b00();
  FUN_1412ac780(param_1,uVar1,param_2);
  return;
}



// FUNCTION 1412abb25 FUN_1412abb25 body=160 status=ok
// SIG undefined FUN_1412abb25(void)

void FUN_1412abb25(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  void *_Src;
  
  if ((short)*(ushort *)(param_1 + 8) < 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar2 = (uint)(*(ushort *)(param_1 + 8) >> 5);
  }
  if (uVar2 == 0) {
    FUN_144a7e010(param_2);
    return;
  }
  if ((int)uVar2 < 1) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < 0) {
      FUN_1446f8c06(param_2,0);
    }
    puVar1 = (undefined2 *)*param_2;
    if (puVar1 == (undefined2 *)0x0) {
      return;
    }
  }
  else {
    FUN_1409ee492(param_2,uVar2 + 1,1);
    if ((*(ushort *)(param_1 + 8) & 0x11) == 0) {
      if ((*(ushort *)(param_1 + 8) & 2) == 0) {
        _Src = *(void **)(param_1 + 0x18);
      }
      else {
        _Src = (void *)(param_1 + 10);
      }
    }
    else {
      _Src = (void *)0x0;
    }
    memcpy((void *)*param_2,_Src,(ulonglong)(uVar2 * 2));
    puVar1 = (undefined2 *)((ulonglong)uVar2 * 2 + *param_2);
  }
  *puVar1 = 0;
  return;
}



// FUNCTION 1412abbc6 FUN_1412abbc6 body=609 status=ok
// SIG undefined FUN_1412abbc6(void)

/* WARNING: Removing unreachable block (ram,0x0001412abd1c) */
/* WARNING: Removing unreachable block (ram,0x0001412abd90) */
/* WARNING: Removing unreachable block (ram,0x0001412abe11) */

longlong * FUN_1412abbc6(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = *(int *)(param_4 + 8);
  if (1 < iVar3 && 1 < *(int *)(param_3 + 8)) {
    FUN_140f2ad5a(&local_40,param_2,param_3,param_4);
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_1,iVar3);
    }
    lVar2 = *param_1;
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_40;
    local_40 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_38;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_38._4_4_;
    local_38 = 0;
    iVar3 = *(int *)(param_4 + 8);
  }
  if (1 < iVar3) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_140f2ad5a(&local_40,param_2,&local_58,param_4);
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_1,iVar3);
    }
    lVar2 = *param_1;
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_40;
    local_40 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_38;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_38._4_4_;
    local_38 = 0;
  }
  if (1 < *(int *)(param_3 + 8)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_140f2ad5a(&local_40,param_2,param_3);
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_1,iVar3);
    }
    lVar2 = *param_1;
    lVar4 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_40;
    local_40 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_38;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_38._4_4_;
    local_38 = 0;
  }
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_1447a1bd6(param_1,iVar3);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar3 * 0x10;
  puVar1 = (undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar2 + 8 + lVar4) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar3,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar3 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412abe28 FUN_1412abe28 body=2165 status=ok
// SIG undefined FUN_1412abe28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412abe28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  undefined2 *puVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined2 *puVar24;
  longlong *plVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong *plVar36;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  uint local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442d8) && (FUN_144b3d300(&DAT_14c8442d8), DAT_14c8442d8 == -1)) {
    DAT_14c8442c8 = (longlong *)0x0;
    _DAT_14c8442d0 = 0;
    atexit(FUN_14275e990);
    _Init_thread_footer(&DAT_14c8442d8);
  }
  if ((DAT_14c872ce0 != 0 && (DAT_14c8442dc & 1) == 0) && (*(char *)(DAT_14c872ce0 + 9) == '\x01'))
  {
    DAT_14c8442dc = 1;
    local_a8 = 0;
    uStack_a0 = 0;
    local_f8 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"CultureDisplayNameSubstitutes");
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_f8 = &DAT_14c872af8;
    FUN_14105aa76(DAT_14c872ce0,L"Internationalization",L"CultureDisplayNameSubstitutes",&local_98);
    uVar34 = uStack_a0;
    lVar35 = (longlong)(int)(uint)uStack_90;
    if (lVar35 != 0) {
      iVar10 = (int)uStack_a0;
      lVar22 = (longlong)(int)uStack_a0;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + (uint)uStack_90);
      if ((uint)(uStack_a0._4_4_ - iVar10) < (uint)uStack_90) {
        FUN_1447a1bd6(&local_a8,uVar34 & 0xffffffff);
      }
      memmove((void *)(lVar22 * 0x10 + local_a8),local_98,lVar35 << 4);
      uStack_90 = uStack_90 & 0xffffffff00000000;
    }
    FUN_1447a1747(local_98);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_a0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
    if ((int)DAT_14c8442d4 < (int)uStack_a0) {
      FUN_1412ad0ee();
    }
    if ((int)uStack_a0 != 0) {
      lVar22 = (longlong)(int)uStack_a0 << 4;
      lVar35 = local_a8;
      do {
        local_b8 = (ulonglong *)0x0;
        uStack_b0 = 0;
        FUN_1403de9f2(lVar35,&local_b8,&DAT_149e06120,1);
        if ((int)uStack_b0 == 2) {
          uVar34 = *local_b8;
          *local_b8 = 0;
          uVar30 = local_b8[1];
          local_b8[1] = 0;
          uVar17 = local_b8[2];
          local_b8[2] = 0;
          uVar8 = local_b8[3];
          local_b8[3] = 0;
          uVar9 = _DAT_14c8442d0;
          lVar33 = (longlong)DAT_14c8442d0;
          uVar13 = DAT_14c8442d0 + 1;
          _DAT_14c8442d0 = CONCAT44(DAT_14c8442d4,uVar13);
          uVar29 = *(uint *)((longlong)local_b8 + 0x1c);
          uVar23 = (int)uVar30;
          uVar3 = *(undefined4 *)((longlong)local_b8 + 0xc);
          if (DAT_14c8442d4 < uVar13) {
            local_d0 = CONCAT44(local_d0._4_4_,(int)uVar30);
            local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)((longlong)local_b8 + 0xc));
            local_ec = *(uint *)((longlong)local_b8 + 0x1c);
            local_e8 = uVar34;
            FUN_1427616cc(uVar9 & 0xffffffff);
            uVar34 = local_e8;
            uVar29 = local_ec;
            uVar23 = (undefined4)local_d0;
            uVar3 = (undefined4)local_d8;
          }
          plVar21 = DAT_14c8442c8;
          DAT_14c8442c8[lVar33 * 6] = 0;
          plVar21[lVar33 * 6 + 1] = 0;
          plVar21[lVar33 * 6 + 2] = uVar34;
          *(undefined4 *)(plVar21 + lVar33 * 6 + 3) = uVar23;
          *(undefined4 *)((longlong)plVar21 + lVar33 * 0x30 + 0x1c) = uVar3;
          plVar21[lVar33 * 6 + 4] = uVar17;
          *(int *)(plVar21 + lVar33 * 6 + 5) = (int)uVar8;
          *(uint *)((longlong)plVar21 + lVar33 * 0x30 + 0x2c) = uVar29;
LAB_1412ac129:
          local_78 = 0;
          lStack_80 = 0;
          local_88 = 0;
          uStack_90 = 0;
          local_98 = (void *)0x0;
          lStack_70 = 0;
          FUN_1412ac738(&local_98);
        }
        else if ((int)uStack_b0 == 3) {
          uVar34 = *local_b8;
          *local_b8 = 0;
          uVar8 = local_b8[1];
          local_b8[1] = 0;
          uVar17 = local_b8[2];
          local_b8[2] = 0;
          uVar9 = local_b8[3];
          local_b8[3] = 0;
          uVar30 = local_b8[4];
          local_b8[4] = 0;
          local_e8 = CONCAT44(local_e8._4_4_,(int)local_b8[5]);
          local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)((longlong)local_b8 + 0x2c));
          local_b8[5] = 0;
          uVar11 = _DAT_14c8442d0;
          lVar33 = (longlong)DAT_14c8442d0;
          uVar13 = DAT_14c8442d0 + 1;
          _DAT_14c8442d0 = CONCAT44(DAT_14c8442d4,uVar13);
          uVar3 = *(undefined4 *)((longlong)local_b8 + 0x1c);
          uVar29 = (uint)uVar8;
          uVar23 = *(undefined4 *)((longlong)local_b8 + 0xc);
          if (DAT_14c8442d4 < uVar13) {
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)((longlong)local_b8 + 0xc));
            local_c0 = (longlong *)
                       CONCAT44(local_c0._4_4_,*(undefined4 *)((longlong)local_b8 + 0x1c));
            local_ec = (uint)uVar8;
            local_e0 = uVar30;
            local_d8 = uVar34;
            FUN_1427616cc(uVar11 & 0xffffffff);
            uVar34 = local_d8;
            uVar30 = local_e0;
            uVar3 = local_c0._0_4_;
            uVar29 = local_ec;
            uVar23 = (undefined4)local_c8;
          }
          plVar21 = DAT_14c8442c8;
          lVar16 = lVar33 * 0x30;
          DAT_14c8442c8[lVar33 * 6] = uVar34;
          *(uint *)(plVar21 + lVar33 * 6 + 1) = uVar29;
          *(undefined4 *)((longlong)plVar21 + lVar16 + 0xc) = uVar23;
          plVar21[lVar33 * 6 + 2] = uVar17;
          *(int *)(plVar21 + lVar33 * 6 + 3) = (int)uVar9;
          *(undefined4 *)((longlong)plVar21 + lVar16 + 0x1c) = uVar3;
          plVar21[lVar33 * 6 + 4] = uVar30;
          *(int *)(plVar21 + lVar33 * 6 + 5) = (int)local_e8;
          *(undefined4 *)((longlong)plVar21 + lVar16 + 0x2c) = (undefined4)local_d0;
          goto LAB_1412ac129;
        }
        FUN_1447a1747(local_b8);
        if (local_b8 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        lVar35 = lVar35 + 0x10;
        lVar22 = lVar22 + -0x10;
      } while (lVar22 != 0);
    }
    plVar21 = DAT_14c8442c8;
    iVar10 = DAT_14c8442d0;
    uVar34 = (ulonglong)DAT_14c8442d0;
    if (0 < (longlong)uVar34) {
      local_c0 = DAT_14c8442c8;
      uVar17 = 0;
      plVar25 = DAT_14c8442c8;
      do {
        if (uVar17 + 1 < uVar34) {
          iVar26 = (int)plVar25[7] + -1;
          if ((int)plVar25[7] == 0) {
            iVar26 = 0;
          }
          iVar14 = (int)plVar25[1] + -1;
          if ((int)plVar25[1] == 0) {
            iVar14 = 0;
          }
          if (iVar14 < iVar26) {
            pvVar5 = (void *)*plVar25;
            uVar30 = plVar25[1];
            local_88 = plVar25[2];
            lStack_80 = plVar25[3];
            local_78 = plVar25[4];
            lStack_70 = plVar25[5];
            plVar25[4] = plVar25[10];
            plVar25[5] = plVar25[0xb];
            plVar25[2] = plVar25[8];
            plVar25[3] = plVar25[9];
            *plVar25 = plVar25[6];
            plVar25[1] = plVar25[7];
            local_98._0_4_ = SUB84(pvVar5,0);
            local_98._4_4_ = (undefined4)((ulonglong)pvVar5 >> 0x20);
            uStack_90._0_4_ = (uint)uVar30;
            uStack_90._4_4_ = (undefined4)(uVar30 >> 0x20);
            plVar25[10] = local_78;
            plVar25[0xb] = lStack_70;
            plVar25[8] = local_88;
            plVar25[9] = lStack_80;
            *(undefined4 *)(plVar25 + 6) = (undefined4)local_98;
            *(undefined4 *)((longlong)plVar25 + 0x34) = local_98._4_4_;
            *(uint *)(plVar25 + 7) = (uint)uStack_90;
            *(undefined4 *)((longlong)plVar25 + 0x3c) = uStack_90._4_4_;
            local_98 = pvVar5;
            uStack_90 = uVar30;
          }
        }
        uVar17 = uVar17 + 2;
        plVar25 = plVar25 + 0xc;
      } while (uVar17 < uVar34);
      if (2 < iVar10) {
        uVar17 = 2;
        do {
          local_d8 = uVar17;
          iVar26 = (int)local_d8;
          local_ec = iVar26 * 2;
          local_d0 = (longlong)(int)local_ec;
          lVar35 = 0;
          do {
            uVar29 = iVar10 - (int)lVar35;
            if ((int)local_ec <= (int)uVar29) {
              uVar29 = local_ec;
            }
            if ((iVar26 < (int)uVar29) && (0 < iVar26)) {
              iVar14 = 0;
              uVar17 = local_d8;
              while( true ) {
                iVar18 = (int)uVar17;
                local_e8 = CONCAT44(local_e8._4_4_,iVar18);
                iVar15 = 0;
                uVar13 = iVar18 - iVar14;
                if (uVar13 != 0 && iVar14 <= iVar18) {
                  iVar15 = 0;
                  iVar27 = (int)plVar21[lVar35 * 6 + (longlong)iVar18 * 6 + 1] + -1;
                  if ((int)plVar21[lVar35 * 6 + (longlong)iVar18 * 6 + 1] == 0) {
                    iVar27 = 0;
                  }
                  do {
                    iVar1 = iVar15 + (uVar13 >> 1);
                    iVar19 = 0;
                    if ((int)plVar21[lVar35 * 6 + (longlong)iVar14 * 6 + (longlong)iVar1 * 6 + 1] !=
                        0) {
                      iVar19 = (int)plVar21[lVar35 * 6 +
                                            (longlong)iVar14 * 6 + (longlong)iVar1 * 6 + 1] + -1;
                    }
                    if (iVar27 <= iVar19) {
                      iVar15 = iVar1 + (uVar13 & 1);
                    }
                    bVar4 = 1 < uVar13;
                    uVar13 = uVar13 >> 1;
                  } while (bVar4);
                }
                iVar15 = iVar15 + iVar14;
                if (iVar18 - iVar15 == 0 || iVar18 < iVar15) break;
                uVar17 = (ulonglong)(uVar29 - iVar18);
                if (uVar29 - iVar18 == 0 || (int)uVar29 < iVar18) {
                  local_e0 = 0;
                }
                else {
                  plVar25 = plVar21 + lVar35 * 6 + (longlong)iVar15 * 6;
                  local_e0 = 0;
                  iVar14 = (int)plVar25[1] + -1;
                  if ((int)plVar25[1] == 0) {
                    iVar14 = 0;
                  }
                  do {
                    uVar13 = (int)local_e0 + (int)(uVar17 >> 1);
                    iVar27 = 0;
                    if ((int)plVar21[lVar35 * 6 + (longlong)iVar18 * 6 + (ulonglong)uVar13 * 6 + 1]
                        != 0) {
                      iVar27 = (int)plVar21[lVar35 * 6 +
                                            (longlong)iVar18 * 6 + (ulonglong)uVar13 * 6 + 1] + -1;
                    }
                    uVar31 = (uint)uVar17;
                    if (iVar14 < iVar27) {
                      local_e0 = (ulonglong)(uVar13 + (uVar31 & 1));
                    }
                    uVar17 = uVar17 >> 1;
                  } while (1 < uVar31);
                  iVar14 = iVar18 + (int)local_e0;
                  local_e8 = CONCAT44(local_e8._4_4_,iVar14);
                  if (0 < (int)local_e0) {
                    plVar36 = plVar25 + (longlong)(iVar14 - iVar15) * 6;
                    plVar32 = plVar25 + (longlong)(iVar18 - iVar15) * 6;
                    plVar28 = plVar25 + (longlong)(iVar18 - iVar15) * 6;
                    do {
                      while( true ) {
                        plVar2 = plVar32 + 6;
                        pvVar5 = (void *)*plVar25;
                        uVar17 = plVar25[1];
                        local_88 = plVar25[2];
                        lStack_80 = plVar25[3];
                        local_78 = plVar25[4];
                        lStack_70 = plVar25[5];
                        lVar22 = *plVar32;
                        lVar33 = plVar32[1];
                        lVar16 = plVar32[2];
                        lVar6 = plVar32[3];
                        lVar7 = plVar32[5];
                        plVar25[4] = plVar32[4];
                        plVar25[5] = lVar7;
                        plVar25[2] = lVar16;
                        plVar25[3] = lVar6;
                        *plVar25 = lVar22;
                        plVar25[1] = lVar33;
                        plVar25 = plVar25 + 6;
                        local_98._0_4_ = SUB84(pvVar5,0);
                        local_98._4_4_ = (undefined4)((ulonglong)pvVar5 >> 0x20);
                        uStack_90._0_4_ = (uint)uVar17;
                        uStack_90._4_4_ = (undefined4)(uVar17 >> 0x20);
                        plVar32[4] = local_78;
                        plVar32[5] = lStack_70;
                        plVar32[2] = local_88;
                        plVar32[3] = lStack_80;
                        *(undefined4 *)plVar32 = (undefined4)local_98;
                        *(undefined4 *)((longlong)plVar32 + 4) = local_98._4_4_;
                        *(uint *)(plVar32 + 1) = (uint)uStack_90;
                        *(undefined4 *)((longlong)plVar32 + 0xc) = uStack_90._4_4_;
                        if (plVar2 == plVar36) break;
                        plVar32 = plVar2;
                        if (plVar25 == plVar28) {
                          plVar28 = plVar2;
                        }
                      }
                      plVar32 = plVar28;
                      local_98 = pvVar5;
                      uStack_90 = uVar17;
                    } while (plVar25 != plVar28);
                  }
                }
                uVar17 = local_e8 & 0xffffffff;
                if (((int)uVar29 <= (int)local_e8) ||
                   (iVar14 = iVar15 + (int)local_e0 + 1, (int)local_e8 <= iVar14)) break;
              }
            }
            lVar35 = lVar35 + local_d0;
          } while (lVar35 < (longlong)uVar34);
          uVar17 = (ulonglong)local_ec;
          local_c8 = uVar34;
        } while ((int)local_ec < iVar10);
      }
    }
    FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)DAT_14c8442d0 != 0) {
    lVar35 = (longlong)DAT_14c8442d0 * 0x30;
    plVar21 = DAT_14c8442c8;
    do {
      if (((int)plVar21[1] < 2) || (cVar12 = FUN_1412ac69e(param_1,plVar21), cVar12 != '\0')) {
        puVar24 = &DAT_149dfb77a;
        if ((int)plVar21[5] != 0) {
          puVar24 = (undefined2 *)plVar21[4];
        }
        puVar20 = &DAT_149dfb77a;
        if ((int)plVar21[3] != 0) {
          puVar20 = (undefined2 *)plVar21[2];
        }
        FUN_1448097c4(param_2,puVar20,puVar24,0);
      }
      plVar21 = plVar21 + 6;
      lVar35 = lVar35 + -0x30;
    } while (lVar35 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412ac69e FUN_1412ac69e body=154 status=ok
// SIG undefined FUN_1412ac69e(void)

undefined8 FUN_1412ac69e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((longlong)(int)param_1[1] == 0) {
    return 0;
  }
  plVar4 = (longlong *)*param_1;
  plVar9 = plVar4 + (longlong)(int)param_1[1] * 2;
  iVar1 = (int)param_2[1];
LAB_1412ac6c2:
  iVar2 = (int)plVar4[1];
  if (iVar2 == iVar1) {
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    if (iVar1 < 2) {
      return uVar3;
    }
    lVar5 = 0;
    do {
      uVar7 = *(ushort *)(*plVar4 + lVar5);
      uVar8 = (ulonglong)uVar7;
      uVar6 = *(ushort *)(*param_2 + lVar5);
      if (uVar7 == uVar6) {
        if (uVar7 == 0) {
          return uVar3;
        }
      }
      else {
        if (0x7f < (uVar6 | uVar7)) goto LAB_1412ac72c;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar10 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar10]) goto LAB_1412ac72c;
      }
      lVar5 = lVar5 + 2;
    } while( true );
  }
  if (iVar2 + iVar1 == 1) {
    return 1;
  }
  goto LAB_1412ac71a;
LAB_1412ac72c:
  if (uVar7 == uVar6) {
    return uVar3;
  }
LAB_1412ac71a:
  plVar4 = plVar4 + 2;
  if (plVar4 == plVar9) {
    return 0;
  }
  goto LAB_1412ac6c2;
}



// FUNCTION 1412ac738 FUN_1412ac738 body=61 status=ok
// SIG undefined FUN_1412ac738(void)

void FUN_1412ac738(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1412ac780 FUN_1412ac780 body=319 status=ok
// SIG undefined FUN_1412ac780(void)

void FUN_1412ac780(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  lVar3 = FUN_140855070(param_3,0x9d);
  uVar1 = *(ushort *)(param_3 + 8);
  if (lVar3 == 0) {
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        if (*(int *)(param_3 + 0xc) == 0) goto LAB_1412ac8b2;
      }
      else if ((short)uVar1 >> 5 == 0) goto LAB_1412ac8b2;
      *(ushort *)(param_3 + 8) = uVar1 & 0x1f;
      goto LAB_1412ac8b2;
    }
  }
  else {
    uVar5 = 0x1b;
    if ((uVar1 & 2) == 0) {
      uVar5 = *(undefined4 *)(param_3 + 0x10);
    }
    local_48 = &local_34;
    uVar2 = FUN_1424c3c50(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),lVar3,
                          uVar5);
    uVar5 = 0;
    if (local_34 < 1) {
      uVar5 = uVar2;
    }
    FUN_1408550d0(param_3,uVar5);
    if (local_34 != 0xf) goto LAB_1412ac8b2;
    lVar3 = FUN_140855070(param_3,uVar2);
    if (lVar3 != 0) {
      local_34 = 0;
      uVar5 = 0x1b;
      if ((*(ushort *)(param_3 + 8) & 2) == 0) {
        uVar5 = *(undefined4 *)(param_3 + 0x10);
      }
      local_48 = &local_34;
      uVar2 = FUN_1424c3c50(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),lVar3,
                            uVar5);
      uVar5 = 0;
      if (local_34 < 1) {
        uVar5 = uVar2;
      }
      FUN_1408550d0(param_3,uVar5);
      goto LAB_1412ac8b2;
    }
    uVar1 = *(ushort *)(param_3 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar4 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar4 = (int)(short)uVar1 >> 5;
      }
      if (iVar4 != 0) {
        *(ushort *)(param_3 + 8) = uVar1 & 0x1f;
      }
      goto LAB_1412ac8b2;
    }
  }
  FUN_1424a8e40(param_3);
LAB_1412ac8b2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1412ac8d0 FUN_1412ac8d0 body=319 status=ok
// SIG undefined FUN_1412ac8d0(void)

void FUN_1412ac8d0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  lVar3 = FUN_140855070(param_3,0x9d);
  uVar1 = *(ushort *)(param_3 + 8);
  if (lVar3 == 0) {
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        if (*(int *)(param_3 + 0xc) == 0) goto LAB_1412aca02;
      }
      else if ((short)uVar1 >> 5 == 0) goto LAB_1412aca02;
      *(ushort *)(param_3 + 8) = uVar1 & 0x1f;
      goto LAB_1412aca02;
    }
  }
  else {
    uVar5 = 0x1b;
    if ((uVar1 & 2) == 0) {
      uVar5 = *(undefined4 *)(param_3 + 0x10);
    }
    local_48 = &local_34;
    uVar2 = FUN_1424c38a0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),lVar3,
                          uVar5);
    uVar5 = 0;
    if (local_34 < 1) {
      uVar5 = uVar2;
    }
    FUN_1408550d0(param_3,uVar5);
    if (local_34 != 0xf) goto LAB_1412aca02;
    lVar3 = FUN_140855070(param_3,uVar2);
    if (lVar3 != 0) {
      local_34 = 0;
      uVar5 = 0x1b;
      if ((*(ushort *)(param_3 + 8) & 2) == 0) {
        uVar5 = *(undefined4 *)(param_3 + 0x10);
      }
      local_48 = &local_34;
      uVar2 = FUN_1424c38a0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),lVar3,
                            uVar5);
      uVar5 = 0;
      if (local_34 < 1) {
        uVar5 = uVar2;
      }
      FUN_1408550d0(param_3,uVar5);
      goto LAB_1412aca02;
    }
    uVar1 = *(ushort *)(param_3 + 8);
    if ((uVar1 & 1) == 0) {
      if ((short)uVar1 < 0) {
        iVar4 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar4 = (int)(short)uVar1 >> 5;
      }
      if (iVar4 != 0) {
        *(ushort *)(param_3 + 8) = uVar1 & 0x1f;
      }
      goto LAB_1412aca02;
    }
  }
  FUN_1424a8e40(param_3);
LAB_1412aca02:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1412aca20 FUN_1412aca20 body=9 status=ok
// SIG undefined FUN_1412aca20(void)

void FUN_1412aca20(longlong param_1)

{
  FUN_1424ea210(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1412aca30 FUN_1412aca30 body=541 status=ok
// SIG undefined FUN_1412aca30(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1412aca30(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_308 [32];
  int *local_2e8;
  int *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2c0;
  int local_2bc [159];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2c0 = 0;
  lVar7 = FUN_140855070(param_3,0x9d);
  uVar3 = *(ushort *)(param_3 + 8);
  if (lVar7 == 0) {
LAB_1412acc10:
    if ((uVar3 & 1) == 0) {
      if ((short)uVar3 < 0) {
        if (*(int *)(param_3 + 0xc) == 0) goto LAB_1412acc3d;
      }
      else if ((short)uVar3 >> 5 == 0) goto LAB_1412acc3d;
      *(ushort *)(param_3 + 8) = uVar3 & 0x1f;
    }
    else {
      FUN_1424a8e40(param_3);
    }
    goto LAB_1412acc3d;
  }
  iVar8 = 0x1b;
  if ((uVar3 & 2) == 0) {
    iVar8 = *(int *)(param_3 + 0x10);
  }
  if (iVar8 < 0) {
LAB_1412acb1e:
    local_2c0 = 1;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    local_2bc[0] = 0;
    piVar2 = local_2bc + 1;
    iVar4 = FUN_1424e8be0(*(undefined8 *)(param_1 + 0x28),piVar2,0x274,local_2bc);
    if ((0 < local_2bc[0]) || (local_2bc[0] == -0x7c)) goto LAB_1412acb1e;
    if (iVar4 == 0) {
      local_2bc[1] = 0x646e75;
    }
    local_2c8 = &local_2c0;
    local_2e8 = piVar2;
    local_2e0 = piVar2;
    local_2d8 = lVar7;
    local_2d0 = iVar8;
    uVar5 = FUN_1424c4f70("icudt64l-lang",uVar1,"Languages",0);
    uVar6 = uVar5;
    if (0 < local_2c0) {
      uVar6 = 0;
    }
  }
  FUN_1408550d0(param_3,uVar6);
  if (local_2c0 != 0xf) goto LAB_1412acc3d;
  lVar7 = FUN_140855070(param_3,uVar5);
  if (lVar7 == 0) {
    uVar3 = *(ushort *)(param_3 + 8);
    goto LAB_1412acc10;
  }
  local_2c0 = 0;
  iVar8 = 0x1b;
  if ((*(ushort *)(param_3 + 8) & 2) == 0) {
    iVar8 = *(int *)(param_3 + 0x10);
  }
  if (iVar8 < 0) {
LAB_1412acbf8:
    local_2c0 = 1;
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    local_2bc[0] = 0;
    piVar2 = local_2bc + 1;
    iVar4 = FUN_1424e8be0(*(undefined8 *)(param_1 + 0x28),piVar2,0x274,local_2bc);
    if ((0 < local_2bc[0]) || (local_2bc[0] == -0x7c)) goto LAB_1412acbf8;
    if (iVar4 == 0) {
      local_2bc[1] = 0x646e75;
    }
    local_2c8 = &local_2c0;
    local_2e8 = piVar2;
    local_2e0 = piVar2;
    local_2d8 = lVar7;
    local_2d0 = iVar8;
    uVar6 = FUN_1424c4f70("icudt64l-lang",uVar1,"Languages",0);
    if (0 < local_2c0) {
      uVar6 = 0;
    }
  }
  FUN_1408550d0(param_3,uVar6);
LAB_1412acc3d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_308);
}



// FUNCTION 1412acc70 FUN_1412acc70 body=553 status=ok
// SIG undefined FUN_1412acc70(void)

void FUN_1412acc70(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [632];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2c0 = 0;
  lVar5 = FUN_140855070(param_3,0x9d);
  uVar2 = *(ushort *)(param_3 + 8);
  if (lVar5 == 0) {
LAB_1412ace48:
    if ((uVar2 & 1) == 0) {
      if ((short)uVar2 < 0) {
        if (*(int *)(param_3 + 0xc) == 0) goto LAB_1412ace75;
      }
      else if ((short)uVar2 >> 5 == 0) goto LAB_1412ace75;
      *(ushort *)(param_3 + 8) = uVar2 & 0x1f;
    }
    else {
      FUN_1424a8e40(param_3);
    }
    goto LAB_1412ace75;
  }
  iVar7 = 0x1b;
  if ((uVar2 & 2) == 0) {
    iVar7 = *(int *)(param_3 + 0x10);
  }
  if (iVar7 < 0) {
LAB_1412acd42:
    local_2c0 = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    local_2bc = 0;
    iVar3 = FUN_1424e8d90(*(undefined8 *)(param_1 + 0x28),local_2b8,0x274,&local_2bc);
    if ((0 < local_2bc) || (local_2bc == -0x7c)) goto LAB_1412acd42;
    if (iVar3 == 0) {
      uVar4 = FUN_142504cc0(lVar5,iVar7,0,&local_2c0);
    }
    else {
      local_2c8 = &local_2c0;
      local_2e8 = local_2b8;
      local_2e0 = local_2b8;
      local_2d8 = lVar5;
      local_2d0 = iVar7;
      uVar4 = FUN_1424c4f70("icudt64l-region",uVar1,"Countries",0);
    }
  }
  uVar6 = 0;
  if (local_2c0 < 1) {
    uVar6 = uVar4;
  }
  FUN_1408550d0(param_3,uVar6);
  if (local_2c0 != 0xf) goto LAB_1412ace75;
  lVar5 = FUN_140855070(param_3,uVar4);
  if (lVar5 == 0) {
    uVar2 = *(ushort *)(param_3 + 8);
    goto LAB_1412ace48;
  }
  local_2c0 = 0;
  iVar7 = 0x1b;
  if ((*(ushort *)(param_3 + 8) & 2) == 0) {
    iVar7 = *(int *)(param_3 + 0x10);
  }
  if (iVar7 < 0) {
LAB_1412ace26:
    local_2c0 = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    local_2bc = 0;
    iVar3 = FUN_1424e8d90(*(undefined8 *)(param_1 + 0x28),local_2b8,0x274,&local_2bc);
    if ((0 < local_2bc) || (local_2bc == -0x7c)) goto LAB_1412ace26;
    if (iVar3 == 0) {
      uVar4 = FUN_142504cc0(lVar5,iVar7,0,&local_2c0);
    }
    else {
      local_2c8 = &local_2c0;
      local_2e8 = local_2b8;
      local_2e0 = local_2b8;
      local_2d8 = lVar5;
      local_2d0 = iVar7;
      uVar4 = FUN_1424c4f70("icudt64l-region",uVar1,"Countries",0);
    }
  }
  uVar6 = 0;
  if (local_2c0 < 1) {
    uVar6 = uVar4;
  }
  FUN_1408550d0(param_3,uVar6);
LAB_1412ace75:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_308);
}



// FUNCTION 1412aceb0 FUN_1412aceb0 body=553 status=ok
// SIG undefined FUN_1412aceb0(void)

void FUN_1412aceb0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [632];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2c0 = 0;
  lVar5 = FUN_140855070(param_3,0x9d);
  uVar2 = *(ushort *)(param_3 + 8);
  if (lVar5 == 0) {
LAB_1412ad088:
    if ((uVar2 & 1) == 0) {
      if ((short)uVar2 < 0) {
        if (*(int *)(param_3 + 0xc) == 0) goto LAB_1412ad0b5;
      }
      else if ((short)uVar2 >> 5 == 0) goto LAB_1412ad0b5;
      *(ushort *)(param_3 + 8) = uVar2 & 0x1f;
    }
    else {
      FUN_1424a8e40(param_3);
    }
    goto LAB_1412ad0b5;
  }
  iVar7 = 0x1b;
  if ((uVar2 & 2) == 0) {
    iVar7 = *(int *)(param_3 + 0x10);
  }
  if (iVar7 < 0) {
LAB_1412acf82:
    local_2c0 = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    local_2bc = 0;
    iVar3 = FUN_1424e8ec0(*(undefined8 *)(param_1 + 0x28),local_2b8,0x274,&local_2bc);
    if ((0 < local_2bc) || (local_2bc == -0x7c)) goto LAB_1412acf82;
    if (iVar3 == 0) {
      uVar4 = FUN_142504cc0(lVar5,iVar7,0,&local_2c0);
    }
    else {
      local_2c8 = &local_2c0;
      local_2e8 = local_2b8;
      local_2e0 = local_2b8;
      local_2d8 = lVar5;
      local_2d0 = iVar7;
      uVar4 = FUN_1424c4f70("icudt64l-lang",uVar1,"Variants",0);
    }
  }
  uVar6 = 0;
  if (local_2c0 < 1) {
    uVar6 = uVar4;
  }
  FUN_1408550d0(param_3,uVar6);
  if (local_2c0 != 0xf) goto LAB_1412ad0b5;
  lVar5 = FUN_140855070(param_3,uVar4);
  if (lVar5 == 0) {
    uVar2 = *(ushort *)(param_3 + 8);
    goto LAB_1412ad088;
  }
  local_2c0 = 0;
  iVar7 = 0x1b;
  if ((*(ushort *)(param_3 + 8) & 2) == 0) {
    iVar7 = *(int *)(param_3 + 0x10);
  }
  if (iVar7 < 0) {
LAB_1412ad066:
    local_2c0 = 1;
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    local_2bc = 0;
    iVar3 = FUN_1424e8ec0(*(undefined8 *)(param_1 + 0x28),local_2b8,0x274,&local_2bc);
    if ((0 < local_2bc) || (local_2bc == -0x7c)) goto LAB_1412ad066;
    if (iVar3 == 0) {
      uVar4 = FUN_142504cc0(lVar5,iVar7,0,&local_2c0);
    }
    else {
      local_2c8 = &local_2c0;
      local_2e8 = local_2b8;
      local_2e0 = local_2b8;
      local_2d8 = lVar5;
      local_2d0 = iVar7;
      uVar4 = FUN_1424c4f70("icudt64l-lang",uVar1,"Variants",0);
    }
  }
  uVar6 = 0;
  if (local_2c0 < 1) {
    uVar6 = uVar4;
  }
  FUN_1408550d0(param_3,uVar6);
LAB_1412ad0b5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_308);
}



// FUNCTION 1412ad0ee FUN_1412ad0ee body=237 status=ok
// SIG undefined FUN_1412ad0ee(void)

void FUN_1412ad0ee(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_1 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_1 < 0x2ab) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14c8442d4) {
    DAT_14c8442d4 = (int)uVar2;
    FUN_1446f8d3c(&DAT_14c8442c8,DAT_14c8442d0,uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1412ad1dc FUN_1412ad1dc body=940 status=ok
// SIG undefined FUN_1412ad1dc(void)

undefined8 * FUN_1412ad1dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  longlong lVar3;
  wchar_t *_Str;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int local_ec;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_FUN_149e17820;
  if (*(int *)(param_2 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_2;
  }
  puVar1 = param_1 + 1;
  local_68 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_60 = 0;
    local_58 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
    FUN_1449b853c(&local_e8,_Str,sVar2 & 0xffffffff,1);
  }
  local_f8 = 0;
  FUN_1412ae150(puVar1,local_60,0,0);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  memset(param_1 + 0x1d,0,0x90);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x37));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x37),4000);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3e),4000);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x45));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x45),4000);
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x54));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x54),4000);
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_14275eb3a();
    FUN_1424a3d10(puVar1,&DAT_14c844a10);
  }
  local_ec = 0;
  lVar3 = FUN_1412ad590(puVar1,0);
  param_1[0x2f] = lVar3;
  if ((lVar3 == 0) || (0 < local_ec)) {
    FUN_14275eb3a();
    lVar3 = FUN_1412ad590(&DAT_14c844a10,0,&local_ec);
    param_1[0x2f] = lVar3;
  }
  FUN_1412ad664(&local_e8,lVar3);
  if (param_1 + 0x31 == &local_e8) {
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x31] != 0) {
      FUN_1400020a8();
    }
    param_1[0x31] = local_e8;
    local_e8 = 0;
    *(undefined4 *)(param_1 + 0x32) = local_e0;
    *(undefined4 *)((longlong)param_1 + 0x194) = local_dc;
  }
  local_ec = 0;
  lVar3 = FUN_1412ad590(puVar1,1);
  param_1[0x30] = lVar3;
  if ((lVar3 == 0) || (0 < local_ec)) {
    FUN_14275eb3a();
    lVar3 = FUN_1412ad590(&DAT_14c844a10,1,&local_ec);
    param_1[0x30] = lVar3;
  }
  FUN_1412ad664(&local_e8,lVar3);
  if (param_1 + 0x33 == &local_e8) {
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x33] != 0) {
      FUN_1400020a8();
    }
    param_1[0x33] = local_e8;
    *(undefined4 *)(param_1 + 0x34) = local_e0;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = local_dc;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ad590 FUN_1412ad590 body=173 status=ok
// SIG undefined FUN_1412ad590(void)

undefined8 * FUN_1412ad590(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((int)param_2 != 0) {
    puVar3 = (undefined8 *)FUN_1424c0a00(param_1,param_2,param_3);
    return puVar3;
  }
  if (*param_3 < 1) {
    local_38 = 0;
    FUN_1424c0c20(param_1,&local_38,param_3);
    lVar2 = local_38;
    if (*param_3 < 1) {
      uVar1 = *(undefined8 *)(local_38 + 0x18);
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x18);
      if (puVar3 != (undefined8 *)0x0) {
        local_30 = puVar3;
        FUN_1424bfa90(puVar3,uVar1);
        puVar3 = local_30;
        if (*(int *)(local_30 + 2) < 1) {
          FUN_142537ca0(lVar2);
          return puVar3;
        }
        (**(code **)*local_30)(local_30,1);
      }
      FUN_142537ca0(lVar2);
      *param_3 = 7;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1412ad640 Unwind@1412ad640 body=36 status=ok
// SIG undefined Unwind@1412ad640(void)

void Unwind_1412ad640(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1412ad664 FUN_1412ad664 body=704 status=ok
// SIG undefined FUN_1412ad664(void)

longlong * FUN_1412ad664(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_378 [44];
  undefined4 local_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_34c = 0;
  plVar4 = (longlong *)FUN_1412ad930(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_34c);
    if (lVar5 != 0) {
      do {
        uVar3 = FUN_1412adb2b(lVar5);
        iVar14 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
          FUN_1412ad9d2(param_1,iVar14);
        }
        *(undefined1 *)(*param_1 + (longlong)iVar14) = uVar3;
        lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_34c);
      } while (lVar5 != 0);
    }
    (**(code **)*plVar4)(plVar4);
    iVar14 = (int)param_1[1];
    if (1 < (longlong)iVar14) {
      lVar5 = *param_1;
      memset(local_338,0,0x2f0);
      local_340 = lVar5 + iVar14 + -1;
      local_348 = lVar5;
      fVar20 = logf((float)iVar14);
      local_338[0] = (int)(longlong)(fVar20 + fVar20);
      plVar4 = &local_348;
      do {
        pbVar6 = (byte *)*plVar4;
        pbVar11 = (byte *)plVar4[1];
        iVar14 = (int)plVar4[2];
        iVar8 = (int)pbVar11 - (int)pbVar6;
        pbVar10 = pbVar11;
        pbVar15 = pbVar6;
        if (iVar14 != 0) {
LAB_1412ad78c:
          if (8 < (int)(iVar8 + 1U)) {
            uVar9 = iVar8 + 1U >> 1;
            bVar13 = pbVar6[uVar9];
            pbVar6[uVar9] = *pbVar6;
            *pbVar6 = bVar13;
            pbVar16 = pbVar11 + 1;
            pbVar7 = pbVar6;
            do {
              pbVar2 = pbVar7 + 1;
              pbVar12 = pbVar7 + 1;
              do {
                pbVar17 = pbVar12;
                pbVar7 = pbVar2;
                if (pbVar11 < pbVar7) break;
                pbVar2 = pbVar7 + 1;
                pbVar12 = pbVar17 + 1;
              } while (*pbVar7 <= *pbVar6);
              pbVar2 = pbVar16 + -2;
              do {
                pbVar12 = pbVar16;
                pbVar18 = pbVar2;
                pbVar16 = pbVar12 + -1;
                if (pbVar16 <= pbVar6) break;
                pbVar2 = pbVar18 + -1;
              } while (*pbVar6 <= *pbVar16);
              if (pbVar16 < pbVar7) goto LAB_1412ad898;
              bVar13 = *pbVar7;
              *pbVar7 = *pbVar16;
              *pbVar16 = bVar13;
            } while( true );
          }
          if (pbVar6 < pbVar11) {
            do {
              pbVar10 = pbVar6;
              if (pbVar6 + 1 <= pbVar11) {
                bVar13 = *pbVar6;
                pbVar15 = pbVar6 + 1;
                do {
                  bVar1 = *pbVar15;
                  bVar19 = bVar13 < bVar1;
                  if (bVar13 <= bVar1) {
                    bVar13 = bVar1;
                  }
                  if (bVar19) {
                    pbVar10 = pbVar15;
                  }
                  pbVar15 = pbVar15 + 1;
                } while (pbVar15 <= pbVar11);
              }
              bVar13 = *pbVar10;
              *pbVar10 = *pbVar11;
              *pbVar11 = bVar13;
              pbVar11 = pbVar11 + -1;
            } while (pbVar6 < pbVar11);
          }
          goto LAB_1412ad7e2;
        }
LAB_1412ad81f:
        FUN_1467d6bf5(pbVar6);
LAB_1412ad7e2:
        plVar4 = plVar4 + -3;
      } while (&local_348 <= plVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_1412ad898:
  bVar13 = *pbVar6;
  *pbVar6 = *pbVar16;
  *pbVar16 = bVar13;
  iVar14 = iVar14 + -1;
  pbVar12 = pbVar12 + -2;
  if ((longlong)pbVar18 - (longlong)pbVar15 < (longlong)pbVar10 - (longlong)pbVar17) {
    if (pbVar7 < pbVar11) {
      *plVar4 = (longlong)pbVar7;
      plVar4[1] = (longlong)pbVar11;
      *(int *)(plVar4 + 2) = iVar14;
      plVar4 = plVar4 + 3;
    }
    pbVar17 = pbVar6;
    if (pbVar16 <= pbVar6 + 1) goto LAB_1412ad7e2;
  }
  else {
    if (pbVar6 + 1 < pbVar16) {
      *plVar4 = (longlong)pbVar6;
      plVar4[1] = (longlong)pbVar12;
      *(int *)(plVar4 + 2) = iVar14;
      plVar4 = plVar4 + 3;
    }
    pbVar6 = pbVar7;
    pbVar12 = pbVar11;
    pbVar18 = pbVar11;
    if (pbVar11 <= pbVar7) goto LAB_1412ad7e2;
  }
  iVar8 = (int)pbVar18 - (int)pbVar17;
  pbVar11 = pbVar12;
  pbVar10 = pbVar18;
  pbVar15 = pbVar17;
  if (iVar14 == 0) goto LAB_1412ad81f;
  goto LAB_1412ad78c;
}



// FUNCTION 1412ad930 FUN_1412ad930 body=124 status=ok
// SIG undefined FUN_1412ad930(void)

undefined8 * FUN_1412ad930(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    if (*(int *)(param_1 + 0x10) < 1) {
      puVar1 = (undefined8 *)thunk_FUN_1424da030(0xa8);
      if (puVar1 == (undefined8 *)0x0) {
        if (*param_2 < 1) {
          *param_2 = 7;
        }
      }
      else {
        FUN_1424c15d0(puVar1,*(undefined8 *)(param_1 + 8),param_2,param_4,puVar1,uVar2);
        if (*param_2 < 1) {
          return puVar1;
        }
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    else {
      *param_2 = *(int *)(param_1 + 0x10);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1412ad9b0 Unwind@1412ad9b0 body=34 status=ok
// SIG undefined Unwind@1412ad9b0(void)

void Unwind_1412ad9b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1412ad9d2 FUN_1412ad9d2 body=345 status=ok
// SIG undefined FUN_1412ad9d2(void)

void FUN_1412ad9d2(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412ada53;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1412ada53:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1412adb2b FUN_1412adb2b body=1367 status=ok
// SIG undefined FUN_1412adb2b(void)

ulonglong FUN_1412adb2b(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong unaff_RDI;
  undefined7 uVar4;
  uint uVar5;
  bool bVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844448) && (FUN_144b3d300(&DAT_14c844448), DAT_14c844448 == -1)) {
    FUN_1412ae0d0(&DAT_14c844408,&DAT_149e177fa);
    atexit((_func_5014 *)&LAB_14275eaf2);
    _Init_thread_footer(&DAT_14c844448);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844490) && (FUN_144b3d300(&DAT_14c844490), DAT_14c844490 == -1)) {
    FUN_1412ae0d0(&DAT_14c844450,&DAT_149e177ff);
    atexit((_func_5014 *)&LAB_14275eafe);
    _Init_thread_footer(&DAT_14c844490);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8444d8) && (FUN_144b3d300(&DAT_14c8444d8), DAT_14c8444d8 == -1)) {
    FUN_1412ae0d0(&DAT_14c844498,&DAT_149e17803);
    atexit((_func_5014 *)&LAB_14275eb0a);
    _Init_thread_footer(&DAT_14c8444d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844520) && (FUN_144b3d300(&DAT_14c844520), DAT_14c844520 == -1)) {
    FUN_1412ae0d0(&DAT_14c8444e0,&DAT_149e17807);
    atexit((_func_5014 *)&LAB_14275eb16);
    _Init_thread_footer(&DAT_14c844520);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844568) && (FUN_144b3d300(&DAT_14c844568), DAT_14c844568 == -1)) {
    FUN_1412ae0d0(&DAT_14c844528,&DAT_149e1780b);
    atexit((_func_5014 *)&LAB_14275eb22);
    _Init_thread_footer(&DAT_14c844568);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8445b0) && (FUN_144b3d300(&DAT_14c8445b0), DAT_14c8445b0 == -1)) {
    FUN_1412ae0d0(&DAT_14c844570,"other");
    atexit((_func_5014 *)&LAB_14275eb2e);
    _Init_thread_footer(&DAT_14c8445b0);
  }
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar5 = (uint)(uVar2 >> 5);
    }
    uVar3 = DAT_14c844414;
    if (-1 < (short)DAT_14c844410) {
      uVar3 = (uint)(DAT_14c844410 >> 5);
    }
    if (((DAT_14c844410 & 1) == 0) && (uVar5 == uVar3)) {
      cVar1 = FUN_1412ae090(param_1,&DAT_14c844408);
      bVar6 = cVar1 != '\0';
      goto LAB_1412adc66;
    }
  }
  else {
    bVar6 = (bool)((byte)DAT_14c844410 & 1);
LAB_1412adc66:
    if (bVar6 != false) {
      unaff_RDI = 0;
      goto LAB_1412adcc9;
    }
    uVar2 = *(ushort *)(param_1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar5 = (uint)(uVar2 >> 5);
    }
    uVar3 = DAT_14c84445c;
    if (-1 < (short)DAT_14c844458) {
      uVar3 = (uint)(DAT_14c844458 >> 5);
    }
    if (((DAT_14c844458 & 1) == 0) && (uVar5 == uVar3)) {
      cVar1 = FUN_1412ae090(param_1,&DAT_14c844450);
      bVar6 = cVar1 != '\0';
      goto LAB_1412adcc2;
    }
  }
  else {
    bVar6 = (bool)((byte)DAT_14c844458 & 1);
LAB_1412adcc2:
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    if (bVar6 != false) goto LAB_1412adcc9;
    uVar2 = *(ushort *)(param_1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar5 = (uint)(uVar2 >> 5);
    }
    uVar3 = DAT_14c8444a4;
    if (-1 < (short)DAT_14c8444a0) {
      uVar3 = (uint)(DAT_14c8444a0 >> 5);
    }
    if (((DAT_14c8444a0 & 1) == 0) && (uVar5 == uVar3)) {
      cVar1 = FUN_1412ae090(param_1,&DAT_14c844498);
      bVar6 = cVar1 != '\0';
      goto LAB_1412add26;
    }
  }
  else {
    bVar6 = (bool)((byte)DAT_14c8444a0 & 1);
LAB_1412add26:
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),2);
    if (bVar6 != false) goto LAB_1412adcc9;
    uVar2 = *(ushort *)(param_1 + 8);
  }
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar5 = (uint)(uVar2 >> 5);
    }
    uVar3 = DAT_14c8444ec;
    if (-1 < (short)DAT_14c8444e8) {
      uVar3 = (uint)(DAT_14c8444e8 >> 5);
    }
    if (((DAT_14c8444e8 & 1) == 0) && (uVar5 == uVar3)) {
      cVar1 = FUN_1412ae090(param_1,&DAT_14c8444e0);
      bVar6 = cVar1 != '\0';
      goto LAB_1412add81;
    }
  }
  else {
    bVar6 = (bool)((byte)DAT_14c8444e8 & 1);
LAB_1412add81:
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),3);
    if (bVar6 != false) goto LAB_1412adcc9;
    uVar2 = *(ushort *)(param_1 + 8);
  }
  uVar4 = (undefined7)(unaff_RDI >> 8);
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar5 = (uint)(uVar2 >> 5);
    }
    uVar3 = DAT_14c844534;
    if (-1 < (short)DAT_14c844530) {
      uVar3 = (uint)(DAT_14c844530 >> 5);
    }
    if (((DAT_14c844530 & 1) == 0) && (uVar5 == uVar3)) {
      cVar1 = FUN_1412ae090(param_1,&DAT_14c844528);
      bVar6 = cVar1 != '\0';
      goto LAB_1412adde0;
    }
  }
  else {
    bVar6 = (bool)((byte)DAT_14c844530 & 1);
LAB_1412adde0:
    if (bVar6 != false) {
      unaff_RDI = CONCAT71(uVar4,4);
      goto LAB_1412adcc9;
    }
    uVar2 = *(ushort *)(param_1 + 8);
  }
  unaff_RDI = CONCAT71(uVar4,5);
  if ((uVar2 & 1) == 0) {
    if ((short)uVar2 < 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    else {
      uVar5 = (uint)(uVar2 >> 5);
    }
    uVar3 = DAT_14c84457c;
    if (-1 < (short)DAT_14c844578) {
      uVar3 = (uint)(DAT_14c844578 >> 5);
    }
    if (((DAT_14c844578 & 1) == 0) && (uVar5 == uVar3)) {
      FUN_1412ae090(param_1,&DAT_14c844570);
    }
  }
LAB_1412adcc9:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1412ae090 FUN_1412ae090 body=61 status=ok
// SIG undefined FUN_1412ae090(void)

undefined8 FUN_1412ae090(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_var;
  void *_Buf1;
  void *_Buf2;
  
  if ((*(ushort *)(param_2 + 8) & 2) == 0) {
    _Buf2 = *(void **)(param_2 + 0x18);
  }
  else {
    _Buf2 = (void *)(param_2 + 10);
  }
  if ((*(ushort *)(param_1 + 8) & 2) == 0) {
    _Buf1 = *(void **)(param_1 + 0x18);
  }
  else {
    _Buf1 = (void *)(param_1 + 10);
  }
  iVar1 = memcmp(_Buf1,_Buf2,(longlong)(param_3 * 2));
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



// FUNCTION 1412ae0d0 FUN_1412ae0d0 body=84 status=ok
// SIG undefined FUN_1412ae0d0(void)

undefined8 * FUN_1412ae0d0(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_1424a9d80(param_1,param_2,sVar1 & 0xffffffff,0);
  }
  return param_1;
}



// FUNCTION 1412ae130 Unwind@1412ae130 body=32 status=ok
// SIG undefined Unwind@1412ae130(void)

void Unwind_1412ae130(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1412ae150 FUN_1412ae150 body=792 status=ok
// SIG undefined FUN_1412ae150(void)

undefined8 *
FUN_1412ae150(undefined8 *param_1,char *param_2,char *param_3,longlong param_4,char *param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  uint uVar12;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_60;
  undefined8 *local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  *param_1 = icu_64::Locale::vftable;
  puVar1 = param_1 + 6;
  param_1[5] = puVar1;
  param_1[0x1a] = 0;
  local_58 = param_1;
  if (((param_2 == (char *)0x0) && (param_3 == (char *)0x0)) && (param_4 == 0)) {
    FUN_1424a3640(param_1,0,0);
    return local_58;
  }
  local_4c[0] = 0;
  if (param_2 == (char *)0x0) {
    sVar4 = 0;
  }
  else {
    sVar4 = strlen(param_2);
    if (0x15555555 < (uint)sVar4) {
      FUN_1424da110(0);
      local_58[0x1a] = 0;
      if ((undefined8 *)local_58[5] != puVar1) {
        FUN_1424da110();
        local_58[5] = puVar1;
      }
      *(undefined1 *)(local_58 + 6) = 0;
      *(undefined1 *)(local_58 + 1) = 0;
      *(undefined1 *)((longlong)local_58 + 0x14) = 0;
      *(undefined1 *)((longlong)local_58 + 0x1a) = 0;
      *(undefined1 *)(local_58 + 0x1b) = 1;
      *(undefined4 *)(local_58 + 4) = 0;
      return local_58;
    }
  }
  local_98 = (longlong)&local_8c + 1;
  local_90 = 0x28;
  local_8c = 0;
  local_60 = 0;
  FUN_142503520(&local_98,param_2,sVar4,local_4c);
  uVar10 = 0;
  uVar12 = 0;
  if (param_3 == (char *)0x0) {
LAB_1412ae27e:
    if (param_4 == 0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6 = (char *)(param_4 + -1);
      do {
        pcVar11 = pcVar6;
        pcVar6 = pcVar11 + 1;
      } while (pcVar11[1] == '_');
      sVar4 = strlen(pcVar6);
      uVar3 = (uint)sVar4;
      if (0x15555555 < uVar3) goto LAB_1412ae3d6;
      uVar7 = sVar4 & 0xffffffff;
      uVar10 = 1;
      if ((int)uVar3 < 1) {
        uVar10 = sVar4 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      do {
        if ((int)uVar7 < 2) goto LAB_1412ae2d8;
        uVar3 = uVar3 - 1;
        pcVar2 = pcVar11 + uVar7;
        uVar7 = uVar7 - 1;
      } while (*pcVar2 == '_');
      uVar10 = (ulonglong)uVar3;
    }
LAB_1412ae2d8:
    if (param_5 == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      sVar4 = strlen(param_5);
      uVar3 = (uint)sVar4;
      if (0x15555555 < uVar3) goto LAB_1412ae3d6;
    }
    iVar9 = (int)uVar10;
    if (iVar9 != 0 || uVar12 != 0) {
      FUN_1425034d0(&local_98,0x5f,local_4c);
    }
    if (uVar12 != 0) {
      FUN_1425038b0(&local_b8,param_3);
      FUN_142503520(&local_98,local_b8,local_b0,local_4c);
    }
    if (iVar9 != 0) {
      uVar5 = FUN_1425034d0(&local_98,0x5f,local_4c);
      FUN_142503520(uVar5,pcVar6,uVar10,local_4c);
    }
    if (uVar3 != 0) {
      pcVar6 = strchr(param_5,0x3d);
      if (pcVar6 == (char *)0x0) {
        FUN_1425034d0(&local_98,0x5f,local_4c);
        if (iVar9 == 0) {
          FUN_1425034d0(&local_98,0x5f,local_4c);
        }
      }
      else {
        FUN_1425034d0(&local_98,0x40,local_4c);
      }
      FUN_1425038b0(&local_a8,param_5);
      FUN_142503520(&local_98,local_a8,local_a0,local_4c);
    }
    if (local_4c[0] < 1) {
      FUN_1424a3640(local_58,local_98,0);
      goto LAB_1412ae42f;
    }
  }
  else {
    sVar4 = strlen(param_3);
    uVar12 = (uint)sVar4;
    if (uVar12 < 0x15555556) goto LAB_1412ae27e;
  }
LAB_1412ae3d6:
  puVar8 = (undefined8 *)local_58[0x1a];
  if (puVar8 != (undefined8 *)local_58[5]) {
    FUN_1424da110();
    puVar8 = (undefined8 *)local_58[5];
  }
  local_58[0x1a] = 0;
  if (puVar8 != puVar1) {
    FUN_1424da110();
    local_58[5] = puVar1;
  }
  *(undefined1 *)(local_58 + 6) = 0;
  *(undefined1 *)(local_58 + 1) = 0;
  *(undefined1 *)((longlong)local_58 + 0x14) = 0;
  *(undefined1 *)((longlong)local_58 + 0x1a) = 0;
  *(undefined1 *)(local_58 + 0x1b) = 1;
  *(undefined4 *)(local_58 + 4) = 0;
LAB_1412ae42f:
  if ((char)local_8c != '\0') {
    FUN_1424da110(local_98);
  }
  return local_58;
}



// FUNCTION 1412ae470 Unwind@1412ae470 body=61 status=ok
// SIG undefined Unwind@1412ae470(void)

void Unwind_1412ae470(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



// FUNCTION 1412ae4b0 Unwind@1412ae4b0 body=61 status=ok
// SIG undefined Unwind@1412ae4b0(void)

void Unwind_1412ae4b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4c) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



// FUNCTION 1412ae4f0 Unwind@1412ae4f0 body=55 status=ok
// SIG undefined Unwind@1412ae4f0(void)

void Unwind_1412ae4f0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x80));
  return;
}



// FUNCTION 1412ae528 FUN_1412ae528 body=164 status=ok
// SIG undefined FUN_1412ae528(void)

void FUN_1412ae528(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_1412ae5cc(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1412ae5cc FUN_1412ae5cc body=398 status=ok
// SIG undefined FUN_1412ae5cc(void)

void FUN_1412ae5cc(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
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



// FUNCTION 1412ae75a FUN_1412ae75a body=20 status=ok
// SIG undefined FUN_1412ae75a(void)

void FUN_1412ae75a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1412ae76e(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 1412ae76e FUN_1412ae76e body=369 status=ok
// SIG undefined FUN_1412ae76e(void)

void FUN_1412ae76e(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,0x38);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar9 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar9) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar9) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = param_3 * 0x38;
    uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar7);
    uVar8 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar8) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar7);
      uVar8 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,local_58,(longlong)param_2 * 0x38);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412ae8e2 FUN_1412ae8e2 body=2050 status=ok
// SIG undefined FUN_1412ae8e2(void)

void FUN_1412ae8e2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  undefined1 *puVar10;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  code *local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong local_298;
  undefined4 local_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  longlong lStack_278;
  undefined1 local_269;
  undefined8 uStack_268;
  undefined **local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined **local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_260 = &PTR_FUN_14b322ee0;
  local_258 = 0;
  local_250 = 0x34002;
  local_180 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f4 = 0;
  uStack_1ec = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a7 = 0;
  uStack_1a0 = 0;
  uStack_19f = 0;
  local_194 = 0;
  uStack_18c = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0x3002;
  local_150 = 0;
  local_118 = 0;
  local_110 = 0x200000000;
  local_108 = 0;
  local_100 = 0x3f800000;
  local_f8 = 0;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0xf00000d0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_8c = 0xbf800000;
  FUN_1405c5fa2();
  local_80 = &DAT_14cb769e8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = &PTR_FUN_14b0394b0;
  local_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_260);
LAB_1412aeb1d:
    pbVar5 = *(byte **)(param_2 + 0x20);
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_260);
      goto LAB_1412aeb1d;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_260);
      goto LAB_1412aeb1d;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_260);
      goto LAB_1412aeb1d;
    }
    local_260 = *(undefined ***)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    pppuVar6 = (undefined ***)0x0;
  }
  pppuVar9 = &local_260;
  if (pppuVar6 != (undefined ***)0x0) {
    pppuVar9 = pppuVar6;
  }
  uStack_268._0_7_ = 0;
  uStack_268._7_1_ = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_268);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_268);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_268);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        uStack_268._0_7_ = (undefined7)uVar2;
        uStack_268._7_1_ = (undefined1)((ulonglong)uVar2 >> 0x38);
        plVar7 = (longlong *)0x0;
        goto LAB_1412aebbe;
      }
      (*pcVar3)(uVar2,param_2,&uStack_268);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  plVar7 = *(longlong **)(param_2 + 0x38);
LAB_1412aebbe:
  plVar8 = &uStack_268;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = plVar7;
  }
  local_269 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_269);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_269);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_269);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_269 = (undefined1)uVar2;
      uStack_268._0_7_ = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_269);
    }
  }
  puVar10 = &local_269;
  if ((undefined1 *)*plVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)*plVar1;
  }
  uStack_288 = 0xffffffff;
  uStack_284 = 0xffffffff;
  uStack_280 = 0;
  lStack_278 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_2b8 = (undefined *)FUN_1446ddbd2();
      local_2b0 = FUN_1403a682c;
      local_2c0 = 0;
      local_2c8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_288);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_288);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_288);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_288 = (undefined4)uVar2;
      uStack_284 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_288);
    }
  }
  local_28c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_2b0 = FUN_1408a629c;
      local_2b8 = &DAT_14c9520b8;
      local_2c0 = 0;
      local_2c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_28c = (undefined4)uVar2;
      uStack_288 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28c);
    }
  }
  uVar4 = local_28c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2a8 = uStack_288;
  uStack_2a4 = uStack_284;
  uStack_2a0 = (undefined4)uStack_280;
  uStack_29c = uStack_280._4_4_;
  local_298 = lStack_278;
  if ((lStack_278 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar4);
  FUN_1412af0e6(pppuVar9,plVar8,puVar10,&local_2a8);
  if ((DAT_14c950c29 == 1) && (*plVar8 != 0)) {
    FUN_1456cec3c();
  }
  FUN_140df0e32(&local_260);
  if ((local_40 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412af0e6 FUN_1412af0e6 body=350 status=ok
// SIG undefined FUN_1412af0e6(void)

void FUN_1412af0e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1412af7d2(param_1 + 8);
  if ((lVar2 != 0) &&
     ((plVar4 = *(longlong **)(param_1 + 0x20), plVar4 != (longlong *)0x0 ||
      ((*(byte *)(param_1 + 0xe0) & 0x80) != 0)))) {
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xf0);
    }
    if (((plVar4 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar4 + 0x180))(), lVar2 != 0)) &&
       (iVar1 = FUN_14490d72a(lVar2), iVar1 != 3)) {
      uVar3 = FUN_14001cc68(0x40,0x10);
      local_68 = *param_4;
      uStack_64 = param_4[1];
      uStack_60 = param_4[2];
      uStack_5c = param_4[3];
      local_58 = *(longlong *)(param_4 + 4);
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_78 = &local_68;
      local_70 = param_2;
      FUN_1412af268(uVar3,param_1,param_5,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412af268 FUN_1412af268 body=168 status=ok
// SIG undefined FUN_1412af268(void)

undefined8 *
FUN_1412af268(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b4140d0;
  param_1[1] = param_4;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 2) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  lVar5 = *(longlong *)(param_5 + 4);
  param_1[4] = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = param_6;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    uVar4 = FUN_1447210f0();
    lVar5 = FUN_1412af310(uVar4);
    if (lVar5 != 0) {
      FUN_1412af52a(lVar5,param_2,(longlong)param_1 + 0x2c,param_3);
      return param_1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return param_1;
}



// FUNCTION 1412af310 FUN_1412af310 body=537 status=ok
// SIG undefined FUN_1412af310(void)

ulonglong FUN_1412af310(ulonglong param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  ulonglong local_138;
  undefined1 local_12c [4];
  ulonglong *local_128;
  ulonglong *puStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = param_1;
  if (param_1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x152);
    if (bVar2 != 1) {
      uVar7 = 0;
      if ((6 < bVar2) || (uVar7 = 0, (0x68U >> (bVar2 & 0x1f) & 1) == 0)) goto LAB_1412af4c2;
    }
    if ((*(byte *)(param_1 + 0x155) & 0x20) == 0) {
      if (DAT_14cb7f9f0 != DAT_14cb7fa1c) {
        uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        puVar9 = &DAT_14cb7fa20;
        if (DAT_14cb7fa28 != (undefined *)0x0) {
          puVar9 = DAT_14cb7fa28;
        }
        iVar5 = *(int *)(puVar9 + (ulonglong)(DAT_14cb7fa30 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        while (iVar5 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb7f9e8 + (longlong)iVar5 * 0x18);
          if (*puVar1 == param_1) {
            if ((puVar1 != (ulonglong *)0x0) && (uVar7 = puVar1[1], puVar1[1] != 0))
            goto LAB_1412af4c2;
            break;
          }
          iVar5 = (int)puVar1[2];
        }
      }
      iVar5 = FUN_14490d72a(param_1);
      if ((iVar5 != 3) && (cVar3 = FUN_144a61b4f(), cVar3 != '\0')) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_88 = 0;
        local_78 = (longlong *)0x0;
        local_98 = 0x4800080101;
        uVar6 = FUN_1458c3b02();
        local_128 = (ulonglong *)0x0;
        puStack_120 = (ulonglong *)0x0;
        local_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0x3ff00000;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e4 = 0x3ff00000;
        uStack_e0 = 0;
        uStack_dc = 0x3ff00000;
        local_d8 = 0x3ff0000000000000;
        uStack_d0 = 0;
        local_140 = FUN_141037e38(param_1,uVar6,&local_128,&local_c8);
        puStack_120 = &local_140;
        local_128 = &local_138;
        FUN_14589108a(local_12c,&local_128);
        uVar7 = local_140;
        if (local_88 != 0) {
          plVar8 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar8 = local_68;
          }
          (**(code **)(*plVar8 + 0x10))();
          uVar7 = local_140;
        }
        goto LAB_1412af4c2;
      }
    }
  }
  uVar7 = 0;
LAB_1412af4c2:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412af52a FUN_1412af52a body=678 status=ok
// SIG undefined FUN_1412af52a(void)

bool FUN_1412af52a(longlong param_1,longlong *param_2,undefined8 *param_3,float param_4)

{
  undefined8 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1412af7d2(param_2 + 1);
  if (lVar5 == 0) goto LAB_1412af6a9;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412af762;
    }
  }
  else {
LAB_1412af762:
    if ((*(int *)(param_1 + 0x478) == 0) && (*(int *)(param_1 + 0x488) == 0)) {
      fVar13 = *(float *)(param_1 + 0x440);
      if (0.0 < fVar13) {
        fVar12 = (float)FUN_1407c3c0a(param_1);
        fVar13 = *(float *)(param_1 + 0x440);
      }
      else {
        fVar12 = 3.4028235e+38;
      }
      if (fVar13 < fVar12) {
        FUN_1412af85e(param_1,&local_68,param_2);
        *param_3 = local_68;
        goto LAB_1412af6a9;
      }
    }
  }
  if (param_4 <= 0.0) {
    fVar13 = 3.4028235e+38;
  }
  else {
    lVar6 = FUN_1447210f0(param_1);
    fVar13 = (float)((double)param_4 + *(double *)(lVar6 + 0x6d0));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x448));
  if (0 < *(int *)(param_1 + 0x498)) {
    lVar6 = 0;
    do {
      lVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x490) + lVar6 * 8) + 8))();
      lVar8 = (**(code **)(*param_2 + 8))(param_2);
      if (lVar7 == lVar8) {
        lVar7 = *(longlong *)(param_1 + 0x490);
        plVar9 = *(longlong **)(lVar7 + lVar6 * 8);
        iVar2 = *(int *)(param_1 + 0x498);
        if (iVar2 + -1 != (int)lVar6) {
          iVar10 = (iVar2 + -1) - (int)lVar6;
          iVar11 = 1;
          if (iVar10 < 1) {
            iVar11 = iVar10;
          }
          memmove((void *)(lVar7 + lVar6 * 8),(void *)(lVar7 + (longlong)(iVar2 - iVar11) * 8),
                  (longlong)iVar11 << 3);
          iVar2 = *(int *)(param_1 + 0x498);
        }
        *(int *)(param_1 + 0x498) = iVar2 + -1;
        if (plVar9 != (longlong *)0x0) goto LAB_1412af635;
        break;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x498));
  }
  plVar9 = (longlong *)(**(code **)(*param_2 + 0x30))(param_2);
LAB_1412af635:
  iVar2 = *(int *)(param_1 + 0x488);
  *(uint *)(param_1 + 0x488) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x48c) < iVar2 + 1U) {
    FUN_145890ff6((longlong *)(param_1 + 0x480),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar2 * 0x18);
  *puVar1 = plVar9;
  *(float *)((longlong)puVar1 + 0xc) = fVar13;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x448));
  (**(code **)(*plVar9 + 0x38))(plVar9,param_2);
  plVar9[0x43] = (longlong)param_3;
LAB_1412af6a9:
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5 != 0;
}



// FUNCTION 1412af7d2 FUN_1412af7d2 body=138 status=ok
// SIG undefined FUN_1412af7d2(void)

longlong FUN_1412af7d2(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb85168 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb85168,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412af85e FUN_1412af85e body=1722 status=ok
// SIG undefined FUN_1412af85e(void)

uint * FUN_1412af85e(longlong param_1,uint *param_2,longlong *param_3)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  LARGE_INTEGER *local_a0;
  code *local_98;
  code *local_90;
  LARGE_INTEGER local_88;
  undefined1 local_80 [8];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = FUN_1412af7d2(param_3 + 1);
  if (lVar5 != 0) {
    if ((((((*(int *)(lVar5 + 0x1c) == 0) || (uVar3 = *(uint *)(lVar5 + 0x18), (int)uVar3 < 0)) ||
          (DAT_14c9647dc <= (int)uVar3)) ||
         ((plVar11 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(lVar5 + 0x1c))))) ||
        ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar11, lVar8 == 0)) {
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        lVar8 = FUN_140007850();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar8 == 0) || (cVar2 == '\0')) {
          if (lVar8 != 0) {
            uVar3 = *(uint *)(lVar8 + 0xc);
            goto LAB_1412af9fc;
          }
          *(undefined8 *)(lVar5 + 0x18) = 0;
        }
        else {
          uVar3 = *(uint *)(lVar8 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
LAB_1412af9fc:
            *(uint *)(lVar5 + 0x18) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            iVar4 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
              }
              LOCK();
              iVar4 = *(int *)(lVar10 + 0x10);
              bVar14 = iVar4 == 0;
              if (bVar14) {
                *(int *)(lVar10 + 0x10) = iVar12;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar4 = iVar12;
              }
            }
            *(int *)(lVar5 + 0x1c) = iVar4;
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_1412af912;
        }
      }
LAB_1412afa44:
      lVar10 = 0;
    }
    else {
LAB_1412af912:
      if (DAT_14c949118 == 0) {
        local_88.QuadPart = (LONGLONG)FUN_140631fbe;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar5;
        FUN_1446f470e(local_80,L"Class",1);
        local_a8 = &LAB_146891e90;
        local_b0 = (code *)&LAB_146273097;
        local_c0 = L"Engine";
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
        local_c8 = 0x20;
        local_d0 = 0x10000000;
        local_d8._0_4_ = 8;
        local_a0 = &local_88;
        FUN_14574b4b2(lVar5);
        DAT_14c949118 = lVar5;
        if (DAT_14c951858 == 0) {
          local_a0 = &local_78;
          local_78.QuadPart = (LONGLONG)FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_1468c5283;
          local_b0 = FUN_142809da0;
          local_b8 = L"Engine";
          local_c0 = (wchar_t *)0x400000000;
          local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
          local_d0 = 8;
          local_d8._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar10 = DAT_14c951858;
        lVar5 = DAT_14c949118;
        uVar9 = FUN_1449e2fb2();
        local_d8 = L"Class";
        FUN_14574b446(uVar9,lVar5,lVar10,L"/Script/CoreUObject");
      }
      if ((((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
          (lVar5 = FUN_140fb6d42(), lVar5 == 0)) ||
         (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_1412afa44;
      lVar10 = 0;
      if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        lVar10 = lVar8;
      }
      if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
        lVar10 = lVar8;
      }
    }
    if (*(char *)(param_1 + 0x178) == '\x03') {
      lVar5 = FUN_1447210f0(param_1);
      plVar11 = (longlong *)(param_1 + 0x3c8);
      iVar4 = *(int *)(param_1 + 0x3d0);
      if (0 < iVar4) {
        dVar1 = *(double *)(lVar5 + 0x6d0);
        lVar5 = 0;
        do {
          lVar8 = *(longlong *)(*plVar11 + lVar5 * 8);
          if (((lVar8 != 0) && (*(char *)(lVar8 + 0x70) == '\x01')) &&
             (*(float *)(lVar8 + 0x6c) <= (float)dVar1)) {
            lVar8 = *(longlong *)(lVar8 + 0x10);
            if (((lVar10 == 0) || (lVar6 = FUN_140fb6d42(), lVar6 == 0)) ||
               (*(int *)(lVar10 + 0x38) < *(int *)(lVar6 + 0x38))) {
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  == lVar6 + 0x30) {
                lVar7 = lVar10;
              }
            }
            if (lVar8 == lVar7) goto LAB_1412afb8f;
            iVar4 = *(int *)(param_1 + 0x3d0);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar4);
      }
      if (((lVar10 == 0) || (lVar5 = FUN_140fb6d42(), lVar5 == 0)) ||
         (*(int *)(lVar10 + 0x38) < *(int *)(lVar5 + 0x38))) {
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar8 = lVar10;
        }
      }
      lVar8 = FUN_14655583a(param_1,lVar8);
      *(undefined1 *)(lVar8 + 0x70) = 1;
      iVar4 = *(int *)(param_1 + 0x400) + 1;
      *(int *)(param_1 + 0x400) = iVar4;
      *(int *)(lVar8 + 0x60) = iVar4;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      iVar4 = *(int *)(param_1 + 0x3d0);
      lVar5 = (longlong)iVar4;
      *(uint *)(param_1 + 0x3d0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x3d4) < iVar4 + 1U) {
        FUN_1407c430e(plVar11,iVar4);
      }
      *(longlong *)(*plVar11 + lVar5 * 8) = lVar8;
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
LAB_1412afb8f:
      lVar5 = *(longlong *)(*plVar11 + lVar5 * 8);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x70) = 0;
        QueryPerformanceCounter(&local_78);
        dVar1 = (double)local_78.QuadPart * DAT_14c83f420;
        (**(code **)(*param_3 + 0x10))(param_3,lVar5);
        QueryPerformanceCounter(&local_78);
        *(float *)(param_1 + 0x440) =
             (float)(((((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) -
                      (dVar1 + 16777216.0)) + 0.0) * 1000.0 + (double)*(float *)(param_1 + 0x440));
        param_2[1] = 0;
        uVar3 = *(uint *)(lVar5 + 0xc);
        *param_2 = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        uVar3 = *(uint *)(lVar5 + 0x10);
        if (*(uint *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          uVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar13);
          }
          LOCK();
          uVar3 = *(uint *)(lVar5 + 0x10);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(lVar5 + 0x10) = uVar13;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar14) {
            uVar3 = uVar13;
          }
        }
        param_2[1] = uVar3;
        goto LAB_1412afc73;
      }
    }
  }
  param_2[0] = 0;
  param_2[1] = 0;
LAB_1412afc73:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412aff1a FUN_1412aff1a body=8794 status=ok
// SIG undefined FUN_1412aff1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412aff1a(double *param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *_Src;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  double *pdVar22;
  undefined1 *puVar23;
  longlong in_RDX;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  double *pdVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  int iVar33;
  float *pfVar34;
  undefined8 *puVar35;
  int iVar36;
  undefined8 *puVar37;
  uint uVar38;
  float *pfVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 (*pauVar42) [16];
  longlong lVar43;
  longlong *plVar44;
  ulonglong uVar45;
  float fVar46;
  float fVar47;
  double dVar56;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar65 [12];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [12];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  double dVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar71;
  double dVar72;
  double dVar79;
  double dVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar81;
  double dVar82;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar83;
  double dVar91;
  undefined1 auVar88 [16];
  double dVar84;
  double dVar92;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar93;
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar102;
  double dVar103;
  undefined1 auVar104 [16];
  double dVar105;
  double dVar106;
  undefined1 auVar107 [12];
  undefined1 auVar108 [16];
  double dVar109;
  double dVar110;
  double dVar111;
  undefined1 auStack_498 [40];
  longlong local_470;
  double local_468;
  ulonglong local_460;
  longlong local_458;
  double local_450;
  undefined1 local_448 [16];
  longlong local_430;
  undefined1 local_428 [8];
  undefined8 uStack_420;
  ulonglong local_410;
  double *local_408;
  longlong local_400;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  longlong local_358;
  char local_344;
  double local_338;
  double dStack_330;
  double local_328;
  longlong lStack_320;
  undefined8 local_318;
  double dStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [8];
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [12];
  undefined4 uStack_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  ulonglong local_1c8;
  ulonglong local_f0;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar70 [12];
  undefined1 auVar78 [12];
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  lVar19 = *(longlong *)((longlong)param_1[0xc] + 0x10);
  local_400 = lVar19;
  bVar11 = FUN_142a2db6a();
  if (6 < bVar11) goto switchD_1412affe5_caseD_1;
  local_448._0_4_ = param_3;
  local_470 = in_RDX;
  switch(bVar11) {
  case 0:
    lVar19 = FUN_146ef142e(&local_400);
    FUN_144b3e890(&local_338);
    local_428._0_4_ = (float)*(double *)(lVar19 + 0x10) * 0.01;
    local_428._4_4_ = uVar15;
    uStack_420._0_4_ = in_XMM1_Dc;
    uStack_420._4_4_ = in_XMM1_Dd;
    fVar46 = -0.2 / (float)local_428._0_4_ + 1.0;
    uVar45 = 4;
    if ((-1.0 < fVar46) && (uVar45 = 0x14, fVar46 < 1.0)) {
      fVar47 = fVar46;
      if (1.0 <= fVar46) {
        fVar47 = 1.0;
      }
      fVar46 = acosf((float)(~-(uint)(fVar46 < -1.0) & (uint)fVar47 |
                            -(uint)(fVar46 < -1.0) & 0xbf800000));
      if (0.0 < fVar46) {
        uVar16 = -((int)ROUND(-0.5 - (3.1415927 / fVar46 + 3.1415927 / fVar46)) >> 1);
        uVar38 = 0x14;
        if ((int)uVar16 < 0x14) {
          uVar38 = uVar16;
        }
        uVar45 = 4;
        if (4 < (int)uVar38) {
          uVar45 = (ulonglong)uVar38;
        }
      }
    }
    uVar38 = (uint)uVar45;
    local_458 = CONCAT44(local_458._4_4_,uVar38 - 1);
    uVar16 = uVar38 - 1 >> 1;
    local_430 = CONCAT44(local_430._4_4_,uVar38 * 2);
    local_468 = (double)CONCAT44(local_468._4_4_,3.1415927 / (float)(int)(uVar16 + 1));
    lVar19 = (longlong)(int)local_318;
    iVar33 = uVar16 * uVar38 + (int)local_318 + 2;
    local_408 = param_1;
    if ((int)(local_318._4_4_ & 0x7fffffff) < iVar33) {
      FUN_1418055da(&lStack_320,&PTR_vftable_14c6e47a0,iVar33);
    }
    local_460 = CONCAT44(local_460._4_4_,uVar16 - 1);
    fVar46 = local_468._0_4_ + -1.5707964;
    local_450 = (double)CONCAT44(local_450._4_4_,fVar46);
    local_318 = (double)CONCAT44(local_318._4_4_,iVar33);
    auVar66 = insertps(ZEXT416((uint)fVar46),_local_428,0x2b);
    auVar61._0_8_ = local_428 ^ 0x8000000080000000;
    auVar61._8_4_ = local_428._8_4_ ^ 0x80000000;
    auVar61._12_4_ = local_428._12_4_ ^ 0x80000000;
    auVar74 = insertps(auVar61,auVar61,0x2b);
    pauVar20 = (undefined1 (*) [16])(lStack_320 + 0x20 + lVar19 * 0x10);
    pauVar20[-2] = auVar74;
    pauVar20[-1] = auVar66;
    uVar26 = 0;
    auVar76._0_12_ = ZEXT812(0x3f800000);
    auVar76._12_4_ = 0;
    auVar78._8_4_ = 0;
    auVar78._0_8_ = auVar76._4_8_;
    auVar55._8_4_ = 0;
    auVar55._0_8_ = SUB128(ZEXT812(0x37cfb4c2),4);
    do {
      fVar47 = (float)(int)uVar26 * local_468._0_4_ + fVar46;
      fVar47 = (float)(longlong)
                      (fVar47 * 0.15915494 +
                      *(float *)(&DAT_14a184448 + (ulonglong)(fVar47 < 0.0) * 4)) * -6.2831855 +
               fVar47;
      auVar65._4_8_ = 0;
      auVar65._0_4_ = fVar47;
      if (fVar47 <= 1.5707964) {
        if (fVar47 < -1.5707964) {
          auVar59 = ZEXT812(0xc0490fdb);
          goto LAB_1412b174c;
        }
        fVar93 = 1.0;
      }
      else {
        auVar59 = ZEXT812(0x40490fdb);
LAB_1412b174c:
        fVar93 = -1.0;
        auVar65._4_4_ = 0;
        auVar65._0_4_ = auVar59._0_4_ - fVar47;
        auVar65._8_4_ = auVar59._8_4_;
      }
      fVar47 = auVar65._0_4_;
      fVar81 = fVar47 * fVar47;
      auVar59._4_8_ = 0;
      auVar59._0_4_ = auVar65._8_4_;
      auVar7._4_8_ = 0;
      auVar7._0_4_ = auVar65._8_4_;
      uVar40 = SUB128(auVar7 << 0x40,4);
      auVar62._0_4_ =
           (((((fVar81 * -2.3889859e-08 + 2.7525562e-06) * fVar81 + -0.00019840874) * fVar81 +
             0.008333331) * fVar81 + -0.16666667) * fVar81 + auVar76._0_4_) * fVar47 *
           local_428._0_4_;
      auVar62._4_8_ = SUB128(auVar59 << 0x40,4);
      auVar62._12_4_ = 0;
      auVar68._0_4_ =
           (((((fVar81 * -2.6051615e-07 + 2.4760495e-05) * fVar81 + -0.0013888378) * fVar81 +
             0.041666638) * fVar81 + -0.5) * fVar81 + 1.0) * fVar93 * local_428._0_4_;
      auVar68._4_8_ = uVar40;
      auVar68._12_4_ = 0;
      auVar70._8_4_ = 0;
      auVar70._0_8_ = uVar40;
      uVar40 = 0;
      pauVar42 = pauVar20;
      do {
        fVar47 = (float)(int)uVar40 * (6.2831855 / (float)(int)uVar38);
        fVar47 = (float)(longlong)
                        (fVar47 * 0.15915494 +
                        *(float *)(&DAT_14a184448 + (ulonglong)(fVar47 < 0.0) * 4)) * -6.2831855 +
                 fVar47;
        auVar107._4_8_ = 0;
        auVar107._0_4_ = fVar47;
        if (fVar47 <= 1.5707964) {
          if (fVar47 < -1.5707964) {
            auVar65 = ZEXT812(0xc0490fdb);
            goto LAB_1412b1855;
          }
          fVar93 = 1.0;
        }
        else {
          auVar65 = ZEXT812(0x40490fdb);
LAB_1412b1855:
          fVar93 = -1.0;
          auVar107._4_4_ = 0;
          auVar107._0_4_ = auVar65._0_4_ - fVar47;
          auVar107._8_4_ = auVar65._8_4_;
        }
        fVar81 = auVar107._0_4_;
        fVar47 = fVar81 * fVar81;
        auVar8._4_8_ = 0;
        auVar8._0_4_ = auVar107._8_4_;
        auVar9._4_8_ = 0;
        auVar9._0_4_ = auVar107._8_4_;
        auVar88._0_4_ =
             (((((fVar47 * -2.3889859e-08 + 2.7525562e-06) * fVar47 + -0.00019840874) * fVar47 +
               0.008333331) * fVar47 + -0.16666667) * fVar47 + 1.0) * fVar81 * auVar68._0_4_;
        auVar88._4_8_ = SUB128(auVar8 << 0x40,4);
        auVar88._12_4_ = 0;
        auVar108._0_4_ =
             (((((fVar47 * -2.6051615e-07 + 2.4760495e-05) * fVar47 + -0.0013888378) * fVar47 +
               0.041666638) * fVar47 + -0.5) * fVar47 + 1.0) * fVar93 * auVar68._0_4_;
        auVar108._4_8_ = SUB128(auVar9 << 0x40,4);
        auVar108._12_4_ = 0;
        auVar66 = insertps(auVar108,auVar88,0x1c);
        auVar66 = insertps(auVar66,auVar62,0x28);
        *pauVar42 = auVar66;
        uVar40 = uVar40 + 1;
        pauVar42 = pauVar42 + 1;
      } while (uVar45 != uVar40);
      uVar26 = uVar26 + 1;
      pauVar20 = pauVar20 + uVar45;
    } while (uVar26 != uVar16);
    lVar19 = (longlong)(int)local_308;
    iVar33 = uVar16 * (int)local_430 + (int)local_308;
    if ((int)(local_308._4_4_ & 0x7fffffff) < iVar33) {
      auVar52._0_8_ = FUN_141805702(&dStack_310,&PTR_vftable_14c6e47a0,iVar33);
      auVar78 = auVar76._4_12_;
      auVar70 = auVar68._4_12_;
      auVar52._8_8_ = extraout_XMM0_Qb;
      auVar55 = auVar52._4_12_;
    }
    lVar19 = lVar19 * 0x10 + (longlong)dStack_310;
    local_308 = (double)CONCAT44(local_308._4_4_,iVar33);
    iVar33 = 2;
    uVar16 = (uint)local_458;
    uVar29 = 0;
    do {
      lVar24 = (longlong)(int)uVar16 * 0x10;
      *(undefined4 *)(lVar19 + lVar24) = 0;
      *(int *)(lVar19 + 4 + lVar24) = iVar33;
      *(uint *)(lVar19 + 8 + lVar24) = uVar16 + 2;
      *(undefined4 *)(lVar19 + 0xc + lVar24) = param_3;
      lVar24 = (longlong)(int)(uVar16 + uVar38) * 0x10;
      *(undefined4 *)(lVar19 + lVar24) = 1;
      *(uint *)(lVar19 + 4 + lVar24) = uVar16 + (int)local_460 * uVar38 + 2;
      *(uint *)(lVar19 + 8 + lVar24) = (int)local_460 * uVar38 + iVar33;
      *(undefined4 *)(lVar19 + 0xc + lVar24) = param_3;
      iVar28 = iVar33 - uVar38;
      iVar33 = iVar33 + 1;
      uVar16 = uVar29;
      uVar29 = uVar29 + 1;
    } while (iVar28 != 1);
    if (3 < (uint)local_458) {
      iVar33 = uVar38 + 2;
      iVar28 = 0;
      iVar12 = 2;
      do {
        iVar13 = iVar28 * uVar38;
        iVar28 = iVar28 + 1;
        uVar16 = (uint)local_458;
        uVar29 = 0;
        do {
          iVar36 = iVar13 + 2 + uVar16;
          lVar24 = (longlong)(int)(iVar28 * (int)local_430 + uVar16 * 2) * 0x10;
          *(int *)(lVar19 + lVar24) = iVar36;
          *(uint *)(lVar19 + 4 + lVar24) = iVar12 + uVar29;
          *(uint *)(lVar19 + 8 + lVar24) = iVar33 + uVar29;
          *(undefined4 *)(lVar19 + 0xc + lVar24) = local_448._0_4_;
          lVar24 = (longlong)(int)(iVar28 * (int)local_430 + uVar16 * 2 + 1) * 0x10;
          *(int *)(lVar19 + lVar24) = iVar36;
          *(uint *)(lVar19 + 4 + lVar24) = iVar33 + uVar29;
          *(uint *)(lVar19 + 8 + lVar24) = uVar16 + iVar28 * uVar38 + 2;
          *(undefined4 *)(lVar19 + 0xc + lVar24) = local_448._0_4_;
          uVar30 = uVar29 + 1;
          uVar16 = uVar29;
          uVar29 = uVar30;
        } while (uVar30 != uVar38);
        iVar33 = iVar33 + uVar38;
        iVar12 = iVar12 + uVar38;
        local_410 = uVar45;
      } while (iVar28 != (int)local_460);
    }
    auVar53._0_4_ = (float)local_408[3];
    auVar53._4_12_ = auVar55;
    auVar63._4_12_ = auVar62._4_12_;
    auVar63._0_4_ = (float)local_408[2];
    auVar69._0_4_ = (float)local_408[1];
    auVar69._4_12_ = auVar70;
    auVar77._0_4_ = (float)*local_408;
    auVar77._4_12_ = auVar78;
    auVar66 = insertps(auVar77,auVar69,0x10);
    auVar66 = insertps(auVar66,auVar63,0x20);
    _local_238 = insertps(auVar66,auVar53,0x30);
    fVar46 = (float)local_408[6];
    local_2b8._4_4_ = (float)local_408[5];
    local_2b8._0_4_ = (float)local_408[4];
    auVar100._0_4_ = (float)local_408[4] * 0.01;
    auVar100._4_4_ = (float)local_408[5] * 0.01;
    auVar100._8_4_ = fVar46 * 0.01;
    auVar100._12_4_ = fVar46 * 0.01;
    FUN_144b45650(fVar46,local_238);
    auVar66 = ZEXT816(0);
    _local_238 = blendps(_local_2b8,auVar66,8);
    auVar5._8_8_ = uStack_2a0;
    auVar5._0_8_ = local_2a8;
    local_228 = blendps(auVar5,auVar66,8);
    local_218 = blendps(auVar66,local_298,7);
    local_208 = blendps(auVar100,_DAT_14c6daca0,8);
    pdVar27 = (double *)&local_398;
    local_288 = auVar100;
    goto LAB_1412b0918;
  case 2:
    lVar24 = 0;
    for (; lVar19 != 0; lVar19 = *(longlong *)(lVar19 + lVar17)) {
      bVar11 = *(byte *)(lVar19 + 0x1c);
      if (bVar11 < 0x41) {
        if (bVar11 != 4) {
          if (bVar11 == 1) {
            lVar24 = lVar19;
          }
          break;
        }
        lVar17 = 0x20;
      }
      else {
        lVar17 = 0x28;
        if (bVar11 != 0x41) {
          if (bVar11 != 0x81) break;
          lVar17 = 0x88;
        }
      }
    }
    FUN_144b3e890(&local_338);
    local_398 = (float)*(double *)(lVar24 + 0x20) * 0.01;
    fStack_394 = (float)*(double *)(lVar24 + 0x28) * 0.01;
    fStack_390 = (float)*(double *)(lVar24 + 0x30) * 0.01;
    fStack_38c = (float)*(double *)(lVar24 + 0x30) * 0.01;
    local_3f8 = (float)*(double *)(lVar24 + 0x38) * 0.01;
    fStack_3f4 = (float)*(double *)(lVar24 + 0x40) * 0.01;
    fStack_3f0 = (float)*(double *)(lVar24 + 0x48) * 0.01;
    fStack_3ec = (float)*(double *)(lVar24 + 0x48) * 0.01;
    if (0.0 < param_4) {
      param_4 = param_4 * 0.01;
      local_3f8 = local_3f8 + param_4;
      fStack_3f4 = fStack_3f4 + param_4;
      fStack_3f0 = fStack_3f0 + param_4;
      fStack_3ec = fStack_3ec + param_4;
      local_398 = local_398 - param_4;
      fStack_394 = fStack_394 - param_4;
      fStack_390 = fStack_390 - param_4;
      fStack_38c = fStack_38c - param_4;
    }
    FUN_1438003f9(&local_398,&local_3f8,param_3,&local_338);
    auVar66 = insertps(ZEXT416((uint)(float)*param_1),ZEXT416((uint)(float)param_1[1]),0x10);
    auVar66 = insertps(auVar66,ZEXT416((uint)(float)param_1[2]),0x20);
    _local_238 = insertps(auVar66,ZEXT416((uint)(float)param_1[3]),0x30);
    fVar46 = (float)param_1[6];
    local_2b8._4_4_ = (float)param_1[5];
    local_2b8._0_4_ = (float)param_1[4];
    auVar98._0_4_ = (float)param_1[4] * 0.01;
    auVar98._4_4_ = (float)param_1[5] * 0.01;
    auVar98._8_4_ = fVar46 * 0.01;
    auVar98._12_4_ = fVar46 * 0.01;
    FUN_144b45650(fVar46,local_238);
    auVar66 = ZEXT816(0);
    _local_238 = blendps(_local_2b8,auVar66,8);
    auVar4._8_8_ = uStack_2a0;
    auVar4._0_8_ = local_2a8;
    local_228 = blendps(auVar4,auVar66,8);
    local_218 = blendps(auVar66,local_298,7);
    local_208 = blendps(auVar98,_DAT_14c6daca0,8);
    pdVar27 = &local_3b8;
    local_288 = auVar98;
LAB_1412b0918:
    pdVar22 = &local_338;
    FUN_144bdea70(local_470,pdVar27,pdVar22,local_238);
LAB_1412b0930:
    FUN_144b3e940(pdVar22);
    break;
  case 3:
    lVar19 = FUN_146ef145a(&local_400);
    FUN_144b3e890(&local_3f8);
    fVar47 = (float)*(double *)(lVar19 + 0x10);
    fVar46 = (float)(*(double *)(lVar19 + 0x50) * 0.5) + fVar47;
    FUN_147e4384e(&local_398,local_448._0_4_);
    uVar15 = local_448._0_4_;
    if (local_344 == '\0') {
      local_344 = '\x02';
      uVar15 = FUN_147e43936();
    }
    local_238._0_8_ = CONCAT44(fVar47 * 0.01,fVar47 * 0.01) & 0x7fffffff7fffffff;
    local_238._8_4_ = ABS(fVar46 * 0.01);
    uStack_22c = ABS(fVar46 * 0.01);
    _local_2b8 = _local_238 | _DAT_149e1ee40;
    puVar23 = local_2b8;
    uVar15 = FUN_1438003f9(puVar23,local_238,uVar15,&local_3f8);
    auVar66 = _DAT_149934d80;
    dVar97 = *(double *)(lVar19 + 0x38);
    dVar92 = *(double *)(lVar19 + 0x40);
    dVar102 = *(double *)(lVar19 + 0x48);
    dVar103 = DAT_14c8462d0 * dVar102 + DAT_14c8462c0 * dVar97 + DAT_14c8462c8 * dVar92 + 1.0;
    dVar80 = dVar97;
    dVar72 = dVar102;
    dVar56 = dVar92;
    if (dVar103 < 9.999999974752427e-07) {
      if ((ABS(DAT_14c8462c0) <= ABS(DAT_14c8462c8)) || (ABS(DAT_14c8462c0) <= ABS(DAT_14c8462d0)))
      {
        dVar103 = 0.0;
        dVar80 = -DAT_14c8463a0;
        dVar72 = -DAT_14c8463b0;
        dVar56 = -DAT_14c8463a8;
      }
      else {
        dVar103 = 0.0;
        dVar80 = DAT_14c846388;
        dVar72 = DAT_14c846398;
        dVar56 = DAT_14c846390;
      }
    }
    dVar58 = DAT_14c8462c0 * dVar56 - dVar80 * DAT_14c8462c8;
    dVar80 = DAT_14c8462d0 * dVar80 - dVar72 * DAT_14c8462c0;
    dVar72 = DAT_14c8462c8 * dVar72 - dVar56 * DAT_14c8462d0;
    dVar56 = dVar58 * dVar58 + dVar72 * dVar72;
    dVar57 = dVar103 * dVar103 + dVar80 * dVar80;
    auVar73._0_8_ = dVar56 + dVar57;
    auVar73._8_8_ = dVar56 + dVar57;
    auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar73._8_8_);
    auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar73._0_8_);
    auVar74 = sqrtpd(auVar73,auVar73);
    auVar74 = divpd(_DAT_149934d80,auVar74);
    auVar99._0_8_ = auVar74._0_8_ * dVar58;
    auVar99._8_8_ = auVar74._8_8_ * dVar103;
    auVar75 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar99,auVar48);
    dVar72 = (double)((ulonglong)(dVar72 * auVar74._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar73._0_8_));
    dVar56 = (double)((ulonglong)(dVar80 * auVar74._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar73._8_8_));
    dVar103 = *(double *)(lVar19 + 0x50) * 0.5;
    dVar80 = dVar103 * dVar102 + *(double *)(lVar19 + 0x30);
    dVar64 = dVar92 * dVar103 + *(double *)(lVar19 + 0x28);
    dVar103 = dVar97 * dVar103 + *(double *)(lVar19 + 0x20);
    auVar74 = *(undefined1 (*) [16])(param_1 + 8);
    dVar97 = auVar74._0_8_;
    dVar102 = auVar74._8_8_;
    auVar85 = *(undefined1 (*) [16])(param_1 + 10);
    dVar92 = auVar85._0_8_;
    auVar86 = minpd(_DAT_149934d80,auVar74);
    auVar95 = minpd(ZEXT816(0x3ff0000000000000),auVar85);
    auVar87._8_8_ = -(ulonglong)(auVar86._8_8_ < 0.0);
    auVar87._0_8_ = -(ulonglong)(auVar86._0_8_ < 0.0);
    iVar33 = movmskpd(uVar15,auVar87);
    auVar96._8_8_ = -(ulonglong)(auVar95._8_8_ < 0.0);
    auVar96._0_8_ = -(ulonglong)(auVar95._0_8_ < 0.0);
    uVar38 = movmskpd((int)puVar23,auVar96);
    dVar57 = auVar75._0_8_;
    dVar58 = auVar75._8_8_;
    if ((uVar38 & 0x3fffffff) == 0 && iVar33 == 0) {
      dVar109 = *param_1;
      dVar110 = param_1[1];
      dVar111 = param_1[2];
      dVar106 = param_1[3];
      dVar84 = param_1[3];
      dVar82 = param_1[3];
      dVar94 = param_1[1];
      dVar105 = param_1[1];
      dVar71 = param_1[2];
      dVar79 = param_1[2];
      dVar83 = dVar56 * dVar71 * -1.0 + dVar57 * dVar94 + dVar58 * *param_1 * 1.0 + dVar72 * dVar84;
      dVar91 = dVar72 * dVar79 * 1.0 + dVar58 * dVar105 + dVar57 * *param_1 * -1.0 + dVar56 * dVar82
      ;
      dVar94 = dVar58 * dVar71 * 1.0 +
               ((*param_1 * dVar56 * 1.0 + dVar57 * dVar84) - dVar72 * dVar94);
      dVar58 = dVar57 * dVar79 * -1.0 +
               ((*param_1 * dVar72 * -1.0 + dVar58 * dVar82) - dVar56 * dVar105);
      dVar97 = dVar97 * dVar103;
      dVar102 = dVar102 * dVar64;
      dVar80 = dVar80 * dVar92;
      dVar72 = auVar85._8_8_ * 0.0;
      dVar92 = dVar102 * dVar109 - dVar97 * dVar110;
      dVar56 = dVar80 * dVar110 - dVar102 * dVar111;
      dVar57 = dVar97 * dVar111 - dVar80 * dVar109;
      dVar103 = dVar72 * dVar106 - dVar72 * dVar106;
      dVar56 = dVar56 + dVar56;
      dVar57 = dVar57 + dVar57;
      dVar92 = dVar92 + dVar92;
      dVar103 = dVar103 + dVar103;
      local_1d8 = (dVar92 * dVar110 - dVar111 * dVar57) + dVar84 * dVar56 + dVar97 + param_1[4];
      dStack_1d0 = (dVar56 * dVar111 - dVar92 * dVar109) + dVar82 * dVar57 + dVar102 + param_1[5];
      auVar51._0_8_ = (dVar57 * dVar109 - dVar110 * dVar56) + dVar84 * dVar92 + dVar80 + param_1[6];
      auVar51._8_8_ =
           (dVar103 * dVar106 - dVar103 * dVar106) + dVar82 * dVar103 + dVar72 + param_1[7];
    }
    else {
      dVar94 = *param_1;
      dVar105 = param_1[1];
      dVar71 = param_1[2];
      dVar79 = dVar105 + dVar105;
      dVar109 = dVar71 + dVar71;
      dVar106 = dVar94 * (dVar94 + dVar94);
      dVar84 = (DAT_149934d80._8_8_ - (dVar71 * dVar109 + dVar106)) * dVar102;
      dVar82 = param_1[3];
      dVar110 = dVar109 * dVar82;
      dVar111 = (dVar94 + dVar94) * param_1[3];
      dVar82 = dVar79 * dVar82;
      dStack_270 = (dVar109 * dVar105 - dVar111) * dVar92;
      local_278 = (dVar82 + *param_1 * dVar109) * dVar92;
      dStack_2b0 = (dVar79 * dVar94 + dVar110) * dVar97;
      local_2b8 = (undefined1  [8])
                  (((double)DAT_149934d80 - (dVar71 * dVar109 + dVar105 * dVar79)) * dVar97);
      local_268 = (1.0 - (dVar106 + dVar105 * dVar79)) * dVar92;
      local_2a8 = (*param_1 * dVar109 - dVar82) * dVar97;
      uStack_2a0 = 0;
      local_298._8_4_ = SUB84(dVar84,0);
      local_298._0_8_ = (dVar79 * dVar94 - dVar110) * dVar102;
      local_298._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
      local_288._8_8_ = 0;
      local_288._0_8_ = (dVar109 * dVar105 + dVar111) * dVar102;
      uStack_260 = 0;
      local_258 = param_1[4];
      dStack_250 = param_1[5];
      local_248 = param_1[6];
      uStack_240 = 0x3ff0000000000000;
      dVar82 = dVar56 + dVar56;
      dVar102 = dVar57 + dVar57;
      dVar97 = dVar72 * (dVar72 + dVar72);
      local_338 = (double)DAT_149934d80 - (dVar57 * dVar102 + dVar56 * dVar82);
      dStack_310 = DAT_149934d80._8_8_ - (dVar57 * dVar102 + dVar97);
      local_2e8 = 1.0 - (dVar97 + dVar56 * dVar82);
      dVar97 = (dVar72 + dVar72) * dVar58;
      dStack_330 = dVar82 * dVar72 + dVar102 * dVar58;
      local_308 = dVar102 * dVar56 + dVar97;
      local_318 = dVar82 * dVar72 - dVar102 * dVar58;
      dVar97 = dVar102 * dVar56 - dVar97;
      local_328 = dVar72 * dVar102 - dVar82 * dVar58;
      lStack_320 = 0;
      uStack_300 = 0;
      local_2f8._8_4_ = SUB84(dVar97,0);
      local_2f8._0_8_ = dVar82 * dVar58 + dVar72 * dVar102;
      local_2f8._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
      uStack_2e0 = 0;
      uStack_2c0 = 0x3ff0000000000000;
      _local_428 = auVar74;
      local_2d8 = dVar103;
      dStack_2d0 = dVar64;
      local_2c8 = dVar80;
      FUN_1447fea8d(local_238);
      local_468 = (double)local_228._0_8_;
      dVar102 = (double)local_228._0_8_ * (double)local_228._0_8_ +
                (double)local_238._0_8_ * (double)local_238._0_8_ +
                stack0xfffffffffffffdd0 * stack0xfffffffffffffdd0;
      dVar80 = (double)local_208._0_8_ * (double)local_208._0_8_ +
               (double)local_218._0_8_ * (double)local_218._0_8_ +
               (double)local_218._8_8_ * (double)local_218._8_8_;
      local_450 = local_1e8;
      dVar97 = local_1e8 * local_1e8 + local_1f8 * local_1f8 + local_1f0 * local_1f0;
      uVar45 = -(ulonglong)(0.0 <= dVar102 + -9.99999993922529e-09);
      dVar103 = (double)(~uVar45 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar102)) & uVar45);
      uVar45 = -(ulonglong)(0.0 <= dVar80 + -9.99999993922529e-09);
      dVar102 = (double)(~uVar45 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar80)) & uVar45);
      uVar45 = -(ulonglong)(0.0 <= dVar97 + -9.99999993922529e-09);
      dVar80 = (double)(~uVar45 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar97)) & uVar45);
      auVar49._8_8_ = -(ulonglong)(0.0 <= uStack_420);
      auVar49._0_8_ = -(ulonglong)(0.0 <= (double)local_428);
      auVar74 = blendvpd(_DAT_149936790,auVar66,auVar49);
      dVar97 = (double)(~-(ulonglong)(0.0 <= dVar92) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= dVar92) & 0x3ff0000000000000);
      dVar92 = auVar74._0_8_;
      stack0xfffffffffffffdd0 = stack0xfffffffffffffdd0 * dVar103 * dVar92;
      local_238._0_8_ = (double)local_238._0_8_ * dVar103 * dVar92;
      local_228._0_8_ = dVar103 * (double)local_228._0_8_ * dVar92;
      dVar92 = auVar74._8_8_;
      local_218._8_8_ = (double)local_218._8_8_ * dVar102 * dVar92;
      local_218._0_8_ = dVar92 * (double)local_218._0_8_ * dVar102;
      local_208._0_8_ = dVar102 * (double)local_208._0_8_ * dVar92;
      local_1e8 = dVar80 * local_1e8 * dVar97;
      local_1f0 = local_1f0 * dVar80 * dVar97;
      local_1f8 = dVar97 * local_1f8 * dVar80;
      local_448 = auVar85;
      FUN_14481fd10(&local_3b8,local_238);
      auVar60._0_8_ = local_3b8 * local_3b8;
      auVar60._8_8_ = dStack_3b0 * dStack_3b0;
      dVar97 = local_3a8 * local_3a8 + auVar60._0_8_;
      dVar92 = dStack_3a0 * dStack_3a0 + auVar60._8_8_;
      auVar67._0_8_ = dVar97 + dVar92;
      auVar67._8_8_ = dVar97 + dVar92;
      auVar74 = sqrtpd(auVar60,auVar67);
      auVar66 = divpd(auVar66,auVar74);
      auVar104._0_8_ = auVar66._0_8_ * local_3a8;
      auVar104._8_8_ = auVar66._8_8_ * dStack_3a0;
      dVar83 = (double)((ulonglong)(local_3b8 * auVar66._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_));
      dVar91 = (double)((ulonglong)(dStack_3b0 * auVar66._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_));
      auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
      auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
      auVar66 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar104,auVar50);
      dVar94 = auVar66._0_8_;
      dVar58 = auVar66._8_8_;
      auVar51._8_8_ = 0.0;
      auVar51._0_8_ = (double)local_1c8;
    }
    auVar89._8_8_ = dVar91;
    auVar89._0_8_ = dVar91;
    auVar90._4_12_ = auVar89._4_12_;
    auVar90._0_4_ = (float)dVar91;
    auVar66 = insertps(ZEXT416((uint)(float)dVar83),auVar90,0x10);
    auVar66 = insertps(auVar66,ZEXT416((uint)(float)dVar94),0x20);
    _local_238 = insertps(auVar66,ZEXT416((uint)(float)dVar58),0x30);
    auVar54._4_12_ = auVar51._4_12_;
    auVar54._0_4_ = (float)auVar51._0_8_;
    local_2b8._4_4_ = (float)dStack_1d0;
    local_2b8._0_4_ = (float)local_1d8;
    auVar101._0_4_ = (float)local_1d8 * 0.01;
    auVar101._4_4_ = (float)dStack_1d0 * 0.01;
    auVar101._8_4_ = auVar54._0_4_ * 0.01;
    auVar101._12_4_ = auVar54._0_4_ * 0.01;
    FUN_144b45650(auVar54._0_8_,local_238);
    auVar66 = ZEXT816(0);
    _local_238 = blendps(_local_2b8,auVar66,8);
    auVar6._8_8_ = uStack_2a0;
    auVar6._0_8_ = local_2a8;
    local_228 = blendps(auVar6,auVar66,8);
    local_218 = blendps(auVar66,local_298,7);
    local_208 = blendps(auVar101,_DAT_14c6daca0,8);
    local_288 = auVar101;
    FUN_144bdea70(local_470,&local_338,&local_3f8,local_238);
    if (local_358 != 0) {
      FUN_1400020a8();
    }
    pdVar22 = (double *)&local_3f8;
    goto LAB_1412b0930;
  case 4:
    if (*(char *)(lVar19 + 0x1c) < '\0') {
      dVar97 = *(double *)(lVar19 + 0x20);
      dVar92 = *(double *)(lVar19 + 0x28);
      dVar102 = *(double *)(lVar19 + 0x30);
      puVar35 = &DAT_14c846400;
      puVar37 = (undefined8 *)local_238;
      for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar37 = *puVar35;
        puVar35 = puVar35 + 1;
        puVar37 = puVar37 + 1;
      }
      local_238._0_8_ = dVar97;
      local_218._8_8_ = dVar92;
      dVar103 = *param_1;
      dVar80 = param_1[1];
      dVar72 = param_1[2];
      dVar56 = dVar80 + dVar80;
      dVar57 = dVar72 + dVar72;
      dVar82 = dVar103 * (dVar103 + dVar103);
      local_268 = 1.0 - (dVar82 + dVar80 * dVar56);
      local_2a8 = param_1[3];
      dVar58 = dVar57 * local_2a8;
      dVar64 = (dVar103 + dVar103) * param_1[3];
      local_2a8 = dVar56 * local_2a8;
      local_278 = local_2a8 + *param_1 * dVar57;
      dStack_270 = dVar57 * dVar80 - dVar64;
      local_2a8 = *param_1 * dVar57 - local_2a8;
      dStack_2b0 = dVar56 * dVar103 + dVar58;
      local_2b8 = (undefined1  [8])(1.0 - (dVar72 * dVar57 + dVar80 * dVar56));
      uStack_2a0 = 0;
      local_298._8_8_ = 1.0 - (dVar72 * dVar57 + dVar82);
      local_298._0_8_ = dVar56 * dVar103 - dVar58;
      local_288._8_8_ = 0;
      local_288._0_8_ = dVar57 * dVar80 + dVar64;
      uStack_260 = 0;
      local_258 = param_1[4];
      dStack_250 = param_1[5];
      local_248 = param_1[6];
      uStack_240 = 0x3ff0000000000000;
      local_1e8 = dVar102;
      FUN_1447fea8d(&local_338);
      lVar24 = *(longlong *)(lVar19 + 0x88);
      uVar38 = *(uint *)(lVar24 + 0x38);
      iVar33 = *(int *)(local_470 + 0x20);
      iVar28 = iVar33 + uVar38;
      if ((int)(*(uint *)(local_470 + 0x24) & 0x7fffffff) < iVar28) {
        FUN_1418055da(local_470 + 0x18,&PTR_vftable_14c6e47a0,iVar28);
      }
      pfVar34 = (float *)((longlong)iVar33 * 0x10 + *(longlong *)(local_470 + 0x18));
      *(int *)(local_470 + 0x20) = iVar28;
      if (0 < (int)uVar38) {
        lVar17 = 0;
        do {
          lVar43 = *(longlong *)(lVar24 + 0x30);
          dVar103 = (double)*(float *)(lVar43 + 8 + lVar17);
          dVar80 = (double)*(float *)(lVar43 + 4 + lVar17);
          dVar72 = (double)*(float *)(lVar43 + lVar17);
          dVar56 = dVar72 * local_328 + dVar80 * local_308 + dVar103 * local_2e8 + local_2c8;
          *pfVar34 = (float)(dVar103 * (double)local_2f8._0_8_ +
                             dVar80 * local_318 + dVar72 * local_338 + local_2d8) * 0.01;
          pfVar34[1] = (float)(dVar103 * (double)local_2f8._8_8_ +
                               dVar80 * dStack_310 + dVar72 * dStack_330 + dStack_2d0) * 0.01;
          pfVar34[2] = (float)dVar56 * 0.01;
          pfVar34[3] = (float)dVar56 * 0.01;
          lVar17 = lVar17 + 0xc;
          pfVar34 = pfVar34 + 4;
        } while ((ulonglong)uVar38 * 0xc != lVar17);
      }
      FUN_147e43c98(local_238,*(longlong *)(lVar19 + 0x88) + 0x30);
      lVar19 = local_470 + 0x28;
      iVar28 = *(int *)(local_470 + 0x30) + local_238._8_4_;
      if ((int)(*(uint *)(local_470 + 0x34) & 0x7fffffff) < iVar28) {
        FUN_141805828(lVar19,&PTR_vftable_14c6e47a0,iVar28);
      }
      if (local_238._8_4_ != 0) {
        dVar97 = (double)(-(ulonglong)(0.0 < dVar92) & 0x3ff0000000000000 |
                         ~-(ulonglong)(0.0 < dVar92) &
                         (ulonglong)((uint)(-(ulonglong)(dVar92 < 0.0) >> 0x20) & 0xbff00000) <<
                         0x20) *
                 (double)(-(ulonglong)(0.0 < dVar97) & 0x3ff0000000000000 |
                         ~-(ulonglong)(0.0 < dVar97) &
                         -(ulonglong)(dVar97 < 0.0) & 0xbff0000000000000) *
                 (double)(-(ulonglong)(0.0 < dVar102) & 0x3ff0000000000000 |
                         ~-(ulonglong)(0.0 < dVar102) &
                         -(ulonglong)(dVar102 < 0.0) & 0xbff0000000000000);
        lVar24 = (longlong)(int)local_238._8_4_ * 0xc;
        piVar31 = (int *)local_238._0_8_;
        lVar17 = local_470;
        do {
          iVar12 = *(int *)(lVar17 + 0x30);
          iVar28 = iVar12 + 1;
          if ((int)(*(uint *)(lVar17 + 0x34) & 0x7fffffff) <= iVar12) {
            FUN_141805702(lVar19,&PTR_vftable_14c6e47a0,iVar28);
            iVar12 = *(int *)(local_470 + 0x30);
            lVar17 = local_470;
          }
          lVar43 = *(longlong *)(lVar17 + 0x28);
          lVar18 = (longlong)iVar12 * 0x10;
          *(int *)(lVar17 + 0x30) = iVar28;
          iVar28 = piVar31[(ulonglong)(0.0 <= dVar97) + 1];
          iVar12 = piVar31[(ulonglong)(dVar97 < 0.0) + 1];
          *(int *)(lVar43 + lVar18) = *piVar31 + iVar33;
          *(int *)(lVar43 + 4 + lVar18) = iVar12 + iVar33;
          *(int *)(lVar43 + 8 + lVar18) = iVar28 + iVar33;
          *(undefined4 *)(lVar43 + 0xc + lVar18) = local_448._0_4_;
          piVar31 = piVar31 + 3;
          lVar24 = lVar24 + -0xc;
        } while (lVar24 != 0);
      }
    }
    else {
      dVar103 = *param_1;
      dVar80 = param_1[1];
      dVar72 = param_1[2];
      dVar56 = param_1[4];
      dVar57 = param_1[5];
      dVar58 = param_1[6];
      dVar97 = *param_1;
      dVar102 = param_1[3];
      dVar92 = param_1[3];
      lVar24 = *(longlong *)(lVar19 + 0x28);
      uVar38 = *(uint *)(lVar24 + 0x38);
      iVar33 = *(int *)(in_RDX + 0x20);
      iVar28 = iVar33 + uVar38;
      if ((int)(*(uint *)(in_RDX + 0x24) & 0x7fffffff) < iVar28) {
        FUN_1418055da(in_RDX + 0x18,&PTR_vftable_14c6e47a0,iVar28);
      }
      pfVar34 = (float *)((longlong)iVar33 * 0x10 + *(longlong *)(local_470 + 0x18));
      *(int *)(local_470 + 0x20) = iVar28;
      if (0 < (int)uVar38) {
        dVar64 = dVar80 + dVar80;
        dVar82 = dVar72 + dVar72;
        dVar94 = dVar103 * (dVar103 + dVar103);
        dVar84 = dVar82 * dVar102;
        dVar92 = (dVar103 + dVar103) * dVar92;
        dVar102 = dVar64 * dVar102;
        lVar17 = 0;
        do {
          lVar43 = *(longlong *)(lVar24 + 0x30);
          dVar79 = (double)*(float *)(lVar43 + 8 + lVar17);
          dVar105 = (double)*(float *)(lVar43 + 4 + lVar17);
          dVar109 = (double)*(float *)(lVar43 + lVar17);
          dVar71 = dVar105 * (dVar82 * dVar80 + dVar92) + dVar109 * (dVar97 * dVar82 - dVar102) +
                   dVar79 * (1.0 - (dVar94 + dVar80 * dVar64)) + dVar58;
          *pfVar34 = (float)(dVar79 * (dVar102 + dVar97 * dVar82) +
                             dVar105 * (dVar64 * dVar103 - dVar84) +
                             dVar109 * (1.0 - (dVar72 * dVar82 + dVar80 * dVar64)) + dVar56) * 0.01;
          pfVar34[1] = (float)(dVar79 * (dVar82 * dVar80 - dVar92) +
                               dVar105 * (1.0 - (dVar72 * dVar82 + dVar94)) +
                               dVar109 * (dVar64 * dVar103 + dVar84) + dVar57) * 0.01;
          pfVar34[2] = (float)dVar71 * 0.01;
          pfVar34[3] = (float)dVar71 * 0.01;
          lVar17 = lVar17 + 0xc;
          pfVar34 = pfVar34 + 4;
        } while ((ulonglong)uVar38 * 0xc != lVar17);
      }
      FUN_147e43c98(local_238,*(longlong *)(lVar19 + 0x28) + 0x30);
      lVar19 = local_470 + 0x28;
      iVar28 = *(int *)(local_470 + 0x30) + local_238._8_4_;
      if ((int)(*(uint *)(local_470 + 0x34) & 0x7fffffff) < iVar28) {
        FUN_141805828(lVar19,&PTR_vftable_14c6e47a0,iVar28);
      }
      if (local_238._8_4_ != 0) {
        uVar10 = local_238._0_8_;
        lVar17 = (longlong)(int)local_238._8_4_;
        lVar43 = 0;
        lVar24 = local_470;
        do {
          iVar12 = *(int *)(lVar24 + 0x30);
          iVar28 = iVar12 + 1;
          if ((int)(*(uint *)(lVar24 + 0x34) & 0x7fffffff) <= iVar12) {
            FUN_141805702(lVar19,&PTR_vftable_14c6e47a0,iVar28);
            iVar12 = *(int *)(local_470 + 0x30);
            lVar24 = local_470;
          }
          lVar18 = *(longlong *)(lVar24 + 0x28);
          lVar21 = (longlong)iVar12 * 0x10;
          *(int *)(lVar24 + 0x30) = iVar28;
          iVar28 = *(int *)(uVar10 + 8 + lVar43);
          iVar12 = *(int *)(uVar10 + 4 + lVar43);
          *(int *)(lVar18 + lVar21) = *(int *)(uVar10 + lVar43) + iVar33;
          *(int *)(lVar18 + 4 + lVar21) = iVar12 + iVar33;
          *(int *)(lVar18 + 8 + lVar21) = iVar28 + iVar33;
          *(undefined4 *)(lVar18 + 0xc + lVar21) = local_448._0_4_;
          lVar43 = lVar43 + 0xc;
        } while (lVar17 * 0xc != lVar43);
      }
    }
    FUN_14062bdec(local_238);
    break;
  case 5:
    if (*(char *)(lVar19 + 0x1c) < '\0') {
      plVar44 = (longlong *)(*(longlong *)((longlong)param_1[0xc] + 0x10) + 0x88);
    }
    else {
      plVar44 = (longlong *)(lVar19 + 0x28);
    }
    lVar19 = *plVar44;
    dVar80 = *param_1;
    dVar72 = param_1[1];
    dVar56 = param_1[2];
    dVar57 = param_1[4];
    dVar58 = param_1[5];
    dVar64 = param_1[6];
    dVar82 = param_1[8];
    dVar84 = param_1[9];
    dVar94 = param_1[10];
    dVar105 = param_1[0xb];
    dVar92 = *param_1;
    dVar97 = *param_1;
    dVar102 = param_1[3];
    dVar103 = param_1[3];
    uVar38 = *(uint *)(lVar19 + 0x50);
    iVar33 = *(int *)(in_RDX + 0x20);
    if ((int)(*(uint *)(in_RDX + 0x24) & 0x7fffffff) < (int)(iVar33 + uVar38)) {
      FUN_1418055da();
    }
    pfVar34 = (float *)((longlong)iVar33 * 0x10 + *(longlong *)(local_470 + 0x18));
    *(uint *)(local_470 + 0x20) = iVar33 + uVar38;
    if (0 < (int)uVar38) {
      dVar71 = dVar80 + dVar80;
      dVar79 = dVar72 + dVar72;
      dVar109 = dVar56 + dVar56;
      dVar110 = dVar109 * dVar102;
      dVar111 = dVar71 * dVar103;
      dVar102 = dVar79 * dVar102;
      auVar86._0_8_ = (dVar79 * dVar80 - dVar110) * dVar84;
      auVar86._8_8_ = (dVar109 * dVar72 - dVar111) * dVar94;
      auVar75._0_8_ = (dVar102 + dVar92 * dVar109) * dVar94;
      auVar75._8_8_ = (dVar71 * dVar103 + dVar97 * dVar71) * dVar105;
      auVar66 = blendpd(auVar75,auVar86,2);
      lVar24 = 0;
      do {
        lVar17 = *(longlong *)(lVar19 + 0x48);
        dVar105 = (double)*(float *)(lVar17 + 8 + lVar24);
        dVar97 = (double)*(float *)(lVar17 + 4 + lVar24);
        dVar106 = (double)*(float *)(lVar17 + lVar24);
        dVar103 = dVar97 * (dVar109 * dVar72 + dVar111) * dVar84 +
                  dVar106 * (dVar92 * dVar109 - dVar102) * dVar82 +
                  dVar105 * (1.0 - (dVar80 * dVar71 + dVar72 * dVar79)) * dVar94 + dVar64;
        *pfVar34 = (float)(dVar105 * auVar66._0_8_ +
                           dVar97 * auVar86._0_8_ +
                           dVar106 * (1.0 - (dVar56 * dVar109 + dVar72 * dVar79)) * dVar82 + dVar57)
                   * 0.01;
        pfVar34[1] = (float)(dVar105 * auVar66._8_8_ +
                             dVar97 * (1.0 - (dVar56 * dVar109 + dVar80 * dVar71)) * dVar84 +
                             dVar106 * (dVar79 * dVar80 + dVar110) * dVar82 + dVar58) * 0.01;
        pfVar34[2] = (float)dVar103 * 0.01;
        pfVar34[3] = (float)dVar103 * 0.01;
        lVar24 = lVar24 + 0xc;
        pfVar34 = pfVar34 + 4;
      } while ((ulonglong)uVar38 * 0xc != lVar24);
    }
    uVar38 = *(uint *)(lVar19 + 0x68 + (ulonglong)((*(byte *)(lVar19 + 0x80) ^ 1) << 4));
    iVar28 = *(int *)(local_470 + 0x30);
    iVar12 = iVar28 + uVar38;
    if ((int)(*(uint *)(local_470 + 0x34) & 0x7fffffff) < iVar12) {
      FUN_141805702(local_470 + 0x28,&PTR_vftable_14c6e47a0);
    }
    lVar24 = *(longlong *)(local_470 + 0x28);
    *(int *)(local_470 + 0x30) = iVar12;
    uVar16 = *(uint *)(lVar19 + 0x78);
    _Src = *(void **)(lVar19 + 0x70);
    auVar95._4_4_ = uStack_22c;
    auVar95._0_4_ = uVar16;
    auVar95._8_8_ = 0;
    _local_238 = auVar95 << 0x40;
    if ((longlong)(int)uVar16 == 0) {
      _local_238 = ZEXT416(uVar16) << 0x40;
      lVar19 = 0;
    }
    else {
      FUN_146e79edc(local_238,uVar16,0);
      memcpy((void *)local_238._0_8_,_Src,(longlong)(int)uVar16 * 6);
      lVar19 = local_238._0_8_;
    }
    if (0 < (int)uVar38) {
      puVar25 = (undefined4 *)((longlong)iVar28 * 0x10 + lVar24 + 0xc);
      lVar24 = 0;
      do {
        uVar2 = *(ushort *)(lVar19 + 2 + lVar24);
        uVar1 = *(ushort *)(lVar19 + 4 + lVar24);
        puVar25[-3] = (uint)*(ushort *)(lVar19 + lVar24) + iVar33;
        puVar25[-2] = (uint)uVar2 + iVar33;
        puVar25[-1] = (uint)uVar1 + iVar33;
        *puVar25 = local_448._0_4_;
        lVar24 = lVar24 + 6;
        puVar25 = puVar25 + 4;
      } while ((ulonglong)uVar38 * 6 != lVar24);
    }
    if (lVar19 != 0) {
      FUN_1400020a8();
    }
    break;
  case 6:
    if (lVar19 == 0 || *(char *)(lVar19 + 0x1c) != 'L') {
      if (*(char *)(lVar19 + 0x1c) == '\x04' && lVar19 != 0) {
        lVar24 = 0;
        if (*(char *)(*(longlong *)(lVar19 + 0x20) + 0x1c) == '\f') {
          lVar24 = *(longlong *)(lVar19 + 0x20);
        }
      }
      else {
        lVar24 = 0;
      }
    }
    else {
      lVar24 = *(longlong *)(lVar19 + 0x28);
    }
    dVar56 = *param_1;
    dVar57 = param_1[1];
    dVar58 = param_1[2];
    dVar64 = param_1[4];
    dVar82 = param_1[5];
    dVar84 = param_1[6];
    dVar94 = *(double *)(lVar24 + 0x50);
    dVar105 = *(double *)(lVar24 + 0x58);
    dVar97 = *(double *)(lVar24 + 0x60);
    dVar92 = *(double *)(lVar24 + 0x60);
    dVar102 = *param_1;
    dVar103 = *param_1;
    dVar72 = param_1[3];
    dVar80 = param_1[3];
    uVar2 = *(ushort *)(lVar24 + 0x90);
    local_460 = (ulonglong)*(ushort *)(lVar24 + 0x92);
    local_468 = *(double *)(lVar24 + 0x58) * dVar94;
    iVar33 = *(int *)(in_RDX + 0x20);
    iVar28 = iVar33 + (uint)*(ushort *)(lVar24 + 0x92) * (uint)uVar2;
    if ((int)(*(uint *)(in_RDX + 0x24) & 0x7fffffff) < iVar28) {
      FUN_1418055da(in_RDX + 0x18,&PTR_vftable_14c6e47a0,iVar28);
    }
    uVar45 = local_460;
    pfVar34 = (float *)((longlong)iVar33 * 0x10 + *(longlong *)(local_470 + 0x18));
    *(int *)(local_470 + 0x20) = iVar28;
    iVar28 = (int)local_460;
    if ((int)local_460 != 0) {
      dVar71 = dVar56 + dVar56;
      dVar79 = dVar57 + dVar57;
      dVar109 = dVar58 + dVar58;
      dVar110 = dVar109 * dVar72;
      dVar111 = dVar71 * dVar80;
      dVar72 = dVar79 * dVar72;
      dVar80 = dVar71 * dVar80;
      auVar85._0_8_ = (dVar79 * dVar56 - dVar110) * dVar105;
      auVar85._8_8_ = (dVar109 * dVar57 - dVar111) * dVar92;
      auVar74._0_8_ = (dVar72 + dVar102 * dVar109) * dVar92;
      auVar74._8_8_ = (dVar80 + dVar103 * dVar71) * 0.0;
      dVar92 = (dVar102 * dVar109 - dVar72) * dVar94;
      dVar102 = (dVar103 * dVar71 - dVar80) * dVar105;
      auVar66._8_4_ = SUB84(dVar102,0);
      auVar66._0_8_ = dVar92;
      auVar66._12_4_ = (int)((ulonglong)dVar102 >> 0x20);
      unique0x100008a2 = auVar66._4_12_;
      auVar66 = blendpd(auVar74,auVar85,2);
      uVar26 = 0;
      do {
        if ((ulonglong)uVar2 != 0) {
          dVar102 = (double)(int)uVar26;
          uVar41 = 0;
          pfVar39 = pfVar34;
          uVar40 = uVar26;
          do {
            dVar103 = 1.79769313486232e+308;
            if ((int)uVar40 < *(int *)(lVar24 + 0x28)) {
              dVar103 = (double)*(ushort *)(*(longlong *)(lVar24 + 0x20) + uVar40 * 2) *
                        *(double *)(lVar24 + 0xa0) + *(double *)(lVar24 + 0x80);
            }
            dVar80 = (double)(int)uVar41;
            dVar72 = dVar80 * (dVar109 * dVar57 + dVar111) * dVar105 + dVar102 * dVar92 +
                     dVar103 * (1.0 - (dVar56 * dVar71 + dVar57 * dVar79)) * dVar97 + dVar84;
            *pfVar39 = (float)(dVar103 * auVar66._0_8_ +
                               dVar80 * auVar85._0_8_ +
                               (1.0 - (dVar58 * dVar109 + dVar57 * dVar79)) * dVar94 * dVar102 +
                              dVar64) * 0.01;
            pfVar39[1] = (float)(dVar103 * auVar66._8_8_ +
                                 dVar80 * (1.0 - (dVar58 * dVar109 + dVar56 * dVar71)) * dVar105 +
                                 (dVar79 * dVar56 + dVar110) * dVar94 * dVar102 + dVar82) * 0.01;
            pfVar39[2] = (float)dVar72 * 0.01;
            pfVar39[3] = (float)dVar72 * 0.01;
            uVar41 = uVar41 + 1;
            uVar40 = uVar40 + (local_460 & 0xffffffff);
            pfVar39 = (float *)((longlong)pfVar39 + (ulonglong)(uint)((int)local_460 << 4));
          } while (uVar2 != uVar41);
        }
        uVar26 = uVar26 + 1;
        pfVar34 = pfVar34 + 4;
      } while (uVar26 != (local_460 & 0xffffffff));
    }
    local_410 = CONCAT44(local_410._4_4_,uVar2 - 1);
    local_428._0_4_ = (int)local_460 + -1;
    local_458 = local_470 + 0x28;
    iVar12 = (uVar2 - 1) * ((int)local_460 + -1) * 2 + *(int *)(local_470 + 0x30);
    if ((int)(*(uint *)(local_470 + 0x34) & 0x7fffffff) < iVar12) {
      FUN_141805828(local_458,&PTR_vftable_14c6e47a0,iVar12);
    }
    if (1 < uVar2) {
      dVar97 = dVar97 * local_468;
      uVar38 = iVar28 + iVar33;
      local_468 = (double)((ulonglong)local_468 & 0xffffffff00000000);
      lVar19 = local_470;
      local_430 = lVar24;
      do {
        dVar92 = (double)(ulonglong)uVar38;
        if (1 < (ushort)uVar45) {
          iVar28 = 0;
          local_450 = dVar92;
          do {
            if ((int)*(uint *)(lVar24 + 0x48) < 1) {
LAB_1412b0692:
              iVar36 = SUB84(dVar92,0) + iVar28;
              iVar13 = iVar33 + 1 + iVar28;
              iVar12 = iVar36;
              if (0.0 <= dVar97) {
                iVar12 = iVar13;
                iVar13 = iVar36;
              }
              iVar3 = *(int *)(lVar19 + 0x30);
              iVar36 = iVar3 + 1;
              iVar14 = iVar3;
              if ((int)(*(uint *)(lVar19 + 0x34) & 0x7fffffff) <= iVar3) {
                FUN_141805828(local_458,&PTR_vftable_14c6e47a0,iVar36);
                iVar14 = *(int *)(local_470 + 0x30);
                lVar19 = local_470;
                dVar92 = local_450;
              }
              iVar32 = SUB84(dVar92,0) + iVar28 + 1;
              lVar24 = *(longlong *)(lVar19 + 0x28);
              lVar17 = (longlong)iVar14 * 0x10;
              *(int *)(lVar24 + lVar17) = iVar32;
              *(int *)(lVar24 + 4 + lVar17) = iVar28 + iVar33;
              *(int *)(lVar24 + 8 + lVar17) = iVar12;
              uVar15 = local_448._0_4_;
              *(undefined4 *)(lVar24 + 0xc + lVar17) = local_448._0_4_;
              *(int *)(lVar19 + 0x30) = iVar36;
              if ((int)(*(uint *)(lVar19 + 0x34) & 0x7fffffff) <= iVar36) {
                FUN_141805828(local_458,&PTR_vftable_14c6e47a0,(longlong)iVar3 + 2);
                iVar36 = *(int *)(local_470 + 0x30);
                lVar19 = local_470;
                dVar92 = local_450;
              }
              lVar24 = *(longlong *)(lVar19 + 0x28);
              lVar17 = (longlong)iVar36 * 0x10;
              *(int *)(lVar24 + lVar17) = iVar13;
              *(int *)(lVar24 + 4 + lVar17) = iVar28 + iVar33;
              *(int *)(lVar24 + 8 + lVar17) = iVar32;
              *(undefined4 *)(lVar24 + 0xc + lVar17) = uVar15;
              *(int *)(lVar19 + 0x30) = (int)((longlong)iVar3 + 2);
              lVar24 = local_430;
            }
            else {
              uVar38 = (*(ushort *)(lVar24 + 0x92) - 1) * (int)local_468._0_4_ + iVar28;
              if ((uVar38 < *(uint *)(lVar24 + 0x48)) &&
                 (*(char *)(*(longlong *)(lVar24 + 0x40) + (ulonglong)uVar38) != -1))
              goto LAB_1412b0692;
            }
            uVar38 = SUB84(dVar92,0);
            iVar28 = iVar28 + 1;
          } while (local_428._0_4_ != iVar28);
        }
        iVar28 = (int)local_468._0_4_ + 1;
        iVar33 = iVar33 + (int)local_460;
        uVar38 = uVar38 + (int)local_460;
        local_468 = (double)CONCAT44(local_468._4_4_,iVar28);
        uVar45 = local_460;
      } while (iVar28 != (int)local_410);
    }
  }
switchD_1412affe5_caseD_1:
  if ((local_f0 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b2176 FUN_1412b2176 body=162 status=ok
// SIG undefined FUN_1412b2176(void)

void FUN_1412b2176(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14b4d9f90;
  if ((DAT_14cb96658 != 0) && (lVar1 = FUN_1412b2218(), lVar1 != 0)) {
    if (DAT_14cb96828 == (undefined8 *)0x0) {
      DAT_14cb96828 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      *DAT_14cb96828 = 0;
      DAT_14cb96828[1] = 0;
      DAT_14cb96828[2] = 0;
      DAT_14cb96828[3] = 0;
      DAT_14cb96828[4] = 0;
      DAT_14cb96828[5] = 0;
    }
    if ((longlong)*(int *)(DAT_14cb96828 + 3) != 0) {
      lVar2 = DAT_14cb96828[2];
      lVar3 = (longlong)*(int *)(DAT_14cb96828 + 3) << 7;
      do {
        if (*(longlong *)(lVar2 + 0xc) == param_1[2]) {
          if (lVar2 == 0) {
            return;
          }
          *(undefined8 *)(lVar2 + 0x28) = 0;
          *(undefined1 *)(lVar1 + 200) = 1;
          return;
        }
        lVar2 = lVar2 + 0x80;
        lVar3 = lVar3 + -0x80;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1412b2218 FUN_1412b2218 body=191 status=ok
// SIG undefined FUN_1412b2218(void)

longlong FUN_1412b2218(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 == 0) {
    if ((*(char *)(param_1 + 0x11) == '\0') &&
       (*(undefined1 *)(param_1 + 0x11) = 1, DAT_14c872bf0 == '\0')) {
      uVar1 = FUN_145ffd4b4();
      FUN_145d139ba(uVar1,local_20,param_1,&LAB_145ccc0dc);
      lVar2 = FUN_14657cf6a(DAT_14c951640);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x48) = lVar2;
      FUN_145bfd03a(lVar2 + 0x120,local_20,param_1,FUN_1410f6046);
      lVar2 = *(longlong *)(param_1 + 0x48);
    }
    else {
      lVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b22d8 FUN_1412b22d8 body=393 status=ok
// SIG undefined FUN_1412b22d8(void)

void FUN_1412b22d8(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30;
  int local_28;
  ushort local_24;
  byte local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == (longlong *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[10];
  }
  local_28 = -1;
  local_24 = 0x101;
  local_22 = 0;
  local_38 = param_1;
  FUN_144a2daf0(&local_38);
  plVar2 = local_38;
  lVar3 = local_30;
joined_r0x0001412b232f:
  do {
    local_30 = lVar3;
    local_38 = plVar2;
    if (local_30 == 0) {
LAB_1412b23b7:
      if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (((param_2 != 0) && ((*(ulonglong *)(local_30 + 0x38) & 0x800000000) == 0)) &&
       (lVar3 = *(int *)(local_30 + 0x44) + param_2, lVar3 != 0)) {
      FUN_1412b2462(local_30,lVar3,param_3,0);
    }
    lVar3 = *(longlong *)(local_30 + 0x18);
    plVar2 = local_38;
    local_30 = lVar3;
    if (local_38 != (longlong *)0x0) {
      do {
        lVar4 = (longlong)local_28;
        while( true ) {
          for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
            if (((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x8001) == 0) &&
               (((local_24 & 0x100) != 0 || ((*(byte *)(lVar3 + 0x3b) & 0x20) == 0))))
            goto joined_r0x0001412b232f;
          }
          if ((local_22 & 1) == 0) break;
          lVar4 = lVar4 + 1;
          local_28 = (int)lVar4;
          if ((int)plVar2[0x3c] <= lVar4) break;
          lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
          lVar3 = 0;
          if (lVar1 != 0) {
            lVar3 = *(longlong *)(lVar1 + 0x50);
          }
        }
        if (((char)local_24 != '\x01') ||
           (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(plVar2), plVar2 == (longlong *)0x0))
        goto LAB_1412b23b7;
        lVar3 = plVar2[10];
        local_28 = -1;
      } while( true );
    }
    plVar2 = (longlong *)0x0;
  } while( true );
}



// FUNCTION 1412b2462 FUN_1412b2462 body=161 status=ok
// SIG undefined FUN_1412b2462(void)

void FUN_1412b2462(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_4;
  if (*(int *)(param_1 + 0x30) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  (**(code **)(*param_3 + 0x28))(param_3,&local_30);
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = 0;
    do {
      FUN_1412b251e(param_1,(longlong)*(int *)(param_1 + 0x34) * (longlong)iVar1 + param_2,param_3,0
                   );
      iVar1 = iVar1 + 1;
    } while (iVar1 != *(int *)(param_1 + 0x30));
  }
  (**(code **)(*param_3 + 0x30))(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b251e FUN_1412b251e body=3785 status=ok
// SIG undefined FUN_1412b251e(void)

void FUN_1412b251e(longlong *param_1,ulonglong *param_2,longlong *param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong *puVar14;
  undefined8 *puVar16;
  undefined *puVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  code *local_a0;
  byte local_89;
  ulonglong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_4 == 0) {
    if (param_1 == (longlong *)0x0) {
      param_4 = 0;
    }
    else {
      param_4 = param_1[4];
    }
  }
  if ((int)param_3[6] != 0) {
    plVar8 = param_3 + 1;
    if ((longlong *)param_3[5] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[5];
    }
    if (*(int *)((longlong)plVar8 + (longlong)((int)param_3[6] + -1) * 4) == 2) {
      param_4 = 0;
    }
  }
  local_50 = param_4;
  if (param_1 == (longlong *)0x0) goto LAB_1412b262b;
  puVar17 = (undefined *)param_1[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
    local_a8 = (undefined *)FUN_1446ddbd2();
    local_a0 = FUN_1468e0f50;
    uStack_b0 = 0;
    local_b8 = 0x1008001;
    FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
    atexit(FUN_142816f26);
    _Init_thread_footer(&DAT_14c952108);
  }
  if (DAT_14c9520c0 == 0) {
    bVar18 = puVar17 != (undefined *)0x0;
    if (puVar17 != &DAT_14c9520b8 && bVar18) {
      do {
        puVar17 = *(undefined **)(puVar17 + 0x30);
        bVar18 = puVar17 != (undefined *)0x0;
        if (puVar17 == &DAT_14c9520b8) break;
      } while (puVar17 != (undefined *)0x0);
    }
    if (bVar18) goto LAB_1412b25cd;
LAB_1412b2730:
    puVar16 = (undefined8 *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_14067a048;
      uStack_b0 = 0;
      local_b8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    if (DAT_14c951cd8 == 0) {
      bVar18 = puVar16 != (undefined8 *)0x0;
      if (puVar16 != &DAT_14c951cd0 && bVar18) {
        do {
          puVar16 = (undefined8 *)puVar16[6];
          bVar18 = puVar16 != (undefined8 *)0x0;
          if (puVar16 == &DAT_14c951cd0) break;
        } while (puVar16 != (undefined8 *)0x0);
      }
      if (bVar18) goto LAB_1412b2a37;
    }
    else if ((puVar16[3] & DAT_14c951cd8) != 0) {
LAB_1412b2a37:
      (**(code **)(*param_3 + 0x80))
                (param_3,&local_50,
                 (*(byte *)((longlong)param_2 + (ulonglong)*(byte *)((longlong)param_1 + 0x71)) &
                 *(byte *)((longlong)param_1 + 0x73)) != 0);
      goto LAB_1412b262b;
    }
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_140dafe7a;
      uStack_b0 = 0;
      local_b8 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if (DAT_14c963e40 == 0) {
      bVar18 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c963e38 && bVar18) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar18 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c963e38) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (bVar18) goto LAB_1412b2a96;
    }
    else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c963e40) != 0) {
LAB_1412b2a96:
      (**(code **)(*param_3 + 0x88))(param_3,&local_50,param_2);
      goto LAB_1412b262b;
    }
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_a8 = (undefined *)FUN_1446ddbd2();
      local_a0 = FUN_1409e12a0;
      uStack_b0 = 0;
      local_b8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar18 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c952060 && bVar18) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar18 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c952060) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (bVar18) goto LAB_1412b27f5;
    }
    else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c952068) != 0) {
LAB_1412b27f5:
      (**(code **)(*param_3 + 0x90))(param_3,&local_50,param_2);
      goto LAB_1412b262b;
    }
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_a0 = FUN_140b31576;
      local_a8 = &DAT_14c951a38;
      uStack_b0 = 0;
      local_b8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar18 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c951a90 && bVar18) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar18 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c951a90) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar18) goto LAB_1412b2b2d;
LAB_1412b2e50:
      bVar13 = *(byte *)(param_1 + 0xe);
      (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
      if ((int)param_2[1] == 0) goto LAB_1412b262b;
      iVar3 = *(int *)(param_1[0xf] + 0x34);
      (**(code **)(*param_3 + 0x28))(param_3,&local_50);
      if (0 < (int)param_2[1]) {
        lVar6 = 0;
        lVar4 = 0;
        do {
          if ((bVar13 & 1) == 0) {
            uVar12 = *param_2;
          }
          else {
            uVar12 = *param_2;
            if ((uVar12 & 1) != 0) {
              uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)param_2;
            }
          }
          FUN_1412b2462(param_1[0xf],uVar12 + lVar6,param_3,0);
          lVar4 = lVar4 + 1;
          lVar6 = lVar6 + iVar3;
        } while (lVar4 < (int)param_2[1]);
      }
    }
    else {
      if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951a98) != 0) goto LAB_1412b2e50;
LAB_1412b2b2d:
      lVar4 = param_1[1];
      lVar6 = FUN_144a7e162();
      if (*(ulonglong *)(lVar6 + 8) != 0) {
        if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) goto LAB_1412b2f1d;
LAB_1412b2b4d:
        lVar4 = param_1[1];
        lVar6 = FUN_1446ebfd4();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar18 = lVar4 != 0;
          if (lVar4 != lVar6 && bVar18) {
            do {
              lVar4 = *(longlong *)(lVar4 + 0x30);
              bVar18 = lVar4 != 0;
              if (lVar4 == lVar6) break;
            } while (lVar4 != 0);
          }
          if (bVar18) goto LAB_1412b2b6d;
        }
        else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_1412b2b6d:
          if ((int)param_2[1] == 0) goto LAB_1412b262b;
          bVar13 = *(byte *)(param_1 + 0x13);
          lVar4 = param_1[0xe];
          local_78 = param_1[0xf];
          local_80 = (longlong)(int)param_1[0x10];
          local_70 = (longlong)*(int *)((longlong)param_1 + 0x94);
          local_89 = bVar13;
          if (lVar4 == 0) {
            bVar18 = false;
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)(lVar4 + 8);
            lVar7 = FUN_144a49f24();
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar18 = lVar6 != 0;
              if (lVar6 != lVar7 && bVar18) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar18 = lVar6 != 0;
                  bVar13 = local_89;
                  if (lVar6 == lVar7) break;
                } while (lVar6 != 0);
              }
            }
            else {
              bVar18 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0;
            }
            lVar6 = *(longlong *)(lVar4 + 8);
            lVar7 = FUN_144a63fc8();
            if (*(ulonglong *)(lVar7 + 8) == 0) {
              bVar19 = lVar6 != 0;
              if (lVar6 != lVar7 && bVar19) {
                do {
                  lVar6 = *(longlong *)(lVar6 + 0x30);
                  bVar19 = lVar6 != 0;
                  bVar13 = local_89;
                  if (lVar6 == lVar7) break;
                } while (lVar6 != 0);
              }
            }
            else {
              bVar19 = (*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar7 + 8)) != 0;
            }
            lVar6 = 0;
            if (bVar19) {
              lVar6 = lVar4;
            }
          }
          if (((!bVar18) && (lVar6 == 0)) || (iVar3 = (int)param_2[1], iVar3 < 1))
          goto LAB_1412b262b;
          local_88 = param_2 + 2;
          lVar4 = 0;
          uVar12 = 0;
          bVar18 = false;
          do {
            if ((bVar13 & 1) == 0) {
              if ((longlong)uVar12 < (longlong)(int)param_2[5]) {
                puVar9 = (ulonglong *)param_2[4];
                if ((ulonglong *)param_2[4] == (ulonglong *)0x0) {
                  puVar9 = local_88;
                }
LAB_1412b2c41:
                if ((*(uint *)((longlong)puVar9 + (uVar12 >> 5 & 0x7ffffff) * 4) >>
                     ((uint)uVar12 & 0x1f) & 1) != 0) {
                  if (!bVar18) {
                    (**(code **)(*param_3 + 0x28))(param_3,&local_50);
                    iVar3 = (int)param_2[1];
                    bVar18 = true;
                  }
                  if ((bVar13 & 1) == 0) {
                    if (iVar3 == *(int *)((longlong)param_2 + 0x34)) goto LAB_1412b2deb;
                    uVar15 = *param_2;
LAB_1412b2c72:
                    puVar14 = (ulonglong *)(uVar15 + lVar4);
                    lVar7 = local_80 + (longlong)puVar14;
                  }
                  else {
                    if (iVar3 != *(int *)((longlong)param_2 + 0x24)) {
                      uVar1 = *param_2;
                      uVar15 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
                      if ((uVar1 & 1) == 0) {
                        uVar15 = uVar1;
                      }
                      goto LAB_1412b2c72;
                    }
LAB_1412b2deb:
                    puVar14 = (ulonglong *)0x0;
                    lVar7 = 0;
                  }
                  local_68 = 0;
                  (**(code **)(*param_3 + 0x18))(param_3,&local_68);
                  if (lVar6 == 0) {
                    if ((int)puVar14[1] == 0) {
                      puVar10 = &DAT_149dfb77a;
                    }
                    else {
                      puVar10 = (undefined2 *)*puVar14;
                    }
                    FUN_1446f470e(&local_68,puVar10,1);
                  }
                  else {
                    local_68 = *puVar14;
                  }
                  (**(code **)(*param_3 + 0x90))(param_3,&DAT_14c9a3d20,&local_68);
                  FUN_1412b2462(local_78,lVar7,param_3,DAT_14c9a3d28);
                  (**(code **)(*param_3 + 0x20))(param_3);
                  iVar3 = (int)param_2[1];
                  bVar13 = local_89;
                }
              }
            }
            else {
              bVar13 = local_89;
              if ((longlong)uVar12 < (longlong)(int)param_2[3]) {
                puVar14 = (ulonglong *)*local_88;
                puVar9 = (ulonglong *)(((longlong)puVar14 >> 0x18) + (longlong)local_88);
                if (((ulonglong)puVar14 & 1) == 0) {
                  puVar9 = puVar14;
                }
                goto LAB_1412b2c41;
              }
            }
            uVar12 = uVar12 + 1;
            lVar4 = lVar4 + local_70;
          } while ((longlong)uVar12 < (longlong)iVar3);
          goto joined_r0x0001412b2fb4;
        }
        lVar4 = param_1[1];
        lVar6 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar18 = lVar4 != 0;
          if (lVar4 != lVar6 && bVar18) {
            do {
              lVar4 = *(longlong *)(lVar4 + 0x30);
              bVar18 = lVar4 != 0;
              if (lVar4 == lVar6) break;
            } while (lVar4 != 0);
          }
          if (!bVar18) goto LAB_1412b262b;
        }
        else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0)
        goto LAB_1412b262b;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9a3d38) &&
           (FUN_144b3d300(&DAT_14c9a3d38), DAT_14c9a3d38 == -1)) {
          FUN_1446ddc76(&DAT_14c9a3d30,"DateTime",1);
          _Init_thread_footer(&DAT_14c9a3d38);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9a3d48) &&
           (FUN_144b3d300(&DAT_14c9a3d48), DAT_14c9a3d48 == -1)) {
          FUN_1446ddc76(&DAT_14c9a3d40,&DAT_149e4dd30,1);
          _Init_thread_footer(&DAT_14c9a3d48);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9a3d58) &&
           (FUN_144b3d300(&DAT_14c9a3d58), DAT_14c9a3d58 == -1)) {
          FUN_1446ddc76(&DAT_14c9a3d50,"UniqueNetIdWrapper",1);
          _Init_thread_footer(&DAT_14c9a3d58);
        }
        uVar12 = *(ulonglong *)(param_1[0xe] + 0x18);
        FUN_1401a700c(&local_68,0x3b);
        if (uVar12 == (local_68 & 0xffffffff)) {
          iVar3 = (**(code **)(*param_3 + 0x60))(param_3,&local_50,param_2);
LAB_1412b3223:
          if (iVar3 != 1) {
            if (iVar3 != 2) goto LAB_1412b262b;
            local_68 = 0;
            uStack_60 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a0 = (code *)0x0;
            local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
            (**(code **)(*param_1 + 0xf0))(param_1,&local_68,param_2,0);
            (**(code **)(*param_3 + 0x88))(param_3,&local_50,&local_68);
            goto LAB_1412b29c6;
          }
        }
        else {
          uVar12 = *(ulonglong *)(param_1[0xe] + 0x18);
          FUN_1401a700c(&local_68,0x3c);
          if (uVar12 == (local_68 & 0xffffffff)) {
            iVar3 = (**(code **)(*param_3 + 0x58))(param_3,&local_50,param_2);
            goto LAB_1412b3223;
          }
          uVar12 = *(ulonglong *)(param_1[0xe] + 0x18);
          if (uVar12 == DAT_14c9a3d30) {
            iVar3 = (**(code **)(*param_3 + 0x48))(param_3,&local_50,param_2);
            goto LAB_1412b3223;
          }
          if (uVar12 == DAT_14c9a3d40) {
            iVar3 = (**(code **)(*param_3 + 0x40))(param_3,&local_50,param_2);
            goto LAB_1412b3223;
          }
          if (uVar12 == DAT_14c9a3d50) {
            iVar3 = (**(code **)(*param_3 + 0x38))(param_3,&local_50,param_2);
            goto LAB_1412b3223;
          }
          FUN_1401a700c(&local_68,0x34);
          if (uVar12 == (local_68 & 0xffffffff)) {
            iVar3 = (**(code **)(*param_3 + 0x50))(param_3,&local_50,param_2);
            goto LAB_1412b3223;
          }
        }
        (**(code **)(*param_3 + 0x18))(param_3,&local_50);
        FUN_1412b22d8(param_1[0xe],param_2,param_3);
        (**(code **)(*param_3 + 0x20))(param_3);
        goto LAB_1412b262b;
      }
      bVar18 = lVar4 != 0;
      if (lVar4 != lVar6 && bVar18) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar18 = lVar4 != 0;
          if (lVar4 == lVar6) break;
        } while (lVar4 != 0);
      }
      if (!bVar18) goto LAB_1412b2b4d;
LAB_1412b2f1d:
      iVar3 = (int)param_2[1];
      if ((iVar3 < 1) || (iVar3 == *(int *)((longlong)param_2 + 0x34))) goto LAB_1412b262b;
      lVar4 = param_1[0xe];
      lVar6 = param_1[0x11];
      lVar7 = 0;
      uVar12 = 0;
      bVar18 = false;
      do {
        if ((longlong)uVar12 < (longlong)(int)param_2[5]) {
          puVar14 = (ulonglong *)param_2[4];
          if ((ulonglong *)param_2[4] == (ulonglong *)0x0) {
            puVar14 = param_2 + 2;
          }
          if ((*(uint *)((longlong)puVar14 + (uVar12 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar12 & 0x1f)
              & 1) != 0) {
            if (!bVar18) {
              (**(code **)(*param_3 + 0x28))(param_3,&local_50);
              iVar3 = (int)param_2[1];
              bVar18 = true;
            }
            if (iVar3 == *(int *)((longlong)param_2 + 0x34)) {
              lVar11 = 0;
            }
            else {
              lVar11 = *param_2 + lVar7;
            }
            FUN_1412b2462(lVar4,lVar11,param_3,0);
            iVar3 = (int)param_2[1];
          }
        }
        uVar12 = uVar12 + 1;
        lVar7 = lVar7 + (int)lVar6;
      } while ((longlong)uVar12 < (longlong)iVar3);
joined_r0x0001412b2fb4:
      if (!bVar18) goto LAB_1412b262b;
    }
    (**(code **)(*param_3 + 0x30))(param_3);
  }
  else {
    if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9520c0) == 0) goto LAB_1412b2730;
LAB_1412b25cd:
    lVar4 = (**(code **)(*param_1 + 0x1f0))(param_1);
    if (lVar4 == 0) {
      cVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
        if (cVar2 != '\0') {
          uVar5 = (**(code **)(*param_1 + 0x220))(param_1,param_2);
          (**(code **)(*param_3 + 0x78))(param_3,&local_50,uVar5);
        }
      }
      else {
        uVar20 = (**(code **)(*param_1 + 0x240))(param_1,param_2);
        (**(code **)(*param_3 + 0x68))(param_3,&local_50,uVar20);
      }
      goto LAB_1412b262b;
    }
    uVar5 = (**(code **)(*param_1 + 0x220))(param_1,param_2);
    FUN_14689a760(lVar4,&local_68,uVar5);
    (**(code **)(*param_3 + 0x88))(param_3,&local_50,&local_68);
LAB_1412b29c6:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1412b262b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b33e8 FUN_1412b33e8 body=627 status=ok
// SIG undefined FUN_1412b33e8(void)

void FUN_1412b33e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_1412b34cf;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_1412b34cf:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1412b365c(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x58),1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b365c FUN_1412b365c body=406 status=ok
// SIG undefined FUN_1412b365c(void)

void FUN_1412b365c(longlong param_1,float param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x3c0), lVar3 != 0)) {
    if (DAT_14caf9cd0 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463c0cc2;
      local_58 = &LAB_147c9db5b;
      local_60 = &LAB_1463f9c44;
      local_68 = &DAT_149e063b2;
      local_70 = 0x2000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x448), lVar3 != 0)) {
      uVar1 = FUN_1405e72a0();
      plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          if (0.0 < param_2) {
            *(float *)(lVar3 + 0x128) = param_2;
            *(float *)(lVar3 + 0x124) = param_2;
          }
          if (param_3 != '\0') {
            *(undefined4 *)(lVar3 + 0xb0) = 0;
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b37f4 FUN_1412b37f4 body=704 status=ok
// SIG undefined FUN_1412b37f4(void)

int FUN_1412b37f4(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_50;
  int local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)FUN_140343d7a();
  iVar8 = 0;
  iVar9 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1401b0f18();
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    iVar9 = iVar8;
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_1401b0f18();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) &&
          (lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4), lVar5 != 0)) &&
         (lVar5 = FUN_1409b5a12(lVar5), lVar5 != 0)) {
        FUN_1412b3ab6(lVar5,&local_50,2,1);
        lVar5 = local_50;
        if ((longlong)local_48 == 0) {
          iVar9 = 0;
        }
        else {
          lVar10 = 0;
          iVar9 = 0;
          do {
            plVar3 = *(longlong **)(lVar5 + lVar10);
            if (plVar3 != plVar1) {
              if (plVar3 == (longlong *)0x0) {
LAB_1412b3aae:
                lVar7 = 0;
              }
              else {
                if (DAT_14cb20e58 == 0) {
                  local_70 = &local_40;
                  local_40 = FUN_1449e2820;
                  local_60 = FUN_14081d0ea;
                  local_68 = FUN_1427b09ee;
                  local_78 = &LAB_147f14d13;
                  local_80 = FUN_1464313b0;
                  local_88 = L"Engine";
                  local_90 = 0;
                  local_98 = 0x10004001;
                  local_a0 = 8;
                  local_a8 = 0x28;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12)
                  ;
                }
                lVar6 = (**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb20e58);
                if (lVar6 == 0) goto LAB_1412b3aae;
                if (DAT_14cb20e58 == 0) {
                  local_70 = &local_40;
                  local_40 = FUN_1449e2820;
                  local_60 = FUN_14081d0ea;
                  local_68 = FUN_1427b09ee;
                  local_78 = &LAB_147f14d13;
                  local_80 = FUN_1464313b0;
                  local_88 = L"Engine";
                  local_90 = 0;
                  local_98 = 0x10004001;
                  local_a0 = 8;
                  local_a8 = 0x28;
                  FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12)
                  ;
                }
                lVar7 = FUN_144718840(lVar6,DAT_14cb20e58);
                if (lVar6 == lVar7) goto LAB_1412b3aae;
              }
              iVar9 = (iVar9 + 1) - (uint)(lVar7 == 0);
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)local_48 * 8 != lVar10);
        }
        if (local_50 != 0) {
          FUN_1400020a8(local_50);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 1412b3ab6 FUN_1412b3ab6 body=169 status=ok
// SIG undefined FUN_1412b3ab6(void)

undefined8 * FUN_1412b3ab6(undefined8 param_1,undefined8 *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1448c1924(0,&local_38);
  if (local_38 != 0) {
    if (param_4 == '\0') {
      FUN_144a67cdc(local_38,param_3,param_2);
    }
    else {
      FUN_1412b3b62();
    }
  }
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b3b62 FUN_1412b3b62 body=135 status=ok
// SIG undefined FUN_1412b3b62(void)

void FUN_1412b3b62(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x120);
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
    if (*(longlong *)(param_1 + 0x118) != 0) {
      for (puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x118) + 0x4a8);
          puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
        FUN_144a67cdc(puVar6[2],param_2,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x0001412b3be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412b3bea FUN_1412b3bea body=778 status=ok
// SIG undefined FUN_1412b3bea(void)

void FUN_1412b3bea(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = local_88;
  if (param_1 != 0) {
    lVar6 = FUN_1412b3ef6();
    uVar4 = local_88;
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) == lVar6 + 0x30)) {
      plVar1 = (longlong *)(param_1 + 0x30);
      local_58 = param_1 + 0x40;
      local_60 = 0x100000000;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_48 = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_1449c0562(&local_60);
      }
      local_88._0_4_ = (uint)local_50;
      local_88._4_4_ = local_50._4_4_;
      local_80 = local_48;
      local_7c = local_44;
      local_98 = local_60;
      local_90 = local_58;
      local_68 = 0;
      local_a0 = plVar1;
      local_78 = plVar1;
      local_70 = plVar1;
      if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
        do {
          lVar6 = (longlong)*(int *)(*local_a0 + 0x10 + (longlong)local_88._4_4_ * 0x20);
          if (lVar6 != 0) {
            lVar3 = *(longlong *)(*local_a0 + 8 + (longlong)local_88._4_4_ * 0x20);
            lVar7 = 0;
            do {
              lVar2 = *(longlong *)(lVar3 + lVar7);
              local_a8 = 0;
              (**(code **)(*param_2 + 0x90))
                        (param_2,*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x30),0);
              lVar7 = lVar7 + 0x10;
            } while (lVar6 * 0x10 != lVar7);
          }
          local_88._0_4_ = (uint)local_88 & ~local_98._4_4_;
          FUN_1449c0562(&local_98);
        } while (local_88._4_4_ < *(int *)(local_90 + 0x18));
        if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
          FUN_148b6d15c(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
        }
      }
      plVar1 = (longlong *)(param_1 + 0x80);
      local_58 = param_1 + 0x90;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      local_48 = 0;
      if (*(int *)(param_1 + 0xa8) != 0) {
        FUN_1449c0562(&local_60);
      }
      local_88 = local_50;
      uVar4 = local_88;
      local_80 = local_48;
      local_7c = local_44;
      local_98 = local_60;
      local_90 = local_58;
      local_68 = 0;
      local_88._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_a0 = plVar1;
      local_78 = plVar1;
      local_70 = plVar1;
      if (local_88._4_4_ < *(int *)(local_58 + 0x18)) {
        iVar5 = local_88._4_4_;
        local_88 = uVar4;
        do {
          lVar6 = (longlong)*(int *)(*local_a0 + 0x10 + (longlong)iVar5 * 0x20);
          if (lVar6 != 0) {
            lVar3 = *(longlong *)(*local_a0 + 8 + (longlong)iVar5 * 0x20);
            lVar7 = 0;
            do {
              (**(code **)(*param_2 + 0x88))(param_2,*(longlong *)(lVar3 + lVar7) + 0x28,0,0);
              lVar7 = lVar7 + 0x10;
            } while (lVar6 * 0x10 != lVar7);
          }
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
          FUN_1449c0562(&local_98);
          iVar5 = local_88._4_4_;
        } while (local_88._4_4_ < *(int *)(local_90 + 0x18));
        uVar4 = local_88;
        if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
          FUN_148b6d37e(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
          uVar4 = local_88;
        }
      }
    }
  }
  local_88 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b3ef6 FUN_1412b3ef6 body=228 status=ok
// SIG undefined FUN_1412b3ef6(void)

longlong FUN_1412b3ef6(void)

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
  if (DAT_14cb9d680 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1412b3bea;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_148b54720;
    local_40 = FUN_14659e4f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"UIExtensionSubsystem",&DAT_14cb9d680,FUN_14659e4d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9d680;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b3fdc FUN_1412b3fdc body=284 status=ok
// SIG undefined FUN_1412b3fdc(void)

undefined8 FUN_1412b3fdc(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1412b40f2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412b40f2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1412b40f2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412b409f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1412b409f;
    }
  }
  uVar6 = 0;
LAB_1412b409f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b40fa FUN_1412b40fa body=174 status=ok
// SIG undefined FUN_1412b40fa(void)

void FUN_1412b40fa(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *local_38;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x70));
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
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
  if (*(char *)(lVar3 + 0x50) == param_2) {
    if (*(int *)(lVar3 + 0x54) != 0) goto LAB_1412b415b;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x54) + 1;
  }
  *(char *)(lVar3 + 0x50) = param_2;
  *(int *)(lVar3 + 0x54) = iVar4;
LAB_1412b415b:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x70));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b41aa FUN_1412b41aa body=104 status=ok
// SIG undefined FUN_1412b41aa(void)

void FUN_1412b41aa(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar1) == param_2) {
        lVar2 = *param_1 - lVar2;
        if (lVar2 == 0) {
          return;
        }
        if (*param_3 != 0) {
          FUN_14480f766(lVar2 + 8);
        }
        *param_3 = 0;
        return;
      }
      lVar2 = lVar2 + -0x90;
      lVar1 = lVar1 + 0x90;
    } while (-lVar2 != (longlong)(int)param_1[1] * 0x90);
  }
  return;
}



// FUNCTION 1412b4212 FUN_1412b4212 body=111 status=ok
// SIG undefined FUN_1412b4212(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b4212(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbc6000;
  if (DAT_14cbc6000 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xa300,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x146;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbc6000;
    _DAT_14cbc6008 = _DAT_14cbc6008 + 0x10;
  }
  DAT_14cbc6000 = (undefined8 *)*puVar2;
  _DAT_14cbc600c = _DAT_14cbc600c + 1;
  return;
}



// FUNCTION 1412b4282 FUN_1412b4282 body=463 status=ok
// SIG undefined FUN_1412b4282(void)

void FUN_1412b4282(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_LAB_149f01ad8;
  plVar2 = (longlong *)param_1[0x1d];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1412b4451(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  plVar2 = param_1 + 0x13;
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1412b42fb:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_1412b42fb;
    }
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  plVar2 = param_1 + 0xe;
  if (*(int *)(param_1 + 0xf) == 0) {
LAB_1412b4327:
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar2,0,0,0x10);
      *(undefined4 *)(param_1 + 0xf) = 0;
      goto LAB_1412b4327;
    }
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  plVar2 = param_1 + 9;
  if (*(int *)(param_1 + 10) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1412b435c;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 10) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_1412b435c:
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412b442f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1412b4451 FUN_1412b4451 body=75 status=ok
// SIG undefined FUN_1412b4451(void)

void FUN_1412b4451(longlong param_1,int param_2)

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



// FUNCTION 1412b449c FUN_1412b449c body=169 status=ok
// SIG undefined FUN_1412b449c(void)

void FUN_1412b449c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)(int)param_1[10] != 0) {
    puVar4 = (undefined8 *)param_1[9];
    lVar3 = (longlong)(int)param_1[10] * 0x38;
    do {
      cVar1 = (**(code **)(*(longlong *)*puVar4 + 0x20))();
      if (cVar1 == '\0') {
        if (puVar4 != (undefined8 *)0x0) {
          FUN_145891e92(&DAT_14cb10968,local_28,param_1,FUN_143e34e4a);
        }
        break;
      }
      puVar4 = puVar4 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  uVar2 = FUN_14477b072(param_1,DAT_14cb653a0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b4546 FUN_1412b4546 body=375 status=ok
// SIG undefined FUN_1412b4546(void)

undefined8 * FUN_1412b4546(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412b46ca FUN_1412b46ca body=17 status=ok
// SIG undefined FUN_1412b46ca(void)

bool FUN_1412b46ca(char *param_1)

{
  char cVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if (*param_1 == '\x01') {
    return *(int *)(param_1 + 0xc) != 0;
  }
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
LAB_140321d27:
    bVar3 = *(int *)(param_1 + 0xc) != 0;
  }
  else {
    if (cVar1 == '\x03') {
      uVar2 = *(ulonglong *)(param_1 + 4);
      if (uVar2 == 0) {
        return false;
      }
      if (uVar2 == DAT_14cb7c580) {
        return false;
      }
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (uVar2 != DAT_14c892e68) {
        return uVar2 != DAT_14cb7c568 && uVar2 != DAT_14cb7c578;
      }
    }
    else if (cVar1 == '\x02') goto LAB_140321d27;
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1412b46dc FUN_1412b46dc body=206 status=ok
// SIG undefined FUN_1412b46dc(void)

undefined8 * FUN_1412b46dc(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0x3f80000000000000;
  param_1[1] = 0x4120000000000000;
  param_1[2] = 0;
  param_1[3] = 0x42480000;
  param_1[4] = 0x3f19999a00000000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  memset(param_1 + 0xd,0,0xa0);
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = &DAT_4030000000000000;
  param_1[0x23] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 0x24) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x126) = 1;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x1010000;
  uVar1 = FUN_140691b73();
  *(undefined1 *)((longlong)param_1 + 0x134) = uVar1;
  uVar1 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_1 + 0x135) = uVar1;
  return param_1;
}



// FUNCTION 1412b47aa FUN_1412b47aa body=192 status=ok
// SIG undefined FUN_1412b47aa(void)

void FUN_1412b47aa(undefined8 *param_1)

{
  *param_1 = 0x40a0000044bb8000;
  param_1[1] = 0x447a000043fa0000;
  *(undefined4 *)(param_1 + 2) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x14) = 6;
  param_1[3] = 0x240000000;
  param_1[4] = 0x434800003f000000;
  param_1[5] = 0x42a00000453b8000;
  param_1[6] = 0x42f000003e4ccccd;
  param_1[7] = 0x40a0000044bb8000;
  param_1[8] = 0x447a000043fa0000;
  *(undefined4 *)(param_1 + 9) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 6;
  param_1[10] = 0x240000000;
  param_1[0xb] = 0x434800003f000000;
  param_1[0xc] = 0x42a00000453b8000;
  param_1[0xd] = 0x42f000003e4ccccd;
  param_1[0xe] = 0x42c8000041f00000;
  *(undefined4 *)(param_1 + 0xf) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x7012;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return;
}



// FUNCTION 1412b486a FUN_1412b486a body=261 status=ok
// SIG undefined FUN_1412b486a(void)

undefined8 * FUN_1412b486a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14bc22110;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}



// FUNCTION 1412b4970 FUN_1412b4970 body=49 status=ok
// SIG undefined FUN_1412b4970(void)

bool FUN_1412b4970(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x40);
    bVar2 = false;
    if (((lVar1 != 0) && (*(byte *)(lVar1 + 0x90) != 0)) &&
       (bVar2 = true, 1 < *(byte *)(lVar1 + 0x90))) {
      bVar2 = *(char *)(lVar1 + 0x1ac) != '\x03';
    }
  }
  return bVar2;
}



// FUNCTION 1412b49a2 FUN_1412b49a2 body=221 status=ok
// SIG undefined FUN_1412b49a2(void)

longlong FUN_1412b49a2(void)

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
  if (DAT_14caca3f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478c9ba7;
    local_40 = &LAB_1417b378f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Engine",L"NavigationSystemConfig",&DAT_14caca3f8,&DAT_1478c9ba6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caca3f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b4a80 FUN_1412b4a80 body=34 status=ok
// SIG undefined FUN_1412b4a80(void)

void FUN_1412b4a80(longlong param_1,undefined1 param_2)

{
  *(undefined8 *)(param_1 + 0x44) = DAT_14cad0ef0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
  *(undefined1 *)(param_1 + 0x15) = param_2;
  FUN_1400bcfd8();
  return;
}



// FUNCTION 1412b4aa2 FUN_1412b4aa2 body=408 status=ok
// SIG undefined FUN_1412b4aa2(void)

/* WARNING: Removing unreachable block (ram,0x0001412b4bef) */
/* WARNING: Removing unreachable block (ram,0x0001412b4b41) */

void FUN_1412b4aa2(longlong param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 uVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar5 = 0;
  do {
    auVar7 = pmovzxbd(in_XMM2,*(undefined4 *)(param_1 + 0xc + lVar5));
    auVar8 = pmovzxbd(in_XMM3,*(undefined4 *)(param_1 + 8 + lVar5));
    auVar10 = pmovzxbd(in_XMM4,*(undefined4 *)(param_1 + 4 + lVar5));
    auVar12 = pmovzxbd(in_XMM5,*(undefined4 *)(param_1 + lVar5));
    bVar1 = auVar12._0_4_ == param_2;
    bVar2 = auVar12._4_4_ == param_2;
    auVar13._4_4_ = -(uint)(auVar12._8_4_ == param_2);
    auVar13._0_4_ = -(uint)bVar2;
    auVar13._8_4_ = -(uint)(auVar12._12_4_ == param_2);
    auVar13._12_4_ = 0;
    uVar6 = (undefined1)param_2;
    if ((bool)(~bVar1 & 1)) {
      *(undefined1 *)(param_1 + lVar5) = uVar6;
    }
    auVar12._8_4_ = 0xffffffff;
    auVar12._0_8_ = 0xffffffffffffffff;
    auVar12._12_4_ = 0xffffffff;
    if (!bVar2) {
      *(undefined1 *)(param_1 + 1 + lVar5) = uVar6;
    }
    if (!bVar1) {
      *(undefined1 *)(param_1 + 2 + lVar5) = uVar6;
    }
    auVar13 = (auVar13 << 0x20 ^ auVar12) >> 0x30;
    auVar13 = packsswb(auVar13,auVar13);
    if ((auVar13[3] & 1) != 0) {
      *(undefined1 *)(param_1 + 3 + lVar5) = uVar6;
    }
    auVar11._0_4_ = -(uint)(auVar10._0_4_ == param_2);
    auVar11._4_4_ = -(uint)(auVar10._4_4_ == param_2);
    auVar11._8_4_ = -(uint)(auVar10._8_4_ == param_2);
    auVar11._12_4_ = -(uint)(auVar10._12_4_ == param_2);
    auVar10._8_4_ = 0xffffffff;
    auVar10._0_8_ = 0xffffffffffffffff;
    auVar10._12_4_ = 0xffffffff;
    in_XMM4 = auVar11 ^ auVar10;
    if ((in_XMM4[0] & 1) != 0) {
      *(undefined1 *)(param_1 + 4 + lVar5) = uVar6;
    }
    auVar14._0_8_ = in_XMM4._0_8_ << 0x30;
    auVar14._8_8_ = in_XMM4._8_8_ << 0x30 | in_XMM4._0_8_ >> 0x10;
    in_XMM5 = packsswb(auVar14,auVar14);
    if ((in_XMM5[5] & 1) != 0) {
      *(undefined1 *)(param_1 + 5 + lVar5) = uVar6;
    }
    if ((in_XMM4[8] & 1) != 0) {
      *(undefined1 *)(param_1 + 6 + lVar5) = uVar6;
    }
    if ((in_XMM4[0xc] & 1) != 0) {
      *(undefined1 *)(param_1 + 7 + lVar5) = uVar6;
    }
    bVar1 = auVar8._4_4_ == param_2;
    auVar4._4_4_ = -(uint)(auVar8._8_4_ == param_2);
    auVar4._0_4_ = -(uint)bVar1;
    auVar4._8_4_ = -(uint)(auVar8._12_4_ == param_2);
    auVar4._12_4_ = 0;
    auVar3._8_4_ = 0xffffffff;
    auVar3._0_8_ = 0xffffffffffffffff;
    auVar3._12_4_ = 0xffffffff;
    if (auVar8._0_4_ != param_2) {
      *(undefined1 *)(param_1 + 8 + lVar5) = uVar6;
    }
    if (!bVar1) {
      *(undefined1 *)(param_1 + 9 + lVar5) = uVar6;
    }
    *(undefined1 *)(param_1 + 10 + lVar5) = uVar6;
    auVar13 = (auVar4 << 0x20 ^ auVar3) >> 0x30;
    auVar13 = packsswb(auVar13,auVar13);
    if ((auVar13[0xb] & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb + lVar5) = uVar6;
    }
    auVar8._0_4_ = -(uint)(auVar7._0_4_ == param_2);
    auVar8._4_4_ = -(uint)(auVar7._4_4_ == param_2);
    auVar8._8_4_ = -(uint)(auVar7._8_4_ == param_2);
    auVar8._12_4_ = -(uint)(auVar7._12_4_ == param_2);
    auVar7._8_4_ = 0xffffffff;
    auVar7._0_8_ = 0xffffffffffffffff;
    auVar7._12_4_ = 0xffffffff;
    in_XMM2 = auVar8 ^ auVar7;
    if ((in_XMM2[0] & 1) != 0) {
      *(undefined1 *)(param_1 + 0xc + lVar5) = uVar6;
    }
    auVar9._0_8_ = in_XMM2._0_8_ << 0x30;
    auVar9._8_8_ = in_XMM2._8_8_ << 0x30 | in_XMM2._0_8_ >> 0x10;
    in_XMM3 = packsswb(auVar9,auVar9);
    if ((in_XMM3[0xd] & 1) != 0) {
      *(undefined1 *)(param_1 + 0xd + lVar5) = uVar6;
    }
    if ((in_XMM2[8] & 1) != 0) {
      *(undefined1 *)(param_1 + 0xe + lVar5) = uVar6;
    }
    if ((in_XMM2[0xf] & 1) != 0) {
      *(undefined1 *)(param_1 + 0xf + lVar5) = uVar6;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x20);
  return;
}



// FUNCTION 1412b4c3a FUN_1412b4c3a body=277 status=ok
// SIG undefined FUN_1412b4c3a(void)

undefined8 FUN_1412b4c3a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1412b4d49;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412b4d49;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1412b4d49:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412b4cf7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1412b4cf7;
    }
  }
  uVar6 = 0;
LAB_1412b4cf7:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b4d50 FUN_1412b4d50 body=26 status=ok
// SIG undefined FUN_1412b4d50(void)

void FUN_1412b4d50(undefined8 param_1)

{
  FUN_1412b4d6a();
  FUN_1412b536a(param_1);
  return;
}



// FUNCTION 1412b4d6a FUN_1412b4d6a body=1534 status=ok
// SIG undefined FUN_1412b4d6a(void)

void FUN_1412b4d6a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  undefined4 local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 == 0) goto LAB_1412b4f61;
  if (DAT_14cbadd90 == 0) {
    local_70 = &local_58;
    local_58 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1412b4f61;
  lVar6 = *(longlong *)(lVar5 + 0xf40);
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x3b38) + 0x18))(lVar6 + 0x3b38);
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_14480f766(lVar6 + 0x300);
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14480f766(lVar6 + 0x378);
    }
    plVar12 = (longlong *)(lVar6 + 0x328);
    local_58 = (code *)0x14b8357f8;
    local_50 = 0xe;
    uStack_4c = uStack_4c & 0xffffff00;
    uVar3 = FUN_14001a6c0(&local_58,1);
    FUN_1409ca370(plVar12,param_1,uVar3);
    uVar8 = (ulonglong)*(uint *)(lVar6 + 0x330);
    if (0 < (int)*(uint *)(lVar6 + 0x330)) {
      lVar17 = 0;
      bVar16 = false;
LAB_1412b4e75:
      lVar13 = lVar17 * 0x10;
      do {
        iVar14 = (int)uVar8;
        if (*(longlong *)(*plVar12 + 8 + lVar13) != 0) {
          lVar7 = FUN_144a34e94(*plVar12 + lVar13,1);
          if (lVar7 != 0) goto code_r0x0001412b4e9e;
          iVar14 = *(int *)(lVar6 + 0x330);
        }
        iVar9 = ~(uint)lVar17 + iVar14;
        if (iVar9 != 0) {
          iVar15 = 1;
          if (iVar9 < 1) {
            iVar15 = iVar9;
          }
          memmove((void *)(*(longlong *)(lVar6 + 0x328) + lVar13),
                  (void *)((longlong)(iVar14 - iVar15) * 0x10 + *(longlong *)(lVar6 + 0x328)),
                  (longlong)iVar15 << 4);
          iVar14 = *(int *)(lVar6 + 0x330);
        }
        uVar4 = iVar14 - 1;
        uVar8 = (ulonglong)uVar4;
        *(uint *)(lVar6 + 0x330) = uVar4;
        bVar16 = true;
        if ((int)uVar4 <= lVar17) goto LAB_1412b51c5;
      } while( true );
    }
    goto LAB_1412b4eb7;
  }
  goto LAB_1412b4f43;
code_r0x0001412b4e9e:
  lVar17 = lVar17 + 1;
  uVar8 = (ulonglong)*(int *)(lVar6 + 0x330);
  if ((longlong)uVar8 <= lVar17) goto code_r0x0001412b4ead;
  goto LAB_1412b4e75;
code_r0x0001412b4ead:
  if (bVar16) {
LAB_1412b51c5:
    FUN_1400bbcfc(plVar12);
  }
LAB_1412b4eb7:
  plVar12 = (longlong *)(lVar6 + 0x368);
  local_58 = (code *)0x14b8357f8;
  local_50 = 0xe;
  uStack_4c = uStack_4c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_58,1);
  FUN_1409ca370(plVar12,param_1,uVar3);
  uVar8 = (ulonglong)*(uint *)(lVar6 + 0x370);
  if (0 < (int)*(uint *)(lVar6 + 0x370)) {
    lVar17 = 0;
    bVar16 = false;
LAB_1412b4f01:
    lVar13 = lVar17 * 0x10;
    do {
      iVar14 = (int)uVar8;
      if (*(longlong *)(*plVar12 + 8 + lVar13) != 0) {
        lVar7 = FUN_144a34e94(*plVar12 + lVar13,1);
        if (lVar7 != 0) goto code_r0x0001412b4f2a;
        iVar14 = *(int *)(lVar6 + 0x370);
      }
      iVar9 = ~(uint)lVar17 + iVar14;
      if (iVar9 != 0) {
        iVar15 = 1;
        if (iVar9 < 1) {
          iVar15 = iVar9;
        }
        memmove((void *)(*(longlong *)(lVar6 + 0x368) + lVar13),
                (void *)((longlong)(iVar14 - iVar15) * 0x10 + *(longlong *)(lVar6 + 0x368)),
                (longlong)iVar15 << 4);
        iVar14 = *(int *)(lVar6 + 0x370);
      }
      uVar4 = iVar14 - 1;
      uVar8 = (ulonglong)uVar4;
      *(uint *)(lVar6 + 0x370) = uVar4;
      bVar16 = true;
      if ((int)uVar4 <= lVar17) goto LAB_1412b5231;
    } while( true );
  }
  goto LAB_1412b4f43;
code_r0x0001412b4f2a:
  lVar17 = lVar17 + 1;
  uVar8 = (ulonglong)*(int *)(lVar6 + 0x370);
  if ((longlong)uVar8 <= lVar17) goto code_r0x0001412b4f39;
  goto LAB_1412b4f01;
code_r0x0001412b4f39:
  if (bVar16) {
LAB_1412b5231:
    FUN_1400bbcfc(plVar12);
  }
LAB_1412b4f43:
  if ((*(longlong *)(lVar5 + 0x32f0) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    FUN_14480f766(*(longlong *)(lVar5 + 0x32f0) + 0x28);
  }
LAB_1412b4f61:
  *(undefined2 *)(param_1 + 0x140) = 0;
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (plVar12 = *(longlong **)(param_1 + 0x68), plVar12 != (longlong *)0x0)) {
    if (*(code **)(*plVar12 + 0x20) == (code *)&LAB_144a7e90a) {
      plVar12 = plVar12 + 0x143;
    }
    else {
      plVar12 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if ((int)plVar12[6] != *(int *)((longlong)plVar12 + 0x5c)) {
      plVar10 = plVar12 + 0xc;
      if ((longlong *)plVar12[0xd] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar12[0xd];
      }
      iVar14 = *(int *)((longlong)plVar10 +
                       (ulonglong)((int)plVar12[0xe] - 1U & *(uint *)(param_1 + 0x70)) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(plVar12[5] + (longlong)iVar14 * 0xe0) == *(uint *)(param_1 + 0x70)) {
            *(undefined8 *)(param_1 + 0x60) = 0;
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined4 *)(param_1 + 0x70) = 0;
            break;
          }
          iVar14 = *(int *)((longlong)iVar14 * 0xe0 + plVar12[5] + 0xd0);
        } while (iVar14 != -1);
      }
    }
  }
  lVar5 = DAT_14cbcb1e0;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cbcb1e0 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cbcb1e0;
    }
  }
  bVar11 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x80) = lVar5;
  lVar5 = DAT_14cbcb1e8;
  if ((bVar11 & 1) != 0) {
    if (DAT_14cbcb1e8 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cbcb1e8;
      bVar11 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x88) = lVar5;
  memcpy((void *)(param_1 + 0x90),&DAT_14cbcb1f0,0xa4);
  lVar5 = DAT_14cbcb298;
  if ((bVar11 & 1) != 0) {
    if (DAT_14cbcb298 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cbcb298;
    }
  }
  *(longlong *)(param_1 + 0x138) = lVar5;
  FUN_1449027d0(param_1,&local_58);
  lVar5 = *(longlong *)(local_58 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x200));
  *(int *)(lVar5 + 0x1f8) = *(int *)(lVar5 + 0x1f8) + 1;
  plVar12 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  *(int *)(lVar5 + 0x130) = *(int *)(lVar5 + 0x130) + 1;
  iVar14 = DAT_14cbd6a78;
  _Src = DAT_14cbd6a70;
  puVar2 = (undefined8 *)(lVar5 + 0xd8);
  if ((void **)puVar2 != &DAT_14cbd6a70) {
    lVar6 = (longlong)DAT_14cbd6a78;
    *(int *)(lVar5 + 0xe0) = DAT_14cbd6a78;
    if (iVar14 == 0 && *(int *)(lVar5 + 0xe4) == 0) {
      *(undefined4 *)(lVar5 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670(puVar2,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar2,_Src,lVar6 * 2);
      }
    }
  }
  *(undefined1 *)(lVar5 + 0x88) = 0;
  *(undefined2 *)(lVar5 + 0xfa) = 0;
  *(undefined1 *)(lVar5 + 0xfe) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x200));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b536a FUN_1412b536a body=1897 status=ok
// SIG undefined FUN_1412b536a(void)

void FUN_1412b536a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_1400d7050(param_1 + 0x30);
  if (lVar8 == 0) goto LAB_1412b57fc;
  if (DAT_14cbadd90 == 0) {
    local_80 = &local_58;
    local_58 = FUN_141030f22;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1459f2e4c;
    local_88 = &LAB_148c39de3;
    local_90 = &LAB_1457a9eb2;
    local_98 = &DAT_149e063b2;
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1412b57fc;
  lVar9 = *(longlong *)(lVar8 + 0xf40);
  if (lVar9 != 0) {
    lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x3b38) + 0x18))(lVar9 + 0x3b38);
    local_58 = FUN_145a0cca8;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_1412b5be0(lVar9 + 0x300,&local_48,param_1,&local_58);
    *(undefined8 *)(param_1 + 0x48) = local_48;
    local_58 = FUN_1458fd748;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_1412b5be0(lVar9 + 0x378,&local_48,param_1,&local_58);
    *(undefined8 *)(param_1 + 0x50) = local_48;
    FUN_1412b5b2e(&local_60);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    uVar4 = local_60;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      local_58 = (code *)(ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(lVar12 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_58;
        if (bVar14) {
          iVar6 = iVar7;
        }
      }
      local_58._0_4_ = uVar1;
      local_58 = (code *)CONCAT44(iVar6,(uint)local_58);
      uStack_50 = local_60;
      uVar4 = uStack_50;
      if ((((((local_60 != 0) && (iVar6 != 0)) && (-1 < (int)(uint)local_58)) &&
           (((int)(uint)local_58 < DAT_14c9647dc &&
            (plVar10 = (longlong *)
                       ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
            plVar10 != (longlong *)0x0)))) && ((int)plVar10[2] == iVar6)) &&
         (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
        FUN_1400796d0(*(undefined8 *)(*plVar10 + 0x10),local_60,1);
        uVar4 = uStack_50;
      }
    }
    uStack_50 = uVar4;
    FUN_14053c012(lVar9 + 0x328,&local_58);
    FUN_1412b5b2e(&local_68);
    local_58 = (code *)0x0;
    uStack_50 = 0;
    uVar4 = local_68;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      local_58 = (code *)(ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar6 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar12 + 0x10);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(lVar12 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_58;
        if (bVar14) {
          iVar6 = iVar7;
        }
      }
      local_58._0_4_ = uVar1;
      local_58 = (code *)CONCAT44(iVar6,(uint)local_58);
      uStack_50 = local_68;
      uVar4 = uStack_50;
      if ((((local_68 != 0) && (iVar6 != 0)) && (-1 < (int)(uint)local_58)) &&
         ((((int)(uint)local_58 < DAT_14c9647dc &&
           (plVar10 = (longlong *)
                      ((ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0)) &&
          (((int)plVar10[2] == iVar6 &&
           (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))))) {
        FUN_1400796d0(*(undefined8 *)(*plVar10 + 0x10),local_68,1);
        uVar4 = uStack_50;
      }
    }
    uStack_50 = uVar4;
    FUN_14053c012(lVar9 + 0x368,&local_58);
  }
  lVar8 = *(longlong *)(lVar8 + 0x32f0);
  if (lVar8 == 0) goto LAB_1412b57fc;
  local_58 = (code *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar3 = local_58;
  uStack_50 = CONCAT44(uStack_50._4_4_,3);
  *(undefined ***)local_58 = &PTR_LAB_14b9ae260;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  *(longlong *)(local_58 + 0x10) = lVar12;
  *(undefined ***)local_58 = &PTR_FUN_14b9ae1f0;
  *(longlong *)(local_58 + 0x18) = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar6;
  *(code **)(pcVar3 + 0x20) = FUN_140fc6576;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  if (((int)uStack_50 == 0) || (local_58 == (code *)0x0)) {
LAB_1412b5a0a:
    if ((int)uStack_50 == 0) {
      uVar13 = 0;
      goto LAB_1412b57ef;
    }
    if (local_58 != (code *)0x0) {
      uVar13 = 0;
      (*(code *)**(undefined8 **)local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1412b57dc;
    }
    uVar13 = 0;
  }
  else {
    cVar5 = (**(code **)(*(longlong *)local_58 + 0x30))();
    if (cVar5 == '\0') {
      goto LAB_1412b5a0a;
    }
    plVar10 = (longlong *)(lVar8 + 0x28);
    if (*(int *)(lVar8 + 0x3c) < 1) {
      iVar6 = *(int *)(lVar8 + 0x30);
      iVar7 = *(int *)(lVar8 + 0x38) + -1;
      *(int *)(lVar8 + 0x38) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar10 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar10 + (longlong)iVar11 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar10,iVar11);
              FUN_14005b248(plVar10);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar7 = *(int *)(lVar8 + 0x30);
          } while (iVar11 < iVar7);
        }
        iVar11 = 2;
        if (2 < iVar7 * 2) {
          iVar11 = iVar7 * 2;
        }
        *(int *)(lVar8 + 0x38) = iVar11;
        if ((iVar11 < iVar6) && (*(int *)(lVar8 + 0x34) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    uVar13 = 0;
    if (((int)uStack_50 != 0) && (local_58 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_58 + 0x38))(local_58,&local_48);
      uVar13 = local_48;
    }
    iVar6 = *(int *)(lVar8 + 0x30);
    *(uint *)(lVar8 + 0x30) = iVar6 + 1U;
    if (*(uint *)(lVar8 + 0x34) < iVar6 + 1U) {
      FUN_1447a71f6(plVar10,iVar6);
    }
    lVar8 = *plVar10;
    lVar9 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar8 + lVar9) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
    *(code **)(lVar8 + lVar9) = local_58;
    local_58 = (code *)0x0;
    *(int *)(lVar8 + 8 + lVar9) = (int)uStack_50;
LAB_1412b57dc:
    uStack_50 = uStack_50 & 0xffffffff00000000;
LAB_1412b57ef:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x58) = uVar13;
LAB_1412b57fc:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b5b2e FUN_1412b5b2e body=176 status=ok
// SIG undefined FUN_1412b5b2e(void)

undefined8 * FUN_1412b5b2e(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6d48) {
    FUN_144b3d300(&DAT_14cbd6d48);
    if (DAT_14cbd6d48 == -1) {
      builtin_wcsncpy(local_38,L"OnGrappleEnded",0xf);
      FUN_1446f470e(&DAT_14cbd6d40,local_38,1);
      _Init_thread_footer(&DAT_14cbd6d48);
    }
  }
  *param_1 = DAT_14cbd6d40;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b5be0 FUN_1412b5be0 body=774 status=ok
// SIG undefined FUN_1412b5be0(void)

undefined8 * FUN_1412b5be0(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b9a0b10;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b9ae160;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1412b5d8a;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1412b5d74;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_1412b5d74:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1412b5d8a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412b5f36 FUN_1412b5f36 body=26 status=ok
// SIG undefined FUN_1412b5f36(void)

void FUN_1412b5f36(undefined8 param_1)

{
  FUN_1412b5f50();
  FUN_1412b60ee(param_1);
  return;
}



// FUNCTION 1412b5f50 FUN_1412b5f50 body=284 status=ok
// SIG undefined FUN_1412b5f50(void)

void FUN_1412b5f50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((DAT_14c98e618 != 0) &&
      ((((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
        (lVar1 = param_1[0xcb], lVar1 != 0)) &&
       ((lVar2 = FUN_1405e2bf2(), lVar2 != 0 && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))))
       ))) && ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                lVar2 + 0x30 &&
               (((lVar1 = param_1[0xcb], lVar1 != 0 && (param_1[0xed] == 0)) &&
                ((*(byte *)(lVar3 + 0x155) & 0x20) == 0)))))) {
    local_28 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    lVar3 = FUN_1412b606d(lVar3,&local_28,0);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0xed] = lVar3;
    (**(code **)(*param_1 + 0x3b0))(param_1,(char)param_1[0xe7] != '\0');
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b606d FUN_1412b606d body=128 status=ok
// SIG undefined FUN_1412b606d(void)

undefined8 FUN_1412b606d(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    FUN_1405e2bf2();
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = *param_2;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_14126c5d6(param_1,&local_28,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b60ee FUN_1412b60ee body=2679 status=ok
// SIG undefined FUN_1412b60ee(void)

void FUN_1412b60ee(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *pcVar8;
  void *_Src;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  undefined2 *puVar20;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  ulonglong uStack_100;
  undefined1 local_f8;
  undefined2 uStack_f7;
  undefined1 local_f5;
  undefined1 uStack_f4;
  undefined2 uStack_f3;
  longlong local_f0;
  undefined2 *puStack_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined2 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  ulonglong uStack_b4;
  longlong *local_a8;
  undefined4 local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar12 = (**(code **)(*param_1 + 0xaa0))();
  if (lVar12 != 0) {
    lVar13 = FUN_141246a66();
    if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8
         ) == lVar13 + 0x30)) {
      lVar13 = *(longlong *)(lVar12 + 0x2d0);
      if (lVar13 != 0) {
        local_78 = *(undefined2 **)((longlong)param_1 + 0x7b4);
        uStack_70 = *(ulonglong *)((longlong)param_1 + 0x7bc);
        lVar15 = param_1[0xf7];
        uVar9 = *(undefined4 *)((longlong)param_1 + 0x7bc);
        lVar5 = param_1[0xf8];
        *(undefined4 *)(lVar13 + 0x1a8) = *(undefined4 *)((longlong)param_1 + 0x7b4);
        *(int *)(lVar13 + 0x1ac) = (int)lVar15;
        *(undefined4 *)(lVar13 + 0x1b0) = uVar9;
        *(int *)(lVar13 + 0x1b4) = (int)lVar5;
        *(undefined1 *)(lVar13 + 0x1b8) = 0;
        if (*(longlong *)(lVar13 + 0x318) != 0) {
          local_f8 = 0;
          uStack_f4 = 1;
          local_f0 = 0;
          puStack_e8 = (undefined2 *)0x0;
          local_108 = local_78;
          uStack_100 = uStack_70;
          FUN_1410da5ca();
        }
        lVar13 = *(longlong *)(lVar12 + 0x2d0);
        if (lVar13 != 0) {
          lVar15 = param_1[0xf6];
          puVar20 = *(undefined2 **)(lVar13 + 0x1d0);
          if ((DAT_14c950c29 == 1) && (puVar20 != (undefined2 *)0x0)) {
            FUN_1456cec3c(puVar20);
          }
          uVar4 = *(ulonglong *)(lVar13 + 0x1d8);
          if (((DAT_14c950c29 & 1) != 0) && (uVar4 != 0)) {
            FUN_1456cec3c(uVar4);
          }
          local_88._4_4_ =
               (undefined4)(CONCAT14(local_88._7_1_,*(undefined4 *)(lVar13 + 0x1e3)) >> 8);
          local_88 = (longlong *)CONCAT44(local_88._4_4_,*(undefined4 *)(lVar13 + 0x1e0));
          lVar5 = *(longlong *)(lVar13 + 0x1e8);
          if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
            FUN_1456cec3c(lVar5);
          }
          local_98 = *(undefined2 **)(lVar13 + 0x1f0);
          uStack_90 = *(ulonglong *)(lVar13 + 0x1f8);
          uVar14 = *(undefined8 *)(lVar13 + 0x200);
          plVar19 = *(longlong **)(lVar13 + 0x208);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          puVar18 = *(undefined2 **)(lVar13 + 0x210);
          local_78 = *(undefined2 **)(lVar13 + 0x21c);
          uStack_70 = *(ulonglong *)(lVar13 + 0x224);
          uVar6 = *(undefined8 *)(lVar12 + 0x2d0);
          local_108 = puVar20;
          if ((DAT_14c950c29 == 1) && (puVar20 != (undefined2 *)0x0)) {
            FUN_1456cec3c(puVar20);
          }
          uStack_100 = uVar4;
          if (((DAT_14c950c29 & 1) != 0) && (uVar4 != 0)) {
            FUN_1456cec3c(uVar4);
          }
          uStack_f4 = (undefined1)((ulonglong)local_88 >> 0x20);
          uStack_f3 = (undefined2)((ulonglong)local_88 >> 0x28);
          local_f8 = SUB81(local_88,0);
          uStack_f7 = (undefined2)((ulonglong)local_88 >> 8);
          local_f5 = (undefined1)((ulonglong)local_88 >> 0x18);
          local_f0 = lVar5;
          if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
            FUN_1456cec3c(lVar5);
          }
          puStack_e8 = local_98;
          uStack_e0 = uStack_90;
          local_d8 = uVar14;
          local_d0 = plVar19;
          local_c8 = puVar18;
          uStack_c0 = (int)lVar15;
          uStack_b4 = uStack_70;
          if (plVar19 == (longlong *)0x0) {
            uStack_bc = (undefined4)local_78;
            uStack_b8 = local_78._4_4_;
            FUN_141115af4(uVar6);
          }
          else {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            uStack_bc = (undefined4)local_78;
            uStack_b8 = local_78._4_4_;
            FUN_141115af4(uVar6);
            LOCK();
            plVar16 = plVar19 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          lVar13 = *(longlong *)(lVar12 + 0x2d0);
          if (lVar13 != 0) {
            lVar15 = param_1[0xf9];
            puVar20 = *(undefined2 **)(lVar13 + 0x1d0);
            if ((DAT_14c950c29 == 1) && (puVar20 != (undefined2 *)0x0)) {
              FUN_1456cec3c(puVar20);
            }
            uVar4 = *(ulonglong *)(lVar13 + 0x1d8);
            if (((DAT_14c950c29 & 1) != 0) && (uVar4 != 0)) {
              FUN_1456cec3c(uVar4);
            }
            local_88._4_4_ =
                 (undefined4)(CONCAT14(local_88._7_1_,*(undefined4 *)(lVar13 + 0x1e3)) >> 8);
            local_88 = (longlong *)CONCAT44(local_88._4_4_,*(undefined4 *)(lVar13 + 0x1e0));
            lVar5 = *(longlong *)(lVar13 + 0x1e8);
            if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
              FUN_1456cec3c(lVar5);
            }
            local_78 = *(undefined2 **)(lVar13 + 0x1f0);
            uStack_70 = *(ulonglong *)(lVar13 + 0x1f8);
            uVar14 = *(undefined8 *)(lVar13 + 0x200);
            plVar19 = *(longlong **)(lVar13 + 0x208);
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            local_98 = *(undefined2 **)(lVar13 + 0x210);
            uStack_90 = *(ulonglong *)(lVar13 + 0x218);
            uVar7 = *(ulonglong *)(lVar13 + 0x224);
            uVar6 = *(undefined8 *)(lVar12 + 0x2d0);
            local_108 = puVar20;
            if ((DAT_14c950c29 == 1) && (puVar20 != (undefined2 *)0x0)) {
              FUN_1456cec3c(puVar20);
            }
            uStack_100 = uVar4;
            if (((DAT_14c950c29 & 1) != 0) && (uVar4 != 0)) {
              FUN_1456cec3c(uVar4);
            }
            uStack_f4 = (undefined1)((ulonglong)local_88 >> 0x20);
            uStack_f3 = (undefined2)((ulonglong)local_88 >> 0x28);
            local_f8 = SUB81(local_88,0);
            uStack_f7 = (undefined2)((ulonglong)local_88 >> 8);
            local_f5 = (undefined1)((ulonglong)local_88 >> 0x18);
            local_f0 = lVar5;
            if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
              FUN_1456cec3c(lVar5);
            }
            puStack_e8 = local_78;
            uStack_e0 = uStack_70;
            local_d8 = uVar14;
            local_d0 = plVar19;
            local_c8 = local_98;
            uStack_b8 = (int)lVar15;
            uStack_b4 = uVar7;
            if (plVar19 == (longlong *)0x0) {
              uStack_c0 = (int)uStack_90;
              uStack_bc = uStack_90._4_4_;
              FUN_141115af4(uVar6);
            }
            else {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
              uStack_c0 = (int)uStack_90;
              uStack_bc = uStack_90._4_4_;
              FUN_141115af4(uVar6);
              LOCK();
              plVar16 = plVar19 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
                (**(code **)*plVar19)(plVar19);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                }
              }
            }
            plVar19 = *(longlong **)(lVar12 + 0x2d0);
            if (plVar19 != (longlong *)0x0) {
              fVar2 = *(float *)((longlong)param_1 + 0x7c4);
              if ((*(float *)((longlong)plVar19 + 0x184) != fVar2) ||
                 (NAN(*(float *)((longlong)plVar19 + 0x184)) || NAN(fVar2))) {
                *(float *)((longlong)plVar19 + 0x184) = fVar2;
                (**(code **)(*plVar19 + 0x330))();
              }
            }
          }
        }
      }
      if ((*(char *)((longlong)param_1 + 0x681) == '\x01') && (*(longlong *)(lVar12 + 0x2d8) != 0))
      {
        iVar11 = *(int *)((longlong)param_1 + 0x664);
        FUN_14774df6c(*(longlong *)(lVar12 + 0x2d8),
                      (float)(int)param_1[0xcc] + (float)(int)param_1[0xcc]);
        FUN_14774d974(*(undefined8 *)(lVar12 + 0x2d8),(float)iVar11 + (float)iVar11);
      }
      if (*(char *)((longlong)param_1 + 0x7cc) == '\0') {
        plVar19 = (longlong *)&DAT_14c844840;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
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
      else {
        plVar19 = param_1 + 0xfa;
        plVar16 = (longlong *)param_1[0xfa];
        if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
          plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
        }
        FUN_1447a1fc0(plVar16);
        plVar16 = (longlong *)*plVar19;
        pcVar8 = *(code **)(*plVar16 + 0x28);
        if (pcVar8 == FUN_14482841c) {
          plVar17 = plVar16 + 3;
          if (plVar16[5] != 0) {
            plVar17 = (longlong *)(plVar16[5] + 8);
          }
        }
        else if (pcVar8 == (code *)&LAB_14010c34c) {
          plVar17 = plVar16 + 2;
        }
        else {
          plVar17 = (longlong *)(*pcVar8)(plVar16);
        }
        if ((int)plVar17[1] < 2) {
          lVar13 = param_1[0xf4];
          if (lVar13 == 0) {
            uVar14 = FUN_14036a63e();
            lVar13 = FUN_14477b664(uVar14);
            param_1[0xf4] = lVar13;
          }
          plVar19 = param_1 + 0xf3;
          lVar15 = param_1[0xf5];
          if (lVar15 == 0) {
            if ((lVar13 == 0) || (*plVar19 == 0)) goto LAB_1412b676b;
            plVar16 = *(longlong **)(lVar13 + 0xb8);
            if ((plVar16 == (longlong *)0x0) ||
               (cVar10 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar10 == '\0')) {
              param_1[0xf5] = 0;
              goto LAB_1412b676b;
            }
            uVar14 = (**(code **)(*plVar16 + 0x110))(plVar16);
            lVar15 = FUN_144aff482(uVar14,plVar19);
            param_1[0xf5] = lVar15;
            if (lVar15 == 0) goto LAB_1412b676b;
            lVar13 = param_1[0xf4];
          }
          if (lVar13 == 0) {
            uVar14 = FUN_14036a63e();
            lVar13 = FUN_14477b664(uVar14);
            param_1[0xf4] = lVar13;
            lVar15 = param_1[0xf5];
            if (((lVar15 == 0) && (lVar15 = 0, lVar13 != 0)) && (*plVar19 != 0)) {
              plVar16 = *(longlong **)(lVar13 + 0xb8);
              if ((plVar16 == (longlong *)0x0) ||
                 (cVar10 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar10 == '\0')) {
                lVar15 = 0;
              }
              else {
                uVar14 = (**(code **)(*plVar16 + 0x110))(plVar16);
                lVar15 = FUN_144aff482(uVar14,plVar19);
              }
              param_1[0xf5] = lVar15;
            }
          }
          plVar19 = (longlong *)(lVar15 + 0x18);
        }
      }
      if (*(longlong *)(lVar12 + 0x2d0) != 0) {
        plVar16 = (longlong *)*plVar19;
        if (*(code **)(*plVar16 + 0x50) != FUN_144828418) {
          plVar16 = (longlong *)(**(code **)(*plVar16 + 0x50))();
        }
        FUN_1447a1fc0(plVar16);
        plVar16 = (longlong *)*plVar19;
        pcVar8 = *(code **)(*plVar16 + 0x28);
        if (pcVar8 == FUN_14482841c) {
          plVar17 = plVar16 + 3;
          if (plVar16[5] != 0) {
            plVar17 = (longlong *)(plVar16[5] + 8);
          }
        }
        else if (pcVar8 == (code *)&LAB_14010c34c) {
          plVar17 = plVar16 + 2;
        }
        else {
          plVar17 = (longlong *)(*pcVar8)(plVar16);
        }
        local_108 = (undefined2 *)0x0;
        uVar3 = *(uint *)(plVar17 + 1);
        _Src = (void *)*plVar17;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
        if ((longlong)(int)uVar3 == 0) {
          uStack_100 = (ulonglong)uVar3;
        }
        else {
          FUN_1446dd670(&local_108,uVar3,0);
          memcpy(local_108,_Src,(longlong)(int)uVar3 * 2);
        }
        FUN_1400b22c2(&local_78,&DAT_14b9d8176);
        FUN_140056680(&local_98,&DAT_149e01f72);
        puVar20 = &DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          puVar20 = local_98;
        }
        puVar18 = &DAT_149dfb77a;
        if ((int)uStack_70 != 0) {
          puVar18 = local_78;
        }
        iVar11 = FUN_1448097c4(&local_108,puVar18,puVar20,1);
        if (iVar11 < 1) {
          plVar16 = *(longlong **)(lVar12 + 0x2d0);
          local_88 = (longlong *)*plVar19;
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 8))();
          }
          local_80 = (undefined4)plVar19[1];
          (**(code **)(*plVar16 + 0x348))(plVar16);
        }
        else {
          FUN_140009b9a(&local_88,&local_108);
          plVar19 = *(longlong **)(lVar12 + 0x2d0);
          local_a8 = local_88;
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 8))();
          }
          local_a0 = local_80;
          (**(code **)(*plVar19 + 0x348))(plVar19);
          if (local_88 != (longlong *)0x0) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      (**(code **)(*param_1 + 0xab8))(param_1);
    }
  }
LAB_1412b676b:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b6b66 FUN_1412b6b66 body=1830 status=ok
// SIG undefined FUN_1412b6b66(void)

void FUN_1412b6b66(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_c8 = FUN_1446ddbd2();
      local_c0 = FUN_1468d96f0;
      local_d0 = 0;
      local_d8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_28);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_c8 = FUN_1446ddbd2();
      local_c0 = FUN_141710108;
      local_d0 = 0x1000000000000000;
      local_d8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_48);
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_c8 = FUN_1446ddbd2();
      local_c0 = FUN_141710108;
      local_d0 = 0x1000000000000000;
      local_d8 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_68);
    }
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_c8 = FUN_1446ddbd2();
      local_c0 = FUN_140dafe7a;
      local_d0 = 0;
      local_d8 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78 = *(void **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_78);
    }
  }
  _Src = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_70;
  local_80 = (int)uStack_70;
  if (lVar4 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,uStack_70 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar4 * 2);
  }
  local_a0 = local_68;
  uVar3 = FUN_14477b664(uStack_60);
  local_98 = FUN_14477b664(uVar3);
  local_90 = local_58;
  local_b8 = local_48;
  uVar3 = FUN_14477b664(uStack_40);
  local_b0 = FUN_14477b664(uVar3);
  local_a8 = local_38;
  FUN_1412b728e(local_28,&local_b8,&local_a0,&local_88);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b728e FUN_1412b728e body=653 status=ok
// SIG undefined FUN_1412b728e(void)

void FUN_1412b728e(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
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
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar4 = FUN_140d8fa50();
    lVar3 = FUN_14477b664(uVar4);
    param_2[1] = lVar3;
  }
  bVar7 = true;
  if (((param_2[2] == 0) && (bVar7 = false, lVar3 != 0)) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1412b752f:
      lVar3 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_1412b752f;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar3 = FUN_144aff482(uVar4,param_2);
    }
    param_2[2] = lVar3;
    bVar7 = lVar3 != 0;
  }
  if (param_1 == (longlong *)0x0) goto LAB_1412b73aa;
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((bool)(bVar7 ^ 1U | lVar3 == 0)) goto LAB_1412b73aa;
  if (DAT_14cbadd90 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1459f2e4c;
    local_68 = &LAB_148c39de3;
    local_70 = &LAB_1457a9eb2;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
      != DAT_14cbadd90 + 0x30)) goto LAB_1412b73aa;
  lVar3 = FUN_1412b7534(param_1);
  if (lVar3 == 0) goto LAB_1412b73aa;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar4 = FUN_1465c62fc();
    lVar6 = FUN_14477b664(uVar4);
    param_3[1] = lVar6;
  }
  lVar5 = param_3[2];
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*param_3 != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1412b74a1:
      lVar5 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_1412b74a1;
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar4,param_3);
    }
    param_3[2] = lVar5;
  }
  FUN_1412b76d0(lVar3,lVar5);
LAB_1412b73aa:
  if (*param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b7534 FUN_1412b7534 body=105 status=ok
// SIG undefined FUN_1412b7534(void)

void FUN_1412b7534(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1412b75ea();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1412b759e(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b759e FUN_1412b759e body=76 status=ok
// SIG undefined FUN_1412b759e(void)

void FUN_1412b759e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1412b75ea();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1412b75db;
    }
  }
  lVar2 = 0;
LAB_1412b75db:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1412b75ea FUN_1412b75ea body=228 status=ok
// SIG undefined FUN_1412b75ea(void)

longlong FUN_1412b75ea(void)

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
  if (DAT_14cbb2630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c591bf;
    local_40 = FUN_1465f629a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_MenuTutorial",&DAT_14cbb2630,
                  &DAT_148c591be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b76d0 FUN_1412b76d0 body=2137 status=ok
// SIG undefined FUN_1412b76d0(void)

void FUN_1412b76d0(longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  void *_Src;
  code *pcVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  code *local_130;
  int local_124;
  PSRWLOCK local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108 [2];
  code *local_f8;
  int local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 *local_a0;
  ulonglong *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_2 == 0) {
    local_b8 = 0;
  }
  else {
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_b8,puVar14,1);
  }
  lVar9 = FUN_140495e96(param_1 + 0x30);
  if (lVar9 != 0) {
    if (*(char *)(lVar9 + 0x430) != '\x01') goto LAB_1412b7e0e;
    if ((longlong)*(int *)(lVar9 + 0x440) != 0) {
      lVar17 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 0x438) + lVar17) == local_b8) goto LAB_1412b7e0e;
        lVar17 = lVar17 + 8;
      } while ((longlong)*(int *)(lVar9 + 0x440) * 8 != lVar17);
    }
  }
  FUN_1449027d0(param_1,&local_f8);
  plVar3 = *(longlong **)(local_f8 + 0x150);
  SRWLock = (PSRWLOCK)(plVar3 + 9);
  AcquireSRWLockShared(SRWLock);
  plVar13 = (longlong *)CONCAT44(uStack_ec,local_f0);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((longlong)(int)plVar3[1] != 0) {
    lVar9 = 0;
    do {
      if (*(longlong *)(*plVar3 + lVar9) == local_b8) {
        ReleaseSRWLockShared(SRWLock);
        goto LAB_1412b7e0e;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)plVar3[1] * 8 != lVar9);
  }
  lVar9 = plVar3[3];
  if (lVar9 == 0) {
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    lVar17 = *(longlong *)(param_2 + 0x28);
    ReleaseSRWLockShared(SRWLock);
    if (lVar9 != lVar17) {
      FUN_14155ce56(param_1);
    }
  }
  lVar9 = FUN_1400d7050(param_1 + 0x30);
  if (lVar9 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_f8 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1459f2e4c;
      local_148 = &LAB_148c39de3;
      local_150 = &LAB_1457a9eb2;
      local_158 = &DAT_149e063b2;
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = 0x3de0;
      local_140 = &local_f8;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1400021e4(&DAT_14cbd63d0,&local_80);
      if ((int)local_78 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)CONCAT44(uStack_7c,local_80);
      }
      FUN_140002266(&local_f8,L"UI.State.%s",puVar15);
      iVar11 = local_f0 + -1;
      if (local_f0 == 0) {
        iVar11 = 0;
      }
      FUN_1446f82e2(&local_90,iVar11,local_f8,1);
      puVar6 = local_90;
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_90,puVar6,1);
      if (local_f8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_7c,local_80) != 0) {
        FUN_1400020a8();
      }
      cVar7 = FUN_140426394(lVar9 + 0xd98,&local_90);
      if (cVar7 == '\0') {
        FUN_1403ca8ec(lVar9 + 0xd98,&local_90);
      }
    }
  }
  FUN_1449027d0(param_1,&local_f8);
  plVar3 = *(longlong **)(local_f8 + 0x150);
  local_120 = (PSRWLOCK)(plVar3 + 9);
  AcquireSRWLockExclusive(local_120);
  *(int *)(plVar3 + 8) = (int)plVar3[8] + 1;
  plVar13 = (longlong *)CONCAT44(uStack_ec,local_f0);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  iVar11 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar11 + 1U) {
    FUN_1446f84a2(plVar3,iVar11);
    *(longlong *)(*plVar3 + (longlong)iVar11 * 8) = local_b8;
LAB_1412b7a13:
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  }
  else {
    *(longlong *)(*plVar3 + (longlong)iVar11 * 8) = local_b8;
    if (iVar11 != -1) goto LAB_1412b7a13;
  }
  if (*(longlong *)(param_2 + 0x28) == plVar3[3]) {
    if ((int)plVar3[4] == 0) {
      iVar11 = 1;
      goto LAB_1412b7a30;
    }
  }
  else {
    iVar11 = (int)plVar3[4] + 1;
LAB_1412b7a30:
    plVar3[3] = *(longlong *)(param_2 + 0x28);
    *(int *)(plVar3 + 4) = iVar11;
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar17 = 0;
    lVar9 = 0;
    do {
      FUN_14664043c(&local_f8);
      pcVar5 = local_f8;
      lVar18 = *(longlong *)(param_2 + 0x18);
      pcVar4 = *(code **)(lVar18 + 0x28 + lVar17);
      if (local_f8 != pcVar4) {
        local_f8 = pcVar4;
        if (pcVar4 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar4 + 8))();
        }
        if (pcVar5 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar5 + 0x10))(pcVar5);
        }
      }
      local_f0 = *(int *)(lVar18 + 0x30 + lVar17);
      FUN_14023409e(&local_118,*(longlong *)(param_2 + 0x18) + lVar17 + 0x18,1);
      local_80 = 0;
      local_68 = 0;
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_a0 = &local_80;
      local_98 = local_60;
      FUN_14010d304(&local_90,&local_a0);
      local_b0 = local_118;
      local_a8 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_110 + 1) = (int)local_110[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_108,&local_b0,&local_90);
      FUN_14007f2db(local_90,local_88);
      if (local_90 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (plStack_70 != (longlong *)0x0) {
        (**(code **)(*plStack_70 + 0x10))();
      }
      plVar13 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      FUN_140008f88(local_e8,local_108);
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      lVar18 = *(longlong *)(param_2 + 0x18);
      if ((void **)(lVar18 + lVar17 + 0x60) != &local_c8) {
        iVar11 = *(int *)(lVar18 + 0x68 + lVar17);
        _Src = *(void **)(lVar18 + 0x60 + lVar17);
        local_c0 = iVar11;
        if (iVar11 == 0 && local_bc == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,iVar11);
          if (iVar11 != 0) {
            memcpy(local_c8,_Src,(longlong)iVar11 * 2);
          }
        }
      }
      lVar18 = *(longlong *)(param_2 + 0x18);
      iVar11 = *(int *)(lVar18 + 0x3c + lVar17);
      if (((((iVar11 == 0) || (uVar8 = *(uint *)(lVar18 + 0x38 + lVar17), (int)uVar8 < 0)) ||
           (DAT_14c9647dc <= (int)uVar8)) ||
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar13 == (longlong *)0x0 || ((int)plVar13[2] != iVar11)))) ||
         (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (*plVar13 == 0)))) {
        if (*(longlong *)(lVar18 + 0x40 + lVar17) != 0) {
          lVar10 = FUN_140007850();
          cVar7 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar10 == 0) || (cVar7 == '\0')) {
            if (lVar10 != 0) {
              uVar8 = *(uint *)(lVar10 + 0xc);
              goto LAB_1412b7d16;
            }
            *(undefined8 *)(lVar18 + 0x38 + lVar17) = 0;
          }
          else {
            uVar8 = *(uint *)(lVar10 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
LAB_1412b7d16:
              *(uint *)(lVar18 + 0x38 + lVar17) = uVar8;
              if ((int)uVar8 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              iVar11 = *(int *)(lVar12 + 0x10);
              if (*(int *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar16 = DAT_14c964868 + 1;
                bVar19 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar19) {
                  local_124 = iVar16;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar16);
                  iVar16 = local_124;
                }
                LOCK();
                iVar11 = *(int *)(lVar12 + 0x10);
                bVar19 = iVar11 == 0;
                if (bVar19) {
                  *(int *)(lVar12 + 0x10) = iVar16;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar19) {
                  iVar11 = iVar16;
                }
              }
              *(int *)(lVar18 + 0x3c + lVar17) = iVar11;
            }
            if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0) {
              lVar18 = *(longlong *)(param_2 + 0x18);
              goto LAB_1412b7d61;
            }
          }
        }
      }
      else {
LAB_1412b7d61:
        FUN_140390f7a(lVar18 + lVar17 + 0x38,local_d8);
      }
      FUN_145d416d2(plVar3 + 5,&local_f8);
      FUN_1459829fa(&local_f8);
      lVar9 = lVar9 + 1;
      lVar17 = lVar17 + 0x70;
    } while (lVar9 < *(int *)(param_2 + 0x20));
  }
  ReleaseSRWLockExclusive(local_120);
LAB_1412b7e0e:
  if ((local_60[0] ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b7f2a FUN_1412b7f2a body=109 status=ok
// SIG undefined FUN_1412b7f2a(void)

void FUN_1412b7f2a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a1ca480;
  if (param_1[0x42] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x42] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x41] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x41] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  return;
}



// FUNCTION 1412b7f97 FUN_1412b7f97 body=60 status=ok
// SIG undefined FUN_1412b7f97(void)

void FUN_1412b7f97(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1412b7fd3(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412b7fd3 FUN_1412b7fd3 body=51 status=ok
// SIG undefined FUN_1412b7fd3(void)

void FUN_1412b7fd3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x20)])(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1412b8006 FUN_1412b8006 body=77 status=ok
// SIG undefined FUN_1412b8006(void)

void FUN_1412b8006(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412b8054 FUN_1412b8054 body=86 status=ok
// SIG undefined FUN_1412b8054(void)

void FUN_1412b8054(longlong param_1)

{
  if (*(char *)(param_1 + 0x9f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x9f0) = 0;
  }
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  return;
}



// FUNCTION 1412b80b0 FUN_1412b80b0 body=49 status=ok
// SIG undefined FUN_1412b80b0(void)

void FUN_1412b80b0(void)

{
  if (DAT_14c967960 != (longlong *)0x0) {
    (**(code **)(*DAT_14c967960 + 0x10))();
    DAT_14c967960 = (longlong *)0x0;
    CoUninitialize();
  }
  return;
}



// FUNCTION 1412b80e2 FUN_1412b80e2 body=264 status=ok
// SIG undefined FUN_1412b80e2(void)

undefined8 FUN_1412b80e2(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1412b81e4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412b81e4;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_1412b81e4:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412b819c;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1412b819c;
    }
  }
  uVar6 = 0;
LAB_1412b819c:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b81ec FUN_1412b81ec body=395 status=ok
// SIG undefined FUN_1412b81ec(void)

void FUN_1412b81ec(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1412b8378();
  local_70 = *(longlong **)(param_1 + 0x70);
  local_28 = local_70 + 2;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if ((int)local_70[5] != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_38 = 0;
  local_48 = local_70;
  local_40 = local_70;
  if (iStack_1c < (int)local_28[3]) {
    do {
      lVar1 = FUN_14479d2ce((longlong)iStack_54 * 0x18 + *local_70);
      if (lVar1 == 0) {
        FUN_147475d22(local_48);
        local_38 = CONCAT11(local_38._1_1_,1);
      }
      else if ((*(char *)(*local_70 + 0xc + (longlong)iStack_54 * 0x18) != '\0') ||
              (0 < *(int *)(*local_70 + (longlong)iStack_54 * 0x18 + 8))) {
        *(byte *)(lVar1 + 0xbc) = *(byte *)(lVar1 + 0xbc) | 8;
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_147475ace(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b8378 FUN_1412b8378 body=1049 status=ok
// SIG undefined FUN_1412b8378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b8378(void)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  void *pvVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  
  if (DAT_14caa5f68 == 0) {
    uVar20 = 1;
    uVar12 = 0;
    iVar13 = 0;
    uVar4 = 0;
  }
  else {
    puVar17 = &DAT_14caa5f50;
    if (DAT_14caa5f60 != (uint *)0x0) {
      puVar17 = DAT_14caa5f60;
    }
    uVar4 = *puVar17;
    if (uVar4 == 0) {
      iVar13 = DAT_14caa5f68 + 0x1e;
      if (-1 < (int)(DAT_14caa5f68 - 1)) {
        iVar13 = DAT_14caa5f68 - 1;
      }
      uVar12 = 0;
      uVar20 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar20 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar20 == uVar12) goto LAB_1412b8537;
        iVar13 = iVar13 + 0x20;
        uVar4 = puVar17[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar20 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar20 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar4 = (iVar13 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14caa5f68 <= (int)uVar4) {
      uVar4 = DAT_14caa5f68;
    }
  }
  if ((int)uVar4 < (int)DAT_14caa5f68) {
    uVar9 = 0xffffffff;
    lVar7 = DAT_14caa5f40;
    uVar3 = DAT_14caa5f68;
    do {
      iVar11 = *(int *)(lVar7 + 4 + (longlong)(int)uVar4 * 0x48);
      if ((((iVar11 == 0) ||
           (uVar4 = *(uint *)(lVar7 + (longlong)(int)uVar4 * 0x48), (int)uVar4 < 0)) ||
          (DAT_14c9647dc <= (int)uVar4)) ||
         (((lVar19 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar19 == 0 ||
           (*(int *)(lVar19 + 0x10) != iVar11)) || ((*(uint *)(lVar19 + 8) & 0x10200000) != 0)))) {
        FUN_14746854a();
        DAT_14c760ebc = DAT_14c760ebc + 1;
        lVar7 = DAT_14caa5f40;
        uVar3 = DAT_14caa5f68;
      }
      uVar9 = uVar9 & ~(uint)uVar20;
      puVar17 = DAT_14caa5f60;
      if (DAT_14caa5f60 == (uint *)0x0) {
        puVar17 = &DAT_14caa5f50;
      }
      iVar11 = (int)uVar12;
      lVar19 = (longlong)iVar11;
      uVar4 = puVar17[lVar19] & uVar9;
      if (uVar4 == 0) {
        iVar5 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar5 = uVar3 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar11) {
          iVar6 = iVar11;
        }
        if (iVar5 <= iVar11) break;
        lVar18 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar4 = puVar17[lVar19 + lVar18 + 1];
          if (uVar4 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar6 - lVar19 == lVar18) goto LAB_1412b8537;
        }
        uVar12 = (ulonglong)(iVar11 + (int)lVar18 + 1);
        uVar9 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar20 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar4 = (iVar13 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while ((int)uVar4 < (int)uVar3);
  }
LAB_1412b8537:
  uVar4 = DAT_14caa5f48;
  lVar7 = DAT_14caa5f40;
  iVar13 = DAT_14caa5f74;
  lVar19 = (longlong)DAT_14caa5f74;
  if (lVar19 != 0) {
    uVar9 = DAT_14caa5f48 - DAT_14caa5f74;
    uVar3 = uVar9;
    if (DAT_14caa5f70 == -1) {
      bVar2 = false;
    }
    else {
      lVar18 = DAT_14caa5f40 + 0x48;
      bVar2 = false;
      iVar11 = DAT_14caa5f70;
      uVar15 = DAT_14caa5f48;
      do {
        iVar5 = *(int *)(lVar7 + 4 + (longlong)iVar11 * 0x48);
        if (iVar11 < (int)uVar9) {
          puVar17 = DAT_14caa5f60;
          if (DAT_14caa5f60 == (uint *)0x0) {
            puVar17 = &DAT_14caa5f50;
          }
          pvVar8 = (void *)(lVar18 + (longlong)(int)(uVar15 - 1) * 0x48);
          uVar14 = uVar15;
          do {
            uVar15 = uVar14 - 1;
            uVar16 = uVar14 + 0x1e;
            if (-1 < (int)uVar15) {
              uVar16 = uVar15;
            }
            pvVar8 = (void *)((longlong)pvVar8 + -0x48);
            uVar14 = uVar15;
          } while ((puVar17[(int)uVar16 >> 5] >> (uVar15 & 0x1f) & 1) == 0);
          memmove((void *)(lVar7 + (longlong)iVar11 * 0x48),pvVar8,0x48);
          puVar17 = DAT_14caa5f60;
          if (DAT_14caa5f60 == (uint *)0x0) {
            puVar17 = &DAT_14caa5f50;
          }
          iVar6 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar6 = iVar11;
          }
          puVar17[iVar6 >> 5] = puVar17[iVar6 >> 5] | 1 << ((byte)iVar11 & 0x1f);
          bVar2 = true;
        }
        iVar11 = iVar5;
      } while (iVar5 != -1);
      if (DAT_14caa5f48 - uVar4 != 0) {
        pvVar8 = (void *)((longlong)(int)uVar9 * 0x48 + DAT_14caa5f40);
        memmove(pvVar8,(void *)((longlong)pvVar8 + lVar19 * 0x48),
                (longlong)(int)(DAT_14caa5f48 - uVar4) * 0x48);
        uVar3 = DAT_14caa5f48 - iVar13;
      }
    }
    DAT_14caa5f48 = uVar3;
    if (DAT_14caa5f68 - uVar4 != 0) {
      puVar17 = &DAT_14caa5f50;
      if (DAT_14caa5f60 != (uint *)0x0) {
        puVar17 = DAT_14caa5f60;
      }
      FUN_14493566c(puVar17,uVar9,puVar17,uVar4,DAT_14caa5f68 - uVar4);
      uVar9 = DAT_14caa5f68 - iVar13;
    }
    uVar4 = uVar9 + 0x1f;
    if (-1 < (int)uVar9) {
      uVar4 = uVar9;
    }
    DAT_14caa5f68 = uVar9;
    if ((int)uVar9 % 0x20 != 0) {
      puVar17 = &DAT_14caa5f50;
      if (DAT_14caa5f60 != (uint *)0x0) {
        puVar17 = DAT_14caa5f60;
      }
      bVar10 = -(char)((int)uVar9 % 0x20);
      puVar17[(int)uVar4 >> 5] = (puVar17[(int)uVar4 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
    }
    _DAT_14caa5f70 = 0xffffffff;
    if (DAT_14caa5f4c == DAT_14caa5f48) {
      if (bVar2) {
        DAT_14caa5f74 = 0;
        uVar4 = DAT_14caa5f4c;
LAB_1412b8702:
        DAT_14caa5f88 = 1;
        if (3 < uVar4 - DAT_14caa5f74) {
          uVar12 = (ulonglong)(uVar4 - DAT_14caa5f74 & 0xfffffffe) + 0xf;
          lVar7 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          DAT_14caa5f88 = 1 << ((byte)lVar7 & 0x1f);
        }
        FUN_14746836c();
        return;
      }
    }
    else {
      FUN_1403af08a(&DAT_14caa5f40);
      if (bVar2) {
        uVar4 = DAT_14caa5f48;
        goto LAB_1412b8702;
      }
    }
  }
  return;
}



// FUNCTION 1412b8792 FUN_1412b8792 body=297 status=ok
// SIG undefined FUN_1412b8792(void)

void FUN_1412b8792(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_1447210f0();
  FUN_1412b88d4(&local_48,uVar5);
  if (local_40 != (longlong *)0x0) {
    iVar4 = (int)local_40[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_40[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(local_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_40;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_48 != 0 && *(char *)(param_1 + 0x848) == '\x02') {
        if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x7c0);
          lVar8 = (longlong)*(int *)(param_1 + 0x7c8) << 3;
          do {
            lVar6 = FUN_14479d2ce(lVar9);
            if (lVar6 != 0) {
              FUN_148d20fa6(local_48,lVar6,param_1 + 0x840);
            }
            lVar9 = lVar9 + 8;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        FUN_148d21310(local_48,param_1 + 0x840);
      }
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412b88d4 FUN_1412b88d4 body=310 status=ok
// SIG undefined FUN_1412b88d4(void)

longlong * FUN_1412b88d4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cbc9928;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b8a0c FUN_1412b8a0c body=339 status=ok
// SIG undefined FUN_1412b8a0c(void)

undefined8 FUN_1412b8a0c(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (DAT_14c867cd8 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x58);
    bVar5 = (byte)param_2;
    *(byte *)(param_1 + 0x58) = bVar5;
    if (((bVar5 ^ 1) & bVar1) == 1) {
      uVar7 = (ulonglong)*(int *)(param_1 + 0x120);
      if (0 < (longlong)uVar7) {
        lVar8 = uVar7 << 4;
        do {
          lVar8 = lVar8 + -0x10;
          if ((longlong)uVar7 <= (longlong)*(int *)(param_1 + 0x120)) {
            (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x118) + lVar8) + 0x38))();
          }
          bVar4 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar4);
      }
      iVar2 = *(int *)(param_1 + 0x1d0);
      if ((longlong)iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x59) = 0;
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x1c8);
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar8 + lVar9);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) {
            FUN_14589483e();
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar9);
        lVar8 = *(longlong *)(param_1 + 0x1c8);
        iVar2 = *(int *)(param_1 + 0x1d0);
        *(undefined1 *)(param_1 + 0x59) = 0;
        if ((longlong)iVar2 != 0) {
          lVar9 = 0;
          do {
            lVar3 = *(longlong *)(lVar8 + lVar9);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) {
              FUN_1412b8b68();
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar2 * 0x10 != lVar9);
        }
      }
      if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
        FUN_1469b5f16(param_1 + 8);
        FUN_1469b6906(param_1 + 8);
      }
    }
    if (bVar1 != bVar5) {
      uVar6 = (**(code **)(*(longlong *)(param_1 + -0x148) + 0x1e0))((longlong *)(param_1 + -0x148))
      ;
      FUN_140898514(uVar6,param_2);
    }
  }
  return 1;
}



// FUNCTION 1412b8b68 FUN_1412b8b68 body=112 status=ok
// SIG undefined FUN_1412b8b68(void)

void FUN_1412b8b68(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x1e8);
  if (plVar2 != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x1f0);
    if (plVar3 == (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar2 + 0x40))();
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      cVar4 = (**(code **)(*plVar2 + 0x40))();
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
    if (cVar4 != '\0') {
      FUN_1469b781a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1412b8bd8 FUN_1412b8bd8 body=716 status=ok
// SIG undefined FUN_1412b8bd8(void)

void FUN_1412b8bd8(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_38 = 0;
  uStack_31 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else {
      if (pcVar1 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        uStack_38 = (undefined7)uVar2;
        uStack_31 = (undefined1)((ulonglong)uVar2 >> 0x38);
        goto LAB_1412b8c9e;
      }
      (*pcVar1)(uVar2,param_2,&uStack_38);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
LAB_1412b8c9e:
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar1 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar1 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_39);
    }
    else if (pcVar1 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_39);
    }
    else if (pcVar1 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
      local_39 = (undefined1)uVar2;
      uStack_38 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar1)(uVar2,param_2,&local_39);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT17(uStack_31,uStack_38);
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  uVar2 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar2);
  local_48 = local_28;
  FUN_1412b8ea6(param_1,&local_58,puVar4);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b8ea6 FUN_1412b8ea6 body=120 status=ok
// SIG undefined FUN_1412b8ea6(void)

void FUN_1412b8ea6(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  uVar2 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar2);
  local_30 = param_2[2];
  bVar1 = FUN_1412b8f20(param_1,&local_40);
  *param_3 = bVar1 ^ 1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b8f20 FUN_1412b8f20 body=220 status=ok
// SIG undefined FUN_1412b8f20(void)

ulonglong FUN_1412b8f20(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (lVar6 == 0) {
    return 0;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar2 = FUN_14110242a();
    lVar4 = FUN_14477b664(uVar2);
    param_2[1] = lVar4;
  }
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (*param_2 == 0) {
      return 0;
    }
    plVar5 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
      param_2[2] = 0;
      return 0;
    }
    uVar2 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar3 = FUN_144aff482(uVar2,param_2);
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  if ((longlong)*(int *)(lVar6 + 0x50) != 0) {
    plVar5 = *(longlong **)(lVar6 + 0x48);
    lVar6 = (longlong)*(int *)(lVar6 + 0x50) * 0x90;
    do {
      if (*plVar5 == lVar3) {
        if (plVar5 == (longlong *)0x0) {
          return 0;
        }
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),(char)plVar5[0x11]) & 0xffffffffffffff01;
      }
      plVar5 = plVar5 + 0x12;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 1412b9004 FUN_1412b9004 body=973 status=ok
// SIG undefined FUN_1412b9004(void)

undefined8 * FUN_1412b9004(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_14064ffa8(param_1,uVar1);
  *(undefined2 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2604) = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c6] = 0;
  *(undefined4 *)(param_1 + 0x4c7) = 0;
  *param_1 = &PTR_FUN_14b8d1990;
  param_1[0x72] = &PTR_FUN_14b8d2000;
  param_1[0x73] = &PTR_FUN_14b8d2020;
  param_1[0x74] = &PTR_FUN_14b8d2050;
  param_1[0x75] = &PTR_FUN_14b8d2060;
  param_1[0x76] = &PTR_FUN_14b8d20d0;
  param_1[0x77] = &PTR_FUN_14b8d2100;
  param_1[0x78] = &PTR_FUN_14b8d2130;
  param_1[0x7f] = &PTR_FUN_14b8d21e0;
  param_1[0x80] = &PTR_FUN_14b8d2250;
  param_1[0x81] = &PTR_FUN_14b8d22c0;
  param_1[0x82] = &PTR_FUN_14b8d22f0;
  param_1[0x83] = &PTR_FUN_14b8d2330;
  param_1[0x84] = &PTR_FUN_14b8d23d0;
  param_1[0x85] = &PTR_FUN_14b8d23f0;
  param_1[0x89] = &PTR_FUN_14b8d2410;
  param_1[0x8a] = &PTR_FUN_14b8d24d0;
  param_1[0x8b] = &PTR_FUN_14b8d2550;
  param_1[0x8c] = &PTR_FUN_14b8d25a0;
  param_1[0x8d] = &PTR_FUN_14b8d25e0;
  param_1[0x8e] = &PTR_FUN_14b8d2600;
  param_1[0x8f] = &PTR_FUN_14b8d2620;
  param_1[0x90] = &PTR_FUN_14b8d2640;
  param_1[0x91] = &PTR_FUN_14b8d2660;
  param_1[0x92] = &PTR_FUN_14b8d2680;
  param_1[0x93] = &PTR_FUN_14b8d26a0;
  param_1[0x94] = &PTR_FUN_14b8d26c0;
  param_1[0x95] = &PTR_FUN_14b8d26e0;
  param_1[0x96] = &PTR_FUN_14b8d2700;
  param_1[0x34b] = &PTR_FUN_14b8d2720;
  param_1[0x352] = &PTR_FUN_14b8d2730;
  param_1[0x353] = &PTR_FUN_14b8d2770;
  param_1[0x354] = &PTR_FUN_14b8d27b0;
  param_1[0x355] = &PTR_FUN_14b8d2800;
  param_1[0x356] = &PTR_FUN_14b8d2830;
  param_1[0x359] = &PTR_FUN_14b8d2870;
  param_1[0x35a] = &PTR_FUN_14b8d2880;
  param_1[0x35b] = &PTR_FUN_14b8d28b0;
  param_1[0x35c] = &PTR_FUN_14b8d2950;
  param_1[0x4bf] = &PTR_FUN_14b8d2970;
  param_1[0x4c8] = &PTR_FUN_14b8d2998;
  param_1[0x4c9] = 0;
  *(undefined4 *)(param_1 + 0x4ca) = 0x6000;
  param_1[0x4cb] = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 2;
  *(undefined2 *)((longlong)param_1 + 0x2664) = 0;
  *(undefined2 *)(param_1 + 0x4cd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x266c) = 0;
  *(undefined4 *)(param_1 + 0x4d1) = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d2] = 0;
  param_1[0x4d3] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4d4] = DAT_14c8464e0;
  param_1[0x4d5] = uVar1;
  param_1[0x4d6] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x4d7) = 0x45bb8000;
  *(undefined4 *)((longlong)param_1 + 0x26bc) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x4d8) = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 0x26c4) = 0x453b8000;
  param_1[0x4e4] = 0;
  param_1[0x4d9] = 0;
  param_1[0x4da] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26d1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26d9) = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  param_1[0x4df] = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  *(undefined1 *)(param_1 + 0x4e3) = 0;
  FUN_1446f470e(&local_20,L"VaultTrackerDrawComponent",1);
  uVar1 = FUN_1412b93d2();
  lVar2 = FUN_1407194ae(param_1,local_20,uVar1,0);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x4e4] = lVar2;
    if (lVar2 == 0) goto LAB_1412b9389;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x4e4] = lVar2;
  }
  if (param_1[0x39] != 0) {
    FUN_140486fc4(lVar2,param_1[0x39],0);
  }
LAB_1412b9389:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b93d2 FUN_1412b93d2 body=228 status=ok
// SIG undefined FUN_1412b93d2(void)

longlong FUN_1412b93d2(void)

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
  if (DAT_14cb58440 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_14864f0bf;
    local_40 = &LAB_14607d4d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorDrawComponent",&DAT_14cb58440,&DAT_14864f0be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58440;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412b94b8 FUN_1412b94b8 body=148 status=ok
// SIG undefined FUN_1412b94b8(void)

void FUN_1412b94b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1aaf20;
  FUN_140a87f4b(param_1[299],*(undefined4 *)(param_1 + 300));
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x127] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x126) = 0;
  if (param_1[0x125] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4632(param_1 + 0x11d);
  if (param_1[0x117] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e066(param_1);
  return;
}



// FUNCTION 1412b954c FUN_1412b954c body=45 status=ok
// SIG undefined FUN_1412b954c(void)

undefined8 FUN_1412b954c(undefined8 param_1,int param_2)

{
  FUN_1412b957a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 1412b957a FUN_1412b957a body=840 status=ok
// SIG undefined FUN_1412b957a(void)

void FUN_1412b957a(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b486b50;
  plVar1 = param_1 + 0xa4;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xa7)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xa7)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x9d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa1) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xa0)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x96;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x9a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x99)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x99)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x8b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x8f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x8e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x8e)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0x3a] = 0;
  FUN_14076ba36(param_1 + 0x3b);
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1412b98c2 FUN_1412b98c2 body=2544 status=ok
// SIG undefined FUN_1412b98c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412b98c2(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  longlong lVar25;
  uint uVar26;
  float fVar27;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  undefined1 local_12a;
  undefined1 local_129;
  longlong local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98 [5];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((param_3 == 0) || (lVar10 = *(longlong *)(param_3 + 0x638), lVar10 == 0)) ||
      (local_128 = param_1,
      lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x1108) + 0x10))(lVar10 + 0x1108), lVar10 == 0))
     || ((lVar15 = *(longlong *)(lVar10 + 0x80), lVar15 == 0 ||
         (lVar11 = *(longlong *)(param_3 + 0x20), lVar11 == 0)))) goto LAB_1412ba000;
  plVar19 = *(longlong **)(lVar11 + 0x658);
  if (plVar19 == (longlong *)0x0) {
    plVar19 = *(longlong **)(lVar11 + 0x660);
    if ((DAT_14c950c29 & plVar19 != (longlong *)0x0) != 0) goto LAB_1412ba26f;
    if (plVar19 == (longlong *)0x0) goto LAB_1412ba000;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1412ba26f:
    FUN_1456cec3c(plVar19);
  }
  if (DAT_14cb06da8 == 0) {
    local_150 = &local_e8;
    local_e8 = FUN_1449e2820;
    local_140 = FUN_14081d0ea;
    local_148 = &LAB_1464003b0;
    local_158 = &LAB_147d17bdf;
    local_160 = &LAB_1417edf22;
    local_168 = L"Engine";
    local_170 = 0;
    local_178 = 0x10000000;
    local_180 = 8;
    local_188 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
       DAT_14cb06da8 + 0x30)) && (lVar11 = (**(code **)(*plVar19 + 0x3f0))(plVar19), lVar11 != 0)) {
    lVar11 = *(longlong *)(lVar10 + 0x80);
    if (lVar11 != 0) {
      cVar3 = *(char *)(lVar11 + 100);
      *(char *)(local_128 + 0x2f4) = cVar3;
      if (cVar3 == '\x01') {
        *(undefined4 *)(local_128 + 0x304) = *(undefined4 *)(lVar11 + 0x8c);
        *(undefined4 *)(local_128 + 0x308) = *(undefined4 *)(lVar11 + 0x90);
        *(undefined4 *)(local_128 + 0x328) = *(undefined4 *)(lVar11 + 0x94);
        *(undefined4 *)(local_128 + 0x32c) = *(undefined4 *)(lVar11 + 0x98);
      }
      else {
        *(undefined4 *)(local_128 + 0x2f8) = *(undefined4 *)(lVar11 + 0x70);
        *(undefined4 *)(local_128 + 0x2fc) = *(undefined4 *)(lVar11 + 0x74);
        *(undefined4 *)(local_128 + 0x300) = *(undefined4 *)(lVar11 + 0x78);
      }
      *(undefined4 *)(local_128 + 0x2e8) = *(undefined4 *)(lVar11 + 0xb4);
      *(undefined4 *)(local_128 + 0x2ec) = *(undefined4 *)(lVar11 + 0xb8);
    }
    iVar5 = *(int *)(lVar10 + 0x90);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    lVar11 = local_128 + 0xe8;
    *(undefined4 *)(local_128 + 0xf0) = 0;
    local_108 = param_2;
    if (*(int *)(local_128 + 0xf4) < iVar5) {
      FUN_1412ba396(lVar11,iVar5);
    }
    local_120 = (longlong *)(local_128 + 0x138);
    iVar6 = *(int *)(local_128 + 0x144);
    local_110 = lVar11;
    local_100 = lVar15;
    FUN_140166747(*(undefined8 *)(local_128 + 0x138),*(undefined4 *)(local_128 + 0x140));
    *(undefined4 *)(local_128 + 0x140) = 0;
    if ((iVar6 < iVar5) && (*(int *)(local_128 + 0x144) != iVar5)) {
      FUN_1412ba2b4(local_120,iVar5);
    }
    lVar15 = local_128;
    if ((longlong)*(int *)(lVar10 + 0x90) != 0) {
      lVar11 = *(longlong *)(lVar10 + 0x88);
      local_f8 = (longlong)*(int *)(lVar10 + 0x90) * 0x138;
      lVar25 = 0;
      local_f0 = lVar10;
      do {
        lVar10 = *(longlong *)(lVar11 + 0x10 + lVar25);
        if (lVar10 != 0) {
          uVar14 = *(undefined4 *)(lVar11 + 0x18 + lVar25);
          uVar22 = *(undefined4 *)(lVar11 + 0x1c + lVar25);
          uVar9 = *(undefined8 *)(lVar11 + lVar25);
          uVar7 = *(undefined4 *)(lVar11 + 8 + lVar25);
          uVar8 = *(undefined4 *)(lVar11 + 0xc + lVar25);
          bVar4 = *(byte *)(lVar11 + 0x34 + lVar25);
          uVar23 = *(undefined1 *)(lVar11 + 0x35 + lVar25);
          uVar24 = *(undefined1 *)(lVar11 + 0x36 + lVar25);
          iVar5 = *(int *)(lVar15 + 0xf0);
          *(uint *)(lVar15 + 0xf0) = iVar5 + 1U;
          if (*(uint *)(lVar15 + 0xf4) < iVar5 + 1U) {
            local_12a = uVar24;
            local_129 = uVar23;
            local_118 = uVar22;
            local_114 = uVar14;
            FUN_1487d7a7c(local_110,iVar5);
            lVar15 = local_128;
            uVar14 = local_114;
            uVar24 = local_12a;
            uVar22 = local_118;
            uVar23 = local_129;
          }
          lVar13 = *(longlong *)(lVar15 + 0xe8);
          lVar12 = (longlong)iVar5 * 0x34;
          *(undefined8 *)(lVar13 + lVar12) = uVar9;
          *(undefined4 *)(lVar13 + 8 + lVar12) = uVar7;
          *(undefined4 *)(lVar13 + 0xc + lVar12) = uVar8;
          *(longlong *)(lVar13 + 0x10 + lVar12) = lVar10;
          *(undefined4 *)(lVar13 + 0x18 + lVar12) = uVar14;
          *(undefined4 *)(lVar13 + 0x1c + lVar12) = uVar22;
          *(uint *)(lVar13 + 0x20 + lVar12) = (uint)bVar4;
          *(undefined4 *)(lVar13 + 0x24 + lVar12) = 0x41700000;
          *(undefined1 *)(lVar13 + 0x28 + lVar12) = uVar23;
          *(undefined1 *)(lVar13 + 0x29 + lVar12) = uVar24;
          *(undefined2 *)(lVar13 + 0x2a + lVar12) = 0x100;
          *(undefined8 *)(lVar13 + 0x2c + lVar12) = 0;
          iVar5 = *(int *)(lVar15 + 0x140);
          *(uint *)(lVar15 + 0x140) = iVar5 + 1U;
          if (*(uint *)(lVar15 + 0x144) < iVar5 + 1U) {
            FUN_1487d7b0c(local_120,iVar5);
            lVar15 = local_128;
          }
          lVar10 = *local_120;
          lVar12 = (longlong)iVar5 * 0x4d0;
          puVar1 = (undefined8 *)(lVar10 + lVar12);
          puVar17 = &DAT_14c846480;
          puVar18 = puVar1;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          puVar17 = (undefined8 *)(lVar10 + 0x60 + lVar12);
          puVar18 = &DAT_14c846480;
          puVar21 = puVar17;
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar21 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar21 = puVar21 + 1;
          }
          *(undefined1 *)(puVar17 + 0xc) = 0;
          puVar16 = (undefined4 *)(lVar25 + lVar11);
          puVar20 = (undefined4 *)(lVar10 + 200 + lVar12);
          for (lVar13 = 0x16; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar20 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar20 = puVar20 + 1;
          }
          puVar17 = &DAT_14c846480;
          puVar18 = (undefined8 *)(lVar10 + 0x120 + lVar12);
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar18 = *puVar17;
            puVar17 = puVar17 + 1;
            puVar18 = puVar18 + 1;
          }
          puVar17 = (undefined8 *)(lVar10 + 0x180 + lVar12);
          puVar18 = &DAT_14c846480;
          puVar21 = puVar17;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar21 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar21 = puVar21 + 1;
          }
          puVar17[0xe] = DAT_14caddec0;
          uVar9 = _DAT_14caddeb8;
          puVar17[0xc] = DAT_14caddeb0;
          puVar17[0xd] = uVar9;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[0xf] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[0x10] = uVar9;
          puVar17[0x11] = DAT_14c8464f0;
          puVar17[0x12] = 0;
          *(undefined4 *)(puVar17 + 0x13) = 0;
          puVar17[0x16] = DAT_14c8464f0;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[0x14] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[0x15] = uVar9;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[0x17] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[0x18] = uVar9;
          puVar17[0x19] = DAT_14c8464f0;
          puVar17[0x1c] = DAT_14c8464f0;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[0x1a] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[0x1b] = uVar9;
          *(undefined1 *)(puVar17 + 0x25) = 0;
          *(undefined1 *)(puVar17 + 0x2e) = 0;
          puVar17[0x31] = DAT_14c8462d0;
          uVar9 = DAT_14c8462c8;
          puVar17[0x2f] = DAT_14c8462c0;
          puVar17[0x30] = uVar9;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[0x32] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[0x33] = uVar9;
          puVar17[0x34] = DAT_14c8464f0;
          *(undefined1 *)(puVar17 + 0x35) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x1ac) = 0;
          puVar17[0x39] = DAT_14c8464f0;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[0x37] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[0x38] = uVar9;
          uVar9 = DAT_14c8462c8;
          puVar17[0x3a] = DAT_14c8462c0;
          puVar17[0x3b] = uVar9;
          puVar17[0x3c] = DAT_14c8462d0;
          puVar17[0x40] = 0;
          *(undefined4 *)(puVar17 + 0x41) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x1f5) = 0;
          puVar17[0x3d] = 0;
          puVar17[0x3e] = 0;
          puVar17[0x42] = &DAT_3f8000003f800000;
          *(undefined2 *)(puVar17 + 0x43) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x21c) = 0x3f80000000000000;
          *(undefined4 *)((longlong)puVar17 + 0x224) = 0x3f800000;
          puVar17[0x4d] = 0;
          puVar17[0x4b] = 0;
          puVar17[0x4c] = 0;
          puVar17[0x49] = 0;
          puVar17[0x4a] = 0;
          puVar17[0x47] = 0;
          puVar17[0x48] = 0;
          puVar17[0x45] = 0;
          puVar17[0x46] = 0;
          puVar17[0x4e] = &DAT_3f8000003f800000;
          *(undefined2 *)(puVar17 + 0x4f) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x27c) = 0x3f80000000000000;
          *(undefined4 *)((longlong)puVar17 + 0x284) = 0x3f800000;
          puVar17[0x59] = 0;
          puVar17[0x5a] = 0;
          puVar17[0x57] = 0;
          puVar17[0x58] = 0;
          puVar17[0x55] = 0;
          puVar17[0x56] = 0;
          puVar17[0x53] = 0;
          puVar17[0x54] = 0;
          puVar17[0x51] = 0;
          puVar17[0x52] = 0;
          puVar17[0x5d] = DAT_14caddec0;
          uVar9 = _DAT_14caddeb8;
          puVar17[0x5b] = DAT_14caddeb0;
          puVar17[0x5c] = uVar9;
          puVar17[0x60] = DAT_14caddec0;
          uVar9 = _DAT_14caddeb8;
          puVar17[0x5e] = DAT_14caddeb0;
          puVar17[0x5f] = uVar9;
          puVar17[0x61] = *(undefined8 *)(lVar11 + 0x40 + lVar25);
          puVar17[0x62] = 0;
          puVar17[0x65] = DAT_14c8464f0;
          uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar17[99] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar17[100] = uVar9;
          puVar17[0x68] = DAT_14c8464f0;
          uVar7 = DAT_14c8464e8._4_4_;
          uVar22 = (undefined4)DAT_14c8464e8;
          uVar14 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(puVar17 + 0x66) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)puVar17 + 0x334) = uVar14;
          *(undefined4 *)(puVar17 + 0x67) = uVar22;
          *(undefined4 *)((longlong)puVar17 + 0x33c) = uVar7;
          lVar10 = *(longlong *)(local_f0 + 0x80);
          if (lVar10 != 0) {
            cVar3 = *(char *)(lVar10 + 100);
            *(char *)((longlong)puVar1 + 0x37c) = cVar3;
            if (cVar3 == '\x01') {
              *(undefined4 *)(puVar1 + 0x72) = *(undefined4 *)(lVar10 + 0x7c);
              *(undefined4 *)((longlong)puVar1 + 0x394) = *(undefined4 *)(lVar10 + 0x80);
              fVar27 = *(float *)(lVar10 + 0x84);
              *(float *)(puVar1 + 0x7e) = fVar27;
              lVar13 = 0x3f4;
              fVar2 = *(float *)(lVar10 + 0x88);
            }
            else {
              *(undefined4 *)(puVar1 + 0x70) = *(undefined4 *)(lVar10 + 0x68);
              fVar27 = *(float *)(lVar10 + 0x6c);
              lVar13 = 900;
              fVar2 = fVar27;
            }
            *(float *)((longlong)puVar1 + lVar13) = fVar2;
            *(float *)(puVar1 + 0x71) = fVar27 / 100.0;
            *(undefined8 *)((longlong)puVar1 + 0x36c) = *(undefined8 *)(lVar10 + 0xa4);
            *(undefined4 *)((longlong)puVar1 + 0x374) = *(undefined4 *)(lVar10 + 0xbc);
            *(undefined4 *)(puVar1 + 0x6f) = *(undefined4 *)(lVar10 + 0xc0);
          }
        }
        lVar25 = lVar25 + 0x138;
      } while (local_f8 != lVar25);
    }
    lVar10 = local_100;
    if ((local_108 != 0) && (*(char *)(local_100 + 0xc4) != '\0')) {
      lVar11 = *(longlong *)(*(longlong *)(local_108 + 0x6a0) + 0x48);
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      local_98[3] = lVar11;
      FUN_144756208(local_98,lVar11 + 0x30);
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = (code *)0x0;
      uStack_e0 = 0;
      FUN_145895150(&local_e8,local_98);
      if ((longlong)*(int *)(lVar15 + 0x140) != 0) {
        lVar25 = *(longlong *)(local_128 + 0x138);
        lVar15 = (longlong)*(int *)(lVar15 + 0x140) * 0x4d0;
        do {
          FUN_145895034(lVar25,lVar11,&local_e8);
          lVar25 = lVar25 + 0x4d0;
          lVar15 = lVar15 + -0x4d0;
        } while (lVar15 != 0);
      }
      FUN_145894fe6(&local_e8);
      lVar15 = local_128;
      if (local_98[0] != 0) {
        FUN_1400020a8();
        lVar15 = local_128;
      }
    }
    fVar27 = *(float *)(lVar10 + 0xa0);
    uVar26 = -(uint)(ABS(fVar27) <= 1e-08);
    *(uint *)(lVar15 + 0x120) = ~uVar26 & (uint)(1.0 / fVar27) | uVar26 & 0x49742400;
    cVar3 = *(char *)(lVar10 + 0xc4);
    *(char *)(lVar15 + 0x5c0) = cVar3;
    if (cVar3 == '\x01') {
      FUN_1458951e4(lVar15 + 0x5d0,local_120);
    }
  }
LAB_1412ba000:
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412ba2b4 FUN_1412ba2b4 body=226 status=ok
// SIG undefined FUN_1412ba2b4(void)

void FUN_1412ba2b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x4d0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x1b) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x4d0)) {
      uVar2 = uVar1 / 0x4d0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x4d0,0x10);
  }
  return;
}



// FUNCTION 1412ba396 FUN_1412ba396 body=333 status=ok
// SIG undefined FUN_1412ba396(void)

void FUN_1412ba396(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x34;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x276) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x3ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1412ba3ff;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x3ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1412ba3ff:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x34)) {
      uVar4 = uVar3 / 0x34 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x34,4);
  }
  return;
}



// FUNCTION 1412ba4e4 FUN_1412ba4e4 body=482 status=ok
// SIG undefined FUN_1412ba4e4(void)

void FUN_1412ba4e4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412ba6c8 FUN_1412ba6c8 body=173 status=ok
// SIG undefined FUN_1412ba6c8(void)

void FUN_1412ba6c8(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_1412ba75f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1412ba75f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1412ba776 FUN_1412ba776 body=210 status=ok
// SIG undefined FUN_1412ba776(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1412ba776(void)

{
  char cVar1;
  undefined1 auStack_2698 [40];
  undefined8 local_2670;
  undefined8 local_2668;
  undefined8 local_2660;
  undefined8 local_2658;
  undefined8 local_2650;
  undefined1 local_2648;
  undefined2 local_2646;
  undefined4 local_2644;
  undefined1 local_2640 [32];
  char local_2620;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_2698;
  cVar1 = FUN_140242cd6();
  if (cVar1 != '\0') {
    FUN_14490a810(local_2640);
    FUN_140242e09(local_2640);
    if (local_2620 == '\0') {
      (**(code **)(*DAT_14cb52a38 + 0x98))(DAT_14cb52a38,&DAT_149e25dfc,0xc000000,0);
    }
    local_2670 = 0;
    local_2668 = 0x49026d0bf03af81a;
    local_2660 = 0x3454215e96c451a6;
    local_2658 = 1;
    local_2646 = 0;
    local_2644 = 0;
    local_2650 = 0;
    local_2648 = 0;
    FUN_143c12366();
  }
  if ((local_10 ^ (ulonglong)auStack_2698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412ba84a FUN_1412ba84a body=169 status=ok
// SIG undefined FUN_1412ba84a(void)

void FUN_1412ba84a(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  return;
}



// FUNCTION 1412ba8f4 FUN_1412ba8f4 body=138 status=ok
// SIG undefined FUN_1412ba8f4(void)

void FUN_1412ba8f4(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_140a01d60();
  if (param_1[0x36] == 0) {
    FUN_140eeb8c0(param_1,param_1);
  }
  if ((char)param_1[0x74] != '\0') {
    iVar2 = FUN_14487fd02(param_1);
    if (iVar2 != 3) {
      bVar1 = *(byte *)(param_1 + 0x74);
      lVar3 = FUN_1414fb874(param_1,bVar1 - 1);
      if (lVar3 == 0) {
        lVar3 = FUN_1447210f0(param_1);
        FUN_147b8e9b0(*(undefined8 *)(lVar3 + 0x30),param_1,bVar1 - 1);
      }
      else {
        FUN_1414b167c(lVar3,param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001412ba92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6a0))(param_1);
  return;
}



// FUNCTION 1412ba97e FUN_1412ba97e body=125 status=ok
// SIG undefined FUN_1412ba97e(void)

undefined1 FUN_1412ba97e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xc))) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) &&
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18c) != 3) {
        return *(undefined1 *)(lVar2 + 400);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1412ba9fc FUN_1412ba9fc body=4 status=ok
// SIG undefined FUN_1412ba9fc(void)

undefined8 FUN_1412ba9fc(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 1412baa00 FUN_1412baa00 body=1249 status=ok
// SIG undefined FUN_1412baa00(void)

void FUN_1412baa00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  bool bVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_28);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_28);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_28);
    }
  }
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_141710108;
      local_80 = 0x1000000000000000;
      local_88 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_48);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_48 = (undefined4)uVar4;
      uStack_44 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar2)(uVar4,param_2,&uStack_48);
    }
  }
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_4c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_4c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_4c = (int)uVar4;
      uStack_48 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_4c);
    }
  }
  bVar5 = local_4c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(uStack_44,uStack_48);
  uVar4 = FUN_14477b664(uStack_40);
  local_60 = FUN_14477b664(uVar4);
  local_58 = local_38;
  uVar3 = FUN_1412baee2(local_28,&local_68,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5) & 0xffffffff);
  *param_3 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412baee2 FUN_1412baee2 body=606 status=ok
// SIG undefined FUN_1412baee2(void)

undefined8 FUN_1412baee2(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    uVar2 = FUN_14117f018();
    lVar3 = FUN_14477b664(uVar2);
    param_2[1] = lVar3;
  }
  if (param_2[2] == 0) {
    if (lVar3 == 0) {
      return 0;
    }
    if (*param_2 == 0) {
      return 0;
    }
    plVar4 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
      param_2[2] = 0;
      return 0;
    }
    uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar3 = FUN_144aff482(uVar2,param_2);
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_140eb0cd4();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = FUN_140eb0cd4();
  plVar5 = (longlong *)FUN_144718840(plVar4,uVar2);
  if (plVar4 != plVar5) {
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (lVar3 != 0) {
      if (param_3 == '\0') {
        uVar2 = FUN_140eb0cd4();
        plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
        if (plVar4 != (longlong *)0x0) {
          uVar2 = FUN_140eb0cd4();
          plVar5 = (longlong *)FUN_144718840(plVar4,uVar2);
          if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
            lVar6 = param_2[1];
            if (lVar6 == 0) {
              uVar2 = FUN_14117f018();
              lVar6 = FUN_14477b664(uVar2);
              param_2[1] = lVar6;
            }
            if (((param_2[2] == 0) && (lVar6 != 0)) && (*param_2 != 0)) {
              plVar4 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
                lVar6 = 0;
              }
              else {
                uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar6 = FUN_144aff482(uVar2,param_2);
              }
              param_2[2] = lVar6;
            }
            cVar1 = (**(code **)(*plVar5 + 0x18))(plVar5);
            if (cVar1 == '\0') {
              return 0;
            }
          }
        }
      }
      lVar6 = param_2[1];
      if (lVar6 == 0) {
        uVar2 = FUN_14117f018();
        lVar6 = FUN_14477b664(uVar2);
        param_2[1] = lVar6;
      }
      if (((param_2[2] == 0) && (lVar6 != 0)) && (*param_2 != 0)) {
        plVar4 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar6 = FUN_144aff482(uVar2,param_2);
        }
        param_2[2] = lVar6;
      }
      uVar2 = FUN_14117e970(lVar3);
      return uVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1412bb140 FUN_1412bb140 body=122 status=ok
// SIG undefined FUN_1412bb140(void)

void FUN_1412bb140(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_1 + 0x1b8);
  local_28 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c((char *)(param_1 + 0x1b8),&local_28);
  }
  if (cVar1 == *(char *)(param_1 + 0x1b8)) {
    if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1412bb1cc FUN_1412bb1cc body=42 status=ok
// SIG undefined FUN_1412bb1cc(void)

undefined8 FUN_1412bb1cc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) != 1)) {
    uVar1 = 0;
  }
  else {
    FUN_145897f32(param_2,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1412bb1f6 FUN_1412bb1f6 body=234 status=ok
// SIG undefined FUN_1412bb1f6(void)

void FUN_1412bb1f6(void)

{
  ulonglong uVar1;
  longlong lVar2;
  
  LOCK();
  UNLOCK();
  uVar1 = DAT_14c91ec50;
  if (0x7fff < DAT_14c91ec50) {
    uVar1 = 0x8000;
  }
  DAT_14c91ec50 = DAT_14c91ec50 + 1;
  (&DAT_14c91ec60)[uVar1] = 0;
  if (DAT_14c91eb09 == '\x01') {
    _cputs(&DAT_14c91ec60);
  }
  (&DAT_14c91ec60)[uVar1] = 10;
  DAT_14c91eb48 = FUN_1468392a5;
  lVar2 = 0;
  do {
    if (*(int *)((longlong)&DAT_14c75e9d4 + lVar2) == 0) {
      FUN_1412bb367((longlong)&DAT_14c75e9d0 + lVar2);
    }
    if (lVar2 != 0x30) {
      FUN_1412bb2e0("option \'%s\': %ld\n",
                    *(undefined8 *)((longlong)&PTR_s_show_errors_14c75e9e0 + lVar2),
                    *(undefined4 *)((longlong)&DAT_14c75e9d0 + lVar2));
    }
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x210);
  if (DAT_14c75ebb4 == 0) {
    FUN_1412bb367(&DAT_14c75ebb0);
  }
  DAT_14c75ebe0 = (longlong)DAT_14c75ebb0;
  if (DAT_14c75ebcc == 0) {
    FUN_1412bb367(&DAT_14c75ebc8);
  }
  DAT_14c75ebe8 = (longlong)DAT_14c75ebc8;
  return;
}



// FUNCTION 1412bb2e0 FUN_1412bb2e0 body=134 status=ok
// SIG undefined FUN_1412bb2e0(void)

void FUN_1412bb2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_14c75ea04 == 0) {
    FUN_1412bb367(&DAT_14c75ea00);
  }
  if (DAT_14c75ea00 != 0) {
    local_28 = &local_res10;
    local_18 = local_28;
    FUN_146838379(0,0,"mimalloc: ",param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412bb367 FUN_1412bb367 body=500 status=ok
// SIG undefined FUN_1412bb367(void)

void FUN_1412bb367(long *param_1)

{
  DWORD DVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  char cVar7;
  size_t sVar8;
  undefined1 auStack_f8 [40];
  char *local_d0;
  CHAR local_c8 [80];
  char local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  builtin_strncpy(local_78,"mimalloc_",10);
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x40] = 0;
  strncat(local_78,*(char **)(param_1 + 4),0x40);
  local_78[0x40] = 0;
  local_c8[0] = '\0';
  DVar1 = GetEnvironmentVariableA(local_78,local_c8,0x41);
  if (0x3f < DVar1 - 1) {
    if (DAT_14c91eb09 == '\x01') {
      param_1[1] = 1;
    }
    goto LAB_1412bb40c;
  }
  sVar4 = strlen(local_c8);
  sVar8 = 0x40;
  if (sVar4 < 0x40) {
    sVar8 = sVar4;
  }
  if (sVar4 != 0) {
    sVar4 = 0;
    do {
      iVar2 = toupper((int)local_c8[sVar4]);
      local_78[sVar4] = (char)iVar2;
      sVar4 = sVar4 + 1;
    } while (sVar8 != sVar4);
  }
  local_78[sVar8] = '\0';
  if (local_78[0] == '\0') {
LAB_1412bb496:
    uVar6 = 0x200000001;
  }
  else {
    pcVar5 = strstr("1;TRUE;YES;ON",local_78);
    if (pcVar5 != (char *)0x0) goto LAB_1412bb496;
    pcVar5 = strstr("0;FALSE;NO;OFF",local_78);
    if (pcVar5 == (char *)0x0) {
      local_d0 = local_78;
      lVar3 = strtol(local_78,&local_d0,10);
      pcVar5 = local_d0;
      if (param_1[2] == 8) {
        cVar7 = *local_d0;
        if (cVar7 == 'G') {
          lVar3 = lVar3 << 0x14;
LAB_1412bb51b:
          pcVar5 = local_d0 + 1;
        }
        else {
          if (cVar7 == 'M') {
            lVar3 = lVar3 << 10;
            goto LAB_1412bb51b;
          }
          if (cVar7 == 'K') goto LAB_1412bb51b;
          lVar3 = (long)((longlong)lVar3 + 0x3ffU >> 10);
        }
        cVar7 = *pcVar5;
        if (cVar7 == 'B') {
          pcVar5 = pcVar5 + 1;
          goto LAB_1412bb528;
        }
      }
      else {
LAB_1412bb528:
        cVar7 = *pcVar5;
      }
      if (cVar7 == '\0') {
        *param_1 = lVar3;
        lVar3 = 2;
      }
      else {
        FUN_146835ac3("environment option mimalloc_%s has an invalid value: %s\n",
                      *(undefined8 *)(param_1 + 4),local_78);
        lVar3 = 1;
      }
      param_1[1] = lVar3;
      goto LAB_1412bb40c;
    }
    uVar6 = 0x200000000;
  }
  *(undefined8 *)param_1 = uVar6;
LAB_1412bb40c:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412bb55c FUN_1412bb55c body=892 status=ok
// SIG undefined FUN_1412bb55c(void)

undefined8 FUN_1412bb55c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  undefined1 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      lVar1 = param_3 + lVar18;
      lVar3 = param_2 + 0x20 + lVar18;
      *(undefined2 *)(lVar3 + -0x10) = *(undefined2 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar1 + 8);
      *(undefined1 *)(lVar3 + -8) = *(undefined1 *)(lVar1 + 0x18);
      FUN_1404306dc(lVar3,lVar1 + 0x20);
      uVar8 = *(undefined4 *)(lVar1 + 0x34);
      uVar9 = *(undefined4 *)(lVar1 + 0x38);
      uVar10 = *(undefined4 *)(lVar1 + 0x3c);
      *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar1 + 0x30);
      *(undefined4 *)(lVar3 + 0x14) = uVar8;
      *(undefined4 *)(lVar3 + 0x18) = uVar9;
      *(undefined4 *)(lVar3 + 0x1c) = uVar10;
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar1 + 0x40);
      lVar1 = param_2 + 0x48 + lVar18;
      FUN_140430734(lVar1,param_3 + lVar18 + 0x48);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + lVar18 + 0x58);
      if (param_2 != param_3) {
        if (*(char *)(param_3 + 100 + lVar18) == '\x01') {
          *(undefined4 *)(param_2 + 0x60 + lVar18) = *(undefined4 *)(param_3 + 0x60 + lVar18);
          uVar16 = 1;
        }
        else {
          if (*(char *)(param_2 + 100 + lVar18) != '\x01') goto LAB_1412bb602;
          uVar16 = 0;
        }
        *(undefined1 *)(param_2 + 100 + lVar18) = uVar16;
      }
LAB_1412bb602:
      lVar1 = param_3 + lVar18;
      lVar3 = param_2 + lVar18;
      lVar17 = param_2 + lVar18;
      lVar2 = param_3 + lVar18;
      FUN_14043078c(lVar17 + 0x68,lVar2 + 0x68);
      FUN_1404307f4(lVar3 + 0x100,lVar1 + 0x100);
      *(undefined8 *)(lVar17 + 0x130) = *(undefined8 *)(lVar2 + 0x130);
      *(undefined1 *)(lVar17 + 0x13c) = *(undefined1 *)(lVar2 + 0x13c);
      *(undefined4 *)(lVar17 + 0x138) = *(undefined4 *)(lVar2 + 0x138);
      lVar17 = *(longlong *)(lVar2 + 0x140);
      if (DAT_14c950c29 == 1) {
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          FUN_14689c22e();
          lVar17 = *(longlong *)(param_3 + 0x140 + lVar18);
        }
      }
      bVar15 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x140 + lVar18) = lVar17;
      lVar17 = *(longlong *)(param_3 + 0x148 + lVar18);
      if ((bVar15 & 1) != 0) {
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          FUN_14689c22e();
          lVar17 = *(longlong *)(param_3 + 0x148 + lVar18);
        }
      }
      *(longlong *)(param_2 + 0x148 + lVar18) = lVar17;
      *(undefined1 *)(param_2 + 0x150 + lVar18) = *(undefined1 *)(param_3 + 0x150 + lVar18);
      FUN_1412bb8d8(lVar3 + 0x158,lVar1 + 0x158);
      *(undefined8 *)(param_2 + 0x168 + lVar18) = *(undefined8 *)(param_3 + 0x168 + lVar18);
      FUN_1412bb928(lVar3 + 0x170,lVar1 + 0x170);
      lVar17 = *(longlong *)(param_3 + 0x180 + lVar18);
      if ((*(longlong *)(param_2 + 0x180 + lVar18) != lVar17) ||
         (*(int *)(param_2 + 0x188 + lVar18) != *(int *)(param_3 + 0x188 + lVar18))) {
        *(longlong *)(param_2 + 0x180 + lVar18) = lVar17;
        *(undefined4 *)(param_2 + 0x188 + lVar18) = *(undefined4 *)(param_3 + 0x188 + lVar18);
        *(undefined8 *)(param_2 + 400 + lVar18) = 0;
      }
      puVar4 = (undefined4 *)(param_3 + 0x198 + lVar18);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x1a4 + lVar18);
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      puVar5 = (undefined4 *)(param_2 + 0x1a4 + lVar18);
      *puVar5 = *puVar4;
      puVar5[1] = uVar12;
      puVar5[2] = uVar13;
      puVar5[3] = uVar14;
      puVar4 = (undefined4 *)(param_2 + 0x198 + lVar18);
      *puVar4 = uVar8;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      if (lVar3 != lVar1) {
        FUN_140f5e6cc(*(undefined8 *)(param_2 + 0x1b8 + lVar18),
                      *(undefined4 *)(param_2 + 0x1c0 + lVar18));
        iVar6 = *(int *)(param_3 + 0x1c0 + lVar18);
        uVar7 = *(undefined8 *)(param_3 + 0x1b8 + lVar18);
        *(int *)(param_2 + 0x1c0 + lVar18) = iVar6;
        if (iVar6 == 0 && *(int *)(param_2 + 0x1c4 + lVar18) == 0) {
          *(undefined4 *)(param_2 + 0x1c4 + lVar18) = 0;
        }
        else {
          puVar19 = (undefined8 *)(param_2 + lVar18 + 0x1b8);
          FUN_148660e60(puVar19,iVar6);
          FUN_148660ec2(*puVar19,uVar7,iVar6);
        }
        FUN_140f5e6cd(*(undefined8 *)(param_2 + 0x1c8 + lVar18),
                      *(undefined4 *)(param_2 + 0x1d0 + lVar18));
        iVar6 = *(int *)(param_3 + 0x1d0 + lVar18);
        uVar7 = *(undefined8 *)(param_3 + 0x1c8 + lVar18);
        *(int *)(param_2 + 0x1d0 + lVar18) = iVar6;
        if (iVar6 == 0 && *(int *)(param_2 + 0x1d4 + lVar18) == 0) {
          *(undefined4 *)(param_2 + 0x1d4 + lVar18) = 0;
        }
        else {
          puVar19 = (undefined8 *)(param_2 + lVar18 + 0x1c8);
          FUN_148660ff8(puVar19,iVar6);
          FUN_14866106e(*puVar19,uVar7,iVar6);
        }
      }
      puVar4 = (undefined4 *)(param_3 + 0x1d8 + lVar18);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar5 = (undefined4 *)(param_2 + 0x1d8 + lVar18);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      lVar18 = lVar18 + 0x1e8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1412bb8d8 FUN_1412bb8d8 body=79 status=ok
// SIG undefined FUN_1412bb8d8(void)

undefined8 * FUN_1412bb8d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1448020ba(param_1,iVar1);
      FUN_144801e9b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1412bb928 FUN_1412bb928 body=79 status=ok
// SIG undefined FUN_1412bb928(void)

undefined8 * FUN_1412bb928(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140aead42(param_1,iVar1);
      FUN_140aead15(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1412bb978 FUN_1412bb978 body=108 status=ok
// SIG undefined FUN_1412bb978(void)

void FUN_1412bb978(longlong param_1)

{
  if ((*(char *)(param_1 + -0x750) != '\x03') || (*(char *)(param_1 + 0x398) != '\0')) {
    FUN_1412bb9e4(param_1);
    if (((*(longlong *)(param_1 + 0x330) != 0) &&
        ((((*(byte *)(*(longlong *)(param_1 + 0x330) + 0xd8) & 1) != 0 &&
          ((*(byte *)(param_1 + 0xd8) & 2) != 0)) && (*(char *)(param_1 + 0x16d) == '\x01')))) &&
       (*(longlong *)(param_1 + 0x3b0) == 0)) {
      FUN_1412bbfc0(param_1 + -0x8c8);
    }
    *(undefined1 *)(param_1 + 0x404) = 1;
  }
  return;
}



// FUNCTION 1412bb9e4 FUN_1412bb9e4 body=271 status=ok
// SIG undefined FUN_1412bb9e4(void)

void FUN_1412bb9e4(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x2a8) != 0) && ((*(byte *)(param_1 + -0x4e8) & 2) != 0)) {
    if (*(char *)(param_1 + -0x750) == '\x03') {
      if ((*(byte *)(param_1 + 0x16e) < 2) || ((*(byte *)(param_1 + 0x158) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x16d) = 1;
        lVar1 = param_1 + 0x60;
      }
      else {
        lVar1 = param_1 + 0xe0;
        *(undefined1 *)(param_1 + 0x16d) = 2;
      }
      FUN_1412bbaf4(lVar1,param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001412bba76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + -0x8c8) + 0x578))(param_1 + -0x8c8);
      return;
    }
    if ((*(byte *)(param_1 + 0x16d) & 1) != (*(byte *)(param_1 + 0xd8) & 2) >> 1) {
      if ((*(byte *)(param_1 + 0x16d) & 1) == 0) {
        FUN_140f837ee(param_1 + 0x60);
      }
      else {
        FUN_1412bbaf4(param_1 + 0x60,param_1 + 8);
      }
    }
    if ((*(byte *)(param_1 + 0x158) & 1) != 0) {
      if ((*(byte *)(param_1 + 0x158) & 2) >> 1 != (*(byte *)(param_1 + 0x16d) & 2) >> 1) {
        if ((*(byte *)(param_1 + 0x16d) & 2) != 0) {
          FUN_1412bbaf4(param_1 + 0xe0,param_1 + 8);
          return;
        }
        FUN_140f837ee(param_1 + 0xe0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412bbaf4 FUN_1412bbaf4 body=1227 status=ok
// SIG undefined FUN_1412bbaf4(void)

void FUN_1412bbaf4(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar7 == 0) {
LAB_1412bbf79:
    lVar7 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_d0 = &local_a8;
      local_a8 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = &LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = 0x1000000000;
      local_f8 = 0x10000004;
      local_100 = 8;
      local_108 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_1412bbf79;
  }
  plVar10 = *(longlong **)(lVar7 + 0x1b0);
  if ((plVar10 == (longlong *)0x0) || (lVar8 = param_1[2], lVar8 == 0)) goto LAB_1412bbce4;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) | 2;
  cVar4 = *(char *)(lVar7 + 0x60);
  if (cVar4 < '\0') {
    FUN_1405bab3a(lVar7,0);
    lVar8 = param_1[2];
    if (lVar8 != 0) goto LAB_1412bbb9d;
  }
  else {
LAB_1412bbb9d:
    *(byte *)(lVar8 + 0x78) = *(byte *)(lVar8 + 0x78) | 8;
    FUN_140cf5864(lVar8);
    FUN_140cf57c4(lVar8);
  }
  if (*(char *)(lVar7 + 0x178) == '\x03') {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*plVar10 + 0x700))(plVar10);
    bVar3 = bVar3 ^ 1;
  }
  if (((bVar3 == 0) && (param_1[3] == 0)) &&
     (lVar8 = (**(code **)(*param_2 + 0xa0))(param_2,1), lVar8 != 0)) {
    FUN_1458981dc(param_1,param_2);
  }
  lVar8 = (**(code **)(*param_2 + 0xa0))(param_2,0);
  if (lVar8 != 0) {
    uVar13 = (**(code **)(*param_2 + 0x98))(param_2,0);
    *(undefined8 *)(param_1[2] + 0xc) = *param_1;
    *(undefined8 *)(param_1[2] + 0x14) = param_1[1];
    FUN_140cf6364(param_1[2],lVar8,0,uVar13);
  }
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x78) = *(byte *)(lVar8 + 0x78) | 8;
    FUN_140cf5864(lVar8);
    FUN_140cf57c4(lVar8);
    lVar8 = (**(code **)(*param_2 + 0xa0))(param_2,1);
    if (lVar8 != 0) {
      uVar13 = (**(code **)(*param_2 + 0x98))(param_2,1);
      *(undefined8 *)(param_1[3] + 0xc) = *param_1;
      *(undefined8 *)(param_1[3] + 0x14) = param_1[1];
      uVar9 = param_1[3];
      uVar5 = (**(code **)(*plVar10 + 0x700))(plVar10);
      FUN_140cf6364(uVar9,lVar8,uVar5 ^ 1,uVar13);
    }
  }
  if (cVar4 < '\0') {
    FUN_1405bab3a(lVar7,1);
  }
  FUN_140cf53b6(param_1[2],1);
  if (param_1[3] == 0) {
LAB_1412bbcc5:
    lVar7 = 0;
  }
  else {
    FUN_140cf53b6(param_1[3],1);
    if (param_1[3] == 0) goto LAB_1412bbcc5;
    lVar7 = *(longlong *)(param_1[3] + 0x48);
  }
  if ((param_1[2] != 0) && (lVar8 = *(longlong *)(param_1[2] + 0x48), lVar8 != 0 && lVar7 != 0)) {
    pcVar1 = (code *)(param_1 + 5);
    puVar2 = param_1 + 7;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    iVar12 = 0;
    local_78 = puVar2;
    if (*(int *)(param_1 + 10) != 0) {
      FUN_1449c0562(&local_80);
      iVar12 = *(int *)(param_1 + 10);
    }
    local_a0 = local_80;
    local_98 = local_78;
    local_90 = local_70;
    uVar9 = local_90;
    local_88 = local_68;
    local_84 = local_64;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    iVar6 = local_90._4_4_;
    local_a8 = pcVar1;
    if ((local_90._4_4_ != iVar12) || (local_90 = local_70, local_78 != puVar2)) {
      do {
        local_90 = uVar9;
        local_b0 = *(longlong *)local_a8;
        lVar11 = local_b0 + (longlong)iVar6 * 0x18;
        cVar4 = FUN_144729dda(lVar11);
        if (cVar4 != '\0') {
          uVar9 = FUN_14479d2ce(lVar11);
          FUN_140357fa8(uVar9,*(undefined4 *)(lVar8 + 0x5c8),0);
        }
        lVar11 = local_b0 + (longlong)iVar6 * 0x18 + 8;
        cVar4 = FUN_144729dda(lVar11);
        if (cVar4 != '\0') {
          plVar10 = (longlong *)FUN_14479d2ce(lVar11);
          (**(code **)(*plVar10 + 0x490))(plVar10,lVar7,&DAT_14cadad98,0);
          uVar9 = FUN_14479d2ce(lVar11);
          FUN_140357fa8(uVar9,*(undefined4 *)(lVar7 + 0x5c8),0);
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
        uVar9 = local_90;
      } while (((local_90._4_4_ != iVar12) || (local_98 != puVar2)) || (local_a8 != pcVar1));
    }
  }
LAB_1412bbce4:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bbfc0 FUN_1412bbfc0 body=2892 status=ok
// SIG undefined FUN_1412bbfc0(void)

void FUN_1412bbfc0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_e8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 uStack_98;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = FUN_1447210f0();
  *(float *)(param_1 + 0xc70) = (float)*(double *)(lVar7 + 0x6d0);
  uVar8 = FUN_1401b4c98(param_1);
  uVar2 = *(undefined4 *)(param_1 + 0xc44);
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  puVar5 = local_d0;
  local_c8 = 3;
  *local_d0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_d0[2] = lVar12;
  *local_d0 = &PTR_FUN_14b977b00;
  local_d0[3] = 0;
  iVar13 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_d0 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar13 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar13 = *(int *)(lVar7 + 0x10);
      bVar16 = iVar13 == 0;
      if (bVar16) {
        *(int *)(lVar7 + 0x10) = iVar14;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar13 = iVar14;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar13;
  puVar5[4] = FUN_148d57a7c;
  *(undefined4 *)(puVar5 + 5) = 0;
  local_b8 = 0;
  uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
  FUN_14487d8d8(&local_b8,&local_d0);
  local_78 = 1;
  local_108 = &local_e0;
  local_e0 = 0;
  uStack_dc = 0xbf800000;
  FUN_1406f4044(uVar8,param_1 + 0xc78,&local_b8,uVar2);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
  if (local_c8 == 0) {
LAB_1412bc14a:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_1412bc14a;
  }
  local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffffffffff00);
  FUN_1412bcb0e(param_1 + 0x928,DAT_14cbcb990,0,0);
  if (*(longlong *)(param_1 + 0xbf8) == 0) goto LAB_1412bc5ed;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xb70) + 0x1170) + 0x10))
            (*(longlong *)(param_1 + 0xb70) + 0x1170);
  lVar7 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
  if (lVar7 != 0) {
    if (DAT_14cbcbdf0 == (longlong *)0x0) {
      memset(&DAT_14cbcbdf8,0,0x810);
      FUN_1461632d4(&DAT_14cbcbdf8);
      DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
    }
    plVar4 = DAT_14cbcbdf0;
    plVar11 = DAT_14cbcbdf0 + 1;
    cVar6 = (char)DAT_14cbcbdf0[2];
    plVar9 = plVar11;
    if (cVar6 == '\0') {
LAB_1412bc1d3:
      if (*plVar9 == 0) goto LAB_1412bc8e9;
      plVar9 = plVar11;
      if (cVar6 != '\0') {
        if (cVar6 == '\x02') {
          plVar9 = (longlong *)(*plVar11 + 0x30);
          goto LAB_1412bc1e8;
        }
LAB_1412bc86a:
        if (((DAT_14c9a1ab0 == 0) || (*plVar11 == 0)) ||
           (plVar11 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar11 + 0x28)),
           plVar11 == (longlong *)0x0)) goto LAB_1412bc200;
        puVar15 = &DAT_14c9485f0;
        if ((undefined4 *)plVar4[1] != (undefined4 *)0x0) {
          puVar15 = (undefined4 *)plVar4[1];
        }
        cVar6 = (**(code **)(*plVar11 + 0x2a0))(plVar11,plVar4,puVar15);
LAB_1412bc8ba:
        if (cVar6 == '\0') goto LAB_1412bc200;
        goto LAB_1412bc936;
      }
LAB_1412bc1e8:
      if (*plVar9 == 0) goto LAB_1412bc86a;
      if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar9 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
         ((*plVar11 != 0 &&
          (plVar11 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar11 + 0x28)),
          plVar11 != (longlong *)0x0)))) {
        cVar6 = (**(code **)(*plVar11 + 0x2a8))(plVar11,plVar4);
        goto LAB_1412bc8ba;
      }
    }
    else {
      if (cVar6 == '\x02') {
        plVar9 = (longlong *)(*plVar11 + 0x30);
        goto LAB_1412bc1d3;
      }
LAB_1412bc8e9:
      lVar12 = FUN_140162146();
      if (lVar12 != 0) {
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        FUN_1446ddda2(&local_b8,"def_globals_oak_inventory",0);
        FUN_140024ada(&local_b8,plVar4);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
LAB_1412bc936:
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
    }
LAB_1412bc200:
    FUN_1403c747e(lVar7,&local_e8,plVar4[0x4d]);
    plVar11 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      lVar7 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
      plVar4 = *(longlong **)(lVar7 + 0x20);
      if ((plVar4 == (longlong *)0x0) || (*(int *)(lVar7 + 0x1c) == 0)) {
LAB_1412bc695:
        plVar9 = (longlong *)0x0;
      }
      else {
        uVar3 = *(uint *)(lVar7 + 0x18);
        plVar9 = (longlong *)0x0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          if (((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)(lVar7 + 0x1c))) ||
             ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_1412bc695;
          if (*(code **)(*plVar4 + 0x30) == (code *)&LAB_14479b63c) {
            plVar9 = plVar4 + -0xa4;
            if ((longlong *)plVar4[-0x77] != (longlong *)0x0) {
              plVar9 = (longlong *)plVar4[-0x77];
            }
          }
          else {
            plVar9 = (longlong *)(**(code **)(*plVar4 + 0x30))();
          }
        }
      }
      local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffff00000000);
      FUN_14071ab80(plVar11,&local_100,*(longlong *)(param_1 + 0xbf8) + 0xc0,plVar9);
      local_100 = 0;
      local_f8 = 0xffffffffffffffff;
      lVar7 = *(longlong *)(param_1 + 0xbe8);
      if (lVar7 != 0) {
        lVar12 = *(longlong *)(lVar7 + 0x548);
        if (lVar12 == 0) {
          uVar8 = FUN_140067708();
          lVar12 = FUN_14477b664(uVar8);
          *(longlong *)(lVar7 + 0x548) = lVar12;
        }
        if (*(longlong *)(lVar7 + 0x550) == 0) {
          if ((lVar12 != 0) && (*(longlong *)(lVar7 + 0x540) != 0)) {
            plVar11 = *(longlong **)(lVar12 + 0xb8);
            if ((plVar11 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
              *(undefined8 *)(lVar7 + 0x550) = 0;
            }
            else {
              uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
              lVar12 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x540));
              *(longlong *)(lVar7 + 0x550) = lVar12;
              if (lVar12 != 0) goto LAB_1412bc31c;
            }
          }
        }
        else {
LAB_1412bc31c:
          plVar4 = local_e8;
          lVar7 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
          plVar11 = *(longlong **)(lVar7 + 0x20);
          if ((plVar11 == (longlong *)0x0) || (*(int *)(lVar7 + 0x1c) == 0)) {
LAB_1412bc69d:
            plVar9 = (longlong *)0x0;
          }
          else {
            uVar3 = *(uint *)(lVar7 + 0x18);
            plVar9 = (longlong *)0x0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              if (((lVar12 == 0) || (*(int *)(lVar12 + 0x10) != *(int *)(lVar7 + 0x1c))) ||
                 ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)) goto LAB_1412bc69d;
              if (*(code **)(*plVar11 + 0x30) == (code *)&LAB_14479b63c) {
                plVar9 = plVar11 + -0xa4;
                if ((longlong *)plVar11[-0x77] != (longlong *)0x0) {
                  plVar9 = (longlong *)plVar11[-0x77];
                }
              }
              else {
                plVar9 = (longlong *)(**(code **)(*plVar11 + 0x30))();
              }
            }
          }
          local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffff00000000);
          FUN_14071ab80(plVar4,&local_b8,*(longlong *)(param_1 + 0xbe8) + 0x540,plVar9);
          *(undefined8 *)(param_1 + 0xc90) = local_b8;
          *(ulonglong *)(param_1 + 0xc98) = uStack_b0;
          *(ulonglong *)(param_1 + 0xca0) = CONCAT44(uStack_a4,local_a8);
          lVar7 = *(longlong *)(param_1 + 0xbe8);
          lVar12 = *(longlong *)(lVar7 + 0x578);
          if (lVar12 == 0) {
            uVar8 = FUN_1407f787c();
            lVar12 = FUN_14477b664(uVar8);
            *(longlong *)(lVar7 + 0x578) = lVar12;
          }
          if (*(longlong *)(lVar7 + 0x580) == 0) {
            if ((lVar12 != 0) && (*(longlong *)(lVar7 + 0x570) != 0)) {
              plVar11 = *(longlong **)(lVar12 + 0xb8);
              if ((plVar11 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
                *(undefined8 *)(lVar7 + 0x580) = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
                lVar12 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x570));
                *(longlong *)(lVar7 + 0x580) = lVar12;
                if (lVar12 != 0) goto LAB_1412bc422;
              }
            }
          }
          else {
LAB_1412bc422:
            plVar11 = local_e8;
            lVar7 = *(longlong *)(param_1 + 0xbe8);
            lVar12 = *(longlong *)(lVar7 + 0x578);
            if (lVar12 == 0) {
              uVar8 = FUN_1407f787c();
              lVar12 = FUN_14477b664(uVar8);
              *(longlong *)(lVar7 + 0x578) = lVar12;
            }
            lVar10 = *(longlong *)(lVar7 + 0x580);
            if (((lVar10 == 0) && (lVar10 = 0, lVar12 != 0)) && (*(longlong *)(lVar7 + 0x570) != 0))
            {
              plVar4 = *(longlong **)(lVar12 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                lVar10 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar10 = FUN_144aff482(uVar8,(longlong *)(lVar7 + 0x570));
              }
              *(longlong *)(lVar7 + 0x580) = lVar10;
            }
            local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffffffffff00);
            FUN_1447997cc(plVar11,lVar10,0x3f800000,0);
            uVar8 = FUN_1401b4c98(param_1);
            local_d0 = (undefined8 *)0x0;
            local_c8 = 0;
            FUN_1446efa72(&local_d0,0,3,0x10);
            puVar5 = local_d0;
            local_c8 = 3;
            *local_d0 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            local_d0[2] = lVar12;
            *local_d0 = &PTR_FUN_14b977b00;
            local_d0[3] = 0;
            iVar13 = 0;
            if (param_1 != 0) {
              uVar3 = *(uint *)(param_1 + 0xc);
              *(uint *)(local_d0 + 3) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              iVar13 = *(int *)(lVar7 + 0x10);
              if (*(int *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar13 = DAT_14c964868 + 1;
                UNLOCK();
                iVar14 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar13;
                if (bVar16) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar14);
                }
                LOCK();
                iVar13 = *(int *)(lVar7 + 0x10);
                bVar16 = iVar13 == 0;
                if (bVar16) {
                  *(int *)(lVar7 + 0x10) = iVar14;
                  iVar13 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  iVar13 = iVar14;
                }
              }
            }
            *(int *)((longlong)puVar5 + 0x1c) = iVar13;
            puVar5[4] = FUN_140e820c0;
            *(undefined4 *)(puVar5 + 5) = 0;
            local_b8 = 0;
            uStack_b0 = uStack_b0 & 0xffffffff00000000;
            FUN_14487d8d8(&local_b8,&local_d0);
            local_78 = 1;
            local_108 = local_c0;
            local_c0[0] = 1;
            local_bc = 0xbf800000;
            FUN_1406f4044(uVar8,param_1 + 0xc80,&local_b8,0x3cf5c28f);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
            if (local_c8 != 0) {
              if (local_d0 == (undefined8 *)0x0) goto LAB_1412bc5a5;
              (**(code **)*local_d0)(local_d0,0);
              FUN_1446efa72(&local_d0,0,0,0x10);
              local_c8 = 0;
            }
            if (local_d0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
LAB_1412bc5a5:
      if (((local_e8 != (longlong *)0x0) &&
          (*(int *)(local_e8 + 0x21) = (int)local_e8[0x21] + -1, (int)local_e8[0x26] < 1)) &&
         (FUN_1400847bc(local_e8 + 0x17,0), (int)local_e8[0x21] == 0)) {
        FUN_140087e46(local_e8);
        if (*local_e8 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1412bc5d9;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_e8);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_e8);
        }
      }
    }
  }
LAB_1412bc5d9:
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_d8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
LAB_1412bc5ed:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bcb0e FUN_1412bcb0e body=108 status=ok
// SIG undefined FUN_1412bcb0e(void)

void FUN_1412bcb0e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1409804ea(*(longlong *)(param_1 + 0x10),param_2,param_3,param_4,param_5,0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1409804ea(*(longlong *)(param_1 + 0x18),param_2,param_3,param_4,param_5,0);
  }
  return;
}



// FUNCTION 1412bcb7a FUN_1412bcb7a body=956 status=ok
// SIG undefined FUN_1412bcb7a(void)

void FUN_1412bcb7a(longlong param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  void *_Dst;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_3 + 0x14);
  if (*(char *)(param_1 + 8) == *(char *)(param_3 + 8)) {
    *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7 | *(byte *)(param_3 + 0x78) & 8;
  }
  if (*(longlong *)(param_3 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    lVar10 = FUN_1458982f2(param_1,*(undefined8 *)(param_3 + 0x48));
    if ((lVar10 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x48) = lVar10;
      if (lVar10 == 0) goto LAB_1412bcbfe;
    }
    else {
      FUN_1456cec3c(lVar10);
      *(longlong *)(param_1 + 0x48) = lVar10;
    }
    iVar12 = *(int *)(param_3 + 0x58);
    if ((longlong)iVar12 != 0) {
      lVar10 = *(longlong *)(param_3 + 0x50);
      lVar13 = 0;
      do {
        lVar5 = *(longlong *)(lVar10 + lVar13);
        if ((lVar5 != 0) &&
           (plVar11 = (longlong *)FUN_1458982f2(param_1,lVar5), plVar11 != (longlong *)0x0)) {
          (**(code **)(*plVar11 + 0x490))
                    (plVar11,*(undefined8 *)(param_1 + 0x48),&DAT_14cadad98,
                     *(undefined8 *)(lVar5 + 0x128));
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar11);
          }
          iVar4 = *(int *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x5c) < iVar4 + 1U) {
            FUN_1412bd06e((longlong *)(param_1 + 0x50),iVar4);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 8) = plVar11;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar11);
          }
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar12 * 8 != lVar13);
    }
  }
LAB_1412bcbfe:
  iVar12 = *(int *)(param_3 + 0x98);
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  plVar11 = (longlong *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x9c) < iVar12) {
    FUN_1458983ae(plVar11);
    iVar12 = *(int *)(param_3 + 0x98);
  }
  if (0 < iVar12) {
    lVar13 = 0xb0;
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(param_3 + 0x90);
      cVar3 = *(char *)(lVar5 + -0xa8 + lVar13);
      if (cVar3 == '\x02') {
        if (*(char *)(param_1 + 8) == '\0') goto LAB_1412bcc73;
      }
      else if ((cVar3 != '\x01') || (*(char *)(param_1 + 8) != '\0')) {
LAB_1412bcc73:
        iVar12 = *(int *)(param_1 + 0x98);
        *(int *)(param_1 + 0x98) = iVar12 + 1;
        if (*(int *)(param_1 + 0x9c) == iVar12) {
          FUN_140da8d1e(plVar11);
        }
        lVar1 = lVar5 + lVar13;
        lVar14 = (longlong)iVar12 * 0xf0;
        memset((void *)(*plVar11 + lVar14),0,0xf0);
        lVar6 = *plVar11;
        _Dst = (void *)(lVar6 + lVar14);
        memcpy(_Dst,(void *)(lVar1 + -0xb0),0x88);
        *(undefined8 *)(lVar6 + 0x88 + lVar14) = *(undefined8 *)(lVar1 + -0x28);
        uVar7 = *(undefined4 *)(lVar1 + -0x1c);
        uVar8 = *(undefined4 *)(lVar1 + -0x18);
        uVar9 = *(undefined4 *)(lVar1 + -0x14);
        puVar2 = (undefined4 *)(lVar6 + 0x90 + lVar14);
        *puVar2 = *(undefined4 *)(lVar1 + -0x20);
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        if ((void *)(lVar1 + -0xb0) != _Dst) {
          iVar12 = *(int *)(lVar5 + -8 + lVar13);
          _Src = *(void **)(lVar5 + -0x10 + lVar13);
          *(int *)((longlong)_Dst + 0xa8) = iVar12;
          if (iVar12 == 0 && *(int *)((longlong)_Dst + 0xac) == 0) {
            *(undefined4 *)((longlong)_Dst + 0xac) = 0;
          }
          else {
            puVar15 = (undefined8 *)(lVar14 + lVar6 + 0xa0);
            FUN_1446dd670(puVar15,iVar12);
            if (iVar12 != 0) {
              memcpy((void *)*puVar15,_Src,(longlong)iVar12 * 2);
            }
          }
        }
        FUN_14065c7a4((longlong)_Dst + 0xb0,lVar5 + lVar13);
        lVar1 = lVar5 + lVar13;
        uVar7 = *(undefined4 *)(lVar1 + 0x14);
        uVar8 = *(undefined4 *)(lVar1 + 0x18);
        uVar9 = *(undefined4 *)(lVar1 + 0x1c);
        *(undefined4 *)((longlong)_Dst + 0xc0) = *(undefined4 *)(lVar1 + 0x10);
        *(undefined4 *)((longlong)_Dst + 0xc4) = uVar7;
        *(undefined4 *)((longlong)_Dst + 200) = uVar8;
        *(undefined4 *)((longlong)_Dst + 0xcc) = uVar9;
        *(undefined4 *)((longlong)_Dst + 0xd0) = *(undefined4 *)(lVar1 + 0x20);
        FUN_14065c7a4((longlong)_Dst + 0xd8);
        if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar5 + 0x38 + lVar13) != 0)) {
          FUN_1456cec3c();
        }
        *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
        if (*(char *)((longlong)_Dst + 0x14) != -1) {
          *(char *)((longlong)_Dst + 0x14) = (char)(1 << (param_2 & 0x1f));
        }
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0xf0;
    } while (lVar10 < *(int *)(param_3 + 0x98));
  }
  FUN_140cf5864(param_1);
  FUN_140cf57c4(param_1);
  FUN_1409d56ca(param_1);
  FUN_140d90e68(param_1,0);
  return;
}



// FUNCTION 1412bcf36 FUN_1412bcf36 body=311 status=ok
// SIG undefined FUN_1412bcf36(void)

undefined8 FUN_1412bcf36(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      FUN_1433bb909(&local_c8,param_1,*(undefined8 *)(param_2 + 0x18));
      param_3 = local_c8;
    }
    else {
      FUN_1417b2ca2(param_1,param_3);
    }
    local_ac = 0xfff00007;
    local_a8 = 0;
    local_98 = 1;
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_90 = *(undefined8 *)(param_2 + 0x10);
    local_b0 = 0xffb7ffd6;
    uStack_a0 = 0x40000000;
    local_c8 = param_2;
    local_c0 = param_1;
    local_b8 = param_3;
    uVar1 = FUN_14092ef3d(&local_c8);
    FUN_140f9d52a(param_1,uVar1);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_1401be51a(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412bd06e FUN_1412bd06e body=353 status=ok
// SIG undefined FUN_1412bd06e(void)

void FUN_1412bd06e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412bd0f3;
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
LAB_1412bd0f3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1412bd1d0 FUN_1412bd1d0 body=481 status=ok
// SIG undefined FUN_1412bd1d0(void)

void FUN_1412bd1d0(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar9 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar9 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar9) goto LAB_1412bd321;
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar8[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar12 = (longlong)iVar4 * 0x20;
      FUN_140ee3645(*(undefined8 *)(lVar11 + 8 + lVar12),*(undefined4 *)(lVar11 + 0x10 + lVar12));
      if (*(longlong *)(lVar11 + 8 + lVar12) != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar9;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar12 + 1];
          if (uVar5 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar11 == lVar12) goto LAB_1412bd321;
        }
        uVar9 = (ulonglong)(iVar4 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1412bd321:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1412bd3b2 FUN_1412bd3b2 body=228 status=ok
// SIG undefined FUN_1412bd3b2(void)

longlong FUN_1412bd3b2(void)

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
  if (DAT_14cacfc10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1463b31ae;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1479a83dc;
    local_40 = &LAB_1463b31b3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Engine",L"CheatManager",&DAT_14cacfc10,FUN_1463b318c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacfc10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412bd498 FUN_1412bd498 body=228 status=ok
// SIG undefined FUN_1412bd498(void)

longlong FUN_1412bd498(void)

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
  if (DAT_14cb1ab38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147e1d751;
    local_40 = &LAB_146419d80;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x3c0;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnPoint",&DAT_14cb1ab38,FUN_146419d5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ab38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412bd57e FUN_1412bd57e body=228 status=ok
// SIG undefined FUN_1412bd57e(void)

longlong FUN_1412bd57e(void)

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
  if (DAT_14cb675e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146516880;
    local_38 = &LAB_14873bda5;
    local_40 = &LAB_145aba5c8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_Float",&DAT_14cb675e8,
                  &DAT_14873bda4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb675e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412bd664 FUN_1412bd664 body=119 status=ok
// SIG undefined FUN_1412bd664(void)

undefined8 * FUN_1412bd664(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2[2];
  uVar2 = FUN_14477b664(param_2[3]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
  }
  return param_1;
}



// FUNCTION 1412bd6dc FUN_1412bd6dc body=40 status=ok
// SIG undefined FUN_1412bd6dc(void)

undefined8 FUN_1412bd6dc(undefined8 param_1,int param_2)

{
  FUN_1412bd704();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412bd704 FUN_1412bd704 body=589 status=ok
// SIG undefined FUN_1412bd704(void)

void FUN_1412bd704(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5f3880;
  param_1[0x72] = &PTR_FUN_14b5f3f10;
  param_1[0x73] = &PTR_FUN_14b5f3f30;
  param_1[0x74] = &PTR_FUN_14b5f3f60;
  param_1[0x75] = &PTR_FUN_14b5f3f70;
  param_1[0x76] = &PTR_FUN_14b5f3fe0;
  param_1[0x77] = &PTR_FUN_14b5f4010;
  param_1[0x78] = &PTR_FUN_14b5f4040;
  param_1[0x7f] = &PTR_FUN_14b5f40f0;
  param_1[0x80] = &PTR_FUN_14b5f4160;
  param_1[0x81] = &PTR_FUN_14b5f41d0;
  param_1[0x82] = &PTR_FUN_14b5f4200;
  param_1[0x83] = &PTR_FUN_14b5f4240;
  param_1[0x84] = &PTR_FUN_14b5f42e0;
  param_1[0x85] = &PTR_FUN_14b5f4300;
  param_1[0x89] = &PTR_FUN_14b5f4320;
  param_1[0x8a] = &PTR_FUN_14b5f43e0;
  param_1[0x8b] = &PTR_FUN_14b5f4460;
  param_1[0x8c] = &PTR_FUN_14b5f44b0;
  param_1[0x8d] = &PTR_FUN_14b5f44f0;
  param_1[0x8e] = &PTR_FUN_14b5f4510;
  param_1[0x8f] = &PTR_FUN_14b5f4530;
  param_1[0x90] = &PTR_FUN_14b5f4550;
  param_1[0x91] = &PTR_FUN_14b5f4570;
  param_1[0x92] = &PTR_FUN_14b5f4590;
  param_1[0x93] = &PTR_FUN_14b5f45b0;
  param_1[0x94] = &PTR_FUN_14b5f45d0;
  param_1[0x95] = &PTR_FUN_14b5f45f0;
  param_1[0x96] = &PTR_FUN_14b5f4610;
  param_1[0x34b] = &PTR_FUN_14b5f4630;
  param_1[0x352] = &PTR_FUN_14b5f4640;
  param_1[0x353] = &PTR_FUN_14b5f4680;
  param_1[0x354] = &PTR_FUN_14b5f46c0;
  param_1[0x355] = &PTR_FUN_14b5f4710;
  param_1[0x356] = &PTR_FUN_14b5f4740;
  param_1[0x359] = &PTR_FUN_14b5f4780;
  param_1[0x35a] = &PTR_FUN_14b5f4790;
  param_1[0x35b] = &PTR_FUN_14b5f47c0;
  param_1[0x35c] = &PTR_FUN_14b5f4860;
  param_1[0x4bf] = &PTR_FUN_14b5f4880;
  FUN_1412bd952(param_1 + 0x4e0);
  FUN_14102816a(param_1);
  return;
}



// FUNCTION 1412bd952 FUN_1412bd952 body=83 status=ok
// SIG undefined FUN_1412bd952(void)

void FUN_1412bd952(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5f8150;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b5ecc40;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b5ecc40;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_140639928(param_1);
  return;
}



// FUNCTION 1412bd9a6 FUN_1412bd9a6 body=328 status=ok
// SIG undefined FUN_1412bd9a6(void)

void FUN_1412bd9a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = FUN_1412bdaf0(param_1 + 0x30);
  if ((lVar7 != 0) && (lVar7 = FUN_1400d6ce6(lVar7), lVar7 != 0)) {
    FUN_1449027d0(param_1,&local_50);
    plVar4 = *(longlong **)(local_50 + 0x4d0);
    AcquireSRWLockShared((PSRWLOCK)(plVar4 + 0x2d));
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
    if ((longlong)(int)plVar4[1] != 0) {
      lVar8 = *plVar4;
      lVar10 = (longlong)(int)plVar4[1] * 0xb0 + lVar8;
      do {
        iVar3 = *(int *)(lVar8 + 0x50);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(lVar8 + 0x48);
          lVar9 = 0;
          do {
            lVar6 = *(longlong *)(lVar5 + lVar9);
            if ((lVar6 != 0) && ((1 < *(int *)(lVar6 + 0x98) || (*(longlong *)(lVar6 + 0xa8) != 0)))
               ) {
              FUN_140c3e574(lVar7 + 0x120,lVar6 + 0x90);
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar3 * 0x10 != lVar9);
        }
        lVar8 = lVar8 + 0xb0;
      } while (lVar8 != lVar10);
    }
    ReleaseSRWLockShared((PSRWLOCK)(plVar4 + 0x2d));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bdaf0 FUN_1412bdaf0 body=39 status=ok
// SIG undefined FUN_1412bdaf0(void)

undefined8 FUN_1412bdaf0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  return uVar2;
}



// FUNCTION 1412bdb18 FUN_1412bdb18 body=124 status=ok
// SIG undefined FUN_1412bdb18(void)

longlong * FUN_1412bdb18(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  plVar3 = param_2 + 2;
  plVar4 = param_1 + 2;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar4 = *plVar3;
    plVar3 = plVar3 + 1;
    plVar4 = plVar4 + 1;
  }
  *(int *)(param_1 + 0xb) = (int)param_2[0xb];
  return param_1;
}



// FUNCTION 1412bdb94 FUN_1412bdb94 body=41 status=ok
// SIG undefined FUN_1412bdb94(void)

void FUN_1412bdb94(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1412bdbbe(param_1);
    param_1 = param_1 + 0xf8;
  }
  return;
}



// FUNCTION 1412bdbbe FUN_1412bdbbe body=584 status=ok
// SIG undefined FUN_1412bdbbe(void)

void FUN_1412bdbbe(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447e76d0(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0xb8) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0xb0) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0xa8) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0xa0) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x98) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x90) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412bde06 FUN_1412bde06 body=94 status=ok
// SIG undefined FUN_1412bde06(void)

void FUN_1412bde06(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aa6b3f0;
  param_1[0x14] = &PTR_FUN_14aa6ec40;
  lVar1 = 0x15;
  do {
    if (param_1[lVar1] != 0) {
      FUN_1400020a8();
      param_1[lVar1] = 0;
    }
    param_1[lVar1 + 0xf] = 0;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x24);
  FUN_1401c04d8(param_1);
  return;
}



// FUNCTION 1412bde64 FUN_1412bde64 body=825 status=ok
// SIG undefined FUN_1412bde64(void)

undefined4 FUN_1412bde64(longlong param_1,undefined1 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_4[1];
  lVar4 = *param_4;
  local_50 = DAT_14cbc9ab0;
  lVar9 = FUN_14063edce(&DAT_14cb91658);
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar12 = 0;
    uVar14 = (int)lVar7;
    if (lVar4 == 0) {
      uVar14 = 0;
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar8 = DAT_14c762760 + 1;
    *(int *)(puVar10 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar8;
    *puVar10 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(puVar10 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar13;
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar8;
    *(undefined1 *)(puVar10 + 3) = param_2;
    *puVar10 = &PTR_FUN_14b47b110;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 0;
    plVar11 = (longlong *)FUN_14063f168(puVar10 + 4);
    if ((int)plVar11[1] != 4) {
      FUN_1446efa72(plVar11,0,4,0x10);
      *(undefined4 *)(plVar11 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar11;
    plVar11 = *(longlong **)(param_3 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_1412be0ab:
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c54f0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = lVar4;
      *(undefined4 *)(puVar5 + 6) = uVar14;
    }
    else {
      iVar8 = (int)plVar11[1];
      do {
        if (iVar8 == 0) goto LAB_1412be0ab;
        LOCK();
        iVar13 = (int)plVar11[1];
        bVar15 = iVar8 == iVar13;
        if (bVar15) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar13 = iVar8;
        }
        iVar8 = iVar13;
        UNLOCK();
      } while (!bVar15);
      uVar6 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c54f0;
      puVar5[3] = uVar6;
      puVar5[4] = plVar11;
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar14;
      puVar5[5] = lVar4;
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
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_141053524((longlong *)(param_1 + 0x198),iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar10;
    uVar14 = *(undefined4 *)(puVar10 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 1412be19e FUN_1412be19e body=759 status=ok
// SIG undefined FUN_1412be19e(void)

double * FUN_1412be19e(double *param_1,double *param_2,double *param_3,double param_4,byte param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  ulonglong uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auStack_d8 [47];
  byte local_a9;
  double *local_a8;
  double *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar13 = param_2[6];
  param_1[6] = dVar13;
  dVar12 = *param_2;
  dVar16 = param_2[1];
  dVar17 = param_2[2];
  dVar4 = param_2[3];
  dVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = dVar5;
  param_1[2] = dVar17;
  param_1[3] = dVar4;
  *param_1 = dVar12;
  param_1[1] = dVar16;
  dVar12 = param_3[1];
  param_1[7] = *param_3;
  param_1[8] = dVar12;
  param_1[9] = param_3[2];
  param_1[10] = param_4;
  pdVar7 = param_1 + 0xb;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  iVar11 = 1;
  uVar10 = 1;
  local_a8 = param_3;
  if (SUB81(dVar13,0) != '\0') {
    dVar13 = ABS(param_1[1] - param_1[8]);
    dVar12 = ABS(*param_1 - param_1[7]);
    dVar17 = ABS(param_1[4] - param_1[8]);
    dVar16 = ABS(param_1[3] - param_1[7]);
    if (dVar16 <= dVar17) {
      dVar16 = dVar17;
    }
    if (dVar12 <= dVar13) {
      dVar12 = dVar13;
    }
    if (dVar12 <= dVar16) {
      dVar12 = dVar16;
    }
    if (0.0 < dVar12) {
      auVar14._0_8_ = dVar12 / (double)(longlong)param_4;
      auVar14._8_8_ = 0;
      auVar14 = roundpd(auVar14,auVar14,2);
      uVar6 = (ulonglong)(auVar14._0_8_ + auVar14._0_8_);
      if ((uVar6 & uVar6 - 1) == 0) {
        if (1 < (longlong)uVar6) {
          uVar10 = uVar6;
        }
        lVar3 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar11 = ((uint)lVar3 ^ 0xffffffc0) + 0x41;
      }
      else {
        dVar13 = log((double)(longlong)uVar6);
        auVar15._0_8_ = dVar13 * 1.4426950408889634;
        auVar15._8_8_ = 0;
        auVar14 = roundpd(auVar15,auVar15,2);
        dVar13 = (double)exp2(auVar14._0_8_);
        uVar10 = 1;
        if (1 < (longlong)dVar13) {
          uVar10 = (longlong)dVar13;
        }
        lVar3 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar11 = ((uint)lVar3 ^ 0xffffffc0) + 0x41;
        if (iVar11 <= *(int *)((longlong)param_1 + 100)) goto LAB_1412be31f;
      }
    }
  }
  FUN_1412be496(pdVar7,iVar11);
LAB_1412be31f:
  dVar13 = param_1[10];
  param_5 = param_5 ^ 1;
  iVar8 = 0;
  pdVar9 = local_a8;
  do {
    dVar12 = *pdVar9;
    dVar16 = pdVar9[1];
    iVar2 = *(int *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 100) < iVar2 + 1U) {
      local_a9 = param_5;
      local_a0 = pdVar7;
      FUN_147dc8a12(pdVar7,iVar2);
      pdVar7 = local_a0;
      pdVar9 = local_a8;
      param_5 = local_a9;
    }
    dVar17 = *pdVar7;
    lVar3 = (longlong)iVar2 * 0x88;
    *(double *)((longlong)dVar17 + lVar3) = dVar12;
    *(double *)((longlong)dVar17 + 8 + lVar3) = dVar16;
    *(double *)((longlong)dVar17 + 0x10 + lVar3) = dVar13;
    *(ulonglong *)((longlong)dVar17 + 0x18 + lVar3) = (iVar8 - iVar11 != -1 & param_5) + uVar10;
    *(int *)((longlong)dVar17 + 0x20 + lVar3) = iVar8;
    *(undefined8 *)((longlong)dVar17 + 0x58 + lVar3) = 0;
    *(undefined4 *)((longlong)dVar17 + 0x60 + lVar3) = 0;
    puVar1 = (undefined8 *)((longlong)dVar17 + 0x28 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)dVar17 + 0x38 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)dVar17 + 100 + lVar3) = 0xffffffff00000080;
    *(undefined4 *)((longlong)dVar17 + 0x6c + lVar3) = 0;
    *(undefined8 *)((longlong)dVar17 + 0x78 + lVar3) = 0;
    *(undefined4 *)((longlong)dVar17 + 0x80 + lVar3) = 0;
    dVar13 = (double)((longlong)dVar13 * 2);
    uVar10 = uVar10 >> 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 != iVar11);
  local_98 = 0;
  uStack_90 = 0;
  FUN_1412be5da((longlong)(*(int *)(param_1 + 0xc) + -1) * 0x88 + (longlong)param_1[0xb]);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412be496 FUN_1412be496 body=324 status=ok
// SIG undefined FUN_1412be496(void)

undefined8 FUN_1412be496(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x88;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0xf1) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412be4fe;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0xfffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
    }
  }
LAB_1412be4fe:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xf0f0f0f0f0f0f0f1),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x88)) {
    uVar4 = uVar6 / 0x88 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x88,8);
  }
  return uVar5;
}



// FUNCTION 1412be5da FUN_1412be5da body=379 status=ok
// SIG undefined FUN_1412be5da(void)

longlong FUN_1412be5da(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_R12;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_2;
  if ((((-1 < lVar3) && (lVar6 = *(longlong *)(param_1 + 0x18), lVar3 < lVar6)) &&
      (unaff_R12 = param_2[1], -1 < unaff_R12)) && (unaff_R12 < lVar6)) {
    unaff_R12 = unaff_R12 * lVar6 + lVar3;
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar6 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x78);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x80) - 1U &
                             (int)unaff_R12 + (int)((ulonglong)unaff_R12 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x18);
        if (*plVar1 == unaff_R12) {
          plVar8 = plVar1 + 1;
          if (plVar8 != (longlong *)0x0 && plVar1 != (longlong *)0x0) goto LAB_1412be6a0;
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  iVar5 = *(int *)(param_1 + 0x20);
  lVar6 = param_2[1];
  iVar2 = *(int *)(param_1 + 0x30);
  lVar7 = (longlong)iVar2;
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_1412be932((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(lVar4 + lVar7 * 0x18) = lVar3;
  *(longlong *)(lVar4 + 8 + lVar7 * 0x18) = lVar6;
  *(longlong *)(lVar4 + 0x10 + lVar7 * 0x18) = (longlong)iVar5;
  plVar8 = &local_68;
  local_60 = &local_70;
  local_70 = unaff_R12;
  local_68 = lVar7;
  local_58 = plVar8;
  FUN_1412be756((longlong *)(param_1 + 0x38),local_4c,&local_60,0);
LAB_1412be6a0:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)(int)*plVar8 * 0x18 + *(longlong *)(param_1 + 0x28);
}



// FUNCTION 1412be756 FUN_1412be756 body=323 status=ok
// SIG undefined FUN_1412be756(void)

undefined4 *
FUN_1412be756(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412beaa4(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar3 = FUN_1412be89a(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1412bec80(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412be89a FUN_1412be89a body=152 status=ok
// SIG undefined FUN_1412be89a(void)

void FUN_1412be89a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_147dc2b36((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1412be8be;
    }
  }
  uVar5 = 0;
LAB_1412be8be:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1412be932 FUN_1412be932 body=370 status=ok
// SIG undefined FUN_1412be932(void)

void FUN_1412be932(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412be9bb;
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
LAB_1412be9bb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1412beaa4 FUN_1412beaa4 body=476 status=ok
// SIG undefined FUN_1412beaa4(void)

int * FUN_1412beaa4(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1412bec80 FUN_1412bec80 body=661 status=ok
// SIG undefined FUN_1412bec80(void)

void FUN_1412bec80(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_1412bece4;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_1412bece4:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x18);
      uVar16 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x14 + lVar13 * 0x18) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar13 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 1412bef15 FUN_1412bef15 body=105 status=ok
// SIG undefined FUN_1412bef15(void)

void FUN_1412bef15(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412bef7e FUN_1412bef7e body=412 status=ok
// SIG undefined FUN_1412bef7e(void)

void FUN_1412bef7e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1406666a8(param_1);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if ((lVar6 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x40) = lVar6;
      if (lVar6 == 0) goto LAB_1412bf030;
    }
    else {
      FUN_1456cec3c(lVar6);
      *(longlong *)(param_1 + 0x40) = lVar6;
    }
    plVar1 = *(longlong **)(lVar6 + 0x3d0);
    if (plVar1 == (longlong *)0x0) goto LAB_1412bf030;
    uVar5 = FUN_140437cd0();
    lVar6 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar5);
    if (lVar6 == 0) goto LAB_1412bf030;
    uVar5 = FUN_140437cd0();
    lVar7 = FUN_144718840(lVar6,uVar5);
    if (lVar6 == lVar7) goto LAB_1412bf030;
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = 0;
LAB_1412bf030:
    lVar7 = 0;
  }
  *(longlong *)(param_1 + 0x48) = lVar7;
  plVar1 = (longlong *)(param_1 + 0x168);
  iVar4 = *(int *)(param_1 + 0x170);
  if (iVar4 == 0) {
LAB_1412bf082:
    FUN_1446efa72(plVar1,0,3,0x10);
    *(undefined4 *)(param_1 + 0x170) = 3;
  }
  else {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
      if (cVar3 != '\0') goto LAB_1412bf059;
      iVar4 = *(int *)(param_1 + 0x170);
    }
    if (iVar4 != 3) goto LAB_1412bf082;
  }
  puVar2 = (undefined8 *)*plVar1;
  *puVar2 = &PTR_LAB_14a78e0f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar7;
  *puVar2 = &PTR_FUN_14b991510;
  puVar2[3] = 0;
  FUN_14485c47a(puVar2 + 3,param_1);
  puVar2[4] = FUN_140a86cb4;
LAB_1412bf059:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bf16a FUN_1412bf16a body=1402 status=ok
// SIG undefined FUN_1412bf16a(void)

void FUN_1412bf16a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  undefined8 local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x460) != 0) {
    *(byte *)(param_1 + 0x3c4) = *(byte *)(param_1 + 0x3c4) & 0xc1;
    lVar12 = FUN_141416276(param_1);
    if ((lVar12 != 0) &&
       ((*(longlong *)(lVar12 + 0x8a8) != *(longlong *)(param_1 + 0x460) ||
        (*(int *)(lVar12 + 0x8b0) != *(int *)(param_1 + 0x468))))) {
      *(longlong *)(lVar12 + 0x8a8) = *(longlong *)(param_1 + 0x460);
      *(undefined4 *)(lVar12 + 0x8b0) = *(undefined4 *)(param_1 + 0x468);
      *(undefined8 *)(lVar12 + 0x8b8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x4fc) == 0) goto LAB_1412bf3bd;
  if ((*(char *)(param_1 + 0x4d0) == '\x01') && (cVar4 = FUN_1449e2a3e(param_1), cVar4 != '\0')) {
    if ((*(uint *)(param_1 + 0x3cc) & 1) == 0) {
      *(uint *)(param_1 + 0x3cc) = *(uint *)(param_1 + 0x3cc) | 1;
    }
    *(byte *)(param_1 + 0x3f8) = *(byte *)(param_1 + 0x3f8) & 0xfb;
    if (*(char *)(param_1 + 0x178) == '\x03') {
      FUN_140c7ce82(param_1,0);
    }
    local_60 = (longlong *)0x0;
    local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
    FUN_1446efa72(&local_60,0,3,0x10);
    plVar5 = local_60;
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,3);
    *local_60 = (longlong)&PTR_LAB_14a1ca6c0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_60[2] = lVar7;
    *local_60 = (longlong)&PTR_FUN_14b424180;
    local_60[3] = 0;
    iVar10 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_60 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar10 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar10 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar10 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar8;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar10 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar5 + 0x1c) = iVar10;
    plVar5[4] = (longlong)FUN_1409ea5fe;
    *(undefined4 *)(plVar5 + 5) = 0;
    if (((int)local_58 == 0) || (local_60 == (longlong *)0x0)) {
LAB_1412bf679:
      if ((int)local_58 == 0) {
        uVar9 = 0;
        goto LAB_1412bf37b;
      }
      if (local_60 != (longlong *)0x0) {
        uVar9 = 0;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_1412bf36e;
      }
      uVar9 = 0;
    }
    else {
      cVar4 = (**(code **)(*local_60 + 0x30))();
      uVar1 = DAT_14cb10a80;
      if (cVar4 == '\0') {
        goto LAB_1412bf679;
      }
      if ((DAT_14cb10a8c < 1) &&
         (DAT_14cb10a88 = DAT_14cb10a88 + -1, DAT_14cb10a88 <= (int)DAT_14cb10a80)) {
        if (0 < (int)DAT_14cb10a80) {
          iVar10 = 0;
          do {
            if (((*(int *)(DAT_14cb10a78 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar5 = *(longlong **)(DAT_14cb10a78 + (longlong)iVar10 * 0x10),
                plVar5 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar5 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(&DAT_14cb10a78,iVar10);
              FUN_14005b248(&DAT_14cb10a78);
            }
            else {
              iVar10 = iVar10 + 1;
            }
          } while (iVar10 < (int)DAT_14cb10a80);
        }
        DAT_14cb10a88 = 2;
        if (2 < (int)(DAT_14cb10a80 * 2)) {
          DAT_14cb10a88 = DAT_14cb10a80 * 2;
        }
        if ((DAT_14cb10a88 < (int)uVar1) && (DAT_14cb10a84 != DAT_14cb10a80)) {
          FUN_14045812c();
        }
      }
      uVar9 = 0;
      if (((int)local_58 != 0) && (local_60 != (longlong *)0x0)) {
        (**(code **)(*local_60 + 0x38))(local_60,&local_68);
        uVar9 = local_68;
      }
      uVar1 = DAT_14cb10a80;
      lVar12 = (longlong)(int)DAT_14cb10a80;
      DAT_14cb10a80 = DAT_14cb10a80 + 1;
      if (DAT_14cb10a84 < DAT_14cb10a80) {
        FUN_1447a71f6(&DAT_14cb10a78,uVar1);
      }
      lVar7 = DAT_14cb10a78;
      lVar12 = lVar12 * 0x10;
      *(undefined8 *)(DAT_14cb10a78 + lVar12) = 0;
      *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
      *(longlong **)(lVar7 + lVar12) = local_60;
      local_60 = (longlong *)0x0;
      *(int *)(lVar7 + 8 + lVar12) = (int)local_58;
LAB_1412bf36e:
      local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
LAB_1412bf37b:
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x620) = uVar9;
    FUN_14078a36a(param_1 + 0x5b0,param_1 + 0x450);
  }
  if (*(int *)(param_1 + 0x4fc) != 0) {
    FUN_1407bebdc(param_1 + 0x4d8,param_1 + 0x448,param_1);
  }
LAB_1412bf3bd:
  if ((*(byte *)(param_1 + 0x3f8) & 2) != 0) {
    lVar12 = param_1 + 0x738;
    if (*(int *)(param_1 + 0x740) != *(int *)(param_1 + 0x76c)) {
      FUN_14895520a(lVar12);
      *(undefined4 *)(param_1 + 0x740) = 0;
      if (*(int *)(param_1 + 0x744) < 0) {
        FUN_1401ad22e(lVar12,0);
      }
      *(undefined8 *)(param_1 + 0x768) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x760) = 0;
    }
    if (((*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0) &&
        (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x2e8))(), lVar7 != 0)) &&
       (plVar5 = (longlong *)FUN_1402981dc(lVar7), plVar5 != (longlong *)0x0)) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x328))(plVar5);
      lVar7 = plVar5[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar2 = *plVar5;
        lVar11 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar11);
          if (lVar3 != 0) {
            lVar6 = FUN_140298736();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              local_68 = 0;
              FUN_14485c47a(&local_68,*(undefined8 *)(lVar3 + 0x7d8));
              FUN_14029898a(lVar3,local_6c);
              local_60 = (longlong *)local_6c;
              local_58 = &local_68;
              FUN_14589a60e(lVar12,local_4c,&local_60);
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar11);
      }
    }
  }
  FUN_1412bf6e6(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bf6e6 FUN_1412bf6e6 body=68 status=ok
// SIG undefined FUN_1412bf6e6(void)

void FUN_1412bf6e6(longlong param_1)

{
  FUN_1405f1eac();
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FUN_140a4b426(param_1,*(longlong *)(param_1 + 0x3d0),0);
  }
  if ((*(byte *)(param_1 + 0x3a8) & 1) == 0) {
    return;
  }
  FUN_140ef5ee2(*(undefined8 *)(param_1 + 0x3d0));
  return;
}



// FUNCTION 1412bf780 FUN_1412bf780 body=345 status=ok
// SIG undefined FUN_1412bf780(void)

void FUN_1412bf780(longlong *param_1,undefined8 param_2)

{
  size_t sVar1;
  uint uVar2;
  wchar_t *_Str;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_60 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      goto LAB_1412bf86c;
    }
  }
  local_60 = (undefined1 *)0x0;
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
LAB_1412bf86c:
  FUN_143eba3be(param_2,local_58,param_1 + 2,param_1 + 3);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412bf8da FUN_1412bf8da body=277 status=ok
// SIG undefined FUN_1412bf8da(void)

void FUN_1412bf8da(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,9);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1412bf922;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1412bf922:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar5 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  lVar2 = *param_3;
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 5]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar5 * 4 + 0x14 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 4) {
      return;
    }
  } while( true );
}



// FUNCTION 1412bf9f0 FUN_1412bf9f0 body=246 status=ok
// SIG undefined FUN_1412bf9f0(void)

longlong FUN_1412bf9f0(uint *param_1)

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
  lVar3 = FUN_1412bfae6();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1412bfae6 FUN_1412bfae6 body=228 status=ok
// SIG undefined FUN_1412bfae6(void)

longlong FUN_1412bfae6(void)

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
  if (DAT_14cb9ac48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148b0784c;
    local_40 = FUN_146595891;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GbxUISettings",L"InputSettingsGamepadPreset",&DAT_14cb9ac48,
                  FUN_14659586a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9ac48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


