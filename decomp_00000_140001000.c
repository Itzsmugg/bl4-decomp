// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140001000 FUN_140001000 body=353 status=ok
// SIG undefined FUN_140001000(void)

void FUN_140001000(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140001085;
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
LAB_140001085:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140001162 FUN_140001162 body=353 status=ok
// SIG undefined FUN_140001162(void)

void FUN_140001162(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400011e7;
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
LAB_1400011e7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1400012c4 FUN_1400012c4 body=393 status=ok
// SIG undefined FUN_1400012c4(void)

void FUN_1400012c4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f1718();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cace978) && (FUN_144b3d300(&DAT_14cace978), DAT_14cace978 == -1)) {
    DAT_14cace974 = '\0';
    local_58 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bPersistentUberGraphFrame",&DAT_14cace974);
    _Init_thread_footer(&DAT_14cace978);
  }
  if ((DAT_14cace974 == '\x01') && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    (**(code **)(*param_2 + 0x198))(param_2);
    if (param_1 != 0) {
      for (local_38 = *(longlong *)(param_1 + 0x50); local_38 != 0;
          local_38 = *(longlong *)(local_38 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(local_38 + 8) + 0x18) & 0x108001) == 0) goto LAB_14000137e;
      }
    }
    local_38 = 0;
LAB_14000137e:
    local_30 = 0xffffffff;
    local_2c = 0x100;
    local_2a = 0;
    local_40 = param_1;
    if (local_38 != 0) {
      do {
        lVar2 = local_38;
        lVar1 = *(longlong *)(local_38 + 0x20);
        FUN_14000144e(&local_48);
        if (lVar1 == local_48) {
          *(longlong *)(param_1 + 0x2c8) = lVar2;
          break;
        }
        local_38 = *(longlong *)(local_38 + 0x18);
        FUN_1417ba192(&local_40);
      } while (local_38 != 0);
    }
  }
  FUN_1408a750e(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14000144e FUN_14000144e body=120 status=ok
// SIG undefined FUN_14000144e(void)

undefined8 * FUN_14000144e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace970) {
    FUN_144b3d300(&DAT_14cace970);
    if (DAT_14cace970 == -1) {
      FUN_1446f470e(&DAT_14cace968,L"UberGraphFrame",1);
      _Init_thread_footer(&DAT_14cace970);
    }
  }
  *param_1 = DAT_14cace968;
  return param_1;
}



// FUNCTION 1400014c6 FUN_1400014c6 body=73 status=ok
// SIG undefined FUN_1400014c6(void)

undefined8 FUN_1400014c6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x14)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140001510 FUN_140001510 body=440 status=ok
// SIG undefined FUN_140001510(void)

void FUN_140001510(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  short *psVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  code *local_120;
  undefined1 **local_118;
  undefined1 local_110 [192];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  local_118 = &local_128;
  local_120 = FUN_14000193e;
  local_128 = local_110;
  if (DAT_14c947fe0 == 0) {
    lVar5 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar5);
    DAT_14c947fe0 = lVar5;
  }
  if ((int)param_2[1] == 0) {
    psVar2 = &DAT_149dfb77a;
  }
  else {
    psVar2 = (short *)*param_2;
  }
  if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
    FUN_14000193e(&local_128,&DAT_14c948618);
  }
  else {
    FUN_1446df218(DAT_14c947fe0,psVar2,param_3,&local_120);
  }
  FUN_1447a993c(param_1,local_48 & 0xffffffff);
  if (0 < (int)local_48) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      puVar4 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar4 = local_110;
      }
      uVar3 = uVar3 + 1;
      FUN_1447a993c(param_1,uVar3 & 0xffffffff);
      if ((0 < *(int *)(param_1 + 0x24)) || (lVar1 = param_1 + 8, 1 < *(int *)(param_1 + 4))) {
        lVar1 = *(longlong *)(param_1 + 0x18);
      }
      *(undefined4 *)(lVar1 + 8 + lVar5) = *(undefined4 *)((longlong)(puVar4 + lVar5) + 8);
      *(undefined8 *)(lVar1 + lVar5) = *(undefined8 *)(puVar4 + lVar5);
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar3 < (longlong)(int)local_48);
  }
  FUN_14009404e(param_1);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400016c9 FUN_1400016c9 body=161 status=ok
// SIG undefined FUN_1400016c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400016c9(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0f00) {
    FUN_144b3d300(&DAT_14c9a0f00);
    if (DAT_14c9a0f00 == -1) {
      _DAT_14c9a0ed8 = 0;
      DAT_14c9a0ee0 = 0;
      DAT_14c9a0ee8 = 0;
      DAT_14c9a0ef0 = 0;
      uRam000000014c9a0ef8 = 0;
      FUN_1446ddda2(&DAT_14c9a0ed8,"pairs",0);
      atexit((_func_5014 *)&LAB_142b15dcf);
      _Init_thread_footer(&DAT_14c9a0f00);
    }
  }
  FUN_1447a97f4(param_1,&DAT_14c9a0ed8);
  return param_1;
}



// FUNCTION 14000176a FUN_14000176a body=254 status=ok
// SIG undefined FUN_14000176a(void)

undefined8 *
FUN_14000176a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 **local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = (undefined4)param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)param_6;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_6._4_4_;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = param_7;
  param_1[7] = 0;
  param_1[8] = param_8;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1446f470e(&local_30,param_2 + 2,1);
  *param_1 = local_30;
  FUN_140001a8a();
  iVar1 = DAT_14c9496e8;
  lVar2 = (longlong)(int)DAT_14c9496e8;
  DAT_14c9496e8 = DAT_14c9496e8 + 1;
  if (DAT_14c9496ec < DAT_14c9496e8) {
    FUN_1456ab836(&DAT_14c9496e0,iVar1);
  }
  *(undefined8 **)(DAT_14c9496e0 + lVar2 * 8) = param_1;
  FUN_1403a5ef6();
  local_28 = &local_38;
  local_38 = param_1;
  local_30 = param_1;
  FUN_140001af4(&DAT_14c9496f8,local_1c,&local_30,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000186a FUN_14000186a body=91 status=ok
// SIG undefined FUN_14000186a(void)

undefined8 FUN_14000186a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1400018c6 FUN_1400018c6 body=119 status=ok
// SIG undefined FUN_1400018c6(void)

undefined4 FUN_1400018c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = iVar1 + 1;
  puVar2 = (undefined8 *)param_1[1];
  if (iVar1 < 1) {
    *(undefined4 *)(puVar2 + 1) = local_10;
    uVar3 = local_18;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = DAT_14c948620;
    uVar3 = DAT_14c948618;
  }
  *puVar2 = uVar3;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000193e FUN_14000193e body=91 status=ok
// SIG undefined FUN_14000193e(void)

undefined8 FUN_14000193e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 14000199a FUN_14000199a body=119 status=ok
// SIG undefined FUN_14000199a(void)

undefined4 FUN_14000199a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = iVar1 + 1;
  puVar2 = (undefined8 *)param_1[1];
  if (iVar1 < 1) {
    *(undefined4 *)(puVar2 + 1) = local_10;
    uVar3 = local_18;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = DAT_14c948620;
    uVar3 = DAT_14c948618;
  }
  *puVar2 = uVar3;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140001a12 FUN_140001a12 body=119 status=ok
// SIG undefined FUN_140001a12(void)

undefined4 FUN_140001a12(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  iVar1 = *(int *)*param_1;
  *(int *)*param_1 = iVar1 + 1;
  puVar2 = (undefined8 *)param_1[1];
  if (iVar1 < 1) {
    *(undefined4 *)(puVar2 + 1) = local_10;
    uVar3 = local_18;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = DAT_14c948620;
    uVar3 = DAT_14c948618;
  }
  *puVar2 = uVar3;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140001a8a FUN_140001a8a body=106 status=ok
// SIG undefined FUN_140001a8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140001a8a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496f0) {
    FUN_144b3d300(&DAT_14c9496f0);
    if (DAT_14c9496f0 == -1) {
      DAT_14c9496e0 = 0;
      _DAT_14c9496e8 = 0;
      atexit((_func_5014 *)&LAB_1427e1aa5);
      _Init_thread_footer(&DAT_14c9496f0);
    }
  }
  return &DAT_14c9496e0;
}



// FUNCTION 140001af4 FUN_140001af4 body=863 status=ok
// SIG undefined FUN_140001af4(void)

int * FUN_140001af4(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_14482b872(param_1,iVar14);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar4 = iVar12 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar9 = iVar12 + 1;
    iVar15 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar15 = iVar12;
    }
    if (iVar15 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar12;
        }
        else {
          uVar16 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar16) {
              uVar5 = uVar16;
            }
          }
          else {
            uVar5 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar16 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar13,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar13;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar6 = (longlong)iVar14;
    iVar12 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar12;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar12 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar12 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  plVar13 = (longlong *)(*param_1 + lVar6 * 0x18);
  plVar10 = (longlong *)param_3[1];
  lVar6 = *(longlong *)*param_3;
  *plVar13 = lVar6;
  plVar13[1] = *plVar10;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar16 = (uint)((ulonglong)lVar6 >> 0x10);
  uVar5 = (uint)lVar6 & 0xffff;
  uVar16 = ((uint)lVar6 << 0x10 | uVar5) + (int)((ulonglong)lVar6 >> 0x20) +
           (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar5 >> 4);
  cVar7 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
    if (iVar12 == -1) {
      cVar7 = '\0';
    }
    else {
      do {
        plVar10 = (longlong *)(*param_1 + (longlong)iVar12 * 0x18);
        if (*plVar10 == lVar6) {
          uVar2 = *(undefined4 *)((longlong)plVar13 + 4);
          lVar6 = plVar13[1];
          uVar3 = *(undefined4 *)((longlong)plVar13 + 0xc);
          *(int *)plVar10 = (int)*plVar13;
          *(undefined4 *)((longlong)plVar10 + 4) = uVar2;
          *(int *)(plVar10 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar10 + 0xc) = uVar3;
          FUN_1468b3b46(param_1,iVar14);
          cVar7 = '\x01';
          iVar14 = iVar12;
          break;
        }
        iVar12 = (int)plVar10[2];
        cVar7 = '\0';
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar12 <= (int)param_1[9])) {
      uVar16 = (int)param_1[9] - 1U & uVar16;
      *(uint *)((longlong)plVar13 + 0x14) = uVar16;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)(plVar13 + 2) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
           iVar14;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_140001e54(param_1);
    }
  }
  *param_2 = iVar14;
  return param_2;
}



// FUNCTION 140001e54 FUN_140001e54 body=594 status=ok
// SIG undefined FUN_140001e54(void)

void FUN_140001e54(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_14000205d;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_14000205d:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400020a8 FUN_1400020a8 body=64 status=ok
// SIG undefined FUN_1400020a8(void)

void FUN_1400020a8(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 1400020e8 FUN_1400020e8 body=156 status=ok
// SIG undefined FUN_1400020e8(void)

void FUN_1400020e8(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  size_t _Size;
  uint uVar3;
  void *pvVar4;
  undefined2 *puVar5;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    uVar3 = param_3 + (uint)(iVar1 == 0);
    *(uint *)(param_1 + 1) = uVar3 + iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_144a2dbb8(param_1,iVar1);
    }
    lVar2 = (longlong)(int)(iVar1 + -1 + (uint)(iVar1 == 0)) * 2;
    pvVar4 = (void *)(*param_1 + lVar2);
    _Size = (longlong)param_3 * 2;
    memcpy(pvVar4,param_2,_Size);
    puVar5 = (undefined2 *)((longlong)pvVar4 + _Size);
    if (puVar5 == (undefined2 *)0x0) {
      pvVar4 = (void *)(lVar2 + *param_1);
      memcpy(pvVar4,param_2,_Size);
      puVar5 = (undefined2 *)((longlong)pvVar4 + (longlong)param_3 * 2);
    }
    *puVar5 = 0;
  }
  return;
}



// FUNCTION 140002184 FUN_140002184 body=96 status=ok
// SIG undefined FUN_140002184(void)

longlong * FUN_140002184(longlong *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1 + -1;
    }
    *(uint *)(param_1 + 1) = (uint)(iVar1 < 1) + iVar1 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (iVar1 < 1) + 1) {
      FUN_144a2dbb8(param_1);
    }
    *(short *)(*param_1 + (longlong)iVar2 * 2) = param_2;
    *(undefined2 *)(*param_1 + 2 + (longlong)iVar2 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 1400021e4 FUN_1400021e4 body=129 status=ok
// SIG undefined FUN_1400021e4(void)

undefined8 * FUN_1400021e4(uint *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  
  if (param_1[1] == 0) {
    uVar3 = *param_1;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    puVar1 = (ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + (ulonglong)(uVar3 & 0xffff) * 2);
    uVar2 = *puVar1;
    if ((uVar2 & 1) == 0) {
      FUN_142746720();
    }
    else {
      FUN_14006620a(param_2,puVar1 + 1,uVar2 >> 6);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1400348e2(0,param_2);
  }
  return param_2;
}



// FUNCTION 140002266 FUN_140002266 body=315 status=ok
// SIG undefined FUN_140002266(void)

undefined8
FUN_140002266(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 *local_460;
  undefined8 *local_450;
  undefined2 local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_res18 = param_3;
  local_res20 = param_4;
  local_450 = &local_res18;
  puVar2 = (undefined8 *)FUN_144737586();
  local_468 = 0;
  local_460 = &local_res18;
  uVar1 = __stdio_common_vswprintf(*puVar2,local_448,0x200,param_2);
  if (uVar1 < 0x200) {
    local_448[uVar1] = 0;
    FUN_140056680(param_1,local_448);
  }
  else {
    iVar4 = 0x200;
    lVar3 = 0;
    do {
      iVar4 = iVar4 * 2;
      lVar3 = FUN_14001fdce(lVar3,(longlong)iVar4 * 2,0);
      local_450 = &local_res18;
      puVar2 = (undefined8 *)FUN_144737586();
      local_468 = 0;
      local_460 = &local_res18;
      uVar1 = __stdio_common_vswprintf(*puVar2,lVar3,(longlong)iVar4,param_2);
      bVar5 = (int)uVar1 < 0;
      if (bVar5) {
        uVar1 = 0xffffffff;
      }
    } while (iVar4 <= (int)uVar1 || bVar5);
    *(undefined2 *)(lVar3 + (ulonglong)uVar1 * 2) = 0;
    FUN_140056680(param_1,lVar3);
    FUN_1400020a8(lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400023a2 FUN_1400023a2 body=412 status=ok
// SIG undefined FUN_1400023a2(void)

void FUN_1400023a2(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  void *_Dst;
  void *_Src;
  
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      _Dst = (void *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    }
    else {
      iVar1 = *(int *)(param_1[0xe] + 0x5c);
      _Dst = (void *)FUN_14001cc68((longlong)
                                   (int)(-iVar1 & (*(int *)(param_1[0xe] + 0x58) + iVar1) - 1U),0);
      (**(code **)(*(longlong *)param_1[0xe] + 0x2e8))((longlong *)param_1[0xe],_Dst,1);
      cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar2 == '\0') {
        _Src = (void *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (_Src != _Dst) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst,_Src,(int)param_1[6]);
          }
          else {
            memcpy(_Dst,_Src,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,_Dst);
      }
    }
    FUN_1446df618(param_1[0xe],param_2,_Dst,param_5,param_6,param_7,param_8,1);
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0xe] + 0x2f0))((longlong *)param_1[0xe],_Dst,1);
      FUN_1400020a8(_Dst);
      return;
    }
  }
  else {
    FUN_1446df618(param_1[0xe],param_2,param_3,param_5,param_6,param_7,param_8,1);
  }
  return;
}



// FUNCTION 14000253e FUN_14000253e body=490 status=ok
// SIG undefined FUN_14000253e(void)

void FUN_14000253e(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  bool bVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))();
    if (cVar2 == '\0') {
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_140002577;
    }
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (param_3 != &local_38) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_38,param_3,(int)param_1[6]);
        }
        else {
          memcpy(&local_38,param_3,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_38);
    }
  }
  else {
LAB_140002577:
    local_38 = *param_3;
  }
  if ((param_7 & 1) == 0) {
    FUN_1400021e4(&local_38,&local_48);
    iVar3 = local_40 + -1;
    if (local_40 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar3);
  }
  else {
    if (local_38 == 0) {
      FUN_1400020e8(param_2,&DAT_149e192d0,2);
      goto LAB_14000261b;
    }
    FUN_1400021e4(&local_38,&local_58);
    FUN_144832102(&local_58,0);
    puVar1 = local_58;
    bVar5 = (int)uStack_50 != 0;
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    puVar4 = &DAT_149dfb77a;
    if (bVar5) {
      puVar4 = puVar1;
    }
    FUN_140002266(&local_48,L"\"%s\"",puVar4);
    iVar3 = local_40 + -1;
    if (local_40 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2,local_48,iVar3);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    if (puVar1 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar1);
      local_48 = local_58;
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14000261b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14000272a FUN_14000272a body=293 status=ok
// SIG undefined FUN_14000272a(void)

ulonglong FUN_14000272a(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == (undefined8 *)0x0) {
    uStack_30 = 0;
  }
  else {
    local_38 = (void *)0x0;
    uVar3 = *(uint *)(param_3 + 1);
    unaff_RBX = (void *)*param_3;
    uStack_30 = CONCAT44(uStack_30._4_4_,uVar3);
    if ((longlong)(int)uVar3 != 0) {
      FUN_1446dd670(&local_38,uVar3,0);
      memcpy(local_38,unaff_RBX,(longlong)(int)uVar3 * 2);
      iVar4 = (int)uStack_30;
      goto LAB_140002792;
    }
    uStack_30 = (ulonglong)uVar3;
  }
  local_38 = (void *)0x0;
  iVar4 = 0;
LAB_140002792:
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((int)param_2[1] == iVar4) {
    if (iVar4 < 2) {
      uVar5 = CONCAT71(uVar6,1);
    }
    else {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*param_2 + lVar7);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_38 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14000280a;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_140002835;
        }
        if (uVar1 == 0) break;
LAB_14000280a:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
LAB_140002835:
      uVar5 = CONCAT71(uVar6,iVar4 == 0);
    }
  }
  else {
    uVar5 = CONCAT71(uVar6,(int)param_2[1] + iVar4 == 1);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140002850 FUN_140002850 body=527 status=ok
// SIG undefined FUN_140002850(void)

undefined8 * FUN_140002850(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  code *local_60;
  undefined1 *local_58;
  undefined2 **local_50;
  undefined2 *local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  ulonglong uVar5;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar5 & 1) == 0) {
    if (uVar5 < 2) {
      plVar4 = (longlong *)0x0;
    }
    else {
      do {
        uVar5 = *(ulonglong *)(uVar5 + 0x10);
        if ((uVar5 & 1) != 0) goto LAB_140002880;
        plVar4 = (longlong *)0x0;
      } while (1 < uVar5);
    }
  }
  else {
LAB_140002880:
    if ((uVar5 & 0xfffffffffffffffe) == 0) {
      uVar5 = 0;
    }
    else if (DAT_14c950c29 != '\0') {
      FUN_1456cec3c();
    }
    plVar4 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  }
  do {
    if (plVar4 != (longlong *)0x0) {
      if (DAT_14c948f88 == 0) {
        local_48 = &DAT_1427db2a2;
        lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar1;
        FUN_1446f470e(local_40,L"Struct",1);
        local_58 = &LAB_146891313;
        local_60 = FUN_146272f63;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 8;
        local_80 = 0x10000020;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_48;
        FUN_14574b4b2(lVar1);
        DAT_14c948f88 = lVar1;
        uVar2 = FUN_1446f8646();
        lVar1 = DAT_14c948f88;
        uVar3 = FUN_1400163b0();
        local_88 = L"Struct";
        FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) ==
          DAT_14c948f88 + 0x30)) {
        (**(code **)(*plVar4 + 0x318))(plVar4,param_2,param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
      }
    }
    plVar4 = (longlong *)plVar4[4];
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 140002a60 FUN_140002a60 body=469 status=ok
// SIG undefined FUN_140002a60(void)

void FUN_140002a60(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  char cVar1;
  undefined *puVar2;
  undefined **_Src;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined *)0x0;
  uStack_30 = 0;
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x88))();
    if (cVar1 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_140002a92;
    }
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') {
      _Src = (undefined **)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (_Src != &local_38) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_38,_Src,(int)param_1[6]);
        }
        else {
          memcpy(&local_38,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_38);
    }
  }
  else {
LAB_140002a92:
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(&local_38,*param_3,iVar3);
  }
  if ((param_7 & 1) == 0) {
    puVar2 = local_38;
    iVar3 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar3 = 0;
    }
  }
  else {
    if ((int)uStack_30 - 2U < 0x7fffffff) {
      FUN_1467ce734(&local_38,&local_58,0);
      puVar4 = local_58;
      if (local_50 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_48,L"\"%s\"",puVar4);
      iVar3 = local_40 + -1;
      if (local_40 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_48,iVar3);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140002acf;
    }
    puVar2 = &DAT_149e192d0;
    iVar3 = 2;
  }
  FUN_1400020e8(param_2,puVar2,iVar3);
LAB_140002acf:
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140002c36 FUN_140002c36 body=373 status=ok
// SIG undefined FUN_140002c36(void)

void FUN_140002c36(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140002cbf;
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
LAB_140002cbf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140002dac FUN_140002dac body=49 status=ok
// SIG undefined FUN_140002dac(void)

longlong FUN_140002dac(void)

{
  if (DAT_14cac0168 == 0) {
    FUN_140f50038(&DAT_14cac0168,&PTR_s__Script_Engine_14a5f3db8);
  }
  return DAT_14cac0168;
}



// FUNCTION 140002ddd FUN_140002ddd body=233 status=ok
// SIG undefined FUN_140002ddd(void)

undefined8 FUN_140002ddd(code *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (*param_1)();
LAB_140002e00:
  lVar4 = param_2;
  lVar2 = lVar4;
  if (*(longlong *)(lVar4 + 0x20) != 0) goto LAB_140002ea3;
  goto LAB_140002e13;
LAB_140002ea3:
  param_2 = *(longlong *)(lVar4 + 0x20);
  if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) {
    lVar2 = FUN_142840154(lVar4);
LAB_140002e13:
    if (lVar2 != 0) {
      local_30 = *(undefined8 *)(lVar2 + 0x18);
      FUN_1400021e4(&local_30,&local_40);
      puVar3 = local_40;
      if (local_38 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      local_50 = 0;
      local_58 = 0;
      local_48 = uVar1;
      FUN_14058d631(puVar3,param_3,2,2);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar1;
    }
    param_2 = *(longlong *)(lVar4 + 0x20);
  }
  goto LAB_140002e00;
}



// FUNCTION 140002ec8 FUN_140002ec8 body=97 status=ok
// SIG undefined FUN_140002ec8(void)

void FUN_140002ec8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140002f2a FUN_140002f2a body=57 status=ok
// SIG undefined FUN_140002f2a(void)

void FUN_140002f2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbbb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbbb0 = FUN_140002ddd(FUN_1417b4f4e,uVar1,L"AnimNode_Base");
  }
  return;
}



// FUNCTION 140002f64 FUN_140002f64 body=57 status=ok
// SIG undefined FUN_140002f64(void)

void FUN_140002f64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar1,L"AnimNode_Root");
  }
  return;
}



// FUNCTION 140002f9e FUN_140002f9e body=57 status=ok
// SIG undefined FUN_140002f9e(void)

void FUN_140002f9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacbe38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbe38 = FUN_140002ddd(FUN_1463a574e,uVar1,L"AnimNode_LinkedInputPose");
  }
  return;
}



// FUNCTION 140002fd8 FUN_140002fd8 body=366 status=ok
// SIG undefined FUN_140002fd8(void)

void FUN_140002fd8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14000305d;
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
LAB_14000305d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 140003146 FUN_140003146 body=516 status=ok
// SIG undefined FUN_140003146(void)

undefined8 * FUN_140003146(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc038) && (FUN_144b3d300(&DAT_14cacc038), DAT_14cacc038 == -1)) {
    DAT_14cacc034 = -1;
    _Init_thread_footer(&DAT_14cacc038);
  }
  if (DAT_14cacc034 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc048) && (FUN_144b3d300(), DAT_14cacc048 == -1)) {
      FUN_1446ddc76(&DAT_14cacc040,&DAT_149e3cc53,1);
      _Init_thread_footer();
    }
    if (DAT_14cacbe68 == 0) {
      uVar5 = FUN_140002dac();
      DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar5,L"AnimNode_Root");
    }
    plVar7 = *(longlong **)(param_1 + 8);
    if (plVar7 == (longlong *)0x0) {
      DAT_14cacc034 = -1;
    }
    else {
      if (*plVar7 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)plVar7[1];
      }
      DAT_14cacc034 = (**(code **)(*plVar7 + 0x130))(plVar7,DAT_14cacbe68,DAT_14cacc040);
    }
  }
  plVar7 = *(longlong **)(param_1 + 8);
  lVar6 = *plVar7;
  uVar1 = *(uint *)(plVar7[2] + (longlong)DAT_14cacc034 * 4);
  uVar8 = uVar1 & 0x7fffffff;
  if ((int)uVar1 < 0) {
    if (lVar6 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)plVar7[1];
    }
    lVar2 = plVar7[4];
    if (*(code **)(*plVar4 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar4 = plVar4 + 0x12;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
      lVar6 = *plVar7;
    }
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)plVar7[1];
    }
    puVar3 = (undefined8 *)
             (**(code **)(*plVar7 + 0x108))
                       (plVar7,uVar8,
                        param_1 - *(int *)(*(longlong *)(*plVar4 + (longlong)(int)lVar2 * 8) + 0x44)
                       );
  }
  else {
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)plVar7[1];
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x100))(plVar7,uVar8);
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 14000334a FUN_14000334a body=112 status=ok
// SIG undefined FUN_14000334a(void)

void FUN_14000334a(longlong param_1,longlong *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
  (**(code **)(*param_2 + 0xa8))(param_2);
  if (*(longlong **)(param_1 + 0x110) == param_2) {
    FUN_14037f626(param_1);
    if ((*(byte *)(param_1 + 0xd4) & 4) != 0) {
      FUN_1400033ba(*(undefined8 *)(param_1 + 0x110),0,0,0,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400033b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x388));
  return;
}



// FUNCTION 1400033ba FUN_1400033ba body=7714 status=ok
// SIG undefined FUN_1400033ba(void)

/* WARNING: Removing unreachable block (ram,0x000140003729) */

void FUN_1400033ba(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                  longlong *param_5,longlong param_6)

{
  short *psVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  int iVar19;
  void *pvVar20;
  void **ppvVar21;
  longlong *plVar22;
  uint uVar23;
  undefined2 *puVar24;
  longlong lVar25;
  ushort uVar26;
  longlong lVar27;
  ushort uVar28;
  bool bVar29;
  bool bVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  undefined8 local_390;
  undefined *local_388;
  code *local_380;
  wchar_t *local_378;
  code *local_370;
  undefined1 *local_368;
  undefined1 *local_360;
  code *local_358;
  code *local_350;
  longlong *local_348;
  byte local_33d;
  undefined4 local_33c;
  longlong local_338;
  longlong *local_330;
  ulonglong local_328;
  uint local_31c;
  longlong local_318;
  longlong local_310;
  undefined1 *local_308;
  undefined8 local_300;
  undefined1 local_2f8 [12];
  undefined4 uStack_2ec;
  longlong local_2e8;
  longlong lStack_2e0;
  int local_2d8;
  longlong local_2d0;
  undefined2 *local_2c8;
  ulonglong uStack_2c0;
  undefined2 *local_2b8;
  undefined8 uStack_2b0;
  void *local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  char local_269;
  void *local_268 [2];
  undefined1 local_258 [16];
  undefined8 local_248;
  ulonglong uStack_240;
  undefined4 local_238;
  undefined8 local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_138 [216];
  ulonglong local_60;
  undefined1 auVar31 [16];
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (param_2 == 0) {
    param_2 = param_1[2];
    *(longlong *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd50) =
         param_2;
  }
  local_348 = param_1;
  if ((param_6 != 0) || ((*(uint *)(param_2 + 0xd4) & 4) == 0)) goto LAB_140004ceb;
  lVar7 = *(longlong *)(param_2 + 0x40);
  if (lVar7 == 0) {
LAB_14000360d:
    plVar9 = local_348;
    if (param_3 == 0) {
      FUN_140d6a474(local_348[2],local_268);
    }
    else {
      FUN_140056680(local_268,param_3);
      plVar9 = local_348;
    }
    if ((*(byte *)(plVar9[2] + 0xd5) & 4) == 0) {
      local_33c = 0;
    }
    else {
      local_33c = CONCAT31((int3)(*(uint *)(plVar9 + 1) >> 8),(*(uint *)(plVar9 + 1) & 0x10) == 0);
    }
    local_269 = '\0';
    local_278 = 0;
    FUN_1408e76da(local_138);
    lVar7 = (**(code **)(*plVar9 + 0x230))(plVar9);
    auVar31._8_8_ = extraout_XMM0_Qb;
    auVar31._0_8_ = extraout_XMM0_Qa;
    if (lVar7 != 0 && param_3 == 0) {
      local_150 = local_258;
      local_158 = 0;
      local_148 = 7;
      local_258 = pmovsxbw(auVar31,(char  [8])0x73776f646e6957);
      lVar8 = 0;
      while( true ) {
        uVar26 = *(ushort *)(lVar7 + lVar8);
        uVar14 = (uint)uVar26;
        uVar28 = *(ushort *)(local_258 + lVar8);
        uVar23 = (uint)uVar28;
        if (uVar26 != uVar28) {
          if ((uVar28 | uVar26) < 0x80) {
            uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar26];
            uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar28];
            if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar28]) goto LAB_1400036f5;
          }
          iVar19 = uVar14 - uVar23;
          goto LAB_14000371c;
        }
        if (uVar26 == 0) break;
LAB_1400036f5:
        lVar8 = lVar8 + 2;
      }
      iVar19 = 0;
LAB_14000371c:
      local_148 = 7;
      local_158 = 0;
      if (iVar19 != 0) {
        FUN_1400021e4(local_348[2] + 0xe8,local_258);
        if (local_258._8_4_ == 0) {
          puVar24 = &DAT_149dfb77a;
        }
        else {
          puVar24 = (undefined2 *)local_258._0_8_;
        }
        local_278 = FUN_14590861c(local_138,puVar24,lVar7);
        if (local_258._0_8_ != 0) {
          FUN_1400020a8();
        }
        local_269 = '\x01';
      }
    }
    local_288 = (undefined1  [16])0x0;
    local_31c = param_4;
    local_310 = param_3;
    if ((char)local_33c != '\0') {
      local_258 = (undefined1  [16])0x0;
      plVar9 = local_348;
LAB_140003767:
      plVar11 = plVar9;
      plVar9 = plVar11;
      if ((longlong *)plVar11[4] != (longlong *)0x0) goto code_r0x000140003776;
      goto LAB_14000378a;
    }
    local_338 = 0;
    local_328 = 0;
    goto LAB_140003a4a;
  }
  if ((*(byte *)(lVar7 + 0xd4) & 4) != 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) != 0) {
        FUN_1457a9e34(local_258,0x10,1,0);
        uVar16 = (ulonglong)local_248 & 0xffffffff;
        local_268[0] = (void *)local_258._0_8_;
        if ((int)local_248 < (int)local_258._8_4_ && -1 < (int)local_248) {
          iVar19 = local_258._8_4_;
          do {
            iVar6 = (int)uVar16;
            if (param_2 != 0) {
              plVar9 = *(longlong **)((longlong)local_268[0] + (uVar16 & 0xffffffff) * 8);
              if ((*(int *)(param_2 + 0x38) <= (int)plVar9[7]) &&
                 (*(longlong *)(plVar9[6] + (longlong)*(int *)(param_2 + 0x38) * 8) ==
                  param_2 + 0x30)) {
                lVar7 = plVar9[0x22];
                if (lVar7 == 0) {
                  (**(code **)(*plVar9 + 1000))(plVar9);
                  lVar7 = plVar9[0x22];
                  iVar6 = (int)local_248;
                  local_268[0] = (void *)local_258._0_8_;
                }
                local_398 = param_5;
                local_390 = 0;
                FUN_1400033ba(lVar7,*(undefined8 *)((longlong)local_268[0] + (longlong)iVar6 * 8),0,
                              param_4 & 0xc);
                iVar6 = (int)local_248;
                local_268[0] = (void *)local_258._0_8_;
                iVar19 = local_258._8_4_;
              }
            }
            uVar16 = (longlong)iVar6;
            do {
              uVar13 = uVar16;
              uVar16 = uVar13 + 1;
              local_248 = (longlong *)CONCAT44(local_248._4_4_,(int)uVar16);
              if ((longlong)iVar19 <= (longlong)uVar16) break;
            } while (*(longlong *)((longlong)local_268[0] + uVar16 * 8) == 0);
          } while ((-2 < (longlong)uVar13) && ((int)uVar16 < iVar19));
        }
        goto LAB_140004ce1;
      }
      if ((param_4 & 4) != 0) {
        uVar5 = FUN_14482ca40();
        if (DAT_14c927740 == 0) {
          local_360 = local_258;
          local_258._0_8_ = FUN_1449e2820;
          local_350 = FUN_14081d0ea;
          local_358 = FUN_14081d0ea;
          local_368 = &LAB_146856450;
          local_370 = FUN_1427b121c;
          local_378 = L"Engine";
          local_380 = (code *)0x0;
          local_388 = (undefined *)CONCAT44(local_388._4_4_,0x10000021);
          local_390 = CONCAT44(local_390._4_4_,8);
          local_398 = (longlong *)CONCAT44(local_398._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_398 = (longlong *)(CONCAT44(local_398._4_4_,uVar5) | 0x90000000);
        FUN_146123bc0(local_258,DAT_14c927740,0,0x10);
        if (local_248 != (longlong *)0x0) {
          do {
            lVar7 = *(longlong *)(*local_248 + 0x10);
            if ((*(int *)(param_2 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8)
                == param_2 + 0x30)) {
              local_398 = param_5;
              local_390 = 0;
              FUN_1400033ba(*local_248,lVar7,0,param_4 & 8);
            }
            FUN_1468bea3c(local_258);
          } while (local_248 != (longlong *)0x0);
        }
        goto LAB_1400035c9;
      }
    }
    else {
      local_398 = param_5;
      local_390 = 0;
      FUN_1400033ba(param_1,lVar7,0,param_4);
      if ((param_4 & 6) != 0) goto LAB_140004ceb;
    }
    goto LAB_14000360d;
  }
  if ((param_4 & 2) == 0) {
    if ((param_4 & 4) != 0) {
      uVar5 = FUN_14482ca40();
      if (DAT_14c927740 == 0) {
        local_360 = local_258;
        local_258._0_8_ = FUN_1449e2820;
        local_350 = FUN_14081d0ea;
        local_358 = FUN_14081d0ea;
        local_368 = &LAB_146856450;
        local_370 = FUN_1427b121c;
        local_378 = L"Engine";
        local_380 = (code *)0x0;
        local_388 = (undefined *)CONCAT44(local_388._4_4_,0x10000021);
        local_390 = CONCAT44(local_390._4_4_,8);
        local_398 = (longlong *)CONCAT44(local_398._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      local_398 = (longlong *)(CONCAT44(local_398._4_4_,uVar5) | 0x90000000);
      FUN_146123bc0(local_258,DAT_14c927740,0,0x10);
      if (local_248 != (longlong *)0x0) {
        do {
          lVar7 = *(longlong *)(*local_248 + 0x10);
          if (lVar7 == param_2) {
            local_398 = param_5;
            local_390 = 0;
            FUN_1400033ba(*local_248,lVar7,0,param_4 & 8);
          }
          FUN_1468bea3c(local_258);
        } while (local_248 != (longlong *)0x0);
      }
LAB_1400035c9:
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_258._0_8_ + 0x30));
    }
    goto LAB_14000360d;
  }
  FUN_1457a9e34(local_258,0x10,1,0);
  uVar16 = (ulonglong)local_248 & 0xffffffff;
  local_268[0] = (void *)local_258._0_8_;
  if ((int)local_248 < (int)local_258._8_4_ && -1 < (int)local_248) {
    iVar19 = local_258._8_4_;
    do {
      iVar6 = (int)uVar16;
      if (param_2 != 0) {
        plVar9 = *(longlong **)((longlong)local_268[0] + (uVar16 & 0xffffffff) * 8);
        if ((*(int *)(param_2 + 0x38) <= (int)plVar9[7]) &&
           (*(longlong *)(plVar9[6] + (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) {
          lVar7 = plVar9[0x22];
          if (lVar7 == 0) {
            (**(code **)(*plVar9 + 1000))(plVar9);
            lVar7 = plVar9[0x22];
            iVar6 = (int)local_248;
            local_268[0] = (void *)local_258._0_8_;
          }
          local_398 = param_5;
          local_390 = 0;
          FUN_1400033ba(lVar7,*(undefined8 *)((longlong)local_268[0] + (longlong)iVar6 * 8),0,
                        param_4 & 0xc);
          iVar6 = (int)local_248;
          local_268[0] = (void *)local_258._0_8_;
          iVar19 = local_258._8_4_;
        }
      }
      uVar16 = (longlong)iVar6;
      do {
        uVar13 = uVar16;
        uVar16 = uVar13 + 1;
        local_248 = (longlong *)CONCAT44(local_248._4_4_,(int)uVar16);
        if ((longlong)iVar19 <= (longlong)uVar16) break;
      } while (*(longlong *)((longlong)local_268[0] + uVar16 * 8) == 0);
    } while ((-2 < (longlong)uVar13) && ((int)uVar16 < iVar19));
  }
  goto LAB_140004ce1;
code_r0x000140003b38:
  lVar8 = *(longlong *)(lVar25 + 0x20);
  if ((*(uint *)(lVar25 + 8) >> 0x1c & 1) == 0) goto LAB_140003b29;
  lVar8 = FUN_142840154(lVar25);
LAB_140003b49:
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(lVar25 + 0x20);
    goto LAB_140003b29;
  }
  (**(code **)(*plVar11 + 0x238))(plVar11,local_288);
LAB_140003b69:
  local_2a8 = (void *)0x0;
  uStack_2a0 = 0;
  ppvVar21 = local_268;
  if ((local_310 == 0) && ((uVar16 & 0x40000) != 0)) {
    FUN_140d6a474(lVar7,local_258);
    iVar19 = local_258._8_4_ + -1;
    if (local_258._8_4_ == 0) {
      iVar19 = 0;
    }
    FUN_1402980a2(&local_2a8,local_258._0_8_,iVar19);
    if (local_258._0_8_ != 0) {
      FUN_1400020a8();
    }
    ppvVar21 = &local_2a8;
  }
  local_330 = plVar9 + 4;
  FUN_1400021e4(local_330,&local_2b8);
  puVar12 = (undefined *)plVar9[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_388 = (undefined *)FUN_140342cba();
      local_380 = FUN_1468c7f1e;
      local_390 = 0;
      local_398 = (longlong *)0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_380 = FUN_140b31576;
    local_388 = &DAT_14c951a38;
    local_390 = 0;
    local_398 = (longlong *)0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar29 = puVar12 != (undefined *)0x0;
    if (puVar12 != &DAT_14c951a90 && bVar29) {
      do {
        puVar12 = *(undefined **)(puVar12 + 0x30);
        bVar29 = puVar12 != (undefined *)0x0;
        if (puVar12 == &DAT_14c951a90) break;
      } while (puVar12 != (undefined *)0x0);
    }
  }
  else {
    bVar29 = (*(ulonglong *)(puVar12 + 0x18) & DAT_14c951a98) != 0;
  }
  puVar12 = (undefined *)plVar9[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_388 = (undefined *)FUN_140342cba();
      local_380 = FUN_1468c7f1e;
      local_390 = 0;
      local_398 = (longlong *)0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_380 = FUN_1468e4cee;
    local_388 = &DAT_14c951a38;
    local_398 = (longlong *)0x800000008001;
    local_390 = 0;
    FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
    atexit(FUN_142817fb7);
    _Init_thread_footer(&DAT_14c952900);
  }
  if (DAT_14c9528b8 == 0) {
    bVar30 = puVar12 != (undefined *)0x0;
    if (puVar12 != &DAT_14c9528b0 && bVar30) {
      do {
        puVar12 = *(undefined **)(puVar12 + 0x30);
        bVar30 = puVar12 != (undefined *)0x0;
        if (puVar12 == &DAT_14c9528b0) break;
      } while (puVar12 != (undefined *)0x0);
    }
  }
  else {
    bVar30 = (*(ulonglong *)(puVar12 + 0x18) & DAT_14c9528b8) != 0;
  }
  plVar11 = (longlong *)0x0;
  if (bVar30) {
    plVar11 = plVar9;
  }
  if ((bool)(bVar29 | bVar30)) {
    puVar24 = &DAT_149dfb77a;
    if (*(int *)(ppvVar21 + 1) != 0) {
      puVar24 = *ppvVar21;
    }
    puVar17 = &DAT_149dfb77a;
    if (local_288._8_4_ != 0) {
      puVar17 = (undefined2 *)local_288._0_8_;
    }
    plVar10 = (longlong *)FUN_142805d68(local_298,puVar17,puVar24);
    if ((plVar10 == (longlong *)0x0 && local_33d == 0) && (1 < (uint)local_328)) {
      puVar24 = &DAT_149dfb77a;
      if (*(int *)(ppvVar21 + 1) != 0) {
        puVar24 = *ppvVar21;
      }
      plVar10 = (longlong *)FUN_142805d68(local_298,local_338,puVar24);
    }
    plVar22 = local_348;
    if (bVar29) {
      lVar8 = (longlong)*(int *)((longlong)plVar9 + 0x44) + (longlong)local_348;
      lVar7 = plVar9[0xe];
      uVar5 = (**(code **)(*(longlong *)plVar9[0xf] + 0x178))();
      local_248 = (longlong *)CONCAT44(uVar5,*(undefined4 *)(plVar9[0xf] + 0x34));
      uStack_240 = CONCAT71(uStack_240._1_7_,(char)lVar7);
      local_258._8_8_ = lVar8;
      local_258._0_8_ = plVar9[0xf];
      if (plVar10 == (longlong *)0x0) goto LAB_140004483;
      _local_2f8 = ZEXT816(0);
      puVar24 = &DAT_149dfb77a;
      if ((int)uStack_2b0 != 0) {
        puVar24 = local_2b8;
      }
      FUN_1446f470e(&local_308,puVar24,0);
      FUN_1405418ca(plVar10,local_308,local_2f8,0);
      uVar5 = local_2f8._8_4_;
      uVar16 = (ulonglong)(uint)local_2f8._8_4_;
      if (uVar16 == 0) {
        lVar7 = 0;
        iVar19 = 0;
        do {
          puVar24 = &DAT_149dfb77a;
          if ((int)uStack_2b0 != 0) {
            puVar24 = local_2b8;
          }
          FUN_140002266(&local_2c8,L"%s[%i]",puVar24);
          puVar24 = &DAT_149dfb77a;
          if ((int)uStack_2c0 != 0) {
            puVar24 = local_2c8;
          }
          FUN_1446f470e(&local_2d0,puVar24,0);
          lVar8 = local_2d0;
          if (local_2d0 != 0) {
            if ((int)plVar10[1] != *(int *)((longlong)plVar10 + 0x34)) {
              uVar23 = (uint)((ulonglong)local_2d0 >> 0x10);
              uVar14 = (uint)local_2d0 & 0xffff;
              plVar11 = (longlong *)plVar10[8];
              if ((longlong *)plVar10[8] == (longlong *)0x0) {
                plVar11 = plVar10 + 7;
              }
              iVar6 = *(int *)((longlong)plVar11 +
                              (ulonglong)
                              ((int)plVar10[9] - 1U &
                              (int)((ulonglong)local_2d0 >> 0x20) +
                              ((uint)local_2d0 << 0x10 | uVar14) +
                              (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar14 >> 4)) * 4);
              if (iVar6 != -1) {
                do {
                  lVar25 = *plVar10 + (longlong)iVar6 * 0x40;
                  if (*(longlong *)(*plVar10 + (longlong)iVar6 * 0x40) == local_2d0)
                  goto LAB_140004099;
                  iVar6 = *(int *)(lVar25 + 0x38);
                } while (iVar6 != -1);
              }
            }
            lVar25 = 0;
LAB_140004099:
            lVar7 = lVar25 + 8;
            if (lVar25 == 0) {
              lVar7 = 0;
            }
            if (lVar7 != 0) {
              FUN_140d50566(local_258,iVar19);
              if ((int)*(ulonglong *)(local_258._8_8_ + 8) == 0) {
                lVar25 = 0;
              }
              else {
                if ((uStack_240 & 1) == 0) {
                  uVar16 = *(ulonglong *)local_258._8_8_;
                }
                else {
                  uVar16 = *(ulonglong *)local_258._8_8_;
                  if ((uVar16 & 1) != 0) {
                    uVar16 = local_258._8_8_ + ((longlong)uVar16 >> 0x18);
                  }
                }
                lVar25 = (longlong)(int)local_248 * (longlong)iVar19 + uVar16;
              }
              uVar16 = (ulonglong)(*(int *)(lVar7 + 0x20) - 2U < 0x7fffffff) * 0x10;
              puVar24 = &DAT_149dfb77a;
              if ((*(int *)(lVar7 + 0x10 + uVar16) == 0) ||
                 (puVar24 = *(undefined2 **)(lVar7 + (uVar16 | 8)), puVar24 != (undefined2 *)0x0)) {
                local_388 = DAT_14c872be8;
                local_398 = plVar22;
                local_390 = CONCAT44(local_390._4_4_,0x8000020);
                (**(code **)(*(longlong *)plVar9[0xf] + 0xf8))
                          ((longlong *)plVar9[0xf],puVar24,lVar25);
              }
            }
            iVar19 = iVar19 + 1;
          }
          if (local_2c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        } while ((lVar8 != 0) && ((lVar7 != 0 || (iVar19 < *(int *)(local_258._8_8_ + 8)))));
      }
      else {
        iVar19 = (int)*(ulonglong *)(local_258._8_8_ + 8);
        if ((iVar19 != 0) &&
           ((0 < iVar19 && ((*(ulonglong *)(local_258._0_8_ + 0x38) & 0x1040000000) == 0)))) {
          if ((uStack_240 & 1) == 0) {
            uVar13 = *(ulonglong *)local_258._8_8_;
          }
          else {
            uVar13 = *(ulonglong *)local_258._8_8_;
            plVar22 = local_348;
            if ((uVar13 & 1) != 0) {
              uVar13 = local_258._8_8_ + ((longlong)uVar13 >> 0x18);
            }
          }
          do {
            if ((*(ulonglong *)(local_258._0_8_ + 0x38) & 0x1000000000) == 0) {
              (**(code **)(*(longlong *)local_258._0_8_ + 0x148))(local_258._0_8_,uVar13);
            }
            uVar13 = uVar13 + (longlong)(int)local_248;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        *(undefined4 *)(local_258._8_8_ + 8) = 0;
        if ((uStack_240 & 1) == 0) {
          if (*(uint *)(local_258._8_8_ + 0xc) != uVar5) {
            FUN_14474d398(local_258._8_8_,uVar5);
          }
        }
        else if (*(uint *)(local_258._8_8_ + 0xc) != uVar5) {
          FUN_1468c0360(local_258._8_8_,uVar16,(ulonglong)local_248 & 0xffffffff,local_248._4_4_);
        }
        iVar19 = *(int *)(local_258._8_8_ + 8);
        iVar6 = iVar19 + uVar5;
        *(int *)(local_258._8_8_ + 8) = iVar6;
        if ((uStack_240 & 1) == 0) {
          if (*(int *)(local_258._8_8_ + 0xc) < iVar6) {
            FUN_14097bbd2();
          }
        }
        else if (*(int *)(local_258._8_8_ + 0xc) < iVar6) {
          FUN_1468c03c2();
        }
        if (0 < (int)uVar5) {
          if ((int)*(ulonglong *)(local_258._8_8_ + 8) == 0) {
            pvVar20 = (void *)0x0;
          }
          else {
            if ((uStack_240 & 1) == 0) {
              uVar13 = *(ulonglong *)local_258._8_8_;
            }
            else {
              uVar13 = *(ulonglong *)local_258._8_8_;
              plVar22 = local_348;
              if ((uVar13 & 1) != 0) {
                uVar13 = local_258._8_8_ + ((longlong)uVar13 >> 0x18);
              }
            }
            pvVar20 = (void *)((longlong)(int)local_248 * (longlong)iVar19 + uVar13);
          }
          if ((*(byte *)(local_258._0_8_ + 0x39) & 2) == 0) {
            do {
              if ((*(byte *)(local_258._0_8_ + 0x39) & 2) == 0) {
                (**(code **)(*(longlong *)local_258._0_8_ + 0x160))();
              }
              else {
                memset(pvVar20,0,
                       (longlong)(int)*(longlong *)(local_258._0_8_ + 0x30) *
                       (longlong)*(int *)(local_258._0_8_ + 0x34));
              }
              pvVar20 = (void *)((longlong)pvVar20 + (longlong)(int)local_248);
              uVar23 = (int)uVar16 - 1;
              uVar16 = (ulonglong)uVar23;
            } while (uVar23 != 0);
          }
          else {
            memset(pvVar20,0,(longlong)(int)local_248 * uVar16);
          }
        }
        if (0 < (longlong)(int)local_2f8._8_4_) {
          lVar7 = (longlong)(int)local_2f8._8_4_ * 0x30;
          lVar8 = 0;
          puVar12 = DAT_14c872be8;
          do {
            if ((int)*(ulonglong *)(local_258._8_8_ + 8) == 0) {
              lVar25 = 0;
            }
            else {
              if ((uStack_240 & 1) == 0) {
                uVar16 = *(ulonglong *)local_258._8_8_;
              }
              else {
                uVar16 = *(ulonglong *)local_258._8_8_;
                if ((uVar16 & 1) != 0) {
                  uVar16 = local_258._8_8_ + ((longlong)uVar16 >> 0x18);
                }
              }
              lVar25 = (int)local_248 * lVar8 + uVar16;
            }
            lVar27 = (ulonglong)(*(int *)(local_2f8._0_8_ + -0x10 + lVar7) - 2U < 0x7fffffff) * 0x10
            ;
            puVar24 = &DAT_149dfb77a;
            if ((*(int *)(lVar7 + -0x20 + local_2f8._0_8_ + lVar27) == 0) ||
               (puVar24 = *(undefined2 **)(local_2f8._0_8_ + lVar27 + -0x28 + lVar7),
               puVar24 != (undefined2 *)0x0)) {
              local_390 = CONCAT44(local_390._4_4_,0x8000020);
              local_398 = plVar22;
              local_388 = puVar12;
              (**(code **)(*(longlong *)plVar9[0xf] + 0xf8))((longlong *)plVar9[0xf],puVar24,lVar25)
              ;
              puVar12 = DAT_14c872be8;
            }
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + -0x30;
          } while (lVar7 != 0);
        }
      }
      FUN_14170774d(local_2f8._0_8_,local_2f8._8_4_);
      puVar24 = (undefined2 *)local_2f8._0_8_;
LAB_140004b0d:
      if (puVar24 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140004483;
    }
    if (bVar30) {
      local_258._8_8_ = (longlong)*(int *)((longlong)plVar9 + 0x44) + (longlong)local_348;
      local_258._0_8_ = plVar9[0xe];
      local_238 = (int)plVar9[0x11];
      local_248 = (longlong *)plVar9[0xf];
      uStack_240 = plVar9[0x10];
      if (plVar10 != (longlong *)0x0) {
        local_2c8 = (undefined2 *)0x0;
        uStack_2c0 = 0;
        puVar24 = &DAT_149dfb77a;
        if ((int)uStack_2b0 != 0) {
          puVar24 = local_2b8;
        }
        FUN_1446f470e(&local_2d0,puVar24,0);
        FUN_1405418ca(plVar10,local_2d0,&local_2c8);
        if ((int)uStack_2c0 == 1) {
          uVar16 = (ulonglong)(*(int *)(local_2c8 + 0x10) - 2U < 0x7fffffff);
          uVar23 = *(int *)(local_2c8 + uVar16 * 8 + 8) - 1;
          if (*(int *)(local_2c8 + uVar16 * 8 + 8) == 0) {
            uVar23 = 0;
          }
          if ((((int)uVar23 < 2) ||
              (psVar1 = *(short **)((longlong)local_2c8 + (uVar16 * 0x10 | 8)), *psVar1 != 0x28)) ||
             (psVar1[(ulonglong)uVar23 - 1] != 0x29)) goto LAB_140004538;
        }
        else if ((int)uStack_2c0 != 0) {
LAB_140004538:
          FUN_1402608fa(local_258);
          (**(code **)(*plVar9 + 0x178))(plVar9);
          pvVar20 = (void *)FUN_14001cc68((longlong)*(int *)((longlong)plVar9 + 0x34) *
                                          (longlong)(int)plVar9[6]);
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            (**(code **)(*plVar9 + 0x160))(plVar9,pvVar20);
          }
          else {
            memset(pvVar20,0,(longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34))
            ;
          }
          uVar5 = (**(code **)(*(longlong *)plVar9[0xe] + 0x178))();
          local_330 = (longlong *)
                      FUN_14001cc68((longlong)*(int *)(plVar9[0xe] + 0x34) *
                                    (longlong)*(int *)(plVar9[0xe] + 0x30),uVar5);
          plVar10 = (longlong *)plVar9[0xe];
          if ((*(byte *)((longlong)plVar10 + 0x39) & 2) == 0) {
            (**(code **)(*plVar10 + 0x160))(plVar10,local_330);
          }
          else {
            memset(local_330,0,
                   (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
          }
          if ((longlong)(int)uStack_2c0 != 0) {
            puVar17 = local_2c8 + (longlong)(int)uStack_2c0 * 0x18;
            puVar24 = local_2c8;
            do {
              uVar16 = (ulonglong)(*(int *)(puVar24 + 0x10) - 2U < 0x7fffffff);
              puVar18 = &DAT_149dfb77a;
              if ((*(int *)(puVar24 + uVar16 * 8 + 8) == 0) ||
                 (puVar18 = *(undefined2 **)(puVar24 + uVar16 * 8 + 4), puVar18 != (undefined2 *)0x0
                 )) {
                local_388 = DAT_14c872be8;
                local_398 = local_348;
                local_390 = CONCAT44(local_390._4_4_,0x8000020);
                puVar18 = (undefined2 *)(**(code **)(*plVar11 + 0xf8))(plVar11,puVar18,pvVar20);
                if (puVar18 != (undefined2 *)0x0) {
                  puVar15 = &DAT_149dfb77a;
                  if (*(int *)(puVar24 + uVar16 * 8 + 8) != 0) {
                    puVar15 = *(undefined2 **)(puVar24 + uVar16 * 8 + 4);
                  }
                  if (puVar18 != puVar15) {
                    stack0xfffffffffffffd10 = pvVar20;
                    local_2f8._0_8_ = plVar9[0xe];
                    local_2d8 = (int)plVar9[0x11];
                    local_2e8 = plVar9[0xf];
                    lStack_2e0 = plVar9[0x10];
                    local_308 = local_2f8;
                    local_300 = 0xffffffffffffffff;
                    while( true ) {
                      FUN_14000a0a0(&local_308);
                      if (((int)(uint)local_300 < 0) ||
                         (lVar7 = *(longlong *)(local_308 + 8),
                         *(int *)(lVar7 + 0x28) <= (int)(uint)local_300)) break;
                      lVar8 = lVar7 + 0x10;
                      if (*(longlong *)(lVar7 + 0x20) != 0) {
                        lVar8 = *(longlong *)(lVar7 + 0x20);
                      }
                      if ((*(uint *)(lVar8 + (ulonglong)((uint)local_300 >> 5) * 4) >>
                           ((uint)local_300 & 0x1f) & 1) == 0) break;
                      FUN_146896fd6(local_258,
                                    (longlong)(int)(uint)local_300 * (longlong)local_2d8 +
                                    *stack0xfffffffffffffd10);
                    }
                    goto LAB_14000484b;
                  }
                }
                puVar18 = &DAT_149dfb77a;
                if ((*(int *)(puVar24 + uVar16 * 8 + 8) == 0) ||
                   (puVar18 = *(undefined2 **)(puVar24 + uVar16 * 8 + 4),
                   puVar18 != (undefined2 *)0x0)) {
                  local_388 = DAT_14c872be8;
                  local_398 = local_348;
                  local_390 = CONCAT44(local_390._4_4_,0x8000020);
                  puVar18 = (undefined2 *)
                            (**(code **)(*(longlong *)plVar9[0xe] + 0xf8))
                                      ((longlong *)plVar9[0xe],puVar18,local_330);
                  if (puVar18 != (undefined2 *)0x0) {
                    puVar15 = &DAT_149dfb77a;
                    if (*(int *)(puVar24 + uVar16 * 8 + 8) != 0) {
                      puVar15 = *(undefined2 **)(puVar24 + uVar16 * 8 + 4);
                    }
                    if (puVar18 != puVar15) {
                      FUN_146896fd6(local_258,local_330);
                    }
                  }
                }
              }
LAB_14000484b:
              puVar24 = puVar24 + 0x18;
            } while (puVar24 != puVar17);
          }
          FUN_146224210(plVar11,pvVar20);
          FUN_146224210(plVar9[0xe],local_330);
          local_308 = local_258;
          stack0xfffffffffffffd10 = (longlong *)&local_308;
          local_2f8._0_8_ = FUN_14281ab14;
          FUN_1402609e8(local_258._8_8_,&local_248,local_2f8);
          FUN_14170774d(local_2c8,uStack_2c0 & 0xffffffff);
          puVar24 = local_2c8;
          goto LAB_140004b0d;
        }
        FUN_14170774d(local_2c8);
        if (local_2c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar16 = (ulonglong)*(uint *)(plVar9 + 6);
  if (0 < (int)*(uint *)(plVar9 + 6)) {
    uVar13 = 0;
    do {
      if ((int)uVar16 != 1) {
        FUN_1400021e4(local_330,local_2f8);
        puVar24 = &DAT_149dfb77a;
        if (local_2f8._8_4_ != 0) {
          puVar24 = (undefined2 *)local_2f8._0_8_;
        }
        FUN_140002266(local_258,L"%s[%i]",puVar24,uVar13 & 0xffffffff);
        if (local_2b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_2b8 = (undefined2 *)local_258._0_8_;
        uStack_2b0 = local_258._8_8_;
        local_258 = ZEXT816(0);
        if (local_2f8._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
      uVar3 = DAT_14c872ce0;
      _local_2f8 = ZEXT816(0);
      puVar24 = &DAT_149dfb77a;
      if (*(int *)(ppvVar21 + 1) != 0) {
        puVar24 = *ppvVar21;
      }
      puVar17 = &DAT_149dfb77a;
      if ((int)uStack_2b0 != 0) {
        puVar17 = local_2b8;
      }
      puVar18 = &DAT_149dfb77a;
      if (local_288._8_4_ != 0) {
        puVar18 = (undefined2 *)local_288._0_8_;
      }
      if (local_269 == '\x01') {
        cVar4 = FUN_1412734f2(local_278,puVar18,puVar17);
      }
      else {
        FUN_140056680(local_258,puVar24);
        local_398 = (longlong *)local_258;
        cVar4 = FUN_1449da20c(uVar3,puVar18,puVar17);
        if (local_258._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
      uVar3 = DAT_14c872ce0;
      if ((cVar4 == '\0' && local_33d == 0) && (1 < (uint)local_328)) {
        puVar24 = &DAT_149dfb77a;
        if (*(int *)(ppvVar21 + 1) != 0) {
          puVar24 = *ppvVar21;
        }
        puVar17 = &DAT_149dfb77a;
        if ((int)uStack_2b0 != 0) {
          puVar17 = local_2b8;
        }
        if (local_269 != '\x01') {
          FUN_140056680(local_258,puVar24);
          local_398 = (longlong *)local_258;
          cVar4 = FUN_1449da20c(uVar3,local_338,puVar17);
          if (local_258._0_8_ != 0) {
            FUN_1400020a8();
          }
          goto LAB_140004401;
        }
        cVar4 = FUN_1412734f2(local_278,local_338,puVar17);
        if (cVar4 != '\0') goto LAB_140004405;
LAB_140004461:
      }
      else {
LAB_140004401:
        if (cVar4 == '\0') goto LAB_140004461;
LAB_140004405:
        puVar24 = (undefined2 *)local_2f8._0_8_;
        if (local_2f8._8_4_ == 0) {
          puVar24 = &DAT_149dfb77a;
        }
        if (puVar24 != (undefined2 *)0x0) {
          local_388 = DAT_14c872be8;
          local_398 = local_348;
          local_390 = CONCAT44(local_390._4_4_,0x8000020);
          (**(code **)(*plVar9 + 0xf8))
                    (plVar9,puVar24,
                     (longlong)local_348 +
                     (longlong)*(int *)((longlong)plVar9 + 0x34) * uVar13 +
                     (longlong)*(int *)((longlong)plVar9 + 0x44));
          goto LAB_140004461;
        }
      }
      if ((undefined2 *)local_2f8._0_8_ != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 + 1;
      uVar16 = (ulonglong)(int)plVar9[6];
    } while ((longlong)uVar13 < (longlong)uVar16);
  }
LAB_140004483:
  if (local_2b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar11 = local_348;
  if (local_2a8 != (void *)0x0) {
    FUN_1400020a8();
    plVar11 = local_348;
  }
LAB_1400044ac:
  plVar9 = (longlong *)plVar9[9];
  if (plVar9 == (longlong *)0x0) goto LAB_140004c89;
  goto LAB_140003a98;
code_r0x000140003776:
  plVar9 = (longlong *)plVar11[4];
  if ((*(uint *)(plVar11 + 1) >> 0x1c & 1) == 0) goto LAB_140003767;
  plVar9 = (longlong *)FUN_142840154(plVar11);
LAB_14000378a:
  plVar10 = local_348;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)plVar11[4];
    goto LAB_140003767;
  }
  if (plVar9 == DAT_14c951640) {
    local_298._0_8_ = local_348[3];
    FUN_1400021e4(local_298,local_2f8);
    if (local_258._0_8_ != 0) {
      FUN_1400020a8();
    }
    local_258 = _local_2f8;
    plVar10 = local_348;
  }
  else {
    FUN_1401031ac(local_348,plVar9,local_258);
  }
  local_2f8._0_8_ = *(undefined8 *)(plVar10[2] + 0x18);
  FUN_1400021e4(local_2f8,local_298);
  lVar7 = (longlong)(int)local_258._8_4_;
  local_2a8 = (void *)0x0;
  uVar3 = local_258._0_8_;
  uStack_2a0 = CONCAT44(uStack_2a0._4_4_,local_258._8_4_);
  FUN_1446dd670(&local_2a8,(uint)(lVar7 == 0) + local_258._8_4_ + 1,0);
  if (lVar7 != 0) {
    memcpy(local_2a8,(void *)uVar3,lVar7 * 2);
  }
  FUN_1400020e8(&local_2a8,&DAT_149e001d8,1);
  FUN_1401c7f3e(local_2f8,&local_2a8);
  if (local_288._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_288 = _local_2f8;
  _local_2f8 = (undefined1  [16])0x0;
  if (local_2a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_298._0_8_ != 0) {
    FUN_1400020a8();
  }
  _local_2f8 = ZEXT816(0);
  (**(code **)(*local_348 + 0x240))(local_348,local_2f8);
  if ((uint)local_2f8._8_4_ < 2) {
LAB_140003943:
    local_2a8 = (void *)0x0;
    uStack_2a0 = 0;
    FUN_1401031ac(local_348[2],0);
    lVar7 = (longlong)(int)local_258._8_4_;
    local_2b8 = (undefined2 *)0x0;
    uVar3 = local_258._0_8_;
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,local_258._8_4_);
    FUN_1446dd670(&local_2b8,(uint)(lVar7 == 0) + local_258._8_4_ + 1,0);
    if (lVar7 != 0) {
      memcpy(local_2b8,(void *)uVar3,lVar7 * 2);
    }
    FUN_1400020e8(&local_2b8,&DAT_149e001d8,1);
    FUN_1401c7f3e(local_298,&local_2b8,&local_2a8);
    local_338 = local_298._0_8_;
    local_328 = (ulonglong)(uint)local_298._8_4_;
    local_298 = (undefined1  [16])0x0;
    if (local_2b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_2a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar29 = local_2f8._0_8_ != 0;
    if (bVar29) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_2f8._8_4_ == local_288._8_4_) {
      if (1 < (int)local_2f8._8_4_) {
        lVar7 = 0;
        while( true ) {
          uVar26 = *(ushort *)(local_2f8._0_8_ + lVar7);
          uVar16 = (ulonglong)uVar26;
          uVar28 = *(ushort *)(local_288._0_8_ + lVar7);
          if (uVar26 != uVar28) break;
          if (uVar26 == 0) goto LAB_140003943;
LAB_140004d68:
          lVar7 = lVar7 + 2;
        }
        if ((uVar28 | uVar26) < 0x80) {
          uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          uVar13 = (ulonglong)uVar28;
          uVar28 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar13]) goto LAB_140004d68;
        }
        if (uVar26 != uVar28) goto LAB_140004dab;
      }
      goto LAB_140003943;
    }
    if (local_288._8_4_ + local_2f8._8_4_ == 1) goto LAB_140003943;
LAB_140004dab:
    uVar23 = local_2f8._8_4_;
    if (local_288._0_8_ != 0) {
      FUN_1400020a8();
      uVar23 = local_2f8._8_4_;
    }
    auVar31 = _local_2f8;
    local_288._0_8_ = local_2f8._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = stack0xfffffffffffffd10;
    _local_2f8 = auVar2 << 0x40;
    auVar2 = _local_2f8;
    local_288._8_4_ = uVar23;
    uStack_2ec = auVar31._12_4_;
    local_288._12_4_ = uStack_2ec;
    local_328 = 0;
    local_338 = 0;
    _local_2f8 = auVar2;
  }
  if (local_258._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_140003a4a:
  local_298._8_8_ = &local_269;
  local_298._0_8_ = &local_278;
  plVar9 = *(longlong **)(param_2 + 0x70);
  plVar11 = local_348;
  local_318 = param_2;
  if (plVar9 != (longlong *)0x0) {
    local_33d = (byte)local_33c ^ 1;
LAB_140003a98:
    uVar16 = plVar9[7];
    if ((plVar9 == param_5 || param_5 == (longlong *)0x0) && ((uint)uVar16 >> 0xe & 1) != 0) {
      lVar7 = FUN_14496b3f0(plVar9);
      if ((char)local_33c == '\0') {
        lVar8 = local_318;
        if ((uVar16 & 0x40000) != 0) {
          lVar8 = lVar7;
        }
        local_258 = ZEXT816(0);
        FUN_1401031ac(lVar8,0,local_258);
        if (local_288._0_8_ != 0) {
          FUN_1400020a8();
        }
        local_288 = local_258;
LAB_140003b29:
        lVar25 = lVar8;
        lVar8 = lVar25;
        if (*(longlong *)(lVar25 + 0x20) != 0) goto code_r0x000140003b38;
        goto LAB_140003b49;
      }
      goto LAB_140003b69;
    }
    goto LAB_1400044ac;
  }
LAB_140004c89:
  if ((local_31c & 8) != 0) {
    (**(code **)(*plVar11 + 0x168))(plVar11,param_5);
  }
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  if (local_288._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_1409263a6(local_138);
LAB_140004ce1:
  if (local_268[0] != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140004ceb:
  if ((local_60 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400051de FUN_1400051de body=689 status=ok
// SIG undefined FUN_1400051de(void)

void FUN_1400051de(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined2 *local_68;
  int local_60;
  code *local_58;
  undefined1 local_50 [8];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_1 != 0) {
    FUN_1400021e4(param_1,&local_68);
    puVar4 = local_68;
    if (local_60 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    if (DAT_14c949118 == 0) {
      local_58 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar3 = FUN_140011aa6();
        lVar2 = FUN_140011c0e(uVar3,0x250,8);
      }
      else {
        lVar2 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar2;
      FUN_1446f470e(local_50,L"Class",1);
      local_80 = &local_58;
      local_88 = &LAB_146891e90;
      local_90 = (code *)&LAB_146273097;
      local_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x20;
      local_b0 = 0x10000000;
      local_b8._0_4_ = 8;
      FUN_14574b4b2(lVar2);
      DAT_14c949118 = lVar2;
      if (DAT_14c951858 == 0) {
        local_80 = &local_48;
        local_48 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_1468c5283;
        local_90 = FUN_142809da0;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x400000000;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000000);
        local_b0 = 8;
        local_b8._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar1 = DAT_14c951858;
      lVar2 = DAT_14c949118;
      uVar3 = FUN_1449e2fb2();
      local_b8 = L"Class";
      FUN_14574b446(uVar3,lVar2,lVar1,L"/Script/CoreUObject");
    }
    lVar2 = FUN_140277b32(DAT_14c949118,0,puVar4,0);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      param_1[2] = lVar2;
      param_2 = lVar2;
    }
  }
  if (param_1[1] != 0) {
    lVar2 = FUN_1400796d0(param_2,param_1[1],1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[3] = lVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140005490 FUN_140005490 body=85 status=ok
// SIG undefined FUN_140005490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140005490(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  
  while( true ) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      return *(longlong *)(param_1 + 0x118);
    }
    if (param_2 != '\x01') break;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (lVar6 == 0) {
      if (*(longlong *)(param_1 + 0x120) == 0) {
        return 0;
      }
      goto code_r0x000140380c2e;
    }
    plVar1 = (longlong *)(param_1 + 0x120);
    param_2 = '\x01';
    param_1 = lVar6;
    if (*plVar1 != *(longlong *)(lVar6 + 0x120)) {
      lVar6 = FUN_140380c2e();
      return lVar6;
    }
  }
  if (param_2 != '\0') {
    return 0;
  }
code_r0x000140380c2e:
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 != 0) {
    uVar7 = FUN_14001cc68((longlong)
                          (int)(-*(int *)(lVar6 + 0x5c) &
                               (*(int *)(lVar6 + 0x5c) + *(int *)(lVar6 + 0x58)) - 1U));
    *(undefined8 *)(param_1 + 0x118) = uVar7;
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x2e8))(*(longlong **)(param_1 + 0x120),uVar7,1)
    ;
  }
  if (*(longlong *)(param_1 + 0x118) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) goto LAB_140380d23;
  lVar6 = FUN_140005490(*(longlong *)(param_1 + 0x40),1);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (lVar6 == 0) goto LAB_140380d23;
    lVar11 = *(longlong *)(param_1 + 0x120);
LAB_140380cec:
    lVar9 = 0;
LAB_140380cee:
    lVar10 = lVar11;
    if ((lVar10 == 0) ||
       ((*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
         lVar10 + 0x30)))) goto LAB_140380d23;
  }
  else {
    if (lVar6 == 0) goto LAB_140380d23;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120);
    lVar11 = *(longlong *)(param_1 + 0x120);
    if (lVar10 == 0) goto LAB_140380cec;
    lVar9 = lVar10;
    if ((*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30)) goto LAB_140380cee;
  }
  FUN_1449b16b6(lVar10,*(undefined8 *)(param_1 + 0x118),lVar6,1);
LAB_140380d23:
  uVar7 = *(undefined8 *)(param_1 + 0x118);
  uVar2 = *(undefined8 *)(param_1 + 0x120);
  uVar8 = (ulonglong)DAT_14c9646b8;
  if (0 < (longlong)uVar8) {
    bVar12 = false;
    DAT_14c9646c4 = DAT_14c9646c4 + 1;
    do {
      lVar6 = uVar8 * 0x10 + -8;
      uVar14 = uVar8;
      while (((*(int *)(DAT_14c9646b0 + lVar6) != 0 &&
              (plVar1 = *(longlong **)(DAT_14c9646b0 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,uVar2,uVar7), cVar5 != '\0'))) {
        lVar6 = lVar6 + -0x10;
        bVar3 = uVar14 < 2;
        uVar14 = uVar14 - 1;
        if (bVar3) {
          DAT_14c9646c4 = DAT_14c9646c4 + -1;
          if (bVar12) goto LAB_140380dd3;
          goto LAB_140380d52;
        }
      }
      uVar8 = uVar14 - 1;
      bVar12 = true;
    } while (1 < uVar14);
    DAT_14c9646c4 = DAT_14c9646c4 + -1;
LAB_140380dd3:
    iVar4 = DAT_14c9646b8;
    if (DAT_14c9646c4 < 1) {
      if (0 < DAT_14c9646b8) {
        iVar13 = 0;
        do {
          if (((*(int *)(DAT_14c9646b0 + 8 + (longlong)iVar13 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(DAT_14c9646b0 + (longlong)iVar13 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar1 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(&DAT_14c9646b0,iVar13);
            FUN_14005b248(&DAT_14c9646b0);
          }
          else {
            iVar13 = iVar13 + 1;
          }
        } while (iVar13 < DAT_14c9646b8);
      }
      _DAT_14c9646c0 = 2;
      if (2 < DAT_14c9646b8 * 2) {
        _DAT_14c9646c0 = DAT_14c9646b8 * 2;
      }
      if ((_DAT_14c9646c0 < iVar4) && (DAT_14c9646bc != DAT_14c9646b8)) {
        FUN_14045812c(&DAT_14c9646b0);
      }
    }
  }
LAB_140380d52:
  return *(longlong *)(param_1 + 0x118);
}



// FUNCTION 1400054e6 FUN_1400054e6 body=48 status=ok
// SIG undefined FUN_1400054e6(void)

void FUN_1400054e6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 140005516 FUN_140005516 body=307 status=ok
// SIG undefined FUN_140005516(void)

void FUN_140005516(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400055aa;
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
LAB_1400055aa:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14000564a FUN_14000564a body=516 status=ok
// SIG undefined FUN_14000564a(void)

undefined8 * FUN_14000564a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacc050) && (FUN_144b3d300(&DAT_14cacc050), DAT_14cacc050 == -1)) {
    DAT_14cacc04c = -1;
    _Init_thread_footer(&DAT_14cacc050);
  }
  if (DAT_14cacc04c == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacc060) && (FUN_144b3d300(), DAT_14cacc060 == -1)) {
      FUN_1446ddc76(&DAT_14cacc058,"LayerGroup",1);
      _Init_thread_footer();
    }
    if (DAT_14cacbe68 == 0) {
      uVar5 = FUN_140002dac();
      DAT_14cacbe68 = FUN_140002ddd(FUN_1463a5816,uVar5,L"AnimNode_Root");
    }
    plVar7 = *(longlong **)(param_1 + 8);
    if (plVar7 == (longlong *)0x0) {
      DAT_14cacc04c = -1;
    }
    else {
      if (*plVar7 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)plVar7[1];
      }
      DAT_14cacc04c = (**(code **)(*plVar7 + 0x130))(plVar7,DAT_14cacbe68,DAT_14cacc058);
    }
  }
  plVar7 = *(longlong **)(param_1 + 8);
  lVar6 = *plVar7;
  uVar1 = *(uint *)(plVar7[2] + (longlong)DAT_14cacc04c * 4);
  uVar8 = uVar1 & 0x7fffffff;
  if ((int)uVar1 < 0) {
    if (lVar6 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)plVar7[1];
    }
    lVar2 = plVar7[4];
    if (*(code **)(*plVar4 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar4 = plVar4 + 0x12;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
      lVar6 = *plVar7;
    }
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)plVar7[1];
    }
    puVar3 = (undefined8 *)
             (**(code **)(*plVar7 + 0x108))
                       (plVar7,uVar8,
                        param_1 - *(int *)(*(longlong *)(*plVar4 + (longlong)(int)lVar2 * 8) + 0x44)
                       );
  }
  else {
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)plVar7[1];
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar7 + 0x100))(plVar7,uVar8);
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 14000584e FUN_14000584e body=138 status=ok
// SIG undefined FUN_14000584e(void)

ulonglong FUN_14000584e(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined7 uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  param_2 = param_2 & 0xffffffff;
  if (((*param_1 & 0x6b) != 1) || (pbVar2 = *(byte **)(param_1 + 8), pbVar2 == (byte *)0x0))
  goto LAB_14000586d;
  bVar1 = *pbVar2;
  uVar3 = (undefined7)(param_2 >> 8);
  if (bVar1 != 0x74) {
    uVar5 = (ulonglong)(bVar1 - 0x30);
    if (bVar1 - 0x30 < 0x40) {
      if ((0x4040000040400001U >> (uVar5 & 0x3f) & 1) != 0) {
        param_2 = 0;
        goto LAB_14000586d;
      }
      if ((0x21000000002U >> (uVar5 & 0x3f) & 1) != 0) goto LAB_14000586b;
      if ((0x8000000080000000U >> (uVar5 & 0x3f) & 1) != 0) {
        bVar1 = (byte)(pbVar2[1] + 0xba) >> 3;
        bVar4 = (pbVar2[1] + 0xba) * ' ' | bVar1;
        if ((bVar4 < 6) && ((0x33U >> (bVar4 & 0x1f) & 1) != 0)) {
          param_2 = CONCAT71(uVar3,0x22 >> bVar1);
        }
        goto LAB_14000586d;
      }
    }
    if (bVar1 != 0x79) goto LAB_14000586d;
  }
LAB_14000586b:
  param_2 = CONCAT71(uVar3,1);
LAB_14000586d:
  return param_2 & 0xffffffffffffff01;
}



// FUNCTION 1400058d8 FUN_1400058d8 body=120 status=ok
// SIG undefined FUN_1400058d8(void)

undefined8 * FUN_1400058d8(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0f10) {
    FUN_144b3d300(&DAT_14c9a0f10);
    if (DAT_14c9a0f10 == -1) {
      FUN_1446ddc76(&DAT_14c9a0f08,&DAT_149e59cc2,1);
      _Init_thread_footer(&DAT_14c9a0f10);
    }
  }
  *param_1 = DAT_14c9a0f08;
  return param_1;
}



// FUNCTION 140005950 FUN_140005950 body=71 status=ok
// SIG undefined FUN_140005950(void)

longlong FUN_140005950(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if ((int)puVar1[1] == *(int *)((longlong)puVar1 + 0x34)) {
      return 0;
    }
    uVar3 = *puVar1;
  }
  else {
    if ((int)puVar1[1] == *(int *)((longlong)puVar1 + 0x24)) {
      return 0;
    }
    uVar2 = *puVar1;
    uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)puVar1;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2;
    }
  }
  return (longlong)*(int *)(*param_2 + 0x2c) * (longlong)(int)param_2[1] + uVar3;
}



// FUNCTION 140005997 FUN_140005997 body=120 status=ok
// SIG undefined FUN_140005997(void)

undefined8 * FUN_140005997(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0f20) {
    FUN_144b3d300(&DAT_14c9a0f20);
    if (DAT_14c9a0f20 == -1) {
      FUN_1446ddc76(&DAT_14c9a0f18,"Value",1);
      _Init_thread_footer(&DAT_14c9a0f20);
    }
  }
  *param_1 = DAT_14c9a0f18;
  return param_1;
}



// FUNCTION 140005a10 FUN_140005a10 body=692 status=ok
// SIG undefined FUN_140005a10(void)

undefined8 FUN_140005a10(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68 [2];
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  lVar6 = DAT_14c9a1ab0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)*(short *)((byte *)*param_1 + 0x20);
  if (((iVar3 < 0) || ((*(byte *)*param_1 & 3) != 1)) || (DAT_14c9a1ab0 == 0)) {
LAB_140005ae4:
    uVar7 = 0;
    goto LAB_140005ae6;
  }
  if (iVar3 == 0x7fff) {
    pcVar8 = "Asset";
  }
  else if (((*(int *)(DAT_14c9a1ab0 + 0xd0) <= iVar3) ||
           (lVar5 = *(longlong *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (longlong)iVar3 * 8),
           lVar5 == 0)) || (pcVar8 = *(char **)(lVar5 + 0xb8), pcVar8 == (char *)0x0))
  goto LAB_140005ae4;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddda2(local_68,pcVar8,0);
  uVar4 = FUN_1448f0e18(lVar6,local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)*param_1 & 3) == 1) {
    uVar7 = *(undefined8 *)((byte *)*param_1 + 8);
  }
  else {
    uVar7 = 0;
  }
  FUN_1417387cc(&local_70,uVar7);
  local_68[0] = 0;
  FUN_140076e46(uVar4,local_70,local_68);
  lVar6 = local_68[0];
  if (local_68[0] == 0) {
LAB_140005bde:
    lVar5 = *(longlong *)(param_2 + 0x70);
  }
  else {
    if ((*(uint *)(local_68[0] + 8) & 0x809f600) == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c949388) {
        FUN_144b3d300(&DAT_14c949388);
        if (DAT_14c949388 == -1) {
          FUN_1446f470e(local_68,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_68[0]);
          _Init_thread_footer(&DAT_14c949388);
        }
      }
      if (((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
           == DAT_14c949380 + 0x30 &&
          (plVar1 = *(longlong **)(lVar6 + 0xb8), plVar1 != (longlong *)0x0)))) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          lVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          if (lVar5 != 0) goto LAB_140005bde;
        }
      }
    }
    lVar5 = *(longlong *)(param_2 + 0x70);
    lVar6 = lVar5;
  }
  if ((lVar5 != 0) &&
     (((lVar6 == 0 || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)))) {
    lVar6 = lVar5;
  }
  lVar6 = FUN_14477b664(lVar6);
  if (*param_3 != local_70) {
    param_3[2] = 0;
  }
  *param_3 = local_70;
  if (param_3[1] != lVar6) {
    param_3[2] = 0;
  }
  uVar7 = FUN_14477b664(lVar6);
  lVar6 = FUN_14477b664(uVar7);
  param_3[1] = lVar6;
  param_3[2] = 0;
  uVar7 = 1;
LAB_140005ae6:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140005cc6 FUN_140005cc6 body=644 status=ok
// SIG undefined FUN_140005cc6(void)

ulonglong FUN_140005cc6(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined2 **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined2 *local_48;
  char local_40;
  undefined7 uStack_3f;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((byte *)*param_1 != (byte *)0x0) && ((*(byte *)*param_1 & 0x6b) == 3)) {
    FUN_140006e7f(&local_48,param_1,param_3,0);
    puVar4 = local_48;
    unaff_RBX = param_1;
    if (((local_40 == '\x01') && (local_48 != (undefined2 *)0x0)) &&
       ((param_3 == 0 ||
        ((*(int *)(param_3 + 0x38) <= *(int *)(local_48 + 0x1c) &&
         (*(longlong *)(*(longlong *)(local_48 + 0x18) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
          param_3 + 0x30)))))) {
      if (DAT_14c9a0828 == 0) {
        local_48 = &DAT_1427db2a2;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_146271292;
        local_78 = &LAB_14708904b;
        local_80 = &LAB_145aff100;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0xd0;
        local_70 = &local_48;
        FUN_14081cfa3(L"/Script/GbxNexus",L"NexusScriptStruct",&DAT_14c9a0828,&DAT_14708904a);
      }
      if ((*(int *)(*(longlong *)(puVar4 + 8) + 0x38) < *(int *)(DAT_14c9a0828 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(puVar4 + 8) + 0x30) +
           (longlong)*(int *)(DAT_14c9a0828 + 0x38) * 8) != DAT_14c9a0828 + 0x30)) {
        FUN_140005f6c(param_2,puVar4,0,param_4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
      }
      *(undefined1 *)(puVar4 + 0x66) = 1;
      FUN_140005f6c(param_2,puVar4,0,param_4);
      *(undefined1 *)(puVar4 + 0x66) = 0;
      FUN_1400073ce(puVar4,local_58);
      local_a8 = local_a8 & 0xffffff00;
      FUN_140008518(&local_48,param_1,local_58,0);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      uVar6 = FUN_140565f07(*(undefined8 *)(puVar4 + 0x20));
      uVar5 = FUN_1446e7478(&local_48,*param_2,uVar6,0);
      uVar7 = (ulonglong)uVar5;
      plVar3 = (longlong *)CONCAT71(uStack_3f,local_40);
      if (plVar3 != (longlong *)0x0) {
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
      goto LAB_140005e8d;
    }
  }
  FUN_140a3e398(param_2);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(DAT_14c9a1268 & 4) == 0);
LAB_140005e8d:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140005f6c FUN_140005f6c body=1151 status=ok
// SIG undefined FUN_140005f6c(void)

void FUN_140005f6c(longlong *param_1,longlong *param_2,char param_3,byte param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_88 [43];
  char local_5d;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)(param_1 + 2);
  cVar9 = FUN_1400063ec(puVar1);
  if ((cVar9 == '\x01' && param_3 == '\0') && (param_1[1] != 0)) {
    bVar19 = *(int *)(param_1[1] + 8) == 1;
  }
  else {
    bVar19 = false;
  }
  if (param_2 == (longlong *)0x0) {
LAB_1400061ac:
    param_1[2] = 0;
    *param_1 = 0;
    plVar18 = (longlong *)param_1[1];
    if (plVar18 == (longlong *)0x0) goto LAB_140006168;
    param_1[1] = 0;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c949388) && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
      FUN_1446f470e(&local_50,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_50);
      _Init_thread_footer(&DAT_14c949388);
    }
    if (((DAT_14c949380 == 0) || ((int)param_2[7] < *(int *)(DAT_14c949380 + 0x38))) ||
       (*(longlong *)(param_2[6] + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) !=
        DAT_14c949380 + 0x30)) goto LAB_1400061ac;
    uVar6 = *(uint *)((longlong)param_2 + 0xc);
    *puVar1 = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar10 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar10 = *(int *)(lVar14 + 0x10);
      bVar20 = iVar10 == 0;
      if (bVar20) {
        *(int *)(lVar14 + 0x10) = iVar17;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar10 = iVar17;
      }
    }
    *(int *)((longlong)param_1 + 0x14) = iVar10;
    if (param_3 == '\0') {
      plVar18 = (longlong *)0x0;
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = (longlong *)*param_1;
      plVar18 = (longlong *)param_1[1];
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
    }
    if (bVar19) {
      puVar8 = (undefined8 *)*param_1;
      plVar11 = (longlong *)0x0;
      (**(code **)*puVar8)(puVar8,0);
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        uVar6 = *puVar1;
        plVar11 = (longlong *)0x0;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
          puVar13 = (undefined8 *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          if ((puVar13 == (undefined8 *)0x0) ||
             ((*(int *)(puVar13 + 2) != *(int *)((longlong)param_1 + 0x14) ||
              ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)*puVar13;
          }
        }
      }
      (**(code **)(*plVar11 + 0x2e8))(plVar11,puVar8,1);
    }
    else {
      iVar10 = *(int *)((longlong)param_2 + 0x5c);
      uVar16 = -(longlong)iVar10 & (longlong)iVar10 + 0x17U;
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar3 = (undefined4 *)(lVar14 + 0xc7c);
      local_5c = *puVar3;
      pbVar4 = (byte *)(lVar14 + 0xc80);
      bVar5 = *pbVar4;
      if ((param_4 & bVar5) == 1) {
        *pbVar4 = 0;
        *puVar3 = 1;
      }
      local_5d = param_3;
      local_58 = plVar15;
      plVar11 = (longlong *)
                FUN_14001cc68((longlong)(int)(-iVar10 & ((int)param_2[0xb] + iVar10) - 1U) + uVar16)
      ;
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_149e61a00;
      plVar11[2] = uVar16;
      (**(code **)(*param_2 + 0x2e8))(param_2,uVar16 + (longlong)plVar11,1);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar11 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
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
      plVar15 = local_58;
      param_3 = local_5d;
      if ((param_4 & bVar5) != 0) {
        *puVar3 = local_5c;
        *pbVar4 = 1;
      }
      *param_1 = uVar16 + (longlong)plVar11;
      plVar7 = (longlong *)param_1[1];
      if (plVar11 == plVar7) {
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar11 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              lVar14 = *plVar11;
              goto LAB_14000628c;
            }
          }
        }
      }
      else {
        param_1[1] = (longlong)plVar11;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar7 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              lVar14 = *plVar7;
              plVar11 = plVar7;
LAB_14000628c:
              (**(code **)(lVar14 + 0x10))(plVar11);
            }
          }
        }
      }
    }
    if (param_3 == '\x01' && plVar15 != (longlong *)0x0) {
      lVar14 = *param_1;
      uVar12 = (**(code **)(*plVar15 + 8))(plVar15);
      FUN_144a54316(uVar12,plVar15,param_2,lVar14);
    }
    if (plVar18 == (longlong *)0x0) goto LAB_140006168;
  }
  LOCK();
  plVar15 = plVar18 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar2 = (int *)((longlong)plVar18 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
LAB_140006168:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400063ec FUN_1400063ec body=316 status=ok
// SIG undefined FUN_1400063ec(void)

bool FUN_1400063ec(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 140006528 FUN_140006528 body=1611 status=ok
// SIG undefined FUN_140006528(void)

ulonglong FUN_140006528(uint param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  DWORD DVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStack_198 [40];
  uint local_170;
  uint local_16c;
  ulonglong local_168;
  uint *local_160;
  uint local_154;
  uint local_150;
  int local_14c;
  uint *local_148;
  undefined8 local_140;
  uint *local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_100 [12];
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  DVar2 = DAT_14c949610;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_1;
  local_140 = param_3;
  if ((DAT_14c949610 == 0) || (DVar4 = GetCurrentThreadId(), DVar2 != DVar4)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
  }
  else {
    DAT_14c949614 = DAT_14c949614 + 1;
  }
  if ((longlong)DAT_14c949600 == 0) {
    uVar26 = 0;
  }
  else {
    local_138 = DAT_14c9495f8 + (longlong)DAT_14c949600 * 0x18;
    local_154 = local_170 & 0xffff | 0x80;
    uVar26 = 0;
    puVar11 = DAT_14c9495f8;
    do {
      uVar16 = *puVar11;
      local_160 = puVar11;
      if ((((local_154 & uVar16) != 0) && (((uVar16 ^ local_170) & 0xff0000) == 0)) ||
         ((uVar16 & 0xff0040) == 0x40 && (local_170 & 0x20040) == 0)) {
        if ((uVar16 & 0x3000000) == 0) {
          puVar22 = puVar11 + 6;
          uVar18 = puVar11[0xc];
          uVar19 = (ulonglong)uVar18;
          if (uVar18 == 0) {
            uVar14 = 1;
            uVar24 = 0;
            iVar12 = 0;
            uVar7 = 0;
          }
          else {
            puVar6 = *(uint **)(puVar11 + 10);
            if (*(uint **)(puVar11 + 10) == (uint *)0x0) {
              puVar6 = puVar22;
            }
            uVar7 = *puVar6;
            if (uVar7 == 0) {
              iVar12 = uVar18 + 0x1e;
              if (-1 < (int)(uVar18 - 1)) {
                iVar12 = uVar18 - 1;
              }
              uVar24 = 0;
              uVar14 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar14 = uVar24;
              }
              iVar12 = 0;
              do {
                if (uVar14 == uVar24) goto LAB_140006837;
                iVar12 = iVar12 + 0x20;
                uVar7 = puVar6[uVar24 + 1];
                uVar24 = uVar24 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar24 = 0;
              iVar12 = 0;
            }
            uVar14 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar14 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            uVar7 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if ((int)uVar18 <= (int)uVar7) {
              uVar7 = uVar18;
            }
          }
          if (uVar7 != uVar18) {
            uVar16 = uVar16 >> 6 & 2;
            uVar21 = 0xffffffff;
            local_16c = uVar16;
            local_148 = puVar22;
            local_130 = uVar19;
            do {
              lVar25 = (longlong)
                       *(int *)(*(longlong *)(local_160 + 2) + 0x10 + (longlong)(int)uVar7 * 0x20);
              if (lVar25 != 0) {
                lVar25 = lVar25 * 0xa0;
                lVar13 = *(longlong *)
                          (*(longlong *)(local_160 + 2) + 8 + (longlong)(int)uVar7 * 0x20) + 0x50;
                local_168 = uVar26;
                local_150 = uVar21;
                local_14c = iVar12;
                local_128 = uVar14;
                local_120 = uVar24;
                do {
                  cVar3 = FUN_1446e8c9a((undefined8 *)(lVar13 + -0x34),param_2,uVar16);
                  if (cVar3 != '\0') {
                    puVar17 = (undefined8 *)(lVar13 + -0x50);
                    puVar20 = (undefined8 *)local_100;
                    for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                      *puVar20 = *puVar17;
                      puVar17 = puVar17 + 1;
                      puVar20 = puVar20 + 1;
                    }
                    local_b8 = *(undefined4 *)(lVar13 + -8);
                    local_90 = 0;
                    local_88 = 0;
                    local_b0 = 0;
                    uStack_a8 = 0;
                    local_84 = 0xffffffff00000080;
                    local_7c = 0;
                    local_70 = 0;
                    local_68 = 0;
                    FUN_14058acb2(&local_b0,lVar13);
                    local_ec = *(undefined8 *)(lVar13 + -0x24);
                    local_100._4_8_ = *(undefined8 *)(lVar13 + -0x34);
                    uStack_f4 = *(undefined8 *)(lVar13 + -0x2c);
                    local_e4 = *(undefined4 *)(lVar13 + -0x4c);
                    uStack_e0 = *(undefined4 *)(lVar13 + -0x48);
                    uStack_dc = *(undefined4 *)(lVar13 + -0x44);
                    uStack_d8 = *(undefined4 *)(lVar13 + -0x40);
                    local_d4 = *(undefined8 *)(lVar13 + -0x3c);
                    FUN_1404d4814(local_100,&local_118,param_2);
                    if (((local_118 == *param_2) && (local_110 == param_2[1])) &&
                       (local_108 == param_2[2])) {
                      bVar15 = 0;
                    }
                    else {
                      FUN_1404d501c(local_140,&local_118);
                      bVar15 = 1;
                    }
                    local_68 = 0;
                    if (local_70 != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1407a3a68(&local_b0);
                    local_168 = CONCAT71((int7)(local_168 >> 8),(byte)local_168 | bVar15);
                    uVar16 = local_16c;
                  }
                  lVar13 = lVar13 + 0xa0;
                  lVar25 = lVar25 + -0xa0;
                } while (lVar25 != 0);
                uVar18 = local_160[0xc];
                uVar14 = local_128;
                uVar19 = local_130;
                puVar22 = local_148;
                uVar24 = local_120;
                uVar26 = local_168;
                uVar21 = local_150;
                iVar12 = local_14c;
              }
              uVar21 = uVar21 & ~(uint)uVar14;
              puVar11 = *(uint **)(local_160 + 10);
              if (*(uint **)(local_160 + 10) == (uint *)0x0) {
                puVar11 = puVar22;
              }
              iVar23 = (int)uVar24;
              lVar25 = (longlong)iVar23;
              uVar7 = puVar11[lVar25] & uVar21;
              if (uVar7 == 0) {
                iVar8 = uVar18 + 0x1e;
                if (-1 < (int)(uVar18 - 1)) {
                  iVar8 = uVar18 - 1;
                }
                iVar8 = iVar8 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar9 = iVar8;
                if (iVar8 < iVar23) {
                  iVar9 = iVar23;
                }
                if (iVar23 < iVar8) {
                  lVar13 = 0;
                  do {
                    uVar7 = puVar11[lVar25 + lVar13 + 1];
                    if (uVar7 != 0) {
                      uVar24 = (ulonglong)(iVar23 + (int)lVar13 + 1);
                      uVar21 = 0xffffffff;
                      goto LAB_140006aa7;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar13 = lVar13 + 1;
                  } while (iVar9 - lVar25 != lVar13);
                  uVar21 = 0xffffffff;
                  iVar23 = iVar9;
                }
                uVar24 = (ulonglong)(iVar23 + 1);
                puVar22 = local_148;
                uVar7 = uVar18;
              }
              else {
LAB_140006aa7:
                uVar14 = (ulonglong)(-uVar7 & uVar7);
                uVar1 = uVar14 * 2 + 1;
                lVar25 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                uVar7 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                if ((int)uVar18 <= (int)uVar7) {
                  uVar7 = uVar18;
                }
              }
            } while (uVar7 != (uint)uVar19);
          }
        }
        else {
          plVar5 = *(longlong **)(puVar11 + 0x16);
          uVar18 = 4;
          if ((uVar16 & 0x3000000) != 0x3000000) {
            if ((uVar16 >> 0x18 & 1) == 0) {
              plVar5 = plVar5 + 4;
              uVar18 = (uVar16 & 0x2000000) >> 0x15;
              if ((uVar16 & 0x2000000) == 0) {
                plVar5 = (longlong *)0x0;
              }
            }
            else {
              plVar5 = plVar5 + 2;
              uVar18 = 8;
            }
          }
          if ((longlong)(int)plVar5[1] != 0) {
            lVar25 = (longlong)(int)plVar5[1] * 0xa0;
            lVar13 = *plVar5 + 0x50;
            local_16c = uVar18;
            do {
              cVar3 = FUN_1446e8c9a((undefined8 *)(lVar13 + -0x34),param_2,uVar18);
              if (cVar3 != '\0') {
                puVar17 = (undefined8 *)(lVar13 + -0x50);
                puVar20 = (undefined8 *)local_100;
                for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar20 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar20 = puVar20 + 1;
                }
                local_b8 = *(undefined4 *)(lVar13 + -8);
                local_90 = 0;
                local_88 = 0;
                local_b0 = 0;
                uStack_a8 = 0;
                local_84 = 0xffffffff00000080;
                local_7c = 0;
                local_70 = 0;
                local_68 = 0;
                local_168 = uVar26;
                FUN_14058acb2(&local_b0,lVar13);
                local_ec = *(undefined8 *)(lVar13 + -0x24);
                local_100._4_8_ = *(undefined8 *)(lVar13 + -0x34);
                uStack_f4 = *(undefined8 *)(lVar13 + -0x2c);
                local_e4 = *(undefined4 *)(lVar13 + -0x4c);
                uStack_e0 = *(undefined4 *)(lVar13 + -0x48);
                uStack_dc = *(undefined4 *)(lVar13 + -0x44);
                uStack_d8 = *(undefined4 *)(lVar13 + -0x40);
                local_d4 = *(undefined8 *)(lVar13 + -0x3c);
                FUN_1404d4814(local_100,&local_118,param_2);
                if (((local_118 == *param_2) && (local_110 == param_2[1])) &&
                   (local_108 == param_2[2])) {
                  bVar15 = 0;
                }
                else {
                  FUN_1404d501c(local_140,&local_118);
                  bVar15 = 1;
                }
                uVar26 = local_168;
                local_68 = 0;
                if (local_70 != 0) {
                  FUN_1400020a8();
                }
                FUN_1407a3a68(&local_b0);
                uVar26 = CONCAT71((int7)(uVar26 >> 8),(byte)uVar26 | bVar15);
                uVar18 = local_16c;
              }
              lVar13 = lVar13 + 0xa0;
              lVar25 = lVar25 + -0xa0;
            } while (lVar25 != 0);
          }
        }
      }
LAB_140006837:
      puVar11 = local_160 + 0x18;
    } while (puVar11 != local_138);
  }
  if (DAT_14c949614 < 1) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c949608);
  }
  else {
    GetCurrentThreadId();
    DAT_14c949614 = DAT_14c949614 + -1;
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26 & 0xffffff01;
}



// FUNCTION 140006b74 FUN_140006b74 body=778 status=ok
// SIG undefined FUN_140006b74(void)

ulonglong FUN_140006b74(longlong *param_1,longlong *param_2,byte param_3,byte param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  undefined7 uVar5;
  undefined1 auStack_4b8 [40];
  longlong local_490;
  int local_488;
  undefined1 *local_480;
  int local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  undefined1 *local_460;
  char local_458;
  undefined1 local_450 [1035];
  undefined1 local_45 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  puVar1 = (undefined1 *)*param_1;
  iVar3 = (int)(param_2[1] - *param_2);
  if ((puVar1 == (undefined1 *)0x0) || ((param_2[1] - *param_2 & 0xffffffffU) == 0)) {
    if ((puVar1 == (undefined1 *)0x0) != (iVar3 == 0)) {
      uVar4 = 0;
      if (((puVar1 != (undefined1 *)0x0 | param_3) != 1) ||
         (unaff_RBP = 0, iVar3 == 0 && param_4 == 0)) goto LAB_140006e2e;
    }
LAB_140006c74:
    uVar4 = unaff_RBP;
    puVar1 = (undefined1 *)param_1[1];
    iVar3 = (int)(param_2[0x87] - param_2[0x86]);
    if ((puVar1 == (undefined1 *)0x0) || ((param_2[0x87] - param_2[0x86] & 0xffffffffU) == 0)) {
      if ((puVar1 == (undefined1 *)0x0) != (iVar3 == 0)) {
        uVar4 = 0;
        if (((puVar1 != (undefined1 *)0x0 | param_3) != 1) || (iVar3 == 0 && param_4 == 0))
        goto LAB_140006e2e;
      }
    }
    else {
      local_470 = local_450;
      local_458 = '\0';
      local_460 = local_45;
      local_480 = puVar1;
      local_468 = local_470;
      FUN_14001b87a(&local_480,&local_470);
      local_478 = (int)local_468 - (int)local_470;
      local_480 = local_470;
      local_490 = param_2[0x86];
      local_488 = (int)param_2[0x87] - (int)local_490;
      uVar2 = FUN_140186866(&local_490,&local_480,1);
      uVar4 = (ulonglong)uVar2;
      if (local_458 == '\x01') {
        FUN_1400020a8(local_470);
      }
      if (uVar2 == 0xffffffff) goto LAB_140006d1e;
    }
    puVar1 = (undefined1 *)param_1[2];
    iVar3 = (int)(param_2[0x10d] - param_2[0x10c]);
    uVar5 = (undefined7)(uVar4 >> 8);
    if ((puVar1 != (undefined1 *)0x0) && ((param_2[0x10d] - param_2[0x10c] & 0xffffffffU) != 0)) {
      local_470 = local_450;
      local_458 = '\0';
      local_460 = local_45;
      local_480 = puVar1;
      local_468 = local_470;
      FUN_14001b87a(&local_480,&local_470);
      local_478 = (int)local_468 - (int)local_470;
      local_480 = local_470;
      local_490 = param_2[0x10c];
      local_488 = (int)param_2[0x10d] - (int)local_490;
      iVar3 = FUN_140186866(&local_490,&local_480,1);
      uVar4 = CONCAT71(uVar5,iVar3 != -1);
      if (local_458 == '\x01') {
        FUN_1400020a8(local_470);
      }
      goto LAB_140006e2e;
    }
    if ((puVar1 == (undefined1 *)0x0) == (iVar3 == 0)) {
      uVar4 = CONCAT71(uVar5,1);
      goto LAB_140006e2e;
    }
    if ((puVar1 != (undefined1 *)0x0 | param_3) == 1) {
      uVar4 = CONCAT71(uVar5,iVar3 != 0 | param_4);
      goto LAB_140006e2e;
    }
  }
  else {
    local_470 = local_450;
    local_458 = '\0';
    local_460 = local_45;
    local_480 = puVar1;
    local_468 = local_470;
    FUN_14001b87a(&local_480,&local_470);
    local_478 = (int)local_468 - (int)local_470;
    local_480 = local_470;
    local_490 = *param_2;
    local_488 = (int)param_2[1] - (int)local_490;
    uVar2 = FUN_140186866(&local_490,&local_480,1);
    if (local_458 == '\x01') {
      FUN_1400020a8(local_470);
    }
    unaff_RBP = (ulonglong)uVar2;
    if (uVar2 != 0xffffffff) goto LAB_140006c74;
  }
LAB_140006d1e:
  uVar4 = 0;
LAB_140006e2e:
  if ((local_40 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140006e7f FUN_140006e7f body=854 status=ok
// SIG undefined FUN_140006e7f(void)

longlong FUN_140006e7f(longlong param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  uint local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  uVar4 = DAT_14c9a1ab0;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    local_70 = DAT_14c9a0ec0;
    local_78 = DAT_14c9a0eb8;
    FUN_1448075d0(local_68);
    pbVar3 = (byte *)*param_2;
    if (pbVar3 != (byte *)0x0) {
      if ((*pbVar3 & 2) == 0) {
        plVar7 = &DAT_14c9a1288;
      }
      else {
        plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
      }
      if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
        plVar5 = plVar7 + 8;
        if ((longlong *)plVar7[9] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar7[9];
        }
        iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar7[10] - 1U & local_68[0]) * 4);
        if (iVar8 != -1) {
          do {
            lVar1 = *plVar7 + (longlong)iVar8 * 0x40;
            if (*(uint *)(*plVar7 + (longlong)iVar8 * 0x40) == local_68[0]) {
              if ((((lVar1 != 0) &&
                   (puVar11 = (undefined8 *)(lVar1 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar11 != (byte *)0x0)) && ((*(byte *)*puVar11 & 0x40) == 0))
              goto LAB_140006f73;
              break;
            }
            iVar8 = *(int *)(lVar1 + 0x38);
          } while (iVar8 != -1);
        }
      }
    }
    puVar11 = &DAT_14c9a1308;
LAB_140006f73:
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    uVar10 = 1;
    if (param_4 == '\0') {
      plVar7 = (longlong *)FUN_1400071d6(uVar4,param_3);
      if (plVar7 == (longlong *)0x0) goto LAB_140006f99;
      (**(code **)(*plVar7 + 0x2b8))(plVar7,local_68);
      pbVar3 = (byte *)*param_2;
      if (pbVar3 != (byte *)0x0) {
        if ((*pbVar3 & 2) == 0) {
          plVar5 = &DAT_14c9a1288;
        }
        else {
          plVar5 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
          plVar9 = plVar5 + 8;
          if ((longlong *)plVar5[9] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar5[9];
          }
          iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar5[10] - 1U & local_68[0]) * 4);
          if (iVar8 != -1) {
            do {
              lVar1 = *plVar5 + (longlong)iVar8 * 0x40;
              if (*(uint *)(*plVar5 + (longlong)iVar8 * 0x40) == local_68[0]) {
                if (((lVar1 != 0) &&
                    (puVar6 = (undefined8 *)(lVar1 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar6 != (byte *)0x0 && ((*(byte *)*puVar6 & 0x40) == 0))))
                goto LAB_140007096;
                break;
              }
              iVar8 = *(int *)(lVar1 + 0x38);
            } while (iVar8 != -1);
          }
        }
      }
      puVar6 = &DAT_14c9a1308;
LAB_140007096:
      if ((byte *)*puVar6 == (byte *)0x0) {
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        bVar2 = *(byte *)*puVar6;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if ((bVar2 & 0x68) == 0 && (bVar2 & 3) != 0) {
          (**(code **)(*plVar7 + 0x2b8))(plVar7,local_68);
          pbVar3 = (byte *)*param_2;
          if (pbVar3 != (byte *)0x0) {
            if ((*pbVar3 & 2) == 0) {
              plVar5 = &DAT_14c9a1288;
            }
            else {
              plVar5 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
              plVar9 = plVar5 + 8;
              if ((longlong *)plVar5[9] != (longlong *)0x0) {
                plVar9 = (longlong *)plVar5[9];
              }
              iVar8 = *(int *)((longlong)plVar9 +
                              (ulonglong)((int)plVar5[10] - 1U & local_68[0]) * 4);
              if (iVar8 != -1) {
                do {
                  lVar1 = *plVar5 + (longlong)iVar8 * 0x40;
                  if (*(uint *)(*plVar5 + (longlong)iVar8 * 0x40) == local_68[0]) {
                    if (((lVar1 != 0) &&
                        (puVar11 = (undefined8 *)(lVar1 + 0x28), puVar11 != (undefined8 *)0x0)) &&
                       (((byte *)*puVar11 != (byte *)0x0 && ((*(byte *)*puVar11 & 0x40) == 0))))
                    goto LAB_14000716e;
                    break;
                  }
                  iVar8 = *(int *)(lVar1 + 0x38);
                } while (iVar8 != -1);
              }
            }
          }
          puVar11 = &DAT_14c9a1308;
LAB_14000716e:
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          uVar10 = 0;
        }
      }
    }
    else {
LAB_140006f99:
      plVar7 = (longlong *)0x0;
    }
    if ((((byte *)*puVar11 != (byte *)0x0) && (bVar2 = *(byte *)*puVar11, (bVar2 & 3) != 0)) &&
       ((bVar2 & 0x68) == 0)) {
      local_88 = uVar10;
      FUN_140007428(param_1,param_2,puVar11,plVar7);
      goto LAB_140006fcf;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
LAB_140006fcf:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400071d6 FUN_1400071d6 body=298 status=ok
// SIG undefined FUN_1400071d6(void)

longlong FUN_1400071d6(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_140007302((longlong *)(param_1 + 400),uVar2 >> 0x10 ^ uVar2,&local_20);
  if (iVar3 == -1) {
    lVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 400);
    lVar5 = 0;
    if ((((lVar1 + (longlong)iVar3 * 0x18 != 0) &&
         (plVar4 = (longlong *)(lVar1 + (longlong)iVar3 * 0x18 + 8), plVar4 != (longlong *)0x0)) &&
        (lVar5 = *plVar4, DAT_14c950c29 == 1)) && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140007302 FUN_140007302 body=204 status=ok
// SIG undefined FUN_140007302(void)

int FUN_140007302(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1400073ce FUN_1400073ce body=90 status=ok
// SIG undefined FUN_1400073ce(void)

undefined8 * FUN_1400073ce(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x28);
    if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(DAT_14c9a1ab0 + 0xd0))) &&
       (plVar2 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x360))(plVar2,param_2);
    }
  }
  return param_2;
}



// FUNCTION 140007428 FUN_140007428 body=1058 status=ok
// SIG undefined FUN_140007428(void)

longlong *
FUN_140007428(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,char param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  code *local_90;
  undefined1 *local_88;
  undefined2 **local_80;
  longlong local_70 [2];
  longlong local_60;
  undefined2 *local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_3 == 0) {
    piVar8 = &DAT_14c9a12e0;
  }
  else {
    iVar1 = *(int *)(*param_3 + 0x24);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    piVar8 = (int *)((ulonglong)(uint)(iVar1 % 0x199) * 0x28 +
                    *(longlong *)(DAT_14c9a1378 + (longlong)(iVar1 / 0x199) * 8));
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
  }
  if ((((param_4 == 0 || param_5 != '\0') || (*piVar8 == 0)) || (piVar8[1] == 0)) ||
     (*piVar8 == DAT_14c948000)) {
    FUN_14006788a(local_70,*param_3,0,1);
    piVar8 = DAT_14c950c20;
    if (local_70[0] != 0) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar1 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar1 != 2)) {
        if (iVar1 == 1) {
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          if (DVar2 == DVar3) goto LAB_140007557;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(piVar8 + 4);
        while( true ) {
          if (0 < piVar8[1]) {
            (**(code **)(**(longlong **)(piVar8 + 0xe) + 0x20))
                      (*(longlong **)(piVar8 + 0xe),0xffffffff,0);
          }
          EnterCriticalSection(lpCriticalSection);
          if (piVar8[1] == 0) break;
          LeaveCriticalSection(lpCriticalSection);
        }
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        LeaveCriticalSection(lpCriticalSection);
      }
LAB_140007557:
      lVar4 = FUN_140007850(local_70);
      if (lVar4 == 0) {
LAB_140007670:
        FUN_14475c82a(local_70);
        lVar4 = FUN_140007850(local_70);
        if (lVar4 != 0) {
          lVar7 = FUN_1446f4bba();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) goto LAB_1400075a0;
        }
        lVar4 = 0;
      }
      else {
        if (DAT_14c948fa0 == 0) {
          local_50 = &DAT_1427db2a2;
          lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948fa0 = lVar7;
          FUN_1446f470e(local_48,L"ScriptStruct",1);
          local_88 = &LAB_1468915ce;
          local_90 = FUN_1427dc742;
          local_a0 = L"Engine";
          local_98 = 199;
          local_a8 = 0x10;
          local_b0 = 0x10000020;
          local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,8);
          local_80 = &local_50;
          FUN_14574b4b2(lVar7);
          DAT_14c948fa0 = lVar7;
          uVar5 = FUN_1446f8646();
          lVar7 = DAT_14c948fa0;
          uVar6 = FUN_1449e2fb2();
          local_b8 = L"ScriptStruct";
          FUN_14574b446(uVar6,lVar7,uVar5,L"/Script/CoreUObject");
        }
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30))
        goto LAB_140007670;
      }
LAB_1400075a0:
      *param_1 = lVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      piVar8 = DAT_14c950c20;
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar1 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60), iVar1 != 2)) {
        if (iVar1 == 1) {
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          if (DVar2 == DVar3) goto LAB_1400075e1;
        }
        LOCK();
        *piVar8 = *piVar8 + -1;
        UNLOCK();
      }
LAB_1400075e1:
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1400075ef;
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
  }
  else {
    lVar4 = FUN_140009742(param_4,piVar8);
    if (lVar4 == 0) {
      FUN_1411ef135(param_1,param_2,param_4,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
    *param_1 = lVar4;
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_1400075ef:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140007850 FUN_140007850 body=108 status=ok
// SIG undefined FUN_140007850(void)

undefined8 FUN_140007850(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0) {
    if (DAT_14c86a9f8 == '\x01') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar1 != 2) {
        if (iVar1 != 1) goto LAB_14000788b;
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 != DVar3) goto LAB_14000788b;
      }
    }
    if (DAT_14c950c28 == '\0') {
LAB_14000788b:
      uVar4 = FUN_1400078bc(param_1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1400078bc FUN_1400078bc body=154 status=ok
// SIG undefined FUN_1400078bc(void)

undefined8 FUN_1400078bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_878 [40];
  undefined2 *local_850;
  undefined2 *local_848;
  undefined1 *local_840;
  char local_838;
  undefined2 local_830 [1035];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_850 = local_830;
  local_838 = '\0';
  local_840 = local_1a;
  local_848 = local_850;
  FUN_140007958(param_1,&local_850);
  *local_848 = 0;
  uVar1 = FUN_140007a5e(param_1,local_850);
  if (local_838 == '\x01') {
    FUN_1400020a8(local_850);
  }
  if ((local_18 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140007958 FUN_140007958 body=262 status=ok
// SIG undefined FUN_140007958(void)

void FUN_140007958(longlong *param_1,longlong param_2)

{
  uint uVar1;
  void *_Src;
  void *_Dst;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    FUN_14005eb5c();
    if (param_1[1] != 0) {
      puVar2 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_2,1);
        puVar2 = *(undefined2 **)(param_2 + 8);
      }
      *(undefined2 **)(param_2 + 8) = puVar2 + 1;
      *puVar2 = 0x2e;
      FUN_14005eb5c(param_1 + 1,param_2);
    }
    if ((int)param_1[3] - 2U < 0x7fffffff) {
      puVar2 = *(undefined2 **)(param_2 + 8);
      if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
        FUN_140213274(param_2,1);
        puVar2 = *(undefined2 **)(param_2 + 8);
      }
      *(undefined2 **)(param_2 + 8) = puVar2 + 1;
      *puVar2 = 0x3a;
      _Src = (void *)param_1[2];
      uVar1 = *(uint *)(param_1 + 3);
      iVar3 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar3 = 0;
      }
      lVar4 = (longlong)iVar3;
      if (*(ulonglong *)(param_2 + 0x10) <= (ulonglong)(*(longlong *)(param_2 + 8) + lVar4 * 2)) {
        FUN_140213274(param_2,lVar4);
      }
      if (1 < uVar1) {
        _Dst = *(void **)(param_2 + 8);
        memcpy(_Dst,_Src,lVar4 * 2);
        *(void **)(param_2 + 8) = (void *)((longlong)_Dst + lVar4 * 2);
      }
    }
  }
  return;
}



// FUNCTION 140007a5e FUN_140007a5e body=907 status=ok
// SIG undefined FUN_140007a5e(void)

longlong FUN_140007a5e(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  void *local_58;
  ulonglong uStack_50;
  longlong local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14c927740 == 0) {
    local_90 = &local_68;
    local_68 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_14081d0ea;
    local_98 = &LAB_146856450;
    local_a0 = FUN_1427b121c;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000021;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_40 = FUN_140277b32(DAT_14c927740,0,param_2,0);
  if (local_40 == 0) {
    if ((*param_1 != 0) && (1 < (int)param_1[3])) {
      local_78 = *param_1;
      lStack_70 = param_1[1];
      local_68 = (code *)0x0;
      lStack_60 = 0;
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      FUN_1400b3bc2(&local_68);
      if (local_68 != (code *)0x0) {
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar2 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            if (DVar6 == DVar7) goto LAB_140007dcc;
          }
        }
        else {
LAB_140007dcc:
          if (DAT_14c950c28 != '\0') goto LAB_140007c36;
        }
        plVar10 = (longlong *)FUN_1400078bc(&local_68);
        if (plVar10 != (longlong *)0x0) {
          if ((int)param_1[3] == 0) {
            puVar12 = &DAT_149dfb77a;
          }
          else {
            puVar12 = (undefined2 *)param_1[2];
          }
          (**(code **)(*plVar10 + 0x98))(plVar10,puVar12,&local_40,0);
        }
      }
LAB_140007c36:
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) goto LAB_140007aad;
    }
    if (DAT_14c75ecc4 == '\x01') {
      local_68 = (code *)*param_1;
      lStack_60 = param_1[1];
      local_58 = (void *)0x0;
      uVar1 = *(uint *)(param_1 + 3);
      _Src = (void *)param_1[2];
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_50 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_58,uVar1,0);
        memcpy(local_58,_Src,(longlong)(int)uVar1 * 2);
      }
      cVar5 = FUN_14475c82a(&local_68);
      if (cVar5 != '\0') {
        FUN_14475cc44(&local_68,&local_38);
        puVar12 = local_38;
        if ((int)uStack_30 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        uVar11 = FUN_1446f8646();
        local_40 = FUN_140277b32(uVar11,0,puVar12,0);
        if (local_38 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) goto LAB_140007aad;
    }
    lVar9 = 0;
  }
  else {
LAB_140007aad:
    do {
      lVar4 = local_40;
      lVar8 = FUN_140007dea();
      lVar3 = *(longlong *)(lVar4 + 0x10);
      lVar9 = local_40;
      if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) break;
      lVar9 = *(longlong *)(lVar4 + 0x28);
      local_40 = lVar9;
    } while (lVar9 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 140007dea FUN_140007dea body=221 status=ok
// SIG undefined FUN_140007dea(void)

longlong FUN_140007dea(void)

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
  if (DAT_14c9516e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468bf188;
    local_40 = FUN_14627431a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000020;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/CoreUObject",L"ObjectRedirector",&DAT_14c9516e0,&DAT_1468bf18e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9516e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140007ec8 FUN_140007ec8 body=591 status=ok
// SIG undefined FUN_140007ec8(void)

ulonglong FUN_140007ec8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *plVar12;
  void *_Dst;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  param_2 = (longlong *)*param_2;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*(int *)((longlong)plVar3 + 0x34) == 0) {
      lVar6 = param_2[5];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
      uVar8 = *(uint *)(plVar3 + 1);
      uVar14 = (ulonglong)uVar8;
      *(uint *)(plVar3 + 1) = uVar8 + 1;
      if (*(int *)((longlong)plVar3 + 0xc) <= (int)uVar8) {
        FUN_140260fda(plVar3,uVar14,uVar2,(int)lVar6);
      }
      plVar12 = plVar3 + 2;
      uVar8 = *(uint *)(plVar3 + 5);
      *(uint *)(plVar3 + 5) = uVar8 + 1;
      if ((int)uVar8 < *(int *)((longlong)plVar3 + 0x2c)) {
        bVar11 = (byte)(uVar8 & 0x1f);
        if ((uVar8 & 0x1f) == 0) {
          plVar10 = (longlong *)plVar3[4];
          if ((longlong *)plVar3[4] == (longlong *)0x0) {
            plVar10 = plVar12;
          }
          *(undefined4 *)((longlong)plVar10 + (longlong)((int)uVar8 >> 5) * 4) = 0;
          bVar11 = 0;
        }
      }
      else {
        FUN_1456eaed8(plVar12,uVar8);
        bVar11 = (byte)uVar8 & 0x1f;
      }
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar3[4];
      }
      uVar15 = uVar8 + 0x1f;
      if (-1 < (int)uVar8) {
        uVar15 = uVar8;
      }
      puVar1 = (uint *)((longlong)plVar12 + (longlong)((int)uVar15 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
    }
    else {
      uVar14 = (ulonglong)(int)plVar3[6];
      iVar13 = *(int *)(*plVar3 + 4 + (longlong)*(int *)((longlong)param_2 + 0x2c) * uVar14);
      *(int *)(plVar3 + 6) = iVar13;
      iVar7 = *(int *)((longlong)plVar3 + 0x34) + -1;
      *(int *)((longlong)plVar3 + 0x34) = iVar7;
      if (iVar7 != 0) {
        *(undefined4 *)(*plVar3 + (longlong)*(int *)((longlong)param_2 + 0x2c) * (longlong)iVar13) =
             0xffffffff;
      }
    }
    iVar13 = (int)uVar14;
    plVar12 = plVar3 + 2;
    if ((longlong *)plVar3[4] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar3[4];
    }
    iVar7 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar7 = iVar13;
    }
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar14 & 0x1f);
    puVar4 = (ulonglong *)param_2[2];
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      uVar9 = *puVar4;
    }
    else {
      uVar5 = *puVar4;
      uVar9 = ((longlong)uVar5 >> 0x18) + (longlong)puVar4;
      if ((uVar5 & 1) == 0) {
        uVar9 = uVar5;
      }
    }
    _Dst = (void *)((longlong)iVar13 * (longlong)*(int *)((longlong)param_2 + 0x2c) + uVar9);
    uVar8 = (uint)*(undefined8 *)(param_2[1] + 0x38);
    uVar15 = (uint)*(undefined8 *)(*param_2 + 0x38);
    if (((uVar8 | uVar15) >> 9 & 1) != 0) {
      memset(_Dst,0,(longlong)*(int *)((longlong)param_2 + 0x24));
    }
    if ((uVar15 >> 9 & 1) == 0) {
      plVar3 = (longlong *)*param_2;
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        (**(code **)(*plVar3 + 0x160))();
      }
      else {
        memset((void *)((longlong)*(int *)((longlong)plVar3 + 0x44) + (longlong)_Dst),0,
               (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
      }
    }
    if ((uVar8 >> 9 & 1) == 0) {
      plVar3 = (longlong *)param_2[1];
      if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
        (**(code **)(*plVar3 + 0x160))
                  (plVar3,(longlong)_Dst + (longlong)*(int *)((longlong)plVar3 + 0x44));
      }
      else {
        memset((void *)((longlong)_Dst + (longlong)*(int *)((longlong)plVar3 + 0x44)),0,
               (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
      }
    }
  }
  else {
    uVar8 = FUN_1468c9c00(plVar3,param_2 + 5);
    uVar14 = (ulonglong)uVar8;
    FUN_1468e962a(param_2,uVar8);
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 140008118 FUN_140008118 body=853 status=ok
// SIG undefined FUN_140008118(void)

ulonglong * FUN_140008118(ulonglong *param_1,undefined8 *param_2,int *param_3,ulonglong *param_4)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_88 [32];
  char *local_68;
  uint5 uStack_60;
  undefined3 uStack_5b;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  lVar8 = DAT_14c9a1ab0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pbVar2 = (byte *)*param_2;
  if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 0x6b) != 1)) || (DAT_14c9a1ab0 == 0)) {
LAB_14000844f:
    *param_1 = *param_4;
    iVar3 = (int)param_4[1];
  }
  else {
    uVar1 = *(ushort *)(pbVar2 + 0x20);
    if (-1 < (short)uVar1) {
      if ((short)uVar1 == 0x7fff) {
        pcVar9 = "Asset";
      }
      else if (((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1) ||
               (lVar14 = *(longlong *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
               lVar14 == 0)) || (pcVar9 = *(char **)(lVar14 + 0xb8), pcVar9 == (char *)0x0))
      goto LAB_14000844f;
      local_68 = (char *)0x0;
      _uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      FUN_1446ddda2(&local_68,pcVar9,0);
      iVar3 = FUN_1448f0e18(lVar8,&local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (((char)param_3[1] == '\x01') && (iVar3 != *param_3 && *param_3 != 0)) goto LAB_14000844f;
      if (((*(byte *)*param_2 & 3) == 1) &&
         (pcVar9 = *(char **)((byte *)*param_2 + 8), pcVar9 != (char *)0x0)) {
        sVar5 = strlen(pcVar9);
        uVar4 = (uint)sVar5;
        if (uVar4 == 0) goto LAB_1400082df;
        lVar8 = (longlong)(int)uVar4;
        pcVar10 = pcVar9 + lVar8 + -1;
        uVar7 = 0;
        if (pcVar10 < pcVar9) {
          lVar14 = 0;
        }
        else {
          do {
            if (9 < (byte)(*pcVar10 - 0x30U)) break;
            uVar7 = uVar7 + 1;
            pcVar10 = pcVar10 + -1;
          } while (pcVar9 <= pcVar10);
          lVar14 = 0;
          if ((((uVar7 != 0) && ((int)uVar7 < (int)uVar4)) && (lVar14 = 0, uVar7 < 0xb)) &&
             (lVar11 = -(ulonglong)uVar7, pcVar9[lVar11 + lVar8 + -1] == '_')) {
            if ((uVar7 == 1) || (pcVar9[lVar11 + lVar8] != '0')) {
              lVar13 = 0;
              do {
                lVar14 = (longlong)pcVar9[lVar11 + lVar8] + lVar13 * 10;
                lVar13 = lVar14 + -0x30;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 0);
              if (lVar13 < 0x7fffffff) {
                uVar4 = ~uVar7 + uVar4;
                lVar14 = lVar14 + -0x2f;
                goto LAB_140008279;
              }
            }
            lVar14 = 0;
          }
LAB_140008279:
          if (uVar4 == 0) goto LAB_1400082df;
        }
        uStack_60 = (uint5)uVar4;
        local_68 = pcVar9;
        uVar4 = FUN_14001a6c0(&local_68,1);
        uVar12 = lVar14 << 0x20;
        uVar6 = (ulonglong)uVar4;
      }
      else {
LAB_1400082df:
        uVar6 = 0;
        uVar12 = 0;
      }
      *param_1 = uVar6 | uVar12;
      *(int *)(param_1 + 1) = iVar3;
      goto LAB_1400082a5;
    }
    if ((char)param_3[1] != '\x01') goto LAB_14000844f;
    pcVar9 = *(char **)(pbVar2 + 8);
    if (pcVar9 == (char *)0x0) {
LAB_1400083f6:
      uVar6 = 0;
      uVar12 = 0;
    }
    else {
      sVar5 = strlen(pcVar9);
      uVar4 = (uint)sVar5;
      if (uVar4 == 0) goto LAB_1400083f6;
      lVar8 = (longlong)(int)uVar4;
      pcVar10 = pcVar9 + lVar8 + -1;
      uVar7 = 0;
      if (pcVar10 < pcVar9) {
        lVar14 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar10 - 0x30U)) break;
          uVar7 = uVar7 + 1;
          pcVar10 = pcVar10 + -1;
        } while (pcVar9 <= pcVar10);
        lVar14 = 0;
        if (((uVar7 != 0) && ((int)uVar7 < (int)uVar4)) &&
           ((lVar14 = 0, uVar7 < 0xb &&
            (lVar11 = -(ulonglong)uVar7, pcVar9[lVar11 + lVar8 + -1] == '_')))) {
          if ((uVar7 == 1) || (pcVar9[lVar11 + lVar8] != '0')) {
            lVar13 = 0;
            do {
              lVar14 = (longlong)pcVar9[lVar11 + lVar8] + lVar13 * 10;
              lVar13 = lVar14 + -0x30;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
            if (lVar13 < 0x7fffffff) {
              uVar4 = ~uVar7 + uVar4;
              lVar14 = lVar14 + -0x2f;
              goto LAB_1400083af;
            }
          }
          lVar14 = 0;
        }
LAB_1400083af:
        if (uVar4 == 0) goto LAB_1400083f6;
      }
      uStack_60 = (uint5)uVar4;
      local_68 = pcVar9;
      uVar4 = FUN_14001a6c0(&local_68,1);
      uVar12 = lVar14 << 0x20;
      uVar6 = (ulonglong)uVar4;
    }
    *param_1 = uVar6 | uVar12;
    iVar3 = *param_3;
  }
  *(int *)(param_1 + 1) = iVar3;
LAB_1400082a5:
  param_1[2] = 0;
  if ((char)param_3[1] == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14000846e FUN_14000846e body=168 status=ok
// SIG undefined FUN_14000846e(void)

int FUN_14000846e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  wchar_t *_Str;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    local_28 = (wchar_t *)0x0;
    uStack_20 = 0;
    FUN_1400b2348(0,&local_28,1);
    _Str = local_28;
    if ((int)uStack_20 == 0) {
      _Str = L"";
    }
    iVar1 = _wtoi(_Str);
  }
  else {
    local_28 = (wchar_t *)0x0;
    uStack_20 = 0;
    FUN_1400b2348(0,&local_28,1);
    iVar1 = FUN_1401e9588(param_2,&local_28,0);
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 140008518 FUN_140008518 body=137 status=ok
// SIG undefined FUN_140008518(void)

undefined8
FUN_140008518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined1 auStack_58 [37];
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_32 = 0;
  local_33 = (undefined1)param_4;
  local_31 = param_5;
  FUN_144705840(param_3,param_4);
  FUN_144705840(param_2,param_4);
  FUN_1446e98c4(param_1,param_2,param_3,&local_33);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400085a2 FUN_1400085a2 body=1051 status=ok
// SIG undefined FUN_1400085a2(void)

undefined4 FUN_1400085a2(wchar_t *param_1,undefined8 param_2,byte param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  wchar_t *pwVar15;
  bool bVar16;
  undefined1 auStack_d8 [39];
  byte local_b1;
  undefined4 local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  wchar_t *local_a0;
  undefined8 local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong local_88 [2];
  longlong *local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b1 = param_3;
  pwVar9 = wcsstr(param_1,L",");
  if (pwVar9 == (wchar_t *)0x0) {
    FUN_140056680(&local_68,param_1);
    FUN_140233b1a(&local_58,&local_68);
  }
  else {
    iVar6 = (int)((ulonglong)((longlong)pwVar9 - (longlong)param_1) >> 1);
    local_98 = param_2;
    if (iVar6 == 0) {
      local_ac = 0;
      local_a0 = param_1;
    }
    else {
      uVar12 = 0;
      lVar13 = 0;
      do {
        iVar5 = iswspace(*(wint_t *)((longlong)param_1 + lVar13));
        uVar12 = (iVar5 != 0) + uVar12;
        if (iVar5 == 0) break;
        bVar16 = (longlong)iVar6 * 2 + -2 != lVar13;
        lVar13 = lVar13 + 2;
      } while (bVar16);
      pwVar15 = param_1 + uVar12;
      local_ac = 0;
      local_a0 = pwVar15;
      if (iVar6 - uVar12 != 0) {
        lVar13 = (longlong)(int)(iVar6 - uVar12);
        do {
          iVar6 = iswspace(pwVar15[lVar13 + -1]);
          if (iVar6 == 0) {
            local_ac = (undefined4)lVar13;
            break;
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
    pwVar15 = pwVar9 + 1;
    pwVar10 = wcsstr(pwVar15,L",");
    if (pwVar10 != (wchar_t *)0x0) {
      iVar6 = 0;
      iVar5 = (int)((ulonglong)((longlong)pwVar10 - (longlong)pwVar15) >> 1);
      if (iVar5 == 0) {
        local_b0 = 0;
      }
      else {
        uVar12 = 0;
        lVar13 = 2;
        local_a8 = pwVar10;
        do {
          iVar7 = iswspace(*(wint_t *)((longlong)pwVar9 + lVar13));
          pwVar10 = local_a8;
          uVar12 = (iVar7 != 0) + uVar12;
          if (iVar7 == 0) break;
          bVar16 = (longlong)iVar5 * 2 != lVar13;
          lVar13 = lVar13 + 2;
        } while (bVar16);
        pwVar15 = pwVar15 + uVar12;
        if (iVar5 - uVar12 != 0) {
          lVar13 = (longlong)(int)(iVar5 - uVar12);
          do {
            iVar5 = iswspace(pwVar15[lVar13 + -1]);
            if (iVar5 == 0) {
              local_b0 = (undefined4)lVar13;
              goto LAB_140008717;
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        local_b0 = 0;
        pwVar10 = local_a8;
      }
LAB_140008717:
      sVar11 = wcslen(pwVar10 + 1);
      if (sVar11 << 0x20 != 0) {
        iVar6 = 0;
        lVar13 = 2;
        do {
          iVar5 = iswspace(*(wint_t *)((longlong)pwVar10 + lVar13));
          iVar6 = (uint)(iVar5 != 0) + iVar6;
          if (iVar5 == 0) break;
          bVar16 = (longlong)(sVar11 << 0x20) >> 0x1f != lVar13;
          lVar13 = lVar13 + 2;
        } while (bVar16);
      }
      FUN_1400089be(&local_68,local_ac,local_a0);
      FUN_1400089be(&local_78,local_b0,pwVar15);
      FUN_1400089be(local_88,(int)sVar11 - iVar6,pwVar10 + 1 + iVar6);
      local_58 = local_78;
      local_50 = local_70 + -1;
      if (local_70 == 0) {
        local_50 = 0;
      }
      FUN_1446e940c(local_8c,&local_58);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      FUN_1446e940c(local_90,&local_58);
      uVar4 = local_98;
      uVar8 = FUN_140008c02(local_90,local_8c,local_98,local_88);
      if ((char)uVar8 == '\0') {
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar1 = (undefined4 *)(lVar13 + 0xc7c);
        uVar3 = *puVar1;
        pbVar2 = (byte *)(lVar13 + 0xc80);
        bVar14 = local_b1 & *pbVar2;
        if (bVar14 == 1) {
          *pbVar2 = 0;
          *puVar1 = 1;
        }
        FUN_140009b9a(&local_58,local_88);
        FUN_140008f88(uVar4,&local_58);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
        if (bVar14 != 0) {
          *puVar1 = uVar3;
          *pbVar2 = 1;
        }
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140008848;
    }
    FUN_140056680(&local_68,param_1);
    FUN_140233b1a(&local_58,&local_68);
    param_2 = local_98;
  }
  FUN_140008f88(param_2,&local_58);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
LAB_140008848:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1400089be FUN_1400089be body=118 status=ok
// SIG undefined FUN_1400089be(void)

undefined8 * FUN_1400089be(undefined8 *param_1,uint param_2,short *param_3)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_3 != (short *)0x0) && (0 < (int)param_2)) && (*param_3 != 0)) {
    FUN_1446f8c06(param_1,param_2 + 1);
    iVar1 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar1 + param_2 + 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) <= param_2) {
      FUN_144a2dbb8(param_1);
    }
    _Dst = (void *)*param_1;
    memcpy(_Dst,param_3,(ulonglong)(param_2 * 2));
    *(undefined2 *)((longlong)_Dst + (ulonglong)param_2 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 140008a34 FUN_140008a34 body=461 status=ok
// SIG undefined FUN_140008a34(void)

int FUN_140008a34(PSRWLOCK param_1,undefined8 *param_2)

{
  PSRWLOCK pRVar1;
  undefined8 *puVar2;
  int iVar3;
  PVOID pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  void *_Dst;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockShared(param_1);
  pRVar1 = param_1 + 3;
  if ((*(int *)&param_1[6].Ptr != 0) &&
     (iVar7 = *(int *)((longlong)param_1[7].Ptr +
                      (ulonglong)(*(int *)&param_1[6].Ptr - 1U & *(uint *)((longlong)param_2 + 0xc))
                      * 4), iVar7 != -1)) {
    pvVar4 = pRVar1->Ptr;
    iVar3 = *(int *)(param_2 + 1);
    pvVar5 = (void *)*param_2;
    do {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)pvVar4 + (longlong)(iVar7 / 0x555) * 8) +
               (longlong)(iVar7 % 0x555) * 0x18);
      if (*(int *)(puVar2 + 1) == iVar3) {
        iVar6 = memcmp((void *)*puVar2,pvVar5,(longlong)iVar3);
        if (iVar6 == 0) {
          ReleaseSRWLockShared(param_1);
          goto LAB_140008bd8;
        }
      }
      iVar7 = *(int *)(puVar2 + 2);
    } while (iVar7 != -1);
  }
  iVar7 = *(int *)&param_1[5].Ptr;
  ReleaseSRWLockShared(param_1);
  AcquireSRWLockExclusive(param_1);
  if (((iVar7 < *(int *)&param_1[5].Ptr) && (*(int *)&param_1[6].Ptr != 0)) &&
     (iVar7 = *(int *)((longlong)param_1[7].Ptr +
                      (ulonglong)(*(int *)&param_1[6].Ptr - 1U & *(uint *)((longlong)param_2 + 0xc))
                      * 4), iVar7 != -1)) {
    pvVar4 = pRVar1->Ptr;
    iVar3 = *(int *)(param_2 + 1);
    pvVar5 = (void *)*param_2;
    do {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)pvVar4 + (longlong)(iVar7 / 0x555) * 8) +
               (longlong)(iVar7 % 0x555) * 0x18);
      if (*(int *)(puVar2 + 1) == iVar3) {
        iVar6 = memcmp((void *)*puVar2,pvVar5,(longlong)iVar3);
        if (iVar6 == 0) goto LAB_140008bc4;
      }
      iVar7 = *(int *)(puVar2 + 2);
    } while (iVar7 != -1);
  }
  iVar7 = *(int *)(param_2 + 1);
  pvVar5 = (void *)*param_2;
  plVar8 = (longlong *)FUN_140fd1420(param_1 + 1,iVar7 + 1);
  _Dst = (void *)((longlong)(int)plVar8[1] + *plVar8);
  *(int *)(plVar8 + 1) = (int)plVar8[1] + iVar7 + 1;
  memcpy(_Dst,pvVar5,(longlong)iVar7);
  *(undefined1 *)((longlong)iVar7 + (longlong)_Dst) = 0;
  local_50 = *(undefined4 *)(param_2 + 1);
  local_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_58 = _Dst;
  iVar7 = FUN_140160416(pRVar1);
LAB_140008bc4:
  ReleaseSRWLockExclusive(param_1);
LAB_140008bd8:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140008c02 FUN_140008c02 body=476 status=ok
// SIG undefined FUN_140008c02(void)

bool FUN_140008c02(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Src;
  int *piVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  void *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined4 local_50;
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = FUN_140008f10();
  local_78 = param_4;
  FUN_1400090a0(uVar5,&local_48,param_1,param_2);
  piVar4 = local_48;
  if (local_48 != (int *)0x0) {
    LOCK();
    *local_48 = *local_48 + 1;
    UNLOCK();
    if (param_4 == (undefined8 *)0x0) {
      local_68 = (void *)0x0;
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
    }
    else {
      local_68 = (void *)0x0;
      iVar1 = *(int *)(param_4 + 1);
      _Src = (void *)*param_4;
      uStack_60._0_4_ = iVar1;
      if ((longlong)iVar1 == 0) {
        uStack_60._4_4_ = 0;
      }
      else {
        FUN_1446dd670(&local_68,iVar1,0);
        memcpy(local_68,_Src,(longlong)iVar1 * 2);
      }
    }
    uVar2 = *param_1;
    uVar3 = *param_2;
    plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    plVar6[1] = 0;
    *plVar6 = (longlong)&PTR_FUN_149e19310;
    plVar6[2] = CONCAT44(uVar3,uVar2);
    plVar6[3] = (longlong)local_68;
    local_68 = (void *)0x0;
    *(int *)(plVar6 + 4) = (int)uStack_60;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_60._4_4_;
    uStack_60 = 0;
    plVar6[5] = (longlong)piVar4;
    FUN_140008de0(plVar6);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_50 = 0;
    local_58 = plVar6;
    FUN_140008f88(param_3,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      if (*(longlong *)(piVar4 + 2) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(piVar4);
    }
    if (local_48 != (int *)0x0) {
      LOCK();
      *local_48 = *local_48 + -1;
      UNLOCK();
      if (*local_48 == 0) {
        if (*(longlong *)(local_48 + 2) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_48);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return piVar4 != (int *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140008de0 FUN_140008de0 body=243 status=ok
// SIG undefined FUN_140008de0(void)

void FUN_140008de0(longlong *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0xa8))();
  if (cVar2 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c845390) {
      FUN_144b3d300(&DAT_14c845390);
      if (DAT_14c845390 == -1) {
        FUN_1456aefde(&DAT_14c845218);
        DAT_14c845388 = &DAT_14c845218;
        atexit(FUN_14276a1e7);
        _Init_thread_footer(&DAT_14c845390);
      }
    }
    puVar1 = DAT_14c845388;
    (**(code **)(*param_1 + 0x60))(param_1,local_38);
    FUN_140009194(puVar1,local_38,(longlong)param_1 + 0xc,(longlong)param_1 + 0xe);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140008ee4 FUN_140008ee4 body=11 status=ok
// SIG undefined FUN_140008ee4(void)

undefined8 * FUN_140008ee4(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  return param_2;
}



// FUNCTION 140008ef0 FUN_140008ef0 body=31 status=ok
// SIG undefined FUN_140008ef0(void)

bool FUN_140008ef0(longlong param_1)

{
  bool bVar1;
  
  if (DAT_14c844e48 == 2) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(int *)(param_1 + 0x10) == -1) {
      bVar1 = *(int *)(param_1 + 0x14) != -1;
    }
  }
  return bVar1;
}



// FUNCTION 140008f10 FUN_140008f10 body=120 status=ok
// SIG undefined FUN_140008f10(void)

undefined * FUN_140008f10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c845390) {
    FUN_144b3d300(&DAT_14c845390);
    if (DAT_14c845390 == -1) {
      FUN_1456aefde(&DAT_14c845218);
      DAT_14c845388 = &DAT_14c845218;
      atexit(FUN_14276a1e7);
      _Init_thread_footer(&DAT_14c845390);
    }
  }
  return DAT_14c845388;
}



// FUNCTION 140008f88 FUN_140008f88 body=280 status=ok
// SIG undefined FUN_140008f88(void)

longlong * FUN_140008f88(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
    }
    plVar2 = DAT_14c844840;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != DAT_14c844840) {
      *param_2 = (longlong)DAT_14c844840;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 1400090a0 FUN_1400090a0 body=243 status=ok
// SIG undefined FUN_1400090a0(void)

undefined8 *
FUN_1400090a0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,int *param_4,
             undefined8 *param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_4 == -1) || (DAT_14c844e48 == 2)) {
    *param_2 = 0;
  }
  else {
    if (param_5 == (undefined8 *)0x0) {
      param_5 = &DAT_14c845170;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c845180) {
        FUN_144b3d300(&DAT_14c845180);
        if (DAT_14c845180 == -1) {
          DAT_14c845170 = 0;
          uRam000000014c845178 = 0;
          atexit((_func_5014 *)&LAB_142767cc5);
          _Init_thread_footer(&DAT_14c845180);
        }
      }
    }
    local_38 = *param_3;
    local_34 = *param_4;
    FUN_142764a44(param_1,param_2,&local_38,param_5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140009194 FUN_140009194 body=793 status=ok
// SIG undefined FUN_140009194(void)

void FUN_140009194(longlong param_1,uint *param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint *puVar1;
  PSRWLOCK pRVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xc0));
  *param_3 = *(undefined2 *)(param_1 + 0x118);
  uVar3 = *param_2;
  uVar8 = 0;
  if ((uVar3 & param_2[1]) != 0xffffffff) {
    if (param_2[1] != 0xffffffff) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1))
      {
        FUN_1456aef72(&DAT_14c8450d0);
        DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
        atexit(FUN_142767c9e);
        _Init_thread_footer(&DAT_14c845168);
      }
      pRVar2 = DAT_14c845160;
      uVar3 = param_2[1];
      AcquireSRWLockShared(DAT_14c845160);
      uVar8 = *(uint *)(*(longlong *)((longlong)pRVar2[3].Ptr + (longlong)((int)uVar3 / 0x555) * 8)
                        + 0xc + (longlong)((int)uVar3 % 0x555) * 0x18);
      ReleaseSRWLockShared(pRVar2);
      uVar3 = *param_2;
    }
    if (uVar3 == 0xffffffff) {
      iVar6 = 0;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1))
      {
        FUN_1456aef72(&DAT_14c8450d0);
        DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
        atexit(FUN_142767c9e);
        _Init_thread_footer(&DAT_14c845168);
      }
      pRVar2 = DAT_14c845160;
      uVar3 = *param_2;
      AcquireSRWLockShared(DAT_14c845160);
      iVar6 = *(int *)(*(longlong *)((longlong)pRVar2[3].Ptr + (longlong)((int)uVar3 / 0x555) * 8) +
                       0xc + (longlong)((int)uVar3 % 0x555) * 0x18);
      ReleaseSRWLockShared(pRVar2);
    }
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
      uVar3 = uVar8 >> 0xd ^ iVar6 - uVar8;
      uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar8) - uVar3;
      uVar8 = uVar5 >> 0xd ^ (uVar8 - uVar3) - uVar5;
      uVar7 = uVar8 >> 0xc ^ (uVar3 - uVar5) - uVar8;
      uVar3 = uVar7 << 0x10 ^ (uVar5 - uVar8) - uVar7;
      uVar8 = uVar3 >> 5 ^ (uVar8 - uVar7) - uVar3;
      uVar5 = uVar8 >> 3 ^ (uVar7 - uVar3) - uVar8;
      uVar3 = uVar5 << 10 ^ (uVar3 - uVar8) - uVar5;
      lVar4 = param_1 + 0x100;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x108);
      }
      uVar3 = *(uint *)(lVar4 + (ulonglong)
                                (*(int *)(param_1 + 0x110) - 1U &
                                (uVar3 >> 0xf ^ uVar8 - (uVar5 + uVar3))) * 4);
      if (uVar3 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*(longlong *)(param_1 + 200) + (longlong)(int)uVar3 * 0x14);
          if ((*puVar1 == *param_2) &&
             (*(uint *)(*(longlong *)(param_1 + 200) + 4 + (longlong)(int)uVar3 * 0x14) ==
              param_2[1])) {
            if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) goto LAB_1400092f5;
            uVar8 = (uint)(ushort)puVar1[2];
            break;
          }
          uVar3 = puVar1[3];
          uVar8 = 0;
        } while (uVar3 != 0xffffffff);
        goto LAB_1400092f8;
      }
    }
LAB_1400092f5:
    uVar8 = 0;
  }
LAB_1400092f8:
  *param_4 = (short)uVar8;
                    /* WARNING: Could not recover jumptable at 0x00014000930f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xc0));
  return;
}



// FUNCTION 1400094ae FUN_1400094ae body=157 status=ok
// SIG undefined FUN_1400094ae(void)

undefined4 FUN_1400094ae(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_144837648(param_1,param_3,1);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    cVar1 = (**(code **)(*param_1 + 0x418))(param_1,local_38,lVar3,param_3);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1446e9750(param_1,param_2,local_38,0);
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000954c FUN_14000954c body=209 status=ok
// SIG undefined FUN_14000954c(void)

longlong * FUN_14000954c(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  undefined7 uVar6;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    *param_2 = 0;
LAB_1400095b4:
    lVar4 = param_1[1];
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    cVar1 = param_3[1];
    if (cVar1 == '\0') {
      uVar6 = (undefined7)((ulonglong)param_3 >> 8);
      cVar5 = '\x02';
      if ((*(byte *)(lVar4 + 3) & 0x10) == 0) goto LAB_14000956c;
    }
    else {
LAB_14000956c:
      cVar2 = *param_3;
      bVar3 = *(byte *)(lVar4 + 3);
      if ((cVar1 == '\0' || cVar2 != '\x01') || (bVar3 & 8) != 0) {
        if (cVar1 == '\0' || cVar2 != '\x02') {
          bVar3 = bVar3 & 0x10;
        }
        else {
          bVar3 = bVar3 & 0x18;
        }
        if (bVar3 == 0) {
          *param_2 = lVar4;
          goto LAB_1400095b4;
        }
      }
      uVar6 = 0;
      cVar5 = '\x02';
      if (cVar1 != '\0') {
        uVar6 = 0;
        cVar5 = cVar2;
      }
    }
    FUN_1401412e0(param_1,param_2,CONCAT71(uVar6,1),0,cVar5);
  }
  if (param_3[1] == '\x01') {
    param_3[1] = '\0';
  }
  return param_2;
}



// FUNCTION 14000961e FUN_14000961e body=290 status=ok
// SIG undefined FUN_14000961e(void)

void FUN_14000961e(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = uVar1;
    }
    uVar6 = (ulonglong)(int)uVar2;
  }
  else {
    uVar6 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar3 = uVar6 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)
                (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 & 0xfffffffffffffff]];
      }
      else {
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar6 & (uVar3 + uVar6) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
    }
  }
  uVar6 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar3 >> 4)) {
    uVar6 = uVar3 >> 4 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  *(int *)((longlong)param_1 + 0x14) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afa99(0x20,(longlong)iVar5,0x10);
    }
    lVar4 = FUN_1456c5272(CONCAT71((int7)(uVar6 >> 8),(char)param_1[1]),*param_1,uVar6 << 4,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140009742 FUN_140009742 body=95 status=ok
// SIG undefined FUN_140009742(void)

longlong FUN_140009742(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(char *)((longlong)param_1 + 0xc9) == '\x01') &&
      (lVar2 = (**(code **)(*param_1 + 0x368))(), lVar2 != 0)) &&
     ((longlong)(int)param_1[0x38] != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x37] + lVar3);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xc0) == lVar2)) {
        return lVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)param_1[0x38] * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 1400097a2 FUN_1400097a2 body=1009 status=ok
// SIG undefined FUN_1400097a2(void)

float * FUN_1400097a2(float *param_1,longlong *param_2,float *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar4 = (byte *)*param_2;
  if (pbVar4 == (byte *)0x0) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
LAB_140009b2c:
    uVar11 = 0;
LAB_140009b2e:
    FUN_147095192(param_1,uVar11,&local_88);
    goto LAB_14000990b;
  }
  bVar9 = *pbVar4 & 3;
  if (bVar9 == 3) {
    puVar10 = (undefined8 *)FUN_1446e60f4(pbVar4,&DAT_14c9a11a0);
    pbVar4 = (byte *)*puVar10;
    fVar14 = 1.0;
    if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 1)) &&
       (*(char **)(pbVar4 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar4 + 8));
      fVar14 = (float)dVar13;
    }
    if (*param_2 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1198);
    }
    pbVar4 = (byte *)*puVar10;
    fVar15 = 0.0;
    if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 1)) &&
       (*(char **)(pbVar4 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar4 + 8));
      fVar15 = (float)dVar13;
    }
    if (*param_2 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1190);
    }
    pbVar4 = (byte *)*puVar10;
    fVar16 = 0.0;
    if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 1)) &&
       (*(char **)(pbVar4 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar4 + 8));
      fVar16 = (float)dVar13;
    }
    if (*param_2 == 0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1188);
    }
    pbVar4 = (byte *)*puVar10;
    fVar12 = 0.0;
    if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 1)) &&
       (*(char **)(pbVar4 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar4 + 8));
      fVar12 = (float)dVar13;
    }
    *param_1 = fVar12;
    param_1[1] = fVar16;
    param_1[2] = fVar15;
  }
  else {
    if (bVar9 != 2) {
      local_88 = *param_3;
      fStack_84 = param_3[1];
      fStack_80 = param_3[2];
      fStack_7c = param_3[3];
      if (bVar9 != 1) goto LAB_140009b2c;
      uVar11 = *(undefined8 *)(pbVar4 + 8);
      goto LAB_140009b2e;
    }
    bVar9 = *pbVar4 & 0x6b;
    if ((bVar9 == 2) && (0 < *(int *)(*(undefined8 **)(pbVar4 + 8) + 2))) {
      puVar10 = (undefined8 *)**(undefined8 **)(pbVar4 + 8);
      if (((byte *)*puVar10 == (byte *)0x0) || ((*(byte *)*puVar10 & 0x40) != 0))
      goto LAB_140009b7d;
    }
    else {
LAB_140009b7d:
      puVar10 = &DAT_14c9a1308;
    }
    pbVar5 = (byte *)*puVar10;
    if (pbVar5 == (byte *)0x0) {
LAB_140009b64:
      fVar14 = param_3[1];
      fVar15 = param_3[2];
      fVar16 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = fVar14;
      param_1[2] = fVar15;
      param_1[3] = fVar16;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
    }
    bVar1 = *pbVar5;
    if ((bVar1 & 3) != 1) goto LAB_140009b64;
    puVar10 = &DAT_14c9a1308;
    if ((bVar9 == 2) && (1 < (int)(*(longlong **)(pbVar4 + 8))[2])) {
      lVar6 = **(longlong **)(pbVar4 + 8);
      pbVar7 = *(byte **)(lVar6 + 0x10);
      if ((pbVar7 != (byte *)0x0) && ((*pbVar7 & 0x40) == 0)) {
        puVar10 = (undefined8 *)(lVar6 + 0x10);
      }
    }
    pbVar7 = (byte *)*puVar10;
    if (pbVar7 == (byte *)0x0) goto LAB_140009b64;
    bVar2 = *pbVar7;
    if ((bVar2 & 3) != 1) goto LAB_140009b64;
    puVar10 = &DAT_14c9a1308;
    if ((bVar9 == 2) && (2 < (int)(*(longlong **)(pbVar4 + 8))[2])) {
      lVar6 = **(longlong **)(pbVar4 + 8);
      pbVar8 = *(byte **)(lVar6 + 0x20);
      if ((pbVar8 != (byte *)0x0) && ((*pbVar8 & 0x40) == 0)) {
        puVar10 = (undefined8 *)(lVar6 + 0x20);
      }
    }
    pbVar8 = (byte *)*puVar10;
    if (pbVar8 == (byte *)0x0) goto LAB_140009b64;
    bVar3 = *pbVar8;
    if ((bVar3 & 3) != 1) goto LAB_140009b64;
    puVar10 = &DAT_14c9a1308;
    if ((bVar9 == 2) && (3 < (int)(*(longlong **)(pbVar4 + 8))[2])) {
      lVar6 = **(longlong **)(pbVar4 + 8);
      pbVar4 = *(byte **)(lVar6 + 0x30);
      if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x40) == 0)) {
        puVar10 = (undefined8 *)(lVar6 + 0x30);
      }
    }
    fVar14 = param_3[3];
    pbVar4 = (byte *)*puVar10;
    if ((((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 1)) && (fVar14 = 1.0, (*pbVar4 & 0x69) == 1))
       && (*(char **)(pbVar4 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar4 + 8));
      fVar14 = (float)dVar13;
    }
    fVar15 = 0.0;
    fVar16 = 0.0;
    if (((bVar3 & 0x69) == 1) && (*(char **)(pbVar8 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar8 + 8));
      fVar16 = (float)dVar13;
    }
    if (((bVar2 & 0x69) == 1) && (*(char **)(pbVar7 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar7 + 8));
      fVar15 = (float)dVar13;
    }
    fVar12 = 0.0;
    if (((bVar1 & 0x69) == 1) && (*(char **)(pbVar5 + 8) != (char *)0x0)) {
      dVar13 = atof(*(char **)(pbVar5 + 8));
      fVar12 = (float)dVar13;
    }
    *param_1 = fVar12;
    param_1[1] = fVar15;
    param_1[2] = fVar16;
  }
  param_1[3] = fVar14;
LAB_14000990b:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140009b9a FUN_140009b9a body=343 status=ok
// SIG undefined FUN_140009b9a(void)

undefined8 * FUN_140009b9a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  longlong *plVar2;
  uint *puVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
    }
    plVar2 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    puVar3 = &DAT_14c844848;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  else {
    local_38 = (void *)0x0;
    _Src = (void *)*param_2;
    local_30 = uVar1;
    FUN_1446dd670(&local_38,(ulonglong)uVar1,0);
    memcpy(local_38,_Src,(ulonglong)uVar1 * 2);
    FUN_140009cf2(param_1,&local_38);
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
    puVar3 = (uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = *puVar3 | 0x12;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140009cf2 FUN_140009cf2 body=110 status=ok
// SIG undefined FUN_140009cf2(void)

undefined8 * FUN_140009cf2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_149e19310;
  puVar1[2] = 0xffffffffffffffff;
  puVar1[3] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar1[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  *param_1 = puVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 140009d60 FUN_140009d60 body=826 status=ok
// SIG undefined FUN_140009d60(void)

undefined8 * FUN_140009d60(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar3 = (byte *)*param_2;
  if (pbVar3 == (byte *)0x0) {
    local_78 = param_3[2];
    local_88 = *param_3;
    uStack_80 = param_3[1];
LAB_140009efe:
    param_1[2] = local_78;
    *(undefined4 *)param_1 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
    goto LAB_140009e65;
  }
  bVar7 = *pbVar3 & 3;
  if (bVar7 == 3) {
    puVar9 = (undefined8 *)FUN_1446e60f4(pbVar3,&DAT_14c9a1160);
    pbVar3 = (byte *)*puVar9;
    uVar13 = 0;
    uVar14 = 0;
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
       (*(char **)(pbVar3 + 8) != (char *)0x0)) {
      dVar11 = atof(*(char **)(pbVar3 + 8));
      uVar13 = SUB84(dVar11,0);
      uVar14 = (int)((ulonglong)dVar11 >> 0x20);
    }
    if (*param_2 == 0) {
      puVar9 = &DAT_14c9a1308;
    }
    else {
      puVar9 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1158);
    }
    pbVar3 = (byte *)*puVar9;
    uVar15 = 0;
    uVar16 = 0;
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
       (*(char **)(pbVar3 + 8) != (char *)0x0)) {
      dVar11 = atof(*(char **)(pbVar3 + 8));
      uVar15 = SUB84(dVar11,0);
      uVar16 = (int)((ulonglong)dVar11 >> 0x20);
    }
    if (*param_2 == 0) {
      puVar9 = &DAT_14c9a1308;
    }
    else {
      puVar9 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1150);
    }
    pbVar3 = (byte *)*puVar9;
    uVar10 = 0;
    uVar12 = 0;
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
       (*(char **)(pbVar3 + 8) != (char *)0x0)) {
      dVar11 = atof(*(char **)(pbVar3 + 8));
      uVar10 = SUB84(dVar11,0);
      uVar12 = (int)((ulonglong)dVar11 >> 0x20);
    }
    *param_1 = CONCAT44(uVar12,uVar10);
    param_1[1] = CONCAT44(uVar16,uVar15);
    param_1[2] = CONCAT44(uVar14,uVar13);
    goto LAB_140009e65;
  }
  if (bVar7 != 2) {
    local_78 = param_3[2];
    local_88 = *param_3;
    uStack_80 = param_3[1];
    if ((bVar7 == 1) && (*(longlong *)(pbVar3 + 8) != 0)) {
      iVar8 = FUN_14000c2be(*(longlong *)(pbVar3 + 8),3,&local_68);
      if (iVar8 == 3) {
        *param_1 = local_68;
        param_1[1] = uStack_60;
        param_1[2] = local_58;
        goto LAB_140009e65;
      }
    }
    goto LAB_140009efe;
  }
  bVar7 = *pbVar3 & 0x6b;
  if ((bVar7 == 2) && (0 < *(int *)(*(undefined8 **)(pbVar3 + 8) + 2))) {
    puVar9 = (undefined8 *)**(undefined8 **)(pbVar3 + 8);
    if (((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 0x40) != 0)) goto LAB_14000a098;
  }
  else {
LAB_14000a098:
    puVar9 = &DAT_14c9a1308;
  }
  pbVar4 = (byte *)*puVar9;
  if (pbVar4 != (byte *)0x0) {
    bVar1 = *pbVar4;
    if ((bVar1 & 3) == 1) {
      puVar9 = &DAT_14c9a1308;
      if ((bVar7 == 2) && (1 < (int)(*(longlong **)(pbVar3 + 8))[2])) {
        lVar5 = **(longlong **)(pbVar3 + 8);
        pbVar6 = *(byte **)(lVar5 + 0x10);
        if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 0x40) == 0)) {
          puVar9 = (undefined8 *)(lVar5 + 0x10);
        }
      }
      pbVar6 = (byte *)*puVar9;
      if (pbVar6 != (byte *)0x0) {
        bVar2 = *pbVar6;
        if ((bVar2 & 3) == 1) {
          puVar9 = &DAT_14c9a1308;
          if ((bVar7 == 2) && (2 < (int)(*(longlong **)(pbVar3 + 8))[2])) {
            lVar5 = **(longlong **)(pbVar3 + 8);
            pbVar3 = *(byte **)(lVar5 + 0x20);
            if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x40) == 0)) {
              puVar9 = (undefined8 *)(lVar5 + 0x20);
            }
          }
          pbVar3 = (byte *)*puVar9;
          if (pbVar3 != (byte *)0x0) {
            if ((*pbVar3 & 3) == 1) {
              uVar13 = 0;
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              if (((*pbVar3 & 0x69) == 1) && (*(char **)(pbVar3 + 8) != (char *)0x0)) {
                dVar11 = atof(*(char **)(pbVar3 + 8));
                uVar15 = SUB84(dVar11,0);
                uVar16 = (int)((ulonglong)dVar11 >> 0x20);
              }
              if (((bVar2 & 0x69) == 1) && (*(char **)(pbVar6 + 8) != (char *)0x0)) {
                dVar11 = atof(*(char **)(pbVar6 + 8));
                uVar13 = SUB84(dVar11,0);
                uVar14 = (int)((ulonglong)dVar11 >> 0x20);
              }
              uVar10 = 0;
              uVar12 = 0;
              if (((bVar1 & 0x69) == 1) && (*(char **)(pbVar4 + 8) != (char *)0x0)) {
                dVar11 = atof(*(char **)(pbVar4 + 8));
                uVar10 = SUB84(dVar11,0);
                uVar12 = (int)((ulonglong)dVar11 >> 0x20);
              }
              *param_1 = CONCAT44(uVar12,uVar10);
              param_1[1] = CONCAT44(uVar14,uVar13);
              param_1[2] = CONCAT44(uVar16,uVar15);
LAB_140009e65:
              if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
          }
        }
      }
    }
  }
  param_1[2] = param_3[2];
  uVar13 = *(undefined4 *)((longlong)param_3 + 4);
  uVar14 = *(undefined4 *)(param_3 + 1);
  uVar15 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar13;
  *(undefined4 *)(param_1 + 1) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar15;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14000a0a0 FUN_14000a0a0 body=86 status=ok
// SIG undefined FUN_14000a0a0(void)

void FUN_14000a0a0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar3;
  uVar1 = *(uint *)(*(longlong *)(*param_1 + 8) + 8);
  if ((int)uVar3 < (int)uVar1) {
    do {
      if ((-1 < (int)uVar3) &&
         (lVar2 = *(longlong *)(*param_1 + 8), (int)uVar3 < *(int *)(lVar2 + 0x28))) {
        lVar4 = lVar2 + 0x10;
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x20);
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) break;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 1) = uVar3;
    } while (uVar1 != uVar3);
  }
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 14000a0f6 FUN_14000a0f6 body=843 status=ok
// SIG undefined FUN_14000a0f6(void)

undefined8 * FUN_14000a0f6(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar3 = (byte *)*param_2;
  if (pbVar3 == (byte *)0x0) {
    local_78 = param_3[2];
    local_88 = *param_3;
    uStack_80 = param_3[1];
LAB_14000a23f:
    param_1[2] = local_78;
    *(undefined4 *)param_1 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
    goto LAB_14000a1fb;
  }
  bVar7 = *pbVar3 & 3;
  if (bVar7 == 3) {
    puVar9 = (undefined8 *)FUN_1446e60f4(pbVar3,&DAT_14c9a1180);
    pbVar3 = (byte *)*puVar9;
    uVar13 = 0;
    uVar14 = 0;
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
       (*(char **)(pbVar3 + 8) != (char *)0x0)) {
      dVar11 = atof(*(char **)(pbVar3 + 8));
      uVar13 = SUB84(dVar11,0);
      uVar14 = (int)((ulonglong)dVar11 >> 0x20);
    }
    if (*param_2 == 0) {
      puVar9 = &DAT_14c9a1308;
    }
    else {
      puVar9 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1178);
    }
    pbVar3 = (byte *)*puVar9;
    uVar15 = 0;
    uVar16 = 0;
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
       (*(char **)(pbVar3 + 8) != (char *)0x0)) {
      dVar11 = atof(*(char **)(pbVar3 + 8));
      uVar15 = SUB84(dVar11,0);
      uVar16 = (int)((ulonglong)dVar11 >> 0x20);
    }
    if (*param_2 == 0) {
      puVar9 = &DAT_14c9a1308;
    }
    else {
      puVar9 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14c9a1170);
    }
    pbVar3 = (byte *)*puVar9;
    uVar10 = 0;
    uVar12 = 0;
    if (((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 1)) &&
       (*(char **)(pbVar3 + 8) != (char *)0x0)) {
      dVar11 = atof(*(char **)(pbVar3 + 8));
      uVar10 = SUB84(dVar11,0);
      uVar12 = (int)((ulonglong)dVar11 >> 0x20);
    }
    *param_1 = CONCAT44(uVar12,uVar10);
    param_1[1] = CONCAT44(uVar16,uVar15);
    param_1[2] = CONCAT44(uVar14,uVar13);
    goto LAB_14000a1fb;
  }
  if (bVar7 != 2) {
    local_78 = param_3[2];
    local_88 = *param_3;
    uStack_80 = param_3[1];
    if ((bVar7 == 1) && (*(longlong *)(pbVar3 + 8) != 0)) {
      iVar8 = FUN_14000c2be(*(longlong *)(pbVar3 + 8),3,&local_68);
      if (iVar8 == 3) {
        *param_1 = local_68;
        param_1[1] = uStack_60;
        param_1[2] = local_58;
        goto LAB_14000a1fb;
      }
    }
    goto LAB_14000a23f;
  }
  bVar7 = *pbVar3 & 0x6b;
  if ((bVar7 == 2) && (0 < *(int *)(*(undefined8 **)(pbVar3 + 8) + 2))) {
    puVar9 = (undefined8 *)**(undefined8 **)(pbVar3 + 8);
    if (((byte *)*puVar9 == (byte *)0x0) || ((*(byte *)*puVar9 & 0x40) != 0)) goto LAB_14000a43f;
  }
  else {
LAB_14000a43f:
    puVar9 = &DAT_14c9a1308;
  }
  pbVar4 = (byte *)*puVar9;
  if (pbVar4 != (byte *)0x0) {
    bVar1 = *pbVar4;
    if ((bVar1 & 3) == 1) {
      puVar9 = &DAT_14c9a1308;
      if ((bVar7 == 2) && (1 < (int)(*(longlong **)(pbVar3 + 8))[2])) {
        lVar5 = **(longlong **)(pbVar3 + 8);
        pbVar6 = *(byte **)(lVar5 + 0x10);
        if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 0x40) == 0)) {
          puVar9 = (undefined8 *)(lVar5 + 0x10);
        }
      }
      pbVar6 = (byte *)*puVar9;
      if (pbVar6 != (byte *)0x0) {
        bVar2 = *pbVar6;
        if ((bVar2 & 3) == 1) {
          puVar9 = &DAT_14c9a1308;
          if ((bVar7 == 2) && (2 < (int)(*(longlong **)(pbVar3 + 8))[2])) {
            lVar5 = **(longlong **)(pbVar3 + 8);
            pbVar3 = *(byte **)(lVar5 + 0x20);
            if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x40) == 0)) {
              puVar9 = (undefined8 *)(lVar5 + 0x20);
            }
          }
          pbVar3 = (byte *)*puVar9;
          if (pbVar3 != (byte *)0x0) {
            if ((*pbVar3 & 3) == 1) {
              uVar13 = 0;
              uVar14 = 0;
              uVar15 = 0;
              uVar16 = 0;
              if (((*pbVar3 & 0x69) == 1) && (*(char **)(pbVar3 + 8) != (char *)0x0)) {
                dVar11 = atof(*(char **)(pbVar3 + 8));
                uVar15 = SUB84(dVar11,0);
                uVar16 = (int)((ulonglong)dVar11 >> 0x20);
              }
              if (((bVar2 & 0x69) == 1) && (*(char **)(pbVar6 + 8) != (char *)0x0)) {
                dVar11 = atof(*(char **)(pbVar6 + 8));
                uVar13 = SUB84(dVar11,0);
                uVar14 = (int)((ulonglong)dVar11 >> 0x20);
              }
              uVar10 = 0;
              uVar12 = 0;
              if (((bVar1 & 0x69) == 1) && (*(char **)(pbVar4 + 8) != (char *)0x0)) {
                dVar11 = atof(*(char **)(pbVar4 + 8));
                uVar10 = SUB84(dVar11,0);
                uVar12 = (int)((ulonglong)dVar11 >> 0x20);
              }
              *param_1 = CONCAT44(uVar12,uVar10);
              param_1[1] = CONCAT44(uVar14,uVar13);
              param_1[2] = CONCAT44(uVar16,uVar15);
LAB_14000a1fb:
              if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
                return param_1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
          }
        }
      }
    }
  }
  param_1[2] = param_3[2];
  uVar13 = *(undefined4 *)((longlong)param_3 + 4);
  uVar14 = *(undefined4 *)(param_3 + 1);
  uVar15 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar13;
  *(undefined4 *)(param_1 + 1) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar15;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14000a448 FUN_14000a448 body=5349 status=ok
// SIG undefined FUN_14000a448(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14000a448(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
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
  void *pvVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  byte bVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  longlong lVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  uint *puVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  undefined2 *puVar33;
  int *piVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  bool bVar40;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_70;
  ulonglong local_68 [3];
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    puVar28 = (uint *)0x0;
  }
  else {
    for (uVar27 = *(ulonglong *)(param_2 + 0x10); (uVar27 & 1) == 0;
        uVar27 = *(ulonglong *)(uVar27 + 0x10)) {
      if (uVar27 < 2) goto LAB_14000b684;
    }
    uVar27 = uVar27 & 0xfffffffffffffffe;
    if (uVar27 == 0) {
LAB_14000b684:
      local_70._0_4_ = 0;
      iVar17 = 0;
      uVar30 = (uint)local_70;
    }
    else {
      if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c(uVar27);
      }
      uVar30 = *(uint *)(uVar27 + 0xc);
      local_70 = (void *)(ulonglong)uVar30;
      if ((int)uVar30 < DAT_14c9647dc) {
        lVar39 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
      }
      else {
        lVar39 = 0;
      }
      iVar17 = *(int *)(lVar39 + 0x10);
      if (*(int *)(lVar39 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        iVar29 = DAT_14c964868 + 1;
        bVar40 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar40) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar29);
        }
        LOCK();
        iVar17 = *(int *)(lVar39 + 0x10);
        bVar40 = iVar17 == 0;
        if (bVar40) {
          *(int *)(lVar39 + 0x10) = iVar29;
          iVar17 = 0;
        }
        UNLOCK();
        uVar30 = (uint)local_70;
        if (bVar40) {
          iVar17 = iVar29;
        }
      }
    }
    local_70._0_4_ = uVar30;
    local_70 = (void *)CONCAT44(iVar17,(uint)local_70);
    puVar24 = *(undefined **)(param_2 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_a8 = FUN_140342cba();
      local_a0 = FUN_1468c7f1e;
      local_b0 = 0;
      local_b8 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    if ((DAT_14c951a40 == 0) && (puVar24 != &DAT_14c951a38 && puVar24 != (undefined *)0x0)) {
      do {
        puVar24 = *(undefined **)(puVar24 + 0x30);
        if (puVar24 == &DAT_14c951a38) break;
      } while (puVar24 != (undefined *)0x0);
    }
    uVar27 = 0;
    local_68[2] = 0;
    uStack_50 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_1449651a4(local_68);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a1538);
    if ((longlong)(int)uStack_50 != 0) {
      lVar39 = 0;
      uVar27 = 0;
      do {
        uVar19 = *(undefined8 *)(local_68[2] + lVar39);
        uVar30 = (uint)((ulonglong)uVar19 >> 0x10);
        uVar31 = (uint)uVar19 & 0xffff;
        uVar30 = ((uint)uVar19 << 0x10 | uVar31) + (int)((ulonglong)uVar19 >> 0x20) +
                 (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar31 >> 4);
        uVar31 = uVar30 >> 0xd ^ (int)uVar27 - uVar30;
        uVar35 = uVar31 << 8 ^ (-0x61c88647 - uVar30) - uVar31;
        uVar36 = uVar35 >> 0xd ^ (uVar30 - uVar31) - uVar35;
        uVar30 = uVar36 >> 0xc ^ (uVar31 - uVar35) - uVar36;
        uVar31 = uVar30 << 0x10 ^ (uVar35 - uVar36) - uVar30;
        uVar35 = uVar31 >> 5 ^ (uVar36 - uVar30) - uVar31;
        uVar36 = uVar35 >> 3 ^ (uVar30 - uVar31) - uVar35;
        uVar30 = uVar36 << 10 ^ (uVar31 - uVar35) - uVar36;
        uVar27 = (ulonglong)(uVar30 >> 0xf ^ uVar35 - (uVar36 + uVar30));
        lVar39 = lVar39 + 8;
      } while ((longlong)(int)uStack_50 * 8 != lVar39);
    }
    iVar17 = FUN_14000b92e(uVar27,&local_70);
    uVar30 = DAT_14c9a14f0;
    lVar39 = 0;
    if (iVar17 != -1) {
      lVar39 = (longlong)iVar17 * 0x38 + DAT_14c9a14e8;
    }
    if (lVar39 == 0) {
      if (DAT_14c9a151c == 0) {
        uVar27 = (ulonglong)DAT_14c9a14f0;
        uVar31 = DAT_14c9a14f0 + 1;
        bVar40 = DAT_14c9a14f4 == DAT_14c9a14f0;
        DAT_14c9a14f0 = uVar31;
        if (bVar40) {
          FUN_1447030e2(&DAT_14c9a14e8,uVar30);
        }
        iVar17 = DAT_14c9a1510;
        if (DAT_14c9a1510 == 0) {
          iVar29 = -1;
        }
        else {
          iVar29 = DAT_14c9a1510 + 0x1e;
          if (-1 < DAT_14c9a1510 + -1) {
            iVar29 = DAT_14c9a1510 + -1;
          }
          iVar29 = iVar29 >> 5;
        }
        iVar18 = DAT_14c9a1510 + 1;
        iVar22 = DAT_14c9a1510 + 0x1f;
        if (-1 < DAT_14c9a1510) {
          iVar22 = DAT_14c9a1510;
        }
        if (iVar22 >> 5 != iVar29) {
          if (DAT_14c9a1514 <= DAT_14c9a1510) {
            if (DAT_14c9a1510 + 0x20U < 0xa0) {
              DAT_14c9a1514 = 0x80;
            }
            else {
              uVar31 = DAT_14c9a1510 + 0x20U >> 5;
              if (DAT_14c9a1514 + 0x1fU < 0xa0) {
                uVar35 = 4;
                if (4 < uVar31) {
                  uVar35 = uVar31;
                }
              }
              else {
                uVar35 = (uVar31 * 3 >> 3) + uVar31 + 0x10;
              }
              uVar20 = FUN_144a3809e(uVar35 << 2,0);
              iVar29 = (int)(uVar20 >> 2);
              DAT_14c9a1514 = -0x20;
              if ((int)uVar31 <= iVar29) {
                DAT_14c9a1514 = iVar29 << 5;
              }
            }
            FUN_1446efbd8(&DAT_14c9a14f8,DAT_14c9a1510);
            iVar18 = DAT_14c9a1510 + 1;
          }
          iVar29 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar29 = iVar18;
          }
          if (iVar18 % 0x20 != 0) {
            puVar24 = &DAT_14c9a14f8;
            if (DAT_14c9a1508 != (undefined *)0x0) {
              puVar24 = DAT_14c9a1508;
            }
            bVar21 = -(char)(iVar18 % 0x20);
            DAT_14c9a1510 = iVar18;
            *(uint *)(puVar24 + (longlong)(iVar29 >> 5) * 4) =
                 (uint)(*(int *)(puVar24 + (longlong)(iVar29 >> 5) * 4) << (bVar21 & 0x1f)) >>
                 (bVar21 & 0x1f);
            iVar18 = DAT_14c9a1510;
          }
        }
        DAT_14c9a1510 = iVar18;
        lVar39 = (longlong)(int)uVar30;
        puVar24 = &DAT_14c9a14f8;
        if (DAT_14c9a1508 != (undefined *)0x0) {
          puVar24 = DAT_14c9a1508;
        }
        bVar21 = (byte)iVar17 & 0x1f;
        *(uint *)(puVar24 + (longlong)(iVar22 >> 5) * 4) =
             *(uint *)(puVar24 + (longlong)(iVar22 >> 5) * 4) &
             (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
      }
      else {
        uVar27 = (ulonglong)DAT_14c9a1518;
        lVar39 = (longlong)(int)DAT_14c9a1518;
        DAT_14c9a1518 = *(uint *)(DAT_14c9a14e8 + 4 + lVar39 * 0x38);
        DAT_14c9a151c = DAT_14c9a151c - 1;
        if (DAT_14c9a151c != 0) {
          *(undefined4 *)(DAT_14c9a14e8 + (longlong)(int)DAT_14c9a1518 * 0x38) = 0xffffffff;
        }
      }
      iVar17 = (int)uVar27;
      puVar24 = &DAT_14c9a14f8;
      if (DAT_14c9a1508 != (undefined *)0x0) {
        puVar24 = DAT_14c9a1508;
      }
      iVar29 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar29 = iVar17;
      }
      *(uint *)(puVar24 + (longlong)(iVar29 >> 5) * 4) =
           *(uint *)(puVar24 + (longlong)(iVar29 >> 5) * 4) | 1 << ((byte)uVar27 & 0x1f);
      lVar32 = DAT_14c9a14e8;
      iVar29 = 1;
      lVar39 = lVar39 * 0x38;
      puVar2 = (undefined4 *)(DAT_14c9a14e8 + lVar39);
      FUN_1406fa146(puVar2);
      *(undefined8 *)(lVar32 + 0x28 + lVar39) = 0;
      *(undefined4 *)(lVar32 + 0x30 + lVar39) = 0xffffffff;
      lVar37 = (longlong)*(int *)(lVar32 + 0x20 + lVar39);
      if (lVar37 == 0) {
        uVar30 = 0;
      }
      else {
        lVar25 = 0;
        uVar30 = 0;
        do {
          uVar19 = *(undefined8 *)(*(longlong *)(lVar32 + 0x18 + lVar39) + lVar25);
          uVar31 = (uint)((ulonglong)uVar19 >> 0x10);
          uVar35 = (uint)uVar19 & 0xffff;
          uVar31 = ((uint)uVar19 << 0x10 | uVar35) + (int)((ulonglong)uVar19 >> 0x20) +
                   (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar35 >> 4);
          uVar30 = uVar31 >> 0xd ^ uVar30 - uVar31;
          uVar35 = uVar30 << 8 ^ (-0x61c88647 - uVar31) - uVar30;
          uVar36 = uVar35 >> 0xd ^ (uVar31 - uVar30) - uVar35;
          uVar30 = uVar36 >> 0xc ^ (uVar30 - uVar35) - uVar36;
          uVar31 = uVar30 << 0x10 ^ (uVar35 - uVar36) - uVar30;
          uVar35 = uVar31 >> 5 ^ (uVar36 - uVar30) - uVar31;
          uVar36 = uVar35 >> 3 ^ (uVar30 - uVar31) - uVar35;
          uVar30 = uVar36 << 10 ^ (uVar31 - uVar35) - uVar36;
          uVar30 = uVar30 >> 0xf ^ uVar35 - (uVar36 + uVar30);
          lVar25 = lVar25 + 8;
        } while (lVar37 * 8 != lVar25);
      }
      if (DAT_14c9a14f0 - DAT_14c9a151c == 1) {
        uVar31 = 1;
LAB_14000a8ab:
        if (((int)uVar31 < 1) || (iVar29 <= DAT_14c9a1530)) {
          uVar30 = DAT_14c9a1530 - 1U & uVar30;
          puVar2[0xd] = uVar30;
          puVar24 = DAT_14c9a1528;
          if (DAT_14c9a1528 == (undefined *)0x0) {
            puVar24 = &DAT_14c9a1520;
          }
          puVar2[0xc] = *(undefined4 *)
                         (puVar24 + ((longlong)DAT_14c9a1530 - 1U & (longlong)(int)uVar30) * 4);
          puVar24 = DAT_14c9a1528;
          if (DAT_14c9a1528 == (undefined *)0x0) {
            puVar24 = &DAT_14c9a1520;
          }
          *(int *)(puVar24 + ((longlong)DAT_14c9a1530 - 1U & (longlong)(int)uVar30) * 4) = iVar17;
        }
        else {
          DAT_14c9a1530 = iVar29;
          FUN_14000dc70();
        }
      }
      else {
        uVar31 = FUN_14000b92e(uVar30);
        if (uVar31 == 0xffffffff) {
          uVar31 = DAT_14c9a14f0 - DAT_14c9a151c;
          if (3 < uVar31) {
            uVar20 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
            lVar39 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar39 == 0; lVar39 = lVar39 + -1) {
              }
            }
            iVar29 = 1 << ((byte)lVar39 & 0x1f);
          }
          goto LAB_14000a8ab;
        }
        puVar1 = (undefined4 *)(DAT_14c9a14e8 + (longlong)(int)uVar31 * 0x38);
        if (*(longlong *)(DAT_14c9a14e8 + 0x18 + (longlong)(int)uVar31 * 0x38) != 0) {
          FUN_1400020a8();
        }
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        uVar8 = puVar2[4];
        uVar9 = puVar2[5];
        uVar10 = puVar2[6];
        uVar11 = puVar2[7];
        uVar12 = puVar2[9];
        uVar13 = puVar2[10];
        uVar14 = puVar2[0xb];
        puVar1[8] = puVar2[8];
        puVar1[9] = uVar12;
        puVar1[10] = uVar13;
        puVar1[0xb] = uVar14;
        puVar1[4] = uVar8;
        puVar1[5] = uVar9;
        puVar1[6] = uVar10;
        puVar1[7] = uVar11;
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        FUN_14000ba72(uVar27);
        uVar27 = (ulonglong)uVar31;
      }
      puVar28 = (uint *)(DAT_14c9a14e8 + (longlong)(int)uVar27 * 0x38 + 0x28);
LAB_14000a92a:
      bVar40 = true;
    }
    else {
      puVar28 = (uint *)(lVar39 + 0x28);
      if (*(int *)(lVar39 + 0x2c) == 0) {
LAB_14000a67b:
        bVar40 = false;
        uVar27 = 0;
      }
      else {
        uVar30 = *puVar28;
        if (((((int)uVar30 < 0) || (DAT_14c9647dc <= (int)uVar30)) ||
            (puVar26 = (ulonglong *)
                       ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
            puVar26 == (ulonglong *)0x0)) ||
           (((int)puVar26[2] != *(int *)(lVar39 + 0x2c) || ((puVar26[1] & 0x10200000) != 0))))
        goto LAB_14000a92a;
        if ((puVar26[1] & 0x10200000) != 0) goto LAB_14000a67b;
        uVar27 = *puVar26;
        bVar40 = false;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a1538);
    if (local_68[2] != 0) {
      FUN_1400020a8();
    }
    if (!bVar40) goto LAB_14000a6a8;
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  pbVar3 = (byte *)*param_1;
  if ((pbVar3 == (byte *)0x0) || ((~*pbVar3 & 3) != 0)) {
LAB_14000ac8c:
    if (puVar28 != (uint *)0x0) {
LAB_14000ac95:
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a1538);
      if (param_2 == 0) {
        local_70 = (void *)0x0;
      }
      else {
        for (uVar27 = *(ulonglong *)(param_2 + 0x10); (uVar27 & 1) == 0;
            uVar27 = *(ulonglong *)(uVar27 + 0x10)) {
          if (uVar27 < 2) goto LAB_14000b752;
        }
        uVar27 = uVar27 & 0xfffffffffffffffe;
        if (uVar27 == 0) {
LAB_14000b752:
          local_70._0_4_ = 0;
          iVar17 = 0;
          uVar30 = (uint)local_70;
        }
        else {
          if (DAT_14c950c29 != '\0') {
            FUN_1456cec3c(uVar27);
          }
          uVar30 = *(uint *)(uVar27 + 0xc);
          local_70 = (void *)(ulonglong)uVar30;
          if ((int)uVar30 < DAT_14c9647dc) {
            lVar39 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
          }
          else {
            lVar39 = 0;
          }
          iVar17 = *(int *)(lVar39 + 0x10);
          if (*(int *)(lVar39 + 0x10) == 0) {
            LOCK();
            iVar17 = DAT_14c964868 + 1;
            UNLOCK();
            iVar29 = DAT_14c964868 + 1;
            bVar40 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar17;
            if (bVar40) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar29);
            }
            LOCK();
            iVar17 = *(int *)(lVar39 + 0x10);
            bVar40 = iVar17 == 0;
            if (bVar40) {
              *(int *)(lVar39 + 0x10) = iVar29;
              iVar17 = 0;
            }
            UNLOCK();
            uVar30 = (uint)local_70;
            if (bVar40) {
              iVar17 = iVar29;
            }
          }
        }
        local_70._0_4_ = uVar30;
        local_70 = (void *)CONCAT44(iVar17,(uint)local_70);
        puVar24 = *(undefined **)(param_2 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_a8 = FUN_140342cba();
          local_a0 = FUN_1468c7f1e;
          local_b0 = 0;
          local_b8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        if ((DAT_14c951a40 == 0) && (puVar24 != &DAT_14c951a38 && puVar24 != (undefined *)0x0)) {
          do {
            puVar24 = *(undefined **)(puVar24 + 0x30);
            if (puVar24 == &DAT_14c951a38) break;
          } while (puVar24 != (undefined *)0x0);
        }
      }
      local_68[2] = 0;
      uStack_50 = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      FUN_1449651a4();
      if (DAT_14c9a14f0 != DAT_14c9a151c) {
        if ((longlong)(int)uStack_50 == 0) {
          uVar30 = 0;
        }
        else {
          lVar39 = 0;
          uVar30 = 0;
          do {
            uVar19 = *(undefined8 *)(local_68[2] + lVar39);
            uVar31 = (uint)((ulonglong)uVar19 >> 0x10);
            uVar35 = (uint)uVar19 & 0xffff;
            uVar31 = ((uint)uVar19 << 0x10 | uVar35) + (int)((ulonglong)uVar19 >> 0x20) +
                     (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar35 >> 4);
            uVar35 = uVar31 >> 0xd ^ uVar30 - uVar31;
            uVar30 = uVar35 << 8 ^ (-0x61c88647 - uVar31) - uVar35;
            uVar36 = uVar30 >> 0xd ^ (uVar31 - uVar35) - uVar30;
            uVar31 = uVar36 >> 0xc ^ (uVar35 - uVar30) - uVar36;
            uVar35 = uVar31 << 0x10 ^ (uVar30 - uVar36) - uVar31;
            uVar30 = uVar35 >> 5 ^ (uVar36 - uVar31) - uVar35;
            uVar36 = uVar30 >> 3 ^ (uVar31 - uVar35) - uVar30;
            uVar31 = uVar36 << 10 ^ (uVar35 - uVar30) - uVar36;
            uVar30 = uVar31 >> 0xf ^ uVar30 - (uVar36 + uVar31);
            lVar39 = lVar39 + 8;
          } while ((longlong)(int)uStack_50 * 8 != lVar39);
        }
        puVar24 = DAT_14c9a1528;
        if (DAT_14c9a1528 == (undefined *)0x0) {
          puVar24 = &DAT_14c9a1520;
        }
        uVar27 = (longlong)(int)uVar30 & (longlong)DAT_14c9a1530 - 1U;
        iVar17 = *(int *)(puVar24 + uVar27 * 4);
        if (iVar17 != -1) {
          piVar34 = (int *)(puVar24 + uVar27 * 4);
LAB_14000aeaa:
          lVar39 = DAT_14c9a14e8 + (longlong)iVar17 * 0x38;
          cVar16 = FUN_14000ba0a(DAT_14c9a14e8 + (longlong)iVar17 * 0x38 + 0x10,local_68 + 1);
          if (((cVar16 == '\0') || (*(int *)(lVar39 + 0x20) != (int)uStack_50)) ||
             (cVar16 = FUN_14000b9e1(*(undefined8 *)(lVar39 + 0x18),local_68[2]), cVar16 == '\0'))
          goto LAB_14000b661;
          iVar17 = *piVar34;
          lVar39 = (longlong)iVar17 * 0x38;
          puVar24 = &DAT_14c9a1520;
          if (DAT_14c9a1528 != (undefined *)0x0) {
            puVar24 = DAT_14c9a1528;
          }
          lVar32 = (longlong)*(int *)(DAT_14c9a14e8 + 0x34 + lVar39);
          iVar29 = *(int *)(puVar24 + lVar32 * 4);
          if (iVar29 == iVar17) {
            piVar34 = (int *)(puVar24 + lVar32 * 4);
          }
          else {
            do {
              piVar34 = (int *)(DAT_14c9a14e8 + (longlong)iVar29 * 0x38 + 0x30);
              iVar29 = *piVar34;
            } while (iVar29 != iVar17);
          }
          *piVar34 = *(int *)(DAT_14c9a14e8 + lVar39 + 0x30);
          if (*(longlong *)(DAT_14c9a14e8 + 0x18 + lVar39) != 0) {
            FUN_1400020a8();
          }
          FUN_14000ba72(iVar17);
        }
      }
LAB_14000af56:
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a1538);
    }
    uVar27 = 0;
  }
  else {
    lVar39 = *(longlong *)(pbVar3 + 8);
    if (*(int *)(lVar39 + 0x28) != *(int *)(lVar39 + 0x54)) {
      lVar32 = lVar39 + 0x58;
      if (*(longlong *)(lVar39 + 0x60) != 0) {
        lVar32 = *(longlong *)(lVar39 + 0x60);
      }
      iVar17 = *(int *)(lVar32 + (ulonglong)(*(int *)(lVar39 + 0x68) - 1U & DAT_14c9a1730) * 4);
      if (iVar17 != -1) {
        do {
          lVar32 = *(longlong *)(lVar39 + 0x18) + (longlong)iVar17 * 0x40;
          if (*(uint *)(*(longlong *)(lVar39 + 0x18) + (longlong)iVar17 * 0x40) == DAT_14c9a1730) {
            if ((((lVar32 != 0) &&
                 (puVar23 = (undefined8 *)(lVar32 + 0x28), puVar23 != (undefined8 *)0x0)) &&
                ((byte *)*puVar23 != (byte *)0x0)) && ((*(byte *)*puVar23 & 0x40) == 0))
            goto LAB_14000ac80;
            break;
          }
          iVar17 = *(int *)(lVar32 + 0x38);
        } while (iVar17 != -1);
      }
    }
    puVar23 = &DAT_14c9a1308;
LAB_14000ac80:
    pbVar3 = (byte *)*puVar23;
    if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) || (*(longlong *)(pbVar3 + 8) == 0))
    goto LAB_14000ac8c;
    FUN_1400b22c2(&local_70);
    pvVar15 = local_70;
    iVar17 = (int)local_68[0];
    local_88 = local_70;
    uStack_80 = local_68[0];
    if ((int)local_68[0] < 2) goto LAB_14000ac8c;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a1590);
    iVar29 = 0;
    do {
      iVar29 = iVar29 + 1;
    } while (iVar17 + -1 != iVar29);
    iVar17 = FUN_14000c3f4();
    uVar20 = 0;
    lVar39 = 0;
    if (iVar17 != -1) {
      lVar39 = (longlong)iVar17 * 0x20 + DAT_14c9a1540;
    }
    if (lVar39 == 0) {
      uVar19 = FUN_140851d9a();
      local_b8 = 0;
      uVar27 = FUN_140277cc4(uVar19,pvVar15,0,0);
      local_98 = 0;
      if (uVar27 != 0) {
        uVar30 = *(uint *)(uVar27 + 0xc);
        uVar20 = (ulonglong)uVar30;
        if ((int)uVar30 < DAT_14c9647dc) {
          lVar39 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
        }
        else {
          lVar39 = 0;
        }
        local_98 = (ulonglong)*(uint *)(lVar39 + 0x10);
        if (*(uint *)(lVar39 + 0x10) == 0) {
          LOCK();
          iVar17 = DAT_14c964868 + 1;
          UNLOCK();
          uVar30 = DAT_14c964868 + 1;
          bVar40 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar17;
          if (bVar40) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar30);
          }
          LOCK();
          uVar31 = *(uint *)(lVar39 + 0x10);
          bVar40 = uVar31 == 0;
          if (bVar40) {
            *(uint *)(lVar39 + 0x10) = uVar30;
            uVar31 = 0;
          }
          UNLOCK();
          if (bVar40) {
            uVar31 = uVar30;
          }
          local_98 = (ulonglong)uVar31;
        }
      }
      iVar29 = DAT_14c9a1570;
      iVar17 = DAT_14c9a1548;
      local_90 = uVar20;
      if (DAT_14c9a1574 == 0) {
        iVar29 = DAT_14c9a1548 + 1;
        bVar40 = DAT_14c9a154c == DAT_14c9a1548;
        DAT_14c9a1548 = iVar29;
        if (bVar40) {
          FUN_1447711aa(&DAT_14c9a1540,iVar17);
        }
        iVar29 = DAT_14c9a1568;
        if (DAT_14c9a1568 == 0) {
          iVar18 = -1;
        }
        else {
          iVar18 = DAT_14c9a1568 + 0x1e;
          if (-1 < DAT_14c9a1568 + -1) {
            iVar18 = DAT_14c9a1568 + -1;
          }
          iVar18 = iVar18 >> 5;
        }
        iVar22 = DAT_14c9a1568 + 1;
        iVar38 = DAT_14c9a1568 + 0x1f;
        if (-1 < DAT_14c9a1568) {
          iVar38 = DAT_14c9a1568;
        }
        if (iVar38 >> 5 != iVar18) {
          if (DAT_14c9a156c <= DAT_14c9a1568) {
            if (DAT_14c9a1568 + 0x20U < 0xa0) {
              DAT_14c9a156c = 0x80;
            }
            else {
              uVar30 = DAT_14c9a1568 + 0x20U >> 5;
              if (DAT_14c9a156c + 0x1fU < 0xa0) {
                uVar31 = 4;
                if (4 < uVar30) {
                  uVar31 = uVar30;
                }
              }
              else {
                uVar31 = (uVar30 * 3 >> 3) + uVar30 + 0x10;
              }
              uVar20 = FUN_144a3809e(uVar31 << 2,0);
              iVar18 = (int)(uVar20 >> 2);
              DAT_14c9a156c = -0x20;
              if ((int)uVar30 <= iVar18) {
                DAT_14c9a156c = iVar18 << 5;
              }
            }
            FUN_1446efbd8(&DAT_14c9a1550,DAT_14c9a1568);
            iVar22 = DAT_14c9a1568 + 1;
          }
          iVar18 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar18 = iVar22;
          }
          if (iVar22 % 0x20 != 0) {
            puVar24 = &DAT_14c9a1550;
            if (DAT_14c9a1560 != (undefined *)0x0) {
              puVar24 = DAT_14c9a1560;
            }
            bVar21 = -(char)(iVar22 % 0x20);
            DAT_14c9a1568 = iVar22;
            *(uint *)(puVar24 + (longlong)(iVar18 >> 5) * 4) =
                 (uint)(*(int *)(puVar24 + (longlong)(iVar18 >> 5) * 4) << (bVar21 & 0x1f)) >>
                 (bVar21 & 0x1f);
            iVar22 = DAT_14c9a1568;
          }
        }
        DAT_14c9a1568 = iVar22;
        lVar39 = (longlong)iVar17;
        puVar24 = &DAT_14c9a1550;
        if (DAT_14c9a1560 != (undefined *)0x0) {
          puVar24 = DAT_14c9a1560;
        }
        bVar21 = (byte)iVar29 & 0x1f;
        *(uint *)(puVar24 + (longlong)(iVar38 >> 5) * 4) =
             *(uint *)(puVar24 + (longlong)(iVar38 >> 5) * 4) &
             (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
        iVar29 = iVar17;
      }
      else {
        lVar39 = (longlong)DAT_14c9a1570;
        DAT_14c9a1570 = *(int *)(DAT_14c9a1540 + 4 + lVar39 * 0x20);
        DAT_14c9a1574 = DAT_14c9a1574 + -1;
        if (DAT_14c9a1574 != 0) {
          *(undefined4 *)(DAT_14c9a1540 + (longlong)DAT_14c9a1570 * 0x20) = 0xffffffff;
        }
      }
      pvVar15 = local_88;
      puVar24 = &DAT_14c9a1550;
      if (DAT_14c9a1560 != (undefined *)0x0) {
        puVar24 = DAT_14c9a1560;
      }
      iVar17 = iVar29 + 0x1f;
      if (-1 < iVar29) {
        iVar17 = iVar29;
      }
      *(uint *)(puVar24 + (longlong)(iVar17 >> 5) * 4) =
           *(uint *)(puVar24 + (longlong)(iVar17 >> 5) * 4) | 1 << ((byte)iVar29 & 0x1f);
      lVar32 = DAT_14c9a1540;
      lVar39 = lVar39 * 0x20;
      puVar23 = (undefined8 *)(DAT_14c9a1540 + lVar39);
      *(undefined8 *)(DAT_14c9a1540 + lVar39) = 0;
      lVar37 = (longlong)(int)uStack_80;
      *(int *)(lVar32 + 8 + lVar39) = (int)uStack_80;
      if (lVar37 == 0) {
        *(undefined4 *)((longlong)puVar23 + 0xc) = 0;
        iVar17 = 0;
      }
      else {
        FUN_1446dd670(puVar23,uStack_80 & 0xffffffff,0);
        memcpy((void *)*puVar23,pvVar15,lVar37 * 2);
        iVar17 = *(int *)(puVar23 + 1);
      }
      puVar23[2] = local_90 & 0xffffffff | local_98 << 0x20;
      *(undefined4 *)(puVar23 + 3) = 0xffffffff;
      uVar30 = 0;
      iVar18 = iVar17 + -1;
      if (iVar17 == 0) {
        iVar18 = 0;
      }
      if (0 < iVar18) {
        if (iVar17 == 0) {
          puVar33 = &DAT_149dfb77a;
        }
        else {
          puVar33 = (undefined2 *)*puVar23;
        }
        lVar39 = 0;
        uVar30 = 0;
        do {
          uVar31 = ((uint)(ushort)puVar33[lVar39] +
                   (uint)(0x19 < (ushort)puVar33[lVar39] - 0x61) * 0x20) - 0x20;
          uVar30 = uVar30 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar30 ^ uVar31) & 0xff) * 4);
          uVar30 = uVar30 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ uVar31 >> 8 & 0xff) * 4);
          lVar39 = lVar39 + 1;
        } while (iVar18 != (int)lVar39);
      }
      uVar31 = DAT_14c9a1548 - DAT_14c9a1574;
      iVar17 = 1;
      if (uVar31 != 1) {
        iVar18 = FUN_14000c3f4(uVar30);
        if (iVar18 != -1) {
          puVar2 = (undefined4 *)(DAT_14c9a1540 + (longlong)iVar18 * 0x20);
          if (*(longlong *)(DAT_14c9a1540 + (longlong)iVar18 * 0x20) != 0) {
            FUN_1400020a8();
          }
          uVar4 = *(undefined4 *)puVar23;
          uVar5 = *(undefined4 *)((longlong)puVar23 + 4);
          uVar6 = *(undefined4 *)(puVar23 + 1);
          uVar7 = *(undefined4 *)((longlong)puVar23 + 0xc);
          *(undefined8 *)(puVar2 + 4) = puVar23[2];
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          FUN_14709edd0(iVar29);
          goto LAB_14000b272;
        }
        if (3 < uVar31) {
          uVar20 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
          lVar39 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar39 & 0x1f);
        }
      }
      if (((int)uVar31 < 1) || (iVar17 <= DAT_14c9a1588)) {
        uVar30 = DAT_14c9a1588 - 1U & uVar30;
        *(uint *)((longlong)puVar23 + 0x1c) = uVar30;
        puVar24 = DAT_14c9a1580;
        if (DAT_14c9a1580 == (undefined *)0x0) {
          puVar24 = &DAT_14c9a1578;
        }
        *(undefined4 *)(puVar23 + 3) =
             *(undefined4 *)(puVar24 + ((longlong)DAT_14c9a1588 - 1U & (longlong)(int)uVar30) * 4);
        puVar24 = DAT_14c9a1580;
        if (DAT_14c9a1580 == (undefined *)0x0) {
          puVar24 = &DAT_14c9a1578;
        }
        *(int *)(puVar24 + ((longlong)DAT_14c9a1588 - 1U & (longlong)(int)uVar30) * 4) = iVar29;
      }
      else {
        DAT_14c9a1588 = iVar17;
        FUN_14000d988();
      }
    }
    else if (*(int *)(lVar39 + 0x14) == 0) {
LAB_14000b270:
      uVar27 = 0;
    }
    else {
      uVar30 = *(uint *)(lVar39 + 0x10);
      if ((((int)uVar30 < 0) || (DAT_14c9647dc <= (int)uVar30)) ||
         ((puVar26 = (ulonglong *)
                     ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8)),
          puVar26 == (ulonglong *)0x0 ||
          (((int)puVar26[2] != *(int *)(lVar39 + 0x14) || ((puVar26[1] & 0x10200000) != 0)))))) {
        uVar19 = FUN_140851d9a();
        local_b8 = 0;
        uVar27 = FUN_140277cc4(uVar19,pvVar15,0,0);
        FUN_14485c47a((uint *)(lVar39 + 0x10));
      }
      else {
        if ((puVar26[1] & 0x10200000) != 0) goto LAB_14000b270;
        uVar27 = *puVar26;
      }
    }
LAB_14000b272:
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a1590);
    if (puVar28 != (uint *)0x0) {
      if (uVar27 != 0) {
        uVar30 = *(uint *)(uVar27 + 0xc);
        *puVar28 = uVar30;
        if ((int)uVar30 < DAT_14c9647dc) {
          lVar39 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
        }
        else {
          lVar39 = 0;
        }
        uVar30 = *(uint *)(lVar39 + 0x10);
        if (*(uint *)(lVar39 + 0x10) == 0) {
          LOCK();
          iVar17 = DAT_14c964868 + 1;
          UNLOCK();
          uVar31 = DAT_14c964868 + 1;
          bVar40 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar17;
          if (bVar40) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar31);
          }
          LOCK();
          uVar30 = *(uint *)(lVar39 + 0x10);
          bVar40 = uVar30 == 0;
          if (bVar40) {
            *(uint *)(lVar39 + 0x10) = uVar31;
            uVar30 = 0;
          }
          UNLOCK();
          if (bVar40) {
            uVar30 = uVar31;
          }
        }
        puVar28[1] = uVar30;
        goto LAB_14000af77;
      }
      goto LAB_14000ac95;
    }
  }
LAB_14000af77:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14000a6a8:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27;
LAB_14000b661:
  iVar17 = *(int *)(lVar39 + 0x30);
  piVar34 = (int *)(lVar39 + 0x30);
  if (iVar17 == -1) goto LAB_14000af56;
  goto LAB_14000aeaa;
}



// FUNCTION 14000b92e FUN_14000b92e body=179 status=ok
// SIG undefined FUN_14000b92e(void)

int FUN_14000b92e(uint param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14c9a14f0 != DAT_14c9a151c) {
    puVar3 = &DAT_14c9a1520;
    if (DAT_14c9a1528 != (undefined *)0x0) {
      puVar3 = DAT_14c9a1528;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)(DAT_14c9a1530 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = DAT_14c9a14e8;
        lVar5 = (longlong)iVar4 * 0x38;
        cVar2 = FUN_14000ba0a(DAT_14c9a14e8 + lVar5 + 0x10,param_2 + 0x10);
        if (((cVar2 != '\0') && (*(int *)(lVar1 + lVar5 + 0x20) == *(int *)(param_2 + 0x20))) &&
           (cVar2 = FUN_14000b9e1(*(undefined8 *)(lVar1 + lVar5 + 0x18),
                                  *(undefined8 *)(param_2 + 0x18)), cVar2 != '\0')) {
          return iVar4;
        }
        iVar4 = *(int *)(DAT_14c9a14e8 + 0x30 + lVar5);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 14000b9e1 FUN_14000b9e1 body=41 status=ok
// SIG undefined FUN_14000b9e1(void)

bool FUN_14000b9e1(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      bVar3 = *(longlong *)(param_1 + lVar2 * 8) == *(longlong *)(param_2 + lVar2 * 8);
      iVar1 = (int)lVar2;
      lVar2 = lVar2 + 1;
    } while (bVar3 && param_3 + -1 != iVar1);
    return bVar3;
  }
  return true;
}



// FUNCTION 14000ba0a FUN_14000ba0a body=104 status=ok
// SIG undefined FUN_14000ba0a(void)

ulonglong FUN_14000ba0a(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 14000ba72 FUN_14000ba72 body=137 status=ok
// SIG undefined FUN_14000ba72(void)

void FUN_14000ba72(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  lVar2 = DAT_14c9a14e8;
  if (DAT_14c9a151c != 0) {
    *(int *)(DAT_14c9a14e8 + (longlong)DAT_14c9a1518 * 0x38) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x38) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14c9a151c) {
    iVar3 = DAT_14c9a1518;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x38 + 4) = iVar3;
  DAT_14c9a151c = DAT_14c9a151c + 1;
  puVar4 = &DAT_14c9a14f8;
  if (DAT_14c9a1508 != (undefined *)0x0) {
    puVar4 = DAT_14c9a1508;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a1518 = param_1;
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14000bafc FUN_14000bafc body=219 status=ok
// SIG undefined FUN_14000bafc(void)

ulonglong FUN_14000bafc(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_1;
  plVar1 = (longlong *)param_1[2];
  local_68 = param_1;
  local_60 = param_2;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    local_28 = &local_38;
    local_78 = &local_30;
    local_30 = &LAB_14281a0d4;
    local_40 = &local_50;
    local_48 = FUN_14167b4d8;
    local_50 = local_58;
    local_38 = local_58;
    lVar3 = FUN_14000c4cc(plVar1,param_2,param_1 + 3);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar3 != 0);
    if (lVar3 != 0) {
      FUN_14000ce30(param_1,(lVar3 - *plVar1) / (longlong)*(int *)((longlong)param_1 + 0x24) &
                            0xffffffff,1);
    }
  }
  else {
    uVar2 = FUN_1468e9738(&local_68,plVar1);
    uVar4 = (ulonglong)uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000bbd8 FUN_14000bbd8 body=172 status=ok
// SIG undefined FUN_14000bbd8(void)

undefined8 * FUN_14000bbd8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_140001510(param_1,&local_40,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000bc86 FUN_14000bc86 body=1591 status=ok
// SIG undefined FUN_14000bc86(void)

undefined8 FUN_14000bc86(undefined8 *param_1,longlong param_2,uint *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_3d8 [40];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined1 local_3a0 [16];
  uint local_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  longlong local_380;
  undefined8 local_378;
  undefined1 local_370 [256];
  longlong local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined4 local_250;
  longlong local_158;
  undefined8 local_150;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  longlong local_130;
  uint local_128;
  uint uStack_124;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_2 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar12 = lVar5 != 0;
      if (lVar5 != lVar2 && bVar12) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar12 = lVar5 != 0;
          if (lVar5 == lVar2) break;
        } while (lVar5 != 0);
      }
      if (bVar12) goto LAB_14000bcd6;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_14000bcd6:
      lVar5 = *(longlong *)(param_2 + 0x70);
      if (lVar5 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9491a8) &&
           (FUN_144b3d300(&DAT_14c9491a8), DAT_14c9491a8 == -1)) {
          FUN_1446f470e(&local_140,L"SoftObjectPath",1);
          DAT_14c9491a0 = FUN_141473ad5(CONCAT44(uStack_13c,local_140));
          _Init_thread_footer(&DAT_14c9491a8);
        }
        if ((((DAT_14c9491a0 != 0) && (*(int *)(DAT_14c9491a0 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)
              (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14c9491a0 + 0x38) * 8) ==
             DAT_14c9491a0 + 0x30)) && (pbVar1 = (byte *)*param_1, pbVar1 != (byte *)0x0)) {
          if ((*pbVar1 & 3) == 1) {
            FUN_14006788a(&local_140,pbVar1,0,1);
            *param_3 = local_140;
            param_3[1] = uStack_13c;
            param_3[2] = uStack_138;
            param_3[3] = uStack_134;
            if (&local_140 == param_3) goto LAB_14000bf04;
            if (*(longlong *)(param_3 + 4) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_3 + 4) = local_130;
            param_3[6] = local_128;
            param_3[7] = uStack_124;
            goto LAB_14000bda1;
          }
          if ((*pbVar1 & 3) == 3) {
            plVar4 = (longlong *)FUN_1412446d2(param_1);
            local_250 = DAT_14c9a1490;
            local_258 = DAT_14c9a1488;
            FUN_1448075d0(&local_140);
            if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
              plVar6 = plVar4 + 8;
              if ((longlong *)plVar4[9] != (longlong *)0x0) {
                plVar6 = (longlong *)plVar4[9];
              }
              iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_140) * 4)
              ;
              if (iVar7 != -1) {
                do {
                  lVar5 = *plVar4 + (longlong)iVar7 * 0x40;
                  if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_140) {
                    if (CONCAT44(uStack_124,local_128) != 0) {
                      FUN_1400020a8();
                    }
                    if (lVar5 == 0) goto LAB_14000be62;
                    puVar9 = (undefined8 *)(lVar5 + 0x28);
                    if (((byte *)*puVar9 == (byte *)0x0) || ((~*(byte *)*puVar9 & 3) != 0))
                    goto LAB_14000be62;
                    plVar4 = (longlong *)FUN_1412446d2(puVar9);
                    local_250 = DAT_14c9a14a8;
                    local_258 = DAT_14c9a14a0;
                    FUN_1448075d0();
                    if ((int)plVar4[2] == *(int *)((longlong)plVar4 + 0x3c)) goto LAB_14000bfd9;
                    plVar6 = plVar4 + 8;
                    if ((longlong *)plVar4[9] != (longlong *)0x0) {
                      plVar6 = (longlong *)plVar4[9];
                    }
                    iVar7 = *(int *)((longlong)plVar6 +
                                    (ulonglong)((int)plVar4[10] - 1U & local_140) * 4);
                    if (iVar7 == -1) goto LAB_14000bfd9;
                    goto LAB_14000bfc0;
                  }
                  iVar7 = *(int *)(lVar5 + 0x38);
                } while (iVar7 != -1);
              }
            }
            if (CONCAT44(uStack_124,local_128) != 0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
LAB_14000be62:
  uVar3 = 0;
  goto LAB_14000bda3;
  while (iVar7 = *(int *)(lVar5 + 0x38), iVar7 != -1) {
LAB_14000bfc0:
    lVar5 = *plVar4 + (longlong)iVar7 * 0x40;
    if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_140) goto LAB_14000bfdb;
  }
LAB_14000bfd9:
  lVar5 = 0;
LAB_14000bfdb:
  puVar11 = (undefined8 *)(lVar5 + 0x28);
  if (lVar5 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  if (CONCAT44(uStack_124,local_128) != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_1412446d2(puVar9);
  local_250 = DAT_14c9a14c0;
  local_258 = DAT_14c9a14b8;
  FUN_1448075d0();
  if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
    plVar6 = plVar4 + 8;
    if ((longlong *)plVar4[9] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar4[9];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_140) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *plVar4 + (longlong)iVar7 * 0x40;
        if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_140) goto LAB_14000c079;
        iVar7 = *(int *)(lVar5 + 0x38);
      } while (iVar7 != -1);
    }
  }
  lVar5 = 0;
LAB_14000c079:
  puVar9 = (undefined8 *)(lVar5 + 0x28);
  if (lVar5 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (CONCAT44(uStack_124,local_128) != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_1412446d2(param_1);
  local_250 = DAT_14c9a14d8;
  local_258 = DAT_14c9a14d0;
  FUN_1448075d0(&local_140);
  if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
    plVar6 = plVar4 + 8;
    if ((longlong *)plVar4[9] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar4[9];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_140) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *plVar4 + (longlong)iVar7 * 0x40;
        if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_140) {
          if (CONCAT44(uStack_124,local_128) != 0) {
            FUN_1400020a8();
          }
          puVar8 = &DAT_149e02088;
          if (((lVar5 != 0) && (pbVar1 = *(byte **)(lVar5 + 0x28), pbVar1 != (byte *)0x0)) &&
             ((*pbVar1 & 3) == 1)) {
            puVar8 = *(undefined1 **)(pbVar1 + 8);
          }
          goto LAB_14000c16e;
        }
        iVar7 = *(int *)(lVar5 + 0x38);
      } while (iVar7 != -1);
    }
  }
  if (CONCAT44(uStack_124,local_128) != 0) {
    FUN_1400020a8();
  }
  puVar8 = &DAT_149e02088;
LAB_14000c16e:
  FUN_144a81018(&local_140,puVar8);
  FUN_140056680(local_3a0,local_38);
  puVar10 = &DAT_149e02088;
  puVar8 = &DAT_149e02088;
  if (puVar9 != (undefined8 *)0x0) {
    pbVar1 = (byte *)*puVar9;
    puVar8 = &DAT_149e02088;
    if ((pbVar1 != (byte *)0x0) && (puVar8 = &DAT_149e02088, (*pbVar1 & 3) == 1)) {
      puVar8 = *(undefined1 **)(pbVar1 + 8);
    }
  }
  FUN_144a81018(&local_258,puVar8);
  FUN_1446f470e(&local_3a8,local_150,1);
  if (((puVar11 != (undefined8 *)0x0) && (pbVar1 = (byte *)*puVar11, pbVar1 != (byte *)0x0)) &&
     ((*pbVar1 & 3) == 1)) {
    puVar10 = *(undefined1 **)(pbVar1 + 8);
  }
  FUN_144a81018(local_370,puVar10);
  FUN_1446f470e(&local_3b0,local_268,1);
  FUN_1403f0b60(&local_390,local_3b0,local_3a8,local_3a0);
  *param_3 = local_390;
  param_3[1] = uStack_38c;
  param_3[2] = uStack_388;
  param_3[3] = uStack_384;
  if (&local_390 == param_3) {
    if (local_380 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_3 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_3 + 4) = local_380;
    local_380 = 0;
    param_3[6] = (uint)local_378;
    param_3[7] = local_378._4_4_;
    local_378 = 0;
  }
  if (local_270 != 0) {
    FUN_1400020a8();
  }
  local_130 = local_40;
  if (local_158 != 0) {
    FUN_1400020a8();
    local_130 = local_40;
  }
LAB_14000bf04:
  if (local_130 != 0) {
    FUN_1400020a8();
  }
LAB_14000bda1:
  uVar3 = 1;
LAB_14000bda3:
  if ((local_28 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14000c2be FUN_14000c2be body=308 status=ok
// SIG undefined FUN_14000c2be(void)

uint FUN_14000c2be(char *param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t _Size;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  double dVar10;
  undefined1 auStack_a8 [36];
  uint local_84;
  char *local_80;
  char *local_78;
  ulonglong *local_70;
  char local_68;
  char local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  sVar5 = strlen(param_1);
  uVar6 = 0;
  local_84 = param_2;
  do {
    uVar2 = (uint)sVar5;
    if (uVar2 == 0) {
LAB_14000c3ec:
      local_84 = (uint)uVar6;
      break;
    }
    uVar2 = (int)uVar2 >> 0x1f & uVar2;
    while ((uVar7 = (uint)sVar5, pcVar9 = param_1, uVar8 = uVar2, uVar3 = uVar2, 0 < (int)uVar7 &&
           (uVar8 = uVar7, uVar3 = uVar7, *param_1 == ' '))) {
      param_1 = param_1 + 1;
      sVar5 = (size_t)(uVar7 - 1);
      if (uVar7 - 1 == 0) goto LAB_14000c3ec;
    }
    do {
      sVar5 = (size_t)uVar8;
      if ((0 < (int)uVar8) && (*pcVar9 == ' ')) goto LAB_14000c348;
      pcVar9 = pcVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    sVar5 = 0;
LAB_14000c348:
    iVar4 = uVar3 - (int)sVar5;
    if ((iVar4 == 0) || (0x17 < iVar4)) goto LAB_14000c3ec;
    local_68 = '\0';
    local_70 = &local_48;
    _Size = (size_t)iVar4;
    local_80 = local_60;
    local_78 = local_60;
    memcpy(local_60,param_1,_Size);
    pcVar1 = local_80;
    local_78 = local_60 + _Size;
    local_60[_Size] = '\0';
    dVar10 = atof(local_80);
    *(double *)(param_3 + uVar6 * 8) = dVar10;
    if (local_68 == '\x01') {
      FUN_1400020a8(pcVar1);
    }
    uVar6 = uVar6 + 1;
    param_1 = pcVar9;
  } while (uVar6 != param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_84;
}



// FUNCTION 14000c3f4 FUN_14000c3f4 body=216 status=ok
// SIG undefined FUN_14000c3f4(void)

int FUN_14000c3f4(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14c9a1548 != DAT_14c9a1574) {
    puVar8 = &DAT_14c9a1578;
    if (DAT_14c9a1580 != (undefined *)0x0) {
      puVar8 = DAT_14c9a1580;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(DAT_14c9a1588 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_14000c44a:
      lVar9 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(DAT_14c9a1540 + 8 + lVar9);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(DAT_14c9a1540 + lVar9) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_14000c4b8;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_14000c4b8;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14000c464;
    }
  }
  return -1;
LAB_14000c4b8:
  if (uVar6 == uVar5) {
    return iVar1;
  }
LAB_14000c464:
  iVar1 = *(int *)(DAT_14c9a1540 + 0x18 + lVar9);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14000c44a;
}



// FUNCTION 14000c4cc FUN_14000c4cc body=150 status=ok
// SIG undefined FUN_14000c4cc(void)

longlong FUN_14000c4cc(longlong *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_5;
  local_48 = &local_28;
  local_20 = param_5[1];
  local_38 = *param_4;
  local_30 = param_4[1];
  iVar1 = FUN_14000c564(param_1,param_2,param_3,&local_38);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)*param_3 + (longlong)iVar1 * (longlong)param_3[5] + *param_1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000c564 FUN_14000c564 body=143 status=ok
// SIG undefined FUN_14000c564(void)

undefined8
FUN_14000c564(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x34)) {
    uVar1 = 0xffffffff;
  }
  else {
    local_28 = *param_5;
    local_10 = &local_28;
    local_20 = param_5[1];
    local_48 = &local_18;
    local_18 = FUN_14000cde2;
    local_38 = *param_4;
    local_30 = param_4[1];
    uVar1 = FUN_14000ccf6(param_1,param_2,param_3 + 4,&local_38);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000c5f4 FUN_14000c5f4 body=343 status=ok
// SIG undefined FUN_14000c5f4(void)

undefined4 *
FUN_14000c5f4(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14000cb08(param_1,local_50);
  FUN_14000c74c(param_3,local_48);
  *(undefined4 *)(local_48 + 0xb) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(*local_48 >> 0x14) & 0xffff ^ (uint)(*local_48 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14000c862(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x5c) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0xb) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14000d738(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000c74c FUN_14000c74c body=151 status=ok
// SIG undefined FUN_14000c74c(void)

undefined8 * FUN_14000c74c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  *param_2 = *(undefined8 *)*param_1;
  FUN_14000c7e4(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140cbf268(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000c7e4 FUN_14000c7e4 body=125 status=ok
// SIG undefined FUN_14000c7e4(void)

undefined8 * FUN_14000c7e4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14000c936();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14000c862 FUN_14000c862 body=212 status=ok
// SIG undefined FUN_14000c862(void)

void FUN_14000c862(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140cbf268((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_14709ee50(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14000c8d9;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14000c8d9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14000c936 FUN_14000c936 body=464 status=ok
// SIG undefined FUN_14000c936(void)

longlong * FUN_14000c936(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        if (*(longlong *)(lVar2 + 0x28 + (longlong)iVar6 * 0x40) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x40) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14000cb08 FUN_14000cb08 body=493 status=ok
// SIG undefined FUN_14000cb08(void)

int * FUN_14000cb08(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x60);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 14000ccf6 FUN_14000ccf6 body=234 status=ok
// SIG undefined FUN_14000ccf6(void)

int FUN_14000ccf6(longlong *param_1,longlong param_2,int *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  code *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    local_60 = (code *)*param_5;
    uVar1 = param_5[1];
    local_50 = param_2;
    iVar3 = (*(code *)*param_4)(param_4[1]);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = (longlong)iVar3 * (longlong)param_3[4] + *param_1;
        local_58 = param_2;
        local_50 = lVar5;
        cVar2 = (*local_60)(uVar1,&local_58,&local_50);
        if (cVar2 != '\0') goto LAB_14000cda3;
        iVar3 = *(int *)(lVar5 + *param_3);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14000cda3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000cde2 FUN_14000cde2 body=77 status=ok
// SIG undefined FUN_14000cde2(void)

void FUN_14000cde2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_3;
  local_18 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000ce30 FUN_14000ce30 body=179 status=ok
// SIG undefined FUN_14000ce30(void)

void FUN_14000ce30(longlong param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_40 = param_1;
  local_38 = param_2;
  local_34 = param_3;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    FUN_140459344();
    if (param_3 != 0) {
      do {
        if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x28))) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
          if (*(longlong *)(lVar1 + 0x20) == 0) {
            lVar2 = lVar1 + 0x10;
          }
          if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
            FUN_14000cee4(lVar1,param_2,param_1 + 0x1c);
            param_3 = param_3 + -1;
          }
        }
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
  }
  else {
    FUN_1456ab932(&local_40,lVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000cee4 FUN_14000cee4 body=138 status=ok
// SIG undefined FUN_14000cee4(void)

void FUN_14000cee4(longlong *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_3[4] * param_2) + *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  uVar3 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(param_3[1] + lVar7);
  iVar4 = *(int *)((longlong)plVar5 + uVar3 * 4);
  if (iVar4 != -1) {
    if (iVar4 == param_2) {
      puVar2 = (undefined4 *)((longlong)plVar5 + uVar3 * 4);
    }
    else {
      lVar1 = *param_1 + (longlong)*param_3;
      do {
        lVar6 = (longlong)(iVar4 * param_3[4]);
        iVar4 = *(int *)(lVar1 + lVar6);
        if (iVar4 == -1) goto LAB_14000cf3d;
      } while (iVar4 != param_2);
      puVar2 = (undefined4 *)(lVar1 + lVar6);
    }
    *puVar2 = *(undefined4 *)(lVar7 + *param_3);
  }
LAB_14000cf3d:
  FUN_140260dec(param_1,param_3 + 3,param_2,1);
  return;
}



// FUNCTION 14000cf6e FUN_14000cf6e body=1994 status=ok
// SIG undefined FUN_14000cf6e(void)

void FUN_14000cf6e(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  char cVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined2 *puVar32;
  int iVar33;
  int iVar34;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar33 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar33 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar33) {
      FUN_1406cd6a8(param_1,iVar33);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar14 = iVar22 + -1;
      }
      iVar14 = iVar14 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar34 = iVar22 + 1;
    iVar23 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar23 = iVar22;
    }
    if (iVar23 >> 5 == iVar14) {
      *(int *)(param_1 + 5) = iVar34;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar34 = 0x80;
          iVar14 = iVar22;
        }
        else {
          uVar26 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar30 = 4;
            if (4 < uVar26) {
              uVar30 = uVar26;
            }
          }
          else {
            uVar30 = (uVar26 * 3 >> 3) + uVar26 + 0x10;
          }
          uVar20 = FUN_144a3809e(uVar30 << 2,0);
          iVar14 = (int)(uVar20 >> 2);
          iVar34 = -0x20;
          if ((int)uVar26 <= iVar14) {
            iVar34 = iVar14 << 5;
          }
          iVar14 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar34;
        FUN_1446efbd8(plVar21,iVar14);
        iVar34 = (int)param_1[5] + 1;
      }
      iVar14 = iVar34 + 0x1f;
      if (-1 < iVar34) {
        iVar14 = iVar34;
      }
      *(int *)(param_1 + 5) = iVar34;
      if (iVar34 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar21;
        }
        bVar17 = -(char)(iVar34 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar14 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar33;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar17 = (byte)iVar22 & 0x1f;
    puVar1 = (uint *)((longlong)plVar21 + (longlong)(iVar23 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar33 = (int)param_1[6];
    lVar16 = (longlong)iVar33;
    iVar22 = *(int *)(*param_1 + 4 + lVar16 * 0x40);
    *(int *)(param_1 + 6) = iVar22;
    iVar14 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x40) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar18 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar18 = puVar1;
  }
  iVar22 = iVar33 + 0x1f;
  if (-1 < iVar33) {
    iVar22 = iVar33;
  }
  puVar18[iVar22 >> 5] = puVar18[iVar22 >> 5] | 1 << ((byte)iVar33 & 0x1f);
  lVar29 = *param_1;
  lVar16 = lVar16 * 0x40;
  plVar21 = (longlong *)(lVar29 + lVar16);
  puVar4 = (undefined8 *)*param_3;
  lVar27 = param_3[1];
  *(undefined8 *)(lVar29 + lVar16) = 0;
  iVar22 = *(int *)(puVar4 + 1);
  _Src = (void *)*puVar4;
  *(int *)(lVar29 + 8 + lVar16) = iVar22;
  if ((longlong)iVar22 == 0) {
    *(undefined4 *)((longlong)plVar21 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(plVar21,iVar22,0);
    memcpy((void *)*plVar21,_Src,(longlong)iVar22 * 2);
  }
  FUN_1406fa146(plVar21 + 2,lVar27);
  *(undefined4 *)(plVar21 + 7) = 0xffffffff;
  iVar22 = (int)plVar21[1];
  uVar26 = 0;
  iVar14 = iVar22 + -1;
  if (iVar22 == 0) {
    iVar14 = 0;
  }
  if (0 < iVar14) {
    if (iVar22 == 0) {
      puVar32 = &DAT_149dfb77a;
    }
    else {
      puVar32 = (undefined2 *)*plVar21;
    }
    lVar16 = 0;
    uVar20 = 0;
    do {
      uVar26 = ((uint)(0x19 < (ushort)puVar32[lVar16] - 0x61) * 0x20 + (uint)(ushort)puVar32[lVar16]
               ) - 0x20;
      uVar30 = (uint)(uVar20 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar20 ^ uVar26) & 0xff) * 4);
      uVar26 = uVar30 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ uVar26 >> 8 & 0xff) * 4);
      uVar20 = (ulonglong)uVar26;
      lVar16 = lVar16 + 1;
    } while (iVar14 != (int)lVar16);
  }
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar19 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar19 + (ulonglong)((int)param_1[9] - 1U & uVar26) * 4);
    if (iVar14 != -1) {
      lVar16 = *param_1;
LAB_14000d16d:
      lVar29 = (longlong)iVar14 * 0x40;
      plVar19 = (longlong *)(lVar16 + lVar29);
      iVar34 = *(int *)(lVar16 + 8 + lVar29);
      if (iVar34 != iVar22) {
        if (iVar34 + iVar22 == 1) goto LAB_14000d1e6;
        goto LAB_14000d5fd;
      }
      if (1 < iVar22) {
        lVar27 = 0;
        do {
          uVar2 = *(ushort *)(*plVar19 + lVar27);
          uVar3 = *(ushort *)(*plVar21 + lVar27);
          if (uVar2 == uVar3) {
            if (uVar2 == 0) break;
          }
          else {
            if (0x7f < (uVar3 | uVar2)) {
              iVar34 = (uint)uVar2 - (uint)uVar3;
              goto LAB_14000d5f4;
            }
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto LAB_14000d5f1;
          }
          lVar27 = lVar27 + 2;
        } while( true );
      }
      goto LAB_14000d1e6;
    }
  }
LAB_14000d568:
  cVar28 = '\0';
LAB_14000d235:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar28;
  }
  if (cVar28 != '\0') goto LAB_14000d54d;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar30 = 1;
  if (3 < uVar15) {
    uVar20 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar30 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || ((int)uVar30 <= (int)param_1[9])) {
    uVar26 = (int)param_1[9] - 1U & uVar26;
    *(uint *)((longlong)plVar21 + 0x3c) = uVar26;
    plVar19 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar19 = param_1 + 7;
    }
    *(undefined4 *)(plVar21 + 7) =
         *(undefined4 *)
          ((longlong)plVar19 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar26) * 4);
    plVar21 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar21 = param_1 + 7;
    }
    *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar26) * 4) =
         iVar33;
    goto LAB_14000d54d;
  }
  *(uint *)(param_1 + 9) = uVar30;
  plVar21 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar21,0,0,4);
    uVar30 = *(uint *)(param_1 + 9);
  }
  plVar19 = param_1 + 7;
  if (uVar30 == 1) {
    if (*plVar21 != 0) {
      FUN_1446efa72(plVar21,0,0,4);
    }
LAB_14000d2a7:
    uVar26 = 0;
    do {
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar19;
      }
      *(undefined4 *)((longlong)plVar21 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar26) * 4) =
           0xffffffff;
      uVar26 = uVar26 + 1;
    } while (uVar30 != uVar26);
  }
  else {
    if (uVar30 == 0) goto LAB_14000d54d;
    FUN_1446efa72(plVar21,0,uVar30,4);
    if (0 < (int)uVar30) goto LAB_14000d2a7;
  }
  iVar22 = (int)param_1[5];
  if (iVar22 == 0) {
    uVar20 = 0;
    uVar31 = 1;
    iVar34 = 0;
    iVar14 = 0;
  }
  else {
    puVar18 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar26 = *puVar18;
    if (uVar26 == 0) {
      iVar14 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar14 = iVar22 + -1;
      }
      uVar20 = 0;
      uVar31 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar31 = uVar20;
      }
      iVar14 = 0;
      do {
        if (uVar31 == uVar20) goto LAB_14000d54d;
        iVar14 = iVar14 + 0x20;
        uVar26 = puVar18[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar20 = 0;
      iVar14 = 0;
    }
    uVar31 = (ulonglong)(-uVar26 & uVar26);
    uVar25 = uVar31 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar34 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar22 <= iVar34) {
      iVar34 = iVar22;
    }
  }
  if (iVar34 < iVar22) {
    uVar26 = 0xffffffff;
    do {
      puVar4 = (undefined8 *)(*param_1 + (longlong)iVar34 * 0x40);
      iVar22 = *(int *)(*param_1 + 8 + (longlong)iVar34 * 0x40);
      iVar23 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar23 = 0;
      }
      uVar30 = 0;
      if (0 < iVar23) {
        puVar32 = &DAT_149dfb77a;
        if (iVar22 != 0) {
          puVar32 = (undefined2 *)*puVar4;
        }
        lVar16 = 0;
        uVar30 = 0;
        do {
          uVar15 = ((uint)(ushort)puVar32[lVar16] +
                   (uint)(0x19 < (ushort)puVar32[lVar16] - 0x61) * 0x20) - 0x20;
          uVar30 = uVar30 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar30 ^ uVar15) & 0xff) * 4);
          uVar30 = uVar30 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
          lVar16 = lVar16 + 1;
        } while (iVar23 != (int)lVar16);
      }
      uVar25 = (longlong)(int)uVar30 & (longlong)(int)param_1[9] - 1U;
      iVar22 = (int)uVar25;
      *(int *)((longlong)puVar4 + 0x3c) = iVar22;
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar19;
      }
      *(undefined4 *)(puVar4 + 7) =
           *(undefined4 *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & uVar25) * 4);
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = plVar19;
      }
      *(int *)((longlong)plVar21 + ((longlong)iVar22 & (longlong)(int)param_1[9] - 1U) * 4) = iVar34
      ;
      uVar26 = uVar26 & ~(uint)uVar31;
      puVar18 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar18 = puVar1;
      }
      iVar22 = (int)param_1[5];
      iVar34 = (int)uVar20;
      lVar16 = (longlong)iVar34;
      uVar30 = puVar18[lVar16] & uVar26;
      if (uVar30 == 0) {
        iVar23 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar23 = iVar22 + -1;
        }
        iVar23 = iVar23 >> 5;
        iVar24 = iVar23;
        if (iVar23 < iVar34) {
          iVar24 = iVar34;
        }
        if (iVar23 <= iVar34) break;
        lVar29 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar30 = puVar18[lVar16 + lVar29 + 1];
          if (uVar30 != 0) break;
          lVar29 = lVar29 + 1;
          if (iVar24 - lVar16 == lVar29) goto LAB_14000d54d;
        }
        uVar20 = (ulonglong)(iVar34 + (int)lVar29 + 1);
        uVar26 = 0xffffffff;
      }
      uVar31 = (ulonglong)(-uVar30 & uVar30);
      uVar25 = uVar31 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar34 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar34 < iVar22);
  }
LAB_14000d54d:
  *param_2 = iVar33;
  return;
LAB_14000d5f1:
  iVar34 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14000d5f4:
  if (iVar34 == 0) {
LAB_14000d1e6:
    if (plVar19[5] != 0) {
      FUN_1400020a8();
    }
    if (*plVar19 != 0) {
      FUN_1400020a8();
    }
    lVar16 = *plVar21;
    uVar5 = *(undefined4 *)((longlong)plVar21 + 4);
    lVar29 = plVar21[1];
    uVar6 = *(undefined4 *)((longlong)plVar21 + 0xc);
    lVar27 = plVar21[2];
    uVar7 = *(undefined4 *)((longlong)plVar21 + 0x14);
    lVar11 = plVar21[3];
    uVar8 = *(undefined4 *)((longlong)plVar21 + 0x1c);
    lVar12 = plVar21[4];
    uVar9 = *(undefined4 *)((longlong)plVar21 + 0x24);
    lVar13 = plVar21[5];
    uVar10 = *(undefined4 *)((longlong)plVar21 + 0x2c);
    plVar19[6] = plVar21[6];
    *(int *)(plVar19 + 4) = (int)lVar12;
    *(undefined4 *)((longlong)plVar19 + 0x24) = uVar9;
    *(int *)(plVar19 + 5) = (int)lVar13;
    *(undefined4 *)((longlong)plVar19 + 0x2c) = uVar10;
    *(int *)(plVar19 + 2) = (int)lVar27;
    *(undefined4 *)((longlong)plVar19 + 0x14) = uVar7;
    *(int *)(plVar19 + 3) = (int)lVar11;
    *(undefined4 *)((longlong)plVar19 + 0x1c) = uVar8;
    *(int *)plVar19 = (int)lVar16;
    *(undefined4 *)((longlong)plVar19 + 4) = uVar5;
    *(int *)(plVar19 + 1) = (int)lVar29;
    *(undefined4 *)((longlong)plVar19 + 0xc) = uVar6;
    FUN_1456ab9b4(param_1,iVar33);
    cVar28 = '\x01';
    iVar33 = iVar14;
    goto LAB_14000d235;
  }
LAB_14000d5fd:
  iVar14 = *(int *)(lVar16 + 0x38 + lVar29);
  if (iVar14 == -1) goto LAB_14000d568;
  goto LAB_14000d16d;
}



// FUNCTION 14000d738 FUN_14000d738 body=591 status=ok
// SIG undefined FUN_14000d738(void)

void FUN_14000d738(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x60;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x5c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x58 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14000d942;
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
LAB_14000d942:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000d988 FUN_14000d988 body=742 status=ok
// SIG undefined FUN_14000d988(void)

void FUN_14000d988(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  undefined1 auStack_98 [36];
  int local_74;
  undefined *local_70;
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9a1580 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a1580,0,0,4);
  }
  uVar12 = DAT_14c9a1588;
  if (DAT_14c9a1588 != 0) {
    FUN_144a1cbf0(&DAT_14c9a1578,0,DAT_14c9a1588,4);
    if (0 < (int)uVar12) {
      uVar3 = 0;
      do {
        puVar7 = DAT_14c9a1580;
        if (DAT_14c9a1580 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a1578;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c9a1588 + 0x7fffffff & uVar3) * 4) = 0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar12 != uVar3);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14c9a1550;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14c9a1568 == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
      do {
        local_74 = iVar10;
        puVar1 = (undefined8 *)(DAT_14c9a1540 + (longlong)iVar6 * 0x20);
        iVar10 = *(int *)(DAT_14c9a1540 + 8 + (longlong)iVar6 * 0x20);
        iVar5 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar5 = 0;
        }
        uVar3 = 0;
        if (0 < iVar5) {
          puVar15 = &DAT_149dfb77a;
          if (iVar10 != 0) {
            puVar15 = (undefined2 *)*puVar1;
          }
          lVar8 = 0;
          uVar3 = 0;
          do {
            uVar9 = ((uint)(ushort)puVar15[lVar8] +
                    (uint)(0x19 < (ushort)puVar15[lVar8] - 0x61) * 0x20) - 0x20;
            uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar9) & 0xff) * 4)
            ;
            uVar3 = uVar3 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
            lVar8 = lVar8 + 1;
          } while (iVar5 != (int)lVar8);
        }
        uVar11 = (longlong)(int)uVar3 & (longlong)(int)DAT_14c9a1588 - 1U;
        iVar10 = (int)uVar11;
        *(int *)((longlong)puVar1 + 0x1c) = iVar10;
        puVar7 = DAT_14c9a1580;
        if (DAT_14c9a1580 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a1578;
        }
        *(undefined4 *)(puVar1 + 3) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14c9a1588 - 1U & uVar11) * 4);
        puVar7 = DAT_14c9a1580;
        if (DAT_14c9a1580 == (undefined *)0x0) {
          puVar7 = &DAT_14c9a1578;
        }
        *(int *)(puVar7 + ((longlong)iVar10 & (longlong)(int)DAT_14c9a1588 - 1U) * 4) = iVar6;
        uVar12 = uVar12 & ~(uint)uVar14;
        puVar7 = *(undefined **)(local_60 + 0x10);
        if (*(undefined **)(local_60 + 0x10) == (undefined *)0x0) {
          puVar7 = local_60;
        }
        iVar5 = *(int *)(local_60 + 0x18);
        lVar8 = (longlong)iVar4;
        uVar3 = *(uint *)(puVar7 + lVar8 * 4) & uVar12;
        iVar10 = local_74;
        local_70 = local_60;
        if (uVar3 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar13 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)(puVar7 + lVar13 * 4 + lVar8 * 4 + 4);
            if (uVar3 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar2 - lVar8 == lVar13) goto LAB_14000dc32;
          }
          iVar4 = iVar4 + (int)lVar13 + 1;
          uVar12 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar3 & uVar3);
        uVar11 = uVar14 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar5);
    }
  }
LAB_14000dc32:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000dc70 FUN_14000dc70 body=812 status=ok
// SIG undefined FUN_14000dc70(void)

void FUN_14000dc70(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_98 [36];
  int local_74;
  undefined *local_70;
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9a1528 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a1528,0,0,4);
  }
  uVar6 = DAT_14c9a1530;
  if (DAT_14c9a1530 != 0) {
    FUN_144a1cbf0(&DAT_14c9a1520,0,DAT_14c9a1530);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        puVar8 = DAT_14c9a1528;
        if (DAT_14c9a1528 == (undefined *)0x0) {
          puVar8 = &DAT_14c9a1520;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14c9a1530 + 0x7fffffff & uVar4) * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14c9a14f8;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14c9a1510 == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar9 = local_50;
    if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
      do {
        local_74 = iVar9;
        lVar13 = (longlong)iVar7 * 0x38;
        lVar11 = (longlong)*(int *)(DAT_14c9a14e8 + 0x20 + lVar13);
        uVar4 = 0;
        if (lVar11 != 0) {
          lVar17 = 0;
          uVar4 = 0;
          do {
            uVar2 = *(undefined8 *)(*(longlong *)(DAT_14c9a14e8 + 0x18 + lVar13) + lVar17);
            uVar15 = (uint)((ulonglong)uVar2 >> 0x10);
            uVar10 = (uint)uVar2 & 0xffff;
            uVar15 = ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar10 >> 4);
            uVar4 = uVar15 >> 0xd ^ uVar4 - uVar15;
            uVar10 = uVar4 << 8 ^ (-0x61c88647 - uVar15) - uVar4;
            uVar15 = uVar10 >> 0xd ^ (uVar15 - uVar4) - uVar10;
            uVar16 = uVar15 >> 0xc ^ (uVar4 - uVar10) - uVar15;
            uVar4 = uVar16 << 0x10 ^ (uVar10 - uVar15) - uVar16;
            uVar10 = uVar4 >> 5 ^ (uVar15 - uVar16) - uVar4;
            uVar15 = uVar10 >> 3 ^ (uVar16 - uVar4) - uVar10;
            uVar4 = uVar15 << 10 ^ (uVar4 - uVar10) - uVar15;
            uVar4 = uVar4 >> 0xf ^ uVar10 - (uVar15 + uVar4);
            lVar17 = lVar17 + 8;
          } while (lVar11 * 8 != lVar17);
        }
        lVar13 = DAT_14c9a14e8 + lVar13;
        uVar14 = (longlong)(int)uVar4 & (longlong)(int)DAT_14c9a1530 - 1U;
        iVar9 = (int)uVar14;
        *(int *)(lVar13 + 0x34) = iVar9;
        puVar8 = DAT_14c9a1528;
        if (DAT_14c9a1528 == (undefined *)0x0) {
          puVar8 = &DAT_14c9a1520;
        }
        *(undefined4 *)(lVar13 + 0x30) =
             *(undefined4 *)(puVar8 + ((longlong)(int)DAT_14c9a1530 - 1U & uVar14) * 4);
        puVar8 = DAT_14c9a1528;
        if (DAT_14c9a1528 == (undefined *)0x0) {
          puVar8 = &DAT_14c9a1520;
        }
        *(int *)(puVar8 + ((longlong)iVar9 & (longlong)(int)DAT_14c9a1530 - 1U) * 4) = iVar7;
        uVar6 = uVar6 & ~(uint)uVar12;
        puVar8 = *(undefined **)(local_60 + 0x10);
        if (*(undefined **)(local_60 + 0x10) == (undefined *)0x0) {
          puVar8 = local_60;
        }
        iVar1 = *(int *)(local_60 + 0x18);
        lVar11 = (longlong)iVar5;
        uVar4 = *(uint *)(puVar8 + lVar11 * 4) & uVar6;
        iVar9 = local_74;
        local_70 = local_60;
        if (uVar4 == 0) {
          iVar7 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar7 = iVar1 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar4 = *(uint *)(puVar8 + lVar13 * 4 + lVar11 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar11 == lVar13) goto LAB_14000df53;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar12 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar7 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar1);
    }
  }
LAB_14000df53:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000e00c FUN_14000e00c body=188 status=ok
// SIG undefined FUN_14000e00c(void)

undefined8 FUN_14000e00c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return 0;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x10);
  if (lVar2 < 1) {
    if (*(int *)(param_1 + 0x20) < 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar4 = *(longlong *)(param_1 + 8);
    lVar2 = lVar2 * 0x28;
    while( true ) {
      lVar1 = *(longlong *)(param_2 + 0x10);
      lVar3 = FUN_14000e0c8(lVar4);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) break;
      lVar4 = lVar4 + 0x28;
      lVar2 = lVar2 + -0x28;
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar2 = lVar2 * 0x28;
    do {
      lVar1 = *(longlong *)(param_2 + 0x10);
      lVar3 = FUN_14000e0c8(lVar4);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        return 0;
      }
      lVar4 = lVar4 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return 1;
}



// FUNCTION 14000e0c8 FUN_14000e0c8 body=699 status=ok
// SIG undefined FUN_14000e0c8(void)

longlong FUN_14000e0c8(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar8 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar8 == (longlong *)0x0 || (*(uint *)(plVar8 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar4 = *plVar8, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) != 0) {
      lVar4 = FUN_140007850();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        if (lVar4 == 0) {
          param_1[0] = 0;
          param_1[1] = 0;
          goto LAB_14000e202;
        }
        uVar3 = *(uint *)(lVar4 + 0xc);
        *param_1 = uVar3;
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
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar9 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar9);
          }
          LOCK();
          uVar3 = *(uint *)(lVar5 + 0x10);
          bVar10 = uVar3 == 0;
          if (bVar10) {
            *(uint *)(lVar5 + 0x10) = uVar9;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar10) {
            uVar3 = uVar9;
          }
        }
        param_1[1] = uVar3;
      }
      else {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(param_1,lVar4);
        }
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_14000e135;
    }
  }
  else {
LAB_14000e135:
    if (DAT_14c948fa0 == 0) {
      local_38 = &DAT_1427db2a2;
      lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar5;
      FUN_1446f470e(local_30,L"ScriptStruct",1);
      local_48 = &LAB_1468915ce;
      local_50 = FUN_1427dc742;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x10;
      local_70 = 0x10000020;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar5);
      DAT_14c948fa0 = lVar5;
      uVar6 = FUN_1446f8646();
      lVar5 = DAT_14c948fa0;
      uVar7 = FUN_1449e2fb2();
      local_78 = L"ScriptStruct";
      FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) goto LAB_14000e168;
  }
LAB_14000e202:
  lVar4 = 0;
LAB_14000e168:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14000e398 FUN_14000e398 body=57 status=ok
// SIG undefined FUN_14000e398(void)

void FUN_14000e398(longlong *param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x31) == '\x01') && ((char)param_1[6] == '\x01')) {
      *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) | 0x10;
    }
    else {
      *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xef;
    }
  }
  return;
}



// FUNCTION 14000e3d2 FUN_14000e3d2 body=101 status=ok
// SIG undefined FUN_14000e3d2(void)

void FUN_14000e3d2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1446f0048(param_1 + 0xb0,param_1 + 0x40,0);
  if ((*(char *)(param_1 + 0x3c) == '\x01') && ((longlong)*(int *)(param_1 + 200) != 0)) {
    lVar1 = (longlong)*(int *)(param_1 + 200) * 0x18;
    lVar2 = *(longlong *)(param_1 + 0xc0) + 8;
    do {
      FUN_1446f0048(lVar2,param_1 + 0x40,0);
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14000e438 FUN_14000e438 body=57 status=ok
// SIG undefined FUN_14000e438(void)

void FUN_14000e438(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4950 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4950 = FUN_140002ddd(FUN_14173affb,uVar1,L"GbxAttributeEffect");
  }
  return;
}



// FUNCTION 14000e472 FUN_14000e472 body=142 status=ok
// SIG undefined FUN_14000e472(void)

void FUN_14000e472(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 14000e500 FUN_14000e500 body=356 status=ok
// SIG undefined FUN_14000e500(void)

void FUN_14000e500(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14000e585;
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
LAB_14000e585:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14000e666 FUN_14000e666 body=137 status=ok
// SIG undefined FUN_14000e666(void)

void FUN_14000e666(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  int local_48;
  undefined1 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(param_1 + 0x44);
      FUN_14000e6f0(local_50,2);
      local_44 = 2;
      local_40 = 0;
      local_48 = iVar1 + param_3;
      FUN_14000e760(param_2,local_50);
      param_3 = param_3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000e6f0 FUN_14000e6f0 body=111 status=ok
// SIG undefined FUN_14000e6f0(void)

undefined8 * FUN_14000e6f0(undefined8 *param_1,uint param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c950cc0) {
    FUN_144b3d300(&DAT_14c950cc0);
    if (DAT_14c950cc0 == -1) {
      FUN_14000f5f0();
      _Init_thread_footer(&DAT_14c950cc0);
    }
  }
  *param_1 = *(undefined8 *)(&DAT_14c950c30 + ((ulonglong)param_2 & 0xff) * 8);
  return param_1;
}



// FUNCTION 14000e760 FUN_14000e760 body=118 status=ok
// SIG undefined FUN_14000e760(void)

void FUN_14000e760(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar3 + 1U) {
    FUN_14000ef52(param_1,iVar3);
  }
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x18);
  *puVar2 = *param_2;
  puVar2[1] = uVar4;
  if ((0xc50U >> (*(uint *)((longlong)param_2 + 0xc) & 0x1f) & 1) != 0) {
    LOCK();
    piVar1 = (int *)((param_2[2] & 0xfffffffffffffffe) - 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14000e7d6 FUN_14000e7d6 body=70 status=ok
// SIG undefined FUN_14000e7d6(void)

void FUN_14000e7d6(ulonglong *param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 & 0xfffffffffffffffe) != (param_2 & 0xfffffffffffffffe)) {
    if (1 < param_2) {
      LOCK();
      piVar1 = (int *)((param_2 & 0xfffffffffffffffe) - 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar2 = *param_1;
    }
    if (1 < uVar2) {
      FUN_14000ebb3();
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 14000e81c FUN_14000e81c body=446 status=ok
// SIG undefined FUN_14000e81c(void)

void FUN_14000e81c(longlong param_1,undefined8 param_2,int param_3,longlong *param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60 [8];
  int local_58;
  undefined1 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_3 = param_3 + *(int *)(param_1 + 0x44);
  if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0xb0) & 0x40) != 0) {
    local_70 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + 0xb8) + 0x88))();
    iVar1 = *(int *)(param_1 + 0x30);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x34);
        FUN_14000e6f0(local_60,0xf);
        local_54 = 0xf;
        local_50 = local_70;
        local_58 = iVar2 * iVar4 + param_3;
        FUN_14000e760(param_2,local_60);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x70) != 0) {
    iVar1 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
      FUN_14000f150(param_4,iVar1);
    }
    *(longlong *)(*param_4 + (longlong)iVar1 * 8) = param_1;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x70);
    local_68 = param_1;
    if (plVar5 == (longlong *)0x0) {
      FUN_1446f0726(param_4,&local_68,0);
    }
    else {
      do {
        cVar3 = (**(code **)(*plVar5 + 0x180))(plVar5,param_4,1);
        plVar5 = (longlong *)plVar5[9];
      } while (plVar5 != (longlong *)0x0 && cVar3 == '\0');
      FUN_1446f0726(param_4,&local_68,0);
      if ((cVar3 != '\0') && (iVar1 = *(int *)(param_1 + 0x30), 0 < iVar1)) {
        iVar4 = 0;
        do {
          for (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x70);
              plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[9]) {
            local_78 = param_5;
            (**(code **)(*plVar5 + 0x188))
                      (plVar5,param_2,*(int *)(param_1 + 0x34) * iVar4 + param_3,param_4);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != iVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14000e9de FUN_14000e9de body=168 status=ok
// SIG undefined FUN_14000e9de(void)

longlong FUN_14000e9de(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_14000ea88();
  *(undefined4 *)(param_1 + 400) = param_2;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar3 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar2 != 0) {
    lVar4 = 0;
    do {
      if ((0xc50U >> (*(uint *)(lVar3 + 0xc + lVar4) & 0x1f) & 1) != 0) {
        LOCK();
        piVar1 = (int *)((*(ulonglong *)(lVar3 + 0x10 + lVar4) & 0xfffffffffffffffe) - 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14000ea88 FUN_14000ea88 body=128 status=ok
// SIG undefined FUN_14000ea88(void)

void * FUN_14000ea88(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 3) * -0x5555555555555555;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x188) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0x10;
  }
  else {
    FUN_14000f57c(param_1,uVar2 & 0xffffffff,0);
    _Dst = *(void **)((longlong)param_1 + 0x180);
    if (*(void **)((longlong)param_1 + 0x180) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 14000eb08 FUN_14000eb08 body=171 status=ok
// SIG undefined FUN_14000eb08(void)

void FUN_14000eb08(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if ((0xc50U >> (*(uint *)(lVar2 + 0xc + lVar3) & 0x1f) & 1) != 0) {
        FUN_14000ebb3(*(undefined8 *)(lVar2 + 0x10 + lVar3));
      }
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    if (1 < *(ulonglong *)(param_1 + 0x198)) {
      FUN_14000ebb3();
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined1 *)(param_1 + 0x1a0) = 0;
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14000ebb3 FUN_14000ebb3 body=194 status=ok
// SIG undefined FUN_14000ebb3(void)

void FUN_14000ebb3(ulonglong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)(param_1 & 0xfffffffffffffffe);
  LOCK();
  piVar1 = (int *)((longlong)puVar2 + -4);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  do {
    local_38 = *puVar2;
    lVar6 = 0;
    puVar3 = puVar2 + 1;
    do {
      uVar5 = 1 << (*(byte *)((longlong)&local_38 + lVar6) & 0x1f);
      bVar4 = *(byte *)((longlong)&local_38 + lVar6) & 0x1f;
      if ((0xac70U >> bVar4 & 1) == 0 || (0x6001U >> bVar4 & 1) != 0) {
        puVar2 = puVar3;
        if ((uVar5 & 0x6001) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
        }
      }
      else {
        puVar2 = puVar3 + 1;
        if ((uVar5 & 0xc50) != 0) {
          FUN_14000ebb3(*puVar3);
        }
      }
      lVar6 = lVar6 + 2;
      puVar3 = puVar2;
    } while (lVar6 != 8);
  } while( true );
}



// FUNCTION 14000ec8a FUN_14000ec8a body=536 status=ok
// SIG undefined FUN_14000ec8a(void)

void FUN_14000ec8a(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 unaff_RBP;
  undefined8 *puVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [36];
  int local_64;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 < 2) {
LAB_14000ecaf:
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_64 = *(int *)(param_1 + 0x188);
  puVar8 = (undefined8 *)(param_2 & 0xfffffffffffffffe);
  uVar9 = 0;
  do {
    local_58 = *puVar8;
    puVar8 = puVar8 + 1;
    lVar11 = 0;
    while( true ) {
      uVar2 = *(ushort *)((longlong)&local_58 + lVar11);
      uVar7 = 1 << ((byte)uVar2 & 0x1f);
      if ((0xac70U >> (uVar2 & 0x1f) & 1) != 0) {
        unaff_RBP = *puVar8;
        puVar8 = puVar8 + 1;
      }
      if ((uVar7 & 0x6001) != 0) break;
      bVar10 = (byte)uVar2 & 0x1f;
      if (bVar10 == 1) {
        uVar9 = (ulonglong)((int)uVar9 + (uint)(uVar2 >> 5) * 0x800 + 0x800);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x188);
        lVar12 = (longlong)iVar3;
        *(uint *)(param_1 + 0x188) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x18c) < iVar3 + 1U) {
          local_60 = uVar9;
          FUN_14000ef52(param_1,iVar3);
          uVar9 = local_60;
        }
        lVar6 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar6 = param_1;
        }
        *(undefined8 *)(lVar6 + lVar12 * 0x18) = 0;
        *(uint *)(lVar6 + 8 + lVar12 * 0x18) = ((uint)(uVar2 >> 5) + (int)uVar9) * 8;
        *(byte *)(lVar6 + 0xc + lVar12 * 0x18) = bVar10;
        *(undefined8 *)(lVar6 + 0x10 + lVar12 * 0x18) = unaff_RBP;
        lVar12 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar12 = param_1;
        }
        lVar6 = (longlong)(*(int *)(param_1 + 0x188) + -1);
        if ((0xc50U >> (*(uint *)(lVar12 + 0xc + lVar6 * 0x18) & 0x1f) & 1) != 0) {
          LOCK();
          piVar1 = (int *)((*(ulonglong *)(lVar12 + lVar6 * 0x18 + 0x10) & 0xfffffffffffffffe) - 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
      }
      lVar11 = lVar11 + 2;
      if (lVar11 == 8) goto LAB_14000ee59;
    }
    lVar11 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar11 = param_1;
    }
    uVar4 = *(uint *)(param_1 + 0x188);
    uVar5 = uVar4 - local_64;
    if ((int)uVar4 <= (int)(uVar4 - local_64)) {
      uVar5 = uVar4;
    }
    if ((int)uVar5 < 1) goto LAB_14000ecaf;
    lVar11 = lVar11 + (longlong)(int)uVar4 * 0x18;
    lVar12 = (ulonglong)uVar5 * -0x18;
    do {
      FUN_14000e6f0(&local_50,*(undefined1 *)(lVar11 + 0xc + lVar12));
      *(undefined8 *)(lVar11 + lVar12) = local_50;
      lVar12 = lVar12 + 0x18;
    } while (lVar12 != 0);
LAB_14000ee59:
    if ((uVar7 & 0x6001) != 0) goto LAB_14000ecaf;
  } while( true );
}



// FUNCTION 14000eea3 FUN_14000eea3 body=175 status=ok
// SIG undefined FUN_14000eea3(void)

void FUN_14000eea3(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (DAT_14c950cd0 != DAT_14c950cfc) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14c950d00;
    if (DAT_14c950d08 != (undefined *)0x0) {
      puVar5 = DAT_14c950d08;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(DAT_14c950d10 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      uVar3 = 0;
      do {
        puVar1 = (ulonglong *)(DAT_14c950cc8 + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          uVar3 = 0;
          if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
            uVar3 = puVar1[1];
          }
          break;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      goto LAB_14000ef38;
    }
  }
  uVar3 = 0;
LAB_14000ef38:
  *param_1 = uVar3;
  return;
}



// FUNCTION 14000ef52 FUN_14000ef52 body=361 status=ok
// SIG undefined FUN_14000ef52(void)

void FUN_14000ef52(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x188);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    iVar8 = 0x10;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)(param_1 + 0x18c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14000efe8;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14000efe8:
    iVar6 = (int)(uVar5 / 0x18);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0x18c) = iVar8;
  FUN_14000f0bc(param_1,param_2);
  return;
}



// FUNCTION 14000f0bc FUN_14000f0bc body=148 status=ok
// SIG undefined FUN_14000f0bc(void)

void FUN_14000f0bc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x18);
  return;
}



// FUNCTION 14000f150 FUN_14000f150 body=353 status=ok
// SIG undefined FUN_14000f150(void)

void FUN_14000f150(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14000f1d5;
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
LAB_14000f1d5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14000f2b2 FUN_14000f2b2 body=169 status=ok
// SIG undefined FUN_14000f2b2(void)

void FUN_14000f2b2(longlong param_1,byte param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x2a4);
  if (lVar2 == 4) {
    iVar1 = *(int *)(param_1 + 0x88);
    lVar4 = (longlong)iVar1;
    *(uint *)(param_1 + 0x88) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
      FUN_14000f35c(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar2 = param_1;
    }
    *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
    *(int *)(param_1 + 0x2a0) = iVar1;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    lVar2 = 0;
  }
  else {
    lVar4 = (longlong)*(int *)(param_1 + 0x2a0);
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = param_1;
  }
  *(ushort *)(lVar3 + lVar4 * 8 + lVar2 * 2) = param_3 << 5 | (ushort)(param_2 & 0x1f);
  *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + 1;
  return;
}



// FUNCTION 14000f35c FUN_14000f35c body=543 status=ok
// SIG undefined FUN_14000f35c(void)

void FUN_14000f35c(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x88);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x10;
    _Src = *(void **)((longlong)param_1 + 0x80);
joined_r0x00014000f4eb:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x8c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_14000f3f0;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_14000f3f0:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x80);
    }
    else {
      *(uint *)((longlong)param_1 + 0x8c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x80);
      if (uVar6 < 0x11) goto joined_r0x00014000f4eb;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x80,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,uVar8,8);
  return;
}



// FUNCTION 14000f57c FUN_14000f57c body=115 status=ok
// SIG undefined FUN_14000f57c(void)

void FUN_14000f57c(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14000f0bc(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x18c) = param_3;
  return;
}



// FUNCTION 14000f5f0 FUN_14000f5f0 body=916 status=ok
// SIG undefined FUN_14000f5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000f5f0(void)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  memset(&DAT_14c950c30,0,0x90);
  local_38 = "Stop";
  local_30 = 4;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c30 = (ulonglong)uVar1;
  local_38 = "Jump";
  local_30 = 4;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c38 = (ulonglong)uVar1;
  local_38 = "Reference";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c40 = (ulonglong)uVar1;
  local_38 = "ReferenceArray";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c48 = (ulonglong)uVar1;
  local_38 = "StructArray";
  local_30 = 0xb;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c50 = (ulonglong)uVar1;
  local_38 = "StridedArray";
  local_30 = 0xc;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c58 = (ulonglong)uVar1;
  local_38 = "SparseStructArray";
  local_30 = 0x11;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c60 = (ulonglong)uVar1;
  local_38 = "FieldPath";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c68 = (ulonglong)uVar1;
  local_38 = "FieldPathArray";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c70 = (ulonglong)uVar1;
  local_38 = "FreezableReferenceArray";
  local_30 = 0x17;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c78 = (ulonglong)uVar1;
  local_38 = "FreezableStructArray";
  local_30 = 0x14;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c80 = (ulonglong)uVar1;
  local_38 = "Optional";
  local_30 = 8;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c88 = (ulonglong)uVar1;
  local_38 = "DynamicallyTypedValue";
  local_30 = 0x15;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c90 = (ulonglong)uVar1;
  local_38 = "ARO";
  local_30 = 3;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950c98 = (ulonglong)uVar1;
  local_38 = "SlowARO";
  local_30 = 7;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950ca0 = (ulonglong)uVar1;
  local_38 = "MemberARO";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950ca8 = (ulonglong)uVar1;
  local_38 = "GbxDefPtr";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950cb0 = (ulonglong)uVar1;
  local_38 = "ArrayGbxDefPtr";
  local_30 = 0xe;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  _DAT_14c950cb8 = (ulonglong)uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000f986 FUN_14000f986 body=119 status=ok
// SIG undefined FUN_14000f986(void)

void FUN_14000f986(float param_1)

{
  DWORD dwMilliseconds;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403937d4(local_28,0);
  dwMilliseconds = (DWORD)(longlong)(param_1 * 1000.0);
  if (dwMilliseconds == 0) {
    SwitchToThread();
  }
  else {
    Sleep(dwMilliseconds);
  }
  FUN_140248952(local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14000f9fe FUN_14000f9fe body=269 status=ok
// SIG undefined FUN_14000f9fe(void)

void FUN_14000f9fe(longlong param_1,int param_2)

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



// FUNCTION 14000fb0c FUN_14000fb0c body=7 status=ok
// SIG undefined FUN_14000fb0c(void)

void FUN_14000fb0c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14000fb14 FUN_14000fb14 body=269 status=ok
// SIG undefined FUN_14000fb14(void)

void FUN_14000fb14(longlong param_1,int param_2)

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



// FUNCTION 14000fc22 FUN_14000fc22 body=1697 status=ok
// SIG undefined FUN_14000fc22(void)

void FUN_14000fc22(longlong *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_290;
  char *local_288;
  uint5 uStack_280;
  undefined3 uStack_27b;
  undefined4 local_278;
  undefined8 local_270;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  code *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  undefined *local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  pcVar3 = (code *)param_2[1];
  if ((code *)*param_2 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(code *)*param_2)();
  }
  if (pcVar3 == (code *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (*pcVar3)();
  }
  if (*param_1 != 0) goto LAB_14000fe31;
  pcVar4 = (char *)param_2[2];
  local_188 = 0;
  if (pcVar4 == (char *)0x0) {
    local_180 = 0;
    local_178 = 0;
  }
  else {
    sVar7 = strlen(pcVar4);
    FUN_1446e6fe8(&local_288,pcVar4,sVar7 & 0xffffffff,1);
  }
  FUN_1446f470e(&local_290,local_180,1);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)((longlong)param_2 + 0x3a) & 0x10) == 0) {
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar8 = FUN_140010bca();
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
    local_2b0 = 0;
    plVar9 = (longlong *)FUN_140010cf7(uVar8,uVar6,local_290,uVar2);
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x32);
    uVar2 = *(undefined4 *)(param_2 + 7);
    local_288 = (char *)0x0;
    _uStack_280 = 0;
    local_278 = 0x10000;
    local_270 = 0;
    local_168 = 0;
    local_160 = 0x800000000;
    local_d8 = 0;
    local_d0 = 0x800000000;
    local_c8 = 0;
    local_a8 = 0;
    local_98 = &PTR_LAB_149e01e20;
    local_90 = &DAT_142840532;
    local_b8 = FUN_140d11fbe;
    local_78 = 0;
    uStack_70 = 0;
    FUN_140282ace(&local_288);
    local_2b8 = 0;
    FUN_140010446(plVar9,&local_288,uVar11,uVar1);
    *plVar9 = (longlong)&PTR_FUN_149e6e840;
    *(undefined4 *)(plVar9 + 0x16) = uVar2;
    *(undefined4 *)((longlong)plVar9 + 0xba) = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    *(undefined4 *)(plVar9 + 0x1a) = 0;
LAB_14000fde9:
    FUN_140010906(&local_288);
  }
  else {
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
    if (param_2[3] == 0) {
      uVar8 = FUN_1400181a8();
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
      local_2b0 = 0;
      plVar9 = (longlong *)FUN_140010cf7(uVar8,uVar6,local_290,uVar2);
      uVar1 = *(undefined2 *)((longlong)param_2 + 0x32);
      uVar2 = *(undefined4 *)(param_2 + 7);
      local_288 = (char *)0x0;
      _uStack_280 = 0;
      local_278 = 0x10000;
      local_270 = 0;
      local_168 = 0;
      local_160 = 0x800000000;
      local_d8 = 0;
      local_d0 = 0x800000000;
      local_c8 = 0;
      local_a8 = 0;
      local_98 = &PTR_LAB_149e01e20;
      local_90 = &DAT_142840532;
      local_b8 = FUN_140d11fbe;
      local_78 = 0;
      uStack_70 = 0;
      FUN_140282ace(&local_288);
      local_2b8 = 0;
      FUN_140010446(plVar9,&local_288,uVar11,uVar1);
      *(undefined4 *)(plVar9 + 0x16) = uVar2;
      *(undefined4 *)((longlong)plVar9 + 0xba) = 0;
      plVar9[0x18] = 0;
      plVar9[0x19] = 0;
      *(undefined4 *)(plVar9 + 0x1a) = 0;
      *plVar9 = (longlong)&PTR_FUN_149e6c690;
      goto LAB_14000fde9;
    }
    uVar8 = FUN_140019b7c();
    local_2a8 = 0;
    uStack_2a0 = 0;
    uVar10 = 0;
    local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
    local_2b0 = 0;
    plVar9 = (longlong *)FUN_140010cf7(uVar8,uVar6,local_290,uVar2);
    uVar1 = *(undefined2 *)((longlong)param_2 + 0x32);
    uVar2 = *(undefined4 *)(param_2 + 7);
    local_288 = (char *)0x0;
    _uStack_280 = 0;
    local_278 = 0x10000;
    local_270 = 0;
    local_168 = 0;
    local_160 = 0x800000000;
    local_d8 = 0;
    local_d0 = 0x800000000;
    local_c8 = 0;
    local_a8 = 0;
    local_98 = &PTR_LAB_149e01e20;
    local_90 = &DAT_142840532;
    local_b8 = FUN_140d11fbe;
    local_78 = 0;
    uStack_70 = 0;
    FUN_140282ace(&local_288);
    local_2b8 = 0;
    FUN_140010446(plVar9,&local_288,uVar11,uVar1);
    *(undefined4 *)(plVar9 + 0x16) = uVar2;
    *(undefined4 *)((longlong)plVar9 + 0xba) = 0;
    plVar9[0x18] = 0;
    plVar9[0x19] = 0;
    *(undefined4 *)(plVar9 + 0x1a) = 0;
    *plVar9 = (longlong)&PTR_FUN_149e6ca10;
    plVar9[0x1c] = 0;
    plVar9[0x1d] = 0;
    FUN_140010906(&local_288);
    pcVar4 = (char *)param_2[3];
    uVar16 = 0;
    if (pcVar4 != (char *)0x0) {
      sVar7 = strlen(pcVar4);
      uVar5 = (uint)sVar7;
      if (uVar5 == 0) {
LAB_14001026f:
        uVar10 = 0;
        uVar16 = 0;
      }
      else {
        lVar13 = (longlong)(int)uVar5;
        pcVar14 = pcVar4 + lVar13 + -1;
        uVar12 = 0;
        if (pcVar14 < pcVar4) {
          lVar18 = 0;
        }
        else {
          do {
            if (9 < (byte)(*pcVar14 - 0x30U)) break;
            uVar12 = uVar12 + 1;
            pcVar14 = pcVar14 + -1;
          } while (pcVar4 <= pcVar14);
          if (uVar12 == 0 || (int)uVar5 <= (int)uVar12) {
LAB_1400100e0:
            lVar18 = 0;
          }
          else {
            lVar18 = 0;
            if ((uVar12 < 0xb) && (lVar15 = -(ulonglong)uVar12, pcVar4[lVar15 + lVar13 + -1] == '_')
               ) {
              if ((uVar12 == 1) || (pcVar4[lVar15 + lVar13] != '0')) {
                lVar17 = 0;
                do {
                  lVar18 = (longlong)pcVar4[lVar15 + lVar13] + lVar17 * 10;
                  lVar17 = lVar18 + -0x30;
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 0);
                if (lVar17 < 0x7fffffff) {
                  uVar5 = ~uVar12 + uVar5;
                  lVar18 = lVar18 + -0x2f;
                  goto LAB_1400100e3;
                }
              }
              goto LAB_1400100e0;
            }
          }
LAB_1400100e3:
          if (uVar5 == 0) goto LAB_14001026f;
        }
        uStack_280 = (uint5)uVar5;
        local_288 = pcVar4;
        uVar10 = FUN_14001a6c0(&local_288,1);
        uVar16 = lVar18 << 0x20;
        uVar10 = uVar10 & 0xffffffff;
      }
    }
    plVar9[0x1c] = uVar10 | uVar16;
    pcVar4 = (char *)param_2[4];
    if (pcVar4 == (char *)0x0) {
LAB_1400101a4:
      uVar10 = 0;
      uVar16 = 0;
    }
    else {
      sVar7 = strlen(pcVar4);
      uVar5 = (uint)sVar7;
      if (uVar5 == 0) goto LAB_1400101a4;
      lVar13 = (longlong)(int)uVar5;
      pcVar14 = pcVar4 + lVar13 + -1;
      uVar12 = 0;
      if (pcVar14 < pcVar4) {
        lVar18 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar14 - 0x30U)) break;
          uVar12 = uVar12 + 1;
          pcVar14 = pcVar14 + -1;
        } while (pcVar4 <= pcVar14);
        if (uVar12 == 0 || (int)uVar5 <= (int)uVar12) {
LAB_14001016f:
          lVar18 = 0;
        }
        else {
          lVar18 = 0;
          if ((uVar12 < 0xb) && (lVar15 = -(ulonglong)uVar12, pcVar4[lVar15 + lVar13 + -1] == '_'))
          {
            if ((uVar12 == 1) || (pcVar4[lVar15 + lVar13] != '0')) {
              lVar17 = 0;
              do {
                lVar18 = (longlong)pcVar4[lVar15 + lVar13] + lVar17 * 10;
                lVar17 = lVar18 + -0x30;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 0);
              if (lVar17 < 0x7fffffff) {
                uVar5 = ~uVar12 + uVar5;
                lVar18 = lVar18 + -0x2f;
                goto LAB_140010172;
              }
            }
            goto LAB_14001016f;
          }
        }
LAB_140010172:
        if (uVar5 == 0) goto LAB_1400101a4;
      }
      uStack_280 = (uint5)uVar5;
      local_288 = pcVar4;
      uVar5 = FUN_14001a6c0(&local_288,1);
      uVar16 = lVar18 << 0x20;
      uVar10 = (ulonglong)uVar5;
    }
    plVar9[0x1d] = uVar10 | uVar16;
  }
  *param_1 = (longlong)plVar9;
  *(undefined2 *)((longlong)plVar9 + 0xba) = *(undefined2 *)((longlong)param_2 + 0x3c);
  *(undefined2 *)((longlong)plVar9 + 0xbc) = *(undefined2 *)((longlong)param_2 + 0x3e);
  FUN_1400102c4(plVar9,param_2[5],*(undefined2 *)(param_2 + 6));
  (**(code **)(*plVar9 + 0x2a8))(plVar9);
  FUN_140010366(plVar9,0);
LAB_14000fe31:
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400102c4 FUN_1400102c4 body=161 status=ok
// SIG undefined FUN_1400102c4(void)

void FUN_1400102c4(ulonglong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2 + (ulonglong)param_3 * 8;
  local_34 = param_3;
  if (param_3 != 0) {
    uVar1 = param_1 | 1;
    do {
      local_48 = uVar1;
      if (((param_1 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
        FUN_1456cec3c(param_1 & 0xfffffffffffffffe);
      }
      FUN_140012361(&local_48,&local_40,&local_34);
    } while (local_34 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140010366 FUN_140010366 body=191 status=ok
// SIG undefined FUN_140010366(void)

void FUN_140010366(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_d8 [40];
  undefined **local_b0 [11];
  longlong *local_58;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144869430(local_b0);
  local_b0[0] = &PTR_FUN_149e69f40;
  (**(code **)(*param_1 + 0x2b8))(param_1,local_b0,param_2);
  local_b0[0] = &PTR__purecall_149e35f70;
  if (local_58 != (longlong *)0x0) {
    if (*local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_58);
  }
  if (local_38 != 0) {
    if (*(longlong *)(local_38 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140010426 thunk_FUN_1446f1718 body=5 status=ok
// SIG undefined thunk_FUN_1446f1718(void)

void thunk_FUN_1446f1718(longlong *param_1,longlong *param_2,char param_3)

{
  void *_Src;
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  undefined *puVar20;
  ulonglong uVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  wchar_t *pwStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  wchar_t *pwStack_f8;
  code *pcStack_f0;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined1 auStack_70 [8];
  undefined **ppuStack_68;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plStack_c8 = param_1;
  if (param_3 == '\0') {
    plVar15 = (longlong *)param_1[10];
    plVar12 = param_1;
    if (plVar15 != (longlong *)0x0) {
      do {
        if (DAT_14c927740 == 0) {
          pppuStack_e0 = &ppuStack_90;
          ppuStack_90 = (undefined **)FUN_1449e2820;
          pcStack_d0 = FUN_14081d0ea;
          pcStack_d8 = FUN_14081d0ea;
          puStack_e8 = &LAB_146856450;
          pcStack_f0 = FUN_1427b121c;
          pwStack_f8 = L"Engine";
          pcStack_100 = (code *)0x0;
          puStack_108 = (undefined *)CONCAT44(puStack_108._4_4_,0x10000021);
          uStack_110 = CONCAT44(uStack_110._4_4_,8);
          pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        if (((plVar15[2] & 1U) == 0) ||
           (plVar6 = (longlong *)(plVar15[2] & 0xfffffffffffffffe), plVar6 == (longlong *)0x0)) {
LAB_1446f2233:
          plVar6 = (longlong *)0x0;
        }
        else {
          if (*(int *)(plVar6[2] + 0x38) < *(int *)(DAT_14c927740 + 0x38)) goto LAB_1446f2233;
          if (*(longlong *)
               (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) !=
              DAT_14c927740 + 0x30) {
            plVar6 = (longlong *)0x0;
          }
        }
        plVar12 = param_1;
        if (plVar6 != param_1) break;
        puVar20 = (undefined *)plVar15[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          puStack_108 = (undefined *)FUN_140342cba();
          pcStack_100 = FUN_1468c7f1e;
          uStack_110 = 0;
          pwStack_118 = (wchar_t *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        if (DAT_14c951a40 == 0) {
          bVar23 = puVar20 != (undefined *)0x0;
          if (puVar20 != &DAT_14c951a38 && bVar23) {
            do {
              puVar20 = *(undefined **)(puVar20 + 0x30);
              bVar23 = puVar20 != (undefined *)0x0;
              if (puVar20 == &DAT_14c951a38) break;
            } while (puVar20 != (undefined *)0x0);
          }
          param_1 = plStack_c8;
          if (bVar23) goto LAB_1446f17f4;
        }
        else if ((*(ulonglong *)(puVar20 + 0x18) & DAT_14c951a40) != 0) {
LAB_1446f17f4:
          (**(code **)(*plVar15 + 0xb8))(plVar15,param_2);
        }
        plVar15 = (longlong *)plVar15[3];
        plVar12 = param_1;
      } while (plVar15 != (longlong *)0x0);
    }
  }
  else {
    lVar9 = (**(code **)(*param_1 + 0x2b0))(param_1);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (lVar9 != 0) {
        (**(code **)(*param_2 + 0x198))(param_2,lVar9);
      }
      (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
    }
    iVar17 = 1;
    iVar19 = 0;
    do {
      param_1[0xb] = 0x100000000;
      if (lVar9 != 0) {
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar9 + 0x58);
        *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(lVar9 + 0x5c);
      }
      for (plVar12 = (longlong *)param_1[10]; plVar12 != (longlong *)0x0;
          plVar12 = (longlong *)plVar12[3]) {
        if (DAT_14c927740 == 0) {
          pppuStack_e0 = &ppuStack_90;
          ppuStack_90 = (undefined **)FUN_1449e2820;
          pcStack_d0 = FUN_14081d0ea;
          pcStack_d8 = FUN_14081d0ea;
          puStack_e8 = &LAB_146856450;
          pcStack_f0 = FUN_1427b121c;
          pwStack_f8 = L"Engine";
          pcStack_100 = (code *)0x0;
          puStack_108 = (undefined *)CONCAT44(puStack_108._4_4_,0x10000021);
          uStack_110 = CONCAT44(uStack_110._4_4_,8);
          pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,0x28);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        if (((plVar12[2] & 1U) == 0) ||
           (plVar15 = (longlong *)(plVar12[2] & 0xfffffffffffffffe), plVar15 == (longlong *)0x0)) {
LAB_1446f2080:
          plVar15 = (longlong *)0x0;
        }
        else {
          if (*(int *)(plVar15[2] + 0x38) < *(int *)(DAT_14c927740 + 0x38)) goto LAB_1446f2080;
          if (*(longlong *)
               (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8) !=
              DAT_14c927740 + 0x30) {
            plVar15 = (longlong *)0x0;
          }
        }
        if (plVar15 != param_1) break;
        puVar20 = (undefined *)plVar12[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          puStack_108 = (undefined *)FUN_140342cba();
          pcStack_100 = FUN_1468c7f1e;
          uStack_110 = 0;
          pwStack_118 = (wchar_t *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        if (DAT_14c951a40 == 0) {
          bVar23 = puVar20 != (undefined *)0x0;
          if (puVar20 != &DAT_14c951a38 && bVar23) {
            do {
              puVar20 = *(undefined **)(puVar20 + 0x30);
              bVar23 = puVar20 != (undefined *)0x0;
              if (puVar20 == &DAT_14c951a38) break;
            } while (puVar20 != (undefined *)0x0);
          }
          param_1 = plStack_c8;
          if (bVar23) goto LAB_1446f2000;
        }
        else if ((*(ulonglong *)(puVar20 + 0x18) & DAT_14c951a40) != 0) {
LAB_1446f2000:
          if (DAT_14c927740 == 0) {
            pppuStack_e0 = &ppuStack_90;
            ppuStack_90 = (undefined **)FUN_1449e2820;
            pcStack_d0 = FUN_14081d0ea;
            pcStack_d8 = FUN_14081d0ea;
            puStack_e8 = &LAB_146856450;
            pcStack_f0 = FUN_1427b121c;
            pwStack_f8 = L"Engine";
            pcStack_100 = (code *)0x0;
            puStack_108 = (undefined *)CONCAT44(puStack_108._4_4_,0x10000021);
            uStack_110 = CONCAT44(uStack_110._4_4_,8);
            pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740);
          }
          uVar3 = *(uint *)(plVar12 + 5);
          lVar16 = plVar12[4];
          (**(code **)(*plVar12 + 0xb8))(plVar12,param_2);
          uVar4 = FUN_140011d52(plVar12);
          *(undefined4 *)(plStack_c8 + 0xb) = uVar4;
          if (((byte)((uVar3 & 0x40) >> 6) != (*(byte *)(plVar12 + 5) & 0x40) >> 6) ||
             (lVar16 != plVar12[4])) {
            iVar17 = iVar17 + 1;
            param_1 = plStack_c8;
            break;
          }
          iVar5 = (**(code **)(*plVar12 + 0x178))(plVar12);
          iVar13 = *(int *)((longlong)plStack_c8 + 0x5c);
          if (*(int *)((longlong)plStack_c8 + 0x5c) < iVar5) {
            iVar13 = iVar5;
          }
          *(int *)((longlong)plStack_c8 + 0x5c) = iVar13;
          param_1 = plStack_c8;
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar17);
    lVar9 = param_1[2];
    plVar12 = param_1;
    if (DAT_14c948fa0 == 0) {
      ppuStack_a8 = (undefined **)&DAT_1427db2a2;
      lVar16 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar16;
      FUN_1446f470e(&ppuStack_90,L"ScriptStruct",1);
      puStack_e8 = &LAB_1468915ce;
      pcStack_f0 = FUN_1427dc742;
      pcStack_100 = (code *)0x149e2b68a;
      pwStack_f8 = (wchar_t *)CONCAT44(pwStack_f8._4_4_,199);
      puStack_108 = (undefined *)0x10;
      uStack_110 = CONCAT44(uStack_110._4_4_,0x10000020);
      pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,8);
      pppuStack_e0 = &ppuStack_a8;
      FUN_14574b4b2(lVar16);
      DAT_14c948fa0 = lVar16;
      uVar7 = FUN_1446f8646();
      lVar16 = DAT_14c948fa0;
      uVar11 = FUN_1449e2fb2();
      pwStack_118 = L"ScriptStruct";
      FUN_14574b446(uVar11,lVar16,uVar7,L"/Script/CoreUObject");
      if (DAT_14c948fa0 == 0) goto LAB_1446f1813;
    }
    if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) ==
        DAT_14c948fa0 + 0x30)) {
      lVar9 = param_1[10];
      param_1 = plStack_c8;
      for (; plStack_c8 = param_1, lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x18)) {
        puVar20 = *(undefined **)(lVar9 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951ae0) &&
           (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
          FUN_1446ddbd2();
          pcStack_100 = FUN_140b31576;
          puStack_108 = &DAT_14c951a38;
          uStack_110 = 0;
          pwStack_118 = (wchar_t *)0x208001;
          FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
          atexit(FUN_14280cbf7);
          _Init_thread_footer(&DAT_14c951ae0);
        }
        if (DAT_14c951a98 == 0) {
          bVar23 = puVar20 != (undefined *)0x0;
          if (puVar20 != &DAT_14c951a90 && bVar23) {
            do {
              puVar20 = *(undefined **)(puVar20 + 0x30);
              bVar23 = puVar20 != (undefined *)0x0;
              if (puVar20 == &DAT_14c951a90) break;
            } while (puVar20 != (undefined *)0x0);
          }
          if (bVar23) goto LAB_1446f2173;
        }
        else if ((*(ulonglong *)(puVar20 + 0x18) & DAT_14c951a98) != 0) {
LAB_1446f2173:
          lVar16 = *(longlong *)(lVar9 + 0x78);
          if (lVar16 != 0) {
            puVar20 = *(undefined **)(lVar16 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
            {
              puStack_108 = (undefined *)FUN_1446ddbd2();
              pcStack_100 = FUN_1403a682c;
              uStack_110 = 0;
              pwStack_118 = (wchar_t *)0x108001;
              FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
              atexit(FUN_142818c9e);
              _Init_thread_footer(&DAT_14c952a58);
            }
            if (DAT_14c952a10 == 0) {
              bVar23 = puVar20 != (undefined *)0x0;
              if (puVar20 != &DAT_14c952a08 && bVar23) {
                do {
                  puVar20 = *(undefined **)(puVar20 + 0x30);
                  bVar23 = puVar20 != (undefined *)0x0;
                  if (puVar20 == &DAT_14c952a08) break;
                } while (puVar20 != (undefined *)0x0);
              }
              if (bVar23) goto LAB_1446f21bc;
            }
            else if ((*(ulonglong *)(puVar20 + 0x18) & DAT_14c952a10) != 0) {
LAB_1446f21bc:
              if (*(longlong **)(lVar16 + 0x70) == plStack_c8) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",0x3ac,
                              L"\'Struct recursion via arrays is unsupported for properties.");
              }
            }
          }
        }
        param_1 = plStack_c8;
      }
      (**(code **)(*param_1 + 0x358))(param_1);
      lVar9 = param_1[0x17];
      plVar12 = param_1;
      if (lVar9 != 0) {
        *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(lVar9 + 0xc);
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar9 + 8);
      }
    }
  }
LAB_1446f1813:
  plVar15 = plVar12;
  plVar12 = plVar15;
  if ((longlong *)plVar15[4] != (longlong *)0x0) goto code_r0x0001446f1822;
  goto LAB_1446f1830;
code_r0x0001446f1822:
  plVar12 = (longlong *)plVar15[4];
  if ((*(uint *)(plVar15 + 1) >> 0x1c & 1) == 0) goto LAB_1446f1813;
  plVar12 = (longlong *)FUN_142840154(plVar15);
LAB_1446f1830:
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)plVar15[4];
    goto LAB_1446f1813;
  }
  cVar2 = FUN_1403f35db(plVar12[3],&DAT_14c8687c0);
  if ((cVar2 != '\0') && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  plVar6 = param_1 + 0xe;
  plStack_b8 = param_1 + 0x10;
  plVar12 = param_1 + 0xf;
  plVar15 = param_1 + 0x11;
  ppuStack_a8 = (undefined **)0x0;
  uStack_a0 = 0;
  while (param_1 != (longlong *)0x0) {
    for (plVar14 = (longlong *)param_1[10]; plStack_c0 = param_1, plVar14 != (longlong *)0x0;
        plVar14 = (longlong *)plVar14[3]) {
      if ((~*(uint *)(plVar14[1] + 0x18) & 0x8001) == 0) goto LAB_1446f18c0;
    }
    if (*(code **)(*param_1 + 0x2b0) == (code *)&LAB_1446e8c94) {
      param_1 = (longlong *)param_1[8];
      plStack_c0 = param_1;
    }
    else {
      param_1 = (longlong *)(**(code **)(*param_1 + 0x2b0))(param_1);
      plStack_c0 = param_1;
    }
  }
  goto LAB_1446f1dc1;
LAB_1446f18c0:
  pcVar1 = *(code **)(*plVar14 + 0x180);
  if (pcVar1 != (code *)&LAB_1446f0722) {
    if (pcVar1 != (code *)&LAB_1468958d0) {
      if (pcVar1 == FUN_140011966) {
        cVar2 = FUN_140011966(plVar14,&ppuStack_a8,0xf);
      }
      else {
        cVar2 = (*pcVar1)(plVar14,&ppuStack_a8,0xf);
      }
      if (cVar2 == '\0') goto LAB_1446f18e6;
    }
    *plVar12 = (longlong)plVar14;
    plVar12 = plVar14 + 10;
  }
LAB_1446f18e6:
  uVar18 = plVar14[2];
  if ((uVar18 & 1) == 0) {
    bVar23 = true;
    if (uVar18 < 2) goto LAB_1446f2222;
    do {
      uVar18 = *(ulonglong *)(uVar18 + 0x10);
      if ((uVar18 & 1) != 0) {
        uVar18 = uVar18 & 0xfffffffffffffffe;
        if (uVar18 != 0) goto joined_r0x0001446f2c7e;
        break;
      }
    } while (1 < uVar18);
    uVar21 = 0;
    bVar22 = false;
  }
  else {
    uVar18 = uVar18 & 0xfffffffffffffffe;
    if (uVar18 == 0) {
LAB_1446f2222:
      uVar21 = 0;
      bVar23 = true;
      bVar22 = false;
    }
    else {
joined_r0x0001446f2c7e:
      if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c(uVar18);
      }
      if (DAT_14c949118 == (longlong *)0x0) {
        if (DAT_14c963f04 == '\0') {
          uVar7 = FUN_140011aa6();
          plVar8 = (longlong *)FUN_140011c0e(uVar7,0x250,8);
        }
        else {
          plVar8 = (longlong *)FUN_14001cc68(0x250,8);
        }
        DAT_14c949118 = plVar8;
        FUN_1446f470e(auStack_70,L"Class",1);
        plVar8[1] = -0xffffff39;
        plVar8[2] = 0;
        plVar8[3] = 0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        plVar8[6] = 0;
        *(undefined4 *)(plVar8 + 7) = 0xffffffff;
        plVar8[8] = 0;
        plVar8[9] = 0;
        plVar8[10] = 0;
        plVar8[0xb] = 0x800000250;
        plVar8[0xc] = 0;
        plVar8[0xd] = 0;
        plVar8[0xe] = 0;
        plVar8[0xf] = 0;
        plVar8[0x10] = 0;
        plVar8[0x11] = 0;
        plVar8[0x12] = 0;
        plVar8[0x13] = 0;
        plVar8[0x14] = 0;
        plVar8[0x15] = 0;
        *plVar8 = (longlong)&PTR_FUN_149e70a50;
        plVar8[0x16] = (longlong)&LAB_146273097;
        plVar8[0x17] = (longlong)&LAB_146891e90;
        plVar8[0x18] = (longlong)FUN_140631fbe;
        plVar8[0x19] = 0;
        *(undefined2 *)(plVar8 + 0x1a) = 0;
        *(undefined4 *)((longlong)plVar8 + 0xd4) = 0x10000080;
        plVar8[0x1b] = 0x20;
        plVar8[0x29] = 0;
        *(undefined4 *)(plVar8 + 0x2a) = 0;
        plVar8[0x1c] = 0;
        plVar8[0x1d] = 0;
        plVar8[0x1e] = 0;
        plVar8[0x1f] = 0;
        plVar8[0x20] = 0;
        plVar8[0x21] = 0;
        plVar8[0x22] = 0;
        plVar8[0x23] = 0;
        plVar8[0x24] = 0;
        plVar8[0x25] = 0;
        plVar8[0x26] = 0;
        *(undefined8 *)((longlong)plVar8 + 0x154) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar8 + 0x15c) = 0;
        plVar8[0x2d] = 0;
        *(undefined4 *)(plVar8 + 0x2e) = 0;
        InitializeSRWLock((PSRWLOCK)(plVar8 + 0x2f));
        plVar8[0x34] = 0;
        *(undefined4 *)(plVar8 + 0x35) = 0;
        plVar8[0x30] = 0;
        plVar8[0x31] = 0;
        *(undefined8 *)((longlong)plVar8 + 0x1ac) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar8 + 0x1b4) = 0;
        plVar8[0x38] = 0;
        *(undefined4 *)(plVar8 + 0x39) = 0;
        InitializeSRWLock((PSRWLOCK)(plVar8 + 0x3a));
        plVar8[0x44] = 0;
        *(undefined4 *)(plVar8 + 0x45) = 0;
        plVar8[0x3b] = 0;
        plVar8[0x3c] = 0;
        plVar8[0x3d] = 0;
        plVar8[0x3e] = 0;
        plVar8[0x3f] = 0;
        plVar8[0x40] = 0;
        plVar8[0x41] = 0;
        *(undefined8 *)((longlong)plVar8 + 0x22c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar8 + 0x234) = 0;
        plVar8[0x48] = 0;
        *(undefined4 *)(plVar8 + 0x49) = 0;
        plVar8[0x1d] = (longlong)L"Engine";
        DAT_14c949118 = plVar8;
        if (DAT_14c951858 == 0) {
          pppuStack_e0 = &ppuStack_90;
          ppuStack_90 = (undefined **)FUN_1449e2820;
          pcStack_d0 = FUN_14081d0ea;
          pcStack_d8 = FUN_14081d0ea;
          puStack_e8 = &LAB_1468c5283;
          pcStack_f0 = FUN_142809da0;
          pwStack_f8 = L"Engine";
          pcStack_100 = (code *)0x400000000;
          puStack_108 = (undefined *)CONCAT44(puStack_108._4_4_,0x10000000);
          uStack_110 = CONCAT44(uStack_110._4_4_,8);
          pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,0x50);
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar9 = DAT_14c951858;
        plVar8 = DAT_14c949118;
        if (DAT_14c948f88 == (longlong *)0x0) {
          ppuStack_68 = (undefined **)&DAT_1427db2a2;
          plVar10 = (longlong *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948f88 = plVar10;
          FUN_1446f470e(&ppuStack_90,L"Struct",1);
          pppuStack_e0 = &ppuStack_68;
          puStack_e8 = &LAB_146891313;
          pcStack_f0 = FUN_146272f63;
          pcStack_100 = (code *)0x149e2b68a;
          pwStack_f8 = (wchar_t *)CONCAT44(pwStack_f8._4_4_,199);
          puStack_108 = (undefined *)0x8;
          uStack_110 = CONCAT44(uStack_110._4_4_,0x10000020);
          pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,8);
          FUN_14574b4b2(plVar10);
          DAT_14c948f88 = plVar10;
          uVar7 = FUN_1446f8646();
          plStack_b0 = DAT_14c948f88;
          uVar11 = FUN_1400163b0();
          pwStack_118 = L"Struct";
          FUN_14574b446(uVar11,plStack_b0,uVar7,L"/Script/CoreUObject");
        }
        plVar10 = (longlong *)0x0;
        if (DAT_14c948f88 != plVar8) {
          plVar10 = DAT_14c948f88;
        }
        (**(code **)(*plVar8 + 0x310))(plVar8,plVar10);
        if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar9);
        }
        plVar8[0x1c] = lVar9;
        (**(code **)(*plVar8 + 8))(plVar8);
        FUN_140011b50(plVar8,L"/Script/CoreUObject",L"Class");
      }
      iVar17 = (int)DAT_14c949118[7];
      if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x38) < iVar17) ||
         (*(longlong **)(*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x30) + (longlong)iVar17 * 8)
          != DAT_14c949118 + 6)) {
        do {
          if ((iVar17 <= *(int *)(*(longlong *)(uVar18 + 0x10) + 0x38)) &&
             (*(longlong **)
               (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x30) + (longlong)iVar17 * 8) ==
              DAT_14c949118 + 6)) goto LAB_1446f193e;
          uVar18 = *(ulonglong *)(uVar18 + 0x20);
          bVar23 = true;
          uVar21 = 0;
          bVar22 = false;
        } while (uVar18 != 0);
      }
      else {
LAB_1446f193e:
        bVar22 = (*(uint *)(uVar18 + 0xd4) & 0x10000080) != 0;
        bVar23 = false;
        uVar21 = uVar18;
      }
    }
  }
  uVar18 = plVar14[7] & 0x1040000000;
  if (uVar18 == 0) {
    cVar2 = (**(code **)(*plVar14 + 0x150))(plVar14,&ppuStack_a8);
    uVar18 = plVar14[7] & 0x1040000000;
  }
  else {
    cVar2 = '\0';
  }
  if ((cVar2 != '\0') || (uVar18 == 0 && !bVar22)) {
    *plStack_b8 = (longlong)plVar14;
    plStack_b8 = plVar14 + 0xb;
  }
  if ((!bVar23) &&
     ((!bVar22 ||
      (((*(byte *)((longlong)plVar14 + 0x39) & 0x40) != 0 && ((*(byte *)(uVar21 + 0xd5) & 4) == 0)))
      ))) {
    *plVar15 = (longlong)plVar14;
    plVar15 = plVar14 + 0xc;
  }
  *plVar6 = (longlong)plVar14;
  plVar6 = plVar14 + 9;
  plVar14 = plVar14 + 3;
  do {
    for (plVar14 = (longlong *)*plVar14; plVar14 != (longlong *)0x0;
        plVar14 = (longlong *)plVar14[3]) {
      if ((~*(uint *)(plVar14[1] + 0x18) & 0x8001) == 0) goto LAB_1446f18c0;
    }
    if (*(code **)(*plStack_c0 + 0x2b0) == (code *)&LAB_1446e8c94) {
      plStack_c0 = (longlong *)plStack_c0[8];
    }
    else {
      plStack_c0 = (longlong *)(**(code **)(*plStack_c0 + 0x2b0))();
    }
    plVar14 = plStack_c0 + 10;
  } while (plStack_c0 != (longlong *)0x0);
LAB_1446f1dc1:
  plVar14 = plStack_c8;
  *plVar6 = 0;
  *plStack_b8 = 0;
  *plVar12 = 0;
  *plVar15 = 0;
  plVar12 = plStack_c8 + 0x12;
  puStack_88 = (undefined8 *)0x0;
  ppuStack_90 = &PTR_FUN_149e6e570;
  plStack_80 = plStack_c8;
  plVar15 = (longlong *)plStack_c8[10];
  plStack_78 = plVar12;
  if (plVar15 != (longlong *)0x0) {
    do {
      (**(code **)(*plVar15 + 0x30))(plVar15,&ppuStack_90);
      plVar15 = (longlong *)plVar15[3];
    } while (plVar15 != (longlong *)0x0);
    ppuStack_90 = &PTR_LAB_149eb0140;
    if (puStack_88 != (undefined8 *)0x0) {
      (**(code **)*puStack_88)(puStack_88,1);
    }
  }
  plVar15 = plStack_c8;
  uVar3 = *(uint *)(plVar14 + 0x13);
  if (DAT_14c950c29 == '\x01') {
    if ((int)uVar3 < 1) goto LAB_1446f1ecd;
    lVar9 = *plVar12;
    lVar16 = 0;
    do {
      if (*(longlong *)(lVar9 + lVar16 * 8) != 0) {
        FUN_1456cec3c();
        uVar3 = *(uint *)(plStack_c8 + 0x13);
      }
      lVar16 = lVar16 + 1;
      plVar14 = plVar15;
    } while (lVar16 < (int)uVar3);
  }
  if (0 < (int)uVar3) {
    uVar18 = (ulonglong)uVar3;
    do {
      _Src = (void *)(*plVar12 + uVar18 * 8);
      plVar15 = (longlong *)((longlong)_Src + -8);
      lVar9 = *plVar15;
      if (lVar9 == 0) {
        uVar3 = *(uint *)(plVar14 + 0x13);
        if (uVar18 != uVar3) {
          memmove(plVar15,_Src,(longlong)(int)(uVar3 - (int)uVar18) << 3);
          uVar3 = *(uint *)(plStack_c8 + 0x13);
        }
        plVar14 = plStack_c8;
        *(uint *)(plStack_c8 + 0x13) = uVar3 - 1;
        FUN_145d115d8(plVar12);
      }
      else {
        if (DAT_14c9512b0 == 0) {
          pppuStack_e0 = &ppuStack_90;
          ppuStack_90 = (undefined **)FUN_140631fbe;
          pcStack_d0 = (code *)&LAB_145834656;
          pcStack_d8 = (code *)&LAB_146272d4c;
          puStack_e8 = &LAB_1468be089;
          pcStack_f0 = FUN_14609ba58;
          pwStack_f8 = L"Engine";
          pcStack_100 = (code *)0x0;
          puStack_108 = (undefined *)CONCAT44(puStack_108._4_4_,0x10000000);
          uStack_110 = CONCAT44(uStack_110._4_4_,8);
          pwStack_118 = (wchar_t *)CONCAT44(pwStack_118._4_4_,0x410);
          FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_14c9512b0,
                        &DAT_1468be08e);
          lVar9 = *plVar15;
          if (lVar9 != 0) goto LAB_1446f1e95;
        }
        else {
LAB_1446f1e95:
          if ((((DAT_14c9512b0 != 0) && (lVar16 = *(longlong *)(lVar9 + 0x10), lVar16 != 0)) &&
              (*(int *)(DAT_14c9512b0 + 0x38) <= *(int *)(lVar16 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(DAT_14c9512b0 + 0x38) * 8) ==
              DAT_14c9512b0 + 0x30)) {
            ppuStack_90 = (undefined **)((uVar18 - 1) * 8 + *plVar12);
            FUN_146898006(lVar9 + 0x370,&ppuStack_68);
          }
        }
        FUN_14001206a();
      }
      bVar23 = 1 < uVar18;
      uVar18 = uVar18 - 1;
    } while (bVar23);
  }
LAB_1446f1ecd:
  if (ppuStack_a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14001042c FUN_14001042c body=26 status=ok
// SIG undefined FUN_14001042c(void)

void FUN_14001042c(undefined8 param_1)

{
  FUN_1446f1718();
  FUN_14001067e(param_1);
  return;
}



// FUNCTION 140010446 FUN_140010446 body=288 status=ok
// SIG undefined FUN_140010446(void)

undefined8 *
FUN_140010446(undefined8 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
             ulonglong param_5)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_149e6b8b0;
  param_1[8] = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_4 == 0) {
    if (param_3 != 0) {
      param_4 = (ulonglong)*(uint *)(param_3 + 0x58);
      goto LAB_1400104c8;
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    uVar1 = 1;
    if (param_5 != 0) goto LAB_1400104e5;
  }
  else {
LAB_1400104c8:
    *(int *)(param_1 + 0xb) = (int)param_4;
    if (param_5 != 0) goto LAB_1400104e5;
    uVar1 = 1;
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_3 + 0x5c);
    }
  }
  param_5 = 1;
  if (1 < (int)uVar1) {
    param_5 = (ulonglong)uVar1;
  }
LAB_1400104e5:
  *(int *)((longlong)param_1 + 0x5c) = (int)param_5;
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
  FUN_140010566(param_1 + 6);
  return param_1;
}



// FUNCTION 140010566 FUN_140010566 body=144 status=ok
// SIG undefined FUN_140010566(void)

void FUN_140010566(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  plVar3 = param_1 + -6;
  if (plVar3 == (longlong *)0x0) {
    lVar1 = FUN_14001cc68(1,0x10);
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    plVar2 = plVar3;
    lVar5 = -8;
    do {
      lVar1 = lVar5;
      plVar2 = (longlong *)plVar2[8];
      lVar5 = lVar1 + 8;
      iVar4 = iVar4 + 1;
    } while (plVar2 != (longlong *)0x0);
    lVar1 = FUN_14001cc68(lVar1 + 0x10,0x10);
    plVar2 = (longlong *)(lVar1 + lVar5);
    do {
      *plVar2 = (longlong)(plVar3 + 6);
      plVar3 = (longlong *)plVar3[8];
      plVar2 = plVar2 + -1;
    } while (plVar3 != (longlong *)0x0);
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 1400105f6 FUN_1400105f6 body=136 status=ok
// SIG undefined FUN_1400105f6(void)

void FUN_1400105f6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1446f1718();
  uVar1 = *(uint *)(param_1 + 0xb0) & 0xff7fffff;
  *(uint *)(param_1 + 0xb0) = uVar1;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar1 = uVar1 | 0xe000;
    *(uint *)(param_1 + 0xb0) = uVar1;
    for (lVar2 = *(longlong *)(param_1 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x48)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x38);
      if (((uint)uVar3 >> 9 & 1) == 0) {
        uVar1 = uVar1 & 0xffff7fff;
        *(uint *)(param_1 + 0xb0) = uVar1;
        uVar3 = *(ulonglong *)(lVar2 + 0x38);
      }
      if ((uVar3 >> 0x24 & 1) == 0) {
        uVar1 = uVar1 & 0xffffbfff;
        *(uint *)(param_1 + 0xb0) = uVar1;
        uVar3 = *(ulonglong *)(lVar2 + 0x38);
      }
      if (((uint)uVar3 >> 0x1e & 1) == 0) {
        uVar1 = uVar1 & 0xffffdfff;
        *(uint *)(param_1 + 0xb0) = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 14001067e FUN_14001067e body=647 status=ok
// SIG undefined FUN_14001067e(void)

void FUN_14001067e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0xffff0000;
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 != 0) {
    puVar3 = *(undefined **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar1 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar1,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    if (DAT_14c951a40 == 0) {
      bVar5 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c951a38 && bVar5) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar5 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c951a38) break;
        } while (puVar3 != (undefined *)0x0);
      }
      if (!bVar5) {
        return;
      }
    }
    else if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951a40) == 0) {
      return;
    }
    plVar2 = (longlong *)(param_1 + 0xc0);
    do {
      while( true ) {
        if ((char)*(undefined8 *)(lVar4 + 0x38) < '\0') {
          *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
          *(short *)(param_1 + 0xb6) =
               (short)*(undefined4 *)(lVar4 + 0x34) * (short)*(undefined4 *)(lVar4 + 0x30) +
               (short)*(undefined4 *)(lVar4 + 0x44);
          if ((*(byte *)(lVar4 + 0x39) & 4) != 0) {
            *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(lVar4 + 0x44);
          }
        }
        else {
          if ((*(byte *)(param_1 + 0xb2) & 0x80) == 0) {
            return;
          }
          if (((uint)*(undefined8 *)(lVar4 + 0x38) >> 9 & 1) == 0) {
            *plVar2 = lVar4;
            plVar2 = (longlong *)(lVar4 + 0x60);
            *(undefined8 *)(lVar4 + 0x60) = 0;
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x18);
        if (lVar4 == 0) {
          return;
        }
        puVar3 = *(undefined **)(lVar4 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          uVar1 = FUN_140342cba();
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar1,FUN_1468c7f1e);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        if (DAT_14c951a40 == 0) break;
        if ((*(ulonglong *)(puVar3 + 0x18) & DAT_14c951a40) == 0) {
          return;
        }
      }
      bVar5 = puVar3 != (undefined *)0x0;
      if (puVar3 != &DAT_14c951a38 && bVar5) {
        do {
          puVar3 = *(undefined **)(puVar3 + 0x30);
          bVar5 = puVar3 != (undefined *)0x0;
          if (puVar3 == &DAT_14c951a38) break;
        } while (puVar3 != (undefined *)0x0);
      }
    } while (bVar5);
  }
  return;
}



// FUNCTION 140010906 FUN_140010906 body=706 status=ok
// SIG undefined FUN_140010906(void)

void FUN_140010906(longlong *param_1)

{
  uint uVar1;
  DWORD DVar2;
  char cVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar7 = DAT_14c75ec34 != 0xffffffff;
    DVar2 = dwTlsIndex;
    if (bVar7) {
      DVar4 = DAT_14c75ec34;
      DVar2 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar2;
    UNLOCK();
    if (bVar7) {
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
  if (*(char *)((longlong)param_1 + 0x13) == '\0') {
    *(int *)((longlong)lpTlsValue + 0x28) = *(int *)((longlong)lpTlsValue + 0x28) + -1;
    *(longlong *)((longlong)lpTlsValue + 0x30) = param_1[0x38];
    lVar5 = *param_1;
  }
  else {
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_140010a23;
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar5 + 8);
    if (-1 < (int)uVar1) break;
    LOCK();
    bVar7 = uVar1 == *(uint *)(lVar5 + 8);
    if (bVar7) {
      *(uint *)(lVar5 + 8) = uVar1 & 0x7fffffff;
    }
    UNLOCK();
  } while (!bVar7);
  plVar6 = *(longlong **)(*param_1 + 0x10);
  if (DAT_14c927740 == (longlong *)0x0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  if (((plVar6 != DAT_14c927740) && (param_1[1] == 0)) && (plVar6[2] != 0)) {
    lVar5 = plVar6[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar5 = plVar6[0x22];
    }
    param_1[1] = lVar5;
  }
  cVar3 = FUN_144aa140a();
  if ((cVar3 == '\0') && (lVar5 = FUN_144a7773e(param_1), lVar5 != 0)) {
    *(undefined1 *)(lVar5 + 0x13) = 1;
  }
  else {
    FUN_14283eca6(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x13) == '\0') {
    *(int *)((longlong)lpTlsValue + 0x18) = *(int *)((longlong)lpTlsValue + 0x18) + -1;
  }
LAB_140010a23:
  FUN_144a6a7e8(param_1[0x42],(int)param_1[0x43]);
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    plVar6 = param_1 + 0x3e;
    if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x3c];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  plVar6 = param_1 + 4;
  if ((longlong *)param_1[0x24] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[0x24];
  }
  FUN_14472412f(plVar6,(int)param_1[0x25]);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140010bca FUN_140010bca body=300 status=ok
// SIG undefined FUN_140010bca(void)

longlong FUN_140010bca(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9493c0 == 0) {
    local_30 = &DAT_1427db2a2;
    lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c9493c0 = lVar1;
    FUN_1446f470e(local_28,L"Function",1);
    local_48 = &LAB_146892a02;
    local_50 = FUN_1427dd579;
    local_60 = L"Engine";
    local_58 = 199;
    local_68 = 0x80000;
    local_70 = 0x10000000;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_30;
    FUN_14574b4b2(lVar1);
    DAT_14c9493c0 = lVar1;
    uVar2 = FUN_144a797b2();
    lVar1 = DAT_14c9493c0;
    uVar3 = FUN_1449e2fb2();
    local_78 = L"Function";
    FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c9493c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140010cf7 FUN_140010cf7 body=3181 status=ok
// SIG undefined FUN_140010cf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140010cf7(longlong param_1,undefined2 *param_2,LARGE_INTEGER param_3,ulonglong param_4,
             uint param_5,char param_6,undefined1 *param_7,longlong param_8)

{
  longlong *plVar1;
  undefined1 uVar2;
  DWORD DVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *_Dst;
  undefined2 *puVar8;
  undefined8 uVar9;
  LPVOID lpTlsValue;
  uint uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  LARGE_INTEGER LVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  LARGE_INTEGER LVar18;
  uint uVar19;
  wchar_t *pwVar20;
  bool bVar21;
  undefined1 auStack_338 [32];
  undefined2 *local_318;
  LARGE_INTEGER local_310;
  LARGE_INTEGER local_308;
  undefined2 *local_300;
  wchar_t *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  int local_2dc;
  int local_2d8;
  uint local_2d4;
  wchar_t *local_2d0;
  uint local_2c8;
  uint local_2c4;
  undefined2 *local_2c0;
  undefined2 *local_2b8;
  undefined8 uStack_2b0;
  LARGE_INTEGER local_2a8;
  undefined8 uStack_2a0;
  undefined2 *local_298;
  undefined8 uStack_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  ulonglong *local_270;
  char local_268;
  undefined1 local_260 [512];
  ulonglong local_60 [4];
  
  uVar17 = param_4 & 0xffffffff;
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar15 = param_4 & 0xffffffff;
  if ((param_4 & 0x10) != 0) {
    local_288 = param_3;
    FUN_140aa725c(param_1,&local_280);
    uVar15 = (ulonglong)((uint)param_4 & 0xffffcfff);
    param_3 = local_280;
  }
  uVar13 = (uint)uVar15;
  local_288 = param_3;
  if ((undefined2 *)param_3.QuadPart == (undefined2 *)0x0) {
    local_318 = (undefined2 *)((ulonglong)local_318 & 0xffffffff00000000);
    FUN_140af9fb2(&local_288,param_2,param_1,0);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
    local_300 = (undefined2 *)((ulonglong)local_300 & 0xffffffff00000000);
    local_308.QuadPart = local_308.QuadPart & 0xffffffff00000000;
    local_310.QuadPart = local_310.QuadPart & 0xffffffffffffff00;
    local_318 = (undefined2 *)CONCAT71(local_318._1_7_,1);
    _Dst = (longlong *)FUN_140163a0e(&DAT_14c964408,0,param_2,param_3.QuadPart);
    if (_Dst != (longlong *)0x0) {
      local_2c0 = param_2;
      if (param_1 == 0) {
LAB_140010dfc:
        local_2d0 = L"";
        if ((param_2 != (undefined2 *)0x0) &&
           (puVar8 = param_2, (*(uint *)(param_1 + 0xd4) & 0x400) != 0)) {
LAB_140010e22:
          puVar11 = puVar8;
          puVar8 = puVar11;
          if (*(undefined2 **)(puVar11 + 0x10) != (undefined2 *)0x0) goto code_r0x000140010e31;
          goto LAB_140010e42;
        }
        goto LAB_140010f54;
      }
      if ((*(int *)(_Dst[2] + 0x38) < *(int *)(param_1 + 0x38)) ||
         (*(longlong *)(*(longlong *)(_Dst[2] + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 8) !=
          param_1 + 0x30)) goto LAB_140010dfc;
      goto LAB_140011257;
    }
  }
  local_2d8 = *(int *)(param_1 + 0x58);
  lVar12 = (longlong)local_2d8;
  iVar16 = 4;
  if (4 < *(int *)(param_1 + 0x5c)) {
    iVar16 = *(int *)(param_1 + 0x5c);
  }
  if ((DAT_14c75b114 == '\x01') && (DAT_14c963f04 == '\0')) {
    uVar9 = FUN_140011aa6();
    _Dst = (longlong *)FUN_140011c0e(uVar9,lVar12,iVar16);
  }
  else {
    _Dst = (longlong *)FUN_14001cc68(lVar12);
  }
  bVar21 = false;
  local_2dc = -1;
  local_2d0 = (wchar_t *)0x0;
  uVar19 = 0xffffffff;
  local_2d4 = 0;
LAB_140010ec6:
  if ((uVar17 & 0x10) == 0) {
    uVar10 = uVar13 | 0x40;
    if ((*(byte *)(param_1 + 0xd4) & 8) == 0) {
      uVar10 = uVar13;
    }
    if ((uVar17 & 0x20) == 0) {
      uVar13 = uVar10;
    }
  }
  uVar17 = 0;
  memset(_Dst,0,(longlong)local_2d8);
  local_300 = (undefined2 *)CONCAT44(local_300._4_4_,local_2d4);
  local_308.s.LowPart = uVar19;
  local_310 = local_288;
  local_318 = param_2;
  FUN_14479fae8(_Dst,param_1,uVar13 | 0x200,param_5);
  goto LAB_140011444;
code_r0x000140010e31:
  puVar8 = *(undefined2 **)(puVar11 + 0x10);
  if ((*(uint *)(puVar11 + 4) >> 0x1c & 1) == 0) goto LAB_140010e22;
  puVar8 = (undefined2 *)FUN_142840154(puVar11);
LAB_140010e42:
  if (puVar8 == (undefined2 *)0x0) {
    puVar8 = *(undefined2 **)(puVar11 + 0x10);
    goto LAB_140010e22;
  }
  local_2d0 = L"";
  if (puVar8 == DAT_14c951640) {
    local_2d0 = 
    L"PerObjectConfig object using the transient package, has triggered a name conflict and will now crash.\nTo avoid this, don\'t use the transient package for PerObjectConfig objects.\nThis has the side effect, of using the full path name for config ini sections. Use \'OverridePerObjectConfigSection\' to keep the short name.\n\n"
    ;
  }
LAB_140010f54:
  uVar19 = *(uint *)((longlong)_Dst + 0xc);
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar12 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8) +
             (ulonglong)(uVar19 & 0xffff) * 0x18;
    local_2d8 = *(undefined4 *)(lVar12 + 8);
    local_2dc = (int)_Dst[1];
  }
  else {
    local_2d8 = _DAT_00000008;
    local_2dc = (int)_Dst[1];
    lVar12 = 0;
  }
  pwVar20 = L"(garbage) ";
  if ((*(uint *)(lVar12 + 8) >> 0x15 & 1) == 0) {
    pwVar20 = L"";
  }
  local_298 = (undefined2 *)0x0;
  uStack_290 = 0;
  local_2c8 = (uint)param_4;
  FUN_14005eb28(&local_298,0x80);
  local_280.QuadPart = (LONGLONG)local_260;
  local_268 = '\0';
  local_270 = local_60;
  local_278.QuadPart = local_280.QuadPart;
  FUN_144750bde(_Dst[2],0,&local_280);
  if (local_270 <= (ulonglong *)(local_278.QuadPart + 2)) {
    FUN_140213274(&local_280,1);
  }
  *(undefined2 *)local_278 = 0x20;
  local_278 = (LARGE_INTEGER)(local_278.QuadPart + 2);
  FUN_144750bde(_Dst,0,&local_280);
  FUN_1400020e8(&local_298,local_280.QuadPart,
                (ulonglong)((longlong)local_278 - (longlong)local_280) >> 1);
  if (local_268 == '\x01') {
    FUN_1400020a8(local_280.QuadPart);
  }
  puVar8 = &DAT_149dfb77a;
  if ((int)uStack_290 != 0) {
    puVar8 = local_298;
  }
  FUN_1400021e4(&local_288,&local_280);
  LVar14.QuadPart = (LONGLONG)&DAT_149dfb77a;
  if (local_278._0_4_ != 0) {
    LVar14 = local_280;
  }
  local_2f8 = pwVar20;
  if (param_2 == (undefined2 *)0x0) {
    local_2b8 = (undefined2 *)0x0;
    uStack_2b0 = 0;
    FUN_1401031ac(param_1,0,&local_2b8);
    local_318 = &DAT_149dfb77a;
    if ((int)uStack_2b0 != 0) {
      local_318 = local_2b8;
    }
    local_2e8 = local_2d8;
    local_2f0 = local_2dc;
    local_310.QuadPart = (LONGLONG)&DAT_149dfb77a;
    local_308 = LVar14;
    local_300 = puVar8;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xda5,
                  L"%sCannot replace existing object of a different class.\n\tNew Object: %s %s.%s\n\tExisting Object: %s %s(0x%08x 0x%08x)"
                  ,local_2d0);
    uVar13 = local_2c8;
    if (local_2b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_2a8.QuadPart = 0;
    uStack_2a0 = 0;
    local_2d4 = uVar13;
    FUN_1401031ac(param_2,0,&local_2a8);
    LVar18.QuadPart = (LONGLONG)&DAT_149dfb77a;
    if ((int)uStack_2a0 != 0) {
      LVar18 = local_2a8;
    }
    local_2b8 = (undefined2 *)0x0;
    uStack_2b0 = 0;
    FUN_1401031ac(param_1,0,&local_2b8);
    local_318 = &DAT_149dfb77a;
    if ((int)uStack_2b0 != 0) {
      local_318 = local_2b8;
    }
    local_2e8 = local_2d8;
    local_2f0 = local_2dc;
    local_310 = LVar18;
    local_308 = LVar14;
    local_300 = puVar8;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xda5,
                  L"%sCannot replace existing object of a different class.\n\tNew Object: %s %s.%s\n\tExisting Object: %s %s(0x%08x 0x%08x)"
                  ,local_2d0);
    uVar13 = local_2c8;
    if (local_2b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((undefined2 *)local_2a8.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar15 = (ulonglong)local_2d4;
  }
  uVar17 = (ulonglong)uVar13;
  if ((undefined2 *)local_280.QuadPart != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_298 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140011257:
  uVar13 = (uint)uVar15;
  local_2d8 = *(int *)(param_1 + 0x58);
  uVar9 = (**(code **)(*_Dst + 0x1a0))(_Dst);
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xdc0) = uVar9;
  iVar16 = *(int *)((longlong)_Dst + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar5 = iVar16 + 0xffff;
  if (-1 < iVar16) {
    iVar5 = iVar16;
  }
  if ((iVar5 >> 0x10 < DAT_14c964390) &&
     (lVar12 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar5 >> 0x10) * 0x10), lVar12 != 0)) {
    local_2d0 = *(wchar_t **)(lVar12 + (longlong)(iVar16 % 0x10000) * 0x10);
  }
  else {
    local_2d0 = (wchar_t *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  local_2dc = FUN_14283ebea();
  uVar19 = *(uint *)((longlong)_Dst + 0xc);
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  uVar10 = *(uint *)(lVar12 + 8) & 0x42100000;
  if ((uVar17 & 0x10) == 0) {
    if (param_6 != '\0') {
      cVar4 = FUN_14008df84(_Dst);
      if (cVar4 != '\0') {
        uVar19 = uVar13 | 0x40;
        if ((*(byte *)(param_1 + 0xd4) & 8) == 0) {
          uVar19 = uVar13;
        }
        if ((uVar17 & 0x20) == 0) {
          uVar15 = (ulonglong)uVar19;
        }
        goto LAB_1400113d8;
      }
      uVar19 = *(uint *)((longlong)_Dst + 0xc);
    }
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    local_2d4 = *(uint *)(lVar12 + 0x10);
    local_2c4 = param_5 | uVar10;
    if ((*(uint *)(_Dst + 1) >> 0x10 & 1) == 0) {
      local_298 = (undefined2 *)0x0;
      uStack_290 = 0;
      FUN_14005eb28(&local_298,0x80);
      local_280.QuadPart = (LONGLONG)local_260;
      local_268 = '\0';
      local_270 = local_60;
      local_2a8 = *(LARGE_INTEGER *)(_Dst[2] + 0x18);
      local_278.QuadPart = local_280.QuadPart;
      FUN_14005eb5c(&local_2a8,&local_280);
      if (local_270 <= (ulonglong *)(local_278.QuadPart + 2)) {
        FUN_140213274(&local_280,1);
      }
      *(undefined2 *)local_278 = 0x20;
      local_278 = (LARGE_INTEGER)(local_278.QuadPart + 2);
      FUN_144750bde(_Dst,0,&local_280);
      FUN_1400020e8(&local_298,local_280.QuadPart,
                    (ulonglong)((longlong)local_278 - (longlong)local_280) >> 1);
      if (local_268 == '\x01') {
        FUN_1400020a8(local_280.QuadPart);
      }
      if (-1 < (short)(int)_Dst[1]) {
        FUN_144757f48(_Dst,0x8000);
        (**(code **)(*_Dst + 0xb8))(_Dst);
      }
      cVar4 = (**(code **)(*_Dst + 0xc0))(_Dst);
      if (cVar4 == '\0') {
        bVar21 = false;
        do {
          if (!bVar21) {
            QueryPerformanceCounter(&local_280);
            bVar21 = true;
          }
          FUN_14000f986(0);
          cVar4 = (**(code **)(*_Dst + 0xc0))(_Dst);
        } while (cVar4 == '\0');
        if (bVar21) {
          QueryPerformanceCounter(&local_280);
        }
      }
      FUN_144757d26(_Dst);
      if (local_298 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar2 = DAT_14c96486c;
    DAT_14c96486c = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
    FUN_142829f36(&DAT_14c9647b8);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9647e8);
    (**(code **)*_Dst)(_Dst);
    bVar21 = true;
    param_2 = local_2c0;
    param_5 = local_2c4;
    DAT_14c96486c = uVar2;
    goto LAB_140010ec6;
  }
  FUN_144757f48(_Dst,uVar15);
  uVar13 = *(uint *)((longlong)_Dst + 0xc);
  if ((int)uVar13 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  uVar13 = param_5 & 0xcffffff8 | uVar10;
  if ((param_5 & 0x4e500000) == 0 && uVar10 == 0) {
    do {
      uVar19 = *(uint *)(lVar12 + 8);
      if ((uVar13 & ~uVar19) == 0) break;
      LOCK();
      bVar21 = uVar19 == *(uint *)(lVar12 + 8);
      if (bVar21) {
        *(uint *)(lVar12 + 8) = uVar19 | uVar13;
      }
      UNLOCK();
    } while (!bVar21);
  }
  else {
    FUN_1447f71cc();
  }
  FUN_14472eae2(_Dst,0x3000);
LAB_1400113d8:
  FUN_144757f48(_Dst,uVar15);
  uVar13 = *(uint *)((longlong)_Dst + 0xc);
  if ((int)uVar13 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  uVar13 = param_5 & 0xcffffff8 | uVar10;
  if ((param_5 & 0x4e500000) == 0 && uVar10 == 0) {
    do {
      uVar19 = *(uint *)(lVar12 + 8);
      uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
      if ((uVar13 & ~uVar19) == 0) break;
      LOCK();
      bVar21 = uVar19 == *(uint *)(lVar12 + 8);
      if (bVar21) {
        *(uint *)(lVar12 + 8) = uVar19 | uVar13;
      }
      UNLOCK();
    } while (!bVar21);
  }
  else {
    FUN_1447f71cc();
    uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
  }
  bVar21 = false;
LAB_140011444:
  if ((param_8 != 0) && (_Dst[4] != 0)) {
    FUN_14283fbfd(_Dst,param_8);
  }
  pwVar20 = local_2d0;
  if ((bVar21) && (FUN_1400f84b8(_Dst,local_2d0,local_2dc,0), pwVar20 != (wchar_t *)0x0)) {
    *(longlong **)(*(longlong *)((longlong)local_2d0 + 0x18) + 0x40 + (longlong)local_2dc * 0x68) =
         _Dst;
  }
  cVar4 = (*(code *)PTR_FUN_14c758760)();
  if (cVar4 == '\0') {
    uVar13 = *(uint *)((longlong)_Dst + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    FUN_14482b126(lVar12);
    uVar13 = *(uint *)((longlong)_Dst + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1a & 1) != 0) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar16 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar16 != 2)) {
        if (iVar16 != 1) goto LAB_140011589;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 != DVar7) goto LAB_140011589;
        uVar13 = *(uint *)((longlong)_Dst + 0xc);
      }
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      FUN_14482b126(lVar12,0x4000000);
    }
  }
  else {
    DVar6 = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      DVar6 = TlsAlloc();
      DVar7 = 0xffffffff;
      LOCK();
      bVar21 = DAT_14c75ec34 != 0xffffffff;
      DVar3 = DVar6;
      if (bVar21) {
        DVar7 = DAT_14c75ec34;
        DVar3 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar3;
      UNLOCK();
      if (bVar21) {
        TlsFree(DVar6);
        DVar6 = DVar7;
      }
    }
    lpTlsValue = TlsGetValue(DVar6);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(DVar6,lpTlsValue);
    }
    plVar1 = *(longlong **)((longlong)lpTlsValue + 0x48);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0xa0))(plVar1,_Dst,uVar17);
    }
  }
LAB_140011589:
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = (char)uVar17;
  }
  if ((local_60[0] ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140011966 FUN_140011966 body=296 status=ok
// SIG undefined FUN_140011966(void)

ulonglong FUN_140011966(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = (int)param_2[1];
  if ((longlong)iVar4 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_2 + lVar2) == param_1) goto LAB_140011a52;
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar4 * 8 - lVar2 != 0);
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 == 0) {
LAB_140011a52:
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (((param_3 & 1) == 0) || ((*(uint *)(lVar2 + 0xb0) & 0x40) == 0)) {
      if (((*(uint *)(lVar2 + 0xb0) >> 0xb & 1) != 0) &&
         (plVar5 = *(longlong **)(lVar2 + 0xb8), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 8))(plVar5,&local_40);
        if ((local_38 & param_3) != 0) goto LAB_140011a6b;
        iVar4 = (int)param_2[1];
      }
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14000f150(param_2,iVar4);
      }
      *(longlong *)(*param_2 + (longlong)iVar4 * 8) = param_1;
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x70);
      if (plVar5 == (longlong *)0x0) {
        uVar3 = 0;
      }
      else {
        do {
          uVar1 = (**(code **)(*plVar5 + 0x180))(plVar5,param_2,param_3);
          uVar3 = (ulonglong)uVar1;
          if ((char)uVar1 != '\0') break;
          plVar5 = (longlong *)plVar5[9];
        } while (plVar5 != (longlong *)0x0);
      }
      local_40 = param_1;
      FUN_1446f0726(param_2,&local_40,0);
    }
  }
LAB_140011a6b:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140011aa6 FUN_140011aa6 body=113 status=ok
// SIG undefined FUN_140011aa6(void)

undefined * FUN_140011aa6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c846230) {
    FUN_144b3d300(&DAT_14c846230);
    if (DAT_14c846230 == -1) {
      FUN_140019e44(&DAT_14c8461d8,0x20000000);
      atexit(FUN_14276fdf9);
      _Init_thread_footer(&DAT_14c846230);
    }
  }
  return &DAT_14c8461d8;
}



// FUNCTION 140011b1c FUN_140011b1c body=51 status=ok
// SIG undefined FUN_140011b1c(void)

void FUN_140011b1c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 140011b50 FUN_140011b50 body=189 status=ok
// SIG undefined FUN_140011b50(void)

void FUN_140011b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14171c27a();
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = param_1;
  puVar2[1] = 0;
  local_40 = &local_58;
  local_48 = &local_60;
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_2;
  FUN_1415372c0(uVar1,local_34,&local_48,0);
  plVar3 = &DAT_14c963f68;
  if (DAT_14c963f60 != (undefined8 *)0x0) {
    plVar3 = (longlong *)((longlong)DAT_14c963f60 + 8);
  }
  *plVar3 = (longlong)puVar2;
  DAT_14c963f60 = puVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140011c0e FUN_140011c0e body=221 status=ok
// SIG undefined FUN_140011c0e(void)

longlong FUN_140011c0e(LPCRITICAL_SECTION param_1,ulonglong param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ULONG_PTR UVar4;
  ulonglong uVar5;
  HANDLE pvVar6;
  
  uVar3 = 8;
  if (8 < param_3) {
    uVar3 = (ulonglong)param_3;
  }
  EnterCriticalSection(param_1);
  UVar4 = -uVar3 & (param_1[1].SpinCount + uVar3) - 1;
  if ((longlong)param_1[1].OwningThread - UVar4 < param_2) {
    lVar2 = 0;
  }
  else {
    param_1[1].SpinCount = UVar4;
    pvVar6 = (HANDLE)(UVar4 + param_2);
    if (param_1[1].LockSemaphore < pvVar6) {
      uVar1 = FUN_140022f34();
      uVar5 = 0x10000;
      if (0x10000 < uVar1) {
        uVar5 = uVar1;
      }
      uVar5 = -uVar5 & (longlong)pvVar6 + ~(ulonglong)param_1[1].LockSemaphore + uVar5;
      FUN_140022ef6(param_1 + 1,param_1[1].LockSemaphore,uVar5);
      param_1[1].LockSemaphore = (HANDLE)((longlong)param_1[1].LockSemaphore + uVar5);
      UVar4 = param_1[1].SpinCount;
      pvVar6 = (HANDLE)(UVar4 + param_2);
    }
    lVar2 = (longlong)&(param_1[1].DebugInfo)->Type + UVar4;
    param_1[1].SpinCount = (ULONG_PTR)pvVar6;
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  LOCK();
  param_1[2].DebugInfo =
       (PRTL_CRITICAL_SECTION_DEBUG)((longlong)&(param_1[2].DebugInfo)->Type + param_2);
  UNLOCK();
  lVar2 = FUN_14001cc68(param_2,uVar3);
  return lVar2;
}



// FUNCTION 140011cec FUN_140011cec body=51 status=ok
// SIG undefined FUN_140011cec(void)

void FUN_140011cec(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
  FUN_1446f2cc4(param_1,param_2);
  return;
}



// FUNCTION 140011d20 FUN_140011d20 body=17 status=ok
// SIG undefined FUN_140011d20(void)

void FUN_140011d20(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140011d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    return;
  }
  return;
}



// FUNCTION 140011d52 FUN_140011d52 body=360 status=ok
// SIG undefined FUN_140011d52(void)

ulonglong FUN_140011d52(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c927740 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  if (((param_1[2] & 1U) != 0) && (uVar5 = param_1[2] & 0xfffffffffffffffe, uVar5 != 0)) {
    lVar1 = *(longlong *)(uVar5 + 0x10);
    if ((*(int *)(DAT_14c927740 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
         == DAT_14c927740 + 0x30 && ((*(byte *)(lVar1 + 0xd8) & 8) != 0)))) {
      iVar3 = (**(code **)(*param_1 + 0x178))(param_1);
      uVar4 = -iVar3 & (*(int *)(uVar5 + 0x58) + iVar3) - 1U;
      goto LAB_140011dcb;
    }
  }
  (**(code **)(*param_1 + 0x178))(param_1);
  uVar4 = 0;
LAB_140011dcb:
  *(uint *)((longlong)param_1 + 0x44) = uVar4;
  uVar4 = *(int *)((longlong)param_1 + 0x34) * (int)param_1[6] + uVar4;
  if (0x7ffffffe < uVar4) {
    FUN_1468c8203(uVar4,param_1);
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (ulonglong)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140011f0c FUN_140011f0c body=92 status=ok
// SIG undefined FUN_140011f0c(void)

void FUN_140011f0c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  do {
    if (lVar1 == 0) {
      return;
    }
    if (DAT_14c872ba8 == '\x01') {
      lVar2 = FUN_140010bca();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) goto LAB_140011f27;
    }
    else {
LAB_140011f27:
      (**(code **)(*param_2 + 0x198))(param_2,lVar1);
    }
    lVar1 = *(longlong *)(lVar1 + 0x28);
  } while( true );
}



// FUNCTION 140011f68 FUN_140011f68 body=256 status=ok
// SIG undefined FUN_140011f68(void)

ulonglong FUN_140011f68(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = (int)param_2[1];
  if ((longlong)iVar3 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_2 + lVar2) == param_1) goto LAB_14001202b;
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar3 * 8 - lVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
LAB_14001202b:
    uVar4 = 0;
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5,&local_30);
      uVar4 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
      if ((local_21 & 1) != 0) goto LAB_140012044;
      iVar3 = (int)param_2[1];
    }
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14000f150(param_2,iVar3);
    }
    *(longlong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    for (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x70); plVar5 != (longlong *)0x0;
        plVar5 = (longlong *)plVar5[9]) {
      if ((*(ushort *)((longlong)plVar5 + 0x3b) & 0x1040) == 0) {
        cVar1 = (**(code **)(*plVar5 + 0x150))(plVar5,param_2);
        if (cVar1 != '\0') {
          uVar4 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
          goto LAB_140012031;
        }
      }
    }
    uVar4 = 0;
LAB_140012031:
    local_30 = param_1;
    FUN_1446f0726(param_2,&local_30,0);
  }
LAB_140012044:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001206a FUN_14001206a body=228 status=ok
// SIG undefined FUN_14001206a(void)

longlong FUN_14001206a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  code *local_38;
  undefined2 **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined2 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9512e0 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_1427db2a2;
    local_20 = &LAB_146272d4c;
    local_28 = &LAB_1462730a2;
    local_38 = FUN_1468be115;
    local_40 = &LAB_145ccd276;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2a0;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LinkerPlaceholderFunction",&DAT_14c9512e0,&DAT_1468be15c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9512e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140012150 FUN_140012150 body=508 status=ok
// SIG undefined FUN_140012150(void)

void FUN_140012150(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  ulonglong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar5 = FUN_145708010();
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x70) = lVar5;
  }
  else {
    (**(code **)(*param_2 + 0x198))(param_2,*(longlong *)(param_1 + 0x70));
  }
  if (DAT_14c872ba8 == '\0') {
    lVar5 = FUN_1403a6ca6(param_1);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(lVar5 + 0x2d0) & 0x100000;
    }
    plVar3 = *(longlong **)(param_1 + 0x70);
    if (plVar3 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)plVar3 + 0xc);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      iVar4 = iVar1 + 0xffff;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
      if ((iVar4 >> 0x10 < DAT_14c964390) &&
         (lVar5 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar4 >> 0x10) * 0x10), lVar5 != 0))
      {
        lVar5 = *(longlong *)(lVar5 + (longlong)(iVar1 % 0x10000) * 0x10);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
        if (lVar5 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x2d0);
          *(uint *)(lVar5 + 0x2d0) = uVar6 | uVar2;
          (**(code **)(*plVar3 + 0x368))(plVar3);
          *(uint *)(lVar5 + 0x2d0) = uVar2;
        }
      }
      else {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x368))();
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x34) =
       -*(int *)(lVar5 + 0x5c) & (*(int *)(lVar5 + 0x58) + *(int *)(lVar5 + 0x5c)) - 1U;
  plVar3 = *(longlong **)(lVar5 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
    local_40[0] = *(ulonglong *)(param_1 + 0x38) | 0x8000000000000;
    *(ulonglong *)(param_1 + 0x38) = local_40[0];
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3,local_40);
    local_40[0] = local_40[0] | *(ulonglong *)(param_1 + 0x38);
    *(ulonglong *)(param_1 + 0x38) = local_40[0];
    lVar5 = *(longlong *)(param_1 + 0x70);
  }
  uVar6 = *(uint *)(lVar5 + 0xb0);
  if ((short)uVar6 < 0) {
    local_40[0] = local_40[0] | 0x200;
    *(ulonglong *)(param_1 + 0x38) = local_40[0];
    uVar6 = *(uint *)(lVar5 + 0xb0);
  }
  if ((uVar6 >> 0xd & 1) != 0) {
    local_40[0] = local_40[0] | 0x40000000;
    *(ulonglong *)(param_1 + 0x38) = local_40[0];
    uVar6 = *(uint *)(lVar5 + 0xb0);
  }
  if ((uVar6 >> 0xe & 1) != 0) {
    *(ulonglong *)(param_1 + 0x38) = local_40[0] | 0x1000000000;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140012361 FUN_140012361 body=14677 status=ok
// SIG undefined FUN_140012361(void)

void FUN_140012361(ulonglong *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  char *_Str;
  bool bVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  code *local_190;
  undefined8 *local_180;
  undefined8 local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar1 = *param_2;
  *param_2 = lVar1 + -8;
  lVar1 = *(longlong *)(lVar1 + -8);
  switch(*(byte *)(lVar1 + 0x18) & 0x3f) {
  case 1:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      uVar6 = FUN_14093f012();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea59a0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400190da(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_14093f012();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea59a0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14690646a(puVar3,local_158,lVar1);
    }
    break;
  case 2:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      uVar6 = FUN_14093f0c0();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea5c10;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140018ee2(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_14093f0c0();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea5c10;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906556(puVar3,local_158,lVar1);
    }
    break;
  case 3:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1405ebbb2;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008081;
        FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
        atexit(FUN_142816fad);
        _Init_thread_footer(&DAT_14c952210);
      }
      puVar3[1] = &DAT_14c9521c0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71030;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400167d4(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1405ebbb2;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008081;
        FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
        atexit(FUN_142816fad);
        _Init_thread_footer(&DAT_14c952210);
      }
      puVar3[1] = &DAT_14c9521c0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71030;
      if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffffffffffe, uVar8 != 0)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar8);
        }
      }
      FUN_1400167d4(puVar3,local_158,lVar1);
      ppuVar5 = &PTR_LAB_149eb1880;
LAB_140013c51:
      *puVar3 = ppuVar5;
      puVar3[0xe] = *(undefined8 *)(lVar1 + 0x20);
      puVar3[0xf] = *(undefined8 *)(lVar1 + 0x28);
    }
    break;
  case 4:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1459738d6;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1408001;
        FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
        atexit(FUN_142816fda);
        _Init_thread_footer(&DAT_14c952268);
      }
      puVar3[1] = &DAT_14c952218;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e6f430;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140018440(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144a83f76();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e6f430;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906686(puVar3,local_158,lVar1);
    }
    break;
  case 5:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      uVar6 = FUN_140e98e1a();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea5e80;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14001876a(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_140e98e1a();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea5e80;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906772(puVar3,local_158,lVar1);
    }
    break;
  case 6:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1468e122c;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008801;
        FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
        atexit(FUN_142817034);
        _Init_thread_footer(&DAT_14c952318);
      }
      puVar3[1] = &DAT_14c9522c8;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e6f6a0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140017b3e(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144a8cc30();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e6f6a0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14690685e(puVar3,local_158,lVar1);
    }
    break;
  case 7:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1468e12e4;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008201;
        FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
        atexit(FUN_142817061);
        _Init_thread_footer(&DAT_14c952370);
      }
      puVar3[1] = &DAT_14c952320;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e6f910;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140018cea(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144aa1f9a();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e6f910;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14690694a(puVar3,local_158,lVar1);
    }
    break;
  default:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1409f1a5c;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008041;
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      puVar3[1] = &DAT_14c951d28;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e6f1c0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140016eb8(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1409f1a5c;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008041;
        FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
        atexit(FUN_14281201f);
        _Init_thread_footer(&DAT_14c951d78);
      }
      puVar3[1] = &DAT_14c951d28;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e6f1c0;
      if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffffffffffe, uVar8 != 0)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar8);
        }
      }
      FUN_140016eb8(puVar3,local_158,lVar1);
      ppuVar5 = &PTR_LAB_149eb1130;
LAB_14001384e:
      *puVar3 = ppuVar5;
      puVar3[0xf] = *(undefined8 *)(lVar1 + 0x20);
      puVar3[0x10] = *(undefined8 *)(lVar1 + 0x28);
    }
    break;
  case 10:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) != 0 || *(longlong *)(lVar1 + 0x20) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_1408a629c;
        local_198 = &DAT_14c9520b8;
        local_1a0 = 0;
        local_1a8 = 0x1008101;
        FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
        atexit(FUN_14281708e);
        _Init_thread_footer(&DAT_14c9523c8);
      }
      puVar3[1] = &DAT_14c952378;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71d60;
      if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffffffffffe, uVar8 != 0)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar8);
        }
      }
      FUN_140015e2e(puVar3,local_158,lVar1);
      ppuVar5 = &PTR_LAB_149eb24b0;
      goto LAB_140013c51;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      local_190 = FUN_1408a629c;
      local_198 = &DAT_14c9520b8;
      local_1a0 = 0;
      local_1a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    puVar3[1] = &DAT_14c952378;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[0xd] = 0;
    *puVar3 = &PTR_LAB_149e71d60;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
    }
    FUN_140015e2e(puVar3,local_158,lVar1);
    break;
  case 0xb:
  case 0x20:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
      {
        FUN_14475b26a();
        local_190 = FUN_14079c5e4;
        local_198 = &DAT_14c9520b8;
        local_1a8 = 0x101008001;
        local_1a0 = 0;
        FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
        atexit(FUN_1428170bb);
        _Init_thread_footer(&DAT_14c952420);
      }
      puVar3[1] = &DAT_14c9523d0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e712b0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140017230(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144a49fc8();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e712b0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906a7a(puVar3,local_158,lVar1);
    }
    break;
  case 0xc:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) != 0 || *(longlong *)(lVar1 + 0x20) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_14067a048;
        local_1a0 = 0;
        local_1a8 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      puVar3[1] = &DAT_14c951cd0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70e50;
      if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffffffffffe, uVar8 != 0)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar8);
        }
      }
      FUN_1446f2e62(puVar3,local_158,lVar1);
      ppuVar5 = &PTR_LAB_149eb2990;
      goto LAB_14001384e;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      local_198 = (undefined *)FUN_1446ddbd2();
      local_190 = FUN_14067a048;
      local_1a0 = 0;
      local_1a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    puVar3[1] = &DAT_14c951cd0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[0xd] = 0;
    *puVar3 = &PTR_LAB_149e70e50;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
    }
    FUN_1446f2e62(puVar3,local_158,lVar1);
    break;
  case 0xd:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_140f4d408();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e70020;
      puVar3[0xf] = 0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140019248(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_1415514f8(0x90);
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906f16(puVar3,local_158,lVar1);
    }
    break;
  case 0xe:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_14010a2ea();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149eaa2d0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400182dc(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_14010a2ea();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149eaa2d0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906bfe(puVar3,local_158,lVar1);
    }
    break;
  case 0xf:
    local_160 = *param_1;
    if ((((local_160 & 1) != 0) && ((local_160 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    puVar3 = (undefined8 *)FUN_1456ac6ca(&local_160,lVar1);
    break;
  case 0x10:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9529b0) && (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1))
      {
        FUN_1446f4b16();
        local_190 = FUN_140f17fc6;
        local_198 = &DAT_14c951c78;
        local_1a0 = 0;
        local_1a8 = 0x24008001;
        FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
        atexit(FUN_142818859);
        _Init_thread_footer(&DAT_14c9529b0);
      }
      puVar3[1] = &DAT_14c952960;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e71910;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14001742c(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_1446ef9c4();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e71910;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146906dea(puVar3,local_158,lVar1);
    }
    break;
  case 0x11:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_140019cf2();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e6fdd0;
      puVar3[0xf] = 0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400180c2(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_140019cb0(0x90);
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1456acacc(puVar3,local_158,lVar1);
    }
    goto LAB_140012635;
  case 0x12:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1))
      {
        FUN_1446f4b16();
        local_190 = FUN_1403a5f94;
        local_198 = &DAT_14c951c78;
        local_1a0 = 0;
        local_1a8 = 0x4018001;
        FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
        atexit(FUN_1428170e8);
        _Init_thread_footer(&DAT_14c952478);
      }
      puVar3[1] = &DAT_14c952428;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e6fb80;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140015cb8(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_144a810c6();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e6fb80;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1456ac63e(puVar3,local_158,lVar1);
    }
LAB_140012635:
    bVar2 = true;
    iVar7 = 0;
    if ((*(byte *)(lVar1 + 0x18) & 0x40) != 0) {
      puVar3[7] = puVar3[7] | 0x104000000000000;
      iVar7 = 0;
    }
    goto LAB_140012475;
  case 0x13:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_140be4ae0();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6340;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140018ba2(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_140be4ae0();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6340;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907016(puVar3,local_158,lVar1);
    }
    break;
  case 0x14:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_1409e12a0;
        local_1a0 = 0;
        local_1a8 = 0xa001;
        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
        atexit(FUN_142816ef9);
        _Init_thread_footer(&DAT_14c9520b0);
      }
      puVar3[1] = &DAT_14c952060;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71530;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140016c46(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144a63fc8();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71530;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1456aca42(puVar3,local_158,lVar1);
    }
    break;
  case 0x15:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_140dafe7a;
        local_1a0 = 0;
        local_1a8 = 0xc001;
        FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
        atexit(FUN_142829758);
        _Init_thread_footer(&DAT_14c963e88);
      }
      puVar3[1] = &DAT_14c963e38;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71720;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140016d3a(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144a49f24();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71720;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907150(puVar3,local_158,lVar1);
    }
    break;
  case 0x16:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        FUN_1446ddbd2();
        local_190 = FUN_140b31576;
        local_198 = &DAT_14c951a38;
        local_1a0 = 0;
        local_1a8 = 0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      puVar3[1] = &DAT_14c951a90;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70270;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140016b32(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x90,0);
      uVar6 = FUN_1446e6bbc();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70270;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14690723c(puVar3,local_158,lVar1);
    }
    goto LAB_1400128ae;
  case 0x17:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0xa0,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951f40) && (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_140eb3340;
        local_1a8 = 0x400000008001;
        local_1a0 = 0;
        FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
        atexit(FUN_142815b60);
        _Init_thread_footer(&DAT_14c951f40);
      }
      puVar3[1] = &DAT_14c951ef0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea6520;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140017750(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0xb0,0);
      uVar6 = FUN_1446ebfd4();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149ea6520;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907366(puVar3,local_158,lVar1);
    }
    iVar7 = 2;
    goto LAB_1400128b3;
  case 0x18:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x90,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_1468e4cee;
        local_1a8 = 0x800000008001;
        local_1a0 = 0;
        FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
        atexit(FUN_142817fb7);
        _Init_thread_footer(&DAT_14c952900);
      }
      puVar3[1] = &DAT_14c9528b0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70450;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140018a12(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0xa0,0);
      uVar6 = FUN_144a7e162();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70450;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14690746e(puVar3,local_158,lVar1);
    }
    goto LAB_1400128ae;
  case 0x19:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) != 0 || *(longlong *)(lVar1 + 0x20) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_1403a682c;
        local_1a0 = 0;
        local_1a8 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      puVar3[1] = &DAT_14c952a08;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e71fe0;
      if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffffffffffe, uVar8 != 0)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar8);
        }
      }
      FUN_140015d32(puVar3,local_158,lVar1);
      ppuVar5 = &PTR_LAB_149eb4490;
      goto LAB_14001384e;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      local_198 = (undefined *)FUN_1446ddbd2();
      local_190 = FUN_1403a682c;
      local_1a0 = 0;
      local_1a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    puVar3[1] = &DAT_14c952a08;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *puVar3 = &PTR_LAB_149e71fe0;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
    }
    FUN_140015d32(puVar3,local_158,lVar1);
    break;
  case 0x1a:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_140e6158c();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6700;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400188d8(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_140e6158c();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6700;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1469075e4(puVar3,local_158,lVar1);
    }
    break;
  case 0x1b:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_140017f82();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea68e0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400174a6(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_140017f82();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea68e0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1469076da(puVar3,local_158,lVar1);
    }
    break;
  case 0x1c:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_14001988a();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6af0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400196de(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_14001988a();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6af0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1469077d0(puVar3,local_158,lVar1);
    }
    break;
  case 0x1d:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x70,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_140fb5c52;
        local_1a0 = 0;
        local_1a8 = 0x40008001;
        FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
        atexit(FUN_14282980e);
        _Init_thread_footer(&DAT_14c963ee0);
      }
      puVar3[1] = &DAT_14c963e90;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71b60;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140017520(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      uVar6 = FUN_144a4a07e();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e71b60;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1456ac5b4(puVar3,local_158,lVar1);
    }
    break;
  case 0x1e:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_140a4831c;
        local_1a8 = 0x1000000008001;
        local_1a0 = 0;
        FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
        atexit(FUN_1427e14fe);
        _Init_thread_footer(&DAT_14c9496d8);
      }
      puVar3[1] = &DAT_14c949688;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70830;
      puVar3[0xf] = 0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14001716e(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x90,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_140a4831c;
        local_1a8 = 0x1000000008001;
        local_1a0 = 0;
        FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
        atexit(FUN_1427e14fe);
        _Init_thread_footer(&DAT_14c9496d8);
      }
      puVar3[1] = &DAT_14c949688;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e70830;
      puVar3[0xf] = 0;
      if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffffffffffe, uVar8 != 0)) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar8);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar8);
        }
      }
      FUN_14001716e(puVar3,local_158,lVar1);
      *puVar3 = &PTR_LAB_149eb4e60;
      puVar3[0x10] = *(undefined8 *)(lVar1 + 0x20);
      puVar3[0x11] = *(undefined8 *)(lVar1 + 0x28);
    }
    goto LAB_1400128ae;
  case 0x1f:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_140be4b84();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e89600;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1400199c4(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_140be4b84();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e89600;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14690795c(puVar3,local_158,lVar1);
    }
    break;
  case 0x21:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      uVar6 = FUN_140019ace();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6d10;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140019940(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_140019ace();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149ea6d10;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907a52(puVar3,local_158,lVar1);
    }
LAB_1400128ae:
    iVar7 = 1;
LAB_1400128b3:
    bVar2 = false;
    goto LAB_140012475;
  case 0x23:
    local_168 = *param_1;
    if ((((local_168 & 1) != 0) && ((local_168 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    puVar3 = (undefined8 *)FUN_146901390(&local_168,lVar1);
    break;
  case 0x24:
    local_170 = *param_1;
    if ((((local_170 & 1) != 0) && ((local_170 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1))
    {
      FUN_1456cec3c();
    }
    puVar3 = (undefined8 *)FUN_1469014b4(&local_170,lVar1);
    break;
  case 0x3d:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x78,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c947f70) && (FUN_144b3d300(&DAT_14c947f70), DAT_14c947f70 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_141710108;
        local_1a0 = 0x1000000000000000;
        local_1a8 = 0x8001;
        FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
        atexit(FUN_1427b4857);
        _Init_thread_footer(&DAT_14c947f70);
      }
      puVar3[1] = &DAT_14c947f20;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e62a10;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140017cac(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x88,0);
      uVar6 = FUN_1446e6c6a();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e62a10;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907f26(puVar3,local_158,lVar1);
    }
    break;
  case 0x3e:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c947fc8) && (FUN_144b3d300(&DAT_14c947fc8), DAT_14c947fc8 == -1))
      {
        local_198 = (undefined *)FUN_1446dcc8c();
        local_190 = FUN_14686c8ac;
        local_1a0 = 0x2000000000000000;
        local_1a8 = 0x108001;
        FUN_14000176a(&DAT_14c947f78,L"FGbxInlineStructProperty",0);
        atexit(FUN_1427b495e);
        _Init_thread_footer(&DAT_14c947fc8);
      }
      puVar3[1] = &DAT_14c947f78;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      puVar3[0xe] = 0;
      *puVar3 = &PTR_LAB_149e62830;
      puVar3[0xf] = 0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_140018356(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_1417109e8(0x90);
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907e26(puVar3,local_158,lVar1);
    }
    break;
  case 0x3f:
    uVar8 = *param_1;
    if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
      FUN_1456cec3c();
    }
    local_158[0] = uVar8;
    if (*(longlong *)(lVar1 + 0x28) == 0 && *(longlong *)(lVar1 + 0x20) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x80,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c947e70) && (FUN_144b3d300(&DAT_14c947e70), DAT_14c947e70 == -1))
      {
        local_198 = (undefined *)FUN_1446ddbd2();
        local_190 = FUN_14170fd90;
        local_1a0 = 0x8000000000000000;
        local_1a8 = 0x8001;
        FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
        atexit(FUN_1427b4416);
        _Init_thread_footer(&DAT_14c947e70);
      }
      puVar3[1] = &DAT_14c947e20;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e62650;
      puVar3[0xf] = 0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_14001785e(puVar3,local_158,lVar1);
    }
    else {
      puVar3 = (undefined8 *)FUN_14001cc68(0x90,0);
      uVar6 = FUN_1446ef920();
      puVar3[1] = uVar6;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
      puVar3[0xd] = 0;
      *puVar3 = &PTR_LAB_149e62650;
      puVar3[0xf] = 0;
      if ((((uVar8 & 1) != 0) && ((uVar8 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
        FUN_1456cec3c(uVar8 & 0xfffffffffffffffe);
      }
      FUN_146907d26(puVar3,local_158,lVar1);
    }
  }
  bVar2 = true;
  iVar7 = 0;
LAB_140012475:
  *(uint *)(puVar3 + 6) = (uint)*(ushort *)(lVar1 + 0x30);
  _Str = *(char **)(lVar1 + 8);
  if (_Str != (char *)0x0) {
    local_58 = 0;
    sVar4 = strlen(_Str);
    FUN_1446e6fe8(local_158,_Str,sVar4 & 0xffffffff,1);
    FUN_1446f470e(&local_178,local_50,1);
    puVar3[0xd] = local_178;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  *param_3 = *param_3 + -1;
  if (!bVar2) {
    do {
      local_180 = puVar3;
      FUN_140012361(&local_180,param_2,param_3);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140015cb8 FUN_140015cb8 body=120 status=ok
// SIG undefined FUN_140015cb8(void)

undefined8 * FUN_140015cb8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016532(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e6fb80;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140015d32 FUN_140015d32 body=251 status=ok
// SIG undefined FUN_140015d32(void)

undefined8 * FUN_140015d32(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined8 local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(param_3 + 0x38) != (code *)0x0) {
    lVar2 = (**(code **)(param_3 + 0x38))();
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0xb8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1,local_38);
      goto LAB_140015d8c;
    }
  }
  local_38[0] = 0;
LAB_140015d8c:
  local_40 = *param_2;
  if ((((local_40 & 1) != 0) && ((local_40 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_40,param_3,local_38[0]);
  *param_1 = &PTR_LAB_149e71fe0;
  param_1[0xe] = 0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(param_3 + 0x38))();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
  }
  param_1[0xe] = lVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140015e2e FUN_140015e2e body=124 status=ok
// SIG undefined FUN_140015e2e(void)

undefined8 * FUN_140015e2e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140015eac(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e71d60;
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140015eac FUN_140015eac body=120 status=ok
// SIG undefined FUN_140015eac(void)

undefined8 * FUN_140015eac(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140015f26(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9ed90;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140015f26 FUN_140015f26 body=120 status=ok
// SIG undefined FUN_140015f26(void)

undefined8 * FUN_140015f26(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140015fa0(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9f000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140015fa0 FUN_140015fa0 body=137 status=ok
// SIG undefined FUN_140015fa0(void)

undefined8 * FUN_140015fa0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9f270;
  *(undefined4 *)((longlong)param_1 + 0x34) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001602a FUN_14001602a body=128 status=ok
// SIG undefined FUN_14001602a(void)

undefined8 *
FUN_14001602a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e99390;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400160ac FUN_1400160ac body=364 status=ok
// SIG undefined FUN_1400160ac(void)

undefined8 *
FUN_1400160ac(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  char *_Str;
  size_t sVar2;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  _Str = (char *)*param_3;
  local_58 = 0;
  if (_Str == (char *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    FUN_1446e6fe8(local_158,_Str,sVar2 & 0xffffffff,1);
  }
  FUN_1446f470e(local_160,local_50,1);
  local_168 = *param_2;
  if ((((local_168 & 1) != 0) && ((local_168 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_1403a63ac(param_1,&local_168,local_160,uVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e90840;
  param_1[6] = 1;
  param_1[7] = param_4 | param_3[2];
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)((longlong)param_1 + 0x44) = (uint)*(ushort *)((longlong)param_3 + 0x32);
  FUN_14001621a(param_1);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001621a FUN_14001621a body=405 status=ok
// SIG undefined FUN_14001621a(void)

void FUN_14001621a(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (ulonglong *)(param_1 + 0x10);
  if (DAT_14c927740 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  uVar2 = *puVar1;
  if (((uVar2 & 1) == 0) || ((uVar2 & 0xfffffffffffffffe) == 0)) {
LAB_1400162f7:
    uVar5 = FUN_140342cba();
    cVar3 = FUN_1400164de(puVar1,uVar5);
    lVar7 = 0x38;
    if (cVar3 != '\0') {
      plVar6 = (longlong *)*puVar1;
      goto LAB_1400162c4;
    }
  }
  else {
    lVar7 = *(longlong *)((uVar2 & 0xfffffffffffffffe) + 0x10);
    if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c927740 + 0x38)) ||
       ((uVar2 < 2 ||
        (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c927740 + 0x38) * 8)
         != DAT_14c927740 + 0x30)))) goto LAB_1400162f7;
    lVar4 = FUN_1400163b0();
    lVar7 = 0x2a0;
    if (((*puVar1 & 1) != 0) &&
       (plVar8 = (longlong *)(*puVar1 & 0xfffffffffffffffe), plVar8 != (longlong *)0x0)) {
      if (*(int *)(lVar4 + 0x38) <= *(int *)(plVar8[2] + 0x38)) {
        plVar6 = (longlong *)0x0;
        if (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          plVar6 = plVar8;
        }
        goto LAB_1400162c4;
      }
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1400162c4:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001400162eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + lVar7))(plVar6,param_1,*(code **)(*plVar6 + lVar7));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1400163b0 FUN_1400163b0 body=300 status=ok
// SIG undefined FUN_1400163b0(void)

longlong FUN_1400163b0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c948f70 == 0) {
    local_30 = FUN_1449e2820;
    lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948f70 = lVar1;
    FUN_1446f470e(local_28,L"Field",1);
    local_48 = &LAB_146890c26;
    local_50 = FUN_146272f3a;
    local_60 = L"Engine";
    local_58 = 199;
    local_68 = 1;
    local_70 = 0x10000001;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_30;
    FUN_14574b4b2(lVar1);
    DAT_14c948f70 = lVar1;
    uVar2 = FUN_1446f8646();
    lVar1 = DAT_14c948f70;
    uVar3 = FUN_1446f8646();
    local_78 = L"Field";
    FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c948f70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400164de FUN_1400164de body=84 status=ok
// SIG undefined FUN_1400164de(void)

ulonglong FUN_1400164de(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  uVar2 = 0;
  if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
    lVar3 = *(longlong *)(uVar1 + 8);
    uVar1 = *(ulonglong *)(param_2 + 8);
    if (uVar1 == 0) {
      uVar2 = (ulonglong)(lVar3 != 0);
      if (lVar3 != param_2 && lVar3 != 0) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          uVar2 = (ulonglong)(lVar3 != 0);
          if (lVar3 == param_2) {
            return uVar2;
          }
        } while (lVar3 != 0);
      }
    }
    else {
      uVar2 = CONCAT71((int7)(uVar1 >> 8),(*(ulonglong *)(lVar3 + 0x18) & uVar1) != 0);
    }
  }
  return uVar2;
}



// FUNCTION 140016532 FUN_140016532 body=166 status=ok
// SIG undefined FUN_140016532(void)

undefined8 * FUN_140016532(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400165da(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9b570;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400165da FUN_1400165da body=137 status=ok
// SIG undefined FUN_1400165da(void)

undefined8 * FUN_1400165da(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016664(param_1,&local_20,param_3,0x8001000000200);
  *param_1 = &PTR_LAB_149e9b7c0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016664 FUN_140016664 body=182 status=ok
// SIG undefined FUN_140016664(void)

undefined8 *
FUN_140016664(undefined8 *param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e98410;
  param_1[0xe] = 0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001671c FUN_14001671c body=183 status=ok
// SIG undefined FUN_14001671c(void)

void FUN_14001671c(longlong param_1,uint param_2,char param_3,int param_4)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *(ulonglong *)(param_1 + 0x38) | 0x1040000200;
  if (param_3 == '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x38) & 0xffffffefbffffdff | 0x1000000000;
  }
  *(ulonglong *)(param_1 + 0x38) = uVar2;
  local_c = param_4 + (uint)(param_4 == 0);
  *(uint *)(param_1 + 0x34) = param_2;
  *(char *)(param_1 + 0x70) = (char)param_2;
  *(undefined1 *)(param_1 + 0x71) = 0;
  if (param_3 == '\0') {
    if (param_2 == 0) {
      cVar3 = *(char *)(param_1 + 0x72);
      bVar1 = 0;
    }
    else {
      bVar1 = 0;
      do {
        cVar3 = *(char *)((longlong)&local_c + (ulonglong)bVar1);
        if (cVar3 != '\0') {
          *(char *)(param_1 + 0x72) = cVar3;
          goto LAB_1400167b3;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < param_2);
      *(undefined1 *)(param_1 + 0x72) = 0;
      cVar3 = '\0';
    }
LAB_1400167b3:
    *(byte *)(param_1 + 0x71) = bVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0x72) = 1;
    cVar3 = -1;
  }
  *(char *)(param_1 + 0x73) = cVar3;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400167d4 FUN_1400167d4 body=120 status=ok
// SIG undefined FUN_1400167d4(void)

undefined8 * FUN_1400167d4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001684e(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e71030;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001684e FUN_14001684e body=120 status=ok
// SIG undefined FUN_14001684e(void)

undefined8 * FUN_14001684e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400168c8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9def0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400168c8 FUN_1400168c8 body=120 status=ok
// SIG undefined FUN_1400168c8(void)

undefined8 * FUN_1400168c8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016aa8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9e160;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016942 FUN_140016942 body=357 status=ok
// SIG undefined FUN_140016942(void)

undefined8 *
FUN_140016942(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 uVar1;
  char *_Str;
  size_t sVar2;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  _Str = (char *)*param_3;
  local_58 = 0;
  if (_Str == (char *)0x0) {
    local_50 = 0;
    local_48 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    FUN_1446e6fe8(local_158,_Str,sVar2 & 0xffffffff,1);
  }
  FUN_1446f470e(local_160,local_50,1);
  local_168 = *param_2;
  if ((((local_168 & 1) != 0) && ((local_168 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  FUN_1403a63ac(param_1,&local_168,local_160,uVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e90840;
  param_1[6] = 1;
  param_1[7] = param_4 | param_3[2];
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14001621a(param_1);
  if ((local_40 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016aa8 FUN_140016aa8 body=137 status=ok
// SIG undefined FUN_140016aa8(void)

undefined8 * FUN_140016aa8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9e3d0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016b32 FUN_140016b32 body=141 status=ok
// SIG undefined FUN_140016b32(void)

undefined8 * FUN_140016b32(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016bc0(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e70270;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_3 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016bc0 FUN_140016bc0 body=133 status=ok
// SIG undefined FUN_140016bc0(void)

undefined8 * FUN_140016bc0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x200);
  *param_1 = &PTR_LAB_149e91900;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016c46 FUN_140016c46 body=120 status=ok
// SIG undefined FUN_140016c46(void)

undefined8 * FUN_140016c46(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016cc0(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e71530;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016cc0 FUN_140016cc0 body=120 status=ok
// SIG undefined FUN_140016cc0(void)

undefined8 * FUN_140016cc0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016e2e(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9cc90;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016d3a FUN_140016d3a body=120 status=ok
// SIG undefined FUN_140016d3a(void)

undefined8 * FUN_140016d3a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016db4(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e71720;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016db4 FUN_140016db4 body=120 status=ok
// SIG undefined FUN_140016db4(void)

undefined8 * FUN_140016db4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400170e4(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ead8d0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016e2e FUN_140016e2e body=137 status=ok
// SIG undefined FUN_140016e2e(void)

undefined8 * FUN_140016e2e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9ce70;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016eb8 FUN_140016eb8 body=172 status=ok
// SIG undefined FUN_140016eb8(void)

undefined8 * FUN_140016eb8(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016f66(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e6f1c0;
  param_1[0xe] = 0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016f66 FUN_140016f66 body=120 status=ok
// SIG undefined FUN_140016f66(void)

undefined8 * FUN_140016f66(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016fe0(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9ae20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140016fe0 FUN_140016fe0 body=120 status=ok
// SIG undefined FUN_140016fe0(void)

undefined8 * FUN_140016fe0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001705a(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9b090;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001705a FUN_14001705a body=137 status=ok
// SIG undefined FUN_14001705a(void)

undefined8 * FUN_14001705a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9b300;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400170e4 FUN_1400170e4 body=137 status=ok
// SIG undefined FUN_1400170e4(void)

undefined8 * FUN_1400170e4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8000000000200);
  *param_1 = &PTR_LAB_149eadab0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001716e FUN_14001716e body=192 status=ok
// SIG undefined FUN_14001716e(void)

undefined8 * FUN_14001716e(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8000000000000);
  *param_1 = &PTR_LAB_149e70830;
  param_1[0xf] = 0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xf] = lVar1;
  param_1[0xe] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017230 FUN_140017230 body=124 status=ok
// SIG undefined FUN_140017230(void)

undefined8 * FUN_140017230(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400172ae(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e712b0;
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400172ae FUN_1400172ae body=120 status=ok
// SIG undefined FUN_1400172ae(void)

undefined8 * FUN_1400172ae(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017328(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9f4e0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017328 FUN_140017328 body=120 status=ok
// SIG undefined FUN_140017328(void)

undefined8 * FUN_140017328(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400173a2(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9f750;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400173a2 FUN_1400173a2 body=137 status=ok
// SIG undefined FUN_1400173a2(void)

undefined8 * FUN_1400173a2(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9f9c0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001742c FUN_14001742c body=120 status=ok
// SIG undefined FUN_14001742c(void)

undefined8 * FUN_14001742c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001761e(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e71910;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400174a6 FUN_1400174a6 body=120 status=ok
// SIG undefined FUN_1400174a6(void)

undefined8 * FUN_1400174a6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017a10(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea68e0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017520 FUN_140017520 body=120 status=ok
// SIG undefined FUN_140017520(void)

undefined8 * FUN_140017520(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001759a(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e71b60;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001759a FUN_14001759a body=130 status=ok
// SIG undefined FUN_14001759a(void)

undefined8 * FUN_14001759a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0);
  *param_1 = &PTR_LAB_149eadc90;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001761e FUN_14001761e body=166 status=ok
// SIG undefined FUN_14001761e(void)

undefined8 * FUN_14001761e(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400176c6(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9fe30;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400176c6 FUN_1400176c6 body=137 status=ok
// SIG undefined FUN_1400176c6(void)

undefined8 * FUN_1400176c6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016664(param_1,&local_20,param_3,0x8000000000000);
  *param_1 = &PTR_LAB_149ea0080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017750 FUN_140017750 body=136 status=ok
// SIG undefined FUN_140017750(void)

undefined8 * FUN_140017750(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400177da(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea6520;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_3 + 0x34);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400177da FUN_1400177da body=130 status=ok
// SIG undefined FUN_1400177da(void)

undefined8 * FUN_1400177da(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0);
  *param_1 = &PTR_LAB_149e9c270;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x50;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001785e FUN_14001785e body=173 status=ok
// SIG undefined FUN_14001785e(void)

undefined8 * FUN_14001785e(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001790c(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e62650;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 0x34);
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    param_1[0xf] = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    param_1[0xf] = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001790c FUN_14001790c body=120 status=ok
// SIG undefined FUN_14001790c(void)

undefined8 * FUN_14001790c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017986(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e61a20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017986 FUN_140017986 body=137 status=ok
// SIG undefined FUN_140017986(void)

undefined8 * FUN_140017986(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8001000000000);
  *param_1 = &PTR_LAB_149e61c00;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x18;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017a10 FUN_140017a10 body=166 status=ok
// SIG undefined FUN_140017a10(void)

undefined8 * FUN_140017a10(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017ab8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9c450;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017ab8 FUN_140017ab8 body=133 status=ok
// SIG undefined FUN_140017ab8(void)

undefined8 * FUN_140017ab8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017eca(param_1,&local_20,param_3,0x200);
  *param_1 = &PTR_LAB_149e9c660;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017b3e FUN_140017b3e body=120 status=ok
// SIG undefined FUN_140017b3e(void)

undefined8 * FUN_140017b3e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017bb8(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e6f6a0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017bb8 FUN_140017bb8 body=120 status=ok
// SIG undefined FUN_140017bb8(void)

undefined8 * FUN_140017bb8(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017c32(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea9250;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017c32 FUN_140017c32 body=120 status=ok
// SIG undefined FUN_140017c32(void)

undefined8 * FUN_140017c32(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018038(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea94c0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017cac FUN_140017cac body=403 status=ok
// SIG undefined FUN_140017cac(void)

undefined8 * FUN_140017cac(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140017e40(param_1,&local_30,param_3);
  *param_1 = &PTR_LAB_149e62a10;
  param_1[0xe] = 0;
  if (*(code **)(param_3 + 0x38) != (code *)0x0) {
    lVar3 = (**(code **)(param_3 + 0x38))();
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x809f600) == 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c949388) {
        FUN_144b3d300(&DAT_14c949388);
        if (DAT_14c949388 == -1) {
          FUN_1446f470e(&local_28,L"GbxHasStructType",1);
          DAT_14c949380 = FUN_141473ad5(local_28);
          _Init_thread_footer(&DAT_14c949388);
        }
      }
      if (((DAT_14c949380 != 0) && (*(int *)(DAT_14c949380 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14c949380 + 0x38) * 8)
           == DAT_14c949380 + 0x30 &&
          (plVar1 = *(longlong **)(lVar3 + 0xb8), plVar1 != (longlong *)0x0)))) {
        cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
        if (cVar2 != '\0') {
          lVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          if (lVar4 != 0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar3);
            }
            goto LAB_140017db9;
          }
        }
      }
    }
  }
  lVar3 = 0;
LAB_140017db9:
  param_1[0xe] = lVar3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017e40 FUN_140017e40 body=137 status=ok
// SIG undefined FUN_140017e40(void)

undefined8 * FUN_140017e40(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8001000000000);
  *param_1 = &PTR_LAB_149e61de0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x18;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017eca FUN_140017eca body=182 status=ok
// SIG undefined FUN_140017eca(void)

undefined8 *
FUN_140017eca(undefined8 *param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e98f10;
  param_1[0xe] = 0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140017f82 FUN_140017f82 body=181 status=ok
// SIG undefined FUN_140017f82(void)

undefined8 * FUN_140017f82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952000) {
    FUN_144b3d300(&DAT_14c952000);
    if (DAT_14c952000 == -1) {
      FUN_140019da0();
      FUN_14000176a(&DAT_14c951fb0,L"FMulticastInlineDelegateProperty",0x4000000000000,0,
                    0x4000002008001,0,&DAT_14c951f58,FUN_145865e68);
      atexit(FUN_142816e9f);
      _Init_thread_footer(&DAT_14c952000);
    }
  }
  return &DAT_14c951fb0;
}



// FUNCTION 140018038 FUN_140018038 body=137 status=ok
// SIG undefined FUN_140018038(void)

undefined8 * FUN_140018038(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149ea9730;
  *(undefined4 *)((longlong)param_1 + 0x34) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400180c2 FUN_1400180c2 body=228 status=ok
// SIG undefined FUN_1400180c2(void)

undefined8 * FUN_1400180c2(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140015cb8(param_1,&local_28,param_3);
  *param_1 = &PTR_LAB_149e6fdd0;
  param_1[0xf] = 0;
  if (param_1[0xe] == 0) {
    lVar1 = FUN_144a797b2();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    param_1[0xe] = lVar1;
  }
  if (*(code **)(param_3 + 0x40) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x40))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xf] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400181a8 FUN_1400181a8 body=306 status=ok
// SIG undefined FUN_1400181a8(void)

longlong FUN_1400181a8(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  code *local_50;
  undefined1 *local_48;
  undefined2 **local_40;
  undefined2 *local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9493d8 == 0) {
    local_30 = &DAT_1427db2a2;
    lVar1 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c9493d8 = lVar1;
    FUN_1446f470e(local_28,L"DelegateFunction",1);
    local_48 = &LAB_146892a07;
    local_50 = FUN_1462730a7;
    local_60 = L"Engine";
    local_68 = 0x100000000000;
    local_58 = 199;
    local_70 = 0x10000000;
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
    local_40 = &local_30;
    FUN_14574b4b2(lVar1);
    DAT_14c9493d8 = lVar1;
    uVar2 = FUN_1446f8646();
    lVar1 = DAT_14c9493d8;
    uVar3 = FUN_140010bca();
    local_78 = L"DelegateFunction";
    FUN_14574b446(uVar3,lVar1,uVar2,L"/Script/CoreUObject");
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return DAT_14c9493d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400182dc FUN_1400182dc body=120 status=ok
// SIG undefined FUN_1400182dc(void)

undefined8 * FUN_1400182dc(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400185ae(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149eaa2d0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018356 FUN_140018356 body=233 status=ok
// SIG undefined FUN_140018356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140018356(undefined8 *param_1,ulonglong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14c9482b8 = *param_3;
  uRam000000014c9482bc = param_3[1];
  uRam000000014c9482c0 = param_3[2];
  uRam000000014c9482c4 = param_3[3];
  _DAT_14c9482c8 = param_3[4];
  uRam000000014c9482cc = param_3[5];
  uRam000000014c9482d0 = param_3[6];
  uRam000000014c9482d4 = param_3[7];
  _DAT_14c9482d8 = param_3[8];
  uRam000000014c9482dc = param_3[9];
  uRam000000014c9482e0 = param_3[10];
  uRam000000014c9482e4 = param_3[0xb];
  _DAT_14c9482e8 = *(undefined8 *)(param_3 + 0xc);
  _DAT_14c9482f0 = &LAB_1427b7f9d;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140015d32(param_1,&local_20,&DAT_14c9482b8);
  *param_1 = &PTR_LAB_149e62830;
  if (*(code **)(param_3 + 0xe) == (code *)0x0) {
    param_1[0xf] = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0xe))();
    param_1[0xf] = lVar1;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018440 FUN_140018440 body=120 status=ok
// SIG undefined FUN_140018440(void)

undefined8 * FUN_140018440(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400184ba(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e6f430;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400184ba FUN_1400184ba body=120 status=ok
// SIG undefined FUN_1400184ba(void)

undefined8 * FUN_1400184ba(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018534(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9e640;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018534 FUN_140018534 body=120 status=ok
// SIG undefined FUN_140018534(void)

undefined8 * FUN_140018534(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400186e0(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e9e8b0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400185ae FUN_1400185ae body=166 status=ok
// SIG undefined FUN_1400185ae(void)

undefined8 * FUN_1400185ae(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018656(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea7fb0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018656 FUN_140018656 body=137 status=ok
// SIG undefined FUN_140018656(void)

undefined8 * FUN_140018656(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140016664(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149ea8200;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400186e0 FUN_1400186e0 body=137 status=ok
// SIG undefined FUN_1400186e0(void)

undefined8 * FUN_1400186e0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9eb20;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001876a FUN_14001876a body=120 status=ok
// SIG undefined FUN_14001876a(void)

undefined8 * FUN_14001876a(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400187e4(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea5e80;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400187e4 FUN_1400187e4 body=120 status=ok
// SIG undefined FUN_1400187e4(void)

undefined8 * FUN_1400187e4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001885e(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea8b00;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14001885e FUN_14001885e body=120 status=ok
// SIG undefined FUN_14001885e(void)

undefined8 * FUN_14001885e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018b18(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea8d70;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400188d8 FUN_1400188d8 body=174 status=ok
// SIG undefined FUN_1400188d8(void)

undefined8 * FUN_1400188d8(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018988(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea6700;
  param_1[0xe] = 0;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018988 FUN_140018988 body=137 status=ok
// SIG undefined FUN_140018988(void)

undefined8 * FUN_140018988(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8001000000200);
  *param_1 = &PTR_LAB_149e9ba10;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018a12 FUN_140018a12 body=128 status=ok
// SIG undefined FUN_140018a12(void)

undefined8 * FUN_140018a12(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018a94(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e70450;
  param_1[0xe] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018a94 FUN_140018a94 body=130 status=ok
// SIG undefined FUN_140018a94(void)

undefined8 * FUN_140018a94(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0);
  *param_1 = &PTR_LAB_149e9fc50;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x50;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018b18 FUN_140018b18 body=137 status=ok
// SIG undefined FUN_140018b18(void)

undefined8 * FUN_140018b18(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149ea8fe0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018ba2 FUN_140018ba2 body=188 status=ok
// SIG undefined FUN_140018ba2(void)

undefined8 * FUN_140018ba2(undefined8 *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018c60(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea6340;
  param_1[0xe] = 0;
  param_1[7] = param_1[7] & 0xffffff7ffff7fff7;
  if (*(code **)(param_3 + 0x38) == (code *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(param_3 + 0x38))();
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  param_1[0xe] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018c60 FUN_140018c60 body=137 status=ok
// SIG undefined FUN_140018c60(void)

undefined8 * FUN_140018c60(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1400160ac(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149e9bbf0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018cea FUN_140018cea body=120 status=ok
// SIG undefined FUN_140018cea(void)

undefined8 * FUN_140018cea(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018d64(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149e6f910;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018d64 FUN_140018d64 body=120 status=ok
// SIG undefined FUN_140018d64(void)

undefined8 * FUN_140018d64(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018dde(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea99a0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018dde FUN_140018dde body=120 status=ok
// SIG undefined FUN_140018dde(void)

undefined8 * FUN_140018dde(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018e58(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea9c10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018e58 FUN_140018e58 body=137 status=ok
// SIG undefined FUN_140018e58(void)

undefined8 * FUN_140018e58(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14001602a(param_1,&local_20,param_3,0x8001040000200);
  *param_1 = &PTR_LAB_149ea9e80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140018ee2 FUN_140018ee2 body=120 status=ok
// SIG undefined FUN_140018ee2(void)

undefined8 * FUN_140018ee2(undefined8 *param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  if ((((local_20 & 1) != 0) && ((local_20 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140018f5c(param_1,&local_20,param_3);
  *param_1 = &PTR_LAB_149ea5c10;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


