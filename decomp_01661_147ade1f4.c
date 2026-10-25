// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ade1f4 FUN_147ade1f4 body=132 status=ok
// SIG undefined FUN_147ade1f4(void)

undefined1 * FUN_147ade1f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_Parameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147ade278;
}



// FUNCTION 147ade27c FUN_147ade27c body=62 status=ok
// SIG undefined FUN_147ade27c(void)

void FUN_147ade27c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ade2ba(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147ade2ba FUN_147ade2ba body=93 status=ok
// SIG undefined FUN_147ade2ba(void)

ulonglong FUN_147ade2ba(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147ade318 FUN_147ade318 body=147 status=ok
// SIG undefined FUN_147ade318(void)

void FUN_147ade318(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 147ade3ac FUN_147ade3ac body=38 status=ok
// SIG undefined FUN_147ade3ac(void)

undefined8 FUN_147ade3ac(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ade3d2 FUN_147ade3d2 body=151 status=ok
// SIG undefined FUN_147ade3d2(void)

void FUN_147ade3d2(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  uStack_10 = 0;
  local_38 = 0;
  local_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x140);
  local_48 = **(undefined8 **)(param_1 + 0x128);
  local_40 = **(undefined8 **)(param_1 + 0x108);
  uStack_30 = (*(undefined8 **)(param_1 + 0x128))[2];
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x10);
  uStack_20 = (*(undefined8 **)(param_1 + 0x108))[2];
  FUN_147add784(*(undefined8 *)(param_1 + 0x28));
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ade46a FUN_147ade46a body=283 status=ok
// SIG undefined FUN_147ade46a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ade46a(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147ade586(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x150 + *param_1);
  for (; param_2 != 0; param_2 = param_2 - 1) {
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 8) = 0xffffffff;
    *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x5c) = 1;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined4 *)(puVar3 + 0x14) = 1;
    uVar2 = _DAT_14c846288;
    puVar3[0x1c] = _DAT_14c846280;
    puVar3[0x1d] = uVar2;
    uVar2 = _DAT_14c846278;
    puVar3[0x1a] = _DAT_14c846270;
    puVar3[0x1b] = uVar2;
    uVar2 = _DAT_14c846268;
    puVar3[0x18] = _DAT_14c846260;
    puVar3[0x19] = uVar2;
    uVar2 = DAT_14c846258;
    puVar3[0x16] = _DAT_14c846250;
    puVar3[0x17] = uVar2;
    puVar3[0x1e] = DAT_14c846350;
    *(undefined4 *)(puVar3 + 0x1f) = DAT_14c846358;
    *(undefined8 *)((longlong)puVar3 + 0xfc) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x104) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x114) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x11c) = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3 = puVar3 + 0x2a;
  }
  return;
}



// FUNCTION 147ade586 FUN_147ade586 body=146 status=ok
// SIG undefined FUN_147ade586(void)

void FUN_147ade586(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x150,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x150,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ade61a FUN_147ade61a body=226 status=ok
// SIG undefined FUN_147ade61a(void)

void FUN_147ade61a(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    param_2 = param_2 - iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2) {
      FUN_147ade6fe(param_1,iVar2);
    }
    if (param_2 != 0) {
      memset((void *)((longlong)iVar2 * 8 + *param_1),0,(ulonglong)param_2 << 3);
      return;
    }
    return;
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  iVar3 = iVar2 - param_2;
  if (iVar3 != 0 && (int)param_2 <= iVar2) {
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_147ade7c3(_Dst,iVar3);
    iVar1 = (int)param_1[1] - iVar2;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - iVar3;
    if (param_3 == '\x01') {
      FUN_147ade784(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147ade6fe FUN_147ade6fe body=132 status=ok
// SIG undefined FUN_147ade6fe(void)

void FUN_147ade6fe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ade784 FUN_147ade784 body=63 status=ok
// SIG undefined FUN_147ade784(void)

void FUN_147ade784(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ade806(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147ade7c3 FUN_147ade7c3 body=67 status=ok
// SIG undefined FUN_147ade7c3(void)

void FUN_147ade7c3(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 147ade806 FUN_147ade806 body=97 status=ok
// SIG undefined FUN_147ade806(void)

ulonglong FUN_147ade806(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147ade868 FUN_147ade868 body=132 status=ok
// SIG undefined FUN_147ade868(void)

void FUN_147ade868(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ade8ed FUN_147ade8ed body=41 status=ok
// SIG undefined FUN_147ade8ed(void)

void FUN_147ade8ed(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147ade916(param_1);
    param_1 = param_1 + 0x150;
  }
  return;
}



// FUNCTION 147ade916 FUN_147ade916 body=270 status=ok
// SIG undefined FUN_147ade916(void)

void FUN_147ade916(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x140) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x138) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x88) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x68) + 8);
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



// FUNCTION 147adea24 FUN_147adea24 body=63 status=ok
// SIG undefined FUN_147adea24(void)

void FUN_147adea24(longlong *param_1)

{
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147adea64 FUN_147adea64 body=138 status=ok
// SIG undefined FUN_147adea64(void)

code * FUN_147adea64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightStream";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000218;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adeaee;
}



// FUNCTION 147adeaee FUN_147adeaee body=138 status=ok
// SIG undefined FUN_147adeaee(void)

code * FUN_147adeaee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousBoneMatrices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000217;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adeb78;
}



// FUNCTION 147adeb78 FUN_147adeb78 body=138 status=ok
// SIG undefined FUN_147adeb78(void)

code * FUN_147adeb78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoneMatrices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000216;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d36adc;
}



// FUNCTION 147adec02 FUN_147adec02 body=138 status=ok
// SIG undefined FUN_147adec02(void)

code * FUN_147adec02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoneUpdatedFrameNumber";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000214;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adec8c;
}



// FUNCTION 147adec8c FUN_147adec8c body=138 status=ok
// SIG undefined FUN_147adec8c(void)

code * FUN_147adec8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bIsMorphTarget";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000213;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d36b64;
}



// FUNCTION 147aded16 FUN_147aded16 body=132 status=ok
// SIG undefined FUN_147aded16(void)

undefined1 * FUN_147aded16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightIndexSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x210;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d36ad8;
}



// FUNCTION 147aded9a FUN_147aded9a body=138 status=ok
// SIG undefined FUN_147aded9a(void)

code * FUN_147aded9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousClothSimulVertsPositionsNormals";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000241;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adee24;
}



// FUNCTION 147adee24 FUN_147adee24 body=138 status=ok
// SIG undefined FUN_147adee24(void)

code * FUN_147adee24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClothSimulVertsPositionsNormals";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000240;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adeeae;
}



// FUNCTION 147adeeae FUN_147adeeae body=138 status=ok
// SIG undefined FUN_147adeeae(void)

code * FUN_147adeeae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec0000023e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463d0fb6;
}



// FUNCTION 147adef38 FUN_147adef38 body=138 status=ok
// SIG undefined FUN_147adef38(void)

code * FUN_147adef38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSkinApexClothStartIndexOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000023c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147adefc2;
}



// FUNCTION 147adefc2 FUN_147adefc2 body=138 status=ok
// SIG undefined FUN_147adefc2(void)

code * FUN_147adefc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000023a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e73c6;
}



// FUNCTION 147adf04c FUN_147adf04c body=138 status=ok
// SIG undefined FUN_147adf04c(void)

code * FUN_147adf04c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousClothToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000236;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e733c;
}



// FUNCTION 147adf0fa FUN_147adf0fa body=138 status=ok
// SIG undefined FUN_147adf0fa(void)

code * FUN_147adf0fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtraKeyCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146061132;
}



// FUNCTION 147adf184 FUN_147adf184 body=138 status=ok
// SIG undefined FUN_147adf184(void)

longlong FUN_147adf184(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"RadixSortParameterBuffer",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InKeys",0);
  FUN_147440a6c(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"OutOffsets",0);
  return param_1;
}



// FUNCTION 147adf20e FUN_147adf20e body=95 status=ok
// SIG undefined FUN_147adf20e(void)

longlong FUN_147adf20e(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InOffsets",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"OutOffsets",0);
  return param_1;
}



// FUNCTION 147adf26e FUN_147adf26e body=237 status=ok
// SIG undefined FUN_147adf26e(void)

longlong FUN_147adf26e(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"RadixSortParameterBuffer",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InKeys",0);
  FUN_147440a6c(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"InValues",0);
  FUN_147440a6c(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"InOffsets",0);
  FUN_147440a6c(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"OutKeys",0);
  FUN_147440a6c(param_1 + 0xf4,*(undefined8 *)(param_2 + 0x28),L"OutValues",0);
  return param_1;
}



// FUNCTION 147adf35c FUN_147adf35c body=304 status=ok
// SIG undefined FUN_147adf35c(void)

void FUN_147adf35c(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) == 0x400) {
    iVar4 = 0;
    iVar3 = 0x400;
  }
  else {
    FUN_14480809c(param_2,0x400);
    iVar4 = *(int *)(param_2 + 1);
    iVar3 = *(int *)((longlong)param_2 + 0xc);
  }
  *(int *)(param_2 + 1) = iVar4 + 0x400;
  if ((uint)(iVar3 - iVar4) < 0x400) {
    FUN_1447808da(param_2);
  }
  uVar2 = *(undefined8 *)(&DAT_14cae1bc8 + (param_3 & 0xffffffff) * 8);
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  _Src = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,uVar2,0,0x1000,0);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,0);
  }
  memcpy((void *)*param_2,_Src,0x1000);
  uVar2 = *(undefined8 *)(&DAT_14cae1bc8 + (param_3 & 0xffffffff) * 8);
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147adf453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 147adf48c FUN_147adf48c body=205 status=ok
// SIG undefined FUN_147adf48c(void)

/* WARNING: Removing unreachable block (ram,0x000147adf4d3) */
/* WARNING: Removing unreachable block (ram,0x000147adf4a1) */
/* WARNING: Removing unreachable block (ram,0x000147adf4c1) */
/* WARNING: Removing unreachable block (ram,0x000147adf4e1) */
/* WARNING: Removing unreachable block (ram,0x000147adf4ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147adf48c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = DAT_14cae3c20;
  LOCK();
  UNLOCK();
  DAT_14cae3c20 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cae3c28 = _DAT_14cae3c28 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((longlong)DAT_14cae3c10 != 0) {
          lVar3 = 0;
          do {
            if ((*(int *)(DAT_14cae3c08 + 8 + lVar3) != 0) &&
               (*(longlong *)(DAT_14cae3c08 + lVar3) != 0)) {
              FUN_1409999d8(&DAT_14cae3c08);
              break;
            }
            lVar3 = lVar3 + 0x10;
          } while ((longlong)DAT_14cae3c10 * 0x10 != lVar3);
        }
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cae3c28 = _DAT_14cae3c28 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147adf56a FUN_147adf56a body=93 status=ok
// SIG undefined FUN_147adf56a(void)

void FUN_147adf56a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adf5c8 FUN_147adf5c8 body=93 status=ok
// SIG undefined FUN_147adf5c8(void)

void FUN_147adf5c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adf626 FUN_147adf626 body=126 status=ok
// SIG undefined FUN_147adf626(void)

void FUN_147adf626(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a914880;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147adf695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147adf6b4 FUN_147adf6b4 body=114 status=ok
// SIG undefined FUN_147adf6b4(void)

void FUN_147adf6b4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147adf740 FUN_147adf740 body=29 status=ok
// SIG undefined FUN_147adf740(void)

bool FUN_147adf740(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147adf75e FUN_147adf75e body=26 status=ok
// SIG undefined FUN_147adf75e(void)

bool FUN_147adf75e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147adf778 FUN_147adf778 body=93 status=ok
// SIG undefined FUN_147adf778(void)

void FUN_147adf778(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a914960;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9148f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adf7d6 FUN_147adf7d6 body=93 status=ok
// SIG undefined FUN_147adf7d6(void)

void FUN_147adf7d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a914960;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9148f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adf834 FUN_147adf834 body=126 status=ok
// SIG undefined FUN_147adf834(void)

void FUN_147adf834(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a914960;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9148f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147adf8a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147adf8b2 FUN_147adf8b2 body=40 status=ok
// SIG undefined FUN_147adf8b2(void)

void FUN_147adf8b2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147adf8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147adf8da FUN_147adf8da body=140 status=ok
// SIG undefined FUN_147adf8da(void)

bool FUN_147adf8da(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147adf96a FUN_147adf96a body=132 status=ok
// SIG undefined FUN_147adf96a(void)

void FUN_147adf96a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147adf9f0 FUN_147adf9f0 body=95 status=ok
// SIG undefined FUN_147adf9f0(void)

void FUN_147adf9f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147adfa50 FUN_147adfa50 body=164 status=ok
// SIG undefined FUN_147adfa50(void)

void FUN_147adfa50(longlong *param_1,undefined8 param_2)

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
        goto LAB_147adfad0;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147adfad0:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147adfaf4 FUN_147adfaf4 body=31 status=ok
// SIG undefined FUN_147adfaf4(void)

undefined8 FUN_147adfaf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adfb30 FUN_147adfb30 body=93 status=ok
// SIG undefined FUN_147adfb30(void)

void FUN_147adfb30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9149d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adfb8e FUN_147adfb8e body=93 status=ok
// SIG undefined FUN_147adfb8e(void)

void FUN_147adfb8e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3cb240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9149d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adfbec FUN_147adfbec body=126 status=ok
// SIG undefined FUN_147adfbec(void)

void FUN_147adfbec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3cb240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9149d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147adfc5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147adfc78 FUN_147adfc78 body=31 status=ok
// SIG undefined FUN_147adfc78(void)

undefined8 FUN_147adfc78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adfca8 FUN_147adfca8 body=93 status=ok
// SIG undefined FUN_147adfca8(void)

void FUN_147adfca8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adfd06 FUN_147adfd06 body=93 status=ok
// SIG undefined FUN_147adfd06(void)

void FUN_147adfd06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adfd64 FUN_147adfd64 body=126 status=ok
// SIG undefined FUN_147adfd64(void)

void FUN_147adfd64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a914a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147adfdd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147adfdf0 FUN_147adfdf0 body=31 status=ok
// SIG undefined FUN_147adfdf0(void)

undefined8 FUN_147adfdf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adfe20 FUN_147adfe20 body=93 status=ok
// SIG undefined FUN_147adfe20(void)

void FUN_147adfe20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adfe7e FUN_147adfe7e body=93 status=ok
// SIG undefined FUN_147adfe7e(void)

void FUN_147adfe7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147adfedc FUN_147adfedc body=126 status=ok
// SIG undefined FUN_147adfedc(void)

void FUN_147adfedc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a914ab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147adff4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147adff68 FUN_147adff68 body=64 status=ok
// SIG undefined FUN_147adff68(void)

void FUN_147adff68(void)

{
  if (DAT_14cadc0fc != 0) {
    DAT_14cadc0fc = 0;
    FUN_1446f8d3c(&DAT_14cadc0f0,DAT_14cadc0f8,0,0x18,8);
  }
  return;
}



// FUNCTION 147adffa8 FUN_147adffa8 body=31 status=ok
// SIG undefined FUN_147adffa8(void)

undefined8 FUN_147adffa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147adffde FUN_147adffde body=93 status=ok
// SIG undefined FUN_147adffde(void)

void FUN_147adffde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914b20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ae003c FUN_147ae003c body=93 status=ok
// SIG undefined FUN_147ae003c(void)

void FUN_147ae003c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914b20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ae009a FUN_147ae009a body=126 status=ok
// SIG undefined FUN_147ae009a(void)

void FUN_147ae009a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a914b20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ae0109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ae012a FUN_147ae012a body=81 status=ok
// SIG undefined FUN_147ae012a(void)

undefined8 FUN_147ae012a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147ae0182 FUN_147ae0182 body=89 status=ok
// SIG undefined FUN_147ae0182(void)

bool FUN_147ae0182(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147ae01cd;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147ae01cd:
  return lVar6 == param_2;
}



// FUNCTION 147ae01dc FUN_147ae01dc body=118 status=ok
// SIG undefined FUN_147ae01dc(void)

void FUN_147ae01dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914c20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147ae0252 FUN_147ae0252 body=156 status=ok
// SIG undefined FUN_147ae0252(void)

void FUN_147ae0252(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a914c20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ae02de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ae02ee FUN_147ae02ee body=48 status=ok
// SIG undefined FUN_147ae02ee(void)

void FUN_147ae02ee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x110,8);
  }
  return;
}



// FUNCTION 147ae031e FUN_147ae031e body=48 status=ok
// SIG undefined FUN_147ae031e(void)

void FUN_147ae031e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x118,8);
  }
  return;
}



// FUNCTION 147ae034e FUN_147ae034e body=48 status=ok
// SIG undefined FUN_147ae034e(void)

void FUN_147ae034e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 147ae037e FUN_147ae037e body=38 status=ok
// SIG undefined FUN_147ae037e(void)

void FUN_147ae037e(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 147ae03a4 FUN_147ae03a4 body=147 status=ok
// SIG undefined FUN_147ae03a4(void)

void FUN_147ae03a4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 147ae0438 FUN_147ae0438 body=132 status=ok
// SIG undefined FUN_147ae0438(void)

void FUN_147ae0438(longlong param_1,int param_2)

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



// FUNCTION 147ae04be FUN_147ae04be body=95 status=ok
// SIG undefined FUN_147ae04be(void)

void FUN_147ae04be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147ae051e FUN_147ae051e body=132 status=ok
// SIG undefined FUN_147ae051e(void)

void FUN_147ae051e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae05a4 FUN_147ae05a4 body=93 status=ok
// SIG undefined FUN_147ae05a4(void)

ulonglong FUN_147ae05a4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147ae0602 FUN_147ae0602 body=56 status=ok
// SIG undefined FUN_147ae0602(void)

undefined8 * FUN_147ae0602(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a914d00;
  FUN_144725486();
  FUN_1463d1338(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae063a FUN_147ae063a body=38 status=ok
// SIG undefined FUN_147ae063a(void)

undefined8 FUN_147ae063a(undefined8 param_1,int param_2)

{
  FUN_1463d1338();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae0660 FUN_147ae0660 body=56 status=ok
// SIG undefined FUN_147ae0660(void)

undefined8 * FUN_147ae0660(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a914db0;
  FUN_144725486();
  FUN_1463d1404(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae0698 FUN_147ae0698 body=38 status=ok
// SIG undefined FUN_147ae0698(void)

undefined8 FUN_147ae0698(undefined8 param_1,int param_2)

{
  FUN_1463d1404();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae06be FUN_147ae06be body=65 status=ok
// SIG undefined FUN_147ae06be(void)

undefined8 * FUN_147ae06be(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147ae0742(puVar1,param_1);
  return puVar1;
}



// FUNCTION 147ae0700 FUN_147ae0700 body=65 status=ok
// SIG undefined FUN_147ae0700(void)

undefined8 * FUN_147ae0700(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147ae0742(puVar1,param_1);
  return puVar1;
}



// FUNCTION 147ae0742 FUN_147ae0742 body=128 status=ok
// SIG undefined FUN_147ae0742(void)

void FUN_147ae0742(longlong param_1,undefined8 param_2)

{
  FUN_1474409b8(param_1 + 4,param_2,L"MeshOrigin",0);
  FUN_1474409b8(param_1 + 10,param_2,L"MeshExtension",0);
  FUN_1474409b8(param_1 + 0x10,param_2,L"MotionBlurDataOrigin",0);
  FUN_1474409b8(param_1 + 0x16,param_2,L"MotionBlurDataExtension",0);
  FUN_1474409b8(param_1 + 0x1c,param_2,L"MotionBlurPositionScale",0);
  return;
}



// FUNCTION 147ae07c2 FUN_147ae07c2 body=865 status=ok
// SIG undefined FUN_147ae07c2(void)

void FUN_147ae07c2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  short *psVar9;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = *(longlong **)(param_4 + 0x40);
  uVar4 = *(undefined8 *)(*plVar3 + 0x10);
  uVar1 = *(uint *)(param_3 + 0x148);
  iVar2 = *(int *)(param_6 + 0x60);
  *(uint *)(param_6 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_6 + 100) < iVar2 + 1U) {
    FUN_14744556c(param_6,iVar2);
  }
  lVar8 = *(longlong *)(param_6 + 0x58);
  if (*(longlong *)(param_6 + 0x58) == 0) {
    lVar8 = param_6;
  }
  *(uint *)(lVar8 + (longlong)iVar2 * 0xc) = uVar1 & 0xf;
  *(undefined8 *)(lVar8 + 4 + (longlong)iVar2 * 0xc) = uVar4;
  uVar4 = *(undefined8 *)(plVar3[1] + 0x10);
  uVar1 = *(uint *)(param_3 + 0x14c);
  iVar2 = *(int *)(param_6 + 0x60);
  *(uint *)(param_6 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_6 + 100) < iVar2 + 1U) {
    FUN_14744556c(param_6,iVar2);
  }
  lVar8 = *(longlong *)(param_6 + 0x58);
  if (*(longlong *)(param_6 + 0x58) == 0) {
    lVar8 = param_6;
  }
  *(uint *)(lVar8 + (longlong)iVar2 * 0xc) = uVar1 & 0xf;
  *(undefined8 *)(lVar8 + 4 + (longlong)iVar2 * 0xc) = uVar4;
  local_4c = *(undefined2 *)(param_1 + 8);
  local_50 = *(undefined4 *)(param_1 + 4);
  FUN_1471da628(param_5,&local_50,plVar3 + 2);
  local_54 = *(undefined2 *)(param_1 + 0xe);
  local_58 = *(undefined4 *)(param_1 + 10);
  FUN_1471da628(param_5,&local_58,(longlong)plVar3 + 0x1c);
  local_5c = *(undefined2 *)(param_1 + 0x14);
  local_60 = *(undefined4 *)(param_1 + 0x10);
  FUN_1471da628(param_5,&local_60,plVar3 + 5);
  local_64 = *(undefined2 *)(param_1 + 0x1a);
  local_68 = *(undefined4 *)(param_1 + 0x16);
  FUN_1471da628(param_5,&local_68,(longlong)plVar3 + 0x34);
  local_6c = *(undefined2 *)(param_1 + 0x20);
  local_70 = *(undefined4 *)(param_1 + 0x1c);
  FUN_147198166(param_5,&local_70,plVar3 + 8);
  FUN_145e35fb4();
  uVar5 = *(ulonglong *)(param_2 + 0xa0);
  uVar6 = param_2 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar6 + lVar8 * 4) == DAT_14cade1b0) {
        uVar5 = *(ulonglong *)(param_2 + 0xb0);
        uVar6 = param_2 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar6 = uVar5;
        }
        psVar9 = (short *)(uVar6 + lVar8);
        goto LAB_147ae099a;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar8);
  }
  psVar9 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_147ae099a:
  if (*psVar9 != -1) {
    FUN_144b11088(param_5,plVar3[9]);
  }
  lVar8 = plVar3[0x10];
  FUN_145e40af0();
  uVar5 = *(ulonglong *)(param_2 + 0xa0);
  uVar6 = param_2 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar6 + lVar7 * 4) == DAT_14cade248) {
        uVar5 = *(ulonglong *)(param_2 + 0xb0);
        uVar6 = param_2 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar6 = uVar5;
        }
        psVar9 = (short *)(uVar6 + lVar7);
        goto LAB_147ae0a30;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_147ae0a30:
  if (*psVar9 != -1) {
    FUN_144b11088(param_5,lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ae0b24 FUN_147ae0b24 body=147 status=ok
// SIG undefined FUN_147ae0b24(void)

void FUN_147ae0b24(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae0bb8 FUN_147ae0bb8 body=132 status=ok
// SIG undefined FUN_147ae0bb8(void)

void FUN_147ae0bb8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae0c3e FUN_147ae0c3e body=62 status=ok
// SIG undefined FUN_147ae0c3e(void)

void FUN_147ae0c3e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ae0c7c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 147ae0c7c FUN_147ae0c7c body=112 status=ok
// SIG undefined FUN_147ae0c7c(void)

ulonglong FUN_147ae0c7c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147ae0cb6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_147ae0cb6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147ae0cec FUN_147ae0cec body=115 status=ok
// SIG undefined FUN_147ae0cec(void)

void FUN_147ae0cec(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ae0d60 FUN_147ae0d60 body=88 status=ok
// SIG undefined FUN_147ae0d60(void)

void FUN_147ae0d60(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147ae0db8 FUN_147ae0db8 body=132 status=ok
// SIG undefined FUN_147ae0db8(void)

void FUN_147ae0db8(longlong param_1,int param_2)

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



// FUNCTION 147ae0e3d FUN_147ae0e3d body=43 status=ok
// SIG undefined FUN_147ae0e3d(void)

void FUN_147ae0e3d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147ae0e68 FUN_147ae0e68 body=366 status=ok
// SIG undefined FUN_147ae0e68(void)

undefined4 * FUN_147ae0e68(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ae0fd8(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar10 = *puVar1;
  *local_40 = uVar10;
  local_40[1] = puVar1[1];
  lVar8 = puVar1[2];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar10 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar5 = (uint)uVar10 & 0xffff;
  uVar9 = ((uint)uVar10 << 0x10 | uVar5) + (int)((ulonglong)uVar10 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147ae10be(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x24) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ae11ec(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae0fd8 FUN_147ae0fd8 body=230 status=ok
// SIG undefined FUN_147ae0fd8(void)

int * FUN_147ae0fd8(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147ae10be FUN_147ae10be body=188 status=ok
// SIG undefined FUN_147ae10be(void)

undefined8 FUN_147ae10be(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if (*plVar11 == *param_3) {
          plVar3 = (longlong *)plVar11[2];
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
          lVar8 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar11 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
          *(int *)(plVar11 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
          *(int *)plVar11 = (int)lVar8;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
          *(int *)(plVar11 + 1) = (int)lVar9;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
          FUN_147ae117a(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = (int)plVar11[4];
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ae117a FUN_147ae117a body=114 status=ok
// SIG undefined FUN_147ae117a(void)

void FUN_147ae117a(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 147ae11ec FUN_147ae11ec body=473 status=ok
// SIG undefined FUN_147ae11ec(void)

void FUN_147ae11ec(longlong *param_1)

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



// FUNCTION 147ae13c6 FUN_147ae13c6 body=366 status=ok
// SIG undefined FUN_147ae13c6(void)

undefined4 * FUN_147ae13c6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ae0fd8(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar10 = *puVar1;
  *local_40 = uVar10;
  local_40[1] = puVar1[1];
  lVar8 = puVar1[2];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar10 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = *puVar2;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar10 >> 0x10);
  uVar5 = (uint)uVar10 & 0xffff;
  uVar9 = ((uint)uVar10 << 0x10 | uVar5) + (int)((ulonglong)uVar10 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_147ae10be(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x24) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147ae11ec(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae1536 FUN_147ae1536 body=133 status=ok
// SIG undefined FUN_147ae1536(void)

void FUN_147ae1536(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(((uint)lVar2 << 0x10 | uVar5) + (int)((ulonglong)lVar2 >> 0x20) +
                           (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x28) == lVar2) {
          FUN_147ae15bc();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147ae15bc FUN_147ae15bc body=87 status=ok
// SIG undefined FUN_147ae15bc(void)

void FUN_147ae15bc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_147ae1614();
  return;
}



// FUNCTION 147ae1614 FUN_147ae1614 body=78 status=ok
// SIG undefined FUN_147ae1614(void)

void FUN_147ae1614(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x28);
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
  FUN_147ae117a(param_1,param_2);
  return;
}



// FUNCTION 147ae1662 FUN_147ae1662 body=42 status=ok
// SIG undefined FUN_147ae1662(void)

void FUN_147ae1662(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x160);
  return;
}



// FUNCTION 147ae1690 FUN_147ae1690 body=977 status=ok
// SIG undefined FUN_147ae1690(void)

longlong FUN_147ae1690(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0xffff;
  *(undefined8 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)(param_1 + 0x102) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  *(undefined8 *)(param_1 + 0x13a) = 0;
  *(undefined8 *)(param_1 + 0x142) = 0;
  *(undefined8 *)(param_1 + 0x14a) = 0;
  *(undefined8 *)(param_1 + 0x152) = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"NumVertices",0);
  FUN_1474409b8(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"SkinCacheStart",0);
  FUN_147440a6c(param_1 + 0xfa,*(undefined8 *)(param_2 + 0x28),L"BoneMatrices",0);
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"TangentInputBuffer",0);
  FUN_147440a6c(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"PositionInputBuffer",0);
  FUN_1474409b8(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"InputStreamStart",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"NumBoneInfluences",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"InputWeightIndexSize",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"InputWeightStart",0);
  FUN_1474409b8(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"InputWeightStride",0);
  FUN_147440a6c(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"InputWeightStream",0);
  FUN_147440a6c(param_1 + 0x12a,*(undefined8 *)(param_2 + 0x28),L"InputWeightLookupStream",0);
  FUN_147440a6c(param_1 + 0x106,*(undefined8 *)(param_2 + 0x28),L"PositionBufferUAV",0);
  FUN_147440a6c(param_1 + 0x10a,*(undefined8 *)(param_2 + 0x28),L"TangentBufferUAV",0);
  FUN_147440a6c(param_1 + 0x12e,*(undefined8 *)(param_2 + 0x28),L"MorphBuffer",0);
  FUN_1474409b8(param_1 + 0x132,*(undefined8 *)(param_2 + 0x28),L"MorphBufferOffset",0);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"SkinCacheDebug",0);
  FUN_147440a6c(param_1 + 0x138,*(undefined8 *)(param_2 + 0x28),L"ClothBuffer",0);
  FUN_147440a6c(param_1 + 0x13c,*(undefined8 *)(param_2 + 0x28),L"ClothPositionsAndNormalsBuffer",0)
  ;
  FUN_1474409b8(param_1 + 0x140,*(undefined8 *)(param_2 + 0x28),L"ClothBufferOffset",0);
  FUN_1474409b8(param_1 + 0x146,*(undefined8 *)(param_2 + 0x28),L"ClothBlendWeight",0);
  FUN_1474409b8(param_1 + 0x14c,*(undefined8 *)(param_2 + 0x28),L"ClothToLocal",0);
  FUN_1474409b8(param_1 + 0x152,*(undefined8 *)(param_2 + 0x28),L"ClothNumInfluencesPerVertex",0);
  FUN_1474409b8(param_1 + 0x158,*(undefined8 *)(param_2 + 0x28),L"WorldScale",0);
  return param_1;
}



// FUNCTION 147ae1a62 FUN_147ae1a62 body=42 status=ok
// SIG undefined FUN_147ae1a62(void)

void FUN_147ae1a62(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x130);
  return;
}



// FUNCTION 147ae1a90 FUN_147ae1a90 body=573 status=ok
// SIG undefined FUN_147ae1a90(void)

longlong FUN_147ae1a90(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"IntermediateAccumBufferUAV",0);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"IntermediateAccumBufferOffset",0);
  FUN_1474409b8(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"NumTriangles",0);
  FUN_147440a6c(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"GPUPositionCacheBuffer",0);
  FUN_147440a6c(param_1 + 0xf4,*(undefined8 *)(param_2 + 0x28),L"GPUTangentCacheBuffer",0);
  FUN_1474409b8(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"SkinCacheStart",0);
  FUN_147440a6c(param_1 + 0xfe,*(undefined8 *)(param_2 + 0x28),L"IndexBuffer",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"IndexBufferOffset",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"InputStreamStart",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"NumTexCoords",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"SelectedTexCoord",0);
  FUN_147440a6c(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"TangentInputBuffer",0);
  FUN_147440a6c(param_1 + 0x11e,*(undefined8 *)(param_2 + 0x28),L"UVsInputBuffer",0);
  FUN_147440a6c(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"DuplicatedIndices",0);
  FUN_147440a6c(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"DuplicatedIndicesIndices",0);
  return param_1;
}



// FUNCTION 147ae1cce FUN_147ae1cce body=42 status=ok
// SIG undefined FUN_147ae1cce(void)

void FUN_147ae1cce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147ae1cfc FUN_147ae1cfc body=343 status=ok
// SIG undefined FUN_147ae1cfc(void)

longlong FUN_147ae1cfc(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfe) = 0;
  *(undefined8 *)(param_1 + 0x106) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"IntermediateAccumBufferUAV",0);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"IntermediateAccumBufferOffset",0);
  FUN_147440a6c(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"TangentBufferUAV",0);
  FUN_147440a6c(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"TangentInputBuffer",0);
  FUN_147440a6c(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"ColorInputBuffer",0);
  FUN_1474409b8(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"SkinCacheStart",0);
  FUN_1474409b8(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x28),L"NumVertices",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"InputStreamStart",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"VertexColorChannel",0);
  return param_1;
}



// FUNCTION 147ae1e53 FUN_147ae1e53 body=40 status=ok
// SIG undefined FUN_147ae1e53(void)

void FUN_147ae1e53(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x34;
    do {
      *(undefined8 *)(param_1 + -4) = 0;
      *(undefined8 *)(param_1 + -0x34) = 0;
      *(undefined8 *)(param_1 + -0x2c) = 0;
      *(undefined8 *)(param_1 + -0x24) = 0;
      *(undefined8 *)(param_1 + -0x1c) = 0;
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147ae1e7c FUN_147ae1e7c body=143 status=ok
// SIG undefined FUN_147ae1e7c(void)

void FUN_147ae1e7c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae1f0c FUN_147ae1f0c body=89 status=ok
// SIG undefined FUN_147ae1f0c(void)

void FUN_147ae1f0c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x38 + *param_1);
  FUN_1456b4104(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147ae1f65 FUN_147ae1f65 body=277 status=ok
// SIG undefined FUN_147ae1f65(void)

void FUN_147ae1f65(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147ae207a(*param_2,lVar11,param_5,param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147ae207a FUN_147ae207a body=474 status=ok
// SIG undefined FUN_147ae207a(void)

void FUN_147ae207a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144abbe48(param_2,param_1 + 0xea,param_3 + 0x100,0);
  FUN_144a86bff(param_2,param_1 + 0xf0,*(undefined8 *)(*(longlong *)(param_3 + 0x128) + 0x10));
  lVar1 = *(longlong *)(param_3 + 0x110);
  if (*(longlong *)(param_3 + 0x110) == 0) {
    lVar1 = *(longlong *)(param_3 + 0x108);
  }
  if (*(longlong *)(param_3 + 0x30) == 0) {
    lVar1 = *(longlong *)(param_3 + 0x108);
  }
  FUN_144a86bff(param_2,param_1 + 0xf4,*(undefined8 *)(lVar1 + 0x10));
  FUN_144a86bff(param_2,param_1 + 0x11e,*(undefined8 *)(param_3 + 0x70));
  FUN_144abbe48(param_2,param_1 + 0xf8,param_3 + 0x50,0);
  FUN_144a86bff(param_2,param_1 + 0xfe,*(undefined8 *)(param_3 + 0x30));
  FUN_144abbe48(param_2,param_1 + 0x102,param_3 + 0xfc,0);
  FUN_144abbe48(param_2,param_1 + 0x108,param_3 + 0x58,0);
  FUN_144abbe48(param_2,param_1 + 0x10e,param_3 + 0x5c,0);
  FUN_144abbe48(param_2,param_1 + 0x114,param_3 + 0x60,0);
  FUN_144a86bff(param_2,param_1 + 0x11a,*(undefined8 *)(param_3 + 0x68));
  FUN_144a86bff(param_2,param_1 + 0x11a,*(undefined8 *)(param_3 + 0x70));
  FUN_144a86a8e(param_2,param_1 + 0xe0,*(undefined8 *)(param_4 + 8));
  local_34 = *(int *)(param_3 + 0x120) * DAT_14cade684;
  FUN_144abbe48(param_2,param_1 + 0xe4,&local_34,0);
  if (DAT_14cade680 == 0) {
    FUN_144a86bff(param_2,param_1 + 0x122,*(undefined8 *)(param_3 + 0x140));
    FUN_144a86bff(param_2,param_1 + 0x126,*(undefined8 *)(param_3 + 0x138));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae2255 FUN_147ae2255 body=277 status=ok
// SIG undefined FUN_147ae2255(void)

void FUN_147ae2255(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147ae236a(*param_2,lVar11,param_5,param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147ae236a FUN_147ae236a body=374 status=ok
// SIG undefined FUN_147ae236a(void)

void FUN_147ae236a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144abbe48(param_2,param_1 + 0xf6,param_3 + 0x50,0);
  FUN_144abbe48(param_2,param_1 + 0xfc,param_3 + 0x54,0);
  FUN_144abbe48(param_2,param_1 + 0x102,param_3 + 0x58,0);
  local_34 = (uint)*(byte *)(*(longlong *)(param_3 + 0x38) + 0xf);
  FUN_144abbe48(param_2,param_1 + 0x108,&local_34,0);
  FUN_144a86a8e(param_2,param_1 + 0xe0,*(undefined8 *)(param_4 + 8));
  local_34 = *(int *)(param_3 + 0x120) * DAT_14cade684;
  FUN_144abbe48(param_2,param_1 + 0xe4,&local_34,0);
  FUN_144a86a8e(param_2,param_1 + 0xea,*(undefined8 *)(*(longlong *)(param_3 + 0x108) + 8));
  if ((*(longlong *)(param_3 + 0x110) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x110) + 0x10), lVar3 == 0)) {
    FUN_144a86bff(param_2,param_1 + 0xee,0);
  }
  else {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    FUN_144a86bff(param_2,param_1 + 0xee,lVar3);
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar3);
    }
  }
  FUN_144a86bff(param_2,param_1 + 0xf2,*(undefined8 *)(param_3 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae24e2 FUN_147ae24e2 body=132 status=ok
// SIG undefined FUN_147ae24e2(void)

void FUN_147ae24e2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae2567 FUN_147ae2567 body=565 status=ok
// SIG undefined FUN_147ae2567(void)

void FUN_147ae2567(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar2 = (ulonglong *)*plVar8;
      puVar9 = (ulonglong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 3);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_147ae262a:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_147ae26a8;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                if (uVar12 < *puVar13) {
                  puVar7 = puVar13;
                  uVar12 = *puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_147ae277b;
      }
LAB_147ae2790:
      FUN_147ae279d(puVar2);
LAB_147ae277b:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147ae26a8:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_147ae277b;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_147ae277b;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 3);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_147ae2790;
  goto LAB_147ae262a;
}



// FUNCTION 147ae279d FUN_147ae279d body=283 status=ok
// SIG undefined FUN_147ae279d(void)

void FUN_147ae279d(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x000147ae27be:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x000147ae27be;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 147ae28b8 FUN_147ae28b8 body=95 status=ok
// SIG undefined FUN_147ae28b8(void)

void FUN_147ae28b8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147ae2918 FUN_147ae2918 body=132 status=ok
// SIG undefined FUN_147ae2918(void)

void FUN_147ae2918(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae299e FUN_147ae299e body=96 status=ok
// SIG undefined FUN_147ae299e(void)

void FUN_147ae299e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147ae29fe FUN_147ae29fe body=86 status=ok
// SIG undefined FUN_147ae29fe(void)

void FUN_147ae29fe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147ae2a54 FUN_147ae2a54 body=132 status=ok
// SIG undefined FUN_147ae2a54(void)

void FUN_147ae2a54(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae2ad9 FUN_147ae2ad9 body=330 status=ok
// SIG undefined FUN_147ae2ad9(void)

void FUN_147ae2ad9(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147ae2c24(*param_2,lVar11,param_4,*param_5,param_6,*param_7,*param_8);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147ae2c24 FUN_147ae2c24 body=675 status=ok
// SIG undefined FUN_147ae2c24(void)

void FUN_147ae2c24(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7)

{
  short sVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144abbe48(param_2,param_1 + 0xe0,param_5 + 0x54,0);
  FUN_144abbe48(param_2,param_1 + 0xec,param_5 + 0x58,0);
  FUN_144a86bff(param_2,param_1 + 0xfa,*(undefined8 *)(param_3 + 8));
  FUN_144a86bff(param_2,param_1 + 0xfe,*(undefined8 *)(param_5 + 0x68));
  FUN_144a86bff(param_2,param_1 + 0x102,*(undefined8 *)(param_5 + 0x80));
  FUN_144abbe48(param_2,param_1 + 0x10e,param_5 + 0x4c,0);
  FUN_144abbe48(param_2,param_1 + 0x114,param_4 + 0x38,0);
  FUN_144abbe48(param_2,param_1 + 0x11a,param_5 + 0x90,0);
  FUN_144abbe48(param_2,param_1 + 0x120,param_4 + 0x3c,0);
  FUN_144a86bff(param_2,param_1 + 0x126,*(undefined8 *)(param_4 + 0x40));
  FUN_144a86bff(param_2,param_1 + 0x12a,*(undefined8 *)(param_4 + 0x48));
  FUN_144a86a8e(param_2,param_1 + 0x106,param_6);
  FUN_144a86a8e(param_2,param_1 + 0x10a,param_7);
  FUN_144abbe48(param_2,param_1 + 0xf2,param_5 + 0x50,0);
  sVar1 = *(short *)(param_5 + 0x44);
  if (sVar1 == 1) {
    FUN_144a86bff(param_2,param_1 + 0x12e,*(undefined8 *)(param_4 + 0x50));
    FUN_144abbe48(param_2,param_1 + 0x132,param_5 + 0x94,0);
    sVar1 = *(short *)(param_5 + 0x44);
  }
  if (sVar1 == 2) {
    FUN_144a86bff(param_2,param_1 + 0x138,*(undefined8 *)(param_4 + 0x58));
    FUN_144a86bff(param_2,param_1 + 0x13c,*(undefined8 *)(param_5 + 0x88));
    FUN_144abbe48(param_2,param_1 + 0x140,param_5 + 0x98,0);
    FUN_1447e4b92(param_2,param_1 + 0x146,param_5 + 0x9c,0);
    FUN_1447f9c4a(param_2,param_1 + 0x14c,param_5 + 0xb0,0);
    FUN_144abbe48(param_2,param_1 + 0x152,param_5 + 0xa0,0);
    FUN_1447f9a48(param_2,param_1 + 0x158,param_5 + 0xf0,0);
  }
  local_44 = *(undefined4 *)(DAT_14cade650 + 4);
  FUN_1447e4b92(param_2,param_1 + 0xe6,&local_44,0);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae2ec8 FUN_147ae2ec8 body=322 status=ok
// SIG undefined FUN_147ae2ec8(void)

void FUN_147ae2ec8(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 147ae300c FUN_147ae300c body=48 status=ok
// SIG undefined FUN_147ae300c(void)

void FUN_147ae300c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147ae303c FUN_147ae303c body=132 status=ok
// SIG undefined FUN_147ae303c(void)

void FUN_147ae303c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae30c2 FUN_147ae30c2 body=56 status=ok
// SIG undefined FUN_147ae30c2(void)

longlong FUN_147ae30c2(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 0x10) != 0 && (*(ulonglong *)(param_1 + 0x10) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae3108 FUN_147ae3108 body=60 status=ok
// SIG undefined FUN_147ae3108(void)

longlong FUN_147ae3108(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 147ae315c FUN_147ae315c body=59 status=ok
// SIG undefined FUN_147ae315c(void)

int FUN_147ae315c(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x15555556) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0xc;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0xc);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147ae31c0 FUN_147ae31c0 body=21 status=ok
// SIG undefined FUN_147ae31c0(void)

undefined * FUN_147ae31c0(void)

{
  FUN_147ae370c();
  return &DAT_14cae36d8;
}



// FUNCTION 147ae31e2 FUN_147ae31e2 body=56 status=ok
// SIG undefined FUN_147ae31e2(void)

longlong FUN_147ae31e2(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae321a FUN_147ae321a body=570 status=ok
// SIG undefined FUN_147ae321a(void)

void FUN_147ae321a(ulonglong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xc;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147ae3456(param_2,param_1);
    goto LAB_147ae33f1;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] * 0xc,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147ae33f1;
    local_20 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147ae33ca:
    uVar4 = *param_1;
    uVar7 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar7 = uVar4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,uVar7,(longlong)(int)local_20 * 0xc);
  }
  else {
    if (local_1c == 0xc) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0xaaaaaab) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar5 = 0;
        uVar6 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147ae3608(param_1);
          iVar5 = (int)param_1[1];
          uVar6 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = iVar5 + local_20;
        if (uVar6 - iVar5 < local_20) {
          FUN_147ae3678(param_1,iVar5);
        }
        goto LAB_147ae33ca;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147ae33f1:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ae3456 FUN_147ae3456 body=327 status=ok
// SIG undefined FUN_147ae3456(void)

longlong * FUN_147ae3456(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147ae3608(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar4 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147ae359e(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar4 = (uint)param_2[1];
    }
    uVar3 = *param_2;
    uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    (**(code **)(*param_1 + 0x170))(param_1,uVar5,(longlong)(int)uVar4 * 0xc);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ae359e FUN_147ae359e body=106 status=ok
// SIG undefined FUN_147ae359e(void)

undefined8 FUN_147ae359e(longlong param_1,uint param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  iVar4 = (int)(uVar2 / 0xc);
  iVar5 = 0x7fffffff;
  if ((int)param_2 <= iVar4) {
    iVar5 = iVar4;
  }
  if (param_3 < iVar5) {
    uVar3 = FUN_144a7f90c(param_1,0,iVar5,0xc,4);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return uVar3;
}



// FUNCTION 147ae3608 FUN_147ae3608 body=112 status=ok
// SIG undefined FUN_147ae3608(void)

void FUN_147ae3608(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 147ae3678 FUN_147ae3678 body=147 status=ok
// SIG undefined FUN_147ae3678(void)

void FUN_147ae3678(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ae370c FUN_147ae370c body=205 status=ok
// SIG undefined FUN_147ae370c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae370c(void)

{
  if ((DAT_14cae373f & 2) != 0) {
    return;
  }
  DAT_14cae373f = DAT_14cae373f | 2;
  _DAT_14cae36e0 = L"TResourceArray";
  _DAT_14cae36f8 = FUN_146826540;
  _DAT_14cae3700 = FUN_146825d77;
  _DAT_14cae3708 = FUN_146825fd6;
  _DAT_14cae3710 = FUN_1407e02ea;
  _DAT_14cae3718 = FUN_146826273;
  _DAT_14cae36f0 = FUN_147ae37da;
  _DAT_14cae3730 = 0xffffffff00000020;
  _DAT_14cae3738 = 8;
  DAT_14cae373c = 1;
  _DAT_14cae3720 = FUN_147ae3806;
  FUN_147ae381c();
  FUN_147ae392a();
  FUN_1407e00cc(&DAT_14cae36d8);
  return;
}



// FUNCTION 147ae37da FUN_147ae37da body=43 status=ok
// SIG undefined FUN_147ae37da(void)

void FUN_147ae37da(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147ae3806 FUN_147ae3806 body=21 status=ok
// SIG undefined FUN_147ae3806(void)

undefined * FUN_147ae3806(void)

{
  FUN_147ae3b03();
  return &DAT_14cae3740;
}



// FUNCTION 147ae381c FUN_147ae381c body=270 status=ok
// SIG undefined FUN_147ae381c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae381c(void)

{
  _DAT_14cae3768 = L"bNeedsCPUAccess";
  DAT_14cae3792 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cae3770 = &DAT_14c9cfcf0;
  _DAT_14cae3780 = &LAB_14682652b;
  _DAT_14cae3788 = &DAT_100000018;
  _DAT_14cae3790 = 0;
  _DAT_14cae3778 = DAT_14cae36e8;
  DAT_14cae36e8 = &DAT_14cae3768;
  return;
}



// FUNCTION 147ae392a FUN_147ae392a body=473 status=ok
// SIG undefined FUN_147ae392a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae392a(void)

{
  _DAT_14cae3798 = L"BASE";
  DAT_14cae37c2 = 4;
  if ((DAT_14cae382f & 2) == 0) {
    DAT_14cae382f = DAT_14cae382f | 3;
    _DAT_14cae37d0 = L"(TArray<T, AllocatorType>)";
    _DAT_14cae37e8 = &LAB_147ae3b7e;
    _DAT_14cae37f0 = FUN_147ae3b8c;
    _DAT_14cae37f8 = &LAB_147ae3bac;
    _DAT_14cae3800 = &LAB_147ae3bba;
    _DAT_14cae3808 = &LAB_147ae3bc8;
    _DAT_14cae37e0 = FUN_147ae3bd4;
    _DAT_14cae3820 = 0x1000000010;
    _DAT_14cae3828 = 8;
    DAT_14cae382c = '\0';
  }
  else if (DAT_14cae382c != '\0') {
    DAT_14cae373e = DAT_14cae373e + '\x01';
  }
  _DAT_14cae37a8 = DAT_14cae36e8;
  _DAT_14cae37b8 = &DAT_100000008;
  _DAT_14cae37b0 = &LAB_14682652b;
  _DAT_14cae37a0 = &DAT_14cae37c8;
  DAT_14cae373d = DAT_14cae373d + '\x01';
  DAT_14cae36e8 = &DAT_14cae3798;
  _DAT_14cae3898 = L"BASE";
  DAT_14cae38c2 = 4;
  _DAT_14cae38a0 = FUN_146268212();
  _DAT_14cae38a8 = DAT_14cae36e8;
  _DAT_14cae38b0 = &LAB_14682652b;
  DAT_14cae36e8 = &DAT_14cae3898;
  DAT_14cae373d = DAT_14cae373d + '\x01';
  _DAT_14cae38b8 = 0x100000000;
  if (*(char *)(_DAT_14cae38a0 + 100) != '\0') {
    DAT_14cae373e = DAT_14cae373e + '\x01';
  }
  return;
}



// FUNCTION 147ae3b03 FUN_147ae3b03 body=122 status=ok
// SIG undefined FUN_147ae3b03(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae3b03(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae3760) {
    FUN_144b3d300(&DAT_14cae3760);
    if (DAT_14cae3760 == -1) {
      DAT_14cae3748 = 0;
      uRam000000014cae3750 = 0;
      _DAT_14cae3740 = &PTR_FUN_14a915390;
      DAT_14cae3758 = 0;
      atexit((_func_5014 *)&LAB_14351c7bb);
      _Init_thread_footer(&DAT_14cae3760);
      return;
    }
  }
  return;
}



// FUNCTION 147ae3b8c FUN_147ae3b8c body=31 status=ok
// SIG undefined FUN_147ae3b8c(void)

undefined8
FUN_147ae3b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147ae3d38(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147ae3bd4 FUN_147ae3bd4 body=51 status=ok
// SIG undefined FUN_147ae3bd4(void)

void FUN_147ae3bd4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147ae3c08 FUN_147ae3c08 body=234 status=ok
// SIG undefined FUN_147ae3c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae3c08(longlong param_1,undefined8 param_2)

{
  if ((DAT_14cae3897 & 2) == 0) {
    DAT_14cae3897 = DAT_14cae3897 | 3;
    _DAT_14cae3838 = L"FVector3f";
    _DAT_14cae3850 = &LAB_147ae3cf2;
    _DAT_14cae3858 = &LAB_147ae3cfe;
    _DAT_14cae3860 = &LAB_147ae3d12;
    _DAT_14cae3868 = &LAB_147ae3d18;
    _DAT_14cae3870 = &LAB_147ae3d1c;
    _DAT_14cae3848 = &LAB_147ae3d22;
    _DAT_14cae3888 = 0xc0000000c;
    _DAT_14cae3890 = 4;
    DAT_14cae3894 = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14cae3830,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147ae3d38 FUN_147ae3d38 body=245 status=ok
// SIG undefined FUN_147ae3d38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae3d38(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147ae3e2e(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14cae3897 & 2) == 0) {
    DAT_14cae3897 = DAT_14cae3897 | 3;
    _DAT_14cae3838 = L"FVector3f";
    _DAT_14cae3850 = &LAB_147ae3cf2;
    _DAT_14cae3858 = &LAB_147ae3cfe;
    _DAT_14cae3860 = &LAB_147ae3d12;
    _DAT_14cae3868 = &LAB_147ae3d18;
    _DAT_14cae3870 = &LAB_147ae3d1c;
    _DAT_14cae3848 = &LAB_147ae3d22;
    _DAT_14cae3888 = 0xc0000000c;
    _DAT_14cae3890 = 4;
    DAT_14cae3894 = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14cae3830,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147ae3e2e FUN_147ae3e2e body=59 status=ok
// SIG undefined FUN_147ae3e2e(void)

void FUN_147ae3e2e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147ae3e6a(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147ae3eca();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147ae3e6a FUN_147ae3e6a body=95 status=ok
// SIG undefined FUN_147ae3e6a(void)

void FUN_147ae3e6a(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147ae3678(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 0xc),0,(longlong)(int)param_2 * 0xc);
  return;
}



// FUNCTION 147ae3eca FUN_147ae3eca body=62 status=ok
// SIG undefined FUN_147ae3eca(void)

void FUN_147ae3eca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ae3f08(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147ae3f08 FUN_147ae3f08 body=112 status=ok
// SIG undefined FUN_147ae3f08(void)

ulonglong FUN_147ae3f08(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147ae3f42;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147ae3f42:
  return param_2 & 0xffffffff;
}



// FUNCTION 147ae3f78 FUN_147ae3f78 body=203 status=ok
// SIG undefined FUN_147ae3f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ae3f78(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14cae3897 & 2) == 0) {
    DAT_14cae3897 = DAT_14cae3897 | 3;
    _DAT_14cae3838 = L"FVector3f";
    _DAT_14cae3850 = &LAB_147ae3cf2;
    _DAT_14cae3858 = &LAB_147ae3cfe;
    _DAT_14cae3860 = &LAB_147ae3d12;
    _DAT_14cae3868 = &LAB_147ae3d18;
    _DAT_14cae3870 = &LAB_147ae3d1c;
    _DAT_14cae3848 = &LAB_147ae3d22;
    _DAT_14cae3888 = 0xc0000000c;
    _DAT_14cae3890 = 4;
    DAT_14cae3894 = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14cae3830,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147ae4044 FUN_147ae4044 body=132 status=ok
// SIG undefined FUN_147ae4044(void)

void FUN_147ae4044(longlong param_1,int param_2)

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



// FUNCTION 147ae40ca FUN_147ae40ca body=312 status=ok
// SIG undefined FUN_147ae40ca(void)

undefined4 * FUN_147ae40ca(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147ae4204(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147ae42ea(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_147ae43d8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae4204 FUN_147ae4204 body=229 status=ok
// SIG undefined FUN_147ae4204(void)

int * FUN_147ae4204(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147ae42ea FUN_147ae42ea body=124 status=ok
// SIG undefined FUN_147ae42ea(void)

undefined8 FUN_147ae42ea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147ae4366(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ae4366 FUN_147ae4366 body=114 status=ok
// SIG undefined FUN_147ae4366(void)

void FUN_147ae4366(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147ae43d8 FUN_147ae43d8 body=477 status=ok
// SIG undefined FUN_147ae43d8(void)

void FUN_147ae43d8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ae45b6 FUN_147ae45b6 body=90 status=ok
// SIG undefined FUN_147ae45b6(void)

void FUN_147ae45b6(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147ae4366();
  return;
}



// FUNCTION 147ae4610 FUN_147ae4610 body=62 status=ok
// SIG undefined FUN_147ae4610(void)

void FUN_147ae4610(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ae464e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147ae464e FUN_147ae464e body=93 status=ok
// SIG undefined FUN_147ae464e(void)

ulonglong FUN_147ae464e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147ae46ac FUN_147ae46ac body=201 status=ok
// SIG undefined FUN_147ae46ac(void)

void FUN_147ae46ac(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147ae4776 FUN_147ae4776 body=56 status=ok
// SIG undefined FUN_147ae4776(void)

undefined8 * FUN_147ae4776(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a915450;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae47ae FUN_147ae47ae body=631 status=ok
// SIG undefined FUN_147ae47ae(void)

void FUN_147ae47ae(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  void *_Dst;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FNullMorphVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x17ffe8;
  local_7c = 0x4101;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 0x78;
  }
  plVar5 = (longlong *)(param_1 + 0x10);
  if (plVar5 != &local_90) {
    lVar4 = *plVar5;
    *plVar5 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_147ae48a0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147ae48a0:
  lVar4 = *plVar5;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x17ffe8;
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2);
  }
  memset(_Dst,0,0x17ffe8);
  lVar4 = *plVar5;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae4a26 FUN_147ae4a26 body=38 status=ok
// SIG undefined FUN_147ae4a26(void)

undefined8 FUN_147ae4a26(undefined8 param_1,int param_2)

{
  FUN_1415bd356();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4a4c FUN_147ae4a4c body=48 status=ok
// SIG undefined FUN_147ae4a4c(void)

void FUN_147ae4a4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147ae4a7c FUN_147ae4a7c body=38 status=ok
// SIG undefined FUN_147ae4a7c(void)

undefined8 FUN_147ae4a7c(undefined8 param_1,int param_2)

{
  FUN_1415bd3e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4aa2 FUN_147ae4aa2 body=48 status=ok
// SIG undefined FUN_147ae4aa2(void)

void FUN_147ae4aa2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147ae4ad2 FUN_147ae4ad2 body=38 status=ok
// SIG undefined FUN_147ae4ad2(void)

undefined8 FUN_147ae4ad2(undefined8 param_1,int param_2)

{
  FUN_14601da46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4af8 FUN_147ae4af8 body=48 status=ok
// SIG undefined FUN_147ae4af8(void)

longlong FUN_147ae4af8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b8;
  FUN_14601da46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4b2c FUN_147ae4b2c body=48 status=ok
// SIG undefined FUN_147ae4b2c(void)

longlong FUN_147ae4b2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4c8;
  FUN_14601da46(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4b5c FUN_147ae4b5c body=38 status=ok
// SIG undefined FUN_147ae4b5c(void)

undefined8 FUN_147ae4b5c(undefined8 param_1,int param_2)

{
  FUN_14601daba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4b82 FUN_147ae4b82 body=48 status=ok
// SIG undefined FUN_147ae4b82(void)

longlong FUN_147ae4b82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b8;
  FUN_14601daba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4bb6 FUN_147ae4bb6 body=48 status=ok
// SIG undefined FUN_147ae4bb6(void)

longlong FUN_147ae4bb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4c8;
  FUN_14601daba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4be6 FUN_147ae4be6 body=56 status=ok
// SIG undefined FUN_147ae4be6(void)

undefined8 * FUN_147ae4be6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9155a0;
  FUN_144725486();
  FUN_1463d15ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4c1e FUN_147ae4c1e body=38 status=ok
// SIG undefined FUN_147ae4c1e(void)

undefined8 FUN_147ae4c1e(undefined8 param_1,int param_2)

{
  FUN_1463d15ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4c44 FUN_147ae4c44 body=56 status=ok
// SIG undefined FUN_147ae4c44(void)

undefined8 * FUN_147ae4c44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a915620;
  FUN_144725486();
  FUN_1463d1754(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4c7c FUN_147ae4c7c body=38 status=ok
// SIG undefined FUN_147ae4c7c(void)

undefined8 FUN_147ae4c7c(undefined8 param_1,int param_2)

{
  FUN_1463d1754();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ae4ca2 FUN_147ae4ca2 body=85 status=ok
// SIG undefined FUN_147ae4ca2(void)

void FUN_147ae4ca2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a913cb0;
  lVar3 = 0x248;
  do {
    if (*(longlong *)((longlong)param_1 + lVar3) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar3) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0x230);
  FUN_1412b7f2a(param_1);
  return;
}



// FUNCTION 147ae4cf8 FUN_147ae4cf8 body=42 status=ok
// SIG undefined FUN_147ae4cf8(void)

void FUN_147ae4cf8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147ae4d2e FUN_147ae4d2e body=39 status=ok
// SIG undefined FUN_147ae4d2e(void)

void FUN_147ae4d2e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147ae4d94(uVar1,param_1);
  return;
}



// FUNCTION 147ae4d56 FUN_147ae4d56 body=61 status=ok
// SIG undefined FUN_147ae4d56(void)

longlong FUN_147ae4d56(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xee) = 0;
  return lVar1;
}



// FUNCTION 147ae4d94 FUN_147ae4d94 body=190 status=ok
// SIG undefined FUN_147ae4d94(void)

longlong FUN_147ae4d94(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xee) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"CopyParams",0);
  FUN_147440a6c(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"SourceData",0);
  FUN_147440a6c(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"DestData0",0);
  FUN_147440a6c(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"DestData1",0);
  FUN_147440a6c(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"DestData2",0);
  return param_1;
}



// FUNCTION 147ae4e52 FUN_147ae4e52 body=166 status=ok
// SIG undefined FUN_147ae4e52(void)

undefined8 FUN_147ae4e52(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (DAT_14cae3fe8 != DAT_14cae4014) {
    lVar3 = *param_1;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    puVar6 = &DAT_14cae4018;
    if (DAT_14cae4020 != (undefined *)0x0) {
      puVar6 = DAT_14cae4020;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14cae4028 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cae3fe0 + (longlong)iVar2 * 0x50;
      if (*(longlong *)(DAT_14cae3fe0 + (longlong)iVar2 * 0x50) == lVar3) {
        if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
          return 0;
        }
        return CONCAT71((int7)(lVar1 + 8U >> 8),*(undefined1 *)(lVar1 + 0x40));
      }
      iVar2 = *(int *)(lVar1 + 0x48);
    }
  }
  return 0;
}



// FUNCTION 147ae4ef8 FUN_147ae4ef8 body=28 status=ok
// SIG undefined FUN_147ae4ef8(void)

undefined2 * FUN_147ae4ef8(byte param_1)

{
  if (param_1 < 0x25) {
    return (undefined2 *)(&PTR_u_NoneDebug_14a920670)[param_1];
  }
  return &DAT_149e01fe8;
}



// FUNCTION 147ae4f14 FUN_147ae4f14 body=9452 status=ok
// SIG undefined FUN_147ae4f14(void)

char FUN_147ae4f14(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  LOCK();
  bVar7 = DAT_14cae4041 == '\0';
  if (bVar7) {
    DAT_14cae4041 = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_1447d2058();
  }
  if (((DAT_14cae4040 & 1) == 0) && (cVar2 = FUN_144a787fd(), cVar2 != '\0')) {
    local_a8 = L"NoneDebugDesc";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"No debug mode");
    local_a8 = L"NoneDebug";
    uStack_a0._0_4_ = 9;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,&DAT_149e01fe8);
    FUN_143521892(0,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MacroGroupsDesc";
    uStack_a0._0_4_ = 0xf;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Instances info");
    local_a8 = L"MacroGroups";
    uStack_a0._0_4_ = 0xb;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Instances");
    FUN_143521892(0x13,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"LightBoundsDesc";
    uStack_a0._0_4_ = 0xf;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"All DOMs light bounds");
    local_a8 = L"LightBounds";
    uStack_a0._0_4_ = 0xb;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Light Bound");
    FUN_143521892(0x14,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MacroGroupScreenRectDesc";
    uStack_a0._0_4_ = 0x18;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Screen projected instances");
    local_a8 = L"MacroGroupScreenRect";
    uStack_a0._0_4_ = 0x14;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Screen Bounds");
    FUN_143521892(0x16,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"DeepOpacityMapsDesc";
    uStack_a0._0_4_ = 0x13;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Deep opacity maps");
    local_a8 = L"DeepOpacityMaps";
    uStack_a0._0_4_ = 0xf;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Deep Shadows");
    FUN_143521892(0x15,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"SamplePerPixelDesc";
    uStack_a0._0_4_ = 0x12;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Sub-pixel sample count");
    local_a8 = L"SamplePerPixel";
    uStack_a0._0_4_ = 0xe;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Sample Per Pixel");
    FUN_143521892(0x17,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"TAAResolveTypeDesc";
    uStack_a0._0_4_ = 0x12;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"TAA resolve type (regular/responsive)");
    local_a8 = L"TAAResolveType";
    uStack_a0._0_4_ = 0xe;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"AA Type");
    FUN_143521892(0x19,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"CoverageTypeDesc";
    uStack_a0._0_4_ = 0x10;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,
                  L"Type of hair coverage - Fully covered : Green / Partially covered : Red");
    local_a8 = L"CoverageType";
    uStack_a0._0_4_ = 0xc;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Coverage Type");
    FUN_143521892(0x18,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"VoxelsDensityDesc";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair density volume");
    local_a8 = L"VoxelsDensity";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Voxels");
    FUN_143521892(0x1a,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MeshProjectionDesc";
    uStack_a0._0_4_ = 0x12;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair mesh projection");
    local_a8 = L"MeshProjection";
    uStack_a0._0_4_ = 0xe;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Root Bindings");
    FUN_143521892(0x1b,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"CoverageDesc";
    uStack_a0._0_4_ = 0xc;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair coverage");
    local_a8 = L"Coverage";
    uStack_a0._0_4_ = 8;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Coverage");
    FUN_143521892(0x1c,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MaterialDepthDesc";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair material depth");
    local_a8 = L"MaterialDepth";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Depth");
    FUN_143521892(0x1d,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MaterialBaseColorDesc";
    uStack_a0._0_4_ = 0x15;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair material base color");
    local_a8 = L"MaterialBaseColor";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"BaseColor");
    FUN_143521892(0x1e,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MaterialRoughnessDesc";
    uStack_a0._0_4_ = 0x15;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair material roughness");
    local_a8 = L"MaterialRoughness";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Roughness");
    FUN_143521892(0x1f,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MaterialSpecularDesc";
    uStack_a0._0_4_ = 0x14;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair material specular");
    local_a8 = L"MaterialSpecular";
    uStack_a0._0_4_ = 0x10;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Specular");
    FUN_143521892(0x20,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MaterialTangentDesc";
    uStack_a0._0_4_ = 0x13;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair material tangent");
    local_a8 = L"MaterialTangent";
    uStack_a0._0_4_ = 0xf;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Tangent");
    FUN_143521892(0x21,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"TileDesc";
    uStack_a0._0_4_ = 8;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair tile cotegorization");
    local_a8 = L"Tile";
    uStack_a0._0_4_ = 4;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Tile");
    FUN_143521892(0x23,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"SimHairStrandsDesc";
    uStack_a0._0_4_ = 0x12;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Simulation strands");
    local_a8 = L"SimHairStrands";
    uStack_a0._0_4_ = 0xe;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Guides");
    FUN_143521892(1,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"RenderHairStrandsDesc";
    uStack_a0._0_4_ = 0x15;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Rendering strands influences");
    local_a8 = L"RenderHairStrands";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Strands Guides Influences");
    FUN_143521892(2,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"CardGuidesDesc";
    uStack_a0._0_4_ = 0xe;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Cards Guides");
    local_a8 = L"CardGuides";
    uStack_a0._0_4_ = 10;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Cards Guides");
    FUN_143521892(0x22,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"RootUVDesc";
    uStack_a0._0_4_ = 10;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Roots UV");
    local_a8 = L"RootUV";
    uStack_a0._0_4_ = 6;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Root UV");
    FUN_143521892(4,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"RootUDIMDesc";
    uStack_a0._0_4_ = 0xc;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Roots UV UDIM texture index");
    local_a8 = L"RootUDIM";
    uStack_a0._0_4_ = 8;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Root UDIM");
    FUN_143521892(5,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"UVDesc";
    uStack_a0._0_4_ = 6;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair UV");
    local_a8 = (wchar_t *)&DAT_14a916d08;
    uStack_a0._0_4_ = 2;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,&DAT_14a916d08);
    FUN_143521892(3,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"SeedDesc";
    uStack_a0._0_4_ = 8;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair seed");
    local_a8 = L"Seed";
    uStack_a0._0_4_ = 4;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Seed");
    FUN_143521892(6,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"DimensionDesc";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair dimensions");
    local_a8 = L"Dimension";
    uStack_a0._0_4_ = 9;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Dimension");
    FUN_143521892(7,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"RadiusVariationDesc";
    uStack_a0._0_4_ = 0x13;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair radius variation");
    local_a8 = L"RadiusVariation";
    uStack_a0._0_4_ = 0xf;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Radius Variation");
    FUN_143521892(8,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"TangentDesc";
    uStack_a0._0_4_ = 0xb;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair tangent");
    local_a8 = L"Tangent";
    uStack_a0._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Tangent");
    FUN_143521892(9,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"ControlPointsDesc";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair control points");
    local_a8 = L"ControlPoints";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Control Points");
    FUN_143521892(0x12,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"ColorDesc";
    uStack_a0._0_4_ = 9;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Control point color (optional)");
    local_a8 = L"Color";
    uStack_a0._0_4_ = 5;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Per-CV Color");
    FUN_143521892(10,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"RoughnessDesc";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Control point roughness  (optional)");
    local_a8 = L"Roughness";
    uStack_a0._0_4_ = 9;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Per-CV Roughness");
    FUN_143521892(0xb,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"ClusterDesc";
    uStack_a0._0_4_ = 0xb;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair clusters");
    local_a8 = L"Cluster";
    uStack_a0._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Clusters");
    FUN_143521892(0xe,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"ClusterAABBDesc";
    uStack_a0._0_4_ = 0xf;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair clusters AABBs");
    local_a8 = L"ClusterAABB";
    uStack_a0._0_4_ = 0xb;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Clusters Bounds");
    FUN_143521892(0xf,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"GroupDesc";
    uStack_a0._0_4_ = 9;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair groups");
    local_a8 = L"Group";
    uStack_a0._0_4_ = 5;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Groups");
    FUN_143521892(0x10,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"LODColorationDesc";
    uStack_a0._0_4_ = 0x11;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Hair LOD coloring");
    local_a8 = L"LODColoration";
    uStack_a0._0_4_ = 0xd;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"LOD Color");
    FUN_143521892(0x11,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"AODesc";
    uStack_a0._0_4_ = 6;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Control point AO  (optional)");
    local_a8 = (wchar_t *)&DAT_14a916d4c;
    uStack_a0._0_4_ = 2;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Per-CV AO");
    FUN_143521892(0xc,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"ClumpIDDesc";
    uStack_a0._0_4_ = 0xb;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Curve clumpID  (optional)");
    local_a8 = L"ClumpID";
    uStack_a0._0_4_ = 7;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Clump ID");
    FUN_143521892(0xd,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_a8 = L"MemoryDesc";
    uStack_a0._0_4_ = 10;
    FUN_1446e940c(&local_78,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0._0_4_ = 0x17;
    FUN_1446e940c(local_ac,&local_a8);
    FUN_140208bae(&local_68,local_ac,&local_78,L"Memory");
    local_a8 = L"Memory";
    uStack_a0._0_4_ = 6;
    FUN_1446e940c(local_b0,&local_a8);
    local_a8 = L"FGroomVisualizationData";
    uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,0x17);
    FUN_1446e940c(local_b4,&local_a8);
    FUN_140208bae(&local_a8,local_b4,local_b0,L"Memory");
    FUN_143521892(0x24,&local_a8,&local_68);
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (longlong *)&DAT_100000000;
    local_60 = &DAT_14cae3ff0;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14cae4008 != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    uVar1 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    uStack_a0 = local_68;
    local_98 = local_60;
    local_a8 = (wchar_t *)&DAT_14cae3fe0;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (local_90._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar6 = local_90._4_4_;
      local_90 = uVar1;
      do {
        lVar3 = *(longlong *)local_a8;
        FUN_140056680(&local_68,&DAT_14a819d6a);
        iVar4 = (int)local_60 + -1;
        if ((int)local_60 == 0) {
          iVar4 = 0;
        }
        thunk_FUN_1400020e8(&local_78,local_68,iVar4);
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar3 = (longlong)iVar6 * 0x50 + lVar3;
        iVar6 = *(int *)(lVar3 + 0x10);
        iVar4 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar4 = 0;
        }
        thunk_FUN_1400020e8(&local_78,*(undefined8 *)(lVar3 + 8),iVar4);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_a0._4_4_);
        FUN_1449c0562(&uStack_a0);
        iVar6 = local_90._4_4_;
        uVar1 = local_90;
      } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
    }
    local_90 = uVar1;
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = (longlong *)0x0;
    FUN_14020fad6(&local_a8,
                  L"When the viewport view-mode is set to \'Groom Visualization\', this command specifies which of the various channels to display. Values entered other than the allowed values shown below will be ignored."
                 );
    iVar6 = (int)uStack_70 + -1;
    if ((int)uStack_70 == 0) {
      iVar6 = 0;
    }
    thunk_FUN_1400020e8(&local_a8,local_78,iVar6);
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar5 = local_a8;
    if ((int)uStack_a0 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    local_c8 = 1;
    (**(code **)(*DAT_14c8407a8 + 0x18))(DAT_14c8407a8,L"r.HairStrands.ViewMode",0,puVar5);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(DAT_14cae4030._4_4_,(undefined4)DAT_14cae4030) != 0) {
      FUN_1400020a8();
    }
    DAT_14cae4030._0_4_ = (undefined4)local_a8;
    DAT_14cae4030._4_4_ = local_a8._4_4_;
    uRam000000014cae4038 = (int)uStack_a0;
    uRam000000014cae403c = uStack_a0._4_4_;
  }
  LOCK();
  DAT_14cae4040 = 1;
  UNLOCK();
  LOCK();
  bVar7 = DAT_14cae4041 == '\x01';
  cVar2 = DAT_14cae4041;
  if (bVar7) {
    DAT_14cae4041 = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    cVar2 = FUN_14008cdb0(&DAT_14cae4041);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae7402 FUN_147ae7402 body=241 status=ok
// SIG undefined FUN_147ae7402(void)

undefined8 * FUN_147ae7402(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14cae4050 != DAT_14cae407c) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    puVar5 = &DAT_14cae4080;
    if (DAT_14cae4088 != (undefined *)0x0) {
      puVar5 = DAT_14cae4088;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14cae4090 - 1U &
                              (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cae4048 + (longlong)iVar2 * 0x20;
      if (*(longlong *)(DAT_14cae4048 + (longlong)iVar2 * 0x20) == param_2) {
        if (lVar1 != 0) {
          *param_1 = 0;
          iVar2 = *(int *)(lVar1 + 0x10);
          _Src = *(void **)(lVar1 + 8);
          *(int *)(param_1 + 1) = iVar2;
          if ((longlong)iVar2 != 0) {
            FUN_1446dd670(param_1,iVar2,0);
            memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
            return param_1;
          }
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
          return param_1;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147ae74f4 FUN_147ae74f4 body=161 status=ok
// SIG undefined FUN_147ae74f4(void)

void FUN_147ae74f4(longlong param_1,undefined8 param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  dStack_30 = param_3[1];
  local_28 = param_3[2];
  FUN_147cbba68();
  if ((longlong)*(int *)(param_1 + 0xaf8) != 0) {
    pdVar1 = *(double **)(param_1 + 0xaf0);
    pdVar2 = pdVar1 + (longlong)*(int *)(param_1 + 0xaf8) * 7;
    do {
      *pdVar1 = *param_3 + *pdVar1;
      pdVar1[1] = param_3[1] + pdVar1[1];
      pdVar1[2] = param_3[2] + pdVar1[2];
      pdVar1 = pdVar1 + 7;
    } while (pdVar1 != pdVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae7596 FUN_147ae7596 body=90 status=ok
// SIG undefined FUN_147ae7596(void)

longlong FUN_147ae7596(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar1 + 1U) {
    FUN_1400cd0f8(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0xa8 + lVar2;
  FUN_14470b9e0(lVar2,1);
  return lVar2;
}



// FUNCTION 147ae75f0 FUN_147ae75f0 body=808 status=ok
// SIG undefined FUN_147ae75f0(void)

ulonglong FUN_147ae75f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                       int param_5)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  void *_Src;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  uint local_74;
  uint *local_70;
  longlong **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar7 = local_48;
  if ((*(int *)(param_1 + 0xaf8) == param_5) &&
     (uVar7 = (ulonglong)*(uint *)(param_1 + 0xb54), *(uint *)(param_1 + 0xb54) < DAT_14c7590b0)) {
    pbVar1 = (byte *)(param_1 + 0xb50);
    uVar5 = 0;
    LOCK();
    bVar9 = *(char *)(param_1 + 0xb50) == '\0';
    if (bVar9) {
      *(char *)(param_1 + 0xb50) = '\x01';
    }
    UNLOCK();
    if (!bVar9) {
      FUN_1447d2058(pbVar1);
    }
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      if (*(code **)(*plVar3 + 0x58) == (code *)&LAB_144b15db2) {
        uVar5 = *(uint *)(plVar3 + 4);
      }
      else {
        uVar5 = (**(code **)(*plVar3 + 0x58))();
      }
    }
    plVar3 = (longlong *)(param_1 + 0xb00);
    local_74 = uVar5;
    if (*(int *)(param_1 + 0xb08) != *(int *)(param_1 + 0xb34)) {
      lVar6 = param_1 + 0xb38;
      if (*(longlong *)(param_1 + 0xb40) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xb40);
      }
      iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xb48) - 1U & uVar5) * 4);
      if (iVar8 != -1) {
        do {
          lVar6 = *plVar3 + (longlong)iVar8 * 0x30;
          if (*(uint *)(*plVar3 + (longlong)iVar8 * 0x30) == uVar5) {
            if ((lVar6 != 0) && (lVar6 + 8 != 0)) {
              *(uint *)(lVar6 + 0x20) = DAT_14c7590b0;
              FUN_1447cd5a6(lVar6 + 8,param_3);
              *(undefined4 *)(lVar6 + 0x18) = param_4;
              *(int *)(lVar6 + 0x1c) = param_5;
              goto LAB_147ae7820;
            }
            break;
          }
          iVar8 = *(int *)(lVar6 + 0x28);
        } while (iVar8 != -1);
      }
    }
    local_68 = (longlong **)(param_1 + 0xb10);
    local_70 = (uint *)0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if (*(int *)(param_1 + 0xb28) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_a0 = local_60;
    uVar4 = local_a0;
    local_98 = local_58;
    local_94 = local_54;
    local_b0 = local_70;
    local_a8 = (longlong)local_68;
    local_80 = 0;
    local_a0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_90 = plVar3;
    local_88 = plVar3;
    if (local_a0._4_4_ < *(int *)((longlong)local_68 + 0x18)) {
      iVar8 = local_a0._4_4_;
      local_b8 = plVar3;
      local_a0 = uVar4;
      do {
        if (*(uint *)(*local_b8 + 0x20 + (longlong)iVar8 * 0x30) != DAT_14c7590b0) {
          FUN_147af321c(local_90);
          local_80 = CONCAT11(local_80._1_1_,1);
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
        FUN_1449c0562(&local_b0);
        iVar8 = local_a0._4_4_;
      } while (local_a0._4_4_ < *(int *)(local_a8 + 0x18));
      uVar4 = local_a0;
      if (((local_80 & 1) != 0) && (local_80._1_1_ == '\x01')) {
        FUN_147af3030(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34));
        uVar4 = local_a0;
      }
    }
    local_a0 = uVar4;
    local_b8 = (longlong *)0x0;
    uVar5 = *(uint *)(param_3 + 1);
    _Src = (void *)*param_3;
    local_b0 = (uint *)CONCAT44(local_b0._4_4_,uVar5);
    if ((longlong)(int)uVar5 == 0) {
      local_b0 = (uint *)(ulonglong)uVar5;
    }
    else {
      FUN_1447cd5fa(&local_b8,uVar5,0);
      memcpy(local_b8,_Src,(longlong)(int)uVar5);
    }
    local_68 = &local_b8;
    local_a8 = CONCAT44(param_5,param_4);
    local_a0 = CONCAT44(local_a0._4_4_,DAT_14c7590b0);
    local_70 = &local_74;
    FUN_147af332e(plVar3,local_4c);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
LAB_147ae7820:
    uVar7 = 1;
    LOCK();
    bVar2 = *pbVar1;
    if (bVar2 == 1) {
      *pbVar1 = 0;
    }
    else {
      uVar7 = (ulonglong)bVar2;
    }
    UNLOCK();
    if (bVar2 != 1) {
      uVar7 = FUN_14008cdb0(pbVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147ae7922 FUN_147ae7922 body=548 status=ok
// SIG undefined FUN_147ae7922(void)

void FUN_147ae7922(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x28;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147af360e(param_2,param_1);
    goto LAB_147ae7ae9;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0x28,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x28);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147ae7ae9;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147ae7ad2:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 * 0x28);
  }
  else {
    if (local_1c == 0x28) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x3333334) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147af39c6(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147af3932(param_1,iVar4);
        }
        goto LAB_147ae7ad2;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147ae7ae9:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ae7b48 FUN_147ae7b48 body=89 status=ok
// SIG undefined FUN_147ae7b48(void)

void FUN_147ae7b48(longlong param_1,undefined8 param_2)

{
  FUN_147b00aa2();
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    FUN_14484255c(param_2,(longlong)*(int *)(*(longlong *)(param_1 + 0xb10) + 0xc) << 6);
  }
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xb4c) << 2);
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0xbd4) * 0x38);
  return;
}



// FUNCTION 147ae7bac FUN_147ae7bac body=239 status=ok
// SIG undefined FUN_147ae7bac(void)

void FUN_147ae7bac(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_2[1] != 0) {
    bVar1 = *(byte *)(param_1 + 0xc24);
    bVar4 = 4;
    if ((bVar1 & 1) == 0) {
      bVar4 = bVar1 & 4;
    }
    *(byte *)(param_1 + 0xc24) = bVar1 & 0xf9 | bVar4 | 2;
    if (0 < (int)param_2[1]) {
      lVar6 = 0;
      do {
        uVar2 = *(uint *)(*param_2 + lVar6 * 4);
        FUN_14106388a(param_1,uVar2,0,1,1);
        if ((-1 < (longlong)(int)uVar2) && (iVar3 = *(int *)(param_1 + 0x7e0), (int)uVar2 < iVar3))
        {
          iVar5 = ~uVar2 + iVar3;
          if (iVar5 != 0) {
            if (0 < iVar5) {
              iVar5 = 1;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x7d8) + (longlong)(int)uVar2 * 4),
                    (void *)(*(longlong *)(param_1 + 0x7d8) + (ulonglong)(uint)(iVar3 - iVar5) * 4),
                    (longlong)iVar5 << 2);
            iVar3 = *(int *)(param_1 + 0x7e0);
          }
          *(int *)(param_1 + 0x7e0) = iVar3 + -1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_2[1]);
    }
  }
  if (*(int *)(param_1 + 0x72c) == *(int *)(param_1 + 0x728)) {
    return;
  }
  FUN_1401989ec(param_1 + 0x720);
  return;
}



// FUNCTION 147ae7cac FUN_147ae7cac body=1833 status=ok
// SIG undefined FUN_147ae7cac(void)

undefined4
FUN_147ae7cac(longlong param_1,uint param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6)

{
  double *pdVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  double dVar13;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined1 local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined1 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  char local_160;
  undefined7 uStack_15f;
  undefined8 local_158 [4];
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_f8 [12];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x728) <= (int)param_2)) {
    uVar6 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xc24);
    bVar9 = 4;
    if ((bVar2 & 1) == 0) {
      bVar9 = bVar2 & 4;
    }
    *(byte *)(param_1 + 0xc24) = bVar2 & 0xf9 | bVar9 | 2;
    uVar12 = param_2;
    if ((int)param_2 < *(int *)(param_1 + 0x7e0)) {
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0x7d8) + (ulonglong)param_2 * 4);
    }
    puVar10 = (undefined8 *)((ulonglong)param_2 * 0x80 + *(longlong *)(param_1 + 0x720));
    puVar11 = local_f8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    if ((char)param_4 == '\0') {
      puVar10 = param_3;
      puVar11 = local_158;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else {
      FUN_1449437a2(param_3,local_158,param_1 + 0x240);
    }
    if ((((uVar12 == 0xffffffff) || (*(int *)(param_1 + 0xb54) <= (int)uVar12)) ||
        (9.999999747378752e-05 < ABS(local_138 - local_98))) ||
       (9.999999747378752e-05 < ABS(dStack_130 - local_90))) {
      bVar4 = false;
    }
    else {
      bVar4 = ABS(local_128 - local_88) <= 9.999999747378752e-05;
    }
    local_210 = param_6;
    local_218 = param_5;
    uVar6 = FUN_14086cd1e(param_1,param_2,param_3,param_4);
    if ((char)uVar6 != '\0') {
      lVar7 = *(longlong *)(param_1 + 0x660);
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
        lVar7 = *(longlong *)(param_1 + 0x660);
      }
      else if (lVar7 == 0) goto LAB_147ae7d42;
      if ((lVar7 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar7);
        lVar7 = *(longlong *)(param_1 + 0x660);
      }
      if (((DAT_14c950c29 & 1) != 0) && (lVar7 != 0)) {
        FUN_1456cec3c(lVar7);
      }
      cVar5 = FUN_140081ab2(lVar7,1,0xffffffff);
      if (cVar5 != '\0') {
        lVar7 = *(longlong *)(param_1 + 0x660);
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        local_1a0 = *(double *)(lVar7 + 0x210) + *(double *)(lVar7 + 0x228);
        local_1a8 = *(double *)(lVar7 + 0x208) + *(double *)(lVar7 + 0x220);
        local_1b0 = *(double *)(lVar7 + 0x200) + *(double *)(lVar7 + 0x218);
        local_1b8 = *(double *)(lVar7 + 0x210) - *(double *)(lVar7 + 0x228);
        local_1c0 = *(double *)(lVar7 + 0x208) - *(double *)(lVar7 + 0x220);
        local_1c8 = *(double *)(lVar7 + 0x200) - *(double *)(lVar7 + 0x218);
        local_198 = 1;
        FUN_144a1c3a2(&local_1c8,&local_190,local_158);
        if (bVar4) {
          lVar7 = *(longlong *)(param_1 + 0x660);
          if ((lVar7 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar7);
          }
          local_1d8 = *(double *)(lVar7 + 0x210) + *(double *)(lVar7 + 0x228);
          local_1e0 = *(double *)(lVar7 + 0x208) + *(double *)(lVar7 + 0x220);
          local_1e8 = *(double *)(lVar7 + 0x200) + *(double *)(lVar7 + 0x218);
          local_1f0 = *(double *)(lVar7 + 0x210) - *(double *)(lVar7 + 0x228);
          local_1f8 = *(double *)(lVar7 + 0x208) - *(double *)(lVar7 + 0x220);
          local_200 = *(double *)(lVar7 + 0x200) - *(double *)(lVar7 + 0x218);
          local_1d0 = 1;
          FUN_144b12ece(&local_200,&local_1c8,local_f8);
          if ((((local_190 <= local_1c8) || (local_1b0 <= local_190)) ||
              ((dStack_188 <= local_1c0 ||
               (((local_1a8 <= dStack_188 || (local_180 <= local_1b8)) || (local_1a0 <= local_180)))
               ))) || (((dStack_178 <= local_1c8 || (local_1b0 <= dStack_178)) ||
                       ((local_170 <= local_1c0 ||
                        (((local_1a8 <= local_170 || (dStack_168 <= local_1b8)) ||
                         (local_1a0 <= dStack_168)))))))) {
            if (local_160 == '\0' || *(char *)(param_1 + 0xb88) == '\0') {
              if (local_160 != '\0') {
                *(ulonglong *)(param_1 + 0xb88) = CONCAT71(uStack_15f,local_160);
                *(double *)(param_1 + 0xb78) = local_170;
                *(double *)(param_1 + 0xb80) = dStack_168;
                *(double *)(param_1 + 0xb68) = local_180;
                *(double *)(param_1 + 0xb70) = dStack_178;
                *(double *)(param_1 + 0xb58) = local_190;
                *(double *)(param_1 + 0xb60) = dStack_188;
              }
            }
            else {
              dVar13 = *(double *)(param_1 + 0xb58);
              if (local_190 <= *(double *)(param_1 + 0xb58)) {
                dVar13 = local_190;
              }
              *(double *)(param_1 + 0xb58) = dVar13;
              dVar13 = *(double *)(param_1 + 0xb60);
              if (dStack_188 <= *(double *)(param_1 + 0xb60)) {
                dVar13 = dStack_188;
              }
              *(double *)(param_1 + 0xb60) = dVar13;
              dVar13 = *(double *)(param_1 + 0xb68);
              if (local_180 <= *(double *)(param_1 + 0xb68)) {
                dVar13 = local_180;
              }
              *(double *)(param_1 + 0xb68) = dVar13;
              dVar13 = *(double *)(param_1 + 0xb70);
              if (*(double *)(param_1 + 0xb70) <= dStack_178) {
                dVar13 = dStack_178;
              }
              *(double *)(param_1 + 0xb70) = dVar13;
              dVar13 = *(double *)(param_1 + 0xb78);
              if (*(double *)(param_1 + 0xb78) <= local_170) {
                dVar13 = local_170;
              }
              *(double *)(param_1 + 0xb78) = dVar13;
              dVar13 = *(double *)(param_1 + 0xb80);
              if (*(double *)(param_1 + 0xb80) <= dStack_168) {
                dVar13 = dStack_168;
              }
              *(double *)(param_1 + 0xb80) = dVar13;
            }
          }
        }
        else {
          if (local_160 == '\0' || *(char *)(param_1 + 0xbc0) == '\0') {
            if (local_160 != '\0') {
              *(ulonglong *)(param_1 + 0xbc0) = CONCAT71(uStack_15f,local_160);
              *(double *)(param_1 + 0xbb0) = local_170;
              *(double *)(param_1 + 3000) = dStack_168;
              *(double *)(param_1 + 0xba0) = local_180;
              *(double *)(param_1 + 0xba8) = dStack_178;
              *(double *)(param_1 + 0xb90) = local_190;
              *(double *)(param_1 + 0xb98) = dStack_188;
            }
          }
          else {
            dVar13 = *(double *)(param_1 + 0xb90);
            if (local_190 <= *(double *)(param_1 + 0xb90)) {
              dVar13 = local_190;
            }
            *(double *)(param_1 + 0xb90) = dVar13;
            dVar13 = *(double *)(param_1 + 0xb98);
            if (dStack_188 <= *(double *)(param_1 + 0xb98)) {
              dVar13 = dStack_188;
            }
            *(double *)(param_1 + 0xb98) = dVar13;
            dVar13 = *(double *)(param_1 + 0xba0);
            if (local_180 <= *(double *)(param_1 + 0xba0)) {
              dVar13 = local_180;
            }
            *(double *)(param_1 + 0xba0) = dVar13;
            dVar13 = *(double *)(param_1 + 0xba8);
            if (*(double *)(param_1 + 0xba8) <= dStack_178) {
              dVar13 = dStack_178;
            }
            *(double *)(param_1 + 0xba8) = dVar13;
            dVar13 = *(double *)(param_1 + 0xbb0);
            if (*(double *)(param_1 + 0xbb0) <= local_170) {
              dVar13 = local_170;
            }
            *(double *)(param_1 + 0xbb0) = dVar13;
            dVar13 = *(double *)(param_1 + 3000);
            if (*(double *)(param_1 + 3000) <= dStack_168) {
              dVar13 = dStack_168;
            }
            *(double *)(param_1 + 3000) = dVar13;
          }
          iVar3 = *(int *)(param_1 + 0xbd0);
          *(uint *)(param_1 + 0xbd0) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0xbd4) < iVar3 + 1U) {
            FUN_140555802(param_1 + 0xbc8,iVar3);
          }
          lVar7 = *(longlong *)(param_1 + 0xbc8);
          lVar8 = (longlong)iVar3 * 0x38;
          *(ulonglong *)(lVar7 + 0x30 + lVar8) = CONCAT71(uStack_15f,local_160);
          pdVar1 = (double *)(lVar7 + 0x20 + lVar8);
          *pdVar1 = local_170;
          pdVar1[1] = dStack_168;
          pdVar1 = (double *)(lVar7 + 0x10 + lVar8);
          *pdVar1 = local_180;
          pdVar1[1] = dStack_178;
          *(double *)(lVar7 + lVar8) = local_190;
          ((double *)(lVar7 + lVar8))[1] = dStack_188;
          FUN_143529292(param_1,CONCAT71(uStack_15f,1),0);
        }
      }
    }
  }
LAB_147ae7d42:
  if ((local_70 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147ae840e FUN_147ae840e body=105 status=ok
// SIG undefined FUN_147ae840e(void)

undefined8 FUN_147ae840e(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((param_2 < 0) || (*(int *)(param_1 + 0x728) <= param_2)) || (param_3[2] == 0)) {
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0xc24) & 1) != 0) {
      *(byte *)(param_1 + 0xc24) = *(byte *)(param_1 + 0xc24) | 4;
    }
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    uVar1 = FUN_1402d3036();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae8478 FUN_147ae8478 body=132 status=ok
// SIG undefined FUN_147ae8478(void)

ulonglong FUN_147ae8478(longlong *param_1,int param_2,longlong *param_3,undefined4 param_4,
                       undefined1 param_5,undefined1 param_6)

{
  byte bVar1;
  undefined8 unaff_RBP;
  undefined7 uVar3;
  ulonglong uVar2;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((longlong)(int)param_3[1] == 0) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    lVar5 = *param_3;
    lVar4 = (longlong)(int)param_3[1] * 0x60;
    uVar2 = CONCAT71(uVar3,1);
    do {
      bVar1 = (**(code **)(*param_1 + 0xb30))(param_1,param_2,lVar5,param_4,param_5,param_6);
      uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar1);
      param_2 = param_2 + 1;
      lVar5 = lVar5 + 0x60;
      lVar4 = lVar4 + -0x60;
    } while (lVar4 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ae84fc FUN_147ae84fc body=132 status=ok
// SIG undefined FUN_147ae84fc(void)

ulonglong FUN_147ae84fc(longlong *param_1,int param_2,longlong *param_3,undefined4 param_4,
                       undefined1 param_5,undefined1 param_6)

{
  byte bVar1;
  undefined8 unaff_RBP;
  undefined7 uVar3;
  ulonglong uVar2;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((longlong)(int)param_3[1] == 0) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    lVar5 = *param_3;
    lVar4 = (longlong)(int)param_3[1] * 0x60;
    uVar2 = CONCAT71(uVar3,1);
    do {
      bVar1 = (**(code **)(*param_1 + 0xb30))(param_1,param_2,lVar5,param_4,param_5,param_6);
      uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar1);
      param_2 = param_2 + 1;
      lVar5 = lVar5 + 0x60;
      lVar4 = lVar4 + -0x60;
    } while (lVar4 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ae8580 FUN_147ae8580 body=124 status=ok
// SIG undefined FUN_147ae8580(void)

ulonglong FUN_147ae8580(longlong *param_1,int param_2,int param_3,undefined8 param_4,
                       undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  byte bVar1;
  undefined8 unaff_RBP;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined8 unaff_R15;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_3 < 1) {
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    param_3 = param_3 + param_2;
    uVar2 = CONCAT71(uVar3,1);
    do {
      bVar1 = (**(code **)(*param_1 + 0xb30))
                        (param_1,param_2,param_4,
                         CONCAT71((int7)((ulonglong)unaff_R15 >> 8),param_5) & 0xffffffff,param_6,
                         param_7);
      uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 & bVar1);
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ae85fc FUN_147ae85fc body=53 status=ok
// SIG undefined FUN_147ae85fc(void)

undefined1
FUN_147ae85fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  FUN_147afd420(param_1);
  FUN_143529292(param_1,1,0,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 147ae8632 FUN_147ae8632 body=31 status=ok
// SIG undefined FUN_147ae8632(void)

void FUN_147ae8632(undefined8 param_1)

{
  FUN_147af9024();
  FUN_143529292(param_1,0,0);
  return;
}



// FUNCTION 147ae8652 FUN_147ae8652 body=107 status=ok
// SIG undefined FUN_147ae8652(void)

void FUN_147ae8652(longlong param_1,int param_2)

{
  int iVar1;
  
  FUN_147af9298();
  iVar1 = *(int *)(param_1 + 0x7e0) + param_2;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (*(int *)(param_1 + 0x7e4) < iVar1) {
    FUN_14481578e(param_1 + 0x7d8);
  }
  param_2 = param_2 + *(int *)(param_1 + 0xbd0);
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0xbd4) < param_2) {
      FUN_1401a2d6a(param_1 + 0xbc8,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147ae86be FUN_147ae86be body=39 status=ok
// SIG undefined FUN_147ae86be(void)

void FUN_147ae86be(undefined8 param_1)

{
  FUN_147af9112();
  FUN_1448215fa(param_1);
  FUN_143529292(param_1,1,1);
  return;
}



// FUNCTION 147ae86e6 FUN_147ae86e6 body=488 status=ok
// SIG undefined FUN_147ae86e6(void)

int FUN_147ae86e6(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined1 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  dVar1 = param_2[3];
  local_88 = dVar1 + param_2[2];
  local_90 = dVar1 + param_2[1];
  local_98 = dVar1 + *param_2;
  local_a0 = param_2[2] - dVar1;
  local_a8 = param_2[1] - dVar1;
  local_b0 = *param_2 - dVar1;
  local_80 = 1;
  iVar8 = 0;
  FUN_14352c87a(SUB84(dVar1,0),&local_b0,0);
  lVar3 = *(longlong *)(param_1 + 0x660);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  if ((longlong)(int)uStack_70 != 0) {
    lVar7 = 0;
    iVar8 = 0;
    do {
      dVar1 = *(double *)(local_78 + 0x40 + lVar7);
      uVar9 = SUB84(dVar1,0);
      uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)(local_78 + 0x48 + lVar7);
      if (dVar1 <= dVar2) {
        uVar9 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar1 = *(double *)(local_78 + 0x50 + lVar7);
      if ((double)CONCAT44(uVar10,uVar9) <= dVar1) {
        uVar9 = SUB84(dVar1,0);
        uVar10 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      dVar2 = param_2[2] - *(double *)(local_78 + 0x30 + lVar7);
      dVar4 = param_2[1] - *(double *)(local_78 + 0x28 + lVar7);
      dVar5 = *param_2 - *(double *)(local_78 + 0x20 + lVar7);
      dVar1 = (double)CONCAT44(uVar10,uVar9) * *(double *)(lVar3 + 0x230) + param_2[3] +
              9.999999747378752e-05;
      dVar6 = 0.0;
      if (0.0 <= dVar1) {
        dVar6 = dVar1;
      }
      iVar8 = (iVar8 + 1) - (uint)(dVar6 * dVar6 < dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4);
      lVar7 = lVar7 + 0x60;
    } while ((longlong)(int)uStack_70 * 0x60 != lVar7);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ae88d0 FUN_147ae88d0 body=512 status=ok
// SIG undefined FUN_147ae88d0(void)

int FUN_147ae88d0(longlong param_1,double *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = 0;
  uStack_80 = 0;
  iVar2 = 0;
  FUN_14352c87a(0,param_2,0);
  lVar3 = *(longlong *)(param_1 + 0x660);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_98 = *(undefined8 *)(lVar3 + 0x230);
  local_c8 = *(undefined4 *)(lVar3 + 0x200);
  uStack_c4 = *(undefined4 *)(lVar3 + 0x204);
  uStack_c0 = *(undefined4 *)(lVar3 + 0x208);
  uStack_bc = *(undefined4 *)(lVar3 + 0x20c);
  local_b8 = *(undefined8 *)(lVar3 + 0x210);
  uStack_b0 = *(undefined8 *)(lVar3 + 0x218);
  local_a8 = *(undefined8 *)(lVar3 + 0x220);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x228);
  if ((longlong)(int)uStack_80 != 0) {
    lVar3 = (longlong)(int)uStack_80 * 0x60;
    iVar2 = 0;
    lVar1 = local_88;
    do {
      FUN_144a80a4c(&local_c8,&local_100,lVar1);
      iVar2 = iVar2 + (uint)(byte)((local_f0 - local_d8 < param_2[5] ||
                                   local_f0 - local_d8 == param_2[5]) &
                                  (param_2[2] <= local_f0 + local_d8 &&
                                  ((local_f8 - local_e0 < param_2[4] ||
                                   local_f8 - local_e0 == param_2[4]) &&
                                  param_2[1] <= local_f8 + local_e0)) &
                                  -(*param_2 <= local_100 + local_e8 &&
                                   local_100 - local_e8 <= param_2[3]));
      lVar1 = lVar1 + 0x60;
      lVar3 = lVar3 + -0x60;
    } while (lVar3 != 0);
  }
  if (local_88 != 0) {
    FUN_1400020a8(local_88);
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 147ae8ad2 FUN_147ae8ad2 body=527 status=ok
// SIG undefined FUN_147ae8ad2(void)

void FUN_147ae8ad2(longlong param_1,double *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1401a2688(param_3,0);
  }
  FUN_14352c87a(param_1,param_2,0,param_3);
  lVar4 = *(longlong *)(param_1 + 0x660);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_88 = *(undefined8 *)(lVar4 + 0x230);
  local_b8 = *(undefined8 *)(lVar4 + 0x200);
  uStack_b0 = *(undefined8 *)(lVar4 + 0x208);
  local_a8 = *(undefined8 *)(lVar4 + 0x210);
  uStack_a0 = *(undefined8 *)(lVar4 + 0x218);
  local_98 = *(undefined8 *)(lVar4 + 0x220);
  uStack_90 = *(undefined8 *)(lVar4 + 0x228);
  if (0 < (int)param_3[1]) {
    lVar4 = 0;
    bVar2 = false;
    do {
      while ((((FUN_144a80a4c(&local_b8,&local_80,*param_3 + lVar4 * 0x60),
               local_80 + local_68 < *param_2 ||
               (param_2[3] <= local_80 - local_68 && local_80 - local_68 != param_2[3])) ||
              (local_78 + local_60 < param_2[1])) ||
             (((param_2[4] <= local_78 - local_60 && local_78 - local_60 != param_2[4] ||
               (local_70 + local_58 < param_2[2])) ||
              (param_2[5] <= local_70 - local_58 && local_70 - local_58 != param_2[5]))))) {
        iVar1 = (int)param_3[1];
        iVar3 = iVar1 + ~(uint)lVar4;
        if (iVar3 != 0) {
          if (0 < iVar3) {
            iVar3 = 1;
          }
          memmove((void *)(*param_3 + lVar4 * 0x60),
                  (void *)((longlong)(iVar1 - iVar3) * 0x60 + *param_3),(longlong)iVar3 * 0x60);
          iVar1 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar1 + -1;
        bVar2 = true;
        if (iVar1 + -1 <= lVar4) goto LAB_147ae8c9f;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_3[1]);
    if (bVar2) {
LAB_147ae8c9f:
      FUN_1469124fc(param_3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ae8cee FUN_147ae8cee body=1491 status=ok
// SIG undefined FUN_147ae8cee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_147ae8cee(longlong param_1,undefined8 *param_2,double *param_3,float param_4,char param_5)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 in_RAX;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar14;
  undefined1 auVar13 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  double local_168;
  double dStack_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  float local_128;
  undefined4 uStack_124;
  double dStack_120;
  undefined8 local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar8 = *(longlong *)(param_1 + 0xb10);
  if ((lVar8 == 0) || (*(int *)(lVar8 + 8) == 0)) {
    local_178 = (undefined8 *)CONCAT71(local_178._1_7_,param_5);
    FUN_147afec9a(param_1,param_2);
    if ((local_d0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  dVar3 = (double)param_4;
  *param_2 = 0;
  param_2[1] = 0;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar26 = param_3[2];
  dStack_e0 = dVar26 + dVar3;
  local_e8 = param_3[1] + dVar3;
  dStack_f0 = dVar4 + dVar3;
  local_f8 = dVar26 - dVar3;
  dStack_100 = param_3[1] - dVar3;
  local_108 = dVar4 - dVar3;
  local_d8 = CONCAT71(local_d8._1_7_,1);
  if (param_5 == '\0') {
    FUN_144a1c3a2(&local_108,local_148,param_1 + 0x240);
    local_d8 = local_118;
    local_e8 = (double)CONCAT44(uStack_124,local_128);
    dStack_e0 = dStack_120;
    local_f8 = local_138;
    dStack_f0 = dStack_130;
    local_108 = (double)local_148._0_8_;
    dStack_100 = (double)local_148._8_8_;
  }
  else {
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x280);
    auVar13 = *(undefined1 (*) [16])(param_1 + 0x290);
    uVar14 = DAT_149931180;
    uVar29 = (undefined4)DAT_149931180;
    uVar30 = DAT_149931180._4_4_;
    uVar31 = DAT_149931180._8_4_;
    uVar32 = DAT_149931180._12_4_;
    dVar9 = (double)(auVar18._0_8_ & uVar14);
    dVar11 = (double)(auVar18._8_8_ & DAT_149931180._8_8_);
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 < dVar11);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar9);
    iVar6 = movmskpd((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),param_5),auVar22);
    auVar2._8_8_ = -(ulonglong)
                    (9.99999993922529e-09 < (double)(auVar13._8_8_ & DAT_149931180._8_8_));
    auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < (double)(auVar13._0_8_ & uVar14));
    uVar7 = movmskpd((int)lVar8,auVar2);
    if ((uVar7 & 0x3fffffff) == 0 && iVar6 == 0) {
      uVar23 = (undefined4)DAT_14c846498;
      uVar24 = (undefined4)((ulonglong)DAT_14c846498 >> 0x20);
      dVar11 = DAT_14c846480;
      dVar21 = DAT_14c846488;
      dVar10 = DAT_14c8464c0;
      dVar12 = DAT_14c8464c8;
      dVar20 = DAT_14c8464d0;
      uVar14 = uRam000000014c8464d8;
      dVar17 = DAT_14c8464a0;
      dVar19 = DAT_14c8464a8;
      dVar28 = DAT_14c8464b0;
      dVar9 = DAT_14c846490;
    }
    else {
      auVar22 = divpd(_DAT_149934d80,auVar18);
      auVar18 = divpd(ZEXT816(0x3ff0000000000000),auVar13);
      dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar9) & auVar22._0_8_);
      dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar11) & auVar22._8_8_);
      dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < (double)(auVar13._0_8_ & uVar14)) &
                       auVar18._0_8_);
      local_168 = *(double *)(param_1 + 0x240);
      dStack_160 = *(double *)(param_1 + 0x248);
      dVar11 = -local_168;
      dVar21 = -dStack_160;
      dVar9 = *(double *)(param_1 + 0x250) * -1.0;
      dVar15 = *(double *)(param_1 + 600) * 1.0;
      dVar17 = *(double *)(param_1 + 0x260) * dVar10;
      dVar19 = *(double *)(param_1 + 0x268) * dVar12;
      dVar16 = *(double *)(param_1 + 0x270) * dVar20;
      uVar23 = SUB84(dVar15,0);
      uVar24 = (undefined4)((ulonglong)dVar15 >> 0x20);
      dVar25 = dVar19 * dVar11 - dVar21 * dVar17;
      dVar27 = dVar16 * dVar21 - dVar9 * dVar19;
      dVar28 = dVar17 * dVar9 - dVar11 * dVar16;
      dVar27 = dVar27 + dVar27;
      dVar28 = dVar28 + dVar28;
      dVar25 = dVar25 + dVar25;
      uVar29 = 0xffffffff;
      uVar30 = 0x7fffffff;
      uVar31 = 0xffffffff;
      uVar32 = 0x7fffffff;
      uVar14 = 0;
      dVar17 = 0.0 - ((dVar25 * dVar21 - dVar28 * dVar9) + dVar15 * dVar27 + dVar17);
      dVar19 = 0.0 - (dVar25 * local_168 + dVar9 * dVar27 + dVar15 * dVar28 + dVar19);
      dVar28 = 0.0 - (dVar15 * dVar25 + dVar16 + (dVar28 * dVar11 - dVar27 * dVar21));
    }
    dVar4 = dVar4 * dVar10;
    dVar5 = dVar5 * dVar12;
    dVar26 = dVar26 * dVar20;
    dVar25 = dVar5 * dVar11 - dVar21 * dVar4;
    dVar16 = dVar26 * dVar21 - dVar9 * dVar5;
    dVar15 = dVar4 * dVar9 - dVar11 * dVar26;
    dVar16 = dVar16 + dVar16;
    dVar15 = dVar15 + dVar15;
    dVar25 = dVar25 + dVar25;
    dVar4 = (dVar25 * dVar21 - dVar15 * dVar9) + (double)CONCAT44(uVar24,uVar23) * dVar16 + dVar4 +
            dVar17;
    dVar5 = (dVar9 * dVar16 - dVar11 * dVar25) + (double)CONCAT44(uVar24,uVar23) * dVar15 + dVar5 +
            dVar19;
    dVar26 = dVar25 * (double)CONCAT44(uVar24,uVar23) + dVar26 + (dVar15 * dVar11 - dVar16 * dVar21)
             + dVar28;
    auVar18._0_8_ = (ulonglong)dVar10 & CONCAT44(uVar30,uVar29);
    auVar18._8_8_ = (ulonglong)dVar12 & CONCAT44(uVar32,uVar31);
    auVar13._0_8_ = (ulonglong)dVar20 & CONCAT44(uVar30,uVar29);
    auVar1._24_8_ = uVar14 & CONCAT44(uVar32,uVar31);
    auVar1._16_8_ = auVar13._0_8_;
    auVar1._0_16_ = auVar18;
    auVar13._8_8_ = auVar18._0_8_;
    auVar18 = maxpd(auVar18,auVar1._8_16_);
    auVar18 = maxpd(auVar18,auVar13);
    dVar3 = dVar3 * (double)(float)auVar18._0_8_;
  }
  lVar8 = *(longlong *)(param_1 + 0x660);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
    lVar8 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar8 == 0) goto LAB_147ae91d0;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  local_128 = (float)*(double *)(lVar8 + 0x230);
  local_150 = local_148;
  local_148._8_4_ = SUB84(dVar5,0);
  local_148._0_8_ = dVar4;
  local_148._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_158 = FUN_1435318e0;
  local_178 = param_2;
  local_138 = dVar26;
  dStack_130 = dVar3;
  FUN_14352ddaa(param_1,&local_108,0);
LAB_147ae91d0:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_198);
}



// FUNCTION 147ae92c2 FUN_147ae92c2 body=1302 status=ok
// SIG undefined FUN_147ae92c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147ae92c2(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  double local_1e8 [2];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  undefined1 local_180;
  code *local_170;
  double *local_168;
  double local_160 [7];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((*(longlong *)(param_1 + 0xb10) == 0) || (*(int *)(*(longlong *)(param_1 + 0xb10) + 8) == 0))
  {
    FUN_147aff332(param_1,param_2);
    if ((local_b0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_b8 = param_3[6];
  local_e8 = *param_3;
  uStack_e0 = param_3[1];
  local_d8 = param_3[2];
  uStack_d0 = param_3[3];
  local_c8 = param_3[4];
  uStack_c0 = param_3[5];
  local_f8 = (double)param_3[6];
  local_128 = *(undefined4 *)param_3;
  uStack_124 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_120 = *(undefined4 *)(param_3 + 1);
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_118 = param_3[2];
  uStack_110 = param_3[3];
  local_108 = (double)param_3[4];
  dStack_100 = (double)param_3[5];
  if (param_4 == '\0') {
    pdVar18 = (double *)(param_1 + 0x240);
    puVar17 = &local_e8;
    pdVar19 = local_1e8;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x290);
    lVar20 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar22._8_4_ = (int)lVar20;
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    auVar22._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    iVar15 = movmskpd(SUB84(local_f8,0),auVar22);
    lVar20 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar24._8_4_ = (int)lVar20;
    auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    auVar24._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
    uVar16 = movmskpd((int)param_1,auVar24);
    if ((uVar16 & 0x3fffffff) == 0 && iVar15 == 0) {
      pdVar18 = (double *)&DAT_14c846480;
      pdVar19 = local_1e8;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar19 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        pdVar19 = pdVar19 + 1;
      }
    }
    else {
      auVar24 = divpd(_DAT_149934d80,auVar1);
      auVar22 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar24._0_8_);
      dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar24._8_8_);
      local_198 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar22._0_8_);
      local_1e8[0] = -*(double *)(param_1 + 0x240);
      local_1e8[1] = -*(double *)(param_1 + 0x248);
      dVar6 = *(double *)(param_1 + 0x250) * -1.0;
      dVar7 = *(double *)(param_1 + 600) * 1.0;
      dVar21 = *(double *)(param_1 + 0x260) * dVar3;
      dVar23 = *(double *)(param_1 + 0x268) * dVar4;
      dVar5 = *(double *)(param_1 + 0x270) * local_198;
      local_1d8._8_4_ = SUB84(dVar7,0);
      local_1d8._0_8_ = dVar6;
      local_1d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar9 = dVar23 * local_1e8[0] - local_1e8[1] * dVar21;
      dVar10 = dVar5 * local_1e8[1] - dVar6 * dVar23;
      dVar8 = dVar21 * dVar6 - local_1e8[0] * dVar5;
      dVar10 = dVar10 + dVar10;
      dVar8 = dVar8 + dVar8;
      dVar9 = dVar9 + dVar9;
      local_1c8 = 0.0 - ((dVar9 * local_1e8[1] - dVar8 * dVar6) + dVar7 * dVar10 + dVar21);
      dStack_1c0 = 0.0 - (dVar9 * *(double *)(param_1 + 0x240) + dVar6 * dVar10 +
                         dVar7 * dVar8 + dVar23);
      local_1b8 = 0.0 - (dVar7 * dVar9 + dVar5 + (dVar8 * local_1e8[0] - dVar10 * local_1e8[1]));
      dStack_1b0 = 0.0;
      local_1a8._8_4_ = SUB84(dVar4,0);
      local_1a8._0_8_ = dVar3;
      local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dStack_190 = 0.0;
    }
    puVar17 = (undefined8 *)&local_128;
    pdVar19 = local_160;
    pdVar18 = local_1e8;
  }
  FUN_144a1c3a2(puVar17,pdVar19,pdVar18);
  puVar17[6] = pdVar19[6];
  uVar11 = *(undefined4 *)pdVar19;
  uVar12 = *(undefined4 *)((longlong)pdVar19 + 4);
  uVar13 = *(undefined4 *)(pdVar19 + 1);
  uVar14 = *(undefined4 *)((longlong)pdVar19 + 0xc);
  dVar3 = pdVar19[2];
  dVar4 = pdVar19[3];
  dVar5 = pdVar19[5];
  puVar17[4] = pdVar19[4];
  puVar17[5] = dVar5;
  puVar17[2] = dVar3;
  puVar17[3] = dVar4;
  *(undefined4 *)puVar17 = uVar11;
  *(undefined4 *)((longlong)puVar17 + 4) = uVar12;
  *(undefined4 *)(puVar17 + 1) = uVar13;
  *(undefined4 *)((longlong)puVar17 + 0xc) = uVar14;
  lVar20 = *(longlong *)(param_1 + 0x660);
  if ((lVar20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar20);
    lVar20 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar20 == 0) goto LAB_147ae9733;
  if ((lVar20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar20);
  }
  local_188 = *(double *)(lVar20 + 0x210) + *(double *)(lVar20 + 0x228);
  dStack_190 = *(double *)(lVar20 + 0x208) + *(double *)(lVar20 + 0x220);
  local_198 = *(double *)(lVar20 + 0x200) + *(double *)(lVar20 + 0x218);
  dStack_1b0 = *(double *)(lVar20 + 0x200) - *(double *)(lVar20 + 0x218);
  local_168 = local_1e8;
  local_1b8 = local_f8;
  local_1e8[0] = (double)CONCAT44(uStack_124,local_128);
  local_1e8[1] = (double)CONCAT44(uStack_11c,uStack_120);
  local_1c8 = local_108;
  dStack_1c0 = dStack_100;
  local_1d8._8_8_ = uStack_110;
  local_1d8._0_8_ = local_118;
  local_1a8._8_8_ = *(double *)(lVar20 + 0x210) - *(double *)(lVar20 + 0x228);
  local_1a8._0_8_ = *(double *)(lVar20 + 0x208) - *(double *)(lVar20 + 0x220);
  local_180 = 1;
  local_170 = FUN_1435319ec;
  local_1f8 = param_2;
  FUN_14352ddaa(param_1,&local_e8,0);
LAB_147ae9733:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_218);
}



// FUNCTION 147ae97da FUN_147ae97da body=339 status=ok
// SIG undefined FUN_147ae97da(void)

void FUN_147ae97da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae43d8) && (FUN_144b3d300(&DAT_14cae43d8), DAT_14cae43d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.BufferVisualizationDumpFramesAsHDR",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14cae43d0 = 0;
    }
    else {
      DAT_14cae43d0 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14cae43d8);
  }
  lVar2 = DAT_14cae43d0;
  if ((*(char *)(param_1 + 0x41) == '\x01') && (*(char *)(param_1 + 0x2a) == '\x01')) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  }
  else {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    if (*(int *)(lVar2 + uVar4 * 4) == 0) {
      *(undefined1 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x1c) = 0;
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x18) = 5;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  lVar2 = DAT_14cae4330;
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  if (*(int *)(lVar2 + uVar4 * 4) == 0) {
    *(undefined4 *)(param_2 + 0x1c) = 1;
  }
  return;
}



// FUNCTION 147ae992e FUN_147ae992e body=285 status=ok
// SIG undefined FUN_147ae992e(void)

undefined8 FUN_147ae992e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  DAT_14c867cf4 = 0;
  DAT_14c867cf8 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar2 = FUN_147d7816e(puVar3,param_3,&DAT_14c867cf4,&DAT_14c867cf8,(float *)(param_1 + 0x20),
                        param_1 + 0x10,param_1 + 0x28,param_1 + 0x2a,param_1 + 0x41,param_1 + 0x48,
                        param_1 + 0x29);
  if (cVar2 != '\0') {
    fVar1 = *(float *)(param_1 + 0x20);
    DAT_14c867cf4 = (uint)(longlong)((float)DAT_14c867cf4 * fVar1);
    DAT_14c867cf8 = (uint)(longlong)((float)DAT_14c867cf8 * fVar1);
    if (DAT_14ca84e40 < DAT_14c867cf8 || DAT_14ca84e40 < DAT_14c867cf4) {
      FUN_140047918(param_3,
                    L"Error: Screenshot size exceeds the maximum allowed texture size (%d x %d)",
                    DAT_14ca84e40,DAT_14ca84e40);
      uVar4 = 0;
    }
    else {
      DAT_14c867cf1 = 1;
      FUN_14352ec27();
      uVar4 = 1;
    }
  }
  return uVar4;
}



// FUNCTION 147ae9a4b FUN_147ae9a4b body=1347 status=ok
// SIG undefined FUN_147ae9a4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147ae9a4b(longlong *param_1,int *param_2,char param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong *plVar19;
  int *piVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar34 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar35 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar49 [16];
  
  plVar21 = param_1;
  plVar19 = (longlong *)FUN_147d77c64();
  piVar20 = (int *)FUN_147d77c6c();
  auVar18 = _DAT_149931e80;
  iVar1 = (int)param_1[1];
  if (param_3 != '\0') {
    if (iVar1 == (int)plVar19[1]) {
      uVar23 = CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
      if (0 < iVar1) {
        lVar22 = 0;
        do {
          *(char *)(*param_1 + 3 + lVar22 * 4) = *(char *)(*plVar19 + 2 + lVar22 * 4) * param_4;
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)param_1[1]);
      }
      goto LAB_147ae9f3d;
    }
    uVar2 = param_2[2];
    uVar24 = (ulonglong)uVar2;
    iVar26 = param_2[3];
    iVar3 = param_2[1];
    lVar22 = (longlong)iVar3;
    if (((iVar1 == (iVar26 - iVar3) * (uVar2 - *param_2)) && (iVar4 = *piVar20, (int)uVar2 <= iVar4)
        ) && (iVar26 <= piVar20[1])) {
      uVar23 = CONCAT71((uint7)(uint3)(uVar2 - *param_2 >> 8),1);
      if (iVar3 < iVar26) {
        lVar25 = lVar22 * iVar4 * 4 + 2;
        lVar28 = 0;
        do {
          lVar27 = (longlong)*param_2;
          if (*param_2 < (int)uVar24) {
            lVar28 = (longlong)(int)lVar28;
            do {
              *(char *)(*param_1 + 3 + lVar28 * 4) =
                   *(char *)(*plVar19 + lVar25 + lVar27 * 4) * param_4;
              lVar27 = lVar27 + 1;
              lVar28 = lVar28 + 1;
              uVar24 = (ulonglong)param_2[2];
            } while (lVar27 < (longlong)uVar24);
            iVar26 = param_2[3];
          }
          lVar22 = lVar22 + 1;
          lVar25 = lVar25 + (longlong)iVar4 * 4;
        } while (lVar22 < iVar26);
      }
      goto LAB_147ae9f3d;
    }
  }
  if (iVar1 != 0) {
    lVar22 = *param_1;
    param_4 = -param_4;
    uVar23 = (longlong)iVar1 + 0x3fffffffffffffffU & 0x3fffffffffffffff;
    auVar29._8_4_ = (int)uVar23;
    auVar29._0_8_ = uVar23;
    auVar29._12_4_ = (int)(uVar23 >> 0x20);
    lVar25 = 0;
    auVar30 = pmovsxbq(in_XMM1,0xf0e);
    auVar31 = pmovsxbq(in_XMM2,0xd0c);
    auVar32 = pmovsxbq(in_XMM3,0xb0a);
    auVar33 = pmovsxbq(in_XMM4,0x908);
    auVar34 = pmovsxbq(in_XMM5,0x706);
    auVar35 = pmovsxbq(unaff_XMM6,0x504);
    auVar36 = pmovsxbq(unaff_XMM7,0x302);
    auVar37 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar38._8_4_ = (int)lVar25;
      auVar38._0_8_ = lVar25;
      auVar38._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      auVar40 = auVar29 | auVar18;
      auVar41 = (auVar38 | auVar37) ^ auVar18;
      lVar28 = auVar40._0_8_;
      auVar42._0_8_ = -(ulonglong)(lVar28 < auVar41._0_8_);
      lVar27 = auVar40._8_8_;
      auVar42._8_8_ = -(ulonglong)(lVar27 < auVar41._8_8_);
      auVar49 = pshuflw(unaff_XMM14,auVar42,0xe8);
      auVar41._8_4_ = 0xffffffff;
      auVar41._0_8_ = 0xffffffffffffffff;
      auVar41._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar49 ^ auVar41,auVar49 ^ auVar41);
      if ((auVar41._0_4_ & 1) != 0) {
        *(char *)(lVar22 + 3 + lVar25 * 4) = param_4;
      }
      auVar42 = packssdw(auVar42,auVar42);
      auVar49._8_4_ = 0xffffffff;
      auVar49._0_8_ = 0xffffffffffffffff;
      auVar49._12_4_ = 0xffffffff;
      auVar42 = packssdw(auVar42 ^ auVar49,auVar42 ^ auVar49);
      auVar42 = packsswb(auVar42,auVar42);
      if ((auVar42[1] & 1) != 0) {
        *(char *)(lVar22 + 7 + lVar25 * 4) = param_4;
      }
      auVar42 = (auVar38 | auVar36) ^ auVar18;
      auVar43._0_8_ = -(ulonglong)(lVar28 < auVar42._0_8_);
      auVar43._8_8_ = -(ulonglong)(lVar27 < auVar42._8_8_);
      auVar41 = packssdw(auVar41,auVar43);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar5,auVar41 ^ auVar5);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[2] & 1) != 0) {
        *(char *)(lVar22 + 0xb + lVar25 * 4) = param_4;
      }
      auVar42 = pshufhw(auVar43,auVar43,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar42 = packssdw(auVar42 ^ auVar6,auVar42 ^ auVar6);
      auVar42 = packsswb(auVar42,auVar42);
      if ((auVar42[3] & 1) != 0) {
        *(char *)(lVar22 + 0xf + lVar25 * 4) = param_4;
      }
      auVar42 = (auVar38 | auVar35) ^ auVar18;
      auVar44._0_8_ = -(ulonglong)(lVar28 < auVar42._0_8_);
      auVar44._8_8_ = -(ulonglong)(lVar27 < auVar42._8_8_);
      auVar41 = pshuflw(auVar41,auVar44,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar7,auVar41 ^ auVar7);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[4] & 1) != 0) {
        *(char *)(lVar22 + 0x13 + lVar25 * 4) = param_4;
      }
      auVar42 = packssdw(auVar44,auVar44);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar42 = packssdw(auVar42 ^ auVar8,auVar42 ^ auVar8);
      auVar42 = packsswb(auVar42,auVar42);
      if ((auVar42[5] & 1) != 0) {
        *(char *)(lVar22 + 0x17 + lVar25 * 4) = param_4;
      }
      auVar42 = (auVar38 | auVar34) ^ auVar18;
      auVar45._0_8_ = -(ulonglong)(lVar28 < auVar42._0_8_);
      auVar45._8_8_ = -(ulonglong)(lVar27 < auVar42._8_8_);
      auVar41 = packssdw(auVar41,auVar45);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar9,auVar41 ^ auVar9);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[6] & 1) != 0) {
        *(char *)(lVar22 + 0x1b + lVar25 * 4) = param_4;
      }
      auVar42 = pshufhw(auVar45,auVar45,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar42 = packssdw(auVar42 ^ auVar10,auVar42 ^ auVar10);
      auVar42 = packsswb(auVar42,auVar42);
      if ((auVar42[7] & 1) != 0) {
        *(char *)(lVar22 + 0x1f + lVar25 * 4) = param_4;
      }
      auVar42 = (auVar38 | auVar33) ^ auVar18;
      auVar46._0_8_ = -(ulonglong)(lVar28 < auVar42._0_8_);
      auVar46._8_8_ = -(ulonglong)(lVar27 < auVar42._8_8_);
      auVar41 = pshuflw(auVar41,auVar46,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar11,auVar41 ^ auVar11);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[8] & 1) != 0) {
        *(char *)(lVar22 + 0x23 + lVar25 * 4) = param_4;
      }
      auVar42 = packssdw(auVar46,auVar46);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar42 = packssdw(auVar42 ^ auVar12,auVar42 ^ auVar12);
      auVar42 = packsswb(auVar42,auVar42);
      if ((auVar42[9] & 1) != 0) {
        *(char *)(lVar22 + 0x27 + lVar25 * 4) = param_4;
      }
      auVar42 = (auVar38 | auVar32) ^ auVar18;
      auVar47._0_8_ = -(ulonglong)(lVar28 < auVar42._0_8_);
      auVar47._8_8_ = -(ulonglong)(lVar27 < auVar42._8_8_);
      auVar41 = packssdw(auVar41,auVar47);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar13,auVar41 ^ auVar13);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[10] & 1) != 0) {
        *(char *)(lVar22 + 0x2b + lVar25 * 4) = param_4;
      }
      auVar42 = pshufhw(auVar47,auVar47,0x84);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar42 = packssdw(auVar42 ^ auVar14,auVar42 ^ auVar14);
      auVar42 = packsswb(auVar42,auVar42);
      if ((auVar42[0xb] & 1) != 0) {
        *(char *)(lVar22 + 0x2f + lVar25 * 4) = param_4;
      }
      auVar42 = (auVar38 | auVar31) ^ auVar18;
      auVar48._0_8_ = -(ulonglong)(lVar28 < auVar42._0_8_);
      auVar48._8_8_ = -(ulonglong)(lVar27 < auVar42._8_8_);
      auVar41 = pshuflw(auVar41,auVar48,0xe8);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar15,auVar41 ^ auVar15);
      unaff_XMM14 = packsswb(auVar41,auVar41);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        *(char *)(lVar22 + 0x33 + lVar25 * 4) = param_4;
      }
      auVar41 = packssdw(auVar48,auVar48);
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = 0xffffffffffffffff;
      auVar16._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar16,auVar41 ^ auVar16);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[0xd] & 1) != 0) {
        *(char *)(lVar22 + 0x37 + lVar25 * 4) = param_4;
      }
      auVar41 = (auVar38 | auVar30) ^ auVar18;
      auVar39._0_8_ = -(ulonglong)(lVar28 < auVar41._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar27 < auVar41._8_8_);
      auVar41 = packssdw(auVar40,auVar39);
      auVar40._8_4_ = 0xffffffff;
      auVar40._0_8_ = 0xffffffffffffffff;
      auVar40._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar40,auVar41 ^ auVar40);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[0xe] & 1) != 0) {
        *(char *)(lVar22 + 0x3b + lVar25 * 4) = param_4;
      }
      auVar41 = pshufhw(auVar39,auVar39,0x84);
      auVar17._8_4_ = 0xffffffff;
      auVar17._0_8_ = 0xffffffffffffffff;
      auVar17._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar17,auVar41 ^ auVar17);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[0xf] & 1) != 0) {
        *(char *)(lVar22 + 0x3f + lVar25 * 4) = param_4;
      }
      lVar25 = lVar25 + 0x10;
    } while ((uVar23 - ((uint)((longlong)iVar1 + 0x3fffffffffffffffU) & 0xf)) + 0x10 != lVar25);
  }
  uVar23 = 0;
LAB_147ae9f3d:
  return uVar23 & 0xffffffff;
}



// FUNCTION 147ae9f8e FUN_147ae9f8e body=587 status=ok
// SIG undefined FUN_147ae9f8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147ae9f8e(longlong *param_1,int *param_2,char param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  int *piVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  plVar5 = (longlong *)FUN_147d77c64();
  piVar6 = (int *)FUN_147d77c6c();
  auVar4 = _DAT_149931e80;
  iVar12 = (int)param_1[1];
  if (param_3 != '\0') {
    if (iVar12 == (int)plVar5[1]) {
      if (iVar12 < 1) {
        return 1;
      }
      lVar8 = 0xc;
      lVar9 = 0;
      do {
        *(float *)(*param_1 + lVar8) = (float)*(byte *)(*plVar5 + 2 + lVar9 * 4) * param_4;
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar9 < (int)param_1[1]);
      return 1;
    }
    uVar1 = param_2[2];
    uVar10 = (ulonglong)uVar1;
    iVar13 = param_2[3];
    iVar2 = param_2[1];
    lVar8 = (longlong)iVar2;
    if (((iVar12 == (iVar13 - iVar2) * (uVar1 - *param_2)) && (iVar3 = *piVar6, (int)uVar1 <= iVar3)
        ) && (iVar13 <= piVar6[1])) {
      if (iVar13 <= iVar2) {
        return 1;
      }
      lVar9 = lVar8 * iVar3 * 4 + 2;
      iVar12 = 0;
      do {
        lVar15 = (longlong)*param_2;
        if (*param_2 < (int)uVar10) {
          lVar14 = (longlong)iVar12 << 4;
          do {
            *(float *)(*param_1 + 0xc + lVar14) =
                 (float)*(byte *)(*plVar5 + lVar9 + lVar15 * 4) * param_4;
            lVar15 = lVar15 + 1;
            uVar10 = (ulonglong)param_2[2];
            iVar12 = iVar12 + 1;
            lVar14 = lVar14 + 0x10;
          } while (lVar15 < (longlong)uVar10);
          iVar13 = param_2[3];
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + (longlong)iVar3 * 4;
      } while (lVar8 < iVar13);
      return 1;
    }
  }
  if (iVar12 != 0) {
    param_4 = param_4 * 255.0;
    uVar10 = (longlong)iVar12 + 0xfffffffffffffffU & 0xfffffffffffffff;
    auVar16._8_4_ = (int)uVar10;
    auVar16._0_8_ = uVar10;
    auVar16._12_4_ = (int)(uVar10 >> 0x20);
    pfVar7 = (float *)(*param_1 + 0x3c);
    uVar11 = 0;
    auVar17 = pmovsxbq(in_XMM1,0x302);
    auVar18 = pmovsxbq(in_XMM2,0x100);
    auVar16 = auVar16 | _DAT_149931e80;
    do {
      lVar8 = auVar16._0_8_;
      lVar9 = auVar16._8_8_;
      if ((bool)(~(lVar8 < (longlong)(uVar11 ^ auVar4._0_8_)) & 1)) {
        pfVar7[-0xc] = param_4;
      }
      auVar19._8_4_ = (int)uVar11;
      auVar19._0_8_ = uVar11;
      auVar19._12_4_ = (int)(uVar11 >> 0x20);
      if ((longlong)((auVar19._8_8_ | auVar18._8_8_) ^ auVar4._8_8_) <= lVar9) {
        pfVar7[-8] = param_4;
      }
      auVar19 = (auVar19 | auVar17) ^ auVar4;
      if (auVar19._0_8_ <= lVar8) {
        pfVar7[-4] = param_4;
      }
      if (auVar19._8_8_ <= lVar9) {
        *pfVar7 = param_4;
      }
      uVar11 = uVar11 + 4;
      pfVar7 = pfVar7 + 0x10;
    } while ((uVar10 - ((uint)((longlong)iVar12 + 0xfffffffffffffffU) & 3)) + 4 != uVar11);
  }
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  return 0;
}



// FUNCTION 147aea1da FUN_147aea1da body=109 status=ok
// SIG undefined FUN_147aea1da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147aea1da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae43f0) {
    FUN_144b3d300(&DAT_14cae43f0);
    if (DAT_14cae43f0 == -1) {
      _DAT_14cae43e0 = 0;
      _DAT_14cae43e8 = L"HHitProxy";
      _Init_thread_footer(&DAT_14cae43f0);
    }
  }
  return &DAT_14cae43e0;
}



// FUNCTION 147aea248 FUN_147aea248 body=63 status=ok
// SIG undefined FUN_147aea248(void)

undefined8 * FUN_147aea248(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a919210;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  FUN_145e201aa();
  uVar1 = FUN_147aea2e8(param_1);
  *(undefined4 *)(param_1 + 3) = uVar1;
  return param_1;
}



// FUNCTION 147aea288 FUN_147aea288 body=47 status=ok
// SIG undefined FUN_147aea288(void)

void FUN_147aea288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a919210;
  FUN_145e201aa();
  FUN_147aea2b8(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 147aea2b8 FUN_147aea2b8 body=47 status=ok
// SIG undefined FUN_147aea2b8(void)

void FUN_147aea2b8(undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae47d8);
  FUN_147af1dc2(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147aea2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae47d8);
  return;
}



// FUNCTION 147aea2e8 FUN_147aea2e8 body=104 status=ok
// SIG undefined FUN_147aea2e8(void)

undefined4 FUN_147aea2e8(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae47d8);
  FUN_147af1e3a(local_30);
  *local_28 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae47d8);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aea370 FUN_147aea370 body=117 status=ok
// SIG undefined FUN_147aea370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147aea370(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae4480) {
    FUN_144b3d300(&DAT_14cae4480);
    if (DAT_14cae4480 == -1) {
      FUN_147aea1da();
      _DAT_14cae4470 = &DAT_14cae43e0;
      _DAT_14cae4478 = L"HModel";
      _Init_thread_footer(&DAT_14cae4480);
    }
  }
  return &DAT_14cae4470;
}



// FUNCTION 147aea3e6 FUN_147aea3e6 body=69 status=ok
// SIG undefined FUN_147aea3e6(void)

void FUN_147aea3e6(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147aea428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  return;
}



// FUNCTION 147aea44a FUN_147aea44a body=1226 status=ok
// SIG undefined FUN_147aea44a(void)

void FUN_147aea44a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar3 = local_90;
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  iVar2 = local_94;
  local_98 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  iVar1 = local_98;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_130 = &local_c8;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_b8 = local_78;
  local_138 = &local_e8;
  local_e8 = local_70;
  uStack_e4 = uStack_6c;
  uStack_e0 = uStack_68;
  uStack_dc = uStack_64;
  local_d8 = local_60;
  local_f8 = local_a8 != 0;
  local_118 = iVar2 != 0;
  local_110 = iVar1 != 0;
  local_120 = iVar3 != 0;
  local_100 = local_a4;
  local_108 = local_a0;
  local_128 = local_8c;
  FUN_147aea916(param_1,local_48,local_50,local_54);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aea916 FUN_147aea916 body=969 status=ok
// SIG undefined FUN_147aea916(void)

void FUN_147aea916(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong *param_5,undefined4 *param_6,uint param_7,char param_8,byte param_9,
                  byte param_10,longlong param_11,undefined4 param_12,byte param_13)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) goto LAB_147aea98c;
  if (*(uint *)(param_2 + 8) < 2) {
    local_68 = 0;
    local_70 = param_3;
    uVar7 = FUN_14477b072(param_1,DAT_14cae4580);
    (**(code **)(*param_1 + 0x248))(param_1,uVar7,&local_70);
    goto LAB_147aea98c;
  }
  plVar11 = param_1 + 0x7e;
  lVar10 = param_1[0x7e];
  iVar2 = (int)param_1[0x7f];
  lVar12 = (longlong)iVar2;
  if (lVar12 != 0) {
    lVar15 = 0;
    lVar8 = 0;
    iVar13 = 0;
    do {
      if (*(longlong *)(lVar10 + lVar15) == param_3) {
        iVar14 = iVar13 + 1;
        if (iVar14 != 0) {
          iVar17 = iVar13 + -1;
          if (iVar14 < iVar2) {
            iVar14 = iVar2;
          }
          lVar15 = (longlong)iVar13;
          plVar16 = (longlong *)(lVar15 * 0x80 + lVar10);
          goto LAB_147aeab94;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      lVar8 = lVar8 + 0x100000000;
      lVar15 = lVar15 + 0x80;
    } while (lVar12 << 7 != lVar15);
  }
LAB_147aeaa08:
  *(uint *)(param_1 + 0x7f) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3fc) < iVar2 + 1U) {
    FUN_147af4174(plVar11,iVar2);
    lVar10 = *plVar11;
  }
  lVar12 = lVar12 * 0x80;
  puVar9 = (undefined8 *)(lVar10 + 0x40 + lVar12);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)(lVar10 + 0x30 + lVar12);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)(lVar10 + 0x20 + lVar12);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar12);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined8 *)(lVar10 + lVar12) = 0;
  ((undefined8 *)(lVar10 + lVar12))[1] = 0;
  *(undefined4 *)(lVar10 + 0x50 + lVar12) = 0;
  pbVar1 = (byte *)(lVar10 + 0x54 + lVar12);
  *pbVar1 = *pbVar1 & 0xf8;
  plVar11 = (longlong *)(lVar10 + lVar12);
  puVar9 = (undefined8 *)(lVar10 + 0x58 + lVar12);
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9 = (undefined8 *)(lVar10 + 0x68 + lVar12);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined4 *)(lVar10 + 0x78 + lVar12) = 0x3f800000;
  goto LAB_147aeaa61;
  while (iVar17 = iVar17 + 1, iVar18 = iVar17, *plVar16 == param_3) {
LAB_147aeab94:
    plVar16 = plVar16 + 0x10;
    lVar15 = lVar15 + 1;
    iVar18 = iVar14 + -1;
    if (lVar12 <= lVar15) break;
  }
  if (iVar18 - iVar13 < 0) goto LAB_147aeaa08;
  if (param_8 == '\0') {
    plVar11 = (longlong *)(lVar10 + (lVar8 >> 0x20) * 0x80);
  }
  else {
    if ((0 < *DAT_14cae4620) && (*DAT_14cae4620 <= (iVar18 - iVar13) + 1)) goto LAB_147aea98c;
    *(int *)(param_1 + 0x7f) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x3fc) == iVar2) {
      FUN_147af4174(plVar11,iVar2);
      lVar10 = *plVar11;
    }
    lVar12 = (longlong)(iVar18 + 1) * 0x80;
    memmove((void *)(lVar10 + lVar12 + 0x80),(void *)(lVar10 + lVar12),
            (ulonglong)(uint)(iVar2 - (iVar18 + 1)) << 7);
    lVar10 = *plVar11;
    *(undefined8 *)(lVar10 + lVar12) = 0;
    ((undefined8 *)(lVar10 + lVar12))[1] = 0;
    puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9 = (undefined8 *)(lVar10 + 0x20 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9 = (undefined8 *)(lVar10 + 0x30 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9 = (undefined8 *)(lVar10 + 0x40 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)(lVar10 + 0x50 + lVar12) = 0;
    pbVar1 = (byte *)(lVar10 + 0x54 + lVar12);
    *pbVar1 = *pbVar1 & 0xf8;
    plVar11 = (longlong *)(lVar10 + lVar12);
    puVar9 = (undefined8 *)(lVar10 + 0x68 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9 = (undefined8 *)(lVar10 + 0x58 + lVar12);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)(lVar10 + 0x78 + lVar12) = 0x3f800000;
  }
LAB_147aeaa61:
  if (plVar11 != (longlong *)0x0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
    *plVar11 = param_3;
    lVar10 = param_5[1];
    plVar11[1] = *param_5;
    plVar11[2] = lVar10;
    plVar11[3] = param_5[2];
    uVar19 = param_6[1];
    uVar20 = param_6[2];
    uVar3 = param_6[3];
    *(undefined4 *)(plVar11 + 4) = *param_6;
    *(undefined4 *)((longlong)plVar11 + 0x24) = uVar19;
    *(undefined4 *)(plVar11 + 5) = uVar20;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = uVar3;
    plVar11[6] = *(longlong *)(param_6 + 4);
    FUN_144a787a6(plVar11 + 7,param_2);
    *(undefined4 *)(plVar11 + 9) = param_4;
    *(undefined4 *)((longlong)plVar11 + 0x4c) = param_4;
    *(uint *)(plVar11 + 10) = -(uint)(param_7 == 0) | param_7;
    uVar6 = (uint)param_9 + (uint)param_10 * 2 | *(uint *)((longlong)plVar11 + 0x54) & 0xfffffffc;
    *(uint *)((longlong)plVar11 + 0x54) = uVar6;
    lVar10 = *(longlong *)(param_3 + 0x1c8);
    if (lVar10 == 0) {
      puVar9 = &DAT_14c8464e0;
      uVar19 = (undefined4)DAT_14c8464f0;
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar19 = (undefined4)*(undefined8 *)(lVar10 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x270) >> 0x20);
      puVar9 = (undefined8 *)(lVar10 + 0x260);
    }
    uVar3 = *(undefined4 *)((longlong)puVar9 + 4);
    uVar4 = *(undefined4 *)(puVar9 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
    *(undefined4 *)(plVar11 + 0xb) = *(undefined4 *)puVar9;
    *(undefined4 *)((longlong)plVar11 + 0x5c) = uVar3;
    *(undefined4 *)(plVar11 + 0xc) = uVar4;
    *(undefined4 *)((longlong)plVar11 + 100) = uVar5;
    plVar11[0xd] = CONCAT44(uVar20,uVar19);
    if ((param_11 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_11);
      uVar6 = *(uint *)((longlong)plVar11 + 0x54);
    }
    plVar11[0xe] = param_11;
    *(undefined4 *)(plVar11 + 0xf) = param_12;
    *(uint *)((longlong)plVar11 + 0x54) = (uVar6 & 0xfffffffb) + (uint)param_13 * 4;
  }
LAB_147aea98c:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aeace6 FUN_147aeace6 body=515 status=ok
// SIG undefined FUN_147aeace6(void)

void FUN_147aeace6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  local_88 = iVar1 != 0;
  local_80 = local_50;
  FUN_14352ed54(param_1,&local_78,&local_68,local_48);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aeaeea FUN_147aeaeea body=407 status=ok
// SIG undefined FUN_147aeaeea(void)

void FUN_147aeaeea(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  local_68 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147aeb082(param_1,local_2c,local_30,puVar2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aeb082 FUN_147aeb082 body=167 status=ok
// SIG undefined FUN_147aeb082(void)

void FUN_147aeb082(longlong param_1,float param_2,float param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_5[2] = 0;
  *param_5 = 0;
  param_5[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  cVar1 = FUN_1404e0812();
  if (cVar1 != '\0') {
    local_48 = (double)param_3;
    local_50 = (double)param_2;
    FUN_147d8eae2(*(undefined8 *)(param_1 + 0x3e0),&local_50,param_4,param_5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aeb12a FUN_147aeb12a body=564 status=ok
// SIG undefined FUN_147aeb12a(void)

void FUN_147aeb12a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = &local_58;
  local_58 = local_38;
  uStack_50 = uStack_30;
  local_68 = local_3c;
  local_78 = local_28;
  FUN_147aeb360(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aeb360 FUN_147aeb360 body=275 status=ok
// SIG undefined FUN_147aeb360(void)

void FUN_147aeb360(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 *param_6,undefined4 param_7)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_1404e0812();
  if (cVar1 != '\0') {
    local_58 = (double)param_5;
    local_60 = (double)param_4;
    local_a8 = (double)param_3;
    local_b0 = (double)param_2;
    local_90 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_b8 = &PTR_FUN_14a312d50;
    local_68 = 0;
    local_50 = 0;
    local_88 = *param_6;
    uStack_84 = param_6[1];
    uStack_80 = param_6[2];
    uStack_7c = param_6[3];
    local_48 = param_7;
    local_78 = local_b0;
    local_70 = local_a8;
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0));
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aeb47a FUN_147aeb47a body=1455 status=ok
// SIG undefined FUN_147aeb47a(void)

void FUN_147aeb47a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar1 = local_90;
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = &local_b8;
  local_b8 = local_a8;
  uStack_b0 = uStack_a0;
  local_d0 = iVar1 != 0;
  local_c8 = local_94;
  local_d8 = local_8c;
  local_e0 = local_88;
  local_e8 = local_84;
  local_f0 = local_80;
  local_f8 = local_7c;
  local_100 = local_78;
  local_108 = local_74;
  FUN_1404e0540(param_1,local_68,local_6c,local_70);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aeba30 FUN_147aeba30 body=635 status=ok
// SIG undefined FUN_147aeba30(void)

void FUN_147aeba30(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38 != 0;
  local_48 = local_34;
  local_50 = local_30;
  local_58 = local_2c;
  FUN_147aebcac(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aebcac FUN_147aebcac body=322 status=ok
// SIG undefined FUN_147aebcac(void)

void FUN_147aebcac(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,char param_8)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [40];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_110 [8];
  double local_108;
  double local_100;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar2 = FUN_1404e0812();
  if (param_2 != (longlong *)0x0 && cVar2 == '\x01') {
    dVar1 = (double)param_7;
    local_118 = (double)param_6 * dVar1;
    local_120 = (double)param_5 * dVar1;
    uVar3 = (**(code **)(*param_2 + 0x2f0))(param_2);
    local_128 = (double)param_4;
    local_130 = (double)param_3;
    FUN_147d8f8ee(local_110,&local_130,uVar3,&local_120);
    if (param_8 != '\0') {
      local_108 = local_108 * dVar1;
      local_100 = dVar1 * local_100;
    }
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0),local_110);
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aebdf0 FUN_147aebdf0 body=1003 status=ok
// SIG undefined FUN_147aebdf0(void)

void FUN_147aebdf0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = &local_d8;
  local_d8 = local_c0;
  uStack_d0 = uStack_b8;
  local_170 = &local_e8;
  local_e8 = local_b0;
  uStack_e0 = uStack_a8;
  local_178 = &local_f8;
  local_f8 = local_a0;
  uStack_f0 = uStack_98;
  local_180 = &local_108;
  local_108 = local_90;
  uStack_100 = uStack_88;
  local_188 = &local_118;
  local_118 = local_80;
  uStack_110 = uStack_78;
  local_190 = &local_128;
  local_128 = local_70;
  uStack_120 = uStack_68;
  local_198 = &local_138;
  local_138 = local_60;
  uStack_130 = uStack_58;
  local_148 = local_50;
  uStack_140 = uStack_48;
  local_158 = local_40;
  uStack_154 = uStack_3c;
  uStack_150 = uStack_38;
  uStack_14c = uStack_34;
  FUN_147aec1dc(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aec1dc FUN_147aec1dc body=306 status=ok
// SIG undefined FUN_147aec1dc(void)

void FUN_147aec1dc(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined4 *param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined **local_b0 [9];
  undefined8 local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_1404e0812();
  if (param_2 != (longlong *)0x0 && cVar5 == '\x01') {
    local_b8 = param_8;
    local_c0 = param_7;
    local_c8 = param_6;
    FUN_147aefefe(local_b0,param_3,param_4,param_5);
    uVar4 = param_9[1];
    *(undefined8 *)(local_58 + 0x20) = *param_9;
    *(undefined8 *)(local_58 + 0x28) = uVar4;
    uVar4 = param_10[1];
    *(undefined8 *)(local_58 + 0x50) = *param_10;
    *(undefined8 *)(local_58 + 0x58) = uVar4;
    uVar1 = param_11[1];
    uVar2 = param_11[2];
    uVar3 = param_11[3];
    *(undefined4 *)(local_58 + 0x80) = *param_11;
    *(undefined4 *)(local_58 + 0x84) = uVar1;
    *(undefined4 *)(local_58 + 0x88) = uVar2;
    *(undefined4 *)(local_58 + 0x8c) = uVar3;
    local_68 = (**(code **)(*param_2 + 0x2f0))(param_2);
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0),local_b0);
    local_b0[0] = &PTR_FUN_14a8bd0b0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aec310 FUN_147aec310 body=471 status=ok
// SIG undefined FUN_147aec310(void)

void FUN_147aec310(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  uStack_40 = uStack_20;
  local_50 = local_38;
  local_58 = local_34;
  FUN_147aec4e8(param_1,&local_48,local_2c,local_30);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aec4e8 FUN_147aec4e8 body=224 status=ok
// SIG undefined FUN_147aec4e8(void)

void FUN_147aec4e8(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  char cVar1;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined1 local_f0 [28];
  undefined4 local_d4;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar1 = FUN_1404e0812();
  if (cVar1 != '\0') {
    local_f8 = (double)param_6;
    local_100 = (double)param_5;
    local_108 = (double)param_4;
    local_110 = (double)param_3;
    local_118 = param_2;
    FUN_147d8f1ec(local_f0,&local_110,DAT_14ca94e18);
    local_d4 = 2;
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0),local_f0);
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aec5d0 FUN_147aec5d0 body=673 status=ok
// SIG undefined FUN_147aec5d0(void)

void FUN_147aec5d0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_70 = local_50 != 0;
  local_78 = local_4c;
  local_80 = local_48;
  local_88 = local_40;
  FUN_147aec872(param_1,local_28,&local_68,local_3c);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aec872 FUN_147aec872 body=331 status=ok
// SIG undefined FUN_147aec872(void)

void FUN_147aec872(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,longlong param_6,float param_7,char param_8)

{
  char cVar1;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  double local_298;
  double local_290;
  longlong *local_288 [2];
  undefined1 local_278 [208];
  double local_1a8;
  double local_1a0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  cVar1 = FUN_1404e0812();
  if (cVar1 != '\0') {
    if (param_8 != '\0') {
      param_4 = param_4 * param_7;
      param_5 = param_5 * param_7;
    }
    if (param_6 == 0) {
      param_6 = FUN_147d7f972();
    }
    FUN_140009b9a(local_288,param_2);
    local_290 = (double)param_5;
    local_298 = (double)param_4;
    local_2a8 = param_3;
    FUN_140114bb6(local_278,&local_298,local_288,param_6);
    if (local_288[0] != (longlong *)0x0) {
      (**(code **)(*local_288[0] + 0x10))();
    }
    local_1a8 = (double)param_7;
    local_1a0 = local_1a8;
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0),local_278);
    FUN_140b2399e(local_278);
  }
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aec9c4 FUN_147aec9c4 body=1548 status=ok
// SIG undefined FUN_147aec9c4(void)

void FUN_147aec9c4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 *local_108;
  uint local_100;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  byte local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  local_a0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  iVar1 = local_a4;
  local_a8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e0 = &local_c8;
  local_c8 = local_b8;
  uStack_c0 = uStack_b0;
  local_108 = &local_d8;
  local_d8 = local_98;
  uStack_d0 = uStack_90;
  local_f0 = iVar1 != 0;
  local_e8 = local_a8;
  local_f8 = local_a0;
  local_100 = (uint)local_99;
  local_110 = local_88;
  local_118 = local_84;
  local_120 = local_80;
  local_128 = local_7c;
  local_130 = local_78;
  local_138 = local_74;
  FUN_147aecfd2(param_1,local_68,local_6c,local_70);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aecfd2 FUN_147aecfd2 body=577 status=ok
// SIG undefined FUN_147aecfd2(void)

void FUN_147aecfd2(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  undefined8 param_11,undefined4 param_12,float param_13,char param_14,
                  float param_15,undefined4 *param_16)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [32];
  double *local_198;
  double *local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined1 local_140 [8];
  double local_138;
  double local_130;
  undefined4 local_124;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cVar2 = FUN_1404e0812();
  if (param_2 != 0 && cVar2 == '\x01') {
    local_158 = (double)param_8;
    local_160 = (double)param_7;
    local_148 = (double)(param_8 + param_10);
    local_150 = (double)(param_7 + param_9);
    dVar1 = (double)param_13;
    local_168 = (double)param_6 * dVar1;
    local_170 = (double)param_5 * dVar1;
    uVar3 = FUN_1447b4020(param_2);
    local_178 = (double)param_4;
    local_180 = (double)param_3;
    local_188 = param_11;
    local_198 = &local_160;
    local_190 = &local_150;
    FUN_147d8e19e(local_140,&local_180,uVar3,&local_170);
    local_b0 = (double)param_15;
    local_b8 = 0;
    local_a8 = 0;
    local_a0 = *param_16;
    uStack_9c = param_16[1];
    uStack_98 = param_16[2];
    uStack_94 = param_16[3];
    if (param_14 != '\0') {
      local_138 = local_138 * dVar1;
      local_130 = dVar1 * local_130;
    }
    local_124 = FUN_147d8e5ba(param_12);
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0));
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aed21a FUN_147aed21a body=471 status=ok
// SIG undefined FUN_147aed21a(void)

void FUN_147aed21a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_30 != 0;
  local_48 = local_2c;
  FUN_147aed3f2(param_1,local_20,local_24,local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aed3f2 FUN_147aed3f2 body=306 status=ok
// SIG undefined FUN_147aed3f2(void)

void FUN_147aed3f2(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  char param_6)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  undefined1 local_100 [8];
  double local_f8;
  double local_f0;
  undefined4 local_e4;
  double local_c0;
  double local_b8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar1 = FUN_1404e0812();
  if (param_2 != 0 && cVar1 == '\x01') {
    uVar2 = FUN_1447b4020(param_2);
    local_108 = (double)param_4;
    local_110 = (double)param_3;
    FUN_147d8f82c(local_100,&local_110,uVar2,&DAT_149e1e2f8);
    dVar3 = (double)param_5;
    if (param_6 != '\0') {
      local_f8 = local_f8 * dVar3;
      local_f0 = local_f0 * dVar3;
    }
    local_c0 = local_c0 * dVar3;
    local_b8 = dVar3 * local_b8;
    local_e4 = 2;
    FUN_140484502(*(undefined8 *)(param_1 + 0x3e0));
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aed532 FUN_147aed532 body=664 status=ok
// SIG undefined FUN_147aed532(void)

void FUN_147aed532(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong local_88;
  int local_80;
  int local_7c;
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar3 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar4 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar5 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar2 = local_7c;
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  iVar1 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_98 = iVar1 != 0;
  local_a0 = iVar2 != 0;
  local_a8 = plVar5;
  FUN_147aed7cc(param_1,&local_88,puVar3,puVar4);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aed7cc FUN_147aed7cc body=1436 status=ok
// SIG undefined FUN_147aed7cc(void)

void FUN_147aed7cc(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                  longlong *param_5,undefined1 param_6,char param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  longlong *plVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_2e8 [40];
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  longlong local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [28];
  char local_1f4;
  longlong *local_1e8;
  double dStack_1c8;
  char local_1c0 [8];
  double local_1b8 [25];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_140c5c1ec(param_5,0);
  }
  dVar1 = *param_3;
  uVar16 = SUB84(dVar1,0);
  uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[1];
  uVar18 = SUB84(dVar2,0);
  uVar19 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = *param_4;
  dVar4 = param_4[1];
  local_1b8[0] = 1.0;
  local_1b8[1] = 1.0;
  local_1b8[2] = 1.0;
  local_1b8[3] = 1.0;
  local_1b8[4] = 1.0;
  local_1b8[5] = -1.0;
  local_1b8[6] = 1.0;
  local_1b8[7] = -1.0;
  local_1b8[8] = 1.0;
  local_1b8[9] = 1.0;
  local_1b8[10] = -1.0;
  local_1b8[0xb] = -1.0;
  local_1b8[0xc] = -1.0;
  local_1b8[0xd] = 1.0;
  local_1b8[0xe] = 1.0;
  local_1b8[0xf] = -1.0;
  local_1b8[0x10] = 1.0;
  local_1b8[0x11] = -1.0;
  local_1b8[0x12] = -1.0;
  local_1b8[0x13] = -1.0;
  local_1b8[0x14] = 1.0;
  local_1b8[0x15] = -1.0;
  local_1b8[0x16] = -1.0;
  local_1b8[0x17] = -1.0;
  local_238 = *param_2;
  if ((local_238 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar14 = FUN_1447210f0(param_1);
  FUN_14146ff3c(local_218,uVar14,&local_238,5);
  if (local_1f4 == '\0') {
    local_290 = dVar1;
    if (dVar3 <= dVar1) {
      local_290 = dVar3;
    }
    local_2a0 = dVar2;
    if (dVar4 <= dVar2) {
      local_2a0 = dVar4;
    }
    if (dVar1 <= dVar3) {
      uVar16 = SUB84(dVar3,0);
      uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    local_298 = (double)CONCAT44(uVar17,uVar16);
    if (dVar2 <= dVar4) {
      uVar18 = SUB84(dVar4,0);
      uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
    }
    local_2a8 = (double)CONCAT44(uVar19,uVar18);
    do {
      plVar12 = local_1e8;
      bVar11 = false;
      (**(code **)(*local_1e8 + 0x520))(local_1e8,&local_270,param_6,0);
      dVar1 = local_260 + local_248;
      dVar3 = local_268 + local_250;
      dVar10 = local_270 + local_258;
      dVar2 = local_248 - local_260;
      dVar4 = local_250 - local_268;
      dVar9 = local_258 - local_270;
      uVar16 = SUB84(DAT_14c8463f0,0);
      uVar17 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
      lVar15 = 0x10;
      local_2b8 = DAT_14c8463f8;
      local_2c0 = DAT_14c8463f8;
      local_2b0 = DAT_14c8463f0;
      do {
        dVar5 = *(double *)((longlong)local_1b8 + lVar15);
        dVar6 = *(double *)((longlong)&dStack_1c8 + lVar15);
        dVar7 = *(double *)(local_1c0 + lVar15);
        cVar13 = FUN_1404e0812(param_1);
        if (cVar13 != '\0') {
          local_230 = dVar6 * dVar9 * 0.5 + dVar10 * 0.5;
          local_228 = dVar7 * dVar4 * 0.5 + dVar3 * 0.5;
          local_220 = dVar5 * dVar2 * 0.5 + dVar1 * 0.5;
          FUN_147d8ea00(*(undefined8 *)(param_1 + 0x3e0),&local_288,&local_230);
          if (0.0 < local_278) {
            uVar18 = (undefined4)((ulonglong)local_288 >> 0x20);
            if (bVar11) {
              if (local_288 <= local_2b0) {
                local_2b0 = local_288;
              }
              if (local_280 <= local_2b8) {
                local_2b8 = local_280;
              }
              if ((double)CONCAT44(uVar17,uVar16) <= local_288) {
                uVar16 = SUB84(local_288,0);
                uVar17 = uVar18;
              }
              if (local_2c0 <= local_280) {
                local_2c0 = local_280;
              }
            }
            else {
              bVar11 = true;
              local_2c0 = local_280;
              local_2b0 = local_288;
              local_2b8 = local_280;
              uVar16 = SUB84(local_288,0);
              uVar17 = uVar18;
            }
          }
        }
        lVar15 = lVar15 + 0x18;
      } while (lVar15 != 0xd0);
      if ((bVar11) &&
         ((((((param_7 != '\0' && (local_290 < local_2b0)) && (local_2b0 < local_298)) &&
            (((local_2a0 < local_2b8 && (local_2b8 < local_2a8)) &&
             ((local_290 <= (double)CONCAT44(uVar17,uVar16) &&
               (double)CONCAT44(uVar17,uVar16) != local_290 &&
              (((double)CONCAT44(uVar17,uVar16) <= local_298 &&
                local_298 != (double)CONCAT44(uVar17,uVar16) && (local_2a0 < local_2c0)))))))) &&
           (local_2c0 < local_2a8)) ||
          ((((local_290 < (double)CONCAT44(uVar17,uVar16) ||
              local_290 == (double)CONCAT44(uVar17,uVar16) && (local_2b0 <= local_298)) &&
            (local_2a0 <= local_2c0)) && (local_2b8 <= local_2a8)))))) {
        iVar8 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar8 + 1U) {
          FUN_1447d05f2(param_5,iVar8);
        }
        *(longlong **)(*param_5 + (longlong)iVar8 * 8) = plVar12;
      }
      FUN_14146ffc0(local_218);
    } while (local_1f4 == '\0');
  }
  if (local_1c0[0] == '\x01') {
    FUN_14024445c(local_210);
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147aeddb2 FUN_147aeddb2 body=8 status=ok
// SIG undefined FUN_147aeddb2(void)

undefined8 FUN_147aeddb2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x390);
}



// FUNCTION 147aeddba FUN_147aeddba body=526 status=ok
// SIG undefined FUN_147aeddba(void)

void FUN_147aeddba(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_4c;
  local_68 = local_48;
  FUN_147aedfca(param_1,local_38,puVar1,puVar2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aedfca FUN_147aedfca body=181 status=ok
// SIG undefined FUN_147aedfca(void)

void FUN_147aedfca(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1404e0812();
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x3e0);
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    if (param_5 == 0) {
      param_5 = FUN_147d7f972();
    }
    local_58 = param_6;
    local_60 = param_6;
    local_68 = param_4;
    FUN_14376ffae(uVar1,param_5,&local_50,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee0ba FUN_147aee0ba body=358 status=ok
// SIG undefined FUN_147aee0ba(void)

void FUN_147aee0ba(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  local_98 = local_50;
  cVar2 = FUN_1404e0812(param_1);
  if (cVar2 == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
  }
  else {
    local_38 = local_98;
    local_48 = local_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    FUN_147d8ea00(*(undefined8 *)(param_1 + 0x3e0),&local_88,&local_48,iVar1 != 0);
  }
  *(undefined8 *)(param_3 + 4) = local_78;
  *param_3 = (undefined4)local_88;
  param_3[1] = local_88._4_4_;
  param_3[2] = (undefined4)uStack_80;
  param_3[3] = uStack_80._4_4_;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee238 FUN_147aee238 body=84 status=ok
// SIG undefined FUN_147aee238(void)

void FUN_147aee238(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3fc);
  FUN_145894e19(*(undefined8 *)(param_1 + 0x3f0),*(undefined4 *)(param_1 + 0x3f8));
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x3fc) != 0)) {
    FUN_147af41fa(param_1 + 0x3f0);
    return;
  }
  return;
}



// FUNCTION 147aee292 FUN_147aee292 body=235 status=ok
// SIG undefined FUN_147aee292(void)

void FUN_147aee292(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147aee37e(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aee37e FUN_147aee37e body=396 status=ok
// SIG undefined FUN_147aee37e(void)

void FUN_147aee37e(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar4 = *(int *)(param_1 + 0x3f8);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x3f0);
  lVar11 = 0;
  lVar12 = 0;
  iVar6 = 0;
  while (*(longlong *)(*(longlong *)(param_1 + 0x3f0) + lVar11) != param_2) {
    iVar6 = iVar6 + 1;
    lVar12 = lVar12 + 0x100000000;
    lVar11 = lVar11 + 0x80;
    if (lVar5 << 7 == lVar11) {
      return;
    }
  }
  iVar10 = iVar6 + 1;
  if (iVar10 == 0) {
    return;
  }
  uVar7 = iVar6 - 1;
  if (iVar10 < iVar4) {
    iVar10 = iVar4;
  }
  lVar11 = (longlong)iVar6;
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x3f0) + lVar11 * 0x80);
  do {
    plVar9 = plVar9 + 0x10;
    lVar11 = lVar11 + 1;
    uVar8 = iVar10 - 1;
    if (lVar5 <= lVar11) break;
    uVar7 = uVar7 + 1;
    uVar8 = uVar7;
  } while (*plVar9 == param_2);
  if (-1 < (int)(uVar8 - iVar6)) {
    if (param_3 == '\0') {
      FUN_147af4078(plVar1,iVar6,(uVar8 - iVar6) + 1);
      FUN_147af40d8(plVar1);
      return;
    }
    if (iVar6 <= (int)uVar8) {
      lVar5 = (longlong)(int)uVar8 + 1;
      uVar7 = ~uVar8;
      lVar11 = (longlong)(int)uVar8 << 7;
      do {
        lVar3 = *plVar1;
        fVar2 = *(float *)(lVar3 + 0x48 + lVar11);
        if ((fVar2 == -1.0) && (!NAN(fVar2))) {
          FUN_145894e19((void *)(lVar11 + lVar3),1);
          iVar4 = *(int *)(param_1 + 0x3f8);
          if ((int)lVar5 != iVar4) {
            memmove((void *)(lVar11 + lVar3),(void *)(lVar11 + lVar3 + 0x80),
                    (longlong)(int)(iVar4 + uVar7) << 7);
            iVar4 = *(int *)(param_1 + 0x3f8);
          }
          *(int *)(param_1 + 0x3f8) = iVar4 + -1;
          FUN_147af40d8(plVar1);
        }
        lVar5 = lVar5 + -1;
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + -0x80;
      } while (lVar12 >> 0x20 < lVar5);
    }
  }
  return;
}


