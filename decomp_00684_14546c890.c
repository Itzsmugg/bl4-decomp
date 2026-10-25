// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14546c890 FUN_14546c890 body=18 status=ok
// SIG undefined FUN_14546c890(void)

void FUN_14546c890(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (0x60 < *(int *)(param_1 + 0x68)) {
    iVar1 = 0x60;
  }
  FUN_14546ce00(param_1,iVar1);
  return;
}



// FUNCTION 14546c8b0 FUN_14546c8b0 body=439 status=ok
// SIG undefined FUN_14546c8b0(void)

void FUN_14546c8b0(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  
  pvVar3 = *(void **)(param_1 + 0xe);
  iVar2 = 0;
  pvVar5 = *(void **)(param_2 + 0x38);
  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x26) & 8) == 0) {
    if (0 < param_1[1]) {
      do {
        memcpy(pvVar5,pvVar3,(longlong)*param_1);
        iVar1 = iVar1 + 1;
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)param_1[4]);
        pvVar5 = (void *)((longlong)pvVar5 + (longlong)*(int *)(param_2 + 0x10));
      } while (iVar1 < param_1[1]);
    }
    iVar1 = 0;
    pvVar3 = *(void **)(param_1 + 0x10);
    pvVar5 = *(void **)(param_2 + 0x40);
    if (0 < param_1[6]) {
      do {
        memcpy(pvVar5,pvVar3,(longlong)param_1[5]);
        iVar1 = iVar1 + 1;
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)param_1[9]);
        pvVar5 = (void *)((longlong)pvVar5 + (longlong)*(int *)(param_2 + 0x24));
      } while (iVar1 < param_1[6]);
      pvVar3 = *(void **)(param_1 + 0x12);
      pvVar5 = *(void **)(param_2 + 0x48);
      if (0 < param_1[6]) {
        do {
          memcpy(pvVar5,pvVar3,(longlong)param_1[5]);
          iVar2 = iVar2 + 1;
          pvVar3 = (void *)((longlong)pvVar3 + (longlong)param_1[9]);
          pvVar5 = (void *)((longlong)pvVar5 + (longlong)*(int *)(param_2 + 0x24));
        } while (iVar2 < param_1[6]);
      }
    }
  }
  else {
    if (0 < param_1[1]) {
      do {
        memcpy((void *)((longlong)pvVar5 * 2),(void *)((longlong)pvVar3 * 2),(longlong)*param_1 * 2)
        ;
        iVar1 = iVar1 + 1;
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)param_1[4]);
        pvVar5 = (void *)((longlong)pvVar5 + (longlong)*(int *)(param_2 + 0x10));
      } while (iVar1 < param_1[1]);
    }
    iVar1 = 0;
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar6 = *(longlong *)(param_2 + 0x40);
    if (0 < param_1[6]) {
      do {
        memcpy((void *)(lVar6 * 2),(void *)(lVar4 * 2),(longlong)param_1[5] * 2);
        iVar1 = iVar1 + 1;
        lVar4 = lVar4 + param_1[9];
        lVar6 = lVar6 + *(int *)(param_2 + 0x24);
      } while (iVar1 < param_1[6]);
      lVar4 = *(longlong *)(param_1 + 0x12);
      lVar6 = *(longlong *)(param_2 + 0x48);
      if (0 < param_1[6]) {
        do {
          memcpy((void *)(lVar6 * 2),(void *)(lVar4 * 2),(longlong)param_1[5] * 2);
          iVar2 = iVar2 + 1;
          lVar4 = lVar4 + param_1[9];
          lVar6 = lVar6 + *(int *)(param_2 + 0x24);
        } while (iVar2 < param_1[6]);
      }
    }
  }
  FUN_14546ce00(param_2,*(undefined4 *)(param_2 + 0x68));
  return;
}



// FUNCTION 14546ca70 FUN_14546ca70 body=174 status=ok
// SIG undefined FUN_14546ca70(void)

void FUN_14546ca70(int *param_1,longlong param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 0xe);
  iVar2 = 0;
  pvVar3 = *(void **)(param_2 + 0x38);
  if ((*(byte *)(param_1 + 0x26) & 8) == 0) {
    if (0 < param_1[1]) {
      do {
        memcpy(pvVar3,pvVar1,(longlong)*param_1);
        iVar2 = iVar2 + 1;
        pvVar1 = (void *)((longlong)pvVar1 + (longlong)param_1[4]);
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)*(int *)(param_2 + 0x10));
      } while (iVar2 < param_1[1]);
    }
  }
  else {
    pvVar1 = (void *)((longlong)pvVar1 * 2);
    pvVar3 = (void *)((longlong)pvVar3 * 2);
    if (0 < param_1[1]) {
      do {
        memcpy(pvVar3,pvVar1,(longlong)*param_1 * 2);
        iVar2 = iVar2 + 1;
        pvVar1 = (void *)((longlong)pvVar1 + (longlong)param_1[4] * 2);
        pvVar3 = (void *)((longlong)pvVar3 + (longlong)*(int *)(param_2 + 0x10) * 2);
      } while (iVar2 < param_1[1]);
    }
  }
  return;
}



// FUNCTION 14546cb20 FUN_14546cb20 body=332 status=ok
// SIG undefined FUN_14546cb20(void)

void FUN_14546cb20(longlong param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,int param_8)

{
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  size_t _Size;
  size_t _Size_00;
  void *_Src;
  
  _Size = (size_t)param_6;
  _Src = (void *)(param_1 - _Size);
  lVar2 = (longlong)param_2;
  if (0 < (int)param_4) {
    uVar3 = (ulonglong)param_4;
    pvVar1 = _Src;
    do {
      memset(pvVar1,(uint)*(byte *)((longlong)pvVar1 + _Size),_Size);
      memset((void *)(((param_3 + param_1) - (longlong)_Src) + (longlong)pvVar1),
             (uint)*(byte *)(((param_3 + param_1 + -1) - (longlong)_Src) + (longlong)pvVar1),
             (longlong)param_8);
      pvVar1 = (void *)((longlong)pvVar1 + lVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  _Size_00 = (size_t)(param_3 + param_6 + param_8);
  _Dst = (void *)(((longlong)(int)-(param_2 * param_5) - _Size) + param_1);
  pvVar1 = (void *)(((longlong)(int)(param_2 * param_4) - _Size) + param_1);
  if (0 < (int)param_5) {
    uVar3 = (ulonglong)param_5;
    do {
      memcpy(_Dst,_Src,_Size_00);
      _Dst = (void *)((longlong)_Dst + lVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (0 < (int)param_7) {
    uVar3 = (ulonglong)param_7;
    do {
      memcpy(pvVar1,(void *)(((longlong)(int)((param_4 - 1) * param_2) - _Size) + param_1),_Size_00)
      ;
      pvVar1 = (void *)((longlong)pvVar1 + lVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 14546cc70 FUN_14546cc70 body=388 status=ok
// SIG undefined FUN_14546cc70(void)

void FUN_14546cc70(longlong param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,int param_8)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  void *_Dst;
  ulonglong uVar5;
  undefined2 *puVar6;
  void *_Dst_00;
  ulonglong uVar7;
  undefined2 *_Src;
  longlong lVar8;
  
  uVar5 = (ulonglong)param_6;
  param_1 = param_1 * 2;
  _Src = (undefined2 *)(param_1 + uVar5 * -2);
  lVar8 = (longlong)param_3 * 2 + param_1;
  if (0 < (int)param_4) {
    uVar7 = (ulonglong)param_4;
    puVar4 = _Src;
    do {
      if (uVar5 != 0) {
        uVar1 = puVar4[uVar5];
        puVar6 = puVar4;
        for (uVar2 = uVar5 & 0x7fffffffffffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        }
      }
      if ((longlong)param_8 != 0) {
        uVar1 = *(undefined2 *)(((lVar8 + -2) - (longlong)_Src) + (longlong)puVar4);
        puVar6 = (undefined2 *)((lVar8 - (longlong)_Src) + (longlong)puVar4);
        for (lVar3 = (longlong)param_8; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar4 = puVar4 + param_2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar8 = (longlong)param_2 * 2;
  _Dst = (void *)(((longlong)(int)-(param_2 * param_5) - uVar5) * 2 + param_1);
  _Dst_00 = (void *)(((longlong)(int)(param_2 * param_4) - uVar5) * 2 + param_1);
  lVar3 = (longlong)(param_3 + param_6 + param_8);
  if (0 < (int)param_5) {
    uVar7 = (ulonglong)param_5;
    do {
      memcpy(_Dst,_Src,lVar3 * 2);
      _Dst = (void *)((longlong)_Dst + lVar8);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (0 < (int)param_7) {
    uVar7 = (ulonglong)param_7;
    do {
      memcpy(_Dst_00,(void *)(((longlong)(int)((param_4 - 1) * param_2) - uVar5) * 2 + param_1),
             lVar3 * 2);
      _Dst_00 = (void *)((longlong)_Dst_00 + lVar8);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 14546ce00 FUN_14546ce00 body=333 status=ok
// SIG undefined FUN_14546ce00(void)

void FUN_14546ce00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[7];
  iVar2 = param_1[8];
  iVar3 = param_2 >> (param_1[6] < param_1[1]);
  iVar6 = param_2 >> (param_1[5] < *param_1);
  iVar5 = (param_1[6] - iVar2) + iVar3;
  iVar4 = (param_1[5] - iVar1) + iVar6;
  if ((*(byte *)(param_1 + 0x26) & 8) == 0) {
    FUN_14546cb20(*(undefined8 *)(param_1 + 0xe),param_1[4],param_1[2],param_1[3],param_2,param_2,
                  (param_1[1] - param_1[3]) + param_2,(*param_1 - param_1[2]) + param_2);
    FUN_14546cb20(*(undefined8 *)(param_1 + 0x10),param_1[9],iVar1,iVar2,iVar3,iVar6,iVar5,iVar4);
    FUN_14546cb20(*(undefined8 *)(param_1 + 0x12),param_1[9],iVar1,iVar2,iVar3,iVar6,iVar5,iVar4);
  }
  else {
    FUN_14546cc70();
    FUN_14546cc70(*(undefined8 *)(param_1 + 0x10),param_1[9],iVar1,iVar2,iVar3,iVar6,iVar5,iVar4);
    FUN_14546cc70(*(undefined8 *)(param_1 + 0x12),param_1[9],iVar1,iVar2,iVar3,iVar6,iVar5,iVar4);
  }
  return;
}



// FUNCTION 14546cf50 FUN_14546cf50 body=259 status=ok
// SIG undefined FUN_14546cf50(void)

void FUN_14546cf50(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5
                  ,ushort *param_6)

{
  if (*param_6 != 0) {
    if ((*param_6 & 0xfefe) == 0) {
      FUN_142722010();
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_6[1] != 0) {
    if ((param_6[1] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x40,param_2,param_3 + param_5 * 4,param_5);
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_6[2] != 0) {
    if ((param_6[2] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x80,param_2,param_4,param_5);
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_6[3] != 0) {
    if ((param_6[3] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0xc0,param_2,param_4 + param_5 * 4,param_5);
    }
    else {
      FUN_1427220d1();
    }
  }
  return;
}



// FUNCTION 14546d060 FUN_14546d060 body=440 status=ok
// SIG undefined FUN_14546d060(void)

void FUN_14546d060(longlong param_1,undefined8 param_2,longlong param_3,int param_4,ushort *param_5)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_4 * 4);
  if (*param_5 != 0) {
    if ((*param_5 & 0xfefe) == 0) {
      FUN_142722010();
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_5[1] != 0) {
    if ((param_5[1] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x40,param_2,param_3 + 8,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  param_3 = param_3 + lVar1;
  if (param_5[2] != 0) {
    if ((param_5[2] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x80,param_2,param_3,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_5[3] != 0) {
    if ((param_5[3] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0xc0,param_2,param_3 + 8,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  param_3 = param_3 + lVar1;
  if (param_5[4] != 0) {
    if ((param_5[4] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x100,param_2,param_3,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_5[5] != 0) {
    if ((param_5[5] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x140,param_2,param_3 + 8,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_5[6] != 0) {
    if ((param_5[6] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x180,param_2,param_3 + lVar1,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  if (param_5[7] != 0) {
    if ((param_5[7] & 0xfefe) == 0) {
      FUN_142722010(param_1 + 0x1c0,param_2,param_3 + lVar1 + 8,param_4);
    }
    else {
      FUN_1427220d1();
    }
  }
  return;
}



// FUNCTION 14546d220 FUN_14546d220 body=15 status=ok
// SIG undefined FUN_14546d220(void)

void FUN_14546d220(undefined8 *param_1,undefined8 param_2)

{
  FUN_1426a3bf0(*param_1,param_1[1],param_2);
  return;
}



// FUNCTION 14546d230 FUN_14546d230 body=131 status=ok
// SIG undefined FUN_14546d230(void)

void FUN_14546d230(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  int param_5,longlong param_6)

{
  FUN_142722720(param_1,param_4,*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x10),
                *(undefined8 *)(param_6 + 0x18),2);
  if (param_2 != 0) {
    FUN_1426a3e00(param_5 * 4 + param_2,param_5,*(undefined8 *)(param_6 + 8),
                  *(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x18),
                  param_5 * 4 + param_3);
  }
  return;
}



// FUNCTION 14546d2c0 FUN_14546d2c0 body=122 status=ok
// SIG undefined FUN_14546d2c0(void)

void FUN_14546d2c0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,longlong param_6)

{
  FUN_142722dea(param_1,param_4,*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x10),
                *(undefined8 *)(param_6 + 0x18),2);
  if (param_2 != 0) {
    FUN_1426a47ad(param_2 + 4,param_5,*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x10),
                  *(undefined8 *)(param_6 + 0x18),param_3 + 4);
  }
  return;
}



// FUNCTION 14546d340 FUN_14546d340 body=107 status=ok
// SIG undefined FUN_14546d340(void)

void FUN_14546d340(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  FUN_1426a40e7(param_1,param_4,*param_6,param_6[2],param_6[3]);
  if (param_2 != 0) {
    FUN_1426a4413(param_2,param_5,*param_6,param_6[2],param_6[3],param_3);
  }
  return;
}



// FUNCTION 14546d3b0 FUN_14546d3b0 body=107 status=ok
// SIG undefined FUN_14546d3b0(void)

void FUN_14546d3b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  FUN_1426a4c06(param_1,param_4,*param_6,param_6[2],param_6[3]);
  if (param_2 != 0) {
    FUN_1426a5165(param_2,param_5,*param_6,param_6[2],param_6[3],param_3);
  }
  return;
}



// FUNCTION 14546d420 FUN_14546d420 body=101 status=ok
// SIG undefined FUN_14546d420(void)

void FUN_14546d420(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_1426a56cb(param_2 * 4 + param_1);
  FUN_1426a56cb(param_2 * 8 + param_1,param_2,param_3);
  FUN_1426a56cb(param_2 * 0xc + param_1,param_2,param_3);
  return;
}



// FUNCTION 14546d490 FUN_14546d490 body=75 status=ok
// SIG undefined FUN_14546d490(void)

void FUN_14546d490(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1426a5813(param_1 + 4);
  FUN_1426a5813(param_1 + 8,param_2,param_3);
  FUN_1426a5813(param_1 + 0xc,param_2,param_3);
  return;
}



// FUNCTION 14546d4e0 FUN_14546d4e0 body=109 status=ok
// SIG undefined FUN_14546d4e0(void)

void FUN_14546d4e0(short *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(*param_1 + 3 >> 3);
  *param_2 = uVar1;
  param_2[0x10] = uVar1;
  param_2[0x20] = uVar1;
  param_2[0x30] = uVar1;
  param_2[0x40] = uVar1;
  param_2[0x50] = uVar1;
  param_2[0x60] = uVar1;
  param_2[0x70] = uVar1;
  param_2[0x80] = uVar1;
  param_2[0x90] = uVar1;
  param_2[0xa0] = uVar1;
  param_2[0xb0] = uVar1;
  param_2[0xc0] = uVar1;
  param_2[0xd0] = uVar1;
  param_2[0xe0] = uVar1;
  param_2[0xf0] = uVar1;
  return;
}



// FUNCTION 14546d550 FUN_14546d550 body=238 status=ok
// SIG undefined FUN_14546d550(void)

void FUN_14546d550(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(*(int *)(param_1 + 0x10) * 0xe + param_2);
  lVar1 = (longlong)(*(int *)(param_1 + 0x24) * 6);
  puVar3 = (undefined1 *)(lVar1 + param_3);
  puVar2 = (undefined1 *)(lVar1 + param_4);
  *puVar4 = puVar4[-1];
  *puVar3 = puVar3[-1];
  *puVar2 = puVar2[-1];
  puVar4[1] = puVar4[-1];
  puVar3[1] = puVar3[-1];
  puVar2[1] = puVar2[-1];
  puVar4[2] = puVar4[-1];
  puVar3[2] = puVar3[-1];
  puVar2[2] = puVar2[-1];
  puVar4[3] = puVar4[-1];
  puVar3[3] = puVar3[-1];
  puVar2[3] = puVar2[-1];
  puVar3 = puVar3 + *(int *)(param_1 + 0x24);
  puVar2 = puVar2 + *(int *)(param_1 + 0x24);
  puVar4 = puVar4 + *(int *)(param_1 + 0x10);
  *puVar4 = puVar4[-1];
  *puVar3 = puVar3[-1];
  *puVar2 = puVar2[-1];
  puVar4[1] = puVar4[-1];
  puVar3[1] = puVar3[-1];
  puVar2[1] = puVar2[-1];
  puVar4[2] = puVar4[-1];
  puVar3[2] = puVar3[-1];
  puVar2[2] = puVar2[-1];
  puVar4[3] = puVar4[-1];
  puVar3[3] = puVar3[-1];
  puVar2[3] = puVar2[-1];
  return;
}



// FUNCTION 14546d640 FUN_14546d640 body=120 status=ok
// SIG undefined FUN_14546d640(void)

bool FUN_14546d640(longlong param_1,int param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = ((uint)((*(int *)(param_1 + 0x1c) + -1) * param_2) >> 8) + 1;
  if (*(int *)(param_1 + 0x18) < 0) {
    FUN_14559b3d0();
  }
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  uVar2 = (ulonglong)uVar4 << 0x38;
  bVar5 = uVar2 <= uVar3;
  if (bVar5) {
    uVar4 = *(int *)(param_1 + 0x1c) - uVar4;
    uVar3 = uVar3 - uVar2;
  }
  bVar1 = (&DAT_149dafd00)[uVar4 & 0xff];
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
  *(uint *)(param_1 + 0x1c) = uVar4 << (bVar1 & 0x1f);
  *(ulonglong *)(param_1 + 0x10) = uVar3 << (bVar1 & 0x3f);
  return bVar5;
}



// FUNCTION 14546d6c0 FUN_14546d6c0 body=45 status=ok
// SIG undefined FUN_14546d6c0(void)

void FUN_14546d6c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf70);
  puVar2 = *(undefined8 **)(param_1 + 0xf78);
  *puVar1 = 0;
  *puVar2 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xf20) + 3) == '\0') {
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



// FUNCTION 14546d6f0 FUN_14546d6f0 body=832 status=ok
// SIG undefined FUN_14546d6f0(void)

int FUN_14546d6f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  char *pcVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint uVar20;
  bool bVar22;
  ulonglong uVar21;
  
  uVar1 = *(undefined8 *)(param_2 + 0xfd8);
  lVar2 = *(longlong *)(param_2 + 0xf70);
  uVar14 = 0;
  lVar3 = *(longlong *)(param_2 + 0xf78);
  bVar22 = *(char *)(*(longlong *)(param_2 + 0xf20) + 3) != '\0';
  if (bVar22) {
    lVar12 = 0x359d;
    uVar21 = uVar14;
  }
  else {
    iVar5 = FUN_14546da30(uVar1,param_1 + 0x338d,
                          (int)*(char *)(lVar3 + 8) + (int)*(char *)(lVar2 + 8),0,param_2 + 0x480);
    *(bool *)(lVar3 + 8) = 0 < iVar5;
    *(bool *)(lVar2 + 8) = 0 < iVar5;
    lVar12 = 0x3285;
    *(char *)(param_2 + 0x7d8) = (char)iVar5;
    uVar21 = (ulonglong)(iVar5 - 0x10);
  }
  bVar22 = !bVar22;
  lVar18 = 0x10;
  lVar4 = param_2 + 0x180;
  puVar19 = (undefined1 *)(param_2 + 0x7c0);
  do {
    lVar15 = lVar4;
    pcVar16 = (char *)((ulonglong)((uint)uVar14 & 3) + lVar2);
    pcVar17 = (char *)((ulonglong)((uint)((longlong)uVar14 >> 2) & 3) + lVar3);
    iVar5 = FUN_14546da30(uVar1,param_1 + lVar12,(int)*pcVar17 + (int)*pcVar16,bVar22,lVar15);
    iVar13 = (uint)bVar22 + iVar5;
    *pcVar17 = 0 < iVar5;
    uVar20 = (int)uVar21 + iVar13;
    uVar21 = (ulonglong)uVar20;
    uVar14 = uVar14 + 1;
    *pcVar16 = 0 < iVar5;
    *puVar19 = (char)iVar13;
    lVar18 = lVar18 + -1;
    lVar4 = lVar15 + 0x20;
    puVar19 = puVar19 + 1;
  } while (lVar18 != 0);
  param_1 = param_1 + 0x3495;
  iVar5 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar2 + 4) + (int)*(char *)(lVar3 + 4),0,
                        lVar15 + 0x20);
  *(bool *)(lVar3 + 4) = 0 < iVar5;
  *(bool *)(lVar2 + 4) = 0 < iVar5;
  *(char *)(param_2 + 2000) = (char)iVar5;
  iVar13 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar2 + 5) + (int)*(char *)(lVar3 + 4),0,
                         lVar15 + 0x40);
  *(bool *)(lVar3 + 4) = 0 < iVar13;
  *(bool *)(lVar2 + 5) = 0 < iVar13;
  *(char *)(param_2 + 0x7d1) = (char)iVar13;
  iVar6 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar2 + 4) + (int)*(char *)(lVar3 + 5),0,
                        lVar15 + 0x60);
  *(bool *)(lVar3 + 5) = 0 < iVar6;
  *(bool *)(lVar2 + 4) = 0 < iVar6;
  *(char *)(param_2 + 0x7d2) = (char)iVar6;
  iVar7 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar3 + 5) + (int)*(char *)(lVar2 + 5),0,
                        lVar15 + 0x80);
  *(bool *)(lVar3 + 5) = 0 < iVar7;
  *(bool *)(lVar2 + 5) = 0 < iVar7;
  *(char *)(param_2 + 0x7d3) = (char)iVar7;
  iVar8 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar3 + 6) + (int)*(char *)(lVar2 + 6),0,
                        lVar15 + 0xa0);
  *(bool *)(lVar3 + 6) = 0 < iVar8;
  *(bool *)(lVar2 + 6) = 0 < iVar8;
  *(char *)(param_2 + 0x7d4) = (char)iVar8;
  iVar9 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar3 + 6) + (int)*(char *)(lVar2 + 7),0,
                        lVar15 + 0xc0);
  *(bool *)(lVar3 + 6) = 0 < iVar9;
  *(bool *)(lVar2 + 7) = 0 < iVar9;
  *(char *)(param_2 + 0x7d5) = (char)iVar9;
  iVar10 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar3 + 7) + (int)*(char *)(lVar2 + 6),0,
                         lVar15 + 0xe0);
  *(bool *)(lVar3 + 7) = 0 < iVar10;
  *(bool *)(lVar2 + 6) = 0 < iVar10;
  *(char *)(param_2 + 0x7d6) = (char)iVar10;
  iVar11 = FUN_14546da30(uVar1,param_1,(int)*(char *)(lVar3 + 7) + (int)*(char *)(lVar2 + 7),0,
                         lVar15 + 0x100);
  *(bool *)(lVar3 + 7) = 0 < iVar11;
  *(bool *)(lVar2 + 7) = 0 < iVar11;
  *(char *)(param_2 + 0x7d7) = (char)iVar11;
  return iVar11 + uVar20 + iVar5 + iVar13 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
}



// FUNCTION 14546da30 FUN_14546da30 body=749 status=ok
// SIG undefined FUN_14546da30(void)

ulonglong FUN_14546da30(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  uVar15 = (ulonglong)param_4;
  puVar10 = (undefined1 *)((uVar15 * 3 + (longlong)param_3) * 0xb + param_2);
  uVar7 = FUN_14546d640(param_1,*puVar10);
  uVar9 = uVar15;
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  do {
    uVar13 = (int)uVar15 + 1;
    uVar7 = uVar9 + 1;
    uVar14 = ((uint)(byte)puVar10[1] * (*(int *)(param_1 + 0x1c) + -1) >> 8) + 1;
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_14559b3d0(param_1);
    }
    uVar15 = *(ulonglong *)(param_1 + 0x10);
    uVar8 = (ulonglong)uVar14 << 0x38;
    bVar16 = uVar8 <= uVar15;
    if (bVar16) {
      uVar14 = *(int *)(param_1 + 0x1c) - uVar14;
      uVar15 = uVar15 - uVar8;
    }
    bVar1 = (&DAT_149dafd00)[uVar14 & 0xff];
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
    *(ulonglong *)(param_1 + 0x10) = uVar15 << (bVar1 & 0x3f);
    *(uint *)(param_1 + 0x1c) = uVar14 << (bVar1 & 0x1f);
    if (bVar16) {
      iVar5 = FUN_14546d640(param_1,puVar10[2]);
      if (iVar5 == 0) {
        sVar12 = 1;
        lVar11 = (ulonglong)(byte)(&DAT_149d50e41)[uVar9] * 0x21 + 0xb;
      }
      else {
        iVar5 = FUN_14546d640(param_1,puVar10[3]);
        if (iVar5 == 0) {
          iVar5 = FUN_14546d640(param_1,puVar10[4]);
          if (iVar5 == 0) {
            sVar12 = 2;
          }
          else {
            sVar12 = FUN_14546d640(param_1,puVar10[5]);
            sVar12 = sVar12 + 3;
          }
        }
        else {
          iVar5 = FUN_14546d640(param_1,puVar10[6]);
          if (iVar5 == 0) {
            iVar5 = FUN_14546d640(param_1,puVar10[7]);
            if (iVar5 == 0) {
              sVar12 = FUN_14546d640(param_1,0x9f);
              sVar12 = sVar12 + 5;
            }
            else {
              sVar4 = FUN_14546d640(param_1,0xa5);
              sVar12 = FUN_14546d640(param_1,0x91);
              sVar12 = sVar4 * 2 + 7 + sVar12;
            }
          }
          else {
            iVar5 = FUN_14546d640(param_1,puVar10[8]);
            iVar6 = FUN_14546d640(param_1,puVar10[(longlong)iVar5 + 9]);
            sVar12 = 0;
            iVar6 = iVar6 + iVar5 * 2;
            pcVar3 = (&PTR_DAT_149d50e58)[iVar6];
            cVar2 = *pcVar3;
            while (cVar2 != '\0') {
              sVar4 = FUN_14546d640(param_1,cVar2);
              pcVar3 = pcVar3 + 1;
              sVar12 = sVar4 + sVar12 * 2;
              cVar2 = *pcVar3;
            }
            sVar12 = (short)(8 << ((byte)iVar6 & 0x1f)) + 3 + sVar12;
          }
        }
        lVar11 = (ulonglong)(byte)(&DAT_149d50e41)[uVar9] * 0x21 + 0x16;
      }
      bVar1 = (&DAT_149d50e78)[uVar9];
      puVar10 = (undefined1 *)(lVar11 + param_2);
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar6 = *(int *)(param_1 + 0x18);
      uVar14 = iVar5 + 1U >> 1;
      uVar9 = (ulonglong)uVar14;
      if (iVar6 < 0) {
        FUN_14559b3d0(param_1);
        iVar5 = *(int *)(param_1 + 0x1c);
        iVar6 = *(int *)(param_1 + 0x18);
      }
      uVar15 = *(ulonglong *)(param_1 + 0x10);
      if (uVar9 << 0x38 <= uVar15) {
        uVar14 = iVar5 - uVar14;
        sVar12 = -sVar12;
        uVar15 = uVar15 - (uVar9 << 0x38);
      }
      *(uint *)(param_1 + 0x1c) = uVar14 * 2;
      *(ulonglong *)(param_1 + 0x10) = uVar15 * 2;
      *(int *)(param_1 + 0x18) = iVar6 + -1;
      *(short *)(param_5 + (ulonglong)bVar1 * 2) = sVar12;
      if ((uVar7 == 0x10) || (iVar5 = FUN_14546d640(param_1,*puVar10), iVar5 == 0)) {
        return (ulonglong)uVar13;
      }
    }
    else {
      puVar10 = (undefined1 *)((ulonglong)(byte)(&DAT_149d50e41)[uVar9] * 0x21 + param_2);
    }
    uVar15 = (ulonglong)uVar13;
    uVar9 = uVar7;
    if (uVar7 == 0x10) {
      return 0x10;
    }
  } while( true );
}



// FUNCTION 14546dd20 FUN_14546dd20 body=150 status=ok
// SIG undefined FUN_14546dd20(void)

void FUN_14546dd20(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4,
                  undefined8 param_5,int param_6,undefined1 param_7)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_1d;
  undefined8 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_27 = param_2[param_3];
  local_26 = param_2[param_3 * 2];
  local_25 = param_2[param_3 * 3];
  local_1c = *param_1;
  local_1d = param_7;
  (**(code **)(&DAT_14c7fe270 + (longlong)param_4 * 8))
            (param_5,(longlong)param_6,&local_1c,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 14546ddd0 FUN_14546ddd0 body=141 status=ok
// SIG undefined FUN_14546ddd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14546ddd0(void)

{
  _DAT_14c7fe270 = &LAB_142721570;
  _DAT_14c7fe278 = &LAB_142721d70;
  _DAT_14c7fe280 = FUN_14541ec80;
  _DAT_14c7fe288 = FUN_14541e770;
  _DAT_14c7fe290 = FUN_14541e400;
  _DAT_14c7fe298 = FUN_14541e0c0;
  _DAT_14c7fe2a0 = FUN_14541df50;
  _DAT_14c7fe2a8 = FUN_14541e660;
  _DAT_14c7fe2b0 = DAT_14c7fbe20;
  _DAT_14c7fe2b8 = &LAB_1427214f0;
  return;
}



// FUNCTION 14546de60 FUN_14546de60 body=91 status=ok
// SIG undefined FUN_14546de60(void)

void FUN_14546de60(longlong param_1)

{
  if (**(char **)(param_1 + 0xf20) != '\t') {
    FUN_14546dec0(param_1,*(undefined8 *)(param_1 + 0xeb8),*(undefined8 *)(param_1 + 0xec0),
                  *(undefined8 *)(param_1 + 0xec8),*(undefined4 *)(param_1 + 0xe90),
                  *(undefined4 *)(param_1 + 0xea4));
    return;
  }
  FUN_14546e870();
  FUN_14546e450(param_1);
  return;
}



// FUNCTION 14546dec0 FUN_14546dec0 body=675 status=ok
// SIG undefined FUN_14546dec0(void)

void FUN_14546dec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 local_res8;
  
  iVar3 = *(int *)(param_1 + 0xdf0);
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0xf20) + 4);
  local_res8._0_2_ = (short)uVar5;
  local_res8._2_2_ = (ushort)(uVar5 >> 0x10);
  uVar4 = local_res8._2_2_;
  sVar2 = (short)local_res8;
  if (*(char *)(*(longlong *)(param_1 + 0xf20) + 10) != '\0') {
    if ((int)(short)local_res8._2_2_ < *(int *)(param_1 + 0xfa4) + -0x98) {
      uVar4 = (short)*(int *)(param_1 + 0xfa4) - 0x80;
      local_res8 = CONCAT22(uVar4,(short)local_res8);
      uVar5 = local_res8;
    }
    else if (*(int *)(param_1 + 0xfa8) + 0x90 < (int)(short)local_res8._2_2_) {
      uVar4 = (short)*(int *)(param_1 + 0xfa8) + 0x80;
      local_res8 = CONCAT22(uVar4,(short)local_res8);
      uVar5 = local_res8;
    }
    local_res8 = uVar5;
    if ((int)(short)local_res8 < *(int *)(param_1 + 0xfac) + -0x98) {
      sVar2 = (short)*(int *)(param_1 + 0xfac) + -0x80;
      local_res8 = CONCAT22(local_res8._2_2_,sVar2);
      uVar5 = local_res8;
    }
    else {
      uVar5 = local_res8;
      sVar2 = (short)local_res8;
      if (*(int *)(param_1 + 0xfb0) + 0x90 < (int)(short)local_res8) {
        sVar2 = (short)*(int *)(param_1 + 0xfb0) + 0x80;
        local_res8 = CONCAT22(local_res8._2_2_,sVar2);
        uVar5 = local_res8;
      }
    }
  }
  local_res8 = uVar5;
  lVar1 = ((longlong)(short)uVar4 >> 3) +
          (longlong)(((int)sVar2 >> 3) * iVar3) + *(longlong *)(param_1 + 0xe18);
  if ((local_res8 & 0x70007) == 0) {
    FUN_1427118a0(lVar1,iVar3,param_2,param_5);
  }
  else {
    (**(code **)(param_1 + 0xfd0))(lVar1,iVar3,uVar4 & 7,(int)sVar2 & 7,param_2,param_5);
  }
  uVar6 = (short)((sVar2 >> 0xf | 1U) + sVar2) / 2 & *(ushort *)(param_1 + 0xdd8);
  uVar4 = (short)(((short)uVar4 >> 0xf | 1U) + uVar4) / 2 & *(ushort *)(param_1 + 0xdd8);
  if ((*(int *)(param_1 + 0xfa4) + -0x98 <= (short)uVar4 * 2) &&
     ((short)uVar4 * 2 <= *(int *)(param_1 + 0xfa8) + 0x90)) {
    if ((*(int *)(param_1 + 0xfac) + -0x98 <= (short)uVar6 * 2) &&
       ((short)uVar6 * 2 <= *(int *)(param_1 + 0xfb0) + 0x90)) {
      iVar3 = iVar3 >> 1;
      lVar1 = (longlong)(((int)(short)uVar6 >> 3) * iVar3 + ((int)(short)uVar4 >> 3));
      lVar7 = *(longlong *)(param_1 + 0xe20) + lVar1;
      lVar1 = *(longlong *)(param_1 + 0xe28) + lVar1;
      if ((CONCAT22(uVar4,uVar6) & 0x70007) == 0) {
        FUN_1427119b0(lVar7,iVar3,param_3,param_6);
        FUN_1427119b0(lVar1,iVar3,param_4,param_6);
      }
      else {
        uVar5 = (int)(short)uVar6 & 7;
        uVar8 = (int)(short)uVar4 & 7;
        (**(code **)(param_1 + 0xfc8))(lVar7,iVar3,uVar8,uVar5,param_3,param_6);
        (**(code **)(param_1 + 0xfc8))(lVar1,iVar3,uVar8,uVar5,param_4,param_6);
      }
    }
  }
  return;
}



// FUNCTION 14546e170 FUN_14546e170 body=153 status=ok
// SIG undefined FUN_14546e170(void)

void FUN_14546e170(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,int param_6)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(short *)(param_2 + 0x30);
  uVar1 = *(ushort *)(param_2 + 0x32);
  lVar2 = (longlong)*(int *)(param_2 + 0x20) +
          ((longlong)(short)uVar1 >> 3) + param_5 + (longlong)(((int)uVar3 >> 3) * param_6);
  if (((uVar3 & 7) == 0) && ((uVar1 & 7) == 0)) {
    FUN_1427119b0(lVar2,param_6,param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014546e206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xfc8))(lVar2,param_6,uVar1 & 7,uVar3 & 7);
  return;
}



// FUNCTION 14546e210 FUN_14546e210 body=153 status=ok
// SIG undefined FUN_14546e210(void)

void FUN_14546e210(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,int param_6)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(short *)(param_2 + 0x30);
  uVar1 = *(ushort *)(param_2 + 0x32);
  lVar2 = (longlong)*(int *)(param_2 + 0x20) +
          ((longlong)(short)uVar1 >> 3) + param_5 + (longlong)(((int)uVar3 >> 3) * param_6);
  if (((uVar3 & 7) == 0) && ((uVar1 & 7) == 0)) {
    FUN_142711a2f(lVar2,param_6,param_3,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014546e2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xfc0))(lVar2,param_6,uVar1 & 7,uVar3 & 7);
  return;
}



// FUNCTION 14546e2b0 FUN_14546e2b0 body=282 status=ok
// SIG undefined FUN_14546e2b0(void)

void FUN_14546e2b0(longlong param_1,undefined1 *param_2,int param_3,longlong param_4,int param_5,
                  code *param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  uVar5 = (uint)*(short *)(param_1 + 0x30);
  uVar1 = *(ushort *)(param_1 + 0x32);
  puVar3 = (undefined1 *)
           ((longlong)*(int *)(param_1 + 0x20) +
           ((longlong)(short)uVar1 >> 3) + param_4 + (longlong)(((int)uVar5 >> 3) * param_5));
  if (((uVar5 & 7) == 0) && ((uVar1 & 7) == 0)) {
    lVar2 = (longlong)param_5;
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    puVar4 = puVar3 + lVar2;
    param_2[3] = puVar3[3];
    param_2 = param_2 + param_3;
    *param_2 = *puVar4;
    param_2[1] = puVar4[1];
    param_2[2] = puVar4[2];
    puVar3 = puVar4 + lVar2;
    param_2[3] = puVar4[3];
    param_2 = param_2 + param_3;
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    param_2 = param_2 + param_3;
    puVar3 = puVar3 + lVar2;
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    return;
  }
  (*param_6)(puVar3,param_5,uVar1 & 7,uVar5 & 7,param_2,param_3);
  return;
}



// FUNCTION 14546e3d0 FUN_14546e3d0 body=119 status=ok
// SIG undefined FUN_14546e3d0(void)

void FUN_14546e3d0(short *param_1,longlong param_2)

{
  short sVar1;
  
  if ((int)param_1[1] < *(int *)(param_2 + 0xfa4) + -0x98) {
    sVar1 = (short)*(int *)(param_2 + 0xfa4) + -0x80;
  }
  else {
    if ((int)param_1[1] <= *(int *)(param_2 + 0xfa8) + 0x90) goto LAB_14546e40f;
    sVar1 = (short)*(int *)(param_2 + 0xfa8) + 0x80;
  }
  param_1[1] = sVar1;
LAB_14546e40f:
  if ((int)*param_1 < *(int *)(param_2 + 0xfac) + -0x98) {
    *param_1 = (short)*(int *)(param_2 + 0xfac) + -0x80;
    return;
  }
  if (*(int *)(param_2 + 0xfb0) + 0x90 < (int)*param_1) {
    *param_1 = (short)*(int *)(param_2 + 0xfb0) + 0x80;
  }
  return;
}



// FUNCTION 14546e450 FUN_14546e450 body=1054 status=ok
// SIG undefined FUN_14546e450(void)

void FUN_14546e450(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = *(longlong *)(param_1 + 0xf20);
  puVar7 = (undefined4 *)(param_1 + 0x890);
  lVar4 = *(longlong *)(param_1 + 0xeb8);
  uVar5 = *(undefined8 *)(param_1 + 0xe18);
  if (*(byte *)(lVar11 + 8) < 3) {
    uVar1 = *(undefined4 *)(param_1 + 0xe90);
    *puVar7 = *(undefined4 *)(lVar11 + 0xc);
    *(undefined4 *)(param_1 + 0x900) = *(undefined4 *)(lVar11 + 0x14);
    *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(lVar11 + 0x2c);
    *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(lVar11 + 0x34);
    if (*(char *)(lVar11 + 10) != '\0') {
      FUN_14546e3d0(puVar7,param_1);
      FUN_14546e3d0(param_1 + 0x900,param_1);
      FUN_14546e3d0(param_1 + 0xa50,param_1);
      FUN_14546e3d0(param_1 + 0xac0,param_1);
    }
    FUN_14546e170(param_1,param_1 + 0x860,*(int *)(param_1 + 0x880) + lVar4,uVar1,uVar5,uVar1);
    FUN_14546e170(param_1,param_1 + 0x8d0,*(int *)(param_1 + 0x8f0) + lVar4,uVar1,uVar5,uVar1);
    FUN_14546e170(param_1,param_1 + 0xa20,*(int *)(param_1 + 0xa40) + lVar4,uVar1,uVar5,uVar1);
    FUN_14546e170(param_1,param_1 + 0xa90,*(int *)(param_1 + 0xab0) + lVar4,uVar1,uVar5,uVar1);
  }
  else {
    lVar11 = 0x10;
    piVar8 = (int *)(param_1 + 0x8b8);
    lVar6 = 8;
    do {
      uVar1 = *(undefined4 *)(param_1 + 0xe90);
      piVar8[-10] = *(int *)(lVar11 + -4 + *(longlong *)(param_1 + 0xf20));
      piVar8[4] = *(int *)(lVar11 + *(longlong *)(param_1 + 0xf20));
      if (*(char *)(*(longlong *)(param_1 + 0xf20) + 10) != '\0') {
        FUN_14546e3d0(puVar7,param_1);
        FUN_14546e3d0(puVar7 + 0xe,param_1);
      }
      if (piVar8[-10] == piVar8[4]) {
        FUN_14546e210(param_1,piVar8 + -0x16,piVar8[-0xe] + lVar4,uVar1,uVar5,uVar1);
      }
      else {
        FUN_14546e2b0(piVar8 + -0x16,piVar8[-0xe] + lVar4,uVar1,uVar5,uVar1,
                      *(undefined8 *)(param_1 + 0xfb8));
        FUN_14546e2b0(piVar8 + -8,*piVar8 + lVar4,uVar1,uVar5,uVar1,*(undefined8 *)(param_1 + 0xfb8)
                     );
      }
      puVar7 = puVar7 + 0x1c;
      lVar11 = lVar11 + 8;
      piVar8 = piVar8 + 0x1c;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar11 = *(longlong *)(param_1 + 0xec0);
  piVar8 = (int *)(param_1 + 0xc38);
  lVar4 = *(longlong *)(param_1 + 0xe20);
  lVar12 = 2;
  lVar6 = 2;
  do {
    uVar2 = piVar8[-10];
    iVar3 = *(int *)(param_1 + 0xea4);
    if (uVar2 == piVar8[4]) {
      lVar10 = piVar8[-0xe] + lVar11;
      lVar9 = ((longlong)(short)(uVar2 >> 0x10) >> 3) +
              (longlong)(((int)(short)uVar2 >> 3) * iVar3) + (longlong)piVar8[-0xe] + lVar4;
      if (((uVar2 & 7) == 0) && ((uVar2 >> 0x10 & 7) == 0)) {
        FUN_142711a2f(lVar9,iVar3,lVar10,iVar3);
      }
      else {
        (**(code **)(param_1 + 0xfc0))
                  (lVar9,iVar3,uVar2 >> 0x10 & 7,(int)(short)uVar2 & 7,lVar10,iVar3);
      }
    }
    else {
      FUN_14546e2b0(piVar8 + -0x16,piVar8[-0xe] + lVar11,iVar3,lVar4,iVar3,
                    *(undefined8 *)(param_1 + 0xfb8));
      FUN_14546e2b0(piVar8 + -8,*piVar8 + lVar11,iVar3,lVar4,iVar3,*(undefined8 *)(param_1 + 0xfb8))
      ;
    }
    piVar8 = piVar8 + 0x1c;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar11 = *(longlong *)(param_1 + 0xec8);
  piVar8 = (int *)(param_1 + 0xd18);
  lVar4 = *(longlong *)(param_1 + 0xe28);
  do {
    uVar2 = piVar8[-10];
    iVar3 = *(int *)(param_1 + 0xea4);
    if (uVar2 == piVar8[4]) {
      lVar6 = piVar8[-0xe] + lVar11;
      lVar10 = ((longlong)(short)(uVar2 >> 0x10) >> 3) +
               (longlong)(((int)(short)uVar2 >> 3) * iVar3) + (longlong)piVar8[-0xe] + lVar4;
      if (((uVar2 & 7) == 0) && ((uVar2 >> 0x10 & 7) == 0)) {
        FUN_142711a2f(lVar10,iVar3,lVar6,iVar3);
      }
      else {
        (**(code **)(param_1 + 0xfc0))
                  (lVar10,iVar3,uVar2 >> 0x10 & 7,(int)(short)uVar2 & 7,lVar6,iVar3);
      }
    }
    else {
      FUN_14546e2b0(piVar8 + -0x16,piVar8[-0xe] + lVar11,iVar3,lVar4,iVar3,
                    *(undefined8 *)(param_1 + 0xfb8));
      FUN_14546e2b0(piVar8 + -8,*piVar8 + lVar11,iVar3,lVar4,iVar3,*(undefined8 *)(param_1 + 0xfb8))
      ;
    }
    piVar8 = piVar8 + 0x1c;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}



// FUNCTION 14546e870 FUN_14546e870 body=720 status=ok
// SIG undefined FUN_14546e870(void)

void FUN_14546e870(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  ushort uVar7;
  
  lVar4 = 0;
  puVar6 = (ushort *)(param_1 + 0xc4a);
  lVar5 = 2;
  do {
    lVar1 = *(longlong *)(param_1 + 0xf20);
    iVar3 = (int)*(short *)(lVar4 + 0x1c + lVar1) + (int)*(short *)(lVar4 + 0x20 + lVar1) +
            (int)*(short *)(lVar4 + lVar1 + 0x10) + (int)*(short *)(lVar4 + lVar1 + 0xc);
    iVar3 = (iVar3 >> 0x1f) * 8 + 4 + iVar3;
    uVar7 = (ushort)((int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3) & *(ushort *)(param_1 + 0xdd8);
    puVar6[-0x1d] = uVar7;
    lVar1 = *(longlong *)(param_1 + 0xf20);
    iVar3 = (int)*(short *)(lVar4 + 0x1e + lVar1) + (int)*(short *)(lVar4 + lVar1 + 0x22) +
            (int)*(short *)(lVar4 + lVar1 + 0x12) + (int)*(short *)(lVar4 + 0xe + lVar1);
    iVar3 = (iVar3 >> 0x1f) * 8 + 4 + iVar3;
    uVar2 = (ushort)((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) & *(ushort *)(param_1 + 0xdd8);
    puVar6[-0x1c] = uVar2;
    if (*(char *)(*(longlong *)(param_1 + 0xf20) + 10) != '\0') {
      if ((short)uVar2 * 2 < *(int *)(param_1 + 0xfa4) + -0x98) {
        uVar2 = (ushort)(*(int *)(param_1 + 0xfa4) + -0x80 >> 1);
      }
      puVar6[-0x1c] = uVar2;
      if (*(int *)(param_1 + 0xfa8) + 0x90 < (short)uVar2 * 2) {
        uVar2 = (ushort)(*(int *)(param_1 + 0xfa8) + 0x80 >> 1);
      }
      puVar6[-0x1c] = uVar2;
      if ((short)uVar7 * 2 < *(int *)(param_1 + 0xfac) + -0x98) {
        uVar7 = (ushort)(*(int *)(param_1 + 0xfac) + -0x80 >> 1);
      }
      puVar6[-0x1d] = uVar7;
      if (*(int *)(param_1 + 0xfb0) + 0x90 < (short)uVar7 * 2) {
        uVar7 = (ushort)(*(int *)(param_1 + 0xfb0) + 0x80 >> 1);
      }
      puVar6[-0x1d] = uVar7;
    }
    *(undefined4 *)(puVar6 + 0x53) = *(undefined4 *)(puVar6 + -0x1d);
    lVar1 = *(longlong *)(param_1 + 0xf20);
    iVar3 = (int)*(short *)(lVar1 + 0x24 + lVar4) + (int)*(short *)(lVar4 + 0x28 + lVar1) +
            (int)*(short *)(lVar4 + lVar1 + 0x18) + (int)*(short *)(lVar4 + lVar1 + 0x14);
    iVar3 = (iVar3 >> 0x1f) * 8 + 4 + iVar3;
    uVar7 = (ushort)((int)((iVar3 >> 0x1f & 7U) + iVar3) >> 3) & *(ushort *)(param_1 + 0xdd8);
    puVar6[-1] = uVar7;
    lVar1 = *(longlong *)(param_1 + 0xf20);
    iVar3 = (int)*(short *)(lVar1 + 0x26 + lVar4) + (int)*(short *)(lVar4 + lVar1 + 0x2a) +
            (int)*(short *)(lVar4 + lVar1 + 0x1a) + (int)*(short *)(lVar4 + 0x16 + lVar1);
    iVar3 = (iVar3 >> 0x1f) * 8 + 4 + iVar3;
    uVar2 = (ushort)((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) & *(ushort *)(param_1 + 0xdd8);
    *puVar6 = uVar2;
    if (*(char *)(*(longlong *)(param_1 + 0xf20) + 10) != '\0') {
      if ((short)uVar2 * 2 < *(int *)(param_1 + 0xfa4) + -0x98) {
        uVar2 = (ushort)(*(int *)(param_1 + 0xfa4) + -0x80 >> 1);
      }
      *puVar6 = uVar2;
      if (*(int *)(param_1 + 0xfa8) + 0x90 < (short)uVar2 * 2) {
        uVar2 = (ushort)(*(int *)(param_1 + 0xfa8) + 0x80 >> 1);
      }
      *puVar6 = uVar2;
      if ((short)uVar7 * 2 < *(int *)(param_1 + 0xfac) + -0x98) {
        uVar7 = (ushort)(*(int *)(param_1 + 0xfac) + -0x80 >> 1);
      }
      puVar6[-1] = uVar7;
      if (*(int *)(param_1 + 0xfb0) + 0x90 < (short)uVar7 * 2) {
        uVar7 = (ushort)(*(int *)(param_1 + 0xfb0) + 0x80 >> 1);
      }
      puVar6[-1] = uVar7;
    }
    lVar4 = lVar4 + 0x20;
    *(undefined4 *)(puVar6 + 0x6f) = *(undefined4 *)(puVar6 + -1);
    puVar6 = puVar6 + 0x38;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 14546eb40 FUN_14546eb40 body=112 status=ok
// SIG undefined FUN_14546eb40(void)

void FUN_14546eb40(int *param_1)

{
  memset((void *)((*(longlong *)(param_1 + 0xe) - (longlong)param_1[4]) + -1),0x7f,
         (longlong)(*param_1 + 5));
  memset((void *)((*(longlong *)(param_1 + 0x10) - (longlong)param_1[9]) + -1),0x7f,
         (longlong)(param_1[5] + 5));
  memset((void *)((*(longlong *)(param_1 + 0x12) - (longlong)param_1[9]) + -1),0x7f,
         (longlong)(param_1[5] + 5));
  return;
}



// FUNCTION 14546ebb0 FUN_14546ebb0 body=187 status=ok
// SIG undefined FUN_14546ebb0(void)

bool FUN_14546ebb0(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_3 != 0) && (param_2 == 0)) {
    return true;
  }
  param_1[2] = param_2 + param_3;
  param_1[5] = param_5;
  param_1[3] = param_2;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xfffffff8;
  *(undefined4 *)(param_1 + 1) = 0xff;
  param_1[4] = param_4;
  FUN_14546ec70();
  uVar4 = ((int)param_1[1] + 1U & 0x1ffffff) >> 1;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14546ec70(param_1);
  }
  uVar3 = *param_1;
  uVar2 = (ulonglong)uVar4 << 0x38;
  bVar5 = uVar2 <= uVar3;
  if (bVar5) {
    uVar4 = (int)param_1[1] - uVar4;
    uVar3 = uVar3 - uVar2;
  }
  bVar1 = (&DAT_149d54800)[uVar4 & 0xff];
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
  *(uint *)(param_1 + 1) = uVar4 << (bVar1 & 0x1f);
  *param_1 = uVar3 << (bVar1 & 0x3f);
  return bVar5;
}



// FUNCTION 14546ec70 FUN_14546ec70 body=267 status=ok
// SIG undefined FUN_14546ec70(void)

void FUN_14546ec70(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar4 = (ulonglong *)param_1[3];
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  uVar9 = param_1[2] - (longlong)puVar4;
  uVar6 = 0x30 - iVar2;
  uVar7 = *param_1;
  uVar1 = uVar9 * 8;
  if ((code *)param_1[4] != (code *)0x0) {
    uVar10 = uVar9 & 0xffffffff;
    if (9 < uVar9) {
      uVar10 = 9;
    }
    (*(code *)param_1[4])(param_1[5],puVar4,param_1 + 6,uVar10);
    puVar4 = param_1 + 6;
  }
  if (uVar1 < 0x41) {
    iVar3 = (uVar6 - (int)uVar1) + 8;
    iVar8 = iVar2 + 0x40000000;
    puVar5 = puVar4;
    if (iVar3 < 0) {
      iVar3 = 0;
      iVar8 = iVar2;
    }
    else if (uVar1 == 0) goto LAB_14546ed59;
    for (; iVar3 <= (int)uVar6; uVar6 = uVar6 - 8) {
      uVar7 = uVar7 | (ulonglong)(byte)*puVar5 << ((byte)uVar6 & 0x3f);
      puVar5 = (ulonglong *)((longlong)puVar5 + 1);
      iVar8 = iVar8 + 8;
    }
  }
  else {
    uVar1 = *puVar4;
    iVar3 = (uVar6 & 0xfffffff8) + 8;
    iVar8 = iVar2 + iVar3;
    uVar7 = ((uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
              | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18
              | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38) >> (0x40U - (char)iVar3 & 0x3f)) <<
            ((byte)uVar6 & 7) | *param_1;
    puVar5 = (ulonglong *)((longlong)puVar4 + ((longlong)iVar3 >> 3));
  }
LAB_14546ed59:
  param_1[3] = (ulonglong)((longlong)puVar5 + (param_1[3] - (longlong)puVar4));
  *param_1 = uVar7;
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  return;
}



// FUNCTION 14546ed80 FUN_14546ed80 body=33 status=ok
// SIG undefined FUN_14546ed80(void)

undefined8 FUN_14546ed80(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  while ((8 < (int)uVar1 && (uVar1 < 0x40))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
    uVar1 = uVar1 - 8;
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 14546edb0 FUN_14546edb0 body=44 status=ok
// SIG undefined FUN_14546edb0(void)

void FUN_14546edb0(longlong param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)(iVar1 == 0);
  }
  return;
}



// FUNCTION 14546edf0 FUN_14546edf0 body=80 status=ok
// SIG undefined FUN_14546edf0(void)

bool FUN_14546edf0(undefined8 *param_1)

{
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    if (1 < *(int *)(param_1 + 1)) {
      do {
        SleepConditionVariableCS
                  ((PCONDITION_VARIABLE)((PCRITICAL_SECTION)*param_1 + 1),
                   (PCRITICAL_SECTION)*param_1,0xffffffff);
      } while (*(int *)(param_1 + 1) != 1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  }
  return *(int *)(param_1 + 5) == 0;
}



// FUNCTION 14546ee40 FUN_14546ee40 body=316 status=ok
// SIG undefined FUN_14546ee40(void)

bool FUN_14546ee40(longlong *param_1)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE hThread;
  bool bVar2;
  
  bVar2 = true;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0 < (int)param_1[1]) {
    if (1 < (int)param_1[1]) {
      if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
        if (1 < (int)param_1[1]) {
          do {
            SleepConditionVariableCS
                      ((PCONDITION_VARIABLE)((PCRITICAL_SECTION)*param_1 + 1),
                       (PCRITICAL_SECTION)*param_1,0xffffffff);
          } while ((int)param_1[1] != 1);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
      }
      bVar2 = (int)param_1[5] == 0;
    }
    return bVar2;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14518efb0(1,0x38);
  *param_1 = (longlong)lpCriticalSection;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionEx(lpCriticalSection,0,0);
    InitializeConditionVariable((PCONDITION_VARIABLE)(*param_1 + 0x28));
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    lVar1 = *param_1;
    hThread = (HANDLE)_beginthreadex((void *)0x0,0,FUN_14546f0b0,param_1,0,(uint *)0x0);
    *(HANDLE *)(lVar1 + 0x30) = hThread;
    if (hThread != (HANDLE)0x0) {
      SetThreadPriority(hThread,1);
      *(undefined4 *)(param_1 + 1) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
      return true;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
    FUN_14518f040(*param_1);
    *param_1 = 0;
  }
  return false;
}



// FUNCTION 14546ef80 FUN_14546ef80 body=98 status=ok
// SIG undefined FUN_14546ef80(void)

void FUN_14546ef80(longlong *param_1)

{
  int iVar1;
  
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    iVar1 = (int)param_1[1];
    if (0 < iVar1) {
      while (iVar1 != 1) {
        SleepConditionVariableCS
                  ((PCONDITION_VARIABLE)((PCRITICAL_SECTION)*param_1 + 1),
                   (PCRITICAL_SECTION)*param_1,0xffffffff);
        iVar1 = (int)param_1[1];
      }
      *(undefined4 *)(param_1 + 1) = 2;
      WakeConditionVariable((PCONDITION_VARIABLE)(*param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00014546efd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    return;
  }
  return;
}



// FUNCTION 14546eff0 FUN_14546eff0 body=174 status=ok
// SIG undefined FUN_14546eff0(void)

void FUN_14546eff0(longlong *param_1)

{
  int iVar1;
  HANDLE hHandle;
  DWORD DVar2;
  
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    iVar1 = (int)param_1[1];
    if (0 < iVar1) {
      while (iVar1 != 1) {
        SleepConditionVariableCS
                  ((PCONDITION_VARIABLE)((PCRITICAL_SECTION)*param_1 + 1),
                   (PCRITICAL_SECTION)*param_1,0xffffffff);
        iVar1 = (int)param_1[1];
      }
      *(undefined4 *)(param_1 + 1) = 0;
      WakeConditionVariable((PCONDITION_VARIABLE)(*param_1 + 0x28));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    hHandle = *(HANDLE *)(*param_1 + 0x30);
    DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
    if (DVar2 == 0) {
      CloseHandle(hHandle);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
    FUN_14518f040(*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14546f0a0 FUN_14546f0a0 body=8 status=ok
// SIG undefined FUN_14546f0a0(void)

undefined ** FUN_14546f0a0(void)

{
  return &PTR_LAB_14c744300;
}



// FUNCTION 14546f0b0 FUN_14546f0b0 body=159 status=ok
// SIG undefined FUN_14546f0b0(void)

undefined8 FUN_14546f0b0(longlong *param_1)

{
  int iVar1;
  
  do {
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    iVar1 = (int)param_1[1];
    while (iVar1 == 1) {
      SleepConditionVariableCS
                ((PCONDITION_VARIABLE)((PCRITICAL_SECTION)*param_1 + 1),(PCRITICAL_SECTION)*param_1,
                 0xffffffff);
      iVar1 = (int)param_1[1];
    }
    if (iVar1 == 2) {
      if ((code *)param_1[2] != (code *)0x0) {
        iVar1 = (*(code *)param_1[2])(param_1[3],param_1[4]);
        *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | (uint)(iVar1 == 0);
      }
      *(undefined4 *)(param_1 + 1) = 1;
    }
    else if (iVar1 == 0) {
      WakeConditionVariable((PCONDITION_VARIABLE)(*param_1 + 0x28));
      LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
      return 0;
    }
    WakeConditionVariable((PCONDITION_VARIABLE)(*param_1 + 0x28));
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  } while( true );
}



// FUNCTION 14546f150 FUN_14546f150 body=522 status=ok
// SIG undefined FUN_14546f150(void)

void FUN_14546f150(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 3;
  lVar7 = 3;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1228) + 0xae);
  puVar3 = (undefined8 *)&DAT_149d50e90;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  uVar1 = puVar5[0x15];
  lVar7 = 3;
  puVar4[0x14] = puVar5[0x14];
  puVar4[0x15] = uVar1;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1228) + 0x25e);
  puVar3 = (undefined8 *)&DAT_149d51040;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar5[0x11];
  lVar7 = 3;
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  uVar1 = puVar5[0x15];
  puVar4[0x14] = puVar5[0x14];
  puVar4[0x15] = uVar1;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1228) + 0x40e);
  puVar3 = (undefined8 *)&DAT_149d511f0;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar7 = lVar7 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar7 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  uVar1 = puVar5[0x15];
  puVar4[0x14] = puVar5[0x14];
  puVar4[0x15] = uVar1;
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x1228) + 0x5be);
  puVar3 = (undefined8 *)&DAT_149d513a0;
  do {
    puVar5 = puVar3;
    puVar4 = puVar2;
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    uVar1 = puVar5[3];
    puVar4[2] = puVar5[2];
    puVar4[3] = uVar1;
    uVar1 = puVar5[5];
    puVar4[4] = puVar5[4];
    puVar4[5] = uVar1;
    uVar1 = puVar5[7];
    puVar4[6] = puVar5[6];
    puVar4[7] = uVar1;
    uVar1 = puVar5[9];
    puVar4[8] = puVar5[8];
    puVar4[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar4[10] = puVar5[10];
    puVar4[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar4[0xc] = puVar5[0xc];
    puVar4[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar4[0xe] = puVar5[0xe];
    puVar4[0xf] = uVar1;
    lVar6 = lVar6 + -1;
    puVar2 = puVar4 + 0x10;
    puVar3 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar1 = puVar5[0x11];
  puVar4[0x10] = puVar5[0x10];
  puVar4[0x11] = uVar1;
  uVar1 = puVar5[0x13];
  puVar4[0x12] = puVar5[0x12];
  puVar4[0x13] = uVar1;
  uVar1 = puVar5[0x15];
  puVar4[0x14] = puVar5[0x14];
  puVar4[0x15] = uVar1;
  return;
}



// FUNCTION 14546f360 FUN_14546f360 body=108 status=ok
// SIG undefined FUN_14546f360(void)

void FUN_14546f360(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x404) == 0) || (*(char *)(param_1 + 0x414) != '\0')) {
    uVar2 = 0x70;
  }
  else {
    uVar2 = 0x70;
    if (*(int *)(param_1 + 0x400) == 0) {
      uVar2 = 0x80;
    }
  }
  bVar1 = 0;
  do {
    FUN_14546f400(param_1,bVar1,0x18,uVar2);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 4);
  return;
}



// FUNCTION 14546f3d0 FUN_14546f3d0 body=39 status=ok
// SIG undefined FUN_14546f3d0(void)

void FUN_14546f3d0(undefined2 *param_1,undefined2 *param_2)

{
  if (param_2 != param_1) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  }
  *(undefined8 *)((longlong)param_2 + 3) =
       *(undefined8 *)(&DAT_149d51a08 + (ulonglong)*(byte *)(param_1 + 1) * 8);
  return;
}



// FUNCTION 14546f400 FUN_14546f400 body=707 status=ok
// SIG undefined FUN_14546f400(void)

void FUN_14546f400(longlong param_1,byte param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  byte bVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  int local_78;
  uint *local_70;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  uVar14 = (ulonglong)param_2;
  local_48 = 2;
  lVar17 = *(longlong *)(param_1 + 0x1228) + uVar14 * 0x1b0;
  local_70 = (uint *)(uVar14 * 0x240 + 0x396c + param_1);
  lVar18 = (((ulonglong)*(uint *)(param_1 + 0x1238) * 0x7fc + *(longlong *)(param_1 + 0x1230)) -
           lVar17) + uVar14 * 0x1b0;
  piVar9 = (int *)(uVar14 * 0x900 + param_1 + 0x1574);
  puVar11 = (undefined1 *)(lVar17 + 0xaf);
  do {
    local_50 = 2;
    do {
      local_78 = 0;
      local_58 = 6;
      do {
        piVar13 = piVar9;
        puVar15 = puVar11;
        puVar19 = local_70;
        lVar17 = 6;
        if (local_78 == 0) {
          lVar17 = 3;
        }
        do {
          uVar8 = piVar13[-1];
          uVar6 = *puVar19;
          uVar12 = *piVar13 + uVar8;
          uVar1 = piVar13[-2];
          if (uVar6 == 0) {
            bVar10 = 0x80;
          }
          else {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = (ulonglong)(uint)piVar13[1] * 0x100 + (ulonglong)(uVar6 >> 1);
            iVar7 = SUB164(auVar2 / ZEXT416(uVar6),0);
            bVar10 = (byte)(0xff - iVar7 >> 0x17) | iVar7 == 0 | SUB161(auVar2 / ZEXT416(uVar6),0);
          }
          uVar5 = param_3;
          if (uVar6 < param_3) {
            uVar5 = uVar6;
          }
          uVar16 = uVar12 + uVar1;
          uVar6 = (uVar5 * param_4) / param_3;
          puVar15[-1] = (char)(uVar6 * bVar10 + 0x80 +
                               (uint)(byte)puVar15[lVar18 + -1] * (0x100 - uVar6) >> 8);
          if (uVar16 == 0) {
            bVar10 = 0x80;
          }
          else {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulonglong)uVar1 * 0x100 + (ulonglong)(uVar16 >> 1);
            iVar7 = SUB164(auVar3 / ZEXT416(uVar16),0);
            bVar10 = (byte)(0xff - iVar7 >> 0x17) | iVar7 == 0 | SUB161(auVar3 / ZEXT416(uVar16),0);
          }
          uVar6 = param_3;
          if (uVar16 < param_3) {
            uVar6 = uVar16;
          }
          uVar6 = (uVar6 * param_4) / param_3;
          *puVar15 = (char)(uVar6 * bVar10 + 0x80 + (uint)(byte)puVar15[lVar18] * (0x100 - uVar6) >>
                           8);
          if (uVar12 == 0) {
            bVar10 = 0x80;
          }
          else {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulonglong)uVar8 * 0x100 + (ulonglong)(uVar12 >> 1);
            iVar7 = SUB164(auVar4 / ZEXT416(uVar12),0);
            bVar10 = (byte)(0xff - iVar7 >> 0x17) | iVar7 == 0 | SUB161(auVar4 / ZEXT416(uVar12),0);
          }
          uVar8 = param_3;
          if (uVar12 < param_3) {
            uVar8 = uVar12;
          }
          uVar8 = (uVar8 * param_4) / param_3;
          puVar15[1] = (char)(uVar8 * bVar10 + 0x80 +
                              (uint)(byte)puVar15[lVar18 + 1] * (0x100 - uVar8) >> 8);
          lVar17 = lVar17 + -1;
          piVar13 = piVar13 + 4;
          puVar15 = puVar15 + 3;
          puVar19 = puVar19 + 1;
        } while (lVar17 != 0);
        local_78 = local_78 + 1;
        local_70 = local_70 + 6;
        puVar11 = puVar11 + 0x12;
        piVar9 = piVar9 + 0x18;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
      local_50 = local_50 + -1;
    } while (local_50 != 0);
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  return;
}



// FUNCTION 14546f6d0 FUN_14546f6d0 body=89 status=ok
// SIG undefined FUN_14546f6d0(void)

void FUN_14546f6d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1228);
  *(undefined8 *)(lVar1 + 0x7b2) = 0xa8c090e080604020;
  *(undefined8 *)(lVar1 + 0x7ba) = 0x88d8f5c6c6c0b0c0;
  *(undefined8 *)(lVar1 + 0x7c2) = 0xeaeae0c0b0a0948c;
  *(undefined8 *)(lVar1 + 0x7ca) = 0x40407060408080f0;
  *(undefined8 *)(lVar1 + 0x7d2) = 0xb080d88080a04060;
  *(undefined8 *)(lVar1 + 0x7da) = 0xd0d0c6c6c0b0b0a0;
  *(undefined8 *)(lVar1 + 0x7e2) = 0xeae0c0b0a0948c88;
  *(undefined8 *)(lVar1 + 0x7ea) = 0x407060408080f0ea;
  *(undefined4 *)(lVar1 + 0x7f2) = 0xa0406040;
  *(undefined1 *)(lVar1 + 0x7f6) = 0x80;
  return;
}



// FUNCTION 14546f730 FUN_14546f730 body=1262 status=ok
// SIG undefined FUN_14546f730(void)

void FUN_14546f730(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  
  lVar11 = *(longlong *)(param_1 + 0x1228);
  lVar6 = lVar11 + 0x7b2;
  lVar10 = *(longlong *)(param_1 + 0x1230) + 0x7b2 + (ulonglong)*(uint *)(param_1 + 0x1238) * 0x7fc;
  FUN_14547e180(&DAT_149d52210,lVar10,param_1 + 0x443c,lVar6);
  lVar10 = lVar10 - lVar6;
  lVar11 = lVar11 + 0x7d1;
  lVar6 = 2;
  piVar12 = (int *)(param_1 + 0x4514);
  do {
    bVar9 = *(byte *)(lVar11 + lVar10 + -0x1c);
    uVar3 = piVar12[-0x31] + piVar12[-0x32];
    if (uVar3 != 0) {
      uVar2 = 0x14;
      if (uVar3 < 0x14) {
        uVar2 = (ulonglong)uVar3;
      }
      uVar3 = (uint)(((ulonglong)(uint)piVar12[-0x32] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                    (ulonglong)uVar3);
      bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + uVar2 * 4)) +
                     (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                     *(int *)(&DAT_149d52240 + uVar2 * 4) + 0x80 >> 8);
    }
    *(byte *)(lVar11 + -0x1c) = bVar9;
    FUN_14547e180(&DAT_149d52218,lVar10 + -0x1b + lVar11,piVar12 + -0x30,lVar11 + -0x1b);
    FUN_14547e180(&DAT_149d5222c,lVar10 + -0x11 + lVar11,piVar12 + -0x25,lVar11 + -0x11);
    pbVar4 = (byte *)(lVar11 + -0x10);
    lVar7 = 2;
    piVar8 = piVar12 + -0x1e;
    do {
      bVar9 = pbVar4[lVar10];
      uVar3 = piVar8[-4] + piVar8[-5];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar8[-5] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      *pbVar4 = bVar9;
      bVar9 = pbVar4[lVar10 + 1];
      uVar3 = piVar8[-2] + piVar8[-3];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar8[-3] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      pbVar4[1] = bVar9;
      bVar9 = pbVar4[lVar10 + 2];
      uVar3 = *piVar8 + piVar8[-1];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar8[-1] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      pbVar4[2] = bVar9;
      bVar9 = pbVar4[lVar10 + 3];
      uVar3 = piVar8[2] + piVar8[1];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar8[1] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      pbVar4[3] = bVar9;
      bVar9 = pbVar4[lVar10 + 4];
      uVar3 = piVar8[4] + piVar8[3];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar8[3] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      pbVar4[4] = bVar9;
      piVar8 = piVar8 + 10;
      pbVar4 = pbVar4 + 5;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar7 = lVar10 + -6 + lVar11;
    piVar8 = piVar12 + -0xf;
    lVar5 = 2;
    do {
      FUN_14547e180(&DAT_149d52230,lVar7,piVar8,lVar7 + (-0x1c - (lVar10 + -0x1c)));
      lVar7 = lVar7 + 3;
      piVar8 = piVar8 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_14547e180(&DAT_149d52230,lVar11 + lVar10,piVar12 + -7,lVar11);
    if (param_2 != 0) {
      bVar9 = *(byte *)(lVar11 + 3 + lVar10);
      uVar3 = piVar12[-2] + piVar12[-3];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar12[-3] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      *(byte *)(lVar11 + 3) = bVar9;
      bVar9 = *(byte *)(lVar11 + 4 + lVar10);
      uVar3 = *piVar12 + piVar12[-1];
      if (uVar3 != 0) {
        uVar1 = 0x14;
        if (uVar3 < 0x14) {
          uVar1 = uVar3;
        }
        uVar3 = (uint)(((ulonglong)(uint)piVar12[-1] * 0x100 + (ulonglong)(uVar3 >> 1)) /
                      (ulonglong)uVar3);
        bVar9 = (byte)((uint)bVar9 * (0x100 - *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4)) +
                       (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                       *(int *)(&DAT_149d52240 + (ulonglong)uVar1 * 4) + 0x80 >> 8);
      }
      *(byte *)(lVar11 + 4) = bVar9;
    }
    lVar11 = lVar11 + 0x21;
    piVar12 = piVar12 + 0x33;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 14546fc20 FUN_14546fc20 body=75 status=ok
// SIG undefined FUN_14546fc20(void)

void FUN_14546fc20(int param_1,int *param_2)

{
  char cVar1;
  
  if (param_1 < 0x2000) {
    cVar1 = (&DAT_149d522f0)[(longlong)param_1 >> 3];
  }
  else {
    cVar1 = '\n';
  }
  if (param_2 != (int *)0x0) {
    if (cVar1 != '\0') {
      *param_2 = param_1 - (2 << (cVar1 + 2U & 0x1f));
      return;
    }
    *param_2 = param_1;
  }
  return;
}



// FUNCTION 14546fc70 FUN_14546fc70 body=143 status=ok
// SIG undefined FUN_14546fc70(void)

void FUN_14546fc70(short *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      uVar2 = (ulonglong)(param_1[1] != 0);
    }
    else {
      uVar2 = (ulonglong)((param_1[1] != 0) + 2);
    }
    piVar1 = (int *)(param_2 + uVar2 * 4);
    *piVar1 = *piVar1 + 1;
    if ((int)uVar2 - 2U < 2) {
      FUN_14546fd00((int)*param_1,param_2 + 0x10,1);
    }
    if (((int)uVar2 - 1U & 0xfffffffd) == 0) {
      FUN_14546fd00((int)param_1[1],param_2 + 0xdc,1);
    }
  }
  return;
}



// FUNCTION 14546fd00 FUN_14546fd00 body=262 status=ok
// SIG undefined FUN_14546fd00(void)

void FUN_14546fd00(uint param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  piVar2 = (int *)(param_2 + (ulonglong)(param_1 >> 0x1f) * 4);
  *piVar2 = *piVar2 + param_3;
  uVar7 = -param_1;
  if (-1 < (int)param_1) {
    uVar7 = param_1;
  }
  uVar6 = 0;
  if ((int)(uVar7 - 1) < 0x2000) {
    bVar4 = (&DAT_149d522f0)[(longlong)(int)uVar7 + -1 >> 3];
    uVar3 = (uint)bVar4;
    if (bVar4 == 0) {
      iVar5 = 0;
      uVar3 = 0;
    }
    else {
      iVar5 = 2 << (bVar4 + 2 & 0x1f);
    }
  }
  else {
    uVar3 = 10;
    iVar5 = 0x2000;
  }
  uVar7 = (uVar7 - 1) - iVar5;
  uVar8 = (ulonglong)((int)uVar7 >> 1 & 3);
  iVar5 = (int)uVar7 >> 3;
  piVar2 = (int *)(param_2 + 8 + (ulonglong)uVar3 * 4);
  *piVar2 = *piVar2 + param_3;
  if (uVar3 == 0) {
    piVar2 = (int *)(param_2 + 0x34 + (longlong)iVar5 * 4);
    *piVar2 = *piVar2 + param_3;
    piVar2 = (int *)(param_2 + 0x8c + (uVar8 + (longlong)iVar5 * 4) * 4);
    *piVar2 = *piVar2 + param_3;
    piVar2 = (int *)(param_2 + 0xbc + (ulonglong)(uVar7 & 1) * 4);
    *piVar2 = *piVar2 + param_3 * param_4;
    return;
  }
  uVar9 = uVar6;
  do {
    bVar4 = (byte)uVar9;
    uVar9 = (ulonglong)((int)uVar9 + 1);
    lVar1 = uVar6 * 2;
    uVar6 = uVar6 + 1;
    piVar2 = (int *)(param_2 + 0x3c +
                    ((ulonglong)((uint)((longlong)iVar5 >> (bVar4 & 0x3f)) & 1) + lVar1) * 4);
    *piVar2 = *piVar2 + param_3;
  } while ((longlong)uVar6 < (longlong)(ulonglong)uVar3);
  piVar2 = (int *)(param_2 + 0xac + uVar8 * 4);
  *piVar2 = *piVar2 + param_3;
  piVar2 = (int *)(param_2 + 0xc4 + (ulonglong)(uVar7 & 1) * 4);
  *piVar2 = *piVar2 + param_3 * param_4;
  return;
}



// FUNCTION 14546fe10 FUN_14546fe10 body=808 status=ok
// SIG undefined FUN_14546fe10(void)

void FUN_14546fe10(longlong param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  FUN_145472420(param_1 + 0x11a8);
  *(undefined1 *)(param_1 + 0x11ab) = 0;
  if (*(void **)(param_1 + 0x508) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x508),0,
           (longlong)(*(int *)(param_1 + 0x430) * *(int *)(param_1 + 0x428)));
  }
  if (*(void **)(param_1 + 0x510) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x510),0,
           (longlong)(*(int *)(param_1 + 0x430) * *(int *)(param_1 + 0x428)));
  }
  *(undefined8 *)(param_1 + 0x118e) = 0;
  *(undefined4 *)(param_1 + 0x1188) = 0x10101;
  *(undefined2 *)(param_1 + 0x118c) = 0xffff;
  *(undefined4 *)(param_1 + 0x1184) = 0xffffffff;
  FUN_14546f150(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x1228);
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0x361c7ed0b04c0778;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0x225a8b9b9a0c3067;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0x9ef3cc1906437775;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0xb0832c056160150d;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0x9c2a05536144308b;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0x3a055098311a986f;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0x556913e21534ab2;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0x55a3160ea8c09a20;
  *(undefined8 *)((longlong)puVar1 + 100) = 0x491d1394d89c2005;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x7e257a847440074d;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0x1367c0b56b156578;
  *(undefined2 *)((longlong)puVar1 + 0x7c) = 0x7d43;
  *puVar1 = 0x3329c2a290122041;
  puVar1[1] = 0x2dc4d9a512448462;
  puVar1[2] = 0xc1f0b01350ad4e28;
  puVar1[3] = 0xf8c22687dd2e2340;
  *(undefined4 *)(puVar1 + 4) = 0x1d556079;
  *(undefined8 *)((longlong)puVar1 + 0x76e) = 0x90950322ff24a2eb;
  *(undefined8 *)((longlong)puVar1 + 0x7e) = 0x85949f3f938d7ac7;
  *(undefined8 *)((longlong)puVar1 + 0x86) = 0x5c5749ae72687976;
  *(undefined4 *)((longlong)puVar1 + 0x8e) = 0x63525329;
  *(undefined4 *)((longlong)puVar1 + 0x92) = 0x27273532;
  *(undefined4 *)((longlong)puVar1 + 0x96) = 0x443b3ab1;
  *(undefined4 *)((longlong)puVar1 + 0x9a) = 0x4f343f1a;
  *(undefined8 *)((longlong)puVar1 + 0x9e) = 0x481e22de0c0e1119;
  *(undefined8 *)((longlong)puVar1 + 0xa6) = 0x6070a0c203a2c10;
  *(undefined4 *)((longlong)puVar1 + 0x78b) = 0xe1bb6609;
  *(undefined4 *)((longlong)puVar1 + 0x78f) = 0x6077b7ef;
  *(undefined1 *)((longlong)puVar1 + 0x793) = 0x29;
  *(undefined4 *)((longlong)puVar1 + 0x79e) = 0xdd7b7e32;
  *(undefined1 *)((longlong)puVar1 + 0x7a2) = 0xe2;
  *(undefined8 *)((longlong)puVar1 + 0x794) = 0xaaac8e8e4a4d1021;
  *(undefined2 *)((longlong)puVar1 + 0x79c) = 0xf7ee;
  *(undefined8 *)((longlong)puVar1 + 0x7a3) = 0x98140d3405258803;
  *(undefined4 *)((longlong)puVar1 + 0x7ab) = 0x4264650f;
  *(undefined2 *)((longlong)puVar1 + 0x7af) = 0x80c0;
  *(undefined1 *)((longlong)puVar1 + 0x7b1) = 0x40;
  *(undefined4 *)((longlong)puVar1 + 0x776) = 0x722ad02;
  *(undefined4 *)((longlong)puVar1 + 0x77a) = 0xa6075591;
  *(undefined4 *)((longlong)puVar1 + 0x77e) = 0x425e073f;
  *(undefined4 *)((longlong)puVar1 + 0x782) = 0x112e4008;
  *(undefined4 *)((longlong)puVar1 + 0x786) = 0x1d191f51;
  *(undefined1 *)((longlong)puVar1 + 0x78a) = 0x1e;
  FUN_14546f6d0(param_1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x1228) + 0x7f8) = 1;
  if (((*(int *)(param_1 + 0x404) == 0) || (*(int *)(param_1 + 0x45f8) != 0)) ||
     (*(int *)(param_1 + 0x41c) == 3)) {
    memcpy(*(void **)(param_1 + 0x1230),*(void **)(param_1 + 0x1228),0x7fc);
    memcpy((void *)(*(longlong *)(param_1 + 0x1230) + 0x7fc),*(void **)(param_1 + 0x1228),0x7fc);
    memcpy((void *)(*(longlong *)(param_1 + 0x1230) + 0xff8),*(void **)(param_1 + 0x1228),0x7fc);
    _Dst = (void *)(*(longlong *)(param_1 + 0x1230) + 0x17f4);
  }
  else {
    if (*(int *)(param_1 + 0x41c) != 2) goto LAB_1454700da;
    _Dst = (void *)((ulonglong)*(uint *)(param_1 + 0x1238) * 0x7fc + *(longlong *)(param_1 + 0x1230)
                   );
  }
  memcpy(_Dst,*(void **)(param_1 + 0x1228),0x7fc);
LAB_1454700da:
  if (((*(int *)(param_1 + 0x404) == 0) || (*(char *)(param_1 + 0x414) != '\0')) &&
     (*(void **)(param_1 + 0x4a0) != (void *)0x0)) {
    memset(*(void **)(param_1 + 0x4a0),0,
           (longlong)((*(int *)(param_1 + 0x428) + 1) * *(int *)(param_1 + 0x434)) * 0x44);
  }
  *(undefined8 *)(param_1 + 0x1164) = 0;
  *(undefined8 *)(param_1 + 0x116c) = 0;
  *(undefined4 *)(param_1 + 0x1238) = 0;
  return;
}



// FUNCTION 145470140 FUN_145470140 body=3564 status=ok
// SIG undefined FUN_145470140(void)

void FUN_145470140(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  byte bVar16;
  longlong lVar17;
  uint *puVar18;
  longlong lVar19;
  undefined1 *puVar20;
  uint *puVar21;
  longlong local_38;
  
  puVar20 = &DAT_0000123c + param_1;
  lVar1 = *(longlong *)(param_1 + 0x1228);
  lVar12 = (ulonglong)*(uint *)(param_1 + 0x1238) * 0x7fc + *(longlong *)(param_1 + 0x1230);
  bVar16 = *(byte *)(lVar12 + 0x78b);
  uVar8 = *(int *)(param_1 + 0x4310) + *(uint *)(param_1 + 0x430c);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x430c) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x78b) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x78c);
  uVar8 = *(int *)(param_1 + 0x4318) + *(uint *)(param_1 + 0x4314);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x4314) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x78c) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x78d);
  uVar8 = *(int *)(param_1 + 0x4320) + *(uint *)(param_1 + 0x431c);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x431c) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x78d) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x78e);
  uVar8 = *(int *)(param_1 + 0x4328) + *(uint *)(param_1 + 0x4324);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x4324) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x78e) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x78f);
  uVar8 = *(int *)(param_1 + 0x4330) + *(uint *)(param_1 + 0x432c);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x432c) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x78f) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x790);
  uVar8 = *(int *)(param_1 + 0x4338) + *(uint *)(param_1 + 0x4334);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x4334) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x790) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x791);
  uVar8 = *(int *)(param_1 + 0x4340) + *(uint *)(param_1 + 0x433c);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x433c) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x791) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x792);
  uVar8 = *(int *)(param_1 + 0x4348) + *(uint *)(param_1 + 0x4344);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x4344) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x792) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x793);
  uVar8 = *(int *)(param_1 + 0x4350) + *(uint *)(param_1 + 0x434c);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x434c) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x793) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x79e);
  uVar8 = *(int *)(param_1 + 0x43a8) + *(uint *)(param_1 + 0x43a4);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x43a4) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x79e) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x79f);
  uVar8 = *(int *)(param_1 + 0x43b0) + *(uint *)(param_1 + 0x43ac);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x43ac) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x79f) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x7a0);
  uVar8 = *(int *)(param_1 + 0x43b8) + *(uint *)(param_1 + 0x43b4);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x43b4) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x7a0) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x7a1);
  uVar8 = *(int *)(param_1 + 0x43c0) + *(uint *)(param_1 + 0x43bc);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x43bc) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x7a1) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x7a2);
  uVar8 = *(int *)(param_1 + 0x43c8) + *(uint *)(param_1 + 0x43c4);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x43c4) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) + 0x80 +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) >> 8);
  }
  *(byte *)(lVar1 + 0x7a2) = bVar16;
  lVar6 = lVar12 - lVar1;
  piVar15 = (int *)(param_1 + 0x4360);
  lVar17 = 0x794;
  do {
    pbVar11 = (byte *)(lVar17 + lVar1);
    bVar16 = pbVar11[lVar6];
    uVar8 = piVar15[-2] + piVar15[-3];
    if (uVar8 != 0) {
      uVar5 = 0x14;
      if (uVar8 < 0x14) {
        uVar5 = (ulonglong)uVar8;
      }
      uVar8 = (uint)(((ulonglong)(uint)piVar15[-3] * 0x100 + (ulonglong)(uVar8 >> 1)) /
                    (ulonglong)uVar8);
      bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                      (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                      *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
    }
    *pbVar11 = bVar16;
    bVar16 = *(byte *)(lVar17 + 1 + lVar12);
    uVar8 = *piVar15 + piVar15[-1];
    if (uVar8 != 0) {
      uVar5 = 0x14;
      if (uVar8 < 0x14) {
        uVar5 = (ulonglong)uVar8;
      }
      uVar8 = (uint)(((ulonglong)(uint)piVar15[-1] * 0x100 + (ulonglong)(uVar8 >> 1)) /
                    (ulonglong)uVar8);
      bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                      (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                      *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
    }
    lVar17 = lVar17 + 2;
    piVar15 = piVar15 + 4;
    pbVar11[1] = bVar16;
  } while (lVar17 < 0x79e);
  lVar17 = lVar12 + 0x776;
  lVar14 = 7;
  lVar13 = lVar1 - lVar12;
  lVar19 = param_1 + 0x429c;
  do {
    FUN_14547e180(&DAT_149d52c3c,lVar17,lVar19,lVar13 + lVar17);
    lVar17 = lVar17 + 3;
    lVar19 = lVar19 + 0x10;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar19 = 4;
  lVar17 = lVar12;
  do {
    FUN_14547e180(&DAT_149d52c28,lVar17,puVar20,lVar17 + lVar13);
    lVar17 = lVar17 + 9;
    puVar20 = puVar20 + 0x28;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  lVar14 = 10;
  lVar17 = lVar12 + 0x24;
  lVar19 = param_1 + 0x12dc;
  do {
    FUN_14547e180(&DAT_149d52c28,lVar17,lVar19,lVar17 + lVar13);
    lVar17 = lVar17 + 9;
    lVar19 = lVar19 + 0x28;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar17 = lVar12 + 0x7e;
  lVar19 = param_1 + 0x146c;
  lVar14 = 0x10;
  do {
    FUN_14547e180(&DAT_149d52c44,lVar17,lVar19,lVar17 + lVar13);
    lVar17 = lVar17 + 3;
    lVar19 = lVar19 + 0x10;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (*(char *)(param_1 + 0x51c) == '\x04') {
    lVar17 = lVar12 + 0x76e;
    lVar14 = 4;
    lVar19 = param_1 + 0x426c;
    do {
      FUN_14547e180(&DAT_149d52c4c,lVar17,lVar19,lVar17 + lVar13);
      lVar17 = lVar17 + 2;
      lVar19 = lVar19 + 0xc;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (*(int *)(param_1 + 0x438) == 4) {
    puVar7 = (uint *)(param_1 + 0x4404);
    local_38 = 2;
    pbVar11 = (byte *)(lVar1 + 0x7ad);
    puVar18 = (uint *)(param_1 + 0x43d4);
    puVar21 = (uint *)(param_1 + 0x43f0);
    lVar17 = 0;
    lVar19 = 0;
    do {
      bVar16 = pbVar11[lVar6];
      uVar8 = puVar7[1] + *puVar7;
      if (uVar8 != 0) {
        uVar5 = 0x14;
        if (uVar8 < 0x14) {
          uVar5 = (ulonglong)uVar8;
        }
        uVar8 = (uint)(((ulonglong)*puVar7 * 0x100 + (ulonglong)(uVar8 >> 1)) / (ulonglong)uVar8);
        bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                        (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                        *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
      }
      *pbVar11 = bVar16;
      uVar8 = *puVar21;
      bVar16 = *(byte *)(lVar1 + lVar19 + 0x7a9 + lVar6);
      uVar9 = puVar21[-1] + puVar21[1] + uVar8;
      if (uVar9 != 0) {
        uVar4 = 0x14;
        if (uVar9 < 0x14) {
          uVar4 = uVar9;
        }
        uVar9 = (uint)(((ulonglong)puVar21[-1] * 0x100 + (ulonglong)(uVar9 >> 1)) / (ulonglong)uVar9
                      );
        bVar16 = (byte)((((int)(0xff - uVar9) >> 0x17 | uVar9) & 0xff | (uint)(uVar9 == 0)) *
                        *(int *)(&DAT_149d52c50 + (ulonglong)uVar4 * 4) + 0x80 +
                        (0x100 - *(int *)(&DAT_149d52c50 + (ulonglong)uVar4 * 4)) * (uint)bVar16 >>
                       8);
      }
      uVar9 = puVar21[1] + uVar8;
      *(byte *)(lVar1 + lVar19 + 0x7a9) = bVar16;
      bVar16 = *(byte *)(lVar19 + 0x7aa + lVar12);
      if (uVar9 != 0) {
        uVar4 = 0x14;
        if (uVar9 < 0x14) {
          uVar4 = uVar9;
        }
        uVar8 = (uint)(((ulonglong)uVar8 * 0x100 + (ulonglong)(uVar9 >> 1)) / (ulonglong)uVar9);
        bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + (ulonglong)uVar4 * 4)) +
                        (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                        *(int *)(&DAT_149d52c50 + (ulonglong)uVar4 * 4) + 0x80 >> 8);
      }
      *(byte *)(lVar19 + 0x7aa + lVar1) = bVar16;
      uVar8 = puVar18[1];
      uVar9 = *puVar18;
      uVar4 = puVar18[-1];
      iVar3 = uVar9 + uVar8;
      bVar16 = *(byte *)(lVar6 + 0x7a3 + lVar1 + lVar17);
      uVar10 = puVar18[-2] + iVar3 + uVar4;
      if (uVar10 != 0) {
        uVar2 = 0x14;
        if (uVar10 < 0x14) {
          uVar2 = uVar10;
        }
        uVar10 = (uint)(((ulonglong)puVar18[-2] * 0x100 + (ulonglong)(uVar10 >> 1)) /
                       (ulonglong)uVar10);
        bVar16 = (byte)((0x100 - *(int *)(&DAT_149d52c50 + (ulonglong)uVar2 * 4)) * (uint)bVar16 +
                        (((int)(0xff - uVar10) >> 0x17 | uVar10) & 0xff | (uint)(uVar10 == 0)) *
                        *(int *)(&DAT_149d52c50 + (ulonglong)uVar2 * 4) + 0x80 >> 8);
      }
      uVar10 = iVar3 + uVar4;
      *(byte *)(lVar1 + lVar17 + 0x7a3) = bVar16;
      bVar16 = *(byte *)(lVar17 + 0x7a4 + lVar12);
      if (uVar10 != 0) {
        uVar2 = 0x14;
        if (uVar10 < 0x14) {
          uVar2 = uVar10;
        }
        uVar4 = (uint)(((ulonglong)uVar4 * 0x100 + (ulonglong)(uVar10 >> 1)) / (ulonglong)uVar10);
        bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + (ulonglong)uVar2 * 4)) +
                        (((int)(0xff - uVar4) >> 0x17 | uVar4) & 0xff | (uint)(uVar4 == 0)) *
                        *(int *)(&DAT_149d52c50 + (ulonglong)uVar2 * 4) + 0x80 >> 8);
      }
      *(byte *)(lVar17 + 0x7a4 + lVar1) = bVar16;
      bVar16 = *(byte *)(lVar17 + 0x7a5 + lVar12);
      uVar8 = uVar8 + uVar9;
      if (uVar8 != 0) {
        uVar5 = 0x14;
        if (uVar8 < 0x14) {
          uVar5 = (ulonglong)uVar8;
        }
        uVar8 = (uint)(((ulonglong)uVar9 * 0x100 + (ulonglong)(uVar8 >> 1)) / (ulonglong)uVar8);
        bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                        (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                        *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
      }
      puVar21 = puVar21 + 3;
      puVar7 = puVar7 + 2;
      pbVar11 = pbVar11 + 1;
      *(byte *)(lVar17 + 0x7a5 + lVar1) = bVar16;
      puVar18 = puVar18 + 4;
      lVar19 = lVar19 + 2;
      lVar17 = lVar17 + 3;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  bVar16 = *(byte *)(lVar12 + 0x7af);
  uVar8 = *(int *)(param_1 + 0x4428) + *(uint *)(param_1 + 0x4424);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x4424) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
  }
  *(byte *)(lVar1 + 0x7af) = bVar16;
  bVar16 = *(byte *)(lVar12 + 0x7b0);
  uVar8 = *(int *)(param_1 + 0x4430) + *(uint *)(param_1 + 0x442c);
  if (uVar8 != 0) {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x442c) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    bVar16 = (byte)((uint)bVar16 * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                    (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                    *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
  }
  *(byte *)(lVar1 + 0x7b0) = bVar16;
  uVar8 = *(int *)(param_1 + 0x4438) + *(uint *)(param_1 + 0x4434);
  if (uVar8 == 0) {
    *(byte *)(lVar1 + 0x7b1) = *(byte *)(lVar12 + 0x7b1);
  }
  else {
    uVar5 = 0x14;
    if (uVar8 < 0x14) {
      uVar5 = (ulonglong)uVar8;
    }
    uVar8 = (uint)(((ulonglong)*(uint *)(param_1 + 0x4434) * 0x100 + (ulonglong)(uVar8 >> 1)) /
                  (ulonglong)uVar8);
    *(char *)(lVar1 + 0x7b1) =
         (char)((uint)*(byte *)(lVar12 + 0x7b1) * (0x100 - *(int *)(&DAT_149d52c50 + uVar5 * 4)) +
                (((int)(0xff - uVar8) >> 0x17 | uVar8) & 0xff | (uint)(uVar8 == 0)) *
                *(int *)(&DAT_149d52c50 + uVar5 * 4) + 0x80 >> 8);
  }
  return;
}



// FUNCTION 145470f30 FUN_145470f30 body=44 status=ok
// SIG undefined FUN_145470f30(void)

void FUN_145470f30(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[3] + param_1[1] + param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = param_1[3] + param_1[2];
  param_2[4] = param_1[2];
  param_2[5] = param_1[3];
  return;
}



// FUNCTION 145470f60 FUN_145470f60 body=26 status=ok
// SIG undefined FUN_145470f60(void)

void FUN_145470f60(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[2] + param_1[1];
  param_2[2] = param_1[1];
  param_2[3] = param_1[2];
  return;
}



// FUNCTION 145470f80 FUN_145470f80 body=11 status=ok
// SIG undefined FUN_145470f80(void)

void FUN_145470f80(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  return;
}



// FUNCTION 145470f90 FUN_145470f90 body=1312 status=ok
// SIG undefined FUN_145470f90(void)

void FUN_145470f90(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined1 auStack_518 [32];
  longlong local_4f8;
  undefined4 local_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  undefined4 local_49c;
  int local_498 [16];
  undefined4 local_458 [16];
  undefined4 local_418 [16];
  undefined4 auStack_3d8 [16];
  undefined4 auStack_398 [16];
  undefined4 auStack_358 [16];
  undefined4 auStack_318 [16];
  undefined4 auStack_2d8 [16];
  undefined4 auStack_298 [16];
  undefined4 auStack_258 [16];
  undefined4 auStack_218 [16];
  undefined4 auStack_1d8 [16];
  undefined4 auStack_198 [16];
  undefined4 auStack_158 [16];
  undefined4 auStack_118 [16];
  undefined4 auStack_d8 [16];
  undefined4 auStack_98 [16];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_518;
  puVar6 = local_458;
  lVar3 = (longlong)param_4;
  lVar4 = 0x10;
  local_4f0 = *(undefined4 *)(&PTR_FUN_149d52d80 + lVar3 * 2);
  uStack_4ec = *(undefined4 *)((longlong)&PTR_FUN_149d52d80 + lVar3 * 0x10 + 4);
  uStack_4e8 = *(undefined4 *)(&PTR_FUN_149d52d88 + lVar3 * 2);
  uStack_4e4 = *(undefined4 *)((longlong)&PTR_FUN_149d52d88 + lVar3 * 0x10 + 4);
  pcVar11 = (code *)(&PTR_FUN_149d52d88)[lVar3 * 2];
  do {
    (*pcVar11)((longlong)puVar6 + (param_1 - (longlong)local_458),puVar6,param_5);
    puVar6 = puVar6 + 0x10;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pcVar11 = (code *)CONCAT44(uStack_4ec,local_4f0);
  uVar12 = 0;
  local_4f8 = 0;
  uVar7 = uVar12;
  do {
    local_4d8 = local_458[local_4f8];
    local_4d4 = local_418[local_4f8];
    local_4d0 = auStack_3d8[local_4f8];
    local_4cc = auStack_398[local_4f8];
    local_4c8 = auStack_358[local_4f8];
    local_4c4 = auStack_318[local_4f8];
    local_4c0 = auStack_2d8[local_4f8];
    local_4bc = auStack_298[local_4f8];
    local_4b8 = auStack_258[local_4f8];
    local_4b4 = auStack_218[local_4f8];
    local_4b0 = auStack_1d8[local_4f8];
    local_4ac = auStack_198[local_4f8];
    local_4a8 = auStack_158[local_4f8];
    local_4a4 = auStack_118[local_4f8];
    local_4a0 = auStack_d8[local_4f8];
    local_49c = auStack_98[local_4f8];
    (*pcVar11)(&local_4d8,local_498,param_5);
    uVar9 = uVar12;
    uVar10 = uVar12;
    do {
      iVar8 = (int)uVar9;
      iVar5 = (int)uVar7;
      lVar3 = (longlong)(param_3 * iVar8 + iVar5);
      iVar2 = (local_498[uVar10] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_145471162:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471162;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      iVar1 = local_498[uVar10 + 1];
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 1) * param_3 + iVar5);
      iVar2 = (iVar1 + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_1454711d4:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_1454711d4;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 2) * param_3 + iVar5);
      iVar2 = (local_498[uVar10 + 2] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_145471240:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471240;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 3) * param_3 + iVar5);
      iVar2 = (local_498[uVar10 + 3] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_1454712ac:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_1454712ac;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 4) * param_3 + iVar5);
      iVar2 = (local_498[uVar10 + 4] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_145471318:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471318;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 5) * param_3 + iVar5);
      iVar2 = (local_498[uVar10 + 5] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_145471384:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471384;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 6) * param_3 + iVar5);
      iVar2 = (local_498[uVar10 + 6] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_1454713f0:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_1454713f0;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      lVar3 = (longlong)((iVar8 + 7) * param_3 + iVar5);
      iVar2 = (local_498[uVar10 + 7] + 0x20 >> 6) + (uint)*(ushort *)(param_2 + lVar3 * 2);
      if (param_5 == 8) {
LAB_14547145c:
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xff < iVar2) {
          iVar2 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3ff < iVar2) {
          iVar2 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_14547145c;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
      }
      uVar9 = (ulonglong)(iVar8 + 8U);
      *(short *)(param_2 + lVar3 * 2) = (short)iVar2;
      uVar10 = uVar10 + 8;
    } while ((int)(iVar8 + 8U) < 0x10);
    uVar7 = (ulonglong)(iVar5 + 1);
    pcVar11 = (code *)CONCAT44(uStack_4ec,local_4f0);
    local_4f8 = local_4f8 + 1;
    if (0xf < local_4f8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_518);
    }
  } while( true );
}



// FUNCTION 1454714d0 FUN_1454714d0 body=755 status=ok
// SIG undefined FUN_1454714d0(void)

void FUN_1454714d0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  code *local_d8 [4];
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  undefined4 local_98 [4];
  undefined4 local_88 [4];
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8[0] = FUN_14559fb90;
  local_d8[2] = FUN_1455a05c0;
  local_b0 = FUN_1455a05c0;
  local_a8 = FUN_1455a05c0;
  local_a0 = FUN_1455a05c0;
  local_d8[1] = FUN_14559fb90;
  local_d8[3] = FUN_14559fb90;
  local_b8 = FUN_14559fb90;
  pcVar1 = local_d8[(longlong)param_4 * 2 + 1];
  (*pcVar1)(param_1,local_98,param_5);
  (*pcVar1)(param_1 + 0x10,local_88,param_5);
  (*pcVar1)(param_1 + 0x20,local_78,param_5);
  (*pcVar1)(param_1 + 0x30,local_68,param_5);
  pcVar1 = local_d8[(longlong)param_4 * 2];
  iVar5 = param_3 * 2;
  puVar7 = local_78;
  lVar6 = 4;
  local_108 = param_3 * -2;
  do {
    local_100 = puVar7[-8];
    local_fc = puVar7[-4];
    local_f8 = *puVar7;
    local_f4 = puVar7[4];
    (*pcVar1)(&local_100,&local_f0);
    iVar4 = (local_f0 + 8 >> 4) + (uint)*(ushort *)(param_2 + (longlong)(local_108 + iVar5) * 2);
    if (param_5 == 8) {
LAB_14547163d:
      if (iVar4 < 0) {
        uVar3 = 0;
      }
      else {
        if (0xff < iVar4) {
          iVar4 = 0xff;
        }
LAB_145471664:
        uVar3 = (undefined2)iVar4;
      }
    }
    else if (param_5 == 10) {
      if (-1 < iVar4) {
        if (0x3ff < iVar4) {
          iVar4 = 0x3ff;
        }
        goto LAB_145471664;
      }
      uVar3 = 0;
    }
    else {
      if (param_5 != 0xc) goto LAB_14547163d;
      if (-1 < iVar4) {
        if (0xfff < iVar4) {
          iVar4 = 0xfff;
        }
        goto LAB_145471664;
      }
      uVar3 = 0;
    }
    *(undefined2 *)(param_2 + (longlong)(local_108 + iVar5) * 2) = uVar3;
    iVar4 = (local_ec + 8 >> 4) + (uint)*(ushort *)(param_2 + (longlong)(iVar5 - param_3) * 2);
    if (param_5 == 8) {
LAB_1454716c0:
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
    }
    else if (param_5 == 10) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x3ff < iVar4) {
        iVar4 = 0x3ff;
      }
    }
    else {
      if (param_5 != 0xc) goto LAB_1454716c0;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xfff < iVar4) {
        iVar4 = 0xfff;
      }
    }
    *(short *)(param_2 + (longlong)(iVar5 - param_3) * 2) = (short)iVar4;
    iVar4 = (local_e8 + 8 >> 4) + (uint)*(ushort *)(param_2 + (longlong)iVar5 * 2);
    if (param_5 == 8) {
LAB_145471727:
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
    }
    else if (param_5 == 10) {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x3ff < iVar4) {
        iVar4 = 0x3ff;
      }
    }
    else {
      if (param_5 != 0xc) goto LAB_145471727;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xfff < iVar4) {
        iVar4 = 0xfff;
      }
    }
    *(short *)(param_2 + (longlong)iVar5 * 2) = (short)iVar4;
    iVar4 = param_3 + iVar5;
    iVar2 = (local_e4 + 8 >> 4) + (uint)*(ushort *)(param_2 + (longlong)iVar4 * 2);
    if (param_5 == 8) {
LAB_145471792:
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
    }
    else if (param_5 == 10) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
    }
    else {
      if (param_5 != 0xc) goto LAB_145471792;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xfff < iVar2) {
        iVar2 = 0xfff;
      }
    }
    iVar5 = iVar5 + 1;
    *(short *)(param_2 + (longlong)iVar4 * 2) = (short)iVar2;
    puVar7 = puVar7 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_128);
    }
  } while( true );
}



// FUNCTION 1454717e0 FUN_1454717e0 body=1278 status=ok
// SIG undefined FUN_1454717e0(void)

void FUN_1454717e0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  int local_180 [18];
  undefined4 local_138 [8];
  undefined4 local_118 [8];
  undefined4 local_f8 [8];
  undefined4 local_d8 [8];
  undefined4 local_b8 [8];
  undefined4 local_98 [8];
  undefined4 local_78 [8];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_1b0 = (code *)(&PTR_FUN_149d52d40)[(longlong)param_4 * 2];
  pcVar2 = (code *)(&PTR_FUN_149d52d48)[(longlong)param_4 * 2];
  pcStack_1a8 = pcVar2;
  (*pcVar2)(param_1,local_180 + 10,param_5);
  (*pcVar2)(param_1 + 0x20,local_138,param_5);
  (*pcVar2)(param_1 + 0x40,local_118,param_5);
  (*pcVar2)(param_1 + 0x60,local_f8,param_5);
  (*pcVar2)(param_1 + 0x80,local_d8,param_5);
  (*pcVar2)(param_1 + 0xa0,local_b8,param_5);
  (*pcVar2)(param_1 + 0xc0,local_98,param_5);
  (*pcVar2)(param_1 + 0xe0,local_78,param_5);
  uVar10 = 0;
  local_1b8 = 0;
  uVar8 = uVar10;
  do {
    local_1a0 = local_180[local_1b8 + 10];
    local_19c = local_138[local_1b8];
    local_198 = local_118[local_1b8];
    local_194 = local_f8[local_1b8];
    local_190 = local_d8[local_1b8];
    local_18c = local_b8[local_1b8];
    local_188 = local_98[local_1b8];
    local_184 = local_78[local_1b8];
    (*local_1b0)(&local_1a0,local_180,param_5);
    uVar6 = uVar10;
    uVar9 = uVar10;
    do {
      iVar5 = (int)uVar6;
      iVar7 = (int)uVar8;
      lVar4 = (longlong)(param_3 * iVar5 + iVar7);
      iVar3 = (local_180[uVar9] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471991:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471991;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      iVar1 = local_180[uVar9 + 1];
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 1) * param_3 + iVar7);
      iVar3 = (iVar1 + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471a03:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471a03;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 2) * param_3 + iVar7);
      iVar3 = (local_180[uVar9 + 2] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471a6f:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471a6f;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 3) * param_3 + iVar7);
      iVar3 = (local_180[uVar9 + 3] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471adb:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471adb;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 4) * param_3 + iVar7);
      iVar3 = (local_180[uVar9 + 4] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471b47:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471b47;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 5) * param_3 + iVar7);
      iVar3 = (local_180[uVar9 + 5] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471bb3:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471bb3;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 6) * param_3 + iVar7);
      iVar3 = (local_180[uVar9 + 6] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471c1f:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471c1f;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      lVar4 = (longlong)((iVar5 + 7) * param_3 + iVar7);
      iVar3 = (local_180[uVar9 + 7] + 0x10 >> 5) + (uint)*(ushort *)(param_2 + lVar4 * 2);
      if (param_5 == 8) {
LAB_145471c8b:
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
      }
      else if (param_5 == 10) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
      }
      else {
        if (param_5 != 0xc) goto LAB_145471c8b;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
      }
      uVar6 = (ulonglong)(iVar5 + 8U);
      *(short *)(param_2 + lVar4 * 2) = (short)iVar3;
      uVar9 = uVar9 + 8;
    } while ((int)(iVar5 + 8U) < 8);
    uVar8 = (ulonglong)(iVar7 + 1);
    local_1b8 = local_1b8 + 1;
    if (7 < local_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1d8);
    }
  } while( true );
}



// FUNCTION 145471d00 FUN_145471d00 body=333 status=ok
// SIG undefined FUN_145471d00(void)

void FUN_145471d00(undefined1 (*param_1) [16],undefined4 *param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  short sVar13;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  short sVar28;
  short sVar29;
  short sVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  short sVar31;
  undefined1 auVar27 [16];
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar36;
  short sVar37;
  undefined1 auVar35 [16];
  short sVar38;
  short sVar42;
  short sVar43;
  short sVar45;
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  short sVar44;
  undefined1 in_XMM4 [16];
  short sVar46;
  short sVar50;
  short sVar51;
  short sVar52;
  undefined1 auVar47 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar17 [16];
  undefined1 auVar40 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  if (param_4 < 2) {
    FUN_14559e6e0();
    return;
  }
  auVar14 = packssdw(*param_1,param_1[1]);
  auVar25 = packssdw(param_1[2],param_1[3]);
  auVar15 = psraw(auVar14,2);
  auVar26 = psraw(auVar25,2);
  sVar29 = auVar26._6_2_;
  sVar24 = auVar15._6_2_;
  auVar17._0_12_ = auVar15._0_12_;
  auVar17._12_2_ = sVar24;
  auVar17._14_2_ = sVar29;
  auVar16._12_4_ = auVar17._12_4_;
  auVar16._0_10_ = auVar15._0_10_;
  auVar16._10_2_ = auVar26._4_2_;
  sVar22 = auVar15._4_2_;
  auVar25._10_6_ = auVar16._10_6_;
  auVar25._0_8_ = auVar15._0_8_;
  auVar25._8_2_ = sVar22;
  sVar28 = auVar26._2_2_;
  auVar14._2_8_ = auVar25._8_8_;
  auVar14._0_2_ = sVar28;
  auVar14._10_6_ = 0;
  auVar18._0_12_ = SUB1612(auVar14 << 0x30,4) << 0x20;
  sVar36 = auVar15._10_2_;
  sVar30 = auVar26._10_2_;
  sVar37 = auVar15._14_2_;
  sVar31 = auVar26._14_2_;
  auVar18._12_2_ = sVar28;
  auVar18._14_2_ = sVar30;
  uVar3 = CONCAT44(CONCAT22(auVar15._8_2_,auVar15._0_2_),auVar18._12_4_);
  auVar27._0_10_ = (unkuint10)uVar3 << 0x20;
  uVar4 = CONCAT44(CONCAT22(auVar15._12_2_,sVar22),CONCAT22(sVar31,sVar29));
  auVar35._0_10_ = (unkuint10)uVar4 << 0x20;
  sVar13 = auVar15._0_2_ + auVar15._2_2_;
  sVar19 = auVar15._8_2_ + sVar36;
  sVar20 = auVar26._0_2_ + sVar28;
  sVar23 = auVar26._8_2_ + sVar30;
  sVar32 = auVar15._12_2_ - sVar37;
  sVar33 = auVar26._4_2_ - sVar29;
  sVar34 = auVar26._12_2_ - sVar31;
  auVar40._0_12_ = in_XMM4._0_12_;
  auVar40._12_2_ = in_XMM4._6_2_;
  auVar40._14_2_ = sVar23;
  auVar39._12_4_ = auVar40._12_4_;
  auVar39._0_10_ = in_XMM4._0_10_;
  auVar39._10_2_ = sVar20;
  auVar26._10_6_ = auVar39._10_6_;
  auVar26._0_8_ = in_XMM4._0_8_;
  auVar26._8_2_ = in_XMM4._4_2_;
  auVar5._4_8_ = auVar26._8_8_;
  auVar5._2_2_ = sVar19;
  auVar5._0_2_ = in_XMM4._2_2_;
  auVar49._0_12_ = in_XMM5._0_12_;
  auVar49._12_2_ = in_XMM5._6_2_;
  auVar49._14_2_ = sVar34;
  auVar48._12_4_ = auVar49._12_4_;
  auVar48._0_10_ = in_XMM5._0_10_;
  auVar48._10_2_ = sVar33;
  auVar47._10_6_ = auVar48._10_6_;
  auVar47._0_8_ = in_XMM5._0_8_;
  auVar47._8_2_ = in_XMM5._4_2_;
  auVar6._4_8_ = auVar47._8_8_;
  auVar6._2_2_ = sVar32;
  auVar6._0_2_ = in_XMM5._2_2_;
  auVar41._0_4_ = (int)sVar13 - (int)(short)(sVar22 - sVar24) >> 1;
  auVar41._4_4_ = (auVar5._0_4_ >> 0x10) - (auVar6._0_4_ >> 0x10) >> 1;
  auVar41._8_4_ = (auVar26._8_4_ >> 0x10) - (auVar47._8_4_ >> 0x10) >> 1;
  auVar41._12_4_ = (auVar39._12_4_ >> 0x10) - (auVar48._12_4_ >> 0x10) >> 1;
  auVar14 = packssdw(auVar41,auVar41);
  sVar46 = auVar14._0_2_ - sVar24;
  sVar50 = auVar14._2_2_ - sVar37;
  sVar51 = auVar14._4_2_ - sVar29;
  sVar52 = auVar14._6_2_ - sVar31;
  sVar38 = auVar14._0_2_ - auVar15._2_2_;
  sVar42 = auVar14._2_2_ - sVar36;
  sVar43 = auVar14._4_2_ - sVar28;
  sVar45 = auVar14._6_2_ - sVar30;
  sVar19 = sVar19 - sVar50;
  sVar23 = sVar23 - sVar52;
  sVar32 = sVar32 + sVar42;
  sVar34 = sVar34 + sVar45;
  sVar13 = (sVar13 - sVar46) + sVar19;
  sVar46 = sVar46 + sVar50;
  sVar21 = sVar38 + sVar42;
  sVar24 = (sVar22 - sVar24) + sVar38 + sVar32;
  sVar38 = (sVar20 - sVar51) - sVar23;
  sVar51 = sVar51 - sVar52;
  sVar44 = sVar43 - sVar45;
  sVar33 = (sVar33 + sVar43) - sVar34;
  auVar11._8_2_ = sVar30;
  auVar11._0_8_ = uVar3;
  auVar11._10_2_ = sVar24;
  auVar27._12_4_ = auVar11._8_4_;
  auVar27._10_2_ = sVar21;
  auVar9._4_2_ = sVar28;
  auVar9._0_4_ = auVar18._12_4_;
  auVar9._6_6_ = auVar27._10_6_;
  auVar7._4_8_ = auVar9._4_8_;
  auVar7._2_2_ = sVar46;
  auVar7._0_2_ = sVar36;
  auVar12._8_2_ = sVar31;
  auVar12._0_8_ = uVar4;
  auVar12._10_2_ = sVar33;
  auVar35._12_4_ = auVar12._8_4_;
  auVar35._10_2_ = sVar44;
  auVar10._4_2_ = sVar29;
  auVar10._0_4_ = CONCAT22(sVar31,sVar29);
  auVar10._6_6_ = auVar35._10_6_;
  auVar8._4_8_ = auVar10._4_8_;
  auVar8._2_2_ = sVar51;
  auVar8._0_2_ = sVar37;
  auVar15._0_4_ = (int)sVar13 - (int)sVar38 >> 1;
  auVar15._4_4_ = (auVar7._0_4_ >> 0x10) - (auVar8._0_4_ >> 0x10) >> 1;
  auVar15._8_4_ = (auVar9._4_4_ >> 0x10) - (auVar10._4_4_ >> 0x10) >> 1;
  auVar15._12_4_ = (auVar27._12_4_ >> 0x10) - (auVar35._12_4_ >> 0x10) >> 1;
  auVar14 = packssdw(auVar15,auVar15);
  sVar23 = auVar14._0_2_ - sVar23;
  sVar52 = auVar14._2_2_ - sVar52;
  sVar45 = auVar14._4_2_ - sVar45;
  sVar34 = auVar14._6_2_ - sVar34;
  sVar19 = auVar14._0_2_ - sVar19;
  sVar50 = auVar14._2_2_ - sVar50;
  sVar42 = auVar14._4_2_ - sVar42;
  sVar32 = auVar14._6_2_ - sVar32;
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + param_3);
  sVar13 = (sVar13 - sVar23) + (ushort)(byte)uVar1;
  sVar46 = (sVar46 - sVar52) + (ushort)(byte)((uint)uVar1 >> 8);
  sVar22 = (sVar21 - sVar45) + (ushort)(byte)((uint)uVar1 >> 0x10);
  sVar20 = (sVar24 - sVar34) + (ushort)(byte)((uint)uVar1 >> 0x18);
  sVar23 = sVar23 + ((ushort)uVar2 & 0xff);
  sVar52 = sVar52 + (ushort)(byte)((uint)uVar2 >> 8);
  sVar45 = sVar45 + (ushort)(byte)((uint)uVar2 >> 0x10);
  sVar34 = sVar34 + (ushort)(byte)((uint)uVar2 >> 0x18);
  *param_2 = CONCAT13((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                      CONCAT12((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                               CONCAT11((0 < sVar46) * (sVar46 < 0x100) * (char)sVar46 -
                                        (0xff < sVar46),
                                        (0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 -
                                        (0xff < sVar13))));
  *(uint *)((longlong)param_2 + param_3) =
       CONCAT13((0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34),
                CONCAT12((0 < sVar45) * (sVar45 < 0x100) * (char)sVar45 - (0xff < sVar45),
                         CONCAT11((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52),
                                  (0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 - (0xff < sVar23)))
               );
  param_2 = (undefined4 *)((longlong)param_2 + param_3 * 2);
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + param_3);
  sVar13 = sVar19 + (ushort)(byte)uVar1;
  sVar46 = sVar50 + (ushort)(byte)((uint)uVar1 >> 8);
  sVar22 = sVar42 + (ushort)(byte)((uint)uVar1 >> 0x10);
  sVar20 = sVar32 + (ushort)(byte)((uint)uVar1 >> 0x18);
  sVar19 = sVar38 + sVar19 + ((ushort)uVar2 & 0xff);
  sVar21 = sVar51 + sVar50 + (ushort)(byte)((uint)uVar2 >> 8);
  sVar24 = sVar44 + sVar42 + (ushort)(byte)((uint)uVar2 >> 0x10);
  sVar23 = sVar33 + sVar32 + (ushort)(byte)((uint)uVar2 >> 0x18);
  *param_2 = CONCAT13((0 < sVar20) * (sVar20 < 0x100) * (char)sVar20 - (0xff < sVar20),
                      CONCAT12((0 < sVar22) * (sVar22 < 0x100) * (char)sVar22 - (0xff < sVar22),
                               CONCAT11((0 < sVar46) * (sVar46 < 0x100) * (char)sVar46 -
                                        (0xff < sVar46),
                                        (0 < sVar13) * (sVar13 < 0x100) * (char)sVar13 -
                                        (0xff < sVar13))));
  *(uint *)((longlong)param_2 + param_3) =
       CONCAT13((0 < sVar23) * (sVar23 < 0x100) * (char)sVar23 - (0xff < sVar23),
                CONCAT12((0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 - (0xff < sVar24),
                         CONCAT11((0 < sVar21) * (sVar21 < 0x100) * (char)sVar21 - (0xff < sVar21),
                                  (0 < sVar19) * (sVar19 < 0x100) * (char)sVar19 - (0xff < sVar19)))
               );
  return;
}



// FUNCTION 145471d10 FUN_145471d10 body=15 status=ok
// SIG undefined FUN_145471d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471d10(undefined1 (*param_1) [16],char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [16];
  undefined1 auVar19 [15];
  unkuint9 Var20;
  undefined1 auVar21 [15];
  undefined1 auVar22 [13];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [13];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined2 uVar37;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  short sVar53;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  short sVar64;
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  short sVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  if (param_4 < 2) {
    FUN_145454450();
    return;
  }
  auVar43 = packssdw(*param_1,param_1[1]);
  auVar28 = packssdw(param_1[2],param_1[3]);
  auVar41._0_12_ = auVar43._0_12_;
  auVar41._12_2_ = auVar43._6_2_;
  auVar41._14_2_ = auVar28._6_2_;
  auVar40._12_4_ = auVar41._12_4_;
  auVar40._0_10_ = auVar43._0_10_;
  auVar40._10_2_ = auVar28._4_2_;
  auVar39._10_6_ = auVar40._10_6_;
  auVar39._0_8_ = auVar43._0_8_;
  auVar39._8_2_ = auVar43._4_2_;
  uVar37 = auVar28._2_2_;
  auVar54._2_8_ = auVar39._8_8_;
  auVar54._0_2_ = uVar37;
  auVar54._10_6_ = 0;
  auVar29._12_4_ = 0;
  auVar29._0_12_ = SUB1612(auVar54 << 0x30,4);
  auVar29 = auVar29 << 0x20;
  auVar67._0_12_ = auVar29._0_12_;
  auVar67._12_2_ = uVar37;
  auVar67._14_2_ = auVar28._10_2_;
  auVar66._12_4_ = auVar67._12_4_;
  auVar66._0_10_ = auVar29._0_10_;
  auVar66._10_2_ = auVar43._10_2_;
  auVar65._10_6_ = auVar66._10_6_;
  auVar65._0_8_ = auVar29._0_8_;
  auVar65._8_2_ = auVar43._2_2_;
  auVar80._2_8_ = auVar65._8_8_;
  auVar80._0_2_ = auVar28._8_2_;
  auVar80._10_6_ = 0;
  auVar77._12_4_ = 0;
  auVar77._0_12_ = SUB1612(auVar80 << 0x30,4);
  auVar77 = auVar77 << 0x20;
  auVar47._0_12_ = auVar77._0_12_;
  auVar47._12_2_ = auVar28._8_2_;
  auVar47._14_2_ = auVar28._12_2_;
  auVar46._12_4_ = auVar47._12_4_;
  auVar46._0_10_ = auVar77._0_10_;
  auVar46._10_2_ = auVar28._4_2_;
  auVar45._10_6_ = auVar46._10_6_;
  auVar45._0_8_ = auVar77._0_8_;
  auVar45._8_2_ = auVar28._0_2_;
  auVar44._8_8_ = auVar45._8_8_;
  auVar44._6_2_ = auVar43._12_2_;
  auVar44._4_2_ = auVar43._8_2_;
  auVar44._2_2_ = auVar43._4_2_;
  auVar44._0_2_ = auVar43._0_2_;
  auVar29 = pmaddwd(_DAT_149d4ff10,auVar44);
  auVar68._2_2_ = auVar43._6_2_;
  auVar68._0_2_ = auVar43._2_2_;
  auVar68._4_2_ = auVar43._10_2_;
  auVar68._6_2_ = auVar43._14_2_;
  auVar68._8_2_ = uVar37;
  auVar68._10_2_ = auVar28._6_2_;
  auVar68._12_2_ = auVar28._10_2_;
  auVar68._14_2_ = auVar28._14_2_;
  auVar30._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar30._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar30._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar30._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar29 = pmaddwd(_DAT_149d4fe30,auVar68);
  auVar54 = pmaddwd(_DAT_149d4fe60,auVar44);
  auVar42._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar42._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar42._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar42._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar55._0_4_ = auVar54._0_4_ + 0x2000 >> 0xe;
  auVar55._4_4_ = auVar54._4_4_ + 0x2000 >> 0xe;
  auVar55._8_4_ = auVar54._8_4_ + 0x2000 >> 0xe;
  auVar55._12_4_ = auVar54._12_4_ + 0x2000 >> 0xe;
  auVar54 = packssdw(auVar55,auVar30);
  auVar29 = pmaddwd(_DAT_149d4fee0,auVar68);
  uVar2 = *(undefined4 *)param_2;
  auVar31._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar31._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar31._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar31._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar29 = packssdw(auVar42,auVar31);
  sVar49 = auVar29._2_2_ + auVar54._2_2_;
  sVar50 = auVar29._4_2_ + auVar54._4_2_;
  sVar51 = auVar29._6_2_ + auVar54._6_2_;
  sVar52 = auVar29._10_2_ + auVar54._10_2_;
  sVar53 = auVar54._0_2_ - auVar29._0_2_;
  sVar61 = auVar54._2_2_ - auVar29._2_2_;
  sVar62 = auVar54._10_2_ - auVar29._10_2_;
  sVar63 = auVar54._12_2_ - auVar29._12_2_;
  sVar64 = auVar54._14_2_ - auVar29._14_2_;
  auVar43._2_8_ =
       (longlong)
       (CONCAT64(CONCAT42(CONCAT22(sVar64,sVar51),sVar63),CONCAT22(sVar50,sVar51)) >> 0x10);
  auVar43._0_2_ = sVar62;
  auVar43._10_6_ = 0;
  auVar28._12_4_ = 0;
  auVar28._0_12_ = SUB1612(auVar43 << 0x30,4);
  auVar28 = auVar28 << 0x20;
  auVar59._0_12_ = auVar28._0_12_;
  auVar59._12_2_ = sVar62;
  auVar59._14_2_ = sVar61;
  auVar58._12_4_ = auVar59._12_4_;
  auVar58._0_10_ = auVar28._0_10_;
  auVar58._10_2_ = sVar52;
  auVar57._10_6_ = auVar58._10_6_;
  auVar57._0_8_ = auVar28._0_8_;
  auVar57._8_2_ = sVar49;
  auVar18._2_8_ = auVar57._8_8_;
  auVar18._0_2_ = sVar53;
  auVar18._10_6_ = 0;
  auVar56._12_4_ = 0;
  auVar56._0_12_ = SUB1612(auVar18 << 0x30,4);
  auVar56 = auVar56 << 0x20;
  auVar35._0_12_ = auVar56._0_12_;
  auVar35._12_2_ = sVar53;
  auVar35._14_2_ = auVar54._4_2_ - auVar29._4_2_;
  auVar34._12_4_ = auVar35._12_4_;
  auVar34._0_10_ = auVar56._0_10_;
  auVar34._10_2_ = sVar63;
  auVar33._10_6_ = auVar34._10_6_;
  auVar33._0_8_ = auVar56._0_8_;
  auVar33._8_2_ = auVar54._8_2_ - auVar29._8_2_;
  auVar32._8_8_ = auVar33._8_8_;
  auVar32._6_2_ = auVar29._12_2_ + auVar54._12_2_;
  auVar32._4_2_ = auVar29._8_2_ + auVar54._8_2_;
  auVar32._2_2_ = sVar50;
  auVar32._0_2_ = auVar29._0_2_ + auVar54._0_2_;
  auVar80 = pmaddwd(_DAT_149d4fe60,auVar32);
  auVar77 = pmaddwd(_DAT_149d4ff10,auVar32);
  uVar3 = *(undefined4 *)(param_2 + param_3);
  uVar38 = CONCAT44(uVar3,uVar2);
  auVar60._2_2_ = sVar51;
  auVar60._0_2_ = sVar49;
  auVar60._4_2_ = sVar52;
  auVar60._6_2_ = auVar29._14_2_ + auVar54._14_2_;
  auVar60._8_2_ = sVar62;
  auVar60._10_2_ = sVar64;
  auVar60._12_2_ = sVar61;
  auVar60._14_2_ = auVar54._6_2_ - auVar29._6_2_;
  auVar54 = pmaddwd(_DAT_149d4fe30,auVar60);
  auVar29 = pmaddwd(_DAT_149d4fee0,auVar60);
  auVar81._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
  auVar81._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
  auVar81._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
  auVar81._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
  auVar78._0_4_ = auVar77._0_4_ + 0x2000 >> 0xe;
  auVar78._4_4_ = auVar77._4_4_ + 0x2000 >> 0xe;
  auVar78._8_4_ = auVar77._8_4_ + 0x2000 >> 0xe;
  auVar78._12_4_ = auVar77._12_4_ + 0x2000 >> 0xe;
  auVar77 = packssdw(auVar81,auVar78);
  auVar4._8_6_ = 0;
  auVar4._0_8_ = uVar38;
  auVar4[0xe] = (char)((uint)uVar3 >> 0x18);
  auVar6._8_4_ = 0;
  auVar6._0_8_ = uVar38;
  auVar6[0xc] = (char)((uint)uVar3 >> 0x10);
  auVar6._13_2_ = auVar4._13_2_;
  auVar8._8_4_ = 0;
  auVar8._0_8_ = uVar38;
  auVar8._12_3_ = auVar6._12_3_;
  auVar10._8_2_ = 0;
  auVar10._0_8_ = uVar38;
  auVar10[10] = (char)((uint)uVar3 >> 8);
  auVar10._11_4_ = auVar8._11_4_;
  auVar12._8_2_ = 0;
  auVar12._0_8_ = uVar38;
  auVar12._10_5_ = auVar10._10_5_;
  auVar14[8] = (char)uVar3;
  auVar14._0_8_ = uVar38;
  auVar14._9_6_ = auVar12._9_6_;
  auVar19._7_8_ = 0;
  auVar19._0_7_ = auVar14._8_7_;
  Var20 = CONCAT81(SUB158(auVar19 << 0x40,7),(char)((uint)uVar2 >> 0x18));
  auVar26._9_6_ = 0;
  auVar26._0_9_ = Var20;
  auVar16[4] = (char)((uint)uVar2 >> 0x10);
  auVar16._0_4_ = uVar2;
  auVar16._5_10_ = SUB1510(auVar26 << 0x30,5);
  auVar21._11_4_ = 0;
  auVar21._0_11_ = auVar16._4_11_;
  auVar22._1_12_ = SUB1512(auVar21 << 0x20,3);
  auVar22[0] = (char)((uint)uVar2 >> 8);
  auVar79._0_4_ = auVar54._0_4_ + 0x2000 >> 0xe;
  auVar79._4_4_ = auVar54._4_4_ + 0x2000 >> 0xe;
  auVar79._8_4_ = auVar54._8_4_ + 0x2000 >> 0xe;
  auVar79._12_4_ = auVar54._12_4_ + 0x2000 >> 0xe;
  auVar76._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar76._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar76._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar76._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar54 = packssdw(auVar79,auVar76);
  auVar36._0_2_ = auVar54._0_2_ + auVar77._0_2_ + 8;
  auVar36._2_2_ = auVar54._2_2_ + auVar77._2_2_ + 8;
  auVar36._4_2_ = auVar54._4_2_ + auVar77._4_2_ + 8;
  auVar36._6_2_ = auVar54._6_2_ + auVar77._6_2_ + 8;
  auVar36._8_2_ = auVar54._8_2_ + auVar77._8_2_ + 8;
  auVar36._10_2_ = auVar54._10_2_ + auVar77._10_2_ + 8;
  auVar36._12_2_ = auVar54._12_2_ + auVar77._12_2_ + 8;
  auVar36._14_2_ = auVar54._14_2_ + auVar77._14_2_ + 8;
  auVar29 = psraw(auVar36,4);
  uVar3 = *(undefined4 *)(param_2 + param_3 * 2);
  sVar64 = (ushort)(byte)uVar2 + auVar29._0_2_;
  sVar69 = auVar22._0_2_ + auVar29._2_2_;
  sVar70 = auVar16._4_2_ + auVar29._4_2_;
  sVar71 = (short)Var20 + auVar29._6_2_;
  sVar72 = auVar14._8_2_ + auVar29._8_2_;
  sVar73 = auVar10._10_2_ + auVar29._10_2_;
  sVar74 = auVar6._12_2_ + auVar29._12_2_;
  sVar75 = (auVar4._13_2_ >> 8) + auVar29._14_2_;
  uVar2 = *(undefined4 *)(param_2 + param_3 * 3);
  auVar48._0_2_ = (auVar77._8_2_ - auVar54._8_2_) + 8;
  auVar48._2_2_ = (auVar77._10_2_ - auVar54._10_2_) + 8;
  auVar48._4_2_ = (auVar77._12_2_ - auVar54._12_2_) + 8;
  auVar48._6_2_ = (auVar77._14_2_ - auVar54._14_2_) + 8;
  auVar48._8_2_ = (auVar77._0_2_ - auVar54._0_2_) + 8;
  auVar48._10_2_ = (auVar77._2_2_ - auVar54._2_2_) + 8;
  auVar48._12_2_ = (auVar77._4_2_ - auVar54._4_2_) + 8;
  auVar48._14_2_ = (auVar77._6_2_ - auVar54._6_2_) + 8;
  uVar38 = CONCAT44(uVar2,uVar3);
  auVar29 = psraw(auVar48,4);
  auVar5._8_6_ = 0;
  auVar5._0_8_ = uVar38;
  auVar5[0xe] = (char)((uint)uVar2 >> 0x18);
  auVar7._8_4_ = 0;
  auVar7._0_8_ = uVar38;
  auVar7[0xc] = (char)((uint)uVar2 >> 0x10);
  auVar7._13_2_ = auVar5._13_2_;
  auVar9._8_4_ = 0;
  auVar9._0_8_ = uVar38;
  auVar9._12_3_ = auVar7._12_3_;
  auVar11._8_2_ = 0;
  auVar11._0_8_ = uVar38;
  auVar11[10] = (char)((uint)uVar2 >> 8);
  auVar11._11_4_ = auVar9._11_4_;
  auVar13._8_2_ = 0;
  auVar13._0_8_ = uVar38;
  auVar13._10_5_ = auVar11._10_5_;
  auVar15[8] = (char)uVar2;
  auVar15._0_8_ = uVar38;
  auVar15._9_6_ = auVar13._9_6_;
  auVar23._7_8_ = 0;
  auVar23._0_7_ = auVar15._8_7_;
  Var20 = CONCAT81(SUB158(auVar23 << 0x40,7),(char)((uint)uVar3 >> 0x18));
  auVar27._9_6_ = 0;
  auVar27._0_9_ = Var20;
  auVar17[4] = (char)((uint)uVar3 >> 0x10);
  auVar17._0_4_ = uVar3;
  auVar17._5_10_ = SUB1510(auVar27 << 0x30,5);
  auVar24._11_4_ = 0;
  auVar24._0_11_ = auVar17._4_11_;
  auVar25._1_12_ = SUB1512(auVar24 << 0x20,3);
  auVar25[0] = (char)((uint)uVar3 >> 8);
  sVar49 = auVar29._0_2_ + (ushort)(byte)uVar3;
  sVar50 = auVar29._2_2_ + auVar25._0_2_;
  sVar51 = auVar29._4_2_ + auVar17._4_2_;
  sVar52 = auVar29._6_2_ + (short)Var20;
  sVar53 = auVar29._8_2_ + auVar15._8_2_;
  sVar61 = auVar29._10_2_ + auVar11._10_2_;
  sVar62 = auVar29._12_2_ + auVar7._12_2_;
  sVar63 = auVar29._14_2_ + (auVar5._13_2_ >> 8);
  *param_2 = (0 < sVar64) * (sVar64 < 0x100) * (char)sVar64 - (0xff < sVar64);
  param_2[1] = (0 < sVar69) * (sVar69 < 0x100) * (char)sVar69 - (0xff < sVar69);
  param_2[2] = (0 < sVar70) * (sVar70 < 0x100) * (char)sVar70 - (0xff < sVar70);
  param_2[3] = (0 < sVar71) * (sVar71 < 0x100) * (char)sVar71 - (0xff < sVar71);
  pcVar1 = param_2 + param_3;
  *pcVar1 = (0 < sVar72) * (sVar72 < 0x100) * (char)sVar72 - (0xff < sVar72);
  pcVar1[1] = (0 < sVar73) * (sVar73 < 0x100) * (char)sVar73 - (0xff < sVar73);
  pcVar1[2] = (0 < sVar74) * (sVar74 < 0x100) * (char)sVar74 - (0xff < sVar74);
  pcVar1[3] = (0 < sVar75) * (sVar75 < 0x100) * (char)sVar75 - (0xff < sVar75);
  pcVar1 = param_2 + param_3 * 2;
  *pcVar1 = (0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49);
  pcVar1[1] = (0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50);
  pcVar1[2] = (0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51);
  pcVar1[3] = (0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52);
  param_2 = param_2 + param_3 * 3;
  *param_2 = (0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53);
  param_2[1] = (0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 - (0xff < sVar61);
  param_2[2] = (0 < sVar62) * (sVar62 < 0x100) * (char)sVar62 - (0xff < sVar62);
  param_2[3] = (0 < sVar63) * (sVar63 < 0x100) * (char)sVar63 - (0xff < sVar63);
  return;
}



// FUNCTION 145471d20 FUN_145471d20 body=28 status=ok
// SIG undefined FUN_145471d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471d20(short *param_1,ulonglong *param_2,int param_3,int param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  unkuint9 Var59;
  undefined1 auVar60 [11];
  undefined1 auVar61 [13];
  undefined1 auVar62 [15];
  unkuint9 Var63;
  undefined1 auVar64 [11];
  undefined1 auVar65 [15];
  undefined1 auVar66 [11];
  undefined1 auVar67 [13];
  undefined1 auVar68 [15];
  undefined1 auVar69 [11];
  undefined1 auVar70 [15];
  undefined1 auVar71 [11];
  undefined1 auVar72 [15];
  undefined1 auVar73 [11];
  undefined1 auVar74 [15];
  undefined1 auVar75 [11];
  undefined1 auVar76 [15];
  undefined1 auVar77 [11];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  longlong lVar94;
  longlong lVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  
  if (param_4 == 1) {
    lVar95 = (longlong)param_3;
    uVar2 = *param_2;
    uVar3 = *(ulonglong *)(lVar95 + (longlong)param_2);
    auVar11._8_6_ = 0;
    auVar11._0_8_ = uVar2;
    auVar11[0xe] = (char)(uVar2 >> 0x38);
    auVar19._8_4_ = 0;
    auVar19._0_8_ = uVar2;
    auVar19[0xc] = (char)(uVar2 >> 0x30);
    auVar19._13_2_ = auVar11._13_2_;
    auVar27._8_4_ = 0;
    auVar27._0_8_ = uVar2;
    auVar27._12_3_ = auVar19._12_3_;
    auVar35._8_2_ = 0;
    auVar35._0_8_ = uVar2;
    auVar35[10] = (char)(uVar2 >> 0x28);
    auVar35._11_4_ = auVar27._11_4_;
    auVar43._8_2_ = 0;
    auVar43._0_8_ = uVar2;
    auVar43._10_5_ = auVar35._10_5_;
    auVar51[8] = (char)(uVar2 >> 0x20);
    auVar51._0_8_ = uVar2;
    auVar51._9_6_ = auVar43._9_6_;
    auVar58._7_8_ = 0;
    auVar58._0_7_ = auVar51._8_7_;
    Var59 = CONCAT81(SUB158(auVar58 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar78._9_6_ = 0;
    auVar78._0_9_ = Var59;
    auVar60._1_10_ = SUB1510(auVar78 << 0x30,5);
    auVar60[0] = (char)(uVar2 >> 0x10);
    auVar79._11_4_ = 0;
    auVar79._0_11_ = auVar60;
    auVar61._1_12_ = SUB1512(auVar79 << 0x20,3);
    auVar61[0] = (char)(uVar2 >> 8);
    auVar4._8_6_ = 0;
    auVar4._0_8_ = uVar3;
    auVar4[0xe] = (char)(uVar3 >> 0x38);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar3;
    auVar12[0xc] = (char)(uVar3 >> 0x30);
    auVar12._13_2_ = auVar4._13_2_;
    auVar20._8_4_ = 0;
    auVar20._0_8_ = uVar3;
    auVar20._12_3_ = auVar12._12_3_;
    auVar28._8_2_ = 0;
    auVar28._0_8_ = uVar3;
    auVar28[10] = (char)(uVar3 >> 0x28);
    auVar28._11_4_ = auVar20._11_4_;
    auVar36._8_2_ = 0;
    auVar36._0_8_ = uVar3;
    auVar36._10_5_ = auVar28._10_5_;
    auVar44[8] = (char)(uVar3 >> 0x20);
    auVar44._0_8_ = uVar3;
    auVar44._9_6_ = auVar36._9_6_;
    auVar62._7_8_ = 0;
    auVar62._0_7_ = auVar44._8_7_;
    Var63 = CONCAT81(SUB158(auVar62 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar80._9_6_ = 0;
    auVar80._0_9_ = Var63;
    auVar64._1_10_ = SUB1510(auVar80 << 0x30,5);
    auVar64[0] = (char)(uVar3 >> 0x10);
    auVar81._11_4_ = 0;
    auVar81._0_11_ = auVar64;
    auVar52[2] = (char)(uVar3 >> 8);
    auVar52._0_2_ = (ushort)uVar3;
    auVar52._3_12_ = SUB1512(auVar81 << 0x20,3);
    sVar104 = (short)((int)((longlong)
                            ((int)((longlong)(*param_1 * 0x2d41) + 0x2000 >> 0xe) * 0x2d41) + 0x2000
                           >> 0xe) + 0x10 >> 5);
    lVar94 = (longlong)(param_3 * 2);
    sVar105 = (ushort)(byte)uVar2 + sVar104;
    sVar106 = auVar61._0_2_ + sVar104;
    sVar107 = auVar60._0_2_ + sVar104;
    sVar108 = (short)Var59 + sVar104;
    sVar109 = auVar51._8_2_ + sVar104;
    sVar110 = auVar35._10_2_ + sVar104;
    sVar111 = auVar19._12_2_ + sVar104;
    sVar112 = (auVar11._13_2_ >> 8) + sVar104;
    sVar96 = ((ushort)uVar3 & 0xff) + sVar104;
    sVar97 = auVar52._2_2_ + sVar104;
    sVar98 = auVar64._0_2_ + sVar104;
    sVar99 = (short)Var63 + sVar104;
    sVar100 = auVar44._8_2_ + sVar104;
    sVar101 = auVar28._10_2_ + sVar104;
    sVar102 = auVar12._12_2_ + sVar104;
    sVar103 = (auVar4._13_2_ >> 8) + sVar104;
    *(char *)param_2 = (0 < sVar105) * (sVar105 < 0x100) * (char)sVar105 - (0xff < sVar105);
    *(char *)((longlong)param_2 + 1) =
         (0 < sVar106) * (sVar106 < 0x100) * (char)sVar106 - (0xff < sVar106);
    *(char *)((longlong)param_2 + 2) =
         (0 < sVar107) * (sVar107 < 0x100) * (char)sVar107 - (0xff < sVar107);
    *(char *)((longlong)param_2 + 3) =
         (0 < sVar108) * (sVar108 < 0x100) * (char)sVar108 - (0xff < sVar108);
    *(char *)((longlong)param_2 + 4) =
         (0 < sVar109) * (sVar109 < 0x100) * (char)sVar109 - (0xff < sVar109);
    *(char *)((longlong)param_2 + 5) =
         (0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110);
    *(char *)((longlong)param_2 + 6) =
         (0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111);
    *(char *)((longlong)param_2 + 7) =
         (0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112);
    pcVar1 = (char *)(lVar95 + (longlong)param_2);
    *pcVar1 = (0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96);
    pcVar1[1] = (0 < sVar97) * (sVar97 < 0x100) * (char)sVar97 - (0xff < sVar97);
    pcVar1[2] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
    pcVar1[3] = (0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99);
    pcVar1[4] = (0 < sVar100) * (sVar100 < 0x100) * (char)sVar100 - (0xff < sVar100);
    pcVar1[5] = (0 < sVar101) * (sVar101 < 0x100) * (char)sVar101 - (0xff < sVar101);
    pcVar1[6] = (0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102);
    pcVar1[7] = (0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103);
    param_2 = (ulonglong *)((longlong)param_2 + lVar94);
    uVar2 = *param_2;
    uVar3 = *(ulonglong *)(lVar95 + (longlong)param_2);
    auVar5._8_6_ = 0;
    auVar5._0_8_ = uVar2;
    auVar5[0xe] = (char)(uVar2 >> 0x38);
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar2;
    auVar13[0xc] = (char)(uVar2 >> 0x30);
    auVar13._13_2_ = auVar5._13_2_;
    auVar21._8_4_ = 0;
    auVar21._0_8_ = uVar2;
    auVar21._12_3_ = auVar13._12_3_;
    auVar29._8_2_ = 0;
    auVar29._0_8_ = uVar2;
    auVar29[10] = (char)(uVar2 >> 0x28);
    auVar29._11_4_ = auVar21._11_4_;
    auVar37._8_2_ = 0;
    auVar37._0_8_ = uVar2;
    auVar37._10_5_ = auVar29._10_5_;
    auVar45[8] = (char)(uVar2 >> 0x20);
    auVar45._0_8_ = uVar2;
    auVar45._9_6_ = auVar37._9_6_;
    auVar65._7_8_ = 0;
    auVar65._0_7_ = auVar45._8_7_;
    Var59 = CONCAT81(SUB158(auVar65 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar82._9_6_ = 0;
    auVar82._0_9_ = Var59;
    auVar66._1_10_ = SUB1510(auVar82 << 0x30,5);
    auVar66[0] = (char)(uVar2 >> 0x10);
    auVar83._11_4_ = 0;
    auVar83._0_11_ = auVar66;
    auVar67._1_12_ = SUB1512(auVar83 << 0x20,3);
    auVar67[0] = (char)(uVar2 >> 8);
    sVar105 = (ushort)(byte)uVar2 + sVar104;
    sVar106 = auVar67._0_2_ + sVar104;
    sVar107 = auVar66._0_2_ + sVar104;
    sVar108 = (short)Var59 + sVar104;
    sVar109 = auVar45._8_2_ + sVar104;
    sVar110 = auVar29._10_2_ + sVar104;
    sVar111 = auVar13._12_2_ + sVar104;
    sVar112 = (auVar5._13_2_ >> 8) + sVar104;
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar3;
    auVar6[0xe] = (char)(uVar3 >> 0x38);
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar3;
    auVar14[0xc] = (char)(uVar3 >> 0x30);
    auVar14._13_2_ = auVar6._13_2_;
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar3;
    auVar22._12_3_ = auVar14._12_3_;
    auVar30._8_2_ = 0;
    auVar30._0_8_ = uVar3;
    auVar30[10] = (char)(uVar3 >> 0x28);
    auVar30._11_4_ = auVar22._11_4_;
    auVar38._8_2_ = 0;
    auVar38._0_8_ = uVar3;
    auVar38._10_5_ = auVar30._10_5_;
    auVar46[8] = (char)(uVar3 >> 0x20);
    auVar46._0_8_ = uVar3;
    auVar46._9_6_ = auVar38._9_6_;
    auVar68._7_8_ = 0;
    auVar68._0_7_ = auVar46._8_7_;
    Var59 = CONCAT81(SUB158(auVar68 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar84._9_6_ = 0;
    auVar84._0_9_ = Var59;
    auVar69._1_10_ = SUB1510(auVar84 << 0x30,5);
    auVar69[0] = (char)(uVar3 >> 0x10);
    auVar85._11_4_ = 0;
    auVar85._0_11_ = auVar69;
    auVar53[2] = (char)(uVar3 >> 8);
    auVar53._0_2_ = (ushort)uVar3;
    auVar53._3_12_ = SUB1512(auVar85 << 0x20,3);
    sVar96 = ((ushort)uVar3 & 0xff) + sVar104;
    sVar97 = auVar53._2_2_ + sVar104;
    sVar98 = auVar69._0_2_ + sVar104;
    sVar99 = (short)Var59 + sVar104;
    sVar100 = auVar46._8_2_ + sVar104;
    sVar101 = auVar30._10_2_ + sVar104;
    sVar102 = auVar14._12_2_ + sVar104;
    sVar103 = (auVar6._13_2_ >> 8) + sVar104;
    *(char *)param_2 = (0 < sVar105) * (sVar105 < 0x100) * (char)sVar105 - (0xff < sVar105);
    *(char *)((longlong)param_2 + 1) =
         (0 < sVar106) * (sVar106 < 0x100) * (char)sVar106 - (0xff < sVar106);
    *(char *)((longlong)param_2 + 2) =
         (0 < sVar107) * (sVar107 < 0x100) * (char)sVar107 - (0xff < sVar107);
    *(char *)((longlong)param_2 + 3) =
         (0 < sVar108) * (sVar108 < 0x100) * (char)sVar108 - (0xff < sVar108);
    *(char *)((longlong)param_2 + 4) =
         (0 < sVar109) * (sVar109 < 0x100) * (char)sVar109 - (0xff < sVar109);
    *(char *)((longlong)param_2 + 5) =
         (0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110);
    *(char *)((longlong)param_2 + 6) =
         (0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111);
    *(char *)((longlong)param_2 + 7) =
         (0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112);
    pcVar1 = (char *)(lVar95 + (longlong)param_2);
    *pcVar1 = (0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96);
    pcVar1[1] = (0 < sVar97) * (sVar97 < 0x100) * (char)sVar97 - (0xff < sVar97);
    pcVar1[2] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
    pcVar1[3] = (0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99);
    pcVar1[4] = (0 < sVar100) * (sVar100 < 0x100) * (char)sVar100 - (0xff < sVar100);
    pcVar1[5] = (0 < sVar101) * (sVar101 < 0x100) * (char)sVar101 - (0xff < sVar101);
    pcVar1[6] = (0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102);
    pcVar1[7] = (0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103);
    param_2 = (ulonglong *)((longlong)param_2 + lVar94);
    uVar2 = *param_2;
    uVar3 = *(ulonglong *)(lVar95 + (longlong)param_2);
    auVar7._8_6_ = 0;
    auVar7._0_8_ = uVar2;
    auVar7[0xe] = (char)(uVar2 >> 0x38);
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar2;
    auVar15[0xc] = (char)(uVar2 >> 0x30);
    auVar15._13_2_ = auVar7._13_2_;
    auVar23._8_4_ = 0;
    auVar23._0_8_ = uVar2;
    auVar23._12_3_ = auVar15._12_3_;
    auVar31._8_2_ = 0;
    auVar31._0_8_ = uVar2;
    auVar31[10] = (char)(uVar2 >> 0x28);
    auVar31._11_4_ = auVar23._11_4_;
    auVar39._8_2_ = 0;
    auVar39._0_8_ = uVar2;
    auVar39._10_5_ = auVar31._10_5_;
    auVar47[8] = (char)(uVar2 >> 0x20);
    auVar47._0_8_ = uVar2;
    auVar47._9_6_ = auVar39._9_6_;
    auVar70._7_8_ = 0;
    auVar70._0_7_ = auVar47._8_7_;
    Var59 = CONCAT81(SUB158(auVar70 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar86._9_6_ = 0;
    auVar86._0_9_ = Var59;
    auVar71._1_10_ = SUB1510(auVar86 << 0x30,5);
    auVar71[0] = (char)(uVar2 >> 0x10);
    auVar87._11_4_ = 0;
    auVar87._0_11_ = auVar71;
    auVar54[2] = (char)(uVar2 >> 8);
    auVar54._0_2_ = (ushort)uVar2;
    auVar54._3_12_ = SUB1512(auVar87 << 0x20,3);
    sVar105 = ((ushort)uVar2 & 0xff) + sVar104;
    sVar106 = auVar54._2_2_ + sVar104;
    sVar107 = auVar71._0_2_ + sVar104;
    sVar108 = (short)Var59 + sVar104;
    sVar109 = auVar47._8_2_ + sVar104;
    sVar110 = auVar31._10_2_ + sVar104;
    sVar111 = auVar15._12_2_ + sVar104;
    sVar112 = (auVar7._13_2_ >> 8) + sVar104;
    auVar8._8_6_ = 0;
    auVar8._0_8_ = uVar3;
    auVar8[0xe] = (char)(uVar3 >> 0x38);
    auVar16._8_4_ = 0;
    auVar16._0_8_ = uVar3;
    auVar16[0xc] = (char)(uVar3 >> 0x30);
    auVar16._13_2_ = auVar8._13_2_;
    auVar24._8_4_ = 0;
    auVar24._0_8_ = uVar3;
    auVar24._12_3_ = auVar16._12_3_;
    auVar32._8_2_ = 0;
    auVar32._0_8_ = uVar3;
    auVar32[10] = (char)(uVar3 >> 0x28);
    auVar32._11_4_ = auVar24._11_4_;
    auVar40._8_2_ = 0;
    auVar40._0_8_ = uVar3;
    auVar40._10_5_ = auVar32._10_5_;
    auVar48[8] = (char)(uVar3 >> 0x20);
    auVar48._0_8_ = uVar3;
    auVar48._9_6_ = auVar40._9_6_;
    auVar72._7_8_ = 0;
    auVar72._0_7_ = auVar48._8_7_;
    Var59 = CONCAT81(SUB158(auVar72 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar88._9_6_ = 0;
    auVar88._0_9_ = Var59;
    auVar73._1_10_ = SUB1510(auVar88 << 0x30,5);
    auVar73[0] = (char)(uVar3 >> 0x10);
    auVar89._11_4_ = 0;
    auVar89._0_11_ = auVar73;
    auVar55[2] = (char)(uVar3 >> 8);
    auVar55._0_2_ = (ushort)uVar3;
    auVar55._3_12_ = SUB1512(auVar89 << 0x20,3);
    sVar96 = ((ushort)uVar3 & 0xff) + sVar104;
    sVar97 = auVar55._2_2_ + sVar104;
    sVar98 = auVar73._0_2_ + sVar104;
    sVar99 = (short)Var59 + sVar104;
    sVar100 = auVar48._8_2_ + sVar104;
    sVar101 = auVar32._10_2_ + sVar104;
    sVar102 = auVar16._12_2_ + sVar104;
    sVar103 = (auVar8._13_2_ >> 8) + sVar104;
    *(char *)param_2 = (0 < sVar105) * (sVar105 < 0x100) * (char)sVar105 - (0xff < sVar105);
    *(char *)((longlong)param_2 + 1) =
         (0 < sVar106) * (sVar106 < 0x100) * (char)sVar106 - (0xff < sVar106);
    *(char *)((longlong)param_2 + 2) =
         (0 < sVar107) * (sVar107 < 0x100) * (char)sVar107 - (0xff < sVar107);
    *(char *)((longlong)param_2 + 3) =
         (0 < sVar108) * (sVar108 < 0x100) * (char)sVar108 - (0xff < sVar108);
    *(char *)((longlong)param_2 + 4) =
         (0 < sVar109) * (sVar109 < 0x100) * (char)sVar109 - (0xff < sVar109);
    *(char *)((longlong)param_2 + 5) =
         (0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110);
    *(char *)((longlong)param_2 + 6) =
         (0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111);
    *(char *)((longlong)param_2 + 7) =
         (0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112);
    pcVar1 = (char *)(lVar95 + (longlong)param_2);
    *pcVar1 = (0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96);
    pcVar1[1] = (0 < sVar97) * (sVar97 < 0x100) * (char)sVar97 - (0xff < sVar97);
    pcVar1[2] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
    pcVar1[3] = (0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99);
    pcVar1[4] = (0 < sVar100) * (sVar100 < 0x100) * (char)sVar100 - (0xff < sVar100);
    pcVar1[5] = (0 < sVar101) * (sVar101 < 0x100) * (char)sVar101 - (0xff < sVar101);
    pcVar1[6] = (0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102);
    pcVar1[7] = (0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103);
    param_2 = (ulonglong *)((longlong)param_2 + lVar94);
    uVar2 = *param_2;
    uVar3 = *(ulonglong *)(lVar95 + (longlong)param_2);
    auVar9._8_6_ = 0;
    auVar9._0_8_ = uVar2;
    auVar9[0xe] = (char)(uVar2 >> 0x38);
    auVar17._8_4_ = 0;
    auVar17._0_8_ = uVar2;
    auVar17[0xc] = (char)(uVar2 >> 0x30);
    auVar17._13_2_ = auVar9._13_2_;
    auVar25._8_4_ = 0;
    auVar25._0_8_ = uVar2;
    auVar25._12_3_ = auVar17._12_3_;
    auVar33._8_2_ = 0;
    auVar33._0_8_ = uVar2;
    auVar33[10] = (char)(uVar2 >> 0x28);
    auVar33._11_4_ = auVar25._11_4_;
    auVar41._8_2_ = 0;
    auVar41._0_8_ = uVar2;
    auVar41._10_5_ = auVar33._10_5_;
    auVar49[8] = (char)(uVar2 >> 0x20);
    auVar49._0_8_ = uVar2;
    auVar49._9_6_ = auVar41._9_6_;
    auVar74._7_8_ = 0;
    auVar74._0_7_ = auVar49._8_7_;
    Var59 = CONCAT81(SUB158(auVar74 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar90._9_6_ = 0;
    auVar90._0_9_ = Var59;
    auVar75._1_10_ = SUB1510(auVar90 << 0x30,5);
    auVar75[0] = (char)(uVar2 >> 0x10);
    auVar91._11_4_ = 0;
    auVar91._0_11_ = auVar75;
    auVar56[2] = (char)(uVar2 >> 8);
    auVar56._0_2_ = (ushort)uVar2;
    auVar56._3_12_ = SUB1512(auVar91 << 0x20,3);
    auVar10._8_6_ = 0;
    auVar10._0_8_ = uVar3;
    auVar10[0xe] = (char)(uVar3 >> 0x38);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar3;
    auVar18[0xc] = (char)(uVar3 >> 0x30);
    auVar18._13_2_ = auVar10._13_2_;
    auVar26._8_4_ = 0;
    auVar26._0_8_ = uVar3;
    auVar26._12_3_ = auVar18._12_3_;
    auVar34._8_2_ = 0;
    auVar34._0_8_ = uVar3;
    auVar34[10] = (char)(uVar3 >> 0x28);
    auVar34._11_4_ = auVar26._11_4_;
    auVar42._8_2_ = 0;
    auVar42._0_8_ = uVar3;
    auVar42._10_5_ = auVar34._10_5_;
    auVar50[8] = (char)(uVar3 >> 0x20);
    auVar50._0_8_ = uVar3;
    auVar50._9_6_ = auVar42._9_6_;
    auVar76._7_8_ = 0;
    auVar76._0_7_ = auVar50._8_7_;
    Var63 = CONCAT81(SUB158(auVar76 << 0x40,7),(char)(uVar3 >> 0x18));
    auVar92._9_6_ = 0;
    auVar92._0_9_ = Var63;
    auVar77._1_10_ = SUB1510(auVar92 << 0x30,5);
    auVar77[0] = (char)(uVar3 >> 0x10);
    auVar93._11_4_ = 0;
    auVar93._0_11_ = auVar77;
    auVar57[2] = (char)(uVar3 >> 8);
    auVar57._0_2_ = (ushort)uVar3;
    auVar57._3_12_ = SUB1512(auVar93 << 0x20,3);
    sVar103 = ((ushort)uVar2 & 0xff) + sVar104;
    sVar105 = auVar56._2_2_ + sVar104;
    sVar106 = auVar75._0_2_ + sVar104;
    sVar107 = (short)Var59 + sVar104;
    sVar108 = auVar49._8_2_ + sVar104;
    sVar109 = auVar33._10_2_ + sVar104;
    sVar110 = auVar17._12_2_ + sVar104;
    sVar111 = (auVar9._13_2_ >> 8) + sVar104;
    sVar96 = ((ushort)uVar3 & 0xff) + sVar104;
    sVar97 = auVar57._2_2_ + sVar104;
    sVar98 = auVar77._0_2_ + sVar104;
    sVar99 = (short)Var63 + sVar104;
    sVar100 = auVar50._8_2_ + sVar104;
    sVar101 = auVar34._10_2_ + sVar104;
    sVar102 = auVar18._12_2_ + sVar104;
    sVar104 = (auVar10._13_2_ >> 8) + sVar104;
    *(char *)param_2 = (0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103);
    *(char *)((longlong)param_2 + 1) =
         (0 < sVar105) * (sVar105 < 0x100) * (char)sVar105 - (0xff < sVar105);
    *(char *)((longlong)param_2 + 2) =
         (0 < sVar106) * (sVar106 < 0x100) * (char)sVar106 - (0xff < sVar106);
    *(char *)((longlong)param_2 + 3) =
         (0 < sVar107) * (sVar107 < 0x100) * (char)sVar107 - (0xff < sVar107);
    *(char *)((longlong)param_2 + 4) =
         (0 < sVar108) * (sVar108 < 0x100) * (char)sVar108 - (0xff < sVar108);
    *(char *)((longlong)param_2 + 5) =
         (0 < sVar109) * (sVar109 < 0x100) * (char)sVar109 - (0xff < sVar109);
    *(char *)((longlong)param_2 + 6) =
         (0 < sVar110) * (sVar110 < 0x100) * (char)sVar110 - (0xff < sVar110);
    *(char *)((longlong)param_2 + 7) =
         (0 < sVar111) * (sVar111 < 0x100) * (char)sVar111 - (0xff < sVar111);
    pcVar1 = (char *)(lVar95 + (longlong)param_2);
    *pcVar1 = (0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96);
    pcVar1[1] = (0 < sVar97) * (sVar97 < 0x100) * (char)sVar97 - (0xff < sVar97);
    pcVar1[2] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
    pcVar1[3] = (0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99);
    pcVar1[4] = (0 < sVar100) * (sVar100 < 0x100) * (char)sVar100 - (0xff < sVar100);
    pcVar1[5] = (0 < sVar101) * (sVar101 < 0x100) * (char)sVar101 - (0xff < sVar101);
    pcVar1[6] = (0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102);
    pcVar1[7] = (0 < sVar104) * (sVar104 < 0x100) * (char)sVar104 - (0xff < sVar104);
    return;
  }
  if (param_4 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000145471d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbc20)();
    return;
  }
  FUN_145454670();
  return;
}



// FUNCTION 145471d40 FUN_145471d40 body=35 status=ok
// SIG undefined FUN_145471d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471d40(undefined1 (*param_1) [16],undefined1 (*param_2) [16],int param_3,int param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  unkuint9 Var17;
  undefined1 auVar18 [11];
  undefined1 auVar19 [13];
  undefined1 auVar20 [15];
  undefined1 auVar21 [11];
  undefined1 auVar22 [13];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  unkbyte10 Var29;
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  longlong lVar37;
  longlong lVar38;
  undefined1 *puVar39;
  longlong lVar40;
  short sVar48;
  undefined1 auVar41 [16];
  short sVar49;
  short sVar50;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  undefined1 auVar51 [16];
  short sVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar76 [12];
  undefined1 auVar78 [12];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [12];
  undefined1 auVar90 [12];
  undefined1 auVar92 [16];
  undefined1 unaff_XMM13_Ba;
  undefined1 unaff_XMM13_Bb;
  undefined1 unaff_XMM13_Bc;
  undefined1 unaff_XMM13_Bd;
  undefined1 uVar93;
  undefined1 unaff_XMM13_Be;
  undefined1 uVar94;
  undefined1 unaff_XMM13_Bf;
  undefined1 uVar95;
  undefined1 unaff_XMM13_Bg;
  undefined1 uVar96;
  undefined1 unaff_XMM13_Bh;
  undefined1 auStack_3c8 [32];
  undefined1 auStack_3a8 [16];
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [16];
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [40];
  undefined *puStack_260;
  undefined1 auStack_258 [32];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1a8 [112];
  undefined1 auStack_138 [144];
  ulonglong uStack_a8;
  ulonglong uStack_38;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar91 [16];
  
  if (param_4 == 1) {
    sVar50 = (short)((int)((longlong)
                           ((int)((longlong)(*(short *)*param_1 * 0x2d41) + 0x2000 >> 0xe) * 0x2d41)
                           + 0x2000 >> 0xe) + 0x20 >> 6);
    lVar38 = 0x10;
    do {
      auVar72 = *param_2;
      auVar5[0xd] = 0;
      auVar5._0_13_ = auVar72._0_13_;
      auVar5[0xe] = auVar72[7];
      auVar7[0xc] = auVar72[6];
      auVar7._0_12_ = auVar72._0_12_;
      auVar7._13_2_ = auVar5._13_2_;
      auVar9[0xb] = 0;
      auVar9._0_11_ = auVar72._0_11_;
      auVar9._12_3_ = auVar7._12_3_;
      auVar11[10] = auVar72[5];
      auVar11._0_10_ = auVar72._0_10_;
      auVar11._11_4_ = auVar9._11_4_;
      auVar13[9] = 0;
      auVar13._0_9_ = auVar72._0_9_;
      auVar13._10_5_ = auVar11._10_5_;
      auVar15[8] = auVar72[4];
      auVar15._0_8_ = auVar72._0_8_;
      auVar15._9_6_ = auVar13._9_6_;
      auVar20._7_8_ = 0;
      auVar20._0_7_ = auVar15._8_7_;
      Var17 = CONCAT81(SUB158(auVar20 << 0x40,7),auVar72[3]);
      auVar32._9_6_ = 0;
      auVar32._0_9_ = Var17;
      auVar21._1_10_ = SUB1510(auVar32 << 0x30,5);
      auVar21[0] = auVar72[2];
      auVar33._11_4_ = 0;
      auVar33._0_11_ = auVar21;
      auVar22._1_12_ = SUB1512(auVar33 << 0x20,3);
      auVar22[0] = auVar72[1];
      sVar53 = (ushort)auVar72[8] + sVar50;
      sVar55 = (ushort)auVar72[9] + sVar50;
      sVar57 = (ushort)auVar72[10] + sVar50;
      sVar59 = (ushort)auVar72[0xb] + sVar50;
      sVar61 = (ushort)auVar72[0xc] + sVar50;
      sVar63 = (ushort)auVar72[0xd] + sVar50;
      sVar65 = (ushort)auVar72[0xe] + sVar50;
      sVar48 = (ushort)auVar72[0xf] + sVar50;
      sVar49 = (ushort)auVar72[0] + sVar50;
      sVar52 = auVar22._0_2_ + sVar50;
      sVar54 = auVar21._0_2_ + sVar50;
      sVar56 = (short)Var17 + sVar50;
      sVar58 = auVar15._8_2_ + sVar50;
      sVar60 = auVar11._10_2_ + sVar50;
      sVar62 = auVar7._12_2_ + sVar50;
      sVar64 = (auVar5._13_2_ >> 8) + sVar50;
      (*param_2)[0] = (0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49);
      (*param_2)[1] = (0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52);
      (*param_2)[2] = (0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54);
      (*param_2)[3] = (0 < sVar56) * (sVar56 < 0x100) * (char)sVar56 - (0xff < sVar56);
      (*param_2)[4] = (0 < sVar58) * (sVar58 < 0x100) * (char)sVar58 - (0xff < sVar58);
      (*param_2)[5] = (0 < sVar60) * (sVar60 < 0x100) * (char)sVar60 - (0xff < sVar60);
      (*param_2)[6] = (0 < sVar62) * (sVar62 < 0x100) * (char)sVar62 - (0xff < sVar62);
      (*param_2)[7] = (0 < sVar64) * (sVar64 < 0x100) * (char)sVar64 - (0xff < sVar64);
      (*param_2)[8] = (0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53);
      (*param_2)[9] = (0 < sVar55) * (sVar55 < 0x100) * (char)sVar55 - (0xff < sVar55);
      (*param_2)[10] = (0 < sVar57) * (sVar57 < 0x100) * (char)sVar57 - (0xff < sVar57);
      (*param_2)[0xb] = (0 < sVar59) * (sVar59 < 0x100) * (char)sVar59 - (0xff < sVar59);
      (*param_2)[0xc] = (0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 - (0xff < sVar61);
      (*param_2)[0xd] = (0 < sVar63) * (sVar63 < 0x100) * (char)sVar63 - (0xff < sVar63);
      (*param_2)[0xe] = (0 < sVar65) * (sVar65 < 0x100) * (char)sVar65 - (0xff < sVar65);
      (*param_2)[0xf] = (0 < sVar48) * (sVar48 < 0x100) * (char)sVar48 - (0xff < sVar48);
      param_2 = (undefined1 (*) [16])(*param_2 + param_3);
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
    return;
  }
  if (10 < param_4) {
    if (0x26 < param_4) {
      FUN_145452140();
      return;
    }
    uStack_a8 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
    auStack_3a8 = packssdw(*param_1,param_1[1]);
    auStack_398 = packssdw(param_1[4],param_1[5]);
    auStack_388 = packssdw(param_1[8],param_1[9]);
    auStack_378 = packssdw(param_1[0xc],param_1[0xd]);
    auStack_368 = packssdw(param_1[0x10],param_1[0x11]);
    auStack_358 = packssdw(param_1[0x14],param_1[0x15]);
    auStack_348 = packssdw(param_1[0x18],param_1[0x19]);
    auStack_338 = packssdw(param_1[0x1c],param_1[0x1d]);
    FUN_145454760(auStack_3a8,auStack_3a8);
    uVar2 = CONCAT13(unaff_XMM13_Bd,CONCAT12(unaff_XMM13_Bc,CONCAT11(unaff_XMM13_Bb,unaff_XMM13_Ba))
                    ) ^
            CONCAT13(unaff_XMM13_Bd,CONCAT12(unaff_XMM13_Bc,CONCAT11(unaff_XMM13_Bb,unaff_XMM13_Ba))
                    );
    uVar3 = CONCAT13(unaff_XMM13_Bh,CONCAT12(unaff_XMM13_Bg,CONCAT11(unaff_XMM13_Bf,unaff_XMM13_Be))
                    ) ^
            CONCAT13(unaff_XMM13_Bh,CONCAT12(unaff_XMM13_Bg,CONCAT11(unaff_XMM13_Bf,unaff_XMM13_Be))
                    );
    uVar93 = (undefined1)uVar3;
    uVar94 = (undefined1)(uVar3 >> 8);
    uVar95 = (undefined1)(uVar3 >> 0x10);
    uVar96 = (undefined1)(uVar3 >> 0x18);
    uStack_328 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_320 = 0;
    uStack_318 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_310 = 0;
    uStack_308 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_300 = 0;
    uStack_2f8 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_2f0 = 0;
    uStack_2e8 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_2e0 = 0;
    uStack_2d8 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_2d0 = 0;
    uStack_2c8 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_2c0 = 0;
    uStack_2b8 = CONCAT17(uVar96,CONCAT16(uVar95,CONCAT15(uVar94,CONCAT14(uVar93,uVar2))));
    uStack_2b0 = 0;
    FUN_145455160(auStack_3a8,auStack_2a8);
    auVar72 = _DAT_149d4f530;
    lVar38 = 2;
    lVar40 = (longlong)param_3;
    pauVar34 = (undefined1 (*) [16])auStack_288;
    do {
      auVar51 = pauVar34[-2];
      auVar66 = *pauVar34;
      auVar67 = pauVar34[2];
      auVar87._0_12_ = auVar51._0_12_;
      auVar87._12_2_ = auVar51._6_2_;
      auVar87._14_2_ = *(undefined2 *)(pauVar34[-1] + 6);
      auVar86._12_4_ = auVar87._12_4_;
      auVar86._0_10_ = auVar51._0_10_;
      auVar86._10_2_ = *(undefined2 *)(pauVar34[-1] + 4);
      auVar85._10_6_ = auVar86._10_6_;
      auVar85._0_8_ = auVar51._0_8_;
      auVar85._8_2_ = auVar51._4_2_;
      auVar23._4_8_ = auVar85._8_8_;
      auVar23._2_2_ = *(undefined2 *)(pauVar34[-1] + 2);
      auVar23._0_2_ = auVar51._2_2_;
      auVar84._0_4_ = CONCAT22(*(undefined2 *)pauVar34[-1],auVar51._0_2_);
      auVar84._4_12_ = auVar23;
      auStack_368._0_4_ = CONCAT22(*(undefined2 *)(pauVar34[-1] + 8),auVar51._8_2_);
      auVar90._0_8_ =
           CONCAT26(*(undefined2 *)(pauVar34[-1] + 10),CONCAT24(auVar51._10_2_,auStack_368._0_4_));
      auVar90._8_2_ = auVar51._12_2_;
      auVar90._10_2_ = *(undefined2 *)(pauVar34[-1] + 0xc);
      auVar91._12_2_ = auVar51._14_2_;
      auVar91._0_12_ = auVar90;
      auVar91._14_2_ = *(undefined2 *)(pauVar34[-1] + 0xe);
      auVar83._0_12_ = auVar67._0_12_;
      auVar83._12_2_ = auVar67._6_2_;
      auVar83._14_2_ = *(undefined2 *)(pauVar34[3] + 6);
      auVar82._12_4_ = auVar83._12_4_;
      auVar82._0_10_ = auVar67._0_10_;
      auVar82._10_2_ = *(undefined2 *)(pauVar34[3] + 4);
      auVar81._10_6_ = auVar82._10_6_;
      auVar81._0_8_ = auVar67._0_8_;
      auVar81._8_2_ = auVar67._4_2_;
      auVar24._4_8_ = auVar81._8_8_;
      auVar24._2_2_ = *(undefined2 *)(pauVar34[3] + 2);
      auVar24._0_2_ = auVar67._2_2_;
      auVar80._0_4_ = CONCAT22(*(undefined2 *)pauVar34[3],auVar67._0_2_);
      auVar80._4_12_ = auVar24;
      auStack_368._8_4_ = CONCAT22(*(undefined2 *)(pauVar34[3] + 8),auVar67._8_2_);
      auVar88._0_8_ =
           CONCAT26(*(undefined2 *)(pauVar34[3] + 10),CONCAT24(auVar67._10_2_,auStack_368._8_4_));
      auVar88._8_2_ = auVar67._12_2_;
      auVar88._10_2_ = *(undefined2 *)(pauVar34[3] + 0xc);
      auVar89._12_2_ = auVar67._14_2_;
      auVar89._0_12_ = auVar88;
      auVar89._14_2_ = *(undefined2 *)(pauVar34[3] + 0xe);
      auVar75._0_12_ = auVar66._0_12_;
      auVar75._12_2_ = auVar66._6_2_;
      auVar75._14_2_ = *(undefined2 *)(pauVar34[1] + 6);
      auVar74._12_4_ = auVar75._12_4_;
      auVar74._0_10_ = auVar66._0_10_;
      auVar74._10_2_ = *(undefined2 *)(pauVar34[1] + 4);
      auVar73._10_6_ = auVar74._10_6_;
      auVar73._0_8_ = auVar66._0_8_;
      auVar73._8_2_ = auVar66._4_2_;
      auVar25._4_8_ = auVar73._8_8_;
      auVar25._2_2_ = *(undefined2 *)(pauVar34[1] + 2);
      auVar25._0_2_ = auVar66._2_2_;
      auStack_3a8._6_2_ = *(undefined2 *)pauVar34[1];
      auStack_3a8._4_2_ = auVar66._0_2_;
      auStack_368._4_4_ = CONCAT22(*(undefined2 *)(pauVar34[1] + 8),auVar66._8_2_);
      auVar78._0_8_ =
           CONCAT26(*(undefined2 *)(pauVar34[1] + 10),CONCAT24(auVar66._10_2_,auStack_368._4_4_));
      auVar78._8_2_ = auVar66._12_2_;
      auVar78._10_2_ = *(undefined2 *)(pauVar34[1] + 0xc);
      auVar79._12_2_ = auVar66._14_2_;
      auVar79._0_12_ = auVar78;
      auVar79._14_2_ = *(undefined2 *)(pauVar34[1] + 0xe);
      auVar51 = pauVar34[4];
      auVar66._0_8_ = auVar84._0_8_;
      auVar66._8_4_ = auVar23._0_4_;
      auVar66._12_4_ = auVar25._0_4_;
      auStack_3a8._0_4_ = auVar84._0_4_;
      auVar70._0_12_ = auVar51._0_12_;
      auVar70._12_2_ = auVar51._6_2_;
      auVar70._14_2_ = *(undefined2 *)(pauVar34[5] + 6);
      auVar69._12_4_ = auVar70._12_4_;
      auVar69._0_10_ = auVar51._0_10_;
      auVar69._10_2_ = *(undefined2 *)(pauVar34[5] + 4);
      auVar68._10_6_ = auVar69._10_6_;
      auVar68._0_8_ = auVar51._0_8_;
      auVar68._8_2_ = auVar51._4_2_;
      auVar26._4_8_ = auVar68._8_8_;
      auVar26._2_2_ = *(undefined2 *)(pauVar34[5] + 2);
      auVar26._0_2_ = auVar51._2_2_;
      auStack_3a8._14_2_ = *(undefined2 *)pauVar34[5];
      auStack_3a8._12_2_ = auVar51._0_2_;
      auStack_368._12_4_ = CONCAT22(*(undefined2 *)(pauVar34[5] + 8),auVar51._8_2_);
      auVar76._0_8_ =
           CONCAT26(*(undefined2 *)(pauVar34[5] + 10),CONCAT24(auVar51._10_2_,auStack_368._12_4_));
      auVar76._8_2_ = auVar51._12_2_;
      auVar76._10_2_ = *(undefined2 *)(pauVar34[5] + 0xc);
      auVar77._12_2_ = auVar51._14_2_;
      auVar77._0_12_ = auVar76;
      auVar77._14_2_ = *(undefined2 *)(pauVar34[5] + 0xe);
      auVar51._0_8_ = auVar80._0_8_;
      auVar51._8_4_ = auVar24._0_4_;
      auVar51._12_4_ = auVar26._0_4_;
      auStack_3a8._8_4_ = auVar80._0_4_;
      auStack_388._4_4_ = auVar73._8_4_;
      auStack_388._0_4_ = auVar85._8_4_;
      auStack_388._8_4_ = auVar81._8_4_;
      auStack_388._12_4_ = auVar68._8_4_;
      auVar71._8_4_ = (int)((ulonglong)auVar90._0_8_ >> 0x20);
      auVar71._0_8_ = auVar90._0_8_;
      auVar71._12_4_ = (int)((ulonglong)auVar78._0_8_ >> 0x20);
      auVar67._8_4_ = (int)((ulonglong)auVar88._0_8_ >> 0x20);
      auVar67._0_8_ = auVar88._0_8_;
      auVar67._12_4_ = (int)((ulonglong)auVar76._0_8_ >> 0x20);
      auVar92._0_8_ = CONCAT44(auVar78._8_4_,auVar90._8_4_);
      auVar92._8_4_ = auVar91._12_4_;
      auVar92._12_4_ = auVar79._12_4_;
      auStack_348._8_4_ = auVar88._8_4_;
      auStack_348._0_8_ = auVar92._0_8_;
      auStack_348._12_4_ = auVar76._8_4_;
      auStack_398._8_8_ = auVar51._8_8_;
      auStack_398._0_8_ = auVar66._8_8_;
      auStack_378._4_4_ = auVar74._12_4_;
      auStack_378._0_4_ = auVar86._12_4_;
      auStack_378._8_4_ = auVar82._12_4_;
      auStack_378._12_4_ = auVar69._12_4_;
      auStack_358._8_8_ = auVar67._8_8_;
      auStack_358._0_8_ = auVar71._8_8_;
      auStack_338._8_4_ = auVar89._12_4_;
      auStack_338._0_8_ = auVar92._8_8_;
      auStack_338._12_4_ = auVar77._12_4_;
      FUN_145455160(auStack_3a8,auStack_1a8);
      lVar37 = 0x10;
      pauVar35 = param_2;
      pauVar36 = (undefined1 (*) [16])auStack_1a8;
      do {
        uVar1 = *(ulonglong *)*pauVar35;
        auVar47._8_6_ = 0;
        auVar47._0_8_ = uVar1;
        auVar47[0xe] = (char)(uVar1 >> 0x38);
        auVar47[0xf] = uVar96;
        auVar46._14_2_ = auVar47._14_2_;
        auVar46._8_5_ = 0;
        auVar46._0_8_ = uVar1;
        auVar46[0xd] = uVar95;
        auVar45._13_3_ = auVar46._13_3_;
        auVar45._8_4_ = 0;
        auVar45._0_8_ = uVar1;
        auVar45[0xc] = (char)(uVar1 >> 0x30);
        auVar44._12_4_ = auVar45._12_4_;
        auVar44._8_3_ = 0;
        auVar44._0_8_ = uVar1;
        auVar44[0xb] = uVar94;
        auVar43._11_5_ = auVar44._11_5_;
        auVar43._8_2_ = 0;
        auVar43._0_8_ = uVar1;
        auVar43[10] = (char)(uVar1 >> 0x28);
        auVar42._10_6_ = auVar43._10_6_;
        auVar42[8] = 0;
        auVar42._0_8_ = uVar1;
        auVar42[9] = uVar93;
        auVar41._9_7_ = auVar42._9_7_;
        auVar41[8] = (char)(uVar1 >> 0x20);
        auVar41._0_8_ = uVar1;
        Var29 = CONCAT91(CONCAT81(auVar41._8_8_,(char)(uVar2 >> 0x18)),(char)(uVar1 >> 0x18));
        auVar28._2_10_ = Var29;
        auVar28[1] = (char)(uVar2 >> 0x10);
        auVar28[0] = (char)(uVar1 >> 0x10);
        auVar27._2_12_ = auVar28;
        auVar27[1] = (char)(uVar2 >> 8);
        auVar27[0] = (char)(uVar1 >> 8);
        auVar51 = paddsw(auVar72,*pauVar36);
        auVar51 = psraw(auVar51,6);
        sVar50 = auVar51._0_2_ + CONCAT11((char)uVar2,(char)uVar1);
        sVar53 = auVar51._2_2_ + auVar27._0_2_;
        sVar55 = auVar51._4_2_ + auVar28._0_2_;
        sVar57 = auVar51._6_2_ + (short)Var29;
        sVar59 = auVar51._8_2_ + auVar41._8_2_;
        sVar61 = auVar51._10_2_ + auVar43._10_2_;
        sVar63 = auVar51._12_2_ + auVar45._12_2_;
        sVar65 = auVar51._14_2_ + auVar46._14_2_;
        *(ulonglong *)*pauVar35 =
             CONCAT17((0 < sVar65) * (sVar65 < 0x100) * (char)sVar65 - (0xff < sVar65),
                      CONCAT16((0 < sVar63) * (sVar63 < 0x100) * (char)sVar63 - (0xff < sVar63),
                               CONCAT15((0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 -
                                        (0xff < sVar61),
                                        CONCAT14((0 < sVar59) * (sVar59 < 0x100) * (char)sVar59 -
                                                 (0xff < sVar59),
                                                 CONCAT13((0 < sVar57) * (sVar57 < 0x100) *
                                                          (char)sVar57 - (0xff < sVar57),
                                                          CONCAT12((0 < sVar55) * (sVar55 < 0x100) *
                                                                   (char)sVar55 - (0xff < sVar55),
                                                                   CONCAT11((0 < sVar53) *
                                                                            (sVar53 < 0x100) *
                                                                            (char)sVar53 -
                                                                            (0xff < sVar53),
                                                                            (0 < sVar50) *
                                                                            (sVar50 < 0x100) *
                                                                            (char)sVar50 -
                                                                            (0xff < sVar50))))))));
        pauVar35 = (undefined1 (*) [16])(*pauVar35 + lVar40);
        lVar37 = lVar37 + -1;
        pauVar36 = pauVar36 + 1;
      } while (lVar37 != 0);
      param_2 = (undefined1 (*) [16])(*param_2 + 8);
      pauVar34 = pauVar34 + 8;
      lVar38 = lVar38 + -1;
    } while (lVar38 != 0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_a8 ^ (ulonglong)auStack_3c8);
  }
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  auVar72._0_12_ = ZEXT812(0);
  auVar72._12_4_ = 0;
  auStack_238 = packssdw(*param_1,auVar72);
  auStack_228 = packssdw(param_1[4],auVar72);
  auStack_218 = packssdw(param_1[8],auVar72);
  auStack_208 = packssdw(param_1[0xc],auVar72);
  puStack_260 = (undefined *)0x14545200e;
  FUN_145455a00(auStack_238,auStack_138);
  auVar72 = _DAT_149d4f530;
  lVar38 = 2;
  puVar39 = auStack_138;
  do {
    puStack_260 = (undefined *)0x14545203d;
    FUN_145455e20(puVar39,auStack_238);
    lVar40 = 0x10;
    pauVar34 = param_2;
    pauVar35 = &auStack_238;
    do {
      uVar1 = *(ulonglong *)*pauVar34;
      auVar4._8_6_ = 0;
      auVar4._0_8_ = uVar1;
      auVar4[0xe] = (char)(uVar1 >> 0x38);
      auVar6._8_4_ = 0;
      auVar6._0_8_ = uVar1;
      auVar6[0xc] = (char)(uVar1 >> 0x30);
      auVar6._13_2_ = auVar4._13_2_;
      auVar8._8_4_ = 0;
      auVar8._0_8_ = uVar1;
      auVar8._12_3_ = auVar6._12_3_;
      auVar10._8_2_ = 0;
      auVar10._0_8_ = uVar1;
      auVar10[10] = (char)(uVar1 >> 0x28);
      auVar10._11_4_ = auVar8._11_4_;
      auVar12._8_2_ = 0;
      auVar12._0_8_ = uVar1;
      auVar12._10_5_ = auVar10._10_5_;
      auVar14[8] = (char)(uVar1 >> 0x20);
      auVar14._0_8_ = uVar1;
      auVar14._9_6_ = auVar12._9_6_;
      auVar16._7_8_ = 0;
      auVar16._0_7_ = auVar14._8_7_;
      Var17 = CONCAT81(SUB158(auVar16 << 0x40,7),(char)(uVar1 >> 0x18));
      auVar30._9_6_ = 0;
      auVar30._0_9_ = Var17;
      auVar18._1_10_ = SUB1510(auVar30 << 0x30,5);
      auVar18[0] = (char)(uVar1 >> 0x10);
      auVar31._11_4_ = 0;
      auVar31._0_11_ = auVar18;
      auVar19._1_12_ = SUB1512(auVar31 << 0x20,3);
      auVar19[0] = (char)(uVar1 >> 8);
      auVar51 = paddsw(auVar72,*pauVar35);
      auVar51 = psraw(auVar51,6);
      sVar50 = (ushort)(byte)uVar1 + auVar51._0_2_;
      sVar53 = auVar19._0_2_ + auVar51._2_2_;
      sVar55 = auVar18._0_2_ + auVar51._4_2_;
      sVar57 = (short)Var17 + auVar51._6_2_;
      sVar59 = auVar14._8_2_ + auVar51._8_2_;
      sVar61 = auVar10._10_2_ + auVar51._10_2_;
      sVar63 = auVar6._12_2_ + auVar51._12_2_;
      sVar65 = (auVar4._13_2_ >> 8) + auVar51._14_2_;
      *(ulonglong *)*pauVar34 =
           CONCAT17((0 < sVar65) * (sVar65 < 0x100) * (char)sVar65 - (0xff < sVar65),
                    CONCAT16((0 < sVar63) * (sVar63 < 0x100) * (char)sVar63 - (0xff < sVar63),
                             CONCAT15((0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 -
                                      (0xff < sVar61),
                                      CONCAT14((0 < sVar59) * (sVar59 < 0x100) * (char)sVar59 -
                                               (0xff < sVar59),
                                               CONCAT13((0 < sVar57) * (sVar57 < 0x100) *
                                                        (char)sVar57 - (0xff < sVar57),
                                                        CONCAT12((0 < sVar55) * (sVar55 < 0x100) *
                                                                 (char)sVar55 - (0xff < sVar55),
                                                                 CONCAT11((0 < sVar53) *
                                                                          (sVar53 < 0x100) *
                                                                          (char)sVar53 -
                                                                          (0xff < sVar53),
                                                                          (0 < sVar50) *
                                                                          (sVar50 < 0x100) *
                                                                          (char)sVar50 -
                                                                          (0xff < sVar50))))))));
      pauVar34 = (undefined1 (*) [16])(*pauVar34 + param_3);
      lVar40 = lVar40 + -1;
      pauVar35 = pauVar35 + 1;
    } while (lVar40 != 0);
    param_2 = (undefined1 (*) [16])(*param_2 + 8);
    puVar39 = puVar39 + 0x80;
    lVar38 = lVar38 + -1;
  } while (lVar38 != 0);
                    /* WARNING: Subroutine does not return */
  puStack_260 = &UNK_14545209d;
  FUN_144d8e3a0(uStack_38 ^ (ulonglong)auStack_258);
}



// FUNCTION 145471d70 FUN_145471d70 body=44 status=ok
// SIG undefined FUN_145471d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471d70(short *param_1,longlong param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [15];
  undefined1 auVar79 [15];
  undefined1 auVar80 [15];
  undefined1 auVar81 [15];
  undefined1 auVar82 [15];
  undefined1 auVar83 [15];
  undefined1 auVar84 [15];
  undefined1 auVar85 [15];
  undefined1 auVar86 [15];
  undefined1 auVar87 [15];
  undefined1 auVar88 [15];
  undefined1 auVar89 [15];
  undefined1 auVar90 [15];
  undefined1 auVar91 [15];
  undefined1 auVar92 [15];
  undefined1 auVar93 [15];
  undefined1 auVar94 [15];
  undefined1 auVar95 [15];
  undefined1 auVar96 [15];
  undefined1 auVar97 [15];
  undefined1 auVar98 [15];
  undefined1 auVar99 [15];
  undefined1 auVar100 [15];
  undefined1 auVar101 [15];
  undefined1 auVar102 [15];
  undefined1 auVar103 [15];
  undefined1 auVar104 [15];
  undefined1 auVar105 [15];
  undefined1 auVar106 [15];
  undefined1 auVar107 [15];
  undefined1 auVar108 [15];
  undefined1 auVar109 [15];
  undefined1 auVar110 [15];
  undefined1 auVar111 [15];
  undefined1 auVar112 [15];
  undefined1 auVar113 [15];
  unkuint9 Var114;
  undefined1 auVar115 [11];
  undefined1 auVar116 [13];
  undefined1 auVar117 [15];
  undefined1 auVar118 [11];
  undefined1 auVar119 [15];
  undefined1 auVar120 [11];
  undefined1 auVar121 [13];
  undefined1 auVar122 [15];
  undefined1 auVar123 [11];
  undefined1 auVar124 [15];
  undefined1 auVar125 [11];
  undefined1 auVar126 [15];
  undefined1 auVar127 [11];
  undefined1 auVar128 [15];
  undefined1 auVar129 [11];
  undefined1 auVar130 [15];
  undefined1 auVar131 [11];
  undefined1 auVar132 [15];
  undefined1 auVar133 [11];
  undefined1 auVar134 [15];
  undefined1 auVar135 [11];
  undefined1 auVar136 [15];
  undefined1 auVar137 [11];
  undefined1 auVar138 [15];
  undefined1 auVar139 [11];
  undefined1 auVar140 [15];
  undefined1 auVar141 [11];
  undefined1 auVar142 [15];
  undefined1 auVar143 [11];
  undefined1 auVar144 [15];
  undefined1 auVar145 [11];
  undefined1 auVar146 [15];
  undefined1 auVar147 [11];
  undefined1 auVar148 [15];
  undefined1 auVar149 [15];
  undefined1 auVar150 [15];
  undefined1 auVar151 [15];
  undefined1 auVar152 [15];
  undefined1 auVar153 [15];
  undefined1 auVar154 [15];
  undefined1 auVar155 [15];
  undefined1 auVar156 [15];
  undefined1 auVar157 [15];
  undefined1 auVar158 [15];
  undefined1 auVar159 [15];
  undefined1 auVar160 [15];
  undefined1 auVar161 [15];
  undefined1 auVar162 [15];
  undefined1 auVar163 [15];
  undefined1 auVar164 [15];
  undefined1 auVar165 [15];
  undefined1 auVar166 [15];
  undefined1 auVar167 [15];
  undefined1 auVar168 [15];
  undefined1 auVar169 [15];
  undefined1 auVar170 [15];
  undefined1 auVar171 [15];
  undefined1 auVar172 [15];
  undefined1 auVar173 [15];
  undefined1 auVar174 [15];
  undefined1 auVar175 [15];
  undefined1 auVar176 [15];
  undefined1 auVar177 [15];
  undefined1 auVar178 [15];
  undefined1 auVar179 [15];
  short sVar180;
  longlong lVar181;
  undefined1 (*pauVar182) [16];
  longlong lVar183;
  longlong lVar184;
  longlong lVar185;
  undefined1 (*pauVar186) [16];
  longlong lVar187;
  longlong lVar188;
  longlong lVar189;
  longlong lVar190;
  short sVar191;
  short sVar192;
  short sVar193;
  short sVar194;
  short sVar195;
  short sVar196;
  short sVar197;
  short sVar198;
  short sVar199;
  short sVar200;
  short sVar201;
  short sVar202;
  short sVar203;
  short sVar204;
  short sVar205;
  short sVar206;
  
  if (param_4 == 1) {
    lVar185 = 4;
    sVar180 = (short)((int)((longlong)
                            ((int)((longlong)(*param_1 * 0x2d41) + 0x2000 >> 0xe) * 0x2d41) + 0x2000
                           >> 0xe) + 0x20 >> 6);
    lVar181 = (longlong)(param_3 * 2);
    pauVar186 = (undefined1 (*) [16])(param_2 + 0x10 + lVar181);
    lVar183 = param_3 - lVar181;
    lVar188 = param_3 * 3 - lVar181;
    lVar189 = param_3 * 4 - lVar181;
    lVar190 = param_3 * 5 - lVar181;
    lVar184 = param_3 * 6 - lVar181;
    lVar187 = param_3 * 7 - lVar181;
    do {
      auVar2 = *(undefined1 (*) [16])((-0x10 - lVar181) + (longlong)pauVar186);
      pauVar182 = (undefined1 (*) [16])((longlong)pauVar186 - lVar181);
      auVar18[0xd] = 0;
      auVar18._0_13_ = auVar2._0_13_;
      auVar18[0xe] = auVar2[7];
      auVar34[0xc] = auVar2[6];
      auVar34._0_12_ = auVar2._0_12_;
      auVar34._13_2_ = auVar18._13_2_;
      auVar50[0xb] = 0;
      auVar50._0_11_ = auVar2._0_11_;
      auVar50._12_3_ = auVar34._12_3_;
      auVar66[10] = auVar2[5];
      auVar66._0_10_ = auVar2._0_10_;
      auVar66._11_4_ = auVar50._11_4_;
      auVar82[9] = 0;
      auVar82._0_9_ = auVar2._0_9_;
      auVar82._10_5_ = auVar66._10_5_;
      auVar98[8] = auVar2[4];
      auVar98._0_8_ = auVar2._0_8_;
      auVar98._9_6_ = auVar82._9_6_;
      auVar113._7_8_ = 0;
      auVar113._0_7_ = auVar98._8_7_;
      Var114 = CONCAT81(SUB158(auVar113 << 0x40,7),auVar2[3]);
      auVar148._9_6_ = 0;
      auVar148._0_9_ = Var114;
      auVar115._1_10_ = SUB1510(auVar148 << 0x30,5);
      auVar115[0] = auVar2[2];
      auVar149._11_4_ = 0;
      auVar149._0_11_ = auVar115;
      auVar116._1_12_ = SUB1512(auVar149 << 0x20,3);
      auVar116[0] = auVar2[1];
      sVar199 = (ushort)auVar2[0] + sVar180;
      sVar200 = auVar116._0_2_ + sVar180;
      sVar201 = auVar115._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar98._8_2_ + sVar180;
      sVar204 = auVar66._10_2_ + sVar180;
      sVar205 = auVar34._12_2_ + sVar180;
      sVar206 = (auVar18._13_2_ >> 8) + sVar180;
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      pcVar1 = (char *)((-0x10 - lVar181) + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *pauVar182;
      auVar3[0xd] = 0;
      auVar3._0_13_ = auVar2._0_13_;
      auVar3[0xe] = auVar2[7];
      auVar19[0xc] = auVar2[6];
      auVar19._0_12_ = auVar2._0_12_;
      auVar19._13_2_ = auVar3._13_2_;
      auVar35[0xb] = 0;
      auVar35._0_11_ = auVar2._0_11_;
      auVar35._12_3_ = auVar19._12_3_;
      auVar51[10] = auVar2[5];
      auVar51._0_10_ = auVar2._0_10_;
      auVar51._11_4_ = auVar35._11_4_;
      auVar67[9] = 0;
      auVar67._0_9_ = auVar2._0_9_;
      auVar67._10_5_ = auVar51._10_5_;
      auVar83[8] = auVar2[4];
      auVar83._0_8_ = auVar2._0_8_;
      auVar83._9_6_ = auVar67._9_6_;
      auVar117._7_8_ = 0;
      auVar117._0_7_ = auVar83._8_7_;
      Var114 = CONCAT81(SUB158(auVar117 << 0x40,7),auVar2[3]);
      auVar150._9_6_ = 0;
      auVar150._0_9_ = Var114;
      auVar118._1_10_ = SUB1510(auVar150 << 0x30,5);
      auVar118[0] = auVar2[2];
      auVar151._11_4_ = 0;
      auVar151._0_11_ = auVar118;
      auVar99[2] = auVar2[1];
      auVar99._0_2_ = auVar2._0_2_;
      auVar99._3_12_ = SUB1512(auVar151 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar99._2_2_ + sVar180;
      sVar201 = auVar118._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar83._8_2_ + sVar180;
      sVar204 = auVar51._10_2_ + sVar180;
      sVar205 = auVar19._12_2_ + sVar180;
      sVar206 = (auVar3._13_2_ >> 8) + sVar180;
      (*pauVar182)[0] = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      (*pauVar182)[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      (*pauVar182)[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      (*pauVar182)[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      (*pauVar182)[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      (*pauVar182)[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      (*pauVar182)[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      (*pauVar182)[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      (*pauVar182)[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      (*pauVar182)[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      (*pauVar182)[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      (*pauVar182)[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      (*pauVar182)[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      (*pauVar182)[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      (*pauVar182)[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      (*pauVar182)[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar183 + -0x10 + (longlong)pauVar186);
      auVar4[0xd] = 0;
      auVar4._0_13_ = auVar2._0_13_;
      auVar4[0xe] = auVar2[7];
      auVar20[0xc] = auVar2[6];
      auVar20._0_12_ = auVar2._0_12_;
      auVar20._13_2_ = auVar4._13_2_;
      auVar36[0xb] = 0;
      auVar36._0_11_ = auVar2._0_11_;
      auVar36._12_3_ = auVar20._12_3_;
      auVar52[10] = auVar2[5];
      auVar52._0_10_ = auVar2._0_10_;
      auVar52._11_4_ = auVar36._11_4_;
      auVar68[9] = 0;
      auVar68._0_9_ = auVar2._0_9_;
      auVar68._10_5_ = auVar52._10_5_;
      auVar84[8] = auVar2[4];
      auVar84._0_8_ = auVar2._0_8_;
      auVar84._9_6_ = auVar68._9_6_;
      auVar119._7_8_ = 0;
      auVar119._0_7_ = auVar84._8_7_;
      Var114 = CONCAT81(SUB158(auVar119 << 0x40,7),auVar2[3]);
      auVar152._9_6_ = 0;
      auVar152._0_9_ = Var114;
      auVar120._1_10_ = SUB1510(auVar152 << 0x30,5);
      auVar120[0] = auVar2[2];
      auVar153._11_4_ = 0;
      auVar153._0_11_ = auVar120;
      auVar121._1_12_ = SUB1512(auVar153 << 0x20,3);
      auVar121[0] = auVar2[1];
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (ushort)auVar2[0] + sVar180;
      sVar200 = auVar121._0_2_ + sVar180;
      sVar201 = auVar120._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar84._8_2_ + sVar180;
      sVar204 = auVar52._10_2_ + sVar180;
      sVar205 = auVar20._12_2_ + sVar180;
      sVar206 = (auVar4._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar183 + -0x10 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar183 + (longlong)pauVar186);
      auVar5[0xd] = 0;
      auVar5._0_13_ = auVar2._0_13_;
      auVar5[0xe] = auVar2[7];
      auVar21[0xc] = auVar2[6];
      auVar21._0_12_ = auVar2._0_12_;
      auVar21._13_2_ = auVar5._13_2_;
      auVar37[0xb] = 0;
      auVar37._0_11_ = auVar2._0_11_;
      auVar37._12_3_ = auVar21._12_3_;
      auVar53[10] = auVar2[5];
      auVar53._0_10_ = auVar2._0_10_;
      auVar53._11_4_ = auVar37._11_4_;
      auVar69[9] = 0;
      auVar69._0_9_ = auVar2._0_9_;
      auVar69._10_5_ = auVar53._10_5_;
      auVar85[8] = auVar2[4];
      auVar85._0_8_ = auVar2._0_8_;
      auVar85._9_6_ = auVar69._9_6_;
      auVar122._7_8_ = 0;
      auVar122._0_7_ = auVar85._8_7_;
      Var114 = CONCAT81(SUB158(auVar122 << 0x40,7),auVar2[3]);
      auVar154._9_6_ = 0;
      auVar154._0_9_ = Var114;
      auVar123._1_10_ = SUB1510(auVar154 << 0x30,5);
      auVar123[0] = auVar2[2];
      auVar155._11_4_ = 0;
      auVar155._0_11_ = auVar123;
      auVar100[2] = auVar2[1];
      auVar100._0_2_ = auVar2._0_2_;
      auVar100._3_12_ = SUB1512(auVar155 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar100._2_2_ + sVar180;
      sVar201 = auVar123._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar85._8_2_ + sVar180;
      sVar204 = auVar53._10_2_ + sVar180;
      sVar205 = auVar21._12_2_ + sVar180;
      sVar206 = (auVar5._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar183 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = pauVar186[-1];
      auVar6[0xd] = 0;
      auVar6._0_13_ = auVar2._0_13_;
      auVar6[0xe] = auVar2[7];
      auVar22[0xc] = auVar2[6];
      auVar22._0_12_ = auVar2._0_12_;
      auVar22._13_2_ = auVar6._13_2_;
      auVar38[0xb] = 0;
      auVar38._0_11_ = auVar2._0_11_;
      auVar38._12_3_ = auVar22._12_3_;
      auVar54[10] = auVar2[5];
      auVar54._0_10_ = auVar2._0_10_;
      auVar54._11_4_ = auVar38._11_4_;
      auVar70[9] = 0;
      auVar70._0_9_ = auVar2._0_9_;
      auVar70._10_5_ = auVar54._10_5_;
      auVar86[8] = auVar2[4];
      auVar86._0_8_ = auVar2._0_8_;
      auVar86._9_6_ = auVar70._9_6_;
      auVar124._7_8_ = 0;
      auVar124._0_7_ = auVar86._8_7_;
      Var114 = CONCAT81(SUB158(auVar124 << 0x40,7),auVar2[3]);
      auVar156._9_6_ = 0;
      auVar156._0_9_ = Var114;
      auVar125._1_10_ = SUB1510(auVar156 << 0x30,5);
      auVar125[0] = auVar2[2];
      auVar157._11_4_ = 0;
      auVar157._0_11_ = auVar125;
      auVar101[2] = auVar2[1];
      auVar101._0_2_ = auVar2._0_2_;
      auVar101._3_12_ = SUB1512(auVar157 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar101._2_2_ + sVar180;
      sVar201 = auVar125._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar86._8_2_ + sVar180;
      sVar204 = auVar54._10_2_ + sVar180;
      sVar205 = auVar22._12_2_ + sVar180;
      sVar206 = (auVar6._13_2_ >> 8) + sVar180;
      pauVar186[-1][0] = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pauVar186[-1][1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pauVar186[-1][2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pauVar186[-1][3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pauVar186[-1][4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pauVar186[-1][5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pauVar186[-1][6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pauVar186[-1][7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pauVar186[-1][8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pauVar186[-1][9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pauVar186[-1][10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pauVar186[-1][0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pauVar186[-1][0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pauVar186[-1][0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pauVar186[-1][0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pauVar186[-1][0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *pauVar186;
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      auVar7[0xd] = 0;
      auVar7._0_13_ = auVar2._0_13_;
      auVar7[0xe] = auVar2[7];
      auVar23[0xc] = auVar2[6];
      auVar23._0_12_ = auVar2._0_12_;
      auVar23._13_2_ = auVar7._13_2_;
      auVar39[0xb] = 0;
      auVar39._0_11_ = auVar2._0_11_;
      auVar39._12_3_ = auVar23._12_3_;
      auVar55[10] = auVar2[5];
      auVar55._0_10_ = auVar2._0_10_;
      auVar55._11_4_ = auVar39._11_4_;
      auVar71[9] = 0;
      auVar71._0_9_ = auVar2._0_9_;
      auVar71._10_5_ = auVar55._10_5_;
      auVar87[8] = auVar2[4];
      auVar87._0_8_ = auVar2._0_8_;
      auVar87._9_6_ = auVar71._9_6_;
      auVar126._7_8_ = 0;
      auVar126._0_7_ = auVar87._8_7_;
      Var114 = CONCAT81(SUB158(auVar126 << 0x40,7),auVar2[3]);
      auVar158._9_6_ = 0;
      auVar158._0_9_ = Var114;
      auVar127._1_10_ = SUB1510(auVar158 << 0x30,5);
      auVar127[0] = auVar2[2];
      auVar159._11_4_ = 0;
      auVar159._0_11_ = auVar127;
      auVar102[2] = auVar2[1];
      auVar102._0_2_ = auVar2._0_2_;
      auVar102._3_12_ = SUB1512(auVar159 << 0x20,3);
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar102._2_2_ + sVar180;
      sVar201 = auVar127._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar87._8_2_ + sVar180;
      sVar204 = auVar55._10_2_ + sVar180;
      sVar205 = auVar23._12_2_ + sVar180;
      sVar206 = (auVar7._13_2_ >> 8) + sVar180;
      (*pauVar186)[0] = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      (*pauVar186)[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      (*pauVar186)[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      (*pauVar186)[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      (*pauVar186)[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      (*pauVar186)[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      (*pauVar186)[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      (*pauVar186)[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      (*pauVar186)[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      (*pauVar186)[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      (*pauVar186)[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      (*pauVar186)[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      (*pauVar186)[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      (*pauVar186)[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      (*pauVar186)[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      (*pauVar186)[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar188 + -0x10 + (longlong)pauVar186);
      auVar8[0xd] = 0;
      auVar8._0_13_ = auVar2._0_13_;
      auVar8[0xe] = auVar2[7];
      auVar24[0xc] = auVar2[6];
      auVar24._0_12_ = auVar2._0_12_;
      auVar24._13_2_ = auVar8._13_2_;
      auVar40[0xb] = 0;
      auVar40._0_11_ = auVar2._0_11_;
      auVar40._12_3_ = auVar24._12_3_;
      auVar56[10] = auVar2[5];
      auVar56._0_10_ = auVar2._0_10_;
      auVar56._11_4_ = auVar40._11_4_;
      auVar72[9] = 0;
      auVar72._0_9_ = auVar2._0_9_;
      auVar72._10_5_ = auVar56._10_5_;
      auVar88[8] = auVar2[4];
      auVar88._0_8_ = auVar2._0_8_;
      auVar88._9_6_ = auVar72._9_6_;
      auVar128._7_8_ = 0;
      auVar128._0_7_ = auVar88._8_7_;
      Var114 = CONCAT81(SUB158(auVar128 << 0x40,7),auVar2[3]);
      auVar160._9_6_ = 0;
      auVar160._0_9_ = Var114;
      auVar129._1_10_ = SUB1510(auVar160 << 0x30,5);
      auVar129[0] = auVar2[2];
      auVar161._11_4_ = 0;
      auVar161._0_11_ = auVar129;
      auVar103[2] = auVar2[1];
      auVar103._0_2_ = auVar2._0_2_;
      auVar103._3_12_ = SUB1512(auVar161 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar103._2_2_ + sVar180;
      sVar201 = auVar129._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar88._8_2_ + sVar180;
      sVar204 = auVar56._10_2_ + sVar180;
      sVar205 = auVar24._12_2_ + sVar180;
      sVar206 = (auVar8._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar188 + -0x10 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar188 + (longlong)pauVar186);
      auVar9[0xd] = 0;
      auVar9._0_13_ = auVar2._0_13_;
      auVar9[0xe] = auVar2[7];
      auVar25[0xc] = auVar2[6];
      auVar25._0_12_ = auVar2._0_12_;
      auVar25._13_2_ = auVar9._13_2_;
      auVar41[0xb] = 0;
      auVar41._0_11_ = auVar2._0_11_;
      auVar41._12_3_ = auVar25._12_3_;
      auVar57[10] = auVar2[5];
      auVar57._0_10_ = auVar2._0_10_;
      auVar57._11_4_ = auVar41._11_4_;
      auVar73[9] = 0;
      auVar73._0_9_ = auVar2._0_9_;
      auVar73._10_5_ = auVar57._10_5_;
      auVar89[8] = auVar2[4];
      auVar89._0_8_ = auVar2._0_8_;
      auVar89._9_6_ = auVar73._9_6_;
      auVar130._7_8_ = 0;
      auVar130._0_7_ = auVar89._8_7_;
      Var114 = CONCAT81(SUB158(auVar130 << 0x40,7),auVar2[3]);
      auVar162._9_6_ = 0;
      auVar162._0_9_ = Var114;
      auVar131._1_10_ = SUB1510(auVar162 << 0x30,5);
      auVar131[0] = auVar2[2];
      auVar163._11_4_ = 0;
      auVar163._0_11_ = auVar131;
      auVar104[2] = auVar2[1];
      auVar104._0_2_ = auVar2._0_2_;
      auVar104._3_12_ = SUB1512(auVar163 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar104._2_2_ + sVar180;
      sVar201 = auVar131._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar89._8_2_ + sVar180;
      sVar204 = auVar57._10_2_ + sVar180;
      sVar205 = auVar25._12_2_ + sVar180;
      sVar206 = (auVar9._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar188 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar189 + -0x10 + (longlong)pauVar186);
      auVar10[0xd] = 0;
      auVar10._0_13_ = auVar2._0_13_;
      auVar10[0xe] = auVar2[7];
      auVar26[0xc] = auVar2[6];
      auVar26._0_12_ = auVar2._0_12_;
      auVar26._13_2_ = auVar10._13_2_;
      auVar42[0xb] = 0;
      auVar42._0_11_ = auVar2._0_11_;
      auVar42._12_3_ = auVar26._12_3_;
      auVar58[10] = auVar2[5];
      auVar58._0_10_ = auVar2._0_10_;
      auVar58._11_4_ = auVar42._11_4_;
      auVar74[9] = 0;
      auVar74._0_9_ = auVar2._0_9_;
      auVar74._10_5_ = auVar58._10_5_;
      auVar90[8] = auVar2[4];
      auVar90._0_8_ = auVar2._0_8_;
      auVar90._9_6_ = auVar74._9_6_;
      auVar132._7_8_ = 0;
      auVar132._0_7_ = auVar90._8_7_;
      Var114 = CONCAT81(SUB158(auVar132 << 0x40,7),auVar2[3]);
      auVar164._9_6_ = 0;
      auVar164._0_9_ = Var114;
      auVar133._1_10_ = SUB1510(auVar164 << 0x30,5);
      auVar133[0] = auVar2[2];
      auVar165._11_4_ = 0;
      auVar165._0_11_ = auVar133;
      auVar105[2] = auVar2[1];
      auVar105._0_2_ = auVar2._0_2_;
      auVar105._3_12_ = SUB1512(auVar165 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar105._2_2_ + sVar180;
      sVar201 = auVar133._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar90._8_2_ + sVar180;
      sVar204 = auVar58._10_2_ + sVar180;
      sVar205 = auVar26._12_2_ + sVar180;
      sVar206 = (auVar10._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar189 + -0x10 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar189 + (longlong)pauVar186);
      auVar11[0xd] = 0;
      auVar11._0_13_ = auVar2._0_13_;
      auVar11[0xe] = auVar2[7];
      auVar27[0xc] = auVar2[6];
      auVar27._0_12_ = auVar2._0_12_;
      auVar27._13_2_ = auVar11._13_2_;
      auVar43[0xb] = 0;
      auVar43._0_11_ = auVar2._0_11_;
      auVar43._12_3_ = auVar27._12_3_;
      auVar59[10] = auVar2[5];
      auVar59._0_10_ = auVar2._0_10_;
      auVar59._11_4_ = auVar43._11_4_;
      auVar75[9] = 0;
      auVar75._0_9_ = auVar2._0_9_;
      auVar75._10_5_ = auVar59._10_5_;
      auVar91[8] = auVar2[4];
      auVar91._0_8_ = auVar2._0_8_;
      auVar91._9_6_ = auVar75._9_6_;
      auVar134._7_8_ = 0;
      auVar134._0_7_ = auVar91._8_7_;
      Var114 = CONCAT81(SUB158(auVar134 << 0x40,7),auVar2[3]);
      auVar166._9_6_ = 0;
      auVar166._0_9_ = Var114;
      auVar135._1_10_ = SUB1510(auVar166 << 0x30,5);
      auVar135[0] = auVar2[2];
      auVar167._11_4_ = 0;
      auVar167._0_11_ = auVar135;
      auVar106[2] = auVar2[1];
      auVar106._0_2_ = auVar2._0_2_;
      auVar106._3_12_ = SUB1512(auVar167 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar106._2_2_ + sVar180;
      sVar201 = auVar135._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar91._8_2_ + sVar180;
      sVar204 = auVar59._10_2_ + sVar180;
      sVar205 = auVar27._12_2_ + sVar180;
      sVar206 = (auVar11._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar189 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar190 + -0x10 + (longlong)pauVar186);
      auVar12[0xd] = 0;
      auVar12._0_13_ = auVar2._0_13_;
      auVar12[0xe] = auVar2[7];
      auVar28[0xc] = auVar2[6];
      auVar28._0_12_ = auVar2._0_12_;
      auVar28._13_2_ = auVar12._13_2_;
      auVar44[0xb] = 0;
      auVar44._0_11_ = auVar2._0_11_;
      auVar44._12_3_ = auVar28._12_3_;
      auVar60[10] = auVar2[5];
      auVar60._0_10_ = auVar2._0_10_;
      auVar60._11_4_ = auVar44._11_4_;
      auVar76[9] = 0;
      auVar76._0_9_ = auVar2._0_9_;
      auVar76._10_5_ = auVar60._10_5_;
      auVar92[8] = auVar2[4];
      auVar92._0_8_ = auVar2._0_8_;
      auVar92._9_6_ = auVar76._9_6_;
      auVar136._7_8_ = 0;
      auVar136._0_7_ = auVar92._8_7_;
      Var114 = CONCAT81(SUB158(auVar136 << 0x40,7),auVar2[3]);
      auVar168._9_6_ = 0;
      auVar168._0_9_ = Var114;
      auVar137._1_10_ = SUB1510(auVar168 << 0x30,5);
      auVar137[0] = auVar2[2];
      auVar169._11_4_ = 0;
      auVar169._0_11_ = auVar137;
      auVar107[2] = auVar2[1];
      auVar107._0_2_ = auVar2._0_2_;
      auVar107._3_12_ = SUB1512(auVar169 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar107._2_2_ + sVar180;
      sVar201 = auVar137._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar92._8_2_ + sVar180;
      sVar204 = auVar60._10_2_ + sVar180;
      sVar205 = auVar28._12_2_ + sVar180;
      sVar206 = (auVar12._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar190 + -0x10 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar190 + (longlong)pauVar186);
      auVar13[0xd] = 0;
      auVar13._0_13_ = auVar2._0_13_;
      auVar13[0xe] = auVar2[7];
      auVar29[0xc] = auVar2[6];
      auVar29._0_12_ = auVar2._0_12_;
      auVar29._13_2_ = auVar13._13_2_;
      auVar45[0xb] = 0;
      auVar45._0_11_ = auVar2._0_11_;
      auVar45._12_3_ = auVar29._12_3_;
      auVar61[10] = auVar2[5];
      auVar61._0_10_ = auVar2._0_10_;
      auVar61._11_4_ = auVar45._11_4_;
      auVar77[9] = 0;
      auVar77._0_9_ = auVar2._0_9_;
      auVar77._10_5_ = auVar61._10_5_;
      auVar93[8] = auVar2[4];
      auVar93._0_8_ = auVar2._0_8_;
      auVar93._9_6_ = auVar77._9_6_;
      auVar138._7_8_ = 0;
      auVar138._0_7_ = auVar93._8_7_;
      Var114 = CONCAT81(SUB158(auVar138 << 0x40,7),auVar2[3]);
      auVar170._9_6_ = 0;
      auVar170._0_9_ = Var114;
      auVar139._1_10_ = SUB1510(auVar170 << 0x30,5);
      auVar139[0] = auVar2[2];
      auVar171._11_4_ = 0;
      auVar171._0_11_ = auVar139;
      auVar108[2] = auVar2[1];
      auVar108._0_2_ = auVar2._0_2_;
      auVar108._3_12_ = SUB1512(auVar171 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar108._2_2_ + sVar180;
      sVar201 = auVar139._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar93._8_2_ + sVar180;
      sVar204 = auVar61._10_2_ + sVar180;
      sVar205 = auVar29._12_2_ + sVar180;
      sVar206 = (auVar13._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar190 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar184 + -0x10 + (longlong)pauVar186);
      auVar14[0xd] = 0;
      auVar14._0_13_ = auVar2._0_13_;
      auVar14[0xe] = auVar2[7];
      auVar30[0xc] = auVar2[6];
      auVar30._0_12_ = auVar2._0_12_;
      auVar30._13_2_ = auVar14._13_2_;
      auVar46[0xb] = 0;
      auVar46._0_11_ = auVar2._0_11_;
      auVar46._12_3_ = auVar30._12_3_;
      auVar62[10] = auVar2[5];
      auVar62._0_10_ = auVar2._0_10_;
      auVar62._11_4_ = auVar46._11_4_;
      auVar78[9] = 0;
      auVar78._0_9_ = auVar2._0_9_;
      auVar78._10_5_ = auVar62._10_5_;
      auVar94[8] = auVar2[4];
      auVar94._0_8_ = auVar2._0_8_;
      auVar94._9_6_ = auVar78._9_6_;
      auVar140._7_8_ = 0;
      auVar140._0_7_ = auVar94._8_7_;
      Var114 = CONCAT81(SUB158(auVar140 << 0x40,7),auVar2[3]);
      auVar172._9_6_ = 0;
      auVar172._0_9_ = Var114;
      auVar141._1_10_ = SUB1510(auVar172 << 0x30,5);
      auVar141[0] = auVar2[2];
      auVar173._11_4_ = 0;
      auVar173._0_11_ = auVar141;
      auVar109[2] = auVar2[1];
      auVar109._0_2_ = auVar2._0_2_;
      auVar109._3_12_ = SUB1512(auVar173 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar109._2_2_ + sVar180;
      sVar201 = auVar141._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar94._8_2_ + sVar180;
      sVar204 = auVar62._10_2_ + sVar180;
      sVar205 = auVar30._12_2_ + sVar180;
      sVar206 = (auVar14._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar184 + -0x10 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar184 + (longlong)pauVar186);
      auVar15[0xd] = 0;
      auVar15._0_13_ = auVar2._0_13_;
      auVar15[0xe] = auVar2[7];
      auVar31[0xc] = auVar2[6];
      auVar31._0_12_ = auVar2._0_12_;
      auVar31._13_2_ = auVar15._13_2_;
      auVar47[0xb] = 0;
      auVar47._0_11_ = auVar2._0_11_;
      auVar47._12_3_ = auVar31._12_3_;
      auVar63[10] = auVar2[5];
      auVar63._0_10_ = auVar2._0_10_;
      auVar63._11_4_ = auVar47._11_4_;
      auVar79[9] = 0;
      auVar79._0_9_ = auVar2._0_9_;
      auVar79._10_5_ = auVar63._10_5_;
      auVar95[8] = auVar2[4];
      auVar95._0_8_ = auVar2._0_8_;
      auVar95._9_6_ = auVar79._9_6_;
      auVar142._7_8_ = 0;
      auVar142._0_7_ = auVar95._8_7_;
      Var114 = CONCAT81(SUB158(auVar142 << 0x40,7),auVar2[3]);
      auVar174._9_6_ = 0;
      auVar174._0_9_ = Var114;
      auVar143._1_10_ = SUB1510(auVar174 << 0x30,5);
      auVar143[0] = auVar2[2];
      auVar175._11_4_ = 0;
      auVar175._0_11_ = auVar143;
      auVar110[2] = auVar2[1];
      auVar110._0_2_ = auVar2._0_2_;
      auVar110._3_12_ = SUB1512(auVar175 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar110._2_2_ + sVar180;
      sVar201 = auVar143._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar95._8_2_ + sVar180;
      sVar204 = auVar63._10_2_ + sVar180;
      sVar205 = auVar31._12_2_ + sVar180;
      sVar206 = (auVar15._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar184 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar187 + -0x10 + (longlong)pauVar186);
      auVar16[0xd] = 0;
      auVar16._0_13_ = auVar2._0_13_;
      auVar16[0xe] = auVar2[7];
      auVar32[0xc] = auVar2[6];
      auVar32._0_12_ = auVar2._0_12_;
      auVar32._13_2_ = auVar16._13_2_;
      auVar48[0xb] = 0;
      auVar48._0_11_ = auVar2._0_11_;
      auVar48._12_3_ = auVar32._12_3_;
      auVar64[10] = auVar2[5];
      auVar64._0_10_ = auVar2._0_10_;
      auVar64._11_4_ = auVar48._11_4_;
      auVar80[9] = 0;
      auVar80._0_9_ = auVar2._0_9_;
      auVar80._10_5_ = auVar64._10_5_;
      auVar96[8] = auVar2[4];
      auVar96._0_8_ = auVar2._0_8_;
      auVar96._9_6_ = auVar80._9_6_;
      auVar144._7_8_ = 0;
      auVar144._0_7_ = auVar96._8_7_;
      Var114 = CONCAT81(SUB158(auVar144 << 0x40,7),auVar2[3]);
      auVar176._9_6_ = 0;
      auVar176._0_9_ = Var114;
      auVar145._1_10_ = SUB1510(auVar176 << 0x30,5);
      auVar145[0] = auVar2[2];
      auVar177._11_4_ = 0;
      auVar177._0_11_ = auVar145;
      auVar111[2] = auVar2[1];
      auVar111._0_2_ = auVar2._0_2_;
      auVar111._3_12_ = SUB1512(auVar177 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar111._2_2_ + sVar180;
      sVar201 = auVar145._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar96._8_2_ + sVar180;
      sVar204 = auVar64._10_2_ + sVar180;
      sVar205 = auVar32._12_2_ + sVar180;
      sVar206 = (auVar16._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar187 + -0x10 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      auVar2 = *(undefined1 (*) [16])(lVar187 + (longlong)pauVar186);
      auVar17[0xd] = 0;
      auVar17._0_13_ = auVar2._0_13_;
      auVar17[0xe] = auVar2[7];
      auVar33[0xc] = auVar2[6];
      auVar33._0_12_ = auVar2._0_12_;
      auVar33._13_2_ = auVar17._13_2_;
      auVar49[0xb] = 0;
      auVar49._0_11_ = auVar2._0_11_;
      auVar49._12_3_ = auVar33._12_3_;
      auVar65[10] = auVar2[5];
      auVar65._0_10_ = auVar2._0_10_;
      auVar65._11_4_ = auVar49._11_4_;
      auVar81[9] = 0;
      auVar81._0_9_ = auVar2._0_9_;
      auVar81._10_5_ = auVar65._10_5_;
      auVar97[8] = auVar2[4];
      auVar97._0_8_ = auVar2._0_8_;
      auVar97._9_6_ = auVar81._9_6_;
      auVar146._7_8_ = 0;
      auVar146._0_7_ = auVar97._8_7_;
      Var114 = CONCAT81(SUB158(auVar146 << 0x40,7),auVar2[3]);
      auVar178._9_6_ = 0;
      auVar178._0_9_ = Var114;
      auVar147._1_10_ = SUB1510(auVar178 << 0x30,5);
      auVar147[0] = auVar2[2];
      auVar179._11_4_ = 0;
      auVar179._0_11_ = auVar147;
      auVar112[2] = auVar2[1];
      auVar112._0_2_ = auVar2._0_2_;
      auVar112._3_12_ = SUB1512(auVar179 << 0x20,3);
      sVar191 = (ushort)auVar2[8] + sVar180;
      sVar192 = (ushort)auVar2[9] + sVar180;
      sVar193 = (ushort)auVar2[10] + sVar180;
      sVar194 = (ushort)auVar2[0xb] + sVar180;
      sVar195 = (ushort)auVar2[0xc] + sVar180;
      sVar196 = (ushort)auVar2[0xd] + sVar180;
      sVar197 = (ushort)auVar2[0xe] + sVar180;
      sVar198 = (ushort)auVar2[0xf] + sVar180;
      sVar199 = (auVar2._0_2_ & 0xff) + sVar180;
      sVar200 = auVar112._2_2_ + sVar180;
      sVar201 = auVar147._0_2_ + sVar180;
      sVar202 = (short)Var114 + sVar180;
      sVar203 = auVar97._8_2_ + sVar180;
      sVar204 = auVar65._10_2_ + sVar180;
      sVar205 = auVar33._12_2_ + sVar180;
      sVar206 = (auVar17._13_2_ >> 8) + sVar180;
      pcVar1 = (char *)(lVar187 + (longlong)pauVar186);
      *pcVar1 = (0 < sVar199) * (sVar199 < 0x100) * (char)sVar199 - (0xff < sVar199);
      pcVar1[1] = (0 < sVar200) * (sVar200 < 0x100) * (char)sVar200 - (0xff < sVar200);
      pcVar1[2] = (0 < sVar201) * (sVar201 < 0x100) * (char)sVar201 - (0xff < sVar201);
      pcVar1[3] = (0 < sVar202) * (sVar202 < 0x100) * (char)sVar202 - (0xff < sVar202);
      pcVar1[4] = (0 < sVar203) * (sVar203 < 0x100) * (char)sVar203 - (0xff < sVar203);
      pcVar1[5] = (0 < sVar204) * (sVar204 < 0x100) * (char)sVar204 - (0xff < sVar204);
      pcVar1[6] = (0 < sVar205) * (sVar205 < 0x100) * (char)sVar205 - (0xff < sVar205);
      pcVar1[7] = (0 < sVar206) * (sVar206 < 0x100) * (char)sVar206 - (0xff < sVar206);
      pcVar1[8] = (0 < sVar191) * (sVar191 < 0x100) * (char)sVar191 - (0xff < sVar191);
      pcVar1[9] = (0 < sVar192) * (sVar192 < 0x100) * (char)sVar192 - (0xff < sVar192);
      pcVar1[10] = (0 < sVar193) * (sVar193 < 0x100) * (char)sVar193 - (0xff < sVar193);
      pcVar1[0xb] = (0 < sVar194) * (sVar194 < 0x100) * (char)sVar194 - (0xff < sVar194);
      pcVar1[0xc] = (0 < sVar195) * (sVar195 < 0x100) * (char)sVar195 - (0xff < sVar195);
      pcVar1[0xd] = (0 < sVar196) * (sVar196 < 0x100) * (char)sVar196 - (0xff < sVar196);
      pcVar1[0xe] = (0 < sVar197) * (sVar197 < 0x100) * (char)sVar197 - (0xff < sVar197);
      pcVar1[0xf] = (0 < sVar198) * (sVar198 < 0x100) * (char)sVar198 - (0xff < sVar198);
      pauVar186 = (undefined1 (*) [16])(*pauVar186 + param_3 * 8);
      lVar185 = lVar185 + -1;
    } while (lVar185 != 0);
    return;
  }
  if (param_4 < 0x23) {
                    /* WARNING: Could not recover jumptable at 0x000145471d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbc18)();
    return;
  }
  if (param_4 < 0x88) {
                    /* WARNING: Could not recover jumptable at 0x000145471d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbc10)();
    return;
  }
  FUN_145452aa0();
  return;
}



// FUNCTION 145471da0 FUN_145471da0 body=49 status=ok
// SIG undefined FUN_145471da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471da0(int param_1,undefined1 (*param_2) [16],char *param_3,int param_4,int param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [16];
  undefined1 auVar19 [15];
  unkuint9 Var20;
  undefined1 auVar21 [15];
  undefined1 auVar22 [13];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [13];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined2 uVar37;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  short sVar53;
  short sVar61;
  short sVar62;
  short sVar63;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  short sVar64;
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  short sVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  if (param_1 != 0) {
    FUN_14559d520(param_2,param_3,param_4,param_1);
    return;
  }
  if (param_5 < 2) {
    FUN_145454450();
    return;
  }
  auVar43 = packssdw(*param_2,param_2[1]);
  auVar28 = packssdw(param_2[2],param_2[3]);
  auVar41._0_12_ = auVar43._0_12_;
  auVar41._12_2_ = auVar43._6_2_;
  auVar41._14_2_ = auVar28._6_2_;
  auVar40._12_4_ = auVar41._12_4_;
  auVar40._0_10_ = auVar43._0_10_;
  auVar40._10_2_ = auVar28._4_2_;
  auVar39._10_6_ = auVar40._10_6_;
  auVar39._0_8_ = auVar43._0_8_;
  auVar39._8_2_ = auVar43._4_2_;
  uVar37 = auVar28._2_2_;
  auVar54._2_8_ = auVar39._8_8_;
  auVar54._0_2_ = uVar37;
  auVar54._10_6_ = 0;
  auVar29._12_4_ = 0;
  auVar29._0_12_ = SUB1612(auVar54 << 0x30,4);
  auVar29 = auVar29 << 0x20;
  auVar67._0_12_ = auVar29._0_12_;
  auVar67._12_2_ = uVar37;
  auVar67._14_2_ = auVar28._10_2_;
  auVar66._12_4_ = auVar67._12_4_;
  auVar66._0_10_ = auVar29._0_10_;
  auVar66._10_2_ = auVar43._10_2_;
  auVar65._10_6_ = auVar66._10_6_;
  auVar65._0_8_ = auVar29._0_8_;
  auVar65._8_2_ = auVar43._2_2_;
  auVar80._2_8_ = auVar65._8_8_;
  auVar80._0_2_ = auVar28._8_2_;
  auVar80._10_6_ = 0;
  auVar77._12_4_ = 0;
  auVar77._0_12_ = SUB1612(auVar80 << 0x30,4);
  auVar77 = auVar77 << 0x20;
  auVar47._0_12_ = auVar77._0_12_;
  auVar47._12_2_ = auVar28._8_2_;
  auVar47._14_2_ = auVar28._12_2_;
  auVar46._12_4_ = auVar47._12_4_;
  auVar46._0_10_ = auVar77._0_10_;
  auVar46._10_2_ = auVar28._4_2_;
  auVar45._10_6_ = auVar46._10_6_;
  auVar45._0_8_ = auVar77._0_8_;
  auVar45._8_2_ = auVar28._0_2_;
  auVar44._8_8_ = auVar45._8_8_;
  auVar44._6_2_ = auVar43._12_2_;
  auVar44._4_2_ = auVar43._8_2_;
  auVar44._2_2_ = auVar43._4_2_;
  auVar44._0_2_ = auVar43._0_2_;
  auVar29 = pmaddwd(_DAT_149d4ff10,auVar44);
  auVar68._2_2_ = auVar43._6_2_;
  auVar68._0_2_ = auVar43._2_2_;
  auVar68._4_2_ = auVar43._10_2_;
  auVar68._6_2_ = auVar43._14_2_;
  auVar68._8_2_ = uVar37;
  auVar68._10_2_ = auVar28._6_2_;
  auVar68._12_2_ = auVar28._10_2_;
  auVar68._14_2_ = auVar28._14_2_;
  auVar30._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar30._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar30._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar30._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar29 = pmaddwd(_DAT_149d4fe30,auVar68);
  auVar54 = pmaddwd(_DAT_149d4fe60,auVar44);
  auVar42._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar42._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar42._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar42._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar55._0_4_ = auVar54._0_4_ + 0x2000 >> 0xe;
  auVar55._4_4_ = auVar54._4_4_ + 0x2000 >> 0xe;
  auVar55._8_4_ = auVar54._8_4_ + 0x2000 >> 0xe;
  auVar55._12_4_ = auVar54._12_4_ + 0x2000 >> 0xe;
  auVar54 = packssdw(auVar55,auVar30);
  auVar29 = pmaddwd(_DAT_149d4fee0,auVar68);
  uVar2 = *(undefined4 *)param_3;
  auVar31._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar31._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar31._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar31._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar29 = packssdw(auVar42,auVar31);
  sVar49 = auVar29._2_2_ + auVar54._2_2_;
  sVar50 = auVar29._4_2_ + auVar54._4_2_;
  sVar51 = auVar29._6_2_ + auVar54._6_2_;
  sVar52 = auVar29._10_2_ + auVar54._10_2_;
  sVar53 = auVar54._0_2_ - auVar29._0_2_;
  sVar61 = auVar54._2_2_ - auVar29._2_2_;
  sVar62 = auVar54._10_2_ - auVar29._10_2_;
  sVar63 = auVar54._12_2_ - auVar29._12_2_;
  sVar64 = auVar54._14_2_ - auVar29._14_2_;
  auVar43._2_8_ =
       (longlong)
       (CONCAT64(CONCAT42(CONCAT22(sVar64,sVar51),sVar63),CONCAT22(sVar50,sVar51)) >> 0x10);
  auVar43._0_2_ = sVar62;
  auVar43._10_6_ = 0;
  auVar28._12_4_ = 0;
  auVar28._0_12_ = SUB1612(auVar43 << 0x30,4);
  auVar28 = auVar28 << 0x20;
  auVar59._0_12_ = auVar28._0_12_;
  auVar59._12_2_ = sVar62;
  auVar59._14_2_ = sVar61;
  auVar58._12_4_ = auVar59._12_4_;
  auVar58._0_10_ = auVar28._0_10_;
  auVar58._10_2_ = sVar52;
  auVar57._10_6_ = auVar58._10_6_;
  auVar57._0_8_ = auVar28._0_8_;
  auVar57._8_2_ = sVar49;
  auVar18._2_8_ = auVar57._8_8_;
  auVar18._0_2_ = sVar53;
  auVar18._10_6_ = 0;
  auVar56._12_4_ = 0;
  auVar56._0_12_ = SUB1612(auVar18 << 0x30,4);
  auVar56 = auVar56 << 0x20;
  auVar35._0_12_ = auVar56._0_12_;
  auVar35._12_2_ = sVar53;
  auVar35._14_2_ = auVar54._4_2_ - auVar29._4_2_;
  auVar34._12_4_ = auVar35._12_4_;
  auVar34._0_10_ = auVar56._0_10_;
  auVar34._10_2_ = sVar63;
  auVar33._10_6_ = auVar34._10_6_;
  auVar33._0_8_ = auVar56._0_8_;
  auVar33._8_2_ = auVar54._8_2_ - auVar29._8_2_;
  auVar32._8_8_ = auVar33._8_8_;
  auVar32._6_2_ = auVar29._12_2_ + auVar54._12_2_;
  auVar32._4_2_ = auVar29._8_2_ + auVar54._8_2_;
  auVar32._2_2_ = sVar50;
  auVar32._0_2_ = auVar29._0_2_ + auVar54._0_2_;
  auVar80 = pmaddwd(_DAT_149d4fe60,auVar32);
  auVar77 = pmaddwd(_DAT_149d4ff10,auVar32);
  uVar3 = *(undefined4 *)(param_3 + param_4);
  uVar38 = CONCAT44(uVar3,uVar2);
  auVar60._2_2_ = sVar51;
  auVar60._0_2_ = sVar49;
  auVar60._4_2_ = sVar52;
  auVar60._6_2_ = auVar29._14_2_ + auVar54._14_2_;
  auVar60._8_2_ = sVar62;
  auVar60._10_2_ = sVar64;
  auVar60._12_2_ = sVar61;
  auVar60._14_2_ = auVar54._6_2_ - auVar29._6_2_;
  auVar54 = pmaddwd(_DAT_149d4fe30,auVar60);
  auVar29 = pmaddwd(_DAT_149d4fee0,auVar60);
  auVar81._0_4_ = auVar80._0_4_ + 0x2000 >> 0xe;
  auVar81._4_4_ = auVar80._4_4_ + 0x2000 >> 0xe;
  auVar81._8_4_ = auVar80._8_4_ + 0x2000 >> 0xe;
  auVar81._12_4_ = auVar80._12_4_ + 0x2000 >> 0xe;
  auVar78._0_4_ = auVar77._0_4_ + 0x2000 >> 0xe;
  auVar78._4_4_ = auVar77._4_4_ + 0x2000 >> 0xe;
  auVar78._8_4_ = auVar77._8_4_ + 0x2000 >> 0xe;
  auVar78._12_4_ = auVar77._12_4_ + 0x2000 >> 0xe;
  auVar77 = packssdw(auVar81,auVar78);
  auVar4._8_6_ = 0;
  auVar4._0_8_ = uVar38;
  auVar4[0xe] = (char)((uint)uVar3 >> 0x18);
  auVar6._8_4_ = 0;
  auVar6._0_8_ = uVar38;
  auVar6[0xc] = (char)((uint)uVar3 >> 0x10);
  auVar6._13_2_ = auVar4._13_2_;
  auVar8._8_4_ = 0;
  auVar8._0_8_ = uVar38;
  auVar8._12_3_ = auVar6._12_3_;
  auVar10._8_2_ = 0;
  auVar10._0_8_ = uVar38;
  auVar10[10] = (char)((uint)uVar3 >> 8);
  auVar10._11_4_ = auVar8._11_4_;
  auVar12._8_2_ = 0;
  auVar12._0_8_ = uVar38;
  auVar12._10_5_ = auVar10._10_5_;
  auVar14[8] = (char)uVar3;
  auVar14._0_8_ = uVar38;
  auVar14._9_6_ = auVar12._9_6_;
  auVar19._7_8_ = 0;
  auVar19._0_7_ = auVar14._8_7_;
  Var20 = CONCAT81(SUB158(auVar19 << 0x40,7),(char)((uint)uVar2 >> 0x18));
  auVar26._9_6_ = 0;
  auVar26._0_9_ = Var20;
  auVar16[4] = (char)((uint)uVar2 >> 0x10);
  auVar16._0_4_ = uVar2;
  auVar16._5_10_ = SUB1510(auVar26 << 0x30,5);
  auVar21._11_4_ = 0;
  auVar21._0_11_ = auVar16._4_11_;
  auVar22._1_12_ = SUB1512(auVar21 << 0x20,3);
  auVar22[0] = (char)((uint)uVar2 >> 8);
  auVar79._0_4_ = auVar54._0_4_ + 0x2000 >> 0xe;
  auVar79._4_4_ = auVar54._4_4_ + 0x2000 >> 0xe;
  auVar79._8_4_ = auVar54._8_4_ + 0x2000 >> 0xe;
  auVar79._12_4_ = auVar54._12_4_ + 0x2000 >> 0xe;
  auVar76._0_4_ = auVar29._0_4_ + 0x2000 >> 0xe;
  auVar76._4_4_ = auVar29._4_4_ + 0x2000 >> 0xe;
  auVar76._8_4_ = auVar29._8_4_ + 0x2000 >> 0xe;
  auVar76._12_4_ = auVar29._12_4_ + 0x2000 >> 0xe;
  auVar54 = packssdw(auVar79,auVar76);
  auVar36._0_2_ = auVar54._0_2_ + auVar77._0_2_ + 8;
  auVar36._2_2_ = auVar54._2_2_ + auVar77._2_2_ + 8;
  auVar36._4_2_ = auVar54._4_2_ + auVar77._4_2_ + 8;
  auVar36._6_2_ = auVar54._6_2_ + auVar77._6_2_ + 8;
  auVar36._8_2_ = auVar54._8_2_ + auVar77._8_2_ + 8;
  auVar36._10_2_ = auVar54._10_2_ + auVar77._10_2_ + 8;
  auVar36._12_2_ = auVar54._12_2_ + auVar77._12_2_ + 8;
  auVar36._14_2_ = auVar54._14_2_ + auVar77._14_2_ + 8;
  auVar29 = psraw(auVar36,4);
  uVar3 = *(undefined4 *)(param_3 + param_4 * 2);
  sVar64 = (ushort)(byte)uVar2 + auVar29._0_2_;
  sVar69 = auVar22._0_2_ + auVar29._2_2_;
  sVar70 = auVar16._4_2_ + auVar29._4_2_;
  sVar71 = (short)Var20 + auVar29._6_2_;
  sVar72 = auVar14._8_2_ + auVar29._8_2_;
  sVar73 = auVar10._10_2_ + auVar29._10_2_;
  sVar74 = auVar6._12_2_ + auVar29._12_2_;
  sVar75 = (auVar4._13_2_ >> 8) + auVar29._14_2_;
  uVar2 = *(undefined4 *)(param_3 + param_4 * 3);
  auVar48._0_2_ = (auVar77._8_2_ - auVar54._8_2_) + 8;
  auVar48._2_2_ = (auVar77._10_2_ - auVar54._10_2_) + 8;
  auVar48._4_2_ = (auVar77._12_2_ - auVar54._12_2_) + 8;
  auVar48._6_2_ = (auVar77._14_2_ - auVar54._14_2_) + 8;
  auVar48._8_2_ = (auVar77._0_2_ - auVar54._0_2_) + 8;
  auVar48._10_2_ = (auVar77._2_2_ - auVar54._2_2_) + 8;
  auVar48._12_2_ = (auVar77._4_2_ - auVar54._4_2_) + 8;
  auVar48._14_2_ = (auVar77._6_2_ - auVar54._6_2_) + 8;
  uVar38 = CONCAT44(uVar2,uVar3);
  auVar29 = psraw(auVar48,4);
  auVar5._8_6_ = 0;
  auVar5._0_8_ = uVar38;
  auVar5[0xe] = (char)((uint)uVar2 >> 0x18);
  auVar7._8_4_ = 0;
  auVar7._0_8_ = uVar38;
  auVar7[0xc] = (char)((uint)uVar2 >> 0x10);
  auVar7._13_2_ = auVar5._13_2_;
  auVar9._8_4_ = 0;
  auVar9._0_8_ = uVar38;
  auVar9._12_3_ = auVar7._12_3_;
  auVar11._8_2_ = 0;
  auVar11._0_8_ = uVar38;
  auVar11[10] = (char)((uint)uVar2 >> 8);
  auVar11._11_4_ = auVar9._11_4_;
  auVar13._8_2_ = 0;
  auVar13._0_8_ = uVar38;
  auVar13._10_5_ = auVar11._10_5_;
  auVar15[8] = (char)uVar2;
  auVar15._0_8_ = uVar38;
  auVar15._9_6_ = auVar13._9_6_;
  auVar23._7_8_ = 0;
  auVar23._0_7_ = auVar15._8_7_;
  Var20 = CONCAT81(SUB158(auVar23 << 0x40,7),(char)((uint)uVar3 >> 0x18));
  auVar27._9_6_ = 0;
  auVar27._0_9_ = Var20;
  auVar17[4] = (char)((uint)uVar3 >> 0x10);
  auVar17._0_4_ = uVar3;
  auVar17._5_10_ = SUB1510(auVar27 << 0x30,5);
  auVar24._11_4_ = 0;
  auVar24._0_11_ = auVar17._4_11_;
  auVar25._1_12_ = SUB1512(auVar24 << 0x20,3);
  auVar25[0] = (char)((uint)uVar3 >> 8);
  sVar49 = auVar29._0_2_ + (ushort)(byte)uVar3;
  sVar50 = auVar29._2_2_ + auVar25._0_2_;
  sVar51 = auVar29._4_2_ + auVar17._4_2_;
  sVar52 = auVar29._6_2_ + (short)Var20;
  sVar53 = auVar29._8_2_ + auVar15._8_2_;
  sVar61 = auVar29._10_2_ + auVar11._10_2_;
  sVar62 = auVar29._12_2_ + auVar7._12_2_;
  sVar63 = auVar29._14_2_ + (auVar5._13_2_ >> 8);
  *param_3 = (0 < sVar64) * (sVar64 < 0x100) * (char)sVar64 - (0xff < sVar64);
  param_3[1] = (0 < sVar69) * (sVar69 < 0x100) * (char)sVar69 - (0xff < sVar69);
  param_3[2] = (0 < sVar70) * (sVar70 < 0x100) * (char)sVar70 - (0xff < sVar70);
  param_3[3] = (0 < sVar71) * (sVar71 < 0x100) * (char)sVar71 - (0xff < sVar71);
  pcVar1 = param_3 + param_4;
  *pcVar1 = (0 < sVar72) * (sVar72 < 0x100) * (char)sVar72 - (0xff < sVar72);
  pcVar1[1] = (0 < sVar73) * (sVar73 < 0x100) * (char)sVar73 - (0xff < sVar73);
  pcVar1[2] = (0 < sVar74) * (sVar74 < 0x100) * (char)sVar74 - (0xff < sVar74);
  pcVar1[3] = (0 < sVar75) * (sVar75 < 0x100) * (char)sVar75 - (0xff < sVar75);
  pcVar1 = param_3 + param_4 * 2;
  *pcVar1 = (0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49);
  pcVar1[1] = (0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50);
  pcVar1[2] = (0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51);
  pcVar1[3] = (0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52);
  param_3 = param_3 + param_4 * 3;
  *param_3 = (0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53);
  param_3[1] = (0 < sVar61) * (sVar61 < 0x100) * (char)sVar61 - (0xff < sVar61);
  param_3[2] = (0 < sVar62) * (sVar62 < 0x100) * (char)sVar62 - (0xff < sVar62);
  param_3[3] = (0 < sVar63) * (sVar63 < 0x100) * (char)sVar63 - (0xff < sVar63);
  return;
}



// FUNCTION 145471de0 FUN_145471de0 body=67 status=ok
// SIG undefined FUN_145471de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471de0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  if (param_1 != 0) {
    FUN_14559d650(param_2,param_3,param_4,param_1);
    return;
  }
  if (param_5 == 1) {
    FUN_145454570(param_2);
    return;
  }
  if (param_5 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000145471e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbc20)();
    return;
  }
  FUN_145454670(param_2);
  return;
}



// FUNCTION 145471e30 FUN_145471e30 body=79 status=ok
// SIG undefined FUN_145471e30(void)

void FUN_145471e30(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  if (param_1 != 0) {
    FUN_14559d1a0(param_2,param_3,param_4,param_1);
    return;
  }
  if (param_5 == 1) {
    FUN_1454520c0();
    return;
  }
  if (param_5 < 0xb) {
    FUN_145451f90();
    return;
  }
  if (param_5 < 0x27) {
    FUN_145452780();
    return;
  }
  FUN_145452140(param_2);
  return;
}



// FUNCTION 145471e80 FUN_145471e80 body=20 status=ok
// SIG undefined FUN_145471e80(void)

void FUN_145471e80(int *param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ushort *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_a8 [8];
  longlong lStack_a0;
  longlong lStack_98;
  int aiStack_88 [16];
  ulonglong uStack_48;
  
  if (param_4 < 2) {
    FUN_14559e270();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = (longlong)param_3;
  lVar5 = ((longlong)param_1[2] >> 2) - ((longlong)param_1[3] >> 2);
  lVar9 = ((longlong)*param_1 >> 2) + ((longlong)param_1[1] >> 2);
  aiStack_88[1] = (int)(lVar9 - lVar5 >> 1);
  aiStack_88[2] = aiStack_88[1] - (int)((longlong)param_1[1] >> 2);
  aiStack_88[1] = aiStack_88[1] - (int)((longlong)param_1[3] >> 2);
  aiStack_88[0] = (int)lVar9 - aiStack_88[1];
  lVar9 = ((longlong)param_1[4] >> 2) + ((longlong)param_1[5] >> 2);
  lVar10 = ((longlong)param_1[6] >> 2) - ((longlong)param_1[7] >> 2);
  aiStack_88[3] = (int)lVar5 + aiStack_88[2];
  aiStack_88[5] = (int)(lVar9 - lVar10 >> 1);
  aiStack_88[6] = aiStack_88[5] - (int)((longlong)param_1[5] >> 2);
  aiStack_88[5] = aiStack_88[5] - (int)((longlong)param_1[7] >> 2);
  aiStack_88[4] = (int)lVar9 - aiStack_88[5];
  lVar5 = ((longlong)param_1[8] >> 2) + ((longlong)param_1[9] >> 2);
  lVar9 = ((longlong)param_1[10] >> 2) - ((longlong)param_1[0xb] >> 2);
  aiStack_88[7] = (int)lVar10 + aiStack_88[6];
  aiStack_88[9] = (int)(lVar5 - lVar9 >> 1);
  aiStack_88[10] = aiStack_88[9] - (int)((longlong)param_1[9] >> 2);
  aiStack_88[9] = aiStack_88[9] - (int)((longlong)param_1[0xb] >> 2);
  aiStack_88[8] = (int)lVar5 - aiStack_88[9];
  lVar5 = ((longlong)param_1[0xc] >> 2) + ((longlong)param_1[0xd] >> 2);
  lVar10 = ((longlong)param_1[0xe] >> 2) - ((longlong)param_1[0xf] >> 2);
  aiStack_88[0xb] = (int)lVar9 + aiStack_88[10];
  piVar7 = aiStack_88;
  aiStack_88[0xd] = (int)(lVar5 - lVar10 >> 1);
  aiStack_88[0xe] = aiStack_88[0xd] - (int)((longlong)param_1[0xd] >> 2);
  aiStack_88[0xd] = aiStack_88[0xd] - (int)((longlong)param_1[0xf] >> 2);
  aiStack_88[0xc] = (int)lVar5 - aiStack_88[0xd];
  iVar13 = 0;
  aiStack_88[0xf] = (int)lVar10 + aiStack_88[0xe];
  lStack_a0 = lVar8 * 2;
  lStack_98 = lVar8 * 4;
  do {
    lVar5 = (longlong)*piVar7 + (longlong)piVar7[4];
    lVar9 = (longlong)piVar7[8] - (longlong)piVar7[0xc];
    iVar3 = (int)(lVar5 - lVar9 >> 1);
    iVar11 = iVar3 - piVar7[0xc];
    iVar3 = iVar3 - piVar7[4];
    iVar2 = ((uint)*param_2 - iVar11) + (int)lVar5;
    iVar12 = (int)lVar9 + iVar3;
    if (param_5 == 8) {
LAB_14559dea4:
      iVar4 = 0xff;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      *param_2 = (ushort)iVar2;
      iVar11 = (uint)param_2[lVar8] + iVar11;
      if (param_5 != 8) {
        if (param_5 == 10) goto LAB_14559de9a;
        if (param_5 == 0xc) goto LAB_14559ded6;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      else if (0xff < iVar11) {
        iVar11 = 0xff;
      }
      param_2[lVar8] = (ushort)iVar11;
      iVar3 = (uint)param_2[lVar8 * 2] + iVar3;
      if (param_5 != 8) {
        if (param_5 == 10) goto LAB_14559df22;
        if (param_5 == 0xc) goto LAB_14559df59;
      }
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      param_2[lVar8 * 2] = (ushort)iVar3;
      iVar12 = (uint)param_2[lVar8 * 3] + iVar12;
      if (param_5 != 8) {
        if (param_5 == 10) goto LAB_14559dfa5;
        if (param_5 == 0xc) goto LAB_14559dfe8;
      }
      if (-1 < iVar12) goto LAB_14559dff7;
      iVar12 = 0;
    }
    else if (param_5 == 10) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *param_2 = (ushort)iVar2;
      iVar11 = (uint)param_2[lVar8] + iVar11;
LAB_14559de9a:
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      else if (0x3ff < iVar11) {
        iVar11 = 0x3ff;
      }
      param_2[lVar8] = (ushort)iVar11;
      iVar3 = (uint)param_2[lVar8 * 2] + iVar3;
LAB_14559df22:
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x3ff < iVar3) {
        iVar3 = 0x3ff;
      }
      param_2[lVar8 * 2] = (ushort)iVar3;
      iVar12 = (uint)param_2[lVar8 * 3] + iVar12;
LAB_14559dfa5:
      if (-1 < iVar12) {
        iVar4 = 0x3ff;
        goto LAB_14559dff7;
      }
      iVar12 = 0;
    }
    else {
      if (param_5 != 0xc) goto LAB_14559dea4;
      if (iVar2 < 0) {
        *param_2 = 0;
        iVar11 = (uint)param_2[lVar8] + iVar11;
      }
      else {
        if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
        *param_2 = (ushort)iVar2;
        iVar11 = (uint)param_2[lVar8] + iVar11;
      }
LAB_14559ded6:
      if (iVar11 < 0) {
        param_2[lVar8] = 0;
        iVar3 = (uint)param_2[lVar8 * 2] + iVar3;
      }
      else {
        if (0xfff < iVar11) {
          iVar11 = 0xfff;
        }
        param_2[lVar8] = (ushort)iVar11;
        iVar3 = (uint)param_2[lVar8 * 2] + iVar3;
      }
LAB_14559df59:
      if (iVar3 < 0) {
        param_2[lVar8 * 2] = 0;
        iVar12 = (uint)param_2[lVar8 * 3] + iVar12;
      }
      else {
        if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
        param_2[lVar8 * 2] = (ushort)iVar3;
        iVar12 = (uint)param_2[lVar8 * 3] + iVar12;
      }
LAB_14559dfe8:
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else {
        iVar4 = 0xfff;
LAB_14559dff7:
        if (iVar4 < iVar12) {
          iVar12 = iVar4;
        }
      }
    }
    puVar6 = param_2 + lVar8 * 3;
    iVar3 = piVar7[5];
    iVar2 = piVar7[0xd];
    lVar9 = (longlong)piVar7[1] + (longlong)iVar3;
    lVar5 = (longlong)piVar7[9] - (longlong)iVar2;
    *puVar6 = (ushort)iVar12;
    iVar12 = (int)(lVar9 - lVar5 >> 1);
    iVar2 = iVar12 - iVar2;
    iVar12 = iVar12 - iVar3;
    iVar3 = ((uint)param_2[1] - iVar2) + (int)lVar9;
    iVar11 = (int)lVar5 + iVar12;
    if (param_5 == 8) {
LAB_14559e0bf:
      if (iVar3 < 0) {
        uVar1 = 0;
      }
      else {
        if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        uVar1 = (ushort)iVar3;
      }
      param_2[1] = uVar1;
      iVar2 = (uint)param_2[lVar8 + 1] + iVar2;
      if (param_5 != 8) {
        if (param_5 == 10) goto LAB_14559e0b6;
        if (param_5 == 0xc) goto LAB_14559e0f3;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      param_2[lVar8 + 1] = (ushort)iVar2;
      iVar12 = (uint)param_2[lVar8 * 2 + 1] + iVar12;
      if (param_5 != 8) {
        if (param_5 == 10) goto LAB_14559e13b;
        if (param_5 == 0xc) goto LAB_14559e16f;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0xff < iVar12) {
        iVar12 = 0xff;
      }
      param_2[lVar8 * 2 + 1] = (ushort)iVar12;
      iVar11 = (uint)puVar6[1] + iVar11;
      if (param_5 != 8) {
        if (param_5 == 10) goto LAB_14559e1b1;
        if (param_5 == 0xc) goto LAB_14559e1e7;
      }
      if (iVar11 < 0) {
        iVar11 = 0;
      }
      else if (0xff < iVar11) {
        iVar11 = 0xff;
      }
LAB_14559e21d:
      uVar1 = (ushort)iVar11;
    }
    else if (param_5 == 10) {
      if (iVar3 < 0) {
        uVar1 = 0;
      }
      else {
        if (0x3ff < iVar3) {
          iVar3 = 0x3ff;
        }
        uVar1 = (ushort)iVar3;
      }
      param_2[1] = uVar1;
      iVar2 = (uint)param_2[lVar8 + 1] + iVar2;
LAB_14559e0b6:
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      param_2[lVar8 + 1] = (ushort)iVar2;
      iVar12 = (uint)param_2[lVar8 * 2 + 1] + iVar12;
LAB_14559e13b:
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      else if (0x3ff < iVar12) {
        iVar12 = 0x3ff;
      }
      param_2[lVar8 * 2 + 1] = (ushort)iVar12;
      iVar11 = (uint)puVar6[1] + iVar11;
LAB_14559e1b1:
      if (-1 < iVar11) {
        if (0x3ff < iVar11) {
          iVar11 = 0x3ff;
        }
        goto LAB_14559e21d;
      }
      uVar1 = 0;
    }
    else {
      if (param_5 != 0xc) goto LAB_14559e0bf;
      if (iVar3 < 0) {
        param_2[1] = 0;
        iVar2 = (uint)param_2[lVar8 + 1] + iVar2;
      }
      else {
        if (0xfff < iVar3) {
          iVar3 = 0xfff;
        }
        param_2[1] = (ushort)iVar3;
        iVar2 = (uint)param_2[lVar8 + 1] + iVar2;
      }
LAB_14559e0f3:
      if (iVar2 < 0) {
        param_2[lVar8 + 1] = 0;
        iVar12 = (uint)param_2[lVar8 * 2 + 1] + iVar12;
      }
      else {
        if (0xfff < iVar2) {
          iVar2 = 0xfff;
        }
        param_2[lVar8 + 1] = (ushort)iVar2;
        iVar12 = (uint)param_2[lVar8 * 2 + 1] + iVar12;
      }
LAB_14559e16f:
      if (iVar12 < 0) {
        param_2[lVar8 * 2 + 1] = 0;
        iVar11 = (uint)puVar6[1] + iVar11;
      }
      else {
        if (0xfff < iVar12) {
          iVar12 = 0xfff;
        }
        param_2[lVar8 * 2 + 1] = (ushort)iVar12;
        iVar11 = (uint)puVar6[1] + iVar11;
      }
LAB_14559e1e7:
      if (-1 < iVar11) {
        if (0xfff < iVar11) {
          iVar11 = 0xfff;
        }
        goto LAB_14559e21d;
      }
      uVar1 = 0;
    }
    piVar7 = piVar7 + 2;
    param_2 = param_2 + 2;
    iVar13 = iVar13 + 2;
    puVar6[1] = uVar1;
    if (3 < iVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_a8);
    }
  } while( true );
}



// FUNCTION 145471ea0 FUN_145471ea0 body=23 status=ok
// SIG undefined FUN_145471ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471ea0(void)

{
  int in_R9D;
  
  if (1 < in_R9D) {
                    /* WARNING: Could not recover jumptable at 0x000145471eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbb18)();
    return;
  }
  FUN_145449e70();
  return;
}



// FUNCTION 145471ec0 FUN_145471ec0 body=41 status=ok
// SIG undefined FUN_145471ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471ec0(void)

{
  int in_R9D;
  
  if (in_R9D == 1) {
    FUN_14544ab40();
    return;
  }
  if (in_R9D < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000145471edb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbb20)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145471ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14c7fbb28)();
  return;
}



// FUNCTION 145471ef0 FUN_145471ef0 body=59 status=ok
// SIG undefined FUN_145471ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471ef0(void)

{
  int in_R9D;
  
  if (in_R9D == 1) {
    FUN_1454320f0();
    return;
  }
  if (in_R9D < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x000145471f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbae8)();
    return;
  }
  if (in_R9D < 0x27) {
                    /* WARNING: Could not recover jumptable at 0x000145471f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbaf8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145471f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14c7fbaf0)();
  return;
}



// FUNCTION 145471f30 FUN_145471f30 body=62 status=ok
// SIG undefined FUN_145471f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471f30(void)

{
  int in_R9D;
  
  if (in_R9D == 1) {
    FUN_14543daa0();
    return;
  }
  if (in_R9D < 0x23) {
                    /* WARNING: Could not recover jumptable at 0x000145471f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbb10)();
    return;
  }
  if (in_R9D < 0x88) {
                    /* WARNING: Could not recover jumptable at 0x000145471f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbb08)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145471f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14c7fbb00)();
  return;
}



// FUNCTION 145471f70 FUN_145471f70 body=72 status=ok
// SIG undefined FUN_145471f70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471f70(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5,
                  undefined4 param_6)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145471fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c7fe688)(param_2,param_3,param_4,param_1);
    return;
  }
  if (1 < param_5) {
                    /* WARNING: Could not recover jumptable at 0x000145471f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbb18)();
    return;
  }
  FUN_145449e70(param_2,param_3,param_4,param_6);
  return;
}



// FUNCTION 145471fc0 FUN_145471fc0 body=87 status=ok
// SIG undefined FUN_145471fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145471fc0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5,
                  undefined4 param_6)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145472010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fe690)(param_2,param_3,param_4,param_1);
    return;
  }
  if (param_5 == 1) {
    FUN_14544ab40();
    return;
  }
  if (param_5 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000145471ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbb20)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145471ffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14c7fbb28)(param_2,param_3,param_4,param_6);
  return;
}



// FUNCTION 145472020 FUN_145472020 body=100 status=ok
// SIG undefined FUN_145472020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145472020(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5,
                  undefined4 param_6)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014547207d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fe680)(param_2,param_3,param_4,param_1);
    return;
  }
  if (param_5 == 1) {
    FUN_1454320f0();
    return;
  }
  if (param_5 < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x000145472052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbae8)();
    return;
  }
  if (param_5 < 0x27) {
                    /* WARNING: Could not recover jumptable at 0x00014547205f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_14c7fbaf8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145472067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_14c7fbaf0)(param_2,param_3,param_4,param_6);
  return;
}



// FUNCTION 145472090 FUN_145472090 body=84 status=ok
// SIG undefined FUN_145472090(void)

ulonglong FUN_145472090(short *param_1,int param_2,int param_3,int *param_4)

{
  return ((longlong)param_1[1] * (longlong)*param_4 >> 0xe) +
         (ulonglong)
         ((uint)((longlong)((ulonglong)(uint)(param_2 << 4) * (longlong)*param_4) >> 0xe) & 0xf) <<
         0x20 | (ulonglong)
                ((int)((longlong)*param_1 * (longlong)param_4[1] >> 0xe) +
                ((uint)((longlong)((ulonglong)(uint)(param_3 << 4) * (longlong)param_4[1]) >> 0xe) &
                0xf));
}



// FUNCTION 1454720f0 FUN_1454720f0 body=738 status=ok
// SIG undefined FUN_1454720f0(void)

void FUN_1454720f0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if ((((param_4 * 2 < param_2) || (param_5 * 2 < param_3)) || (param_2 * 0x10 < param_4)) ||
     (param_3 * 0x10 < param_5)) {
    param_1[0] = -1;
    param_1[1] = -1;
    return;
  }
  param_4 = (param_2 << 0xe) / param_4;
  *param_1 = param_4;
  param_5 = (param_3 << 0xe) / param_5;
  param_1[1] = param_5;
  iVar5 = (int)(((longlong)param_4 << 4) >> 0xe);
  param_1[2] = iVar5;
  iVar3 = (int)(((longlong)param_5 << 4) >> 0xe);
  param_1[3] = iVar3;
  if (((param_4 == -1) || (param_5 == -1)) || ((param_4 == 0x4000 && (param_5 == 0x4000)))) {
    puVar1 = &LAB_145472410;
    puVar4 = &LAB_145472410;
  }
  else {
    puVar1 = &LAB_145472400;
    puVar4 = &LAB_1454723f0;
  }
  *(undefined1 **)(param_1 + 4) = puVar4;
  *(undefined1 **)(param_1 + 6) = puVar1;
  if (iVar5 == 0x10) {
    if (iVar3 == 0x10) {
      *(code **)(param_1 + 8) = FUN_14266a760;
      *(undefined1 **)(param_1 + 10) = &LAB_14266a8e0;
      *(undefined8 *)(param_1 + 0xc) = DAT_14c7fbe08;
      *(undefined8 *)(param_1 + 0xe) = DAT_14c7fbdf8;
      *(undefined8 *)(param_1 + 0x10) = DAT_14c7fbe00;
      *(undefined8 *)(param_1 + 0x12) = DAT_14c7fbdf0;
    }
    else {
      *(code **)(param_1 + 8) = FUN_145465840;
      *(code **)(param_1 + 10) = FUN_145465670;
      *(code **)(param_1 + 0xc) = FUN_145465840;
      *(code **)(param_1 + 0xe) = FUN_145465670;
LAB_14547227e:
      *(undefined8 *)(param_1 + 0x10) = DAT_14c7fbcc0;
      *(undefined1 **)(param_1 + 0x12) = &LAB_145465640;
    }
  }
  else {
    if (iVar3 != 0x10) {
      *(undefined8 *)(param_1 + 8) = DAT_14c7fbcc0;
      *(undefined1 **)(param_1 + 10) = &LAB_145465640;
      *(undefined8 *)(param_1 + 0xc) = DAT_14c7fbcc0;
      *(undefined1 **)(param_1 + 0xe) = &LAB_145465640;
      goto LAB_14547227e;
    }
    *(undefined1 **)(param_1 + 8) = &LAB_145465820;
    *(undefined1 **)(param_1 + 10) = &LAB_145465650;
    *(undefined8 *)(param_1 + 0xc) = DAT_14c7fbcc0;
    *(undefined1 **)(param_1 + 0xe) = &LAB_145465640;
    *(undefined1 **)(param_1 + 0x10) = &LAB_145465820;
    *(undefined1 **)(param_1 + 0x12) = &LAB_145465650;
  }
  if ((iVar5 == 0x10) && (param_1[3] == 0x10)) {
    *(undefined8 *)(param_1 + 0x14) = DAT_14c7fbde0;
    *(undefined8 *)(param_1 + 0x16) = DAT_14c7fbde8;
  }
  else {
    *(undefined8 *)(param_1 + 0x14) = DAT_14c7fbcc0;
    *(undefined1 **)(param_1 + 0x16) = &LAB_145465640;
  }
  if (param_6 == 0) {
    return;
  }
  if (iVar5 == 0x10) {
    if (param_1[3] != 0x10) {
      *(undefined8 *)(param_1 + 0x18) = DAT_14c7fba20;
      *(undefined8 *)(param_1 + 0x1a) = DAT_14c7fba10;
      *(undefined8 *)(param_1 + 0x1c) = DAT_14c7fba20;
      uVar2 = DAT_14c7fba10;
LAB_1454723a8:
      *(undefined8 *)(param_1 + 0x1e) = uVar2;
      *(undefined8 *)(param_1 + 0x20) = DAT_14c7fb9f8;
      uVar2 = DAT_14c7fba00;
      goto LAB_1454723c1;
    }
    *(undefined8 *)(param_1 + 0x18) = DAT_14c7fba30;
    *(undefined8 *)(param_1 + 0x1a) = DAT_14c7fba28;
    *(undefined8 *)(param_1 + 0x1c) = DAT_14c7fba20;
    uVar2 = DAT_14c7fba10;
  }
  else {
    if (param_1[3] != 0x10) {
      *(undefined8 *)(param_1 + 0x18) = DAT_14c7fb9f8;
      *(undefined8 *)(param_1 + 0x1a) = DAT_14c7fba00;
      *(undefined8 *)(param_1 + 0x1c) = DAT_14c7fb9f8;
      uVar2 = DAT_14c7fba00;
      goto LAB_1454723a8;
    }
    *(undefined8 *)(param_1 + 0x18) = DAT_14c7fba18;
    *(undefined8 *)(param_1 + 0x1a) = DAT_14c7fba08;
    *(undefined8 *)(param_1 + 0x1c) = DAT_14c7fb9f8;
    uVar2 = DAT_14c7fba00;
  }
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = DAT_14c7fba18;
  uVar2 = DAT_14c7fba08;
LAB_1454723c1:
  *(undefined8 *)(param_1 + 0x22) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = DAT_14c7fb9f8;
  *(undefined8 *)(param_1 + 0x26) = DAT_14c7fba00;
  return;
}



// FUNCTION 145472420 FUN_145472420 body=35 status=ok
// SIG undefined FUN_145472420(void)

void FUN_145472420(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 145472450 FUN_145472450 body=21 status=ok
// SIG undefined FUN_145472450(void)

void FUN_145472450(longlong param_1,int param_2,byte param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + (longlong)param_2 * 4 + 0x50);
  *puVar1 = *puVar1 | 1 << (param_3 & 0x1f);
  return;
}



// FUNCTION 145472470 FUN_145472470 body=14 status=ok
// SIG undefined FUN_145472470(void)

undefined4 FUN_145472470(int param_1)

{
  return *(undefined4 *)(&DAT_149d52de0 + (longlong)param_1 * 4);
}



// FUNCTION 145472480 FUN_145472480 body=14 status=ok
// SIG undefined FUN_145472480(void)

undefined4 FUN_145472480(int param_1)

{
  return *(undefined4 *)(&DAT_149d52dd0 + (longlong)param_1 * 4);
}



// FUNCTION 145472490 FUN_145472490 body=17 status=ok
// SIG undefined FUN_145472490(void)

void FUN_145472490(longlong param_1,int param_2,int param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 0x10 + ((longlong)param_3 + (longlong)param_2 * 4) * 2) = param_4;
  return;
}



// FUNCTION 1454724b0 FUN_1454724b0 body=190 status=ok
// SIG undefined FUN_1454724b0(void)

void FUN_1454724b0(int *param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x428);
  iVar1 = ((iVar2 + 7 >> 3) * param_3 >> ((byte)*(undefined4 *)(param_2 + 0x4604) & 0x1f)) << 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  *param_1 = iVar2;
  iVar2 = *(int *)(param_2 + 0x428);
  iVar1 = ((iVar2 + 7 >> 3) * (param_3 + 1) >> ((byte)*(undefined4 *)(param_2 + 0x4604) & 0x1f)) <<
          3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  param_1[1] = iVar2;
  iVar2 = *(int *)(param_2 + 0x430);
  iVar1 = ((iVar2 + 7 >> 3) * param_4 >> ((byte)*(undefined4 *)(param_2 + 0x4600) & 0x1f)) << 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  param_1[2] = iVar2;
  iVar2 = *(int *)(param_2 + 0x430);
  iVar1 = ((iVar2 + 7 >> 3) * (param_4 + 1) >> ((byte)*(undefined4 *)(param_2 + 0x4600) & 0x1f)) <<
          3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  param_1[3] = iVar2;
  return;
}



// FUNCTION 145472570 FUN_145472570 body=103 status=ok
// SIG undefined FUN_145472570(void)

void FUN_145472570(int *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x428);
  iVar1 = ((iVar2 + 7 >> 3) * param_3 >> ((byte)*(undefined4 *)(param_2 + 0x4604) & 0x1f)) << 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  *param_1 = iVar2;
  iVar2 = *(int *)(param_2 + 0x428);
  iVar1 = ((iVar2 + 7 >> 3) * (param_3 + 1) >> ((byte)*(undefined4 *)(param_2 + 0x4604) & 0x1f)) <<
          3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  param_1[1] = iVar2;
  return;
}



// FUNCTION 1454725e0 FUN_1454725e0 body=104 status=ok
// SIG undefined FUN_1454725e0(void)

void FUN_1454725e0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x430);
  iVar1 = ((iVar2 + 7 >> 3) * param_3 >> ((byte)*(undefined4 *)(param_2 + 0x4600) & 0x1f)) << 3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 8) = iVar2;
  iVar2 = *(int *)(param_2 + 0x430);
  iVar1 = ((iVar2 + 7 >> 3) * (param_3 + 1) >> ((byte)*(undefined4 *)(param_2 + 0x4600) & 0x1f)) <<
          3;
  if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145472650 FUN_145472650 body=66 status=ok
// SIG undefined FUN_145472650(void)

void FUN_145472650(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = param_1 + 7 >> 3;
  if (0x40 < (int)uVar2) {
    do {
      iVar1 = iVar1 + 1;
    } while (0x40 << ((byte)iVar1 & 0x1f) < (int)uVar2);
  }
  *param_2 = iVar1;
  iVar1 = 1;
  if (7 < (int)(uVar2 & 0xfffffffe)) {
    do {
      iVar1 = iVar1 + 1;
    } while (3 < (int)uVar2 >> ((byte)iVar1 & 0x1f));
  }
  *param_3 = iVar1 + -1;
  return;
}



// FUNCTION 1454726a0 FUN_1454726a0 body=59 status=ok
// SIG undefined FUN_1454726a0(void)

ulonglong FUN_1454726a0(longlong param_1,byte *param_2,uint param_3)

{
  ulonglong in_RAX;
  
  if ((param_3 & 0xfffffffd) != 0) {
    return (ulonglong)*(byte *)(param_1 + 8 + (longlong)(int)param_3 * 0xc);
  }
  if ((param_2 != (byte *)0x0) && ((char)param_2[8] < '\x01')) {
    if (*param_2 < 3) {
      return (ulonglong)param_2[(longlong)(int)param_3 * 0xc + 0x20];
    }
    return (ulonglong)param_2[1];
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1454726e0 FUN_1454726e0 body=56 status=ok
// SIG undefined FUN_1454726e0(void)

ulonglong FUN_1454726e0(longlong param_1,byte *param_2,uint param_3)

{
  ulonglong in_RAX;
  
  if (1 < param_3) {
    return (ulonglong)*(byte *)(param_1 + -4 + (longlong)(int)param_3 * 0xc);
  }
  if ((param_2 != (byte *)0x0) && ((char)param_2[8] < '\x01')) {
    if (*param_2 < 3) {
      return (ulonglong)param_2[(longlong)(int)param_3 * 0xc + 0x2c];
    }
    return (ulonglong)param_2[1];
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145472720 FUN_145472720 body=33 status=ok
// SIG undefined FUN_145472720(void)

void FUN_145472720(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x90) = param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x94) = param_3;
  *(undefined4 *)(param_1 + 0x118) = param_2;
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  return;
}



// FUNCTION 145472750 FUN_145472750 body=418 status=ok
// SIG undefined FUN_145472750(void)

void FUN_145472750(longlong param_1,byte param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  
  pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x1c0);
  lVar10 = (longlong)param_3 * 0x88 + param_1;
  if (param_3 == 0) {
    bVar13 = pbVar4[2];
  }
  else {
    bVar13 = (&DAT_149d54b80)
             [(longlong)*(int *)(lVar10 + 0xc) +
              ((longlong)*(int *)(lVar10 + 8) + ((ulonglong)pbVar4[2] + (ulonglong)*pbVar4 * 4) * 2)
              * 2];
  }
  iVar9 = 0;
  bVar1 = (&DAT_149d54b48)
          [((longlong)*(int *)(lVar10 + 8) + (ulonglong)param_2 * 2) * 2 +
           (longlong)*(int *)(lVar10 + 0xc)];
  bVar2 = (&DAT_149d549b0)[bVar1];
  bVar3 = (&DAT_149d549c0)[bVar1];
  iVar5 = 1 << (bVar13 * '\x02' & 0x1f);
  if (*(int *)(param_1 + 0x1ec) < 0) {
    iVar11 = *(int *)(param_1 + 0x1ec) >> ((char)*(int *)(lVar10 + 8) + 5U & 0x1f);
  }
  else {
    iVar11 = 0;
  }
  iVar11 = iVar11 + (uint)bVar3;
  if (*(int *)(param_1 + 500) < 0) {
    iVar12 = *(int *)(param_1 + 500) >> ((char)*(int *)(lVar10 + 0xc) + 5U & 0x1f);
  }
  else {
    iVar12 = 0;
  }
  iVar8 = 0;
  if (0 < (int)(iVar12 + (uint)bVar2)) {
    iVar7 = 1 << (bVar13 & 0x1f);
    do {
      iVar6 = 0;
      if (0 < iVar11) {
        do {
          (*param_4)(param_3,iVar9,iVar8,iVar6,bVar1,bVar13,param_5);
          iVar9 = iVar9 + iVar5;
          iVar6 = iVar6 + iVar7;
        } while (iVar6 < iVar11);
      }
      iVar9 = iVar9 + ((int)((uint)bVar3 - iVar11) >> (bVar13 & 0x1f)) * iVar5;
      iVar8 = iVar8 + iVar7;
    } while (iVar8 < (int)(iVar12 + (uint)bVar2));
  }
  return;
}



// FUNCTION 145472900 FUN_145472900 body=1233 status=ok
// SIG undefined FUN_145472900(void)

void FUN_145472900(longlong param_1,byte param_2,code *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int local_54;
  
  lVar5 = (ulonglong)param_2 * 2;
  local_54 = 0;
  piVar7 = (int *)(param_1 + 0x94);
  do {
    pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x1c0);
    if (local_54 == 0) {
      bVar12 = pbVar4[2];
    }
    else {
      bVar12 = (&DAT_149d54b80)
               [(longlong)piVar7[-0x22] +
                ((longlong)piVar7[-0x23] + ((ulonglong)pbVar4[2] + (ulonglong)*pbVar4 * 4) * 2) * 2]
      ;
    }
    iVar10 = piVar7[-0x23];
    iVar11 = piVar7[-0x22];
    bVar1 = (&DAT_149d54b48)[(longlong)iVar11 + (lVar5 + iVar10) * 2];
    iVar6 = 1 << (bVar12 * '\x02' & 0x1f);
    bVar2 = (&DAT_149d549c0)[bVar1];
    bVar3 = (&DAT_149d549b0)[bVar1];
    iVar9 = 0;
    if (*(int *)(param_1 + 0x1ec) < 0) {
      iVar10 = *(int *)(param_1 + 0x1ec) >> ((char)iVar10 + 5U & 0x1f);
    }
    else {
      iVar10 = 0;
    }
    iVar10 = iVar10 + (uint)bVar2;
    if (*(int *)(param_1 + 500) < 0) {
      iVar11 = *(int *)(param_1 + 500) >> ((char)iVar11 + 5U & 0x1f);
    }
    else {
      iVar11 = 0;
    }
    iVar13 = 0;
    if (0 < (int)(iVar11 + (uint)bVar3)) {
      iVar14 = 1 << (bVar12 & 0x1f);
      do {
        iVar8 = 0;
        if (0 < iVar10) {
          do {
            (*param_3)(local_54,iVar9,iVar13,iVar8,bVar1,bVar12,param_4);
            iVar9 = iVar9 + iVar6;
            iVar8 = iVar8 + iVar14;
          } while (iVar8 < iVar10);
        }
        iVar9 = iVar9 + ((int)((uint)bVar2 - iVar10) >> (bVar12 & 0x1f)) * iVar6;
        iVar13 = iVar13 + iVar14;
      } while (iVar13 < (int)(iVar11 + (uint)bVar3));
    }
    pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x1c0);
    if (local_54 + 1 == 0) {
      bVar12 = pbVar4[2];
    }
    else {
      bVar12 = (&DAT_149d54b80)
               [(longlong)*piVar7 +
                ((longlong)piVar7[-1] + ((ulonglong)pbVar4[2] + (ulonglong)*pbVar4 * 4) * 2) * 2];
    }
    iVar11 = 0;
    bVar1 = (&DAT_149d54b48)[(longlong)*piVar7 + (piVar7[-1] + lVar5) * 2];
    bVar2 = (&DAT_149d549c0)[bVar1];
    bVar3 = (&DAT_149d549b0)[bVar1];
    iVar10 = 1 << (bVar12 * '\x02' & 0x1f);
    if (*(int *)(param_1 + 0x1ec) < 0) {
      iVar6 = *(int *)(param_1 + 0x1ec) >> ((char)piVar7[-1] + 5U & 0x1f);
    }
    else {
      iVar6 = 0;
    }
    iVar6 = iVar6 + (uint)bVar2;
    iVar9 = *(int *)(param_1 + 500);
    if (iVar9 < 0) {
      iVar13 = iVar9 >> ((char)*piVar7 + 5U & 0x1f);
    }
    else {
      iVar13 = 0;
    }
    iVar14 = 0;
    if (0 < (int)(iVar13 + (uint)bVar3)) {
      iVar9 = 1 << (bVar12 & 0x1f);
      do {
        iVar8 = 0;
        if (0 < iVar6) {
          do {
            (*param_3)(local_54 + 1,iVar11,iVar14,iVar8,bVar1,bVar12,param_4);
            iVar11 = iVar11 + iVar10;
            iVar8 = iVar8 + iVar9;
          } while (iVar8 < iVar6);
        }
        iVar11 = iVar11 + ((int)((uint)bVar2 - iVar6) >> (bVar12 & 0x1f)) * iVar10;
        iVar14 = iVar14 + iVar9;
      } while (iVar14 < (int)(iVar13 + (uint)bVar3));
      iVar9 = *(int *)(param_1 + 500);
    }
    pbVar4 = (byte *)**(undefined8 **)(param_1 + 0x1c0);
    if (local_54 + 2 == 0) {
      bVar12 = pbVar4[2];
    }
    else {
      bVar12 = (&DAT_149d54b80)
               [(longlong)piVar7[0x22] +
                ((longlong)piVar7[0x21] + ((ulonglong)pbVar4[2] + (ulonglong)*pbVar4 * 4) * 2) * 2];
    }
    iVar11 = 0;
    bVar1 = (&DAT_149d54b48)[(longlong)piVar7[0x22] + (piVar7[0x21] + lVar5) * 2];
    bVar2 = (&DAT_149d549b0)[bVar1];
    bVar3 = (&DAT_149d549c0)[bVar1];
    iVar10 = 1 << (bVar12 * '\x02' & 0x1f);
    if (*(int *)(param_1 + 0x1ec) < 0) {
      iVar6 = *(int *)(param_1 + 0x1ec) >> ((char)piVar7[0x21] + 5U & 0x1f);
    }
    else {
      iVar6 = 0;
    }
    iVar6 = iVar6 + (uint)bVar3;
    if (iVar9 < 0) {
      iVar9 = iVar9 >> ((char)piVar7[0x22] + 5U & 0x1f);
    }
    else {
      iVar9 = 0;
    }
    iVar13 = 0;
    if (0 < (int)(iVar9 + (uint)bVar2)) {
      iVar14 = 1 << (bVar12 & 0x1f);
      do {
        iVar8 = 0;
        if (0 < iVar6) {
          do {
            (*param_3)(local_54 + 2,iVar11,iVar13,iVar8,bVar1,bVar12,param_4);
            iVar11 = iVar11 + iVar10;
            iVar8 = iVar8 + iVar14;
          } while (iVar8 < iVar6);
        }
        iVar11 = iVar11 + ((int)((uint)bVar3 - iVar6) >> (bVar12 & 0x1f)) * iVar10;
        iVar13 = iVar13 + iVar14;
      } while (iVar13 < (int)(iVar9 + (uint)bVar2));
    }
    local_54 = local_54 + 3;
    piVar7 = piVar7 + 0x66;
  } while (local_54 < 3);
  return;
}



// FUNCTION 145472de0 FUN_145472de0 body=346 status=ok
// SIG undefined FUN_145472de0(void)

void FUN_145472de0(longlong param_1,longlong param_2,byte param_3,byte param_4,uint param_5,
                  int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  void *_Dst_00;
  
  _Dst = (void *)(*(longlong *)(param_2 + 0x48) + (longlong)param_7);
  _Dst_00 = (void *)(*(longlong *)(param_2 + 0x40) + (longlong)param_6);
  iVar2 = 1 << (param_4 & 0x1f);
  if ((param_5 == 0) || (-1 < *(int *)(param_1 + 0x1ec))) {
    memset(_Dst_00,param_5,(longlong)iVar2);
    if (param_5 == 0) goto LAB_145472f10;
  }
  else {
    iVar1 = (uint)(byte)(&DAT_149d549c0)[param_3] +
            (*(int *)(param_1 + 0x1ec) >> ((char)*(undefined4 *)(param_2 + 8) + 5U & 0x1f));
    iVar3 = iVar1 - param_6;
    if (iVar2 + param_6 <= iVar1) {
      iVar3 = iVar2;
    }
    if (0 < iVar3) {
      memset(_Dst_00,param_5 & 0xff,(longlong)iVar3);
    }
    if (iVar3 < iVar2) {
      memset((void *)((longlong)iVar3 + (longlong)_Dst_00),0,(longlong)(iVar2 - iVar3));
    }
  }
  if (*(int *)(param_1 + 500) < 0) {
    iVar1 = (uint)(byte)(&DAT_149d549b0)[param_3] +
            (*(int *)(param_1 + 500) >> ((char)*(undefined4 *)(param_2 + 0xc) + 5U & 0x1f));
    iVar3 = iVar1 - param_7;
    if (iVar2 + param_7 <= iVar1) {
      iVar3 = iVar2;
    }
    if (0 < iVar3) {
      memset(_Dst,param_5 & 0xff,(longlong)iVar3);
    }
    if (iVar2 <= iVar3) {
      return;
    }
    memset((void *)((longlong)iVar3 + (longlong)_Dst),0,(longlong)(iVar2 - iVar3));
    return;
  }
LAB_145472f10:
  memset(_Dst,param_5,(longlong)iVar2);
  return;
}



// FUNCTION 145472f40 FUN_145472f40 body=1227 status=ok
// SIG undefined FUN_145472f40(void)

void FUN_145472f40(longlong param_1,int param_2,int param_3,undefined8 *param_4,uint param_5,
                  void *param_6)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0 [4];
  int local_90 [4];
  int local_80 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar17 = (longlong)(int)param_5;
  lVar1 = param_1 + 0x520;
  local_c4 = param_5;
  local_90[1] = param_5 * 4 + -4;
  local_90[0] = 4;
  local_90[2] = 4;
  local_90[3] = param_5 * -4 + -4;
  local_a0[0] = 2;
  local_a0[1] = param_5 * 2 + -2;
  local_a0[2] = 2;
  local_a0[3] = param_5 * -2 + -2;
  local_b8 = ~param_5;
  iVar6 = 8;
  if (*(int *)(param_1 + 0x428) < param_2 + 8) {
    iVar6 = *(int *)(param_1 + 0x428) - param_2;
  }
  local_80[4] = 0;
  local_80[5] = 4;
  local_80[6] = 0x20;
  local_80[7] = 0x24;
  iVar15 = 8;
  if (*(int *)(param_1 + 0x430) < param_3 + 8) {
    iVar15 = *(int *)(param_1 + 0x430) - param_3;
  }
  local_80[0] = 0;
  local_80[1] = 2;
  local_80[2] = 0x10;
  local_80[3] = 0x12;
  local_80[8] = 0;
  local_80[9] = 2;
  local_80[10] = 8;
  local_80[0xb] = 10;
  local_80[0xc] = 0;
  local_80[0xd] = 1;
  local_80[0xe] = 4;
  local_80[0xf] = 5;
  local_d8 = iVar15;
  local_d4 = iVar6;
  memset(param_6,0,0xa0);
  pcVar5 = (char *)*param_4;
  cVar3 = *pcVar5;
  if (cVar3 == '\n') {
    local_e8 = param_6;
    FUN_1454758f0(lVar1,pcVar5,0,0);
    if (iVar15 < 5) goto LAB_1454733fb;
    pcVar5 = (char *)param_4[4];
    uVar11 = 2;
    uVar4 = 4;
  }
  else if (cVar3 == '\v') {
    local_e8 = param_6;
    FUN_1454758f0(lVar1,pcVar5,0,0);
    if (iVar6 < 5) goto LAB_1454733fb;
    uVar11 = 8;
    pcVar5 = (char *)param_4[(int)(param_5 * 4)];
    uVar4 = 0x20;
  }
  else {
    if (cVar3 != '\f') {
      local_bc = 0;
      local_a8 = 0;
      local_b0 = lVar17;
      do {
        iVar6 = *(int *)((longlong)local_80 + local_a8 + 0x10);
        iVar10 = *(int *)((longlong)local_80 + local_a8 + 0x20);
        iVar8 = (local_bc & 1) * 4;
        local_cc = (local_bc & 0xfffffffe) * 2;
        local_d0 = iVar8;
        local_c0 = iVar10;
        if ((iVar8 < iVar15) && (local_cc < local_d4)) {
          pcVar5 = (char *)*param_4;
          cVar3 = *pcVar5;
          if (cVar3 == '\a') {
            local_e8 = param_6;
            FUN_1454758f0(lVar1,pcVar5,iVar6,iVar10);
            iVar15 = local_d8;
            if (iVar8 + 2 < local_d8) {
              pcVar5 = (char *)param_4[2];
              iVar10 = iVar10 + 1;
              iVar6 = iVar6 + 2;
              goto LAB_14547334b;
            }
          }
          else if (cVar3 == '\b') {
            local_e8 = param_6;
            FUN_1454758f0(lVar1,pcVar5,iVar6,iVar10);
            iVar15 = local_d8;
            if (local_cc + 2 < local_d4) {
              iVar6 = iVar6 + 0x10;
              iVar10 = iVar10 + 4;
              pcVar5 = (char *)param_4[lVar17 * 2];
              goto LAB_14547334b;
            }
          }
          else if (cVar3 == '\t') {
LAB_14547334b:
            local_e8 = param_6;
            FUN_1454758f0(lVar1,pcVar5,iVar6,iVar10);
            iVar15 = local_d8;
          }
          else {
            uVar13 = 0;
            lVar14 = 0;
            iVar10 = local_d4;
            iVar12 = local_cc;
            do {
              iVar9 = *(int *)((longlong)local_80 + lVar14 + 0x30) + local_c0;
              iVar16 = *(int *)((longlong)local_80 + lVar14) + iVar6;
              iVar7 = (uVar13 & 0xfffffffe) + iVar12;
              local_c8 = iVar8 + (uVar13 & 1) * 2;
              if ((local_c8 < iVar15) && (iVar7 < iVar10)) {
                pcVar5 = (char *)*param_4;
                local_e8 = param_6;
                cVar3 = *pcVar5;
                if (cVar3 == '\x04') {
                  FUN_1454758f0(lVar1,pcVar5,iVar16,iVar9);
                  iVar10 = local_d4;
                  iVar15 = local_d8;
                  iVar12 = local_cc;
                  iVar8 = local_d0;
                  if (local_c8 + 1 < local_d8) {
                    uVar4 = param_4[1];
                    iVar16 = iVar16 + 1;
LAB_145473293:
                    FUN_145475b10(lVar1,uVar4,iVar16,param_6);
                    iVar10 = local_d4;
                    iVar15 = local_d8;
                    iVar12 = local_cc;
                    iVar8 = local_d0;
                  }
                }
                else if (cVar3 == '\x05') {
                  FUN_1454758f0(lVar1,pcVar5,iVar16,iVar9);
                  iVar10 = local_d4;
                  iVar15 = local_d8;
                  iVar12 = local_cc;
                  iVar8 = local_d0;
                  if (iVar7 + 1 < local_d4) {
                    iVar16 = iVar16 + 8;
                    uVar4 = param_4[local_b0];
                    goto LAB_145473293;
                  }
                }
                else if (cVar3 == '\x06') {
                  FUN_1454758f0(lVar1,pcVar5,iVar16,iVar9);
                  iVar10 = local_d4;
                  iVar15 = local_d8;
                  iVar12 = local_cc;
                  iVar8 = local_d0;
                }
                else {
                  FUN_1454758f0(lVar1,pcVar5,iVar16,iVar9);
                  param_4 = param_4 + 1;
                  iVar15 = *(int *)((longlong)local_80 + lVar14);
                  local_c8 = local_c8 + 1;
                  if (local_c8 < local_d8) {
                    FUN_145475b10(lVar1,*param_4,iVar15 + 1 + iVar6,param_6);
                  }
                  param_4 = param_4 + (int)(local_c4 - 1);
                  if (iVar7 + 1 < local_d4) {
                    FUN_145475b10(lVar1,*param_4,iVar15 + 8 + iVar6,param_6);
                  }
                  if ((local_c8 < local_d8) && (iVar7 + 1 < local_d4)) {
                    FUN_145475b10(lVar1,param_4[1],iVar15 + 9 + iVar6,param_6);
                  }
                  param_4 = param_4 + 1 + (int)local_b8;
                  iVar10 = local_d4;
                  iVar15 = local_d8;
                  iVar12 = local_cc;
                  iVar8 = local_d0;
                }
              }
              piVar2 = (int *)((longlong)local_a0 + lVar14);
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 4;
              param_4 = param_4 + *piVar2;
              lVar17 = local_b0;
            } while ((int)uVar13 < 4);
          }
        }
        local_bc = local_bc + 1;
        piVar2 = (int *)((longlong)local_90 + local_a8);
        local_a8 = local_a8 + 4;
        param_4 = param_4 + *piVar2;
      } while ((int)local_bc < 4);
      goto LAB_1454733fb;
    }
    uVar11 = 0;
    uVar4 = 0;
  }
  local_e8 = param_6;
  FUN_1454758f0(lVar1,pcVar5,uVar4,uVar11);
LAB_1454733fb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
}



// FUNCTION 145473420 FUN_145473420 body=560 status=ok
// SIG undefined FUN_145473420(void)

void FUN_145473420(longlong param_1,longlong param_2,int param_3,ulonglong *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res10;
  
  uVar3 = param_4[2];
  local_res10 = *(longlong *)(param_2 + 0x10);
  uVar9 = param_4[1];
  uVar10 = *param_4;
  uVar8 = param_4[8];
  iVar4 = 0;
  lVar2 = local_res10;
  do {
    if (*(int *)(param_1 + 0x428) <= iVar4 + param_3) break;
    lVar5 = (longlong)(iVar4 * 8) + 0x5a + (longlong)param_4;
    if (*(int *)(param_1 + 0x188) == 0) {
      FUN_145474c70(*(undefined4 *)(param_2 + 8),lVar2,*(undefined4 *)(param_2 + 0x18),
                    uVar3 & 0xffffffff,(int)uVar9,(int)uVar10,uVar8 & 0xffffffff,param_1 + 0x520,
                    lVar5);
    }
    else {
      FUN_145474f80(*(undefined4 *)(param_2 + 8),lVar2 * 2,*(undefined4 *)(param_2 + 0x18),
                    uVar3 & 0xffffffff,(int)uVar9,(int)uVar10,uVar8 & 0xffffffff,param_1 + 0x520,
                    lVar5,*(undefined4 *)(param_1 + 0x45f0));
    }
    iVar4 = iVar4 + 2;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 4);
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar3 = uVar3 >> 0x10;
    uVar9 = uVar9 >> 0x10;
    uVar10 = uVar10 >> 0x10;
    uVar8 = uVar8 >> 0x10;
  } while (iVar4 < 8);
  iVar4 = 0;
  *(longlong *)(param_2 + 0x10) = local_res10;
  uVar3 = param_4[6];
  uVar9 = param_4[5];
  uVar10 = param_4[4];
  uVar8 = param_4[8];
  do {
    if (*(int *)(param_1 + 0x428) <= iVar4 + param_3) {
      return;
    }
    if (iVar4 + param_3 == 0) {
      uVar6 = 0;
      uVar7 = 0;
      uVar1 = 0;
    }
    else {
      uVar6 = uVar3 & 0xff;
      uVar7 = uVar9 & 0xff;
      uVar1 = (uint)uVar10 & 0xff;
    }
    if (*(int *)(param_1 + 0x188) == 0) {
      FUN_1454752c0(local_res10,*(undefined4 *)(param_2 + 0x18),uVar6,uVar7,uVar1,(uint)uVar8 & 0xff
                    ,param_1 + 0x520,(longlong)(iVar4 * 8) + 0x5a + (longlong)param_4);
    }
    else {
      FUN_1454755c0(local_res10 * 2);
    }
    iVar4 = iVar4 + 1;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 3);
    local_res10 = *(longlong *)(param_2 + 0x10);
    uVar3 = uVar3 >> 8;
    uVar9 = uVar9 >> 8;
    uVar10 = uVar10 >> 8;
    uVar8 = uVar8 >> 8;
  } while (iVar4 < 8);
  return;
}



// FUNCTION 145473650 FUN_145473650 body=726 status=ok
// SIG undefined FUN_145473650(void)

void FUN_145473650(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  undefined1 *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 auStack_b8 [32];
  uint local_98;
  uint local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  ushort local_68;
  ushort local_66;
  int local_64;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x10);
  puVar11 = (undefined1 *)((longlong)&local_50 + 6);
  uVar8 = *(ushort *)(param_4 + 0x4c);
  local_68 = *(ushort *)(param_4 + 0x4a);
  local_66 = *(ushort *)(param_4 + 0x48);
  uVar7 = *(ushort *)(param_4 + 0x58);
  puVar4 = (undefined1 *)(param_4 + 0x6c);
  local_64 = CONCAT22(local_64._2_2_,uVar7);
  iVar10 = 0;
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = lVar1;
  local_60 = lVar1;
  local_58 = param_4;
  do {
    if (*(int *)(param_1 + 0x428) <= iVar10 + param_3) break;
    puVar11[-6] = puVar4[-0x12];
    puVar11[-2] = puVar4[-2];
    puVar11[-5] = puVar4[-0x10];
    puVar11[-1] = *puVar4;
    puVar11[-4] = puVar4[-0xe];
    *puVar11 = puVar4[2];
    puVar11[-3] = puVar4[-0xc];
    puVar11[1] = puVar4[4];
    local_78 = (longlong)&local_50 + (longlong)(iVar10 * 2);
    local_80 = param_1 + 0x520;
    local_98 = (uint)local_68;
    local_90 = (uint)local_66;
    if (*(int *)(param_1 + 0x188) == 0) {
      local_88 = CONCAT44(local_88._4_4_,(uint)uVar7);
      FUN_145474c70(*(undefined4 *)(param_2 + 8),lVar2,*(undefined4 *)(param_2 + 0x18),uVar8);
    }
    else {
      local_70 = *(undefined4 *)(param_1 + 0x45f0);
      local_88 = CONCAT44(local_88._4_4_,(uint)uVar7);
      FUN_145474f80(*(undefined4 *)(param_2 + 8),lVar2 * 2,*(undefined4 *)(param_2 + 0x18),uVar8);
    }
    iVar10 = iVar10 + 4;
    puVar4 = puVar4 + 0x20;
    puVar11 = puVar11 + 8;
    local_68 = local_68 >> 8;
    local_66 = local_66 >> 8;
    uVar7 = (ushort)local_64 >> 8;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 4);
    lVar2 = *(longlong *)(param_2 + 0x10);
    uVar8 = uVar8 >> 8;
    local_64 = CONCAT22(local_64._2_2_,uVar7);
  } while (iVar10 < 8);
  *(longlong *)(param_2 + 0x10) = lVar1;
  local_64 = -param_3;
  uVar8 = *(ushort *)(local_58 + 0x54);
  uVar7 = *(ushort *)(local_58 + 0x52);
  uVar9 = *(ushort *)(local_58 + 0x50);
  uVar3 = *(ushort *)(local_58 + 0x58);
  do {
    if (*(int *)(param_1 + 0x428) <= param_3) break;
    if (param_3 == *(int *)(param_1 + 0x428) + -1) {
      local_90 = 0;
    }
    else {
      local_90 = uVar3 & 0xf;
    }
    if (param_3 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      local_98 = 0;
    }
    else {
      uVar5 = uVar8 & 0xf;
      uVar6 = uVar7 & 0xf;
      local_98 = uVar9 & 0xf;
    }
    local_88 = param_1 + 0x520;
    local_80 = (longlong)&local_50 + (longlong)((local_64 + param_3) * 2);
    if (*(int *)(param_1 + 0x188) == 0) {
      FUN_1454752c0(local_60,*(undefined4 *)(param_2 + 0x18),uVar5,uVar6);
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x45f0));
      FUN_1454755c0(local_60 * 2);
    }
    param_3 = param_3 + 2;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 3);
    local_60 = *(longlong *)(param_2 + 0x10);
    uVar8 = uVar8 >> 4;
    uVar7 = uVar7 >> 4;
    uVar9 = uVar9 >> 4;
    uVar3 = uVar3 >> 4;
  } while (local_64 + param_3 < 8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 145473950 FUN_145473950 body=1946 status=ok
// SIG undefined FUN_145473950(void)

void FUN_145473950(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  byte bVar8;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  int local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_188;
  uint local_178;
  uint local_174;
  int local_170;
  int local_16c;
  longlong local_168;
  int local_160;
  byte *local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  longlong local_130;
  undefined8 *local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  byte bVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_150 = *(int *)(param_2 + 8);
  local_16c = *(int *)(param_2 + 0xc);
  local_178 = 0;
  local_160 = 0;
  local_138 = 1 << ((byte)local_16c & 0x1f);
  local_140 = 1 << ((byte)local_150 & 0x1f);
  local_13c = local_138 * *(int *)(param_1 + 0x434);
  local_120 = (longlong)local_140;
  local_e8 = 0;
  uStack_e0 = 0;
  local_110 = *(undefined8 *)(param_2 + 0x10);
  local_d8 = 0;
  uStack_d0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (longlong)local_138 * 4;
  local_130 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_168 = param_1;
  local_14c = param_4;
  local_148 = param_2;
  do {
    local_128 = param_3;
    if (*(int *)(local_168 + 0x428) <= (int)(local_178 + local_14c)) break;
    local_170 = *(int *)(local_168 + 0x430);
    local_174 = 0;
    uVar20 = 0;
    uVar18 = 0;
    uVar21 = 0;
    do {
      if (local_170 <= (int)(param_5 + uVar21)) break;
      pbVar3 = (byte *)*param_3;
      if ((pbVar3[3] == 0) || ((char)pbVar3[8] < '\x01')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      uVar10 = (ulonglong)*pbVar3;
      if ((byte)(&DAT_149d549c0)[uVar10] < 2) {
        bVar23 = true;
      }
      else {
        bVar23 = (uVar21 & (byte)(&DAT_149d54990)[uVar10] - 1) == 0;
      }
      if ((!bVar4) || (bVar23)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if ((byte)(&DAT_149d549b0)[uVar10] < 2) {
        bVar24 = true;
      }
      else {
        bVar24 = (local_178 & (byte)(&DAT_149d549a0)[uVar10] - 1) == 0;
      }
      if ((!bVar4) || (bVar24)) {
        bVar24 = false;
      }
      else {
        bVar24 = true;
      }
      cVar1 = (&DAT_149d54b80)
              [(longlong)*(int *)(param_2 + 0xc) +
               ((longlong)*(int *)(param_2 + 8) + ((ulonglong)pbVar3[2] + uVar10 * 4) * 2) * 2];
      if ((local_150 == 0) || (param_5 + uVar21 != local_170 + -1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((local_16c == 0) || (local_178 + local_14c != *(int *)(local_168 + 0x428) + -1)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      cVar2 = *(char *)(local_168 + *(int *)(&DAT_149d52fd8 + (ulonglong)pbVar3[1] * 4) + 0x1120 +
                       ((longlong)(char)pbVar3[8] + (longlong)(char)pbVar3[4] * 4) * 2);
      uVar11 = (int)uVar21 >> ((byte)local_150 & 0x1f);
      *(char *)((longlong)&local_88 + (longlong)(int)(local_160 + uVar11)) = cVar2;
      if (cVar2 != '\0') {
        bVar8 = (byte)uVar11;
        bVar9 = (byte)local_16c;
        if (cVar1 == '\x03') {
          if ((!bVar23) && ((uVar11 & 3) == 0)) {
            uVar11 = 1 << (bVar8 & 0x1f);
            if (bVar5) {
              uVar18 = uVar18 | uVar11;
            }
            else {
              uVar20 = uVar20 | uVar11;
            }
          }
          if (!bVar24) {
            uVar11 = (int)local_178 >> (bVar9 & 0x1f) & 3;
LAB_145473c10:
            if (uVar11 == 0) {
              uVar11 = 1 << (bVar8 & 0x1f);
              if (bVar6) {
                *(uint *)((longlong)&local_108 + local_130) =
                     *(uint *)((longlong)&local_108 + local_130) | uVar11;
              }
              else {
                *(uint *)((longlong)&local_e8 + local_130) =
                     *(uint *)((longlong)&local_e8 + local_130) | uVar11;
              }
            }
          }
        }
        else if (cVar1 == '\x02') {
          if ((!bVar23) && ((uVar11 & 1) == 0)) {
            uVar11 = 1 << (bVar8 & 0x1f);
            if (bVar5) {
              uVar18 = uVar18 | uVar11;
            }
            else {
              uVar20 = uVar20 | uVar11;
            }
          }
          if (!bVar24) {
            uVar11 = (int)local_178 >> (bVar9 & 0x1f) & 1;
            goto LAB_145473c10;
          }
        }
        else {
          if (!bVar23) {
            if ((cVar1 == '\x01') || ((uVar11 & 3) == 0)) {
              uVar18 = uVar18 | 1 << (bVar8 & 0x1f);
            }
            else {
              local_174 = local_174 | 1 << (bVar8 & 0x1f);
            }
          }
          if (!bVar24) {
            if ((cVar1 == '\x01') || (((int)local_178 >> (bVar9 & 0x1f) & 3U) == 0)) {
              *(uint *)((longlong)&local_108 + local_130) =
                   *(uint *)((longlong)&local_108 + local_130) | 1 << (bVar8 & 0x1f);
            }
            else {
              *(uint *)((longlong)&local_a8 + local_130) =
                   *(uint *)((longlong)&local_a8 + local_130) | 1 << (bVar8 & 0x1f);
            }
          }
          if (((!bVar4) && (cVar1 == '\0')) && (!bVar5)) {
            *(uint *)((longlong)&local_c8 + local_130) =
                 *(uint *)((longlong)&local_c8 + local_130) | 1 << (bVar8 & 0x1f);
          }
        }
      }
      uVar21 = uVar21 + local_140;
      param_3 = param_3 + local_120;
      param_2 = local_148;
    } while ((int)uVar21 < 8);
    local_158 = (byte *)((longlong)&local_88 + (longlong)(int)(local_178 * 8));
    uVar11 = ~(uint)(param_5 == 0);
    uVar22 = (ulonglong)(uVar11 & local_174);
    uVar10 = (ulonglong)(uVar11 & uVar20);
    uVar21 = uVar11 & uVar18;
    uVar11 = uVar11 & (uVar20 | uVar18 | local_174);
    uVar18 = *(uint *)((longlong)&local_c8 + local_130);
    if (*(int *)(local_168 + 0x188) == 0) {
      local_174 = *(undefined4 *)(param_2 + 0x18);
      lVar14 = *(longlong *)(param_2 + 0x10);
      for (uVar11 = uVar11 | uVar18; iVar7 = local_1a0, uVar11 != 0; uVar11 = uVar11 >> 1) {
        lVar12 = local_168 + 0x520 + (ulonglong)*local_158 * 0x30;
        if ((uVar11 & 1) != 0) {
          if ((uVar10 & 1) == 0) {
            if ((uVar21 & 1) == 0) {
              if ((uVar22 & 1) != 0) {
                local_1a8 = lVar12 + 0x20;
                FUN_145460140(lVar14,local_174,lVar12,lVar12 + 0x10);
              }
            }
            else {
              local_1a8 = lVar12 + 0x20;
              FUN_1454605c0(lVar14,local_174,lVar12,lVar12 + 0x10);
            }
          }
          else {
            local_1a8 = lVar12 + 0x20;
            FUN_14545ff30(lVar14,local_174,lVar12,lVar12 + 0x10);
          }
        }
        if ((uVar18 & 1) != 0) {
          local_1a8 = lVar12 + 0x20;
          FUN_145460140(lVar14 + 4,local_174,lVar12,lVar12 + 0x10);
        }
        lVar14 = lVar14 + 8;
        local_158 = local_158 + 1;
        uVar10 = uVar10 >> 1;
        uVar21 = uVar21 >> 1;
        uVar22 = uVar22 >> 1;
        uVar18 = uVar18 >> 1;
        param_2 = local_148;
      }
    }
    else {
      local_174 = *(undefined4 *)(param_2 + 0x18);
      lVar14 = *(longlong *)(param_2 + 0x10) * 2;
      iVar19 = *(int *)(local_168 + 0x45f0);
      iVar7 = local_1a0;
      for (uVar11 = uVar11 | uVar18; local_1a0 = iVar19, local_170 = local_1a0, uVar11 != 0;
          uVar11 = uVar11 >> 1) {
        lVar12 = local_168 + 0x520 + (ulonglong)*local_158 * 0x30;
        if ((uVar11 & 1) != 0) {
          if ((uVar10 & 1) == 0) {
            if ((uVar21 & 1) == 0) {
              if ((uVar22 & 1) != 0) {
                local_1a8 = lVar12 + 0x20;
                FUN_1455a3710(lVar14,local_174,lVar12,lVar12 + 0x10);
                iVar7 = local_1a0;
              }
            }
            else {
              local_1a8 = lVar12 + 0x20;
              FUN_1455a3980(lVar14,local_174,lVar12,lVar12 + 0x10);
              iVar7 = local_1a0;
            }
          }
          else {
            local_1a8 = lVar12 + 0x20;
            FUN_1455a33b0(lVar14,local_174,lVar12,lVar12 + 0x10);
            iVar7 = local_1a0;
          }
        }
        local_1a0 = iVar7;
        if ((uVar18 & 1) != 0) {
          local_1a8 = lVar12 + 0x20;
          local_1a0 = local_170;
          FUN_1455a3710(lVar14 + 8,local_174,lVar12,lVar12 + 0x10);
        }
        lVar14 = lVar14 + 0x10;
        local_158 = local_158 + 1;
        uVar10 = uVar10 >> 1;
        uVar21 = uVar21 >> 1;
        uVar22 = uVar22 >> 1;
        uVar18 = uVar18 >> 1;
        iVar19 = local_170;
        param_2 = local_148;
        iVar7 = local_1a0;
      }
    }
    local_1a0 = iVar7;
    local_178 = local_178 + local_138;
    local_130 = local_130 + local_118;
    *(longlong *)(param_2 + 0x10) =
         *(longlong *)(param_2 + 0x10) + (longlong)(*(int *)(param_2 + 0x18) << 3);
    param_3 = local_128 + local_13c;
    local_160 = local_160 + local_138 * 8;
    local_128 = param_3;
  } while (local_160 < 0x40);
  iVar7 = local_138;
  lVar14 = local_148;
  lVar12 = 0;
  *(undefined8 *)(param_2 + 0x10) = local_110;
  iVar13 = -local_14c;
  iVar19 = local_14c;
  do {
    if (*(int *)(local_168 + 0x428) <= iVar19) break;
    if ((local_16c == 0) || (iVar19 != *(int *)(local_168 + 0x428) + -1)) {
      local_1a0 = *(int *)((longlong)&local_c8 + lVar12);
    }
    else {
      local_1a0 = 0;
    }
    if (iVar19 == 0) {
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      uVar15 = *(undefined4 *)((longlong)&local_e8 + lVar12);
      uVar16 = *(undefined4 *)((longlong)&local_108 + lVar12);
      uVar17 = *(undefined4 *)((longlong)&local_a8 + lVar12);
    }
    local_190 = (longlong)&local_88 + (longlong)((iVar13 + iVar19) * 8);
    local_198 = local_168 + 0x520;
    if (*(int *)(local_168 + 0x188) == 0) {
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar17);
      FUN_1454752c0(*(longlong *)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 0x18),uVar15,uVar16);
    }
    else {
      local_188 = *(undefined4 *)(local_168 + 0x45f0);
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar17);
      FUN_1454755c0(*(longlong *)(lVar14 + 0x10) * 2);
    }
    iVar19 = iVar19 + iVar7;
    lVar12 = lVar12 + local_118;
    *(longlong *)(lVar14 + 0x10) =
         *(longlong *)(lVar14 + 0x10) + (longlong)(*(int *)(lVar14 + 0x18) << 3);
  } while (iVar13 + iVar19 < 8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 145474110 FUN_145474110 body=105 status=ok
// SIG undefined FUN_145474110(void)

void FUN_145474110(longlong param_1)

{
  uint uVar1;
  void *_Dst;
  
  FUN_145474bb0(param_1 + 0x520,*(undefined4 *)(param_1 + 0x1180));
  *(undefined4 *)(param_1 + 0x1184) = *(undefined4 *)(param_1 + 0x1180);
  uVar1 = 0;
  _Dst = (void *)(param_1 + 0x540);
  do {
    memset(_Dst,uVar1 >> 4,0x10);
    uVar1 = uVar1 + 1;
    _Dst = (void *)((longlong)_Dst + 0x30);
  } while ((int)uVar1 < 0x40);
  return;
}



// FUNCTION 145474180 FUN_145474180 body=407 status=ok
// SIG undefined FUN_145474180(void)

void FUN_145474180(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  
  if (*(int *)(param_1 + 0x1184) != *(int *)(param_1 + 0x1180)) {
    FUN_145474bb0(param_1 + 0x520);
    *(undefined4 *)(param_1 + 0x1184) = *(undefined4 *)(param_1 + 0x1180);
  }
  lVar12 = 8;
  puVar9 = (undefined1 *)(param_1 + 0x1120);
  pbVar4 = (byte *)(param_1 + 0x11f8);
  iVar10 = 0x3f;
  puVar11 = puVar9;
  do {
    iVar7 = param_2;
    if ((*(char *)(param_1 + 0x11a8) != '\0') && ((*pbVar4 & 2) != 0)) {
      iVar7 = (int)*(short *)(puVar11 + 0x9a);
      if (*(char *)(param_1 + 0x11ab) != '\x01') {
        iVar7 = *(short *)(puVar11 + 0x9a) + param_2;
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (0x3f < iVar7) {
        iVar7 = 0x3f;
      }
    }
    if (*(char *)(param_1 + 0x1188) == '\0') {
      uVar6 = (undefined1)iVar7;
      *puVar9 = uVar6;
      puVar9[1] = uVar6;
      puVar9[2] = uVar6;
      puVar9[3] = uVar6;
      puVar9[4] = uVar6;
      puVar9[5] = uVar6;
      puVar9[6] = uVar6;
      puVar9[7] = uVar6;
    }
    else {
      bVar3 = (byte)(param_2 >> 5);
      iVar2 = ((int)*(char *)(param_1 + 0x118a) << (bVar3 & 0x1f)) + iVar7;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3f < iVar2) {
        iVar2 = iVar10;
      }
      *puVar11 = (char)iVar2;
      lVar5 = 3;
      pcVar8 = (char *)(param_1 + 0x118b);
      puVar1 = puVar11;
      do {
        iVar2 = ((int)*(char *)(param_1 + 0x1192) + (int)*pcVar8 << (bVar3 & 0x1f)) + iVar7;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3f < iVar2) {
          iVar2 = iVar10;
        }
        puVar1[2] = (char)iVar2;
        iVar2 = ((int)*pcVar8 + (int)*(char *)(param_1 + 0x1193) << (bVar3 & 0x1f)) + iVar7;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        else if (0x3f < iVar2) {
          iVar2 = iVar10;
        }
        puVar1[3] = (char)iVar2;
        pcVar8 = pcVar8 + 1;
        lVar5 = lVar5 + -1;
        puVar1 = puVar1 + 2;
      } while (lVar5 != 0);
    }
    puVar9 = puVar9 + 8;
    pbVar4 = pbVar4 + 4;
    puVar11 = puVar11 + 8;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  return;
}



// FUNCTION 145474320 FUN_145474320 body=89 status=ok
// SIG undefined FUN_145474320(void)

void FUN_145474320(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
    FUN_145475c70(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145474380 FUN_145474380 body=604 status=ok
// SIG undefined FUN_145474380(void)

void FUN_145474380(longlong param_1,byte *param_2,uint param_3,uint param_4,int param_5,uint param_6
                  )

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  sbyte sVar10;
  sbyte sVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ushort *puVar19;
  ulonglong uVar20;
  
  bVar5 = param_2[2];
  uVar20 = (ulonglong)*param_2;
  uVar15 = param_3 & 7;
  bVar6 = *(byte *)(*(int *)(&DAT_149d52fd8 + (ulonglong)param_2[1] * 4) + param_1 + 0x1120 +
                   ((longlong)(char)param_2[8] + (longlong)(char)param_2[4] * 4) * 2);
  bVar7 = (&DAT_149d54b83)[((ulonglong)bVar5 + uVar20 * 4) * 4];
  uVar17 = (ulonglong)bVar7;
  uVar18 = param_4 & 7;
  iVar13 = uVar18 + uVar15 * 8;
  lVar3 = (ulonglong)bVar5 * 8;
  lVar14 = (longlong)(((int)param_4 >> 3) + ((int)param_3 >> 3) * *(int *)(param_1 + 0x11a0)) * 0xa0
           + *(longlong *)(param_1 + 0x1198);
  lVar2 = lVar14 + (ulonglong)bVar5 * 8;
  sVar10 = (char)(uVar18 >> 1) + ((byte)uVar15 & 0xfe) * '\x02';
  cVar8 = (&DAT_149d53010)[(ulonglong)uVar18 + (ulonglong)uVar15 * 8];
  if (bVar6 != 0) {
    if (0 < (int)param_6) {
      uVar16 = (ulonglong)param_6;
      iVar12 = iVar13;
      do {
        memset((void *)((longlong)iVar12 + 0x5a + lVar14),(uint)bVar6,(longlong)param_5);
        iVar12 = iVar12 + 8;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    lVar9 = uVar20 * 2;
    sVar11 = (sbyte)iVar13;
    puVar1 = (ulonglong *)(lVar2 + 0x20);
    *puVar1 = *puVar1 | *(longlong *)(&DAT_149d52ea0 + uVar20 * 8) << sVar11;
    *(ulonglong *)(lVar3 + lVar14) =
         *(ulonglong *)(lVar3 + lVar14) | *(longlong *)(&DAT_149d52e30 + uVar20 * 8) << sVar11;
    if (cVar8 != '\0') {
      puVar19 = (ushort *)(lVar14 + 0x50 + uVar17 * 2);
      *puVar19 = *puVar19 | *(short *)(&DAT_149d52f98 + lVar9) << sVar10;
      puVar19 = (ushort *)(lVar14 + 0x48 + uVar17 * 2);
      *puVar19 = *puVar19 | *(short *)(&DAT_149d52f78 + lVar9) << sVar10;
    }
    if ((param_2[3] == 0) || ((char)param_2[8] < '\x01')) {
      uVar20 = *(ulonglong *)(&DAT_149d52f10 + uVar20 * 8);
      puVar1 = (ulonglong *)(lVar2 + 0x20);
      *puVar1 = *puVar1 | (*(ulonglong *)(&DAT_149d52e10 + lVar3) & uVar20) << sVar11;
      *(ulonglong *)(lVar3 + lVar14) =
           *(ulonglong *)(lVar3 + lVar14) |
           (*(ulonglong *)(&DAT_149d52df0 + lVar3) & uVar20) << sVar11;
      puVar19 = (ushort *)(&DAT_149d52fb8 + lVar9);
      if (cVar8 != '\0') {
        puVar4 = (ushort *)(lVar14 + 0x50 + uVar17 * 2);
        *puVar4 = *puVar4 | (*(ushort *)(&DAT_149d52f08 + uVar17 * 2) & *puVar19) << sVar10;
        puVar4 = (ushort *)(lVar14 + 0x48 + uVar17 * 2);
        *puVar4 = *puVar4 | (*(ushort *)(&DAT_149d52e98 + uVar17 * 2) & *puVar19) << sVar10;
      }
      if (bVar5 == 0) {
        *(ulonglong *)(lVar14 + 0x40) = *(ulonglong *)(lVar14 + 0x40) | uVar20 << sVar11;
      }
      if ((cVar8 != '\0') && (bVar7 == 0)) {
        *(ushort *)(lVar14 + 0x58) = *(ushort *)(lVar14 + 0x58) | *puVar19 << sVar10;
      }
    }
  }
  return;
}



// FUNCTION 1454745e0 FUN_1454745e0 body=924 status=ok
// SIG undefined FUN_1454745e0(void)

void FUN_1454745e0(longlong param_1,int param_2,int param_3,ulonglong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort local_res20;
  ulonglong local_50;
  
  uVar8 = param_4[3] | param_4[2];
  param_4[2] = uVar8;
  uVar2 = *(ushort *)((longlong)param_4 + 0x56) | *(ushort *)((longlong)param_4 + 0x54);
  local_50 = param_4[7] | param_4[6];
  uVar7 = *(ushort *)((longlong)param_4 + 0x4e) | *(ushort *)((longlong)param_4 + 0x4c);
  uVar13 = (ushort)param_4[10] & 0xf | *(ushort *)((longlong)param_4 + 0x52);
  *(ushort *)((longlong)param_4 + 0x54) = uVar2;
  param_4[6] = local_50;
  uVar5 = *param_4 & 0x1111111111111111 | param_4[1];
  uVar6 = *param_4 & 0xeeeeeeeeeeeeeeee;
  *(ushort *)((longlong)param_4 + 0x4c) = uVar7;
  param_4[1] = uVar5;
  *param_4 = uVar6;
  uVar10 = param_4[4] & 0xff000000ff | param_4[5];
  uVar11 = param_4[4] & 0xffffff00ffffff00;
  param_4[5] = uVar10;
  param_4[4] = uVar11;
  *(ushort *)((longlong)param_4 + 0x52) = uVar13;
  uVar9 = (ushort)param_4[9] & 0x1111 | *(ushort *)((longlong)param_4 + 0x4a);
  uVar12 = (ushort)param_4[9] & 0xeeee;
  *(ushort *)((longlong)param_4 + 0x4a) = uVar9;
  *(ushort *)(param_4 + 9) = uVar12;
  local_res20 = (ushort)param_4[10] & 0xfff0;
  *(ushort *)(param_4 + 10) = local_res20;
  if (*(int *)(param_1 + 0x428) < param_2 + 8) {
    param_2 = *(int *)(param_1 + 0x428) - param_2;
    uVar4 = (1L << (((byte)param_2 & 7) << 3)) - 1;
    param_4[8] = param_4[8] & uVar4;
    local_50 = local_50 & uVar4;
    uVar6 = uVar6 & uVar4;
    uVar11 = uVar11 & uVar4;
    *param_4 = uVar6;
    uVar5 = uVar5 & uVar4;
    param_4[4] = uVar11;
    uVar10 = uVar10 & uVar4;
    param_4[1] = uVar5;
    uVar8 = uVar8 & uVar4;
    param_4[5] = uVar10;
    param_4[2] = uVar8;
    uVar1 = (1 << (((byte)param_2 + 1) * '\x02' & 0x1c)) - 1;
    *(ushort *)(param_4 + 0xb) = (ushort)param_4[0xb] & uVar1;
    local_res20 = local_res20 & uVar1;
    uVar12 = uVar12 & uVar1;
    uVar9 = uVar9 & uVar1;
    *(ushort *)(param_4 + 9) = uVar12;
    uVar13 = uVar13 & uVar1;
    *(ushort *)(param_4 + 10) = local_res20;
    uVar7 = uVar7 & uVar1;
    *(ushort *)((longlong)param_4 + 0x4a) = uVar9;
    uVar2 = uVar2 & uVar1;
    *(ushort *)((longlong)param_4 + 0x52) = uVar13;
    param_4[6] = local_50;
    *(ushort *)((longlong)param_4 + 0x4c) = uVar7;
    *(ushort *)((longlong)param_4 + 0x54) = uVar2;
    if (param_2 == 1) {
      uVar1 = uVar2;
      uVar2 = 0;
    }
    else {
      if (param_2 != 5) goto LAB_1454747f5;
      uVar1 = uVar2 & 0xff00;
      uVar2 = ~uVar1 & uVar2;
    }
    uVar13 = uVar13 | uVar1;
    *(ushort *)((longlong)param_4 + 0x54) = uVar2;
    *(ushort *)((longlong)param_4 + 0x52) = uVar13;
  }
LAB_1454747f5:
  if (*(int *)(param_1 + 0x430) < param_3 + 8) {
    iVar3 = *(int *)(param_1 + 0x430) - param_3;
    uVar4 = (longlong)((1 << ((byte)iVar3 & 0x1f)) + -1) * 0x101010101010101;
    param_4[8] = param_4[8] & uVar4;
    uVar6 = uVar6 & uVar4;
    uVar5 = uVar5 & uVar4;
    uVar8 = uVar8 & uVar4;
    param_4[5] = uVar10 & uVar4;
    *param_4 = uVar6;
    param_4[4] = uVar11 & uVar4;
    param_4[1] = uVar5;
    uVar1 = (1 << ((byte)((longlong)iVar3 + 1U >> 1) & 0x1f)) * 0x1111 + 0xeeef;
    param_4[2] = uVar8;
    uVar9 = uVar9 & uVar1;
    uVar7 = uVar7 & uVar1;
    uVar12 = uVar12 & uVar1;
    *(ushort *)(param_4 + 9) = uVar12;
    *(ushort *)((longlong)param_4 + 0x4a) = uVar9;
    *(ushort *)((longlong)param_4 + 0x52) = uVar13 & uVar1;
    *(ushort *)((longlong)param_4 + 0x4c) = uVar7;
    *(ushort *)(param_4 + 0xb) =
         (ushort)param_4[0xb] &
         (1 << ((byte)((ulonglong)(longlong)iVar3 >> 1) & 0x1f)) * 0x1111 + 0xeeefU;
    *(ushort *)(param_4 + 10) = local_res20 & uVar1;
    param_4[6] = local_50 & uVar4;
    *(ushort *)((longlong)param_4 + 0x54) = uVar2 & uVar1;
    if (iVar3 == 1) {
      uVar13 = 0;
      uVar2 = uVar7;
    }
    else {
      if (iVar3 != 5) goto LAB_14547492e;
      uVar2 = uVar7 & 0xcccc;
      uVar13 = ~uVar2 & uVar7;
    }
    uVar9 = uVar2 | uVar9;
    *(ushort *)((longlong)param_4 + 0x4c) = uVar13;
    *(ushort *)((longlong)param_4 + 0x4a) = uVar9;
    uVar7 = uVar13;
  }
LAB_14547492e:
  if (param_3 == 0) {
    *param_4 = uVar6;
    *(ushort *)(param_4 + 9) = uVar12;
    param_4[1] = uVar5 & 0xfefefefefefefefe;
    *(ushort *)((longlong)param_4 + 0x4a) = uVar9 & 0xeeee;
    *(ushort *)((longlong)param_4 + 0x4c) = uVar7 & 0xeeee;
    param_4[2] = uVar8 & 0xfefefefefefefefe;
  }
  return;
}



// FUNCTION 145474980 FUN_145474980 body=282 status=ok
// SIG undefined FUN_145474980(void)

void FUN_145474980(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x428);
    uVar5 = 0;
    if ((param_3 != 0) && (8 < iVar3)) {
      uVar5 = iVar3 >> 1 & 0xfffffff8;
      if (iVar3 < 0x48) {
        iVar3 = 8;
      }
      else {
        iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3;
      }
    }
    iVar3 = iVar3 + uVar5;
    FUN_145474180(param_1,param_2);
    if ((int)uVar5 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x430);
      do {
        iVar6 = 0;
        iVar1 = *(int *)(param_1 + 0x434);
        lVar2 = *(longlong *)(param_1 + 0x4d0);
        if (0 < iVar4) {
          do {
            FUN_145472f40(param_1,uVar5,iVar6,
                          lVar2 + (longlong)(int)(uVar5 * iVar1) * 8 + (longlong)iVar6 * 8,
                          *(undefined4 *)(param_1 + 0x434),
                          (longlong)((iVar6 >> 3) + ((int)uVar5 >> 3) * *(int *)(param_1 + 0x11a0))
                          * 0xa0 + *(longlong *)(param_1 + 0x1198));
            iVar4 = *(int *)(param_1 + 0x430);
            iVar6 = iVar6 + 8;
          } while (iVar6 < iVar4);
        }
        uVar5 = uVar5 + 8;
      } while ((int)uVar5 < iVar3);
    }
  }
  return;
}



// FUNCTION 145474aa0 FUN_145474aa0 body=53 status=ok
// SIG undefined FUN_145474aa0(void)

void FUN_145474aa0(longlong param_1)

{
  if (*(int *)(param_1 + 0x1178) != 0) {
    memset(*(void **)(param_1 + 0x1198),0,
           (longlong)((*(int *)(param_1 + 0x428) + 7 >> 3) * *(int *)(param_1 + 0x11a0)) * 0xa0);
    return;
  }
  return;
}



// FUNCTION 145474ae0 FUN_145474ae0 body=139 status=ok
// SIG undefined FUN_145474ae0(void)

void FUN_145474ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = param_2;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[1] = param_3;
  lVar4 = 3;
  puVar2 = param_1 + 2;
  do {
    puVar5 = param_4;
    puVar3 = puVar2;
    uVar1 = puVar5[1];
    *puVar3 = *puVar5;
    puVar3[1] = uVar1;
    uVar1 = puVar5[3];
    puVar3[2] = puVar5[2];
    puVar3[3] = uVar1;
    uVar1 = puVar5[5];
    puVar3[4] = puVar5[4];
    puVar3[5] = uVar1;
    uVar1 = puVar5[7];
    puVar3[6] = puVar5[6];
    puVar3[7] = uVar1;
    uVar1 = puVar5[9];
    puVar3[8] = puVar5[8];
    puVar3[9] = uVar1;
    uVar1 = puVar5[0xb];
    puVar3[10] = puVar5[10];
    puVar3[0xb] = uVar1;
    uVar1 = puVar5[0xd];
    puVar3[0xc] = puVar5[0xc];
    puVar3[0xd] = uVar1;
    uVar1 = puVar5[0xf];
    puVar3[0xe] = puVar5[0xe];
    puVar3[0xf] = uVar1;
    lVar4 = lVar4 + -1;
    puVar2 = puVar3 + 0x10;
    param_4 = puVar5 + 0x10;
  } while (lVar4 != 0);
  uVar1 = puVar5[0x11];
  puVar3[0x10] = puVar5[0x10];
  puVar3[0x11] = uVar1;
  puVar3[0x12] = puVar5[0x12];
  return;
}



// FUNCTION 145474b70 FUN_145474b70 body=57 status=ok
// SIG undefined FUN_145474b70(void)

undefined8 FUN_145474b70(undefined8 *param_1)

{
  FUN_145475c70(*param_1,param_1[1],param_1 + 2,*(undefined4 *)(param_1 + 0x35),
                *(undefined4 *)((longlong)param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x36));
  return 1;
}



// FUNCTION 145474bb0 FUN_145474bb0 body=179 status=ok
// SIG undefined FUN_145474bb0(void)

void FUN_145474bb0(void *param_1,int param_2)

{
  int _Val;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    _Val = iVar1 >> (4 < param_2) + (0 < param_2);
    if ((0 < param_2) && (9 - param_2 < _Val)) {
      _Val = 9 - param_2;
    }
    if (_Val < 1) {
      _Val = 1;
    }
    memset((void *)((longlong)param_1 + 0x10),_Val,0x10);
    memset(param_1,_Val + 4 + iVar2,0x10);
    iVar1 = iVar1 + 1;
    param_1 = (void *)((longlong)param_1 + 0x30);
    iVar2 = iVar2 + 2;
  } while (iVar2 < 0x7f);
  return;
}



// FUNCTION 145474c70 FUN_145474c70 body=775 status=ok
// SIG undefined FUN_145474c70(void)

void FUN_145474c70(int param_1,longlong param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,longlong param_8,byte *param_9)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_58 [4];
  
  local_58[0] = param_2;
  uVar2 = 8;
  if (param_1 != 0) {
    uVar2 = 4;
  }
  uVar3 = 1 << uVar2 | 1;
  uVar6 = 0xffff;
  if (param_1 != 0) {
    uVar6 = 0xff;
  }
  uVar6 = (param_4 | param_5 | param_6 | param_7) & uVar6;
  if (uVar6 != 0) {
    do {
      if ((uVar3 & uVar6) != 0) {
        lVar5 = (ulonglong)*param_9 * 0x30 + param_8;
        local_58[2] = lVar5;
        lVar4 = (ulonglong)param_9[uVar2] * 0x30 + param_8;
        local_58[3] = lVar4;
        local_58[1] = param_3 * 8 + param_2;
        local_58[0] = param_2;
        if ((uVar3 & param_4) != 0) {
          if ((uVar3 & param_4) == uVar3) {
            FUN_145460030(param_2,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20);
          }
          else {
            lVar1 = local_58[(ulonglong)(~param_4 & 1) + 2];
            FUN_14545ff30(local_58[~param_4 & 1],param_3,lVar1,lVar1 + 0x10,lVar1 + 0x20);
          }
        }
        if ((uVar3 & param_5) != 0) {
          if ((uVar3 & param_5) == uVar3) {
            FUN_145460690(param_2,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar4,lVar4 + 0x10,
                          lVar4 + 0x20);
          }
          else {
            lVar1 = local_58[(ulonglong)(~param_5 & 1) + 2];
            FUN_1454605c0(local_58[~param_5 & 1],param_3,lVar1,lVar1 + 0x10,lVar1 + 0x20);
          }
        }
        if ((uVar3 & param_6) != 0) {
          if ((uVar3 & param_6) == uVar3) {
            FUN_1454604a0(param_2,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar4,lVar4 + 0x10,
                          lVar4 + 0x20);
          }
          else {
            lVar1 = local_58[(ulonglong)(~param_6 & 1) + 2];
            FUN_145460140(local_58[~param_6 & 1],param_3,lVar1,lVar1 + 0x10,lVar1 + 0x20);
          }
        }
        if ((uVar3 & param_7) != 0) {
          if ((uVar3 & param_7) == uVar3) {
            FUN_1454604a0(param_2 + 4,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar4,lVar4 + 0x10,
                          lVar4 + 0x20);
          }
          else {
            lVar4 = local_58[(ulonglong)(~param_7 & 1) + 2];
            FUN_145460140(local_58[~param_7 & 1] + 4,param_3,lVar4,lVar4 + 0x10,lVar4 + 0x20);
          }
        }
      }
      param_5 = param_5 >> 1;
      param_2 = param_2 + 8;
      param_9 = param_9 + 1;
      param_4 = param_4 >> 1;
      param_6 = param_6 >> 1;
      param_7 = param_7 >> 1;
      local_58[0] = param_2;
      uVar6 = (~uVar3 & uVar6) >> 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 145474f80 FUN_145474f80 body=821 status=ok
// SIG undefined FUN_145474f80(void)

void FUN_145474f80(int param_1,longlong param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,longlong param_8,byte *param_9,undefined4 param_10)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong local_58 [4];
  
  local_58[0] = param_2;
  uVar2 = 8;
  if (param_1 != 0) {
    uVar2 = 4;
  }
  uVar3 = 1 << uVar2 | 1;
  uVar6 = 0xffff;
  if (param_1 != 0) {
    uVar6 = 0xff;
  }
  uVar6 = (param_4 | param_5 | param_6 | param_7) & uVar6;
  if (uVar6 != 0) {
    do {
      if ((uVar3 & uVar6) != 0) {
        lVar5 = (ulonglong)*param_9 * 0x30 + param_8;
        local_58[2] = lVar5;
        lVar4 = (ulonglong)param_9[uVar2] * 0x30 + param_8;
        local_58[3] = lVar4;
        local_58[1] = param_2 + (longlong)(param_3 * 8) * 2;
        local_58[0] = param_2;
        if ((uVar3 & param_4) != 0) {
          if ((uVar3 & param_4) == uVar3) {
            FUN_1455a34c0(param_2,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20);
          }
          else {
            lVar1 = local_58[(ulonglong)(~param_4 & 1) + 2];
            FUN_1455a33b0(local_58[~param_4 & 1],param_3,lVar1,lVar1 + 0x10,lVar1 + 0x20,param_10);
          }
        }
        if ((uVar3 & param_5) != 0) {
          if ((uVar3 & param_5) == uVar3) {
            FUN_1455a3a70(param_2,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar4,lVar4 + 0x10,
                          lVar4 + 0x20,param_10);
          }
          else {
            lVar1 = local_58[(ulonglong)(~param_5 & 1) + 2];
            FUN_1455a3980(local_58[~param_5 & 1],param_3,lVar1,lVar1 + 0x10,lVar1 + 0x20,param_10);
          }
        }
        if ((uVar3 & param_6) != 0) {
          if ((uVar3 & param_6) == uVar3) {
            FUN_1455a3800(param_2,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar4,lVar4 + 0x10,
                          lVar4 + 0x20,param_10);
          }
          else {
            lVar1 = local_58[(ulonglong)(~param_6 & 1) + 2];
            FUN_1455a3710(local_58[~param_6 & 1],param_3,lVar1,lVar1 + 0x10,lVar1 + 0x20,param_10);
          }
        }
        if ((uVar3 & param_7) != 0) {
          if ((uVar3 & param_7) == uVar3) {
            FUN_1455a3800(param_2 + 8,param_3,lVar5,lVar5 + 0x10,lVar5 + 0x20,lVar4,lVar4 + 0x10,
                          lVar4 + 0x20,param_10);
          }
          else {
            lVar4 = local_58[(ulonglong)(~param_7 & 1) + 2];
            FUN_1455a3710(local_58[~param_7 & 1] + 8,param_3,lVar4,lVar4 + 0x10,lVar4 + 0x20,
                          param_10);
          }
        }
      }
      param_5 = param_5 >> 1;
      param_2 = param_2 + 0x10;
      param_6 = param_6 >> 1;
      param_9 = param_9 + 1;
      param_4 = param_4 >> 1;
      param_7 = param_7 >> 1;
      local_58[0] = param_2;
      uVar6 = (~uVar3 & uVar6) >> 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1454752c0 FUN_1454752c0 body=763 status=ok
// SIG undefined FUN_1454752c0(void)

void FUN_1454752c0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong param_7,byte *param_8)

{
  longlong lVar1;
  uint uVar2;
  sbyte sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar2 = param_3 | param_4 | param_5 | param_6;
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar7 = 1;
    if ((uVar2 & 1) != 0) {
      lVar5 = (ulonglong)*param_8 * 0x30 + param_7;
      lVar1 = lVar5 + 0x20;
      if ((param_3 & 1) == 0) {
        if ((param_4 & 1) == 0) {
          if ((param_5 & 1) != 0) {
            if (((byte)param_5 & 3) != 3) {
              FUN_14545edc0(param_1,param_2,lVar5,lVar5 + 0x10,lVar1);
              goto LAB_14547549a;
            }
            lVar8 = (ulonglong)param_8[1] * 0x30 + param_7;
            lVar6 = lVar8 + 0x20;
            FUN_14545f040(param_1,param_2,lVar5,lVar5 + 0x10,lVar1,lVar8,lVar8 + 0x10,lVar6);
            goto LAB_1454753e1;
          }
LAB_14547549f:
          FUN_14545edc0(param_2 * 4 + param_1,param_2,lVar5,lVar5 + 0x10,lVar1);
        }
        else if (((byte)param_4 & 3) == 3) {
          lVar8 = (ulonglong)param_8[1] * 0x30 + param_7;
          lVar6 = lVar8 + 0x20;
          FUN_14545f8c0(param_1,param_2,lVar5,lVar5 + 0x10,lVar1,lVar8,lVar8 + 0x10,lVar6);
LAB_1454753e1:
          if (((byte)param_6 & 3) == 3) {
            FUN_14545f040(param_2 * 4 + param_1,param_2,lVar5,lVar5 + 0x10,lVar1,lVar8,lVar8 + 0x10,
                          lVar6);
            uVar7 = 2;
          }
          else {
            if ((param_6 & 1) == 0) {
              if ((param_6 & 2) != 0) {
                lVar4 = (longlong)(param_2 * 4) + 8;
                goto LAB_14547546f;
              }
            }
            else {
              lVar4 = (longlong)(param_2 * 4);
              lVar8 = lVar5;
              lVar6 = lVar1;
LAB_14547546f:
              FUN_14545edc0(lVar4 + param_1,param_2,lVar8,lVar8 + 0x10,lVar6);
            }
            uVar7 = 2;
          }
        }
        else {
          FUN_14545f360(param_1,param_2,lVar5,lVar5 + 0x10,lVar1);
LAB_14547549a:
          if ((param_6 & 1) != 0) goto LAB_14547549f;
        }
      }
      else if (((byte)param_3 & 3) == 3) {
        (*DAT_14c7fbc30)();
        uVar7 = 2;
      }
      else {
        (*DAT_14c7fbc28)(param_1,param_2,lVar5,lVar5 + 0x10,lVar1);
      }
    }
    sVar3 = (sbyte)uVar7;
    param_5 = param_5 >> sVar3;
    param_8 = param_8 + uVar7;
    param_3 = param_3 >> sVar3;
    param_1 = param_1 + (ulonglong)(uVar7 * 8);
    param_4 = param_4 >> sVar3;
    param_6 = param_6 >> sVar3;
    uVar2 = uVar2 >> sVar3;
  } while( true );
}



// FUNCTION 1454755c0 FUN_1454755c0 body=809 status=ok
// SIG undefined FUN_1454755c0(void)

void FUN_1454755c0(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  longlong param_7,byte *param_8,undefined4 param_9)

{
  uint uVar1;
  sbyte sVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong in_stack_ffffffffffffffa0;
  undefined4 uVar9;
  
  uVar1 = param_3 | param_4 | param_5 | param_6;
  do {
    if (uVar1 == 0) {
      return;
    }
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
    uVar5 = 1;
    uVar6 = 1;
    if ((uVar1 & 1) != 0) {
      lVar4 = (ulonglong)*param_8 * 0x30 + param_7;
      lVar8 = lVar4 + 0x20;
      uVar6 = uVar5;
      if ((param_3 & 1) == 0) {
        if ((param_4 & 1) == 0) {
          if ((param_5 & 1) != 0) {
            if (((byte)param_5 & 3) != 3) {
              in_stack_ffffffffffffffa0 = CONCAT44(uVar9,param_9);
              FUN_1455a21a0(param_1,param_2,lVar4,lVar4 + 0x10,lVar8,in_stack_ffffffffffffffa0);
              goto LAB_1454757b0;
            }
            lVar7 = (ulonglong)param_8[1] * 0x30 + param_7;
            in_stack_ffffffffffffffa0 = lVar7;
            FUN_1455a29a0(param_1,param_2,lVar4,lVar4 + 0x10,lVar8,lVar7,lVar7 + 0x10,lVar7 + 0x20,
                          param_9);
            goto LAB_1454756e9;
          }
LAB_1454757b5:
          in_stack_ffffffffffffffa0 = CONCAT44(uVar9,param_9);
          FUN_1455a21a0(param_1 + (longlong)(param_2 * 4) * 2,param_2,lVar4,lVar4 + 0x10,lVar8,
                        in_stack_ffffffffffffffa0);
        }
        else if (((byte)param_4 & 3) == 3) {
          lVar7 = (ulonglong)param_8[1] * 0x30 + param_7;
          in_stack_ffffffffffffffa0 = lVar7;
          FUN_1455a3350(param_1,param_2,lVar4,lVar4 + 0x10,lVar8,lVar7,lVar7 + 0x10,lVar7 + 0x20,
                        param_9);
LAB_1454756e9:
          if (((byte)param_6 & 3) == 3) {
            FUN_1455a29a0(param_1 + (longlong)(param_2 * 4) * 2,param_2,lVar4,lVar4 + 0x10,lVar8,
                          lVar7,lVar7 + 0x10,lVar7 + 0x20,param_9);
            uVar6 = 2;
            in_stack_ffffffffffffffa0 = lVar7;
          }
          else {
            if ((param_6 & 1) == 0) {
              if ((param_6 & 2) != 0) {
                lVar8 = lVar7 + 0x20;
                lVar3 = (longlong)(param_2 * 4) + 8;
                goto LAB_145475787;
              }
            }
            else {
              lVar3 = (longlong)(param_2 * 4);
              lVar7 = lVar4;
LAB_145475787:
              in_stack_ffffffffffffffa0 =
                   CONCAT44((int)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20),param_9);
              FUN_1455a21a0(param_1 + lVar3 * 2,param_2,lVar7,lVar7 + 0x10,lVar8,
                            in_stack_ffffffffffffffa0);
            }
            uVar6 = 2;
          }
        }
        else {
          in_stack_ffffffffffffffa0 = CONCAT44(uVar9,param_9);
          FUN_1455a2a00(param_1,param_2,lVar4,lVar4 + 0x10,lVar8,in_stack_ffffffffffffffa0);
LAB_1454757b0:
          uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
          if ((param_6 & 1) != 0) goto LAB_1454757b5;
        }
      }
      else {
        in_stack_ffffffffffffffa0 = CONCAT44(uVar9,param_9);
        if (((byte)param_3 & 3) == 3) {
          FUN_1455a2130();
          uVar6 = 2;
        }
        else {
          FUN_1455a11a0(param_1,param_2,lVar4,lVar4 + 0x10,lVar8,in_stack_ffffffffffffffa0);
        }
      }
    }
    param_1 = param_1 + (ulonglong)(uVar6 * 8) * 2;
    sVar2 = (sbyte)uVar6;
    param_3 = param_3 >> sVar2;
    param_5 = param_5 >> sVar2;
    param_4 = param_4 >> sVar2;
    param_8 = param_8 + uVar6;
    param_6 = param_6 >> sVar2;
    uVar1 = uVar1 >> sVar2;
  } while( true );
}



// FUNCTION 1454758f0 FUN_1454758f0 body=537 status=ok
// SIG undefined FUN_1454758f0(void)

void FUN_1454758f0(longlong param_1,byte *param_2,int param_3,byte param_4,longlong param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  ushort *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  bVar4 = param_2[2];
  uVar10 = (ulonglong)bVar4;
  uVar12 = (ulonglong)*param_2;
  lVar2 = uVar10 * 8;
  bVar5 = (&DAT_149d54b83)[(uVar12 * 4 + uVar10) * 4];
  uVar11 = (ulonglong)bVar5;
  bVar8 = *(byte *)(param_1 + *(int *)(&DAT_149d52fd8 + (ulonglong)param_2[1] * 4) + 0xc00 +
                   ((longlong)(char)param_2[8] + (longlong)(char)param_2[4] * 4) * 2);
  puVar1 = (ulonglong *)(param_5 + 0x20 + uVar10 * 8);
  if (bVar8 != 0) {
    if ((&DAT_149d549a0)[uVar12] != 0) {
      uVar10 = (ulonglong)(byte)(&DAT_149d549a0)[uVar12];
      bVar6 = (&DAT_149d54990)[uVar12];
      iVar9 = param_3;
      do {
        memset((void *)((longlong)iVar9 + 0x5a + param_5),(uint)bVar8,(ulonglong)bVar6);
        iVar9 = iVar9 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    bVar8 = (byte)param_3;
    *puVar1 = *puVar1 | *(longlong *)(&DAT_149d52ea0 + uVar12 * 8) << (bVar8 & 0x3f);
    puVar3 = (ushort *)(param_5 + 0x50 + uVar11 * 2);
    *puVar3 = *puVar3 | *(short *)(&DAT_149d52f98 + uVar12 * 2) << (param_4 & 0x1f);
    *(ulonglong *)(lVar2 + param_5) =
         *(ulonglong *)(lVar2 + param_5) |
         *(longlong *)(&DAT_149d52e30 + uVar12 * 8) << (bVar8 & 0x3f);
    puVar3 = (ushort *)(param_5 + 0x48 + uVar11 * 2);
    *puVar3 = *puVar3 | *(short *)(&DAT_149d52f78 + uVar12 * 2) << (param_4 & 0x1f);
    if ((param_2[3] == 0) || ((char)param_2[8] < '\x01')) {
      uVar10 = *(ulonglong *)(&DAT_149d52f10 + uVar12 * 8);
      *puVar1 = *puVar1 | (*(ulonglong *)(&DAT_149d52e10 + lVar2) & uVar10) << (bVar8 & 0x3f);
      uVar7 = *(ushort *)(&DAT_149d52fb8 + uVar12 * 2);
      puVar3 = (ushort *)(param_5 + 0x50 + uVar11 * 2);
      *puVar3 = *puVar3 | (*(ushort *)(&DAT_149d52f08 + uVar11 * 2) & uVar7) << (param_4 & 0x1f);
      *(ulonglong *)(lVar2 + param_5) =
           *(ulonglong *)(lVar2 + param_5) |
           (*(ulonglong *)(&DAT_149d52df0 + lVar2) & uVar10) << (bVar8 & 0x3f);
      puVar3 = (ushort *)(param_5 + 0x48 + uVar11 * 2);
      *puVar3 = *puVar3 | (*(ushort *)(&DAT_149d52e98 + uVar11 * 2) & uVar7) << (param_4 & 0x1f);
      if (bVar4 == 0) {
        *(ulonglong *)(param_5 + 0x40) = *(ulonglong *)(param_5 + 0x40) | uVar10 << (bVar8 & 0x3f);
      }
      if (bVar5 == 0) {
        *(ushort *)(param_5 + 0x58) = *(ushort *)(param_5 + 0x58) | uVar7 << (param_4 & 0x1f);
      }
    }
  }
  return;
}



// FUNCTION 145475b10 FUN_145475b10 body=350 status=ok
// SIG undefined FUN_145475b10(void)

void FUN_145475b10(longlong param_1,byte *param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  bVar3 = param_2[2];
  puVar1 = (ulonglong *)(param_4 + 0x20 + (ulonglong)bVar3 * 8);
  bVar6 = *(byte *)(param_1 + *(int *)(&DAT_149d52fd8 + (ulonglong)param_2[1] * 4) + 0xc00 +
                   ((longlong)(char)param_2[8] + (longlong)(char)param_2[4] * 4) * 2);
  lVar2 = (ulonglong)bVar3 * 8;
  if (bVar6 != 0) {
    uVar10 = (ulonglong)*param_2;
    if ((&DAT_149d549a0)[uVar10] != 0) {
      bVar4 = (&DAT_149d54990)[uVar10];
      uVar8 = (ulonglong)(byte)(&DAT_149d549a0)[uVar10];
      iVar7 = param_3;
      do {
        memset((void *)((longlong)iVar7 + 0x5a + param_4),(uint)bVar6,(ulonglong)bVar4);
        iVar7 = iVar7 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(longlong *)(&DAT_149d52e30 + uVar10 * 8);
    bVar6 = (byte)param_3;
    uVar8 = *(longlong *)(&DAT_149d52ea0 + uVar10 * 8) << (bVar6 & 0x3f) | *puVar1;
    *puVar1 = uVar8;
    uVar9 = lVar5 << (bVar6 & 0x3f) | *(ulonglong *)(lVar2 + param_4);
    *(ulonglong *)(lVar2 + param_4) = uVar9;
    if ((param_2[3] == 0) || ((char)param_2[8] < '\x01')) {
      uVar10 = *(ulonglong *)(&DAT_149d52f10 + uVar10 * 8);
      *puVar1 = (*(ulonglong *)(&DAT_149d52e10 + lVar2) & uVar10) << (bVar6 & 0x3f) | uVar8;
      *(ulonglong *)(lVar2 + param_4) =
           (*(ulonglong *)(&DAT_149d52df0 + lVar2) & uVar10) << (bVar6 & 0x3f) | uVar9;
      if (bVar3 == 0) {
        *(ulonglong *)(param_4 + 0x40) = *(ulonglong *)(param_4 + 0x40) | uVar10 << (bVar6 & 0x3f);
      }
    }
  }
  return;
}



// FUNCTION 145475c70 FUN_145475c70 body=481 status=ok
// SIG undefined FUN_145475c70(void)

void FUN_145475c70(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar6 = 1;
  uVar5 = 1;
  uVar8 = 3;
  if (param_6 == 0) {
    uVar5 = uVar8;
    if (*(int *)(param_3 + 0x94) == 1) {
      if (*(int *)(param_3 + 0x90) == 1) {
        iVar6 = 0;
        goto joined_r0x000145475ce9;
      }
    }
    else if ((*(int *)(param_3 + 0x94) == 0) && (*(int *)(param_3 + 0x90) == 0))
    goto joined_r0x000145475ce9;
    iVar6 = 2;
  }
joined_r0x000145475ce9:
  for (; param_4 < param_5; param_4 = param_4 + 8) {
    iVar7 = 0;
    iVar1 = *(int *)(param_2 + 0x434);
    lVar2 = *(longlong *)(param_2 + 0x4d0);
    lVar4 = (longlong)((param_4 >> 3) * *(int *)(param_2 + 0x11a0)) * 0xa0 +
            *(longlong *)(param_2 + 0x1198);
    if (0 < *(int *)(param_2 + 0x430)) {
      do {
        FUN_145479320(param_3,param_1,param_4,iVar7);
        FUN_1454745e0(param_2,param_4,iVar7,lVar4);
        FUN_145473420(param_2,param_3,param_4,lVar4);
        if (1 < uVar5) {
          uVar9 = (ulonglong)(uVar5 - 1);
          lVar3 = param_3;
          do {
            lVar3 = lVar3 + 0x88;
            if (iVar6 == 0) {
              FUN_145473650(param_2,lVar3,param_4,lVar4);
            }
            else if (iVar6 == 1) {
              FUN_145473420(param_2,lVar3,param_4,lVar4);
            }
            else if (iVar6 == 2) {
              FUN_145473950(param_2,lVar3,
                            (longlong)iVar7 * 8 + lVar2 + (longlong)(param_4 * iVar1) * 8,param_4,
                            iVar7);
            }
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        iVar7 = iVar7 + 8;
        lVar4 = lVar4 + 0xa0;
      } while (iVar7 < *(int *)(param_2 + 0x430));
    }
  }
  return;
}



// FUNCTION 145475e60 FUN_145475e60 body=722 status=ok
// SIG undefined FUN_145475e60(void)

void FUN_145475e60(longlong *param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_res8;
  
  uVar5 = (ulonglong)param_3;
  *(uint *)((longlong)param_1 + 0x1c) = param_3;
  lVar2 = FUN_14518ef70((longlong)(int)param_3 * 0x28);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->mutex");
  }
  lVar2 = 0;
  if ((*param_1 != 0) && (uVar4 = uVar5, lVar3 = lVar2, 0 < (int)param_3)) {
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*param_1 + lVar3),0,0);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 != 0);
  }
  local_res8 = (longlong)(int)param_3;
  lVar3 = FUN_14518ef70(local_res8 * 8);
  param_1[1] = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->cond");
  }
  if ((param_1[1] != 0) && (uVar4 = uVar5, lVar3 = lVar2, 0 < (int)param_3)) {
    do {
      InitializeConditionVariable((PCONDITION_VARIABLE)(param_1[1] + lVar3));
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_14518ef70(0x28);
  param_1[6] = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->lf_mutex");
  }
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)param_1[6],0,0);
  lVar3 = FUN_14518ef70((longlong)(int)param_3 * 0x28);
  param_1[7] = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->recon_done_mutex");
  }
  if ((param_1[7] != 0) && (uVar4 = uVar5, lVar3 = lVar2, 0 < (int)param_3)) {
    do {
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(param_1[7] + lVar3),0,0);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_14518ef70((longlong)(int)param_3 * 8);
  param_1[8] = lVar3;
  if (lVar3 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->recon_done_cond");
  }
  if ((param_1[8] != 0) && (0 < (int)param_3)) {
    do {
      InitializeConditionVariable((PCONDITION_VARIABLE)(param_1[8] + lVar2));
      lVar2 = lVar2 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar2 = FUN_14518ef70((longlong)param_5 * 0x1b8);
  param_1[4] = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->lfdata");
  }
  *(int *)(param_1 + 5) = param_5;
  *(int *)((longlong)param_1 + 0x2c) = param_5;
  lVar2 = FUN_14518ef70((longlong)(int)param_3 * 4);
  param_1[2] = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->cur_sb_col");
  }
  lVar2 = FUN_14518ef70(((longlong)(*(int *)(param_2 + 0x428) + 7) & 0x3ffffffffffffff8U) >> 1);
  param_1[9] = lVar2;
  if (lVar2 == 0) {
    FUN_144d82810(param_2,2,"Failed to allocate lf_sync->num_tiles_done");
  }
  if (0x27f < param_4) {
    if (0x500 < param_4) {
      uVar1 = 8;
      if (param_4 < 0x1001) {
        uVar1 = 4;
      }
      *(undefined4 *)(param_1 + 3) = uVar1;
      return;
    }
    *(undefined4 *)(param_1 + 3) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 145476140 FUN_145476140 body=259 status=ok
// SIG undefined FUN_145476140(void)

void FUN_145476140(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar2 = iVar1;
    if (0 < *(int *)((longlong)param_1 + 0x1c)) {
      do {
        DeleteCriticalSection((LPCRITICAL_SECTION)(*param_1 + (longlong)iVar2 * 0x28));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((longlong)param_1 + 0x1c));
    }
    FUN_14518f040(*param_1);
  }
  if (param_1[1] != 0) {
    FUN_14518f040();
  }
  if (param_1[7] != 0) {
    if (0 < *(int *)((longlong)param_1 + 0x1c)) {
      do {
        DeleteCriticalSection((LPCRITICAL_SECTION)(param_1[7] + (longlong)iVar1 * 0x28));
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((longlong)param_1 + 0x1c));
    }
    FUN_14518f040(param_1[7]);
  }
  if ((LPCRITICAL_SECTION)param_1[6] != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)param_1[6]);
    FUN_14518f040(param_1[6]);
  }
  if (param_1[8] != 0) {
    FUN_14518f040();
  }
  FUN_14518f040(param_1[4]);
  FUN_14518f040(param_1[2]);
  FUN_14518f040(param_1[9]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 145476250 FUN_145476250 body=553 status=ok
// SIG undefined FUN_145476250(void)

void FUN_145476250(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,int param_6,longlong param_7,uint param_8,longlong param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_4 != 0) {
    uVar10 = 0;
    iVar1 = *(int *)(param_2 + 0x428);
    uVar6 = uVar10;
    if ((param_6 != 0) && (uVar6 = 0, 8 < iVar1)) {
      uVar6 = (ulonglong)(iVar1 >> 1 & 0xfffffff8);
      if (iVar1 < 0x48) {
        iVar1 = 8;
      }
      else {
        iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
      }
    }
    iVar8 = (int)uVar6;
    FUN_145474180(param_2,param_4);
    lVar2 = FUN_14546f0a0();
    uVar9 = *(int *)(param_2 + 0x428) + 7 >> 3;
    uVar4 = 1 << ((byte)*(undefined4 *)(param_2 + 0x4600) & 0x1f);
    uVar5 = uVar9;
    if ((int)uVar4 < (int)uVar9) {
      uVar5 = uVar4;
    }
    if ((int)param_8 < (int)uVar5) {
      uVar5 = param_8;
    }
    if (((*(int *)(param_9 + 0x18) == 0) || (uVar9 != *(uint *)(param_9 + 0x1c))) ||
       (*(int *)(param_9 + 0x28) < (int)uVar5)) {
      FUN_145476140(param_9);
      FUN_145475e60(param_9,param_2,uVar9,*(undefined4 *)(param_2 + 0x168),uVar5);
    }
    *(uint *)(param_9 + 0x2c) = uVar5;
    memset(*(void **)(param_9 + 0x10),-1,(longlong)(int)uVar9 << 2);
    lVar3 = (longlong)(int)uVar5;
    if (0 < (int)uVar5) {
      plVar11 = (longlong *)(param_7 + 0x18);
      uVar12 = uVar10;
      do {
        lVar7 = *(longlong *)(param_9 + 0x20) + uVar10;
        plVar11[-1] = (longlong)FUN_1454771d0;
        *plVar11 = param_9;
        plVar11[1] = lVar7;
        FUN_145474ae0(lVar7,param_1,param_2,param_3);
        *(int *)(lVar7 + 0x1ac) = iVar1 + iVar8;
        *(undefined4 *)(lVar7 + 0x1b0) = param_5;
        *(int *)(lVar7 + 0x1a8) = (int)uVar6;
        if ((int)uVar12 == uVar5 - 1) {
          (**(code **)(lVar2 + 0x20))();
        }
        else {
          (**(code **)(lVar2 + 0x18))(plVar11 + -3);
        }
        uVar12 = (ulonglong)((int)uVar12 + 1);
        uVar6 = (ulonglong)((int)uVar6 + 8);
        plVar11 = plVar11 + 6;
        uVar10 = uVar10 + 0x1b8;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar6 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      do {
        (**(code **)(lVar2 + 0x10))(param_7);
        param_7 = param_7 + 0x30;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 145476480 FUN_145476480 body=167 status=ok
// SIG undefined FUN_145476480(void)

void FUN_145476480(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_2 + 0x428) + 7 >> 3;
    if (((*(int *)(param_1 + 0x18) == 0) || (iVar1 != *(int *)(param_1 + 0x1c))) ||
       (*(int *)(param_1 + 0x28) < param_4)) {
      FUN_145476140();
      FUN_145475e60(param_1,param_2,iVar1,*(undefined4 *)(param_2 + 0x168),param_4);
    }
    memset(*(void **)(param_1 + 0x10),-1,(longlong)iVar1 << 2);
    *(undefined4 *)(param_1 + 0x50) = 0;
    memset(*(void **)(param_1 + 0x48),0,(longlong)iVar1 << 2);
    *(undefined4 *)(param_2 + 0x462c) = 0;
  }
  return;
}



// FUNCTION 145476530 FUN_145476530 body=423 status=ok
// SIG undefined FUN_145476530(void)

void FUN_145476530(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int local_res8;
  
  lVar5 = param_1[1];
  while( true ) {
    uVar2 = *(undefined4 *)(lVar5 + 0x4600);
    iVar3 = *(int *)(lVar5 + 0x428);
    EnterCriticalSection((LPCRITICAL_SECTION)param_2[6]);
    iVar4 = *(int *)(lVar5 + 0x462c);
    iVar6 = -1;
    if (iVar4 < iVar3) {
      local_res8 = iVar4 >> 3;
      *(int *)(lVar5 + 0x462c) = iVar4 + 8;
      iVar6 = iVar4;
      if (iVar4 + 8 < iVar3) {
        local_res8 = local_res8 + 1;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_2[6]);
    if (iVar6 == -1) break;
    lVar7 = (longlong)local_res8;
    lVar1 = lVar7 * 0x28;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2[7] + lVar1));
    if (*(int *)(param_2[9] + lVar7 * 4) < 1 << ((byte)uVar2 & 0x1f)) {
      SleepConditionVariableCS
                ((PCONDITION_VARIABLE)(param_2[8] + lVar7 * 8),
                 (PCRITICAL_SECTION)(param_2[7] + lVar1),0xffffffff);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2[7] + lVar1));
    EnterCriticalSection((LPCRITICAL_SECTION)param_2[6]);
    if ((int)param_2[10] != 0) {
      lVar5 = (longlong)iVar6 >> 3;
      EnterCriticalSection((LPCRITICAL_SECTION)(*param_2 + lVar5 * 0x28));
      *(undefined4 *)(param_2[2] + lVar5 * 4) = 0x7fffffff;
      WakeConditionVariable((PCONDITION_VARIABLE)(param_2[1] + lVar5 * 8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_2 + lVar5 * 0x28));
      LeaveCriticalSection((LPCRITICAL_SECTION)param_2[6]);
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_2[6]);
    if (*(int *)(lVar5 + 0x428) <= iVar6) {
      return;
    }
    *(int *)((longlong)param_1 + 0x1ac) = iVar6 + 8;
    *(int *)(param_1 + 0x35) = iVar6;
    FUN_145476e20(*param_1,param_1[1],param_1 + 2,iVar6,iVar6 + 8,*(undefined4 *)(param_1 + 0x36),
                  param_2);
  }
  return;
}



// FUNCTION 1454766e0 FUN_1454766e0 body=171 status=ok
// SIG undefined FUN_1454766e0(void)

void FUN_1454766e0(longlong param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  PCONDITION_VARIABLE ConditionVariable;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | param_5;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x30));
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x38) + lVar2 * 0x28));
  piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + lVar2 * 4);
  *piVar1 = *piVar1 + 1;
  if (param_2 == *(int *)(*(longlong *)(param_1 + 0x48) + lVar2 * 4)) {
    ConditionVariable = (PCONDITION_VARIABLE)(*(longlong *)(param_1 + 0x40) + lVar2 * 8);
    if (param_4 == 0) {
      WakeConditionVariable(ConditionVariable);
    }
    else {
      WakeAllConditionVariable(ConditionVariable);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145476784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x38) + lVar2 * 0x28));
  return;
}



// FUNCTION 145476790 FUN_145476790 body=57 status=ok
// SIG undefined FUN_145476790(void)

void FUN_145476790(undefined8 *param_1,undefined8 param_2)

{
  FUN_145476e20(*param_1,param_1[1],param_1 + 2,*(undefined4 *)(param_1 + 0x35),
                *(undefined4 *)((longlong)param_1 + 0x1ac),*(undefined4 *)(param_1 + 0x36),param_2);
  return;
}



// FUNCTION 1454767d0 FUN_1454767d0 body=1608 status=ok
// SIG undefined FUN_1454767d0(void)

void FUN_1454767d0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  piVar4 = (int *)(param_1 + 4);
  lVar8 = 4;
  lVar10 = param_2 - param_1;
  lVar3 = 4;
  do {
    piVar4[-1] = piVar4[-1] + *(int *)(lVar10 + -4 + (longlong)piVar4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4[1] = piVar4[1] + *(int *)(lVar10 + 4 + (longlong)piVar4);
    piVar4[2] = piVar4[2] + *(int *)(lVar10 + 8 + (longlong)piVar4);
    piVar4[3] = piVar4[3] + *(int *)(lVar10 + 0xc + (longlong)piVar4);
    piVar4[4] = piVar4[4] + *(int *)(lVar10 + 0x10 + (longlong)piVar4);
    piVar4[5] = piVar4[5] + *(int *)(lVar10 + 0x14 + (longlong)piVar4);
    piVar4[6] = piVar4[6] + *(int *)(lVar10 + 0x18 + (longlong)piVar4);
    piVar4[7] = piVar4[7] + *(int *)(lVar10 + 0x1c + (longlong)piVar4);
    piVar4[8] = piVar4[8] + *(int *)(lVar10 + 0x20 + (longlong)piVar4);
    piVar4 = piVar4 + 10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0xa4);
  lVar3 = 10;
  do {
    piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4[1] = piVar4[1] + *(int *)((longlong)piVar4 + lVar10 + 4);
    piVar4[2] = piVar4[2] + *(int *)((longlong)piVar4 + lVar10 + 8);
    piVar4[3] = piVar4[3] + *(int *)((longlong)piVar4 + lVar10 + 0xc);
    piVar4[4] = piVar4[4] + *(int *)((longlong)piVar4 + lVar10 + 0x10);
    piVar4[5] = piVar4[5] + *(int *)((longlong)piVar4 + lVar10 + 0x14);
    piVar4[6] = piVar4[6] + *(int *)((longlong)piVar4 + lVar10 + 0x18);
    piVar4[7] = piVar4[7] + *(int *)((longlong)piVar4 + lVar10 + 0x1c);
    piVar4[8] = piVar4[8] + *(int *)((longlong)piVar4 + lVar10 + 0x20);
    piVar4 = piVar4 + 10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0x234);
  lVar3 = 0x10;
  do {
    piVar4[-1] = piVar4[-1] + *(int *)(lVar10 + -4 + (longlong)piVar4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4[1] = piVar4[1] + *(int *)(lVar10 + 4 + (longlong)piVar4);
    piVar4[2] = piVar4[2] + *(int *)(lVar10 + 8 + (longlong)piVar4);
    piVar4 = piVar4 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (param_3 == 0) {
    piVar4 = (int *)(param_1 + 0x2734);
    lVar3 = 4;
    do {
      lVar7 = 2;
      do {
        lVar12 = 2;
        do {
          lVar11 = 6;
          do {
            piVar4[-1] = piVar4[-1] + *(int *)(lVar10 + -4 + (longlong)piVar4);
            *piVar4 = *piVar4 + *(int *)(lVar10 + (longlong)piVar4);
            piVar4[1] = piVar4[1] + *(int *)(lVar10 + 4 + (longlong)piVar4);
            piVar4[2] = piVar4[2] + *(int *)(lVar10 + 8 + (longlong)piVar4);
            piVar4[3] = piVar4[3] + *(int *)(lVar10 + 0xc + (longlong)piVar4);
            piVar4[4] = piVar4[4] + *(int *)(lVar10 + 0x10 + (longlong)piVar4);
            piVar4 = piVar4 + 6;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  else {
    piVar4 = (int *)(param_1 + 0x2730);
    piVar6 = (int *)(param_1 + 0x334);
    lVar3 = 4;
    do {
      lVar7 = 2;
      do {
        lVar12 = 2;
        do {
          lVar11 = 6;
          do {
            lVar9 = 6;
            do {
              *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
              piVar4 = piVar4 + 1;
              piVar6[-1] = piVar6[-1] + *(int *)((longlong)piVar6 + lVar10 + -4);
              *piVar6 = *piVar6 + *(int *)((longlong)piVar6 + lVar10);
              piVar6[1] = piVar6[1] + *(int *)((longlong)piVar6 + lVar10 + 4);
              piVar6[2] = piVar6[2] + *(int *)((longlong)piVar6 + lVar10 + 8);
              piVar6 = piVar6 + 4;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  piVar4 = (int *)(param_1 + 0x3034);
  lVar3 = 4;
  do {
    piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4[1] = piVar4[1] + *(int *)((longlong)piVar4 + lVar10 + 4);
    piVar4 = piVar4 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0x3064);
  lVar3 = 7;
  do {
    piVar4[-1] = piVar4[-1] + *(int *)(lVar10 + -4 + (longlong)piVar4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4[1] = piVar4[1] + *(int *)(lVar10 + 4 + (longlong)piVar4);
    piVar4[2] = piVar4[2] + *(int *)(lVar10 + 8 + (longlong)piVar4);
    piVar4 = piVar4 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0x30d4);
  do {
    piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4 = piVar4 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar4 = (int *)(param_1 + 0x30f4);
  lVar8 = 5;
  lVar3 = 5;
  do {
    piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4 = piVar4 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0x311c);
  lVar3 = 5;
  do {
    lVar7 = 2;
    do {
      piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
      *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
      piVar4 = piVar4 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0x316c);
  do {
    piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4 = piVar4 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar3 = 2;
  piVar4 = (int *)(param_1 + 0x3194);
  piVar6 = (int *)(param_1 + 0x31b4);
  piVar5 = (int *)(param_1 + 0x31cc);
  do {
    piVar1 = piVar6 + 3;
    piVar4[-1] = piVar4[-1] + *(int *)(lVar10 + -4 + (longlong)piVar4);
    piVar2 = piVar5 + 2;
    *piVar4 = *piVar4 + *(int *)(lVar10 + (longlong)piVar4);
    piVar4[1] = piVar4[1] + *(int *)(lVar10 + 4 + (longlong)piVar4);
    piVar4[2] = piVar4[2] + *(int *)(lVar10 + 8 + (longlong)piVar4);
    piVar4 = piVar4 + 4;
    piVar6[-1] = piVar6[-1] + *(int *)(lVar10 + -0x10 + (longlong)piVar1);
    *piVar6 = *piVar6 + *(int *)(lVar10 + -0xc + (longlong)piVar1);
    piVar6[1] = piVar6[1] + *(int *)(lVar10 + -8 + (longlong)piVar1);
    piVar5[-1] = piVar5[-1] + *(int *)(lVar10 + -0xc + (longlong)piVar2);
    *piVar5 = *piVar5 + *(int *)(lVar10 + -8 + (longlong)piVar2);
    lVar3 = lVar3 + -1;
    piVar6 = piVar1;
    piVar5 = piVar2;
  } while (lVar3 != 0);
  piVar4 = (int *)(param_1 + 0x31ec);
  *(int *)(param_1 + 0x31d8) = *(int *)(param_1 + 0x31d8) + *(int *)(param_2 + 0x31d8);
  lVar3 = 3;
  *(int *)(param_1 + 0x31dc) = *(int *)(param_1 + 0x31dc) + *(int *)(param_2 + 0x31dc);
  *(int *)(param_1 + 0x31e0) = *(int *)(param_1 + 0x31e0) + *(int *)(param_2 + 0x31e0);
  *(int *)(&DAT_000031e4 + param_1) =
       *(int *)(&DAT_000031e4 + param_1) + *(int *)(&DAT_000031e4 + param_2);
  do {
    piVar4[-1] = piVar4[-1] + *(int *)((longlong)piVar4 + lVar10 + -4);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4 = piVar4 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  piVar4 = (int *)(&DAT_000032bc + param_1);
  *(int *)(param_1 + 0x3200) = *(int *)(param_1 + 0x3200) + *(int *)(param_2 + 0x3200);
  lVar3 = 2;
  *(int *)(&DAT_00003204 + param_1) =
       *(int *)(&DAT_00003204 + param_1) + *(int *)(&DAT_00003204 + param_2);
  *(int *)(param_1 + 0x3208) = *(int *)(param_1 + 0x3208) + *(int *)(param_2 + 0x3208);
  *(int *)(param_1 + 0x320c) = *(int *)(param_1 + 0x320c) + *(int *)(param_2 + 0x320c);
  do {
    piVar6 = piVar4 + -0x1e;
    piVar4[-0x2b] = piVar4[-0x2b] + *(int *)((longlong)piVar4 + lVar10 + -0xac);
    lVar8 = 2;
    piVar4[4] = piVar4[4] + *(int *)((longlong)piVar4 + lVar10 + 0x10);
    piVar4[6] = piVar4[6] + *(int *)((longlong)piVar4 + lVar10 + 0x18);
    piVar4[-0x2a] = piVar4[-0x2a] + *(int *)((longlong)piVar4 + lVar10 + -0xa8);
    piVar4[5] = piVar4[5] + *(int *)((longlong)piVar4 + lVar10 + 0x14);
    piVar4[7] = piVar4[7] + *(int *)((longlong)piVar4 + lVar10 + 0x1c);
    piVar4[-0x29] = piVar4[-0x29] + *(int *)((longlong)piVar4 + lVar10 + -0xa4);
    piVar4[-0x28] = piVar4[-0x28] + *(int *)((longlong)piVar4 + lVar10 + -0xa0);
    piVar4[-0x27] = piVar4[-0x27] + *(int *)((longlong)piVar4 + lVar10 + -0x9c);
    piVar4[-0x26] = piVar4[-0x26] + *(int *)((longlong)piVar4 + lVar10 + -0x98);
    piVar4[-0x25] = piVar4[-0x25] + *(int *)((longlong)piVar4 + lVar10 + -0x94);
    piVar4[-0x24] = piVar4[-0x24] + *(int *)((longlong)piVar4 + lVar10 + -0x90);
    piVar4[-0x23] = piVar4[-0x23] + *(int *)((longlong)piVar4 + lVar10 + -0x8c);
    piVar4[-0x22] = piVar4[-0x22] + *(int *)((longlong)piVar4 + lVar10 + -0x88);
    piVar4[-0x21] = piVar4[-0x21] + *(int *)((longlong)piVar4 + lVar10 + -0x84);
    piVar4[-0x20] = piVar4[-0x20] + *(int *)((longlong)piVar4 + lVar10 + -0x80);
    piVar4[-0x1f] = piVar4[-0x1f] + *(int *)((longlong)piVar4 + lVar10 + -0x7c);
    piVar5 = piVar4 + -8;
    do {
      *piVar6 = *piVar6 + *(int *)(lVar10 + (longlong)piVar6);
      piVar6 = piVar6 + 1;
      *piVar5 = *piVar5 + *(int *)((longlong)piVar5 + lVar10);
      piVar5[1] = piVar5[1] + *(int *)((longlong)piVar5 + lVar10 + 4);
      piVar5[2] = piVar5[2] + *(int *)((longlong)piVar5 + lVar10 + 8);
      piVar5[3] = piVar5[3] + *(int *)((longlong)piVar5 + lVar10 + 0xc);
      lVar8 = lVar8 + -1;
      piVar5 = piVar5 + 4;
    } while (lVar8 != 0);
    lVar8 = 10;
    piVar6 = (int *)((param_1 - param_2) + -0x70 + (longlong)piVar4 + lVar10);
    do {
      *piVar6 = *piVar6 + *(int *)(lVar10 + (longlong)piVar6);
      piVar6[1] = piVar6[1] + *(int *)(lVar10 + 4 + (longlong)piVar6);
      piVar6 = piVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *piVar4 = *piVar4 + *(int *)((longlong)piVar4 + lVar10);
    piVar4[1] = piVar4[1] + *(int *)((longlong)piVar4 + lVar10 + 4);
    piVar4[2] = piVar4[2] + *(int *)((longlong)piVar4 + lVar10 + 8);
    piVar4[3] = piVar4[3] + *(int *)((longlong)piVar4 + lVar10 + 0xc);
    piVar4 = piVar4 + 0x33;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 145476e20 FUN_145476e20 body=942 status=ok
// SIG undefined FUN_145476e20(void)

ulonglong FUN_145476e20(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int param_5
                       ,uint param_6,longlong *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  BOOL BVar4;
  ulonglong uVar5;
  ulonglong extraout_RAX;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  LPCRITICAL_SECTION p_Var12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int local_res20;
  
  uVar5 = (ulonglong)param_6;
  uVar13 = 3;
  if (param_6 != 0) {
    uVar13 = 1;
  }
  local_res20 = 1;
  iVar1 = *(int *)((longlong)param_7 + 0x2c);
  iVar8 = *(int *)(param_2 + 0x430);
  iVar14 = iVar8 + 7 >> 3;
  if (param_6 == 0) {
    uVar10 = *(uint *)(param_3 + 0x94);
    uVar5 = (ulonglong)uVar10;
    if (uVar10 == 1) {
      if (*(int *)(param_3 + 0x90) == 1) {
        local_res20 = 0;
        goto LAB_145476ec6;
      }
    }
    else if ((uVar10 == 0) && (local_res20 = 1, *(int *)(param_3 + 0x90) == 0)) goto LAB_145476ec6;
    local_res20 = 2;
  }
LAB_145476ec6:
  if (param_4 < param_5) {
    do {
      iVar16 = 0;
      iVar2 = *(int *)(param_2 + 0x434);
      lVar3 = *(longlong *)(param_2 + 0x4d0);
      iVar6 = param_4 >> 3;
      uVar5 = (ulonglong)(iVar6 * *(int *)(param_2 + 0x11a0));
      lVar15 = uVar5 * 0xa0 + *(longlong *)(param_2 + 0x1198);
      if (0 < iVar8) {
        do {
          lVar11 = (longlong)iVar6;
          uVar10 = iVar16 >> 3;
          if ((iVar6 != 0) && (iVar8 = (int)param_7[3], (uVar10 & iVar8 - 1U) == 0)) {
            iVar7 = 0;
            p_Var12 = (LPCRITICAL_SECTION)(*param_7 + (lVar11 + -1) * 0x28);
            do {
              BVar4 = TryEnterCriticalSection(p_Var12);
              if (BVar4 != 0) goto LAB_145476fb1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < 4000);
            EnterCriticalSection(p_Var12);
LAB_145476fb1:
            iVar7 = *(int *)(param_7[2] + -4 + lVar11 * 4) - iVar8;
            while (iVar7 < (int)uVar10) {
              SleepConditionVariableCS
                        ((PCONDITION_VARIABLE)(param_7[1] + (lVar11 + -1) * 8),p_Var12,0xffffffff);
              iVar7 = *(int *)(param_7[2] + -4 + lVar11 * 4) - iVar8;
            }
            LeaveCriticalSection(p_Var12);
          }
          FUN_145479320(param_3,param_1,param_4,iVar16);
          FUN_1454745e0(param_2,param_4,iVar16,lVar15);
          FUN_145473420(param_2,param_3,param_4,lVar15);
          if (1 < uVar13) {
            uVar5 = (ulonglong)(uVar13 - 1);
            lVar9 = param_3;
            do {
              lVar9 = lVar9 + 0x88;
              if (local_res20 == 0) {
                FUN_145473650(param_2,lVar9,param_4,lVar15);
              }
              else if (local_res20 == 1) {
                FUN_145473420(param_2,lVar9,param_4,lVar15);
              }
              else if (local_res20 == 2) {
                FUN_145473950(param_2,lVar9,
                              lVar3 + (longlong)(param_4 * iVar2) * 8 + (longlong)iVar16 * 8,param_4
                              ,iVar16);
              }
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          iVar8 = (int)param_7[3];
          if ((int)uVar10 < iVar14 + -1) {
            lVar9 = CONCAT44(iVar16 >> 0x1f,uVar10);
            uVar5 = lVar9 / (longlong)iVar8 & 0xffffffff;
            if ((int)(lVar9 % (longlong)iVar8) == 0) goto LAB_145477106;
          }
          else {
            uVar10 = iVar8 + iVar14;
LAB_145477106:
            p_Var12 = (LPCRITICAL_SECTION)(*param_7 + lVar11 * 0x28);
            iVar8 = 0;
            do {
              BVar4 = TryEnterCriticalSection(p_Var12);
              if (BVar4 != 0) goto LAB_145477140;
              iVar8 = iVar8 + 1;
            } while (iVar8 < 4000);
            EnterCriticalSection(p_Var12);
LAB_145477140:
            *(uint *)(param_7[2] + lVar11 * 4) = uVar10;
            WakeConditionVariable((PCONDITION_VARIABLE)(param_7[1] + lVar11 * 8));
            LeaveCriticalSection((LPCRITICAL_SECTION)(*param_7 + lVar11 * 0x28));
            uVar5 = extraout_RAX;
          }
          iVar8 = *(int *)(param_2 + 0x430);
          iVar16 = iVar16 + 8;
          lVar15 = lVar15 + 0xa0;
        } while (iVar16 < iVar8);
      }
      param_4 = param_4 + iVar1 * 8;
    } while (param_4 < param_5);
  }
  return uVar5;
}



// FUNCTION 1454771d0 FUN_1454771d0 body=65 status=ok
// SIG undefined FUN_1454771d0(void)

undefined8 FUN_1454771d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_145476e20(*param_2,param_2[1],param_2 + 2,*(undefined4 *)(param_2 + 0x35),
                *(undefined4 *)((longlong)param_2 + 0x1ac),*(undefined4 *)(param_2 + 0x36),param_1);
  return 1;
}



// FUNCTION 145477220 FUN_145477220 body=157 status=ok
// SIG undefined FUN_145477220(void)

ulonglong FUN_145477220(int param_1,int param_2,int param_3)

{
  if (param_3 == 8) {
    param_1 = param_1 + param_2;
    if (param_1 < 0) {
      return 4;
    }
    if (0xff < param_1) {
      param_1 = 0xff;
    }
    return (ulonglong)(ushort)(&DAT_149d531f0)[param_1];
  }
  if (param_3 != 10) {
    if (param_3 != 0xc) {
      return 0xffffffff;
    }
    param_1 = param_1 + param_2;
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (0xff < param_1) {
      param_1 = 0xff;
    }
    return (ulonglong)(ushort)(&DAT_149d535f0)[param_1];
  }
  param_1 = param_1 + param_2;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xff < param_1) {
    param_1 = 0xff;
  }
  return (ulonglong)(ushort)(&DAT_149d533f0)[param_1];
}



// FUNCTION 1454772c0 FUN_1454772c0 body=157 status=ok
// SIG undefined FUN_1454772c0(void)

ulonglong FUN_1454772c0(int param_1,int param_2,int param_3)

{
  if (param_3 == 8) {
    param_1 = param_1 + param_2;
    if (param_1 < 0) {
      return 4;
    }
    if (0xff < param_1) {
      param_1 = 0xff;
    }
    return (ulonglong)(ushort)(&DAT_149d537f0)[param_1];
  }
  if (param_3 != 10) {
    if (param_3 != 0xc) {
      return 0xffffffff;
    }
    param_1 = param_1 + param_2;
    if (param_1 < 0) {
      param_1 = 0;
    }
    else if (0xff < param_1) {
      param_1 = 0xff;
    }
    return (ulonglong)(ushort)(&DAT_149d53bf0)[param_1];
  }
  param_1 = param_1 + param_2;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xff < param_1) {
    param_1 = 0xff;
  }
  return (ulonglong)(ushort)(&DAT_149d539f0)[param_1];
}



// FUNCTION 145477360 FUN_145477360 body=57 status=ok
// SIG undefined FUN_145477360(void)

int FUN_145477360(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*param_1 == '\0') || ((param_1[(longlong)param_2 * 4 + 0x50] & 1U) == 0)) {
    return param_3;
  }
  iVar1 = (int)*(short *)(param_1 + (longlong)param_2 * 8 + 0x10);
  if (param_1[3] != '\x01') {
    iVar1 = param_3 + *(short *)(param_1 + (longlong)param_2 * 8 + 0x10);
  }
  if (iVar1 < 0) {
    return 0;
  }
  if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}



// FUNCTION 1454773a0 FUN_1454773a0 body=156 status=ok
// SIG undefined FUN_1454773a0(void)

bool FUN_1454773a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x1d0);
  lVar3 = *(longlong *)(param_2 + 0x1c8);
  if (lVar1 == 0) {
    if (lVar3 == 0) {
      return true;
    }
  }
  else if (lVar3 != 0) {
    if (*(char *)(lVar1 + 9) < '\x01') {
      if (*(char *)(lVar3 + 9) < '\x01') {
        return (*(char *)(lVar3 + 8) == *(char *)(param_1 + 0x121c)) !=
               (*(char *)(lVar1 + 8) == *(char *)(param_1 + 0x121c));
      }
      cVar2 = *(char *)(lVar1 + 8);
    }
    else {
      if ('\0' < *(char *)(lVar3 + 9)) {
        return (bool)4;
      }
      cVar2 = *(char *)(lVar3 + 8);
    }
    if (cVar2 == *(char *)(param_1 + 0x121c)) {
      return (bool)3;
    }
    if (cVar2 < '\x01') {
      return (bool)3;
    }
    return (bool)2;
  }
  if (lVar1 != 0) {
    lVar3 = lVar1;
  }
  if ('\0' < *(char *)(lVar3 + 9)) {
    return (bool)3;
  }
  return *(char *)(lVar3 + 8) == *(char *)(param_1 + 0x121c);
}



// FUNCTION 145477440 FUN_145477440 body=546 status=ok
// SIG undefined FUN_145477440(void)

undefined4 FUN_145477440(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  
  lVar8 = *(longlong *)(param_2 + 0x1d0);
  lVar9 = *(longlong *)(param_2 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x1164 + (longlong)*(char *)(param_1 + 0x121c) * 4);
  if (lVar8 == 0) {
    if (lVar9 == 0) {
      return 2;
    }
  }
  else if (lVar9 != 0) {
    cVar6 = *(char *)(lVar8 + 8);
    cVar10 = *(char *)(lVar9 + 8);
    if (cVar6 < '\x01') {
      if (cVar10 < '\x01') {
        return 2;
      }
    }
    else if ('\0' < cVar10) {
      cVar1 = *(char *)(lVar8 + 9);
      cVar2 = *(char *)(lVar9 + 9);
      if ('\0' < cVar1) {
        cVar6 = *(char *)((ulonglong)(iVar4 == 0) + 8 + lVar8);
      }
      if ('\0' < cVar2) {
        cVar10 = *(char *)((ulonglong)(iVar4 == 0) + 8 + lVar9);
      }
      if ((cVar6 == cVar10) && (*(char *)(param_1 + 0x121e) == cVar6)) {
        return 0;
      }
      if (cVar2 < '\x01') {
        if (cVar1 < '\x01') {
          if ((cVar6 == *(char *)(param_1 + 0x121c)) && (cVar10 == *(char *)(param_1 + 0x121d))) {
            return 4;
          }
          if ((cVar10 == *(char *)(param_1 + 0x121c)) && (cVar6 == *(char *)(param_1 + 0x121d))) {
            return 4;
          }
          uVar7 = 1;
          if (cVar6 == cVar10) {
            uVar7 = 3;
          }
          return uVar7;
        }
      }
      else if ('\0' < cVar1) {
        uVar7 = 2;
        if (cVar6 == cVar10) {
          uVar7 = 4;
        }
        return uVar7;
      }
      cVar3 = *(char *)(param_1 + 0x121e);
      cVar5 = cVar6;
      if ('\0' < cVar1) {
        cVar5 = cVar10;
      }
      if ('\0' < cVar2) {
        cVar6 = cVar10;
      }
      if (cVar6 == cVar3) {
        if (cVar5 != cVar3) {
          return 1;
        }
      }
      else if (cVar5 == cVar3) {
        return 2;
      }
      return 4;
    }
    if (cVar6 < '\x01') {
      lVar8 = lVar9;
    }
    if ('\0' < *(char *)(lVar8 + 9)) {
      uVar7 = 1;
      if (*(char *)((9 - (ulonglong)(iVar4 != 0)) + lVar8) != *(char *)(param_1 + 0x121e)) {
        uVar7 = 3;
      }
      return uVar7;
    }
    uVar7 = 1;
    if (*(char *)(lVar8 + 8) != *(char *)(param_1 + 0x121e)) {
      uVar7 = 3;
    }
    return uVar7;
  }
  if (lVar8 != 0) {
    lVar9 = lVar8;
  }
  if (*(char *)(lVar9 + 8) < '\x01') {
    return 2;
  }
  if (*(char *)(lVar9 + 9) < '\x01') {
    uVar7 = 0;
    if (*(char *)(lVar9 + 8) != *(char *)(param_1 + 0x121e)) {
      uVar7 = 3;
    }
    return uVar7;
  }
  uVar7 = 0;
  if (*(char *)((9 - (ulonglong)(iVar4 != 0)) + lVar9) != *(char *)(param_1 + 0x121e)) {
    uVar7 = 4;
  }
  return uVar7;
}



// FUNCTION 145477670 FUN_145477670 body=325 status=ok
// SIG undefined FUN_145477670(void)

int FUN_145477670(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x1d0);
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  if (lVar9 == 0) {
    if (lVar4 == 0) {
      return 2;
    }
  }
  else if (lVar4 != 0) {
    cVar1 = *(char *)(lVar9 + 8);
    cVar2 = *(char *)(lVar4 + 8);
    if (cVar1 < '\x01') {
      if (cVar2 < '\x01') {
        return 2;
      }
    }
    else if ('\0' < cVar2) {
      cVar3 = *(char *)(lVar9 + 9);
      cVar5 = *(char *)(lVar4 + 9);
      if (cVar3 < '\x01') {
        if (cVar5 < '\x01') {
          iVar7 = 0;
          if (cVar2 == '\x01') {
            iVar7 = 2;
          }
          iVar8 = 0;
          if (cVar1 == '\x01') {
            iVar8 = 2;
          }
          return iVar8 + iVar7;
        }
LAB_145477726:
        cVar6 = cVar1;
        if ('\0' < cVar3) {
          cVar6 = cVar2;
          cVar2 = cVar1;
          cVar5 = cVar3;
        }
        if (cVar6 == '\x01') {
          if ((cVar2 != '\x01') && (cVar5 != '\x01')) {
            return 3;
          }
          return 4;
        }
        if ((cVar2 != '\x01') && (cVar5 != '\x01')) {
          return 0;
        }
        return 1;
      }
      if (cVar5 < '\x01') goto LAB_145477726;
      if (cVar1 == '\x01') {
        return 2;
      }
      if (cVar3 == '\x01') {
        return 2;
      }
      goto LAB_1454776f1;
    }
    if (cVar1 < '\x01') {
      lVar9 = lVar4;
    }
    cVar5 = *(char *)(lVar9 + 9);
    cVar2 = *(char *)(lVar9 + 8);
    if (cVar5 < '\x01') {
      iVar7 = 0;
      if (cVar2 == '\x01') {
        iVar7 = 4;
      }
      return iVar7;
    }
    goto LAB_1454776f1;
  }
  if (lVar9 != 0) {
    lVar4 = lVar9;
  }
  cVar2 = *(char *)(lVar4 + 8);
  if (cVar2 < '\x01') {
    return 2;
  }
  cVar5 = *(char *)(lVar4 + 9);
  if (cVar5 < '\x01') {
    iVar7 = 0;
    if (cVar2 == '\x01') {
      iVar7 = 4;
    }
    return iVar7;
  }
LAB_1454776f1:
  if ((cVar2 != '\x01') && (cVar5 != '\x01')) {
    return 1;
  }
  return 2;
}



// FUNCTION 1454777c0 FUN_1454777c0 body=452 status=ok
// SIG undefined FUN_1454777c0(void)

int FUN_1454777c0(longlong param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x1d0);
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  if (lVar8 == 0) {
    if (lVar5 == 0) {
      return 2;
    }
LAB_14547793d:
    if (lVar8 != 0) {
      lVar5 = lVar8;
    }
    cVar6 = *(char *)(lVar5 + 8);
    if (cVar6 < '\x01') {
      return 2;
    }
    if (cVar6 == '\x01') {
      if (*(char *)(lVar5 + 9) < '\x01') {
        return 2;
      }
      cVar2 = *(char *)(lVar5 + 9);
      goto LAB_145477979;
    }
    cVar2 = *(char *)(lVar5 + 9);
    if (cVar2 < '\x01') {
LAB_145477891:
      iVar4 = 0;
      if (cVar6 == '\x02') {
        iVar4 = 4;
      }
      return iVar4;
    }
  }
  else {
    if (lVar5 == 0) goto LAB_14547793d;
    cVar1 = *(char *)(lVar8 + 8);
    cVar6 = *(char *)(lVar5 + 8);
    if (cVar1 < '\x01') {
      if (cVar6 < '\x01') {
        return 2;
      }
LAB_1454778ff:
      if (cVar1 < '\x01') {
        lVar8 = lVar5;
      }
      cVar6 = *(char *)(lVar8 + 8);
      if ('\0' < *(char *)(lVar8 + 9)) {
        if (cVar6 == '\x02') {
          return 3;
        }
        if (*(char *)(lVar8 + 9) == '\x02') {
          return 3;
        }
        return 1;
      }
      if (cVar6 == '\x01') {
        return 3;
      }
      goto LAB_145477891;
    }
    if (cVar6 < '\x01') goto LAB_1454778ff;
    cVar7 = *(char *)(lVar8 + 9);
    cVar2 = *(char *)(lVar5 + 9);
    if (cVar7 < '\x01') {
      if ('\0' < cVar2) goto LAB_1454778a5;
      if (cVar1 == '\x01') {
        if (cVar6 == '\x01') {
          return 3;
        }
      }
      else if (cVar6 != '\x01') {
        iVar4 = 0;
        if (cVar6 == '\x02') {
          iVar4 = 2;
        }
        iVar9 = 0;
        if (cVar1 == '\x02') {
          iVar9 = 2;
        }
        return iVar9 + iVar4;
      }
      if (cVar1 != '\x01') {
        cVar6 = cVar1;
      }
      goto LAB_145477891;
    }
    if (cVar2 < '\x01') {
LAB_1454778a5:
      cVar3 = cVar1;
      if (cVar7 < '\x01') {
        cVar7 = cVar2;
        cVar3 = cVar6;
        cVar6 = cVar1;
      }
      if (cVar6 == '\x02') {
        if ((cVar3 != '\x02') && (cVar7 != '\x02')) {
          return 3;
        }
        return 4;
      }
      if (cVar6 == '\x03') {
        if ((cVar3 != '\x02') && (cVar7 != '\x02')) {
          return 0;
        }
      }
      else {
        if (cVar3 == '\x02') {
          return 3;
        }
        if (cVar7 == '\x02') {
          return 3;
        }
      }
      return 1;
    }
    if (cVar1 != cVar6) {
      return 2;
    }
    if (cVar7 != cVar2) {
      return 2;
    }
    if (cVar1 == '\x02') {
      return 3;
    }
    if (cVar7 == '\x02') {
      return 3;
    }
  }
  if (cVar6 == '\x02') {
    return 3;
  }
LAB_145477979:
  if (cVar2 == '\x02') {
    return 3;
  }
  return 0;
}



// FUNCTION 145477990 FUN_145477990 body=46 status=ok
// SIG undefined FUN_145477990(void)

undefined8 FUN_145477990(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = (int *)(param_1 + 0x116c);
  lVar2 = 1;
  do {
    if (*piVar1 != *(int *)(param_1 + 0x1168)) {
      return 1;
    }
    lVar2 = lVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (lVar2 < 3);
  return 0;
}



// FUNCTION 1454779c0 FUN_1454779c0 body=66 status=ok
// SIG undefined FUN_1454779c0(void)

void FUN_1454779c0(longlong param_1)

{
  if (*(int *)(param_1 + 0x1168) == *(int *)(param_1 + 0x116c)) {
    *(undefined2 *)(param_1 + 0x121c) = 0x103;
    *(undefined1 *)(param_1 + 0x121e) = 2;
    return;
  }
  *(undefined1 *)(param_1 + 0x121e) = 3;
  if (*(int *)(param_1 + 0x1168) == *(int *)(param_1 + 0x1170)) {
    *(undefined2 *)(param_1 + 0x121c) = 0x102;
    return;
  }
  *(undefined2 *)(param_1 + 0x121c) = 0x201;
  return;
}



// FUNCTION 145477a10 FUN_145477a10 body=94 status=ok
// SIG undefined FUN_145477a10(void)

ulonglong FUN_145477a10(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_14c7fe2c0 == 0;
  if (bVar2) {
    DAT_14c7fe2c0 = 1;
  }
  UNLOCK();
  if (bVar2) {
    uVar1 = FUN_145477be0();
    LOCK();
    DAT_14c7fe2c0 = DAT_14c7fe2c0 + 1;
    UNLOCK();
    return uVar1;
  }
  uVar1 = 2;
  LOCK();
  bVar2 = DAT_14c7fe2c0 == 2;
  if (bVar2) {
    DAT_14c7fe2c0 = 2;
  }
  else {
    uVar1 = (ulonglong)DAT_14c7fe2c0;
  }
  UNLOCK();
  while (!bVar2) {
    Sleep(0);
    uVar1 = 2;
    LOCK();
    bVar2 = DAT_14c7fe2c0 == 2;
    if (bVar2) {
      DAT_14c7fe2c0 = 2;
    }
    else {
      uVar1 = (ulonglong)DAT_14c7fe2c0;
    }
    UNLOCK();
  }
  return uVar1;
}



// FUNCTION 145477a70 FUN_145477a70 body=359 status=ok
// SIG undefined FUN_145477a70(void)

void FUN_145477a70(longlong param_1,byte param_2,byte param_3,undefined1 param_4,undefined8 param_5,
                  undefined4 param_6,undefined8 param_7,undefined4 param_8,int param_9,int param_10,
                  undefined4 param_11)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((param_10 != 0) || (uVar3 = 0, *(longlong *)(param_1 + 0x1d0) != 0)) {
    uVar3 = 1;
  }
  uVar2 = 1;
  if ((param_9 == 0) && (*(longlong *)(param_1 + 0x1c8) == 0)) {
    uVar2 = 0;
  }
  bVar1 = (1 << (param_3 & 0x1f)) + param_9 < 1 << (param_2 & 0x1f);
  if ((*(byte *)(*(longlong *)(param_1 + 0x210) + 0x98) & 8) != 0) {
    FUN_1454781a0(param_1,param_5,param_6,param_7,param_8,param_4,param_3,uVar3,uVar2,bVar1,
                  param_9 * 4,param_10 * 4,param_11,*(undefined4 *)(param_1 + 0x270));
    return;
  }
  FUN_145478850(param_1,param_5,param_6,param_7,param_8,param_4,param_3,uVar3,uVar2,bVar1,
                param_9 * 4,param_10 * 4,param_11);
  return;
}



// FUNCTION 145477be0 FUN_145477be0 body=1457 status=ok
// SIG undefined FUN_145477be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145477be0(void)

{
  _DAT_14c7fe2f0 = &LAB_142721b40;
  _DAT_14c7fe2f8 = &LAB_142721b60;
  _DAT_14c7fe300 = &LAB_142721ba0;
  _DAT_14c7fe308 = &LAB_142721bd0;
  _DAT_14c7fe310 = &LAB_142721c20;
  _DAT_14c7fe318 = &LAB_142721c60;
  _DAT_14c7fe320 = &LAB_142721cb0;
  _DAT_14c7fe328 = &LAB_142721d00;
  _DAT_14c7fe3b0 = &LAB_1427214f0;
  _DAT_14c7fe3b8 = DAT_14c7fb9a0;
  _DAT_14c7fe3c0 = DAT_14c7fb990;
  _DAT_14c7fe3c8 = DAT_14c7fb998;
  _DAT_14c7fe330 = &LAB_1427213e0;
  _DAT_14c7fe338 = &LAB_142721450;
  _DAT_14c7fe340 = DAT_14c7fb9a8;
  _DAT_14c7fe348 = DAT_14c7fb9b0;
  _DAT_14c7fe3d0 = DAT_14c7fb9c8;
  _DAT_14c7fe3d8 = DAT_14c7fb9d0;
  _DAT_14c7fe3e0 = DAT_14c7fb9b8;
  _DAT_14c7fe3e8 = DAT_14c7fb9c0;
  _DAT_14c7fe370 = FUN_14541df50;
  _DAT_14c7fe378 = FUN_14541e060;
  _DAT_14c7fe380 = FUN_14541df10;
  _DAT_14c7fe388 = FUN_14541df30;
  _DAT_14c7fe350 = FUN_14541e0c0;
  _DAT_14c7fe358 = FUN_14541e1d0;
  _DAT_14c7fe360 = FUN_14541e080;
  _DAT_14c7fe368 = FUN_14541e0a0;
  _DAT_14c7fe390 = DAT_14c7fbe20;
  _DAT_14c7fe398 = DAT_14c7fb988;
  _DAT_14c7fe3a0 = DAT_14c7fbe10;
  _DAT_14c7fe3a8 = DAT_14c7fbe18;
  _DAT_14c7fe3f0 = &LAB_142721d70;
  _DAT_14c7fe3f8 = &LAB_142721de0;
  _DAT_14c7fe400 = &LAB_142721e50;
  _DAT_14c7fe408 = &LAB_142721f10;
  _DAT_14c7fe410 = &LAB_142721770;
  _DAT_14c7fe418 = &LAB_1427217a0;
  _DAT_14c7fe420 = &LAB_142721910;
  _DAT_14c7fe428 = &LAB_142721af0;
  _DAT_14c7fe430 = &LAB_142721600;
  _DAT_14c7fe438 = &LAB_1427216b0;
  _DAT_14c7fe440 = &LAB_142721850;
  _DAT_14c7fe448 = &LAB_1427219f0;
  _DAT_14c7fe450 = &LAB_1427215c0;
  _DAT_14c7fe458 = &LAB_142721710;
  _DAT_14c7fe460 = &LAB_1427218b0;
  _DAT_14c7fe468 = &LAB_142721a70;
  _DAT_14c7fe470 = &LAB_142721570;
  _DAT_14c7fe478 = &LAB_142721640;
  _DAT_14c7fe480 = &LAB_1427217e0;
  _DAT_14c7fe488 = &LAB_142721950;
  _DAT_14c7fe4b0 = &LAB_142723ee0;
  _DAT_14c7fe4b8 = &LAB_142723f00;
  _DAT_14c7fe4c0 = &LAB_142723f40;
  _DAT_14c7fe4c8 = &LAB_142723f90;
  _DAT_14c7fe4d0 = &LAB_1455a4c90;
  _DAT_14c7fe4d8 = FUN_1455a4cd0;
  _DAT_14c7fe4e0 = FUN_1455a48d0;
  _DAT_14c7fe4e8 = FUN_1455a4a50;
  _DAT_14c7fe570 = &LAB_1455a4060;
  _DAT_14c7fe578 = DAT_14c7fba90;
  _DAT_14c7fe580 = DAT_14c7fba80;
  _DAT_14c7fe588 = DAT_14c7fba88;
  _DAT_14c7fe4f0 = DAT_14c7fbaa8;
  _DAT_14c7fe4f8 = DAT_14c7fbab0;
  _DAT_14c7fe500 = DAT_14c7fba98;
  _DAT_14c7fe508 = DAT_14c7fbaa0;
  _DAT_14c7fe590 = &LAB_1455a40e0;
  _DAT_14c7fe598 = DAT_14c7fbac8;
  _DAT_14c7fe5a0 = DAT_14c7fbab8;
  _DAT_14c7fe5a8 = DAT_14c7fbac0;
  _DAT_14c7fe530 = &LAB_1455a3e60;
  _DAT_14c7fe538 = DAT_14c7fba48;
  _DAT_14c7fe540 = DAT_14c7fba38;
  _DAT_14c7fe548 = DAT_14c7fba40;
  _DAT_14c7fe510 = &LAB_1455a3f10;
  _DAT_14c7fe518 = DAT_14c7fba60;
  _DAT_14c7fe520 = DAT_14c7fba50;
  _DAT_14c7fe528 = DAT_14c7fba58;
  _DAT_14c7fe550 = &LAB_1455a3fb0;
  _DAT_14c7fe558 = DAT_14c7fba78;
  _DAT_14c7fe560 = DAT_14c7fba68;
  _DAT_14c7fe568 = DAT_14c7fba70;
  _DAT_14c7fe5b0 = &LAB_142724020;
  _DAT_14c7fe5b8 = &LAB_1427240b0;
  _DAT_14c7fe5c0 = &LAB_142724160;
  _DAT_14c7fe5c8 = &LAB_142724230;
  _DAT_14c7fe5d0 = &LAB_1455a4270;
  _DAT_14c7fe5d8 = &LAB_1455a42b0;
  _DAT_14c7fe5e0 = &LAB_1455a4140;
  _DAT_14c7fe5e8 = FUN_1455a4230;
  _DAT_14c7fe5f0 = &LAB_1455a4800;
  _DAT_14c7fe5f8 = &LAB_1455a4850;
  _DAT_14c7fe600 = &LAB_1455a45f0;
  _DAT_14c7fe608 = FUN_1455a4720;
  _DAT_14c7fe610 = &LAB_1455a4520;
  _DAT_14c7fe618 = &LAB_1455a4570;
  _DAT_14c7fe620 = &LAB_1455a4310;
  _DAT_14c7fe628 = FUN_1455a4440;
  _DAT_14c7fe630 = &LAB_142723c70;
  _DAT_14c7fe638 = &LAB_142723cc0;
  _DAT_14c7fe640 = &LAB_142723d40;
  _DAT_14c7fe648 = &LAB_142723de0;
  return;
}



// FUNCTION 1454781a0 FUN_1454781a0 body=1686 status=ok
// SIG undefined FUN_1454781a0(void)

void FUN_1454781a0(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  byte param_6,byte param_7,int param_8,int param_9,int param_10,int param_11,
                  int param_12,int param_13,char param_14)

{
  byte bVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  short *psVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  short sVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  int local_178;
  int local_174;
  byte local_170;
  byte local_16f;
  int local_16c;
  int local_168;
  int local_164;
  short *local_160;
  longlong local_158;
  uint local_150;
  uint local_14c;
  longlong local_148;
  ulonglong local_140;
  short local_11a;
  short local_118 [4];
  undefined1 auStack_110 [120];
  short local_98 [32];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  param_2 = param_2 * 2;
  iVar15 = 4 << (param_7 & 0x1f);
  local_170 = param_7;
  local_164 = param_8;
  local_148 = param_4 * 2;
  piVar2 = *(int **)(param_1 + 0x210);
  local_140 = (ulonglong)param_6;
  local_160 = local_118;
  bVar1 = (&DAT_149d53e18)[local_140];
  local_150 = bVar1 & 4;
  local_16f = param_6;
  local_14c = bVar1 & 8;
  local_174 = param_9;
  if (param_13 == 0) {
    local_16c = *piVar2;
    iVar4 = piVar2[1];
  }
  else {
    local_16c = piVar2[5];
    iVar4 = piVar2[6];
  }
  uVar7 = 0;
  local_178 = (-*(int *)(param_1 + 0x1e8) >>
              ((char)*(undefined4 *)((longlong)param_13 * 0x88 + 8 + param_1) + 3U & 0x1f)) +
              param_11;
  param_12 = (-*(int *)(param_1 + 0x1f0) >>
             ((char)*(undefined4 *)((longlong)param_13 * 0x88 + 0xc + param_1) + 3U & 0x1f)) +
             param_12;
  sVar14 = (short)(0x80 << (param_14 - 8U & 0x1f));
  if ((bVar1 & 2) != 0) {
    uVar12 = (ulonglong)iVar15;
    if (param_9 == 0) {
      psVar13 = local_98;
      if (iVar15 != 0) {
        uVar5 = uVar7;
        if (0x1f < uVar12) {
          uVar16 = CONCAT22(sVar14 + 1,sVar14 + 1);
          do {
            *(undefined4 *)psVar13 = uVar16;
            *(undefined4 *)(psVar13 + 2) = uVar16;
            *(undefined4 *)(psVar13 + 4) = uVar16;
            *(undefined4 *)(psVar13 + 6) = uVar16;
            uVar5 = uVar5 + 0x20;
            *(undefined4 *)(psVar13 + 8) = uVar16;
            *(undefined4 *)(psVar13 + 10) = uVar16;
            *(undefined4 *)(psVar13 + 0xc) = uVar16;
            *(undefined4 *)(psVar13 + 0xe) = uVar16;
            *(undefined4 *)(psVar13 + 0x10) = uVar16;
            *(undefined4 *)(psVar13 + 0x12) = uVar16;
            *(undefined4 *)(psVar13 + 0x14) = uVar16;
            *(undefined4 *)(psVar13 + 0x16) = uVar16;
            *(undefined4 *)(psVar13 + 0x18) = uVar16;
            *(undefined4 *)(psVar13 + 0x1a) = uVar16;
            *(undefined4 *)(psVar13 + 0x1c) = uVar16;
            *(undefined4 *)(psVar13 + 0x1e) = uVar16;
            psVar13 = psVar13 + 0x20;
          } while (uVar5 < (uVar12 & 0xffffffffffffffe0));
          if (uVar12 <= uVar5) goto LAB_145478433;
        }
        for (lVar11 = uVar12 - uVar5; lVar11 != 0; lVar11 = lVar11 + -1) {
          *psVar13 = sVar14 + 1;
          psVar13 = psVar13 + 1;
        }
      }
    }
    else if (*(int *)(param_1 + 500) < 0) {
      if (iVar4 < param_12 + iVar15) {
        iVar4 = iVar4 - param_12;
        uVar12 = uVar7;
        uVar5 = uVar7;
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            local_98[uVar12] = *(short *)(param_2 + -2 + (longlong)(int)uVar5 * 2);
            uVar12 = uVar12 + 1;
            uVar5 = (ulonglong)(uint)((int)uVar5 + param_3);
            iVar6 = iVar4;
          } while ((longlong)uVar12 < (longlong)iVar4);
        }
        if (iVar6 < iVar15) {
          sVar3 = *(short *)(param_2 + -2 + (longlong)((iVar4 + -1) * param_3) * 2);
          psVar13 = local_98 + iVar6;
          for (lVar11 = (longlong)(iVar15 - iVar6); lVar11 != 0; lVar11 = lVar11 + -1) {
            *psVar13 = sVar3;
            psVar13 = psVar13 + 1;
          }
        }
      }
      else {
        uVar5 = uVar7;
        uVar8 = uVar7;
        if (0 < iVar15) {
          do {
            local_98[uVar5] = *(short *)(param_2 + -2 + (longlong)(int)uVar8 * 2);
            uVar5 = uVar5 + 1;
            uVar8 = (ulonglong)(uint)((int)uVar8 + param_3);
          } while ((longlong)uVar5 < (longlong)uVar12);
        }
      }
    }
    else {
      uVar5 = uVar7;
      uVar8 = uVar7;
      if (0 < iVar15) {
        do {
          local_98[uVar5] = *(short *)(param_2 + -2 + (longlong)(int)uVar8 * 2);
          uVar5 = uVar5 + 1;
          uVar8 = (ulonglong)(uint)((int)uVar8 + param_3);
        } while ((longlong)uVar5 < (longlong)uVar12);
      }
    }
  }
LAB_145478433:
  local_168 = param_3;
  local_158 = param_1;
  if ((bVar1 & 4) != 0) {
    if (param_8 == 0) {
      uVar12 = (ulonglong)iVar15;
      psVar13 = local_118;
      if (iVar15 != 0) {
        uVar5 = uVar7;
        if (0x1f < uVar12) {
          uVar16 = CONCAT22(sVar14 + -1,sVar14 + -1);
          do {
            *(undefined4 *)psVar13 = uVar16;
            *(undefined4 *)(psVar13 + 2) = uVar16;
            *(undefined4 *)(psVar13 + 4) = uVar16;
            *(undefined4 *)(psVar13 + 6) = uVar16;
            uVar5 = uVar5 + 0x20;
            *(undefined4 *)(psVar13 + 8) = uVar16;
            *(undefined4 *)(psVar13 + 10) = uVar16;
            *(undefined4 *)(psVar13 + 0xc) = uVar16;
            *(undefined4 *)(psVar13 + 0xe) = uVar16;
            *(undefined4 *)(psVar13 + 0x10) = uVar16;
            *(undefined4 *)(psVar13 + 0x12) = uVar16;
            *(undefined4 *)(psVar13 + 0x14) = uVar16;
            *(undefined4 *)(psVar13 + 0x16) = uVar16;
            *(undefined4 *)(psVar13 + 0x18) = uVar16;
            *(undefined4 *)(psVar13 + 0x1a) = uVar16;
            *(undefined4 *)(psVar13 + 0x1c) = uVar16;
            *(undefined4 *)(psVar13 + 0x1e) = uVar16;
            psVar13 = psVar13 + 0x20;
          } while (uVar5 < (uVar12 & 0xffffffffffffffe0));
          if (uVar12 <= uVar5) goto LAB_1454785cd;
        }
        for (lVar11 = uVar12 - uVar5; lVar11 != 0; lVar11 = lVar11 + -1) {
          *psVar13 = sVar14 + -1;
          psVar13 = psVar13 + 1;
        }
      }
LAB_1454785cd:
      local_11a = sVar14 + -1;
    }
    else {
      psVar13 = (short *)(param_2 + (longlong)param_3 * -2);
      if (*(int *)(param_1 + 0x1ec) < 0) {
        if (local_16c < local_178 + iVar15) {
          if (local_178 <= local_16c) {
            lVar9 = (longlong)(local_16c - local_178);
            memcpy(local_118,psVar13,lVar9 * 2);
            iVar4 = (local_178 - local_16c) + iVar15;
            lVar11 = (longlong)iVar4;
            param_9 = local_174;
            if (iVar4 != 0) {
              sVar3 = local_118[lVar9 + -1];
              psVar10 = local_118 + lVar9;
              for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                *psVar10 = sVar3;
                psVar10 = psVar10 + 1;
              }
            }
          }
        }
        else {
          memcpy(local_118,psVar13,(longlong)iVar15 * 2);
          param_9 = local_174;
        }
      }
      else {
        if (((iVar15 == 4) && (param_10 != 0)) && (param_9 != 0)) {
          local_11a = psVar13[-1];
          local_160 = psVar13;
          goto LAB_1454785d4;
        }
        memcpy(local_118,psVar13,(longlong)iVar15 * 2);
      }
      if (param_9 == 0) {
        local_11a = sVar14 + 1;
      }
      else {
        local_11a = psVar13[-1];
      }
    }
  }
LAB_1454785d4:
  iVar4 = local_174;
  psVar13 = local_160;
  if (local_14c == 0) goto LAB_1454787c1;
  if (local_164 != 0) {
    psVar13 = (short *)(param_2 + (longlong)local_168 * -2);
    if (*(int *)(local_158 + 0x1ec) < 0) {
      if (local_16c < iVar15 * 2 + local_178) {
        if (local_16c < local_178 + iVar15) {
          if (local_16c < local_178) goto LAB_1454786cd;
        }
        else if ((param_10 == 0) || (iVar15 != 4)) goto LAB_14547865e;
        lVar11 = (longlong)(local_16c - local_178);
        memcpy(local_118,psVar13,lVar11 * 2);
        psVar10 = local_118 + lVar11;
        iVar15 = (iVar15 * 2 - local_16c) + local_178;
        uVar7 = (ulonglong)iVar15;
        if (iVar15 != 0) {
          sVar3 = local_118[lVar11 + -1];
LAB_1454786ca:
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            *psVar10 = sVar3;
            psVar10 = psVar10 + 1;
          }
        }
      }
      else if ((param_10 == 0) || (iVar15 != 4)) {
LAB_14547865e:
        uVar12 = (ulonglong)iVar15;
        memcpy(local_118,psVar13,uVar12 * 2);
        if (iVar15 != 0) {
          sVar3 = local_118[uVar12 - 1];
          uVar7 = uVar12 & 0x7fffffffffffffff;
          psVar10 = local_118 + uVar12;
          goto LAB_1454786ca;
        }
      }
      else {
        memcpy(local_118,psVar13,0x10);
      }
    }
    else {
      if (((iVar15 == 4) && (param_10 != 0)) && (local_174 != 0)) goto LAB_1454787c1;
      uVar7 = (ulonglong)iVar15;
      memcpy(local_118,psVar13,uVar7 * 2);
      if ((iVar15 == 4) && (param_10 != 0)) {
        memcpy(auStack_110,psVar13 + 4,8);
      }
      else {
        psVar10 = local_118 + uVar7;
        if (iVar15 != 0) {
          sVar3 = local_118[uVar7 - 1];
          uVar7 = uVar7 & 0x7fffffffffffffff;
          goto LAB_1454786ca;
        }
      }
    }
LAB_1454786cd:
    if (iVar4 == 0) {
      local_11a = sVar14 + 1;
      psVar13 = local_160;
    }
    else {
      local_11a = psVar13[-1];
      psVar13 = local_160;
    }
    goto LAB_1454787c1;
  }
  uVar12 = (ulonglong)(iVar15 * 2);
  psVar10 = local_118;
  if (iVar15 * 2 != 0) {
    if (0x1f < uVar12) {
      uVar16 = CONCAT22(sVar14 + -1,sVar14 + -1);
      do {
        *(undefined4 *)psVar10 = uVar16;
        *(undefined4 *)(psVar10 + 2) = uVar16;
        *(undefined4 *)(psVar10 + 4) = uVar16;
        *(undefined4 *)(psVar10 + 6) = uVar16;
        uVar7 = uVar7 + 0x20;
        *(undefined4 *)(psVar10 + 8) = uVar16;
        *(undefined4 *)(psVar10 + 10) = uVar16;
        *(undefined4 *)(psVar10 + 0xc) = uVar16;
        *(undefined4 *)(psVar10 + 0xe) = uVar16;
        *(undefined4 *)(psVar10 + 0x10) = uVar16;
        *(undefined4 *)(psVar10 + 0x12) = uVar16;
        *(undefined4 *)(psVar10 + 0x14) = uVar16;
        *(undefined4 *)(psVar10 + 0x16) = uVar16;
        *(undefined4 *)(psVar10 + 0x18) = uVar16;
        *(undefined4 *)(psVar10 + 0x1a) = uVar16;
        *(undefined4 *)(psVar10 + 0x1c) = uVar16;
        *(undefined4 *)(psVar10 + 0x1e) = uVar16;
        psVar10 = psVar10 + 0x20;
      } while (uVar7 < (uVar12 & 0xffffffffffffffe0));
      if (uVar12 <= uVar7) goto LAB_1454787b3;
    }
    for (lVar11 = uVar12 - uVar7; lVar11 != 0; lVar11 = lVar11 + -1) {
      *psVar10 = sVar14 + -1;
      psVar10 = psVar10 + 1;
    }
  }
LAB_1454787b3:
  local_11a = sVar14 + -1;
LAB_1454787c1:
  local_188 = *(undefined4 *)(local_158 + 0x270);
  if (local_16f == 0) {
    (**(code **)(&DAT_14c7fe5d0 +
                ((ulonglong)local_170 + ((longlong)local_164 + (longlong)iVar4 * 2) * 4) * 8))
              (local_148,(longlong)param_5,psVar13,local_98);
  }
  else {
    (**(code **)(((ulonglong)local_170 + local_140 * 4) * 8 + 0x14c7fe490))
              (local_148,(longlong)param_5,psVar13,local_98);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 145478850 FUN_145478850 body=1225 status=ok
// SIG undefined FUN_145478850(void)

void FUN_145478850(longlong param_1,longlong param_2,int param_3,undefined8 param_4,int param_5,
                  byte param_6,byte param_7,int param_8,int param_9,int param_10,int param_11,
                  int param_12,int param_13)

{
  int *piVar1;
  ulonglong uVar2;
  size_t _Size;
  int iVar3;
  size_t sVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 auStack_118 [32];
  byte local_f8;
  byte local_f7;
  int local_f4;
  int local_f0;
  longlong local_e8;
  ulonglong local_e0;
  byte *local_d8;
  undefined8 local_d0;
  byte local_b9 [5];
  undefined1 auStack_b4 [60];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = local_b9 + 1;
  local_e0 = (ulonglong)param_6;
  iVar3 = 4 << (param_7 & 0x1f);
  piVar1 = *(int **)(param_1 + 0x210);
  local_f7 = param_6;
  local_f8 = param_7;
  local_f4 = param_8;
  local_f0 = param_9;
  if (param_13 == 0) {
    iVar8 = *piVar1;
    iVar7 = piVar1[1];
  }
  else {
    iVar8 = piVar1[5];
    iVar7 = piVar1[6];
  }
  param_11 = (-*(int *)(param_1 + 0x1e8) >>
             ((char)*(undefined4 *)((longlong)param_13 * 0x88 + 8 + param_1) + 3U & 0x1f)) +
             param_11;
  param_12 = (-*(int *)(param_1 + 0x1f0) >>
             ((char)*(undefined4 *)((longlong)param_13 * 0x88 + 0xc + param_1) + 3U & 0x1f)) +
             param_12;
  local_e8 = param_1;
  local_d0 = param_4;
  if (((&DAT_149d53e18)[local_e0] & 2) != 0) {
    sVar4 = (size_t)iVar3;
    if (param_9 == 0) {
      memset(local_78,0x81,sVar4);
    }
    else if (*(int *)(param_1 + 500) < 0) {
      if (iVar7 < param_12 + iVar3) {
        iVar7 = iVar7 - param_12;
        uVar2 = 0;
        uVar6 = uVar2;
        iVar5 = 0;
        if (0 < iVar7) {
          do {
            local_78[uVar2] = *(undefined1 *)((longlong)(int)uVar6 + -1 + param_2);
            uVar2 = uVar2 + 1;
            uVar6 = (ulonglong)(uint)((int)uVar6 + param_3);
            iVar5 = iVar7;
          } while ((longlong)uVar2 < (longlong)iVar7);
        }
        if (iVar5 < iVar3) {
          memset(local_78 + iVar5,(uint)*(byte *)((longlong)((iVar7 + -1) * param_3) + -1 + param_2)
                 ,(longlong)(iVar3 - iVar5));
        }
      }
      else if (0 < iVar3) {
        uVar2 = 0;
        uVar6 = uVar2;
        do {
          iVar7 = (int)uVar2;
          uVar2 = (ulonglong)(uint)(iVar7 + param_3);
          local_78[uVar6] = *(undefined1 *)((longlong)iVar7 + -1 + param_2);
          uVar6 = uVar6 + 1;
        } while ((longlong)uVar6 < (longlong)sVar4);
      }
    }
    else if (0 < iVar3) {
      uVar2 = 0;
      uVar6 = uVar2;
      do {
        iVar7 = (int)uVar2;
        uVar2 = (ulonglong)(uint)(iVar7 + param_3);
        local_78[uVar6] = *(undefined1 *)((longlong)iVar7 + -1 + param_2);
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)sVar4);
    }
  }
  if (((&DAT_149d53e18)[local_e0] & 4) != 0) {
    if (local_f4 == 0) {
      memset(local_b9 + 1,0x7f,(longlong)iVar3);
      local_b9[0] = 0x7f;
    }
    else {
      pbVar9 = (byte *)(param_2 - param_3);
      if (*(int *)(local_e8 + 0x1ec) < 0) {
        if (iVar8 < iVar3 + param_11) {
          if (param_11 <= iVar8) {
            sVar4 = (size_t)(iVar8 - param_11);
            memcpy(local_b9 + 1,pbVar9,sVar4);
            memset(local_b9 + sVar4 + 1,(uint)local_b9[sVar4],(longlong)((param_11 - iVar8) + iVar3)
                  );
          }
        }
        else {
LAB_145478ad6:
          memcpy(local_b9 + 1,pbVar9,(longlong)iVar3);
        }
        param_9 = local_f0;
        if (local_f0 == 0) {
          local_b9[0] = 0x81;
        }
        else {
          local_b9[0] = pbVar9[-1];
        }
      }
      else {
        if (((iVar3 != 4) || (param_10 == 0)) || (local_f0 == 0)) goto LAB_145478ad6;
        local_b9[0] = pbVar9[-1];
        param_9 = local_f0;
        local_d8 = pbVar9;
      }
    }
  }
  if (((&DAT_149d53e18)[local_e0] & 8) == 0) goto LAB_145478c86;
  if (local_f4 == 0) {
    memset(local_b9 + 1,0x7f,(longlong)(iVar3 * 2));
    local_b9[0] = 0x7f;
    goto LAB_145478c86;
  }
  pbVar9 = (byte *)(param_2 - param_3);
  if (*(int *)(local_e8 + 0x1ec) < 0) {
    if (iVar8 < iVar3 * 2 + param_11) {
      if (iVar8 < iVar3 + param_11) {
        if (iVar8 < param_11) goto LAB_145478baa;
      }
      else if ((param_10 == 0) || (iVar3 != 4)) goto LAB_145478b83;
      _Size = (size_t)(iVar8 - param_11);
      memcpy(local_b9 + 1,pbVar9,_Size);
      sVar4 = (size_t)((iVar3 * 2 - iVar8) + param_11);
      goto LAB_145478b99;
    }
    if ((param_10 == 0) || (iVar3 != 4)) {
LAB_145478b83:
      memcpy(local_b9 + 1,pbVar9,(longlong)iVar3);
      goto LAB_145478b96;
    }
    memcpy(local_b9 + 1,pbVar9,8);
  }
  else {
    if (((iVar3 == 4) && (param_10 != 0)) && (param_9 != 0)) {
      local_b9[0] = pbVar9[-1];
      local_d8 = pbVar9;
      goto LAB_145478c86;
    }
    memcpy(local_b9 + 1,pbVar9,(longlong)iVar3);
    if ((iVar3 == 4) && (param_10 != 0)) {
      memcpy(auStack_b4,pbVar9 + 4,4);
      goto LAB_145478baa;
    }
LAB_145478b96:
    _Size = (size_t)iVar3;
    sVar4 = _Size;
LAB_145478b99:
    memset(local_b9 + _Size + 1,(uint)local_b9[_Size],sVar4);
  }
LAB_145478baa:
  if (param_9 == 0) {
    local_b9[0] = 0x81;
  }
  else {
    local_b9[0] = pbVar9[-1];
  }
LAB_145478c86:
  if (local_f7 == 0) {
    (**(code **)(&DAT_14c7fe410 +
                ((ulonglong)local_f8 + ((longlong)local_f4 + (longlong)param_9 * 2) * 4) * 8))();
  }
  else {
    (**(code **)(((ulonglong)local_f8 + local_e0 * 4) * 8 + 0x14c7fe2d0))
              (local_d0,(longlong)param_5,local_d8,local_78);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_118);
}



// FUNCTION 145478d30 FUN_145478d30 body=417 status=ok
// SIG undefined FUN_145478d30(void)

undefined4 FUN_145478d30(longlong param_1,longlong param_2,int param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  
  bVar9 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    bVar9 = 2;
  }
  bVar9 = 0 < *(int *)(param_1 + 0xc) | bVar9;
  if (bVar9 != 0) {
    if (bVar9 == 1) {
      lVar8 = (longlong)param_4;
      lVar7 = (longlong)param_3;
      psVar1 = (short *)(param_2 + lVar7 * 4 + lVar8 * 0xc + 0x18);
      iVar5 = (int)*(short *)(param_2 + (lVar7 + (lVar8 + 4) * 3) * 4) + (int)*psVar1;
      uVar4 = (undefined2)((int)((iVar5 >> 0x1f & 0xfffffffeU) + iVar5 + 1) / 2);
      sVar3 = psVar1[0xd];
      sVar2 = *(short *)(param_2 + 0x1a + (lVar7 + lVar8 * 3) * 4);
    }
    else {
      if (bVar9 != 2) {
        if (bVar9 != 3) {
          return 0;
        }
        lVar7 = (longlong)param_3;
        iVar5 = (int)*(short *)(param_2 + 0x3c + lVar7 * 4) +
                (int)*(short *)(param_2 + 0x30 + lVar7 * 4) +
                (int)*(short *)(param_2 + 0x24 + lVar7 * 4) +
                (int)*(short *)(param_2 + 0x18 + lVar7 * 4);
        iVar5 = (iVar5 >> 0x1f & 0xfffffffcU) + iVar5 + 2;
        iVar6 = (int)*(short *)(param_2 + 0x3e + lVar7 * 4) +
                (int)*(short *)(param_2 + 0x32 + lVar7 * 4) +
                (int)*(short *)(param_2 + 0x26 + lVar7 * 4) +
                (int)*(short *)(param_2 + 0x1a + lVar7 * 4);
        iVar6 = (iVar6 >> 0x1f & 0xfffffffcU) + 2 + iVar6;
        return CONCAT22((short)((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2),
                        (short)((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2));
      }
      lVar8 = (longlong)param_4;
      lVar7 = (longlong)param_3;
      iVar5 = (int)*(short *)(param_2 + (lVar7 + (lVar8 + 2) * 3) * 4) +
              (int)*(short *)(param_2 + (lVar7 + (lVar8 + 3) * 3) * 4);
      sVar2 = *(short *)(param_2 + 0x1a + (lVar7 + lVar8 * 3) * 4);
      uVar4 = (undefined2)((int)((iVar5 >> 0x1f & 0xfffffffeU) + iVar5 + 1) / 2);
      sVar3 = *(short *)(param_2 + lVar7 * 4 + lVar8 * 0xc + 0x26);
    }
    return CONCAT22((short)((int)(((int)sVar2 + (int)sVar3 >> 0x1f & 0xfffffffeU) +
                                 (int)sVar2 + (int)sVar3 + 1) / 2),uVar4);
  }
  return *(undefined4 *)(param_2 + (((longlong)param_4 + 2) * 3 + (longlong)param_3) * 4);
}



// FUNCTION 145478ee0 FUN_145478ee0 body=230 status=ok
// SIG undefined FUN_145478ee0(void)

uint FUN_145478ee0(longlong param_1,short *param_2,int param_3,int param_4,char param_5,char param_6
                  )

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  
  bVar1 = 1 - param_6;
  bVar2 = 1 - param_5;
  uVar5 = (1 << (bVar1 & 0x1f)) * *param_2;
  uVar7 = (1 << (bVar2 & 0x1f)) * param_2[1];
  iVar4 = (param_4 + 4) * 0x10 + -0x10 + (*(int *)(param_1 + 500) << (bVar1 & 0x1f));
  uVar6 = (*(int *)(param_1 + 0x1f0) << (bVar1 & 0x1f)) + (param_4 + 4) * -0x10;
  iVar8 = (param_3 + 4) * 0x10 + -0x10 + (*(int *)(param_1 + 0x1ec) << (bVar2 & 0x1f));
  uVar3 = (*(int *)(param_1 + 0x1e8) << (bVar2 & 0x1f)) + (param_3 + 4) * -0x10;
  if ((int)uVar3 <= (int)(short)uVar7) {
    if (iVar8 < (short)uVar7) {
      uVar7 = (ushort)iVar8;
    }
    uVar3 = (uint)uVar7;
  }
  if ((int)uVar6 <= (int)(short)uVar5) {
    if (iVar4 < (short)uVar5) {
      uVar5 = (ushort)iVar4;
    }
    uVar6 = (uint)uVar5;
  }
  return uVar3 << 0x10 | uVar6 & 0xffff;
}



// FUNCTION 145478fd0 FUN_145478fd0 body=40 status=ok
// SIG undefined FUN_145478fd0(void)

void FUN_145478fd0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_145479aa0(param_1,param_4,param_2,param_3,0,0);
  return;
}



// FUNCTION 145479000 FUN_145479000 body=40 status=ok
// SIG undefined FUN_145479000(void)

void FUN_145479000(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  FUN_145479aa0(param_1,param_4,param_2,param_3,param_5,param_5);
  return;
}



// FUNCTION 145479030 FUN_145479030 body=43 status=ok
// SIG undefined FUN_145479030(void)

void FUN_145479030(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_145479aa0(param_1,param_4,param_2,param_3,1,2);
  return;
}



// FUNCTION 145479060 FUN_145479060 body=43 status=ok
// SIG undefined FUN_145479060(void)

void FUN_145479060(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_145479aa0(param_1,param_4,param_2,param_3,0,2);
  return;
}



// FUNCTION 145479090 FUN_145479090 body=314 status=ok
// SIG undefined FUN_145479090(void)

void FUN_145479090(longlong param_1,int param_2,undefined8 param_3,int param_4,short *param_5,
                  longlong param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  undefined8 param_10,int param_11,undefined4 param_12,undefined4 param_13)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  sVar1 = *param_5;
  if (param_11 == 1) {
    sVar2 = param_5[1];
  }
  else {
    sVar1 = sVar1 * 2;
    sVar2 = param_5[1] * 2;
  }
  param_11 = CONCAT22(sVar2,sVar1);
  uVar3 = FUN_145472090(&param_11,param_12,param_13,param_6);
  uVar4 = (uint)(uVar3 >> 0x20);
  lVar5 = 4;
  if ((uVar3 & 0xf) != 0) {
    lVar5 = 6;
  }
  (**(code **)(param_6 +
              (lVar5 + (ulonglong)(-(uint)((uVar3 & 0xf00000000) != 0) & 4) + (longlong)param_9) * 8
              ))((((int)(uint)uVar3 >> 4) * param_2 + ((int)uVar4 >> 4)) + param_1,(longlong)param_2
                 ,param_3,(longlong)param_4,param_10,uVar4 & 0xf,*(undefined4 *)(param_6 + 8),
                 (uint)uVar3 & 0xf,*(undefined4 *)(param_6 + 0xc),param_7,param_8);
  return;
}



// FUNCTION 1454791d0 FUN_1454791d0 body=327 status=ok
// SIG undefined FUN_1454791d0(void)

void FUN_1454791d0(longlong param_1,int param_2,undefined8 param_3,int param_4,short *param_5,
                  longlong param_6,undefined4 param_7,undefined4 param_8,int param_9,
                  undefined8 param_10,int param_11,undefined4 param_12,undefined4 param_13,
                  undefined4 param_14)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  sVar1 = *param_5;
  if (param_11 == 1) {
    sVar2 = param_5[1];
  }
  else {
    sVar1 = sVar1 * 2;
    sVar2 = param_5[1] * 2;
  }
  param_11 = CONCAT22(sVar2,sVar1);
  uVar3 = FUN_145472090(&param_11,param_12,param_13,param_6);
  uVar4 = (uint)(uVar3 >> 0x20);
  lVar5 = 0xc;
  if ((uVar3 & 0xf00000000) != 0) {
    lVar5 = 0x10;
  }
  (**(code **)(param_6 +
              (lVar5 + (ulonglong)(-(uint)((uVar3 & 0xf) != 0) & 2) + (longlong)param_9) * 8))
            (param_1 + (longlong)(((int)(uint)uVar3 >> 4) * param_2 + ((int)uVar4 >> 4)) * 2,
             (longlong)param_2,param_3,(longlong)param_4,param_10,uVar4 & 0xf,
             *(undefined4 *)(param_6 + 8),(uint)uVar3 & 0xf,*(undefined4 *)(param_6 + 0xc),param_7,
             param_8,param_14);
  return;
}



// FUNCTION 145479320 FUN_145479320 body=198 status=ok
// SIG undefined FUN_145479320(void)

void FUN_145479320(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x24);
  lVar4 = *(longlong *)(param_2 + 0x48);
  iVar2 = *(int *)(param_2 + 0x10);
  lVar5 = (longlong)(param_3 * 8);
  lVar6 = (longlong)(param_4 * 8);
  *(longlong *)(param_1 + 0x10) =
       (lVar5 >> ((byte)*(undefined4 *)(param_1 + 0xc) & 0x3f)) * (longlong)iVar2 +
       (lVar6 >> ((byte)*(undefined4 *)(param_1 + 8) & 0x3f)) + *(longlong *)(param_2 + 0x38);
  *(int *)(param_1 + 0x18) = iVar2;
  *(longlong *)(param_1 + 0x98) =
       (lVar6 >> ((byte)*(undefined4 *)(param_1 + 0x90) & 0x3f)) +
       (lVar5 >> ((byte)*(undefined4 *)(param_1 + 0x94) & 0x3f)) * (longlong)iVar1 + lVar3;
  *(int *)(param_1 + 0xa0) = iVar1;
  *(longlong *)(param_1 + 0x120) =
       (lVar6 >> ((byte)*(undefined4 *)(param_1 + 0x118) & 0x3f)) +
       lVar4 + (lVar5 >> ((byte)*(undefined4 *)(param_1 + 0x11c) & 0x3f)) * (longlong)iVar1;
  *(int *)(param_1 + 0x128) = iVar1;
  return;
}



// FUNCTION 1454793f0 FUN_1454793f0 body=437 status=ok
// SIG undefined FUN_1454793f0(void)

void FUN_1454793f0(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,
                  longlong param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_3 != 0) {
    iVar9 = *(int *)(param_3 + 0x10);
    param_4 = param_4 * 8;
    iVar1 = *(int *)(param_3 + 0x24);
    lVar2 = *(longlong *)(param_3 + 0x38);
    lVar3 = *(longlong *)(param_3 + 0x40);
    lVar4 = *(longlong *)(param_3 + 0x48);
    lVar6 = ((longlong)param_2 + 2) * 0x10;
    param_5 = param_5 * 8;
    iVar7 = param_5 >> ((byte)*(undefined4 *)(param_1 + 8) & 0x1f);
    iVar8 = param_4 >> ((byte)*(undefined4 *)(param_1 + 0xc) & 0x1f);
    if (param_6 != 0) {
      iVar7 = (**(code **)(param_6 + 0x10))(iVar7,param_6);
      iVar8 = (**(code **)(param_6 + 0x18))(iVar8,param_6);
    }
    *(int *)(lVar6 + 8 + param_1) = iVar9;
    *(longlong *)(lVar6 + param_1) = (longlong)iVar7 + lVar2 + (longlong)iVar9 * (longlong)iVar8;
    plVar5 = (longlong *)(param_1 + 0x88 + lVar6);
    iVar9 = param_5 >> ((byte)*(undefined4 *)(param_1 + 0x90) & 0x1f);
    iVar7 = param_4 >> ((byte)*(undefined4 *)(param_1 + 0x94) & 0x1f);
    if (param_6 != 0) {
      iVar9 = (**(code **)(param_6 + 0x10))(iVar9,param_6);
      iVar7 = (**(code **)(param_6 + 0x18))(iVar7,param_6);
    }
    *plVar5 = (longlong)iVar9 + (longlong)iVar7 * (longlong)iVar1 + lVar3;
    *(int *)(plVar5 + 1) = iVar1;
    param_5 = param_5 >> ((byte)*(undefined4 *)(param_1 + 0x118) & 0x1f);
    param_4 = param_4 >> ((byte)*(undefined4 *)(param_1 + 0x11c) & 0x1f);
    if (param_6 != 0) {
      param_5 = (**(code **)(param_6 + 0x10))(param_5,param_6);
      param_4 = (**(code **)(param_6 + 0x18))(param_4,param_6);
    }
    *(longlong *)(lVar6 + 0x110 + param_1) =
         (longlong)param_5 + (longlong)param_4 * (longlong)iVar1 + lVar4;
    *(int *)(lVar6 + 0x118 + param_1) = iVar1;
  }
  return;
}



// FUNCTION 1454795b0 FUN_1454795b0 body=1252 status=ok
// SIG undefined FUN_1454795b0(void)

void FUN_1454795b0(longlong param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6,int param_7,undefined4 param_8,undefined4 param_9,int param_10,
                  int param_11)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ushort uVar18;
  undefined4 uVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong local_90;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined *local_70;
  ulonglong local_68;
  longlong *local_60;
  byte *local_58;
  longlong local_50;
  longlong local_48;
  byte *local_40;
  
  lVar22 = (longlong)param_2 * 0x88 + param_1;
  local_60 = (longlong *)(param_1 + 0x200);
  local_40 = (byte *)**(undefined8 **)(param_1 + 0x1c0);
  plVar14 = (longlong *)(lVar22 + 0x20);
  local_70 = (&PTR_DAT_14c744430)[local_40[7]];
  local_68 = 0;
  local_90 = 0;
  local_78 = ('\0' < (char)local_40[9]) + 1;
  local_50 = (longlong)param_7;
  local_48 = (longlong)param_6;
  local_74 = param_5 * 0x10 + 0x30;
  local_58 = local_40 + 0xc;
  do {
    iVar15 = local_74;
    lVar20 = *local_60;
    piVar1 = (int *)(lVar20 + 0x10);
    lVar23 = *(int *)(lVar22 + 0x18) * local_50 + local_48 + *(longlong *)(lVar22 + 0x10);
    if (*local_40 < 3) {
      uVar3 = FUN_145478d30(lVar22,local_40,local_68,param_3);
    }
    else {
      uVar3 = *(undefined4 *)local_58;
    }
    bVar9 = 1 - (char)*(undefined4 *)(lVar22 + 0xc);
    bVar10 = 1 - (char)*(undefined4 *)(lVar22 + 8);
    uVar18 = (1 << (bVar9 & 0x1f)) * (short)uVar3;
    iVar4 = 1 << (bVar9 & 0x1f);
    uVar12 = (short)((uint)uVar3 >> 0x10) * (1 << (bVar10 & 0x1f));
    iVar6 = *(int *)(param_1 + 0x1e8);
    iVar15 = iVar4 * *(int *)(param_1 + 500) + iVar15;
    iVar2 = *(int *)(param_1 + 0x1f0);
    iVar5 = 1 << (bVar10 & 0x1f);
    uVar11 = iVar2 * iVar4 - (param_5 * 0x10 + 0x40);
    iVar4 = iVar5 * *(int *)(param_1 + 0x1ec) + param_4 * 0x10 + 0x30;
    uVar17 = iVar6 * iVar5 - (param_4 * 0x10 + 0x40);
    if ((int)(short)uVar12 < (int)uVar17) {
      uVar12 = (ushort)uVar17;
    }
    else {
      if (iVar4 < (short)uVar12) {
        uVar12 = (ushort)iVar4;
      }
      uVar17 = (uint)uVar12;
    }
    if ((int)uVar11 <= (int)(short)uVar18) {
      if (iVar15 < (short)uVar18) {
        uVar18 = (ushort)iVar15;
      }
      uVar11 = (uint)uVar18;
    }
    uVar3 = CONCAT22(uVar12,(short)uVar11);
    local_7c = uVar3;
    if (((*piVar1 == -1) || (*(int *)(lVar20 + 0x14) == -1)) ||
       ((*piVar1 == 0x4000 && (*(int *)(lVar20 + 0x14) == 0x4000)))) {
      uVar11 = (uint)(short)uVar11;
      uVar8 = (ulonglong)uVar11;
      uVar19 = 0x10;
      uVar21 = 0x10;
      lVar13 = (int)plVar14[1] * local_50 + local_48 + *plVar14;
      uVar17 = (uint)(short)uVar17;
    }
    else {
      uVar21 = *(undefined4 *)(lVar22 + 8);
      uVar19 = *(undefined4 *)(lVar22 + 0xc);
      if (param_2 == 0) {
        lVar13 = *(longlong *)(*(longlong *)(lVar20 + 8) + 0x38);
      }
      else if (param_2 == 1) {
        lVar13 = *(longlong *)(*(longlong *)(lVar20 + 8) + 0x40);
      }
      else {
        lVar13 = *(longlong *)(*(longlong *)(lVar20 + 8) + 0x48);
      }
      *plVar14 = lVar13;
      lVar13 = plVar14[1];
      iVar15 = (**(code **)(lVar20 + 0x20))((-iVar6 >> ((char)uVar21 + 3U & 0x1f)) + param_6,piVar1)
      ;
      iVar6 = (**(code **)(lVar20 + 0x28))(param_7 + (-iVar2 >> ((char)uVar19 + 3U & 0x1f)),piVar1);
      *plVar14 = *plVar14 + (longlong)iVar6 * (longlong)(int)lVar13 + (longlong)iVar15;
      lVar13 = *plVar14;
      uVar8 = FUN_145472090(&local_7c,param_10 + param_6,param_7 + param_11,piVar1);
      uVar21 = *(undefined4 *)(lVar20 + 0x18);
      uVar19 = *(undefined4 *)(lVar20 + 0x1c);
      uVar11 = (uint)uVar8;
      uVar17 = (uint)(uVar8 >> 0x20);
    }
    iVar15 = (int)plVar14[1];
    uVar16 = uVar17 & 0xf;
    uVar7 = (uint)uVar8 & 0xf;
    lVar13 = lVar13 + (((int)uVar11 >> 4) * iVar15 + ((int)uVar17 >> 4));
    if ((*(byte *)(*(longlong *)(param_1 + 0x210) + 0x98) & 8) == 0) {
      lVar20 = 4;
      if ((uVar8 & 0xf) != 0) {
        lVar20 = 6;
      }
      (**(code **)(piVar1 + ((ulonglong)(-(uint)(uVar16 != 0) & 4) + local_90 + lVar20) * 2))
                (lVar13,(longlong)iVar15,lVar23,(longlong)*(int *)(lVar22 + 0x18),local_70,uVar16,
                 uVar21,uVar7,uVar19,param_8,param_9);
    }
    else {
      lVar20 = 0xc;
      if (uVar16 != 0) {
        lVar20 = 0x10;
      }
      (**(code **)(piVar1 + (lVar20 + local_90 + (ulonglong)(-(uint)((uVar8 & 0xf) != 0) & 2)) * 2))
                (lVar13 * 2,(longlong)iVar15,lVar23 * 2,(longlong)*(int *)(lVar22 + 0x18),local_70,
                 uVar16,uVar21,uVar7,uVar19,param_8,param_9,*(undefined4 *)(param_1 + 0x270),uVar3);
    }
    plVar14 = plVar14 + 2;
    uVar11 = (int)local_68 + 1;
    local_68 = (ulonglong)uVar11;
    local_60 = local_60 + 1;
    local_90 = local_90 + 1;
    local_58 = local_58 + 4;
  } while ((int)uVar11 < local_78);
  return;
}



// FUNCTION 145479aa0 FUN_145479aa0 body=518 status=ok
// SIG undefined FUN_145479aa0(void)

void FUN_145479aa0(longlong param_1,byte param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar6 = (ulonglong)param_5;
  if (param_5 <= param_6) {
    piVar3 = (int *)(uVar6 * 0x88 + 0xc + param_1);
    do {
      bVar1 = (&DAT_149d549b0)
              [(byte)(&DAT_149d54b48)
                     [(longlong)*piVar3 + ((longlong)piVar3[-1] + (ulonglong)param_2 * 2) * 2]];
      bVar2 = (&DAT_149d549c0)
              [(byte)(&DAT_149d54b48)
                     [(longlong)*piVar3 + ((longlong)piVar3[-1] + (ulonglong)param_2 * 2) * 2]];
      iVar9 = (uint)bVar1 * 4;
      iVar10 = (uint)bVar2 * 4;
      if (*(byte *)**(undefined8 **)(param_1 + 0x1c0) < 3) {
        iVar8 = 0;
        iVar7 = 0;
        if (bVar1 != 0) {
          do {
            iVar4 = 0;
            if (bVar2 != 0) {
              do {
                FUN_1454795b0(param_1,uVar6 & 0xffffffff,iVar8,iVar10,iVar9,iVar4 * 4,iVar7 * 4,4,4,
                              param_4 * 8,param_3 * 8);
                iVar8 = iVar8 + 1;
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)(uint)bVar2);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)(uint)bVar1);
        }
      }
      else {
        FUN_1454795b0(param_1,uVar6 & 0xffffffff,0,iVar10,iVar9,0,0,iVar10,iVar9,param_4 * 8,
                      param_3 * 8);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      piVar3 = piVar3 + 0x22;
    } while ((int)uVar5 <= param_6);
  }
  return;
}



// FUNCTION 145479cb0 FUN_145479cb0 body=91 status=ok
// SIG undefined FUN_145479cb0(void)

void FUN_145479cb0(longlong *param_1,longlong param_2,longlong param_3)

{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(param_1 + 5),0,0);
  InitializeConditionVariable((PCONDITION_VARIABLE)(param_1 + 10));
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2 + param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 145479d10 FUN_145479d10 body=65 status=ok
// SIG undefined FUN_145479d10(void)

void FUN_145479d10(undefined8 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  param_1[1] = *param_1;
  param_1[2] = *param_1;
  *(undefined4 *)(param_1 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145479d4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return;
}



// FUNCTION 145479d60 FUN_145479d60 body=75 status=ok
// SIG undefined FUN_145479d60(void)

void FUN_145479d60(undefined8 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  param_1[1] = *param_1;
  param_1[2] = *param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
                    /* WARNING: Could not recover jumptable at 0x000145479da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return;
}



// FUNCTION 145479db0 FUN_145479db0 body=61 status=ok
// SIG undefined FUN_145479db0(void)

void FUN_145479db0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x20) = 1;
  WakeAllConditionVariable((PCONDITION_VARIABLE)(param_1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000145479de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 145479df0 FUN_145479df0 body=132 status=ok
// SIG undefined FUN_145479df0(void)

bool FUN_145479df0(longlong param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  bVar1 = *(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 8) + param_3;
  if (!bVar1) {
    memcpy(*(void **)(param_1 + 8),param_2,param_3);
    *(size_t *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
    WakeConditionVariable((PCONDITION_VARIABLE)(param_1 + 0x50));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return bVar1;
}



// FUNCTION 145479e80 FUN_145479e80 body=199 status=ok
// SIG undefined FUN_145479e80(void)

undefined8 FUN_145479e80(longlong param_1,void *param_2,size_t param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  if (*(ulonglong *)(param_1 + 0x18) < *(longlong *)(param_1 + 0x10) + param_3) {
LAB_145479f1c:
    uVar1 = 1;
  }
  else {
    if (*(ulonglong *)(param_1 + 8) < *(longlong *)(param_1 + 0x10) + param_3) {
      do {
        if ((*(int *)(param_1 + 0x20) == 1) || (param_4 != 1)) goto LAB_145479f1c;
        SleepConditionVariableCS((PCONDITION_VARIABLE)(param_1 + 0x50),lpCriticalSection,0xffffffff)
        ;
      } while (*(ulonglong *)(param_1 + 8) < *(longlong *)(param_1 + 0x10) + param_3);
    }
    memcpy(param_2,*(void **)(param_1 + 0x10),param_3);
    *(size_t *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
    uVar1 = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 145479f50 FUN_145479f50 body=811 status=ok
// SIG undefined FUN_145479f50(void)

ulonglong FUN_145479f50(longlong param_1,int param_2,undefined8 *param_3,int param_4,int param_5,
                       char param_6,int param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  lVar2 = param_1 + 0x3410;
  lVar1 = param_1 + 0x10;
  uVar7 = 0;
  iVar6 = 0;
  puVar11 = (undefined8 *)((longlong)param_2 * 0x88 + lVar2);
  uVar8 = 0;
  uVar10 = 0;
  puVar12 = (ulonglong *)((longlong)param_4 + puVar11[8]);
  lVar3 = (longlong)puVar11 + ((longlong)param_7 + 0x14) * 4;
  puVar13 = (ulonglong *)((longlong)param_5 + puVar11[9]);
  if (param_6 == '\0') {
    uVar7 = FUN_14547a280(lVar2,0 < param_2,*puVar11,0,lVar3,
                          ((char)*puVar13 != '\0') + ((char)*puVar12 != '\0'),*param_3,param_3[2],
                          lVar1);
    bVar5 = 0 < (int)uVar7;
    *(bool *)puVar13 = bVar5;
    *(bool *)puVar12 = bVar5;
  }
  else if (param_6 == '\x01') {
    uVar4 = *(uint *)(param_1 + 0x35e8);
    uVar9 = uVar7;
    if ((uVar4 != 0) && (uVar9 = uVar8, uVar4 < param_4 + 2U)) {
      uVar9 = (ulonglong)((param_4 - uVar4) * 8 + 0x10);
    }
    uVar4 = *(uint *)(param_1 + 0x35ec);
    uVar8 = uVar7;
    if ((uVar4 != 0) && (uVar8 = uVar10, uVar4 < param_5 + 2U)) {
      uVar8 = (ulonglong)((param_5 - uVar4) * 8 + 0x10);
    }
    uVar7 = FUN_14547a280(lVar2,0 < param_2,*puVar11,1,lVar3,
                          ((short)*puVar13 != 0) + ((short)*puVar12 != 0),*param_3,param_3[2],lVar1)
    ;
    if (0 < (int)uVar7) {
      iVar6 = 0x101;
    }
    *(short *)puVar12 = (short)(iVar6 >> ((byte)uVar9 & 0x1f));
    *(short *)puVar13 = (short)(iVar6 >> ((byte)uVar8 & 0x1f));
  }
  else if (param_6 == '\x02') {
    uVar4 = *(uint *)(param_1 + 0x35e8);
    uVar9 = uVar7;
    if ((uVar4 != 0) && (uVar9 = uVar8, uVar4 < param_4 + 4U)) {
      uVar9 = (ulonglong)((param_4 - uVar4) * 8 + 0x20);
    }
    uVar4 = *(uint *)(param_1 + 0x35ec);
    uVar8 = uVar7;
    if ((uVar4 != 0) && (uVar8 = uVar10, uVar4 < param_5 + 4U)) {
      uVar8 = (ulonglong)((param_5 - uVar4) * 8 + 0x20);
    }
    uVar7 = FUN_14547a280(lVar2,0 < param_2,*puVar11,2,lVar3,
                          ((int)*puVar13 != 0) + ((int)*puVar12 != 0),*param_3,param_3[2],lVar1);
    if (0 < (int)uVar7) {
      iVar6 = 0x1010101;
    }
    *(int *)puVar12 = iVar6 >> ((byte)uVar9 & 0x1f);
    *(int *)puVar13 = iVar6 >> ((byte)uVar8 & 0x1f);
  }
  else if (param_6 == '\x03') {
    uVar4 = *(uint *)(param_1 + 0x35e8);
    uVar9 = uVar7;
    if ((uVar4 != 0) && (uVar9 = uVar8, uVar4 < param_4 + 8U)) {
      uVar9 = (ulonglong)((param_4 - uVar4) * 8 + 0x40);
    }
    uVar4 = *(uint *)(param_1 + 0x35ec);
    uVar8 = uVar7;
    if ((uVar4 != 0) && (uVar8 = uVar10, uVar4 < param_5 + 8U)) {
      uVar8 = (ulonglong)((param_5 - uVar4) * 8 + 0x40);
    }
    uVar10 = FUN_14547a280(lVar2,0 < param_2,*puVar11,3,lVar3,(*puVar13 != 0) + (*puVar12 != 0),
                           *param_3,param_3[2],lVar1);
    if (0 < (int)uVar10) {
      uVar7 = 0x101010101010101;
    }
    *puVar12 = uVar7 >> ((byte)uVar9 & 0x3f);
    *puVar13 = uVar7 >> ((byte)uVar8 & 0x3f);
    uVar7 = uVar10;
  }
  return uVar7;
}



// FUNCTION 14547a280 FUN_14547a280 body=4720 status=ok
// SIG undefined FUN_14547a280(void)

void FUN_14547a280(longlong param_1,int param_2,longlong param_3,byte param_4,short *param_5,
                  uint param_6,longlong param_7,longlong param_8,ulonglong *param_9)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  undefined *puVar16;
  uint uVar17;
  undefined *puVar18;
  byte *pbVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_4f8 [32];
  short local_4d8;
  int local_4d4;
  longlong local_4d0;
  undefined *local_4c8;
  undefined8 local_4c0;
  uint local_4b8;
  undefined *local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  byte *local_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  byte abStack_458 [1024];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  pbVar19 = &DAT_149d515e0;
  local_4a8 = param_7;
  local_468 = param_8;
  local_4a0 = *(longlong *)(param_1 + 0x1a0);
  iVar13 = 0x10 << (param_4 * '\x02' & 0x1f);
  local_4d4 = 0;
  cVar2 = *(char *)(**(longlong **)(param_1 + 0x1c0) + 8);
  lVar20 = (longlong)param_2 + (ulonglong)param_4 * 2;
  lVar6 = 0xae;
  if ('\0' < cVar2) {
    lVar6 = 0x11a;
  }
  local_480 = lVar6 + lVar20 * 0xd8 + *(longlong *)(param_1 + 0x1f8);
  if (param_4 == 0) {
    pbVar19 = &DAT_149d519e0;
  }
  local_4b8 = (uint)(param_4 == 3);
  local_4d8 = *param_5;
  iVar8 = *(int *)(param_1 + 0x270);
  if (iVar8 == 0xc) {
    puVar18 = &DAT_149d515c0;
    local_478 = 0x12;
  }
  else {
    puVar18 = &DAT_149d515c2;
    if (iVar8 != 10) {
      puVar18 = &DAT_149d515b0;
    }
    local_478 = 0xe;
    if (iVar8 == 10) {
      local_478 = 0x10;
    }
  }
  uVar5 = *param_9;
  iVar8 = (int)param_9[1];
  iVar12 = *(int *)((longlong)param_9 + 0xc);
  if (local_4a0 == 0) {
    local_498 = local_490;
  }
  else {
    lVar6 = 0x330;
    if ('\0' < cVar2) {
      lVar6 = 0x570;
    }
    local_498 = lVar20 * 0x480 + lVar6 + local_4a0;
    lVar6 = 0x2730;
    if ('\0' < cVar2) {
      lVar6 = 0x27c0;
    }
    local_490 = lVar20 * 0x120 + lVar6 + local_4a0;
  }
  local_460 = (longlong)iVar13;
  local_470 = param_3;
  if (0 < iVar13) {
    local_4d0 = 0;
    local_488 = pbVar19;
    do {
      uVar7 = (ulonglong)param_6;
      bVar3 = *local_488;
      local_488 = local_488 + 1;
      local_4c0 = (undefined *)CONCAT44(local_4c0._4_4_,(uint)bVar3);
      lVar20 = (longlong)(int)param_6 + (ulonglong)bVar3 * 6;
      pbVar19 = (byte *)(local_480 + lVar20 * 3);
      if (local_4a0 != 0) {
        piVar1 = (int *)(local_490 + lVar20 * 4);
        *piVar1 = *piVar1 + 1;
      }
      uVar11 = (iVar8 + -1) * (uint)*pbVar19 + 0x100 >> 8;
      uVar10 = (ulonglong)uVar11 << 0x38;
      local_4c8 = puVar18;
      if (iVar12 < 0) {
        *param_9 = uVar5;
        *(int *)((longlong)param_9 + 0xc) = iVar12;
        FUN_14546ec70(param_9);
        uVar5 = *param_9;
        iVar12 = *(int *)((longlong)param_9 + 0xc);
      }
      if (uVar5 < uVar10) {
        bVar3 = (&DAT_149d54800)[uVar11];
        iVar8 = uVar11 << (bVar3 & 0x1f);
        iVar12 = iVar12 - (uint)bVar3;
        uVar5 = uVar5 << (bVar3 & 0x3f);
        if (local_4a0 != 0) {
          piVar1 = (int *)(local_498 + 0xc + lVar20 * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        break;
      }
      bVar3 = (&DAT_149d54800)[iVar8 - uVar11];
      iVar8 = iVar8 - uVar11 << (bVar3 & 0x1f);
      uVar5 = uVar5 - uVar10 << (bVar3 & 0x3f);
      iVar12 = iVar12 - (uint)bVar3;
      psVar15 = (short *)(local_468 + local_4d0 * 4);
      while( true ) {
        uVar11 = (uint)pbVar19[1] * (iVar8 + -1) + 0x100 >> 8;
        uVar10 = (ulonglong)uVar11 << 0x38;
        if (iVar12 < 0) {
          *param_9 = uVar5;
          *(int *)((longlong)param_9 + 0xc) = iVar12;
          FUN_14546ec70(param_9);
          uVar5 = *param_9;
          iVar12 = *(int *)((longlong)param_9 + 0xc);
        }
        iVar13 = (int)uVar7;
        if (uVar10 <= uVar5) break;
        bVar3 = (&DAT_149d54800)[uVar11];
        iVar8 = uVar11 << (bVar3 & 0x1f);
        iVar12 = iVar12 - (uint)bVar3;
        uVar5 = uVar5 << (bVar3 & 0x3f);
        if (local_4a0 != 0) {
          piVar1 = (int *)(local_498 +
                          ((longlong)iVar13 + ((ulonglong)local_4c0 & 0xffffffff) * 6) * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        local_4d8 = param_5[1];
        uVar7 = (ulonglong)*(short *)(local_4a8 + local_4d0 * 2);
        if (0x3ff < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
        abStack_458[uVar7] = 0;
        local_4d0 = local_4d0 + 1;
        local_4d4 = local_4d4 + 1;
        if (local_460 <= local_4d0) {
          *param_9 = uVar5;
          goto LAB_14547b4cc;
        }
        bVar3 = *local_488;
        local_488 = local_488 + 1;
        uVar7 = (ulonglong)((uint)abStack_458[psVar15[2]] + abStack_458[psVar15[3]] + 1 >> 1);
        local_4c0 = (undefined *)CONCAT44(local_4c0._4_4_,(uint)bVar3);
        pbVar19 = (byte *)(local_480 + (uVar7 + (ulonglong)bVar3 * 6) * 3);
        psVar15 = psVar15 + 2;
      }
      bVar3 = (&DAT_149d54800)[iVar8 - uVar11];
      iVar8 = iVar8 - uVar11 << (bVar3 & 0x1f);
      iVar12 = iVar12 - (uint)bVar3;
      uVar5 = uVar5 - uVar10 << (bVar3 & 0x3f);
      uVar11 = (iVar8 + -1) * (uint)pbVar19[2] + 0x100 >> 8;
      uVar7 = (ulonglong)uVar11 << 0x38;
      if (iVar12 < 0) {
        *param_9 = uVar5;
        *(int *)((longlong)param_9 + 0xc) = iVar12;
        FUN_14546ec70(param_9);
        uVar5 = *param_9;
        iVar12 = *(int *)((longlong)param_9 + 0xc);
      }
      puVar18 = local_4c8;
      if (uVar5 < uVar7) {
        bVar3 = (&DAT_149d54800)[uVar11];
        iVar8 = uVar11 << (bVar3 & 0x1f);
        iVar12 = iVar12 - (uint)bVar3;
        uVar5 = uVar5 << (bVar3 & 0x3f);
        if (local_4a0 != 0) {
          piVar1 = (int *)(local_498 + 4 +
                          ((longlong)iVar13 + ((ulonglong)local_4c0 & 0xffffffff) * 6) * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        iVar13 = (int)local_4d8;
        puVar16 = (undefined *)(local_4d0 * 2);
        abStack_458[*(short *)(puVar16 + local_4a8)] = 1;
LAB_14547b3a3:
        iVar13 = iVar13 >> ((byte)local_4b8 & 0x1f);
      }
      else {
        uVar11 = iVar8 - uVar11;
        bVar3 = (&DAT_149d54800)[uVar11];
        iVar8 = uVar11 << (bVar3 & 0x1f);
        iVar12 = iVar12 - (uint)bVar3;
        uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
        lVar20 = (ulonglong)pbVar19[2] * 8;
        if (local_4a0 != 0) {
          piVar1 = (int *)(local_498 + 8 +
                          ((longlong)iVar13 + ((ulonglong)local_4c0 & 0xffffffff) * 6) * 0x10);
          *piVar1 = *piVar1 + 1;
        }
        uVar11 = (iVar8 + -1) * (uint)(byte)(&DAT_149d51a08)[lVar20] + 0x100 >> 8;
        uVar7 = (ulonglong)uVar11 << 0x38;
        if (iVar12 < 0) {
          *param_9 = uVar5;
          *(int *)((longlong)param_9 + 0xc) = iVar12;
          FUN_14546ec70(param_9);
          uVar5 = *param_9;
          iVar12 = *(int *)((longlong)param_9 + 0xc);
        }
        if (uVar5 < uVar7) {
          bVar3 = (&DAT_149d54800)[uVar11];
          iVar12 = iVar12 - (uint)bVar3;
          iVar13 = uVar11 << (bVar3 & 0x1f);
          uVar5 = uVar5 << (bVar3 & 0x3f);
          uVar11 = (uint)(byte)(&DAT_149d51a09)[lVar20] * (iVar13 + -1) + 0x100 >> 8;
          uVar7 = (ulonglong)uVar11 << 0x38;
          if (iVar12 < 0) {
            *param_9 = uVar5;
            *(int *)((longlong)param_9 + 0xc) = iVar12;
            FUN_14546ec70(param_9);
            uVar5 = *param_9;
            iVar12 = *(int *)((longlong)param_9 + 0xc);
          }
          if (uVar5 < uVar7) {
            bVar3 = (&DAT_149d54800)[uVar11];
            iVar8 = uVar11 << (bVar3 & 0x1f);
            uVar5 = uVar5 << (bVar3 & 0x3f);
            puVar16 = (undefined *)(local_4d0 * 2);
            iVar12 = iVar12 - (uint)bVar3;
            iVar13 = local_4d8 * 2;
            abStack_458[*(short *)(puVar16 + local_4a8)] = 2;
          }
          else {
            uVar11 = iVar13 - uVar11;
            bVar3 = (&DAT_149d51a0a)[lVar20];
            puVar16 = (undefined *)(local_4d0 * 2);
            bVar4 = (&DAT_149d54800)[uVar11];
            iVar13 = uVar11 << (bVar4 & 0x1f);
            iVar12 = iVar12 - (uint)bVar4;
            uVar5 = uVar5 - uVar7 << (bVar4 & 0x3f);
            abStack_458[*(short *)(puVar16 + local_4a8)] = 3;
            uVar11 = (uint)bVar3 * (iVar13 + -1) + 0x100 >> 8;
            uVar7 = (ulonglong)uVar11 << 0x38;
            if (iVar12 < 0) {
              *param_9 = uVar5;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_14546ec70(param_9);
              uVar5 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar5 < uVar7) {
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar8 = uVar11 << (bVar3 & 0x1f);
              uVar5 = uVar5 << (bVar3 & 0x3f);
              iVar13 = 3;
            }
            else {
              uVar11 = iVar13 - uVar11;
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar8 = uVar11 << (bVar3 & 0x1f);
              uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
              iVar13 = 4;
            }
            iVar12 = iVar12 - (uint)bVar3;
            iVar13 = local_4d8 * iVar13;
          }
          goto LAB_14547b3a3;
        }
        uVar11 = iVar8 - uVar11;
        bVar3 = (&DAT_149d54800)[uVar11];
        iVar13 = uVar11 << (bVar3 & 0x1f);
        iVar12 = iVar12 - (uint)bVar3;
        uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
        uVar11 = (uint)(byte)(&DAT_149d51a0b)[lVar20] * (iVar13 + -1) + 0x100 >> 8;
        uVar7 = (ulonglong)uVar11 << 0x38;
        puVar16 = puVar18;
        if (iVar12 < 0) {
          *param_9 = uVar5;
          *(int *)((longlong)param_9 + 0xc) = iVar12;
          FUN_14546ec70(param_9);
          uVar5 = *param_9;
          iVar12 = *(int *)((longlong)param_9 + 0xc);
          puVar16 = local_4c8;
        }
        local_4c8 = puVar16;
        if (uVar5 < uVar7) {
          bVar3 = (&DAT_149d54800)[uVar11];
          iVar12 = iVar12 - (uint)bVar3;
          bVar4 = (&DAT_149d51a0c)[lVar20];
          iVar13 = uVar11 << (bVar3 & 0x1f);
          uVar5 = uVar5 << (bVar3 & 0x3f);
          local_4b0 = (undefined *)(local_4d0 * 2);
          abStack_458[*(short *)(local_4b0 + local_4a8)] = 4;
          uVar11 = (uint)bVar4 * (iVar13 + -1) + 0x100 >> 8;
          uVar7 = (ulonglong)uVar11 << 0x38;
          if (iVar12 < 0) {
            *param_9 = uVar5;
            *(int *)((longlong)param_9 + 0xc) = iVar12;
            FUN_14546ec70(param_9);
            uVar5 = *param_9;
            iVar12 = *(int *)((longlong)param_9 + 0xc);
          }
          if (uVar5 < uVar7) {
            bVar3 = (&DAT_149d54800)[uVar11];
            iVar13 = uVar11 << (bVar3 & 0x1f);
            iVar12 = iVar12 - (uint)bVar3;
            uVar5 = uVar5 << (bVar3 & 0x3f);
            uVar11 = (iVar13 + -1) * 0x9f + 0x100U >> 8;
            uVar7 = (ulonglong)uVar11 << 0x38;
            if (iVar12 < 0) {
              *param_9 = uVar5;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_14546ec70(param_9);
              uVar5 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar5 < uVar7) {
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar13 = 5;
            }
            else {
              uVar11 = iVar13 - uVar11;
              iVar13 = 6;
              uVar5 = uVar5 - uVar7;
              bVar3 = (&DAT_149d54800)[uVar11];
            }
            iVar8 = uVar11 << (bVar3 & 0x1f);
            uVar5 = uVar5 << (bVar3 & 0x3f);
            iVar12 = iVar12 - (uint)bVar3;
          }
          else {
            uVar11 = iVar13 - uVar11;
            bVar3 = (&DAT_149d54800)[uVar11];
            iVar13 = uVar11 << (bVar3 & 0x1f);
            iVar12 = iVar12 - (uint)bVar3;
            uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
            uVar11 = (iVar13 + -1) * 0xa5 + 0x100U >> 8;
            uVar7 = (ulonglong)uVar11 << 0x38;
            if (iVar12 < 0) {
              *param_9 = uVar5;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_14546ec70(param_9);
              uVar5 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar5 < uVar7) {
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar13 = uVar11 << (bVar3 & 0x1f);
              uVar5 = uVar5 << (bVar3 & 0x3f);
              uVar9 = 0;
            }
            else {
              uVar11 = iVar13 - uVar11;
              uVar9 = 2;
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar13 = uVar11 << (bVar3 & 0x1f);
              uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
            }
            iVar12 = iVar12 - (uint)bVar3;
            uVar11 = (iVar13 + -1) * 0x91 + 0x100U >> 8;
            uVar7 = (ulonglong)uVar11 << 0x38;
            if (iVar12 < 0) {
              *param_9 = uVar5;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_14546ec70(param_9);
              uVar5 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar5 < uVar7) {
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar8 = uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar5 = uVar5 << (bVar3 & 0x3f);
              iVar13 = uVar9 + 7;
            }
            else {
              bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
              iVar8 = iVar13 - uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
              iVar13 = (uVar9 | 1) + 7;
            }
          }
        }
        else {
          local_4b0 = (undefined *)(local_4d0 * 2);
          bVar3 = (&DAT_149d51a0d)[lVar20];
          uVar11 = iVar13 - uVar11;
          bVar4 = (&DAT_149d54800)[uVar11];
          iVar13 = uVar11 << (bVar4 & 0x1f);
          iVar12 = iVar12 - (uint)bVar4;
          uVar5 = uVar5 - uVar7 << (bVar4 & 0x3f);
          abStack_458[*(short *)(local_4b0 + local_4a8)] = 5;
          uVar11 = (uint)bVar3 * (iVar13 + -1) + 0x100 >> 8;
          puVar16 = puVar18;
          if (iVar12 < 0) {
            *param_9 = uVar5;
            *(int *)((longlong)param_9 + 0xc) = iVar12;
            FUN_14546ec70(param_9);
            uVar5 = *param_9;
            iVar12 = *(int *)((longlong)param_9 + 0xc);
            puVar16 = local_4c8;
          }
          local_4c8 = puVar16;
          if (uVar5 < (ulonglong)uVar11 << 0x38) {
            bVar3 = (&DAT_149d54800)[uVar11];
            iVar12 = iVar12 - (uint)bVar3;
            iVar13 = uVar11 << (bVar3 & 0x1f);
            uVar5 = uVar5 << (bVar3 & 0x3f);
            uVar11 = (uint)(byte)(&DAT_149d51a0e)[lVar20] * (iVar13 + -1) + 0x100 >> 8;
            uVar7 = (ulonglong)uVar11 << 0x38;
            local_4c8 = local_4b0;
            local_4c0 = puVar18;
            if (iVar12 < 0) {
              *param_9 = uVar5;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_14546ec70(param_9);
              uVar5 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
            }
            if (uVar5 < uVar7) {
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar13 = uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar5 = uVar5 << (bVar3 & 0x3f);
              uVar11 = (iVar13 + -1) * 0xad + 0x100U >> 8;
              uVar7 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar5;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar5 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar5 < uVar7) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar5 << (bVar3 & 0x3f);
                uVar9 = 0;
              }
              else {
                uVar11 = iVar13 - uVar11;
                uVar9 = 4;
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x94 + 0x100U >> 8;
              uVar7 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar5;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar5 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar5 < uVar7) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar5 << (bVar3 & 0x3f);
                uVar17 = 0;
              }
              else {
                uVar17 = 2;
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar13 = iVar13 - uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x8c + 0x100U >> 8;
              uVar7 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar5;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar5 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar5 < uVar7) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar8 = uVar11 << (bVar3 & 0x1f);
                iVar12 = iVar12 - (uint)bVar3;
                uVar5 = uVar5 << (bVar3 & 0x3f);
                iVar13 = (uVar9 | uVar17) + 0xb;
              }
              else {
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar8 = iVar13 - uVar11 << (bVar3 & 0x1f);
                iVar12 = iVar12 - (uint)bVar3;
                uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
                iVar13 = (uVar9 | 1 | uVar17) + 0xb;
              }
            }
            else {
              uVar11 = iVar13 - uVar11;
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar13 = uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar7 = uVar5 - uVar7 << (bVar3 & 0x3f);
              uVar11 = (iVar13 + -1) * 0xb0 + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 << (bVar3 & 0x3f);
                uVar9 = 0;
              }
              else {
                uVar11 = iVar13 - uVar11;
                uVar9 = 8;
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 - uVar5 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x9b + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 << (bVar3 & 0x3f);
                uVar17 = 0;
              }
              else {
                uVar17 = 4;
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar13 = iVar13 - uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 - uVar5 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x8c + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 << (bVar3 & 0x3f);
                uVar14 = 0;
              }
              else {
                uVar14 = 2;
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar13 = iVar13 - uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 - uVar5 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x87 + 0x100U >> 8;
              uVar10 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar10) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar8 = uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar7 << (bVar3 & 0x3f);
              }
              else {
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar8 = iVar13 - uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar7 - uVar10 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              iVar13 = (uVar7 >= uVar10 | uVar14 | uVar17 | uVar9) + 0x13;
              local_4b0 = local_4c8;
              puVar18 = local_4c0;
            }
          }
          else {
            uVar9 = iVar13 - uVar11;
            bVar3 = (&DAT_149d54800)[uVar9];
            iVar13 = uVar9 << (bVar3 & 0x1f);
            iVar12 = iVar12 - (uint)bVar3;
            uVar7 = uVar5 - ((ulonglong)uVar11 << 0x38) << (bVar3 & 0x3f);
            uVar11 = (uint)(byte)(&DAT_149d51a0f)[lVar20] * (iVar13 + -1) + 0x100 >> 8;
            uVar5 = (ulonglong)uVar11 << 0x38;
            puVar16 = puVar18;
            if (iVar12 < 0) {
              *param_9 = uVar7;
              *(int *)((longlong)param_9 + 0xc) = iVar12;
              FUN_14546ec70(param_9);
              uVar7 = *param_9;
              iVar12 = *(int *)((longlong)param_9 + 0xc);
              puVar16 = local_4c8;
            }
            local_4c8 = puVar16;
            if (uVar7 < uVar5) {
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar13 = uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar7 = uVar7 << (bVar3 & 0x3f);
              uVar11 = (iVar13 + -1) * 0xb4 + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 << (bVar3 & 0x3f);
                uVar9 = 0;
              }
              else {
                uVar11 = iVar13 - uVar11;
                uVar9 = 0x10;
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 - uVar5 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x9d + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                local_4c0 = (undefined *)((ulonglong)local_4c0._4_4_ << 0x20);
              }
              else {
                uVar11 = iVar13 - uVar11;
                local_4c0 = (undefined *)CONCAT44(local_4c0._4_4_,8);
                uVar7 = uVar7 - uVar5;
                bVar3 = (&DAT_149d54800)[uVar11];
              }
              iVar13 = uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar7 = uVar7 << (bVar3 & 0x3f);
              uVar11 = (iVar13 + -1) * 0x8d + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 << (bVar3 & 0x3f);
                uVar17 = 0;
              }
              else {
                uVar11 = iVar13 - uVar11;
                uVar17 = 4;
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 - uVar5 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x86 + 0x100U >> 8;
              uVar5 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar5) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar13 = uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 << (bVar3 & 0x3f);
                uVar14 = 0;
              }
              else {
                uVar14 = 2;
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar13 = iVar13 - uVar11 << (bVar3 & 0x1f);
                uVar7 = uVar7 - uVar5 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              uVar11 = (iVar13 + -1) * 0x82 + 0x100U >> 8;
              uVar10 = (ulonglong)uVar11 << 0x38;
              if (iVar12 < 0) {
                *param_9 = uVar7;
                *(int *)((longlong)param_9 + 0xc) = iVar12;
                FUN_14546ec70(param_9);
                uVar7 = *param_9;
                iVar12 = *(int *)((longlong)param_9 + 0xc);
              }
              if (uVar7 < uVar10) {
                bVar3 = (&DAT_149d54800)[uVar11];
                iVar8 = uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar7 << (bVar3 & 0x3f);
              }
              else {
                bVar3 = (&DAT_149d54800)[iVar13 - uVar11];
                iVar8 = iVar13 - uVar11 << (bVar3 & 0x1f);
                uVar5 = uVar7 - uVar10 << (bVar3 & 0x3f);
              }
              iVar12 = iVar12 - (uint)bVar3;
              iVar13 = (uVar9 | uVar7 >= uVar10 | uVar14 | uVar17 | (uint)local_4c0) + 0x23;
              puVar18 = local_4c8;
            }
            else {
              uVar11 = iVar13 - uVar11;
              uVar9 = 0;
              bVar3 = (&DAT_149d54800)[uVar11];
              iVar8 = uVar11 << (bVar3 & 0x1f);
              iVar12 = iVar12 - (uint)bVar3;
              uVar5 = uVar7 - uVar5 << (bVar3 & 0x3f);
              lVar20 = 0;
              do {
                uVar11 = (uint)(byte)puVar18[lVar20] * (iVar8 + -1) + 0x100 >> 8;
                uVar7 = (ulonglong)uVar11 << 0x38;
                if (iVar12 < 0) {
                  *param_9 = uVar5;
                  *(int *)((longlong)param_9 + 0xc) = iVar12;
                  FUN_14546ec70(param_9);
                  uVar5 = *param_9;
                  iVar12 = *(int *)((longlong)param_9 + 0xc);
                }
                bVar21 = uVar5 < uVar7;
                if (bVar21) {
                  bVar3 = (&DAT_149d54800)[uVar11];
                  iVar8 = uVar11 << (bVar3 & 0x1f);
                  uVar5 = uVar5 << (bVar3 & 0x3f);
                }
                else {
                  bVar3 = (&DAT_149d54800)[iVar8 - uVar11];
                  iVar8 = iVar8 - uVar11 << (bVar3 & 0x1f);
                  uVar5 = uVar5 - uVar7 << (bVar3 & 0x3f);
                }
                iVar12 = iVar12 - (uint)bVar3;
                lVar20 = lVar20 + 1;
                uVar9 = uVar9 * 2 | (uint)!bVar21;
              } while (lVar20 < local_478);
              iVar13 = uVar9 + 0x43;
            }
          }
        }
        iVar13 = (int)((longlong)iVar13 * (longlong)local_4d8 >> ((byte)local_4b8 & 0x3f));
        puVar16 = local_4b0;
      }
      uVar11 = (iVar8 + 1U & 0x1ffffff) >> 1;
      if (iVar12 < 0) {
        *param_9 = uVar5;
        *(int *)((longlong)param_9 + 0xc) = iVar12;
        FUN_14546ec70(param_9);
        uVar5 = *param_9;
        iVar12 = *(int *)((longlong)param_9 + 0xc);
      }
      if (uVar5 < (ulonglong)uVar11 << 0x38) {
        bVar3 = (&DAT_149d54800)[uVar11];
        iVar8 = uVar11 << (bVar3 & 0x1f);
        uVar5 = uVar5 << (bVar3 & 0x3f);
      }
      else {
        bVar3 = (&DAT_149d54800)[iVar8 - uVar11];
        iVar8 = iVar8 - uVar11 << (bVar3 & 0x1f);
        uVar5 = uVar5 - ((ulonglong)uVar11 << 0x38) << (bVar3 & 0x3f);
        iVar13 = -iVar13;
      }
      iVar12 = iVar12 - (uint)bVar3;
      local_4d0 = local_4d0 + 1;
      local_4d4 = local_4d4 + 1;
      *(int *)(local_470 + (longlong)*(short *)(puVar16 + local_4a8) * 4) = iVar13;
      param_6 = abStack_458[*(short *)(local_468 + local_4d0 * 4)] + 1 +
                (uint)abStack_458[*(short *)(local_468 + 2 + local_4d0 * 4)] >> 1;
      local_4d8 = param_5[1];
    } while (local_4d0 < local_460);
  }
  *param_9 = uVar5;
LAB_14547b4cc:
  *(int *)((longlong)param_9 + 0xc) = iVar12;
  *(int *)(param_9 + 1) = iVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_4f8);
}



// FUNCTION 14547b510 FUN_14547b510 body=100 status=ok
// SIG undefined FUN_14547b510(void)

undefined *
FUN_14547b510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1454726e0(param_1,param_2,param_4);
  bVar2 = FUN_1454726a0(param_1,param_3,param_4);
  return &DAT_149d52870 + ((ulonglong)bVar2 + (ulonglong)bVar1 * 10) * 9;
}



// FUNCTION 14547b580 FUN_14547b580 body=50 status=ok
// SIG undefined FUN_14547b580(void)

undefined4 FUN_14547b580(longlong param_1,int param_2,char param_3,longlong param_4)

{
  short sVar1;
  undefined4 local_res18;
  
  local_res18 = *(undefined4 *)(param_1 + 0xc + (longlong)param_2 * 4);
  if (*(int *)(param_4 + (longlong)*(char *)((longlong)param_2 + 8 + param_1) * 4) !=
      *(int *)(param_4 + (longlong)param_3 * 4)) {
    sVar1 = (short)local_res18;
    local_res18._2_2_ = (short)((uint)local_res18 >> 0x10);
    local_res18 = CONCAT22(-local_res18._2_2_,-sVar1);
  }
  return local_res18;
}



// FUNCTION 14547b5c0 FUN_14547b5c0 body=122 status=ok
// SIG undefined FUN_14547b5c0(void)

bool FUN_14547b5c0(ulonglong *param_1,int param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = ((int)param_1[1] + -1) * param_2 + 0x100U >> 8;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14546ec70();
  }
  uVar3 = *param_1;
  uVar2 = (ulonglong)uVar4 << 0x38;
  bVar5 = uVar2 <= uVar3;
  if (bVar5) {
    uVar4 = (int)param_1[1] - uVar4;
    uVar3 = uVar3 - uVar2;
  }
  bVar1 = (&DAT_149d54800)[uVar4 & 0xff];
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
  *(uint *)(param_1 + 1) = uVar4 << (bVar1 & 0x1f);
  *param_1 = uVar3 << (bVar1 & 0x3f);
  return bVar5;
}



// FUNCTION 14547b640 FUN_14547b640 body=279 status=ok
// SIG undefined FUN_14547b640(void)

void FUN_14547b640(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                  uint param_6)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = **(longlong **)(param_1 + 0x35d0);
  puVar4 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x430) + 8) +
           ((longlong)(param_3 * *(int *)(param_2 + 0x6c0)) + (longlong)param_4) * 0xc);
  if ((*(int *)(param_2 + 0x694) == 0) || (*(char *)(param_2 + 0x6a4) != '\0')) {
    FUN_14547bdd0(param_2 + 0x290,param_1 + 0x3410,param_3,param_4,param_1 + 0x10,param_5,param_6);
  }
  else {
    FUN_14547dcf0(param_2,param_1 + 0x3410,param_3,param_4,param_1 + 0x10,param_5,param_6);
    uVar1 = *(undefined2 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0xc);
    if (0 < (int)param_6) {
      uVar6 = (ulonglong)param_6;
      do {
        puVar3 = puVar4;
        lVar5 = (longlong)param_5;
        if (0 < param_5) {
          do {
            *(undefined2 *)(puVar3 + 1) = uVar1;
            *puVar3 = uVar2;
            lVar5 = lVar5 + -1;
            puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
          } while (lVar5 != 0);
        }
        puVar4 = (undefined8 *)((longlong)puVar4 + (longlong)*(int *)(param_2 + 0x6c0) * 0xc);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14547b760 FUN_14547b760 body=93 status=ok
// SIG undefined FUN_14547b760(void)

char FUN_14547b760(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  do {
    iVar2 = FUN_14547b5c0(param_1,*(undefined1 *)(((longlong)cVar1 >> 1) + param_2));
    cVar1 = (&DAT_149d52c28)[(longlong)iVar2 + (longlong)cVar1];
  } while ('\0' < cVar1);
  return -cVar1;
}



// FUNCTION 14547b7c0 FUN_14547b7c0 body=154 status=ok
// SIG undefined FUN_14547b7c0(void)

void FUN_14547b7c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x1228);
  cVar3 = '\0';
  do {
    iVar4 = FUN_14547b5c0(param_3,*(undefined1 *)
                                   (((longlong)cVar3 >> 1) + (longlong)param_4 * 9 + lVar2));
    cVar3 = (&DAT_149d52c28)[(longlong)iVar4 + (longlong)cVar3];
  } while ('\0' < cVar3);
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) +
                    ((ulonglong)(byte)-cVar3 + (longlong)param_4 * 10) * 4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



// FUNCTION 14547b860 FUN_14547b860 body=161 status=ok
// SIG undefined FUN_14547b860(void)

undefined4 FUN_14547b860(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x1228);
  iVar5 = 0;
  do {
    cVar3 = (char)iVar5;
    iVar4 = FUN_14547b5c0(param_3,*(undefined1 *)
                                   (((longlong)cVar3 >> 1) + 0x776 + (longlong)param_4 * 3 + lVar2))
    ;
    iVar5 = (int)(char)(&DAT_149d52c3c)[(longlong)iVar4 + (longlong)cVar3];
  } while ('\0' < (char)(&DAT_149d52c3c)[(longlong)iVar4 + (longlong)cVar3]);
  iVar5 = -iVar5;
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 0x3060 +
                    ((longlong)iVar5 + (longlong)param_4 * 4) * 4);
    *piVar1 = *piVar1 + 1;
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + '\n');
}



// FUNCTION 14547b910 FUN_14547b910 body=94 status=ok
// SIG undefined FUN_14547b910(void)

int FUN_14547b910(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    cVar1 = (char)iVar3;
    iVar2 = FUN_14547b5c0(param_1,*(undefined1 *)(((longlong)cVar1 >> 1) + 5 + param_2));
    iVar3 = (int)(char)(&DAT_149d52dc0)[(longlong)iVar2 + (longlong)cVar1];
  } while ('\0' < (char)(&DAT_149d52dc0)[(longlong)iVar2 + (longlong)cVar1]);
  return -iVar3;
}



// FUNCTION 14547b970 FUN_14547b970 body=431 status=ok
// SIG undefined FUN_14547b970(void)

uint FUN_14547b970(longlong param_1,longlong param_2,byte param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  
  lVar3 = *(longlong *)(param_2 + 0x1a0);
  lVar12 = *(longlong *)(param_2 + 0x1d0);
  lVar4 = *(longlong *)(param_2 + 0x1c8);
  bVar2 = (&DAT_149d54b30)[*(byte *)**(undefined8 **)(param_2 + 0x1c0)];
  bVar5 = bVar2;
  if ((lVar12 != 0) && (*(char *)(lVar12 + 3) == '\0')) {
    bVar5 = *(byte *)(lVar12 + 2);
  }
  bVar6 = bVar2;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 3) == '\0')) {
    bVar6 = *(byte *)(lVar4 + 2);
  }
  bVar7 = bVar5;
  if (lVar4 != 0) {
    bVar7 = bVar6;
  }
  uVar1 = (uint)bVar5;
  if (lVar12 == 0) {
    uVar1 = (uint)bVar7;
  }
  puVar13 = (undefined1 *)0x0;
  uVar1 = bVar7 + uVar1;
  uVar14 = (uint)bVar2;
  if (param_3 == 1) {
    uVar10 = (ulonglong)(uVar14 < uVar1) + 10;
LAB_14547ba63:
    puVar11 = (undefined1 *)(uVar10 + *(longlong *)(param_1 + 0x1228) + 0x7a3);
  }
  else {
    if (param_3 == 2) {
      uVar10 = 6;
      if (uVar14 < uVar1) {
        uVar10 = 8;
      }
      goto LAB_14547ba63;
    }
    puVar11 = puVar13;
    if (param_3 == 3) {
      uVar10 = (ulonglong)(-(uint)(uVar14 < uVar1) & 3);
      goto LAB_14547ba63;
    }
  }
  uVar8 = FUN_14547b5c0(param_4,*puVar11);
  if ((uVar8 != 0) && (1 < param_3)) {
    iVar9 = FUN_14547b5c0(param_4,puVar11[1]);
    uVar8 = uVar8 + iVar9;
    if ((uVar8 != 1) && (2 < param_3)) {
      iVar9 = FUN_14547b5c0(param_4,puVar11[2]);
      uVar8 = uVar8 + iVar9;
    }
  }
  if (lVar3 == 0) goto LAB_14547bafe;
  lVar3 = lVar3 + 0x3190;
  if (param_3 == 1) {
    lVar12 = 0x38;
    if (uVar14 < uVar1) {
      lVar12 = 0x40;
    }
LAB_14547baf5:
    puVar13 = (undefined1 *)(lVar12 + lVar3);
  }
  else {
    if (param_3 == 2) {
      lVar12 = 0x20;
      if (bVar2 < uVar1) {
        lVar12 = 0x2c;
      }
      goto LAB_14547baf5;
    }
    if (param_3 == 3) {
      puVar13 = (undefined1 *)((ulonglong)(-(uint)(bVar2 < uVar1) & 0x10) + lVar3);
    }
  }
  *(int *)(puVar13 + (longlong)(int)uVar8 * 4) = *(int *)(puVar13 + (longlong)(int)uVar8 * 4) + 1;
LAB_14547bafe:
  return uVar8 & 0xff;
}



// FUNCTION 14547bb20 FUN_14547bb20 body=520 status=ok
// SIG undefined FUN_14547bb20(void)

uint FUN_14547bb20(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  uint param_6,int param_7)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  lVar2 = **(longlong **)(param_2 + 0x1c0);
  param_4 = *(int *)(param_1 + 0x430) * param_3 + param_4;
  if (*(char *)(param_1 + 0x11a8) == '\0') {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x508);
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    iVar12 = 0;
    uVar7 = 0x7fffffff;
    if (0 < param_7) {
      do {
        if (0 < (int)param_6) {
          pbVar8 = (byte *)((*(int *)(param_1 + 0x430) * iVar12 + param_4) + lVar3);
          uVar11 = (ulonglong)param_6;
          do {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            uVar4 = (uint)bVar1;
            if (uVar7 < bVar1) {
              uVar4 = uVar7;
            }
            uVar7 = uVar4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < param_7);
    }
  }
  if (*(char *)(param_1 + 0x11a9) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x510);
    iVar12 = 0;
    if (param_7 < 1) {
      return uVar7;
    }
    do {
      iVar10 = 0;
      if (0 < (int)param_6) {
        if (lVar3 == 0) {
          iVar10 = 0;
          do {
            iVar6 = iVar12 * *(int *)(param_1 + 0x430) + iVar10;
            iVar10 = iVar10 + 1;
            *(undefined1 *)((iVar6 + param_4) + lVar2) = 0;
          } while (iVar10 < (int)param_6);
        }
        else {
          do {
            iVar6 = iVar12 * *(int *)(param_1 + 0x430) + iVar10;
            iVar10 = iVar10 + 1;
            lVar9 = (longlong)(iVar6 + param_4);
            *(undefined1 *)(lVar9 + lVar2) = *(undefined1 *)(lVar9 + lVar3);
          } while (iVar10 < (int)param_6);
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_7);
    return uVar7;
  }
  if ((&DAT_000011ac)[param_1] != '\0') {
    cVar5 = FUN_14547b5c0(param_5);
    *(char *)(lVar2 + 5) = cVar5;
    if (cVar5 != '\0') goto LAB_14547bccc;
  }
  uVar7 = FUN_14547b910(param_5);
LAB_14547bccc:
  iVar12 = 0;
  if (0 < param_7) {
    do {
      iVar10 = 0;
      if (0 < (int)param_6) {
        do {
          iVar6 = iVar12 * *(int *)(param_1 + 0x430) + iVar10;
          iVar10 = iVar10 + 1;
          *(char *)((longlong)(iVar6 + param_4) + *(longlong *)(param_1 + 0x510)) = (char)uVar7;
        } while (iVar10 < (int)param_6);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_7);
  }
  return uVar7;
}



// FUNCTION 14547bd30 FUN_14547bd30 body=157 status=ok
// SIG undefined FUN_14547bd30(void)

undefined8 FUN_14547bd30(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x11a8) != '\0') &&
     ((*(byte *)(param_1 + 0x11f8 + (longlong)param_3 * 4) & 8) != 0)) {
    return 1;
  }
  iVar2 = 0;
  if (*(longlong *)(param_2 + 0x1d0) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)*(char *)(*(longlong *)(param_2 + 0x1d0) + 3);
  }
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    iVar2 = (int)*(char *)(*(longlong *)(param_2 + 0x1c8) + 3);
  }
  uVar3 = FUN_14547b5c0(param_4,*(undefined1 *)
                                 (*(longlong *)(param_1 + 0x1228) + 0x7af +
                                 (longlong)(iVar2 + iVar4)));
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 0x31e8 +
                    ((longlong)(int)uVar3 + (longlong)(iVar2 + iVar4) * 2) * 4);
    *piVar1 = *piVar1 + 1;
  }
  return uVar3;
}



// FUNCTION 14547bdd0 FUN_14547bdd0 body=1279 status=ok
// SIG undefined FUN_14547bdd0(void)

void FUN_14547bdd0(longlong param_1,longlong param_2,int param_3,int param_4,undefined8 param_5,
                  int param_6,int param_7)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  
  uVar11 = *(undefined8 *)(param_2 + 0x1d0);
  pcVar1 = (char *)**(undefined8 **)(param_2 + 0x1c0);
  uVar2 = *(undefined8 *)(param_2 + 0x1c8);
  param_4 = param_3 * *(int *)(param_1 + 0x430) + param_4;
  cVar8 = *pcVar1;
  if (*(char *)(param_1 + 0x11a8) == '\0') {
    cVar5 = '\0';
  }
  else if (*(char *)(param_1 + 0x11a9) == '\0') {
    cVar5 = '\0';
    lVar3 = *(longlong *)(param_1 + 0x510);
    iVar10 = 0;
    lVar4 = *(longlong *)(param_1 + 0x508);
    if (0 < param_7) {
      do {
        iVar14 = 0;
        if (0 < param_6) {
          if (lVar4 == 0) {
            iVar14 = 0;
            do {
              iVar9 = iVar10 * *(int *)(param_1 + 0x430) + iVar14;
              iVar14 = iVar14 + 1;
              *(undefined1 *)((iVar9 + param_4) + lVar3) = 0;
            } while (iVar14 < param_6);
          }
          else {
            do {
              iVar9 = iVar10 * *(int *)(param_1 + 0x430) + iVar14;
              iVar14 = iVar14 + 1;
              lVar13 = (longlong)(iVar9 + param_4);
              *(undefined1 *)(lVar13 + lVar3) = *(undefined1 *)(lVar13 + lVar4);
            } while (iVar14 < param_6);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_7);
    }
  }
  else {
    cVar5 = FUN_14547b910(param_5);
    iVar10 = 0;
    if (0 < param_7) {
      do {
        iVar14 = 0;
        if (0 < param_6) {
          do {
            iVar9 = iVar10 * *(int *)(param_1 + 0x430) + iVar14;
            iVar14 = iVar14 + 1;
            *(char *)((longlong)(iVar9 + param_4) + *(longlong *)(param_1 + 0x510)) = cVar5;
          } while (iVar14 < param_6);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < param_7);
    }
  }
  pcVar1[4] = cVar5;
  cVar5 = FUN_14547bd30(param_1,param_2,(int)cVar5,param_5);
  pcVar1[3] = cVar5;
  bVar7 = (&DAT_149d54b30)[*(byte *)**(undefined8 **)(param_2 + 0x1c0)];
  if ((*(int *)(param_1 + 0x438) == 4) && (2 < *(byte *)**(undefined8 **)(param_2 + 0x1c0))) {
    bVar6 = FUN_14547b970(param_1,param_2,bVar7,param_5);
  }
  else {
    bVar6 = (&DAT_149d54b40)[*(int *)(param_1 + 0x438)];
    if (bVar7 < (byte)(&DAT_149d54b40)[*(int *)(param_1 + 0x438)]) {
      bVar6 = bVar7;
    }
  }
  pcVar1[2] = bVar6;
  pcVar1[8] = '\0';
  pcVar1[9] = -1;
  if (cVar8 == '\0') {
    bVar7 = FUN_1454726e0(pcVar1,uVar11);
    bVar6 = FUN_1454726a0(pcVar1,uVar2);
    cVar8 = '\0';
    do {
      iVar10 = FUN_14547b5c0(param_5,(&DAT_149d52870)
                                     [((longlong)cVar8 >> 1) +
                                      ((ulonglong)bVar6 + (ulonglong)bVar7 * 10) * 9]);
      cVar8 = (&DAT_149d52c28)[(longlong)iVar10 + (longlong)cVar8];
    } while ('\0' < cVar8);
    pcVar1[0x14] = -cVar8;
    bVar7 = FUN_1454726e0(pcVar1,uVar11,1);
    bVar6 = FUN_1454726a0(pcVar1,uVar2);
    cVar8 = '\0';
    do {
      iVar10 = FUN_14547b5c0(param_5,(&DAT_149d52870)
                                     [((longlong)cVar8 >> 1) +
                                      ((ulonglong)bVar6 + (ulonglong)bVar7 * 10) * 9]);
      cVar8 = (&DAT_149d52c28)[(longlong)iVar10 + (longlong)cVar8];
    } while ('\0' < cVar8);
    pcVar1[0x20] = -cVar8;
    bVar7 = FUN_1454726e0(pcVar1,uVar11,2);
    bVar6 = FUN_1454726a0(pcVar1,uVar2);
    cVar8 = '\0';
    do {
      iVar10 = FUN_14547b5c0(param_5,(&DAT_149d52870)
                                     [((longlong)cVar8 >> 1) +
                                      ((ulonglong)bVar6 + (ulonglong)bVar7 * 10) * 9]);
      cVar8 = (&DAT_149d52c28)[(longlong)iVar10 + (longlong)cVar8];
    } while ('\0' < cVar8);
    pcVar1[0x2c] = -cVar8;
    bVar7 = FUN_1454726e0(pcVar1,uVar11,3);
    bVar6 = FUN_1454726a0(pcVar1,uVar2);
    cVar8 = '\0';
    do {
      iVar10 = FUN_14547b5c0(param_5,(&DAT_149d52870)
                                     [((longlong)cVar8 >> 1) +
                                      ((ulonglong)bVar6 + (ulonglong)bVar7 * 10) * 9]);
      cVar8 = (&DAT_149d52c28)[(longlong)iVar10 + (longlong)cVar8];
    } while ('\0' < cVar8);
    bVar7 = -cVar8;
    pcVar1[0x38] = bVar7;
    pcVar1[1] = bVar7;
  }
  else if (cVar8 == '\x01') {
    uVar12 = FUN_14547b510(pcVar1,uVar11,uVar2,0);
    cVar8 = FUN_14547b760(param_5,uVar12);
    pcVar1[0x2c] = cVar8;
    pcVar1[0x14] = cVar8;
    uVar11 = FUN_14547b510(pcVar1,uVar11,uVar2,1);
    bVar7 = FUN_14547b760(param_5,uVar11);
    pcVar1[1] = bVar7;
    pcVar1[0x38] = bVar7;
    pcVar1[0x20] = bVar7;
  }
  else if (cVar8 == '\x02') {
    uVar12 = FUN_14547b510(pcVar1,uVar11,uVar2,0);
    cVar8 = FUN_14547b760(param_5,uVar12);
    pcVar1[0x20] = cVar8;
    pcVar1[0x14] = cVar8;
    uVar11 = FUN_14547b510(pcVar1,uVar11,uVar2,2);
    bVar7 = FUN_14547b760(param_5,uVar11);
    pcVar1[1] = bVar7;
    pcVar1[0x38] = bVar7;
    pcVar1[0x2c] = bVar7;
  }
  else {
    uVar11 = FUN_14547b510(pcVar1,uVar11,uVar2,0);
    bVar7 = FUN_14547b760(param_5,uVar11);
    pcVar1[1] = bVar7;
  }
  cVar8 = '\0';
  do {
    iVar10 = FUN_14547b5c0(param_5,(&DAT_149d52810)[((longlong)cVar8 >> 1) + (ulonglong)bVar7 * 9]);
    cVar8 = (&DAT_149d52c28)[(longlong)iVar10 + (longlong)cVar8];
  } while ('\0' < cVar8);
  pcVar1[6] = -cVar8;
  return;
}



// FUNCTION 14547c2e0 FUN_14547c2e0 body=509 status=ok
// SIG undefined FUN_14547c2e0(void)

uint FUN_14547c2e0(ulonglong *param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 *puVar15;
  longlong lVar16;
  bool bVar17;
  uint local_res10;
  
  iVar5 = FUN_14547b5c0(param_1,*param_2);
  iVar7 = 0;
  do {
    cVar3 = (char)iVar7;
    iVar6 = FUN_14547b5c0(param_1,param_2[((longlong)cVar3 >> 1) + 1]);
    iVar7 = (int)(char)(&DAT_149d52218)[(longlong)iVar6 + (longlong)cVar3];
  } while ('\0' < (char)(&DAT_149d52218)[(longlong)iVar6 + (longlong)cVar3]);
  uVar10 = 1;
  iVar7 = -iVar7;
  if (iVar7 == 0) {
    local_res10 = FUN_14547b5c0(param_1,param_2[0xb]);
    iVar6 = 0;
    puVar15 = param_2 + (longlong)(int)local_res10 * 3 + 0x16;
  }
  else {
    local_res10 = 0;
    bVar14 = 0;
    if (0 < iVar7) {
      lVar16 = 0;
      do {
        uVar11 = (uint)(byte)param_2[lVar16 + 0xc] * ((int)param_1[1] + -1) + 0x100 >> 8;
        if (*(int *)((longlong)param_1 + 0xc) < 0) {
          FUN_14546ec70(param_1);
        }
        uVar13 = *param_1;
        uVar12 = (ulonglong)uVar11 << 0x38;
        bVar17 = uVar12 <= uVar13;
        if (bVar17) {
          uVar11 = (int)param_1[1] - uVar11;
          uVar13 = uVar13 - uVar12;
        }
        lVar16 = lVar16 + 1;
        bVar1 = (&DAT_149d54800)[uVar11 & 0xff];
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
        bVar2 = bVar14 & 0x1f;
        bVar14 = bVar14 + 1;
        local_res10 = local_res10 | (uint)bVar17 << bVar2;
        *param_1 = uVar13 << (bVar1 & 0x3f);
        *(uint *)(param_1 + 1) = uVar11 << (bVar1 & 0x1f);
      } while (lVar16 < iVar7);
    }
    iVar6 = 2 << ((char)iVar7 + 2U & 0x1f);
    puVar15 = param_2 + 0x1c;
  }
  iVar9 = 0;
  do {
    cVar3 = (char)iVar9;
    iVar8 = FUN_14547b5c0(param_1,puVar15[(longlong)cVar3 >> 1]);
    iVar9 = (int)(char)(&DAT_149d52230)[(longlong)iVar8 + (longlong)cVar3];
  } while ('\0' < (char)(&DAT_149d52230)[(longlong)iVar8 + (longlong)cVar3]);
  if (param_3 != 0) {
    if (iVar7 == 0) {
      uVar4 = param_2[0x1f];
    }
    else {
      uVar4 = param_2[0x20];
    }
    uVar10 = FUN_14547b5c0(param_1,uVar4);
  }
  uVar11 = ((local_res10 * 4 | -iVar9) * 2 | uVar10) + iVar6;
  uVar10 = ~uVar11;
  if (iVar5 == 0) {
    uVar10 = uVar11 + 1;
  }
  return uVar10;
}



// FUNCTION 14547c4e0 FUN_14547c4e0 body=420 status=ok
// SIG undefined FUN_14547c4e0(void)

void FUN_14547c4e0(longlong param_1,longlong param_2,undefined8 param_3,int param_4,char *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x1228);
  lVar3 = *(longlong *)(param_2 + 0x1a0);
  if ((*(char *)(param_1 + 0x11a8) == '\0') ||
     ((*(byte *)(param_1 + 0x11f8 + (longlong)param_4 * 4) & 4) == 0)) {
    iVar5 = *(int *)(param_1 + 0x1220);
    if (iVar5 == 2) {
      iVar4 = FUN_1454773a0();
      iVar5 = FUN_14547b5c0(param_3,*(undefined1 *)
                                     (*(longlong *)(param_1 + 0x1228) + 0x78f + (longlong)iVar4));
      if (*(longlong *)(param_2 + 0x1a0) != 0) {
        piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) + 0x30f0 +
                        ((longlong)iVar5 + (longlong)iVar4 * 2) * 4);
        *piVar1 = *piVar1 + 1;
      }
    }
    if (iVar5 == 1) {
      iVar5 = *(int *)(param_1 + 0x1164 + (longlong)*(char *)(param_1 + 0x121c) * 4);
      iVar4 = FUN_145477440(param_1,param_2);
      iVar6 = FUN_14547b5c0(param_3,*(undefined1 *)((longlong)iVar4 + 0x79e + lVar2));
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 0x3168 + ((longlong)iVar6 + (longlong)iVar4 * 2) * 4);
        *piVar1 = *piVar1 + 1;
      }
      param_5[iVar5] = *(char *)(param_1 + 0x121c);
      param_5[iVar5 == 0] = *(char *)((longlong)iVar6 + 0x121d + param_1);
    }
    else if (iVar5 == 0) {
      iVar5 = FUN_145477670(param_2);
      iVar4 = FUN_14547b5c0(param_3,*(undefined1 *)(lVar2 + 0x794 + (longlong)iVar5 * 2));
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 0x3118 + ((longlong)iVar4 + (longlong)iVar5 * 4) * 4);
        *piVar1 = *piVar1 + 1;
      }
      if (iVar4 == 0) {
        cVar7 = '\x01';
      }
      else {
        iVar5 = FUN_1454777c0(param_2);
        iVar4 = FUN_14547b5c0(param_3,*(undefined1 *)(lVar2 + 0x795 + (longlong)iVar5 * 2));
        if (lVar3 != 0) {
          piVar1 = (int *)(lVar3 + 0x3120 + ((longlong)iVar4 + (longlong)iVar5 * 4) * 4);
          *piVar1 = *piVar1 + 1;
        }
        cVar7 = (iVar4 != 0) + '\x02';
      }
      *param_5 = cVar7;
      param_5[1] = -1;
    }
  }
  else {
    *param_5 = (&DAT_000011bc)[(longlong)param_4 * 8 + param_1];
    param_5[1] = -1;
  }
  return;
}



// FUNCTION 14547c690 FUN_14547c690 body=423 status=ok
// SIG undefined FUN_14547c690(void)

void FUN_14547c690(longlong param_1,longlong param_2,byte *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  
  bVar3 = *param_3;
  if (bVar3 == 0) {
    bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
    param_3[0x14] = bVar3;
    bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
    param_3[0x20] = bVar3;
    bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
    param_3[0x2c] = bVar3;
    bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
    param_3[0x38] = bVar3;
  }
  else {
    if (bVar3 == 1) {
      bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
      param_3[0x2c] = bVar3;
      param_3[0x14] = bVar3;
      bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
      param_3[1] = bVar3;
      param_3[0x38] = bVar3;
      param_3[0x20] = bVar3;
      goto LAB_14547c7b0;
    }
    if (bVar3 == 2) {
      bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
      param_3[0x20] = bVar3;
      param_3[0x14] = bVar3;
      bVar3 = FUN_14547b7c0(param_1,param_2,param_4,0);
      param_3[1] = bVar3;
      param_3[0x38] = bVar3;
      param_3[0x2c] = bVar3;
      goto LAB_14547c7b0;
    }
    bVar3 = FUN_14547b7c0(param_1,param_2,param_4,(&DAT_149d549d0)[bVar3]);
  }
  param_3[1] = bVar3;
LAB_14547c7b0:
  lVar2 = *(longlong *)(param_1 + 0x1228);
  cVar5 = '\0';
  do {
    iVar4 = FUN_14547b5c0(param_4,*(undefined1 *)
                                   (((longlong)cVar5 >> 1) + ((ulonglong)bVar3 + 4) * 9 + lVar2));
    cVar5 = (&DAT_149d52c28)[(longlong)iVar4 + (longlong)cVar5];
  } while ('\0' < cVar5);
  if (*(longlong *)(param_2 + 0x1a0) != 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a0) +
                    ((ulonglong)(byte)-cVar5 + ((ulonglong)bVar3 + 4) * 10) * 4);
    *piVar1 = *piVar1 + 1;
  }
  param_3[6] = -cVar5;
  param_3[7] = 3;
  param_3[8] = 0;
  param_3[9] = 0xff;
  return;
}



// FUNCTION 14547c850 FUN_14547c850 body=584 status=ok
// SIG undefined FUN_14547c850(void)

int FUN_14547c850(longlong param_1,longlong param_2,char param_3,short *param_4,longlong param_5,
                 undefined8 *param_6,int param_7,int param_8,undefined8 param_9)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 local_res18;
  
  iVar11 = 1;
  if ((param_3 == '\n') || (param_3 == '\v')) {
    *(undefined8 *)param_4 = *param_6;
  }
  else {
    if (param_3 == '\f') {
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[2] = 0;
      param_4[3] = 0;
      return 1;
    }
    if (param_3 != '\r') {
      return 0;
    }
    lVar8 = *(longlong *)(param_2 + 0x1a0) + 0x3200;
    if (*(longlong *)(param_2 + 0x1a0) == 0) {
      lVar8 = 0;
    }
    lVar13 = (longlong)(param_7 + 1);
    if (0 < param_7 + 1) {
      param_5 = param_5 - (longlong)param_4;
      do {
        lVar1 = *(longlong *)(param_1 + 0x1228);
        iVar7 = 0;
        do {
          cVar2 = (char)iVar7;
          iVar6 = FUN_14547b5c0(param_9,*(undefined1 *)(((longlong)cVar2 >> 1) + 0x7b2 + lVar1));
          iVar7 = (int)(char)(&DAT_149d52210)[(longlong)iVar6 + (longlong)cVar2];
        } while ('\0' < (char)(&DAT_149d52210)[(longlong)iVar6 + (longlong)cVar2]);
        if (((param_8 == 0) ||
            (uVar9 = (int)*(short *)((longlong)param_4 + param_5) >> 0x1f,
            0x3f < (int)(((int)*(short *)((longlong)param_4 + param_5) ^ uVar9) - uVar9))) ||
           (uVar9 = (uint)*(short *)((longlong)param_4 + param_5 + 2), uVar10 = (int)uVar9 >> 0x1f,
           0x3f < (int)((uVar9 ^ uVar10) - uVar10))) {
          uVar12 = 0;
        }
        else {
          uVar12 = 1;
        }
        local_res18 = 0;
        if (iVar7 + 3U < 2) {
          uVar3 = FUN_14547c2e0(param_9,lVar1 + 0x7b5,uVar12);
          local_res18 = CONCAT22(local_res18._2_2_,uVar3);
        }
        if ((iVar7 + 3U & 0xfffffffd) == 0) {
          uVar3 = FUN_14547c2e0(param_9,lVar1 + 0x7d6,uVar12);
          local_res18 = CONCAT22(uVar3,(short)local_res18);
        }
        FUN_14546fc70(&local_res18,lVar8);
        sVar4 = (short)local_res18 + *(short *)((longlong)param_4 + param_5);
        *param_4 = sVar4;
        sVar5 = local_res18._2_2_ + *(short *)((longlong)param_4 + param_5 + 2);
        param_4[1] = sVar5;
        if (((iVar11 == 0) || (0x7ffd < (ushort)(sVar4 + 0x3fffU))) ||
           (0x7ffd < (ushort)(sVar5 + 0x3fffU))) {
          iVar11 = 0;
        }
        else {
          iVar11 = 1;
        }
        param_4 = param_4 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      return iVar11;
    }
  }
  return 1;
}



// FUNCTION 14547caa0 FUN_14547caa0 body=2054 status=ok
// SIG undefined FUN_14547caa0(void)

uint FUN_14547caa0(longlong param_1,longlong param_2,char param_3,byte param_4,longlong param_5,
                  int *param_6,int param_7,int param_8,uint param_9)

{
  byte bVar1;
  byte *pbVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  longlong local_res10;
  undefined4 local_res18;
  longlong local_50;
  int *local_48;
  
  iVar8 = param_9;
  uVar6 = 0;
  lVar18 = (longlong)(int)param_9;
  lVar17 = param_1 + 0x1164;
  lVar20 = (longlong)(char)param_4;
  param_9 = 0;
  if (*(int *)(param_1 + 0x4e8) == 0) {
    local_48 = (int *)0x0;
  }
  else {
    local_48 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x198) + 8) +
                      ((longlong)(param_7 * *(int *)(param_1 + 0x430)) + (longlong)param_8) * 0xc);
  }
  iVar7 = 0;
  param_6[0] = 0;
  param_6[1] = 0;
  uVar5 = uVar6;
  uVar12 = uVar6;
  if (-1 < iVar8) {
    piVar19 = (int *)(param_5 + 4);
    iVar7 = 0;
    local_50 = 0;
    uVar13 = uVar6;
    do {
      iVar8 = piVar19[-1] + param_7;
      if ((((iVar8 < 0) || (param_8 + *piVar19 < *(int *)(param_2 + 0x1b0))) ||
          (*(int *)(param_1 + 0x428) <= iVar8)) || (*(int *)(param_2 + 0x1b4) <= param_8 + *piVar19)
         ) {
        uVar5 = (ulonglong)param_9;
      }
      else {
        iVar8 = *piVar19;
        pbVar2 = *(byte **)(*(longlong *)(param_2 + 0x1c0) +
                           (longlong)(piVar19[-1] * *(int *)(param_2 + 0x1b8) + iVar8) * 8);
        param_9 = 1;
        iVar10 = (int)uVar12;
        if (pbVar2[8] == param_4) {
          bVar1 = *pbVar2;
          if (uVar13 == 0) {
            if (bVar1 < 3) {
              uVar12 = uVar6;
              if (iVar8 == 0) {
                uVar12 = 4;
              }
              iVar8 = *(int *)(pbVar2 + ((longlong)*(int *)(&DAT_149d54200 + uVar12 + lVar18 * 8) +
                                        2) * 0xc);
            }
            else {
              iVar8 = *(int *)(pbVar2 + 0xc);
            }
            *param_6 = iVar8;
joined_r0x00014547ce6a:
            uVar13 = 1;
            uVar11 = iVar10 + 1;
            uVar12 = (ulonglong)uVar11;
            if (param_3 != '\v') goto LAB_14547d21b;
          }
          else {
            if (bVar1 < 3) {
              uVar5 = uVar6;
              if (iVar8 == 0) {
                uVar5 = 4;
              }
              iVar14 = *(int *)(pbVar2 + ((longlong)*(int *)(&DAT_149d54200 + uVar5 + lVar18 * 8) +
                                         2) * 0xc);
            }
            else {
              iVar14 = *(int *)(pbVar2 + 0xc);
            }
            pbVar9 = pbVar2 + 0xc;
            if (iVar14 != *param_6) {
              if (bVar1 < 3) {
                if (iVar8 == 0) {
                  uVar6 = 4;
                }
                pbVar9 = pbVar2 + ((longlong)*(int *)(&DAT_149d54200 + uVar6 + lVar18 * 8) + 2) *
                                  0xc;
              }
              uVar11 = iVar10 + 1;
              param_6[iVar10] = *(int *)pbVar9;
              goto LAB_14547d21b;
            }
          }
        }
        else if (pbVar2[9] == param_4) {
          bVar1 = *pbVar2;
          if (uVar13 == 0) {
            if (bVar1 < 3) {
              uVar12 = uVar6;
              if (iVar8 == 0) {
                uVar12 = 4;
              }
              iVar8 = *(int *)(pbVar2 + (longlong)*(int *)(&DAT_149d54200 + uVar12 + lVar18 * 8) *
                                        0xc + 0x1c);
            }
            else {
              iVar8 = *(int *)(pbVar2 + 0x10);
            }
            *param_6 = iVar8;
            goto joined_r0x00014547ce6a;
          }
          if (bVar1 < 3) {
            uVar5 = uVar6;
            if (iVar8 == 0) {
              uVar5 = 4;
            }
            iVar14 = *(int *)(pbVar2 + (longlong)*(int *)(&DAT_149d54200 + uVar5 + lVar18 * 8) * 0xc
                                       + 0x1c);
          }
          else {
            iVar14 = *(int *)(pbVar2 + 0x10);
          }
          pbVar9 = pbVar2 + 0x10;
          if (iVar14 != *param_6) {
            if (bVar1 < 3) {
              if (iVar8 == 0) {
                uVar6 = 4;
              }
              pbVar9 = pbVar2 + ((longlong)*(int *)(&DAT_149d54200 + uVar6 + lVar18 * 8) * 3 + 7) *
                                4;
            }
            uVar11 = iVar10 + 1;
            param_6[iVar10] = *(int *)pbVar9;
            goto LAB_14547d21b;
          }
        }
        uVar5 = 1;
      }
      local_50 = local_50 + 1;
      iVar7 = iVar7 + 1;
      piVar19 = piVar19 + 2;
    } while (local_50 < 2);
  }
  iVar8 = (int)uVar5;
  lVar18 = (longlong)iVar7;
  if (lVar18 < 8) {
    iVar7 = (int)uVar12;
    piVar19 = (int *)(param_5 + 4 + lVar18 * 8);
    do {
      iVar10 = (int)uVar12;
      iVar8 = piVar19[-1] + param_7;
      if (-1 < iVar8) {
        if (((*piVar19 + param_8 < *(int *)(param_2 + 0x1b0)) ||
            (*(int *)(param_1 + 0x428) <= iVar8)) ||
           (*(int *)(param_2 + 0x1b4) <= *piVar19 + param_8)) {
          uVar5 = (ulonglong)param_9;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(param_2 + 0x1c0) +
                    (longlong)(piVar19[-1] * *(int *)(param_2 + 0x1b8) + *piVar19) * 8);
          uVar5 = 1;
          param_9 = 1;
          if (*(byte *)(lVar16 + 8) == param_4) {
            iVar14 = *(int *)(lVar16 + 0xc);
          }
          else {
            if (*(byte *)(lVar16 + 9) != param_4) goto LAB_14547cee8;
            iVar14 = *(int *)(lVar16 + 0x10);
          }
          if (iVar7 == 0) {
            uVar11 = iVar10 + 1;
            uVar12 = (ulonglong)uVar11;
            *param_6 = iVar14;
            iVar7 = 1;
            if (param_3 != '\v') goto LAB_14547d21b;
          }
          else if (iVar14 != *param_6) goto LAB_14547cf14;
        }
      }
LAB_14547cee8:
      iVar8 = (int)uVar5;
      lVar18 = lVar18 + 1;
      piVar19 = piVar19 + 2;
    } while (lVar18 < 8);
  }
  iVar10 = (int)uVar12;
  if (local_48 != (int *)0x0) {
    if (*(byte *)(local_48 + 2) == param_4) {
      iVar14 = *local_48;
    }
    else {
      if (*(byte *)((longlong)local_48 + 9) != param_4) goto LAB_14547cf40;
      iVar14 = local_48[1];
    }
    if (iVar10 == 0) {
      *param_6 = iVar14;
      uVar12 = 1;
      uVar11 = 1;
      if (param_3 != '\v') goto LAB_14547d21b;
    }
    else if (iVar14 != *param_6) {
LAB_14547cf14:
      uVar11 = iVar10 + 1;
      param_6[iVar10] = iVar14;
      goto LAB_14547d21b;
    }
  }
LAB_14547cf40:
  iVar10 = (int)uVar12;
  iVar7 = iVar10;
  if (iVar8 != 0) {
    piVar19 = (int *)(param_5 + 4);
    local_res10 = 0;
    do {
      iVar8 = piVar19[-1] + param_7;
      if (-1 < iVar8) {
        iVar7 = param_8 + *piVar19;
        if (((*(int *)(param_2 + 0x1b0) <= iVar7) && (iVar8 < *(int *)(param_1 + 0x428))) &&
           (iVar7 < *(int *)(param_2 + 0x1b4))) {
          lVar18 = *(longlong *)
                    (*(longlong *)(param_2 + 0x1c0) +
                    (longlong)(piVar19[-1] * *(int *)(param_2 + 0x1b8) + *piVar19) * 8);
          bVar1 = *(byte *)(lVar18 + 8);
          lVar16 = (longlong)(char)bVar1;
          if ('\0' < (char)bVar1) {
            if (bVar1 != param_4) {
              iVar8 = (int)uVar12;
              if (iVar10 == 0) {
                iVar7 = FUN_14547b580(lVar18,0,param_4);
                uVar11 = iVar8 + 1;
                uVar12 = (ulonglong)uVar11;
                *param_6 = iVar7;
                iVar10 = 1;
                if (param_3 != '\v') goto LAB_14547d21b;
              }
              else {
                lVar15 = lVar17;
                iVar7 = FUN_14547b580(lVar18,0,param_4);
                if (iVar7 != *param_6) {
                  local_res18 = *(int *)(lVar18 + 0xc);
                  if (*(int *)(lVar15 + lVar16 * 4) != *(int *)(lVar15 + lVar20 * 4)) {
                    sVar3 = (short)local_res18;
                    local_res18._2_2_ = (short)((uint)local_res18 >> 0x10);
                    local_res18 = CONCAT22(-local_res18._2_2_,-sVar3);
                  }
                  uVar11 = iVar8 + 1;
                  param_6[iVar8] = local_res18;
                  goto LAB_14547d21b;
                }
              }
            }
            bVar1 = *(byte *)(lVar18 + 9);
            if ((('\0' < (char)bVar1) && (bVar1 != param_4)) &&
               (local_res18 = *(int *)(lVar18 + 0x10), local_res18 != *(int *)(lVar18 + 0xc))) {
              iVar8 = (int)uVar12;
              if (iVar10 == 0) {
                iVar7 = FUN_14547b580(lVar18,1,param_4);
                uVar11 = iVar8 + 1;
                uVar12 = (ulonglong)uVar11;
                *param_6 = iVar7;
                iVar10 = 1;
                if (param_3 != '\v') goto LAB_14547d21b;
              }
              else {
                lVar16 = lVar17;
                iVar7 = FUN_14547b580(lVar18,1,param_4);
                if (iVar7 != *param_6) {
                  if (*(int *)(lVar16 + (longlong)(char)bVar1 * 4) != *(int *)(lVar16 + lVar20 * 4))
                  {
                    sVar3 = (short)local_res18;
                    local_res18._2_2_ = (short)((uint)local_res18 >> 0x10);
                    local_res18 = CONCAT22(-local_res18._2_2_,-sVar3);
                  }
                  uVar11 = iVar8 + 1;
                  param_6[iVar8] = local_res18;
                  goto LAB_14547d21b;
                }
              }
            }
          }
        }
      }
      iVar7 = (int)uVar12;
      local_res10 = local_res10 + 1;
      piVar19 = piVar19 + 2;
    } while (local_res10 < 8);
  }
  if (local_48 != (int *)0x0) {
    bVar1 = *(byte *)(local_48 + 2);
    if ((bVar1 != param_4) && ('\0' < (char)bVar1)) {
      local_res18 = *local_48;
      if (*(int *)(lVar17 + (longlong)(char)bVar1 * 4) != *(int *)(lVar17 + lVar20 * 4)) {
        sVar3 = (short)local_res18;
        local_res18._2_2_ = (short)((uint)local_res18 >> 0x10);
        local_res18 = CONCAT22(-local_res18._2_2_,-sVar3);
      }
      if (iVar7 == 0) {
        *param_6 = local_res18;
        uVar11 = 1;
        iVar7 = 1;
        if (param_3 != '\v') goto LAB_14547d21b;
      }
      else if (local_res18 != *param_6) {
        uVar11 = iVar7 + 1;
        param_6[iVar7] = local_res18;
        goto LAB_14547d21b;
      }
    }
    bVar1 = *(byte *)((longlong)local_48 + 9);
    if ((('\0' < (char)bVar1) && (bVar1 != param_4)) &&
       (local_res18 = local_48[1], local_res18 != *local_48)) {
      if (*(int *)(lVar17 + (longlong)(char)bVar1 * 4) != *(int *)(lVar17 + lVar20 * 4)) {
        sVar3 = (short)local_res18;
        local_res18._2_2_ = (short)((uint)local_res18 >> 0x10);
        local_res18 = CONCAT22(-local_res18._2_2_,-sVar3);
      }
      if (iVar7 == 0) {
        *param_6 = local_res18;
        uVar11 = 1;
        if (param_3 == '\v') {
          uVar11 = 2;
        }
        goto LAB_14547d21b;
      }
      if (local_res18 != *param_6) {
        uVar11 = iVar7 + 1;
        param_6[iVar7] = local_res18;
        goto LAB_14547d21b;
      }
    }
  }
  if (param_3 == '\v') {
    uVar11 = 2;
  }
  else {
    uVar11 = 1;
  }
LAB_14547d21b:
  lVar17 = 0;
  if (0 < (int)uVar11) {
    do {
      iVar14 = *(int *)(param_2 + 500) + 0x80;
      iVar8 = *(int *)(param_2 + 0x1f0) + -0x80;
      iVar10 = (int)*(short *)((longlong)param_6 + lVar17 * 4 + 2);
      iVar7 = *(int *)(param_2 + 0x1e8) + -0x80;
      if ((iVar7 <= iVar10) &&
         (iVar4 = *(int *)(param_2 + 0x1ec) + 0x80, iVar7 = iVar10, iVar4 < iVar10)) {
        iVar7 = iVar4;
      }
      *(short *)((longlong)param_6 + lVar17 * 4 + 2) = (short)iVar7;
      iVar7 = (int)(short)param_6[lVar17];
      if ((iVar8 <= iVar7) && (iVar8 = iVar7, iVar14 < iVar7)) {
        iVar8 = iVar14;
      }
      *(short *)(param_6 + lVar17) = (short)iVar8;
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)uVar11);
  }
  return uVar11;
}



// FUNCTION 14547d2b0 FUN_14547d2b0 body=2618 status=ok
// SIG undefined FUN_14547d2b0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14547d2b0(longlong param_1,longlong param_2,byte *param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  undefined2 uVar10;
  short sVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  ushort auStackX_c [2];
  longlong local_res10;
  byte *local_res18;
  int local_res20;
  longlong in_stack_ffffffffffffff08;
  int local_e8;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  undefined8 local_c8;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  int iStack_b4;
  int local_b0 [2];
  int *local_a8;
  int local_a0 [4];
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  byte *local_70;
  longlong local_68;
  longlong local_60;
  byte *local_58;
  longlong local_50;
  
  bVar7 = *param_3;
  lVar1 = param_1 + 0x290;
  local_d4 = *(int *)(param_1 + 0x6a8);
  lVar24 = (ulonglong)bVar7 * 0x40;
  local_70 = param_3 + 8;
  local_c8 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_a8 = (int *)(&DAT_149d53e30 + lVar24);
  FUN_14547c4e0(lVar1,param_2,param_6,(int)(char)param_3[4],local_70);
  iVar21 = 0;
  uVar16 = (uint)('\0' < (char)local_res18[9]);
  iVar12 = *(int *)(&DAT_149d53e30 + lVar24);
  iVar26 = iVar12 + param_4;
  iVar22 = 0;
  if ((((-1 < iVar26) &&
       (iVar22 = iVar21, *(int *)(param_2 + 0x1b0) <= *(int *)(&DAT_149d53e34 + lVar24) + param_5))
      && (iVar26 < *(int *)(param_1 + 0x6b8))) &&
     (*(int *)(&DAT_149d53e34 + lVar24) + param_5 < *(int *)(param_2 + 0x1b4))) {
    iVar22 = *(int *)(&DAT_149d54170 +
                     (ulonglong)
                     *(byte *)(*(longlong *)
                                (*(longlong *)(param_2 + 0x1c0) +
                                (longlong)
                                (iVar12 * *(int *)(param_2 + 0x1b8) +
                                *(int *)(&DAT_149d53e34 + lVar24)) * 8) + 1) * 4);
  }
  param_4 = *(int *)(&DAT_149d53e38 + lVar24) + param_4;
  if (((-1 < param_4) && (*(int *)(param_2 + 0x1b0) <= *(int *)(&DAT_149d53e3c + lVar24) + param_5))
     && ((param_4 < *(int *)(param_1 + 0x6b8) &&
         (*(int *)(&DAT_149d53e3c + lVar24) + param_5 < *(int *)(param_2 + 0x1b4))))) {
    iVar22 = iVar22 + *(int *)(&DAT_149d54170 +
                              (ulonglong)
                              *(byte *)(*(longlong *)
                                         (*(longlong *)(param_2 + 0x1c0) +
                                         (longlong)
                                         (*(int *)(&DAT_149d53e38 + lVar24) *
                                          *(int *)(param_2 + 0x1b8) +
                                         *(int *)(&DAT_149d53e3c + lVar24)) * 8) + 1) * 4);
  }
  bVar3 = (&DAT_149d541b0)[(longlong)iVar22 * 4];
  if ((*(char *)(param_1 + 0x1438) == '\0') ||
     ((*(byte *)(param_1 + 0x1488 + (longlong)(char)local_res18[4] * 4) & 8) == 0)) {
    if (2 < bVar7) {
      bVar20 = FUN_14547b860(lVar1,param_2,param_6,bVar3);
      local_res18[1] = bVar20;
    }
  }
  else {
    local_res18[1] = 0xc;
    if (bVar7 < 3) {
      FUN_144d82810(*(undefined8 *)(param_2 + 0x280),5,
                    "Invalid usage of segement feature on small blocks");
      return;
    }
  }
  bVar20 = *(byte *)(param_1 + 0x7ac);
  if (bVar20 == 4) {
    if (*(longlong *)(param_2 + 0x1c8) == 0) {
      uVar18 = 3;
    }
    else {
      uVar18 = (uint)*(byte *)(*(longlong *)(param_2 + 0x1c8) + 7);
    }
    if (*(longlong *)(param_2 + 0x1d0) == 0) {
      uVar25 = 3;
    }
    else {
      uVar25 = (uint)*(byte *)(*(longlong *)(param_2 + 0x1d0) + 7);
    }
    uVar17 = uVar18;
    if (((uVar18 != uVar25) && (uVar17 = uVar25, uVar18 != 3)) && (uVar17 = 3, uVar25 == 3)) {
      uVar17 = uVar18;
    }
    cVar8 = '\0';
    lVar24 = *(longlong *)(param_1 + 0x14b8);
    do {
      iVar12 = FUN_14547b5c0(param_6,*(undefined1 *)
                                      (((longlong)cVar8 >> 1) + 0x76e +
                                      lVar24 + (ulonglong)uVar17 * 2));
      cVar8 = (&DAT_149d52c4c)[(longlong)iVar12 + (longlong)cVar8];
    } while ('\0' < cVar8);
    bVar20 = -cVar8;
    param_2 = local_res10;
    if (*(longlong *)(local_res10 + 0x1a0) != 0) {
      piVar2 = (int *)(*(longlong *)(local_res10 + 0x1a0) +
                      (((ulonglong)uVar17 + 0x404) * 3 + (ulonglong)bVar20) * 4);
      *piVar2 = *piVar2 + 1;
    }
  }
  piVar2 = local_a8;
  local_res18[7] = bVar20;
  if (bVar7 < 3) {
    local_a0[3] = 1 << (*(byte *)(param_2 + 0x198) & 0x1f);
    local_a0[2] = 1 << (*(byte *)(param_2 + 0x199) & 0x1f);
    local_d0 = 0;
    local_a0[1] = 0x80008000;
    local_c0 = 0;
    local_50 = (longlong)local_a0[3] * 0xc;
    local_78 = 0;
    local_bc = (uint)bVar3;
    do {
      local_e8 = local_c0 * 2;
      local_80 = 0;
      local_90 = local_78 * 0x18;
      do {
        iVar12 = local_d0;
        lVar24 = 0;
        bVar7 = FUN_14547b860(lVar1,param_2,param_6,local_bc);
        uVar27 = 0;
        if ((byte)(bVar7 - 10) < 2) {
          uVar27 = (ulonglong)(uVar16 + 1);
          lVar19 = local_res10;
          do {
            lVar14 = 0;
            piVar2 = local_a0 + lVar24;
            lVar13 = **(longlong **)(lVar19 + 0x1c0);
            uVar18 = (uint)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
            if (local_e8 == 0) {
              in_stack_ffffffffffffff08 = (ulonglong)uVar18 << 0x20;
              iVar12 = FUN_14547caa0(lVar1,lVar19,bVar7,*(undefined1 *)(lVar24 + 8 + lVar13),
                                     local_a8,local_b0,local_res20,param_5,in_stack_ffffffffffffff08
                                    );
              *piVar2 = (&iStack_b4)[iVar12];
              lVar19 = local_res10;
            }
            else if ((local_e8 == 1) || (local_e8 == 2)) {
              if (bVar7 == 10) {
                *piVar2 = *(int *)(lVar13 + 0x18 + lVar24 * 4);
              }
              else {
                in_stack_ffffffffffffff08 = CONCAT44(uVar18,local_e8);
                FUN_14547caa0(lVar1,lVar19,bVar7,*(undefined1 *)(lVar24 + 8 + lVar13),local_a8,
                              local_b0,local_res20,param_5,in_stack_ffffffffffffff08);
                iVar12 = *(int *)(lVar13 + 0x18 + lVar24 * 4);
                *piVar2 = 0;
                do {
                  lVar19 = local_res10;
                  if (iVar12 != local_b0[lVar14]) {
                    *piVar2 = local_b0[lVar14];
                    break;
                  }
                  lVar14 = lVar14 + 1;
                } while (lVar14 < 2);
              }
            }
            else if (local_e8 == 3) {
              if (bVar7 == 10) {
                *piVar2 = *(int *)((longlong)piVar2 + lVar13 + -(longlong)local_a0 + 0x30);
              }
              else {
                *piVar2 = 0;
                iVar12 = *(int *)((longlong)piVar2 + lVar13 + (0x24 - (longlong)local_a0));
                lVar14 = lVar13 + -(longlong)local_a0 + 0x1c;
                iVar22 = *(int *)((longlong)piVar2 + lVar14 + 0x14);
                if (iVar22 == iVar12) {
                  iVar12 = *(int *)(lVar13 + 0x18 + lVar24 * 4);
                  if (iVar22 == iVar12) {
                    in_stack_ffffffffffffff08 = CONCAT44(uVar18,3);
                    FUN_14547caa0(lVar1,lVar19,bVar7,*(undefined1 *)(lVar24 + 8 + lVar13),local_a8,
                                  local_b0,local_res20,param_5,in_stack_ffffffffffffff08);
                    lVar13 = 0;
                    do {
                      lVar19 = local_res10;
                      if (*(int *)((longlong)piVar2 + lVar14 + 0x14) != local_b0[lVar13]) {
                        *piVar2 = local_b0[lVar13];
                        break;
                      }
                      lVar13 = lVar13 + 1;
                    } while (lVar13 < 2);
                  }
                  else {
                    *piVar2 = iVar12;
                  }
                }
                else {
                  *piVar2 = iVar12;
                }
              }
            }
            lVar24 = lVar24 + 1;
            uVar27 = uVar27 - 1;
            param_2 = local_res10;
          } while (uVar27 != 0);
        }
        else if ((bVar7 == 0xd) && (iVar12 == 0)) {
          local_d0 = 1;
          do {
            in_stack_ffffffffffffff08 =
                 CONCAT44((int)((ulonglong)in_stack_ffffffffffffff08 >> 0x20),0xffffffff);
            FUN_14547caa0(lVar1,param_2,CONCAT71((int7)(uVar27 >> 8),0xd),local_70[lVar24],local_a8,
                          &local_b8,local_res20,param_5,in_stack_ffffffffffffff08);
            sVar11 = local_b8._2_2_;
            uVar25 = (uint)local_b8._2_2_;
            uVar27 = (ulonglong)uVar25;
            uVar18 = (uint)(short)local_b8;
            if (((local_d4 == 0) ||
                (0x3f < (int)((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f)))) ||
               (0x3f < (int)((uVar25 ^ (int)uVar25 >> 0x1f) - ((int)uVar25 >> 0x1f)))) {
              if ((uVar18 & 1) != 0) {
                sVar9 = 1;
                if (0 < (short)local_b8) {
                  sVar9 = -1;
                }
                local_b8 = CONCAT22(local_b8._2_2_,(short)local_b8 + sVar9);
              }
              if ((uVar25 & 1) != 0) {
                sVar9 = 1;
                if (0 < sVar11) {
                  sVar9 = -1;
                }
                uVar27 = (ulonglong)CONCAT22(sVar11 >> 0xf,sVar11 + sVar9);
                local_b8 = CONCAT22(sVar11 + sVar9,(short)local_b8);
              }
            }
            *(undefined4 *)((longlong)&local_c8 + lVar24 * 4) = local_b8;
            lVar24 = lVar24 + 1;
          } while (lVar24 < (longlong)(ulonglong)(uVar16 + 1));
        }
        bVar6 = true;
        pbVar23 = local_res18 + local_90 + 0x18;
        local_58 = pbVar23;
        if ((bVar7 == 10) || (bVar7 == 0xb)) {
          uVar15 = CONCAT44(local_a0[1],local_a0[0]);
LAB_14547dad1:
          *(undefined8 *)pbVar23 = uVar15;
        }
        else {
          if (bVar7 == 0xc) {
            uVar15 = 0;
            goto LAB_14547dad1;
          }
          if (bVar7 != 0xd) goto LAB_14547db92;
          local_60 = *(longlong *)(param_2 + 0x1a0) + 0x3200;
          if (*(longlong *)(param_2 + 0x1a0) == 0) {
            local_60 = 0;
          }
          local_88 = (ulonglong)(uVar16 + 1);
          local_68 = (longlong)&local_c8 - (longlong)pbVar23;
          do {
            lVar24 = *(longlong *)(param_1 + 0x14b8);
            iVar12 = 0;
            do {
              cVar8 = (char)iVar12;
              iVar22 = FUN_14547b5c0(param_6,*(undefined1 *)
                                              (((longlong)cVar8 >> 1) + 0x7b2 + lVar24));
              lVar19 = local_68;
              iVar12 = (int)(char)(&DAT_149d52210)[(longlong)iVar22 + (longlong)cVar8];
            } while ('\0' < (char)(&DAT_149d52210)[(longlong)iVar22 + (longlong)cVar8]);
            local_d8 = 0;
            if (iVar12 + 3U < 2) {
              uVar10 = FUN_14547c2e0(param_6,lVar24 + 0x7b5);
              local_d8 = CONCAT22(local_d8._2_2_,uVar10);
            }
            if ((iVar12 + 3U & 0xfffffffd) == 0) {
              uVar10 = FUN_14547c2e0(param_6,lVar24 + 0x7d6);
              local_d8 = CONCAT22(uVar10,(short)local_d8);
            }
            FUN_14546fc70(&local_d8,local_60);
            sVar11 = *(short *)(pbVar23 + lVar19);
            sVar9 = *(short *)(pbVar23 + lVar19 + 2);
            *(short *)pbVar23 = (short)local_d8 + sVar11;
            *(short *)(pbVar23 + 2) = local_d8._2_2_ + sVar9;
            if (((bVar6) && ((ushort)((short)local_d8 + sVar11 + 0x3fffU) < 0x7ffe)) &&
               ((ushort)(local_d8._2_2_ + sVar9 + 0x3fffU) < 0x7ffe)) {
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            pbVar23 = pbVar23 + 4;
            local_88 = local_88 - 1;
          } while (local_88 != 0);
          local_88 = 0;
        }
        if (!bVar6) {
LAB_14547db92:
          *(uint *)(local_res10 + 0x278) = *(uint *)(local_res10 + 0x278) | 1;
          return;
        }
        if ((longlong)local_a0[2] == 2) {
          uVar5 = *(undefined4 *)(local_res18 + local_90 + 0x1c);
          *(undefined8 *)(local_58 + 0x14) = *(undefined8 *)(local_res18 + local_90 + 0x14);
          *(undefined4 *)(local_58 + 0x1c) = uVar5;
        }
        if ((longlong)local_a0[3] == 2) {
          *(undefined8 *)(local_res18 + local_90 + 0x20) =
               *(undefined8 *)(local_res18 + local_90 + 0x14);
          *(undefined4 *)(local_res18 + local_90 + 0x28) =
               *(undefined4 *)(local_res18 + local_90 + 0x1c);
        }
        local_e8 = local_e8 + local_a0[3];
        local_90 = local_90 + local_50;
        local_80 = local_80 + local_a0[3];
        param_2 = local_res10;
      } while (local_80 < 2);
      local_c0 = local_c0 + local_a0[2];
      local_78 = local_78 + local_a0[2];
    } while (local_c0 < 2);
    local_res18[1] = bVar7;
    *(undefined8 *)(local_res18 + 0xc) = *(undefined8 *)(local_res18 + 0x3c);
  }
  else {
    if (local_res18[1] != 0xc) {
      lVar24 = 0;
      do {
        iVar12 = FUN_14547caa0(lVar1,param_2,local_res18[1],local_res18[lVar24 + 8],piVar2,
                               &local_res10,local_res20,param_5,0xffffffff);
        lVar19 = (longlong)iVar12;
        uVar4 = auStackX_c[lVar19 * 2];
        uVar18 = (uint)(short)uVar4;
        if (((local_d4 == 0) ||
            (0x3f < (int)((uVar18 ^ (int)uVar18 >> 0x1f) - ((int)uVar18 >> 0x1f)))) ||
           (uVar25 = (int)(short)auStackX_c[lVar19 * 2 + 1] >> 0x1f,
           0x3f < (int)(((int)(short)auStackX_c[lVar19 * 2 + 1] ^ uVar25) - uVar25))) {
          if ((uVar18 & 1) != 0) {
            sVar11 = 1;
            if (0 < (short)uVar4) {
              sVar11 = -1;
            }
            auStackX_c[lVar19 * 2] = sVar11 + uVar4;
          }
          uVar4 = auStackX_c[lVar19 * 2 + 1];
          if ((uVar4 & 1) != 0) {
            sVar11 = 1;
            if (0 < (short)uVar4) {
              sVar11 = -1;
            }
            auStackX_c[lVar19 * 2 + 1] = sVar11 + uVar4;
          }
        }
        *(undefined4 *)((longlong)&local_c8 + lVar24 * 4) = *(undefined4 *)(auStackX_c + lVar19 * 2)
        ;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (longlong)(ulonglong)(uVar16 + 1));
    }
    iVar12 = FUN_14547c850(lVar1,param_2,local_res18[1],local_res18 + 0xc,&local_c8,&local_c8,uVar16
                           ,local_d4,param_6);
    *(uint *)(param_2 + 0x278) = *(uint *)(param_2 + 0x278) | (uint)(iVar12 == 0);
  }
  return;
}



// FUNCTION 14547dcf0 FUN_14547dcf0 body=520 status=ok
// SIG undefined FUN_14547dcf0(void)

void FUN_14547dcf0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,uint param_6,undefined4 param_7)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  
  lVar1 = param_1 + 0x290;
  lVar3 = **(longlong **)(param_2 + 0x1c0);
  uVar13 = (ulonglong)param_6;
  uVar11 = param_5;
  cVar4 = FUN_14547bb20(lVar1);
  *(char *)(lVar3 + 4) = cVar4;
  uVar5 = FUN_14547bd30(lVar1,param_2,(int)cVar4,param_5,uVar11,uVar13,param_7);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  *(undefined1 *)(lVar3 + 3) = uVar5;
  if ((*(char *)(param_1 + 0x1438) == '\0') ||
     ((*(byte *)(param_1 + 0x1488 + (longlong)*(char *)(lVar3 + 4) * 4) & 4) == 0)) {
    lVar10 = *(longlong *)(param_2 + 0x1d0);
    lVar9 = *(longlong *)(param_2 + 0x1c8);
    if (lVar10 == 0) {
      if (lVar9 == 0) {
        lVar10 = 0;
        goto LAB_14547ddef;
      }
LAB_14547dddb:
      if (lVar10 != 0) {
        lVar9 = lVar10;
      }
      lVar10 = 0;
      if (*(char *)(lVar9 + 8) < '\x01') {
        lVar10 = 2;
      }
    }
    else {
      if (lVar9 == 0) goto LAB_14547dddb;
      if (*(char *)(lVar9 + 8) < '\x01') {
        if (*(char *)(lVar10 + 8) < '\x01') {
          lVar10 = 3;
        }
        else {
LAB_14547ddcb:
          lVar10 = 1;
        }
      }
      else {
        if (*(char *)(lVar10 + 8) < '\x01') goto LAB_14547ddcb;
        lVar10 = 0;
      }
    }
LAB_14547ddef:
    uVar7 = FUN_14547b5c0(param_5,*(undefined1 *)(*(longlong *)(param_1 + 0x14b8) + 0x78b + lVar10))
    ;
    if (*(longlong *)(param_2 + 0x1a0) != 0) {
      piVar2 = (int *)(*(longlong *)(param_2 + 0x1a0) + 0x30d0 +
                      ((longlong)(int)uVar7 + lVar10 * 2) * 4);
      *piVar2 = *piVar2 + 1;
    }
  }
  else {
    uVar7 = (uint)(*(short *)(param_1 + 0x144c + (longlong)*(char *)(lVar3 + 4) * 8) != 0);
  }
  if ((*(char *)(lVar3 + 3) == '\0') || (uVar7 == 0)) {
    iVar8 = *(int *)(param_1 + 0x6c8);
    bVar6 = (&DAT_149d54b30)[*(byte *)**(undefined8 **)(param_2 + 0x1c0)];
    if ((iVar8 == 4) && (2 < *(byte *)**(undefined8 **)(param_2 + 0x1c0))) {
      bVar6 = FUN_14547b970(lVar1,param_2,bVar6,param_5);
      goto LAB_14547de66;
    }
  }
  else {
    bVar6 = (&DAT_149d54b30)[*(byte *)**(undefined8 **)(param_2 + 0x1c0)];
    iVar8 = *(int *)(param_1 + 0x6c8);
  }
  if ((byte)(&DAT_149d54b40)[iVar8] <= bVar6) {
    bVar6 = (&DAT_149d54b40)[iVar8];
  }
LAB_14547de66:
  *(byte *)(lVar3 + 2) = bVar6;
  if (uVar7 == 0) {
    FUN_14547c690(lVar1,param_2,lVar3,param_5);
  }
  else {
    FUN_14547d2b0(param_1,param_2,lVar3,param_3,CONCAT44(uVar12,param_4),param_5);
  }
  return;
}



// FUNCTION 14547df00 FUN_14547df00 body=122 status=ok
// SIG undefined FUN_14547df00(void)

bool FUN_14547df00(ulonglong *param_1,int param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = ((int)param_1[1] + -1) * param_2 + 0x100U >> 8;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14546ec70();
  }
  uVar3 = *param_1;
  uVar2 = (ulonglong)uVar4 << 0x38;
  bVar5 = uVar2 <= uVar3;
  if (bVar5) {
    uVar4 = (int)param_1[1] - uVar4;
    uVar3 = uVar3 - uVar2;
  }
  bVar1 = (&DAT_149d54800)[uVar4 & 0xff];
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) - (uint)bVar1;
  *(uint *)(param_1 + 1) = uVar4 << (bVar1 & 0x1f);
  *param_1 = uVar3 << (bVar1 & 0x3f);
  return bVar5;
}



// FUNCTION 14547df80 FUN_14547df80 body=74 status=ok
// SIG undefined FUN_14547df80(void)

uint FUN_14547df80(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (param_2 = param_2 + -1, -1 < param_2) {
    iVar1 = FUN_14547df00(param_1,0x80);
    uVar2 = uVar2 | iVar1 << ((byte)param_2 & 0x1f);
  }
  return uVar2;
}



// FUNCTION 14547dfd0 FUN_14547dfd0 body=429 status=ok
// SIG undefined FUN_14547dfd0(void)

void FUN_14547dfd0(undefined8 param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  iVar2 = FUN_14547df00(param_1,0xfc);
  if (iVar2 != 0) {
    iVar2 = FUN_14547df00(param_1,0x80);
    if (iVar2 == 0) {
      uVar5 = 0;
      iVar2 = 3;
      do {
        iVar3 = FUN_14547df00(param_1,0x80);
        uVar5 = uVar5 | iVar3 << ((byte)iVar2 & 0x1f);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else {
      iVar2 = FUN_14547df00(param_1,0x80);
      if (iVar2 == 0) {
        uVar5 = 0;
        iVar2 = 3;
        do {
          iVar3 = FUN_14547df00(param_1,0x80);
          uVar5 = uVar5 | iVar3 << ((byte)iVar2 & 0x1f);
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
        uVar5 = uVar5 + 0x10;
      }
      else {
        iVar2 = FUN_14547df00(param_1,0x80);
        if (iVar2 == 0) {
          iVar2 = FUN_14547df80(param_1,5);
          uVar5 = iVar2 + 0x20;
        }
        else {
          uVar5 = 0;
          iVar2 = 6;
          do {
            iVar3 = FUN_14547df00(param_1,0x80);
            uVar5 = uVar5 | iVar3 << ((byte)iVar2 & 0x1f);
            iVar2 = iVar2 + -1;
          } while (-1 < iVar2);
          if (0x40 < (int)uVar5) {
            iVar2 = FUN_14547df00(param_1,0x80);
            uVar5 = uVar5 * 2 + -0x41 + iVar2;
          }
          uVar5 = uVar5 + 0x40;
        }
      }
    }
    iVar2 = *param_2 - 1;
    bVar4 = (&DAT_14c744330)[(int)uVar5];
    if (iVar2 * 2 < 0x100) {
      if ((int)(uint)bVar4 <= iVar2 * 2) {
        if ((bVar4 & 1) != 0) {
          *param_2 = ((char)iVar2 - (char)(bVar4 + 1 >> 1)) + 1;
          return;
        }
        bVar4 = (bVar4 >> 1) + (char)iVar2;
      }
      *param_2 = bVar4 + 1;
      return;
    }
    if ((int)(uint)bVar4 <= (0xfe - iVar2) * 2) {
      cVar1 = (char)(0xfe - iVar2);
      if ((bVar4 & 1) != 0) {
        *param_2 = -(cVar1 - (char)(bVar4 + 1 >> 1)) - 1;
        return;
      }
      bVar4 = (bVar4 >> 1) + cVar1;
    }
    *param_2 = -bVar4 - 1;
  }
  return;
}



// FUNCTION 14547e180 FUN_14547e180 body=30 status=ok
// SIG undefined FUN_14547e180(void)

void FUN_14547e180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14547e1a0(0,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14547e1a0 FUN_14547e1a0 body=290 status=ok
// SIG undefined FUN_14547e1a0(void)

uint FUN_14547e1a0(uint param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (*(char *)((ulonglong)param_1 + param_2) < '\x01') {
    uVar3 = *(uint *)(param_4 + (longlong)*(char *)((ulonglong)param_1 + param_2) * -4);
  }
  else {
    uVar3 = FUN_14547e1a0();
  }
  cVar1 = *(char *)((ulonglong)(param_1 + 1) + param_2);
  if (cVar1 < '\x01') {
    iVar4 = *(int *)(param_4 + (longlong)cVar1 * -4);
  }
  else {
    iVar4 = FUN_14547e1a0((longlong)cVar1,param_2,param_3,param_4,param_5);
  }
  uVar5 = (ulonglong)(param_1 >> 1);
  uVar6 = iVar4 + uVar3;
  if (uVar6 == 0) {
    *(byte *)(uVar5 + param_5) = *(byte *)(uVar5 + param_3);
  }
  else {
    uVar2 = 0x14;
    if (uVar6 < 0x14) {
      uVar2 = uVar6;
    }
    uVar3 = (uint)(((ulonglong)uVar3 * 0x100 + (ulonglong)(uVar6 >> 1)) / (ulonglong)uVar6);
    *(char *)(uVar5 + param_5) =
         (char)((uint)*(byte *)(uVar5 + param_3) *
                (0x100 - *(int *)(&DAT_149d54900 + (ulonglong)uVar2 * 4)) +
                (((int)(0xff - uVar3) >> 0x17 | uVar3) & 0xff | (uint)(uVar3 == 0)) *
                *(int *)(&DAT_149d54900 + (ulonglong)uVar2 * 4) + 0x80 >> 8);
  }
  return uVar6;
}



// FUNCTION 14547e2d0 FUN_14547e2d0 body=94 status=ok
// SIG undefined FUN_14547e2d0(void)

ulonglong FUN_14547e2d0(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_14c7fe650 == 0;
  if (bVar2) {
    DAT_14c7fe650 = 1;
  }
  UNLOCK();
  if (bVar2) {
    uVar1 = FUN_14547e330();
    LOCK();
    DAT_14c7fe650 = DAT_14c7fe650 + 1;
    UNLOCK();
    return uVar1;
  }
  uVar1 = 2;
  LOCK();
  bVar2 = DAT_14c7fe650 == 2;
  if (bVar2) {
    DAT_14c7fe650 = 2;
  }
  else {
    uVar1 = (ulonglong)DAT_14c7fe650;
  }
  UNLOCK();
  while (!bVar2) {
    Sleep(0);
    uVar1 = 2;
    LOCK();
    bVar2 = DAT_14c7fe650 == 2;
    if (bVar2) {
      DAT_14c7fe650 = 2;
    }
    else {
      uVar1 = (ulonglong)DAT_14c7fe650;
    }
    UNLOCK();
  }
  return uVar1;
}



// FUNCTION 14547e330 FUN_14547e330 body=785 status=ok
// SIG undefined FUN_14547e330(void)

/* WARNING: Removing unreachable block (ram,0x00014547e479) */
/* WARNING: Removing unreachable block (ram,0x00014547e3f0) */
/* WARNING: Removing unreachable block (ram,0x00014547e33a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14547e330(void)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte in_XCR0;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  if (*puVar1 == 0) {
    bVar6 = false;
    DAT_14c7fe658 = FUN_1455a5040;
    DAT_14c7fe660 = (code *)&LAB_142724380;
    _DAT_14c7fe680 = FUN_145470f90;
    DAT_14c7fe668 = &LAB_142724440;
    DAT_14c7fe688 = FUN_1454714d0;
    DAT_14c7fe670 = FUN_1455a9f30;
    _DAT_14c7fe690 = FUN_1454717e0;
    DAT_14c7fe678 = FUN_1455a5790;
    DAT_14c7fe698 = FUN_1455caa00;
    bVar7 = false;
    DAT_14c7fe6a0 = FUN_1455cab20;
    DAT_14c7fe6a8 = FUN_1455cc280;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar3 = *(uint *)(lVar2 + 0xc);
    bVar7 = (uVar3 >> 9 & 1) != 0;
    bVar8 = (uVar3 >> 0x13 & 1) == 0;
    bVar5 = false;
    bVar6 = false;
    if (((uVar3 & 0x18000000) == 0x18000000) &&
       (uVar4 = xinuse(0), bVar5 = false, bVar6 = false, (in_XCR0 & (byte)uVar4 & 6) == 6)) {
      bVar5 = true;
      bVar6 = false;
      if ((6 < *puVar1) &&
         (lVar2 = cpuid_Extended_Feature_Enumeration_info(7), (*(uint *)(lVar2 + 4) & 0x20) != 0)) {
        bVar5 = true;
        bVar6 = true;
      }
    }
    DAT_14c7fe658 = FUN_1455a5040;
    if (!bVar8) {
      DAT_14c7fe658 = FUN_1455a7f20;
    }
    DAT_14c7fe660 = (code *)&LAB_142724380;
    if (bVar6) {
      DAT_14c7fe660 = FUN_1455a9d10;
      DAT_14c7fe668 = &LAB_1455a9e80;
    }
    else {
      DAT_14c7fe668 = &LAB_142724440;
    }
    DAT_14c7fe670 = FUN_1455a9f30;
    if (bVar5) {
      DAT_14c7fe670 = FUN_1455c3430;
    }
    DAT_14c7fe678 = FUN_1455a5790;
    if (bVar8) {
      _DAT_14c7fe680 = FUN_145470f90;
      DAT_14c7fe688 = FUN_1454714d0;
      _DAT_14c7fe690 = FUN_1454717e0;
    }
    else {
      DAT_14c7fe678 = FUN_1455c3990;
      _DAT_14c7fe680 = FUN_1455c6260;
      DAT_14c7fe688 = FUN_1455c93b0;
      _DAT_14c7fe690 = FUN_1455c9ac0;
    }
    DAT_14c7fe698 = FUN_1455caa00;
    if (bVar6) {
      DAT_14c7fe698 = FUN_1455cb850;
      DAT_14c7fe6a0 = FUN_1455cbac0;
    }
    else {
      DAT_14c7fe6a0 = FUN_1455cab20;
    }
    DAT_14c7fe6a8 = FUN_1455cc280;
    if (bVar7) {
      DAT_14c7fe6a8 = FUN_1455cc610;
    }
    if (bVar6) {
      DAT_14c7fe6a8 = FUN_1455cbd80;
    }
  }
  DAT_14c7fe6b0 = FUN_1455cac60;
  if (bVar7) {
    DAT_14c7fe6b0 = FUN_1455cc960;
  }
  if (bVar6) {
    DAT_14c7fe6b0 = FUN_1455cc000;
  }
  DAT_14c7fe6b8 = FUN_1455ccd30;
  if (bVar7) {
    DAT_14c7fe6b8 = FUN_1455cd1c0;
  }
  return;
}



// FUNCTION 14547e660 FUN_14547e660 body=2218 status=ok
// SIG undefined FUN_14547e660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14547e660(int *param_1,int param_2,longlong param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  float fVar22;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  int iStack_80;
  float fStack_7c;
  int local_78;
  float fStack_74;
  undefined8 local_70;
  int *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)&local_78;
  local_70 = param_3;
  local_68 = param_1;
  if (param_4 < 1) {
    uStack_a0 = 0x14547e6db;
    iVar6 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0xbd,
                          "oo2::normalize_counts_v6","from_sum > 0");
    if (iVar6 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar6 = 0;
  iVar19 = 0;
  local_78 = 0;
  if (0 < param_5) {
    piVar12 = param_1;
    lVar18 = (longlong)param_5;
    do {
      uVar8 = *(uint *)((param_3 - (longlong)param_1) + (longlong)piVar12);
      iVar7 = 0;
      if (uVar8 != 0) {
        dVar21 = (double)uVar8 * ((double)param_2 / (double)param_4);
        iVar7 = (int)(longlong)dVar21;
        iVar7 = (uint)((double)(uint)((iVar7 + 1) * iVar7) < dVar21 * dVar21) + iVar7;
        iVar19 = iVar19 + iVar7;
        iVar6 = iVar6 + 1;
      }
      *piVar12 = iVar7;
      piVar12 = piVar12 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    local_78 = iVar6;
  }
  param_2 = param_2 - iVar19;
  puVar15 = auStack_98;
  if (param_2 == 0) goto LAB_14547eefe;
  uVar1 = (longlong)param_5 * 8;
  uVar9 = uVar1 + 0xf;
  if (uVar9 <= uVar1) {
    uVar9 = 0xffffffffffffff0;
  }
  uStack_a0 = 0x14547e790;
  lVar18 = -(uVar9 & 0xfffffffffffffff0);
  puVar15 = auStack_98 + lVar18;
  lVar17 = 0;
  piVar12 = (int *)((longlong)&local_78 + lVar18);
  if (param_2 < 1) {
    iVar6 = 0;
    if (param_5 < 4) {
      if (0 < param_5) {
        lVar16 = 0;
        goto LAB_14547ebdd;
      }
    }
    else {
      param_3 = param_3 - (longlong)param_1;
      iVar19 = 2;
      puVar11 = (uint *)(param_1 + 1);
      lVar16 = (ulonglong)((param_5 - 4U >> 2) + 1) << 2;
      iVar6 = 0;
      do {
        uVar8 = *(uint *)(param_3 + -4 + (longlong)puVar11);
        if (uVar8 != 0) {
          uVar3 = puVar11[-1];
          if (1 < uVar3) {
            if ((int)uVar3 < 0x20) {
              fVar22 = *(float *)(&DAT_149d5d120 + (longlong)(int)uVar3 * 4);
            }
            else {
              fVar22 = 1.0 / (float)(int)uVar3;
              fVar22 = -fVar22 - fVar22 * fVar22 * 0.5;
            }
            piVar12[lVar17 * 2] = iVar6;
            *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
            lVar17 = lVar17 + 1;
          }
        }
        uVar8 = *(uint *)(param_3 + (longlong)puVar11);
        if (uVar8 != 0) {
          uVar3 = *puVar11;
          if (1 < uVar3) {
            if ((int)uVar3 < 0x20) {
              fVar22 = *(float *)(&DAT_149d5d120 + (longlong)(int)uVar3 * 4);
            }
            else {
              fVar22 = 1.0 / (float)(int)uVar3;
              fVar22 = -fVar22 - fVar22 * fVar22 * 0.5;
            }
            piVar12[lVar17 * 2] = iVar19 + -1;
            *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
            lVar17 = lVar17 + 1;
          }
        }
        uVar8 = *(uint *)(param_3 + 4 + (longlong)puVar11);
        if (uVar8 != 0) {
          uVar3 = puVar11[1];
          if (1 < uVar3) {
            if ((int)uVar3 < 0x20) {
              fVar22 = *(float *)(&DAT_149d5d120 + (longlong)(int)uVar3 * 4);
            }
            else {
              fVar22 = 1.0 / (float)(int)uVar3;
              fVar22 = -fVar22 - fVar22 * fVar22 * 0.5;
            }
            piVar12[lVar17 * 2] = iVar19;
            *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
            lVar17 = lVar17 + 1;
          }
        }
        uVar8 = *(uint *)(param_3 + 8 + (longlong)puVar11);
        if (uVar8 != 0) {
          uVar3 = puVar11[2];
          if (1 < uVar3) {
            if ((int)uVar3 < 0x20) {
              fVar22 = *(float *)(&DAT_149d5d120 + (longlong)(int)uVar3 * 4);
            }
            else {
              fVar22 = 1.0 / (float)(int)uVar3;
              fVar22 = -fVar22 - fVar22 * fVar22 * 0.5;
            }
            piVar12[lVar17 * 2] = iVar19 + 1;
            *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
            lVar17 = lVar17 + 1;
          }
        }
        puVar11 = puVar11 + 4;
        iVar6 = iVar6 + 4;
        iVar19 = iVar19 + 4;
      } while (iVar6 < param_5 + -3);
      param_3 = local_70;
      if (iVar6 < param_5) {
LAB_14547ebdd:
        puVar11 = (uint *)(param_1 + lVar16);
        do {
          uVar8 = *(uint *)((param_3 - (longlong)param_1) + (longlong)puVar11);
          if (uVar8 != 0) {
            uVar3 = *puVar11;
            if (1 < uVar3) {
              if ((int)uVar3 < 0x20) {
                fVar22 = *(float *)(&DAT_149d5d120 + (longlong)(int)uVar3 * 4);
              }
              else {
                fVar22 = 1.0 / (float)(int)uVar3;
                fVar22 = -fVar22 - fVar22 * fVar22 * 0.5;
              }
              piVar12[lVar17 * 2] = iVar6;
              *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
              lVar17 = lVar17 + 1;
            }
          }
          puVar11 = puVar11 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_5);
      }
    }
  }
  else {
    iVar6 = 0;
    if (param_5 < 4) {
      if (0 < param_5) {
        lVar16 = 0;
        iVar6 = 0;
        goto LAB_14547e97f;
      }
    }
    else {
      param_3 = param_3 - (longlong)param_1;
      iVar19 = 2;
      piVar10 = param_1 + 1;
      lVar16 = (ulonglong)((param_5 - 4U >> 2) + 1) << 2;
      do {
        uVar8 = *(uint *)(param_3 + -4 + (longlong)piVar10);
        if (uVar8 != 0) {
          iVar7 = piVar10[-1];
          if (iVar7 < 0x20) {
            fVar22 = *(float *)(&DAT_149d5d0a0 + (longlong)iVar7 * 4);
          }
          else {
            fVar22 = 1.0 / (float)iVar7;
            fVar22 = fVar22 - fVar22 * fVar22 * 0.5;
          }
          piVar12[lVar17 * 2] = iVar6;
          *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
          lVar17 = lVar17 + 1;
        }
        uVar8 = *(uint *)((longlong)piVar10 + param_3);
        if (uVar8 != 0) {
          iVar7 = *piVar10;
          if (iVar7 < 0x20) {
            fVar22 = *(float *)(&DAT_149d5d0a0 + (longlong)iVar7 * 4);
          }
          else {
            fVar22 = 1.0 / (float)iVar7;
            fVar22 = fVar22 - fVar22 * fVar22 * 0.5;
          }
          piVar12[lVar17 * 2] = iVar19 + -1;
          *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
          lVar17 = lVar17 + 1;
        }
        uVar8 = *(uint *)(param_3 + 4 + (longlong)piVar10);
        if (uVar8 != 0) {
          iVar7 = piVar10[1];
          if (iVar7 < 0x20) {
            fVar22 = *(float *)(&DAT_149d5d0a0 + (longlong)iVar7 * 4);
          }
          else {
            fVar22 = 1.0 / (float)iVar7;
            fVar22 = fVar22 - fVar22 * fVar22 * 0.5;
          }
          piVar12[lVar17 * 2] = iVar19;
          *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
          lVar17 = lVar17 + 1;
        }
        uVar8 = *(uint *)(param_3 + 8 + (longlong)piVar10);
        if (uVar8 != 0) {
          iVar7 = piVar10[2];
          if (iVar7 < 0x20) {
            fVar22 = *(float *)(&DAT_149d5d0a0 + (longlong)iVar7 * 4);
          }
          else {
            fVar22 = 1.0 / (float)iVar7;
            fVar22 = fVar22 - fVar22 * fVar22 * 0.5;
          }
          piVar12[lVar17 * 2] = iVar19 + 1;
          *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
          lVar17 = lVar17 + 1;
        }
        piVar10 = piVar10 + 4;
        iVar6 = iVar6 + 4;
        iVar19 = iVar19 + 4;
      } while (iVar6 < param_5 + -3);
      param_3 = local_70;
      if (iVar6 < param_5) {
LAB_14547e97f:
        piVar10 = param_1 + lVar16;
        do {
          uVar8 = *(uint *)((param_3 - (longlong)param_1) + (longlong)piVar10);
          if (uVar8 != 0) {
            iVar19 = *piVar10;
            if (iVar19 < 0x20) {
              fVar22 = *(float *)(&DAT_149d5d0a0 + (longlong)iVar19 * 4);
            }
            else {
              fVar22 = 1.0 / (float)iVar19;
              fVar22 = fVar22 - fVar22 * fVar22 * 0.5;
            }
            piVar12[lVar17 * 2] = iVar6;
            *(float *)((longlong)&fStack_74 + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
            lVar17 = lVar17 + 1;
          }
          piVar10 = piVar10 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_5);
      }
    }
  }
  lVar16 = lVar17 >> 1;
  if (0 < lVar16) {
    lVar20 = lVar16 * 2 + 1;
    do {
      lVar16 = lVar16 + -1;
      lVar20 = lVar20 + -2;
      lVar14 = lVar16;
      for (lVar13 = lVar20; lVar13 < lVar17; lVar13 = lVar13 * 2 + 1) {
        if (lVar13 + 1 < lVar17) {
          fVar22 = *(float *)((longlong)&local_70 + lVar13 * 8 + lVar18 + 4);
          pfVar2 = (float *)((longlong)&fStack_74 + lVar13 * 8 + lVar18);
          lVar13 = lVar13 + (ulonglong)(*pfVar2 <= fVar22 && fVar22 != *pfVar2);
        }
        fVar22 = *(float *)((longlong)&fStack_74 + lVar14 * 8 + lVar18);
        pfVar2 = (float *)((longlong)&fStack_74 + lVar13 * 8 + lVar18);
        if (*pfVar2 <= fVar22 && fVar22 != *pfVar2) break;
        uVar4 = *(undefined8 *)(piVar12 + lVar14 * 2);
        *(undefined8 *)(piVar12 + lVar14 * 2) = *(undefined8 *)(piVar12 + lVar13 * 2);
        *(undefined8 *)(piVar12 + lVar13 * 2) = uVar4;
        lVar14 = lVar13;
      }
    } while (0 < lVar16);
  }
  piVar10 = local_68;
  if (param_2 < 1) {
    uVar9 = (ulonglong)(uint)-param_2;
    do {
      if (lVar17 < 1) {
        *(undefined8 *)(auStack_98 + lVar18 + -8) = 0x14547ee27;
        iVar6 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x157,
                              "oo2::normalize_counts_v6","heap_size > 0");
        if (iVar6 != 0) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar6 = *piVar12;
      lVar20 = (longlong)iVar6;
      *(undefined8 *)(auStack_98 + lVar18 + -8) = 0x14547ee3b;
      FUN_14547f140(piVar12,piVar12 + lVar17 * 2);
      lVar16 = lVar17 + -1;
      uVar8 = piVar10[lVar20] - 1;
      piVar10[lVar20] = uVar8;
      if (1 < uVar8) {
        if ((int)uVar8 < 0x20) {
          fVar22 = *(float *)(&DAT_149d5d120 + (longlong)(int)uVar8 * 4);
        }
        else {
          fVar22 = 1.0 / (float)(int)uVar8;
          fVar22 = -fVar22 - fVar22 * fVar22 * 0.5;
        }
        uVar8 = *(uint *)(local_70 + lVar20 * 4);
        piVar12[lVar16 * 2] = iVar6;
        *(float *)((longlong)&fStack_74 + lVar16 * 8 + lVar18) = (float)uVar8 * fVar22;
        lVar20 = lVar17 * 8 + -8 >> 3;
        while ((lVar16 = lVar17, 0 < lVar20 &&
               (fVar22 = *(float *)((longlong)&fStack_74 + lVar20 * 8 + lVar18),
               lVar14 = lVar20 + -1 >> 1,
               pfVar2 = (float *)((longlong)&fStack_74 + lVar14 * 8 + lVar18),
               *pfVar2 <= fVar22 && fVar22 != *pfVar2))) {
          uVar4 = *(undefined8 *)(piVar12 + lVar14 * 2);
          *(undefined8 *)(piVar12 + lVar14 * 2) = *(undefined8 *)(piVar12 + lVar20 * 2);
          *(undefined8 *)(piVar12 + lVar20 * 2) = uVar4;
          lVar20 = lVar14;
        }
      }
      uVar9 = uVar9 - 1;
      puVar15 = auStack_98 + lVar18;
      lVar17 = lVar16;
    } while (uVar9 != 0);
  }
  else {
    do {
      if (lVar17 < 1) {
        *(undefined8 *)(auStack_98 + lVar18 + -8) = 0x14547ed26;
        iVar6 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\rrcompressutil.cpp",0x13e,
                              "oo2::normalize_counts_v6","heap_size > 0");
        if (iVar6 != 0) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar6 = *piVar12;
      lVar16 = (longlong)iVar6;
      *(undefined8 *)(auStack_98 + lVar18 + -8) = 0x14547ed39;
      FUN_14547f140(piVar12,piVar12 + lVar17 * 2);
      param_2 = param_2 + -1;
      local_68[lVar16] = local_68[lVar16] + 1;
      iVar19 = local_68[lVar16];
      if (iVar19 < 0x20) {
        fVar22 = *(float *)(&DAT_149d5d0a0 + (longlong)iVar19 * 4);
      }
      else {
        fVar22 = 1.0 / (float)iVar19;
        fVar22 = fVar22 - fVar22 * fVar22 * 0.5;
      }
      uVar8 = *(uint *)(local_70 + lVar16 * 4);
      *(int *)((longlong)&iStack_80 + lVar17 * 8 + lVar18) = iVar6;
      *(float *)((longlong)&fStack_7c + lVar17 * 8 + lVar18) = (float)uVar8 * fVar22;
      lVar16 = lVar17 * 8 + -8 >> 3;
      while ((0 < lVar16 &&
             (fVar22 = *(float *)((longlong)&fStack_74 + lVar16 * 8 + lVar18),
             lVar20 = lVar16 + -1 >> 1,
             pfVar2 = (float *)((longlong)&fStack_74 + lVar20 * 8 + lVar18),
             *pfVar2 <= fVar22 && fVar22 != *pfVar2))) {
        uVar4 = *(undefined8 *)(piVar12 + lVar20 * 2);
        *(undefined8 *)(piVar12 + lVar20 * 2) = *(undefined8 *)(piVar12 + lVar16 * 2);
        *(undefined8 *)(piVar12 + lVar16 * 2) = uVar4;
        lVar16 = lVar20;
      }
    } while (param_2 != 0);
  }
LAB_14547eefe:
  uVar9 = local_60 ^ (ulonglong)&local_78;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_14547ef0a;
  FUN_144d8e3a0(uVar9);
}



// FUNCTION 14547ef40 FUN_14547ef40 body=391 status=ok
// SIG undefined FUN_14547ef40(void)

int FUN_14547ef40(undefined1 (*param_1) [16],uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  iVar12 = 0;
  if (0 < (int)param_2) {
    iVar1 = iVar12;
    if ((7 < param_2) && (iVar1 = 0, 1 < DAT_14c707900)) {
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar11 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      pauVar3 = param_1;
      do {
        auVar10 = *pauVar3;
        uVar6 = -(uint)(0 < auVar10._0_4_);
        uVar7 = -(uint)(0 < auVar10._4_4_);
        uVar8 = -(uint)(0 < auVar10._8_4_);
        uVar9 = -(uint)(0 < auVar10._12_4_);
        iVar1 = iVar12 + 8;
        auVar4._0_4_ = (iVar12 >> param_3) + param_3 + 1;
        auVar4._4_4_ = (iVar12 + 1 >> param_3) + param_3 + 1;
        auVar4._8_4_ = (iVar12 + 2 >> param_3) + param_3 + 1;
        auVar4._12_4_ = (iVar12 + 3 >> param_3) + param_3 + 1;
        auVar10 = pmulld(auVar10,auVar4);
        uVar16 = auVar10._0_4_ + uVar16 & uVar6 | ~uVar6 & uVar16;
        uVar17 = auVar10._4_4_ + uVar17 & uVar7 | ~uVar7 & uVar17;
        uVar18 = auVar10._8_4_ + uVar18 & uVar8 | ~uVar8 & uVar18;
        uVar19 = auVar10._12_4_ + uVar19 & uVar9 | ~uVar9 & uVar19;
        auVar10 = pauVar3[1];
        uVar6 = -(uint)(0 < auVar10._0_4_);
        uVar7 = -(uint)(0 < auVar10._4_4_);
        uVar8 = -(uint)(0 < auVar10._8_4_);
        uVar9 = -(uint)(0 < auVar10._12_4_);
        auVar5._0_4_ = (iVar12 + 4 >> param_3) + param_3 + 1;
        auVar5._4_4_ = (iVar12 + 5 >> param_3) + param_3 + 1;
        auVar5._8_4_ = (iVar12 + 6 >> param_3) + param_3 + 1;
        auVar5._12_4_ = (iVar12 + 7 >> param_3) + param_3 + 1;
        auVar10 = pmulld(auVar10,auVar5);
        uVar11 = auVar10._0_4_ + uVar11 & uVar6 | ~uVar6 & uVar11;
        uVar13 = auVar10._4_4_ + uVar13 & uVar7 | ~uVar7 & uVar13;
        uVar14 = auVar10._8_4_ + uVar14 & uVar8 | ~uVar8 & uVar14;
        uVar15 = auVar10._12_4_ + uVar15 & uVar9 | ~uVar9 & uVar15;
        pauVar3 = pauVar3 + 2;
        iVar12 = iVar1;
      } while (iVar1 < (int)(param_2 & 0xfffffff8));
      iVar12 = uVar11 + uVar16 + uVar14 + uVar18 + uVar13 + uVar17 + uVar15 + uVar19;
      if ((int)param_2 <= iVar1) {
        return iVar12;
      }
    }
    piVar2 = (int *)(*param_1 + (longlong)iVar1 * 4);
    do {
      if (0 < *piVar2) {
        iVar12 = iVar12 + (param_3 + 1 + (iVar1 >> ((byte)param_3 & 0x1f))) * *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < (int)param_2);
  }
  return iVar12;
}



// FUNCTION 14547f0e0 FUN_14547f0e0 body=75 status=ok
// SIG undefined FUN_14547f0e0(void)

uint FUN_14547f0e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = uVar4;
  if (0 < param_2) {
    do {
      if (*param_1 != 0) {
        uVar3 = (uVar4 >> ((byte)param_3 & 0x1f)) + 1;
        iVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        uVar2 = uVar2 + (param_3 + 1 + iVar1 * 2) * *param_1;
      }
      uVar4 = uVar4 + 1;
      param_1 = param_1 + 1;
    } while ((int)uVar4 < param_2);
  }
  return uVar2;
}



// FUNCTION 14547f140 FUN_14547f140 body=159 status=ok
// SIG undefined FUN_14547f140(void)

void FUN_14547f140(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_2 - param_1 >> 3;
  lVar5 = 0;
  lVar4 = 1;
  lVar7 = lVar5;
  if (1 < lVar6) {
    do {
      lVar5 = lVar4;
      if ((lVar4 + 1 < lVar6) &&
         (fVar2 = *(float *)(param_1 + 0xc + lVar4 * 8), pfVar1 = (float *)(param_1 + lVar4 * 8 + 4)
         , *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
        lVar5 = lVar4 + 1;
      }
      *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
      lVar4 = lVar5 * 2 + 1;
      lVar7 = lVar5;
    } while (lVar4 < lVar6);
  }
  if (lVar5 < lVar6 + -1) {
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + (lVar6 + -1) * 8);
    while ((0 < lVar5 &&
           (fVar2 = *(float *)(param_1 + 4 + lVar5 * 8), lVar4 = lVar5 + -1 >> 1,
           pfVar1 = (float *)(param_1 + 4 + lVar4 * 8), *pfVar1 <= fVar2 && fVar2 != *pfVar1))) {
      uVar3 = *(undefined8 *)(param_1 + lVar4 * 8);
      *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
      *(undefined8 *)(param_1 + lVar5 * 8) = uVar3;
      lVar5 = lVar4;
    }
  }
  return;
}



// FUNCTION 14547f1e0 FUN_14547f1e0 body=1439 status=ok
// SIG undefined FUN_14547f1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14547f1e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,int param_6)

{
  ulonglong *puVar1;
  undefined4 *_Dst;
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  longlong lVar6;
  byte bVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  char *pcVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  char *pcVar28;
  longlong lVar29;
  uint uVar30;
  bool bVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [64];
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  int local_2a0;
  undefined8 local_280;
  uint local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  undefined4 local_258 [2];
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228 [33];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_248 = *(longlong *)(param_1 + 0x30);
  local_268 = param_5;
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_240 = *(longlong *)(param_1 + 8);
  local_238 = *(longlong *)(param_1 + 0x38);
  local_280 = param_2;
  local_270 = param_3;
  local_260 = param_4;
  local_250 = lVar3;
  if (param_2 < param_4) {
    auVar35 = ZEXT3264(_DAT_149d65200);
    do {
      local_278 = *(uint *)(param_1 + 0xa0);
      puVar1 = (ulonglong *)(local_240 + param_2);
      pauVar4 = *(undefined1 (**) [32])(param_1 + 0x88);
      pauVar5 = *(undefined1 (**) [32])(param_1 + 0x90);
      iVar18 = *(int *)(param_1 + 0x70);
      if (param_2 + 8 < local_248) {
        puVar20 = puVar1 + 1;
        *(ulonglong **)(param_1 + 0x80) = puVar20;
        bVar7 = (byte)iVar18 & 0x1f;
        uVar17 = (uint)(*(longlong *)(param_1 + 0x98) * *puVar20 >> 0x20);
        uVar17 = uVar17 << bVar7 | uVar17 >> 0x20 - bVar7;
        *(uint *)(param_1 + 0xa0) = uVar17;
        *(ulonglong *)(param_1 + 0x88) =
             *(longlong *)(param_1 + 0x60) + (ulonglong)(uVar17 & *(uint *)(param_1 + 0x74)) * 4;
        *(ulonglong *)(param_1 + 0x90) =
             *(longlong *)(param_1 + 0x60) +
             (*puVar20 * -0x30e44323485a9b9d >> ((ulonglong)(0x40 - iVar18) & 0x3f) &
             0xfffffffffffffff0) * 4;
      }
      plVar23 = (longlong *)((longlong)puVar1 + 1);
      *(longlong **)(param_1 + 0x80) = plVar23;
      bVar7 = (byte)iVar18 & 0x1f;
      uVar17 = (uint)((ulonglong)(*(longlong *)(param_1 + 0x98) * *plVar23) >> 0x20);
      uVar17 = uVar17 << bVar7 | uVar17 >> 0x20 - bVar7;
      *(uint *)(param_1 + 0xa0) = uVar17;
      *(ulonglong *)(param_1 + 0x88) =
           *(longlong *)(param_1 + 0x60) + (ulonglong)(uVar17 & *(uint *)(param_1 + 0x74)) * 4;
      lVar25 = 0;
      *(ulonglong *)(param_1 + 0x90) =
           *(longlong *)(param_1 + 0x60) +
           ((ulonglong)(*plVar23 * -0x30e44323485a9b9d) >> ((ulonglong)(0x40 - iVar18) & 0x3f) &
           0xfffffffffffffff0) * 4;
      local_280 = param_2;
      if (local_238 != 0) {
        iVar18 = FUN_1451acfc0(param_1 + 0xa8,puVar1,local_250,local_258);
        auVar35 = ZEXT3264(_DAT_149d65200);
        if (0 < iVar18) {
          local_230._0_4_ = iVar18;
          lVar25 = 1;
          local_230._4_4_ = local_258[0];
        }
      }
      param_2 = local_280;
      auVar2 = *pauVar4;
      uVar19 = (uint)local_280;
      auVar32._4_4_ = uVar19;
      auVar32._0_4_ = uVar19;
      auVar32._8_4_ = uVar19;
      auVar32._12_4_ = uVar19;
      auVar32._16_4_ = uVar19;
      auVar32._20_4_ = uVar19;
      auVar32._24_4_ = uVar19;
      auVar32._28_4_ = uVar19;
      auVar9 = vpsubd_avx2(auVar2,auVar32);
      auVar34 = auVar35._0_32_;
      local_120 = vpor_avx2(auVar9,auVar34);
      auVar9 = vpsubd_avx2(pauVar4[1],auVar32);
      local_100 = vpor_avx2(auVar9,auVar34);
      auVar9 = vpsubd_avx2(*pauVar5,auVar32);
      local_e0 = vpor_avx2(auVar9,auVar34);
      auVar9 = vpsubd_avx2(pauVar5[1],auVar32);
      local_c0 = vpor_avx2(auVar9,auVar34);
      auVar9 = vpand_avx2(*pauVar5,auVar34);
      auVar32 = vpand_avx2(pauVar5[1],auVar34);
      uVar17 = local_278 & 0xfc000000;
      auVar33._0_8_ = CONCAT44(local_278,local_278) & 0xfc000000fc000000;
      auVar33._8_4_ = uVar17;
      auVar33._12_4_ = uVar17;
      auVar33._16_4_ = uVar17;
      auVar33._20_4_ = uVar17;
      auVar33._24_4_ = uVar17;
      auVar33._28_4_ = uVar17;
      auVar9 = vpcmpeqd_avx2(auVar9,auVar33);
      auVar8 = vpcmpeqd_avx2(auVar32,auVar33);
      auVar32 = vpand_avx2(auVar2,auVar34);
      auVar34 = vpand_avx2(pauVar4[1],auVar34);
      auVar9 = vpackssdw_avx2(auVar9,auVar8);
      auVar32 = vpcmpeqd_avx2(auVar32,auVar33);
      auVar34 = vpcmpeqd_avx2(auVar34,auVar33);
      auVar32 = vpackssdw_avx2(auVar32,auVar34);
      auVar9 = vpacksswb_avx2(auVar32,auVar9);
      auVar9 = vpermd_avx2(_DAT_149d651e0,auVar9);
      uVar17 = (uint)(SUB321(auVar9 >> 7,0) & 1) | (uint)(SUB321(auVar9 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar9 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar9 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar9 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar9 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar9 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar9 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar9 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar9 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar9 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar9 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar9 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar9 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar9 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar9 >> 0x7f,0) << 0xf;
      uVar30 = uVar17 | (uint)(SUB321(auVar9 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar9 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar9 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar9 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar9 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar9 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar9 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar9 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar9 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar9 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar9 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar9 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar9 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar9 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar9 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar9[0x1f] >> 7) << 0x1f;
      if (pauVar4 == pauVar5) {
        uVar30 = uVar17;
      }
      pcVar28 = &DAT_00000003;
      if (uVar30 != 0) {
        do {
          uVar17 = 0;
          for (uVar10 = uVar30; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          uVar30 = uVar30 - 1 & uVar30;
          iVar18 = *(int *)(local_120 + (ulonglong)uVar17 * 4);
          if (((-local_280 <= (longlong)iVar18) &&
              (pcVar22 = (char *)((longlong)iVar18 + (longlong)puVar1),
              (longlong)pcVar28 < (longlong)(lVar3 - 4U) - (longlong)puVar1)) &&
             (pcVar28[(longlong)puVar1] == pcVar22[(longlong)pcVar28])) {
            lVar26 = (longlong)pcVar22 - (longlong)puVar1;
            puVar20 = puVar1;
            if (puVar1 <= (ulonglong *)(lVar3 - 0xcU)) {
LAB_14547f4e0:
              uVar21 = *(ulonglong *)(lVar26 + (longlong)puVar20) ^ *puVar20;
              if (uVar21 == 0) goto code_r0x00014547f4ed;
              uVar17 = 0;
              for (; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              pcVar22 = (char *)(((ulonglong)(uVar17 >> 3) - (longlong)puVar1) + (longlong)puVar20);
              goto LAB_14547f519;
            }
LAB_14547f4f6:
            pcVar22 = (char *)((longlong)puVar20 - (longlong)puVar1);
            for (; (puVar20 < (ulonglong *)(lVar3 - 4U) &&
                   ((char)*puVar20 == *(char *)((longlong)puVar20 + lVar26)));
                puVar20 = (ulonglong *)((longlong)puVar20 + 1)) {
              pcVar22 = pcVar22 + 1;
            }
LAB_14547f519:
            if ((longlong)pcVar28 < (longlong)pcVar22) {
              *(int *)(&local_230 + lVar25) = (int)pcVar22;
              *(int *)((longlong)local_228 + lVar25 * 8 + -4) = -iVar18;
              lVar25 = lVar25 + 1;
              pcVar28 = pcVar22;
            }
          }
        } while (uVar30 != 0);
        auVar2 = *pauVar4;
      }
      uVar11 = *(undefined8 *)(pauVar4[1] + 4);
      uVar12 = *(undefined8 *)(pauVar4[1] + 0xc);
      uVar13 = *(undefined8 *)(pauVar4[1] + 0x14);
      lVar26 = (longlong)param_6;
      *(undefined1 (*) [32])(*pauVar4 + 4) = auVar2;
      *(undefined8 *)pauVar4[1] = *(undefined8 *)(*pauVar4 + 0x1c);
      *(undefined8 *)(pauVar4[1] + 8) = uVar11;
      *(undefined8 *)(pauVar4[1] + 0x10) = uVar12;
      *(undefined8 *)(pauVar4[1] + 0x18) = uVar13;
      uVar17 = (uVar19 ^ local_278) & 0x3ffffff ^ local_278;
      *(uint *)*pauVar4 = uVar17;
      uVar11 = *(undefined8 *)(*pauVar5 + 0x1c);
      uVar12 = *(undefined8 *)(pauVar5[1] + 4);
      uVar13 = *(undefined8 *)(pauVar5[1] + 0xc);
      uVar14 = *(undefined8 *)(pauVar5[1] + 0x14);
      *(undefined8 *)(*pauVar5 + 4) = *(undefined8 *)*pauVar5;
      *(undefined8 *)(*pauVar5 + 0xc) = *(undefined8 *)(*pauVar5 + 8);
      *(undefined8 *)(*pauVar5 + 0x14) = *(undefined8 *)(*pauVar5 + 0x10);
      *(undefined8 *)(*pauVar5 + 0x1c) = *(undefined8 *)(*pauVar5 + 0x18);
      *(undefined8 *)pauVar5[1] = uVar11;
      *(undefined8 *)(pauVar5[1] + 8) = uVar12;
      *(undefined8 *)(pauVar5[1] + 0x10) = uVar13;
      *(undefined8 *)(pauVar5[1] + 0x18) = uVar14;
      *(uint *)*pauVar5 = uVar17;
      _Dst = (undefined4 *)(local_268 + (local_280 - local_270) * lVar26 * 8);
      if (lVar25 == 0) {
        *_Dst = 0;
      }
      else {
        if (1 < lVar25) {
          lVar29 = 1;
          do {
            lVar6 = (&local_230)[lVar29];
            plVar23 = &local_238 + lVar29;
            local_280._4_4_ = (int)((ulonglong)lVar6 >> 0x20);
            lVar27 = lVar29;
            do {
              if ((int)lVar6 == (int)*plVar23) {
                bVar31 = local_280._4_4_ < *(int *)((longlong)plVar23 + 4);
              }
              else {
                bVar31 = (int)*plVar23 <= (int)lVar6;
              }
              if (!bVar31) break;
              lVar27 = lVar27 + -1;
              plVar23[1] = *plVar23;
              plVar23 = plVar23 + -1;
            } while (0 < lVar27);
            lVar29 = lVar29 + 1;
            (&local_230)[lVar27] = lVar6;
          } while (lVar29 < lVar25);
          plVar23 = &local_230 + lVar25;
          iVar18 = (int)local_230;
          plVar16 = &local_230;
          do {
            plVar24 = plVar16;
            if (&local_238 + lVar25 <= plVar24) break;
            bVar31 = iVar18 != (int)plVar24[1];
            iVar18 = (int)plVar24[1];
            plVar16 = plVar24 + 1;
          } while (bVar31);
          if (plVar24 < &local_238 + lVar25) {
            plVar16 = plVar24 + 2;
            while (plVar15 = plVar16, plVar15 < plVar23) {
              plVar16 = plVar15 + 1;
              if ((int)*plVar24 != (int)*plVar15) {
                plVar24 = plVar24 + 1;
                *plVar24 = *plVar15;
              }
            }
            plVar23 = plVar24 + 1;
          }
          lVar25 = (longlong)(int)((longlong)plVar23 - (longlong)&local_230 >> 3);
          local_280 = lVar6;
        }
        iVar18 = (int)local_230;
        lVar29 = (longlong)(int)local_230;
        if (lVar25 < lVar26) {
          lVar26 = lVar25;
        }
        memcpy(_Dst,&local_230,lVar26 * 8);
        if (lVar26 < param_6) {
          _Dst[lVar26 * 2] = 0;
        }
        if (0x4c < iVar18) {
          *(longlong *)(param_1 + 0x48) = param_2 + lVar29;
          *(undefined4 *)(param_1 + 0x54) = local_230._4_4_;
          local_2a0 = param_6;
          local_2a8 = param_2;
          *(longlong *)(param_1 + 0x40) = param_2;
          *(int *)(param_1 + 0x50) = iVar18;
          param_2 = FUN_1451b21e0(param_1,local_268,local_270,local_260);
          param_2 = param_2 + -1;
        }
        auVar35 = ZEXT3264(_DAT_149d65200);
      }
      param_2 = param_2 + 1;
      local_280 = param_2;
    } while (param_2 < local_260);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_2c8);
code_r0x00014547f4ed:
  puVar20 = puVar20 + 1;
  if ((ulonglong *)(lVar3 - 0xcU) < puVar20) goto LAB_14547f4f6;
  goto LAB_14547f4e0;
}



// FUNCTION 14547f7c0 FUN_14547f7c0 body=1432 status=ok
// SIG undefined FUN_14547f7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_14547f7c0(byte *param_1,longlong param_2,void *param_3,size_t param_4,char param_5)

{
  ulonglong *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_26a8 [32];
  byte *local_2688;
  ushort *local_2680;
  longlong local_2678;
  longlong local_2670;
  void *local_2668;
  longlong local_2660;
  longlong local_2658;
  longlong local_2650;
  byte *local_2648;
  byte *local_2640;
  ushort *local_2638;
  ushort *local_2630;
  byte *local_2628;
  ushort *local_2620;
  ushort *local_2618;
  byte *local_2610;
  undefined8 local_2608;
  ulonglong local_2600;
  undefined8 local_25f8;
  undefined8 local_25f0;
  ulonglong local_25e8;
  undefined8 local_25e0;
  undefined1 local_25d8 [4096];
  undefined1 local_15d8 [4128];
  undefined8 local_5b8;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 local_594;
  undefined4 local_590;
  undefined4 local_58c;
  undefined8 local_588;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  byte local_558 [1280];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_26a8;
  uVar8 = 0;
  puVar3 = (ushort *)(param_1 + param_2);
  uVar10 = uVar8;
  if (0 < param_2) {
    uVar10 = (ulonglong)*param_1;
  }
  puVar1 = (ulonglong *)(param_1 + 1);
  lVar12 = (longlong)puVar3 - (longlong)puVar1;
  if (lVar12 < 8) {
    uVar9 = uVar8;
    if (0 < lVar12) {
      uVar9 = (ulonglong)(byte)*puVar1;
    }
    uVar17 = uVar8;
    if (lVar12 != 1 && -1 < lVar12 + -1) {
      uVar17 = (ulonglong)param_1[2];
    }
    uVar16 = uVar8;
    if (lVar12 != 2 && -1 < lVar12 + -2) {
      uVar16 = (ulonglong)param_1[3];
    }
    uVar7 = uVar8;
    if (lVar12 != 3 && -1 < lVar12 + -3) {
      uVar7 = (ulonglong)param_1[4];
    }
    lVar12 = (longlong)puVar3 - (longlong)(param_1 + 5);
    uVar11 = uVar8;
    if (0 < lVar12) {
      uVar11 = (ulonglong)param_1[5];
    }
    uVar18 = uVar8;
    if (lVar12 != 1 && -1 < lVar12 + -1) {
      uVar18 = (ulonglong)param_1[6];
    }
    if (lVar12 != 2 && -1 < lVar12 + -2) {
      uVar8 = (ulonglong)param_1[7];
    }
    uVar8 = ((((((uVar9 << 8 | uVar17) << 8 | uVar16) << 8 | uVar7) << 8 | uVar11) << 8 | uVar18) <<
             8 | uVar8) << 8;
  }
  else {
    uVar8 = *puVar1;
    uVar8 = (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
            (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
            (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  }
  local_2688 = param_1 + 7;
  uVar10 = uVar8 >> 8 | uVar10 << 0x38;
  local_5b8 = 0;
  local_588 = 0;
  local_5b0 = 2;
  local_580 = 2;
  local_2678 = uVar10 * 2;
  local_5ac = 6;
  local_57c = 6;
  local_5a8 = 0xe;
  local_578 = 0xe;
  local_5a4 = 0x1e;
  local_574 = 0x1e;
  local_5a0 = 0x3e;
  local_570 = 0x3e;
  local_59c = 0x7e;
  local_56c = 0x7e;
  local_598 = 0xfe;
  local_568 = 0xfe;
  local_594 = 0x1fe;
  local_564 = 0x1fe;
  local_590 = 0x2fe;
  local_560 = 0x2fe;
  local_58c = 0x3fe;
  local_55c = 0x3fe;
  local_2670 = 8;
  local_2680 = puVar3;
  if ((longlong)uVar10 < 0) {
    local_2670 = 9;
    bVar19 = local_2678 < 0;
    local_2678 = uVar10 << 2;
    if (bVar19) goto LAB_14547fb5b;
    iVar6 = FUN_145481ea0(&local_2688,local_558,&local_5b8);
  }
  else {
    iVar6 = FUN_145481620(&local_2688,local_558,&local_5b8);
  }
  if (0 < iVar6) {
    if (iVar6 == 1) {
      memset(param_3,(uint)local_558[0],param_4);
    }
    else {
      cVar5 = FUN_145481460(&local_588,&local_5b8,local_15d8,local_558);
      if (cVar5 != '\0') {
        puVar13 = (uint *)(local_2688 +
                          -((longlong)
                            ((0x3f - local_2670) +
                            (ulonglong)((uint)(0x3f - local_2670 >> 0x3f) & 7)) >> 3));
        if (param_5 == '\0') {
          if ((longlong)puVar3 - (longlong)puVar13 < 3) goto LAB_14547fb5b;
          puVar14 = (ushort *)((longlong)puVar13 + 2);
          if ((longlong)puVar3 - (longlong)puVar14 < (longlong)(ulonglong)((ushort)*puVar13 + 2)) {
            FUN_144d94340();
            if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
              (*(code *)PTR_FUN_14c6d9368)
                        (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_huff.cpp",0xcf7,
                         "OODLE ERROR : corruption : (comp_end-comp_start) >= comp_len1 + 2\n");
            }
            FUN_144d94360();
            goto LAB_14547fb5b;
          }
          local_2658 = param_4 + (longlong)param_3;
          local_2648 = (byte *)((longlong)puVar14 + (ulonglong)(ushort)*puVar13);
          local_25f0 = 0;
          local_2608 = 0;
          local_25e8 = local_25e8 & 0xffffffff00000000;
          local_2600 = local_2600 & 0xffffffff00000000;
          local_2668 = param_3;
          local_2638 = puVar14;
          local_2630 = puVar3;
          local_2628 = local_2648;
          FUN_145480e00(local_25d8,local_15d8);
          if ((DAT_14c7fc4c4 >> 9 & 1) == 0) {
            if ((char)DAT_14c7fc4c4 < '\0') {
              cVar5 = FUN_1427289a0();
            }
            else {
              cVar5 = FUN_142728700(&local_2668);
            }
          }
          else {
            cVar5 = FUN_142728c80();
          }
        }
        else {
          if ((longlong)puVar3 - (longlong)puVar13 < 6) goto LAB_14547fb5b;
          puVar14 = (ushort *)((longlong)puVar13 + 3);
          if ((longlong)puVar3 - (longlong)puVar14 < (longlong)(ulonglong)(*puVar13 & 0xffffff))
          goto LAB_14547fb5b;
          puVar4 = (ushort *)((ulonglong)(*puVar13 & 0xffffff) + (longlong)puVar14);
          puVar15 = (ushort *)((longlong)puVar13 + 5);
          if (((longlong)puVar4 - (longlong)puVar15 < (longlong)((ulonglong)*puVar14 + 2)) ||
             ((longlong)puVar3 - (longlong)puVar4 < 3)) goto LAB_14547fb5b;
          puVar2 = puVar4 + 1;
          if ((longlong)puVar3 - (longlong)puVar2 < (longlong)((ulonglong)*puVar4 + 2))
          goto LAB_14547fb5b;
          local_2650 = param_4 + (longlong)param_3;
          local_2648 = (byte *)((ulonglong)*puVar14 + (longlong)puVar15);
          local_2660 = ((longlong)(param_4 + 1) >> 1) + (longlong)param_3;
          local_2640 = (byte *)((longlong)puVar2 + (ulonglong)*puVar4);
          local_25f0 = 0;
          local_2608 = 0;
          local_25e8 = 0;
          local_2600 = 0;
          local_25e0 = 0;
          local_25f8 = 0;
          local_2668 = param_3;
          local_2658 = local_2660;
          local_2638 = puVar15;
          local_2630 = puVar4;
          local_2628 = local_2648;
          local_2620 = puVar2;
          local_2618 = puVar3;
          local_2610 = local_2640;
          FUN_145480e00(local_25d8,local_15d8);
          if ((DAT_14c7fc4c4 >> 9 & 1) == 0) {
            if ((char)DAT_14c7fc4c4 < '\0') {
              cVar5 = FUN_1427294e0();
            }
            else {
              cVar5 = FUN_142728f80(&local_2668);
            }
          }
          else {
            cVar5 = FUN_142729a60();
          }
        }
        if (cVar5 != '\0') {
          FUN_145481040(&local_2668,local_25d8,param_5);
        }
      }
    }
  }
LAB_14547fb5b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_26a8);
}



// FUNCTION 14547fd80 FUN_14547fd80 body=1541 status=ok
// SIG undefined FUN_14547fd80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14547fd80(undefined1 *param_1,undefined4 *param_2,byte *param_3,ulonglong param_4,
                  undefined8 param_5,float param_6,char *param_7,float *param_8,float param_9,
                  undefined4 *param_10,byte param_11,ulonglong param_12,int param_13)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1238 [32];
  ulonglong local_1218;
  ulonglong local_1210;
  ulonglong *local_1208;
  ulonglong local_1200;
  int local_11f8;
  int local_11f4;
  int local_11f0;
  int local_11ec;
  undefined8 local_11e8;
  undefined4 *local_11e0;
  ulonglong *local_11d8 [2];
  ulonglong local_11c8;
  longlong local_11c0;
  ulonglong local_11b8;
  ulonglong local_11b0;
  byte *local_11a8;
  float *local_11a0;
  ulonglong local_1198;
  char *local_1190;
  ulonglong local_1188 [258];
  ulonglong local_978 [32];
  undefined1 local_878 [2048];
  ulonglong local_78;
  undefined8 uStack_48;
  
  uStack_48 = 0x14547fd9f;
  local_78 = DAT_14c707940 ^ (ulonglong)auStack_1238;
  local_11e8 = param_5;
  local_11a0 = param_8;
  local_11b0 = param_12;
  local_1190 = param_7;
  local_11e0 = param_10;
  local_11b8 = param_4;
  local_11a8 = param_3;
  lVar6 = FUN_1451aea80(0x100,0,local_878);
  lVar12 = 0;
  local_1210 = CONCAT44(local_1210._4_4_,(uint)(5 < param_13));
  local_1218 = local_11b0;
  FUN_1451af3a0(lVar6,local_11e8,param_4 & 0xffffffff,0xb);
  local_11ec = *(int *)(lVar6 + 0x294) + 1;
  local_11f8 = *(int *)(lVar6 + 0x288);
  if (local_11f8 < 2) {
    if (2 < (longlong)param_2 - (longlong)param_1) {
      fVar13 = (float)(**(code **)(param_7 + 8))(param_4);
      fVar13 = fVar13 * param_6 + 8.0;
      if (fVar13 < *local_11a0) {
        bVar1 = *local_11a8;
        *param_1 = 0;
        param_1[1] = bVar1 >> 2 | 0x40;
        param_1[2] = bVar1 << 6;
        *param_10 = 2;
        *local_11a0 = fVar13;
      }
    }
    goto LAB_145480371;
  }
  local_11f0 = 0;
  local_11f4 = 0;
  if (*param_7 != '\0') {
    local_11f0 = FUN_1454809c0(lVar6,local_1188,0x100);
    local_11f4 = (local_11f0 + -1) / 2;
  }
  iVar5 = local_11f4;
  uVar4 = FUN_1451b1120(local_11e8,param_4 & 0xffffffff,*(undefined8 *)(lVar6 + 0x2a0),local_11ec);
  local_1198 = (ulonglong)uVar4;
  fVar13 = (float)local_1198 / (float)(longlong)param_4;
  if ((param_11 & 1) == 0) {
LAB_14547ffc4:
    *local_11e0 = 2;
    fVar13 = (float)(**(code **)(param_7 + 0x48))
                              (param_4,(longlong)local_11f8,(longlong)local_11f4,fVar13);
    local_11e8 = CONCAT44(local_11e8._4_4_,2);
  }
  else {
    pcVar2 = *(code **)(param_7 + 0x48);
    lVar9 = (longlong)local_11f8;
    fVar14 = (float)(**(code **)(param_7 + 0x50))(local_11b8,lVar9,(longlong)iVar5,fVar13);
    param_4 = local_11b8;
    fVar15 = (float)(*pcVar2)(local_11b8,lVar9,(longlong)iVar5,fVar13);
    param_7 = local_1190;
    if (0.0 <= (fVar14 - fVar15) * param_6 + 6.3125) goto LAB_14547ffc4;
    local_11e8 = CONCAT44(local_11e8._4_4_,4);
    *local_11e0 = 4;
    fVar13 = (float)(**(code **)(local_1190 + 0x50))
                              (param_4,(longlong)local_11f8,(longlong)local_11f4,fVar13);
  }
  fVar14 = fVar13 * param_6 + 5.0;
  if ((fVar13 <= param_9) &&
     (iVar5 = local_11f8 * 2 + 0xf, lVar9 = (local_1198 + 7 >> 3) + 0xd,
     (float)((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + (float)lVar9 + fVar14 < *local_11a0)) {
    iVar5 = local_11f0;
    if (*param_7 == '\0') {
      iVar5 = FUN_1454809c0(lVar6,local_1188,0x100);
    }
    local_11d8[0] = local_978;
    if ((*(int *)(lVar6 + 0x288) < 5) || ((param_11 & 0x40) == 0)) {
      local_11c8 = 0;
      local_11c0 = 0x3e;
      FUN_1451aebc0(lVar6,local_11d8);
    }
    else {
      local_11c8 = 2;
      local_11c0 = 0x3d;
      FUN_145480b00(lVar6,local_11d8,local_1188,iVar5);
    }
    uVar3 = local_11b8;
    lVar10 = 0x3f - local_11c0 >> 3;
    uVar7 = local_11c8 << ((char)local_11c0 + 1U & 0x3f);
    *local_11d8[0] =
         uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 | (uVar7 & 0xff0000000000) >> 0x18 |
         (uVar7 & 0xff00000000) >> 8 | (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 |
         (uVar7 & 0xff00) << 0x28 | uVar7 << 0x38;
    local_11d8[0] = (ulonglong *)((longlong)local_11d8[0] + lVar10);
    local_11c0 = local_11c0 + lVar10 * 8;
    if (-local_11c0 != -0x3f && -1 < -local_11c0 + 0x3f) {
      uVar4 = (int)local_11c0 + 1U & 7;
      if (uVar4 != 0) {
        local_11c8 = local_11c8 << (sbyte)uVar4;
        local_11c0 = local_11c0 - (ulonglong)uVar4;
      }
      while (7 < 0x3f - local_11c0) {
        *(char *)local_11d8[0] = (char)(local_11c8 >> (0x37U - (char)local_11c0 & 0x3f));
        local_11c0 = local_11c0 + 8;
        local_11d8[0] = (ulonglong *)((longlong)local_11d8[0] + 1);
        local_11c8 = local_11c8 & *(uint *)(&DAT_149c51b1c + local_11c0 * -4);
      }
    }
    puVar8 = (undefined1 *)
             ((longlong)local_11d8[0] +
             (((longlong)((ulonglong)((uint)(0x46 - local_11c0 >> 0x3f) & 7) + (0x46 - local_11c0))
              >> 3) - (longlong)local_978));
    if (((float)(longlong)(puVar8 + lVar9) + fVar14 < *local_11a0) &&
       ((longlong)(puVar8 + lVar9 + 8) < (longlong)param_2 - (longlong)param_1)) {
      local_11e0 = param_2;
      if (param_1 + local_11b8 + 0x100 <= param_2) {
        local_11e0 = (undefined4 *)(param_1 + local_11b8 + 0x100);
      }
      memcpy(param_1,local_978,(size_t)puVar8);
      puVar8 = param_1 + (longlong)puVar8;
      FUN_1451af940(lVar6);
      uVar7 = local_11b8;
      local_1210 = *(ulonglong *)(lVar6 + 0x2a0);
      if (0 < (longlong)local_11ec) {
        do {
          uVar4 = *(uint *)(*(longlong *)(lVar6 + 0x2a8) + lVar12 * 4);
          local_1188[lVar12] =
               ((ulonglong)(byte)(&DAT_149d65220)[uVar4 & 0x3f] << 5 |
               (ulonglong)(byte)(&DAT_149d65220)[uVar4 >> 5]) >>
               (0xbU - *(char *)(lVar12 + local_1210) & 0x3f);
          lVar12 = lVar12 + 1;
        } while (lVar12 < local_11ec);
      }
      local_1200 = local_11b0;
      local_1208 = local_1188;
      local_1198 = local_1210;
      if ((int)local_11e8 == 4) {
        lVar12 = (longlong)(local_11b8 + 1) >> 1;
        local_1218 = lVar12;
        lVar6 = FUN_1454803c0(puVar8 + 3,local_11e0,param_2,local_11a8);
        *puVar8 = (char)lVar6;
        local_1218 = uVar7 - lVar12;
        puVar8[2] = (char)((ulonglong)lVar6 >> 0x10);
        puVar8[1] = (char)((ulonglong)lVar6 >> 8);
        puVar8 = puVar8 + 3 + lVar6;
        pbVar11 = local_11a8 + lVar12;
      }
      else {
        local_1218 = uVar3;
        pbVar11 = local_11a8;
      }
      local_1208 = local_1188;
      local_1210 = local_1198;
      local_1200 = local_11b0;
      lVar6 = FUN_1454803c0(puVar8,local_11e0,param_2,pbVar11);
      *local_11a0 = (float)(longlong)(puVar8 + (lVar6 - (longlong)param_1)) + fVar14;
    }
  }
LAB_145480371:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_78 ^ (ulonglong)auStack_1238);
}



// FUNCTION 1454803c0 FUN_1454803c0 body=1480 status=ok
// SIG undefined FUN_1454803c0(void)

void FUN_1454803c0(undefined2 *param_1,uint *param_2,undefined8 param_3,byte *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined4 *_Src;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  size_t _Size;
  void *_Dst;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStack_148 [32];
  uint local_128;
  byte *local_120;
  byte *local_118;
  longlong local_110;
  longlong local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  uint *local_f0;
  longlong *local_e0;
  undefined2 *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  byte *local_a8;
  byte *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 *local_88;
  uint *local_80;
  undefined4 *local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_b0 = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = (byte *)param_5;
  local_110 = param_6;
  local_108 = param_7;
  local_e0 = param_8;
  puVar14 = (undefined4 *)(param_1 + 1);
  lVar17 = (param_5 * 0xb + 0x17) / 0x18;
  lVar22 = lVar17 + 9;
  uVar10 = 0;
  local_c0 = (undefined4 *)0x0;
  local_c8 = param_8;
  local_118 = param_4;
  local_100 = puVar14;
  local_f0 = param_2;
  local_d8 = param_1;
  local_d0 = lVar22;
  local_b8 = lVar22;
  if (param_8 == (longlong *)0x0) {
    _Src = (undefined4 *)(*(code *)PTR_FUN_14c6d9350)(lVar22,0x10);
    local_f8 = _Src;
    if (_Src == (undefined4 *)0x0) {
      FUN_144d95420(lVar22);
    }
  }
  else {
    uVar13 = lVar17 + 0x18U & 0xfffffffffffffff0;
    uVar12 = (ulonglong)(-(uint)(param_8[4] != 0) & 0x10);
    local_f8 = (undefined4 *)param_8[1];
    if ((ulonglong)(param_8[3] + *param_8) < (longlong)local_f8 + uVar12 + uVar13) {
      if ((int)param_8[5] == 0) {
        local_f8 = (undefined4 *)0x0;
        _Src = local_f8;
      }
      else {
        _Src = (undefined4 *)(*(code *)PTR_FUN_14c6d9350)(uVar13,0x10);
        puVar14 = local_100;
        local_f8 = _Src;
        if (_Src == (undefined4 *)0x0) {
          FUN_144d95420(uVar13);
          puVar14 = local_100;
        }
      }
    }
    else {
      puVar9 = (ulonglong *)((longlong)local_f8 + uVar13);
      param_8[1] = (longlong)puVar9;
      if (param_8[4] != 0) {
        *puVar9 = uVar13;
        puVar9[1] = 0;
        param_8[1] = param_8[1] + uVar12;
        puVar9 = (ulonglong *)param_8[1];
      }
      puVar8 = (ulonglong *)param_8[2];
      if ((ulonglong *)param_8[2] <= puVar9) {
        puVar8 = puVar9;
      }
      param_8[2] = (longlong)puVar8;
      _Src = local_f8;
    }
  }
  local_c0 = _Src;
  if ((_Src == (undefined4 *)0x0) &&
     (iVar6 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x1bc,
                            "oo2::rrScopeArenaAlloc::Alloc","m_ptr != NULL"), iVar6 != 0)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_128 = 0;
  pbVar1 = local_118 + (longlong)local_120;
  bVar4 = 0xf < (longlong)local_120;
  uVar13 = uVar10;
  puVar15 = _Src;
  uVar16 = uVar10;
  uVar18 = uVar10;
  uVar20 = uVar10;
  uVar12 = uVar10;
  local_120 = pbVar1;
  if (bVar4) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_a8 = local_118;
    local_98 = local_108;
    local_90 = local_110;
    local_88 = local_100;
    local_80 = local_f0;
    local_a0 = pbVar1;
    local_78 = _Src;
    if (((byte)DAT_14c7fc4c4 & 0x80) == 0) {
      FUN_1427282c0(&local_a8);
    }
    else {
      FUN_142728500();
    }
    local_118 = local_a8;
    uVar20 = uStack_58 & 0xffffffff;
    uVar12 = uStack_58 >> 0x20;
    uVar10 = local_50 & 0xffffffff;
    local_128 = (uint)local_50;
    uVar13 = local_70;
    puVar15 = local_78;
    uVar16 = uStack_68;
    puVar14 = local_88;
    uVar18 = local_60;
    param_2 = local_80;
  }
  uVar21 = (uint)uVar12;
  uVar19 = (uint)uVar20;
  while (local_118 + 3 <= local_120) {
    uVar13 = uVar13 | *(longlong *)(local_108 + (ulonglong)*local_118 * 8) << ((byte)uVar20 & 0x3f);
    uVar19 = (int)uVar20 + (uint)*(byte *)(local_110 + (ulonglong)*local_118);
    uVar16 = uVar16 | *(longlong *)(local_108 + (ulonglong)local_118[1] * 8) <<
                      ((byte)uVar12 & 0x3f);
    uVar21 = (int)uVar12 + (uint)*(byte *)(local_110 + (ulonglong)local_118[1]);
    uVar18 = uVar18 | *(longlong *)(local_108 + (ulonglong)local_118[2] * 8) <<
                      ((byte)uVar10 & 0x3f);
    local_128 = (int)uVar10 + (uint)*(byte *)(local_110 + (ulonglong)local_118[2]);
    if (0x1f < (int)uVar19) {
      *puVar14 = (int)uVar13;
      puVar14 = puVar14 + 1;
      uVar13 = uVar13 >> 0x20;
      uVar19 = uVar19 - 0x20;
    }
    uVar20 = (ulonglong)uVar19;
    if (0x1f < (int)uVar21) {
      param_2 = param_2 + -1;
      uVar7 = (uint)uVar16;
      *param_2 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar16 = uVar16 >> 0x20;
      uVar21 = uVar21 - 0x20;
    }
    uVar12 = (ulonglong)uVar21;
    if (0x1f < (int)local_128) {
      *puVar15 = (int)uVar18;
      puVar15 = puVar15 + 1;
      uVar18 = uVar18 >> 0x20;
      local_128 = local_128 - 0x20;
    }
    uVar10 = (ulonglong)local_128;
    _Src = local_f8;
    local_118 = local_118 + 3;
    param_8 = local_e0;
  }
  if (local_118 < local_120) {
    bVar2 = *local_118;
    local_118 = local_118 + 1;
    uVar13 = uVar13 | *(longlong *)(local_108 + (ulonglong)bVar2 * 8) << ((byte)uVar19 & 0x3f);
    uVar19 = uVar19 + *(byte *)((ulonglong)bVar2 + local_110);
    if (0x1f < (int)uVar19) {
      *puVar14 = (int)uVar13;
      puVar14 = puVar14 + 1;
      uVar13 = uVar13 >> 0x20;
      uVar19 = uVar19 - 0x20;
    }
    if (local_118 < local_120) {
      uVar16 = uVar16 | *(longlong *)(local_108 + (ulonglong)*local_118 * 8) <<
                        ((byte)uVar21 & 0x3f);
      uVar21 = uVar21 + *(byte *)((ulonglong)*local_118 + local_110);
      if (0x1f < (int)uVar21) {
        param_2 = param_2 + -1;
        uVar7 = (uint)uVar16;
        *param_2 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar16 = uVar16 >> 0x20;
        uVar21 = uVar21 - 0x20;
      }
    }
  }
  lVar17 = (longlong)puVar14 - (longlong)local_100;
  local_120 = (byte *)((longlong)local_f0 - (longlong)param_2);
  _Size = (longlong)puVar15 - (longlong)_Src;
  if (0 < (int)uVar19) {
    uVar10 = (ulonglong)((uVar19 - 1 >> 3) + 1);
    do {
      *(char *)(lVar17 + (longlong)local_100) = (char)uVar13;
      lVar17 = lVar17 + 1;
      uVar13 = uVar13 >> 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (0 < (int)uVar21) {
    uVar10 = (ulonglong)((uVar21 - 1 >> 3) + 1);
    local_120 = (byte *)((longlong)local_120 + uVar10);
    do {
      param_2 = (uint *)((longlong)param_2 + -1);
      *(char *)param_2 = (char)uVar16;
      uVar16 = uVar16 >> 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (0 < (int)local_128) {
    uVar10 = (ulonglong)((local_128 - 1 >> 3) + 1);
    do {
      *(char *)((longlong)_Src + _Size) = (char)uVar18;
      _Size = _Size + 1;
      uVar18 = uVar18 >> 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  *local_d8 = (short)lVar17;
  _Dst = (void *)((longlong)local_100 + lVar17);
  local_100 = _Dst;
  memcpy(_Dst,_Src,_Size);
  memmove((void *)(_Size + (longlong)_Dst),(void *)((longlong)local_f0 - (longlong)local_120),
          (size_t)local_120);
  if (_Src == (undefined4 *)0x0) goto LAB_145480978;
  if (param_8 != (longlong *)0x0) {
    uVar10 = local_d0 + 0xfU & 0xfffffffffffffff0;
    if ((undefined4 *)param_8[4] == (undefined4 *)0x0) {
      if ((longlong)_Src + uVar10 == param_8[1]) {
        param_8[1] = param_8[1] - uVar10;
        goto LAB_145480978;
      }
    }
    else if (((undefined4 *)param_8[4] <= _Src) && (_Src < (undefined4 *)(param_8[3] + *param_8))) {
      plVar11 = (longlong *)(uVar10 + (longlong)_Src);
      plVar11[1] = 1;
      plVar3 = (longlong *)param_8[1];
      if (plVar11 + 2 == plVar3) {
        while ((plVar3 != (longlong *)param_8[4] && (plVar11[1] == 1))) {
          param_8[1] = param_8[1] + (-0x10 - *plVar11);
          plVar3 = (longlong *)param_8[1];
          plVar11 = plVar3 + -2;
        }
      }
      goto LAB_145480978;
    }
  }
  (*(code *)PTR_FUN_14c6d9358)(_Src);
LAB_145480978:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
}



// FUNCTION 1454809c0 FUN_1454809c0 body=293 status=ok
// SIG undefined FUN_1454809c0(void)

int FUN_1454809c0(longlong param_1,int *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  pcVar3 = *(char **)(param_1 + 0x2a0);
  iVar21 = 0;
  lVar24 = (longlong)param_3;
  auVar26[0] = -('\0' < *pcVar3);
  auVar26[1] = -('\0' < pcVar3[1]);
  auVar26[2] = -('\0' < pcVar3[2]);
  auVar26[3] = -('\0' < pcVar3[3]);
  auVar26[4] = -('\0' < pcVar3[4]);
  auVar26[5] = -('\0' < pcVar3[5]);
  auVar26[6] = -('\0' < pcVar3[6]);
  auVar26[7] = -('\0' < pcVar3[7]);
  auVar26[8] = -('\0' < pcVar3[8]);
  auVar26[9] = -('\0' < pcVar3[9]);
  auVar26[10] = -('\0' < pcVar3[10]);
  auVar26[0xb] = -('\0' < pcVar3[0xb]);
  auVar26[0xc] = -('\0' < pcVar3[0xc]);
  auVar26[0xd] = -('\0' < pcVar3[0xd]);
  auVar26[0xe] = -('\0' < pcVar3[0xe]);
  auVar26[0xf] = -('\0' < pcVar3[0xf]);
  uVar5 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
  pcVar2 = pcVar3;
  while (uVar5 == 0) {
    pcVar1 = pcVar2 + 0x10;
    pcVar6 = pcVar2 + 0x11;
    pcVar7 = pcVar2 + 0x12;
    pcVar8 = pcVar2 + 0x13;
    pcVar9 = pcVar2 + 0x14;
    pcVar10 = pcVar2 + 0x15;
    pcVar11 = pcVar2 + 0x16;
    pcVar12 = pcVar2 + 0x17;
    pcVar13 = pcVar2 + 0x18;
    pcVar14 = pcVar2 + 0x19;
    pcVar15 = pcVar2 + 0x1a;
    pcVar16 = pcVar2 + 0x1b;
    pcVar17 = pcVar2 + 0x1c;
    pcVar18 = pcVar2 + 0x1d;
    pcVar19 = pcVar2 + 0x1e;
    pcVar20 = pcVar2 + 0x1f;
    pcVar2 = pcVar2 + 0x10;
    iVar21 = iVar21 + 0x10;
    auVar27[0] = -('\0' < *pcVar1);
    auVar27[1] = -('\0' < *pcVar6);
    auVar27[2] = -('\0' < *pcVar7);
    auVar27[3] = -('\0' < *pcVar8);
    auVar27[4] = -('\0' < *pcVar9);
    auVar27[5] = -('\0' < *pcVar10);
    auVar27[6] = -('\0' < *pcVar11);
    auVar27[7] = -('\0' < *pcVar12);
    auVar27[8] = -('\0' < *pcVar13);
    auVar27[9] = -('\0' < *pcVar14);
    auVar27[10] = -('\0' < *pcVar15);
    auVar27[0xb] = -('\0' < *pcVar16);
    auVar27[0xc] = -('\0' < *pcVar17);
    auVar27[0xd] = -('\0' < *pcVar18);
    auVar27[0xe] = -('\0' < *pcVar19);
    auVar27[0xf] = -('\0' < *pcVar20);
    uVar5 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  }
  iVar22 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
    }
  }
  iVar25 = 1;
  iVar21 = iVar21 + iVar22;
  *param_2 = iVar21;
  if (iVar21 < param_3) {
    param_2 = param_2 + 1;
    do {
      lVar23 = (longlong)iVar21;
      iVar22 = iVar21;
      if (lVar23 < lVar24) {
LAB_145480a40:
        pcVar2 = pcVar3 + lVar23;
        auVar28[0] = -(*pcVar2 == '\0');
        auVar28[1] = -(pcVar2[1] == '\0');
        auVar28[2] = -(pcVar2[2] == '\0');
        auVar28[3] = -(pcVar2[3] == '\0');
        auVar28[4] = -(pcVar2[4] == '\0');
        auVar28[5] = -(pcVar2[5] == '\0');
        auVar28[6] = -(pcVar2[6] == '\0');
        auVar28[7] = -(pcVar2[7] == '\0');
        auVar28[8] = -(pcVar2[8] == '\0');
        auVar28[9] = -(pcVar2[9] == '\0');
        auVar28[10] = -(pcVar2[10] == '\0');
        auVar28[0xb] = -(pcVar2[0xb] == '\0');
        auVar28[0xc] = -(pcVar2[0xc] == '\0');
        auVar28[0xd] = -(pcVar2[0xd] == '\0');
        auVar28[0xe] = -(pcVar2[0xe] == '\0');
        auVar28[0xf] = -(pcVar2[0xf] == '\0');
        uVar5 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
        if (uVar5 == 0) goto code_r0x000145480a54;
        iVar4 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        iVar22 = iVar22 + iVar4;
      }
LAB_145480a6d:
      iVar4 = param_3;
      if (iVar22 < param_3) {
        iVar4 = iVar22;
      }
      *param_2 = iVar4 - iVar21;
      lVar23 = (longlong)iVar4;
      iVar22 = iVar4;
      if (lVar23 < lVar24) {
LAB_145480a90:
        pcVar2 = pcVar3 + lVar23;
        auVar29[0] = -('\0' < *pcVar2);
        auVar29[1] = -('\0' < pcVar2[1]);
        auVar29[2] = -('\0' < pcVar2[2]);
        auVar29[3] = -('\0' < pcVar2[3]);
        auVar29[4] = -('\0' < pcVar2[4]);
        auVar29[5] = -('\0' < pcVar2[5]);
        auVar29[6] = -('\0' < pcVar2[6]);
        auVar29[7] = -('\0' < pcVar2[7]);
        auVar29[8] = -('\0' < pcVar2[8]);
        auVar29[9] = -('\0' < pcVar2[9]);
        auVar29[10] = -('\0' < pcVar2[10]);
        auVar29[0xb] = -('\0' < pcVar2[0xb]);
        auVar29[0xc] = -('\0' < pcVar2[0xc]);
        auVar29[0xd] = -('\0' < pcVar2[0xd]);
        auVar29[0xe] = -('\0' < pcVar2[0xe]);
        auVar29[0xf] = -('\0' < pcVar2[0xf]);
        uVar5 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
        if (uVar5 == 0) goto code_r0x000145480aa5;
        iVar21 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
          }
        }
        iVar22 = iVar22 + iVar21;
      }
LAB_145480ab9:
      iVar21 = param_3;
      if (iVar22 < param_3) {
        iVar21 = iVar22;
      }
      iVar25 = iVar25 + 2;
      param_2[1] = iVar21 - iVar4;
      param_2 = param_2 + 2;
    } while (iVar21 < param_3);
  }
  return iVar25;
code_r0x000145480a54:
  iVar22 = iVar22 + 0x10;
  lVar23 = lVar23 + 0x10;
  if (lVar24 <= lVar23) goto LAB_145480a6d;
  goto LAB_145480a40;
code_r0x000145480aa5:
  iVar22 = iVar22 + 0x10;
  lVar23 = lVar23 + 0x10;
  if (lVar24 <= lVar23) goto LAB_145480ab9;
  goto LAB_145480a90;
}



// FUNCTION 145480b00 FUN_145480b00 body=729 status=ok
// SIG undefined FUN_145480b00(void)

void FUN_145480b00(longlong param_1,longlong *param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_728 [32];
  int *local_708;
  int local_700;
  int local_6f8;
  longlong local_6e8;
  int local_6d8 [24];
  undefined1 local_678 [256];
  undefined1 local_578 [256];
  undefined1 local_478 [256];
  undefined1 local_378 [256];
  undefined1 local_278 [256];
  undefined1 local_178 [256];
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)auStack_728;
  iVar9 = *param_3;
  iVar10 = 0;
  local_6d8[0x14] = 0;
  iVar15 = 0;
  local_6d8[0] = 0;
  local_6d8[1] = 0;
  local_6d8[2] = 0;
  local_6d8[3] = 0;
  iVar14 = 0x20;
  local_6d8[4] = 0;
  local_6d8[5] = 0;
  local_6d8[6] = 0;
  local_6d8[7] = 0;
  local_6d8[8] = 0;
  local_6d8[9] = 0;
  local_6d8[10] = 0;
  local_6d8[0xb] = 0;
  local_6d8[0xc] = 0;
  local_6d8[0xd] = 0;
  local_6d8[0xe] = 0;
  local_6d8[0xf] = 0;
  local_6d8[0x10] = 0;
  local_6d8[0x11] = 0;
  local_6d8[0x12] = 0;
  local_6d8[0x13] = 0;
  if (1 < (longlong)param_4) {
    lVar11 = 1;
    lVar13 = 0;
    do {
      iVar5 = param_3[lVar11] + iVar9;
      lVar12 = (longlong)iVar9;
      if (lVar12 < iVar5) {
        lVar2 = *(longlong *)(param_1 + 0x2a0);
        iVar15 = iVar15 + (iVar5 - iVar9);
        iVar9 = iVar9 + (iVar5 - iVar9);
        do {
          pbVar1 = (byte *)(lVar12 + lVar2);
          lVar12 = lVar12 + 1;
          iVar7 = (uint)*pbVar1 - (iVar14 + 2 >> 2);
          iVar14 = iVar14 + iVar7;
          uVar6 = iVar7 * 2 ^ iVar7 >> 0x1f;
          local_678[lVar13] = (char)uVar6;
          lVar13 = lVar13 + 1;
          local_6d8[(int)uVar6] = local_6d8[(int)uVar6] + 1;
        } while (lVar12 < iVar5);
      }
      iVar9 = iVar9 + param_3[lVar11 + 1];
      lVar11 = lVar11 + 2;
    } while (lVar11 < param_4);
  }
  dVar3 = 99999997952.0;
  lVar11 = 0x3f - param_2[3] >> 3;
  uVar8 = param_2[2] << ((char)param_2[3] + 1U & 0x3f);
  *(ulonglong *)*param_2 =
       uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
       (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
       (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  *param_2 = *param_2 + lVar11;
  param_2[3] = param_2[3] + lVar11 * 8;
  local_6f8 = param_4;
  local_6e8 = param_1;
  iVar9 = 1;
  do {
    iVar5 = FUN_14547ef40(local_6d8,0x15,iVar10);
    iVar14 = iVar10;
    dVar4 = (double)iVar5;
    if (dVar3 <= (double)iVar5) {
      iVar14 = iVar9;
      dVar4 = dVar3;
    }
    dVar3 = dVar4;
    iVar10 = iVar10 + 1;
    iVar9 = iVar14;
  } while (iVar10 < 4);
  param_2[3] = param_2[3] + -2;
  param_2[2] = param_2[2] << 2 | (longlong)iVar14;
  local_700 = local_6f8;
  local_708 = param_3;
  iVar9 = FUN_1455d05e0(local_478,local_178,local_278,iVar15);
  param_2[3] = param_2[3] + -8;
  param_2[2] = (longlong)(iVar15 + -1) | param_2[2] << 8;
  FUN_1455d0700(param_2,iVar9,iVar15);
  lVar11 = 0x3f - param_2[3] >> 3;
  local_708 = (int *)CONCAT44(local_708._4_4_,iVar14);
  uVar8 = param_2[2] << ((char)param_2[3] + 1U & 0x3f);
  *(ulonglong *)*param_2 =
       uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 | (uVar8 & 0xff0000000000) >> 0x18 |
       (uVar8 & 0xff00000000) >> 8 | (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 |
       (uVar8 & 0xff00) << 0x28 | uVar8 << 0x38;
  *param_2 = *param_2 + lVar11;
  param_2[3] = param_2[3] + lVar11 * 8;
  lVar11 = (longlong)iVar15;
  FUN_1455d0280(local_578,local_378,local_678,lVar11);
  FUN_1455d0040(param_2,local_578,lVar11);
  FUN_1455d0040(param_2,local_478,(longlong)iVar9);
  FUN_1455cfe80(param_2,local_378,lVar11,iVar14);
  FUN_1455cff60(param_2,local_178,local_278,(longlong)iVar9);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_78 ^ (ulonglong)auStack_728);
}



// FUNCTION 145480e00 FUN_145480e00 body=575 status=ok
// SIG undefined FUN_145480e00(void)

void FUN_145480e00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  unkbyte10 Var11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [12];
  unkbyte10 Var14;
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  unkbyte10 Var17;
  undefined1 auVar18 [14];
  undefined1 auVar19 [12];
  unkbyte10 Var20;
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  unkbyte10 Var23;
  undefined1 auVar24 [14];
  undefined1 auVar25 [12];
  unkbyte10 Var26;
  undefined1 auVar27 [14];
  undefined1 auVar28 [12];
  unkbyte10 Var29;
  undefined1 auVar30 [14];
  undefined1 auVar31 [12];
  unkbyte10 Var32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  undefined2 *puVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined1 auVar40 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined2 uVar60;
  undefined1 auVar68 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar84 [16];
  undefined1 auVar91 [16];
  undefined1 auVar98 [16];
  undefined1 auVar105 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined2 uVar83;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  
  uVar39 = 0;
  puVar37 = (undefined2 *)(param_1 + 0x400);
  do {
    uVar38 = (uint)uVar39;
    uVar35 = uVar39 & 0xffffffff;
    uVar39 = uVar39 + 8;
    uVar36 = (ulonglong)(byte)(&DAT_149d65220)[uVar38 & 0x3f] << 5 |
             (ulonglong)(byte)(&DAT_149d65220)[uVar35 >> 5];
    uVar1 = *(undefined8 *)(uVar36 + 0x810 + param_2);
    uVar35 = *(ulonglong *)(uVar36 + param_2);
    uVar2 = *(ulonglong *)(uVar36 + 0x400 + param_2);
    uVar3 = *(ulonglong *)(uVar36 + 0x200 + param_2);
    uVar4 = *(ulonglong *)(uVar36 + 0x600 + param_2);
    uVar5 = *(ulonglong *)(uVar36 + 0x100 + param_2);
    uVar6 = *(ulonglong *)(uVar36 + 0x500 + param_2);
    uVar7 = *(ulonglong *)(uVar36 + 0x300 + param_2);
    uVar8 = *(ulonglong *)(uVar36 + 0x700 + param_2);
    auVar112._8_6_ = 0;
    auVar112._0_8_ = uVar35;
    auVar112[0xe] = (char)(uVar35 >> 0x38);
    auVar112[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar111._14_2_ = auVar112._14_2_;
    auVar111._8_5_ = 0;
    auVar111._0_8_ = uVar35;
    auVar111[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar110._13_3_ = auVar111._13_3_;
    auVar110._8_4_ = 0;
    auVar110._0_8_ = uVar35;
    auVar110[0xc] = (char)(uVar35 >> 0x30);
    auVar109._12_4_ = auVar110._12_4_;
    auVar109._8_3_ = 0;
    auVar109._0_8_ = uVar35;
    auVar109[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar108._11_5_ = auVar109._11_5_;
    auVar108._8_2_ = 0;
    auVar108._0_8_ = uVar35;
    auVar108[10] = (char)(uVar35 >> 0x28);
    auVar107._10_6_ = auVar108._10_6_;
    auVar107[8] = 0;
    auVar107._0_8_ = uVar35;
    auVar107[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar106._9_7_ = auVar107._9_7_;
    auVar106[8] = (char)(uVar35 >> 0x20);
    auVar106._0_8_ = uVar35;
    Var11 = CONCAT91(CONCAT81(auVar106._8_8_,(char)((ulonglong)uVar1 >> 0x18)),
                     (char)(uVar35 >> 0x18));
    auVar10._2_10_ = Var11;
    auVar10[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar10[0] = (char)(uVar35 >> 0x10);
    auVar9._2_12_ = auVar10;
    auVar9[1] = (char)((ulonglong)uVar1 >> 8);
    auVar9[0] = (char)(uVar35 >> 8);
    auVar105._0_2_ = CONCAT11((char)uVar1,(char)uVar35);
    auVar105._2_14_ = auVar9;
    uVar1 = *(undefined8 *)(uVar36 + 0xc10 + param_2);
    auVar104._8_6_ = 0;
    auVar104._0_8_ = uVar2;
    auVar104[0xe] = (char)(uVar2 >> 0x38);
    auVar104[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar103._14_2_ = auVar104._14_2_;
    auVar103._8_5_ = 0;
    auVar103._0_8_ = uVar2;
    auVar103[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar102._13_3_ = auVar103._13_3_;
    auVar102._8_4_ = 0;
    auVar102._0_8_ = uVar2;
    auVar102[0xc] = (char)(uVar2 >> 0x30);
    auVar101._12_4_ = auVar102._12_4_;
    auVar101._8_3_ = 0;
    auVar101._0_8_ = uVar2;
    auVar101[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar100._11_5_ = auVar101._11_5_;
    auVar100._8_2_ = 0;
    auVar100._0_8_ = uVar2;
    auVar100[10] = (char)(uVar2 >> 0x28);
    auVar99._10_6_ = auVar100._10_6_;
    auVar99[8] = 0;
    auVar99._0_8_ = uVar2;
    auVar99[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar98._9_7_ = auVar99._9_7_;
    auVar98[8] = (char)(uVar2 >> 0x20);
    auVar98._0_8_ = uVar2;
    Var14 = CONCAT91(CONCAT81(auVar98._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar2 >> 0x18))
    ;
    auVar13._2_10_ = Var14;
    auVar13[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar13[0] = (char)(uVar2 >> 0x10);
    auVar12._2_12_ = auVar13;
    auVar12[1] = (char)((ulonglong)uVar1 >> 8);
    auVar12[0] = (char)(uVar2 >> 8);
    auVar56[3] = (char)uVar1;
    auVar56[2] = (char)uVar2;
    uVar1 = *(undefined8 *)(uVar36 + 0xa10 + param_2);
    auVar90._8_6_ = 0;
    auVar90._0_8_ = uVar3;
    auVar90[0xe] = (char)(uVar3 >> 0x38);
    auVar90[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar89._14_2_ = auVar90._14_2_;
    auVar89._8_5_ = 0;
    auVar89._0_8_ = uVar3;
    auVar89[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar88._13_3_ = auVar89._13_3_;
    auVar88._8_4_ = 0;
    auVar88._0_8_ = uVar3;
    auVar88[0xc] = (char)(uVar3 >> 0x30);
    auVar87._12_4_ = auVar88._12_4_;
    auVar87._8_3_ = 0;
    auVar87._0_8_ = uVar3;
    auVar87[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar86._11_5_ = auVar87._11_5_;
    auVar86._8_2_ = 0;
    auVar86._0_8_ = uVar3;
    auVar86[10] = (char)(uVar3 >> 0x28);
    auVar85._10_6_ = auVar86._10_6_;
    auVar85[8] = 0;
    auVar85._0_8_ = uVar3;
    auVar85[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar84._9_7_ = auVar85._9_7_;
    auVar84[8] = (char)(uVar3 >> 0x20);
    auVar84._0_8_ = uVar3;
    Var17 = CONCAT91(CONCAT81(auVar84._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar3 >> 0x18))
    ;
    auVar16._2_10_ = Var17;
    auVar16[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar16[0] = (char)(uVar3 >> 0x10);
    auVar15._2_12_ = auVar16;
    auVar15[1] = (char)((ulonglong)uVar1 >> 8);
    auVar15[0] = (char)(uVar3 >> 8);
    auVar56[5] = (char)uVar1;
    auVar56[4] = (char)uVar3;
    uVar1 = *(undefined8 *)(uVar36 + 0xe10 + param_2);
    auVar97._8_6_ = 0;
    auVar97._0_8_ = uVar4;
    auVar97[0xe] = (char)(uVar4 >> 0x38);
    auVar97[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar96._14_2_ = auVar97._14_2_;
    auVar96._8_5_ = 0;
    auVar96._0_8_ = uVar4;
    auVar96[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar95._13_3_ = auVar96._13_3_;
    auVar95._8_4_ = 0;
    auVar95._0_8_ = uVar4;
    auVar95[0xc] = (char)(uVar4 >> 0x30);
    auVar94._12_4_ = auVar95._12_4_;
    auVar94._8_3_ = 0;
    auVar94._0_8_ = uVar4;
    auVar94[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar93._11_5_ = auVar94._11_5_;
    auVar93._8_2_ = 0;
    auVar93._0_8_ = uVar4;
    auVar93[10] = (char)(uVar4 >> 0x28);
    auVar92._10_6_ = auVar93._10_6_;
    auVar92[8] = 0;
    auVar92._0_8_ = uVar4;
    auVar92[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar91._9_7_ = auVar92._9_7_;
    auVar91[8] = (char)(uVar4 >> 0x20);
    auVar91._0_8_ = uVar4;
    Var20 = CONCAT91(CONCAT81(auVar91._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar4 >> 0x18))
    ;
    auVar19._2_10_ = Var20;
    auVar19[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar19[0] = (char)(uVar4 >> 0x10);
    auVar18._2_12_ = auVar19;
    auVar18[1] = (char)((ulonglong)uVar1 >> 8);
    auVar18[0] = (char)(uVar4 >> 8);
    auVar56[7] = (char)uVar1;
    auVar56[6] = (char)uVar4;
    uVar1 = *(undefined8 *)(uVar36 + 0x910 + param_2);
    auVar46._8_6_ = 0;
    auVar46._0_8_ = uVar5;
    auVar46[0xe] = (char)(uVar5 >> 0x38);
    auVar46[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar45._14_2_ = auVar46._14_2_;
    auVar45._8_5_ = 0;
    auVar45._0_8_ = uVar5;
    auVar45[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar44._13_3_ = auVar45._13_3_;
    auVar44._8_4_ = 0;
    auVar44._0_8_ = uVar5;
    auVar44[0xc] = (char)(uVar5 >> 0x30);
    auVar43._12_4_ = auVar44._12_4_;
    auVar43._8_3_ = 0;
    auVar43._0_8_ = uVar5;
    auVar43[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar42._11_5_ = auVar43._11_5_;
    auVar42._8_2_ = 0;
    auVar42._0_8_ = uVar5;
    auVar42[10] = (char)(uVar5 >> 0x28);
    auVar41._10_6_ = auVar42._10_6_;
    auVar41[8] = 0;
    auVar41._0_8_ = uVar5;
    auVar41[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar40._9_7_ = auVar41._9_7_;
    auVar40[8] = (char)(uVar5 >> 0x20);
    auVar40._0_8_ = uVar5;
    Var23 = CONCAT91(CONCAT81(auVar40._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar5 >> 0x18))
    ;
    auVar22._2_10_ = Var23;
    auVar22[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar22[0] = (char)(uVar5 >> 0x10);
    auVar21._2_12_ = auVar22;
    auVar21[1] = (char)((ulonglong)uVar1 >> 8);
    auVar21[0] = (char)(uVar5 >> 8);
    auVar57[9] = (char)uVar1;
    auVar57[8] = (char)uVar5;
    uVar1 = *(undefined8 *)(uVar36 + 0xd10 + param_2);
    auVar55._8_6_ = 0;
    auVar55._0_8_ = uVar6;
    auVar55[0xe] = (char)(uVar6 >> 0x38);
    auVar55[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar54._14_2_ = auVar55._14_2_;
    auVar54._8_5_ = 0;
    auVar54._0_8_ = uVar6;
    auVar54[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar53._13_3_ = auVar54._13_3_;
    auVar53._8_4_ = 0;
    auVar53._0_8_ = uVar6;
    auVar53[0xc] = (char)(uVar6 >> 0x30);
    auVar52._12_4_ = auVar53._12_4_;
    auVar52._8_3_ = 0;
    auVar52._0_8_ = uVar6;
    auVar52[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar51._11_5_ = auVar52._11_5_;
    auVar51._8_2_ = 0;
    auVar51._0_8_ = uVar6;
    auVar51[10] = (char)(uVar6 >> 0x28);
    auVar50._10_6_ = auVar51._10_6_;
    auVar50[8] = 0;
    auVar50._0_8_ = uVar6;
    auVar50[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar49._9_7_ = auVar50._9_7_;
    auVar49[8] = (char)(uVar6 >> 0x20);
    auVar49._0_8_ = uVar6;
    Var26 = CONCAT91(CONCAT81(auVar49._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar6 >> 0x18))
    ;
    auVar25._2_10_ = Var26;
    auVar25[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar25[0] = (char)(uVar6 >> 0x10);
    auVar24._2_12_ = auVar25;
    auVar24[1] = (char)((ulonglong)uVar1 >> 8);
    auVar24[0] = (char)(uVar6 >> 8);
    auVar58[0xb] = (char)uVar1;
    auVar58[10] = (char)uVar6;
    uVar1 = *(undefined8 *)(uVar36 + 0xb10 + param_2);
    auVar67._8_6_ = 0;
    auVar67._0_8_ = uVar7;
    auVar67[0xe] = (char)(uVar7 >> 0x38);
    auVar67[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar66._14_2_ = auVar67._14_2_;
    auVar66._8_5_ = 0;
    auVar66._0_8_ = uVar7;
    auVar66[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar65._13_3_ = auVar66._13_3_;
    auVar65._8_4_ = 0;
    auVar65._0_8_ = uVar7;
    auVar65[0xc] = (char)(uVar7 >> 0x30);
    auVar64._12_4_ = auVar65._12_4_;
    auVar64._8_3_ = 0;
    auVar64._0_8_ = uVar7;
    auVar64[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar63._11_5_ = auVar64._11_5_;
    auVar63._8_2_ = 0;
    auVar63._0_8_ = uVar7;
    auVar63[10] = (char)(uVar7 >> 0x28);
    auVar62._10_6_ = auVar63._10_6_;
    auVar62[8] = 0;
    auVar62._0_8_ = uVar7;
    auVar62[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar61._9_7_ = auVar62._9_7_;
    auVar61[8] = (char)(uVar7 >> 0x20);
    auVar61._0_8_ = uVar7;
    Var29 = CONCAT91(CONCAT81(auVar61._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar7 >> 0x18))
    ;
    auVar28._2_10_ = Var29;
    auVar28[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar28[0] = (char)(uVar7 >> 0x10);
    auVar27._2_12_ = auVar28;
    auVar27[1] = (char)((ulonglong)uVar1 >> 8);
    auVar27[0] = (char)(uVar7 >> 8);
    uVar60 = CONCAT11((char)uVar1,(char)uVar7);
    uVar1 = *(undefined8 *)(uVar36 + 0xf10 + param_2);
    auVar74._8_6_ = 0;
    auVar74._0_8_ = uVar8;
    auVar74[0xe] = (char)(uVar8 >> 0x38);
    auVar74[0xf] = (char)((ulonglong)uVar1 >> 0x38);
    auVar73._14_2_ = auVar74._14_2_;
    auVar73._8_5_ = 0;
    auVar73._0_8_ = uVar8;
    auVar73[0xd] = (char)((ulonglong)uVar1 >> 0x30);
    auVar72._13_3_ = auVar73._13_3_;
    auVar72._8_4_ = 0;
    auVar72._0_8_ = uVar8;
    auVar72[0xc] = (char)(uVar8 >> 0x30);
    auVar71._12_4_ = auVar72._12_4_;
    auVar71._8_3_ = 0;
    auVar71._0_8_ = uVar8;
    auVar71[0xb] = (char)((ulonglong)uVar1 >> 0x28);
    auVar70._11_5_ = auVar71._11_5_;
    auVar70._8_2_ = 0;
    auVar70._0_8_ = uVar8;
    auVar70[10] = (char)(uVar8 >> 0x28);
    auVar69._10_6_ = auVar70._10_6_;
    auVar69[8] = 0;
    auVar69._0_8_ = uVar8;
    auVar69[9] = (char)((ulonglong)uVar1 >> 0x20);
    auVar68._9_7_ = auVar69._9_7_;
    auVar68[8] = (char)(uVar8 >> 0x20);
    auVar68._0_8_ = uVar8;
    Var32 = CONCAT91(CONCAT81(auVar68._8_8_,(char)((ulonglong)uVar1 >> 0x18)),(char)(uVar8 >> 0x18))
    ;
    auVar31._2_10_ = Var32;
    auVar31[1] = (char)((ulonglong)uVar1 >> 0x10);
    auVar31[0] = (char)(uVar8 >> 0x10);
    auVar30._2_12_ = auVar31;
    auVar30[1] = (char)((ulonglong)uVar1 >> 8);
    auVar30[0] = (char)(uVar8 >> 8);
    auVar59[0xf] = (char)uVar1;
    auVar59[0xe] = (char)uVar8;
    uVar48 = (undefined2)Var23;
    uVar83 = (undefined2)Var11;
    auVar82._0_12_ = auVar105._0_12_;
    auVar82._12_2_ = uVar83;
    auVar82._14_2_ = uVar48;
    auVar81._12_4_ = auVar82._12_4_;
    auVar81._0_10_ = auVar105._0_10_;
    auVar81._10_2_ = auVar22._0_2_;
    auVar80._10_6_ = auVar81._10_6_;
    auVar80._0_8_ = auVar105._0_8_;
    auVar80._8_2_ = auVar10._0_2_;
    uVar47 = auVar21._0_2_;
    auVar33._2_8_ = auVar80._8_8_;
    auVar33._0_2_ = uVar47;
    auVar33._10_6_ = 0;
    auVar79._12_4_ = 0;
    auVar79._0_12_ = SUB1612(auVar33 << 0x30,4);
    auVar79 = auVar79 << 0x20;
    auVar78._0_12_ = auVar79._0_12_;
    auVar78._12_2_ = uVar47;
    auVar78._14_2_ = auVar27._0_2_;
    auVar77._12_4_ = auVar78._12_4_;
    auVar77._0_10_ = auVar79._0_10_;
    auVar77._10_2_ = auVar15._0_2_;
    auVar76._10_6_ = auVar77._10_6_;
    auVar76._0_8_ = auVar79._0_8_;
    auVar76._8_2_ = auVar9._0_2_;
    auVar34._2_8_ = auVar76._8_8_;
    auVar34._0_2_ = uVar60;
    auVar34._10_6_ = 0;
    auVar75._12_4_ = 0;
    auVar75._0_12_ = SUB1612(auVar34 << 0x30,4);
    auVar75 = auVar75 << 0x20;
    auVar59._0_12_ = auVar75._0_12_;
    auVar59._12_2_ = uVar60;
    auVar58._12_4_ = auVar59._12_4_;
    auVar58._0_10_ = auVar75._0_10_;
    auVar57._10_6_ = auVar58._10_6_;
    auVar57._0_8_ = auVar75._0_8_;
    auVar56._8_8_ = auVar57._8_8_;
    auVar56._0_2_ = auVar105._0_2_;
    *(undefined1 (*) [16])(puVar37 + -0x200) = auVar56;
    puVar37[0x200] = auVar9._0_2_;
    puVar37[0x201] = auVar12._0_2_;
    puVar37[0x202] = auVar15._0_2_;
    puVar37[0x203] = auVar18._0_2_;
    puVar37[0x204] = uVar47;
    puVar37[0x205] = auVar24._0_2_;
    puVar37[0x206] = auVar27._0_2_;
    puVar37[0x207] = auVar30._0_2_;
    *puVar37 = auVar10._0_2_;
    puVar37[1] = auVar13._0_2_;
    puVar37[2] = auVar16._0_2_;
    puVar37[3] = auVar19._0_2_;
    puVar37[4] = auVar22._0_2_;
    puVar37[5] = auVar25._0_2_;
    puVar37[6] = auVar28._0_2_;
    puVar37[7] = auVar31._0_2_;
    puVar37[0x400] = uVar83;
    puVar37[0x401] = (short)Var14;
    puVar37[0x402] = (short)Var17;
    puVar37[0x403] = (short)Var20;
    puVar37[0x404] = uVar48;
    puVar37[0x405] = (short)Var26;
    puVar37[0x406] = (short)Var29;
    puVar37[0x407] = (short)Var32;
    puVar37[-0x100] = auVar106._8_2_;
    puVar37[-0xff] = auVar98._8_2_;
    puVar37[-0xfe] = auVar84._8_2_;
    puVar37[-0xfd] = auVar91._8_2_;
    puVar37[-0xfc] = auVar40._8_2_;
    puVar37[-0xfb] = auVar49._8_2_;
    puVar37[-0xfa] = auVar61._8_2_;
    puVar37[-0xf9] = auVar68._8_2_;
    puVar37[0x300] = auVar108._10_2_;
    puVar37[0x301] = auVar100._10_2_;
    puVar37[0x302] = auVar86._10_2_;
    puVar37[0x303] = auVar93._10_2_;
    puVar37[0x304] = auVar42._10_2_;
    puVar37[0x305] = auVar51._10_2_;
    puVar37[0x306] = auVar63._10_2_;
    puVar37[0x307] = auVar70._10_2_;
    puVar37[0x100] = auVar110._12_2_;
    puVar37[0x101] = auVar102._12_2_;
    puVar37[0x102] = auVar88._12_2_;
    puVar37[0x103] = auVar95._12_2_;
    puVar37[0x104] = auVar44._12_2_;
    puVar37[0x105] = auVar53._12_2_;
    puVar37[0x106] = auVar65._12_2_;
    puVar37[0x107] = auVar72._12_2_;
    puVar37[0x500] = auVar111._14_2_;
    puVar37[0x501] = auVar103._14_2_;
    puVar37[0x502] = auVar89._14_2_;
    puVar37[0x503] = auVar96._14_2_;
    puVar37[0x504] = auVar45._14_2_;
    puVar37[0x505] = auVar54._14_2_;
    puVar37[0x506] = auVar66._14_2_;
    puVar37[0x507] = auVar73._14_2_;
    puVar37 = puVar37 + 8;
  } while (uVar39 < 0x100);
  return;
}



// FUNCTION 145481040 FUN_145481040 body=1029 status=ok
// SIG undefined FUN_145481040(void)

ulonglong FUN_145481040(undefined8 *param_1,longlong param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *in_RAX;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  char local_res18;
  
  puVar15 = (uint *)param_1[6];
  puVar14 = (uint *)param_1[8];
  puVar12 = (uint *)param_1[7];
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar16 = *(uint *)(param_1 + 0xf);
  uVar17 = *(uint *)((longlong)param_1 + 100);
  uVar10 = *(uint *)((longlong)param_1 + 0x7c);
  uVar18 = *(uint *)(param_1 + 0xd);
  uVar13 = *(uint *)(param_1 + 0x10);
  local_res18 = param_3;
  if (puVar15 <= puVar14) {
    do {
      puVar5 = (undefined1 *)param_1[2];
      puVar6 = (undefined1 *)*param_1;
      uVar7 = uVar16;
      if ((3 < (longlong)puVar12 - (longlong)puVar14) && (5 < (longlong)puVar5 - (longlong)puVar6))
      {
        puVar12 = puVar12 + -1;
        for (; ((puVar6 < puVar5 + -5 && (puVar15 <= puVar14)) && (puVar14 <= puVar12));
            puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(uVar7 >> 3))) {
          uVar11 = uVar11 | *puVar15 << ((byte)uVar16 & 0x1f);
          puVar15 = (uint *)((longlong)puVar15 + (ulonglong)(0x1f - uVar16 >> 3));
          uVar7 = *puVar12;
          uVar17 = uVar17 | (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                            uVar7 << 0x18) << ((byte)uVar10 & 0x1f);
          puVar12 = (uint *)((longlong)puVar12 - (ulonglong)(0x1f - uVar10 >> 3));
          uVar18 = uVar18 | *puVar14 << ((byte)uVar13 & 0x1f);
          uVar7 = 0x1f - uVar13;
          uVar8 = (ulonglong)(uVar11 & 0x7ff);
          bVar1 = *(byte *)(param_2 + uVar8 * 2);
          uVar11 = uVar11 >> (bVar1 & 0x1f);
          uVar9 = (ulonglong)(uVar17 & 0x7ff);
          *puVar6 = *(undefined1 *)(param_2 + 1 + uVar8 * 2);
          bVar2 = *(byte *)(param_2 + uVar9 * 2);
          uVar17 = uVar17 >> (bVar2 & 0x1f);
          uVar8 = (ulonglong)(uVar18 & 0x7ff);
          puVar6[1] = *(undefined1 *)(param_2 + 1 + uVar9 * 2);
          bVar3 = *(byte *)(param_2 + uVar8 * 2);
          uVar18 = uVar18 >> (bVar3 & 0x1f);
          uVar9 = (ulonglong)(uVar11 & 0x7ff);
          puVar6[2] = *(undefined1 *)(param_2 + 1 + uVar8 * 2);
          bVar4 = *(byte *)(param_2 + uVar9 * 2);
          uVar11 = uVar11 >> (bVar4 & 0x1f);
          uVar16 = ((uVar16 | 0x18) - (uint)bVar1) - (uint)bVar4;
          uVar8 = (ulonglong)(uVar17 & 0x7ff);
          puVar6[3] = *(undefined1 *)(param_2 + 1 + uVar9 * 2);
          bVar1 = *(byte *)(param_2 + uVar8 * 2);
          uVar17 = uVar17 >> (bVar1 & 0x1f);
          uVar10 = ((uVar10 | 0x18) - (uint)bVar2) - (uint)bVar1;
          uVar9 = (ulonglong)(uVar18 & 0x7ff);
          puVar6[4] = *(undefined1 *)(param_2 + 1 + uVar8 * 2);
          bVar1 = *(byte *)(param_2 + uVar9 * 2);
          uVar18 = uVar18 >> (bVar1 & 0x1f);
          uVar13 = ((uVar13 | 0x18) - (uint)bVar3) - (uint)bVar1;
          puVar6[5] = *(undefined1 *)(param_2 + 1 + uVar9 * 2);
          puVar6 = puVar6 + 6;
        }
        uVar7 = uVar16 & 7;
        puVar15 = (uint *)((longlong)puVar15 - (ulonglong)(uVar16 >> 3));
        uVar16 = uVar10 >> 3;
        uVar10 = uVar10 & 7;
        puVar12 = (uint *)((longlong)puVar12 + (ulonglong)uVar16 + 4);
        puVar14 = (uint *)((longlong)puVar14 - (ulonglong)(uVar13 >> 3));
        uVar13 = uVar13 & 7;
      }
      while (bVar19 = puVar6 == puVar5, in_RAX = puVar6, puVar6 < puVar5) {
        if ((longlong)puVar14 - (longlong)puVar15 < 2) {
          if ((longlong)puVar14 - (longlong)puVar15 == 1) {
            uVar16 = (uint)(byte)*puVar15;
            goto LAB_145481268;
          }
        }
        else {
          uVar16 = (uint)(ushort)*puVar15;
LAB_145481268:
          uVar11 = uVar11 | uVar16 << ((byte)uVar7 & 0x1f);
        }
        uVar16 = uVar11 & 0x7ff;
        bVar1 = *(byte *)(param_2 + (ulonglong)uVar16 * 2);
        uVar7 = uVar7 - bVar1;
        uVar11 = uVar11 >> (bVar1 & 0x1f);
        *puVar6 = *(undefined1 *)(param_2 + 1 + (ulonglong)uVar16 * 2);
        in_RAX = puVar6 + 1;
        puVar15 = (uint *)((longlong)puVar15 + (ulonglong)(7 - uVar7 >> 3));
        uVar7 = uVar7 & 7;
        bVar19 = in_RAX == puVar5;
        if (puVar5 <= in_RAX) break;
        if ((longlong)puVar12 - (longlong)puVar14 < 2) {
          if ((longlong)puVar12 - (longlong)puVar14 == 1) {
            uVar17 = uVar17 | (uint)(byte)*puVar14 << ((byte)uVar10 & 0x1f);
            uVar18 = uVar18 | (uint)(byte)*puVar14 << ((byte)uVar13 & 0x1f);
          }
        }
        else {
          uVar17 = uVar17 | (uint)(ushort)(*(ushort *)((longlong)puVar12 + -2) >> 8 |
                                          *(ushort *)((longlong)puVar12 + -2) << 8) <<
                            ((byte)uVar10 & 0x1f);
          uVar18 = uVar18 | (uint)(ushort)*puVar14 << ((byte)uVar13 & 0x1f);
        }
        uVar16 = uVar17 & 0x7ff;
        bVar1 = *(byte *)(param_2 + (ulonglong)uVar16 * 2);
        uVar10 = uVar10 - bVar1;
        uVar17 = uVar17 >> (bVar1 & 0x1f);
        *in_RAX = *(undefined1 *)(param_2 + 1 + (ulonglong)uVar16 * 2);
        in_RAX = puVar6 + 2;
        puVar12 = (uint *)((longlong)puVar12 - (ulonglong)(7 - uVar10 >> 3));
        uVar10 = uVar10 & 7;
        bVar19 = in_RAX == puVar5;
        if (puVar5 <= in_RAX) break;
        uVar16 = uVar18 & 0x7ff;
        bVar1 = *(byte *)(param_2 + (ulonglong)uVar16 * 2);
        uVar13 = uVar13 - bVar1;
        uVar18 = uVar18 >> (bVar1 & 0x1f);
        *in_RAX = *(undefined1 *)(param_2 + 1 + (ulonglong)uVar16 * 2);
        in_RAX = puVar6 + 3;
        puVar14 = (uint *)((longlong)puVar14 + (ulonglong)(7 - uVar13 >> 3));
        uVar13 = uVar13 & 7;
        if ((puVar14 < puVar15) || (puVar6 = in_RAX, puVar12 < puVar14)) goto LAB_145481429;
      }
      if ((!bVar19) || ((puVar15 != (uint *)param_1[4] || (puVar12 != puVar14)))) break;
      if (local_res18 == '\0') {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      *param_1 = param_1[1];
      param_1[2] = param_1[3];
      param_1[4] = param_1[5];
      memmove(param_1 + 6,param_1 + 9,0x18);
      memmove(param_1 + 0xc,(void *)((longlong)param_1 + 0x6c),0xc);
      in_RAX = memmove(param_1 + 0xf,(void *)((longlong)param_1 + 0x84),0xc);
      puVar15 = (uint *)param_1[6];
      puVar14 = (uint *)param_1[8];
      puVar12 = (uint *)param_1[7];
      uVar11 = *(uint *)(param_1 + 0xc);
      uVar16 = *(uint *)(param_1 + 0xf);
      uVar17 = *(uint *)((longlong)param_1 + 100);
      uVar10 = *(uint *)((longlong)param_1 + 0x7c);
      uVar18 = *(uint *)(param_1 + 0xd);
      uVar13 = *(uint *)(param_1 + 0x10);
      local_res18 = '\0';
    } while (puVar15 <= puVar14);
  }
LAB_145481429:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145481460 FUN_145481460 body=441 status=ok
// SIG undefined FUN_145481460(void)

bool FUN_145481460(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  
  uVar13 = 0;
  uVar10 = 1;
  do {
    puVar1 = (uint *)(param_1 + uVar10 * 4);
    uVar11 = *(int *)(param_2 + uVar10 * 4) - *puVar1;
    if (uVar11 != 0) {
      cVar3 = (char)uVar10;
      uVar6 = uVar11 << (0xbU - cVar3 & 0x1f);
      uVar9 = 1 << (0xbU - cVar3 & 0x1f);
      if (0x800 < uVar6 + (int)uVar13) {
        return false;
      }
      puVar7 = (undefined4 *)(uVar13 + param_3);
      uVar15 = CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
      *puVar7 = uVar15;
      puVar7[1] = uVar15;
      puVar7[2] = uVar15;
      puVar7[3] = uVar15;
      if (0x10 < (ulonglong)uVar6) {
        puVar4 = (undefined4 *)((ulonglong)(puVar7 + 4) & 0xfffffffffffffff0);
        do {
          *puVar4 = uVar15;
          puVar4[1] = uVar15;
          puVar4[2] = uVar15;
          puVar4[3] = uVar15;
          puVar4 = puVar4 + 4;
        } while (puVar4 < (undefined4 *)((ulonglong)uVar6 + (longlong)puVar7));
      }
      puVar8 = (undefined1 *)((ulonglong)*puVar1 + param_4);
      if (uVar11 != 0) {
        uVar12 = (ulonglong)uVar11;
        do {
          uVar14 = CONCAT11(*puVar8,*puVar8);
          puVar7 = (undefined4 *)(uVar13 + param_3 + 0x810);
          uVar15 = CONCAT22(uVar14,uVar14);
          *puVar7 = uVar15;
          puVar7[1] = uVar15;
          puVar7[2] = uVar15;
          puVar7[3] = uVar15;
          if (0x10 < uVar9) {
            puVar4 = (undefined4 *)((ulonglong)(puVar7 + 4) & 0xfffffffffffffff0);
            do {
              *puVar4 = uVar15;
              puVar4[1] = uVar15;
              puVar4[2] = uVar15;
              puVar4[3] = uVar15;
              puVar4 = puVar4 + 4;
            } while (puVar4 < (undefined4 *)((ulonglong)uVar9 + (longlong)puVar7));
          }
          uVar13 = (ulonglong)((int)uVar13 + uVar9);
          puVar8 = puVar8 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uVar11 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar11;
  } while (uVar11 < 0xb);
  uVar11 = *(int *)(param_2 + 0x2c) - *(int *)(param_1 + 0x2c);
  if (uVar11 != 0) {
    uVar6 = uVar11 + (int)uVar13;
    if (0x800 < uVar6) {
      return false;
    }
    uVar10 = (ulonglong)uVar11;
    puVar2 = (undefined8 *)(uVar13 + param_3);
    *puVar2 = 0xb0b0b0b0b0b0b0b;
    puVar2[1] = 0xb0b0b0b0b0b0b0b;
    if (0x10 < uVar10) {
      puVar5 = (undefined8 *)((ulonglong)(puVar2 + 2) & 0xfffffffffffffff0);
      do {
        *puVar5 = 0xb0b0b0b0b0b0b0b;
        puVar5[1] = 0xb0b0b0b0b0b0b0b;
        puVar5 = puVar5 + 2;
      } while (puVar5 < (undefined8 *)(uVar10 + (longlong)puVar2));
    }
    memcpy((void *)(uVar13 + param_3 + 0x810),
           (void *)((ulonglong)*(uint *)(param_1 + 0x2c) + param_4),uVar10);
    uVar13 = (ulonglong)uVar6;
  }
  return (int)uVar13 == 0x800;
}



// FUNCTION 145481620 FUN_145481620 body=2170 status=ok
// SIG undefined FUN_145481620(void)

ulonglong FUN_145481620(undefined8 *param_1,undefined1 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  int local_res20;
  ulonglong local_68;
  
  uVar1 = param_1[2];
  lVar2 = param_1[1];
  puVar18 = (ulonglong *)*param_1;
  lVar17 = param_1[3];
  lVar5 = uVar1 * 2;
  bVar3 = (byte)((ulonglong)lVar5 >> 0x38);
  if ((longlong)uVar1 < 0) {
    lVar17 = lVar17 + 3;
    lVar10 = lVar2 - (longlong)puVar18;
    uVar21 = 0;
    iVar22 = 0x20;
    if (lVar10 < 8) {
      if (lVar10 < 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = (ulonglong)(byte)*puVar18;
      }
      if (lVar10 == 1 || lVar10 + -1 < 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
      }
      if (lVar10 == 2 || lVar10 + -2 < 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
      }
      if (lVar10 == 3 || lVar10 + -3 < 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
      }
      lVar10 = lVar2 - ((longlong)puVar18 + 4);
      if (lVar10 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
      }
      if (lVar10 == 1 || lVar10 + -1 < 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
      }
      if (lVar10 == 2 || lVar10 + -2 < 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
      }
      if (lVar10 == 3 || lVar10 + -3 < 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
      }
      uVar12 = ((((((uVar19 << 8 | uVar13) << 8 | uVar20) << 8 | uVar6) << 8 | uVar7) << 8 | uVar8)
                << 8 | uVar16) << 8 | uVar12;
    }
    else {
      uVar19 = *puVar18;
      uVar12 = uVar19 >> 0x38 | (uVar19 & 0xff000000000000) >> 0x28 |
               (uVar19 & 0xff0000000000) >> 0x18 | (uVar19 & 0xff00000000) >> 8 |
               (uVar19 & 0xff000000) << 8 | (uVar19 & 0xff0000) << 0x18 | (uVar19 & 0xff00) << 0x28
               | uVar19 << 0x38;
    }
    local_68 = 0;
    local_68._0_4_ = 0;
    uVar13 = uVar12 >> (0x3fU - (char)lVar17 & 0x3f) | uVar1 << 3;
    puVar18 = (ulonglong *)((longlong)puVar18 + (lVar17 >> 3));
    lVar17 = lVar17 + (lVar17 >> 3) * -8 + 1;
    uVar19 = uVar13 * 2;
    if ((longlong)uVar13 < 0) goto LAB_145481811;
    if (0xffffffffffffff < uVar19) {
      lVar10 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar21 = (0x40 - (int)lVar10) * 2;
      bVar4 = (byte)uVar21;
      uVar13 = uVar19 >> (0x40 - bVar4 & 0x3f);
      uVar19 = uVar19 << (bVar4 & 0x3f);
      lVar17 = lVar17 + (ulonglong)uVar21;
      for (uVar21 = (int)uVar13 - 1; uVar21 < 0x100; uVar21 = uVar21 + iVar9) {
LAB_145481811:
        lVar10 = lVar2 - (longlong)puVar18;
        if (lVar10 < 8) {
          if (lVar10 < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (ulonglong)(byte)*puVar18;
          }
          if (lVar10 == 1 || lVar10 + -1 < 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
          }
          if (lVar10 == 2 || lVar10 + -2 < 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
          }
          if (lVar10 == 3 || lVar10 + -3 < 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
          }
          lVar10 = lVar2 - ((longlong)puVar18 + 4);
          if (lVar10 < 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
          }
          if (lVar10 == 1 || lVar10 + -1 < 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
          }
          if (lVar10 == 2 || lVar10 + -2 < 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
          }
          if (lVar10 == 3 || lVar10 + -3 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
          }
          uVar14 = ((((((uVar13 << 8 | uVar20) << 8 | uVar6) << 8 | uVar7) << 8 | uVar8) << 8 |
                    uVar16) << 8 | uVar12) << 8 | uVar14;
        }
        else {
          uVar13 = *puVar18;
          uVar14 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                   (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                   (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                   (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
        }
        puVar18 = (ulonglong *)((longlong)puVar18 + (lVar17 >> 3));
        lVar10 = lVar17 + (lVar17 >> 3) * -8;
        uVar19 = uVar19 | uVar14 >> (0x3fU - (char)lVar17 & 0x3f);
        if (uVar19 < 0x100000000000000) {
          local_res20 = 0x1ff;
        }
        else {
          lVar17 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar11 = (0x40 - (int)lVar17) * 2;
          bVar4 = (byte)uVar11;
          uVar13 = uVar19 >> (0x40 - bVar4 & 0x3f);
          uVar19 = uVar19 << (bVar4 & 0x3f);
          lVar10 = lVar10 + (ulonglong)uVar11;
          local_res20 = (int)uVar13 + -1;
        }
        if (0x100 < local_res20 + uVar21) {
          return 0xffffffff;
        }
        lVar17 = lVar2 - (longlong)puVar18;
        if (lVar17 < 8) {
          if (lVar17 < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = (ulonglong)(byte)*puVar18;
          }
          if (lVar17 == 1 || lVar17 + -1 < 0) {
            uVar20 = 0;
          }
          else {
            uVar20 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
          }
          if (lVar17 == 2 || lVar17 + -2 < 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
          }
          if (lVar17 == 3 || lVar17 + -3 < 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
          }
          lVar17 = lVar2 - ((longlong)puVar18 + 4);
          if (lVar17 < 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
          }
          if (lVar17 == 1 || lVar17 + -1 < 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
          }
          if (lVar17 == 2 || lVar17 + -2 < 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
          }
          if (lVar17 == 3 || lVar17 + -3 < 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
          }
          uVar14 = ((((((uVar13 << 8 | uVar20) << 8 | uVar6) << 8 | uVar7) << 8 | uVar8) << 8 |
                    uVar16) << 8 | uVar12) << 8 | uVar14;
        }
        else {
          uVar13 = *puVar18;
          uVar14 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                   (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                   (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                   (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
        }
        puVar18 = (ulonglong *)((longlong)puVar18 + (lVar10 >> 3));
        lVar17 = lVar10 + (lVar10 >> 3) * -8;
        uVar19 = uVar19 | uVar14 >> (0x3fU - (char)lVar10 & 0x3f);
        local_68 = (ulonglong)(uint)((int)local_68 + local_res20);
        do {
          if (uVar19 < (ulonglong)(1L << (0x3fU - (char)(0x14 >> (bVar3 >> 6)) & 0x3f))) {
            return 0xffffffff;
          }
          lVar10 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar11 = (uint)((ulonglong)lVar5 >> 0x3e) + -(int)lVar10 + 0x40;
          bVar4 = (byte)uVar11;
          lVar17 = lVar17 + (ulonglong)uVar11;
          uVar11 = (-(int)lVar10 + 0x3e << (((byte)(uVar1 >> 0x38) & 0x7f) >> 5)) +
                   (int)(uVar19 >> (0x40 - bVar4 & 0x3f));
          iVar9 = (uVar11 >> 1 ^ -(uVar11 & 1)) + (iVar22 + 2 >> 2);
          if (10 < iVar9 - 1U) {
            return 0xffffffff;
          }
          iVar22 = (iVar22 * 3 + 2 >> 2) + iVar9;
          lVar10 = lVar2 - (longlong)puVar18;
          uVar11 = *(uint *)(param_3 + (longlong)iVar9 * 4);
          if (lVar10 < 8) {
            if (lVar10 < 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = (ulonglong)(byte)*puVar18;
            }
            if (lVar10 == 1 || lVar10 + -1 < 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
            }
            if (lVar10 == 2 || lVar10 + -2 < 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
            }
            if (lVar10 == 3 || lVar10 + -3 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
            }
            lVar10 = lVar2 - ((longlong)puVar18 + 4);
            if (lVar10 < 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
            }
            if (lVar10 == 1 || lVar10 + -1 < 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
            }
            if (lVar10 == 2 || lVar10 + -2 < 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
            }
            if (lVar10 == 3 || lVar10 + -3 < 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
            }
            uVar14 = ((((((uVar13 << 8 | uVar20) << 8 | uVar6) << 8 | uVar7) << 8 | uVar8) << 8 |
                      uVar16) << 8 | uVar12) << 8 | uVar14;
          }
          else {
            uVar13 = *puVar18;
            uVar14 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 |
                     (uVar13 & 0xff0000000000) >> 0x18 | (uVar13 & 0xff00000000) >> 8 |
                     (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
                     (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
          }
          puVar18 = (ulonglong *)((longlong)puVar18 + (lVar17 >> 3));
          uVar19 = uVar19 << (bVar4 & 0x3f) | uVar14 >> (0x3fU - (char)lVar17 & 0x3f);
          lVar17 = lVar17 + (lVar17 >> 3) * -8;
          param_2[uVar11] = (char)uVar21;
          uVar21 = uVar21 + 1;
          local_res20 = local_res20 + -1;
          *(uint *)(param_3 + (longlong)iVar9 * 4) = uVar11 + 1;
        } while (local_res20 != 0);
        if (0xff < uVar21) break;
        if (uVar19 < 0x100000000000000) {
          iVar9 = 0x1ff;
        }
        else {
          lVar10 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar11 = (0x40 - (int)lVar10) * 2;
          bVar4 = (byte)uVar11;
          uVar13 = uVar19 >> (0x40 - bVar4 & 0x3f);
          uVar19 = uVar19 << (bVar4 & 0x3f);
          lVar17 = lVar17 + (ulonglong)uVar11;
          iVar9 = (int)uVar13 + -1;
        }
      }
      if ((uVar21 == 0x100) && (1 < (int)local_68)) goto LAB_145481e71;
    }
    local_68 = 0xffffffff;
  }
  else {
    local_68 = (uVar1 & 0x7fffffffffffffff) >> 0x37;
    if (bVar3 == 0) {
      return 0xffffffff;
    }
    if (bVar3 == 1) {
      lVar17 = lVar17 + 0x11;
      uVar19 = uVar1 << 0x11;
      *param_2 = (char)((uVar1 << 9) >> 0x38);
    }
    else {
      uVar13 = (uVar1 & 0x7fffffffffffff) >> 0x34;
      lVar17 = lVar17 + 0xc;
      uVar19 = uVar1 << 0xc;
      if (4 < (uint)((ulonglong)lVar5 >> 0x18) >> 0x1d) {
        return 0xffffffff;
      }
      iVar22 = 0;
      if (bVar3 != 0) {
        do {
          lVar10 = lVar2 - (longlong)puVar18;
          if (lVar10 < 8) {
            if (lVar10 < 1) {
              uVar20 = 0;
            }
            else {
              uVar20 = (ulonglong)(byte)*puVar18;
            }
            if (lVar10 == 1 || lVar10 + -1 < 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (ulonglong)*(byte *)((longlong)puVar18 + 1);
            }
            if (lVar10 == 2 || lVar10 + -2 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (ulonglong)*(byte *)((longlong)puVar18 + 2);
            }
            if (lVar10 == 3 || lVar10 + -3 < 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ulonglong)*(byte *)((longlong)puVar18 + 3);
            }
            lVar10 = lVar2 - ((longlong)puVar18 + 4);
            if (lVar10 < 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = (ulonglong)*(byte *)((longlong)puVar18 + 4);
            }
            if (lVar10 == 1 || lVar10 + -1 < 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulonglong)*(byte *)((longlong)puVar18 + 5);
            }
            if (lVar10 == 2 || lVar10 + -2 < 0) {
              uVar14 = 0;
            }
            else {
              uVar14 = (ulonglong)*(byte *)((longlong)puVar18 + 6);
            }
            if (lVar10 == 3 || lVar10 + -3 < 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = (ulonglong)*(byte *)((longlong)puVar18 + 7);
            }
            uVar15 = ((((((uVar20 << 8 | uVar6) << 8 | uVar7) << 8 | uVar8) << 8 | uVar16) << 8 |
                      uVar12) << 8 | uVar14) << 8 | uVar15;
          }
          else {
            uVar20 = *puVar18;
            uVar15 = uVar20 >> 0x38 | (uVar20 & 0xff000000000000) >> 0x28 |
                     (uVar20 & 0xff0000000000) >> 0x18 | (uVar20 & 0xff00000000) >> 8 |
                     (uVar20 & 0xff000000) << 8 | (uVar20 & 0xff0000) << 0x18 |
                     (uVar20 & 0xff00) << 0x28 | uVar20 << 0x38;
          }
          puVar18 = (ulonglong *)((longlong)puVar18 + (lVar17 >> 3));
          uVar20 = uVar19 | uVar15 >> (0x3fU - (char)lVar17 & 0x3f);
          uVar19 = (uVar20 << 8) << (sbyte)uVar13;
          lVar17 = lVar17 + uVar13 + (lVar17 >> 3) * -8 + 8;
          iVar9 = (int)(((uVar20 & 0xffffffffffffff) << 7) >>
                       (0x3f - ((byte)((ulonglong)lVar5 >> 0x30) >> 5) & 0x3f));
          if (10 < iVar9) {
            return 0xffffffff;
          }
          iVar22 = iVar22 + 1;
          uVar21 = *(uint *)(param_3 + 4 + (longlong)iVar9 * 4);
          param_2[uVar21] = (char)(uVar20 >> 0x38);
          *(uint *)(param_3 + 4 + (longlong)iVar9 * 4) = uVar21 + 1;
        } while (iVar22 < (int)(uint)((uVar1 & 0x7fffffffffffffff) >> 0x37));
      }
    }
  }
LAB_145481e71:
  param_1[2] = uVar19;
  param_1[3] = lVar17;
  *param_1 = puVar18;
  param_1[1] = lVar2;
  return local_68;
}



// FUNCTION 145481ea0 FUN_145481ea0 body=1103 status=ok
// SIG undefined FUN_145481ea0(void)

/* WARNING: Removing unreachable block (ram,0x0001454821f3) */
/* WARNING: Removing unreachable block (ram,0x0001454821b6) */
/* WARNING: Removing unreachable block (ram,0x0001454821dd) */
/* WARNING: Removing unreachable block (ram,0x0001454821c3) */
/* WARNING: Removing unreachable block (ram,0x0001454821d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145481ea0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar25 [16];
  char cVar31;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined1 auVar32 [16];
  byte bVar43;
  ushort uVar44;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 auVar50 [16];
  byte bVar65;
  char cVar66;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  undefined1 auVar67 [16];
  byte bVar81;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined1 auVar82 [16];
  char cVar99;
  undefined1 auVar98 [16];
  undefined1 auStack_528 [32];
  longlong *local_508;
  ulonglong local_4f8;
  byte *local_4f0;
  byte *local_4e8;
  uint local_4e0;
  byte local_4d8 [528];
  ushort local_2c8 [272];
  ulonglong local_a8;
  undefined4 uVar45;
  undefined6 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [14];
  
  local_a8 = DAT_14c707940 ^ (ulonglong)auStack_528;
  uVar8 = param_1[2];
  lVar17 = param_1[3] + 10;
  uVar14 = (byte)((uVar8 << 2) >> 0x38) + 1;
  if (1 < uVar14) {
    uVar13 = 0;
    iVar24 = 0;
    if (uVar14 != 0x100) {
      uVar11 = 0x101 - uVar14;
      if ((int)uVar14 < (int)(0x101 - uVar14)) {
        uVar11 = uVar14;
      }
      uVar1 = uVar11 * 2 - 1;
      uVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
        }
      }
      bVar81 = (byte)(uVar2 + 1);
      iVar21 = (1 << (bVar81 & 0x1f)) + uVar11 * -2;
      iVar15 = (int)((uVar8 << 10) >> (0x40 - bVar81 & 0x3f));
      iVar24 = iVar15 >> 1;
      if (iVar24 < iVar21) {
        lVar17 = lVar17 + (ulonglong)uVar2;
      }
      else {
        iVar24 = iVar15 - iVar21;
        lVar17 = lVar17 + (ulonglong)(uVar2 + 1);
      }
    }
    local_4e0 = -((int)-lVar17 + 0x3f) & 7;
    local_4f0 = (byte *)(*param_1 - (-lVar17 + 0x46U >> 3));
    local_4e8 = (byte *)param_1[1];
    uVar12 = (ulonglong)(iVar24 + uVar14);
    uVar7 = FUN_1455d0160(local_4d8,iVar24 + uVar14,&local_4f0);
    if (uVar7 == uVar12) {
      pbVar20 = local_4d8 + uVar12;
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      pbVar20[4] = 0;
      pbVar20[5] = 0;
      pbVar20[6] = 0;
      pbVar20[7] = 0;
      pbVar20 = local_4d8 + uVar12 + 8;
      pbVar20[0] = 0;
      pbVar20[1] = 0;
      pbVar20[2] = 0;
      pbVar20[3] = 0;
      pbVar20[4] = 0;
      pbVar20[5] = 0;
      pbVar20[6] = 0;
      pbVar20[7] = 0;
      uVar7 = (ulonglong)uVar14;
      uVar8 = FUN_1455d0300(local_4d8,uVar14,uVar8 >> 0x3e,&local_4f0);
      auVar6 = _DAT_149d65310;
      auVar98 = _DAT_149d65300;
      auVar5 = _DAT_149967440;
      auVar82 = _DAT_149931660;
      if (uVar8 == uVar7) {
        uVar8 = uVar13;
        if (local_4e8 != local_4f0 && -1 < (longlong)local_4e8 - (longlong)local_4f0) {
          uVar8 = (ulonglong)*local_4f0;
        }
        puVar16 = (ulonglong *)(local_4f0 + 1);
        lVar17 = (longlong)local_4e8 - (longlong)puVar16;
        if (lVar17 < 8) {
          uVar12 = uVar13;
          if (0 < lVar17) {
            uVar12 = (ulonglong)(byte)*puVar16;
          }
          uVar22 = uVar13;
          if (lVar17 != 1 && -1 < lVar17 + -1) {
            uVar22 = (ulonglong)local_4f0[2];
          }
          uVar18 = uVar13;
          if (lVar17 != 2 && -1 < lVar17 + -2) {
            uVar18 = (ulonglong)local_4f0[3];
          }
          uVar9 = uVar13;
          if (lVar17 != 3 && -1 < lVar17 + -3) {
            uVar9 = (ulonglong)local_4f0[4];
          }
          lVar17 = (longlong)local_4e8 - (longlong)(local_4f0 + 5);
          if (lVar17 < 1) {
            local_4f8 = 0;
          }
          else {
            local_4f8 = (ulonglong)local_4f0[5];
          }
          uVar23 = uVar13;
          if (lVar17 != 1 && -1 < lVar17 + -1) {
            uVar23 = (ulonglong)local_4f0[6];
          }
          uVar10 = uVar13;
          if (lVar17 != 2 && -1 < lVar17 + -2) {
            uVar10 = (ulonglong)local_4f0[7];
          }
          uVar12 = ((((((uVar12 << 8 | uVar22) << 8 | uVar18) << 8 | uVar9) << 8 | local_4f8) << 8 |
                    uVar23) << 8 | uVar10) << 8;
        }
        else {
          uVar12 = *puVar16;
          uVar12 = (uVar12 & 0xff000000000000) >> 0x28 | (uVar12 & 0xff0000000000) >> 0x18 |
                   (uVar12 & 0xff00000000) >> 8 | (uVar12 & 0xff000000) << 8 |
                   (uVar12 & 0xff0000) << 0x18 | (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
        }
        bVar81 = 10;
        bVar83 = 10;
        bVar84 = 10;
        bVar85 = 10;
        bVar86 = 10;
        bVar87 = 10;
        bVar88 = 10;
        bVar89 = 10;
        bVar90 = 10;
        bVar91 = 10;
        bVar92 = 10;
        bVar93 = 10;
        bVar94 = 10;
        bVar95 = 10;
        bVar96 = 10;
        bVar97 = 10;
        param_1[3] = (ulonglong)local_4e0 + 7;
        pbVar19 = local_4d8 + uVar7;
        param_1[2] = (uVar12 >> 8 | uVar8 << 0x38) << ((byte)local_4e0 & 0x3f);
        *param_1 = (longlong)(local_4f0 + 7);
        param_1[1] = (longlong)local_4e8;
        uVar3 = *(undefined8 *)pbVar19;
        uVar4 = *(undefined8 *)(local_4d8 + uVar7 + 8);
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        pbVar20 = local_4d8 + uVar7 + 8;
        pbVar20[0] = 0;
        pbVar20[1] = 0;
        pbVar20[2] = 0;
        pbVar20[3] = 0;
        pbVar20[4] = 0;
        pbVar20[5] = 0;
        pbVar20[6] = 0;
        pbVar20[7] = 0;
        uVar8 = uVar13;
        do {
          cVar99 = auVar98[0xf];
          uVar11 = (int)uVar8 + 0x10;
          auVar98 = *(undefined1 (*) [16])(local_4d8 + uVar8);
          auVar25 = auVar82 & auVar98;
          auVar32._0_2_ = auVar98._0_2_ >> 1;
          auVar32._2_2_ = auVar98._2_2_ >> 1;
          auVar32._4_2_ = auVar98._4_2_ >> 1;
          auVar32._6_2_ = auVar98._6_2_ >> 1;
          auVar32._8_2_ = auVar98._8_2_ >> 1;
          auVar32._10_2_ = auVar98._10_2_ >> 1;
          auVar32._12_2_ = auVar98._12_2_ >> 1;
          auVar32._14_2_ = auVar98._14_2_ >> 1;
          auVar67[1] = -auVar25[1];
          auVar67[0] = -auVar25[0];
          auVar67[2] = -auVar25[2];
          auVar67[3] = -auVar25[3];
          auVar67[4] = -auVar25[4];
          auVar67[5] = -auVar25[5];
          auVar67[6] = -auVar25[6];
          auVar67[7] = -auVar25[7];
          auVar67[8] = -auVar25[8];
          auVar67[9] = -auVar25[9];
          auVar67[10] = -auVar25[10];
          auVar67[0xb] = -auVar25[0xb];
          auVar67[0xc] = -auVar25[0xc];
          auVar67[0xd] = -auVar25[0xd];
          auVar67[0xe] = -auVar25[0xe];
          auVar67[0xf] = -auVar25[0xf];
          auVar67 = auVar67 ^ auVar32 & auVar5;
          cVar66 = auVar67[0];
          cVar68 = auVar67[1];
          cVar26 = cVar66 + cVar68;
          cVar69 = auVar67[2];
          cVar70 = auVar67[3];
          cVar71 = auVar67[4];
          cVar72 = auVar67[5];
          cVar73 = auVar67[6];
          cVar74 = auVar67[7];
          cVar75 = auVar67[8];
          cVar76 = auVar67[9];
          cVar77 = auVar67[10];
          cVar78 = auVar67[0xb];
          cVar79 = auVar67[0xc];
          cVar80 = auVar67[0xd];
          cVar31 = auVar67[0xe];
          cVar33 = cVar66 + cVar68 + cVar69;
          cVar34 = cVar26 + cVar69 + cVar70;
          cVar35 = cVar68 + cVar69 + cVar70 + cVar71;
          cVar36 = cVar69 + cVar70 + cVar71 + cVar72;
          cVar37 = cVar70 + cVar71 + cVar72 + cVar73;
          cVar38 = cVar71 + cVar72 + cVar73 + cVar74;
          cVar39 = cVar72 + cVar73 + cVar74 + cVar75;
          cVar40 = cVar73 + cVar74 + cVar75 + cVar76;
          cVar41 = cVar74 + cVar75 + cVar76 + cVar77;
          cVar42 = cVar75 + cVar76 + cVar77 + cVar78;
          cVar27 = cVar66 + cVar35;
          cVar28 = cVar26 + cVar36;
          cVar29 = cVar33 + cVar37;
          cVar30 = cVar34 + cVar38;
          cVar35 = cVar66 + cVar35 + cVar39;
          cVar36 = cVar26 + cVar36 + cVar40;
          cVar37 = cVar33 + cVar37 + cVar41;
          cVar38 = cVar34 + cVar38 + cVar42;
          cVar39 = cVar27 + cVar39 + cVar76 + cVar77 + cVar78 + cVar79;
          cVar40 = cVar28 + cVar40 + cVar77 + cVar78 + cVar79 + cVar80;
          cVar41 = cVar29 + cVar41 + cVar78 + cVar79 + cVar80 + cVar31;
          cVar42 = cVar30 + cVar42 + cVar79 + cVar80 + cVar31 + auVar67[0xf];
          auVar98._0_8_ =
               (longlong)
               CONCAT81((longlong)(((unkuint9)CONCAT11(cVar42,cVar41) << 0x38) >> 8),cVar30 + cVar99
                       ) << 0x38;
          auVar98[8] = cVar35 + cVar99;
          auVar98[9] = cVar36 + cVar99;
          auVar98[10] = cVar37 + cVar99;
          auVar98[0xb] = cVar38 + cVar99;
          auVar98[0xc] = cVar39 + cVar99;
          auVar98[0xd] = cVar40 + cVar99;
          auVar98[0xe] = cVar41 + cVar99;
          auVar98[0xf] = cVar42 + cVar99;
          uVar44 = CONCAT11(cVar66 + cVar99,cVar99);
          uVar45 = CONCAT13(cVar33 + cVar99,CONCAT12(cVar26 + cVar99,uVar44));
          uVar46 = CONCAT15(cVar27 + cVar99,CONCAT14(cVar34 + cVar99,uVar45));
          uVar47 = CONCAT17(cVar29 + cVar99,CONCAT16(cVar28 + cVar99,uVar46));
          auVar48._0_10_ = CONCAT19(cVar35 + cVar99,CONCAT18(cVar30 + cVar99,uVar47));
          auVar48[10] = cVar36 + cVar99;
          auVar48[0xb] = cVar37 + cVar99;
          auVar49[0xc] = cVar38 + cVar99;
          auVar49._0_12_ = auVar48;
          auVar49[0xd] = cVar39 + cVar99;
          auVar25[0xe] = cVar40 + cVar99;
          auVar25._0_14_ = auVar49;
          auVar25[0xf] = cVar41 + cVar99;
          auVar50._0_2_ = uVar44 >> 2;
          auVar50._2_2_ = (ushort)((uint)uVar45 >> 0x12);
          auVar50._4_2_ = (ushort)((uint6)uVar46 >> 0x22);
          auVar50._6_2_ = (ushort)((ulonglong)uVar47 >> 0x32);
          auVar50._8_2_ = (ushort)((unkuint10)auVar48._0_10_ >> 0x42);
          auVar50._10_2_ = auVar48._10_2_ >> 2;
          auVar50._12_2_ = auVar49._12_2_ >> 2;
          auVar50._14_2_ = auVar25._14_2_ >> 2;
          auVar50 = auVar50 & auVar6;
          bVar43 = auVar50[0] + cVar66;
          bVar51 = auVar50[1] + cVar68;
          bVar52 = auVar50[2] + cVar69;
          bVar53 = auVar50[3] + cVar70;
          bVar54 = auVar50[4] + cVar71;
          bVar55 = auVar50[5] + cVar72;
          bVar56 = auVar50[6] + cVar73;
          bVar57 = auVar50[7] + cVar74;
          bVar58 = auVar50[8] + cVar75;
          bVar59 = auVar50[9] + cVar76;
          bVar60 = auVar50[10] + cVar77;
          bVar61 = auVar50[0xb] + cVar78;
          bVar62 = auVar50[0xc] + cVar79;
          bVar63 = auVar50[0xd] + cVar80;
          bVar64 = auVar50[0xe] + cVar31;
          bVar65 = auVar50[0xf] + auVar67[0xf];
          bVar81 = (bVar81 < bVar43) * bVar43 | (bVar81 >= bVar43) * bVar81;
          bVar83 = (bVar83 < bVar51) * bVar51 | (bVar83 >= bVar51) * bVar83;
          bVar84 = (bVar84 < bVar52) * bVar52 | (bVar84 >= bVar52) * bVar84;
          bVar85 = (bVar85 < bVar53) * bVar53 | (bVar85 >= bVar53) * bVar85;
          bVar86 = (bVar86 < bVar54) * bVar54 | (bVar86 >= bVar54) * bVar86;
          bVar87 = (bVar87 < bVar55) * bVar55 | (bVar87 >= bVar55) * bVar87;
          bVar88 = (bVar88 < bVar56) * bVar56 | (bVar88 >= bVar56) * bVar88;
          bVar89 = (bVar89 < bVar57) * bVar57 | (bVar89 >= bVar57) * bVar89;
          bVar90 = (bVar90 < bVar58) * bVar58 | (bVar90 >= bVar58) * bVar90;
          bVar91 = (bVar91 < bVar59) * bVar59 | (bVar91 >= bVar59) * bVar91;
          bVar92 = (bVar92 < bVar60) * bVar60 | (bVar92 >= bVar60) * bVar92;
          bVar93 = (bVar93 < bVar61) * bVar61 | (bVar93 >= bVar61) * bVar93;
          bVar94 = (bVar94 < bVar62) * bVar62 | (bVar94 >= bVar62) * bVar94;
          bVar95 = (bVar95 < bVar63) * bVar63 | (bVar95 >= bVar63) * bVar95;
          bVar96 = (bVar96 < bVar64) * bVar64 | (bVar96 >= bVar64) * bVar96;
          bVar97 = (bVar97 < bVar65) * bVar65 | (bVar97 >= bVar65) * bVar97;
          local_4d8[uVar8] = auVar82[0] + bVar43;
          local_4d8[uVar8 + 1] = auVar82[1] + bVar51;
          local_4d8[uVar8 + 2] = auVar82[2] + bVar52;
          local_4d8[uVar8 + 3] = auVar82[3] + bVar53;
          local_4d8[uVar8 + 4] = auVar82[4] + bVar54;
          local_4d8[uVar8 + 5] = auVar82[5] + bVar55;
          local_4d8[uVar8 + 6] = auVar82[6] + bVar56;
          local_4d8[uVar8 + 7] = auVar82[7] + bVar57;
          local_4d8[uVar8 + 8] = auVar82[8] + bVar58;
          local_4d8[uVar8 + 9] = auVar82[9] + bVar59;
          local_4d8[uVar8 + 10] = auVar82[10] + bVar60;
          local_4d8[uVar8 + 0xb] = auVar82[0xb] + bVar61;
          local_4d8[uVar8 + 0xc] = auVar82[0xc] + bVar62;
          local_4d8[uVar8 + 0xd] = auVar82[0xd] + bVar63;
          local_4d8[uVar8 + 0xe] = auVar82[0xe] + bVar64;
          local_4d8[uVar8 + 0xf] = auVar82[0xf] + bVar65;
          uVar8 = (ulonglong)uVar11;
        } while (uVar11 < uVar14);
        auVar82[0] = -(bVar81 == 10);
        auVar82[1] = -(bVar83 == 10);
        auVar82[2] = -(bVar84 == 10);
        auVar82[3] = -(bVar85 == 10);
        auVar82[4] = -(bVar86 == 10);
        auVar82[5] = -(bVar87 == 10);
        auVar82[6] = -(bVar88 == 10);
        auVar82[7] = -(bVar89 == 10);
        auVar82[8] = -(bVar90 == 10);
        auVar82[9] = -(bVar91 == 10);
        auVar82[10] = -(bVar92 == 10);
        auVar82[0xb] = -(bVar93 == 10);
        auVar82[0xc] = -(bVar94 == 10);
        auVar82[0xd] = -(bVar95 == 10);
        auVar82[0xe] = -(bVar96 == 10);
        auVar82[0xf] = -(bVar97 == 10);
        if ((ushort)((ushort)(SUB161(auVar82 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar82[0xf] >> 7) << 0xf) == 0xffff) {
          *(undefined8 *)pbVar19 = uVar3;
          *(undefined8 *)(local_4d8 + uVar7 + 8) = uVar4;
          local_508 = param_1;
          iVar24 = FUN_1455d07a0(local_2c8,uVar14,iVar24);
          if (-1 < iVar24) {
            pbVar20 = local_4d8;
            if (0 < iVar24) {
              do {
                uVar44 = local_2c8[uVar13 * 2];
                uVar14 = (uint)local_2c8[uVar13 * 2 + 1];
                do {
                  bVar81 = *pbVar20;
                  pbVar20 = pbVar20 + 1;
                  uVar11 = *(uint *)(param_3 + (ulonglong)bVar81 * 4);
                  *(char *)((ulonglong)uVar11 + param_2) = (char)uVar44;
                  uVar44 = uVar44 + 1;
                  *(uint *)(param_3 + (ulonglong)bVar81 * 4) = uVar11 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
                uVar13 = uVar13 + 1;
              } while ((longlong)uVar13 < (longlong)iVar24);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a8 ^ (ulonglong)auStack_528);
}



// FUNCTION 145482320 FUN_145482320 body=1409 status=ok
// SIG undefined FUN_145482320(void)

void FUN_145482320(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint *param_5,float param_6,ulonglong param_7,float *param_8,longlong *param_9)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_7b8 [32];
  int local_798;
  undefined4 local_788;
  undefined4 local_784;
  ulonglong local_780;
  longlong local_778;
  longlong local_770;
  uint local_760;
  int local_75c;
  ulonglong local_758;
  ulonglong local_750;
  ulonglong local_748;
  longlong local_740;
  ulonglong local_738;
  int local_730;
  longlong local_728;
  longlong local_720;
  ulonglong *local_718;
  ulonglong *local_710;
  ulonglong local_708;
  longlong local_700;
  undefined8 local_6f8;
  ulonglong local_6f0;
  ulonglong local_6e0;
  undefined8 local_6d8;
  undefined1 *local_6d0;
  longlong *local_6c0;
  undefined8 local_6b8;
  float *local_6b0;
  longlong *local_6a8;
  longlong local_6a0;
  ulonglong local_698;
  undefined8 local_690;
  int local_688 [256];
  ulonglong local_288 [64];
  ulonglong local_88 [9];
  
  local_690 = 0xfffffffffffffffe;
  local_88[0] = DAT_14c707940 ^ (ulonglong)auStack_7b8;
  local_738 = param_7;
  local_6b0 = param_8;
  local_6c0 = param_9;
  local_720 = param_3;
  local_6d8 = param_2;
  local_6b8 = param_1;
  if (param_4 < 0x20) {
LAB_145482f6c:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_88[0] ^ (ulonglong)auStack_7b8);
  }
  fVar1 = *param_8;
  uVar13 = param_4 - 5;
  param_5[*(byte *)(uVar13 + param_3)] = param_5[*(byte *)(uVar13 + param_3)] - 1;
  param_5[*(byte *)(param_4 + -4 + param_3)] = param_5[*(byte *)(param_4 + -4 + param_3)] - 1;
  param_5[*(byte *)(param_4 + -3 + param_3)] = param_5[*(byte *)(param_4 + -3 + param_3)] - 1;
  param_5[*(byte *)(param_4 + -2 + param_3)] = param_5[*(byte *)(param_4 + -2 + param_3)] - 1;
  param_5[*(byte *)(param_4 + -1 + param_3)] = param_5[*(byte *)(param_4 + -1 + param_3)] - 1;
  uVar10 = uVar13 & 0xffffffff;
  local_750 = uVar10;
  local_6e0 = uVar13;
  iVar3 = FUN_144d94560((float)uVar10);
  iVar12 = 0xb;
  if (iVar3 + -2 < 0xb) {
    iVar12 = iVar3 + -2;
  }
  iVar3 = 8;
  if (8 < iVar12) {
    iVar3 = iVar12;
  }
  local_760 = 1 << ((byte)iVar3 & 0x1f);
  iVar12 = 0x100;
  lVar8 = 0x100;
  puVar5 = param_5 + 0xfe;
  do {
    if (puVar5[1] != 0) break;
    if (*puVar5 != 0) {
      iVar12 = iVar12 + -1;
      break;
    }
    if (puVar5[-1] != 0) {
      iVar12 = iVar12 + -2;
      break;
    }
    if (puVar5[-2] != 0) {
      iVar12 = iVar12 + -3;
      break;
    }
    lVar8 = lVar8 + -4;
    puVar5 = puVar5 + -4;
    iVar12 = iVar12 + -4;
  } while (0 < lVar8);
  local_798 = iVar12;
  local_730 = iVar3;
  local_75c = FUN_14547e660(local_688,local_760,param_5,uVar10);
  param_5[*(byte *)(uVar13 + param_3)] = param_5[*(byte *)(uVar13 + param_3)] + 1;
  param_5[*(byte *)(param_4 + -4 + param_3)] = param_5[*(byte *)(param_4 + -4 + param_3)] + 1;
  param_5[*(byte *)(param_4 + -3 + param_3)] = param_5[*(byte *)(param_4 + -3 + param_3)] + 1;
  param_5[*(byte *)(param_4 + -2 + param_3)] = param_5[*(byte *)(param_4 + -2 + param_3)] + 1;
  param_5[*(byte *)(param_4 + -1 + param_3)] = param_5[*(byte *)(param_4 + -1 + param_3)] + 1;
  if (local_75c < 2) goto LAB_145482f6c;
  fVar16 = (float)(**(code **)(local_738 + 0x58))
                            (uVar13,(longlong)local_75c,(longlong)(int)local_760);
  local_778 = (longlong)(fVar1 - (fVar16 * param_6 + 5.0));
  if (local_778 < 4) goto LAB_145482f6c;
  lVar15 = (longlong)iVar12;
  memset(local_688 + lVar15,0,(longlong)(0x100 - iVar12) << 2);
  local_718 = local_288;
  local_710 = local_88;
  local_708 = (ulonglong)(iVar3 + -8);
  local_700 = 0x3c;
  local_798 = local_75c;
  FUN_1455d1600(&local_718,iVar3,local_688,iVar12);
  lVar8 = 0x3f - local_700 >> 3;
  uVar10 = local_708 << ((char)local_700 + 1U & 0x3f);
  *local_718 = uVar10 >> 0x38 | (uVar10 & 0xff000000000000) >> 0x28 |
               (uVar10 & 0xff0000000000) >> 0x18 | (uVar10 & 0xff00000000) >> 8 |
               (uVar10 & 0xff000000) << 8 | (uVar10 & 0xff0000) << 0x18 | (uVar10 & 0xff00) << 0x28
               | uVar10 << 0x38;
  local_718 = (ulonglong *)((longlong)local_718 + lVar8);
  local_700 = local_700 + lVar8 * 8;
  if (-local_700 != -0x3f && -1 < -local_700 + 0x3f) {
    uVar7 = (int)local_700 + 1U & 7;
    if (uVar7 != 0) {
      local_708 = local_708 << (sbyte)uVar7;
      local_700 = local_700 - (ulonglong)uVar7;
    }
    while (7 < 0x3f - local_700) {
      *(char *)local_718 = (char)(local_708 >> (0x37U - (char)local_700 & 0x3f));
      local_718 = (ulonglong *)((longlong)local_718 + 1);
      local_700 = local_700 + 8;
      local_708 = local_708 & *(uint *)(&DAT_149c51b1c + local_700 * -4);
    }
  }
  local_6d0 = (undefined1 *)
              ((longlong)local_718 +
              (((longlong)((ulonglong)((uint)(0x46 - local_700 >> 0x3f) & 7) + (0x46 - local_700))
               >> 3) - (longlong)local_288));
  lVar8 = 0;
  if (0 < iVar12) {
    lVar14 = (longlong)local_688 - (longlong)param_5;
    do {
      iVar4 = *(int *)(lVar14 + (longlong)param_5);
      if (iVar4 != 0) {
        lVar8 = lVar8 + (longlong)
                        *(int *)(&DAT_149d5d1c0 +
                                (ulonglong)(uint)(iVar4 << (0xd - (byte)iVar3 & 0x1f)) * 4) *
                        (ulonglong)*param_5;
      }
      param_5 = param_5 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (local_778 <= (longlong)(local_6d0 + (lVar8 >> 0x10))) goto LAB_145482f6c;
  uVar10 = FUN_1455d0e20(iVar3);
  local_6a8 = param_9;
  local_6f0 = uVar10;
  local_698 = uVar10;
  if (param_9 == (longlong *)0x0) {
    lVar8 = (*(code *)PTR_FUN_14c6d9350)(uVar10,0x10);
    uVar11 = uVar10;
  }
  else {
    local_738 = uVar10 + 0xf & 0xfffffffffffffff0;
    uVar11 = (ulonglong)(-(uint)(param_9[4] != 0) & 0x10);
    lVar8 = param_9[1];
    local_728 = lVar8;
    if (local_738 + uVar11 + lVar8 <= (ulonglong)(param_9[3] + *param_9)) {
      puVar9 = (ulonglong *)(local_738 + lVar8);
      param_9[1] = (longlong)puVar9;
      if (param_9[4] != 0) {
        *puVar9 = local_738;
        puVar9[1] = 0;
        param_9[1] = param_9[1] + uVar11;
        puVar9 = (ulonglong *)param_9[1];
      }
      puVar6 = (ulonglong *)param_9[2];
      if ((ulonglong *)param_9[2] <= puVar9) {
        puVar6 = puVar9;
      }
      param_9[2] = (longlong)puVar6;
      goto LAB_14548278f;
    }
    if ((int)param_9[5] == 0) {
      lVar8 = 0;
      local_728 = 0;
      goto LAB_14548278f;
    }
    lVar8 = (*(code *)PTR_FUN_14c6d9350)(local_738,0x10);
    uVar11 = local_738;
  }
  local_728 = lVar8;
  if (lVar8 == 0) {
    FUN_144d95420(uVar11);
  }
LAB_14548278f:
  local_6a0 = lVar8;
  if ((lVar8 == 0) &&
     (iVar4 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                            "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc"), iVar4 != 0)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_6f8 = FUN_1455d0e60(lVar8,uVar10,iVar3);
  FUN_1455d0f00(local_6f8,local_688,iVar12);
  local_780 = (ulonglong)local_760;
  local_748 = *(byte *)(param_4 + -3 + local_720) | local_780;
  local_758 = *(byte *)(param_4 + -2 + local_720) | local_780;
  local_780 = *(byte *)(param_4 + -1 + local_720) | local_780;
  local_770 = local_720 + -1 + uVar13;
  local_784 = 0;
  local_788 = 0;
  local_75c = (int)local_750 / 10;
  uVar7 = (int)local_750 % 10;
  local_750 = (ulonglong)uVar7;
  local_740 = local_770;
                    /* WARNING: Could not recover jumptable at 0x000145482886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_145483b30 + (longlong)(int)uVar7 * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_145483b30 + (longlong)(int)uVar7 * 4),&IMAGE_DOS_HEADER_140000000,
             local_770);
  return;
}



// FUNCTION 145483b80 FUN_145483b80 body=1125 status=ok
// SIG undefined FUN_145483b80(void)

void FUN_145483b80(byte *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  char cVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t _Size;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  undefined1 auStack_638 [32];
  int local_618;
  longlong local_610;
  byte *local_608;
  byte *local_600;
  ulonglong local_5f8;
  longlong local_5f0;
  ulonglong local_5e8;
  longlong local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  undefined8 local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  byte *local_5b0;
  byte *local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  uint local_598;
  uint local_594;
  uint local_590;
  uint local_58c;
  uint local_588;
  uint local_584;
  uint local_580;
  undefined1 local_578 [1296];
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_638;
  pbVar9 = param_1 + param_2;
  local_610 = param_3;
  local_5e0 = param_4;
  local_5d0 = param_2;
  if (param_2 < 8) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      pcVar12 = "OODLE ERROR : corruption : comp_len >= 8\n";
      uVar11 = 0x4fa;
LAB_145483d43:
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_tans.cpp",uVar11,pcVar12);
    }
  }
  else if (param_4 < 5) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      pcVar12 = "OODLE ERROR : corruption : to_len >= 5\n";
      uVar11 = 0x4fb;
      goto LAB_145483d43;
    }
  }
  else {
    uVar4 = 0;
    puVar17 = (ulonglong *)(param_1 + 1);
    lVar13 = (longlong)pbVar9 - (longlong)puVar17;
    uVar15 = (ulonglong)*param_1 << 0x38;
    if (lVar13 < 8) {
      uVar16 = uVar4;
      if (0 < lVar13) {
        uVar16 = (ulonglong)(byte)*puVar17;
      }
      uVar5 = uVar4;
      if (lVar13 != 1 && -1 < lVar13 + -1) {
        uVar5 = (ulonglong)param_1[2];
      }
      uVar14 = uVar4;
      if (lVar13 != 2 && -1 < lVar13 + -2) {
        uVar14 = (ulonglong)param_1[3];
      }
      uVar2 = uVar4;
      if (lVar13 != 3 && -1 < lVar13 + -3) {
        uVar2 = (ulonglong)param_1[4];
      }
      lVar13 = (longlong)pbVar9 - (longlong)(param_1 + 5);
      uVar8 = uVar4;
      if (0 < lVar13) {
        uVar8 = (ulonglong)param_1[5];
      }
      uVar6 = uVar4;
      if (lVar13 != 1 && -1 < lVar13 + -1) {
        uVar6 = (ulonglong)param_1[6];
      }
      if (lVar13 != 2 && -1 < lVar13 + -2) {
        uVar4 = (ulonglong)param_1[7];
      }
      uVar4 = ((((((uVar16 << 8 | uVar5) << 8 | uVar14) << 8 | uVar2) << 8 | uVar8) << 8 | uVar6) <<
               8 | uVar4) << 8;
    }
    else {
      uVar4 = *puVar17;
      uVar4 = (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
              (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
              (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
    }
    local_608 = param_1 + 7;
    uVar4 = uVar4 >> 8 | uVar15;
    local_600 = pbVar9;
    if (-1 < (longlong)uVar4) {
      local_5f8 = uVar4 << 3;
      local_5f0 = 10;
      local_5e8 = (uVar15 & 0x7fffffffffffffff) >> 0x3d;
      iVar7 = (uint)(uVar4 * 2 >> 0x3e) + 8;
      local_618 = iVar7;
      cVar1 = FUN_1455d1d00(&local_608,iVar7,local_578);
      if (cVar1 == '\0') goto LAB_145483fd5;
      puVar17 = (ulonglong *)
                (local_608 +
                -((longlong)((0x3f - local_5f0) + (ulonglong)((uint)(0x3f - local_5f0 >> 0x3f) & 7))
                 >> 3));
      _Size = (longlong)pbVar9 - (longlong)puVar17;
      if ((longlong)_Size < 8) {
        if ((longlong)_Size < 1) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
            pcVar12 = "OODLE ERROR : corruption : tans_compLen > 0\n";
            uVar11 = 0x52e;
            goto LAB_145483d43;
          }
          goto LAB_145483d4e;
        }
        local_58 = 0;
        local_68 = 0;
        uStack_60 = 0;
        memcpy(&uStack_60,puVar17,_Size);
        pbVar9 = (byte *)((longlong)&uStack_60 + _Size);
        puVar17 = &uStack_60;
      }
      lVar13 = FUN_1455d0e40(iVar7);
      if ((0xf < param_6 - param_5) &&
         (uVar4 = param_5 + 0xfU & 0xfffffffffffffff0, lVar13 <= (longlong)(param_6 - uVar4))) {
        local_5d8 = FUN_1455d0ec0(uVar4,lVar13,iVar7);
        FUN_1455d1280(local_5d8,local_578);
        uVar4 = *(ulonglong *)(pbVar9 + -8);
        uVar10 = local_618 * -3 + 0x40;
        bVar3 = (char)local_5e8 + 8;
        local_580 = (1 << (sbyte)iVar7) - 1;
        local_5c0 = local_610;
        local_5b8 = local_5e0 + local_610 + -5;
        local_590 = local_580 & (uint)*puVar17;
        uVar16 = *puVar17 >> (bVar3 & 0x3f);
        uVar15 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                 (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8;
        local_598 = uVar10 & 7;
        local_588 = local_580 & (uint)uVar16;
        uVar16 = uVar16 >> (bVar3 & 0x3f);
        local_58c = (uint)uVar15 & local_580;
        local_5a0 = (undefined4)(uVar16 >> (bVar3 & 0x3f));
        uVar4 = (uVar15 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
                 (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38) >> (bVar3 & 0x3f);
        local_5b0 = (byte *)((longlong)puVar17 + (8 - ((longlong)(int)uVar10 >> 3)));
        local_5a8 = (byte *)(((longlong)(0x40 - (ulonglong)(uint)(local_618 * 2)) >> 3) +
                            (longlong)(pbVar9 + -8));
        local_59c = (undefined4)(uVar4 >> (bVar3 & 0x3f));
        local_5c8 = *(undefined8 *)(local_5d8 + 8);
        local_594 = local_618 * -2 & 7;
        local_584 = local_580 & (uint)uVar4;
        local_580 = local_580 & (uint)uVar16;
        if ((char)DAT_14c7fc4c4 < '\0') {
          if ((DAT_14c7fc4c4 >> 0xe & 1) == 0) {
            cVar1 = FUN_14272a240();
          }
          else {
            cVar1 = FUN_14272a4a0();
          }
        }
        else {
          cVar1 = FUN_142729fe0(&local_5c8);
        }
        if (cVar1 != '\0') {
          FUN_145484000(&local_5c8);
        }
      }
      goto LAB_145483fd5;
    }
    local_5f8 = uVar15;
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      pcVar12 = "OODLE ERROR : corruption : flag == 0\n";
      uVar11 = 0x50c;
      goto LAB_145483d43;
    }
  }
LAB_145483d4e:
  FUN_144d94360();
LAB_145483fd5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_638);
}



// FUNCTION 145484000 FUN_145484000 body=1359 status=ok
// SIG undefined FUN_145484000(void)

void FUN_145484000(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  size_t _Size;
  ulonglong *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  void *_Src;
  ulonglong *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  uint local_70;
  size_t local_68;
  uint local_60;
  uint local_5c;
  longlong local_58;
  ulonglong local_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar15 = (ulonglong *)param_1[3];
  puVar6 = (ulonglong *)param_1[4];
  local_60 = *(uint *)(param_1 + 5);
  local_74 = *(uint *)((longlong)param_1 + 0x2c);
  uVar9 = *(uint *)(param_1 + 6);
  uVar7 = *(uint *)((longlong)param_1 + 0x34);
  local_68 = 0;
  if (puVar6 < puVar15) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
      pcVar13 = "OODLE ERROR : corruption : in1 >= in0\n";
      uVar10 = 0x313;
LAB_145484518:
      (*(code *)PTR_FUN_14c6d9368)
                (0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays_tans.cpp",uVar10,pcVar13);
    }
  }
  else {
    puVar3 = (undefined1 *)param_1[2];
    lVar11 = *param_1;
    uVar8 = *(uint *)(param_1 + 7);
    local_78 = *(uint *)(param_1 + 8);
    local_70 = *(uint *)(param_1 + 9);
    uVar16 = *(uint *)((longlong)param_1 + 0x3c);
    uVar17 = *(uint *)((longlong)param_1 + 0x44);
    local_58 = lVar11;
    for (puVar5 = (undefined1 *)param_1[1]; uVar4 = local_74, local_5c = uVar8, puVar5 < puVar3;
        puVar5 = puVar5 + 10) {
      uVar8 = uVar9;
      if ((longlong)puVar6 - (longlong)puVar15 < 10) {
        if (local_68 != 0) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_145484523;
          pcVar13 = "OODLE ERROR : corruption : final_nbytes == 0\n";
          uVar10 = 0x33a;
          goto LAB_145484518;
        }
        uVar8 = uVar9 & 7;
        _Src = (void *)((longlong)puVar15 - (ulonglong)(uVar9 >> 3));
        uVar9 = uVar7 >> 3;
        uVar7 = uVar7 & 7;
        _Size = (longlong)puVar6 + ((ulonglong)uVar9 - (longlong)_Src);
        local_68 = _Size;
        if ((longlong)_Size < 0) {
          FUN_144d94340();
          if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto LAB_145484523;
          pcVar13 = "OODLE ERROR : corruption : in_left >= 0\n";
          uVar10 = 0x340;
          goto LAB_145484518;
        }
        memcpy(local_50,_Src,_Size);
        memcpy((void *)((longlong)&local_30 - _Size),_Src,_Size);
        puVar15 = local_50;
        puVar6 = &local_30;
        local_68 = 0x20 - local_68;
        lVar11 = local_58;
      }
      uVar12 = local_60 | (int)*puVar15 << ((byte)uVar8 & 0x1f);
      puVar15 = (ulonglong *)((longlong)puVar15 + (ulonglong)(0x1f - uVar8 >> 3));
      puVar1 = (uint *)(lVar11 + (ulonglong)local_5c * 8);
      *puVar5 = *(undefined1 *)(lVar11 + 5 + (ulonglong)local_5c * 8);
      uVar9 = (uVar8 | 0x18) - (uint)(byte)puVar1[1];
      uVar8 = (*puVar1 & uVar12) + (uint)*(ushort *)((longlong)puVar1 + 6);
      uVar14 = (ulonglong)uVar8;
      uVar12 = uVar12 >> ((byte)puVar1[1] & 0x1f);
      uVar4 = local_74;
      if (puVar3 <= puVar5 + 1) break;
      puVar1 = (uint *)(lVar11 + (ulonglong)uVar16 * 8);
      puVar5[1] = *(undefined1 *)(lVar11 + 5 + (ulonglong)uVar16 * 8);
      uVar9 = uVar9 - (byte)puVar1[1];
      uVar16 = (*puVar1 & uVar12) + (uint)*(ushort *)((longlong)puVar1 + 6);
      if (puVar3 <= puVar5 + 2) break;
      uVar4 = (int)*puVar15 << ((byte)uVar9 & 0x1f) | uVar12 >> ((byte)puVar1[1] & 0x1f);
      puVar15 = (ulonglong *)((longlong)puVar15 + (ulonglong)(0x1f - uVar9 >> 3));
      puVar1 = (uint *)(lVar11 + (ulonglong)local_78 * 8);
      puVar5[2] = *(undefined1 *)(lVar11 + 5 + (ulonglong)local_78 * 8);
      uVar9 = (uVar9 | 0x18) - (uint)(byte)puVar1[1];
      local_78 = (*puVar1 & uVar4) + (uint)*(ushort *)((longlong)puVar1 + 6);
      uVar4 = uVar4 >> ((byte)puVar1[1] & 0x1f);
      if (puVar3 <= puVar5 + 3) break;
      puVar1 = (uint *)(lVar11 + (ulonglong)uVar17 * 8);
      puVar5[3] = *(undefined1 *)(lVar11 + 5 + (ulonglong)uVar17 * 8);
      uVar9 = uVar9 - (byte)puVar1[1];
      uVar17 = (*puVar1 & uVar4) + (uint)*(ushort *)((longlong)puVar1 + 6);
      if (puVar3 <= puVar5 + 4) break;
      local_60 = (int)*puVar15 << ((byte)uVar9 & 0x1f) | uVar4 >> ((byte)puVar1[1] & 0x1f);
      puVar15 = (ulonglong *)((longlong)puVar15 + (ulonglong)(0x1f - uVar9 >> 3));
      puVar1 = (uint *)(lVar11 + (ulonglong)local_70 * 8);
      puVar5[4] = *(undefined1 *)(lVar11 + 5 + (ulonglong)local_70 * 8);
      uVar9 = (uVar9 | 0x18) - (uint)(byte)puVar1[1];
      local_70 = (*puVar1 & local_60) + (uint)*(ushort *)((longlong)puVar1 + 6);
      local_60 = local_60 >> ((byte)puVar1[1] & 0x1f);
      if (puVar3 <= puVar5 + 5) break;
      uVar8 = *(uint *)((longlong)puVar6 + -4);
      local_74 = local_74 |
                 (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18)
                 << ((byte)uVar7 & 0x1f);
      puVar5[5] = *(undefined1 *)(lVar11 + 5 + uVar14 * 8);
      puVar6 = (ulonglong *)((longlong)puVar6 - (ulonglong)(0x1f - uVar7 >> 3));
      bVar2 = *(byte *)(lVar11 + 4 + uVar14 * 8);
      uVar8 = (*(uint *)(lVar11 + uVar14 * 8) & local_74) +
              (uint)*(ushort *)(lVar11 + uVar14 * 8 + 6);
      local_74 = local_74 >> (bVar2 & 0x1f);
      uVar7 = (uVar7 | 0x18) - (uint)bVar2;
      local_5c = uVar8;
      if (puVar3 <= puVar5 + 6) break;
      puVar1 = (uint *)(lVar11 + (ulonglong)uVar16 * 8);
      puVar5[6] = *(undefined1 *)(lVar11 + 5 + (ulonglong)uVar16 * 8);
      uVar7 = uVar7 - (byte)puVar1[1];
      uVar16 = (*puVar1 & local_74) + (uint)*(ushort *)((longlong)puVar1 + 6);
      if (puVar3 <= puVar5 + 7) break;
      uVar4 = *(uint *)((longlong)puVar6 + -4);
      uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) <<
              ((byte)uVar7 & 0x1f) | local_74 >> ((byte)puVar1[1] & 0x1f);
      puVar6 = (ulonglong *)((longlong)puVar6 - (ulonglong)(0x1f - uVar7 >> 3));
      puVar1 = (uint *)(lVar11 + (ulonglong)local_78 * 8);
      puVar5[7] = *(undefined1 *)(lVar11 + 5 + (ulonglong)local_78 * 8);
      uVar7 = (uVar7 | 0x18) - (uint)(byte)puVar1[1];
      local_78 = (*puVar1 & uVar4) + (uint)*(ushort *)((longlong)puVar1 + 6);
      uVar4 = uVar4 >> ((byte)puVar1[1] & 0x1f);
      if (puVar3 <= puVar5 + 8) break;
      puVar1 = (uint *)(lVar11 + (ulonglong)uVar17 * 8);
      puVar5[8] = *(undefined1 *)(lVar11 + 5 + (ulonglong)uVar17 * 8);
      uVar7 = uVar7 - (byte)puVar1[1];
      uVar17 = (*puVar1 & uVar4) + (uint)*(ushort *)((longlong)puVar1 + 6);
      if (puVar3 <= puVar5 + 9) break;
      uVar12 = *(uint *)((longlong)puVar6 + -4);
      local_74 = (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                 uVar12 << 0x18) << ((byte)uVar7 & 0x1f) | uVar4 >> ((byte)puVar1[1] & 0x1f);
      puVar6 = (ulonglong *)((longlong)puVar6 - (ulonglong)(0x1f - uVar7 >> 3));
      puVar1 = (uint *)(lVar11 + (ulonglong)local_70 * 8);
      puVar5[9] = *(undefined1 *)(lVar11 + 5 + (ulonglong)local_70 * 8);
      uVar7 = (uVar7 | 0x18) - (uint)(byte)puVar1[1];
      local_70 = (*puVar1 & local_74) + (uint)*(ushort *)((longlong)puVar1 + 6);
      local_74 = local_74 >> ((byte)puVar1[1] & 0x1f);
    }
    local_74 = uVar4;
    if ((((ulonglong)(uVar7 >> 3) + (ulonglong)(uVar9 >> 3)) - (longlong)puVar15) + (longlong)puVar6
        == local_68) {
      if ((local_70 | uVar17 | local_78 | uVar16 | uVar8) < 0x100) {
        *puVar3 = (char)uVar8;
        puVar3[1] = (char)uVar16;
        puVar3[2] = (char)local_78;
        puVar3[3] = (char)uVar17;
        puVar3[4] = (char)local_70;
        goto LAB_145484542;
      }
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar13 = "OODLE ERROR : corruption : tans_states_or <= 255\n";
        uVar10 = 0x3b6;
        goto LAB_145484518;
      }
    }
    else {
      FUN_144d94340();
      if (PTR_FUN_14c6d9368 != (undefined *)0x0) {
        pcVar13 = "OODLE ERROR : corruption : rrPtrDiff(in1 - in0) == (SINTa)final_nbytes\n";
        uVar10 = 0x3af;
        goto LAB_145484518;
      }
    }
  }
LAB_145484523:
  FUN_144d94360();
LAB_145484542:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 145484580 FUN_145484580 body=2181 status=ok
// SIG undefined FUN_145484580(void)

void FUN_145484580(undefined1 *param_1,byte *param_2,ulonglong *param_3,ulonglong param_4,
                  float param_5,longlong param_6,float *param_7,longlong *param_8,uint param_9,
                  undefined4 param_10)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  float *pfVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  char *pcVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  char *pcVar22;
  byte *pbVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  float local_510;
  longlong local_508;
  char **local_500;
  undefined4 local_4f8;
  int *local_4f0;
  uint local_4e8;
  longlong *local_4e0;
  undefined4 local_4d8;
  char local_4c8;
  float local_4c4;
  char *local_4c0;
  int local_4b8 [2];
  byte *local_4b0;
  longlong local_4a8;
  ulonglong local_4a0;
  undefined1 *local_498;
  float *local_490;
  undefined1 local_488 [1024];
  ulonglong local_88;
  
  local_88 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_490 = param_7;
  local_4a8 = param_6;
  local_4b0 = param_2;
  local_4a0 = param_4;
  local_498 = param_1;
  if ((0 < (longlong)param_4) && (4 < (longlong)param_2 - (longlong)param_1)) {
    *param_1 = 0;
    puVar16 = (ulonglong *)(param_4 + (longlong)param_3);
    lVar21 = 0;
    if (0x11 < param_4) {
      lVar21 = param_4 - 0x12;
    }
    local_4c8 = '\0';
    local_4c0 = param_1 + 1;
    puVar17 = (ulonglong *)(lVar21 + (longlong)param_3);
    pcVar22 = local_4c0;
    puVar10 = param_3;
joined_r0x000145484643:
    if (param_3 < puVar17) {
LAB_145484650:
      puVar19 = param_3;
      auVar43[0] = -(*(char *)((longlong)puVar19 + 2) == (char)*puVar19);
      auVar43[1] = -(*(char *)((longlong)puVar19 + 3) == *(char *)((longlong)puVar19 + 1));
      auVar43[2] = -(*(char *)((longlong)puVar19 + 4) == *(char *)((longlong)puVar19 + 2));
      auVar43[3] = -(*(char *)((longlong)puVar19 + 5) == *(char *)((longlong)puVar19 + 3));
      auVar43[4] = -(*(char *)((longlong)puVar19 + 6) == *(char *)((longlong)puVar19 + 4));
      auVar43[5] = -(*(char *)((longlong)puVar19 + 7) == *(char *)((longlong)puVar19 + 5));
      auVar43[6] = -((char)puVar19[1] == *(char *)((longlong)puVar19 + 6));
      auVar43[7] = -(*(char *)((longlong)puVar19 + 9) == *(char *)((longlong)puVar19 + 7));
      auVar43[8] = -(*(char *)((longlong)puVar19 + 10) == (char)puVar19[1]);
      auVar43[9] = -(*(char *)((longlong)puVar19 + 0xb) == *(char *)((longlong)puVar19 + 9));
      auVar43[10] = -(*(char *)((longlong)puVar19 + 0xc) == *(char *)((longlong)puVar19 + 10));
      auVar43[0xb] = -(*(char *)((longlong)puVar19 + 0xd) == *(char *)((longlong)puVar19 + 0xb));
      auVar43[0xc] = -(*(char *)((longlong)puVar19 + 0xe) == *(char *)((longlong)puVar19 + 0xc));
      auVar43[0xd] = -(*(char *)((longlong)puVar19 + 0xf) == *(char *)((longlong)puVar19 + 0xd));
      auVar43[0xe] = -((char)puVar19[2] == *(char *)((longlong)puVar19 + 0xe));
      auVar43[0xf] = -(*(char *)((longlong)puVar19 + 0x11) == *(char *)((longlong)puVar19 + 0xf));
      auVar25[0] = -(*(char *)((longlong)puVar19 + 1) == (char)*puVar19);
      auVar25[1] = -(*(char *)((longlong)puVar19 + 2) == *(char *)((longlong)puVar19 + 1));
      auVar25[2] = -(*(char *)((longlong)puVar19 + 3) == *(char *)((longlong)puVar19 + 2));
      auVar25[3] = -(*(char *)((longlong)puVar19 + 4) == *(char *)((longlong)puVar19 + 3));
      auVar25[4] = -(*(char *)((longlong)puVar19 + 5) == *(char *)((longlong)puVar19 + 4));
      auVar25[5] = -(*(char *)((longlong)puVar19 + 6) == *(char *)((longlong)puVar19 + 5));
      auVar25[6] = -(*(char *)((longlong)puVar19 + 7) == *(char *)((longlong)puVar19 + 6));
      auVar25[7] = -((char)puVar19[1] == *(char *)((longlong)puVar19 + 7));
      auVar25[8] = -(*(char *)((longlong)puVar19 + 9) == (char)puVar19[1]);
      auVar25[9] = -(*(char *)((longlong)puVar19 + 10) == *(char *)((longlong)puVar19 + 9));
      auVar25[10] = -(*(char *)((longlong)puVar19 + 0xb) == *(char *)((longlong)puVar19 + 10));
      auVar25[0xb] = -(*(char *)((longlong)puVar19 + 0xc) == *(char *)((longlong)puVar19 + 0xb));
      auVar25[0xc] = -(*(char *)((longlong)puVar19 + 0xd) == *(char *)((longlong)puVar19 + 0xc));
      auVar25[0xd] = -(*(char *)((longlong)puVar19 + 0xe) == *(char *)((longlong)puVar19 + 0xd));
      auVar25[0xe] = -(*(char *)((longlong)puVar19 + 0xf) == *(char *)((longlong)puVar19 + 0xe));
      auVar25[0xf] = -((char)puVar19[2] == *(char *)((longlong)puVar19 + 0xf));
      auVar43 = auVar43 & auVar25;
      uVar2 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar43[0xf] >> 7) << 0xf;
      if (uVar2 == 0) goto code_r0x000145484678;
      uVar15 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
        }
      }
      uVar9 = (ulonglong)uVar15;
      goto LAB_14548468f;
    }
    goto LAB_1454849d7;
  }
  goto LAB_145484df5;
code_r0x000145484678:
  param_3 = puVar19 + 2;
  if (puVar17 <= puVar19 + 2) goto code_r0x000145484685;
  goto LAB_145484650;
code_r0x000145484685:
  uVar9 = 0x10;
LAB_14548468f:
  puVar19 = (ulonglong *)(uVar9 + (longlong)puVar19);
  if (puVar17 <= puVar19) {
LAB_1454849d7:
    uVar9 = (longlong)puVar16 - (longlong)puVar10;
    if (uVar9 == 0) goto LAB_145484aaa;
    if (uVar9 + 0x10 <= (ulonglong)((longlong)param_2 - (longlong)pcVar22)) {
      memcpy(pcVar22,puVar10,uVar9);
      pcVar22 = pcVar22 + uVar9;
      if (uVar9 < 0x40) goto LAB_145484a8c;
      if (uVar9 < 0x4f) {
        uVar9 = uVar9 - 0xf;
        param_2[-1] = 0;
        param_2 = param_2 + -1;
        if (uVar9 < 0x40) goto LAB_145484a87;
      }
      lVar21 = (longlong)param_2 - (longlong)pcVar22;
      goto LAB_145484a40;
    }
    goto LAB_145484df5;
  }
  uVar9 = *puVar19 ^ *(ulonglong *)((longlong)puVar19 + 1);
  if (uVar9 == 0) {
    if ((longlong)puVar16 - (longlong)puVar19 < 0x18) {
      cVar27 = (char)*puVar19;
      cVar28 = *(char *)((longlong)puVar19 + 1);
      cVar29 = *(char *)((longlong)puVar19 + 2);
      cVar30 = *(char *)((longlong)puVar19 + 3);
      cVar31 = *(char *)((longlong)puVar19 + 4);
      cVar32 = *(char *)((longlong)puVar19 + 5);
      cVar33 = *(char *)((longlong)puVar19 + 6);
      cVar34 = *(char *)((longlong)puVar19 + 7);
      cVar35 = (char)puVar19[1];
      cVar36 = *(char *)((longlong)puVar19 + 9);
      cVar37 = *(char *)((longlong)puVar19 + 10);
      cVar38 = *(char *)((longlong)puVar19 + 0xb);
      cVar39 = *(char *)((longlong)puVar19 + 0xc);
      cVar40 = *(char *)((longlong)puVar19 + 0xd);
      cVar41 = *(char *)((longlong)puVar19 + 0xe);
      cVar42 = *(char *)((longlong)puVar19 + 0xf);
      param_3 = (ulonglong *)((longlong)puVar19 + 1);
    }
    else {
      cVar27 = (char)puVar19[1];
      cVar28 = *(char *)((longlong)puVar19 + 9);
      cVar29 = *(char *)((longlong)puVar19 + 10);
      cVar30 = *(char *)((longlong)puVar19 + 0xb);
      cVar31 = *(char *)((longlong)puVar19 + 0xc);
      cVar32 = *(char *)((longlong)puVar19 + 0xd);
      cVar33 = *(char *)((longlong)puVar19 + 0xe);
      cVar34 = *(char *)((longlong)puVar19 + 0xf);
      cVar35 = (char)puVar19[2];
      cVar36 = *(char *)((longlong)puVar19 + 0x11);
      cVar37 = *(char *)((longlong)puVar19 + 0x12);
      cVar38 = *(char *)((longlong)puVar19 + 0x13);
      cVar39 = *(char *)((longlong)puVar19 + 0x14);
      cVar40 = *(char *)((longlong)puVar19 + 0x15);
      cVar41 = *(char *)((longlong)puVar19 + 0x16);
      cVar42 = *(char *)((longlong)puVar19 + 0x17);
      param_3 = (ulonglong *)((longlong)puVar19 + 9);
    }
    if (param_3 < puVar17) {
LAB_1454846f0:
      auVar26[0] = -((char)*param_3 == cVar27);
      auVar26[1] = -(*(char *)((longlong)param_3 + 1) == cVar28);
      auVar26[2] = -(*(char *)((longlong)param_3 + 2) == cVar29);
      auVar26[3] = -(*(char *)((longlong)param_3 + 3) == cVar30);
      auVar26[4] = -(*(char *)((longlong)param_3 + 4) == cVar31);
      auVar26[5] = -(*(char *)((longlong)param_3 + 5) == cVar32);
      auVar26[6] = -(*(char *)((longlong)param_3 + 6) == cVar33);
      auVar26[7] = -(*(char *)((longlong)param_3 + 7) == cVar34);
      auVar26[8] = -((char)param_3[1] == cVar35);
      auVar26[9] = -(*(char *)((longlong)param_3 + 9) == cVar36);
      auVar26[10] = -(*(char *)((longlong)param_3 + 10) == cVar37);
      auVar26[0xb] = -(*(char *)((longlong)param_3 + 0xb) == cVar38);
      auVar26[0xc] = -(*(char *)((longlong)param_3 + 0xc) == cVar39);
      auVar26[0xd] = -(*(char *)((longlong)param_3 + 0xd) == cVar40);
      auVar26[0xe] = -(*(char *)((longlong)param_3 + 0xe) == cVar41);
      auVar26[0xf] = -(*(char *)((longlong)param_3 + 0xf) == cVar42);
      uVar15 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar26[0xf] >> 7) << 0xf);
      if (uVar15 == 0xffff) goto code_r0x00014548470b;
      uVar15 = ~uVar15;
      uVar1 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      param_3 = (ulonglong *)((ulonglong)uVar1 + (longlong)param_3);
      goto LAB_145484730;
    }
joined_r0x000145484717:
    for (; (param_3 < puVar16 && ((char)*param_3 == (char)*puVar19));
        param_3 = (ulonglong *)((longlong)param_3 + 1)) {
    }
  }
  else {
    uVar20 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
      }
    }
    param_3 = (ulonglong *)((uVar20 >> 3) + 1 + (longlong)puVar19);
  }
LAB_145484730:
  uVar9 = (longlong)puVar19 - (longlong)puVar10;
  uVar20 = (longlong)param_3 - (longlong)puVar19;
  if ((ulonglong)((longlong)param_2 - (longlong)pcVar22) < uVar9 + 0x12) goto LAB_145484df5;
  cVar27 = (char)*puVar19;
  if (cVar27 != local_4c8) {
    if (uVar20 < 8) goto joined_r0x000145484643;
    param_2 = param_2 + -1;
    *param_2 = 1;
    *pcVar22 = cVar27;
    pcVar22 = pcVar22 + 1;
    local_4c8 = cVar27;
  }
  pcVar11 = pcVar22 + uVar9;
  lVar21 = (longlong)puVar10 - (longlong)pcVar22;
  do {
    uVar4 = *(undefined8 *)(pcVar22 + lVar21 + 8);
    *(undefined8 *)pcVar22 = *(undefined8 *)(pcVar22 + lVar21);
    *(undefined8 *)(pcVar22 + 8) = uVar4;
    pcVar22 = pcVar22 + 0x10;
  } while (pcVar22 < pcVar11);
  pcVar22 = pcVar11;
  puVar10 = param_3;
  if ((uVar9 < 0x1f) && (((uVar20 < 0x10 || (uVar9 < 0x10)) && (uVar20 < 0x1f)))) {
    pbVar23 = param_2 + -1;
    bVar14 = (byte)uVar20 * '\x10';
    if (uVar9 < 0x10) {
      bVar7 = 0xf - (char)uVar9;
      if (uVar20 < 0x10) {
        *pbVar23 = bVar7 | bVar14;
        param_2 = pbVar23;
      }
      else {
        bVar3 = (byte)uVar20 & 0x1e;
        param_2 = param_2 + -2;
        *param_2 = bVar14 + bVar3 * -8 | 0xf;
        *pbVar23 = bVar7 | bVar3 * '\b';
      }
    }
    else {
      param_2 = param_2 + -2;
      *param_2 = 0x1eU - (char)uVar9 | bVar14;
      *pbVar23 = 0;
    }
  }
  else {
    if (uVar9 - 0x40 < 0xf) {
      param_2 = param_2 + -1;
      uVar9 = uVar9 - 0xf;
      *param_2 = 0;
    }
    if (0x3f < uVar9) {
      lVar21 = (longlong)param_2 - (longlong)pcVar11;
      do {
        iVar8 = 0x700;
        if (uVar9 >> 6 < 0x700) {
          iVar8 = (int)(uVar9 >> 6);
        }
        if (lVar21 < 4) goto LAB_145484df5;
        lVar21 = lVar21 + -2;
        param_2[-2] = (byte)(iVar8 + -1);
        param_2[-1] = (char)((uint)(iVar8 + -1) >> 8) + 2;
        param_2 = param_2 + -2;
        uVar9 = uVar9 - (uint)(iVar8 << 6);
      } while (0x3f < uVar9);
    }
    uVar15 = (uint)uVar20 & 0x7f;
    if ((((uVar15 < 3) || (0x1e < uVar9)) || ((0xf < uVar15 && (0xf < uVar9)))) || (0x1e < uVar15))
    {
      if ((uVar20 & 0x7f) != 0 || uVar9 != 0) {
        uVar15 = uVar15 << 6 | (uint)uVar9;
        param_2[-2] = (byte)uVar15;
        param_2[-1] = (char)(uVar15 >> 8) + 0x10;
        param_2 = param_2 + -2;
      }
    }
    else {
      pbVar23 = param_2 + -1;
      bVar14 = (byte)uVar15 * '\x10';
      if (uVar9 < 0x10) {
        bVar7 = 0xf - (char)uVar9;
        if (uVar15 < 0x10) {
          *pbVar23 = bVar7 | bVar14;
          param_2 = pbVar23;
        }
        else {
          bVar3 = (byte)uVar15 & 0x1e;
          param_2 = param_2 + -2;
          *param_2 = bVar14 + bVar3 * -8 | 0xf;
          *pbVar23 = bVar7 | bVar3 * '\b';
        }
      }
      else {
        param_2 = param_2 + -2;
        *param_2 = 0x1eU - (char)uVar9 | bVar14;
        *pbVar23 = 0;
      }
    }
    if (0x7f < uVar20) {
      lVar21 = (longlong)param_2 - (longlong)pcVar11;
      do {
        iVar8 = 0x700;
        if (uVar20 >> 7 < 0x700) {
          iVar8 = (int)(uVar20 >> 7);
        }
        if (lVar21 < 2) goto LAB_145484df5;
        lVar21 = lVar21 + -2;
        param_2[-2] = (byte)(iVar8 + -1);
        param_2[-1] = (char)((uint)(iVar8 + -1) >> 8) + 9;
        param_2 = param_2 + -2;
        uVar20 = uVar20 - (uint)(iVar8 << 7);
      } while (0x7f < uVar20);
    }
    if (param_2 == (byte *)0x0) goto LAB_145484df5;
  }
  goto joined_r0x000145484643;
code_r0x00014548470b:
  param_3 = param_3 + 2;
  if (puVar17 <= param_3) goto joined_r0x000145484717;
  goto LAB_1454846f0;
  while( true ) {
    lVar21 = lVar21 + -2;
    param_2[-2] = (byte)(iVar8 + -1);
    param_2[-1] = (char)((uint)(iVar8 + -1) >> 8) + 2;
    param_2 = param_2 + -2;
    uVar9 = uVar9 - (uint)(iVar8 << 6);
    if (uVar9 < 0x40) break;
LAB_145484a40:
    iVar8 = 0x700;
    if (uVar9 >> 6 < 0x700) {
      iVar8 = (int)(uVar9 >> 6);
    }
    if (lVar21 < 4) goto LAB_145484df5;
  }
LAB_145484a87:
  if (uVar9 != 0) {
LAB_145484a8c:
    param_2[-2] = (byte)uVar9;
    param_2[-1] = (char)(uVar9 >> 8) + 0x10;
    param_2 = param_2 + -2;
  }
  if (param_2 != (byte *)0x0) {
LAB_145484aaa:
    iVar8 = 0;
    local_4b0 = local_4b0 + -(longlong)param_2;
    lVar21 = (longlong)pcVar22 - (longlong)local_4c0;
    pcVar18 = (char *)0x0;
    local_4c4 = 1.0737418e+09;
    fVar44 = (float)(lVar21 + 1);
    pcVar12 = (char *)0x0;
    pcVar11 = (char *)0x0;
    if ((((param_9 & 8) != 0) && (pcVar12 = pcVar18, pcVar11 = (char *)0x0, 0x1f < lVar21)) &&
       ((longlong)(local_4b0 + lVar21) < 0xc001)) {
      pcVar11 = (char *)param_8[1];
      uVar20 = lVar21 + 0xfU & 0xfffffffffffffff0;
      uVar9 = (ulonglong)(-(uint)(param_8[4] != 0) & 0x10);
      if ((char *)(param_8[3] + *param_8) < pcVar11 + uVar20 + uVar9) {
        if ((int)param_8[5] == 0) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar11 = (char *)(*(code *)PTR_FUN_14c6d9350)(uVar20,0x10);
          if (pcVar11 == (char *)0x0) {
            FUN_144d95420(uVar20);
          }
        }
      }
      else {
        puVar16 = (ulonglong *)(pcVar11 + uVar20);
        param_8[1] = (longlong)puVar16;
        if (param_8[4] != 0) {
          *puVar16 = uVar20;
          puVar16[1] = 0;
          param_8[1] = param_8[1] + uVar9;
          puVar16 = (ulonglong *)param_8[1];
        }
        puVar10 = (ulonglong *)param_8[2];
        if ((ulonglong *)param_8[2] <= puVar16) {
          puVar10 = puVar16;
        }
        param_8[2] = (longlong)puVar10;
      }
      pcVar12 = local_4c0;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_1451b0f40(local_4c0,lVar21,local_488,0x100);
      iVar8 = FUN_1451c6730();
      if (iVar8 == (int)lVar21) {
        local_4c0 = &DAT_00000003;
        fVar24 = (float)(**(code **)(local_4a8 + 8))(lVar21);
        local_4c4 = fVar24 * param_5 + 6.0;
        *pcVar11 = *pcVar12;
        pcVar12 = &DAT_00000001;
        iVar8 = (int)local_4c0;
      }
      else {
        local_4d8 = param_10;
        local_4e0 = param_8;
        local_4f0 = local_4b8;
        local_4e8 = param_9;
        local_500 = &local_4c0;
        local_4f8 = 0x53800000;
        local_508 = local_4a8;
        local_518 = local_488;
        local_4b8[0] = 0;
        local_510 = param_5;
        local_4c0 = (char *)CONCAT44(local_4c0._4_4_,fVar44);
        pcVar12 = (char *)FUN_14547fd80(pcVar11,pcVar11 + lVar21,pcVar12);
        if (((longlong)pcVar12 < 0) || (lVar21 <= (longlong)pcVar12)) {
          iVar8 = 0;
          pcVar12 = pcVar18;
        }
        else {
          local_4c4 = local_4c0._0_4_;
          iVar8 = local_4b8[0];
        }
      }
    }
    puVar5 = local_498;
    pbVar23 = local_4b0;
    fVar24 = (float)(longlong)local_4b0;
    if (local_4c4 < fVar44) {
      uVar15 = (uint)(pcVar12 + ((longlong)iVar8 * 0x40000 + lVar21) * 0x40000 + -0x40000);
      *local_498 = (char)((ulonglong)
                          (pcVar12 + ((longlong)iVar8 * 0x40000 + lVar21) * 0x40000 + -0x40000) >>
                         0x20);
      *(uint *)(local_498 + 1) =
           uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      memcpy(local_498 + 5,pcVar11,(size_t)pcVar12);
      lVar13 = FUN_1451b3940(puVar5,pcVar12 + 5,&local_4c4);
      memmove(puVar5 + lVar13,param_2,(size_t)pbVar23);
      fVar44 = local_4c4;
    }
    else {
      memmove(pcVar22,param_2,(size_t)local_4b0);
    }
    pfVar6 = local_490;
    *local_490 = fVar24 + fVar44;
    fVar44 = (float)(**(code **)(local_4a8 + 0x60))(local_4a0);
    *pfVar6 = fVar44 * param_5 + 5.0 + *pfVar6;
    if (pcVar11 != (char *)0x0) {
      FUN_144d950a0(param_8,pcVar11,lVar21);
    }
  }
LAB_145484df5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88 ^ (ulonglong)auStack_538);
}



// FUNCTION 145484e20 FUN_145484e20 body=1960 status=ok
// SIG undefined FUN_145484e20(void)

void FUN_145484e20(byte *param_1,longlong param_2,undefined8 *param_3,size_t param_4,byte *param_5,
                  longlong param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort *puVar12;
  ushort *puVar13;
  undefined4 *puVar14;
  size_t sVar15;
  size_t _Size;
  byte *_Src;
  undefined8 *puVar16;
  undefined8 *puVar17;
  size_t sVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined1 local_2e0;
  byte *local_2d8;
  longlong local_2d0;
  byte *local_2c8;
  longlong local_2c0;
  size_t local_2b8;
  undefined8 *local_2b0;
  longlong local_2a8;
  byte local_298 [130];
  ushort local_216 [7];
  undefined8 local_208 [52];
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2a8 = param_2;
  local_2b8 = param_4;
  local_2b0 = param_3;
  if (param_2 < 2) {
    if (param_2 == 1) {
      memset(param_3,(uint)*param_1,param_4);
    }
  }
  else if (0 < (longlong)param_4) {
    puVar12 = (ushort *)(param_1 + param_2);
    sVar18 = 0;
    _Src = param_1 + 1;
    if (*param_1 != 0) {
      local_2d0 = param_6;
      local_2d8 = param_5;
      local_2e0 = 1;
      local_2c8 = param_5;
      local_2c0 = 0;
      local_2e8 = param_6 - (longlong)param_5;
      lVar5 = FUN_145485600(&local_2c8,param_1,puVar12,&local_2c0);
      if ((lVar5 < 1) ||
         (sVar15 = param_2 - lVar5, param_6 - (longlong)param_5 < (longlong)(sVar15 + local_2c0)))
      goto LAB_1454855b9;
      memcpy(local_2c8 + local_2c0,param_1 + lVar5,sVar15);
      puVar12 = (ushort *)(local_2c8 + local_2c0 + sVar15);
      _Src = local_2c8;
    }
    puVar17 = (undefined8 *)(local_2b8 + (longlong)param_3);
    sVar15 = sVar18;
    if (0x126 < local_2b8) {
      sVar15 = local_2b8 - 0x127;
    }
    puVar16 = (undefined8 *)(sVar15 + (longlong)param_3);
    lVar5 = (longlong)puVar12 - (longlong)_Src;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar23 = 0;
    while ((0x70 < lVar5 && (param_3 < puVar16))) {
      bVar8 = *(byte *)((longlong)puVar12 + -1);
      puVar13 = puVar12;
      if (bVar8 - 1 < 0x2f) {
LAB_145485065:
        if (bVar8 < 0x10) {
          if (bVar8 == 1) {
            bVar8 = *_Src;
            puVar12 = (ushort *)((longlong)puVar13 + -1);
            _Src = _Src + 1;
            uVar19 = CONCAT11(bVar8,bVar8);
            uVar20 = CONCAT22(uVar19,uVar19);
            uVar21 = uVar20;
            uVar22 = uVar20;
            uVar23 = uVar20;
          }
          else {
            puVar12 = puVar13 + -1;
            uVar9 = (uint)*puVar12;
            if (bVar8 < 9) {
              uVar6 = (ulonglong)((uVar9 - 0x1ff) * 0x40);
              if (((longlong)puVar12 - (longlong)_Src < (longlong)uVar6) ||
                 ((longlong)puVar17 - (longlong)param_3 < (longlong)uVar6)) goto LAB_1454855b9;
              uVar4 = *(undefined8 *)(_Src + 8);
              uVar11 = (ulonglong)(-(int)param_3 & 0xf);
              *param_3 = *(undefined8 *)_Src;
              param_3[1] = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar11 + 8);
              *(undefined8 *)(uVar11 + (longlong)param_3) = *(undefined8 *)(_Src + uVar11);
              ((undefined8 *)(uVar11 + (longlong)param_3))[1] = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar11 + 0x10 + 8);
              puVar2 = (undefined8 *)(uVar11 + 0x10 + (longlong)param_3);
              *puVar2 = *(undefined8 *)(_Src + uVar11 + 0x10);
              puVar2[1] = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar11 + 0x20 + 8);
              puVar2 = (undefined8 *)(uVar11 + 0x20 + (longlong)param_3);
              *puVar2 = *(undefined8 *)(_Src + uVar11 + 0x20);
              puVar2[1] = uVar4;
              iVar10 = uVar9 - 0x200;
              if (iVar10 != 0) {
                pbVar7 = _Src + uVar11 + 0x40;
                do {
                  uVar4 = *(undefined8 *)(pbVar7 + -8);
                  pbVar1 = pbVar7 + 0x40;
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x50 - (longlong)_Src)) =
                       *(undefined8 *)(pbVar7 + -0x10);
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x50 - (longlong)_Src) + 8) = uVar4
                  ;
                  uVar4 = *(undefined8 *)(pbVar7 + 8);
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x40 - (longlong)_Src)) =
                       *(undefined8 *)pbVar7;
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x40 - (longlong)_Src) + 8) = uVar4
                  ;
                  uVar4 = *(undefined8 *)(pbVar7 + 0x18);
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x30 - (longlong)_Src)) =
                       *(undefined8 *)(pbVar7 + 0x10);
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x30 - (longlong)_Src) + 8) = uVar4
                  ;
                  uVar4 = *(undefined8 *)(pbVar7 + 0x28);
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x20 - (longlong)_Src)) =
                       *(undefined8 *)(pbVar7 + 0x20);
                  *(undefined8 *)(pbVar1 + (longlong)param_3 + (-0x20 - (longlong)_Src) + 8) = uVar4
                  ;
                  iVar10 = iVar10 + -1;
                  pbVar7 = pbVar1;
                } while (iVar10 != 0);
              }
              param_3 = (undefined8 *)((longlong)param_3 + uVar6);
              _Src = _Src + uVar6;
              uVar4 = *(undefined8 *)(_Src + -8);
              param_3[-2] = *(undefined8 *)(_Src + -0x10);
              param_3[-1] = uVar4;
            }
            else {
              uVar6 = (ulonglong)((uVar9 - 0x8ff) * 0x80);
              if ((longlong)puVar17 - (longlong)param_3 < (longlong)uVar6) goto LAB_1454855b9;
              *(undefined4 *)param_3 = uVar20;
              *(undefined4 *)((longlong)param_3 + 4) = uVar21;
              *(undefined4 *)(param_3 + 1) = uVar22;
              *(undefined4 *)((longlong)param_3 + 0xc) = uVar23;
              uVar11 = (longlong)param_3 + 0xf;
              param_3 = (undefined8 *)((longlong)param_3 + uVar6);
              *(undefined4 *)(param_3 + -8) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0x3c) = uVar21;
              *(undefined4 *)(param_3 + -7) = uVar22;
              *(undefined4 *)((longlong)param_3 + -0x34) = uVar23;
              *(undefined4 *)(param_3 + -6) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0x2c) = uVar21;
              *(undefined4 *)(param_3 + -5) = uVar22;
              *(undefined4 *)((longlong)param_3 + -0x24) = uVar23;
              *(undefined4 *)(param_3 + -4) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0x1c) = uVar21;
              *(undefined4 *)(param_3 + -3) = uVar22;
              *(undefined4 *)((longlong)param_3 + -0x14) = uVar23;
              *(undefined4 *)(param_3 + -2) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0xc) = uVar21;
              *(undefined4 *)(param_3 + -1) = uVar22;
              *(undefined4 *)((longlong)param_3 + -4) = uVar23;
              puVar14 = (undefined4 *)((uVar11 & 0xfffffffffffffff0) + 0x20);
              do {
                puVar14[-8] = uVar20;
                puVar14[-7] = uVar21;
                puVar14[-6] = uVar22;
                puVar14[-5] = uVar23;
                puVar14[-4] = uVar20;
                puVar14[-3] = uVar21;
                puVar14[-2] = uVar22;
                puVar14[-1] = uVar23;
                *puVar14 = uVar20;
                puVar14[1] = uVar21;
                puVar14[2] = uVar22;
                puVar14[3] = uVar23;
                puVar14[4] = uVar20;
                puVar14[5] = uVar21;
                puVar14[6] = uVar22;
                puVar14[7] = uVar23;
                puVar2 = (undefined8 *)(puVar14 + 8);
                puVar14 = puVar14 + 0x10;
              } while (puVar2 < param_3 + -8);
            }
          }
        }
        else {
          uVar3 = puVar13[-1];
          puVar12 = puVar13 + -1;
          uVar4 = *(undefined8 *)(_Src + 8);
          uVar6 = (ulonglong)(uVar3 - 0x1000 & 0x3f);
          *param_3 = *(undefined8 *)_Src;
          param_3[1] = uVar4;
          uVar11 = (ulonglong)(uVar3 - 0x1000 >> 6);
          uVar4 = *(undefined8 *)(_Src + 0x18);
          param_3[2] = *(undefined8 *)(_Src + 0x10);
          param_3[3] = uVar4;
          uVar4 = *(undefined8 *)(_Src + 0x28);
          param_3[4] = *(undefined8 *)(_Src + 0x20);
          param_3[5] = uVar4;
          pbVar7 = _Src + 0x30;
          uVar4 = *(undefined8 *)(_Src + 0x38);
          _Src = _Src + uVar6;
          param_3[6] = *(undefined8 *)pbVar7;
          param_3[7] = uVar4;
          puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
          *puVar14 = uVar20;
          puVar14[1] = uVar21;
          puVar14[2] = uVar22;
          puVar14[3] = uVar23;
          puVar14[4] = uVar20;
          puVar14[5] = uVar21;
          puVar14[6] = uVar22;
          puVar14[7] = uVar23;
          puVar14[8] = uVar20;
          puVar14[9] = uVar21;
          puVar14[10] = uVar22;
          puVar14[0xb] = uVar23;
          if (0x30 < uVar11) {
            uVar6 = (longlong)puVar14 + 0xfU & 0xfffffffffffffff0;
            *(undefined4 *)(uVar6 + 0x20) = uVar20;
            *(undefined4 *)(uVar6 + 0x24) = uVar21;
            *(undefined4 *)(uVar6 + 0x28) = uVar22;
            *(undefined4 *)(uVar6 + 0x2c) = uVar23;
            *(undefined4 *)(uVar6 + 0x30) = uVar20;
            *(undefined4 *)(uVar6 + 0x34) = uVar21;
            *(undefined4 *)(uVar6 + 0x38) = uVar22;
            *(undefined4 *)(uVar6 + 0x3c) = uVar23;
            *(undefined4 *)(uVar6 + 0x40) = uVar20;
            *(undefined4 *)(uVar6 + 0x44) = uVar21;
            *(undefined4 *)(uVar6 + 0x48) = uVar22;
            *(undefined4 *)(uVar6 + 0x4c) = uVar23;
            *(undefined4 *)(uVar6 + 0x50) = uVar20;
            *(undefined4 *)(uVar6 + 0x54) = uVar21;
            *(undefined4 *)(uVar6 + 0x58) = uVar22;
            *(undefined4 *)(uVar6 + 0x5c) = uVar23;
            *(undefined4 *)(uVar6 + 0x60) = uVar20;
            *(undefined4 *)(uVar6 + 100) = uVar21;
            *(undefined4 *)(uVar6 + 0x68) = uVar22;
            *(undefined4 *)(uVar6 + 0x6c) = uVar23;
            *(undefined4 *)(uVar6 + 0x70) = uVar20;
            *(undefined4 *)(uVar6 + 0x74) = uVar21;
            *(undefined4 *)(uVar6 + 0x78) = uVar22;
            *(undefined4 *)(uVar6 + 0x7c) = uVar23;
          }
          param_3 = (undefined8 *)((longlong)puVar14 + uVar11);
        }
      }
      else {
        uVar4 = *(undefined8 *)(_Src + 8);
        uVar6 = (ulonglong)(-(uint)bVar8 - 1 & 0xf);
        *param_3 = *(undefined8 *)_Src;
        param_3[1] = uVar4;
        puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
        _Src = _Src + uVar6;
        *puVar14 = uVar20;
        puVar14[1] = uVar21;
        puVar14[2] = uVar22;
        puVar14[3] = uVar23;
        param_3 = (undefined8 *)((longlong)puVar14 + (ulonglong)(bVar8 >> 4));
        bVar8 = (byte)puVar12[-1];
        if (bVar8 - 1 < 0x2f) {
          puVar13 = (ushort *)((longlong)puVar12 + -1);
          goto LAB_145485065;
        }
        uVar4 = *(undefined8 *)(_Src + 8);
        puVar13 = (ushort *)((longlong)puVar12 + -3);
        uVar6 = (ulonglong)(-(uint)bVar8 - 1 & 0xf);
        *param_3 = *(undefined8 *)_Src;
        param_3[1] = uVar4;
        puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
        _Src = _Src + uVar6;
        *puVar14 = uVar20;
        puVar14[1] = uVar21;
        puVar14[2] = uVar22;
        puVar14[3] = uVar23;
        param_3 = (undefined8 *)((longlong)puVar14 + (ulonglong)(bVar8 >> 4));
        bVar8 = *(byte *)puVar13;
        if (bVar8 - 1 < 0x2f) {
          puVar13 = puVar12 + -1;
          goto LAB_145485065;
        }
        uVar4 = *(undefined8 *)(_Src + 8);
        puVar12 = puVar12 + -2;
        uVar6 = (ulonglong)(-(uint)bVar8 - 1 & 0xf);
        *param_3 = *(undefined8 *)_Src;
        param_3[1] = uVar4;
        puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
        _Src = _Src + uVar6;
        *puVar14 = uVar20;
        puVar14[1] = uVar21;
        puVar14[2] = uVar22;
        puVar14[3] = uVar23;
        param_3 = (undefined8 *)((longlong)puVar14 + (ulonglong)(bVar8 >> 4));
        bVar8 = (byte)*puVar12;
        if (bVar8 - 1 < 0x2f) goto LAB_145485065;
        uVar4 = *(undefined8 *)(_Src + 8);
        uVar6 = (ulonglong)(-(uint)bVar8 - 1 & 0xf);
        *param_3 = *(undefined8 *)_Src;
        param_3[1] = uVar4;
        puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
        _Src = _Src + uVar6;
        *puVar14 = uVar20;
        puVar14[1] = uVar21;
        puVar14[2] = uVar22;
        puVar14[3] = uVar23;
        param_3 = (undefined8 *)((longlong)puVar14 + (ulonglong)(bVar8 >> 4));
      }
      lVar5 = (longlong)puVar12 - (longlong)_Src;
    }
    local_298[0x70] = 0;
    local_298[0x71] = 0;
    local_298[0] = 0;
    local_298[1] = 0;
    local_298[2] = 0;
    local_298[3] = 0;
    local_298[4] = 0;
    local_298[5] = 0;
    local_298[6] = 0;
    local_298[7] = 0;
    local_298[8] = 0;
    local_298[9] = 0;
    local_298[10] = 0;
    local_298[0xb] = 0;
    local_298[0xc] = 0;
    local_298[0xd] = 0;
    local_298[0xe] = 0;
    local_298[0xf] = 0;
    local_298[0x10] = 0;
    local_298[0x11] = 0;
    local_298[0x12] = 0;
    local_298[0x13] = 0;
    local_298[0x14] = 0;
    local_298[0x15] = 0;
    local_298[0x16] = 0;
    local_298[0x17] = 0;
    local_298[0x18] = 0;
    local_298[0x19] = 0;
    local_298[0x1a] = 0;
    local_298[0x1b] = 0;
    local_298[0x1c] = 0;
    local_298[0x1d] = 0;
    local_298[0x1e] = 0;
    local_298[0x1f] = 0;
    sVar15 = sVar18;
    if (0xcd < local_2b8) {
      sVar15 = local_2b8 - 0xce;
    }
    local_298[0x20] = 0;
    local_298[0x21] = 0;
    local_298[0x22] = 0;
    local_298[0x23] = 0;
    local_298[0x24] = 0;
    local_298[0x25] = 0;
    local_298[0x26] = 0;
    local_298[0x27] = 0;
    local_298[0x28] = 0;
    local_298[0x29] = 0;
    local_298[0x2a] = 0;
    local_298[0x2b] = 0;
    local_298[0x2c] = 0;
    local_298[0x2d] = 0;
    local_298[0x2e] = 0;
    local_298[0x2f] = 0;
    puVar16 = (undefined8 *)(sVar15 + (longlong)local_2b0);
    local_298[0x30] = 0;
    local_298[0x31] = 0;
    local_298[0x32] = 0;
    local_298[0x33] = 0;
    local_298[0x34] = 0;
    local_298[0x35] = 0;
    local_298[0x36] = 0;
    local_298[0x37] = 0;
    local_298[0x38] = 0;
    local_298[0x39] = 0;
    local_298[0x3a] = 0;
    local_298[0x3b] = 0;
    local_298[0x3c] = 0;
    local_298[0x3d] = 0;
    local_298[0x3e] = 0;
    local_298[0x3f] = 0;
    local_298[0x40] = 0;
    local_298[0x41] = 0;
    local_298[0x42] = 0;
    local_298[0x43] = 0;
    local_298[0x44] = 0;
    local_298[0x45] = 0;
    local_298[0x46] = 0;
    local_298[0x47] = 0;
    local_298[0x48] = 0;
    local_298[0x49] = 0;
    local_298[0x4a] = 0;
    local_298[0x4b] = 0;
    local_298[0x4c] = 0;
    local_298[0x4d] = 0;
    local_298[0x4e] = 0;
    local_298[0x4f] = 0;
    local_298[0x50] = 0;
    local_298[0x51] = 0;
    local_298[0x52] = 0;
    local_298[0x53] = 0;
    local_298[0x54] = 0;
    local_298[0x55] = 0;
    local_298[0x56] = 0;
    local_298[0x57] = 0;
    local_298[0x58] = 0;
    local_298[0x59] = 0;
    local_298[0x5a] = 0;
    local_298[0x5b] = 0;
    local_298[0x5c] = 0;
    local_298[0x5d] = 0;
    local_298[0x5e] = 0;
    local_298[0x5f] = 0;
    local_298[0x60] = 0;
    local_298[0x61] = 0;
    local_298[0x62] = 0;
    local_298[99] = 0;
    local_298[100] = 0;
    local_298[0x65] = 0;
    local_298[0x66] = 0;
    local_298[0x67] = 0;
    local_298[0x68] = 0;
    local_298[0x69] = 0;
    local_298[0x6a] = 0;
    local_298[0x6b] = 0;
    local_298[0x6c] = 0;
    local_298[0x6d] = 0;
    local_298[0x6e] = 0;
    local_298[0x6f] = 0;
    local_298[0x72] = 0;
    local_298[0x73] = 0;
    local_298[0x74] = 0;
    local_298[0x75] = 0;
    local_298[0x76] = 0;
    local_298[0x77] = 0;
    local_298[0x78] = 0;
    local_298[0x79] = 0;
    local_298[0x7a] = 0;
    local_298[0x7b] = 0;
    local_298[0x7c] = 0;
    local_298[0x7d] = 0;
    local_298[0x7e] = 0;
    local_298[0x7f] = 0;
    local_298[0x80] = 0;
    local_298[0x81] = 0;
    sVar15 = sVar18;
    do {
      _Size = (longlong)puVar12 - (longlong)_Src;
      if ((longlong)_Size < 0x41) {
        if (sVar18 != 0) break;
        memcpy(local_298,_Src,_Size);
        memcpy((void *)((longlong)local_216 - _Size),_Src,_Size);
        _Src = local_298;
        sVar18 = 0x82 - _Size;
        puVar12 = local_216;
      }
      if (puVar16 <= param_3) {
        if (param_3 == puVar17) {
          if (((longlong)puVar12 - (longlong)_Src == sVar18) && (sVar15 != 0)) {
            memcpy((void *)((local_2b8 - sVar15) + (longlong)local_2b0),local_208,sVar15);
          }
          break;
        }
        if (sVar15 != 0) break;
        sVar15 = (longlong)puVar17 - (longlong)param_3;
        puVar17 = (undefined8 *)((longlong)local_208 + sVar15);
        param_3 = local_208;
        puVar16 = puVar17;
      }
      bVar8 = *(byte *)((longlong)puVar12 + -1);
      if (bVar8 - 1 < 0x2f) {
        if (bVar8 < 0x10) {
          if (bVar8 == 1) {
            bVar8 = *_Src;
            puVar12 = (ushort *)((longlong)puVar12 + -1);
            _Src = _Src + 1;
            uVar19 = CONCAT11(bVar8,bVar8);
            uVar20 = CONCAT22(uVar19,uVar19);
            uVar21 = uVar20;
            uVar22 = uVar20;
            uVar23 = uVar20;
          }
          else {
            puVar12 = puVar12 + -1;
            uVar9 = (uint)*puVar12;
            if (bVar8 < 9) {
              uVar6 = (ulonglong)((uVar9 - 0x1ff) * 0x40);
              if (((longlong)puVar12 - (longlong)_Src < (longlong)uVar6) ||
                 ((longlong)puVar17 - (longlong)param_3 < (longlong)uVar6)) break;
              uVar4 = *(undefined8 *)(_Src + 8);
              uVar11 = (ulonglong)(-(int)param_3 & 0xf);
              *param_3 = *(undefined8 *)_Src;
              param_3[1] = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar11 + 8);
              *(undefined8 *)(uVar11 + (longlong)param_3) = *(undefined8 *)(_Src + uVar11);
              ((undefined8 *)(uVar11 + (longlong)param_3))[1] = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar11 + 0x10 + 8);
              puVar2 = (undefined8 *)(uVar11 + 0x10 + (longlong)param_3);
              *puVar2 = *(undefined8 *)(_Src + uVar11 + 0x10);
              puVar2[1] = uVar4;
              uVar4 = *(undefined8 *)(_Src + uVar11 + 0x20 + 8);
              puVar2 = (undefined8 *)(uVar11 + 0x20 + (longlong)param_3);
              *puVar2 = *(undefined8 *)(_Src + uVar11 + 0x20);
              puVar2[1] = uVar4;
              iVar10 = uVar9 - 0x200;
              if (iVar10 != 0) {
                lVar5 = (longlong)param_3 - (longlong)_Src;
                pbVar7 = _Src + uVar11 + 0x40;
                do {
                  uVar4 = *(undefined8 *)(pbVar7 + -8);
                  *(undefined8 *)(pbVar7 + lVar5 + -0x10) = *(undefined8 *)(pbVar7 + -0x10);
                  *(undefined8 *)(pbVar7 + lVar5 + -0x10 + 8) = uVar4;
                  uVar4 = *(undefined8 *)(pbVar7 + 8);
                  *(undefined8 *)(pbVar7 + lVar5) = *(undefined8 *)pbVar7;
                  *(undefined8 *)(pbVar7 + lVar5 + 8) = uVar4;
                  uVar4 = *(undefined8 *)(pbVar7 + 0x18);
                  *(undefined8 *)(pbVar7 + lVar5 + 0x10) = *(undefined8 *)(pbVar7 + 0x10);
                  *(undefined8 *)(pbVar7 + lVar5 + 0x10 + 8) = uVar4;
                  uVar4 = *(undefined8 *)(pbVar7 + 0x28);
                  *(undefined8 *)(pbVar7 + lVar5 + 0x20) = *(undefined8 *)(pbVar7 + 0x20);
                  *(undefined8 *)(pbVar7 + lVar5 + 0x20 + 8) = uVar4;
                  iVar10 = iVar10 + -1;
                  pbVar7 = pbVar7 + 0x40;
                } while (iVar10 != 0);
              }
              param_3 = (undefined8 *)((longlong)param_3 + uVar6);
              _Src = _Src + uVar6;
              uVar4 = *(undefined8 *)(_Src + -8);
              param_3[-2] = *(undefined8 *)(_Src + -0x10);
              param_3[-1] = uVar4;
            }
            else {
              uVar6 = (ulonglong)((uVar9 - 0x8ff) * 0x80);
              if ((longlong)puVar17 - (longlong)param_3 < (longlong)uVar6) break;
              *(undefined4 *)param_3 = uVar20;
              *(undefined4 *)((longlong)param_3 + 4) = uVar21;
              *(undefined4 *)(param_3 + 1) = uVar22;
              *(undefined4 *)((longlong)param_3 + 0xc) = uVar23;
              uVar11 = (longlong)param_3 + 0xf;
              param_3 = (undefined8 *)((longlong)param_3 + uVar6);
              *(undefined4 *)(param_3 + -8) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0x3c) = uVar21;
              *(undefined4 *)(param_3 + -7) = uVar22;
              *(undefined4 *)((longlong)param_3 + -0x34) = uVar23;
              *(undefined4 *)(param_3 + -6) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0x2c) = uVar21;
              *(undefined4 *)(param_3 + -5) = uVar22;
              *(undefined4 *)((longlong)param_3 + -0x24) = uVar23;
              *(undefined4 *)(param_3 + -4) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0x1c) = uVar21;
              *(undefined4 *)(param_3 + -3) = uVar22;
              *(undefined4 *)((longlong)param_3 + -0x14) = uVar23;
              *(undefined4 *)(param_3 + -2) = uVar20;
              *(undefined4 *)((longlong)param_3 + -0xc) = uVar21;
              *(undefined4 *)(param_3 + -1) = uVar22;
              *(undefined4 *)((longlong)param_3 + -4) = uVar23;
              puVar14 = (undefined4 *)((uVar11 & 0xfffffffffffffff0) + 0x20);
              do {
                puVar14[-8] = uVar20;
                puVar14[-7] = uVar21;
                puVar14[-6] = uVar22;
                puVar14[-5] = uVar23;
                puVar14[-4] = uVar20;
                puVar14[-3] = uVar21;
                puVar14[-2] = uVar22;
                puVar14[-1] = uVar23;
                *puVar14 = uVar20;
                puVar14[1] = uVar21;
                puVar14[2] = uVar22;
                puVar14[3] = uVar23;
                puVar14[4] = uVar20;
                puVar14[5] = uVar21;
                puVar14[6] = uVar22;
                puVar14[7] = uVar23;
                puVar2 = (undefined8 *)(puVar14 + 8);
                puVar14 = puVar14 + 0x10;
              } while (puVar2 < param_3 + -8);
            }
          }
        }
        else {
          uVar3 = puVar12[-1];
          puVar12 = puVar12 + -1;
          uVar4 = *(undefined8 *)(_Src + 8);
          uVar6 = (ulonglong)(uVar3 - 0x1000 & 0x3f);
          *param_3 = *(undefined8 *)_Src;
          param_3[1] = uVar4;
          uVar11 = (ulonglong)(uVar3 - 0x1000 >> 6);
          uVar4 = *(undefined8 *)(_Src + 0x18);
          param_3[2] = *(undefined8 *)(_Src + 0x10);
          param_3[3] = uVar4;
          uVar4 = *(undefined8 *)(_Src + 0x28);
          param_3[4] = *(undefined8 *)(_Src + 0x20);
          param_3[5] = uVar4;
          pbVar7 = _Src + 0x30;
          uVar4 = *(undefined8 *)(_Src + 0x38);
          _Src = _Src + uVar6;
          param_3[6] = *(undefined8 *)pbVar7;
          param_3[7] = uVar4;
          puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
          *puVar14 = uVar20;
          puVar14[1] = uVar21;
          puVar14[2] = uVar22;
          puVar14[3] = uVar23;
          puVar14[4] = uVar20;
          puVar14[5] = uVar21;
          puVar14[6] = uVar22;
          puVar14[7] = uVar23;
          puVar14[8] = uVar20;
          puVar14[9] = uVar21;
          puVar14[10] = uVar22;
          puVar14[0xb] = uVar23;
          if (0x30 < uVar11) {
            uVar6 = (longlong)puVar14 + 0xfU & 0xfffffffffffffff0;
            *(undefined4 *)(uVar6 + 0x20) = uVar20;
            *(undefined4 *)(uVar6 + 0x24) = uVar21;
            *(undefined4 *)(uVar6 + 0x28) = uVar22;
            *(undefined4 *)(uVar6 + 0x2c) = uVar23;
            *(undefined4 *)(uVar6 + 0x30) = uVar20;
            *(undefined4 *)(uVar6 + 0x34) = uVar21;
            *(undefined4 *)(uVar6 + 0x38) = uVar22;
            *(undefined4 *)(uVar6 + 0x3c) = uVar23;
            *(undefined4 *)(uVar6 + 0x40) = uVar20;
            *(undefined4 *)(uVar6 + 0x44) = uVar21;
            *(undefined4 *)(uVar6 + 0x48) = uVar22;
            *(undefined4 *)(uVar6 + 0x4c) = uVar23;
            *(undefined4 *)(uVar6 + 0x50) = uVar20;
            *(undefined4 *)(uVar6 + 0x54) = uVar21;
            *(undefined4 *)(uVar6 + 0x58) = uVar22;
            *(undefined4 *)(uVar6 + 0x5c) = uVar23;
            *(undefined4 *)(uVar6 + 0x60) = uVar20;
            *(undefined4 *)(uVar6 + 100) = uVar21;
            *(undefined4 *)(uVar6 + 0x68) = uVar22;
            *(undefined4 *)(uVar6 + 0x6c) = uVar23;
            *(undefined4 *)(uVar6 + 0x70) = uVar20;
            *(undefined4 *)(uVar6 + 0x74) = uVar21;
            *(undefined4 *)(uVar6 + 0x78) = uVar22;
            *(undefined4 *)(uVar6 + 0x7c) = uVar23;
          }
          param_3 = (undefined8 *)((longlong)puVar14 + uVar11);
        }
      }
      else {
        uVar4 = *(undefined8 *)(_Src + 8);
        uVar6 = (ulonglong)(-(uint)bVar8 - 1 & 0xf);
        *param_3 = *(undefined8 *)_Src;
        param_3[1] = uVar4;
        puVar14 = (undefined4 *)((longlong)param_3 + uVar6);
        _Src = _Src + uVar6;
        *puVar14 = uVar20;
        puVar14[1] = uVar21;
        puVar14[2] = uVar22;
        puVar14[3] = uVar23;
        param_3 = (undefined8 *)((longlong)puVar14 + (ulonglong)(bVar8 >> 4));
        puVar12 = (ushort *)((longlong)puVar12 + -1);
      }
    } while( true );
  }
LAB_1454855b9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_308);
}



// FUNCTION 145485600 FUN_145485600 body=449 status=ok
// SIG undefined FUN_145485600(void)

byte * FUN_145485600(undefined8 *param_1,uint *param_2,byte *param_3,size_t *param_4,
                    longlong param_5,char param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  longlong lVar6;
  size_t _Size;
  ushort *_Src;
  undefined8 uVar7;
  char *pcVar8;
  
  lVar6 = (longlong)param_3 - (longlong)param_2;
  if (lVar6 < 2) {
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto code_r0x000145485720;
    pcVar8 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    uVar7 = 0x35;
  }
  else {
    bVar3 = (byte)*param_2;
    bVar5 = bVar3 >> 4;
    if (0x7f < bVar3) {
      bVar3 = bVar5 & 7;
      bVar5 = bVar5 & 7;
      if (bVar3 != 0) {
LAB_145485774:
        pbVar4 = (byte *)FUN_1451b3f20(bVar5,param_1,param_2,param_3,param_4,param_5,param_7,param_8
                                      );
        return pbVar4;
      }
      _Src = (ushort *)((longlong)param_2 + 2);
      _Size = (size_t)((ushort)((ushort)*param_2 >> 8 | (ushort)*param_2 << 8) & 0xfff);
      if (param_5 < (longlong)_Size) {
        return (byte *)0xffffffffffffffff;
      }
      if (param_3 < (byte *)(_Size + (longlong)_Src)) {
        return (byte *)0xffffffffffffffff;
      }
LAB_145485698:
      if (param_6 == '\0') {
        *param_1 = _Src;
        *param_4 = _Size;
        return (byte *)((longlong)_Src + (_Size - (longlong)param_2));
      }
      memmove((void *)*param_1,_Src,_Size);
      *param_4 = _Size;
      return (byte *)((longlong)_Src + (_Size - (longlong)param_2));
    }
    if (3 < lVar6) {
      if (bVar5 != 0) goto LAB_145485774;
      uVar1 = *param_2;
      _Src = (ushort *)((longlong)param_2 + 3);
      uVar2 = (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8;
      _Size = (size_t)((uVar2 | uVar1 << 0x18 & 0x3ffff00) >> 8);
      if (0x3ffff < (uVar2 | uVar1 << 0x18) >> 8) {
        return (byte *)0xffffffffffffffff;
      }
      if (param_5 < (longlong)_Size) {
        return (byte *)0xffffffffffffffff;
      }
      if ((longlong)param_3 - (longlong)_Src < (longlong)_Size) {
        return (byte *)0xffffffffffffffff;
      }
      goto LAB_145485698;
    }
    if (lVar6 != 3) {
      return (byte *)0xffffffffffffffff;
    }
    if (CONCAT21(CONCAT11(bVar3,*(byte *)((longlong)param_2 + 1)),*(byte *)((longlong)param_2 + 2))
        == 0) {
      *param_1 = 0;
      *param_4 = 0;
      return &DAT_00000003;
    }
    FUN_144d94340();
    if (PTR_FUN_14c6d9368 == (undefined *)0x0) goto code_r0x000145485720;
    pcVar8 = "OODLE ERROR : corruption : header == 0\n";
    uVar7 = 0x78;
  }
  (*(code *)PTR_FUN_14c6d9368)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.inl",uVar7,pcVar8)
  ;
code_r0x000145485720:
  FUN_144d94360();
  return (byte *)0xffffffffffffffff;
}



// FUNCTION 1454857d0 FUN_1454857d0 body=201 status=ok
// SIG undefined FUN_1454857d0(void)

void FUN_1454857d0(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68 [4];
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 == '\0') {
    (*param_2)(param_3);
  }
  else {
    if (param_6 != 0) {
      local_68[0] = param_6;
    }
    uVar1 = 0;
    uVar5 = 0;
    uVar3 = (uint)(param_6 != 0);
    if (param_7 != 0) {
      uVar3 = uVar3 + 1;
      local_68[param_6 != 0] = param_7;
    }
    if (uVar3 != 0) {
      plVar4 = local_48;
      uVar6 = uVar1;
      do {
        if (local_68[uVar1] != 0) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          *plVar4 = local_68[uVar1];
          plVar4 = plVar4 + 1;
        }
        uVar5 = (undefined4)uVar6;
        uVar1 = uVar1 + 1;
      } while ((longlong)uVar1 < (longlong)(ulonglong)uVar3);
    }
    local_78 = param_4;
    uVar2 = (*(code *)PTR_FUN_14c6d9370)(param_2,param_3,local_48,uVar5);
    *param_1 = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 1454858c0 FUN_1454858c0 body=1239 status=ok
// SIG undefined FUN_1454858c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1454858c0(undefined8 *param_1)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong *puVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  char cVar11;
  char cVar24;
  undefined4 uVar12;
  char cVar22;
  char cVar23;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar38 [12];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar49;
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar52;
  int iVar55;
  int iVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar57;
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [12];
  undefined1 auVar70 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined6 uVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar17 [16];
  undefined1 auVar39 [14];
  undefined1 auVar42 [16];
  undefined1 auVar60 [16];
  undefined1 auVar71 [16];
  
  auVar4 = _DAT_149d65700;
  auVar3 = _DAT_149d65680;
  lVar1 = param_1[1];
  puVar8 = (ulonglong *)*param_1;
  if (7 < lVar1 - (longlong)puVar8) {
    pauVar7 = (undefined1 (*) [16])param_1[3];
    if (0xf < param_1[4] - (longlong)pauVar7) {
      pauVar9 = (undefined1 (*) [16])param_1[2];
      pauVar10 = (undefined1 (*) [16])(param_1[4] + -0x10);
      uVar5 = *(int *)((longlong)param_1 + 0x2c) << 8 | *(uint *)(param_1 + 5);
      uVar6 = (ulonglong)uVar5;
      auVar75 = ZEXT416(uVar5);
      auVar21 = _DAT_149d65660;
                    /* WARNING: Read-only address (ram,0x000149a23d40) is written */
                    /* WARNING: Read-only address (ram,0x000149d655c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655d0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655e0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65660) is written */
                    /* WARNING: Read-only address (ram,0x000149d65680) is written */
                    /* WARNING: Read-only address (ram,0x000149d656a0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656b0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656e0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656f0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65700) is written */
      for (; (puVar8 < (ulonglong *)(lVar1 + -7) && (pauVar7 <= pauVar10));
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + uVar6)) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *puVar8;
        auVar59 = *pauVar7;
        auVar70 = *pauVar10;
        auVar68 = ~auVar3 & auVar16;
        auVar53 = auVar16 & auVar3;
        auVar47[0] = (char)(auVar53._0_2_ >> 4) + '\x04';
        auVar47[1] = (auVar53[1] >> 4) + 4;
        auVar47[2] = (char)(auVar53._2_2_ >> 4) + '\x04';
        auVar47[3] = (auVar53[3] >> 4) + 4;
        auVar47[4] = (char)(auVar53._4_2_ >> 4) + '\x04';
        auVar47[5] = (auVar53[5] >> 4) + 4;
        auVar47[6] = (char)(auVar53._6_2_ >> 4) + '\x04';
        auVar47[7] = (auVar53[7] >> 4) + 4;
        auVar47[8] = (char)(auVar53._8_2_ >> 4) + '\x04';
        auVar47[9] = (auVar53[9] >> 4) + 4;
        auVar47[10] = (char)(auVar53._10_2_ >> 4) + '\x04';
        auVar47[0xb] = (auVar53[0xb] >> 4) + 4;
        auVar47[0xc] = (char)(auVar53._12_2_ >> 4) + '\x04';
        auVar47[0xd] = (auVar53[0xd] >> 4) + 4;
        auVar47[0xe] = (char)(auVar53._14_2_ >> 4) + '\x04';
        auVar47[0xf] = (auVar53[0xf] >> 4) + 4;
        auVar40._0_8_ =
             CONCAT17(-(auVar53[7] == auVar3[7]),
                      CONCAT16(-(auVar53[6] == auVar3[6]),
                               CONCAT15(-(auVar53[5] == auVar3[5]),
                                        CONCAT14(-(auVar53[4] == auVar3[4]),
                                                 CONCAT13(-(auVar53[3] == auVar3[3]),
                                                          CONCAT12(-(auVar53[2] == auVar3[2]),
                                                                   CONCAT11(-(auVar53[1] ==
                                                                             auVar3[1]),
                                                                            -(auVar53[0] ==
                                                                             auVar3[0]))))))));
        auVar40[8] = -(auVar53[8] == auVar3[8]);
        auVar40[9] = -(auVar53[9] == auVar3[9]);
        auVar40[10] = -(auVar53[10] == auVar3[10]);
        auVar40[0xb] = -(auVar53[0xb] == auVar3[0xb]);
        auVar40[0xc] = -(auVar53[0xc] == auVar3[0xc]);
        auVar40[0xd] = -(auVar53[0xd] == auVar3[0xd]);
        auVar40[0xe] = -(auVar53[0xe] == auVar3[0xe]);
        auVar40[0xf] = -(auVar53[0xf] == auVar3[0xf]);
        if (auVar40 == (undefined1  [16])0x0) {
          cVar11 = auVar47[0] + auVar75[0];
          cVar22 = auVar47[1] + auVar75[1];
          cVar23 = auVar47[2] + auVar75[2];
          cVar24 = auVar47[3] + auVar75[3];
          cVar25 = auVar47[8] + auVar75[8];
          cVar26 = auVar47[9] + auVar75[9];
          cVar27 = auVar47[10] + auVar75[10];
          cVar28 = auVar47[0xb] + auVar75[0xb];
          cVar29 = auVar47[0xc] + auVar75[0xc];
          cVar30 = auVar47[0xd] + auVar75[0xd];
          cVar34 = cVar11 + cVar23;
          cVar35 = cVar22 + cVar24;
          cVar36 = cVar25 + cVar27;
          cVar37 = cVar26 + cVar28;
          uVar12 = CONCAT13(cVar35,CONCAT12(cVar34,CONCAT11(cVar22,cVar11)));
          uVar13 = CONCAT15(cVar22 + cVar24 + auVar47[5],
                            CONCAT14(cVar11 + cVar23 + auVar47[4],uVar12));
          uVar6 = CONCAT17(cVar35 + auVar47[5] + auVar47[7],
                           CONCAT16(cVar34 + auVar47[4] + auVar47[6],uVar13));
          auVar14._0_10_ = CONCAT19(cVar26,CONCAT18(cVar25,uVar6));
          auVar14[10] = cVar36;
          auVar14[0xb] = cVar37;
          auVar15[0xc] = cVar25 + cVar27 + cVar29;
          auVar15._0_12_ = auVar14;
          auVar15[0xd] = cVar26 + cVar28 + cVar30;
          auVar17[0xe] = cVar36 + cVar29 + auVar47[0xe] + auVar75[0xe];
          auVar17._0_14_ = auVar15;
          auVar17[0xf] = cVar37 + cVar30 + auVar47[0xf] + auVar75[0xf];
          auVar75 = pshufb(auVar21,auVar17);
          auVar45._0_2_ = CONCAT11(cVar22,cVar11) >> 3;
          auVar45._2_2_ = (ushort)((uint)uVar12 >> 0x13);
          auVar45._4_2_ = (ushort)((uint6)uVar13 >> 0x23);
          auVar45._6_2_ = (ushort)(uVar6 >> 0x33);
          auVar45._8_2_ = (ushort)((unkuint10)auVar14._0_10_ >> 0x43);
          auVar45._10_2_ = auVar14._10_2_ >> 3;
          auVar45._12_2_ = auVar15._12_2_ >> 3;
          auVar45._14_2_ = auVar17._14_2_ >> 3;
          auVar40 = pshufb(auVar75,_DAT_149d656f0);
          auVar53 = pshufb(auVar75,_DAT_149d656e0);
          auVar45 = auVar45 & _DAT_149a23d40;
          uVar2 = auVar45._6_2_;
          auVar75._0_8_ = uVar6 >> 0x30;
          auVar75._8_8_ = auVar17._8_8_ >> 0x30;
          auVar16 = pshufb(auVar45,_DAT_149d655c0);
          auVar46 = pshufb(auVar45,_DAT_149d655d0);
          auVar18[0] = auVar16[0];
          auVar18[1] = auVar16[1] + -1;
          auVar18[2] = auVar16[2] + -2;
          auVar18[3] = auVar16[3] + -3;
          auVar18[4] = auVar16[4];
          auVar18[5] = auVar16[5] + -1;
          auVar18[6] = auVar16[6] + -2;
          auVar18[7] = auVar16[7] + -3;
          auVar18[8] = auVar16[8];
          auVar18[9] = auVar16[9] + -1;
          auVar18[10] = auVar16[10] + -2;
          auVar18[0xb] = auVar16[0xb] + -3;
          auVar18[0xc] = auVar16[0xc];
          auVar18[0xd] = auVar16[0xd] + -1;
          auVar18[0xe] = auVar16[0xe] + -2;
          auVar18[0xf] = auVar16[0xf] + -3;
          auVar59 = pshufb(auVar59,auVar18);
          auVar19[0] = '\x0f' - auVar46[0];
          auVar19[1] = '\x10' - auVar46[1];
          auVar19[2] = '\x11' - auVar46[2];
          auVar19[3] = '\x12' - auVar46[3];
          auVar19[4] = '\x0f' - auVar46[4];
          auVar19[5] = '\x10' - auVar46[5];
          auVar19[6] = '\x11' - auVar46[6];
          auVar19[7] = '\x12' - auVar46[7];
          auVar19[8] = '\x0f' - auVar46[8];
          auVar19[9] = '\x10' - auVar46[9];
          auVar19[10] = '\x11' - auVar46[10];
          auVar19[0xb] = '\x12' - auVar46[0xb];
          auVar19[0xc] = '\x0f' - auVar46[0xc];
          auVar19[0xd] = '\x10' - auVar46[0xd];
          auVar19[0xe] = '\x11' - auVar46[0xe];
          auVar19[0xf] = '\x12' - auVar46[0xf];
          auVar70 = pshufb(auVar70,auVar19);
          auVar53 = pmulld(auVar59,auVar53);
          auVar40 = pmulld(auVar70,auVar40);
          auVar59 = pmovzxbd(auVar19,auVar47);
          auVar41._0_4_ = (int)(float)(auVar59._0_4_ * 0x800000 + -0x40800000);
          auVar41._4_4_ = (int)(float)(auVar59._4_4_ * 0x800000 + -0x40800000);
          auVar41._8_4_ = (int)(float)(auVar59._8_4_ * 0x800000 + -0x40800000);
          auVar41._12_4_ = (int)(float)(auVar59._12_4_ * 0x800000 + -0x40800000);
          auVar16 = pshufb(auVar47,auVar4);
          auVar20._12_4_ = auVar40._4_4_ >> 8;
          auVar20._8_4_ = auVar53._4_4_ >> 8;
          auVar20._4_4_ = auVar40._0_4_ >> 8;
          auVar20._0_4_ = auVar53._0_4_ >> 8;
          auVar70 = ~auVar41 & auVar20;
          auVar59 = pmovzxbd(auVar20,auVar68);
          uVar5 = (uint)(float)(auVar16._0_4_ * 0x800000 + -0x40800000);
          uVar49 = (uint)(float)(auVar16._4_4_ * 0x800000 + -0x40800000);
          uVar50 = (uint)(float)(auVar16._8_4_ * 0x800000 + -0x40800000);
          uVar51 = (uint)(float)(auVar16._12_4_ * 0x800000 + -0x40800000);
          auVar65._0_4_ = ((auVar70._0_4_ - auVar41._0_4_) * -0x10 + 0xf8) - auVar59._0_4_;
          auVar65._4_4_ = ((auVar70._4_4_ - auVar41._4_4_) * -0x10 + 0xf8) - auVar59._4_4_;
          auVar65._8_4_ = ((auVar70._8_4_ - auVar41._8_4_) * -0x10 + 0xf8) - auVar59._8_4_;
          auVar65._12_4_ = ((auVar70._12_4_ - auVar41._12_4_) * -0x10 + 0xf8) - auVar59._12_4_;
          auVar59 = pshufb(auVar68,auVar4);
          auVar44._0_4_ = (((~uVar5 & auVar53._8_4_ >> 8) - uVar5) * -0x10 + 0xf8) - auVar59._0_4_;
          auVar44._4_4_ = (((~uVar49 & auVar40._8_4_ >> 8) - uVar49) * -0x10 + 0xf8) - auVar59._4_4_
          ;
          auVar44._8_4_ =
               (((~uVar50 & auVar53._12_4_ >> 8) - uVar50) * -0x10 + 0xf8) - auVar59._8_4_;
          auVar44._12_4_ =
               (((~uVar51 & auVar40._12_4_ >> 8) - uVar51) * -0x10 + 0xf8) - auVar59._12_4_;
        }
        else {
          auVar16 = psubusb(auVar16,_DAT_149d656a0);
          if (auVar16 != (undefined1  [16])0x0) {
            return uVar6 & 0xffffffffffffff00;
          }
          auVar73[0] = DAT_149d656a0 + auVar68[0];
          auVar73[1] = DAT_149d656a0._1_1_ + auVar68[1];
          auVar73[2] = DAT_149d656a0._2_1_ + auVar68[2];
          auVar73[3] = DAT_149d656a0._3_1_ + auVar68[3];
          auVar73[4] = DAT_149d656a0._4_1_ + auVar68[4];
          auVar73[5] = DAT_149d656a0._5_1_ + auVar68[5];
          auVar73[6] = DAT_149d656a0._6_1_ + auVar68[6];
          auVar73[7] = DAT_149d656a0._7_1_ + auVar68[7];
          auVar73[8] = DAT_149d656a0._8_1_ + auVar68[8];
          auVar73[9] = DAT_149d656a0._9_1_ + auVar68[9];
          auVar73[10] = DAT_149d656a0._10_1_ + auVar68[10];
          auVar73[0xb] = DAT_149d656a0._11_1_ + auVar68[0xb];
          auVar73[0xc] = DAT_149d656a0._12_1_ + auVar68[0xc];
          auVar73[0xd] = DAT_149d656a0._13_1_ + auVar68[0xd];
          auVar73[0xe] = DAT_149d656a0._14_1_ + auVar68[0xe];
          auVar73[0xf] = DAT_149d656a0._15_1_ + auVar68[0xf];
          auVar73 = auVar73 & auVar40;
          auVar74[0] = auVar73[0] + auVar47[0];
          auVar74[1] = auVar73[1] + auVar47[1];
          auVar74[2] = auVar73[2] + auVar47[2];
          auVar74[3] = auVar73[3] + auVar47[3];
          auVar74[4] = auVar73[4] + auVar47[4];
          auVar74[5] = auVar73[5] + auVar47[5];
          auVar74[6] = auVar73[6] + auVar47[6];
          auVar74[7] = auVar73[7] + auVar47[7];
          auVar74[8] = auVar73[8] + auVar47[8];
          auVar74[9] = auVar73[9] + auVar47[9];
          auVar74[10] = auVar73[10] + auVar47[10];
          auVar74[0xb] = auVar73[0xb] + auVar47[0xb];
          auVar74[0xc] = auVar73[0xc] + auVar47[0xc];
          auVar74[0xd] = auVar73[0xd] + auVar47[0xd];
          auVar74[0xe] = auVar73[0xe] + auVar47[0xe];
          auVar74[0xf] = auVar73[0xf] + auVar47[0xf];
          cVar11 = auVar74[0] + auVar75[0];
          cVar22 = auVar74[1] + auVar75[1];
          cVar23 = auVar74[2] + auVar75[2];
          cVar24 = auVar74[3] + auVar75[3];
          cVar25 = auVar74[8] + auVar75[8];
          cVar26 = auVar74[9] + auVar75[9];
          cVar27 = auVar74[10] + auVar75[10];
          cVar28 = auVar74[0xb] + auVar75[0xb];
          cVar29 = auVar74[0xc] + auVar75[0xc];
          cVar30 = auVar74[0xd] + auVar75[0xd];
          cVar34 = cVar11 + cVar23;
          cVar35 = cVar22 + cVar24;
          cVar36 = cVar25 + cVar27;
          cVar37 = cVar26 + cVar28;
          uVar12 = CONCAT13(cVar35,CONCAT12(cVar34,CONCAT11(cVar22,cVar11)));
          uVar13 = CONCAT15(cVar22 + cVar24 + auVar74[5],
                            CONCAT14(cVar11 + cVar23 + auVar74[4],uVar12));
          uVar6 = CONCAT17(cVar35 + auVar74[5] + auVar74[7],
                           CONCAT16(cVar34 + auVar74[4] + auVar74[6],uVar13));
          auVar38._0_10_ = CONCAT19(cVar26,CONCAT18(cVar25,uVar6));
          auVar38[10] = cVar36;
          auVar38[0xb] = cVar37;
          auVar39[0xc] = cVar25 + cVar27 + cVar29;
          auVar39._0_12_ = auVar38;
          auVar39[0xd] = cVar26 + cVar28 + cVar30;
          auVar42[0xe] = cVar36 + cVar29 + auVar74[0xe] + auVar75[0xe];
          auVar42._0_14_ = auVar39;
          auVar42[0xf] = cVar37 + cVar30 + auVar74[0xf] + auVar75[0xf];
          auVar53 = pshufb(auVar21,auVar42);
          auVar31._0_2_ = CONCAT11(cVar22,cVar11) >> 3;
          auVar31._2_2_ = (ushort)((uint)uVar12 >> 0x13);
          auVar31._4_2_ = (ushort)((uint6)uVar13 >> 0x23);
          auVar31._6_2_ = (ushort)(uVar6 >> 0x33);
          auVar31._8_2_ = (ushort)((unkuint10)auVar38._0_10_ >> 0x43);
          auVar31._10_2_ = auVar38._10_2_ >> 3;
          auVar31._12_2_ = auVar39._12_2_ >> 3;
          auVar31._14_2_ = auVar42._14_2_ >> 3;
          auVar31 = auVar31 & _DAT_149a23d40;
          uVar2 = auVar31._6_2_;
          auVar75._0_8_ = uVar6 >> 0x30;
          auVar75._8_8_ = auVar42._8_8_ >> 0x30;
          auVar46 = pshufb(auVar31,_DAT_149d655c0);
          auVar21 = pshufb(auVar31,_DAT_149d655d0);
          auVar54[0] = auVar46[0];
          auVar54[1] = auVar46[1] + -1;
          auVar54[2] = auVar46[2] + -2;
          auVar54[3] = auVar46[3] + -3;
          auVar54[4] = auVar46[4];
          auVar54[5] = auVar46[5] + -1;
          auVar54[6] = auVar46[6] + -2;
          auVar54[7] = auVar46[7] + -3;
          auVar54[8] = auVar46[8];
          auVar54[9] = auVar46[9] + -1;
          auVar54[10] = auVar46[10] + -2;
          auVar54[0xb] = auVar46[0xb] + -3;
          auVar54[0xc] = auVar46[0xc];
          auVar54[0xd] = auVar46[0xd] + -1;
          auVar54[0xe] = auVar46[0xe] + -2;
          auVar54[0xf] = auVar46[0xf] + -3;
          auVar16 = pshufb(auVar53,_DAT_149d656b0);
          auVar47 = pshufb(auVar53,_DAT_149d656c0);
          auVar63[0] = -auVar21[0] + '\x0f';
          auVar63[1] = -auVar21[1] + '\x10';
          auVar63[2] = -auVar21[2] + '\x11';
          auVar63[3] = -auVar21[3] + '\x12';
          auVar63[4] = -auVar21[4] + '\x0f';
          auVar63[5] = -auVar21[5] + '\x10';
          auVar63[6] = -auVar21[6] + '\x11';
          auVar63[7] = -auVar21[7] + '\x12';
          auVar63[8] = -auVar21[8] + '\x0f';
          auVar63[9] = -auVar21[9] + '\x10';
          auVar63[10] = -auVar21[10] + '\x11';
          auVar63[0xb] = -auVar21[0xb] + '\x12';
          auVar63[0xc] = -auVar21[0xc] + '\x0f';
          auVar63[0xd] = -auVar21[0xd] + '\x10';
          auVar63[0xe] = -auVar21[0xe] + '\x11';
          auVar63[0xf] = -auVar21[0xf] + '\x12';
          auVar53[0] = auVar54[0] + -1;
          auVar53[1] = auVar46[1] + -2;
          auVar53[2] = auVar46[2] + -3;
          auVar53[3] = auVar46[3] + -4;
          auVar53[4] = auVar54[4] + -1;
          auVar53[5] = auVar46[5] + -2;
          auVar53[6] = auVar46[6] + -3;
          auVar53[7] = auVar46[7] + -4;
          auVar53[8] = auVar54[8] + -1;
          auVar53[9] = auVar46[9] + -2;
          auVar53[10] = auVar46[10] + -3;
          auVar53[0xb] = auVar46[0xb] + -4;
          auVar53[0xc] = auVar54[0xc] + -1;
          auVar53[0xd] = auVar46[0xd] + -2;
          auVar53[0xe] = auVar46[0xe] + -3;
          auVar53[0xf] = auVar46[0xf] + -4;
          auVar46 = pshufb(auVar59,auVar53);
          auVar53 = pshufb(auVar59,auVar54);
          auVar66._0_2_ = auVar46._0_2_ * auVar16._0_2_;
          auVar66._2_2_ = auVar46._2_2_ * auVar16._2_2_;
          auVar66._4_2_ = auVar46._4_2_ * auVar16._4_2_;
          auVar66._6_2_ = auVar46._6_2_ * auVar16._6_2_;
          auVar66._8_2_ = auVar46._8_2_ * auVar16._8_2_;
          auVar66._10_2_ = auVar46._10_2_ * auVar16._10_2_;
          auVar66._12_2_ = auVar46._12_2_ * auVar16._12_2_;
          auVar66._14_2_ = auVar46._14_2_ * auVar16._14_2_;
          auVar59[0] = -auVar21[0] + '\x10';
          auVar59[1] = -auVar21[1] + '\x11';
          auVar59[2] = -auVar21[2] + '\x12';
          auVar59[3] = -auVar21[3] + '\x13';
          auVar59[4] = -auVar21[4] + '\x10';
          auVar59[5] = -auVar21[5] + '\x11';
          auVar59[6] = -auVar21[6] + '\x12';
          auVar59[7] = -auVar21[7] + '\x13';
          auVar59[8] = -auVar21[8] + '\x10';
          auVar59[9] = -auVar21[9] + '\x11';
          auVar59[10] = -auVar21[10] + '\x12';
          auVar59[0xb] = -auVar21[0xb] + '\x13';
          auVar59[0xc] = -auVar21[0xc] + '\x10';
          auVar59[0xd] = -auVar21[0xd] + '\x11';
          auVar59[0xe] = -auVar21[0xe] + '\x12';
          auVar59[0xf] = -auVar21[0xf] + '\x13';
          uVar5 = CONCAT22(auVar53._2_2_ * auVar16._2_2_,auVar53._0_2_ * auVar16._0_2_);
          auVar58._0_8_ =
               CONCAT26(auVar53._6_2_ * auVar16._6_2_,CONCAT24(auVar53._4_2_ * auVar16._4_2_,uVar5))
          ;
          auVar58._8_2_ = auVar53._8_2_ * auVar16._8_2_;
          auVar58._10_2_ = auVar53._10_2_ * auVar16._10_2_;
          auVar60._12_2_ = auVar53._12_2_ * auVar16._12_2_;
          auVar60._0_12_ = auVar58;
          auVar60._14_2_ = auVar53._14_2_ * auVar16._14_2_;
          auVar61._0_4_ = uVar5 >> 8;
          auVar61._4_4_ = (uint)((ulonglong)auVar58._0_8_ >> 0x28);
          auVar61._8_4_ = auVar58._8_4_ >> 8;
          auVar61._12_4_ = auVar60._12_4_ >> 8;
          auVar66 = auVar66 | auVar61;
          auVar16 = pshufb(auVar70,auVar59);
          auVar70 = pshufb(auVar70,auVar63);
          auVar21 = pmovzxbd(auVar59,auVar74);
          auVar32._0_4_ = (int)(float)(auVar21._0_4_ * 0x800000 + -0x40800000);
          auVar32._4_4_ = (int)(float)(auVar21._4_4_ * 0x800000 + -0x40800000);
          auVar32._8_4_ = (int)(float)(auVar21._8_4_ * 0x800000 + -0x40800000);
          auVar32._12_4_ = (int)(float)(auVar21._12_4_ * 0x800000 + -0x40800000);
          uVar5 = CONCAT22(auVar70._2_2_ * auVar47._2_2_,auVar70._0_2_ * auVar47._0_2_);
          auVar69._0_8_ =
               CONCAT26(auVar70._6_2_ * auVar47._6_2_,CONCAT24(auVar70._4_2_ * auVar47._4_2_,uVar5))
          ;
          auVar69._8_2_ = auVar70._8_2_ * auVar47._8_2_;
          auVar69._10_2_ = auVar70._10_2_ * auVar47._10_2_;
          auVar71._12_2_ = auVar70._12_2_ * auVar47._12_2_;
          auVar71._0_12_ = auVar69;
          auVar71._14_2_ = auVar70._14_2_ * auVar47._14_2_;
          auVar62._0_2_ = auVar16._0_2_ * auVar47._0_2_;
          auVar62._2_2_ = auVar16._2_2_ * auVar47._2_2_;
          auVar62._4_2_ = auVar16._4_2_ * auVar47._4_2_;
          auVar62._6_2_ = auVar16._6_2_ * auVar47._6_2_;
          auVar62._8_2_ = auVar16._8_2_ * auVar47._8_2_;
          auVar62._10_2_ = auVar16._10_2_ * auVar47._10_2_;
          auVar62._12_2_ = auVar16._12_2_ * auVar47._12_2_;
          auVar62._14_2_ = auVar16._14_2_ * auVar47._14_2_;
          auVar59 = pshufb(auVar74,auVar4);
          auVar72._0_4_ = uVar5 >> 8;
          auVar72._4_4_ = (uint)((ulonglong)auVar69._0_8_ >> 0x28);
          auVar72._8_4_ = auVar69._8_4_ >> 8;
          auVar72._12_4_ = auVar71._12_4_ >> 8;
          auVar62 = auVar62 | auVar72;
          auVar70._0_8_ = auVar66._0_8_;
          auVar70._8_4_ = auVar66._4_4_;
          auVar70._12_4_ = auVar62._4_4_;
          auVar21._8_8_ = auVar70._8_8_;
          auVar21._0_4_ = auVar66._0_4_;
          auVar21._4_4_ = auVar62._0_4_;
          auVar21 = ~auVar32 & auVar21;
          auVar48._4_4_ = auVar62._8_4_;
          auVar48._0_4_ = auVar66._8_4_;
          auVar48._8_4_ = auVar66._12_4_;
          auVar48._12_4_ = auVar62._12_4_;
          iVar52 = auVar21._0_4_ - auVar32._0_4_;
          iVar55 = auVar21._4_4_ - auVar32._4_4_;
          iVar56 = auVar21._8_4_ - auVar32._8_4_;
          iVar57 = auVar21._12_4_ - auVar32._12_4_;
          auVar46._0_4_ = (int)(float)(auVar59._0_4_ * 0x800000 + -0x40800000);
          auVar46._4_4_ = (int)(float)(auVar59._4_4_ * 0x800000 + -0x40800000);
          auVar46._8_4_ = (int)(float)(auVar59._8_4_ * 0x800000 + -0x40800000);
          auVar46._12_4_ = (int)(float)(auVar59._12_4_ * 0x800000 + -0x40800000);
          auVar43._0_4_ = -0x7eff00 - iVar52;
          auVar43._4_4_ = -0x7eff00 - iVar55;
          auVar43._8_4_ = -0x7eff00 - iVar56;
          auVar43._12_4_ = -0x7eff00 - iVar57;
          auVar21 = pmovzxbd(auVar32,auVar68);
          auVar64._0_4_ = (iVar52 * -0x10 + 0xf8) - auVar21._0_4_;
          auVar64._4_4_ = (iVar55 * -0x10 + 0xf8) - auVar21._4_4_;
          auVar64._8_4_ = (iVar56 * -0x10 + 0xf8) - auVar21._8_4_;
          auVar64._12_4_ = (iVar57 * -0x10 + 0xf8) - auVar21._12_4_;
          auVar48 = ~auVar46 & auVar48;
          iVar52 = auVar48._0_4_ - auVar46._0_4_;
          iVar55 = auVar48._4_4_ - auVar46._4_4_;
          iVar56 = auVar48._8_4_ - auVar46._8_4_;
          iVar57 = auVar48._12_4_ - auVar46._12_4_;
          auVar21 = pmovsxbd(auVar46,auVar40);
          auVar67._0_8_ = auVar40._0_8_ >> 0x20;
          auVar67._8_8_ = auVar40._8_8_ >> 0x20;
          auVar65 = pblendvb(auVar64,auVar43,auVar21);
          auVar21 = pmovsxbd(auVar21,auVar67);
          auVar33._0_4_ = -0x7eff00 - iVar52;
          auVar33._4_4_ = -0x7eff00 - iVar55;
          auVar33._8_4_ = -0x7eff00 - iVar56;
          auVar33._12_4_ = -0x7eff00 - iVar57;
          auVar59 = pshufb(auVar68,auVar4);
          auVar68._0_4_ = (iVar52 * -0x10 + 0xf8) - auVar59._0_4_;
          auVar68._4_4_ = (iVar55 * -0x10 + 0xf8) - auVar59._4_4_;
          auVar68._8_4_ = (iVar56 * -0x10 + 0xf8) - auVar59._8_4_;
          auVar68._12_4_ = (iVar57 * -0x10 + 0xf8) - auVar59._12_4_;
          auVar44 = pblendvb(auVar68,auVar33,auVar21);
          auVar21 = _DAT_149d65660;
        }
        auVar75 = auVar75 & _DAT_149d655e0;
        pauVar10 = (undefined1 (*) [16])((longlong)pauVar10 - (ulonglong)(uVar2 >> 8));
        *pauVar9 = auVar65;
        uVar6 = (ulonglong)(uVar2 & 0xff);
        puVar8 = puVar8 + 1;
        pauVar9[1] = auVar44;
        pauVar9 = pauVar9 + 2;
      }
      *param_1 = puVar8;
      param_1[2] = pauVar9;
      param_1[4] = pauVar10 + 1;
      param_1[3] = pauVar7;
      *(uint *)((longlong)param_1 + 0x2c) = (uint)(ushort)(auVar75._0_2_ >> 8);
      *(uint *)(param_1 + 5) = auVar75._0_2_ & 7;
    }
  }
  uVar6 = FUN_1451b7b60(param_1);
                    /* WARNING: Read-only address (ram,0x000149a23d40) is written */
                    /* WARNING: Read-only address (ram,0x000149d655c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655d0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655e0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65660) is written */
                    /* WARNING: Read-only address (ram,0x000149d65680) is written */
                    /* WARNING: Read-only address (ram,0x000149d656a0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656b0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656e0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656f0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65700) is written */
  return uVar6;
}



// FUNCTION 145485da0 FUN_145485da0 body=1369 status=ok
// SIG undefined FUN_145485da0(void)

/* WARNING: Removing unreachable block (ram,0x000145485ed7) */
/* WARNING: Removing unreachable block (ram,0x000145485ebd) */
/* WARNING: Removing unreachable block (ram,0x000145485eca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_145485da0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint6 uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [15];
  uint6 uVar6;
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 (*pauVar33) [16];
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  undefined1 (*pauVar37) [16];
  int *piVar38;
  undefined1 (*pauVar39) [16];
  char cVar66;
  char cVar67;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  char cVar68;
  char cVar74;
  char cVar76;
  char cVar78;
  char cVar79;
  char cVar80;
  byte bVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  byte bVar85;
  char cVar86;
  char cVar87;
  char cVar89;
  char cVar91;
  char cVar93;
  char cVar95;
  char cVar97;
  char cVar99;
  char cVar101;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar103;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined4 uVar104;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  ushort uVar125;
  undefined1 auVar119 [12];
  undefined1 auVar120 [12];
  ushort uVar124;
  ushort uVar126;
  undefined1 auVar121 [16];
  ushort uVar127;
  undefined1 auVar128 [12];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar134 [12];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  uint uVar138;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [12];
  undefined1 auVar147 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  ushort uVar155;
  ushort uVar162;
  ushort uVar163;
  ushort uVar164;
  ushort uVar165;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar55 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar56 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  char cVar69;
  undefined1 auVar73 [16];
  byte bVar75;
  char cVar77;
  char cVar88;
  byte bVar90;
  char cVar92;
  byte bVar94;
  char cVar96;
  byte bVar98;
  char cVar100;
  byte bVar102;
  undefined6 uVar105;
  undefined6 uVar106;
  undefined8 uVar107;
  undefined1 auVar108 [12];
  undefined1 auVar109 [12];
  undefined1 auVar110 [14];
  undefined1 auVar111 [14];
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar133 [16];
  undefined1 auVar137 [16];
  undefined1 auVar139 [12];
  undefined1 auVar142 [16];
  undefined1 auVar148 [16];
  undefined8 uVar156;
  undefined1 auVar157 [12];
  undefined1 auVar158 [14];
  
  auVar32 = _DAT_149d65660;
  lVar1 = param_1[1];
  pauVar33 = (undefined1 (*) [16])*param_1;
  if (0xf < lVar1 - (longlong)pauVar33) {
    pauVar37 = (undefined1 (*) [16])param_1[3];
    if (0xf < param_1[4] - (longlong)pauVar37) {
      piVar38 = (int *)param_1[2];
      pauVar39 = (undefined1 (*) [16])(param_1[4] + -0x10);
      auVar168 = ZEXT416(*(int *)((longlong)param_1 + 0x2c) << 8 | *(uint *)(param_1 + 5));
      auVar150 = _DAT_149d65710;
      auVar31 = _DAT_149d65570;
                    /* WARNING: Read-only address (ram,0x000149975ad0) is written */
                    /* WARNING: Read-only address (ram,0x0001499775e0) is written */
                    /* WARNING: Read-only address (ram,0x000149a23d40) is written */
                    /* WARNING: Read-only address (ram,0x000149d65570) is written */
                    /* WARNING: Read-only address (ram,0x000149d65590) is written */
                    /* WARNING: Read-only address (ram,0x000149d655c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655d0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655f0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65600) is written */
                    /* WARNING: Read-only address (ram,0x000149d65610) is written */
                    /* WARNING: Read-only address (ram,0x000149d65640) is written */
                    /* WARNING: Read-only address (ram,0x000149d65660) is written */
                    /* WARNING: Read-only address (ram,0x000149d65690) is written */
                    /* WARNING: Read-only address (ram,0x000149d656b0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65710) is written */
      for (; (_DAT_149d65570 = auVar31, _DAT_149d65710 = auVar150,
             pauVar33 < (undefined1 (*) [16])(lVar1 + -0xf) && (pauVar37 <= pauVar39));
          pauVar37 = (undefined1 (*) [16])(*pauVar37 + (uVar162 & 0xff))) {
        auVar161 = *pauVar33;
        auVar53 = *pauVar37;
        auVar147 = *pauVar39;
        auVar159 = _DAT_149d65690 & auVar161;
        uVar155 = auVar159._0_2_ >> 3;
        uVar162 = auVar159._2_2_ >> 3;
        uVar104 = CONCAT22(uVar162,uVar155);
        uVar163 = auVar159._4_2_ >> 3;
        uVar106 = CONCAT24(uVar163,uVar104);
        uVar164 = auVar159._6_2_ >> 3;
        uVar156 = CONCAT26(uVar164,uVar106);
        uVar165 = auVar159._8_2_ >> 3;
        auVar157._0_10_ = CONCAT28(uVar165,uVar156);
        auVar157._10_2_ = auVar159._10_2_ >> 3;
        auVar158._12_2_ = auVar159._12_2_ >> 3;
        auVar158._0_12_ = auVar157;
        auVar40._14_2_ = auVar159._14_2_ >> 3;
        auVar40._0_14_ = auVar158;
        cVar69 = (char)uVar155;
        cVar68 = cVar69 + auVar168[0];
        bVar75 = auVar159[1] >> 3;
        cVar74 = bVar75 + auVar168[1];
        cVar77 = (char)uVar162;
        cVar76 = cVar77 + auVar168[2];
        cVar78 = (auVar159[3] >> 3) + auVar168[3];
        cVar79 = (char)uVar163;
        bVar81 = auVar159[5] >> 3;
        cVar83 = (char)uVar164;
        bVar85 = auVar159[7] >> 3;
        cVar88 = (char)uVar165;
        cVar87 = cVar88 + auVar168[8];
        bVar90 = auVar159[9] >> 3;
        cVar89 = bVar90 + auVar168[9];
        cVar92 = (char)auVar157._10_2_;
        cVar91 = cVar92 + auVar168[10];
        bVar94 = auVar159[0xb] >> 3;
        cVar93 = bVar94 + auVar168[0xb];
        cVar96 = (char)auVar158._12_2_;
        cVar95 = cVar96 + auVar168[0xc];
        bVar98 = auVar159[0xd] >> 3;
        cVar97 = bVar98 + auVar168[0xd];
        cVar100 = (char)auVar40._14_2_;
        bVar102 = auVar159[0xf] >> 3;
        cVar99 = cVar100 + auVar168[0xe];
        cVar101 = bVar102 + auVar168[0xf];
        auVar71[0] = auVar161[0];
        if ((_DAT_1499775e0 & auVar161) == (undefined1  [16])0x0) {
          cVar66 = cVar68 + cVar76;
          cVar67 = cVar74 + cVar78;
          cVar80 = cVar68 + cVar76 + cVar79;
          cVar82 = cVar74 + cVar78 + bVar81;
          cVar84 = cVar66 + cVar79 + cVar83;
          cVar86 = cVar67 + bVar81 + bVar85;
          uVar103 = CONCAT13(cVar67,CONCAT12(cVar66,CONCAT11(cVar74,cVar68)));
          uVar105 = CONCAT15(cVar82,CONCAT14(cVar80,uVar103));
          uVar107 = CONCAT17(cVar86,CONCAT16(cVar84,uVar105));
          auVar108._0_10_ =
               CONCAT19(cVar74 + cVar78 + bVar81 + bVar85 + cVar89,
                        CONCAT18(cVar68 + cVar76 + cVar79 + cVar83 + cVar87,uVar107));
          auVar108[10] = cVar66 + cVar79 + cVar83 + cVar87 + cVar91;
          auVar108[0xb] = cVar67 + bVar81 + bVar85 + cVar89 + cVar93;
          auVar110[0xc] = cVar80 + cVar83 + cVar87 + cVar91 + cVar95;
          auVar110._0_12_ = auVar108;
          auVar110[0xd] = cVar82 + bVar85 + cVar89 + cVar93 + cVar97;
          auVar112[0xe] = cVar84 + cVar87 + cVar91 + cVar95 + cVar99;
          auVar112._0_14_ = auVar110;
          auVar112[0xf] = cVar86 + cVar89 + cVar93 + cVar97 + cVar101;
          auVar70._0_2_ = CONCAT11(cVar74,cVar68) >> 3;
          auVar70._2_2_ = (ushort)((uint)uVar103 >> 0x13);
          auVar70._4_2_ = (ushort)((uint6)uVar105 >> 0x23);
          auVar70._6_2_ = (ushort)((ulonglong)uVar107 >> 0x33);
          auVar70._8_2_ = (ushort)((unkuint10)auVar108._0_10_ >> 0x43);
          auVar70._10_2_ = auVar108._10_2_ >> 3;
          auVar70._12_2_ = auVar110._12_2_ >> 3;
          auVar70._14_2_ = auVar112._14_2_ >> 3;
          auVar70 = auVar70 & _DAT_149a23d40;
          uVar162 = auVar70._14_2_;
          auVar168 = auVar112 >> 0x70;
          auVar129 = pshufb(auVar70,_DAT_149d65600);
          auVar40 = pshufb(auVar70,_DAT_149d65610);
          auVar130[0] = auVar129[0];
          auVar130[1] = auVar129[1] + -1;
          auVar130[2] = auVar129[2];
          auVar130[3] = auVar129[3] + -1;
          auVar130[4] = auVar129[4];
          auVar130[5] = auVar129[5] + -1;
          auVar130[6] = auVar129[6];
          auVar130[7] = auVar129[7] + -1;
          auVar130[8] = auVar129[8];
          auVar130[9] = auVar129[9] + -1;
          auVar130[10] = auVar129[10];
          auVar130[0xb] = auVar129[0xb] + -1;
          auVar130[0xc] = auVar129[0xc];
          auVar130[0xd] = auVar129[0xd] + -1;
          auVar130[0xe] = auVar129[0xe];
          auVar130[0xf] = auVar129[0xf] + -1;
          auVar135[0] = -auVar40[0] + '\x0f';
          auVar135[1] = -auVar40[1] + '\x10';
          auVar135[2] = -auVar40[2] + '\x0f';
          auVar135[3] = -auVar40[3] + '\x10';
          auVar135[4] = -auVar40[4] + '\x0f';
          auVar135[5] = -auVar40[5] + '\x10';
          auVar135[6] = -auVar40[6] + '\x0f';
          auVar135[7] = -auVar40[7] + '\x10';
          auVar135[8] = -auVar40[8] + '\x0f';
          auVar135[9] = -auVar40[9] + '\x10';
          auVar135[10] = -auVar40[10] + '\x0f';
          auVar135[0xb] = -auVar40[0xb] + '\x10';
          auVar135[0xc] = -auVar40[0xc] + '\x0f';
          auVar135[0xd] = -auVar40[0xd] + '\x10';
          auVar135[0xe] = -auVar40[0xe] + '\x0f';
          auVar135[0xf] = -auVar40[0xf] + '\x10';
          auVar121 = pshufb(auVar32,auVar112);
          auVar41[0] = auVar130[0] + -1;
          auVar41[1] = auVar129[1] + -2;
          auVar41[2] = auVar130[2] + -1;
          auVar41[3] = auVar129[3] + -2;
          auVar41[4] = auVar130[4] + -1;
          auVar41[5] = auVar129[5] + -2;
          auVar41[6] = auVar130[6] + -1;
          auVar41[7] = auVar129[7] + -2;
          auVar41[8] = auVar130[8] + -1;
          auVar41[9] = auVar129[9] + -2;
          auVar41[10] = auVar130[10] + -1;
          auVar41[0xb] = auVar129[0xb] + -2;
          auVar41[0xc] = auVar130[0xc] + -1;
          auVar41[0xd] = auVar129[0xd] + -2;
          auVar41[0xe] = auVar130[0xe] + -1;
          auVar41[0xf] = auVar129[0xf] + -2;
          auVar129 = _DAT_149975ad0 & auVar121;
          auVar152 = pshufb(auVar53,auVar41);
          auVar140 = pshufb(auVar53,auVar130);
          auVar153._0_2_ = auVar152._0_2_ * auVar129._0_2_;
          auVar153._2_2_ = auVar152._2_2_ * auVar129._2_2_;
          auVar153._4_2_ = auVar152._4_2_ * auVar129._4_2_;
          auVar153._6_2_ = auVar152._6_2_ * auVar129._6_2_;
          auVar153._8_2_ = auVar152._8_2_ * auVar129._8_2_;
          auVar153._10_2_ = auVar152._10_2_ * auVar129._10_2_;
          auVar153._12_2_ = auVar152._12_2_ * auVar129._12_2_;
          auVar153._14_2_ = auVar152._14_2_ * auVar129._14_2_;
          auVar113[0] = -auVar40[0] + '\x10';
          auVar113[1] = -auVar40[1] + '\x11';
          auVar113[2] = -auVar40[2] + '\x10';
          auVar113[3] = -auVar40[3] + '\x11';
          auVar113[4] = -auVar40[4] + '\x10';
          auVar113[5] = -auVar40[5] + '\x11';
          auVar113[6] = -auVar40[6] + '\x10';
          auVar113[7] = -auVar40[7] + '\x11';
          auVar113[8] = -auVar40[8] + '\x10';
          auVar113[9] = -auVar40[9] + '\x11';
          auVar113[10] = -auVar40[10] + '\x10';
          auVar113[0xb] = -auVar40[0xb] + '\x11';
          auVar113[0xc] = -auVar40[0xc] + '\x10';
          auVar113[0xd] = -auVar40[0xd] + '\x11';
          auVar113[0xe] = -auVar40[0xe] + '\x10';
          auVar113[0xf] = -auVar40[0xf] + '\x11';
          bVar81 = auVar159[7] >> 3;
          auVar52[0xe] = bVar81;
          auVar52._0_14_ = auVar158;
          auVar52[0xf] = bVar81;
          auVar51._14_2_ = auVar52._14_2_;
          auVar51._0_13_ = auVar158._0_13_;
          auVar51[0xd] = cVar83;
          auVar50._13_3_ = auVar51._13_3_;
          auVar50[0xc] = cVar83;
          auVar50._0_12_ = auVar157;
          auVar49._12_4_ = auVar50._12_4_;
          auVar49._0_11_ = auVar157._0_11_;
          bVar81 = auVar159[5] >> 3;
          auVar49[0xb] = bVar81;
          auVar48._11_5_ = auVar49._11_5_;
          auVar48[10] = bVar81;
          auVar48._0_10_ = auVar157._0_10_;
          auVar47._10_6_ = auVar48._10_6_;
          auVar47._0_9_ = (unkbyte9)auVar157._0_10_;
          auVar47[9] = cVar79;
          auVar46._9_7_ = auVar47._9_7_;
          auVar46[8] = cVar79;
          auVar46._0_8_ = uVar156;
          auVar45._8_8_ = auVar46._8_8_;
          bVar81 = auVar159[3] >> 3;
          auVar45[7] = bVar81;
          auVar45[6] = bVar81;
          auVar45._0_6_ = uVar106;
          auVar44._6_10_ = auVar45._6_10_;
          auVar44[5] = cVar77;
          auVar44[4] = cVar77;
          auVar44._0_4_ = uVar104;
          auVar43._4_12_ = auVar44._4_12_;
          auVar43[3] = bVar75;
          auVar43[2] = bVar75;
          auVar43._0_2_ = uVar155;
          auVar42._2_14_ = auVar43._2_14_;
          auVar42[1] = cVar69;
          auVar42[0] = cVar69;
          auVar53 = psubusb(auVar42,_DAT_149d655f0);
          auVar159 = pshufb(auVar150,auVar53);
          auVar40 = pshufb(auVar147,auVar113);
          uVar155 = auVar121._0_2_ >> 8;
          uVar163 = auVar121._2_2_ >> 8;
          uVar164 = auVar121._4_2_ >> 8;
          uVar165 = auVar121._6_2_ >> 8;
          uVar124 = auVar121._8_2_ >> 8;
          uVar125 = auVar121._10_2_ >> 8;
          uVar126 = auVar121._12_2_ >> 8;
          uVar127 = auVar121._14_2_ >> 8;
          auVar147 = pshufb(auVar147,auVar135);
          auVar141._0_2_ = (ushort)(auVar140._0_2_ * auVar129._0_2_) >> 8;
          auVar141._2_2_ = (ushort)(auVar140._2_2_ * auVar129._2_2_) >> 8;
          auVar141._4_2_ = (ushort)(auVar140._4_2_ * auVar129._4_2_) >> 8;
          auVar141._6_2_ = (ushort)(auVar140._6_2_ * auVar129._6_2_) >> 8;
          auVar141._8_2_ = (ushort)(auVar140._8_2_ * auVar129._8_2_) >> 8;
          auVar141._10_2_ = (ushort)(auVar140._10_2_ * auVar129._10_2_) >> 8;
          auVar141._12_2_ = (ushort)(auVar140._12_2_ * auVar129._12_2_) >> 8;
          auVar141._14_2_ = (ushort)(auVar140._14_2_ * auVar129._14_2_) >> 8;
          auVar153 = auVar153 | auVar141;
          auVar7[0xd] = 0;
          auVar7._0_13_ = auVar161._0_13_;
          auVar7[0xe] = auVar161[7];
          auVar11[0xc] = auVar161[6];
          auVar11._0_12_ = auVar161._0_12_;
          auVar11._13_2_ = auVar7._13_2_;
          auVar14[0xb] = 0;
          auVar14._0_11_ = auVar161._0_11_;
          auVar14._12_3_ = auVar11._12_3_;
          auVar18[10] = auVar161[5];
          auVar18._0_10_ = auVar161._0_10_;
          auVar18._11_4_ = auVar14._11_4_;
          auVar20[9] = 0;
          auVar20._0_9_ = auVar161._0_9_;
          auVar20._10_5_ = auVar18._10_5_;
          auVar22[8] = auVar161[4];
          auVar22._0_8_ = auVar161._0_8_;
          auVar22._9_6_ = auVar20._9_6_;
          auVar23._7_8_ = 0;
          auVar23._0_7_ = auVar22._8_7_;
          auVar27._1_8_ = SUB158(auVar23 << 0x40,7);
          auVar27[0] = auVar161[3];
          auVar27._9_6_ = 0;
          auVar28._1_10_ = SUB1510(auVar27 << 0x30,5);
          auVar28[0] = auVar161[2];
          auVar28._11_4_ = 0;
          auVar71._3_12_ = SUB1512(auVar28 << 0x20,3);
          auVar71[2] = auVar161[1];
          auVar71[1] = 0;
          auVar71[0xf] = 0;
          auVar57._0_12_ = auVar153._0_12_;
          auVar57._12_2_ = auVar153._6_2_;
          auVar57._14_2_ = auVar40._6_2_ * uVar165 | (ushort)(auVar147._6_2_ * uVar165) >> 8;
          auVar56._12_4_ = auVar57._12_4_;
          auVar56._0_10_ = auVar153._0_10_;
          auVar56._10_2_ = auVar40._4_2_ * uVar164 | (ushort)(auVar147._4_2_ * uVar164) >> 8;
          auVar55._10_6_ = auVar56._10_6_;
          auVar55._0_8_ = auVar153._0_8_;
          auVar55._8_2_ = auVar153._4_2_;
          auVar54._8_8_ = auVar55._8_8_;
          auVar54._6_2_ = auVar40._2_2_ * uVar163 | (ushort)(auVar147._2_2_ * uVar163) >> 8;
          auVar54._4_2_ = auVar153._2_2_;
          auVar54._0_2_ = auVar153._0_2_;
          auVar54._2_2_ = auVar40._0_2_ * uVar155 | (ushort)(auVar147._0_2_ * uVar155) >> 8;
          auVar159 = auVar159 & auVar54;
          auVar53 = psllw(auVar71,4);
          auVar59._0_12_ = ZEXT812(0);
          auVar59._12_2_ = 0;
          auVar59._14_2_ = auVar53._6_2_ + 0x4100;
          auVar58._12_4_ = auVar59._12_4_;
          auVar58._0_10_ = auVar59._0_10_;
          auVar58._10_2_ = auVar53._4_2_ + 0x4100;
          lVar2 = (ulonglong)auVar58._10_6_ << 0x10;
          auVar15._2_8_ = lVar2;
          auVar15._0_2_ = auVar53._2_2_ + 0x4100;
          auVar15._10_6_ = 0;
          uVar3 = CONCAT24(auVar53._10_2_ + 0x4100,(uint)(ushort)(auVar53._8_2_ + 0x4100));
          auVar119._0_10_ = (unkuint10)uVar3 << 0x10;
          auVar119._10_2_ = auVar53._12_2_ + 0x4100;
          auVar122._12_2_ = 0;
          auVar122._0_12_ = auVar119;
          auVar122._14_2_ = auVar53._14_2_ + 0x4100;
          auVar60._0_4_ = (int)(float)((uint)(ushort)(auVar53._0_2_ + 0x4100) << 0x10);
          auVar60._4_4_ = (int)SUB164(auVar15 << 0x30,4);
          auVar60._8_4_ = (int)(float)lVar2;
          auVar60._12_4_ = (int)auVar58._12_4_;
          auVar8._10_2_ = 0;
          auVar8._0_10_ = auVar159._0_10_;
          auVar8._12_2_ = auVar159._6_2_;
          auVar12._8_2_ = auVar159._4_2_;
          auVar12._0_8_ = auVar159._0_8_;
          auVar12._10_4_ = auVar8._10_4_;
          auVar24._6_8_ = 0;
          auVar24._0_6_ = auVar12._8_6_;
          auVar114._6_8_ = SUB148(auVar24 << 0x40,6);
          auVar114._4_2_ = auVar159._2_2_;
          auVar114._0_2_ = auVar159._0_2_;
          auVar114._2_2_ = 0;
          auVar114._14_2_ = 0;
          auVar114 = auVar114 | auVar60;
          auVar131._2_2_ = 0;
          auVar131._0_2_ = auVar159._8_2_;
          auVar131._4_2_ = auVar159._10_2_;
          auVar131._6_2_ = 0;
          auVar131._8_2_ = auVar159._12_2_;
          auVar131._10_2_ = 0;
          auVar131._12_2_ = auVar159._14_2_;
          auVar131._14_2_ = 0;
          *piVar38 = 8 - auVar114._0_4_;
          piVar38[1] = 8 - auVar114._4_4_;
          piVar38[2] = 8 - auVar114._8_4_;
          piVar38[3] = 8 - auVar114._12_4_;
          auVar61._0_4_ = (int)(float)auVar119._0_10_;
          auVar61._4_4_ = (int)(float)(uVar3 >> 0x10);
          auVar61._8_4_ = (int)auVar119._8_4_;
          auVar61._12_4_ = (int)auVar122._12_4_;
          auVar131 = auVar131 | auVar61;
          piVar38[4] = 8 - auVar131._0_4_;
          piVar38[5] = 8 - auVar131._4_4_;
          piVar38[6] = 8 - auVar131._8_4_;
          piVar38[7] = 8 - auVar131._12_4_;
          lVar35 = 0x10;
          auVar63._0_12_ = ZEXT812(0);
          auVar166[1] = 0;
          auVar166[0] = auVar161[8];
          auVar166[2] = auVar161[9];
          auVar166[3] = 0;
          auVar166[4] = auVar161[10];
          auVar166[5] = 0;
          auVar166[6] = auVar161[0xb];
          auVar166[7] = 0;
          auVar166[8] = auVar161[0xc];
          auVar166[9] = 0;
          auVar166[10] = auVar161[0xd];
          auVar166[0xb] = 0;
          auVar166[0xc] = auVar161[0xe];
          auVar166[0xd] = 0;
          auVar166[0xe] = auVar161[0xf];
          auVar166[0xf] = 0;
          auVar160[1] = cVar88;
          auVar160[0] = cVar88;
          auVar160[2] = bVar90;
          auVar160[3] = bVar90;
          auVar160[4] = cVar92;
          auVar160[5] = cVar92;
          auVar160[6] = bVar94;
          auVar160[7] = bVar94;
          auVar160[8] = cVar96;
          auVar160[9] = cVar96;
          auVar160[10] = bVar98;
          auVar160[0xb] = bVar98;
          auVar160[0xc] = cVar100;
          auVar160[0xd] = cVar100;
          auVar160[0xe] = bVar102;
          auVar160[0xf] = bVar102;
          auVar161 = psubusb(auVar160,_DAT_149d655f0);
          auVar150 = pshufb(auVar150,auVar161);
          lVar36 = 0x40;
          auVar161 = psllw(auVar166,4);
          auVar63._12_2_ = 0;
          auVar63._14_2_ = auVar161._6_2_ + 0x4100;
          auVar62._12_4_ = auVar63._12_4_;
          auVar62._0_10_ = auVar63._0_10_;
          auVar62._10_2_ = auVar161._4_2_ + 0x4100;
          lVar2 = (ulonglong)auVar62._10_6_ << 0x10;
          auVar16._2_8_ = lVar2;
          auVar16._0_2_ = auVar161._2_2_ + 0x4100;
          auVar16._10_6_ = 0;
          auVar64._0_4_ = (int)(float)((uint)(ushort)(auVar161._0_2_ + 0x4100) << 0x10);
          auVar64._4_4_ = (int)SUB164(auVar16 << 0x30,4);
          auVar64._8_4_ = (int)(float)lVar2;
          auVar64._12_4_ = (int)auVar62._12_4_;
          auVar154._2_2_ = auVar40._8_2_ * uVar124 | (ushort)(auVar147._8_2_ * uVar124) >> 8;
          auVar154._0_2_ = auVar153._8_2_;
          auVar154._4_2_ = auVar153._10_2_;
          auVar154._6_2_ = auVar40._10_2_ * uVar125 | (ushort)(auVar147._10_2_ * uVar125) >> 8;
          auVar154._8_2_ = auVar153._12_2_;
          auVar154._10_2_ = auVar40._12_2_ * uVar126 | (ushort)(auVar147._12_2_ * uVar126) >> 8;
          auVar154._12_2_ = auVar153._14_2_;
          auVar154._14_2_ = auVar40._14_2_ * uVar127 | (ushort)(auVar147._14_2_ * uVar127) >> 8;
          auVar150 = auVar150 & auVar154;
          uVar3 = CONCAT24(auVar161._10_2_ + 0x4100,(uint)(ushort)(auVar161._8_2_ + 0x4100));
          auVar120._0_10_ = (unkuint10)uVar3 << 0x10;
          auVar120._10_2_ = auVar161._12_2_ + 0x4100;
          auVar123._12_2_ = 0;
          auVar123._0_12_ = auVar120;
          auVar123._14_2_ = auVar161._14_2_ + 0x4100;
          auVar151._2_2_ = 0;
          auVar151._0_2_ = auVar150._8_2_;
          auVar151._4_2_ = auVar150._10_2_;
          auVar151._6_2_ = 0;
          auVar151._8_2_ = auVar150._12_2_;
          auVar151._10_2_ = 0;
          auVar151._12_2_ = auVar150._14_2_;
          auVar151._14_2_ = 0;
          auVar4._10_2_ = 0;
          auVar4._0_10_ = auVar150._0_10_;
          auVar4._12_2_ = auVar150._6_2_;
          auVar9._8_2_ = auVar150._4_2_;
          auVar9._0_8_ = auVar150._0_8_;
          auVar9._10_4_ = auVar4._10_4_;
          auVar25._6_8_ = 0;
          auVar25._0_6_ = auVar9._8_6_;
          auVar115._6_8_ = SUB148(auVar25 << 0x40,6);
          auVar115._4_2_ = auVar150._2_2_;
          auVar115._0_2_ = auVar150._0_2_;
          auVar115._2_2_ = 0;
          auVar115._14_2_ = 0;
          auVar115 = auVar115 | auVar64;
          auVar65._0_4_ = (int)(float)auVar120._0_10_;
          auVar65._4_4_ = (int)(float)(uVar3 >> 0x10);
          auVar65._8_4_ = (int)auVar120._8_4_;
          auVar65._12_4_ = (int)auVar123._12_4_;
          auVar151 = auVar151 | auVar65;
          piVar38[0xc] = 8 - auVar151._0_4_;
          piVar38[0xd] = 8 - auVar151._4_4_;
          piVar38[0xe] = 8 - auVar151._8_4_;
          piVar38[0xf] = 8 - auVar151._12_4_;
          piVar38[8] = 8 - auVar115._0_4_;
          piVar38[9] = 8 - auVar115._4_4_;
          piVar38[10] = 8 - auVar115._8_4_;
          piVar38[0xb] = 8 - auVar115._12_4_;
        }
        else {
          auVar168 = psubusb(auVar40,_DAT_149d65640);
          if (auVar168 != (undefined1  [16])0x0) {
            return (ulonglong)pauVar33 & 0xffffffffffffff00;
          }
          lVar36 = 0x20;
          uVar104 = CONCAT13(cVar74 + cVar78,CONCAT12(cVar68 + cVar76,CONCAT11(cVar74,cVar68)));
          uVar106 = CONCAT15(cVar74 + cVar78 + bVar81,CONCAT14(cVar68 + cVar76 + cVar79,uVar104));
          uVar34 = CONCAT17(cVar74 + cVar78 + bVar81 + bVar85,
                            CONCAT16(cVar68 + cVar76 + cVar79 + cVar83,uVar106));
          auVar109._0_10_ = CONCAT19(cVar89,CONCAT18(cVar87,uVar34));
          auVar109[10] = cVar87 + cVar91;
          auVar109[0xb] = cVar89 + cVar93;
          auVar111[0xc] = cVar87 + cVar91 + cVar95;
          auVar111._0_12_ = auVar109;
          auVar111[0xd] = cVar89 + cVar93 + cVar97;
          auVar116[0xe] = cVar87 + cVar91 + cVar95 + cVar99;
          auVar116._0_14_ = auVar111;
          auVar116[0xf] = cVar89 + cVar93 + cVar97 + cVar101;
          auVar152._0_2_ = CONCAT11(cVar74,cVar68) >> 3;
          auVar152._2_2_ = (ushort)((uint)uVar104 >> 0x13);
          auVar152._4_2_ = (ushort)((uint6)uVar106 >> 0x23);
          auVar152._6_2_ = (ushort)(uVar34 >> 0x33);
          auVar152._8_2_ = (ushort)((unkuint10)auVar109._0_10_ >> 0x43);
          auVar152._10_2_ = auVar109._10_2_ >> 3;
          auVar152._12_2_ = auVar111._12_2_ >> 3;
          auVar152._14_2_ = auVar116._14_2_ >> 3;
          auVar152 = auVar152 & _DAT_149a23d40;
          uVar162 = auVar152._6_2_;
          auVar168._0_8_ = uVar34 >> 0x30;
          auVar168._8_8_ = auVar116._8_8_ >> 0x30;
          auVar121 = pshufb(auVar152,_DAT_149d655c0);
          auVar150 = pshufb(auVar152,_DAT_149d655d0);
          lVar35 = 8;
          auVar132[0] = auVar121[0];
          auVar132[1] = auVar121[1] + -1;
          auVar132[2] = auVar121[2] + -2;
          auVar132[3] = auVar121[3] + -3;
          auVar132[4] = auVar121[4];
          auVar132[5] = auVar121[5] + -1;
          auVar132[6] = auVar121[6] + -2;
          auVar132[7] = auVar121[7] + -3;
          auVar132[8] = auVar121[8];
          auVar132[9] = auVar121[9] + -1;
          auVar132[10] = auVar121[10] + -2;
          auVar132[0xb] = auVar121[0xb] + -3;
          auVar132[0xc] = auVar121[0xc];
          auVar132[0xd] = auVar121[0xd] + -1;
          auVar132[0xe] = auVar121[0xe] + -2;
          auVar132[0xf] = auVar121[0xf] + -3;
          auVar159 = pshufb(auVar32,auVar116);
          auVar136[0] = -auVar150[0] + '\x0f';
          auVar136[1] = -auVar150[1] + '\x10';
          auVar136[2] = -auVar150[2] + '\x11';
          auVar136[3] = -auVar150[3] + '\x12';
          auVar136[4] = -auVar150[4] + '\x0f';
          auVar136[5] = -auVar150[5] + '\x10';
          auVar136[6] = -auVar150[6] + '\x11';
          auVar136[7] = -auVar150[7] + '\x12';
          auVar136[8] = -auVar150[8] + '\x0f';
          auVar136[9] = -auVar150[9] + '\x10';
          auVar136[10] = -auVar150[10] + '\x11';
          auVar136[0xb] = -auVar150[0xb] + '\x12';
          auVar136[0xc] = -auVar150[0xc] + '\x0f';
          auVar136[0xd] = -auVar150[0xd] + '\x10';
          auVar136[0xe] = -auVar150[0xe] + '\x11';
          auVar136[0xf] = -auVar150[0xf] + '\x12';
          auVar140 = pshufb(auVar53,auVar132);
          auVar40 = pshufb(auVar159,_DAT_149d656b0);
          auVar129 = pshufb(auVar159,_DAT_149d656c0);
          auVar159[0] = auVar132[0] + -1;
          auVar159[1] = auVar121[1] + -2;
          auVar159[2] = auVar121[2] + -3;
          auVar159[3] = auVar121[3] + -4;
          auVar159[4] = auVar132[4] + -1;
          auVar159[5] = auVar121[5] + -2;
          auVar159[6] = auVar121[6] + -3;
          auVar159[7] = auVar121[7] + -4;
          auVar159[8] = auVar132[8] + -1;
          auVar159[9] = auVar121[9] + -2;
          auVar159[10] = auVar121[10] + -3;
          auVar159[0xb] = auVar121[0xb] + -4;
          auVar159[0xc] = auVar132[0xc] + -1;
          auVar159[0xd] = auVar121[0xd] + -2;
          auVar159[0xe] = auVar121[0xe] + -3;
          auVar159[0xf] = auVar121[0xf] + -4;
          uVar138 = CONCAT22(auVar140._2_2_ * auVar40._2_2_,auVar140._0_2_ * auVar40._0_2_);
          auVar139._0_8_ =
               CONCAT26(auVar140._6_2_ * auVar40._6_2_,
                        CONCAT24(auVar140._4_2_ * auVar40._4_2_,uVar138));
          auVar139._8_2_ = auVar140._8_2_ * auVar40._8_2_;
          auVar139._10_2_ = auVar140._10_2_ * auVar40._10_2_;
          auVar142._12_2_ = auVar140._12_2_ * auVar40._12_2_;
          auVar142._0_12_ = auVar139;
          auVar142._14_2_ = auVar140._14_2_ * auVar40._14_2_;
          auVar117[0] = -auVar150[0] + '\x10';
          auVar117[1] = -auVar150[1] + '\x11';
          auVar117[2] = -auVar150[2] + '\x12';
          auVar117[3] = -auVar150[3] + '\x13';
          auVar117[4] = -auVar150[4] + '\x10';
          auVar117[5] = -auVar150[5] + '\x11';
          auVar117[6] = -auVar150[6] + '\x12';
          auVar117[7] = -auVar150[7] + '\x13';
          auVar117[8] = -auVar150[8] + '\x10';
          auVar117[9] = -auVar150[9] + '\x11';
          auVar117[10] = -auVar150[10] + '\x12';
          auVar117[0xb] = -auVar150[0xb] + '\x13';
          auVar117[0xc] = -auVar150[0xc] + '\x10';
          auVar117[0xd] = -auVar150[0xd] + '\x11';
          auVar117[0xe] = -auVar150[0xe] + '\x12';
          auVar117[0xf] = -auVar150[0xf] + '\x13';
          auVar150 = pshufb(auVar53,auVar159);
          auVar143._0_4_ = uVar138 >> 8;
          auVar143._4_4_ = (uint)((ulonglong)auVar139._0_8_ >> 0x28);
          auVar143._8_4_ = auVar139._8_4_ >> 8;
          auVar143._12_4_ = auVar142._12_4_ >> 8;
          auVar53._0_12_ = ZEXT812(0);
          auVar145._0_2_ = auVar150._0_2_ * auVar40._0_2_;
          auVar145._2_2_ = auVar150._2_2_ * auVar40._2_2_;
          auVar145._4_2_ = auVar150._4_2_ * auVar40._4_2_;
          auVar145._6_2_ = auVar150._6_2_ * auVar40._6_2_;
          auVar145._8_2_ = auVar150._8_2_ * auVar40._8_2_;
          auVar145._10_2_ = auVar150._10_2_ * auVar40._10_2_;
          auVar145._12_2_ = auVar150._12_2_ * auVar40._12_2_;
          auVar145._14_2_ = auVar150._14_2_ * auVar40._14_2_;
          auVar73._0_12_ = ZEXT812(0);
          auVar145 = auVar145 | auVar143;
          auVar150 = pshufb(auVar147,auVar117);
          auVar147 = pshufb(auVar147,auVar136);
          auVar144._0_2_ = auVar150._0_2_ * auVar129._0_2_;
          auVar144._2_2_ = auVar150._2_2_ * auVar129._2_2_;
          auVar144._4_2_ = auVar150._4_2_ * auVar129._4_2_;
          auVar144._6_2_ = auVar150._6_2_ * auVar129._6_2_;
          auVar144._8_2_ = auVar150._8_2_ * auVar129._8_2_;
          auVar144._10_2_ = auVar150._10_2_ * auVar129._10_2_;
          auVar144._12_2_ = auVar150._12_2_ * auVar129._12_2_;
          auVar144._14_2_ = auVar150._14_2_ * auVar129._14_2_;
          auVar5[0xd] = 0;
          auVar5._0_13_ = auVar161._0_13_;
          auVar5[0xe] = auVar161[7];
          auVar10[0xc] = auVar161[6];
          auVar10._0_12_ = auVar161._0_12_;
          auVar10._13_2_ = auVar5._13_2_;
          auVar13[0xb] = 0;
          auVar13._0_11_ = auVar161._0_11_;
          auVar13._12_3_ = auVar10._12_3_;
          auVar17[10] = auVar161[5];
          auVar17._0_10_ = auVar161._0_10_;
          auVar17._11_4_ = auVar13._11_4_;
          auVar19[9] = 0;
          auVar19._0_9_ = auVar161._0_9_;
          auVar19._10_5_ = auVar17._10_5_;
          auVar21[8] = auVar161[4];
          auVar21._0_8_ = auVar161._0_8_;
          auVar21._9_6_ = auVar19._9_6_;
          auVar26._7_8_ = 0;
          auVar26._0_7_ = auVar21._8_7_;
          auVar29._1_8_ = SUB158(auVar26 << 0x40,7);
          auVar29[0] = auVar161[3];
          auVar29._9_6_ = 0;
          auVar30._1_10_ = SUB1510(auVar29 << 0x30,5);
          auVar30[0] = auVar161[2];
          auVar30._11_4_ = 0;
          auVar167._3_12_ = SUB1512(auVar30 << 0x20,3);
          auVar167[2] = auVar161[1];
          auVar167[1] = 0;
          auVar167[0] = auVar71[0];
          auVar167[0xf] = 0;
          uVar138 = CONCAT22(auVar147._2_2_ * auVar129._2_2_,auVar147._0_2_ * auVar129._0_2_);
          auVar146._0_8_ =
               CONCAT26(auVar147._6_2_ * auVar129._6_2_,
                        CONCAT24(auVar147._4_2_ * auVar129._4_2_,uVar138));
          auVar146._8_2_ = auVar147._8_2_ * auVar129._8_2_;
          auVar146._10_2_ = auVar147._10_2_ * auVar129._10_2_;
          auVar148._12_2_ = auVar147._12_2_ * auVar129._12_2_;
          auVar148._0_12_ = auVar146;
          auVar148._14_2_ = auVar147._14_2_ * auVar129._14_2_;
          auVar161 = psllw(_DAT_149d65590 & auVar167,4);
          auVar53._12_2_ = 0;
          auVar53._14_2_ = auVar161._6_2_ + -0x4080;
          auVar147._12_4_ = auVar53._12_4_;
          auVar147._0_10_ = auVar53._0_10_;
          auVar147._10_2_ = auVar161._4_2_ + -0x4080;
          lVar2 = (ulonglong)auVar147._10_6_ << 0x10;
          auVar150._2_8_ = lVar2;
          auVar150._0_2_ = auVar161._2_2_ + -0x4080;
          auVar150._10_6_ = 0;
          uVar3 = CONCAT24(auVar161._10_2_ + -0x4080,(uint)(ushort)(auVar161._8_2_ + 0xbf80));
          auVar134._0_10_ = (unkuint10)uVar3 << 0x10;
          auVar134._10_2_ = auVar161._12_2_ + -0x4080;
          auVar137._12_2_ = 0;
          auVar137._0_12_ = auVar134;
          auVar137._14_2_ = auVar161._14_2_ + -0x4080;
          auVar118._0_4_ = (int)(float)((uint)(ushort)(auVar161._0_2_ + 0xbf80) << 0x10);
          auVar118._4_4_ = (int)SUB164(auVar150 << 0x30,4);
          auVar118._8_4_ = (int)(float)lVar2;
          auVar118._12_4_ = (int)auVar147._12_4_;
          auVar149._0_4_ = uVar138 >> 8;
          auVar149._4_4_ = (uint)((ulonglong)auVar146._0_8_ >> 0x28);
          auVar149._8_4_ = auVar146._8_4_ >> 8;
          auVar149._12_4_ = auVar148._12_4_ >> 8;
          auVar144 = auVar144 | auVar149;
          auVar150 = psllw(auVar167,4);
          auVar129._0_8_ = auVar145._0_8_;
          auVar129._8_4_ = auVar145._4_4_;
          auVar129._12_4_ = auVar144._4_4_;
          auVar121._8_8_ = auVar129._8_8_;
          auVar121._0_4_ = auVar145._0_4_;
          auVar121._4_4_ = auVar144._0_4_;
          auVar73._12_2_ = 0;
          auVar73._14_2_ = auVar150._6_2_ + 0x4100;
          auVar72._12_4_ = auVar73._12_4_;
          auVar72._0_10_ = auVar73._0_10_;
          auVar72._10_2_ = auVar150._4_2_ + 0x4100;
          lVar2 = (ulonglong)auVar72._10_6_ << 0x10;
          auVar161._2_8_ = lVar2;
          auVar161._0_2_ = auVar150._2_2_ + 0x4100;
          auVar161._10_6_ = 0;
          auVar140._0_4_ = (int)(float)((uint)(ushort)(auVar150._0_2_ + 0x4100) << 0x10);
          auVar140._4_4_ = (int)SUB164(auVar161 << 0x30,4);
          auVar140._8_4_ = (int)(float)lVar2;
          auVar140._12_4_ = (int)auVar72._12_4_;
          uVar6 = CONCAT24(auVar150._10_2_ + 0x4100,(uint)(ushort)(auVar150._8_2_ + 0x4100));
          auVar128._0_10_ = (unkuint10)uVar6 << 0x10;
          auVar128._10_2_ = auVar150._12_2_ + 0x4100;
          auVar133._12_2_ = 0;
          auVar133._0_12_ = auVar128;
          auVar133._14_2_ = auVar150._14_2_ + 0x4100;
          auVar140 = ~auVar118 & auVar121 | auVar140;
          piVar38[4] = 8 - (~(int)(float)auVar134._0_10_ & auVar145._8_4_ |
                           (int)(float)auVar128._0_10_);
          piVar38[5] = 8 - (~(int)(float)(uVar3 >> 0x10) & auVar144._8_4_ |
                           (int)(float)(uVar6 >> 0x10));
          piVar38[6] = 8 - (~(int)auVar134._8_4_ & auVar145._12_4_ | (int)auVar128._8_4_);
          piVar38[7] = 8 - (~(int)auVar137._12_4_ & auVar144._12_4_ | (int)auVar133._12_4_);
          *piVar38 = 8 - auVar140._0_4_;
          piVar38[1] = 8 - auVar140._4_4_;
          piVar38[2] = 8 - auVar140._8_4_;
          piVar38[3] = 8 - auVar140._12_4_;
        }
        auVar168 = auVar168 & auVar31;
        pauVar39 = (undefined1 (*) [16])((longlong)pauVar39 - (ulonglong)(uVar162 >> 8));
        piVar38 = (int *)((longlong)piVar38 + lVar36);
        pauVar33 = (undefined1 (*) [16])(*pauVar33 + lVar35);
        auVar150 = _DAT_149d65710;
        auVar31 = _DAT_149d65570;
      }
      *param_1 = pauVar33;
      param_1[2] = piVar38;
      param_1[4] = pauVar39 + 1;
      param_1[3] = pauVar37;
      *(uint *)((longlong)param_1 + 0x2c) = (uint)(ushort)(auVar168._0_2_ >> 8);
      *(uint *)(param_1 + 5) = auVar168._0_2_ & 7;
    }
  }
  uVar34 = FUN_1451b82c0(param_1);
                    /* WARNING: Read-only address (ram,0x000149975ad0) is written */
                    /* WARNING: Read-only address (ram,0x0001499775e0) is written */
                    /* WARNING: Read-only address (ram,0x000149a23d40) is written */
                    /* WARNING: Read-only address (ram,0x000149d65570) is written */
                    /* WARNING: Read-only address (ram,0x000149d65590) is written */
                    /* WARNING: Read-only address (ram,0x000149d655c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655d0) is written */
                    /* WARNING: Read-only address (ram,0x000149d655f0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65600) is written */
                    /* WARNING: Read-only address (ram,0x000149d65610) is written */
                    /* WARNING: Read-only address (ram,0x000149d65640) is written */
                    /* WARNING: Read-only address (ram,0x000149d65660) is written */
                    /* WARNING: Read-only address (ram,0x000149d65690) is written */
                    /* WARNING: Read-only address (ram,0x000149d656b0) is written */
                    /* WARNING: Read-only address (ram,0x000149d656c0) is written */
                    /* WARNING: Read-only address (ram,0x000149d65710) is written */
  return uVar34;
}



// FUNCTION 145486310 FUN_145486310 body=116 status=ok
// SIG undefined FUN_145486310(void)

float FUN_145486310(undefined8 param_1,ulonglong param_2,float param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = FUN_1451b4140(param_1,0x100,param_2 & 0xffffffff);
  fVar2 = (float)(**(code **)(param_4 + 0x48))(param_2,0x80,0x14,0x40c00000);
  return fVar2 * param_3 + (float)uVar1 * 0.125;
}



// FUNCTION 1454863a0 FUN_1454863a0 body=368 status=ok
// SIG undefined FUN_1454863a0(void)

void FUN_1454863a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_468 [32];
  undefined1 local_448;
  int local_438 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar2 = 0;
  lVar1 = 0x100;
  if (param_2 < 0x101) {
    if (0 < param_2) {
      do {
        lVar2 = lVar2 + 1;
      } while (lVar2 < param_2);
    }
  }
  else {
    local_448 = 0;
    FUN_1451b0f40(param_1,param_2,local_438,0x100);
    do {
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_468);
}



// FUNCTION 145486530 FUN_145486530 body=14 status=ok
// SIG undefined FUN_145486530(void)

void FUN_145486530(undefined8 param_1,uint param_2)

{
  FUN_1451c5c20(param_1,param_2 < 0x8000);
  return;
}



// FUNCTION 145486540 FUN_145486540 body=247 status=ok
// SIG undefined FUN_145486540(void)

int FUN_145486540(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)(0x40000000 / (param_2 & 0xffffffff));
  iVar2 = 0;
  iVar8 = 0;
  lVar5 = 0x40;
  piVar6 = (int *)(param_1 + 8);
  iVar7 = iVar2;
  iVar4 = iVar2;
  do {
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-2] * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-2] * iVar1) >> 0x11) * 4) >> 5)
    {
      iVar3 = 0xb00;
    }
    iVar2 = iVar2 + iVar3 * piVar6[-2];
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-1] * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-1] * iVar1) >> 0x11) * 4) >> 5)
    {
      iVar3 = 0xb00;
    }
    iVar4 = iVar4 + iVar3 * piVar6[-1];
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(*piVar6 * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(*piVar6 * iVar1) >> 0x11) * 4) >> 5) {
      iVar3 = 0xb00;
    }
    iVar8 = iVar8 + iVar3 * *piVar6;
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[1] * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < iVar3) {
      iVar3 = 0xb00;
    }
    iVar7 = iVar7 + iVar3 * piVar6[1];
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 4;
  } while (lVar5 != 0);
  return iVar2 + iVar7 + iVar8 + iVar4;
}



// FUNCTION 145486640 FUN_145486640 body=213 status=ok
// SIG undefined FUN_145486640(void)

void FUN_145486640(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0x40;
  puVar2 = (undefined2 *)(param_3 + 4);
  piVar3 = (int *)(param_1 + 8);
  do {
    iVar4 = (int)(0x40000000 / (param_2 & 0xffffffff));
    iVar1 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(iVar4 * piVar3[-2]) >> 0x11) * 4) >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[-2] = (short)iVar1;
    iVar1 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(iVar4 * piVar3[-1]) >> 0x11) * 4) >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[-1] = (short)iVar1;
    iVar1 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(iVar4 * *piVar3) >> 0x11) * 4) >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    *puVar2 = (short)iVar1;
    iVar1 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(iVar4 * piVar3[1]) >> 0x11) * 4) >> 5;
    if (0xb00 < iVar1) {
      iVar1 = 0xb00;
    }
    puVar2[1] = (short)iVar1;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
    piVar3 = piVar3 + 4;
  } while (lVar5 != 0);
  return;
}



// FUNCTION 145486720 FUN_145486720 body=250 status=ok
// SIG undefined FUN_145486720(void)

uint FUN_145486720(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (int)(0x40000000 / (param_2 & 0xffffffff));
  iVar2 = 0;
  iVar8 = 0;
  lVar5 = 0x40;
  piVar6 = (int *)(param_1 + 8);
  iVar7 = iVar2;
  iVar4 = iVar2;
  do {
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-2] * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-2] * iVar1) >> 0x11) * 4) >> 5)
    {
      iVar3 = 0xb00;
    }
    iVar2 = iVar2 + iVar3 * piVar6[-2];
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-1] * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[-1] * iVar1) >> 0x11) * 4) >> 5)
    {
      iVar3 = 0xb00;
    }
    iVar4 = iVar4 + iVar3 * piVar6[-1];
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(*piVar6 * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(*piVar6 * iVar1) >> 0x11) * 4) >> 5) {
      iVar3 = 0xb00;
    }
    iVar8 = iVar8 + iVar3 * *piVar6;
    iVar3 = *(int *)(&DAT_149d5d1c0 + (ulonglong)((uint)(piVar6[1] * iVar1) >> 0x11) * 4) >> 5;
    if (0xb00 < iVar3) {
      iVar3 = 0xb00;
    }
    iVar7 = iVar7 + iVar3 * piVar6[1];
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 4;
  } while (lVar5 != 0);
  return (uint)(iVar2 + iVar7 + iVar8 + iVar4) >> 8;
}



// FUNCTION 145486820 FUN_145486820 body=26 status=ok
// SIG undefined FUN_145486820(void)

code * FUN_145486820(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_145486720;
  if (((byte)DAT_14c7fc4c4 & 8) != 0) {
    pcVar1 = FUN_1455d2b60;
  }
  return pcVar1;
}



// FUNCTION 145486840 FUN_145486840 body=2353 status=ok
// SIG undefined FUN_145486840(void)

/* WARNING: Removing unreachable block (ram,0x000145486a50) */

void FUN_145486840(longlong *param_1,undefined4 param_2,float param_3,int param_4,code *param_5,
                  longlong *param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  int iVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  float *pfVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  float *pfVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  float *pfVar41;
  float *pfVar42;
  uint uVar43;
  float *pfVar44;
  ulonglong uVar45;
  ulonglong local_4e0;
  int local_4b8;
  int iStack_4b4;
  undefined8 local_468 [134];
  
  uVar25 = param_1[2];
  uVar32 = (uint)uVar25;
  lVar34 = (longlong)(int)uVar32;
  pfVar37 = (float *)0x0;
  pfVar31 = pfVar37;
  if (0 < (int)uVar32) {
    do {
      puVar29 = (undefined1 *)(*param_1 + (longlong)pfVar31);
      uVar19 = (*param_5)(puVar29,*(undefined4 *)(puVar29 + 0x400));
      *(undefined4 *)(puVar29 + 0x404) = uVar19;
      lVar34 = lVar34 + -1;
      pfVar31 = pfVar31 + 0x102;
    } while (lVar34 != 0);
  }
  uVar35 = (ulonglong)((int)((uVar32 - 1) * uVar32) / 2);
  lVar34 = uVar35 * 0x18;
  if (param_6 == (longlong *)0x0) {
    local_4e0 = (*(code *)PTR_FUN_14c6d9350)(lVar34,0x10);
    if (local_4e0 == 0) {
      FUN_144d95420(lVar34);
    }
  }
  else {
    uVar30 = lVar34 + 0xfU & 0xfffffffffffffff0;
    uVar28 = (ulonglong)(-(uint)(param_6[4] != 0) & 0x10);
    local_4e0 = param_6[1];
    if ((ulonglong)(param_6[3] + *param_6) < uVar28 + local_4e0 + uVar30) {
      if ((int)param_6[5] == 0) {
        local_4e0 = 0;
      }
      else {
        local_4e0 = (*(code *)PTR_FUN_14c6d9350)(uVar30,0x10);
        if (local_4e0 == 0) {
          FUN_144d95420(uVar30);
        }
      }
    }
    else {
      puVar23 = (ulonglong *)(local_4e0 + uVar30);
      param_6[1] = (longlong)puVar23;
      if (param_6[4] != 0) {
        *puVar23 = uVar30;
        puVar23[1] = 0;
        param_6[1] = param_6[1] + uVar28;
        puVar23 = (ulonglong *)param_6[1];
      }
      puVar21 = (ulonglong *)param_6[2];
      if ((ulonglong *)param_6[2] <= puVar23) {
        puVar21 = puVar23;
      }
      param_6[2] = (longlong)puVar21;
    }
  }
  if ((local_4e0 == 0) &&
     (iVar20 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\rrarenaallocator.h",0x19a,
                             "oo2::rrScopeArenaAlloc::rrScopeArenaAlloc","m_ptr != NULL"),
     iVar20 != 0)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pfVar31 = (float *)(local_4e0 + 0xf & 0xfffffffffffffff0);
  if ((((local_4e0 + lVar34) - (longlong)pfVar31) / 0x18 < uVar35) &&
     (iVar20 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                             "oo2::vector_storage_a<struct oo2::lazy_merge_candidate>::needmakefit",
                             "newsize <= m_capacity"), iVar20 != 0)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar35 == 0) {
    pfVar31 = pfVar37;
  }
  if (0 < (int)uVar32) {
    pfVar41 = pfVar37;
    iVar20 = 1;
    do {
      if (iVar20 < (int)uVar32) {
        pfVar42 = pfVar31 + (longlong)pfVar37 * 6;
        pfVar37 = (float *)((longlong)pfVar37 + (ulonglong)(uVar32 - iVar20));
        iVar33 = iVar20;
        pfVar44 = pfVar41;
        do {
          pfVar44 = pfVar44 + 0x102;
          FUN_145487360(pfVar42,(undefined1 *)(*param_1 + (longlong)pfVar41),iVar20 + -1,
                        (undefined1 *)(*param_1 + (longlong)pfVar44),iVar33,param_2,param_5);
          pfVar42 = pfVar42 + 6;
          iVar33 = iVar33 + 1;
        } while (iVar33 < (int)uVar32);
      }
      pfVar41 = pfVar41 + 0x102;
      bVar6 = iVar20 < (int)uVar32;
      iVar20 = iVar20 + 1;
    } while (bVar6);
  }
  uVar35 = 0;
  lVar39 = (longlong)pfVar37 >> 1;
  if (0 < lVar39) {
    lVar40 = lVar39 * 2 + 1;
    do {
      lVar39 = lVar39 + -1;
      lVar40 = lVar40 + -2;
      lVar36 = lVar39;
      for (lVar27 = lVar40; lVar27 < (longlong)pfVar37; lVar27 = lVar27 * 2 + 1) {
        if (lVar27 + 1 < (longlong)pfVar37) {
          lVar27 = lVar27 + (ulonglong)
                            (pfVar31[lVar27 * 6] <= pfVar31[lVar27 * 6 + 6] &&
                            pfVar31[lVar27 * 6 + 6] != pfVar31[lVar27 * 6]);
        }
        if (pfVar31[lVar27 * 6] <= pfVar31[lVar36 * 6] && pfVar31[lVar36 * 6] != pfVar31[lVar27 * 6]
           ) break;
        uVar4 = *(undefined8 *)(pfVar31 + lVar36 * 6);
        uVar17 = *(undefined8 *)(pfVar31 + lVar36 * 6 + 2);
        uVar3 = *(undefined8 *)(pfVar31 + lVar36 * 6 + 4);
        pfVar41 = pfVar31 + lVar27 * 6;
        fVar8 = pfVar41[1];
        fVar9 = pfVar41[2];
        fVar10 = pfVar41[3];
        pfVar42 = pfVar31 + lVar36 * 6;
        *pfVar42 = *pfVar41;
        pfVar42[1] = fVar8;
        pfVar42[2] = fVar9;
        pfVar42[3] = fVar10;
        *(undefined8 *)(pfVar31 + lVar36 * 6 + 4) = *(undefined8 *)(pfVar31 + lVar27 * 6 + 4);
        *(undefined8 *)(pfVar31 + lVar27 * 6) = uVar4;
        *(undefined8 *)(pfVar31 + lVar27 * 6 + 2) = uVar17;
        *(undefined8 *)(pfVar31 + lVar27 * 6 + 4) = uVar3;
        lVar36 = lVar27;
      }
    } while (0 < lVar39);
  }
  while (pfVar41 = pfVar37, 0 < (longlong)pfVar41) {
    fVar8 = *pfVar31;
    fVar9 = pfVar31[1];
    fVar10 = pfVar31[2];
    fVar11 = pfVar31[3];
    uVar3 = *(undefined8 *)(pfVar31 + 4);
    uVar28 = 1;
    uVar30 = uVar35;
    uVar38 = uVar35;
    if (&DAT_00000001 < pfVar41) {
      do {
        uVar30 = uVar28;
        if (((longlong)(uVar28 + 1) < (longlong)pfVar41) &&
           (pfVar31[uVar28 * 6] <= pfVar31[uVar28 * 6 + 6] &&
            pfVar31[uVar28 * 6 + 6] != pfVar31[uVar28 * 6])) {
          uVar30 = uVar28 + 1;
        }
        pfVar37 = pfVar31 + uVar30 * 6;
        fVar12 = pfVar37[1];
        fVar13 = pfVar37[2];
        fVar14 = pfVar37[3];
        pfVar42 = pfVar31 + uVar38 * 6;
        *pfVar42 = *pfVar37;
        pfVar42[1] = fVar12;
        pfVar42[2] = fVar13;
        pfVar42[3] = fVar14;
        *(undefined8 *)(pfVar31 + uVar38 * 6 + 4) = *(undefined8 *)(pfVar31 + uVar30 * 6 + 4);
        uVar28 = uVar30 * 2 + 1;
        uVar38 = uVar30;
      } while ((longlong)uVar28 < (longlong)pfVar41);
    }
    pfVar37 = (float *)((longlong)pfVar41 + -1);
    if ((longlong)uVar30 < (longlong)pfVar37) {
      pfVar42 = pfVar31 + (longlong)pfVar37 * 6;
      fVar12 = pfVar42[1];
      fVar13 = pfVar42[2];
      fVar14 = pfVar42[3];
      pfVar44 = pfVar31 + uVar30 * 6;
      *pfVar44 = *pfVar42;
      pfVar44[1] = fVar12;
      pfVar44[2] = fVar13;
      pfVar44[3] = fVar14;
      *(undefined8 *)(pfVar31 + uVar30 * 6 + 4) =
           *(undefined8 *)(pfVar31 + (longlong)pfVar37 * 6 + 4);
      lVar39 = (longlong)(uVar30 * 0x18) / 0x18;
      while ((0 < lVar39 &&
             (lVar40 = lVar39 + -1 >> 1,
             pfVar31[lVar40 * 6] <= pfVar31[lVar39 * 6] &&
             pfVar31[lVar39 * 6] != pfVar31[lVar40 * 6]))) {
        uVar17 = *(undefined8 *)(pfVar31 + lVar40 * 6);
        uVar18 = *(undefined8 *)(pfVar31 + lVar40 * 6 + 2);
        uVar4 = *(undefined8 *)(pfVar31 + lVar40 * 6 + 4);
        pfVar42 = pfVar31 + lVar39 * 6;
        fVar12 = pfVar42[1];
        fVar13 = pfVar42[2];
        fVar14 = pfVar42[3];
        pfVar44 = pfVar31 + lVar40 * 6;
        *pfVar44 = *pfVar42;
        pfVar44[1] = fVar12;
        pfVar44[2] = fVar13;
        pfVar44[3] = fVar14;
        *(undefined8 *)(pfVar31 + lVar40 * 6 + 4) = *(undefined8 *)(pfVar31 + lVar39 * 6 + 4);
        *(undefined8 *)(pfVar31 + lVar39 * 6) = uVar17;
        *(undefined8 *)(pfVar31 + lVar39 * 6 + 2) = uVar18;
        *(undefined8 *)(pfVar31 + lVar39 * 6 + 4) = uVar4;
        lVar39 = lVar40;
      }
    }
    lVar36 = (longlong)(int)fVar10 * 0x408;
    lVar40 = *param_1;
    lVar39 = lVar36 + lVar40;
    local_4b8 = (int)uVar3;
    uVar32 = (uint)uVar25;
    if (*(int *)(lVar39 + 0x400) == local_4b8) {
      lVar27 = (longlong)(int)fVar11 * 0x408;
      iStack_4b4 = (int)((ulonglong)uVar3 >> 0x20);
      if (*(int *)(lVar27 + lVar40 + 0x400) != iStack_4b4) goto LAB_145486e33;
      if ((fVar8 < param_3) && ((int)uVar32 <= param_4)) break;
      thunk_FUN_1451c5b20(lVar39,lVar39,lVar27 + lVar40);
      piVar2 = (int *)(lVar36 + 0x400 + *param_1);
      *piVar2 = *piVar2 + *(int *)(lVar27 + 0x400 + *param_1);
      *(undefined4 *)(lVar27 + 0x400 + *param_1) = 0;
      *(float *)(lVar36 + 0x404 + *param_1) = fVar9;
      *(undefined4 *)(lVar27 + 0x404 + *param_1) = 0;
      uVar32 = uVar32 - 1;
      uVar25 = (ulonglong)uVar32;
    }
    else {
LAB_145486e33:
      if ((*(int *)(lVar39 + 0x400) != 0) &&
         (lVar40 = lVar40 + (longlong)(int)fVar11 * 0x408, *(int *)(lVar40 + 0x400) != 0)) {
        FUN_145487360(pfVar31 + (longlong)pfVar37 * 6,lVar39,fVar10,lVar40,fVar11,param_2,param_5);
        lVar39 = ((longlong)pfVar41 * 0x18 + -0x18) / 0x18;
        while ((pfVar37 = pfVar41, 0 < lVar39 &&
               (lVar40 = lVar39 + -1 >> 1,
               pfVar31[lVar40 * 6] <= pfVar31[lVar39 * 6] &&
               pfVar31[lVar39 * 6] != pfVar31[lVar40 * 6]))) {
          uVar4 = *(undefined8 *)(pfVar31 + lVar40 * 6);
          uVar17 = *(undefined8 *)(pfVar31 + lVar40 * 6 + 2);
          uVar3 = *(undefined8 *)(pfVar31 + lVar40 * 6 + 4);
          pfVar37 = pfVar31 + lVar39 * 6;
          fVar8 = pfVar37[1];
          fVar9 = pfVar37[2];
          fVar10 = pfVar37[3];
          pfVar42 = pfVar31 + lVar40 * 6;
          *pfVar42 = *pfVar37;
          pfVar42[1] = fVar8;
          pfVar42[2] = fVar9;
          pfVar42[3] = fVar10;
          *(undefined8 *)(pfVar31 + lVar40 * 6 + 4) = *(undefined8 *)(pfVar31 + lVar39 * 6 + 4);
          *(undefined8 *)(pfVar31 + lVar39 * 6) = uVar4;
          *(undefined8 *)(pfVar31 + lVar39 * 6 + 2) = uVar17;
          *(undefined8 *)(pfVar31 + lVar39 * 6 + 4) = uVar3;
          lVar39 = lVar40;
        }
      }
    }
  }
  uVar25 = param_1[2];
  uVar28 = uVar35;
  uVar30 = uVar35;
  uVar38 = uVar35;
  uVar45 = uVar35;
  if (0 < (int)uVar25) {
    do {
      lVar39 = *param_1;
      puVar22 = (undefined8 *)(lVar39 + uVar38);
      if (*(int *)(puVar22 + 0x80) != 0) {
        if (uVar30 != uVar28) {
          lVar40 = 8;
          puVar24 = local_468;
          do {
            uVar3 = puVar22[1];
            *puVar24 = *puVar22;
            puVar24[1] = uVar3;
            uVar3 = puVar22[3];
            puVar24[2] = puVar22[2];
            puVar24[3] = uVar3;
            uVar3 = puVar22[5];
            puVar24[4] = puVar22[4];
            puVar24[5] = uVar3;
            uVar3 = puVar22[7];
            puVar24[6] = puVar22[6];
            puVar24[7] = uVar3;
            uVar3 = puVar22[9];
            puVar24[8] = puVar22[8];
            puVar24[9] = uVar3;
            uVar3 = puVar22[0xb];
            puVar24[10] = puVar22[10];
            puVar24[0xb] = uVar3;
            uVar3 = puVar22[0xd];
            puVar24[0xc] = puVar22[0xc];
            puVar24[0xd] = uVar3;
            puVar1 = puVar24 + 0x10;
            uVar3 = puVar22[0xf];
            puVar24[0xe] = puVar22[0xe];
            puVar24[0xf] = uVar3;
            puVar22 = puVar22 + 0x10;
            lVar40 = lVar40 + -1;
            puVar24 = puVar1;
          } while (lVar40 != 0);
          *puVar1 = *puVar22;
          puVar22 = local_468;
          lVar40 = 8;
          puVar24 = (undefined8 *)(lVar39 + uVar35);
          do {
            uVar3 = puVar22[1];
            *puVar24 = *puVar22;
            puVar24[1] = uVar3;
            uVar3 = puVar22[3];
            puVar24[2] = puVar22[2];
            puVar24[3] = uVar3;
            uVar3 = puVar22[5];
            puVar24[4] = puVar22[4];
            puVar24[5] = uVar3;
            uVar3 = puVar22[7];
            puVar24[6] = puVar22[6];
            puVar24[7] = uVar3;
            uVar3 = puVar22[9];
            puVar24[8] = puVar22[8];
            puVar24[9] = uVar3;
            uVar3 = puVar22[0xb];
            puVar24[10] = puVar22[10];
            puVar24[0xb] = uVar3;
            uVar19 = *(undefined4 *)((longlong)puVar22 + 100);
            uVar15 = *(undefined4 *)(puVar22 + 0xd);
            uVar16 = *(undefined4 *)((longlong)puVar22 + 0x6c);
            *(undefined4 *)(puVar24 + 0xc) = *(undefined4 *)(puVar22 + 0xc);
            *(undefined4 *)((longlong)puVar24 + 100) = uVar19;
            *(undefined4 *)(puVar24 + 0xd) = uVar15;
            *(undefined4 *)((longlong)puVar24 + 0x6c) = uVar16;
            puVar1 = puVar24 + 0x10;
            uVar3 = puVar22[0xf];
            puVar24[0xe] = puVar22[0xe];
            puVar24[0xf] = uVar3;
            puVar22 = puVar22 + 0x10;
            lVar40 = lVar40 + -1;
            puVar24 = puVar1;
          } while (lVar40 != 0);
          *puVar1 = *puVar22;
        }
        uVar28 = uVar28 + 1;
        uVar35 = uVar35 + 0x408;
      }
      uVar43 = (int)uVar45 + 1;
      uVar25 = param_1[2];
      uVar30 = uVar30 + 1;
      uVar38 = uVar38 + 0x408;
      uVar45 = (ulonglong)uVar43;
    } while ((int)uVar43 < (int)uVar25);
  }
  uVar35 = (ulonglong)(int)uVar32;
  if (uVar35 < uVar25) {
    param_1[2] = uVar35;
  }
  else {
    if (((ulonglong)param_1[1] < uVar35) &&
       (iVar20 = FUN_144d94320("v:\\devel\\projects\\oodle2\\core\\templates/rrvector_a.h",0x3f,
                               "oo2::vector_storage_a<struct oo2::entropyset>::needmakefit",
                               "newsize <= m_capacity"), iVar20 != 0)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_1[2] = param_1[2] + (uVar35 - uVar25);
  }
  if (local_4e0 == 0) {
    return;
  }
  if (param_6 != (longlong *)0x0) {
    uVar25 = lVar34 + 0xfU & 0xfffffffffffffff0;
    if (param_6[4] == 0) {
      if (uVar25 + local_4e0 == param_6[1]) {
        param_6[1] = param_6[1] - uVar25;
        return;
      }
    }
    else if (((ulonglong)param_6[4] <= local_4e0) &&
            (local_4e0 < (ulonglong)(param_6[3] + *param_6))) {
      plVar26 = (longlong *)(uVar25 + local_4e0);
      plVar26[1] = 1;
      plVar5 = (longlong *)param_6[1];
      if (plVar26 + 2 != plVar5) {
        return;
      }
      while( true ) {
        if (plVar5 == (longlong *)param_6[4]) {
          return;
        }
        if (plVar26[1] != 1) break;
        param_6[1] = param_6[1] + (-0x10 - *plVar26);
        plVar5 = (longlong *)param_6[1];
        plVar26 = plVar5 + -2;
      }
      return;
    }
  }
  (*(code *)PTR_FUN_14c6d9358)(local_4e0);
  return;
}



// FUNCTION 145487180 FUN_145487180 body=108 status=ok
// SIG undefined FUN_145487180(void)

void FUN_145487180(undefined8 param_1,float param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(param_3 + 0x48))(0,0x80,0x14,0x40c00000);
  FUN_145486840(param_1,fVar1 * param_2,0,param_4,&LAB_145486300,param_5);
  return;
}



// FUNCTION 145487200 FUN_145487200 body=345 status=ok
// SIG undefined FUN_145487200(void)

int FUN_145487200(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 local_418 [130];
  
  iVar11 = 0;
  lVar13 = param_1[2] + -1;
  if (-1 < lVar13) {
    lVar14 = lVar13 * 0x408;
    do {
      puVar9 = (undefined8 *)(lVar14 + *param_1);
      iVar3 = *(int *)(puVar9 + 0x80);
      iVar11 = iVar11 + iVar3;
      if (iVar3 == 0) {
        lVar12 = 8;
        puVar8 = (undefined8 *)(param_1[2] * 0x408 + *param_1 + -0x408);
        puVar10 = local_418;
        do {
          puVar1 = puVar10 + 0x10;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar2 = puVar8 + 0x10;
          *puVar10 = *puVar8;
          puVar10[1] = uVar4;
          uVar4 = puVar8[4];
          uVar7 = puVar8[5];
          puVar10[2] = uVar5;
          puVar10[3] = uVar6;
          uVar5 = puVar8[6];
          uVar6 = puVar8[7];
          puVar10[4] = uVar4;
          puVar10[5] = uVar7;
          uVar4 = puVar8[8];
          uVar7 = puVar8[9];
          puVar10[6] = uVar5;
          puVar10[7] = uVar6;
          uVar5 = puVar8[10];
          uVar6 = puVar8[0xb];
          puVar10[8] = uVar4;
          puVar10[9] = uVar7;
          uVar4 = puVar8[0xc];
          uVar7 = puVar8[0xd];
          puVar10[10] = uVar5;
          puVar10[0xb] = uVar6;
          uVar5 = puVar8[0xe];
          uVar6 = puVar8[0xf];
          puVar10[0xc] = uVar4;
          puVar10[0xd] = uVar7;
          puVar10[0xe] = uVar5;
          puVar10[0xf] = uVar6;
          lVar12 = lVar12 + -1;
          puVar8 = puVar2;
          puVar10 = puVar1;
        } while (lVar12 != 0);
        lVar12 = 8;
        *puVar1 = *puVar2;
        puVar8 = local_418;
        do {
          puVar10 = puVar9 + 0x10;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar1 = puVar8 + 0x10;
          *puVar9 = *puVar8;
          puVar9[1] = uVar4;
          uVar4 = puVar8[4];
          uVar7 = puVar8[5];
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          uVar5 = puVar8[6];
          uVar6 = puVar8[7];
          puVar9[4] = uVar4;
          puVar9[5] = uVar7;
          uVar4 = puVar8[8];
          uVar7 = puVar8[9];
          puVar9[6] = uVar5;
          puVar9[7] = uVar6;
          uVar5 = puVar8[10];
          uVar6 = puVar8[0xb];
          puVar9[8] = uVar4;
          puVar9[9] = uVar7;
          uVar4 = puVar8[0xc];
          uVar7 = puVar8[0xd];
          puVar9[10] = uVar5;
          puVar9[0xb] = uVar6;
          uVar5 = puVar8[0xe];
          uVar6 = puVar8[0xf];
          puVar9[0xc] = uVar4;
          puVar9[0xd] = uVar7;
          puVar9[0xe] = uVar5;
          puVar9[0xf] = uVar6;
          lVar12 = lVar12 + -1;
          puVar9 = puVar10;
          puVar8 = puVar1;
        } while (lVar12 != 0);
        *puVar10 = *puVar1;
        param_1[2] = param_1[2] + -1;
      }
      lVar14 = lVar14 + -0x408;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  return iVar11;
}



// FUNCTION 145487360 FUN_145487360 body=187 status=ok
// SIG undefined FUN_145487360(void)

void FUN_145487360(float *param_1,longlong param_2,float param_3,longlong param_4,float param_5,
                  float param_6,code *param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_458 [32];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_458;
  thunk_FUN_1451c5b20(local_438,param_2,param_4);
  fVar3 = (float)(*param_7)(local_438,
                            (ulonglong)*(uint *)(param_4 + 0x400) +
                            (ulonglong)*(uint *)(param_2 + 0x400));
  iVar1 = *(int *)(param_4 + 0x404);
  iVar2 = *(int *)(param_2 + 0x404);
  param_1[1] = fVar3;
  param_1[2] = param_3;
  param_1[3] = param_5;
  *param_1 = (float)((iVar1 + iVar2) - (int)fVar3) * 0.125 + param_6;
  param_1[4] = *(float *)(param_2 + 0x400);
  param_1[5] = *(float *)(param_4 + 0x400);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_458);
}



// FUNCTION 145487430 FUN_145487430 body=14 status=ok
// SIG undefined FUN_145487430(void)

void FUN_145487430(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 145487440 FUN_145487440 body=624 status=ok
// SIG undefined FUN_145487440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145487440(longlong param_1,longlong param_2,byte *param_3,longlong param_4,byte *param_5,
                  undefined1 (*param_6) [16],longlong param_7,int param_8,int param_9,
                  undefined2 param_10,short param_11)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  short sVar14;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 auVar15 [16];
  short sVar24;
  undefined1 auVar16 [16];
  int iVar25;
  undefined1 auVar26 [16];
  int iVar27;
  undefined1 auVar12 [12];
  
  auVar10 = _DAT_149d655a0;
  auVar8 = _DAT_149d4f550;
  auVar15 = _DAT_1499319a0;
  auVar13._0_4_ = CONCAT22(param_10,param_10);
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = auVar13._0_4_;
  auVar13._12_4_ = auVar13._0_4_;
  if (param_8 < 9) {
    auVar15 = *param_6;
    if (param_3 < param_5) {
      plVar4 = (longlong *)(param_1 + ((longlong)param_3 - param_4) * 8);
      do {
        sVar14 = auVar15._0_2_ - auVar13._0_2_;
        sVar17 = auVar15._2_2_ - auVar13._2_2_;
        sVar18 = auVar15._4_2_ - auVar13._4_2_;
        sVar19 = auVar15._6_2_ - auVar13._6_2_;
        sVar20 = auVar15._8_2_ - auVar13._8_2_;
        sVar21 = auVar15._10_2_ - auVar13._10_2_;
        sVar22 = auVar15._12_2_ - auVar13._12_2_;
        sVar23 = auVar15._14_2_ - auVar13._14_2_;
        auVar8._0_2_ = -(ushort)(param_11 < sVar14);
        auVar8._2_2_ = -(ushort)(param_11 < sVar17);
        auVar8._4_2_ = -(ushort)(param_11 < sVar18);
        auVar8._6_2_ = -(ushort)(param_11 < sVar19);
        auVar8._8_2_ = -(ushort)(param_11 < sVar20);
        auVar8._10_2_ = -(ushort)(param_11 < sVar21);
        auVar8._12_2_ = -(ushort)(param_11 < sVar22);
        auVar8._14_2_ = -(ushort)(param_11 < sVar23);
        auVar13 = packsswb(auVar8,ZEXT816(0));
        psVar1 = (short *)(param_7 + (ulonglong)*param_3 * 0x10);
        auVar15._0_2_ =
             ((ushort)(param_11 < sVar14) * param_11 | (ushort)(param_11 >= sVar14) * sVar14) +
             *psVar1;
        auVar15._2_2_ =
             ((ushort)(param_11 < sVar17) * param_11 | (ushort)(param_11 >= sVar17) * sVar17) +
             psVar1[1];
        auVar15._4_2_ =
             ((ushort)(param_11 < sVar18) * param_11 | (ushort)(param_11 >= sVar18) * sVar18) +
             psVar1[2];
        auVar15._6_2_ =
             ((ushort)(param_11 < sVar19) * param_11 | (ushort)(param_11 >= sVar19) * sVar19) +
             psVar1[3];
        auVar15._8_2_ =
             ((ushort)(param_11 < sVar20) * param_11 | (ushort)(param_11 >= sVar20) * sVar20) +
             psVar1[4];
        auVar15._10_2_ =
             ((ushort)(param_11 < sVar21) * param_11 | (ushort)(param_11 >= sVar21) * sVar21) +
             psVar1[5];
        auVar15._12_2_ =
             ((ushort)(param_11 < sVar22) * param_11 | (ushort)(param_11 >= sVar22) * sVar22) +
             psVar1[6];
        auVar15._14_2_ =
             ((ushort)(param_11 < sVar23) * param_11 | (ushort)(param_11 >= sVar23) * sVar23) +
             psVar1[7];
        auVar8 = phminposuw(auVar15);
        *plVar4 = (longlong)
                  (int)(uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar13[0xf] >> 7) << 0xf);
        auVar13 = pshufb(auVar8,auVar10);
        param_3[param_2 - param_4] = auVar8[2];
        param_3 = param_3 + 1;
        plVar4 = plVar4 + 1;
      } while (param_3 < param_5);
      return;
    }
  }
  else {
    while (param_3 < param_5) {
      bVar2 = *param_3;
      lVar6 = (longlong)param_3 - param_4;
      param_3 = param_3 + 1;
      uVar5 = 0;
      iVar3 = 0;
      sVar14 = 0;
      auVar10 = auVar15;
      if (0 < param_9) {
        pauVar7 = param_6;
        auVar26 = auVar15;
        do {
          sVar17 = *(short *)*pauVar7 - auVar13._0_2_;
          sVar18 = *(short *)(*pauVar7 + 2) - auVar13._2_2_;
          sVar19 = *(short *)(*pauVar7 + 4) - auVar13._4_2_;
          sVar20 = *(short *)(*pauVar7 + 6) - auVar13._6_2_;
          sVar21 = *(short *)(*pauVar7 + 8) - auVar13._8_2_;
          sVar22 = *(short *)(*pauVar7 + 10) - auVar13._10_2_;
          sVar23 = *(short *)(*pauVar7 + 0xc) - auVar13._12_2_;
          sVar24 = *(short *)(*pauVar7 + 0xe) - auVar13._14_2_;
          auVar16._0_2_ = -(ushort)(param_11 < sVar17);
          auVar16._2_2_ = -(ushort)(param_11 < sVar18);
          auVar16._4_2_ = -(ushort)(param_11 < sVar19);
          auVar16._6_2_ = -(ushort)(param_11 < sVar20);
          auVar16._8_2_ = -(ushort)(param_11 < sVar21);
          auVar16._10_2_ = -(ushort)(param_11 < sVar22);
          auVar16._12_2_ = -(ushort)(param_11 < sVar23);
          auVar16._14_2_ = -(ushort)(param_11 < sVar24);
          auVar16 = packsswb(auVar16,ZEXT816(0));
          psVar1 = (short *)((((ulonglong)((uint)bVar2 * param_9) * 2 + param_7) - (longlong)param_6
                             ) + -0x10 + (longlong)(pauVar7 + 1));
          auVar9._0_2_ = ((ushort)(param_11 < sVar17) * param_11 |
                         (ushort)(param_11 >= sVar17) * sVar17) + *psVar1;
          auVar9._2_2_ = ((ushort)(param_11 < sVar18) * param_11 |
                         (ushort)(param_11 >= sVar18) * sVar18) + psVar1[1];
          auVar9._4_2_ = ((ushort)(param_11 < sVar19) * param_11 |
                         (ushort)(param_11 >= sVar19) * sVar19) + psVar1[2];
          auVar9._6_2_ = ((ushort)(param_11 < sVar20) * param_11 |
                         (ushort)(param_11 >= sVar20) * sVar20) + psVar1[3];
          auVar9._8_2_ = ((ushort)(param_11 < sVar21) * param_11 |
                         (ushort)(param_11 >= sVar21) * sVar21) + psVar1[4];
          auVar9._10_2_ =
               ((ushort)(param_11 < sVar22) * param_11 | (ushort)(param_11 >= sVar22) * sVar22) +
               psVar1[5];
          auVar9._12_2_ =
               ((ushort)(param_11 < sVar23) * param_11 | (ushort)(param_11 >= sVar23) * sVar23) +
               psVar1[6];
          auVar9._14_2_ =
               ((ushort)(param_11 < sVar24) * param_11 | (ushort)(param_11 >= sVar24) * sVar24) +
               psVar1[7];
          *pauVar7 = auVar9;
          auVar10 = phminposuw(auVar9);
          auVar10 = pshuflw(in_XMM1,auVar10,0xe1);
          iVar11 = CONCAT22(auVar10._2_2_,auVar10._0_2_ + sVar14);
          auVar12._0_8_ = CONCAT26(auVar10._6_2_,CONCAT24(auVar10._4_2_,iVar11));
          auVar12._8_2_ = auVar10._8_2_;
          auVar12._10_2_ = auVar10._10_2_;
          in_XMM1._12_2_ = auVar10._12_2_;
          in_XMM1._14_2_ = auVar10._14_2_;
          in_XMM1._0_12_ = auVar12;
          sVar14 = sVar14 + 8;
          uVar5 = uVar5 | (longlong)
                          (int)(uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                              (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                              (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                              (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                              (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                              (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                              (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                              (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                              (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                              (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                              (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                              (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                              (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                              (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                              (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) <<
                          ((byte)iVar3 & 0x3f);
          iVar3 = iVar3 + 8;
          iVar25 = auVar26._0_4_;
          auVar10._0_4_ = (uint)(iVar11 < iVar25) * iVar11 | (uint)(iVar11 >= iVar25) * iVar25;
          iVar11 = (int)((ulonglong)auVar12._0_8_ >> 0x20);
          iVar25 = auVar26._4_4_;
          auVar10._4_4_ = (uint)(iVar11 < iVar25) * iVar11 | (uint)(iVar11 >= iVar25) * iVar25;
          iVar11 = auVar12._8_4_;
          iVar25 = auVar26._8_4_;
          iVar27 = auVar26._12_4_;
          auVar10._8_4_ = (uint)(iVar11 < iVar25) * iVar11 | (uint)(iVar11 >= iVar25) * iVar25;
          iVar11 = in_XMM1._12_4_;
          auVar10._12_4_ = (uint)(iVar11 < iVar27) * iVar11 | (uint)(iVar11 >= iVar27) * iVar27;
          pauVar7 = pauVar7 + 1;
          auVar26 = auVar10;
        } while (iVar3 < param_9);
      }
      *(ulonglong *)(param_1 + lVar6 * 8) = uVar5;
      auVar13 = pshufb(auVar10,auVar8);
      *(char *)(lVar6 + param_2) = auVar10[0];
    }
  }
  return;
}



// FUNCTION 1454876c0 FUN_1454876c0 body=593 status=ok
// SIG undefined FUN_1454876c0(void)

void FUN_1454876c0(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  lVar9 = 0;
  auVar13._4_4_ = param_3;
  auVar13._0_4_ = param_3;
  auVar13._8_4_ = param_3;
  auVar13._12_4_ = param_3;
  auVar18._4_4_ = param_3;
  auVar18._0_4_ = param_3;
  auVar18._8_4_ = param_3;
  auVar18._12_4_ = param_3;
  if (0xf < param_2) {
    puVar7 = (uint *)(param_4 + 8);
    pauVar6 = (undefined1 (*) [16])(param_1 + 0x20);
    do {
      puVar1 = puVar7 + -2;
      lVar9 = lVar9 + 0x10;
      puVar2 = puVar7 + -1;
      uVar8 = *puVar7;
      puVar3 = puVar7 + 1;
      puVar7 = puVar7 + 4;
      in_XMM1 = pmovzxbd(in_XMM1,ZEXT416(*puVar1));
      auVar10 = pmovzxbd(ZEXT416(*puVar1),ZEXT416(*puVar2));
      auVar16 = pmulld(pauVar6[-1],auVar13);
      auVar11 = pmovzxbd(auVar10,ZEXT416(uVar8));
      auVar17 = pmulld(*pauVar6,auVar13);
      auVar12 = pmovzxbd(auVar11,ZEXT416(*puVar3));
      auVar15 = pmulld(pauVar6[1],auVar13);
      auVar14 = pmulld(pauVar6[-2],auVar13);
      *(int *)pauVar6[1] = auVar15._0_4_ - auVar12._0_4_;
      *(int *)(pauVar6[1] + 4) = auVar15._4_4_ - auVar12._4_4_;
      *(int *)(pauVar6[1] + 8) = auVar15._8_4_ - auVar12._8_4_;
      *(int *)(pauVar6[1] + 0xc) = auVar15._12_4_ - auVar12._12_4_;
      *(int *)pauVar6[-2] = auVar14._0_4_ - in_XMM1._0_4_;
      *(int *)(pauVar6[-2] + 4) = auVar14._4_4_ - in_XMM1._4_4_;
      *(int *)(pauVar6[-2] + 8) = auVar14._8_4_ - in_XMM1._8_4_;
      *(int *)(pauVar6[-2] + 0xc) = auVar14._12_4_ - in_XMM1._12_4_;
      *(int *)pauVar6[-1] = auVar16._0_4_ - auVar10._0_4_;
      *(int *)(pauVar6[-1] + 4) = auVar16._4_4_ - auVar10._4_4_;
      *(int *)(pauVar6[-1] + 8) = auVar16._8_4_ - auVar10._8_4_;
      *(int *)(pauVar6[-1] + 0xc) = auVar16._12_4_ - auVar10._12_4_;
      *(int *)*pauVar6 = auVar17._0_4_ - auVar11._0_4_;
      *(int *)(*pauVar6 + 4) = auVar17._4_4_ - auVar11._4_4_;
      *(int *)(*pauVar6 + 8) = auVar17._8_4_ - auVar11._8_4_;
      *(int *)(*pauVar6 + 0xc) = auVar17._12_4_ - auVar11._12_4_;
      pauVar6 = pauVar6 + 4;
    } while ((8 - param_4) + (longlong)puVar7 <= param_2);
  }
  uVar5 = param_2 - lVar9;
  if (lVar9 < param_2) {
    if ((0xf < uVar5) && (1 < DAT_14c707900)) {
      if (((ulonglong)(param_4 + -1 + param_2) < (ulonglong)(param_1 + lVar9 * 4)) ||
         ((ulonglong)(param_1 + (param_2 + -1) * 4) < (ulonglong)(lVar9 + param_4))) {
        uVar8 = (uint)((longlong)uVar5 >> 0x3f) & 0xf;
        pauVar6 = (undefined1 (*) [16])(param_1 + 0x20 + lVar9 * 4);
        puVar7 = (uint *)(lVar9 + param_4 + 8);
        do {
          lVar9 = lVar9 + 0x10;
          auVar10 = pmulld(pauVar6[-2],auVar18);
          auVar13 = pmovzxbd(in_XMM1,ZEXT416(puVar7[-2]));
          uVar4 = puVar7[-1];
          *(int *)pauVar6[-2] = auVar10._0_4_ - auVar13._0_4_;
          *(int *)(pauVar6[-2] + 4) = auVar10._4_4_ - auVar13._4_4_;
          *(int *)(pauVar6[-2] + 8) = auVar10._8_4_ - auVar13._8_4_;
          *(int *)(pauVar6[-2] + 0xc) = auVar10._12_4_ - auVar13._12_4_;
          auVar13 = pmovzxbd(auVar13,ZEXT416(uVar4));
          uVar4 = *puVar7;
          auVar10 = pmulld(pauVar6[-1],auVar18);
          *(int *)pauVar6[-1] = auVar10._0_4_ - auVar13._0_4_;
          *(int *)(pauVar6[-1] + 4) = auVar10._4_4_ - auVar13._4_4_;
          *(int *)(pauVar6[-1] + 8) = auVar10._8_4_ - auVar13._8_4_;
          *(int *)(pauVar6[-1] + 0xc) = auVar10._12_4_ - auVar13._12_4_;
          auVar13 = pmovzxbd(auVar13,ZEXT416(uVar4));
          uVar4 = puVar7[1];
          auVar10 = pmulld(*pauVar6,auVar18);
          *(int *)*pauVar6 = auVar10._0_4_ - auVar13._0_4_;
          *(int *)(*pauVar6 + 4) = auVar10._4_4_ - auVar13._4_4_;
          *(int *)(*pauVar6 + 8) = auVar10._8_4_ - auVar13._8_4_;
          *(int *)(*pauVar6 + 0xc) = auVar10._12_4_ - auVar13._12_4_;
          in_XMM1 = pmovzxbd(auVar13,ZEXT416(uVar4));
          auVar13 = pmulld(pauVar6[1],auVar18);
          *(int *)pauVar6[1] = auVar13._0_4_ - in_XMM1._0_4_;
          *(int *)(pauVar6[1] + 4) = auVar13._4_4_ - in_XMM1._4_4_;
          *(int *)(pauVar6[1] + 8) = auVar13._8_4_ - in_XMM1._8_4_;
          *(int *)(pauVar6[1] + 0xc) = auVar13._12_4_ - in_XMM1._12_4_;
          pauVar6 = pauVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (lVar9 < (longlong)
                         (param_2 - ((ulonglong)((int)uVar5 + uVar8 & 0xf) - (ulonglong)uVar8)));
        if (param_2 <= lVar9) {
          return;
        }
      }
    }
    do {
      *(uint *)(param_1 + lVar9 * 4) =
           param_3 * *(int *)(param_1 + lVar9 * 4) - (uint)*(byte *)(lVar9 + param_4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_2);
  }
  return;
}



// FUNCTION 145487920 FUN_145487920 body=97 status=ok
// SIG undefined FUN_145487920(void)

uint FUN_145487920(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar7 = 0;
  uVar9 = 0;
  uVar11 = 0;
  uVar13 = 0;
  lVar6 = 0x10;
  puVar5 = (uint *)(param_1 + 0x20);
  do {
    uVar1 = puVar5[-8];
    uVar2 = puVar5[-7];
    uVar3 = puVar5[-6];
    uVar4 = puVar5[-5];
    uVar8 = puVar5[-4];
    uVar10 = puVar5[-3];
    uVar12 = puVar5[-2];
    uVar14 = puVar5[-1];
    uVar7 = (uVar7 < uVar1) * uVar1 | (uVar7 >= uVar1) * uVar7;
    uVar9 = (uVar9 < uVar2) * uVar2 | (uVar9 >= uVar2) * uVar9;
    uVar11 = (uVar11 < uVar3) * uVar3 | (uVar11 >= uVar3) * uVar11;
    uVar13 = (uVar13 < uVar4) * uVar4 | (uVar13 >= uVar4) * uVar13;
    uVar8 = (uVar7 < uVar8) * uVar8 | (uVar7 >= uVar8) * uVar7;
    uVar10 = (uVar9 < uVar10) * uVar10 | (uVar9 >= uVar10) * uVar9;
    uVar12 = (uVar11 < uVar12) * uVar12 | (uVar11 >= uVar12) * uVar11;
    uVar14 = (uVar13 < uVar14) * uVar14 | (uVar13 >= uVar14) * uVar13;
    uVar7 = *puVar5;
    uVar9 = puVar5[1];
    uVar11 = puVar5[2];
    uVar13 = puVar5[3];
    uVar1 = puVar5[4];
    uVar2 = puVar5[5];
    uVar3 = puVar5[6];
    uVar4 = puVar5[7];
    uVar7 = (uVar8 < uVar7) * uVar7 | (uVar8 >= uVar7) * uVar8;
    uVar9 = (uVar10 < uVar9) * uVar9 | (uVar10 >= uVar9) * uVar10;
    uVar11 = (uVar12 < uVar11) * uVar11 | (uVar12 >= uVar11) * uVar12;
    uVar13 = (uVar14 < uVar13) * uVar13 | (uVar14 >= uVar13) * uVar14;
    uVar7 = (uVar7 < uVar1) * uVar1 | (uVar7 >= uVar1) * uVar7;
    uVar9 = (uVar9 < uVar2) * uVar2 | (uVar9 >= uVar2) * uVar9;
    uVar11 = (uVar11 < uVar3) * uVar3 | (uVar11 >= uVar3) * uVar11;
    uVar13 = (uVar13 < uVar4) * uVar4 | (uVar13 >= uVar4) * uVar13;
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 0x10;
  } while (lVar6 != 0);
  uVar7 = (uVar7 < uVar11) * uVar11 | (uVar7 >= uVar11) * uVar7;
  uVar9 = (uVar9 < uVar13) * uVar13 | (uVar9 >= uVar13) * uVar9;
  return (uVar7 < uVar9) * uVar9 | (uVar7 >= uVar9) * uVar7;
}



// FUNCTION 145487990 FUN_145487990 body=390 status=ok
// SIG undefined FUN_145487990(void)

void FUN_145487990(ulonglong param_1,longlong param_2,int *param_3,longlong param_4,int *param_5,
                  longlong param_6)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_2 == 0) {
    if (((param_5 != (int *)0x0) && (param_6 != 0)) && (*param_5 != 0)) {
      *param_5 = 0;
    }
    goto LAB_145487af2;
  }
  pcVar3 = (char *)FUN_144e2bfa0(param_2);
  pcVar5 = (char *)0x0;
  if ((*pcVar3 != 'x') || (pcVar6 = pcVar3, pcVar3[1] != '-')) {
    cVar1 = pcVar3[1];
    pcVar4 = pcVar3 + 1;
    pcVar6 = pcVar5;
    if (cVar1 != '\0') {
      do {
        if ((pcVar4[-1] == '-') && (pcVar4[1] == '-')) {
          if (cVar1 == 'x') {
            pcVar6 = pcVar4;
            if (pcVar5 != (char *)0x0) goto LAB_145487a53;
            pcVar5 = pcVar4 + -1;
            break;
          }
          if (pcVar5 == (char *)0x0) {
            pcVar5 = pcVar4 + -1;
          }
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (pcVar5 != (char *)0x0) goto LAB_145487a53;
    }
    pcVar5 = pcVar4;
  }
LAB_145487a53:
  cVar1 = FUN_145489120(pcVar6,param_3,param_4,"-hbsc",&LAB_145487b30);
  cVar2 = FUN_145489120(pcVar6,param_5,param_6,"-hbot",&LAB_145487b20);
  if ((((cVar2 != '\0') && (param_5 != (int *)0x0)) && (param_6 != 0)) && (*param_5 != 0)) {
    FUN_145488f00(pcVar3,pcVar5,param_5,param_6);
  }
  if (cVar1 == '\0') {
    return;
  }
  param_1 = param_1 & 0xffffffff;
LAB_145487af2:
  if (((param_3 != (int *)0x0) && (param_4 != 0)) && (*param_3 != 0)) {
    FUN_145487be0(param_1,param_3,param_4);
  }
  return;
}



// FUNCTION 145487b40 FUN_145487b40 body=148 status=ok
// SIG undefined FUN_145487b40(void)

undefined8 FUN_145487b40(uint param_1)

{
  if (param_1 < 0x4d6c796e) {
    if (param_1 == 0x4d6c796d) {
      return 0x6d6c6d32;
    }
    if (param_1 == 0x42656e67) {
      return 0x626e6732;
    }
    if (param_1 == 0x44657661) {
      return 0x64657632;
    }
    if (param_1 == 0x47756a72) {
      return 0x676a7232;
    }
    if (param_1 == 0x47757275) {
      return 0x67757232;
    }
    if (param_1 == 0x4b6e6461) {
      return 0x6b6e6432;
    }
  }
  else {
    if (param_1 == 0x4d796d72) {
      return 0x6d796d32;
    }
    if (param_1 == 0x4f727961) {
      return 0x6f727932;
    }
    if (param_1 == 0x54616d6c) {
      return 0x746d6c32;
    }
    if (param_1 == 0x54656c75) {
      return 0x74656c32;
    }
  }
  return 0x44464c54;
}



// FUNCTION 145487be0 FUN_145487be0 body=248 status=ok
// SIG undefined FUN_145487be0(void)

void FUN_145487be0(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = FUN_145487b40();
  if (uVar1 != 0x44464c54) {
    *param_3 = uVar1 | 0x33;
    uVar2 = 1;
    if (*param_2 < 2) goto LAB_145487cd0;
    param_3[1] = uVar1;
    uVar3 = 2;
  }
  uVar2 = (uint)uVar3;
  if (*param_2 <= uVar2) goto LAB_145487cd0;
  if (param_1 < 0x4e6b6f70) {
    if (param_1 == 0x4e6b6f6f) {
      param_3[uVar3 & 0xffffffff] = 0x6e6b6f20;
      *param_2 = uVar2 + 1;
      return;
    }
    if (param_1 == 0) goto LAB_145487cd0;
    if (param_1 == 0x48697261) {
      param_3[uVar3 & 0xffffffff] = 0x6b616e61;
      *param_2 = uVar2 + 1;
      return;
    }
    if (param_1 == 0x4c616f6f) {
      param_3[uVar3 & 0xffffffff] = 0x6c616f20;
      *param_2 = uVar2 + 1;
      return;
    }
LAB_145487c96:
    param_1 = param_1 | 0x20000000;
    if (param_1 == 0x44464c54) {
      *param_2 = uVar2;
      return;
    }
  }
  else {
    if (param_1 != 0x56616969) {
      if (param_1 == 0x59696969) {
        param_3[uVar3 & 0xffffffff] = 0x79692020;
        *param_2 = uVar2 + 1;
        return;
      }
      goto LAB_145487c96;
    }
    param_1 = 0x76616920;
  }
  uVar2 = uVar2 + 1;
  param_3[uVar3 & 0xffffffff] = param_1;
LAB_145487cd0:
  *param_2 = uVar2;
  return;
}



// FUNCTION 145487ce0 FUN_145487ce0 body=151 status=ok
// SIG undefined FUN_145487ce0(void)

ulonglong FUN_145487ce0(char *param_1,char *param_2,char *param_3)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  pcVar3 = strstr(param_1,param_3);
  while( true ) {
    if ((pcVar3 == (char *)0x0) || (param_2 <= pcVar3)) {
      return (ulonglong)pcVar3 & 0xffffffffffffff00;
    }
    lVar4 = -1;
    do {
      lVar2 = lVar4 + 1;
      lVar4 = lVar4 + 1;
    } while (param_3[lVar2] != '\0');
    bVar1 = pcVar3[lVar4];
    if (((0x19 < (byte)(bVar1 + 0x9f)) && (0x19 < (byte)(bVar1 - 0x41))) &&
       (9 < (byte)(bVar1 - 0x30))) break;
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != '\0');
    pcVar3 = strstr(pcVar3 + lVar4,param_3);
  }
  return CONCAT71((uint7)(uint3)(bVar1 - 0x41 >> 8),1);
}



// FUNCTION 145487d80 FUN_145487d80 body=82 status=ok
// SIG undefined FUN_145487d80(void)

undefined8 FUN_145487d80(char *param_1,char *param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_2[uVar2] != '\0');
  iVar1 = strncmp(param_1,param_2,uVar2 & 0xffffffff);
  if ((iVar1 == 0) &&
     ((param_1[uVar2 & 0xffffffff] == '\0' || (param_1[uVar2 & 0xffffffff] == '-')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145487de0 FUN_145487de0 body=4276 status=ok
// SIG undefined FUN_145487de0(void)

undefined8 FUN_145487de0(char *param_1,undefined8 param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *_Str2;
  size_t _MaxCount;
  uint local_28 [4];
  
  cVar1 = FUN_145487ce0(param_1,param_2,"-fonnapa");
  if (cVar1 != '\0') {
    *param_4 = 0x41505048;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-polyton");
  if (cVar1 != '\0') {
    *param_4 = 0x50475220;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-provenc");
  if (cVar1 != '\0') {
    *param_4 = 0x50524f20;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-fonipa");
  if (cVar1 != '\0') {
    *param_4 = 0x49505048;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-geok");
  if (cVar1 != '\0') {
    *param_4 = 0x4b474520;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-syre");
  if (cVar1 != '\0') {
    *param_4 = 0x53595245;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-syrj");
  if (cVar1 != '\0') {
    *param_4 = 0x5359524a;
    *param_3 = 1;
    return 1;
  }
  cVar1 = FUN_145487ce0(param_1,param_2,"-syrn");
  if (cVar1 != '\0') {
    *param_4 = 0x5359524e;
    *param_3 = 1;
    return 1;
  }
  switch(*param_1 + -0x61) {
  case 0:
    iVar2 = strcmp(param_1 + 1,"rt-lojban");
    if (iVar2 != 0) {
      return 0;
    }
    *param_4 = 0x4a424f20;
    *param_3 = 1;
    return 1;
  default:
    goto LAB_145488e7c;
  case 2:
    iVar2 = FUN_145487d80(param_1 + 1,"do-hant-hk");
    if ((((((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"do-hant-mo"), iVar2 != 0)) ||
          (iVar2 = FUN_145487d80(param_1 + 1,"jy-hant-hk"), iVar2 != 0)) ||
         ((iVar2 = FUN_145487d80(param_1 + 1,"jy-hant-mo"), iVar2 != 0 ||
          (iVar2 = FUN_145487d80(param_1 + 1,"mn-hant-hk"), iVar2 != 0)))) ||
        (((iVar2 = FUN_145487d80(param_1 + 1,"mn-hant-mo"), iVar2 != 0 ||
          ((iVar2 = FUN_145487d80(param_1 + 1,"px-hant-hk"), iVar2 != 0 ||
           (iVar2 = FUN_145487d80(param_1 + 1,"px-hant-mo"), iVar2 != 0)))) ||
         (iVar2 = FUN_145487d80(param_1 + 1,"zh-hant-hk"), iVar2 != 0)))) ||
       (((iVar2 = FUN_145487d80(param_1 + 1,"zh-hant-mo"), iVar2 != 0 ||
         (iVar2 = FUN_145487d80(param_1 + 1,"zo-hant-hk"), iVar2 != 0)) ||
        (iVar2 = FUN_145487d80(param_1 + 1,"zo-hant-mo"), iVar2 != 0)))) {
LAB_145488cd7:
      *param_4 = 0x5a484820;
      *param_3 = 1;
      return 1;
    }
    iVar2 = FUN_145487d80(param_1 + 1,"do-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"do-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"jy-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"jy-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"mn-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"mn-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"px-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"px-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"zh-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"zh-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"zo-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"zo-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"do-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"do-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    iVar2 = strncmp(param_1 + 1,"do-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0'))
    goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"jy-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"jy-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    iVar2 = strncmp(param_1 + 1,"jy-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0'))
    goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"mn-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"mn-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    iVar2 = strncmp(param_1 + 1,"mn-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0'))
    goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"px-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"px-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    iVar2 = strncmp(param_1 + 1,"px-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0'))
    goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"zh-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"zh-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    iVar2 = strncmp(param_1 + 1,"zh-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0'))
    goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"zo-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"zo-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    _MaxCount = 3;
    _Str2 = "zo-";
    break;
  case 6:
    iVar2 = FUN_145487d80(param_1 + 1,"an-hant-hk");
    if ((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"an-hant-mo"), iVar2 != 0))
    goto LAB_145488cd7;
    iVar2 = FUN_145487d80(param_1 + 1,"an-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"an-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"a-latg");
    if (iVar2 != 0) {
      *param_4 = 0x49525420;
      *param_3 = 1;
      return 1;
    }
    iVar2 = strncmp(param_1 + 1,"an-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"an-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    _MaxCount = 3;
    _Str2 = "an-";
    break;
  case 7:
    iVar2 = FUN_145487d80(param_1 + 1,"ak-hant-hk");
    if ((((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"ak-hant-mo"), iVar2 != 0)) ||
        (iVar2 = FUN_145487d80(param_1 + 1,"sn-hant-hk"), iVar2 != 0)) ||
       (iVar2 = FUN_145487d80(param_1 + 1,"sn-hant-mo"), iVar2 != 0)) goto LAB_145488cd7;
    iVar2 = FUN_145487d80(param_1 + 1,"ak-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"ak-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = FUN_145487d80(param_1 + 1,"sn-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"sn-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"ak-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"ak-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    iVar2 = strncmp(param_1 + 1,"ak-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0'))
    goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"sn-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"sn-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    _MaxCount = 3;
    _Str2 = "sn-";
    break;
  case 8:
    uVar4 = 0;
    uVar9 = uVar4;
    do {
      uVar7 = uVar9 + 1;
      uVar8 = uVar4;
      if (param_1[uVar9 + 1] != (&DAT_149d698b8)[uVar9]) {
        while (uVar9 = uVar8 + 1, param_1[uVar8 + 1] == (&DAT_149d698c0)[uVar8]) {
          uVar8 = uVar9;
          if (uVar9 == 5) {
            *param_4 = 0x5a485320;
            *param_3 = 1;
            return 1;
          }
        }
        do {
          uVar9 = uVar4 + 1;
          if (param_1[uVar4 + 1] != (&DAT_149d698c8)[uVar4]) {
            return 0;
          }
          uVar4 = uVar9;
        } while (uVar9 != 5);
        *param_4 = 0x4c545a20;
        *param_3 = 1;
        return 1;
      }
      uVar9 = uVar7;
    } while (uVar7 != 8);
    local_28[0] = 0x4e415620;
    lVar5 = (longlong)local_28 - (longlong)param_4;
    local_28[1] = 0x41544820;
    do {
      uVar3 = (uint)uVar4;
      if (*param_3 <= uVar3) break;
      uVar3 = uVar3 + 1;
      uVar4 = (ulonglong)uVar3;
      *param_4 = *(undefined4 *)(lVar5 + (longlong)param_4);
      param_4 = param_4 + 1;
    } while (uVar3 < 2);
    *param_3 = uVar3;
    return 1;
  case 0xb:
    iVar2 = FUN_145487d80(param_1 + 1,"zh-hans");
    if (iVar2 == 0) {
      return 0;
    }
    goto LAB_145488973;
  case 0xc:
    iVar2 = FUN_145487d80(param_1 + 1,"np-hant-hk");
    if ((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"np-hant-mo"), iVar2 != 0))
    goto LAB_145488cd7;
    iVar2 = FUN_145487d80(param_1 + 1,"np-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"np-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"np-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"np-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    _MaxCount = 3;
    _Str2 = "np-";
    break;
  case 0xd:
    iVar2 = FUN_145487d80(param_1 + 1,"an-hant-hk");
    if ((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"an-hant-mo"), iVar2 != 0))
    goto LAB_145488cd7;
    iVar2 = FUN_145487d80(param_1 + 1,"an-hans");
    if (iVar2 == 0) {
      iVar2 = FUN_145487d80(param_1 + 1,"an-hant");
      if (iVar2 == 0) {
        iVar2 = strncmp(param_1 + 1,"an-",3);
        if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0'))
           || ((iVar2 = strncmp(param_1 + 1,"an-",3), iVar2 == 0 &&
               (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
        goto LAB_145488cd7;
        iVar2 = strncmp(param_1 + 1,"an-",3);
        if ((iVar2 != 0) || (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 == '\0'))
        {
          lVar5 = 0;
          lVar6 = lVar5;
          while (lVar10 = lVar6 + 1, param_1[lVar6 + 1] == (&DAT_149d69904)[lVar6]) {
            lVar6 = lVar10;
            if (lVar10 == 6) {
              *param_4 = 0x4e4f5220;
              *param_3 = 1;
              return 1;
            }
          }
          do {
            lVar6 = lVar5 + 1;
            if (param_1[lVar5 + 1] != (&DAT_149d6990c)[lVar5]) {
              return 0;
            }
            lVar5 = lVar6;
          } while (lVar6 != 6);
          *param_4 = 0x4e594e20;
          *param_3 = 1;
          return 1;
        }
      }
      goto LAB_145488e6a;
    }
LAB_145488973:
    *param_4 = 0x5a485320;
    *param_3 = 1;
    return 1;
  case 0x11:
    iVar2 = strncmp(param_1 + 1,"o-",2);
    if (iVar2 != 0) {
      return 0;
    }
    cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d69918);
    if (cVar1 == '\0') {
      return 0;
    }
    *param_4 = 0x4d4f4c20;
    *param_3 = 1;
    return 1;
  case 0x16:
    iVar2 = FUN_145487d80(param_1 + 1,"uu-hant-hk");
    if ((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"uu-hant-mo"), iVar2 != 0))
    goto LAB_145488cd7;
    iVar2 = FUN_145487d80(param_1 + 1,"uu-hans");
    if (iVar2 != 0) goto LAB_145488973;
    iVar2 = FUN_145487d80(param_1 + 1,"uu-hant");
    if (iVar2 != 0) goto LAB_145488e6a;
    iVar2 = strncmp(param_1 + 1,"uu-",3);
    if (((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
       ((iVar2 = strncmp(param_1 + 1,"uu-",3), iVar2 == 0 &&
        (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
    goto LAB_145488cd7;
    _MaxCount = 3;
    _Str2 = "uu-";
    break;
  case 0x18:
    iVar2 = FUN_145487d80(param_1 + 1,"ue-hans");
    if (iVar2 == 0) {
      return 0;
    }
    *param_4 = 0x5a485320;
    *param_3 = 1;
    return 1;
  case 0x19:
    iVar2 = FUN_145487d80(param_1 + 1,"h-hant-hk");
    if ((iVar2 != 0) || (iVar2 = FUN_145487d80(param_1 + 1,"h-hant-mo"), iVar2 != 0)) {
LAB_145488e29:
      *param_4 = 0x5a484820;
      *param_3 = 1;
      return 1;
    }
    iVar2 = strcmp(param_1 + 1,"h-min-nan");
    if ((iVar2 != 0) && (iVar2 = FUN_145487d80(param_1 + 1,"h-hans"), iVar2 == 0)) {
      iVar2 = FUN_145487d80(param_1 + 1,"h-hant");
      if (iVar2 != 0) goto LAB_145488e6a;
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if (param_1[lVar5 + 1] != "h-min"[lVar5]) {
          iVar2 = strncmp(param_1 + 1,"h-",2);
          if (((iVar2 == 0) &&
              (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697ec), cVar1 != '\0')) ||
             ((iVar2 = strncmp(param_1 + 1,"h-",2), iVar2 == 0 &&
              (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f0), cVar1 != '\0'))))
          goto LAB_145488e29;
          _MaxCount = 2;
          _Str2 = "h-";
          goto LAB_145488e46;
        }
        lVar5 = lVar6;
      } while (lVar6 != 6);
    }
    *param_4 = 0x5a485320;
    *param_3 = 1;
    return 1;
  }
LAB_145488e46:
  iVar2 = strncmp(param_1 + 1,_Str2,_MaxCount);
  if ((iVar2 == 0) && (cVar1 = FUN_145487ce0(param_1,param_2,&DAT_149d697f4), cVar1 != '\0')) {
LAB_145488e6a:
    *param_4 = 0x5a485420;
    *param_3 = 1;
    return 1;
  }
LAB_145488e7c:
  return 0;
}



// FUNCTION 145488f00 FUN_145488f00 body=532 status=ok
// SIG undefined FUN_145488f00(void)

void FUN_145488f00(char *param_1,longlong param_2,uint *param_3,uint *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  
  cVar2 = FUN_145487de0();
  if (cVar2 != '\0') {
    return;
  }
  pcVar6 = strchr(param_1,0x2d);
  if ((pcVar6 != (char *)0x0) && (5 < param_2 - (longlong)param_1)) {
    pcVar7 = strchr(pcVar6 + 1,0x2d);
    if (pcVar7 == (char *)0x0) {
      pcVar11 = (char *)0xffffffffffffffff;
      do {
        pcVar7 = pcVar11 + 1;
        pcVar1 = pcVar11 + 2;
        pcVar11 = pcVar7;
      } while (pcVar6[(longlong)pcVar1] != '\0');
    }
    else {
      pcVar7 = pcVar7 + (-1 - (longlong)pcVar6);
    }
    if ((pcVar7 == (char *)0x3) &&
       (((byte)(pcVar6[1] + 0x9fU) < 0x1a || ((byte)(pcVar6[1] + 0xbfU) < 0x1a)))) {
      param_1 = pcVar6 + 1;
    }
  }
  uVar9 = 0;
  iVar13 = 0x3eb;
  uVar12 = uVar9;
  do {
    uVar3 = (uint)((int)uVar12 + iVar13) >> 1;
    pcVar11 = &DAT_149d657a0 + (ulonglong)uVar3 * 0x10;
    pcVar7 = strchr(param_1,0x2d);
    if (pcVar7 == (char *)0x0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_1[lVar10] != '\0');
      uVar14 = (uint)lVar10;
    }
    else {
      uVar14 = (int)pcVar7 - (int)param_1;
    }
    pcVar7 = strchr(pcVar11,0x2d);
    if (pcVar7 == (char *)0x0) {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar8 = uVar8 + 1;
      } while (pcVar11[uVar8] != '\0');
    }
    else {
      uVar8 = (ulonglong)(uint)((int)pcVar7 - (int)pcVar11);
    }
    uVar4 = (uint)uVar8;
    if ((uint)uVar8 < uVar14) {
      uVar4 = uVar14;
    }
    iVar5 = strncmp(param_1,pcVar11,(ulonglong)uVar4);
    if (iVar5 < 0) {
      iVar13 = uVar3 - 1;
    }
    else {
      if (iVar5 < 1) {
        if ((ulonglong)uVar3 != 0xfffffffeb629a86) {
          if (*param_3 == 0) goto LAB_1454890e3;
          goto LAB_1454890d0;
        }
        break;
      }
      uVar12 = (ulonglong)(uVar3 + 1);
    }
  } while ((int)uVar12 <= iVar13);
  if (pcVar6 == (char *)0x0) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (param_1[lVar10] != '\0');
    pcVar6 = param_1 + lVar10;
  }
  if ((longlong)pcVar6 - (longlong)param_1 == 3) {
    uVar3 = FUN_144e2bf00(param_1,(int)pcVar6 - (int)param_1);
    *param_4 = uVar3 & 0xdfdfdfff;
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  return;
  while( true ) {
    param_4[uVar9] = *(uint *)(&UNK_149d657a4 + uVar9 * 4 + (ulonglong)uVar3 * 0x10);
    uVar14 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar14;
    if (*param_3 <= uVar14) break;
LAB_1454890d0:
    if (*(uint *)(&UNK_149d657a4 + uVar9 * 4 + (ulonglong)uVar3 * 0x10) == 0) break;
  }
LAB_1454890e3:
  *param_3 = (uint)uVar9;
  return;
}



// FUNCTION 145489120 FUN_145489120 body=334 status=ok
// SIG undefined FUN_145489120(void)

undefined8 FUN_145489120(char *param_1,int *param_2,uint *param_3,char *param_4,code *param_5)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char local_res8 [8];
  
  if ((((param_1 != (char *)0x0) && (param_2 != (int *)0x0)) && (param_3 != (uint *)0x0)) &&
     (*param_2 != 0)) {
    pcVar2 = strstr(param_1,param_4);
    if (pcVar2 != (char *)0x0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_4[lVar3] != '\0');
      pcVar2 = pcVar2 + lVar3;
      iVar5 = 0;
      pcVar6 = pcVar2;
      do {
        cVar1 = *pcVar6;
        if (((0x19 < (byte)(cVar1 + 0x9fU)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
           (9 < (byte)(cVar1 - 0x30U))) break;
        cVar1 = (*param_5)();
        pcVar6[(longlong)(local_res8 + -(longlong)pcVar2)] = cVar1;
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 1;
      } while ((longlong)pcVar6 - (longlong)pcVar2 < 4);
      if (iVar5 != 0) {
        if (iVar5 < 4) {
          pcVar2 = local_res8 + iVar5;
          for (lVar3 = (longlong)(4 - iVar5); lVar3 != 0; lVar3 = lVar3 + -1) {
            *pcVar2 = ' ';
            pcVar2 = pcVar2 + 1;
          }
        }
        uVar4 = CONCAT31(CONCAT21(CONCAT11(local_res8[0],local_res8[1]),local_res8[2]),local_res8[3]
                        );
        *param_3 = uVar4;
        if ((uVar4 & 0xdfdfdfdf) == 0x44464c54) {
          *param_3 = uVar4 ^ 0x20202020;
        }
        *param_2 = 1;
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 145489270 FUN_145489270 body=378 status=ok
// SIG undefined FUN_145489270(void)

undefined2 FUN_145489270(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0xc;
  if (param_1 >> 0xc == 0) {
    if (param_1 == 0xa0) {
      return 0xf0b;
    }
    uVar1 = param_1 - 0x28;
    if (0x17 < uVar1) {
      if (0x27 < param_1 - 0xb0) {
        if (0x4f7 < param_1 - 0x900) {
          return 0xf00;
        }
        return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0x8c0) * 2);
      }
      uVar1 = param_1 - 0x98;
    }
    return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)uVar1 * 2);
  }
  if (uVar1 == 1) {
    if (param_1 - 0x1000 < 0xa0) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0xac8) * 2);
    }
    if (param_1 - 0x1780 < 0x70) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0x11a8) * 2);
    }
    if (param_1 - 0x1cd0 < 0x30) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0x1688) * 2);
    }
  }
  else if (uVar1 == 2) {
    if (param_1 == 0x25cc) {
      return 0xf0b;
    }
    if (param_1 - 0x2008 < 0x10) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0x1990) * 2);
    }
    if (param_1 - 0x2070 < 0x18) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0x19e8) * 2);
    }
  }
  else if (uVar1 == 10) {
    if (param_1 - 0xa8e0 < 0x20) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0xa240) * 2);
    }
    if (param_1 - 0xa9e0 < 0x20) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0xa320) * 2);
    }
    if (param_1 - 0xaa60 < 0x20) {
      return *(undefined2 *)(&DAT_149d699f0 + (ulonglong)(param_1 - 0xa380) * 2);
    }
  }
  return 0xf00;
}



// FUNCTION 1454893f0 FUN_1454893f0 body=2764 status=ok
// SIG undefined FUN_1454893f0(void)

void FUN_1454893f0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if ((*(byte *)(param_2 + 0x18) & 0x10) == 0) {
    FUN_144b61b50(param_2);
    uVar4 = *(uint *)(param_2 + 0x3c);
    uVar1 = *(uint *)(param_2 + 0x60);
    if (uVar4 < 0x4d6f646a) {
      if (uVar4 == 0x4d6f6469) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            bVar5 = false;
            iVar2 = *(int *)(*(longlong *)(param_2 + 0x70) +
                            (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14);
            if ((iVar2 == 0x11600 || iVar2 == 0x11601) &&
               (iVar2 = *(int *)(*(longlong *)(param_2 + 0x70) +
                                (ulonglong)(*(uint *)(param_2 + 0x5c) + 1) * 0x14),
               iVar2 == 0x11639 || iVar2 == 0x1163a)) {
              bVar5 = true;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              lVar3 = FUN_1451e0a10(param_2,0x25cc);
              *(ushort *)(lVar3 + 0x10) = *(ushort *)(lVar3 + 0x10) & 0xff7f;
              FUN_144e3cb60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
      else if (uVar4 < 0x47756a73) {
        if (uVar4 == 0x47756a72) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
          if (1 < uVar1) {
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              uVar4 = *(uint *)(param_2 + 0x5c);
              bVar5 = false;
              lVar3 = *(longlong *)(param_2 + 0x70);
              iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
              if (iVar2 == 0xa85) {
                switch(*(undefined4 *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14)) {
                case 0xabe:
                case 0xac5:
                case 0xac7:
                case 0xac8:
                case 0xac9:
                case 0xacb:
                case 0xacc:
                  bVar5 = true;
                }
              }
              else if (iVar2 == 0xac5) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xabe;
              }
              FUN_144e3cb60(param_2);
              if (bVar5) {
                FUN_145489f60(param_2);
              }
            } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
          }
        }
        else if (uVar4 == 0x42656e67) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
          if (1 < uVar1) {
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              uVar4 = *(uint *)(param_2 + 0x5c);
              bVar5 = false;
              lVar3 = *(longlong *)(param_2 + 0x70);
              iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
              if (iVar2 == 0x985) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x9be;
              }
              else if (iVar2 == 0x98b) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x9c3;
              }
              else if (iVar2 == 0x98c) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x9e2;
              }
              FUN_144e3cb60(param_2);
              if (bVar5) {
                FUN_145489f60(param_2);
              }
            } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
          }
        }
        else if (uVar4 == 0x42726168) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
          if (1 < uVar1) {
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              uVar4 = *(uint *)(param_2 + 0x5c);
              bVar5 = false;
              lVar3 = *(longlong *)(param_2 + 0x70);
              iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
              if (iVar2 == 0x11005) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x11038;
              }
              else if (iVar2 == 0x1100b) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x1103e;
              }
              else if (iVar2 == 0x1100f) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x11042;
              }
              FUN_144e3cb60(param_2);
              if (bVar5) {
                FUN_145489f60(param_2);
              }
            } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
          }
        }
        else {
          if (uVar4 != 0x44657661) {
            return;
          }
          *(undefined4 *)(param_2 + 0x5c) = 0;
          if (1 < uVar1) {
            do {
              if (*(char *)(param_2 + 0x58) == '\0') break;
              uVar4 = *(uint *)(param_2 + 0x5c);
              bVar5 = false;
              lVar3 = *(longlong *)(param_2 + 0x70);
              iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
              if (iVar2 == 0x905) {
                switch(*(undefined4 *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14)) {
                case 0x93a:
                case 0x93b:
                case 0x93e:
                case 0x945:
                case 0x946:
                case 0x949:
                case 0x94a:
                case 0x94b:
                case 0x94c:
                case 0x94f:
                case 0x956:
                case 0x957:
switchD_1454895b5_caseD_93a:
                  bVar5 = true;
                }
              }
              else if (iVar2 == 0x906) {
                iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
                if ((iVar2 == 0x93a) || (iVar2 - 0x945U < 4)) goto switchD_1454895b5_caseD_93a;
              }
              else if (iVar2 == 0x909) {
                bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x941;
              }
              else if (iVar2 == 0x90f) {
                if (*(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) - 0x945U < 3)
                goto switchD_1454895b5_caseD_93a;
              }
              else if ((((iVar2 == 0x930) &&
                        (*(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x94d)) &&
                       (uVar4 + 2 < uVar1)) &&
                      (*(int *)(lVar3 + (ulonglong)(uVar4 + 2) * 0x14) == 0x907)) {
                FUN_144e3cb60(param_2);
                FUN_144e3cb60(param_2);
                lVar3 = FUN_1451e0a10(param_2,0x25cc);
                *(ushort *)(lVar3 + 0x10) = *(ushort *)(lVar3 + 0x10) & 0xff7f;
              }
              FUN_144e3cb60(param_2);
              if (bVar5) {
                FUN_145489f60(param_2);
              }
            } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
          }
        }
      }
      else if (uVar4 == 0x47757275) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            uVar4 = *(uint *)(param_2 + 0x5c);
            bVar5 = false;
            lVar3 = *(longlong *)(param_2 + 0x70);
            iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
            if (iVar2 == 0xa05) {
              iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
              if ((iVar2 != 0xa3e) && (iVar2 != 0xa48)) {
                bVar6 = iVar2 == 0xa4c;
LAB_14548999c:
                if (!bVar6) goto LAB_1454899a1;
              }
LAB_14548999e:
              bVar5 = true;
            }
            else if (iVar2 == 0xa72) {
              iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
              if (((iVar2 - 0xa3fU & 0xfffffff6) == 0) && (iVar2 != 0xa48)) goto LAB_14548999e;
            }
            else if (iVar2 == 0xa73) {
              iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
              if (1 < iVar2 - 0xa41U) {
                bVar6 = iVar2 == 0xa4b;
                goto LAB_14548999c;
              }
              goto LAB_14548999e;
            }
LAB_1454899a1:
            FUN_144e3cb60(param_2);
            if (bVar5) {
              FUN_145489f60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
      else if (uVar4 == 0x4b6e6461) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            uVar4 = *(uint *)(param_2 + 0x5c);
            bVar5 = false;
            lVar3 = *(longlong *)(param_2 + 0x70);
            iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
            if ((iVar2 == 0xc89) || (iVar2 == 0xc8b)) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xcbe;
            }
            else if (iVar2 == 0xc92) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xccc;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              FUN_145489f60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
      else {
        if (uVar4 != 0x4d6c796d) {
          return;
        }
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            uVar4 = *(uint *)(param_2 + 0x5c);
            bVar5 = false;
            lVar3 = *(longlong *)(param_2 + 0x70);
            iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
            if ((iVar2 == 0xd07) || (iVar2 == 0xd09)) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xd57;
            }
            else if (iVar2 == 0xd0e) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xd46;
            }
            else if ((iVar2 == 0xd12) &&
                    ((iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14), iVar2 == 0xd3e ||
                     (iVar2 == 0xd57)))) {
              bVar5 = true;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              FUN_145489f60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
    }
    else if (uVar4 < 0x54616b73) {
      if (uVar4 == 0x54616b72) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            uVar4 = *(uint *)(param_2 + 0x5c);
            bVar5 = false;
            lVar3 = *(longlong *)(param_2 + 0x70);
            iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
            if (iVar2 == 0x11680) {
              iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
              if ((iVar2 == 0x116ad) || (iVar2 - 0x116b4U < 2)) {
                bVar5 = true;
              }
            }
            else if (iVar2 == 0x11686) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x116b2;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              lVar3 = FUN_1451e0a10(param_2,0x25cc);
              *(ushort *)(lVar3 + 0x10) = *(ushort *)(lVar3 + 0x10) & 0xff7f;
              FUN_144e3cb60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
      else if (uVar4 == 0x4f727961) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            uVar4 = *(uint *)(param_2 + 0x5c);
            bVar5 = false;
            lVar3 = *(longlong *)(param_2 + 0x70);
            iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
            if (iVar2 == 0xb05) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xb3e;
            }
            else if ((iVar2 == 0xb0f) || (iVar2 == 0xb13)) {
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xb57;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              FUN_145489f60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
      else if (uVar4 == 0x53696e64) {
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            bVar5 = false;
            if ((*(int *)(*(longlong *)(param_2 + 0x70) +
                         (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14) == 0x112b0) &&
               ((iVar2 = *(int *)(*(longlong *)(param_2 + 0x70) +
                                 (ulonglong)(*(uint *)(param_2 + 0x5c) + 1) * 0x14),
                iVar2 == 0x112e0 || (iVar2 - 0x112e5U < 4)))) {
              bVar5 = true;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              FUN_145489f60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
      else {
        if (uVar4 != 0x53696e68) {
          return;
        }
        *(undefined4 *)(param_2 + 0x5c) = 0;
        if (1 < uVar1) {
          do {
            if (*(char *)(param_2 + 0x58) == '\0') break;
            uVar4 = *(uint *)(param_2 + 0x5c);
            bVar5 = false;
            lVar3 = *(longlong *)(param_2 + 0x70);
            switch(*(undefined4 *)(lVar3 + (ulonglong)uVar4 * 0x14)) {
            case 0xd85:
              uVar4 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) - 0xdcf;
              bVar6 = uVar4 < 2;
              bVar7 = uVar4 == 2;
LAB_145489b3b:
              if (bVar6 || bVar7) goto LAB_145489b3d;
              break;
            case 0xd8b:
            case 0xd8f:
            case 0xd94:
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xddf;
              break;
            case 0xd8d:
              bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xdd8;
              break;
            case 0xd91:
              uVar4 = *(uint *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
              if (uVar4 != 0xdca) {
                if (uVar4 < 0xdd9) break;
                if (0xdda < uVar4) {
                  bVar6 = uVar4 == 0xddc;
                  bVar7 = uVar4 == 0xddd;
                  goto LAB_145489b3b;
                }
              }
LAB_145489b3d:
              bVar5 = true;
            }
            FUN_144e3cb60(param_2);
            if (bVar5) {
              FUN_145489f60(param_2);
            }
          } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
        }
      }
    }
    else if (uVar4 == 0x54656c75) {
      *(undefined4 *)(param_2 + 0x5c) = 0;
      if (1 < uVar1) {
        do {
          if (*(char *)(param_2 + 0x58) == '\0') break;
          uVar4 = *(uint *)(param_2 + 0x5c);
          bVar5 = false;
          lVar3 = *(longlong *)(param_2 + 0x70);
          iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
          if (iVar2 == 0xc12) {
            iVar2 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14);
            if ((iVar2 == 0xc4c) || (iVar2 == 0xc55)) {
              bVar5 = true;
            }
          }
          else if (((iVar2 == 0xc3f) || (iVar2 == 0xc46)) || (iVar2 == 0xc4a)) {
            bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0xc55;
          }
          FUN_144e3cb60(param_2);
          if (bVar5) {
            lVar3 = FUN_1451e0a10(param_2,0x25cc);
            *(ushort *)(lVar3 + 0x10) = *(ushort *)(lVar3 + 0x10) & 0xff7f;
            FUN_144e3cb60(param_2);
          }
        } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
      }
    }
    else {
      if (uVar4 != 0x54697268) {
        return;
      }
      *(undefined4 *)(param_2 + 0x5c) = 0;
      if (1 < uVar1) {
        do {
          if (*(char *)(param_2 + 0x58) == '\0') break;
          uVar4 = *(uint *)(param_2 + 0x5c);
          bVar5 = false;
          lVar3 = *(longlong *)(param_2 + 0x70);
          iVar2 = *(int *)(lVar3 + (ulonglong)uVar4 * 0x14);
          if (iVar2 == 0x11481) {
            bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x114b0;
          }
          else if ((iVar2 == 0x1148b) || (iVar2 == 0x1148d)) {
            bVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) == 0x114ba;
          }
          else if ((iVar2 == 0x114aa) &&
                  (*(int *)(lVar3 + (ulonglong)(uVar4 + 1) * 0x14) - 0x114b5U < 2)) {
            bVar5 = true;
          }
          FUN_144e3cb60(param_2);
          if (bVar5) {
            FUN_145489f60(param_2);
          }
        } while (*(int *)(param_2 + 0x5c) + 1U < uVar1);
      }
    }
    if (*(uint *)(param_2 + 0x5c) < uVar1) {
      FUN_144e3cb60(param_2);
    }
    FUN_144b61af0(param_2);
  }
  return;
}



// FUNCTION 145489f60 FUN_145489f60 body=41 status=ok
// SIG undefined FUN_145489f60(void)

void FUN_145489f60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1451e0a10(param_1,0x25cc);
  *(ushort *)(lVar1 + 0x10) = *(ushort *)(lVar1 + 0x10) & 0xff7f;
  FUN_144e3cb60(param_1);
  return;
}



// FUNCTION 145489f90 FUN_145489f90 body=826 status=ok
// SIG undefined FUN_145489f90(void)

ulonglong FUN_145489f90(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)(ulonglong)(param_1 >> 0xc);
  pcVar3 = pcVar2;
  if (param_1 >> 0xc < 0x12) {
    pcVar3 = IMAGE_DOS_HEADER_140000000.e_magic +
             (&switchD_145489faf::switchdataD_14548a2cc)[(longlong)pcVar2];
    switch(pcVar2) {
    case (char *)0x0:
      uVar1 = param_1 - 0x28;
      if (0x17 < uVar1) {
        if (0x37 < param_1 - 0xa0) {
          if (param_1 - 0x348 < 8) {
            return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x2f8];
          }
          if (param_1 - 0x900 < 0x4f8) {
            return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x8a8];
          }
          pcVar3 = (char *)(ulonglong)(param_1 - 0xf18);
          if (param_1 - 0xf18 < 0xb0) {
            return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x9c8];
          }
          break;
        }
        uVar1 = param_1 - 0x88;
      }
      return (ulonglong)(byte)(&DAT_149d6a7f0)[uVar1];
    case (char *)0x1:
      if (param_1 - 0x1000 < 0xa0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0xa00];
      }
      if (param_1 - 0x1700 < 0xf0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1060];
      }
      if (param_1 - 0x1900 < 0x1a0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1170];
      }
      if (param_1 - 0x1b00 < 0x150) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x11d0];
      }
      if (param_1 - 0x1cd0 < 0x30) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1250];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0x1df8);
      if (param_1 - 0x1df8 < 8) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1348];
      }
      break;
    case (char *)0x2:
      if (param_1 - 0x2008 < 0x10) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1550];
      }
      if (param_1 - 0x2060 < 0x28) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1598];
      }
      if (param_1 - 0x20f0 < 8) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1600];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0x25c8);
      if (param_1 - 0x25c8 < 8) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x1ad0];
      }
      break;
    case (char *)0xa:
      if (param_1 - 0xa800 < 0x2f8) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x9d00];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0xabc0);
      if (param_1 - 0xabc0 < 0x40) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x9dc8];
      }
      break;
    case (char *)0xf:
      pcVar3 = (char *)(ulonglong)(param_1 - 0xfe00);
      if (param_1 - 0xfe00 < 0x10) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0xefc8];
      }
      break;
    case (char *)0x10:
      pcVar3 = (char *)(ulonglong)(param_1 - 0x10a00);
      if (param_1 - 0x10a00 < 0x50) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0xfbb8];
      }
      break;
    case (char *)0x11:
      if (param_1 - 0x11000 < 0xc0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x10168];
      }
      if (param_1 - 0x11100 < 0x140) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x101a8];
      }
      if (param_1 - 0x11280 < 0xf8) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x101e8];
      }
      if (param_1 - 0x11400 < 0xe0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x10270];
      }
      if (param_1 - 0x11580 < 0x1c0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x10310];
      }
      if (param_1 - 0x11800 < 0x40) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x103d0];
      }
      if (param_1 - 0x119a0 < 0x100) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x10530];
      }
      if (param_1 - 0x11c00 < 0xb8) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x10690];
      }
      if (param_1 - 0x11d00 < 0xb0) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x106d8];
      }
      pcVar3 = (char *)(ulonglong)(param_1 - 0x11ee0);
      if (param_1 - 0x11ee0 < 0x18) {
        return (ulonglong)(byte)(&DAT_149d6a7f0)[param_1 - 0x10808];
      }
    }
  }
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}



// FUNCTION 14548a320 FUN_14548a320 body=962 status=ok
// SIG undefined FUN_14548a320(void)

void FUN_14548a320(short *param_1,uint param_2,int param_3,uint param_4,int param_5,ushort param_6)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  short *psVar8;
  short sVar9;
  ushort *puVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  short sVar17;
  longlong lVar18;
  short *psVar19;
  ushort *puVar20;
  uint local_94;
  uint local_90;
  
  local_90 = 2;
  uVar1 = param_2;
  if ((int)param_4 < (int)param_2) {
    uVar1 = param_4;
  }
  local_94 = 1;
  if (1 < (int)uVar1) {
    do {
      iVar12 = local_90 * param_3;
      lVar18 = (longlong)(int)(local_94 * param_3);
      psVar19 = param_1;
      if (param_1 + (int)((param_4 - local_90) * param_5) < param_1) {
        iVar3 = param_2 - local_90;
      }
      else {
        lVar15 = (longlong)(int)(local_94 * param_5);
        iVar3 = param_2 - local_90;
        do {
          psVar8 = psVar19;
          if (psVar19 <= psVar19 + iVar3 * param_3) {
            puVar10 = (ushort *)(psVar19 + lVar18);
            lVar4 = lVar15 - lVar18;
            do {
              sVar11 = *psVar8;
              if (param_6 < 0x4000) {
                sVar9 = sVar11 - *puVar10;
                sVar17 = puVar10[lVar4] - puVar10[lVar4 + lVar18];
                sVar6 = (short)((int)(short)puVar10[lVar4] + (int)(short)puVar10[lVar4 + lVar18] >>
                               1);
                sVar11 = (short)((int)sVar11 + (int)(short)*puVar10 >> 1);
                uVar14 = (uint)(ushort)(sVar9 - sVar17);
                *psVar8 = (short)((int)sVar6 + (int)sVar11 >> 1);
                puVar10[lVar4] = sVar11 - sVar6;
                uVar2 = (ushort)((int)sVar17 + (int)sVar9 >> 1);
              }
              else {
                uVar14 = (uint)*puVar10 + (uint)(ushort)(sVar11 + 0x8000U) >> 1;
                uVar13 = (uint)(ushort)(sVar11 + 0x8000U) - (uint)*puVar10;
                if ((int)uVar13 < 0) {
                  uVar14 = uVar14 + 0x8000;
                }
                uVar16 = puVar10[lVar4] - 0x8000 & 0xffff;
                uVar7 = puVar10[lVar4 + lVar18] + uVar16 >> 1;
                uVar16 = uVar16 - puVar10[lVar4 + lVar18];
                if ((int)uVar16 < 0) {
                  uVar7 = uVar7 + 0x8000;
                }
                uVar14 = (uVar14 & 0xffff) - 0x8000 & 0xffff;
                sVar11 = (short)((uVar7 & 0xffff) + uVar14 >> 1);
                iVar5 = uVar14 - (uVar7 & 0xffff);
                if (iVar5 < 0) {
                  sVar11 = sVar11 + -0x8000;
                }
                *psVar8 = sVar11;
                uVar16 = uVar16 & 0xffff;
                puVar10[lVar4] = (ushort)iVar5;
                uVar14 = (uVar13 & 0xffff) - 0x8000 & 0xffff;
                uVar2 = (ushort)(uVar16 + uVar14 >> 1);
                uVar14 = uVar14 - uVar16;
                if ((int)uVar14 < 0) {
                  uVar2 = uVar2 + 0x8000;
                }
              }
              puVar20 = puVar10 + lVar4 + lVar18;
              *puVar10 = uVar2;
              psVar8 = psVar8 + iVar12;
              puVar10 = puVar10 + iVar12;
              *puVar20 = (ushort)uVar14;
            } while (psVar8 <= psVar19 + iVar3 * param_3);
          }
          if ((local_94 & param_2) != 0) {
            sVar11 = *psVar8;
            if (param_6 < 0x4000) {
              sVar6 = psVar8[lVar15];
              psVar8[lVar15] = sVar11 - sVar6;
              sVar6 = (short)((int)sVar11 + (int)sVar6 >> 1);
            }
            else {
              sVar6 = (short)((uint)(ushort)psVar8[lVar15] + (uint)(ushort)(sVar11 + 0x8000U) >> 1);
              iVar5 = (uint)(ushort)(sVar11 + 0x8000U) - (uint)(ushort)psVar8[lVar15];
              if (iVar5 < 0) {
                sVar6 = sVar6 + -0x8000;
              }
              psVar8[lVar15] = (short)iVar5;
            }
            *psVar8 = sVar6;
          }
          psVar19 = psVar19 + (int)(local_90 * param_5);
        } while (psVar19 <= param_1 + (int)((param_4 - local_90) * param_5));
      }
      if (((param_4 & local_94) != 0) && (psVar8 = psVar19 + iVar3 * param_3, psVar19 <= psVar8)) {
        do {
          sVar11 = *psVar19;
          if (param_6 < 0x4000) {
            sVar6 = (short)((int)sVar11 + (int)psVar19[lVar18] >> 1);
            uVar14 = (uint)(ushort)(sVar11 - psVar19[lVar18]);
          }
          else {
            sVar6 = (short)((uint)(ushort)psVar19[lVar18] + (uint)(ushort)(sVar11 + 0x8000U) >> 1);
            uVar14 = (uint)(ushort)(sVar11 + 0x8000U) - (uint)(ushort)psVar19[lVar18];
            if ((int)uVar14 < 0) {
              sVar6 = sVar6 + -0x8000;
            }
          }
          psVar19[lVar18] = (short)uVar14;
          *psVar19 = sVar6;
          psVar19 = psVar19 + iVar12;
        } while (psVar19 <= psVar8);
      }
      uVar14 = local_90 * 2;
      local_94 = local_90;
      local_90 = uVar14;
    } while ((int)uVar14 <= (int)uVar1);
  }
  return;
}



// FUNCTION 14548a6f0 FUN_14548a6f0 body=1007 status=ok
// SIG undefined FUN_14548a6f0(void)

void FUN_14548a6f0(short *param_1,uint param_2,int param_3,uint param_4,int param_5,ushort param_6)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  short sVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  ushort uVar8;
  short sVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar7 = 1;
  uVar14 = param_2;
  if ((int)param_4 < (int)param_2) {
    uVar14 = param_4;
  }
  if (0 < (int)uVar14) {
    do {
      iVar7 = iVar7 * 2;
    } while (iVar7 <= (int)uVar14);
  }
  uVar14 = iVar7 >> 1;
  uVar15 = iVar7 >> 2;
  if (0 < (int)uVar15) {
    do {
      iVar7 = uVar14 * param_3;
      lVar13 = (longlong)(int)(uVar15 * param_3);
      psVar6 = param_1;
      if (param_1 + (int)((param_4 - uVar14) * param_5) < param_1) {
        iVar1 = param_2 - uVar14;
      }
      else {
        lVar10 = (longlong)(int)(uVar15 * param_5);
        iVar1 = param_2 - uVar14;
        do {
          psVar2 = psVar6;
          if (psVar6 <= psVar6 + iVar1 * param_3) {
            psVar5 = psVar6 + lVar13;
            lVar3 = lVar10 - lVar13;
            do {
              if (param_6 < 0x4000) {
                uVar8 = psVar5[lVar13 + lVar3];
                uVar12 = psVar5[lVar3];
                uVar11 = ((short)uVar8 >> 1) + (uVar8 & 1) + *psVar5;
                sVar9 = ((short)uVar12 >> 1) + (uVar12 & 1) + *psVar2;
                sVar4 = ((short)uVar11 >> 1) + (uVar11 & 1) + sVar9;
                *psVar2 = sVar4;
                *psVar5 = sVar4 - uVar11;
                uVar11 = uVar11 - uVar8;
                sVar9 = ((((short)uVar11 >> 1) + (uVar11 & 1)) - uVar12) + sVar9;
                psVar5[lVar3] = sVar9;
                psVar5[lVar13 + lVar3] = sVar9 - uVar11;
              }
              else {
                uVar12 = *psVar5 - ((ushort)psVar5[lVar13 + lVar3] >> 1);
                sVar9 = *psVar2 - ((ushort)psVar5[lVar3] >> 1);
                uVar8 = psVar5[lVar13 + lVar3] + uVar12 + 0x8000;
                sVar4 = (sVar9 - (uVar8 >> 1)) + psVar5[lVar3] + -0x8000;
                *psVar5 = sVar4;
                sVar9 = sVar9 - (uVar12 >> 1);
                *psVar2 = sVar4 + uVar8 + -0x8000;
                psVar5[lVar13 + lVar3] = sVar9;
                psVar5[lVar3] = uVar12 + sVar9 + -0x8000;
              }
              psVar2 = psVar2 + iVar7;
              psVar5 = psVar5 + iVar7;
            } while (psVar2 <= psVar6 + iVar1 * param_3);
          }
          if ((uVar15 & param_2) != 0) {
            if (param_6 < 0x4000) {
              uVar8 = psVar2[lVar10];
              sVar4 = ((short)uVar8 >> 1) + (uVar8 & 1) + *psVar2;
              sVar9 = sVar4 - uVar8;
            }
            else {
              sVar9 = *psVar2 - ((ushort)psVar2[lVar10] >> 1);
              sVar4 = sVar9 + psVar2[lVar10] + -0x8000;
            }
            psVar2[lVar10] = sVar9;
            *psVar2 = sVar4;
          }
          psVar6 = psVar6 + (int)(uVar14 * param_5);
        } while (psVar6 <= param_1 + (int)((param_4 - uVar14) * param_5));
      }
      if (((param_4 & uVar15) != 0) && (psVar2 = psVar6 + iVar1 * param_3, psVar6 <= psVar2)) {
        do {
          if (param_6 < 0x4000) {
            uVar8 = psVar6[lVar13];
            sVar4 = ((short)uVar8 >> 1) + (uVar8 & 1) + *psVar6;
            sVar9 = sVar4 - uVar8;
          }
          else {
            sVar9 = *psVar6 - ((ushort)psVar6[lVar13] >> 1);
            sVar4 = psVar6[lVar13] + sVar9 + -0x8000;
          }
          psVar6[lVar13] = sVar9;
          *psVar6 = sVar4;
          psVar6 = psVar6 + iVar7;
        } while (psVar6 <= psVar2);
      }
      uVar16 = uVar15 >> 1;
      uVar14 = uVar15;
      uVar15 = uVar16;
    } while (uVar16 != 0);
  }
  return;
}



// FUNCTION 14548aae0 FUN_14548aae0 body=141 status=ok
// SIG undefined FUN_14548aae0(void)

undefined8 FUN_14548aae0(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x17c0;
  if (param_1 < 0xd) {
    if ((int)param_1 < 10) {
      if ((int)param_1 < 2) {
        if (param_1 == 1) {
          uVar3 = 0x317e0;
        }
      }
      else {
        uVar3 = 0xa3260;
      }
    }
    else {
      uVar3 = 0x898200;
    }
    lVar1 = FUN_1454956b0(0x20,uVar3);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 8) = param_1;
      lVar2 = (longlong)(int)(param_1 * -4 + 0x37);
      *(longlong *)(lVar1 + 0x10) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00014548ab5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&DAT_14548adb4 + (longlong)(int)param_1 * 4)))
                        (lVar2,IMAGE_DOS_HEADER_140000000.e_magic +
                               *(uint *)(&DAT_14548adb4 + (longlong)(int)param_1 * 4));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14548adf0 FUN_14548adf0 body=366 status=ok
// SIG undefined FUN_14548adf0(void)

/* WARNING: Removing unreachable block (ram,0x00014548af35) */

longlong FUN_14548adf0(undefined8 *param_1,void *param_2,ulonglong param_3,undefined1 *param_4,
                      ulonglong param_5)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 *puVar3;
  undefined1 *_Dst;
  size_t _Size;
  
  if (param_3 <= (ulonglong)param_1[2]) {
    pvVar1 = (void *)((longlong)param_2 + param_3);
    puVar3 = param_4;
    if (param_3 == 0) {
      if (4 < param_5) {
        *param_4 = 1;
        *(undefined4 *)(param_4 + 1) = 0xffff0000;
        return 5;
      }
      return 0;
    }
    while( true ) {
      sVar2 = (longlong)pvVar1 - (longlong)param_2;
      _Size = 0xffff;
      if ((longlong)sVar2 < 0x10000) {
        _Size = sVar2;
      }
      if (param_4 + (param_5 - (longlong)puVar3) < (undefined1 *)(_Size + 5)) break;
      *puVar3 = (longlong)sVar2 < 0x10000;
      *(ushort *)(puVar3 + 1) = (ushort)_Size;
      *(ushort *)(puVar3 + 3) = ~(ushort)_Size;
      _Dst = puVar3 + 5;
      memcpy(_Dst,param_2,_Size);
      param_2 = (void *)((longlong)param_2 + _Size);
      puVar3 = _Dst + _Size;
      if (param_2 == pvVar1) {
        return (longlong)(_Dst + _Size) - (longlong)param_4;
      }
    }
    return 0;
  }
  if ((8 < param_5) && ((*(code *)*param_1)(), param_4 < param_4 + (param_5 - 8))) {
    return 0;
  }
  return 0;
}



// FUNCTION 14548af60 FUN_14548af60 body=65 status=ok
// SIG undefined FUN_14548af60(void)

longlong FUN_14548af60(undefined8 param_1,longlong param_2)

{
  if (4999 < param_2 + 4999U) {
    return param_2 + 9 + ((param_2 + 4999U) / 5000) * 5;
  }
  return param_2 + 0xe;
}



// FUNCTION 14548afb0 thunk_FUN_1454956f0 body=5 status=ok
// SIG undefined thunk_FUN_1454956f0(void)

void thunk_FUN_1454956f0(longlong param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001454956f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_14c744d38)(*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}



// FUNCTION 14548afc0 FUN_14548afc0 body=4 status=ok
// SIG undefined FUN_14548afc0(void)

undefined4 FUN_14548afc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 14548afd0 FUN_14548afd0 body=540 status=ok
// SIG undefined FUN_14548afd0(void)

void FUN_14548afd0(uint param_1,uint *param_2,undefined1 *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_4e8 [32];
  uint local_4c8 [288];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  uVar5 = (ulonglong)param_1;
  memset(local_4c8,0,(ulonglong)param_1 * 4);
  uVar9 = param_1 - 1;
  puVar3 = param_2;
  if (param_1 == 0) {
LAB_14548b07c:
    uVar4 = 0;
    if (param_1 == 0) goto LAB_14548b0c4;
  }
  else {
    do {
      uVar4 = *puVar3;
      if (uVar9 < *puVar3) {
        uVar4 = uVar9;
      }
      local_4c8[uVar4] = local_4c8[uVar4] + 1;
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
    uVar4 = 0;
    if (param_1 < 2) goto LAB_14548b07c;
    puVar3 = local_4c8;
    uVar5 = (ulonglong)uVar9;
    uVar10 = uVar4;
    do {
      puVar3 = puVar3 + 1;
      uVar2 = *puVar3;
      *puVar3 = uVar10;
      uVar10 = uVar10 + uVar2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  do {
    uVar10 = *param_2;
    if (uVar10 == 0) {
      *param_3 = 0;
    }
    else {
      uVar2 = uVar10;
      if (uVar9 < uVar10) {
        uVar2 = uVar9;
      }
      uVar1 = local_4c8[uVar2];
      *(uint *)(param_4 + (ulonglong)uVar1 * 4) = uVar10 << 10 | uVar4;
      local_4c8[uVar2] = uVar1 + 1;
    }
    uVar4 = uVar4 + 1;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  } while (uVar4 < param_1);
LAB_14548b0c4:
  uVar4 = local_4c8[uVar9] - local_4c8[param_1 - 2];
  uVar9 = uVar4 >> 1;
  puVar3 = (uint *)(param_4 + (ulonglong)local_4c8[param_1 - 2] * 4);
  if (uVar9 != 0) {
    puVar6 = puVar3 + ((ulonglong)uVar9 - 1);
    do {
      uVar10 = *puVar6;
      uVar5 = (ulonglong)uVar9;
      uVar2 = uVar9;
      while (uVar2 = uVar2 * 2, uVar2 <= uVar4) {
        uVar7 = (ulonglong)uVar2;
        if ((uVar2 < uVar4) && (puVar3[uVar7 - 1] < puVar3[(ulonglong)(uVar2 + 1) - 1])) {
          uVar7 = (ulonglong)(uVar2 + 1);
        }
        if (puVar3[uVar7 - 1] <= uVar10) break;
        puVar3[uVar5 - 1] = puVar3[uVar7 - 1];
        uVar5 = uVar7;
        uVar2 = (uint)uVar7;
      }
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + -1;
      puVar3[uVar5 - 1] = uVar10;
    } while (uVar9 != 0);
  }
  if (1 < uVar4) {
    puVar6 = puVar3 + ((ulonglong)uVar4 - 1);
    do {
      uVar9 = *puVar6;
      uVar4 = uVar4 - 1;
      *puVar6 = *puVar3;
      uVar7 = 2;
      *puVar3 = uVar9;
      uVar5 = 1;
      if (1 < uVar4) {
        bVar11 = 2 < uVar4;
        do {
          uVar8 = uVar7;
          if ((bVar11) &&
             (uVar10 = (int)uVar7 + 1, puVar3[uVar7 - 1] < puVar3[(ulonglong)uVar10 - 1])) {
            uVar8 = (ulonglong)uVar10;
          }
          if (puVar3[uVar8 - 1] <= uVar9) break;
          uVar10 = (int)uVar8 * 2;
          uVar7 = (ulonglong)uVar10;
          puVar3[uVar5 - 1] = puVar3[uVar8 - 1];
          bVar11 = uVar10 < uVar4;
          uVar5 = uVar8;
        } while (uVar10 <= uVar4);
      }
      puVar3[uVar5 - 1] = uVar9;
      puVar6 = puVar6 + -1;
    } while (1 < uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_4e8);
}



// FUNCTION 14548b200 FUN_14548b200 body=350 status=ok
// SIG undefined FUN_14548b200(void)

void FUN_14548b200(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar12 = 1;
  uVar13 = param_2 - 1;
  uVar10 = 2;
  uVar3 = 1;
  uVar6 = uVar5;
  uVar9 = uVar5;
  do {
    uVar4 = (uint)uVar5;
    uVar8 = (uint)uVar9;
    uVar1 = (uint)uVar6;
    if ((uVar13 < uVar3) ||
       ((uVar4 != uVar8 &&
        ((*(uint *)(param_1 + uVar5 * 4) & 0xfffffc00) <
         (*(uint *)(param_1 + (ulonglong)uVar3 * 4) & 0xfffffc00))))) {
      if ((uVar8 < uVar10) ||
         ((uVar1 <= uVar13 &&
          ((*(uint *)(param_1 + uVar6 * 4) & 0xfffffc00) <=
           (*(uint *)(param_1 + uVar12 * 4) & 0xfffffc00))))) {
        uVar2 = *(uint *)(param_1 + uVar5 * 4);
        uVar7 = (ulonglong)(uVar1 + 1);
        uVar1 = (*(uint *)(param_1 + uVar6 * 4) & 0xfffffc00) + (uVar2 & 0xfffffc00);
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 + 1;
        uVar2 = uVar2 & 0x3ff | uVar8 << 10;
        uVar10 = uVar10 + 1;
        uVar11 = (int)uVar12 + 1;
      }
      else {
        uVar11 = *(uint *)(param_1 + uVar12 * 4);
        uVar4 = uVar4 + 2;
        uVar2 = *(uint *)(param_1 + uVar5 * 4);
        uVar1 = (uVar11 & 0xfffffc00) + (uVar2 & 0xfffffc00);
        uVar10 = uVar10 + 2;
        uVar2 = uVar2 & 0x3ff | uVar8 << 10;
        *(uint *)(param_1 + uVar12 * 4) = uVar11 & 0x3ff | uVar8 << 10;
        uVar11 = (int)uVar12 + 2;
        uVar7 = uVar6;
      }
      uVar12 = (ulonglong)uVar11;
      uVar6 = (ulonglong)uVar4;
      *(uint *)(param_1 + uVar5 * 4) = uVar2;
    }
    else {
      uVar7 = (ulonglong)(uVar1 + 2);
      uVar1 = (*(uint *)(param_1 + uVar6 * 4) & 0xfffffc00) +
              (*(uint *)(param_1 + (ulonglong)uVar3 * 4) & 0xfffffc00);
      uVar3 = uVar3 + 2;
      uVar6 = uVar5;
    }
    *(uint *)(param_1 + uVar9 * 4) = *(uint *)(param_1 + uVar9 * 4) & 0x3ff | uVar1;
    uVar5 = uVar6;
    uVar6 = uVar7;
    uVar9 = (ulonglong)(uVar8 + 1);
  } while (uVar8 + 1 < uVar13);
  return;
}



// FUNCTION 14548b360 FUN_14548b360 body=472 status=ok
// SIG undefined FUN_14548b360(void)

void FUN_14548b360(ulonglong param_1,uint param_2,undefined8 param_3,byte *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 auStack_d8 [32];
  int local_b8 [16];
  uint local_78 [16];
  ulonglong local_38;
  ulonglong uVar4;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = param_1 & 0xffffffff;
  iVar2 = FUN_14548afd0(param_1,param_3,param_4,param_5);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar7 = *param_5;
      *param_5 = 0;
      *param_4 = 1;
      uVar3 = 1;
      if ((uVar7 & 0x3ff) != 0) {
        uVar3 = uVar7 & 0x3ff;
      }
      param_5[uVar3] = 1;
      param_4[uVar3] = 1;
    }
    else {
      FUN_14548b200(param_5);
      memset(local_b8,0,(ulonglong)(param_2 + 1) << 2);
      param_5[iVar2 - 2] = param_5[iVar2 - 2] & 0x3ff;
      uVar7 = 2;
      iVar2 = iVar2 + -3;
      local_b8[1] = 2;
      if (-1 < iVar2) {
        puVar5 = param_5 + iVar2;
        do {
          uVar3 = (param_5[*puVar5 >> 10] >> 10) + 1;
          uVar4 = (ulonglong)uVar3;
          *puVar5 = *puVar5 & 0x3ff | uVar3 * 0x400;
          if (param_2 <= uVar3) {
            uVar4 = (ulonglong)param_2;
            do {
              uVar4 = (ulonglong)((int)uVar4 - 1);
            } while (local_b8[uVar4] == 0);
          }
          local_b8[uVar4] = local_b8[uVar4] + -1;
          puVar5 = puVar5 + -1;
          local_b8[(int)uVar4 + 1] = local_b8[(int)uVar4 + 1] + 2;
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      uVar3 = 0;
      if (param_2 != 0) {
        piVar9 = local_b8 + param_2;
        uVar6 = param_2;
        do {
          for (iVar2 = *piVar9; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar4 = (ulonglong)uVar3;
            uVar3 = uVar3 + 1;
            param_4[param_5[uVar4] & 0x3ff] = (byte)uVar6;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + -1;
        } while (uVar6 != 0);
      }
      local_78[0] = 0;
      local_78[1] = 0;
      if (1 < param_2) {
        do {
          uVar3 = uVar7 - 1;
          uVar4 = (ulonglong)uVar7;
          uVar7 = uVar7 + 1;
          local_78[uVar4] = (local_78[uVar3] + local_b8[uVar3]) * 2;
        } while (uVar7 <= param_2);
      }
      if ((int)param_1 != 0) {
        do {
          bVar1 = *param_4;
          param_4 = param_4 + 1;
          uVar7 = local_78[bVar1];
          local_78[bVar1] = uVar7 + 1;
          *param_5 = (uint)(ushort)(CONCAT11((&DAT_149d6c670)[uVar7 & 0xff],
                                             (&DAT_149d6c670)[uVar7 >> 8]) >> (0x10 - bVar1 & 0x1f))
          ;
          uVar8 = uVar8 - 1;
          param_5 = param_5 + 1;
        } while (uVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14548b550 FUN_14548b550 body=1938 status=ok
// SIG undefined FUN_14548b550(void)

void FUN_14548b550(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 4;
  puVar1 = (undefined8 *)(param_1 + 0x20);
  do {
    puVar2 = puVar1;
    *puVar2 = &DAT_200000002;
    puVar2[1] = &DAT_200000002;
    puVar2[2] = &DAT_200000002;
    puVar2[3] = &DAT_200000002;
    puVar2[4] = &DAT_200000002;
    puVar2[5] = &DAT_200000002;
    puVar2[6] = &DAT_200000002;
    puVar2[7] = &DAT_200000002;
    puVar2[8] = &DAT_200000002;
    puVar2[9] = &DAT_200000002;
    puVar2[10] = &DAT_200000002;
    puVar2[0xb] = &DAT_200000002;
    puVar2[0xc] = &DAT_200000002;
    puVar2[0xd] = &DAT_200000002;
    puVar2[0xe] = &DAT_200000002;
    puVar2[0xf] = &DAT_200000002;
    lVar3 = lVar3 + -1;
    puVar1 = puVar2 + 0x10;
  } while (lVar3 != 0);
  puVar2[0x10] = &DAT_200000002;
  puVar2[0x11] = &DAT_200000002;
  puVar2[0x12] = &DAT_200000002;
  puVar2[0x13] = &DAT_200000002;
  puVar2[0x14] = &DAT_200000002;
  puVar2[0x15] = &DAT_200000002;
  puVar2[0x16] = &DAT_200000002;
  puVar2[0x17] = &DAT_200000002;
  *(undefined4 *)(param_1 + 0x260) = 1;
  *(undefined4 *)(param_1 + 0x264) = 1;
  *(undefined4 *)(param_1 + 0x268) = 1;
  *(undefined4 *)(param_1 + 0x26c) = 1;
  *(undefined4 *)(param_1 + 0x270) = 1;
  *(undefined4 *)(param_1 + 0x274) = 1;
  *(undefined4 *)(param_1 + 0x278) = 1;
  *(undefined4 *)(param_1 + 0x27c) = 1;
  *(undefined4 *)(param_1 + 0x280) = 1;
  *(undefined4 *)(param_1 + 0x284) = 1;
  *(undefined4 *)(param_1 + 0x288) = 1;
  *(undefined4 *)(param_1 + 0x28c) = 1;
  *(undefined4 *)(param_1 + 0x290) = 1;
  *(undefined4 *)(param_1 + 0x294) = 1;
  *(undefined4 *)(param_1 + 0x298) = 1;
  *(undefined4 *)(param_1 + 0x29c) = 1;
  *(undefined4 *)(param_1 + 0x2a0) = 1;
  *(undefined4 *)(param_1 + 0x2a4) = 1;
  *(undefined4 *)(param_1 + 0x2a8) = 1;
  *(undefined4 *)(param_1 + 0x2ac) = 1;
  *(undefined4 *)(param_1 + 0x2b0) = 1;
  *(undefined4 *)(param_1 + 0x2b4) = 1;
  *(undefined4 *)(param_1 + 0x2b8) = 1;
  *(undefined4 *)(param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x2c0) = 1;
  *(undefined4 *)(param_1 + 0x2c4) = 1;
  *(undefined4 *)(param_1 + 0x2c8) = 1;
  *(undefined4 *)(param_1 + 0x2cc) = 1;
  *(undefined4 *)(param_1 + 0x2d0) = 1;
  *(undefined4 *)(param_1 + 0x2d4) = 1;
  *(undefined4 *)(param_1 + 0x2d8) = 1;
  *(undefined4 *)(param_1 + 0x2dc) = 1;
  *(undefined4 *)(param_1 + 0x2e0) = 1;
  *(undefined4 *)(param_1 + 0x2e4) = 1;
  *(undefined4 *)(param_1 + 0x2e8) = 1;
  *(undefined4 *)(param_1 + 0x2ec) = 1;
  *(undefined4 *)(param_1 + 0x2f0) = 1;
  *(undefined4 *)(param_1 + 0x2f4) = 1;
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  *(undefined4 *)(param_1 + 0x2fc) = 1;
  *(undefined4 *)(param_1 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x304) = 1;
  *(undefined4 *)(param_1 + 0x308) = 1;
  *(undefined4 *)(param_1 + 0x30c) = 1;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined4 *)(param_1 + 0x314) = 1;
  *(undefined4 *)(param_1 + 0x318) = 1;
  *(undefined4 *)(param_1 + 0x31c) = 1;
  *(undefined4 *)(param_1 + 800) = 1;
  *(undefined4 *)(param_1 + 0x324) = 1;
  *(undefined4 *)(param_1 + 0x328) = 1;
  *(undefined4 *)(param_1 + 0x32c) = 1;
  *(undefined4 *)(param_1 + 0x330) = 1;
  *(undefined4 *)(param_1 + 0x334) = 1;
  *(undefined4 *)(param_1 + 0x338) = 1;
  *(undefined4 *)(param_1 + 0x33c) = 1;
  *(undefined4 *)(param_1 + 0x340) = 1;
  *(undefined4 *)(param_1 + 0x344) = 1;
  *(undefined4 *)(param_1 + 0x348) = 1;
  *(undefined4 *)(param_1 + 0x34c) = 1;
  *(undefined4 *)(param_1 + 0x350) = 1;
  *(undefined4 *)(param_1 + 0x354) = 1;
  *(undefined4 *)(param_1 + 0x358) = 1;
  *(undefined4 *)(param_1 + 0x35c) = 1;
  *(undefined4 *)(param_1 + 0x360) = 1;
  *(undefined4 *)(param_1 + 0x364) = 1;
  *(undefined4 *)(param_1 + 0x368) = 1;
  *(undefined4 *)(param_1 + 0x36c) = 1;
  *(undefined4 *)(param_1 + 0x370) = 1;
  *(undefined4 *)(param_1 + 0x374) = 1;
  *(undefined4 *)(param_1 + 0x378) = 1;
  *(undefined4 *)(param_1 + 0x37c) = 1;
  *(undefined4 *)(param_1 + 0x380) = 1;
  *(undefined4 *)(param_1 + 900) = 1;
  *(undefined4 *)(param_1 + 0x388) = 1;
  *(undefined4 *)(param_1 + 0x38c) = 1;
  *(undefined4 *)(param_1 + 0x390) = 1;
  *(undefined4 *)(param_1 + 0x394) = 1;
  *(undefined4 *)(param_1 + 0x398) = 1;
  *(undefined4 *)(param_1 + 0x39c) = 1;
  *(undefined4 *)(param_1 + 0x3a0) = 1;
  *(undefined4 *)(param_1 + 0x3a4) = 1;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  *(undefined4 *)(param_1 + 0x3ac) = 1;
  *(undefined4 *)(param_1 + 0x3b0) = 1;
  *(undefined4 *)(param_1 + 0x3b4) = 1;
  *(undefined4 *)(param_1 + 0x3b8) = 1;
  *(undefined4 *)(param_1 + 0x3bc) = 1;
  *(undefined4 *)(param_1 + 0x3c0) = 1;
  *(undefined4 *)(param_1 + 0x3c4) = 1;
  *(undefined4 *)(param_1 + 0x3c8) = 1;
  *(undefined4 *)(param_1 + 0x3cc) = 1;
  *(undefined4 *)(param_1 + 0x3d0) = 1;
  *(undefined4 *)(param_1 + 0x3d4) = 1;
  *(undefined4 *)(param_1 + 0x3d8) = 1;
  *(undefined4 *)(param_1 + 0x3dc) = 1;
  *(undefined4 *)(param_1 + 0x3e0) = 1;
  *(undefined4 *)(param_1 + 0x3e4) = 1;
  *(undefined4 *)(param_1 + 1000) = 1;
  *(undefined4 *)(param_1 + 0x3ec) = 1;
  *(undefined4 *)(param_1 + 0x3f0) = 1;
  *(undefined4 *)(param_1 + 0x3f4) = 1;
  *(undefined4 *)(param_1 + 0x3f8) = 1;
  *(undefined4 *)(param_1 + 0x3fc) = 1;
  *(undefined4 *)(param_1 + 0x400) = 1;
  *(undefined4 *)(param_1 + 0x404) = 1;
  *(undefined4 *)(param_1 + 0x408) = 1;
  *(undefined4 *)(param_1 + 0x40c) = 1;
  *(undefined4 *)(param_1 + 0x410) = 1;
  *(undefined4 *)(param_1 + 0x414) = 1;
  *(undefined4 *)(param_1 + 0x418) = 1;
  *(undefined4 *)(param_1 + 0x41c) = 1;
  *(undefined4 *)(param_1 + 0x420) = 4;
  *(undefined4 *)(param_1 + 0x424) = 4;
  *(undefined4 *)(param_1 + 0x428) = 4;
  *(undefined4 *)(param_1 + 0x42c) = 4;
  *(undefined4 *)(param_1 + 0x430) = 4;
  *(undefined4 *)(param_1 + 0x434) = 4;
  *(undefined4 *)(param_1 + 0x438) = 4;
  *(undefined4 *)(param_1 + 0x43c) = 4;
  *(undefined4 *)(param_1 + 0x440) = 4;
  *(undefined4 *)(param_1 + 0x444) = 4;
  *(undefined4 *)(param_1 + 0x448) = 4;
  *(undefined4 *)(param_1 + 0x44c) = 4;
  *(undefined4 *)(param_1 + 0x450) = 4;
  *(undefined4 *)(param_1 + 0x454) = 4;
  *(undefined4 *)(param_1 + 0x458) = 4;
  *(undefined4 *)(param_1 + 0x45c) = 4;
  *(undefined4 *)(param_1 + 0x460) = 4;
  *(undefined4 *)(param_1 + 0x464) = 4;
  *(undefined4 *)(param_1 + 0x468) = 4;
  *(undefined4 *)(param_1 + 0x46c) = 4;
  *(undefined4 *)(param_1 + 0x470) = 4;
  *(undefined4 *)(param_1 + 0x474) = 4;
  *(undefined4 *)(param_1 + 0x478) = 4;
  *(undefined4 *)(param_1 + 0x47c) = 4;
  *(undefined4 *)(param_1 + 0x480) = 2;
  *(undefined4 *)(param_1 + 0x484) = 2;
  *(undefined4 *)(param_1 + 0x488) = 2;
  *(undefined4 *)(param_1 + 0x48c) = 2;
  *(undefined4 *)(param_1 + 0x490) = 2;
  *(undefined4 *)(param_1 + 0x494) = 2;
  *(undefined4 *)(param_1 + 0x498) = 2;
  *(undefined4 *)(param_1 + 0x49c) = 2;
  *(undefined4 *)(param_1 + 0x4a0) = 1;
  *(undefined4 *)(param_1 + 0x4a4) = 1;
  *(undefined4 *)(param_1 + 0x4a8) = 1;
  *(undefined4 *)(param_1 + 0x4ac) = 1;
  *(undefined4 *)(param_1 + 0x4b0) = 1;
  *(undefined4 *)(param_1 + 0x4b4) = 1;
  *(undefined4 *)(param_1 + 0x4b8) = 1;
  *(undefined4 *)(param_1 + 0x4bc) = 1;
  *(undefined4 *)(param_1 + 0x4c0) = 1;
  *(undefined4 *)(param_1 + 0x4c4) = 1;
  *(undefined4 *)(param_1 + 0x4c8) = 1;
  *(undefined4 *)(param_1 + 0x4cc) = 1;
  *(undefined4 *)(param_1 + 0x4d0) = 1;
  *(undefined4 *)(param_1 + 0x4d4) = 1;
  *(undefined4 *)(param_1 + 0x4d8) = 1;
  *(undefined4 *)(param_1 + 0x4dc) = 1;
  *(undefined4 *)(param_1 + 0x4e0) = 1;
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  *(undefined4 *)(param_1 + 0x4e8) = 1;
  *(undefined4 *)(param_1 + 0x4ec) = 1;
  *(undefined4 *)(param_1 + 0x4f0) = 1;
  *(undefined4 *)(param_1 + 0x4f4) = 1;
  *(undefined4 *)(param_1 + 0x4f8) = 1;
  *(undefined4 *)(param_1 + 0x4fc) = 1;
  *(undefined4 *)(param_1 + 0x500) = 1;
  *(undefined4 *)(param_1 + 0x504) = 1;
  *(undefined4 *)(param_1 + 0x508) = 1;
  *(undefined4 *)(param_1 + 0x50c) = 1;
  *(undefined4 *)(param_1 + 0x510) = 1;
  *(undefined4 *)(param_1 + 0x514) = 1;
  *(undefined4 *)(param_1 + 0x518) = 1;
  *(undefined4 *)(param_1 + 0x51c) = 1;
  FUN_14548b360(0x120,0xe,(undefined8 *)(param_1 + 0x20),param_1 + 0x10b8,param_1 + 3000);
  FUN_14548b360(0x20,0xf,param_1 + 0x4a0,param_1 + 0x11d8,param_1 + 0x1038);
  return;
}



// FUNCTION 14548bcf0 FUN_14548bcf0 body=675 status=ok
// SIG undefined FUN_14548bcf0(void)

void FUN_14548bcf0(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  *(undefined4 *)(param_1 + 0x17a4) = 0x120;
  uVar4 = 0x120;
  do {
    uVar4 = uVar4 - 1;
    if (*(char *)((ulonglong)uVar4 + 0xa78 + param_1) != '\0') break;
    *(uint *)(param_1 + 0x17a4) = uVar4;
  } while (0x101 < uVar4);
  *(undefined4 *)(param_1 + 0x17a8) = 0x20;
  uVar4 = 0x20;
  do {
    uVar5 = uVar4 - 1;
    if (*(char *)((ulonglong)uVar5 + 0xb98 + param_1) != '\0') break;
    *(uint *)(param_1 + 0x17a8) = uVar5;
    uVar4 = uVar5;
  } while (1 < uVar5);
  if (*(uint *)(param_1 + 0x17a4) != 0x120) {
    memmove((void *)((ulonglong)*(uint *)(param_1 + 0x17a4) + 0xa78 + param_1),
            (void *)(param_1 + 0xb98),(ulonglong)uVar4);
  }
  puVar1 = (undefined8 *)(param_1 + 0x11f8);
  uVar4 = *(int *)(param_1 + 0x17a4) + *(int *)(param_1 + 0x17a8);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x1200) = 0;
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x1208) = 0;
  *(undefined8 *)(param_1 + 0x1210) = 0;
  *(undefined8 *)(param_1 + 0x1218) = 0;
  *(undefined8 *)(param_1 + 0x1220) = 0;
  *(undefined8 *)(param_1 + 0x1228) = 0;
  *(undefined8 *)(param_1 + 0x1230) = 0;
  *(undefined8 *)(param_1 + 0x1238) = 0;
  *(undefined4 *)(param_1 + 0x1240) = 0;
  puVar9 = (uint *)(param_1 + 0x12a4);
  do {
    bVar3 = *(byte *)(uVar11 + 0xa78 + param_1);
    uVar6 = uVar11;
    do {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      if (uVar5 == uVar4) break;
    } while (bVar3 == *(byte *)(uVar6 + 0xa78 + param_1));
    uVar7 = uVar5 - (int)uVar11;
    if (bVar3 == 0) {
      for (; iVar10 = (int)uVar11, 10 < uVar7; uVar7 = uVar5 - uVar7) {
        uVar8 = 0x7f;
        if (uVar7 - 0xb < 0x80) {
          uVar8 = uVar7 - 0xb;
        }
        *(int *)(param_1 + 0x1240) = *(int *)(param_1 + 0x1240) + 1;
        uVar7 = iVar10 + 0xb + uVar8;
        uVar11 = (ulonglong)uVar7;
        *puVar9 = uVar8 << 5 | 0x12;
        puVar9 = puVar9 + 1;
      }
      if (2 < uVar5 - iVar10) {
        uVar8 = (uVar5 - iVar10) - 3;
        uVar7 = 7;
        if (uVar8 < 8) {
          uVar7 = uVar8;
        }
        *(int *)(&DAT_0000123c + param_1) = *(int *)(&DAT_0000123c + param_1) + 1;
        *puVar9 = uVar7 << 5 | 0x11;
        puVar9 = puVar9 + 1;
        uVar11 = (ulonglong)(iVar10 + 3 + uVar7);
      }
    }
    else if (3 < uVar7) {
      piVar2 = (int *)((longlong)puVar1 + (ulonglong)bVar3 * 4);
      *piVar2 = *piVar2 + 1;
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
      *puVar9 = (uint)bVar3;
      puVar9 = puVar9 + 1;
      uVar7 = uVar5 - uVar7;
      do {
        uVar8 = uVar7 - 3;
        if (3 < uVar7 - 3) {
          uVar8 = 3;
        }
        *(int *)(param_1 + 0x1238) = *(int *)(param_1 + 0x1238) + 1;
        uVar7 = (int)uVar11 + 3 + uVar8;
        uVar11 = (ulonglong)uVar7;
        *puVar9 = uVar8 << 5 | 0x10;
        uVar7 = uVar5 - uVar7;
        puVar9 = puVar9 + 1;
      } while (2 < uVar7);
    }
    if ((uint)uVar11 != uVar5) {
      piVar2 = (int *)((longlong)puVar1 + (ulonglong)bVar3 * 4);
      uVar12 = (ulonglong)(uVar5 - (uint)uVar11);
      do {
        *piVar2 = *piVar2 + 1;
        *puVar9 = (uint)bVar3;
        puVar9 = puVar9 + 1;
        uVar12 = uVar12 - 1;
        uVar11 = uVar6;
      } while (uVar12 != 0);
    }
  } while ((uint)uVar11 != uVar4);
  *(int *)(param_1 + 0x17b0) = (int)((longlong)puVar9 - (param_1 + 0x12a4) >> 2);
  uVar4 = 0x13;
  FUN_14548b360(0x13,7,puVar1,param_1 + 0x1290,param_1 + 0x1244);
  *(undefined4 *)(param_1 + 0x17ac) = 0x13;
  do {
    uVar4 = uVar4 - 1;
    if (*(char *)((ulonglong)(byte)(&DAT_149d6c640)[uVar4] + 0x1290 + param_1) != '\0') break;
    *(uint *)(param_1 + 0x17ac) = uVar4;
  } while (4 < uVar4);
  if (*(uint *)(param_1 + 0x17a4) != 0x120) {
    memmove((void *)(param_1 + 0xb98),
            (void *)((ulonglong)*(uint *)(param_1 + 0x17a4) + 0xa78 + param_1),
            (ulonglong)*(uint *)(param_1 + 0x17a8));
  }
  return;
}



// FUNCTION 14548bfa0 FUN_14548bfa0 body=4581 status=ok
// SIG undefined FUN_14548bfa0(void)

void FUN_14548bfa0(longlong param_1,ulonglong *param_2,byte *param_3,uint param_4,longlong param_5,
                  byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong *puVar23;
  byte bVar24;
  uint uVar25;
  byte *pbVar26;
  ulonglong uVar27;
  sbyte sVar28;
  ulonglong uVar29;
  size_t sVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint *puVar35;
  int *piVar36;
  byte *pbVar37;
  ulonglong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  ulonglong uVar44;
  byte *pbVar45;
  longlong lVar46;
  ushort *puVar47;
  ulonglong *puVar48;
  ulonglong *puVar49;
  size_t _Size;
  uint local_168;
  int local_164;
  int local_12c;
  
  uVar31 = (uint)param_2[1];
  local_12c = 0;
  pbVar26 = param_3 + param_4;
  uVar38 = *param_2;
  puVar48 = (ulonglong *)param_2[2];
  puVar23 = (ulonglong *)param_2[3];
  FUN_14548bcf0();
  uVar42 = *(uint *)(param_1 + 0x17ac);
  pbVar37 = (byte *)(param_1 + 0xa78);
  local_164 = uVar42 * 3 + 0xe + (uint)*(byte *)(param_1 + 0x1293) * *(int *)(param_1 + 0x1204) +
              (*(byte *)(param_1 + 0x12a2) + 7) * *(int *)(param_1 + 0x1240) +
              (*(byte *)(param_1 + 0x12a1) + 3) * *(int *)(&DAT_0000123c + param_1) +
              (*(byte *)(param_1 + 0x12a0) + 2) * *(int *)(param_1 + 0x1238) +
              (uint)*(byte *)(param_1 + 0x1290) * *(int *)(param_1 + 0x11f8) +
              (uint)*(byte *)(param_1 + 0x129f) * *(int *)(param_1 + 0x1234) +
              (uint)*(byte *)(param_1 + 0x129e) * *(int *)(param_1 + 0x1230) +
              (uint)*(byte *)(param_1 + 0x129d) * *(int *)(param_1 + 0x122c) +
              (uint)*(byte *)(param_1 + 0x129c) * *(int *)(param_1 + 0x1228) +
              (uint)*(byte *)(param_1 + 0x129b) * *(int *)(param_1 + 0x1224) +
              (uint)*(byte *)(param_1 + 0x129a) * *(int *)(param_1 + 0x1220) +
              (uint)*(byte *)(param_1 + 0x1299) * *(int *)(param_1 + 0x121c) +
              (uint)*(byte *)(param_1 + 0x1298) * *(int *)(param_1 + 0x1218) +
              (uint)*(byte *)(param_1 + 0x1297) * *(int *)(param_1 + 0x1214) +
              (uint)*(byte *)(param_1 + 0x1296) * *(int *)(param_1 + 0x1210) +
              (uint)*(byte *)(param_1 + 0x1295) * *(int *)(param_1 + 0x120c) +
              (uint)*(byte *)(param_1 + 0x1294) * *(int *)(param_1 + 0x1208) +
              (uint)*(byte *)(param_1 + 0x1292) * *(int *)(param_1 + 0x1200) +
              (uint)*(byte *)(param_1 + 0x1291) * *(int *)(&DAT_000011fc + param_1);
  piVar36 = (int *)(param_1 + 0x20);
  lVar43 = 0x90;
  do {
    iVar32 = *piVar36;
    piVar36 = piVar36 + 1;
    bVar24 = *pbVar37;
    pbVar37 = pbVar37 + 1;
    local_12c = local_12c + iVar32 * 8;
    local_164 = local_164 + (uint)bVar24 * iVar32;
    lVar43 = lVar43 + -1;
  } while (lVar43 != 0);
  local_168 = 0x92;
  do {
    iVar32 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 - 2) * 4);
    iVar33 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 - 1) * 4);
    iVar34 = *(int *)(param_1 + 0x20 + (ulonglong)local_168 * 4);
    iVar1 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 1) * 4);
    iVar2 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 2) * 4);
    iVar3 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 3) * 4);
    iVar4 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 4) * 4);
    iVar5 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 5) * 4);
    iVar6 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 6) * 4);
    iVar7 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 7) * 4);
    iVar8 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 8) * 4);
    iVar9 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 9) * 4);
    iVar10 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 10) * 4);
    iVar11 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0xb) * 4);
    iVar12 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0xc) * 4);
    iVar13 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0xd) * 4);
    iVar14 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0xe) * 4);
    iVar15 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0xf) * 4);
    iVar16 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x10) * 4);
    iVar17 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x11) * 4);
    iVar18 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x12) * 4);
    uVar39 = local_168 + 0x13;
    uVar41 = local_168 + 0x14;
    uVar40 = local_168 + 0x15;
    iVar19 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x16) * 4);
    iVar20 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x17) * 4);
    iVar21 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x18) * 4);
    iVar22 = *(int *)(param_1 + 0x20 + (ulonglong)(local_168 + 0x19) * 4);
    local_164 = (uint)*(byte *)((ulonglong)(local_168 + 0x17) + 0xa78 + param_1) * iVar20 +
                local_164 +
                (uint)*(byte *)((ulonglong)(local_168 + 0x16) + 0xa78 + param_1) * iVar19 +
                (uint)*(byte *)((ulonglong)uVar40 + 0xa78 + param_1) *
                *(int *)(param_1 + 0x20 + (ulonglong)uVar40 * 4) +
                (uint)*(byte *)((ulonglong)uVar41 + 0xa78 + param_1) *
                *(int *)(param_1 + 0x20 + (ulonglong)uVar41 * 4) +
                (uint)*(byte *)((ulonglong)uVar39 + 0xa78 + param_1) *
                *(int *)(param_1 + 0x20 + (ulonglong)uVar39 * 4) +
                (uint)*(byte *)((ulonglong)(local_168 + 0x12) + 0xa78 + param_1) * iVar18 +
                (uint)*(byte *)((ulonglong)(local_168 + 0x11) + 0xa78 + param_1) * iVar17 +
                (uint)*(byte *)((ulonglong)(local_168 + 0x10) + 0xa78 + param_1) * iVar16 +
                (uint)*(byte *)((ulonglong)(local_168 + 0xf) + 0xa78 + param_1) * iVar15 +
                (uint)*(byte *)(param_1 + 0xa78 + (ulonglong)(local_168 + 0xe)) * iVar14 +
                (uint)*(byte *)((ulonglong)(local_168 + 0xd) + 0xa78 + param_1) * iVar13 +
                (uint)*(byte *)((ulonglong)(local_168 + 0xc) + 0xa78 + param_1) * iVar12 +
                (uint)*(byte *)((ulonglong)(local_168 + 0xb) + 0xa78 + param_1) * iVar11 +
                (uint)*(byte *)(param_1 + 0xa78 + (ulonglong)(local_168 + 10)) * iVar10 +
                (uint)*(byte *)((ulonglong)(local_168 + 9) + 0xa78 + param_1) * iVar9 +
                (uint)*(byte *)((ulonglong)(local_168 + 8) + 0xa78 + param_1) * iVar8 +
                (uint)*(byte *)((ulonglong)(local_168 + 7) + 0xa78 + param_1) * iVar7 +
                (uint)*(byte *)((ulonglong)(local_168 + 6) + 0xa78 + param_1) * iVar6 +
                (uint)*(byte *)((ulonglong)(local_168 + 5) + 0xa78 + param_1) * iVar5 +
                (uint)*(byte *)((ulonglong)(local_168 + 4) + 0xa78 + param_1) * iVar4 +
                (uint)*(byte *)((ulonglong)(local_168 + 3) + 0xa78 + param_1) * iVar3 +
                (uint)*(byte *)((ulonglong)(local_168 - 2) + 0xa78 + param_1) * iVar32 +
                (uint)*(byte *)((ulonglong)(local_168 + 2) + 0xa78 + param_1) * iVar2 +
                (uint)*(byte *)((ulonglong)(local_168 + 1) + 0xa78 + param_1) * iVar1 +
                (uint)*(byte *)((ulonglong)(local_168 - 1) + 0xa78 + param_1) * iVar33 +
                (uint)*(byte *)((ulonglong)local_168 + 0xa78 + param_1) * iVar34 +
                (uint)*(byte *)((ulonglong)(local_168 + 0x19) + 0xa78 + param_1) * iVar22 +
                (uint)*(byte *)((ulonglong)(local_168 + 0x18) + 0xa78 + param_1) * iVar21;
    local_12c = (iVar22 + iVar21 + iVar20 + iVar19 + iVar34 +
                 *(int *)(param_1 + 0x20 + (ulonglong)uVar40 * 4) +
                 *(int *)(param_1 + 0x20 + (ulonglong)uVar41 * 4) +
                 *(int *)(param_1 + 0x20 + (ulonglong)uVar39 * 4) + iVar18 + iVar17 + iVar16 +
                 iVar15 + iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8 + iVar7 + iVar6
                 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1 + iVar33 + iVar32) * 9 + local_12c;
    uVar39 = local_168 + 0x1a;
    local_168 = local_168 + 0x1c;
  } while (uVar39 < 0x100);
  uVar41 = local_164 + (uint)*(byte *)(param_1 + 0xb78);
  pbVar37 = &DAT_149d6c268;
  uVar39 = local_12c + 7;
  lVar43 = 0x1d;
  pbVar45 = (byte *)(param_1 + 0x11b9);
  piVar36 = (int *)(param_1 + 0x424);
  do {
    bVar24 = *pbVar37;
    pbVar37 = pbVar37 + 1;
    uVar41 = uVar41 + ((uint)pbVar45[-0x640] + (uint)bVar24) * *piVar36;
    uVar39 = uVar39 + ((uint)*pbVar45 + (uint)bVar24) * *piVar36;
    lVar43 = lVar43 + -1;
    pbVar45 = pbVar45 + 1;
    piVar36 = piVar36 + 1;
  } while (lVar43 != 0);
  lVar43 = 2;
  pbVar37 = (byte *)(param_1 + 0xb9a);
  piVar36 = (int *)(param_1 + 0x4a8);
  do {
    uVar41 = uVar41 + ((uint)pbVar37[-2] + (uint)pbVar37[(longlong)&UNK_149d6b76e - param_1]) *
                      piVar36[-2] +
             ((uint)pbVar37[-1] + (uint)pbVar37[(longlong)&UNK_149d6b76f - param_1]) * piVar36[-1] +
             ((uint)*pbVar37 + (uint)pbVar37[(longlong)&UNK_149d6b770 - param_1]) * *piVar36 +
             ((uint)pbVar37[1] + (uint)pbVar37[(longlong)&UNK_149d6b771 - param_1]) * piVar36[1] +
             ((uint)pbVar37[2] + (uint)pbVar37[(longlong)&UNK_149d6b772 - param_1]) * piVar36[2] +
             ((uint)pbVar37[3] + (uint)pbVar37[(longlong)&UNK_149d6b773 - param_1]) * piVar36[3] +
             ((uint)pbVar37[4] + (uint)pbVar37[(longlong)&UNK_149d6b774 - param_1]) * piVar36[4] +
             ((uint)pbVar37[5] + (uint)pbVar37[(longlong)&UNK_149d6b775 - param_1]) * piVar36[5] +
             ((uint)pbVar37[6] + (uint)pbVar37[(longlong)&UNK_149d6b776 - param_1]) * piVar36[6] +
             ((uint)pbVar37[7] + (uint)pbVar37[(longlong)&UNK_149d6b777 - param_1]) * piVar36[7] +
             ((uint)pbVar37[8] + (uint)pbVar37[(longlong)&UNK_149d6b778 - param_1]) * piVar36[8] +
             ((uint)pbVar37[9] + (uint)pbVar37[(longlong)&UNK_149d6b779 - param_1]) * piVar36[9] +
             ((uint)pbVar37[10] + (uint)pbVar37[(longlong)&UNK_149d6b77a - param_1]) * piVar36[10] +
             ((uint)pbVar37[0xb] + (uint)pbVar37[(longlong)&UNK_149d6b77b - param_1]) * piVar36[0xb]
             + ((uint)pbVar37[0xc] + (uint)pbVar37[(longlong)&UNK_149d6b77c - param_1]) *
               piVar36[0xc];
    uVar39 = uVar39 + (pbVar37[(longlong)&UNK_149d6b76e - param_1] + 5) * piVar36[-2] +
             (pbVar37[(longlong)&UNK_149d6b76f - param_1] + 5) * piVar36[-1] +
             (pbVar37[(longlong)&UNK_149d6b770 - param_1] + 5) * *piVar36 +
             (pbVar37[(longlong)&UNK_149d6b771 - param_1] + 5) * piVar36[1] +
             (pbVar37[(longlong)&UNK_149d6b772 - param_1] + 5) * piVar36[2] +
             (pbVar37[(longlong)&UNK_149d6b773 - param_1] + 5) * piVar36[3] +
             (pbVar37[(longlong)&UNK_149d6b774 - param_1] + 5) * piVar36[4] +
             (pbVar37[(longlong)&UNK_149d6b775 - param_1] + 5) * piVar36[5] +
             (pbVar37[(longlong)&UNK_149d6b776 - param_1] + 5) * piVar36[6] +
             (pbVar37[(longlong)&UNK_149d6b777 - param_1] + 5) * piVar36[7] +
             (pbVar37[(longlong)&UNK_149d6b778 - param_1] + 5) * piVar36[8] +
             (pbVar37[(longlong)&UNK_149d6b779 - param_1] + 5) * piVar36[9] +
             (pbVar37[(longlong)&UNK_149d6b77a - param_1] + 5) * piVar36[10] +
             (pbVar37[(longlong)&UNK_149d6b77b - param_1] + 5) * piVar36[0xb] +
             (pbVar37[(longlong)&UNK_149d6b77c - param_1] + 5) * piVar36[0xc];
    lVar43 = lVar43 + -1;
    pbVar37 = pbVar37 + 0xf;
    piVar36 = piVar36 + 0xf;
  } while (lVar43 != 0);
  uVar40 = ((-uVar31 - 3 & 7) - 8) + param_4 * 8 + ((param_4 + 0xfffe) / 0xffff) * 0x28;
  uVar25 = uVar40;
  if (uVar39 <= uVar40) {
    uVar25 = uVar39;
  }
  bVar24 = (byte)uVar31;
  if (uVar41 < uVar25) {
    uVar39 = *(uint *)(param_1 + 0x17b0);
    uVar31 = uVar31 + 0x14;
    uVar38 = uVar38 | (ulonglong)param_6 << (bVar24 & 0x3f) | 2L << (bVar24 + 1 & 0x3f) |
             (ulonglong)(*(int *)(param_1 + 0x17a4) - 0x101) << (bVar24 + 3 & 0x3f) |
             (ulonglong)(*(int *)(param_1 + 0x17a8) - 1) << (bVar24 + 8 & 0x3f) |
             (ulonglong)(uVar42 - 4) << (bVar24 + 0xd & 0x3f) |
             (ulonglong)*(byte *)(param_1 + 0x12a0) << (bVar24 + 0x11 & 0x3f);
    *puVar48 = uVar38;
    uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
    uVar27 = (ulonglong)(uVar31 >> 3);
    if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
      uVar27 = (longlong)puVar23 - (longlong)puVar48;
    }
    puVar48 = (ulonglong *)((longlong)puVar48 + uVar27);
    uVar27 = 1;
    uVar41 = uVar31 & 7;
    do {
      uVar31 = uVar41 + 3;
      uVar40 = (int)uVar27 + 1;
      uVar38 = uVar38 | (ulonglong)
                        *(byte *)((ulonglong)(byte)(&DAT_149d6c640)[uVar27] + 0x1290 + param_1) <<
                        ((byte)uVar41 & 0x3f);
      uVar27 = (ulonglong)uVar40;
      uVar41 = uVar31;
    } while (uVar40 < uVar42);
    *puVar48 = uVar38;
    uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
    uVar27 = (ulonglong)(uVar31 >> 3);
    if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
      uVar27 = (longlong)puVar23 - (longlong)puVar48;
    }
    uVar31 = uVar31 & 7;
    puVar48 = (ulonglong *)((longlong)puVar48 + uVar27);
    uVar42 = 0;
    do {
      uVar41 = *(uint *)(param_1 + 0x12a4 + (ulonglong)uVar42 * 4);
      uVar27 = (ulonglong)(uVar41 & 0x1f);
      iVar32 = uVar31 + *(byte *)(uVar27 + 0x1290 + param_1);
      uVar40 = iVar32 + (uint)(byte)(&DAT_149d6c658)[uVar27];
      uVar38 = uVar38 | (ulonglong)*(uint *)(param_1 + 0x1244 + uVar27 * 4) << (sbyte)uVar31 |
               (ulonglong)(uVar41 >> 5) << ((byte)iVar32 & 0x3f);
      *puVar48 = uVar38;
      uVar38 = uVar38 >> ((byte)uVar40 & 0x38);
      uVar27 = (ulonglong)(uVar40 >> 3);
      if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar40 >> 3)) {
        uVar27 = (longlong)puVar23 - (longlong)puVar48;
      }
      uVar31 = uVar40 & 7;
      puVar48 = (ulonglong *)((longlong)puVar48 + uVar27);
      uVar42 = uVar42 + 1;
    } while (uVar42 < uVar39);
    lVar43 = 0x578;
  }
  else {
    if (uVar40 <= uVar39) {
      do {
        sVar30 = (longlong)pbVar26 - (longlong)param_3;
        _Size = 0xffff;
        if ((longlong)sVar30 < 0x10000) {
          _Size = sVar30;
        }
        puVar49 = puVar23;
        uVar42 = uVar31;
        if ((ulonglong)((longlong)puVar23 - (longlong)puVar48) < ((uVar31 + 10 >> 3) + 4) + _Size)
        break;
        bVar24 = param_6;
        if (0xffff < (longlong)sVar30) {
          bVar24 = 0;
        }
        *(byte *)puVar48 = bVar24 << ((byte)uVar31 & 0x1f) | (byte)uVar38;
        puVar47 = (ushort *)((longlong)puVar48 + 1);
        if (5 < uVar31) {
          *(byte *)puVar47 = 0;
          puVar47 = (ushort *)((longlong)puVar48 + 2);
        }
        *puVar47 = (ushort)_Size;
        uVar38 = 0;
        puVar47[1] = ~(ushort)_Size;
        uVar42 = 0;
        memcpy(puVar47 + 2,param_3,_Size);
        puVar48 = (ulonglong *)((longlong)(puVar47 + 2) + _Size);
        param_3 = param_3 + _Size;
        puVar49 = puVar48;
        uVar31 = 0;
      } while (param_3 != pbVar26);
      goto LAB_14548d15f;
    }
    uVar38 = uVar38 | (ulonglong)param_6 << (bVar24 & 0x3f) | 1L << ((ulonglong)(uVar31 + 1) & 0x3f)
    ;
    uVar31 = uVar31 + 3;
    *puVar48 = uVar38;
    uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
    uVar27 = (ulonglong)(uVar31 >> 3);
    if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
      uVar27 = (longlong)puVar23 - (longlong)puVar48;
    }
    lVar43 = 3000;
    puVar48 = (ulonglong *)((longlong)puVar48 + uVar27);
    uVar31 = uVar31 & 7;
  }
  pbVar37 = &DAT_149d6c333;
  lVar43 = lVar43 + param_1;
  uVar42 = 3;
  puVar35 = (uint *)(param_1 + 0x1204);
  do {
    bVar24 = *pbVar37;
    pbVar37 = pbVar37 + 1;
    uVar27 = (ulonglong)(bVar24 + 0x101);
    iVar32 = uVar42 - *(int *)(&DAT_149d6c1f0 + (ulonglong)bVar24 * 4);
    uVar42 = uVar42 + 1;
    *puVar35 = iVar32 << (*(byte *)(uVar27 + 0x500 + lVar43) & 0x1f) |
               *(uint *)(lVar43 + uVar27 * 4);
    pbVar37[param_1 + -0x149d6ad2d] = (&DAT_149d6c268)[bVar24] + *(char *)(uVar27 + 0x500 + lVar43);
    puVar35 = puVar35 + 1;
  } while (uVar42 < 0x103);
  if (param_5 == 0) {
    lVar46 = param_1 + 0x63ad44;
    do {
      uVar39 = *(uint *)(lVar46 + 4) >> 9;
      uVar27 = (ulonglong)uVar39;
      uVar42 = *(uint *)(lVar46 + 4) & 0x1ff;
      sVar28 = (sbyte)uVar31;
      if (uVar42 == 1) {
        uVar44 = 1;
        uVar38 = uVar38 | (ulonglong)*(uint *)(lVar43 + uVar27 * 4) << sVar28;
        bVar24 = *(byte *)(uVar27 + 0x500 + lVar43);
      }
      else {
        uVar27 = (ulonglong)*(byte *)(uVar27 + 0x88f99c + param_1);
        uVar44 = (ulonglong)uVar42;
        iVar32 = uVar31 + *(byte *)(uVar44 + 0x1604 + param_1);
        uVar31 = iVar32 + (uint)*(byte *)(uVar27 + 0x620 + lVar43);
        uVar38 = uVar38 | (ulonglong)*(uint *)(param_1 + 0x11f8 + (ulonglong)uVar42 * 4) << sVar28 |
                 (ulonglong)*(uint *)(lVar43 + 0x480 + uVar27 * 4) << ((byte)iVar32 & 0x3f) |
                 (ulonglong)(uVar39 - *(int *)(&DAT_149d6c290 + uVar27 * 4)) <<
                 ((byte)uVar31 & 0x3f);
        bVar24 = *(byte *)((longlong)&DAT_149d6c308 + uVar27);
      }
      uVar31 = uVar31 + bVar24;
      *puVar48 = uVar38;
      uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
      lVar46 = lVar46 + uVar44 * 8;
      uVar27 = (ulonglong)(uVar31 >> 3);
      if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
        uVar27 = (longlong)puVar23 - (longlong)puVar48;
      }
      uVar31 = uVar31 & 7;
      puVar48 = (ulonglong *)((longlong)puVar48 + uVar27);
    } while (lVar46 != (ulonglong)param_4 * 8 + 0x63ad44 + param_1);
  }
  else {
    puVar47 = (ushort *)(param_5 + 4);
    while( true ) {
      uVar42 = *(uint *)(puVar47 + -2) & 0x7fffff;
      uVar39 = *(uint *)(puVar47 + -2) >> 0x17;
      uVar27 = (ulonglong)uVar39;
      if (3 < uVar42) {
        uVar44 = (ulonglong)(uVar42 >> 2);
        do {
          bVar24 = *param_3;
          pbVar37 = param_3 + 1;
          iVar32 = uVar31 + *(byte *)((ulonglong)bVar24 + 0x500 + lVar43);
          pbVar26 = param_3 + 2;
          iVar33 = iVar32 + (uint)*(byte *)((ulonglong)*pbVar37 + 0x500 + lVar43);
          pbVar45 = param_3 + 3;
          iVar34 = iVar33 + (uint)*(byte *)((ulonglong)*pbVar26 + 0x500 + lVar43);
          param_3 = param_3 + 4;
          uVar38 = uVar38 | (ulonglong)*(uint *)(lVar43 + (ulonglong)bVar24 * 4) << (sbyte)uVar31 |
                   (ulonglong)*(uint *)(lVar43 + (ulonglong)*pbVar37 * 4) << ((byte)iVar32 & 0x3f) |
                   (ulonglong)*(uint *)(lVar43 + (ulonglong)*pbVar26 * 4) << ((byte)iVar33 & 0x3f) |
                   (ulonglong)*(uint *)(lVar43 + (ulonglong)*pbVar45 * 4) << ((byte)iVar34 & 0x3f);
          uVar31 = iVar34 + (uint)*(byte *)((ulonglong)*pbVar45 + 0x500 + lVar43);
          *puVar48 = uVar38;
          uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
          uVar29 = (ulonglong)(uVar31 >> 3);
          if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
            uVar29 = (longlong)puVar23 - (longlong)puVar48;
          }
          uVar31 = uVar31 & 7;
          puVar48 = (ulonglong *)((longlong)puVar48 + uVar29);
          uVar42 = uVar42 - 4;
          uVar44 = uVar44 - 1;
        } while (uVar44 != 0);
      }
      pbVar37 = param_3;
      if (uVar42 != 0) {
        pbVar37 = param_3 + 1;
        uVar38 = uVar38 | (ulonglong)*(uint *)(lVar43 + (ulonglong)*param_3 * 4) << (sbyte)uVar31;
        uVar31 = uVar31 + *(byte *)((ulonglong)*param_3 + 0x500 + lVar43);
        if (uVar42 != 1) {
          bVar24 = *pbVar37;
          pbVar37 = param_3 + 2;
          uVar38 = uVar38 | (ulonglong)*(uint *)(lVar43 + (ulonglong)bVar24 * 4) <<
                            ((byte)uVar31 & 0x3f);
          uVar31 = uVar31 + *(byte *)((ulonglong)bVar24 + 0x500 + lVar43);
          if (uVar42 != 2) {
            bVar24 = *pbVar37;
            pbVar37 = param_3 + 3;
            uVar38 = uVar38 | (ulonglong)*(uint *)(lVar43 + (ulonglong)bVar24 * 4) <<
                              ((byte)uVar31 & 0x3f);
            uVar31 = uVar31 + *(byte *)((ulonglong)bVar24 + 0x500 + lVar43);
          }
        }
        *puVar48 = uVar38;
        uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
        uVar44 = (ulonglong)(uVar31 >> 3);
        if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
          uVar44 = (longlong)puVar23 - (longlong)puVar48;
        }
        puVar48 = (ulonglong *)((longlong)puVar48 + uVar44);
        uVar31 = uVar31 & 7;
      }
      if (uVar39 == 0) break;
      uVar44 = (ulonglong)puVar47[1];
      iVar32 = uVar31 + *(byte *)(uVar27 + 0x1604 + param_1);
      iVar33 = iVar32 + (uint)*(byte *)(uVar44 + 0x620 + lVar43);
      uVar42 = iVar33 + (uint)*(byte *)((longlong)&DAT_149d6c308 + uVar44);
      uVar38 = uVar38 | (ulonglong)*(uint *)(param_1 + 0x11f8 + uVar27 * 4) << (sbyte)uVar31 |
               (ulonglong)*(uint *)(lVar43 + 0x480 + uVar44 * 4) << ((byte)iVar32 & 0x3f) |
               (ulonglong)((uint)*puVar47 - *(int *)(&DAT_149d6c290 + uVar44 * 4)) <<
               ((byte)iVar33 & 0x3f);
      *puVar48 = uVar38;
      uVar38 = uVar38 >> ((byte)uVar42 & 0x38);
      uVar44 = (ulonglong)(uVar42 >> 3);
      if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar42 >> 3)) {
        uVar44 = (longlong)puVar23 - (longlong)puVar48;
      }
      uVar31 = uVar42 & 7;
      puVar48 = (ulonglong *)((longlong)puVar48 + uVar44);
      param_3 = pbVar37 + uVar27;
      puVar47 = puVar47 + 4;
    }
  }
  uVar38 = uVar38 | (ulonglong)*(uint *)(lVar43 + 0x400) << (sbyte)uVar31;
  uVar31 = uVar31 + *(byte *)(lVar43 + 0x600);
  *puVar48 = uVar38;
  uVar38 = uVar38 >> ((byte)uVar31 & 0x38);
  uVar27 = (ulonglong)(uVar31 >> 3);
  if ((longlong)puVar23 - (longlong)puVar48 <= (longlong)(ulonglong)(uVar31 >> 3)) {
    uVar27 = (longlong)puVar23 - (longlong)puVar48;
  }
  puVar49 = (ulonglong *)((longlong)puVar48 + uVar27);
  uVar42 = uVar31 & 7;
LAB_14548d15f:
  *param_2 = uVar38;
  *(uint *)(param_2 + 1) = uVar42;
  param_2[2] = (ulonglong)puVar49;
  return;
}



// FUNCTION 14548d190 FUN_14548d190 body=169 status=ok
// SIG undefined FUN_14548d190(void)

void FUN_14548d190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(int *)(param_1 + 0x420) = *(int *)(param_1 + 0x420) + 1;
  FUN_14548b360(0x120,0xe,param_1 + 0x20,param_1 + 0xa78,param_1 + 0x578);
  FUN_14548b360(0x20,0xf,param_1 + 0x4a0,param_1 + 0xb98,param_1 + 0x9f8);
  FUN_14548bfa0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14548d240 FUN_14548d240 body=741 status=ok
// SIG undefined FUN_14548d240(void)

longlong FUN_14548d240(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  iVar1 = param_1[0x15];
  if (iVar1 != 0) {
    iVar2 = param_1[0x14];
    uVar27 = iVar1 * param_1[5];
    uVar28 = iVar2 * param_1[0xf];
    uVar21 = iVar1 * param_1[2];
    uVar25 = iVar1 * param_1[8];
    uVar22 = iVar2 * param_1[0x11];
    uVar23 = iVar1 * param_1[7];
    uVar24 = iVar2 * param_1[0xc];
    uVar29 = iVar1 * param_1[6];
    uVar30 = iVar1 * param_1[1];
    uVar31 = iVar1 * param_1[4];
    uVar11 = iVar2 * param_1[10];
    uVar32 = iVar2 * param_1[0xe];
    uVar12 = iVar1 * *param_1;
    uVar13 = iVar2 * param_1[0xb];
    uVar14 = iVar2 * param_1[0xd];
    uVar15 = iVar1 * param_1[3];
    uVar26 = iVar2 * param_1[0x12];
    uVar16 = iVar2 * param_1[0x10];
    uVar18 = iVar1 * param_1[9];
    uVar20 = iVar2 * param_1[0x13];
    iVar2 = uVar18 - uVar20;
    if (uVar18 <= uVar20) {
      iVar2 = uVar20 - uVar18;
    }
    iVar3 = uVar21 - uVar24;
    if (uVar21 <= uVar24) {
      iVar3 = uVar24 - uVar21;
    }
    iVar4 = uVar27 - uVar28;
    if (uVar27 <= uVar28) {
      iVar4 = uVar28 - uVar27;
    }
    iVar5 = uVar25 - uVar26;
    if (uVar25 <= uVar26) {
      iVar5 = uVar26 - uVar25;
    }
    iVar6 = uVar30 - uVar13;
    if (uVar30 <= uVar13) {
      iVar6 = uVar13 - uVar30;
    }
    iVar7 = uVar12 - uVar11;
    if (uVar12 <= uVar11) {
      iVar7 = uVar11 - uVar12;
    }
    iVar8 = uVar31 - uVar32;
    if (uVar31 <= uVar32) {
      iVar8 = uVar32 - uVar31;
    }
    iVar9 = uVar23 - uVar22;
    if (uVar23 <= uVar22) {
      iVar9 = uVar22 - uVar23;
    }
    iVar10 = uVar15 - uVar14;
    if (uVar15 <= uVar14) {
      iVar10 = uVar14 - uVar15;
    }
    iVar19 = uVar29 - uVar16;
    if (uVar29 <= uVar16) {
      iVar19 = uVar16 - uVar29;
    }
    uVar11 = param_1[0x14];
    uVar17 = (ulonglong)uVar11;
    uVar12 = (uVar11 * 200 >> 9) * iVar1;
    if ((param_2 < 10000) && (uVar17 = 0x2000, uVar11 + iVar1 < 0x2000)) {
      uVar17 = (ulonglong)uVar12;
      uVar12 = uVar12 + (int)((0x2000 - (uVar11 + iVar1)) * uVar17 >> 0xd);
    }
    if (uVar12 <= (param_2 >> 0xc) * iVar1 +
                  iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar19) {
      return CONCAT71((int7)(uVar17 >> 8),1);
    }
  }
  param_1[10] = param_1[10] + *param_1;
  *param_1 = 0;
  param_1[0xb] = param_1[0xb] + param_1[1];
  param_1[1] = 0;
  param_1[0xc] = param_1[0xc] + param_1[2];
  param_1[2] = 0;
  param_1[0xd] = param_1[0xd] + param_1[3];
  param_1[3] = 0;
  param_1[0xe] = param_1[0xe] + param_1[4];
  param_1[4] = 0;
  param_1[0xf] = param_1[0xf] + param_1[5];
  param_1[5] = 0;
  param_1[0x10] = param_1[0x10] + param_1[6];
  param_1[6] = 0;
  param_1[0x11] = param_1[0x11] + param_1[7];
  param_1[7] = 0;
  param_1[0x12] = param_1[0x12] + param_1[8];
  iVar2 = param_1[9];
  param_1[8] = 0;
  param_1[0x13] = param_1[0x13] + iVar2;
  param_1[9] = 0;
  iVar3 = param_1[0x14];
  param_1[0x14] = 0;
  param_1[0x15] = iVar3 + iVar1;
  return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
}



// FUNCTION 14548d530 FUN_14548d530 body=312 status=ok
// SIG undefined FUN_14548d530(void)

void FUN_14548d530(longlong param_1,ulonglong param_2,uint param_3)

{
  byte bVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  uint5 uVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_138 [32];
  uint local_118 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(local_118,0,0x100);
  uVar10 = 0x1000;
  if (param_2 < 0x1001) {
    uVar10 = param_2;
  }
  uVar11 = 0;
  uVar8 = uVar11;
  if (uVar10 != 0) {
    do {
      uVar9 = uVar8 + 1;
      *(undefined1 *)((longlong)local_118 + (ulonglong)*(byte *)(param_1 + uVar8)) = 1;
      uVar8 = uVar9;
    } while (uVar9 < uVar10);
  }
  iVar17 = 0;
  iVar18 = 0;
  iVar19 = 0;
  iVar20 = 0;
  iVar12 = 0;
  iVar14 = 0;
  iVar15 = 0;
  iVar16 = 0;
  do {
    uVar13 = *(uint *)((longlong)local_118 + uVar11);
    auVar2[0xc] = (char)(uVar13 >> 0x18);
    auVar2._0_12_ = ZEXT712(0);
    uVar4 = CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar13 >> 0x10));
    auVar5._5_8_ = 0;
    auVar5._0_5_ = uVar4;
    iVar17 = iVar17 + (uVar13 & 0xff);
    iVar18 = iVar18 + (int)CONCAT72(SUB137(auVar5 << 0x40,6),(ushort)(byte)(uVar13 >> 8));
    iVar19 = iVar19 + (int)uVar4;
    iVar20 = iVar20 + (uint)(uint3)(auVar2._10_3_ >> 0x10);
    uVar13 = *(uint *)((longlong)local_118 + uVar11 + 4);
    uVar11 = uVar11 + 8;
    auVar3[0xc] = (char)(uVar13 >> 0x18);
    auVar3._0_12_ = ZEXT712(0);
    uVar4 = CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar13 >> 0x10));
    auVar6._5_8_ = 0;
    auVar6._0_5_ = uVar4;
    iVar12 = iVar12 + (uVar13 & 0xff);
    iVar14 = iVar14 + (int)CONCAT72(SUB137(auVar6 << 0x40,6),(ushort)(byte)(uVar13 >> 8));
    iVar15 = iVar15 + (int)uVar4;
    iVar16 = iVar16 + (uint)(uint3)(auVar3._10_3_ >> 0x10);
  } while (uVar11 < 0x100);
  uVar13 = iVar12 + iVar17 + iVar15 + iVar19 + iVar14 + iVar18 + iVar16 + iVar20;
  if (uVar13 < 0x50) {
    bVar1 = (&DAT_149d6c770)[uVar13];
    uVar10 = (ulonglong)bVar1;
    if (param_3 < 0x10) {
      uVar13 = (uint)bVar1;
      if (param_3 < 5) {
        uVar7 = 4;
        if (bVar1 < 5) {
          uVar7 = uVar13;
        }
        uVar10 = (ulonglong)uVar7;
      }
      else if (param_3 < 10) {
        uVar7 = 5;
        if (uVar13 < 6) {
          uVar7 = uVar13;
        }
        uVar10 = (ulonglong)uVar7;
      }
      else {
        uVar7 = 7;
        if (uVar13 < 8) {
          uVar7 = uVar13;
        }
        uVar10 = (ulonglong)uVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138,uVar10);
}


