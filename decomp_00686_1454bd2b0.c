// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1454bd2b0 FUN_1454bd2b0 body=97 status=ok
// SIG undefined FUN_1454bd2b0(void)

undefined8 FUN_1454bd2b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  lVar2 = FUN_144e92f50(0x11948);
  *(longlong *)(lVar1 + 0x100) = lVar2;
  if (lVar2 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LZWSetupEncode","No space for LZW hash table");
    return 0;
  }
  return 1;
}



// FUNCTION 1454bd320 FUN_1454bd320 body=147 status=ok
// SIG undefined FUN_1454bd320(void)

undefined8 FUN_1454bd320(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(longlong *)(lVar1 + 0x100) == 0) {
    (**(code **)(param_1 + 0x358))();
  }
  *(undefined4 *)(lVar1 + 0x80) = 0x1ff0009;
  *(undefined2 *)(lVar1 + 0x84) = 0x102;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0xec) = 0;
  *(undefined8 *)(lVar1 + 0xe4) = 10000;
  *(longlong *)(lVar1 + 0xf8) = *(longlong *)(param_1 + 0x3f0) + *(longlong *)(param_1 + 1000) + -5;
  FUN_1454bcf70(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0xffff;
  return 1;
}



// FUNCTION 1454bd3c0 FUN_1454bd3c0 body=932 status=ok
// SIG undefined FUN_1454bd3c0(void)

undefined8 FUN_1454bd3c0(longlong param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  ushort uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int local_58;
  uint local_54;
  uint local_50;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  if (lVar4 == 0) {
    return 0;
  }
  puVar5 = *(undefined1 **)(lVar4 + 0xf8);
  uVar19 = (ulonglong)*(ushort *)(lVar4 + 0xe0);
  uVar15 = *(ushort *)(lVar4 + 0x84);
  uVar20 = *(uint *)(lVar4 + 0xf0);
  local_58 = *(int *)(lVar4 + 0xe4);
  iVar22 = *(int *)(lVar4 + 0xec);
  uVar12 = *(uint *)(lVar4 + 0x88);
  iVar14 = *(int *)(lVar4 + 0x8c);
  uVar21 = (uint)*(ushort *)(lVar4 + 0x82);
  uVar2 = *(ushort *)(lVar4 + 0x80);
  uVar24 = (uint)uVar2;
  puVar17 = *(undefined1 **)(param_1 + 0x408);
  local_54 = (uint)uVar15;
  puVar16 = puVar17;
  if (*(ushort *)(lVar4 + 0xe0) == 0xffff) {
    uVar18 = 0xffff;
    if (param_3 < 1) goto LAB_1454bd6f2;
    iVar14 = iVar14 + -8 + (uint)uVar2;
    uVar12 = uVar12 << ((byte)uVar2 & 0x1f) | 0x100;
    *puVar17 = (char)(uVar12 >> ((byte)iVar14 & 0x1f));
    puVar16 = puVar17 + 1;
    if (7 < iVar14) {
      iVar14 = iVar14 + -8;
      *puVar16 = (char)(uVar12 >> ((byte)iVar14 & 0x1f));
      puVar16 = puVar17 + 2;
    }
    uVar19 = (ulonglong)*param_2;
    uVar20 = uVar20 + uVar2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    iVar22 = iVar22 + 1;
  }
  uVar18 = (uint)uVar19;
  puVar17 = puVar16;
  local_50 = uVar20;
  while (0 < param_3) {
    bVar1 = *param_2;
    param_3 = param_3 + -1;
    lVar6 = *(longlong *)(lVar4 + 0x100);
    param_2 = param_2 + 1;
    uVar9 = (uint)uVar19 & 0xffff;
    iVar23 = iVar22 + 1;
    uVar7 = (uint)bVar1 << 5 ^ uVar9;
    iVar25 = (uint)bVar1 * 0x1000 + uVar9;
    uVar18 = uVar7 - 0x2329;
    if (uVar7 < 0x2329) {
      uVar18 = uVar7;
    }
    lVar10 = (longlong)(int)uVar18;
    iVar8 = *(int *)(lVar6 + lVar10 * 8);
    piVar13 = (int *)(lVar6 + lVar10 * 8);
    uVar7 = uVar24;
    if (iVar8 == iVar25) {
LAB_1454bd50e:
      uVar19 = (ulonglong)*(ushort *)(piVar13 + 1);
      puVar16 = puVar17;
    }
    else {
      if (-1 < iVar8) {
        iVar8 = 0x2329 - uVar18;
        if (uVar18 == 0) {
          iVar8 = 1;
        }
        do {
          lVar11 = lVar10 - iVar8;
          lVar10 = lVar11 + 0x2329;
          if (-1 < lVar11) {
            lVar10 = lVar11;
          }
          iVar3 = *(int *)(lVar6 + lVar10 * 8);
          piVar13 = (int *)(lVar6 + lVar10 * 8);
          if (iVar3 == iVar25) goto LAB_1454bd50e;
        } while (-1 < iVar3);
      }
      if (puVar5 < puVar17) {
        *(longlong *)(param_1 + 0x410) = (longlong)puVar17 - *(longlong *)(param_1 + 1000);
        iVar8 = FUN_144e94730(param_1);
        if (iVar8 == 0) {
          return 0;
        }
        puVar17 = *(undefined1 **)(param_1 + 1000);
        uVar20 = local_50;
      }
      iVar14 = iVar14 + -8 + uVar24;
      uVar12 = uVar12 << ((byte)uVar24 & 0x1f) | uVar9;
      *puVar17 = (char)(uVar12 >> ((byte)iVar14 & 0x1f));
      puVar16 = puVar17 + 1;
      if (7 < iVar14) {
        iVar14 = iVar14 + -8;
        *puVar16 = (char)(uVar12 >> ((byte)iVar14 & 0x1f));
        puVar16 = puVar17 + 2;
      }
      uVar20 = uVar20 + uVar24;
      uVar19 = (ulonglong)bVar1;
      *(short *)(piVar13 + 1) = (short)local_54;
      local_54 = local_54 + 1;
      *piVar13 = iVar25;
      if (local_54 == 0xffe) {
LAB_1454bd66a:
        FUN_1454bcf70(lVar4);
        *(undefined4 *)(lVar4 + 0xe8) = 0;
        uVar12 = uVar12 << ((byte)uVar24 & 0x1f) | 0x100;
        iVar14 = iVar14 + -8 + uVar24;
        iVar23 = 0;
        *puVar16 = (char)(uVar12 >> ((byte)iVar14 & 0x1f));
        puVar17 = puVar16 + 1;
        local_54 = 0x102;
        if (7 < iVar14) {
          iVar14 = iVar14 + -8;
          *puVar17 = (char)(uVar12 >> ((byte)iVar14 & 0x1f));
          puVar17 = puVar16 + 2;
        }
        uVar21 = 0x1ff;
        puVar16 = puVar17;
        uVar20 = uVar24;
        uVar7 = 9;
        local_50 = uVar24;
      }
      else {
        local_50 = uVar20;
        if ((int)uVar21 < (int)local_54) {
          uVar21 = (1 << ((byte)(uVar24 + 1) & 0x1f)) - 1;
          uVar7 = uVar24 + 1;
        }
        else if (local_58 <= iVar23) {
          local_58 = iVar22 + 0x2711;
          if (iVar23 < 0x800000) {
            iVar22 = (iVar23 * 0x100) / (int)uVar20;
          }
          else if ((int)uVar20 >> 8 == 0) {
            iVar22 = 0x7fffffff;
          }
          else {
            iVar22 = iVar23 / ((int)uVar20 >> 8);
          }
          if (iVar22 <= *(int *)(lVar4 + 0xe8)) goto LAB_1454bd66a;
          *(int *)(lVar4 + 0xe8) = iVar22;
        }
      }
    }
    uVar15 = (ushort)local_54;
    uVar18 = (uint)uVar19;
    puVar17 = puVar16;
    iVar22 = iVar23;
    uVar24 = uVar7;
  }
LAB_1454bd6f2:
  *(int *)(lVar4 + 0xec) = iVar22;
  *(uint *)(lVar4 + 0xf0) = uVar20;
  *(int *)(lVar4 + 0xe4) = local_58;
  *(uint *)(lVar4 + 0xe0) = uVar18 & 0xffff;
  *(uint *)(lVar4 + 0x88) = uVar12;
  *(int *)(lVar4 + 0x8c) = iVar14;
  *(ushort *)(lVar4 + 0x84) = uVar15;
  *(short *)(lVar4 + 0x82) = (short)uVar21;
  *(short *)(lVar4 + 0x80) = (short)uVar24;
  *(undefined1 **)(param_1 + 0x408) = puVar17;
  return 1;
}



// FUNCTION 1454bd770 FUN_1454bd770 body=373 status=ok
// SIG undefined FUN_1454bd770(void)

undefined8 FUN_1454bd770(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  puVar7 = *(undefined1 **)(param_1 + 0x408);
  iVar10 = *(int *)(lVar3 + 0x8c);
  uVar9 = *(uint *)(lVar3 + 0x88);
  uVar1 = *(ushort *)(lVar3 + 0x80);
  uVar11 = (uint)uVar1;
  if (*(undefined1 **)(lVar3 + 0xf8) < puVar7) {
    *(longlong *)(param_1 + 0x410) = (longlong)puVar7 - *(longlong *)(param_1 + 1000);
    uVar4 = FUN_144e94730();
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    puVar7 = *(undefined1 **)(param_1 + 1000);
  }
  puVar6 = puVar7;
  if (*(uint *)(lVar3 + 0xe0) != 0xffff) {
    uVar2 = *(ushort *)(lVar3 + 0x84);
    uVar9 = uVar9 << ((byte)uVar1 & 0x1f) | *(uint *)(lVar3 + 0xe0);
    iVar10 = iVar10 + -8 + (uint)uVar1;
    *puVar7 = (char)(uVar9 >> ((byte)iVar10 & 0x1f));
    puVar6 = puVar7 + 1;
    if (7 < iVar10) {
      iVar10 = iVar10 + -8;
      *puVar6 = (char)(uVar9 >> ((byte)iVar10 & 0x1f));
      puVar6 = puVar7 + 2;
    }
    uVar5 = uVar2 + 1;
    *(undefined4 *)(lVar3 + 0xe0) = 0xffff;
    if (uVar5 == 0xffe) {
      iVar10 = iVar10 + -8 + (uint)uVar1;
      uVar9 = uVar9 << ((byte)uVar1 & 0x1f) | 0x100;
      *puVar6 = (char)(uVar9 >> ((byte)iVar10 & 0x1f));
      puVar7 = puVar6 + 1;
      if (7 < iVar10) {
        iVar10 = iVar10 + -8;
        *puVar7 = (char)(uVar9 >> ((byte)iVar10 & 0x1f));
        puVar7 = puVar6 + 2;
      }
      uVar11 = 9;
      puVar6 = puVar7;
    }
    else if (*(ushort *)(lVar3 + 0x82) < uVar5) {
      uVar11 = uVar1 + 1;
    }
  }
  uVar9 = uVar9 << ((byte)uVar11 & 0x1f) | 0x101;
  iVar10 = iVar10 + -8 + uVar11;
  *puVar6 = (char)(uVar9 >> ((byte)iVar10 & 0x1f));
  pcVar8 = puVar6 + 1;
  if (7 < iVar10) {
    iVar10 = iVar10 + -8;
    *pcVar8 = (char)(uVar9 >> ((byte)iVar10 & 0x1f));
    pcVar8 = puVar6 + 2;
  }
  if (0 < iVar10) {
    *pcVar8 = (char)uVar9 << (8U - (char)iVar10 & 0x1f);
    pcVar8 = pcVar8 + 1;
  }
  *(longlong *)(param_1 + 0x410) = (longlong)pcVar8 - *(longlong *)(param_1 + 1000);
  return 1;
}



// FUNCTION 1454bd8f0 FUN_1454bd8f0 body=104 status=ok
// SIG undefined FUN_1454bd8f0(void)

void FUN_1454bd8f0(longlong param_1)

{
  void *_Memory;
  
  FUN_1455d5930();
  _Memory = *(void **)(param_1 + 0x3d0);
  if (*(void **)((longlong)_Memory + 0xd8) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0xd8));
    _Memory = *(void **)(param_1 + 0x3d0);
  }
  if (*(void **)((longlong)_Memory + 0x100) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x100));
    _Memory = *(void **)(param_1 + 0x3d0);
  }
  free(_Memory);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  FUN_144e93410(param_1);
  return;
}



// FUNCTION 1454bd960 FUN_1454bd960 body=466 status=ok
// SIG undefined FUN_1454bd960(void)

undefined8 FUN_1454bd960(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_144e93e30(param_1,&DAT_149d87440,7);
  if (iVar1 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitOJPEG",
                  "Merging Old JPEG codec-specific tags failed");
    return 0;
  }
  plVar2 = (longlong *)FUN_144e92f50(0x1680);
  if (plVar2 == (longlong *)0x0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitOJPEG","No space for OJPEG state block")
    ;
    return 0;
  }
  FUN_144e92f90(plVar2,0,0x1680);
  *plVar2 = param_1;
  *(undefined1 *)(plVar2 + 0x2b) = 1;
  *(undefined2 *)((longlong)plVar2 + 0x15c) = 0x202;
  FUN_144b78170(param_1,0x212,2);
  *(longlong **)(param_1 + 0x3d0) = plVar2;
  *(undefined1 **)(param_1 + 0x340) = &LAB_1454be160;
  *(code **)(param_1 + 0x348) = FUN_1454be170;
  *(code **)(param_1 + 0x350) = FUN_1454be1a0;
  *(code **)(param_1 + 0x468) = FUN_1454be7d0;
  *(code **)(param_1 + 0x378) = FUN_1454be4e0;
  *(code **)(param_1 + 0x388) = FUN_1454be4e0;
  *(code **)(param_1 + 0x398) = FUN_1454be4e0;
  *(code **)(param_1 + 0x358) = FUN_1454be830;
  *(code **)(param_1 + 0x368) = FUN_1454be860;
  *(code **)(param_1 + 0x370) = FUN_1454be8c0;
  *(code **)(param_1 + 0x380) = FUN_1454be890;
  *(code **)(param_1 + 0x390) = FUN_1454be890;
  *(code **)(param_1 + 0x3a0) = FUN_1454be890;
  *(code **)(param_1 + 0x3b8) = FUN_1454be8f0;
  plVar2[0x22] = *(longlong *)(param_1 + 0x490);
  *(code **)(param_1 + 0x490) = FUN_1454bdb40;
  plVar2[0x23] = *(longlong *)(param_1 + 0x488);
  *(code **)(param_1 + 0x488) = FUN_1454bdd10;
  plVar2[0x24] = *(longlong *)(param_1 + 0x498);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20000;
  *(code **)(param_1 + 0x498) = FUN_1454bdf60;
  return 1;
}



// FUNCTION 1454bdb40 FUN_1454bdb40 body=378 status=ok
// SIG undefined FUN_1454bdb40(void)

undefined8 FUN_1454bdb40(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  switch((int)param_2) {
  case 0x200:
    *(ushort *)*param_3 = (ushort)*(byte *)(lVar1 + 0x158);
    return 1;
  case 0x201:
    *(undefined8 *)*param_3 = *(undefined8 *)(lVar1 + 0x148);
    return 1;
  case 0x202:
    *(undefined8 *)*param_3 = *(undefined8 *)(lVar1 + 0x150);
    return 1;
  case 0x203:
    *(undefined2 *)*param_3 = *(undefined2 *)(lVar1 + 0x210);
    return 1;
  default:
                    /* WARNING: Could not recover jumptable at 0x0001454bdcb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x110))(param_1,param_2,param_3);
    return uVar2;
  case 0x207:
    *(uint *)*param_3 = (uint)*(byte *)(lVar1 + 0x15f);
    *(longlong *)param_3[1] = lVar1 + 0x168;
    return 1;
  case 0x208:
    *(uint *)*param_3 = (uint)*(byte *)(lVar1 + 0x160);
    *(longlong *)param_3[1] = lVar1 + 0x180;
    return 1;
  case 0x209:
    *(uint *)*param_3 = (uint)*(byte *)(lVar1 + 0x161);
    *(longlong *)param_3[1] = lVar1 + 0x198;
    return 1;
  case 0x212:
    break;
  }
  if (*(char *)(lVar1 + 0x15a) == '\0') {
    FUN_1454bea90();
  }
  *(ushort *)*param_3 = (ushort)*(byte *)(lVar1 + 0x15c);
  *(ushort *)param_3[1] = (ushort)*(byte *)(lVar1 + 0x15d);
  return 1;
}



// FUNCTION 1454bdd10 FUN_1454bdd10 body=509 status=ok
// SIG undefined FUN_1454bdd10(void)

undefined8 FUN_1454bdd10(longlong param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  switch(param_2) {
  case 0x200:
    *(byte *)(lVar2 + 0x158) = (byte)*param_3;
    break;
  case 0x201:
    *(undefined8 *)(lVar2 + 0x148) = *(undefined8 *)param_3;
    break;
  case 0x202:
    *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)param_3;
    break;
  case 0x203:
    *(short *)(lVar2 + 0x210) = (short)*param_3;
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x0001454bdf06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar2 + 0x118))(param_1);
    return uVar4;
  case 0x207:
    uVar1 = *param_3;
    uVar3 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      if (3 < uVar1) {
        pcVar6 = "JpegQTables tag has incorrect count";
LAB_1454bddb6:
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGVSetField",pcVar6);
        return 0;
      }
      *(char *)(lVar2 + 0x15f) = (char)uVar1;
      puVar5 = *(undefined8 **)(param_3 + 2);
      if (uVar1 != 0) {
        lVar2 = lVar2 - (longlong)puVar5;
        do {
          *(undefined8 *)(lVar2 + 0x168 + (longlong)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    break;
  case 0x208:
    uVar1 = *param_3;
    uVar3 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      if (3 < uVar1) {
        pcVar6 = "JpegDcTables tag has incorrect count";
        goto LAB_1454bddb6;
      }
      *(char *)(lVar2 + 0x160) = (char)uVar1;
      puVar5 = *(undefined8 **)(param_3 + 2);
      if (uVar1 != 0) {
        lVar2 = lVar2 - (longlong)puVar5;
        do {
          *(undefined8 *)(lVar2 + 0x180 + (longlong)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    break;
  case 0x209:
    uVar1 = *param_3;
    uVar3 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      if (3 < uVar1) {
        pcVar6 = "JpegAcTables tag has incorrect count";
        goto LAB_1454bddb6;
      }
      *(char *)(lVar2 + 0x161) = (char)uVar1;
      puVar5 = *(undefined8 **)(param_3 + 2);
      if (uVar1 != 0) {
        lVar2 = lVar2 - (longlong)puVar5;
        do {
          *(undefined8 *)(lVar2 + 0x198 + (longlong)puVar5) = *puVar5;
          puVar5 = puVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    break;
  case 0x212:
    *(undefined1 *)(lVar2 + 0x15b) = 1;
    uVar1 = *param_3;
    *(byte *)(lVar2 + 0x15c) = (byte)uVar1;
    *(byte *)(lVar2 + 0x15d) = (byte)param_3[2];
    *(ushort *)(param_1 + 0x140) = (ushort)(byte)uVar1;
    *(ushort *)(param_1 + 0x142) = (ushort)*(byte *)(lVar2 + 0x15d);
  }
  lVar2 = FUN_144e93aa0(param_1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = (ulonglong)(*(ushort *)(lVar2 + 0x18) >> 5);
  *(uint *)(param_1 + uVar3 * 4 + 0x38) =
       *(uint *)(param_1 + 0x38 + uVar3 * 4) | 1 << (*(ushort *)(lVar2 + 0x18) & 0x1f);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  return 1;
}



// FUNCTION 1454bdf60 FUN_1454bdf60 body=502 status=ok
// SIG undefined FUN_1454bdf60(void)

void FUN_1454bdf60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if ((uVar2 & 4) != 0) {
    FUN_146c958a0(param_2,"  JpegInterchangeFormat: %llu\n",*(undefined8 *)(lVar1 + 0x148));
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar2 & 8) != 0) {
    FUN_146c958a0(param_2,"  JpegInterchangeFormatLength: %llu\n",*(undefined8 *)(lVar1 + 0x150));
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_146c958a0(param_2,"  JpegQTables:");
    uVar4 = 0;
    if (*(char *)(lVar1 + 0x15f) != '\0') {
      do {
        FUN_146c958a0(param_2," %llu",*(undefined8 *)(lVar1 + 0x168 + uVar4 * 8));
        bVar3 = (char)uVar4 + 1;
        uVar4 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(lVar1 + 0x15f));
    }
    FUN_146c958a0(param_2,&DAT_14997f410);
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_146c958a0(param_2,"  JpegDcTables:");
    uVar4 = 0;
    if (*(char *)(lVar1 + 0x160) != '\0') {
      do {
        FUN_146c958a0(param_2," %llu",*(undefined8 *)(lVar1 + 0x180 + uVar4 * 8));
        bVar3 = (char)uVar4 + 1;
        uVar4 = (ulonglong)bVar3;
      } while (bVar3 < *(byte *)(lVar1 + 0x160));
    }
    FUN_146c958a0(param_2,&DAT_14997f410);
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_146c958a0(param_2,"  JpegAcTables:");
    bVar3 = 0;
    if (*(char *)(lVar1 + 0x161) != '\0') {
      do {
        FUN_146c958a0(param_2," %llu",*(undefined8 *)(lVar1 + 0x198 + (ulonglong)bVar3 * 8));
        bVar3 = bVar3 + 1;
      } while (bVar3 < *(byte *)(lVar1 + 0x161));
    }
    FUN_146c958a0(param_2,&DAT_14997f410);
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((char)uVar2 < '\0') {
    FUN_146c958a0(param_2,"  JpegProc: %u\n",*(undefined1 *)(lVar1 + 0x158));
    uVar2 = *(uint *)(param_1 + 0x40);
  }
  if ((uVar2 >> 8 & 1) != 0) {
    FUN_146c958a0(param_2,"  JpegRestartInterval: %u\n",*(undefined2 *)(lVar1 + 0x210));
  }
  if (*(code **)(lVar1 + 0x120) != (code *)0x0) {
    (**(code **)(lVar1 + 0x120))(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1454be170 FUN_1454be170 body=40 status=ok
// SIG undefined FUN_1454be170(void)

undefined8 FUN_1454be170(longlong param_1)

{
  FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSetupDecode",
                "Deprecated and troublesome old-style JPEG compression mode, please convert to new-style JPEG compression and notify vendor of writing software"
               );
  return 1;
}



// FUNCTION 1454be1a0 FUN_1454be1a0 body=825 status=ok
// SIG undefined FUN_1454be1a0(void)

undefined8 FUN_1454be1a0(longlong param_1,ushort param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  uVar8 = (ulonglong)param_2;
  if (*(char *)(lVar2 + 0x15a) == '\0') {
    FUN_1454bea90();
  }
  if (((*(char *)(lVar2 + 0x290) == '\0') && (iVar3 = FUN_1454bec60(param_1), iVar3 == 0)) ||
     ((lVar6 = uVar8 * 0x20 + lVar2, *(char *)(lVar6 + 0x230) == '\0' &&
      (iVar3 = FUN_1454bee60(param_1,uVar8), iVar3 == 0)))) {
LAB_1454be4b5:
    uVar5 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
      uVar9 = *(uint *)(param_1 + 0x304);
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x32c);
    }
    if (*(char *)(lVar2 + 0x291) == '\0') {
LAB_1454be282:
      *(char *)(lVar2 + 0x145) = (char)param_2;
      *(ushort *)(lVar2 + 0x292) = param_2;
      *(uint *)(lVar2 + 0x294) = (uint)param_2 * *(int *)(param_1 + 0xd0);
      if ((*(char *)(lVar2 + 0x650) == '\0') ||
         (*(longlong *)(lVar2 + 0x648) - (ulonglong)*(ushort *)(lVar2 + 0x660) !=
          *(longlong *)((uVar8 + 0x12) * 0x20 + lVar2))) {
        *(undefined4 *)(lVar2 + 0x638) = *(undefined4 *)(lVar6 + 0x234);
        *(undefined4 *)(lVar2 + 0x63c) = *(undefined4 *)(lVar6 + 0x238);
        *(undefined8 *)(lVar2 + 0x648) = *(undefined8 *)((uVar8 + 0x12) * 0x20 + lVar2);
        *(undefined1 *)(lVar2 + 0x650) = 0;
        *(undefined8 *)(lVar2 + 0x658) = *(undefined8 *)(lVar6 + 0x248);
        *(undefined2 *)(lVar2 + 0x660) = 0;
        *(undefined8 *)(lVar2 + 0x668) = 0;
      }
      iVar3 = FUN_1454bf090(param_1);
      if (iVar3 == 0) goto LAB_1454be4b5;
      uVar7 = *(uint *)(lVar2 + 0x294);
    }
    else if ((*(ushort *)(lVar2 + 0x292) != param_2) ||
            (uVar7 = *(uint *)(lVar2 + 0x294), uVar9 < uVar7)) {
      if (*(char *)(lVar2 + 0x298) != '\0') {
        lVar4 = *(longlong *)(param_1 + 0x3d0);
        FUN_144e8d330(lVar4 + 0x348);
        *(undefined1 *)(lVar4 + 0x298) = 0;
      }
      *(undefined1 *)(lVar2 + 0x291) = 0;
      goto LAB_1454be282;
    }
    while (uVar7 < uVar9) {
      lVar6 = *(longlong *)(param_1 + 0x3d0);
      if (*(char *)(lVar2 + 0x299) == '\0') {
        iVar3 = *(int *)(lVar6 + 0x62c);
        uVar7 = *(uint *)(lVar6 + 0x634);
        if (iVar3 != 0) {
          iVar1 = *(int *)(lVar6 + 0x5e8);
          if (uVar7 <= (uint)(iVar1 - iVar3)) {
            *(uint *)(lVar6 + 0x62c) = iVar3 + uVar7;
            if (iVar3 + uVar7 == iVar1) {
              *(undefined4 *)(lVar6 + 0x62c) = 0;
            }
            goto LAB_1454be47a;
          }
          *(undefined4 *)(lVar6 + 0x62c) = 0;
          uVar7 = uVar7 + (iVar3 - iVar1);
          *(undefined4 *)(lVar6 + 0xc) = 0;
        }
        if (*(uint *)(lVar6 + 0x5e8) <= uVar7) {
          do {
            iVar3 = FUN_1454c16c0(lVar6,lVar6 + 0x348,*(undefined8 *)(lVar6 + 0x620),
                                  (ulonglong)*(byte *)(lVar6 + 0x15d) << 3);
            if (iVar3 == 0) goto LAB_1454be4b5;
            uVar7 = uVar7 - *(uint *)(lVar6 + 0x5e8);
          } while (*(uint *)(lVar6 + 0x5e8) <= uVar7);
        }
        if (uVar7 != 0) {
          iVar3 = FUN_1454c16c0(lVar6,lVar6 + 0x348,*(undefined8 *)(lVar6 + 0x620),
                                (ulonglong)*(byte *)(lVar6 + 0x15d) << 3);
          if (iVar3 == 0) goto LAB_1454be4b5;
          *(uint *)(lVar6 + 0x62c) = uVar7;
        }
      }
      else {
        if (*(longlong *)(lVar6 + 0x1678) == 0) {
          lVar4 = FUN_144e92f50(*(undefined4 *)(lVar6 + 0x630));
          *(longlong *)(lVar6 + 0x1678) = lVar4;
          if (lVar4 == 0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGPreDecodeSkipScanlines",
                          "Out of memory");
            goto LAB_1454be4b5;
          }
        }
        uVar7 = 0;
        if (*(int *)(lVar6 + 0x634) != 0) {
          do {
            iVar3 = FUN_1454c1670(lVar6,lVar6 + 0x348,lVar6 + 0x1678,1);
            if (iVar3 == 0) goto LAB_1454be4b5;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(lVar6 + 0x634));
        }
      }
LAB_1454be47a:
      *(int *)(lVar2 + 0x294) = *(int *)(lVar2 + 0x294) + 1;
      uVar7 = *(uint *)(lVar2 + 0x294);
    }
    *(undefined4 *)(lVar2 + 8) = 1;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1454be4e0 FUN_1454be4e0 body=268 status=ok
// SIG undefined FUN_1454be4e0(void)

undefined8 FUN_1454be4e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(int *)(lVar1 + 8) == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGDecode",
                  "Cannot decode: decoder not correctly initialized");
    return 0;
  }
  if (*(int *)(lVar1 + 0xc) == 0) {
    if (*(char *)(lVar1 + 0x299) == '\0') {
      iVar2 = FUN_1454be5f0();
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      local_res8 = param_2;
      if (param_3 % (longlong)(ulonglong)*(uint *)(lVar1 + 0x630) != 0) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGDecodeScanlines",
                      "Fractional scanline not read");
        return 0;
      }
      do {
        iVar2 = FUN_1454c1670(lVar1,lVar1 + 0x348,&local_res8,1);
        if (iVar2 == 0) {
          return 0;
        }
        local_res8 = local_res8 + (ulonglong)*(uint *)(lVar1 + 0x630);
        param_3 = param_3 - (ulonglong)*(uint *)(lVar1 + 0x630);
      } while (0 < param_3);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1454be5f0 FUN_1454be5f0 body=474 status=ok
// SIG undefined FUN_1454be5f0(void)

undefined8 FUN_1454be5f0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte bVar11;
  byte bVar12;
  undefined1 *puVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (param_3 % (longlong)(ulonglong)*(uint *)(lVar2 + 0x630) != 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGDecodeRaw","Fractional scanline not read");
    return 0;
  }
  iVar4 = *(int *)(lVar2 + 0x62c);
  do {
    if ((iVar4 == 0) &&
       (iVar4 = FUN_1454c16c0(lVar2,lVar2 + 0x348,*(undefined8 *)(lVar2 + 0x620),
                              (ulonglong)*(byte *)(lVar2 + 0x15d) << 3), iVar4 == 0)) {
      *(undefined4 *)(lVar2 + 0xc) = 1;
      return 0;
    }
    uVar7 = 0;
    uVar5 = (ulonglong)(uint)(*(int *)(lVar2 + 0x62c) * *(int *)(lVar2 + 0x5e4));
    puVar9 = (undefined1 *)(*(longlong *)(lVar2 + 0x608) + uVar5);
    puVar8 = (undefined1 *)(*(longlong *)(lVar2 + 0x610) + uVar5);
    puVar13 = (undefined1 *)
              ((ulonglong)
               ((uint)*(byte *)(lVar2 + 0x15d) * *(int *)(lVar2 + 0x62c) * *(int *)(lVar2 + 0x5dc))
              + *(longlong *)(lVar2 + 0x600));
    puVar10 = param_2;
    if (*(int *)(lVar2 + 0x628) != 0) {
      do {
        bVar12 = 0;
        if (*(char *)(lVar2 + 0x15d) != '\0') {
          bVar11 = *(byte *)(lVar2 + 0x15c);
          puVar6 = puVar13;
          do {
            bVar3 = 0;
            if (bVar11 != 0) {
              do {
                bVar3 = bVar3 + 1;
                *puVar10 = *puVar6;
                puVar6 = puVar6 + 1;
                bVar11 = *(byte *)(lVar2 + 0x15c);
                puVar10 = puVar10 + 1;
              } while (bVar3 < bVar11);
            }
            bVar12 = bVar12 + 1;
            puVar6 = puVar6 + (*(int *)(lVar2 + 0x5dc) - (uint)bVar11);
          } while (bVar12 < *(byte *)(lVar2 + 0x15d));
        }
        uVar7 = uVar7 + 1;
        puVar13 = puVar13 + *(byte *)(lVar2 + 0x15c);
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10[1] = uVar1;
        puVar10 = puVar10 + 2;
      } while (uVar7 < *(uint *)(lVar2 + 0x628));
    }
    iVar4 = *(int *)(lVar2 + 0x62c) + 1;
    *(int *)(lVar2 + 0x62c) = iVar4;
    if (iVar4 == *(int *)(lVar2 + 0x5e8)) {
      *(undefined4 *)(lVar2 + 0x62c) = 0;
      iVar4 = 0;
    }
    param_2 = param_2 + *(uint *)(lVar2 + 0x630);
    param_3 = param_3 - (ulonglong)*(uint *)(lVar2 + 0x630);
  } while (0 < param_3);
  return 1;
}



// FUNCTION 1454be7d0 FUN_1454be7d0 body=86 status=ok
// SIG undefined FUN_1454be7d0(void)

ulonglong FUN_1454be7d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(int *)(lVar1 + 0x294) = *(int *)(lVar1 + 0x294) + 1;
  uVar3 = (ulonglong)*(uint *)(lVar1 + 0x294) / (ulonglong)*(uint *)(param_1 + 0xd0);
  if (*(uint *)(lVar1 + 0x294) % *(uint *)(param_1 + 0xd0) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x3d0);
    uVar3 = FUN_144e8d330(lVar2 + 0x348);
    *(undefined1 *)(lVar2 + 0x298) = 0;
    *(undefined1 *)(lVar1 + 0x291) = 0;
  }
  return uVar3;
}



// FUNCTION 1454be830 FUN_1454be830 body=37 status=ok
// SIG undefined FUN_1454be830(void)

undefined8 FUN_1454be830(longlong param_1)

{
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGSetupEncode",
                "OJPEG encoding not supported; use new-style JPEG compression instead");
  return 0;
}



// FUNCTION 1454be860 FUN_1454be860 body=37 status=ok
// SIG undefined FUN_1454be860(void)

undefined8 FUN_1454be860(longlong param_1)

{
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGPreEncode",
                "OJPEG encoding not supported; use new-style JPEG compression instead");
  return 0;
}



// FUNCTION 1454be890 FUN_1454be890 body=37 status=ok
// SIG undefined FUN_1454be890(void)

undefined8 FUN_1454be890(longlong param_1)

{
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGEncode",
                "OJPEG encoding not supported; use new-style JPEG compression instead");
  return 0;
}



// FUNCTION 1454be8c0 FUN_1454be8c0 body=37 status=ok
// SIG undefined FUN_1454be8c0(void)

undefined8 FUN_1454be8c0(longlong param_1)

{
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGPostEncode",
                "OJPEG encoding not supported; use new-style JPEG compression instead");
  return 0;
}



// FUNCTION 1454be8f0 FUN_1454be8f0 body=409 status=ok
// SIG undefined FUN_1454be8f0(void)

void FUN_1454be8f0(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = *(void **)(param_1 + 0x3d0);
  if (_Memory != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)((longlong)_Memory + 0x110);
    *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)((longlong)_Memory + 0x118);
    *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)((longlong)_Memory + 0x120);
    if (*(void **)((longlong)_Memory + 0x1b0) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1b0));
    }
    if (*(void **)((longlong)_Memory + 0x1b8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1b8));
    }
    if (*(void **)((longlong)_Memory + 0x1c0) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1c0));
    }
    if (*(void **)((longlong)_Memory + 0x1c8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1c8));
    }
    if (*(void **)((longlong)_Memory + 0x1d0) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1d0));
    }
    if (*(void **)((longlong)_Memory + 0x1d8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1d8));
    }
    if (*(void **)((longlong)_Memory + 0x1e0) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1e0));
    }
    if (*(void **)((longlong)_Memory + 0x1e8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1e8));
    }
    if (*(void **)((longlong)_Memory + 0x1f0) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1f0));
    }
    if (*(void **)((longlong)_Memory + 0x1f8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1f8));
    }
    if (*(void **)((longlong)_Memory + 0x200) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x200));
    }
    if (*(void **)((longlong)_Memory + 0x208) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x208));
    }
    if (*(char *)((longlong)_Memory + 0x298) != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x3d0);
      FUN_144e8d330(lVar1 + 0x348);
      *(undefined1 *)(lVar1 + 0x298) = 0;
    }
    if (*(void **)((longlong)_Memory + 0x5f8) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x5f8));
    }
    if (*(void **)((longlong)_Memory + 0x620) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x620));
    }
    if (*(void **)((longlong)_Memory + 0x1678) != (void *)0x0) {
      free(*(void **)((longlong)_Memory + 0x1678));
    }
    free(_Memory);
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    FUN_144e93410(param_1);
  }
  return;
}



// FUNCTION 1454bea90 FUN_1454bea90 body=458 status=ok
// SIG undefined FUN_1454bea90(void)

void FUN_1454bea90(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  if ((*(short *)(param_1 + 0x72) == 3) && ((*(short *)(param_1 + 0x6a) - 6U & 0xfffb) == 0)) {
    cVar1 = *(char *)(lVar3 + 0x15c);
    cVar2 = *(char *)(lVar3 + 0x15d);
    *(undefined2 *)(lVar3 + 0x159) = 0x101;
    FUN_1454bf510(param_1);
    if (*(char *)(lVar3 + 0x15e) == '\0') {
      cVar4 = *(char *)(lVar3 + 0x15c);
    }
    else {
      *(undefined2 *)(lVar3 + 0x15c) = 0x101;
      cVar4 = '\x01';
    }
    *(undefined1 *)(lVar3 + 0x159) = 0;
    if (((cVar4 != cVar1) || (*(char *)(lVar3 + 0x15d) != cVar2)) &&
       (*(char *)(lVar3 + 0x15e) == '\0')) {
      if (*(char *)(lVar3 + 0x15b) == '\0') {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSubsamplingCorrect",
                      "Subsampling tag is not set, yet subsampling inside JPEG data [%d,%d] does not match default values [2,2]; assuming subsampling inside JPEG data is correct"
                      ,cVar4,*(undefined1 *)(lVar3 + 0x15d));
      }
      else {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSubsamplingCorrect",
                      "Subsampling inside JPEG data [%d,%d] does not match subsampling tag values [%d,%d]; assuming subsampling inside JPEG data is correct"
                      ,cVar4,*(undefined1 *)(lVar3 + 0x15d),cVar1,cVar2);
      }
    }
    if (*(char *)(lVar3 + 0x15e) != '\0') {
      if (*(char *)(lVar3 + 0x15b) == '\0') {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSubsamplingCorrect",
                      "Subsampling tag is not set, yet subsampling inside JPEG data does not match default values [2,2] (nor any other values allowed in TIFF); assuming subsampling inside JPEG data is correct and desubsampling inside JPEG decompression"
                     );
      }
      else {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSubsamplingCorrect",
                      "Subsampling inside JPEG data does not match subsampling tag values [%d,%d] (nor any other values allowed in TIFF); assuming subsampling inside JPEG data is correct and desubsampling inside JPEG decompression"
                      ,cVar1,cVar2);
      }
    }
    if (*(char *)(lVar3 + 0x15e) == '\0') {
      if (*(byte *)(lVar3 + 0x15c) < *(byte *)(lVar3 + 0x15d)) {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSubsamplingCorrect",
                      "Subsampling values [%d,%d] are not allowed in TIFF",*(byte *)(lVar3 + 0x15c),
                      *(byte *)(lVar3 + 0x15d));
        *(undefined1 *)(lVar3 + 0x15a) = 1;
        return;
      }
    }
  }
  else {
    if (*(char *)(lVar3 + 0x15b) != '\0') {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"OJPEGSubsamplingCorrect",
                    "Subsampling tag not appropriate for this Photometric and/or SamplesPerPixel");
    }
    *(undefined2 *)(lVar3 + 0x15c) = 0x101;
    *(undefined1 *)(lVar3 + 0x15e) = 0;
  }
  *(undefined1 *)(lVar3 + 0x15a) = 1;
  return;
}



// FUNCTION 1454bec60 FUN_1454bec60 body=509 status=ok
// SIG undefined FUN_1454bec60(void)

undefined8 FUN_1454bec60(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  
  lVar6 = *(longlong *)(param_1 + 0x3d0);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(lVar6 + 0x130) = uVar3;
  uVar4 = *(uint *)(param_1 + 0x4c);
  *(uint *)(lVar6 + 0x134) = uVar4;
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    *(undefined4 *)(lVar6 + 0x138) = uVar3;
    uVar5 = *(uint *)(param_1 + 0x74);
    *(uint *)(lVar6 + 0x13c) = uVar5;
    uVar10 = uVar4;
    if (uVar5 == 0xffffffff) {
      *(uint *)(lVar6 + 0x13c) = uVar4;
      uVar5 = uVar4;
    }
  }
  else {
    *(undefined4 *)(lVar6 + 0x138) = *(undefined4 *)(param_1 + 0x54);
    uVar5 = *(uint *)(param_1 + 0x58);
    uVar10 = (uVar4 - 1) + uVar5;
    *(uint *)(lVar6 + 0x13c) = uVar5;
    uVar10 = uVar10 - uVar10 % uVar5;
  }
  *(uint *)(lVar6 + 0x140) = uVar10;
  if (*(short *)(param_1 + 0x72) == 1) {
    *(undefined2 *)(lVar6 + 0x144) = 1;
    *(undefined2 *)(lVar6 + 0x15c) = 0x101;
    uVar7 = 1;
  }
  else {
    if (*(short *)(param_1 + 0x72) != 3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfo",
                    "SamplesPerPixel %d not supported for this compression scheme",
                    *(undefined1 *)(lVar6 + 0x144));
      return 0;
    }
    *(undefined2 *)(lVar6 + 0x144) = 3;
    uVar7 = 1;
    if (*(short *)(param_1 + 0x9a) == 1) {
      uVar7 = 3;
    }
  }
  *(undefined1 *)(lVar6 + 0x146) = uVar7;
  if (uVar4 <= uVar5) {
LAB_1454bedd4:
    iVar8 = FUN_1454bf510(param_1);
    if (iVar8 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar6 + 0x234) = *(undefined4 *)(lVar6 + 0x638);
    *(undefined4 *)(lVar6 + 0x238) = *(undefined4 *)(lVar6 + 0x63c);
    *(undefined1 *)(lVar6 + 0x230) = 1;
    *(ulonglong *)(lVar6 + 0x248) =
         (ulonglong)*(ushort *)(lVar6 + 0x660) + *(longlong *)(lVar6 + 0x658);
    *(ulonglong *)(lVar6 + 0x240) =
         *(longlong *)(lVar6 + 0x648) - (ulonglong)*(ushort *)(lVar6 + 0x660);
    *(undefined1 *)(lVar6 + 0x290) = 1;
    return 1;
  }
  bVar1 = *(byte *)(lVar6 + 0x15c);
  if (((((bVar1 - 1 & 0xfc) == 0) && (bVar1 != 3)) &&
      (bVar2 = *(byte *)(lVar6 + 0x15d), (bVar2 - 1 & 0xfc) == 0)) && (bVar2 != 3)) {
    if ((int)((ulonglong)uVar5 % ((ulonglong)bVar2 << 3)) == 0) {
      *(short *)(lVar6 + 0x210) =
           (short)((*(int *)(lVar6 + 0x138) + -1 + (uint)bVar1 * 8) / ((uint)bVar1 * 8)) *
           (short)((ulonglong)uVar5 / ((ulonglong)bVar2 << 3));
      goto LAB_1454bedd4;
    }
    pcVar9 = "Incompatible vertical subsampling and image strip/tile length";
  }
  else {
    pcVar9 = "Invalid subsampling values";
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfo",pcVar9);
  return 0;
}



// FUNCTION 1454bee60 FUN_1454bee60 body=557 status=ok
// SIG undefined FUN_1454bee60(void)

undefined8 FUN_1454bee60(longlong param_1,ushort param_2)

{
  char cVar1;
  longlong lVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  bVar7 = (char)param_2 - 1;
  uVar8 = (ulonglong)bVar7;
  *(byte *)(lVar2 + 0x145) = bVar7;
  cVar1 = *(char *)(uVar8 * 0x20 + 0x230 + lVar2);
  while (cVar1 == '\0') {
    bVar7 = (char)uVar8 - 1;
    uVar8 = (ulonglong)bVar7;
    *(byte *)(lVar2 + 0x145) = bVar7;
    cVar1 = *(char *)(uVar8 * 0x20 + 0x230 + lVar2);
  }
  lVar6 = uVar8 * 0x20;
  *(undefined4 *)(lVar2 + 0x638) = *(undefined4 *)(lVar6 + 0x234 + lVar2);
  *(undefined4 *)(lVar2 + 0x63c) = *(undefined4 *)(lVar6 + 0x238 + lVar2);
  *(undefined8 *)(lVar2 + 0x648) = *(undefined8 *)((uVar8 + 0x12) * 0x20 + lVar2);
  *(undefined1 *)(lVar2 + 0x650) = 0;
  *(undefined8 *)(lVar2 + 0x658) = *(undefined8 *)(lVar6 + 0x248 + lVar2);
  *(undefined2 *)(lVar2 + 0x660) = 0;
  *(undefined8 *)(lVar2 + 0x668) = 0;
  uVar4 = (ushort)uVar8;
  do {
    if (param_2 <= uVar4) {
      return 1;
    }
    sVar3 = *(short *)(lVar2 + 0x660);
    do {
      do {
        if ((sVar3 == 0) && (iVar5 = FUN_1454c0990(lVar2), iVar5 == 0)) {
          return 0;
        }
        cVar1 = **(char **)(lVar2 + 0x668);
        *(char **)(lVar2 + 0x668) = *(char **)(lVar2 + 0x668) + 1;
        sVar3 = *(short *)(lVar2 + 0x660) + -1;
        *(short *)(lVar2 + 0x660) = sVar3;
      } while (cVar1 != -1);
      do {
        if ((sVar3 == 0) && (iVar5 = FUN_1454c0990(lVar2), iVar5 == 0)) {
          return 0;
        }
        cVar1 = **(char **)(lVar2 + 0x668);
        *(char **)(lVar2 + 0x668) = *(char **)(lVar2 + 0x668) + 1;
        sVar3 = *(short *)(lVar2 + 0x660) + -1;
        *(short *)(lVar2 + 0x660) = sVar3;
      } while (cVar1 == -1);
    } while (cVar1 != -0x26);
    *(char *)(lVar2 + 0x145) = *(char *)(lVar2 + 0x145) + '\x01';
    iVar5 = FUN_1454c0320(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    *(undefined1 *)((ulonglong)*(byte *)(lVar2 + 0x145) * 0x20 + 0x230 + lVar2) = 1;
    *(undefined4 *)((ulonglong)*(byte *)(lVar2 + 0x145) * 0x20 + 0x234 + lVar2) =
         *(undefined4 *)(lVar2 + 0x638);
    *(undefined4 *)((ulonglong)*(byte *)(lVar2 + 0x145) * 0x20 + 0x238 + lVar2) =
         *(undefined4 *)(lVar2 + 0x63c);
    *(ulonglong *)(((ulonglong)*(byte *)(lVar2 + 0x145) + 0x12) * 0x20 + lVar2) =
         *(longlong *)(lVar2 + 0x648) - (ulonglong)*(ushort *)(lVar2 + 0x660);
    *(ulonglong *)((ulonglong)*(byte *)(lVar2 + 0x145) * 0x20 + 0x248 + lVar2) =
         (ulonglong)*(ushort *)(lVar2 + 0x660) + *(longlong *)(lVar2 + 0x658);
    uVar4 = (ushort)*(byte *)(lVar2 + 0x145);
  } while( true );
}



// FUNCTION 1454bf090 FUN_1454bf090 body=1149 status=ok
// SIG undefined FUN_1454bf090(void)

undefined8 FUN_1454bf090(longlong param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  if (*(char *)(lVar4 + 0x298) != '\0') {
    return 0;
  }
  uVar10 = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x2a0);
  *(undefined4 *)(lVar4 + 0xe70) = 0;
  *(undefined1 *)(lVar4 + 0x212) = 0;
  FUN_144e8b040(puVar1);
  *(undefined8 **)(lVar4 + 0x348) = puVar1;
  *(code **)(lVar4 + 0x2b0) = FUN_1454c1730;
  *(longlong *)(lVar4 + 0x360) = param_1;
  *puVar1 = FUN_1454c17a0;
  iVar5 = FUN_1454c15b0(lVar4,lVar4 + 0x348);
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined1 *)(lVar4 + 0x298) = 1;
  *(undefined **)(lVar4 + 0x5b0) = &DAT_1454c1800;
  *(undefined8 *)(lVar4 + 0x5a8) = 0;
  *(code **)(lVar4 + 0x5b8) = FUN_1454c1810;
  *(code **)(lVar4 + 0x5c0) = FUN_1454c1890;
  *(code **)(lVar4 + 0x5c8) = FUN_1454c18c0;
  *(undefined **)(lVar4 + 0x5d0) = &DAT_1454c18f0;
  *(longlong *)(lVar4 + 0x370) = lVar4 + 0x5a0;
  iVar5 = FUN_1454c15f0(lVar4,lVar4 + 0x348,1);
  if (iVar5 == 0) {
    return 0;
  }
  if ((*(char *)(lVar4 + 0x15e) == '\0') && (1 < *(byte *)(lVar4 + 0x146))) {
    *(undefined1 *)(lVar4 + 0x3a1) = 1;
    *(undefined1 *)(lVar4 + 0x299) = 0;
    if (*(char *)(lVar4 + 0x5d8) == '\0') {
      bVar2 = *(byte *)(lVar4 + 0x15c);
      *(undefined4 *)(lVar4 + 0x5e8) = 8;
      iVar5 = (uint)*(byte *)(lVar4 + 0x15d) * 8;
      *(int *)(lVar4 + 0x5e0) = iVar5;
      uVar11 = ((*(int *)(lVar4 + 0x138) + -1 + (uint)bVar2 * 8) / ((uint)bVar2 * 8)) * (uint)bVar2
               * 8;
      *(uint *)(lVar4 + 0x5dc) = uVar11;
      uVar6 = uVar11 / bVar2;
      iVar5 = uVar11 * iVar5;
      *(uint *)(lVar4 + 0x5e4) = uVar6;
      *(uint *)(lVar4 + 0x5f0) = uVar6 * 8;
      *(int *)(lVar4 + 0x5ec) = iVar5;
      iVar5 = iVar5 + uVar6 * 0x10;
      *(int *)(lVar4 + 0x5f4) = iVar5;
      lVar7 = FUN_144e92f60(1,iVar5);
      *(longlong *)(lVar4 + 0x5f8) = lVar7;
      if (lVar7 != 0) {
        *(longlong *)(lVar4 + 0x600) = lVar7;
        lVar7 = lVar7 + (ulonglong)*(uint *)(lVar4 + 0x5ec);
        *(longlong *)(lVar4 + 0x608) = lVar7;
        *(ulonglong *)(lVar4 + 0x610) = (ulonglong)*(uint *)(lVar4 + 0x5f0) + lVar7;
        uVar6 = *(int *)(lVar4 + 0x5e8) * 2 + 3 + *(int *)(lVar4 + 0x5e0);
        *(uint *)(lVar4 + 0x618) = uVar6;
        plVar8 = (longlong *)FUN_144e92f50((ulonglong)uVar6 << 3);
        *(longlong **)(lVar4 + 0x620) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)(plVar8 + 3);
          plVar8[1] = *(longlong *)(lVar4 + 0x620) + 0x18 + (ulonglong)*(uint *)(lVar4 + 0x5e0) * 8;
          plVar8[2] = *(longlong *)(lVar4 + 0x620) + 0x18 +
                      ((ulonglong)*(uint *)(lVar4 + 0x5e8) + (ulonglong)*(uint *)(lVar4 + 0x5e0)) *
                      8;
          plVar8 = plVar8 + 3;
          uVar6 = uVar10;
          if (*(int *)(lVar4 + 0x5e0) != 0) {
            do {
              uVar11 = uVar6 + 1;
              *plVar8 = (ulonglong)(uVar6 * *(int *)(lVar4 + 0x5dc)) + *(longlong *)(lVar4 + 0x600);
              plVar8 = plVar8 + 1;
              uVar6 = uVar11;
            } while (uVar11 < *(uint *)(lVar4 + 0x5e0));
          }
          uVar6 = 0;
          uVar11 = uVar10;
          if (*(int *)(lVar4 + 0x5e8) != 0) {
            do {
              uVar9 = uVar11 + 1;
              *plVar8 = (ulonglong)(uVar11 * *(int *)(lVar4 + 0x5e4)) + *(longlong *)(lVar4 + 0x608)
              ;
              plVar8 = plVar8 + 1;
              uVar6 = *(uint *)(lVar4 + 0x5e8);
              uVar11 = uVar9;
            } while (uVar9 < uVar6);
          }
          if (uVar6 != 0) {
            do {
              uVar6 = uVar10 * *(int *)(lVar4 + 0x5e4);
              uVar10 = uVar10 + 1;
              *plVar8 = (ulonglong)uVar6 + *(longlong *)(lVar4 + 0x610);
              plVar8 = plVar8 + 1;
            } while (uVar10 < *(uint *)(lVar4 + 0x5e8));
          }
          bVar2 = *(byte *)(lVar4 + 0x15c);
          *(undefined4 *)(lVar4 + 0x62c) = 0;
          *(undefined4 *)(lVar4 + 0xc) = 0;
          *(undefined1 *)(lVar4 + 0x5d8) = 1;
          iVar5 = (uint)(*(uint *)(lVar4 + 0x138) % (uint)bVar2 != 0) +
                  *(uint *)(lVar4 + 0x138) / (uint)bVar2;
          bVar3 = *(byte *)(lVar4 + 0x15d);
          *(int *)(lVar4 + 0x628) = iVar5;
          *(uint *)(lVar4 + 0x630) = ((uint)bVar3 * (uint)bVar2 + 2) * iVar5;
          *(uint *)(lVar4 + 0x634) =
               (uint)(*(uint *)(lVar4 + 0x13c) % (uint)bVar3 != 0) +
               *(uint *)(lVar4 + 0x13c) / (uint)bVar3;
          goto LAB_1454bf449;
        }
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGWriteHeaderInfo","Out of memory");
      return 0;
    }
  }
  else {
    *(undefined8 *)(lVar4 + 900) = 0;
    *(undefined1 *)(lVar4 + 0x299) = 1;
    *(uint *)(lVar4 + 0x630) = (uint)*(byte *)(lVar4 + 0x146) * *(int *)(lVar4 + 0x138);
    *(undefined4 *)(lVar4 + 0x634) = *(undefined4 *)(lVar4 + 0x13c);
  }
LAB_1454bf449:
  iVar5 = FUN_1454c1630(lVar4,lVar4 + 0x348);
  if (iVar5 != 0) {
    if (*(int *)(lVar4 + 0x378) == *(int *)(lVar4 + 0x138)) {
      if ((*(uint *)(lVar4 + 0x4c0) == (uint)*(byte *)(lVar4 + 0x15c)) &&
         (*(uint *)(lVar4 + 0x4c4) == (uint)*(byte *)(lVar4 + 0x15d))) {
        *(undefined1 *)(lVar4 + 0x291) = 1;
        return 1;
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGWriteHeaderInfo",
                    "jpeg_start_decompress() returned max_h_samp_factor = %d and max_v_samp_factor = %d, expected %d and %d"
                    ,*(uint *)(lVar4 + 0x4c0),*(undefined4 *)(lVar4 + 0x4c4),
                    (uint)*(byte *)(lVar4 + 0x15c),*(undefined1 *)(lVar4 + 0x15d));
    }
    else {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGWriteHeaderInfo",
                    "jpeg_start_decompress() returned image_width = %d, expected %d",
                    *(int *)(lVar4 + 0x378),*(int *)(lVar4 + 0x138));
    }
  }
  return 0;
}



// FUNCTION 1454bf510 FUN_1454bf510 body=2120 status=ok
// SIG undefined FUN_1454bf510(void)

undefined8 FUN_1454bf510(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  ushort uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  short sVar17;
  byte bVar18;
  ushort uVar19;
  ushort uVar20;
  char *pcVar21;
  
  lVar5 = *(longlong *)(param_1 + 0x3d0);
  if (*(longlong *)(lVar5 + 0x128) == 0) {
    uVar12 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(lVar5 + 0x128) = uVar12;
  }
  uVar16 = *(ulonglong *)(lVar5 + 0x148);
  if (uVar16 != 0) {
    uVar15 = *(ulonglong *)(lVar5 + 0x128);
    if (uVar16 < uVar15) {
      uVar6 = *(ulonglong *)(lVar5 + 0x150);
      if (((uVar6 == 0) || (~uVar6 < uVar16)) || (uVar15 < uVar6 + uVar16)) {
        *(ulonglong *)(lVar5 + 0x150) = uVar15 - uVar16;
      }
    }
    else {
      *(undefined8 *)(lVar5 + 0x148) = 0;
      *(undefined8 *)(lVar5 + 0x150) = 0;
    }
  }
  *(undefined8 *)(lVar5 + 0x638) = 0;
  *(undefined4 *)(lVar5 + 0x640) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined8 *)(lVar5 + 0x658) = 0;
  *(undefined2 *)(lVar5 + 0x660) = 0;
  do {
    if ((*(short *)(lVar5 + 0x660) == 0) && (iVar11 = FUN_1454c0990(), iVar11 == 0))
    goto LAB_1454bf7c1;
    if (**(char **)(lVar5 + 0x668) != -1) break;
    *(short *)(lVar5 + 0x660) = *(short *)(lVar5 + 0x660) + -1;
    sVar17 = *(short *)(lVar5 + 0x660);
    *(char **)(lVar5 + 0x668) = *(char **)(lVar5 + 0x668) + 1;
    do {
      if ((sVar17 == 0) && (iVar11 = FUN_1454c0990(lVar5), iVar11 == 0)) goto LAB_1454bf7c1;
      cVar2 = **(char **)(lVar5 + 0x668);
      *(short *)(lVar5 + 0x660) = *(short *)(lVar5 + 0x660) + -1;
      sVar17 = *(short *)(lVar5 + 0x660);
      *(char **)(lVar5 + 0x668) = *(char **)(lVar5 + 0x668) + 1;
    } while (cVar2 == -1);
    switch(cVar2) {
    case -0x40:
    case -0x3f:
    case -0x3d:
      iVar11 = FUN_1454bff40(param_1,cVar2);
      if (iVar11 == 0) goto LAB_1454bf7c1;
      if (*(char *)(lVar5 + 0x159) != '\0') goto LAB_1454bfa32;
      break;
    default:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSec",
                    "Unknown marker type %d in JPEG data");
      return 0;
    case -0x3c:
      iVar11 = FUN_1454bfdc0();
      goto joined_r0x0001454bfa67;
    case -0x28:
      break;
    case -0x26:
      if (*(char *)(lVar5 + 0x159) != '\0') goto LAB_1454bfa32;
      iVar11 = FUN_1454c0320();
joined_r0x0001454bfa67:
      if (iVar11 == 0) goto LAB_1454bf7c1;
      break;
    case -0x25:
      lVar7 = *(longlong *)(param_1 + 0x3d0);
      if ((*(short *)(lVar7 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar7), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar3 = **(undefined1 **)(lVar7 + 0x668);
      *(short *)(lVar7 + 0x660) = *(short *)(lVar7 + 0x660) + -1;
      *(undefined1 **)(lVar7 + 0x668) = *(undefined1 **)(lVar7 + 0x668) + 1;
      if ((*(short *)(lVar7 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar7), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar4 = **(undefined1 **)(lVar7 + 0x668);
      *(short *)(lVar7 + 0x660) = *(short *)(lVar7 + 0x660) + -1;
      uVar19 = CONCAT11(uVar3,uVar4);
      *(undefined1 **)(lVar7 + 0x668) = *(undefined1 **)(lVar7 + 0x668) + 1;
      if (uVar19 < 3) {
        if (*(char *)(lVar7 + 0x159) == '\0') {
LAB_1454bfb10:
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDqt",
                        "Corrupt DQT marker in JPEG data");
          return 0;
        }
        goto LAB_1454bf7c1;
      }
      uVar19 = uVar19 - 2;
      if (*(char *)(lVar7 + 0x159) == '\0') {
        do {
          if (uVar19 < 0x41) goto LAB_1454bfb10;
          puVar13 = (undefined4 *)FUN_144e92f50(0x49);
          if (puVar13 == (undefined4 *)0x0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDqt",
                          "Out of memory");
            return 0;
          }
          *puVar13 = 0x49;
          puVar13[1] = 0x4300dbff;
          iVar11 = FUN_1454c0c20(lVar7,0x41,puVar13 + 2);
          if (iVar11 == 0) {
LAB_1454bfad8:
            free(puVar13);
            return 0;
          }
          if (3 < (*(byte *)(puVar13 + 2) & 0xf)) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDqt",
                          "Corrupt DQT marker in JPEG data");
            goto LAB_1454bfad8;
          }
          lVar8 = (ulonglong)(*(byte *)(puVar13 + 2) & 0xf) * 8;
          pvVar9 = *(void **)(lVar8 + 0x1b0 + lVar7);
          if (pvVar9 != (void *)0x0) {
            free(pvVar9);
          }
          *(undefined4 **)(lVar8 + 0x1b0 + lVar7) = puVar13;
          uVar19 = uVar19 - 0x41;
        } while (uVar19 != 0);
      }
      else {
        FUN_1454c0e90(lVar7,uVar19);
      }
      break;
    case -0x23:
      lVar7 = *(longlong *)(param_1 + 0x3d0);
      if ((*(short *)(lVar7 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar7), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar3 = **(undefined1 **)(lVar7 + 0x668);
      *(short *)(lVar7 + 0x660) = *(short *)(lVar7 + 0x660) + -1;
      *(undefined1 **)(lVar7 + 0x668) = *(undefined1 **)(lVar7 + 0x668) + 1;
      if ((*(short *)(lVar7 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar7), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar4 = **(undefined1 **)(lVar7 + 0x668);
      *(short *)(lVar7 + 0x660) = *(short *)(lVar7 + 0x660) + -1;
      *(undefined1 **)(lVar7 + 0x668) = *(undefined1 **)(lVar7 + 0x668) + 1;
      if (CONCAT11(uVar3,uVar4) != 4) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDri",
                      "Corrupt DRI marker in JPEG data");
        return 0;
      }
      if ((*(short *)(lVar7 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar7), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar3 = **(undefined1 **)(lVar7 + 0x668);
      *(short *)(lVar7 + 0x660) = *(short *)(lVar7 + 0x660) + -1;
      *(undefined1 **)(lVar7 + 0x668) = *(undefined1 **)(lVar7 + 0x668) + 1;
      if ((*(short *)(lVar7 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar7), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar4 = **(undefined1 **)(lVar7 + 0x668);
      *(short *)(lVar7 + 0x660) = *(short *)(lVar7 + 0x660) + -1;
      *(undefined1 **)(lVar7 + 0x668) = *(undefined1 **)(lVar7 + 0x668) + 1;
      *(ushort *)(lVar7 + 0x210) = CONCAT11(uVar3,uVar4);
      break;
    case -0x20:
    case -0x1f:
    case -0x1e:
    case -0x1d:
    case -0x1c:
    case -0x1b:
    case -0x1a:
    case -0x19:
    case -0x18:
    case -0x17:
    case -0x16:
    case -0x15:
    case -0x14:
    case -0x13:
    case -0x12:
    case -0x11:
    case -2:
      if ((sVar17 == 0) && (iVar11 = FUN_1454c0990(lVar5), iVar11 == 0)) goto LAB_1454bf7c1;
      uVar3 = **(undefined1 **)(lVar5 + 0x668);
      *(short *)(lVar5 + 0x660) = *(short *)(lVar5 + 0x660) + -1;
      *(undefined1 **)(lVar5 + 0x668) = *(undefined1 **)(lVar5 + 0x668) + 1;
      if ((*(short *)(lVar5 + 0x660) == 0) && (iVar11 = FUN_1454c0990(lVar5), iVar11 == 0))
      goto LAB_1454bf7c1;
      uVar4 = **(undefined1 **)(lVar5 + 0x668);
      puVar1 = *(undefined1 **)(lVar5 + 0x668) + 1;
      *(short *)(lVar5 + 0x660) = *(short *)(lVar5 + 0x660) + -1;
      uVar20 = CONCAT11(uVar3,uVar4);
      uVar19 = *(ushort *)(lVar5 + 0x660);
      *(undefined1 **)(lVar5 + 0x668) = puVar1;
      if (uVar20 < 2) {
        if (*(char *)(lVar5 + 0x159) == '\0') {
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSec",
                        "Corrupt JPEG data");
          return 0;
        }
        goto LAB_1454bf7c1;
      }
      if (2 < uVar20) {
        uVar20 = uVar20 - 2;
        uVar10 = uVar19;
        if (uVar20 <= uVar19) {
          uVar10 = uVar20;
        }
        *(ushort *)(lVar5 + 0x660) = uVar19 - uVar10;
        *(undefined1 **)(lVar5 + 0x668) = puVar1 + uVar10;
        uVar20 = uVar20 - uVar10;
        if (uVar20 != 0) {
          uVar16 = *(ulonglong *)(lVar5 + 0x658);
          uVar15 = uVar16 & 0xffff;
          *(undefined1 *)(lVar5 + 0x650) = 0;
          if (uVar20 <= uVar16) {
            uVar15 = (ulonglong)uVar20;
          }
          *(longlong *)(lVar5 + 0x648) = *(longlong *)(lVar5 + 0x648) + uVar15;
          *(ulonglong *)(lVar5 + 0x658) = uVar16 - uVar15;
        }
      }
    }
  } while (cVar2 != -0x26);
  if ((*(char *)(lVar5 + 0x159) == '\0') && (*(char *)(lVar5 + 0x213) == '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x3d0);
    if (*(longlong *)(lVar7 + 0x168) == 0) {
      pcVar21 = "Missing JPEG tables";
LAB_1454bf7ae:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecTablesQTable",pcVar21);
    }
    else {
      bVar18 = 0;
      *(undefined1 *)(lVar7 + 0x650) = 0;
      if (*(char *)(lVar7 + 0x144) != '\0') {
        do {
          uVar16 = (ulonglong)bVar18;
          lVar8 = *(longlong *)(lVar7 + 0x168 + uVar16 * 8);
          if ((lVar8 == 0) ||
             ((bVar18 != 0 && (lVar8 == *(longlong *)(lVar7 + 0x160 + uVar16 * 8))))) {
            bVar14 = *(byte *)((ulonglong)bVar18 + 0x225 + lVar7);
          }
          else {
            uVar15 = 0;
            if (0 < (int)(bVar18 - 1)) {
              do {
                if (*(longlong *)(lVar7 + 0x168 + uVar16 * 8) ==
                    *(longlong *)(lVar7 + 0x168 + uVar15 * 8)) {
                  pcVar21 = "Corrupt JpegQTables tag value";
                  goto LAB_1454bf7ae;
                }
                bVar14 = (char)uVar15 + 1;
                uVar15 = (ulonglong)bVar14;
              } while ((int)(uint)bVar14 < (int)(bVar18 - 1));
            }
            puVar13 = (undefined4 *)FUN_144e92f50(0x49);
            if (puVar13 == (undefined4 *)0x0) {
              pcVar21 = "Out of memory";
              goto LAB_1454bf7ae;
            }
            *puVar13 = 0x49;
            puVar13[1] = 0x4300dbff;
            *(byte *)(puVar13 + 2) = bVar18;
            (**(code **)(param_1 + 0x450))
                      (*(undefined8 *)(param_1 + 0x438),*(undefined8 *)(lVar7 + 0x168 + uVar16 * 8),
                       0);
            iVar11 = (**(code **)(param_1 + 0x440))
                               (*(undefined8 *)(param_1 + 0x438),(longlong)puVar13 + 9);
            if (iVar11 != 0x40) {
              free(puVar13);
              return 0;
            }
            pvVar9 = *(void **)(lVar7 + 0x1b0 + uVar16 * 8);
            if (pvVar9 != (void *)0x0) {
              free(pvVar9);
            }
            *(undefined4 **)(lVar7 + 0x1b0 + uVar16 * 8) = puVar13;
            bVar14 = bVar18;
          }
          bVar18 = bVar18 + 1;
          *(byte *)(lVar7 + 0x226 + uVar16) = bVar14;
        } while (bVar18 < *(byte *)(lVar7 + 0x144));
      }
      uVar16 = 0;
      *(undefined1 *)(lVar5 + 0x214) = 0xc0;
      bVar18 = 0;
      if (*(char *)(lVar5 + 0x144) != '\0') {
        do {
          *(char *)(uVar16 + 0x220 + lVar5) = (char)uVar16;
          bVar14 = (char)uVar16 + 1;
          uVar16 = (ulonglong)bVar14;
          bVar18 = *(byte *)(lVar5 + 0x144);
        } while (bVar14 < bVar18);
      }
      *(byte *)(lVar5 + 0x223) = *(char *)(lVar5 + 0x15c) << 4 | *(byte *)(lVar5 + 0x15d);
      uVar16 = 1;
      if (1 < bVar18) {
        do {
          bVar18 = (char)uVar16 + 1;
          *(undefined1 *)(uVar16 + 0x223 + lVar5) = 0x11;
          uVar16 = (ulonglong)bVar18;
        } while (bVar18 < *(byte *)(lVar5 + 0x144));
      }
      *(undefined4 *)(lVar5 + 0x218) = *(undefined4 *)(lVar5 + 0x138);
      *(undefined4 *)(lVar5 + 0x21c) = *(undefined4 *)(lVar5 + 0x140);
      *(undefined1 *)(lVar5 + 0x213) = 1;
      iVar11 = FUN_1454c04d0(param_1);
      if ((iVar11 != 0) && (iVar11 = FUN_1454c0730(param_1), iVar11 != 0)) {
        uVar16 = 1;
        if (1 < *(byte *)(lVar5 + 0x144)) {
          do {
            *(char *)(uVar16 + 0x229 + lVar5) = (char)uVar16;
            bVar18 = (char)uVar16 + 1;
            uVar16 = (ulonglong)bVar18;
          } while (bVar18 < *(byte *)(lVar5 + 0x144));
        }
        goto LAB_1454bfa32;
      }
    }
LAB_1454bf7c1:
    uVar12 = 0;
  }
  else {
LAB_1454bfa32:
    uVar12 = 1;
  }
  return uVar12;
}



// FUNCTION 1454bfdc0 FUN_1454bfdc0 body=374 status=ok
// SIG undefined FUN_1454bfdc0(void)

undefined8 FUN_1454bfdc0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int *_Memory;
  ushort local_res8 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  iVar4 = FUN_1454c0b70(lVar2,local_res8);
  if (iVar4 == 0) {
    return 0;
  }
  if (2 < local_res8[0]) {
    if (*(char *)(lVar2 + 0x159) != '\0') {
      FUN_1454c0e90(lVar2,local_res8[0] - 2);
      return 1;
    }
    _Memory = (int *)FUN_144e92f50(local_res8[0] + 6);
    if (_Memory == (int *)0x0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDht",
                    "Out of memory");
    }
    else {
      *_Memory = local_res8[0] + 6;
      *(undefined2 *)(_Memory + 1) = 0xc4ff;
      *(char *)((longlong)_Memory + 7) = (char)local_res8[0];
      *(char *)((longlong)_Memory + 6) = (char)(local_res8[0] >> 8);
      iVar4 = FUN_1454c0c20(lVar2,local_res8[0] - 2,_Memory + 2);
      if (iVar4 != 0) {
        bVar1 = *(byte *)(_Memory + 2);
        if ((bVar1 & 0xf0) == 0) {
          if (bVar1 < 4) {
            lVar2 = lVar2 + (ulonglong)bVar1 * 8;
            pvVar3 = *(void **)(lVar2 + 0x1d0);
            if (pvVar3 != (void *)0x0) {
              free(pvVar3);
            }
            *(int **)(lVar2 + 0x1d0) = _Memory;
            return 1;
          }
        }
        else if (((bVar1 & 0xf0) == 0x10) && ((bVar1 & 0xf) < 4)) {
          lVar2 = lVar2 + (ulonglong)(bVar1 & 0xf) * 8;
          pvVar3 = *(void **)(lVar2 + 0x1f0);
          if (pvVar3 != (void *)0x0) {
            free(pvVar3);
          }
          *(int **)(lVar2 + 0x1f0) = _Memory;
          return 1;
        }
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDht",
                      "Corrupt DHT marker in JPEG data");
      }
      free(_Memory);
    }
    return 0;
  }
  if (*(char *)(lVar2 + 0x159) != '\0') {
    return 0;
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamDht",
                "Corrupt DHT marker in JPEG data");
  return 0;
}



// FUNCTION 1454bff40 FUN_1454bff40 body=978 status=ok
// SIG undefined FUN_1454bff40(void)

undefined8 FUN_1454bff40(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  ushort uVar10;
  char *pcVar11;
  ushort uVar12;
  uint uVar13;
  bool bVar14;
  ushort local_res8 [4];
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  if (*(char *)(lVar4 + 0x213) != '\0') {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamSof",
                  "Corrupt JPEG data");
    return 0;
  }
  if (*(char *)(lVar4 + 0x159) == '\0') {
    *(undefined1 *)(lVar4 + 0x214) = param_2;
  }
  iVar6 = FUN_1454c0b70(lVar4,local_res8);
  if (iVar6 == 0) {
    return 0;
  }
  cVar2 = *(char *)(lVar4 + 0x159);
  if (local_res8[0] < 0xb) {
    bVar14 = cVar2 == '\0';
  }
  else {
    uVar13 = (ushort)(local_res8[0] - 8) / 3;
    if ((uint)(ushort)(local_res8[0] - 8) + uVar13 * -3 == 0) {
      uVar12 = (ushort)uVar13;
      if ((cVar2 == '\0') && (uVar12 != *(byte *)(lVar4 + 0x144))) {
        pcVar11 = "JPEG compressed data indicates unexpected number of samples";
        goto LAB_1454c014f;
      }
      if ((*(short *)(lVar4 + 0x660) == 0) && (iVar6 = FUN_1454c0990(lVar4), iVar6 == 0)) {
        return 0;
      }
      cVar2 = **(char **)(lVar4 + 0x668);
      *(short *)(lVar4 + 0x660) = *(short *)(lVar4 + 0x660) + -1;
      *(char **)(lVar4 + 0x668) = *(char **)(lVar4 + 0x668) + 1;
      if (cVar2 != '\b') {
        if (*(char *)(lVar4 + 0x159) != '\0') {
          return 0;
        }
        pcVar11 = "JPEG compressed data indicates unexpected number of bits per sample";
        goto LAB_1454c014f;
      }
      if (*(char *)(lVar4 + 0x159) == '\0') {
        iVar6 = FUN_1454c0b70(lVar4,local_res8);
        if (iVar6 == 0) {
          return 0;
        }
        if (((uint)local_res8[0] < *(uint *)(lVar4 + 0x134)) &&
           ((uint)local_res8[0] < *(uint *)(lVar4 + 0x140))) {
          pcVar11 = "JPEG compressed data indicates unexpected height";
          goto LAB_1454c014f;
        }
        *(uint *)(lVar4 + 0x21c) = (uint)local_res8[0];
        iVar6 = FUN_1454c0b70(lVar4,local_res8);
        if (iVar6 == 0) {
          return 0;
        }
        uVar13 = (uint)local_res8[0];
        if ((uint)local_res8[0] < *(uint *)(lVar4 + 0x130)) {
          uVar1 = *(uint *)(lVar4 + 0x138);
          bVar14 = false;
          if (uVar13 < uVar1) {
            pcVar11 = "JPEG compressed data indicates unexpected width";
            goto LAB_1454c014f;
          }
        }
        else {
          uVar1 = *(uint *)(lVar4 + 0x138);
          bVar14 = local_res8[0] < uVar1;
        }
        if (!bVar14 && uVar13 != uVar1) {
          pcVar11 = "JPEG compressed data image width exceeds expected image width";
          goto LAB_1454c014f;
        }
        *(uint *)(lVar4 + 0x218) = uVar13;
      }
      else {
        FUN_1454c0e90(lVar4,4);
      }
      if ((*(short *)(lVar4 + 0x660) == 0) && (iVar6 = FUN_1454c0990(lVar4), iVar6 == 0)) {
        return 0;
      }
      bVar7 = **(byte **)(lVar4 + 0x668);
      *(short *)(lVar4 + 0x660) = *(short *)(lVar4 + 0x660) + -1;
      *(byte **)(lVar4 + 0x668) = *(byte **)(lVar4 + 0x668) + 1;
      if (bVar7 == uVar12) {
        uVar10 = 0;
        if (uVar12 != 0) {
          do {
            if ((*(short *)(lVar4 + 0x660) == 0) && (iVar6 = FUN_1454c0990(lVar4), iVar6 == 0)) {
              return 0;
            }
            uVar9 = (ulonglong)uVar10;
            uVar3 = **(undefined1 **)(lVar4 + 0x668);
            *(undefined1 **)(lVar4 + 0x668) = *(undefined1 **)(lVar4 + 0x668) + 1;
            sVar5 = *(short *)(lVar4 + 0x660) + -1;
            *(short *)(lVar4 + 0x660) = sVar5;
            if (*(char *)(lVar4 + 0x159) == '\0') {
              *(undefined1 *)(lVar4 + 0x220 + uVar9) = uVar3;
              sVar5 = *(short *)(lVar4 + 0x660);
            }
            if ((sVar5 == 0) && (iVar6 = FUN_1454c0990(lVar4), iVar6 == 0)) {
              return 0;
            }
            bVar7 = **(byte **)(lVar4 + 0x668);
            *(short *)(lVar4 + 0x660) = *(short *)(lVar4 + 0x660) + -1;
            *(byte **)(lVar4 + 0x668) = *(byte **)(lVar4 + 0x668) + 1;
            if (*(char *)(lVar4 + 0x159) == '\0') {
              *(byte *)(lVar4 + 0x223 + uVar9) = bVar7;
              if (*(char *)(lVar4 + 0x15e) == '\0') {
                if (uVar10 == 0) {
                  bVar14 = (uint)bVar7 ==
                           ((uint)*(byte *)(lVar4 + 0x15c) << 4 | (uint)*(byte *)(lVar4 + 0x15d));
                }
                else {
                  bVar14 = bVar7 == 0x11;
                }
                if (!bVar14) {
                  pcVar11 = "JPEG compressed data indicates unexpected subsampling values";
                  goto LAB_1454c014f;
                }
              }
            }
            else if (uVar10 == 0) {
              bVar8 = bVar7 & 0xf;
              bVar7 = bVar7 >> 4;
              *(byte *)(lVar4 + 0x15c) = bVar7;
              *(byte *)(lVar4 + 0x15d) = bVar8;
              if (((((bVar7 - 1 & 0xfc) != 0) || (bVar7 == 3)) || ((bVar8 - 1 & 0xfc) != 0)) ||
                 (bVar8 == 3)) {
                *(undefined1 *)(lVar4 + 0x15e) = 1;
              }
            }
            else if (bVar7 != 0x11) {
              *(undefined1 *)(lVar4 + 0x15e) = 1;
            }
            if ((*(short *)(lVar4 + 0x660) == 0) && (iVar6 = FUN_1454c0990(lVar4), iVar6 == 0)) {
              return 0;
            }
            uVar3 = **(undefined1 **)(lVar4 + 0x668);
            *(short *)(lVar4 + 0x660) = *(short *)(lVar4 + 0x660) + -1;
            *(undefined1 **)(lVar4 + 0x668) = *(undefined1 **)(lVar4 + 0x668) + 1;
            if (*(char *)(lVar4 + 0x159) == '\0') {
              *(undefined1 *)(lVar4 + 0x226 + uVar9) = uVar3;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar12);
        }
        if (*(char *)(lVar4 + 0x159) == '\0') {
          *(undefined1 *)(lVar4 + 0x213) = 1;
        }
        return 1;
      }
      bVar14 = *(char *)(lVar4 + 0x159) == '\0';
    }
    else {
      bVar14 = cVar2 == '\0';
    }
  }
  if (!bVar14) {
    return 0;
  }
  pcVar11 = "Corrupt SOF marker in JPEG data";
LAB_1454c014f:
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamSof",pcVar11);
  return 0;
}



// FUNCTION 1454c0320 FUN_1454c0320 body=420 status=ok
// SIG undefined FUN_1454c0320(void)

undefined8 FUN_1454c0320(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  short local_res8 [4];
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  if (*(char *)(lVar3 + 0x213) == '\0') {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamSos",
                  "Corrupt SOS marker in JPEG data");
    return 0;
  }
  iVar4 = FUN_1454c0b70(lVar3,local_res8);
  if (iVar4 != 0) {
    if (local_res8[0] == (ushort)((ushort)*(byte *)(lVar3 + 0x146) * 2 + 6)) {
      if ((*(short *)(lVar3 + 0x660) == 0) && (iVar4 = FUN_1454c0990(lVar3), iVar4 == 0)) {
        return 0;
      }
      cVar1 = **(char **)(lVar3 + 0x668);
      *(short *)(lVar3 + 0x660) = *(short *)(lVar3 + 0x660) + -1;
      *(char **)(lVar3 + 0x668) = *(char **)(lVar3 + 0x668) + 1;
      if (cVar1 == *(char *)(lVar3 + 0x146)) {
        uVar6 = 0;
        if (*(char *)(lVar3 + 0x146) != '\0') {
          do {
            if ((*(short *)(lVar3 + 0x660) == 0) && (iVar4 = FUN_1454c0990(lVar3), iVar4 == 0)) {
              return 0;
            }
            uVar2 = **(undefined1 **)(lVar3 + 0x668);
            *(short *)(lVar3 + 0x660) = *(short *)(lVar3 + 0x660) + -1;
            *(undefined1 **)(lVar3 + 0x668) = *(undefined1 **)(lVar3 + 0x668) + 1;
            *(undefined1 *)((ulonglong)(*(byte *)(lVar3 + 0x145) + uVar6) + 0x229 + lVar3) = uVar2;
            if ((*(short *)(lVar3 + 0x660) == 0) && (iVar4 = FUN_1454c0990(lVar3), iVar4 == 0)) {
              return 0;
            }
            bVar5 = (char)uVar6 + 1;
            uVar2 = **(undefined1 **)(lVar3 + 0x668);
            *(short *)(lVar3 + 0x660) = *(short *)(lVar3 + 0x660) + -1;
            *(undefined1 **)(lVar3 + 0x668) = *(undefined1 **)(lVar3 + 0x668) + 1;
            *(undefined1 *)((ulonglong)(*(byte *)(lVar3 + 0x145) + uVar6) + 0x22c + lVar3) = uVar2;
            uVar6 = (uint)bVar5;
          } while (bVar5 < *(byte *)(lVar3 + 0x146));
        }
        FUN_1454c0e90(lVar3,3);
        return 1;
      }
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecStreamSos",
                  "Corrupt SOS marker in JPEG data");
  }
  return 0;
}



// FUNCTION 1454c04d0 FUN_1454c04d0 body=595 status=ok
// SIG undefined FUN_1454c04d0(void)

void FUN_1454c04d0(longlong param_1)

{
  longlong lVar1;
  void *_Memory;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *_Memory_00;
  byte *pbVar6;
  longlong lVar7;
  byte bVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  byte local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(longlong *)(lVar1 + 0x180) == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecTablesDcTable",
                  "Missing JPEG tables");
  }
  else {
    bVar8 = 0;
    *(undefined1 *)(lVar1 + 0x650) = 0;
    if (*(char *)(lVar1 + 0x144) != '\0') {
      do {
        uVar10 = (ulonglong)bVar8;
        lVar7 = *(longlong *)(lVar1 + 0x180 + uVar10 * 8);
        if ((lVar7 == 0) || ((bVar8 != 0 && (lVar7 == *(longlong *)(lVar1 + 0x178 + uVar10 * 8)))))
        {
          cVar3 = *(char *)((ulonglong)bVar8 + 0x22b + lVar1);
        }
        else {
          bVar2 = 0;
          if (0 < (int)(bVar8 - 1)) {
            do {
              if (lVar7 == *(longlong *)(lVar1 + 0x180 + (ulonglong)bVar2 * 8)) {
                pcVar9 = "Corrupt JpegDcTables tag value";
                goto LAB_1454c0714;
              }
              bVar2 = bVar2 + 1;
            } while ((int)(uint)bVar2 < (int)(bVar8 - 1));
          }
          (**(code **)(param_1 + 0x450))(*(undefined8 *)(param_1 + 0x438),lVar7,0);
          iVar4 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),local_48,0x10);
          if (iVar4 != 0x10) break;
          iVar4 = 0;
          pbVar6 = local_48;
          lVar7 = 0x10;
          do {
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            iVar4 = iVar4 + (uint)bVar2;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          _Memory_00 = (int *)FUN_144e92f50(iVar4 + 0x19);
          if (_Memory_00 == (int *)0x0) {
            pcVar9 = "Out of memory";
LAB_1454c0714:
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecTablesDcTable",
                          pcVar9);
            break;
          }
          *_Memory_00 = iVar4 + 0x19;
          *(char *)((longlong)_Memory_00 + 6) = (char)((uint)(iVar4 + 0x13) >> 8);
          *(undefined2 *)(_Memory_00 + 1) = 0xc4ff;
          *(char *)((longlong)_Memory_00 + 7) = (char)iVar4 + '\x13';
          pbVar6 = local_48;
          *(byte *)(_Memory_00 + 2) = bVar8;
          lVar7 = 0x10;
          do {
            pbVar6[(longlong)_Memory_00 + (9 - (longlong)local_48)] = *pbVar6;
            pbVar6 = pbVar6 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          iVar5 = (**(code **)(param_1 + 0x440))
                            (*(undefined8 *)(param_1 + 0x438),(longlong)_Memory_00 + 0x19,iVar4);
          if (iVar5 != iVar4) {
            free(_Memory_00);
            break;
          }
          _Memory = *(void **)(lVar1 + 0x1d0 + uVar10 * 8);
          if (_Memory != (void *)0x0) {
            free(_Memory);
          }
          *(int **)(lVar1 + 0x1d0 + uVar10 * 8) = _Memory_00;
          cVar3 = bVar8 << 4;
        }
        bVar8 = bVar8 + 1;
        *(char *)(uVar10 + 0x22c + lVar1) = cVar3;
      } while (bVar8 < *(byte *)(lVar1 + 0x144));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1454c0730 FUN_1454c0730 body=598 status=ok
// SIG undefined FUN_1454c0730(void)

void FUN_1454c0730(longlong param_1)

{
  longlong lVar1;
  void *_Memory;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *_Memory_00;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  char *pcVar9;
  undefined1 auStack_68 [32];
  byte local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(longlong *)(lVar1 + 0x198) == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecTablesAcTable",
                  "Missing JPEG tables");
  }
  else {
    bVar8 = 0;
    *(undefined1 *)(lVar1 + 0x650) = 0;
    if (*(char *)(lVar1 + 0x144) != '\0') {
      do {
        uVar7 = (ulonglong)bVar8;
        lVar6 = *(longlong *)(lVar1 + 0x198 + uVar7 * 8);
        if ((lVar6 == 0) || ((bVar8 != 0 && (lVar6 == *(longlong *)(lVar1 + 400 + uVar7 * 8))))) {
          pbVar5 = (byte *)(lVar1 + 0x22c + uVar7);
          *pbVar5 = *pbVar5 | *(byte *)((ulonglong)bVar8 + 0x22b + lVar1) & 0xf;
        }
        else {
          bVar2 = 0;
          if (0 < (int)(bVar8 - 1)) {
            do {
              if (lVar6 == *(longlong *)(lVar1 + 0x198 + (ulonglong)bVar2 * 8)) {
                pcVar9 = "Corrupt JpegAcTables tag value";
                goto LAB_1454c0977;
              }
              bVar2 = bVar2 + 1;
            } while ((int)(uint)bVar2 < (int)(bVar8 - 1));
          }
          (**(code **)(param_1 + 0x450))(*(undefined8 *)(param_1 + 0x438),lVar6,0);
          iVar3 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),local_48,0x10);
          if (iVar3 != 0x10) break;
          iVar3 = 0;
          pbVar5 = local_48;
          lVar6 = 0x10;
          do {
            bVar2 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            iVar3 = iVar3 + (uint)bVar2;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          _Memory_00 = (int *)FUN_144e92f50(iVar3 + 0x19);
          if (_Memory_00 == (int *)0x0) {
            pcVar9 = "Out of memory";
LAB_1454c0977:
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"OJPEGReadHeaderInfoSecTablesAcTable",
                          pcVar9);
            break;
          }
          *_Memory_00 = iVar3 + 0x19;
          *(char *)((longlong)_Memory_00 + 6) = (char)((uint)(iVar3 + 0x13) >> 8);
          *(undefined2 *)(_Memory_00 + 1) = 0xc4ff;
          *(char *)((longlong)_Memory_00 + 7) = (char)iVar3 + '\x13';
          *(byte *)(_Memory_00 + 2) = bVar8 | 0x10;
          pbVar5 = local_48;
          lVar6 = 0x10;
          do {
            pbVar5[(longlong)_Memory_00 + (9 - (longlong)local_48)] = *pbVar5;
            pbVar5 = pbVar5 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          iVar4 = (**(code **)(param_1 + 0x440))
                            (*(undefined8 *)(param_1 + 0x438),(longlong)_Memory_00 + 0x19,iVar3);
          if (iVar4 != iVar3) {
            free(_Memory_00);
            break;
          }
          _Memory = *(void **)(lVar1 + 0x1f0 + uVar7 * 8);
          if (_Memory != (void *)0x0) {
            free(_Memory);
          }
          *(int **)(lVar1 + 0x1f0 + uVar7 * 8) = _Memory_00;
          pbVar5 = (byte *)(lVar1 + 0x22c + uVar7);
          *pbVar5 = *pbVar5 | bVar8;
        }
        bVar8 = bVar8 + 1;
      } while (bVar8 < *(byte *)(lVar1 + 0x144));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1454c0990 FUN_1454c0990 body=479 status=ok
// SIG undefined FUN_1454c0990(void)

undefined8 FUN_1454c0990(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int local_res8 [2];
  
  uVar4 = param_1[0xcb];
  do {
    if (uVar4 != 0) {
      if ((char)param_1[0xca] == '\0') {
        (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[0xc9],0);
        uVar4 = param_1[0xcb];
        *(undefined1 *)(param_1 + 0xca) = 1;
      }
      uVar5 = 0x800;
      if (uVar4 < 0x800) {
        uVar5 = uVar4 & 0xffff;
      }
      uVar4 = (**(code **)(*param_1 + 0x440))
                        (*(undefined8 *)(*param_1 + 0x438),param_1 + 0xce,uVar5);
      if (uVar4 == 0) {
        return 0;
      }
      param_1[0xcb] = param_1[0xcb] - (uVar4 & 0xffff);
      param_1[0xc9] = param_1[0xc9] + (uVar4 & 0xffff);
      *(short *)(param_1 + 0xcc) = (short)uVar4;
      param_1[0xcd] = (longlong)(param_1 + 0xce);
      return 1;
    }
    iVar1 = (int)param_1[199];
    *(undefined1 *)(param_1 + 0xca) = 0;
    if (iVar1 == 0) {
      if (param_1[0x29] != 0) {
        param_1[0xc9] = param_1[0x29];
        param_1[0xcb] = param_1[0x2a];
      }
      *(undefined4 *)(param_1 + 199) = 1;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 199) = 2;
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      if (*(int *)((longlong)param_1 + 0x63c) == (int)param_1[200]) {
        *(undefined4 *)(param_1 + 199) = 3;
      }
      else {
        local_res8[0] = 0;
        lVar3 = FUN_144b7c6f0(*param_1,*(int *)((longlong)param_1 + 0x63c),local_res8);
        param_1[0xc9] = lVar3;
        if (local_res8[0] != 0) {
          return 0;
        }
        if (lVar3 != 0) {
          uVar4 = FUN_144b7c7b0(*param_1,*(undefined4 *)((longlong)param_1 + 0x63c),local_res8);
          if (local_res8[0] != 0) {
            return 0;
          }
          uVar5 = param_1[0xc9];
          uVar2 = param_1[0x25];
          if (uVar2 <= uVar5) {
            *(int *)((longlong)param_1 + 0x63c) = *(int *)((longlong)param_1 + 0x63c) + 1;
            param_1[0xc9] = 0;
            goto LAB_1454c0ac3;
          }
          if (((uVar4 == 0) || (param_1[0xcb] = uVar4, ~uVar4 < uVar5)) || (uVar2 < uVar5 + uVar4))
          {
            param_1[0xcb] = uVar2 - uVar5;
          }
        }
        *(int *)((longlong)param_1 + 0x63c) = *(int *)((longlong)param_1 + 0x63c) + 1;
      }
    }
LAB_1454c0ac3:
    uVar4 = param_1[0xcb];
  } while( true );
}



// FUNCTION 1454c0b70 FUN_1454c0b70 body=170 status=ok
// SIG undefined FUN_1454c0b70(void)

undefined8 FUN_1454c0b70(longlong param_1,ushort *param_2)

{
  byte bVar1;
  int iVar2;
  
  if ((*(short *)(param_1 + 0x660) == 0) && (iVar2 = FUN_1454c0990(), iVar2 == 0)) {
    return 0;
  }
  bVar1 = **(byte **)(param_1 + 0x668);
  *(short *)(param_1 + 0x660) = *(short *)(param_1 + 0x660) + -1;
  *(byte **)(param_1 + 0x668) = *(byte **)(param_1 + 0x668) + 1;
  *param_2 = (ushort)bVar1 << 8;
  if ((*(short *)(param_1 + 0x660) == 0) && (iVar2 = FUN_1454c0990(param_1), iVar2 == 0)) {
    return 0;
  }
  bVar1 = **(byte **)(param_1 + 0x668);
  *(short *)(param_1 + 0x660) = *(short *)(param_1 + 0x660) + -1;
  *(byte **)(param_1 + 0x668) = *(byte **)(param_1 + 0x668) + 1;
  *param_2 = *param_2 | (ushort)bVar1;
  return 1;
}



// FUNCTION 1454c0c20 FUN_1454c0c20 body=609 status=ok
// SIG undefined FUN_1454c0c20(void)

undefined8 FUN_1454c0c20(longlong *param_1,ushort param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  short sVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 uVar8;
  int local_res10 [2];
  
  sVar5 = (short)param_1[0xcc];
  do {
    if (sVar5 == 0) {
      uVar7 = param_1[0xcb];
      while (uVar7 == 0) {
        iVar1 = (int)param_1[199];
        *(undefined1 *)(param_1 + 0xca) = 0;
        if (iVar1 == 0) {
          if (param_1[0x29] != 0) {
            param_1[0xc9] = param_1[0x29];
            param_1[0xcb] = param_1[0x2a];
          }
          *(undefined4 *)(param_1 + 199) = 1;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(param_1 + 199) = 2;
        }
        else {
          if (iVar1 != 2) {
            return 0;
          }
          if (*(int *)((longlong)param_1 + 0x63c) == (int)param_1[200]) {
            *(undefined4 *)(param_1 + 199) = 3;
          }
          else {
            local_res10[0] = 0;
            lVar6 = FUN_144b7c6f0(*param_1,*(int *)((longlong)param_1 + 0x63c),local_res10);
            param_1[0xc9] = lVar6;
            if (local_res10[0] != 0) {
              return 0;
            }
            if (lVar6 != 0) {
              uVar7 = FUN_144b7c7b0(*param_1,*(undefined4 *)((longlong)param_1 + 0x63c),local_res10)
              ;
              if (local_res10[0] != 0) {
                return 0;
              }
              uVar2 = param_1[0xc9];
              uVar3 = param_1[0x25];
              if (uVar3 <= uVar2) {
                *(int *)((longlong)param_1 + 0x63c) = *(int *)((longlong)param_1 + 0x63c) + 1;
                param_1[0xc9] = 0;
                goto LAB_1454c0d86;
              }
              if (((uVar7 == 0) || (param_1[0xcb] = uVar7, ~uVar7 < uVar2)) ||
                 (uVar3 < uVar2 + uVar7)) {
                param_1[0xcb] = uVar3 - uVar2;
              }
            }
            *(int *)((longlong)param_1 + 0x63c) = *(int *)((longlong)param_1 + 0x63c) + 1;
          }
        }
LAB_1454c0d86:
        uVar7 = param_1[0xcb];
      }
      if ((char)param_1[0xca] == '\0') {
        (**(code **)(*param_1 + 0x450))(*(undefined8 *)(*param_1 + 0x438),param_1[0xc9],0);
        uVar7 = param_1[0xcb];
        *(undefined1 *)(param_1 + 0xca) = 1;
      }
      uVar8 = 0x800;
      if (uVar7 < 0x800) {
        uVar8 = (short)uVar7;
      }
      uVar7 = (**(code **)(*param_1 + 0x440))
                        (*(undefined8 *)(*param_1 + 0x438),param_1 + 0xce,uVar8);
      if (uVar7 == 0) {
        return 0;
      }
      *(short *)(param_1 + 0xcc) = (short)uVar7;
      param_1[0xcb] = param_1[0xcb] - (uVar7 & 0xffff);
      param_1[0xc9] = param_1[0xc9] + (uVar7 & 0xffff);
      param_1[0xcd] = (longlong)(param_1 + 0xce);
    }
    uVar4 = *(ushort *)(param_1 + 0xcc);
    if (param_2 <= *(ushort *)(param_1 + 0xcc)) {
      uVar4 = param_2;
    }
    FUN_144e92fa0(param_3,param_1[0xcd]);
    param_3 = param_3 + (ulonglong)uVar4;
    param_1[0xcd] = param_1[0xcd] + (ulonglong)uVar4;
    sVar5 = (short)param_1[0xcc] - uVar4;
    *(short *)(param_1 + 0xcc) = sVar5;
    param_2 = param_2 - uVar4;
    if (param_2 == 0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 1454c0e90 FUN_1454c0e90 body=108 status=ok
// SIG undefined FUN_1454c0e90(void)

void FUN_1454c0e90(longlong param_1,ushort param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x660);
  uVar3 = param_2;
  if (uVar2 < param_2) {
    uVar3 = uVar2;
  }
  *(longlong *)(param_1 + 0x668) = *(longlong *)(param_1 + 0x668) + (ulonglong)uVar3;
  *(ushort *)(param_1 + 0x660) = uVar2 - uVar3;
  param_2 = param_2 - uVar3;
  if (param_2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x658);
    *(undefined1 *)(param_1 + 0x650) = 0;
    uVar2 = (ushort)uVar1;
    if (param_2 <= uVar1) {
      uVar2 = param_2;
    }
    *(longlong *)(param_1 + 0x648) = *(longlong *)(param_1 + 0x648) + (ulonglong)uVar2;
    *(ulonglong *)(param_1 + 0x658) = uVar1 - uVar2;
  }
  return;
}



// FUNCTION 1454c0f00 FUN_1454c0f00 body=1628 status=ok
// SIG undefined FUN_1454c0f00(void)

undefined8 FUN_1454c0f00(longlong param_1,longlong *param_2,uint *param_3)

{
  undefined1 *puVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  *param_3 = 0;
  do {
    switch(*(undefined4 *)(lVar3 + 0xe70)) {
    case 0:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      *(undefined1 *)(lVar4 + 0xe75) = 0xd8;
      *(undefined1 *)(lVar4 + 0xe74) = 0xff;
      *param_3 = 2;
      *param_2 = lVar4 + 0xe74;
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 1:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1b0) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1b0) + 4;
        *param_3 = **(int **)(lVar4 + 0x1b0) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 2:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1b8) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1b8) + 4;
        *param_3 = **(int **)(lVar4 + 0x1b8) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 3:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1c0) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1c0) + 4;
        *param_3 = **(int **)(lVar4 + 0x1c0) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 4:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1c8) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1c8) + 4;
        *param_3 = **(int **)(lVar4 + 0x1c8) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 5:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1d0) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1d0) + 4;
        *param_3 = **(int **)(lVar4 + 0x1d0) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 6:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1d8) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1d8) + 4;
        *param_3 = **(int **)(lVar4 + 0x1d8) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 7:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1e0) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1e0) + 4;
        *param_3 = **(int **)(lVar4 + 0x1e0) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 8:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1e8) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1e8) + 4;
        *param_3 = **(int **)(lVar4 + 0x1e8) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 9:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1f0) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1f0) + 4;
        *param_3 = **(int **)(lVar4 + 0x1f0) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 10:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x1f8) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x1f8) + 4;
        *param_3 = **(int **)(lVar4 + 0x1f8) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 0xb:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x200) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x200) + 4;
        *param_3 = **(int **)(lVar4 + 0x200) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 0xc:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if (*(longlong *)(lVar4 + 0x208) != 0) {
        *param_2 = *(longlong *)(lVar4 + 0x208) + 4;
        *param_3 = **(int **)(lVar4 + 0x208) - 4;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 0xd:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      sVar2 = *(short *)(lVar4 + 0x210);
      if (sVar2 != 0) {
        *(undefined2 *)(lVar4 + 0xe75) = 0xdd;
        *(undefined1 *)(lVar4 + 0xe74) = 0xff;
        *(undefined1 *)(lVar4 + 0xe77) = 4;
        *(char *)(lVar4 + 0xe79) = (char)sVar2;
        *(char *)(lVar4 + 0xe78) = (char)((ushort)sVar2 >> 8);
        *param_3 = 6;
        *param_2 = lVar4 + 0xe74;
      }
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 0xe:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      cVar6 = *(char *)(lVar4 + 0x146);
      *(undefined1 *)(lVar4 + 0xe75) = *(undefined1 *)(lVar4 + 0x214);
      *(undefined1 *)(lVar4 + 0xe74) = 0xff;
      *(undefined1 *)(lVar4 + 0xe76) = 0;
      *(undefined1 *)(lVar4 + 0xe78) = 8;
      *(char *)(lVar4 + 0xe77) = cVar6 * '\x03' + '\b';
      *(char *)(lVar4 + 0xe79) = (char)((uint)*(undefined4 *)(lVar4 + 0x21c) >> 8);
      *(char *)(lVar4 + 0xe7a) = (char)*(undefined4 *)(lVar4 + 0x21c);
      *(char *)(lVar4 + 0xe7b) = (char)((uint)*(undefined4 *)(lVar4 + 0x218) >> 8);
      *(char *)(lVar4 + 0xe7c) = (char)*(undefined4 *)(lVar4 + 0x218);
      *(char *)(lVar4 + 0xe7d) = cVar6;
      bVar7 = 0;
      uVar9 = 0;
      if (cVar6 != '\0') {
        do {
          bVar8 = (char)uVar9 + 1;
          *(undefined1 *)((ulonglong)(uVar9 * 3) + 0xe7e + lVar4) =
               *(undefined1 *)((ulonglong)(*(byte *)(lVar4 + 0x145) + uVar9) + 0x220 + lVar4);
          *(undefined1 *)((ulonglong)(uVar9 * 3) + 0xe7f + lVar4) =
               *(undefined1 *)((ulonglong)(*(byte *)(lVar4 + 0x145) + uVar9) + 0x223 + lVar4);
          *(undefined1 *)((ulonglong)((uVar9 + 4) * 3) + 0xe74 + lVar4) =
               *(undefined1 *)((ulonglong)(*(byte *)(lVar4 + 0x145) + uVar9) + 0x226 + lVar4);
          bVar7 = *(byte *)(lVar4 + 0x146);
          uVar9 = (uint)bVar8;
        } while (bVar8 < bVar7);
      }
      *param_3 = (uint)bVar7 * 3 + 10;
      *param_2 = lVar4 + 0xe74;
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 0xf:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      uVar9 = 0;
      cVar6 = *(char *)(lVar4 + 0x146);
      *(undefined1 *)(lVar4 + 0xe74) = 0xff;
      *(undefined2 *)(lVar4 + 0xe75) = 0xda;
      *(char *)(lVar4 + 0xe78) = cVar6;
      *(char *)(lVar4 + 0xe77) = (cVar6 + '\x03') * '\x02';
      bVar7 = 0;
      if (cVar6 != '\0') {
        do {
          bVar8 = (char)uVar9 + 1;
          *(undefined1 *)((ulonglong)(uVar9 * 2) + 0xe79 + lVar4) =
               *(undefined1 *)((ulonglong)(*(byte *)(lVar4 + 0x145) + uVar9) + 0x229 + lVar4);
          *(undefined1 *)((ulonglong)(uVar9 * 2 + 6) + 0xe74 + lVar4) =
               *(undefined1 *)((ulonglong)(*(byte *)(lVar4 + 0x145) + uVar9) + 0x22c + lVar4);
          bVar7 = *(byte *)(lVar4 + 0x146);
          uVar9 = (uint)bVar8;
        } while (bVar8 < bVar7);
      }
      *(undefined1 *)(lVar4 + 0xe79 + (ulonglong)bVar7 * 2) = 0;
      *(undefined1 *)(lVar4 + 0xe7a + (ulonglong)*(byte *)(lVar4 + 0x146) * 2) = 0x3f;
      *(undefined1 *)(lVar4 + 0xe7b + (ulonglong)*(byte *)(lVar4 + 0x146) * 2) = 0;
      *param_3 = (uint)*(byte *)(lVar4 + 0x146) * 2 + 8;
      *param_2 = lVar4 + 0xe74;
      *(int *)(lVar4 + 0xe70) = *(int *)(lVar4 + 0xe70) + 1;
      break;
    case 0x10:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      if ((*(short *)(lVar4 + 0x660) == 0) && (iVar5 = FUN_1454c0990(lVar4), iVar5 == 0)) {
        return 0;
      }
      *param_3 = (uint)*(ushort *)(lVar4 + 0x660);
      *param_2 = *(longlong *)(lVar4 + 0x668);
      *(undefined2 *)(lVar4 + 0x660) = 0;
      if (*(longlong *)(lVar4 + 0x658) == 0) {
        if (*(int *)(lVar4 + 0x638) == 2) {
          if (*(uint *)(lVar4 + 0x640) <= *(uint *)(lVar4 + 0x63c)) goto LAB_1454c1495;
          *(undefined4 *)(lVar4 + 0xe70) = 0x11;
        }
        else if (*(int *)(lVar4 + 0x638) == 3) {
LAB_1454c1495:
          *(undefined4 *)(lVar4 + 0xe70) = 0x12;
        }
      }
      break;
    case 0x11:
      lVar4 = *(longlong *)(param_1 + 0x3d0);
      *(undefined1 *)(lVar4 + 0xe74) = 0xff;
      cVar6 = *(char *)(lVar4 + 0x212) + '\x01';
      *(char *)(lVar4 + 0xe75) = *(char *)(lVar4 + 0x212) + -0x30;
      if (cVar6 == '\b') {
        cVar6 = '\0';
      }
      *(char *)(lVar4 + 0x212) = cVar6;
      *param_3 = 2;
      *param_2 = lVar4 + 0xe74;
      *(undefined4 *)(lVar4 + 0xe70) = 0x10;
      break;
    case 0x12:
      puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0x3d0) + 0xe74);
      *(undefined1 *)(*(longlong *)(param_1 + 0x3d0) + 0xe75) = 0xd9;
      *puVar1 = 0xff;
      *param_3 = 2;
      *param_2 = (longlong)puVar1;
    }
    if (*param_3 != 0) {
      return 1;
    }
  } while( true );
}



// FUNCTION 1454c15b0 FUN_1454c15b0 body=63 status=ok
// SIG undefined FUN_1454c15b0(void)

undefined8 FUN_1454c15b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x10,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b6b0(param_2,0x3e,600);
  return 1;
}



// FUNCTION 1454c15f0 FUN_1454c15f0 body=62 status=ok
// SIG undefined FUN_1454c15f0(void)

undefined8 FUN_1454c15f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x10,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8b840(param_2,param_3);
  return 1;
}



// FUNCTION 1454c1630 FUN_1454c1630 body=52 status=ok
// SIG undefined FUN_1454c1630(void)

undefined8 FUN_1454c1630(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x10,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8d640(param_2);
  return 1;
}



// FUNCTION 1454c1670 FUN_1454c1670 body=72 status=ok
// SIG undefined FUN_1454c1670(void)

undefined8 FUN_1454c1670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x10,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8d740(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 1454c16c0 FUN_1454c16c0 body=72 status=ok
// SIG undefined FUN_1454c16c0(void)

undefined8 FUN_1454c16c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_28 [40];
  
  iVar1 = __intrinsic_setjmp(param_1 + 0x10,auStack_28);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_144e8e040(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 1454c1710 FUN_1454c1710 body=25 status=ok
// SIG undefined FUN_1454c1710(void)

void FUN_1454c1710(longlong param_1)

{
                    /* WARNING: Subroutine does not return */
  longjmp((_JBTYPE *)(*(longlong *)(param_1 + 0x3d0) + 0x10),1);
}



// FUNCTION 1454c1730 FUN_1454c1730 body=92 status=ok
// SIG undefined FUN_1454c1730(void)

void FUN_1454c1730(longlong *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x18))(param_1,local_e8);
  FUN_144e94570(*(undefined8 *)(param_1[3] + 0x438),"LibJpeg",&DAT_149972340,local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_108);
}



// FUNCTION 1454c17a0 FUN_1454c17a0 body=85 status=ok
// SIG undefined FUN_1454c17a0(void)

void FUN_1454c17a0(longlong *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x18))(param_1,local_e8);
  FUN_144e92fd0(*(undefined8 *)(param_1[3] + 0x438),"LibJpeg",&DAT_149972340,local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_1454c1710(param_1[3]);
}



// FUNCTION 1454c1810 FUN_1454c1810 body=124 status=ok
// SIG undefined FUN_1454c1810(void)

undefined8 FUN_1454c1810(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint local_res8 [2];
  undefined8 local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_res10 = 0;
  local_res8[0] = 0;
  lVar2 = *(longlong *)(lVar1 + 0x3d0);
  iVar3 = FUN_1454c0f00(lVar1,&local_res10,local_res8);
  if (iVar3 != 0) {
    *(ulonglong *)(lVar2 + 0x5a8) = (ulonglong)local_res8[0];
    *(undefined8 *)(lVar2 + 0x5a0) = local_res10;
    return 1;
  }
  FUN_144e92fd0(*(undefined8 *)(lVar1 + 0x438),"LibJpeg","Premature end of JPEG data");
                    /* WARNING: Subroutine does not return */
  FUN_1454c1710(lVar1);
}



// FUNCTION 1454c1890 FUN_1454c1890 body=44 status=ok
// SIG undefined FUN_1454c1890(void)

void FUN_1454c1890(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_144e92fd0(*(undefined8 *)(lVar1 + 0x438),"LibJpeg","Unexpected error");
                    /* WARNING: Subroutine does not return */
  FUN_1454c1710(lVar1);
}



// FUNCTION 1454c18c0 FUN_1454c18c0 body=44 status=ok
// SIG undefined FUN_1454c18c0(void)

void FUN_1454c18c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_144e92fd0(*(undefined8 *)(lVar1 + 0x438),"LibJpeg","Unexpected error");
                    /* WARNING: Subroutine does not return */
  FUN_1454c1710(lVar1);
}



// FUNCTION 1454c1900 FUN_1454c1900 body=379 status=ok
// SIG undefined FUN_1454c1900(void)

undefined8 FUN_1454c1900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  iVar1 = FUN_144e93e30(param_1,&DAT_149d88370,2);
  if (iVar1 == 0) {
    pcVar3 = "Merging Deflate codec-specific tags failed";
  }
  else {
    lVar2 = FUN_144e92f60(0xf8);
    *(longlong *)(param_1 + 0x3d0) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0xb0) = 0;
      *(undefined8 *)(lVar2 + 0xb8) = 0;
      *(undefined8 *)(lVar2 + 0xc0) = 0;
      *(undefined4 *)(lVar2 + 200) = 0;
      *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(param_1 + 0x490);
      *(undefined1 **)(param_1 + 0x490) = &LAB_1454c2250;
      *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(param_1 + 0x488);
      *(code **)(param_1 + 0x488) = FUN_1454c2110;
      *(undefined4 *)(lVar2 + 0xd8) = 0xffffffff;
      *(undefined8 *)(lVar2 + 0xdc) = 0;
      *(undefined1 **)(param_1 + 0x340) = &LAB_1454c1d10;
      *(code **)(param_1 + 0x368) = FUN_1454c1f10;
      *(code **)(param_1 + 0x348) = FUN_1454c1d20;
      *(code **)(param_1 + 0x370) = FUN_1454c1f80;
      *(code **)(param_1 + 0x350) = FUN_1454c1de0;
      *(code **)(param_1 + 0x380) = FUN_1454c1a80;
      *(code **)(param_1 + 0x390) = FUN_1454c1a80;
      *(code **)(param_1 + 0x3a0) = FUN_1454c1a80;
      *(code **)(param_1 + 0x378) = FUN_1454c1b90;
      *(code **)(param_1 + 0x388) = FUN_1454c1b90;
      *(code **)(param_1 + 0x398) = FUN_1454c1b90;
      *(code **)(param_1 + 0x3b8) = FUN_1454c2080;
      *(code **)(param_1 + 0x358) = FUN_1454c1e50;
      FUN_1455d5840(param_1);
      return 1;
    }
    pcVar3 = "No space for ZIP state block";
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitZIP",pcVar3);
  return 0;
}



// FUNCTION 1454c1a80 FUN_1454c1a80 body=264 status=ok
// SIG undefined FUN_1454c1a80(void)

undefined8 FUN_1454c1a80(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar1 + 0x80) = param_2;
  do {
    iVar4 = -1;
    if (param_3 < 0x100000000) {
      iVar4 = (int)param_3;
    }
    *(int *)(lVar1 + 0x88) = iVar4;
    iVar2 = FUN_144b4c2e0(lVar1 + 0x80,0);
    if (iVar2 != 0) {
      puVar5 = &DAT_14996de1b;
      if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(lVar1 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPEncode","Encoder error: %s",puVar5);
      return 0;
    }
    if (*(int *)(lVar1 + 0x98) == 0) {
      *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x3f0);
      iVar2 = FUN_144e94730(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 1000);
      uVar3 = 0xffffffff;
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x100000000) {
        uVar3 = (undefined4)*(ulonglong *)(param_1 + 0x3f0);
      }
      *(undefined4 *)(lVar1 + 0x98) = uVar3;
    }
    param_3 = param_3 - (uint)(iVar4 - *(int *)(lVar1 + 0x88));
  } while (0 < (longlong)param_3);
  return 1;
}



// FUNCTION 1454c1b90 FUN_1454c1b90 body=375 status=ok
// SIG undefined FUN_1454c1b90(void)

undefined8 FUN_1454c1b90(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x408);
  *(undefined8 *)(lVar1 + 0x90) = param_2;
  uVar4 = *(ulonglong *)(param_1 + 0x410);
  while( true ) {
    iVar5 = -1;
    if (uVar4 < 0x100000000) {
      iVar5 = (int)uVar4;
    }
    *(int *)(lVar1 + 0x88) = iVar5;
    iVar6 = -1;
    if (param_3 < (undefined1 *)0xffffffff) {
      iVar6 = (int)param_3;
    }
    *(int *)(lVar1 + 0x98) = iVar6;
    iVar2 = FUN_144b4e2a0(lVar1 + 0x80,1);
    uVar4 = *(longlong *)(param_1 + 0x410) - (ulonglong)(uint)(iVar5 - *(int *)(lVar1 + 0x88));
    *(ulonglong *)(param_1 + 0x410) = uVar4;
    param_3 = param_3 + -(ulonglong)(uint)(iVar6 - *(int *)(lVar1 + 0x98));
    if (iVar2 == 1) break;
    if (iVar2 == -3) {
      pcVar7 = "Decoding error at scanline %lu, %s";
      param_3 = &DAT_14996de1b;
      if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
        param_3 = *(undefined1 **)(lVar1 + 0xa0);
      }
      goto LAB_1454c1cb7;
    }
    if (iVar2 != 0) {
      puVar8 = &DAT_14996de1b;
      if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)(lVar1 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPDecode","ZLib error: %s",puVar8);
      return 0;
    }
    if ((longlong)param_3 < 1) break;
  }
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar1 + 0x80);
  }
  else {
    pcVar7 = "Not enough data at scanline %lu (short %llu bytes)";
LAB_1454c1cb7:
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPDecode",pcVar7,
                  *(undefined4 *)(param_1 + 0x2fc),param_3);
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1454c1d20 FUN_1454c1d20 body=185 status=ok
// SIG undefined FUN_1454c1d20(void)

undefined8 FUN_1454c1d20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if ((*(uint *)(lVar1 + 0xdc) & 2) == 0) {
    if ((*(uint *)(lVar1 + 0xdc) & 1) != 0) goto LAB_1454c1dbd;
  }
  else {
    FUN_144b4cd70(lVar1 + 0x80);
    *(undefined4 *)(lVar1 + 0xdc) = 0;
  }
  iVar2 = FUN_144b4fcd0(lVar1 + 0x80,"1.2.8",0x58);
  if (iVar2 != 0) {
    puVar3 = &DAT_14996de1b;
    if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(lVar1 + 0xa0);
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPSetupDecode",&DAT_149972340,puVar3);
    return 0;
  }
LAB_1454c1dbd:
  *(uint *)(lVar1 + 0xdc) = *(uint *)(lVar1 + 0xdc) | 1;
  return 1;
}



// FUNCTION 1454c1de0 FUN_1454c1de0 body=101 status=ok
// SIG undefined FUN_1454c1de0(void)

bool FUN_1454c1de0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if ((*(byte *)(lVar1 + 0xdc) & 1) == 0) {
    (**(code **)(param_1 + 0x348))();
  }
  *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 1000);
  uVar3 = 0xffffffff;
  if (*(ulonglong *)(param_1 + 0x410) < 0xffffffff) {
    uVar3 = (undefined4)*(ulonglong *)(param_1 + 0x410);
  }
  *(undefined4 *)(lVar1 + 0x88) = uVar3;
  iVar2 = FUN_144b4fbc0();
  return iVar2 == 0;
}



// FUNCTION 1454c1e50 FUN_1454c1e50 body=192 status=ok
// SIG undefined FUN_1454c1e50(void)

undefined8 FUN_1454c1e50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if ((*(byte *)(lVar1 + 0xdc) & 1) != 0) {
    FUN_144b4fb40(lVar1 + 0x80);
    *(undefined4 *)(lVar1 + 0xdc) = 0;
  }
  iVar2 = *(int *)(lVar1 + 0xd8);
  if (9 < *(int *)(lVar1 + 0xd8)) {
    iVar2 = 9;
  }
  iVar2 = deflateInit_(lVar1 + 0x80,iVar2,"1.2.8",0x58);
  if (iVar2 != 0) {
    puVar3 = &DAT_14996de1b;
    if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(lVar1 + 0xa0);
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPSetupEncode",&DAT_149972340,puVar3);
    return 0;
  }
  *(uint *)(lVar1 + 0xdc) = *(uint *)(lVar1 + 0xdc) | 2;
  return 1;
}



// FUNCTION 1454c1f10 FUN_1454c1f10 body=105 status=ok
// SIG undefined FUN_1454c1f10(void)

bool FUN_1454c1f10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(int *)(lVar1 + 0xdc) != 2) {
    (**(code **)(param_1 + 0x358))();
  }
  *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 1000);
  uVar3 = 0xffffffff;
  if (*(ulonglong *)(param_1 + 0x3f0) < 0x100000000) {
    uVar3 = (undefined4)*(ulonglong *)(param_1 + 0x3f0);
  }
  *(undefined4 *)(lVar1 + 0x98) = uVar3;
  iVar2 = FUN_144b4cea0(lVar1 + 0x80);
  return iVar2 == 0;
}



// FUNCTION 1454c1f80 FUN_1454c1f80 body=241 status=ok
// SIG undefined FUN_1454c1f80(void)

undefined8 FUN_1454c1f80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined4 *)(lVar1 + 0x88) = 0;
  do {
    iVar2 = FUN_144b4c2e0(lVar1 + 0x80,4);
    if ((iVar2 != 0) && (iVar2 != 1)) {
      puVar5 = &DAT_14996de1b;
      if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(lVar1 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPPostEncode","ZLib error: %s",puVar5);
      return 0;
    }
    if ((ulonglong)*(uint *)(lVar1 + 0x98) != *(ulonglong *)(param_1 + 0x3f0)) {
      *(ulonglong *)(param_1 + 0x410) =
           *(ulonglong *)(param_1 + 0x3f0) - (ulonglong)*(uint *)(lVar1 + 0x98);
      iVar3 = FUN_144e94730(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 1000);
      uVar4 = 0xffffffff;
      if (*(ulonglong *)(param_1 + 0x3f0) < 0x100000000) {
        uVar4 = (undefined4)*(ulonglong *)(param_1 + 0x3f0);
      }
      *(undefined4 *)(lVar1 + 0x98) = uVar4;
    }
  } while (iVar2 != 1);
  return 1;
}



// FUNCTION 1454c2080 FUN_1454c2080 body=140 status=ok
// SIG undefined FUN_1454c2080(void)

void FUN_1454c2080(longlong param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0x3d0);
  FUN_1455d5930();
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)((longlong)_Memory + 0xe8);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)((longlong)_Memory + 0xf0);
  if ((*(uint *)((longlong)_Memory + 0xdc) & 2) == 0) {
    if ((*(uint *)((longlong)_Memory + 0xdc) & 1) == 0) goto LAB_1454c20e7;
    FUN_144b4fb40((longlong)_Memory + 0x80);
  }
  else {
    FUN_144b4cd70((longlong)_Memory + 0x80);
  }
  *(undefined4 *)((longlong)_Memory + 0xdc) = 0;
LAB_1454c20e7:
  free(_Memory);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  FUN_144e93410(param_1);
  return;
}



// FUNCTION 1454c2110 FUN_1454c2110 body=318 status=ok
// SIG undefined FUN_1454c2110(void)

undefined8 FUN_1454c2110(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (param_2 == 0x10015) {
    iVar2 = *param_3;
    *(int *)(lVar1 + 0xd8) = iVar2;
    if ((iVar2 < -1) || (0xc < iVar2)) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPVSetField",
                    "Invalid ZipQuality value. Should be in [-1,%d] range",0xc);
      return 0;
    }
    if ((*(byte *)(lVar1 + 0xdc) & 2) != 0) {
      if (9 < iVar2) {
        iVar2 = 9;
      }
      iVar2 = FUN_144b4d040(lVar1 + 0x80,iVar2,0);
      if (iVar2 != 0) {
        puVar4 = &DAT_14996de1b;
        if (*(undefined1 **)(lVar1 + 0xa0) != (undefined1 *)0x0) {
          puVar4 = *(undefined1 **)(lVar1 + 0xa0);
        }
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPVSetField","ZLib error: %s",puVar4);
        return 0;
      }
    }
  }
  else {
    if (param_2 != 0x10022) {
                    /* WARNING: Could not recover jumptable at 0x0001454c2143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar1 + 0xf0))();
      return uVar3;
    }
    iVar2 = *param_3;
    *(int *)(lVar1 + 0xe0) = iVar2;
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPVSetField","Invalid DeflateCodec value.")
        ;
        return 0;
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"ZIPVSetField",
                    "DeflateCodec = DEFLATE_SUBCODEC_LIBDEFLATE unsupported in this build");
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1454c2290 FUN_1454c2290 body=440 status=ok
// SIG undefined FUN_1454c2290(void)

undefined8 FUN_1454c2290(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144e93e30(param_1,&DAT_149d88620,2);
  if (iVar1 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitPixarLog",
                  "Merging PixarLog codec-specific tags failed");
    return 0;
  }
  lVar2 = FUN_144e92f50(0x138);
  *(longlong *)(param_1 + 0x3d0) = lVar2;
  if (lVar2 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFInitPixarLog",
                  "No space for PixarLog state block");
    return 0;
  }
  FUN_144e92f90(lVar2,0,0x138);
  *(undefined4 *)(lVar2 + 0xf0) = 0xffffffff;
  *(undefined4 *)(lVar2 + 200) = 0;
  *(undefined1 **)(param_1 + 0x340) = &LAB_1454c4200;
  *(code **)(param_1 + 0x348) = FUN_1454c4210;
  *(code **)(param_1 + 0x350) = FUN_1454c4400;
  *(code **)(param_1 + 0x378) = FUN_1454c3d60;
  *(code **)(param_1 + 0x388) = FUN_1454c3d60;
  *(code **)(param_1 + 0x398) = FUN_1454c3d60;
  *(code **)(param_1 + 0x358) = FUN_1454c4470;
  *(code **)(param_1 + 0x368) = FUN_1454c45d0;
  *(code **)(param_1 + 0x370) = FUN_1454c5510;
  *(code **)(param_1 + 0x380) = FUN_1454c3aa0;
  *(code **)(param_1 + 0x390) = FUN_1454c3aa0;
  *(code **)(param_1 + 0x3a0) = FUN_1454c3aa0;
  *(undefined1 **)(param_1 + 0x3a8) = &LAB_1454c55f0;
  *(code **)(param_1 + 0x3b8) = FUN_1454c5610;
  *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(param_1 + 0x490);
  *(undefined1 **)(param_1 + 0x490) = &LAB_1454c58b0;
  *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(param_1 + 0x488);
  *(code **)(param_1 + 0x488) = FUN_1454c5710;
  *(undefined4 *)(lVar2 + 0xec) = 0;
  *(undefined4 *)(lVar2 + 0xf4) = 0xffffffff;
  FUN_1455d5840(param_1);
  FUN_1454c3430(lVar2);
  return 1;
}



// FUNCTION 1454c2450 FUN_1454c2450 body=616 status=ok
// SIG undefined FUN_1454c2450(void)

void FUN_1454c2450(ushort *param_1,int param_2,int param_3,undefined4 *param_4,longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      uVar10 = (ulonglong)(param_1[1] & 0x7ff);
      uVar12 = (ulonglong)(param_1[2] & 0x7ff);
      uVar13 = (ulonglong)(*param_1 & 0x7ff);
      uVar1 = *(undefined4 *)(param_5 + uVar12 * 4);
      uVar4 = *(undefined4 *)(param_5 + uVar13 * 4);
      param_4[1] = *(undefined4 *)(param_5 + uVar10 * 4);
      *param_4 = uVar4;
      param_4[2] = uVar1;
      if (0 < param_2 + -3) {
        uVar5 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar8 = param_1 + 2;
        puVar6 = param_4 + 2;
        do {
          uVar15 = (int)uVar13 + (uint)puVar8[1];
          uVar13 = (ulonglong)uVar15;
          uVar9 = (int)uVar10 + (uint)puVar8[2];
          uVar10 = (ulonglong)uVar9;
          uVar11 = (int)uVar12 + (uint)puVar8[3];
          uVar12 = (ulonglong)uVar11;
          uVar1 = *(undefined4 *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4);
          uVar4 = *(undefined4 *)(param_5 + (ulonglong)(uVar15 & 0x7ff) * 4);
          puVar6[2] = *(undefined4 *)(param_5 + (ulonglong)(uVar9 & 0x7ff) * 4);
          puVar6[3] = uVar1;
          puVar6[1] = uVar4;
          uVar5 = uVar5 - 1;
          puVar8 = puVar8 + 3;
          puVar6 = puVar6 + 3;
        } while (uVar5 != 0);
        return;
      }
    }
    else {
      iVar7 = param_3;
      if (param_3 == 4) {
        uVar10 = (ulonglong)(param_1[1] & 0x7ff);
        uVar12 = (ulonglong)(param_1[3] & 0x7ff);
        uVar5 = (ulonglong)(*param_1 & 0x7ff);
        uVar13 = (ulonglong)(param_1[2] & 0x7ff);
        uVar1 = *(undefined4 *)(param_5 + uVar13 * 4);
        uVar4 = *(undefined4 *)(param_5 + uVar10 * 4);
        uVar2 = *(undefined4 *)(param_5 + uVar12 * 4);
        *param_4 = *(undefined4 *)(param_5 + uVar5 * 4);
        param_4[2] = uVar1;
        param_4[1] = uVar4;
        param_4[3] = uVar2;
        if (0 < param_2 + -4) {
          uVar14 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar6 = param_4 + 2;
          puVar8 = param_1 + 2;
          do {
            uVar15 = (int)uVar5 + (uint)puVar8[2];
            uVar5 = (ulonglong)uVar15;
            uVar9 = (int)uVar10 + (uint)puVar8[3];
            uVar10 = (ulonglong)uVar9;
            uVar11 = (int)uVar13 + (uint)puVar8[4];
            uVar13 = (ulonglong)uVar11;
            uVar1 = *(undefined4 *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4);
            uVar11 = (int)uVar12 + (uint)puVar8[5];
            uVar12 = (ulonglong)uVar11;
            uVar4 = *(undefined4 *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4);
            uVar2 = *(undefined4 *)(param_5 + (ulonglong)(uVar15 & 0x7ff) * 4);
            puVar6[3] = *(undefined4 *)(param_5 + (ulonglong)(uVar9 & 0x7ff) * 4);
            puVar6[4] = uVar1;
            puVar6[5] = uVar4;
            puVar6[2] = uVar2;
            uVar14 = uVar14 - 1;
            puVar6 = puVar6 + 4;
            puVar8 = puVar8 + 4;
          } while (uVar14 != 0);
          return;
        }
      }
      else {
        do {
          uVar3 = *param_1;
          iVar7 = iVar7 + -1;
          param_1 = param_1 + 1;
          *param_4 = *(undefined4 *)(param_5 + (ulonglong)(uVar3 & 0x7ff) * 4);
          param_4 = param_4 + 1;
        } while (0 < iVar7);
        for (param_2 = param_2 - param_3; iVar7 = param_3, 0 < param_2; param_2 = param_2 - param_3)
        {
          do {
            iVar7 = iVar7 + -1;
            param_1[param_3] = param_1[param_3] + *param_1;
            uVar3 = *param_1;
            param_1 = param_1 + 1;
            *param_4 = *(undefined4 *)(param_5 + (ulonglong)(uVar3 & 0x7ff) * 4);
            param_4 = param_4 + 1;
          } while (0 < iVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c26c0 FUN_1454c26c0 body=986 status=ok
// SIG undefined FUN_1454c26c0(void)

void FUN_1454c26c0(ushort *param_1,int param_2,int param_3,undefined2 *param_4,longlong param_5)

{
  ushort *puVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      uVar10 = (ulonglong)(*param_1 & 0x7ff);
      uVar9 = (ulonglong)(param_1[1] & 0x7ff);
      uVar12 = (ulonglong)(param_1[2] & 0x7ff);
      fVar15 = *(float *)(param_5 + uVar10 * 4) * 2048.0;
      fVar13 = *(float *)(param_5 + uVar9 * 4) * 2048.0;
      fVar14 = *(float *)(param_5 + uVar12 * 4) * 2048.0;
      if (3071.0 <= fVar15) {
        uVar2 = 0xbff;
      }
      else {
        uVar2 = (undefined2)(int)fVar15;
      }
      *param_4 = uVar2;
      if (3071.0 <= fVar13) {
        uVar2 = 0xbff;
      }
      else {
        uVar2 = (undefined2)(int)fVar13;
      }
      param_4[1] = uVar2;
      if (3071.0 <= fVar14) {
        uVar2 = 0xbff;
      }
      else {
        uVar2 = (undefined2)(int)fVar14;
      }
      param_4[2] = uVar2;
      if (0 < param_2 + -3) {
        uVar3 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar7 = param_1 + 2;
        puVar6 = param_4 + 2;
        do {
          puVar1 = puVar7 + 3;
          uVar11 = (int)uVar10 + (uint)puVar7[1];
          uVar10 = (ulonglong)uVar11;
          uVar8 = (int)uVar9 + (uint)puVar7[2];
          uVar9 = (ulonglong)uVar8;
          fVar15 = *(float *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4) * 2048.0;
          uVar11 = (int)uVar12 + (uint)*puVar1;
          uVar12 = (ulonglong)uVar11;
          fVar13 = *(float *)(param_5 + (ulonglong)(uVar8 & 0x7ff) * 4) * 2048.0;
          fVar14 = *(float *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4) * 2048.0;
          if (3071.0 <= fVar15) {
            uVar2 = 0xbff;
          }
          else {
            uVar2 = (undefined2)(int)fVar15;
          }
          *(undefined2 *)((longlong)param_4 + (-4 - (longlong)param_1) + (longlong)puVar1) = uVar2;
          if (3071.0 <= fVar13) {
            uVar2 = 0xbff;
          }
          else {
            uVar2 = (undefined2)(int)fVar13;
          }
          puVar6[2] = uVar2;
          if (3071.0 <= fVar14) {
            uVar2 = 0xbff;
          }
          else {
            uVar2 = (undefined2)(int)fVar14;
          }
          puVar6[3] = uVar2;
          uVar3 = uVar3 - 1;
          puVar7 = puVar1;
          puVar6 = puVar6 + 3;
        } while (uVar3 != 0);
      }
    }
    else {
      iVar5 = param_3;
      if (param_3 == 4) {
        uVar12 = (ulonglong)(*param_1 & 0x7ff);
        uVar10 = (ulonglong)(param_1[1] & 0x7ff);
        uVar9 = (ulonglong)(param_1[2] & 0x7ff);
        uVar3 = (ulonglong)(param_1[3] & 0x7ff);
        fVar15 = *(float *)(param_5 + uVar12 * 4) * 2048.0;
        fVar13 = *(float *)(param_5 + uVar10 * 4) * 2048.0;
        fVar14 = *(float *)(param_5 + uVar9 * 4) * 2048.0;
        fVar16 = *(float *)(param_5 + uVar3 * 4) * 2048.0;
        if (3071.0 <= fVar15) {
          uVar2 = 0xbff;
        }
        else {
          uVar2 = (undefined2)(int)fVar15;
        }
        *param_4 = uVar2;
        if (3071.0 <= fVar13) {
          uVar2 = 0xbff;
        }
        else {
          uVar2 = (undefined2)(int)fVar13;
        }
        param_4[1] = uVar2;
        if (3071.0 <= fVar14) {
          uVar2 = 0xbff;
        }
        else {
          uVar2 = (undefined2)(int)fVar14;
        }
        param_4[2] = uVar2;
        if (3071.0 <= fVar16) {
          uVar2 = 0xbff;
        }
        else {
          uVar2 = (undefined2)(int)fVar16;
        }
        param_4[3] = uVar2;
        if (0 < param_2 + -4) {
          uVar4 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar6 = param_4 + 2;
          puVar7 = param_1 + 2;
          do {
            uVar8 = (int)uVar12 + (uint)puVar7[2];
            uVar12 = (ulonglong)uVar8;
            uVar11 = (int)uVar10 + (uint)puVar7[3];
            uVar10 = (ulonglong)uVar11;
            fVar15 = *(float *)(param_5 + (ulonglong)(uVar8 & 0x7ff) * 4) * 2048.0;
            uVar8 = (int)uVar9 + (uint)puVar7[4];
            uVar9 = (ulonglong)uVar8;
            fVar13 = *(float *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4) * 2048.0;
            uVar11 = (int)uVar3 + (uint)puVar7[5];
            uVar3 = (ulonglong)uVar11;
            fVar14 = *(float *)(param_5 + (ulonglong)(uVar8 & 0x7ff) * 4) * 2048.0;
            fVar16 = *(float *)(param_5 + (ulonglong)(uVar11 & 0x7ff) * 4) * 2048.0;
            if (3071.0 <= fVar15) {
              uVar2 = 0xbff;
            }
            else {
              uVar2 = (undefined2)(int)fVar15;
            }
            *(undefined2 *)((longlong)puVar7 + (longlong)param_4 + (4 - (longlong)param_1)) = uVar2;
            if (3071.0 <= fVar13) {
              uVar2 = 0xbff;
            }
            else {
              uVar2 = (undefined2)(int)fVar13;
            }
            puVar6[3] = uVar2;
            if (3071.0 <= fVar14) {
              uVar2 = 0xbff;
            }
            else {
              uVar2 = (undefined2)(int)fVar14;
            }
            puVar6[4] = uVar2;
            if (3071.0 <= fVar16) {
              uVar2 = 0xbff;
            }
            else {
              uVar2 = (undefined2)(int)fVar16;
            }
            puVar6[5] = uVar2;
            uVar4 = uVar4 - 1;
            puVar6 = puVar6 + 4;
            puVar7 = puVar7 + 4;
          } while (uVar4 != 0);
        }
      }
      else {
        do {
          iVar5 = iVar5 + -1;
          fVar13 = *(float *)(param_5 + (ulonglong)(*param_1 & 0x7ff) * 4) * 2048.0;
          if (3071.0 <= fVar13) {
            uVar2 = 0xbff;
          }
          else {
            uVar2 = (undefined2)(int)fVar13;
          }
          *param_4 = uVar2;
          param_1 = param_1 + 1;
          param_4 = param_4 + 1;
        } while (0 < iVar5);
        for (param_2 = param_2 - param_3; iVar5 = param_3, 0 < param_2; param_2 = param_2 - param_3)
        {
          do {
            iVar5 = iVar5 + -1;
            param_1[param_3] = param_1[param_3] + *param_1;
            fVar13 = *(float *)(param_5 + (ulonglong)(param_1[param_3] & 0x7ff) * 4) * 2048.0;
            if (3071.0 <= fVar13) {
              uVar2 = 0xbff;
            }
            else {
              uVar2 = (undefined2)(int)fVar13;
            }
            *param_4 = uVar2;
            param_1 = param_1 + 1;
            param_4 = param_4 + 1;
          } while (0 < iVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c2aa0 FUN_1454c2aa0 body=645 status=ok
// SIG undefined FUN_1454c2aa0(void)

void FUN_1454c2aa0(ushort *param_1,int param_2,int param_3,undefined2 *param_4,longlong param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      uVar7 = (ulonglong)(*param_1 & 0x7ff);
      *param_4 = *(undefined2 *)(param_5 + uVar7 * 2);
      uVar9 = (ulonglong)(param_1[1] & 0x7ff);
      param_4[1] = *(undefined2 *)(param_5 + uVar9 * 2);
      uVar8 = (ulonglong)(param_1[2] & 0x7ff);
      param_4[2] = *(undefined2 *)(param_5 + uVar8 * 2);
      if (0 < param_2 + -3) {
        uVar3 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar10 = param_1 + 2;
        puVar11 = param_4 + 2;
        do {
          puVar1 = puVar10 + 3;
          uVar6 = (int)uVar7 + (uint)puVar10[1];
          uVar7 = (ulonglong)uVar6;
          *(undefined2 *)((longlong)param_4 + (-4 - (longlong)param_1) + (longlong)puVar1) =
               *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
          uVar6 = (int)uVar9 + (uint)puVar10[2];
          uVar9 = (ulonglong)uVar6;
          puVar11[2] = *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
          uVar6 = (int)uVar8 + (uint)*puVar1;
          uVar8 = (ulonglong)uVar6;
          puVar11[3] = *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
          uVar3 = uVar3 - 1;
          puVar10 = puVar1;
          puVar11 = puVar11 + 3;
        } while (uVar3 != 0);
      }
    }
    else {
      iVar5 = param_3;
      if (param_3 == 4) {
        uVar9 = (ulonglong)(*param_1 & 0x7ff);
        *param_4 = *(undefined2 *)(param_5 + uVar9 * 2);
        uVar8 = (ulonglong)(param_1[1] & 0x7ff);
        param_4[1] = *(undefined2 *)(param_5 + uVar8 * 2);
        uVar7 = (ulonglong)(param_1[2] & 0x7ff);
        param_4[2] = *(undefined2 *)(param_5 + uVar7 * 2);
        uVar3 = (ulonglong)(param_1[3] & 0x7ff);
        param_4[3] = *(undefined2 *)(param_5 + uVar3 * 2);
        if (0 < param_2 + -4) {
          uVar4 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar10 = param_1 + 2;
          puVar11 = param_4 + 2;
          do {
            uVar6 = (int)uVar9 + (uint)puVar10[2];
            uVar9 = (ulonglong)uVar6;
            *(undefined2 *)((longlong)puVar10 + (longlong)param_4 + (4 - (longlong)param_1)) =
                 *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
            uVar6 = (int)uVar8 + (uint)puVar10[3];
            uVar8 = (ulonglong)uVar6;
            puVar11[3] = *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
            uVar6 = (int)uVar7 + (uint)puVar10[4];
            uVar7 = (ulonglong)uVar6;
            puVar11[4] = *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
            uVar6 = (int)uVar3 + (uint)puVar10[5];
            uVar3 = (ulonglong)uVar6;
            puVar11[5] = *(undefined2 *)(param_5 + (ulonglong)(uVar6 & 0x7ff) * 2);
            uVar4 = uVar4 - 1;
            puVar10 = puVar10 + 4;
            puVar11 = puVar11 + 4;
          } while (uVar4 != 0);
        }
      }
      else {
        do {
          uVar2 = *param_1;
          iVar5 = iVar5 + -1;
          param_1 = param_1 + 1;
          *param_4 = *(undefined2 *)(param_5 + (ulonglong)(uVar2 & 0x7ff) * 2);
          param_4 = param_4 + 1;
        } while (0 < iVar5);
        for (param_2 = param_2 - param_3; iVar5 = param_3, 0 < param_2; param_2 = param_2 - param_3)
        {
          do {
            iVar5 = iVar5 + -1;
            param_1[param_3] = param_1[param_3] + *param_1;
            uVar2 = *param_1;
            param_1 = param_1 + 1;
            *param_4 = *(undefined2 *)(param_5 + (ulonglong)(uVar2 & 0x7ff) * 2);
            param_4 = param_4 + 1;
          } while (0 < iVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c2d30 FUN_1454c2d30 body=528 status=ok
// SIG undefined FUN_1454c2d30(void)

void FUN_1454c2d30(ushort *param_1,int param_2,int param_3,ushort *param_4)

{
  ushort *puVar1;
  ulonglong uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      puVar4 = param_1 + 2;
      *param_4 = *param_1;
      param_4[1] = param_1[1];
      param_4[2] = *puVar4;
      uVar9 = *param_1;
      uVar8 = param_1[1];
      uVar6 = *puVar4;
      if (0 < param_2 + -3) {
        uVar2 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar5 = param_4 + 2;
        do {
          puVar1 = puVar4 + 3;
          uVar9 = uVar9 + puVar4[1];
          *(ushort *)((longlong)param_4 + (-4 - (longlong)param_1) + (longlong)puVar1) =
               uVar9 & 0x7ff;
          uVar8 = uVar8 + puVar4[2];
          puVar5[2] = uVar8 & 0x7ff;
          uVar6 = uVar6 + *puVar1;
          puVar5[3] = uVar6 & 0x7ff;
          uVar2 = uVar2 - 1;
          puVar5 = puVar5 + 3;
          puVar4 = puVar1;
        } while (uVar2 != 0);
      }
    }
    else {
      iVar3 = param_3;
      if (param_3 == 4) {
        puVar4 = param_1 + 2;
        *param_4 = *param_1;
        param_4[1] = param_1[1];
        param_4[2] = *puVar4;
        param_4[3] = param_1[3];
        uVar9 = *param_1;
        uVar8 = param_1[1];
        uVar6 = *puVar4;
        uVar7 = param_1[3];
        if (0 < param_2 + -4) {
          uVar2 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar5 = param_4 + 2;
          do {
            uVar9 = uVar9 + puVar4[2];
            *(ushort *)((longlong)puVar4 + (longlong)param_4 + (4 - (longlong)param_1)) =
                 uVar9 & 0x7ff;
            uVar8 = uVar8 + puVar4[3];
            puVar5[3] = uVar8 & 0x7ff;
            uVar6 = uVar6 + puVar4[4];
            puVar5[4] = uVar6 & 0x7ff;
            uVar7 = uVar7 + puVar4[5];
            puVar5[5] = uVar7 & 0x7ff;
            uVar2 = uVar2 - 1;
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 4;
          } while (uVar2 != 0);
        }
      }
      else {
        do {
          uVar9 = *param_1;
          iVar3 = iVar3 + -1;
          param_1 = param_1 + 1;
          *param_4 = uVar9 & 0x7ff;
          param_4 = param_4 + 1;
        } while (0 < iVar3);
        for (param_2 = param_2 - param_3; iVar3 = param_3, 0 < param_2; param_2 = param_2 - param_3)
        {
          do {
            iVar3 = iVar3 + -1;
            param_1[param_3] = param_1[param_3] + *param_1;
            uVar9 = *param_1;
            param_1 = param_1 + 1;
            *param_4 = uVar9 & 0x7ff;
            param_4 = param_4 + 1;
          } while (0 < iVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c2f40 FUN_1454c2f40 body=621 status=ok
// SIG undefined FUN_1454c2f40(void)

void FUN_1454c2f40(ushort *param_1,int param_2,int param_3,undefined1 *param_4,longlong param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      uVar7 = (ulonglong)(*param_1 & 0x7ff);
      *param_4 = *(undefined1 *)(uVar7 + param_5);
      uVar6 = (ulonglong)(param_1[1] & 0x7ff);
      param_4[1] = *(undefined1 *)(uVar6 + param_5);
      uVar5 = (ulonglong)(param_1[2] & 0x7ff);
      param_4[2] = *(undefined1 *)(uVar5 + param_5);
      if (0 < param_2 + -3) {
        uVar2 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar8 = param_1 + 2;
        puVar9 = param_4 + 2;
        do {
          uVar10 = (int)uVar7 + (uint)puVar8[1];
          uVar7 = (ulonglong)uVar10;
          puVar9[1] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
          uVar10 = (int)uVar6 + (uint)puVar8[2];
          uVar6 = (ulonglong)uVar10;
          puVar9[2] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
          uVar10 = (int)uVar5 + (uint)puVar8[3];
          uVar5 = (ulonglong)uVar10;
          puVar9[3] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
          uVar2 = uVar2 - 1;
          puVar8 = puVar8 + 3;
          puVar9 = puVar9 + 3;
        } while (uVar2 != 0);
        return;
      }
    }
    else {
      iVar4 = param_3;
      if (param_3 == 4) {
        uVar2 = (ulonglong)(*param_1 & 0x7ff);
        *param_4 = *(undefined1 *)(uVar2 + param_5);
        uVar7 = (ulonglong)(param_1[1] & 0x7ff);
        param_4[1] = *(undefined1 *)(uVar7 + param_5);
        uVar6 = (ulonglong)(param_1[2] & 0x7ff);
        param_4[2] = *(undefined1 *)(uVar6 + param_5);
        uVar5 = (ulonglong)(param_1[3] & 0x7ff);
        param_4[3] = *(undefined1 *)(uVar5 + param_5);
        if (0 < param_2 + -4) {
          uVar3 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar9 = param_4 + 2;
          puVar8 = param_1 + 2;
          do {
            uVar10 = (int)uVar2 + (uint)puVar8[2];
            uVar2 = (ulonglong)uVar10;
            puVar9[2] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
            uVar10 = (int)uVar7 + (uint)puVar8[3];
            uVar7 = (ulonglong)uVar10;
            puVar9[3] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
            uVar10 = (int)uVar6 + (uint)puVar8[4];
            uVar6 = (ulonglong)uVar10;
            puVar9[4] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
            uVar10 = (int)uVar5 + (uint)puVar8[5];
            uVar5 = (ulonglong)uVar10;
            puVar9[5] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
            uVar3 = uVar3 - 1;
            puVar9 = puVar9 + 4;
            puVar8 = puVar8 + 4;
          } while (uVar3 != 0);
          return;
        }
      }
      else {
        do {
          uVar1 = *param_1;
          iVar4 = iVar4 + -1;
          param_1 = param_1 + 1;
          *param_4 = *(undefined1 *)((ulonglong)(uVar1 & 0x7ff) + param_5);
          param_4 = param_4 + 1;
        } while (0 < iVar4);
        for (param_2 = param_2 - param_3; iVar4 = param_3, 0 < param_2; param_2 = param_2 - param_3)
        {
          do {
            iVar4 = iVar4 + -1;
            param_1[param_3] = param_1[param_3] + *param_1;
            uVar1 = *param_1;
            param_1 = param_1 + 1;
            *param_4 = *(undefined1 *)((ulonglong)(uVar1 & 0x7ff) + param_5);
            param_4 = param_4 + 1;
          } while (0 < iVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c31b0 FUN_1454c31b0 body=635 status=ok
// SIG undefined FUN_1454c31b0(void)

void FUN_1454c31b0(ushort *param_1,int param_2,int param_3,undefined1 *param_4,longlong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      *param_4 = 0;
      uVar14 = (ulonglong)(*param_1 & 0x7ff);
      uVar7 = (ulonglong)(param_1[1] & 0x7ff);
      uVar9 = (ulonglong)(param_1[2] & 0x7ff);
      uVar1 = *(undefined1 *)(uVar14 + param_5);
      uVar2 = *(undefined1 *)(uVar9 + param_5);
      param_4[2] = *(undefined1 *)(uVar7 + param_5);
      param_4[1] = uVar2;
      param_4[3] = uVar1;
      if (0 < param_2 + -3) {
        uVar11 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar6 = param_1 + 1;
        puVar12 = param_4 + 2;
        do {
          puVar12[2] = 0;
          uVar10 = (int)uVar9 + (uint)puVar6[4];
          uVar9 = (ulonglong)uVar10;
          uVar8 = (int)uVar7 + (uint)puVar6[3];
          uVar7 = (ulonglong)uVar8;
          uVar1 = *(undefined1 *)((ulonglong)(uVar8 & 0x7ff) + param_5);
          uVar8 = (int)uVar14 + (uint)puVar6[2];
          uVar14 = (ulonglong)uVar8;
          uVar2 = *(undefined1 *)((ulonglong)(uVar8 & 0x7ff) + param_5);
          puVar12[3] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
          puVar12[4] = uVar1;
          puVar12[5] = uVar2;
          uVar11 = uVar11 - 1;
          puVar6 = puVar6 + 3;
          puVar12 = puVar12 + 4;
        } while (uVar11 != 0);
      }
    }
    else {
      iVar5 = param_3;
      if (param_3 == 4) {
        uVar14 = (ulonglong)(param_1[1] & 0x7ff);
        uVar11 = (ulonglong)(*param_1 & 0x7ff);
        uVar7 = (ulonglong)(param_1[2] & 0x7ff);
        uVar9 = (ulonglong)(param_1[3] & 0x7ff);
        uVar1 = *(undefined1 *)(uVar14 + param_5);
        uVar2 = *(undefined1 *)(uVar11 + param_5);
        uVar3 = *(undefined1 *)(uVar9 + param_5);
        param_4[1] = *(undefined1 *)(uVar7 + param_5);
        param_4[2] = uVar1;
        *param_4 = uVar3;
        param_4[3] = uVar2;
        if (0 < param_2 + -4) {
          uVar13 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar6 = param_1 + 2;
          puVar12 = param_4 + 2;
          do {
            uVar10 = (int)uVar9 + (uint)puVar6[5];
            uVar9 = (ulonglong)uVar10;
            uVar8 = (int)uVar7 + (uint)puVar6[4];
            uVar7 = (ulonglong)uVar8;
            uVar1 = *(undefined1 *)((ulonglong)(uVar8 & 0x7ff) + param_5);
            uVar8 = (int)uVar14 + (uint)puVar6[3];
            uVar14 = (ulonglong)uVar8;
            uVar2 = *(undefined1 *)((ulonglong)(uVar8 & 0x7ff) + param_5);
            uVar8 = (int)uVar11 + (uint)puVar6[2];
            uVar11 = (ulonglong)uVar8;
            uVar3 = *(undefined1 *)((ulonglong)(uVar8 & 0x7ff) + param_5);
            puVar12[2] = *(undefined1 *)((ulonglong)(uVar10 & 0x7ff) + param_5);
            puVar12[3] = uVar1;
            puVar12[4] = uVar2;
            puVar12[5] = uVar3;
            uVar13 = uVar13 - 1;
            puVar6 = puVar6 + 4;
            puVar12 = puVar12 + 4;
          } while (uVar13 != 0);
        }
      }
      else {
        do {
          uVar4 = *param_1;
          iVar5 = iVar5 + -1;
          param_1 = param_1 + 1;
          *param_4 = *(undefined1 *)((ulonglong)(uVar4 & 0x7ff) + param_5);
          param_4 = param_4 + 1;
        } while (0 < iVar5);
        for (param_2 = param_2 - param_3; iVar5 = param_3, 0 < param_2; param_2 = param_2 - param_3)
        {
          do {
            iVar5 = iVar5 + -1;
            param_1[param_3] = param_1[param_3] + *param_1;
            uVar4 = *param_1;
            param_1 = param_1 + 1;
            *param_4 = *(undefined1 *)((ulonglong)(uVar4 & 0x7ff) + param_5);
            param_4 = param_4 + 1;
          } while (0 < iVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c3430 FUN_1454c3430 body=1639 status=ok
// SIG undefined FUN_1454c3430(void)

undefined8 FUN_1454c3430(longlong param_1)

{
  float fVar1;
  void *_Memory;
  undefined2 *_Memory_00;
  undefined2 *_Memory_01;
  void *_Memory_02;
  void *_Memory_03;
  void *_Memory_04;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  ulonglong uVar6;
  
  dVar22 = log(1.004);
  iVar12 = (int)(1.0 / dVar22);
  dVar22 = 1.0 / (double)iVar12;
  dVar23 = exp(-dVar22 * 1250.0);
  dVar24 = exp(1.0);
  dVar24 = dVar24 * dVar23 * dVar22;
  DAT_14c7fecf4 = (float)(1.0 / dVar22);
  DAT_14c7fecf8 = (float)(1.0 / dVar23);
  iVar3 = 1 - (int)(-2.0 / dVar24);
  lVar20 = (longlong)iVar3;
  _Memory = (void *)FUN_144e92f50(lVar20 * 2);
  _Memory_00 = (undefined2 *)FUN_144e92f50(0x8000);
  _Memory_01 = (undefined2 *)FUN_144e92f50(0x200);
  _Memory_02 = (void *)FUN_144e92f50(0x2004);
  _Memory_03 = (void *)FUN_144e92f50(0x1002);
  _Memory_04 = (void *)FUN_144e92f50(0x801);
  if (_Memory != (void *)0x0) {
    if ((((_Memory_00 != (undefined2 *)0x0) && (_Memory_01 != (undefined2 *)0x0)) &&
        (_Memory_02 != (void *)0x0)) && ((_Memory_03 != (void *)0x0 && (_Memory_04 != (void *)0x0)))
       ) {
      uVar11 = 0;
      uVar8 = 0;
      uVar6 = uVar11;
      uVar15 = uVar11;
      if (0 < iVar12) {
        do {
          iVar4 = (int)uVar6;
          uVar5 = iVar4 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar8 = (int)uVar15 + 1;
          *(float *)((longlong)_Memory_02 + uVar15 * 4) = (float)((double)iVar4 * dVar24);
          uVar15 = (ulonglong)uVar8;
        } while ((int)uVar5 < iVar12);
      }
      if (iVar12 < 0x800) {
        pfVar2 = (float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4);
        do {
          dVar25 = exp((double)iVar12 * dVar22);
          iVar12 = iVar12 + 1;
          *pfVar2 = (float)(dVar25 * dVar23);
          pfVar2 = pfVar2 + 1;
        } while (iVar12 < 0x800);
      }
      puVar7 = (undefined1 *)((longlong)_Memory_04 + 2);
      puVar9 = (undefined2 *)((longlong)_Memory_03 + 4);
      lVar18 = 0x2ab;
      *(undefined4 *)((longlong)_Memory_02 + 0x2000) =
           *(undefined4 *)((longlong)_Memory_02 + 0x1ffc);
      pfVar2 = (float *)((longlong)_Memory_02 + 8);
      do {
        fVar1 = pfVar2[-2] * 65535.0 + 0.5;
        if (fVar1 <= 65535.0) {
          uVar14 = (undefined2)(int)fVar1;
        }
        else {
          uVar14 = 0xffff;
        }
        puVar9[-2] = uVar14;
        fVar1 = pfVar2[-2] * 255.0 + 0.5;
        if (fVar1 <= 255.0) {
          uVar13 = (undefined1)(int)fVar1;
        }
        else {
          uVar13 = 0xff;
        }
        puVar7[-2] = uVar13;
        fVar1 = pfVar2[-1] * 65535.0 + 0.5;
        if (fVar1 <= 65535.0) {
          uVar14 = (undefined2)(int)fVar1;
        }
        else {
          uVar14 = 0xffff;
        }
        puVar9[-1] = uVar14;
        fVar1 = pfVar2[-1] * 255.0 + 0.5;
        if (fVar1 <= 255.0) {
          uVar13 = (undefined1)(int)fVar1;
        }
        else {
          uVar13 = 0xff;
        }
        puVar7[-1] = uVar13;
        fVar1 = *pfVar2 * 65535.0 + 0.5;
        if (fVar1 <= 65535.0) {
          uVar14 = (undefined2)(int)fVar1;
        }
        else {
          uVar14 = 0xffff;
        }
        *puVar9 = uVar14;
        fVar1 = *pfVar2 * 255.0 + 0.5;
        if (fVar1 <= 255.0) {
          uVar13 = (undefined1)(int)fVar1;
        }
        else {
          uVar13 = 0xff;
        }
        *puVar7 = uVar13;
        puVar9 = puVar9 + 3;
        puVar7 = puVar7 + 3;
        pfVar2 = pfVar2 + 3;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      uVar15 = uVar11;
      uVar6 = uVar11;
      uVar19 = uVar11;
      if (3 < lVar20) {
        iVar12 = 2;
        lVar18 = (lVar20 - 4U >> 2) + 1;
        uVar6 = lVar18 * 4;
        puVar9 = (undefined2 *)((longlong)_Memory + 4);
        do {
          uVar5 = (uint)uVar15;
          dVar22 = (double)(int)uVar19 * dVar24;
          uVar8 = uVar5 + 1;
          if (dVar22 * dVar22 <=
              (double)(*(float *)((longlong)_Memory_02 + (longlong)(int)uVar5 * 4 + 4) *
                      *(float *)((longlong)_Memory_02 + (longlong)(int)uVar5 * 4))) {
            uVar8 = uVar5;
          }
          puVar9[-2] = (short)uVar8;
          dVar22 = (double)(iVar12 + -1) * dVar24;
          if ((double)(*(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4 + 4) *
                      *(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4)) < dVar22 * dVar22
             ) {
            uVar8 = uVar8 + 1;
          }
          puVar9[-1] = (short)uVar8;
          if ((double)(*(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4 + 4) *
                      *(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4)) <
              (double)iVar12 * dVar24 * (double)iVar12 * dVar24) {
            uVar8 = uVar8 + 1;
          }
          *puVar9 = (short)uVar8;
          dVar22 = (double)(iVar12 + 1) * dVar24;
          if ((double)(*(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4 + 4) *
                      *(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4)) < dVar22 * dVar22
             ) {
            uVar8 = uVar8 + 1;
          }
          uVar15 = (ulonglong)uVar8;
          uVar19 = (ulonglong)((int)uVar19 + 4);
          iVar12 = iVar12 + 4;
          puVar9[1] = (short)uVar8;
          lVar18 = lVar18 + -1;
          puVar9 = puVar9 + 4;
        } while (lVar18 != 0);
      }
      for (; uVar10 = uVar11, uVar16 = uVar11, puVar9 = _Memory_00, (longlong)uVar6 < lVar20;
          uVar6 = uVar6 + 1) {
        iVar12 = (int)uVar15;
        dVar22 = (double)(int)uVar19 * dVar24;
        uVar10 = (ulonglong)(iVar12 + 1);
        if (dVar22 * dVar22 <=
            (double)(*(float *)((longlong)_Memory_02 + (longlong)iVar12 * 4 + 4) *
                    *(float *)((longlong)_Memory_02 + (longlong)iVar12 * 4))) {
          uVar10 = uVar15;
        }
        *(short *)((longlong)_Memory + uVar6 * 2) = (short)uVar10;
        uVar15 = uVar10;
        uVar19 = (ulonglong)((int)uVar19 + 1);
      }
      do {
        fVar1 = (float)(int)uVar16 / 16383.0;
        fVar21 = *(float *)((longlong)_Memory_02 + (longlong)(int)uVar10 * 4 + 4) *
                 *(float *)((longlong)_Memory_02 + (longlong)(int)uVar10 * 4);
        while (fVar21 < fVar1 * fVar1) {
          iVar12 = (int)uVar10;
          uVar8 = iVar12 + 1;
          uVar10 = (ulonglong)uVar8;
          fVar21 = *(float *)((longlong)_Memory_02 + (longlong)iVar12 * 4 + 8) *
                   *(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4);
        }
        *puVar9 = (short)uVar10;
        uVar8 = (int)uVar16 + 1;
        uVar6 = uVar11;
        puVar17 = _Memory_01;
        uVar16 = (ulonglong)uVar8;
        puVar9 = puVar9 + 1;
      } while ((int)uVar8 < 0x4000);
      do {
        fVar1 = (float)(int)uVar11 / 255.0;
        fVar21 = *(float *)((longlong)_Memory_02 + (longlong)(int)uVar6 * 4 + 4) *
                 *(float *)((longlong)_Memory_02 + (longlong)(int)uVar6 * 4);
        while (fVar21 < fVar1 * fVar1) {
          iVar12 = (int)uVar6;
          uVar8 = iVar12 + 1;
          uVar6 = (ulonglong)uVar8;
          fVar21 = *(float *)((longlong)_Memory_02 + (longlong)iVar12 * 4 + 8) *
                   *(float *)((longlong)_Memory_02 + (longlong)(int)uVar8 * 4);
        }
        *puVar17 = (short)uVar6;
        uVar8 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar8;
        puVar17 = puVar17 + 1;
      } while ((int)uVar8 < 0x100);
      *(void **)(param_1 + 0x108) = _Memory_02;
      *(void **)(param_1 + 0x110) = _Memory_03;
      *(void **)(param_1 + 0x118) = _Memory_04;
      *(void **)(param_1 + 0x120) = _Memory;
      *(undefined2 **)(param_1 + 0x128) = _Memory_00;
      *(undefined2 **)(param_1 + 0x130) = _Memory_01;
      DAT_14c7fecf0 = (float)(iVar3 / 2);
      return 1;
    }
    free(_Memory);
  }
  if (_Memory_00 != (undefined2 *)0x0) {
    free(_Memory_00);
  }
  if (_Memory_01 != (undefined2 *)0x0) {
    free(_Memory_01);
  }
  if (_Memory_02 != (void *)0x0) {
    free(_Memory_02);
  }
  if (_Memory_03 != (void *)0x0) {
    free(_Memory_03);
  }
  if (_Memory_04 != (void *)0x0) {
    free(_Memory_04);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return 0;
}



// FUNCTION 1454c3aa0 FUN_1454c3aa0 body=673 status=ok
// SIG undefined FUN_1454c3aa0(void)

undefined8 FUN_1454c3aa0(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  switch(*(undefined4 *)(lVar2 + 0xf0)) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
  case 4:
    param_3 = param_3 >> 1;
    break;
  case 5:
    param_3 = param_3 >> 2;
    break;
  default:
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogEncode",
                  "%d bit input not supported in PixarLog",*(undefined2 *)(param_1 + 100));
    return 0;
  }
  iVar7 = (uint)*(ushort *)(lVar2 + 0xe8) * *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar7;
  if ((longlong)((ulonglong)*(uint *)(param_1 + 0x74) * lVar9) < (longlong)param_3) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogEncode","Too many input bytes provided")
    ;
    uVar4 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 0xe0);
    local_res8 = 0;
    if (0 < (longlong)param_3) {
      do {
        iVar1 = *(int *)(lVar2 + 0xf0);
        if (iVar1 == 0) {
          FUN_1454c52a0(param_2,iVar7,*(undefined2 *)(lVar2 + 0xe8),lVar8,
                        *(undefined8 *)(lVar2 + 0x130));
          lVar5 = lVar9;
        }
        else if (iVar1 == 4) {
          FUN_1454c4fd0(param_2,iVar7,*(undefined2 *)(lVar2 + 0xe8),lVar8,
                        *(undefined8 *)(lVar2 + 0x128));
          lVar5 = lVar9 * 2;
        }
        else {
          if (iVar1 != 5) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogEncode",
                          "%d bit input not supported in PixarLog",*(undefined2 *)(param_1 + 100));
            goto LAB_1454c3c42;
          }
          FUN_1454c4640(param_2,iVar7,*(undefined2 *)(lVar2 + 0xe8),lVar8,
                        *(undefined8 *)(lVar2 + 0x120));
          lVar5 = lVar9 * 4;
        }
        lVar8 = lVar8 + lVar9 * 2;
        local_res8 = local_res8 + lVar9;
        param_2 = param_2 + lVar5;
      } while (local_res8 < (longlong)param_3);
      lVar8 = *(longlong *)(lVar2 + 0xe0);
    }
    uVar3 = (uint)param_3;
    *(longlong *)(lVar2 + 0x80) = lVar8;
    *(uint *)(lVar2 + 0x88) = uVar3 * 2;
    if ((uVar3 & 0x7fffffff) == uVar3) {
      do {
        iVar7 = FUN_144b4c2e0(lVar2 + 0x80,0);
        if (iVar7 != 0) {
          pcVar6 = "(null)";
          if (*(char **)(lVar2 + 0xa0) != (char *)0x0) {
            pcVar6 = *(char **)(lVar2 + 0xa0);
          }
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogEncode","Encoder error: %s",pcVar6
                       );
          goto LAB_1454c3c42;
        }
        if (*(int *)(lVar2 + 0x98) == 0) {
          *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_1 + 0x3f0);
          iVar7 = FUN_144e94730(param_1);
          if (iVar7 == 0) goto LAB_1454c3c42;
          *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 1000);
          *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(param_1 + 0x3f0);
        }
      } while (*(int *)(lVar2 + 0x88) != 0);
      uVar4 = 1;
    }
    else {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogEncode",
                    "ZLib cannot deal with buffers this size");
LAB_1454c3c42:
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 1454c3d60 FUN_1454c3d60 body=962 status=ok
// SIG undefined FUN_1454c3d60(void)

undefined8 FUN_1454c3d60(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  switch(*(undefined4 *)(lVar2 + 0xf0)) {
  case 0:
  case 1:
    break;
  case 2:
  case 3:
  case 4:
    param_3 = param_3 >> 1;
    break;
  case 5:
    param_3 = param_3 >> 2;
    break;
  default:
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogDecode",
                  "%d bit input not supported in PixarLog",*(undefined2 *)(param_1 + 100));
    return 0;
  }
  iVar9 = (uint)*(ushort *)(lVar2 + 0xe8) * *(int *)(param_1 + 0x48);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_1 + 0x408);
  *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(param_1 + 0x410);
  *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar2 + 0xe0);
  uVar1 = (int)param_3 * 2;
  *(uint *)(lVar2 + 0x98) = uVar1;
  if ((ulonglong)uVar1 == param_3 * 2) {
    if ((longlong)(ulonglong)uVar1 <= *(longlong *)(lVar2 + 0xd8)) {
      while( true ) {
        iVar3 = FUN_144b4e2a0(lVar2 + 0x80,1);
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
        if (iVar3 == 1) {
          uVar1 = *(uint *)(lVar2 + 0x98);
          goto LAB_1454c3eba;
        }
        if (iVar3 == -3) break;
        if (iVar3 != 0) {
          pcVar6 = "(null)";
          if (*(char **)(lVar2 + 0xa0) != (char *)0x0) {
            pcVar6 = *(char **)(lVar2 + 0xa0);
          }
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogDecode","ZLib error: %s",pcVar6);
          return 0;
        }
        if (*(int *)(lVar2 + 0x98) == 0) {
          uVar1 = 0;
LAB_1454c3eba:
          if (uVar1 == 0) {
            *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar2 + 0x80);
            *(ulonglong *)(param_1 + 0x410) = (ulonglong)*(uint *)(lVar2 + 0x88);
            lVar5 = *(longlong *)(lVar2 + 0xe0);
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e930b0(lVar5,param_3);
            }
            lVar8 = (longlong)iVar9;
            if ((longlong)param_3 % lVar8 != 0) {
              FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"PixarLogDecode",
                            "stride %lu is not a multiple of sample count, %lu, data truncated.",
                            iVar9,CONCAT44(uVar10,(int)param_3));
              param_3 = param_3 - (longlong)param_3 % lVar8;
            }
            local_res8 = 0;
            if (0 < (longlong)param_3) {
              do {
                lVar4 = lVar8;
                switch(*(undefined4 *)(lVar2 + 0xf0)) {
                case 0:
                  FUN_1454c2f40(lVar5,iVar9,*(undefined2 *)(lVar2 + 0xe8),param_2,
                                *(undefined8 *)(lVar2 + 0x118));
                  break;
                case 1:
                  FUN_1454c31b0(lVar5,iVar9,*(undefined2 *)(lVar2 + 0xe8),param_2,
                                *(undefined8 *)(lVar2 + 0x118));
                  break;
                case 2:
                  FUN_1454c2d30(lVar5,iVar9,*(undefined2 *)(lVar2 + 0xe8),param_2);
                  lVar4 = lVar8 * 2;
                  break;
                case 3:
                  FUN_1454c26c0(lVar5,iVar9,*(undefined2 *)(lVar2 + 0xe8),param_2,
                                *(undefined8 *)(lVar2 + 0x108));
                  lVar4 = lVar8 * 2;
                  break;
                case 4:
                  FUN_1454c2aa0(lVar5,iVar9,*(undefined2 *)(lVar2 + 0xe8),param_2,
                                *(undefined8 *)(lVar2 + 0x110));
                  lVar4 = lVar8 * 2;
                  break;
                case 5:
                  FUN_1454c2450(lVar5,iVar9,*(undefined2 *)(lVar2 + 0xe8),param_2,
                                *(undefined8 *)(lVar2 + 0x108));
                  lVar4 = lVar8 * 4;
                  break;
                default:
                  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogDecode",
                                "Unsupported bits/sample: %d",*(undefined2 *)(param_1 + 100));
                  return 0;
                }
                lVar5 = lVar5 + lVar8 * 2;
                local_res8 = local_res8 + lVar8;
                param_2 = param_2 + lVar4;
              } while (local_res8 < (longlong)param_3);
            }
            return 1;
          }
          pcVar7 = "Not enough data at scanline %lu (short %llu bytes)";
          pcVar6 = (char *)(ulonglong)uVar1;
LAB_1454c3eca:
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogDecode",pcVar7,
                        *(undefined4 *)(param_1 + 0x2fc),pcVar6);
          return 0;
        }
      }
      pcVar7 = "Decoding error at scanline %lu, %s";
      pcVar6 = "(null)";
      if (*(char **)(lVar2 + 0xa0) != (char *)0x0) {
        pcVar6 = *(char **)(lVar2 + 0xa0);
      }
      goto LAB_1454c3eca;
    }
    pcVar6 = "sp->stream.avail_out > sp->tbuf_size";
  }
  else {
    pcVar6 = "ZLib cannot deal with buffers this size";
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogDecode",pcVar6);
  return 0;
}



// FUNCTION 1454c4160 FUN_1454c4160 body=149 status=ok
// SIG undefined FUN_1454c4160(void)

undefined8 FUN_1454c4160(longlong param_1)

{
  short sVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar1 = *(short *)(param_1 + 0x2c);
  uVar3 = 0xffffffff;
  sVar2 = *(short *)(param_1 + 0x2e);
  if (sVar1 == 8) {
    if ((sVar2 == 4) || (sVar2 == 1)) {
      uVar3 = 0;
    }
  }
  else if (sVar1 == 0xb) {
    if ((sVar2 == 4) || (sVar2 == 1)) {
      return 2;
    }
  }
  else if (sVar1 == 0xc) {
    if ((sVar2 - 2U & 0xfffd) == 0) {
      return 3;
    }
  }
  else if (sVar1 == 0x10) {
    if ((sVar2 == 4) || (sVar2 == 1)) {
      return 4;
    }
  }
  else if (sVar1 == 0x20) {
    uVar3 = 5;
    if (sVar2 != 3) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 1454c4210 FUN_1454c4210 body=481 status=ok
// SIG undefined FUN_1454c4210(void)

undefined8 FUN_1454c4210(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Memory;
  char *pcVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if ((*(byte *)(lVar1 + 0xec) & 1) != 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  if (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x4c)) {
    uVar2 = *(uint *)(param_1 + 0x74);
  }
  *(undefined **)(param_1 + 0x468) = &DAT_144b83080;
  if (*(short *)(param_1 + 0x9a) == 1) {
    uVar3 = *(undefined2 *)(param_1 + 0x72);
  }
  else {
    uVar3 = 1;
  }
  *(undefined2 *)(lVar1 + 0xe8) = uVar3;
  uVar5 = FUN_144b7a8a0(0,uVar3,*(undefined4 *)(param_1 + 0x48),0);
  uVar5 = FUN_144b7a8a0(0,uVar5,uVar2,0);
  lVar6 = FUN_144b7a8a0(0,uVar5,2);
  uVar7 = (ulonglong)*(ushort *)(lVar1 + 0xe8);
  if ((((lVar6 != 0) && (uVar7 != 0)) && (lVar6 <= (longlong)(uVar7 * -2 + 0x7fffffffffffffff))) &&
     (lVar6 = lVar6 + uVar7 * 2, lVar6 != 0)) {
    _Memory = (void *)FUN_144e92f50(lVar6);
    *(void **)(lVar1 + 0xe0) = _Memory;
    if (_Memory != (void *)0x0) {
      *(longlong *)(lVar1 + 0xd8) = lVar6;
      if (*(int *)(lVar1 + 0xf0) == -1) {
        iVar4 = FUN_1454c4160(param_1 + 0x38);
        *(int *)(lVar1 + 0xf0) = iVar4;
        if (iVar4 == -1) {
          free(_Memory);
          *(undefined8 *)(lVar1 + 0xe0) = 0;
          *(undefined8 *)(lVar1 + 0xd8) = 0;
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogSetupDecode",
                        "PixarLog compression can\'t handle bits depth/data format combination (depth: %d)"
                        ,*(undefined2 *)(param_1 + 100));
          return 0;
        }
      }
      iVar4 = FUN_144b4fcd0(lVar1 + 0x80,"1.2.8",0x58);
      if (iVar4 == 0) {
        *(uint *)(lVar1 + 0xec) = *(uint *)(lVar1 + 0xec) | 1;
        return 1;
      }
      free(*(void **)(lVar1 + 0xe0));
      *(undefined8 *)(lVar1 + 0xe0) = 0;
      *(undefined8 *)(lVar1 + 0xd8) = 0;
      pcVar8 = "(null)";
      if (*(char **)(lVar1 + 0xa0) != (char *)0x0) {
        pcVar8 = *(char **)(lVar1 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogSetupDecode",&DAT_149972340,pcVar8);
    }
  }
  return 0;
}



// FUNCTION 1454c4400 FUN_1454c4400 body=105 status=ok
// SIG undefined FUN_1454c4400(void)

bool FUN_1454c4400(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_1 + 1000);
  uVar1 = *(uint *)(param_1 + 0x410);
  *(uint *)(lVar2 + 0x88) = uVar1;
  if ((ulonglong)uVar1 != *(ulonglong *)(param_1 + 0x410)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogPreDecode",
                  "ZLib cannot deal with buffers this size");
    return false;
  }
  iVar3 = FUN_144b4fbc0(lVar2 + 0x80);
  return iVar3 == 0;
}



// FUNCTION 1454c4470 FUN_1454c4470 body=337 status=ok
// SIG undefined FUN_1454c4470(void)

undefined8 FUN_1454c4470(longlong param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(short *)(param_1 + 0x9a) == 1) {
    uVar2 = *(undefined2 *)(param_1 + 0x72);
  }
  else {
    uVar2 = 1;
  }
  *(undefined2 *)(lVar1 + 0xe8) = uVar2;
  uVar4 = FUN_144b7a8a0(0,uVar2,*(undefined4 *)(param_1 + 0x48),0);
  uVar4 = FUN_144b7a8a0(0,uVar4,*(undefined4 *)(param_1 + 0x74),0);
  lVar5 = FUN_144b7a8a0(0,uVar4,2);
  if (lVar5 != 0) {
    lVar5 = FUN_144e92f50(lVar5);
    *(longlong *)(lVar1 + 0xe0) = lVar5;
    if (lVar5 != 0) {
      if (*(int *)(lVar1 + 0xf0) == -1) {
        iVar3 = FUN_1454c4160(param_1 + 0x38);
        *(int *)(lVar1 + 0xf0) = iVar3;
        if (iVar3 == -1) {
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogSetupEncode",
                        "PixarLog compression can\'t handle %d bit linear encodings",
                        *(undefined2 *)(param_1 + 100));
          return 0;
        }
      }
      iVar3 = deflateInit_(lVar1 + 0x80,*(undefined4 *)(lVar1 + 0xf4),"1.2.8",0x58);
      if (iVar3 == 0) {
        *(uint *)(lVar1 + 0xec) = *(uint *)(lVar1 + 0xec) | 1;
        return 1;
      }
      pcVar6 = "(null)";
      if (*(char **)(lVar1 + 0xa0) != (char *)0x0) {
        pcVar6 = *(char **)(lVar1 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogSetupEncode",&DAT_149972340,pcVar6);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1454c45d0 FUN_1454c45d0 body=105 status=ok
// SIG undefined FUN_1454c45d0(void)

bool FUN_1454c45d0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(param_1 + 1000);
  uVar1 = *(uint *)(param_1 + 0x3f0);
  *(uint *)(lVar2 + 0x98) = uVar1;
  if ((ulonglong)uVar1 != *(ulonglong *)(param_1 + 0x3f0)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogPreEncode",
                  "ZLib cannot deal with buffers this size");
    return false;
  }
  iVar3 = FUN_144b4cea0(lVar2 + 0x80);
  return iVar3 == 0;
}



// FUNCTION 1454c4640 FUN_1454c4640 body=2442 status=ok
// SIG undefined FUN_1454c4640(void)

void FUN_1454c4640(float *param_1,int param_2,int param_3,ushort *param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ushort *puVar6;
  float *pfVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  fVar4 = DAT_14c7fecf8;
  fVar3 = DAT_14c7fecf4;
  fVar2 = DAT_14c7fecf0;
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      fVar1 = *param_1;
      if (0.0 <= fVar1) {
        if (2.0 <= fVar1) {
          if (fVar1 <= 24.2) {
            dVar13 = log((double)(fVar1 * DAT_14c7fecf8));
            dVar13 = dVar13 * (double)fVar3 + 0.5;
          }
          else {
            dVar13 = 2047.0;
          }
        }
        else {
          dVar13 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * DAT_14c7fecf0) * 2);
        }
      }
      else {
        dVar13 = 0.0;
      }
      *param_4 = (ushort)(int)dVar13;
      fVar1 = param_1[1];
      if (0.0 <= fVar1) {
        if (2.0 <= fVar1) {
          if (fVar1 <= 24.2) {
            dVar14 = log((double)(fVar1 * fVar4));
            dVar14 = dVar14 * (double)fVar3 + 0.5;
          }
          else {
            dVar14 = 2047.0;
          }
        }
        else {
          dVar14 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
        }
      }
      else {
        dVar14 = 0.0;
      }
      param_4[1] = (ushort)(int)dVar14;
      fVar1 = param_1[2];
      if (0.0 <= fVar1) {
        if (2.0 <= fVar1) {
          if (fVar1 <= 24.2) {
            dVar15 = log((double)(fVar1 * fVar4));
            dVar15 = dVar15 * (double)fVar3 + 0.5;
          }
          else {
            dVar15 = 2047.0;
          }
        }
        else {
          dVar15 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
        }
      }
      else {
        dVar15 = 0.0;
      }
      param_4[2] = (ushort)(int)dVar15;
      if (0 < param_2 + -3) {
        uVar8 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar6 = param_4 + 2;
        pfVar7 = param_1 + 2;
        uVar9 = (int)dVar13 & 0xffff;
        uVar12 = (int)dVar14 & 0xffff;
        uVar10 = (int)dVar15 & 0xffff;
        do {
          fVar1 = pfVar7[1];
          if (0.0 <= fVar1) {
            if (2.0 <= fVar1) {
              if (fVar1 <= 24.2) {
                dVar13 = log((double)(fVar1 * fVar4));
                dVar13 = dVar13 * (double)fVar3 + 0.5;
              }
              else {
                dVar13 = 2047.0;
              }
            }
            else {
              dVar13 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
            }
          }
          else {
            dVar13 = 0.0;
          }
          puVar6[1] = (short)(int)dVar13 - (short)uVar9 & 0x7ff;
          fVar1 = pfVar7[2];
          if (0.0 <= fVar1) {
            if (2.0 <= fVar1) {
              if (fVar1 <= 24.2) {
                dVar14 = log((double)(fVar1 * fVar4));
                dVar14 = dVar14 * (double)fVar3 + 0.5;
              }
              else {
                dVar14 = 2047.0;
              }
            }
            else {
              dVar14 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
            }
          }
          else {
            dVar14 = 0.0;
          }
          puVar6[2] = (short)(int)dVar14 - (short)uVar12 & 0x7ff;
          fVar1 = pfVar7[3];
          if (0.0 <= fVar1) {
            if (2.0 <= fVar1) {
              if (fVar1 <= 24.2) {
                dVar15 = log((double)(fVar1 * fVar4));
                dVar15 = dVar15 * (double)fVar3 + 0.5;
              }
              else {
                dVar15 = 2047.0;
              }
            }
            else {
              dVar15 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
            }
          }
          else {
            dVar15 = 0.0;
          }
          puVar6[3] = (short)(int)dVar15 - (short)uVar10 & 0x7ff;
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 3;
          pfVar7 = pfVar7 + 3;
          uVar9 = (int)dVar13;
          uVar12 = (int)dVar14;
          uVar10 = (int)dVar15;
        } while (uVar8 != 0);
      }
    }
    else {
      iVar5 = param_3;
      if (param_3 == 4) {
        fVar1 = *param_1;
        if (0.0 <= fVar1) {
          if (2.0 <= fVar1) {
            if (fVar1 <= 24.2) {
              dVar13 = log((double)(fVar1 * DAT_14c7fecf8));
              dVar13 = dVar13 * (double)fVar3 + 0.5;
            }
            else {
              dVar13 = 2047.0;
            }
          }
          else {
            dVar13 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * DAT_14c7fecf0) * 2);
          }
        }
        else {
          dVar13 = 0.0;
        }
        *param_4 = (ushort)(int)dVar13;
        fVar1 = param_1[1];
        if (0.0 <= fVar1) {
          if (2.0 <= fVar1) {
            if (fVar1 <= 24.2) {
              dVar14 = log((double)(fVar1 * fVar4));
              dVar14 = dVar14 * (double)fVar3 + 0.5;
            }
            else {
              dVar14 = 2047.0;
            }
          }
          else {
            dVar14 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
          }
        }
        else {
          dVar14 = 0.0;
        }
        param_4[1] = (ushort)(int)dVar14;
        fVar1 = param_1[2];
        if (0.0 <= fVar1) {
          if (2.0 <= fVar1) {
            if (fVar1 <= 24.2) {
              dVar15 = log((double)(fVar1 * fVar4));
              dVar15 = dVar15 * (double)fVar3 + 0.5;
            }
            else {
              dVar15 = 2047.0;
            }
          }
          else {
            dVar15 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
          }
        }
        else {
          dVar15 = 0.0;
        }
        param_4[2] = (ushort)(int)dVar15;
        fVar1 = param_1[3];
        if (0.0 <= fVar1) {
          if (2.0 <= fVar1) {
            if (fVar1 <= 24.2) {
              dVar16 = log((double)(fVar1 * fVar4));
              dVar16 = dVar16 * (double)fVar3 + 0.5;
            }
            else {
              dVar16 = 2047.0;
            }
          }
          else {
            dVar16 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
          }
        }
        else {
          dVar16 = 0.0;
        }
        param_4[3] = (ushort)(int)dVar16;
        if (0 < param_2 + -4) {
          uVar8 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar6 = param_4 + 2;
          pfVar7 = param_1 + 2;
          uVar9 = (int)dVar13 & 0xffff;
          uVar12 = (int)dVar14 & 0xffff;
          uVar10 = (int)dVar15 & 0xffff;
          uVar11 = (int)dVar16 & 0xffff;
          do {
            fVar1 = pfVar7[2];
            if (0.0 <= fVar1) {
              if (2.0 <= fVar1) {
                if (fVar1 <= 24.2) {
                  dVar13 = log((double)(fVar1 * fVar4));
                  dVar13 = dVar13 * (double)fVar3 + 0.5;
                }
                else {
                  dVar13 = 2047.0;
                }
              }
              else {
                dVar13 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
              }
            }
            else {
              dVar13 = 0.0;
            }
            puVar6[2] = (short)(int)dVar13 - (short)uVar9 & 0x7ff;
            fVar1 = pfVar7[3];
            if (0.0 <= fVar1) {
              if (2.0 <= fVar1) {
                if (fVar1 <= 24.2) {
                  dVar14 = log((double)(fVar1 * fVar4));
                  dVar14 = dVar14 * (double)fVar3 + 0.5;
                }
                else {
                  dVar14 = 2047.0;
                }
              }
              else {
                dVar14 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
              }
            }
            else {
              dVar14 = 0.0;
            }
            puVar6[3] = (short)(int)dVar14 - (short)uVar12 & 0x7ff;
            fVar1 = pfVar7[4];
            if (0.0 <= fVar1) {
              if (2.0 <= fVar1) {
                if (fVar1 <= 24.2) {
                  dVar15 = log((double)(fVar1 * fVar4));
                  dVar15 = dVar15 * (double)fVar3 + 0.5;
                }
                else {
                  dVar15 = 2047.0;
                }
              }
              else {
                dVar15 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
              }
            }
            else {
              dVar15 = 0.0;
            }
            puVar6[4] = (short)(int)dVar15 - (short)uVar10 & 0x7ff;
            fVar1 = pfVar7[5];
            if (0.0 <= fVar1) {
              if (2.0 <= fVar1) {
                if (fVar1 <= 24.2) {
                  dVar16 = log((double)(fVar1 * fVar4));
                  dVar16 = dVar16 * (double)fVar3 + 0.5;
                }
                else {
                  dVar16 = 2047.0;
                }
              }
              else {
                dVar16 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
              }
            }
            else {
              dVar16 = 0.0;
            }
            puVar6[5] = (short)(int)dVar16 - (short)uVar11 & 0x7ff;
            uVar8 = uVar8 - 1;
            puVar6 = puVar6 + 4;
            pfVar7 = pfVar7 + 4;
            uVar9 = (int)dVar13;
            uVar12 = (int)dVar14;
            uVar10 = (int)dVar15;
            uVar11 = (int)dVar16;
          } while (uVar8 != 0);
        }
      }
      else {
        do {
          fVar1 = *param_1;
          iVar5 = iVar5 + -1;
          if (0.0 <= fVar1) {
            if (2.0 <= fVar1) {
              if (fVar1 <= 24.2) {
                dVar13 = log((double)(fVar1 * fVar4));
                dVar13 = dVar13 * (double)fVar3 + 0.5;
              }
              else {
                dVar13 = 2047.0;
              }
            }
            else {
              dVar13 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
            }
          }
          else {
            dVar13 = 0.0;
          }
          param_1 = param_1 + 1;
          *param_4 = (ushort)(int)dVar13;
          param_4 = param_4 + 1;
        } while (0 < iVar5);
        for (param_2 = param_2 - param_3; 0 < param_2; param_2 = param_2 - param_3) {
          pfVar7 = param_1 + -(longlong)param_3;
          iVar5 = param_3;
          do {
            fVar1 = *param_1;
            iVar5 = iVar5 + -1;
            if (0.0 <= fVar1) {
              if (2.0 <= fVar1) {
                if (fVar1 <= 24.2) {
                  dVar13 = log((double)(fVar1 * fVar4));
                  dVar13 = dVar13 * (double)fVar3 + 0.5;
                }
                else {
                  dVar13 = 2047.0;
                }
              }
              else {
                dVar13 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
              }
            }
            else {
              dVar13 = 0.0;
            }
            fVar1 = *pfVar7;
            if (0.0 <= fVar1) {
              if (2.0 <= fVar1) {
                if (fVar1 <= 24.2) {
                  dVar14 = log((double)(fVar1 * fVar4));
                  dVar14 = dVar14 * (double)fVar3 + 0.5;
                }
                else {
                  dVar14 = 2047.0;
                }
              }
              else {
                dVar14 = (double)*(ushort *)(param_5 + (longlong)(int)(fVar1 * fVar2) * 2);
              }
            }
            else {
              dVar14 = 0.0;
            }
            param_1 = param_1 + 1;
            pfVar7 = pfVar7 + 1;
            *param_4 = (short)(int)dVar13 - (short)(int)dVar14 & 0x7ff;
            param_4 = param_4 + 1;
          } while (0 < iVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c4fd0 FUN_1454c4fd0 body=714 status=ok
// SIG undefined FUN_1454c4fd0(void)

void FUN_1454c4fd0(ushort *param_1,int param_2,int param_3,ushort *param_4,longlong param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      uVar8 = *(ushort *)(param_5 + (ulonglong)(*param_1 >> 2) * 2);
      *param_4 = uVar8;
      uVar12 = *(ushort *)(param_5 + (ulonglong)(param_1[1] >> 2) * 2);
      param_4[1] = uVar12;
      uVar13 = *(ushort *)(param_5 + (ulonglong)(param_1[2] >> 2) * 2);
      param_4[2] = uVar13;
      if (0 < param_2 + -3) {
        uVar9 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar7 = param_4 + 2;
        puVar10 = param_1 + 2;
        do {
          puVar1 = puVar10 + 3;
          uVar11 = *(ushort *)(param_5 + (ulonglong)(puVar10[1] >> 2) * 2);
          *(ushort *)((longlong)param_4 + (-4 - (longlong)param_1) + (longlong)puVar1) =
               uVar11 - uVar8 & 0x7ff;
          uVar2 = *(ushort *)(param_5 + (ulonglong)(puVar10[2] >> 2) * 2);
          puVar7[2] = uVar2 - uVar12 & 0x7ff;
          uVar3 = *(ushort *)(param_5 + (ulonglong)(*puVar1 >> 2) * 2);
          puVar7[3] = uVar3 - uVar13 & 0x7ff;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 3;
          puVar10 = puVar1;
          uVar8 = uVar11;
          uVar12 = uVar2;
          uVar13 = uVar3;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar6 = param_3;
      if (param_3 == 4) {
        uVar8 = *(ushort *)(param_5 + (ulonglong)(*param_1 >> 2) * 2);
        *param_4 = uVar8;
        uVar12 = *(ushort *)(param_5 + (ulonglong)(param_1[1] >> 2) * 2);
        param_4[1] = uVar12;
        uVar13 = *(ushort *)(param_5 + (ulonglong)(param_1[2] >> 2) * 2);
        param_4[2] = uVar13;
        uVar11 = *(ushort *)(param_5 + (ulonglong)(param_1[3] >> 2) * 2);
        param_4[3] = uVar11;
        if (0 < param_2 + -4) {
          uVar9 = (ulonglong)((param_2 - 5U >> 2) + 1);
          puVar7 = param_4 + 2;
          puVar10 = param_1 + 2;
          do {
            puVar1 = puVar10 + 4;
            uVar2 = *(ushort *)(param_5 + (ulonglong)(puVar10[2] >> 2) * 2);
            *(ushort *)((longlong)puVar1 + (longlong)param_4 + (-4 - (longlong)param_1)) =
                 uVar2 - uVar8 & 0x7ff;
            uVar3 = *(ushort *)(param_5 + (ulonglong)(puVar10[3] >> 2) * 2);
            puVar7[3] = uVar3 - uVar12 & 0x7ff;
            uVar4 = *(ushort *)(param_5 + (ulonglong)(*puVar1 >> 2) * 2);
            puVar7[4] = uVar4 - uVar13 & 0x7ff;
            uVar5 = *(ushort *)(param_5 + (ulonglong)(puVar10[5] >> 2) * 2);
            puVar7[5] = uVar5 - uVar11 & 0x7ff;
            uVar9 = uVar9 - 1;
            puVar7 = puVar7 + 4;
            puVar10 = puVar1;
            uVar8 = uVar2;
            uVar12 = uVar3;
            uVar13 = uVar4;
            uVar11 = uVar5;
          } while (uVar9 != 0);
        }
      }
      else {
        do {
          uVar8 = *param_1;
          iVar6 = iVar6 + -1;
          param_1 = param_1 + 1;
          *param_4 = *(ushort *)(param_5 + (ulonglong)(uVar8 >> 2) * 2);
          param_4 = param_4 + 1;
        } while (0 < iVar6);
        for (param_2 = param_2 - param_3; 0 < param_2; param_2 = param_2 - param_3) {
          puVar7 = param_1 + -(longlong)param_3;
          iVar6 = param_3;
          do {
            uVar8 = *param_1;
            iVar6 = iVar6 + -1;
            uVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            param_1 = param_1 + 1;
            *param_4 = *(short *)(param_5 + (ulonglong)(uVar8 >> 2) * 2) -
                       *(short *)(param_5 + (ulonglong)(uVar12 >> 2) * 2) & 0x7ff;
            param_4 = param_4 + 1;
          } while (0 < iVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c52a0 FUN_1454c52a0 body=620 status=ok
// SIG undefined FUN_1454c52a0(void)

void FUN_1454c52a0(byte *param_1,int param_2,int param_3,ushort *param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  int iVar10;
  ushort *puVar11;
  byte *pbVar12;
  ushort uVar13;
  ushort uVar14;
  
  if (param_3 <= param_2) {
    if (param_3 == 3) {
      uVar7 = *(ushort *)(param_5 + (ulonglong)*param_1 * 2);
      *param_4 = uVar7;
      uVar8 = *(ushort *)(param_5 + (ulonglong)param_1[1] * 2);
      param_4[1] = uVar8;
      uVar14 = *(ushort *)(param_5 + (ulonglong)param_1[2] * 2);
      param_4[2] = uVar14;
      if (0 < param_2 + -3) {
        uVar9 = (ulonglong)((param_2 - 4U) / 3 + 1);
        puVar11 = param_4 + 4;
        pbVar12 = param_1 + 4;
        do {
          uVar13 = *(ushort *)(param_5 + (ulonglong)pbVar12[-1] * 2);
          puVar11[-1] = uVar13 - uVar7 & 0x7ff;
          uVar3 = *(ushort *)(param_5 + (ulonglong)*pbVar12 * 2);
          *puVar11 = uVar3 - uVar8 & 0x7ff;
          uVar4 = *(ushort *)(param_5 + (ulonglong)pbVar12[1] * 2);
          puVar11[1] = uVar4 - uVar14 & 0x7ff;
          uVar9 = uVar9 - 1;
          puVar11 = puVar11 + 3;
          pbVar12 = pbVar12 + 3;
          uVar7 = uVar13;
          uVar8 = uVar3;
          uVar14 = uVar4;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar10 = param_3;
      if (param_3 == 4) {
        uVar7 = *(ushort *)(param_5 + (ulonglong)*param_1 * 2);
        *param_4 = uVar7;
        uVar8 = *(ushort *)(param_5 + (ulonglong)param_1[1] * 2);
        param_4[1] = uVar8;
        uVar14 = *(ushort *)(param_5 + (ulonglong)param_1[2] * 2);
        param_4[2] = uVar14;
        uVar13 = *(ushort *)(param_5 + (ulonglong)param_1[3] * 2);
        param_4[3] = uVar13;
        if (0 < param_2 + -4) {
          uVar9 = (ulonglong)((param_2 - 5U >> 2) + 1);
          pbVar12 = param_1 + 5;
          puVar11 = param_4 + 5;
          do {
            uVar3 = *(ushort *)(param_5 + (ulonglong)pbVar12[-1] * 2);
            puVar11[-1] = uVar3 - uVar7 & 0x7ff;
            uVar4 = *(ushort *)(param_5 + (ulonglong)*pbVar12 * 2);
            *puVar11 = uVar4 - uVar8 & 0x7ff;
            uVar5 = *(ushort *)(param_5 + (ulonglong)pbVar12[1] * 2);
            puVar11[1] = uVar5 - uVar14 & 0x7ff;
            uVar6 = *(ushort *)(param_5 + (ulonglong)pbVar12[2] * 2);
            puVar11[2] = uVar6 - uVar13 & 0x7ff;
            uVar9 = uVar9 - 1;
            pbVar12 = pbVar12 + 4;
            puVar11 = puVar11 + 4;
            uVar7 = uVar3;
            uVar8 = uVar4;
            uVar14 = uVar5;
            uVar13 = uVar6;
          } while (uVar9 != 0);
        }
      }
      else {
        do {
          bVar1 = *param_1;
          iVar10 = iVar10 + -1;
          param_1 = param_1 + 1;
          *param_4 = *(ushort *)(param_5 + (ulonglong)bVar1 * 2);
          param_4 = param_4 + 1;
        } while (0 < iVar10);
        for (param_2 = param_2 - param_3; 0 < param_2; param_2 = param_2 - param_3) {
          pbVar12 = param_1 + -(longlong)param_3;
          iVar10 = param_3;
          do {
            bVar1 = *param_1;
            iVar10 = iVar10 + -1;
            bVar2 = *pbVar12;
            pbVar12 = pbVar12 + 1;
            param_1 = param_1 + 1;
            *param_4 = *(short *)(param_5 + (ulonglong)bVar1 * 2) -
                       *(short *)(param_5 + (ulonglong)bVar2 * 2) & 0x7ff;
            param_4 = param_4 + 1;
          } while (0 < iVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 1454c5510 FUN_1454c5510 body=221 status=ok
// SIG undefined FUN_1454c5510(void)

undefined8 FUN_1454c5510(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined4 *)(lVar1 + 0x88) = 0;
  do {
    iVar2 = FUN_144b4c2e0(lVar1 + 0x80,4);
    if ((iVar2 != 0) && (iVar2 != 1)) {
      pcVar4 = "(null)";
      if (*(char **)(lVar1 + 0xa0) != (char *)0x0) {
        pcVar4 = *(char **)(lVar1 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogPostEncode","ZLib error: %s",pcVar4);
      return 0;
    }
    if ((ulonglong)*(uint *)(lVar1 + 0x98) != *(ulonglong *)(param_1 + 0x3f0)) {
      *(ulonglong *)(param_1 + 0x410) =
           *(ulonglong *)(param_1 + 0x3f0) - (ulonglong)*(uint *)(lVar1 + 0x98);
      iVar3 = FUN_144e94730(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(param_1 + 1000);
      *(undefined4 *)(lVar1 + 0x98) = *(undefined4 *)(param_1 + 0x3f0);
    }
  } while (iVar2 != 1);
  return 1;
}



// FUNCTION 1454c5610 FUN_1454c5610 body=243 status=ok
// SIG undefined FUN_1454c5610(void)

void FUN_1454c5610(longlong param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0x3d0);
  FUN_1455d5930();
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)((longlong)_Memory + 0xf8);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)((longlong)_Memory + 0x100);
  if (*(void **)((longlong)_Memory + 0x120) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x120));
  }
  if (*(void **)((longlong)_Memory + 0x128) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x128));
  }
  if (*(void **)((longlong)_Memory + 0x130) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x130));
  }
  if (*(void **)((longlong)_Memory + 0x108) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x108));
  }
  if (*(void **)((longlong)_Memory + 0x110) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x110));
  }
  if (*(void **)((longlong)_Memory + 0x118) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x118));
  }
  if ((*(byte *)((longlong)_Memory + 0xec) & 1) != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_144b4fb40();
    }
    else {
      FUN_144b4cd70((longlong)_Memory + 0x80);
    }
  }
  if (*(void **)((longlong)_Memory + 0xe0) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0xe0));
  }
  free(_Memory);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  FUN_144e93410(param_1);
  return;
}



// FUNCTION 1454c5710 FUN_1454c5710 body=392 status=ok
// SIG undefined FUN_1454c5710(void)

undefined8 FUN_1454c5710(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  if (param_2 != 0x1000d) {
    if (param_2 != 0x10016) {
      uVar4 = (**(code **)(lVar2 + 0x100))();
      return uVar4;
    }
    uVar1 = *param_3;
    *(undefined4 *)(lVar2 + 0xf4) = uVar1;
    if (((*(int *)(param_1 + 0xc) != 0) && ((*(byte *)(lVar2 + 0xec) & 1) != 0)) &&
       (iVar3 = FUN_144b4d040(lVar2 + 0x80,uVar1,0), iVar3 != 0)) {
      pcVar5 = "(null)";
      if (*(char **)(lVar2 + 0xa0) != (char *)0x0) {
        pcVar5 = *(char **)(lVar2 + 0xa0);
      }
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"PixarLogVSetField","ZLib error: %s",pcVar5);
      return 0;
    }
    return 1;
  }
  uVar1 = *param_3;
  *(undefined4 *)(lVar2 + 0xf0) = uVar1;
  switch(uVar1) {
  case 0:
  case 1:
    FUN_144b78170(param_1,0x102,8);
    uVar4 = 1;
    break;
  case 2:
  case 4:
    FUN_144b78170(param_1,0x102,0x10);
    uVar4 = 1;
    break;
  case 3:
    FUN_144b78170(param_1,0x102,0x10);
    uVar4 = 2;
    break;
  case 5:
    FUN_144b78170(param_1,0x102,0x20);
    uVar4 = 3;
    break;
  default:
    goto switchD_1454c57e8_default;
  }
  FUN_144b78170(param_1,0x153,uVar4);
switchD_1454c57e8_default:
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    uVar4 = FUN_144b7ac50(param_1);
  }
  *(undefined8 *)(param_1 + 0x330) = uVar4;
  uVar4 = FUN_144b77aa0(param_1);
  *(undefined8 *)(param_1 + 0x3d8) = uVar4;
  return 1;
}



// FUNCTION 1454c58f0 FUN_1454c58f0 body=386 status=ok
// SIG undefined FUN_1454c58f0(void)

void FUN_1454c58f0(float *param_1,undefined1 *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double _X;
  undefined1 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  
  dVar2 = (double)*param_1;
  dVar7 = (double)param_1[1];
  dVar8 = (double)param_1[2];
  dVar5 = (dVar2 * 2.69 - dVar7 * 1.276) - dVar8 * 0.414;
  _X = (dVar7 * 1.978 - dVar2 * 1.022) + dVar8 * 0.044;
  dVar2 = (dVar2 * 0.061 - dVar7 * 0.224) + dVar8 * 1.163;
  if (0.0 < dVar5) {
    if (dVar5 < 1.0) {
      if (dVar5 < 0.0) {
        dVar5 = sqrt(dVar5);
      }
      else {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = dVar5;
        auVar6 = sqrtpd(ZEXT816(0),auVar6);
        dVar5 = auVar6._0_8_;
      }
      uVar4 = (undefined1)(int)(dVar5 * 256.0);
    }
    else {
      uVar4 = 0xff;
    }
  }
  else {
    uVar4 = 0;
  }
  *param_2 = uVar4;
  if (0.0 < _X) {
    if (_X < 1.0) {
      if (_X < 0.0) {
        dVar5 = sqrt(_X);
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = _X;
        auVar6 = sqrtpd(ZEXT816(0),auVar3);
        dVar5 = auVar6._0_8_;
      }
      uVar4 = (undefined1)(int)(dVar5 * 256.0);
    }
    else {
      uVar4 = 0xff;
    }
  }
  else {
    uVar4 = 0;
  }
  param_2[1] = uVar4;
  if (0.0 < dVar2) {
    if (dVar2 < 1.0) {
      if (dVar2 < 0.0) {
        dVar5 = sqrt(dVar2);
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = dVar2;
        auVar6 = sqrtpd(ZEXT816(0),auVar1);
        dVar5 = auVar6._0_8_;
      }
      param_2[2] = (char)(int)(dVar5 * 256.0);
    }
    else {
      param_2[2] = 0xff;
    }
  }
  else {
    param_2[2] = 0;
  }
  return;
}



// FUNCTION 1454c5a80 FUN_1454c5a80 body=437 status=ok
// SIG undefined FUN_1454c5a80(void)

void FUN_1454c5a80(uint param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = param_1 >> 0xe & 0x3ff;
  if ((uVar2 == 0) ||
     (dVar6 = exp(((double)uVar2 + 0.5) * 0.010830424696249145 - 8.317766166719343), dVar6 <= 0.0))
  {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    return;
  }
  param_1 = param_1 & 0x3fff;
  if (param_1 < 0x3fa1) {
    iVar4 = 0;
    iVar5 = 0xa3;
    do {
      iVar3 = iVar5 + iVar4 >> 1;
      iVar1 = iVar3;
      if (((int)(param_1 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar3 * 8)) < 1) &&
         (iVar5 = iVar3, iVar1 = iVar4, iVar4 = iVar3,
         -1 < (int)(param_1 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar3 * 8)))) break;
      iVar4 = iVar1;
    } while (1 < iVar5 - iVar4);
    dVar8 = ((double)iVar4 + 0.5) * 0.0035000001080334187 + 0.016939999535679817;
    dVar9 = ((double)(int)(param_1 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar4 * 8)) + 0.5) *
            0.0035000001080334187 + (double)*(float *)(&DAT_149d88920 + (longlong)iVar4 * 8);
  }
  else {
    dVar9 = 0.210526316;
    dVar8 = 0.473684211;
  }
  dVar7 = 1.0 / ((dVar9 * 6.0 - dVar8 * 16.0) + 12.0);
  dVar8 = dVar8 * 4.0 * dVar7;
  dVar7 = dVar9 * 9.0 * dVar7;
  param_2[1] = (float)dVar6;
  *param_2 = (float)((dVar7 / dVar8) * dVar6);
  param_2[2] = (float)((((1.0 - dVar7) - dVar8) / dVar8) * dVar6);
  return;
}



// FUNCTION 1454c5c40 FUN_1454c5c40 body=318 status=ok
// SIG undefined FUN_1454c5c40(void)

void FUN_1454c5c40(uint param_1,float *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar1 = (int)param_1 >> 0x10 & 0x7fff;
  if (uVar1 != 0) {
    dVar4 = exp(((double)uVar1 + 0.5) * 0.0027076061740622863 - 44.3614195558365);
    uVar2 = SUB84(dVar4,0);
    uVar1 = (uint)((ulonglong)dVar4 >> 0x20);
    if ((~((uint)((int)param_1 >> 0x10) >> 0xf) & 1) == 0) {
      uVar1 = uVar1 ^ 0x80000000;
    }
    if (0.0 < (double)CONCAT44(uVar1,uVar2)) {
      dVar6 = ((double)(param_1 >> 8 & 0xff) + 0.5) * 0.0024390243902439024;
      dVar5 = ((double)(param_1 & 0xff) + 0.5) * 0.0024390243902439024;
      dVar4 = 1.0 / ((dVar6 * 6.0 - dVar5 * 16.0) + 12.0);
      dVar5 = dVar5 * 4.0 * dVar4;
      dVar4 = dVar6 * 9.0 * dVar4;
      param_2[1] = (float)(double)CONCAT44(uVar1,uVar2);
      *param_2 = (float)((dVar4 / dVar5) * (double)CONCAT44(uVar1,uVar2));
      fVar3 = (float)((((1.0 - dVar4) - dVar5) / dVar5) * (double)CONCAT44(uVar1,uVar2));
      goto LAB_1454c5d69;
    }
  }
  fVar3 = 0.0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
LAB_1454c5d69:
  param_2[2] = fVar3;
  return;
}



// FUNCTION 1454c5d80 FUN_1454c5d80 body=190 status=ok
// SIG undefined FUN_1454c5d80(void)

ulonglong FUN_1454c5d80(double param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  
  if (1.8371976e+19 <= param_1) {
    return 0x7fff;
  }
  if (param_1 <= -1.8371976e+19) {
    return 0xffff;
  }
  if (5.4136769e-20 < param_1) {
    dVar3 = log(param_1);
    uVar2 = FUN_1454c6ea0((dVar3 * 1.4426950408889634 + 64.0) * 256.0,param_2);
    return uVar2;
  }
  if (param_1 < -5.4136769e-20) {
    dVar3 = log(-param_1);
    uVar1 = FUN_1454c6ea0((dVar3 * 1.4426950408889634 + 64.0) * 256.0,param_2);
    return (ulonglong)(uVar1 | 0xffff8000);
  }
  return 0;
}



// FUNCTION 1454c5e40 FUN_1454c5e40 body=266 status=ok
// SIG undefined FUN_1454c5e40(void)

ulonglong FUN_1454c5e40(double param_1,double param_2,int param_3)

{
  double dVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0.016939999535679817 <= param_2) {
    dVar1 = (param_2 - 0.016939999535679817) * 285.7142768952314;
    if (param_3 != 0) {
      iVar2 = rand();
      dVar1 = (dVar1 + (double)iVar2 * 3.051850947599719e-05) - 0.5;
    }
    if ((int)dVar1 < 0xa3) {
      lVar4 = (longlong)(int)dVar1;
      if ((double)*(float *)(&DAT_149d88920 + lVar4 * 8) <= param_1) {
        iVar2 = FUN_1454c6ea0((param_1 - (double)*(float *)(&DAT_149d88920 + lVar4 * 8)) *
                              285.7142768952314,param_3);
        if (iVar2 < *(short *)(&DAT_149d88924 + lVar4 * 8)) {
          uVar3 = (ulonglong)(uint)(*(short *)(&DAT_149d88926 + lVar4 * 8) + iVar2);
        }
        else {
          uVar3 = FUN_1454c7340((int)*(short *)(&DAT_149d88924 + lVar4 * 8),param_2);
        }
      }
      else {
        uVar3 = FUN_1454c7340();
      }
      return uVar3;
    }
  }
  uVar3 = FUN_1454c7340();
  return uVar3;
}



// FUNCTION 1454c5f50 FUN_1454c5f50 body=396 status=ok
// SIG undefined FUN_1454c5f50(void)

undefined8 FUN_1454c5f50(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_144e93e30(param_1,&DAT_149d88ea0,2);
  if (iVar1 == 0) {
    FUN_144e92fd0(param_1[0x87],"TIFFInitSGILog","Merging SGILog codec-specific tags failed");
    return 0;
  }
  lVar2 = FUN_144e92f50(0x38);
  param_1[0x7a] = lVar2;
  if (lVar2 == 0) {
    FUN_144e92fd0(param_1[0x87],"TIFFInitSGILog","%s: No space for LogLuv state block",*param_1);
    return 0;
  }
  FUN_144e92f90(lVar2,0,0x38);
  *(undefined4 *)(lVar2 + 4) = 0xffffffff;
  *(uint *)(lVar2 + 8) = (uint)(param_2 == 0x8775);
  *(undefined **)(lVar2 + 0x20) = &DAT_1454c8c30;
  param_1[0x68] = &LAB_1454c9030;
  param_1[0x69] = FUN_1454c9040;
  param_1[0x71] = FUN_1454c6560;
  param_1[0x73] = FUN_1454c65f0;
  param_1[0x6b] = FUN_1454c91a0;
  param_1[0x72] = FUN_1454c6d80;
  param_1[0x74] = FUN_1454c6e10;
  param_1[0x75] = &LAB_1454c9320;
  param_1[0x77] = FUN_1454c9360;
  *(undefined8 *)(lVar2 + 0x28) = param_1[0x92];
  param_1[0x92] = &LAB_1454c9520;
  *(undefined8 *)(lVar2 + 0x30) = param_1[0x91];
  param_1[0x91] = FUN_1454c93c0;
  return 1;
}



// FUNCTION 1454c60e0 FUN_1454c60e0 body=417 status=ok
// SIG undefined FUN_1454c60e0(void)

undefined8 FUN_1454c60e0(longlong param_1,longlong param_2,longlong param_3)

{
  ushort *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  param_3 = param_3 / (longlong)*(int *)(lVar3 + 0xc);
  lVar9 = param_2;
  if (*(int *)(lVar3 + 4) != 1) {
    if (*(longlong *)(lVar3 + 0x18) < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogL16Decode","Translation buffer too short");
      return 0;
    }
    lVar9 = *(longlong *)(lVar3 + 0x10);
  }
  FUN_144e92f90(lVar9,0,param_3 * 2);
  pbVar8 = *(byte **)(param_1 + 0x408);
  iVar11 = 8;
  lVar10 = *(longlong *)(param_1 + 0x410);
  do {
    lVar4 = 0;
    if (0 < param_3) {
      do {
        if (lVar10 < 1) break;
        uVar6 = (uint)*pbVar8;
        if (*pbVar8 < 0x80) {
          while( true ) {
            lVar10 = lVar10 + -1;
            pbVar8 = pbVar8 + 1;
            if ((lVar10 == 0) || (uVar6 == 0)) break;
            bVar12 = lVar4 == param_3;
            if (param_3 <= lVar4) goto LAB_1454c6209;
            puVar1 = (ushort *)(lVar9 + lVar4 * 2);
            *puVar1 = *puVar1 | (ushort)*pbVar8 << ((byte)iVar11 & 0x1f);
            lVar4 = lVar4 + 1;
            uVar6 = uVar6 - 1;
          }
        }
        else {
          if (lVar10 < 2) break;
          bVar2 = pbVar8[1];
          pbVar8 = pbVar8 + 2;
          lVar10 = lVar10 + -2;
          iVar7 = uVar6 - 0x7e;
          while (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            bVar12 = lVar4 == param_3;
            if (param_3 <= lVar4) goto LAB_1454c6209;
            puVar1 = (ushort *)(lVar9 + lVar4 * 2);
            *puVar1 = *puVar1 | (ushort)bVar2 << ((byte)iVar11 & 0x1f);
            lVar4 = lVar4 + 1;
          }
        }
      } while (lVar4 < param_3);
    }
    bVar12 = lVar4 == param_3;
LAB_1454c6209:
    if (!bVar12) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogL16Decode",
                    "Not enough data at row %lu (short %I64d pixels)",
                    *(undefined4 *)(param_1 + 0x2fc),param_3 - lVar4);
      uVar5 = 0;
      goto LAB_1454c6254;
    }
    iVar11 = iVar11 + -8;
    if (iVar11 < 0) {
      (**(code **)(lVar3 + 0x20))(lVar3,param_2,param_3);
      uVar5 = 1;
LAB_1454c6254:
      *(longlong *)(param_1 + 0x410) = lVar10;
      *(byte **)(param_1 + 0x408) = pbVar8;
      return uVar5;
    }
  } while( true );
}



// FUNCTION 1454c6290 FUN_1454c6290 body=285 status=ok
// SIG undefined FUN_1454c6290(void)

undefined8 FUN_1454c6290(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  param_3 = param_3 / (longlong)*(int *)(lVar4 + 0xc);
  lVar6 = param_2;
  if (*(int *)(lVar4 + 4) != 2) {
    if (*(longlong *)(lVar4 + 0x18) < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvDecode24","Translation buffer too short"
                   );
      return 0;
    }
    lVar6 = *(longlong *)(lVar4 + 0x10);
  }
  puVar5 = *(undefined1 **)(param_1 + 0x408);
  lVar7 = 0;
  lVar8 = *(longlong *)(param_1 + 0x410);
  if (0 < param_3) {
    do {
      if (lVar8 < 3) break;
      uVar3 = *puVar5;
      lVar8 = lVar8 + -3;
      puVar1 = puVar5 + 1;
      puVar2 = puVar5 + 2;
      puVar5 = puVar5 + 3;
      *(uint *)(lVar6 + lVar7 * 4) = (uint)CONCAT21(CONCAT11(uVar3,*puVar1),*puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_3);
  }
  *(undefined1 **)(param_1 + 0x408) = puVar5;
  *(longlong *)(param_1 + 0x410) = lVar8;
  if (lVar7 == param_3) {
    (**(code **)(lVar4 + 0x20))(lVar4,param_2);
    return 1;
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvDecode24",
                "Not enough data at row %lu (short %I64d pixels)",*(undefined4 *)(param_1 + 0x2fc),
                param_3 - lVar7);
  return 0;
}



// FUNCTION 1454c63b0 FUN_1454c63b0 body=424 status=ok
// SIG undefined FUN_1454c63b0(void)

undefined8 FUN_1454c63b0(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  param_3 = param_3 / (longlong)*(int *)(lVar3 + 0xc);
  lVar9 = param_2;
  if (*(int *)(lVar3 + 4) != 2) {
    if (*(longlong *)(lVar3 + 0x18) < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvDecode32","Translation buffer too short"
                   );
      return 0;
    }
    lVar9 = *(longlong *)(lVar3 + 0x10);
  }
  FUN_144e92f90(lVar9,0,param_3 * 4);
  pbVar8 = *(byte **)(param_1 + 0x408);
  iVar11 = 0x18;
  lVar10 = *(longlong *)(param_1 + 0x410);
  do {
    lVar4 = 0;
    if (0 < param_3) {
      do {
        if (lVar10 < 1) break;
        uVar6 = (uint)*pbVar8;
        if (*pbVar8 < 0x80) {
          while( true ) {
            lVar10 = lVar10 + -1;
            pbVar8 = pbVar8 + 1;
            if ((lVar10 == 0) || (uVar6 == 0)) break;
            bVar12 = lVar4 == param_3;
            if (param_3 <= lVar4) goto LAB_1454c64e0;
            puVar1 = (uint *)(lVar9 + lVar4 * 4);
            *puVar1 = *puVar1 | (uint)*pbVar8 << ((byte)iVar11 & 0x1f);
            lVar4 = lVar4 + 1;
            uVar6 = uVar6 - 1;
          }
        }
        else {
          if (lVar10 < 2) break;
          bVar2 = pbVar8[1];
          pbVar8 = pbVar8 + 2;
          lVar10 = lVar10 + -2;
          iVar7 = uVar6 - 0x7e;
          while (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            bVar12 = lVar4 == param_3;
            if (param_3 <= lVar4) goto LAB_1454c64e0;
            puVar1 = (uint *)(lVar9 + lVar4 * 4);
            *puVar1 = *puVar1 | (uint)bVar2 << ((byte)iVar11 & 0x1f);
            lVar4 = lVar4 + 1;
          }
        }
      } while (lVar4 < param_3);
    }
    bVar12 = lVar4 == param_3;
LAB_1454c64e0:
    if (!bVar12) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvDecode32",
                    "Not enough data at row %lu (short %I64d pixels)",
                    *(undefined4 *)(param_1 + 0x2fc),param_3 - lVar4);
      uVar5 = 0;
      goto LAB_1454c652b;
    }
    iVar11 = iVar11 + -8;
    if (iVar11 < 0) {
      (**(code **)(lVar3 + 0x20))(lVar3,param_2,param_3);
      uVar5 = 1;
LAB_1454c652b:
      *(longlong *)(param_1 + 0x410) = lVar10;
      *(byte **)(param_1 + 0x408) = pbVar8;
      return uVar5;
    }
  } while( true );
}



// FUNCTION 1454c6560 FUN_1454c6560 body=130 status=ok
// SIG undefined FUN_1454c6560(void)

bool FUN_1454c6560(longlong param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_144b77aa0();
  bVar3 = false;
  if (lVar2 != 0) {
    while ((param_3 != 0 &&
           (iVar1 = (**(code **)(param_1 + 0x378))(param_1,param_2,lVar2,param_4), iVar1 != 0))) {
      param_2 = param_2 + lVar2;
      param_3 = param_3 - lVar2;
    }
    bVar3 = param_3 == 0;
  }
  return bVar3;
}



// FUNCTION 1454c65f0 FUN_1454c65f0 body=130 status=ok
// SIG undefined FUN_1454c65f0(void)

bool FUN_1454c65f0(longlong param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_144b7ac10();
  bVar3 = false;
  if (lVar2 != 0) {
    while ((param_3 != 0 &&
           (iVar1 = (**(code **)(param_1 + 0x378))(param_1,param_2,lVar2,param_4), iVar1 != 0))) {
      param_2 = param_2 + lVar2;
      param_3 = param_3 - lVar2;
    }
    bVar3 = param_3 == 0;
  }
  return bVar3;
}



// FUNCTION 1454c6680 FUN_1454c6680 body=743 status=ok
// SIG undefined FUN_1454c6680(void)

undefined8 FUN_1454c6680(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  ushort uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  
  lVar12 = *(longlong *)(param_1 + 0x3d0);
  uVar9 = 0;
  param_3 = param_3 / (longlong)*(int *)(lVar12 + 0xc);
  if (*(int *)(lVar12 + 4) != 1) {
    lVar7 = *(longlong *)(lVar12 + 0x10);
    if (*(longlong *)(lVar12 + 0x18) < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogL16Encode","Translation buffer too short");
      return 0;
    }
    (**(code **)(lVar12 + 0x20))(lVar12,param_2,param_3);
    param_2 = lVar7;
  }
  pcVar10 = *(char **)(param_1 + 0x408);
  lVar12 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
  iVar14 = 8;
  do {
    lVar7 = 0;
    if (0 < param_3) {
      do {
        if (lVar12 < 4) {
          *(char **)(param_1 + 0x408) = pcVar10;
          *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar12;
          iVar3 = FUN_144e94730(param_1);
          if (iVar3 == 0) {
            return 0;
          }
          lVar12 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
          pcVar10 = *(char **)(param_1 + 0x408);
        }
        bVar4 = (byte)iVar14;
        uVar13 = 0xff << (bVar4 & 0x1f);
        for (lVar6 = lVar7; lVar6 < param_3; lVar6 = lVar6 + (int)uVar9) {
          uVar9 = 1;
          do {
            if ((param_3 <= (longlong)(uVar9 + lVar6)) ||
               (((int)*(short *)(param_2 + (uVar9 + lVar6) * 2) & uVar13) !=
                (int)(short)(*(ushort *)(param_2 + lVar6 * 2) & (ushort)uVar13))) break;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < 0x81);
          if (3 < (int)uVar9) break;
        }
        if ((lVar6 - lVar7) - 2U < 2) {
          lVar5 = lVar7 + 1;
          uVar11 = *(ushort *)(param_2 + lVar7 * 2) & (ushort)uVar13;
          sVar2 = *(short *)(param_2 + lVar5 * 2);
          while (((int)sVar2 & uVar13) == (int)(short)uVar11) {
            lVar5 = lVar5 + 1;
            if (lVar5 == lVar6) {
              *pcVar10 = ((char)lVar5 - (char)lVar7) + '~';
              pcVar10[1] = (char)((short)uVar11 >> (bVar4 & 0x1f));
              pcVar10 = pcVar10 + 2;
              lVar12 = lVar12 + -2;
              lVar7 = lVar6;
              goto LAB_1454c68c4;
            }
            sVar2 = *(short *)(param_2 + lVar5 * 2);
          }
        }
        while (lVar7 < lVar6) {
          lVar5 = lVar6 - lVar7;
          if (0x7f < lVar5) {
            lVar5 = 0x7f;
          }
          if (lVar12 < lVar5 + 3) {
            *(char **)(param_1 + 0x408) = pcVar10;
            *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar12;
            iVar3 = FUN_144e94730(param_1);
            if (iVar3 == 0) {
              return 0;
            }
            lVar12 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
            pcVar10 = *(char **)(param_1 + 0x408);
          }
          *pcVar10 = (char)lVar5;
          lVar12 = lVar12 + -1;
          pcVar10 = pcVar10 + 1;
          if (lVar5 != 0) {
            lVar12 = lVar12 - lVar5;
            do {
              lVar1 = lVar7 * 2;
              lVar7 = lVar7 + 1;
              *pcVar10 = (char)(*(short *)(param_2 + lVar1) >> (bVar4 & 0x1f));
              pcVar10 = pcVar10 + 1;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
        }
LAB_1454c68c4:
        if ((int)uVar9 < 4) {
          uVar9 = 0;
        }
        else {
          *pcVar10 = (char)uVar9 + '~';
          pcVar10[1] = (char)(*(short *)(param_2 + lVar6 * 2) >> (bVar4 & 0x1f));
          pcVar10 = pcVar10 + 2;
          lVar12 = lVar12 + -2;
        }
        lVar7 = lVar7 + (int)uVar9;
      } while (lVar7 < param_3);
    }
    iVar14 = iVar14 + -8;
    if (iVar14 < 0) {
      *(char **)(param_1 + 0x408) = pcVar10;
      *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar12;
      return 1;
    }
  } while( true );
}



// FUNCTION 1454c6970 FUN_1454c6970 body=298 status=ok
// SIG undefined FUN_1454c6970(void)

undefined8 FUN_1454c6970(longlong param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x3d0);
  param_3 = param_3 / (longlong)*(int *)(lVar4 + 0xc);
  if (*(int *)(lVar4 + 4) != 2) {
    puVar3 = *(undefined1 **)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x18) < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvEncode24","Translation buffer too short"
                   );
      return 0;
    }
    (**(code **)(lVar4 + 0x20))(lVar4,param_2,param_3);
    param_2 = puVar3;
  }
  lVar4 = *(longlong *)(param_1 + 0x3f0);
  puVar3 = *(undefined1 **)(param_1 + 0x408);
  lVar5 = lVar4 - *(longlong *)(param_1 + 0x410);
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      if (lVar5 < 3) {
        *(undefined1 **)(param_1 + 0x408) = puVar3;
        *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar5;
        iVar2 = FUN_144e94730(param_1);
        if (iVar2 == 0) {
          return 0;
        }
        lVar5 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
        puVar3 = *(undefined1 **)(param_1 + 0x408);
      }
      lVar5 = lVar5 + -3;
      *puVar3 = param_2[2];
      puVar3[1] = param_2[1];
      uVar1 = *param_2;
      param_2 = param_2 + 4;
      puVar3[2] = uVar1;
      puVar3 = puVar3 + 3;
    } while (param_3 != 0);
    lVar4 = *(longlong *)(param_1 + 0x3f0);
  }
  *(undefined1 **)(param_1 + 0x408) = puVar3;
  *(longlong *)(param_1 + 0x410) = lVar4 - lVar5;
  return 1;
}



// FUNCTION 1454c6aa0 FUN_1454c6aa0 body=731 status=ok
// SIG undefined FUN_1454c6aa0(void)

undefined8 FUN_1454c6aa0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  lVar12 = *(longlong *)(param_1 + 0x3d0);
  uVar9 = 0;
  param_3 = param_3 / (longlong)*(int *)(lVar12 + 0xc);
  if (*(int *)(lVar12 + 4) != 2) {
    lVar7 = *(longlong *)(lVar12 + 0x10);
    if (*(longlong *)(lVar12 + 0x18) < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvEncode32","Translation buffer too short"
                   );
      return 0;
    }
    (**(code **)(lVar12 + 0x20))(lVar12,param_2,param_3);
    param_2 = lVar7;
  }
  pcVar5 = *(char **)(param_1 + 0x408);
  lVar12 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
  iVar13 = 0x18;
  do {
    lVar7 = 0;
    if (0 < param_3) {
      do {
        if (lVar12 < 4) {
          *(char **)(param_1 + 0x408) = pcVar5;
          *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar12;
          iVar2 = FUN_144e94730(param_1);
          if (iVar2 == 0) {
            return 0;
          }
          lVar12 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
          pcVar5 = *(char **)(param_1 + 0x408);
        }
        bVar3 = (byte)iVar13;
        uVar11 = 0xff << (bVar3 & 0x1f);
        for (lVar6 = lVar7; lVar6 < param_3; lVar6 = lVar6 + (int)uVar9) {
          uVar9 = 1;
          do {
            if ((param_3 <= (longlong)(uVar9 + lVar6)) ||
               ((*(uint *)(param_2 + (uVar9 + lVar6) * 4) & uVar11) !=
                (*(uint *)(param_2 + lVar6 * 4) & uVar11))) break;
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < 0x81);
          if (3 < (int)uVar9) break;
        }
        if ((lVar6 - lVar7) - 2U < 2) {
          lVar4 = lVar7 + 1;
          uVar10 = *(uint *)(param_2 + lVar7 * 4) & uVar11;
          uVar8 = *(uint *)(param_2 + 4 + lVar7 * 4);
          while ((uVar8 & uVar11) == uVar10) {
            lVar4 = lVar4 + 1;
            if (lVar4 == lVar6) {
              *pcVar5 = ((char)lVar4 - (char)lVar7) + '~';
              pcVar5[1] = (char)(uVar10 >> (bVar3 & 0x1f));
              pcVar5 = pcVar5 + 2;
              lVar12 = lVar12 + -2;
              lVar7 = lVar6;
              goto LAB_1454c6ce0;
            }
            uVar8 = *(uint *)(param_2 + lVar4 * 4);
          }
        }
        while (lVar7 < lVar6) {
          lVar4 = lVar6 - lVar7;
          if (0x7f < lVar6 - lVar7) {
            lVar4 = 0x7f;
          }
          if (lVar12 < lVar4 + 3) {
            *(char **)(param_1 + 0x408) = pcVar5;
            *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar12;
            iVar2 = FUN_144e94730(param_1);
            if (iVar2 == 0) {
              return 0;
            }
            lVar12 = *(longlong *)(param_1 + 0x3f0) - *(longlong *)(param_1 + 0x410);
            pcVar5 = *(char **)(param_1 + 0x408);
          }
          *pcVar5 = (char)lVar4;
          lVar12 = lVar12 + -1;
          pcVar5 = pcVar5 + 1;
          if (lVar4 != 0) {
            lVar12 = lVar12 - lVar4;
            do {
              lVar1 = lVar7 * 4;
              lVar7 = lVar7 + 1;
              *pcVar5 = (char)(*(uint *)(param_2 + lVar1) >> (bVar3 & 0x1f));
              pcVar5 = pcVar5 + 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
        }
LAB_1454c6ce0:
        if ((int)uVar9 < 4) {
          uVar9 = 0;
        }
        else {
          *pcVar5 = (char)uVar9 + '~';
          pcVar5[1] = (char)(*(uint *)(param_2 + lVar6 * 4) >> (bVar3 & 0x1f));
          pcVar5 = pcVar5 + 2;
          lVar12 = lVar12 + -2;
        }
        lVar7 = lVar7 + (int)uVar9;
      } while (lVar7 < param_3);
    }
    iVar13 = iVar13 + -8;
    if (iVar13 < 0) {
      *(char **)(param_1 + 0x408) = pcVar5;
      *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x3f0) - lVar12;
      return 1;
    }
  } while( true );
}



// FUNCTION 1454c6d80 FUN_1454c6d80 body=131 status=ok
// SIG undefined FUN_1454c6d80(void)

bool FUN_1454c6d80(longlong param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_144b77aa0();
  bVar3 = false;
  if (lVar2 != 0) {
    while ((param_3 != 0 &&
           (iVar1 = (**(code **)(param_1 + 0x380))(param_1,param_2,lVar2,param_4), iVar1 == 1))) {
      param_2 = param_2 + lVar2;
      param_3 = param_3 - lVar2;
    }
    bVar3 = param_3 == 0;
  }
  return bVar3;
}



// FUNCTION 1454c6e10 FUN_1454c6e10 body=131 status=ok
// SIG undefined FUN_1454c6e10(void)

bool FUN_1454c6e10(longlong param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_144b7ac10();
  bVar3 = false;
  if (lVar2 != 0) {
    while ((param_3 != 0 &&
           (iVar1 = (**(code **)(param_1 + 0x380))(param_1,param_2,lVar2,param_4), iVar1 == 1))) {
      param_2 = param_2 + lVar2;
      param_3 = param_3 - lVar2;
    }
    bVar3 = param_3 == 0;
  }
  return bVar3;
}



// FUNCTION 1454c6ea0 FUN_1454c6ea0 body=78 status=ok
// SIG undefined FUN_1454c6ea0(void)

int FUN_1454c6ea0(double param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return (int)param_1;
  }
  iVar1 = rand();
  return (int)(((double)iVar1 * 3.051850947599719e-05 + param_1) - 0.5);
}



// FUNCTION 1454c6ef0 FUN_1454c6ef0 body=224 status=ok
// SIG undefined FUN_1454c6ef0(void)

void FUN_1454c6ef0(longlong param_1,float *param_2,longlong param_3)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  double dVar4;
  
  if (0 < param_3) {
    psVar3 = *(short **)(param_1 + 0x10);
    do {
      sVar1 = *psVar3;
      param_3 = param_3 + -1;
      uVar2 = (int)sVar1 & 0x7fff;
      if (uVar2 == 0) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = exp(((double)uVar2 + 0.5) * 0.0027076061740622863 - 44.3614195558365);
        if ((~((uint)(int)sVar1 >> 0xf) & 1) == 0) {
          dVar4 = -dVar4;
        }
      }
      psVar3 = psVar3 + 1;
      *param_2 = (float)dVar4;
      param_2 = param_2 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c6fd0 FUN_1454c6fd0 body=361 status=ok
// SIG undefined FUN_1454c6fd0(void)

void FUN_1454c6fd0(longlong param_1,undefined1 *param_2,longlong param_3)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  short *psVar4;
  undefined4 uVar5;
  double dVar6;
  
  if (0 < param_3) {
    psVar4 = *(short **)(param_1 + 0x10);
    do {
      sVar1 = *psVar4;
      param_3 = param_3 + -1;
      uVar3 = (int)sVar1 & 0x7fff;
      if (uVar3 == 0) {
        uVar2 = 0;
      }
      else {
        dVar6 = exp(((double)uVar3 + 0.5) * 0.0027076061740622863 - 44.3614195558365);
        uVar5 = SUB84(dVar6,0);
        uVar3 = (uint)((ulonglong)dVar6 >> 0x20);
        if ((~((uint)(int)sVar1 >> 0xf) & 1) == 0) {
          uVar3 = uVar3 ^ 0x80000000;
        }
        if (0.0 < (double)CONCAT44(uVar3,uVar5)) {
          if ((double)CONCAT44(uVar3,uVar5) < 1.0) {
            if ((double)CONCAT44(uVar3,uVar5) <= 0.0 && (double)CONCAT44(uVar3,uVar5) != 0.0) {
              dVar6 = sqrt((double)CONCAT44(uVar3,uVar5));
            }
            else {
              dVar6 = SQRT((double)CONCAT44(uVar3,uVar5));
            }
            uVar2 = (undefined1)(int)(dVar6 * 256.0);
          }
          else {
            uVar2 = 0xff;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      psVar4 = psVar4 + 1;
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c7140 FUN_1454c7140 body=512 status=ok
// SIG undefined FUN_1454c7140(void)

void FUN_1454c7140(longlong param_1,float *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  double dVar4;
  
  if (0 < param_3) {
    puVar3 = *(ushort **)(param_1 + 0x10);
    do {
      param_3 = param_3 + -1;
      iVar2 = *(int *)(param_1 + 8);
      dVar4 = (double)*param_2;
      if (dVar4 < 1.8371976e+19) {
        if (-1.8371976e+19 < dVar4) {
          if (dVar4 <= 5.4136769e-20) {
            if (-5.4136769e-20 <= dVar4) {
              uVar1 = 0;
            }
            else {
              dVar4 = log(-dVar4);
              dVar4 = (dVar4 * 1.4426950408889634 + 64.0) * 256.0;
              if (iVar2 != 0) {
                iVar2 = rand();
                dVar4 = (dVar4 + (double)iVar2 * 3.051850947599719e-05) - 0.5;
              }
              uVar1 = (ushort)(int)dVar4 | 0x8000;
            }
          }
          else {
            dVar4 = log(dVar4);
            dVar4 = (dVar4 * 1.4426950408889634 + 64.0) * 256.0;
            if (iVar2 != 0) {
              iVar2 = rand();
              dVar4 = (dVar4 + (double)iVar2 * 3.051850947599719e-05) - 0.5;
            }
            uVar1 = (ushort)(int)dVar4;
          }
        }
        else {
          uVar1 = 0xffff;
        }
      }
      else {
        uVar1 = 0x7fff;
      }
      *puVar3 = uVar1;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c7340 FUN_1454c7340 body=1938 status=ok
// SIG undefined FUN_1454c7340(void)

void FUN_1454c7340(double param_1,undefined8 param_2)

{
  double *pdVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  double local_3f0;
  double local_3e8 [100];
  ulonglong local_c8 [22];
  
  local_c8[0] = DAT_14c707940 ^ (ulonglong)auStack_418;
  uVar14 = (undefined4)param_2;
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_3f8 = param_2;
  local_3f0 = param_1;
  if (DAT_14c7fee90 == 0) {
    local_3e8[0x62] = 2.0;
    local_3e8[99] = 2.0;
    local_3e8[0x60] = 2.0;
    local_3e8[0x61] = 2.0;
    local_3e8[0x5e] = 2.0;
    local_3e8[0x5f] = 2.0;
    local_3e8[0x5c] = 2.0;
    local_3e8[0x5d] = 2.0;
    local_3e8[0x5a] = 2.0;
    local_3e8[0x5b] = 2.0;
    local_3e8[0x58] = 2.0;
    local_3e8[0x59] = 2.0;
    local_3e8[0x56] = 2.0;
    local_3e8[0x57] = 2.0;
    local_3e8[0x54] = 2.0;
    local_3e8[0x55] = 2.0;
    local_3e8[0x52] = 2.0;
    local_3e8[0x53] = 2.0;
    local_3e8[0x50] = 2.0;
    local_3e8[0x51] = 2.0;
    local_3e8[0x4e] = 2.0;
    local_3e8[0x4f] = 2.0;
    local_3e8[0x4c] = 2.0;
    local_3e8[0x4d] = 2.0;
    local_3e8[0x4a] = 2.0;
    local_3e8[0x4b] = 2.0;
    local_3e8[0x48] = 2.0;
    local_3e8[0x49] = 2.0;
    local_3e8[0x46] = 2.0;
    local_3e8[0x47] = 2.0;
    local_3e8[0x44] = 2.0;
    local_3e8[0x45] = 2.0;
    local_3e8[0x42] = 2.0;
    local_3e8[0x43] = 2.0;
    local_3e8[0x40] = 2.0;
    local_3e8[0x41] = 2.0;
    local_3e8[0x3e] = 2.0;
    local_3e8[0x3f] = 2.0;
    local_3e8[0x3c] = 2.0;
    local_3e8[0x3d] = 2.0;
    local_3e8[0x3a] = 2.0;
    local_3e8[0x3b] = 2.0;
    local_3e8[0x38] = 2.0;
    local_3e8[0x39] = 2.0;
    local_3e8[0x36] = 2.0;
    local_3e8[0x37] = 2.0;
    local_3e8[0x34] = 2.0;
    local_3e8[0x35] = 2.0;
    local_3e8[0x32] = 2.0;
    local_3e8[0x33] = 2.0;
    local_3e8[0x30] = 2.0;
    local_3e8[0x31] = 2.0;
    local_3e8[0x2e] = 2.0;
    local_3e8[0x2f] = 2.0;
    local_3e8[0x2c] = 2.0;
    local_3e8[0x2d] = 2.0;
    local_3e8[0x2a] = 2.0;
    local_3e8[0x2b] = 2.0;
    local_3e8[0x28] = 2.0;
    local_3e8[0x29] = 2.0;
    local_3e8[0x26] = 2.0;
    local_3e8[0x27] = 2.0;
    local_3e8[0x24] = 2.0;
    local_3e8[0x25] = 2.0;
    local_3e8[0x22] = 2.0;
    local_3e8[0x23] = 2.0;
    local_3e8[0x20] = 2.0;
    local_3e8[0x21] = 2.0;
    local_3e8[0x1e] = 2.0;
    local_3e8[0x1f] = 2.0;
    local_3e8[0x1c] = 2.0;
    local_3e8[0x1d] = 2.0;
    local_3e8[0x1a] = 2.0;
    local_3e8[0x1b] = 2.0;
    local_3e8[0x18] = 2.0;
    local_3e8[0x19] = 2.0;
    local_3e8[0x16] = 2.0;
    local_3e8[0x17] = 2.0;
    local_3e8[0x14] = 2.0;
    local_3e8[0x15] = 2.0;
    local_3e8[0x12] = 2.0;
    local_3e8[0x13] = 2.0;
    local_3e8[0x10] = 2.0;
    local_3e8[0x11] = 2.0;
    local_3e8[0xe] = 2.0;
    local_3e8[0xf] = 2.0;
    local_3e8[0xc] = 2.0;
    local_3e8[0xd] = 2.0;
    local_3e8[10] = 2.0;
    local_3e8[0xb] = 2.0;
    local_3e8[8] = 2.0;
    local_3e8[9] = 2.0;
    local_3e8[6] = 2.0;
    local_3e8[7] = 2.0;
    local_3e8[4] = 2.0;
    local_3e8[5] = 2.0;
    local_3e8[2] = 2.0;
    local_3e8[3] = 2.0;
    local_3e8[0] = 2.0;
    local_3e8[1] = 2.0;
    pcVar6 = "16InitState";
    iVar12 = 0xa3;
    do {
      iVar10 = iVar12;
      iVar12 = iVar10 + -1;
      iVar8 = *(short *)(pcVar6 + -8) + -1;
      if (((iVar12 == 0xa2) || (iVar12 == 0)) || (iVar11 = iVar8, iVar8 < 1)) {
        iVar11 = 1;
      }
      if (-1 < iVar8) {
        fVar2 = *(float *)(pcVar6 + -0xc);
        do {
          dVar13 = atan2((((double)iVar12 + 0.5) * 0.0035000001080334187 + 0.016939999535679817) -
                         0.473684211,
                         (((double)iVar8 + 0.5) * 0.0035000001080334187 + (double)fVar2) -
                         0.210526316);
          dVar13 = dVar13 * 15.915494277358546 + 50.0;
          iVar4 = (int)dVar13;
          lVar5 = (longlong)iVar4;
          dVar13 = dVar13 - ((double)iVar4 + 0.5);
          if (ABS(dVar13) <= local_3e8[lVar5] && local_3e8[lVar5] != ABS(dVar13)) {
            sVar3 = *(short *)(pcVar6 + -6);
            local_3e8[lVar5] = ABS(dVar13);
            *(int *)(&DAT_14c7fed00 + lVar5 * 4) = sVar3 + iVar8;
          }
          iVar8 = iVar8 - iVar11;
        } while (-1 < iVar8);
      }
      pcVar6 = pcVar6 + -8;
    } while (iVar12 != 0);
    puVar9 = &DAT_14c7fee90;
    puVar7 = local_c8;
    iVar12 = iVar10 + 99;
    do {
      pdVar1 = (double *)(puVar7 + -1);
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + -1;
      iVar8 = iVar12 + -1;
      if (1.5 < *pdVar1) {
        iVar4 = iVar12 + 0x61;
        iVar11 = 1;
        iVar10 = iVar12 + 3;
        do {
          if (local_3e8[(iVar10 + -3) % 100] <= 1.5 && local_3e8[(iVar10 + -3) % 100] != 1.5)
          goto LAB_1454c7866;
          if (local_3e8[(iVar12 + iVar11) % 100] <= 1.5 && local_3e8[(iVar12 + iVar11) % 100] != 1.5
             ) {
            iVar11 = iVar11 + 1;
            goto LAB_1454c7866;
          }
          if (local_3e8[(iVar10 + -1) % 100] <= 1.5 && local_3e8[(iVar10 + -1) % 100] != 1.5) {
            iVar11 = iVar11 + 2;
            goto LAB_1454c7866;
          }
          if (local_3e8[iVar10 % 100] <= 1.5 && local_3e8[iVar10 % 100] != 1.5) {
            iVar11 = iVar11 + 3;
            goto LAB_1454c7866;
          }
          if (local_3e8[(iVar10 + 1) % 100] <= 1.5 && local_3e8[(iVar10 + 1) % 100] != 1.5) {
            iVar11 = iVar11 + 4;
            goto LAB_1454c7866;
          }
          if (local_3e8[(iVar10 + 2) % 100] <= 1.5 && local_3e8[(iVar10 + 2) % 100] != 1.5) {
            iVar11 = iVar11 + 5;
            goto LAB_1454c7866;
          }
          if (local_3e8[(iVar10 + 3) % 100] <= 1.5 && local_3e8[(iVar10 + 3) % 100] != 1.5) {
            iVar11 = iVar11 + 6;
            goto LAB_1454c7866;
          }
          if (local_3e8[(iVar10 + 4) % 100] <= 1.5 && local_3e8[(iVar10 + 4) % 100] != 1.5) {
            iVar11 = iVar11 + 7;
            goto LAB_1454c7866;
          }
          iVar11 = iVar11 + 8;
          iVar10 = iVar10 + 8;
        } while (iVar11 < 0x2b);
        if (iVar11 < 0x32) {
          iVar12 = iVar11 + iVar8;
          do {
            if (local_3e8[iVar12 % 100] <= 1.5 && local_3e8[iVar12 % 100] != 1.5) break;
            iVar11 = iVar11 + 1;
            iVar12 = iVar12 + 1;
          } while (iVar11 < 0x32);
        }
LAB_1454c7866:
        iVar12 = 1;
        do {
          if (local_3e8[(iVar4 + 1) % 100] <= 1.5 && local_3e8[(iVar4 + 1) % 100] != 1.5)
          goto LAB_1454c7a30;
          if (local_3e8[iVar4 % 100] <= 1.5 && local_3e8[iVar4 % 100] != 1.5) {
            iVar12 = iVar12 + 1;
            goto LAB_1454c7a30;
          }
          if (local_3e8[(iVar4 + -1) % 100] <= 1.5 && local_3e8[(iVar4 + -1) % 100] != 1.5) {
            iVar12 = iVar12 + 2;
            goto LAB_1454c7a30;
          }
          if (local_3e8[(iVar4 + -2) % 100] <= 1.5 && local_3e8[(iVar4 + -2) % 100] != 1.5) {
            iVar12 = iVar12 + 3;
            goto LAB_1454c7a30;
          }
          if (local_3e8[(iVar4 + -3) % 100] <= 1.5 && local_3e8[(iVar4 + -3) % 100] != 1.5) {
            iVar12 = iVar12 + 4;
            goto LAB_1454c7a30;
          }
          if (local_3e8[(iVar4 + -4) % 100] <= 1.5 && local_3e8[(iVar4 + -4) % 100] != 1.5) {
            iVar12 = iVar12 + 5;
            goto LAB_1454c7a30;
          }
          if (local_3e8[(iVar4 + -5) % 100] <= 1.5 && local_3e8[(iVar4 + -5) % 100] != 1.5) {
            iVar12 = iVar12 + 6;
            goto LAB_1454c7a30;
          }
          if (local_3e8[(iVar4 + -6) % 100] <= 1.5 && local_3e8[(iVar4 + -6) % 100] != 1.5) {
            iVar12 = iVar12 + 7;
            goto LAB_1454c7a30;
          }
          iVar12 = iVar12 + 8;
          iVar4 = iVar4 + -8;
        } while (iVar12 < 0x2b);
        if (iVar12 < 0x32) {
          iVar10 = (iVar8 - iVar12) + 100;
          do {
            if (local_3e8[iVar10 % 100] <= 1.5 && local_3e8[iVar10 % 100] != 1.5) break;
            iVar12 = iVar12 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar12 < 0x32);
        }
LAB_1454c7a30:
        if (iVar11 < iVar12) {
          iVar11 = iVar11 + iVar8;
        }
        else {
          iVar11 = (iVar8 - iVar12) + 100;
        }
        *puVar9 = *(undefined4 *)(&DAT_14c7fed00 + (longlong)(iVar11 % 100) * 4);
      }
      iVar12 = iVar8;
    } while (puVar9 != (undefined4 *)&DAT_14c7fed00);
    uVar14 = (undefined4)local_3f8;
    uVar15 = (undefined4)((ulonglong)local_3f8 >> 0x20);
    DAT_14c7fee90 = 1;
  }
  atan2((double)CONCAT44(uVar15,uVar14) - 0.473684211,local_3f0 - 0.210526316);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c8[0] ^ (ulonglong)auStack_418);
}



// FUNCTION 1454c7b10 FUN_1454c7b10 body=675 status=ok
// SIG undefined FUN_1454c7b10(void)

void FUN_1454c7b10(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  if (0 < param_3) {
    puVar8 = *(uint **)(param_1 + 0x10);
    pfVar5 = (float *)(param_2 + 4);
    do {
      uVar4 = *puVar8;
      param_3 = param_3 + -1;
      uVar2 = uVar4 >> 0xe & 0x3ff;
      if ((uVar2 == 0) ||
         (dVar9 = exp(((double)uVar2 + 0.5) * 0.010830424696249145 - 8.317766166719343),
         dVar9 <= 0.0)) {
        pfVar5[-1] = 0.0;
        pfVar5[0] = 0.0;
        fVar11 = 0.0;
      }
      else {
        uVar4 = uVar4 & 0x3fff;
        if (uVar4 < 0x3fa1) {
          iVar7 = 0xa3;
          iVar6 = 0;
          do {
            iVar3 = iVar7 + iVar6 >> 1;
            iVar1 = iVar3;
            if (((int)(uVar4 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar3 * 8)) < 1) &&
               (iVar7 = iVar3, iVar1 = iVar6,
               -1 < (int)(uVar4 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar3 * 8)))) break;
            iVar3 = iVar1;
            iVar6 = iVar3;
          } while (1 < iVar7 - iVar3);
          dVar12 = ((double)iVar3 + 0.5) * 0.0035000001080334187 + 0.016939999535679817;
          dVar13 = ((double)(int)(uVar4 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar3 * 8)) +
                   0.5) * 0.0035000001080334187 +
                   (double)*(float *)(&DAT_149d88920 + (longlong)iVar3 * 8);
        }
        else {
          dVar13 = 0.210526316;
          dVar12 = 0.473684211;
        }
        dVar10 = 1.0 / ((dVar13 * 6.0 - dVar12 * 16.0) + 12.0);
        dVar13 = dVar13 * 9.0 * dVar10;
        dVar10 = dVar12 * 4.0 * dVar10;
        *pfVar5 = (float)dVar9;
        pfVar5[-1] = (float)((dVar13 / dVar10) * dVar9);
        fVar11 = (float)((((1.0 - dVar13) - dVar10) / dVar10) * dVar9);
      }
      pfVar5[1] = fVar11;
      puVar8 = puVar8 + 1;
      pfVar5 = pfVar5 + 3;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c7dc0 FUN_1454c7dc0 body=377 status=ok
// SIG undefined FUN_1454c7dc0(void)

void FUN_1454c7dc0(longlong param_1,short *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  
  if (0 < param_3) {
    puVar3 = *(uint **)(param_1 + 0x10);
    do {
      param_3 = param_3 + -1;
      *param_2 = ((ushort)(*puVar3 >> 0xc) & 0xffd) + 0x3402;
      uVar6 = *puVar3 & 0x3fff;
      if (uVar6 < 0x3fa1) {
        iVar4 = 0;
        iVar5 = 0xa3;
        do {
          iVar2 = iVar5 + iVar4 >> 1;
          iVar1 = iVar2;
          if (((int)(uVar6 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar2 * 8)) < 1) &&
             (iVar5 = iVar2, iVar1 = iVar4, iVar4 = iVar2,
             -1 < (int)(uVar6 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar2 * 8)))) break;
          iVar4 = iVar1;
        } while (1 < iVar5 - iVar4);
        dVar8 = ((double)iVar4 + 0.5) * 0.0035000001080334187 + 0.016939999535679817;
        dVar7 = ((double)(int)(uVar6 - (int)*(short *)(&DAT_149d88926 + (longlong)iVar4 * 8)) + 0.5)
                * 0.0035000001080334187 + (double)*(float *)(&DAT_149d88920 + (longlong)iVar4 * 8);
      }
      else {
        dVar7 = 0.210526316;
        dVar8 = 0.473684211;
      }
      puVar3 = puVar3 + 1;
      param_2[1] = (short)(int)(dVar7 * 32768.0);
      param_2[2] = (short)(int)(dVar8 * 32768.0);
      param_2 = param_2 + 3;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c7f40 FUN_1454c7f40 body=89 status=ok
// SIG undefined FUN_1454c7f40(void)

void FUN_1454c7f40(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined1 local_18 [16];
  
  if (0 < param_3) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    do {
      param_3 = param_3 + -1;
      FUN_1454c5a80(*puVar1,local_18);
      puVar1 = puVar1 + 1;
      FUN_1454c58f0(local_18,param_2);
      param_2 = param_2 + 3;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c7fa0 FUN_1454c7fa0 body=560 status=ok
// SIG undefined FUN_1454c7fa0(void)

void FUN_1454c7fa0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint *puVar4;
  double dVar5;
  
  if (0 < param_3) {
    puVar4 = *(uint **)(param_1 + 0x10);
    pfVar3 = (float *)(param_2 + 4);
    do {
      param_3 = param_3 + -1;
      iVar2 = *(int *)(param_1 + 8);
      dVar5 = (double)*pfVar3;
      if (dVar5 < 15.742) {
        if (0.00024283 < dVar5) {
          dVar5 = log(dVar5);
          dVar5 = (dVar5 * 1.4426950408889634 + 12.0) * 64.0;
          if (iVar2 != 0) {
            iVar2 = rand();
            dVar5 = (dVar5 + (double)iVar2 * 3.051850947599719e-05) - 0.5;
          }
          iVar2 = (int)dVar5;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0x3ff;
      }
      uVar1 = FUN_1454c5e40();
      if ((int)uVar1 < 0) {
        uVar1 = FUN_1454c5e40();
      }
      pfVar3 = pfVar3 + 3;
      *puVar4 = iVar2 << 0xe | uVar1;
      puVar4 = puVar4 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c81d0 FUN_1454c81d0 body=438 status=ok
// SIG undefined FUN_1454c81d0(void)

void FUN_1454c81d0(longlong param_1,longlong param_2,longlong param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  uint *puVar5;
  
  if (0 < param_3) {
    puVar5 = *(uint **)(param_1 + 0x10);
    psVar4 = (short *)(param_2 + 2);
    do {
      sVar1 = psVar4[-1];
      param_3 = param_3 + -1;
      if (sVar1 < 1) {
        iVar3 = 0;
      }
      else if (sVar1 < 0x1cf2) {
        if (*(int *)(param_1 + 8) == 0) {
          iVar3 = sVar1 + -0xcf2 >> 2;
        }
        else {
          iVar3 = rand();
          iVar3 = (int)(((double)iVar3 * 3.051850947599719e-05 +
                        ((double)(int)sVar1 - 3314.0) * 0.25) - 0.5);
        }
      }
      else {
        iVar3 = 0x3ff;
      }
      uVar2 = FUN_1454c5e40(((double)(int)*psVar4 + 0.5) * 3.0517578125e-05,
                            ((double)(int)psVar4[1] + 0.5) * 3.0517578125e-05,
                            *(undefined4 *)(param_1 + 8));
      if ((int)uVar2 < 0) {
        uVar2 = FUN_1454c5e40();
      }
      psVar4 = psVar4 + 3;
      *puVar5 = iVar3 << 0xe | uVar2;
      puVar5 = puVar5 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c8390 FUN_1454c8390 body=579 status=ok
// SIG undefined FUN_1454c8390(void)

void FUN_1454c8390(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint *puVar4;
  undefined4 uVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  if (0 < param_3) {
    puVar4 = *(uint **)(param_1 + 0x10);
    pfVar3 = (float *)(param_2 + 4);
    do {
      uVar1 = *puVar4;
      param_3 = param_3 + -1;
      uVar2 = (int)uVar1 >> 0x10 & 0x7fff;
      if (uVar2 == 0) {
LAB_1454c8545:
        pfVar3[-1] = 0.0;
        pfVar3[0] = 0.0;
        fVar7 = 0.0;
      }
      else {
        dVar6 = exp(((double)uVar2 + 0.5) * 0.0027076061740622863 - 44.3614195558365);
        uVar5 = SUB84(dVar6,0);
        uVar2 = (uint)((ulonglong)dVar6 >> 0x20);
        if ((~((uint)((int)uVar1 >> 0x10) >> 0xf) & 1) == 0) {
          uVar2 = uVar2 ^ 0x80000000;
        }
        if ((double)CONCAT44(uVar2,uVar5) <= 0.0) goto LAB_1454c8545;
        dVar9 = ((double)(uVar1 >> 8 & 0xff) + 0.5) * 0.0024390243902439024;
        dVar8 = ((double)(uVar1 & 0xff) + 0.5) * 0.0024390243902439024;
        dVar6 = 1.0 / ((dVar9 * 6.0 - dVar8 * 16.0) + 12.0);
        dVar9 = dVar9 * 9.0 * dVar6;
        dVar6 = dVar8 * 4.0 * dVar6;
        *pfVar3 = (float)(double)CONCAT44(uVar2,uVar5);
        pfVar3[-1] = (float)((dVar9 / dVar6) * (double)CONCAT44(uVar2,uVar5));
        fVar7 = (float)((((1.0 - dVar9) - dVar6) / dVar6) * (double)CONCAT44(uVar2,uVar5));
      }
      pfVar3[1] = fVar7;
      puVar4 = puVar4 + 1;
      pfVar3 = pfVar3 + 3;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c87e0 FUN_1454c87e0 body=89 status=ok
// SIG undefined FUN_1454c87e0(void)

void FUN_1454c87e0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined1 local_18 [16];
  
  if (0 < param_3) {
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    do {
      param_3 = param_3 + -1;
      FUN_1454c5c40(*puVar1,local_18);
      puVar1 = puVar1 + 1;
      FUN_1454c58f0(local_18,param_2);
      param_2 = param_2 + 3;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c8840 FUN_1454c8840 body=574 status=ok
// SIG undefined FUN_1454c8840(void)

void FUN_1454c8840(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  uint *puVar9;
  double dVar10;
  
  if (0 < param_3) {
    puVar9 = *(uint **)(param_1 + 0x10);
    pfVar7 = (float *)(param_2 + 4);
    do {
      param_3 = param_3 + -1;
      iVar5 = *(int *)(param_1 + 8);
      iVar3 = FUN_1454c5d80((double)*pfVar7,iVar5);
      dVar1 = 0.210526316;
      dVar2 = 0.473684211;
      if ((iVar3 == 0) ||
         (dVar10 = (double)pfVar7[1] * 3.0 + (double)*pfVar7 * 15.0 + (double)pfVar7[-1],
         dVar10 <= 0.0)) {
LAB_1454c8979:
        dVar1 = dVar1 * 410.0;
        if (iVar5 != 0) {
          iVar4 = rand();
          dVar1 = (dVar1 + (double)iVar4 * 3.051850947599719e-05) - 0.5;
        }
        uVar8 = (uint)dVar1;
        if (0xff < uVar8) {
          uVar8 = 0xff;
        }
      }
      else {
        dVar1 = ((double)pfVar7[-1] * 4.0) / dVar10;
        dVar2 = ((double)*pfVar7 * 9.0) / dVar10;
        if (0.0 < dVar1) goto LAB_1454c8979;
        uVar8 = 0;
      }
      if (0.0 < dVar2) {
        dVar2 = dVar2 * 410.0;
        if (iVar5 != 0) {
          iVar5 = rand();
          dVar2 = (dVar2 + (double)iVar5 * 3.051850947599719e-05) - 0.5;
        }
        uVar6 = (uint)dVar2;
        if (0xff < uVar6) {
          uVar6 = 0xff;
        }
      }
      else {
        uVar6 = 0;
      }
      pfVar7 = pfVar7 + 3;
      *puVar9 = (iVar3 << 8 | uVar8) << 8 | uVar6;
      puVar9 = puVar9 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c8a80 FUN_1454c8a80 body=431 status=ok
// SIG undefined FUN_1454c8a80(void)

void FUN_1454c8a80(longlong param_1,longlong param_2,longlong param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  short *psVar5;
  uint uVar6;
  double dVar7;
  
  if (0 < param_3) {
    puVar4 = *(uint **)(param_1 + 0x10);
    if (*(int *)(param_1 + 8) == 0) {
      psVar5 = (short *)(param_2 + 2);
      do {
        param_3 = param_3 + -1;
        *puVar4 = ((uint)(psVar5[1] * 0x19a) >> 8 & 0x7f80 | *psVar5 * 0x19a & 0x7f8000U) >> 7 |
                  (int)psVar5[-1] << 0x10;
        puVar4 = puVar4 + 1;
        psVar5 = psVar5 + 3;
      } while (0 < param_3);
      return;
    }
    psVar5 = (short *)(param_2 + 4);
    do {
      sVar2 = psVar5[-1];
      param_3 = param_3 + -1;
      if (*(int *)(param_1 + 8) == 0) {
        uVar6 = (uint)((double)(int)sVar2 * 0.01251220703125);
        dVar7 = (double)(int)*psVar5 * 0.01251220703125;
      }
      else {
        iVar3 = rand();
        dVar7 = (double)(int)*psVar5 * 0.01251220703125;
        uVar6 = (uint)(((double)iVar3 * 3.051850947599719e-05 +
                       (double)(int)sVar2 * 0.01251220703125) - 0.5);
        if (*(int *)(param_1 + 8) != 0) {
          iVar3 = rand();
          dVar7 = (dVar7 + (double)iVar3 * 3.051850947599719e-05) - 0.5;
        }
      }
      psVar1 = psVar5 + -2;
      psVar5 = psVar5 + 3;
      *puVar4 = (uVar6 & 0xff) << 8 | (int)dVar7 & 0xffU | (int)*psVar1 << 0x10;
      puVar4 = puVar4 + 1;
    } while (0 < param_3);
  }
  return;
}



// FUNCTION 1454c8c40 FUN_1454c8c40 body=376 status=ok
// SIG undefined FUN_1454c8c40(void)

undefined8 FUN_1454c8c40(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(short *)(param_1 + 0x72) != 1) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogL16InitState",
                  "Sorry, can not handle LogL image with %s=%d","Samples/pixel",
                  *(short *)(param_1 + 0x72));
    return 0;
  }
  iVar5 = *(int *)(lVar1 + 4);
  if (iVar5 == -1) {
    uVar4 = *(ushort *)(param_1 + 0x66) | 8 | (uint)*(ushort *)(param_1 + 100) << 6;
    if (uVar4 < 0x40b) {
      if (uVar4 != 0x40a) {
        if ((uVar4 == 0x209) || (uVar4 == 0x20c)) {
          iVar5 = 3;
          goto LAB_1454c8ccb;
        }
        if (uVar4 != 0x409) goto LAB_1454c8cff;
      }
LAB_1454c8cc6:
      iVar5 = 1;
    }
    else {
      if (uVar4 == 0x40c) goto LAB_1454c8cc6;
      if (uVar4 == 0x80b) {
        iVar5 = 0;
      }
      else {
LAB_1454c8cff:
        iVar5 = -1;
      }
    }
LAB_1454c8ccb:
    *(int *)(lVar1 + 4) = iVar5;
  }
  if (iVar5 == 0) {
    *(undefined4 *)(lVar1 + 0xc) = 4;
  }
  else if (iVar5 == 1) {
    *(undefined4 *)(lVar1 + 0xc) = 2;
  }
  else {
    if (iVar5 != 3) {
      pcVar7 = "No support for converting user data format to LogL";
      goto LAB_1454c8d98;
    }
    *(undefined4 *)(lVar1 + 0xc) = 1;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x48);
    uVar4 = *(uint *)(param_1 + 0x74);
    if (*(uint *)(param_1 + 0x4c) <= *(uint *)(param_1 + 0x74)) {
      uVar4 = *(uint *)(param_1 + 0x4c);
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = *(uint *)(param_1 + 0x58);
  }
  uVar2 = FUN_144b7a8a0(0,uVar6,uVar4,0);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  lVar3 = FUN_144b7a8a0(0,uVar2,2);
  if (lVar3 != 0) {
    lVar3 = FUN_144e92f50(*(longlong *)(lVar1 + 0x18) * 2);
    *(longlong *)(lVar1 + 0x10) = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  pcVar7 = "No space for SGILog translation buffer";
LAB_1454c8d98:
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogL16InitState",pcVar7);
  return 0;
}



// FUNCTION 1454c8dc0 FUN_1454c8dc0 body=399 status=ok
// SIG undefined FUN_1454c8dc0(void)

undefined8 FUN_1454c8dc0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (*(short *)(param_1 + 0x9a) != 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x438);
    pcVar9 = "SGILog compression cannot handle non-contiguous data";
    goto LAB_1454c8f36;
  }
  iVar6 = *(int *)(lVar1 + 4);
  if (iVar6 == -1) {
    iVar8 = -1;
    switch((uint)*(ushort *)(param_1 + 100) << 3 | (uint)*(ushort *)(param_1 + 0x66)) {
    case 0x41:
    case 0x44:
      iVar6 = 3;
      iVar5 = 3;
      break;
    default:
      iVar6 = -1;
      iVar5 = iVar8;
      break;
    case 0x81:
    case 0x82:
    case 0x84:
      iVar6 = 1;
      iVar5 = 1;
      break;
    case 0x101:
    case 0x102:
    case 0x104:
      iVar6 = 2;
      iVar5 = 2;
      break;
    case 0x103:
      iVar6 = 0;
      iVar5 = 0;
    }
    if (*(short *)(param_1 + 0x72) == 1) {
      if (iVar5 != 2) {
        iVar6 = -1;
      }
    }
    else {
      iVar6 = iVar8;
      if ((*(short *)(param_1 + 0x72) == 3) && (iVar6 = iVar5, iVar5 == 2)) {
        iVar6 = iVar8;
      }
    }
    *(int *)(lVar1 + 4) = iVar6;
  }
  if (iVar6 == 0) {
    *(undefined4 *)(lVar1 + 0xc) = 0xc;
LAB_1454c8eb9:
    if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x48);
      uVar2 = *(uint *)(param_1 + 0x74);
      if (*(uint *)(param_1 + 0x4c) <= *(uint *)(param_1 + 0x74)) {
        uVar2 = *(uint *)(param_1 + 0x4c);
      }
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x54);
      uVar2 = *(uint *)(param_1 + 0x58);
    }
    uVar3 = FUN_144b7a8a0(0,uVar7,uVar2,0);
    *(undefined8 *)(lVar1 + 0x18) = uVar3;
    lVar4 = FUN_144b7a8a0(0,uVar3,4);
    if (lVar4 != 0) {
      lVar4 = FUN_144e92f50(*(longlong *)(lVar1 + 0x18) << 2);
      *(longlong *)(lVar1 + 0x10) = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
    }
    pcVar9 = "No space for SGILog translation buffer";
  }
  else {
    if (iVar6 == 1) {
      *(undefined4 *)(lVar1 + 0xc) = 6;
      goto LAB_1454c8eb9;
    }
    if (iVar6 == 2) {
      *(undefined4 *)(lVar1 + 0xc) = 4;
      goto LAB_1454c8eb9;
    }
    if (iVar6 == 3) {
      *(undefined4 *)(lVar1 + 0xc) = 3;
      goto LAB_1454c8eb9;
    }
    pcVar9 = "No support for converting user data format to LogLuv";
  }
  uVar3 = *(undefined8 *)(param_1 + 0x438);
LAB_1454c8f36:
  FUN_144e92fd0(uVar3,"LogLuvInitState",pcVar9);
  return 0;
}



// FUNCTION 1454c9040 FUN_1454c9040 body=350 status=ok
// SIG undefined FUN_1454c9040(void)

undefined8 FUN_1454c9040(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x3d0);
  *(undefined **)(param_1 + 0x468) = &DAT_144b83080;
  sVar1 = *(short *)(param_1 + 0x6a);
  if (sVar1 == -0x7fb4) {
    iVar3 = FUN_1454c8c40(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    *(code **)(param_1 + 0x378) = FUN_1454c60e0;
    if (*(int *)(lVar2 + 4) == 0) {
      pcVar4 = FUN_1454c6ef0;
    }
    else {
      if (*(int *)(lVar2 + 4) != 3) {
        return 1;
      }
      pcVar4 = FUN_1454c6fd0;
    }
  }
  else {
    if (sVar1 != -0x7fb3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvSetupDecode",
                    "Inappropriate photometric interpretation %d for SGILog compression; %s",sVar1,
                    "must be either LogLUV or LogL");
      return 0;
    }
    iVar3 = FUN_1454c8dc0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0x68) == -0x788b) {
      *(code **)(param_1 + 0x378) = FUN_1454c6290;
      iVar3 = *(int *)(lVar2 + 4);
      if (iVar3 == 0) {
        pcVar4 = FUN_1454c7b10;
      }
      else if (iVar3 == 1) {
        pcVar4 = FUN_1454c7dc0;
      }
      else {
        if (iVar3 != 3) {
          return 1;
        }
        pcVar4 = FUN_1454c7f40;
      }
    }
    else {
      *(code **)(param_1 + 0x378) = FUN_1454c63b0;
      iVar3 = *(int *)(lVar2 + 4);
      if (iVar3 == 0) {
        pcVar4 = FUN_1454c8390;
      }
      else if (iVar3 == 1) {
        pcVar4 = (code *)&LAB_1454c85e0;
      }
      else {
        if (iVar3 != 3) {
          return 1;
        }
        pcVar4 = FUN_1454c87e0;
      }
    }
  }
  *(code **)(lVar2 + 0x20) = pcVar4;
  return 1;
}



// FUNCTION 1454c91a0 FUN_1454c91a0 body=370 status=ok
// SIG undefined FUN_1454c91a0(void)

undefined8 FUN_1454c91a0(longlong param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  
  sVar1 = *(short *)(param_1 + 0x6a);
  puVar2 = *(undefined4 **)(param_1 + 0x3d0);
  if (sVar1 == -0x7fb4) {
    iVar3 = FUN_1454c8c40(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    *(code **)(param_1 + 0x380) = FUN_1454c6680;
    iVar3 = puVar2[1];
    if (iVar3 != 0) {
LAB_1454c92a5:
      if (iVar3 != 1) {
        pcVar5 = "XYZ, Luv";
        if (*(short *)(param_1 + 0x6a) == -0x7fb4) {
          pcVar5 = "Y, L";
        }
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvSetupEncode",
                      "SGILog compression supported only for %s, or raw data",pcVar5);
        return 0;
      }
      goto LAB_1454c92f7;
    }
    pcVar4 = FUN_1454c7140;
  }
  else {
    if (sVar1 != -0x7fb3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"LogLuvSetupEncode",
                    "Inappropriate photometric interpretation %d for SGILog compression; %s",sVar1,
                    "must be either LogLUV or LogL");
      return 0;
    }
    iVar3 = FUN_1454c8dc0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(short *)(param_1 + 0x68) == -0x788b) {
      *(code **)(param_1 + 0x380) = FUN_1454c6970;
      if (puVar2[1] == 0) {
        pcVar4 = FUN_1454c7fa0;
      }
      else {
        iVar3 = puVar2[1] + -1;
        if (iVar3 != 0) goto LAB_1454c92a5;
        pcVar4 = FUN_1454c81d0;
      }
    }
    else {
      *(code **)(param_1 + 0x380) = FUN_1454c6aa0;
      if (puVar2[1] == 0) {
        pcVar4 = FUN_1454c8840;
      }
      else {
        iVar3 = puVar2[1] + -1;
        if (iVar3 != 0) goto LAB_1454c92a5;
        pcVar4 = FUN_1454c8a80;
      }
    }
  }
  *(code **)(puVar2 + 8) = pcVar4;
LAB_1454c92f7:
  *puVar2 = 1;
  return 1;
}



// FUNCTION 1454c9360 FUN_1454c9360 body=93 status=ok
// SIG undefined FUN_1454c9360(void)

void FUN_1454c9360(longlong param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)((longlong)_Memory + 0x28);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)((longlong)_Memory + 0x30);
  if (*(void **)((longlong)_Memory + 0x10) != (void *)0x0) {
    free(*(void **)((longlong)_Memory + 0x10));
  }
  free(_Memory);
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  FUN_144e93410(param_1);
  return;
}



// FUNCTION 1454c93c0 FUN_1454c93c0 body=339 status=ok
// SIG undefined FUN_1454c93c0(void)

undefined8 FUN_1454c93c0(undefined8 *param_1,int param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = param_1[0x7a];
  if (param_2 == 0x10018) {
    iVar1 = *param_3;
    *(int *)(lVar2 + 4) = iVar1;
    if (iVar1 == 0) {
      uVar5 = 0x20;
      uVar4 = 3;
    }
    else if (iVar1 == 1) {
      uVar5 = 0x10;
      uVar4 = 2;
    }
    else if (iVar1 == 2) {
      uVar4 = 1;
      uVar5 = 0x20;
      FUN_144b78170(param_1,0x115,1);
    }
    else {
      if (iVar1 != 3) {
        FUN_144e92fd0(param_1[0x87],*param_1,"Unknown data format %d for LogLuv compression");
        return 0;
      }
      uVar5 = 8;
      uVar4 = 1;
    }
    FUN_144b78170(param_1,0x102,uVar5);
    FUN_144b78170(param_1,0x153,uVar4);
    if ((*(uint *)(param_1 + 2) & 0x400) == 0) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = FUN_144b7ac50(param_1);
    }
    param_1[0x66] = uVar3;
    uVar3 = FUN_144b77aa0(param_1);
    param_1[0x7b] = uVar3;
    return 1;
  }
  if (param_2 != 0x10019) {
                    /* WARNING: Could not recover jumptable at 0x0001454c93e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar2 + 0x30))();
    return uVar3;
  }
  iVar1 = *param_3;
  *(int *)(lVar2 + 8) = iVar1;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    FUN_144e92fd0(param_1[0x87],"LogLuvVSetField","Unknown encoding %d for LogLuv compression");
    return 0;
  }
  return 1;
}



// FUNCTION 1454c9550 FUN_1454c9550 body=131 status=ok
// SIG undefined FUN_1454c9550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454c9550(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1454c955c;
  lVar1 = FUN_144ea6670(0x50,"crypto\\asn1\\x_pkey.c",0x14);
  if (lVar1 != 0) {
    uVar2 = FUN_144efdfd0();
    *(undefined8 *)(lVar1 + 8) = uVar2;
    lVar3 = FUN_144efe930();
    *(longlong *)(lVar1 + 0x10) = lVar3;
    if ((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) {
      return lVar1;
    }
  }
  FUN_1454c95e0(lVar1);
  FUN_144ba24f0(0xd,0xad,0x41,"crypto\\asn1\\x_pkey.c",0x20,uVar4);
  return 0;
}



// FUNCTION 1454c95e0 FUN_1454c95e0 body=104 status=ok
// SIG undefined FUN_1454c95e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454c95e0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144efdff0(*(undefined8 *)(param_1 + 8));
    FUN_144efe950(*(undefined8 *)(param_1 + 0x10));
    FUN_144ba6e60(*(undefined8 *)(param_1 + 0x18));
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x28),"crypto\\asn1\\x_pkey.c",0x2d);
    }
    FUN_144ea6530(param_1,"crypto\\asn1\\x_pkey.c",0x2e);
  }
  return;
}



// FUNCTION 1454c9650 FUN_1454c9650 body=685 status=ok
// SIG undefined FUN_1454c9650(void)

undefined1 * FUN_1454c9650(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 < 1) {
    return (undefined1 *)0x0;
  }
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    *param_3 = bVar1 & 0x7f;
    return (undefined1 *)0x1;
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    if (1 < param_2) {
      if ((param_1[1] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      uVar2 = (bVar1 & 0x1f) << 6 | param_1[1] & 0x3f;
      if (uVar2 < 0x80) {
        return (undefined1 *)0xfffffffc;
      }
      *param_3 = uVar2;
      return (undefined1 *)0x2;
    }
  }
  else if ((bVar1 & 0xf0) == 0xe0) {
    if (2 < param_2) {
      if ((param_1[1] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      uVar2 = (bVar1 & 0xf) << 0xc | (param_1[1] & 0x3f) << 6 | param_1[2] & 0x3f;
      if (uVar2 < 0x800) {
        return (undefined1 *)0xfffffffc;
      }
      *param_3 = uVar2;
      return (undefined1 *)0x3;
    }
  }
  else if ((bVar1 & 0xf8) == 0xf0) {
    if (3 < param_2) {
      if ((param_1[1] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[3] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      uVar2 = (bVar1 & 7) << 0x12 | (param_1[1] & 0x3f) << 0xc |
              (param_1[2] & 0x3f) << 6 | param_1[3] & 0x3f;
      if (uVar2 < 0x10000) {
        return (undefined1 *)0xfffffffc;
      }
      *param_3 = uVar2;
      return (undefined1 *)0x4;
    }
  }
  else if ((bVar1 & 0xfc) == 0xf8) {
    if (4 < param_2) {
      if (((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
          ((param_1[3] & 0xc0) == 0x80)) && ((param_1[4] & 0xc0) == 0x80)) {
        uVar2 = (bVar1 & 3) << 0x18 | (param_1[1] & 0x3f) << 0x12 | (param_1[2] & 0x3f) << 0xc |
                (param_1[3] & 0x3f) << 6 | param_1[4] & 0x3f;
        if (uVar2 < 0x200000) {
          return (undefined1 *)0xfffffffc;
        }
        *param_3 = uVar2;
        return (undefined1 *)0x5;
      }
      return &DAT_fffffffd;
    }
  }
  else {
    if ((bVar1 & 0xfe) != 0xfc) {
      return (undefined1 *)0xfffffffe;
    }
    if (5 < param_2) {
      if ((param_1[1] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[2] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[3] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[4] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      if ((param_1[5] & 0xc0) != 0x80) {
        return &DAT_fffffffd;
      }
      uVar2 = (bVar1 & 1) << 0x1e | (param_1[1] & 0x3f) << 0x18 | (param_1[2] & 0x3f) << 0x12 |
              (param_1[3] & 0x3f) << 0xc | (param_1[4] & 0x3f) << 6 | param_1[5] & 0x3f;
      if (uVar2 < 0x4000000) {
        return (undefined1 *)0xfffffffc;
      }
      *param_3 = uVar2;
      return (undefined1 *)0x6;
    }
  }
  return (undefined1 *)0xffffffff;
}



// FUNCTION 1454c9900 FUN_1454c9900 body=423 status=ok
// SIG undefined FUN_1454c9900(void)

undefined8 FUN_1454c9900(byte *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 == (byte *)0x0) {
    param_2 = 6;
  }
  else if (param_2 < 1) {
    return 0xffffffff;
  }
  bVar2 = (byte)param_3;
  if (0x7f < param_3) {
    if (param_3 < 0x800) {
      if (1 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 6) & 0x1f | 0xc0;
          param_1[1] = bVar2 & 0x3f | 0x80;
        }
        return 2;
      }
    }
    else if (param_3 < 0x10000) {
      if (2 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 0xc) & 0xf | 0xe0;
          param_1[1] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[2] = bVar2 & 0x3f | 0x80;
        }
        return 3;
      }
    }
    else if (param_3 < 0x200000) {
      if (3 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = (byte)(param_3 >> 0x12) & 7 | 0xf0;
          param_1[1] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[3] = bVar2 & 0x3f | 0x80;
        }
        return 4;
      }
    }
    else {
      bVar1 = (byte)(param_3 >> 0x18);
      if (param_3 < 0x4000000) {
        if (4 < param_2) {
          if (param_1 != (byte *)0x0) {
            *param_1 = bVar1 & 3 | 0xf8;
            param_1[1] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
            param_1[2] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
            param_1[3] = (byte)(param_3 >> 6) & 0x3f | 0x80;
            param_1[4] = bVar2 & 0x3f | 0x80;
          }
          return 5;
        }
      }
      else if (5 < param_2) {
        if (param_1 != (byte *)0x0) {
          *param_1 = bVar1 >> 6 & 1 | 0xfc;
          param_1[1] = bVar1 & 0x3f | 0x80;
          param_1[2] = (byte)(param_3 >> 0x12) & 0x3f | 0x80;
          param_1[3] = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
          param_1[4] = (byte)(param_3 >> 6) & 0x3f | 0x80;
          param_1[5] = bVar2 & 0x3f | 0x80;
        }
        return 6;
      }
    }
    return 0xffffffff;
  }
  if (param_1 != (byte *)0x0) {
    *param_1 = bVar2;
  }
  return 1;
}



// FUNCTION 1454c9ab0 FUN_1454c9ab0 body=57 status=ok
// SIG undefined FUN_1454c9ab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454c9ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1454c9c40(param_1,local_res10,param_3,0,0,param_4,param_5);
  return;
}



// FUNCTION 1454c9af0 FUN_1454c9af0 body=45 status=ok
// SIG undefined FUN_1454c9af0(void)

char * FUN_1454c9af0(uint param_1)

{
  if ((param_1 - 0x102 & 0xfffffff7) == 0) {
    param_1 = param_1 & 0xfffffeff;
  }
  if (param_1 < 0x1f) {
    return (&PTR_DAT_149d89320)[(int)param_1];
  }
  return "(unknown)";
}



// FUNCTION 1454c9b20 FUN_1454c9b20 body=265 status=ok
// SIG undefined FUN_1454c9b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454c9b20(undefined8 param_1,int param_2,byte param_3,ulonglong param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454c9b2e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar3 = "cons: ";
  if ((param_4 & 0x20) == 0) {
    pcVar3 = "prim: ";
  }
  iVar1 = FUN_144b9eb80(param_1,pcVar3,6);
  if (iVar1 < 6) goto LAB_1454c9c19;
  FUN_144b9edb0(param_1,param_5,0x80);
  puVar2 = local_a8;
  if ((param_3 & 0xc0) == 0xc0) {
    pcVar3 = "priv [ %d ] ";
LAB_1454c9bd4:
    FUN_144ec7760(local_a8,0x80,pcVar3,param_2);
  }
  else {
    if ((char)param_3 < '\0') {
      pcVar3 = "cont [ %d ]";
      goto LAB_1454c9bd4;
    }
    if ((param_3 & 0x40) != 0) {
      pcVar3 = "appl [ %d ]";
      goto LAB_1454c9bd4;
    }
    if (0x1e < param_2) {
      pcVar3 = "<ASN1 %d>";
      goto LAB_1454c9bd4;
    }
    puVar2 = (undefined1 *)FUN_1454c9af0(param_2);
  }
  FUN_144ec7640(param_1,"%-18s",puVar2);
LAB_1454c9c19:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1454c9c40 FUN_1454c9c40 body=2331 status=ok
// SIG undefined FUN_1454c9c40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1454c9c40(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  int local_74;
  byte *local_70;
  uint local_68;
  undefined4 local_64;
  int local_60;
  byte *local_58;
  byte *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  byte *local_38;
  
  local_64 = 0;
  local_40 = 0;
  local_60 = 0;
  if (0x80 < param_5) {
    FUN_144b9ebc0(param_1,"BAD RECURSION DEPTH\n");
    return 0;
  }
  local_38 = (byte *)*param_2 + param_3;
  pbVar11 = (byte *)*param_2;
joined_r0x0001454c9cc8:
  local_70 = pbVar11;
  local_50 = pbVar11;
  if (param_3 < 1) {
    local_64 = 1;
LAB_1454ca50c:
    piVar8 = (int *)0x0;
LAB_1454ca50e:
    piVar9 = (int *)0x0;
LAB_1454ca510:
    piVar10 = (int *)0x0;
LAB_1454ca512:
    FUN_144ed0860(local_40);
    FUN_144efe950(piVar8);
    FUN_144efe870(piVar9);
    FUN_144efe8e0(piVar10);
    *param_2 = (longlong)local_70;
    return local_64;
  }
  uVar3 = FUN_144f03ea0(&local_70,&local_74,&local_68,&local_44,param_3);
  if ((char)uVar3 < '\0') {
    piVar8 = (int *)0x0;
    piVar9 = (int *)0x0;
    iVar4 = FUN_144b9eb80(param_1,"Error in encoding\n",0x12);
    piVar10 = (int *)0x0;
    if (0 < iVar4) {
      local_64 = 0;
      piVar10 = (int *)0x0;
    }
    goto LAB_1454ca512;
  }
  iVar4 = (int)local_70 - (int)pbVar11;
  param_3 = param_3 - iVar4;
  iVar5 = FUN_144ec7640(param_1,"%5ld:",((int)pbVar11 - (int)*param_2) + param_4);
  if (iVar5 < 1) goto LAB_1454ca50c;
  if (uVar3 == 0x21) {
    iVar5 = FUN_144ec7640(param_1,"d=%-2d hl=%ld l=inf  ",param_5,iVar4);
  }
  else {
    iVar5 = FUN_144ec7640(param_1,"d=%-2d hl=%ld l=%4ld ",param_5,iVar4,local_74);
  }
  if (iVar5 < 1) goto LAB_1454ca50c;
  iVar5 = 0;
  if (param_6 != 0) {
    iVar5 = param_5;
  }
  iVar5 = FUN_1454c9b20(param_1,local_68,local_44,uVar3,iVar5);
  pbVar2 = local_70;
  if (iVar5 == 0) goto LAB_1454ca50c;
  if ((uVar3 & 0x20) != 0) {
    pbVar12 = local_70 + local_74;
    iVar4 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
    pbVar11 = local_38;
    if (0 < iVar4) {
      if (local_74 <= param_3) {
        if ((uVar3 == 0x21) && (local_74 == 0)) {
          do {
            iVar4 = FUN_1454c9c40(param_1,&local_70,(int)pbVar11 - (int)local_70,
                                  ((int)local_70 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                  param_7);
            if (iVar4 == 0) goto LAB_1454ca4d3;
            local_50 = local_70;
          } while ((iVar4 != 2) && (local_70 < pbVar11));
          local_74 = (int)local_70 - (int)pbVar2;
        }
        else {
          local_50 = local_70;
          if (local_70 < pbVar12) {
            iVar4 = local_74;
            do {
              local_50 = local_70;
              iVar5 = FUN_1454c9c40(param_1,&local_70,iVar4,
                                    ((int)local_70 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                    param_7);
              if (iVar5 == 0) goto LAB_1454ca4d3;
              iVar5 = (int)local_50 - (int)local_70;
              local_50 = local_70;
              iVar4 = iVar4 + iVar5;
            } while (local_70 < pbVar12);
          }
        }
        goto LAB_1454c9e48;
      }
      FUN_144ec7640(param_1,"length is greater than %ld\n",param_3);
LAB_1454ca4d3:
      local_64 = 0;
    }
    goto LAB_1454ca50c;
  }
  if (local_44 != 0) {
    local_70 = local_70 + local_74;
    iVar4 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
    if (0 < iVar4) {
      local_50 = local_70;
      goto LAB_1454c9e48;
    }
    goto LAB_1454ca50c;
  }
  local_48 = 0;
  if ((local_68 < 0x1b) && ((0x5dc1000U >> (local_68 & 0x1f) & 1) != 0)) {
    iVar5 = FUN_144b9eb80(param_1,L":Asset",1);
    if ((0 < iVar5) &&
       ((local_74 < 1 || (iVar5 = FUN_144b9eb80(param_1,local_70), iVar5 == local_74))))
    goto LAB_1454ca3f1;
    goto LAB_1454ca50c;
  }
  if (local_68 == 6) {
    local_58 = pbVar11;
    lVar7 = FUN_144ed0910(&local_40,&local_58,local_74 + iVar4);
    if (lVar7 == 0) {
      iVar5 = FUN_144b9ebc0(param_1,":BAD OBJECT");
      if (0 < iVar5) goto LAB_1454ca3ff;
    }
    else {
      iVar5 = FUN_144b9eb80(param_1,L":Asset",1);
      if (0 < iVar5) {
        FUN_144ed09c0(param_1,local_40);
        goto LAB_1454ca3f1;
      }
    }
    goto LAB_1454ca50c;
  }
  if (local_68 == 1) {
    if (local_74 != 1) {
      iVar5 = FUN_144b9ebc0(param_1,":BAD BOOLEAN");
      if (iVar5 < 1) goto LAB_1454ca50c;
      local_60 = 1;
    }
    if (0 < local_74) {
      FUN_144ec7640(param_1,&DAT_149d895f8,*local_70);
    }
  }
  else if (local_68 != 0x1e) {
    if (local_68 == 4) {
      local_58 = pbVar11;
      piVar8 = (int *)FUN_144efe970(0,&local_58,local_74 + iVar4);
      if ((piVar8 != (int *)0x0) && (0 < *piVar8)) {
        local_58 = *(byte **)(piVar8 + 2);
        if (0 < (longlong)*piVar8) {
          pbVar11 = local_58;
          do {
            bVar1 = *pbVar11;
            if (((bVar1 < 0x20) && ((0xffffd9ffU >> (bVar1 & 0x1f) & 1) != 0)) || (0x7e < bVar1)) {
              if (param_7 == 0) {
                iVar5 = FUN_144b9eb80(param_1,"[HEX DUMP]:",0xb);
                if (iVar5 < 1) goto LAB_1454ca50e;
                iVar5 = 0;
                lVar7 = 0;
                if (0 < *piVar8) goto LAB_1454ca110;
                goto LAB_1454ca0d4;
              }
              iVar5 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
              if (iVar5 < 1) goto LAB_1454ca50e;
              if ((param_7 == -1) || (iVar5 = param_7, *piVar8 < param_7)) {
                iVar5 = *piVar8;
              }
              iVar5 = FUN_145287ef0(param_1,local_58,iVar5,6);
              if (iVar5 < 1) goto LAB_1454ca50e;
              local_48 = 1;
              FUN_144efe950(piVar8);
              goto LAB_1454ca3f1;
            }
            pbVar11 = pbVar11 + 1;
          } while ((longlong)pbVar11 - (longlong)local_58 < (longlong)*piVar8);
        }
        iVar5 = FUN_144b9eb80(param_1,L":Asset",1);
        if ((iVar5 < 1) || (iVar5 = FUN_144b9eb80(param_1,local_58,*piVar8), iVar5 < 1))
        goto LAB_1454ca50e;
      }
LAB_1454ca0d4:
      FUN_144efe950(piVar8);
    }
    else {
      if (local_68 == 2) {
        local_58 = pbVar11;
        piVar9 = (int *)FUN_144efe890(0,&local_58,iVar4 + local_74);
        if (piVar9 == (int *)0x0) {
          iVar5 = FUN_144b9ebc0(param_1,":BAD INTEGER");
          if (0 < iVar5) {
            local_60 = 1;
LAB_1454ca283:
            FUN_144efe870(piVar9);
            goto LAB_1454ca3f1;
          }
        }
        else {
          iVar5 = FUN_144b9eb80(param_1,L":Asset",1);
          if ((0 < iVar5) &&
             ((piVar9[1] != 0x102 ||
              (iVar5 = FUN_144b9eb80(param_1,L"-`[Left Bracket",1), 0 < iVar5)))) {
            iVar5 = 0;
            lVar7 = 0;
            if (0 < *piVar9) {
              do {
                iVar6 = FUN_144ec7640(param_1,&DAT_149e01569,
                                      *(undefined1 *)(*(longlong *)(piVar9 + 2) + lVar7));
                if (iVar6 < 1) goto LAB_1454ca265;
                iVar5 = iVar5 + 1;
                lVar7 = lVar7 + 1;
              } while (iVar5 < *piVar9);
            }
            if ((*piVar9 != 0) || (iVar5 = FUN_144b9eb80(param_1,&DAT_149d01adc,2), 0 < iVar5))
            goto LAB_1454ca283;
          }
        }
LAB_1454ca265:
        piVar8 = (int *)0x0;
        goto LAB_1454ca510;
      }
      if (local_68 == 10) {
        local_58 = pbVar11;
        piVar10 = (int *)FUN_144efe900(0,&local_58,local_74 + iVar4);
        if (piVar10 == (int *)0x0) {
          iVar5 = FUN_144b9ebc0(param_1,":BAD ENUMERATED");
          if (0 < iVar5) {
            local_60 = 1;
            FUN_144efe8e0(0);
            goto LAB_1454ca3f1;
          }
        }
        else {
          iVar5 = FUN_144b9eb80(param_1,L":Asset",1);
          if ((0 < iVar5) &&
             ((piVar10[1] != 0x10a ||
              (iVar5 = FUN_144b9eb80(param_1,L"-`[Left Bracket",1), 0 < iVar5)))) {
            iVar5 = 0;
            lVar7 = 0;
            if (0 < *piVar10) {
              do {
                iVar6 = FUN_144ec7640(param_1,&DAT_149e01569,
                                      *(undefined1 *)(lVar7 + *(longlong *)(piVar10 + 2)));
                if (iVar6 < 1) goto LAB_1454ca4dc;
                iVar5 = iVar5 + 1;
                lVar7 = lVar7 + 1;
              } while (iVar5 < *piVar10);
            }
            if ((*piVar10 != 0) || (iVar5 = FUN_144b9eb80(param_1,&DAT_149d01adc,2), 0 < iVar5)) {
              FUN_144efe8e0(piVar10);
              goto LAB_1454ca3f1;
            }
          }
        }
LAB_1454ca4dc:
        piVar8 = (int *)0x0;
        piVar9 = (int *)0x0;
        goto LAB_1454ca512;
      }
      if ((0 < local_74) && (param_7 != 0)) {
        iVar5 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
        if (0 < iVar5) {
          iVar5 = local_74;
          if ((param_7 != -1) && (param_7 <= local_74)) {
            iVar5 = param_7;
          }
          iVar5 = FUN_145287ef0(param_1,local_70,iVar5,6);
          if (0 < iVar5) {
            local_48 = 1;
            goto LAB_1454ca3f1;
          }
        }
        goto LAB_1454ca50c;
      }
    }
  }
LAB_1454ca3f1:
  pbVar11 = local_50;
  if (local_60 != 0) {
LAB_1454ca3ff:
    pbVar11 = pbVar11 + iVar4;
    iVar4 = FUN_144b9ebc0(param_1,&DAT_149d89630);
    if (iVar4 < 1) goto LAB_1454ca50c;
    iVar4 = 0;
    if (0 < local_74) {
      do {
        iVar5 = FUN_144ec7640(param_1,&DAT_149e01569,*pbVar11);
        if (iVar5 < 1) goto LAB_1454ca50c;
        iVar4 = iVar4 + 1;
        pbVar11 = pbVar11 + 1;
      } while (iVar4 < local_74);
    }
    iVar4 = FUN_144b9ebc0(param_1,L"]Right Bracket");
    if (iVar4 < 1) goto LAB_1454ca50c;
    local_60 = 0;
  }
  if ((local_48 == 0) && (iVar4 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1), iVar4 < 1))
  goto LAB_1454ca50c;
  local_70 = local_70 + local_74;
  local_50 = local_70;
  if ((local_68 == 0) && (local_44 == 0)) {
    local_64 = 2;
    goto LAB_1454ca50c;
  }
LAB_1454c9e48:
  param_3 = param_3 - local_74;
  pbVar11 = local_50;
  goto joined_r0x0001454c9cc8;
  while( true ) {
    iVar5 = iVar5 + 1;
    lVar7 = lVar7 + 1;
    if (*piVar8 <= iVar5) break;
LAB_1454ca110:
    iVar6 = FUN_144ec7640(param_1,&DAT_149e01569,local_58[lVar7]);
    if (iVar6 < 1) goto LAB_1454ca50e;
  }
  FUN_144efe950(piVar8);
  goto LAB_1454ca3f1;
}



// FUNCTION 1454ca560 FUN_1454ca560 body=41 status=ok
// SIG undefined FUN_1454ca560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ca560(void)

{
  FUN_1454ca590();
  return;
}



// FUNCTION 1454ca590 FUN_1454ca590 body=1281 status=ok
// SIG undefined FUN_1454ca590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ca590(undefined8 *param_1,longlong param_2,ulonglong param_3,int param_4,uint param_5,
                  int param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  uint local_88;
  int local_84;
  longlong local_80;
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar11 = (code *)0x0;
  local_88 = 0;
  uVar6 = param_3 & 0xffffffff;
  if ((int)param_3 == -1) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(param_2 + uVar6) != '\0');
  }
  if (param_5 == 0) {
    param_5 = 0x2806;
  }
  uVar10 = (uint)uVar6;
  local_84 = param_4;
  local_70 = param_1;
  if (param_4 == 0x1000) {
    uVar9 = uVar6 & 0xffffffff;
    uVar3 = 0;
    lVar7 = param_2;
    uVar8 = uVar10;
    while (uVar10 = uVar3, uVar8 != 0) {
      iVar4 = FUN_1454c9650(lVar7,uVar9,local_78);
      if (iVar4 < 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x55);
        FUN_144ba24f0(0xd,0x7a,0x86,"crypto\\asn1\\a_mbstr.c");
        goto LAB_1454caa6c;
      }
      uVar8 = (int)uVar9 - iVar4;
      uVar9 = (ulonglong)uVar8;
      lVar7 = lVar7 + iVar4;
      uVar3 = uVar10 + 1;
    }
  }
  else if (param_4 != 0x1001) {
    if (param_4 == 0x1002) {
      if ((uVar6 & 1) != 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x41);
        FUN_144ba24f0(0xd,0x7a,0x81,"crypto\\asn1\\a_mbstr.c");
        goto LAB_1454caa6c;
      }
      uVar10 = (int)uVar10 >> 1;
    }
    else {
      if (param_4 != 0x1004) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x5f);
        FUN_144ba24f0(0xd,0x7a,0xa0,"crypto\\asn1\\a_mbstr.c");
        goto LAB_1454caa6c;
      }
      if ((uVar6 & 3) != 0) {
        local_98 = (uint *)CONCAT44(local_98._4_4_,0x4a);
        FUN_144ba24f0(0xd,0x7a,0x85,"crypto\\asn1\\a_mbstr.c");
        goto LAB_1454caa6c;
      }
      uVar10 = (int)uVar10 >> 2;
    }
  }
  iVar2 = param_7;
  iVar4 = param_6;
  if ((0 < param_6) && ((int)uVar10 < param_6)) {
    local_98 = (uint *)CONCAT44(local_98._4_4_,100);
    FUN_144ba24f0(0xd,0x7a,0x98,"crypto\\asn1\\a_mbstr.c");
    FUN_144ec7760(local_68,0x20,&DAT_149d09e5c,iVar4);
    FUN_144ba2bd0(2,"minsize=",local_68);
    goto LAB_1454caa6c;
  }
  if ((0 < param_7) && (param_7 < (int)uVar10)) {
    local_98 = (uint *)CONCAT44(local_98._4_4_,0x6b);
    FUN_144ba24f0(0xd,0x7a,0x97,"crypto\\asn1\\a_mbstr.c");
    FUN_144ec7760(local_68,0x20,&DAT_149d09e5c,iVar2);
    FUN_144ba2bd0(2,"maxsize=",local_68);
    goto LAB_1454caa6c;
  }
  local_98 = &param_5;
  iVar4 = FUN_1454caaa0(param_2,uVar6 & 0xffffffff,local_84,FUN_1454cabe0);
  if (iVar4 < 0) {
    local_98 = (uint *)CONCAT44(local_98._4_4_,0x73);
    FUN_144ba24f0(0xd,0x7a,0x7c,"crypto\\asn1\\a_mbstr.c");
    goto LAB_1454caa6c;
  }
  iVar4 = 0x1001;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x10) == 0) {
        if ((param_5 & 4) == 0) {
          if ((param_5 >> 0xb & 1) == 0) {
            if ((param_5 >> 8 & 1) == 0) {
              uVar8 = 0xc;
              iVar4 = 0x1000;
            }
            else {
              uVar8 = 0x1c;
              iVar4 = 0x1004;
            }
          }
          else {
            uVar8 = 0x1e;
            iVar4 = 0x1002;
          }
        }
        else {
          uVar8 = 0x14;
        }
      }
      else {
        uVar8 = 0x16;
      }
    }
    else {
      uVar8 = 0x13;
    }
  }
  else {
    uVar8 = 0x12;
  }
  if (param_1 == (undefined8 *)0x0) goto LAB_1454caa6c;
  puVar5 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    bVar1 = true;
    puVar5 = (uint *)FUN_144f03c50(uVar8);
    if (puVar5 != (uint *)0x0) {
      *local_70 = puVar5;
      goto LAB_1454ca934;
    }
    local_98 = (uint *)CONCAT44(local_98._4_4_,0x98);
  }
  else {
    bVar1 = false;
    FUN_144ea6530(*(undefined8 *)(puVar5 + 2),"crypto\\asn1\\a_mbstr.c",0x90);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = uVar8;
LAB_1454ca934:
    if (local_84 == iVar4) {
      iVar4 = FUN_144f03d00(puVar5,param_2,uVar6 & 0xffffffff);
      if (iVar4 != 0) goto LAB_1454caa6c;
      local_98 = (uint *)CONCAT44(local_98._4_4_,0xa0);
    }
    else {
      if (iVar4 == 0x1000) {
        local_98 = &local_88;
        local_88 = 0;
        FUN_1454caaa0(param_2,uVar6 & 0xffffffff,local_84,FUN_1454cabb0);
        pcVar11 = FUN_1454cad00;
      }
      else if (iVar4 == 0x1001) {
        pcVar11 = (code *)&LAB_1454caca0;
        local_88 = uVar10;
      }
      else if (iVar4 == 0x1002) {
        pcVar11 = (code *)&LAB_1454cacb0;
        local_88 = uVar10 * 2;
      }
      else if (iVar4 == 0x1004) {
        pcVar11 = (code *)&LAB_1454cacd0;
        local_88 = uVar10 * 4;
      }
      local_80 = FUN_144ea64e0((longlong)(int)(local_88 + 1),"crypto\\asn1\\a_mbstr.c",0xbd);
      if (local_80 != 0) {
        *puVar5 = local_88;
        *(longlong *)(puVar5 + 2) = local_80;
        *(undefined1 *)((int)local_88 + local_80) = 0;
        local_98 = (uint *)&local_80;
        FUN_1454caaa0(param_2,uVar6 & 0xffffffff,local_84,pcVar11);
        goto LAB_1454caa6c;
      }
      if (bVar1) {
        FUN_144f03a80(puVar5);
      }
      local_98 = (uint *)CONCAT44(local_98._4_4_,0xc0);
    }
  }
  FUN_144ba24f0(0xd,0x7a,0x41,"crypto\\asn1\\a_mbstr.c");
LAB_1454caa6c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1454caaa0 FUN_1454caaa0 body=257 status=ok
// SIG undefined FUN_1454caaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454caaa0(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_res10 [2];
  
  do {
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0x1001) {
      bVar4 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
      local_res10[0] = (uint)bVar4;
    }
    else if (param_3 == 0x1002) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      local_res10[0] = (uint)CONCAT11(bVar4,*pbVar1);
      param_2 = param_2 + -2;
    }
    else if (param_3 == 0x1004) {
      bVar4 = *param_1;
      pbVar1 = param_1 + 1;
      pbVar2 = param_1 + 2;
      pbVar3 = param_1 + 3;
      param_1 = param_1 + 4;
      local_res10[0] =
           (uint)bVar4 << 0x18 | (uint)*pbVar1 << 0x10 | (uint)*pbVar2 << 8 | (uint)*pbVar3;
      param_2 = param_2 + -4;
    }
    else {
      iVar5 = FUN_1454c9650(param_1,param_2,local_res10);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      param_2 = param_2 - iVar5;
      param_1 = param_1 + iVar5;
    }
  } while ((param_4 == (code *)0x0) || (uVar6 = (*param_4)(local_res10[0],param_5), 0 < (int)uVar6))
  ;
  return uVar6;
}



// FUNCTION 1454cabb0 FUN_1454cabb0 body=44 status=ok
// SIG undefined FUN_1454cabb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cabb0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1454c9900(0,0xffffffff,param_1);
  *param_2 = *param_2 + iVar1;
  return 1;
}



// FUNCTION 1454cabe0 FUN_1454cabe0 body=191 status=ok
// SIG undefined FUN_1454cabe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cabe0(uint param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_1;
  if (0x7fffffff < param_1) {
    uVar4 = 0x7fffffff;
  }
  if ((uVar3 & 1) != 0) {
    iVar1 = FUN_144ecfdd0(uVar4,4);
    if ((iVar1 == 0) && (uVar4 != 0x20)) {
      uVar3 = uVar3 & 0xfffffffe;
    }
  }
  if ((uVar3 & 2) != 0) {
    iVar1 = FUN_144ecfdd0(uVar4,0x800);
    if (iVar1 == 0) {
      uVar3 = uVar3 & 0xfffffffd;
    }
  }
  if (((uVar3 & 0x10) != 0) && ((uVar4 & 0xffffff80) != 0)) {
    uVar3 = uVar3 & 0xffffffef;
  }
  if (((uVar3 & 4) != 0) && (0xff < param_1)) {
    uVar3 = uVar3 & 0xfffffffb;
  }
  if (((uVar3 >> 0xb & 1) != 0) && (0xffff < param_1)) {
    uVar3 = uVar3 & 0xfffff7ff;
  }
  if (uVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_2 = uVar3;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1454cad00 FUN_1454cad00 body=51 status=ok
// SIG undefined FUN_1454cad00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cad00(undefined4 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1454c9900(*param_2,0xff,param_1);
  *param_2 = *param_2 + (longlong)iVar1;
  return 1;
}



// FUNCTION 1454cad40 FUN_1454cad40 body=450 status=ok
// SIG undefined FUN_1454cad40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454cad40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  
  lVar4 = FUN_144efe800();
  if (lVar4 == 0) {
    FUN_144ba24f0(0x22,0x65,0x41,"crypto\\x509v3\\v3_bitst.c",0x43);
    return 0;
  }
  iVar9 = 0;
  iVar3 = FUN_144babbf0(param_3);
  if (0 < iVar3) {
    do {
      puVar5 = (undefined8 *)FUN_144babc00(param_3,iVar9);
      puVar8 = *(undefined4 **)(param_1 + 0x60);
      pcVar6 = *(char **)(puVar8 + 2);
      if (pcVar6 != (char *)0x0) {
        do {
          pcVar7 = *(char **)(puVar8 + 4);
          lVar10 = puVar5[1] - (longlong)pcVar7;
          do {
            cVar1 = *pcVar7;
            cVar2 = pcVar7[lVar10];
            if (cVar1 != cVar2) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
LAB_1454cae26:
            iVar3 = FUN_1452a30a0(lVar4,*puVar8,1);
            if (iVar3 == 0) {
              FUN_144ba24f0(0x22,0x65,0x41,"crypto\\x509v3\\v3_bitst.c",0x4d);
              FUN_144efe820(lVar4);
              return 0;
            }
            break;
          }
          lVar10 = puVar5[1] - (longlong)pcVar6;
          do {
            cVar1 = *pcVar6;
            cVar2 = pcVar6[lVar10];
            if (cVar1 != cVar2) break;
            pcVar6 = pcVar6 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) goto LAB_1454cae26;
          pcVar6 = *(char **)(puVar8 + 8);
          puVar8 = puVar8 + 6;
        } while (pcVar6 != (char *)0x0);
      }
      if (*(longlong *)(puVar8 + 2) == 0) {
        FUN_144ba24f0(0x22,0x65,0x6f,"crypto\\x509v3\\v3_bitst.c",0x56);
        FUN_144ba2bd0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
        FUN_144efe820(lVar4);
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar3 = FUN_144babbf0(param_3);
    } while (iVar9 < iVar3);
  }
  return lVar4;
}



// FUNCTION 1454caf10 FUN_1454caf10 body=109 status=ok
// SIG undefined FUN_1454caf10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454caf10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 local_res18 [2];
  
  puVar3 = *(undefined4 **)(param_1 + 0x60);
  local_res18[0] = param_3;
  if (*(longlong *)(*(undefined4 **)(param_1 + 0x60) + 2) != 0) {
    do {
      iVar2 = FUN_1452a31e0(param_2,*puVar3);
      if (iVar2 != 0) {
        FUN_144ef5c60(*(undefined8 *)(puVar3 + 2),0,local_res18);
      }
      plVar1 = (longlong *)(puVar3 + 8);
      puVar3 = puVar3 + 6;
    } while (*plVar1 != 0);
    return local_res18[0];
  }
  return param_3;
}



// FUNCTION 1454caf80 FUN_1454caf80 body=321 status=ok
// SIG undefined FUN_1454caf80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454caf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  
  iVar1 = FUN_144babbf0(param_3);
  lVar2 = FUN_144babce0(0,iVar1);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x22,0x67,0x41,"crypto\\x509v3\\v3_extku.c",0x52);
    FUN_144babdb0(0);
    return 0;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(param_3,iVar5);
      lVar4 = puVar3[2];
      if (lVar4 == 0) {
        lVar4 = puVar3[1];
      }
      lVar4 = FUN_144ea90e0(lVar4,0);
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
      if (lVar4 == 0) {
        FUN_144babe00(lVar2,FUN_144ed0860);
        FUN_144ba24f0(0x22,0x67,0x6e,"crypto\\x509v3\\v3_extku.c",CONCAT44(uVar6,0x60));
        FUN_144ba2bd0(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        return 0;
      }
      FUN_144bac1c0(lVar2,lVar4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return lVar2;
}



// FUNCTION 1454cb0d0 FUN_1454cb0d0 body=144 status=ok
// SIG undefined FUN_1454cb0d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cb0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454cb0e0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = 0;
  local_78[0] = param_3;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_144babc00(param_2,iVar3);
      FUN_144ed0b30(local_68,0x50,uVar2);
      FUN_144ef5c60(0,local_68,local_78);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar3 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1454cb190 FUN_1454cb190 body=175 status=ok
// SIG undefined FUN_1454cb190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cb190(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_144ec7640(param_3,&DAT_149c02f70,param_4,&DAT_149e02088);
  if (*param_2 != 0) {
    FUN_144b9eb80(param_3,"Not Before: ",0xc);
    FUN_144ef2040(param_3,*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    FUN_144b9eb80(param_3,&DAT_149dfd133,2);
  }
  if (param_2[1] != 0) {
    FUN_144b9eb80(param_3,"Not After: ",0xb);
    FUN_144ef2040(param_3,param_2[1]);
  }
  return 1;
}



// FUNCTION 1454cb250 FUN_1454cb250 body=301 status=ok
// SIG undefined FUN_1454cb250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454cb250(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 1;
  iVar1 = FUN_144ef1110(&local_res10,*param_2);
  if ((iVar1 == 0) || (0xfffffffe < local_res10 + 0x80000000U)) {
    FUN_144ec7640(param_3,"%*sVersion: <unsupported>",param_4,&DAT_149e02088);
  }
  else {
    FUN_144ec7640(param_3,"%*sVersion: %ld (0x%lX)",param_4,&DAT_149e02088,
                  CONCAT44(uVar5,(int)local_res10 + 1),CONCAT44(uVar6,(int)local_res10));
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(param_2[1],iVar4);
      lVar3 = FUN_144ef5de0(0,*puVar2);
      if (lVar3 == 0) {
        return 0;
      }
      FUN_144ec7640(param_3,"\n%*sZone: %s, User: ",param_4,&DAT_149e02088,lVar3);
      FUN_144ea6530(lVar3,"crypto\\x509v3\\v3_sxnet.c",0x54);
      FUN_1452aafe0(param_3,puVar2[1]);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(param_2[1]);
    } while (iVar4 < iVar1);
  }
  return 1;
}



// FUNCTION 1454cb380 FUN_1454cb380 body=190 status=ok
// SIG undefined FUN_1454cb380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454cb380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res20;
  undefined8 uVar7;
  
  uVar7 = 0x1454cb395;
  uVar5 = 0;
  local_res20 = 0;
  iVar2 = FUN_144babbf0(param_3);
  uVar6 = uVar5;
  if (0 < iVar2) {
    do {
      lVar3 = FUN_144babc00(param_3,uVar5);
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      lVar3 = FUN_144ef5e60(0,*(undefined8 *)(lVar3 + 8));
      if (lVar3 == 0) {
        FUN_144ba24f0(0x22,0x7d,0x83,"crypto\\x509v3\\v3_sxnet.c",0x7b,uVar7);
        return 0;
      }
      iVar2 = FUN_1454cb460(&local_res20,lVar3,uVar1,0xffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      iVar2 = FUN_144babbf0(param_3);
      uVar6 = local_res20;
    } while ((int)uVar4 < iVar2);
  }
  return uVar6;
}



// FUNCTION 1454cb460 FUN_1454cb460 body=474 status=ok
// SIG undefined FUN_1454cb460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cb460(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1454cb479;
  plVar5 = (longlong *)0x0;
  uVar6 = param_4 & 0xffffffff;
  if (((param_1 == (longlong *)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    FUN_144ba24f0(0x22,0x7e,0x6b,"crypto\\x509v3\\v3_sxnet.c",0x9e,0x1454cb479);
    return 0;
  }
  lVar7 = -1;
  if ((int)param_4 == -1) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (*(char *)(param_3 + uVar6) != '\0');
  }
  iVar2 = (int)uVar6;
  if (0x40 < iVar2) {
    FUN_144ba24f0(0x22,0x7e,0x84,"crypto\\x509v3\\v3_sxnet.c",0xa4,0x1454cb479);
    return 0;
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_144efec20(&DAT_149d89cd0);
    if ((puVar3 == (undefined8 *)0x0) || (iVar1 = FUN_144ef1150(*puVar3,0), iVar1 == 0))
    goto LAB_1454cb5c8;
    *param_1 = (longlong)puVar3;
  }
  lVar4 = FUN_1454cb640(puVar3,param_2);
  if (lVar4 != 0) {
    FUN_144ba24f0(0x22,0x7e,0x85,"crypto\\x509v3\\v3_sxnet.c",0xb0,uVar8);
    return 0;
  }
  plVar5 = (longlong *)FUN_144efec20(&DAT_149d89c60);
  if (plVar5 != (longlong *)0x0) {
    if (iVar2 == -1) {
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(param_3 + lVar7) != '\0');
      iVar2 = (int)lVar7;
    }
    iVar2 = FUN_144ef2c50(plVar5[1],param_3,iVar2);
    if ((iVar2 != 0) && (iVar2 = FUN_144bac1c0(puVar3[1],plVar5), iVar2 != 0)) {
      *plVar5 = param_2;
      return 1;
    }
  }
LAB_1454cb5c8:
  FUN_144ba24f0(0x22,0x7e,0x41,"crypto\\x509v3\\v3_sxnet.c",0xc1,uVar8);
  FUN_144eff330(plVar5,&DAT_149d89c60);
  FUN_144eff330(puVar3,&DAT_149d89cd0);
  *param_1 = 0;
  return 0;
}



// FUNCTION 1454cb640 FUN_1454cb640 body=123 status=ok
// SIG undefined FUN_1454cb640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cb640(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 8),iVar3);
      iVar1 = FUN_144ef10c0(*puVar2,param_2);
      if (iVar1 == 0) {
        return puVar2[1];
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
    } while (iVar3 < iVar1);
  }
  return 0;
}



// FUNCTION 1454cb6c0 FUN_1454cb6c0 body=154 status=ok
// SIG undefined FUN_1454cb6c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void * FUN_1454cb6c0(undefined8 param_1,int *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  uVar1 = 0x1454cb6cc;
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    _Dst = (void *)FUN_144ea64e0((longlong)(*param_2 + 1),"crypto\\x509v3\\v3_ia5.c",0x22);
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(0x22,0x95,0x41,"crypto\\x509v3\\v3_ia5.c",0x23,uVar1);
      return (void *)0x0;
    }
    memcpy(_Dst,*(void **)(param_2 + 2),(longlong)*param_2);
    *(undefined1 *)((longlong)*param_2 + (longlong)_Dst) = 0;
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 1454cb760 FUN_1454cb760 body=188 status=ok
// SIG undefined FUN_1454cb760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454cb760(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1454cb76c;
  if (param_3 == 0) {
    FUN_144ba24f0(0x22,100,0x6b,"crypto\\x509v3\\v3_ia5.c",0x31,0x1454cb76c);
    return 0;
  }
  lVar2 = FUN_144efea80();
  if (lVar2 == 0) {
    FUN_144ba24f0(0x22,100,0x41,"crypto\\x509v3\\v3_ia5.c",0x3f,uVar4);
    return 0;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_3 + lVar3) != '\0');
  iVar1 = FUN_144f03d00(lVar2,param_3);
  if (iVar1 == 0) {
    FUN_144efeaa0(lVar2);
    return 0;
  }
  return lVar2;
}



// FUNCTION 1454cb820 FUN_1454cb820 body=28 status=ok
// SIG undefined FUN_1454cb820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cb820(undefined8 param_1,undefined4 *param_2)

{
  FUN_144ea69a0(*(undefined8 *)(param_2 + 2),*param_2);
  return;
}



// FUNCTION 1454cb840 FUN_1454cb840 body=394 status=ok
// SIG undefined FUN_1454cb840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cb840(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454cb84c;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (*(char *)(param_3 + lVar2) != (&DAT_149d8a170)[lVar2]) {
      FUN_1454cb9e0(param_1,param_2);
      goto LAB_1454cb8c6;
    }
    lVar2 = lVar3;
  } while (lVar3 != 5);
  lVar2 = FUN_144efe930();
  if (lVar2 == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x45);
    FUN_144ba24f0(0x22,0x73,0x41,"crypto\\x509v3\\v3_skey.c");
    goto LAB_1454cb8c6;
  }
  if (param_2 == (int *)0x0) {
LAB_1454cb997:
    local_78 = CONCAT44(local_78._4_4_,0x4d);
LAB_1454cb99f:
    uVar4 = 0x72;
LAB_1454cb9a5:
    FUN_144ba24f0(0x22,0x73,uVar4,"crypto\\x509v3\\v3_skey.c");
  }
  else {
    if (*param_2 == 1) goto LAB_1454cb8c6;
    if (*(longlong *)(param_2 + 6) == 0) {
      if (*(longlong *)(param_2 + 4) == 0) goto LAB_1454cb997;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x50);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 6) + 0x20);
    }
    if (lVar3 == 0) {
      local_78 = CONCAT44(local_78._4_4_,0x57);
      goto LAB_1454cb99f;
    }
    local_78 = lVar3;
    FUN_144bb6830(0,&local_60,&local_68,0);
    local_78 = FUN_144bab020();
    local_70 = 0;
    iVar1 = FUN_144ba5d40(local_60,(longlong)local_68,local_58,&local_64);
    if (iVar1 != 0) {
      iVar1 = FUN_144ef2c50(lVar2,local_58,local_64);
      if (iVar1 != 0) goto LAB_1454cb8c6;
      local_78 = CONCAT44(local_78._4_4_,0x61);
      uVar4 = 0x41;
      goto LAB_1454cb9a5;
    }
  }
  FUN_144efe950(lVar2);
LAB_1454cb8c6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1454cb9e0 FUN_1454cb9e0 body=141 status=ok
// SIG undefined FUN_1454cb9e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_1454cb9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_res20 [2];
  undefined8 uVar3;
  
  uVar3 = 0x1454cb9f0;
  puVar1 = (undefined4 *)FUN_144efe930();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(0x22,0x70,0x41,"crypto\\x509v3\\v3_skey.c",0x28,uVar3);
    return (undefined4 *)0x0;
  }
  lVar2 = FUN_144ea6a80(param_3,local_res20);
  *(longlong *)(puVar1 + 2) = lVar2;
  if (lVar2 == 0) {
    FUN_144efe950(puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = local_res20[0];
  return puVar1;
}



// FUNCTION 1454cba70 FUN_1454cba70 body=427 status=ok
// SIG undefined FUN_1454cba70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454cba70(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong local_res18 [2];
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1454cba8a;
  puVar1 = (undefined4 *)*param_2;
  local_res18[0] = param_3;
  if (puVar1 == (undefined4 *)0x0) {
LAB_1454cbb2c:
    lVar3 = local_res18[0];
    if ((param_2[1] == 0) || (lVar3 = FUN_1452ab0d0(0), lVar3 != 0)) {
      local_res18[0] = lVar3;
      puVar1 = (undefined4 *)param_2[2];
      if (puVar1 == (undefined4 *)0x0) {
        return local_res18[0];
      }
      lVar3 = FUN_144ea69a0(*(undefined8 *)(puVar1 + 2),*puVar1);
      if (lVar3 == 0) {
        uVar5 = 0x45;
        uVar4 = 0x41;
        goto LAB_1454cbbba;
      }
      iVar2 = FUN_144ef5c60("serial",lVar3,local_res18);
      if (iVar2 != 0) {
        FUN_144ea6530(lVar3,"crypto\\x509v3\\v3_akey.c",0x4d);
        return local_res18[0];
      }
      FUN_144ea6530(lVar3,"crypto\\x509v3\\v3_akey.c",0x49);
      uVar5 = 0x4a;
    }
    else {
      uVar5 = 0x3d;
    }
  }
  else {
    lVar3 = FUN_144ea69a0(*(undefined8 *)(puVar1 + 2),*puVar1);
    if (lVar3 == 0) {
      FUN_144ba24f0(0x22,0xad,0x41,"crypto\\x509v3\\v3_akey.c",0x30,uVar6);
      return 0;
    }
    iVar2 = FUN_144ef5c60(&DAT_149c045f8,lVar3,local_res18);
    if (iVar2 != 0) {
      FUN_144ea6530(lVar3,"crypto\\x509v3\\v3_akey.c",0x38);
      goto LAB_1454cbb2c;
    }
    FUN_144ea6530(lVar3,"crypto\\x509v3\\v3_akey.c",0x34);
    uVar5 = 0x35;
  }
  uVar4 = 0xb;
LAB_1454cbbba:
  FUN_144ba24f0(0x22,0xad,uVar4,"crypto\\x509v3\\v3_akey.c",uVar5,uVar6);
  if (param_3 == 0) {
    FUN_144babe00(local_res18[0],FUN_144ef58f0);
  }
  return 0;
}



// FUNCTION 1454cbc20 FUN_1454cbc20 body=807 status=ok
// SIG undefined FUN_1454cbc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1454cbc20(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  char cVar14;
  undefined4 uVar15;
  char cVar16;
  char cVar17;
  undefined4 uVar18;
  
  puVar10 = (undefined4 *)0x0;
  cVar16 = '\0';
  cVar14 = '\0';
  iVar2 = FUN_144babbf0(param_3);
  puVar6 = puVar10;
  cVar17 = '\0';
  if (0 < iVar2) {
LAB_1454cbc65:
    lVar3 = FUN_144babc00(param_3,puVar6);
    puVar4 = puVar10;
    do {
      puVar12 = (undefined4 *)((longlong)puVar4 + 1);
      puVar11 = puVar10;
      if (*(char *)(*(longlong *)(lVar3 + 8) + (longlong)puVar4) != *(char *)(puVar4 + 0x5270117e))
      goto LAB_1454cbcd3;
      puVar4 = puVar12;
    } while (puVar12 != (undefined4 *)&DAT_00000006);
    puVar4 = puVar10;
    cVar16 = '\x01';
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      do {
        puVar11 = (undefined4 *)((longlong)puVar4 + 1);
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + (longlong)puVar4) !=
            *(char *)(puVar4 + 0x52762880)) goto LAB_1454cbd39;
        puVar4 = puVar11;
      } while (puVar11 != (undefined4 *)&DAT_00000007);
      cVar16 = '\x02';
    }
    goto LAB_1454cbd39;
  }
LAB_1454cbd4b:
  if (param_2 != (int *)0x0) {
    lVar3 = *(longlong *)(param_2 + 2);
    if (lVar3 != 0) {
      puVar6 = puVar10;
      if (cVar16 != '\0') {
        iVar2 = FUN_144eac570(lVar3,0x52);
        if ((-1 < iVar2) && (lVar5 = FUN_144eac590(lVar3,iVar2), lVar5 != 0)) {
          puVar6 = (undefined4 *)FUN_14526d2e0(lVar5);
        }
        if ((cVar16 == '\x02') && (puVar6 == (undefined4 *)0x0)) {
          uVar18 = 0x90;
          uVar15 = 0x7b;
          goto LAB_1454cbf19;
        }
      }
      puVar11 = puVar10;
      puVar4 = puVar10;
      if (((cVar14 == '\0') || (puVar6 != (undefined4 *)0x0)) &&
         (puVar12 = puVar10, puVar8 = puVar10, cVar14 != '\x02')) {
LAB_1454cbe89:
        puVar9 = (undefined8 *)FUN_144f025b0();
        if (puVar9 == (undefined8 *)0x0) goto LAB_1454cbe56;
        if (puVar8 == (undefined4 *)0x0) {
LAB_1454cbecf:
          puVar9[1] = puVar11;
          puVar9[2] = puVar12;
          *puVar9 = puVar6;
          return puVar9;
        }
        puVar11 = (undefined4 *)FUN_144babca0();
        if (((puVar11 != (undefined4 *)0x0) &&
            (puVar10 = (undefined4 *)FUN_144ef47a0(), puVar10 != (undefined4 *)0x0)) &&
           (iVar2 = FUN_144bac1c0(puVar11,puVar10), iVar2 != 0)) {
          *puVar10 = 4;
          *(undefined4 **)(puVar10 + 2) = puVar8;
          goto LAB_1454cbecf;
        }
        uVar18 = 0xa6;
        uVar15 = 0x41;
        puVar4 = puVar10;
      }
      else {
        uVar7 = FUN_144bb4f40(lVar3);
        puVar8 = (undefined4 *)FUN_144eabba0(uVar7);
        uVar7 = FUN_144bb4f20(lVar3);
        puVar12 = (undefined4 *)FUN_144ef10a0(uVar7);
        if ((puVar8 != (undefined4 *)0x0) && (puVar12 != (undefined4 *)0x0)) goto LAB_1454cbe89;
        uVar18 = 0x9a;
        uVar15 = 0x7a;
      }
      FUN_144ba24f0(0x22,0x77,uVar15,"crypto\\x509v3\\v3_akey.c",uVar18);
      puVar10 = puVar11;
LAB_1454cbe56:
      FUN_144babdb0(puVar10);
      FUN_144ef47c0(puVar4);
      FUN_144eabc40(puVar8);
      FUN_144efe870(puVar12);
      FUN_144efe950(puVar6);
      return (undefined8 *)0x0;
    }
    if (*param_2 == 1) {
      puVar9 = (undefined8 *)FUN_144f025b0();
      return puVar9;
    }
  }
  uVar18 = 0x84;
  uVar15 = 0x79;
LAB_1454cbf19:
  FUN_144ba24f0(0x22,0x77,uVar15,"crypto\\x509v3\\v3_akey.c",uVar18);
  return (undefined8 *)0x0;
LAB_1454cbcd3:
  do {
    puVar4 = (undefined4 *)((longlong)puVar11 + 1);
    if (*(char *)(*(longlong *)(lVar3 + 8) + (longlong)puVar11) != *(char *)(puVar11 + 0x5265eea3))
    {
      FUN_144ba24f0(0x22,0x77,0x78,"crypto\\x509v3\\v3_akey.c",0x7a);
      FUN_144ba2bd0(2,"name=",*(undefined8 *)(lVar3 + 8));
      return (undefined8 *)0x0;
    }
    puVar11 = puVar4;
  } while (puVar4 != (undefined4 *)&DAT_00000007);
  puVar4 = puVar10;
  cVar14 = '\x01';
  cVar16 = cVar17;
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    do {
      cVar17 = *(char *)(*(longlong *)(lVar3 + 0x10) + (longlong)puVar4);
      puVar11 = (undefined4 *)((longlong)puVar4 + 1);
      pcVar1 = (char *)(puVar4 + 0x52762880);
      if (cVar17 != *pcVar1) break;
      puVar4 = puVar11;
    } while (puVar11 != (undefined4 *)&DAT_00000007);
    cVar14 = '\x01';
    if (cVar17 == *pcVar1) {
      cVar14 = '\x02';
    }
  }
LAB_1454cbd39:
  uVar13 = (int)puVar6 + 1;
  puVar6 = (undefined4 *)(ulonglong)uVar13;
  iVar2 = FUN_144babbf0(param_3);
  cVar17 = cVar16;
  if (iVar2 <= (int)uVar13) goto LAB_1454cbd4b;
  goto LAB_1454cbc65;
}



// FUNCTION 1454cbf50 FUN_1454cbf50 body=25 status=ok
// SIG undefined FUN_1454cbf50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cbf50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144ef5e60(param_1,param_3);
  return;
}



// FUNCTION 1454cbf70 FUN_1454cbf70 body=116 status=ok
// SIG undefined FUN_1454cbf70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cbf70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = FUN_144ef1250(param_2);
  lVar1 = *(longlong *)(*(int **)(param_1 + 0x60) + 2);
  piVar2 = *(int **)(param_1 + 0x60);
  while( true ) {
    if (lVar1 == 0) {
      FUN_144ef5fe0(param_1,param_2);
      return;
    }
    if (iVar3 == *piVar2) break;
    lVar1 = *(longlong *)(piVar2 + 8);
    piVar2 = piVar2 + 6;
  }
  FUN_144ea6dc0(*(undefined8 *)(piVar2 + 2),"crypto\\x509v3\\v3_enum.c",0x32);
  return;
}



// FUNCTION 1454cbff0 FUN_1454cbff0 body=313 status=ok
// SIG undefined FUN_1454cbff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cbff0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*param_2 != 0) {
    iVar1 = FUN_144ec7640(param_3,"%*scrlUrl: ",param_4,&DAT_149e02088);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_1452aafe0(param_3,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_144b9eb80(param_3,&DAT_149dfc0af,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_2[1] != 0) {
    iVar1 = FUN_144ec7640(param_3,"%*scrlNum: ",param_4,&DAT_149e02088);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_1454ec9a0(param_3,param_2[1]);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = FUN_144b9eb80(param_3,&DAT_149dfc0af,1);
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_2[2] == 0) {
    return 1;
  }
  iVar1 = FUN_144ec7640(param_3,"%*scrlTime: ",param_4,&DAT_149e02088);
  if (((0 < iVar1) && (iVar1 = FUN_144ef2040(param_3,param_2[2]), iVar1 != 0)) &&
     (iVar1 = FUN_144b9eb80(param_3,&DAT_149dfc0af,1), 0 < iVar1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1454cc130 FUN_1454cc130 body=101 status=ok
// SIG undefined FUN_1454cc130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454cc130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144ec7640(param_3,&DAT_149c02f70,param_4,&DAT_149e02088);
  if (iVar1 < 1) {
    return false;
  }
  iVar1 = FUN_144ef2040(param_3,param_2);
  return iVar1 != 0;
}



// FUNCTION 1454cc1a0 FUN_1454cc1a0 body=101 status=ok
// SIG undefined FUN_1454cc1a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454cc1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144ec7640(param_3,&DAT_149c02f70,param_4,&DAT_149e02088);
  if (iVar1 < 1) {
    return false;
  }
  iVar1 = FUN_144ed09c0(param_3,param_2);
  return 0 < iVar1;
}



// FUNCTION 1454cc210 FUN_1454cc210 body=22 status=ok
// SIG undefined FUN_1454cc210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cc210(void)

{
  FUN_144efe930();
  return;
}



// FUNCTION 1454cc230 FUN_1454cc230 body=77 status=ok
// SIG undefined FUN_1454cc230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1454cc230(int *param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    memcpy((void *)*param_2,*(void **)(param_1 + 2),(longlong)*param_1);
    *param_2 = *param_2 + (longlong)*param_1;
    return *param_1;
  }
  return *param_1;
}



// FUNCTION 1454cc280 FUN_1454cc280 body=171 status=ok
// SIG undefined FUN_1454cc280(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454cc280(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1454cc29a;
  if ((((param_1 == (longlong *)0x0) || (lVar2 = *param_1, lVar2 == 0)) &&
      (lVar2 = FUN_144efe930(), lVar2 == 0)) ||
     (iVar1 = FUN_144ef2c50(lVar2,*param_2,param_3), iVar1 == 0)) {
    if ((param_1 == (longlong *)0x0) || (*param_1 != lVar2)) {
      FUN_144efe950(lVar2);
    }
    FUN_144ba24f0(0x27,0x66,0x41,"crypto\\ocsp\\v3_ocsp.c",0xce,uVar3);
    lVar2 = 0;
  }
  else {
    *param_2 = *param_2 + (longlong)param_3;
    if (param_1 != (longlong *)0x0) {
      *param_1 = lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1454cc330 FUN_1454cc330 body=22 status=ok
// SIG undefined FUN_1454cc330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cc330(void)

{
  FUN_144efe950();
  return;
}



// FUNCTION 1454cc350 FUN_1454cc350 body=107 status=ok
// SIG undefined FUN_1454cc350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454cc350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_144ec7640(param_3,&DAT_149c02f70,param_4,&DAT_149e02088);
  if (iVar1 < 1) {
    return false;
  }
  iVar1 = FUN_1455d6d60(param_3,param_2,4);
  return 0 < iVar1;
}



// FUNCTION 1454cc3d0 FUN_1454cc3d0 body=22 status=ok
// SIG undefined FUN_1454cc3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cc3d0(void)

{
  FUN_144efea10();
  return;
}



// FUNCTION 1454cc3f0 FUN_1454cc3f0 body=272 status=ok
// SIG undefined FUN_1454cc3f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cc3f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar1 = FUN_144ec7640(param_3,"%*sIssuer: ",param_4,&DAT_149e02088);
  if ((iVar1 < 1) || (iVar1 = FUN_14526c5b0(param_3,*param_2,0,0x82031f), iVar1 < 1)) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = FUN_144babbf0(param_2[1]);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(param_2[1],iVar3);
      iVar1 = FUN_144ec7640(param_3,&DAT_149d8a77c,param_4 * 2,&DAT_149e02088);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_144ed09c0(param_3,*puVar2);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_144b9ebc0(param_3,&DAT_149e9807e);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_1452ab980(param_3,puVar2[1]);
      if (iVar1 < 1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_2[1]);
    } while (iVar3 < iVar1);
  }
  return 1;
}



// FUNCTION 1454cc500 FUN_1454cc500 body=237 status=ok
// SIG undefined FUN_1454cc500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cc500(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_144ec7640(param_3,"%*sPath Length Constraint: ",param_4,&DAT_149e02088);
  if (*param_2 == 0) {
    FUN_144ec7640(param_3,"infinite");
  }
  else {
    FUN_1454ec9a0();
  }
  FUN_144b9ebc0(param_3,&DAT_149dfc0af);
  FUN_144ec7640(param_3,"%*sPolicy Language: ",param_4,&DAT_149e02088);
  FUN_144ed09c0(param_3,*(undefined8 *)param_2[1]);
  FUN_144b9ebc0(param_3,&DAT_149dfc0af);
  puVar1 = *(undefined4 **)(param_2[1] + 8);
  if ((puVar1 != (undefined4 *)0x0) && (*(longlong *)(puVar1 + 2) != 0)) {
    FUN_144ec7640(param_3,"%*sPolicy Text: %.*s\n",param_4,&DAT_149e02088,*puVar1,
                  *(longlong *)(puVar1 + 2));
  }
  return 1;
}



// FUNCTION 1454cc5f0 FUN_1454cc5f0 body=665 status=ok
// SIG undefined FUN_1454cc5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_1454cc5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar13;
  longlong local_38;
  longlong local_30;
  
  puVar12 = (undefined8 *)0x0;
  local_38 = 0;
  local_res20 = 0;
  local_30 = 0;
  uVar4 = FUN_144ef6060(param_3);
  iVar2 = FUN_144babbf0(uVar4);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  puVar8 = puVar12;
  if (iVar2 < 1) {
LAB_1454cc809:
    uVar7 = CONCAT44(uVar11,0x124);
    uVar11 = 0x9a;
  }
  else {
    do {
      puVar5 = (undefined8 *)FUN_144babc00(uVar4,puVar8);
      pcVar1 = (char *)puVar5[1];
      if (pcVar1 == (char *)0x0) {
LAB_1454cc7ac:
        uVar13 = 0x103;
        uVar7 = 0x99;
LAB_1454cc7ba:
        FUN_144ba24f0(0x22,0x9b,uVar7,"crypto\\x509v3\\v3_pci.c",uVar13);
LAB_1454cc7ce:
        FUN_144ba2bd0(6,"section:",*puVar5,",name:",puVar5[1],",value:",puVar5[2]);
        goto LAB_1454cc82b;
      }
      if (*pcVar1 != '@') {
        if (puVar5[2] == 0) goto LAB_1454cc7ac;
        if (*pcVar1 == '@') goto LAB_1454cc674;
        iVar2 = FUN_1454cc890(puVar5,&local_38,&local_res20,&local_30);
        if (iVar2 != 0) goto LAB_1454cc702;
        goto LAB_1454cc7ce;
      }
LAB_1454cc674:
      iVar2 = 1;
      lVar6 = FUN_145282850(param_2,pcVar1 + 1);
      puVar9 = puVar12;
      if (lVar6 == 0) {
        uVar13 = 0x10d;
        uVar7 = 0x87;
        goto LAB_1454cc7ba;
      }
      do {
        iVar3 = FUN_144babbf0(lVar6);
        if (iVar3 <= (int)puVar9) break;
        uVar7 = FUN_144babc00(lVar6,puVar9);
        iVar2 = FUN_1454cc890(uVar7,&local_38,&local_res20,&local_30);
        puVar9 = (undefined8 *)(ulonglong)((int)puVar9 + 1);
      } while (iVar2 != 0);
      FUN_1452828b0(param_2,lVar6);
      if (iVar2 == 0) goto LAB_1454cc82b;
LAB_1454cc702:
      uVar10 = (int)puVar8 + 1;
      puVar8 = (undefined8 *)(ulonglong)uVar10;
      iVar2 = FUN_144babbf0(uVar4);
      uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
    } while ((int)uVar10 < iVar2);
    if (local_38 == 0) goto LAB_1454cc809;
    iVar2 = FUN_144ea8fa0();
    if (((iVar2 - 0x299U & 0xfffffffd) == 0) && (local_30 != 0)) {
      uVar7 = CONCAT44(uVar11,0x12a);
      uVar11 = 0x9f;
    }
    else {
      puVar8 = (undefined8 *)FUN_145281cd0();
      if (puVar8 != (undefined8 *)0x0) {
        *(longlong *)puVar8[1] = local_38;
        *(longlong *)(puVar8[1] + 8) = local_30;
        *puVar8 = local_res20;
        local_res20 = 0;
        goto LAB_1454cc85e;
      }
      uVar7 = CONCAT44(uVar11,0x130);
      uVar11 = 0x41;
    }
  }
  FUN_144ba24f0(0x22,0x9b,uVar11,"crypto\\x509v3\\v3_pci.c",uVar7);
LAB_1454cc82b:
  FUN_144ed0860(local_38);
  FUN_144efe870(local_res20);
  local_res20 = 0;
  FUN_144efe950(local_30);
  FUN_145281cf0(0);
  puVar8 = puVar12;
LAB_1454cc85e:
  FUN_144babe00(uVar4,FUN_144ef58f0);
  return puVar8;
}



// FUNCTION 1454cc890 FUN_1454cc890 body=1418 status=ok
// SIG undefined FUN_1454cc890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cc890(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char *_Str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_898 [32];
  undefined8 local_878;
  char *local_870;
  undefined8 local_868;
  int local_858 [4];
  undefined1 local_848 [2048];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454cc8a5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_898;
  _Str1 = (char *)param_1[1];
  lVar5 = 0;
  bVar1 = false;
  iVar2 = strcmp(_Str1,"language");
  lVar4 = lVar5;
  if (iVar2 == 0) {
    if (*param_2 == 0) {
      lVar4 = FUN_144ea90e0(param_1[2],0);
      *param_2 = lVar4;
      if (lVar4 != 0) goto LAB_1454cce17;
      local_878 = CONCAT44(local_878._4_4_,0x65);
      uVar8 = 0x6e;
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,0x5f);
      uVar8 = 0x9b;
    }
  }
  else {
    do {
      lVar6 = lVar4 + 1;
      lVar7 = lVar5;
      if (_Str1[lVar4] != "pathlen"[lVar4]) goto LAB_1454cc9e0;
      lVar4 = lVar6;
    } while (lVar6 != 8);
    if (*param_3 == 0) {
      iVar2 = FUN_144ef5bd0(param_1,param_3);
      if (iVar2 != 0) goto LAB_1454cce17;
      local_878 = CONCAT44(local_878._4_4_,0x72);
      uVar8 = 0x9c;
    }
    else {
      local_878 = CONCAT44(local_878._4_4_,0x6c);
      uVar8 = 0x9d;
    }
  }
LAB_1454cc8fa:
  FUN_144ba24f0(0x22,0x96,uVar8,"crypto\\x509v3\\v3_pci.c");
  local_868 = param_1[2];
  local_870 = ",value:";
  local_878 = param_1[1];
  FUN_144ba2bd0(6,"section:",*param_1,",name:");
  goto LAB_1454cce17;
  while (lVar7 = lVar4, lVar4 != 7) {
LAB_1454cc9e0:
    lVar4 = lVar7 + 1;
    if (_Str1[lVar7] != "policy"[lVar7]) goto LAB_1454cce17;
  }
  if (*param_4 == 0) {
    lVar4 = FUN_144efe930();
    *param_4 = lVar4;
    if (lVar4 == 0) {
      local_878 = CONCAT44(local_878._4_4_,0x7c);
      uVar8 = 0x41;
      goto LAB_1454cc8fa;
    }
    bVar1 = true;
  }
  iVar2 = strncmp((char *)param_1[2],"hex:",4);
  if (iVar2 == 0) {
    _Src = (void *)FUN_144ea6a80((char *)param_1[2] + 4,local_858);
    if (_Src != (void *)0x0) {
      lVar5 = FUN_144ea6570(*(undefined8 *)((int *)*param_4 + 2),
                            (longlong)(*(int *)*param_4 + local_858[0] + 1),
                            "crypto\\x509v3\\v3_pci.c",0x8c);
      if (lVar5 != 0) {
        *(longlong *)(*param_4 + 8) = lVar5;
        memcpy((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),_Src,
               (longlong)local_858[0]);
        *(int *)*param_4 = *(int *)*param_4 + local_858[0];
        *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
        FUN_144ea6530(_Src,"crypto\\x509v3\\v3_pci.c",0xa0);
        goto LAB_1454ccd52;
      }
      FUN_144ea6530(_Src,"crypto\\x509v3\\v3_pci.c",0x94);
      FUN_144ea6530(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0x99);
      uVar8 = 0x41;
      local_878 = CONCAT44(local_878._4_4_,0x9c);
      *(undefined8 *)(*param_4 + 8) = 0;
      *(undefined4 *)*param_4 = 0;
      goto LAB_1454ccdad;
    }
  }
  else {
    iVar2 = strncmp((char *)param_1[2],"file:",5);
    if (iVar2 == 0) {
      lVar4 = FUN_144ec7480((char *)param_1[2] + 5,L"rInvalid resolution in tiff: zero or negative."
                           );
      if (lVar4 == 0) {
        local_878 = CONCAT44(local_878._4_4_,0xa6);
        uVar8 = 0x20;
      }
      else {
        do {
          while( true ) {
            iVar2 = FUN_144b9e930(lVar4,local_848,0x800);
            if (iVar2 < 1) break;
            lVar5 = FUN_144ea6570(*(undefined8 *)((int *)*param_4 + 2),
                                  (longlong)(*(int *)*param_4 + 1 + iVar2),
                                  "crypto\\x509v3\\v3_pci.c",0xb0);
            if (lVar5 == 0) {
              FUN_144ea6530(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0xb3);
              local_878 = CONCAT44(local_878._4_4_,0xb7);
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              FUN_144ba24f0(0x22,0x96,0x41,"crypto\\x509v3\\v3_pci.c");
              local_868 = param_1[2];
              local_870 = ",value:";
              local_878 = param_1[1];
              FUN_144ba2bd0(6,"section:",*param_1,",name:");
              FUN_144b9f360(lVar4);
              goto LAB_1454ccdfa;
            }
            *(longlong *)(*param_4 + 8) = lVar5;
            memcpy((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),
                   local_848,(longlong)iVar2);
            *(int *)*param_4 = *(int *)*param_4 + iVar2;
            *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
          }
        } while ((iVar2 == 0) && (iVar3 = FUN_144b9e630(lVar4,8), iVar3 != 0));
        FUN_144b9f360(lVar4);
        if (iVar2 < 0) {
          local_878 = CONCAT44(local_878._4_4_,0xc5);
          uVar8 = 0x20;
        }
        else {
LAB_1454ccd52:
          if (lVar5 != 0) goto LAB_1454cce17;
          local_878 = CONCAT44(local_878._4_4_,0xe6);
          uVar8 = 0x41;
        }
      }
    }
    else {
      iVar2 = strncmp((char *)param_1[2],"text:",5);
      if (iVar2 == 0) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (*(char *)(param_1[2] + 5 + lVar4) != '\0');
        local_858[0] = (int)lVar4;
        lVar5 = FUN_144ea6570(*(undefined8 *)((int *)*param_4 + 2),
                              (longlong)(local_858[0] + *(int *)*param_4 + 1),
                              "crypto\\x509v3\\v3_pci.c",0xcc);
        if (lVar5 != 0) {
          *(longlong *)(*param_4 + 8) = lVar5;
          memcpy((void *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)),
                 (void *)(param_1[2] + 5),(longlong)local_858[0]);
          *(int *)*param_4 = *(int *)*param_4 + local_858[0];
          *(undefined1 *)((longlong)*(int *)*param_4 + *(longlong *)((int *)*param_4 + 2)) = 0;
          goto LAB_1454ccd52;
        }
        FUN_144ea6530(*(undefined8 *)(*param_4 + 8),"crypto\\x509v3\\v3_pci.c",0xd8);
        uVar8 = 0x41;
        local_878 = CONCAT44(local_878._4_4_,0xdb);
        *(undefined8 *)(*param_4 + 8) = 0;
        *(undefined4 *)*param_4 = 0;
      }
      else {
        local_878 = CONCAT44(local_878._4_4_,0xe1);
        uVar8 = 0x98;
      }
    }
LAB_1454ccdad:
    FUN_144ba24f0(0x22,0x96,uVar8,"crypto\\x509v3\\v3_pci.c");
  }
  local_868 = param_1[2];
  local_870 = ",value:";
  local_878 = param_1[1];
  FUN_144ba2bd0(6,"section:",*param_1,",name:");
LAB_1454ccdfa:
  if (bVar1) {
    FUN_144efe950(*param_4);
    *param_4 = 0;
  }
LAB_1454cce17:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_898);
}



// FUNCTION 1454cce40 FUN_1454cce40 body=534 status=ok
// SIG undefined FUN_1454cce40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454cce40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar1 = FUN_144babbf0(param_3);
  lVar2 = FUN_144babce0(0,iVar1);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x22,0x91,0x41,"crypto\\x509v3\\v3_pmaps.c",0x4c);
    return 0;
  }
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      puVar3 = (undefined8 *)FUN_144babc00(param_3,iVar7);
      if ((puVar3[2] == 0) || (puVar3[1] == 0)) {
        FUN_144ba24f0(0x22,0x91,0x6e,"crypto\\x509v3\\v3_pmaps.c",0x54);
        FUN_144ba2bd0(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        lVar4 = 0;
        lVar5 = 0;
LAB_1454cd030:
        FUN_144ed0860(lVar4);
        FUN_144ed0860(lVar5);
        FUN_144babe00(lVar2,FUN_1454cd150);
        return 0;
      }
      lVar4 = FUN_144ea90e0(puVar3[1],0);
      lVar5 = FUN_144ea90e0(puVar3[2],0);
      if ((lVar4 == 0) || (lVar5 == 0)) {
        FUN_144ba24f0(0x22,0x91,0x6e,"crypto\\x509v3\\v3_pmaps.c",0x5c);
        FUN_144ba2bd0(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
        goto LAB_1454cd030;
      }
      plVar6 = (longlong *)FUN_144efec20(&DAT_149d8a930);
      if (plVar6 == (longlong *)0x0) {
        FUN_144ba24f0(0x22,0x91,0x41,"crypto\\x509v3\\v3_pmaps.c",0x62);
        goto LAB_1454cd030;
      }
      *plVar6 = lVar4;
      plVar6[1] = lVar5;
      FUN_144bac1c0(lVar2,plVar6);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return lVar2;
}



// FUNCTION 1454cd060 FUN_1454cd060 body=186 status=ok
// SIG undefined FUN_1454cd060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cd060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [2];
  undefined1 local_b8 [80];
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454cd070;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = 0;
  local_c8[0] = param_3;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(param_2,iVar3);
      FUN_144ed0b30(local_68,0x50,*puVar2);
      FUN_144ed0b30(local_b8,0x50,puVar2[1]);
      FUN_144ef5c60(local_68,local_b8,local_c8);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar3 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1454cd150 FUN_1454cd150 body=29 status=ok
// SIG undefined FUN_1454cd150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cd150(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d8a930);
  return;
}



// FUNCTION 1454cd170 FUN_1454cd170 body=40 status=ok
// SIG undefined FUN_1454cd170(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cd170(void)

{
  FUN_144ea6dc0(&DAT_14a179998,"crypto\\ct\\ct_x509v3.c",0x12);
  return;
}



// FUNCTION 1454cd1a0 FUN_1454cd1a0 body=22 status=ok
// SIG undefined FUN_1454cd1a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cd1a0(void)

{
  FUN_144efea10();
  return;
}



// FUNCTION 1454cd1c0 FUN_1454cd1c0 body=59 status=ok
// SIG undefined FUN_1454cd1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454cd1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1455d6e70(param_2,param_3,param_4,&DAT_149dfc0af,0);
  return 1;
}



// FUNCTION 1454cd200 FUN_1454cd200 body=90 status=ok
// SIG undefined FUN_1454cd200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cd200(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144eadb40();
  iVar1 = FUN_1454cd2c0(uVar2,2);
  if (iVar1 != 1) {
    FUN_144ead2d0(uVar2);
    *param_1 = 0;
    return 0;
  }
  return uVar2;
}



// FUNCTION 1454cd260 FUN_1454cd260 body=90 status=ok
// SIG undefined FUN_1454cd260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cd260(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144eadb40();
  iVar1 = FUN_1454cd2c0(uVar2,3);
  if (iVar1 != 1) {
    FUN_144ead2d0(uVar2);
    *param_1 = 0;
    return 0;
  }
  return uVar2;
}



// FUNCTION 1454cd2c0 FUN_1454cd2c0 body=126 status=ok
// SIG undefined FUN_1454cd2c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cd2c0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    iVar1 = FUN_144babbf0();
    if (0 < iVar1) {
      do {
        uVar2 = FUN_144babc00(param_1,iVar3);
        iVar1 = FUN_144ead3e0(uVar2,param_2);
        if (iVar1 != 1) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_144babbf0(param_1);
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}



// FUNCTION 1454cd340 FUN_1454cd340 body=196 status=ok
// SIG undefined FUN_1454cd340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cd340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 local_res18;
  
  iVar5 = 0;
  local_res18 = param_3;
  iVar1 = FUN_144babbf0(param_2);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_144babc00(param_2);
      iVar1 = FUN_144ef1170(uVar2);
      uVar4 = 0;
      piVar3 = &DAT_14c745018;
      do {
        if (iVar1 == *piVar3) {
          if (uVar4 < 2) {
            FUN_144ef5c60(0,(&PTR_s_status_request_14c745020)[uVar4 * 2],&local_res18);
            goto LAB_1454cd3c0;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 4;
      } while (uVar4 < 2);
      FUN_144ef5d30(0,uVar2,&local_res18);
LAB_1454cd3c0:
      iVar5 = iVar5 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar5 < iVar1);
  }
  return local_res18;
}



// FUNCTION 1454cd410 FUN_1454cd410 body=562 status=ok
// SIG undefined FUN_1454cd410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454cd410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  char *_Str1;
  undefined **ppuVar8;
  char *local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar9;
  
  lVar3 = FUN_144babca0();
  if (lVar3 == 0) {
    FUN_144ba24f0(0x22,0xa5,0x41,"crypto\\x509v3\\v3_tlsf.c",99);
    return 0;
  }
  iVar7 = 0;
  iVar1 = FUN_144babbf0(param_3);
  if (0 < iVar1) {
    do {
      puVar4 = (undefined8 *)FUN_144babc00(param_3,iVar7);
      _Str1 = (char *)puVar4[2];
      if (_Str1 == (char *)0x0) {
        _Str1 = (char *)puVar4[1];
      }
      uVar6 = 0;
      ppuVar8 = &PTR_s_status_request_14c745020;
      do {
        iVar1 = _stricmp(_Str1,*ppuVar8);
        if (iVar1 == 0) {
          if (uVar6 < 2) {
            lVar2 = (&DAT_14c745018)[uVar6 * 4];
            goto LAB_1454cd528;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        ppuVar8 = ppuVar8 + 2;
      } while (uVar6 < 2);
      lVar2 = strtol(_Str1,&local_res20,10);
      if ((((*local_res20 != '\0') || (_Str1 == local_res20)) || (lVar2 < 0)) || (0xffff < lVar2)) {
        FUN_144ba24f0(0x22,0xa5,0x8f,"crypto\\x509v3\\v3_tlsf.c",0x77);
        FUN_144ba2bd0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
        goto LAB_1454cd62c;
      }
LAB_1454cd528:
      lVar5 = FUN_144efe850();
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (lVar5 == 0) {
LAB_1454cd5ad:
        FUN_144ba24f0(0x22,0xa5,0x41,"crypto\\x509v3\\v3_tlsf.c",CONCAT44(uVar9,0x80));
LAB_1454cd62c:
        FUN_144babe00(lVar3,FUN_144efe870);
        return 0;
      }
      iVar1 = FUN_144ef1150(lVar5,lVar2);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (iVar1 == 0) goto LAB_1454cd5ad;
      iVar1 = FUN_144bac1c0(lVar3,lVar5);
      uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
      if (iVar1 < 1) goto LAB_1454cd5ad;
      iVar7 = iVar7 + 1;
      iVar1 = FUN_144babbf0(param_3);
    } while (iVar7 < iVar1);
  }
  return lVar3;
}



// FUNCTION 1454cd660 FUN_1454cd660 body=1105 status=ok
// SIG undefined FUN_1454cd660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cd660(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined *local_f0;
  int local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454cd67a;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e0 = param_1;
  local_d8 = param_2;
  if ((*param_2 == 0) ||
     ((((iVar1 = FUN_144ec7640(param_3,"%*sadmissionAuthority:\n",param_4,&DAT_149e02088), 0 < iVar1
        && (iVar1 = FUN_144ec7640(param_3,"%*s  ",param_4,&DAT_149e02088), 0 < iVar1)) &&
       (iVar1 = FUN_1452ab980(param_3,*param_2), 0 < iVar1)) &&
      (iVar1 = FUN_144ec7640(param_3,&DAT_149dfc0af), 0 < iVar1)))) {
    iVar1 = 0;
    iVar2 = FUN_144babbf0(param_2[1]);
    if (0 < iVar2) {
      do {
        plVar4 = (longlong *)FUN_144babc00(param_2[1],iVar1);
        iVar1 = iVar1 + 1;
        local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar1);
        local_e8 = iVar1;
        iVar2 = FUN_144ec7640(param_3,"%*sEntry %0d:\n",param_4,&DAT_149e02088);
        if ((iVar2 < 1) ||
           (((*plVar4 != 0 &&
             (((iVar2 = FUN_144ec7640(param_3,"%*s  admissionAuthority:\n",param_4,&DAT_149e02088),
               iVar2 < 1 ||
               (iVar2 = FUN_144ec7640(param_3,"%*s    ",param_4,&DAT_149e02088), iVar2 < 1)) ||
              ((iVar2 = FUN_1452ab980(param_3,*plVar4), iVar2 < 1 ||
               (iVar2 = FUN_144ec7640(param_3,&DAT_149dfc0af), iVar2 < 1)))))) ||
            ((plVar4[1] != 0 &&
             (iVar2 = FUN_1454cdb10(param_1,plVar4[1],param_3,param_4), iVar2 < 1)))))) break;
        iVar8 = 0;
        iVar2 = FUN_144babbf0(plVar4[2]);
        if (0 < iVar2) {
          do {
            plVar5 = (longlong *)FUN_144babc00(plVar4[2],iVar8);
            iVar8 = iVar8 + 1;
            local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar8);
            iVar1 = FUN_144ec7640(param_3,"%*s  Profession Info Entry %0d:\n",param_4,&DAT_149e02088
                                 );
            if (((iVar1 < 1) ||
                ((plVar5[3] != 0 &&
                 (((iVar1 = FUN_144ec7640(param_3,"%*s    registrationNumber: ",param_4,
                                          &DAT_149e02088), iVar1 < 1 ||
                   (iVar1 = FUN_1452aafe0(param_3,plVar5[3]), iVar1 < 1)) ||
                  (iVar1 = FUN_144ec7640(param_3,&DAT_149dfc0af), iVar1 < 1)))))) ||
               ((*plVar5 != 0 &&
                (iVar1 = FUN_1454cdb10(param_1,*plVar5,param_3,param_4 + 2), iVar1 < 1))))
            goto LAB_1454cda9c;
            if (plVar5[1] != 0) {
              iVar1 = FUN_144ec7640(param_3,"%*s    Info Entries:\n",param_4,&DAT_149e02088);
              if (iVar1 < 1) goto LAB_1454cda9c;
              iVar2 = 0;
              iVar1 = FUN_144babbf0(plVar5[1]);
              if (0 < iVar1) {
                do {
                  uVar6 = FUN_144babc00(plVar5[1],iVar2);
                  iVar1 = FUN_144ec7640(param_3,"%*s      ",param_4,&DAT_149e02088);
                  if (((iVar1 < 1) || (iVar1 = FUN_1452aafe0(param_3,uVar6), iVar1 < 1)) ||
                     (iVar1 = FUN_144ec7640(param_3,&DAT_149dfc0af), iVar1 < 1)) goto LAB_1454cda9c;
                  iVar2 = iVar2 + 1;
                  iVar1 = FUN_144babbf0(plVar5[1]);
                } while (iVar2 < iVar1);
              }
            }
            if (plVar5[2] != 0) {
              iVar1 = FUN_144ec7640(param_3,"%*s    Profession OIDs:\n",param_4,&DAT_149e02088);
              if (iVar1 < 1) goto LAB_1454cda9c;
              iVar2 = 0;
              iVar1 = FUN_144babbf0(plVar5[2]);
              if (0 < iVar1) {
                do {
                  uVar6 = FUN_144babc00(plVar5[2],iVar2);
                  uVar3 = FUN_144ea8fa0(uVar6);
                  puVar7 = (undefined1 *)FUN_144ea8e20(uVar3);
                  FUN_144ea9230(local_c8,0x80,uVar6);
                  bVar9 = puVar7 != (undefined1 *)0x0;
                  local_f0 = &DAT_149e02088;
                  if (bVar9) {
                    local_f0 = &DAT_149dfbe79;
                  }
                  local_100 = &DAT_149e02088;
                  if (bVar9) {
                    local_100 = &DAT_14bd47a47;
                  }
                  local_f8 = local_c8;
                  local_108 = &DAT_149e02088;
                  if (bVar9) {
                    local_108 = puVar7;
                  }
                  iVar1 = FUN_144ec7640(param_3,"%*s      %s%s%s%s\n",param_4,&DAT_149e02088);
                  if (iVar1 < 1) goto LAB_1454cda9c;
                  iVar2 = iVar2 + 1;
                  iVar1 = FUN_144babbf0(plVar5[2]);
                } while (iVar2 < iVar1);
              }
            }
            iVar2 = FUN_144babbf0(plVar4[2]);
            param_2 = local_d8;
            param_1 = local_e0;
            iVar1 = local_e8;
          } while (iVar8 < iVar2);
        }
        iVar2 = FUN_144babbf0(param_2[1]);
      } while (iVar1 < iVar2);
    }
  }
LAB_1454cda9c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
}



// FUNCTION 1454cdb10 FUN_1454cdb10 body=463 status=ok
// SIG undefined FUN_1454cdb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cdb10(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined *local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454cdb1e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) ||
     ((((*param_2 == 0 && (param_2[2] == 0)) && (param_2[1] == 0)) ||
      (iVar1 = FUN_144ec7640(param_3,"%*snamingAuthority: ",param_4,&DAT_149e02088), iVar1 < 1))))
  goto LAB_1454cdccf;
  if (*param_2 != 0) {
    uVar2 = FUN_144ea8fa0();
    puVar3 = (undefined1 *)FUN_144ea8e20(uVar2);
    iVar1 = FUN_144ec7640(param_3,"%*s  admissionAuthorityId: ",param_4,&DAT_149e02088);
    if (iVar1 < 1) goto LAB_1454cdccf;
    FUN_144ea9230(local_a8,0x80,*param_2);
    bVar6 = puVar3 != (undefined1 *)0x0;
    local_b0 = &DAT_149e02088;
    if (bVar6) {
      local_b0 = &DAT_149dfbe79;
    }
    puVar5 = &DAT_149e02088;
    if (bVar6) {
      puVar5 = &DAT_14bd47a47;
    }
    local_b8 = local_a8;
    puVar4 = &DAT_149e02088;
    if (bVar6) {
      puVar4 = puVar3;
    }
    iVar1 = FUN_144ec7640(param_3,"%s%s%s%s\n",puVar4,puVar5);
    if (iVar1 < 1) goto LAB_1454cdccf;
  }
  if (((param_2[2] == 0) ||
      (((iVar1 = FUN_144ec7640(param_3,"%*s  namingAuthorityText: ",param_4,&DAT_149e02088),
        0 < iVar1 && (iVar1 = FUN_1452aafe0(param_3,param_2[2]), 0 < iVar1)) &&
       (iVar1 = FUN_144ec7640(param_3,&DAT_149dfc0af), 0 < iVar1)))) &&
     (((param_2[1] != 0 &&
       (iVar1 = FUN_144ec7640(param_3,"%*s  namingAuthorityUrl: ",param_4,&DAT_149e02088), 0 < iVar1
       )) && (iVar1 = FUN_1452aafe0(param_3,param_2[1]), 0 < iVar1)))) {
    FUN_144ec7640(param_3,&DAT_149dfc0af);
  }
LAB_1454cdccf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1454cdcf0 FUN_1454cdcf0 body=120 status=ok
// SIG undefined FUN_1454cdcf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cdcf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 2;
    uVar2 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar2 <= uVar3) {
      *param_1 = puVar1 + 2 + uVar2;
      param_1[1] = uVar3 - uVar2;
      *param_2 = puVar1 + 2;
      param_2[1] = uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1454cdd70 FUN_1454cdd70 body=121 status=ok
// SIG undefined FUN_1454cdd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cdd70(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar3 = param_1[1] - 2;
    uVar2 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar2 <= uVar3) {
      if (uVar3 == uVar2) {
        *param_1 = puVar1 + 2 + uVar2;
        param_1[1] = 0;
        param_2[1] = uVar2;
        *param_2 = puVar1 + 2;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1454cddf0 FUN_1454cddf0 body=266 status=ok
// SIG undefined FUN_1454cddf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cddf0(longlong param_1,undefined8 *param_2)

{
  byte *_Buf1;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2[1] != 0) {
    uVar4 = param_2[1] - 1;
    uVar3 = (ulonglong)*(byte *)*param_2;
    _Buf1 = (byte *)*param_2 + 1;
    *param_2 = _Buf1;
    param_2[1] = uVar4;
    if (uVar3 <= uVar4) {
      *param_2 = _Buf1 + uVar3;
      param_2[1] = uVar4 - uVar3;
      lVar1 = *(longlong *)(param_1 + 0xa8);
      if (uVar3 == *(size_t *)(lVar1 + 0x388)) {
        iVar2 = memcmp(_Buf1,(void *)(lVar1 + 0x348),*(size_t *)(lVar1 + 0x388));
        if (iVar2 == 0) {
          *(undefined4 *)(lVar1 + 0x3d8) = 1;
          return 1;
        }
        uVar5 = 0x41;
      }
      else {
        uVar5 = 0x10000003a;
      }
      FUN_144eafc90(param_1,0x28,0x1d0,0x151,"ssl\\statem\\extensions_srvr.c",uVar5);
      return 0;
    }
  }
  FUN_144eafc90(param_1,0x32,0x1d0,0x150,"ssl\\statem\\extensions_srvr.c",0x100000033);
  return 0;
}



// FUNCTION 1454cdf00 FUN_1454cdf00 body=731 status=ok
// SIG undefined FUN_1454cdf00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cdf00(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  
  pcVar10 = (char *)*param_2;
  uVar11 = param_2[1];
  pcVar7 = pcVar10;
  if (1 < uVar11) {
    pcVar9 = pcVar10 + 2;
    uVar6 = (ulonglong)CONCAT11(*pcVar10,pcVar10[1]);
    if (uVar6 <= uVar11 - 2) {
      uVar11 = (uVar11 - 2) - uVar6;
      pcVar7 = pcVar9 + uVar6;
      if (uVar11 == 0) {
        *param_2 = pcVar9 + uVar6;
        param_2[1] = 0;
        pcVar7 = pcVar9;
        if (uVar6 != 0) {
          pcVar7 = pcVar10 + 3;
          if ((*pcVar9 == '\0') && (1 < uVar6 - 1)) {
            pcVar9 = pcVar10 + 5;
            uVar11 = (ulonglong)CONCAT11(*pcVar7,pcVar10[4]);
            if (uVar6 - 3 == uVar11) {
              if ((*(int *)(param_1 + 200) != 0) &&
                 ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
                   (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)))) {
                pcVar10 = *(char **)(*(longlong *)(param_1 + 0x508) + 0x208);
                uVar13 = 0;
                if (pcVar10 != (char *)0x0) {
                  cVar1 = *pcVar10;
                  for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
                    pcVar10 = pcVar10 + 1;
                    cVar1 = *pcVar10;
                  }
                  uVar13 = 0;
                  if ((uVar11 == (uVar2 & 0x7fffffff)) &&
                     (iVar3 = FUN_14259f120(pcVar9), iVar3 == 0)) {
                    uVar13 = 1;
                  }
                }
                *(undefined4 *)(param_1 + 0x740) = uVar13;
                return 1;
              }
              if (uVar11 < 0x100) {
                pvVar4 = memchr(pcVar9,0,uVar11);
                if (pvVar4 == (void *)0x0) {
                  FUN_144ea6530(*(undefined8 *)(param_1 + 0x638),"ssl\\statem\\extensions_srvr.c",
                                0x99);
                  *(undefined8 *)(param_1 + 0x638) = 0;
                  FUN_144ea6530(0,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1e2);
                  lVar5 = FUN_144ea6e30(pcVar9,uVar11,
                                        "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                        ,0x1e5);
                  *(longlong *)(param_1 + 0x638) = lVar5;
                  if (lVar5 != 0) {
                    *(undefined4 *)(param_1 + 0x740) = 1;
                    return 1;
                  }
                  uVar13 = 0x9d;
                  uVar8 = 0x50;
                  uVar12 = 0x44;
                }
                else {
                  uVar8 = 0x70;
                  uVar13 = 0x91;
                  uVar12 = 0x6e;
                }
              }
              else {
                uVar8 = 0x70;
                uVar13 = 0x8a;
                uVar12 = 0x6e;
              }
              FUN_144eafc90(param_1,uVar8,0x23d,uVar12,"ssl\\statem\\extensions_srvr.c",uVar13,
                            pcVar7);
              return 0;
            }
          }
          FUN_144eafc90(param_1,0x32,0x23d,0x6e,"ssl\\statem\\extensions_srvr.c",0x7e,pcVar7);
          return 0;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x23d,0x6e,"ssl\\statem\\extensions_srvr.c",0x6b,pcVar7,uVar11);
  return 0;
}



// FUNCTION 1454ce1e0 FUN_1454ce1e0 body=197 status=ok
// SIG undefined FUN_1454ce1e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce1e0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_2[1] == 1) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = 0;
    if (bVar1 - 1 < 4) {
      if ((*(int *)(param_1 + 200) == 0) ||
         (*(byte *)(*(longlong *)(param_1 + 0x508) + 0x240) == bVar1)) {
        *(byte *)(*(longlong *)(param_1 + 0x508) + 0x240) = bVar1;
        return 1;
      }
      uVar4 = 0xcf;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
    else {
      uVar4 = 0xc3;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
  }
  else {
    uVar2 = 0x32;
    uVar4 = 0xbb;
    uVar3 = 0x6e;
  }
  FUN_144eafc90(param_1,uVar2,0x23b,uVar3,"ssl\\statem\\extensions_srvr.c",uVar4,0x1454ce1ea);
  return 0;
}



// FUNCTION 1454ce2b0 FUN_1454ce2b0 body=287 status=ok
// SIG undefined FUN_1454ce2b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce2b0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte *_Buf;
  byte *pbVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  pbVar6 = (byte *)*param_2;
  lVar8 = param_2[1];
  if (lVar8 != 0) {
    bVar1 = *pbVar6;
    uVar2 = (ulonglong)bVar1;
    _Buf = pbVar6 + 1;
    if (uVar2 <= lVar8 - 1U) {
      pbVar6 = _Buf + uVar2;
      lVar8 = (lVar8 - 1U) - uVar2;
      if (lVar8 == 0) {
        *param_2 = pbVar6;
        param_2[1] = 0;
        pvVar3 = memchr(_Buf,0,(ulonglong)(uint)bVar1);
        if (pvVar3 == (void *)0x0) {
          FUN_144ea6530(*(undefined8 *)(param_1 + 2000),
                        "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                        ,0x1e2);
          lVar4 = FUN_144ea6e30(_Buf,(uint)bVar1,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1e5);
          *(longlong *)(param_1 + 2000) = lVar4;
          if (lVar4 != 0) {
            return 1;
          }
          uVar9 = 0xef;
          uVar5 = 0x50;
          uVar7 = 0x44;
          goto LAB_1454ce3a3;
        }
      }
    }
  }
  uVar5 = 0x32;
  uVar9 = 0xe5;
  uVar7 = 0x6e;
LAB_1454ce3a3:
  FUN_144eafc90(param_1,uVar5,0x240,uVar7,"ssl\\statem\\extensions_srvr.c",uVar9,pbVar6,lVar8);
  return 0;
}



// FUNCTION 1454ce3d0 FUN_1454ce3d0 body=101 status=ok
// SIG undefined FUN_1454ce3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce3d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    if (*(int *)(param_1 + 0x4d8) == 0) {
      return 1;
    }
    uVar2 = 0x3f6;
    uVar1 = 0x2f;
  }
  else {
    uVar2 = 0x3f0;
    uVar1 = 0x32;
  }
  FUN_144eafc90(param_1,uVar1,0x238,0x6e,"ssl\\statem\\extensions_srvr.c",uVar2,0x1454ce3da);
  return 0;
}



// FUNCTION 1454ce440 FUN_1454ce440 body=314 status=ok
// SIG undefined FUN_1454ce440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce440(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  pbVar7 = (byte *)*param_2;
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    bVar1 = *pbVar7;
    uVar3 = (ulonglong)bVar1;
    pbVar6 = pbVar7 + 1;
    uVar2 = (uint)bVar1;
    if (uVar3 <= lVar9 - 1U) {
      pbVar7 = pbVar6 + uVar3;
      lVar9 = (lVar9 - 1U) - uVar3;
      if (lVar9 == 0) {
        *param_2 = pbVar7;
        param_2[1] = 0;
        if (uVar2 != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          FUN_144ea6530(*(undefined8 *)(param_1 + 0x698),
                        "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                        ,0x1c5);
          *(undefined8 *)(param_1 + 0x698) = 0;
          *(undefined8 *)(param_1 + 0x690) = 0;
          lVar4 = FUN_144ea6d10(pbVar6,(ulonglong)uVar2,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1ce);
          *(longlong *)(param_1 + 0x698) = lVar4;
          if (lVar4 != 0) {
            *(ulonglong *)(param_1 + 0x690) = (ulonglong)uVar2;
            return 1;
          }
          uVar5 = 0x50;
          uVar10 = 0x109;
          uVar8 = 0x44;
          goto LAB_1454ce551;
        }
      }
    }
  }
  uVar5 = 0x32;
  uVar10 = 0x100;
  uVar8 = 0x6e;
LAB_1454ce551:
  FUN_144eafc90(param_1,uVar5,0x239,uVar8,"ssl\\statem\\extensions_srvr.c",uVar10,pbVar7,lVar9);
  return 0;
}



// FUNCTION 1454ce580 FUN_1454ce580 body=360 status=ok
// SIG undefined FUN_1454ce580(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce580(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar3 = (undefined1 *)*param_2;
  uVar7 = param_2[1];
  if (1 < uVar7) {
    bVar1 = puVar3[1];
    local_18 = puVar3 + 2;
    uVar2 = CONCAT11(*puVar3,bVar1);
    uStack_10 = (ulonglong)uVar2;
    if (uStack_10 <= uVar7 - 2) {
      uVar7 = (uVar7 - 2) - uStack_10;
      puVar3 = local_18 + uStack_10;
      if (uVar7 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar3 = local_18;
        uVar7 = uStack_10;
        if ((uVar2 != 0) && ((bVar1 & 1) == 0)) {
          if ((*(int *)(param_1 + 200) != 0) &&
             ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
               (iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304)) || (iVar4 == 0x10000)))) {
            return 1;
          }
          FUN_144ea6530(*(undefined8 *)(param_1 + 0x6b8),"ssl\\statem\\extensions_srvr.c",0x3ca);
          *(undefined8 *)(param_1 + 0x6b8) = 0;
          *(undefined8 *)(param_1 + 0x6b0) = 0;
          iVar4 = FUN_144ebc690(&local_18,param_1 + 0x6b8);
          if (iVar4 != 0) {
            return 1;
          }
          uVar8 = 0x3d2;
          uVar5 = 0x50;
          uVar6 = 0x44;
          goto LAB_1454ce6c8;
        }
      }
    }
  }
  uStack_10 = uVar7;
  local_18 = puVar3;
  uVar5 = 0x32;
  uVar8 = 0x3c5;
  uVar6 = 0x6e;
LAB_1454ce6c8:
  FUN_144eafc90(param_1,uVar5,0x242,uVar6,"ssl\\statem\\extensions_srvr.c",uVar8);
  return 0;
}



// FUNCTION 1454ce6f0 FUN_1454ce6f0 body=112 status=ok
// SIG undefined FUN_1454ce6f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce6f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(code **)(param_1 + 0x6c8) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x6c8))
                      (param_1,*param_2,*(undefined4 *)(param_2 + 1),
                       *(undefined8 *)(param_1 + 0x6d0));
    if (iVar1 == 0) {
      FUN_144eafc90(param_1,0x50,0x23e,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x11a));
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1454ce760 FUN_1454ce760 body=232 status=ok
// SIG undefined FUN_1454ce760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce760(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar3 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    local_18 = puVar3 + 2;
    uStack_10 = (ulonglong)CONCAT11(uVar2,uVar1);
    if (uStack_10 <= uVar5 - 2) {
      uVar5 = (uVar5 - 2) - uStack_10;
      puVar3 = local_18 + uStack_10;
      if (uVar5 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar3 = local_18;
        uVar5 = uStack_10;
        if (CONCAT11(uVar2,uVar1) != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          iVar4 = FUN_144ebc7c0(param_1,&local_18,1);
          if (iVar4 != 0) {
            return 1;
          }
          uVar6 = 0x12f;
          goto LAB_1454ce81c;
        }
      }
    }
  }
  uStack_10 = uVar5;
  local_18 = puVar3;
  uVar6 = 0x129;
LAB_1454ce81c:
  FUN_144eafc90(param_1,0x32,0x267,0x6e,"ssl\\statem\\extensions_srvr.c",uVar6);
  return 0;
}



// FUNCTION 1454ce850 FUN_1454ce850 body=229 status=ok
// SIG undefined FUN_1454ce850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce850(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar3 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    local_18 = puVar3 + 2;
    uStack_10 = (ulonglong)CONCAT11(uVar2,uVar1);
    if (uStack_10 <= uVar5 - 2) {
      uVar5 = (uVar5 - 2) - uStack_10;
      puVar3 = local_18 + uStack_10;
      if (uVar5 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar3 = local_18;
        uVar5 = uStack_10;
        if (CONCAT11(uVar2,uVar1) != 0) {
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          iVar4 = FUN_144ebc7c0(param_1,&local_18,0);
          if (iVar4 != 0) {
            return 1;
          }
          uVar6 = 0x144;
          goto LAB_1454ce909;
        }
      }
    }
  }
  uStack_10 = uVar5;
  local_18 = puVar3;
  uVar6 = 0x13e;
LAB_1454ce909:
  FUN_144eafc90(param_1,0x32,0x23f,0x6e,"ssl\\statem\\extensions_srvr.c",uVar6);
  return 0;
}



// FUNCTION 1454ce940 FUN_1454ce940 body=847 status=ok
// SIG undefined FUN_1454ce940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ce940(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 *local_res8;
  undefined4 uVar12;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 *local_38;
  ulonglong uStack_30;
  
  if ((*(int *)(param_1 + 200) == 0) && (param_4 == 0)) {
    if (param_2[1] == 0) {
      FUN_144eafc90(param_1,0x32,0x241,0x6e,"ssl\\statem\\extensions_srvr.c",0x15b);
      return 0;
    }
    *(uint *)(param_1 + 0x640) = (uint)*(byte *)*param_2;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (*(int *)(param_1 + 0x640) == 1) {
      iVar4 = FUN_1454cdcf0(param_2,&local_48);
      if (iVar4 == 0) {
        FUN_144eafc90(param_1,0x32,0x241,0x6e,"ssl\\statem\\extensions_srvr.c",0x169);
        return 0;
      }
      FUN_144babe00(*(undefined8 *)(param_1 + 0x658),FUN_144ec6750);
      uVar10 = CONCAT44(uStack_40._4_4_,(undefined4)uStack_40);
      if (uVar10 == 0) {
        *(undefined8 *)(param_1 + 0x658) = 0;
      }
      else {
        lVar5 = FUN_144babca0();
        *(longlong *)(param_1 + 0x658) = lVar5;
        if (lVar5 == 0) {
          FUN_144eafc90(param_1,0x50,0x241,0x41,"ssl\\statem\\extensions_srvr.c",0x176);
          return 0;
        }
      }
      uVar2 = CONCAT44(uStack_40._4_4_,(undefined4)uStack_40);
      uStack_40 = uVar10;
      puVar6 = (undefined1 *)CONCAT44(local_48._4_4_,(undefined4)local_48);
      puVar7 = (undefined1 *)CONCAT44(local_48._4_4_,(undefined4)local_48);
      uVar3 = uVar2;
      do {
        uVar9 = uVar3;
        if (uVar10 == 0) {
          local_48 = puVar7;
          uStack_40 = uVar9;
          iVar4 = FUN_1454cdd70(param_2,&local_38);
          uVar10 = uStack_30;
          puVar7 = local_38;
          if (iVar4 == 0) {
            uVar12 = 0x1a7;
            puVar7 = local_48;
            uVar9 = uStack_40;
          }
          else {
            if (uStack_30 == 0) {
              return 1;
            }
            local_res8 = local_38;
            FUN_144babe00(*(undefined8 *)(param_1 + 0x660),FUN_144eac4f0);
            lVar5 = FUN_144eac510(0,&local_res8,uVar10 & 0xffffffff);
            *(longlong *)(param_1 + 0x660) = lVar5;
            if ((lVar5 != 0) && (local_res8 == puVar7 + uVar10)) {
              return 1;
            }
            uVar12 = 0x1b4;
            puVar7 = local_48;
            uVar9 = uStack_40;
          }
          goto LAB_1454cec07;
        }
        local_38 = puVar6;
        uStack_30 = uVar2;
        if (uStack_40 < 2) {
LAB_1454ceb80:
          uVar12 = 0x185;
LAB_1454cec07:
          uVar8 = 0x32;
          uVar11 = 0x6e;
          local_48 = puVar7;
          uStack_40 = uVar9;
          goto LAB_1454cec10;
        }
        puVar6 = puVar7 + 2;
        uVar1 = CONCAT11(*puVar7,puVar7[1]);
        uVar10 = (ulonglong)(uint)uVar1;
        if (uVar2 - 2 < uVar10) goto LAB_1454ceb80;
        uVar9 = (uVar2 - 2) - uVar10;
        puVar7 = puVar6 + uVar10;
        local_38 = puVar7;
        uStack_30 = uVar9;
        if (uVar1 == 0) goto LAB_1454ceb80;
        local_res8 = puVar6;
        local_48 = puVar7;
        uStack_40 = uVar9;
        lVar5 = FUN_144ec6770(0,&local_res8,(uint)uVar1);
        if (lVar5 == 0) {
          uVar12 = 399;
          puVar7 = local_48;
          uVar9 = uStack_40;
          goto LAB_1454cec07;
        }
        if (local_res8 != puVar6 + uVar10) {
          FUN_144ec6750(lVar5);
          uVar12 = 0x196;
          puVar7 = local_48;
          uVar9 = uStack_40;
          goto LAB_1454cec07;
        }
        iVar4 = FUN_144bac1c0(*(undefined8 *)(param_1 + 0x658),lVar5);
        puVar6 = puVar7;
        puVar7 = local_48;
        uVar2 = uVar9;
        uVar3 = uStack_40;
        uVar10 = uVar9;
      } while (iVar4 != 0);
      FUN_144ec6750(lVar5);
      uVar8 = 0x50;
      uVar12 = 0x19e;
      uVar11 = 0x44;
LAB_1454cec10:
      FUN_144eafc90(param_1,uVar8,0x241,uVar11,"ssl\\statem\\extensions_srvr.c",uVar12);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x640) = 0xffffffff;
  }
  return 1;
}



// FUNCTION 1454cecc0 FUN_1454cecc0 body=590 status=ok
// SIG undefined FUN_1454cecc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cecc0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined4 uVar11;
  ulonglong uStack_10;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)) {
    return 1;
  }
  pbVar8 = (byte *)*param_2;
  uVar9 = param_2[1];
  if (1 < uVar9) {
    pbVar7 = pbVar8 + 2;
    uVar3 = CONCAT11(*pbVar8,pbVar8[1]);
    uVar6 = (ulonglong)uVar3;
    if (uVar6 <= uVar9 - 2) {
      uVar9 = (uVar9 - 2) - uVar6;
      pbVar8 = pbVar7 + uVar6;
      if (uVar9 == 0) {
        *param_2 = pbVar7 + uVar6;
        param_2[1] = 0;
        pbVar8 = pbVar7;
        uVar9 = uVar6;
        if (1 < uVar6) {
          uStack_10 = (ulonglong)(uint)uVar3;
          uVar9 = (ulonglong)(uint)uVar3;
          while (bVar10 = uVar6 != 0, uVar6 = uVar9, bVar10) {
            bVar1 = *pbVar8;
            uVar4 = (ulonglong)bVar1;
            if (uVar9 - 1 < uVar4) break;
            pbVar8 = pbVar8 + uVar4 + 1;
            uVar6 = (uVar9 - 1) - uVar4;
            if (bVar1 == 0) break;
            uVar9 = uVar6;
            if (uVar6 == 0) {
              FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),
                            "ssl\\statem\\extensions_srvr.c",0x1ea);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0) = 0;
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8) = 0;
              lVar2 = *(longlong *)(param_1 + 0xa8);
              FUN_144ea6530(*(undefined8 *)(lVar2 + 0x3f0),
                            "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                            ,0x1c5);
              *(undefined8 *)(lVar2 + 0x3f0) = 0;
              *(undefined8 *)(lVar2 + 0x3f8) = 0;
              if (uStack_10 != 0) {
                lVar5 = FUN_144ea6d10(pbVar7,uStack_10,
                                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                      ,0x1ce);
                *(longlong *)(lVar2 + 0x3f0) = lVar5;
                if (lVar5 == 0) {
                  FUN_144eafc90(param_1,0x50,0x237,0x44,"ssl\\statem\\extensions_srvr.c",0x1f0);
                  return 0;
                }
                *(ulonglong *)(lVar2 + 0x3f8) = uStack_10;
              }
              return 1;
            }
          }
          uVar11 = 0x1e5;
          goto LAB_1454ceede;
        }
      }
    }
  }
  uVar6 = uVar9;
  uVar11 = 0x1db;
LAB_1454ceede:
  FUN_144eafc90(param_1,0x32,0x237,0x6e,"ssl\\statem\\extensions_srvr.c",uVar11,pbVar8,uVar6);
  return 0;
}



// FUNCTION 1454cef10 FUN_1454cef10 body=498 status=ok
// SIG undefined FUN_1454cef10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cef10(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  
  lVar6 = FUN_1455d7240();
  if (lVar6 == 0) {
    return 1;
  }
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    puVar13 = puVar4 + 2;
    bVar1 = puVar4[1];
    uVar9 = param_2[1] - 2;
    uVar10 = (uint)CONCAT11(*puVar4,bVar1);
    *param_2 = (longlong)puVar13;
    param_2[1] = uVar9;
    if (((bVar1 & 1) == 0) && (uVar12 = (ulonglong)uVar10, uVar12 <= uVar9)) {
      param_2[1] = uVar9 - uVar12;
      *param_2 = (longlong)(puVar13 + uVar10);
      uVar7 = FUN_1455d7240(param_1);
      *(undefined8 *)(param_1 + 0x778) = 0;
      iVar5 = FUN_144babbf0(uVar7);
      do {
        if (uVar12 == 0) {
          if (param_2[1] == 0) {
            uVar14 = 0x22d;
LAB_1454cf099:
            uVar7 = 0x161;
          }
          else {
            uVar9 = (ulonglong)*(byte *)*param_2;
            pbVar8 = (byte *)*param_2 + 1;
            uVar12 = param_2[1] - 1;
            *param_2 = (longlong)pbVar8;
            param_2[1] = uVar12;
            if (uVar9 <= uVar12) {
              *param_2 = (longlong)(pbVar8 + uVar9);
              param_2[1] = uVar12 - uVar9;
              if (uVar12 - uVar9 == 0) {
                return 1;
              }
            }
            uVar14 = 0x234;
            uVar7 = 0x160;
          }
          FUN_144eafc90(param_1,0x32,0x1d1,uVar7,"ssl\\statem\\extensions_srvr.c",uVar14);
          return 0;
        }
        if (uVar12 < 2) {
          uVar14 = 0x214;
          goto LAB_1454cf099;
        }
        uVar2 = *puVar13;
        uVar12 = uVar12 - 2;
        uVar3 = puVar13[1];
        iVar11 = 0;
        puVar13 = puVar13 + 2;
        if (0 < iVar5) {
          do {
            lVar6 = FUN_144babc00(uVar7,iVar11);
            if (*(uint *)(lVar6 + 8) == (uint)CONCAT11(uVar2,uVar3)) {
              *(longlong *)(param_1 + 0x778) = lVar6;
              iVar5 = iVar11;
              break;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar5);
        }
      } while( true );
    }
  }
  FUN_144eafc90(param_1,0x32,0x1d1,0x161,"ssl\\statem\\extensions_srvr.c",0x208);
  return 0;
}



// FUNCTION 1454cf130 FUN_1454cf130 body=1002 status=ok
// SIG undefined FUN_1454cf130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cf130(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong in_stack_ffffffffffffffa8;
  undefined4 uVar18;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  ulonglong uStack_30;
  
  bVar6 = false;
  if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x708) & 2) == 0)) {
    return 1;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0) {
    FUN_144eafc90(param_1,0x50,0x1cf,0x44,"ssl\\statem\\extensions_srvr.c",0x277);
    return 0;
  }
  local_38 = (undefined1 *)*param_2;
  uStack_30 = param_2[1];
  if (1 < uStack_30) {
    puVar10 = local_38 + 2;
    uVar12 = (uint)CONCAT11(*local_38,local_38[1]);
    uVar13 = (ulonglong)uVar12;
    if (uVar13 <= uStack_30 - 2) {
      local_38 = puVar10 + uVar13;
      uStack_30 = (uStack_30 - 2) - uVar13;
      if (uStack_30 == 0) {
        *param_2 = local_38;
        param_2[1] = 0;
        FUN_144eba940(local_38._0_4_,&local_40,&local_48);
        lVar5 = *(longlong *)(param_1 + 0x6b0);
        uVar11 = *(undefined8 *)(param_1 + 0x6b8);
        if (lVar5 == 0) {
          iVar9 = 0x6d;
          uVar18 = 0x28c;
          iVar15 = 0xd1;
        }
        else {
          uVar7 = uVar13;
          if ((*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == 0) || (uVar13 != 0)) {
joined_r0x0001454cf2b6:
            do {
              if (uVar13 == 0) {
                return 1;
              }
              if (uVar7 < 2) {
LAB_1454cf4bf:
                uVar11 = 0x32;
                uVar18 = 0x2a0;
                uVar16 = 0x9f;
                goto LAB_1454cf489;
              }
              uVar1 = *puVar10;
              uStack_30 = uVar7 - 2;
              uVar2 = puVar10[1];
              local_38 = puVar10 + 2;
              if (uStack_30 < 2) goto LAB_1454cf4bf;
              uVar3 = *local_38;
              puVar14 = puVar10 + 4;
              uVar17 = (ulonglong)CONCAT11(uVar3,puVar10[3]);
              if (uVar7 - 4 < uVar17) goto LAB_1454cf4bf;
              uVar13 = (uVar7 - 4) - uVar17;
              local_38 = puVar14 + uVar17;
              uStack_30 = uVar13;
              if (CONCAT11(uVar3,puVar10[3]) == 0) goto LAB_1454cf4bf;
              puVar10 = local_38;
              uVar7 = uVar13;
            } while (bVar6);
            sVar4 = *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406);
            if ((sVar4 == 0) || ((CONCAT11(uVar1,uVar2) == sVar4 && (uVar13 == 0)))) {
              in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
              iVar9 = FUN_144eb5e40(param_1,CONCAT11(uVar1,uVar2),uVar11,lVar5,
                                    in_stack_ffffffffffffffa8);
              if (iVar9 == 0) {
                uVar11 = 0x2f;
                uVar18 = 0x2ba;
                uVar16 = 0x6c;
              }
              else {
                in_stack_ffffffffffffffa8 = CONCAT44((int)(in_stack_ffffffffffffffa8 >> 0x20),1);
                iVar9 = FUN_144eb5e40(param_1,CONCAT11(uVar1,uVar2),local_40,local_48,
                                      in_stack_ffffffffffffffa8);
                puVar10 = local_38;
                uVar7 = uStack_30;
                if (iVar9 == 0) goto joined_r0x0001454cf2b6;
                lVar8 = FUN_144ecb920(CONCAT11(uVar1,uVar2));
                *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar8;
                if (lVar8 == 0) {
                  uVar18 = 0x2c6;
                  uVar11 = 0x50;
                  uVar16 = 0x13a;
                }
                else {
                  *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = CONCAT11(uVar1,uVar2);
                  iVar9 = FUN_144ba71c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408),
                                        puVar14,uVar17);
                  if (iVar9 != 0) {
                    bVar6 = true;
                    puVar10 = local_38;
                    uVar7 = uStack_30;
                    goto joined_r0x0001454cf2b6;
                  }
                  uVar18 = 0x2d0;
                  uVar11 = 0x2f;
                  uVar16 = 0x132;
                }
              }
            }
            else {
              uVar11 = 0x2f;
              uVar18 = 0x2b3;
              uVar16 = 0x6c;
            }
LAB_1454cf489:
            FUN_144eafc90(param_1,uVar11,0x1cf,uVar16,"ssl\\statem\\extensions_srvr.c",uVar18);
            return 0;
          }
          uVar18 = 0x297;
          iVar9 = uVar12 + 0x2f;
          iVar15 = uVar12 + 0x6c;
        }
        FUN_144eafc90(param_1,iVar9,0x1cf,iVar15,"ssl\\statem\\extensions_srvr.c",uVar18);
        return 0;
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x1cf,0x9f,"ssl\\statem\\extensions_srvr.c",0x27d);
  return 0;
}



// FUNCTION 1454cf520 FUN_1454cf520 body=2232 status=ok
// SIG undefined FUN_1454cf520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cf520(int *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined4 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined1 auStack_11d8 [32];
  char *local_11b8;
  undefined4 local_11b0;
  byte *local_11a8;
  char *pcStack_11a0;
  undefined1 local_1198 [48];
  longlong local_1168;
  byte *local_1160;
  ulonglong uStack_1158;
  char *local_1150;
  char *local_1148;
  byte *local_1140;
  undefined1 local_1138 [32];
  undefined1 local_1118 [4304];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_11d8;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x166) + 0xd8) == 0) ||
     ((**(uint **)(param_1 + 0x2a) & 0x800) == 0)) goto LAB_1454cfc26;
  pbVar11 = (byte *)*param_2;
  uStack_1158 = param_2[1];
  local_1160 = pbVar11;
  if (1 < uStack_1158) {
    bVar1 = *pbVar11;
    bVar2 = pbVar11[1];
    pbVar9 = pbVar11 + 2;
    pcVar12 = (char *)(ulonglong)(uint)CONCAT11(bVar1,bVar2);
    if (pcVar12 <= (char *)(uStack_1158 - 2)) {
      local_1160 = pbVar9 + (longlong)pcVar12;
      uStack_1158 = (longlong)(uStack_1158 - 2) - (longlong)pcVar12;
      if (uStack_1158 == 0) {
        *param_2 = local_1160;
        param_2[1] = 0;
        local_11a8 = pbVar9;
        local_1150 = pcVar12;
        if ((pcVar12 < (char *)0x20) ||
           (pcVar14 = (char *)((ulonglong)(uint)CONCAT11(bVar1,bVar2) - 0x20), pcVar12 < pcVar14)) {
          local_11b0 = 0x2fb;
          local_11b8 = "ssl\\statem\\extensions_srvr.c";
          FUN_144eafc90(param_1,0x32,0x266,0x9f);
          goto LAB_1454cfc26;
        }
        lVar4 = FUN_144ba5700();
        pcVar5 = (char *)FUN_144ba7260(0x357,0,*(longlong *)(param_1 + 0x1da) + 0x2a0,0x20);
        if ((lVar4 == 0) || (pcVar5 == (char *)0x0)) {
          FUN_144ba5800(lVar4);
          FUN_144ba6e60(pcVar5);
          uVar13 = 0x41;
          local_11b0 = 0x30a;
LAB_1454cfd4e:
          uVar8 = 0x50;
        }
        else {
          local_1168 = 0x20;
          uVar6 = FUN_144bab040();
          local_11b8 = pcVar5;
          iVar3 = FUN_144ba6150(lVar4,0,uVar6,0);
          if (((iVar3 < 1) ||
              (local_11b8 = pcVar14, iVar3 = FUN_144ba6030(lVar4,local_1138,&local_1168,pbVar9),
              iVar3 < 1)) || (local_1168 != 0x20)) {
            FUN_144ba5800(lVar4);
            FUN_144ba6e60(pcVar5);
            uVar13 = 0x44;
            local_11b0 = 0x316;
            goto LAB_1454cfd4e;
          }
          FUN_144ba5800(lVar4);
          FUN_144ba6e60(pcVar5);
          iVar3 = FUN_14259f120(local_1138,pbVar9 + (longlong)pcVar14,0x20);
          if (iVar3 == 0) {
            if (pcVar12 < (char *)0x2) {
              uVar8 = 0x32;
              local_11b0 = 0x325;
              uVar13 = 0x9f;
            }
            else {
              if (CONCAT11(*pbVar9,pbVar11[3]) != 1) goto LAB_1454cfc26;
              if (pcVar12 + -2 < (char *)0x2) {
                uVar8 = 0x32;
                local_11b0 = 0x334;
                uVar13 = 0x9f;
              }
              else if (CONCAT11(pbVar11[4],pbVar11[5]) == 0x304) {
                if (pcVar12 + -4 < (char *)0x2) {
                  uVar8 = 0x32;
                  local_11b0 = 0x33f;
                  uVar13 = 0x9f;
                }
                else if (pcVar12 + -6 < (char *)0x2) {
                  uVar8 = 0x32;
                  local_11b0 = 0x346;
                  uVar13 = 0x9f;
                }
                else if ((CONCAT11(pbVar11[6],pbVar11[7]) ==
                          *(short *)(*(longlong *)(param_1 + 0x2a) + 0x406)) &&
                        (lVar4 = FUN_144ea40e0(param_1,pbVar11 + 8,0),
                        *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == lVar4)) {
                  if ((pcVar12 != (char *)0x8) &&
                     (bVar1 = pbVar11[10], &DAT_00000007 < pcVar12 + -9)) {
                    pcStack_11a0 = pcVar12 + -0x11;
                    local_11a8 = pbVar11 + 0x13;
                    uVar15 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pbVar11[
                                                  0xb],pbVar11[0xc]),pbVar11[0xd]),pbVar11[0xe]),
                                                  pbVar11[0xf]),pbVar11[0x10]),pbVar11[0x11]),
                                      pbVar11[0x12]);
                    if (&DAT_00000001 < pcStack_11a0) {
                      pbVar10 = pbVar11 + 0x15;
                      pcVar14 = (char *)(ulonglong)CONCAT11(*local_11a8,pbVar11[0x14]);
                      if (pcVar14 <= pcVar12 + -0x13) {
                        pbVar11 = pbVar10 + (longlong)pcVar14;
                        pcStack_11a0 = pcVar12 + -0x13 + -(longlong)pcVar14;
                        local_11a8 = pbVar11;
                        local_1140 = pbVar10;
                        if (pcStack_11a0 != (char *)0x0) {
                          bVar2 = *pbVar11;
                          if (((char *)(ulonglong)bVar2 <= pcStack_11a0 + -1) &&
                             ((longlong)(pcStack_11a0 + -1) - (longlong)(ulonglong)bVar2 == 0x20)) {
                            uVar7 = _time64((__time64_t *)0x0);
                            if ((uVar7 < uVar15) || (600 < uVar7 - uVar15)) goto LAB_1454cfc26;
                            iVar3 = (**(code **)(*(longlong *)(param_1 + 0x166) + 0xd8))
                                              (param_1,pbVar11 + 1,bVar2);
                            if (iVar3 != 0) {
                              iVar3 = FUN_14526e9b0(local_1198,local_1118,0x10cc,0);
                              if (iVar3 == 0) {
                                local_11b0 = 0x375;
                                uVar13 = 0x44;
                              }
                              else {
                                iVar3 = FUN_14526ef00(local_1198,2,1);
                                if ((((((iVar3 == 0) ||
                                       (iVar3 = FUN_14526eb60(local_1198,3), iVar3 == 0)) ||
                                      (iVar3 = FUN_14526ef00(local_1198,0x303,2), iVar3 == 0)) ||
                                     ((iVar3 = FUN_14526ef90(local_1198,&DAT_149bf5d70,0x20),
                                      iVar3 == 0 ||
                                      (iVar3 = FUN_14526f090(local_1198,param_1 + 0x14c,
                                                             *(undefined8 *)(param_1 + 0x154),1),
                                      iVar3 == 0)))) ||
                                    (iVar3 = (**(code **)(*(longlong *)(param_1 + 2) + 0x98))
                                                       (*(undefined8 *)
                                                         (*(longlong *)(param_1 + 0x2a) + 0x238),
                                                        local_1198,&local_1160), iVar3 == 0)) ||
                                   ((iVar3 = FUN_14526ef00(local_1198,0,1), iVar3 == 0 ||
                                    (iVar3 = FUN_14526eb60(local_1198,2), iVar3 == 0)))) {
                                  FUN_14526f190(local_1198);
                                  uVar13 = 0x44;
                                  local_11b0 = 900;
                                }
                                else {
                                  iVar3 = FUN_14526ef00(local_1198,0x2b,2);
                                  if ((((iVar3 == 0) ||
                                       (iVar3 = FUN_14526eb60(local_1198,2), iVar3 == 0)) ||
                                      (iVar3 = FUN_14526ef00(local_1198,(longlong)*param_1,2),
                                      iVar3 == 0)) ||
                                     (iVar3 = FUN_14526ea40(local_1198), iVar3 == 0)) {
                                    FUN_14526f190(local_1198);
                                    uVar13 = 0x44;
                                    local_11b0 = 0x38d;
                                  }
                                  else if ((bVar1 == 0) ||
                                          (((iVar3 = FUN_14526ef00(local_1198,0x33,2), iVar3 != 0 &&
                                            (iVar3 = FUN_14526eb60(local_1198,2), iVar3 != 0)) &&
                                           ((iVar3 = FUN_14526ef00(local_1198,
                                                                   *(undefined2 *)
                                                                    (*(longlong *)(param_1 + 0x2a) +
                                                                    0x406),2), iVar3 != 0 &&
                                            (iVar3 = FUN_14526ea40(local_1198), iVar3 != 0)))))) {
                                    iVar3 = FUN_14526ef00(local_1198,0x2c,2);
                                    if ((((iVar3 != 0) &&
                                         (iVar3 = FUN_14526eb60(local_1198,2), iVar3 != 0)) &&
                                        ((iVar3 = FUN_14526f090(local_1198,pbVar9,local_1150,2),
                                         iVar3 != 0 &&
                                         (((iVar3 = FUN_14526ea40(local_1198), iVar3 != 0 &&
                                           (iVar3 = FUN_14526ea40(local_1198), iVar3 != 0)) &&
                                          (iVar3 = FUN_14526ea40(local_1198), iVar3 != 0)))))) &&
                                       ((iVar3 = FUN_14526f120(local_1198,&local_1148), iVar3 != 0
                                        && (iVar3 = FUN_14526ea70(local_1198), iVar3 != 0)))) {
                                      local_11b8 = local_1148;
                                      iVar3 = FUN_144eb5ee0(param_1,local_1140,pcVar14,local_1118);
                                      if (iVar3 != 0) {
                                        param_1[0x136] = 1;
                                        param_1[0x1ca] = 1;
                                      }
                                      goto LAB_1454cfc26;
                                    }
                                    FUN_14526f190(local_1198);
                                    uVar13 = 0x44;
                                    local_11b0 = 0x3a5;
                                  }
                                  else {
                                    FUN_14526f190(local_1198);
                                    uVar13 = 0x44;
                                    local_11b0 = 0x397;
                                  }
                                }
                              }
                              goto LAB_1454cfd4e;
                            }
                            local_11b0 = 0x36a;
                            uVar8 = 0x2f;
                            uVar13 = 0x134;
                            goto LAB_1454cfd53;
                          }
                        }
                      }
                    }
                  }
                  uVar8 = 0x32;
                  local_11b0 = 0x35b;
                  uVar13 = 0x9f;
                }
                else {
                  local_11b0 = 0x351;
                  uVar8 = 0x2f;
                  uVar13 = 0xba;
                }
              }
              else {
                uVar8 = 0x2f;
                local_11b0 = 0x339;
                uVar13 = 0x74;
              }
            }
          }
          else {
            local_11b0 = 799;
            uVar8 = 0x2f;
            uVar13 = 0x134;
          }
        }
LAB_1454cfd53:
        local_11b8 = "ssl\\statem\\extensions_srvr.c";
        FUN_144eafc90(param_1,uVar8,0x266,uVar13);
        goto LAB_1454cfc26;
      }
    }
  }
  local_11b0 = 0x2f1;
  local_11b8 = "ssl\\statem\\extensions_srvr.c";
  FUN_144eafc90(param_1,0x32,0x266,0x9f);
LAB_1454cfc26:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_11d8);
}



// FUNCTION 1454cfdf0 FUN_1454cfdf0 body=90 status=ok
// SIG undefined FUN_1454cfdf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cfdf0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_144eafc90(param_1,0x32,0x23a,0x6e,"ssl\\statem\\extensions_srvr.c",0x3e1,0x1454cfdfa);
    return 0;
  }
  **(uint **)(param_1 + 0xa8) = **(uint **)(param_1 + 0xa8) | 0x200;
  return 1;
}



// FUNCTION 1454cfe50 FUN_1454cfe50 body=207 status=ok
// SIG undefined FUN_1454cfe50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454cfe50(undefined4 param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong in_RCX;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  
  pbVar5 = (byte *)*param_2;
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    bVar1 = *pbVar5;
    uVar2 = (ulonglong)bVar1;
    pbVar4 = pbVar5 + 1;
    uVar3 = (ulonglong)(uint)bVar1;
    if (uVar2 <= lVar6 - 1U) {
      pbVar5 = pbVar4 + uVar2;
      lVar6 = (lVar6 - 1U) - uVar2;
      if (lVar6 == 0) {
        param_1 = SUB84(pbVar5,0);
        *param_2 = pbVar5;
        param_2[1] = 0;
        if (bVar1 != 0) {
          while (uVar3 != 0) {
            bVar1 = *pbVar4;
            uVar3 = uVar3 - 1;
            pbVar4 = pbVar4 + 1;
            if (bVar1 == 1) {
              *(uint *)(in_RCX + 0x708) = *(uint *)(in_RCX + 0x708) | 2;
            }
            else if ((bVar1 == 0) && ((*(uint *)(in_RCX + 0x5cc) & 0x400) != 0)) {
              *(uint *)(in_RCX + 0x708) = *(uint *)(in_RCX + 0x708) | 1;
            }
          }
          return 1;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x23c,0x6e,"ssl\\statem\\extensions_srvr.c",0x253,pbVar5,lVar6,
                0x1454cfe5a);
  return 0;
}



// FUNCTION 1454cff20 FUN_1454cff20 body=2139 status=ok
// SIG undefined FUN_1454cff20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454cff20(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  __time64_t _Var12;
  ulonglong uVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined1 auStack_1f8 [32];
  byte *local_1d8;
  ulonglong *local_1d0;
  ulonglong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  ulonglong local_1a8 [2];
  byte *local_198;
  ulonglong uStack_190;
  undefined2 local_188 [2];
  uint local_184;
  undefined4 local_180;
  longlong local_178;
  ulonglong local_170;
  byte *local_168;
  longlong *local_158;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar13 = 0;
  local_1a8[0] = 0;
  local_180 = 0;
  local_178 = 0;
  local_158 = param_2;
  if ((*(byte *)(param_1 + 0x708) & 3) == 0) goto LAB_1454d0715;
  local_198 = (byte *)*param_2;
  uStack_190 = param_2[1];
  if (1 < uStack_190) {
    bVar2 = *local_198;
    bVar3 = local_198[1];
    pbVar15 = local_198 + 2;
    uVar17 = (ulonglong)(uint)CONCAT11(bVar2,bVar3);
    if (uVar17 <= uStack_190 - 2) {
      local_184 = 0;
      *param_2 = (longlong)(pbVar15 + uVar17);
      param_2[1] = (uStack_190 - 2) - uVar17;
      *(undefined4 *)(param_1 + 0x678) = 0;
      uVar11 = uVar13;
      local_198 = pbVar15;
      uStack_190 = uVar17;
      if (CONCAT11(bVar2,bVar3) == 0) goto LAB_1454d0715;
      do {
        uVar9 = (uint)uVar11;
        if (uVar17 < 2) {
LAB_1454d072f:
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x439);
LAB_1454d0737:
          uVar16 = 0x32;
LAB_1454d073c:
          uVar19 = 0x6e;
LAB_1454d0745:
          local_1d8 = (byte *)0x149d8bfd8;
          FUN_144eafc90(param_1,uVar16,0x1f9,uVar19);
          goto LAB_1454d0715;
        }
        pbVar1 = pbVar15 + 2;
        uVar11 = (ulonglong)(uint)CONCAT11(*pbVar15,pbVar15[1]);
        if (uStack_190 - 2 < uVar11) goto LAB_1454d072f;
        uStack_190 = (uStack_190 - 2) - uVar11;
        local_198 = pbVar1 + uVar11;
        if (uStack_190 < 4) goto LAB_1454d072f;
        bVar2 = local_198[1];
        bVar3 = *local_198;
        uVar17 = uStack_190 - 4;
        bVar4 = local_198[2];
        bVar5 = local_198[3];
        local_198 = local_198 + 4;
        uStack_190 = uVar17;
        local_170 = uVar17;
        local_168 = local_198;
        if ((*(code **)(param_1 + 0x588) != (code *)0x0) &&
           (iVar8 = (**(code **)(param_1 + 0x588))
                              (param_1,pbVar1,(uint)CONCAT11(*pbVar15,pbVar15[1]),local_1a8),
           uVar13 = local_1a8[0], iVar8 == 0)) {
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x442);
          uVar16 = 0x50;
          goto LAB_1454d073c;
        }
        if (uVar13 != 0) {
LAB_1454d03a7:
          uVar13 = FUN_144eb1a50(uVar13,0);
          if (uVar13 == 0) {
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x481);
LAB_1454d06c4:
            uVar19 = 0x44;
            uVar16 = 0x50;
            goto LAB_1454d06d1;
          }
          FUN_144eb0d50(local_1a8[0]);
          local_1a8[0] = uVar13;
          memcpy((void *)(uVar13 + 0x180),(void *)(param_1 + 0x4e8),*(size_t *)(param_1 + 0x4e0));
          local_180 = 1;
          *(undefined8 *)(local_1a8[0] + 0x178) = *(undefined8 *)(param_1 + 0x4e0);
          if (uVar9 == 0) {
            *(undefined4 *)(param_1 + 0x714) = 1;
          }
          *(undefined4 *)(param_1 + 0x678) = 1;
LAB_1454d041f:
          lVar10 = FUN_144ea44e0(*(undefined4 *)(*(longlong *)(local_1a8[0] + 0x1e0) + 0x40));
          local_178 = lVar10;
          lVar14 = FUN_144ea44e0(*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40));
          uVar13 = local_1a8[0];
          if (lVar10 != lVar14) {
            FUN_144eb0d50();
            local_1a8[0] = 0;
            *(undefined4 *)(param_1 + 0x714) = 0;
            *(undefined4 *)(param_1 + 0x678) = 0;
            uVar13 = 0;
            goto LAB_1454d0307;
          }
          break;
        }
        if ((*(longlong *)(param_1 + 0x580) != 0) && (uVar11 < 0x81)) {
          FUN_144ea6530(0,
                        "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                        ,0x1e2);
          lVar10 = FUN_144ea6e30(pbVar1,uVar11,
                                 "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                 ,0x1e5);
          if (lVar10 == 0) {
            uVar16 = 0x50;
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x450);
            uVar19 = 0x44;
          }
          else {
            uVar9 = (**(code **)(param_1 + 0x580))(param_1,lVar10,local_148,0x100);
            FUN_144ea6530(lVar10,"ssl\\statem\\extensions_srvr.c",0x455);
            if (uVar9 < 0x101) {
              if (uVar9 == 0) {
LAB_1454d020f:
                uVar17 = local_170;
                uVar13 = local_1a8[0];
                uVar9 = local_184;
                if (local_1a8[0] != 0) goto LAB_1454d03a7;
                goto LAB_1454d0226;
              }
              local_188[0] = 0x113;
              lVar10 = FUN_144ea3230(param_1,local_188);
              if (lVar10 != 0) {
                local_1a8[0] = FUN_144eb0c00();
                if ((((local_1a8[0] != 0) &&
                     (iVar8 = FUN_144b9aa50(local_1a8[0],local_148,uVar9), iVar8 != 0)) &&
                    (iVar8 = FUN_144eb0bc0(local_1a8[0],lVar10), iVar8 != 0)) &&
                   (iVar8 = FUN_144eb0ba0(local_1a8[0],0x304), iVar8 != 0)) {
                  FUN_14259f0c0(local_148,uVar9);
                  goto LAB_1454d020f;
                }
                FUN_14259f0c0(local_148,uVar9);
                local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x473);
                goto LAB_1454d06c4;
              }
              FUN_14259f0c0(local_148,uVar9);
              uVar16 = 0x50;
              local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x466);
              uVar19 = 0x44;
            }
            else {
              uVar16 = 0x50;
              local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x458);
              uVar19 = 0x44;
            }
          }
          goto LAB_1454d0745;
        }
LAB_1454d0226:
        if (((*(uint *)(param_1 + 0x5cc) >> 0xe & 1) == 0) &&
           ((*(int *)(param_1 + 0x1710) == 0 || ((*(uint *)(param_1 + 0x5cc) >> 0x18 & 1) != 0)))) {
          local_1d0 = local_1a8;
          local_1d8 = (byte *)0x0;
          iVar8 = FUN_144ebac90(param_1,pbVar1,uVar11,0);
          if (iVar8 != 3) {
            if ((iVar8 == 0) || (iVar8 == 1)) {
              uVar16 = 0x50;
              local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4ac);
              uVar19 = 0x44;
              goto LAB_1454d0745;
            }
            uVar13 = local_1a8[0];
            lVar10 = local_178;
            uVar11 = local_1a8[0];
            if ((iVar8 - 2U & 0xfffffffd) != 0) goto LAB_1454d02c9;
            goto LAB_1454d0307;
          }
LAB_1454d050f:
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4a5);
          goto LAB_1454d0737;
        }
        *(undefined4 *)(param_1 + 0x678) = 1;
        if (uVar11 == 0) goto LAB_1454d050f;
        lVar10 = local_178;
        if ((uVar11 == 0x20) &&
           (uVar11 = FUN_144eb15c0(param_1,pbVar1), uVar13 = local_1a8[0], lVar10 = local_178,
           uVar11 != 0)) {
LAB_1454d02c9:
          local_1a8[0] = uVar11;
          if (((*(int *)(param_1 + 0x1710) == 0) || ((*(uint *)(param_1 + 0x5cc) & 0x1000000) != 0))
             || (iVar8 = FUN_144eb1190(*(undefined8 *)(param_1 + 0x768),local_1a8[0]), iVar8 != 0))
          {
            _Var12 = _time64((__time64_t *)0x0);
            uVar18 = (int)_Var12 - *(int *)(local_1a8[0] + 0x1d4);
            uVar20 = CONCAT31(CONCAT21(CONCAT11(bVar3,bVar2),bVar4),bVar5) -
                     *(int *)(local_1a8[0] + 0x224);
            if (((uVar9 == 0) && ((int)uVar18 <= *(int *)(local_1a8[0] + 0x1d0))) &&
               (((uVar18 * 1000) / 1000 == uVar18 &&
                ((uVar18 = uVar18 * 1000 + 1000, uVar20 <= uVar18 && (uVar18 <= uVar20 + 10000))))))
            {
              *(undefined4 *)(param_1 + 0x714) = 1;
            }
            goto LAB_1454d041f;
          }
          FUN_144eb0d50();
          local_1a8[0] = 0;
          uVar13 = 0;
          lVar10 = local_178;
        }
LAB_1454d0307:
        uVar9 = uVar9 + 1;
        uVar11 = (ulonglong)uVar9;
        pbVar15 = local_168;
        local_184 = uVar9;
      } while (uVar17 != 0);
      plVar7 = local_158;
      if (uVar13 == 0) goto LAB_1454d0715;
      lVar14 = *local_158;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
      iVar8 = FUN_144ba3cd0(lVar10);
      pbVar15 = (byte *)*plVar7;
      uVar13 = plVar7[1];
      if (uVar13 < 2) {
LAB_1454d06a9:
        uVar16 = 0x32;
        local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4e9);
        uVar19 = 0x6e;
        local_198 = pbVar15;
        uStack_190 = uVar13;
LAB_1454d06d1:
        local_1d8 = (byte *)0x149d8bfd8;
        FUN_144eafc90(param_1,uVar16,0x1f9,uVar19);
      }
      else {
        local_198 = pbVar15 + 2;
        uStack_190 = (ulonglong)CONCAT11(*pbVar15,pbVar15[1]);
        if (uVar13 - 2 < uStack_190) goto LAB_1454d06a9;
        *plVar7 = (longlong)(local_198 + uStack_190);
        plVar7[1] = (uVar13 - 2) - uStack_190;
        uVar18 = 0;
        do {
          if (uStack_190 == 0) {
LAB_1454d0696:
            uVar16 = 0x32;
            local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4f0);
            uVar19 = 0x6e;
            goto LAB_1454d06d1;
          }
          uVar13 = (ulonglong)*local_198;
          local_1d8 = local_198 + 1;
          if (uStack_190 - 1 < uVar13) goto LAB_1454d0696;
          uStack_190 = (uStack_190 - 1) - uVar13;
          local_198 = local_1d8 + uVar13;
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar9);
        if (uVar13 != (longlong)iVar8) {
          uVar16 = 0x32;
          local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x4f7);
          uVar19 = 0x6e;
          goto LAB_1454d06d1;
        }
        local_1b8 = local_180;
        local_1c0 = 0;
        local_1c8 = local_1a8[0];
        local_1d0 = (ulonglong *)0x0;
        iVar8 = FUN_145270e20(param_1,lVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                              lVar14 - lVar6);
        if (iVar8 == 1) {
          *(uint *)(param_1 + 0x730) = uVar9;
          FUN_144eb0d50(*(undefined8 *)(param_1 + 0x508));
          *(ulonglong *)(param_1 + 0x508) = local_1a8[0];
          goto LAB_1454d0715;
        }
      }
      FUN_144eb0d50(local_1a8[0]);
      goto LAB_1454d0715;
    }
  }
  local_1d0 = (ulonglong *)CONCAT44(local_1d0._4_4_,0x42c);
  local_1d8 = (byte *)0x149d8bfd8;
  FUN_144eafc90(param_1,0x32,0x1f9,0x6e);
LAB_1454d0715:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 1454d0790 FUN_1454d0790 body=89 status=ok
// SIG undefined FUN_1454d0790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d0790(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_144eafc90(param_1,0x32,0x26c,0x116,"ssl\\statem\\extensions_srvr.c",0x510,0x1454d079a);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x788) = 2;
  return 1;
}



// FUNCTION 1454d07f0 FUN_1454d07f0 body=280 status=ok
// SIG undefined FUN_1454d07f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d07f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x3d8) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0xff01,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,1);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ef90(param_2,*(longlong *)(param_1 + 0xa8) + 0x348,
                              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x388));
        if (iVar1 != 0) {
          iVar1 = FUN_14526ef90(param_2,*(longlong *)(param_1 + 0xa8) + 0x390,
                                *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3d0));
          if (iVar1 != 0) {
            iVar1 = FUN_14526ea40(param_2);
            if (iVar1 != 0) {
              iVar1 = FUN_14526ea40(param_2);
              if (iVar1 != 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1ca,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x52e));
  return 0;
}



// FUNCTION 1454d0910 FUN_1454d0910 body=200 status=ok
// SIG undefined FUN_1454d0910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d0910(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(int *)(param_1 + 0x740) == 1) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)))))) {
    iVar1 = FUN_14526ef00(param_2,0,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_144eafc90(param_1,0x50,0x1cb,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x546));
    return 0;
  }
  return 2;
}



// FUNCTION 1454d09e0 FUN_1454d09e0 body=275 status=ok
// SIG undefined FUN_1454d09e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d09e0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar4 = 1;
  if (param_3 == 0x2000) {
    if (*(int *)(param_1 + 0x1710) != 0) {
      iVar1 = FUN_14526ef00(param_2,0x2a,2);
      if (((iVar1 != 0) && (iVar1 = FUN_14526eb60(param_2,2), iVar1 != 0)) &&
         ((iVar1 = FUN_14526ef00(param_2,*(undefined4 *)(param_1 + 0x1710),4), iVar1 != 0 &&
          (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)))) {
        return 1;
      }
      uVar2 = CONCAT44(uVar3,0x797);
LAB_1454d0ac2:
      FUN_144eafc90(param_1,0x50,0x213,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x710) == 2) {
    iVar1 = FUN_14526ef00(param_2,0x2a,2);
    if (((iVar1 != 0) && (iVar1 = FUN_14526eb60(param_2,2), iVar1 != 0)) &&
       (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar2 = CONCAT44(uVar4,0x7a5);
    goto LAB_1454d0ac2;
  }
  return 2;
}



// FUNCTION 1454d0b00 FUN_1454d0b00 body=223 status=ok
// SIG undefined FUN_1454d0b00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d0b00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (3 < (byte)(*(char *)(*(longlong *)(param_1 + 0x508) + 0x240) - 1U)) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,1,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x508) + 0x240),1);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ea40(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x224,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x55e));
  return 0;
}



// FUNCTION 1454d0be0 FUN_1454d0be0 body=245 status=ok
// SIG undefined FUN_1454d0be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d0be0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454d0bf0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  if ((((*(byte *)(lVar1 + 0x1c) & 4) != 0) || ((*(byte *)(lVar1 + 0x20) & 8) != 0)) &&
     (*(longlong *)(param_1 + 0x698) != 0)) {
    FUN_144eba810(param_1,&local_18,&local_res8);
    iVar2 = FUN_14526ef00(param_2,0xb,2);
    if (iVar2 != 0) {
      iVar2 = FUN_14526eb60(param_2,2);
      if (iVar2 != 0) {
        iVar2 = FUN_14526f090(param_2,local_18,local_res8,1);
        if (iVar2 != 0) {
          iVar2 = FUN_14526ea40(param_2);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
    }
    FUN_144eafc90(param_1,0x50,0x1c5,0x44,"ssl\\statem\\extensions_srvr.c",0x57a);
    return 0;
  }
  return 2;
}



// FUNCTION 1454d0ce0 FUN_1454d0ce0 body=433 status=ok
// SIG undefined FUN_1454d0ce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d0ce0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  undefined4 uVar5;
  longlong local_28 [2];
  
  local_28[1] = 0x1454d0cee;
  bVar2 = true;
  if (*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == 0) {
    return 2;
  }
  FUN_144eba940(param_1,local_28,&local_res8);
  if (local_res8 == 0) {
    FUN_144eafc90(param_1,0x50,0x220,0x44,"ssl\\statem\\extensions_srvr.c",0x592);
    return 0;
  }
  uVar4 = 0;
  if (local_res8 != 0) {
    do {
      sVar1 = *(short *)(local_28[0] + uVar4 * 2);
      iVar3 = FUN_144eba8d0(param_1,sVar1,0x20004);
      if (iVar3 != 0) {
        if (bVar2) {
          if (*(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) == sVar1) {
            return 2;
          }
          iVar3 = FUN_14526ef00(param_2,10,2);
          if (((iVar3 == 0) || (iVar3 = FUN_14526eb60(param_2,2), iVar3 == 0)) ||
             (iVar3 = FUN_14526eb60(param_2,2), iVar3 == 0)) {
            uVar5 = 0x5aa;
            goto LAB_1454d0e59;
          }
          bVar2 = false;
        }
        iVar3 = FUN_14526ef00(param_2,sVar1,2);
        if (iVar3 == 0) {
          uVar5 = 0x5b3;
          goto LAB_1454d0e59;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_res8);
  }
  iVar3 = FUN_14526ea40(param_2);
  if ((iVar3 != 0) && (iVar3 = FUN_14526ea40(param_2), iVar3 != 0)) {
    return 1;
  }
  uVar5 = 0x5bc;
LAB_1454d0e59:
  FUN_144eafc90(param_1,0x50,0x220,0x44,"ssl\\statem\\extensions_srvr.c",uVar5);
  return 0;
}



// FUNCTION 1454d0ea0 FUN_1454d0ea0 body=180 status=ok
// SIG undefined FUN_1454d0ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d0ea0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x678) != 0) {
    iVar1 = FUN_144ebb190();
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,0x23,2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ef00(param_2,0,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      FUN_144eafc90(param_1,0x50,0x1cc,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x5d0));
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x678) = 0;
  return 2;
}



// FUNCTION 1454d0f60 FUN_1454d0f60 body=281 status=ok
// SIG undefined FUN_1454d0f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454d0f60(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  
  uVar3 = 1;
  if (((param_3 == 0x4000) || (*(int *)(param_1 + 0x654) == 0)) ||
     (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
      (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) && (param_5 != 0)))))
     ) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,5,2);
  if ((iVar1 == 0) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) {
    uVar2 = CONCAT44(uVar3,0x5e9);
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
       ((iVar1 != 0x10000 && (iVar1 = FUN_144ebf930(param_1,param_2), iVar1 == 0)))) {
      return 0;
    }
    iVar1 = FUN_14526ea40(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = CONCAT44(uVar3,0x5f8);
  }
  FUN_144eafc90(param_1,0x50,0x1cd,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}



// FUNCTION 1454d1080 FUN_1454d1080 body=258 status=ok
// SIG undefined FUN_1454d1080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1080(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454d1090;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x3dc);
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 0;
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x280);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,&local_18,local_res8,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x288));
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_14526ef00(param_2,0x3374,2);
      if ((iVar2 != 0) && (iVar2 = FUN_14526f090(param_2,local_18,local_res8[0],2), iVar2 != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 1;
        return 1;
      }
      FUN_144eafc90(param_1,0x50,0x1c9,0x44,"ssl\\statem\\extensions_srvr.c",0x615);
      return 0;
    }
  }
  return 2;
}



// FUNCTION 1454d1190 FUN_1454d1190 body=248 status=ok
// SIG undefined FUN_1454d1190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1190(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0x10,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526f090(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),1);
        if (iVar1 != 0) {
          iVar1 = FUN_14526ea40(param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_14526ea40(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1c3,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x62e));
  return 0;
}



// FUNCTION 1454d1290 FUN_1454d1290 body=239 status=ok
// SIG undefined FUN_1454d1290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1290(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x778) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0xe,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ef00(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x778) + 8),2);
        if (iVar1 != 0) {
          iVar1 = FUN_14526ef00(param_2,0,1);
          if (iVar1 != 0) {
            iVar1 = FUN_14526ea40(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1ce,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x644));
  return 0;
}



// FUNCTION 1454d1380 FUN_1454d1380 body=221 status=ok
// SIG undefined FUN_1454d1380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x70c) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if ((((*(int *)(lVar1 + 0x28) != 0x40) && (iVar2 = *(int *)(lVar1 + 0x24), iVar2 != 4)) &&
        (iVar2 != 0x400)) && (iVar2 != 0x40000)) {
      iVar2 = FUN_14526ef00(param_2,0x16,2);
      if (iVar2 != 0) {
        iVar2 = FUN_14526ef00(param_2,0,2);
        if (iVar2 != 0) {
          return 1;
        }
      }
      FUN_144eafc90(param_1,0x50,0x1c7,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar3,0x661));
      return 0;
    }
    *(undefined4 *)(param_1 + 0x70c) = 0;
  }
  return 2;
}



// FUNCTION 1454d1460 FUN_1454d1460 body=167 status=ok
// SIG undefined FUN_1454d1460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((**(uint **)(param_1 + 0xa8) & 0x200) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0x17,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526ef00(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1c6,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x671));
  return 0;
}



// FUNCTION 1454d1510 FUN_1454d1510 body=212 status=ok
// SIG undefined FUN_1454d1510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1510(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    iVar1 = FUN_14526ef00(param_2,0x2b,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ef00(param_2,(longlong)*param_1,2);
        if (iVar1 != 0) {
          iVar1 = FUN_14526ea40(param_2);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
    uVar2 = CONCAT44(uVar3,0x689);
  }
  else {
    uVar2 = 0x10000067f;
  }
  FUN_144eafc90(param_1,0x50,0x263,0x44,"ssl\\statem\\extensions_srvr.c",uVar2);
  return 0;
}



// FUNCTION 1454d15f0 FUN_1454d15f0 body=743 status=ok
// SIG undefined FUN_1454d15f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_1454d15f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 uVar8;
  undefined4 uVar7;
  
  uVar8 = 1;
  uVar7 = 1;
  uVar6 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (*(int *)(param_1 + 0x4d8) == 1) {
    if (lVar1 != 0) {
      return 2;
    }
    iVar2 = FUN_14526ef00(param_2,0x33,2);
    if (((iVar2 != 0) && (iVar2 = FUN_14526eb60(param_2,2), iVar2 != 0)) &&
       ((iVar2 = FUN_14526ef00(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),2),
        iVar2 != 0 && (iVar2 = FUN_14526ea40(param_2), iVar2 != 0)))) {
      return true;
    }
    uVar5 = CONCAT44(uVar7,0x6a4);
  }
  else if (lVar1 == 0) {
    if ((*(int *)(param_1 + 200) != 0) &&
       (uVar6 = 1, iVar2 = FUN_144eb9af0(param_1,0,0), iVar2 != 0)) {
      return 2;
    }
    uVar5 = CONCAT44(uVar6,0x6af);
  }
  else {
    if ((*(int *)(param_1 + 200) != 0) && ((*(byte *)(param_1 + 0x708) & 2) == 0)) {
      return 2;
    }
    iVar2 = FUN_14526ef00(param_2,0x33,2);
    if (((iVar2 != 0) && (iVar2 = FUN_14526eb60(param_2,2), iVar2 != 0)) &&
       (iVar2 = FUN_14526ef00(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),2),
       iVar2 != 0)) {
      lVar3 = FUN_144ec9340(lVar1);
      if (lVar3 == 0) {
        FUN_144eafc90(param_1,0x50,0x1c8,0x41,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar8,0x6c7)
                     );
      }
      else {
        lVar4 = FUN_144ba7210(lVar3,&local_res8);
        if (lVar4 == 0) {
          FUN_144eafc90(param_1,0x50,0x1c8,0x10,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar8,0x6cf));
          FUN_144ba6e60(lVar3);
        }
        else {
          iVar2 = FUN_14526f090(param_2,local_res8,lVar4,2);
          if ((iVar2 != 0) && (iVar2 = FUN_14526ea40(param_2), iVar2 != 0)) {
            FUN_144ea6530(local_res8,"ssl\\statem\\extensions_srvr.c",0x6dc);
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) = lVar3;
            iVar2 = FUN_144ec93c0(param_1,lVar3,lVar1,1);
            return iVar2 != 0;
          }
          FUN_144eafc90(param_1,0x50,0x1c8,0x44,"ssl\\statem\\extensions_srvr.c",
                        CONCAT44(uVar8,0x6d7));
          FUN_144ba6e60(lVar3);
          FUN_144ea6530(local_res8,"ssl\\statem\\extensions_srvr.c",0x6d9);
        }
      }
      return false;
    }
    uVar5 = CONCAT44(uVar8,0x6c0);
  }
  FUN_144eafc90(param_1,0x50,0x1c8,0x44,"ssl\\statem\\extensions_srvr.c",uVar5);
  return false;
}



// FUNCTION 1454d18e0 FUN_1454d18e0 body=1237 status=ok
// SIG undefined FUN_1454d18e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1454d18e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  __time64_t _Var2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong local_res8;
  undefined4 uVar7;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  local_28[1] = 0x1454d18f8;
  uVar6 = 0;
  if ((**(uint **)(param_1 + 0xa8) & 0x800) == 0) {
    return 2;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0xd0) == 0) {
    uVar7 = 0x6fa;
    uVar6 = 0x11f;
    goto LAB_1454d1d83;
  }
  iVar1 = FUN_14526ef00(param_2,0x2c,2);
  if ((((((iVar1 == 0) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) ||
        (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) ||
       (((iVar1 = FUN_14526f120(param_2,&local_30), iVar1 == 0 ||
         (iVar1 = FUN_14526ede0(param_2,0x1076,&local_58), iVar1 == 0)) ||
        ((iVar1 = FUN_14526ef00(param_2,1,2), iVar1 == 0 ||
         ((iVar1 = FUN_14526ef00(param_2,0x304,2), iVar1 == 0 ||
          (iVar1 = FUN_14526ef00(param_2,*(undefined2 *)(*(longlong *)(param_1 + 0xa8) + 0x406),2),
          iVar1 == 0)))))))) ||
      (iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                         (*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238),param_2,
                          local_28 + 1), iVar1 == 0)) ||
     (iVar1 = FUN_14526ef00(param_2,*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) == 0,1),
     iVar1 == 0)) {
LAB_1454d1d72:
    uVar7 = 0x70e;
  }
  else {
    _Var2 = _time64((__time64_t *)0x0);
    iVar1 = FUN_14526ef00(param_2,_Var2,8);
    if (((iVar1 == 0) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) ||
       (iVar1 = FUN_14526ede0(param_2,0x40,&local_78), iVar1 == 0)) goto LAB_1454d1d72;
    iVar1 = FUN_14527dd60(param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_144b9bff0(param_1,local_78,0x40,&local_50);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_14526ed00(param_2,local_50,&local_48);
    if (((iVar1 == 0) || (local_78 != local_48)) ||
       ((iVar1 = FUN_14526ea40(param_2), iVar1 == 0 ||
        ((iVar1 = FUN_14526eb60(param_2,1), iVar1 == 0 ||
         (iVar1 = FUN_14526ede0(param_2,0x1000,&local_70), iVar1 == 0)))))) {
      uVar7 = 0x723;
    }
    else {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0xd0))(param_1,local_70,&local_40);
      if (iVar1 == 0) {
        uVar7 = 0x72a;
        uVar6 = 400;
        goto LAB_1454d1d83;
      }
      iVar1 = FUN_14526ed00(param_2,local_40,&local_38);
      if ((((iVar1 == 0) || (local_70 != local_38)) || (iVar1 = FUN_14526ea40(param_2), iVar1 == 0))
         || ((iVar1 = FUN_14526f120(param_2,&local_res8), iVar1 == 0 ||
             (iVar1 = FUN_14526ede0(param_2,0x20,&local_60), iVar1 == 0)))) {
        uVar7 = 0x734;
      }
      else {
        local_res8 = local_res8 - local_30;
        local_68 = 0x20;
        if (local_res8 < 0x1057) {
          lVar3 = FUN_144ba5700();
          lVar4 = FUN_144ba7260(0x357,0,*(longlong *)(param_1 + 0x768) + 0x2a0,0x20);
          if ((lVar3 == 0) || (lVar4 == 0)) {
            uVar7 = 0x748;
            uVar5 = 0x41;
          }
          else {
            uVar5 = FUN_144bab040();
            iVar1 = FUN_144ba6150(lVar3,0,uVar5,0,lVar4);
            if ((iVar1 < 1) ||
               (iVar1 = FUN_144ba6030(lVar3,local_60,&local_68,local_58,local_res8), iVar1 < 1)) {
              uVar7 = 0x750;
              uVar5 = 0x44;
            }
            else if (local_res8 + local_68 < 0x1077) {
              iVar1 = FUN_14526ed00(param_2,local_68,local_28);
              if ((((iVar1 != 0) && (local_60 == local_28[0])) &&
                  (local_58 == local_60 - local_res8)) &&
                 ((iVar1 = FUN_14526ea40(param_2), iVar1 != 0 &&
                  (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)))) {
                uVar6 = 1;
                goto LAB_1454d1d39;
              }
              uVar7 = 0x760;
              uVar5 = 0x44;
            }
            else {
              uVar7 = 0x756;
              uVar5 = 0x44;
            }
          }
          FUN_144eafc90(param_1,0x50,0x265,uVar5,"ssl\\statem\\extensions_srvr.c",uVar7);
LAB_1454d1d39:
          FUN_144ba5800(lVar3);
          FUN_144ba6e60(lVar4);
          return uVar6;
        }
        uVar7 = 0x73c;
      }
    }
  }
  uVar6 = 0x44;
LAB_1454d1d83:
  FUN_144eafc90(param_1,0x50,0x265,uVar6,"ssl\\statem\\extensions_srvr.c",uVar7);
  return 0;
}



// FUNCTION 1454d1dc0 FUN_1454d1dc0 body=241 status=ok
// SIG undefined FUN_1454d1dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d1dc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0x2000e8fd;
  local_34 = 0x8301e30;
  local_30 = 0x852a0606;
  local_2c = 0x9020203;
  local_28 = 0x6060830;
  local_24 = 0x203852a;
  local_20 = 0x8301602;
  local_1c = 0x852a0606;
  local_18 = 0x17020203;
  if (((*(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x18) - 0x80 < 2) &&
      (iVar1 = FUN_144b979b0(param_1), iVar1 < 0)) &&
     (iVar1 = FUN_14526ef90(param_2,&local_38,0x24), iVar1 == 0)) {
    local_40 = 0x783;
    local_48 = "ssl\\statem\\extensions_srvr.c";
    FUN_144eafc90(param_1,0x50,0x1c4,0x44);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_68);
}



// FUNCTION 1454d1ed0 FUN_1454d1ed0 body=197 status=ok
// SIG undefined FUN_1454d1ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1ed0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 200) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0x29,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,(longlong)*(int *)(param_1 + 0x730),2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ea40(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1f8,0x44,"ssl\\statem\\extensions_srvr.c",CONCAT44(uVar2,0x7b7));
  return 0;
}



// FUNCTION 1454d1fa0 FUN_1454d1fa0 body=81 status=ok
// SIG undefined FUN_1454d1fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d1fa0(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    memcpy(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 1454d2000 FUN_1454d2000 body=213 status=ok
// SIG undefined FUN_1454d2000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d2000(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x780) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0xff01,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526f090(param_2,*(longlong *)(param_1 + 0xa8) + 0x348,
                            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x388),1);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ea40(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1d9,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1d));
  return 0;
}



// FUNCTION 1454d20e0 FUN_1454d20e0 body=285 status=ok
// SIG undefined FUN_1454d20e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d20e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 0x638) == 0) {
    return 2;
  }
  iVar3 = FUN_14526ef00(param_2,0,2);
  if ((((iVar3 != 0) && (iVar3 = FUN_14526eb60(param_2,2), iVar3 != 0)) &&
      (iVar3 = FUN_14526eb60(param_2,2), iVar3 != 0)) &&
     (iVar3 = FUN_14526ef00(param_2,0,1), iVar3 != 0)) {
    pcVar2 = *(char **)(param_1 + 0x638);
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    iVar3 = FUN_14526f090(param_2,pcVar2,uVar5 & 0x7fffffff,2);
    if (((iVar3 != 0) && (iVar3 = FUN_14526ea40(param_2), iVar3 != 0)) &&
       (iVar3 = FUN_14526ea40(param_2), iVar3 != 0)) {
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1db,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar6,0x37));
  return 0;
}



// FUNCTION 1454d2200 FUN_1454d2200 body=197 status=ok
// SIG undefined FUN_1454d2200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d2200(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 0x72c) == '\0') {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,1,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,*(undefined1 *)(param_1 + 0x72c),1);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ea40(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x225,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x51));
  return 0;
}



// FUNCTION 1454d22d0 FUN_1454d22d0 body=281 status=ok
// SIG undefined FUN_1454d22d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d22d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 2000) == 0) {
    return 2;
  }
  iVar3 = FUN_14526ef00(param_2,0xc,2);
  if ((((iVar3 != 0) && (iVar3 = FUN_14526eb60(param_2,2), iVar3 != 0)) &&
      (iVar3 = FUN_14526eb60(param_2,1), iVar3 != 0)) &&
     (iVar3 = FUN_14526ea20(param_2,1), iVar3 != 0)) {
    pcVar2 = *(char **)(param_1 + 2000);
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    iVar3 = FUN_14526ef90(param_2,pcVar2,uVar5 & 0x7fffffff);
    if (((iVar3 != 0) && (iVar3 = FUN_14526ea40(param_2), iVar3 != 0)) &&
       (iVar3 = FUN_14526ea40(param_2), iVar3 != 0)) {
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1de,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar6,0x6b));
  return 0;
}



// FUNCTION 1454d23f0 FUN_1454d23f0 body=218 status=ok
// SIG undefined FUN_1454d23f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d23f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x1454d2400;
  iVar1 = FUN_1454d59c0();
  if (iVar1 == 0) {
    return 2;
  }
  FUN_144eba810(param_1,&local_10,&local_18);
  iVar1 = FUN_14526ef00(param_2,0xb,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526f090(param_2,local_10,local_18,1);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ea40(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1d3,0x44,"ssl\\statem\\extensions_clnt.c",0xb2);
  return 0;
}



// FUNCTION 1454d24d0 FUN_1454d24d0 body=405 status=ok
// SIG undefined FUN_1454d24d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d24d0(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong local_18;
  longlong local_10;
  
  uVar4 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar2 = FUN_1454d59c0();
  if (iVar2 == 0) {
    return 2;
  }
  FUN_144eba940(param_1,&local_10,&local_18);
  iVar2 = FUN_14526ef00(param_2,10,2);
  if (((iVar2 == 0) || (iVar2 = FUN_14526eb60(param_2,2), iVar2 == 0)) ||
     (iVar2 = FUN_14526eb60(param_2,2), iVar2 == 0)) {
    FUN_144eafc90(param_1,0x50,0x1e0,0x44,"ssl\\statem\\extensions_clnt.c",0xcf);
    return 0;
  }
  if (local_18 != 0) {
    do {
      uVar1 = *(undefined2 *)(local_10 + uVar4 * 2);
      iVar2 = FUN_144eba8d0(param_1,uVar1,0x20004);
      if ((iVar2 != 0) && (iVar2 = FUN_14526ef00(param_2,uVar1,2), iVar2 == 0)) {
        uVar5 = 0xda;
        goto LAB_1454d2601;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_18);
  }
  iVar2 = FUN_14526ea40(param_2);
  if ((iVar2 == 0) || (iVar2 = FUN_14526ea40(param_2), iVar2 == 0)) {
    uVar5 = 0xe2;
LAB_1454d2601:
    FUN_144eafc90(param_1,0x50,0x1e0,0x44,"ssl\\statem\\extensions_clnt.c",uVar5);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1454d2670 FUN_1454d2670 body=1375 status=ok
// SIG undefined FUN_1454d2670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d2670(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar11;
  char *pcVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int *piVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auStack_248 [32];
  int **local_228;
  undefined4 local_220;
  undefined2 local_218 [4];
  int *local_210;
  ulonglong local_208;
  char *local_200;
  byte *local_1f8;
  ulonglong uStack_1f0;
  byte *local_1e8;
  ulonglong uStack_1e0;
  char local_1d8;
  char local_1d7 [143];
  int *local_148 [32];
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar10 = 0;
  uVar8 = 0;
  local_200 = (char *)0x0;
  local_208 = 0;
  local_210 = (int *)0x0;
  uVar9 = uVar10;
  if (*(int *)(param_1 + 0x4d8) == 1) {
    uVar9 = FUN_144ea4500(param_1);
  }
  if (*(code **)(param_1 + 0x590) != (code *)0x0) {
    local_228 = &local_210;
    iVar6 = (**(code **)(param_1 + 0x590))(param_1,uVar9,&local_200,&local_208);
    if (iVar6 != 0) {
      if (local_210 == (int *)0x0) goto LAB_1454d2762;
      if (*local_210 == 0x304) goto LAB_1454d2759;
    }
    FUN_144eb0d50();
    uVar13 = 0x50;
    local_220 = 0x301;
    uVar17 = 0xdb;
    goto LAB_1454d2742;
  }
LAB_1454d2759:
  if (local_210 == (int *)0x0) {
LAB_1454d2762:
    pcVar4 = *(code **)(param_1 + 0x578);
    if (pcVar4 == (code *)0x0) goto LAB_1454d28c1;
    memset(&local_1d8,0,0x81);
    local_220 = 0x100;
    local_228 = local_148;
    uVar7 = (*pcVar4)(param_1,0,&local_1d8,0x80);
    if (uVar7 < 0x101) {
      if (uVar7 == 0) goto LAB_1454d28c1;
      pcVar12 = &local_1d8;
      local_218[0] = 0x113;
      while ((local_1d8 != '\0' && (uVar8 = (uint)uVar10, uVar8 < 0x80000000))) {
        pcVar12 = pcVar12 + 1;
        uVar8 = uVar8 + 1;
        local_1d8 = *pcVar12;
        uVar10 = (ulonglong)uVar8;
      }
      local_208 = (ulonglong)(uVar8 & 0x7fffffff);
      if (local_208 < 0x81) {
        local_200 = &local_1d8;
        lVar11 = FUN_144ea3230(param_1,local_218);
        if (lVar11 != 0) {
          local_210 = (int *)FUN_144eb0c00();
          if ((((local_210 == (int *)0x0) ||
               (iVar6 = FUN_144b9aa50(local_210,local_148,uVar7), iVar6 == 0)) ||
              (iVar6 = FUN_144eb0bc0(local_210,lVar11), iVar6 == 0)) ||
             (iVar6 = FUN_144eb0ba0(local_210,0x304), iVar6 == 0)) {
            local_220 = 0x332;
            local_228 = (int **)0x149d8bff8;
            FUN_144eafc90(param_1,0x50,0x212,0x44);
            FUN_14259f0c0(local_148,uVar7);
            goto LAB_1454d2b78;
          }
          FUN_14259f0c0(local_148,uVar7);
          goto LAB_1454d28c1;
        }
        local_220 = 0x327;
        uVar13 = 0x50;
        uVar17 = 0x44;
      }
      else {
        uVar13 = 0x50;
        local_220 = 0x31a;
        uVar17 = 0x44;
      }
    }
    else {
      uVar13 = 0x28;
      local_220 = 0x310;
      uVar17 = 0x44;
    }
    goto LAB_1454d2742;
  }
LAB_1454d28c1:
  FUN_144eb0d50(*(undefined8 *)(param_1 + 0x510));
  *(int **)(param_1 + 0x510) = local_210;
  if (local_210 != (int *)0x0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x518),"ssl\\statem\\extensions_clnt.c",0x33e);
    lVar11 = FUN_144ea6d10(local_200,local_208,"ssl\\statem\\extensions_clnt.c",0x33f);
    *(longlong *)(param_1 + 0x518) = lVar11;
    if (lVar11 == 0) {
      *(undefined8 *)(param_1 + 0x520) = 0;
      uVar13 = 0x50;
      local_220 = 0x343;
      uVar17 = 0x44;
      goto LAB_1454d2742;
    }
    *(ulonglong *)(param_1 + 0x520) = local_208;
  }
  if (*(int *)(param_1 + 0x84) == 2) {
    iVar6 = (*(int **)(param_1 + 0x508))[0x8a];
    if ((iVar6 != 0) || ((local_210 != (int *)0x0 && (local_210[0x8a] != 0)))) {
      piVar15 = local_210;
      if (iVar6 != 0) {
        piVar15 = *(int **)(param_1 + 0x508);
      }
      *(int *)(param_1 + 0x1710) = piVar15[0x8a];
      if (*(longlong *)(piVar15 + 0x82) == 0) {
LAB_1454d2a1f:
        pbVar5 = *(byte **)(param_1 + 0x6e8);
        if ((pbVar5 != (byte *)0x0) || (*(longlong *)(piVar15 + 0x8c) == 0)) {
          if (*(longlong *)(piVar15 + 0x8c) == 0) {
LAB_1454d2b25:
            iVar6 = FUN_14526ef00(param_2,0x2a,2);
            if ((iVar6 != 0) &&
               ((iVar6 = FUN_14526eb60(param_2,2), iVar6 != 0 &&
                (iVar6 = FUN_14526ea40(param_2), iVar6 != 0)))) {
              *(undefined4 *)(param_1 + 0x710) = 1;
              *(undefined4 *)(param_1 + 0x714) = 1;
              goto LAB_1454d2b78;
            }
            local_220 = 899;
          }
          else {
            uVar10 = *(ulonglong *)(param_1 + 0x6f0);
            pbVar16 = pbVar5;
            uVar9 = uVar10;
            if (uVar10 < 0x8000000000000000) {
              do {
                uStack_1e0 = uVar9;
                local_1e8 = pbVar16;
                uStack_1f0 = uVar10;
                local_1f8 = pbVar5;
                if (uStack_1f0 == 0) {
LAB_1454d2b05:
                  local_220 = 0x37a;
                  uVar18 = 0xde;
                  goto LAB_1454d2bb3;
                }
                pbVar1 = local_1f8 + 1;
                uVar14 = (ulonglong)*local_1f8;
                if (uStack_1e0 - 1 < (ulonglong)*local_1f8) goto LAB_1454d2b05;
                uVar9 = (uStack_1e0 - 1) - uVar14;
                pbVar16 = pbVar1 + uVar14;
                pbVar5 = pbVar16;
                uVar10 = uVar9;
              } while ((uVar14 != *(ulonglong *)(piVar15 + 0x8e)) ||
                      (local_1f8 = pbVar16, uStack_1f0 = uVar9, local_1e8 = pbVar16,
                      uStack_1e0 = uVar9,
                      iVar6 = FUN_14259f120(pbVar1,*(undefined8 *)(piVar15 + 0x8c)),
                      pbVar5 = local_1f8, uVar10 = uStack_1f0, iVar6 != 0));
              goto LAB_1454d2b25;
            }
            local_220 = 0x36d;
          }
          uVar18 = 0x44;
LAB_1454d2bb3:
          local_228 = (int **)0x149d8bff8;
          FUN_144eafc90(param_1,0x50,0x212,uVar18);
          goto LAB_1454d2b78;
        }
        local_220 = 0x35f;
        uVar13 = 0x50;
        uVar17 = 0xde;
      }
      else {
        pcVar12 = *(char **)(param_1 + 0x638);
        if (pcVar12 != (char *)0x0) {
          lVar11 = *(longlong *)(piVar15 + 0x82) - (longlong)pcVar12;
          do {
            cVar2 = *pcVar12;
            cVar3 = pcVar12[lVar11];
            if (cVar2 != cVar3) break;
            pcVar12 = pcVar12 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) goto LAB_1454d2a1f;
        }
        local_220 = 0x358;
        uVar13 = 0x50;
        uVar17 = 0xe7;
      }
LAB_1454d2742:
      local_228 = (int **)0x149d8bff8;
      FUN_144eafc90(param_1,uVar13,0x212,uVar17);
      goto LAB_1454d2b78;
    }
  }
  *(undefined4 *)(param_1 + 0x1710) = 0;
LAB_1454d2b78:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_248);
}



// FUNCTION 1454d2be0 FUN_1454d2be0 body=410 status=ok
// SIG undefined FUN_1454d2be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d2be0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ushort *puVar2;
  void *_Dst;
  int iVar3;
  undefined8 uVar4;
  ulonglong _Size;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar3 = FUN_144ebb190();
  if (iVar3 == 0) {
    return 2;
  }
  if ((((*(int *)(param_1 + 0x3c) == 0) &&
       (piVar1 = *(int **)(param_1 + 0x508), piVar1 != (int *)0x0)) &&
      (*(longlong *)(piVar1 + 0x84) != 0)) && (*piVar1 != 0x304)) {
    _Size = *(ulonglong *)(piVar1 + 0x86);
LAB_1454d2cde:
    if (_Size == 0) goto LAB_1454d2d24;
  }
  else {
    if (((*(longlong *)(param_1 + 0x508) != 0) &&
        (puVar2 = *(ushort **)(param_1 + 0x6c0), puVar2 != (ushort *)0x0)) &&
       (*(longlong *)(puVar2 + 4) != 0)) {
      _Size = (ulonglong)*puVar2;
      uVar4 = FUN_144ea64e0(_Size,"ssl\\statem\\extensions_clnt.c",0xfa);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210) = uVar4;
      _Dst = *(void **)(*(longlong *)(param_1 + 0x508) + 0x210);
      if (_Dst == (void *)0x0) {
        uVar4 = CONCAT44(uVar5,0xfe);
        goto LAB_1454d2d46;
      }
      memcpy(_Dst,*(void **)(*(longlong *)(param_1 + 0x6c0) + 8),_Size);
      *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x218) = _Size;
      goto LAB_1454d2cde;
    }
    _Size = 0;
LAB_1454d2d24:
    if ((*(longlong *)(param_1 + 0x6c0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x6c0) + 8) == 0)) {
      return 2;
    }
  }
  iVar3 = FUN_14526ef00(param_2,0x23,2);
  if ((iVar3 != 0) &&
     (iVar3 = FUN_14526f090(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210),_Size,2)
     , iVar3 != 0)) {
    return 1;
  }
  uVar4 = CONCAT44(uVar5,0x10f);
LAB_1454d2d46:
  FUN_144eafc90(param_1,0x50,0x1dc,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}



// FUNCTION 1454d2d80 FUN_1454d2d80 body=316 status=ok
// SIG undefined FUN_1454d2d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d2d80(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
  if (((uVar1 != 0) || (*(int *)(param_1 + 0x5ec) < 0x303)) &&
     ((uVar1 == 0 || ((*(int *)(param_1 + 0x5ec) == 0x100 || (0xfefd < *(int *)(param_1 + 0x5ec)))))
     )) {
    return 2;
  }
  uVar3 = FUN_144ebc9e0(param_1,1,&local_res8);
  iVar2 = FUN_14526ef00(param_2,0xd,2);
  if (iVar2 != 0) {
    iVar2 = FUN_14526eb60(param_2,2);
    if (iVar2 != 0) {
      iVar2 = FUN_14526eb60(param_2,2);
      if (iVar2 != 0) {
        iVar2 = FUN_144ebc550(param_1,param_2,local_res8,uVar3);
        if (iVar2 != 0) {
          iVar2 = FUN_14526ea40(param_2);
          if (iVar2 != 0) {
            iVar2 = FUN_14526ea40(param_2);
            if (iVar2 != 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1dd,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar4,0x12a));
  return 0;
}



// FUNCTION 1454d2ec0 FUN_1454d2ec0 body=572 status=ok
// SIG undefined FUN_1454d2ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d2ec0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1454d2ecd;
  if ((param_4 != 0) || (*(int *)(param_1 + 0x640) != 1)) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,5,2);
  if ((((iVar1 == 0) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) ||
      (iVar1 = FUN_14526ef00(param_2,1,1), iVar1 == 0)) ||
     (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) {
    FUN_144eafc90(param_1,0x50,0x1df,0x44,"ssl\\statem\\extensions_clnt.c",0x146,uVar5);
    return 0;
  }
  iVar3 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x658));
  if (0 < iVar1) {
    do {
      uVar5 = FUN_144babc00(*(undefined8 *)(param_1 + 0x658),iVar3);
      iVar1 = FUN_144ec6790(uVar5,0);
      if (((iVar1 < 1) || (iVar2 = FUN_14526ed50(param_2,(longlong)iVar1,local_res20,2), iVar2 == 0)
          ) || (iVar2 = FUN_144ec6790(uVar5,local_res20), iVar2 != iVar1)) {
        uVar4 = 0x154;
        goto LAB_1454d30a1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x658));
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_14526ea40(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) {
    uVar4 = 0x15b;
    goto LAB_1454d30a1;
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    iVar1 = FUN_144eac530(*(longlong *)(param_1 + 0x660),0);
    if (iVar1 < 0) {
      uVar4 = 0x165;
      goto LAB_1454d30a1;
    }
    iVar3 = FUN_14526ed00(param_2,(longlong)iVar1,local_res20);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_144eac530(*(undefined8 *)(param_1 + 0x660),local_res20), iVar3 != iVar1)) {
      uVar4 = 0x16d;
      goto LAB_1454d30a1;
    }
  }
  iVar1 = FUN_14526ea40(param_2);
  if ((iVar1 != 0) && (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)) {
    return 1;
  }
  uVar4 = 0x173;
LAB_1454d30a1:
  FUN_144eafc90(param_1,0x50,0x1df,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}



// FUNCTION 1454d3100 FUN_1454d3100 body=202 status=ok
// SIG undefined FUN_1454d3100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3100(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x290) != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))) {
    iVar1 = FUN_14526ef00(param_2,0x3374,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_144eafc90(param_1,0x50,0x1d7,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x189));
    return 0;
  }
  return 2;
}



// FUNCTION 1454d31d0 FUN_1454d31d0 body=274 status=ok
// SIG undefined FUN_1454d31d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d31d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x400) = 0;
  if ((*(longlong *)(param_1 + 0x6e8) != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))) {
    iVar1 = FUN_14526ef00(param_2,0x10,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526f090(param_2,*(undefined8 *)(param_1 + 0x6e8),
                              *(undefined8 *)(param_1 + 0x6f0),2);
        if (iVar1 != 0) {
          iVar1 = FUN_14526ea40(param_2);
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x400) = 1;
            return 1;
          }
        }
      }
    }
    FUN_144eafc90(param_1,0x50,0x1d2,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1a0));
    return 0;
  }
  return 2;
}



// FUNCTION 1454d32f0 FUN_1454d32f0 body=395 status=ok
// SIG undefined FUN_1454d32f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d32f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0x1454d3306;
  lVar3 = FUN_1455d7240();
  if (lVar3 == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0xe,2);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,2);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = FUN_144babbf0(lVar3);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            lVar4 = FUN_144babc00(lVar3,iVar5);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (lVar4 == 0) {
LAB_1454d3404:
              uVar6 = CONCAT44(uVar7,0x1c5);
              goto LAB_1454d3416;
            }
            iVar2 = FUN_14526ef00(param_2,*(undefined4 *)(lVar4 + 8),2);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (iVar2 == 0) goto LAB_1454d3404;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
        iVar1 = FUN_14526ea40(param_2);
        if (((iVar1 != 0) && (iVar1 = FUN_14526ef00(param_2,0,1), iVar1 != 0)) &&
           (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)) {
          return 1;
        }
        uVar6 = CONCAT44(uVar7,0x1ce);
LAB_1454d3416:
        FUN_144eafc90(param_1,0x50,0x1e2,0x44,"ssl\\statem\\extensions_clnt.c",uVar6);
        return 0;
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x1e2,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar7,0x1ba));
  return 0;
}



// FUNCTION 1454d3480 FUN_1454d3480 body=164 status=ok
// SIG undefined FUN_1454d3480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3480(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(uint *)(param_1 + 0x5cc) & 0x80000) != 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0x16,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526ef00(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1d5,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1df));
  return 0;
}



// FUNCTION 1454d3530 FUN_1454d3530 body=166 status=ok
// SIG undefined FUN_1454d3530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3530(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(param_1 + 0x748) != 0) && (param_4 == 0)) {
    iVar1 = FUN_14526ef00(param_2,0x12,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ef00(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    FUN_144eafc90(param_1,0x50,0x1da,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,500));
    return 0;
  }
  return 2;
}



// FUNCTION 1454d35e0 FUN_1454d35e0 body=134 status=ok
// SIG undefined FUN_1454d35e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d35e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = FUN_14526ef00(param_2,0x17,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526ef00(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1d4,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x202));
  return 0;
}



// FUNCTION 1454d3670 FUN_1454d3670 body=374 status=ok
// SIG undefined FUN_1454d3670(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3670(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14 [3];
  
  local_14[1] = 0x454d3680;
  local_14[2] = 1;
  iVar1 = FUN_144eb5b60(param_1,local_14,&local_18,0);
  if (iVar1 == 0) {
    if (local_18 < 0x304) {
      return 2;
    }
    iVar1 = FUN_14526ef00(param_2,0x2b,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526eb60(param_2,1);
        if (iVar1 != 0) {
          iVar1 = local_18;
          if (local_14[0] <= local_18) {
            do {
              iVar2 = FUN_14526ef00(param_2,(longlong)iVar1,2);
              if (iVar2 == 0) {
                uVar3 = 0x22a;
                goto LAB_1454d379e;
              }
              iVar1 = iVar1 + -1;
            } while (local_14[0] <= iVar1);
          }
          iVar1 = FUN_14526ea40(param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_14526ea40(param_2);
            if (iVar1 != 0) {
              return 1;
            }
          }
          uVar3 = 0x231;
LAB_1454d379e:
          FUN_144eafc90(param_1,0x50,0x1e1,0x44,"ssl\\statem\\extensions_clnt.c",uVar3);
          return 0;
        }
      }
    }
    uVar3 = 0x222;
    iVar1 = 0x44;
  }
  else {
    uVar3 = 0x212;
  }
  FUN_144eafc90(param_1,0x50,0x1e1,iVar1,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}



// FUNCTION 1454d37f0 FUN_1454d37f0 body=364 status=ok
// SIG undefined FUN_1454d37f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d37f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong local_18;
  longlong local_10;
  
  uVar3 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar1 = FUN_14526ef00(param_2,0x33,2);
  if (((iVar1 == 0) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) ||
     (iVar1 = FUN_14526eb60(param_2,2), iVar1 == 0)) {
    uVar5 = 0x2a1;
  }
  else {
    FUN_144eba940(param_1,&local_10,&local_18);
    sVar2 = *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406);
    if (sVar2 == 0) {
      if (local_18 != 0) {
        do {
          iVar1 = FUN_144eba8d0(param_1,*(undefined2 *)(local_10 + uVar3 * 2),0x20004);
          if (iVar1 != 0) {
            sVar2 = *(short *)(local_10 + uVar3 * 2);
            if (sVar2 != 0) goto LAB_1454d38d3;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_18);
      }
      uVar5 = 0x2ba;
      uVar4 = 0x65;
      goto LAB_1454d392b;
    }
LAB_1454d38d3:
    iVar1 = FUN_1454d5ac0(param_1,param_2,sVar2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_14526ea40(param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)) {
      return 1;
    }
    uVar5 = 0x2c5;
  }
  uVar4 = 0x44;
LAB_1454d392b:
  FUN_144eafc90(param_1,0x50,0x1d6,uVar4,"ssl\\statem\\extensions_clnt.c",uVar5);
  return 0;
}



// FUNCTION 1454d3960 FUN_1454d3960 body=281 status=ok
// SIG undefined FUN_1454d3960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3960(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 1;
  uVar3 = *(uint *)(param_1 + 0x5cc) & 0x400;
  iVar1 = FUN_14526ef00(param_2,0x2d,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526eb60(param_2,1);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ef00(param_2,1,1);
        if (iVar1 != 0) {
          if (uVar3 != 0) {
            iVar1 = FUN_14526ef00(param_2,0,1);
            if (iVar1 == 0) goto LAB_1454d3a3c;
          }
          iVar1 = FUN_14526ea40(param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_14526ea40(param_2);
            if (iVar1 != 0) {
              *(undefined4 *)(param_1 + 0x708) = 2;
              uVar2 = *(undefined4 *)(param_1 + 0x708);
              if (uVar3 != 0) {
                uVar2 = 3;
              }
              *(undefined4 *)(param_1 + 0x708) = uVar2;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_1454d3a3c:
  FUN_144eafc90(param_1,0x50,0x1fd,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x24a));
  return 0;
}



// FUNCTION 1454d3a80 FUN_1454d3a80 body=263 status=ok
// SIG undefined FUN_1454d3a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3a80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x720) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0x2c,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526f090(param_2,*(undefined8 *)(param_1 + 0x718),
                            *(undefined8 *)(param_1 + 0x720),2);
      if (iVar1 != 0) {
        iVar1 = FUN_14526ea40(param_2);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto LAB_1454d3b45;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x217,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar3,0x2de));
LAB_1454d3b45:
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x718),"ssl\\statem\\extensions_clnt.c",0x2e4);
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  return uVar2;
}



// FUNCTION 1454d3b90 FUN_1454d3b90 body=357 status=ok
// SIG undefined FUN_1454d3b90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3b90(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  size_t local_res8;
  undefined4 uVar4;
  void *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454d3ba0;
  if ((*(byte *)(param_1 + 0x5cc) & 0x10) == 0) {
    return 2;
  }
  iVar2 = FUN_14526f120(param_2,&local_res8);
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x508);
    if ((((*piVar1 == 0x304) && (*(longlong *)(piVar1 + 0x86) != 0)) &&
        (*(longlong *)(piVar1 + 0x78) != 0)) &&
       (lVar3 = FUN_144ea44e0(*(undefined4 *)(*(longlong *)(piVar1 + 0x78) + 0x40)), lVar3 != 0)) {
      iVar2 = FUN_144ba3cd0(lVar3);
      local_res8 = (longlong)iVar2 + *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x218) +
                   local_res8 + 0xf;
    }
    if (local_res8 - 0x100 < 0x100) {
      lVar3 = -local_res8;
      local_res8 = 1;
      if (4 < lVar3 + 0x200U) {
        local_res8 = lVar3 + 0x1fc;
      }
      iVar2 = FUN_14526ef00(param_2,0x15,2);
      if ((iVar2 == 0) || (iVar2 = FUN_14526ed50(param_2,local_res8,&local_18,2), iVar2 == 0)) {
        uVar4 = 0x3dd;
        goto LAB_1454d3bdb;
      }
      memset(local_18,0,local_res8);
    }
    return 1;
  }
  uVar4 = 0x3b4;
LAB_1454d3bdb:
  FUN_144eafc90(param_1,0x50,0x1d8,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}



// FUNCTION 1454d3d00 FUN_1454d3d00 body=1141 status=ok
// SIG undefined FUN_1454d3d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d3d00(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  __time64_t _Var5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong local_res8;
  undefined8 uVar13;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong uVar10;
  
  local_30 = 0x1454d3d22;
  uVar12 = 0;
  local_48 = 0;
  bVar1 = false;
  uVar9 = 0;
  local_40 = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  local_res8 = 0;
  if (**(int **)(param_1 + 0x508) != 0x304) {
    return 2;
  }
  if ((*(longlong *)(*(int **)(param_1 + 0x508) + 0x86) == 0) &&
     (*(longlong *)(param_1 + 0x510) == 0)) {
    return 2;
  }
  uVar3 = uVar12;
  if (*(int *)(param_1 + 0x4d8) == 1) {
    uVar3 = FUN_144ea4500();
  }
  uVar10 = uVar12;
  uVar4 = uVar12;
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x218) == 0) goto LAB_1454d3e66;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
  if (lVar6 == 0) {
    uVar13 = 0x40a;
  }
  else {
    uVar4 = FUN_144ea44e0(*(undefined4 *)(lVar6 + 0x40));
    uVar10 = uVar9;
    if ((uVar4 == 0) || ((*(int *)(param_1 + 0x4d8) == 1 && (uVar4 != uVar3)))) {
LAB_1454d3e66:
      if (*(longlong *)(param_1 + 0x510) == 0) {
        return 2;
      }
    }
    else {
      _Var5 = _time64((__time64_t *)0x0);
      lVar6 = *(longlong *)(param_1 + 0x508);
      uVar7 = (int)_Var5 - *(int *)(lVar6 + 0x1d4);
      if (uVar7 != 0) {
        uVar7 = uVar7 - 1;
      }
      if (*(uint *)(lVar6 + 0x220) < uVar7) goto LAB_1454d3e66;
      uVar8 = uVar7 * 1000;
      uVar10 = (ulonglong)uVar8;
      if ((uVar7 != 0) && (uVar8 / 1000 != uVar7)) goto LAB_1454d3e66;
      uVar10 = (ulonglong)(uVar8 + *(int *)(lVar6 + 0x224));
      iVar2 = FUN_144ba3cd0(uVar4);
      *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 1;
      bVar1 = true;
      local_res8 = (longlong)iVar2;
    }
    uVar9 = uVar12;
    if (*(longlong *)(param_1 + 0x510) != 0) {
      uVar9 = FUN_144ea44e0(*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x510) + 0x1e0) + 0x40));
      if (uVar9 == 0) {
        uVar13 = 0x45c;
        uVar11 = 0xdb;
        goto LAB_1454d3dbd;
      }
      if ((*(int *)(param_1 + 0x4d8) == 1) && (uVar9 != uVar3)) {
        uVar13 = 0x466;
        uVar11 = 0xdb;
        goto LAB_1454d3dbd;
      }
      iVar2 = FUN_144ba3cd0(uVar9);
      uVar12 = (ulonglong)iVar2;
    }
    iVar2 = FUN_14526ef00(param_2,0x29,2);
    if (((iVar2 == 0) || (iVar2 = FUN_14526eb60(param_2,2), iVar2 == 0)) ||
       (iVar2 = FUN_14526eb60(param_2,2), iVar2 == 0)) {
      uVar13 = 0x472;
    }
    else if ((bVar1) &&
            ((iVar2 = FUN_14526f090(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x210),
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x218),2),
             iVar2 == 0 || (iVar2 = FUN_14526ef00(param_2,uVar10,4), iVar2 == 0)))) {
      uVar13 = 0x47b;
    }
    else {
      if (*(longlong *)(param_1 + 0x510) != 0) {
        iVar2 = FUN_14526f090(param_2,*(undefined8 *)(param_1 + 0x518),
                              *(undefined8 *)(param_1 + 0x520),2);
        if ((iVar2 == 0) || (iVar2 = FUN_14526ef00(param_2,0,4), iVar2 == 0)) {
          uVar13 = 0x485;
          goto LAB_1454d3db7;
        }
        *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 1;
      }
      iVar2 = FUN_14526ea40(param_2);
      if ((((((iVar2 != 0) && (iVar2 = FUN_14526f120(param_2,&local_38), iVar2 != 0)) &&
            (iVar2 = FUN_14526eb60(param_2,2), iVar2 != 0)) &&
           ((!bVar1 || (iVar2 = FUN_14526ed50(param_2,local_res8,&local_48,1), iVar2 != 0)))) &&
          ((*(longlong *)(param_1 + 0x510) == 0 ||
           (iVar2 = FUN_14526ed50(param_2,uVar12,&local_40,1), iVar2 != 0)))) &&
         ((((iVar2 = FUN_14526ea40(param_2), iVar2 != 0 &&
            (iVar2 = FUN_14526ea40(param_2), iVar2 != 0)) &&
           (iVar2 = FUN_14526f120(param_2,&local_30), iVar2 != 0)) &&
          (iVar2 = FUN_14526eae0(param_2), iVar2 != 0)))) {
        lVar6 = FUN_14526f170(param_2);
        lVar6 = lVar6 - local_30;
        if ((bVar1) &&
           (iVar2 = FUN_145270e20(param_1,uVar4,lVar6,local_38,0,local_48,
                                  *(undefined8 *)(param_1 + 0x508),1,0), iVar2 != 1)) {
          return 0;
        }
        if ((*(longlong *)(param_1 + 0x510) != 0) &&
           (iVar2 = FUN_145270e20(param_1,uVar9,lVar6,local_38,0,local_40,
                                  *(longlong *)(param_1 + 0x510),1,1), iVar2 != 1)) {
          return 0;
        }
        return 1;
      }
      uVar13 = 0x49b;
    }
  }
LAB_1454d3db7:
  uVar11 = 0x44;
LAB_1454d3dbd:
  FUN_144eafc90(param_1,0x50,0x1f5,uVar11,"ssl\\statem\\extensions_clnt.c",uVar13);
  return 0;
}



// FUNCTION 1454d4180 FUN_1454d4180 body=182 status=ok
// SIG undefined FUN_1454d4180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x78c) == 0) {
    return 2;
  }
  iVar1 = FUN_14526ef00(param_2,0x31,2);
  if (iVar1 != 0) {
    iVar1 = FUN_14526eb60(param_2,2);
    if (iVar1 != 0) {
      iVar1 = FUN_14526ea40(param_2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x788) = 1;
        return 1;
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x26b,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x4c3));
  return 0;
}



// FUNCTION 1454d4240 FUN_1454d4240 body=511 status=ok
// SIG undefined FUN_1454d4240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4240(longlong param_1,undefined8 *param_2)

{
  byte *_Buf1;
  ulonglong uVar1;
  byte *_Buf1_00;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x388);
  uVar1 = lVar3 + lVar2;
  if ((uVar1 != 0) && ((lVar3 == 0 || ((uVar1 != 0 && (lVar2 == 0)))))) {
    FUN_144eafc90(param_1,0x50,0x1c0,0x44,"ssl\\statem\\extensions_clnt.c",0x1000004e1);
    return 0;
  }
  if (param_2[1] == 0) {
    uVar9 = 0x1000004e8;
  }
  else {
    uVar7 = param_2[1] - 1;
    uVar5 = (ulonglong)*(byte *)*param_2;
    _Buf1 = (byte *)*param_2 + 1;
    *param_2 = _Buf1;
    param_2[1] = uVar7;
    if (uVar7 == uVar5) {
      if (uVar5 == uVar1) {
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388);
        if (uVar1 <= uVar7) {
          _Buf1_00 = _Buf1 + uVar1;
          uVar7 = uVar7 - uVar1;
          *param_2 = _Buf1_00;
          param_2[1] = uVar7;
          lVar2 = *(longlong *)(param_1 + 0xa8);
          iVar4 = memcmp(_Buf1,(void *)(lVar2 + 0x348),*(size_t *)(lVar2 + 0x388));
          if (iVar4 == 0) {
            uVar1 = *(ulonglong *)(lVar2 + 0x3d0);
            if (uVar1 <= uVar7) {
              *param_2 = _Buf1_00 + uVar1;
              param_2[1] = uVar7 - uVar1;
              lVar2 = *(longlong *)(param_1 + 0xa8);
              iVar4 = memcmp(_Buf1_00,(void *)(lVar2 + 0x390),*(size_t *)(lVar2 + 0x3d0));
              if (iVar4 == 0) {
                *(undefined4 *)(lVar2 + 0x3d8) = 1;
                return 1;
              }
            }
            uVar9 = 0x506;
            goto LAB_1454d43d9;
          }
        }
        uVar9 = 0x4fe;
LAB_1454d43d9:
        FUN_144eafc90(param_1,0x2f,0x1c0,0x151,"ssl\\statem\\extensions_clnt.c",uVar9);
        return 0;
      }
      uVar9 = 0x1000004f6;
      uVar6 = 0x2f;
      uVar8 = 0x151;
      goto LAB_1454d4413;
    }
    uVar9 = 0x1000004ef;
  }
  uVar6 = 0x32;
  uVar8 = 0x150;
LAB_1454d4413:
  FUN_144eafc90(param_1,uVar6,0x1c0,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9);
  return 0;
}



// FUNCTION 1454d4440 FUN_1454d4440 body=240 status=ok
// SIG undefined FUN_1454d4440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4440(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x638) == 0) {
    uVar3 = 0x10000053d;
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar1 = 0x32;
      uVar3 = 0x100000543;
      uVar2 = 0x6e;
      goto LAB_1454d447a;
    }
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208) == 0) {
      uVar1 = FUN_144ea6dc0(*(longlong *)(param_1 + 0x638),"ssl\\statem\\extensions_clnt.c",0x54d);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x208) = uVar1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x208) != 0) {
        return 1;
      }
      uVar3 = CONCAT44(uVar2,0x550);
    }
    else {
      uVar3 = 0x10000054a;
    }
  }
  uVar1 = 0x50;
  uVar2 = 0x44;
LAB_1454d447a:
  FUN_144eafc90(param_1,uVar1,0x247,uVar2,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}



// FUNCTION 1454d4530 FUN_1454d4530 body=247 status=ok
// SIG undefined FUN_1454d4530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4530(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if (param_3 == 0x2000) {
    if (3 < (ulonglong)param_2[1]) {
      puVar6 = (undefined1 *)*param_2;
      uVar2 = puVar6[1];
      uVar3 = *puVar6;
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      *param_2 = (longlong)(puVar6 + 4);
      lVar1 = param_2[1] - 4;
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        *(uint *)(*(longlong *)(param_1 + 0x508) + 0x228) =
             CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5);
        return 1;
      }
    }
    uVar7 = 0x32;
    uVar9 = 0x791;
    uVar8 = 0xae;
  }
  else {
    if (param_2[1] == 0) {
      if ((*(int *)(param_1 + 0x714) != 0) && (*(int *)(param_1 + 200) != 0)) {
        *(undefined4 *)(param_1 + 0x710) = 2;
        return 1;
      }
      uVar9 = 0x7a8;
      uVar7 = 0x2f;
    }
    else {
      uVar9 = 0x79c;
      uVar7 = 0x32;
    }
    uVar8 = 0x6e;
  }
  FUN_144eafc90(param_1,uVar7,0x21a,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9,0x1454d453a);
  return 0;
}



// FUNCTION 1454d4630 FUN_1454d4630 body=175 status=ok
// SIG undefined FUN_1454d4630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4630(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_2[1] == 1) {
    bVar1 = *(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = 0;
    if (bVar1 - 1 < 4) {
      if (bVar1 == *(byte *)(param_1 + 0x72c)) {
        *(byte *)(*(longlong *)(param_1 + 0x508) + 0x240) = bVar1;
        return 1;
      }
      uVar4 = 0x52b;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
    else {
      uVar4 = 0x51e;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
  }
  else {
    uVar2 = 0x32;
    uVar4 = 0x516;
    uVar3 = 0x6e;
  }
  FUN_144eafc90(param_1,uVar2,0x245,uVar3,"ssl\\statem\\extensions_clnt.c",uVar4,0x1454d463a);
  return 0;
}



// FUNCTION 1454d46e0 FUN_1454d46e0 body=342 status=ok
// SIG undefined FUN_1454d46e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d46e0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined4 uVar3;
  ulonglong _Size;
  byte *_Src;
  byte *pbVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  pbVar4 = (byte *)*param_2;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
LAB_1454d47f5:
    uVar7 = 0x561;
    uVar5 = 0x6e;
  }
  else {
    bVar1 = *pbVar4;
    uVar2 = (ulonglong)bVar1;
    _Src = pbVar4 + 1;
    _Size = (ulonglong)(uint)bVar1;
    if (lVar6 - 1U < uVar2) goto LAB_1454d47f5;
    pbVar4 = _Src + uVar2;
    lVar6 = (lVar6 - 1U) - uVar2;
    if (lVar6 != 0) goto LAB_1454d47f5;
    *param_2 = pbVar4;
    param_2[1] = 0;
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    if (bVar1 != 0) {
      *(undefined8 *)(param_1 + 0x690) = 0;
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x698),"ssl\\statem\\extensions_clnt.c",0x56d);
      _Dst = (void *)FUN_144ea64e0(_Size,"ssl\\statem\\extensions_clnt.c",0x56e);
      *(void **)(param_1 + 0x698) = _Dst;
      if (_Dst != (void *)0x0) {
        *(ulonglong *)(param_1 + 0x690) = _Size;
        memcpy(_Dst,_Src,_Size);
        return 1;
      }
      *(undefined8 *)(param_1 + 0x690) = 0;
      uVar3 = 0x50;
      uVar7 = 0x572;
      uVar5 = 0x44;
      goto LAB_1454d480f;
    }
    uVar7 = 0x568;
    uVar5 = 0x10f;
  }
  uVar3 = 0x32;
LAB_1454d480f:
  FUN_144eafc90(param_1,uVar3,0x244,uVar5,"ssl\\statem\\extensions_clnt.c",uVar7,pbVar4,lVar6);
  return 0;
}



// FUNCTION 1454d4840 FUN_1454d4840 body=191 status=ok
// SIG undefined FUN_1454d4840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4840(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((*(code **)(param_1 + 0x6c8) == (code *)0x0) ||
     (uVar4 = 1,
     iVar1 = (**(code **)(param_1 + 0x6c8))
                       (param_1,*param_2,*(undefined4 *)(param_2 + 1),
                        *(undefined8 *)(param_1 + 0x6d0)), iVar1 != 0)) {
    iVar1 = FUN_144ebb190(param_1);
    if (iVar1 == 0) {
      uVar2 = 0x6e;
      uVar3 = CONCAT44(uVar4,0x593);
    }
    else {
      if (param_2[1] == 0) {
        *(undefined4 *)(param_1 + 0x678) = 1;
        return 1;
      }
      uVar3 = CONCAT44(uVar4,0x598);
      uVar2 = 0x32;
    }
  }
  else {
    uVar3 = CONCAT44(uVar4,0x58d);
    uVar2 = 0x28;
  }
  FUN_144eafc90(param_1,uVar2,0x248,0x6e,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}



// FUNCTION 1454d4900 FUN_1454d4900 body=236 status=ok
// SIG undefined FUN_1454d4900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454d4900(longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 != 0x4000) {
    if (*(int *)(param_1 + 0x640) != 1) {
      FUN_144eafc90(param_1,0x6e,0x249,0x6e,"ssl\\statem\\extensions_clnt.c",0x5b1,0x1454d490a);
      return 0;
    }
    piVar1 = *(int **)(param_1 + 8);
    uVar3 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
    if ((((uVar3 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) &&
       (*(longlong *)(param_2 + 8) != 0)) {
      FUN_144eafc90(param_1,0x32,0x249,0x6e,"ssl\\statem\\extensions_clnt.c",0x5b6,0x1454d490a);
      return 0;
    }
    if (((uVar3 == 0) && (0x303 < *piVar1)) && (*piVar1 != 0x10000)) {
      if (param_5 == 0) {
        uVar2 = FUN_145275b00(param_1,param_2);
        return uVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x654) = 1;
    }
  }
  return 1;
}



// FUNCTION 1454d49f0 FUN_1454d49f0 body=395 status=ok
// SIG undefined FUN_1454d49f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454d49f0(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x748) == 0) {
    lVar3 = FUN_144eaf130(*(longlong *)(param_1 + 0x488) + 0x1d8,~(param_3 >> 7) & 2,0x12);
    if (lVar3 != 0) {
      iVar1 = FUN_144eaf1c0(param_1,param_3,0x12,*param_2,param_2[1],param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x6e;
    uVar5 = CONCAT44(uVar6,0x5fe);
    uVar6 = 0x6e;
  }
  else {
    lVar3 = param_2[1];
    FUN_144ea6530(*(undefined8 *)(param_1 + 0x648),"ssl\\statem\\extensions_clnt.c",0x5e0);
    *(short *)(param_1 + 0x650) = (short)lVar3;
    *(undefined8 *)(param_1 + 0x648) = 0;
    if (lVar3 == 0) {
      return 1;
    }
    lVar2 = FUN_144ea64e0(lVar3,"ssl\\statem\\extensions_clnt.c",0x5e5);
    *(longlong *)(param_1 + 0x648) = lVar2;
    if (lVar2 == 0) {
      *(undefined2 *)(param_1 + 0x650) = 0;
      uVar4 = 0x50;
      uVar5 = CONCAT44(uVar6,0x5e9);
      uVar6 = 0x41;
    }
    else {
      iVar1 = FUN_1454d1fa0(param_2,lVar2,lVar3);
      if (iVar1 != 0) {
        return 1;
      }
      uVar5 = CONCAT44(uVar6,0x5ee);
      uVar4 = 0x50;
      uVar6 = 0x44;
    }
  }
  FUN_144eafc90(param_1,uVar4,0x234,uVar6,"ssl\\statem\\extensions_clnt.c",uVar5);
  return 0;
}



// FUNCTION 1454d4b80 FUN_1454d4b80 body=541 status=ok
// SIG undefined FUN_1454d4b80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4b80(longlong param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte local_res8 [8];
  undefined8 uVar9;
  byte *local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  local_18._8_8_ = 0x1454d4b8c;
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)) {
    return 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x598);
  if (*(longlong *)(lVar2 + 0x290) == 0) {
    FUN_144eafc90(param_1,0x6e,0x246,0x6e,"ssl\\statem\\extensions_clnt.c",0x634);
    return 0;
  }
  local_18 = *param_2;
  pbVar3 = local_18._0_8_;
  lVar5 = local_18._8_8_;
  if (local_18._8_8_ == 0) {
LAB_1454d4caa:
    iVar4 = (**(code **)(lVar2 + 0x290))
                      (param_1,&local_28,local_res8,*(undefined8 *)*param_2,
                       *(ulonglong *)(*param_2 + 8) & 0xffffffff,*(undefined8 *)(lVar2 + 0x298));
    if (iVar4 == 0) {
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x6f8),"ssl\\statem\\extensions_clnt.c",0x64c);
      _Dst = (void *)FUN_144ea64e0(local_res8[0],"ssl\\statem\\extensions_clnt.c",0x64d);
      *(void **)(param_1 + 0x6f8) = _Dst;
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,local_28,(ulonglong)local_res8[0]);
        *(ulonglong *)(param_1 + 0x700) = (ulonglong)local_res8[0];
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 1;
        return 1;
      }
      *(undefined8 *)(param_1 + 0x700) = 0;
      uVar7 = 0x50;
      uVar9 = 0x651;
      uVar8 = 0x44;
    }
    else {
      uVar7 = 0x28;
      uVar9 = 0x644;
      uVar8 = 0x6e;
    }
    FUN_144eafc90(param_1,uVar7,0x246,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9);
    return 0;
  }
  while( true ) {
    local_28 = pbVar3;
    uStack_20 = lVar5;
    if (local_18._8_8_ == 0) break;
    bVar1 = *(byte *)local_18._0_8_;
    uVar6 = (ulonglong)bVar1;
    if (lVar5 - 1U < uVar6) break;
    local_28 = (byte *)(local_18._0_8_ + uVar6 + 1);
    lVar5 = (lVar5 - 1U) - uVar6;
    uStack_20._0_4_ = (undefined4)lVar5;
    uStack_20._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_18._8_4_ = (undefined4)uStack_20;
    local_18._0_8_ = local_28;
    local_18._12_4_ = uStack_20._4_4_;
    uStack_20 = lVar5;
    if (bVar1 == 0) break;
    if (lVar5 == 0) goto LAB_1454d4caa;
    pbVar3 = local_28;
  }
  FUN_144eafc90(param_1,0x32,0x235,0x6e,"ssl\\statem\\extensions_clnt.c",0x61e);
  return 0;
}



// FUNCTION 1454d4da0 FUN_1454d4da0 body=685 status=ok
// SIG undefined FUN_1454d4da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d4da0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint local_res8;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x400) == 0) {
    FUN_144eafc90(param_1,0x6e,0x243,0x6e,"ssl\\statem\\extensions_clnt.c",0x100000665);
    return 0;
  }
  uVar9 = param_2[1];
  if (uVar9 < 2) {
LAB_1454d500a:
    uVar7 = 0x100000672;
  }
  else {
    puVar4 = (undefined1 *)*param_2;
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    uVar1 = uVar9 - 2;
    *param_2 = (longlong)(puVar4 + 2);
    param_2[1] = uVar1;
    if (uVar1 != CONCAT11(uVar2,uVar3)) goto LAB_1454d500a;
    if (uVar1 != 0) {
      local_res8 = (uint)(byte)puVar4[2];
      *param_2 = (longlong)(puVar4 + 3);
      param_2[1] = uVar9 - 3;
    }
    uVar9 = (ulonglong)local_res8;
    if ((uVar1 == 0) || (param_2[1] != uVar9)) goto LAB_1454d500a;
    FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                  "ssl\\statem\\extensions_clnt.c",0x675);
    uVar7 = FUN_144ea64e0(uVar9,"ssl\\statem\\extensions_clnt.c",0x676);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = uVar7;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0);
    if (lVar5 == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000) = 0;
      uVar8 = 0x50;
      uVar7 = 0x67a;
      uVar10 = 0x44;
      goto LAB_1454d5023;
    }
    iVar6 = FUN_1454d1fa0(param_2,lVar5,uVar9);
    if (iVar6 != 0) {
      *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 1000) = uVar9;
      lVar5 = *(longlong *)(param_1 + 0x508);
      if (((*(void **)(lVar5 + 0x230) == (void *)0x0) || (*(ulonglong *)(lVar5 + 0x238) != uVar9))
         || (iVar6 = memcmp(*(void **)(lVar5 + 0x230),
                            *(void **)(*(longlong *)(param_1 + 0xa8) + 0x3e0),uVar9), iVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x714) = 0;
      }
      if (*(int *)(param_1 + 200) != 0) {
        return 1;
      }
      if (*(longlong *)(lVar5 + 0x230) == 0) {
        uVar7 = FUN_144ea6d10(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),
                              "ssl\\statem\\extensions_clnt.c",0x696);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x230) = uVar7;
        lVar5 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(lVar5 + 0x230) != 0) {
          *(undefined8 *)(lVar5 + 0x238) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000);
          return 1;
        }
        uVar8 = 0x50;
        *(undefined8 *)(lVar5 + 0x238) = 0;
        uVar7 = 0x69a;
        uVar10 = 0x44;
      }
      else {
        uVar8 = 0x50;
        uVar7 = 0x692;
        uVar10 = 0x44;
      }
      goto LAB_1454d5023;
    }
    uVar7 = 0x67f;
  }
  uVar10 = 0x6e;
  uVar8 = 0x32;
LAB_1454d5023:
  FUN_144eafc90(param_1,uVar8,0x243,uVar10,"ssl\\statem\\extensions_clnt.c",uVar7);
  return 0;
}



// FUNCTION 1454d5050 FUN_1454d5050 body=472 status=ok
// SIG undefined FUN_1454d5050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d5050(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar10 = 0x1454d5060;
  uVar4 = param_2[1];
  if (1 < uVar4) {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *param_2 = (longlong)(puVar5 + 2);
    param_2[1] = uVar4 - 2;
    if ((CONCAT11(uVar1,uVar2) == 2) && (1 < uVar4 - 2)) {
      uVar1 = puVar5[2];
      uVar2 = puVar5[3];
      *param_2 = (longlong)(puVar5 + 4);
      param_2[1] = uVar4 - 4;
      if (uVar4 - 4 != 0) {
        cVar3 = puVar5[4];
        *param_2 = (longlong)(puVar5 + 5);
        param_2[1] = uVar4 - 5;
        if (uVar4 - 5 == 0) {
          if (cVar3 != '\0') {
            FUN_144eafc90(param_1,0x2f,0x1be,0x160,"ssl\\statem\\extensions_clnt.c",0x1000006b8);
            return 0;
          }
          lVar7 = FUN_1455d7240(param_1);
          if (lVar7 != 0) {
            iVar9 = 0;
            iVar6 = FUN_144babbf0(lVar7);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (0 < iVar6) {
              do {
                lVar8 = FUN_144babc00(lVar7,iVar9);
                if (*(uint *)(lVar8 + 8) == (uint)CONCAT11(uVar1,uVar2)) {
                  *(longlong *)(param_1 + 0x778) = lVar8;
                  return 1;
                }
                iVar9 = iVar9 + 1;
                iVar6 = FUN_144babbf0(lVar7);
                uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              } while (iVar9 < iVar6);
            }
            FUN_144eafc90(param_1,0x32,0x1be,0x161,"ssl\\statem\\extensions_clnt.c",
                          CONCAT44(uVar11,0x6d2));
            return 0;
          }
          FUN_144eafc90(param_1,0x32,0x1be,0x167,"ssl\\statem\\extensions_clnt.c",0x6c0);
          return 0;
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x1be,0x161,"ssl\\statem\\extensions_clnt.c",0x1000006b1);
  return 0;
}



// FUNCTION 1454d52b0 FUN_1454d52b0 body=160 status=ok
// SIG undefined FUN_1454d52b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d52b0(undefined4 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar2 = puVar4[1];
    uVar3 = *puVar4;
    *param_2 = (longlong)(puVar4 + 2);
    lVar1 = param_2[1] - 2;
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      if (CONCAT11(uVar3,uVar2) == 0x304) {
        if (param_3 == 0x800) {
          return 1;
        }
        *param_1 = 0x304;
        return 1;
      }
      uVar7 = 0x703;
      uVar5 = 0x2f;
      uVar6 = 0x74;
      goto LAB_1454d5332;
    }
  }
  uVar5 = 0x32;
  uVar7 = 0x6f8;
  uVar6 = 0x9f;
LAB_1454d5332:
  FUN_144eafc90(param_1,uVar5,0x264,uVar6,"ssl\\statem\\extensions_clnt.c",uVar7,0x1454d52ba);
  return 0;
}



// FUNCTION 1454d5350 FUN_1454d5350 body=913 status=ok
// SIG undefined FUN_1454d5350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d5350(longlong param_1,longlong *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong local_res8;
  undefined4 uVar13;
  undefined1 *local_28;
  ulonglong uStack_20;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if ((lVar3 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0)) {
    FUN_144eafc90(param_1,0x50,0x1bd,0x44,"ssl\\statem\\extensions_clnt.c",0x71c);
    return 0;
  }
  if ((ulonglong)param_2[1] < 2) {
    FUN_144eafc90(param_1,0x32,0x1bd,0x9f,"ssl\\statem\\extensions_clnt.c",0x722);
    return 0;
  }
  puVar7 = (undefined1 *)*param_2;
  lVar8 = param_2[1] - 2;
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  sVar4 = CONCAT11(uVar1,uVar2);
  param_2[1] = lVar8;
  *param_2 = (longlong)(puVar7 + 2);
  if ((param_3 >> 0xb & 1) == 0) {
    if (sVar4 == *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406)) {
      local_28 = (undefined1 *)*param_2;
      uStack_20 = param_2[1];
      if (uStack_20 < 2) {
LAB_1454d564f:
        FUN_144eafc90(param_1,0x32,0x1bd,0x9f,"ssl\\statem\\extensions_clnt.c",0x75a);
        return 0;
      }
      puVar7 = local_28 + 2;
      uVar6 = (uint)CONCAT11(*local_28,local_28[1]);
      uVar10 = (ulonglong)uVar6;
      if (uStack_20 - 2 < uVar10) goto LAB_1454d564f;
      local_28 = puVar7 + uVar10;
      uStack_20 = (uStack_20 - 2) - uVar10;
      if (uStack_20 != 0) goto LAB_1454d564f;
      *param_2 = (longlong)local_28;
      param_2[1] = 0;
      if (uVar6 == 0) goto LAB_1454d564f;
      lVar8 = FUN_144ba6d80();
      if ((lVar8 == 0) || (iVar5 = FUN_144ba6ec0(lVar8,lVar3), iVar5 < 1)) {
        uVar9 = 0x50;
        uVar11 = 0x761;
        uVar12 = 0x41;
      }
      else {
        iVar5 = FUN_144ba71c0(lVar8,puVar7,uVar6);
        if (iVar5 != 0) {
          iVar5 = FUN_144ec93c0(param_1,lVar3,lVar8,1);
          if (iVar5 != 0) {
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar8;
            return 1;
          }
          goto LAB_1454d55dd;
        }
        uVar11 = 0x768;
        uVar9 = 0x2f;
        uVar12 = 0x132;
      }
      FUN_144eafc90(param_1,uVar9,0x1bd,uVar12,"ssl\\statem\\extensions_clnt.c",uVar11);
LAB_1454d55dd:
      FUN_144ba6e60(lVar8);
      return 0;
    }
    uVar13 = 0x753;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    local_res8 = 0;
    if (lVar8 != 0) {
      uVar9 = 0x32;
      uVar13 = 0x72c;
      uVar11 = 0x9f;
      goto LAB_1454d54e0;
    }
    if (sVar4 == *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406)) {
      uVar9 = 0x2f;
      uVar13 = 0x736;
      uVar11 = 0x6c;
      goto LAB_1454d54e0;
    }
    FUN_144eba940(param_1,&local_res8,&local_28);
    if (local_28 != (undefined1 *)0x0) {
      do {
        if (sVar4 == *(short *)(local_res8 + (longlong)puVar7 * 2)) {
          if ((puVar7 < local_28) &&
             (iVar5 = FUN_144eba8d0(param_1,CONCAT11(uVar1,uVar2),0x20004), iVar5 != 0)) {
            *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = sVar4;
            FUN_144ba6e60(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
            return 1;
          }
          break;
        }
        puVar7 = puVar7 + 1;
      } while (puVar7 < local_28);
    }
    uVar13 = 0x743;
  }
  uVar9 = 0x2f;
  uVar11 = 0x6c;
LAB_1454d54e0:
  FUN_144eafc90(param_1,uVar9,0x1bd,uVar11,"ssl\\statem\\extensions_clnt.c",uVar13);
  return 0;
}



// FUNCTION 1454d56f0 FUN_1454d56f0 body=290 status=ok
// SIG undefined FUN_1454d56f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d56f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    puVar3 = puVar4 + 2;
    uVar2 = (ulonglong)CONCAT11(*puVar4,puVar4[1]);
    if (uVar2 <= uVar5 - 2) {
      puVar4 = puVar3 + uVar2;
      uVar5 = (uVar5 - 2) - uVar2;
      if (uVar5 == 0) {
        *param_2 = puVar4;
        param_2[1] = 0;
        FUN_144ea6530(*(undefined8 *)(param_1 + 0x718),
                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                      ,0x1c5);
        *(undefined8 *)(param_1 + 0x718) = 0;
        *(undefined8 *)(param_1 + 0x720) = 0;
        if (uVar2 != 0) {
          lVar1 = FUN_144ea6d10(puVar3,uVar2,
                                "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                                ,0x1ce);
          *(longlong *)(param_1 + 0x718) = lVar1;
          if (lVar1 == 0) goto LAB_1454d57d5;
          *(ulonglong *)(param_1 + 0x720) = uVar2;
        }
        return 1;
      }
    }
  }
LAB_1454d57d5:
  FUN_144eafc90(param_1,0x32,0x216,0x9f,"ssl\\statem\\extensions_clnt.c",0x781,puVar4,uVar5);
  return 0;
}



// FUNCTION 1454d5820 FUN_1454d5820 body=414 status=ok
// SIG undefined FUN_1454d5820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d5820(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (1 < (ulonglong)param_2[1]) {
    puVar2 = (undefined1 *)*param_2;
    uVar3 = CONCAT11(*puVar2,puVar2[1]);
    *param_2 = (longlong)(puVar2 + 2);
    lVar1 = param_2[1] - 2;
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      if ((uint)uVar3 < *(uint *)(param_1 + 0x730)) {
        if ((uVar3 == 0) &&
           ((*(longlong *)(param_1 + 0x510) == 0 || (*(uint *)(param_1 + 0x730) == 2)))) {
          *(undefined4 *)(param_1 + 200) = 1;
          FUN_144eb0d50();
          *(undefined8 *)(param_1 + 0x510) = 0;
          return 1;
        }
        lVar1 = *(longlong *)(param_1 + 0x510);
        if (lVar1 != 0) {
          if ((((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) != 0) ||
              (*(int *)(*(longlong *)(param_1 + 0x508) + 0x228) != 0)) ||
             (*(int *)(lVar1 + 0x228) == 0)) {
            uVar7 = *(undefined8 *)(lVar1 + 0x18);
            *(undefined8 *)(param_1 + 0x134) = *(undefined8 *)(lVar1 + 0x10);
            *(undefined8 *)(param_1 + 0x13c) = uVar7;
            uVar7 = *(undefined8 *)(lVar1 + 0x28);
            *(undefined8 *)(param_1 + 0x144) = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(param_1 + 0x14c) = uVar7;
            uVar5 = *(undefined4 *)(lVar1 + 0x34);
            uVar6 = *(undefined4 *)(lVar1 + 0x38);
            uVar4 = *(undefined4 *)(lVar1 + 0x3c);
            *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar1 + 0x30);
            *(undefined4 *)(param_1 + 0x158) = uVar5;
            *(undefined4 *)(param_1 + 0x15c) = uVar6;
            *(undefined4 *)(param_1 + 0x160) = uVar4;
            uVar5 = *(undefined4 *)(lVar1 + 0x44);
            uVar6 = *(undefined4 *)(lVar1 + 0x48);
            uVar4 = *(undefined4 *)(lVar1 + 0x4c);
            *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(lVar1 + 0x40);
            *(undefined4 *)(param_1 + 0x168) = uVar5;
            *(undefined4 *)(param_1 + 0x16c) = uVar6;
            *(undefined4 *)(param_1 + 0x170) = uVar4;
          }
          FUN_144eb0d50(*(undefined8 *)(param_1 + 0x508));
          *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x510);
          *(undefined8 *)(param_1 + 0x510) = 0;
          *(undefined4 *)(param_1 + 200) = 1;
          if (uVar3 != 0) {
            *(undefined4 *)(param_1 + 0x714) = 0;
          }
          return 1;
        }
        uVar7 = 0x1000007d2;
        uVar5 = 0x50;
        uVar6 = 0x44;
      }
      else {
        uVar5 = 0x2f;
        uVar7 = 0x1000007bf;
        uVar6 = 0x72;
      }
      goto LAB_1454d5997;
    }
  }
  uVar5 = 0x32;
  uVar7 = 0x1000007b9;
  uVar6 = 0x9f;
LAB_1454d5997:
  FUN_144eafc90(param_1,uVar5,0x1f6,uVar6,"ssl\\statem\\extensions_clnt.c",uVar7);
  return 0;
}



// FUNCTION 1454d59c0 FUN_1454d59c0 body=254 status=ok
// SIG undefined FUN_1454d59c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d59c0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong local_res8;
  ulonglong local_res10;
  ulonglong uVar7;
  
  uVar5 = 0;
  bVar1 = false;
  local_res8 = 0;
  if (*param_1 != 0x300) {
    uVar3 = FUN_144b9a270();
    iVar2 = FUN_144babbf0(uVar3);
    uVar7 = uVar5;
    if (0 < iVar2) {
      do {
        lVar4 = FUN_144babc00(uVar3,uVar7);
        if ((((*(byte *)(lVar4 + 0x1c) & 0x84) != 0) || ((*(byte *)(lVar4 + 0x20) & 8) != 0)) ||
           (0x303 < *(int *)(lVar4 + 0x2c))) {
          bVar1 = true;
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < iVar2);
    }
    FUN_144babdb0(uVar3);
    if ((bVar1) && (FUN_144eba940(param_1,&local_res8,&local_res10), local_res10 != 0)) {
      do {
        iVar2 = FUN_144eba8d0(param_1,*(undefined2 *)(local_res8 + uVar5 * 2),0x20004);
        if (iVar2 != 0) {
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_res10);
    }
  }
  return 0;
}



// FUNCTION 1454d5ac0 FUN_1454d5ac0 body=395 status=ok
// SIG undefined FUN_1454d5ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d5ac0(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  
  uVar4 = 1;
  local_res8 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if (lVar2 == 0) {
    uVar4 = 1;
    lVar2 = FUN_144ecb790(param_1,param_3 & 0xffff);
    if (lVar2 == 0) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x4d8) != 1) {
    FUN_144eafc90(param_1,0x50,0x200,0x44,"ssl\\statem\\extensions_clnt.c",&DAT_100000260);
    return 0;
  }
  lVar3 = FUN_144ba7210(lVar2,&local_res8);
  if (lVar3 == 0) {
    uVar5 = CONCAT44(uVar4,0x273);
    uVar4 = 0x10;
  }
  else {
    iVar1 = FUN_14526ef00(param_2,param_3,2);
    if ((iVar1 != 0) && (iVar1 = FUN_14526f090(param_2,local_res8,lVar3,2), iVar1 != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) = lVar2;
      *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = (short)param_3;
      FUN_144ea6530(local_res8,"ssl\\statem\\extensions_clnt.c",0x286);
      return 1;
    }
    uVar5 = CONCAT44(uVar4,0x27b);
    uVar4 = 0x44;
  }
  FUN_144eafc90(param_1,0x50,0x200,uVar4,"ssl\\statem\\extensions_clnt.c",uVar5);
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
    FUN_144ba6e60(lVar2);
  }
  FUN_144ea6530(local_res8,"ssl\\statem\\extensions_clnt.c",0x28c);
  return 0;
}


