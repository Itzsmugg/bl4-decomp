// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144a88240 FUN_144a88240 body=103 status=ok
// SIG undefined FUN_144a88240(void)

void FUN_144a88240(longlong *param_1,undefined8 param_2,byte param_3,byte param_4)

{
  char cVar1;
  
  if ((param_3 != param_4) &&
     (((((param_4 & 0xcc) != 0) != ((param_3 & 0xcc) != 0) || ((char)(param_4 ^ param_3) < '\0')) &&
      (cVar1 = FUN_1400d1184(param_1), cVar1 != '\0')))) {
    FUN_146932214(*(longlong *)(*param_1 + 0x10),
                  (ulonglong)((*(uint *)(param_1 + 2) >> 0x10) * 0x18) +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x10) + 0x10 +
                   (ulonglong)((*(uint *)(param_1 + 2) & 0xffff) << 6)));
    return;
  }
  return;
}



// FUNCTION 144a882a8 FUN_144a882a8 body=175 status=ok
// SIG undefined FUN_144a882a8(void)

undefined8 * FUN_144a882a8(undefined8 *param_1,undefined8 *param_2,wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  
  if (param_3 != (wchar_t *)0x0) {
    sVar4 = wcslen(param_3);
    if ((int)sVar4 != 0) {
      iVar1 = *(int *)(param_2 + 1);
      iVar3 = (int)sVar4 + (uint)(iVar1 == 0);
      *param_1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 1) = iVar1;
      iVar2 = *(int *)((longlong)param_2 + 0xc);
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      param_2[1] = 0;
      iVar5 = iVar3 + iVar1;
      if (iVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar3);
      }
      if (-1 < iVar5) {
        if (iVar2 < iVar5) {
          FUN_1446f8c06(param_1);
        }
        FUN_1400020e8(param_1,param_3,sVar4 & 0xffffffff);
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
  }
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 144a88358 FUN_144a88358 body=60 status=ok
// SIG undefined FUN_144a88358(void)

void FUN_144a88358(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 144a88394 FUN_144a88394 body=34 status=ok
// SIG undefined FUN_144a88394(void)

undefined8 FUN_144a88394(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x458);
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xf0);
  }
  return *puVar1;
}



// FUNCTION 144a883b6 FUN_144a883b6 body=282 status=ok
// SIG undefined FUN_144a883b6(void)

longlong FUN_144a883b6(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_144a88409;
  }
  lVar1 = 0;
LAB_144a88409:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a884d2 FUN_144a884d2 body=39 status=ok
// SIG undefined FUN_144a884d2(void)

undefined8 * FUN_144a884d2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1446ddda2();
  return param_1;
}



// FUNCTION 144a884fa FUN_144a884fa body=135 status=ok
// SIG undefined FUN_144a884fa(void)

bool FUN_144a884fa(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if (((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
       ((lVar4 = *(longlong *)(param_1 + 0xb0), lVar4 != 0 ||
        (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
      (((*(byte *)(lVar4 + 0x152) == 1 || (*(byte *)(lVar4 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar4 + 0x178) != 0)))) && (DAT_14c76152c == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    bVar2 = iVar3 < (int)(uint)bVar1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 144a88582 FUN_144a88582 body=73 status=ok
// SIG undefined FUN_144a88582(void)

float FUN_144a88582(undefined8 param_1,float param_2,int param_3)

{
  float fVar1;
  
  if (1 < param_3 - 1U) {
    fVar1 = tanf((param_2 * 3.1415927) / 360.0);
    param_2 = atanf(fVar1 * 9.0 * 0.0625);
    param_2 = param_2 * 114.59155;
  }
  return param_2;
}



// FUNCTION 144a885cc FUN_144a885cc body=15 status=ok
// SIG undefined FUN_144a885cc(void)

byte FUN_144a885cc(void)

{
  return DAT_14cb526f4 & DAT_14cb527d0 & 1;
}



// FUNCTION 144a885dc FUN_144a885dc body=209 status=ok
// SIG undefined FUN_144a885dc(void)

int FUN_144a885dc(void)

{
  int iVar1;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined1 *local_e0;
  undefined1 local_c9;
  int local_c8;
  undefined1 local_c4 [7];
  undefined1 local_bd;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [136];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14c8c27ac < 1) {
    memset(local_b0,0,0x82);
    local_b4 = 0;
    local_b8 = 0;
    local_bc = 0;
    FUN_140e55932(local_b0,&local_b4,&local_b8,&local_bc);
    iVar1 = local_bc;
    local_e0 = &local_c9;
    local_e8 = &local_c8;
    FUN_1457b80ec(local_b8,local_bc,&local_bd,local_c4);
    DAT_14c8c27ac = iVar1;
    if ((0 < local_c8) && (DAT_14c8c27ac = iVar1, local_c8 <= iVar1)) {
      DAT_14c8c27ac = local_c8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c8c27ac;
}



// FUNCTION 144a886ae FUN_144a886ae body=20 status=ok
// SIG undefined FUN_144a886ae(void)

void FUN_144a886ae(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 0 || (uVar1 & 1) != 0) {
    return;
  }
  if (uVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,uVar1);
    return;
  }
  return;
}



// FUNCTION 144a886c2 FUN_144a886c2 body=35 status=ok
// SIG undefined FUN_144a886c2(void)

longlong * FUN_144a886c2(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(code **)(*param_1 + 0x10) == (code *)&LAB_144801c46) {
    return param_1 + 0x9f;
  }
                    /* WARNING: Could not recover jumptable at 0x000144a886e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
  return plVar1;
}



// FUNCTION 144a886e6 FUN_144a886e6 body=131 status=ok
// SIG undefined FUN_144a886e6(void)

void FUN_144a886e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 5) = 0x101;
  param_1[10] = 0;
  param_1[0xb] = 0x800000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0x400000000;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *param_1 = param_2;
  *(undefined2 *)((longlong)param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  if (param_5 != 0) {
    uVar1 = *(undefined4 *)(param_5 + 0xc);
    *(undefined4 *)(param_1 + 0xf) = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    param_1[1] = *(undefined8 *)(param_5 + 0x18);
  }
  *(undefined2 *)((longlong)param_1 + 0x17) = 0x101;
  return;
}



// FUNCTION 144a8876a FUN_144a8876a body=166 status=ok
// SIG undefined FUN_144a8876a(void)

undefined2 FUN_144a8876a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (DAT_14ca80058 != DAT_14ca80084) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar6 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar6 = DAT_14ca80090;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14ca80098 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14ca80050 + (longlong)iVar2 * 0x14);
      if (*plVar1 == lVar3) {
        if (plVar1 == (longlong *)0x0) {
          return 0x9b;
        }
        if (plVar1 + 1 == (longlong *)0x0) {
          return 0x9b;
        }
        return (short)plVar1[1];
      }
      iVar2 = *(int *)((longlong)plVar1 + 0xc);
    }
  }
  return 0x9b;
}



// FUNCTION 144a88810 FUN_144a88810 body=221 status=ok
// SIG undefined FUN_144a88810(void)

longlong FUN_144a88810(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  code *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9512c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = FUN_1468be0cd;
    local_40 = &LAB_145d7be2f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",&DAT_14c9512c8,
                  &DAT_1468be114);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9512c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a888ee FUN_144a888ee body=434 status=ok
// SIG undefined FUN_144a888ee(void)

undefined * FUN_144a888ee(void)

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
              0x110) < DAT_14ca41c10) {
    FUN_144b3d300(&DAT_14ca41c10);
    if (DAT_14ca41c10 == -1) {
      FUN_145b22534(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"ReflectionCapture";
      local_70 = L"ReflectionCaptureSM5";
      local_78 = L"FReflectionCaptureShaderData";
      local_38 = 0;
      local_50 = 0xbfd0;
      local_58 = 0x322;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca41b90,1,3);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f84a16);
      _Init_thread_footer(&DAT_14ca41c10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca41b90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a88aa2 FUN_144a88aa2 body=919 status=ok
// SIG undefined FUN_144a88aa2(void)

int * FUN_144a88aa2(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_144869a3c(param_1,iVar18);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar13 = iVar20 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar10 = iVar20 + 1;
    iVar17 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar17 = iVar20;
    }
    if (iVar17 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar13 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar10 = 0x80;
        }
        else {
          uVar9 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar21 = 4;
            if (4 < uVar9) {
              uVar21 = uVar9;
            }
          }
          else {
            uVar21 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
          }
          uVar11 = (ulonglong)(uVar21 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar5 = (uint)(uVar11 + 0xf);
              if (uVar21 < 0x1ffd) {
                uVar11 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar11 + 0xf >> 4]];
              }
              else {
                uVar12 = (ulonglong)(uVar5 & 0xfffffff0);
                if (uVar12 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar5 >> 4];
                  uVar16 = 0x32;
                  if (0x32 < bVar8) {
                    uVar16 = (ulonglong)bVar8;
                  }
                  uVar19 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar11 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0) goto LAB_144a88d2e;
                    lVar7 = uVar16 + 1 + uVar19;
                    uVar19 = uVar19 - 1;
                  } while (lVar7 != 0x33);
                }
                uVar11 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar11 = (ulonglong)DAT_14c841df8;
                }
                uVar11 = -uVar11 & (uVar12 + uVar11) - 1;
              }
            }
            else {
              uVar11 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar11,0);
              iVar13 = (int)param_1[5];
            }
          }
LAB_144a88d2e:
          iVar6 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar9 <= iVar6) {
            iVar10 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar14,iVar13);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar13 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar13 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar14;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar13 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar7 = (longlong)iVar18;
    iVar20 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar20;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x10) = 0xffffffff;
    }
  }
  plVar14 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[4];
  }
  iVar20 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar20 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar20 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  iVar20 = 1;
  lVar2 = *param_1;
  lVar7 = lVar7 * 0x10;
  puVar3 = (undefined4 *)param_3[1];
  uVar9 = *(uint *)*param_3;
  *(uint *)(lVar2 + lVar7) = uVar9;
  *(undefined4 *)(lVar2 + 4 + lVar7) = *puVar3;
  *(undefined4 *)(lVar2 + 8 + lVar7) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar21) {
    uVar11 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar20 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar21 < 1) || (iVar20 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)(lVar2 + lVar7 + 0xc) = uVar9;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + lVar7 + 8) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar20;
    FUN_144a88e3a(param_1);
  }
  *param_2 = iVar18;
  return param_2;
}



// FUNCTION 144a88e3a FUN_144a88e3a body=628 status=ok
// SIG undefined FUN_144a88e3a(void)

void FUN_144a88e3a(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_144a88eac;
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
LAB_144a88eac:
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
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
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



// FUNCTION 144a890ae FUN_144a890ae body=434 status=ok
// SIG undefined FUN_144a890ae(void)

undefined * FUN_144a890ae(void)

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
              0x110) < DAT_14cb02dd0) {
    FUN_144b3d300(&DAT_14cb02dd0);
    if (DAT_14cb02dd0 == -1) {
      FUN_1414c615a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"MobileSceneTextures";
      local_78 = L"FMobileSceneTextureUniformParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb02d50,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a25c5);
      _Init_thread_footer(&DAT_14cb02dd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb02d50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a89262 FUN_144a89262 body=423 status=ok
// SIG undefined FUN_144a89262(void)

undefined * FUN_144a89262(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14c9e4a00) {
    FUN_144b3d300(&DAT_14c9e4a00);
    if (DAT_14c9e4a00 == -1) {
      FUN_145b2669e(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ReflectionStruct";
      local_78 = L"FReflectionUniformParameters";
      local_50 = 0x50;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e4980,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cbfdad);
      _Init_thread_footer(&DAT_14c9e4a00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e4980;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8940a FUN_144a8940a body=19 status=ok
// SIG undefined FUN_144a8940a(void)

ulonglong FUN_144a8940a(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return (ulonglong)CONCAT31((int3)((uint)param_1[2] >> 8),param_1[2] != param_2[2]);
  }
  return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
}



// FUNCTION 144a8941e FUN_144a8941e body=228 status=ok
// SIG undefined FUN_144a8941e(void)

longlong FUN_144a8941e(void)

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
  if (DAT_14caa7a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a134;
    local_38 = &LAB_147473291;
    local_40 = FUN_1457f6a1e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a89504 FUN_144a89504 body=228 status=ok
// SIG undefined FUN_144a89504(void)

longlong FUN_144a89504(void)

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
  if (DAT_14cabea40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b34458;
    local_38 = &LAB_147856f3b;
    local_40 = FUN_1417ac842;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"AnimCurveMetaData",&DAT_14cabea40,&DAT_147856f3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabea40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a895ea FUN_144a895ea body=228 status=ok
// SIG undefined FUN_144a895ea(void)

longlong FUN_144a895ea(void)

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
  if (DAT_14cac1380 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14786f389;
    local_40 = &LAB_145cd59f0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"GbxEngineDebugSettings",&DAT_14cac1380,&DAT_14786f388);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a896d0 FUN_144a896d0 body=228 status=ok
// SIG undefined FUN_144a896d0(void)

longlong FUN_144a896d0(void)

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
  if (DAT_14cac14a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14786f3e5;
    local_40 = FUN_146379524;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Engine",L"GbxMeshSettings",&DAT_14cac14a0,&DAT_14786f3e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac14a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a897b6 FUN_144a897b6 body=228 status=ok
// SIG undefined FUN_144a897b6(void)

longlong FUN_144a897b6(void)

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
  if (DAT_14caf2978 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147be51cb;
    local_40 = FUN_1463edbe8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/Engine",L"NetworkSubsystem",&DAT_14caf2978,&DAT_147be51ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2978;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8989c FUN_144a8989c body=228 status=ok
// SIG undefined FUN_144a8989c(void)

longlong FUN_144a8989c(void)

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
  if (DAT_14cb22ea0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_147f33011;
    local_40 = FUN_14180ec27;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxAI",L"GpsQueryAsset",&DAT_14cb22ea0,&DAT_147f33010);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb22ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a89982 FUN_144a89982 body=228 status=ok
// SIG undefined FUN_144a89982(void)

longlong FUN_144a89982(void)

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
  if (DAT_14cb252d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f6f07f;
    local_40 = FUN_1464465e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb252d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a89a68 FUN_144a89a68 body=228 status=ok
// SIG undefined FUN_144a89a68(void)

longlong FUN_144a89a68(void)

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
  if (DAT_14cba14f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145885dac;
    local_38 = &LAB_148b9e16b;
    local_40 = FUN_140f505de;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",&DAT_14cba14f0
                  ,&DAT_148b9e16a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba14f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a89b4e FUN_144a89b4e body=228 status=ok
// SIG undefined FUN_144a89b4e(void)

longlong FUN_144a89b4e(void)

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
  if (DAT_14cba7010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a8146a;
    local_38 = &LAB_148bf1a59;
    local_40 = &LAB_145bfc4c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x640;
    FUN_14081cfa3(L"/Script/OakGame",L"OakAudioGlobals",&DAT_14cba7010,&DAT_148bf1a58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba7010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a89c34 FUN_144a89c34 body=124 status=ok
// SIG undefined FUN_144a89c34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_144a89c34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9a020) {
    FUN_144b3d300(&DAT_14ca9a020);
    if (DAT_14ca9a020 == -1) {
      _DAT_14ca9a008 = 0;
      DAT_14ca9a010 = 0;
      _DAT_14ca99ff8 = 0;
      DAT_14ca9a000 = 0;
      _DAT_14ca9a018 = 0;
      atexit(FUN_14322f458);
      _Init_thread_footer(&DAT_14ca9a020);
    }
  }
  return &DAT_14ca99ff8;
}



// FUNCTION 144a89cb0 FUN_144a89cb0 body=126 status=ok
// SIG undefined FUN_144a89cb0(void)

undefined4 * FUN_144a89cb0(longlong *param_1,undefined2 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    *param_2 = 0xffff;
    puVar3 = &DAT_14c9a12e0;
  }
  else {
    *param_2 = *(undefined2 *)(lVar2 + 0x20);
    iVar1 = *(int *)(lVar2 + 0x24);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    puVar3 = (undefined4 *)
             ((ulonglong)(uint)(iVar1 % 0x199) * 0x28 +
             *(longlong *)(DAT_14c9a1378 + (longlong)(iVar1 / 0x199) * 8));
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
  }
  return puVar3;
}



// FUNCTION 144a89d2e FUN_144a89d2e body=330 status=ok
// SIG undefined FUN_144a89d2e(void)

void FUN_144a89d2e(double *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  param_2 = param_2 * 0.017453292;
  param_2 = (float)(longlong)
                   (param_2 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_2 < 0.0) * 4)) * -6.2831855 +
            param_2;
  if (1.5707964 < param_2) {
    fVar1 = 3.1415927;
  }
  else {
    if (-1.5707964 <= param_2) {
      fVar1 = 1.0;
      goto LAB_144a89d9b;
    }
    fVar1 = -3.1415927;
  }
  param_2 = fVar1 - param_2;
  fVar1 = -1.0;
LAB_144a89d9b:
  fVar2 = param_2 * param_2;
  *param_1 = (double)((((((fVar2 * -2.6051615e-07 + 2.4760495e-05) * fVar2 + -0.0013888378) * fVar2
                        + 0.041666638) * fVar2 + -0.5) * fVar2 + 1.0) * fVar1);
  param_1[1] = (double)((((((fVar2 * -2.3889859e-08 + 2.7525562e-06) * fVar2 + -0.00019840874) *
                           fVar2 + 0.008333331) * fVar2 + -0.16666667) * fVar2 + 1.0) * param_2);
  param_1[2] = 0.0;
  return;
}



// FUNCTION 144a89e78 FUN_144a89e78 body=96 status=ok
// SIG undefined FUN_144a89e78(void)

undefined8 FUN_144a89e78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  return DAT_14ca4b320;
}



// FUNCTION 144a89ed8 FUN_144a89ed8 body=58 status=ok
// SIG undefined FUN_144a89ed8(void)

undefined8 * FUN_144a89ed8(undefined8 *param_1,undefined1 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
  }
  return param_1;
}



// FUNCTION 144a89f12 FUN_144a89f12 body=1617 status=ok
// SIG undefined FUN_144a89f12(void)

int * FUN_144a89f12(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_14482b872(param_1,iVar23);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar8 = iVar16 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar19 = param_1 + 2;
    iVar24 = iVar16 + 1;
    iVar21 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar21 = iVar16;
    }
    if (iVar21 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar24;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        iVar8 = iVar16;
        if (iVar16 + 0x20U < 0xa0) {
          iVar24 = 0x80;
        }
        else {
          uVar9 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar9) {
              uVar10 = uVar9;
            }
          }
          else {
            uVar10 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
          }
          uVar17 = (ulonglong)(uVar10 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar17 + 0xf);
              if (uVar10 < 0x1ffd) {
                uVar17 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar15 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar15) {
                    uVar20 = (ulonglong)bVar15;
                  }
                  uVar22 = 0x32 - (ulonglong)bVar15;
                  do {
                    uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0) goto LAB_144a8a2c1;
                    lVar13 = uVar20 + 1 + uVar22;
                    uVar22 = uVar22 - 1;
                  } while (lVar13 != 0x33);
                }
                uVar17 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar17 = (ulonglong)DAT_14c841df8;
                }
                uVar17 = -uVar17 & (uVar18 + uVar17) - 1;
              }
            }
            else {
              uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
              iVar8 = (int)param_1[5];
            }
          }
LAB_144a8a2c1:
          iVar12 = (int)(uVar17 >> 2);
          iVar24 = -0x20;
          if ((int)uVar9 <= iVar12) {
            iVar24 = iVar12 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar24;
        FUN_1446efbd8(plVar19,iVar8);
        iVar24 = (int)param_1[5] + 1;
      }
      iVar8 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar8 = iVar24;
      }
      *(int *)(param_1 + 5) = iVar24;
      if (iVar24 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar19;
        }
        bVar15 = -(char)(iVar24 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar8 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar16 & 0x1f;
    puVar3 = (uint *)((longlong)plVar19 + (longlong)(iVar21 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar13 = (longlong)iVar23;
    iVar16 = *(int *)(*param_1 + 4 + lVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  plVar19 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar19 = (longlong *)param_1[4];
  }
  iVar16 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar16 = iVar23;
  }
  puVar3 = (uint *)((longlong)plVar19 + (longlong)(iVar16 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar23 & 0x1f);
  puVar4 = (ulonglong *)(*param_1 + lVar13 * 0x18);
  uVar18 = *param_3;
  *puVar4 = uVar18;
  uVar17 = param_3[1];
  puVar4[1] = uVar17;
  if (uVar17 == 0) {
    *(undefined4 *)(puVar4 + 2) = 0xffffffff;
  }
  else {
    LOCK();
    *(int *)(uVar17 + 8) = *(int *)(uVar17 + 8) + 1;
    UNLOCK();
    uVar18 = *puVar4;
    plVar19 = (longlong *)puVar4[1];
    *(undefined4 *)(puVar4 + 2) = 0xffffffff;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      LOCK();
      plVar14 = plVar19 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
  uVar9 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  iVar16 = (int)param_1[1];
  iVar8 = *(int *)((longlong)param_1 + 0x34);
  iVar24 = 1;
  if (iVar16 - iVar8 == 1) {
    uVar10 = 1;
  }
  else {
    uVar17 = *puVar4;
    plVar19 = (longlong *)puVar4[1];
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      iVar16 = (int)param_1[1];
      iVar8 = *(int *)((longlong)param_1 + 0x34);
    }
    if (iVar16 != iVar8) {
      plVar14 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar14 = (longlong *)param_1[8];
      }
      iVar16 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
      while (iVar16 != -1) {
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
        }
        lVar13 = (longlong)iVar16;
        uVar18 = *(ulonglong *)(*param_1 + lVar13 * 0x18);
        plVar14 = *(longlong **)(*param_1 + 8 + lVar13 * 0x18);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
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
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar19 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        if (uVar18 == uVar17) goto LAB_144a8a0f7;
        iVar16 = *(int *)(*param_1 + 0x10 + lVar13 * 0x18);
      }
    }
    iVar16 = -1;
LAB_144a8a0f7:
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar19 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    if (iVar16 != -1) {
      puVar5 = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x18);
      plVar19 = *(longlong **)(puVar5 + 2);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar19 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      uVar6 = *(undefined4 *)((longlong)puVar4 + 4);
      uVar17 = puVar4[1];
      uVar7 = *(undefined4 *)((longlong)puVar4 + 0xc);
      *puVar5 = (int)*puVar4;
      puVar5[1] = uVar6;
      puVar5[2] = (int)uVar17;
      puVar5[3] = uVar7;
      FUN_1487f4d98(param_1,iVar23);
      goto LAB_144a8a18b;
    }
    uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (3 < uVar10) {
      uVar17 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar24 = 1 << ((byte)lVar13 & 0x1f);
    }
  }
  iVar16 = iVar23;
  if (((int)uVar10 < 1) || (iVar24 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)puVar4 + 0x14) = uVar9;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(undefined4 *)(puVar4 + 2) =
         *(undefined4 *)
          ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar23;
  }
  else {
    *(int *)(param_1 + 9) = iVar24;
    FUN_1414d6c70(param_1);
  }
LAB_144a8a18b:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 144a8a564 FUN_144a8a564 body=112 status=ok
// SIG undefined FUN_144a8a564(void)

void FUN_144a8a564(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + 8 + uVar5) == param_2[1]) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar6 << 4 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145be2aac(param_1,iVar2);
    lVar4 = *param_1;
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 144a8a5d4 FUN_144a8a5d4 body=423 status=ok
// SIG undefined FUN_144a8a5d4(void)

undefined * FUN_144a8a5d4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14ca5cb40) {
    FUN_144b3d300(&DAT_14ca5cb40);
    if (DAT_14ca5cb40 == -1) {
      FUN_1414db4bc(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"Atmosphere";
      local_78 = L"FAtmosphereUniformShaderParameters";
      local_50 = 0xb0;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5cac0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14308fe77);
      _Init_thread_footer(&DAT_14ca5cb40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca5cac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8a77c FUN_144a8a77c body=8 status=ok
// SIG undefined FUN_144a8a77c(void)

undefined8 FUN_144a8a77c(void)

{
  return DAT_14cb8ca10;
}



// FUNCTION 144a8a784 FUN_144a8a784 body=293 status=ok
// SIG undefined FUN_144a8a784(void)

void FUN_144a8a784(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (*(code **)(*plVar1 + 0x58) == FUN_1447a7ed6) {
    puVar2 = (undefined8 *)plVar1[0xb];
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      plVar1[0xb] = (longlong)puVar2;
    }
    if ((char)plVar1[0x10] == '\x01') {
      *(undefined1 *)(plVar1 + 0x10) = 0;
      if ((*(byte *)(plVar1 + 5) & 1) == 0) {
        *(undefined4 *)(puVar2 + 1) = 0;
        if (*(int *)((longlong)puVar2 + 0xc) != 0) {
          FUN_1401255f0(puVar2,0);
        }
      }
      else {
        FUN_1401252ea(&local_30);
        plVar1 = (longlong *)plVar1[0xb];
        if (plVar1 == &local_30) {
          if (local_30 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*plVar1 != 0) {
            FUN_1400020a8();
          }
          *plVar1 = local_30;
          *(undefined4 *)(plVar1 + 1) = local_28;
          *(undefined4 *)((longlong)plVar1 + 0xc) = local_24;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000144a8a88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8a8b6 FUN_144a8a8b6 body=75 status=ok
// SIG undefined FUN_144a8a8b6(void)

int FUN_144a8a8b6(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    uVar2 = *(ushort *)(param_1 + lVar4 * 2);
    bVar1 = *(byte *)(param_2 + lVar4);
    iVar3 = (uint)uVar2 - (uint)bVar1;
    if (iVar3 == 0) {
      if (uVar2 == 0) {
        return 0;
      }
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) {
        return iVar3;
      }
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) {
        return (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
      }
    }
    lVar4 = lVar4 + 1;
  } while( true );
}



// FUNCTION 144a8a902 FUN_144a8a902 body=497 status=ok
// SIG undefined FUN_144a8a902(void)

void FUN_144a8a902(longlong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *_Dst;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)(int)param_2);
  }
  puVar4 = (ulonglong *)param_1[1];
  uVar2 = (uint)puVar4[1];
  if ((int)uVar2 < (int)param_2) {
    iVar9 = param_2 - uVar2;
    bVar1 = *(byte *)(param_1 + 3);
    lVar10 = param_1[2];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
    *(uint *)(puVar4 + 1) = param_2;
    if ((bVar1 & 1) == 0) {
      if (*(int *)((longlong)puVar4 + 0xc) < (int)param_2) {
        FUN_14097bbd2();
      }
    }
    else if (*(int *)((longlong)puVar4 + 0xc) < (int)param_2) {
      FUN_1468c03c2(puVar4,uVar2,(int)lVar10,uVar3);
    }
    if (0 < iVar9) {
      puVar4 = (ulonglong *)param_1[1];
      if ((int)puVar4[1] == 0) {
        _Dst = (void *)0x0;
      }
      else {
        if ((*(byte *)(param_1 + 3) & 1) == 0) {
          uVar7 = *puVar4;
        }
        else {
          uVar7 = *puVar4;
          if ((uVar7 & 1) != 0) {
            uVar7 = (longlong)puVar4 + ((longlong)uVar7 >> 0x18);
          }
        }
        _Dst = (void *)((longlong)(int)param_1[2] * (longlong)(int)uVar2 + uVar7);
      }
      if ((*(byte *)(*param_1 + 0x39) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
      do {
        plVar5 = (longlong *)*param_1;
        if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
          (**(code **)(*plVar5 + 0x160))();
        }
        else {
          memset(_Dst,0,(longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
        }
        _Dst = (void *)((longlong)_Dst + (longlong)(int)param_1[2]);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (param_2 < uVar2) {
    iVar9 = uVar2 - param_2;
    if ((iVar9 != 0 && (int)param_2 <= (int)uVar2) &&
       ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0)) {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        uVar7 = *puVar4;
      }
      else {
        uVar7 = *puVar4;
        if ((uVar7 & 1) != 0) {
          uVar7 = (longlong)puVar4 + ((longlong)uVar7 >> 0x18);
        }
      }
      uVar6 = (ulonglong)(int)param_1[2];
      lVar10 = param_2 * uVar6 + uVar7;
      iVar8 = iVar9;
      do {
        plVar5 = (longlong *)*param_1;
        if ((plVar5[7] & 0x1000000000U) == 0) {
          (**(code **)(*plVar5 + 0x148))(plVar5,lVar10);
          uVar6 = (ulonglong)*(uint *)(param_1 + 2);
        }
        lVar10 = lVar10 + (int)uVar6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_48 = param_1;
    local_40 = param_2;
    local_3c = iVar9;
    FUN_140eff44e(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a8ab0e FUN_144a8ab0e body=21 status=ok
// SIG undefined FUN_144a8ab0e(void)

undefined8 FUN_144a8ab0e(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff03;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x01');
  }
  return 0;
}



// FUNCTION 144a8ab24 FUN_144a8ab24 body=132 status=ok
// SIG undefined FUN_144a8ab24(void)

void FUN_144a8ab24(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 144a8aba8 FUN_144a8aba8 body=471 status=ok
// SIG undefined FUN_144a8aba8(void)

longlong * FUN_144a8aba8(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_140021065();
    plVar4 = (longlong *)FUN_140021018();
    if ((int)plVar4[2] < 0x186) {
      lVar6 = plVar4[1];
    }
    else {
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar8 = 0;
          lVar7 = 0;
        }
        else {
          uVar8 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar7 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar8 * 8);
        }
        *(longlong *)(lVar7 + 8) = lVar6;
        do {
          uVar1 = DAT_14c82b580;
          uVar5 = (DAT_14c82b580 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 >> 0x1a < DAT_14c82b580 >> 0x1a) {
            FUN_14274643a();
          }
          if (uVar2 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)(&DAT_14c833b00 + uVar8 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar6 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar9 = uVar1 != DAT_14c82b580;
          uVar1 = uVar5 | uVar2;
          if (bVar9) {
            uVar1 = DAT_14c82b580;
          }
          DAT_14c82b580 = uVar1;
          UNLOCK();
        } while (bVar9);
      }
      *plVar4 = plVar4[1];
      *(undefined4 *)(plVar4 + 2) = 0;
      lVar6 = 0;
    }
    *param_1 = lVar6;
    plVar4[1] = (longlong)param_1;
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
  }
  return param_1;
}



// FUNCTION 144a8ad80 FUN_144a8ad80 body=192 status=ok
// SIG undefined FUN_144a8ad80(void)

longlong FUN_144a8ad80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) || (lVar4 = (longlong)*(int *)(lVar1 + 0x50), lVar4 == 0)) {
    lVar2 = 0;
  }
  else if (*(char *)(lVar1 + 0x40) == '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x48);
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 0x48);
    if (((*(int *)((longlong)param_1 + 0xc) == 0 && (int)param_1[1] == 0) && (int)param_1[2] == 0)
        && *(int *)((longlong)param_1 + 0x14) == 0) {
      lVar4 = lVar4 * 0x368;
      lVar2 = 0;
      do {
        if ((((*(int *)(lVar3 + 8) == *(int *)(lVar1 + 0x30)) &&
             (*(int *)(lVar3 + 0xc) == *(int *)(lVar1 + 0x34))) &&
            (*(int *)(lVar3 + 0x10) == *(int *)(lVar1 + 0x38))) &&
           (*(int *)(lVar3 + 0x14) == *(int *)(lVar1 + 0x3c))) {
          return lVar3;
        }
        lVar3 = lVar3 + 0x368;
        lVar4 = lVar4 + -0x368;
      } while (lVar4 != 0);
    }
    else {
      lVar4 = lVar4 * 0x368;
      lVar2 = 0;
      do {
        if (((*(int *)(lVar3 + 8) == (int)param_1[1]) &&
            (*(int *)(lVar3 + 0xc) == *(int *)((longlong)param_1 + 0xc))) &&
           ((*(int *)(lVar3 + 0x10) == (int)param_1[2] &&
            (*(int *)(lVar3 + 0x14) == *(int *)((longlong)param_1 + 0x14))))) {
          return lVar3;
        }
        lVar3 = lVar3 + 0x368;
        lVar4 = lVar4 + -0x368;
      } while (lVar4 != 0);
    }
  }
  return lVar2;
}



// FUNCTION 144a8ae40 FUN_144a8ae40 body=228 status=ok
// SIG undefined FUN_144a8ae40(void)

longlong FUN_144a8ae40(void)

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
  if (DAT_14cb20e58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147f14d13;
    local_40 = FUN_1464313b0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20e58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8af26 FUN_144a8af26 body=163 status=ok
// SIG undefined FUN_144a8af26(void)

void FUN_144a8af26(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(int *)((longlong)param_1 + 0x1c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  param_1[4] = 0x100000000;
  param_1[5] = 0x1000100000001;
  *(undefined4 *)(param_1 + 6) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)((longlong)param_2 + 0x32);
  *param_1 = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)((longlong)param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined2 *)((longlong)param_1 + 0x2c) = *(undefined2 *)((longlong)param_2 + 0x2c);
  *(undefined2 *)((longlong)param_1 + 0x2e) = *(undefined2 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  return;
}



// FUNCTION 144a8afca FUN_144a8afca body=23 status=ok
// SIG undefined FUN_144a8afca(void)

undefined8 FUN_144a8afca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x30) == param_1);
  }
  return 0;
}



// FUNCTION 144a8afe2 FUN_144a8afe2 body=8 status=ok
// SIG undefined FUN_144a8afe2(void)

undefined8 FUN_144a8afe2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// FUNCTION 144a8afea FUN_144a8afea body=35 status=ok
// SIG undefined FUN_144a8afea(void)

longlong FUN_144a8afea(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x1a8))) {
    return (longlong)iVar1 * 0x78 + *(longlong *)(param_1 + 0x1a0);
  }
  return 0;
}



// FUNCTION 144a8b00e FUN_144a8b00e body=234 status=ok
// SIG undefined FUN_144a8b00e(void)

int * FUN_144a8b00e(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = 0;
  if (*param_2 == 0) {
    param_1[1] = 0;
    iVar4 = param_2[2];
    param_1[2] = iVar4;
  }
  else {
    FUN_1402a453c(param_1);
    iVar4 = *param_2;
    iVar1 = *param_1;
    lVar2 = (longlong)iVar1 * 0x88 + DAT_14c9a3d60;
    lVar3 = (longlong)iVar4 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar2 + -0x88,lVar3 + -0x88);
    if (iVar4 != iVar1) {
      FUN_1402a4744(lVar2 + -0x18,lVar3 + -0x18);
    }
    param_1[1] = 0;
    iVar4 = param_2[2];
    param_1[2] = iVar4;
    if ((longlong)*param_1 != 0) {
      iVar4 = FUN_14020a770(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88,iVar4,0);
    }
  }
  param_1[1] = iVar4;
  return param_1;
}



// FUNCTION 144a8b0f8 FUN_144a8b0f8 body=423 status=ok
// SIG undefined FUN_144a8b0f8(void)

undefined * FUN_144a8b0f8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14c9e2a38) {
    FUN_144b3d300(&DAT_14c9e2a38);
    if (DAT_14c9e2a38 == -1) {
      FUN_1456e5f94(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"AVSM";
      local_78 = L"FAdaptiveVolumetricShadowMapUniformBufferParameters";
      local_50 = 0x1d0;
      local_58 = 0x1a7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e29b8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cad7fb);
      _Init_thread_footer(&DAT_14c9e2a38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e29b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8b2a0 FUN_144a8b2a0 body=135 status=ok
// SIG undefined FUN_144a8b2a0(void)

undefined8 * FUN_144a8b2a0(undefined8 *param_1,longlong *param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    iVar5 = 1;
    lVar7 = 0;
    do {
      if ((char)iVar5 == '\0') {
        sVar4 = wcslen(param_3);
        FUN_1400020e8(param_1,param_3,sVar4 & 0xffffffff);
      }
      iVar1 = *(int *)(lVar2 + 8 + lVar7);
      iVar5 = 0;
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = iVar5;
      }
      FUN_1400020e8(param_1,*(undefined8 *)(lVar2 + lVar7),iVar6);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar7);
  }
  return param_1;
}



// FUNCTION 144a8b328 FUN_144a8b328 body=75 status=ok
// SIG undefined FUN_144a8b328(void)

uint FUN_144a8b328(undefined8 param_1,uint param_2)

{
  if ((((DAT_14c760ddc < 1) || (DAT_14ca84e23 != '\x01')) || (DAT_14ca84e6a != '\x01')) ||
     ((DAT_14ca84e99 & 1) != 0)) {
    if ((param_2 & 4) != 0) {
      param_2 = param_2 & 0xfffffff9 | 2;
    }
  }
  else if (DAT_14c760ddc == 2 && (param_2 & 2) != 0) {
    param_2 = param_2 & 0xfffffff9 | 4;
  }
  return param_2;
}



// FUNCTION 144a8b374 FUN_144a8b374 body=265 status=ok
// SIG undefined FUN_144a8b374(void)

undefined * FUN_144a8b374(void)

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
              0x110) < DAT_14c9c9b80) {
    FUN_144b3d300(&DAT_14c9c9b80);
    if (DAT_14c9c9b80 == -1) {
      FUN_1414f42c0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGlobalDistanceFieldParameters2";
      local_38 = 0;
      local_50 = 0x220;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c9b00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76e2);
      _Init_thread_footer(&DAT_14c9c9b80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c9b00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8b47e FUN_144a8b47e body=262 status=ok
// SIG undefined FUN_144a8b47e(void)

undefined * FUN_144a8b47e(void)

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
              0x110) < DAT_14ca008c0) {
    FUN_144b3d300(&DAT_14ca008c0);
    if (DAT_14ca008c0 == -1) {
      FUN_145c37638(local_20);
      local_30 = 0;
      local_40 = 0;
      local_50 = 0x30;
      local_58 = 0x30;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca00840,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142da795b);
      _Init_thread_footer(&DAT_14ca008c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca00840;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8b586 FUN_144a8b586 body=120 status=ok
// SIG undefined FUN_144a8b586(void)

undefined2 * FUN_144a8b586(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868710) {
    FUN_144b3d300(&DAT_14c868710);
    if (DAT_14c868710 == -1) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
  }
  return DAT_14c868708;
}



// FUNCTION 144a8b5fe FUN_144a8b5fe body=335 status=ok
// SIG undefined FUN_144a8b5fe(void)

int FUN_144a8b5fe(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    iVar7 = 0;
  }
  else {
    uVar9 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar13 = (int *)((longlong)plVar8 +
                     ((longlong)
                      (int)(((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                            (int)((ulonglong)param_2 >> 0x20) + (uVar9 << 0x13 | uVar9) +
                           (uint)(ushort)((ushort)param_2 >> 4)) & (longlong)(int)param_1[9] - 1U) *
                     4);
    iVar7 = 0;
    do {
      iVar3 = *piVar13;
      if ((longlong)iVar3 == -1) {
        return iVar7;
      }
      lVar4 = *param_1;
      lVar12 = (longlong)iVar3 * 0x10;
      lVar1 = lVar4 + lVar12;
      lVar5 = *(longlong *)(lVar4 + lVar12);
      if (lVar5 == param_2) {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = param_1 + 7;
        }
        iVar11 = *(int *)((longlong)plVar8 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        if (iVar11 == iVar3) {
          piVar14 = (int *)((longlong)plVar8 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        }
        else {
          do {
            piVar14 = (int *)((longlong)iVar11 * 0x10 + lVar4 + 8);
            iVar11 = *piVar14;
          } while (iVar11 != iVar3);
        }
        *piVar14 = *(int *)(lVar1 + 8);
        lVar1 = *param_1;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x10) = iVar3;
        }
        *(undefined4 *)(lVar1 + lVar12) = 0xffffffff;
        uVar10 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar10 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar1 + lVar12 + 4) = uVar10;
        *(int *)(param_1 + 6) = iVar3;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        plVar8 = param_1 + 2;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar8 = (longlong *)param_1[4];
        }
        iVar11 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar11 = iVar3;
        }
        bVar6 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        iVar7 = iVar7 + 1;
      }
      else {
        piVar13 = (int *)(lVar1 + 8);
      }
    } while (lVar5 != param_2);
  }
  return iVar7;
}



// FUNCTION 144a8b74e FUN_144a8b74e body=55 status=ok
// SIG undefined FUN_144a8b74e(void)

void FUN_144a8b74e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0x3f80000000000000;
  lVar2 = 0x28c;
  do {
    puVar1 = (undefined8 *)(param_1 + -0xc + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x31c);
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0x3f80000000000000;
  return;
}



// FUNCTION 144a8b786 FUN_144a8b786 body=124 status=ok
// SIG undefined FUN_144a8b786(void)

void FUN_144a8b786(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149e37560;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 144a8b802 FUN_144a8b802 body=124 status=ok
// SIG undefined FUN_144a8b802(void)

void FUN_144a8b802(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149e37220;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 144a8b87e FUN_144a8b87e body=159 status=ok
// SIG undefined FUN_144a8b87e(void)

longlong * FUN_144a8b87e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar3 = *param_1;
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    lVar5 = 0;
    do {
      iVar1 = iswspace(*(wint_t *)(lVar3 + lVar5));
      uVar2 = (iVar1 != 0) + uVar2;
      if (iVar1 == 0) break;
      bVar7 = (longlong)(int)lVar6 * 2 + -2 != lVar5;
      lVar5 = lVar5 + 2;
    } while (bVar7);
    lVar3 = (ulonglong)uVar2 * 2 + *param_1;
    uVar4 = 0;
    iVar1 = (int)param_1[1] - uVar2;
    if (iVar1 != 0) {
      lVar6 = (longlong)iVar1;
      do {
        iVar1 = iswspace(*(wint_t *)(lVar3 + -2 + lVar6 * 2));
        if (iVar1 == 0) {
          uVar4 = (undefined4)lVar6;
          break;
        }
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  *param_2 = lVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  return param_2;
}



// FUNCTION 144a8b91e FUN_144a8b91e body=1564 status=ok
// SIG undefined FUN_144a8b91e(void)

void FUN_144a8b91e(longlong *param_1,int *param_2,uint param_3,uint *param_4,undefined4 *param_5,
                  undefined1 *param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 *local_a8;
  int *local_a0;
  uint *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined4 local_80 [2];
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar12 = *(uint *)(param_1 + 0xe);
  uVar7 = uVar12 & param_3;
  local_b0 = param_1 + 0xb;
  plVar16 = (longlong *)param_1[0xc];
  plVar9 = plVar16;
  if (plVar16 == (longlong *)0x0) {
    plVar9 = local_b0;
  }
  plVar25 = param_1 + 8;
  plVar11 = (longlong *)(ulonglong)*param_4;
  puVar17 = (undefined1 *)(ulonglong)param_4[1];
  uVar18 = param_4[2];
  do {
    lVar21 = (longlong)(int)uVar7;
    local_a0 = param_2;
    if (*(uint *)((longlong)plVar9 + lVar21 * 4) == param_3) {
      plVar14 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar14 = plVar25;
      }
      lVar15 = (longlong)*(int *)((longlong)plVar14 + lVar21 * 4) * 0x20;
      if ((((*param_4 == *(uint *)(*param_1 + lVar15)) &&
           (lVar15 = *param_1 + lVar15, param_4[1] == *(uint *)(lVar15 + 4))) &&
          (uVar18 == *(uint *)(lVar15 + 8))) && (param_4[3] == *(uint *)(lVar15 + 0xc))) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar25 = (longlong *)param_1[9];
        }
        iVar8 = *(int *)((longlong)plVar25 + lVar21 * 4);
        goto LAB_144a8bb15;
      }
    }
    uVar7 = uVar7 + 1 & uVar12;
    if (uVar7 == (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar12)) {
      iVar8 = (int)param_1[7];
      if ((ulonglong)(uVar12 * 3) <= (ulonglong)(((longlong)(int)param_1[1] - (longlong)iVar8) * 5))
      {
        local_a8 = (undefined8 *)param_1[9];
        if (local_a8 == (undefined8 *)0x0) {
          local_68 = CONCAT44(local_68._4_4_,(int)*plVar25);
        }
        param_1[9] = 0;
        local_58 = (undefined4)param_1[10];
        uStack_54 = *(undefined4 *)((longlong)param_1 + 0x54);
        param_1[10] = 0x100000000;
        if (plVar16 == (longlong *)0x0) {
          local_80[0] = (undefined4)*local_b0;
        }
        param_1[0xc] = 0;
        local_70 = (undefined4)param_1[0xd];
        local_6c = *(undefined4 *)((longlong)param_1 + 0x6c);
        param_1[0xd] = 0x100000000;
        iVar8 = uVar12 * 2 + 1;
        *(int *)(param_1 + 0xe) = iVar8;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        iVar13 = uVar12 * 2 + 2;
        local_78 = plVar16;
        uStack_60 = local_a8;
        if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar13);
        }
        if (uVar12 * 2 < 0x7ffffffe) {
          FUN_14475fe8c(plVar25);
          iVar8 = (int)param_1[0xe];
          iVar13 = (int)param_1[10];
          iVar10 = *(int *)((longlong)param_1 + 0x54);
        }
        else {
          iVar13 = 0;
          iVar10 = 1;
        }
        uVar7 = iVar8 + 1;
        *(int *)(param_1 + 10) = iVar8 + iVar13 + 1;
        if ((uint)(iVar10 - iVar13) < uVar7) {
          FUN_146f3c7b6(plVar25);
          uVar7 = (int)param_1[0xe] + 1;
        }
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar7);
        }
        iVar8 = *(int *)((longlong)param_1 + 0x6c);
        if (iVar8 < (int)uVar7) {
          FUN_14476002c(local_b0,uVar7);
          iVar8 = *(int *)((longlong)param_1 + 0x6c);
          uVar7 = (int)param_1[0xe] + 1;
        }
        iVar13 = (int)param_1[0xd];
        *(uint *)(param_1 + 0xd) = iVar13 + uVar7;
        if ((uint)(iVar8 - iVar13) < uVar7) {
          FUN_147138312(local_b0,iVar13);
        }
        plVar9 = (longlong *)param_1[0xc];
        if ((longlong *)param_1[0xc] == (longlong *)0x0) {
          plVar9 = local_b0;
        }
        FUN_14471858a((undefined4 *)((longlong)plVar9 + (longlong)iVar13 * 4));
        local_88 = (longlong *)local_80;
        if (plVar16 != (longlong *)0x0) {
          local_88 = plVar16;
        }
        local_90 = &local_68;
        if (local_a8 != (undefined8 *)0x0) {
          local_90 = local_a8;
        }
        iVar8 = 0;
        do {
          uVar7 = *(uint *)((longlong)local_88 + (longlong)iVar8 * 4);
          if (!SBORROW4(0,uVar7)) {
            local_b4 = *(undefined4 *)((longlong)local_90 + (longlong)iVar8 * 4);
            uVar18 = *(uint *)(param_1 + 0xe);
            uVar20 = uVar18 & uVar7;
            plVar9 = (longlong *)param_1[0xc];
            plVar11 = plVar9;
            if (plVar9 == (longlong *)0x0) {
              plVar11 = local_b0;
            }
            lVar21 = (longlong)(int)uVar20;
            uVar19 = *(uint *)((longlong)plVar11 + lVar21 * 4);
            local_b8 = uVar7;
            if (!SBORROW4(0,uVar19)) {
              local_98 = (uint *)((longlong)plVar11 + lVar21 * 4);
              uVar22 = uVar20 - uVar19 & uVar18;
              uVar7 = 0;
              do {
                if (uVar22 < uVar7) {
                  if (*(uint *)((longlong)param_1 + 0x74) < uVar7) {
                    *(uint *)((longlong)param_1 + 0x74) = uVar7;
                    uVar19 = *local_98;
                  }
                  plVar9 = (longlong *)param_1[9];
                  if ((longlong *)param_1[9] == (longlong *)0x0) {
                    plVar9 = plVar25;
                  }
                  uVar3 = *(undefined4 *)((longlong)plVar9 + lVar21 * 4);
                  *(undefined4 *)((longlong)plVar9 + lVar21 * 4) = local_b4;
                  plVar9 = (longlong *)param_1[0xc];
                  if ((longlong *)param_1[0xc] == (longlong *)0x0) {
                    plVar9 = local_b0;
                  }
                  *(uint *)((longlong)plVar9 + lVar21 * 4) = local_b8;
                  uVar18 = *(uint *)(param_1 + 0xe);
                  plVar9 = (longlong *)param_1[0xc];
                  uVar7 = uVar22;
                  local_b8 = uVar19;
                  local_b4 = uVar3;
                }
                uVar7 = uVar7 + 1;
                uVar20 = uVar20 + 1 & uVar18;
                plVar11 = plVar9;
                if (plVar9 == (longlong *)0x0) {
                  plVar11 = local_b0;
                }
                lVar21 = (longlong)(int)uVar20;
                local_98 = (uint *)((longlong)plVar11 + lVar21 * 4);
                uVar19 = *local_98;
                uVar22 = uVar20 - uVar19 & uVar18;
              } while (!SBORROW4(0,uVar19));
              if (*(uint *)((longlong)param_1 + 0x74) < uVar7) {
                *(uint *)((longlong)param_1 + 0x74) = uVar7;
              }
            }
            plVar9 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar9 = plVar25;
            }
            *(undefined4 *)((longlong)plVar9 + lVar21 * 4) = local_b4;
            plVar9 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar9 = local_b0;
            }
            *(uint *)((longlong)plVar9 + lVar21 * 4) = local_b8;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != uVar12 + 1 + (uint)(uVar12 == 0xffffffff));
        if (plVar16 != (longlong *)0x0) {
          FUN_1400020a8(plVar16);
        }
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8(local_a8);
        }
        iVar8 = (int)param_1[7];
      }
      plVar16 = local_b0;
      if (iVar8 < 1) {
        iVar8 = (int)param_1[1];
        local_68 = *(undefined8 *)param_4;
        uStack_60 = *(undefined8 **)(param_4 + 2);
        local_58 = *param_5;
        uStack_54 = param_5[1];
        uStack_50 = param_5[2];
        uStack_4c = param_5[3];
        *(uint *)(param_1 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
          FUN_14150ed7c(param_1,iVar8);
        }
        lVar21 = *param_1;
        puVar2 = (undefined4 *)(lVar21 + 0x10 + (longlong)iVar8 * 0x20);
        *puVar2 = local_58;
        puVar2[1] = uStack_54;
        puVar2[2] = uStack_50;
        puVar2[3] = uStack_4c;
        puVar2 = (undefined4 *)(lVar21 + (longlong)iVar8 * 0x20);
        *puVar2 = (undefined4)local_68;
        puVar2[1] = local_68._4_4_;
        puVar2[2] = (undefined4)uStack_60;
        puVar2[3] = uStack_60._4_4_;
        iVar13 = (int)param_1[3];
        *(uint *)(param_1 + 3) = iVar13 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1c) < iVar13 + 1U) {
          FUN_1447602e0(param_1 + 2,iVar13);
        }
        puVar23 = (uint *)((longlong)iVar13 * 4 + param_1[2]);
      }
      else {
        iVar8 = FUN_14020b4c6(param_1 + 4);
        lVar21 = *param_1;
        lVar15 = (longlong)iVar8 * 0x20;
        uVar6 = *(undefined8 *)(param_4 + 2);
        puVar1 = (undefined8 *)(lVar21 + lVar15);
        *puVar1 = *(undefined8 *)param_4;
        puVar1[1] = uVar6;
        uVar3 = param_5[1];
        uVar4 = param_5[2];
        uVar5 = param_5[3];
        puVar2 = (undefined4 *)(lVar21 + 0x10 + lVar15);
        *puVar2 = *param_5;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        puVar23 = (uint *)((longlong)iVar8 * 4 + param_1[2]);
      }
      *puVar23 = param_3;
      uVar12 = *(uint *)(param_1 + 0xe);
      uVar7 = uVar12 & param_3;
      uVar24 = (ulonglong)uVar7;
      plVar9 = (longlong *)param_1[0xc];
      plVar11 = plVar9;
      if (plVar9 == (longlong *)0x0) {
        plVar11 = plVar16;
      }
      uVar20 = *(uint *)((longlong)plVar11 + uVar24 * 4);
      uVar18 = -uVar20;
      iVar13 = iVar8;
      if (!SBORROW4(0,uVar20)) {
        puVar23 = (uint *)((longlong)plVar11 + uVar24 * 4);
        uVar22 = uVar7 - uVar20 & uVar12;
        uVar19 = 0;
        uVar18 = uVar7;
        do {
          if (uVar22 < uVar19) {
            if (*(uint *)((longlong)param_1 + 0x74) < uVar19) {
              *(uint *)((longlong)param_1 + 0x74) = uVar19;
              uVar20 = *puVar23;
            }
            plVar9 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar9 = plVar25;
            }
            iVar10 = *(int *)((longlong)plVar9 + uVar24 * 4);
            *(int *)((longlong)plVar9 + uVar24 * 4) = iVar13;
            plVar9 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar9 = plVar16;
            }
            *(uint *)((longlong)plVar9 + uVar24 * 4) = param_3;
            uVar12 = *(uint *)(param_1 + 0xe);
            plVar9 = (longlong *)param_1[0xc];
            param_3 = uVar20;
            uVar19 = uVar22;
            iVar13 = iVar10;
          }
          uVar19 = uVar19 + 1;
          uVar18 = uVar18 + 1 & uVar12;
          plVar11 = plVar9;
          if (plVar9 == (longlong *)0x0) {
            plVar11 = plVar16;
          }
          uVar24 = (ulonglong)(int)uVar18;
          puVar23 = (uint *)((longlong)plVar11 + uVar24 * 4);
          uVar20 = *puVar23;
          uVar22 = uVar18 - uVar20 & uVar12;
          plVar16 = local_b0;
        } while (!SBORROW4(0,uVar20));
        if (*(uint *)((longlong)param_1 + 0x74) < uVar19) {
          *(uint *)((longlong)param_1 + 0x74) = uVar19;
        }
      }
      plVar11 = (longlong *)param_1[9];
      if (plVar11 != (longlong *)0x0) {
        plVar25 = plVar11;
      }
      *(int *)((longlong)plVar25 + uVar24 * 4) = iVar13;
      if ((longlong *)param_1[0xc] != (longlong *)0x0) {
        plVar16 = (longlong *)param_1[0xc];
      }
      *(uint *)((longlong)plVar16 + uVar24 * 4) = param_3;
      *param_6 = 0;
      puVar17 = param_6;
LAB_144a8bb15:
      *local_a0 = iVar8;
      if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8,plVar11,puVar17,uVar18);
      }
      return;
    }
  } while( true );
}



// FUNCTION 144a8bf78 FUN_144a8bf78 body=292 status=ok
// SIG undefined FUN_144a8bf78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8bf78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16168) {
    FUN_144b3d300(&DAT_14ca16168);
    if (DAT_14ca16168 == -1) {
      FUN_145c7735c();
      FUN_145c77460();
      FUN_140db5666(&DAT_14ca160c0,1,&DAT_14ca16058,L"FMicropolyRasterizeCS",
                    L"/Engine/Private/Nanite/NaniteRasterizer.usf",L"MicropolyRasterize",5,0x800,
                    FUN_1472540ec,FUN_14725408c,FUN_14482e810,&LAB_147254088,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,&DAT_14ca184e0);
      _DAT_14ca160c0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a651);
      _Init_thread_footer(&DAT_14ca16168);
    }
  }
  return &DAT_14ca160c0;
}



// FUNCTION 144a8c09c FUN_144a8c09c body=423 status=ok
// SIG undefined FUN_144a8c09c(void)

undefined * FUN_144a8c09c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14ca5cbd8) {
    FUN_144b3d300(&DAT_14ca5cbd8);
    if (DAT_14ca5cbd8 == -1) {
      FUN_14150fc8e(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"SkyAtmosphere";
      local_78 = L"FSkyAtmosphereInternalCommonParameters";
      local_50 = 0xa0;
      local_58 = 0xe8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5cb58,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14308fe83);
      _Init_thread_footer(&DAT_14ca5cbd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca5cb58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8c244 FUN_144a8c244 body=281 status=ok
// SIG undefined FUN_144a8c244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8c244(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e6b0) {
    FUN_144b3d300(&DAT_14cb8e6b0);
    if (DAT_14cb8e6b0 == -1) {
      FUN_145c7a192();
      FUN_140db5666(&DAT_14cb8e608,0,&DAT_14cb8e5a0,L"FRenoirStandardVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf",L"StandardVS",0,1,
                    FUN_1489c05a8,FUN_1489c054a,&LAB_1489c0546,&LAB_1489c0542,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb8e608 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78432);
      _Init_thread_footer(&DAT_14cb8e6b0);
    }
  }
  return &DAT_14cb8e608;
}



// FUNCTION 144a8c35e FUN_144a8c35e body=1 status=ok
// SIG undefined FUN_144a8c35e(void)

void FUN_144a8c35e(void)

{
  return;
}



// FUNCTION 144a8c360 FUN_144a8c360 body=124 status=ok
// SIG undefined FUN_144a8c360(void)

void FUN_144a8c360(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1446f48e2(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14479f406(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 144a8c3de FUN_144a8c3de body=115 status=ok
// SIG undefined FUN_144a8c3de(void)

void FUN_144a8c3de(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144a8c452 FUN_144a8c452 body=800 status=ok
// SIG undefined FUN_144a8c452(void)

int * FUN_144a8c452(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *_Src;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_1406a7630(param_1,iVar18);
    }
    iVar4 = (int)param_1[5];
    if (iVar4 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar3 = iVar4 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar7 = iVar4 + 1;
    iVar12 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar12 = iVar4;
    }
    if (iVar12 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar4) {
        if (iVar4 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar3 = iVar4;
        }
        else {
          uVar17 = iVar4 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar17) {
              uVar15 = uVar17;
            }
          }
          else {
            uVar15 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar15 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar7 = -0x20;
          if ((int)uVar17 <= iVar3) {
            iVar7 = iVar3 << 5;
          }
          iVar3 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar10,iVar3);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar3 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar3 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar10;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar9 = (longlong)iVar18;
    iVar4 = *(int *)(*param_1 + 4 + lVar9 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
    }
  }
  iVar4 = 1;
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar3 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar3 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  lVar2 = *param_1;
  lVar9 = lVar9 * 0x68;
  _Src = (undefined8 *)(lVar2 + lVar9);
  puVar13 = _Src;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *param_3;
    param_3 = param_3 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(lVar2 + 0x60 + lVar9) = 0xffffffff;
  uVar17 = *(uint *)(lVar2 + 0x50 + lVar9);
  uVar15 = uVar17 >> 0x14 ^ *(uint *)(lVar2 + lVar9);
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
    if (iVar3 != -1) {
      lVar8 = *param_1;
      do {
        lVar14 = (longlong)iVar3 * 0x68;
        if (CONCAT44(*(undefined4 *)(lVar8 + 0x50 + lVar14),*(undefined4 *)(lVar8 + lVar14)) ==
            CONCAT44(uVar17,*(uint *)(lVar2 + lVar9))) {
          memmove((void *)(lVar8 + lVar14),_Src,0x60);
          FUN_14031d1ae(param_1,iVar18,1);
          goto LAB_144a8c5df;
        }
        iVar3 = *(int *)(lVar8 + lVar14 + 0x60);
      } while (iVar3 != -1);
    }
  }
  if (3 < uVar16) {
    uVar5 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar9 & 0x1f);
  }
  iVar3 = iVar18;
  if (((int)uVar16 < 1) || (iVar4 <= (int)param_1[9])) {
    uVar15 = (int)param_1[9] - 1U & uVar15;
    *(uint *)((longlong)_Src + 100) = uVar15;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xc) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar4;
    FUN_14151a414(param_1);
  }
LAB_144a8c5df:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 144a8c772 FUN_144a8c772 body=757 status=ok
// SIG undefined FUN_144a8c772(void)

longlong FUN_144a8c772(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_1 + 2);
  if (plVar2 != (longlong *)0x0) {
    pcVar5 = *(code **)(*plVar2 + 0x180);
    if (pcVar5 == (code *)&LAB_144a38074) {
      plVar2 = (longlong *)plVar2[0xf];
      if (plVar2 == (longlong *)0x0) goto LAB_144a8c8dd;
      pcVar5 = *(code **)(*plVar2 + 0x180);
      if (pcVar5 != (code *)&LAB_1448220fc) goto LAB_144a8c98c;
      lVar4 = plVar2[0xf];
    }
    else {
LAB_144a8c98c:
      lVar4 = (*pcVar5)();
    }
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x1f0), lVar4 != 0)) {
      if (DAT_14cb92088 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = &LAB_1417ad04a;
        local_58 = &LAB_14107a1fc;
        local_68 = &LAB_1489f8be7;
        local_70 = FUN_14656bf51;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x38;
        FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,
                      &DAT_1489f8be6);
      }
      lVar7 = DAT_14cb92088;
      if ((DAT_14cb92088 == 0) || (DAT_14c950c29 == 0)) {
        if (DAT_14cb92088 != 0) goto LAB_144a8c837;
LAB_144a8ca61:
        lVar6 = 0;
      }
      else {
        FUN_1456cec3c(DAT_14cb92088);
        if (DAT_14cb92088 == 0) {
          local_60 = &local_40;
          local_40 = FUN_1449e2820;
          local_50 = &LAB_1417ad04a;
          local_58 = &LAB_14107a1fc;
          local_68 = &LAB_1489f8be7;
          local_70 = FUN_14656bf51;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10000000;
          local_90 = 8;
          local_98 = 0x38;
          FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,
                        &DAT_1489f8be6);
          if (DAT_14cb92088 == 0) goto LAB_144a8ca61;
        }
LAB_144a8c837:
        if (*(int *)(lVar7 + 0x38) < *(int *)(DAT_14cb92088 + 0x38)) goto LAB_144a8ca61;
        lVar6 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cb92088 + 0x38) * 8) ==
            DAT_14cb92088 + 0x30) {
          lVar6 = lVar7;
        }
      }
      lVar4 = FUN_1448a6f9c(lVar4 + 0x100,lVar6);
      if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) &&
         (iVar1 = *(int *)(lVar4 + 0x40), (longlong)iVar1 != 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x38);
        lVar7 = 0;
        do {
          lVar6 = *(longlong *)(lVar4 + lVar7);
          if (*(int *)(lVar6 + 0xb0) == *param_1) {
            lVar3 = *(longlong *)(param_1 + 2);
            if ((lVar3 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar3);
            }
            if (*(longlong *)(lVar6 + 0xb8) == lVar3) break;
          }
          lVar7 = lVar7 + 8;
          lVar6 = 0;
        } while ((longlong)iVar1 * 8 != lVar7);
        goto LAB_144a8c8af;
      }
    }
  }
LAB_144a8c8dd:
  lVar6 = 0;
LAB_144a8c8af:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 144a8ca68 FUN_144a8ca68 body=20 status=ok
// SIG undefined FUN_144a8ca68(void)

undefined8 FUN_144a8ca68(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x2b8);
  }
  return 0;
}



// FUNCTION 144a8ca7c FUN_144a8ca7c body=434 status=ok
// SIG undefined FUN_144a8ca7c(void)

undefined * FUN_144a8ca7c(void)

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
              0x110) < DAT_14c9aca48) {
    FUN_144b3d300(&DAT_14c9aca48);
    if (DAT_14c9aca48 == -1) {
      FUN_1415205a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"TranslucentBasePass";
      local_78 = L"FTranslucentBasePassUniformParameters";
      local_38 = 0;
      local_50 = 0x1010;
      local_58 = 0x73;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ac9c8,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b7c22f);
      _Init_thread_footer(&DAT_14c9aca48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ac9c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8cc30 FUN_144a8cc30 body=174 status=ok
// SIG undefined FUN_144a8cc30(void)

undefined * FUN_144a8cc30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952318) {
    FUN_144b3d300(&DAT_14c952318);
    if (DAT_14c952318 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,&DAT_14c9520b8,
                    FUN_1468e122c);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
  }
  return &DAT_14c9522c8;
}



// FUNCTION 144a8ccde FUN_144a8ccde body=1088 status=ok
// SIG undefined FUN_144a8ccde(void)

longlong FUN_144a8ccde(longlong *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  
  iVar25 = (int)param_1[1];
  iVar16 = *(int *)((longlong)param_1 + 0x34);
  if (iVar25 != iVar16) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar21 = *param_1 + (longlong)iVar10 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          if (lVar21 != 0) goto LAB_144a8cea8;
          break;
        }
        iVar10 = *(int *)(lVar21 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if (iVar16 == 0) {
    *(int *)(param_1 + 1) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar25) {
      FUN_1447711aa(param_1,iVar25);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar10 = iVar16 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar17 = iVar16 + 1;
    iVar24 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar24 = iVar16;
    }
    if (iVar24 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        iVar10 = iVar16;
        if (iVar16 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar19 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar19) {
              uVar20 = uVar19;
            }
          }
          else {
            uVar20 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar14 = (ulonglong)(uVar20 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar14 + 0xf);
              if (uVar20 < 0x1ffd) {
                uVar14 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar15 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar23 = 0x32;
                  if (0x32 < bVar15) {
                    uVar23 = (ulonglong)bVar15;
                  }
                  uVar26 = 0x32 - (ulonglong)bVar15;
                  do {
                    uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0) goto LAB_144a8cffb;
                    lVar21 = uVar23 + 1 + uVar26;
                    uVar26 = uVar26 - 1;
                  } while (lVar21 != 0x33);
                }
                uVar14 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar14 = (ulonglong)DAT_14c841df8;
                }
                uVar14 = -uVar14 & (uVar18 + uVar14) - 1;
              }
            }
            else {
              uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_144a8cffb:
          iVar12 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)uVar19 <= iVar12) {
            iVar17 = iVar12 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar13,iVar10);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar10 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar10 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar13;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar10 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar25;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar16 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar24 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar25 = (int)param_1[6];
    lVar21 = (longlong)iVar25;
    iVar10 = *(int *)(*param_1 + 4 + lVar21 * 0x20);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar16 + -1;
    if (iVar16 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar16 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar16 = iVar25;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar16 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar25 & 0x1f);
  iVar10 = 1;
  lVar5 = *param_1;
  lVar21 = lVar21 * 0x20;
  puVar2 = (undefined4 *)(lVar5 + lVar21);
  iVar16 = *param_3;
  *(int *)(lVar5 + lVar21) = iVar16;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar21);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar21) = 0xffffffff;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar19 != 0) && (uVar19 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar17 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar17 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar17 * 0x20) == iVar16) {
          FUN_146902874(puVar3 + 2);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_146902c72(param_1,iVar25);
          goto LAB_144a8ce88;
        }
        iVar17 = puVar3[6];
      } while (iVar17 != -1);
    }
  }
  if (3 < uVar19) {
    uVar14 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar21 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar19 < 1) || (iVar10 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar2[7] = param_2;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4)
    ;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar25;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_144a8d11e(param_1);
  }
LAB_144a8ce88:
  lVar21 = *param_1 + (longlong)iVar25 * 0x20;
LAB_144a8cea8:
  return lVar21 + 8;
}



// FUNCTION 144a8d11e FUN_144a8d11e body=628 status=ok
// SIG undefined FUN_144a8d11e(void)

void FUN_144a8d11e(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_144a8d190;
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
LAB_144a8d190:
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



// FUNCTION 144a8d392 FUN_144a8d392 body=221 status=ok
// SIG undefined FUN_144a8d392(void)

longlong FUN_144a8d392(void)

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
  if (DAT_14c950d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468b50ee;
    local_40 = FUN_1427f23a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c950d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8d470 FUN_144a8d470 body=281 status=ok
// SIG undefined FUN_144a8d470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8d470(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86628) {
    FUN_144b3d300(&DAT_14ca86628);
    if (DAT_14ca86628 == -1) {
      FUN_145cc90d4();
      FUN_140db5666(&DAT_14ca86580,0,&DAT_14ca86518,L"FClearReplacementCS_Buffer_Uint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416592,
                    FUN_14741653a,&LAB_147416536,&LAB_147416532,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca86580 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e63);
      _Init_thread_footer(&DAT_14ca86628);
    }
  }
  return &DAT_14ca86580;
}



// FUNCTION 144a8d58a FUN_144a8d58a body=427 status=ok
// SIG undefined FUN_144a8d58a(void)

undefined * FUN_144a8d58a(void)

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
              0x110) < DAT_14cb50400) {
    FUN_144b3d300(&DAT_14cb50400);
    if (DAT_14cb50400 == -1) {
      FUN_1461c8faa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"GbxWindParams";
      local_70 = L"GbxWindParams";
      local_78 = L"FGbxWindUniformBuffer";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb50380,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143beeb95);
      _Init_thread_footer(&DAT_14cb50400);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb50380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8d736 FUN_144a8d736 body=182 status=ok
// SIG undefined FUN_144a8d736(void)

longlong FUN_144a8d736(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c760a84 == -1) {
    local_38 = 0x66;
    FUN_140002266(local_28,L"%s %s %d",L"FRDGSystemTextures",
                  L".\\Runtime/Renderer/Private/SystemTextures.cpp");
    DAT_14c760a84 = FUN_145d12cf0(local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
     lVar1 != 0)) {
    lVar1 = lVar1 + 8;
  }
  else {
    lVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8d7ee FUN_144a8d7ee body=287 status=ok
// SIG undefined FUN_144a8d7ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8d7ee(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9700) {
    FUN_144b3d300(&DAT_14c9e9700);
    if (DAT_14c9e9700 == -1) {
      uVar1 = FUN_144a8d90e();
      FUN_145d4bb64();
      FUN_140db5666(&DAT_14c9e9658,0,&DAT_14c9e95f0,L"FDeferredLightVS",
                    L"/Engine/Private/DeferredLightVertexShaders.usf",L"VertexMain",0,2,
                    FUN_1471d2b3e,FUN_1471d2ae4,&LAB_1471d2aa8,&LAB_1471d2aa4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14c9e9658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce867a);
      _Init_thread_footer(&DAT_14c9e9700);
    }
  }
  return &DAT_14c9e9658;
}



// FUNCTION 144a8d90e FUN_144a8d90e body=265 status=ok
// SIG undefined FUN_144a8d90e(void)

undefined * FUN_144a8d90e(void)

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
              0x110) < DAT_14c9eba78) {
    FUN_144b3d300(&DAT_14c9eba78);
    if (DAT_14c9eba78 == -1) {
      FUN_145d4bcae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x133;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9eb9f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf487d);
      _Init_thread_footer(&DAT_14c9eba78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9eb9f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8da18 FUN_144a8da18 body=31 status=ok
// SIG undefined FUN_144a8da18(void)

void FUN_144a8da18(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x24) == 0) {
    return;
  }
  FUN_1446dda88(param_1 + 3,0);
  return;
}



// FUNCTION 144a8da38 FUN_144a8da38 body=258 status=ok
// SIG undefined FUN_144a8da38(void)

void FUN_144a8da38(void)

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
              0x110) < DAT_14c9ea8a8) {
    FUN_144b3d300(&DAT_14c9ea8a8);
    if (DAT_14c9ea8a8 == -1) {
      FUN_141544322(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x270;
      local_58 = 0x38c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea828,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf48ad);
      _Init_thread_footer(&DAT_14c9ea8a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8db3c FUN_144a8db3c body=96 status=ok
// SIG undefined FUN_144a8db3c(void)

void FUN_144a8db3c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x108);
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
  if (*(char *)(param_1 + 200) == '\x01') {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



// FUNCTION 144a8db9c FUN_144a8db9c body=115 status=ok
// SIG undefined FUN_144a8db9c(void)

ulonglong FUN_144a8db9c(ushort *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar3 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
      uVar4 = (uint)(uVar2 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar2 ^ uVar3) & 0xff) * 4);
      uVar2 = (ulonglong)
              (uVar4 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar4 & 0xff ^ uVar3 >> 8 & 0xff) * 4));
      uVar1 = *param_1;
    } while (uVar1 != 0);
  }
  return uVar2;
}



// FUNCTION 144a8dc10 FUN_144a8dc10 body=332 status=ok
// SIG undefined FUN_144a8dc10(void)

int FUN_144a8dc10(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      bVar2 = DAT_14c950c29;
      do {
        lVar1 = *param_3;
        if ((lVar1 != 0 & bVar2) == 1) {
          FUN_1456cec3c(lVar1);
          bVar2 = DAT_14c950c29;
        }
        plVar5 = (longlong *)(lVar4 + (longlong)iVar3 * 0xa0);
        if (((((*plVar5 == lVar1) && ((int)plVar5[2] == (int)param_3[2])) &&
             (*(char *)((longlong)plVar5 + 0x14) == *(char *)((longlong)param_3 + 0x14))) &&
            ((*(char *)((longlong)plVar5 + 0x15) == *(char *)((longlong)param_3 + 0x15) &&
             (plVar5[6] == param_3[6])))) && (plVar5[8] == param_3[8])) {
          fVar6 = *(float *)(plVar5 + 9);
          if (65535.0 <= fVar6) {
            fVar6 = 65535.0;
          }
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          fVar7 = *(float *)(param_3 + 9);
          if (65535.0 <= fVar7) {
            fVar7 = 65535.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          if (((fVar6 == fVar7) && (!NAN(fVar6) && !NAN(fVar7))) &&
             (((int)plVar5[0xc] == (int)param_3[0xc] &&
              ((*(char *)((longlong)plVar5 + 100) == *(char *)((longlong)param_3 + 100) &&
               (*(char *)((longlong)plVar5 + 0x65) == *(char *)((longlong)param_3 + 0x65))))))) {
            if ((*(float *)(plVar5 + 0x10) == *(float *)(param_3 + 0x10)) &&
               (!NAN(*(float *)(plVar5 + 0x10)) && !NAN(*(float *)(param_3 + 0x10)))) {
              return iVar3;
            }
          }
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x98 + (longlong)iVar3 * 0xa0);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 144a8dd5c FUN_144a8dd5c body=69 status=ok
// SIG undefined FUN_144a8dd5c(void)

void FUN_144a8dd5c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14c9abbe8;
  if (DAT_14c9abbe8 == 0) {
    lVar2 = FUN_145a10a92();
    lVar1 = *(longlong *)(lVar2 + 0x110);
    if (*(longlong *)(lVar2 + 0x110) == 0) {
      FUN_140aa6c08(lVar2);
      lVar1 = *(longlong *)(lVar2 + 0x110);
    }
  }
  DAT_14c9abbe8 = lVar1;
  return;
}



// FUNCTION 144a8dda2 FUN_144a8dda2 body=163 status=ok
// SIG undefined FUN_144a8dda2(void)

void FUN_144a8dda2(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_1,1);
    *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xf7;
  }
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 2;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x18);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 2;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xfd;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  return;
}



// FUNCTION 144a8de46 FUN_144a8de46 body=671 status=ok
// SIG undefined FUN_144a8de46(void)

void FUN_144a8de46(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_218 [15];
  undefined8 auStack_209 [2];
  undefined1 auStack_1f9 [9];
  uint auStack_1f0 [2];
  byte local_1e8 [176];
  int local_138;
  byte local_134;
  longlong local_130 [24];
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 local_47;
  longlong local_40;
  undefined1 local_38;
  undefined1 local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)local_218;
  lVar5 = 0x11;
  do {
    *(undefined8 *)((longlong)auStack_209 + lVar5) = 0;
    *(undefined8 *)((longlong)auStack_209 + lVar5 + 8) = 0xffffffff00000000;
    *(undefined2 *)(auStack_1f9 + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xd1);
  local_138 = 0;
  local_134 = 0;
  lVar5 = 0xd9;
  do {
    *(undefined8 *)((longlong)auStack_209 + lVar5) = 0;
    *(undefined8 *)((longlong)auStack_209 + lVar5 + 8) = 0xffffffff00000000;
    *(undefined2 *)(auStack_1f9 + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x199);
  lVar5 = 0;
  local_70 = 0;
  local_40 = 0;
  local_37 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0;
  do {
    if (*(longlong *)(param_2 + lVar5) == 0) break;
    *(longlong *)(auStack_1f9 + lVar5 + 1) = *(longlong *)(param_2 + lVar5);
    bVar1 = *(byte *)(param_2 + 0x15 + lVar5);
    bVar6 = bVar1 >> 2;
    local_1e8[lVar5] = bVar6;
    local_1e8[lVar5 + 1] = bVar1 & 3;
    *(undefined4 *)((longlong)auStack_1f0 + lVar5 + 4) = *(undefined4 *)(param_2 + 0x10 + lVar5);
    *(uint *)((longlong)auStack_1f0 + lVar5) = (uint)*(byte *)(param_2 + 0x14 + lVar5);
    local_138 = local_138 + 1;
    local_134 = local_134 | bVar6 == 2;
    lVar3 = *(longlong *)(param_2 + 8 + lVar5);
    if (lVar3 != 0) {
      local_70 = 1;
      *(undefined8 *)((longlong)local_130 + lVar5) = *(undefined8 *)(auStack_1f9 + lVar5 + 1);
      *(undefined8 *)((longlong)local_130 + lVar5 + 8) =
           *(undefined8 *)((longlong)auStack_1f0 + lVar5);
      *(undefined8 *)((longlong)local_130 + lVar5 + 0x10) = *(undefined8 *)(local_1e8 + lVar5);
      *(longlong *)((longlong)local_130 + lVar5) = lVar3;
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xc0);
  iVar4 = local_138;
  bVar1 = *(byte *)(param_2 + 0xd0);
  uStack_60._4_4_ = *(undefined4 *)(param_2 + 0xd4);
  local_68 = *(longlong *)(param_2 + 0xc0);
  uStack_60._0_4_ = CONCAT13(bVar1,CONCAT12(bVar1 >> 2,CONCAT11(bVar1 >> 4,bVar1 >> 6))) & 0x30303ff
  ;
  local_48 = bVar1 >> 6 == 2;
  local_47 = (bVar1 >> 2 & 3) == 2;
  lVar5 = *(longlong *)(param_2 + 200);
  if ((lVar5 != 0) && (lVar5 != local_68)) {
    uStack_50 = (uint)uStack_60;
    local_58 = lVar5;
    uStack_4c = uStack_60._4_4_;
  }
  lVar5 = *(longlong *)(param_2 + 0xe8);
  local_38 = *(undefined1 *)(param_2 + 0xf0);
  uVar2 = *(undefined1 *)(param_2 + 0xf9);
  local_40 = lVar5;
  local_37 = uVar2;
  if (0 < (longlong)local_138) {
    memcpy((void *)(param_1 + 0xa8),auStack_1f9 + 1,(longlong)local_138 * 0x18);
  }
  *(int *)(param_1 + 0xa0) = iVar4;
  *(undefined4 *)(param_1 + 0x168) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x16c) = local_68._4_4_;
  *(uint *)(param_1 + 0x170) = (uint)uStack_60;
  *(undefined4 *)(param_1 + 0x174) = uStack_60._4_4_;
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xfe | lVar5 != 0;
  *(undefined1 *)(param_1 + 0x17a) = uVar2;
  if ((local_30 ^ (ulonglong)local_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8e0e6 FUN_144a8e0e6 body=189 status=ok
// SIG undefined FUN_144a8e0e6(void)

undefined8 FUN_144a8e0e6(char *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_1;
  if (0x18 < *(ushort *)(param_1 + 0x18)) {
    pcVar3 = *(char **)param_1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(&DAT_14c9a8620 + (uint)(byte)param_1[0x20] * 0x120);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE != FUN_144a12576) {
                    /* WARNING: Jumptable at 0x000144a8e14b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(pcVar3);
      return uVar1;
    }
    if (DAT_14c9a4dd0 == 0) {
      uVar1 = FUN_140ba080c();
      DAT_14c9a4dd0 = FUN_140002ddd(FUN_14173b99c,uVar1,L"GbxBlackboardEntryRef");
    }
    uVar1 = FUN_14470ec92(DAT_14c9a4dd0,pcVar3,&DAT_14c9a71e0,0);
    return uVar1;
  }
  pcVar2 = pcVar3 + *(int *)((longlong)&DAT_14c9a8510 +
                            (ulonglong)((uint)(byte)param_1[0x20] * 0x120));
  do {
    pcVar4 = pcVar3;
    if (pcVar2 <= pcVar4) break;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar4 == '\0');
  return CONCAT71((int7)((ulonglong)pcVar2 >> 8),pcVar2 <= pcVar4);
}



// FUNCTION 144a8e1a3 FUN_144a8e1a3 body=248 status=ok
// SIG undefined FUN_144a8e1a3(void)

undefined8 FUN_144a8e1a3(void)

{
  char cVar1;
  undefined8 uVar2;
  
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
      return 0;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      return 0;
    }
LAB_144a8e1de:
    if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
      cVar1 = FUN_1406917e6();
      if (cVar1 == '\0') {
        return 0;
      }
      if (DAT_14c76194c == 0) {
        return 0;
      }
    }
    else if (DAT_14c76194c == 0) goto LAB_144a8e218;
    uVar2 = 1;
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_144a8e1de;
LAB_144a8e218:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 144a8e29b FUN_144a8e29b body=483 status=ok
// SIG undefined FUN_144a8e29b(void)

longlong FUN_144a8e29b(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = param_1[10];
  if ((param_3 & 4) != 0) {
    lVar2 = FUN_144a797b2();
    if (*(int *)(lVar2 + 0x38) <= *(int *)(param_1[2] + 0x38)) {
      bVar5 = *(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
              == lVar2 + 0x30;
      goto LAB_144a8e2d3;
    }
  }
  bVar5 = false;
LAB_144a8e2d3:
  lVar2 = -1;
  do {
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) &&
         (((param_3 & 2) != 0 || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0)))) {
LAB_144a8e301:
        if (*(longlong *)(lVar4 + 0x20) == param_2) {
          return lVar4;
        }
        plVar3 = (longlong *)(lVar4 + 0x18);
        do {
          lVar4 = *plVar3;
          lVar2 = (longlong)(int)lVar2;
          while( true ) {
            for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
              if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) &&
                 (((param_3 & 2) != 0 || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
              goto LAB_144a8e301;
            }
            if ((!bVar5) || (lVar2 = lVar2 + 1, (int)param_1[0x3c] <= lVar2)) break;
            lVar1 = *(longlong *)(param_1[0x3b] + lVar2 * 0x10);
            lVar4 = 0;
            if (lVar1 != 0) {
              lVar4 = *(longlong *)(lVar1 + 0x50);
            }
          }
          if ((param_3 & 1) == 0) {
            return 0;
          }
          if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
            param_1 = (longlong *)param_1[8];
          }
          else {
            param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
          }
          plVar3 = param_1 + 10;
          lVar2 = -1;
          if (param_1 == (longlong *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
    if ((!bVar5) || (lVar2 = lVar2 + 1, (int)param_1[0x3c] <= lVar2)) break;
    lVar1 = *(longlong *)(param_1[0x3b] + lVar2 * 0x10);
    lVar4 = 0;
    if (lVar1 != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x50);
    }
  } while( true );
  if ((param_3 & 1) == 0) {
    return 0;
  }
  if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
    param_1 = (longlong *)param_1[8];
  }
  else {
    param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
  }
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = param_1[10];
  goto LAB_144a8e2d3;
}



// FUNCTION 144a8e47e FUN_144a8e47e body=544 status=ok
// SIG undefined FUN_144a8e47e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a8e47e(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  iVar5 = *(int *)(lVar11 + 0x10);
  if (*(int *)(lVar11 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar5 = *(int *)(lVar11 + 0x10);
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(lVar11 + 0x10) = iVar8;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar5 = iVar8;
    }
  }
  iVar8 = *(int *)(param_1 + 0xc);
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c963f30);
  if (uVar3 == 0xffffffff) {
    FUN_14690040c(iVar8);
  }
  else {
    if ((DAT_14c963f20 == 0) && (DAT_14c963f18 == 0)) {
      FUN_140f9708a(&DAT_14c9647b8);
    }
    iVar4 = DAT_14c963f18;
    iVar10 = iVar8 + 0x1fff;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    iVar10 = iVar10 >> 0xd;
    if (DAT_14c963f18 <= iVar10) {
      iVar1 = iVar10 + 1;
      uVar9 = iVar1 - DAT_14c963f18;
      uVar6 = DAT_14c963f1c - DAT_14c963f18;
      DAT_14c963f18 = iVar1;
      if (uVar6 < uVar9) {
        FUN_145dfffec(iVar4);
      }
      memset((void *)((longlong)iVar4 * 0x10 + DAT_14c963f10),0,(longlong)(int)uVar9 << 4);
    }
    _DAT_14c963f24 = DAT_14c963f18 << 0xd;
    piVar2 = (int *)(DAT_14c963f10 + (longlong)iVar10 * 0x10);
    lVar11 = *(longlong *)(DAT_14c963f10 + 8 + (longlong)iVar10 * 0x10);
    if (lVar11 == 0) {
      uVar7 = 0;
      _Dst = (void *)FUN_14001cc68(0x10000,0x10);
      memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),0xff),0x10000);
      *(void **)(piVar2 + 2) = _Dst;
      _DAT_14c963f28 = _DAT_14c963f28 + 0x10000;
      uVar6 = _DAT_14c963f28;
      if (_DAT_14c963f28 < DAT_14c963f2c) {
        uVar6 = DAT_14c963f2c;
      }
      lVar11 = *(longlong *)(piVar2 + 2);
      DAT_14c963f2c = uVar6;
    }
    if (*(int *)(lVar11 + (longlong)(iVar8 % 0x2000) * 8) == -1) {
      *piVar2 = *piVar2 + 1;
      DAT_14c963f20 = DAT_14c963f20 + 1;
      lVar11 = *(longlong *)(piVar2 + 2);
    }
    *(ulonglong *)(lVar11 + (longlong)(iVar8 % 0x2000) * 8) = CONCAT44(iVar5,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000144a8e574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c963f30);
  return;
}



// FUNCTION 144a8e69e FUN_144a8e69e body=19 status=ok
// SIG undefined FUN_144a8e69e(void)

undefined8 FUN_144a8e69e(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    return CONCAT71((int7)((ulonglong)param_1 >> 8),*param_1 != -1);
  }
  return 0;
}



// FUNCTION 144a8e6b2 FUN_144a8e6b2 body=4019 status=ok
// SIG undefined FUN_144a8e6b2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144a8e6b2(longlong *param_1,ulonglong *param_2,code *param_3,longlong *param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  code *pcVar18;
  void *_Dst;
  code *pcVar19;
  ulonglong *puVar20;
  bool bVar21;
  undefined1 auStack_c8 [8];
  longlong *local_c0;
  longlong *local_b8;
  code *local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  code *local_70;
  int local_68;
  ulonglong local_60;
  undefined1 local_48 [8];
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  puVar20 = param_2 + 1;
  local_b8 = param_1;
  local_b0 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(), DAT_14c951a88 == -1)) {
    uVar7 = FUN_140342cba();
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar7,FUN_1468c7f1e);
    atexit(FUN_14280c819);
    _Init_thread_footer();
  }
  local_a8 = puVar20;
  if (*puVar20 == 0) {
    if ((int)param_2[4] != 0) goto LAB_144a8f03b;
  }
  else {
    if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_144a8ec6d:
      bVar21 = false;
    }
    else {
      uVar12 = (uint)param_2[2];
      bVar21 = false;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
        lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
        goto LAB_144a8ec6d;
        bVar21 = (*(uint *)(lVar13 + 8) & 0x10200000) == 0;
      }
    }
    if ((bVar21) || ((int)param_2[4] == 0)) {
LAB_144a8e780:
      puVar20 = local_a8;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(), DAT_14c951a88 == -1)) {
        uVar7 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar7,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer();
      }
      uVar14 = *puVar20;
      if (uVar14 == 0) {
        if ((int)param_2[4] != 0) goto LAB_144a8f093;
LAB_144a8f0e7:
        uVar14 = 0;
      }
      else {
        if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_144a8ec74:
          bVar21 = false;
        }
        else {
          uVar12 = (uint)param_2[2];
          bVar21 = false;
          if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
            lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
            goto LAB_144a8ec74;
            bVar21 = (*(uint *)(lVar13 + 8) & 0x10200000) == 0;
          }
        }
        if ((!bVar21) && ((int)param_2[4] != 0)) {
LAB_144a8f093:
          uVar14 = FUN_14007daa4(puVar20,0,0);
          puVar20 = local_a8;
          if (uVar14 != 0) {
            puVar11 = *(undefined **)(uVar14 + 8);
            if (DAT_14c951a40 == 0) {
              bVar21 = puVar11 != (undefined *)0x0;
              if (puVar11 != &DAT_14c951a38 && bVar21) {
                do {
                  puVar11 = *(undefined **)(puVar11 + 0x30);
                  bVar21 = puVar11 != (undefined *)0x0;
                  if (puVar11 == &DAT_14c951a38) break;
                } while (puVar11 != (undefined *)0x0);
              }
              if (bVar21) goto LAB_144a8f404;
            }
            else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) != 0) {
LAB_144a8f404:
              *local_a8 = uVar14;
              goto LAB_144a8e80d;
            }
          }
          if (*local_a8 != 0) {
            *local_a8 = 0;
            local_a8[1] = 0;
            goto LAB_144a8f0e7;
          }
          uVar14 = 0;
        }
      }
LAB_144a8e80d:
      if (DAT_14c927740 == 0) {
        local_70 = FUN_1449e2820;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456,0x28,8,
                      0x10000021,0,L"Engine",FUN_1427b121c,&LAB_146856450,&local_70,FUN_14081d0ea,
                      FUN_14081d0ea);
      }
      if (((*(ulonglong *)(uVar14 + 0x10) & 1) == 0) ||
         (uVar14 = *(ulonglong *)(uVar14 + 0x10) & 0xfffffffffffffffe, uVar14 == 0)) {
LAB_144a8ecb2:
        uVar10 = 0;
      }
      else {
        if (*(int *)(*(longlong *)(uVar14 + 0x10) + 0x38) < *(int *)(DAT_14c927740 + 0x38))
        goto LAB_144a8ecb2;
        uVar10 = 0;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) == DAT_14c927740 + 0x30) {
          uVar10 = uVar14;
        }
      }
      puVar17 = auStack_c8;
      if (*param_2 != uVar10) goto LAB_144a8f552;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        uVar7 = FUN_140342cba();
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar7,FUN_1468c7f1e);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      uVar14 = *puVar20;
      if (uVar14 == 0) {
        if ((int)param_2[4] != 0) goto LAB_144a8f0f4;
LAB_144a8f145:
        uVar14 = 0;
      }
      else {
        if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_144a8ec7b:
          bVar21 = false;
        }
        else {
          uVar12 = (uint)param_2[2];
          bVar21 = false;
          if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
            lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
            goto LAB_144a8ec7b;
            bVar21 = (*(uint *)(lVar13 + 8) & 0x10200000) == 0;
          }
        }
        if ((!bVar21) && ((int)param_2[4] != 0)) {
LAB_144a8f0f4:
          uVar14 = FUN_14007daa4(puVar20,0,0);
          puVar20 = local_a8;
          if (uVar14 != 0) {
            puVar11 = *(undefined **)(uVar14 + 8);
            if (DAT_14c951a40 == 0) {
              bVar21 = puVar11 != (undefined *)0x0;
              if (puVar11 != &DAT_14c951a38 && bVar21) {
                do {
                  puVar11 = *(undefined **)(puVar11 + 0x30);
                  bVar21 = puVar11 != (undefined *)0x0;
                  if (puVar11 == &DAT_14c951a38) break;
                } while (puVar11 != (undefined *)0x0);
              }
              if (bVar21) goto LAB_144a8f457;
            }
            else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) != 0) {
LAB_144a8f457:
              *local_a8 = uVar14;
              goto LAB_144a8e8f4;
            }
          }
          if (*local_a8 != 0) {
            *local_a8 = 0;
            local_a8[1] = 0;
            goto LAB_144a8f145;
          }
          uVar14 = 0;
        }
      }
LAB_144a8e8f4:
      puVar17 = auStack_c8;
      if ((int)(uint)*(ushort *)(*param_2 + 0xb6) <= *(int *)(uVar14 + 0x44)) goto LAB_144a8f552;
    }
    else {
LAB_144a8f03b:
      uVar14 = FUN_14007daa4(puVar20,0,0);
      if (uVar14 != 0) {
        puVar11 = *(undefined **)(uVar14 + 8);
        if (DAT_14c951a40 == 0) {
          bVar21 = puVar11 != (undefined *)0x0;
          if (puVar11 != &DAT_14c951a38 && bVar21) {
            do {
              puVar11 = *(undefined **)(puVar11 + 0x30);
              bVar21 = puVar11 != (undefined *)0x0;
              if (puVar11 == &DAT_14c951a38) break;
            } while (puVar11 != (undefined *)0x0);
          }
          if (bVar21) goto LAB_144a8f3bf;
        }
        else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) != 0) {
LAB_144a8f3bf:
          *local_a8 = uVar14;
          goto LAB_144a8e780;
        }
      }
      puVar20 = local_a8;
      if (*local_a8 != 0) {
        *local_a8 = 0;
        local_a8[1] = 0;
      }
    }
  }
  lVar13 = FUN_1405e0c42(*param_4 + 0x38);
  puVar17 = auStack_c8;
  if (lVar13 == 0) goto LAB_144a8f552;
  uVar2 = *(ushort *)(*param_2 + 0xb6);
  iVar3 = *(int *)(*param_2 + 0x5c);
  if (iVar3 + (uint)uVar2 == 0) {
    puVar8 = (undefined1 *)0x0;
    puVar17 = auStack_c8;
  }
  else {
    lVar15 = -((longlong)(int)((uint)uVar2 + iVar3 + 0xf) + 0xfU & 0xfffffffffffffff0);
    puVar8 = auStack_c8 + lVar15;
    puVar17 = auStack_c8 + lVar15;
  }
  _Dst = (void *)(-(longlong)iVar3 & (ulonglong)(puVar8 + (longlong)iVar3 + -1));
  *(undefined8 *)(puVar17 + -0x28) = 0x144a8e979;
  memset(_Dst,0,(ulonglong)(uint)uVar2);
  for (plVar6 = (longlong *)*param_2; plVar6 != (longlong *)0x0;
      plVar6 = (longlong *)(*pcVar18)(plVar6)) {
    for (plVar16 = (longlong *)plVar6[10]; plVar16 != (longlong *)0x0;
        plVar16 = (longlong *)plVar16[3]) {
      if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) goto LAB_144a8e9a6;
    }
    pcVar18 = *(code **)(*plVar6 + 0x2b0);
    *(undefined8 *)(puVar17 + -0x28) = 0x144a8f163;
  }
  goto LAB_144a8e9f9;
LAB_144a8f4fe:
  if ((char)plVar16[7] < '\0') {
    if (((ulonglong)plVar16[7] >> 0x24 & 1) == 0) {
      iVar3 = *(int *)((longlong)plVar16 + 0x44);
      pcVar18 = *(code **)(*plVar16 + 0x148);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8f5af;
      (*pcVar18)(plVar16,(longlong)iVar3 + (longlong)_Dst);
    }
    plVar16 = plVar16 + 3;
    do {
      for (plVar16 = (longlong *)*plVar16; plVar16 != (longlong *)0x0;
          plVar16 = (longlong *)plVar16[3]) {
        if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) goto LAB_144a8f4fe;
      }
      pcVar18 = *(code **)(*plVar6 + 0x2b0);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8f542;
      plVar6 = (longlong *)(*pcVar18)(plVar6);
      plVar16 = plVar6 + 10;
    } while (plVar6 != (longlong *)0x0);
  }
  goto LAB_144a8f552;
LAB_144a8e9a6:
  if ((char)plVar16[7] < '\0') {
    if (((uint)plVar16[7] >> 9 & 1) == 0) {
      iVar3 = *(int *)((longlong)plVar16 + 0x44);
      pcVar18 = *(code **)(*plVar16 + 0x160);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8eca0;
      (*pcVar18)(plVar16,(longlong)iVar3 + (longlong)_Dst);
    }
    plVar16 = plVar16 + 3;
    do {
      for (plVar16 = (longlong *)*plVar16; plVar16 != (longlong *)0x0;
          plVar16 = (longlong *)plVar16[3]) {
        if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) goto LAB_144a8e9a6;
      }
      pcVar18 = *(code **)(*plVar6 + 0x2b0);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8e9e9;
      plVar6 = (longlong *)(*pcVar18)(plVar6);
      plVar16 = plVar6 + 10;
    } while (plVar6 != (longlong *)0x0);
  }
LAB_144a8e9f9:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    *(undefined8 *)(puVar17 + -0x28) = 0x144a8ef1d;
    FUN_144b3d300();
    if (DAT_14c951a88 == -1) {
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8ef37;
      uVar7 = FUN_140342cba();
      *(code **)(puVar17 + -8) = FUN_1468c7f1e;
      *(undefined8 *)(puVar17 + -0x10) = uVar7;
      *(undefined8 *)(puVar17 + -0x18) = 0;
      *(undefined8 *)(puVar17 + -0x20) = 0x8001;
      *(undefined8 *)(puVar17 + -0x48) = 0x144a8ef7a;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8ef8a;
      atexit(FUN_14280c819);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8ef96;
      _Init_thread_footer();
    }
  }
  if (*puVar20 == 0) {
LAB_144a8ea76:
    if ((int)param_2[4] != 0) {
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8f192;
      uVar14 = FUN_14007daa4(puVar20,0,0);
      if (uVar14 != 0) {
        puVar11 = *(undefined **)(uVar14 + 8);
        if (DAT_14c951a40 == 0) {
          bVar21 = puVar11 != (undefined *)0x0;
          if (puVar11 != &DAT_14c951a38 && bVar21) {
            do {
              puVar11 = *(undefined **)(puVar11 + 0x30);
              bVar21 = puVar11 != (undefined *)0x0;
              if (puVar11 == &DAT_14c951a38) break;
            } while (puVar11 != (undefined *)0x0);
          }
          if (bVar21) goto LAB_144a8f4aa;
        }
        else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) != 0) {
LAB_144a8f4aa:
          *local_a8 = uVar14;
          goto LAB_144a8ea80;
        }
      }
      if (*local_a8 != 0) {
        *local_a8 = 0;
        local_a8[1] = 0;
      }
    }
  }
  else {
    if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_144a8ec82:
      bVar21 = false;
    }
    else {
      uVar12 = (uint)param_2[2];
      bVar21 = false;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
        lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
        goto LAB_144a8ec82;
        bVar21 = (*(uint *)(lVar15 + 8) & 0x10200000) == 0;
      }
    }
    if (!bVar21) goto LAB_144a8ea76;
  }
LAB_144a8ea80:
  plVar6 = local_b8;
  local_c0 = param_4;
  if (((*(int *)((longlong)param_2 + 0x2c) == 0 && (int)param_2[5] == 0) && (int)param_2[6] == 0) &&
      *(int *)((longlong)param_2 + 0x34) == 0) {
    if ((longlong)*(int *)(local_b0 + 8) == 0) {
      uVar14 = *param_2;
      pcVar18 = *(code **)(*local_b8 + 0x248);
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8f4cd;
      (*pcVar18)(plVar6,uVar14,_Dst);
    }
    else {
      pcVar18 = *(code **)local_b0;
      local_b0 = pcVar18 + (longlong)*(int *)(local_b0 + 8) * 8;
      do {
        uVar14 = *(ulonglong *)pcVar18;
        uVar10 = param_2[7];
        local_a0 = *local_c0;
        local_98 = local_c0[1];
        if (local_98 != 0) {
          LOCK();
          *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)(puVar17 + -0x28) = 0x144a8f225;
        lVar13 = FUN_1446ddbd2();
        if (*local_a8 == 0) {
          if ((int)param_2[4] != 0) goto LAB_144a8f25f;
LAB_144a8f29e:
          uVar9 = 0;
        }
        else {
          *(undefined8 *)(puVar17 + -0x28) = 0x144a8f242;
          cVar5 = FUN_144729dda(param_2 + 2);
          if ((cVar5 == '\0') && ((int)param_2[4] != 0)) {
LAB_144a8f25f:
            puVar20 = local_a8;
            *(undefined8 *)(puVar17 + -0x28) = 0x144a8f271;
            uVar9 = FUN_14007daa4(puVar20,0,0);
            if (uVar9 != 0) {
              lVar15 = *(longlong *)(uVar9 + 8);
              if (*(ulonglong *)(lVar13 + 8) == 0) {
                bVar21 = lVar15 != 0;
                if (lVar15 != lVar13 && bVar21) {
                  do {
                    lVar15 = *(longlong *)(lVar15 + 0x30);
                    bVar21 = lVar15 != 0;
                    if (lVar15 == lVar13) break;
                  } while (lVar15 != 0);
                }
                if (bVar21) goto LAB_144a8f2d0;
              }
              else if ((*(ulonglong *)(lVar15 + 0x18) & *(ulonglong *)(lVar13 + 8)) != 0) {
LAB_144a8f2d0:
                *local_a8 = uVar9;
                goto LAB_144a8f2d7;
              }
            }
            if (*local_a8 != 0) {
              *local_a8 = 0;
              local_a8[1] = 0;
            }
            goto LAB_144a8f29e;
          }
          uVar9 = *local_a8;
        }
LAB_144a8f2d7:
        *(int *)(puVar17 + -0x10) = (int)uVar10;
        *(undefined8 *)(puVar17 + -0x38) = 0x144a8f2f2;
        cVar5 = FUN_1415642fe(_Dst,uVar14,uVar9,&local_a0);
        if (cVar5 != '\0') {
          pcVar19 = *(code **)(*local_b8 + 0x248);
          *(undefined8 *)(puVar17 + -0x28) = 0x144a8f311;
          (*pcVar19)();
        }
        pcVar18 = pcVar18 + 8;
      } while (pcVar18 != local_b0);
    }
  }
  else {
    local_80 = *param_4;
    local_78 = param_4[1];
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    *(longlong **)(puVar17 + -0x10) = &local_80;
    *(undefined8 *)(puVar17 + -0x38) = 0x144a8ead5;
    FUN_1401abfd8(lVar13,&local_70,param_2 + 5,param_2 + 7);
    if ((longlong)local_68 != 0) {
      pcVar18 = local_70 + (longlong)local_68 * 8;
      pcVar19 = local_70;
      do {
        uVar14 = *(ulonglong *)pcVar19;
        if (((((uVar14 >> 0x20 != 0) && (uVar12 = (uint)uVar14, -1 < (int)uVar12)) &&
             ((int)uVar12 < DAT_14c9647dc)) &&
            ((plVar6 = (longlong *)
                       ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0xd & 0x3fff8))),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == (int)(uVar14 >> 0x20))))) &&
           (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar13 = *plVar6, lVar13 != 0)))) {
          uVar14 = param_2[7];
          local_90 = *local_c0;
          local_88 = local_c0[1];
          if (local_88 != 0) {
            LOCK();
            *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
            UNLOCK();
          }
          local_b0 = pcVar18;
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c951a88) {
            *(undefined8 *)(puVar17 + -0x28) = 0x144a8efaf;
            FUN_144b3d300();
            if (DAT_14c951a88 == -1) {
              *(undefined8 *)(puVar17 + -0x28) = 0x144a8efc9;
              uVar7 = FUN_140342cba();
              *(code **)(puVar17 + -8) = FUN_1468c7f1e;
              *(undefined8 *)(puVar17 + -0x10) = uVar7;
              *(undefined8 *)(puVar17 + -0x18) = 0;
              *(undefined8 *)(puVar17 + -0x20) = 0x8001;
              *(undefined8 *)(puVar17 + -0x48) = 0x144a8f00c;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              *(undefined8 *)(puVar17 + -0x28) = 0x144a8f01c;
              atexit(FUN_14280c819);
              *(undefined8 *)(puVar17 + -0x28) = 0x144a8f028;
              _Init_thread_footer();
            }
          }
          puVar20 = local_a8;
          uVar10 = *local_a8;
          if (uVar10 == 0) {
            if ((int)param_2[4] != 0) goto LAB_144a8f32e;
LAB_144a8f37b:
            uVar10 = 0;
          }
          else {
            if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_144a8ec69:
              bVar21 = false;
            }
            else {
              uVar12 = (uint)param_2[2];
              bVar21 = false;
              if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
                if ((lVar15 == 0) || (*(int *)(lVar15 + 0x10) != *(int *)((longlong)param_2 + 0x14))
                   ) goto LAB_144a8ec69;
                bVar21 = (*(uint *)(lVar15 + 8) & 0x10200000) == 0;
              }
            }
            if ((!bVar21) && ((int)param_2[4] != 0)) {
LAB_144a8f32e:
              *(undefined8 *)(puVar17 + -0x28) = 0x144a8f340;
              uVar10 = FUN_14007daa4(puVar20,0,0);
              if (uVar10 != 0) {
                puVar11 = *(undefined **)(uVar10 + 8);
                if (DAT_14c951a40 == 0) {
                  bVar21 = puVar11 != (undefined *)0x0;
                  if (puVar11 != &DAT_14c951a38 && bVar21) {
                    do {
                      puVar11 = *(undefined **)(puVar11 + 0x30);
                      bVar21 = puVar11 != (undefined *)0x0;
                      if (puVar11 == &DAT_14c951a38) break;
                    } while (puVar11 != (undefined *)0x0);
                  }
                  if (bVar21) goto LAB_144a8f600;
                }
                else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951a40) != 0) {
LAB_144a8f600:
                  *local_a8 = uVar10;
                  goto LAB_144a8ec17;
                }
              }
              if (*local_a8 != 0) {
                *local_a8 = 0;
                local_a8[1] = 0;
              }
              goto LAB_144a8f37b;
            }
          }
LAB_144a8ec17:
          *(int *)(puVar17 + -0x10) = (int)uVar14;
          *(undefined8 *)(puVar17 + -0x38) = 0x144a8ec30;
          cVar5 = FUN_1415642fe(_Dst,lVar13,uVar10);
          pcVar18 = local_b0;
          plVar6 = local_b8;
          if (cVar5 != '\0') {
            uVar14 = *param_2;
            pcVar4 = *(code **)(*local_b8 + 0x248);
            *(undefined8 *)(puVar17 + -0x28) = 0x144a8ec53;
            (*pcVar4)(plVar6,uVar14,_Dst);
          }
        }
        pcVar19 = pcVar19 + 8;
      } while (pcVar19 != pcVar18);
    }
  }
  param_4 = local_c0;
  for (plVar6 = (longlong *)*param_2; plVar6 != (longlong *)0x0;
      plVar6 = (longlong *)(*pcVar18)(plVar6)) {
    for (plVar16 = (longlong *)plVar6[10]; plVar16 != (longlong *)0x0;
        plVar16 = (longlong *)plVar16[3]) {
      if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) goto LAB_144a8f4fe;
    }
    pcVar18 = *(code **)(*plVar6 + 0x2b0);
    *(undefined8 *)(puVar17 + -0x28) = 0x144a8f61c;
  }
LAB_144a8f552:
  plVar6 = (longlong *)param_4[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar6 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      pcVar18 = *(code **)*plVar6;
      *(undefined8 *)(puVar17 + -0x28) = 0x144a8f646;
      (*pcVar18)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        pcVar18 = *(code **)(*plVar6 + 0x10);
        *(undefined8 *)(puVar17 + -0x28) = 0x144a8f661;
        (*pcVar18)(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -0x28) = &UNK_144a8f593;
  FUN_144d8e3a0();
}



// FUNCTION 144a8f66a FUN_144a8f66a body=423 status=ok
// SIG undefined FUN_144a8f66a(void)

undefined * FUN_144a8f66a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14cb02ef0) {
    FUN_144b3d300(&DAT_14cb02ef0);
    if (DAT_14cb02ef0 == -1) {
      FUN_14156891c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"Primitive";
      local_78 = L"FPrimitiveUniformShaderParameters";
      local_50 = 0x360;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb02e70,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a26f6);
      _Init_thread_footer(&DAT_14cb02ef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb02e70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8f812 FUN_144a8f812 body=289 status=ok
// SIG undefined FUN_144a8f812(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8f812(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89370) {
    FUN_144b3d300(&DAT_14ca89370);
    if (DAT_14ca89370 == -1) {
      FUN_145e0da2e();
      FUN_145e0d8e0();
      FUN_140db5666(&DAT_14ca892c8,0,&DAT_14ca89260,L"FScreenVertexShaderVS",
                    L"/Engine/Private/Tools/FullscreenVertexShader.usf",L"MainVS",0,1,FUN_1474193e8,
                    FUN_147419388,&LAB_147419384,&LAB_147419380,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca911e0);
      _DAT_14ca892c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21b4);
      _Init_thread_footer(&DAT_14ca89370);
    }
  }
  return &DAT_14ca892c8;
}



// FUNCTION 144a8f934 FUN_144a8f934 body=108 status=ok
// SIG undefined FUN_144a8f934(void)

undefined8 * FUN_144a8f934(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0c040) {
    FUN_144b3d300(&DAT_14cb0c040);
    if (DAT_14cb0c040 == -1) {
      FUN_145e17f72(&DAT_14cb0bff0);
      atexit(FUN_14374ca90);
      _Init_thread_footer(&DAT_14cb0c040);
    }
  }
  return &DAT_14cb0bff0;
}



// FUNCTION 144a8f9a0 FUN_144a8f9a0 body=258 status=ok
// SIG undefined FUN_144a8f9a0(void)

void FUN_144a8f9a0(void)

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
              0x110) < DAT_14ca18340) {
    FUN_144b3d300(&DAT_14ca18340);
    if (DAT_14ca18340 == -1) {
      FUN_145e1df16(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x52b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca182c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276ff);
      _Init_thread_footer(&DAT_14ca18340);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a8faa4 FUN_144a8faa4 body=571 status=ok
// SIG undefined FUN_144a8faa4(void)

ulonglong FUN_144a8faa4(ulonglong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  code *pcVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c872d28 == (longlong *)0x0) {
    FUN_1460d69fa();
    uVar10 = 0;
    local_30 = 0;
    cVar2 = (**(code **)(*DAT_14c872d28 + 0x68))(DAT_14c872d28,param_1);
    if (cVar2 == '\0') goto LAB_144a8fb51;
    goto LAB_144a8fb4c;
  }
  local_30 = 0;
  pcVar6 = *(code **)(*DAT_14c872d28 + 0x68);
  plVar8 = DAT_14c872d28;
  if (pcVar6 == FUN_1467c2508) {
    for (puVar4 = (undefined8 *)DAT_14c872d28[0xa9]; puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      if ((*(ulonglong *)(puVar4[2] + 8) <= param_1) && (param_1 < *(ulonglong *)(puVar4[2] + 0x10))
         ) {
        FUN_142758cd8(param_1 & 0xffffffffffff0000);
        goto LAB_144a8fb44;
      }
    }
    plVar8 = (longlong *)DAT_14c872d28[0xf];
    pcVar6 = *(code **)(*plVar8 + 0x68);
    if (pcVar6 != FUN_1467c2bc0) goto LAB_144a8fc7d;
    if ((short)param_1 != 0) {
      uVar3 = (uint)*(byte *)((param_1 & 0xffffffffffff0000) + 3);
      if (uVar3 != 0xe3) {
        local_40 = 0xe3;
        local_48 = uVar3;
        FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x3cb,
                      L"FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x"
                      ,param_1 & 0xffffffffffff0000);
      }
LAB_144a8fb44:
      local_30 = (ulonglong)*(ushort *)(param_1 & 0xffffffffffff0000);
      goto LAB_144a8fb4c;
    }
    if (param_1 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(plVar8 + 7);
      EnterCriticalSection(lpCriticalSection);
      lVar9 = plVar8[5];
      bVar1 = *(byte *)(plVar8 + 1);
      uVar10 = param_1 - lVar9 >> (*(byte *)(plVar8 + 2) & 0x3f);
      uVar3 = *(uint *)(plVar8 + 3);
      puVar5 = (ulonglong *)((ulonglong)((int)plVar8[4] - 1U & (uint)uVar10) * 0x20 + plVar8[0xd]);
      puVar7 = puVar5;
      do {
        if (*puVar7 == uVar10) {
          uVar10 = puVar7[1];
          LeaveCriticalSection(lpCriticalSection);
          lVar9 = uVar10 + (ulonglong)(uVar3 & (uint)(param_1 - lVar9 >> (bVar1 & 0x3f))) * 0x20;
          if (lVar9 == 0) goto LAB_144a8fc05;
          goto LAB_144a8fbd8;
        }
        puVar7 = (ulonglong *)puVar7[3];
      } while (puVar7 != puVar5);
      LeaveCriticalSection(lpCriticalSection);
LAB_144a8fc05:
      FUN_140033559("Runtime\\Core\\Public\\HAL/MallocBinnedCommon.h",0x369,
                    L"FMallocBinned Attempt to GetAllocationSizeExternal an unrecognized pointer %p"
                    ,param_1);
      lVar9 = 0;
LAB_144a8fbd8:
      if (*(short *)(lVar9 + 2) != 0x17ea) {
        local_48 = 0x17ea;
        FUN_140033559(".\\Runtime/Core/Private/HAL/MallocBinned2.cpp",0x90,
                      L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x");
      }
      local_30 = *(ulonglong *)(lVar9 + 8);
      goto LAB_144a8fb4c;
    }
  }
  else {
LAB_144a8fc7d:
    cVar2 = (*pcVar6)(plVar8,param_1,&local_30);
    if (cVar2 != '\0') {
LAB_144a8fb4c:
      uVar10 = local_30;
      goto LAB_144a8fb51;
    }
  }
  uVar10 = 0;
LAB_144a8fb51:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 144a8fce0 FUN_144a8fce0 body=261 status=ok
// SIG undefined FUN_144a8fce0(void)

undefined8 FUN_144a8fce0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_144a8fdc2:
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_144a8fdc2;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_144a8fd06;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(char *)(lVar4 + 0x42) == '\x03');
LAB_144a8fd06:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144a8fde6 FUN_144a8fde6 body=226 status=ok
// SIG undefined FUN_144a8fde6(void)

ulonglong FUN_144a8fde6(ulonglong *param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  do {
    uVar1 = *param_1;
    uVar2 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
    if (uVar2 >> 0x1a < uVar1 >> 0x1a) {
      FUN_14274643a();
    }
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(&DAT_14c833b00 + (ulonglong)(param_2 >> 0xe) * 8) +
              (ulonglong)((param_2 & 0x3fff) * 0x18);
    }
    *(uint *)(lVar3 + 0x10) = (uint)uVar1 & 0x3ffffff;
    LOCK();
    uVar4 = *param_1;
    bVar5 = uVar1 == uVar4;
    if (bVar5) {
      *param_1 = uVar2 | param_2;
      uVar4 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return uVar4;
}



// FUNCTION 144a8fec8 FUN_144a8fec8 body=289 status=ok
// SIG undefined FUN_144a8fec8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8fec8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14b70) {
    FUN_144b3d300(&DAT_14ca14b70);
    if (DAT_14ca14b70 == -1) {
      FUN_1415729ec();
      FUN_145e459ac();
      FUN_140db5666(&DAT_14ca14ac8,0,&DAT_14ca14a60,L"FInstanceHierarchySanitizeInstanceArgs_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceHierarchyCulling.usf",
                    L"InstanceHierarchySanitizeInstanceArgsCS",5,2,FUN_147251f40,FUN_147251ee0,
                    &LAB_1462eece0,&LAB_147251edc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca17930)
      ;
      _DAT_14ca14ac8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a312);
      _Init_thread_footer(&DAT_14ca14b70);
    }
  }
  return &DAT_14ca14ac8;
}



// FUNCTION 144a8ffea FUN_144a8ffea body=289 status=ok
// SIG undefined FUN_144a8ffea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a8ffea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb509c8) {
    FUN_144b3d300(&DAT_14cb509c8);
    if (DAT_14cb509c8 == -1) {
      FUN_141579b64();
      FUN_145e67f12();
      FUN_140db5666(&DAT_14cb50920,0,&DAT_14cb508b8,L"FJacobiSORPassCS",
                    L"/GbxWindShaders/JacobiSolve.usf",L"JacobiSORIteration",5,1,FUN_1485ec858,
                    FUN_1485ec7f8,&LAB_1485ec7f4,&LAB_1485ec7f0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb50dc0);
      _DAT_14cb50920 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143beebd1);
      _Init_thread_footer(&DAT_14cb509c8);
    }
  }
  return &DAT_14cb50920;
}



// FUNCTION 144a9010c FUN_144a9010c body=287 status=ok
// SIG undefined FUN_144a9010c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a9010c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2820) {
    FUN_144b3d300(&DAT_14c9c2820);
    if (DAT_14c9c2820 == -1) {
      uVar1 = FUN_144a9022c();
      FUN_145e7e960();
      FUN_140db5666(&DAT_14c9c2778,0,&DAT_14c9c2710,L"FDeferredDecalVS",
                    L"/Engine/Private/DeferredDecal.usf",L"MainVS",0,1,FUN_147145ec8,FUN_147145e6e,
                    &LAB_147145e6a,&LAB_147145e66,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14c9c2778 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba988b);
      _Init_thread_footer(&DAT_14c9c2820);
    }
  }
  return &DAT_14c9c2778;
}



// FUNCTION 144a9022c FUN_144a9022c body=265 status=ok
// SIG undefined FUN_144a9022c(void)

undefined * FUN_144a9022c(void)

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
              0x110) < DAT_14c9c3bd0) {
    FUN_144b3d300(&DAT_14c9c3bd0);
    if (DAT_14c9c3bd0 == -1) {
      FUN_145e7eaaa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3b50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc2486);
      _Init_thread_footer(&DAT_14c9c3bd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c3b50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a90336 FUN_144a90336 body=160 status=ok
// SIG undefined FUN_144a90336(void)

undefined8 FUN_144a90336(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1 + 0xb00;
  if (*(longlong *)(param_1 + 0x1280) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1280);
  }
  plVar1 = *(longlong **)(lVar3 + 0x10 + (longlong)param_2 * 0x280);
  iVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,&local_10);
  if (iVar2 < 0) {
    local_30 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    FUN_145763094(iVar2,
                  "Queues[(uint32)QueueType].D3DCommandQueue->GetTimestampFrequency(&Frequency)",
                  ".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x2ff);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a903d8 FUN_144a903d8 body=258 status=ok
// SIG undefined FUN_144a903d8(void)

void FUN_144a903d8(void)

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
              0x110) < DAT_14ca33cd0) {
    FUN_144b3d300(&DAT_14ca33cd0);
    if (DAT_14ca33cd0 == -1) {
      FUN_141583650(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 800;
      local_58 = 0x239;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33c50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140bd);
      _Init_thread_footer(&DAT_14ca33cd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a904dc FUN_144a904dc body=316 status=ok
// SIG undefined FUN_144a904dc(void)

void FUN_144a904dc(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_2 + 0x48);
  iVar2 = *(int *)(param_2 + 0x50);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3d8b8) {
    FUN_144b3d300(&DAT_14cb3d8b8);
    if (DAT_14cb3d8b8 == -1) {
      FUN_145ec82a8(local_38);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FShaderParameters";
      local_48 = 0;
      local_60 = 0x20;
      local_68 = 0x14;
      local_58 = local_38;
      FUN_140b49562(&DAT_14cb3d838,0,1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a71f50);
      _Init_thread_footer(&DAT_14cb3d8b8);
    }
  }
  uVar12 = iVar2 + 0xfU & 0xfffffff0;
  *(uint *)(param_2 + 0x50) = DAT_14cb3d874 + uVar12;
  lVar4 = *(longlong *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(lVar3 + 0x10);
  uVar6 = *(undefined4 *)(lVar3 + 0x14);
  uVar7 = *(undefined4 *)(lVar3 + 0x18);
  uVar8 = *(undefined4 *)(lVar3 + 0x1c);
  uVar9 = *(undefined4 *)(lVar3 + 0x24);
  uVar10 = *(undefined4 *)(lVar3 + 0x28);
  uVar11 = *(undefined4 *)(lVar3 + 0x2c);
  puVar1 = (undefined4 *)(lVar4 + 0x10 + (ulonglong)uVar12);
  *puVar1 = *(undefined4 *)(lVar3 + 0x20);
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar4 + (ulonglong)uVar12);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a9061a FUN_144a9061a body=891 status=ok
// SIG undefined FUN_144a9061a(void)

void FUN_144a9061a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(*param_1 + 0x29) & 2) == 0) && (lVar6 = param_2[1], (longlong)(int)lVar6 != 0)) {
    lVar2 = *param_2;
    lVar10 = 0;
    do {
      local_58 = 0;
      plVar9 = (longlong *)*param_1;
      pcVar7 = *(code **)(*plVar9 + 0x160);
      if (pcVar7 == FUN_144833c3c) {
        local_4c = 0;
        local_50 = 0;
        puVar3 = (ulonglong *)plVar9[1];
        puVar4 = (uint *)*puVar3 + 1;
        if ((uint *)puVar3[1] < puVar4) {
          if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
            pcVar7 = *(code **)(*plVar9 + 0x170);
            plVar8 = plVar9;
            if (pcVar7 == FUN_14473a572) {
              plVar8 = (longlong *)plVar9[0x12];
              pcVar7 = *(code **)(*plVar8 + 0x170);
              if (pcVar7 == FUN_14004e24c) {
                FUN_14004e24c(plVar8,&local_4c,4);
              }
              else if (pcVar7 == FUN_1447395b8) {
                local_4c = *(uint *)(plVar8[0x12] + plVar8[0x13]);
                plVar8[0x13] = plVar8[0x13] + 4;
              }
              else {
                if (pcVar7 != FUN_144a6950e) goto LAB_144a908bd;
                if ((*(byte *)((longlong)plVar8 + 0x29) & 2) == 0) {
                  puVar4 = *(uint **)plVar8[1];
                  local_4c = *puVar4;
                  *(uint **)plVar8[1] = puVar4 + 1;
                }
              }
            }
            else {
LAB_144a908bd:
              (*pcVar7)(plVar8,&local_4c,4);
            }
          }
          else {
            FUN_14572512c(plVar9,&local_4c);
          }
        }
        else {
          local_4c = *(uint *)*puVar3;
          *puVar3 = (ulonglong)puVar4;
        }
        if ((int)local_4c < 0) {
          local_4c = local_4c & 0x7fffffff;
          puVar3 = (ulonglong *)plVar9[1];
          puVar5 = (undefined4 *)*puVar3 + 1;
          if ((undefined4 *)puVar3[1] < puVar5) {
            if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar9 + 0x170))(plVar9,&local_50,4);
            }
            else {
              FUN_14572512c(plVar9,&local_50);
            }
          }
          else {
            local_50 = *(undefined4 *)*puVar3;
            *puVar3 = (ulonglong)puVar5;
          }
        }
        uVar1 = *(uint *)(plVar9[0x13] + (longlong)(int)local_4c * 4);
      }
      else {
        (*pcVar7)(plVar9);
        uVar1 = (uint)local_58;
      }
      plVar9 = (longlong *)*param_1;
      puVar3 = (ulonglong *)plVar9[1];
      puVar5 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar5) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          pcVar7 = *(code **)(*plVar9 + 0x170);
          if (pcVar7 == FUN_14473a572) {
            plVar9 = (longlong *)plVar9[0x12];
            pcVar7 = *(code **)(*plVar9 + 0x170);
            if (pcVar7 == FUN_14004e24c) {
              FUN_14004e24c(plVar9,&local_58,4);
            }
            else if (pcVar7 == FUN_1447395b8) {
              local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(plVar9[0x12] + plVar9[0x13]));
              plVar9[0x13] = plVar9[0x13] + 4;
            }
            else {
              if (pcVar7 != FUN_144a6950e) goto LAB_144a908cf;
              if ((*(byte *)((longlong)plVar9 + 0x29) & 2) == 0) {
                puVar5 = *(undefined4 **)plVar9[1];
                local_58 = CONCAT44(local_58._4_4_,*puVar5);
                *(undefined4 **)plVar9[1] = puVar5 + 1;
              }
            }
          }
          else {
LAB_144a908cf:
            (*pcVar7)(plVar9,&local_58,4);
          }
        }
        else {
          FUN_14572512c(plVar9,&local_58);
        }
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar5;
      }
      *(ulonglong *)(lVar2 + lVar10) = (ulonglong)uVar1 | local_58 << 0x20;
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a90996 FUN_144a90996 body=258 status=ok
// SIG undefined FUN_144a90996(void)

void FUN_144a90996(void)

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
              0x110) < DAT_14ca18120) {
    FUN_144b3d300(&DAT_14ca18120);
    if (DAT_14ca18120 == -1) {
      FUN_145ed14d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x4bf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca180a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276cf);
      _Init_thread_footer(&DAT_14ca18120);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a90a9a FUN_144a90a9a body=258 status=ok
// SIG undefined FUN_144a90a9a(void)

void FUN_144a90a9a(void)

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
              0x110) < DAT_14ca182b8) {
    FUN_144b3d300(&DAT_14ca182b8);
    if (DAT_14ca182b8 == -1) {
      FUN_145ed163e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x516;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18238,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276f3);
      _Init_thread_footer(&DAT_14ca182b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a90b9e FUN_144a90b9e body=593 status=ok
// SIG undefined FUN_144a90b9e(void)

double * FUN_144a90b9e(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar9 = param_1[2];
  dVar8 = *param_1;
  dVar11 = param_1[1];
  dVar1 = param_1[6];
  dVar2 = param_1[5];
  dVar3 = param_1[4];
  dVar4 = param_1[10];
  dVar5 = param_1[9];
  dVar6 = param_1[8];
  dVar7 = 0.0;
  if ((((dVar11 != 0.0) || (NAN(dVar11))) || (dVar8 != 0.0)) || (NAN(dVar8))) {
    dVar7 = atan2(dVar11,dVar8);
    dVar7 = dVar7 * 57.29577951308232;
  }
  dVar11 = SQRT(dVar11 * dVar11 + dVar8 * dVar8);
  dVar8 = 0.0;
  if (((dVar9 != 0.0) || (NAN(dVar9))) || ((dVar11 != 0.0 || (NAN(dVar11))))) {
    dVar8 = atan2(dVar9,dVar11);
    dVar8 = dVar8 * 57.29577951308232;
  }
  *param_2 = dVar8;
  param_2[1] = dVar7;
  dVar9 = sin(dVar8 * 0.01745329238474369);
  dVar11 = sin(dVar7 * 0.01745329238474369);
  dVar10 = cos(dVar8 * 0.01745329238474369);
  dVar8 = cos(dVar7 * 0.01745329238474369);
  dVar7 = 0.0;
  dVar12 = dVar9 * 0.0 * dVar8 - dVar11;
  dVar8 = dVar9 * 0.0 * dVar11 + dVar8;
  dVar9 = dVar1 * dVar10 * -0.0 + dVar3 * dVar12 + dVar2 * dVar8;
  dVar8 = dVar4 * dVar10 * -0.0 + dVar6 * dVar12 + dVar5 * dVar8;
  if (((dVar8 != 0.0) || (NAN(dVar8))) || ((dVar9 != 0.0 || (NAN(dVar9))))) {
    dVar7 = atan2(dVar8,dVar9);
    dVar7 = dVar7 * 57.29577951308232;
  }
  param_2[2] = dVar7;
  return param_2;
}



// FUNCTION 144a90df0 FUN_144a90df0 body=598 status=ok
// SIG undefined FUN_144a90df0(void)

void FUN_144a90df0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar4 = dVar6 * dVar6 + dVar9 * dVar9 + dVar5 * dVar5;
  if (((dVar4 != 1.0) || (dVar1 = dVar9, dVar2 = dVar5, dVar3 = dVar6, NAN(dVar4))) &&
     (dVar1 = DAT_14c8464e0, dVar2 = DAT_14c8464e8, dVar3 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar4)) {
    dVar4 = 1.0 / SQRT(dVar4);
    dVar1 = dVar9 * dVar4;
    dVar2 = dVar5 * dVar4;
    dVar3 = dVar6 * dVar4;
  }
  dVar5 = (double)(~-(ulonglong)(ABS(dVar3) < 0.9998999834060669) & 0x3ff0000000000000);
  dVar9 = 1.0;
  if (0.9998999834060669 <= ABS(dVar3)) {
    dVar9 = 0.0;
  }
  dVar6 = dVar5 * dVar2 + dVar1 * -0.0;
  dVar4 = dVar9 * dVar1 - dVar3 * dVar5;
  dVar5 = dVar3 * 0.0 - dVar2 * dVar9;
  dVar9 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  if (((dVar9 != 1.0) || (dVar7 = dVar6, dVar8 = dVar5, dVar10 = dVar4, NAN(dVar9))) &&
     (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / SQRT(dVar9);
    dVar7 = dVar6 * dVar9;
    dVar8 = dVar5 * dVar9;
    dVar10 = dVar4 * dVar9;
  }
  *param_1 = dVar1;
  param_1[1] = dVar2;
  param_1[2] = dVar3;
  param_1[3] = 0.0;
  param_1[4] = dVar8;
  param_1[5] = dVar10;
  param_1[6] = dVar7;
  param_1[7] = 0.0;
  param_1[8] = dVar2 * dVar7 - dVar10 * dVar3;
  param_1[9] = dVar3 * dVar8 - dVar7 * dVar1;
  param_1[10] = dVar1 * dVar10 - dVar8 * dVar2;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 144a91046 FUN_144a91046 body=477 status=ok
// SIG undefined FUN_144a91046(void)

double FUN_144a91046(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar1 = param_1[5];
  dVar2 = param_1[10];
  dVar3 = param_1[0xf];
  dVar13 = param_1[0xb];
  dVar4 = param_1[0xe];
  dVar11 = dVar2 * dVar3 - dVar4 * dVar13;
  dVar5 = param_1[9];
  dVar6 = param_1[6];
  dVar7 = param_1[7];
  dVar10 = dVar6 * dVar3 - dVar4 * dVar7;
  dVar8 = param_1[2];
  dVar9 = param_1[3];
  dVar14 = dVar3 * dVar8 - dVar4 * dVar9;
  dVar3 = param_1[0xd];
  dVar12 = dVar6 * dVar13 - dVar2 * dVar7;
  dVar4 = param_1[1];
  dVar13 = dVar13 * dVar8 - dVar2 * dVar9;
  dVar2 = dVar8 * dVar7 - dVar6 * dVar9;
  return ((dVar3 * dVar2 + (dVar10 * dVar4 - dVar14 * dVar1)) * param_1[8] +
         ((dVar3 * dVar12 + (dVar1 * dVar11 - dVar10 * dVar5)) * *param_1 -
         (dVar3 * dVar13 + (dVar11 * dVar4 - dVar14 * dVar5)) * param_1[4])) -
         (dVar2 * dVar5 + (dVar12 * dVar4 - dVar13 * dVar1)) * param_1[0xc];
}



// FUNCTION 144a91224 FUN_144a91224 body=428 status=ok
// SIG undefined FUN_144a91224(void)

bool FUN_144a91224(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar9 = param_2[6];
    uVar10 = param_2[7];
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar12 = *(undefined8 *)(lVar1 + 0x18);
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    uVar14 = *(undefined8 *)(lVar1 + 0x28);
    uVar15 = *(undefined8 *)(lVar1 + 0x30);
    uVar16 = *(undefined8 *)(lVar1 + 0x38);
    uVar17 = *(undefined8 *)(lVar1 + 0x48);
    param_2[6] = *(undefined8 *)(lVar1 + 0x40);
    param_2[7] = uVar17;
    param_2[4] = uVar15;
    param_2[5] = uVar16;
    param_2[2] = uVar13;
    param_2[3] = uVar14;
    *param_2 = uVar11;
    param_2[1] = uVar12;
    *(undefined8 *)(lVar1 + 0x40) = uVar9;
    *(undefined8 *)(lVar1 + 0x48) = uVar10;
    *(undefined8 *)(lVar1 + 0x30) = uVar7;
    *(undefined8 *)(lVar1 + 0x38) = uVar8;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    *(undefined8 *)(lVar1 + 0x18) = uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_98 = *(longlong *)(lVar1 + 0x10);
    uStack_50 = *(undefined8 *)(lVar1 + 0x18);
    local_88 = *(longlong **)(lVar1 + 0x20);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    local_38 = *(undefined8 *)(lVar1 + 0x30);
    uStack_30 = *(undefined8 *)(lVar1 + 0x38);
    local_28 = *(undefined8 *)(lVar1 + 0x40);
    uStack_20 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = local_28;
    uVar8 = uStack_20;
    uVar5 = local_38;
    uVar6 = uStack_30;
    local_48 = local_88;
    uVar4 = uStack_40;
    local_58 = local_98;
    uVar3 = uStack_50;
    *(ulonglong *)(lVar1 + 0x40) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(lVar1 + 0x30) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_8c,uStack_90);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_50 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar6;
    local_28 = uVar7;
    uStack_20 = uVar8;
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        plVar18 = (longlong *)(lVar2 + 0x30);
        if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar2 + 0x20);
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a913d2 FUN_144a913d2 body=289 status=ok
// SIG undefined FUN_144a913d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a913d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15828) {
    FUN_144b3d300(&DAT_14ca15828);
    if (DAT_14ca15828 == -1) {
      FUN_14158e728();
      FUN_145efab04();
      FUN_140db5666(&DAT_14ca15780,0,&DAT_14ca15718,L"FCalculateSafeRasterizerArgs_CS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",
                    L"CalculateSafeRasterizerArgs",5,2,FUN_14725300a,FUN_147252faa,&LAB_1462eed30,
                    &LAB_147252fa6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca18018);
      _DAT_14ca15780 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a5af);
      _Init_thread_footer(&DAT_14ca15828);
    }
  }
  return &DAT_14ca15780;
}



// FUNCTION 144a914f4 FUN_144a914f4 body=289 status=ok
// SIG undefined FUN_144a914f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a914f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16a10) {
    FUN_144b3d300(&DAT_14ca16a10);
    if (DAT_14ca16a10 == -1) {
      FUN_14158e82c();
      FUN_145efaec8();
      FUN_140db5666(&DAT_14ca16968,0,&DAT_14ca16900,L"FNaniteFeedbackStatusCS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"FeedbackStatus",5,1,
                    FUN_147254a7e,FUN_147254a1e,&LAB_1462eed80,&LAB_147254a1a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca18690);
      _DAT_14ca16968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e26de9);
      _Init_thread_footer(&DAT_14ca16a10);
    }
  }
  return &DAT_14ca16968;
}



// FUNCTION 144a91616 FUN_144a91616 body=289 status=ok
// SIG undefined FUN_144a91616(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a91616(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ccca0) {
    FUN_144b3d300(&DAT_14c9ccca0);
    if (DAT_14c9ccca0 == -1) {
      FUN_141594990();
      FUN_145f130a0();
      FUN_140db5666(&DAT_14c9ccbf8,0,&DAT_14c9ccb90,L"FPropagateMipDistanceCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldMip.usf",
                    L"PropagateMipDistanceCS",5,4,FUN_14715b2a0,FUN_14715b240,&LAB_1462c2058,
                    &LAB_14715b23c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9cec88);
      _DAT_14c9ccbf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03e7c);
      _Init_thread_footer(&DAT_14c9ccca0);
    }
  }
  return &DAT_14c9ccbf8;
}



// FUNCTION 144a91738 FUN_144a91738 body=627 status=ok
// SIG undefined FUN_144a91738(void)

longlong * FUN_144a91738(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_3 + 0x28);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x20);
  *(undefined2 *)((longlong)param_1 + 0x11) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  param_1[3] = *(longlong *)(param_3 + 0x30);
  param_1[0x24] = 0;
  param_1[0x25] = 0x800000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x800000000;
  param_1[0x38] = 0;
  lVar2 = *(longlong *)(param_3 + 0x40);
  param_1[0x3a] = lVar2;
  param_1[0x3c] = 0;
  if (lVar2 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x60);
    if (*(undefined8 **)(param_3 + 0x50) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_3 + 0x50);
    }
    (**(code **)*puVar6)(puVar6,param_1 + 0x3c);
  }
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  if (*(longlong *)(param_3 + 0x80) != 0) {
    FUN_14690279c(param_1 + 4);
  }
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar7 = DAT_14c75ec34 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar7) {
      DVar5 = DAT_14c75ec34;
      DVar4 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar4;
    UNLOCK();
    if (bVar7) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  *(int *)((longlong)lpTlsValue + 0x28) = *(int *)((longlong)lpTlsValue + 0x28) + 1;
  param_1[0x38] = *(longlong *)((longlong)lpTlsValue + 0x30);
  *(longlong *)((longlong)lpTlsValue + 0x30) = *param_1;
  iVar1 = *(int *)((longlong)lpTlsValue + 0x18);
  *(uint *)((longlong)lpTlsValue + 0x18) = iVar1 + 1U;
  if (*(uint *)((longlong)lpTlsValue + 0x1c) < iVar1 + 1U) {
    FUN_145f3c800((longlong *)((longlong)lpTlsValue + 0x10),iVar1);
  }
  *(longlong **)(*(longlong *)((longlong)lpTlsValue + 0x10) + (longlong)iVar1 * 8) = param_1;
  if (*param_1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c96413c) && (FUN_144b3d300(&DAT_14c96413c), DAT_14c96413c == -1)) {
      local_38 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bAllowNativeComponentClassOverrides",&local_29);
      DAT_14c964138 = local_29;
      _Init_thread_footer(&DAT_14c96413c);
    }
    if (DAT_14c964138 == '\x01') {
      pcVar3 = *(code **)(**(longlong **)(*param_1 + 0x10) + 0x378);
      if (pcVar3 != (code *)&DAT_14492694e) {
        (*pcVar3)(*(longlong **)(*param_1 + 0x10),param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144a919ac FUN_144a919ac body=289 status=ok
// SIG undefined FUN_144a919ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a919ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01f90) {
    FUN_144b3d300(&DAT_14ca01f90);
    if (DAT_14ca01f90 == -1) {
      FUN_1415a3140();
      FUN_145f7c1aa();
      FUN_140db5666(&DAT_14ca01ee8,0,&DAT_14ca01e80,L"FLumenCardCopyPS",
                    L"/Engine/Private/Lumen/SurfaceCache/LumenSurfaceCache.usf",L"LumenCardCopyPS",3
                    ,10,FUN_1472218fe,FUN_14722189e,&LAB_1462e73a6,&LAB_14722189a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca06098);
      _DAT_14ca01ee8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db5393);
      _Init_thread_footer(&DAT_14ca01f90);
    }
  }
  return &DAT_14ca01ee8;
}



// FUNCTION 144a91ace FUN_144a91ace body=108 status=ok
// SIG undefined FUN_144a91ace(void)

undefined * FUN_144a91ace(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caff428) {
    FUN_144b3d300(&DAT_14caff428);
    if (DAT_14caff428 == -1) {
      FUN_145f8e32a(&DAT_14caff3a0);
      atexit((_func_5014 *)&LAB_1436691a2);
      _Init_thread_footer(&DAT_14caff428);
    }
  }
  return &DAT_14caff3a0;
}



// FUNCTION 144a91b3a FUN_144a91b3a body=258 status=ok
// SIG undefined FUN_144a91b3a(void)

void FUN_144a91b3a(void)

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
              0x110) < DAT_14ca183c8) {
    FUN_144b3d300(&DAT_14ca183c8);
    if (DAT_14ca183c8 == -1) {
      FUN_145f8f6d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x543;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18348,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2770b);
      _Init_thread_footer(&DAT_14ca183c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a91c3e FUN_144a91c3e body=258 status=ok
// SIG undefined FUN_144a91c3e(void)

void FUN_144a91c3e(void)

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
              0x110) < DAT_14ca91850) {
    FUN_144b3d300(&DAT_14ca91850);
    if (DAT_14ca91850 == -1) {
      FUN_145f98bc8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x6e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca917d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8c39);
      _Init_thread_footer(&DAT_14ca91850);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a91d42 FUN_144a91d42 body=258 status=ok
// SIG undefined FUN_144a91d42(void)

void FUN_144a91d42(void)

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
              0x110) < DAT_14ca184d8) {
    FUN_144b3d300(&DAT_14ca184d8);
    if (DAT_14ca184d8 == -1) {
      FUN_1415aa2c4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x579;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18458,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27723);
      _Init_thread_footer(&DAT_14ca184d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a91e46 FUN_144a91e46 body=423 status=ok
// SIG undefined FUN_144a91e46(void)

undefined * FUN_144a91e46(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14cae9758) {
    FUN_144b3d300(&DAT_14cae9758);
    if (DAT_14cae9758 == -1) {
      FUN_145fce420(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LocalVF";
      local_78 = L"FLocalVertexFactoryUniformShaderParameters";
      local_50 = 0x40;
      local_58 = 0x13;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae96d8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435668c3);
      _Init_thread_footer(&DAT_14cae9758);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae96d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a91fee FUN_144a91fee body=122 status=ok
// SIG undefined FUN_144a91fee(void)

undefined8 * FUN_144a91fee(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if ((int)sVar2 != 0) {
      local_24 = 0;
      local_30 = param_2;
      local_28 = (int)sVar2;
      uVar1 = FUN_14001a6c0(&local_30,1);
      uVar3 = CONCAT44(param_3,uVar1);
      goto LAB_144a92040;
    }
  }
  uVar3 = 0;
LAB_144a92040:
  *param_1 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a9206a FUN_144a9206a body=423 status=ok
// SIG undefined FUN_144a9206a(void)

undefined * FUN_144a9206a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14ca43448) {
    FUN_144b3d300(&DAT_14ca43448);
    if (DAT_14ca43448 == -1) {
      FUN_145fedcf6(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"PrimitiveFade";
      local_78 = L"FDistanceCullFadeUniformShaderParameters";
      local_50 = 0x10;
      local_58 = 0x16;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca433c8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f96d46);
      _Init_thread_footer(&DAT_14ca43448);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca433c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a92212 FUN_144a92212 body=423 status=ok
// SIG undefined FUN_144a92212(void)

undefined * FUN_144a92212(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14ca434e0) {
    FUN_144b3d300(&DAT_14ca434e0);
    if (DAT_14ca434e0 == -1) {
      FUN_145fedde4(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"PrimitiveDither";
      local_78 = L"FDitherUniformShaderParameters";
      local_50 = 0x10;
      local_58 = 0x1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43460,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f96d52);
      _Init_thread_footer(&DAT_14ca434e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca43460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a923ba FUN_144a923ba body=167 status=ok
// SIG undefined FUN_144a923ba(void)

void FUN_144a923ba(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((*(uint *)(param_1 + 2) & param_3) == 0) {
    param_2[1] = 0;
    lVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 2) & param_3 - 1;
    uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar5 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar1 = *param_1;
    uVar4 = (ulonglong)*(ushort *)(lVar1 + uVar5 * 6);
    lVar2 = 0;
    if (uVar4 != 0xffff) {
      lVar2 = lVar1 + uVar4;
    }
    lVar2 = (ulonglong)*(byte *)(lVar1 + 4 + uVar5 * 6) + lVar2;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar1 + 5 + uVar5 * 6);
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 144a92462 FUN_144a92462 body=287 status=ok
// SIG undefined FUN_144a92462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a92462(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90e58) {
    FUN_144b3d300(&DAT_14ca90e58);
    if (DAT_14ca90e58 == -1) {
      uVar1 = FUN_144a8b47e();
      FUN_14600bb1a();
      FUN_140db5666(&DAT_14ca90db0,0,&DAT_14ca90d48,L"FPixelShaderUtils::FRasterizeToRectsVS",
                    L"/Engine/Private/RenderGraphUtilities.usf",L"RasterizeToRectsVS",0,2,
                    FUN_147421fb6,FUN_147421f5c,&LAB_147421f44,&LAB_147421f40,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca90db0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f82b5);
      _Init_thread_footer(&DAT_14ca90e58);
    }
  }
  return &DAT_14ca90db0;
}



// FUNCTION 144a92582 FUN_144a92582 body=11 status=ok
// SIG undefined FUN_144a92582(void)

bool FUN_144a92582(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x3c8) == param_2;
}



// FUNCTION 144a9258d FUN_144a9258d body=423 status=ok
// SIG undefined FUN_144a9258d(void)

undefined * FUN_144a9258d(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14ca44f90) {
    FUN_144b3d300(&DAT_14ca44f90);
    if (DAT_14ca44f90 == -1) {
      FUN_14602e990(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"SubstratePublic";
      local_78 = L"FSubstratePublicGlobalUniformParameters";
      local_50 = 0x40;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44f10,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fd17db);
      _Init_thread_footer(&DAT_14ca44f90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca44f10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a92736 FUN_144a92736 body=427 status=ok
// SIG undefined FUN_144a92736(void)

undefined * FUN_144a92736(void)

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
              0x110) < DAT_14c9e54a0) {
    FUN_144b3d300(&DAT_14c9e54a0);
    if (DAT_14c9e54a0 == -1) {
      FUN_146030446(local_20);
      local_60 = "Unknown";
      local_68 = L"BatchedPrimitive";
      local_70 = L"BatchedPrimitive";
      local_78 = L"FBatchedPrimitiveParameters";
      local_30 = 2;
      local_38 = 0;
      local_40 = 0;
      local_50 = 0x10;
      local_58 = 0x1c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5420,1,3);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cc5af4);
      _Init_thread_footer(&DAT_14c9e54a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e5420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a928e2 FUN_144a928e2 body=207 status=ok
// SIG undefined FUN_144a928e2(void)

float * FUN_144a928e2(float *param_1,double *param_2)

{
  *param_1 = (float)*param_2;
  param_1[1] = (float)param_2[1];
  param_1[2] = (float)param_2[2];
  param_1[3] = (float)param_2[3];
  param_1[4] = (float)param_2[4];
  param_1[5] = (float)param_2[5];
  param_1[6] = (float)param_2[6];
  param_1[7] = (float)param_2[7];
  param_1[8] = (float)param_2[8];
  param_1[9] = (float)param_2[9];
  param_1[10] = (float)param_2[10];
  param_1[0xb] = (float)param_2[0xb];
  param_1[0xc] = (float)param_2[0xc];
  param_1[0xd] = (float)param_2[0xd];
  param_1[0xe] = (float)param_2[0xe];
  param_1[0xf] = (float)param_2[0xf];
  return param_1;
}



// FUNCTION 144a929b2 FUN_144a929b2 body=281 status=ok
// SIG undefined FUN_144a929b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a929b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05f28) {
    FUN_144b3d300(&DAT_14cb05f28);
    if (DAT_14cb05f28 == -1) {
      FUN_146041606();
      FUN_140db5666(&DAT_14cb05e80,0,&DAT_14cb05e18,L"FSimpleElementVS",
                    L"/Engine/Private/SimpleElementVertexShader.usf",L"Main",0,1,FUN_147d13f62,
                    FUN_147d13f3a,&LAB_147d13f36,&LAB_147d13f32,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14cb05e80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436b0af0);
      _Init_thread_footer(&DAT_14cb05f28);
    }
  }
  return &DAT_14cb05e80;
}



// FUNCTION 144a92acc FUN_144a92acc body=281 status=ok
// SIG undefined FUN_144a92acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a92acc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f580) {
    FUN_144b3d300(&DAT_14cb0f580);
    if (DAT_14cb0f580 == -1) {
      FUN_14604182e();
      FUN_140db5666(&DAT_14cb0f4d8,0,&DAT_14cb0f470,L"FWriteToSliceVS",
                    L"/Engine/Private/TranslucentLightingShaders.usf",L"WriteToSliceMainVS",0,1,
                    FUN_147da53e2,FUN_147da53ba,&LAB_147da53a2,&LAB_147da539e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14cb0f4d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14377f5fa);
      _Init_thread_footer(&DAT_14cb0f580);
    }
  }
  return &DAT_14cb0f4d8;
}



// FUNCTION 144a92be6 FUN_144a92be6 body=284 status=ok
// SIG undefined FUN_144a92be6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a92be6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f87b8) {
    FUN_144b3d300(&DAT_14c9f87b8);
    if (DAT_14c9f87b8 == -1) {
      FUN_1460438b6();
      FUN_140db5666(&DAT_14c9f8710,2,&DAT_14c9f86a8,L"FLumenCardCS",
                    L"/Engine/Private/Lumen/LumenCardComputeShader.usf",L"Main",5,1,FUN_1472048a8,
                    FUN_147204880,&LAB_14176b2ca,&LAB_14720487c,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14c9f8710 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142d650ba);
      _Init_thread_footer(&DAT_14c9f87b8);
    }
  }
  return &DAT_14c9f8710;
}



// FUNCTION 144a92d02 FUN_144a92d02 body=18 status=ok
// SIG undefined FUN_144a92d02(void)

undefined4 FUN_144a92d02(longlong param_1)

{
  if (*(undefined4 **)(param_1 + 0x148) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0x148);
  }
  return 0;
}



// FUNCTION 144a92d14 FUN_144a92d14 body=19 status=ok
// SIG undefined FUN_144a92d14(void)

undefined4 FUN_144a92d14(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 4);
  }
  return 0;
}



// FUNCTION 144a92d28 FUN_144a92d28 body=423 status=ok
// SIG undefined FUN_144a92d28(void)

undefined * FUN_144a92d28(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14cae1ba0) {
    FUN_144b3d300(&DAT_14cae1ba0);
    if (DAT_14cae1ba0 == -1) {
      FUN_14606104a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RadixSortUB";
      local_78 = L"FRadixSortParameters";
      local_50 = 0x20;
      local_58 = 0x36;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae1b20,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143519d23);
      _Init_thread_footer(&DAT_14cae1ba0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae1b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a92ed0 FUN_144a92ed0 body=1358 status=ok
// SIG undefined FUN_144a92ed0(void)

void FUN_144a92ed0(longlong *param_1,int param_2,int *param_3,uint param_4,int param_5,
                  undefined4 param_6,ulonglong param_7,uint param_8,undefined8 *param_9)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  int *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  ulonglong local_f8;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar7 = *(undefined8 *)(*param_1 + 0x10);
  if (((char)param_4 < '\0') && (DAT_14c760b28 == 0)) {
    FUN_14488df26(param_7);
    local_50 = 0;
    local_d8 = 1;
    if (((param_4 >> 0xb & 1) == 0) && (DAT_14ca81480 == 0)) {
      local_d8 = *(int *)((longlong)param_1 + 0xc);
    }
    iStack_dc = 1;
    if (DAT_14ca81480 == 0) {
      iStack_dc = (int)param_1[1];
    }
    iStack_e4 = 0;
    iStack_e0 = 0;
    local_98 = *(undefined8 *)param_3;
    local_60 = 0;
    uStack_90 = 0;
    local_88 = param_3[4];
    iStack_84 = param_3[5];
    iStack_80 = param_3[6];
    iStack_7c = param_3[7];
    local_78 = param_3[8];
    iStack_74 = param_3[9];
    iStack_70 = param_3[10];
    iStack_6c = param_3[0xb];
    local_68 = *(ulonglong *)(param_3 + 0xc);
    local_100 = param_9;
    local_108 = &local_50;
    local_110 = (int *)0x0;
    local_118 = CONCAT44(local_118._4_4_,param_6);
    local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_5);
    local_128 = CONCAT44(local_128._4_4_,param_6);
    local_f8 = local_f8 & 0xffffffffffffff00;
    local_e8 = param_2;
    iVar3 = FUN_140a6e850(uVar7);
    if (iVar3 < 0) {
      local_120 = &local_a8;
      local_a8 = 0;
      uStack_a0 = 0;
      local_128 = 0;
      FUN_145763094(iVar3,
                    "Adapter->CreateCommittedResource(Desc, GetGPUMask(), HeapProps, InCreateState, InResourceStateMode, InCreateState, nullptr, &NewResource, Name, false)"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Allocation.cpp",0x5f4);
    }
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar5 = local_50;
  }
  else {
    if ((param_4 >> 0x16 & 1) == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      local_e8 = *param_3;
      iStack_e4 = param_3[1];
      iStack_e0 = param_3[2];
      iStack_dc = param_3[3];
      local_d8 = param_3[4];
      iStack_d4 = param_3[5];
      iStack_d0 = param_3[6];
      iStack_cc = param_3[7];
      local_c8 = param_3[8];
      iStack_c4 = param_3[9];
      iStack_c0 = param_3[10];
      iStack_bc = param_3[0xb];
      uVar1 = (uint)*(ulonglong *)(param_3 + 0xc);
      local_68 = *(ulonglong *)(param_3 + 0xc);
      uVar10 = uVar1 & 0xfffffff7;
      if ((longlong)(int)param_1[3] != 0) {
        bVar6 = param_5 == 2;
        if (param_5 == 0) {
          bVar6 = SUB41((uVar1 & 4) >> 2,0);
        }
        lVar8 = 0;
        do {
          lVar4 = *(longlong *)(param_1[2] + lVar8);
          if (((param_4 >> 0xb & 1) == 0) || (*(int *)(lVar4 + 0x94) == 1)) {
            iVar3 = 1;
            if (bVar6 != false || 0x100 < param_8) {
              if (*(int *)(lVar4 + 0xb8) != 0) {
                iVar3 = 0;
                goto LAB_144a92fcc;
              }
              if ((*(int *)(lVar4 + 0x98) != param_2) || (*(int *)(lVar4 + 0x9c) != 0xc0))
              goto LAB_144a93051;
LAB_144a93066:
              if (lVar4 != 0) goto LAB_144a93072;
              break;
            }
LAB_144a92fcc:
            if ((*(int *)(lVar4 + 0x98) == param_2) &&
               ((*(int *)(lVar4 + 0x9c) != 0 && (*(uint *)(lVar4 + 0xa0) == uVar10)))) {
              iVar9 = 8;
              if ((param_4 & 8) == 0) {
                iVar9 = 0xac3;
              }
              if (param_2 == 3) {
                iVar9 = 0x400;
              }
              if ((param_4 >> 0xd & 1) != 0) {
                iVar9 = 0x400000;
              }
              if ((*(int *)(lVar4 + 0xa4) == iVar9) && (*(int *)(lVar4 + 0xb8) == iVar3))
              goto LAB_144a93066;
            }
          }
LAB_144a93051:
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)param_1[3] * 8 != lVar8);
      }
      local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_8);
      local_128 = CONCAT44(local_128._4_4_,param_5);
      lVar4 = FUN_146061fcc(param_1,param_2,uVar10,param_4);
LAB_144a93072:
      local_60 = 0;
      local_88 = local_d8;
      iStack_84 = iStack_d4;
      iStack_80 = iStack_d0;
      iStack_7c = iStack_cc;
      local_78 = local_c8;
      iStack_74 = iStack_c4;
      iStack_70 = iStack_c0;
      iStack_6c = iStack_bc;
      local_98 = CONCAT44(iStack_e4,local_e8);
      uStack_90 = CONCAT44(iStack_dc,iStack_e0);
      local_68 = local_68 & 0xfffffffffffffff7;
      local_128 = CONCAT44(iStack_d4,local_d8);
      uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x88) + 8);
      if ((code *)**(undefined8 **)(lVar4 + 0x80) == FUN_1400dec70) {
        local_f8 = param_7;
        local_100 = param_9;
        local_110 = (int *)CONCAT44(local_110._4_4_,param_6);
        local_118 = CONCAT44(local_118._4_4_,param_5);
        local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_8);
        local_108 = (undefined8 *)0x0;
        FUN_1400dec70(lVar4 + 0x80,uVar2,param_2,&local_98);
      }
      else {
        local_f8 = param_7;
        local_100 = param_9;
        local_110 = (int *)CONCAT44(local_110._4_4_,param_6);
        local_118 = CONCAT44(local_118._4_4_,param_5);
        local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_8);
        local_108 = (undefined8 *)0x0;
        (*(code *)**(undefined8 **)(lVar4 + 0x80))(lVar4 + 0x80,uVar2,param_2,&local_98);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
      goto LAB_144a9313f;
    }
    FUN_14488df26(param_7);
    local_110 = &local_e8;
    local_e8 = 0;
    iStack_e4 = 0;
    local_60 = 0x20000;
    local_98 = *(undefined8 *)param_3;
    local_88 = param_3[4];
    iStack_84 = param_3[5];
    iStack_80 = param_3[6];
    iStack_7c = param_3[7];
    local_78 = param_3[8];
    iStack_74 = param_3[9];
    iStack_70 = param_3[10];
    iStack_6c = param_3[0xb];
    local_68 = *(ulonglong *)(param_3 + 0xc);
    uStack_90 = (ulonglong)param_8;
    local_108 = param_9;
    local_118 = 0;
    local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_6);
    local_128 = CONCAT44(local_128._4_4_,param_5);
    local_100 = (undefined8 *)((ulonglong)local_100 & 0xffffffffffffff00);
    iVar3 = FUN_140387a5c(uVar7,&local_98,(int)param_1[1]);
    if (iVar3 < 0) {
      local_120 = &local_b8;
      local_b8 = 0;
      uStack_b0 = 0;
      local_128 = 0;
      FUN_145763094(iVar3,
                    "Adapter->CreateReservedResource(Desc, GetGPUMask(), InCreateState, InResourceStateMode, InCreateState, nullptr, &NewResource, Name, false)"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Allocation.cpp",0x605);
    }
    uVar7 = *(undefined8 *)(param_3 + 4);
    uVar5 = CONCAT44(iStack_e4,local_e8);
  }
  local_128 = 0;
  FUN_1400daf10(param_7,uVar5,uVar7,0);
LAB_144a9313f:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a93420 FUN_144a93420 body=232 status=ok
// SIG undefined FUN_144a93420(void)

void FUN_144a93420(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0xf8) + (longlong)param_3 * 0x20) == 0) {
    dwTlsIndex = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c75ec34 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar6) {
        DVar4 = DAT_14c75ec34;
        DVar3 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar3;
      UNLOCK();
      if (bVar6) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar4;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    uVar1 = *(undefined8 *)((longlong)lpTlsValue + 0x40);
    uVar2 = *(undefined8 *)((longlong)lpTlsValue + 0x48);
    *(longlong *)((longlong)lpTlsValue + 0x40) = param_1;
    lVar5 = *(longlong *)(param_1 + 0x298) + 8;
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar5 = 0;
    }
    *(longlong *)((longlong)lpTlsValue + 0x48) = lVar5;
    FUN_1415cb288(param_1,param_2,param_3);
    *(undefined8 *)((longlong)lpTlsValue + 0x40) = uVar1;
    *(undefined8 *)((longlong)lpTlsValue + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 144a93508 FUN_144a93508 body=287 status=ok
// SIG undefined FUN_144a93508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a93508(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2ec78) {
    FUN_144b3d300(&DAT_14cb2ec78);
    if (DAT_14cb2ec78 == -1) {
      uVar1 = FUN_14606da16();
      FUN_14606d8d0();
      FUN_140db5666(&DAT_14cb2ebd0,0,&DAT_14cb2eb68,L"FNiagaraUpdateMeshGPUSceneInstancesCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraUpdateMeshGPUSceneInstances.usf",
                    L"UpdateMeshInstancesCS",5,2,FUN_14804d40e,FUN_14804d3b4,&LAB_146460744,
                    &LAB_14804d3b0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2ebd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f9dea);
      _Init_thread_footer(&DAT_14cb2ec78);
    }
  }
  return &DAT_14cb2ebd0;
}



// FUNCTION 144a93628 FUN_144a93628 body=289 status=ok
// SIG undefined FUN_144a93628(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a93628(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa07b8) {
    FUN_144b3d300(&DAT_14caa07b8);
    if (DAT_14caa07b8 == -1) {
      FUN_1415ce670();
      FUN_14607043a();
      FUN_140db5666(&DAT_14caa0710,0,&DAT_14caa06a8,L"FRDGScatterCopyCS",
                    L"/Engine/Private/ByteBuffer.usf",L"ScatterCopyCS",5,0x14,FUN_14744286a,
                    FUN_14744280a,&LAB_14323c1ec,&LAB_14323c1e8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14caa0e10);
      _DAT_14caa0710 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323c243);
      _Init_thread_footer(&DAT_14caa07b8);
    }
  }
  return &DAT_14caa0710;
}



// FUNCTION 144a9374a FUN_144a9374a body=99 status=ok
// SIG undefined FUN_144a9374a(void)

void FUN_144a9374a(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
  lVar2 = 0x6c;
  do {
    puVar1 = (undefined8 *)(param_1 + -0xc + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x9c);
  lVar2 = 0x9c;
  do {
    puVar1 = (undefined8 *)(param_1 + -0xc + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xcc);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 144a937ae FUN_144a937ae body=258 status=ok
// SIG undefined FUN_144a937ae(void)

void FUN_144a937ae(void)

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
              0x110) < DAT_14c9e9fd0) {
    FUN_144b3d300(&DAT_14c9e9fd0);
    if (DAT_14c9e9fd0 == -1) {
      FUN_14607b538(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xa1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9f50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4779);
      _Init_thread_footer(&DAT_14c9e9fd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a938b2 FUN_144a938b2 body=281 status=ok
// SIG undefined FUN_144a938b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a938b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6f120) {
    FUN_144b3d300(&DAT_14ca6f120);
    if (DAT_14ca6f120 == -1) {
      FUN_14607c626();
      FUN_140db5666(&DAT_14ca6f078,0,&DAT_14ca6f010,
                    L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg >"
                    ,L"/Engine/Private/VirtualTextureCompress.usf",
                    L"CompressBaseColorNormalSpecularMaskYCoCgCS",5,1,FUN_147340142,FUN_1473400e8,
                    FUN_146316d0e,&LAB_1473400e4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14ca6f078 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14312024d);
      _Init_thread_footer(&DAT_14ca6f120);
    }
  }
  return &DAT_14ca6f078;
}



// FUNCTION 144a939cc FUN_144a939cc body=284 status=ok
// SIG undefined FUN_144a939cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a939cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e7de8) {
    FUN_144b3d300(&DAT_14c9e7de8);
    if (DAT_14c9e7de8 == -1) {
      FUN_14607e984();
      FUN_140db5666(&DAT_14c9e7d40,1,&DAT_14c9e7cd8,L"FLightFunctionAtlasSlotPS",
                    L"/Engine/Private/LightFunctionAtlas/LightFunctionAtlasRender.usf",L"Main",3,1,
                    FUN_1471d07e4,FUN_1471d078a,&LAB_142cddd5e,&LAB_1471d0786,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14c9e7d40 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142cddd66);
      _Init_thread_footer(&DAT_14c9e7de8);
    }
  }
  return &DAT_14c9e7d40;
}



// FUNCTION 144a93ae8 FUN_144a93ae8 body=567 status=ok
// SIG undefined FUN_144a93ae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_144a93ae8(longlong param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  puVar2 = *(ulonglong **)(uVar1 + 0x28);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2f758) && (FUN_144b3d300(&DAT_14cb2f758), DAT_14cb2f758 == -1)) {
    FUN_146087666();
    FUN_140db5666(&DAT_14cb2f6b0,3,&DAT_14cb2f648,L"FNiagaraShader",
                  L"/Plugin/FX/Niagara/Private/NiagaraEmitterInstanceShader.usf",L"SimulateMain",5,1
                  ,FUN_14804db30,FUN_14804db08,&LAB_14804db04,&LAB_14804db00,&LAB_14712ac0c,
                  &LAB_14712ac08,0xf8,0);
    _DAT_14cb2f6b0 = &PTR_FUN_14ad4b7e0;
    atexit((_func_5014 *)&LAB_1438fa290);
    _Init_thread_footer(&DAT_14cb2f758);
  }
  uVar4 = (DAT_14cb2f6d8 ^ (longlong)param_3) * -0x622015f714c7d297;
  lVar5 = (uVar4 >> 0x2f ^ (longlong)param_3 ^ uVar4) * -0x622015f714c7d297;
  uVar4 = puVar2[3];
  if ((uVar4 & 1) != 0) {
    uVar4 = (longlong)puVar2 + ((longlong)uVar4 >> 0x18) + 0x18;
  }
  uVar3 = puVar2[5];
  if ((uVar3 & 1) != 0) {
    uVar3 = (longlong)puVar2 + ((longlong)uVar3 >> 0x18) + 0x28;
  }
  uVar6 = puVar2[1];
  if ((uVar6 & 1) != 0) {
    uVar6 = (longlong)puVar2 + ((longlong)uVar6 >> 0x18) + 8;
  }
  uVar8 = *puVar2;
  if ((uVar8 & 1) != 0) {
    uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
  }
  uVar7 = *(uint *)(uVar8 + (ulonglong)
                            ((uint)puVar2[2] &
                             ((uint)((ulonglong)lVar5 >> 0x2f) ^ (uint)lVar5) * 0x2d69 & 0xffff) * 4
                   );
  if (uVar7 == 0xffffffff) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar9 = (ulonglong)uVar7;
      if ((*(ulonglong *)(uVar4 + uVar9 * 8) == DAT_14cb2f6d8) &&
         (*(int *)(uVar3 + uVar9 * 4) == param_3)) {
        uVar4 = puVar2[7];
        if ((uVar4 & 1) != 0) {
          uVar4 = (longlong)(puVar2 + 7) + ((longlong)uVar4 >> 0x18);
        }
        uVar8 = *(ulonglong *)(uVar4 + (longlong)(int)uVar7 * 8);
        if ((uVar8 & 1) != 0) {
          uVar8 = ((longlong)uVar8 >> 0x18) + uVar4 + (longlong)(int)uVar7 * 8;
        }
        break;
      }
      uVar7 = *(uint *)(uVar6 + uVar9 * 4);
    } while (uVar7 != 0xffffffff);
  }
  *param_2 = uVar8;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 144a93d20 FUN_144a93d20 body=292 status=ok
// SIG undefined FUN_144a93d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a93d20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca164e0) {
    FUN_144b3d300(&DAT_14ca164e0);
    if (DAT_14ca164e0 == -1) {
      FUN_145c7735c();
      FUN_1460959b2();
      FUN_140db5666(&DAT_14ca16438,1,&DAT_14ca163d0,L"FHWRasterizeMS",
                    L"/Engine/Private/Nanite/NaniteRasterizer.usf",L"HWRasterizeMS",1,0x100,
                    FUN_147254368,FUN_147254308,FUN_1402a6892,&LAB_147254304,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,&DAT_14ca184e0);
      _DAT_14ca16438 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a675);
      _Init_thread_footer(&DAT_14ca164e0);
    }
  }
  return &DAT_14ca16438;
}



// FUNCTION 144a93e44 FUN_144a93e44 body=292 status=ok
// SIG undefined FUN_144a93e44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a93e44(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16608) {
    FUN_144b3d300(&DAT_14ca16608);
    if (DAT_14ca16608 == -1) {
      FUN_145c7735c();
      FUN_146095afc();
      FUN_140db5666(&DAT_14ca16560,1,&DAT_14ca164f8,L"FHWRasterizePS",
                    L"/Engine/Private/Nanite/NaniteRasterizer.usf",L"HWRasterizePS",3,0x100,
                    FUN_14725443c,FUN_1472543dc,FUN_141771b86,&LAB_1472543d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,&DAT_14ca184e0);
      _DAT_14ca16560 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142e0a681);
      _Init_thread_footer(&DAT_14ca16608);
    }
  }
  return &DAT_14ca16560;
}



// FUNCTION 144a93f68 FUN_144a93f68 body=14 status=ok
// SIG undefined FUN_144a93f68(void)

longlong FUN_144a93f68(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return *(longlong *)(param_1 + 0x40);
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    if (*(code **)(*plVar3 + 0x180) != FUN_1447210f0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_98);
    }
    if ((((*(uint *)(plVar3 + 1) & 0x10) == 0) && (lVar5 = plVar3[4], lVar5 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          ppcStack_40 = &pcStack_20;
          pcStack_20 = (code *)&LAB_14355090c;
          pcStack_30 = FUN_14081d0ea;
          pcStack_38 = FUN_14081d0ea;
          puStack_48 = &LAB_147b8e16d;
          pcStack_50 = (code *)&LAB_140810a38;
          pwStack_58 = L"Engine";
          uStack_60 = 0x800000000;
          uStack_68 = 0x10000000;
          uStack_70 = 8;
          uStack_78 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar5 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          ppcStack_40 = &pcStack_20;
          pcStack_20 = FUN_1449e2820;
          pcStack_30 = FUN_14081d0ea;
          pcStack_38 = FUN_14081d0ea;
          puStack_48 = &LAB_1468c5283;
          pcStack_50 = FUN_142809da0;
          pwStack_58 = L"Engine";
          uStack_60 = 0x400000000;
          uStack_68 = 0x10000000;
          uStack_70 = 8;
          uStack_78 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar4 = plVar3[4];
        if (lVar4 != 0) {
          iVar2 = *(int *)(lVar5 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
               (lVar6 = lVar4,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
               lVar5 + 0x30)) {
              lVar6 = 0;
            }
          } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
          if (lVar6 != 0) {
            lVar5 = *(longlong *)(lVar6 + 0xc0);
            goto LAB_14475ed7d;
          }
        }
      }
    }
  }
  lVar5 = 0;
LAB_14475ed7d:
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a93f76 FUN_144a93f76 body=1035 status=ok
// SIG undefined FUN_144a93f76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_144a93f76(longlong *param_1,ulonglong *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulonglong *puVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  
  bVar1 = *param_3;
  bVar2 = param_3[4];
  iVar4 = *(int *)(param_3 + 0xc);
  bVar3 = param_3[8];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca15a78) && (FUN_144b3d300(&DAT_14ca15a78), DAT_14ca15a78 == -1)) {
    FUN_144a94382();
    FUN_146105c1e();
    FUN_140db5666(&DAT_14ca159d0,0,&DAT_14ca15968,L"FRasterBinBuild_CS",
                  L"/Engine/Private/Nanite/NaniteRasterBinning.usf",L"RasterBinBuild",5,0x10,
                  FUN_147253486,FUN_147253426,&LAB_142e0a5cc,&LAB_142e0a5c8,&LAB_14712ac0c,
                  &LAB_14712ac08,0xe0,&DAT_14ca18128);
    _DAT_14ca159d0 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142e0a606);
    _Init_thread_footer(&DAT_14ca15a78);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)DAT_14ca15a00 + (int)((ulonglong)DAT_14ca15a00 >> 0x20) * 0x17) * 4);
    if (iVar7 != -1) {
      uVar6 = (uint)bVar3 * 4 + (uint)(iVar4 == 1) * 8 + (uint)bVar2 * 2 | (uint)bVar1;
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar8 == DAT_14ca15a00) {
          uVar12 = 0;
          if (plVar8 != (longlong *)0x0) {
            uVar10 = 0;
            if ((ulonglong *)(plVar8 + 1) == (ulonglong *)0x0) goto LAB_144a9415c;
            uVar10 = plVar8[1];
            puVar5 = *(ulonglong **)(uVar10 + 0x28);
            uVar12 = (DAT_14ca159f8 ^ uVar6) * -0x622015f714c7d297;
            lVar13 = (uVar12 >> 0x2f ^ uVar6 ^ uVar12) * -0x622015f714c7d297;
            uVar12 = puVar5[3];
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)puVar5 + ((longlong)uVar12 >> 0x18) + 0x18;
            }
            uVar11 = puVar5[5];
            if ((uVar11 & 1) != 0) {
              uVar11 = (longlong)puVar5 + ((longlong)uVar11 >> 0x18) + 0x28;
            }
            uVar14 = puVar5[1];
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar5 + ((longlong)uVar14 >> 0x18) + 8;
            }
            uVar9 = *puVar5;
            if ((uVar9 & 1) != 0) {
              uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar5;
            }
            uVar15 = *(uint *)(uVar9 + (ulonglong)
                                       ((uint)puVar5[2] &
                                        ((uint)((ulonglong)lVar13 >> 0x2f) ^ (uint)lVar13) * 0x2d69
                                       & 0xffff) * 4);
            if (uVar15 != 0xffffffff) {
              goto LAB_144a9410f;
            }
          }
          break;
        }
        iVar7 = (int)plVar8[2];
      } while (iVar7 != -1);
    }
  }
  goto LAB_144a9412a;
  while (uVar15 = *(uint *)(uVar14 + uVar9 * 4), uVar15 != 0xffffffff) {
LAB_144a9410f:
    uVar9 = (ulonglong)uVar15;
    if ((*(ulonglong *)(uVar12 + uVar9 * 8) == DAT_14ca159f8) &&
       (*(uint *)(uVar11 + uVar9 * 4) == uVar6)) {
      uVar11 = puVar5[7];
      if ((uVar11 & 1) != 0) {
        uVar11 = (longlong)(puVar5 + 7) + ((longlong)uVar11 >> 0x18);
      }
      uVar12 = *(ulonglong *)(uVar11 + (longlong)(int)uVar15 * 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = ((longlong)uVar12 >> 0x18) + uVar11 + (longlong)(int)uVar15 * 8;
      }
      if (uVar12 != 0) goto LAB_144a9415c;
      break;
    }
  }
LAB_144a9412a:
  uVar12 = 0;
  uVar10 = 0;
LAB_144a9415c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca15a78) && (FUN_144b3d300(&DAT_14ca15a78), DAT_14ca15a78 == -1)) {
    FUN_144a94382();
    FUN_146105c1e();
    FUN_140db5666(&DAT_14ca159d0,0,&DAT_14ca15968,L"FRasterBinBuild_CS",
                  L"/Engine/Private/Nanite/NaniteRasterBinning.usf",L"RasterBinBuild",5,0x10,
                  FUN_147253486,FUN_147253426,&LAB_142e0a5cc,&LAB_142e0a5c8,&LAB_14712ac0c,
                  &LAB_14712ac08,0xe0,&DAT_14ca18128);
    _DAT_14ca159d0 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142e0a606);
    _Init_thread_footer(&DAT_14ca15a78);
  }
  *param_2 = uVar12;
  param_2[1] = uVar10;
  return param_2;
}



// FUNCTION 144a94382 FUN_144a94382 body=258 status=ok
// SIG undefined FUN_144a94382(void)

void FUN_144a94382(void)

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
              0x110) < DAT_14ca181a8) {
    FUN_144b3d300(&DAT_14ca181a8);
    if (DAT_14ca181a8 == -1) {
      FUN_1415d7fda(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x4dd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18128,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276db);
      _Init_thread_footer(&DAT_14ca181a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a94486 FUN_144a94486 body=323 status=ok
// SIG undefined FUN_144a94486(void)

double * FUN_144a94486(longlong param_1,double *param_2,double *param_3,double param_4,
                      double *param_5,undefined8 param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar8 = (ulonglong)*(int *)(param_1 + 0x38);
  if ((longlong)uVar8 < 1) {
    *param_7 = -1;
  }
  else {
    dVar1 = *param_5;
    dVar2 = *param_3;
    fVar10 = (float)(dVar1 * dVar2);
    pfVar9 = (float *)(*(longlong *)(param_1 + 0x30) + 8);
    uVar7 = 0xffffffff;
    fVar11 = -3.4028235e+38;
    uVar5 = 0;
    do {
      fVar12 = *pfVar9 * (float)(param_5[2] * param_3[2]) +
               pfVar9[-2] * fVar10 + pfVar9[-1] * (float)(param_5[1] * param_3[1]);
      if (fVar11 < fVar12) {
        uVar7 = uVar5 & 0xffffffff;
        fVar11 = fVar12;
      }
      uVar5 = uVar5 + 1;
      pfVar9 = pfVar9 + 3;
    } while (uVar8 != uVar5);
    iVar6 = (int)uVar7;
    *param_7 = iVar6;
    if (iVar6 != -1) {
      if ((param_4 == 0.0) && (!NAN(param_4))) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        lVar4 = (longlong)iVar6;
        fVar11 = *(float *)(lVar3 + 8 + lVar4 * 0xc);
        fVar10 = *(float *)(lVar3 + 4 + lVar4 * 0xc);
        dVar1 = param_5[2];
        dVar2 = param_5[1];
        *param_2 = (double)*(float *)(lVar3 + lVar4 * 0xc) * *param_5;
        param_2[1] = (double)fVar10 * dVar2;
        param_2[2] = (double)fVar11 * dVar1;
        return param_2;
      }
      FUN_14068b0c6(0,param_2,CONCAT44((int)((ulonglong)(dVar1 * dVar2) >> 0x20),fVar10),uVar8,
                    param_5,param_6);
      return param_2;
    }
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 144a945ca FUN_144a945ca body=1063 status=ok
// SIG undefined FUN_144a945ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_144a945ca(longlong *param_1,ulonglong *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulonglong *puVar7;
  int iVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  bVar10 = param_3[1];
  bVar1 = param_3[2];
  bVar2 = param_3[3];
  bVar3 = param_3[4];
  bVar4 = param_3[5];
  bVar5 = param_3[6];
  bVar6 = *param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e5828) && (FUN_144b3d300(&DAT_14c9e5828), DAT_14c9e5828 == -1)) {
    FUN_1415dd72e();
    FUN_146126510();
    FUN_140db5666(&DAT_14c9e5780,0,&DAT_14c9e5718,
                  L"FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs",
                  L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf",
                  L"InstanceCullBuildInstanceIdBufferCS",5,0x80,FUN_1471be560,FUN_1471be500,
                  &LAB_142cc5b4c,&LAB_142cc5b48,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6a80);
    _DAT_14c9e5780 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142cc5c11);
    _Init_thread_footer(&DAT_14c9e5828);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar9 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)DAT_14c9e57b0 + (int)((ulonglong)DAT_14c9e57b0 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      bVar10 = bVar10 * '\x02' | bVar6 |
               bVar5 << 6 | bVar4 << 5 | bVar3 << 4 | bVar1 << 2 | bVar2 << 3;
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*plVar9 == DAT_14c9e57b0) {
          uVar14 = 0;
          if (plVar9 != (longlong *)0x0) {
            uVar12 = 0;
            if ((ulonglong *)(plVar9 + 1) == (ulonglong *)0x0) goto LAB_144a947ca;
            uVar12 = plVar9[1];
            puVar7 = *(ulonglong **)(uVar12 + 0x28);
            uVar14 = (DAT_14c9e57a8 ^ bVar10) * -0x622015f714c7d297;
            lVar15 = (uVar14 >> 0x2f ^ bVar10 ^ uVar14) * -0x622015f714c7d297;
            uVar14 = puVar7[3];
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar7 + ((longlong)uVar14 >> 0x18) + 0x18;
            }
            uVar13 = puVar7[5];
            if ((uVar13 & 1) != 0) {
              uVar13 = (longlong)puVar7 + ((longlong)uVar13 >> 0x18) + 0x28;
            }
            uVar16 = puVar7[1];
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar7 + ((longlong)uVar16 >> 0x18) + 8;
            }
            uVar11 = *puVar7;
            if ((uVar11 & 1) != 0) {
              uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar7;
            }
            uVar17 = *(uint *)(uVar11 + (ulonglong)
                                        ((uint)puVar7[2] &
                                         ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar17 != 0xffffffff) {
              goto LAB_144a9477d;
            }
          }
          break;
        }
        iVar8 = (int)plVar9[2];
      } while (iVar8 != -1);
    }
  }
  goto LAB_144a94798;
  while (uVar17 = *(uint *)(uVar16 + uVar11 * 4), uVar17 != 0xffffffff) {
LAB_144a9477d:
    uVar11 = (ulonglong)uVar17;
    if ((*(ulonglong *)(uVar14 + uVar11 * 8) == DAT_14c9e57a8) &&
       (*(uint *)(uVar13 + uVar11 * 4) == (uint)bVar10)) {
      uVar13 = puVar7[7];
      if ((uVar13 & 1) != 0) {
        uVar13 = (longlong)(puVar7 + 7) + ((longlong)uVar13 >> 0x18);
      }
      uVar14 = *(ulonglong *)(uVar13 + (longlong)(int)uVar17 * 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = ((longlong)uVar14 >> 0x18) + uVar13 + (longlong)(int)uVar17 * 8;
      }
      if (uVar14 != 0) goto LAB_144a947ca;
      break;
    }
  }
LAB_144a94798:
  uVar14 = 0;
  uVar12 = 0;
LAB_144a947ca:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e5828) && (FUN_144b3d300(&DAT_14c9e5828), DAT_14c9e5828 == -1)) {
    FUN_1415dd72e();
    FUN_146126510();
    FUN_140db5666(&DAT_14c9e5780,0,&DAT_14c9e5718,
                  L"FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs",
                  L"/Engine/Private/InstanceCulling/BuildInstanceDrawCommands.usf",
                  L"InstanceCullBuildInstanceIdBufferCS",5,0x80,FUN_1471be560,FUN_1471be500,
                  &LAB_142cc5b4c,&LAB_142cc5b48,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6a80);
    _DAT_14c9e5780 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142cc5c11);
    _Init_thread_footer(&DAT_14c9e5828);
  }
  *param_2 = uVar14;
  param_2[1] = uVar12;
  return param_2;
}



// FUNCTION 144a949f2 FUN_144a949f2 body=281 status=ok
// SIG undefined FUN_144a949f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a949f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f6a8) {
    FUN_144b3d300(&DAT_14cb0f6a8);
    if (DAT_14cb0f6a8 == -1) {
      FUN_14612a512();
      FUN_140db5666(&DAT_14cb0f600,0,&DAT_14cb0f598,L"FWriteToSliceGS",
                    L"/Engine/Private/TranslucentLightingShaders.usf",L"WriteToSliceMainGS",4,1,
                    FUN_147da54f4,FUN_147da5496,&LAB_147da5452,&LAB_147da544e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb0f600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14377f606);
      _Init_thread_footer(&DAT_14cb0f6a8);
    }
  }
  return &DAT_14cb0f600;
}



// FUNCTION 144a94b0c FUN_144a94b0c body=796 status=ok
// SIG undefined FUN_144a94b0c(void)

void FUN_144a94b0c(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  wchar_t *local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  uint uVar8;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_2 + 0x1f8);
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2c4e8) && (FUN_144b3d300(&DAT_14cb2c4e8), DAT_14cb2c4e8 == -1)) {
    FUN_1415e0876(local_38);
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_70 = "Unknown";
    local_78 = 0;
    local_80 = L"NiagaraMeshVF";
    local_88 = L"FNiagaraMeshUniformParameters";
    local_60 = 0x230;
    local_68 = 0x52;
    local_58 = local_38;
    FUN_140b49562(&DAT_14cb2c468,1,1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438f5d0d);
    _Init_thread_footer(&DAT_14cb2c4e8);
  }
  uVar9 = *(ulonglong *)(param_1 + 0xa0);
  uVar6 = param_1 + 0xa0 + ((longlong)uVar9 >> 0x18);
  if ((uVar9 & 1) == 0) {
    uVar6 = uVar9;
  }
  if (0 < (int)*(uint *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar6 + lVar5 * 4) == DAT_14cb2c490) {
        uVar9 = *(ulonglong *)(param_1 + 0xb0);
        if ((uVar9 & 1) != 0) {
          uVar9 = ((longlong)uVar9 >> 0x18) + param_1 + 0xb0;
        }
        puVar10 = (ushort *)(uVar9 + lVar5);
        goto LAB_144a94c02;
      }
      lVar5 = lVar5 + 2;
    } while ((ulonglong)*(uint *)(param_1 + 0xa8) * 2 != lVar5);
  }
  puVar10 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_144a94c02:
  uVar1 = *puVar10;
  if (uVar1 != 0xffff) {
    puVar3 = (ulonglong *)*param_3;
    uVar9 = *puVar3;
    uVar6 = ((longlong)uVar9 >> 0x18) + (longlong)puVar3;
    if ((uVar9 & 1) == 0) {
      uVar6 = uVar9;
    }
    uVar8 = (uint)puVar3[1];
    uVar11 = 0;
    uVar12 = uVar8;
    if (8 < (int)uVar8) {
      uVar11 = 0;
      uVar13 = uVar8;
      do {
        uVar12 = uVar13 >> 1;
        if (*(ushort *)(uVar6 + (ulonglong)(uVar12 + uVar11) * 2) < uVar1) {
          uVar11 = uVar12 + uVar11 + (uVar13 & 1);
        }
        bVar4 = 0x11 < uVar13;
        uVar13 = uVar12;
      } while (bVar4);
    }
    uVar12 = uVar12 + uVar11 + 1;
    if ((int)uVar12 < (int)uVar8) {
      uVar8 = uVar12;
    }
    iVar7 = uVar8 - uVar11;
    if (iVar7 != 0 && (int)uVar11 <= (int)uVar8) {
      uVar9 = (ulonglong)uVar11;
      do {
        if (*(ushort *)(uVar6 + uVar9 * 2) == uVar1) {
          *(undefined8 *)(param_3[1] + (uVar9 & 0xffffffff) * 8) = uVar2;
          break;
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a94e2a FUN_144a94e2a body=11 status=ok
// SIG undefined FUN_144a94e2a(void)

void FUN_144a94e2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 144a94e35 FUN_144a94e35 body=831 status=ok
// SIG undefined FUN_144a94e35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a94e35(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 local_180;
  code *local_178;
  code *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [8];
  undefined8 auStack_b8 [12];
  undefined4 auStack_58 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memset(local_c0,0,0x98);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca026a8) {
    FUN_144b3d300(&DAT_14ca026a8);
    if (DAT_14ca026a8 == -1) {
      FUN_14614024e();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_147221da0;
      local_168 = FUN_14176e0d0;
      local_170 = FUN_147221da4;
      local_178 = FUN_147221dcc;
      local_190 = L"MainVS";
      local_198 = L"/Engine/Private/Lumen/LumenTranslucencyRadianceCacheMarkShaders.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 0;
      FUN_140db5666(&DAT_14ca02600,2,&DAT_14ca02598,L"FLumenTranslucencyRadianceCacheMarkVS");
      _DAT_14ca02600 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142db99a6);
      _Init_thread_footer(&DAT_14ca026a8);
    }
  }
  auStack_b8[DAT_14ca02648] = &DAT_14ca02600;
  auStack_58[DAT_14ca02648] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca027d0) {
    FUN_144b3d300(&DAT_14ca027d0);
    if (DAT_14ca027d0 == -1) {
      FUN_146140398();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_147221f6e;
      local_168 = FUN_14176e104;
      local_170 = FUN_147221f72;
      local_178 = FUN_147221f9a;
      local_190 = L"MainPS";
      local_198 = L"/Engine/Private/Lumen/LumenTranslucencyRadianceCacheMarkShaders.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 3;
      FUN_140db5666(&DAT_14ca02728,2,&DAT_14ca026c0,L"FLumenTranslucencyRadianceCacheMarkPS");
      _DAT_14ca02728 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142db99b2);
      _Init_thread_footer(&DAT_14ca027d0);
    }
  }
  auStack_b8[DAT_14ca02770] = &DAT_14ca02728;
  auStack_58[DAT_14ca02770] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,local_c0,param_2);
  if (cVar1 != '\0') {
    if (local_128 != 0) {
      *param_3 = local_128;
      param_3[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_4 = lStack_110;
      param_4[1] = local_138;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a95175 FUN_144a95175 body=1481 status=ok
// SIG undefined FUN_144a95175(void)

uint * FUN_144a95175(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_81;
  undefined1 *local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  ulonglong local_48;
  
  lVar3 = DAT_14ca1c600;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar7 = *(int *)(param_3 + 0x3020);
  uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  iVar15 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar15 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar15 == 2)) {
    uVar14 = 0;
  }
  else if (iVar15 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar14 = 1;
  }
  bVar4 = false;
  if (0 < *(int *)(lVar3 + uVar14 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar2 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = *(int *)(DAT_14ca1c618 + 4) != 0 && iVar7 != 3;
    }
  }
  uVar12 = *(uint *)(DAT_14ca1c630 + 4);
  uVar13 = 3;
  if ((int)uVar12 < 3) {
    uVar13 = uVar12;
  }
  uVar10 = 0;
  if (0 < (int)uVar13) {
    uVar10 = uVar13;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((bVar4) && ((uVar10 & param_4) != 0)) {
    puVar8 = &DAT_14cb05410;
    if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) != '\0') {
      puVar8 = (undefined *)(*(longlong *)(param_3 + 8) + 0x1b8);
    }
    iVar15 = (int)*(undefined8 *)(puVar8 + 0x10);
    iVar7 = 1;
    if (1 < iVar15) {
      iVar7 = iVar15;
    }
    iVar16 = (int)((ulonglong)*(undefined8 *)(puVar8 + 0x10) >> 0x20);
    iVar15 = 1;
    if (1 < iVar16) {
      iVar15 = iVar16;
    }
    *param_1 = param_4;
    if (0 < (int)uVar12) {
      uVar10 = uVar10 | 2;
      if (uVar12 == 1) {
        uVar10 = 1;
      }
      param_1[1] = uVar10;
    }
    uStack_70 = 0;
    if (param_4 != 0) {
      iVar16 = 0x10;
      if (*(int *)(DAT_14ca1c648 + 4) < 0x10) {
        iVar16 = *(int *)(DAT_14ca1c648 + 4);
      }
      iVar11 = 1;
      if (1 < iVar16) {
        iVar11 = iVar16;
      }
      uVar12 = (int)ROUND(SQRT((float)iVar11) + SQRT((float)iVar11) + -0.5) >> 1;
      param_1[4] = uVar12;
      param_1[3] = uVar12 * uVar12;
      param_1[2] = (uint)(0 < *(int *)(DAT_14ca1c678 + 4));
      fVar18 = *(float *)(DAT_14ca1c690 + 4);
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      param_1[5] = (uint)fVar18;
      local_68 = DAT_14ca85098;
      local_78 = DAT_14ca85088;
      uStack_74 = DAT_14ca8508c;
      uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
      local_5c = (undefined1 *)CONCAT44(uVar12 * iVar15,iVar7 * uVar12);
      local_80 = &DAT_00020008;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_54 = 0x30001;
      uStack_50 = 0x101;
      uStack_4e = 1;
      uStack_4d = 0x1c;
      uStack_4c = 0;
      uStack_4b = 0xff;
      uVar9 = FUN_14472bf7a(param_2,&local_80,L"OIT.SampleData",0);
      *(undefined8 *)(param_1 + 6) = uVar9;
      local_68 = DAT_14ca85098;
      local_78 = DAT_14ca85088;
      uStack_74 = DAT_14ca8508c;
      uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
      local_80 = &DAT_00020008;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_54 = 0x10001;
      uStack_50 = 0x101;
      uStack_4e = 0;
      uStack_4d = 0x1c;
      uStack_4c = 0;
      uStack_4b = 0xff;
      local_5c = (undefined1 *)CONCAT44(iVar15,iVar7);
      uStack_70 = FUN_14472bf7a(param_2,&local_80,L"OIT.SampleCount",0);
      *(longlong *)(param_1 + 8) = uStack_70;
    }
    local_78 = local_78 & 0xffffff00;
    local_80._0_7_ = (uint7)*(byte *)(uStack_70 + 0x94);
    local_98 = &local_81;
    local_81 = 0;
    uVar9 = FUN_144a96e92(param_2 + 0x198,param_2 + 0x70,uStack_70 + 8);
    FUN_14742ba95(param_2,uVar9,0,2);
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    local_68 = DAT_14ca85098;
    local_78 = DAT_14ca85088;
    uStack_74 = DAT_14ca8508c;
    uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_4e = 1;
    local_80 = &DAT_00020008;
    uStack_4d = 0x1c;
    uStack_4c = 0;
    local_54 = 0x30001;
    uStack_50 = 0x101;
    local_60 = 0;
    uStack_4b = 0xff;
    local_5c = &DAT_100000001;
    plVar1 = (longlong *)(param_2 + 0x70);
    uVar17 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar17 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(plVar1,0x128);
      uVar17 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar17 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar17,L"OIT.SampleData",&local_80,0);
    iVar7 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar17;
    *(int *)(uVar17 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(param_1 + 6) = uVar17;
    local_68 = DAT_14ca83a40;
    local_78 = DAT_14ca83a30;
    uStack_74 = DAT_14ca83a34;
    uStack_70 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_4e = 0;
    local_80 = &DAT_00020008;
    uStack_4d = 0x1c;
    uStack_4c = 0;
    local_54 = 0x10001;
    uStack_50 = 0x101;
    local_60 = 0;
    uStack_4b = 0xff;
    local_5c = &DAT_100000001;
    uVar17 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar14 = uVar17 + 0x120;
    if (*(ulonglong *)(param_2 + 0x78) < uVar14) {
      FUN_140023dd8(plVar1,0x128);
      uVar17 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar14 = uVar17 + 0x120;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar14;
    FUN_1456bbb8c(uVar17,L"OIT.SampleCount",&local_80,0);
    iVar7 = *(int *)(param_2 + 0x180);
    *(uint *)(param_2 + 0x180) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x184) < iVar7 + 1U) {
      FUN_14472c0f6(param_2 + 0x178,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar7 * 8) = uVar17;
    *(int *)(uVar17 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    *(ulonglong *)(param_1 + 8) = uVar17;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a95740 FUN_144a95740 body=281 status=ok
// SIG undefined FUN_144a95740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a95740(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e7d8) {
    FUN_144b3d300(&DAT_14cb8e7d8);
    if (DAT_14cb8e7d8 == -1) {
      FUN_14615aa4c();
      FUN_140db5666(&DAT_14cb8e730,0,&DAT_14cb8e6c8,L"FRenoirStandardPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStandardPS.usf",L"StandardPS",3,1,
                    FUN_1489c0642,FUN_1489c061a,&LAB_1489c0616,&LAB_1489c0612,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8e730 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7843e);
      _Init_thread_footer(&DAT_14cb8e7d8);
    }
  }
  return &DAT_14cb8e730;
}



// FUNCTION 144a9585a FUN_144a9585a body=281 status=ok
// SIG undefined FUN_144a9585a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a9585a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e900) {
    FUN_144b3d300(&DAT_14cb8e900);
    if (DAT_14cb8e900 == -1) {
      FUN_14615aba0();
      FUN_140db5666(&DAT_14cb8e858,0,&DAT_14cb8e7f0,L"FRenoirStandardRareVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStandardVS.usf",L"StandardVS",0,1,
                    FUN_1489c0716,FUN_1489c06b8,&LAB_1489c06b4,&LAB_1489c06b0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb8e858 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7844a);
      _Init_thread_footer(&DAT_14cb8e900);
    }
  }
  return &DAT_14cb8e858;
}



// FUNCTION 144a95974 FUN_144a95974 body=281 status=ok
// SIG undefined FUN_144a95974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a95974(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8ea28) {
    FUN_144b3d300(&DAT_14cb8ea28);
    if (DAT_14cb8ea28 == -1) {
      FUN_14615acf4();
      FUN_140db5666(&DAT_14cb8e980,0,&DAT_14cb8e918,L"FRenoirStandardRarePS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStandardRarePS.usf",
                    L"StandardRarePS",3,1,FUN_1489c07b0,FUN_1489c0788,&LAB_1489c0784,&LAB_1489c0780,
                    &LAB_14712ac0c,&LAB_14712ac08,0x110,0);
      _DAT_14cb8e980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78456);
      _Init_thread_footer(&DAT_14cb8ea28);
    }
  }
  return &DAT_14cb8e980;
}



// FUNCTION 144a95a8e FUN_144a95a8e body=281 status=ok
// SIG undefined FUN_144a95a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a95a8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8eff0) {
    FUN_144b3d300(&DAT_14cb8eff0);
    if (DAT_14cb8eff0 == -1) {
      FUN_14615ae48();
      FUN_140db5666(&DAT_14cb8ef48,0,&DAT_14cb8eee0,L"FRenoirStencilPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohStencilPS.usf",L"StencilPS",3,1,
                    FUN_1489c0b2a,FUN_1489c0b02,&LAB_1489c0afe,&LAB_1489c0afa,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8ef48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78492);
      _Init_thread_footer(&DAT_14cb8eff0);
    }
  }
  return &DAT_14cb8ef48;
}



// FUNCTION 144a95ba8 FUN_144a95ba8 body=281 status=ok
// SIG undefined FUN_144a95ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a95ba8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f490) {
    FUN_144b3d300(&DAT_14cb8f490);
    if (DAT_14cb8f490 == -1) {
      FUN_14615af9c();
      FUN_140db5666(&DAT_14cb8f3e8,0,&DAT_14cb8f380,L"FRenoirClearQuadVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadVS.usf",L"ClearQuadVS",0,1
                    ,FUN_1489c0dd8,FUN_1489c0d7a,&LAB_1489c0d76,&LAB_1489c0d72,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb8f3e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784c2);
      _Init_thread_footer(&DAT_14cb8f490);
    }
  }
  return &DAT_14cb8f3e8;
}



// FUNCTION 144a95cc2 FUN_144a95cc2 body=281 status=ok
// SIG undefined FUN_144a95cc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144a95cc2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f5b8) {
    FUN_144b3d300(&DAT_14cb8f5b8);
    if (DAT_14cb8f5b8 == -1) {
      FUN_14615b0f0();
      FUN_140db5666(&DAT_14cb8f510,0,&DAT_14cb8f4a8,L"FRenoirClearQuadPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohClearQuadPS.usf",L"ClearQuadPS",3,1
                    ,FUN_1489c0e72,FUN_1489c0e4a,&LAB_1489c0e46,&LAB_1489c0e42,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8f510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784ce);
      _Init_thread_footer(&DAT_14cb8f5b8);
    }
  }
  return &DAT_14cb8f510;
}



// FUNCTION 144a95ddb FUN_144a95ddb body=1060 status=ok
// SIG undefined FUN_144a95ddb(void)

undefined8 *
FUN_144a95ddb(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong unaff_RBP;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  undefined6 uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = param_3;
  local_90 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa0e90) && (FUN_144b3d300(&DAT_14caa0e90), DAT_14caa0e90 == -1)) {
    FUN_146163b06(&local_60);
    local_b0 = 0;
    local_c0 = 0;
    local_e0 = "Unknown";
    local_f0 = 0;
    uStack_e8 = 0;
    local_f8 = L"FParameters";
    local_b8 = 0;
    local_d0 = 0x90;
    local_d8 = 0x115;
    local_c8 = &local_60;
    FUN_140b49562(&DAT_14caa0e10,0,1);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_14323df23);
    _Init_thread_footer(&DAT_14caa0e90);
  }
  lVar7 = DAT_14caa0e58;
  local_80 = *(undefined4 *)(param_5 + 1);
  local_88 = *param_5;
  iVar4 = *(int *)(DAT_14caa0e58 + 0x38);
  if (0 < (longlong)iVar4) {
    lVar5 = *local_98;
    lVar13 = 0;
    iVar14 = 0;
    iVar20 = 0;
    unaff_RBP = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar7 + 0x30) + 2 + lVar13 * 4);
      if (bVar2 < 0x14) {
        uVar3 = *(ushort *)(*(longlong *)(lVar7 + 0x30) + lVar13 * 4);
        uVar16 = (ulonglong)uVar3;
        iVar19 = iVar20;
        if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
          if (bVar2 == 0x13) {
            iVar10 = (int)unaff_RBP;
            if (iVar10 < *(int *)(lVar5 + 0x38)) {
              uVar6 = *(ulonglong *)(lVar5 + 0x30);
              uVar18 = lVar5 + 0x30 + ((longlong)uVar6 >> 0x18);
              if ((uVar6 & 1) == 0) {
                uVar18 = uVar6;
              }
              if (uVar3 == *(ushort *)(uVar18 + 2 + (longlong)iVar10 * 4)) {
                unaff_RBP = (ulonglong)(iVar10 + 1);
                goto LAB_144a95eee;
              }
            }
            if ((*(longlong *)(param_4 + uVar16) != 0) &&
               ((*(byte *)(param_4 + 8 + uVar16) & 2) == 0)) goto LAB_144a95f05;
          }
        }
        else {
          iVar10 = *(int *)(lVar5 + 0x18);
          if (iVar14 < iVar10) {
            uVar6 = *(ulonglong *)(lVar5 + 0x10);
            uVar18 = ((longlong)uVar6 >> 0x18) + lVar5 + 0x10;
            if ((uVar6 & 1) == 0) {
              uVar18 = uVar6;
            }
            puVar9 = (ushort *)(uVar18 + (longlong)iVar14 * 4);
            iVar15 = iVar14;
            do {
              if (uVar3 <= *puVar9) {
                iVar14 = iVar15;
                if (*puVar9 == uVar3) goto LAB_144a95eee;
                break;
              }
              iVar15 = iVar15 + 1;
              puVar9 = puVar9 + 2;
              iVar14 = iVar10;
            } while (iVar10 != iVar15);
          }
          iVar10 = *(int *)(lVar5 + 0x28);
          if (iVar20 < iVar10) {
            local_a0 = (longlong)iVar20 * 6;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0x20);
              uVar18 = lVar5 + 0x20 + ((longlong)uVar6 >> 0x18);
              if ((uVar6 & 1) == 0) {
                uVar18 = uVar6;
              }
              if (uVar3 <= *(ushort *)(uVar18 + local_a0)) {
                iVar19 = iVar20;
                if (*(ushort *)(uVar18 + local_a0) == uVar3) goto LAB_144a95eee;
                break;
              }
              iVar20 = iVar20 + 1;
              local_a0 = local_a0 + 6;
              iVar19 = iVar10;
            } while (iVar10 != iVar20);
          }
LAB_144a95f05:
          *(undefined8 *)(param_4 + uVar16) = 0;
          iVar20 = iVar19;
        }
      }
LAB_144a95eee:
      lVar13 = lVar13 + 1;
    } while (lVar13 != iVar4);
  }
  local_78 = (undefined4)*local_98;
  uStack_74 = *(undefined4 *)((longlong)local_98 + 4);
  uStack_70 = (undefined4)local_98[1];
  uStack_6c = *(undefined4 *)((longlong)local_98 + 0xc);
  FUN_140069376(param_1);
  uVar12 = (undefined6)(unaff_RBP >> 0x10);
  uVar11 = (undefined4)CONCAT62(uVar12,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar11 = (undefined4)CONCAT62(uVar12,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar17 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar17 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar8;
  local_58 = DAT_14caa0e58;
  if (DAT_14caa0e58 != 0) {
    LOCK();
    *(int *)(DAT_14caa0e58 + 8) = *(int *)(DAT_14caa0e58 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14caa0e10;
  local_f8 = (wchar_t *)CONCAT71(local_f8._1_7_,2);
  local_60 = param_4;
  FUN_140068f1a(puVar17,local_90,&local_60,uVar11);
  *puVar17 = &PTR_FUN_14a399dc0;
  puVar17[0x37] = &DAT_14caa0e10;
  puVar17[0x38] = param_4;
  *(undefined4 *)(puVar17 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar17 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar17 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar17 + 0x1d4) = uStack_6c;
  *(undefined4 *)(puVar17 + 0x3c) = local_80;
  puVar17[0x3b] = local_88;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar17);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar17;
}



// FUNCTION 144a96200 FUN_144a96200 body=258 status=ok
// SIG undefined FUN_144a96200(void)

void FUN_144a96200(void)

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
              0x110) < DAT_14c9fdde0) {
    FUN_144b3d300(&DAT_14c9fdde0);
    if (DAT_14c9fdde0 == -1) {
      FUN_1456caa46(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x2d5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdd60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d99317);
      _Init_thread_footer(&DAT_14c9fdde0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a96303 FUN_144a96303 body=1060 status=ok
// SIG undefined FUN_144a96303(void)

undefined8 *
FUN_144a96303(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong unaff_RBP;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  undefined6 uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = param_3;
  local_90 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb33ab0) && (FUN_144b3d300(&DAT_14cb33ab0), DAT_14cb33ab0 == -1)) {
    FUN_1415f1b7e(&local_60);
    local_b0 = 0;
    local_c0 = 0;
    local_e0 = "Unknown";
    local_f0 = 0;
    uStack_e8 = 0;
    local_f8 = L"FUpdateMeshParticleInstancesParams";
    local_b8 = 0;
    local_d0 = 0x210;
    local_d8 = 0x10;
    local_c8 = &local_60;
    FUN_140b49562(&DAT_14cb33a30,0,1);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438fb718);
    _Init_thread_footer(&DAT_14cb33ab0);
  }
  lVar7 = DAT_14cb33a78;
  local_80 = *(undefined4 *)(param_5 + 1);
  local_88 = *param_5;
  iVar4 = *(int *)(DAT_14cb33a78 + 0x38);
  if (0 < (longlong)iVar4) {
    lVar5 = *local_98;
    lVar13 = 0;
    iVar14 = 0;
    iVar20 = 0;
    unaff_RBP = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar7 + 0x30) + 2 + lVar13 * 4);
      if (bVar2 < 0x14) {
        uVar3 = *(ushort *)(*(longlong *)(lVar7 + 0x30) + lVar13 * 4);
        uVar16 = (ulonglong)uVar3;
        iVar19 = iVar20;
        if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
          if (bVar2 == 0x13) {
            iVar10 = (int)unaff_RBP;
            if (iVar10 < *(int *)(lVar5 + 0x38)) {
              uVar6 = *(ulonglong *)(lVar5 + 0x30);
              uVar18 = lVar5 + 0x30 + ((longlong)uVar6 >> 0x18);
              if ((uVar6 & 1) == 0) {
                uVar18 = uVar6;
              }
              if (uVar3 == *(ushort *)(uVar18 + 2 + (longlong)iVar10 * 4)) {
                unaff_RBP = (ulonglong)(iVar10 + 1);
                goto LAB_144a96416;
              }
            }
            if ((*(longlong *)(param_4 + uVar16) != 0) &&
               ((*(byte *)(param_4 + 8 + uVar16) & 2) == 0)) goto LAB_144a9642d;
          }
        }
        else {
          iVar10 = *(int *)(lVar5 + 0x18);
          if (iVar14 < iVar10) {
            uVar6 = *(ulonglong *)(lVar5 + 0x10);
            uVar18 = ((longlong)uVar6 >> 0x18) + lVar5 + 0x10;
            if ((uVar6 & 1) == 0) {
              uVar18 = uVar6;
            }
            puVar9 = (ushort *)(uVar18 + (longlong)iVar14 * 4);
            iVar15 = iVar14;
            do {
              if (uVar3 <= *puVar9) {
                iVar14 = iVar15;
                if (*puVar9 == uVar3) goto LAB_144a96416;
                break;
              }
              iVar15 = iVar15 + 1;
              puVar9 = puVar9 + 2;
              iVar14 = iVar10;
            } while (iVar10 != iVar15);
          }
          iVar10 = *(int *)(lVar5 + 0x28);
          if (iVar20 < iVar10) {
            local_a0 = (longlong)iVar20 * 6;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0x20);
              uVar18 = lVar5 + 0x20 + ((longlong)uVar6 >> 0x18);
              if ((uVar6 & 1) == 0) {
                uVar18 = uVar6;
              }
              if (uVar3 <= *(ushort *)(uVar18 + local_a0)) {
                iVar19 = iVar20;
                if (*(ushort *)(uVar18 + local_a0) == uVar3) goto LAB_144a96416;
                break;
              }
              iVar20 = iVar20 + 1;
              local_a0 = local_a0 + 6;
              iVar19 = iVar10;
            } while (iVar10 != iVar20);
          }
LAB_144a9642d:
          *(undefined8 *)(param_4 + uVar16) = 0;
          iVar20 = iVar19;
        }
      }
LAB_144a96416:
      lVar13 = lVar13 + 1;
    } while (lVar13 != iVar4);
  }
  local_78 = (undefined4)*local_98;
  uStack_74 = *(undefined4 *)((longlong)local_98 + 4);
  uStack_70 = (undefined4)local_98[1];
  uStack_6c = *(undefined4 *)((longlong)local_98 + 0xc);
  FUN_140069376(param_1);
  uVar12 = (undefined6)(unaff_RBP >> 0x10);
  uVar11 = (undefined4)CONCAT62(uVar12,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar11 = (undefined4)CONCAT62(uVar12,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar17 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar17 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar17 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar8;
  local_58 = DAT_14cb33a78;
  if (DAT_14cb33a78 != 0) {
    LOCK();
    *(int *)(DAT_14cb33a78 + 8) = *(int *)(DAT_14cb33a78 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14cb33a30;
  local_f8 = (wchar_t *)CONCAT71(local_f8._1_7_,2);
  local_60 = param_4;
  FUN_140068f1a(puVar17,local_90,&local_60,uVar11);
  *puVar17 = &PTR_FUN_14ad4f340;
  puVar17[0x37] = &DAT_14cb33a30;
  puVar17[0x38] = param_4;
  *(undefined4 *)(puVar17 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar17 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar17 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar17 + 0x1d4) = uStack_6c;
  *(undefined4 *)(puVar17 + 0x3c) = local_80;
  puVar17[0x3b] = local_88;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar17;
  *(int *)((longlong)puVar17 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar17);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar17;
}



// FUNCTION 144a96728 FUN_144a96728 body=1896 status=ok
// SIG undefined FUN_144a96728(void)

void FUN_144a96728(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  byte local_101;
  ulonglong *local_100;
  uint local_f8;
  int local_f4;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x6fc) == '\x01') {
    puVar3 = *(ulonglong **)(param_2 + 0x18);
    uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_f8 = *(uint *)((longlong)puVar3 + 0x17c);
    local_100 = puVar3;
    if (local_f8 != uVar4) {
      *(uint *)((longlong)puVar3 + 0x17c) = uVar4;
      puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar13 + 3;
      if ((undefined8 *)puVar3[1] < puVar17) {
        FUN_140023dd8(puVar3,0x20);
        puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar13 + 3;
      }
      *local_100 = (ulonglong)puVar17;
      *(int *)(local_100 + 0xc) = (int)local_100[0xc] + 1;
      *(undefined8 **)local_100[6] = puVar13;
      local_100[6] = (ulonglong)(puVar13 + 1);
      uVar1 = *(undefined4 *)((longlong)local_100 + 0x17c);
      puVar13[1] = 0;
      *puVar13 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar13 + 2) = uVar1;
    }
    bVar20 = *(char *)(param_1 + 0x1b) == '\0';
    piVar6 = (int *)(param_1 + 0x1c);
    if (bVar20) {
      piVar6 = (int *)(param_1 + 0x30);
    }
    uVar5 = *(int *)((ulonglong)bVar20 * 0x10 + 0x1c + param_1) + 0x1fU & 0xffffffe0;
    uVar4 = *piVar6 + 0x1fU & 0xffffffe0;
    *(uint *)(param_1 + 0x6f0) = uVar5;
    *(uint *)(param_1 + 0x6f4) = uVar4;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    iVar14 = (uVar5 ^ 0xffffffe0) + 0x21;
    if (uVar4 == 0) {
      iVar14 = 1;
    }
    *(int *)(param_1 + 0x6f8) = iVar14;
    if (*(char *)(param_1 + 0x1a) != '\0') {
      local_f0 = param_1 + 0x600;
      local_e0 = param_2 + 0x178;
      local_e8 = (longlong *)(param_2 + 0x70);
      lVar10 = 0;
      uVar18 = 0;
      do {
        plVar12 = local_e8;
        local_101 = *(byte *)(param_1 + 0x6f8);
        local_98 = DAT_14ca85088;
        uStack_94 = CONCAT44(DAT_14ca85090,DAT_14ca8508c);
        uStack_8c = DAT_14ca85094;
        local_f4 = *(int *)(param_1 + 0x6f0);
        iVar14 = *(int *)(param_1 + 0x6f4);
        local_a0 = (undefined1 *)0x9;
        local_6c = CONCAT22(local_6c._2_2_,0xff00);
        iVar15 = DAT_14ca84e40;
        if (local_f4 < DAT_14ca84e40) {
          iVar15 = local_f4;
        }
        uStack_74 = CONCAT17(*(undefined1 *)(param_1 + 0x620 + uVar18),
                             CONCAT25(1,CONCAT14(local_101,0x10001)));
        if (iVar15 < 2) {
          iVar15 = 1;
        }
        local_80 = 0;
        iVar16 = DAT_14ca84e40;
        if (iVar14 < DAT_14ca84e40) {
          iVar16 = iVar14;
        }
        local_88 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar16 < 2) {
          iVar16 = 1;
        }
        local_7c = CONCAT44(iVar16,iVar15);
        uVar19 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar7 = uVar19 + 0x120;
        if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
          FUN_140023dd8(local_e8,0x128);
          uVar19 = *plVar12 + 7U & 0xfffffffffffffff8;
          uVar7 = uVar19 + 0x120;
        }
        *(ulonglong *)(param_2 + 0x70) = uVar7;
        FUN_1456bbb8c(uVar19,L"VirtualTexture_PageTable",&local_a0,0);
        iVar15 = *(int *)(param_2 + 0x180);
        *(uint *)(param_2 + 0x180) = iVar15 + 1U;
        if (*(uint *)(param_2 + 0x184) < iVar15 + 1U) {
          FUN_14472c0f6(local_e0,iVar15);
        }
        plVar12 = (longlong *)(local_f0 + lVar10);
        *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar15 * 8) = uVar19;
        *(int *)(uVar19 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        if (*plVar12 != 0) {
          lVar8 = FUN_14473c272(param_2,plVar12,0);
          uStack_8c = DAT_14c9a52a0;
          uStack_94 = DAT_14c9a5298;
          local_88 = DAT_14c9a5298;
          local_80 = DAT_14c9a52a0;
          local_7c = 0;
          uStack_74 = 1;
          local_6c = 0;
          iVar15 = *(int *)(lVar8 + 0x84);
          if (local_f4 < *(int *)(lVar8 + 0x84)) {
            iVar15 = local_f4;
          }
          iVar16 = *(int *)(lVar8 + 0x88);
          if (iVar14 < *(int *)(lVar8 + 0x88)) {
            iVar16 = iVar14;
          }
          local_a0 = (undefined1 *)CONCAT44(iVar16,iVar15);
          local_98 = 1;
          local_68 = (uint)local_101;
          if ((byte)*(uint *)(lVar8 + 0x90) <= local_101) {
            local_68 = *(uint *)(lVar8 + 0x90);
          }
          local_68 = local_68 & 0xff;
          FUN_1400e8d41(param_2,lVar8,uVar19,&local_a0);
        }
        plVar9 = (longlong *)FUN_14495f742(param_2,uVar19);
        plVar9 = (longlong *)*plVar9;
        plVar2 = (longlong *)*plVar12;
        if (plVar2 != plVar9) {
          *plVar12 = (longlong)plVar9;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x30))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2);
          }
        }
        lVar8 = *(longlong *)(local_f0 + 8 + lVar10);
        if (lVar8 != 0) {
          (**(code **)(*DAT_14ca83900 + 0x178))
                    (DAT_14ca83900,&DAT_14ca85100,lVar8,*(undefined8 *)(*plVar12 + 8));
        }
        uVar18 = uVar18 + 1;
        lVar10 = lVar10 + 0x10;
      } while (uVar18 < *(byte *)(param_1 + 0x1a) + 3 >> 2);
    }
    puVar3 = local_100;
    *(undefined1 *)(param_1 + 0x6fc) = 0;
    if (*(uint *)((longlong)local_100 + 0x17c) != local_f8) {
      *(uint *)((longlong)local_100 + 0x17c) = local_f8;
      puVar13 = (undefined8 *)(*local_100 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar13 + 3;
      if ((undefined8 *)local_100[1] < puVar17) {
        FUN_140023dd8(local_100,0x20);
        puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar13 + 3;
      }
      *local_100 = (ulonglong)puVar17;
      *(int *)(local_100 + 0xc) = (int)local_100[0xc] + 1;
      *(undefined8 **)local_100[6] = puVar13;
      local_100[6] = (ulonglong)(puVar13 + 1);
      uVar1 = *(undefined4 *)((longlong)local_100 + 0x17c);
      puVar13[1] = 0;
      *puVar13 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar13 + 2) = uVar1;
    }
  }
  if (*(char *)(param_1 + 0x6fd) == '\x01') {
    puVar3 = *(ulonglong **)(param_2 + 0x18);
    uVar5 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar4 = *(uint *)((longlong)puVar3 + 0x17c);
    if (uVar4 != uVar5) {
      *(uint *)((longlong)puVar3 + 0x17c) = uVar5;
      puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar13 + 3;
      if ((undefined8 *)puVar3[1] < puVar17) {
        FUN_140023dd8(puVar3,0x20);
        puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar13 + 3;
      }
      *puVar3 = (ulonglong)puVar17;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar13;
      puVar3[6] = (ulonglong)(puVar13 + 1);
      uVar1 = *(undefined4 *)((longlong)puVar3 + 0x17c);
      puVar13[1] = 0;
      *puVar13 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar13 + 2) = uVar1;
    }
    iVar14 = *(int *)(param_1 + 0x20);
    if (iVar14 != 0) {
      local_98 = DAT_14ca85088;
      uStack_94 = CONCAT44(DAT_14ca85090,DAT_14ca8508c);
      uStack_8c = DAT_14ca85094;
      local_7c = CONCAT44(iVar14,iVar14);
      local_a0 = &DAT_00020008;
      local_88 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
      local_80 = 0;
      uStack_74 = 0x1c00010100010001;
      local_6c = CONCAT22(local_6c._2_2_,0xff00);
      lVar10 = FUN_14472bf7a(param_2,&local_a0,L"VirtualTexture_PageTableAdaptiveIndirection",0);
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8 = *(undefined1 *)(lVar10 + 0x94);
      local_b0 = 0;
      local_b7 = 0;
      local_b3 = 0;
      local_118 = &local_b9;
      local_b9 = 0;
      local_a8 = lVar10;
      uVar11 = FUN_144a96e92(param_2 + 0x198,param_2 + 0x70,lVar10 + 8);
      FUN_14042f6c6(param_2,uVar11,&local_d8,2);
      plVar12 = (longlong *)FUN_14495f742(param_2,lVar10);
      plVar12 = (longlong *)*plVar12;
      plVar9 = *(longlong **)(param_1 + 0x648);
      if (plVar9 != plVar12) {
        *(longlong **)(param_1 + 0x648) = plVar12;
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x30))();
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9);
        }
      }
      if (*(longlong *)(param_1 + 0x650) != 0) {
        (**(code **)(*DAT_14ca83900 + 0x178))
                  (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x650),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x648) + 8));
      }
    }
    *(undefined1 *)(param_1 + 0x6fd) = 0;
    if (*(uint *)((longlong)puVar3 + 0x17c) != uVar4) {
      *(uint *)((longlong)puVar3 + 0x17c) = uVar4;
      puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar13 + 3;
      if ((undefined8 *)puVar3[1] < puVar17) {
        FUN_140023dd8(puVar3,0x20);
        puVar13 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar13 + 3;
      }
      *puVar3 = (ulonglong)puVar17;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar13;
      puVar3[6] = (ulonglong)(puVar13 + 1);
      uVar1 = *(undefined4 *)((longlong)puVar3 + 0x17c);
      puVar13[1] = 0;
      *puVar13 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar13 + 2) = uVar1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a96e92 FUN_144a96e92 body=234 status=ok
// SIG undefined FUN_144a96e92(void)

undefined8 *
FUN_144a96e92(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined4 *param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar1 = *param_5;
  puVar6[1] = *param_3;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = uVar1;
  *puVar6 = &PTR_FUN_14a1fb948;
  uVar3 = *(undefined4 *)((longlong)param_4 + 3);
  *(undefined4 *)(puVar6 + 6) = *param_4;
  *(undefined4 *)((longlong)puVar6 + 0x33) = uVar3;
  cVar2 = *(char *)(param_4 + 2);
  *(char *)(puVar6 + 7) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined1 *)((longlong)puVar6 + 0x37) = *(undefined1 *)((longlong)param_4 + 7);
  }
  puVar6[8] = *(undefined8 *)(param_4 + 4);
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_1447568fc(param_1,iVar4);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar4 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 144a96f7c FUN_144a96f7c body=427 status=ok
// SIG undefined FUN_144a96f7c(void)

undefined * FUN_144a96f7c(void)

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
              0x110) < DAT_14cb030b8) {
    FUN_144b3d300(&DAT_14cb030b8);
    if (DAT_14cb030b8 == -1) {
      FUN_1401c912c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"InstancedView";
      local_70 = L"InstancedView";
      local_78 = L"FInstancedViewUniformShaderParameters";
      local_38 = 0;
      local_50 = 0x2230;
      local_58 = 0x543;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb03038,1,3);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a271a);
      _Init_thread_footer(&DAT_14cb030b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb03038;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a97128 FUN_144a97128 body=2758 status=ok
// SIG undefined FUN_144a97128(void)

void FUN_144a97128(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *(undefined8 *)(param_3 + 0x140);
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2cab0) && (FUN_144b3d300(&DAT_14cb2cab0), DAT_14cb2cab0 == -1)) {
    FUN_141612130(&local_58);
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_90 = "Unknown";
    local_98 = 0;
    local_a0 = L"NiagaraSpriteVF";
    local_a8 = L"FNiagaraSpriteUniformParameters";
    local_80 = 0x260;
    local_88 = 0x15;
    local_78 = &local_58;
    FUN_140b49562(&DAT_14cb2ca30,1,1);
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438f6788);
    _Init_thread_footer(&DAT_14cb2cab0);
  }
  uVar13 = *(ulonglong *)(param_2 + 0xa0);
  uVar5 = param_2 + 0xa0 + ((longlong)uVar13 >> 0x18);
  if ((uVar13 & 1) == 0) {
    uVar5 = uVar13;
  }
  if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar4 * 4) == DAT_14cb2ca58) {
        uVar13 = *(ulonglong *)(param_2 + 0xb0);
        if ((uVar13 & 1) != 0) {
          uVar13 = ((longlong)uVar13 >> 0x18) + param_2 + 0xb0;
        }
        puVar17 = (ushort *)(uVar13 + lVar4);
        goto LAB_144a97283;
      }
      lVar4 = lVar4 + 2;
    } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar4);
  }
  puVar17 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_144a97283:
  uVar1 = *puVar17;
  if (uVar1 != 0xffff) {
    puVar6 = (ulonglong *)*param_4;
    uVar13 = *puVar6;
    uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar6;
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar9 = (uint)puVar6[1];
    uVar13 = 0;
    uVar14 = uVar9;
    if (8 < (int)uVar9) {
      uVar13 = 0;
      uVar15 = (ulonglong)uVar9;
      uVar12 = uVar9;
      do {
        uVar15 = uVar15 >> 1;
        uVar14 = (uint)uVar15;
        uVar16 = uVar14 + (int)uVar13;
        if (*(ushort *)(uVar5 + (ulonglong)uVar16 * 2) < uVar1) {
          uVar13 = (ulonglong)(uVar16 + (uVar12 & 1));
        }
        bVar3 = 0x11 < uVar12;
        uVar12 = uVar14;
      } while (bVar3);
    }
    iVar8 = (int)uVar13;
    uVar14 = uVar14 + iVar8 + 1;
    if ((int)uVar14 < (int)uVar9) {
      uVar9 = uVar14;
    }
    iVar7 = uVar9 - iVar8;
    if (iVar7 != 0 && iVar8 <= (int)uVar9) {
      do {
        if (*(ushort *)(uVar5 + uVar13 * 2) == uVar1) {
          *(undefined8 *)(param_4[1] + (uVar13 & 0xffffffff) * 8) = uVar2;
          break;
        }
        uVar13 = uVar13 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  uVar2 = *(undefined8 *)(param_3 + 0x130);
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2cb48) && (FUN_144b3d300(&DAT_14cb2cb48), DAT_14cb2cb48 == -1)) {
    FUN_1461a6bd8(&local_58);
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_90 = "Unknown";
    local_98 = 0;
    local_a0 = L"NiagaraSpriteVFLooseParameters";
    local_a8 = L"FNiagaraSpriteVFLooseParameters";
    local_80 = 0x40;
    local_88 = 0x5e;
    local_78 = &local_58;
    FUN_140b49562(&DAT_14cb2cac8,1,1);
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438f6794);
    _Init_thread_footer(&DAT_14cb2cb48);
  }
  uVar13 = *(ulonglong *)(param_2 + 0xa0);
  uVar5 = param_2 + 0xa0 + ((longlong)uVar13 >> 0x18);
  if ((uVar13 & 1) == 0) {
    uVar5 = uVar13;
  }
  if (0 < (int)*(uint *)(param_2 + 0xa8)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar4 * 4) == DAT_14cb2caf0) {
        uVar13 = *(ulonglong *)(param_2 + 0xb0);
        if ((uVar13 & 1) != 0) {
          uVar13 = ((longlong)uVar13 >> 0x18) + param_2 + 0xb0;
        }
        puVar17 = (ushort *)(uVar13 + lVar4);
        goto LAB_144a973be;
      }
      lVar4 = lVar4 + 2;
    } while ((ulonglong)*(uint *)(param_2 + 0xa8) * 2 != lVar4);
  }
  puVar17 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_144a973be:
  uVar1 = *puVar17;
  if (uVar1 != 0xffff) {
    puVar6 = (ulonglong *)*param_4;
    uVar13 = *puVar6;
    uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar6;
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar9 = (uint)puVar6[1];
    uVar12 = 0;
    uVar14 = uVar9;
    if (8 < (int)uVar9) {
      uVar12 = 0;
      uVar16 = uVar9;
      do {
        uVar14 = uVar16 >> 1;
        if (*(ushort *)(uVar5 + (ulonglong)(uVar14 + uVar12) * 2) < uVar1) {
          uVar12 = uVar14 + uVar12 + (uVar16 & 1);
        }
        bVar3 = 0x11 < uVar16;
        uVar16 = uVar14;
      } while (bVar3);
    }
    uVar14 = uVar14 + uVar12 + 1;
    if ((int)uVar14 < (int)uVar9) {
      uVar9 = uVar14;
    }
    iVar8 = uVar9 - uVar12;
    if (iVar8 != 0 && (int)uVar12 <= (int)uVar9) {
      uVar13 = (ulonglong)uVar12;
      do {
        if (*(ushort *)(uVar5 + uVar13 * 2) == uVar1) {
          *(undefined8 *)(param_4[1] + (uVar13 & 0xffffffff) * 8) = uVar2;
          break;
        }
        uVar13 = uVar13 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  local_58 = *(undefined4 *)(param_3 + 0x148);
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 != 0) {
    lVar4 = *param_4;
    uVar13 = *(ulonglong *)(lVar4 + 0x30);
    uVar5 = lVar4 + 0x30 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar13 = (ulonglong)*(uint *)(lVar4 + 0x38);
    if (0 < (int)*(uint *)(lVar4 + 0x38)) {
      iVar8 = *(int *)(lVar4 + 0x28);
      iVar7 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar7 = iVar8 + 7;
      }
      pvVar11 = (void *)((ulonglong)
                         (uint)((iVar7 >> 3) +
                               (*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x18) + iVar8) * 8) +
                        param_4[1]);
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*(short *)(param_1 + 4) == (short)puVar6[-1]) {
          uVar13 = *puVar6;
          uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar6;
          if ((uVar13 & 1) == 0) {
            uVar5 = uVar13;
          }
          if (0 < (int)(uint)puVar6[1]) {
            uVar13 = 0;
            goto LAB_144a9754e;
          }
          break;
        }
        pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  goto LAB_144a97438;
  while( true ) {
    pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)(uVar5 + 2 + uVar13 * 4));
    uVar13 = uVar13 + 1;
    if ((uint)puVar6[1] == uVar13) break;
LAB_144a976ef:
    if (*(short *)(param_1 + 0xc) == *(short *)(uVar5 + uVar13 * 4)) {
      sVar10 = 4;
      if (uVar1 < 4) {
        sVar10 = (size_t)(uint)uVar1;
      }
      memcpy(pvVar11,&local_58,sVar10);
      uVar9 = (uint)uVar1 - (int)sVar10;
      memset((void *)((longlong)pvVar11 + sVar10),0,(longlong)(int)((int)uVar9 >> 0x1f & uVar9));
      break;
    }
  }
  goto LAB_144a9745c;
  while( true ) {
    pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)(uVar5 + 2 + uVar13 * 4));
    uVar13 = uVar13 + 1;
    if ((uint)puVar6[1] == uVar13) break;
LAB_144a977c1:
    if (*(short *)(param_1 + 0x12) == *(short *)(uVar5 + uVar13 * 4)) {
      sVar10 = 4;
      if (uVar1 < 4) {
        sVar10 = (size_t)(uint)uVar1;
      }
      memcpy(pvVar11,&local_58,sVar10);
      uVar9 = (uint)uVar1 - (int)sVar10;
      memset((void *)((longlong)pvVar11 + sVar10),0,(longlong)(int)((int)uVar9 >> 0x1f & uVar9));
      break;
    }
  }
  goto LAB_144a97472;
  while( true ) {
    pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)(uVar5 + 2 + uVar13 * 4));
    uVar13 = uVar13 + 1;
    if ((uint)puVar6[1] == uVar13) break;
LAB_144a97620:
    if (*(short *)(param_1 + 0x20) == *(short *)(uVar5 + uVar13 * 4)) {
      sVar10 = 4;
      if (uVar1 < 4) {
        sVar10 = (size_t)(uint)uVar1;
      }
      memcpy(pvVar11,&local_58,sVar10);
      uVar9 = (uint)uVar1 - (int)sVar10;
      memset((void *)((longlong)pvVar11 + sVar10),0,(longlong)(int)((int)uVar9 >> 0x1f & uVar9));
      break;
    }
  }
  goto LAB_144a97496;
  while( true ) {
    pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)(uVar5 + 2 + uVar13 * 4));
    uVar13 = uVar13 + 1;
    if ((uint)puVar6[1] == uVar13) break;
LAB_144a9754e:
    if (*(short *)(param_1 + 6) == *(short *)(uVar5 + uVar13 * 4)) {
      sVar10 = 4;
      if (uVar1 < 4) {
        sVar10 = (size_t)(uint)uVar1;
      }
      memcpy(pvVar11,&local_58,sVar10);
      uVar9 = (uint)uVar1 - (int)sVar10;
      memset((void *)((longlong)pvVar11 + sVar10),0,(longlong)(int)((int)uVar9 >> 0x1f & uVar9));
      break;
    }
  }
LAB_144a97438:
  if ((*(uint *)(param_1 + 0x16) & 0xff0000) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x150);
    if (*(longlong *)(param_3 + 0x150) == 0) {
      lVar4 = DAT_14cb2be78;
    }
    FUN_147511800(param_4,lVar4,*(uint *)(param_1 + 0x16) & 0xffff);
  }
  local_58 = *(undefined4 *)(param_3 + 0x158);
  uVar1 = *(ushort *)(param_1 + 0xe);
  if (uVar1 != 0) {
    lVar4 = *param_4;
    uVar13 = *(ulonglong *)(lVar4 + 0x30);
    uVar5 = lVar4 + 0x30 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar13 = (ulonglong)*(uint *)(lVar4 + 0x38);
    if (0 < (int)*(uint *)(lVar4 + 0x38)) {
      iVar8 = *(int *)(lVar4 + 0x28);
      iVar7 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar7 = iVar8 + 7;
      }
      pvVar11 = (void *)((ulonglong)
                         (uint)((iVar7 >> 3) +
                               (*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x18) + iVar8) * 8) +
                        param_4[1]);
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*(short *)(param_1 + 10) == (short)puVar6[-1]) {
          uVar13 = *puVar6;
          uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar6;
          if ((uVar13 & 1) == 0) {
            uVar5 = uVar13;
          }
          if (0 < (int)(uint)puVar6[1]) {
            uVar13 = 0;
            goto LAB_144a976ef;
          }
          break;
        }
        pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
LAB_144a9745c:
  local_58 = *(undefined4 *)(param_3 + 0x15c);
  uVar1 = *(ushort *)(param_1 + 0x14);
  if (uVar1 != 0) {
    lVar4 = *param_4;
    uVar13 = *(ulonglong *)(lVar4 + 0x30);
    uVar5 = lVar4 + 0x30 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar13 = (ulonglong)*(uint *)(lVar4 + 0x38);
    if (0 < (int)*(uint *)(lVar4 + 0x38)) {
      iVar8 = *(int *)(lVar4 + 0x28);
      iVar7 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar7 = iVar8 + 7;
      }
      pvVar11 = (void *)((ulonglong)
                         (uint)((iVar7 >> 3) +
                               (*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x18) + iVar8) * 8) +
                        param_4[1]);
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*(short *)(param_1 + 0x10) == (short)puVar6[-1]) {
          uVar13 = *puVar6;
          uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar6;
          if ((uVar13 & 1) == 0) {
            uVar5 = uVar13;
          }
          if (0 < (int)(uint)puVar6[1]) {
            uVar13 = 0;
            goto LAB_144a977c1;
          }
          break;
        }
        pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
LAB_144a97472:
  if ((*(uint *)(param_1 + 0x1a) & 0xff0000) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x160);
    if (*(longlong *)(param_3 + 0x160) == 0) {
      lVar4 = DAT_14cb2d4c0;
    }
    FUN_147511800(param_4,lVar4,*(uint *)(param_1 + 0x1a) & 0xffff);
  }
  local_58 = *(undefined4 *)(param_3 + 0x168);
  uVar1 = *(ushort *)(param_1 + 0x22);
  if (uVar1 != 0) {
    lVar4 = *param_4;
    uVar13 = *(ulonglong *)(lVar4 + 0x30);
    uVar5 = lVar4 + 0x30 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar5 = uVar13;
    }
    uVar13 = (ulonglong)*(uint *)(lVar4 + 0x38);
    if (0 < (int)*(uint *)(lVar4 + 0x38)) {
      iVar8 = *(int *)(lVar4 + 0x28);
      iVar7 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar7 = iVar8 + 7;
      }
      pvVar11 = (void *)((ulonglong)
                         (uint)((iVar7 >> 3) +
                               (*(int *)(lVar4 + 8) + *(int *)(lVar4 + 0x18) + iVar8) * 8) +
                        param_4[1]);
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*(short *)(param_1 + 0x1e) == (short)puVar6[-1]) {
          uVar13 = *puVar6;
          uVar5 = ((longlong)uVar13 >> 0x18) + (longlong)puVar6;
          if ((uVar13 & 1) == 0) {
            uVar5 = uVar13;
          }
          if (0 < (int)(uint)puVar6[1]) {
            uVar13 = 0;
            goto LAB_144a97620;
          }
          break;
        }
        pvVar11 = (void *)((longlong)pvVar11 + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
LAB_144a97496:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a97bef FUN_144a97bef body=1299 status=ok
// SIG undefined FUN_144a97bef(void)

undefined8 * FUN_144a97bef(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar7 + 0x24;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x130);
    puVar7 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar7 + 0x24;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar7 = &PTR_FUN_14a216e60;
  puVar6 = puVar7 + 2;
  puVar7[2] = 0;
  puVar7[3] = 0x3f80000000000000;
  puVar7[4] = 0;
  puVar7[5] = 0x3f80000000000000;
  puVar7[6] = 0;
  puVar7[7] = 0x3f80000000000000;
  puVar7[8] = 0;
  puVar7[9] = 0x3f80000000000000;
  puVar7[10] = 0;
  puVar7[0xb] = 0x3f80000000000000;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0x3f80000000000000;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0x3f80000000000000;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0x3f80000000000000;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0x3f80000000000000;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  puVar7[0x22] = 0;
  puVar7[0x23] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar7;
  FUN_144888256(param_1,param_2,puVar6);
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
              0x110) < DAT_14c9caa78) {
    FUN_144b3d300(&DAT_14c9caa78);
    if (DAT_14c9caa78 == -1) {
      FUN_14162ac7e(local_48);
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_88 = 0;
      local_90 = L"FogStruct";
      local_98 = L"FFogUniformParameters";
      local_70 = 0x110;
      local_78 = 0x10;
      local_68 = local_48;
      FUN_140b49562(&DAT_14c9ca9f8,1,1);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bfdc16);
      _Init_thread_footer(&DAT_14c9caa78);
    }
  }
  uVar4 = DAT_14c9caa10;
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x50);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 9;
  }
  *puVar1 = (ulonglong)puVar7;
  puVar8[1] = uVar4;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_14a1fb9b8;
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
              0x110) < DAT_14c9caa78) {
    FUN_144b3d300(&DAT_14c9caa78);
    if (DAT_14c9caa78 == -1) {
      FUN_14162ac7e(local_48);
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_88 = 0;
      local_90 = L"FogStruct";
      local_98 = L"FFogUniformParameters";
      local_70 = 0x110;
      local_78 = 0x10;
      local_68 = local_48;
      FUN_140b49562(&DAT_14c9ca9f8,1,1);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bfdc16);
      _Init_thread_footer(&DAT_14c9caa78);
    }
  }
  puVar8[3] = puVar6;
  lVar5 = DAT_14c9caa40;
  puVar8[4] = DAT_14c9caa40;
  if (lVar5 != 0) {
    LOCK();
    piVar2 = (int *)(lVar5 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar8[5] = &DAT_14c9ca9f8;
  puVar8[6] = 0;
  *(undefined4 *)(puVar8 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar8 + 0x3c) = 0;
  *puVar8 = &PTR_FUN_14a216e68;
  puVar8[8] = puVar6;
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar3 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar3 * 8) = puVar8;
  *(int *)(puVar8 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a98104 FUN_144a98104 body=178 status=ok
// SIG undefined FUN_144a98104(void)

longlong * FUN_144a98104(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
      uVar1 = (uint)((ulonglong)param_2 >> 0x10);
      uVar6 = (uint)param_2 & 0xffff;
      lVar3 = param_1 + 0x1f0;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1f8);
      }
      iVar2 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x200) - 1U &
                               (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar2 * 0x28);
          if (*plVar4 == param_2) goto LAB_144a9819a;
          iVar2 = (int)plVar4[4];
        } while (iVar2 != -1);
      }
    }
    plVar4 = (longlong *)0x0;
LAB_144a9819a:
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      return plVar5 + 1;
    }
  }
  return (longlong *)(param_1 + 0x80);
}



// FUNCTION 144a981b6 FUN_144a981b6 body=482 status=ok
// SIG undefined FUN_144a981b6(void)

undefined8 * FUN_144a981b6(longlong param_1,ulonglong param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar11 + 0xc7c);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      plVar4 = *(longlong **)(param_1 + 0x78);
      if (*(code **)(*plVar4 + 0x28) != FUN_140023078) {
                    /* WARNING: Could not recover jumptable at 0x000144a98395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3);
        return puVar6;
      }
      if (0x10 < param_3 || 0x7ff0 < param_2) {
        uVar12 = 0x10;
        if (0x10 < param_3) {
          uVar12 = (ulonglong)param_3;
        }
        uVar7 = -uVar12 & (param_2 + uVar12) - 1;
        if (param_3 < 0x81 && uVar7 < 0x7ff1) {
          bVar2 = (&DAT_14c840860)[uVar7 + 0xf >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar2) {
            uVar8 = (ulonglong)bVar2;
          }
          uVar10 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c8407e0)[uVar10 & 0xffffffff];
            if (((uint)(ushort)(&DAT_14c8407e0)[uVar10 & 0xffffffff] & (int)uVar12 + 0xffffU) == 0)
            goto LAB_144a98375;
            lVar11 = uVar8 + 1 + uVar10;
            uVar10 = uVar10 - 1;
          } while (lVar11 != 0x33);
        }
        puVar6 = (undefined8 *)FUN_1400229f8(plVar4,param_2);
        return puVar6;
      }
      uVar7 = param_2;
      if (((DAT_14c758740 != 0xffffffff) &&
          (pvVar5 = TlsGetValue(DAT_14c758740), pvVar5 != (LPVOID)0x0)) &&
         (*(char *)((longlong)pvVar5 + 0x670) == '\x01')) {
        lVar11 = (ulonglong)(byte)(&DAT_14c840860)[param_2 + 0xf >> 4] * 0x20;
        puVar9 = (undefined8 *)((longlong)pvVar5 + lVar11 + 0x10);
        puVar6 = *(undefined8 **)((longlong)pvVar5 + lVar11 + 0x10);
        if ((puVar6 == (undefined8 *)0x0) && (*(longlong *)((longlong)pvVar5 + lVar11 + 0x20) != 0))
        {
          *(undefined4 *)puVar9 = *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x20);
          *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x14) =
               *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x24);
          *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x18) =
               *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x28);
          *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x1c) =
               *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x2c);
          *(undefined8 *)((longlong)pvVar5 + lVar11 + 0x20) = 0;
          *(undefined4 *)((longlong)pvVar5 + lVar11 + 0x28) = 0;
          puVar6 = (undefined8 *)*puVar9;
        }
        if (puVar6 != (undefined8 *)0x0) {
          piVar1 = (int *)((longlong)pvVar5 + lVar11 + 0x18);
          *piVar1 = *piVar1 + -1;
          *puVar9 = *puVar6;
          return puVar6;
        }
      }
LAB_144a98375:
      puVar6 = (undefined8 *)FUN_140022b52(plVar4,uVar7);
      return puVar6;
    }
  }
  else {
    *(int *)(lVar11 + 0xc7c) = iVar3 + -1;
  }
  puVar6 = (undefined8 *)FUN_1446fd46e(param_1,param_2,param_3,1);
  return puVar6;
}



// FUNCTION 144a98398 FUN_144a98398 body=1740 status=ok
// SIG undefined FUN_144a98398(void)

void FUN_144a98398(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  short *psVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  wchar_t *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8 = param_5;
  local_a4 = param_6;
  local_98 = param_9;
  local_94 = param_10;
  local_90 = param_7;
  local_8c = param_8;
  local_7c = 1.0 / (float)(int)((ulonglong)param_12 >> 0x20);
  local_80 = 1.0 / (float)(int)param_12;
  local_84 = 1.0 / (float)(int)((ulonglong)param_11 >> 0x20);
  local_88 = 1.0 / (float)(int)param_11;
  local_a0 = param_3;
  local_9c = param_4;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca35b50) && (FUN_144b3d300(&DAT_14ca35b50), DAT_14ca35b50 == -1)) {
    FUN_1461b6a1a(local_70);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_e0 = "Unknown";
    local_e8 = 0;
    local_f0 = L"DrawRectangleParameters";
    local_f8 = L"FDrawRectangleParameters";
    local_d0 = 0x30;
    local_d8 = 0x15;
    local_c8 = local_70;
    FUN_140b49562(&DAT_14ca35ad0,1,1);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142f2cbff);
    _Init_thread_footer(&DAT_14ca35b50);
  }
  uVar19 = *(ulonglong *)(param_2 + 0xa0);
  uVar17 = param_2 + 0xa0 + ((longlong)uVar19 >> 0x18);
  if ((uVar19 & 1) == 0) {
    uVar17 = uVar19;
  }
  if (0 < (int)*(uint *)(param_2 + 0xa8)) {
    lVar15 = 0;
    do {
      if (*(longlong *)(uVar17 + lVar15 * 4) == DAT_14ca35af8) {
        uVar19 = *(ulonglong *)(param_2 + 0xb0);
        if ((uVar19 & 1) != 0) {
          uVar19 = ((longlong)uVar19 >> 0x18) + param_2 + 0xb0;
        }
        psVar20 = (short *)(uVar19 + lVar15);
        goto LAB_144a98586;
      }
      lVar15 = lVar15 + 2;
    } while ((ulonglong)*(uint *)(param_2 + 0xa8) * 2 != lVar15);
  }
  psVar20 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_144a98586:
  if (*psVar20 == -1) goto LAB_144a986ed;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca35b50) && (FUN_144b3d300(&DAT_14ca35b50), DAT_14ca35b50 == -1)) {
    FUN_1461b6a1a(local_70);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0;
    local_e0 = "Unknown";
    local_e8 = 0;
    local_f0 = L"DrawRectangleParameters";
    local_f8 = L"FDrawRectangleParameters";
    local_d0 = 0x30;
    local_d8 = 0x15;
    local_c8 = local_70;
    FUN_140b49562(&DAT_14ca35ad0,1,1);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142f2cbff);
    _Init_thread_footer(&DAT_14ca35b50);
  }
  local_f0 = (wchar_t *)CONCAT44(local_f0._4_4_,1);
  local_f8 = (wchar_t *)((ulonglong)local_f8 & 0xffffffff00000000);
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,local_70,&local_a8,DAT_14ca35b18);
  lVar15 = local_70[0];
  sVar8 = *psVar20;
  if (sVar8 != -1) {
    lVar16 = *param_1;
    puVar1 = (ulonglong *)(lVar16 + 0x60);
    lVar2 = (longlong)(int)param_1[6] + 1;
    plVar14 = *(longlong **)(lVar16 + 0x60);
    if ((longlong)(int)param_1[6] == 0) {
      plVar14 = (longlong *)((longlong)plVar14 + 7U & 0xfffffffffffffff8);
      plVar13 = plVar14 + 2;
      plVar12 = plVar14;
      if (*(longlong **)(lVar16 + 0x68) < plVar13) {
        FUN_140023dd8(puVar1,0x18);
        plVar14 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar13 = plVar14 + 2;
        plVar12 = plVar14;
      }
LAB_144a98674:
      *puVar1 = (ulonglong)plVar13;
    }
    else {
      plVar13 = plVar14 + 2;
      if (plVar13 <= *(longlong **)(lVar16 + 0x68)) {
        plVar12 = (longlong *)param_1[5];
        goto LAB_144a98674;
      }
      plVar12 = (longlong *)((longlong)plVar14 + 7U & 0xfffffffffffffff8);
      plVar14 = plVar12 + lVar2 * 2;
      if (*(longlong **)(lVar16 + 0x68) < plVar14) {
        FUN_140023dd8(puVar1,(int)lVar2 * 0x10 | 8);
        plVar12 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
        plVar14 = plVar12 + lVar2 * 2;
      }
      *puVar1 = (ulonglong)plVar14;
      plVar14 = plVar12;
      if (0 < (int)param_1[6]) {
        lVar16 = 0;
        lVar18 = 0;
        do {
          puVar4 = (undefined4 *)(param_1[5] + lVar16);
          uVar9 = puVar4[1];
          uVar10 = puVar4[2];
          uVar11 = puVar4[3];
          puVar5 = (undefined4 *)((longlong)plVar12 + lVar16);
          *puVar5 = *puVar4;
          puVar5[1] = uVar9;
          puVar5[2] = uVar10;
          puVar5[3] = uVar11;
          lVar18 = lVar18 + 1;
          lVar16 = lVar16 + 0x10;
        } while (lVar18 < (int)param_1[6]);
        plVar14 = (longlong *)(lVar16 + (longlong)plVar12);
      }
    }
    *plVar14 = lVar15;
    *(short *)(plVar14 + 1) = sVar8;
    *(undefined1 *)((longlong)plVar14 + 10) = 4;
    param_1[5] = (longlong)plVar12;
    *(int *)(param_1 + 6) = (int)lVar2;
  }
  if (local_70[0] != 0) {
    LOCK();
    puVar3 = (uint *)(local_70[0] + 8);
    uVar6 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      puVar3 = (uint *)(local_70[0] + 8);
      LOCK();
      uVar6 = *puVar3;
      *puVar3 = *puVar3 | 0x40000000;
      UNLOCK();
      if ((uVar6 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(local_70[0] + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = local_70[0];
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar21 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar21) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar21 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar21) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
LAB_144a986ed:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a98a66 FUN_144a98a66 body=531 status=ok
// SIG undefined FUN_144a98a66(void)

uint FUN_144a98a66(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar4 = param_1[1];
  uVar10 = param_1[2];
  if (uVar4 == uVar10) {
    uVar10 = uVar4 + 1;
    param_1[2] = uVar10;
    uVar11 = uVar4;
    if ((int)uVar4 < param_1[0xe]) {
      uVar14 = uVar4 & 0x1f;
      piVar12 = param_1 + 8;
      uVar15 = uVar4;
      if (*(int **)(param_1 + 0xc) != (int *)0x0) {
        piVar12 = *(int **)(param_1 + 0xc);
      }
LAB_144a98b01:
      uVar10 = uVar15 + 0x1f;
      if (-1 < (int)uVar15) {
        uVar10 = uVar15;
      }
      piVar12[(int)uVar10 >> 5] = piVar12[(int)uVar10 >> 5] | 1 << ((byte)uVar14 & 0x1f);
      uVar4 = param_1[1];
      uVar10 = param_1[2];
      uVar11 = uVar15;
    }
  }
  else {
    iVar2 = *param_1;
    piVar12 = param_1 + 8;
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      piVar12 = *(int **)(param_1 + 0xc);
    }
    uVar14 = param_1[0xe] + 0x1fU >> 5;
    iVar13 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    iVar13 = iVar13 >> 5;
    uVar11 = 0xffffffff;
    if (iVar13 < (int)uVar14) {
      uVar11 = -1 << ((byte)iVar2 & 0x1f);
      uVar7 = (ulonglong)iVar13;
      iVar13 = iVar13 * -0x20;
      do {
        if ((uVar11 & ~piVar12[uVar7]) != 0) {
          uVar11 = uVar11 & ~piVar12[uVar7];
          uVar14 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
            }
          }
          uVar11 = 0xffffffff;
          if ((param_1[0xe] <= (int)(uVar14 - iVar13)) ||
             (uVar15 = uVar14 - iVar13, uVar14 + 1 == iVar13)) break;
          goto LAB_144a98b01;
        }
        uVar7 = uVar7 + 1;
        iVar13 = iVar13 + -0x20;
        uVar11 = 0xffffffff;
      } while (uVar14 != uVar7);
    }
  }
  *param_1 = uVar11 + 1;
  param_1[1] = uVar4 + 1;
  if (param_1[6] * 0x9249 < (int)uVar10) {
    uVar6 = FUN_14001cc68(0x200000,0);
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1U;
    if ((uint)param_1[7] < iVar2 + 1U) {
      FUN_1461b8a78(param_1 + 4,iVar2);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 8) = uVar6;
    piVar12 = param_1 + 8;
    uVar5 = FUN_144a54ea4(piVar12,0x9249);
    FUN_1447c6044(piVar12,uVar5,0x9249,0);
    piVar9 = *(int **)(param_1 + 0xc);
    if (*(int **)(param_1 + 0xc) == (int *)0x0) {
      piVar9 = piVar12;
    }
    uVar10 = uVar11 + 0x1f;
    if (-1 < (int)uVar11) {
      uVar10 = uVar11;
    }
    piVar9[(int)uVar10 >> 5] = piVar9[(int)uVar10 >> 5] | 1 << ((byte)uVar11 & 0x1f);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)((int)uVar11 / 0x9249) * 8);
  lVar8 = (longlong)((int)uVar11 % 0x9249) * 0x38;
  *(undefined8 *)(lVar3 + 8 + lVar8) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar8) = 0x100000000;
  puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar8);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  *(undefined8 *)(lVar3 + 0x28 + lVar8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x30 + lVar8) = 0x3f800000;
  *(byte *)(lVar3 + 0x34 + lVar8) = *(byte *)(lVar3 + 0x34 + lVar8) & 0xe0 | 0x10;
  *(undefined1 *)(lVar3 + 0x35 + lVar8) = 0xff;
  return uVar11;
}



// FUNCTION 144a98c79 FUN_144a98c79 body=142 status=ok
// SIG undefined FUN_144a98c79(void)

ulonglong FUN_144a98c79(undefined8 *param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(int *)(param_1 + 1);
  uVar4 = 0xffffffff;
  if (lVar5 != 0) {
    puVar3 = (ushort *)*param_1;
    if (param_3 == 0) {
      uVar4 = lVar5 * 2;
      do {
        puVar1 = (ushort *)((longlong)puVar3 + (uVar4 - 2));
        if (puVar1 < puVar3) {
          return 0xffffffff;
        }
        uVar4 = uVar4 - 2;
      } while (*puVar1 != param_2);
    }
    else {
      uVar4 = lVar5 * 2;
      do {
        puVar1 = (ushort *)((longlong)puVar3 + (uVar4 - 2));
        if (puVar1 < puVar3) {
          return 0xffffffff;
        }
        uVar2 = *puVar1;
        uVar4 = uVar4 - 2;
      } while ((ushort)(uVar2 + (ushort)(0x19 < uVar2 - 0x61) * 0x20 + -0x20) !=
               (ushort)(param_2 + (ushort)(0x19 < param_2 - 0x61) * 0x20 + -0x20));
    }
    uVar4 = uVar4 >> 1 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144a98d08 FUN_144a98d08 body=198 status=ok
// SIG undefined FUN_144a98d08(void)

void FUN_144a98d08(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 144a98dce FUN_144a98dce body=198 status=ok
// SIG undefined FUN_144a98dce(void)

void FUN_144a98dce(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 144a98e94 FUN_144a98e94 body=883 status=ok
// SIG undefined FUN_144a98e94(void)

void FUN_144a98e94(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  wchar_t *local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  uint uVar8;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined8 *)(param_2 + 0x180);
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae13e8) && (FUN_144b3d300(&DAT_14cae13e8), DAT_14cae13e8 == -1)) {
    FUN_1461c55da(local_48);
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_80 = "Unknown";
    local_88 = 0;
    local_90 = L"GPUSkinVFBase";
    local_98 = L"FGPUSkinVertexFactoryUniformShaderParameters";
    local_70 = 0x40;
    local_78 = 0x21c;
    local_68 = local_48;
    FUN_140b49562(&DAT_14cae1368,1,1);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1435181da);
    _Init_thread_footer(&DAT_14cae13e8);
  }
  uVar10 = *(ulonglong *)(param_1 + 0xa0);
  uVar6 = param_1 + 0xa0 + ((longlong)uVar10 >> 0x18);
  if ((uVar10 & 1) == 0) {
    uVar6 = uVar10;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar6 + lVar5 * 4) == DAT_14cae1390) {
        uVar10 = *(ulonglong *)(param_1 + 0xb0);
        if ((uVar10 & 1) != 0) {
          uVar10 = ((longlong)uVar10 >> 0x18) + param_1 + 0xb0;
        }
        puVar13 = (ushort *)(uVar10 + lVar5);
        goto LAB_144a98fec;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  puVar13 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_144a98fec:
  uVar1 = *puVar13;
  if (uVar1 != 0xffff) {
    puVar3 = (ulonglong *)*param_3;
    uVar10 = *puVar3;
    uVar6 = ((longlong)uVar10 >> 0x18) + (longlong)puVar3;
    if ((uVar10 & 1) == 0) {
      uVar6 = uVar10;
    }
    uVar8 = (uint)puVar3[1];
    uVar9 = 0;
    uVar11 = uVar8;
    if (8 < (int)uVar8) {
      uVar9 = 0;
      uVar12 = uVar8;
      do {
        uVar11 = uVar12 >> 1;
        if (*(ushort *)(uVar6 + (ulonglong)(uVar11 + uVar9) * 2) < uVar1) {
          uVar9 = uVar11 + uVar9 + (uVar12 & 1);
        }
        bVar4 = 0x11 < uVar12;
        uVar12 = uVar11;
      } while (bVar4);
    }
    uVar11 = uVar11 + uVar9 + 1;
    if ((int)uVar11 < (int)uVar8) {
      uVar8 = uVar11;
    }
    iVar7 = uVar8 - uVar9;
    if (iVar7 != 0 && (int)uVar9 <= (int)uVar8) {
      uVar10 = (ulonglong)uVar9;
      do {
        if (*(ushort *)(uVar6 + uVar10 * 2) == uVar1) {
          *(undefined8 *)(param_3[1] + (uVar10 & 0xffffffff) * 8) = uVar2;
          break;
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  if (-1 < *(int *)(param_2 + 400)) {
    iVar7 = *(int *)(param_4 + 0x60);
    *(uint *)(param_4 + 0x60) = iVar7 + 1U;
    if (*(uint *)(param_4 + 100) < iVar7 + 1U) {
      FUN_14744556c(param_4,iVar7);
    }
    lVar5 = *(longlong *)(param_4 + 0x58);
    if (*(longlong *)(param_4 + 0x58) == 0) {
      lVar5 = param_4;
    }
    uVar2 = *(undefined8 *)(param_2 + 0x188);
    *(uint *)(lVar5 + (longlong)iVar7 * 0xc) = *(uint *)(param_2 + 400) & 0xf | 0x80000000;
    *(undefined8 *)(lVar5 + 4 + (longlong)iVar7 * 0xc) = uVar2;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a99208 FUN_144a99208 body=1336 status=ok
// SIG undefined FUN_144a99208(void)

void FUN_144a99208(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong unaff_RBP;
  longlong lVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  undefined *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined6 uVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = param_3;
  local_a0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca17ac0) && (FUN_144b3d300(&DAT_14ca17ac0), DAT_14ca17ac0 == -1)) {
    FUN_141636eb8(&local_70);
    local_c0 = 0;
    local_d0 = 0;
    local_f0 = "Unknown";
    local_100 = 0;
    uStack_f8 = 0;
    local_108 = L"FParameters";
    local_c8 = 0;
    local_e0 = 0x160;
    local_e8 = 0x360;
    local_d8 = &local_70;
    FUN_140b49562(&DAT_14ca17a40,0,1);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142e2763f);
    _Init_thread_footer(&DAT_14ca17ac0);
  }
  lVar9 = DAT_14ca17a88;
  iVar4 = *(int *)(DAT_14ca17a88 + 0x38);
  if (0 < (longlong)iVar4) {
    lVar7 = *local_a8;
    lVar16 = 0;
    unaff_RBP = 0;
    iVar12 = 0;
    iVar21 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar9 + 0x30) + 2 + lVar16 * 4);
      if (bVar2 < 0x14) {
        uVar3 = *(ushort *)(*(longlong *)(lVar9 + 0x30) + lVar16 * 4);
        uVar17 = (ulonglong)uVar3;
        iVar11 = iVar12;
        if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
          if (bVar2 == 0x13) {
            if (iVar21 < *(int *)(lVar7 + 0x38)) {
              uVar8 = *(ulonglong *)(lVar7 + 0x30);
              uVar20 = lVar7 + ((longlong)uVar8 >> 0x18) + 0x30;
              if ((uVar8 & 1) == 0) {
                uVar20 = uVar8;
              }
              if (uVar3 == *(ushort *)(uVar20 + 2 + (longlong)iVar21 * 4)) {
                iVar21 = iVar21 + 1;
                goto LAB_144a992f9;
              }
            }
            if ((*(longlong *)(param_4 + uVar17) != 0) &&
               ((*(byte *)(param_4 + 8 + uVar17) & 2) == 0)) goto LAB_144a99310;
          }
        }
        else {
          uVar5 = *(uint *)(lVar7 + 0x18);
          if ((int)unaff_RBP < (int)uVar5) {
            uVar8 = *(ulonglong *)(lVar7 + 0x10);
            uVar20 = ((longlong)uVar8 >> 0x18) + lVar7 + 0x10;
            if ((uVar8 & 1) == 0) {
              uVar20 = uVar8;
            }
            puVar18 = (ushort *)(uVar20 + (longlong)(int)unaff_RBP * 4);
            do {
              if (uVar3 <= *puVar18) {
                if (*puVar18 != uVar3) goto LAB_144a99303;
                goto LAB_144a992f9;
              }
              uVar13 = (int)unaff_RBP + 1;
              unaff_RBP = (ulonglong)uVar13;
              puVar18 = puVar18 + 2;
            } while (uVar5 != uVar13);
            unaff_RBP = (ulonglong)uVar5;
          }
LAB_144a99303:
          iVar6 = *(int *)(lVar7 + 0x28);
          if (iVar12 < iVar6) {
            local_b0 = (longlong)iVar12 * 6;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0x20);
              uVar20 = lVar7 + ((longlong)uVar8 >> 0x18) + 0x20;
              if ((uVar8 & 1) == 0) {
                uVar20 = uVar8;
              }
              if (uVar3 <= *(ushort *)(uVar20 + local_b0)) {
                iVar11 = iVar12;
                if (*(ushort *)(uVar20 + local_b0) == uVar3) goto LAB_144a992f9;
                break;
              }
              iVar12 = iVar12 + 1;
              local_b0 = local_b0 + 6;
              iVar11 = iVar6;
            } while (iVar6 != iVar12);
          }
LAB_144a99310:
          *(undefined8 *)(param_4 + uVar17) = 0;
          iVar12 = iVar11;
        }
      }
LAB_144a992f9:
      lVar16 = lVar16 + 1;
    } while (lVar16 != iVar4);
  }
  local_98 = *local_a8;
  lStack_90 = local_a8[1];
  lVar9 = *param_6;
  lVar7 = param_6[2];
  param_6[2] = 0;
  local_58 = param_6[6];
  uStack_50 = param_6[7];
  local_68 = (undefined4)param_6[4];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_60 = (undefined4)param_6[5];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x2c);
  if (lVar9 != 0) {
    *param_6 = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca17ac0) && (FUN_144b3d300(&DAT_14ca17ac0), DAT_14ca17ac0 == -1)) {
    FUN_141636eb8(&local_88);
    local_c0 = 0;
    local_d0 = 0;
    local_f0 = "Unknown";
    local_100 = 0;
    uStack_f8 = 0;
    local_108 = L"FParameters";
    local_c8 = 0;
    local_e0 = 0x160;
    local_e8 = 0x360;
    local_d8 = &local_88;
    FUN_140b49562(&DAT_14ca17a40,0,1);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142e2763f);
    _Init_thread_footer(&DAT_14ca17ac0);
  }
  FUN_140069376(param_1);
  uVar15 = (undefined6)(unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar19 + 0x46;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x240);
    puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar19 + 0x46;
  }
  *puVar1 = (ulonglong)puVar10;
  local_80 = DAT_14ca17a88;
  if (DAT_14ca17a88 != 0) {
    LOCK();
    *(int *)(DAT_14ca17a88 + 8) = *(int *)(DAT_14ca17a88 + 8) + 1;
    UNLOCK();
  }
  local_78 = &DAT_14ca17a40;
  local_108 = (wchar_t *)CONCAT71(local_108._1_7_,2);
  local_88 = param_4;
  FUN_140068f1a(puVar19,local_a0,&local_88,uVar14);
  *puVar19 = &PTR_FUN_14a299150;
  puVar19[0x38] = param_4;
  puVar19[0x39] = local_98;
  puVar19[0x3a] = lStack_90;
  puVar19[0x3b] = param_5;
  *(undefined4 *)(puVar19 + 0x3c) = 0;
  puVar19[0x3e] = lVar9;
  puVar19[0x40] = lVar7;
  *(undefined4 *)(puVar19 + 0x44) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar19 + 0x224) = local_58._4_4_;
  *(undefined4 *)(puVar19 + 0x45) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar19 + 0x22c) = uStack_50._4_4_;
  *(undefined4 *)(puVar19 + 0x42) = local_68;
  *(undefined4 *)((longlong)puVar19 + 0x214) = uStack_64;
  *(undefined4 *)(puVar19 + 0x43) = uStack_60;
  *(undefined4 *)((longlong)puVar19 + 0x21c) = uStack_5c;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar19);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a99741 FUN_144a99741 body=1482 status=ok
// SIG undefined FUN_144a99741(void)

undefined8 * FUN_144a99741(longlong param_1,double *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
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
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar10 + 0x14;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0xb0);
    puVar10 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar10 + 0x14;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  *puVar10 = &PTR_FUN_14afab2c8;
  puVar10[0x12] = 0;
  iVar5 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar10;
  dVar3 = param_2[5];
  dVar4 = param_2[4];
  *(float *)(puVar10 + 4) = (float)param_2[3];
  *(float *)((longlong)puVar10 + 0x24) = (float)dVar4;
  *(float *)(puVar10 + 5) = (float)dVar3;
  dVar3 = param_2[2];
  dVar4 = param_2[1];
  *(float *)(puVar10 + 2) = (float)*param_2;
  *(float *)((longlong)puVar10 + 0x14) = (float)dVar4;
  *(float *)(puVar10 + 3) = (float)dVar3;
  puVar10[6] = param_2[6];
  *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(param_2 + 7);
  dVar3 = param_2[10];
  dVar4 = param_2[9];
  *(float *)(puVar10 + 8) = (float)param_2[8];
  *(float *)((longlong)puVar10 + 0x44) = (float)dVar4;
  *(float *)(puVar10 + 9) = (float)dVar3;
  puVar10[0x12] = DAT_14cb50b98;
  puVar10[10] = param_2[0xb];
  *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(puVar10 + 0x11) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(param_2 + 0x11);
  puVar10[0xc] = param_2[0x10];
  puVar10[0xe] = param_2[0xe];
  *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)puVar10 + 0x7c) = *(undefined4 *)((longlong)param_2 + 100);
  fVar11 = *(float *)(param_2 + 0xd);
  if (fVar11 <= 1.0) {
    fVar11 = 1.0;
  }
  *(float *)(puVar10 + 0x10) = fVar11;
  *(undefined4 *)((longlong)puVar10 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x6c);
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
              0x110) < DAT_14cb50400) {
    FUN_144b3d300(&DAT_14cb50400);
    if (DAT_14cb50400 == -1) {
      FUN_1461c8faa(local_48);
      local_50 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_88 = L"GbxWindParams";
      local_90 = L"GbxWindParams";
      local_98 = L"FGbxWindUniformBuffer";
      local_58 = 0;
      local_70 = 0x90;
      local_78 = 0x12;
      local_68 = local_48;
      FUN_140b49562(&DAT_14cb50380,1,2);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143beeb95);
      _Init_thread_footer(&DAT_14cb50400);
    }
  }
  uVar6 = DAT_14cb50398;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x50);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 9;
  }
  *puVar1 = (ulonglong)puVar8;
  puVar9[1] = uVar6;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_14a1fb9b8;
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
              0x110) < DAT_14cb50400) {
    FUN_144b3d300(&DAT_14cb50400);
    if (DAT_14cb50400 == -1) {
      FUN_1461c8faa(local_48);
      local_50 = 0;
      local_60 = 0;
      local_80 = "Unknown";
      local_88 = L"GbxWindParams";
      local_90 = L"GbxWindParams";
      local_98 = L"FGbxWindUniformBuffer";
      local_58 = 0;
      local_70 = 0x90;
      local_78 = 0x12;
      local_68 = local_48;
      FUN_140b49562(&DAT_14cb50380,1,2);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143beeb95);
      _Init_thread_footer(&DAT_14cb50400);
    }
  }
  puVar9[3] = puVar10 + 2;
  lVar7 = DAT_14cb503c8;
  puVar9[4] = DAT_14cb503c8;
  if (lVar7 != 0) {
    LOCK();
    piVar2 = (int *)(lVar7 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar9[5] = &DAT_14cb50380;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar9 + 0x3c) = 0;
  *puVar9 = &PTR_FUN_14afab300;
  puVar9[8] = puVar10 + 2;
  iVar5 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar5 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar5 * 8) = puVar9;
  *(int *)(puVar9 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a99d0c FUN_144a99d0c body=753 status=ok
// SIG undefined FUN_144a99d0c(void)

longlong * FUN_144a99d0c(longlong *param_1,void *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  int iVar8;
  size_t _Size;
  
  *param_1 = (longlong)&PTR__purecall_149e35f70;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0x11] = 0;
  param_1[1] = (longlong)(param_1 + 2);
  param_1[0xf] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = DAT_14c89603c;
  *(undefined4 *)(param_1 + 9) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868710) {
    FUN_144b3d300(&DAT_14c868710);
    if (DAT_14c868710 == -1) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = (undefined8 *)&DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
  }
  puVar3 = DAT_14c868708;
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(DAT_14c868708 + 1);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *puVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) & 0xfc;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  param_1[0xf] = 0;
  if (*(code **)(*param_1 + 0x68) == FUN_146821802) {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  *param_1 = (longlong)&PTR_FUN_149e36e20;
  lVar2 = DAT_14c874d68;
  iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
    uVar7 = 0;
  }
  else if (iVar8 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  param_1[7] = (longlong)*(int *)(lVar2 + uVar7 * 4);
  ppuVar6 = &PTR_FUN_149e37220;
  *param_1 = (longlong)&PTR_FUN_149e37220;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  param_1[0x15] = 0;
  _Size = param_3 + 7 >> 3;
  iVar8 = (int)_Size;
  *(int *)(param_1 + 0x13) = iVar8;
  if (iVar8 != 0) {
    FUN_1447403be(param_1 + 0x12,0);
    ppuVar6 = (undefined **)*param_1;
  }
  if ((code *)ppuVar6[0x16] == FUN_140996f94) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  }
  else {
    (*(code *)ppuVar6[0x16])(param_1,1);
    ppuVar6 = (undefined **)*param_1;
  }
  if ((code *)ppuVar6[0x1e] == FUN_1449c2eca) {
    *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) | 1;
  }
  else {
    (*(code *)ppuVar6[0x1e])(param_1,1);
  }
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 0x80;
  if (param_2 != (void *)0x0) {
    memcpy((void *)param_1[0x12],param_2,_Size);
    uVar7 = param_1[0x14] & 7;
    if (uVar7 != 0) {
      pbVar1 = (byte *)(param_1[0x12] + (longlong)(int)((ulonglong)param_1[0x14] >> 3));
      *pbVar1 = *pbVar1 & (&DAT_149e37090)[uVar7];
    }
  }
  return param_1;
}



// FUNCTION 144a99ffe FUN_144a99ffe body=66 status=ok
// SIG undefined FUN_144a99ffe(void)

undefined8 FUN_144a99ffe(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
LAB_144a9a025:
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x20);
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      *param_1 = uVar2;
      param_1[1] = 0;
    }
    else {
      if (*(longlong *)(lVar1 + 0x20) != 0) goto LAB_144a9a025;
      *param_1 = *(undefined8 *)(lVar1 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = uVar2;
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 144a9a040 FUN_144a9a040 body=990 status=ok
// SIG undefined FUN_144a9a040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_144a9a040(longlong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e9950) && (FUN_144b3d300(&DAT_14c9e9950), DAT_14c9e9950 == -1)) {
    FUN_144a8da38();
    FUN_1461e8dc2();
    FUN_140db5666(&DAT_14c9e98a8,0,&DAT_14c9e9840,L"FDeferredLightPS",
                  L"/Engine/Private/DeferredLightPixelShaders.usf",L"DeferredLightPixelMain",3,
                  0xc000,FUN_1471d2e00,FUN_1471d2da0,FUN_140919a30,&LAB_142ce8692,&LAB_14712ac0c,
                  &LAB_14712ac08,0xe0,&DAT_14c9ea828);
    _DAT_14c9e98a8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ce86b6);
    _Init_thread_footer(&DAT_14c9e9950);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)DAT_14c9e98d8 + (int)((ulonglong)DAT_14c9e98d8 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*plVar3 == DAT_14c9e98d8) {
          uVar6 = 0;
          if (plVar3 != (longlong *)0x0) {
            uVar4 = 0;
            if ((ulonglong *)(plVar3 + 1) == (ulonglong *)0x0) goto LAB_144a9a1fe;
            uVar4 = plVar3[1];
            puVar1 = *(ulonglong **)(uVar4 + 0x28);
            uVar6 = (DAT_14c9e98d0 ^ (longlong)param_3) * -0x622015f714c7d297;
            lVar7 = (uVar6 >> 0x2f ^ (longlong)param_3 ^ uVar6) * -0x622015f714c7d297;
            uVar6 = puVar1[3];
            if ((uVar6 & 1) != 0) {
              uVar6 = (longlong)puVar1 + ((longlong)uVar6 >> 0x18) + 0x18;
            }
            uVar5 = puVar1[5];
            if ((uVar5 & 1) != 0) {
              uVar5 = (longlong)puVar1 + ((longlong)uVar5 >> 0x18) + 0x28;
            }
            uVar8 = puVar1[1];
            if ((uVar8 & 1) != 0) {
              uVar8 = (longlong)puVar1 + ((longlong)uVar8 >> 0x18) + 8;
            }
            uVar10 = *puVar1;
            if ((uVar10 & 1) != 0) {
              uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar1;
            }
            uVar9 = *(uint *)(uVar10 + (ulonglong)
                                       ((uint)puVar1[2] &
                                        ((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2d69 &
                                       0xffff) * 4);
            if (uVar9 != 0xffffffff) {
              goto LAB_144a9a1ae;
            }
          }
          break;
        }
        iVar2 = (int)plVar3[2];
      } while (iVar2 != -1);
    }
  }
  goto LAB_144a9a1ca;
  while (uVar9 = *(uint *)(uVar8 + uVar10 * 4), uVar9 != 0xffffffff) {
LAB_144a9a1ae:
    uVar10 = (ulonglong)uVar9;
    if ((*(ulonglong *)(uVar6 + uVar10 * 8) == DAT_14c9e98d0) &&
       (*(int *)(uVar5 + uVar10 * 4) == param_3)) {
      uVar5 = puVar1[7];
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)(puVar1 + 7) + ((longlong)uVar5 >> 0x18);
      }
      uVar6 = *(ulonglong *)(uVar5 + (longlong)(int)uVar9 * 8);
      if ((uVar6 & 1) != 0) {
        uVar6 = ((longlong)uVar6 >> 0x18) + uVar5 + (longlong)(int)uVar9 * 8;
      }
      if (uVar6 != 0) goto LAB_144a9a1fe;
      break;
    }
  }
LAB_144a9a1ca:
  uVar6 = 0;
  uVar4 = 0;
LAB_144a9a1fe:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9e9950) && (FUN_144b3d300(&DAT_14c9e9950), DAT_14c9e9950 == -1)) {
    FUN_144a8da38();
    FUN_1461e8dc2();
    FUN_140db5666(&DAT_14c9e98a8,0,&DAT_14c9e9840,L"FDeferredLightPS",
                  L"/Engine/Private/DeferredLightPixelShaders.usf",L"DeferredLightPixelMain",3,
                  0xc000,FUN_1471d2e00,FUN_1471d2da0,FUN_140919a30,&LAB_142ce8692,&LAB_14712ac0c,
                  &LAB_14712ac08,0xe0,&DAT_14c9ea828);
    _DAT_14c9e98a8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_142ce86b6);
    _Init_thread_footer(&DAT_14c9e9950);
  }
  *param_2 = uVar6;
  param_2[1] = uVar4;
  return param_2;
}



// FUNCTION 144a9a41e FUN_144a9a41e body=3626 status=ok
// SIG undefined FUN_144a9a41e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a9a41e(ulonglong *param_1,int param_2,ulonglong param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  void *pvVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  void *pvVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined2 *puVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong _Size;
  size_t _Size_00;
  void *_Dst;
  longlong *plVar29;
  bool bVar30;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  wchar_t *local_120;
  undefined8 uStack_118;
  char *local_110;
  code *local_108;
  code *local_100;
  ulonglong **local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined8 *local_c0;
  int local_b8;
  ushort local_b2;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined2 *local_98;
  longlong local_90;
  ulonglong local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar29 = *(longlong **)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb32be8) && (FUN_144b3d300(&DAT_14cb32be8), DAT_14cb32be8 == -1)) {
    FUN_141643dce();
    FUN_1461ebff0();
    local_d0 = &DAT_14cb34130;
    local_e0 = &LAB_14712ac08;
    local_e8 = &LAB_14712ac0c;
    local_f0 = &LAB_14804e890;
    local_f8 = (ulonglong **)&LAB_14804e894;
    local_100 = FUN_14804e898;
    local_108 = FUN_14804e8f8;
    local_120 = L"FillIntBuffer";
    local_128 = L"/Plugin/FX/Niagara/Private/NiagaraFillIntBuffer.usf";
    local_d8 = 0xe0;
    local_110 = (char *)CONCAT44(local_110._4_4_,1);
    uStack_118 = CONCAT44(uStack_118._4_4_,5);
    FUN_140db5666(&DAT_14cb32b40,0,&DAT_14cb32ad8,L"NiagaraFillIntBufferCS");
    _DAT_14cb32b40 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1438fa6fc);
    _Init_thread_footer(&DAT_14cb32be8);
  }
  if ((int)plVar29[1] != *(int *)((longlong)plVar29 + 0x34)) {
    plVar22 = plVar29 + 7;
    if ((longlong *)plVar29[8] != (longlong *)0x0) {
      plVar22 = (longlong *)plVar29[8];
    }
    iVar9 = *(int *)((longlong)plVar22 +
                    (ulonglong)
                    ((int)plVar29[9] - 1U &
                    (int)DAT_14cb32b70 + (int)((ulonglong)DAT_14cb32b70 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        plVar22 = (longlong *)(*plVar29 + (longlong)iVar9 * 0x18);
        if (*plVar22 == DAT_14cb32b70) {
          puVar17 = (undefined8 *)0x0;
          if (plVar22 != (longlong *)0x0) {
            lVar16 = 0;
            if (plVar22 + 1 == (longlong *)0x0) goto LAB_144a9a617;
            lVar16 = plVar22[1];
            puVar20 = *(ulonglong **)(lVar16 + 0x28);
            lVar23 = ((ulonglong)(DAT_14cb32b68 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14cb32b68 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar12 = puVar20[3];
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)puVar20 + ((longlong)uVar12 >> 0x18) + 0x18;
            }
            uVar24 = puVar20[5];
            if ((uVar24 & 1) != 0) {
              uVar24 = (longlong)puVar20 + ((longlong)uVar24 >> 0x18) + 0x28;
            }
            uVar27 = puVar20[1];
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)puVar20 + ((longlong)uVar27 >> 0x18) + 8;
            }
            uVar28 = *puVar20;
            if ((uVar28 & 1) != 0) {
              uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar20;
            }
            uVar11 = *(uint *)(uVar28 + (ulonglong)
                                        ((uint)puVar20[2] &
                                         ((uint)((ulonglong)lVar23 >> 0x2f) ^ (uint)lVar23) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar11 != 0xffffffff) {
              goto LAB_144a9a5c5;
            }
          }
          break;
        }
        iVar9 = (int)plVar22[2];
      } while (iVar9 != -1);
    }
  }
  goto LAB_144a9a5e2;
  while (uVar11 = *(uint *)(uVar27 + uVar28 * 4), uVar11 != 0xffffffff) {
LAB_144a9a5c5:
    uVar28 = (ulonglong)uVar11;
    if ((*(longlong *)(uVar12 + uVar28 * 8) == DAT_14cb32b68) &&
       (*(int *)(uVar24 + uVar28 * 4) == 0)) {
      uVar12 = puVar20[7];
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)(puVar20 + 7) + ((longlong)uVar12 >> 0x18);
      }
      puVar17 = *(undefined8 **)(uVar12 + (longlong)(int)uVar11 * 8);
      if (((ulonglong)puVar17 & 1) != 0) {
        puVar17 = (undefined8 *)(((longlong)puVar17 >> 0x18) + uVar12 + (longlong)(int)uVar11 * 8);
      }
      if (puVar17 != (undefined8 *)0x0) goto LAB_144a9a617;
      break;
    }
  }
LAB_144a9a5e2:
  puVar17 = (undefined8 *)0x0;
  lVar16 = 0;
LAB_144a9a617:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb32be8) && (FUN_144b3d300(&DAT_14cb32be8), DAT_14cb32be8 == -1)) {
    FUN_141643dce();
    FUN_1461ebff0();
    local_d0 = &DAT_14cb34130;
    local_e0 = &LAB_14712ac08;
    local_e8 = &LAB_14712ac0c;
    local_f0 = &LAB_14804e890;
    local_f8 = (ulonglong **)&LAB_14804e894;
    local_100 = FUN_14804e898;
    local_108 = FUN_14804e8f8;
    local_120 = L"FillIntBuffer";
    local_128 = L"/Plugin/FX/Niagara/Private/NiagaraFillIntBuffer.usf";
    local_d8 = 0xe0;
    local_110 = (char *)CONCAT44(local_110._4_4_,1);
    uStack_118 = CONCAT44(uStack_118._4_4_,5);
    FUN_140db5666(&DAT_14cb32b40,0,&DAT_14cb32ad8,L"NiagaraFillIntBufferCS");
    _DAT_14cb32b40 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1438fa6fc);
    _Init_thread_footer(&DAT_14cb32be8);
  }
  local_7c = param_5;
  local_c0 = puVar17;
  local_88 = param_3;
  local_80 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb341b0) && (FUN_144b3d300(&DAT_14cb341b0), DAT_14cb341b0 == -1)) {
    FUN_1461ec13a(&local_70);
    local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_f0 = (undefined1 *)((ulonglong)local_f0 & 0xffffffffffffff00);
    local_110 = "Unknown";
    local_120 = (wchar_t *)0x0;
    uStack_118 = 0;
    local_128 = L"FParameters";
    local_e8 = (undefined1 *)0x0;
    local_100 = (code *)CONCAT44(local_100._4_4_,0x10);
    local_108 = (code *)CONCAT44(local_108._4_4_,0x92);
    local_f8 = &local_70;
    FUN_140b49562(&DAT_14cb34130,0,1);
    if (local_70 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438fb818);
    _Init_thread_footer(&DAT_14cb341b0);
    puVar17 = local_c0;
  }
  local_90 = lVar16;
  if (puVar17 == (undefined8 *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(lVar16 + 8) + 0x50) +
              (longlong)*(int *)((longlong)puVar17 + 0xd4) * 8);
    if (uVar12 == 0) {
      uVar12 = FUN_1400bafc2(*(longlong *)(lVar16 + 8),(longlong)*(int *)((longlong)puVar17 + 0xd4),
                             1);
    }
  }
  uVar13 = FUN_140029432(param_1,uVar12,0);
  param_1[0x37] = uVar12;
  puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar14 + 3;
  if ((undefined8 *)param_1[1] < puVar15) {
    FUN_140023dd8(param_1,0x20);
    puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar14 + 3;
  }
  *param_1 = (ulonglong)puVar15;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar14;
  param_1[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_14a37d340;
  puVar14[2] = uVar13;
  plVar29 = (longlong *)param_1[0x10];
  if (plVar29 != (longlong *)0x0) goto LAB_144a9a728;
  puVar19 = (ulonglong *)param_1[1];
  plVar29 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
  puVar20 = (ulonglong *)(plVar29 + 9);
  if (puVar19 < puVar20) {
    FUN_140023dd8(param_1,0x58);
    puVar19 = (ulonglong *)param_1[1];
    plVar29 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar20 = (ulonglong *)(plVar29 + 9);
  }
  *param_1 = (ulonglong)puVar20;
  puVar26 = (ulonglong *)((longlong)puVar20 + 0xfU & 0xfffffffffffffff0);
  puVar20 = puVar26 + 0x16;
  if (puVar19 < puVar20) {
    FUN_140023dd8(param_1,0xc0);
    puVar26 = (ulonglong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar20 = puVar26 + 0x16;
  }
  *param_1 = (ulonglong)puVar20;
  *puVar26 = param_1[0x11];
  puVar26[1] = (ulonglong)param_1;
  puVar26[2] = 0;
  puVar26[3] = 0;
  puVar26[4] = 0;
  puVar26[5] = 0;
  *(undefined8 *)((longlong)puVar26 + 0x2e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar30 = DAT_14c872d30 != 0;
    puVar26[7] = 0;
    puVar26[8] = 0;
    puVar26[9] = 0;
    puVar26[10] = 0;
    *(undefined8 *)((longlong)puVar26 + 0x56) = 0;
    if (bVar30) goto LAB_144a9ac81;
    FUN_145bdc178();
    bVar30 = DAT_14c872d30 != 0;
    puVar26[0xc] = 0;
    puVar26[0xd] = 0;
    puVar26[0xe] = 0;
    puVar26[0xf] = 0;
    *(undefined8 *)((longlong)puVar26 + 0x7e) = 0;
    if (bVar30) goto LAB_144a9ac94;
    FUN_145bdc178();
    bVar30 = DAT_14c872d30 == 0;
    puVar26[0x11] = 0;
    puVar26[0x12] = 0;
    puVar26[0x13] = 0;
    puVar26[0x14] = 0;
    *(undefined8 *)((longlong)puVar26 + 0xa6) = 0;
    if (bVar30) {
      FUN_145bdc178();
    }
  }
  else {
    puVar26[9] = 0;
    puVar26[10] = 0;
    puVar26[7] = 0;
    puVar26[8] = 0;
    *(undefined8 *)((longlong)puVar26 + 0x56) = 0;
LAB_144a9ac81:
    puVar26[0xe] = 0;
    puVar26[0xf] = 0;
    puVar26[0xc] = 0;
    puVar26[0xd] = 0;
    *(undefined8 *)((longlong)puVar26 + 0x7e) = 0;
LAB_144a9ac94:
    puVar26[0x13] = 0;
    puVar26[0x14] = 0;
    puVar26[0x11] = 0;
    puVar26[0x12] = 0;
    *(undefined8 *)((longlong)puVar26 + 0xa6) = 0;
  }
  param_1[0x11] = (ulonglong)puVar26;
  *plVar29 = (longlong)puVar26;
  plVar29[1] = 0;
  *(undefined4 *)(plVar29 + 2) = 0;
  plVar29[3] = 0;
  *(undefined4 *)(plVar29 + 4) = 0;
  plVar29[5] = 0;
  *(undefined4 *)(plVar29 + 6) = 0;
  plVar29[7] = 0;
  *(undefined4 *)(plVar29 + 8) = 0;
  param_1[0x10] = (ulonglong)plVar29;
LAB_144a9a728:
  iVar9 = (int)plVar29[6] + (int)plVar29[4];
  iVar10 = iVar9 + (int)plVar29[8];
  if (iVar10 != 0 && SCARRY4(iVar9,(int)plVar29[8]) == iVar10 < 0) {
    plVar29[1] = 0;
    *(undefined4 *)(plVar29 + 2) = 0;
    plVar29[3] = 0;
    *(undefined4 *)(plVar29 + 4) = 0;
    plVar29[5] = 0;
    *(undefined4 *)(plVar29 + 6) = 0;
    plVar29[7] = 0;
    *(undefined4 *)(plVar29 + 8) = 0;
    plVar29 = (longlong *)param_1[0x10];
  }
  puVar2 = (undefined2 *)*puVar17;
  puVar25 = (undefined2 *)(((longlong)puVar2 >> 0x18) + (longlong)puVar17);
  if (((ulonglong)puVar2 & 1) == 0) {
    puVar25 = puVar2;
  }
  local_68 = DAT_14cb3416c;
  if ((longlong)*(int *)(puVar17 + 1) != 0) {
    local_98 = puVar25 + (longlong)*(int *)(puVar17 + 1) * 4;
    local_ac = DAT_14cb3416c;
    local_b8 = param_4;
    do {
      uVar28 = (ulonglong)(ushort)puVar25[2];
      local_b2 = puVar25[3];
      _Size = (ulonglong)local_b2;
      local_b0 = *puVar25;
      local_ae = puVar25[1];
      uVar11 = *(uint *)(plVar29 + 2);
      local_a0 = (ulonglong)uVar11;
      iVar9 = uVar11 + local_b2;
      lVar16 = *plVar29;
      puVar20 = (ulonglong *)(lVar16 + 0x10);
      pvVar21 = *(void **)(lVar16 + 0x10);
      uVar27 = *(ulonglong *)(lVar16 + 0x18);
      uVar24 = (longlong)pvVar21 + _Size;
      if (uVar11 == 0) {
        if (uVar27 < uVar24) {
          FUN_140023dd8(puVar20,local_b2 + 1);
          pvVar21 = (void *)*puVar20;
          uVar24 = (longlong)pvVar21 + _Size;
        }
        *puVar20 = uVar24;
        pvVar18 = pvVar21;
      }
      else if (uVar27 < uVar24) {
        uVar24 = (longlong)pvVar21 + (longlong)iVar9;
        pvVar18 = pvVar21;
        local_a8 = uVar28;
        if (uVar27 < uVar24) {
          FUN_140023dd8(puVar20,iVar9 + 1);
          pvVar18 = (void *)*puVar20;
          uVar24 = (longlong)iVar9 + (longlong)pvVar18;
        }
        *puVar20 = uVar24;
        memcpy(pvVar18,(void *)plVar29[1],(longlong)(int)plVar29[2]);
        pvVar21 = (void *)((longlong)(int)plVar29[2] + (longlong)pvVar18);
        uVar28 = local_a8;
      }
      else {
        pvVar18 = (void *)plVar29[1];
        *puVar20 = uVar24;
      }
      memcpy(pvVar21,(void *)((longlong)&local_88 + uVar28),_Size);
      plVar29[1] = (longlong)pvVar18;
      *(int *)(plVar29 + 2) = iVar9;
      lVar23 = *plVar29;
      puVar20 = (ulonglong *)(lVar23 + 0x38);
      lVar16 = (longlong)(int)plVar29[4] + 1;
      puVar17 = *(undefined8 **)(lVar23 + 0x38);
      if ((longlong)(int)plVar29[4] == 0) {
        puVar17 = (undefined8 *)((longlong)puVar17 + 1U & 0xfffffffffffffffe);
        puVar15 = puVar17 + 1;
        puVar14 = puVar17;
        if (*(undefined8 **)(lVar23 + 0x40) < puVar15) {
          FUN_140023dd8(puVar20,10);
          puVar17 = (undefined8 *)(*puVar20 + 1 & 0xfffffffffffffffe);
          puVar15 = puVar17 + 1;
          puVar14 = puVar17;
        }
LAB_144a9a9ab:
        *puVar20 = (ulonglong)puVar15;
      }
      else {
        puVar15 = puVar17 + 1;
        if (puVar15 <= *(undefined8 **)(lVar23 + 0x40)) {
          puVar14 = (undefined8 *)plVar29[3];
          goto LAB_144a9a9ab;
        }
        puVar14 = (undefined8 *)((longlong)puVar17 + 1U & 0xfffffffffffffffe);
        puVar17 = puVar14 + lVar16;
        if (*(undefined8 **)(lVar23 + 0x40) < puVar17) {
          FUN_140023dd8(puVar20);
          puVar14 = (undefined8 *)(*puVar20 + 1 & 0xfffffffffffffffe);
          puVar17 = puVar14 + lVar16;
        }
        *puVar20 = (ulonglong)puVar17;
        puVar17 = puVar14;
        if (0 < (int)plVar29[4]) {
          lVar23 = 0;
          do {
            *puVar17 = *(undefined8 *)(plVar29[3] + lVar23 * 8);
            lVar23 = lVar23 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar23 < (int)plVar29[4]);
        }
      }
      *(undefined2 *)puVar17 = local_b0;
      *(undefined2 *)((longlong)puVar17 + 2) = local_ae;
      *(short *)((longlong)puVar17 + 4) = (short)local_a0;
      *(ushort *)((longlong)puVar17 + 6) = local_b2;
      plVar29[3] = (longlong)puVar14;
      *(int *)(plVar29 + 4) = (int)lVar16;
      puVar25 = puVar25 + 4;
      puVar17 = local_c0;
      local_68 = local_ac;
      param_4 = local_b8;
    } while (puVar25 != local_98);
  }
  local_70 = &local_88;
  FUN_140023e89(plVar29,puVar17,&local_70,1);
  iVar9 = (int)plVar29[6] + (int)plVar29[4];
  iVar10 = iVar9 + (int)plVar29[8];
  if (iVar10 != 0 && SCARRY4(iVar9,(int)plVar29[8]) == iVar10 < 0) {
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar15 + 0xb;
    if ((undefined8 *)param_1[1] < puVar17) {
      FUN_140023dd8(param_1,0x60);
      puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar15 + 0xb;
    }
    *param_1 = (ulonglong)puVar17;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar15;
    param_1[6] = (ulonglong)(puVar15 + 1);
    lVar16 = plVar29[7];
    lVar5 = plVar29[8];
    lVar23 = plVar29[5];
    lVar6 = plVar29[6];
    lVar3 = plVar29[3];
    lVar7 = plVar29[4];
    lVar4 = plVar29[1];
    lVar8 = plVar29[2];
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a1e7fa8;
    puVar15[2] = uVar12;
    puVar15[3] = lVar4;
    *(int *)(puVar15 + 4) = (int)lVar8;
    puVar15[5] = lVar3;
    *(int *)(puVar15 + 6) = (int)lVar7;
    puVar15[7] = lVar23;
    *(int *)(puVar15 + 8) = (int)lVar6;
    puVar15[9] = lVar16;
    *(int *)(puVar15 + 10) = (int)lVar5;
    plVar29[1] = 0;
    *(undefined4 *)(plVar29 + 2) = 0;
    plVar29[3] = 0;
    *(undefined4 *)(plVar29 + 4) = 0;
    plVar29[5] = 0;
    *(undefined4 *)(plVar29 + 6) = 0;
    plVar29[7] = 0;
    *(undefined4 *)(plVar29 + 8) = 0;
    puVar17 = local_c0;
  }
  puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar15 = puVar14 + 4;
  if ((undefined8 *)param_1[1] < puVar15) {
    FUN_140023dd8(param_1,0x28);
    puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar14 + 4;
  }
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *param_1 = (ulonglong)puVar15;
  *(undefined8 **)param_1[6] = puVar14;
  param_1[6] = (ulonglong)(puVar14 + 1);
  puVar14[1] = 0;
  *puVar14 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar14 + 2) = param_4 + 0x3fU >> 6;
  *(undefined1 **)((longlong)puVar14 + 0x14) = &DAT_100000001;
  if (puVar17 == (undefined8 *)0x0) {
    lVar16 = 0;
  }
  else {
    lVar16 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_90 + 8) + 0x50) +
              (longlong)*(int *)((longlong)puVar17 + 0xd4) * 8);
    if (lVar16 == 0) {
      lVar16 = FUN_1400bafc2(*(longlong *)(local_90 + 8),
                             (longlong)*(int *)((longlong)puVar17 + 0xd4),1);
    }
  }
  local_c0 = (undefined8 *)lVar16;
  if (DAT_14ca8507b == '\x01') {
    puVar20 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar20,0);
    }
    uVar12 = puVar17[2];
    uVar24 = (longlong)puVar17 + ((longlong)uVar12 >> 0x18) + 0x10;
    if ((uVar12 & 1) == 0) {
      uVar24 = uVar12;
    }
    iVar9 = *(int *)(puVar17 + 3);
    if ((longlong)iVar9 != 0) {
      lVar16 = 0;
      do {
        uVar11 = (uint)*(byte *)(uVar24 + 3 + lVar16);
        if ((uVar11 < 0x13) && ((0x44080U >> (uVar11 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar24 + 2 + lVar16);
          iVar10 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar10 + 1U) {
            FUN_1447477d8(puVar20,iVar10);
          }
          uVar12 = *puVar20;
          *(ushort *)(uVar12 + (longlong)iVar10 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar12 + 2 + (longlong)iVar10 * 4) = 1;
        }
        lVar16 = lVar16 + 4;
      } while ((longlong)iVar9 * 4 != lVar16);
    }
    uVar12 = param_1[0x13];
    lVar16 = (longlong)(int)uVar12;
    if (0 < lVar16) {
      if (DAT_14ca8507b == '\x01') {
        pvVar21 = (void *)*puVar20;
        puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar15 + 5;
        if ((undefined8 *)param_1[1] < puVar17) {
          FUN_140023dd8(param_1,0x30);
          puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar17 = puVar15 + 5;
        }
        *param_1 = (ulonglong)puVar17;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar15;
        param_1[6] = (ulonglong)(puVar15 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar18 = (void *)((longlong)_Dst + lVar16 * 4);
        _Size_00 = lVar16 * 4;
        if ((void *)param_1[1] < pvVar18) {
          FUN_140023dd8(param_1,(uint)_Size_00 | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar18 = (void *)((longlong)_Dst + _Size_00);
        }
        *param_1 = (ulonglong)pvVar18;
        memcpy(_Dst,pvVar21,_Size_00);
        puVar15[1] = 0;
        *puVar15 = &PTR_FUN_14a1fbc38;
        puVar15[2] = local_c0;
        puVar15[3] = _Dst;
        *(int *)(puVar15 + 4) = (int)uVar12;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar20,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a9b249 FUN_144a9b249 body=3778 status=ok
// SIG undefined FUN_144a9b249(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a9b249(ulonglong *param_1,int param_2,ulonglong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined4 param_7)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  void *pvVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  void *pvVar19;
  longlong *plVar20;
  longlong lVar21;
  byte bVar22;
  undefined2 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  size_t _Size;
  longlong *plVar30;
  void *_Dst;
  ulonglong *puVar31;
  bool bVar32;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  wchar_t *local_130;
  undefined8 uStack_128;
  char *local_120;
  code *local_118;
  code *local_110;
  ulonglong **local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined *local_e0;
  undefined2 local_d6;
  undefined2 local_d4;
  ushort local_d2;
  longlong local_d0;
  ulonglong local_c8;
  uint local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined2 *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar22 = DAT_14cb32870 != 0 &
           (byte)((uint)*(undefined4 *)
                         (&DAT_14ca814cc +
                         (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 0x3c) >>
                 0x1b);
  plVar30 = *(longlong **)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  local_c8 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb32ac0) && (FUN_144b3d300(&DAT_14cb32ac0), DAT_14cb32ac0 == -1)) {
    FUN_141645154();
    FUN_1461ef1b4();
    local_e0 = &DAT_14cb340a8;
    local_f0 = &LAB_14712ac08;
    local_f8 = &LAB_14712ac0c;
    local_100 = &LAB_14804e67e;
    local_108 = (ulonglong **)&LAB_14804e682;
    local_110 = FUN_14804e6ac;
    local_118 = FUN_14804e70c;
    local_130 = L"ComputeFreeIDs";
    local_138 = L"/Plugin/FX/Niagara/Private/NiagaraComputeFreeIDs.usf";
    local_e8 = 0xe0;
    local_120 = (char *)CONCAT44(local_120._4_4_,2);
    uStack_128 = CONCAT44(uStack_128._4_4_,5);
    FUN_140db5666(&DAT_14cb32a18,0,&DAT_14cb329b0,L"NiagaraComputeFreeIDsCS");
    _DAT_14cb32a18 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1438fa6f0);
    _Init_thread_footer(&DAT_14cb32ac0);
  }
  if ((int)plVar30[1] != *(int *)((longlong)plVar30 + 0x34)) {
    plVar20 = plVar30 + 7;
    if ((longlong *)plVar30[8] != (longlong *)0x0) {
      plVar20 = (longlong *)plVar30[8];
    }
    iVar8 = *(int *)((longlong)plVar20 +
                    (ulonglong)
                    ((int)plVar30[9] - 1U &
                    (int)DAT_14cb32a48 + (int)((ulonglong)DAT_14cb32a48 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      do {
        plVar20 = (longlong *)(*plVar30 + (longlong)iVar8 * 0x18);
        if (*plVar20 == DAT_14cb32a48) {
          puVar26 = (undefined8 *)0x0;
          if (plVar20 != (longlong *)0x0) {
            local_d0 = 0;
            if (plVar20 + 1 == (longlong *)0x0) goto LAB_144a9b492;
            local_d0 = plVar20[1];
            puVar18 = *(ulonglong **)(local_d0 + 0x28);
            uVar10 = (uint)bVar22;
            uVar11 = (DAT_14cb32a40 ^ uVar10) * -0x622015f714c7d297;
            lVar14 = (uVar11 >> 0x2f ^ uVar10 ^ uVar11) * -0x622015f714c7d297;
            uVar11 = puVar18[3];
            if ((uVar11 & 1) != 0) {
              uVar11 = (longlong)puVar18 + ((longlong)uVar11 >> 0x18) + 0x18;
            }
            uVar27 = puVar18[5];
            if ((uVar27 & 1) != 0) {
              uVar27 = (longlong)puVar18 + ((longlong)uVar27 >> 0x18) + 0x28;
            }
            uVar28 = puVar18[1];
            if ((uVar28 & 1) != 0) {
              uVar28 = (longlong)puVar18 + ((longlong)uVar28 >> 0x18) + 8;
            }
            uVar25 = *puVar18;
            if ((uVar25 & 1) != 0) {
              uVar25 = ((longlong)uVar25 >> 0x18) + (longlong)puVar18;
            }
            uVar29 = *(uint *)(uVar25 + (ulonglong)
                                        ((uint)puVar18[2] &
                                         ((uint)((ulonglong)lVar14 >> 0x2f) ^ (uint)lVar14) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar29 != 0xffffffff) {
              goto LAB_144a9b43a;
            }
          }
          break;
        }
        iVar8 = (int)plVar20[2];
      } while (iVar8 != -1);
    }
  }
  goto LAB_144a9b455;
  while (uVar29 = *(uint *)(uVar28 + uVar25 * 4), uVar29 != 0xffffffff) {
LAB_144a9b43a:
    uVar25 = (ulonglong)uVar29;
    if ((*(ulonglong *)(uVar11 + uVar25 * 8) == DAT_14cb32a40) &&
       (*(uint *)(uVar27 + uVar25 * 4) == uVar10)) {
      uVar11 = puVar18[7];
      if ((uVar11 & 1) != 0) {
        uVar11 = (longlong)(puVar18 + 7) + ((longlong)uVar11 >> 0x18);
      }
      puVar26 = *(undefined8 **)(uVar11 + (longlong)(int)uVar29 * 8);
      if (((ulonglong)puVar26 & 1) != 0) {
        puVar26 = (undefined8 *)(((longlong)puVar26 >> 0x18) + uVar11 + (longlong)(int)uVar29 * 8);
      }
      if (puVar26 != (undefined8 *)0x0) goto LAB_144a9b492;
      break;
    }
  }
LAB_144a9b455:
  puVar26 = (undefined8 *)0x0;
  local_d0 = 0;
LAB_144a9b492:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb32ac0) && (FUN_144b3d300(&DAT_14cb32ac0), DAT_14cb32ac0 == -1)) {
    FUN_141645154();
    FUN_1461ef1b4();
    local_e0 = &DAT_14cb340a8;
    local_f0 = &LAB_14712ac08;
    local_f8 = &LAB_14712ac0c;
    local_100 = &LAB_14804e67e;
    local_108 = (ulonglong **)&LAB_14804e682;
    local_110 = FUN_14804e6ac;
    local_118 = FUN_14804e70c;
    local_130 = L"ComputeFreeIDs";
    local_138 = L"/Plugin/FX/Niagara/Private/NiagaraComputeFreeIDs.usf";
    local_e8 = 0xe0;
    local_120 = (char *)CONCAT44(local_120._4_4_,2);
    uStack_128 = CONCAT44(uStack_128._4_4_,5);
    FUN_140db5666(&DAT_14cb32a18,0,&DAT_14cb329b0,L"NiagaraComputeFreeIDsCS");
    _DAT_14cb32a18 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1438fa6f0);
    _Init_thread_footer(&DAT_14cb32ac0);
  }
  local_bc = param_4 + (uint)(bVar22 ^ 1) * 0x40 + 0x3f >> (bVar22 ^ 7);
  local_98 = local_c8;
  local_90 = param_5;
  local_88 = param_6;
  local_80 = param_7;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb34128) && (FUN_144b3d300(&DAT_14cb34128), DAT_14cb34128 == -1)) {
    FUN_1461ef2fe(&local_70);
    local_f0 = (undefined1 *)((ulonglong)local_f0 & 0xffffffffffffff00);
    local_100 = (undefined1 *)((ulonglong)local_100 & 0xffffffffffffff00);
    local_120 = "Unknown";
    local_130 = (wchar_t *)0x0;
    uStack_128 = 0;
    local_138 = L"FParameters";
    local_f8 = (undefined1 *)0x0;
    local_110 = (code *)CONCAT44(local_110._4_4_,0x20);
    local_118 = (code *)CONCAT44(local_118._4_4_,0x62);
    local_108 = &local_70;
    FUN_140b49562(&DAT_14cb340a8,0,1);
    if (local_70 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438fb80c);
    _Init_thread_footer(&DAT_14cb34128);
  }
  if (puVar26 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(local_d0 + 8) + 0x50) +
              (longlong)*(int *)((longlong)puVar26 + 0xd4) * 8);
    if (uVar11 == 0) {
      uVar11 = FUN_1400bafc2(*(longlong *)(local_d0 + 8),
                             (longlong)*(int *)((longlong)puVar26 + 0xd4),1);
    }
  }
  uVar12 = FUN_140029432(param_1,uVar11,0);
  param_1[0x37] = uVar11;
  puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar24 = puVar13 + 3;
  if ((undefined8 *)param_1[1] < puVar24) {
    FUN_140023dd8(param_1,0x20);
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar24 = puVar13 + 3;
  }
  *param_1 = (ulonglong)puVar24;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar13;
  param_1[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a37d340;
  puVar13[2] = uVar12;
  plVar30 = (longlong *)param_1[0x10];
  if (plVar30 != (longlong *)0x0) goto LAB_144a9b5d5;
  puVar16 = (ulonglong *)param_1[1];
  plVar30 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
  puVar18 = (ulonglong *)(plVar30 + 9);
  if (puVar16 < puVar18) {
    FUN_140023dd8(param_1,0x58);
    puVar16 = (ulonglong *)param_1[1];
    plVar30 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar18 = (ulonglong *)(plVar30 + 9);
  }
  *param_1 = (ulonglong)puVar18;
  puVar31 = (ulonglong *)((longlong)puVar18 + 0xfU & 0xfffffffffffffff0);
  puVar18 = puVar31 + 0x16;
  if (puVar16 < puVar18) {
    FUN_140023dd8(param_1,0xc0);
    puVar31 = (ulonglong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar18 = puVar31 + 0x16;
  }
  *param_1 = (ulonglong)puVar18;
  *puVar31 = param_1[0x11];
  puVar31[1] = (ulonglong)param_1;
  puVar31[2] = 0;
  puVar31[3] = 0;
  puVar31[4] = 0;
  puVar31[5] = 0;
  *(undefined8 *)((longlong)puVar31 + 0x2e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 != 0;
    puVar31[7] = 0;
    puVar31[8] = 0;
    puVar31[9] = 0;
    puVar31[10] = 0;
    *(undefined8 *)((longlong)puVar31 + 0x56) = 0;
    if (bVar32) goto LAB_144a9bb2f;
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 != 0;
    puVar31[0xc] = 0;
    puVar31[0xd] = 0;
    puVar31[0xe] = 0;
    puVar31[0xf] = 0;
    *(undefined8 *)((longlong)puVar31 + 0x7e) = 0;
    if (bVar32) goto LAB_144a9bb44;
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 == 0;
    puVar31[0x11] = 0;
    puVar31[0x12] = 0;
    puVar31[0x13] = 0;
    puVar31[0x14] = 0;
    *(undefined8 *)((longlong)puVar31 + 0xa6) = 0;
    if (bVar32) {
      FUN_145bdc178();
    }
  }
  else {
    puVar31[9] = 0;
    puVar31[10] = 0;
    puVar31[7] = 0;
    puVar31[8] = 0;
    *(undefined8 *)((longlong)puVar31 + 0x56) = 0;
LAB_144a9bb2f:
    puVar31[0xe] = 0;
    puVar31[0xf] = 0;
    puVar31[0xc] = 0;
    puVar31[0xd] = 0;
    *(undefined8 *)((longlong)puVar31 + 0x7e) = 0;
LAB_144a9bb44:
    puVar31[0x13] = 0;
    puVar31[0x14] = 0;
    puVar31[0x11] = 0;
    puVar31[0x12] = 0;
    *(undefined8 *)((longlong)puVar31 + 0xa6) = 0;
  }
  param_1[0x11] = (ulonglong)puVar31;
  *plVar30 = (longlong)puVar31;
  plVar30[1] = 0;
  *(undefined4 *)(plVar30 + 2) = 0;
  plVar30[3] = 0;
  *(undefined4 *)(plVar30 + 4) = 0;
  plVar30[5] = 0;
  *(undefined4 *)(plVar30 + 6) = 0;
  plVar30[7] = 0;
  *(undefined4 *)(plVar30 + 8) = 0;
  param_1[0x10] = (ulonglong)plVar30;
LAB_144a9b5d5:
  iVar8 = (int)plVar30[6] + (int)plVar30[4];
  iVar9 = iVar8 + (int)plVar30[8];
  if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar30[8]) == iVar9 < 0) {
    plVar30[1] = 0;
    *(undefined4 *)(plVar30 + 2) = 0;
    plVar30[3] = 0;
    *(undefined4 *)(plVar30 + 4) = 0;
    plVar30[5] = 0;
    *(undefined4 *)(plVar30 + 6) = 0;
    plVar30[7] = 0;
    *(undefined4 *)(plVar30 + 8) = 0;
    plVar30 = (longlong *)param_1[0x10];
  }
  puVar1 = (undefined2 *)*puVar26;
  puVar23 = (undefined2 *)(((longlong)puVar1 >> 0x18) + (longlong)puVar26);
  if (((ulonglong)puVar1 & 1) == 0) {
    puVar23 = puVar1;
  }
  local_68 = DAT_14cb340e4;
  if ((longlong)*(int *)(puVar26 + 1) != 0) {
    local_a0 = puVar23 + (longlong)*(int *)(puVar26 + 1) * 4;
    local_c8 = CONCAT44(local_c8._4_4_,DAT_14cb340e4);
    local_b8 = uVar11;
    do {
      uVar28 = (ulonglong)(ushort)puVar23[2];
      local_d2 = puVar23[3];
      uVar25 = (ulonglong)local_d2;
      local_d6 = *puVar23;
      local_d4 = puVar23[1];
      uVar10 = *(uint *)(plVar30 + 2);
      local_a8 = (ulonglong)uVar10;
      iVar8 = uVar10 + local_d2;
      lVar14 = *plVar30;
      puVar18 = (ulonglong *)(lVar14 + 0x10);
      pvVar19 = *(void **)(lVar14 + 0x10);
      uVar27 = *(ulonglong *)(lVar14 + 0x18);
      uVar11 = (longlong)pvVar19 + uVar25;
      if (uVar10 == 0) {
        if (uVar27 < uVar11) {
          FUN_140023dd8(puVar18,local_d2 + 1);
          pvVar19 = (void *)*puVar18;
          uVar11 = (longlong)pvVar19 + uVar25;
        }
        *puVar18 = uVar11;
        pvVar15 = pvVar19;
      }
      else if (uVar27 < uVar11) {
        uVar11 = (longlong)pvVar19 + (longlong)iVar8;
        pvVar15 = pvVar19;
        local_b0 = uVar28;
        if (uVar27 < uVar11) {
          FUN_140023dd8(puVar18,iVar8 + 1);
          pvVar15 = (void *)*puVar18;
          uVar11 = (longlong)iVar8 + (longlong)pvVar15;
        }
        *puVar18 = uVar11;
        memcpy(pvVar15,(void *)plVar30[1],(longlong)(int)plVar30[2]);
        pvVar19 = (void *)((longlong)(int)plVar30[2] + (longlong)pvVar15);
        uVar28 = local_b0;
      }
      else {
        pvVar15 = (void *)plVar30[1];
        *puVar18 = uVar11;
      }
      memcpy(pvVar19,(void *)((longlong)&local_98 + uVar28),uVar25);
      uVar11 = local_b8;
      plVar30[1] = (longlong)pvVar15;
      *(int *)(plVar30 + 2) = iVar8;
      lVar21 = *plVar30;
      puVar18 = (ulonglong *)(lVar21 + 0x38);
      lVar14 = (longlong)(int)plVar30[4] + 1;
      puVar24 = *(undefined8 **)(lVar21 + 0x38);
      if ((longlong)(int)plVar30[4] == 0) {
        puVar24 = (undefined8 *)((longlong)puVar24 + 1U & 0xfffffffffffffffe);
        puVar13 = puVar24 + 1;
        puVar17 = puVar24;
        if (*(undefined8 **)(lVar21 + 0x40) < puVar13) {
          FUN_140023dd8(puVar18,10);
          puVar24 = (undefined8 *)(*puVar18 + 1 & 0xfffffffffffffffe);
          puVar13 = puVar24 + 1;
          puVar17 = puVar24;
        }
LAB_144a9b858:
        *puVar18 = (ulonglong)puVar13;
LAB_144a9b85b:
      }
      else {
        puVar13 = puVar24 + 1;
        if (puVar13 <= *(undefined8 **)(lVar21 + 0x40)) {
          puVar17 = (undefined8 *)plVar30[3];
          goto LAB_144a9b858;
        }
        puVar17 = (undefined8 *)((longlong)puVar24 + 1U & 0xfffffffffffffffe);
        puVar24 = puVar17 + lVar14;
        if (*(undefined8 **)(lVar21 + 0x40) < puVar24) {
          FUN_140023dd8(puVar18);
          puVar17 = (undefined8 *)(*puVar18 + 1 & 0xfffffffffffffffe);
          puVar24 = puVar17 + lVar14;
        }
        *puVar18 = (ulonglong)puVar24;
        puVar24 = puVar17;
        if ((int)plVar30[4] < 1) goto LAB_144a9b85b;
        lVar21 = 0;
        do {
          *puVar24 = *(undefined8 *)(plVar30[3] + lVar21 * 8);
          lVar21 = lVar21 + 1;
          puVar24 = puVar24 + 1;
        } while (lVar21 < (int)plVar30[4]);
      }
      *(undefined2 *)puVar24 = local_d6;
      *(undefined2 *)((longlong)puVar24 + 2) = local_d4;
      *(short *)((longlong)puVar24 + 4) = (short)local_a8;
      *(ushort *)((longlong)puVar24 + 6) = local_d2;
      plVar30[3] = (longlong)puVar17;
      *(int *)(plVar30 + 4) = (int)lVar14;
      puVar23 = puVar23 + 4;
      local_68 = (undefined4)local_c8;
    } while (puVar23 != local_a0);
  }
  local_70 = &local_98;
  FUN_140023e89(plVar30,puVar26,&local_70,CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1));
  iVar8 = (int)plVar30[6] + (int)plVar30[4];
  iVar9 = iVar8 + (int)plVar30[8];
  if (iVar9 != 0 && SCARRY4(iVar8,(int)plVar30[8]) == iVar9 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar24 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar24) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar24 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar24;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    lVar14 = plVar30[7];
    lVar4 = plVar30[8];
    lVar21 = plVar30[5];
    lVar5 = plVar30[6];
    lVar2 = plVar30[3];
    lVar6 = plVar30[4];
    lVar3 = plVar30[1];
    lVar7 = plVar30[2];
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = uVar11;
    puVar13[3] = lVar3;
    *(int *)(puVar13 + 4) = (int)lVar7;
    puVar13[5] = lVar2;
    *(int *)(puVar13 + 6) = (int)lVar6;
    puVar13[7] = lVar21;
    *(int *)(puVar13 + 8) = (int)lVar5;
    puVar13[9] = lVar14;
    *(int *)(puVar13 + 10) = (int)lVar4;
    plVar30[1] = 0;
    *(undefined4 *)(plVar30 + 2) = 0;
    plVar30[3] = 0;
    *(undefined4 *)(plVar30 + 4) = 0;
    plVar30[5] = 0;
    *(undefined4 *)(plVar30 + 6) = 0;
    plVar30[7] = 0;
    *(undefined4 *)(plVar30 + 8) = 0;
  }
  puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar24 = puVar13 + 4;
  if ((undefined8 *)param_1[1] < puVar24) {
    FUN_140023dd8(param_1,0x28);
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar24 = puVar13 + 4;
  }
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *param_1 = (ulonglong)puVar24;
  *(undefined8 **)param_1[6] = puVar13;
  param_1[6] = (ulonglong)(puVar13 + 1);
  puVar13[1] = 0;
  *puVar13 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar13 + 2) = local_bc;
  *(undefined1 **)((longlong)puVar13 + 0x14) = &DAT_100000001;
  if (puVar26 == (undefined8 *)0x0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_d0 + 8) + 0x50) +
              (longlong)*(int *)((longlong)puVar26 + 0xd4) * 8);
    if (lVar14 == 0) {
      lVar14 = FUN_1400bafc2(*(longlong *)(local_d0 + 8),
                             (longlong)*(int *)((longlong)puVar26 + 0xd4),1);
    }
  }
  local_d0 = lVar14;
  if (DAT_14ca8507b == '\x01') {
    puVar18 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar18,0);
    }
    uVar11 = puVar26[2];
    uVar27 = (longlong)puVar26 + ((longlong)uVar11 >> 0x18) + 0x10;
    if ((uVar11 & 1) == 0) {
      uVar27 = uVar11;
    }
    iVar8 = *(int *)(puVar26 + 3);
    if ((longlong)iVar8 != 0) {
      lVar14 = 0;
      do {
        uVar10 = (uint)*(byte *)(uVar27 + 3 + lVar14);
        if ((uVar10 < 0x13) && ((0x44080U >> (uVar10 & 0x1f) & 1) != 0)) {
          bVar22 = *(byte *)(uVar27 + 2 + lVar14);
          iVar9 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar9 + 1U) {
            FUN_1447477d8(puVar18,iVar9);
          }
          uVar11 = *puVar18;
          *(ushort *)(uVar11 + (longlong)iVar9 * 4) = (ushort)bVar22;
          *(undefined1 *)(uVar11 + 2 + (longlong)iVar9 * 4) = 1;
        }
        lVar14 = lVar14 + 4;
      } while ((longlong)iVar8 * 4 != lVar14);
    }
    uVar11 = param_1[0x13];
    lVar14 = (longlong)(int)uVar11;
    if (0 < lVar14) {
      if (DAT_14ca8507b == '\x01') {
        pvVar19 = (void *)*puVar18;
        puVar24 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar24 + 5;
        if ((undefined8 *)param_1[1] < puVar26) {
          FUN_140023dd8(param_1,0x30);
          puVar24 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar24 + 5;
        }
        *param_1 = (ulonglong)puVar26;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar24;
        param_1[6] = (ulonglong)(puVar24 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar15 = (void *)((longlong)_Dst + lVar14 * 4);
        _Size = lVar14 * 4;
        if ((void *)param_1[1] < pvVar15) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar15 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar15;
        memcpy(_Dst,pvVar19,_Size);
        puVar24[1] = 0;
        *puVar24 = &PTR_FUN_14a1fbc38;
        puVar24[2] = local_d0;
        puVar24[3] = _Dst;
        *(int *)(puVar24 + 4) = (int)uVar11;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar18,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a9c10c FUN_144a9c10c body=2664 status=ok
// SIG undefined FUN_144a9c10c(void)

void FUN_144a9c10c(ulonglong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  ulonglong *puVar18;
  undefined8 *puVar19;
  ulonglong *puVar20;
  void *pvVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong _Size;
  ulonglong *puVar25;
  size_t _Size_00;
  longlong *plVar26;
  undefined2 *puVar27;
  ulonglong uVar28;
  void *_Dst;
  bool bVar29;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined2 local_b2;
  undefined2 local_b0;
  ushort local_ae;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  int local_94;
  longlong *local_90;
  ulonglong local_88;
  undefined2 *local_80;
  ulonglong local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a0 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9fe198) && (FUN_144b3d300(&DAT_14c9fe198), DAT_14c9fe198 == -1)) {
    FUN_14164f5d4(&local_70);
    local_c0 = 0;
    local_d0 = 0;
    local_f0 = "Unknown";
    local_100 = 0;
    uStack_f8 = 0;
    local_108 = L"FParameters";
    local_c8 = 0;
    local_e0 = 0x270;
    local_e8 = 0x358;
    local_d8 = &local_70;
    FUN_140b49562(&DAT_14c9fe118,0,1);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_142d9936b);
    _Init_thread_footer(&DAT_14c9fe198);
  }
  if (*param_2 == 0) {
    uVar13 = 0;
  }
  else {
    lVar22 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar13 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar22 * 8);
    if (uVar13 == 0) {
      uVar13 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar22,1);
    }
  }
  uVar14 = FUN_140029432(param_1,uVar13,0);
  param_1[0x37] = uVar13;
  puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar16 = puVar15 + 3;
  if ((undefined8 *)param_1[1] < puVar16) {
    FUN_140023dd8(param_1,0x20);
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 3;
  }
  *param_1 = (ulonglong)puVar16;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar15;
  param_1[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a37d340;
  puVar15[2] = uVar14;
  puVar16 = (undefined8 *)*param_2;
  plVar26 = (longlong *)param_1[0x10];
  if (plVar26 != (longlong *)0x0) goto LAB_144a9c214;
  puVar18 = (ulonglong *)param_1[1];
  plVar26 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
  puVar20 = (ulonglong *)(plVar26 + 9);
  if (puVar18 < puVar20) {
    FUN_140023dd8(param_1,0x58);
    puVar18 = (ulonglong *)param_1[1];
    plVar26 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar20 = (ulonglong *)(plVar26 + 9);
  }
  *param_1 = (ulonglong)puVar20;
  puVar25 = (ulonglong *)((longlong)puVar20 + 0xfU & 0xfffffffffffffff0);
  puVar20 = puVar25 + 0x16;
  if (puVar18 < puVar20) {
    FUN_140023dd8(param_1,0xc0);
    puVar25 = (ulonglong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar20 = puVar25 + 0x16;
  }
  *param_1 = (ulonglong)puVar20;
  *puVar25 = param_1[0x11];
  puVar25[1] = (ulonglong)param_1;
  puVar25[2] = 0;
  puVar25[3] = 0;
  puVar25[4] = 0;
  puVar25[5] = 0;
  *(undefined8 *)((longlong)puVar25 + 0x2e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar29 = DAT_14c872d30 != 0;
    puVar25[7] = 0;
    puVar25[8] = 0;
    puVar25[9] = 0;
    puVar25[10] = 0;
    *(undefined8 *)((longlong)puVar25 + 0x56) = 0;
    if (bVar29) goto LAB_144a9c781;
    FUN_145bdc178();
    bVar29 = DAT_14c872d30 != 0;
    puVar25[0xc] = 0;
    puVar25[0xd] = 0;
    puVar25[0xe] = 0;
    puVar25[0xf] = 0;
    *(undefined8 *)((longlong)puVar25 + 0x7e) = 0;
    if (bVar29) goto LAB_144a9c794;
    FUN_145bdc178();
    bVar29 = DAT_14c872d30 == 0;
    puVar25[0x11] = 0;
    puVar25[0x12] = 0;
    puVar25[0x13] = 0;
    puVar25[0x14] = 0;
    *(undefined8 *)((longlong)puVar25 + 0xa6) = 0;
    if (bVar29) {
      FUN_145bdc178();
    }
  }
  else {
    puVar25[9] = 0;
    puVar25[10] = 0;
    puVar25[7] = 0;
    puVar25[8] = 0;
    *(undefined8 *)((longlong)puVar25 + 0x56) = 0;
LAB_144a9c781:
    puVar25[0xe] = 0;
    puVar25[0xf] = 0;
    puVar25[0xc] = 0;
    puVar25[0xd] = 0;
    *(undefined8 *)((longlong)puVar25 + 0x7e) = 0;
LAB_144a9c794:
    puVar25[0x13] = 0;
    puVar25[0x14] = 0;
    puVar25[0x11] = 0;
    puVar25[0x12] = 0;
    *(undefined8 *)((longlong)puVar25 + 0xa6) = 0;
  }
  param_1[0x11] = (ulonglong)puVar25;
  *plVar26 = (longlong)puVar25;
  plVar26[1] = 0;
  *(undefined4 *)(plVar26 + 2) = 0;
  plVar26[3] = 0;
  *(undefined4 *)(plVar26 + 4) = 0;
  plVar26[5] = 0;
  *(undefined4 *)(plVar26 + 6) = 0;
  plVar26[7] = 0;
  *(undefined4 *)(plVar26 + 8) = 0;
  param_1[0x10] = (ulonglong)plVar26;
LAB_144a9c214:
  iVar10 = (int)plVar26[6] + (int)plVar26[4];
  iVar11 = iVar10 + (int)plVar26[8];
  if (iVar11 != 0 && SCARRY4(iVar10,(int)plVar26[8]) == iVar11 < 0) {
    plVar26[1] = 0;
    *(undefined4 *)(plVar26 + 2) = 0;
    plVar26[3] = 0;
    *(undefined4 *)(plVar26 + 4) = 0;
    plVar26[5] = 0;
    *(undefined4 *)(plVar26 + 6) = 0;
    plVar26[7] = 0;
    *(undefined4 *)(plVar26 + 8) = 0;
    plVar26 = (longlong *)param_1[0x10];
  }
  puVar3 = (undefined2 *)*puVar16;
  puVar27 = (undefined2 *)(((longlong)puVar3 >> 0x18) + (longlong)puVar16);
  if (((ulonglong)puVar3 & 1) == 0) {
    puVar27 = puVar3;
  }
  local_68 = DAT_14c9fe154;
  local_78 = uVar13;
  if ((longlong)*(int *)(puVar16 + 1) != 0) {
    local_80 = puVar27 + (longlong)*(int *)(puVar16 + 1) * 4;
    local_ac = DAT_14c9fe154;
    local_a8 = param_3;
    local_90 = param_2;
    do {
      uVar2 = puVar27[2];
      local_ae = puVar27[3];
      _Size = (ulonglong)local_ae;
      local_b2 = *puVar27;
      local_b0 = puVar27[1];
      uVar12 = *(uint *)(plVar26 + 2);
      local_88 = (ulonglong)uVar12;
      local_94 = uVar12 + local_ae;
      lVar22 = *plVar26;
      puVar20 = (ulonglong *)(lVar22 + 0x10);
      pvVar21 = *(void **)(lVar22 + 0x10);
      uVar28 = *(ulonglong *)(lVar22 + 0x18);
      uVar13 = (longlong)pvVar21 + _Size;
      if (uVar12 == 0) {
        if (uVar28 < uVar13) {
          FUN_140023dd8(puVar20,local_ae + 1);
          pvVar21 = (void *)*puVar20;
          uVar13 = (longlong)pvVar21 + _Size;
        }
        *puVar20 = uVar13;
        pvVar17 = pvVar21;
      }
      else if (uVar28 < uVar13) {
        lVar22 = (longlong)local_94;
        uVar13 = (longlong)pvVar21 + lVar22;
        pvVar17 = pvVar21;
        if (uVar28 < uVar13) {
          FUN_140023dd8(puVar20,local_94 + 1);
          pvVar17 = (void *)*puVar20;
          uVar13 = lVar22 + (longlong)pvVar17;
        }
        *puVar20 = uVar13;
        memcpy(pvVar17,(void *)plVar26[1],(longlong)(int)plVar26[2]);
        pvVar21 = (void *)((longlong)(int)plVar26[2] + (longlong)pvVar17);
      }
      else {
        pvVar17 = (void *)plVar26[1];
        *puVar20 = uVar13;
      }
      param_3 = local_a8;
      memcpy(pvVar21,(void *)((ulonglong)uVar2 + local_a8),_Size);
      param_2 = local_90;
      plVar26[1] = (longlong)pvVar17;
      *(int *)(plVar26 + 2) = local_94;
      lVar23 = *plVar26;
      puVar20 = (ulonglong *)(lVar23 + 0x38);
      lVar22 = (longlong)(int)plVar26[4] + 1;
      puVar15 = *(undefined8 **)(lVar23 + 0x38);
      if ((longlong)(int)plVar26[4] == 0) {
        puVar15 = (undefined8 *)((longlong)puVar15 + 1U & 0xfffffffffffffffe);
        puVar24 = puVar15 + 1;
        puVar19 = puVar15;
        if (*(undefined8 **)(lVar23 + 0x40) < puVar24) {
          FUN_140023dd8(puVar20,10);
          puVar15 = (undefined8 *)(*puVar20 + 1 & 0xfffffffffffffffe);
          puVar24 = puVar15 + 1;
          puVar19 = puVar15;
        }
LAB_144a9c4c0:
        *puVar20 = (ulonglong)puVar24;
      }
      else {
        puVar24 = puVar15 + 1;
        if (puVar24 <= *(undefined8 **)(lVar23 + 0x40)) {
          puVar19 = (undefined8 *)plVar26[3];
          goto LAB_144a9c4c0;
        }
        puVar19 = (undefined8 *)((longlong)puVar15 + 1U & 0xfffffffffffffffe);
        puVar15 = puVar19 + lVar22;
        if (*(undefined8 **)(lVar23 + 0x40) < puVar15) {
          FUN_140023dd8(puVar20);
          puVar19 = (undefined8 *)(*puVar20 + 1 & 0xfffffffffffffffe);
          puVar15 = puVar19 + lVar22;
        }
        *puVar20 = (ulonglong)puVar15;
        puVar15 = puVar19;
        param_3 = local_a8;
        if (0 < (int)plVar26[4]) {
          lVar23 = 0;
          do {
            *puVar15 = *(undefined8 *)(plVar26[3] + lVar23 * 8);
            lVar23 = lVar23 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar23 < (int)plVar26[4]);
        }
      }
      *(undefined2 *)puVar15 = local_b2;
      *(undefined2 *)((longlong)puVar15 + 2) = local_b0;
      *(short *)((longlong)puVar15 + 4) = (short)local_88;
      *(ushort *)((longlong)puVar15 + 6) = local_ae;
      plVar26[3] = (longlong)puVar19;
      *(int *)(plVar26 + 4) = (int)lVar22;
      puVar27 = puVar27 + 4;
      local_68 = local_ac;
    } while (puVar27 != local_80);
  }
  local_70 = param_3;
  FUN_140023e89(plVar26,puVar16,&local_70,CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1));
  iVar10 = (int)plVar26[6] + (int)plVar26[4];
  iVar11 = iVar10 + (int)plVar26[8];
  if (iVar11 != 0 && SCARRY4(iVar10,(int)plVar26[8]) == iVar11 < 0) {
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 0xb;
    if ((undefined8 *)param_1[1] < puVar16) {
      FUN_140023dd8(param_1,0x60);
      puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar16 = puVar15 + 0xb;
    }
    *param_1 = (ulonglong)puVar16;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar15;
    param_1[6] = (ulonglong)(puVar15 + 1);
    lVar22 = plVar26[7];
    lVar6 = plVar26[8];
    lVar23 = plVar26[5];
    lVar7 = plVar26[6];
    lVar4 = plVar26[3];
    lVar8 = plVar26[4];
    lVar5 = plVar26[1];
    lVar9 = plVar26[2];
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a1e7fa8;
    puVar15[2] = local_78;
    puVar15[3] = lVar5;
    *(int *)(puVar15 + 4) = (int)lVar9;
    puVar15[5] = lVar4;
    *(int *)(puVar15 + 6) = (int)lVar8;
    puVar15[7] = lVar23;
    *(int *)(puVar15 + 8) = (int)lVar7;
    puVar15[9] = lVar22;
    *(int *)(puVar15 + 10) = (int)lVar6;
    plVar26[1] = 0;
    *(undefined4 *)(plVar26 + 2) = 0;
    plVar26[3] = 0;
    *(undefined4 *)(plVar26 + 4) = 0;
    plVar26[5] = 0;
    *(undefined4 *)(plVar26 + 6) = 0;
    plVar26[7] = 0;
    *(undefined4 *)(plVar26 + 8) = 0;
  }
  puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar16 = puVar15 + 4;
  if ((undefined8 *)param_1[1] < puVar16) {
    FUN_140023dd8(param_1,0x28);
    puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar15 + 4;
  }
  *param_1 = (ulonglong)puVar16;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar15;
  param_1[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1e7fd0;
  puVar15[2] = local_a0;
  *(undefined4 *)(puVar15 + 3) = param_5;
  if (*param_2 == 0) {
    lVar22 = 0;
  }
  else {
    lVar23 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar22 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar23 * 8);
    if (lVar22 == 0) {
      lVar22 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar23,1);
    }
  }
  local_a0 = lVar22;
  if (DAT_14ca8507b == '\x01') {
    puVar20 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar20,0);
    }
    lVar22 = *param_2;
    uVar13 = *(ulonglong *)(lVar22 + 0x10);
    uVar28 = lVar22 + 0x10 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar28 = uVar13;
    }
    iVar10 = *(int *)(lVar22 + 0x18);
    if ((longlong)iVar10 != 0) {
      lVar22 = 0;
      do {
        uVar12 = (uint)*(byte *)(uVar28 + 3 + lVar22);
        if ((uVar12 < 0x13) && ((0x44080U >> (uVar12 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar28 + 2 + lVar22);
          iVar11 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar11 + 1U) {
            FUN_1447477d8(puVar20,iVar11);
          }
          uVar13 = *puVar20;
          *(ushort *)(uVar13 + (longlong)iVar11 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar13 + 2 + (longlong)iVar11 * 4) = 1;
        }
        lVar22 = lVar22 + 4;
      } while ((longlong)iVar10 * 4 != lVar22);
    }
    uVar13 = param_1[0x13];
    lVar22 = (longlong)(int)uVar13;
    if (0 < lVar22) {
      if (DAT_14ca8507b == '\x01') {
        pvVar21 = (void *)*puVar20;
        puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar16 = puVar15 + 5;
        if ((undefined8 *)param_1[1] < puVar16) {
          FUN_140023dd8(param_1,0x30);
          puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar15 + 5;
        }
        *param_1 = (ulonglong)puVar16;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar15;
        param_1[6] = (ulonglong)(puVar15 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar17 = (void *)((longlong)_Dst + lVar22 * 4);
        _Size_00 = lVar22 * 4;
        if ((void *)param_1[1] < pvVar17) {
          FUN_140023dd8(param_1,(uint)_Size_00 | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar17 = (void *)((longlong)_Dst + _Size_00);
        }
        *param_1 = (ulonglong)pvVar17;
        memcpy(_Dst,pvVar21,_Size_00);
        puVar15[1] = 0;
        *puVar15 = &PTR_FUN_14a1fbc38;
        puVar15[2] = local_a0;
        puVar15[3] = _Dst;
        *(int *)(puVar15 + 4) = (int)uVar13;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar20,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a9cb75 FUN_144a9cb75 body=109 status=ok
// SIG undefined FUN_144a9cb75(void)

undefined8 FUN_144a9cb75(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca9ecb8;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar6 * 4) == 1);
}



// FUNCTION 144a9cbe2 FUN_144a9cbe2 body=1812 status=ok
// SIG undefined FUN_144a9cbe2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a9cbe2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar14 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3bc98) && (FUN_144b3d300(&DAT_14cb3bc98), DAT_14cb3bc98 == -1)) {
    FUN_146221aea(local_30);
    local_40 = 0;
    local_50 = 0;
    local_70 = "Unknown";
    local_80 = 0;
    uStack_78 = 0;
    local_88 = L"FShaderParameters";
    local_48 = 0;
    local_60 = 0x10;
    local_68 = 0x1e;
    local_58 = local_30;
    FUN_140b49562(&DAT_14cb3bc18,0,1);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_143a3ce79);
    _Init_thread_footer(&DAT_14cb3bc98);
  }
  *(uint *)(param_2 + 0x50) = uVar14 + _DAT_14cb3bc54;
  lVar10 = *(longlong *)(param_2 + 0x38);
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  uVar8 = *(undefined8 *)(lVar7 + 0x14);
  *(undefined4 *)(lVar10 + 8 + (ulonglong)uVar14) = *(undefined4 *)(lVar7 + 0x1c);
  *(undefined8 *)(lVar10 + (ulonglong)uVar14) = uVar8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c9b80) && (FUN_144b3d300(&DAT_14c9c9b80), DAT_14c9c9b80 == -1)) {
    FUN_1414f42c0(local_30);
    local_40 = 0;
    local_50 = 0;
    local_70 = "Unknown";
    local_80 = 0;
    uStack_78 = 0;
    local_88 = L"FGlobalDistanceFieldParameters2";
    local_48 = 0;
    local_60 = 0x220;
    local_68 = 0x32;
    local_58 = local_30;
    FUN_140b49562(&DAT_14c9c9b00,0,1);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_143a3ce85);
    _Init_thread_footer(&DAT_14c9c9b80);
  }
  lVar10 = (longlong)*(int *)(*(longlong *)(param_2 + 0x30) + 0x40);
  if (lVar10 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x38);
    lVar13 = 0;
    do {
      if (*(undefined **)(lVar7 + lVar13) == &DAT_14c9c9b00) {
        uVar14 = *(uint *)(lVar7 + 8 + lVar13);
        goto LAB_144a9ccaa;
      }
      lVar13 = lVar13 + 0x10;
    } while (lVar10 * 0x10 != lVar13);
  }
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraDataInterface.cpp",0x1f6,
                L"Failed to find Included Parameter Struct \'%s\' in parameters",DAT_14c9c9b10);
  uVar14 = 0;
LAB_144a9ccaa:
  uVar14 = uVar14 & 0xffff;
  puVar9 = (ulonglong *)**(longlong **)(param_2 + 0x28);
  uVar16 = puVar9[4];
  if ((uVar16 & 1) != 0) {
    uVar16 = (longlong)puVar9 + ((longlong)uVar16 >> 0x18) + 0x20;
  }
  plVar15 = (longlong *)((ulonglong)uVar14 + *(longlong *)(param_2 + 0x38));
  uVar12 = uVar14 + 0x220;
  if ((longlong)(int)puVar9[5] != 0) {
    lVar10 = 0;
    do {
      uVar6 = *(ushort *)(uVar16 + lVar10);
      if (((uVar12 & 0xffff) <= (uint)uVar6) || (uVar14 <= uVar6)) {
        if ((uint)uVar6 < (uVar12 & 0xffff)) goto LAB_144a9cd2e;
        break;
      }
      lVar10 = lVar10 + 6;
    } while ((longlong)(int)puVar9[5] * 6 != lVar10);
  }
  uVar16 = puVar9[2];
  if ((uVar16 & 1) != 0) {
    uVar16 = (longlong)puVar9 + ((longlong)uVar16 >> 0x18) + 0x10;
  }
  if ((longlong)(int)puVar9[3] != 0) {
    lVar10 = 0;
    do {
      uVar6 = *(ushort *)(uVar16 + lVar10);
      if (((uVar12 & 0xffff) <= (uint)uVar6) || (uVar14 <= uVar6)) {
        if ((uint)uVar6 < (uVar12 & 0xffff)) goto LAB_144a9cd2e;
        break;
      }
      lVar10 = lVar10 + 4;
    } while ((longlong)(int)puVar9[3] * 4 != lVar10);
  }
  uVar16 = *puVar9;
  if ((uVar16 & 1) != 0) {
    uVar16 = ((longlong)uVar16 >> 0x18) + (longlong)puVar9;
  }
  if ((longlong)(int)puVar9[1] != 0) {
    lVar10 = 0;
    do {
      uVar6 = *(ushort *)(uVar16 + 4 + lVar10);
      if (((uVar12 & 0xffff) <= (uint)uVar6) || (uVar14 <= uVar6)) {
        if ((uint)uVar6 < (uVar12 & 0xffff)) goto LAB_144a9cd2e;
        break;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)puVar9[1] * 8 != lVar10);
  }
  goto LAB_144a9cf43;
LAB_144a9cd2e:
  plVar11 = *(longlong **)(param_2 + 8);
  if (*(code **)(*plVar11 + 0xe8) == (code *)&LAB_144b3663e) {
    if (*(char *)((longlong)plVar11 + 0x5b1) != '\0') {
      plVar11 = plVar11 + 0xbc;
      goto LAB_144a9cd5f;
    }
LAB_144a9cfe3:
    lVar7 = DAT_14ca94db8;
    lVar10 = *(longlong *)(DAT_14ca94db8 + 0x10);
    *plVar15 = lVar10;
    plVar15[1] = lVar10;
    lVar10 = DAT_14ca94dc0;
    plVar15[2] = *(longlong *)(DAT_14ca94dc0 + 0x10);
    plVar15[3] = *(longlong *)(lVar7 + 0x10);
    memset(plVar15 + 4,0,0x18c);
    plVar15[0x36] = DAT_14c846330;
    *(undefined4 *)(plVar15 + 0x37) = DAT_14c846338;
    plVar15[0x38] = DAT_14c846330;
    *(undefined4 *)(plVar15 + 0x39) = DAT_14c846338;
    *(undefined8 *)((longlong)plVar15 + 0x1cc) = 0;
    *(undefined8 *)((longlong)plVar15 + 0x1d4) = 0;
    plVar15[0x41] = *(longlong *)(lVar10 + 0x10);
LAB_144a9d06a:
    lVar10 = *(longlong *)(lVar7 + 0x10);
  }
  else {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0xe8))(plVar11);
LAB_144a9cd5f:
    if (plVar11 == (longlong *)0x0) goto LAB_144a9cfe3;
    lVar10 = plVar11[0x31];
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar10 == 0)) {
      lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *plVar15 = lVar10;
    lVar10 = plVar11[0x32];
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar10 == 0)) {
      lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    plVar15[1] = lVar10;
    lVar10 = plVar11[0x34];
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(DAT_14ca94dc0 + 0x10), lVar10 == 0)) {
      lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    plVar15[2] = lVar10;
    lVar10 = plVar11[0x35];
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar10 == 0)) {
      lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    plVar15[3] = lVar10;
    lVar10 = -0x60;
    do {
      puVar1 = (undefined8 *)((longlong)plVar11 + lVar10 + 0x60);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)plVar15 + lVar10 + 0x80);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)((longlong)plVar11 + lVar10 + 0xc0);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)plVar15 + lVar10 + 0xe0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)((longlong)plVar11 + lVar10 + 0x120);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)plVar15 + lVar10 + 0x140);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)((longlong)plVar11 + lVar10 + 0x180);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)plVar15 + lVar10 + 0x1a0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0);
    *(int *)(plVar15 + 0x34) = (int)plVar11[0x30];
    *(undefined4 *)((longlong)plVar15 + 0x1a4) = *(undefined4 *)((longlong)plVar11 + 0x184);
    *(int *)(plVar15 + 0x35) = (int)plVar11[0x36];
    dVar4 = (double)plVar11[0x39];
    dVar5 = (double)plVar11[0x38];
    *(float *)(plVar15 + 0x36) = (float)(double)plVar11[0x37];
    *(float *)((longlong)plVar15 + 0x1b4) = (float)dVar5;
    *(float *)(plVar15 + 0x37) = (float)dVar4;
    dVar4 = (double)plVar11[0x3c];
    dVar5 = (double)plVar11[0x3b];
    *(float *)(plVar15 + 0x38) = (float)(double)plVar11[0x3a];
    *(float *)((longlong)plVar15 + 0x1c4) = (float)dVar5;
    *(float *)(plVar15 + 0x39) = (float)dVar4;
    fVar3 = *(float *)((longlong)plVar11 + 0x1ec);
    *(float *)((longlong)plVar15 + 0x1cc) = fVar3;
    *(float *)(plVar15 + 0x3a) = 1.0 / fVar3;
    *(int *)((longlong)plVar15 + 0x1d4) = (int)plVar11[0x3e];
    *(undefined4 *)(plVar15 + 0x3b) = *(undefined4 *)((longlong)plVar11 + 500);
    lVar10 = plVar11[0x3f];
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(DAT_14ca94dc0 + 0x10), lVar10 == 0)) {
      lVar10 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    plVar15[0x41] = lVar10;
    lVar10 = plVar11[0x40];
    if ((lVar10 == 0) &&
       (lVar10 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar7 = DAT_14ca94dc8, lVar10 == 0))
    goto LAB_144a9d06a;
  }
  plVar15[0x42] = lVar10;
  *(undefined8 *)((longlong)plVar15 + 0x1dc) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x1e4) = 0;
  *(undefined4 *)((longlong)plVar15 + 0x1ec) = 0;
  lVar10 = DAT_14c9cfce8;
  plVar15[0x3e] = DAT_14c9cfce8;
  plVar15[0x3f] = lVar10;
  plVar15[0x40] = DAT_14c9cfda8;
LAB_144a9cf43:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144a9d2f8 FUN_144a9d2f8 body=219 status=ok
// SIG undefined FUN_144a9d2f8(void)

int FUN_144a9d2f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = *(int *)(param_1 + 1);
  lVar5 = (longlong)iVar1;
  iVar6 = 0;
  if (lVar5 != 0) {
    piVar2 = (int *)*param_1;
    iVar6 = 0;
    bVar11 = *piVar2 == *(int *)*param_2;
    iVar8 = 0;
    do {
      lVar4 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar4;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar3;
        if (lVar5 <= lVar7) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar11 == (piVar2[lVar7] == *(int *)*param_2));
      if (bVar11 == false) {
        if (iVar6 != iVar8) {
          memmove(piVar2 + iVar6,piVar2 + lVar4,(longlong)(iVar10 - iVar8) << 2);
        }
        iVar6 = iVar6 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar6;
    iVar6 = iVar1 - iVar6;
  }
  return iVar6;
}



// FUNCTION 144a9d3d4 FUN_144a9d3d4 body=28 status=ok
// SIG undefined FUN_144a9d3d4(void)

void FUN_144a9d3d4(undefined8 *param_1,undefined1 param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  return;
}



// FUNCTION 144a9d3f0 FUN_144a9d3f0 body=86 status=ok
// SIG undefined FUN_144a9d3f0(void)

void FUN_144a9d3f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = 2;
  local_c = 0xffffffff;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_2;
  FUN_14016d7a8(local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a9d448 FUN_144a9d448 body=400 status=ok
// SIG undefined FUN_144a9d448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a9d448(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = dVar3 * param_3[2] + dVar1 * *param_3 + dVar2 * param_3[1] + 1.0;
  dVar6 = *param_3;
  dVar9 = param_3[2];
  dVar5 = param_3[1];
  if (dVar4 < 9.999999974752427e-07) {
    if ((ABS(dVar1) <= ABS(dVar2)) || (ABS(dVar1) <= ABS(dVar3))) {
      dVar4 = 0.0;
      dVar6 = -DAT_14c8463a0;
      dVar9 = -DAT_14c8463b0;
      dVar5 = -DAT_14c8463a8;
    }
    else {
      dVar4 = 0.0;
      dVar6 = DAT_14c846388;
      dVar9 = DAT_14c846398;
      dVar5 = DAT_14c846390;
    }
  }
  *param_1 = dVar2 * dVar9 - dVar5 * dVar3;
  param_1[1] = dVar3 * dVar6 - dVar9 * dVar1;
  param_1[2] = dVar1 * dVar5 - dVar6 * dVar2;
  param_1[3] = dVar4;
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[3];
  dVar6 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar9 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar7._0_8_ = dVar6 + dVar9;
  auVar7._8_8_ = dVar6 + dVar9;
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar8);
  auVar10._0_8_ = auVar8._0_8_ * dVar3;
  auVar10._8_8_ = auVar8._8_8_ * dVar4;
  *param_1 = (double)((ulonglong)(dVar1 * auVar8._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_));
  param_1[1] = (double)((ulonglong)(dVar2 * auVar8._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_));
  auVar8._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
  auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar8);
  *(undefined1 (*) [16])(param_1 + 2) = auVar8;
  return;
}



// FUNCTION 144a9d5d8 FUN_144a9d5d8 body=7420 status=ok
// SIG undefined FUN_144a9d5d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144a9d5d8(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort *puVar3;
  char cVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  double dVar10;
  bool bVar11;
  longlong *plVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  LONG *pLVar16;
  code *pcVar17;
  WORD *pWVar18;
  longlong lVar19;
  _RTL_CRITICAL_SECTION *p_Var20;
  undefined8 uVar21;
  PRTL_CRITICAL_SECTION_DEBUG p_Var22;
  DWORD *pDVar23;
  uint *puVar24;
  byte bVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ULONG_PTR UVar29;
  ulonglong uVar30;
  LPCRITICAL_SECTION p_Var31;
  longlong *plVar32;
  undefined8 *puVar33;
  int iVar34;
  int iVar35;
  longlong lVar36;
  LPCRITICAL_SECTION p_Var37;
  int iVar38;
  longlong lVar39;
  uint uVar40;
  _RTL_CRITICAL_SECTION *p_Var41;
  longlong *plVar42;
  int iVar43;
  ulonglong uVar44;
  uint uVar45;
  uint uVar46;
  longlong lVar47;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  LPCRITICAL_SECTION local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  void *local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong uStack_70;
  byte local_68;
  undefined2 local_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
      (lVar39 = param_1[0x5d], *(char *)(lVar39 + 0x48) == '\x01')) &&
     (*(longlong *)(lVar39 + 0x60) != 0)) {
    piVar2 = (int *)(*(longlong *)(lVar39 + 0x60) + 0x1c);
    *piVar2 = *piVar2 + 1;
    lVar39 = *(longlong *)(lVar39 + 0x60);
    *(undefined4 *)(lVar39 + 0x20) = param_2;
    *(undefined4 *)(lVar39 + 0x24) = param_3;
    *(undefined4 *)(lVar39 + 0x28) = param_4;
  }
  if (param_1[0x33] == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (*(longlong *)(param_1[0x5d] + 0x6c0) == 0) {
    local_ec = 0;
  }
  else {
    local_ec = FUN_146262a58(*(longlong *)(param_1[0x5d] + 0x6c0),param_1);
  }
  lVar39 = param_1[0x164];
  local_108 = param_1;
  if ((*(byte *)(lVar39 + 0x38) & 2) == 0) goto LAB_144a9d655;
  local_d8 = (longlong *)param_1[0x72];
  local_d0 = (longlong *)0x0;
  uStack_c8 = (undefined8 *)0x0;
  local_c0 = (longlong *)0x0;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_67 = 0xff;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar46 = *(uint *)(param_1 + 0x7a1);
  if (uVar46 == 0) goto switchD_144a9df89_caseD_3;
  if ((*(char *)((longlong)param_1 + 0x3bba) == '\0') &&
     (uVar46 < *(uint *)((longlong)param_1 + 0x3d0c))) {
    uVar46 = *(uint *)((longlong)param_1 + 0x3d0c);
  }
  *(uint *)((longlong)param_1 + 0x3d0c) = uVar46;
  plVar42 = (longlong *)param_1[0x7a3];
  uVar40 = uVar46 + 0xff & 0xffffff00;
  uVar46 = *(uint *)(plVar42 + 0x11);
  uVar26 = *(uint *)((longlong)plVar42 + 0x8c);
  if (uVar46 + uVar40 <= uVar26) goto LAB_144a9dec4;
  *(undefined4 *)(plVar42 + 0x11) = 0;
  local_100 = *(longlong **)
               (*(longlong *)(*plVar42 + 0x10) + 0x4e0 + (ulonglong)*(uint *)(*plVar42 + 8) * 8);
  local_e8 = plVar42 + 2;
  switch((char)plVar42[0x10]) {
  case '\x01':
    FUN_1400dafd4(local_e8,0);
    if ((DAT_14c760da4 < 2) || (*(uint *)(plVar42[4] + 8) < 2)) goto switchD_144a9e482_caseD_7;
    puVar33 = (undefined8 *)plVar42[4];
    goto LAB_144a9ee45;
  case '\x02':
    if (*(char *)((longlong)plVar42 + 0x81) == '\x02') {
      while (plVar42[10] != 0) {
        FUN_1471254ee();
      }
      (**(code **)(*(longlong *)plVar42[5] + 0x18))((longlong *)plVar42[5],local_e8,0);
    }
    else if (*(char *)((longlong)plVar42 + 0x81) == '\x01') {
      FUN_14315ac40(plVar42[5],plVar42[4],(int)plVar42[6],(int)plVar42[0xf]);
    }
    else {
      plVar7 = (longlong *)plVar42[5];
      EnterCriticalSection((LPCRITICAL_SECTION)(plVar7 + 7));
      lVar39 = *(longlong *)(*(longlong *)(*plVar7 + 0x10) + 0x538);
      iVar34 = (int)plVar7[0x14];
      *(uint *)(plVar7 + 0x14) = iVar34 + 1U;
      if (*(uint *)((longlong)plVar7 + 0xa4) < iVar34 + 1U) {
        FUN_14021dbb8(plVar7 + 0x13,iVar34);
      }
      lVar36 = plVar7[0x13];
      lVar47 = (longlong)iVar34 * 0x20;
      puVar33 = (undefined8 *)(lVar36 + 0x10 + lVar47);
      *puVar33 = 0;
      puVar33[1] = 0;
      *(undefined8 *)(lVar36 + lVar47) = 0;
      ((undefined8 *)(lVar36 + lVar47))[1] = 0;
      uVar30 = (longlong)*(int *)(lVar39 + 0x58) + 1;
      *(ulonglong *)(lVar36 + 8 + lVar47) = uVar30;
      *(undefined4 *)(lVar36 + 0x14 + lVar47) = *(undefined4 *)((longlong)plVar42 + 0x34);
      *(int *)(lVar36 + 0x10 + lVar47) = (int)plVar42[6];
      *(int *)(lVar36 + 0x18 + lVar47) = (int)plVar42[0xf];
      if (uVar30 <= (ulonglong)plVar7[0x17]) {
        uVar30 = plVar7[0x17];
      }
      plVar7[0x17] = uVar30;
      if (*(longlong *)(plVar42[4] + 0x30) != 0) {
        *(longlong *)(lVar36 + lVar47) = plVar42[4];
      }
      *(int *)(plVar7 + 0xd) = (int)plVar7[0xd] + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(plVar7 + 7));
    }
    break;
  case '\x05':
  case '\x06':
    if (*(char *)((longlong)plVar42 + 0x81) == '\x02') {
      FUN_1471254ee(plVar42 + 6);
    }
    puVar33 = (undefined8 *)plVar42[4];
    if (((*(byte *)((longlong)puVar33 + 0xdf) & 8) == 0) ||
       (piVar2 = (int *)(puVar33 + 1), puVar33 = (undefined8 *)plVar42[4], *piVar2 != 1))
    goto LAB_144a9ee45;
LAB_144a9ea0a:
    local_e0 = puVar33;
    FUN_14021db38(DAT_14ca77418);
    break;
  case '\a':
switchD_144a9e482_caseD_7:
    puVar33 = (undefined8 *)plVar42[4];
    if ((*(byte *)((longlong)puVar33 + 0xdf) & 8) != 0) goto LAB_144a9ea0a;
LAB_144a9ee45:
    LOCK();
    piVar2 = (int *)(puVar33 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (puVar33 != (undefined8 *)0x0 && *piVar2 == 0) {
      (**(code **)*puVar33)(puVar33,1);
    }
  }
  plVar32 = local_100;
  plVar42[0xe] = 0;
  plVar42[0xf] = 0;
  plVar42[0xc] = 0;
  plVar42[0xd] = 0;
  plVar42[10] = 0;
  plVar42[0xb] = 0;
  plVar42[8] = 0;
  plVar42[9] = 0;
  plVar42[6] = 0;
  plVar42[7] = 0;
  plVar42[4] = 0;
  plVar42[5] = 0;
  *(undefined2 *)(plVar42 + 0x10) = 0xff00;
  local_f8 = (LPCRITICAL_SECTION)(local_100 + 0x44);
  EnterCriticalSection(local_f8);
  plVar7 = plVar32 + 0x4e;
  if (0 < (int)plVar32[0x4f]) {
    lVar39 = 0;
    do {
      lVar36 = *(longlong *)(*plVar7 + lVar39 * 8);
      p_Var31 = (LPCRITICAL_SECTION)(lVar36 + 0x38);
      EnterCriticalSection(p_Var31);
      uVar46 = *(uint *)(lVar36 + 0x78);
      if (*(uint *)(lVar36 + 0xc4) != uVar46) {
        uVar14 = (uint)(*(char *)(lVar36 + 0x7c) != '\0') * 0x100 + uVar26;
        iVar34 = *(uint *)(lVar36 + 0xb0) + 1;
        lVar47 = (ulonglong)*(uint *)(lVar36 + 0xb0) * 0x50 + -0x1c;
LAB_144a9e54e:
        iVar34 = iVar34 + -1;
        if (0 < iVar34) {
          if ((*(int *)(*(longlong *)(lVar36 + 0xa8) + -0x2c + lVar47) ==
               *(int *)(*(longlong *)(lVar36 + 0xa8) + lVar47)) || (uVar46 < uVar14))
          goto LAB_144a9e56a;
          EnterCriticalSection(p_Var31);
          if (*(char *)(lVar36 + 0x30) == '\0') {
            FUN_140041bdc(lVar36);
            *(undefined1 *)(lVar36 + 0x30) = 1;
          }
          uVar46 = *(uint *)(lVar36 + 0x7c);
          iVar38 = 0;
          uVar46 = ((((uint)((char)uVar46 != '\0') * 0x100 + uVar26 + uVar46) - 1) / uVar46) * 2 - 1
          ;
          iVar34 = 0x1f;
          if (uVar46 != 0) {
            for (; uVar46 >> iVar34 == 0; iVar34 = iVar34 + -1) {
            }
          }
          iVar15 = FUN_14472c606(lVar36,iVar34);
          iVar43 = *(int *)(lVar36 + 0x7c) << ((byte)iVar34 & 0x1f);
          iVar35 = *(int *)(lVar36 + 0x7c) * iVar15;
          if ((char)iVar35 != '\0') {
            iVar38 = (iVar35 + 0xffU & 0xffffff00) - iVar35;
          }
          *(int *)(lVar36 + 0x60) = *(int *)(lVar36 + 0x60) + iVar43;
          *(int *)(lVar36 + 100) = *(int *)(lVar36 + 100) + uVar26;
          *(int *)(lVar36 + 0xc4) = *(int *)(lVar36 + 0xc4) + iVar43;
          *(int *)((longlong)plVar42 + 0x34) = iVar34;
          *(int *)(plVar42 + 6) = iVar15;
          *(undefined2 *)(plVar42 + 0x10) = 2;
          plVar42[5] = lVar36;
          plVar42[0xf] = (ulonglong)uVar26;
          if (*(int *)(lVar36 + 0x80) == 1) {
            uVar30 = (ulonglong)(uint)(iVar38 + iVar35);
            plVar42[0xe] = uVar30;
            lVar39 = *(longlong *)(lVar36 + 0x88);
            plVar42[0xd] = *(longlong *)(lVar39 + 0x40);
            plVar42[4] = lVar39;
            plVar42[0xd] = *(longlong *)(*(longlong *)(lVar36 + 0x88) + 0x40) + uVar30;
            if ((*(int *)(lVar36 + 0x10) != 1) &&
               ((*(int *)(lVar36 + 0x10) != 4 || (_DAT_00000004 != 1)))) {
              plVar42[0xc] = uVar30 + *(longlong *)(*(longlong *)(lVar36 + 0x88) + 0x48);
            }
          }
          LeaveCriticalSection(p_Var31);
          LeaveCriticalSection(p_Var31);
          goto LAB_144a9e660;
        }
      }
LAB_144a9e502:
      *(int *)(lVar36 + 0x70) = *(int *)(lVar36 + 0x70) + uVar26;
      LeaveCriticalSection(p_Var31);
      lVar39 = lVar39 + 1;
    } while (lVar39 < (int)local_100[0x4f]);
  }
  plVar32 = local_100;
  uVar21 = FUN_1400418cc(local_100 + 0x3d,uVar26);
  iVar34 = (int)plVar32[0x4f];
  *(uint *)(plVar32 + 0x4f) = iVar34 + 1U;
  if (*(uint *)((longlong)plVar32 + 0x27c) < iVar34 + 1U) {
    FUN_1456bbf64(plVar7,iVar34);
  }
  *(undefined8 *)(local_100[0x4e] + (longlong)iVar34 * 8) = uVar21;
  FUN_140041946(*(undefined8 *)(local_100[0x4e] + (longlong)((int)local_100[0x4f] + -1) * 8),uVar26,
                0x100,local_e8);
LAB_144a9e660:
  LeaveCriticalSection(local_f8);
  uVar46 = *(uint *)(plVar42 + 0x11);
LAB_144a9dec4:
  param_1 = local_108;
  uVar30 = (ulonglong)uVar46;
  uStack_c8 = (undefined8 *)plVar42[4];
  local_78 = plVar42[0xe] + uVar30;
  local_68 = 3;
  uStack_70 = (ulonglong)uVar40;
  if (plVar42[0xc] != 0) {
    local_88 = (void *)(plVar42[0xc] + uVar30);
  }
  lStack_80 = plVar42[0xd] + uVar30;
  *(uint *)(plVar42 + 0x11) = uVar40 + uVar46;
  memcpy(local_88,(void *)local_108[0x79f],(ulonglong)*(uint *)((longlong)local_108 + 0x3d0c));
  plVar42 = local_c0;
  *(undefined1 *)(param_1 + 0x7a2) = 0;
  param_1[0x4c7] = lStack_80;
  param_1[0x527] = (longlong)uStack_c8;
  *(byte *)((longlong)param_1 + 0x23b2) = *(byte *)((longlong)param_1 + 0x23b2) | 1;
  if (local_68 - 1 < 7) {
    switch((uint)local_68) {
    case 1:
      FUN_1400dafd4(&local_d8,0);
      param_1 = local_108;
      if (((DAT_14c760da4 < 2) || (*(uint *)(uStack_c8 + 1) < 2)) &&
         ((*(byte *)((longlong)uStack_c8 + 0xdf) & 8) != 0)) {
LAB_144a9e8e2:
        local_e0 = uStack_c8;
        FUN_14021db38(DAT_14ca77418);
        param_1 = local_108;
      }
      else {
        LOCK();
        piVar2 = (int *)(uStack_c8 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (uStack_c8 != (undefined8 *)0x0 && *piVar2 == 0) {
          (**(code **)*uStack_c8)(uStack_c8,1);
        }
      }
      break;
    case 2:
      if ((char)local_67 == '\x02') {
        while (plVar42 = local_c0, local_98 != 0) {
          FUN_1471254ee();
        }
        pcVar17 = *(code **)(*local_c0 + 0x18);
        if (pcVar17 == FUN_14488e5dc) {
          pcVar17 = *(code **)(*local_c0 + 0x28);
          if (pcVar17 != (code *)&DAT_14018587c) {
            (*pcVar17)(local_c0,&local_d8,2);
          }
          p_Var31 = (LPCRITICAL_SECTION)(plVar42 + 5);
          EnterCriticalSection(p_Var31);
          uVar30 = uStack_b0;
          if ((uStack_b0 & 0x10000000000000) != 0) {
            if ((longlong)(int)plVar42[0x19] != 0) {
              lVar39 = plVar42[0x18];
              lVar36 = 0;
              do {
                if (*(undefined8 **)(lVar39 + 0x18 + lVar36) == &local_b8) {
                  *(undefined4 *)(lVar39 + lVar36) = 3;
                  *(undefined8 *)(lVar39 + 0x18 + lVar36) = 0;
                  break;
                }
                lVar36 = lVar36 + 0x20;
              } while ((longlong)(int)plVar42[0x19] * 0x20 != lVar36);
            }
            if ((longlong)(int)plVar42[0x1c] != 0) {
              lVar39 = plVar42[0x1b];
              lVar36 = 0;
              do {
                if ((*(undefined8 **)(lVar39 + lVar36) == uStack_c8) ||
                   (*(undefined8 **)(lVar39 + 0x10 + lVar36) == uStack_c8)) {
                  *(undefined8 *)(lVar39 + lVar36) = 0;
                  *(undefined8 *)(lVar39 + 0x10 + lVar36) = 0;
                  break;
                }
                lVar36 = lVar36 + 0x28;
              } while ((longlong)(int)plVar42[0x1c] * 0x28 != lVar36);
            }
          }
          iVar34 = (int)plVar42[0x1e];
          if ((longlong)iVar34 < 1) {
            puVar24 = (uint *)FUN_14001cc68(0x30,0x10);
            puVar24[0] = 0;
            puVar24[1] = 0;
            puVar24[2] = 0;
            puVar24[3] = 0;
            puVar24[4] = 0;
            puVar24[5] = 0;
            puVar24[6] = 0;
            puVar24[7] = 0;
            puVar24[8] = 0;
            puVar24[9] = 0;
            puVar24[10] = 0;
            puVar24[0xb] = 0;
          }
          else {
            puVar24 = *(uint **)(plVar42[0x1d] + -8 + (longlong)iVar34 * 8);
            *(int *)(plVar42 + 0x1e) = iVar34 + -1;
          }
          puVar24[0] = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          uVar26 = puVar24[3] & 0xffe00000;
          puVar24[3] = uVar26 + 0xffff;
          puVar24[4] = 0;
          puVar24[5] = 0;
          puVar24[6] = 0;
          puVar24[7] = 0;
          puVar24[8] = 0;
          puVar24[9] = 0;
          puVar24[10] = 0;
          puVar24[0xb] = 0;
          *puVar24 = (uint)local_b8;
          puVar24[1] = local_b8._4_4_;
          uVar46 = uStack_b0._4_4_;
          uVar40 = uStack_b0._4_4_ & 0xf0000;
          puVar24[3] = uVar40 + uVar26 + 0xffff;
          puVar24[2] = (uint)uStack_b0;
          puVar24[3] = uVar26 + (uStack_b0._4_2_ | uVar40) + 0x100000;
          if (local_a8 == 0) {
            if ((local_98 != 0) && (*(longlong *)(local_98 + 0x20) = lStack_a0, lStack_a0 != 0)) {
              *(undefined8 *)(lStack_a0 + 0x10) = 0;
            }
            if (*(longlong *)(local_98 + 0x20) == 0) {
              uVar21 = 0;
            }
            else {
              *(uint **)(*(longlong *)(local_98 + 0x20) + 0x10) = puVar24;
              uVar21 = *(undefined8 *)(local_98 + 0x20);
            }
            *(undefined8 *)(puVar24 + 6) = uVar21;
            puVar24[4] = 0;
            puVar24[5] = 0;
            *(longlong *)(puVar24 + 8) = local_98;
            *(uint **)(local_98 + 0x20) = puVar24;
          }
          else {
            *(uint **)(local_a8 + 0x18) = puVar24;
            *(uint **)(lStack_a0 + 0x10) = puVar24;
            *(longlong *)(puVar24 + 4) = local_a8;
            *(longlong *)(puVar24 + 6) = lStack_a0;
            lVar39 = local_98;
            if (local_98 == 0) {
              local_98 = 0;
            }
            else {
              do {
                *(uint **)(lVar39 + 0x20) = puVar24;
                lVar39 = *(longlong *)(lVar39 + 0x18);
              } while (lVar39 != 0);
            }
            *(longlong *)(puVar24 + 8) = local_98;
          }
          local_b8 = 0;
          uStack_b0 = ((ulonglong)uVar46 & 0xffe00000) << 0x20 | 0xffff00000000;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          lStack_a0 = 0;
          local_c0 = (longlong *)0x0;
          local_67 = CONCAT11(local_67._1_1_,0xff);
          lVar39 = *(longlong *)(*(longlong *)(plVar42[0x11] + 0x10) + 0x538);
          iVar34 = (int)plVar42[0x19];
          *(uint *)(plVar42 + 0x19) = iVar34 + 1U;
          if (*(uint *)((longlong)plVar42 + 0xcc) < iVar34 + 1U) {
            FUN_140186098(plVar42 + 0x18,iVar34);
          }
          lVar36 = plVar42[0x18];
          lVar47 = (longlong)iVar34 * 0x20;
          *(undefined8 *)(lVar36 + lVar47) = 0;
          ((undefined8 *)(lVar36 + lVar47))[1] = 0;
          puVar33 = (undefined8 *)(lVar36 + 0x10 + lVar47);
          *puVar33 = 0;
          puVar33[1] = 0;
          *(undefined4 *)(lVar36 + lVar47) = 1;
          *(longlong *)(lVar36 + 0x10 + lVar47) = (longlong)*(int *)(lVar39 + 0x58) + 1;
          *(uint **)(lVar36 + 0x18 + lVar47) = puVar24;
          plVar42[0x1a] = plVar42[0x1a] + (ulonglong)*puVar24;
          lVar39 = *(longlong *)(plVar42[10] + (longlong)(short)(uVar30 >> 0x20) * 8);
          uVar30 = *(ulonglong *)(lVar36 + 0x10 + lVar47);
          uVar27 = *(ulonglong *)(lVar39 + 0xd8);
          if (uVar27 < uVar30) {
            uVar27 = uVar30;
          }
          *(ulonglong *)(lVar39 + 0xd8) = uVar27;
          puVar33 = uStack_c8;
          if (uStack_c8[6] == 0) {
            puVar33 = (undefined8 *)0x0;
          }
          *(undefined8 **)(lVar36 + 8 + lVar47) = puVar33;
          goto LAB_144a9e265;
        }
        (*pcVar17)(local_c0,&local_d8,0);
      }
      else if ((char)local_67 == '\x01') {
        FUN_14315ac40(local_c0,uStack_c8,local_b8 & 0xffffffff,uStack_70 & 0xffffffff);
        param_1 = local_108;
      }
      else {
        p_Var31 = (LPCRITICAL_SECTION)(local_c0 + 7);
        EnterCriticalSection(p_Var31);
        lVar39 = *(longlong *)(*(longlong *)(*plVar42 + 0x10) + 0x538);
        iVar34 = (int)plVar42[0x14];
        *(uint *)(plVar42 + 0x14) = iVar34 + 1U;
        if (*(uint *)((longlong)plVar42 + 0xa4) < iVar34 + 1U) {
          FUN_14021dbb8(plVar42 + 0x13,iVar34);
        }
        lVar36 = plVar42[0x13];
        lVar47 = (longlong)iVar34 * 0x20;
        puVar33 = (undefined8 *)(lVar36 + 0x10 + lVar47);
        *puVar33 = 0;
        puVar33[1] = 0;
        *(undefined8 *)(lVar36 + lVar47) = 0;
        ((undefined8 *)(lVar36 + lVar47))[1] = 0;
        uVar30 = (longlong)*(int *)(lVar39 + 0x58) + 1;
        *(ulonglong *)(lVar36 + 8 + lVar47) = uVar30;
        *(uint *)(lVar36 + 0x14 + lVar47) = local_b8._4_4_;
        *(uint *)(lVar36 + 0x10 + lVar47) = (uint)local_b8;
        *(undefined4 *)(lVar36 + 0x18 + lVar47) = (undefined4)uStack_70;
        if (uVar30 <= (ulonglong)plVar42[0x17]) {
          uVar30 = plVar42[0x17];
        }
        plVar42[0x17] = uVar30;
        if (uStack_c8[6] != 0) {
          *(undefined8 **)(lVar36 + lVar47) = uStack_c8;
        }
        *(int *)(plVar42 + 0xd) = (int)plVar42[0xd] + 1;
LAB_144a9e265:
        LeaveCriticalSection(p_Var31);
        param_1 = local_108;
      }
      break;
    case 5:
    case 6:
      if ((char)local_67 == '\x02') {
        FUN_1471254ee(&local_b8);
      }
      if (((*(byte *)((longlong)uStack_c8 + 0xdf) & 8) != 0) && (*(int *)(uStack_c8 + 1) == 1))
      goto LAB_144a9e8e2;
      LOCK();
      piVar2 = (int *)(uStack_c8 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      param_1 = local_108;
      if (uStack_c8 != (undefined8 *)0x0 && *piVar2 == 0) {
LAB_144a9ed34:
        (**(code **)*uStack_c8)(uStack_c8,1);
      }
      break;
    case 7:
      if ((*(byte *)((longlong)uStack_c8 + 0xdf) & 8) == 0) {
        LOCK();
        piVar2 = (int *)(uStack_c8 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (uStack_c8 != (undefined8 *)0x0 && *piVar2 == 0) goto LAB_144a9ed34;
      }
      else {
        local_e0 = uStack_c8;
        FUN_14021db38(DAT_14ca77418);
      }
    }
  }
switchD_144a9df89_caseD_3:
  lVar39 = param_1[0x164];
LAB_144a9d655:
  *(undefined1 *)((longlong)param_1 + 0x3bba) = 0;
  p_Var31 = *(LPCRITICAL_SECTION *)(lVar39 + 0x10);
  pLVar16 = &p_Var31[4].LockCount;
  if (p_Var31 == (LPCRITICAL_SECTION)0x0) {
    pLVar16 = (LONG *)0x0;
  }
  local_d0 = param_1 + 0x79d;
  uVar46 = *(uint *)(param_1 + 0x5c);
  if (uVar46 == 0) {
    iVar34 = 0x20;
  }
  else {
    iVar34 = 0;
    if (uVar46 != 0) {
      for (; (uVar46 >> iVar34 & 1) == 0; iVar34 = iVar34 + 1) {
      }
    }
  }
  uStack_c8._0_5_ = CONCAT14(5,iVar34);
  uStack_c8 = (undefined8 *)
              (CONCAT26(uStack_c8._6_2_,CONCAT15(*(byte *)(pLVar16 + 4) >> 1,(undefined5)uStack_c8))
              & 0xffff01ffffffffff);
  uStack_c8 = (undefined8 *)
              (CONCAT17(uStack_c8._7_1_,CONCAT16(*(byte *)(pLVar16 + 4) >> 2,(undefined6)uStack_c8))
              & 0xff01ffffffffffff);
  uVar46 = (uint)*(ushort *)((longlong)param_1 + 0x3baa) & *(uint *)&p_Var31->OwningThread;
  local_d8 = param_1;
  if (uVar46 != 0) {
    dVar10 = (double)(float)DAT_14c866ff8;
    do {
      uVar26 = 0;
      if (uVar46 != 0) {
        for (; (uVar46 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
        }
      }
      uVar30 = (ulonglong)uVar26;
      lVar39 = param_1[uVar30 + 0x764];
      lVar36 = *(longlong *)&p_Var31[2].LockCount;
      p_Var37 = *(LPCRITICAL_SECTION *)(lVar39 + 0x10);
      iVar34 = *(int *)(lVar39 + 0x18);
      if ((lVar36 != 0) && (uVar27 = (ulonglong)*(uint *)(lVar36 + uVar30 * 4), uVar27 != 0)) {
        puVar24 = (uint *)(lVar36 + uVar27 * 4);
        uVar40 = *puVar24;
        local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar34);
        local_f8 = p_Var31;
        do {
          puVar24 = puVar24 + 1;
          uVar14 = uVar40 >> 8 & 0xffff;
          if ((int)uVar14 < iVar34) {
            p_Var22 = (&p_Var37->DebugInfo)[uVar14];
            if ((*(double *)&p_Var22[1].Flags != dVar10) ||
               (NAN(*(double *)&p_Var22[1].Flags) || NAN(dVar10))) {
              *(double *)&p_Var22[1].Flags = dVar10;
            }
            if (p_Var22 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            }
            else {
              uVar27 = (ulonglong)uStack_c8 & 0xffffffff;
              pcVar17 = *(code **)(*(longlong *)p_Var22 + 8);
              if (pcVar17 == (code *)&LAB_144b1c56a) {
                plVar42 = *(longlong **)(p_Var22 + 2);
                if (*(code **)(*plVar42 + 8) == FUN_1447d3e98) {
                  pDVar23 = (DWORD *)(plVar42 + 4);
                }
                else {
                  pDVar23 = (DWORD *)(**(code **)(*plVar42 + 8))(plVar42);
                }
              }
              else if (pcVar17 == FUN_1447d3e98) {
                pDVar23 = &p_Var22->EntryCount;
              }
              else {
                pDVar23 = (DWORD *)(*pcVar17)(p_Var22);
              }
              if ((*pDVar23 & 0x40000) != 0) {
                p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)
                          **(undefined8 **)(*(longlong *)(p_Var22 + 0xc) + 0xa0);
              }
              pcVar17 = *(code **)(*(longlong *)p_Var22 + 0x30);
              if (pcVar17 == (code *)&LAB_144b1c54c) {
                p_Var22 = *(PRTL_CRITICAL_SECTION_DEBUG *)(p_Var22 + 2);
                pcVar17 = *(code **)(*(longlong *)p_Var22 + 0x30);
              }
              if (pcVar17 != (code *)&LAB_1447c19d2) {
                p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)(*pcVar17)(p_Var22);
              }
              if ((p_Var22 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) ||
                 ((&p_Var22[6].CriticalSection)[uVar27] == (_RTL_CRITICAL_SECTION *)0x0)) {
                p_Var22 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              }
              else {
                p_Var22 = (&p_Var22[6].CriticalSection)[uVar27][9].DebugInfo;
              }
              iVar34 = (int)local_100;
            }
            uVar27 = (ulonglong)uStack_c8._4_1_;
            if (uStack_c8._5_1_ == '\x01') {
              plVar42 = local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x6cf;
              iVar34 = (int)local_d8[(ulonglong)uStack_c8._4_1_ * 2 + 0x6d0];
              *(uint *)(local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x6d0) = iVar34 + 1U;
              if (*(uint *)((longlong)local_d8 + (ulonglong)uStack_c8._4_1_ * 0x10 + 0x3684) <
                  iVar34 + 1U) {
                FUN_14736f572(plVar42,iVar34);
              }
              *(PRTL_CRITICAL_SECTION_DEBUG *)(*plVar42 + (longlong)iVar34 * 8) = p_Var22;
              iVar34 = (int)local_100;
            }
            else {
              uVar28 = (ulonglong)(uVar40 & 0xff);
              if ((PRTL_CRITICAL_SECTION_DEBUG)
                  local_d8[(ulonglong)uStack_c8._4_1_ * 0x40 + uVar28 + 0x16c] != p_Var22) {
                bVar25 = (byte)uVar40;
                if (p_Var22 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                  uVar44 = 1L << (bVar25 & 0x3f);
                  local_d8[uVar27 + 0x46c] =
                       local_d8[uVar27 + 0x46c] &
                       (-2L << (bVar25 & 0x3f) | 0xfffffffffffffffeU >> 0x40 - (bVar25 & 0x3f));
                  lVar36 = 0;
                }
                else {
                  *(undefined1 *)((longlong)local_d8 + 0x3ba) = 0;
                  uVar44 = 1L << (bVar25 & 0x3f);
                  local_d8[uVar27 + 0x46c] = local_d8[uVar27 + 0x46c] | uVar44;
                  lVar36._0_4_ = p_Var22->EntryCount;
                  lVar36._4_4_ = p_Var22->ContentionCount;
                }
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x40 + uVar28 + 0x2ec] = lVar36;
                uVar6 = local_d8[uVar27 + 0x46c];
                lVar36 = 0x3f;
                if (uVar6 != 0) {
                  for (; uVar6 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                  }
                }
                *(uint *)((longlong)local_d8 + uVar27 * 4 + 0x2390) =
                     -(uint)(uVar6 == 0) | (uint)lVar36;
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x40 + uVar28 + 0x16c] = (longlong)p_Var22;
                local_d8[uVar27 + 0x166] = local_d8[uVar27 + 0x166] | uVar44;
              }
            }
          }
          uVar40 = *puVar24;
        } while (uVar40 >> 0x18 == uVar26);
        p_Var37 = *(LPCRITICAL_SECTION *)(lVar39 + 0x10);
        iVar34 = *(int *)(lVar39 + 0x18);
        p_Var31 = local_f8;
      }
      pvVar5 = p_Var31->LockSemaphore;
      if ((pvVar5 != (HANDLE)0x0) &&
         (uVar27 = (ulonglong)*(uint *)((longlong)pvVar5 + uVar30 * 4), uVar27 != 0)) {
        puVar24 = (uint *)((longlong)pvVar5 + uVar27 * 4);
        uVar40 = *puVar24;
        do {
          puVar24 = puVar24 + 1;
          uVar14 = uVar40 >> 8 & 0xffff;
          if ((int)uVar14 < iVar34) {
            if ((&p_Var37->DebugInfo)[uVar14] == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              p_Var20 = (_RTL_CRITICAL_SECTION *)0x0;
            }
            else {
              p_Var20 = (&(&p_Var37->DebugInfo)[uVar14][4].CriticalSection)
                        [(ulonglong)uStack_c8 & 0xffffffff];
            }
            p_Var41 = p_Var20 + 1;
            if (p_Var20 == (_RTL_CRITICAL_SECTION *)0x0) {
              p_Var41 = (_RTL_CRITICAL_SECTION *)0x0;
            }
            uVar27 = (ulonglong)uStack_c8._4_1_;
            if (uStack_c8._5_1_ == '\x01') {
              local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar34);
              plVar42 = local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x6cf;
              iVar34 = (int)local_d8[(ulonglong)uStack_c8._4_1_ * 2 + 0x6d0];
              *(uint *)(local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x6d0) = iVar34 + 1U;
              local_f8 = p_Var37;
              if (*(uint *)((longlong)local_d8 + (ulonglong)uStack_c8._4_1_ * 0x10 + 0x3684) <
                  iVar34 + 1U) {
                FUN_14736f572(plVar42,iVar34);
              }
              *(_RTL_CRITICAL_SECTION **)(*plVar42 + (longlong)iVar34 * 8) = p_Var41;
              p_Var37 = local_f8;
              iVar34 = (int)local_100;
            }
            else {
              uVar28 = (ulonglong)(uVar40 & 0xff);
              if ((_RTL_CRITICAL_SECTION *)
                  local_d8[(ulonglong)uStack_c8._4_1_ * 0x40 + uVar28 + 0x16c] != p_Var41) {
                bVar25 = (byte)uVar40;
                if (p_Var41 == (_RTL_CRITICAL_SECTION *)0x0) {
                  uVar44 = 1L << (bVar25 & 0x3f);
                  local_d8[uVar27 + 0x46c] =
                       local_d8[uVar27 + 0x46c] &
                       (-2L << (bVar25 & 0x3f) | 0xfffffffffffffffeU >> 0x40 - (bVar25 & 0x3f));
                  UVar29 = 0;
                }
                else {
                  *(undefined1 *)((longlong)local_d8 + 0x3ba) = 0;
                  uVar44 = 1L << (bVar25 & 0x3f);
                  local_d8[uVar27 + 0x46c] = local_d8[uVar27 + 0x46c] | uVar44;
                  UVar29 = p_Var41->SpinCount;
                }
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x40 + uVar28 + 0x2ec] = UVar29;
                uVar6 = local_d8[uVar27 + 0x46c];
                lVar36 = 0x3f;
                if (uVar6 != 0) {
                  for (; uVar6 >> lVar36 == 0; lVar36 = lVar36 + -1) {
                  }
                }
                *(uint *)((longlong)local_d8 + uVar27 * 4 + 0x2390) =
                     -(uint)(uVar6 == 0) | (uint)lVar36;
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x40 + uVar28 + 0x16c] = (longlong)p_Var41;
                local_d8[uVar27 + 0x166] = local_d8[uVar27 + 0x166] | uVar44;
              }
            }
          }
          uVar40 = *puVar24;
        } while (uVar40 >> 0x18 == uVar26);
        p_Var37 = *(LPCRITICAL_SECTION *)(lVar39 + 0x10);
        iVar34 = *(int *)(lVar39 + 0x18);
      }
      pvVar5 = p_Var31[2].LockSemaphore;
      if ((pvVar5 != (HANDLE)0x0) &&
         (uVar27 = (ulonglong)*(uint *)((longlong)pvVar5 + uVar30 * 4), uVar27 != 0)) {
        puVar24 = (uint *)((longlong)pvVar5 + uVar27 * 4);
        uVar40 = *puVar24;
        do {
          puVar24 = puVar24 + 1;
          uVar14 = uVar40 >> 8 & 0xffff;
          if ((int)uVar14 < iVar34) {
            FUN_1462628c0(&local_d8,(&p_Var37->DebugInfo)[uVar14],uVar40 & 0xff);
          }
          uVar40 = *puVar24;
        } while (uVar40 >> 0x18 == uVar26);
        p_Var37 = *(LPCRITICAL_SECTION *)(lVar39 + 0x10);
        iVar34 = *(int *)(lVar39 + 0x18);
      }
      p_Var22 = p_Var31[1].DebugInfo;
      if ((p_Var22 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) &&
         ((ulonglong)*(uint *)(&p_Var22->Type + uVar30 * 2) != 0)) {
        pWVar18 = &p_Var22->Type + (ulonglong)*(uint *)(&p_Var22->Type + uVar30 * 2) * 2;
        uVar40 = *(uint *)pWVar18;
        do {
          pWVar18 = pWVar18 + 2;
          uVar14 = uVar40 >> 8 & 0xffff;
          if ((int)uVar14 < iVar34) {
            if ((&p_Var37->DebugInfo)[uVar14] == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              lVar36 = 0;
            }
            else {
              lVar36 = *(longlong *)
                        (&(&p_Var37->DebugInfo)[uVar14]->EntryCount +
                        ((ulonglong)uStack_c8 & 0xffffffff) * 2);
            }
            if (uStack_c8._6_1_ == '\0') {
              if (local_d8[(ulonglong)uStack_c8._4_1_ * 0x20 + (ulonglong)(uVar40 & 0xff) + 0x5ff]
                  != lVar36) {
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x20 + (ulonglong)(uVar40 & 0xff) + 0x5ff] =
                     lVar36;
                puVar24 = (uint *)((longlong)local_d8 + (ulonglong)uStack_c8._4_1_ * 4 + 0x2fe0);
                *puVar24 = *puVar24 | 1 << ((byte)uVar40 & 0x1f);
              }
            }
          }
          uVar40 = *(uint *)pWVar18;
        } while (uVar40 >> 0x18 == uVar26);
        p_Var37 = *(LPCRITICAL_SECTION *)(lVar39 + 0x10);
        iVar34 = *(int *)(lVar39 + 0x18);
      }
      pvVar5 = p_Var31[1].OwningThread;
      if ((pvVar5 != (HANDLE)0x0) &&
         (uVar30 = (ulonglong)*(uint *)((longlong)pvVar5 + uVar30 * 4), uVar30 != 0)) {
        puVar24 = (uint *)((longlong)pvVar5 + uVar30 * 4);
        uVar40 = *puVar24;
        do {
          puVar24 = puVar24 + 1;
          uVar14 = uVar40 >> 8 & 0xffff;
          if ((int)uVar14 < iVar34) {
            if ((&p_Var37->DebugInfo)[uVar14] == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              p_Var20 = (_RTL_CRITICAL_SECTION *)0x0;
            }
            else {
              p_Var20 = (&(&p_Var37->DebugInfo)[uVar14][4].CriticalSection)
                        [(ulonglong)uStack_c8 & 0xffffffff];
            }
            p_Var41 = p_Var20 + 1;
            if (p_Var20 == (_RTL_CRITICAL_SECTION *)0x0) {
              p_Var41 = (_RTL_CRITICAL_SECTION *)0x0;
            }
            if (uStack_c8._5_1_ == '\x01') {
              local_100 = (longlong *)CONCAT44(local_100._4_4_,iVar34);
              plVar42 = local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x6db;
              iVar34 = (int)local_d8[(ulonglong)uStack_c8._4_1_ * 2 + 0x6dc];
              *(uint *)(local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x6dc) = iVar34 + 1U;
              if (*(uint *)((longlong)local_d8 + (ulonglong)uStack_c8._4_1_ * 0x10 + 0x36e4) <
                  iVar34 + 1U) {
                FUN_14736f5f8(plVar42,iVar34);
              }
              *(_RTL_CRITICAL_SECTION **)(*plVar42 + (longlong)iVar34 * 8) = p_Var41;
              iVar34 = (int)local_100;
            }
            else {
              uVar14 = uVar40 & 0xff;
              uVar30 = (ulonglong)uVar14;
              if ((_RTL_CRITICAL_SECTION *)
                  local_d8[(ulonglong)uStack_c8._4_1_ * 0x10 + uVar30 + 0x539] != p_Var41) {
                uVar45 = 0;
                if ((uStack_c8._4_1_ == 5) &&
                   (uVar45 = *(uint *)((longlong)local_d8 + 0x2fdc),
                   uVar14 < *(uint *)((longlong)local_d8 + 0x2fdc))) {
                  uVar45 = uVar14;
                }
                *(uint *)((longlong)local_d8 + (ulonglong)uStack_c8._4_1_ * 4 + 0x2fc8) = uVar45;
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x10 + uVar30 + 0x539] = (longlong)p_Var41;
                puVar3 = (ushort *)((longlong)local_d8 + (ulonglong)uStack_c8._4_1_ * 2 + 0x29b8);
                *puVar3 = *puVar3 | (ushort)(1 << ((byte)uVar40 & 0x1f));
                if (p_Var41 == (_RTL_CRITICAL_SECTION *)0x0) {
                  UVar29 = 0;
                }
                else {
                  UVar29 = p_Var41->SpinCount;
                }
                local_d8[(ulonglong)uStack_c8._4_1_ * 0x10 + uVar30 + 0x599] = UVar29;
              }
            }
          }
          uVar40 = *puVar24;
        } while (uVar40 >> 0x18 == uVar26);
      }
      uVar46 = uVar46 - 1 & uVar46;
      param_1 = local_108;
    } while (uVar46 != 0);
  }
  *(undefined2 *)((longlong)param_1 + 0x3baa) = 0;
  if (*(code **)(param_1[0x39] + 8) != (code *)&LAB_14736d64c) {
    (**(code **)(param_1[0x39] + 8))(param_1 + 0x39);
  }
  if ((char)local_ec == '\0') {
    plVar42 = (longlong *)(param_1[0x164] + 0x20);
    if (param_1[0x164] == 0) {
      plVar42 = (longlong *)0x0;
    }
    if ((*(byte *)(param_1 + 0x165) & 1) != 0) goto LAB_144a9ebd9;
    bVar11 = false;
  }
  else {
    *(undefined1 *)(param_1 + 0x165) = 1;
    *(undefined1 *)(param_1 + 0x79) = 1;
    plVar42 = (longlong *)(param_1[0x164] + 0x20);
    if (param_1[0x164] == 0) {
      plVar42 = (longlong *)0x0;
    }
LAB_144a9ebd9:
    lVar39 = *plVar42;
    plVar7 = (longlong *)param_1[0x75];
    lVar36 = plVar7[0x33];
    if (lVar36 == 0) {
      (**(code **)(*plVar7 + 8))(plVar7);
      lVar36 = plVar7[0x33];
    }
    *(int *)(lVar36 + 0x1c0) = *(int *)(lVar36 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar36 + 0x28) + 0xe8))
              (*(longlong **)(lVar36 + 0x28),*(undefined8 *)(lVar39 + 8));
    *(undefined1 *)(param_1 + 0x165) = 0;
    param_1[0x16b] = -1;
    *(undefined2 *)((longlong)param_1 + 0x29c2) = 0xffff;
    *(undefined4 *)((longlong)param_1 + 0x2ff4) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0x23b2) = 0xffff;
    *(undefined1 *)((longlong)param_1 + 0x3601) = 1;
    bVar11 = true;
  }
  lVar39 = param_1[0x6bf];
  if (*(int *)(plVar42[1] + 0x38) == 0) {
    lVar36 = *(longlong *)(plVar42[1] + 0x20);
  }
  else {
    lVar36 = FUN_1406f7aac();
  }
  if ((((char)param_1[0x6c0] == '\0') && (lVar39 != 0)) && (lVar39 == lVar36)) goto LAB_144a9dc33;
  param_1[0x6bf] = lVar36;
  plVar7 = (longlong *)param_1[0x75];
  lVar39 = plVar7[0x33];
  if (lVar39 == 0) {
    if (*(code **)(*plVar7 + 8) == FUN_144703254) {
      FUN_1400248de(plVar7);
      plVar7[0x6ed] = 0;
      plVar7[0x6ee] = 0;
      lVar39 = plVar7[0x6e8];
      lVar47 = plVar7[0x6eb];
      lVar19 = *(longlong *)(lVar39 + 0x6c0);
      if (lVar19 != 0) {
        FUN_14736b72c(lVar19,lVar47);
      }
      lVar39 = *(longlong *)(lVar39 + 0x6c8);
      if ((lVar39 != 0) && (*(int *)(lVar39 + 0x10) == 1)) {
        puVar33 = *(undefined8 **)(lVar39 + 8);
        puVar9 = *(undefined8 **)(lVar47 + 0x3888);
        if (puVar9 != puVar33) {
          *(undefined8 **)(lVar47 + 0x3888) = puVar33;
          if (puVar33 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
            UNLOCK();
          }
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar9 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar9)(puVar9,1);
            }
          }
        }
      }
      if (*(char *)((longlong)plVar7 + 0x3879) == '\0') {
        local_d8 = (longlong *)0x0;
        local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
        if (*(longlong *)plVar7[0x6f9] != 0) {
          do {
            plVar8 = local_d8;
            lVar39 = *(longlong *)plVar7[0x6f9];
            plVar32 = *(longlong **)(lVar39 + 8);
            plVar12 = local_d8;
            if (local_d8 != plVar32) {
              if (plVar32 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                UNLOCK();
              }
              plVar12 = plVar32;
              if (local_d8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_d8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  puVar33 = (undefined8 *)*local_d8;
                  local_d8 = plVar32;
                  (*(code *)*puVar33)(plVar8,1);
                  plVar12 = local_d8;
                }
              }
            }
            local_d8 = plVar12;
            local_d0 = (longlong *)CONCAT44(local_d0._4_4_,*(undefined4 *)(lVar39 + 0x10));
            if ((*(byte *)(local_d8[5] + 0xa0) & 1) == 0) break;
            FUN_140039bb8(plVar7 + 0x6f8,&local_d8);
            *(int *)((longlong)plVar7 + 0x37ac) = (int)local_d0 + 1;
          } while (*(longlong *)plVar7[0x6f9] != 0);
        }
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar32 = local_d8 + 1;
          *(int *)plVar32 = (int)*plVar32 + -1;
          UNLOCK();
          if ((int)*plVar32 == 0) {
            (**(code **)*local_d8)(local_d8,1);
          }
        }
      }
      param_1 = local_108;
      plVar32 = (longlong *)plVar7[0x6ef];
      if (plVar32 != (longlong *)0x0) {
        if (*(code **)(*plVar32 + 0x18) == (code *)&LAB_14315ed80) {
          if (plVar32[5] == 0) {
            FUN_140070c2a();
          }
        }
        else {
          (**(code **)(*plVar32 + 0x18))();
        }
      }
      plVar32 = plVar7 + 0x6e8;
      if (*(char *)((longlong)plVar7 + 0x3879) == '\0') {
        lVar39 = *plVar32;
        local_100 = plVar32;
        AcquireSRWLockShared((PSRWLOCK)(lVar39 + 0x8e0));
        lVar47 = *(longlong *)(lVar39 + 0x8d0);
        plVar32 = *(longlong **)(lVar39 + 0x8d8);
        if (plVar32 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
          UNLOCK();
        }
        ReleaseSRWLockShared((PSRWLOCK)(lVar39 + 0x8e0));
        param_1 = local_108;
        plVar7[0x70c] = lVar47;
        plVar8 = (longlong *)plVar7[0x70d];
        if (plVar32 == plVar8) {
          if (plVar32 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar32 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar32)(plVar32);
              LOCK();
              piVar2 = (int *)((longlong)plVar32 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar34 = *piVar2;
              UNLOCK();
joined_r0x000144a9e92f:
              if (iVar34 == 0) {
                (**(code **)(*plVar32 + 0x10))(plVar32);
              }
            }
          }
        }
        else {
          plVar7[0x70d] = (longlong)plVar32;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar32 = plVar8 + 1;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if ((int)*plVar32 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              iVar34 = *piVar2;
              UNLOCK();
              plVar32 = plVar8;
              goto joined_r0x000144a9e92f;
            }
          }
        }
        plVar7[0x6f0] = lVar39 + 0x8a8;
        plVar32 = local_100;
      }
      FUN_140039a1a(plVar32,0);
    }
    else {
      (**(code **)(*plVar7 + 8))(plVar7);
      param_1 = local_108;
    }
    lVar39 = plVar7[0x33];
  }
  *(int *)(lVar39 + 0x1c0) = *(int *)(lVar39 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar39 + 0x28) + 200))(*(longlong **)(lVar39 + 0x28),lVar36);
  *(undefined1 *)(param_1 + 0x6c0) = 0;
LAB_144a9dc33:
  bVar25 = *(byte *)(*plVar42 + 0xbd);
  if ((bVar11) && (cVar4 = *(char *)(*plVar42 + 0xba), -1 < cVar4)) {
    plVar7 = (longlong *)param_1[0x75];
    lVar39 = *(longlong *)(plVar7[1] + 0x1280);
    lVar36 = plVar7[1] + 0xb00;
    if (lVar39 != 0) {
      lVar36 = lVar39;
    }
    lVar39 = *(longlong *)(lVar36 + 0x248 + (longlong)(int)plVar7[2] * 0x280);
    if (lVar39 != 0) {
      uVar21 = *(undefined8 *)(lVar39 + 0x18);
      lVar39 = plVar7[0x33];
      if (lVar39 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
        lVar39 = plVar7[0x33];
      }
      *(int *)(lVar39 + 0x1c0) = *(int *)(lVar39 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar39 + 0x28) + 0x148))
                (*(longlong **)(lVar39 + 0x28),(int)cVar4,uVar21);
      param_1 = local_108;
    }
  }
  plVar7 = (longlong *)param_1[0x75];
  if (((int)plVar7[2] == 2) && (*(code **)(*plVar7 + 0x40) != (code *)&DAT_14315d6a4)) {
    (**(code **)(*plVar7 + 0x40))(plVar7,*(undefined4 *)((longlong)param_1 + 0xb2c));
  }
  plVar7 = param_1 + 0x72;
  if ((bVar25 & 0x90) == 0x10) {
    FUN_14002ae4c(plVar7,*plVar42,5,6);
  }
  if ((bVar25 & 3) == 0 || (bVar25 & 0x40) != 0) {
    if ((bVar25 & 0x40) != 0) {
      FUN_1473819c4(plVar7);
    }
  }
  else {
    FUN_14002a03a(plVar7,*plVar42,5,6);
  }
  uVar13 = ~(ushort)(-1 << (*(byte *)(param_1 + 0x6cb) & 0x1f)) &
           *(ushort *)((longlong)param_1 + 0x23b2);
  if (uVar13 != 0) {
    local_118 = CONCAT22(local_118._2_2_,uVar13);
    local_110 = plVar7;
    FUN_14002a586(param_1 + 0x6e8,5,*plVar42,param_1 + 0x475);
  }
  cVar4 = *(char *)(*plVar42 + 0xb9);
  plVar42 = (longlong *)param_1[0x75];
  if ((-1 < cVar4) && (*(char *)((longlong)param_1 + 0x3601) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x3601) = 0;
    local_d8 = *(longlong **)((longlong)param_1 + 0x3604);
    local_d0 = *(longlong **)((longlong)param_1 + 0x360c);
    lVar39 = plVar42[0x33];
    if (lVar39 == 0) {
      (**(code **)(*plVar42 + 8))(plVar42);
      lVar39 = plVar42[0x33];
    }
    *(int *)(lVar39 + 0x1c0) = *(int *)(lVar39 + 0x1c0) + 1;
    local_118 = 0;
    (**(code **)(**(longlong **)(lVar39 + 0x28) + 0x118))
              (*(longlong **)(lVar39 + 0x28),(int)cVar4,4,&local_d8);
    plVar42 = (longlong *)param_1[0x75];
  }
  iVar34 = (int)plVar42[0x32];
  if (iVar34 != 0) {
    lVar39 = plVar42[0x33];
    if (lVar39 == 0) {
      (**(code **)(*plVar42 + 8))(plVar42);
      lVar39 = plVar42[0x33];
      iVar34 = (int)plVar42[0x32];
    }
    plVar7 = plVar42 + 0x31;
    if (0 < iVar34) {
      iVar38 = 0;
      do {
        lVar36 = (longlong)iVar38;
        lVar47 = lVar36 * 0x20;
        uVar46 = *(uint *)(*plVar7 + 4 + lVar47);
        iVar15 = iVar38;
        if (iVar38 < iVar34) {
          lVar19 = lVar47 + 4;
          do {
            uVar26 = *(uint *)(*plVar7 + lVar19);
            if ((int)(uVar26 ^ uVar46) < 0) break;
            lVar36 = lVar36 + 1;
            *(uint *)(*plVar7 + lVar19) = uVar26 & 0x7fffffff;
            lVar19 = lVar19 + 0x20;
          } while (lVar36 < (int)plVar42[0x32]);
          iVar15 = (int)lVar36;
        }
        if ((int)uVar46 < 0) {
          FUN_1456b21fe(plVar42 + 7,&local_d8,6,0);
          FUN_144709cca(lVar39,&local_d8);
          *(int *)(lVar39 + 0x1c0) = *(int *)(lVar39 + 0x1c0) + 1;
          (**(code **)(**(longlong **)(lVar39 + 0x28) + 0xd0))
                    (*(longlong **)(lVar39 + 0x28),iVar15 - iVar38,lVar47 + *plVar7);
          FUN_1456b21fe(plVar42 + 7,&local_d8,7);
          FUN_144709cca(lVar39,&local_d8);
        }
        else {
          *(int *)(lVar39 + 0x1c0) = *(int *)(lVar39 + 0x1c0) + 1;
          (**(code **)(**(longlong **)(lVar39 + 0x28) + 0xd0))
                    (*(longlong **)(lVar39 + 0x28),iVar15 - iVar38,lVar47 + *plVar7);
        }
        iVar34 = (int)plVar42[0x32];
        iVar38 = iVar15;
      } while (iVar15 < iVar34);
    }
    *(undefined4 *)(plVar42 + 0x32) = 0;
    if (*(int *)((longlong)plVar42 + 0x194) < 0) {
      FUN_147384144(plVar7,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144a9e56a:
  lVar47 = lVar47 + -0x50;
  uVar46 = uVar46 >> 1;
  if (uVar46 < uVar14) goto LAB_144a9e502;
  goto LAB_144a9e54e;
}



// FUNCTION 144a9f2d6 FUN_144a9f2d6 body=310 status=ok
// SIG undefined FUN_144a9f2d6(void)

longlong FUN_144a9f2d6(void)

{
  longlong *plVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cacfd48 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_140eca530;
    local_48 = &LAB_1479b02e7;
    local_50 = &LAB_146063820;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x170;
    FUN_14081cfa3(L"/Script/Engine",L"CollisionProfile",&DAT_14cacfd48,&DAT_1479b02e6);
  }
  plVar1 = DAT_14cacfd48;
  lVar2 = DAT_14cacfd48[0x22];
  if (lVar2 == 0) {
    (**(code **)(*DAT_14cacfd48 + 1000))(DAT_14cacfd48);
    lVar2 = plVar1[0x22];
  }
  if (DAT_14cacfd78 == '\0') {
    FUN_1416bf7d6(lVar2,0);
    DAT_14cacfd78 = '\x01';
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a9f40e FUN_144a9f40e body=1064 status=ok
// SIG undefined FUN_144a9f40e(void)

void FUN_144a9f40e(longlong param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  code cVar3;
  code cVar4;
  ulonglong *puVar5;
  code cVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined **ppuVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [16];
  code *local_88;
  undefined1 local_80;
  undefined1 local_71;
  code *local_70;
  code **local_68;
  undefined *local_60;
  undefined **local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pcVar1 = (code *)(param_1 + 0x40);
  uVar7 = 0;
  LOCK();
  bVar12 = *(char *)(param_1 + 0x40) == '\0';
  if (bVar12) {
    *(char *)(param_1 + 0x40) = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    cVar6 = local_80;
LAB_144a9f71b:
    do {
      local_80 = cVar6;
      cVar4 = *pcVar1;
      cVar6 = local_80;
      while (((byte)cVar4 & 1) != 0) {
        local_80 = cVar4;
        if (((byte)cVar4 & 2) == 0) {
          if (uVar7 < 0x28) {
            local_80 = cVar6;
            SwitchToThread();
            uVar7 = uVar7 + 1;
            cVar6 = local_80;
            goto LAB_144a9f71b;
          }
          local_80 = (code)((byte)cVar4 | 2);
          LOCK();
          cVar3 = *pcVar1;
          if (cVar4 == cVar3) {
            *pcVar1 = local_80;
          }
          UNLOCK();
          if (cVar4 != cVar3) goto LAB_144a9f71b;
        }
        local_58 = (undefined **)&local_71;
        local_60 = &DAT_1427437b8;
        local_68 = &local_88;
        local_70 = (code *)&LAB_1427437ba;
        local_c8 = 0x7ff0000000000000;
        local_88 = pcVar1;
        FUN_1456d3e9c(local_98,pcVar1,&local_70,&local_60);
        cVar6 = local_80;
        cVar4 = *pcVar1;
      }
      LOCK();
      cVar3 = *pcVar1;
      if (cVar4 == cVar3) {
        *pcVar1 = (code)((byte)cVar4 | 1);
      }
      UNLOCK();
      local_80 = cVar6;
    } while (cVar4 != cVar3);
  }
  if (*(undefined ***)(param_1 + 0x30) == (undefined **)0x0) {
    local_60 = *(undefined **)(param_1 + 0x28);
  }
  local_58 = *(undefined ***)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_50 = *(int *)(param_1 + 0x38);
  local_4c = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x38) = 0x100000000;
  LOCK();
  bVar12 = *(char *)(param_1 + 0x40) == '\x01';
  if (bVar12) {
    *(char *)(param_1 + 0x40) = '\0';
  }
  UNLOCK();
  if (!bVar12) {
    cVar6 = *pcVar1;
    do {
      if (cVar6 != (code)0x1) {
        local_68 = &local_88;
        local_70 = FUN_1400e502e;
        local_88 = pcVar1;
        FUN_14008cf08(pcVar1);
        break;
      }
      LOCK();
      cVar6 = *pcVar1;
      bVar12 = cVar6 == (code)0x1;
      if (bVar12) {
        *pcVar1 = (code)0x0;
        cVar6 = (code)0x1;
      }
      UNLOCK();
    } while (!bVar12);
  }
  ppuVar11 = local_58;
  if (local_58 == (undefined **)0x0) {
    ppuVar11 = &local_60;
  }
  if ((longlong)local_50 != 0) {
    ppuVar2 = ppuVar11 + local_50;
    do {
      puVar5 = (ulonglong *)*ppuVar11;
      LOCK();
      puVar8 = puVar5 + 1;
      *(int *)puVar8 = (int)*puVar8 + -1;
      UNLOCK();
      if (puVar5 != (ulonglong *)0x0 && (int)*puVar8 == 0) {
        if (*(code **)*puVar5 == FUN_144a8aba8) {
          *puVar5 = (ulonglong)UE::Tasks::Private::FTaskBase::vftable;
          if (puVar5[0x12] != 0) {
            FUN_1400020a8();
          }
          if (*(code **)(puVar5[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar5[0xe] + 0x18))(puVar5 + 0xe,puVar5 + 9);
          }
          if (puVar5[6] != 0) {
            FUN_1400020a8();
          }
          FUN_140021065();
          puVar8 = (ulonglong *)FUN_140021018();
          if ((int)puVar8[2] < 0x186) {
            uVar9 = puVar8[1];
          }
          else {
            local_b0 = *puVar8;
            if (local_b0 != 0) {
              local_b4 = FUN_14493c560();
              if (local_b4 == 0) {
                uVar7 = 0;
                local_a8 = 0;
                lVar10 = 0;
              }
              else {
                local_a8 = (ulonglong)(local_b4 >> 0xe);
                uVar7 = local_b4 & 0x3fff;
                lVar10 = (ulonglong)(uVar7 * 0x18) + *(longlong *)(&DAT_14c833b00 + local_a8 * 8);
              }
              *(ulonglong *)(lVar10 + 8) = local_b0;
              local_b0 = (ulonglong)local_b4;
              local_a0 = (ulonglong)(uVar7 * 0x18);
              do {
                local_70 = DAT_14c82b580;
                local_88 = (code *)(((ulonglong)DAT_14c82b580 & 0xfffffffffc000000) + 0x4000000);
                if ((ulonglong)local_88 >> 0x1a < (ulonglong)DAT_14c82b580 >> 0x1a) {
                  FUN_14274643a();
                }
                local_88 = (code *)((ulonglong)local_88 & 0xfffffffffc000000 | local_b0);
                if (local_b4 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = *(longlong *)(&DAT_14c833b00 + local_a8 * 8) + local_a0;
                }
                *(uint *)(lVar10 + 0x10) = (uint)local_70 & 0x3ffffff;
                LOCK();
                bVar12 = local_70 != DAT_14c82b580;
                pcVar1 = local_88;
                if (bVar12) {
                  pcVar1 = DAT_14c82b580;
                }
                DAT_14c82b580 = pcVar1;
                UNLOCK();
              } while (bVar12);
            }
            *puVar8 = puVar8[1];
            *(undefined4 *)(puVar8 + 2) = 0;
            uVar9 = 0;
          }
          *puVar5 = uVar9;
          puVar8[1] = (ulonglong)puVar5;
          *(int *)(puVar8 + 2) = (int)puVar8[2] + 1;
        }
        else {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      ppuVar11 = ppuVar11 + 1;
    } while (ppuVar11 != ppuVar2);
  }
  if (local_58 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144a9f838 FUN_144a9f838 body=1872 status=ok
// SIG undefined FUN_144a9f838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144a9f838(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *lpTlsValue;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  bool bVar16;
  ulonglong local_80;
  
  uVar2 = *(ulonglong *)(param_1 + 0x100);
  if (DAT_14c833980 != '\x01') {
    DAT_14c833940 = 0;
    DAT_14c833900 = TlsAlloc();
    DAT_14c833980 = '\x01';
  }
  lpTlsValue = TlsGetValue(DAT_14c833900);
  if (lpTlsValue == (uint *)0x0) {
    lpTlsValue = (uint *)FUN_14001cc68(0xc,0x10);
    lpTlsValue[0] = 0;
    lpTlsValue[1] = 0;
    lpTlsValue[2] = 0;
    TlsSetValue(DAT_14c833900,lpTlsValue);
  }
  uVar5 = lpTlsValue[1];
  if (uVar5 == 0) {
    uVar5 = *lpTlsValue;
    if (uVar5 == 0) {
      uVar5 = (uint)DAT_14c833940;
      uVar8 = DAT_14c833940;
      while (DAT_14c833940 = uVar8, (uVar8 & 0x3ffffff) != 0) {
        uVar5 = uVar5 & 0x3ffffff;
        uVar9 = (uVar8 & 0xfffffffffc000000) + 0x4000000;
        if (uVar9 >> 0x1a < uVar8 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar7 = (ulonglong)((uint)uVar8 & 0x3fff);
        LOCK();
        bVar16 = uVar8 == DAT_14c833940;
        uVar8 = uVar9 | *(uint *)(*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8) +
                                  0x10 + uVar7 * 0x18);
        if (!bVar16) {
          uVar8 = DAT_14c833940;
        }
        DAT_14c833940 = uVar8;
        UNLOCK();
        if (bVar16) {
          *(undefined4 *)
           (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8) + uVar7 * 0x18 + 0x10) = 0
          ;
          lpTlsValue[1] = uVar5;
          goto LAB_144a9fbd4;
        }
        uVar5 = (uint)DAT_14c833940;
        uVar8 = DAT_14c833940;
      }
      lpTlsValue[1] = 0;
      uVar5 = DAT_14c833ac0;
      LOCK();
      uVar4 = DAT_14c833ac0 + 0x40;
      UNLOCK();
      if (DAT_14c833ac0 + 0x40 < 0x4000001) {
        bVar16 = DAT_14c833ac0 < 0xffffffc0;
        DAT_14c833ac0 = uVar4;
        if (bVar16) goto LAB_144a9fdc6;
      }
      else {
        DAT_14c833ac0 = uVar4;
        FUN_140033559(".\\Runtime/Core/Private/Containers/LockFreeList.cpp",0x30,
                      L"Consumed %d lock free links; there are no more.",0x4000000);
LAB_144a9fdc6:
        iVar11 = 0;
        do {
          puVar10 = (undefined8 *)FUN_1402bcaae(&DAT_14c833ac0,uVar5 + iVar11);
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0x40);
      }
      iVar11 = 0;
      uVar4 = uVar5;
      do {
        uVar13 = uVar4;
        if (uVar13 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar13 & 0x3fff) * 0x18) +
                    *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar13 >> 0xe) * 8));
        }
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 2) = 0;
        puVar10[1] = (ulonglong)lpTlsValue[1];
        lpTlsValue[1] = uVar13;
        iVar11 = iVar11 + -1;
        uVar4 = uVar13 + 1;
      } while (iVar11 != -0x40);
      lpTlsValue[2] = 0x40;
      if (uVar13 == 0) {
        lpTlsValue[1] = (uint)_DAT_00000008;
        lpTlsValue[2] = 0x3f;
        _DAT_00000008 = 0;
        uVar8 = 0;
        lVar12 = 0;
        goto LAB_144a9f8e4;
      }
      uVar5 = uVar5 + 0x3f;
    }
    else {
      lpTlsValue[1] = uVar5;
      *lpTlsValue = 0;
LAB_144a9fbd4:
      lpTlsValue[2] = 0x40;
    }
    uVar4 = 0x3f;
  }
  else {
    uVar4 = lpTlsValue[2] - 1;
  }
  uVar8 = (ulonglong)uVar5;
  lVar3 = *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8);
  lVar12 = (ulonglong)((uVar5 & 0x3fff) << 3) * 3;
  lpTlsValue[1] = (uint)*(undefined8 *)(lVar3 + 8 + lVar12);
  lpTlsValue[2] = uVar4;
  *(undefined8 *)(lVar3 + 8 + lVar12) = 0;
  lVar12 = lVar12 + *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar5 >> 0xe) * 8);
LAB_144a9f8e4:
  *(undefined8 *)(lVar12 + 8) = param_2;
  puVar14 = (ulonglong *)(param_1 + (param_3 & 0xffffffff) * 0x80 + 0x40);
  do {
    while( true ) {
      do {
        uVar9 = *puVar14;
        if ((uVar9 & 0x3ffffff) == 0) {
          puVar15 = (ulonglong *)0x0;
        }
        else {
          puVar15 = (ulonglong *)
                    ((ulonglong)(((uint)uVar9 & 0x3fff) * 0x18) +
                    *(longlong *)
                     (&DAT_14c833b00 + (ulonglong)(((uint)uVar9 & 0x3ffffff) >> 0xe) * 8));
        }
        uVar7 = *puVar15;
      } while (*puVar14 != uVar9);
      if ((uVar7 & 0x3ffffff) == 0) break;
      uVar6 = (uVar9 & 0xfffffffffc000000) + 0x4000000;
      if (uVar6 >> 0x1a < uVar9 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar9 == *puVar14) {
        *puVar14 = uVar6 | (uint)uVar7 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar6 = (uVar7 & 0xfffffffffc000000) + 0x4000000;
    if (uVar6 >> 0x1a < uVar7 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *puVar15;
    if (uVar7 == uVar1) {
      *puVar15 = uVar6 | uVar8;
    }
    UNLOCK();
  } while (uVar7 != uVar1);
  uVar7 = (uVar9 & 0xfffffffffc000000) + 0x4000000;
  if (uVar7 >> 0x1a < uVar9 >> 0x1a) {
    FUN_14274643a();
  }
  LOCK();
  if (uVar9 == *puVar14) {
    *puVar14 = uVar7 | uVar8;
  }
  UNLOCK();
  local_80 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (local_80 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14274643a();
  }
  uVar5 = (uint)uVar2;
  if ((uVar2 & 0x3ffffff) == 0) {
    iVar11 = -1;
  }
  else {
    iVar11 = 0;
    if ((uVar2 & 1) == 0) {
      iVar11 = 0;
      uVar8 = uVar2 & 0x3ffffff;
      do {
        iVar11 = iVar11 + 1;
        uVar9 = uVar8 & 2;
        uVar8 = uVar8 >> 1;
      } while (uVar9 == 0);
    }
    uVar5 = uVar5 & ~(uint)(1L << ((byte)iVar11 & 0x3f));
  }
  local_80 = local_80 | uVar5 & 0x3ffffff;
  LOCK();
  bVar16 = uVar2 == *(ulonglong *)(param_1 + 0x100);
  if (bVar16) {
    *(ulonglong *)(param_1 + 0x100) = local_80;
  }
  UNLOCK();
  while (!bVar16) {
    uVar2 = *(ulonglong *)(param_1 + 0x100);
    uVar8 = (uVar2 & 0xfffffffffc000000) + (ulonglong)((uint)local_80 & 0x3ffffff) + 0x4000000;
    if (uVar8 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    if ((uVar2 & 0x3ffffff) == 0) {
      local_80 = uVar8 & 0xfffffffffc000000 | (ulonglong)((uint)uVar2 & 0x3ffffff);
      iVar11 = -1;
    }
    else {
      iVar11 = 0;
      if ((uVar2 & 1) == 0) {
        iVar11 = 0;
        uVar9 = uVar2 & 0x3ffffff;
        do {
          iVar11 = iVar11 + 1;
          uVar7 = uVar9 & 2;
          uVar9 = uVar9 >> 1;
        } while (uVar7 == 0);
      }
      local_80 = uVar8 & 0xfffffffffc000000 |
                 (ulonglong)((uint)uVar2 & ~(uint)(1L << ((byte)iVar11 & 0x3f)) & 0x3ffffff);
    }
    LOCK();
    bVar16 = uVar2 == *(ulonglong *)(param_1 + 0x100);
    if (bVar16) {
      *(ulonglong *)(param_1 + 0x100) = local_80;
    }
    UNLOCK();
  }
  return iVar11;
}



// FUNCTION 144a9ff88 FUN_144a9ff88 body=41 status=ok
// SIG undefined FUN_144a9ff88(void)

void FUN_144a9ff88(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14481578e();
  return;
}



// FUNCTION 144a9ffb2 FUN_144a9ffb2 body=307 status=ok
// SIG undefined FUN_144a9ffb2(void)

int FUN_144a9ffb2(undefined8 param_1,ulonglong *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  ulonglong *local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = 0;
  local_40 = param_2;
  local_34 = param_3;
  if (0 < (int)param_3) {
    uVar5 = 0x7fffffff;
    do {
      if (uVar5 == 0) {
        iVar4 = -1;
        break;
      }
      iVar2 = iVar4;
      if (((((ulonglong)local_40 & 7) == 0) && (local_34 = param_3, 7 < param_3)) &&
         (uVar3 = uVar5, 7 < (int)uVar5)) {
        while (uVar5 = uVar3, iVar2 = iVar4, param_3 = local_34,
              (*local_40 & 0x8080808080808080) == 0) {
          local_40 = local_40 + 1;
          iVar4 = iVar4 + 8;
          param_3 = local_34 - 8;
          uVar5 = uVar3 - 8;
          bVar1 = (int)local_34 < 0x10;
          iVar2 = iVar4;
          local_34 = param_3;
          if ((bVar1) || (bVar1 = uVar3 < 0x10, uVar3 = uVar5, bVar1)) break;
        }
      }
LAB_144aa005a:
      do {
        iVar4 = iVar2;
        if (((int)param_3 < 1) || ((int)uVar5 < 1)) break;
        uVar3 = FUN_14003e942(&local_40,&local_34);
        param_3 = local_34;
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 1;
          iVar2 = iVar4 + 1;
          if (0x7f < uVar3) goto LAB_144aa005a;
        }
        else {
          if (1 < uVar5) {
            uVar5 = uVar5 - 2;
            iVar2 = iVar4 + 2;
            goto LAB_144aa005a;
          }
          uVar5 = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar4;
      } while (((ulonglong)local_40 & 7) != 0);
    } while (0 < (int)param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 144aa00e6 FUN_144aa00e6 body=123 status=ok
// SIG undefined FUN_144aa00e6(void)

void FUN_144aa00e6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 144aa0162 FUN_144aa0162 body=35 status=ok
// SIG undefined FUN_144aa0162(void)

undefined1 FUN_144aa0162(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)(param_1 + 0x58);
  }
  else {
    puVar2 = *(undefined1 **)(param_1 + 0x50);
  }
  return *puVar2;
}



// FUNCTION 144aa0186 FUN_144aa0186 body=37 status=ok
// SIG undefined FUN_144aa0186(void)

undefined4 FUN_144aa0186(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x58);
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x50);
  }
  return *puVar2;
}



// FUNCTION 144aa01ac FUN_144aa01ac body=176 status=ok
// SIG undefined FUN_144aa01ac(void)

void FUN_144aa01ac(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  longlong lVar7;
  
  if (((short)param_2 != 0) && (DAT_14c758740 != 0xffffffff)) {
    pvVar3 = TlsGetValue(DAT_14c758740);
    if ((pvVar3 != (LPVOID)0x0) &&
       ((*(char *)((longlong)pvVar3 + 0x670) == '\x01' &&
        (puVar6 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000),
        *(char *)((longlong)puVar6 + 3) == -0x1d)))) {
      lVar7 = (ulonglong)(byte)puVar6[1] * 0x20;
      puVar5 = (undefined8 *)((longlong)pvVar3 + lVar7 + 0x10);
      uVar2 = *(uint *)((longlong)pvVar3 + lVar7 + 0x18);
      if ((uVar2 < 0x40) && (uVar2 * *puVar6 < 0x10000)) {
        uVar4 = *puVar5;
      }
      else {
        if (*(longlong *)((longlong)pvVar3 + lVar7 + 0x20) != 0) goto LAB_144aa0236;
        *(undefined8 *)((longlong)pvVar3 + lVar7 + 0x20) = *puVar5;
        *(undefined8 *)((longlong)pvVar3 + lVar7 + 0x28) =
             *(undefined8 *)((longlong)pvVar3 + lVar7 + 0x18);
        *(undefined4 *)((longlong)pvVar3 + lVar7 + 0x18) = 0;
        uVar4 = 0;
      }
      *param_2 = uVar4;
      param_2[1] = 0;
      *puVar5 = param_2;
      piVar1 = (int *)((longlong)pvVar3 + lVar7 + 0x18);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
LAB_144aa0236:
  FUN_140023428(param_1,param_2);
  return;
}



// FUNCTION 144aa025c FUN_144aa025c body=64 status=ok
// SIG undefined FUN_144aa025c(void)

void FUN_144aa025c(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144aa0294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    return;
  }
  FUN_14572512c();
  return;
}



// FUNCTION 144aa029c FUN_144aa029c body=66 status=ok
// SIG undefined FUN_144aa029c(void)

void FUN_144aa029c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined8 **)plVar1[1];
  if (puVar2 + 1 <= (undefined8 *)((longlong *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144aa02d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,8);
    return;
  }
  thunk_FUN_146821949();
  return;
}



// FUNCTION 144aa02de FUN_144aa02de body=477 status=ok
// SIG undefined FUN_144aa02de(void)

void FUN_144aa02de(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  char cVar11;
  ulonglong uVar12;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x170);
    if (UNRECOVERED_JUMPTABLE == FUN_140056b60) {
      FUN_140056b60(plVar1,param_2,4);
      return;
    }
    if (UNRECOVERED_JUMPTABLE == FUN_14482ec02) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x178);
      if (UNRECOVERED_JUMPTABLE == FUN_1447a7fc4) {
        if ((*(byte *)((longlong)plVar1 + 0x29) & 2) == 0) {
          if (plVar1[0x15] + 0x20 <= plVar1[0x14]) {
            *(undefined1 *)((longlong)param_2 + 3) = 0;
            uVar7 = *(uint *)(plVar1 + 0x15);
            uVar8 = uVar7 + 7;
            if (-1 < (int)uVar7) {
              uVar8 = uVar7;
            }
            uVar8 = (int)uVar8 >> 3;
            iVar5 = uVar7 + 0x27;
            if (-1 < (int)(uVar7 + 0x20)) {
              iVar5 = uVar7 + 0x20;
            }
            lVar3 = plVar1[0x12];
            uVar6 = (iVar5 >> 3) - uVar8;
            if ((uVar7 & 7) == 0) {
              uVar10 = 4;
              if (4 < (int)uVar6) {
                uVar10 = uVar6;
              }
              uVar7 = (uint)*(byte *)(lVar3 + (ulonglong)uVar8);
              bVar4 = 8;
            }
            else {
              uVar10 = 5;
              if (5 < (int)uVar6) {
                uVar10 = uVar6;
              }
              uVar12 = (ulonglong)uVar8;
              cVar11 = (char)(uVar7 & 7);
              uVar8 = uVar8 + 1;
              bVar4 = 0x10 - cVar11;
              uVar10 = uVar10 - 1;
              uVar7 = ((uint)*(byte *)(lVar3 + (ulonglong)uVar8) << (bVar4 & 0x1f)) +
                      ((uint)*(byte *)(lVar3 + uVar12) << (8U - cVar11 & 0x1f)) >> 8;
            }
            *(char *)param_2 = (char)uVar7;
            uVar12 = 1;
            do {
              uVar6 = ((uint)*(byte *)(lVar3 + (ulonglong)(uVar8 + (int)uVar12)) << (bVar4 & 0x1f))
                      + uVar7;
              uVar7 = uVar6 >> 8;
              *(char *)((longlong)param_2 + uVar12) = (char)(uVar6 >> 8);
              uVar12 = uVar12 + 1;
            } while (uVar10 != uVar12);
            plVar1[0x15] = plVar1[0x15] + 0x20;
            return;
          }
          FUN_1405d09b8(plVar1,0x20);
        }
        *param_2 = 0;
        return;
      }
      uVar9 = 0x20;
    }
    else {
      uVar9 = 4;
      if (UNRECOVERED_JUMPTABLE == FUN_14011736e) {
        FUN_14011736e(plVar1,param_2);
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000144aa04a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_2,uVar9);
    return;
  }
  FUN_14572512c(plVar1,param_2);
  return;
}



// FUNCTION 144aa04bc FUN_144aa04bc body=66 status=ok
// SIG undefined FUN_144aa04bc(void)

void FUN_144aa04bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined8 **)plVar1[1];
  if (puVar2 + 1 <= (undefined8 *)((longlong *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144aa04f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,8);
    return;
  }
  thunk_FUN_146821949();
  return;
}



// FUNCTION 144aa04fe FUN_144aa04fe body=54 status=ok
// SIG undefined FUN_144aa04fe(void)

undefined8 * FUN_144aa04fe(undefined8 *param_1)

{
  undefined8 *puVar1;
  
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
  return param_1;
}



// FUNCTION 144aa0534 FUN_144aa0534 body=125 status=ok
// SIG undefined FUN_144aa0534(void)

undefined8 FUN_144aa0534(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar6);
      pcVar4 = *(code **)(*plVar3 + 0x28);
      if (pcVar4 == FUN_1401cb06e) {
        cVar5 = FUN_1401cb06e();
      }
      else {
        cVar5 = (*pcVar4)(plVar3,param_2,param_3,param_4);
      }
      if (cVar5 != '\0') {
        return 1;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  return 0;
}



// FUNCTION 144aa05b2 FUN_144aa05b2 body=477 status=ok
// SIG undefined FUN_144aa05b2(void)

longlong * FUN_144aa05b2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    plVar4 = (longlong *)FUN_140021018();
    if ((int)plVar4[2] < 0x186) {
      lVar6 = plVar4[1];
    }
    else {
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar8 = 0;
          lVar7 = 0;
        }
        else {
          uVar8 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar7 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar8 * 8);
        }
        *(longlong *)(lVar7 + 8) = lVar6;
        do {
          uVar1 = DAT_14c8960c0;
          uVar5 = (DAT_14c8960c0 & 0xfffffffffc000000) + 0x4000000;
          if (uVar5 >> 0x1a < DAT_14c8960c0 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)(&DAT_14c833b00 + uVar8 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar6 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar9 = uVar1 != DAT_14c8960c0;
          uVar1 = uVar5 | uVar2;
          if (bVar9) {
            uVar1 = DAT_14c8960c0;
          }
          DAT_14c8960c0 = uVar1;
          UNLOCK();
        } while (bVar9);
      }
      *plVar4 = plVar4[1];
      *(undefined4 *)(plVar4 + 2) = 0;
      lVar6 = 0;
    }
    *param_1 = lVar6;
    plVar4[1] = (longlong)param_1;
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
  }
  return param_1;
}



// FUNCTION 144aa0790 FUN_144aa0790 body=142 status=ok
// SIG undefined FUN_144aa0790(void)

void FUN_144aa0790(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 144aa081e FUN_144aa081e body=449 status=ok
// SIG undefined FUN_144aa081e(void)

longlong FUN_144aa081e(longlong param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  local_58 = CONCAT44(local_58._4_4_,0x7fffffff);
  puVar9 = param_2;
  iVar8 = param_3;
  do {
    if (iVar8 < 1) {
LAB_144aa08ee:
      iVar8 = local_4c;
      goto LAB_144aa08f2;
    }
    uVar1 = *puVar9;
    uVar6 = (uint)uVar1;
    puVar3 = puVar9 + 1;
    iVar7 = iVar8 + -1;
    if ((uVar1 & 0xfc00) == 0xd800) {
      if (iVar8 == 1) {
        cVar4 = FUN_140024707(uVar6,&local_4c,&local_58);
        iVar8 = -1;
        if (cVar4 != '\0') goto LAB_144aa08ee;
        goto LAB_144aa08f2;
      }
      if ((*puVar3 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar3 + 0xfca02400;
        iVar7 = iVar8 + -2;
        puVar3 = puVar9 + 2;
      }
    }
    puVar9 = puVar3;
    cVar4 = FUN_140024707(uVar6,&local_4c,&local_58);
    iVar8 = iVar7;
  } while (cVar4 != '\0');
  iVar8 = -1;
LAB_144aa08f2:
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(*(longlong *)(param_1 + 8) + (longlong)iVar8)) {
    FUN_1402134d6(param_1);
  }
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    local_58 = uVar2;
    local_4c = iVar8;
    do {
      if (param_3 < 1) {
LAB_144aa09a0:
        uVar5 = local_58;
        if ((int)local_58 - (int)uVar2 != -1) goto LAB_144aa09b1;
        break;
      }
      uVar1 = *param_2;
      uVar6 = (uint)uVar1;
      puVar9 = param_2 + 1;
      iVar8 = param_3 + -1;
      if ((uVar1 & 0xfc00) == 0xd800) {
        if (param_3 == 1) {
          cVar4 = FUN_1400247af(uVar6,&local_58,&local_4c);
          if (cVar4 != '\0') goto LAB_144aa09a0;
          break;
        }
        if ((*puVar9 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)uVar1 * 0x400 + (uint)*puVar9 + 0xfca02400;
          puVar9 = param_2 + 2;
          iVar8 = param_3 + -2;
        }
      }
      param_3 = iVar8;
      param_2 = puVar9;
      cVar4 = FUN_1400247af(uVar6,&local_58,&local_4c);
    } while (cVar4 != '\0');
    uVar5 = 0;
LAB_144aa09b1:
    *(undefined8 *)(param_1 + 8) = uVar5;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144aa09e0 FUN_144aa09e0 body=208 status=ok
// SIG undefined FUN_144aa09e0(void)

byte FUN_144aa09e0(undefined8 *param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_144719204(*param_1,0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    dVar1 = (double)FUN_144719204(param_1[1],0x4076800000000000);
    dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                    (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      dVar1 = (double)FUN_144719204(param_1[2],0x4076800000000000);
      return -((double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                       (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) == 0.0) & 1;
    }
  }
  return 0;
}



// FUNCTION 144aa0ab0 FUN_144aa0ab0 body=392 status=ok
// SIG undefined FUN_144aa0ab0(void)

longlong *
FUN_144aa0ab0(longlong *param_1,undefined8 *param_2,undefined1 *param_3,ulonglong param_4)

{
  short *psVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar4 = *(int *)(param_2 + 1);
  if ((0 < iVar4) && (psVar1 = (short *)*param_2, *psVar1 == 0x2f)) {
    if (iVar4 - 1U == 0) {
      iVar4 = 1;
    }
    else {
      psVar7 = psVar1 + 1;
      iVar5 = -1;
      do {
        if (*psVar7 == 0x2f) {
          if (iVar5 != 0) {
            iVar4 = -iVar5;
          }
          break;
        }
        psVar7 = psVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (psVar7 < psVar1 + (ulonglong)(iVar4 - 1U) + 1);
    }
    iVar4 = iVar4 - (int)(param_4 & 0xff);
    psVar1 = psVar1 + (param_4 & 0xff);
    *param_1 = (longlong)psVar1;
    *(int *)(param_1 + 1) = iVar4;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872f98) && (FUN_144b3d300(&DAT_14c872f98), DAT_14c872f98 == -1)) {
      FUN_140056680(&DAT_14c872f88,L"Classes_");
      atexit((_func_5014 *)&LAB_142787290);
      _Init_thread_footer(&DAT_14c872f98);
    }
    uVar2 = 0;
    iVar5 = DAT_14c872f90 - 1;
    if (DAT_14c872f90 == 0) {
      iVar5 = 0;
    }
    iVar3 = iVar4;
    if (iVar5 < iVar4) {
      iVar3 = iVar5;
    }
    iVar6 = 0;
    if (0 < iVar3) {
      iVar6 = iVar3;
    }
    if (iVar5 == iVar6) {
      if (((DAT_14c872f90 < 2) || (iVar3 < 1)) ||
         (iVar3 = FUN_144a54874(DAT_14c872f88,psVar1,iVar5), iVar3 == 0)) {
        iVar3 = iVar4 - iVar5;
        if (iVar4 <= iVar4 - iVar5) {
          iVar3 = iVar4;
        }
        iVar5 = 0;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        *param_1 = (longlong)psVar1 + ((longlong)iVar4 * 2 - (ulonglong)(uint)(iVar5 * 2));
        *(int *)(param_1 + 1) = iVar5;
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 144aa0c38 FUN_144aa0c38 body=290 status=ok
// SIG undefined FUN_144aa0c38(void)

longlong * FUN_144aa0c38(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code *pcVar6;
  
  pcVar6 = *(code **)(*param_1 + 0x170);
  if (pcVar6 == FUN_14473a572) {
    plVar5 = (longlong *)param_1[0x12];
    pcVar6 = *(code **)(*plVar5 + 0x170);
    if (pcVar6 == FUN_14004e24c) {
      FUN_14004e24c(plVar5,param_2,0x14);
      return param_1;
    }
    if (pcVar6 == FUN_1447395b8) {
      lVar2 = plVar5[0x12];
      lVar3 = plVar5[0x13];
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar2 + 0x10 + lVar3);
      puVar1 = (undefined8 *)(lVar2 + lVar3);
      uVar4 = puVar1[1];
      *param_2 = *puVar1;
      param_2[1] = uVar4;
      plVar5[0x13] = plVar5[0x13] + 0x14;
      return param_1;
    }
    if (pcVar6 != FUN_144a6950e) {
LAB_144aa0d48:
      (*pcVar6)(plVar5,param_2,0x14);
      return param_1;
    }
    if ((*(byte *)((longlong)plVar5 + 0x29) & 2) != 0) {
      return param_1;
    }
    puVar1 = *(undefined8 **)plVar5[1];
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 2);
    uVar4 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar4;
    plVar5 = (longlong *)plVar5[1];
  }
  else {
    if (pcVar6 == FUN_140090aac) {
      FUN_140090aac(param_1,param_2,0x14);
      return param_1;
    }
    plVar5 = param_1;
    if (pcVar6 != FUN_144a6950e) goto LAB_144aa0d48;
    if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) {
      return param_1;
    }
    puVar1 = *(undefined8 **)param_1[1];
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 2);
    uVar4 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar4;
    plVar5 = (longlong *)param_1[1];
  }
  *plVar5 = *plVar5 + 0x14;
  return param_1;
}



// FUNCTION 144aa0d5a FUN_144aa0d5a body=15 status=ok
// SIG undefined FUN_144aa0d5a(void)

void FUN_144aa0d5a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) != '\x01') {
    return;
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 144aa0d6a FUN_144aa0d6a body=461 status=ok
// SIG undefined FUN_144aa0d6a(void)

undefined8 * FUN_144aa0d6a(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  uint uVar9;
  short *psVar10;
  longlong *plVar11;
  short sVar12;
  uint uVar13;
  ulonglong uVar14;
  
  *param_1 = 0;
  iVar6 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar6,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar6 * 2);
    param_1[2] = 0;
    param_1[3] = 0;
    if (*(int *)(param_1 + 1) != 0) {
      puVar7 = (ushort *)*param_1;
      goto LAB_144aa0dc4;
    }
  }
  puVar7 = &DAT_149dfb77a;
LAB_144aa0dc4:
  plVar11 = param_1 + 2;
  uVar1 = *puVar7;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    do {
      if (uVar1 < 0x80) {
        sVar12 = *(short *)(&DAT_149e34710 + (ulonglong)uVar1 * 4);
      }
      else {
        sVar12 = 0;
      }
      *puVar7 = sVar12 + uVar1;
      uVar1 = puVar7[1];
      puVar7 = puVar7 + 1;
    } while (uVar1 != 0);
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      FUN_141701710(plVar11,0);
    }
  }
  iVar6 = *(int *)(param_1 + 1);
  psVar8 = (short *)*param_1;
  psVar10 = psVar8;
  if (iVar6 == 0) {
    psVar10 = &DAT_149dfb77a;
  }
  do {
    sVar12 = *psVar10;
    psVar10 = psVar10 + 1;
  } while (0xff80 < (ushort)(sVar12 - 0x80U));
  if (sVar12 == 0) {
    uVar9 = iVar6 - 1;
    if (iVar6 == 0) {
      uVar9 = 0;
    }
    if (0 < (int)uVar9) {
      iVar2 = *(int *)(param_1 + 3);
      uVar13 = uVar9 + iVar2 + 1;
      *(uint *)(param_1 + 3) = uVar13;
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar2) <= uVar9) {
        FUN_144761492(plVar11);
        uVar13 = *(uint *)(param_1 + 3);
        iVar6 = *(int *)(param_1 + 1);
        psVar8 = (short *)*param_1;
      }
      uVar9 = iVar6 + (uint)(iVar6 == 0);
      if (iVar6 == 0) {
        psVar8 = &DAT_149dfb77a;
      }
      if ((int)uVar13 < (int)uVar9) {
        uVar9 = uVar13;
      }
      if (0 < (int)uVar9) {
        lVar3 = *plVar11;
        uVar14 = 0;
        bVar5 = 0;
        do {
          bVar4 = bVar5;
          uVar1 = psVar8[uVar14];
          *(char *)(lVar3 + uVar14) = (char)uVar1;
          uVar14 = uVar14 + 1;
          bVar5 = bVar4 | 0x7f < uVar1;
        } while (uVar9 != uVar14);
        if ((bool)(bVar4 | 0x7f < uVar1)) {
          uVar14 = 0;
          do {
            if (0x7f < (ushort)psVar8[uVar14]) {
              *(undefined1 *)(lVar3 + uVar14) = 0x3f;
            }
            uVar14 = uVar14 + 1;
          } while (uVar9 != uVar14);
          thunk_FUN_140e0237d();
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 144aa0f37 FUN_144aa0f37 body=87 status=ok
// SIG undefined FUN_144aa0f37(void)

void FUN_144aa0f37(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 1);
  puVar2 = &DAT_149dfb77a;
  puVar3 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar3 = (undefined2 *)*param_1;
  }
  iVar5 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar5;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
    iVar5 = *(int *)(param_2 + 1) + -1;
  }
  FUN_14006f0ba(puVar3,iVar4,puVar2,iVar5,param_3,0);
  return;
}



// FUNCTION 144aa0f8e FUN_144aa0f8e body=51 status=ok
// SIG undefined FUN_144aa0f8e(void)

undefined8
FUN_144aa0f8e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_144890ad6(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,
                *(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 144aa0fc2 FUN_144aa0fc2 body=532 status=ok
// SIG undefined FUN_144aa0fc2(void)

uint * FUN_144aa0fc2(longlong param_1,uint *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong local_68;
  undefined4 local_60;
  byte local_5c;
  undefined2 local_5b;
  undefined1 local_59;
  uint local_58;
  uint local_54;
  uint local_50;
  ushort local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  local_60 = (undefined4)param_3[1];
  local_5c = *(byte *)((longlong)param_3 + 0xc);
  local_59 = *(undefined1 *)((longlong)param_3 + 0xf);
  local_5b = *(undefined2 *)((longlong)param_3 + 0xd);
  if ((local_5c & 1) == 0) {
    FUN_14472262f();
  }
  else {
    FUN_14142eca0();
  }
  param_1 = param_1 + (ulonglong)local_58 * 0x40;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10040));
  uVar3 = *(uint *)(param_1 + 0x1004c);
  uVar11 = (ulonglong)(local_54 & uVar3);
  lVar4 = *(longlong *)(param_1 + 0x10050);
  uVar7 = *(uint *)(lVar4 + uVar11 * 4);
  if (uVar7 == 0) {
LAB_144aa1149:
    uVar7 = 0;
LAB_144aa116b:
    *param_2 = uVar7;
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10040));
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  uVar10 = (ulonglong)local_4c;
LAB_144aa106d:
  if ((uVar7 & 0xe0000000) != local_50) goto LAB_144aa1137;
  lVar5 = *(longlong *)
           (*(longlong *)(param_1 + 0x10058) + 0x10 + (ulonglong)(uVar7 >> 0xd & 0xfff8));
  if (*(ushort *)(lVar5 + (ulonglong)(uVar7 & 0xffff) * 2) != (ushort)uVar10) goto LAB_144aa1137;
  uVar8 = uVar10 >> 6 & 0x3ffffff;
  if ((local_5c & 1) != 0) {
    local_70 = uVar10;
    iVar6 = FUN_144a54874();
    goto LAB_144aa1153;
  }
  if (0x3f < (ushort)uVar10) {
    lVar9 = 0;
    do {
      bVar1 = *(byte *)(lVar5 + (ulonglong)(uVar7 & 0xffff) * 2 + 2 + lVar9);
      bVar2 = *(byte *)(local_68 + lVar9);
      if (bVar1 == bVar2) {
        if ((ulonglong)bVar1 == 0) break;
      }
      else {
        if ((char)(bVar2 | bVar1) < '\0') {
          iVar6 = (uint)bVar1 - (uint)bVar2;
          local_70 = uVar10;
          goto LAB_144aa1153;
        }
        local_70 = uVar10;
        if ((&DAT_149e05da0)[bVar1] != (&DAT_149e05da0)[bVar2]) goto LAB_144aa114d;
      }
      if (uVar8 == 1) break;
      uVar8 = uVar8 - 1;
      lVar9 = lVar9 + 1;
    } while( true );
  }
  goto LAB_144aa1165;
LAB_144aa114d:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[bVar1] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144aa1153:
  uVar10 = local_70;
  if (iVar6 == 0) {
LAB_144aa1165:
    uVar7 = uVar7 & 0x1fffffff;
    goto LAB_144aa116b;
  }
LAB_144aa1137:
  uVar11 = (ulonglong)((int)uVar11 + 1U & uVar3);
  uVar7 = *(uint *)(lVar4 + uVar11 * 4);
  if (uVar7 == 0) goto LAB_144aa1149;
  goto LAB_144aa106d;
}



// FUNCTION 144aa11d8 FUN_144aa11d8 body=166 status=ok
// SIG undefined FUN_144aa11d8(void)

void FUN_144aa11d8(ushort *param_1,longlong *param_2)

{
  void *_Dst;
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(*param_1 >> 6);
  lVar3 = param_2[1];
  if ((ulonglong)param_2[2] <= lVar3 + uVar4 * 2) {
    FUN_140213274(param_2,uVar4);
    lVar3 = param_2[1];
  }
  param_2[1] = lVar3 + uVar4 * 2;
  _Dst = (void *)(*param_2 + (longlong)(int)((ulonglong)(lVar3 - *param_2) >> 1) * 2);
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    memcpy(_Dst,param_1 + 1,(ulonglong)(uVar1 >> 6));
    if (0x3f < *param_1) {
      uVar1 = *param_1 >> 6;
      uVar2 = (uint)uVar1;
      uVar4 = (ulonglong)(uVar1 - 1);
      do {
        *(short *)((longlong)_Dst + uVar4 * 2) = (short)*(char *)((longlong)_Dst + uVar4);
        uVar4 = uVar4 - 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
  memcpy(_Dst,param_1 + 1,(ulonglong)(uVar1 >> 5 & 0xfffffffe));
  return;
}



// FUNCTION 144aa127e FUN_144aa127e body=187 status=ok
// SIG undefined FUN_144aa127e(void)

undefined8 *
FUN_144aa127e(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_448 [32];
  undefined8 **local_428;
  uint local_420;
  undefined1 local_41c;
  longlong *local_418;
  uint local_410;
  undefined1 local_40c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_448;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    *param_1 = 0;
  }
  else {
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      if (0 < (int)uVar1) {
        uVar3 = 0x400;
        if (uVar1 < 0x400) {
          uVar3 = uVar1;
        }
        lVar2 = *param_2;
        uVar6 = 0;
        do {
          *(undefined1 *)((longlong)&local_418 + uVar6) = *(undefined1 *)(lVar2 + uVar6 * 2);
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
      local_428 = &local_418;
      pppuVar5 = &local_428;
      local_41c = 0;
      local_420 = uVar1;
    }
    else {
      local_418 = (longlong *)*param_2;
      pppuVar5 = (undefined8 ***)&local_418;
      local_40c = 1;
      local_410 = uVar1;
    }
    uVar4 = FUN_14001a6c0(pppuVar5,param_3);
    *(undefined4 *)param_1 = uVar4;
    *(undefined4 *)((longlong)param_1 + 4) = param_4;
  }
  if ((local_18 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aa133a FUN_144aa133a body=117 status=ok
// SIG undefined FUN_144aa133a(void)

ulonglong * FUN_144aa133a(ulonglong *param_1,char *param_2)

{
  wchar_t *_Str;
  char cVar1;
  uint uVar2;
  size_t sVar3;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _Str = (wchar_t *)(param_2 + 2);
  cVar1 = *param_2;
  if (cVar1 == '\x01') {
    sVar3 = wcslen(_Str);
    local_20 = (int)sVar3;
  }
  else {
    sVar3 = strlen((char *)_Str);
    local_20 = (undefined4)sVar3;
  }
  local_28 = _Str;
  local_1c = cVar1 == '\x01';
  uVar2 = FUN_14001a6c0(&local_28,1);
  *param_1 = (ulonglong)uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aa13b0 FUN_144aa13b0 body=12 status=ok
// SIG undefined FUN_144aa13b0(void)

void FUN_144aa13b0(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = *param_2;
  FUN_14005eb5c();
  return;
}



// FUNCTION 144aa13bc FUN_144aa13bc body=77 status=ok
// SIG undefined FUN_144aa13bc(void)

void FUN_144aa13bc(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
      FUN_1449921ae(param_2,(int)param_2[1],1);
      puVar2 = (undefined8 *)*param_2;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144aa13ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 144aa140a FUN_144aa140a body=421 status=ok
// SIG undefined FUN_144aa140a(void)

ulonglong FUN_144aa140a(void)

{
  byte bVar1;
  undefined8 unaff_RBX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947ba4) {
    FUN_144b3d300(&DAT_14c947ba4);
    if (DAT_14c947ba4 == -1) {
      DAT_14c947ba0 = 0;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bForceDisableDeferredCDOInitialization",&DAT_14c947ba0
                    ,&DAT_14c872ce8);
      _Init_thread_footer(&DAT_14c947ba4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947b8c) {
    FUN_144b3d300(&DAT_14c947b8c);
    if (DAT_14c947b8c == -1) {
      DAT_14c947b88 = 0;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bDeferDependencyLoads",&DAT_14c947b88,&DAT_14c872ce8);
      _Init_thread_footer(&DAT_14c947b8c);
    }
  }
  bVar1 = DAT_14c947b88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947b94) {
    FUN_144b3d300(&DAT_14c947b94);
    if (DAT_14c947b94 == -1) {
      DAT_14c947b90 = 0;
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bForceDisableCookedDependencyDeferring",&DAT_14c947b90
                    ,&DAT_14c872ce8);
      _Init_thread_footer(&DAT_14c947b94);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),~bVar1 | DAT_14c947b90 | DAT_14c947ba0) &
         0xffffff01;
}



// FUNCTION 144aa15b0 FUN_144aa15b0 body=499 status=ok
// SIG undefined FUN_144aa15b0(void)

bool FUN_144aa15b0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = param_1[2];
  if ((uVar6 & 1) == 0) {
    if (1 < uVar6) {
      uVar5 = 0;
      do {
        uVar6 = *(ulonglong *)(uVar6 + 0x10);
        if ((uVar6 & 1) != 0) goto LAB_144aa15df;
      } while (1 < uVar6);
      goto LAB_144aa1624;
    }
  }
  else {
LAB_144aa15df:
    uVar5 = uVar6 & 0xfffffffffffffffe;
    if (uVar5 != 0) {
      if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c(uVar5);
      }
      if (DAT_14c949118 == 0) {
        local_48 = FUN_140631fbe;
        lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar2;
        FUN_1446f470e(local_40,L"Class",1);
        local_58 = &LAB_146891e90;
        local_60 = &LAB_146273097;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x20;
        local_80 = 0x10000000;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_48;
        FUN_14574b4b2(lVar2);
        DAT_14c949118 = lVar2;
        uVar3 = FUN_144a7a812();
        lVar2 = DAT_14c949118;
        uVar4 = FUN_1449e2fb2();
        local_88 = L"Class";
        FUN_14574b446(uVar4,lVar2,uVar3,L"/Script/CoreUObject");
      }
      if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) {
        uVar5 = FUN_14570ab3e(uVar5);
      }
      goto LAB_144aa1624;
    }
  }
  uVar5 = 0;
LAB_144aa1624:
  uVar1 = *(uint *)(uVar5 + 0xd4);
  if (((uVar1 & 0x10000080) == 0) && ((*(byte *)((longlong)param_1 + 0x39) & 2) == 0)) {
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + *(int *)((longlong)param_1 + 0x44));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (uVar1 & 0x10000080) == 0;
}



// FUNCTION 144aa17a4 FUN_144aa17a4 body=382 status=ok
// SIG undefined FUN_144aa17a4(void)

void FUN_144aa17a4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [12];
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
          (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        if (lVar2 != 0) {
          if (*(code **)(*plVar4 + 0x2f0) == FUN_1401f99c8) {
            if ((*(byte *)((longlong)plVar4 + 0xb1) & 0x60) == 0) {
              plVar3 = (longlong *)plVar4[0x17];
              if (plVar3 == (longlong *)0x0) {
                iVar5 = 0;
              }
              else {
                (**(code **)(*plVar3 + 8))(plVar3,local_48);
                if ((local_3c & 4) != 0) {
                  (**(code **)(*plVar3 + 0x20))(plVar3,lVar2);
                }
                iVar5 = (int)plVar3[1];
              }
              if (iVar5 < (int)plVar4[0xb]) {
                for (plVar4 = (longlong *)plVar4[0x10];
                    (plVar4 != (longlong *)0x0 &&
                    (iVar5 < *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6] +
                             *(int *)((longlong)plVar4 + 0x44))); plVar4 = (longlong *)plVar4[0xb])
                {
                  if ((*(byte *)((longlong)plVar4 + 0x3c) & 0x10) == 0) {
                    (**(code **)(*plVar4 + 0x148))(plVar4,*(int *)((longlong)plVar4 + 0x44) + lVar2)
                    ;
                  }
                }
              }
            }
          }
          else {
            (**(code **)(*plVar4 + 0x2f0))(plVar4,lVar2,1);
          }
        }
        *(undefined8 *)(param_1 + 8) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aa1924 FUN_144aa1924 body=218 status=ok
// SIG undefined FUN_144aa1924(void)

void FUN_144aa1924(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(code **)(*param_1 + 0x40) == FUN_144aa17a4) {
    if ((char)param_1[4] == '\x01') {
      if ((((*(int *)((longlong)param_1 + 0xc) != 0) &&
           (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
         (((plVar3 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0xc))) &&
          (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
           (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))))) {
        lVar2 = param_1[2];
        if (lVar2 != 0) {
          if (*(code **)(*plVar3 + 0x2f0) == FUN_1401f99c8) {
            FUN_1401f99c8(plVar3,lVar2,1);
          }
          else {
            (**(code **)(*plVar3 + 0x2f0))(plVar3,lVar2,1);
          }
        }
        param_1[1] = 0;
      }
      if (param_1[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 144aa19fe FUN_144aa19fe body=204 status=ok
// SIG undefined FUN_144aa19fe(void)

longlong * FUN_144aa19fe(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = -0x1040edcba99;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_30 = *param_2;
  }
  if (*(code **)(*param_1 + 0x150) == FUN_1447cd87a) {
    FUN_1447cd87a(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x150))(param_1,&local_30);
  }
  lVar1 = local_30;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x2b) >> 2 & local_30 != -0x1040edcba99) == 0)
    goto LAB_144aa1a75;
  }
  else if (local_30 == -0x1040edcba99) goto LAB_144aa1a75;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  *param_2 = lVar1;
LAB_144aa1a75:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144aa1acc FUN_144aa1acc body=51 status=ok
// SIG undefined FUN_144aa1acc(void)

longlong * FUN_144aa1acc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 144aa1b00 FUN_144aa1b00 body=89 status=ok
// SIG undefined FUN_144aa1b00(void)

ulonglong FUN_144aa1b00(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar5;
  undefined7 uVar4;
  
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else if (*(code **)(*param_1 + 0x20) == (code *)&LAB_14688ab4e) {
    lVar1 = param_1[2];
    uVar5 = DAT_14c844ee0;
    if (lVar1 != 0) {
      uVar5 = *(uint *)(lVar1 + 0xb4);
    }
    uVar4 = (undefined7)((ulonglong)lVar1 >> 8);
    uVar2 = CONCAT71(uVar4,1);
    if (uVar5 < 4) {
      uVar2 = CONCAT71(uVar4,0xd >> ((byte)uVar5 & 0xf));
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x20))();
    uVar2 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1 < (uint)uVar3);
  }
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 144aa1b5a FUN_144aa1b5a body=155 status=ok
// SIG undefined FUN_144aa1b5a(void)

void FUN_144aa1b5a(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149e73df0;
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  *param_1 = &PTR_FUN_149e37220;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  lVar1 = param_1[0xf];
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 144aa1bf6 FUN_144aa1bf6 body=766 status=ok
// SIG undefined FUN_144aa1bf6(void)

void FUN_144aa1bf6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x10) == '\0') {
    plVar1 = param_2 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_2[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = (int)param_2[5];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_2;
    if ((local_78._4_4_ != iVar10) || (uStack_60 != plVar1)) {
      iVar4 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar3 = *(undefined8 *)(*local_90 + (longlong)iVar4 * 0x10);
        uVar8 = *(uint *)(param_1 + 0x4d80);
        iVar4 = uVar8 + 1;
        *(int *)(param_1 + 0x4d80) = iVar4;
        *(undefined8 *)(param_1 + 0x4d88 + (ulonglong)uVar8 * 8) = uVar3;
        if (iVar4 == 0x20) {
          FUN_1447111de(param_1 + 0x49c0);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != param_2 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar10));
    }
  }
  else {
    iVar10 = (int)param_2[5];
    uVar3 = local_78;
    if (iVar10 == 0) {
      uVar17 = 1;
      uVar16 = 0;
      iVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      uVar8 = *puVar5;
      if (uVar8 == 0) {
        iVar4 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar4 = iVar10 + -1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar9 = 0;
        do {
          if (uVar17 == uVar16) goto LAB_144aa1d8c;
          iVar9 = iVar9 + 0x20;
          uVar8 = puVar5[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar16 = 0;
        iVar9 = 0;
      }
      uVar17 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar17 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar4) {
        iVar4 = iVar10;
      }
    }
    if (iVar4 != iVar10) {
      uVar8 = 0xffffffff;
      lVar6 = param_1 + 0x80;
      do {
        lVar12 = *param_2;
        uVar7 = *(uint *)(param_1 + 0x440);
        iVar11 = uVar7 + 1;
        *(int *)(param_1 + 0x440) = iVar11;
        *(longlong *)(param_1 + 0x448 + (ulonglong)uVar7 * 8) = lVar12 + (longlong)iVar4 * 0x10;
        if (iVar11 == 0x20) {
          local_98 = lVar6;
          FUN_144710aee();
          lVar6 = local_98;
        }
        uVar8 = uVar8 & ~(uint)uVar17;
        puVar5 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar5 = (uint *)(param_2 + 2);
        }
        iVar11 = (int)param_2[5];
        iVar4 = (int)uVar16;
        lVar12 = (longlong)iVar4;
        uVar7 = puVar5[lVar12] & uVar8;
        if (uVar7 == 0) {
          iVar14 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar14 = iVar11 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar4) {
            iVar15 = iVar4;
          }
          if (iVar4 < iVar14) {
            lVar13 = 0;
            do {
              uVar7 = puVar5[lVar12 + lVar13 + 1];
              if (uVar7 != 0) {
                uVar16 = (ulonglong)(iVar4 + (int)lVar13 + 1);
                uVar8 = 0xffffffff;
                goto LAB_144aa1d5b;
              }
              iVar9 = iVar9 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar15 - lVar12 != lVar13);
            uVar8 = 0xffffffff;
            iVar4 = iVar15;
          }
          uVar16 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar11;
        }
        else {
LAB_144aa1d5b:
          uVar17 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar17 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar4) {
            iVar4 = iVar11;
          }
        }
        uVar3 = local_78;
      } while (iVar4 != iVar10);
    }
  }
LAB_144aa1d8c:
  local_78 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aa1ef6 FUN_144aa1ef6 body=163 status=ok
// SIG undefined FUN_144aa1ef6(void)

void FUN_144aa1ef6(longlong param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (ulonglong)*(byte *)(param_1 + 0x71);
  local_29 = (*(byte *)(param_3 + uVar6) & *(byte *)(param_1 + 0x73)) != 0;
  plVar2 = *(longlong **)(*param_2 + 8);
  puVar3 = (ulonglong *)plVar2[1];
  pcVar1 = (char *)*puVar3 + 1;
  if ((char *)puVar3[1] < pcVar1) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_29,1);
    cVar4 = local_29;
  }
  else {
    cVar4 = *(char *)*puVar3;
    *puVar3 = (ulonglong)pcVar1;
  }
  if (cVar4 == '\0') {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x72);
  }
  *(byte *)(param_3 + uVar6) = *(byte *)(param_3 + uVar6) & ~*(byte *)(param_1 + 0x73) | bVar5;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aa1f9a FUN_144aa1f9a body=174 status=ok
// SIG undefined FUN_144aa1f9a(void)

undefined * FUN_144aa1f9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952370) {
    FUN_144b3d300(&DAT_14c952370);
    if (DAT_14c952370 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,&DAT_14c9520b8,
                    FUN_1468e12e4);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
  }
  return &DAT_14c952320;
}



// FUNCTION 144aa2048 FUN_144aa2048 body=466 status=ok
// SIG undefined FUN_144aa2048(void)

longlong * FUN_144aa2048(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_1402191ca();
  }
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar11 = 1;
    uVar13 = 0;
    iVar2 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar2 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar2 = iVar7 + -1;
      }
      uVar13 = 0;
      uVar11 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar11 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar13) {
          return param_2;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar2) {
      iVar2 = iVar7;
    }
  }
  if (iVar2 < iVar7) {
    uVar12 = 0xffffffff;
    do {
      lVar10 = *param_1;
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1446f84a2(param_2,iVar7);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) =
           *(undefined8 *)((longlong)iVar2 * 0x10 + lVar10);
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar2 = (int)uVar13;
      lVar10 = (longlong)iVar2;
      uVar3 = puVar6[lVar10] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar4 = iVar7 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) {
          return param_2;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar10 == lVar8) {
            return param_2;
          }
        }
        uVar13 = (ulonglong)(iVar2 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar7);
  }
  return param_2;
}



// FUNCTION 144aa221c FUN_144aa221c body=101 status=ok
// SIG undefined FUN_144aa221c(void)

ulonglong FUN_144aa221c(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_144aa2268;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_144aa2268:
  return uVar4 & 0xffffffff;
}



// FUNCTION 144aa2282 FUN_144aa2282 body=1077 status=ok
// SIG undefined FUN_144aa2282(void)

int * FUN_144aa2282(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar5 = iVar19 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar13 = iVar19 + 1;
    iVar20 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar20 = iVar19;
    }
    if (iVar20 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        iVar5 = iVar19;
        if (iVar19 + 0x20U < 0xa0) {
          iVar13 = 0x80;
        }
        else {
          uVar12 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar12) {
              uVar6 = uVar12;
            }
          }
          else {
            uVar6 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
          }
          uVar14 = (ulonglong)(uVar6 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar7 = (uint)(uVar14 + 0xf);
              if (uVar6 < 0x1ffd) {
                uVar14 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar14 + 0xf >> 4]];
              }
              else {
                uVar15 = (ulonglong)(uVar7 & 0xfffffff0);
                if (uVar15 < 0x7ff1) {
                  bVar11 = (&DAT_14c841e00)[uVar7 >> 4];
                  uVar18 = 0x32;
                  if (0x32 < bVar11) {
                    uVar18 = (ulonglong)bVar11;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar11;
                  do {
                    uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_144aa25b5;
                    lVar22 = uVar18 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar22 != 0x33);
                }
                uVar14 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar14 = (ulonglong)DAT_14c841df8;
                }
                uVar14 = -uVar14 & (uVar15 + uVar14) - 1;
              }
            }
            else {
              uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
              iVar5 = (int)param_1[5];
            }
          }
LAB_144aa25b5:
          iVar8 = (int)(uVar14 >> 2);
          iVar13 = -0x20;
          if ((int)uVar12 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar9,iVar5);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar5 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar5 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar5 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar22 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar19 & 0x1f;
    puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar20 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar22 = (longlong)iVar16;
    iVar19 = *(int *)(*param_1 + 4 + lVar22 * 0x10);
    *(int *)(param_1 + 6) = iVar19;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar19 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar19 = iVar16;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar19 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar16 & 0x1f);
  lVar3 = *param_1;
  lVar22 = lVar22 * 0x10;
  uVar14 = *param_3;
  *(ulonglong *)(lVar3 + lVar22) = uVar14;
  *(undefined4 *)(lVar3 + 8 + lVar22) = 0xffffffff;
  uVar12 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  cVar10 = '\0';
  iVar19 = iVar16;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar19 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar19 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar19 * 0x10) == uVar14) {
          *puVar1 = uVar14;
          FUN_146902ce4(param_1,iVar16);
          cVar10 = '\x01';
          goto LAB_144aa23d7;
        }
        iVar19 = (int)puVar1[1];
      } while (iVar19 != -1);
    }
    cVar10 = '\0';
    iVar19 = iVar16;
  }
LAB_144aa23d7:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar6 < 4) {
      iVar16 = 1;
    }
    else {
      uVar14 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar16 <= (int)param_1[9])) {
      uVar12 = (int)param_1[9] - 1U & uVar12;
      *(uint *)(lVar3 + lVar22 + 0xc) = uVar12;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(undefined4 *)(lVar3 + lVar22 + 8) =
           *(undefined4 *)
            ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 9) = iVar16;
      FUN_14492abf0(param_1);
    }
  }
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 144aa26b8 FUN_144aa26b8 body=261 status=ok
// SIG undefined FUN_144aa26b8(void)

undefined8 FUN_144aa26b8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_144aa279a:
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_144aa279a;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_144aa26de;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(char *)(lVar4 + 0x42) == '\x04');
LAB_144aa26de:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144aa27be FUN_144aa27be body=262 status=ok
// SIG undefined FUN_144aa27be(void)

undefined8 FUN_144aa27be(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_144aa28a1:
      plVar3 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_144aa28a1;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_144aa27e5;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x40)) & 0xffffffffffffff20
  ;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 5);
LAB_144aa27e5:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 144aa28c6 FUN_144aa28c6 body=93 status=ok
// SIG undefined FUN_144aa28c6(void)

undefined8 FUN_144aa28c6(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 7) == *(char *)(param_2 + 7)) {
    cVar1 = *(char *)((longlong)param_1 + 0x34);
    if ((cVar1 == *(char *)((longlong)param_2 + 0x34)) && (cVar1 != '\0')) {
      cVar1 = FUN_1400d800a(param_1 + 2,param_2 + 2);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else if (cVar1 != *(char *)((longlong)param_2 + 0x34)) {
      return 0;
    }
    if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
      uVar2 = FUN_1400d8084(*param_1,*param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144aa2924 FUN_144aa2924 body=61 status=ok
// SIG undefined FUN_144aa2924(void)

void FUN_144aa2924(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x1b0);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x99) != '\0')) {
      FUN_1401630a0(lVar1,param_1,param_2,0,*(char *)(lVar1 + 0x99));
    }
  }
  return;
}


