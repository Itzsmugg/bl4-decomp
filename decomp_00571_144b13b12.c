// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b13b12 FUN_144b13b12 body=131 status=ok
// SIG undefined FUN_144b13b12(void)

undefined8
FUN_144b13b12(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if ((((DAT_14cafb2b4 == 1) || (DAT_14c760d84 == 0)) || ((DAT_14ca84f5a & 1) == 0)) ||
     (1 < DAT_14cafb358 - 1U)) {
    *param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_147cbda2e(param_3,param_4);
    uVar2 = FUN_147cbda32(param_1,param_2,param_3,param_4,uVar1,param_5);
  }
  return uVar2;
}



// FUNCTION 144b13b96 FUN_144b13b96 body=85 status=ok
// SIG undefined FUN_144b13b96(void)

void FUN_144b13b96(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return;
}



// FUNCTION 144b13bec FUN_144b13bec body=280 status=ok
// SIG undefined FUN_144b13bec(void)

void FUN_144b13bec(longlong *param_1,short *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    lVar3 = *param_1;
    uVar8 = *(ulonglong *)(lVar3 + 0x30);
    uVar5 = lVar3 + 0x30 + ((longlong)uVar8 >> 0x18);
    if ((uVar8 & 1) == 0) {
      uVar5 = uVar8;
    }
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x38);
    if (0 < (int)*(uint *)(lVar3 + 0x38)) {
      iVar2 = *(int *)(lVar3 + 0x28);
      iVar7 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar7 = iVar2 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar7 >> 3) +
                            (*(int *)(lVar3 + 8) + *(int *)(lVar3 + 0x18) + iVar2) * 8) + param_1[1]
                     );
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*param_2 == (short)puVar6[-1]) {
          uVar8 = *puVar6;
          uVar5 = ((longlong)uVar8 >> 0x18) + (longlong)puVar6;
          if ((uVar8 & 1) == 0) {
            uVar5 = uVar8;
          }
          if ((int)(uint)puVar6[1] < 1) {
            return;
          }
          uVar8 = 0;
          do {
            if (param_2[1] == *(short *)(uVar5 + uVar8 * 4)) {
              uVar4 = 4;
              if (uVar1 < 4) {
                uVar4 = uVar1;
              }
              memcpy(_Dst,param_3,(ulonglong)uVar4);
              memset((void *)((longlong)_Dst + (ulonglong)uVar4),0,
                     (longlong)
                     (int)((int)((uint)(ushort)param_2[2] - (uint)uVar4) >> 0x1f &
                          (uint)(ushort)param_2[2] - (uint)uVar4));
              return;
            }
            _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while ((uint)puVar6[1] != uVar8);
          return;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144b13d1a FUN_144b13d1a body=134 status=ok
// SIG undefined FUN_144b13d1a(void)

undefined8 FUN_144b13d1a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147248e54((int)lVar3,*param_4,1);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 144b13da0 FUN_144b13da0 body=76 status=ok
// SIG undefined FUN_144b13da0(void)

undefined8 * FUN_144b13da0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f80000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 144b13dec FUN_144b13dec body=50 status=ok
// SIG undefined FUN_144b13dec(void)

undefined8 * FUN_144b13dec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f80000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 144b13e1e FUN_144b13e1e body=31 status=ok
// SIG undefined FUN_144b13e1e(void)

undefined8 FUN_144b13e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b13e3e FUN_144b13e3e body=31 status=ok
// SIG undefined FUN_144b13e3e(void)

undefined8 FUN_144b13e3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b13e5e FUN_144b13e5e body=141 status=ok
// SIG undefined FUN_144b13e5e(void)

void FUN_144b13e5e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[8] = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = (undefined1  [16])0x0;
  lVar1 = 0xa2;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x162);
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2a) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x30] = 0;
  return;
}



// FUNCTION 144b13eec FUN_144b13eec body=133 status=ok
// SIG undefined FUN_144b13eec(void)

void FUN_144b13eec(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  param_1[10] = 0;
  lVar1 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x132);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 144b13f72 FUN_144b13f72 body=31 status=ok
// SIG undefined FUN_144b13f72(void)

undefined8 FUN_144b13f72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b13f92 FUN_144b13f92 body=31 status=ok
// SIG undefined FUN_144b13f92(void)

undefined8 FUN_144b13f92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b13fb2 FUN_144b13fb2 body=31 status=ok
// SIG undefined FUN_144b13fb2(void)

undefined8 FUN_144b13fb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b13fd2 FUN_144b13fd2 body=31 status=ok
// SIG undefined FUN_144b13fd2(void)

undefined8 FUN_144b13fd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b13ff2 FUN_144b13ff2 body=705 status=ok
// SIG undefined FUN_144b13ff2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b13ff2(ulonglong param_1,ulonglong *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  bVar2 = *param_3;
  bVar3 = param_3[1];
  bVar4 = param_3[2];
  bVar5 = param_3[3];
  bVar6 = param_3[4];
  bVar7 = param_3[5];
  bVar8 = param_3[6];
  bVar9 = param_3[7];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca164e0) && (FUN_144b3d300(&DAT_14ca164e0), DAT_14ca164e0 == -1)) {
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
  uVar1 = (uint)bVar2 + (uint)bVar3 * 2 +
          ((uint)bVar5 * 2 + (uint)bVar6 * 4 + (uint)bVar7 * 8 | (uint)bVar8 << 4 | (uint)bVar9 << 5
          | (uint)bVar4) * 4;
  puVar10 = *(ulonglong **)(param_1 + 0x28);
  uVar14 = (DAT_14ca16460 ^ uVar1) * -0x622015f714c7d297;
  lVar15 = (uVar14 >> 0x2f ^ uVar1 ^ uVar14) * -0x622015f714c7d297;
  uVar14 = puVar10[3];
  if ((uVar14 & 1) != 0) {
    uVar14 = (longlong)puVar10 + ((longlong)uVar14 >> 0x18) + 0x18;
  }
  uVar13 = puVar10[5];
  if ((uVar13 & 1) != 0) {
    uVar13 = (longlong)puVar10 + ((longlong)uVar13 >> 0x18) + 0x28;
  }
  uVar16 = puVar10[1];
  if ((uVar16 & 1) != 0) {
    uVar16 = (longlong)puVar10 + ((longlong)uVar16 >> 0x18) + 8;
  }
  uVar12 = *puVar10;
  if ((uVar12 & 1) != 0) {
    uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar10;
  }
  uVar11 = *(uint *)(uVar12 + (ulonglong)
                              ((uint)puVar10[2] &
                               ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * 0x2d69 & 0xffff)
                              * 4);
  if (uVar11 != 0xffffffff) {
    do {
      uVar12 = (ulonglong)uVar11;
      if ((*(ulonglong *)(uVar14 + uVar12 * 8) == DAT_14ca16460) &&
         (*(uint *)(uVar13 + uVar12 * 4) == uVar1)) {
        uVar14 = puVar10[7];
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)(puVar10 + 7) + ((longlong)uVar14 >> 0x18);
        }
        uVar13 = *(ulonglong *)(uVar14 + (longlong)(int)uVar11 * 8);
        if ((uVar13 & 1) != 0) {
          uVar13 = ((longlong)uVar13 >> 0x18) + uVar14 + (longlong)(int)uVar11 * 8;
        }
        goto LAB_144b1417b;
      }
      uVar11 = *(uint *)(uVar16 + uVar12 * 4);
    } while (uVar11 != 0xffffffff);
  }
  uVar13 = 0;
LAB_144b1417b:
  if (uVar13 == 0) {
    param_1 = 0;
  }
  *param_2 = uVar13;
  param_2[1] = param_1;
  return;
}



// FUNCTION 144b142b4 FUN_144b142b4 body=705 status=ok
// SIG undefined FUN_144b142b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b142b4(ulonglong param_1,ulonglong *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  bVar2 = *param_3;
  bVar3 = param_3[1];
  bVar4 = param_3[2];
  bVar5 = param_3[3];
  bVar6 = param_3[4];
  bVar7 = param_3[5];
  bVar8 = param_3[6];
  bVar9 = param_3[7];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca16608) && (FUN_144b3d300(&DAT_14ca16608), DAT_14ca16608 == -1)) {
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
  uVar1 = (uint)bVar2 + (uint)bVar3 * 2 +
          ((uint)bVar5 * 2 + (uint)bVar6 * 4 + (uint)bVar7 * 8 | (uint)bVar8 << 4 | (uint)bVar9 << 5
          | (uint)bVar4) * 4;
  puVar10 = *(ulonglong **)(param_1 + 0x28);
  uVar14 = (DAT_14ca16588 ^ uVar1) * -0x622015f714c7d297;
  lVar15 = (uVar14 >> 0x2f ^ uVar1 ^ uVar14) * -0x622015f714c7d297;
  uVar14 = puVar10[3];
  if ((uVar14 & 1) != 0) {
    uVar14 = (longlong)puVar10 + ((longlong)uVar14 >> 0x18) + 0x18;
  }
  uVar13 = puVar10[5];
  if ((uVar13 & 1) != 0) {
    uVar13 = (longlong)puVar10 + ((longlong)uVar13 >> 0x18) + 0x28;
  }
  uVar16 = puVar10[1];
  if ((uVar16 & 1) != 0) {
    uVar16 = (longlong)puVar10 + ((longlong)uVar16 >> 0x18) + 8;
  }
  uVar12 = *puVar10;
  if ((uVar12 & 1) != 0) {
    uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar10;
  }
  uVar11 = *(uint *)(uVar12 + (ulonglong)
                              ((uint)puVar10[2] &
                               ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * 0x2d69 & 0xffff)
                              * 4);
  if (uVar11 != 0xffffffff) {
    do {
      uVar12 = (ulonglong)uVar11;
      if ((*(ulonglong *)(uVar14 + uVar12 * 8) == DAT_14ca16588) &&
         (*(uint *)(uVar13 + uVar12 * 4) == uVar1)) {
        uVar14 = puVar10[7];
        if ((uVar14 & 1) != 0) {
          uVar14 = (longlong)(puVar10 + 7) + ((longlong)uVar14 >> 0x18);
        }
        uVar13 = *(ulonglong *)(uVar14 + (longlong)(int)uVar11 * 8);
        if ((uVar13 & 1) != 0) {
          uVar13 = ((longlong)uVar13 >> 0x18) + uVar14 + (longlong)(int)uVar11 * 8;
        }
        goto LAB_144b1443d;
      }
      uVar11 = *(uint *)(uVar16 + uVar12 * 4);
    } while (uVar11 != 0xffffffff);
  }
  uVar13 = 0;
LAB_144b1443d:
  if (uVar13 == 0) {
    param_1 = 0;
  }
  *param_2 = uVar13;
  param_2[1] = param_1;
  return;
}



// FUNCTION 144b14575 FUN_144b14575 body=99 status=ok
// SIG undefined FUN_144b14575(void)

void FUN_144b14575(undefined8 *param_1)

{
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
  param_1[10] = 0;
  param_1[0xb] = 0x3f00000040800000;
  param_1[0xc] = 0x3f80000040800000;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(byte *)((longlong)param_1 + 0x69) = *(byte *)((longlong)param_1 + 0x69) & 0xf0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 144b145d8 FUN_144b145d8 body=961 status=ok
// SIG undefined FUN_144b145d8(void)

void FUN_144b145d8(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  undefined4 local_328 [190];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (1 < (int)param_2) {
    memset(local_328,0,0x2f0);
    local_330 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_338 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_328[0] = (int)(longlong)(fVar19 + fVar19);
    plVar3 = &local_338;
    do {
      puVar4 = (uint *)*plVar3;
      puVar10 = (uint *)plVar3[1];
      iVar14 = (int)plVar3[2];
      iVar8 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar4) >> 3);
      uVar5 = iVar8 + 1;
      puVar13 = puVar4;
      if (iVar14 != 0) {
LAB_144b14670:
        if (8 < (int)uVar5) {
          uVar2 = *(undefined8 *)(puVar13 + (ulonglong)(uVar5 >> 1) * 2);
          *(undefined8 *)(puVar13 + (ulonglong)(uVar5 >> 1) * 2) = *(undefined8 *)puVar13;
          *(undefined8 *)puVar13 = uVar2;
          puVar6 = puVar10 + 2;
          puVar4 = puVar13;
          do {
            puVar4 = puVar4 + 2;
            if (puVar4 <= puVar10) {
              while (*puVar4 <= *puVar13) {
                if (((*puVar13 == *puVar4) && (puVar13[1] < puVar4[1])) ||
                   (puVar4 = puVar4 + 2, puVar10 < puVar4)) break;
              }
            }
            puVar9 = puVar6 + -2;
            puVar7 = puVar6;
            if (puVar13 < puVar9) {
              do {
                puVar7 = puVar6;
                if (puVar6[-2] < *puVar13) break;
                if ((puVar6[-2] == *puVar13) && (puVar9[1] < puVar13[1])) {
                  puVar7 = puVar9 + 2;
                  break;
                }
                puVar1 = puVar9 + -2;
                puVar6 = puVar9;
                puVar7 = puVar9;
                puVar9 = puVar1;
              } while (puVar13 < puVar1);
            }
            puVar6 = puVar9;
            if (puVar6 < puVar4) goto LAB_144b14703;
            uVar2 = *(undefined8 *)puVar4;
            *(undefined8 *)puVar4 = *(undefined8 *)puVar6;
            *(undefined8 *)puVar6 = uVar2;
          } while( true );
        }
        for (; puVar6 = puVar13, puVar4 = puVar13, puVar13 < puVar10; puVar10 = puVar10 + -2) {
          while (puVar4 = puVar4 + 2, puVar4 <= puVar10) {
            if ((*puVar6 < *puVar4) || ((*puVar6 == *puVar4 && (puVar6[1] < puVar4[1])))) {
              puVar6 = puVar4;
            }
          }
          uVar2 = *(undefined8 *)puVar6;
          *(undefined8 *)puVar6 = *(undefined8 *)puVar10;
          *(undefined8 *)puVar10 = uVar2;
        }
        goto LAB_144b147dc;
      }
LAB_144b147ee:
      if (uVar5 != 0) {
        iVar14 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        iVar8 = iVar14;
joined_r0x000144b14810:
        do {
          iVar16 = iVar14 * 2 + 1;
          if (iVar16 < (int)uVar5) {
            iVar12 = iVar14 * 2 + 2;
            if (iVar12 < (int)uVar5) {
              lVar17 = (longlong)iVar12;
              if ((puVar4[lVar17 * 2] < puVar4[(longlong)iVar16 * 2]) ||
                 ((puVar4[lVar17 * 2] == puVar4[(longlong)iVar16 * 2] &&
                  (puVar4[lVar17 * 2 + 1] < puVar4[(longlong)iVar16 * 2 + 1])))) goto LAB_144b1484c;
            }
            else {
LAB_144b1484c:
              lVar17 = (longlong)iVar16;
              iVar12 = iVar16;
            }
            lVar15 = (longlong)iVar14;
            if ((puVar4[lVar15 * 2] < puVar4[lVar17 * 2]) ||
               ((puVar4[lVar15 * 2] == puVar4[lVar17 * 2] &&
                (puVar4[lVar15 * 2 + 1] < puVar4[lVar17 * 2 + 1])))) {
              uVar2 = *(undefined8 *)(puVar4 + lVar15 * 2);
              *(undefined8 *)(puVar4 + lVar15 * 2) = *(undefined8 *)(puVar4 + lVar17 * 2);
              *(undefined8 *)(puVar4 + lVar17 * 2) = uVar2;
              iVar14 = iVar12;
              goto joined_r0x000144b14810;
            }
          }
          bVar18 = iVar8 != 0;
          iVar14 = iVar8 + -1;
          iVar8 = iVar14;
        } while (bVar18);
        if (1 < (int)uVar5) {
          uVar11 = (ulonglong)uVar5;
          uVar2 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = *(undefined8 *)(puVar4 + uVar11 * 2 + -2);
          *(undefined8 *)(puVar4 + uVar11 * 2 + -2) = uVar2;
          if (uVar5 != 2) {
            do {
              uVar11 = uVar11 - 1;
              iVar8 = 0;
              iVar14 = 1;
              iVar16 = 0;
              do {
                iVar12 = iVar8 + 2;
                lVar17 = (longlong)iVar12;
                if (lVar17 < (longlong)uVar11) {
                  if ((puVar4[lVar17 * 2] < puVar4[(longlong)iVar14 * 2]) ||
                     ((puVar4[lVar17 * 2] == puVar4[(longlong)iVar14 * 2] &&
                      (puVar4[lVar17 * 2 + 1] < puVar4[(longlong)iVar14 * 2 + 1]))))
                  goto LAB_144b148fe;
                }
                else {
LAB_144b148fe:
                  lVar17 = (longlong)iVar14;
                  iVar12 = iVar14;
                }
                lVar15 = (longlong)iVar16;
                if ((puVar4[lVar17 * 2] <= puVar4[lVar15 * 2]) &&
                   ((puVar4[lVar15 * 2] != puVar4[lVar17 * 2] ||
                    (puVar4[lVar17 * 2 + 1] <= puVar4[lVar15 * 2 + 1])))) break;
                uVar2 = *(undefined8 *)(puVar4 + lVar15 * 2);
                *(undefined8 *)(puVar4 + lVar15 * 2) = *(undefined8 *)(puVar4 + lVar17 * 2);
                *(undefined8 *)(puVar4 + lVar17 * 2) = uVar2;
                iVar8 = iVar12 * 2;
                iVar14 = iVar12 * 2 + 1;
                iVar16 = iVar12;
              } while ((longlong)iVar14 < (longlong)uVar11);
              uVar2 = *(undefined8 *)puVar4;
              *(undefined8 *)puVar4 = *(undefined8 *)(puVar4 + uVar11 * 2 + -2);
              *(undefined8 *)(puVar4 + uVar11 * 2 + -2) = uVar2;
            } while (2 < uVar11);
          }
        }
      }
LAB_144b147dc:
      plVar3 = plVar3 + -3;
    } while (&local_338 <= plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144b14703:
  uVar2 = *(undefined8 *)puVar13;
  *(undefined8 *)puVar13 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar6 = uVar2;
  iVar14 = iVar14 + -1;
  puVar7 = puVar7 + -4;
  if ((longlong)puVar7 - (longlong)puVar13 < (longlong)puVar10 - (longlong)puVar4) {
    if (puVar4 < puVar10) {
      *plVar3 = (longlong)puVar4;
      plVar3[1] = (longlong)puVar10;
      *(int *)(plVar3 + 2) = iVar14;
      plVar3 = plVar3 + 3;
    }
    puVar10 = puVar7;
    puVar4 = puVar13;
    if (puVar6 <= puVar13 + 2) goto LAB_144b147dc;
  }
  else {
    if (puVar13 + 2 < puVar6) {
      *plVar3 = (longlong)puVar13;
      plVar3[1] = (longlong)puVar7;
      *(int *)(plVar3 + 2) = iVar14;
      plVar3 = plVar3 + 3;
    }
    if (puVar10 <= puVar4) goto LAB_144b147dc;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar4) >> 3);
  uVar5 = iVar8 + 1;
  puVar13 = puVar4;
  if (iVar14 == 0) goto LAB_144b147ee;
  goto LAB_144b14670;
}



// FUNCTION 144b1499a FUN_144b1499a body=31 status=ok
// SIG undefined FUN_144b1499a(void)

undefined8 FUN_144b1499a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b149b9 FUN_144b149b9 body=51 status=ok
// SIG undefined FUN_144b149b9(void)

void FUN_144b149b9(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x290);
    do {
      *puVar1 = 0;
      puVar1[1] = 0x3f80000000000000;
      puVar1[2] = 0;
      puVar1[3] = 0x3f80000000000000;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0x3f80000000000000;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0x3f80000000000000;
      puVar1 = puVar1 + 0x72;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144b149ec FUN_144b149ec body=237 status=ok
// SIG undefined FUN_144b149ec(void)

int FUN_144b149ec(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar5 = 1;
  if (iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    uVar7 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar6 = -0x40 - (iVar1 + 0x1fU & 0xffffffe0);
    uVar2 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar9 = uVar7 == 0;
      uVar7 = uVar7 - 1;
      if (bVar9) goto LAB_144b14a5e;
      iVar6 = iVar6 + 0x20;
      uVar8 = uVar2 & *(uint *)(lVar4 + uVar7 * 4);
      uVar2 = 0xffffffff;
    } while (uVar8 == 0);
    uVar7 = (ulonglong)uVar8 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = -(((uint)lVar4 ^ 0x3f) + iVar6);
  }
LAB_144b14a5e:
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = -1;
    lVar4 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x30);
    }
    uVar7 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar3 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar2 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar9 = uVar7 == 0;
      uVar7 = uVar7 - 1;
      if (bVar9) goto LAB_144b14ace;
      iVar3 = iVar3 + 0x20;
      uVar8 = uVar2 & *(uint *)(lVar4 + uVar7 * 4);
      uVar2 = 0xffffffff;
    } while (uVar8 == 0);
    uVar7 = (ulonglong)uVar8 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar6 = -(((uint)lVar4 ^ 0x3f) + iVar3);
  }
LAB_144b14ace:
  return iVar6 + iVar5;
}



// FUNCTION 144b14b04 FUN_144b14b04 body=725 status=ok
// SIG undefined FUN_144b14b04(void)

void FUN_144b14b04(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar5 = uVar1 & 0x7fffffff ^ uVar1 >> 0x10;
  uVar1 = *(uint *)(param_1 + 0x198);
  uVar9 = uVar1 & uVar5;
  puVar8 = (undefined4 *)(param_1 + 0x180);
  puVar4 = *(undefined4 **)(param_1 + 0x188);
  if (*(undefined4 **)(param_1 + 0x188) == (undefined4 *)0x0) {
    puVar4 = puVar8;
  }
  puVar7 = (undefined4 *)(param_1 + 0x168);
  do {
    if (puVar4[(int)uVar9] == uVar5) {
      puVar3 = *(undefined4 **)(param_1 + 0x170);
      if (*(undefined4 **)(param_1 + 0x170) == (undefined4 *)0x0) {
        puVar3 = puVar7;
      }
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x128) + (longlong)(int)puVar3[(int)uVar9] * 0x48)
          == param_2) {
        FUN_147270270(param_1 + 0x128,puVar3[(int)uVar9]);
        puVar4 = *(undefined4 **)(param_1 + 0x188);
        if (*(undefined4 **)(param_1 + 0x188) == (undefined4 *)0x0) {
          puVar4 = puVar8;
        }
        puVar4[(int)uVar9] = 0x80000000;
        uVar1 = *(uint *)(param_1 + 0x198);
        if ((ulonglong)
            (((longlong)*(int *)(param_1 + 0x130) - (longlong)*(int *)(param_1 + 0x160)) * 0x14) <
            (ulonglong)(uVar1 * 3)) {
          puVar4 = *(undefined4 **)(param_1 + 0x170);
          if (puVar4 == (undefined4 *)0x0) {
            local_60[0] = *puVar7;
          }
          *(undefined8 *)(param_1 + 0x170) = 0;
          local_50 = *(undefined4 *)(param_1 + 0x178);
          local_4c = *(undefined4 *)(param_1 + 0x17c);
          *(undefined8 *)(param_1 + 0x178) = 0x100000000;
          puVar3 = *(undefined4 **)(param_1 + 0x188);
          if (puVar3 == (undefined4 *)0x0) {
            local_78[0] = *puVar8;
          }
          *(undefined8 *)(param_1 + 0x188) = 0;
          local_68 = *(undefined4 *)(param_1 + 400);
          local_64 = *(undefined4 *)(param_1 + 0x194);
          *(undefined8 *)(param_1 + 400) = 0x100000000;
          *(uint *)(param_1 + 0x198) = uVar1 >> 1;
          *(undefined4 *)(param_1 + 0x19c) = 0;
          local_70 = puVar3;
          local_58 = puVar4;
          if ((int)((uVar1 >> 1) + 1) < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(0x80000000);
          }
          if (uVar1 < 2) {
            iVar2 = 0;
            uVar5 = 1;
            iVar6 = 1;
          }
          else {
            FUN_14475fe8c(puVar7);
            iVar2 = *(int *)(param_1 + 0x178);
            iVar6 = *(int *)(param_1 + 0x17c);
            uVar5 = *(int *)(param_1 + 0x198) + 1;
          }
          *(uint *)(param_1 + 0x178) = iVar2 + uVar5;
          if ((uint)(iVar6 - iVar2) < uVar5) {
            FUN_146f3c7b6(puVar7,iVar2);
            uVar5 = *(int *)(param_1 + 0x198) + 1;
          }
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar5);
          }
          if (*(int *)(param_1 + 0x194) < (int)uVar5) {
            FUN_14476002c(puVar8);
            uVar5 = *(int *)(param_1 + 0x198) + 1;
          }
          FUN_144a7a6da(puVar8,uVar5);
          puVar8 = local_78;
          if (puVar3 != (undefined4 *)0x0) {
            puVar8 = puVar3;
          }
          puVar7 = local_60;
          if (puVar4 != (undefined4 *)0x0) {
            puVar7 = puVar4;
          }
          uVar5 = 0;
          do {
            if (!SBORROW4(0,puVar8[(int)uVar5])) {
              FUN_14726fea6(param_1 + 0x128,puVar7[(int)uVar5]);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 <= uVar1);
          if (puVar3 != (undefined4 *)0x0) {
            FUN_1400020a8(puVar3);
          }
          if (puVar4 != (undefined4 *)0x0) {
            FUN_1400020a8(puVar4);
          }
        }
        goto LAB_144b14ba8;
      }
    }
    uVar9 = uVar9 + 1 & uVar1;
    if (uVar9 == (uVar5 + *(int *)(param_1 + 0x19c) + 1 & uVar1)) {
LAB_144b14ba8:
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 144b14de7 FUN_144b14de7 body=24 status=ok
// SIG undefined FUN_144b14de7(void)

void FUN_144b14de7(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 144b14e04 FUN_144b14e04 body=172 status=ok
// SIG undefined FUN_144b14e04(void)

void FUN_144b14e04(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *(longlong *)(param_1 + 2);
  lVar8 = *(longlong *)(lVar9 + 0x10);
  if (*(longlong *)(lVar9 + 0x10) == 0) {
    lVar8 = lVar9;
  }
  iVar2 = *(int *)(lVar9 + 0x18);
  iVar4 = *param_1;
  lVar9 = (longlong)iVar4;
  uVar5 = param_1[4] & *(uint *)(lVar8 + lVar9 * 4);
  if (uVar5 == 0) {
    iVar6 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar6 = iVar2 + -1;
    }
    iVar3 = param_1[6];
    iVar7 = iVar6 >> 5;
    if (iVar6 >> 5 < iVar4) {
      iVar7 = iVar4;
    }
    lVar10 = 0;
    do {
      *param_1 = iVar4 + 1 + (int)lVar10;
      iVar3 = iVar3 + 0x20;
      param_1[6] = iVar3;
      if (iVar7 - lVar9 == lVar10) {
        param_1[5] = iVar2;
        return;
      }
      uVar5 = *(uint *)(lVar8 + lVar9 * 4 + 4 + lVar10 * 4);
      param_1[4] = -1;
      lVar10 = lVar10 + 1;
    } while (uVar5 == 0);
  }
  else {
    iVar3 = param_1[6];
  }
  param_1[1] = -uVar5 & uVar5;
  uVar1 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  iVar4 = (iVar3 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
  if (iVar2 <= iVar4) {
    iVar4 = iVar2;
  }
  param_1[5] = iVar4;
  return;
}



// FUNCTION 144b14eb0 FUN_144b14eb0 body=1624 status=ok
// SIG undefined FUN_144b14eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b14eb0(longlong param_1,longlong param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_148 [40];
  int local_120;
  int local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  lVar19 = DAT_14ca94dc8;
  param_3[3] = 0.0;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 600) == 0)) {
    param_3[0x4e] = 0.0;
    goto LAB_144b14f3a;
  }
  dVar1 = *(double *)(param_1 + 0x1030);
  dVar2 = *(double *)(param_1 + 0x1038);
  dVar3 = *(double *)(param_1 + 0x1040);
  dVar4 = *(double *)(param_2 + 0x58);
  dVar5 = *(double *)(param_2 + 0x50);
  dVar6 = *(double *)(param_2 + 0x40);
  dVar7 = *(double *)(param_2 + 0x48);
  *param_3 = (float)dVar6;
  param_3[1] = (float)dVar7;
  param_3[2] = (float)dVar5;
  param_3[3] = (float)((dVar4 * dVar5 + dVar3) * dVar5 +
                      (dVar4 * dVar6 + dVar1) * dVar6 + (dVar4 * dVar7 + dVar2) * dVar7);
  lVar19 = *(longlong *)(param_2 + 600);
  (**(code **)(*(longlong *)(lVar19 + 0x48) + 0x28))(lVar19 + 0x48,&local_120);
  uVar22 = 0;
  uVar23 = 0x3ff00000;
  dVar4 = 1.0 - 1.0 / (double)(*(int *)(param_2 + 0x20c) - *(int *)(param_2 + 0x204));
  dVar5 = 1.0 - 1.0 / (double)(*(int *)(param_2 + 0x208) - *(int *)(param_2 + 0x200));
  uVar8 = *(uint *)(*(longlong *)(param_1 + 8) + 0x10);
  if (uVar8 == 1) {
    uVar24 = uVar22;
    uVar25 = uVar23;
    if (*(int *)(param_2 + 0x20c) != local_11c ||
        (*(int *)(param_2 + 0x208) != local_120 ||
        (*(int *)(param_2 + 0x204) != DAT_14c967818._4_4_ ||
        *(int *)(param_2 + 0x200) != (int)DAT_14c967818))) {
      uVar22 = SUB84(dVar5,0);
      uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
      uVar24 = SUB84(dVar4,0);
      uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
    dVar4 = (double)CONCAT44(uVar25,uVar24);
    dVar5 = (double)CONCAT44(uVar23,uVar22);
LAB_144b15137:
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    uVar14 = 2;
    if (uVar8 < 2) {
      uVar14 = uVar8;
    }
    uVar15 = 0;
    do {
      uVar9 = *(undefined8 *)(param_2 + 0x200 + uVar15);
      uVar10 = *(undefined8 *)(param_2 + 0x208 + uVar15);
      iVar17 = (int)uVar9;
      iVar18 = (int)((ulonglong)uVar9 >> 0x20);
      fVar26 = (float)((int)((ulonglong)uVar10 >> 0x20) - iVar18);
      fVar27 = (float)((int)uVar10 - iVar17);
      *(float *)((longlong)&local_d8 + uVar15) = (1.0 / (float)local_120) * fVar27 * 0.5;
      *(float *)((longlong)&local_d8 + uVar15 + 4) = fVar26 * (1.0 / (float)local_11c) * -0.5;
      *(float *)((longlong)&uStack_d0 + uVar15) =
           ((float)iVar17 + fVar27 * 0.5) * (1.0 / (float)local_120);
      *(float *)((longlong)&uStack_d0 + uVar15 + 4) =
           ((float)iVar18 + fVar26 * 0.5) * (1.0 / (float)local_11c);
      uVar15 = uVar15 + 0x10;
    } while (uVar14 << 4 != uVar15);
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    if (0 < (int)uVar8) goto LAB_144b15137;
  }
  dVar6 = *(double *)(param_2 + 0x70);
  dVar7 = *(double *)(param_2 + 0x68);
  param_3[4] = (float)(dVar1 + *(double *)(param_2 + 0x60));
  param_3[5] = (float)(dVar2 + dVar7);
  param_3[6] = (float)(dVar3 + dVar6);
  param_3[7] = 1.0;
  dVar1 = *(double *)(param_2 + 0x98);
  dVar2 = *(double *)(param_2 + 0x90);
  dVar3 = *(double *)(param_2 + 0x88);
  param_3[8] = (float)*(double *)(param_2 + 0x80);
  param_3[9] = (float)dVar3;
  param_3[10] = (float)dVar2;
  param_3[0xb] = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0xb8);
  dVar2 = *(double *)(param_2 + 0xb0);
  dVar3 = *(double *)(param_2 + 0xa8);
  param_3[0xc] = (float)*(double *)(param_2 + 0xa0);
  param_3[0xd] = (float)dVar3;
  param_3[0xe] = (float)dVar2;
  param_3[0xf] = (float)dVar1;
  uVar9 = *(undefined8 *)(param_2 + 0x228);
  uVar10 = *(undefined8 *)(param_2 + 0x230);
  uVar11 = *(undefined8 *)(param_2 + 0x238);
  uVar12 = *(undefined8 *)(param_2 + 0x240);
  uVar13 = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x220);
  *(undefined8 *)(param_3 + 0x12) = uVar9;
  *(undefined8 *)(param_3 + 0x14) = uVar10;
  *(undefined8 *)(param_3 + 0x16) = uVar11;
  *(undefined8 *)(param_3 + 0x18) = uVar12;
  *(undefined8 *)(param_3 + 0x1a) = uVar13;
  dVar1 = *(double *)(param_2 + 0xd0);
  dVar2 = *(double *)(param_2 + 200);
  param_3[0x1c] = (float)*(double *)(param_2 + 0xc0);
  param_3[0x1d] = (float)dVar2;
  param_3[0x1e] = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0xe0);
  param_3[0x20] = (float)*(double *)(param_2 + 0xd8);
  param_3[0x21] = (float)dVar1;
  param_3[0x4e] = (float)(uint)*(byte *)(param_2 + 0x38);
  param_3[0x4c] = (float)dVar5;
  param_3[0x4d] = (float)dVar4;
  if (*(char *)(param_2 + 0x38) == '\0') {
    uVar8 = *(uint *)(*(longlong *)(param_1 + 8) + 0x10);
    if ((ulonglong)uVar8 == 1) goto LAB_144b1538c;
    if (0 < (int)uVar8) {
      uVar15 = 0;
      do {
        if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + uVar15 * 8) == param_1)
        goto LAB_144b15465;
        uVar15 = uVar15 + 1;
      } while (uVar8 != uVar15);
    }
    uVar15 = 0;
LAB_144b15465:
    uVar16 = 1;
    if ((int)uVar15 < 1) {
      uVar16 = uVar15 & 0xffffffff;
    }
    FUN_144a928e2(&local_118,param_2 + uVar16 * 0x80 + 0x100);
    param_3[0x30] = local_e8;
    param_3[0x31] = fStack_e4;
    param_3[0x32] = fStack_e0;
    param_3[0x33] = fStack_dc;
    param_3[0x2c] = local_f8;
    param_3[0x2d] = fStack_f4;
    param_3[0x2e] = fStack_f0;
    param_3[0x2f] = fStack_ec;
    param_3[0x28] = local_108;
    param_3[0x29] = fStack_104;
    param_3[0x2a] = fStack_100;
    param_3[0x2b] = fStack_fc;
    *(ulonglong *)(param_3 + 0x24) = CONCAT44(fStack_114,local_118);
    *(ulonglong *)(param_3 + 0x26) = CONCAT44(fStack_10c,fStack_110);
    uVar9 = _DAT_14c846288;
    *(undefined8 *)(param_3 + 0x40) = _DAT_14c846280;
    *(undefined8 *)(param_3 + 0x42) = uVar9;
    uVar9 = _DAT_14c846278;
    *(undefined8 *)(param_3 + 0x3c) = _DAT_14c846270;
    *(undefined8 *)(param_3 + 0x3e) = uVar9;
    uVar9 = _DAT_14c846268;
    *(undefined8 *)(param_3 + 0x38) = _DAT_14c846260;
    *(undefined8 *)(param_3 + 0x3a) = uVar9;
    uVar9 = DAT_14c846258;
    *(undefined8 *)(param_3 + 0x34) = _DAT_14c846250;
    *(undefined8 *)(param_3 + 0x36) = uVar9;
    uVar9 = (&uStack_d0)[uVar16 * 2];
    *(undefined8 *)(param_3 + 0x44) = (&local_d8)[uVar16 * 2];
    *(undefined8 *)(param_3 + 0x46) = uVar9;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  else {
LAB_144b1538c:
    FUN_144a928e2(&local_118,param_2 + 0x100);
    param_3[0x24] = local_118;
    param_3[0x25] = fStack_114;
    param_3[0x26] = fStack_110;
    param_3[0x27] = fStack_10c;
    param_3[0x28] = local_108;
    param_3[0x29] = fStack_104;
    param_3[0x2a] = fStack_100;
    param_3[0x2b] = fStack_fc;
    param_3[0x2c] = local_f8;
    param_3[0x2d] = fStack_f4;
    param_3[0x2e] = fStack_f0;
    param_3[0x2f] = fStack_ec;
    param_3[0x30] = local_e8;
    param_3[0x31] = fStack_e4;
    param_3[0x32] = fStack_e0;
    param_3[0x33] = fStack_dc;
    FUN_144a928e2(&local_118,param_2 + 0x180);
    param_3[0x40] = local_e8;
    param_3[0x41] = fStack_e4;
    param_3[0x42] = fStack_e0;
    param_3[0x43] = fStack_dc;
    param_3[0x3c] = local_f8;
    param_3[0x3d] = fStack_f4;
    param_3[0x3e] = fStack_f0;
    param_3[0x3f] = fStack_ec;
    param_3[0x38] = local_108;
    param_3[0x39] = fStack_104;
    param_3[0x3a] = fStack_100;
    param_3[0x3b] = fStack_fc;
    *(ulonglong *)(param_3 + 0x34) = CONCAT44(fStack_114,local_118);
    *(ulonglong *)(param_3 + 0x36) = CONCAT44(fStack_10c,fStack_110);
    *(undefined8 *)(param_3 + 0x44) = local_d8;
    *(undefined8 *)(param_3 + 0x46) = uStack_d0;
    fVar26 = (float)local_c8;
    fVar27 = local_c8._4_4_;
    fVar20 = (float)uStack_c0;
    fVar21 = uStack_c0._4_4_;
  }
  param_3[0x48] = fVar26;
  param_3[0x49] = fVar27;
  param_3[0x4a] = fVar20;
  param_3[0x4b] = fVar21;
LAB_144b14f3a:
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(lVar19 + 0x10);
  *(undefined8 *)(param_3 + 0x52) = *(undefined8 *)(lVar19 + 0x18);
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b1550a FUN_144b1550a body=297 status=ok
// SIG undefined FUN_144b1550a(void)

void FUN_144b1550a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  
  lVar6 = *(longlong *)(param_2 + 8);
  bVar9 = *(byte *)(lVar6 + 0x70) & 1;
  bVar5 = *(byte *)((longlong)param_1 + 0x44);
  *(byte *)((longlong)param_1 + 0x44) = bVar5 & 0xfe | bVar9;
  bVar10 = *(byte *)(lVar6 + 0x6d) >> 5 & 2;
  *(byte *)((longlong)param_1 + 0x44) = bVar5 & 0xfc | bVar9 | bVar10;
  bVar11 = *(byte *)(lVar6 + 0x70) >> 3 & 4;
  *(byte *)((longlong)param_1 + 0x44) = bVar5 & 0xf8 | bVar9 | bVar10 | bVar11;
  bVar12 = *(byte *)(lVar6 + 0x74) & 8;
  *(byte *)((longlong)param_1 + 0x44) = bVar5 & 0xf0 | bVar9 | bVar10 | bVar11 | bVar12;
  bVar13 = *(byte *)(lVar6 + 0x74) & 0x10;
  *(byte *)((longlong)param_1 + 0x44) = bVar5 & 0xe0 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13;
  bVar14 = (*(byte *)(lVar6 + 0x75) & 1) << 5;
  *(byte *)((longlong)param_1 + 0x44) =
       bVar5 & 0xc0 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14;
  bVar15 = *(char *)(lVar6 + 0x73) * '\x02' & 0x40;
  *(byte *)((longlong)param_1 + 0x44) =
       bVar5 & 0x80 | bVar9 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15;
  *(byte *)((longlong)param_1 + 0x44) =
       bVar9 | bVar10 | bVar11 | bVar12 | bVar13 | bVar14 | bVar15 |
       *(char *)(lVar6 + 0x73) * '\x02' & 0x80U;
  *param_1 = param_2;
  lVar6 = *(longlong *)(param_2 + 8);
  param_1[1] = lVar6;
  dVar1 = *(double *)(lVar6 + 0x1b0);
  dVar2 = *(double *)(lVar6 + 0x1a8);
  dVar3 = *(double *)(lVar6 + 0x1a0);
  dVar4 = *(double *)(lVar6 + 0x198);
  lVar7 = *(longlong *)(lVar6 + 0x180);
  lVar8 = *(longlong *)(lVar6 + 0x188);
  param_1[4] = *(longlong *)(lVar6 + 400);
  param_1[2] = lVar7;
  param_1[3] = lVar8;
  *(float *)(param_1 + 5) = (float)dVar4;
  *(float *)((longlong)param_1 + 0x2c) = (float)dVar3;
  *(float *)(param_1 + 6) = (float)dVar2;
  *(float *)((longlong)param_1 + 0x34) = (float)dVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x274);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x270);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x248);
  return;
}



// FUNCTION 144b15634 FUN_144b15634 body=527 status=ok
// SIG undefined FUN_144b15634(void)

void FUN_144b15634(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  uint *local_40;
  undefined8 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x73) & 8) == 0) goto LAB_144b15664;
    lVar3 = *(longlong *)(param_1 + 0x148);
    plVar1 = (longlong *)(lVar3 + 0x4e38);
    if (*(int *)(lVar3 + 0x4e40) != *(int *)(lVar3 + 0x4e6c)) {
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar5 = lVar3 + 0x4e70;
      if (*(longlong *)(lVar3 + 0x4e78) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x4e78);
      }
      uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x4e80) - 1U & uVar2) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar1 + (longlong)(int)uVar4 * 0x28);
          if (*puVar6 == uVar2) {
            if (puVar6 != (uint *)0x0) {
              puVar6 = puVar6 + 2;
              goto LAB_144b1582d;
            }
            break;
          }
          uVar4 = puVar6[8];
        } while (uVar4 != 0xffffffff);
      }
    }
    local_38 = &local_58;
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    local_40 = (uint *)(param_1 + 0x10);
    FUN_1472afe06(plVar1,&local_2c);
    lVar3 = *plVar1;
    if (lStack_50 != 0) {
      FUN_1400020a8();
    }
    puVar6 = (uint *)(lVar3 + (longlong)local_2c * 0x28 + 8);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x148);
    plVar1 = (longlong *)(lVar3 + 0x4e38);
    if (*(int *)(lVar3 + 0x4e40) != *(int *)(lVar3 + 0x4e6c)) {
      lVar5 = lVar3 + 0x4e70;
      if (*(longlong *)(lVar3 + 0x4e78) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x4e78);
      }
      uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x4e80) - 1U & uVar2) * 4);
      if (uVar4 != 0xffffffff) {
        do {
          puVar6 = (uint *)(*plVar1 + (longlong)(int)uVar4 * 0x28);
          if (*puVar6 == uVar2) {
            if (puVar6 != (uint *)0x0) goto LAB_144b15809;
            break;
          }
          uVar4 = puVar6[8];
        } while (uVar4 != 0xffffffff);
      }
    }
    local_40 = (uint *)(param_1 + 0x18);
    local_38 = &local_58;
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    FUN_1472afe06(plVar1,&local_2c);
    lVar3 = *plVar1;
    if (lStack_50 != 0) {
      FUN_1400020a8();
    }
    puVar6 = (uint *)(lVar3 + (longlong)local_2c * 0x28);
LAB_144b15809:
    uVar2 = puVar6[6];
    puVar6[6] = uVar2 + 1;
    if (puVar6[7] < uVar2 + 1) {
      FUN_141762202(puVar6 + 4,uVar2);
    }
    puVar6 = (uint *)((longlong)(int)uVar2 * 8 + *(longlong *)(puVar6 + 4));
  }
LAB_144b1582d:
  *(longlong *)puVar6 = param_1;
LAB_144b15664:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b15844 FUN_144b15844 body=423 status=ok
// SIG undefined FUN_144b15844(void)

void FUN_144b15844(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x73) & 8) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x148), *(int *)(lVar1 + 0x4e40) != *(int *)(lVar1 + 0x4e6c)
       )) {
      lVar4 = lVar1 + 0x4e70;
      if (*(longlong *)(lVar1 + 0x4e78) != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x4e78);
      }
      uVar2 = *(uint *)(lVar4 + (ulonglong)
                                (*(int *)(lVar1 + 0x4e80) - 1U & *(uint *)(param_1 + 0x10)) * 4);
      if (uVar2 != 0xffffffff) {
        do {
          puVar5 = (uint *)(*(longlong *)(lVar1 + 0x4e38) + (longlong)(int)uVar2 * 0x28);
          if (*puVar5 == *(uint *)(param_1 + 0x10)) {
            if ((((ulonglong)(puVar5 + 2) & 0xfffffffffffffff7) != 0) &&
               (puVar5[2] = 0, puVar5[3] = 0, puVar5[6] == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
            }
            break;
          }
          uVar2 = puVar5[8];
        } while (uVar2 != 0xffffffff);
      }
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x148);
    if (*(int *)(lVar1 + 0x4e40) != *(int *)(lVar1 + 0x4e6c)) {
      lVar4 = lVar1 + 0x4e70;
      if (*(longlong *)(lVar1 + 0x4e78) != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x4e78);
      }
      uVar3 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x4e80) - 1U & uVar2) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar5 = (uint *)(*(longlong *)(lVar1 + 0x4e38) + (longlong)(int)uVar3 * 0x28);
          if (*puVar5 == uVar2) goto LAB_144b158d7;
          uVar3 = puVar5[8];
        } while (uVar3 != 0xffffffff);
      }
    }
    puVar5 = (uint *)0x0;
LAB_144b158d7:
    local_28 = param_1;
    FUN_1472ab208(puVar5 + 4,&local_28,1);
    if ((puVar5[6] == 0) && (*(longlong *)(puVar5 + 2) == 0)) {
      FUN_1472b02e0(*(longlong *)(param_1 + 0x148) + 0x4e38,param_1 + 0x18);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b159fe FUN_144b159fe body=61 status=ok
// SIG undefined FUN_144b159fe(void)

void FUN_144b159fe(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 2) = 0;
    *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & 0x80 | 0x3a;
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) & 0xffffffc0 | 0x1b;
    *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) & 0xc0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 144b15a3c FUN_144b15a3c body=114 status=ok
// SIG undefined FUN_144b15a3c(void)

undefined4 * FUN_144b15a3c(longlong *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(code **)(*param_1 + 8) == FUN_1447d3e98) {
    param_1 = param_1 + 4;
  }
  else {
    param_1 = (longlong *)(**(code **)(*param_1 + 8))();
  }
  uVar1 = 1;
  switch(*(undefined1 *)((longlong)param_1 + 0x32)) {
  case 0:
  case 3:
    break;
  case 1:
  case 4:
    uVar1 = *(ushort *)((longlong)param_1 + 0x2e);
    break;
  case 2:
    uVar1 = *(ushort *)((longlong)param_1 + 0x2c);
    break;
  default:
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_144b15a82;
  }
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar3 = (undefined4)param_1[5];
  uVar2 = (uint)uVar1;
LAB_144b15a82:
  *param_2 = uVar4;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



// FUNCTION 144b15ab4 FUN_144b15ab4 body=638 status=ok
// SIG undefined FUN_144b15ab4(void)

longlong FUN_144b15ab4(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_60;
  
  iVar13 = *(int *)(param_1 + 0x4be0);
  if (iVar13 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x4bd8);
    if (*(uint **)(param_1 + 0x4bd8) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x4bc8);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar4 = iVar13 + -1;
      }
      uVar17 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar17 = 0;
      }
      uVar16 = 0;
      iVar11 = 0;
      do {
        if (uVar17 == uVar16) {
          return 0;
        }
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar17 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar4) {
      iVar4 = iVar13;
    }
  }
  if (iVar4 < iVar13) {
    uVar14 = 0xffffffff;
    lVar3 = 0;
    do {
      lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x4bb8) + 0x10 + (longlong)iVar4 * 0x20);
      if (lVar12 != 0) {
        lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x4bb8) + 8 + (longlong)iVar4 * 0x20);
        lVar12 = lVar12 * 0x430 + lVar15;
        do {
          plVar9 = *(longlong **)(lVar15 + 0x3d0);
          if (plVar9 == (longlong *)0x0) {
            if (0 < *(int *)(lVar15 + 0x3c8)) {
LAB_144b15c86:
              lVar10 = 0;
              local_60 = 0;
              do {
                lVar2 = *(longlong *)(lVar15 + 0x3c0);
                if (*(longlong *)(lVar15 + 0x3c0) == 0) {
                  lVar2 = lVar15 + 0x3a0;
                }
                uVar5 = (**(code **)(**(longlong **)(lVar2 + lVar10 * 8) + 0x18))();
                local_60 = local_60 + (ulonglong)uVar5;
                lVar10 = lVar10 + 1;
              } while (lVar10 < *(int *)(lVar15 + 0x3c8));
              plVar9 = *(longlong **)(lVar15 + 0x3d0);
              if (plVar9 != (longlong *)0x0) goto LAB_144b15ceb;
              goto LAB_144b15cf8;
            }
          }
          else {
            if (0 < *(int *)(lVar15 + 0x3c8)) goto LAB_144b15c86;
            local_60 = 0;
LAB_144b15ceb:
            uVar5 = (**(code **)(*plVar9 + 0x18))();
            local_60 = local_60 + (ulonglong)uVar5;
LAB_144b15cf8:
            lVar3 = lVar3 + local_60;
          }
          lVar15 = lVar15 + 0x430;
        } while (lVar15 != lVar12);
        iVar13 = *(int *)(param_1 + 0x4be0);
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar8 = *(uint **)(param_1 + 0x4bd8);
      if (*(uint **)(param_1 + 0x4bd8) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x4bc8);
      }
      iVar4 = (int)uVar16;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar6 = iVar13 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) {
          return lVar3;
        }
        lVar15 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar15 + 1];
          if (uVar5 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar7 - lVar12 == lVar15) {
            return lVar3;
          }
        }
        uVar16 = (ulonglong)(iVar4 + (int)lVar15 + 1);
        uVar14 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar17 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar13);
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 144b15d32 FUN_144b15d32 body=50 status=ok
// SIG undefined FUN_144b15d32(void)

undefined8 FUN_144b15d32(longlong param_1)

{
  undefined7 uVar2;
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x3c8) < 1) {
    uVar1 = 0;
  }
  else {
    uVar2 = (undefined7)((ulonglong)*(longlong *)(param_1 + 0x380) >> 8);
    if (*(int *)(*(longlong *)(param_1 + 0x380) + 8) < 3) {
      uVar1 = CONCAT71(uVar2,0 < *(int *)(param_1 + 0xb8));
    }
    else {
      uVar1 = CONCAT71(uVar2,*(longlong *)(param_1 + 200) != 0);
    }
  }
  return uVar1;
}



// FUNCTION 144b15d64 FUN_144b15d64 body=78 status=ok
// SIG undefined FUN_144b15d64(void)

ulonglong FUN_144b15d64(ushort param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (*(int *)(DAT_14ca433c0 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    bVar1 = (byte)(param_1 >> 8);
    uVar2 = CONCAT71((uint7)bVar1,1);
    if (((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) &&
       ((DAT_14ca09708 != 0 || ((0 < DAT_14c760e10 && (DAT_14ca964dd != '\0')))))) {
      uVar2 = (ulonglong)CONCAT11(bVar1,DAT_14ca964dc);
    }
  }
  return uVar2;
}



// FUNCTION 144b15df2 FUN_144b15df2 body=43 status=ok
// SIG undefined FUN_144b15df2(void)

void FUN_144b15df2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1472cea34(param_1);
    param_1 = param_1 + 0x240;
  }
  return;
}



// FUNCTION 144b15e2a FUN_144b15e2a body=298 status=ok
// SIG undefined FUN_144b15e2a(void)

void FUN_144b15e2a(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar6 = (uint *)(param_1 + 1);
  if ((uint *)param_1[2] != (uint *)0x0) {
    puVar6 = (uint *)param_1[2];
  }
  if ((longlong)(int)param_1[3] != 0) {
    puVar1 = puVar6 + (int)param_1[3];
    do {
      lVar3 = *param_1;
      if (*(int *)(lVar3 + 0x3af0) != *(int *)(lVar3 + 0x3b1c)) {
        lVar4 = lVar3 + 0x3b20;
        if (*(longlong *)(lVar3 + 0x3b28) != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x3b28);
        }
        iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x3b30) - 1U & *puVar6) * 4);
        if (iVar2 != -1) {
          lVar4 = *(longlong *)(lVar3 + 0x3ae8);
          do {
            lVar5 = (longlong)iVar2;
            if (*(uint *)(lVar4 + lVar5 * 0x18) == *puVar6) {
              lVar4 = *(longlong *)(lVar4 + 8 + lVar5 * 0x18);
              FUN_1471ceb3a();
              if ((((-1 < *(int *)(lVar4 + 0x60)) && (-1 < *(int *)(lVar4 + 100))) &&
                  (-1 < *(int *)(lVar4 + 0x68))) && (0 < *(int *)(lVar4 + 0x6c))) {
                local_38 = *(undefined4 *)(lVar4 + 0x68);
                local_40 = *(undefined8 *)(lVar4 + 0x60);
                FUN_1471bacf2(lVar3 + 0x3930);
              }
              if (lVar4 != 0) {
                FUN_1400020a8(lVar4);
              }
              break;
            }
            iVar2 = *(int *)(lVar4 + lVar5 * 0x18 + 0x10);
          } while (iVar2 != -1);
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b15f5c FUN_144b15f5c body=815 status=ok
// SIG undefined FUN_144b15f5c(void)

undefined4 * FUN_144b15f5c(undefined4 *param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  longlong lVar15;
  int *piVar16;
  int *piVar17;
  ulonglong uVar18;
  bool bVar19;
  
  *param_1 = 0x1000100;
  pbVar1 = (byte *)((longlong)param_1 + 1);
  pcVar2 = (char *)((longlong)param_1 + 2);
  puVar3 = (undefined1 *)((longlong)param_1 + 3);
  pcVar4 = (char *)(param_1 + 1);
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  plVar9 = *(longlong **)(param_3 + 8);
  pcVar10 = *(code **)(*plVar9 + 0xd8);
  if (pcVar10 == (code *)&LAB_144b0d244) {
    *pcVar2 = '\x01';
    *puVar3 = 0;
    *pcVar4 = '\0';
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x28);
    if (pcVar10 == FUN_144b26c6c) {
      bVar13 = *(byte *)(lVar11 + 0x1d0);
      if (*(char *)((longlong)plVar9 + 0x2d1) == '\x01') {
        bVar14 = 1;
        if ((bVar13 & 4) == 0) {
          bVar19 = (bVar13 & 8) == 0;
LAB_144b1612a:
          bVar14 = bVar19 + 3;
        }
      }
      else {
        if ((bVar13 & 8) != 0) {
          iVar5 = *(int *)(lVar11 + 0x17c);
          iVar6 = *(int *)(lVar11 + 0x180);
          iVar7 = *(int *)(lVar11 + 0x184);
          iVar8 = *(int *)(lVar11 + 0x188);
          if ((longlong)(int)plVar9[0x60] != 0) {
            piVar17 = (int *)plVar9[0x5f];
            piVar16 = piVar17 + (longlong)(int)plVar9[0x60] * 4;
            do {
              if ((((*piVar17 == iVar5) && (piVar17[1] == iVar6)) && (piVar17[2] == iVar7)) &&
                 (piVar17[3] == iVar8)) {
                bVar14 = 0;
                goto LAB_144b1608f;
              }
              piVar17 = piVar17 + 4;
            } while (piVar17 != piVar16);
          }
          lVar11 = plVar9[0x5b];
          if ((lVar11 != 0) && ((longlong)*(int *)(lVar11 + 0x10) != 0)) {
            lVar12 = *(longlong *)(lVar11 + 8);
            uVar18 = 0;
            do {
              if (((*(int *)(lVar12 + uVar18) == iVar5) && (*(int *)(lVar12 + 4 + uVar18) == iVar6))
                 && ((*(int *)(lVar12 + 8 + uVar18) == iVar7 &&
                     (*(int *)(lVar12 + 0xc + uVar18) == iVar8)))) {
                bVar14 = 1;
                if ((int)(~uVar18 >> 4) != 0) goto LAB_144b1608f;
                break;
              }
              lVar15 = lVar12 + uVar18;
              uVar18 = uVar18 + 0x10;
            } while (lVar15 + 0x10 != (longlong)*(int *)(lVar11 + 0x10) * 0x10 + lVar12);
          }
          lVar11 = plVar9[0x5c];
          if ((lVar11 != 0) && ((longlong)*(int *)(lVar11 + 0x10) != 0)) {
            lVar12 = *(longlong *)(lVar11 + 8);
            uVar18 = 0;
            do {
              if ((((*(int *)(lVar12 + uVar18) == iVar5) && (*(int *)(lVar12 + 4 + uVar18) == iVar6)
                   ) && (*(int *)(lVar12 + 8 + uVar18) == iVar7)) &&
                 (*(int *)(lVar12 + 0xc + uVar18) == iVar8)) {
                bVar19 = (~uVar18 & 0xffffffff0) == 0;
                goto LAB_144b1612a;
              }
              lVar15 = uVar18 + lVar12;
              uVar18 = uVar18 + 0x10;
            } while (lVar15 + 0x10 != (longlong)*(int *)(lVar11 + 0x10) * 0x10 + lVar12);
          }
        }
        bVar14 = 4;
      }
LAB_144b1608f:
      bVar13 = 2;
      if (bVar14 != 4) {
        bVar13 = bVar14;
      }
      *pcVar2 = bVar13 != 0;
      *pbVar1 = bVar14 == 4;
      *puVar3 = bVar13 < 2;
      *pcVar4 = bVar13 == 3;
    }
    else {
      (*pcVar10)(plVar9,lVar11,pbVar1,pcVar2,puVar3,pcVar4);
    }
  }
  bVar13 = 0;
  if ((*(int *)(*(longlong *)(param_3 + 0x148) + 8) < 3) && (bVar13 = 0, *pcVar4 == '\x01')) {
    bVar13 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x40))();
  }
  bVar14 = *pbVar1;
  *pbVar1 = bVar14 | bVar13;
  if ((*pcVar2 == '\x01') && ((bVar14 | bVar13) != 0)) {
    lVar11 = *(longlong *)(param_2 + 0x28);
    if (((*(byte *)(lVar11 + 0x1d0) & 8) == 0) ||
       (((*(byte *)(*(longlong *)(param_3 + 8) + 0x6d) & 0x40) == 0 ||
        ((*(byte *)(*(longlong *)(param_3 + 8) + 0x6f) & 0x40) != 0)))) {
      if ((*(byte *)(lVar11 + 0x1d0) & 0x40) == 0) {
        bVar13 = 0;
      }
      else {
        bVar13 = *(byte *)(*(longlong *)(param_3 + 8) + 0x72) & 1;
      }
      *(byte *)((longlong)param_1 + 5) = bVar13;
      if (*(char *)(lVar11 + 0x1e8) == '\0') {
        bVar14 = *(byte *)(*(longlong *)(param_3 + 8) + 0x73) & 1;
      }
      else {
        bVar14 = 0;
      }
      *(byte *)((longlong)param_1 + 6) = bVar14;
      if ((((*(char *)(lVar11 + 0x1e8) != '\0') || ((*(byte *)(lVar11 + 0x1d0) & 8) != 0)) ||
          (bVar13 != 0)) || (bVar14 != 0)) {
        *(undefined1 *)param_1 = 1;
      }
    }
  }
  return param_1;
}



// FUNCTION 144b1628c FUN_144b1628c body=877 status=ok
// SIG undefined FUN_144b1628c(void)

undefined8 * FUN_144b1628c(undefined8 *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)param_2 + 0x344);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x348);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_2 + 0x34c);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x350);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 800);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x33c);
  param_1[9] = *(undefined8 *)((longlong)param_2 + 0x334);
  param_1[10] = uVar6;
  *(float *)(param_1 + 1) = (float)*(double *)((longlong)param_2 + 0x270);
  *(float *)((longlong)param_1 + 0x14) =
       (float)((double)*(float *)((longlong)param_2 + 0x2c0) +
              *(double *)((longlong)param_2 + 0x270));
  *(float *)((longlong)param_1 + 0xc) = *(float *)((longlong)param_2 + 0x2a8) / 1000.0;
  *(float *)(param_1 + 2) = *(float *)((longlong)param_2 + 0x2b4) / 1000.0;
  *(float *)(param_1 + 3) = *(float *)((longlong)param_2 + 0x2b8) / 1000.0;
  *(float *)((longlong)param_1 + 0x1c) = *(float *)((longlong)param_2 + 700) / 1000.0;
  puVar10 = (undefined8 *)((longlong)param_2 + 0x304);
  if (*(longlong *)((longlong)param_2 + 0x2f8) == 0) {
    puVar10 = (undefined8 *)((longlong)param_2 + 0x2d4);
  }
  uVar6 = puVar10[1];
  param_1[6] = *puVar10;
  param_1[7] = uVar6;
  param_1[0xb] = *(undefined8 *)((longlong)param_2 + 0x2f8);
  *(float *)(param_1 + 0xc) = *(float *)((longlong)param_2 + 0x300) * 0.017453292;
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 0x314);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)((longlong)param_2 + 0x318);
  *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)((longlong)param_2 + 0x354);
  fVar12 = *(float *)((longlong)param_2 + 0x358);
  if (0.99 <= fVar12) {
    fVar12 = 0.99;
  }
  if (fVar12 <= -0.99) {
    fVar12 = -0.99;
  }
  *(float *)(param_1 + 0xe) = fVar12;
  uVar1 = (&DAT_14c758c60)[*(byte *)((longlong)param_2 + 0x35d)];
  bVar3 = *(byte *)((longlong)param_2 + 0x35f);
  uVar2 = (&DAT_14c758c60)[*(byte *)((longlong)param_2 + 0x35c)];
  *(undefined4 *)((longlong)param_1 + 0x74) = (&DAT_14c758c60)[*(byte *)((longlong)param_2 + 0x35e)]
  ;
  *(undefined4 *)(param_1 + 0xf) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  *(float *)(param_1 + 0x10) = (float)bVar3 * 0.003921569;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x364);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x368);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x36c);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x360);
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  lVar7 = DAT_14ca973d0;
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
    uVar11 = 0;
  }
  else if (iVar4 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar11 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar11 = 1;
  }
  fVar12 = *(float *)(&DAT_14a249298 + (ulonglong)(0 < *(int *)(lVar7 + uVar11 * 4)) * 4);
  fVar13 = *(float *)((longlong)param_1 + 0x84) * fVar12;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x84) = fVar13;
  fVar13 = *(float *)(param_1 + 0x11) * fVar12;
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(param_1 + 0x11) = fVar13;
  fVar12 = fVar12 * *(float *)((longlong)param_1 + 0x8c);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x8c) = fVar12;
  fVar12 = *(float *)((longlong)param_2 + 0x370);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x94) = fVar12;
  fVar12 = *(float *)((longlong)param_2 + 0x378) + *(float *)((longlong)param_2 + 0x374);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x13) = fVar12;
  fVar12 = *(float *)((longlong)param_2 + 0x380);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x9c) = fVar12;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 900);
  *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_2 + 0x385) & 1;
  *(byte *)((longlong)param_1 + 0xa2) = *(byte *)((longlong)param_2 + 0x385) >> 1 & 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x378);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)((longlong)param_2 + 0x37c);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x2ec);
  *(undefined8 *)((longlong)param_1 + 0xac) = *(undefined8 *)((longlong)param_2 + 0x2e4);
  *(undefined8 *)((longlong)param_1 + 0xb4) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)((longlong)param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x2b0);
  memcpy((void *)((longlong)param_1 + 0xc4),param_2,0x390);
  return param_1;
}



// FUNCTION 144b165f9 FUN_144b165f9 body=109 status=ok
// SIG undefined FUN_144b165f9(void)

undefined8 FUN_144b165f9(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca460a8;
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
  return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar6 * 4));
}



// FUNCTION 144b16666 FUN_144b16666 body=127 status=ok
// SIG undefined FUN_144b16666(void)

void FUN_144b16666(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(longlong *)(param_1 + 8) + 0x110);
  fVar1 = (float)(*(int *)(param_1 + 0x4e4) - *(int *)(param_1 + 0x4dc)) * fVar2 *
          *(float *)(param_1 + 0x45c);
  fVar2 = (float)(*(int *)(param_1 + 0x4e0) - *(int *)(param_1 + 0x4d8)) * fVar2 *
          *(float *)(param_1 + 0x45c);
  *param_2 = -((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  param_2[1] = -((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1);
  return;
}



// FUNCTION 144b166e6 FUN_144b166e6 body=296 status=ok
// SIG undefined FUN_144b166e6(void)

void FUN_144b166e6(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined4 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0x100000000;
  local_48 = &DAT_14ca44d88;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar2 = 0;
  if (DAT_14ca44da0 != 0) {
    FUN_1449c0562(&local_50);
    iVar2 = DAT_14ca44da0;
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = &DAT_14ca44d78;
  if ((iStack_3c != iVar2) || (local_48 != &DAT_14ca44d88)) {
    do {
      do {
        plVar1 = *(longlong **)(*local_78 + (longlong)iStack_5c * 0x10);
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,1);
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar2);
    } while ((local_68 != &DAT_14ca44d88) || (local_78 != &DAT_14ca44d78));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b16810 FUN_144b16810 body=185 status=ok
// SIG undefined FUN_144b16810(void)

undefined8 FUN_144b16810(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 1000) + 0x23e8) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x16c);
    if (iVar2 == 4) {
      if (DAT_14ca46038 != 0) {
        return 0;
      }
    }
    else {
      if ((iVar2 == 5) && (DAT_14ca46038 != 0)) {
        return 0;
      }
      if (((iVar2 == 7) || (iVar2 == 6)) && (DAT_14ca46050 != 0)) {
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2)
        ;
        puVar3 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar3 = DAT_14ca96af8;
        }
        if (((((uint)puVar3[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
            ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3)) &&
           ((*(byte *)(param_1 + 0xf8) & 2) == 0)) {
          return 1;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 144b1698e FUN_144b1698e body=159 status=ok
// SIG undefined FUN_144b1698e(void)

void FUN_144b1698e(longlong *param_1,int *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar3 = param_1 + 0xb;
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0xc];
  }
  do {
    if (*(uint *)((longlong)plVar3 + (longlong)(int)uVar4 * 4) == param_3) {
      plVar6 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar6 = param_1 + 8;
      }
      iVar2 = *(int *)((longlong)plVar6 + (longlong)(int)uVar4 * 4);
      if ((((*param_4 == *(int *)(*param_1 + (longlong)iVar2 * 0x20)) &&
           (lVar5 = *param_1 + (longlong)iVar2 * 0x20, param_4[1] == *(int *)(lVar5 + 4))) &&
          (param_4[2] == *(int *)(lVar5 + 8))) && (param_4[3] == *(int *)(lVar5 + 0xc)))
      goto LAB_144b16a1b;
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  iVar2 = -1;
LAB_144b16a1b:
  *param_2 = iVar2;
  return;
}



// FUNCTION 144b16a2e FUN_144b16a2e body=105 status=ok
// SIG undefined FUN_144b16a2e(void)

void FUN_144b16a2e(longlong *param_1,uint param_2)

{
  uint *puVar1;
  void *_Dst;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + (longlong)(int)param_2 * 8);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar5) << 3);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 144b16a9e FUN_144b16a9e body=25 status=ok
// SIG undefined FUN_144b16a9e(void)

void FUN_144b16a9e(longlong *param_1)

{
  if (*(code **)(*param_1 + 0x18) == FUN_1472dfaae) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b16ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144b16ab8 FUN_144b16ab8 body=495 status=ok
// SIG undefined FUN_144b16ab8(void)

uint FUN_144b16ab8(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  int aiStack_c8 [2];
  undefined8 local_c0;
  undefined4 local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined2 *)(puVar2 + 1) = 0xffff;
  *(undefined1 *)((longlong)puVar2 + 10) = 0;
  if ((*(byte *)(param_1 + 0x188) & 2) == 0) {
    cVar4 = FUN_140052d29(*(undefined2 *)(param_1 + 0x1c));
    uVar5 = 1;
    if (cVar4 != '\0') {
      lVar6 = *param_2;
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x2f0);
      *(undefined2 *)(lVar6 + 0x18) = 0xffff;
      *(undefined1 *)(lVar6 + 0x1a) = 0;
      uVar5 = 2;
    }
  }
  else {
    lVar6 = (longlong)param_3 * 0x70;
    local_c0 = *(undefined8 *)(param_1 + 0x2a8);
    local_b8 = *(undefined4 *)(param_1 + 0xa8 + lVar6);
    local_b0 = L"GBufferB";
    local_a8 = *(undefined8 *)(param_1 + 0x2b0);
    local_a0 = *(undefined4 *)(param_1 + 0xb8 + lVar6);
    local_98 = L"GBufferC";
    local_90 = *(undefined8 *)(param_1 + 0x2b8);
    local_88 = *(undefined4 *)(param_1 + 200 + lVar6);
    local_80 = L"GBufferD";
    local_78 = *(undefined8 *)(param_1 + 0x2c0);
    local_70 = *(undefined4 *)(param_1 + 0xd8 + lVar6);
    local_68 = L"GBufferE";
    local_60 = *(undefined8 *)(param_1 + 0x2c8);
    local_58 = *(undefined4 *)(param_1 + 0xe8 + lVar6);
    local_50 = L"Velocity";
    local_48 = *(undefined8 *)(param_1 + 0x2f0);
    local_40 = *(undefined4 *)(param_1 + 0xf8 + lVar6);
    local_38 = L"InkMap";
    local_30 = *(undefined8 *)(param_1 + 0x2d8);
    local_28 = *(undefined4 *)(param_1 + 0x108 + lVar6);
    uVar5 = 1;
    lVar6 = 0x10;
    do {
      iVar1 = *(int *)((longlong)aiStack_c8 + lVar6);
      if (0 < (longlong)iVar1) {
        lVar3 = *param_2;
        lVar7 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar3 + lVar7) = *(undefined8 *)((longlong)&uStack_d0 + lVar6);
        *(undefined2 *)(lVar3 + 8 + lVar7) = 0xffff;
        *(undefined1 *)(lVar3 + 10 + lVar7) = 0;
        if (uVar5 < iVar1 + 1U) {
          uVar5 = iVar1 + 1U;
        }
      }
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0xb8);
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b16ca8 FUN_144b16ca8 body=410 status=ok
// SIG undefined FUN_144b16ca8(void)

ulonglong FUN_144b16ca8(longlong param_1,float param_2,float param_3,float param_4,longlong param_5,
                       byte *param_6,byte *param_7)

{
  char cVar1;
  byte bVar2;
  ulonglong unaff_RDI;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_14cb0cc0c;
  fVar5 = DAT_14c7609ec;
  if (DAT_14ca4b530 != 0) {
    fVar5 = 0.0;
  }
  *param_6 = 0;
  if ((((param_3 <= 0.0) && (param_4 == 3.4028235e+38)) && (!NAN(param_4))) ||
     (((*(byte *)(*(longlong *)(param_1 + 8) + 0x5b) & 4) != 0 &&
      (cVar1 = (**(code **)(**(longlong **)(param_5 + 8) + 0x180))(), cVar1 == '\0')))) {
    unaff_RDI = 0;
  }
  else {
    fVar3 = fVar6 * param_4;
    if (((param_4 == 3.4028235e+38) && (!NAN(param_4))) ||
       (unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1), param_2 <= (fVar3 + fVar5) * (fVar3 + fVar5)
       )) {
      if ((param_3 <= 0.0) || (fVar6 = fVar6 * param_3, fVar6 * fVar6 <= param_2)) {
        iVar4 = -(uint)(fVar3 * fVar3 < param_2 && param_4 != 3.4028235e+38);
        bVar2 = (byte)iVar4;
        if (((param_4 != 3.4028235e+38) || (NAN(param_4))) &&
           (((((fVar3 - fVar5) * (fVar3 - fVar5) < param_2 && (DAT_14ca4b530 == 0)) &&
             (*(longlong *)(param_1 + 0x10) != 0)) &&
            ((*(char *)(param_1 + 0x23fe) == '\0' &&
             (cVar1 = (**(code **)(**(longlong **)(param_5 + 8) + 0x150))(), cVar1 != '\0')))))) {
          *param_6 = 1;
          *param_7 = ~bVar2 & 1;
        }
        unaff_RDI = (ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),bVar2 & (*param_6 ^ 1));
      }
      else {
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      }
    }
  }
  return unaff_RDI & 0xffffff01;
}



// FUNCTION 144b16e42 FUN_144b16e42 body=31 status=ok
// SIG undefined FUN_144b16e42(void)

undefined8 FUN_144b16e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b16e62 FUN_144b16e62 body=145 status=ok
// SIG undefined FUN_144b16e62(void)

void FUN_144b16e62(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xf0);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x78);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xf0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xf0),param_1,(longlong)param_2 * 0x78);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xf0,param_2,param_3,param_4);
  return;
}



// FUNCTION 144b16ef4 FUN_144b16ef4 body=2897 status=ok
// SIG undefined FUN_144b16ef4(void)

void FUN_144b16ef4(longlong param_1)

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
  double dVar35;
  double dVar37;
  double dVar39;
  double dVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar98;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_150;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
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
  double dVar36;
  double dVar38;
  double dVar40;
  double dVar42;
  
  dVar83 = *(double *)(param_1 + 0x330);
  dVar84 = *(double *)(param_1 + 0x338);
  dVar85 = *(double *)(param_1 + 0x340);
  dVar86 = *(double *)(param_1 + 0x348);
  dVar87 = *(double *)(param_1 + 0x350);
  dVar88 = *(double *)(param_1 + 0x358);
  dVar89 = *(double *)(param_1 + 0x360);
  dVar90 = *(double *)(param_1 + 0x368);
  dVar91 = *(double *)(param_1 + 0x370);
  dVar92 = *(double *)(param_1 + 0x378);
  dVar93 = *(double *)(param_1 + 0x380);
  dVar94 = *(double *)(param_1 + 0x388);
  dVar95 = *(double *)(param_1 + 0x390);
  dVar96 = *(double *)(param_1 + 0x398);
  dVar97 = *(double *)(param_1 + 0x3a0);
  dVar98 = *(double *)(param_1 + 0x3a8);
  dVar1 = *(double *)(param_1 + 0x4b0);
  dVar2 = *(double *)(param_1 + 0x4b0);
  dVar3 = *(double *)(param_1 + 0x4b8);
  dVar4 = *(double *)(param_1 + 0x4b8);
  dVar5 = *(double *)(param_1 + 0x4c0);
  dVar6 = *(double *)(param_1 + 0x4c0);
  dVar7 = *(double *)(param_1 + 0x4c8);
  dVar8 = *(double *)(param_1 + 0x4c8);
  dVar46 = dVar95 * dVar7 + dVar91 * dVar5 + dVar87 * dVar3 + dVar83 * dVar1;
  dVar47 = dVar96 * dVar8 + dVar92 * dVar6 + dVar88 * dVar4 + dVar84 * dVar2;
  auVar43._8_4_ = SUB84(dVar47,0);
  auVar43._0_8_ = dVar46;
  auVar43._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  dVar81 = dVar8 * dVar98 + dVar6 * dVar94 + dVar4 * dVar90 + dVar2 * dVar86;
  dVar2 = *(double *)(param_1 + 0x4d0);
  dVar4 = *(double *)(param_1 + 0x4d0);
  dVar6 = *(double *)(param_1 + 0x4d8);
  dVar8 = *(double *)(param_1 + 0x4d8);
  dVar47 = *(double *)(param_1 + 0x4e0);
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
  dVar68 = dVar96 * dVar27 + dVar92 * dVar25 + dVar88 * dVar23 + dVar84 * dVar21;
  dVar21 = dVar27 * dVar98 + dVar25 * dVar94 + dVar23 * dVar90 + dVar21 * dVar86;
  uStack_220 = auVar43._8_8_;
  *(double *)(param_1 + 0x5b0) = dVar46;
  *(double *)(param_1 + 0x5b8) = uStack_220;
  auVar79._8_4_ = SUB84(dVar81,0);
  auVar79._0_8_ = dVar7 * dVar97 + dVar5 * dVar93 + dVar3 * dVar89 + dVar1 * dVar85;
  auVar79._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x5c0) = auVar79;
  *(double *)(param_1 + 0x5d0) = dVar95 * dVar10 + dVar91 * dVar47 + dVar87 * dVar6 + dVar83 * dVar2
  ;
  *(double *)(param_1 + 0x5d8) = dVar96 * dVar11 + dVar92 * dVar9 + dVar88 * dVar8 + dVar84 * dVar4;
  *(double *)(param_1 + 0x5e0) = dVar10 * dVar97 + dVar47 * dVar93 + dVar6 * dVar89 + dVar2 * dVar85
  ;
  *(double *)(param_1 + 0x5e8) = dVar11 * dVar98 + dVar9 * dVar94 + dVar8 * dVar90 + dVar4 * dVar86;
  *(double *)(param_1 + 0x5f0) =
       dVar95 * dVar18 + dVar91 * dVar16 + dVar87 * dVar14 + dVar83 * dVar12;
  *(double *)(param_1 + 0x5f8) =
       dVar96 * dVar19 + dVar92 * dVar17 + dVar88 * dVar15 + dVar84 * dVar13;
  *(double *)(param_1 + 0x600) =
       dVar18 * dVar97 + dVar16 * dVar93 + dVar14 * dVar89 + dVar12 * dVar85;
  *(double *)(param_1 + 0x608) =
       dVar19 * dVar98 + dVar17 * dVar94 + dVar15 * dVar90 + dVar13 * dVar86;
  auVar67._8_4_ = SUB84(dVar68,0);
  auVar67._0_8_ = dVar95 * dVar26 + dVar91 * dVar24 + dVar87 * dVar22 + dVar83 * dVar20;
  auVar67._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x610) = auVar67;
  auVar65._8_4_ = SUB84(dVar21,0);
  auVar65._0_8_ = dVar26 * dVar97 + dVar24 * dVar93 + dVar22 * dVar89 + dVar20 * dVar85;
  auVar65._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x620) = auVar65;
  dVar29 = *(double *)(param_1 + 0x530);
  dVar30 = *(double *)(param_1 + 0x538);
  dVar31 = *(double *)(param_1 + 0x540);
  dVar32 = *(double *)(param_1 + 0x548);
  dVar34 = *(double *)(param_1 + 0x550);
  dVar33 = *(double *)(param_1 + 0x558);
  dVar35 = *(double *)(param_1 + 0x560);
  dVar36 = *(double *)(param_1 + 0x568);
  dVar2 = *(double *)(param_1 + 0x430);
  dVar1 = *(double *)(param_1 + 0x430);
  dVar3 = *(double *)(param_1 + 0x438);
  dVar4 = *(double *)(param_1 + 0x438);
  dVar37 = *(double *)(param_1 + 0x570);
  dVar38 = *(double *)(param_1 + 0x578);
  dVar6 = *(double *)(param_1 + 0x440);
  dVar5 = *(double *)(param_1 + 0x440);
  auVar62._8_4_ = SUB84(dVar5,0);
  auVar62._0_8_ = dVar6;
  auVar62._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar39 = *(double *)(param_1 + 0x580);
  dVar40 = *(double *)(param_1 + 0x588);
  dVar41 = *(double *)(param_1 + 0x590);
  dVar42 = *(double *)(param_1 + 0x598);
  dVar8 = *(double *)(param_1 + 0x448);
  dVar7 = *(double *)(param_1 + 0x448);
  auVar50._8_4_ = SUB84(dVar7,0);
  auVar50._0_8_ = dVar8;
  auVar50._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar49 = *(double *)(param_1 + 0x5a0);
  dVar61 = *(double *)(param_1 + 0x5a8);
  dVar82 = dVar61 * dVar7 + dVar40 * dVar5 + dVar36 * dVar4 + dVar32 * dVar1;
  dVar47 = *(double *)(param_1 + 0x450);
  dVar9 = *(double *)(param_1 + 0x450);
  auVar51._8_4_ = SUB84(dVar9,0);
  auVar51._0_8_ = dVar47;
  auVar51._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar11 = *(double *)(param_1 + 0x458);
  dVar10 = *(double *)(param_1 + 0x458);
  dVar12 = *(double *)(param_1 + 0x460);
  dVar13 = *(double *)(param_1 + 0x460);
  auVar52._8_4_ = SUB84(dVar13,0);
  auVar52._0_8_ = dVar12;
  auVar52._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  dVar14 = *(double *)(param_1 + 0x468);
  dVar15 = *(double *)(param_1 + 0x468);
  auVar53._8_4_ = SUB84(dVar15,0);
  auVar53._0_8_ = dVar14;
  auVar53._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  dVar64 = dVar42 * dVar15 + dVar38 * dVar13 + dVar33 * dVar10 + dVar30 * dVar9;
  dVar16 = *(double *)(param_1 + 0x470);
  dVar17 = *(double *)(param_1 + 0x470);
  auVar54._8_4_ = SUB84(dVar17,0);
  auVar54._0_8_ = dVar16;
  auVar54._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar18 = *(double *)(param_1 + 0x478);
  dVar19 = *(double *)(param_1 + 0x478);
  dVar20 = *(double *)(param_1 + 0x480);
  dVar21 = *(double *)(param_1 + 0x480);
  auVar55._8_4_ = SUB84(dVar21,0);
  auVar55._0_8_ = dVar20;
  auVar55._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar22 = *(double *)(param_1 + 0x488);
  dVar23 = *(double *)(param_1 + 0x488);
  dVar48 = dVar61 * dVar23 + dVar40 * dVar21 + dVar36 * dVar19 + dVar32 * dVar17;
  dVar25 = *(double *)(param_1 + 0x490);
  dVar24 = *(double *)(param_1 + 0x490);
  auVar56._8_4_ = SUB84(dVar24,0);
  auVar56._0_8_ = dVar25;
  auVar56._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  dVar26 = *(double *)(param_1 + 0x498);
  dVar27 = *(double *)(param_1 + 0x498);
  dVar46 = *(double *)(param_1 + 0x4a0);
  dVar68 = *(double *)(param_1 + 0x4a0);
  auVar57._8_4_ = SUB84(dVar68,0);
  auVar57._0_8_ = dVar46;
  auVar57._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
  dVar81 = *(double *)(param_1 + 0x4a8);
  dVar28 = *(double *)(param_1 + 0x4a8);
  auVar58._8_4_ = SUB84(dVar28,0);
  auVar58._0_8_ = dVar81;
  auVar58._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  dVar73 = dVar42 * dVar28 + dVar38 * dVar68 + dVar33 * dVar27 + dVar30 * dVar24;
  dVar24 = dVar61 * dVar28 + dVar40 * dVar68 + dVar36 * dVar27 + dVar32 * dVar24;
  *(double *)(param_1 + 0x630) = dVar41 * dVar8 + dVar37 * dVar6 + dVar34 * dVar3 + dVar29 * dVar2;
  *(double *)(param_1 + 0x638) = dVar42 * dVar7 + dVar38 * dVar5 + dVar33 * dVar4 + dVar30 * dVar1;
  auVar80._8_4_ = SUB84(dVar82,0);
  auVar80._0_8_ = dVar49 * dVar8 + dVar39 * dVar6 + dVar35 * dVar3 + dVar31 * dVar2;
  auVar80._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x640) = auVar80;
  auVar63._8_4_ = SUB84(dVar64,0);
  auVar63._0_8_ = dVar41 * dVar14 + dVar37 * dVar12 + dVar34 * dVar11 + dVar29 * dVar47;
  auVar63._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x650) = auVar63;
  *(double *)(param_1 + 0x660) =
       dVar49 * dVar14 + dVar39 * dVar12 + dVar35 * dVar11 + dVar31 * dVar47;
  *(double *)(param_1 + 0x668) =
       dVar61 * dVar15 + dVar40 * dVar13 + dVar36 * dVar10 + dVar32 * dVar9;
  *(double *)(param_1 + 0x670) =
       dVar41 * dVar22 + dVar37 * dVar20 + dVar34 * dVar18 + dVar29 * dVar16;
  *(double *)(param_1 + 0x678) =
       dVar42 * dVar23 + dVar38 * dVar21 + dVar33 * dVar19 + dVar30 * dVar17;
  auVar44._8_4_ = SUB84(dVar48,0);
  auVar44._0_8_ = dVar49 * dVar22 + dVar39 * dVar20 + dVar35 * dVar18 + dVar31 * dVar16;
  auVar44._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x680) = auVar44;
  auVar70._8_4_ = SUB84(dVar73,0);
  auVar70._0_8_ = dVar41 * dVar81 + dVar37 * dVar46 + dVar34 * dVar26 + dVar29 * dVar25;
  auVar70._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x690) = auVar70;
  auVar69._8_4_ = SUB84(dVar24,0);
  auVar69._0_8_ = dVar49 * dVar81 + dVar39 * dVar46 + dVar35 * dVar26 + dVar31 * dVar25;
  auVar69._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x6a0) = auVar69;
  dVar5 = *(double *)(param_1 + 0x730);
  dVar7 = *(double *)(param_1 + 0x730);
  dVar9 = *(double *)(param_1 + 0x738);
  dVar13 = *(double *)(param_1 + 0x738);
  dVar15 = *(double *)(param_1 + 0x740);
  dVar17 = *(double *)(param_1 + 0x740);
  dVar21 = *(double *)(param_1 + 0x748);
  dVar24 = *(double *)(param_1 + 0x748);
  dVar61 = dVar95 * dVar21 + dVar91 * dVar15 + dVar87 * dVar9 + dVar83 * dVar5;
  dVar68 = dVar96 * dVar24 + dVar92 * dVar17 + dVar88 * dVar13 + dVar84 * dVar7;
  auVar59._8_4_ = SUB84(dVar68,0);
  auVar59._0_8_ = dVar61;
  auVar59._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
  dVar49 = dVar24 * dVar98 + dVar17 * dVar94 + dVar13 * dVar90 + dVar7 * dVar86;
  dVar7 = *(double *)(param_1 + 0x750);
  dVar13 = *(double *)(param_1 + 0x750);
  dVar17 = *(double *)(param_1 + 0x758);
  dVar24 = *(double *)(param_1 + 0x758);
  dVar28 = *(double *)(param_1 + 0x760);
  dVar68 = *(double *)(param_1 + 0x760);
  dVar48 = *(double *)(param_1 + 0x768);
  dVar64 = *(double *)(param_1 + 0x768);
  dVar73 = *(double *)(param_1 + 0x770);
  dVar82 = *(double *)(param_1 + 0x770);
  dVar29 = *(double *)(param_1 + 0x778);
  dVar30 = *(double *)(param_1 + 0x778);
  dVar31 = *(double *)(param_1 + 0x780);
  dVar32 = *(double *)(param_1 + 0x780);
  dVar33 = *(double *)(param_1 + 0x788);
  dVar34 = *(double *)(param_1 + 0x788);
  dVar35 = *(double *)(param_1 + 0x790);
  dVar36 = *(double *)(param_1 + 0x790);
  dVar37 = *(double *)(param_1 + 0x798);
  dVar38 = *(double *)(param_1 + 0x798);
  dVar39 = *(double *)(param_1 + 0x7a0);
  dVar40 = *(double *)(param_1 + 0x7a0);
  dVar41 = *(double *)(param_1 + 0x7a8);
  dVar42 = *(double *)(param_1 + 0x7a8);
  dVar76 = dVar96 * dVar42 + dVar92 * dVar40 + dVar88 * dVar38 + dVar84 * dVar36;
  dVar36 = dVar98 * dVar42 + dVar94 * dVar40 + dVar90 * dVar38 + dVar86 * dVar36;
  uStack_230 = auVar59._8_8_;
  *(double *)(param_1 + 0x930) = dVar61;
  *(undefined8 *)(param_1 + 0x938) = uStack_230;
  auVar45._8_4_ = SUB84(dVar49,0);
  auVar45._0_8_ = dVar21 * dVar97 + dVar15 * dVar93 + dVar9 * dVar89 + dVar5 * dVar85;
  auVar45._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x940) = auVar45;
  *(double *)(param_1 + 0x950) =
       dVar95 * dVar48 + dVar91 * dVar28 + dVar87 * dVar17 + dVar83 * dVar7;
  *(double *)(param_1 + 0x958) =
       dVar96 * dVar64 + dVar92 * dVar68 + dVar88 * dVar24 + dVar84 * dVar13;
  *(double *)(param_1 + 0x960) =
       dVar48 * dVar97 + dVar28 * dVar93 + dVar17 * dVar89 + dVar7 * dVar85;
  *(double *)(param_1 + 0x968) =
       dVar64 * dVar98 + dVar68 * dVar94 + dVar24 * dVar90 + dVar13 * dVar86;
  *(double *)(param_1 + 0x970) =
       dVar95 * dVar33 + dVar91 * dVar31 + dVar87 * dVar29 + dVar83 * dVar73;
  *(double *)(param_1 + 0x978) =
       dVar96 * dVar34 + dVar92 * dVar32 + dVar88 * dVar30 + dVar84 * dVar82;
  *(double *)(param_1 + 0x980) =
       dVar33 * dVar97 + dVar31 * dVar93 + dVar29 * dVar89 + dVar73 * dVar85;
  *(double *)(param_1 + 0x988) =
       dVar34 * dVar98 + dVar32 * dVar94 + dVar30 * dVar90 + dVar82 * dVar86;
  auVar74._8_4_ = SUB84(dVar76,0);
  auVar74._0_8_ = dVar95 * dVar41 + dVar91 * dVar39 + dVar87 * dVar37 + dVar83 * dVar35;
  auVar74._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x990) = auVar74;
  auVar71._8_4_ = SUB84(dVar36,0);
  auVar71._0_8_ = dVar97 * dVar41 + dVar93 * dVar39 + dVar89 * dVar37 + dVar85 * dVar35;
  auVar71._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9a0) = auVar71;
  dVar17 = *(double *)(param_1 + 0x7b0);
  dVar21 = *(double *)(param_1 + 0x7b8);
  dVar24 = *(double *)(param_1 + 2000);
  dVar68 = *(double *)(param_1 + 0x7d8);
  dVar28 = *(double *)(param_1 + 0x7c0);
  dVar5 = *(double *)(param_1 + 0x7c8);
  dVar48 = *(double *)(param_1 + 0x7e0);
  dVar64 = *(double *)(param_1 + 0x7e8);
  dVar73 = *(double *)(param_1 + 0x7f0);
  dVar82 = *(double *)(param_1 + 0x7f8);
  uStack_220 = auVar62._8_8_;
  dVar29 = *(double *)(param_1 + 0x800);
  dVar30 = *(double *)(param_1 + 0x808);
  dVar31 = *(double *)(param_1 + 0x810);
  dVar32 = *(double *)(param_1 + 0x818);
  uStack_c0 = auVar50._8_8_;
  dVar34 = *(double *)(param_1 + 0x820);
  dVar33 = *(double *)(param_1 + 0x828);
  dVar7 = uStack_c0 * dVar33 + uStack_220 * dVar30 + dVar4 * dVar64 + dVar1 * dVar5;
  uStack_110 = auVar51._8_8_;
  uStack_d0 = auVar52._8_8_;
  uStack_100 = auVar53._8_8_;
  dVar9 = uStack_100 * dVar32 + uStack_d0 * dVar82 + dVar10 * dVar68 + uStack_110 * dVar21;
  dVar10 = uStack_100 * dVar33 + uStack_d0 * dVar30 + dVar10 * dVar64 + uStack_110 * dVar5;
  uStack_150 = auVar54._8_8_;
  uStack_120 = auVar55._8_8_;
  dVar13 = dVar23 * dVar32 + uStack_120 * dVar82 + dVar19 * dVar68 + uStack_150 * dVar21;
  dVar15 = dVar23 * dVar33 + uStack_120 * dVar30 + dVar19 * dVar64 + uStack_150 * dVar5;
  uStack_180 = auVar56._8_8_;
  uStack_170 = auVar57._8_8_;
  uStack_190 = auVar58._8_8_;
  dVar5 = uStack_190 * dVar33 + uStack_170 * dVar30 + dVar27 * dVar64 + uStack_180 * dVar5;
  *(double *)(param_1 + 0x9b0) = dVar8 * dVar31 + dVar6 * dVar73 + dVar3 * dVar24 + dVar2 * dVar17;
  *(double *)(param_1 + 0x9b8) =
       uStack_c0 * dVar32 + uStack_220 * dVar82 + dVar4 * dVar68 + dVar1 * dVar21;
  auVar66._8_4_ = SUB84(dVar7,0);
  auVar66._0_8_ = dVar8 * dVar34 + dVar6 * dVar29 + dVar3 * dVar48 + dVar2 * dVar28;
  auVar66._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9c0) = auVar66;
  auVar72._8_4_ = SUB84(dVar9,0);
  auVar72._0_8_ = dVar14 * dVar31 + dVar12 * dVar73 + dVar11 * dVar24 + dVar47 * dVar17;
  auVar72._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9d0) = auVar72;
  auVar77._8_4_ = SUB84(dVar10,0);
  auVar77._0_8_ = dVar14 * dVar34 + dVar12 * dVar29 + dVar11 * dVar48 + dVar47 * dVar28;
  auVar77._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9e0) = auVar77;
  auVar75._8_4_ = SUB84(dVar13,0);
  auVar75._0_8_ = dVar22 * dVar31 + dVar20 * dVar73 + dVar18 * dVar24 + dVar16 * dVar17;
  auVar75._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x9f0) = auVar75;
  auVar78._8_4_ = SUB84(dVar15,0);
  auVar78._0_8_ = dVar22 * dVar34 + dVar20 * dVar29 + dVar18 * dVar48 + dVar16 * dVar28;
  auVar78._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa00) = auVar78;
  *(double *)(param_1 + 0xa10) =
       dVar31 * dVar81 + dVar73 * dVar46 + dVar24 * dVar26 + dVar17 * dVar25;
  *(double *)(param_1 + 0xa18) =
       dVar32 * uStack_190 + dVar82 * uStack_170 + dVar68 * dVar27 + dVar21 * uStack_180;
  auVar60._8_4_ = SUB84(dVar5,0);
  auVar60._0_8_ = dVar81 * dVar34 + dVar46 * dVar29 + dVar26 * dVar48 + dVar25 * dVar28;
  auVar60._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa20) = auVar60;
  return;
}



// FUNCTION 144b17a4c FUN_144b17a4c body=31 status=ok
// SIG undefined FUN_144b17a4c(void)

undefined8 FUN_144b17a4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b17a6b FUN_144b17a6b body=46 status=ok
// SIG undefined FUN_144b17a6b(void)

void FUN_144b17a6b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    param_1 = param_1 + 0xd;
  }
  return;
}



// FUNCTION 144b17a9a FUN_144b17a9a body=257 status=ok
// SIG undefined FUN_144b17a9a(void)

void FUN_144b17a9a(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  uint param_5,char param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  uVar1 = *(uint *)(param_4 + 0xe4);
  *param_1 = DAT_14ca44d40;
  param_1[1] = DAT_14ca44d68;
  if (param_2 == 0) {
    return;
  }
  if (((-1 < (int)param_5) && ((uVar1 & 0x1000000) != 0)) &&
     ((param_6 == '\0' || (*(char *)(param_2 + 0x13821) == '\0')))) {
    lVar2 = param_2 + 0x3208;
    if (*(longlong *)(param_2 + 0x3218) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x3218);
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) == 0) {
      lVar2 = param_2 + 0x3228;
      if (*(longlong *)(param_2 + 0x3238) != 0) {
        lVar2 = *(longlong *)(param_2 + 0x3238);
      }
      if ((*(uint *)(lVar2 + (ulonglong)(param_5 >> 5) * 4) & 1 << ((byte)param_5 & 0x1f)) == 0)
      goto LAB_144b17acf;
      lVar2 = 0x31c8;
    }
    else {
      lVar2 = 0x31d0;
    }
    param_1[1] = *(undefined8 *)(param_2 + lVar2);
  }
LAB_144b17acf:
  if (param_3 != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_3 + 0x218) + 0x158);
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_2 + 0x31c0))) {
      puVar3 = &DAT_000031a8 + param_2;
      if (*(undefined1 **)(param_2 + 0x31b8) != (undefined1 *)0x0) {
        puVar3 = *(undefined1 **)(param_2 + 0x31b8);
      }
      if ((*(uint *)(puVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
        *param_1 = *(undefined8 *)(*(longlong *)(param_2 + 0x3198) + (ulonglong)uVar1 * 8);
      }
    }
  }
  return;
}



// FUNCTION 144b17b9c FUN_144b17b9c body=29 status=ok
// SIG undefined FUN_144b17b9c(void)

uint FUN_144b17b9c(longlong param_1)

{
  if (((char)*(uint *)(param_1 + 0x990) < '\0') && (-1 < *(int *)(param_1 + 0x944))) {
    return (*(uint *)(param_1 + 0x990) & 0x10) >> 4;
  }
  return 0;
}



// FUNCTION 144b17bba FUN_144b17bba body=671 status=ok
// SIG undefined FUN_144b17bba(void)

void FUN_144b17bba(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = *(uint *)(param_1 + 0x990);
  if ((char)uVar2 < '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28);
    bVar1 = *(byte *)(lVar3 + 0x1e8);
    if ((bVar1 & 0xfd) == 1) {
      plVar6 = &DAT_14ca4fde0;
      if (bVar1 == 3) {
        plVar6 = &DAT_14ca4fe10;
      }
      plVar7 = &DAT_14ca4fdf8;
      if (bVar1 == 3) {
        plVar7 = &DAT_14ca4fe28;
      }
      uVar2 = *(uint *)(param_1 + 0x958);
      if (*(uint *)(param_1 + 0x958) < *(uint *)(param_1 + 0x95c)) {
        uVar2 = *(uint *)(param_1 + 0x95c);
      }
      fVar9 = *(float *)(*plVar7 + 4);
      fVar8 = (*(float *)(lVar3 + 0x15c) + *(float *)(lVar3 + 0x15c)) *
              ((*(float *)(*plVar6 + 4) * 512.0) / (float)uVar2);
    }
    else {
      if (((uVar2 & 0x10) == 0) || (*(int *)(param_1 + 0x944) < 0)) goto LAB_144b17bf9;
      fVar9 = *(float *)(DAT_14ca4fd20 + 4) /
              (*(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x2a8));
      fVar8 = (((float)(*(double *)(param_1 + 0x6d0) / (double)*(uint *)(param_1 + 0x958)) * fVar9 -
               fVar9) * *(float *)(param_1 + 0x948) + fVar9) * *(float *)(lVar3 + 0x15c);
      fVar9 = *(float *)(DAT_14ca4fd38 + 4);
    }
    fVar9 = fVar9 * *(float *)(lVar3 + 0x160);
  }
  else {
LAB_144b17bf9:
    if ((uVar2 >> 0xb & 1) == 0) {
      if ((uVar2 & 0x10) == 0) {
        uVar4 = *(uint *)(param_1 + 0x958);
        if (*(uint *)(param_1 + 0x958) < *(uint *)(param_1 + 0x95c)) {
          uVar4 = *(uint *)(param_1 + 0x95c);
        }
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28);
        fVar9 = *(float *)(lVar3 + 0x15c);
        if ((uVar2 >> 0xd & 1) == 0) {
          fVar8 = *(float *)(DAT_14ca4fe58 + 4);
          lVar5 = DAT_14ca4fe70;
        }
        else {
          fVar8 = *(float *)(DAT_14ca4fe88 + 4);
          lVar5 = DAT_14ca4fea0;
        }
        fVar8 = (fVar9 + fVar9) *
                ((fVar8 * 512.0) /
                ((float)uVar4 * (*(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x2a8))));
        fVar9 = *(float *)(lVar3 + 0x160) * *(float *)(lVar5 + 4);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x958);
        if (*(uint *)(param_1 + 0x958) < *(uint *)(param_1 + 0x95c)) {
          uVar2 = *(uint *)(param_1 + 0x95c);
        }
        fVar8 = (float)(*(double *)(param_1 + 0x6d0) / (double)uVar2) *
                (*(float *)(DAT_14ca4fd50 + 4) /
                (*(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x2a8))) * 0.5;
        fVar9 = *(float *)(DAT_14ca4fd68 + 4) *
                *(float *)(*(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28) + 0x160);
      }
      if (0.1 <= fVar8) {
        fVar8 = 0.1;
      }
    }
    else {
      fVar8 = 0.0;
      fVar9 = 0.0;
    }
  }
  fVar10 = fVar8;
  if (fVar8 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 0x10d8) = fVar10;
  fVar10 = fVar9 * fVar8;
  if (fVar9 * fVar8 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 0x10dc) = fVar10;
  *(undefined4 *)(param_1 + 0x10e0) = *(undefined4 *)(DAT_14ca4ff50 + 4);
  return;
}



// FUNCTION 144b17e5a FUN_144b17e5a body=2221 status=ok
// SIG undefined FUN_144b17e5a(void)

undefined8 FUN_144b17e5a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  bool bVar24;
  
  lVar14 = *(longlong *)(param_2 + 0x28);
  lVar17 = **(longlong **)(param_1 + 0xa0);
  puVar21 = (undefined1 *)
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar17 + 0x3090) * 2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar12 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
    if (plVar12 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar12 + 0x68))(plVar12);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar2 = DAT_14ca97068;
  bVar24 = true;
  cVar7 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar13 = 0;
      cVar7 = '\x02';
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar13 = (ulonglong)(bVar6 ^ 1);
      cVar7 = DAT_14ca96da8;
    }
    bVar24 = *(int *)(lVar2 + uVar13 * 4) != 0;
  }
  bVar6 = 0;
  if ((bVar24) && (bVar6 = 0, cVar7 != '\0')) {
    if (((*(byte *)((longlong)&DAT_14ca814c8 + (longlong)puVar21 * 0x3c + 2) & 0x40) == 0) ||
       ((((puVar21 != (undefined1 *)0x30 && ((int)(&DAT_14ca814b8)[(longlong)puVar21 * 0xf] < 4)) ||
         (*(char *)(lVar17 + 0x3098) != '\x01')) ||
        ((*(char *)(lVar17 + 0x23e8) == '\x01' && (*(char *)(lVar17 + 0x23ea) != '\x01')))))) {
      bVar6 = 0;
    }
    else {
      bVar6 = FUN_142bc01ba(&DAT_14ca81401,3);
    }
  }
  if (*(char *)(lVar14 + 0x1d2) == '\x02') {
LAB_144b186a2:
    bVar24 = true;
    if ((ulonglong)*(byte *)(lVar14 + 0x1e8) < 4) {
      bVar24 = *(int *)(*(longlong *)(&PTR_DAT_14a304280)[*(byte *)(lVar14 + 0x1e8)] + 4) != 0;
    }
    bVar18 = bVar6 & bVar24 ^ 1;
  }
  else {
    if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
    }
    lVar17 = DAT_14cae3fc8;
    if (DAT_14cae3fd0 < 1) {
LAB_144b18192:
      bVar24 = false;
    }
    else {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(lVar2 + 0xc60);
      if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar9 == 2)) {
        uVar13 = 0;
      }
      else if (iVar9 == 1) {
        puVar21 = (undefined1 *)(ulonglong)uVar8;
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar13 = 1;
      }
      piVar3 = DAT_14c9d2390;
      if (*(int *)(lVar17 + uVar13 * 4) < 1) goto LAB_144b18192;
      piVar1 = (int *)(lVar2 + 0xc60);
      iVar9 = *piVar1;
      if (iVar9 == 0x40000002) {
        iVar16 = *DAT_14c9d2390;
      }
      else {
        if (DAT_14c86a9f8 == 0) {
          iVar16 = *DAT_14c9d2390;
        }
        else if (iVar9 == 2) {
          iVar16 = *DAT_14c9d2390;
          iVar9 = 2;
        }
        else {
          uVar13 = 1;
          if (iVar9 == 1) {
            puVar21 = (undefined1 *)(ulonglong)uVar8;
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            uVar13 = (ulonglong)(DVar10 != DVar11);
            iVar9 = *piVar1;
          }
          iVar16 = piVar3[uVar13];
          if (iVar9 == 0x40000002) goto LAB_144b17ffd;
        }
        if ((DAT_14c86a9f8 & 1) == 0) {
LAB_144b17fef:
          if ((iVar9 == 1) && ((DAT_14c86a9f8 & 1) != 0)) {
            FUN_140ad26c0();
            GetCurrentThreadId();
            puVar21 = &DAT_14ca84d88;
          }
        }
        else if (iVar9 != 2) {
          if (iVar9 == 1) {
            FUN_140ad26c0();
            GetCurrentThreadId();
            iVar9 = *piVar1;
            puVar21 = &DAT_14ca84d88;
          }
          if (iVar9 != 0x40000002) goto LAB_144b17fef;
        }
      }
LAB_144b17ffd:
      bVar24 = 0 < iVar16;
    }
    iVar9 = *(int *)(DAT_14c9e93c8 + 4);
    lVar17 = **(longlong **)(param_1 + 0xa0);
    uVar13 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar17 + 0x3090) * 2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar12 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar12 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar12 + 0x68))(plVar12);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
    lVar2 = DAT_14ca97068;
    bVar18 = 1;
    bVar23 = true;
    cVar7 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar15 = 0;
        cVar7 = '\x02';
      }
      else {
        uVar15 = FUN_144a61b4f();
        uVar15 = (uVar15 ^ 1) & 0xff;
        cVar7 = DAT_14ca96da8;
      }
      bVar23 = *(int *)(lVar2 + uVar15 * 4) != 0;
    }
    if ((((((bVar23) && (cVar7 != '\0')) &&
          ((*(byte *)((longlong)&DAT_14ca814c8 + uVar13 * 0x3c + 2) & 0x40) != 0)) &&
         (((uVar13 == 0x30 || (3 < (int)(&DAT_14ca814b8)[uVar13 * 0xf])) &&
          ((*(char *)(lVar17 + 0x3098) == '\x01' &&
           ((*(char *)(lVar17 + 0x23e8) != '\x01' || (*(char *)(lVar17 + 0x23ea) == '\x01'))))))))
        && (cVar7 = FUN_142bc01ba(CONCAT71((int7)((ulonglong)puVar21 >> 8),
                                           0 < iVar9 & ((byte)uVar8 & bVar24 ^ 1)) & 0xffffffff,3),
           cVar7 != '\0')) && (*(char *)(lVar14 + 0x1d2) == '\x01')) goto LAB_144b186a2;
  }
  if ((((*(char *)(lVar14 + 0x1e8) != '\0') &&
       ((*(byte *)(**(longlong **)(param_1 + 0xa0) + 0x2954) & 1) != 0)) &&
      (*(int *)(DAT_14ca046e8 + 4) != 0)) && (*(int *)(param_1 + 0xe4) < 0)) {
    lVar17 = param_1 + 0x98;
    bVar6 = *(byte *)(lVar14 + 0x1d4);
    cVar7 = *(char *)(lVar14 + 0x1d5);
    iVar9 = FUN_144b28750(lVar17);
    if ((3 < (int)(&DAT_14ca814b8)
                  [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar9 * 2) * 0xf]) &&
       (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar9 * 2) * 0x3c] & 3)
        != 0)) {
      cVar4 = FUN_1472390ef(lVar17);
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        cVar5 = FUN_1472390cb(lVar17);
      }
      if (cVar5 == '\x01' && (bVar6 & 2) != 0) {
        bVar24 = cVar7 == '\x02';
        if (cVar7 == '\0') {
          bVar24 = DAT_14ca04a20 == 1;
        }
        if (bVar24) goto LAB_144b180b2;
        lVar14 = **(longlong **)(param_1 + 0xa0);
        if (*(char *)(lVar14 + 0x3098) == '\x01') {
          if ((*(char *)(lVar14 + 0x23e8) == '\x01') &&
             (bVar18 == 0 && (*(byte *)(lVar14 + 0x23ea) & 1) == 0)) {
            return 1;
          }
          goto LAB_144b180b2;
        }
      }
    }
  }
  if (bVar18 == 0) {
    return 1;
  }
LAB_144b180b2:
  lVar14 = (longlong)*(int *)(param_2 + 0x34) * 0x68;
  uVar13 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x4d8) + 8 + lVar14);
  if (0 < (longlong)uVar13) {
    uVar15 = 0;
    do {
      if (0 < (int)*(uint *)(param_1 + 0x3f0)) {
        lVar17 = *(longlong *)(param_1 + 1000);
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4d8) + lVar14) + uVar15 * 8)
                 + 0x38);
        bVar24 = false;
        uVar22 = (ulonglong)*(uint *)(param_1 + 0x3f0);
        do {
          if (lVar17 == lVar2 || lVar2 == 0) {
LAB_144b18124:
            lVar19 = *(longlong *)(lVar17 + 0x3780) + (longlong)*(int *)(param_2 + 0x34) * 0x78;
            lVar20 = *(longlong *)(lVar19 + 0x20);
            if (lVar20 == 0) {
              lVar20 = lVar19 + 0x10;
            }
            bVar24 = (bool)(bVar24 | (*(uint *)(lVar20 + (uVar15 >> 5 & 0x7ffffff) * 4) &
                                     1 << ((byte)uVar15 & 0x1f)) != 0);
          }
          else {
            lVar20 = *(longlong *)(lVar17 + 8);
            lVar19 = lVar17;
            if (lVar20 != 0) {
              iVar9 = *(int *)(lVar17 + 0x1dd8);
              if ((-1 < (longlong)iVar9) && (iVar9 < *(int *)(lVar20 + 0x10))) {
                lVar19 = *(longlong *)(*(longlong *)(lVar20 + 8) + (longlong)iVar9 * 8);
              }
            }
            if (lVar2 == lVar19) goto LAB_144b18124;
          }
          lVar17 = lVar17 + 0x13c10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        if (bVar24) {
          return 1;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
  }
  return 0;
}



// FUNCTION 144b18708 FUN_144b18708 body=249 status=ok
// SIG undefined FUN_144b18708(void)

void FUN_144b18708(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 4;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 8;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1b) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  lVar1 = 0x100;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1c0);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3e] = 0;
  return;
}



// FUNCTION 144b18801 FUN_144b18801 body=112 status=ok
// SIG undefined FUN_144b18801(void)

undefined8 FUN_144b18801(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((DAT_14c760138 != 0) && (DAT_14c76013c != 0)) {
    uVar2 = 1;
    if ((&DAT_14ca814b8)[(ulonglong)(param_1 & 0xffff) * 0xf] == 1) {
      cVar1 = FUN_147430715(param_1);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else if ((&DAT_14ca814b8)[(ulonglong)(param_1 & 0xffff) * 0xf] == 1) {
        uVar2 = FUN_1474307ba(param_1);
        return uVar2;
      }
    }
  }
  return uVar2;
}



// FUNCTION 144b18872 FUN_144b18872 body=79 status=ok
// SIG undefined FUN_144b18872(void)

uint FUN_144b18872(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((((*(int *)(param_1 + 0xbc0) < 1) && (*(int *)(param_1 + 0xbe0) < 1)) &&
      (*(int *)(param_1 + 0xbf0) < 1)) &&
     (((*(int *)(param_1 + 0xfec) < 1 && (*(int *)(param_1 + 0xc30) < 1)) &&
      (*(int *)(param_1 + 0xc58) < 1)))) {
    if ((*(uint *)(param_1 + 0x990) >> 0x11 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x990) >> 0x10 & 1;
    }
  }
  return uVar1;
}



// FUNCTION 144b188c2 FUN_144b188c2 body=125 status=ok
// SIG undefined FUN_144b188c2(void)

ulonglong FUN_144b188c2(double *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite(*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite(param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite(param_1[2]);
      if (iVar1 != 0) {
        iVar1 = _finite(param_1[3]);
        if (iVar1 != 0) {
          iVar1 = _finite(param_1[4]);
          if (iVar1 != 0) {
            iVar1 = _finite(param_1[5]);
            if (iVar1 != 0) {
              iVar1 = _finite(param_1[6]);
              uVar2 = CONCAT71(uVar3,iVar1 == 0);
            }
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 144b18940 FUN_144b18940 body=222 status=ok
// SIG undefined FUN_144b18940(void)

void FUN_144b18940(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x10);
    lVar5 = 0;
    do {
      local_48 = *(longlong *)(lVar3 + lVar5);
      if (*(char *)(*(longlong *)(local_48 + 8) + 0x71) == '\x01') {
        FUN_1472ab208(param_1 + 0x68,&local_48,1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  iVar1 = *(int *)(param_3 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_3 + 0x10);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (*(char *)(*(longlong *)(lVar4 + 8) + 0x71) == '\x01') {
        iVar2 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x74) < iVar2 + 1U) {
          FUN_141762202((longlong *)(param_1 + 0x68),iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b18a1f FUN_144b18a1f body=74 status=ok
// SIG undefined FUN_144b18a1f(void)

void FUN_144b18a1f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 800);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x24] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x74;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144b18a6a FUN_144b18a6a body=96 status=ok
// SIG undefined FUN_144b18a6a(void)

void FUN_144b18a6a(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar3;
    FUN_147313bbc(param_1,*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}



// FUNCTION 144b18aca FUN_144b18aca body=11 status=ok
// SIG undefined FUN_144b18aca(void)

void FUN_144b18aca(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 144b18ad5 FUN_144b18ad5 body=83 status=ok
// SIG undefined FUN_144b18ad5(void)

bool FUN_144b18ad5(longlong *param_1,longlong param_2)

{
  if (((param_1 != (longlong *)0x0) && (param_1[0x9a4] != 0)) &&
     ((*(byte *)(param_2 + 0x12) & 2) != 0)) {
    if (*(code **)(*param_1 + 0x2c0) != (code *)&LAB_1447ccd94) {
      (**(code **)(*param_1 + 0x2c0))();
    }
    if (DAT_14c760dd5 == '\x01') {
      return 0 < *(int *)(DAT_14ca5c7b8 + 4);
    }
  }
  return false;
}



// FUNCTION 144b18b28 FUN_144b18b28 body=156 status=ok
// SIG undefined FUN_144b18b28(void)

void FUN_144b18b28(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar2 = 0x72;
  do {
    puVar1 = (undefined8 *)(param_1 + -0x12 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + -2 + lVar2) = 0xffff0000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x132);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// FUNCTION 144b18bc4 FUN_144b18bc4 body=439 status=ok
// SIG undefined FUN_144b18bc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_144b18bc4(ulonglong *param_1,byte param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar16 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong lVar18;
  longlong lVar20;
  
  uVar1 = *param_1;
  if ((uVar1 >> ((ulonglong)param_2 & 0x3f) & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)((longlong)param_1 + 0x12);
    if (param_2 != 0) {
      uVar3 = (ulonglong)(param_2 + 3 & 0xfc);
      lVar4 = (ulonglong)param_2 - 1;
      auVar9._8_4_ = (int)lVar4;
      auVar9._0_8_ = lVar4;
      auVar9._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
      auVar11._8_4_ = (int)uVar1;
      auVar11._0_8_ = uVar1;
      auVar11._12_4_ = (int)(uVar1 >> 0x20);
      auVar12 = pmovsxbq(unaff_XMM6,0x302);
      auVar14 = pmovsxbq(unaff_XMM7,0x100);
      auVar16 = pmovsxbq(unaff_XMM8,0x101);
      auVar17 = pmovsxbq(unaff_XMM11,0x404);
      auVar7 = ZEXT216(*(ushort *)((longlong)param_1 + 0x12));
      do {
        auVar15 = auVar14;
        auVar13 = auVar12;
        auVar5 = auVar7;
        lVar10 = auVar15._0_8_;
        lVar18 = auVar16._0_8_;
        lVar20 = auVar16._8_8_;
        auVar19._0_8_ = lVar18 << lVar10;
        auVar19._8_8_ = lVar20 << lVar10;
        lVar21 = auVar15._8_8_;
        auVar6._0_8_ = lVar18 << lVar21;
        auVar6._8_8_ = lVar20 << lVar21;
        lVar22 = auVar13._8_8_;
        auVar24._0_8_ = lVar18 << lVar22;
        auVar24._8_8_ = lVar20 << lVar22;
        lVar4 = auVar13._0_8_;
        auVar23._0_8_ = lVar18 << lVar4;
        auVar23._8_8_ = lVar20 << lVar4;
        auVar7 = pblendw(auVar6,auVar19,0xf);
        auVar12 = pblendw(auVar24,auVar23,0xf);
        auVar8._0_8_ = -(ulonglong)(SUB168(auVar7 & auVar11,0) == 0);
        auVar8._8_8_ = -(ulonglong)(SUB168(auVar7 & auVar11,8) == 0);
        auVar25._0_8_ = -(ulonglong)(SUB168(auVar12 & auVar11,0) == 0);
        auVar25._8_8_ = -(ulonglong)(SUB168(auVar12 & auVar11,8) == 0);
        auVar12 = packssdw(auVar8,auVar25);
        auVar7._0_4_ = auVar12._0_4_ + auVar5._0_4_ + 1;
        auVar7._4_4_ = auVar12._4_4_ + auVar5._4_4_ + 1;
        auVar7._8_4_ = auVar12._8_4_ + auVar5._8_4_ + 1;
        auVar7._12_4_ = auVar12._12_4_ + auVar5._12_4_ + 1;
        auVar14._0_8_ = lVar10 + auVar17._0_8_;
        auVar14._8_8_ = lVar21 + auVar17._8_8_;
        auVar12._0_8_ = lVar4 + auVar17._0_8_;
        auVar12._8_8_ = lVar22 + auVar17._8_8_;
        uVar3 = uVar3 - 4;
      } while (uVar3 != 0);
      lVar4 = SUB168(auVar9 ^ _DAT_149931e80,0);
      auVar16._0_8_ = -(ulonglong)(lVar4 < SUB168(auVar15 ^ _DAT_149931e80,0));
      lVar10 = SUB168(auVar9 ^ _DAT_149931e80,8);
      auVar16._8_8_ = -(ulonglong)(lVar10 < SUB168(auVar15 ^ _DAT_149931e80,8));
      auVar17._0_8_ = -(ulonglong)(lVar4 < SUB168(auVar13 ^ _DAT_149931e80,0));
      auVar17._8_8_ = -(ulonglong)(lVar10 < SUB168(auVar13 ^ _DAT_149931e80,8));
      auVar12 = packssdw(auVar16,auVar17);
      auVar7 = blendvps(auVar7,auVar5,auVar12);
      auVar7 = phaddd(auVar7,auVar7);
      auVar7 = phaddd(auVar7,auVar7);
      uVar2 = auVar7._0_4_;
    }
  }
  return uVar2;
}



// FUNCTION 144b18d7b FUN_144b18d7b body=217 status=ok
// SIG undefined FUN_144b18d7b(void)

int FUN_144b18d7b(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  lVar1 = DAT_14ca97170;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar6 = 0;
  }
  else if (iVar2 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  if (*(int *)(lVar1 + uVar6 * 4) < 1) {
    iVar2 = 1;
  }
  else {
    if (*(int *)(DAT_14ca5dc68 + 4) < 1) {
      uVar5 = FUN_147430fbd(*(undefined2 *)
                             (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2));
      if (7 < uVar5) {
        uVar5 = 8;
      }
    }
    else {
      puVar7 = (uint *)(param_1 + 0x11828);
      if (*(longlong *)(param_1 + 0x118c8) != 0) {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0x118c8) + 0x18);
      }
      uVar5 = 8;
      if (*puVar7 < 8) {
        uVar5 = *puVar7;
      }
    }
    iVar2 = uVar5 + (uVar5 == 0);
  }
  return iVar2;
}



// FUNCTION 144b18e5e FUN_144b18e5e body=31 status=ok
// SIG undefined FUN_144b18e5e(void)

undefined8 FUN_144b18e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b18e7e FUN_144b18e7e body=31 status=ok
// SIG undefined FUN_144b18e7e(void)

undefined8 FUN_144b18e7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b18e9e FUN_144b18e9e body=214 status=ok
// SIG undefined FUN_144b18e9e(void)

void FUN_144b18e9e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 8;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  lVar1 = 0xc0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x180);
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x36] = 0;
  return;
}



// FUNCTION 144b18f74 FUN_144b18f74 body=31 status=ok
// SIG undefined FUN_144b18f74(void)

undefined8 FUN_144b18f74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b18f94 FUN_144b18f94 body=31 status=ok
// SIG undefined FUN_144b18f94(void)

undefined8 FUN_144b18f94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b18fb4 FUN_144b18fb4 body=306 status=ok
// SIG undefined FUN_144b18fb4(void)

void FUN_144b18fb4(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  lVar2 = 0x42;
  do {
    puVar1 = (undefined8 *)(param_1 + -0x12 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(param_1 + -2 + lVar2) = 0xffff0000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x102);
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined1 **)(param_1 + 0x144) = &DAT_100000001;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined1 **)(param_1 + 0x154) = &DAT_100000001;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x13f) = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined4 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  return;
}



// FUNCTION 144b190e6 FUN_144b190e6 body=283 status=ok
// SIG undefined FUN_144b190e6(void)

void FUN_144b190e6(float *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_1[0] = 0.5;
  param_1[1] = 0.5;
  param_1[2] = 0.5;
  if ((DAT_14c760abc != 0) && (DAT_14c760ab8 != 0)) {
    param_2 = param_2 & 0x3ff;
    if (param_2 == 0) {
      fVar4 = 0.0;
      fVar3 = 0.0;
      fVar5 = 0.0;
    }
    else {
      fVar3 = 0.0;
      fVar4 = 0.2;
      uVar2 = param_2;
      do {
        fVar3 = fVar3 + (float)(uVar2 % 5) * fVar4;
        fVar4 = fVar4 * 0.2;
        bVar1 = 4 < uVar2;
        uVar2 = uVar2 / 5;
      } while (bVar1);
      fVar4 = 0.0;
      fVar5 = 0.33333334;
      uVar2 = param_2;
      do {
        fVar4 = fVar4 + (float)(uVar2 % 3) * fVar5;
        fVar5 = fVar5 * 0.33333334;
        bVar1 = 2 < uVar2;
        uVar2 = uVar2 / 3;
      } while (bVar1);
      fVar5 = 0.0;
      fVar6 = 0.5;
      do {
        fVar5 = fVar5 + (float)(param_2 & 1) * fVar6;
        fVar6 = fVar6 * 0.5;
        bVar1 = 1 < param_2;
        param_2 = param_2 >> 1;
      } while (bVar1);
    }
    *param_1 = fVar5;
    param_1[1] = fVar4;
    param_1[2] = fVar3;
  }
  return;
}



// FUNCTION 144b19202 FUN_144b19202 body=213 status=ok
// SIG undefined FUN_144b19202(void)

void FUN_144b19202(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined1 (*) [16])(param_1 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  lVar1 = 0xc0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x180);
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f80000000000000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3f80000000000000;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3f80000000000000;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  return;
}



// FUNCTION 144b192e8 FUN_144b192e8 body=385 status=ok
// SIG undefined FUN_144b192e8(void)

void FUN_144b192e8(longlong param_1,float *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  
  lVar11 = DAT_14cb0ff38;
  uVar2 = *(uint *)(param_1 + 0x7c);
  iVar3 = *(int *)(param_1 + 0x80);
  uVar4 = *(uint *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x50);
  uVar6 = *(uint *)(param_1 + 0x58);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar8 = *(int *)(param_1 + 0x5c);
  bVar1 = *(byte *)(param_1 + 0x23);
  iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  uVar16 = uVar6;
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar15 = 0;
  }
  else if (iVar9 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar13 != DVar14);
    uVar16 = *(uint *)(param_1 + 0x58);
  }
  else {
    uVar15 = 1;
  }
  iVar9 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  uVar12 = iVar9 << 0x18;
  uVar10 = *(uint *)(lVar11 + uVar15 * 4);
  iVar9 = 0x1f;
  if (uVar10 != 0) {
    for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  fVar17 = (float)iVar9;
  if (uVar10 == 0) {
    fVar17 = 0.0;
  }
  *param_2 = 1.0 / (float)uVar16;
  param_2[1] = 1.0 / (float)*(uint *)(param_1 + 0x5c);
  param_2[2] = (float)(uVar6 * iVar5);
  param_2[3] = (float)(uint)(iVar8 * iVar7);
  param_2[4] = fVar17;
  if (uVar4 == 0) {
    uVar12 = 0;
  }
  param_2[5] = (float)(uVar12 | iVar3 << 0xc | uVar2);
  param_2[6] = (float)((uint)bVar1 << 4 | *(uint *)(param_1 + 0x74));
  param_2[7] = (float)(*(int *)(param_1 + 0x70) << 0x1c);
  return;
}



// FUNCTION 144b1946a FUN_144b1946a body=390 status=ok
// SIG undefined FUN_144b1946a(void)

ulonglong FUN_144b1946a(longlong param_1,ulonglong *param_2,byte param_3,ushort param_4,char param_5
                       )

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar6 = *param_2;
  uVar5 = ((uVar6 & 0xfffffffffffffff) >> 0x21 ^ uVar6 & 0xfffffffffffffff) * -0xae502812aa7333;
  uVar5 = (uVar5 >> 0x21 ^ uVar5) * -0x3b314601e57a13ad;
  uVar7 = (ulonglong)(((uint)(uVar5 >> 0x21) ^ (uint)uVar5) & 0x3ff);
  uVar2 = *(ushort *)(param_1 + uVar7 * 2);
  if (uVar2 != 0xffff) {
    lVar4 = *(longlong *)(param_1 + 0xd800);
    uVar5 = (ulonglong)uVar2;
    do {
      uVar10 = *(ulonglong *)(lVar4 + uVar5 * 8);
      if (((uVar10 ^ uVar6) & 0xfffffffffffffff) == 0) {
        uVar7 = (ulonglong)((uint)(uVar6 >> 0x3c) & 7);
        uVar6 = (ulonglong)((uint)(uVar10 >> 0x3c) & 7);
        if (uVar6 < uVar7) {
          uVar6 = uVar7;
        }
        *(ulonglong *)(lVar4 + uVar5 * 8) = uVar10 & 0x8fffffffffffffff | uVar6 << 0x3c;
        uVar7 = uVar10 >> 0x3f;
        if (uVar10 >> 0x3f < *param_2 >> 0x3f) {
          uVar7 = *param_2 >> 0x3f;
        }
        *(ulonglong *)(lVar4 + uVar5 * 8) =
             uVar10 & 0xfffffffffffffff | uVar6 << 0x3c | uVar7 << 0x3f;
        uVar9 = (uint)param_4 + (uint)*(ushort *)(*(longlong *)(param_1 + 0xd828) + uVar5 * 2);
        uVar8 = (undefined2)uVar9;
        if (0xfffe < uVar9) {
          uVar8 = 0xffff;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0xd828) + uVar5 * 2) = uVar8;
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd830) + uVar5);
        *pbVar1 = *pbVar1 | param_3;
        return uVar5;
      }
      uVar3 = *(ushort *)(param_1 + 0x800 + uVar5 * 2);
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 != 0xffff);
  }
  uVar9 = *(uint *)(param_1 + 0xd840);
  uVar10 = (ulonglong)uVar9;
  uVar6 = CONCAT62((int6)(uVar5 >> 0x10),0xffff);
  if (uVar10 < 0x1000) {
    *(uint *)(param_1 + 0xd840) = uVar9 + 1;
    *(ushort *)(param_1 + 0x800 + uVar10 * 2) = uVar2;
    *(short *)(param_1 + uVar7 * 2) = (short)uVar9;
    *(ulonglong *)(*(longlong *)(param_1 + 0xd800) + uVar10 * 8) = *param_2;
    *(ushort *)(*(longlong *)(param_1 + 0xd828) + uVar10 * 2) = param_4;
    *(byte *)(*(longlong *)(param_1 + 0xd830) + uVar10) = param_3;
    *(char *)(*(longlong *)(param_1 + 0xd838) + uVar10) = param_5 * '\x02';
    uVar6 = uVar10;
  }
  return uVar6;
}



// FUNCTION 144b195f0 FUN_144b195f0 body=281 status=ok
// SIG undefined FUN_144b195f0(void)

void FUN_144b195f0(longlong param_1,ushort param_2,byte param_3,byte param_4,byte param_5,
                  int param_6,uint param_7,byte param_8,uint param_9)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar7 = param_6 << 0x1c | (param_3 & 0xf) << 0x14 | (uint)param_2 | (uint)(param_5 & 0xf) << 0x18
          | (param_9 & 0xf) << 0x10;
  uVar2 = CONCAT44(uVar7,(uint)param_4 << 0x1c | (uint)(param_8 & 0xf) << 0x18 | param_7 & 0xffffff)
  ;
  uVar3 = (uVar7 >> 1 ^ uVar2) * -0xae502812aa7333;
  lVar4 = (uVar3 >> 0x21 ^ uVar3) * -0x3b314601e57a13ad;
  uVar3 = (ulonglong)(((uint)((ulonglong)lVar4 >> 0x21) ^ (uint)lVar4) & 0x3ff);
  uVar1 = *(ushort *)(param_1 + 0x2800 + uVar3 * 2);
  if (uVar1 != 0xffff) {
    uVar6 = uVar1;
    do {
      if (uVar2 == *(ulonglong *)(*(longlong *)(param_1 + 0xd808) + (ulonglong)uVar6 * 8)) {
        return;
      }
      uVar6 = *(ushort *)(param_1 + 0x3000 + (ulonglong)uVar6 * 2);
    } while (uVar6 != 0xffff);
  }
  uVar7 = *(uint *)(param_1 + 0xd84c);
  uVar5 = (ulonglong)uVar7;
  if (uVar5 < 0x1f00) {
    *(uint *)(param_1 + 0xd84c) = uVar7 + 1;
    *(ushort *)(param_1 + 0x3000 + uVar5 * 2) = uVar1;
    *(short *)(param_1 + 0x2800 + uVar3 * 2) = (short)uVar7;
    *(ulonglong *)(*(longlong *)(param_1 + 0xd808) + uVar5 * 8) = uVar2;
  }
  return;
}



// FUNCTION 144b1970a FUN_144b1970a body=113 status=ok
// SIG undefined FUN_144b1970a(void)

void FUN_144b1970a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + lVar3 * 8);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x24c) == 0)) {
        FUN_144725486(lVar1);
        FUN_143121a7c(lVar1);
        FUN_1400020a8(lVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x98);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 144b1977c FUN_144b1977c body=367 status=ok
// SIG undefined FUN_144b1977c(void)

void FUN_144b1977c(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = *(uint *)(param_1 + 0x18);
  if ((ulonglong)uVar10 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar11 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(lVar4 + uVar11 * 4);
      if (uVar2 == uVar7) {
        uVar6 = uVar6 + 1;
      }
      else {
        if (uVar7 != 0xffffffff) {
          uVar9 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          uVar9 = uVar9 >> 0x10 ^ uVar9;
          while( true ) {
            uVar9 = uVar9 & 0x3fff;
            uVar1 = *(ushort *)(lVar5 + 0xc + (ulonglong)uVar9 * 2);
            if (uVar1 == 0xffff) break;
            uVar8 = (ulonglong)uVar1;
            if (*(uint *)(lVar5 + 0x800c + uVar8 * 4) == uVar7) {
              uVar6 = uVar6 + *(ushort *)(lVar5 + 0x1000c + uVar8 * 2);
              if (0xfffe < uVar6) {
                uVar6 = 0xffff;
              }
              goto LAB_144b19810;
            }
            uVar9 = uVar9 + 1;
          }
          uVar3 = *(uint *)(lVar5 + 4);
          uVar8 = (ulonglong)uVar3;
          if (uVar8 < 0x2000) {
            *(uint *)(lVar5 + 4) = uVar3 + 1;
            *(short *)(lVar5 + 0xc + (ulonglong)uVar9 * 2) = (short)uVar3;
            *(uint *)(lVar5 + 0x800c + uVar8 * 4) = uVar7;
LAB_144b19810:
            *(short *)(lVar5 + 0x1000c + uVar8 * 2) = (short)uVar6;
          }
        }
        uVar6 = 1;
        uVar7 = uVar2;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
    if (uVar7 != 0xffffffff) {
      uVar10 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar10 = uVar10 >> 0x10 ^ uVar10;
      while( true ) {
        uVar10 = uVar10 & 0x3fff;
        uVar1 = *(ushort *)(lVar5 + 0xc + (ulonglong)uVar10 * 2);
        if (uVar1 == 0xffff) break;
        uVar11 = (ulonglong)uVar1;
        if (*(uint *)(lVar5 + 0x800c + uVar11 * 4) == uVar7) {
          uVar6 = uVar6 + *(ushort *)(lVar5 + 0x1000c + uVar11 * 2);
          if (0xfffe < uVar6) {
            uVar6 = 0xffff;
          }
          goto LAB_144b198b2;
        }
        uVar10 = uVar10 + 1;
      }
      uVar2 = *(uint *)(lVar5 + 4);
      uVar11 = (ulonglong)uVar2;
      if (uVar11 < 0x2000) {
        *(uint *)(lVar5 + 4) = uVar2 + 1;
        *(short *)(lVar5 + 0xc + (ulonglong)uVar10 * 2) = (short)uVar2;
        *(uint *)(lVar5 + 0x800c + uVar11 * 4) = uVar7;
LAB_144b198b2:
        *(short *)(lVar5 + 0x1000c + uVar11 * 2) = (short)uVar6;
      }
    }
  }
  return;
}



// FUNCTION 144b198ec FUN_144b198ec body=1079 status=ok
// SIG undefined FUN_144b198ec(void)

void FUN_144b198ec(int *param_1,longlong param_2,uint param_3,ulonglong param_4,ushort param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  BOOL BVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ulonglong uVar15;
  
  lVar7 = (param_4 & 0xffffffff) * 0x110;
  uVar15 = (ulonglong)param_5;
  if (*(uint *)(param_2 + 0x100 + lVar7) == (uint)param_5) {
    return;
  }
  param_2 = param_2 + lVar7;
  *(uint *)(param_2 + 0x100) = (uint)param_5;
  uVar10 = *(uint *)(param_2 + 0x104);
  if (uVar10 < param_3) {
LAB_144b19934:
    *(uint *)(param_2 + 0x104) = uVar10 + 1;
    *(ushort *)(param_2 + (ulonglong)uVar10 * 2) = param_5;
    return;
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x24) + (param_4 & 0xffff) * 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar7 + 0x48);
  if (uVar10 < 0x80) {
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      uVar10 = *(uint *)(param_2 + 0x104);
      goto LAB_144b19934;
    }
  }
  else {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar4 = *param_1;
  puVar1 = (uint *)(lVar7 + 0x70);
  if (((uint)param_5 < *(uint *)(lVar7 + 0x78)) &&
     (*(short *)(*(longlong *)(lVar7 + 0x90) + uVar15 * 2) != -1)) {
    uVar10 = *(byte *)(*(longlong *)(lVar7 + 0xd8) + 7 + uVar15 * 8) & 0xf | iVar4 << 4;
    *(uint *)(*(longlong *)(lVar7 + 0x88) + uVar15 * 4) = uVar10;
    uVar2 = *(ushort *)(*(longlong *)(lVar7 + 0x90) + uVar15 * 2);
    uVar15 = (ulonglong)uVar2;
    if (uVar15 == 0) {
      lVar9 = *(longlong *)(lVar7 + 0x80);
      uVar15 = 0;
    }
    else {
      lVar9 = *(longlong *)(lVar7 + 0x80);
      if (uVar10 < *(uint *)(*(longlong *)(lVar7 + 0x88) +
                            (ulonglong)*(ushort *)(lVar9 + (ulonglong)(uVar2 - 1 & 0x1fffe)) * 4)) {
        FUN_1456e6cf4(puVar1);
        goto LAB_144b19a22;
      }
    }
    uVar13 = uVar2 * 2 + 1;
    uVar10 = *(uint *)(lVar7 + 0x70);
    if (uVar13 < uVar10) {
      uVar3 = *(ushort *)(lVar9 + uVar15 * 2);
      uVar12 = uVar2;
      do {
        uVar14 = uVar12 * 2 + 2;
        lVar9 = *(longlong *)(lVar7 + 0x80);
        lVar5 = *(longlong *)(lVar7 + 0x88);
        uVar11 = uVar13;
        if ((uVar14 < uVar10) &&
           (*(uint *)(lVar5 + (ulonglong)*(ushort *)(lVar9 + (ulonglong)(uint)uVar14 * 2) * 4) <=
            *(uint *)(lVar5 + (ulonglong)*(ushort *)(lVar9 + (ulonglong)uVar13 * 2) * 4))) {
          uVar11 = uVar14;
        }
        uVar13 = *(ushort *)(lVar9 + (ulonglong)uVar11 * 2);
        if (*(uint *)(lVar5 + (ulonglong)uVar3 * 4) <= *(uint *)(lVar5 + (ulonglong)uVar13 * 4))
        break;
        *(ushort *)(lVar9 + (ulonglong)((uint)uVar12 * 2)) = uVar13;
        *(ushort *)
         (*(longlong *)(lVar7 + 0x90) +
         (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)((uint)uVar12 * 2)) * 2) =
             uVar12;
        uVar13 = uVar11 * 2 + 1;
        uVar10 = *(uint *)(lVar7 + 0x70);
        uVar12 = uVar11;
      } while (uVar13 < uVar10);
      if (uVar12 != uVar2) {
        *(ushort *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)((uint)uVar12 * 2)) = uVar3;
        *(ushort *)
         (*(longlong *)(lVar7 + 0x90) +
         (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)((uint)uVar12 * 2)) * 2) =
             uVar12;
      }
    }
  }
LAB_144b19a22:
  if (*(int *)(param_2 + 0x104) != 0) {
    uVar15 = 0;
    do {
      uVar2 = *(ushort *)(param_2 + uVar15 * 2);
      uVar8 = (ulonglong)uVar2;
      if (((uint)uVar2 < *(uint *)(lVar7 + 0x78)) &&
         (*(short *)(*(longlong *)(lVar7 + 0x90) + uVar8 * 2) != -1)) {
        uVar10 = *(byte *)(*(longlong *)(lVar7 + 0xd8) + 7 + uVar8 * 8) & 0xf | iVar4 << 4;
        *(uint *)(*(longlong *)(lVar7 + 0x88) + uVar8 * 4) = uVar10;
        uVar2 = *(ushort *)(*(longlong *)(lVar7 + 0x90) + uVar8 * 2);
        uVar8 = (ulonglong)uVar2;
        if (uVar8 == 0) {
          lVar9 = *(longlong *)(lVar7 + 0x80);
          uVar8 = 0;
        }
        else {
          lVar9 = *(longlong *)(lVar7 + 0x80);
          if (uVar10 < *(uint *)(*(longlong *)(lVar7 + 0x88) +
                                (ulonglong)*(ushort *)(lVar9 + (ulonglong)(uVar2 - 1 & 0x1fffe)) * 4
                                )) {
            FUN_1456e6cf4(puVar1);
            goto LAB_144b19abc;
          }
        }
        uVar13 = uVar2 * 2 + 1;
        uVar10 = *puVar1;
        if (uVar13 < uVar10) {
          uVar3 = *(ushort *)(lVar9 + uVar8 * 2);
          uVar12 = uVar2;
          do {
            uVar14 = uVar12 * 2 + 2;
            lVar9 = *(longlong *)(lVar7 + 0x80);
            lVar5 = *(longlong *)(lVar7 + 0x88);
            uVar11 = uVar13;
            if ((uVar14 < uVar10) &&
               (*(uint *)(lVar5 + (ulonglong)*(ushort *)(lVar9 + (ulonglong)(uint)uVar14 * 2) * 4)
                <= *(uint *)(lVar5 + (ulonglong)*(ushort *)(lVar9 + (ulonglong)uVar13 * 2) * 4))) {
              uVar11 = uVar14;
            }
            uVar13 = *(ushort *)(lVar9 + (ulonglong)uVar11 * 2);
            if (*(uint *)(lVar5 + (ulonglong)uVar3 * 4) <= *(uint *)(lVar5 + (ulonglong)uVar13 * 4))
            break;
            *(ushort *)(lVar9 + (ulonglong)((uint)uVar12 * 2)) = uVar13;
            *(ushort *)
             (*(longlong *)(lVar7 + 0x90) +
             (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)((uint)uVar12 * 2)) * 2
             ) = uVar12;
            uVar13 = uVar11 * 2 + 1;
            uVar10 = *(uint *)(lVar7 + 0x70);
            uVar12 = uVar11;
          } while (uVar13 < uVar10);
          if (uVar12 != uVar2) {
            *(ushort *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)((uint)uVar12 * 2)) = uVar3;
            *(ushort *)
             (*(longlong *)(lVar7 + 0x90) +
             (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)((uint)uVar12 * 2)) * 2
             ) = uVar12;
          }
        }
      }
LAB_144b19abc:
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_2 + 0x104));
  }
  LeaveCriticalSection(lpCriticalSection);
  *(int *)(param_2 + 0x108) = *(int *)(param_2 + 0x104) + *(int *)(param_2 + 0x108) + 1;
  *(undefined4 *)(param_2 + 0x104) = 0;
  return;
}



// FUNCTION 144b19d24 FUN_144b19d24 body=31 status=ok
// SIG undefined FUN_144b19d24(void)

undefined8 FUN_144b19d24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b19d44 FUN_144b19d44 body=31 status=ok
// SIG undefined FUN_144b19d44(void)

undefined8 FUN_144b19d44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b19d65 FUN_144b19d65 body=249 status=ok
// SIG undefined FUN_144b19d65(void)

int FUN_144b19d65(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 == '\0') {
    if (param_1 < 0x49) {
      if (param_1 < 0x2c) {
        if (param_1 == 0x1b) {
          return 0x1c;
        }
        if (param_1 == 0x13) {
          return 0x15;
        }
        if (param_1 == 0x27) {
          return 0x29;
        }
      }
      else {
        if (param_1 == 0x46) {
          return 0x47;
        }
        if (param_1 == 0x35) {
          return 0x38;
        }
        if (param_1 == 0x2c) {
          return 0x2e;
        }
      }
    }
    else if (param_1 < 0x61) {
      if (param_1 == 0x5a) {
        return 0x57;
      }
      if (param_1 == 0x4c) {
        return 0x4d;
      }
      if (param_1 == 0x49) {
        return 0x4a;
      }
    }
    else if (param_1 == 0x61) {
      return 0x62;
    }
  }
  else if (param_1 < 0x5a) {
    if (param_1 < 0x46) {
      if (param_1 < 0x27) {
        if (param_1 == 0x13) {
          return 0x15;
        }
        if (param_1 == 0x1b) {
          return 0x1d;
        }
      }
      else {
        if (param_1 == 0x27) {
          return 0x29;
        }
        if (param_1 == 0x2c) {
          return 0x2e;
        }
        if (param_1 == 0x35) {
          return 0x38;
        }
      }
    }
    else {
      if (param_1 == 0x46) {
        return 0x48;
      }
      if (param_1 == 0x4c) {
        return 0x4e;
      }
      if (param_1 == 0x49) {
        return 0x4b;
      }
    }
  }
  else {
    iVar1 = 0x5b;
    if ((param_1 != 0x5a) && (iVar1 = param_1, param_1 == 0x61)) {
      return 99;
    }
  }
  return iVar1;
}



// FUNCTION 144b19e5e FUN_144b19e5e body=157 status=ok
// SIG undefined FUN_144b19e5e(void)

void FUN_144b19e5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0x11;
  do {
    *(undefined8 *)(param_1 + -0x11 + lVar1) = 0;
    *(undefined8 *)(param_1 + -9 + lVar1) = 0xffffffff00000000;
    *(undefined2 *)(param_1 + -1 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd1);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  lVar1 = 0xd9;
  do {
    *(undefined8 *)(param_1 + -0x11 + lVar1) = 0;
    *(undefined8 *)(param_1 + -9 + lVar1) = 0xffffffff00000000;
    *(undefined2 *)(param_1 + -1 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x199);
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c1) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  return;
}



// FUNCTION 144b19efc FUN_144b19efc body=126 status=ok
// SIG undefined FUN_144b19efc(void)

void * FUN_144b19efc(void *param_1,void *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  memcpy(param_1,param_2,0xe8);
  lVar3 = *(longlong *)((longlong)param_2 + 0xe8);
  lVar4 = *(longlong *)((longlong)param_1 + 0xe8);
  if (lVar4 != lVar3) {
    *(longlong *)((longlong)param_1 + 0xe8) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xf7) = *(undefined4 *)((longlong)param_2 + 0xf7);
  *(undefined8 *)((longlong)param_1 + 0xf0) = *(undefined8 *)((longlong)param_2 + 0xf0);
  return param_1;
}



// FUNCTION 144b19f7a FUN_144b19f7a body=89 status=ok
// SIG undefined FUN_144b19f7a(void)

undefined8 FUN_144b19f7a(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  uVar2 = 0;
  if (iVar1 < 0x21) {
    if (iVar1 < 0x11) {
      if (iVar1 < 2) {
        if (iVar1 == 1) {
          return 1;
        }
        if (iVar1 == 0) {
          return uVar2;
        }
      }
      else {
        if (iVar1 == 2) {
          return uVar2;
        }
        if (iVar1 == 0x10) {
          return 2;
        }
      }
    }
    else {
      if (iVar1 == 0x20) {
        return uVar2;
      }
      if (iVar1 == 0x11) {
        return 3;
      }
      if (iVar1 == 0x12) {
        return 2;
      }
    }
  }
  else {
    if (iVar1 == 0x21) {
      return 1;
    }
    if (iVar1 == 0x22) {
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144b19fd4 FUN_144b19fd4 body=204 status=ok
// SIG undefined FUN_144b19fd4(void)

longlong FUN_144b19fd4(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    pcVar1 = *(code **)(*param_1 + 8);
    if (pcVar1 == (code *)&LAB_144b1c56a) {
      plVar2 = (longlong *)param_1[0xc];
      if (*(code **)(*plVar2 + 8) == FUN_1447d3e98) {
        plVar2 = plVar2 + 4;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
      }
    }
    else if (pcVar1 == FUN_1447d3e98) {
      plVar2 = param_1 + 4;
    }
    else {
      plVar2 = (longlong *)(*pcVar1)(param_1);
    }
    if ((*plVar2 & 0x40000) != 0) {
      param_1 = (longlong *)**(undefined8 **)(param_1[0x48] + 0xa0);
    }
    pcVar1 = *(code **)(*param_1 + 0x30);
    if (pcVar1 == (code *)&LAB_144b1c54c) {
      param_1 = (longlong *)param_1[0xc];
      pcVar1 = *(code **)(*param_1 + 0x30);
    }
    if (pcVar1 != (code *)&LAB_1447c19d2) {
      param_1 = (longlong *)(*pcVar1)(param_1);
    }
    if (param_1 != (longlong *)0x0) {
      return param_1[(param_2 & 0xffffffff) + 0x25];
    }
  }
  return 0;
}



// FUNCTION 144b1a0a0 FUN_144b1a0a0 body=284 status=ok
// SIG undefined FUN_144b1a0a0(void)

void FUN_144b1a0a0(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = 0;
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x118);
    if (uVar5 == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
    lVar9 = *(longlong *)(param_3 + 0xf8 + (ulonglong)uVar7 * 8);
  }
  lVar8 = lVar9 + 0x78;
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  uVar6 = (ulonglong)param_2;
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = (ulonglong)param_4 + *(longlong *)(lVar8 + 0x58);
    iVar2 = *(int *)(lVar8 + 0x68) - param_4;
  }
  lVar3 = uVar6 * 0x10 + param_1;
  plVar4 = (longlong *)(lVar3 + 0x3a0);
  uVar5 = (uint)*(ushort *)(param_1 + 0x8cc + uVar6 * 2);
  if (((lVar9 == *plVar4) && (*(uint *)(lVar3 + 0x3ac) == uVar5)) &&
     (iVar2 == *(int *)(lVar3 + 0x3a8))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  *(longlong *)(param_1 + 0x5a0 + uVar6 * 8) = lVar8;
  if (lVar8 == 0) {
    *plVar4 = 0;
    *(undefined8 *)(lVar3 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x5a0 + uVar6 * 8) = 0;
    *(undefined8 *)(param_1 + 0x6a0 + uVar6 * 8) = 0;
    bVar1 = (byte)param_2 & 0x1f;
    iVar2 = -1;
    uVar5 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & *(uint *)(param_1 + 0x7a4);
    *(uint *)(param_1 + 0x7a4) = uVar5;
    if (uVar5 == 0) goto LAB_144b1a152;
  }
  else {
    *(undefined8 *)(param_1 + 0x6a0 + uVar6 * 8) = *(undefined8 *)(lVar8 + 0x10);
    *plVar4 = lVar9;
    *(int *)(lVar3 + 0x3a8) = iVar2;
    *(uint *)(lVar3 + 0x3ac) = uVar5;
    uVar5 = *(uint *)(param_1 + 0x7a4) | 1 << (param_2 & 0x1f);
    *(uint *)(param_1 + 0x7a4) = uVar5;
  }
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
LAB_144b1a152:
  *(int *)(param_1 + 0x7a0) = iVar2;
  return;
}



// FUNCTION 144b1a1bc FUN_144b1a1bc body=183 status=ok
// SIG undefined FUN_144b1a1bc(void)

void FUN_144b1a1bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  memset(*(void **)(param_1 + 0x3bd0),0,(longlong)*(int *)(param_1 + 0x3bd8) << 3);
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (lVar1 == 0) {
    if (*(int *)(param_2 + 0x60) < 1) {
      lVar1 = 0;
    }
    else {
      lVar1 = 0;
      lVar2 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 8);
        if (*(longlong *)(param_2 + 8) == 0) {
          lVar3 = param_2;
        }
        lVar4 = *(longlong *)(param_2 + 0x58);
        if (*(longlong *)(param_2 + 0x58) == 0) {
          lVar4 = param_2 + 0x18;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x3bd0) + (ulonglong)*(byte *)(lVar3 + lVar2) * 8) =
             *(undefined8 *)(lVar4 + lVar2 * 8);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_2 + 0x60));
    }
  }
  else if (0 < *(int *)(param_2 + 0x60)) {
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x58);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        lVar3 = param_2 + 0x18;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x3bd0) + lVar2 * 8) =
           *(undefined8 *)(lVar3 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x60));
  }
  *(longlong *)(param_1 + 0x3be0) = lVar1;
  return;
}



// FUNCTION 144b1a274 FUN_144b1a274 body=392 status=ok
// SIG undefined FUN_144b1a274(void)

void FUN_144b1a274(longlong param_1,float param_2,float param_3,undefined4 param_4,float param_5,
                  float param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_78 [32];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fStack_50 = param_5 - param_2;
  fStack_4c = param_6 - param_3;
  uStack_44 = param_7;
  if ((0.0 < fStack_50) && (0.0 < fStack_4c)) {
    if ((*(int *)(param_1 + 0x218) != 1) ||
       (auVar1._4_4_ = param_3, auVar1._0_4_ = param_2, auVar1._8_4_ = fStack_50,
       auVar1._12_4_ = fStack_4c,
       CONCAT44(param_7,param_4) != *(longlong *)(param_1 + 0x22c) ||
       auVar1 != *(undefined1 (*) [16])(param_1 + 0x21c))) {
      *(ulonglong *)(param_1 + 0x22c) = CONCAT44(param_7,param_4);
      *(ulonglong *)(param_1 + 0x21c) = CONCAT44(param_3,param_2);
      *(ulonglong *)(param_1 + 0x224) = CONCAT44(fStack_4c,fStack_50);
      *(undefined4 *)(param_1 + 0x218) = 1;
      *(undefined1 *)(param_1 + 0x1ea) = 1;
    }
    local_40 = (undefined4)(longlong)param_2;
    uStack_3c = (undefined4)(longlong)param_3;
    uStack_38 = (undefined4)(longlong)param_5;
    uStack_34 = (undefined4)(longlong)param_6;
    if ((*(int *)(param_1 + 0x8c8) != 1) ||
       (auVar2._4_4_ = uStack_3c, auVar2._0_4_ = local_40, auVar2._8_4_ = uStack_38,
       auVar2._12_4_ = uStack_34, auVar2 != *(undefined1 (*) [16])(param_1 + 0x7c8))) {
      *(undefined4 *)(param_1 + 0x7c8) = local_40;
      *(undefined4 *)(param_1 + 0x7cc) = uStack_3c;
      *(undefined4 *)(param_1 + 2000) = uStack_38;
      *(undefined4 *)(param_1 + 0x7d4) = uStack_34;
      *(undefined4 *)(param_1 + 0x8c8) = 1;
      *(undefined1 *)(param_1 + 0x1eb) = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
  local_58 = param_2;
  fStack_54 = param_3;
  local_48 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1a3fe FUN_144b1a3fe body=233 status=ok
// SIG undefined FUN_144b1a3fe(void)

void FUN_144b1a3fe(longlong param_1,char param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [32];
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2 == '\0') {
    iStack_14 = (int)*(float *)(param_1 + 0x220);
    local_18 = (int)*(float *)(param_1 + 0x21c);
    iStack_c = (int)*(float *)(param_1 + 0x228) + iStack_14;
    iStack_10 = (int)*(float *)(param_1 + 0x224) + local_18;
  }
  else {
    iStack_10 = param_5;
    iStack_c = param_6;
    local_18 = param_3;
    iStack_14 = param_4;
  }
  if ((*(int *)(param_1 + 0x8c8) != 1) ||
     (auVar1._4_4_ = iStack_14, auVar1._0_4_ = local_18, auVar1._8_4_ = iStack_10,
     auVar1._12_4_ = iStack_c, auVar1 != *(undefined1 (*) [16])(param_1 + 0x7c8))) {
    *(int *)(param_1 + 0x7c8) = local_18;
    *(int *)(param_1 + 0x7cc) = iStack_14;
    *(int *)(param_1 + 2000) = iStack_10;
    *(int *)(param_1 + 0x7d4) = iStack_c;
    *(undefined4 *)(param_1 + 0x8c8) = 1;
    *(undefined1 *)(param_1 + 0x1eb) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1a588 FUN_144b1a588 body=488 status=ok
// SIG undefined FUN_144b1a588(void)

void FUN_144b1a588(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14a349060;
  local_80 = param_1 + -0x1c8;
  local_a8 = FUN_147370464;
  lVar8 = 0x24;
  do {
    plVar3 = *(longlong **)(param_1 + -0x14 + lVar8);
    if ((plVar3 != (longlong *)0x0) &&
       (plVar4 = *(longlong **)(param_1 + -0xc + lVar8),
       plVar3 != plVar4 && plVar4 != (longlong *)0x0)) {
      uVar1 = *(undefined1 *)(param_1 + lVar8);
      uVar2 = *(undefined4 *)(param_1 + -4 + lVar8);
      (**(code **)(*plVar3 + 8))(plVar3);
      (**(code **)(*plVar4 + 8))(plVar4);
      pcVar5 = local_a8;
      local_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0xffffffff;
      pppuVar7 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar7 = &local_88;
      }
      local_d0 = plVar3;
      local_c8 = plVar4;
      local_c0 = uVar1;
      local_bc = uVar2;
      uVar6 = (*(code *)(*pppuVar7)[1])();
      (*pcVar5)(uVar6,&local_d0);
    }
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xe4);
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if ((plVar3 != (longlong *)0x0) &&
     (plVar4 = *(longlong **)(param_1 + 0xd8), plVar3 != plVar4 && plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar4 + 8))(plVar4);
    pcVar5 = local_a8;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    uStack_ac = 0xffffffff;
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    local_d0 = plVar3;
    local_c8 = plVar4;
    uVar6 = (*(code *)(*pppuVar7)[1])();
    (*pcVar5)(uVar6,&local_d0);
  }
  if (local_a8 != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar7 = local_98;
    }
    pcVar5 = (code *)(*pppuVar7)[2];
    if (pcVar5 == (code *)&LAB_1473704d8) {
      pcVar5 = (code *)(*pppuVar7)[3];
      if (pcVar5 != FUN_1473704f2) {
        (*pcVar5)(pppuVar7,0);
      }
    }
    else {
      (*pcVar5)(pppuVar7);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1a7d1 FUN_144b1a7d1 body=83 status=ok
// SIG undefined FUN_144b1a7d1(void)

void FUN_144b1a7d1(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar5) = *(undefined4 *)(param_2 + 8 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      *(undefined8 *)(param_1 + 0x20 + lVar5) = *(undefined8 *)(param_2 + 0x20 + lVar5);
      cVar3 = *(char *)(param_2 + 0x30 + lVar5);
      *(char *)(param_1 + 0x30 + lVar5) = cVar3;
      if (cVar3 == '\x01') {
        *(undefined8 *)(param_1 + 0x28 + lVar5) = *(undefined8 *)(param_2 + 0x28 + lVar5);
      }
      lVar5 = lVar5 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144b1a824 FUN_144b1a824 body=1159 status=ok
// SIG undefined FUN_144b1a824(void)

longlong FUN_144b1a824(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  uVar1 = *param_1;
  uVar3 = uVar1 * 2;
  if (uVar3 < 0x21) {
    if (0x10 < uVar3) {
      lVar10 = (ulonglong)(uVar1 << 2) + 0x9ae16a3b2f90404f;
      uVar7 = *(longlong *)(param_1 + 3) + 0x9ae16a3b2f90404f;
      uVar5 = *(longlong *)((longlong)param_1 + ((ulonglong)uVar3 - 4)) * lVar10;
      uVar4 = (uVar7 << 0x2e | uVar7 >> 0x12) + *(longlong *)(param_1 + 1) * -0x4b6d499041670d8d +
              uVar5;
      uVar7 = *(longlong *)(param_1 + 1) * -0x4b6d499041670d8d + *(longlong *)(param_1 + 3);
      uVar7 = ((uVar5 << 0x22 | uVar5 >> 0x1e) +
               (uVar7 * 0x200000 | uVar7 >> 0x2b) +
               *(longlong *)((longlong)param_1 + ((ulonglong)uVar3 - 0xc)) * -0x651e95c4d06fbfb1 ^
              uVar4) * lVar10;
      uVar7 = uVar7 >> 0x2f ^ uVar4 ^ uVar7;
      goto LAB_144b1a895;
    }
    if (uVar3 < 8) {
      if (3 < uVar3) {
        lVar12 = (ulonglong)(uVar1 << 2) + 0x9ae16a3b2f90404f;
        uVar7 = (ulonglong)*(uint *)((longlong)param_1 + (ulonglong)uVar3);
        uVar5 = ((ulonglong)uVar3 + (ulonglong)param_1[1] * 8 ^ uVar7) * lVar12;
        uVar7 = (uVar5 >> 0x2f ^ uVar7 ^ uVar5) * lVar12;
        return (uVar7 >> 0x2f ^ uVar7) * lVar12;
      }
      if (uVar3 == 0) {
        return -0x651e95c4d06fbfb1;
      }
      uVar7 = (ulonglong)(uVar3 + (uint)*(byte *)((longlong)param_1 + (ulonglong)uVar3 + 3) * 4) *
              -0x3c5a37a36834ced9 ^
              (ulonglong)
              CONCAT11(*(undefined1 *)((longlong)param_1 + (ulonglong)(uVar1 & 0x7fffffff) + 4),
                       (char)param_1[1]) * -0x651e95c4d06fbfb1;
      return (uVar7 >> 0x2f ^ uVar7) * -0x651e95c4d06fbfb1;
    }
    lVar10 = (ulonglong)(uVar1 << 2) + 0x9ae16a3b2f90404f;
    uVar4 = *(longlong *)(param_1 + 1) + 0x9ae16a3b2f90404f;
    uVar5 = *(ulonglong *)((longlong)param_1 + ((ulonglong)uVar3 - 4));
    uVar7 = (uVar5 << 0x1b | uVar5 >> 0x25) * lVar10 + uVar4;
    uVar5 = ((uVar4 << 0x27 | uVar4 >> 0x19) + uVar5) * lVar10;
  }
  else {
    if (uVar3 < 0x41) {
      lVar11 = (ulonglong)(uVar1 << 2) + 0x9ae16a3b2f90404f;
      uVar4 = (ulonglong)uVar3;
      uVar7 = *(ulonglong *)((longlong)param_1 + (uVar4 - 0x1c));
      lVar12 = *(longlong *)((longlong)param_1 + (uVar4 - 0x14));
      uVar5 = *(ulonglong *)(param_1 + 3);
      lVar2 = *(longlong *)(param_1 + 7) * 9;
      lVar10 = *(longlong *)((longlong)param_1 + (uVar4 - 4));
      lVar6 = *(longlong *)((longlong)param_1 + (uVar4 - 0xc)) * lVar11;
      uVar13 = *(longlong *)(param_1 + 1) * -0x651e95c4d06fbfb1 + lVar10;
      uVar4 = *(longlong *)(param_1 + 5) * -0x651e95c4d06fbfb1 + lVar2;
      uVar14 = uVar13 ^ uVar7;
      uVar13 = (uVar14 + lVar2 + 1 +
               ((uVar5 << 0x22 | uVar5 >> 0x1e) + lVar12) * 9 + (uVar13 * 0x200000 | uVar13 >> 0x2b)
               ) * lVar11;
      lVar8 = (uVar4 * 0x400000 | uVar4 >> 0x2a) + lVar12;
      uVar13 = (lVar6 + lVar2 + uVar14 + 1 +
               (uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
               | uVar13 << 0x38)) * lVar11;
      uVar13 = (lVar10 + uVar4 + lVar12 + lVar8 +
               (uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
               | uVar13 << 0x38)) * lVar11;
      uVar7 = lVar6 + uVar7 +
              (uVar4 + lVar12 + uVar5 +
              (uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
               (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
               (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 | (uVar13 & 0xff00) << 0x28
              | uVar13 << 0x38)) * lVar11;
      return (uVar7 >> 0x2f ^ uVar7) * lVar11 + lVar8;
    }
    uVar14 = (ulonglong)uVar3;
    lVar12 = *(longlong *)((longlong)param_1 + (uVar14 - 0x24));
    lVar10 = *(longlong *)((longlong)param_1 + (uVar14 - 0xc));
    lVar2 = *(longlong *)((longlong)param_1 + (uVar14 - 0x34));
    lVar6 = *(longlong *)((longlong)param_1 + (uVar14 - 0x2c));
    uVar5 = *(ulonglong *)((longlong)param_1 + (uVar14 - 0x14));
    uVar7 = (lVar6 + uVar14 ^ uVar5) * -0x622015f714c7d297;
    uVar7 = (uVar7 >> 0x2f ^ uVar5 ^ uVar7) * -0x622015f714c7d297;
    uVar4 = (uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    lVar8 = *(longlong *)((longlong)param_1 + (uVar14 - 0x3c)) + uVar14;
    uVar13 = lVar8 + lVar12 + uVar4;
    uVar7 = lVar2 + lVar10;
    uVar16 = lVar6 + lVar2 + lVar8;
    uVar13 = (uVar16 * 0x100000 | uVar16 >> 0x2c) + lVar8 + (uVar13 << 0x2b | uVar13 >> 0x15);
    lVar2 = *(longlong *)((longlong)param_1 + (uVar14 - 4));
    lVar6 = *(longlong *)((longlong)param_1 + (uVar14 - 0x1c)) + uVar7 + -0x4b6d499041670d8d;
    uVar17 = lVar2 + lVar12 + lVar6;
    uVar16 = uVar16 + lVar12;
    uVar5 = uVar5 + lVar10 + lVar6;
    uVar14 = uVar5 + lVar2;
    uVar5 = (uVar5 * 0x100000 | uVar5 >> 0x2c) + lVar6 + (uVar17 << 0x2b | uVar17 >> 0x15);
    lVar12 = lVar12 * -0x4b6d499041670d8d + *(longlong *)(param_1 + 1);
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)((longlong)param_1 + lVar10 + 0xc);
      lVar6 = *(longlong *)((longlong)param_1 + lVar10 + 0x14);
      uVar15 = lVar12 + uVar16 + uVar7 + lVar2;
      lVar8 = *(longlong *)((longlong)param_1 + lVar10 + 0x34);
      uVar7 = uVar7 + uVar13 + lVar8;
      lVar11 = *(longlong *)((longlong)param_1 + lVar10 + 0x2c);
      uVar7 = uVar16 + lVar11 + (uVar7 * 0x400000 | uVar7 >> 0x2a) * -0x4b6d499041670d8d;
      uVar17 = uVar4 + uVar14;
      lVar9 = uVar13 * -0x4b6d499041670d8d + *(longlong *)((longlong)param_1 + lVar10 + 4);
      lVar18 = *(longlong *)((longlong)param_1 + lVar10 + 0x1c);
      uVar13 = lVar2 + lVar6 + lVar9;
      uVar16 = uVar13 + lVar18;
      uVar4 = (uVar15 * 0x8000000 | uVar15 >> 0x25) * -0x4b6d499041670d8d ^ uVar5;
      lVar12 = (uVar17 * 0x80000000 | uVar17 >> 0x21) * -0x4b6d499041670d8d;
      uVar14 = uVar14 + lVar18 + lVar9 + uVar4;
      lVar2 = *(longlong *)((longlong)param_1 + lVar10 + 0x3c);
      lVar18 = uVar5 + lVar12 + *(longlong *)((longlong)param_1 + lVar10 + 0x24);
      uVar17 = lVar6 + lVar2 + uVar7 + lVar18;
      uVar13 = lVar9 + (uVar13 * 0x100000 | uVar13 >> 0x2c) + (uVar14 << 0x2b | uVar14 >> 0x15);
      uVar5 = lVar11 + lVar8 + lVar18;
      uVar14 = uVar5 + lVar2;
      uVar5 = lVar18 + (uVar5 * 0x100000 | uVar5 >> 0x2c) + (uVar17 << 0x2b | uVar17 >> 0x15);
      lVar10 = lVar10 + 0x40;
    } while ((uVar3 - 1 & 0xffffffc0) != (uint)lVar10);
    lVar10 = -0x622015f714c7d297;
    uVar13 = (uVar13 ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar13 >> 0x2f ^ uVar5 ^ uVar13) * -0x622015f714c7d297;
    uVar5 = (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297 + lVar12;
    uVar13 = (uVar16 ^ uVar14) * -0x622015f714c7d297;
    uVar13 = (uVar13 >> 0x2f ^ uVar14 ^ uVar13) * -0x622015f714c7d297;
    uVar7 = (uVar7 >> 0x2f ^ uVar7) * -0x4b6d499041670d8d + uVar4 +
            (uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
  }
  uVar7 = (uVar7 ^ uVar5) * lVar10;
  uVar7 = uVar7 >> 0x2f ^ uVar5 ^ uVar7;
LAB_144b1a895:
  return (uVar7 * lVar10 >> 0x2f ^ uVar7 * lVar10) * lVar10;
}



// FUNCTION 144b1ad1a FUN_144b1ad1a body=237 status=ok
// SIG undefined FUN_144b1ad1a(void)

void FUN_144b1ad1a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x40);
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    iVar4 = 0;
    bVar7 = *plVar2 == param_2;
    iVar8 = 0;
    do {
      lVar5 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar6 = lVar5;
      iVar3 = iVar8 + 1;
      if (iVar8 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar10 = iVar3;
        if (lVar11 <= lVar6) break;
        iVar10 = iVar9 + 1;
        iVar9 = iVar10;
      } while (bVar7 == (plVar2[lVar6] == param_2));
      if (bVar7 == false) {
        if (iVar4 != iVar8) {
          memmove(plVar2 + iVar4,plVar2 + lVar5,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar4 = iVar4 + (iVar10 - iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar8 = iVar10;
    } while (lVar6 < lVar11);
    *(int *)(param_1 + 0x40) = iVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b1ae00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 144b1ae58 FUN_144b1ae58 body=343 status=ok
// SIG undefined FUN_144b1ae58(void)

undefined8 FUN_144b1ae58(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  
  *(bool *)param_2 = *(int *)(param_1 + 0x14) != 0;
  uVar2 = (undefined1)(0x305020104000607 >> ((char)*(uint *)(param_1 + 0x18) * '\b' & 0x3fU));
  if (7 < *(uint *)(param_1 + 0x18)) {
    uVar2 = 7;
  }
  *(undefined1 *)(param_2 + 1) = uVar2;
  *(bool *)(param_2 + 2) = *(int *)(param_1 + 0x1c) != 0;
  uVar2 = (undefined1)(0x305020104000607 >> ((char)*(uint *)(param_1 + 0x30) * '\b' & 0x3fU));
  if (7 < *(uint *)(param_1 + 0x30)) {
    uVar2 = 7;
  }
  *(undefined1 *)(param_2 + 3) = uVar2;
  cVar1 = (char)*(int *)(param_1 + 0x24) + -1;
  if (6 < *(int *)(param_1 + 0x24) - 2U) {
    cVar1 = '\0';
  }
  *(char *)(param_2 + 4) = cVar1;
  cVar1 = (char)*(int *)(param_1 + 0x28) + -1;
  if (6 < *(int *)(param_1 + 0x28) - 2U) {
    cVar1 = '\0';
  }
  *(char *)(param_2 + 5) = cVar1;
  cVar1 = (char)*(int *)(param_1 + 0x2c) + -1;
  if (6 < *(int *)(param_1 + 0x2c) - 2U) {
    cVar1 = '\0';
  }
  *(char *)(param_2 + 6) = cVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if (((*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x40)) &&
        (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x34))) &&
       (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x38))) {
      bVar3 = *(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x3c);
    }
  }
  *(bool *)(param_2 + 7) = bVar3;
  uVar2 = 7;
  if (*(uint *)(param_1 + 0x40) < 8) {
    uVar2 = (undefined1)(0x305020104000607 >> ((char)*(uint *)(param_1 + 0x40) * '\b' & 0x3fU));
  }
  *(undefined1 *)(param_2 + 8) = uVar2;
  cVar1 = (char)*(int *)(param_1 + 0x34) + -1;
  if (6 < *(int *)(param_1 + 0x34) - 2U) {
    cVar1 = '\0';
  }
  *(char *)(param_2 + 9) = cVar1;
  cVar1 = (char)*(int *)(param_1 + 0x38) + -1;
  if (6 < *(int *)(param_1 + 0x38) - 2U) {
    cVar1 = '\0';
  }
  *(char *)(param_2 + 10) = cVar1;
  cVar1 = (char)*(int *)(param_1 + 0x3c) + -1;
  if (6 < *(int *)(param_1 + 0x3c) - 2U) {
    cVar1 = '\0';
  }
  *(char *)(param_2 + 0xb) = cVar1;
  *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)(param_1 + 0x21);
  return 1;
}



// FUNCTION 144b1afb0 FUN_144b1afb0 body=426 status=ok
// SIG undefined FUN_144b1afb0(void)

longlong FUN_144b1afb0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined6 local_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  ulonglong auStack_50 [9];
  
  auStack_50[8] = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca771f8 != 0) {
    bVar2 = FUN_144848644();
    if ((DAT_14c760db4 == 4 & bVar2) == 1) {
      lVar5 = *(longlong *)(param_2 + 0xd0);
      goto LAB_144b1b088;
    }
    if (DAT_14ca84df4 == 0x8086 && DAT_14c760db4 == 4) {
      auStack_50[5] = 0;
      auStack_50[6] = 0;
      auStack_50[3] = 0;
      auStack_50[4] = 0;
      auStack_50[1] = 0;
      auStack_50[2] = 0;
      uStack_56 = 0;
      auStack_50[0] = 0;
      auStack_50[7] = 0;
      local_68 = *(undefined8 *)(param_2 + 0xd0);
      local_60 = *(undefined1 *)(param_2 + 0xc0);
      uVar1 = *(uint *)(param_2 + 0x5c);
      local_5f = (undefined1)uVar1;
      local_5e = (undefined6)*(undefined8 *)(param_2 + 0x60);
      uStack_58 = (undefined2)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x30);
      if ((uVar1 & 0xff) != 0) {
        uVar3 = 0;
        do {
          auStack_50[uVar3] =
               (ulonglong)((uint)*(undefined8 *)(param_2 + 0x68 + uVar3 * 8) & 0x2000010);
          uVar3 = uVar3 + 1;
        } while (((ulonglong)uVar1 & 0xff) != uVar3);
      }
      lVar5 = FUN_1447addd0(&local_68,0x58);
      goto LAB_144b1b088;
    }
  }
  lVar5 = *(longlong *)(param_2 + 0xd0) * -0x4b6d499041670d8d;
  uVar4 = *(longlong *)(param_2 + 0x58) + 0x9ae16a3b2f90404f;
  uVar3 = ((ulonglong)*(byte *)(param_2 + 0xc9) << 0x30 |
          (ulonglong)*(byte *)(param_2 + 0xc5) << 0x28 |
          (ulonglong)*(byte *)(param_2 + 0xc4) << 0x20 |
          (ulonglong)(uint)(*(int *)(param_2 + 0xc0) << 0x10) | (ulonglong)*(byte *)(param_2 + 0xa8)
          ) * -0x651e95c4d06fbf71;
  uVar4 = (uVar4 << 0x2e | uVar4 >> 0x12) + lVar5 + uVar3;
  uVar6 = lVar5 + *(longlong *)(param_2 + 0x58);
  uVar3 = ((uVar3 << 0x22 | uVar3 >> 0x1e) +
           (uVar6 * 0x200000 | uVar6 >> 0x2b) + *(longlong *)(param_2 + 0x60) * -0x651e95c4d06fbfb1
          ^ uVar4) * -0x651e95c4d06fbf71;
  uVar3 = (uVar3 >> 0x2f ^ uVar4 ^ uVar3) * -0x651e95c4d06fbf71;
  lVar5 = (uVar3 >> 0x2f ^ uVar3) * -0x651e95c4d06fbf71;
LAB_144b1b088:
  if ((auStack_50[8] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1b15c FUN_144b1b15c body=164 status=ok
// SIG undefined FUN_144b1b15c(void)

void FUN_144b1b15c(longlong param_1,byte param_2,longlong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar5 = (ulonglong)param_2;
  lVar6 = (ulonglong)param_2 * 0x200 + param_1;
  param_4 = param_4 & 0xffffffff;
  if (*(longlong *)(lVar6 + 2000 + param_4 * 8) != param_3) {
    bVar4 = (byte)param_4;
    if (param_3 == 0) {
      uVar7 = 1L << (bVar4 & 0x3f);
      puVar1 = (ulonglong *)(param_1 + 0x1fd0 + uVar5 * 8);
      *puVar1 = *puVar1 & (-2L << (bVar4 & 0x3f) | 0xfffffffffffffffeU >> 0x40 - (bVar4 & 0x3f));
      uVar8 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x2a) = 0;
      uVar7 = 1L << (bVar4 & 0x3f);
      puVar1 = (ulonglong *)(param_1 + 0x1fd0 + uVar5 * 8);
      *puVar1 = *puVar1 | uVar7;
      uVar8 = *(undefined8 *)(param_3 + 0x20);
    }
    *(undefined8 *)((ulonglong)param_2 * 0x200 + param_1 + 0x13d0 + param_4 * 8) = uVar8;
    uVar2 = *(ulonglong *)(param_1 + 0x1fd0 + uVar5 * 8);
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *(uint *)(param_1 + 0x2000 + uVar5 * 4) = -(uint)(uVar2 == 0) | (uint)lVar3;
    *(longlong *)(lVar6 + param_4 * 8 + 2000) = param_3;
    puVar1 = (ulonglong *)(param_1 + 0x7a0 + uVar5 * 8);
    *puVar1 = *puVar1 | uVar7;
  }
  return;
}



// FUNCTION 144b1b200 FUN_144b1b200 body=372 status=ok
// SIG undefined FUN_144b1b200(void)

void FUN_144b1b200(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x3270) = 0x101;
  *(undefined1 *)(param_1 + 0x798) = 1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (*(int *)(param_1 + 0x5dc) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  if ((*(int *)(param_1 + 0x768) != 0) || (*(longlong *)(param_1 + 0x770) != 0)) {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined1 *)(param_1 + 0x22) = 1;
  }
  if (*(int *)(param_1 + 0x700) != 0) {
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  if ((((*(float *)(param_1 + 0x40) != 1.0) || (NAN(*(float *)(param_1 + 0x40)))) ||
      (*(float *)(param_1 + 0x44) != 1.0)) ||
     (((NAN(*(float *)(param_1 + 0x44)) || (*(float *)(param_1 + 0x48) != 1.0)) ||
      ((NAN(*(float *)(param_1 + 0x48)) ||
       ((*(float *)(param_1 + 0x4c) != 1.0 || (NAN(*(float *)(param_1 + 0x4c)))))))))) {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  if ((((*(float *)(param_1 + 0x778) != 0.0) || (NAN(*(float *)(param_1 + 0x778)))) ||
      (*(float *)(param_1 + 0x77c) != 1.0)) || (NAN(*(float *)(param_1 + 0x77c)))) {
    *(undefined1 *)(param_1 + 0x27) = DAT_14ca84e1e;
  }
  *(undefined1 *)(param_1 + 0x28) = DAT_14ca84f32;
  *(undefined1 *)(param_1 + 0x29) = DAT_14ca84f34;
  *(undefined4 *)(param_1 + 0x7a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7cc) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2018) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2020) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2628) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2630) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c5c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c60) = 0xffffffffffffffff;
  return;
}



// FUNCTION 144b1b374 FUN_144b1b374 body=196 status=ok
// SIG undefined FUN_144b1b374(void)

void FUN_144b1b374(longlong param_1,longlong param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    lVar2 = 0;
    iVar6 = 0;
  }
  else {
    lVar2 = (ulonglong)param_5 + *(longlong *)(param_2 + 0x58);
    iVar6 = *(int *)(param_2 + 0x68) - param_5;
  }
  uVar7 = (ulonglong)param_3;
  lVar4 = uVar7 * 0x10 + param_1;
  plVar5 = (longlong *)(lVar4 + 0x1d8);
  if (((lVar2 == *plVar5) && (*(int *)(lVar4 + 0x1e4) == param_4)) &&
     (iVar6 == *(int *)(lVar4 + 0x1e0))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(longlong *)(param_1 + 0x3d8 + uVar7 * 8) = param_2;
  if (param_2 == 0) {
    *plVar5 = 0;
    *(undefined8 *)(lVar4 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x3d8 + uVar7 * 8) = 0;
    *(undefined8 *)(param_1 + 0x4d8 + uVar7 * 8) = 0;
    bVar1 = (byte)param_3 & 0x1f;
    iVar6 = -1;
    uVar3 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & *(uint *)(param_1 + 0x5dc);
    *(uint *)(param_1 + 0x5dc) = uVar3;
    if (uVar3 == 0) goto LAB_144b1b3e4;
  }
  else {
    *(undefined8 *)(param_1 + 0x4d8 + uVar7 * 8) = *(undefined8 *)(param_2 + 0x10);
    *plVar5 = lVar2;
    *(int *)(lVar4 + 0x1e0) = iVar6;
    *(int *)(lVar4 + 0x1e4) = param_4;
    uVar3 = *(uint *)(param_1 + 0x5dc) | 1 << (param_3 & 0x1f);
    *(uint *)(param_1 + 0x5dc) = uVar3;
  }
  iVar6 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
LAB_144b1b3e4:
  *(int *)(param_1 + 0x5d8) = iVar6;
  return;
}



// FUNCTION 144b1b438 FUN_144b1b438 body=807 status=ok
// SIG undefined FUN_144b1b438(void)

void FUN_144b1b438(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4,uint param_5,
                  longlong param_6,ulonglong *param_7,longlong param_8,longlong param_9,
                  longlong param_10)

{
  longlong *plVar1;
  undefined4 *puVar2;
  size_t _Size;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  longlong **local_190;
  undefined8 local_188;
  uint local_17c;
  longlong *local_178;
  longlong *local_170;
  void *local_168;
  longlong *local_160;
  ulonglong local_158;
  longlong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 local_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  int local_d0;
  int local_98 [4];
  ulonglong local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_17c = param_4;
  local_170 = param_1;
  (**(code **)(*param_3 + 0x50))(param_3,local_98);
  (**(code **)(*param_2 + 0x50))(param_2);
  if ((((local_98[0] == 1) && (param_6 + *param_7 <= local_88)) &&
      ((local_d0 != 1 || (param_5 == 1 && local_17c == 0)))) &&
     (iVar6 = (**(code **)(*param_3 + 0x40))(param_3,0,0,&local_d8), -1 < iVar6)) {
    uVar11 = (ulonglong)param_5;
    local_178 = param_2;
    local_160 = param_3;
    if (param_5 != 0) {
      uVar7 = 0;
      local_158 = (ulonglong)param_5;
      do {
        local_140 = (ulonglong)*(uint *)((longlong)param_7 + uVar7 * 0x20 + 0x14);
        if (local_140 != 0) {
          local_168 = (void *)(local_d8 + param_7[uVar7 * 4]);
          uVar11 = param_7[uVar7 * 4 + 3];
          uVar9 = *(uint *)(param_8 + uVar7 * 4);
          _Size = *(size_t *)(param_9 + uVar7 * 8);
          plVar1 = (longlong *)(param_10 + uVar7 * 0x18);
          local_150 = (ulonglong)uVar9 * (ulonglong)(uint)uVar11;
          uVar8 = 0;
          local_148 = uVar7;
          do {
            if (uVar9 != 0) {
              lVar10 = plVar1[2];
              lVar3 = *plVar1;
              uVar7 = 0;
              _Dst = local_168;
              do {
                memcpy(_Dst,(void *)(plVar1[1] * uVar7 + lVar10 * uVar8 + lVar3),_Size);
                uVar7 = uVar7 + 1;
                _Dst = (void *)((longlong)_Dst + (ulonglong)(uint)uVar11);
              } while (uVar9 != uVar7);
            }
            uVar8 = uVar8 + 1;
            local_168 = (void *)((longlong)local_168 + local_150);
            uVar7 = local_148;
          } while (uVar8 != local_140);
        }
        uVar7 = uVar7 + 1;
        uVar11 = local_158;
      } while (uVar7 != local_158);
    }
    plVar5 = local_160;
    (**(code **)(*local_160 + 0x48))(local_160,0,0);
    plVar4 = local_170;
    plVar1 = local_178;
    if (local_d0 == 1) {
      local_190 = (longlong **)(ulonglong)*(uint *)((longlong)param_7 + 0xc);
      local_198 = *param_7;
      (**(code **)(*local_170 + 0x78))(local_170,local_178,0,plVar5);
    }
    else if (param_5 != 0) {
      lVar10 = 0;
      uVar9 = local_17c;
      do {
        local_108 = plVar1;
        local_100 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        uStack_f0 = 0;
        local_f8 = (ulonglong)uVar9;
        local_138 = plVar5;
        local_130 = 1;
        puVar2 = (undefined4 *)((longlong)param_7 + lVar10);
        local_128 = *puVar2;
        uStack_124 = puVar2[1];
        uStack_120 = puVar2[2];
        uStack_11c = puVar2[3];
        puVar2 = (undefined4 *)((longlong)param_7 + lVar10 + 0x10);
        local_118 = *puVar2;
        uStack_114 = puVar2[1];
        uStack_110 = puVar2[2];
        uStack_10c = puVar2[3];
        local_190 = &local_138;
        local_198 = local_198 & 0xffffffff00000000;
        local_188 = 0;
        (**(code **)(*plVar4 + 0x80))(plVar4,&local_108,0,0);
        lVar10 = lVar10 + 0x20;
        uVar9 = uVar9 + 1;
      } while (uVar11 << 5 != lVar10);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b1b760 FUN_144b1b760 body=151 status=ok
// SIG undefined FUN_144b1b760(void)

void FUN_144b1b760(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
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



// FUNCTION 144b1b7f7 FUN_144b1b7f7 body=46 status=ok
// SIG undefined FUN_144b1b7f7(void)

void FUN_144b1b7f7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 144b1b835 FUN_144b1b835 body=161 status=ok
// SIG undefined FUN_144b1b835(void)

void FUN_144b1b835(void *param_1,void *param_2,longlong param_3,char param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  int local_40;
  char local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memcpy(param_1,param_2,(ulonglong)*(uint *)(param_3 + 0x84));
  if ((param_4 != '\0') && ((longlong)*(int *)(param_3 + 0x28) != 0)) {
    puVar1 = *(ushort **)(param_3 + 0x20);
    lVar2 = (longlong)*(int *)(param_3 + 0x28) << 2;
    do {
      FUN_1456c4e2c(&local_40,param_2,puVar1);
      if ((local_40 != -1) && (local_3c != -1)) {
        *(int *)((longlong)param_1 + (ulonglong)*puVar1) = local_40;
      }
      puVar1 = puVar1 + 2;
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b1b8d8 FUN_144b1b8d8 body=158 status=ok
// SIG undefined FUN_144b1b8d8(void)

undefined2 FUN_144b1b8d8(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (DAT_14ca80058 != DAT_14ca80084) {
    uVar3 = (uint)(ushort)((ulonglong)param_1 >> 0x10);
    puVar4 = &DAT_14ca80088;
    if (DAT_14ca80090 != (undefined *)0x0) {
      puVar4 = DAT_14ca80090;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14ca80098 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) +
                              ((int)param_1 << 0x10 | (uint)(ushort)param_1) +
                              (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_1 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14ca80050 + (longlong)iVar2 * 0x14);
      if (*plVar1 == param_1) {
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



// FUNCTION 144b1b98d FUN_144b1b98d body=225 status=ok
// SIG undefined FUN_144b1b98d(void)

char FUN_144b1b98d(longlong param_1)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = DAT_14ca811d0;
  cVar3 = '\0';
  if (((param_1 != 0) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) {
    SRWLock = (PSRWLOCK)(DAT_14ca811d0 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
      lVar5 = lVar2 + 0x58;
      if (*(longlong *)(lVar2 + 0x60) != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x60);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar2 + 0x68) - 1U &
                               (int)param_1 + (int)((ulonglong)param_1 >> 0x20) * 0x17) * 4);
      if (iVar4 != -1) {
        do {
          lVar5 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x20) == param_1) {
            if ((lVar5 != 0) && (lVar5 != -8)) {
              bVar1 = *(byte *)(lVar5 + 0x14);
              ReleaseSRWLockShared(SRWLock);
              if ((bVar1 & 6) != 0) {
                return ((bVar1 & 4) >> 2) * '\x03' + '\x02';
              }
              return '\x01';
            }
            break;
          }
          iVar4 = *(int *)(lVar5 + 0x18);
        } while (iVar4 != -1);
      }
    }
    ReleaseSRWLockShared(SRWLock);
    cVar3 = '\x03';
  }
  return cVar3;
}



// FUNCTION 144b1ba6e FUN_144b1ba6e body=510 status=ok
// SIG undefined FUN_144b1ba6e(void)

undefined2 FUN_144b1ba6e(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
       ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7]))))))))
     && (param_1[8] == param_2[8])) {
    lVar3 = 0;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      if (param_1[lVar3 + 9] != param_2[lVar3 + 9]) {
        return 0;
      }
      lVar3 = 1;
      bVar2 = false;
    } while (bVar1);
    if ((((((int)param_1[0xb] == (int)param_2[0xb]) &&
          (*(char *)((longlong)param_1 + 0xc5) == *(char *)((longlong)param_2 + 0xc5))) &&
         (*(char *)((longlong)param_1 + 0xc6) == *(char *)((longlong)param_2 + 0xc6))) &&
        ((*(char *)((longlong)param_1 + 0xc9) == *(char *)((longlong)param_2 + 0xc9) &&
         ((char)param_1[0x19] == (char)param_2[0x19])))) &&
       ((*(char *)((longlong)param_1 + 199) == *(char *)((longlong)param_2 + 199) &&
        (*(int *)((longlong)param_1 + 0x5c) == *(int *)((longlong)param_2 + 0x5c))))) {
      lVar3 = 0;
      do {
        if (*(char *)((longlong)param_1 + lVar3 + 0x60) !=
            *(char *)((longlong)param_2 + lVar3 + 0x60)) {
          return 0;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 8);
      lVar3 = 0;
      do {
        if (((*(uint *)(param_2 + lVar3 + 0xd) ^ *(uint *)(param_1 + lVar3 + 0xd)) & 0x2000010) != 0
           ) {
          return 0;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 8);
      if ((((char)param_1[0x15] == (char)param_2[0x15]) &&
          (((*(uint *)(param_1 + 0x16) ^ *(uint *)(param_2 + 0x16)) & 0x2000014) == 0)) &&
         (((((char)param_1[0x17] == (char)param_2[0x17] &&
            (((*(char *)((longlong)param_1 + 0xb9) == *(char *)((longlong)param_2 + 0xb9) &&
              (*(char *)((longlong)param_1 + 0xba) == *(char *)((longlong)param_2 + 0xba))) &&
             (*(char *)((longlong)param_1 + 0xbb) == *(char *)((longlong)param_2 + 0xbb))))) &&
           (((*(int *)((longlong)param_1 + 0xbc) == *(int *)((longlong)param_2 + 0xbc) &&
             ((short)param_1[0x18] == (short)param_2[0x18])) &&
            (*(char *)((longlong)param_1 + 0xc2) == *(char *)((longlong)param_2 + 0xc2))))) &&
          (*(char *)((longlong)param_1 + 0xc3) == *(char *)((longlong)param_2 + 0xc3))))) {
        return CONCAT11((char)((ushort)(short)param_1[0x18] >> 8),
                        *(char *)((longlong)param_1 + 0xc4) == *(char *)((longlong)param_2 + 0xc4));
      }
    }
  }
  return 0;
}



// FUNCTION 144b1bc6c FUN_144b1bc6c body=275 status=ok
// SIG undefined FUN_144b1bc6c(void)

bool FUN_144b1bc6c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == param_2)
        goto LAB_144b1bcd0;
        iVar4 = *(int *)(lVar6 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_144b1bcd0:
  plVar8 = (longlong *)(lVar6 + 8);
  if (lVar6 == 0) {
    plVar8 = (longlong *)0x0;
  }
  if ((plVar8 == (longlong *)0x0) || ((*(byte *)((longlong)plVar8 + 0xc) & 6) != 0))
  goto LAB_144b1bce7;
  *param_3 = (int)plVar8[1];
  uVar5 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar5 = DAT_14c760d80 ^ 1;
  }
  plVar2 = *(longlong **)(*plVar8 + 0x18 + (ulonglong)(uVar5 << 4));
  if (plVar2 == (longlong *)0x0) {
    puVar7 = *(undefined8 **)(param_3 + 2);
    if (puVar7 == (undefined8 *)0x0) goto LAB_144b1bce7;
    *(undefined8 *)(param_3 + 2) = 0;
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    puVar7 = *(undefined8 **)(param_3 + 2);
    if (puVar7 == puVar3) goto LAB_144b1bce7;
    *(undefined8 **)(param_3 + 2) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    if (puVar7 == (undefined8 *)0x0) goto LAB_144b1bce7;
  }
  LOCK();
  piVar1 = (int *)(puVar7 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_144b1bce7:
  return plVar8 != (longlong *)0x0;
}



// FUNCTION 144b1bd80 FUN_144b1bd80 body=374 status=ok
// SIG undefined FUN_144b1bd80(void)

void FUN_144b1bd80(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  
  lVar5 = 0;
  do {
    if (*(longlong *)(param_1 + lVar5) == 0) break;
    *(longlong *)(param_2 + lVar5) = *(longlong *)(param_1 + lVar5);
    bVar6 = *(byte *)(param_1 + 0x15 + lVar5) >> 2;
    *(byte *)(param_2 + 0x10 + lVar5) = bVar6;
    *(byte *)(param_2 + 0x11 + lVar5) = *(byte *)(param_1 + 0x15 + lVar5) & 3;
    *(undefined4 *)(param_2 + 0xc + lVar5) = *(undefined4 *)(param_1 + 0x10 + lVar5);
    *(uint *)(param_2 + 8 + lVar5) = (uint)*(byte *)(param_1 + 0x14 + lVar5);
    *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + 1;
    *(byte *)(param_2 + 0xc4) = *(byte *)(param_2 + 0xc4) | bVar6 == 2;
    if (*(longlong *)(param_1 + 8 + lVar5) != 0) {
      puVar1 = (undefined8 *)(param_2 + lVar5);
      *(undefined1 *)(param_2 + 0x188) = 1;
      *(undefined8 *)(param_2 + 0xd8 + lVar5) = puVar1[2];
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 200 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      *(undefined8 *)(param_2 + 200 + lVar5) = *(undefined8 *)(param_1 + 8 + lVar5);
    }
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0xc0);
  bVar6 = *(byte *)(param_1 + 0xd0);
  bVar7 = bVar6 >> 2 & 3;
  uVar3 = *(undefined4 *)(param_1 + 0xd4);
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_1 + 0xc0);
  *(byte *)(param_2 + 0x198) = bVar6 >> 6;
  *(byte *)(param_2 + 0x199) = bVar6 >> 4 & 3;
  *(byte *)(param_2 + 0x19a) = bVar7;
  *(byte *)(param_2 + 0x19b) = bVar6 & 3;
  *(undefined4 *)(param_2 + 0x19c) = uVar3;
  *(bool *)(param_2 + 0x1b0) = bVar6 >> 6 == 2;
  *(bool *)(param_2 + 0x1b1) = bVar7 == 2;
  if ((*(longlong *)(param_1 + 200) != 0) &&
     (*(longlong *)(param_1 + 200) != *(longlong *)(param_1 + 0xc0))) {
    *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_2 + 400);
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_1 + 200);
  }
  *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined1 *)(param_2 + 0x1c0) = *(undefined1 *)(param_1 + 0xf0);
  *(undefined1 *)(param_2 + 0x1c1) = *(undefined1 *)(param_1 + 0xf9);
  return;
}



// FUNCTION 144b1befa FUN_144b1befa body=473 status=ok
// SIG undefined FUN_144b1befa(void)

void FUN_144b1befa(longlong param_1,longlong param_2)

{
  float *pfVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  float local_78;
  float local_70;
  undefined4 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_2 + 0x38);
  local_68 = *(undefined4 *)(param_1 + 0x24);
  local_70 = *(float *)(param_1 + 0x20);
  local_78 = *(float *)(param_1 + 0x1c);
  local_48 = *(undefined4 *)(param_1 + 0x18);
  pfVar1 = (float *)(param_1 + 0x10);
  local_58 = *pfVar1;
  fStack_54 = *(float *)(param_1 + 0x14);
  uVar5 = *(undefined8 *)pfVar1;
  if (*(code **)(*plVar2 + 0x180) == FUN_144b1a274) {
    fStack_50 = local_78 - local_58;
    fStack_4c = local_70 - fStack_54;
    if ((0.0 < fStack_4c) && (0.0 < fStack_50)) {
      if (((int)plVar2[0x43] != 1) ||
         (auVar3._8_4_ = fStack_50, auVar3._0_8_ = *(undefined8 *)pfVar1, auVar3._12_4_ = fStack_4c,
         CONCAT44(local_68,local_48) != *(longlong *)((longlong)plVar2 + 0x22c) ||
         auVar3 != *(undefined1 (*) [16])((longlong)plVar2 + 0x21c))) {
        *(ulonglong *)((longlong)plVar2 + 0x22c) = CONCAT44(local_68,local_48);
        *(undefined8 *)((longlong)plVar2 + 0x21c) = uVar5;
        *(ulonglong *)((longlong)plVar2 + 0x224) = CONCAT44(fStack_4c,fStack_50);
        *(undefined4 *)(plVar2 + 0x43) = 1;
        *(undefined1 *)((longlong)plVar2 + 0x1ea) = 1;
      }
      local_40 = (undefined4)(longlong)local_58;
      uStack_3c = (undefined4)(longlong)fStack_54;
      uStack_38 = (undefined4)(longlong)local_78;
      uStack_34 = (undefined4)(longlong)local_70;
      if (((int)plVar2[0x119] != 1) ||
         (auVar4._4_4_ = uStack_3c, auVar4._0_4_ = local_40, auVar4._8_4_ = uStack_38,
         auVar4._12_4_ = uStack_34, auVar4 != *(undefined1 (*) [16])(plVar2 + 0xf9))) {
        *(undefined4 *)(plVar2 + 0xf9) = local_40;
        *(undefined4 *)((longlong)plVar2 + 0x7cc) = uStack_3c;
        *(undefined4 *)(plVar2 + 0xfa) = uStack_38;
        *(undefined4 *)((longlong)plVar2 + 0x7d4) = uStack_34;
        *(undefined4 *)(plVar2 + 0x119) = 1;
        *(undefined1 *)((longlong)plVar2 + 0x1eb) = 1;
      }
    }
    uStack_44 = local_68;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  (**(code **)(*plVar2 + 0x180))();
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b1c0d4 FUN_144b1c0d4 body=526 status=ok
// SIG undefined FUN_144b1c0d4(void)

void FUN_144b1c0d4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(code **)(*plVar3 + 0x218) == FUN_144b1a588) {
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14a349060;
    local_80 = plVar3 + -0x39;
    local_a8 = FUN_147370464;
    lVar9 = 0x24;
    do {
      plVar4 = *(longlong **)((longlong)plVar3 + lVar9 + -0x14);
      if (((plVar4 != (longlong *)0x0) &&
          (plVar5 = *(longlong **)((longlong)plVar3 + lVar9 + -0xc), plVar5 != (longlong *)0x0)) &&
         (plVar4 != plVar5)) {
        uVar1 = *(undefined1 *)((longlong)plVar3 + lVar9);
        uVar2 = *(undefined4 *)((longlong)plVar3 + lVar9 + -4);
        (**(code **)(*plVar4 + 8))(plVar4);
        (**(code **)(*plVar5 + 8))(plVar5);
        pcVar6 = local_a8;
        local_b8 = 0xffffffff;
        uStack_b4 = 0xffffffff;
        uStack_b0 = 0xffffffff;
        uStack_ac = 0xffffffff;
        pppuVar8 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar8 = &local_88;
        }
        local_d0 = plVar4;
        local_c8 = plVar5;
        local_c0 = uVar1;
        local_bc = uVar2;
        uVar7 = (*(code *)(*pppuVar8)[1])();
        (*pcVar6)(uVar7,&local_d0);
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != 0xe4);
    plVar4 = (longlong *)plVar3[0x1a];
    if ((plVar4 != (longlong *)0x0) &&
       (plVar3 = (longlong *)plVar3[0x1b], plVar4 != plVar3 && plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4);
      (**(code **)(*plVar3 + 8))(plVar3);
      pcVar6 = local_a8;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      uStack_b0 = 0xffffffff;
      uStack_ac = 0xffffffff;
      pppuVar8 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar8 = &local_88;
      }
      local_d0 = plVar4;
      local_c8 = plVar3;
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar6)(uVar7,&local_d0);
    }
    if (local_a8 != (code *)0x0) {
      pppuVar8 = &local_88;
      if (local_98 != (undefined ***)0x0) {
        pppuVar8 = local_98;
      }
      pcVar6 = (code *)(*pppuVar8)[2];
      if (pcVar6 == (code *)&LAB_1473704d8) {
        pcVar6 = (code *)(*pppuVar8)[3];
        if (pcVar6 != FUN_1473704f2) {
          (*pcVar6)(pppuVar8,0);
        }
      }
      else {
        (*pcVar6)(pppuVar8);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
  }
  if ((DAT_14c707940 ^ (ulonglong)auStack_f8 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000144b1c2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x218))(plVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1c300 FUN_144b1c300 body=197 status=ok
// SIG undefined FUN_144b1c300(void)

void FUN_144b1c300(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x20) + 0x8a);
    iVar4 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
      FUN_14726c186(param_1,iVar4);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    *(byte *)(lVar2 + iVar4) = bVar1;
    iVar4 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar4 + 1U;
    if (*(uint *)(param_1 + 100) < iVar4 + 1U) {
      FUN_1474146d2(param_1 + 0x18,iVar4);
    }
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(longlong *)(lVar2 + (longlong)iVar4 * 8) = param_2;
    iVar4 = bVar1 + 1;
    if (iVar4 <= *(int *)(param_1 + 0x68)) {
      iVar4 = *(int *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 0x68) = iVar4;
  }
  else {
    lVar3 = FUN_147413418(*(longlong *)(param_1 + 0x70),*(longlong *)(param_2 + 0x20) + 0x10);
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(longlong *)(lVar2 + (ulonglong)(*(uint *)(lVar3 + 0x10) >> 1 & 0x1f8)) = param_2;
  }
  return;
}



// FUNCTION 144b1c3c6 FUN_144b1c3c6 body=175 status=ok
// SIG undefined FUN_144b1c3c6(void)

int * FUN_144b1c3c6(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  
  if ((*(byte *)(param_3 + 0x2a) & 0x10) != 0) {
    uVar2 = 1;
    uVar4 = 0;
    uVar1 = 0;
    iVar3 = 0;
    cVar6 = '\0';
    bVar7 = 0;
    iVar5 = 0;
    goto LAB_144b1c41e;
  }
  cVar6 = *(char *)(param_1 + 2);
  bVar7 = *(byte *)(param_1 + 1);
  if (cVar6 == '\x02') {
    uVar4 = *(uint *)(param_1 + 0xc);
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_3 + 0x24);
    }
LAB_144b1c403:
    iVar5 = *(int *)(param_1 + 4);
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 == 0) goto LAB_144b1c40d;
  }
  else {
    if (cVar6 == '\x04') {
      bVar7 = 0;
      uVar4 = 4;
      goto LAB_144b1c403;
    }
    if (cVar6 != '\x03') {
      uVar4 = *(uint *)((longlong)&DAT_14c873428 + (ulonglong)((uint)bVar7 * 0x30));
      goto LAB_144b1c403;
    }
    iVar5 = *(int *)(param_1 + 4);
    uVar4 = 1;
LAB_144b1c40d:
    uVar1 = (uint)(*(int *)(param_3 + 0x20) - iVar5) / uVar4;
  }
  iVar3 = uVar1 * uVar4;
  uVar2 = 0;
LAB_144b1c41e:
  *param_2 = iVar5;
  param_2[1] = uVar4;
  param_2[2] = uVar1;
  param_2[3] = iVar3;
  *(char *)(param_2 + 4) = cVar6;
  *(byte *)((longlong)param_2 + 0x11) = bVar7;
  *(undefined1 *)((longlong)param_2 + 0x12) = uVar2;
  *(undefined1 *)((longlong)param_2 + 0x13) = 0;
  return param_2;
}



// FUNCTION 144b1c476 FUN_144b1c476 body=214 status=ok
// SIG undefined FUN_144b1c476(void)

int * FUN_144b1c476(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  
  if ((*(byte *)(param_3 + 0x2a) & 0x10) != 0) {
    uVar2 = 1;
    uVar3 = 0;
    uVar1 = 0;
    iVar5 = 0;
    cVar6 = '\0';
    bVar7 = 0;
    iVar4 = 0;
    goto LAB_144b1c4e0;
  }
  cVar6 = *(char *)(param_1 + 2);
  bVar7 = *(byte *)(param_1 + 1);
  if (cVar6 == '\x02') {
    uVar3 = *(uint *)(param_1 + 0xc);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_3 + 0x24);
    }
LAB_144b1c4c3:
    iVar4 = *(int *)(param_1 + 4);
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 == 0) goto LAB_144b1c4cd;
  }
  else {
    if (cVar6 == '\x04') {
      bVar7 = 0;
      uVar3 = 4;
      goto LAB_144b1c4c3;
    }
    if (cVar6 != '\x03') {
      uVar3 = *(uint *)((longlong)&DAT_14c873428 + (ulonglong)((uint)bVar7 * 0x30));
      goto LAB_144b1c4c3;
    }
    iVar4 = *(int *)(param_1 + 4);
    uVar3 = 1;
LAB_144b1c4cd:
    uVar1 = (uint)(*(int *)(param_3 + 0x20) - iVar4) / uVar3;
  }
  iVar5 = uVar1 * uVar3;
  uVar2 = 0;
LAB_144b1c4e0:
  *param_2 = iVar4;
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = iVar5;
  *(char *)(param_2 + 4) = cVar6;
  *(byte *)((longlong)param_2 + 0x11) = bVar7;
  *(undefined1 *)((longlong)param_2 + 0x12) = uVar2;
  *(undefined1 *)((longlong)param_2 + 0x13) = 0;
  bVar7 = *(byte *)(param_1 + 3);
  *(byte *)(param_2 + 5) = bVar7 & 1;
  *(byte *)((longlong)param_2 + 0x15) = bVar7 >> 1 & 1;
  return param_2;
}



// FUNCTION 144b1c58c FUN_144b1c58c body=131 status=ok
// SIG undefined FUN_144b1c58c(void)

void FUN_144b1c58c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 144b1c610 FUN_144b1c610 body=8 status=ok
// SIG undefined FUN_144b1c610(void)

undefined8 * FUN_144b1c610(void)

{
  return &DAT_14ca8ba00;
}



// FUNCTION 144b1c618 FUN_144b1c618 body=15 status=ok
// SIG undefined FUN_144b1c618(void)

undefined8 FUN_144b1c618(ushort param_1)

{
  return *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)param_1 * 8);
}



// FUNCTION 144b1c628 FUN_144b1c628 body=204 status=ok
// SIG undefined FUN_144b1c628(void)

ulonglong FUN_144b1c628(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  uVar6 = param_1 + 0x48 + ((longlong)uVar3 >> 0x18);
  uVar10 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar10 = uVar3;
  }
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = uVar2;
    do {
      uVar1 = (uVar8 >> 1) + uVar7;
      puVar11 = (ulonglong *)(uVar10 + (ulonglong)uVar1 * 8);
      puVar4 = (ulonglong *)*puVar11;
      puVar11 = (ulonglong *)(((longlong)puVar4 >> 0x18) + (longlong)puVar11);
      if (((ulonglong)puVar4 & 1) == 0) {
        puVar11 = puVar4;
      }
      if (*puVar11 < *param_2) {
        uVar7 = uVar1 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
  }
  if ((int)uVar7 < (int)uVar2) {
    uVar9 = (ulonglong)uVar7;
    puVar11 = (ulonglong *)(uVar10 + uVar9 * 8);
    puVar4 = (ulonglong *)*puVar11;
    puVar11 = (ulonglong *)(((longlong)puVar4 >> 0x18) + (longlong)puVar11);
    if (((ulonglong)puVar4 & 1) == 0) {
      puVar11 = puVar4;
    }
    if (*puVar11 <= *param_2) {
      if ((uVar3 & 1) == 0) {
        uVar6 = uVar3;
      }
      uVar3 = *(ulonglong *)(uVar6 + uVar9 * 8);
      if ((uVar3 & 1) == 0) {
        return uVar3;
      }
      return ((longlong)uVar3 >> 0x18) + uVar6 + uVar9 * 8;
    }
  }
  return 0;
}



// FUNCTION 144b1c6f4 FUN_144b1c6f4 body=6 status=ok
// SIG undefined FUN_144b1c6f4(void)

undefined8 FUN_144b1c6f4(void)

{
  return 0xffffffff;
}



// FUNCTION 144b1c6fa FUN_144b1c6fa body=574 status=ok
// SIG undefined FUN_144b1c6fa(void)

longlong FUN_144b1c6fa(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0x800000000;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0x800000000;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  lVar4 = param_1[1];
  iVar2 = *(int *)(lVar4 + 0x78);
  if (iVar2 != 0) {
    lVar4 = param_2 + 0x18;
    do {
      uVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1[1] + 0x70) + (longlong)iVar9 * 4);
      lVar3 = *(longlong *)(*param_1 + uVar8);
      if ((lVar3 != 0) && ((*(byte *)(*param_1 + 8 + uVar8) & 2) != 0)) {
        if (*(longlong *)(param_2 + 0x70) == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x20) + 0x8a);
          iVar7 = *(int *)(param_2 + 0x10);
          *(uint *)(param_2 + 0x10) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x14) < iVar7 + 1U) {
            FUN_14726c186(param_2,iVar7);
          }
          lVar5 = *(longlong *)(param_2 + 8);
          if (*(longlong *)(param_2 + 8) == 0) {
            lVar5 = param_2;
          }
          *(byte *)(lVar5 + iVar7) = bVar1;
          iVar7 = *(int *)(param_2 + 0x60);
          *(uint *)(param_2 + 0x60) = iVar7 + 1U;
          if (*(uint *)(param_2 + 100) < iVar7 + 1U) {
            FUN_1474146d2(lVar4,iVar7);
          }
          lVar5 = *(longlong *)(param_2 + 0x58);
          if (*(longlong *)(param_2 + 0x58) == 0) {
            lVar5 = lVar4;
          }
          *(longlong *)(lVar5 + (longlong)iVar7 * 8) = lVar3;
          iVar7 = bVar1 + 1;
          if (iVar7 <= *(int *)(param_2 + 0x68)) {
            iVar7 = *(int *)(param_2 + 0x68);
          }
          *(int *)(param_2 + 0x68) = iVar7;
        }
        else {
          lVar6 = FUN_147413418(*(longlong *)(param_2 + 0x70),*(longlong *)(lVar3 + 0x20) + 0x10);
          lVar5 = *(longlong *)(param_2 + 0x58);
          if (*(longlong *)(param_2 + 0x58) == 0) {
            lVar5 = lVar4;
          }
          *(longlong *)(lVar5 + (ulonglong)(*(uint *)(lVar6 + 0x10) >> 1 & 0x1f8)) = lVar3;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
    lVar4 = param_1[1];
  }
  iVar2 = *(int *)(lVar4 + 0x68);
  if (iVar2 != 0) {
    iVar9 = 0;
    lVar4 = param_2 + 0x18;
    do {
      uVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1[1] + 0x60) + (longlong)iVar9 * 4);
      lVar3 = *(longlong *)(*param_1 + uVar8);
      if ((lVar3 != 0) && ((*(byte *)(*param_1 + 8 + uVar8) & 2) != 0)) {
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if (*(longlong *)(param_2 + 0x70) == 0) {
          bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x20) + 0x8a);
          iVar7 = *(int *)(param_2 + 0x10);
          *(uint *)(param_2 + 0x10) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x14) < iVar7 + 1U) {
            FUN_14726c186(param_2,iVar7);
          }
          lVar5 = *(longlong *)(param_2 + 8);
          if (*(longlong *)(param_2 + 8) == 0) {
            lVar5 = param_2;
          }
          *(byte *)(lVar5 + iVar7) = bVar1;
          iVar7 = *(int *)(param_2 + 0x60);
          *(uint *)(param_2 + 0x60) = iVar7 + 1U;
          if (*(uint *)(param_2 + 100) < iVar7 + 1U) {
            FUN_1474146d2(lVar4,iVar7);
          }
          lVar5 = *(longlong *)(param_2 + 0x58);
          if (*(longlong *)(param_2 + 0x58) == 0) {
            lVar5 = lVar4;
          }
          *(longlong *)(lVar5 + (longlong)iVar7 * 8) = lVar3;
          iVar7 = bVar1 + 1;
          if (iVar7 <= *(int *)(param_2 + 0x68)) {
            iVar7 = *(int *)(param_2 + 0x68);
          }
          *(int *)(param_2 + 0x68) = iVar7;
        }
        else {
          lVar6 = FUN_147413418(*(longlong *)(param_2 + 0x70),*(longlong *)(lVar3 + 0x20) + 0x10);
          lVar5 = *(longlong *)(param_2 + 0x58);
          if (*(longlong *)(param_2 + 0x58) == 0) {
            lVar5 = lVar4;
          }
          *(longlong *)(lVar5 + (ulonglong)(*(uint *)(lVar6 + 0x10) >> 1 & 0x1f8)) = lVar3;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  return param_2;
}



// FUNCTION 144b1c938 FUN_144b1c938 body=158 status=ok
// SIG undefined FUN_144b1c938(void)

void FUN_144b1c938(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x80);
    do {
      if (plVar2[0xc] != 0) {
        plVar1 = plVar2 + 0x10;
        if ((longlong *)plVar2[0xe] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[0xe];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[4] != 0) {
        plVar1 = plVar2 + 8;
        if ((longlong *)plVar2[6] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if (plVar2[-0xc] != 0) {
        plVar1 = plVar2 + -8;
        if ((longlong *)plVar2[-10] != (longlong *)0x0) {
          plVar1 = (longlong *)plVar2[-10];
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144b1c9d6 FUN_144b1c9d6 body=31 status=ok
// SIG undefined FUN_144b1c9d6(void)

undefined8 FUN_144b1c9d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b1c9f6 FUN_144b1c9f6 body=31 status=ok
// SIG undefined FUN_144b1c9f6(void)

undefined8 FUN_144b1c9f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b1ca16 FUN_144b1ca16 body=625 status=ok
// SIG undefined FUN_144b1ca16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144b1ca16(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar1 = *param_3;
  fVar10 = (param_1[5] + param_1[2]) * 0.5;
  auVar18 = insertps(ZEXT416((uint)((param_1[3] + *param_1) * 0.5)),
                     ZEXT416((uint)((param_1[4] + param_1[1]) * 0.5)),0x10);
  fVar13 = (param_1[5] - param_1[2]) * 0.5;
  auVar15 = insertps(ZEXT416((uint)((param_1[3] - *param_1) * 0.5)),
                     ZEXT416((uint)((param_1[4] - param_1[1]) * 0.5)),0x10);
  fVar2 = auVar18._0_4_;
  fVar4 = auVar18._4_4_;
  fVar3 = auVar15._0_4_;
  fVar5 = auVar15._4_4_;
  auVar15 = *(undefined1 (*) [16])(*param_3 + 0xc);
  auVar11 = insertps(auVar1,auVar1,0x8e);
  auVar18 = *(undefined1 (*) [16])(param_3[1] + 8);
  uVar6 = auVar18._12_4_;
  auVar12 = insertps(auVar11,auVar15,0x8e);
  auVar14 = insertps(auVar15,auVar18,0x8e);
  auVar16._4_4_ = uVar6;
  auVar16._0_4_ = uVar6;
  auVar16._8_4_ = uVar6;
  auVar16._12_4_ = uVar6;
  auVar16 = insertps(auVar16,*(undefined4 *)(param_3[2] + 8),0x10);
  auVar17 = blendps(ZEXT416(*(uint *)(param_3[2] + 0xc)),_DAT_149932340,0xe);
  fVar7 = fVar10 * auVar18._0_4_ + fVar4 * auVar15._0_4_ + fVar2 * auVar1._0_4_ + auVar16._0_4_;
  fVar9 = fVar10 * auVar18._4_4_ + fVar4 * auVar15._4_4_ + fVar2 * auVar1._4_4_ + auVar16._4_4_;
  fVar4 = fVar10 * auVar14._0_4_ + fVar4 * auVar12._0_4_ + fVar2 * auVar11._0_4_ + auVar17._0_4_;
  fVar10 = ABS(auVar18._0_4_ * fVar13) + ABS(auVar15._0_4_ * fVar5) + ABS(auVar1._0_4_ * fVar3);
  fVar8 = ABS(auVar18._4_4_ * fVar13) + ABS(auVar15._4_4_ * fVar5) + ABS(auVar1._4_4_ * fVar3);
  fVar2 = ABS(fVar13 * auVar14._0_4_) + ABS(fVar5 * auVar12._0_4_) + ABS(fVar3 * auVar11._0_4_);
  *param_2 = fVar7 - fVar10;
  param_2[1] = fVar9 - fVar8;
  param_2[2] = fVar4 - fVar2;
  param_2[3] = fVar10 + fVar7;
  param_2[4] = fVar8 + fVar9;
  param_2[5] = fVar2 + fVar4;
  return param_2;
}



// FUNCTION 144b1cc87 FUN_144b1cc87 body=256 status=ok
// SIG undefined FUN_144b1cc87(void)

void FUN_144b1cc87(void *param_1,void *param_2,int param_3,byte param_4,uint param_5,uint param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)((longlong)&DAT_14c873420 + (ulonglong)((uint)param_4 * 0x30));
  uVar3 = (param_3 + uVar1) - 1;
  uVar2 = (ulonglong)uVar3 / (ulonglong)uVar1;
  if ((param_5 != param_6) && (param_6 != 0)) {
    if (uVar1 <= uVar3) {
      uVar1 = param_6;
      if (param_5 < param_6) {
        uVar1 = param_5;
      }
      uVar5 = 0;
      uVar6 = 0;
      uVar4 = 0;
      do {
        if (param_1 == (void *)0x0) {
          memset((void *)(uVar6 + (longlong)param_2),0,(ulonglong)uVar1);
        }
        else {
          memcpy((void *)(uVar6 + (longlong)param_2),(void *)(uVar5 + (longlong)param_1),
                 (ulonglong)uVar1);
        }
        uVar4 = uVar4 + 1;
        uVar6 = (ulonglong)((int)uVar6 + param_6);
        uVar5 = (ulonglong)((int)uVar5 + param_5);
      } while (uVar4 < uVar2);
    }
    return;
  }
  uVar2 = (ulonglong)((int)uVar2 * param_5);
  if (param_1 != (void *)0x0) {
    memcpy(param_2,param_1,uVar2);
    return;
  }
  memset(param_2,0,uVar2);
  return;
}



// FUNCTION 144b1cd87 FUN_144b1cd87 body=62 status=ok
// SIG undefined FUN_144b1cd87(void)

undefined8 FUN_144b1cd87(ushort param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar1 = DAT_14ca96af8;
  }
  if (((uint)puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) == 0) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)param_1 * 0x3c >> 8),
                  2 < (int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf]);
}



// FUNCTION 144b1cdc5 FUN_144b1cdc5 body=83 status=ok
// SIG undefined FUN_144b1cdc5(void)

bool FUN_144b1cdc5(ushort param_1)

{
  undefined4 *puVar1;
  
  if ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] != 1) {
    puVar1 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar1 = DAT_14ca96af8;
    }
    return (int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] < 3 ||
           ((uint)puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) == 0;
  }
  return (bool)(DAT_14c760e14 & DAT_14ca964f0);
}



// FUNCTION 144b1ce18 FUN_144b1ce18 body=11 status=ok
// SIG undefined FUN_144b1ce18(void)

bool FUN_144b1ce18(void)

{
  return DAT_14ca96da8 != '\0';
}



// FUNCTION 144b1ce23 FUN_144b1ce23 body=157 status=ok
// SIG undefined FUN_144b1ce23(void)

bool FUN_144b1ce23(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  
  lVar3 = DAT_14ca97170;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar2 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  lVar4 = DAT_14ca971d0;
  if (*(int *)(lVar3 + uVar9 * 4) < 1) {
    bVar5 = false;
  }
  else {
    if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar6 ^ 1);
    }
    bVar5 = 0 < *(int *)(lVar4 + uVar9 * 4);
  }
  return bVar5;
}



// FUNCTION 144b1cf5b FUN_144b1cf5b body=85 status=ok
// SIG undefined FUN_144b1cf5b(void)

void FUN_144b1cf5b(longlong *param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *(byte *)(param_1 + 8);
    if ((bVar1 == 1) || (bVar1 == 0)) {
      if (*param_1 != 0) {
        plVar2 = param_1 + 4;
        if ((longlong *)param_1[2] != (longlong *)0x0) {
          plVar2 = (longlong *)param_1[2];
        }
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    else {
      (*(code *)(&PTR_LAB_14a3931f0)[bVar1])(param_1);
    }
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 144b1cfce FUN_144b1cfce body=29 status=ok
// SIG undefined FUN_144b1cfce(void)

void FUN_144b1cfce(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    plVar1 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000144b1cfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 144b1cfec FUN_144b1cfec body=13 status=ok
// SIG undefined FUN_144b1cfec(void)

int FUN_144b1cfec(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x68);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 144b1d062 FUN_144b1d062 body=96 status=ok
// SIG undefined FUN_144b1d062(void)

int FUN_144b1d062(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x40);
  puVar1 = *(ulonglong **)(param_1 + 0x48);
  puVar3 = (ulonglong *)(param_1 + 0x48 + ((longlong)puVar1 >> 0x18));
  if (((ulonglong)puVar1 & 1) == 0) {
    puVar3 = puVar1;
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    puVar1 = puVar3 + *(int *)(param_1 + 0x50);
    do {
      uVar4 = *puVar3;
      if ((uVar4 & 1) != 0) {
        uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)puVar3;
      }
      iVar5 = 0;
      lVar6 = 1;
      do {
        iVar5 = (iVar5 + 1) - (uint)(*(longlong *)(uVar4 + lVar6 * 8) == 0);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 6);
      iVar2 = iVar2 + iVar5;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return iVar2;
}



// FUNCTION 144b1d0c2 FUN_144b1d0c2 body=233 status=ok
// SIG undefined FUN_144b1d0c2(void)

ulonglong FUN_144b1d0c2(ulonglong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = (*param_2 ^ (longlong)param_3) * -0x622015f714c7d297;
  lVar2 = (uVar1 >> 0x2f ^ (longlong)param_3 ^ uVar1) * -0x622015f714c7d297;
  uVar1 = param_1[3];
  if ((uVar1 & 1) != 0) {
    uVar1 = (longlong)param_1 + ((longlong)uVar1 >> 0x18) + 0x18;
  }
  uVar5 = param_1[5];
  if ((uVar5 & 1) != 0) {
    uVar5 = (longlong)param_1 + ((longlong)uVar5 >> 0x18) + 0x28;
  }
  uVar6 = param_1[1];
  if ((uVar6 & 1) != 0) {
    uVar6 = (longlong)param_1 + ((longlong)uVar6 >> 0x18) + 8;
  }
  uVar4 = *param_1;
  if ((uVar4 & 1) != 0) {
    uVar4 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
  }
  uVar3 = *(uint *)(uVar4 + (ulonglong)
                            ((uint)param_1[2] &
                             ((uint)((ulonglong)lVar2 >> 0x2f) ^ (uint)lVar2) * 0x2d69 & 0xffff) * 4
                   );
  if (uVar3 != 0xffffffff) {
    do {
      uVar4 = (ulonglong)uVar3;
      if ((*(ulonglong *)(uVar1 + uVar4 * 8) == *param_2) &&
         (*(int *)(uVar5 + uVar4 * 4) == param_3)) {
        uVar1 = param_1[7];
        if ((uVar1 & 1) != 0) {
          uVar1 = (longlong)(param_1 + 7) + ((longlong)uVar1 >> 0x18);
        }
        uVar5 = *(ulonglong *)(uVar1 + (longlong)(int)uVar3 * 8);
        if ((uVar5 & 1) != 0) {
          return ((longlong)uVar5 >> 0x18) + uVar1 + (longlong)(int)uVar3 * 8;
        }
        return uVar5;
      }
      uVar3 = *(uint *)(uVar6 + uVar4 * 4);
    } while (uVar3 != 0xffffffff);
  }
  return 0;
}



// FUNCTION 144b1d1ac FUN_144b1d1ac body=46 status=ok
// SIG undefined FUN_144b1d1ac(void)

undefined8 FUN_144b1d1ac(uint param_1)

{
  ulonglong uVar1;
  
  if (1 < (int)param_1) {
    uVar1 = CONCAT71((int7)((ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_1 * 2) * 0x3c
                           >> 8),
                     *(undefined1 *)
                      ((longlong)&DAT_14ca814d0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)param_1 * 2) * 0x3c + 6)) &
            0xffffffffffffff10;
    return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 4);
  }
  return 0;
}



// FUNCTION 144b1d1da FUN_144b1d1da body=248 status=ok
// SIG undefined FUN_144b1d1da(void)

void FUN_144b1d1da(longlong param_1,int param_2,char param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_3 == '\x01') {
    lVar4 = 200;
    lVar7 = 0xc0;
    lVar2 = 0xa0;
  }
  else if (param_3 == '\x02') {
    lVar4 = 0x108;
    lVar7 = 0x100;
    lVar2 = 0xd0;
  }
  else {
    lVar4 = 0x98;
    lVar7 = 0x90;
    lVar2 = 0x10;
  }
  lVar2 = lVar2 + param_1;
  if (*(longlong *)(param_1 + lVar7) != 0) {
    lVar2 = *(longlong *)(param_1 + lVar7);
  }
  iVar1 = *(int *)(param_1 + lVar4);
  if (0 < (longlong)iVar1) {
    iVar6 = *(int *)(param_4 + 0x60);
    uVar5 = 0;
    do {
      if (((*(byte *)(lVar2 + 0xe + uVar5 * 0x10) & 1) != 0) && (0 < iVar6)) {
        lVar8 = uVar5 * 0x10 + lVar2;
        lVar4 = 0;
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(param_4 + 0x58);
          if (*(longlong *)(param_4 + 0x58) == 0) {
            lVar3 = param_4;
          }
          if (uVar5 == (*(uint *)(lVar3 + lVar4) & 0xf)) {
            *(uint *)(lVar3 + lVar4) =
                 *(uint *)(lVar3 + lVar4) & 0x8000000f |
                 ((uint)*(ushort *)(lVar8 + 0xc) * param_2 + *(int *)(lVar8 + 8) & 0x7ffffff) << 4;
            iVar6 = *(int *)(param_4 + 0x60);
          }
          lVar7 = lVar7 + 1;
          lVar4 = lVar4 + 0xc;
        } while (lVar7 < iVar6);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (longlong)iVar1);
  }
  return;
}



// FUNCTION 144b1d2d2 FUN_144b1d2d2 body=430 status=ok
// SIG undefined FUN_144b1d2d2(void)

void FUN_144b1d2d2(uint *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar12;
  
  uVar7 = param_1[4];
  if ((*(longlong *)(param_1 + 2) == 0) ||
     (lVar10 = *(longlong *)(*(longlong *)(param_1 + 2) + 0x10), lVar10 == 0)) {
    uVar9 = *param_1;
    plVar4 = *(longlong **)(param_2 + 0x38);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x178);
    lVar10 = 0;
    if (UNRECOVERED_JUMPTABLE != FUN_144b1a0a0) goto LAB_144b1d45c;
  }
  else {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    uVar9 = *param_1;
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar10);
    }
    plVar4 = *(longlong **)(param_2 + 0x38);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x178);
    if (UNRECOVERED_JUMPTABLE != FUN_144b1a0a0) {
LAB_144b1d45c:
                    /* WARNING: Could not recover jumptable at 0x000144b1d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar4,uVar9,lVar10,(ulonglong)uVar7);
      return;
    }
    uVar2 = *(uint *)(plVar4 + 0x23);
    if (uVar2 == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    lVar10 = *(longlong *)(lVar10 + 0xf8 + (ulonglong)uVar5 * 8);
  }
  lVar8 = lVar10 + 0x78;
  if (lVar10 == 0) {
    lVar8 = 0;
  }
  uVar6 = (ulonglong)uVar9;
  if (lVar8 == 0) {
    lVar10 = 0;
    iVar11 = 0;
  }
  else {
    lVar10 = (ulonglong)uVar7 + *(longlong *)(lVar8 + 0x58);
    iVar11 = *(int *)(lVar8 + 0x68) - uVar7;
  }
  plVar12 = plVar4 + uVar6 * 2 + 0x74;
  uVar7 = (uint)*(ushort *)((longlong)plVar4 + uVar6 * 2 + 0x8cc);
  if (((lVar10 == *plVar12) && (*(uint *)((longlong)plVar4 + uVar6 * 0x10 + 0x3ac) == uVar7)) &&
     (iVar11 == (int)plVar4[uVar6 * 2 + 0x75])) {
    return;
  }
  *(undefined1 *)(plVar4 + 0x3d) = 1;
  plVar4[uVar6 + 0xb4] = lVar8;
  if (lVar8 == 0) {
    *plVar12 = 0;
    plVar4[uVar6 * 2 + 0x75] = 0;
    plVar4[uVar6 + 0xb4] = 0;
    plVar4[uVar6 + 0xd4] = 0;
    bVar3 = (byte)uVar9 & 0x1f;
    iVar11 = -1;
    uVar7 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & *(uint *)((longlong)plVar4 + 0x7a4);
    *(uint *)((longlong)plVar4 + 0x7a4) = uVar7;
    if (uVar7 == 0) goto LAB_144b1d3d2;
  }
  else {
    plVar4[uVar6 + 0xd4] = *(longlong *)(lVar8 + 0x10);
    *plVar12 = lVar10;
    *(int *)(plVar4 + uVar6 * 2 + 0x75) = iVar11;
    *(uint *)((longlong)plVar4 + uVar6 * 0x10 + 0x3ac) = uVar7;
    uVar7 = *(uint *)((longlong)plVar4 + 0x7a4) | 1 << (uVar9 & 0x1f);
    *(uint *)((longlong)plVar4 + 0x7a4) = uVar7;
  }
  iVar11 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
    }
  }
LAB_144b1d3d2:
  *(int *)(plVar4 + 0xf4) = iVar11;
  return;
}



// FUNCTION 144b1d480 FUN_144b1d480 body=31 status=ok
// SIG undefined FUN_144b1d480(void)

undefined8 FUN_144b1d480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b1d4a0 FUN_144b1d4a0 body=140 status=ok
// SIG undefined FUN_144b1d4a0(void)

void FUN_144b1d4a0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x58);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x58,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x58),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x58,param_2,param_3,param_4);
  return;
}



// FUNCTION 144b1d534 FUN_144b1d534 body=289 status=ok
// SIG undefined FUN_144b1d534(void)

byte FUN_144b1d534(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = param_1[0x77];
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else {
    plVar5 = param_1;
    if (lVar1 == 0) goto LAB_144b1d609;
  }
  if (((*(byte *)(lVar1 + 0x194) & 4) == 0) || (-1 < *(char *)((longlong)param_1 + -0x20a))) {
LAB_144b1d624:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (*(code **)(*param_1 + 0x58) == (code *)&LAB_1457ba96c) {
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x41);
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    }
    plVar5 = (longlong *)&DAT_00000001;
    if (1 < (int)uVar2) goto LAB_144b1d609;
    plVar5 = param_1 + -0x55;
    lVar3 = *plVar5;
    if (*(code **)(lVar3 + 0x558) == (code *)&LAB_1448a8146) {
      plVar4 = param_1 + 0x3a;
    }
    else {
      plVar4 = (longlong *)(**(code **)(lVar3 + 0x558))(plVar5);
      lVar3 = *plVar5;
    }
    if (*(code **)(lVar3 + 0x570) == (code *)&LAB_1448a814e) {
      if ((param_1[-0x40] != 0) && ((*(byte *)(param_1[-0x40] + 0x65) & 1) == 0))
      goto LAB_144b1d624;
      uVar2 = (uint)*(byte *)((longlong)param_1 + 0x17f);
    }
    else {
      uVar2 = (**(code **)(lVar3 + 0x570))(plVar5);
    }
    plVar5 = (longlong *)0x0;
    if (((uVar2 < 6) && ((0x2aU >> (uVar2 & 0x1f) & 1) != 0)) &&
       (plVar5 = (longlong *)&DAT_00000001, *(char *)((longlong)plVar4 + 2) != '\x02')) {
      plVar5 = (longlong *)(ulonglong)(*(char *)((longlong)plVar4 + 6) == '\x02');
    }
  }
LAB_144b1d609:
  return lVar1 != 0 & (byte)plVar5;
}



// FUNCTION 144b1d656 FUN_144b1d656 body=929 status=ok
// SIG undefined FUN_144b1d656(void)

void FUN_144b1d656(longlong param_1,double *param_2,double *param_3)

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
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (*(char *)(param_1 + 0x700) == '\0') {
    dVar17 = 0.0;
    dVar18 = 0.0;
    dVar11 = 0.0;
    dVar9 = 0.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
  }
  else {
    dVar2 = *param_3;
    dVar4 = param_3[1];
    dVar5 = param_3[2];
    dVar8 = param_3[8];
    dVar6 = param_3[9];
    dVar3 = param_3[10];
    dVar18 = dVar5 + dVar5;
    dVar13 = dVar2 + dVar2;
    dVar15 = dVar4 + dVar4;
    dVar9 = param_3[3];
    dVar11 = param_3[3];
    dVar17 = dVar15 * dVar9;
    auVar14._0_8_ = (dVar17 + *param_3 * dVar18) * dVar3;
    auVar14._8_8_ = (dVar13 * dVar11 + *param_3 * dVar13) * param_3[0xb];
    dVar9 = dVar18 * dVar9;
    dVar11 = dVar13 * dVar11;
    dVar16 = (1.0 - (dVar18 * dVar5 + dVar15 * dVar4)) * dVar8;
    dVar10 = (dVar9 + dVar15 * dVar2) * dVar8;
    dVar12 = (dVar11 + dVar18 * dVar4) * dVar6;
    dVar8 = (*param_3 * dVar18 - dVar17) * dVar8;
    auVar20._0_8_ = dVar6 * (dVar15 * dVar2 - dVar9);
    auVar20._8_8_ = dVar3 * (dVar18 * dVar4 - dVar11);
    auVar14 = blendpd(auVar14,auVar20,2);
    auVar21._8_8_ = (1.0 - (dVar18 * dVar5 + dVar13 * dVar2)) * dVar6;
    auVar21._0_8_ = dVar16;
    auVar21 = blendpd(auVar20,auVar21,2);
    dVar3 = (1.0 - (dVar13 * dVar2 + dVar15 * dVar4)) * dVar3;
    dVar9 = (*(double *)(param_1 + 0x6d0) + *(double *)(param_1 + 0x6e8)) * 0.5;
    dVar5 = (*(double *)(param_1 + 0x6d8) + *(double *)(param_1 + 0x6f0)) * 0.5;
    dVar19 = (*(double *)(param_1 + 0x6e0) + *(double *)(param_1 + 0x6f8)) * 0.5;
    dVar11 = (*(double *)(param_1 + 0x6e8) - *(double *)(param_1 + 0x6d0)) * 0.5;
    dVar2 = (*(double *)(param_1 + 0x6f0) - *(double *)(param_1 + 0x6d8)) * 0.5;
    dVar4 = (*(double *)(param_1 + 0x6f8) - *(double *)(param_1 + 0x6e0)) * 0.5;
    dVar6 = dVar19 * auVar14._0_8_ + dVar5 * auVar21._0_8_ + dVar9 * dVar16 + param_3[4];
    dVar7 = dVar19 * auVar14._8_8_ + dVar5 * auVar21._8_8_ + dVar9 * dVar10 + param_3[5];
    dVar17 = ABS(dVar4 * auVar14._0_8_) + ABS(auVar21._0_8_ * dVar2) + ABS(dVar11 * dVar16);
    dVar18 = ABS(dVar4 * auVar14._8_8_) + ABS(auVar21._8_8_ * dVar2) + ABS(dVar11 * dVar10);
    dVar13 = dVar6 - dVar17;
    dVar15 = dVar7 - dVar18;
    dVar17 = dVar17 + dVar6;
    dVar18 = dVar18 + dVar7;
    dVar9 = dVar19 * dVar3 + dVar5 * dVar12 + dVar9 * dVar8 + param_3[6];
    dVar2 = ABS(dVar2 * dVar12) + ABS(dVar11 * dVar8) + ABS(dVar4 * dVar3);
    dVar11 = dVar9 - dVar2;
    dVar9 = dVar9 + dVar2;
  }
  dVar9 = (double)*(float *)(param_1 + 0x79c) + dVar9;
  dVar11 = dVar11 - (double)*(float *)(param_1 + 0x798);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    dVar9 = dVar9 + (double)*(float *)(lVar1 + 0x58c);
    dVar11 = dVar11 - (double)*(float *)(lVar1 + 0x588);
  }
  dVar9 = (dVar9 - dVar11) * 0.5;
  dVar18 = ((dVar18 + 0.0) - dVar15) * 0.5;
  dVar17 = ((dVar17 + 0.0) - dVar13) * 0.5;
  *param_2 = dVar13 + dVar17;
  param_2[1] = dVar15 + dVar18;
  param_2[2] = dVar11 + dVar9;
  param_2[3] = dVar17;
  param_2[4] = dVar18;
  param_2[5] = dVar9;
  param_2[6] = SQRT(dVar9 * dVar9 + dVar17 * dVar17 + dVar18 * dVar18);
  return;
}



// FUNCTION 144b1da20 FUN_144b1da20 body=115 status=ok
// SIG undefined FUN_144b1da20(void)

undefined4 FUN_144b1da20(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x4c))) {
    puVar3 = (undefined4 *)(param_1 + 0x10);
  }
  else {
    lVar1 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x60) + 0x7fffffffU & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x10) == param_2)
        goto LAB_144b1da7b;
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
    lVar1 = 0;
LAB_144b1da7b:
    puVar2 = (undefined4 *)(lVar1 + 4);
    if (lVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)(param_1 + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = puVar2;
    }
  }
  return *puVar3;
}



// FUNCTION 144b1da94 FUN_144b1da94 body=547 status=ok
// SIG undefined FUN_144b1da94(void)

int * FUN_144b1da94(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
      FUN_1446efaca(param_1,iVar10);
    }
    lVar13 = (longlong)iVar10;
    iVar9 = FUN_144a54ea4(param_1 + 2,1);
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    iVar7 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    bVar5 = (byte)iVar9 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar10 = (int)param_1[6];
    lVar13 = (longlong)iVar10;
    iVar9 = *(int *)(*param_1 + 4 + lVar13 * 0x10);
    *(int *)(param_1 + 6) = iVar9;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x10) = 0xffffffff;
    }
  }
  iVar9 = 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar7 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  lVar3 = *param_1;
  lVar13 = lVar13 * 0x10;
  uVar8 = *param_3;
  *(ulonglong *)(lVar3 + lVar13) = uVar8;
  *(undefined4 *)(lVar3 + 8 + lVar13) = 0xffffffff;
  uVar11 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar12 != 0) && (uVar12 != 1)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar7 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x10) == uVar8) {
          *puVar2 = uVar8;
          FUN_147468908(param_1,iVar10);
          goto LAB_144b1dc21;
        }
        iVar7 = (int)puVar2[1];
      } while (iVar7 != -1);
    }
  }
  if (3 < uVar12) {
    uVar8 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar4 & 0x1f);
  }
  iVar7 = iVar10;
  if (((int)uVar12 < 1) || (iVar9 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)(lVar3 + lVar13 + 0xc) = uVar11;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(lVar3 + lVar13 + 8) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_144addd98(param_1);
  }
LAB_144b1dc21:
  *param_2 = iVar7;
  return param_2;
}



// FUNCTION 144b1dcb8 FUN_144b1dcb8 body=131 status=ok
// SIG undefined FUN_144b1dcb8(void)

void FUN_144b1dcb8(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xd) = 1;
  *param_1 = &PTR_FUN_14a1ca4e0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x800000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x200000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x300000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x1ffffff;
  return;
}



// FUNCTION 144b1dd8a FUN_144b1dd8a body=448 status=ok
// SIG undefined FUN_144b1dd8a(void)

float FUN_144b1dd8a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  float fVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  fVar10 = 0.0;
  if (lVar2 == 0) {
    return 0.0;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar3 + 0xc60);
  lVar9 = 0x118;
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) goto LAB_144b1de9b;
  piVar1 = (int *)(lVar3 + 0xc60);
  if (iVar6 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_144b1de9b;
    iVar6 = *piVar1;
  }
  plVar4 = DAT_14c948aa0;
  if (iVar6 == 4) goto LAB_144b1de9b;
  if ((code *)PTR_FUN_14c758760 == FUN_144955985) {
    if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_144b1df42;
    if (*(code **)(*DAT_14c948aa0 + 0x88) != FUN_141711e26) {
      cVar5 = (**(code **)(*DAT_14c948aa0 + 0x88))(DAT_14c948aa0);
      goto LAB_144b1def8;
    }
    if (((*(byte *)((longlong)DAT_14c948aa0 + 0x19) & 1) != 0) &&
       (DVar7 = GetCurrentThreadId(), DVar7 == *(DWORD *)(plVar4 + 0x50))) goto LAB_144b1de9b;
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *piVar1, iVar6 == 2)) {
LAB_144b1df35:
      if ((int)plVar4[0xbb] != 0) goto LAB_144b1de9b;
      goto LAB_144b1df42;
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 != DVar8) goto LAB_144b1df42;
      goto LAB_144b1df35;
    }
  }
  else {
    cVar5 = (*(code *)PTR_FUN_14c758760)();
LAB_144b1def8:
    if (cVar5 != '\0') goto LAB_144b1de9b;
LAB_144b1df42:
    iVar6 = *piVar1;
  }
  if (iVar6 != 8) {
    if (DAT_14c86a9fc == 0) {
      lVar9 = 0x120;
      if (((iVar6 == 2) || (iVar6 == 0x10)) || (iVar6 == 0x40000010)) goto LAB_144b1de9b;
    }
    else {
      lVar9 = 0x120;
      if ((iVar6 - 0x10U & 0xbfffffef) == 0) goto LAB_144b1de9b;
    }
    lVar9 = 0x120;
    cVar5 = FUN_144afd4a5();
    if (cVar5 == '\0') {
      return 0.0;
    }
  }
LAB_144b1de9b:
  lVar2 = *(longlong *)(lVar2 + lVar9);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x58), lVar2 != 0)) {
    fVar10 = (float)(int)(((uint)((ulonglong)lVar2 >> 0x18) & 0xff) -
                         ((uint)((ulonglong)lVar2 >> 0x28) & 0xff));
  }
  return fVar10;
}



// FUNCTION 144b1df94 FUN_144b1df94 body=8 status=ok
// SIG undefined FUN_144b1df94(void)

undefined8 FUN_144b1df94(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa48);
}



// FUNCTION 144b1df9c FUN_144b1df9c body=190 status=ok
// SIG undefined FUN_144b1df9c(void)

void FUN_144b1df9c(longlong param_1,int *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = -1;
  if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x488;
    if (*(longlong *)(param_1 + 0x490) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x490);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x498) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x450) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_3) {
          if ((((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) &&
              (iVar4 = (int)puVar1[1], iVar4 != -1)) && (iVar2 = -1, -1 < iVar4)) {
            iVar2 = iVar4;
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  *param_2 = iVar2;
  return;
}



// FUNCTION 144b1e05a FUN_144b1e05a body=1053 status=ok
// SIG undefined FUN_144b1e05a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b1e05a(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar5;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (*(char *)param_1[3] != '\0') {
    puVar23 = (undefined8 *)*param_1;
    puVar24 = (undefined8 *)*param_2;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar24 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar24 = puVar24 + 1;
    }
  }
  if (1 < (int)uVar6) {
    uVar22 = (ulonglong)uVar6 + 1;
    lVar20 = (ulonglong)uVar6 << 0x20;
    do {
      lVar20 = lVar20 + -0x100000000;
      if (*(char *)(param_1[3] + -2 + uVar22) != '\0') {
        iVar7 = *(int *)(*(longlong *)(param_2[2] + 0x90) + (lVar20 >> 0x1e));
        if (*(char *)(param_1[3] + (longlong)iVar7) == '\0') {
          FUN_1447d5d8e(param_1,iVar7);
        }
        lVar15 = (lVar20 >> 0x20) * 0x60;
        puVar23 = (undefined8 *)(*param_1 + lVar15);
        puVar24 = (undefined8 *)(*param_2 + lVar15);
        for (lVar21 = 0xc; auVar30 = _DAT_149934d80, lVar21 != 0; lVar21 = lVar21 + -1) {
          *puVar24 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar24 = puVar24 + 1;
        }
        lVar21 = *param_2;
        lVar8 = *param_1;
        lVar25 = (longlong)iVar7 * 0x60;
        auVar34 = *(undefined1 (*) [16])(lVar8 + 0x40 + lVar25);
        auVar33 = *(undefined1 (*) [16])(lVar8 + 0x50 + lVar25);
        auVar29 = divpd(_DAT_149934d80,auVar34);
        auVar32 = divpd(ZEXT816(0x3ff0000000000000),auVar33);
        dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar34._0_8_)) & auVar29._0_8_);
        dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar34._8_8_)) & auVar29._8_8_);
        dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar33._0_8_)) & auVar32._0_8_);
        pdVar1 = (double *)(lVar21 + 0x40 + lVar15);
        dVar39 = pdVar1[1];
        pdVar2 = (double *)(lVar21 + 0x50 + lVar15);
        dVar3 = *pdVar2;
        dVar4 = pdVar2[1];
        pdVar2 = (double *)(lVar21 + 0x40 + lVar15);
        *pdVar2 = *pdVar1 * dVar27;
        pdVar2[1] = dVar39 * dVar28;
        pdVar1 = (double *)(lVar21 + 0x50 + lVar15);
        *pdVar1 = dVar3 * dVar26;
        pdVar1[1] = dVar4 * 0.0;
        pdVar1 = (double *)(lVar21 + 0x20 + lVar15);
        pdVar2 = (double *)(lVar8 + 0x20 + lVar25);
        dVar13 = *pdVar1 - *pdVar2;
        dVar14 = pdVar1[1] - pdVar2[1];
        dVar31 = *(double *)(lVar21 + 0x30 + lVar15) - *(double *)(lVar8 + 0x30 + lVar25);
        dVar9 = -*(double *)(lVar8 + lVar25);
        dVar10 = -((double *)(lVar8 + lVar25))[1];
        pdVar1 = (double *)(lVar8 + 0x10 + lVar25);
        dVar11 = *pdVar1 * -1.0;
        dVar12 = pdVar1[1] * 1.0;
        dVar36 = dVar14 * dVar9 - dVar13 * dVar10;
        dVar37 = dVar31 * dVar10 - dVar14 * dVar11;
        dVar38 = dVar13 * dVar11 - dVar31 * dVar9;
        dVar39 = dVar12 * 0.0 - dVar12 * 0.0;
        dVar37 = dVar37 + dVar37;
        dVar38 = dVar38 + dVar38;
        dVar36 = dVar36 + dVar36;
        dVar39 = dVar39 + dVar39;
        dVar16 = *(double *)(lVar21 + lVar15);
        dVar17 = ((double *)(lVar21 + lVar15))[1];
        pdVar1 = (double *)(lVar21 + 0x10 + lVar15);
        dVar18 = *pdVar1;
        dVar19 = pdVar1[1];
        dVar35 = ((dVar39 * dVar12 - dVar39 * dVar12) + dVar12 * dVar39 + 0.0) * 0.0;
        dVar3 = *(double *)(lVar8 + lVar25);
        dVar39 = *(double *)(lVar8 + lVar25);
        pdVar1 = (double *)(lVar8 + 8 + lVar25);
        dVar4 = *pdVar1;
        dVar5 = *pdVar1;
        pdVar1 = (double *)(lVar21 + 0x20 + lVar15);
        *pdVar1 = ((dVar36 * dVar10 - dVar11 * dVar38) + dVar12 * dVar37 + dVar13) * dVar27;
        pdVar1[1] = ((dVar37 * dVar11 - dVar36 * dVar9) + dVar12 * dVar38 + dVar14) * dVar28;
        auVar34._8_4_ = SUB84(dVar35,0);
        auVar34._0_8_ = ((dVar38 * dVar9 - dVar10 * dVar37) + dVar12 * dVar36 + dVar31) * dVar26;
        auVar34._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        *(undefined1 (*) [16])(lVar21 + 0x30 + lVar15) = auVar34;
        *(double *)(lVar21 + lVar15) =
             dVar17 * dVar11 * -1.0 + ((dVar12 * dVar16 - dVar3 * dVar19 * 1.0) - dVar4 * dVar18);
        ((double *)(lVar21 + lVar15))[1] =
             dVar16 * dVar11 * 1.0 + ((dVar12 * dVar17 - dVar39 * dVar18 * -1.0) - dVar5 * dVar19);
        pdVar1 = (double *)(lVar21 + 0x10 + lVar15);
        *pdVar1 = dVar19 * dVar11 * 1.0 + dVar4 * dVar16 + (dVar12 * dVar18 - dVar3 * dVar17 * 1.0);
        pdVar1[1] = dVar18 * dVar11 * -1.0 +
                    dVar5 * dVar17 + (dVar12 * dVar19 - dVar39 * dVar16 * -1.0);
        lVar21 = *param_2;
        dVar39 = *(double *)(lVar21 + lVar15);
        dVar3 = ((double *)(lVar21 + lVar15))[1];
        pdVar1 = (double *)(lVar21 + 0x10 + lVar15);
        dVar4 = *pdVar1;
        dVar5 = pdVar1[1];
        dVar36 = dVar4 * dVar4 + dVar39 * dVar39;
        dVar35 = dVar5 * dVar5 + dVar3 * dVar3;
        auVar33._0_8_ = dVar36 + dVar35;
        auVar33._8_8_ = dVar36 + dVar35;
        auVar34 = sqrtpd(auVar33,auVar33);
        auVar34 = divpd(auVar30,auVar34);
        auVar29._0_8_ = auVar34._0_8_ * dVar4;
        auVar29._8_8_ = auVar34._8_8_ * dVar5;
        auVar30._8_8_ = -(ulonglong)(1e-08 <= auVar33._8_8_);
        auVar30._0_8_ = -(ulonglong)(1e-08 <= auVar33._0_8_);
        auVar30 = blendvpd(_DAT_149935300,auVar29,auVar30);
        *(ulonglong *)(lVar21 + lVar15) =
             (ulonglong)(dVar39 * auVar34._0_8_) & -(ulonglong)(1e-08 <= auVar33._0_8_);
        ((ulonglong *)(lVar21 + lVar15))[1] =
             (ulonglong)(dVar3 * auVar34._8_8_) & -(ulonglong)(1e-08 <= auVar33._8_8_);
        *(undefined1 (*) [16])(lVar21 + 0x10 + lVar15) = auVar30;
      }
      uVar22 = uVar22 - 1;
    } while (2 < uVar22);
  }
  return;
}



// FUNCTION 144b1e478 FUN_144b1e478 body=88 status=ok
// SIG undefined FUN_144b1e478(void)

undefined8 * FUN_144b1e478(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d4b9c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 144b1e4d0 FUN_144b1e4d0 body=224 status=ok
// SIG undefined FUN_144b1e4d0(void)

uint FUN_144b1e4d0(float param_1,float param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = _isnan((double)param_1);
  if (iVar3 == 0) {
    iVar3 = _isnan((double)param_2);
    if (iVar3 == 0) {
      iVar3 = _finite((double)param_1);
      if ((iVar3 != 0) && (iVar3 = _finite((double)param_2), iVar3 != 0)) {
        uVar1 = (uint)param_1 | 0x80000000;
        if ((int)param_1 < 0) {
          uVar1 = -(int)param_1;
        }
        uVar2 = (uint)param_2 | 0x80000000;
        if ((int)param_2 < 0) {
          uVar2 = -(int)param_2;
        }
        uVar4 = uVar1 - uVar2;
        if (uVar1 < uVar2) {
          uVar4 = -(uVar1 - uVar2);
        }
        return CONCAT31((int3)(-(uVar1 - uVar2) >> 8),uVar4 <= param_3);
      }
      return -(uint)(param_1 == param_2) & 1;
    }
  }
  return 0;
}



// FUNCTION 144b1e5dc FUN_144b1e5dc body=1 status=ok
// SIG undefined FUN_144b1e5dc(void)

void FUN_144b1e5dc(void)

{
  return;
}



// FUNCTION 144b1e600 FUN_144b1e600 body=865 status=ok
// SIG undefined FUN_144b1e600(void)

void FUN_144b1e600(double *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  DWORD DVar4;
  DWORD DVar5;
  double *pdVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  
  lVar8 = DAT_14caab2b0;
  pdVar6 = (double *)*param_2;
  dVar11 = param_1[2] - pdVar6[2];
  dVar13 = param_1[1] - pdVar6[1];
  dVar9 = *pdVar6;
  dVar12 = *param_1 - dVar9;
  uVar21 = 0;
  uVar22 = 0;
  dVar14 = SQRT(dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13);
  dVar16 = DAT_14c8464f0;
  dVar19 = DAT_14c8464e8;
  dVar10 = DAT_14c8464e0;
  if (9.99999993922529e-09 < dVar14) {
    dVar10 = 1.0 / dVar14;
    dVar16 = dVar11 * dVar10;
    dVar19 = dVar13 * dVar10;
    dVar10 = dVar12 * dVar10;
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
    pdVar6 = (double *)*param_2;
    dVar9 = *pdVar6;
  }
  else {
    uVar7 = 1;
  }
  if ((longlong)(int)param_2[5] < 2) {
    dVar11 = pdVar6[1];
    dVar12 = pdVar6[2];
  }
  else {
    dVar13 = (double)*(float *)(lVar8 + uVar7 * 4);
    if (0.99 <= dVar13) {
      dVar13 = 0.99;
    }
    if (dVar13 <= 0.01) {
      dVar13 = 0.01;
    }
    dVar11 = pdVar6[1];
    dVar12 = pdVar6[2];
    lVar8 = 0;
    do {
      dVar15 = (*(double *)((longlong)pdVar6 + lVar8 + 0x80) - dVar12) * dVar16 +
               (*(double *)((longlong)pdVar6 + lVar8 + 0x70) - dVar9) * dVar10 +
               (*(double *)((longlong)pdVar6 + lVar8 + 0x78) - dVar11) * dVar19;
      dVar18 = dVar13 * dVar15;
      dVar17 = dVar14;
      if (dVar18 <= dVar14) {
        dVar17 = dVar18;
      }
      uVar7 = -(ulonglong)(0.0 < dVar15);
      auVar20._0_8_ = ~uVar7 & (ulonglong)dVar14;
      auVar20._12_4_ = uVar22;
      auVar20._8_4_ = uVar21;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulonglong)dVar17 & uVar7;
      auVar20 = auVar20 | auVar3;
      dVar14 = auVar20._0_8_;
      uVar21 = auVar20._8_4_;
      uVar22 = auVar20._12_4_;
      lVar8 = lVar8 + 0x70;
    } while ((longlong)(int)param_2[5] * 0x70 + -0x70 != lVar8);
  }
  *pdVar6 = dVar9 + dVar10 * dVar14;
  pdVar6[1] = dVar19 * dVar14 + dVar11;
  pdVar6[2] = dVar16 * dVar14 + dVar12;
  if (1 < (int)param_2[5]) {
    uVar7 = 1;
    lVar8 = 0x80;
    do {
      lVar2 = *param_2;
      dVar9 = *(double *)(lVar2 + -0x70 + lVar8);
      dVar14 = *(double *)(lVar2 + lVar8) - dVar9;
      dVar11 = *(double *)(lVar2 + -0x80 + lVar8);
      dVar12 = *(double *)(lVar2 + -0x78 + lVar8);
      dVar16 = *(double *)(lVar2 + -8 + lVar8) - dVar12;
      dVar19 = *(double *)(lVar2 + -0x10 + lVar8) - dVar11;
      dVar13 = dVar14 * dVar14 + dVar19 * dVar19 + dVar16 * dVar16;
      if (((dVar13 != 1.0) || (dVar10 = dVar14, dVar17 = dVar16, dVar15 = dVar19, NAN(dVar13))) &&
         (dVar10 = DAT_14c8464f0, dVar17 = DAT_14c8464e8, dVar15 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar13)) {
        dVar13 = 1.0 / SQRT(dVar13);
        dVar10 = dVar14 * dVar13;
        dVar17 = dVar16 * dVar13;
        dVar15 = dVar19 * dVar13;
      }
      dVar13 = *(double *)(lVar2 + -0x68 + lVar8);
      *(double *)(lVar2 + -0x10 + lVar8) = dVar11 + dVar15 * dVar13;
      *(double *)(lVar2 + -8 + lVar8) = dVar12 + dVar17 * dVar13;
      *(double *)(lVar2 + lVar8) = dVar9 + dVar10 * dVar13;
      if ((char)param_2[9] == '\x01') {
        FUN_1474eafd6(param_2,uVar7 & 0xffffffff);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x70;
    } while ((longlong)uVar7 < (longlong)(int)param_2[5]);
  }
  return;
}



// FUNCTION 144b1e962 FUN_144b1e962 body=936 status=ok
// SIG undefined FUN_144b1e962(void)

void FUN_144b1e962(double *param_1,longlong *param_2)

{
  bool bVar1;
  double dVar2;
  undefined1 auVar3 [16];
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  
  lVar7 = DAT_14caab2b0;
  iVar8 = (int)param_2[1];
  lVar10 = *param_2;
  lVar11 = (longlong)(iVar8 + -1) * 0x70;
  auVar15._0_8_ = param_1[2] - *(double *)(lVar10 + 0x10 + lVar11);
  dVar16 = param_1[1] - *(double *)(lVar10 + 8 + lVar11);
  dVar17 = *param_1 - *(double *)(lVar10 + lVar11);
  fVar23 = (float)SQRT(auVar15._0_8_ * auVar15._0_8_ + dVar17 * dVar17 + dVar16 * dVar16);
  dVar2 = DAT_14c8464f0;
  dVar18 = DAT_14c8464e8;
  dVar13 = DAT_14c8464e0;
  if (1e-08 < fVar23) {
    dVar13 = (double)(1.0 / fVar23);
    dVar2 = auVar15._0_8_ * dVar13;
    dVar18 = dVar16 * dVar13;
    dVar13 = dVar17 * dVar13;
  }
  iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar6 = 0;
  }
  else if (iVar9 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
    iVar8 = (int)param_2[1];
    lVar10 = *param_2;
  }
  else {
    uVar6 = 1;
  }
  auVar15._0_8_ = (double)fVar23;
  auVar15._8_8_ = 0;
  iVar9 = (int)param_2[5];
  if ((longlong)iVar9 < 2) {
    lVar7 = (longlong)(iVar8 + -1);
    lVar11 = lVar7 * 0x70;
    dVar16 = *(double *)(lVar10 + lVar11);
    dVar21 = *(double *)(lVar10 + 8 + lVar11);
    dVar17 = *(double *)(lVar10 + 0x10 + lVar11);
  }
  else {
    dVar20 = (double)*(float *)(lVar7 + uVar6 * 4);
    if (0.99 <= dVar20) {
      dVar20 = 0.99;
    }
    if (dVar20 <= 0.01) {
      dVar20 = 0.01;
    }
    lVar12 = (longlong)iVar9 * 0x70;
    lVar7 = (longlong)(iVar8 + -1);
    lVar11 = lVar7 * 0x70;
    dVar17 = *(double *)(lVar10 + 0x10 + lVar11);
    dVar16 = *(double *)(lVar10 + lVar11);
    dVar21 = *(double *)(lVar10 + 8 + lVar11);
    dVar19 = (*(double *)(lVar10 + -0xd0 + lVar12) - dVar17) * dVar2 +
             (*(double *)(lVar10 + -0xe0 + lVar12) - dVar16) * dVar13 +
             (*(double *)(lVar10 + -0xd8 + lVar12) - dVar21) * dVar18;
    dVar20 = dVar20 * dVar19;
    iVar9 = iVar9 + -1;
    uVar6 = -(ulonglong)(0.0 < dVar19);
    do {
      dVar19 = auVar15._0_8_;
      if (dVar20 <= auVar15._0_8_) {
        dVar19 = dVar20;
      }
      auVar14._0_8_ = (ulonglong)dVar19 & uVar6;
      auVar14._8_8_ = 0;
      auVar3._8_4_ = auVar15._8_4_;
      auVar3._0_8_ = ~uVar6 & (ulonglong)auVar15._0_8_;
      auVar3._12_4_ = auVar15._12_4_;
      auVar15 = auVar14 | auVar3;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  lVar7 = lVar7 * 0x70;
  *(double *)(lVar10 + lVar7) = dVar13 * auVar15._0_8_ + dVar16;
  *(double *)(lVar10 + 8 + lVar7) = dVar18 * auVar15._0_8_ + dVar21;
  *(double *)(lVar10 + 0x10 + lVar7) = dVar2 * auVar15._0_8_ + dVar17;
  uVar6 = (ulonglong)(int)param_2[5];
  if (1 < (longlong)uVar6) {
    lVar10 = uVar6 * 0x70 + -0xe0;
    do {
      lVar7 = *param_2;
      auVar15._0_8_ = *(double *)(lVar7 + 0x80 + lVar10);
      dVar13 = *(double *)(lVar7 + 0x10 + lVar10) - auVar15._0_8_;
      dVar17 = *(double *)(lVar7 + 0x78 + lVar10);
      dVar21 = *(double *)(lVar7 + 8 + lVar10) - dVar17;
      dVar16 = *(double *)(lVar7 + 0x70 + lVar10);
      dVar18 = *(double *)(lVar7 + lVar10) - dVar16;
      dVar2 = dVar13 * dVar13 + dVar18 * dVar18 + dVar21 * dVar21;
      if (((dVar2 != 1.0) || (dVar20 = dVar18, dVar19 = dVar13, dVar22 = dVar21, NAN(dVar2))) &&
         (dVar20 = DAT_14c8464e0, dVar19 = DAT_14c8464f0, dVar22 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar2)) {
        dVar2 = 1.0 / SQRT(dVar2);
        dVar20 = dVar18 * dVar2;
        dVar19 = dVar13 * dVar2;
        dVar22 = dVar21 * dVar2;
      }
      dVar2 = *(double *)(lVar7 + 0x18 + lVar10);
      *(double *)(lVar7 + lVar10) = dVar16 + dVar20 * dVar2;
      *(double *)(lVar7 + 8 + lVar10) = dVar17 + dVar22 * dVar2;
      *(double *)(lVar7 + 0x10 + lVar10) = auVar15._0_8_ + dVar19 * dVar2;
      if ((char)param_2[9] == '\x01') {
        FUN_1474eb34a(param_2,(int)uVar6 + -1);
      }
      lVar10 = lVar10 + -0x70;
      bVar1 = 2 < uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 144b1ed0c FUN_144b1ed0c body=153 status=ok
// SIG undefined FUN_144b1ed0c(void)

ulonglong FUN_144b1ed0c(longlong param_1,char param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  bool bVar4;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0xe08);
  AcquireSRWLockShared(SRWLock);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((*(int *)(param_1 + 0xdd0) < 1) && ((param_2 == '\0' || (*(int *)(param_1 + 0xe00) < 1)))) {
    lVar1 = param_1 + 0xaf8;
    if (*(longlong *)(param_1 + 0xd98) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xd98);
    }
    if ((longlong)*(int *)(param_1 + 0xda0) == 0) {
      uVar3 = 0;
    }
    else {
      lVar2 = 0;
      do {
        bVar4 = *(char *)(lVar1 + lVar2) == '\0';
        uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar4);
        if (bVar4) break;
        bVar4 = (longlong)*(int *)(param_1 + 0xda0) * 0xa8 + -0xa8 != lVar2;
        lVar2 = lVar2 + 0xa8;
      } while (bVar4);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  return uVar3 & 0xffffffff;
}



// FUNCTION 144b1eda6 FUN_144b1eda6 body=268 status=ok
// SIG undefined FUN_144b1eda6(void)

ulonglong FUN_144b1eda6(longlong param_1,longlong param_2,char param_3)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  ulonglong unaff_R14;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0xe08);
  AcquireSRWLockShared(SRWLock);
  lVar1 = param_1 + 0xda8;
  if (*(longlong *)(param_1 + 0xdc8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xdc8);
  }
  if ((longlong)*(int *)(param_1 + 0xdd0) != 0) {
    lVar2 = 0;
    do {
      unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
      if (*(longlong *)(lVar1 + lVar2) == param_2) goto LAB_144b1edf9;
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0xdd0) * 8 != lVar2);
  }
  if (param_3 != '\0') {
    lVar1 = param_1 + 0xdd8;
    if (*(longlong *)(param_1 + 0xdf8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xdf8);
    }
    if ((longlong)*(int *)(param_1 + 0xe00) != 0) {
      lVar2 = 0;
      do {
        unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
        if (*(longlong *)(lVar1 + lVar2) == param_2) goto LAB_144b1edf9;
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_1 + 0xe00) * 8 != lVar2);
    }
  }
  lVar1 = param_1 + 0xaf8;
  if (*(longlong *)(param_1 + 0xd98) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xd98);
  }
  if ((longlong)*(int *)(param_1 + 0xda0) == 0) {
    unaff_R14 = 0;
  }
  else {
    lVar2 = 0;
    do {
      if ((*(char *)(lVar1 + lVar2) == '\0') &&
         (unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1),
         *(longlong *)(lVar1 + 0x10 + lVar2) == param_2)) break;
      lVar2 = lVar2 + 0xa8;
      unaff_R14 = 0;
    } while ((longlong)*(int *)(param_1 + 0xda0) * 0xa8 - lVar2 != 0);
  }
LAB_144b1edf9:
  ReleaseSRWLockShared(SRWLock);
  return unaff_R14 & 0xffffffff;
}



// FUNCTION 144b1eeb2 FUN_144b1eeb2 body=55 status=ok
// SIG undefined FUN_144b1eeb2(void)

ulonglong FUN_144b1eeb2(longlong param_1)

{
  int iVar1;
  PSRWLOCK SRWLock;
  undefined8 unaff_RBX;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0xe08);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0xda0);
  ReleaseSRWLockShared(SRWLock);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0) & 0xffffffff;
}



// FUNCTION 144b1eeea FUN_144b1eeea body=62 status=ok
// SIG undefined FUN_144b1eeea(void)

undefined4 FUN_144b1eeea(longlong param_1)

{
  undefined4 uVar1;
  PSRWLOCK SRWLock;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0xe08);
  AcquireSRWLockShared(SRWLock);
  uVar1 = *(undefined4 *)(param_1 + 0xaf0);
  ReleaseSRWLockShared(SRWLock);
  return uVar1;
}



// FUNCTION 144b1ef28 FUN_144b1ef28 body=608 status=ok
// SIG undefined FUN_144b1ef28(void)

undefined8 FUN_144b1ef28(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined4 extraout_var;
  
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 != (int)param_3[1]) {
    return 0;
  }
  if (0 < iVar7) {
    lVar12 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x38);
      iVar3 = *(int *)(*param_3 + 8 + lVar12 * 0xa0);
      if (iVar3 != *(int *)(lVar4 + 8 + lVar12 * 0x10)) {
        return 0;
      }
      if (0 < iVar3) {
        plVar11 = (longlong *)(*param_3 + lVar12 * 0xa0);
        lVar10 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar4 + lVar12 * 0x10) + lVar10 * 4);
          fVar2 = *(float *)(*plVar11 + lVar10 * 4);
          iVar7 = _isnan((double)fVar2);
          if (iVar7 != 0) {
            return 0;
          }
          iVar7 = _isnan((double)fVar1);
          if (iVar7 != 0) {
            return 0;
          }
          iVar7 = _finite((double)fVar2);
          if ((iVar7 == 0) || (iVar7 = _finite((double)fVar1), iVar7 == 0)) {
            if (fVar2 != fVar1) {
              return 0;
            }
            if (NAN(fVar2) || NAN(fVar1)) {
              return 0;
            }
          }
          else {
            uVar5 = (uint)fVar2 | 0x80000000;
            if ((int)fVar2 < 0) {
              uVar5 = -(int)fVar2;
            }
            uVar6 = (uint)fVar1 | 0x80000000;
            if ((int)fVar1 < 0) {
              uVar6 = -(int)fVar1;
            }
            uVar9 = uVar5 - uVar6;
            if (uVar5 < uVar6) {
              uVar9 = -(uVar5 - uVar6);
            }
            if (4 < uVar9) {
              return 0;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)plVar11[1]);
        iVar7 = (int)param_3[1];
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar7);
  }
  if (*(char *)(param_1 + 4) != *(char *)(param_2 + 4)) {
    return 0;
  }
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_1 + 8);
  iVar7 = _isnan((double)fVar2);
  if (iVar7 != 0) {
    return 0;
  }
  iVar7 = _isnan((double)fVar1);
  if (iVar7 != 0) {
    return 0;
  }
  iVar7 = _finite((double)fVar2);
  uVar8 = CONCAT44(extraout_var,iVar7);
  if (iVar7 != 0) {
    iVar7 = _finite((double)fVar1);
    uVar8 = CONCAT44(extraout_var_00,iVar7);
    if (iVar7 != 0) {
      uVar5 = (uint)fVar2 | 0x80000000;
      if ((int)fVar2 < 0) {
        uVar5 = -(int)fVar2;
      }
      uVar6 = (uint)fVar1 | 0x80000000;
      if ((int)fVar1 < 0) {
        uVar6 = -(int)fVar1;
      }
      uVar8 = (ulonglong)-(uVar5 - uVar6);
      uVar9 = uVar5 - uVar6;
      if (uVar5 < uVar6) {
        uVar9 = -(uVar5 - uVar6);
      }
      if (4 < uVar9) {
        return 0;
      }
      goto LAB_144b1f12e;
    }
  }
  if (fVar2 != fVar1) {
    return 0;
  }
  if (NAN(fVar2) || NAN(fVar1)) {
    return 0;
  }
LAB_144b1f12e:
  if ((*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd)) &&
     (*(char *)(param_1 + 0xe) == *(char *)(param_2 + 0xe))) {
    return CONCAT71((int7)(uVar8 >> 8),*(char *)(param_1 + 0xf) == *(char *)(param_2 + 0xf));
  }
  return 0;
}



// FUNCTION 144b1f18c FUN_144b1f18c body=149 status=ok
// SIG undefined FUN_144b1f18c(void)

void FUN_144b1f18c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 8;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  lVar1 = 0x62;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x122);
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 144b1f222 FUN_144b1f222 body=16 status=ok
// SIG undefined FUN_144b1f222(void)

undefined8 FUN_144b1f222(longlong *param_1)

{
  return *(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
}



// FUNCTION 144b1f232 FUN_144b1f232 body=116 status=ok
// SIG undefined FUN_144b1f232(void)

void FUN_144b1f232(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar1 = *(longlong *)(lVar4 + 0x20);
  uVar5 = (ulonglong)*(uint *)*param_2;
  uVar3 = (ulonglong)((uint *)*param_2)[1];
  lVar2 = lVar1 + uVar3;
  if (uVar3 == 0xffffffff) {
    lVar2 = 0;
  }
  lVar1 = lVar1 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar1 = 0;
  }
  uVar3 = (ulonglong)*(ushort *)(lVar4 + 0xe);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x100);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_3 + 8);
      }
      *(undefined8 *)(lVar2 + uVar5 * 8) =
           *(undefined8 *)(lVar4 + (ulonglong)*(ushort *)(lVar1 + uVar5 * 4) * 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 144b1f2a6 FUN_144b1f2a6 body=164 status=ok
// SIG undefined FUN_144b1f2a6(void)

undefined8 * FUN_144b1f2a6(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1456c5740(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 144b1f34a FUN_144b1f34a body=82 status=ok
// SIG undefined FUN_144b1f34a(void)

void FUN_144b1f34a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  return;
}



// FUNCTION 144b1f39c FUN_144b1f39c body=48 status=ok
// SIG undefined FUN_144b1f39c(void)

void FUN_144b1f39c(longlong *param_1)

{
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144b1f448 FUN_144b1f448 body=9 status=ok
// SIG undefined FUN_144b1f448(void)

undefined4 FUN_144b1f448(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x198);
}



// FUNCTION 144b1f452 FUN_144b1f452 body=9 status=ok
// SIG undefined FUN_144b1f452(void)

undefined4 FUN_144b1f452(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x19c);
}



// FUNCTION 144b1f45c FUN_144b1f45c body=79 status=ok
// SIG undefined FUN_144b1f45c(void)

undefined8 FUN_144b1f45c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1ec) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1e8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x1ec)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 144b1f4ac FUN_144b1f4ac body=140 status=ok
// SIG undefined FUN_144b1f4ac(void)

int FUN_144b1f4ac(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == -1) {
    do {
      if (((((*(int *)(param_1 + 0x1ec) == 0) ||
            (uVar2 = *(uint *)(param_1 + 0x1e8), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
          || ((plVar4 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
              plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0x1ec))))) ||
         (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
          ((*plVar4 == 0 || (lVar3 = *(longlong *)(*plVar4 + 0xa8), lVar3 == 0)))))) break;
      param_1 = 0;
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        param_1 = lVar3;
      }
    } while (*(int *)(param_1 + 0x7c) == -1);
    iVar1 = *(int *)(param_1 + 0x7c);
  }
  return iVar1;
}



// FUNCTION 144b1f538 FUN_144b1f538 body=240 status=ok
// SIG undefined FUN_144b1f538(void)

longlong FUN_144b1f538(longlong *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  longlong lVar3;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x5e8);
  if (UNRECOVERED_JUMPTABLE != FUN_140972dde) {
                    /* WARNING: Could not recover jumptable at 0x000144b1f612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*UNRECOVERED_JUMPTABLE)();
    return lVar3;
  }
  if (param_1[0x76] != 0) {
    return param_1[0x76];
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x5f8);
  if (UNRECOVERED_JUMPTABLE == FUN_144784df4) {
    if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
      if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0xeb6);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      if ((int)plVar2[2] != *(int *)((longlong)param_1 + 0x75b4)) {
        return 0;
      }
      if ((*(uint *)(plVar2 + 1) & 0x10200000) != 0) {
        return 0;
      }
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      lVar3 = lVar3 + 0x110;
    }
    else {
      lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
    }
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
  }
  else {
    lVar3 = (*UNRECOVERED_JUMPTABLE)();
  }
  if (lVar3 == 0) {
    return 0;
  }
  return *(longlong *)(lVar3 + 0x3b0);
}



// FUNCTION 144b1f628 FUN_144b1f628 body=28 status=ok
// SIG undefined FUN_144b1f628(void)

void FUN_144b1f628(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 144b1f644 FUN_144b1f644 body=194 status=ok
// SIG undefined FUN_144b1f644(void)

longlong *
FUN_144b1f644(longlong *param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
             undefined1 param_5,undefined4 param_6,longlong param_7,longlong param_8)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 0x100;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  param_1[1] = param_7;
  param_1[0xd] = param_8;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x1d) = param_5;
  return param_1;
}



// FUNCTION 144b1f706 FUN_144b1f706 body=27 status=ok
// SIG undefined FUN_144b1f706(void)

void FUN_144b1f706(longlong *param_1,longlong param_2)

{
  *param_1 = param_2 + 0x20;
  param_1[1] = param_2 + 0x38;
  param_1[2] = param_2 + 0x58;
  return;
}



// FUNCTION 144b1f722 FUN_144b1f722 body=4 status=ok
// SIG undefined FUN_144b1f722(void)

undefined8 FUN_144b1f722(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144b1f726 FUN_144b1f726 body=26 status=ok
// SIG undefined FUN_144b1f726(void)

longlong FUN_144b1f726(longlong *param_1,int param_2,int param_3)

{
  return (longlong)param_3 * 0x60 + *(longlong *)(*param_1 + (longlong)param_2 * 0x18);
}



// FUNCTION 144b1f740 FUN_144b1f740 body=244 status=ok
// SIG undefined FUN_144b1f740(void)

longlong FUN_144b1f740(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  undefined1 *local_40;
  longlong **local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_30;
  local_30 = 0;
  local_38 = &local_50;
  local_40 = &LAB_1433d1ca8;
  local_48 = param_2;
  if (*(code **)(*param_1 + 0xb8) == FUN_1457bb9cc) {
    if (0 < (int)param_1[0x47]) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(param_1[0x46] + lVar3 * 8);
        if (*(code **)(*param_1 + 0x120) == (code *)&LAB_1478d5456) {
          lVar2 = param_1[-0x53];
        }
        else {
          lVar2 = (**(code **)(*param_1 + 0x120))(param_1);
          param_2 = local_48;
        }
        if (*(longlong *)(lVar1 + 0x70) == param_2) {
          *local_50 = lVar2 + *(int *)(lVar1 + 0x44);
          break;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[0x47]);
    }
  }
  else {
    (**(code **)(*param_1 + 0xb8))(param_1,&local_40);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_30;
}



// FUNCTION 144b1f840 FUN_144b1f840 body=184 status=ok
// SIG undefined FUN_144b1f840(void)

longlong * FUN_144b1f840(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[5] = param_2[5];
  lVar1 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar9;
  param_1[1] = lVar1;
  param_1[2] = lVar8;
  param_1[6] = param_2[6];
  lVar1 = param_2[7];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xe] = param_2[0xe];
  lVar1 = param_2[8];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar8 = param_2[9];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4c);
  lVar9 = param_2[10];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
  lVar10 = param_2[0xb];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar6 = *(undefined4 *)((longlong)param_2 + 100);
  lVar11 = param_2[0xd];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 100) = uVar6;
  *(int *)(param_1 + 0xd) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar7;
  *(int *)(param_1 + 10) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(int *)(param_1 + 0xb) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
  *(int *)(param_1 + 8) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(int *)(param_1 + 9) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  lVar1 = param_2[0xf];
  param_1[0xf] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(short *)(param_1 + 0x10) = (short)param_2[0x10];
  return param_1;
}



// FUNCTION 144b1f8f8 FUN_144b1f8f8 body=484 status=ok
// SIG undefined FUN_144b1f8f8(void)

void FUN_144b1f8f8(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x18);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_144b1fa76;
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      local_50 = *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x28);
      (*(code *)*param_2)(param_2[1],&local_50);
      uVar6 = ~(uint)uVar14 & uVar6;
      puVar5 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x18);
      }
      iVar3 = *(int *)(param_1 + 0x30);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_144b1fa3f;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          lVar11 = (longlong)iVar8;
        }
        uVar13 = lVar11 + 1U & 0xffffffff;
        iVar4 = iVar3;
      }
      else {
LAB_144b1fa3f:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_144b1fa76:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b1fae4 FUN_144b1fae4 body=12 status=ok
// SIG undefined FUN_144b1fae4(void)

undefined8 FUN_144b1fae4(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa8);
}



// FUNCTION 144b1faf0 FUN_144b1faf0 body=447 status=ok
// SIG undefined FUN_144b1faf0(void)

void FUN_144b1faf0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d0 [56];
  longlong *local_98;
  undefined8 *local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = param_1[0x12];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = param_1[0x11];
    lVar10 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar4 + lVar10);
      if (*(char *)(puVar5 + 0xe) == '\x01') {
        lVar9 = puVar5[0x32];
        if (lVar9 == 0) {
          *(undefined1 *)(puVar5 + 0xe) = 0;
          goto LAB_144b1fc29;
        }
        local_f0 = (longlong)puVar5 + 0x4c;
        local_f8 = puVar5 + 0xc;
        FUN_1478d0524(local_d0,*puVar5,*(undefined4 *)(puVar5 + 0x29),*(undefined4 *)(puVar5 + 0x2d)
                     );
        local_70 = puVar5 + 8;
        local_d8 = 0;
        local_d4 = 0;
        local_e0 = lVar9;
        if (param_1 == (longlong *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = param_1[4];
          if (lVar9 != 0) {
            lVar8 = FUN_144a74fb4();
            lVar9 = *(longlong *)(lVar9 + 0x10);
            iVar3 = *(int *)(lVar8 + 0x38);
            if ((iVar3 <= *(int *)(lVar9 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar3 * 8) == lVar8 + 0x30)) {
              FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar3 >> 8),1),1);
            }
          }
          lVar9 = param_1[0x7c];
          if (lVar9 == 0) {
            lVar9 = (**(code **)(*param_1 + 0x350))(param_1);
            param_1[0x7c] = lVar9;
          }
        }
        FUN_14792e12a(lVar9 + 0x1d0,local_d0,&local_e0);
        plVar7 = local_98;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_98 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        *(undefined1 *)(puVar5 + 0xe) = 0;
      }
      else {
LAB_144b1fc29:
        *(undefined4 *)((longlong)puVar5 + 0x4c) = 0xfffffffe;
        *(undefined4 *)((longlong)puVar5 + 0x54) = 0xfffffffe;
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b1fcbe FUN_144b1fcbe body=136 status=ok
// SIG undefined FUN_144b1fcbe(void)

void FUN_144b1fcbe(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_2 + 8) != 0) && ((*(byte *)(*(longlong *)(param_2 + 8) + 0x24) & 1) != 0)
     ) {
    lVar2 = FUN_147906846(param_2);
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      if (*param_1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*param_1 + 0x130);
      }
      uVar3 = FUN_1463a8172();
      uVar4 = FUN_140108626(uVar4,uVar3);
      iVar1 = FUN_14792d46c(uVar4,param_1,param_2);
      if (iVar1 == 1) {
        FUN_1433dc041(lVar2,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144b1fd46 FUN_144b1fd46 body=209 status=ok
// SIG undefined FUN_144b1fd46(void)

void FUN_144b1fd46(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_2 + 8) != 0) && ((*(byte *)(*(longlong *)(param_2 + 8) + 0x24) & 2) != 0)
     ) {
    lVar1 = FUN_1479069ec(param_2);
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*param_1 + 0x130);
      }
      uVar2 = FUN_1463a8172();
      uVar3 = FUN_140108626(uVar3,uVar2);
      FUN_14792d318(uVar3,&local_30,param_1,param_2);
      if ((local_30 <= 1e-05) && (1e-05 < local_2c)) {
        FUN_1433dc041(lVar1,param_1,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1fe18 FUN_144b1fe18 body=62 status=ok
// SIG undefined FUN_144b1fe18(void)

void FUN_144b1fe18(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 8) != 0) && ((*(byte *)(*(longlong *)(param_2 + 8) + 0x24) & 4) != 0)
     ) {
    uVar1 = FUN_147906b92(param_2);
    FUN_1433dc041(uVar1,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 144b1fe86 FUN_144b1fe86 body=207 status=ok
// SIG undefined FUN_144b1fe86(void)

void FUN_144b1fe86(longlong param_1,longlong *param_2,float param_3,undefined4 param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x434)) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0x438;
    if (*(longlong *)(param_1 + 0x440) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x440);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x448) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar5 * 0x14);
        if (*plVar1 == lVar3) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return;
          }
          lVar6 = (longlong)(int)plVar1[1];
          lVar3 = *(longlong *)(param_1 + 0x450 + (longlong)*(int *)(param_1 + 0x330) * 0x10);
          *(float *)(lVar3 + lVar6 * 0xc) = param_3;
          *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) = param_4;
          pbVar2 = (byte *)(lVar3 + 8 + lVar6 * 0xc);
          *pbVar2 = *pbVar2 | 1e-05 < param_3;
          return;
        }
        iVar5 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 144b1ff56 FUN_144b1ff56 body=1 status=ok
// SIG undefined FUN_144b1ff56(void)

void FUN_144b1ff56(void)

{
  return;
}



// FUNCTION 144b1ff5a FUN_144b1ff5a body=73 status=ok
// SIG undefined FUN_144b1ff5a(void)

void FUN_144b1ff5a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x880);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x878);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xd0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b1ffa4 FUN_144b1ffa4 body=137 status=ok
// SIG undefined FUN_144b1ffa4(void)

float FUN_144b1ffa4(longlong param_1,uint param_2)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x19);
  if (bVar1 == param_2) {
LAB_144b1ffac:
    return *(float *)(param_1 + 0x24);
  }
  if (bVar1 == 2) {
    if (param_2 == 1) {
      return *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20);
    }
    if (param_2 == 0) {
      return *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1c);
    }
  }
  else if (bVar1 == 1) {
    if (param_2 == 2) {
      fVar2 = *(float *)(param_1 + 0x24);
LAB_144b20027:
      return fVar2 / *(float *)(param_1 + 0x20);
    }
    if (param_2 == 0) {
      return *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x24);
    }
  }
  else {
    if (bVar1 != 0) goto LAB_144b1ffac;
    if (param_2 == 2) {
      fVar2 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c);
      goto LAB_144b20027;
    }
    if (param_2 == 1) {
      return *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c);
    }
  }
  return -1.0;
}



// FUNCTION 144b2002e FUN_144b2002e body=23 status=ok
// SIG undefined FUN_144b2002e(void)

undefined8 * FUN_144b2002e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 144b20046 FUN_144b20046 body=393 status=ok
// SIG undefined FUN_144b20046(void)

longlong FUN_144b20046(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1[2] + (longlong)*(int *)(param_2 + 8) * 4);
  uVar5 = uVar1 & 0x7fffffff;
  uVar6 = (ulonglong)uVar5;
  if ((int)uVar1 < 0) {
    lVar3 = *param_1;
    if (param_4 == 0) {
      if (lVar3 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      iVar2 = *(int *)(*(longlong *)(param_3 + 8) + 0x20);
      if (*(code **)(*plVar4 + 0x20) == (code *)&LAB_14488c8ee) {
        plVar4 = plVar4 + 0x12;
      }
      else {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        lVar3 = *param_1;
      }
      param_4 = param_3 - *(int *)(*(longlong *)(*plVar4 + (longlong)iVar2 * 8) + 0x44);
    }
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)param_1[1];
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x108);
    if (UNRECOVERED_JUMPTABLE_00 != FUN_144a4518c) {
                    /* WARNING: Could not recover jumptable at 0x000144b201bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (*UNRECOVERED_JUMPTABLE_00)(plVar4,uVar6,param_4);
      return lVar3;
    }
    lVar3 = *(longlong *)(plVar4[0x42] + uVar6 * 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x118);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)&LAB_1478d543c) {
      if (plVar4[0x4a] == 0) {
        param_4 = 0;
      }
      else {
        param_4 = param_4 + *(int *)(plVar4[0x4a] + 0x44);
      }
    }
    else {
      param_4 = (*UNRECOVERED_JUMPTABLE_00)(plVar4,param_4);
    }
    param_4 = *(int *)(lVar3 + 0x44) + param_4;
  }
  else {
    if (*param_1 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)param_1[1];
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x100);
    if (UNRECOVERED_JUMPTABLE_00 != FUN_144a45148) {
                    /* WARNING: Could not recover jumptable at 0x000144b20195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (*UNRECOVERED_JUMPTABLE_00)(plVar4,uVar6);
      return lVar3;
    }
    lVar3 = *(longlong *)(plVar4[0x44] + (ulonglong)uVar5 * 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar4 + 0x120);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)&LAB_1478d5456) {
      param_4 = plVar4[-0x53];
    }
    else {
      param_4 = (*UNRECOVERED_JUMPTABLE_00)();
    }
    param_4 = *(int *)(lVar3 + 0x44) + param_4;
  }
  return param_4;
}



// FUNCTION 144b201d0 FUN_144b201d0 body=272 status=ok
// SIG undefined FUN_144b201d0(void)

longlong FUN_144b201d0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1[2] + (longlong)*(int *)(param_2 + 8) * 4);
  if ((int)uVar1 < 0) {
    lVar4 = *param_1;
    if (param_4 == 0) {
      if (lVar4 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[1];
      }
      iVar2 = *(int *)(*(longlong *)(param_3 + 8) + 0x20);
      if (*(code **)(*plVar3 + 0x20) == (code *)&LAB_14488c8ee) {
        plVar3 = plVar3 + 0x12;
      }
      else {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
        lVar4 = *param_1;
      }
      param_4 = param_3 - *(int *)(*(longlong *)(*plVar3 + (longlong)iVar2 * 8) + 0x44);
    }
    uVar5 = (ulonglong)(uVar1 & 0x7fffffff);
    if (lVar4 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)param_1[1];
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x108);
    if (UNRECOVERED_JUMPTABLE != FUN_144a4518c) {
                    /* WARNING: Could not recover jumptable at 0x000144b202ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (*UNRECOVERED_JUMPTABLE)(plVar3,uVar5,param_4);
      return lVar4;
    }
    lVar4 = *(longlong *)(plVar3[0x42] + uVar5 * 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x118);
    if (UNRECOVERED_JUMPTABLE == (code *)&LAB_1478d543c) {
      if (plVar3[0x4a] == 0) {
        param_4 = 0;
      }
      else {
        param_4 = param_4 + *(int *)(plVar3[0x4a] + 0x44);
      }
    }
    else {
      param_4 = (*UNRECOVERED_JUMPTABLE)(plVar3,param_4);
    }
    param_4 = *(int *)(lVar4 + 0x44) + param_4;
  }
  else {
    param_4 = 0;
  }
  return param_4;
}



// FUNCTION 144b202e4 FUN_144b202e4 body=181 status=ok
// SIG undefined FUN_144b202e4(void)

void FUN_144b202e4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined **local_70;
  undefined1 local_59;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x78) == '\x01') && (3 < *(int *)(param_1 + 0x40))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x38), 0 < iVar1)) {
    lVar2 = *(longlong *)(param_2 + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    iVar4 = 0;
    do {
      local_58 = &DAT_147cc0506;
      local_78 = 3;
      local_70 = &local_58;
      local_50 = &local_59;
      FUN_140d98c26(uVar3,lVar2,param_1 + 8,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2039a FUN_144b2039a body=181 status=ok
// SIG undefined FUN_144b2039a(void)

void FUN_144b2039a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined **local_70;
  undefined1 local_59;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x78) == '\x01') && (4 < *(int *)(param_1 + 0x40))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x48), 0 < iVar1)) {
    lVar2 = *(longlong *)(param_2 + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    iVar4 = 0;
    do {
      local_58 = &DAT_147cc0506;
      local_78 = 4;
      local_70 = &local_58;
      local_50 = &local_59;
      FUN_140d98c26(uVar3,lVar2,param_1 + 8,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b20450 FUN_144b20450 body=188 status=ok
// SIG undefined FUN_144b20450(void)

void FUN_144b20450(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined **local_70;
  undefined1 local_59;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x78) == '\x01') && (1 < *(int *)(param_1 + 0x40))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x18), 0 < iVar1)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x130);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    iVar4 = 0;
    do {
      local_58 = &DAT_147cc0506;
      local_78 = 1;
      local_70 = &local_58;
      local_50 = &local_59;
      FUN_140d98c26(uVar3,lVar2,param_1 + 8,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2050e FUN_144b2050e body=188 status=ok
// SIG undefined FUN_144b2050e(void)

void FUN_144b2050e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined **local_70;
  undefined1 local_59;
  undefined *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(char *)(param_1 + 0x78) == '\x01') && (2 < *(int *)(param_1 + 0x40))) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x28), 0 < iVar1)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x130);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    iVar4 = 0;
    do {
      local_58 = &DAT_147cc0506;
      local_78 = 2;
      local_70 = &local_58;
      local_50 = &local_59;
      FUN_140d98c26(uVar3,lVar2,param_1 + 8,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b205cc FUN_144b205cc body=437 status=ok
// SIG undefined FUN_144b205cc(void)

undefined8 *
FUN_144b205cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a7cae90;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[2] = *param_2;
  param_1[3] = 0;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  lVar6 = DAT_14caccb08;
  lVar9 = param_2[1];
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xa50) != *(int *)(lVar9 + 0xa74))) {
    uVar3 = (uint)((ulonglong)DAT_14caccb08 >> 0x10);
    uVar7 = (uint)DAT_14caccb08 & 0xffff;
    lVar4 = lVar9 + 0xa78;
    if (*(longlong *)(lVar9 + 0xa88) != 0) {
      lVar4 = *(longlong *)(lVar9 + 0xa88);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar9 + 0xa90) - 1U &
                             (int)((ulonglong)DAT_14caccb08 >> 0x20) +
                             ((uint)DAT_14caccb08 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar4 = lVar9 + 0x148;
      if (*(longlong *)(lVar9 + 0xa48) != 0) {
        lVar4 = *(longlong *)(lVar9 + 0xa48);
      }
      do {
        lVar9 = lVar4 + (longlong)iVar5 * 0x120;
        if (*(longlong *)(lVar4 + (longlong)iVar5 * 0x120) == DAT_14caccb08) {
          if (((lVar9 != 0) && (lVar9 + 8 != 0)) && (*(int *)(lVar9 + 0x110) != 0)) {
            lVar4 = lVar9 + 8;
            if (*(longlong *)(lVar9 + 0x108) != 0) {
              lVar4 = *(longlong *)(lVar9 + 0x108);
            }
            lVar9 = (longlong)(*(int *)(lVar9 + 0x110) + -1) * 0x20;
            plVar1 = *(longlong **)(lVar4 + lVar9);
            pcVar2 = *(code **)(*plVar1 + 8);
            if (pcVar2 == (code *)&LAB_1447aa980) {
              plVar8 = &DAT_14caccb08;
            }
            else if (pcVar2 == (code *)&LAB_1400954be) {
              plVar8 = &DAT_14cacb0b8;
            }
            else {
              plVar8 = &local_38;
              (*pcVar2)(plVar1,plVar8);
            }
            if ((*plVar8 == lVar6) && (lVar9 = *(longlong *)(lVar4 + lVar9), lVar9 != 0)) {
              lVar6 = *(longlong *)(lVar9 + 0x18);
              if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar9 + 0x10);
              }
              param_1[3] = lVar6;
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar9 + 0x118);
      } while (iVar5 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144b20792 FUN_144b20792 body=8 status=ok
// SIG undefined FUN_144b20792(void)

undefined8 FUN_144b20792(void)

{
  return DAT_14cacd528;
}



// FUNCTION 144b2079a FUN_144b2079a body=186 status=ok
// SIG undefined FUN_144b2079a(void)

void FUN_144b2079a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x290) != *(int *)(param_1 + 700)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x2c0;
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x2c8);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x2d0) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x288) + (longlong)iVar7 * 0x18);
        if (*plVar3 == lVar1) goto LAB_144b20834;
        iVar7 = (int)plVar3[2];
      } while (iVar7 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_144b20834:
  plVar4 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  plVar3 = &DAT_14cacd708;
  if (plVar4 != (longlong *)0x0) {
    plVar3 = plVar4;
  }
  *param_2 = *plVar3;
  return;
}



// FUNCTION 144b20854 FUN_144b20854 body=28 status=ok
// SIG undefined FUN_144b20854(void)

float FUN_144b20854(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 * *param_1 + param_1[1];
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 144b20870 FUN_144b20870 body=170 status=ok
// SIG undefined FUN_144b20870(void)

undefined4 FUN_144b20870(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) && (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74))) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x80);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar4 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          return (int)plVar1[1];
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 144b20932 FUN_144b20932 body=195 status=ok
// SIG undefined FUN_144b20932(void)

void FUN_144b20932(void *param_1,uint param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((param_2 != 0) && (uVar4 = 4, 4 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar4 = uVar1 >> 4 & 0xffffffff;
    }
  }
  uVar3 = (uint)uVar4;
  if (uVar3 != *(uint *)((longlong)param_1 + 0x4c)) {
    *(uint *)((longlong)param_1 + 0x4c) = uVar3;
    iVar2 = *(int *)((longlong)param_1 + 0x48);
    _Src = *(void **)((longlong)param_1 + 0x40);
    if (uVar3 < 5) {
      if (_Src == (void *)0x0) {
        return;
      }
      memmove(param_1,_Src,(longlong)iVar2 << 4);
      iVar2 = 0;
      uVar4 = 0;
    }
    else if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)iVar2 << 4);
      return;
    }
    FUN_1446efa72((longlong)param_1 + 0x40,iVar2,uVar4,0x10);
    return;
  }
  return;
}



// FUNCTION 144b20a00 FUN_144b20a00 body=215 status=ok
// SIG undefined FUN_144b20a00(void)

double * FUN_144b20a00(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  
  param_2[2] = 1.79769313486232e+308;
  *param_2 = 1.79769313486232e+308;
  param_2[1] = 1.79769313486232e+308;
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x578))(plVar3,param_2);
    if (*param_2 != 1.79769313486232e+308) {
      return param_2;
    }
    if (NAN(*param_2)) {
      return param_2;
    }
    if (param_2[1] != 1.79769313486232e+308) {
      return param_2;
    }
    if (NAN(param_2[1])) {
      return param_2;
    }
    if (param_2[2] != 1.79769313486232e+308) {
      return param_2;
    }
    if (NAN(param_2[2])) {
      return param_2;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + -0x1c8);
    if (lVar5 == 0) {
      pdVar7 = (double *)&DAT_14c8464e0;
      dVar8 = DAT_14c8464f0;
    }
    else {
      pdVar7 = (double *)(lVar5 + 0x260);
      dVar8 = *(double *)(lVar5 + 0x270);
    }
    dVar2 = *(double *)(lVar4 + 0x290);
    dVar6 = pdVar7[1];
    fVar1 = *(float *)(lVar4 + 0x640);
    *param_2 = *pdVar7;
    param_2[1] = dVar6;
    param_2[2] = dVar8 - (double)((float)dVar2 * fVar1);
  }
  return param_2;
}



// FUNCTION 144b20ad8 FUN_144b20ad8 body=154 status=ok
// SIG undefined FUN_144b20ad8(void)

void FUN_144b20ad8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar3 = *param_2;
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      if (((plVar4 != (longlong *)0x0) &&
          (uVar6 = (**(code **)(*plVar4 + 0x570))(plVar4), uVar6 < 6)) &&
         ((0x2aU >> (uVar6 & 0x1f) & 1) != 0)) {
        uVar1 = *(undefined4 *)((longlong)plVar4 + 0xc);
        iVar2 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
          FUN_140694806(param_1 + 0x30,iVar2);
        }
        lVar7 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar7 = param_1 + 0x30;
        }
        *(undefined4 *)(lVar7 + (longlong)iVar2 * 4) = uVar1;
        *(undefined1 *)(param_1 + 0x29) = 0;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
  }
  return;
}



// FUNCTION 144b20b72 FUN_144b20b72 body=213 status=ok
// SIG undefined FUN_144b20b72(void)

longlong FUN_144b20b72(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined1 *)(param_1 + 0x29) = 1;
    if (1 < *(int *)(param_1 + 0x58)) {
      piVar1 = (int *)(param_1 + 0x30);
      piVar5 = *(int **)(param_1 + 0x50);
      if (*(int **)(param_1 + 0x50) == (int *)0x0) {
        piVar5 = piVar1;
      }
      FUN_1449e0cb6(piVar5,*(int *)(param_1 + 0x58),param_3,&local_19);
      piVar5 = *(int **)(param_1 + 0x50);
      piVar4 = piVar5;
      if (piVar5 == (int *)0x0) {
        piVar4 = piVar1;
      }
      iVar2 = *(int *)(param_1 + 0x58);
      if ((longlong)iVar2 != 1) {
        lVar7 = 4;
        piVar6 = piVar4;
        iVar8 = *piVar4;
        do {
          iVar3 = *(int *)((longlong)piVar4 + lVar7);
          if (iVar8 != iVar3) {
            piVar6[1] = iVar3;
            piVar6 = piVar6 + 1;
          }
          lVar7 = lVar7 + 4;
          iVar8 = iVar3;
        } while ((longlong)iVar2 * 4 != lVar7);
        piVar5 = *(int **)(param_1 + 0x50);
        piVar4 = piVar6;
      }
      if (piVar5 == (int *)0x0) {
        piVar5 = piVar1;
      }
      FUN_1479ab1f6(piVar1,(int)((ulonglong)((longlong)piVar4 - (longlong)piVar5) >> 2) + 1,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 + 0x30;
}



// FUNCTION 144b20c5c FUN_144b20c5c body=88 status=ok
// SIG undefined FUN_144b20c5c(void)

void FUN_144b20c5c(uint *param_1,byte param_2,byte param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0;
  uVar2 = 0;
  lVar3 = 0;
  do {
    if (*(char *)(param_4 + lVar3) == '\x02') {
      uVar1 = uVar1 | 1 << ((uint)lVar3 & 0x1f);
      *param_1 = uVar1;
    }
    else if (*(char *)(param_4 + lVar3) == '\x01') {
      uVar2 = uVar2 | 1 << ((uint)lVar3 & 0x1f);
      param_1[1] = uVar2;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  param_1[2] = (uint)param_2 << 0x15 | (uint)param_3 << 0x1a;
  return;
}



// FUNCTION 144b20cb4 FUN_144b20cb4 body=495 status=ok
// SIG undefined FUN_144b20cb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b20cb4(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 0x101;
  param_1[0xb] = 0;
  param_1[0xc] = 0x800000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x400000000;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)((longlong)param_1 + 0x19) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x1000000;
  *(undefined1 *)(param_1 + 4) = 1;
  uVar10 = _DAT_14cad0ed8;
  param_1[0x11] = _DAT_14cad0ed0;
  param_1[0x12] = uVar10;
  uVar10 = uRam000000014cad0ee8;
  param_1[0x13] = _DAT_14cad0ee0;
  param_1[0x14] = uVar10;
  lVar11 = 0x88;
  do {
    pcVar1 = (char *)((longlong)param_1 + lVar11);
    cVar2 = *pcVar1;
    cVar3 = pcVar1[1];
    cVar4 = pcVar1[2];
    cVar5 = pcVar1[3];
    cVar6 = pcVar1[4];
    cVar7 = pcVar1[5];
    cVar8 = pcVar1[6];
    cVar9 = pcVar1[7];
    if ((bool)(~(cVar2 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11) = 2;
    }
    if ((bool)(~(cVar3 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 1) = 2;
    }
    if ((bool)(~(cVar4 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 2) = 2;
    }
    if ((bool)(~(cVar5 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 3) = 2;
    }
    if ((bool)(~(cVar6 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 4) = 2;
    }
    if ((bool)(~(cVar7 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 5) = 2;
    }
    if ((bool)(~(cVar8 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 6) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 7) = 2;
    }
    if ((bool)(~(cVar2 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 8) = 2;
    }
    if ((bool)(~(cVar3 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 9) = 2;
    }
    if ((bool)(~(cVar4 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 10) = 2;
    }
    if ((bool)(~(cVar5 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xb) = 2;
    }
    if ((bool)(~(cVar6 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xc) = 2;
    }
    if ((bool)(~(cVar7 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xd) = 2;
    }
    if ((bool)(~(cVar8 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xe) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)param_1 + lVar11 + 0xf) = 2;
    }
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0xa8);
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  return;
}



// FUNCTION 144b20ea4 FUN_144b20ea4 body=23 status=ok
// SIG undefined FUN_144b20ea4(void)

undefined8 FUN_144b20ea4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x218);
  }
  return 0;
}



// FUNCTION 144b20ebc FUN_144b20ebc body=8 status=ok
// SIG undefined FUN_144b20ebc(void)

void FUN_144b20ebc(longlong param_1)

{
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 144b20ec4 FUN_144b20ec4 body=8 status=ok
// SIG undefined FUN_144b20ec4(void)

void FUN_144b20ec4(longlong param_1)

{
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfb;
  return;
}



// FUNCTION 144b20ed0 FUN_144b20ed0 body=29 status=ok
// SIG undefined FUN_144b20ed0(void)

undefined8 FUN_144b20ed0(longlong param_1)

{
  if (param_1 == 0) {
    DAT_14cad4be8 = 0;
  }
  else {
    DAT_14cad4be8 = *(byte *)(param_1 + 0x9c) >> 6 & 1;
  }
  return 0;
}



// FUNCTION 144b20eee FUN_144b20eee body=810 status=ok
// SIG undefined FUN_144b20eee(void)

undefined1 (*) [16] FUN_144b20eee(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
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
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar1 = (double)*(float *)(param_1 + 0x640);
  dVar2 = (double)*(float *)(param_1 + 0x644);
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar19 = param_3[2];
  dVar15 = param_3[8];
  dVar11 = param_3[9];
  dVar3 = param_3[10];
  dVar21 = dVar9 + dVar9;
  dVar5 = dVar19 + dVar19;
  dVar14 = dVar8 * (dVar8 + dVar8);
  dVar12 = (1.0 - (dVar19 * dVar5 + dVar9 * dVar21)) * dVar15;
  dVar13 = (1.0 - (dVar19 * dVar5 + dVar14)) * dVar11;
  dVar10 = (1.0 - (dVar14 + dVar9 * dVar21)) * dVar3;
  dVar19 = param_3[3];
  dVar14 = dVar5 * dVar19;
  dVar6 = (dVar8 + dVar8) * param_3[3];
  dVar19 = dVar21 * dVar19;
  dVar16 = (dVar21 * dVar8 + dVar14) * dVar15;
  dVar17 = (dVar5 * dVar9 + dVar6) * dVar11;
  dVar7 = (dVar19 + *param_3 * dVar5) * dVar3;
  dVar15 = (*param_3 * dVar5 - dVar19) * dVar15;
  dVar11 = (dVar21 * dVar8 - dVar14) * dVar11;
  dVar3 = (dVar5 * dVar9 - dVar6) * dVar3;
  dVar14 = DAT_14c8464e0 * dVar12;
  dVar21 = DAT_14c8464e8 * dVar11;
  dVar6 = DAT_14c8464f0 * dVar7;
  dVar20 = ABS(dVar1 * dVar7) + ABS(dVar2 * dVar11) + ABS(dVar2 * dVar12);
  dVar22 = ABS(dVar1 * dVar3) + ABS(dVar2 * dVar13) + ABS(dVar2 * dVar16);
  dVar18 = ABS(dVar10 * dVar1) + ABS(dVar17 * dVar2) + ABS(dVar15 * dVar2);
  dVar8 = DAT_14c8464e0 * dVar15;
  dVar9 = DAT_14c8464e8 * dVar17;
  dVar5 = DAT_14c8464f0 * dVar10;
  dVar19 = dVar7 * dVar7 + dVar11 * dVar11 + dVar12 * dVar12;
  dVar2 = dVar3 * dVar3 + dVar13 * dVar13 + dVar16 * dVar16;
  dVar11 = dVar10 * dVar10 + dVar17 * dVar17 + dVar15 * dVar15;
  if (dVar19 <= dVar2) {
    dVar19 = dVar2;
  }
  if (dVar19 <= dVar11) {
    dVar19 = dVar11;
  }
  dVar11 = param_3[4];
  dVar3 = DAT_14c8464f0 * dVar3 + DAT_14c8464e8 * dVar13 + DAT_14c8464e0 * dVar16 + param_3[5];
  dVar2 = param_3[6];
  if (dVar19 < 0.0) {
    dVar19 = sqrt(dVar19);
  }
  else {
    dVar19 = SQRT(dVar19);
  }
  dVar15 = SQRT(dVar22 * dVar22 + dVar18 * dVar18 + dVar20 * dVar20);
  dVar7 = dVar19 * dVar1;
  if (dVar15 <= dVar19 * dVar1) {
    dVar7 = dVar15;
  }
  auVar4._8_4_ = SUB84(dVar3,0);
  auVar4._0_8_ = dVar6 + dVar21 + dVar14 + dVar11;
  auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar4;
  *(double *)param_2[1] = dVar5 + dVar9 + dVar8 + dVar2;
  *(double *)(param_2[1] + 8) = dVar20;
  *(double *)param_2[2] = dVar22;
  *(double *)(param_2[2] + 8) = dVar18;
  *(double *)param_2[3] = dVar7;
  return param_2;
}



// FUNCTION 144b21218 FUN_144b21218 body=25 status=ok
// SIG undefined FUN_144b21218(void)

void FUN_144b21218(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = *(undefined8 *)(param_1 + 0x398);
  uVar1 = *(undefined8 *)(param_1 + 0x390);
  *param_2 = *(undefined8 *)(param_1 + 0x388);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 144b21258 FUN_144b21258 body=93 status=ok
// SIG undefined FUN_144b21258(void)

void FUN_144b21258(longlong *param_1)

{
  char cVar1;
  
  if (*(char *)(param_1[0x3e] + 0x178) != '\x01') {
    cVar1 = (**(code **)(param_1[0x2f] + 0xd0))(param_1 + 0x2f);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x7f8))(param_1);
      if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000144b212b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x7f0))(param_1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144b21312 FUN_144b21312 body=253 status=ok
// SIG undefined FUN_144b21312(void)

ulonglong FUN_144b21312(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  ulonglong uVar10;
  
  if (*(longlong *)(param_1 + 0x308) == 0) {
    uVar10 = 0x7f7fffff;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      plVar5 = (longlong *)(lVar3 + 0x458);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    lVar3 = *(longlong *)(param_1 + 0x308);
    uVar10 = 0xbf800000;
    if (lVar3 != 0) {
      lVar2 = *plVar5;
      uVar4 = (uint)lVar3;
      if ((int)(uVar4 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar7 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar7 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0
           ) {
          lVar7 = *(longlong *)(lVar2 + 8);
          lVar8 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
          lVar6 = lVar7 + lVar8;
          if (((lVar6 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar8) == lVar3)) &&
             (cVar1 = *(char *)(lVar7 + 1 + lVar8), cVar1 != '\x04')) {
            if (cVar1 == '\x01') {
              dVar9 = *(double *)(lVar6 + 8) - *(double *)(lVar2 + 0x140);
              uVar10 = CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
            }
            else if (cVar1 == '\x03') {
              uVar10 = 0;
            }
            else {
              uVar10 = (ulonglong)(uint)(float)*(double *)(lVar6 + 8);
            }
          }
        }
      }
    }
  }
  return uVar10;
}



// FUNCTION 144b21410 FUN_144b21410 body=4 status=ok
// SIG undefined FUN_144b21410(void)

undefined1 FUN_144b21410(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



// FUNCTION 144b21414 FUN_144b21414 body=500 status=ok
// SIG undefined FUN_144b21414(void)

void FUN_144b21414(double *param_1,longlong param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  dVar3 = *(double *)(param_2 + 0xb40);
  dVar4 = param_1[2];
  dVar5 = *(double *)(param_2 + 0xb38);
  dVar6 = param_1[1];
  *param_4 = (float)(*(double *)(param_2 + 0xb30) + *param_1);
  param_4[1] = (float)(dVar5 + dVar6);
  param_4[2] = (float)(dVar3 + dVar4);
  param_4[3] = *(float *)(param_1 + 3);
  fVar9 = *(float *)((longlong)param_1 + 0x1c);
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)((longlong)param_1 + 0x24);
  fVar8 = 1.0;
  if (0.0 < param_3) {
    fVar8 = *(float *)((longlong)param_1 + 0x8c);
    fVar7 = logf(param_3);
    fVar8 = expf(fVar7 * -fVar8);
  }
  param_4[4] = fVar9 * fVar8;
  param_4[5] = fVar1 * fVar8;
  param_4[6] = fVar2 * fVar8;
  param_4[7] = *(float *)((longlong)param_1 + 0x2c);
  param_4[10] = *(float *)(param_1 + 7);
  *(double *)(param_4 + 8) = param_1[6];
  fVar9 = *(float *)((longlong)param_1 + 0x3c);
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_4[0xb] = fVar9;
  fVar9 = *(float *)(param_1 + 8);
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  param_4[0xc] = fVar9;
  param_4[0x12] = *(float *)((longlong)param_1 + 0x4c);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)((longlong)param_1 + 0x44);
  param_4[0x13] = *(float *)(param_1 + 10);
  *(undefined8 *)(param_4 + 0x24) = *(undefined8 *)((longlong)param_1 + 0x54);
  param_4[0x26] = *(float *)((longlong)param_1 + 0x5c);
  param_4[0x27] = *(float *)(param_1 + 0xc);
  param_4[0x28] = *(float *)((longlong)param_1 + 100);
  param_4[0x29] = *(float *)(param_1 + 0xd);
  *(undefined8 *)(param_4 + 0x2a) = *(undefined8 *)((longlong)param_1 + 0x6c);
  *(undefined8 *)(param_4 + 0x2c) = *(undefined8 *)((longlong)param_1 + 0x74);
  param_4[0x2e] = *(float *)((longlong)param_1 + 0x7c);
  param_4[0x2f] = *(float *)(param_1 + 0x10);
  param_4[0x30] = *(float *)((longlong)param_1 + 0x84);
  param_4[0x31] = *(float *)(param_1 + 0x11);
  return;
}



// FUNCTION 144b21608 FUN_144b21608 body=68 status=ok
// SIG undefined FUN_144b21608(void)

float FUN_144b21608(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x3d4) < 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 != 0 ||
      (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)))) {
    fVar2 = (float)*(double *)(lVar1 + 0x6d0);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x3c4);
  }
  return fVar2;
}



// FUNCTION 144b217cc FUN_144b217cc body=8 status=ok
// SIG undefined FUN_144b217cc(void)

undefined8 FUN_144b217cc(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x5b8);
}



// FUNCTION 144b217d4 FUN_144b217d4 body=219 status=ok
// SIG undefined FUN_144b217d4(void)

bool FUN_144b217d4(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (*(char *)((longlong)param_1 + 0x9e) < '\0') {
    if (*(code **)(param_1[0x55] + 0x58) == (code *)&LAB_1457ba96c) {
      uVar1 = (uint)*(byte *)((longlong)param_1 + 0x2e9);
    }
    else {
      uVar1 = (**(code **)(param_1[0x55] + 0x58))(param_1 + 0x55);
    }
    if (1 < (int)uVar1) {
      return true;
    }
    lVar2 = *param_1;
    if (*(code **)(lVar2 + 0x558) == (code *)&LAB_1448a8146) {
      plVar3 = param_1 + 0x8f;
    }
    else {
      plVar3 = (longlong *)(**(code **)(lVar2 + 0x558))(param_1);
      lVar2 = *param_1;
    }
    if (*(code **)(lVar2 + 0x570) == (code *)&LAB_1448a814e) {
      if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0)) goto LAB_144b21885;
      uVar1 = (uint)*(byte *)((longlong)param_1 + 0x427);
    }
    else {
      uVar1 = (**(code **)(lVar2 + 0x570))(param_1);
    }
    bVar4 = false;
    if (((uVar1 < 6) && ((0x2aU >> (uVar1 & 0x1f) & 1) != 0)) &&
       (bVar4 = true, *(char *)((longlong)plVar3 + 2) != '\x02')) {
      bVar4 = *(char *)((longlong)plVar3 + 6) == '\x02';
    }
  }
  else {
LAB_144b21885:
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 144b218cc FUN_144b218cc body=740 status=ok
// SIG undefined FUN_144b218cc(void)

void FUN_144b218cc(longlong *param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  param_2[6] = 0;
  param_2[0xb] = 0;
  lVar7 = *param_1;
  if (*(code **)(lVar7 + 0x138) == FUN_143484290) {
    if ((*(byte *)((longlong)param_1 + 0x1d3) & 8) == 0) {
      local_78 = param_1[8];
      uStack_70 = param_1[9];
    }
    else {
      if ((char)param_1[0x58] == '\x01') {
        (**(code **)(lVar7 + 0x120))(param_1,&local_58);
        local_78 = CONCAT44(fStack_54,local_58);
        fVar8 = fStack_50;
      }
      else {
        if (*(code **)(lVar7 + 0x120) == (code *)&LAB_144b21bec) {
          local_58 = *(float *)(param_1 + 8);
          fStack_54 = *(float *)((longlong)param_1 + 0x44);
          fStack_50 = *(float *)(param_1 + 9);
          uStack_4c = *(undefined4 *)((longlong)param_1 + 0x4c);
        }
        else {
          (**(code **)(lVar7 + 0x120))(param_1,&local_58);
          lVar7 = *param_1;
        }
        if (*(code **)(lVar7 + 0x128) == (code *)&LAB_144b21bf8) {
          local_68 = *(undefined8 *)((longlong)param_1 + 0x2d4);
          uStack_60 = *(undefined8 *)((longlong)param_1 + 0x2dc);
        }
        else {
          (**(code **)(lVar7 + 0x128))(param_1,&local_68);
        }
        local_78 = CONCAT44(fStack_54 * local_68._4_4_,local_58 * (float)local_68);
        fVar8 = fStack_50 * (float)uStack_60;
      }
      uStack_70 = CONCAT44(0x3f800000,fVar8);
    }
  }
  else {
    (**(code **)(lVar7 + 0x138))(param_1,&local_78);
  }
  *(longlong *)(param_2 + 7) = local_78;
  param_2[9] = (undefined4)uStack_70;
  param_2[10] = uStack_70._4_4_;
  dVar1 = (double)param_1[0x12];
  dVar2 = (double)param_1[0xe];
  param_2[0xc] = -(float)(double)param_1[10];
  param_2[0xd] = -(float)dVar2;
  param_2[0xe] = -(float)dVar1;
  dVar1 = (double)param_1[0x12];
  dVar2 = (double)param_1[0xe];
  param_2[0x11] = -(float)(double)param_1[10];
  param_2[0x12] = -(float)dVar2;
  param_2[0x13] = -(float)dVar1;
  *(undefined8 *)(param_2 + 0x15) = DAT_14c84635c;
  fVar8 = *(float *)((longlong)param_1 + 0x174);
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_2[0xf] = fVar8;
  fVar8 = *(float *)(param_1 + 0x2f);
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_2[0x10] = fVar8;
  fVar8 = sinf(*(float *)(param_1 + 0x60) * 0.017453292 * 0.5);
  param_2[0x14] = fVar8;
  fVar8 = sinf(*(float *)((longlong)param_1 + 0x304) * 0.017453292 * 0.5);
  param_2[0x17] = fVar8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_2[0x1a] = 0xc0000000;
  uVar3 = DAT_14c84635c;
  *(undefined8 *)(param_2 + 0x1b) = DAT_14c84635c;
  *(undefined8 *)(param_2 + 0x1d) = uVar3;
  *(undefined8 *)(param_2 + 0x1f) = 0xbf80000042000000;
  param_2[0x21] = (uint)*(byte *)((longlong)param_1 + 0x1d6);
  param_2[0x22] = *(byte *)((longlong)param_1 + 0x1d3) >> 2 & 1;
  param_2[0x23] = 0;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b21c06 FUN_144b21c06 body=230 status=ok
// SIG undefined FUN_144b21c06(void)

float * FUN_144b21c06(longlong *param_1,float *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x120) == (code *)&LAB_144b21bec) {
    local_28 = *(float *)(param_1 + 8);
    fStack_24 = *(float *)((longlong)param_1 + 0x44);
    fStack_20 = *(float *)(param_1 + 9);
    fStack_1c = *(float *)((longlong)param_1 + 0x4c);
  }
  else {
    (**(code **)(lVar1 + 0x120))(param_1,&local_28);
    lVar1 = *param_1;
  }
  if (*(code **)(lVar1 + 0x128) == (code *)&LAB_144b21bf8) {
    local_38 = *(undefined8 *)((longlong)param_1 + 0x2d4);
    uStack_30 = *(undefined8 *)((longlong)param_1 + 0x2dc);
  }
  else {
    (**(code **)(lVar1 + 0x128))(param_1,&local_38);
  }
  *param_2 = local_28 * (float)local_38;
  param_2[1] = fStack_24 * local_38._4_4_;
  param_2[2] = fStack_20 * (float)uStack_30;
  param_2[3] = fStack_1c * uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b21d44 FUN_144b21d44 body=203 status=ok
// SIG undefined FUN_144b21d44(void)

void FUN_144b21d44(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar6 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,6);
  }
  else {
    uVar7 = (uint)uVar1;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar4 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar4 = DAT_14c998080;
      }
      if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        puVar5 = *(uint **)(lVar3 + 0x18);
        if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
          puVar5 = (uint *)(lVar3 + 8);
        }
        *puVar5 = *puVar5 | 0x40;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1c0) = param_2[2];
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0x1b0) = *param_2;
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  return;
}



// FUNCTION 144b21e20 FUN_144b21e20 body=657 status=ok
// SIG undefined FUN_144b21e20(void)

void FUN_144b21e20(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 1.0 / (*(float *)(param_1 + 0x2b0) * 0.5 * *(float *)(param_1 + 0x2b4));
  fVar8 = *(float *)(param_1 + 0x40);
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  uVar4 = *(undefined8 *)(param_1 + 0x140);
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  *param_2 = *(undefined8 *)(param_1 + 0x130);
  param_2[1] = uVar7;
  param_2[2] = uVar4;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x29c);
  *(float *)((longlong)param_2 + 0x1c) = fVar8 * fVar9;
  *(float *)(param_2 + 4) = fVar1 * fVar9;
  *(float *)((longlong)param_2 + 0x24) = fVar2 * fVar9;
  *(float *)(param_2 + 5) = fVar9 * fVar3;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  dVar5 = *(double *)(param_1 + 0x90);
  dVar6 = *(double *)(param_1 + 0x70);
  *(float *)(param_2 + 6) = -(float)*(double *)(param_1 + 0x50);
  *(float *)((longlong)param_2 + 0x34) = -(float)dVar6;
  *(float *)(param_2 + 7) = -(float)dVar5;
  dVar5 = *(double *)(param_1 + 0xa0);
  dVar6 = *(double *)(param_1 + 0x80);
  *(float *)((longlong)param_2 + 0x44) = (float)*(double *)(param_1 + 0x60);
  *(float *)(param_2 + 9) = (float)dVar6;
  *(float *)((longlong)param_2 + 0x4c) = (float)dVar5;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0x3f800000c0000000;
  fVar8 = *(float *)(param_1 + 0x174);
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)((longlong)param_2 + 0x3c) = fVar8;
  fVar8 = *(float *)(param_1 + 0x178);
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(param_2 + 8) = fVar8;
  *(float *)(param_2 + 10) = *(float *)(param_1 + 0x2b0) * 0.5;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  *(float *)(param_2 + 0xc) = *(float *)(param_1 + 0x2b4) * 0.5;
  fVar8 = cosf(*(float *)(param_1 + 0x2b8) * 0.017453292);
  *(float *)((longlong)param_2 + 100) = fVar8;
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_1 + 700);
  uVar4 = DAT_14c84635c;
  *(undefined8 *)((longlong)param_2 + 0x6c) = DAT_14c84635c;
  *(undefined8 *)((longlong)param_2 + 0x74) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xbf80000042000000;
  *(undefined4 *)((longlong)param_2 + 0x8c) = *(undefined4 *)(param_1 + 0x2a8);
  *(uint *)((longlong)param_2 + 0x84) = (uint)*(byte *)(param_1 + 0x1d6);
  *(uint *)(param_2 + 0x11) = *(byte *)(param_1 + 0x1d3) >> 2 & 1;
  if (*(int *)(param_1 + 0x228) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x300))
              (*(longlong **)(param_1 + 0x10),param_1,param_2);
  }
  if (*(int *)(param_1 + 0x2d0) != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x308))
              (*(longlong **)(param_1 + 0x10),param_1,param_2);
  }
  if ((param_3 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)((longlong)param_2 + 0x24) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x41000000;
    *(undefined8 *)((longlong)param_2 + 0x54) = 0x40452cbc3c8ed3ce;
    *(float *)(param_2 + 10) =
         (*(float *)(param_1 + 0x2b0) + *(float *)(param_1 + 0x2b4)) * 0.5 * 0.5;
    param_2[0xc] = 0;
    *(undefined4 *)(param_2 + 0xd) = 0xc0000000;
  }
  return;
}



// FUNCTION 144b220b2 FUN_144b220b2 body=53 status=ok
// SIG undefined FUN_144b220b2(void)

undefined8 * FUN_144b220b2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *param_2 = *(undefined8 *)(param_3 + 0x20);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[3] = DAT_14c8464e0;
  param_2[4] = uVar1;
  param_2[5] = DAT_14c8464f0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 144b220e8 FUN_144b220e8 body=377 status=ok
// SIG undefined FUN_144b220e8(void)

ulonglong FUN_144b220e8(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong unaff_RSI;
  undefined7 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0xc70) & 8) == 0) {
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
    if ((*(longlong *)(param_1 + 0x9c0) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x9c0) + 2) & 0x10) == 0)) goto LAB_144b22124;
    cVar1 = FUN_144b22262(param_1);
    if ((cVar1 == '\0') ||
       ((**(char **)(param_1 + 0x9c0) != '\x01' && (*(int *)(*(char **)(param_1 + 0x9c0) + 8) < 2)))
       ) goto LAB_144b22124;
    FUN_147a0d636(param_1,&local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)FUN_144a7954a(param_1);
    lVar4 = (**(code **)(*plVar3 + 0x310))(plVar3);
    if ((((local_30 != *(int *)(lVar4 + 0x28)) || (local_30 != *(int *)(param_1 + 0xba0))) ||
        (*(int *)(param_1 + 0x6d8 + (longlong)*(int *)(param_1 + 0x718) * 0x10) !=
         *(int *)(param_1 + 0xbb0))) || (*(int *)(param_1 + 0xbc0) != *(int *)(param_1 + 0xb60)))
    goto LAB_144b22124;
  }
  lVar4 = DAT_14cad29d8;
  uVar6 = (undefined7)(unaff_RSI >> 8);
  if ((*(byte *)(param_1 + 0x8a1) & 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x9c0) == 0) {
      unaff_RSI = 0;
    }
    else {
      unaff_RSI = CONCAT71(uVar6,1);
      if ((*(byte *)(param_1 + 0x8a0) & 8) != 0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar5 = 0;
        }
        else {
          bVar2 = FUN_144a61b4f();
          uVar5 = (ulonglong)(bVar2 ^ 1);
        }
        if (0 < *(int *)(lVar4 + uVar5 * 4)) {
          unaff_RSI = CONCAT71(uVar6,(*(byte *)(*(longlong *)(param_1 + 0x9c0) + 2) & 8) == 0);
        }
      }
    }
  }
  else {
    unaff_RSI = CONCAT71(uVar6,*(byte *)(param_1 + 0x8a1) >> 7);
  }
LAB_144b22124:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return unaff_RSI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b22262 FUN_144b22262 body=83 status=ok
// SIG undefined FUN_144b22262(void)

bool FUN_144b22262(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  
  lVar1 = DAT_14cad29d8;
  if ((*(byte *)(param_1 + 0x8a0) & 8) == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    bVar2 = 0 < *(int *)(lVar1 + uVar4 * 4);
  }
  return bVar2;
}



// FUNCTION 144b222b6 FUN_144b222b6 body=158 status=ok
// SIG undefined FUN_144b222b6(void)

bool FUN_144b222b6(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 3000) == (code *)&LAB_147a0c89e) {
    if ((param_1[0x15d] != 0) && (*(char *)(param_1[0x15d] + 0x30) == '\x02')) {
      return true;
    }
  }
  else {
    cVar2 = (**(code **)(lVar4 + 3000))(param_1);
    if (cVar2 != '\0') {
      return true;
    }
    lVar4 = *param_1;
  }
  if (*(code **)(lVar4 + 0xbb0) != (code *)&LAB_1400ba9be) {
                    /* WARNING: Could not recover jumptable at 0x000144b22345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar4 + 0xbb0))(param_1);
    return (bool)uVar3;
  }
  lVar4 = param_1[0x15d];
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x30) != '\x03')) {
    bVar1 = false;
  }
  else if (*(longlong *)(lVar4 + 0x358) == 0) {
    bVar1 = 0 < *(int *)(lVar4 + 0x368);
  }
  else {
    bVar1 = *(int *)(*(longlong *)(lVar4 + 0x358) + 0x1b4) < 1;
  }
  return bVar1;
}



// FUNCTION 144b22354 FUN_144b22354 body=47 status=ok
// SIG undefined FUN_144b22354(void)

undefined8 FUN_144b22354(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x6b8))) &&
     (lVar1 = (longlong)*(char *)(*(longlong *)(param_1 + 0x6b0) + (ulonglong)param_2), lVar1 != -1)
     ) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x6a0) + lVar1 * 8);
  }
  return 0;
}



// FUNCTION 144b22384 FUN_144b22384 body=66 status=ok
// SIG undefined FUN_144b22384(void)

longlong FUN_144b22384(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x658);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar1 != 0) == 0) {
      return lVar1;
    }
  }
  else if (DAT_14c950c29 != 1) {
    return lVar1;
  }
  FUN_1456cec3c(lVar1);
  return lVar1;
}



// FUNCTION 144b223ce FUN_144b223ce body=342 status=ok
// SIG undefined FUN_144b223ce(void)

void FUN_144b223ce(ulonglong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0xb8) < '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
    if (DAT_14cad0160 != DAT_14cad018c) {
      uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      puVar4 = &DAT_14cad0190;
      if (DAT_14cad0198 != (undefined *)0x0) {
        puVar4 = DAT_14cad0198;
      }
      iVar1 = *(int *)(puVar4 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      while (iVar1 != -1) {
        lVar5 = DAT_14cad0158 + (longlong)iVar1 * 0x20;
        if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar1 * 0x20) == param_1) {
          if (((lVar5 != 0) && (lVar5 != -8)) && ((longlong)*(int *)(lVar5 + 0x10) != 0)) {
            lVar6 = *(longlong *)(lVar5 + 8);
            lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 5;
            do {
              (**(code **)(*param_2 + 0x88))(param_2,lVar6,0,0);
              lVar6 = lVar6 + 0x20;
              lVar5 = lVar5 + -0x20;
            } while (lVar5 != 0);
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x18);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  }
  iVar1 = *(int *)(param_1 + 0x6b0);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x6a8);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + 0x28 + lVar6);
      if (lVar2 != 0) {
        FUN_147ba5366(lVar2,param_2);
      }
      lVar6 = lVar6 + 0xa0;
    } while ((longlong)iVar1 * 0xa0 != lVar6);
  }
  return;
}



// FUNCTION 144b22524 FUN_144b22524 body=986 status=ok
// SIG undefined FUN_144b22524(void)

undefined1 (*) [16] FUN_144b22524(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar11 = *(longlong *)(param_1 + 0x660);
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar11);
    lVar11 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar11 == 0) {
    dVar2 = param_3[5];
    dVar1 = param_3[6];
    *(double *)*param_2 = param_3[4];
    *(double *)(*param_2 + 8) = dVar2;
    *(double *)param_2[1] = dVar1;
    uVar10 = DAT_14c8464e8;
    *(undefined8 *)(param_2[1] + 8) = DAT_14c8464e0;
    *(undefined8 *)param_2[2] = uVar10;
    *(undefined8 *)(param_2[2] + 8) = DAT_14c8464f0;
    *(undefined8 *)param_2[3] = 0;
    return param_2;
  }
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar11);
  }
  dVar1 = *(double *)(lVar11 + 0x200);
  dVar2 = *(double *)(lVar11 + 0x210);
  dVar4 = *param_3;
  dVar13 = param_3[1];
  dVar3 = param_3[2];
  dVar17 = param_3[8];
  dVar5 = param_3[9];
  dVar6 = param_3[10];
  dVar9 = dVar13 + dVar13;
  dVar20 = dVar3 + dVar3;
  dVar16 = dVar4 * (dVar4 + dVar4);
  dVar14 = (1.0 - (dVar3 * dVar20 + dVar13 * dVar9)) * dVar17;
  dVar15 = (1.0 - (dVar3 * dVar20 + dVar16)) * dVar5;
  dVar12 = (1.0 - (dVar16 + dVar13 * dVar9)) * dVar6;
  dVar3 = param_3[3];
  dVar21 = dVar20 * dVar3;
  dVar22 = (dVar4 + dVar4) * param_3[3];
  dVar3 = dVar9 * dVar3;
  dVar18 = (dVar9 * dVar4 + dVar21) * dVar17;
  dVar19 = (dVar20 * dVar13 + dVar22) * dVar5;
  dVar16 = (dVar3 + *param_3 * dVar20) * dVar6;
  dVar17 = (*param_3 * dVar20 - dVar3) * dVar17;
  dVar5 = (dVar9 * dVar4 - dVar21) * dVar5;
  dVar6 = (dVar20 * dVar13 - dVar22) * dVar6;
  dVar3 = *(double *)(lVar11 + 0x208);
  dVar9 = *(double *)(lVar11 + 0x218);
  dVar4 = *(double *)(lVar11 + 0x220);
  dVar13 = *(double *)(lVar11 + 0x228);
  dVar21 = ABS(dVar13 * dVar16) + ABS(dVar4 * dVar5) + ABS(dVar9 * dVar14);
  dVar22 = ABS(*(double *)(lVar11 + 0x228) * dVar6) +
           ABS(*(double *)(lVar11 + 0x220) * dVar15) + ABS(*(double *)(lVar11 + 0x218) * dVar18);
  dVar20 = ABS(dVar12 * dVar13) + ABS(dVar19 * dVar4) + ABS(dVar17 * dVar9);
  dVar9 = dVar16 * dVar16 + dVar5 * dVar5 + dVar14 * dVar14;
  dVar4 = dVar6 * dVar6 + dVar15 * dVar15 + dVar18 * dVar18;
  dVar13 = dVar12 * dVar12 + dVar19 * dVar19 + dVar17 * dVar17;
  if (dVar9 <= dVar4) {
    dVar9 = dVar4;
  }
  if (dVar9 <= dVar13) {
    dVar9 = dVar13;
  }
  dVar8 = *(double *)(lVar11 + 0x230);
  dVar13 = param_3[4];
  dVar6 = dVar2 * dVar6 + *(double *)(lVar11 + 0x208) * dVar15 + dVar1 * dVar18 + param_3[5];
  dVar4 = param_3[6];
  if (dVar9 < 0.0) {
    dVar9 = sqrt(dVar9);
  }
  else {
    dVar9 = SQRT(dVar9);
  }
  dVar8 = dVar8 * dVar9;
  dVar9 = SQRT(dVar22 * dVar22 + dVar20 * dVar20 + dVar21 * dVar21);
  if (dVar9 <= dVar8) {
    dVar8 = dVar9;
  }
  auVar7._8_4_ = SUB84(dVar6,0);
  auVar7._0_8_ = dVar2 * dVar16 + dVar3 * dVar5 + dVar1 * dVar14 + dVar13;
  auVar7._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_2 = auVar7;
  *(double *)param_2[1] = dVar2 * dVar12 + dVar3 * dVar19 + dVar1 * dVar17 + dVar4;
  dVar1 = (double)*(float *)(param_1 + 0x3ac);
  *(double *)(param_2[1] + 8) = dVar21 * dVar1;
  *(double *)param_2[2] = dVar22 * dVar1;
  *(double *)(param_2[2] + 8) = dVar20 * dVar1;
  *(double *)param_2[3] = dVar8 * dVar1;
  return param_2;
}



// FUNCTION 144b228fe FUN_144b228fe body=85 status=ok
// SIG undefined FUN_144b228fe(void)

void FUN_144b228fe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar4 * 8);
      pcVar2 = *(code **)(*plVar1 + 0x78);
      if (pcVar2 != (code *)&DAT_144b1f836) {
        (*pcVar2)(plVar1,param_2);
        iVar3 = *(int *)(param_1 + 0x18);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 144b22954 FUN_144b22954 body=654 status=ok
// SIG undefined FUN_144b22954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b22954(longlong param_1,undefined1 *param_2,double *param_3,undefined1 (*param_4) [16])

{
  double dVar1;
  double dVar3;
  double dVar5;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double *pdVar19;
  undefined1 uVar20;
  int iVar21;
  int iVar22;
  uint in_R11D;
  uint uVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar2;
  double dVar4;
  double dVar6;
  
  uVar23 = (uint)param_4;
  *param_2 = 1;
  iVar22 = 0;
  if (*(int *)(param_1 + 0x1f0) < 1) {
    uVar20 = 0;
  }
  else {
    dVar1 = param_3[1];
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar4 = param_3[2];
    auVar26 = *param_4 & _DAT_149931180;
    auVar25._0_8_ = auVar26._0_8_;
    auVar25._8_4_ = auVar26._0_4_;
    auVar25._12_4_ = auVar26._4_4_;
    auVar26._0_8_ = auVar26._8_8_;
    dVar5 = *(double *)param_4[1];
    dVar6 = *(double *)param_4[1];
    pdVar19 = (double *)(param_1 + 0xe0);
    if (*(double **)(param_1 + 0x1e0) != (double *)0x0) {
      pdVar19 = *(double **)(param_1 + 0x1e0);
    }
    uVar20 = 0;
    do {
      dVar15 = (dVar3 * pdVar19[8] + dVar1 * pdVar19[4] + *param_3 * *pdVar19) - pdVar19[0xc];
      dVar16 = (dVar4 * pdVar19[9] + dVar2 * pdVar19[5] + *param_3 * pdVar19[1]) - pdVar19[0xd];
      dVar17 = (dVar3 * pdVar19[10] + dVar1 * pdVar19[6] + *param_3 * pdVar19[2]) - pdVar19[0xe];
      dVar18 = (dVar4 * pdVar19[0xb] + dVar2 * pdVar19[7] + *param_3 * pdVar19[3]) - pdVar19[0xf];
      dVar13 = ABS(pdVar19[8] * dVar5) +
               ABS(pdVar19[4]) * auVar26._0_8_ + ABS(*pdVar19) * auVar25._0_8_;
      dVar14 = ABS(pdVar19[9] * dVar6) +
               ABS(pdVar19[5]) * auVar26._8_8_ + ABS(pdVar19[1]) * auVar25._8_8_;
      dVar10 = ABS(pdVar19[10] * dVar5) +
               ABS(pdVar19[6]) * auVar26._0_8_ + ABS(pdVar19[2]) * auVar25._0_8_;
      dVar11 = ABS(pdVar19[0xb] * dVar6) +
               ABS(pdVar19[7]) * auVar26._8_8_ + ABS(pdVar19[3]) * auVar25._8_8_;
      auVar7._8_8_ = -(ulonglong)(dVar14 < dVar16);
      auVar7._0_8_ = -(ulonglong)(dVar13 < dVar15);
      iVar21 = movmskpd(uVar23,auVar7);
      auVar8._8_8_ = -(ulonglong)(dVar11 < dVar18);
      auVar8._0_8_ = -(ulonglong)(dVar10 < dVar17);
      uVar23 = movmskpd(in_R11D,auVar8);
      if ((uVar23 & 0x3fffffff) != 0 || iVar21 != 0) {
        *param_2 = 0;
        uVar20 = 1;
        break;
      }
      auVar9._8_8_ = -(ulonglong)(0.0 - dVar14 < dVar16);
      auVar9._0_8_ = -(ulonglong)(0.0 - dVar13 < dVar15);
      uVar23 = movmskpd(iVar21,auVar9);
      lVar24 = -(ulonglong)(0.0 - dVar11 < dVar18);
      auVar12._8_4_ = (int)lVar24;
      auVar12._0_8_ = -(ulonglong)(0.0 - dVar10 < dVar17);
      auVar12._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      iVar21 = movmskpd(0,auVar12);
      in_R11D = iVar21 << 2 | uVar23;
      if (in_R11D != 0) {
        uVar20 = 1;
      }
      iVar22 = iVar22 + 4;
      pdVar19 = pdVar19 + 0x10;
    } while (iVar22 < *(int *)(param_1 + 0x1f0));
  }
  param_2[1] = uVar20;
  return;
}



// FUNCTION 144b22be2 FUN_144b22be2 body=519 status=ok
// SIG undefined FUN_144b22be2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144b22be2(longlong param_1,double *param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  double dVar3;
  double dVar5;
  int iVar7;
  bool bVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar2;
  double dVar4;
  double dVar6;
  
  iVar7 = *(int *)(param_1 + 0x1f0);
  if (iVar7 < 1) {
    pdVar13 = (double *)&DAT_00000001;
  }
  else {
    dVar1 = param_2[1];
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = param_2[2];
    auVar20 = *param_3 & _DAT_149931180;
    auVar21._8_4_ = auVar20._8_4_;
    auVar21._12_4_ = auVar20._12_4_;
    auVar21._0_8_ = auVar20._8_8_;
    dVar5 = *(double *)param_3[1];
    dVar6 = *(double *)param_3[1];
    pdVar13 = *(double **)(param_1 + 0x1e0);
    pdVar14 = (double *)(param_1 + 0xe0);
    if (pdVar13 != (double *)0x0) {
      pdVar14 = pdVar13;
    }
    iVar15 = 4;
    do {
      dVar9 = auVar20._0_8_;
      lVar18 = -(ulonglong)
                (ABS(pdVar14[9] * dVar6) + ABS(pdVar14[5]) * auVar21._8_8_ + ABS(pdVar14[1]) * dVar9
                < (dVar4 * pdVar14[9] + dVar2 * pdVar14[5] + *param_2 * pdVar14[1]) - pdVar14[0xd]);
      lVar19 = -(ulonglong)
                (ABS(pdVar14[0xb] * dVar6) +
                 ABS(pdVar14[7]) * auVar21._8_8_ + ABS(pdVar14[3]) * dVar9 <
                (dVar4 * pdVar14[0xb] + dVar2 * pdVar14[7] + *param_2 * pdVar14[3]) - pdVar14[0xf]);
      auVar10._8_4_ = (int)lVar18;
      auVar10._0_8_ =
           -(ulonglong)
            (ABS(pdVar14[8] * dVar5) + ABS(pdVar14[4]) * auVar21._0_8_ + ABS(*pdVar14) * dVar9 <
            (dVar3 * pdVar14[8] + dVar1 * pdVar14[4] + *param_2 * *pdVar14) - pdVar14[0xc]);
      auVar10._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar12 = movmskpd((int)pdVar13,auVar10);
      auVar11._8_4_ = (int)lVar19;
      auVar11._0_8_ =
           -(ulonglong)
            (ABS(pdVar14[10] * dVar5) + ABS(pdVar14[6]) * auVar21._0_8_ + ABS(pdVar14[2]) * dVar9 <
            (dVar3 * pdVar14[10] + dVar1 * pdVar14[6] + *param_2 * pdVar14[2]) - pdVar14[0xe]);
      auVar11._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      iVar16 = movmskpd((int)param_3,auVar11);
      uVar17 = iVar16 << 2 | uVar12;
      pdVar13 = (double *)(ulonglong)CONCAT31((int3)(uVar12 >> 8),uVar17 == 0);
      pdVar14 = pdVar14 + 0x10;
      bVar8 = iVar15 < iVar7;
      param_3 = (undefined1 (*) [16])(ulonglong)CONCAT31((int3)(uVar17 >> 8),bVar8);
      iVar15 = iVar15 + 4;
    } while (uVar17 == 0 && bVar8);
  }
  return pdVar13;
}



// FUNCTION 144b22dea FUN_144b22dea body=619 status=ok
// SIG undefined FUN_144b22dea(void)

bool FUN_144b22dea(longlong param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  
  dVar8 = param_2[2] - *(double *)(param_1 + 0x140);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x138);
  dVar12 = *param_2 - *(double *)(param_1 + 0x130);
  dVar10 = dVar8 * dVar8 + dVar12 * dVar12 + dVar11 * dVar11;
  dVar2 = param_2[6];
  dVar13 = (double)*(float *)(param_1 + 0x298) + dVar2;
  if (dVar10 <= dVar13 * dVar13) {
    dVar13 = *(double *)(param_1 + 0x90);
    dVar3 = *(double *)(param_1 + 0x50);
    dVar4 = *(double *)(param_1 + 0x70);
    fVar1 = *(float *)(param_1 + 0x2d8);
    dVar7 = dVar2 / (double)fVar1;
    dVar5 = param_2[2] - (*(double *)(param_1 + 0x140) - dVar13 * dVar7);
    dVar6 = param_2[1] - (*(double *)(param_1 + 0x138) - dVar4 * dVar7);
    dVar7 = *param_2 - (*(double *)(param_1 + 0x130) - dVar7 * dVar3);
    fVar14 = (float)(dVar13 * dVar5 + dVar3 * dVar7 + dVar4 * dVar6);
    if ((0.0 < fVar14) &&
       (*(float *)(param_1 + 0x2d0) * *(float *)(param_1 + 0x2d0) *
        (float)(dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6) <= fVar14 * fVar14)) {
      fVar14 = (float)(dVar13 * dVar8 + dVar3 * dVar12 + dVar11 * dVar4);
      if (0.0 <= fVar14) {
        return true;
      }
      fVar9 = (float)dVar10;
      if (fVar14 * fVar14 < fVar1 * fVar1 * fVar9) {
        return true;
      }
      return (double)fVar9 <= dVar2 * dVar2;
    }
  }
  return false;
}



// FUNCTION 144b23056 FUN_144b23056 body=487 status=ok
// SIG undefined FUN_144b23056(void)

float FUN_144b23056(longlong *param_1,longlong param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  
  dVar10 = (double)param_1[0x28];
  dVar7 = (double)param_1[0x27];
  dVar1 = (double)param_1[0x26];
  dVar2 = (double)param_1[0x12];
  dVar3 = (double)param_1[0xe];
  dVar4 = (double)param_1[10];
  if (*(code **)(*param_1 + 0x18) == (code *)&LAB_144774e28) {
    fVar8 = *(float *)(param_1 + 0x53);
    fVar11 = *(float *)(param_1 + 0x5a);
  }
  else {
    fVar8 = (float)(**(code **)(*param_1 + 0x18))(param_1);
    fVar11 = *(float *)(param_1 + 0x5a);
    if (*(code **)(*param_1 + 0x18) != (code *)&LAB_144774e28) {
      fVar5 = (float)(**(code **)(*param_1 + 0x18))(param_1);
      goto LAB_144b230fe;
    }
  }
  fVar5 = *(float *)(param_1 + 0x53);
LAB_144b230fe:
  dVar6 = (double)fVar8;
  dVar9 = (double)fVar11;
  dVar10 = (dVar10 + dVar2 * dVar6 * dVar9) - *(double *)(param_2 + 0xb58);
  dVar2 = (dVar7 + dVar3 * dVar6 * dVar9) - *(double *)(param_2 + 0xb50);
  dVar7 = (dVar1 + dVar4 * dVar6 * dVar9) - *(double *)(param_2 + 0xb48);
  fVar8 = (float)SQRT(dVar10 * dVar10 + dVar7 * dVar7 + dVar2 * dVar2);
  dVar7 = (double)((float)param_3[1] * 0.5) * *(double *)(param_2 + 0xb80);
  dVar10 = (double)((float)*param_3 * 0.5) * *(double *)(param_2 + 0xb78);
  if (dVar10 <= dVar7) {
    dVar10 = dVar7;
  }
  if (fVar8 <= 1.0) {
    fVar8 = 1.0;
  }
  return ((float)dVar10 * fVar5 * *(float *)(param_1 + 0x5b)) / fVar8;
}



// FUNCTION 144b233bc FUN_144b233bc body=132 status=ok
// SIG undefined FUN_144b233bc(void)

float FUN_144b233bc(longlong param_1,float param_2,float param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float *pfVar3;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x70);
  if (*(float *)(param_1 + 0x78) != NAN) {
    param_3 = *(float *)(param_1 + 0x78);
  }
  if ((uVar1 != 0) &&
     ((pfVar3 = *(float **)(param_1 + 0x68), *(char *)(param_1 + 0x7c) != '\x01' ||
      (*pfVar3 <= param_2)))) {
    if (((int)*(uint *)(param_1 + 0x70) < 2) || (param_2 < *pfVar3)) {
      pfVar3 = pfVar3 + 1;
    }
    else if (param_2 < pfVar3[uVar1 * 2 + -2]) {
      uVar2 = 0;
      while (pfVar3[uVar2 * 2] <= param_2) {
        uVar2 = uVar2 + 1;
        if (uVar1 == uVar2) {
          return param_3;
        }
      }
      uVar1 = 1;
      if (1 < (int)uVar2) {
        uVar1 = uVar2 & 0xffffffff;
      }
      pfVar3 = pfVar3 + uVar1 * 2 + -1;
    }
    else {
      pfVar3 = pfVar3 + uVar1 * 2 + -1;
    }
    param_3 = *pfVar3;
  }
  return param_3;
}



// FUNCTION 144b23440 FUN_144b23440 body=331 status=ok
// SIG undefined FUN_144b23440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144b23440(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c873400 == -0x662bf3f &&
      ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1)) {
      FUN_1446f470e(&local_18,L"Unused custom version",1);
      _DAT_14c87e468 = 0;
      uRam000000014c87e46c = 0;
      uRam000000014c87e470 = 0;
      uRam000000014c87e474 = 0xf99d40c1;
      _DAT_14c87e478 = 0x100000000;
      _DAT_14c87e480 = 0;
      DAT_14c87e488 = local_18;
      _Init_thread_footer(&DAT_14c87e490);
    }
    piVar2 = (int *)&DAT_14c87e468;
LAB_144b234d1:
    iVar1 = piVar2[4];
  }
  else {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xd0) + 0x1440);
    iVar1 = 0;
    if (lVar3 != 0) {
      piVar2 = *(int **)(*(longlong *)(param_1 + 0xd0) + 0x1438);
      lVar3 = lVar3 * 0x28;
      do {
        if ((((*piVar2 == DAT_14c8733f4) && (piVar2[1] == DAT_14c8733f8)) &&
            (piVar2[2] == DAT_14c8733fc)) && (piVar2[3] == DAT_14c873400)) {
          if (piVar2 != (int *)0x0) goto LAB_144b234d1;
          break;
        }
        piVar2 = piVar2 + 10;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 144b2358c FUN_144b2358c body=331 status=ok
// SIG undefined FUN_144b2358c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144b2358c(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c8733f0 == -0x662bf3f &&
      ((DAT_14c8733e8 == 0 && DAT_14c8733e4 == 0) && DAT_14c8733ec == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1)) {
      FUN_1446f470e(&local_18,L"Unused custom version",1);
      _DAT_14c87e468 = 0;
      uRam000000014c87e46c = 0;
      uRam000000014c87e470 = 0;
      uRam000000014c87e474 = 0xf99d40c1;
      _DAT_14c87e478 = 0x100000000;
      _DAT_14c87e480 = 0;
      DAT_14c87e488 = local_18;
      _Init_thread_footer(&DAT_14c87e490);
    }
    piVar2 = (int *)&DAT_14c87e468;
LAB_144b2361d:
    iVar1 = piVar2[4];
  }
  else {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xd0) + 0x1440);
    iVar1 = 0;
    if (lVar3 != 0) {
      piVar2 = *(int **)(*(longlong *)(param_1 + 0xd0) + 0x1438);
      lVar3 = lVar3 * 0x28;
      do {
        if ((((*piVar2 == DAT_14c8733e4) && (piVar2[1] == DAT_14c8733e8)) &&
            (piVar2[2] == DAT_14c8733ec)) && (piVar2[3] == DAT_14c8733f0)) {
          if (piVar2 != (int *)0x0) goto LAB_144b2361d;
          break;
        }
        piVar2 = piVar2 + 10;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 144b236d8 FUN_144b236d8 body=389 status=ok
// SIG undefined FUN_144b236d8(void)

undefined8 FUN_144b236d8(longlong param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (((uVar1 & 0x40) == 0) ||
     ((*(longlong *)(param_1 + 0x60) != 0 &&
      (-1 < *(longlong *)(*(longlong *)(param_1 + 0x60) + 0xa0))))) {
    return 0;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x20) & 0x10) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x20) + 0x30) != 0)) {
    if ((param_2 & 2) != 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar5 + 0x884) == -1) {
      return 0;
    }
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x30) + 8);
    if (*(uint *)(pcVar2 + 0x1c) != param_2) {
      return 0;
    }
    if (*(int *)(pcVar2 + 0xc) != 0) {
      return 0;
    }
    if (*(int *)(pcVar2 + 0x14) < 2) {
      return 0;
    }
    if ((*pcVar2 == '\x01') && (0 < *(int *)(pcVar2 + 0x448))) {
      return 0;
    }
    if (*(int *)(pcVar2 + 0x10) != *(int *)(lVar5 + 0x814)) {
      return 0;
    }
    if (*(int *)(pcVar2 + 4) != *(int *)(pcVar2 + 8)) {
      return 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x16c0) != '\0') {
      return 0;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x90) & 2) != 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x81c) != *(int *)(pcVar2 + 0x18)) {
      return 0;
    }
    if ((longlong)*(int *)(pcVar2 + 0x438) != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(pcVar2 + 0x430) + lVar7) != 0) {
          return 0;
        }
        lVar7 = lVar7 + 0x28;
      } while ((longlong)*(int *)(pcVar2 + 0x438) * 0x28 != lVar7);
    }
    uVar3 = *(ulonglong *)(lVar5 + 0x880);
    if (-1 < (longlong)uVar3) {
      uVar4 = (uint)(uVar3 >> 0x20);
      if ((int)uVar4 < DAT_14c998088) {
        puVar6 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar6 = DAT_14c998080;
        }
        if ((*(uint *)(puVar6 + (uVar3 >> 0x25) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
          lVar5 = (uVar3 >> 0x20) * 0x68;
          if ((*(byte *)(DAT_14c998060 + 0x60 + lVar5) & 1) != 0) {
            return 0;
          }
          if ((*(byte *)(*(longlong *)(DAT_14c998060 + lVar5 + 0x28) + 0x20 +
                        (longlong)(int)uVar3 * 0x28) & 3) != 0) {
            return 0;
          }
        }
      }
    }
  }
  *(uint *)(param_1 + 0xc) = uVar1 | 1;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 144b2385e FUN_144b2385e body=111 status=ok
// SIG undefined FUN_144b2385e(void)

void FUN_144b2385e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a8a89c0;
  plVar3 = (longlong *)param_1[8];
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
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x000144b238b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144b238ce FUN_144b238ce body=119 status=ok
// SIG undefined FUN_144b238ce(void)

longlong FUN_144b238ce(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x1460) != *(int *)(param_1 + 0x148c)) {
    lVar2 = *param_2;
    lVar4 = param_1 + 0x1490;
    if (*(longlong *)(param_1 + 0x1498) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1498);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x14a0) - 1U &
                             ((uint)((ulonglong)lVar2 >> 0x20) ^ (uint)lVar2)) * 4);
    if (iVar3 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1458) + (longlong)iVar3 * 0x18),
            *plVar1 != lVar2) {
        iVar3 = (int)plVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 144b23946 FUN_144b23946 body=55 status=ok
// SIG undefined FUN_144b23946(void)

void FUN_144b23946(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  return;
}



// FUNCTION 144b23990 FUN_144b23990 body=223 status=ok
// SIG undefined FUN_144b23990(void)

void FUN_144b23990(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = *(int *)((longlong)param_1 + 0x34);
  if (((int)param_1[1] - iVar9 != 1) && ((int)param_1[1] != iVar9)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x10) == *param_3) {
          iVar2 = *param_4;
          if (iVar9 != 0) {
            *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x10) = iVar2;
          }
          *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10) = 0xffffffff;
          uVar8 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar8 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10 + 4) = uVar8;
          *(int *)(param_1 + 6) = iVar2;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar6 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          iVar9 = iVar2 + 0x1f;
          if (-1 < iVar2) {
            iVar9 = iVar2;
          }
          bVar4 = (byte)iVar2 & 0x1f;
          puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_144b23a4f;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + lVar3 + 8);
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_144b23a4f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 144b23a76 FUN_144b23a76 body=222 status=ok
// SIG undefined FUN_144b23a76(void)

longlong FUN_144b23a76(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar5 = *param_2;
    uVar4 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar6 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar6 = *(longlong *)(param_1 + 800);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x328) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar7 * 0x110;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar7 * 0x110) == lVar5)
        goto LAB_144b23b1a;
        iVar7 = *(int *)(lVar6 + 0x108);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_144b23b1a:
  plVar3 = (longlong *)param_2[2];
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
  lVar5 = lVar6 + 0x18;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 144b23bf6 FUN_144b23bf6 body=44 status=ok
// SIG undefined FUN_144b23bf6(void)

undefined4 FUN_144b23bf6(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x128))) {
    lVar1 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x120);
    }
    uVar2 = *(undefined4 *)(lVar1 + (ulonglong)param_2 * 4);
  }
  return uVar2;
}



// FUNCTION 144b23c22 FUN_144b23c22 body=4 status=ok
// SIG undefined FUN_144b23c22(void)

undefined4 FUN_144b23c22(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// FUNCTION 144b23c26 FUN_144b23c26 body=435 status=ok
// SIG undefined FUN_144b23c26(void)

void FUN_144b23c26(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  *(undefined1 *)(param_1 + 0xe) = 0;
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    lVar7 = 4;
    bVar10 = false;
    lVar9 = 0;
    do {
      if (bVar10) {
        return;
      }
      iVar1 = *(int *)(*param_1 + lVar7);
      if ((((iVar1 != 0) && (uVar2 = *(uint *)(*param_1 + -4 + lVar7), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar8 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar1)) &&
          (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
           (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))) {
        pcVar3 = *(code **)(*plVar8 + 0x5e8);
        if (pcVar3 == FUN_140972dde) {
          lVar5 = plVar8[0x76];
          if (lVar5 == 0) {
            pcVar3 = *(code **)(*plVar8 + 0x5f8);
            if (pcVar3 == FUN_144784df4) {
              if (*(code **)(plVar8[0x784] + 0x18) == (code *)&LAB_144904684) {
                if ((*(int *)((longlong)plVar8 + 0x75b4) != 0) &&
                   (uVar2 = *(uint *)(plVar8 + 0xeb6), -1 < (int)uVar2)) {
                  lVar5 = 0;
                  if (DAT_14c9647dc <= (int)uVar2) goto LAB_144b23d67;
                  plVar6 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if (((plVar6 != (longlong *)0x0) &&
                      ((int)plVar6[2] == *(int *)((longlong)plVar8 + 0x75b4))) &&
                     ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
                    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
                      lVar5 = *plVar6;
                    }
                    else {
                      lVar5 = 0;
                    }
                    lVar5 = lVar5 + 0x110;
                    goto LAB_144b23d9d;
                  }
                }
              }
              else {
                lVar5 = (**(code **)(plVar8[0x784] + 0x18))(plVar8 + 0x784);
LAB_144b23d9d:
                if (lVar5 != 0) {
                  lVar5 = *(longlong *)(lVar5 + 0x20);
                  goto LAB_144b23da6;
                }
              }
            }
            else {
              lVar5 = (*pcVar3)();
LAB_144b23da6:
              if (lVar5 != 0) {
                lVar5 = *(longlong *)(lVar5 + 0x3b0);
                goto LAB_144b23d67;
              }
            }
            lVar5 = 0;
          }
        }
        else {
          lVar5 = (*pcVar3)();
        }
LAB_144b23d67:
        bVar10 = lVar5 != 0;
        *(bool *)(param_1 + 0xe) = bVar10;
        iVar4 = (int)param_1[1];
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x40;
    } while (lVar9 < iVar4);
  }
  return;
}



// FUNCTION 144b23dda FUN_144b23dda body=24 status=ok
// SIG undefined FUN_144b23dda(void)

bool FUN_144b23dda(longlong param_1)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\0') && (*(char *)(param_1 + 0x31) == '\0')) {
    bVar1 = *(int *)(param_1 + 0x6c) == 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 144b23e54 FUN_144b23e54 body=194 status=ok
// SIG undefined FUN_144b23e54(void)

void FUN_144b23e54(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x10);
    FUN_147adb9f4(lVar1 + 0x20);
    lVar3 = *param_1;
    if (*(char *)(lVar3 + 0x36) == '\x01') {
      iVar2 = *(int *)(lVar1 + 0x78);
      if (0 < iVar2) {
        uVar4 = 0;
        do {
          lVar3 = *(longlong *)(lVar1 + 0x70);
          if (*(longlong *)(lVar3 + (longlong)(int)uVar4 * 0x10) == *param_1) {
            iVar5 = ~uVar4 + iVar2;
            if (iVar5 != 0) {
              if (0 < iVar5) {
                iVar5 = 1;
              }
              memmove((void *)((longlong)(int)uVar4 * 0x10 + lVar3),
                      (void *)((longlong)(iVar2 - iVar5) * 0x10 + lVar3),(longlong)iVar5 << 4);
              iVar2 = *(int *)(lVar1 + 0x78);
            }
            *(int *)(lVar1 + 0x78) = iVar2 + -1;
            FUN_147ae4610((longlong *)(lVar1 + 0x70));
            iVar2 = *(int *)(lVar1 + 0x78);
          }
          else {
            uVar4 = uVar4 + 1;
          }
        } while ((int)uVar4 < iVar2);
        lVar3 = *param_1;
      }
      *(undefined1 *)(lVar3 + 0x36) = 0;
      lVar3 = *param_1;
    }
    FUN_1435165cc(lVar3);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 144b23f16 FUN_144b23f16 body=344 status=ok
// SIG undefined FUN_144b23f16(void)

/* WARNING: Removing unreachable block (ram,0x000144b23ff8) */
/* WARNING: Removing unreachable block (ram,0x000144b24065) */

ulonglong FUN_144b23f16(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = *(longlong *)(param_1 + 0x148 + (ulonglong)*(uint *)(param_1 + 0x168) * 0x10) == 0;
  bVar4 = *(longlong *)
           (param_1 + 0x148 +
           (ulonglong)
           ((uint)((uint)(*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) < 2) ^
           *(uint *)(param_1 + 0x168)) * 0x10) == 0;
  if ((bVar3 && bVar4) && (param_2 != (longlong *)0x0)) {
    FUN_140056680(&local_30,
                  L"Bonebuffers are not set for shader data. This means the mesh that wants to be added for rendering purpose doesn\'t have data to be drawn. This would result in a crash if validation wouldn\'t skip it."
                 );
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    *(undefined8 *)(lVar2 + lVar5) = local_30;
    *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)local_28;
    *(undefined4 *)(lVar2 + 0xc + lVar5) = local_28._4_4_;
    local_28 = 0;
    local_30 = 0;
    FUN_140056680(&local_30,
                  L"This oftens means LOD, MinLodPerDeviceProfile or other discrepancies between skeletal meshes or parts."
                 );
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_2,iVar1);
    }
    lVar2 = *param_2;
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    *(undefined8 *)(lVar2 + lVar5) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = (undefined4)local_28;
    *(undefined4 *)(lVar2 + 0xc + lVar5) = local_28._4_4_;
    local_28 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),!bVar3 || !bVar4) & 0xffffffff;
}


