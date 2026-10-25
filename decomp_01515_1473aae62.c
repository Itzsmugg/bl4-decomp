// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473aae62 FUN_1473aae62 body=71 status=ok
// SIG undefined FUN_1473aae62(void)

undefined8 * FUN_1473aae62(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473aaeb6 FUN_1473aaeb6 body=128 status=ok
// SIG undefined FUN_1473aaeb6(void)

undefined8 * FUN_1473aaeb6(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_KHR_separate_depth_stencil_layouts";
  param_1[2] = 0x1000100402000;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35cdb0;
  lVar1 = DAT_14ca77dd8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473aaf36 FUN_1473aaf36 body=71 status=ok
// SIG undefined FUN_1473aaf36(void)

undefined8 * FUN_1473aaf36(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473aafe2 FUN_1473aafe2 body=128 status=ok
// SIG undefined FUN_1473aafe2(void)

undefined8 * FUN_1473aafe2(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_KHR_synchronization2";
  param_1[2] = 0x1000100403000;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35ce00;
  lVar1 = DAT_14ca77dd8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473ab062 FUN_1473ab062 body=71 status=ok
// SIG undefined FUN_1473ab062(void)

undefined8 * FUN_1473ab062(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab10e FUN_1473ab10e body=110 status=ok
// SIG undefined FUN_1473ab10e(void)

undefined8 * FUN_1473ab10e(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  
  param_1[1] = "VK_KHR_fragment_shading_rate";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35ce50;
  bVar1 = FUN_144a12f44(DAT_14ca85550);
  *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & bVar1;
  iVar2 = (**(code **)(*DAT_14ca77de8 + 0xb0))();
  *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & iVar2 < 4;
  return param_1;
}



// FUNCTION 1473ab17c FUN_1473ab17c body=71 status=ok
// SIG undefined FUN_1473ab17c(void)

undefined8 * FUN_1473ab17c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab2a8 FUN_1473ab2a8 body=117 status=ok
// SIG undefined FUN_1473ab2a8(void)

undefined8 * FUN_1473ab2a8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  
  param_1[1] = "VK_EXT_fragment_density_map";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35cea0;
  bVar1 = FUN_144a12f44(DAT_14ca85550);
  *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & bVar1;
  iVar2 = (**(code **)(*DAT_14ca77de8 + 0xb0))();
  *(byte *)((longlong)param_1 + 0x14) =
       *(byte *)((longlong)param_1 + 0x14) & (iVar2 == 0 || 2 < iVar2);
  return param_1;
}



// FUNCTION 1473ab31e FUN_1473ab31e body=71 status=ok
// SIG undefined FUN_1473ab31e(void)

undefined8 * FUN_1473ab31e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab412 FUN_1473ab412 body=85 status=ok
// SIG undefined FUN_1473ab412(void)

undefined8 * FUN_1473ab412(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  
  param_1[1] = "VK_EXT_fragment_density_map2";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35cef0;
  bVar1 = FUN_144a12f44(DAT_14ca85550);
  *(byte *)((longlong)param_1 + 0x14) = *(byte *)((longlong)param_1 + 0x14) & bVar1;
  return param_1;
}



// FUNCTION 1473ab468 FUN_1473ab468 body=71 status=ok
// SIG undefined FUN_1473ab468(void)

undefined8 * FUN_1473ab468(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab53c FUN_1473ab53c body=71 status=ok
// SIG undefined FUN_1473ab53c(void)

undefined8 * FUN_1473ab53c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab5e2 FUN_1473ab5e2 body=71 status=ok
// SIG undefined FUN_1473ab5e2(void)

undefined8 * FUN_1473ab5e2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab62a FUN_1473ab62a body=71 status=ok
// SIG undefined FUN_1473ab62a(void)

undefined8 * FUN_1473ab62a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab716 FUN_1473ab716 body=128 status=ok
// SIG undefined FUN_1473ab716(void)

undefined8 * FUN_1473ab716(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_EXT_host_query_reset";
  param_1[2] = 0x1000100402000;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d030;
  lVar1 = DAT_14ca77dc0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473ab796 FUN_1473ab796 body=71 status=ok
// SIG undefined FUN_1473ab796(void)

undefined8 * FUN_1473ab796(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab842 FUN_1473ab842 body=71 status=ok
// SIG undefined FUN_1473ab842(void)

undefined8 * FUN_1473ab842(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab948 FUN_1473ab948 body=71 status=ok
// SIG undefined FUN_1473ab948(void)

undefined8 * FUN_1473ab948(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ab990 FUN_1473ab990 body=226 status=ok
// SIG undefined FUN_1473ab990(void)

void FUN_1473ab990(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  (*DAT_14ca79160)(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xae8),&local_4c,0);
  local_38 = (undefined1 *)0x0;
  local_30 = 0x400000000;
  FUN_1473aba74(local_48,local_4c);
  (*DAT_14ca79160)(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xae8),&local_4c);
  puVar1 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar1 = local_48;
  }
  if ((longlong)(int)local_30 != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(puVar1 + lVar2) == 0) {
        *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 0x40;
        break;
      }
      lVar2 = lVar2 + 4;
    } while ((longlong)(int)local_30 * 4 != lVar2);
  }
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473aba74 FUN_1473aba74 body=123 status=ok
// SIG undefined FUN_1473aba74(void)

void FUN_1473aba74(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473abaf0(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_1473abbe4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473abaf0 FUN_1473abaf0 body=110 status=ok
// SIG undefined FUN_1473abaf0(void)

void FUN_1473abaf0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x1c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_1473abb60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473abb60 FUN_1473abb60 body=132 status=ok
// SIG undefined FUN_1473abb60(void)

void FUN_1473abb60(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,4);
  return;
}



// FUNCTION 1473abbe4 FUN_1473abbe4 body=52 status=ok
// SIG undefined FUN_1473abbe4(void)

void FUN_1473abbe4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473abc18(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_1473abb60(param_1,*(undefined4 *)(param_1 + 0x18),iVar1);
  return;
}



// FUNCTION 1473abc18 FUN_1473abc18 body=108 status=ok
// SIG undefined FUN_1473abc18(void)

ulonglong FUN_1473abc18(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1473abc84 FUN_1473abc84 body=128 status=ok
// SIG undefined FUN_1473abc84(void)

undefined8 * FUN_1473abc84(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_EXT_descriptor_buffer";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d120;
  lVar1 = DAT_14ca77dd8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473abd04 FUN_1473abd04 body=71 status=ok
// SIG undefined FUN_1473abd04(void)

undefined8 * FUN_1473abd04(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473abd4c FUN_1473abd4c body=80 status=ok
// SIG undefined FUN_1473abd4c(void)

void FUN_1473abd4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(lVar1 + 0x2318) = 0x3b9f9c60;
    memset((void *)(lVar1 + 0x231c),0,0xfc);
    *(undefined8 *)(lVar1 + 0x2320) = *(undefined8 *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = lVar1 + 0x2318;
  }
  return;
}



// FUNCTION 1473abde2 FUN_1473abde2 body=71 status=ok
// SIG undefined FUN_1473abde2(void)

undefined8 * FUN_1473abde2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473abe8a FUN_1473abe8a body=71 status=ok
// SIG undefined FUN_1473abe8a(void)

undefined8 * FUN_1473abe8a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473abf1a FUN_1473abf1a body=128 status=ok
// SIG undefined FUN_1473abf1a(void)

undefined8 * FUN_1473abf1a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_KHR_16bit_storage";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d220;
  lVar1 = DAT_14ca77da8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473abf9a FUN_1473abf9a body=71 status=ok
// SIG undefined FUN_1473abf9a(void)

undefined8 * FUN_1473abf9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac056 FUN_1473ac056 body=128 status=ok
// SIG undefined FUN_1473ac056(void)

undefined8 * FUN_1473ac056(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  param_1[1] = "VK_KHR_shader_float16_int8";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d270;
  lVar1 = DAT_14ca77da8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(bool *)((longlong)param_1 + 0x14) = *(int *)(lVar1 + uVar3 * 4) != 0;
  return param_1;
}



// FUNCTION 1473ac0d6 FUN_1473ac0d6 body=71 status=ok
// SIG undefined FUN_1473ac0d6(void)

undefined8 * FUN_1473ac0d6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac1ac FUN_1473ac1ac body=71 status=ok
// SIG undefined FUN_1473ac1ac(void)

undefined8 * FUN_1473ac1ac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac200 FUN_1473ac200 body=71 status=ok
// SIG undefined FUN_1473ac200(void)

undefined8 * FUN_1473ac200(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac2ac FUN_1473ac2ac body=71 status=ok
// SIG undefined FUN_1473ac2ac(void)

undefined8 * FUN_1473ac2ac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac398 FUN_1473ac398 body=71 status=ok
// SIG undefined FUN_1473ac398(void)

undefined8 * FUN_1473ac398(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac454 FUN_1473ac454 body=71 status=ok
// SIG undefined FUN_1473ac454(void)

undefined8 * FUN_1473ac454(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac4fc FUN_1473ac4fc body=71 status=ok
// SIG undefined FUN_1473ac4fc(void)

undefined8 * FUN_1473ac4fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac58c FUN_1473ac58c body=71 status=ok
// SIG undefined FUN_1473ac58c(void)

undefined8 * FUN_1473ac58c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac5d4 FUN_1473ac5d4 body=74 status=ok
// SIG undefined FUN_1473ac5d4(void)

void FUN_1473ac5d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x2530) = 0x3b9fcb41;
  memset((void *)(lVar1 + 0x2534),0,0x9c);
  *(undefined8 *)(lVar1 + 0x2538) = *(undefined8 *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = lVar1 + 0x2530;
  return;
}



// FUNCTION 1473ac698 FUN_1473ac698 body=71 status=ok
// SIG undefined FUN_1473ac698(void)

undefined8 * FUN_1473ac698(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac73e FUN_1473ac73e body=155 status=ok
// SIG undefined FUN_1473ac73e(void)

undefined8 * FUN_1473ac73e(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  param_1[1] = "VK_KHR_acceleration_structure";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d570;
  lVar1 = DAT_14ca77fc8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar3 * 4) == 0) {
    bVar2 = 0;
  }
  else {
    uVar4 = FUN_14118da1c();
    bVar2 = FUN_14054d46e(uVar4,L"noraytracing");
    bVar2 = bVar2 ^ 1;
  }
  *(byte *)((longlong)param_1 + 0x14) = bVar2;
  return param_1;
}



// FUNCTION 1473ac7da FUN_1473ac7da body=71 status=ok
// SIG undefined FUN_1473ac7da(void)

undefined8 * FUN_1473ac7da(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ac8e0 FUN_1473ac8e0 body=155 status=ok
// SIG undefined FUN_1473ac8e0(void)

undefined8 * FUN_1473ac8e0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  param_1[1] = "VK_KHR_ray_tracing_pipeline";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d5c0;
  lVar1 = DAT_14ca77fc8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar3 * 4) == 0) {
    bVar2 = 0;
  }
  else {
    uVar4 = FUN_14118da1c();
    bVar2 = FUN_14054d46e(uVar4,L"noraytracing");
    bVar2 = bVar2 ^ 1;
  }
  *(byte *)((longlong)param_1 + 0x14) = bVar2;
  return param_1;
}



// FUNCTION 1473ac97c FUN_1473ac97c body=71 status=ok
// SIG undefined FUN_1473ac97c(void)

undefined8 * FUN_1473ac97c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473aca8a FUN_1473aca8a body=155 status=ok
// SIG undefined FUN_1473aca8a(void)

undefined8 * FUN_1473aca8a(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  param_1[1] = "VK_KHR_ray_query";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d610;
  lVar1 = DAT_14ca77fc8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar3 * 4) == 0) {
    bVar2 = 0;
  }
  else {
    uVar4 = FUN_14118da1c();
    bVar2 = FUN_14054d46e(uVar4,L"noraytracing");
    bVar2 = bVar2 ^ 1;
  }
  *(byte *)((longlong)param_1 + 0x14) = bVar2;
  return param_1;
}



// FUNCTION 1473acb26 FUN_1473acb26 body=71 status=ok
// SIG undefined FUN_1473acb26(void)

undefined8 * FUN_1473acb26(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473acbce FUN_1473acbce body=155 status=ok
// SIG undefined FUN_1473acbce(void)

undefined8 * FUN_1473acbce(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  param_1[1] = "VK_KHR_ray_tracing_position_fetch";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar3 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d670;
  lVar1 = DAT_14ca77fc8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar3 * 4) == 0) {
    bVar2 = 0;
  }
  else {
    uVar4 = FUN_14118da1c();
    bVar2 = FUN_14054d46e(uVar4,L"noraytracing");
    bVar2 = bVar2 ^ 1;
  }
  *(byte *)((longlong)param_1 + 0x14) = bVar2;
  return param_1;
}



// FUNCTION 1473acc6a FUN_1473acc6a body=71 status=ok
// SIG undefined FUN_1473acc6a(void)

undefined8 * FUN_1473acc6a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473accfa FUN_1473accfa body=92 status=ok
// SIG undefined FUN_1473accfa(void)

undefined8 * FUN_1473accfa(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  param_1[1] = "VK_AMD_buffer_marker";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar2 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d6c0;
  cVar1 = FUN_1474121fd();
  if (cVar1 != '\0') {
    uVar2 = FUN_1462b4477();
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = uVar2;
  return param_1;
}



// FUNCTION 1473acd56 FUN_1473acd56 body=71 status=ok
// SIG undefined FUN_1473acd56(void)

undefined8 * FUN_1473acd56(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473acda4 FUN_1473acda4 body=92 status=ok
// SIG undefined FUN_1473acda4(void)

undefined8 * FUN_1473acda4(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  param_1[1] = "VK_NV_device_diagnostic_checkpoints";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar2 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d720;
  cVar1 = FUN_1474121fd();
  if (cVar1 != '\0') {
    uVar2 = FUN_1462b4477();
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = uVar2;
  return param_1;
}



// FUNCTION 1473ace00 FUN_1473ace00 body=71 status=ok
// SIG undefined FUN_1473ace00(void)

undefined8 * FUN_1473ace00(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ace4e FUN_1473ace4e body=92 status=ok
// SIG undefined FUN_1473ace4e(void)

undefined8 * FUN_1473ace4e(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  param_1[1] = "VK_NV_device_diagnostics_config";
  param_1[2] = 0x10001ffffffff;
  param_1[3] = param_2;
  uVar2 = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_14a35d770;
  cVar1 = FUN_1474121fd();
  if (cVar1 != '\0') {
    uVar2 = FUN_1462b4477();
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = uVar2;
  return param_1;
}



// FUNCTION 1473aceaa FUN_1473aceaa body=71 status=ok
// SIG undefined FUN_1473aceaa(void)

undefined8 * FUN_1473aceaa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473acf3a FUN_1473acf3a body=242 status=ok
// SIG undefined FUN_1473acf3a(void)

void FUN_1473acf3a(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = param_1 + 0x68;
    *(undefined4 *)(param_1 + 0x80) = 0x3b9f5de1;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x90) = 7;
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = param_1 + 0x80;
    local_48 = 0;
    local_38 = &PTR_LAB_14a35d7a0;
    local_30 = &LAB_1473ad02e;
    local_58 = FUN_1473ad03c;
    FUN_142b74a24();
    local_88 = 0;
    local_78 = &PTR_LAB_14a348fd0;
    local_70 = FUN_1431babae;
    local_98 = &LAB_14736f7cc;
    FUN_147123d96();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473ad03c FUN_1473ad03c body=54 status=ok
// SIG undefined FUN_1473ad03c(void)

void FUN_1473ad03c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  (*(code *)*param_1)(*param_2,*param_3,*param_4,*param_5,*param_6);
  return;
}



// FUNCTION 1473ad088 FUN_1473ad088 body=29 status=ok
// SIG undefined FUN_1473ad088(void)

undefined8 FUN_1473ad088(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ad0a6 FUN_1473ad0a6 body=71 status=ok
// SIG undefined FUN_1473ad0a6(void)

undefined8 * FUN_1473ad0a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35ec40;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ad136 FUN_1473ad136 body=98 status=ok
// SIG undefined FUN_1473ad136(void)

void FUN_1473ad136(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1473ad198 FUN_1473ad198 body=132 status=ok
// SIG undefined FUN_1473ad198(void)

void FUN_1473ad198(longlong param_1,int param_2)

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



// FUNCTION 1473ad21e FUN_1473ad21e body=38 status=ok
// SIG undefined FUN_1473ad21e(void)

undefined8 FUN_1473ad21e(undefined8 param_1,int param_2)

{
  FUN_1473ad246();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473ad246 FUN_1473ad246 body=89 status=ok
// SIG undefined FUN_1473ad246(void)

void FUN_1473ad246(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a35d830;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a35ec10;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x0001473ad294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1473ad2a0 FUN_1473ad2a0 body=121 status=ok
// SIG undefined FUN_1473ad2a0(void)

void FUN_1473ad2a0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473ad3ce(param_1,iVar1);
    }
    FUN_1473ad3b1((longlong)iVar1 * 0x218 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1473ad462(param_1,param_2,iVar1 - param_2);
    FUN_1473ad4c4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473ad31a FUN_1473ad31a body=150 status=ok
// SIG undefined FUN_1473ad31a(void)

void FUN_1473ad31a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x208,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x208)) {
      uVar5 = uVar4 / 0x208 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x208,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ad3b1 FUN_1473ad3b1 body=29 status=ok
// SIG undefined FUN_1473ad3b1(void)

void FUN_1473ad3b1(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x208);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 0x43;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473ad3ce FUN_1473ad3ce body=146 status=ok
// SIG undefined FUN_1473ad3ce(void)

void FUN_1473ad3ce(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x218,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x218)) {
      uVar5 = uVar4 / 0x218 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x218,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ad462 FUN_1473ad462 body=98 status=ok
// SIG undefined FUN_1473ad462(void)

void FUN_1473ad462(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x218 + *param_1);
  FUN_1473ad502(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x218 + (longlong)_Dst),(longlong)iVar2 * 0x218);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1473ad4c4 FUN_1473ad4c4 body=62 status=ok
// SIG undefined FUN_1473ad4c4(void)

void FUN_1473ad4c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473ad538(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x218,8);
  }
  return;
}



// FUNCTION 1473ad502 FUN_1473ad502 body=53 status=ok
// SIG undefined FUN_1473ad502(void)

void FUN_1473ad502(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x208);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x43;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473ad538 FUN_1473ad538 body=110 status=ok
// SIG undefined FUN_1473ad538(void)

ulonglong FUN_1473ad538(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x218) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473ad571;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x218,8);
      param_2 = param_2 / 0x218;
    }
  }
LAB_1473ad571:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473ad5a6 FUN_1473ad5a6 body=592 status=ok
// SIG undefined FUN_1473ad5a6(void)

void FUN_1473ad5a6(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_348;
    do {
      puVar4 = (undefined8 *)*plVar10;
      puVar11 = (undefined8 *)plVar10[1];
      iVar15 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3);
      puVar9 = puVar4;
      puVar16 = puVar11;
      if (iVar15 != 0) {
LAB_1473ad66b:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = iVar6 + 1U >> 1;
          uVar2 = puVar4[uVar7];
          puVar4[uVar7] = *puVar4;
          *puVar4 = uVar2;
          puVar8 = puVar11 + 1;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 1;
            puVar12 = puVar5 + 1;
            do {
              puVar5 = puVar12;
              puVar17 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar17 + 1;
              puVar12 = puVar5 + 1;
            } while (*(char *)*puVar5 <= *(char *)*puVar4);
            puVar3 = puVar8 + -2;
            do {
              puVar12 = puVar8;
              puVar18 = puVar3;
              puVar8 = puVar12 + -1;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar18 + -1;
            } while (*(char *)*puVar4 <= *(char *)*puVar8);
            if (puVar8 < puVar5) goto LAB_1473ad6f7;
            uVar2 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar2;
          } while( true );
        }
        if (puVar4 < puVar11) {
          do {
            puVar9 = puVar4;
            if (puVar4 + 1 <= puVar11) {
              puVar16 = puVar4 + 1;
              cVar13 = *(char *)*puVar4;
              do {
                cVar1 = *(char *)*puVar16;
                cVar14 = cVar13;
                if (cVar13 <= cVar1) {
                  cVar14 = cVar1;
                }
                if (cVar13 < cVar1) {
                  puVar9 = puVar16;
                }
                puVar16 = puVar16 + 1;
                cVar13 = cVar14;
              } while (puVar16 <= puVar11);
            }
            uVar2 = *puVar9;
            *puVar9 = *puVar11;
            *puVar11 = uVar2;
            puVar11 = puVar11 + -1;
          } while (puVar4 < puVar11);
        }
        goto LAB_1473ad7d5;
      }
LAB_1473ad7ea:
      FUN_1473ad7f7(puVar4);
LAB_1473ad7d5:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1473ad6f7:
  uVar2 = *puVar4;
  *puVar4 = *puVar8;
  *puVar8 = uVar2;
  iVar15 = iVar15 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar18 - (longlong)puVar9 < (longlong)puVar16 - (longlong)puVar17) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar15;
      plVar10 = plVar10 + 3;
    }
    puVar17 = puVar4;
    if (puVar8 <= puVar4 + 1) goto LAB_1473ad7d5;
  }
  else {
    if (puVar4 + 1 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar15;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar18 = puVar11;
    if (puVar11 <= puVar5) goto LAB_1473ad7d5;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar17) >> 3);
  puVar9 = puVar17;
  puVar11 = puVar12;
  puVar16 = puVar18;
  if (iVar15 == 0) goto LAB_1473ad7ea;
  goto LAB_1473ad66b;
}



// FUNCTION 1473ad7f7 FUN_1473ad7f7 body=310 status=ok
// SIG undefined FUN_1473ad7f7(void)

void FUN_1473ad7f7(undefined8 *param_1,uint param_2)

{
  char *pcVar1;
  undefined8 uVar2;
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
joined_r0x0001473ad819:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && (*(char *)param_1[iVar6] <= *(char *)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        pcVar1 = (char *)param_1[iVar3];
        if (*pcVar1 < *(char *)param_1[iVar6]) {
          param_1[iVar3] = (char *)param_1[iVar6];
          param_1[iVar6] = pcVar1;
          iVar3 = iVar6;
          goto joined_r0x0001473ad819;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
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
               (*(char *)param_1[iVar6] <= *(char *)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            pcVar1 = (char *)param_1[iVar8];
            if (*(char *)param_1[iVar7] <= *pcVar1) break;
            param_1[iVar8] = (char *)param_1[iVar7];
            param_1[iVar7] = pcVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1473ad92d FUN_1473ad92d body=47 status=ok
// SIG undefined FUN_1473ad92d(void)

void FUN_1473ad92d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473ad95c FUN_1473ad95c body=19 status=ok
// SIG undefined FUN_1473ad95c(void)

void FUN_1473ad95c(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 5);
    return;
  }
  return;
}



// FUNCTION 1473ad970 FUN_1473ad970 body=132 status=ok
// SIG undefined FUN_1473ad970(void)

void FUN_1473ad970(longlong param_1,int param_2)

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



// FUNCTION 1473ad9f6 FUN_1473ad9f6 body=120 status=ok
// SIG undefined FUN_1473ad9f6(void)

longlong FUN_1473ad9f6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1473ada70();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1473adaca(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x38 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 1473ada70 FUN_1473ada70 body=89 status=ok
// SIG undefined FUN_1473ada70(void)

longlong FUN_1473ada70(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x38;
        if ((*(int *)(lVar1 + lVar4) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4) == *(longlong *)(param_3 + 2))) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x30);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473adaca FUN_1473adaca body=281 status=ok
// SIG undefined FUN_1473adaca(void)

undefined4 * FUN_1473adaca(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473adbe4(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  cVar2 = FUN_1473adcc6(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x34) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1473addee(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473adbe4 FUN_1473adbe4 body=226 status=ok
// SIG undefined FUN_1473adbe4(void)

int * FUN_1473adbe4(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1473adcc6 FUN_1473adcc6 body=179 status=ok
// SIG undefined FUN_1473adcc6(void)

undefined8 FUN_1473adcc6(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
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
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      lVar2 = *param_1;
      do {
        lVar16 = (longlong)iVar15 * 0x38;
        piVar1 = (int *)(lVar2 + lVar16);
        if ((*(int *)(lVar2 + lVar16) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar16) == *(longlong *)(param_3 + 2))) {
          if (*(longlong *)(piVar1 + 8) != 0) {
            FUN_1400020a8();
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[4];
          iVar8 = param_3[5];
          iVar9 = param_3[6];
          iVar10 = param_3[7];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar7;
          piVar1[5] = iVar8;
          piVar1[6] = iVar9;
          piVar1[7] = iVar10;
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_1473add7a(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar1[0xc];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473add7a FUN_1473add7a body=116 status=ok
// SIG undefined FUN_1473add7a(void)

void FUN_1473add7a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1473addee FUN_1473addee body=487 status=ok
// SIG undefined FUN_1473addee(void)

void FUN_1473addee(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
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
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar12 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4)
             = 0xffffffff;
        uVar12 = uVar12 + 1;
      } while (uVar3 != uVar12);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar2 = lVar4 + (longlong)iVar6 * 0x38;
        uVar7 = (*(code *)PTR_FUN_14c75b148)(lVar2 + 8,8,0);
        uVar8 = (*(code *)PTR_FUN_14c75b148)(lVar4 + (longlong)iVar6 * 0x38,4);
        iVar9 = FUN_144a78877(uVar8,uVar7);
        uVar10 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x34) = iVar9;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x30) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473adfd6 FUN_1473adfd6 body=62 status=ok
// SIG undefined FUN_1473adfd6(void)

void FUN_1473adfd6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473ae014(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1473ae014 FUN_1473ae014 body=93 status=ok
// SIG undefined FUN_1473ae014(void)

ulonglong FUN_1473ae014(uint param_1,uint param_2)

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



// FUNCTION 1473ae072 FUN_1473ae072 body=132 status=ok
// SIG undefined FUN_1473ae072(void)

void FUN_1473ae072(longlong param_1,int param_2)

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



// FUNCTION 1473ae0f8 FUN_1473ae0f8 body=132 status=ok
// SIG undefined FUN_1473ae0f8(void)

void FUN_1473ae0f8(longlong param_1,int param_2)

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



// FUNCTION 1473ae17e FUN_1473ae17e body=62 status=ok
// SIG undefined FUN_1473ae17e(void)

void FUN_1473ae17e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473ae1bc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473ae1bc FUN_1473ae1bc body=93 status=ok
// SIG undefined FUN_1473ae1bc(void)

ulonglong FUN_1473ae1bc(uint param_1,uint param_2)

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



// FUNCTION 1473ae219 FUN_1473ae219 body=38 status=ok
// SIG undefined FUN_1473ae219(void)

void FUN_1473ae219(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 1473ae240 FUN_1473ae240 body=147 status=ok
// SIG undefined FUN_1473ae240(void)

void FUN_1473ae240(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ae2d4 FUN_1473ae2d4 body=62 status=ok
// SIG undefined FUN_1473ae2d4(void)

void FUN_1473ae2d4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473ae312(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1473ae312 FUN_1473ae312 body=112 status=ok
// SIG undefined FUN_1473ae312(void)

ulonglong FUN_1473ae312(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1473ae34c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1473ae34c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1473ae382 FUN_1473ae382 body=132 status=ok
// SIG undefined FUN_1473ae382(void)

void FUN_1473ae382(longlong param_1,int param_2)

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



// FUNCTION 1473ae408 FUN_1473ae408 body=62 status=ok
// SIG undefined FUN_1473ae408(void)

void FUN_1473ae408(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473ae446(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1473ae446 FUN_1473ae446 body=93 status=ok
// SIG undefined FUN_1473ae446(void)

ulonglong FUN_1473ae446(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1473ae4a4 FUN_1473ae4a4 body=132 status=ok
// SIG undefined FUN_1473ae4a4(void)

void FUN_1473ae4a4(longlong param_1,int param_2)

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



// FUNCTION 1473ae52a FUN_1473ae52a body=132 status=ok
// SIG undefined FUN_1473ae52a(void)

void FUN_1473ae52a(longlong param_1,int param_2)

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



// FUNCTION 1473ae5b0 FUN_1473ae5b0 body=31 status=ok
// SIG undefined FUN_1473ae5b0(void)

void FUN_1473ae5b0(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x54) = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ae5d0 FUN_1473ae5d0 body=48 status=ok
// SIG undefined FUN_1473ae5d0(void)

void FUN_1473ae5d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473ae600 FUN_1473ae600 body=48 status=ok
// SIG undefined FUN_1473ae600(void)

void FUN_1473ae600(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473ae630 FUN_1473ae630 body=35 status=ok
// SIG undefined FUN_1473ae630(void)

void FUN_1473ae630(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      *puVar1 = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      *(undefined8 *)((longlong)puVar1 + -0x14) = 0;
      *(undefined8 *)((longlong)puVar1 + -0xc) = 0;
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1473ae654 FUN_1473ae654 body=147 status=ok
// SIG undefined FUN_1473ae654(void)

void FUN_1473ae654(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ae6e8 FUN_1473ae6e8 body=48 status=ok
// SIG undefined FUN_1473ae6e8(void)

void FUN_1473ae6e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1473ae718 FUN_1473ae718 body=147 status=ok
// SIG undefined FUN_1473ae718(void)

void FUN_1473ae718(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473ae7ac FUN_1473ae7ac body=132 status=ok
// SIG undefined FUN_1473ae7ac(void)

void FUN_1473ae7ac(longlong param_1,int param_2)

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



// FUNCTION 1473ae832 FUN_1473ae832 body=62 status=ok
// SIG undefined FUN_1473ae832(void)

void FUN_1473ae832(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473ae870(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473ae870 FUN_1473ae870 body=93 status=ok
// SIG undefined FUN_1473ae870(void)

ulonglong FUN_1473ae870(uint param_1,uint param_2)

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



// FUNCTION 1473ae8ce FUN_1473ae8ce body=132 status=ok
// SIG undefined FUN_1473ae8ce(void)

void FUN_1473ae8ce(longlong param_1,int param_2)

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



// FUNCTION 1473ae954 FUN_1473ae954 body=111 status=ok
// SIG undefined FUN_1473ae954(void)

void FUN_1473ae954(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 8 + (longlong)(int)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x18),(longlong)iVar4 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1473ae9c4 FUN_1473ae9c4 body=126 status=ok
// SIG undefined FUN_1473ae9c4(void)

void FUN_1473ae9c4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2;
  FUN_1473a9ecf(*(undefined8 *)(lVar1 + 8 + lVar3 * 0x18),
                *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18));
  if (*(longlong *)(lVar1 + 8 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar5 = 1;
    if (iVar4 < 1) {
      iVar5 = iVar4;
    }
    memmove((void *)(lVar1 + lVar3 * 0x18),(void *)(lVar1 + (longlong)(iVar2 - iVar5) * 0x18),
            (longlong)iVar5 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1473aea42 FUN_1473aea42 body=62 status=ok
// SIG undefined FUN_1473aea42(void)

void FUN_1473aea42(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473aea80(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1473aea80 FUN_1473aea80 body=93 status=ok
// SIG undefined FUN_1473aea80(void)

ulonglong FUN_1473aea80(uint param_1,uint param_2)

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



// FUNCTION 1473aeade FUN_1473aeade body=132 status=ok
// SIG undefined FUN_1473aeade(void)

void FUN_1473aeade(longlong param_1,int param_2)

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



// FUNCTION 1473aeb64 FUN_1473aeb64 body=147 status=ok
// SIG undefined FUN_1473aeb64(void)

void FUN_1473aeb64(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473aebf8 FUN_1473aebf8 body=48 status=ok
// SIG undefined FUN_1473aebf8(void)

void FUN_1473aebf8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473aec28 FUN_1473aec28 body=180 status=ok
// SIG undefined FUN_1473aec28(void)

longlong * FUN_1473aec28(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1473aecbf;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1473aecde(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1473aecbf:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1473aecde FUN_1473aecde body=278 status=ok
// SIG undefined FUN_1473aecde(void)

undefined4 * FUN_1473aecde(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1473aedf6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1473aeedc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1473aefce(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473aedf6 FUN_1473aedf6 body=230 status=ok
// SIG undefined FUN_1473aedf6(void)

int * FUN_1473aedf6(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1473aeedc FUN_1473aeedc body=128 status=ok
// SIG undefined FUN_1473aeedc(void)

undefined8 FUN_1473aeedc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1473aef5c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1473aef5c FUN_1473aef5c body=114 status=ok
// SIG undefined FUN_1473aef5c(void)

void FUN_1473aef5c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1473aefce FUN_1473aefce body=474 status=ok
// SIG undefined FUN_1473aefce(void)

void FUN_1473aefce(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1473af1aa FUN_1473af1aa body=132 status=ok
// SIG undefined FUN_1473af1aa(void)

void FUN_1473af1aa(longlong param_1,int param_2)

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



// FUNCTION 1473af230 FUN_1473af230 body=63 status=ok
// SIG undefined FUN_1473af230(void)

void FUN_1473af230(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1473a9e3c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1473aefce(param_1);
    return;
  }
  FUN_1473af270(param_1);
  FUN_1473a9e3c(param_1);
  return;
}



// FUNCTION 1473af270 FUN_1473af270 body=322 status=ok
// SIG undefined FUN_1473af270(void)

void FUN_1473af270(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1473af3b4 FUN_1473af3b4 body=137 status=ok
// SIG undefined FUN_1473af3b4(void)

undefined4 FUN_1473af3b4(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 200) == *(int *)(param_1 + 0xf4)) {
    return 0;
  }
  lVar3 = param_1 + 0xf8;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x100);
  }
  iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & param_2) * 4);
  if (iVar2 == -1) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0xc0);
  iVar4 = iVar2;
  while (*(uint *)(lVar3 + (longlong)iVar4 * 0x10) != param_2) {
    iVar4 = *(int *)((longlong)iVar4 * 0x10 + lVar3 + 8);
    if (iVar4 == -1) {
      return 0;
    }
  }
  do {
    lVar1 = lVar3 + (longlong)iVar2 * 0x10;
    if (*(uint *)(lVar3 + (longlong)iVar2 * 0x10) == param_2) goto LAB_1473af438;
    iVar2 = *(int *)(lVar1 + 8);
  } while (iVar2 != -1);
  lVar1 = 0;
LAB_1473af438:
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 1473af43e FUN_1473af43e body=76 status=ok
// SIG undefined FUN_1473af43e(void)

void FUN_1473af43e(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[4] != 0) {
    iVar1 = (*DAT_14ca791c8)(*(undefined8 *)*param_1,param_1[4],0);
    if (iVar1 != 0) {
      FUN_1431b4552(iVar1,
                    "VulkanRHI::vkResetDescriptorPool(Device->GetInstanceHandle(), DescriptorPool, 0)"
                    ,".\\Runtime/VulkanRHI/Private/VulkanPendingState.cpp",0x73);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1473af48a FUN_1473af48a body=138 status=ok
// SIG undefined FUN_1473af48a(void)

undefined8 FUN_1473af48a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = 2;
  if (*(uint *)(param_1 + 2) < 2) {
    uVar4 = *(uint *)(param_1 + 2);
  }
  uVar2 = FUN_14001cc68(0x28,0x10);
  FUN_1431a1358(uVar2,*param_1,param_1[1],0x20 << ((byte)uVar4 & 0x1f));
  lVar1 = param_1[4];
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar3 = uVar2;
  puVar3[1] = 0;
  if (lVar1 == 0) {
    param_1[3] = puVar3;
  }
  else {
    *(undefined8 **)(lVar1 + 8) = puVar3;
    puVar3 = *(undefined8 **)(param_1[4] + 8);
  }
  param_1[4] = puVar3;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return uVar2;
}



// FUNCTION 1473af514 FUN_1473af514 body=249 status=ok
// SIG undefined FUN_1473af514(void)

undefined8 FUN_1473af514(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_2 + 0x140)) {
    local_38 = *(undefined8 *)(param_2 + 0x178);
    local_58 = *(undefined4 *)(param_2 + 0x158);
    uStack_54 = *(undefined4 *)(param_2 + 0x15c);
    uStack_50 = *(undefined4 *)(param_2 + 0x160);
    uStack_4c = *(undefined4 *)(param_2 + 0x164);
    uStack_40 = *(undefined4 *)(param_2 + 0x170);
    uStack_3c = *(undefined4 *)(param_2 + 0x174);
    local_48 = ((undefined8 *)**(longlong **)(param_1 + 0x20))[4];
    iVar1 = (*DAT_14ca791d0)(**(undefined8 **)**(longlong **)(param_1 + 0x20));
    if (iVar1 != 0) {
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = (undefined8 *)FUN_1473af48a(param_1);
        }
        else {
          *(undefined8 **)(param_1 + 0x20) = puVar2;
          puVar2 = (undefined8 *)*puVar2;
        }
        local_38 = *(undefined8 *)(param_2 + 0x178);
        local_58 = *(undefined4 *)(param_2 + 0x158);
        uStack_54 = *(undefined4 *)(param_2 + 0x15c);
        uStack_50 = *(undefined4 *)(param_2 + 0x160);
        uStack_4c = *(undefined4 *)(param_2 + 0x164);
        uStack_40 = *(undefined4 *)(param_2 + 0x170);
        uStack_3c = *(undefined4 *)(param_2 + 0x174);
        local_48 = puVar2[4];
        iVar1 = (*DAT_14ca791d0)(*(undefined8 *)*puVar2,&local_58,param_3);
      } while (iVar1 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1473af60e FUN_1473af60e body=325 status=ok
// SIG undefined FUN_1473af60e(void)

void FUN_1473af60e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (lVar3 != 0) {
        FUN_1431a14e2(lVar3);
        FUN_1400020a8(lVar3);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar4));
  }
  FUN_1473a0a90(plVar1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14739cca0(plVar1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473af754 FUN_1473af754 body=249 status=ok
// SIG undefined FUN_1473af754(void)

undefined8 * FUN_1473af754(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  uint local_44;
  uint *local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = *(uint *)(param_2 + 0x124);
  if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
    puVar2 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)param_1[9];
    }
    uVar3 = *(uint *)((longlong)puVar2 + (ulonglong)(*(int *)(param_1 + 10) - 1U & local_44) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(param_1[1] + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == local_44) {
          if ((puVar1 != (uint *)0x0) &&
             (puVar2 = *(undefined8 **)(puVar1 + 2), puVar2 != (undefined8 *)0x0))
          goto LAB_1473af82d;
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar2 = *param_1;
  puVar2[1] = param_2;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_1473af48a(puVar2);
  local_38 = &local_50;
  local_40 = &local_44;
  local_50 = puVar2;
  FUN_1473c6c7a(param_1 + 1,local_2c);
  puVar2 = local_50;
LAB_1473af82d:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473af84e FUN_1473af84e body=293 status=ok
// SIG undefined FUN_1473af84e(void)

void FUN_1473af84e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = param_1 + 0x18;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      puVar6 = *(undefined8 **)(lVar3 + 0x18);
      if (puVar6 == (undefined8 *)0x0) {
        uVar4 = 0;
      }
      else {
        do {
          FUN_1473af43e(*puVar6);
          puVar6 = (undefined8 *)puVar6[1];
        } while (puVar6 != (undefined8 *)0x0);
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
      }
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473af974 FUN_1473af974 body=137 status=ok
// SIG undefined FUN_1473af974(void)

void FUN_1473af974(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1473af60e(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_1473c6daa((longlong *)(param_1 + 0x38));
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001473af9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1473af9fe FUN_1473af9fe body=232 status=ok
// SIG undefined FUN_1473af9fe(void)

undefined8 * FUN_1473af9fe(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  lVar5 = param_1[7];
  iVar1 = *(int *)(param_1 + 8);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar5 + lVar3);
      if (*(char *)((longlong)puVar2 + 0x5c) == '\0') {
        *(undefined1 *)((longlong)puVar2 + 0x5c) = 1;
        *(undefined4 *)(puVar2 + 0xb) = DAT_14c7590b0;
        goto LAB_1473afaaa;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = *param_1;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  *(undefined4 *)(puVar2 + 0xb) = DAT_14c7590b0;
  *(undefined1 *)((longlong)puVar2 + 0x5c) = 1;
  *(uint *)(param_1 + 8) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
    FUN_1473c6dda(param_1 + 7,iVar1);
    lVar5 = param_1[7];
  }
  *(undefined8 **)(lVar5 + lVar4 * 8) = puVar2;
LAB_1473afaaa:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return puVar2;
}



// FUNCTION 1473afae6 FUN_1473afae6 body=26 status=ok
// SIG undefined FUN_1473afae6(void)

void FUN_1473afae6(undefined8 param_1,longlong param_2)

{
  FUN_1473af84e(param_2);
  *(undefined1 *)(param_2 + 0x5c) = 0;
  return;
}



// FUNCTION 1473afb00 FUN_1473afb00 body=350 status=ok
// SIG undefined FUN_1473afb00(void)

void FUN_1473afb00(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_38 = param_1 + 0x28;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = plVar1;
  local_58 = plVar1;
  local_50 = plVar1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      puVar2 = *(undefined8 **)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_1473c2c02(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1473c1250(plVar1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473afc60 FUN_1473afc60 body=97 status=ok
// SIG undefined FUN_1473afc60(void)

void FUN_1473afc60(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  FUN_1473afcc2(uVar1,*(undefined8 *)(lVar2 + 0x78),1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473afcc2 FUN_1473afcc2 body=396 status=ok
// SIG undefined FUN_1473afcc2(void)

void FUN_1473afcc2(longlong param_1,undefined8 param_2,char param_3,ulonglong param_4,uint param_5,
                  longlong param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  
  switch(*(undefined1 *)(param_6 + 0x58)) {
  case 1:
    lVar5 = *(longlong *)(param_1 + 0xc0);
    param_4 = param_4 & 0xff;
    uVar10 = (ulonglong)param_5;
    *(longlong *)(*(longlong *)(lVar5 + param_4 * 0x48) + 0x38 + uVar10 * 0x40) = param_6 + 0x40;
    bVar2 = *(byte *)(param_6 + 0x4c);
    pbVar1 = (byte *)(lVar5 + 0x41 + param_4 * 0x48);
    *pbVar1 = *pbVar1 | bVar2;
    bVar11 = 1;
    if ((bVar2 == 0) && (DAT_14c760db4 < 2)) {
      lVar5 = lVar5 + param_4 * 0x48;
      lVar6 = *(longlong *)(lVar5 + 0x20);
      iVar3 = *(int *)(lVar6 + uVar10 * 0xc);
      iVar4 = *(int *)(param_6 + 0x48);
      if (iVar3 != iVar4) {
        *(int *)(lVar6 + uVar10 * 0xc) = iVar4;
      }
      bVar11 = iVar3 != iVar4;
      pbVar1 = (byte *)(lVar5 + 0x40);
      *pbVar1 = *pbVar1 | bVar11;
    }
    break;
  case 2:
    uVar7 = 0x60;
    if (param_3 != '\0') {
      uVar7 = 0x10;
    }
    uVar9 = (**(code **)(**(longlong **)(param_6 + 0x10) + 0x30))();
    uVar7 = FUN_147397304(param_2,uVar9,uVar7);
    bVar11 = FUN_14739cfa4((ulonglong)(((uint)param_4 & 0xff) * 0x48) +
                           *(longlong *)(param_1 + 0xc0),param_5,param_6 + 0x40,uVar7);
    break;
  case 3:
    bVar11 = FUN_1473c2e22((ulonglong)(((uint)param_4 & 0xff) * 0x48) +
                           *(longlong *)(param_1 + 0xc0),param_5,*(undefined8 *)(param_6 + 0x40),
                           *(undefined4 *)(param_6 + 0x48),*(undefined4 *)(param_6 + 0x4c),
                           *(undefined4 *)(param_6 + 0x50));
    break;
  case 4:
    for (piVar8 = *(int **)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (param_4 & 0xff) * 0x48) +
                            8 + (ulonglong)param_5 * 0x40); piVar8 != (int *)0x0;
        piVar8 = *(int **)(piVar8 + 2)) {
      if (*piVar8 == 0x3b9d13f7) goto LAB_1473afda0;
    }
    piVar8 = (int *)0x0;
LAB_1473afda0:
    bVar11 = **(longlong **)(piVar8 + 6) != *(longlong *)(param_6 + 0x40);
    **(longlong **)(piVar8 + 6) = *(longlong *)(param_6 + 0x40);
    break;
  default:
    goto switchD_1473afd00_default;
  }
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar11;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar11;
switchD_1473afd00_default:
  return;
}



// FUNCTION 1473afe4e FUN_1473afe4e body=97 status=ok
// SIG undefined FUN_1473afe4e(void)

void FUN_1473afe4e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  FUN_1473afeb0(uVar1,*(undefined8 *)(lVar2 + 0x78),1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473afeb0 FUN_1473afeb0 body=397 status=ok
// SIG undefined FUN_1473afeb0(void)

void FUN_1473afeb0(longlong param_1,undefined8 param_2,uint param_3,ulonglong param_4,uint param_5,
                  longlong param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  
  switch(*(undefined1 *)(param_6 + 0x58)) {
  case 1:
    lVar5 = *(longlong *)(param_1 + 0xc0);
    param_4 = param_4 & 0xff;
    uVar10 = (ulonglong)param_5;
    *(longlong *)(*(longlong *)(lVar5 + param_4 * 0x48) + 0x38 + uVar10 * 0x40) = param_6 + 0x40;
    bVar2 = *(byte *)(param_6 + 0x4c);
    pbVar1 = (byte *)(lVar5 + 0x41 + param_4 * 0x48);
    *pbVar1 = *pbVar1 | bVar2;
    bVar11 = 1;
    if ((bVar2 == 0) && (DAT_14c760db4 < 2)) {
      lVar5 = lVar5 + param_4 * 0x48;
      lVar6 = *(longlong *)(lVar5 + 0x20);
      iVar3 = *(int *)(lVar6 + uVar10 * 0xc);
      iVar4 = *(int *)(param_6 + 0x48);
      if (iVar3 != iVar4) {
        *(int *)(lVar6 + uVar10 * 0xc) = iVar4;
      }
      bVar11 = iVar3 != iVar4;
      pbVar1 = (byte *)(lVar5 + 0x40);
      *pbVar1 = *pbVar1 | bVar11;
    }
    break;
  case 2:
    uVar9 = (**(code **)(**(longlong **)(param_6 + 0x10) + 0x30))();
    uVar7 = FUN_147397304(param_2,uVar9,((param_3 ^ 1) & 0xff) * 0x400 + 0x400);
    bVar11 = FUN_14739d02e((ulonglong)(((uint)param_4 & 0xff) * 0x48) +
                           *(longlong *)(param_1 + 0xc0),param_5,param_6 + 0x40,uVar7);
    break;
  case 3:
    bVar11 = FUN_1473c2e22((ulonglong)(((uint)param_4 & 0xff) * 0x48) +
                           *(longlong *)(param_1 + 0xc0),param_5,*(undefined8 *)(param_6 + 0x40),
                           *(undefined4 *)(param_6 + 0x48),*(undefined4 *)(param_6 + 0x4c),
                           *(undefined4 *)(param_6 + 0x50));
    break;
  case 4:
    for (piVar8 = *(int **)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + (param_4 & 0xff) * 0x48) +
                            8 + (ulonglong)param_5 * 0x40); piVar8 != (int *)0x0;
        piVar8 = *(int **)(piVar8 + 2)) {
      if (*piVar8 == 0x3b9d13f7) goto LAB_1473aff8e;
    }
    piVar8 = (int *)0x0;
LAB_1473aff8e:
    bVar11 = **(longlong **)(piVar8 + 6) != *(longlong *)(param_6 + 0x40);
    **(longlong **)(piVar8 + 6) = *(longlong *)(param_6 + 0x40);
    break;
  default:
    goto switchD_1473afeee_default;
  }
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar11;
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar11;
switchD_1473afeee_default:
  return;
}



// FUNCTION 1473b003e FUN_1473b003e body=136 status=ok
// SIG undefined FUN_1473b003e(void)

void FUN_1473b003e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x48) == '\x01') {
    FUN_1473b00c6();
                    /* WARNING: Could not recover jumptable at 0x0001473b0087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca79318)(uVar1,1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18),DAT_14ca79318);
    return;
  }
  cVar2 = FUN_1473b02bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x68),param_2);
  (*DAT_14ca79318)(uVar1,1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  if (cVar2 == '\0') {
    return;
  }
  FUN_1473b0302(*(undefined8 *)(param_1 + 0x10),uVar1);
  return;
}



// FUNCTION 1473b00c6 FUN_1473b00c6 body=501 status=ok
// SIG undefined FUN_1473b00c6(void)

void FUN_1473b00c6(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  longlong local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x38);
  FUN_1473b5f9a(local_c8,*(undefined4 *)(lVar6 + 0xf0));
  bVar10 = *(int *)(param_1 + 0x100) != 0;
  local_f0 = param_3;
  if (bVar10) {
    iVar1 = *(int *)(param_1 + 0xf8);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd58);
    FUN_1473a8036(&local_e8);
    local_100 = local_c8[0];
    local_108 = &local_e8;
    _Dst = (void *)FUN_1473a9066(*(undefined8 *)(param_2 + 0x138),iVar1,uVar2,param_3);
    memcpy(_Dst,*(void **)(param_1 + 0xf0),(longlong)iVar1);
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  uVar8 = (uint)bVar10;
  if (uVar8 < *(uint *)(lVar6 + 0xf0)) {
    uVar7 = (ulonglong)bVar10 << 6 | 0x30;
    do {
      lVar4 = local_c8[0];
      lVar9 = (longlong)(int)uVar8;
      lVar3 = **(longlong **)(param_1 + 0xc0);
      local_e8 = 0x3b9e8321;
      local_e4 = 0;
      uStack_dc = 0;
      uStack_d8 = (undefined4)**(undefined8 **)(lVar3 + uVar7);
      uStack_d4 = (undefined4)((ulonglong)**(undefined8 **)(lVar3 + uVar7) >> 0x20);
      lVar5 = (*DAT_14ca79240)(**(undefined8 **)(param_1 + 8),&local_e8);
      *(undefined4 *)(lVar4 + lVar9 * 0x28) = 0x3b9f9c63;
      *(longlong *)(lVar4 + 0x10 + lVar9 * 0x28) =
           lVar5 + *(longlong *)(*(longlong *)(lVar3 + uVar7) + 8);
      *(undefined8 *)(lVar4 + 0x18 + lVar9 * 0x28) =
           *(undefined8 *)(*(longlong *)(lVar3 + uVar7) + 0x10);
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 0x40;
    } while (uVar8 < *(uint *)(lVar6 + 0xf0));
  }
  FUN_1473a266c(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x6b0),local_f0,1,local_c8);
  lVar6 = 0x60;
  do {
    if (*(longlong *)((longlong)&uStack_d8 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b02bc FUN_1473b02bc body=70 status=ok
// SIG undefined FUN_1473b02bc(void)

void FUN_1473b02bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_14ca793a0 + 0xb0))();
  if (0 < iVar1) {
    FUN_1473b74ae();
    return;
  }
  FUN_1473b762e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1473b0302 FUN_1473b0302 body=158 status=ok
// SIG undefined FUN_1473b0302(void)

void FUN_1473b0302(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20);
  if (*(char *)(lVar3 + 0x11) == '\x01') {
    puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x6b0) + 0x4d0);
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + 0x198);
  }
  if (*(char *)(param_1 + 0xe9) == '\0') {
    uVar2 = *(uint *)(param_1 + 0xa0);
    if ((ulonglong)uVar2 != 0) {
      iVar4 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      uVar1 = (ulonglong)uVar2 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      (*DAT_14ca793b0)(param_2,1,*puVar5,iVar4,(int)lVar3 - iVar4,
                       (ulonglong)(uint)(iVar4 * 8) + *(longlong *)(param_1 + 0x90),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8));
    }
  }
  return;
}



// FUNCTION 1473b03a0 FUN_1473b03a0 body=550 status=ok
// SIG undefined FUN_1473b03a0(void)

void FUN_1473b03a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8 [2];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  plVar1 = (longlong *)(param_1 + 0x98);
  plVar4 = local_d8;
  pplVar5 = &local_88;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pplVar5 = (longlong *)*plVar4;
    plVar4 = plVar4 + 1;
    pplVar5 = pplVar5 + 1;
  }
  plVar4 = plVar1;
  plVar6 = local_d8;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar6 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar6 = plVar6 + 1;
  }
  pplVar5 = &local_88;
  plVar4 = plVar1;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = (longlong)*pplVar5;
    pplVar5 = pplVar5 + 1;
    plVar4 = plVar4 + 1;
  }
  local_f8 = 0x100000000;
  local_e8 = 0xffffffff;
  iStack_e4 = 0;
  local_e0 = 0;
  iVar7 = 0;
  local_f0 = local_c8;
  if (local_b0 != 0) {
    FUN_1449c0562(&local_f8);
    iVar7 = local_b0;
  }
  local_70 = local_e8;
  iStack_6c = iStack_e4;
  local_68 = local_e0;
  local_64 = local_dc;
  local_80 = local_f8;
  local_78 = local_f0;
  local_88 = local_d8;
  if ((iStack_e4 != iVar7) || (local_f0 != local_c8)) {
    do {
      puVar2 = *(undefined8 **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != local_d8 || (local_78 != local_c8 || iStack_6c != iVar7));
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1473c12de(local_d8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_1473c12de(plVar1);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b05c8 FUN_1473b05c8 body=530 status=ok
// SIG undefined FUN_1473b05c8(void)

void FUN_1473b05c8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_188 [32];
  ulonglong *local_168;
  longlong local_158 [17];
  ulonglong local_d0 [17];
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x1a) == '\x01') {
    FUN_1473b0bf0(param_1,param_2);
    FUN_1473b07dc(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x200));
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x18) == '\x01') {
      FUN_1473b0a46(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x160));
    }
    cVar6 = FUN_1473b0b0c(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x200));
    FUN_1473b0bf0(param_1,param_2);
    if (cVar6 != '\0') {
      FUN_1473b0b52(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_2 + 0x88));
    }
  }
  if ((*(char *)(param_1 + 0x1f8) == '\x01') &&
     (lVar5 = *(longlong *)(param_1 + 0x88), *(int *)(lVar5 + 0x204) != 0)) {
    local_48 = 0;
    uVar1 = *(uint *)(lVar5 + 0x8c);
    if (uVar1 != 0) {
      iVar2 = *(int *)(lVar5 + 0xa0);
      iVar3 = *(int *)(lVar5 + 0xcc);
      iVar8 = 0;
      uVar7 = 0;
      do {
        if (iVar2 != iVar3) {
          lVar10 = *(longlong *)(lVar5 + 0xd8);
          if (*(longlong *)(lVar5 + 0xd8) == 0) {
            lVar10 = lVar5 + 0xd0;
          }
          iVar11 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar5 + 0xe0) - 1U & uVar7) * 4);
          if (iVar11 != -1) {
            do {
              lVar10 = *(longlong *)(lVar5 + 0x98) + (longlong)iVar11 * 0x10;
              if (*(uint *)(*(longlong *)(lVar5 + 0x98) + (longlong)iVar11 * 0x10) == uVar7)
              goto LAB_1473b068d;
              iVar11 = *(int *)(lVar10 + 8);
            } while (iVar11 != -1);
          }
        }
        lVar10 = 0;
LAB_1473b068d:
        lVar9 = (ulonglong)*(uint *)(lVar10 + 4) * 0x10;
        lVar10 = *(longlong *)(param_1 + 0xe8 + lVar9);
        if (lVar10 != 0) {
          uVar4 = *(uint *)(lVar9 + param_1 + 0xe8 + 8);
          local_158[iVar8] = lVar10;
          local_d0[local_48] = (ulonglong)uVar4;
          local_48 = local_48 + 1;
          iVar8 = local_48;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
      if (0 < iVar8) {
        local_168 = local_d0;
        (*DAT_14ca791d8)(*(undefined8 *)(param_2 + 0x88),0,iVar8,local_158);
      }
    }
    *(undefined1 *)(param_1 + 0x1f8) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b07dc FUN_1473b07dc body=616 status=ok
// SIG undefined FUN_1473b07dc(void)

void FUN_1473b07dc(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_10c;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_10c = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd58);
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_100 = param_1 + 0xf0;
  uVar5 = 0;
  local_118 = param_1;
  local_108 = param_3;
  local_f8 = param_2;
  do {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x478 + (uVar5 & 0xffffffff) * 8);
    if (lVar6 != 0) {
      plVar7 = local_c8 + uVar5 * 2;
      FUN_1473b5f9a(plVar7,*(undefined4 *)(lVar6 + 0x48));
      lVar2 = local_100;
      bVar11 = *(int *)(local_118 + 0x140 + uVar5 * 4) != 0;
      if (bVar11) {
        iVar1 = *(int *)(local_100 + 8 + uVar5 * 0x10);
        FUN_1473a8036(&local_e8);
        local_120 = *plVar7;
        local_128 = &local_e8;
        _Dst = (void *)FUN_1473a9066(*(undefined8 *)(local_f8 + 0x138),iVar1,local_10c,local_108);
        memcpy(_Dst,*(void **)(lVar2 + uVar5 * 0x10),(longlong)iVar1);
        *(undefined4 *)(local_118 + 0x154 + uVar5 * 4) = 0;
      }
      uVar8 = (uint)bVar11;
      param_1 = local_118;
      if ((uint)bVar11 < *(uint *)(lVar6 + 0x48)) {
        uVar10 = (ulonglong)bVar11 << 6 | 0x30;
        local_f0 = uVar5 * 9;
        do {
          lVar2 = *plVar7;
          lVar9 = (longlong)(int)uVar8;
          lVar3 = *(longlong *)(*(longlong *)(local_118 + 0xc0) + local_f0 * 8);
          local_e8 = 0x3b9e8321;
          local_e4 = 0;
          uStack_dc = 0;
          uStack_d8 = (undefined4)**(undefined8 **)(lVar3 + uVar10);
          uStack_d4 = (undefined4)((ulonglong)**(undefined8 **)(lVar3 + uVar10) >> 0x20);
          lVar4 = (*DAT_14ca79240)(**(undefined8 **)(local_118 + 8),&local_e8);
          *(undefined4 *)(lVar2 + lVar9 * 0x28) = 0x3b9f9c63;
          *(longlong *)(lVar2 + 0x10 + lVar9 * 0x28) =
               lVar4 + *(longlong *)(*(longlong *)(lVar3 + uVar10) + 8);
          *(undefined8 *)(lVar2 + 0x18 + lVar9 * 0x28) =
               *(undefined8 *)(*(longlong *)(lVar3 + uVar10) + 0x10);
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + 0x40;
          param_1 = local_118;
        } while (uVar8 < *(uint *)(lVar6 + 0x48));
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 5);
  FUN_1473a266c(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x6b0),local_108,0,local_c8);
  lVar6 = 0x60;
  do {
    if (*(longlong *)((longlong)&uStack_d8 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b0a46 FUN_1473b0a46 body=197 status=ok
// SIG undefined FUN_1473b0a46(void)

void FUN_1473b0a46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x480);
  if ((lVar1 != 0) && (iVar4 = *(int *)(lVar1 + 0x40), 0 < iVar4)) {
    lVar7 = 0;
    do {
      bVar3 = *(byte *)(*(longlong *)(lVar1 + 0x38) + 1 + lVar7 * 2);
      if (bVar3 - 1 < 8) {
        plVar5 = (longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)bVar3 * 8 + -8);
        uVar6 = 5;
LAB_1473b0ab9:
        lVar2 = *(longlong *)(param_1 + 0x90);
        bVar3 = FUN_1473c136c(*(longlong *)(lVar2 + 0xc0) + 0x48,
                              *(undefined1 *)(*(longlong *)(lVar1 + 0x38) + lVar7 * 2),
                              *plVar5 + 0x10,uVar6);
        *(byte *)(lVar2 + 0xb8) = *(byte *)(lVar2 + 0xb8) | bVar3;
        *(byte *)(lVar2 + 0xe8) = *(byte *)(lVar2 + 0xe8) | bVar3;
        iVar4 = *(int *)(lVar1 + 0x40);
      }
      else if (bVar3 == 0) {
        uVar6 = 4;
        plVar5 = (longlong *)(param_2 + 0x20);
        goto LAB_1473b0ab9;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  return;
}



// FUNCTION 1473b0b0c FUN_1473b0b0c body=70 status=ok
// SIG undefined FUN_1473b0b0c(void)

void FUN_1473b0b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_14ca793a0 + 0xb0))();
  if (0 < iVar1) {
    FUN_1473b6f02();
    return;
  }
  FUN_1473b722e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1473b0b52 FUN_1473b0b52 body=158 status=ok
// SIG undefined FUN_1473b0b52(void)

void FUN_1473b0b52(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x318);
  if (*(char *)(lVar3 + 0x11) == '\x01') {
    puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x6b0) + 0x4d0);
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + 0x198);
  }
  if (*(char *)(param_1 + 0xe9) == '\0') {
    uVar2 = *(uint *)(param_1 + 0xa0);
    if ((ulonglong)uVar2 != 0) {
      iVar4 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
        }
      }
      uVar1 = (ulonglong)uVar2 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      (*DAT_14ca793b0)(param_2,0,*puVar5,iVar4,(int)lVar3 - iVar4,
                       (ulonglong)(uint)(iVar4 * 8) + *(longlong *)(param_1 + 0x90),
                       *(undefined4 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa8));
    }
  }
  return;
}



// FUNCTION 1473b0bf0 FUN_1473b0bf0 body=639 status=ok
// SIG undefined FUN_1473b0bf0(void)

void FUN_1473b0bf0(longlong param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined1 *puVar4;
  longlong lVar5;
  void *pvVar6;
  byte bVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar7 = *(byte *)((longlong)param_2 + 0x75);
  iVar8 = *(int *)(param_1 + 0x40);
  if (((bVar7 & 4) == 0) || (iVar8 != *(int *)((longlong)param_2 + 0x38))) {
LAB_1473b0d14:
    local_58 = (undefined1 *)0x0;
    local_50 = iVar8;
    if (iVar8 == 0) {
      local_4c = 2;
      iVar8 = 0;
    }
    else {
      pvVar6 = *(void **)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x38) == (void *)0x0) {
        pvVar6 = (void *)(param_1 + 8);
      }
      FUN_1473c6f5a(local_88,iVar8,0);
      puVar4 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar4 = local_88;
      }
      memcpy(puVar4,pvVar6,(longlong)iVar8 * 0x18);
      lVar2 = (longlong)local_50;
      puVar4 = local_88;
      if (local_58 != (undefined1 *)0x0) {
        puVar4 = local_58;
      }
      iVar8 = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        do {
          *(float *)(puVar4 + lVar5 + 4) =
               *(float *)(puVar4 + lVar5 + 4) + *(float *)(puVar4 + lVar5 + 0xc);
          *(float *)(puVar4 + lVar5 + 0xc) = -*(float *)(puVar4 + lVar5 + 0xc);
          lVar5 = lVar5 + 0x18;
          iVar8 = local_50;
        } while (lVar2 * 0x18 != lVar5);
      }
    }
    puVar4 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar4 = local_88;
    }
    (*DAT_14ca791e0)(*(undefined8 *)((longlong)param_2 + 0x88),0,iVar8,puVar4);
    FUN_1473b0e70(param_2,(void *)(param_1 + 8));
    bVar7 = *(byte *)((longlong)param_2 + 0x75) | 4;
    *(byte *)((longlong)param_2 + 0x75) = bVar7;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      bVar7 = *(byte *)((longlong)param_2 + 0x75);
    }
  }
  else {
    pvVar6 = (void *)(param_1 + 8);
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      pvVar6 = *(void **)(param_1 + 0x38);
    }
    pvVar3 = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      pvVar3 = param_2;
    }
    iVar1 = memcmp(pvVar3,pvVar6,(longlong)iVar8 * 0x18);
    if (iVar1 != 0) goto LAB_1473b0d14;
  }
  iVar8 = *(int *)(param_1 + 0x70);
  if (((bVar7 & 8) == 0) || (iVar8 != *(int *)((longlong)param_2 + 0x68))) {
LAB_1473b0d90:
    lVar2 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar2 = param_1 + 0x48;
    }
    (*DAT_14ca791e8)(*(undefined8 *)((longlong)param_2 + 0x88),0,iVar8,lVar2);
    FUN_1473b0eda((longlong)param_2 + 0x40,param_1 + 0x48);
    bVar7 = *(byte *)((longlong)param_2 + 0x75) | 8;
    *(byte *)((longlong)param_2 + 0x75) = bVar7;
  }
  else {
    pvVar6 = (void *)(param_1 + 0x48);
    if (*(void **)(param_1 + 0x68) != (void *)0x0) {
      pvVar6 = *(void **)(param_1 + 0x68);
    }
    pvVar3 = (void *)((longlong)param_2 + 0x40);
    if (*(void **)((longlong)param_2 + 0x60) != (void *)0x0) {
      pvVar3 = *(void **)((longlong)param_2 + 0x60);
    }
    iVar1 = memcmp(pvVar3,pvVar6,(longlong)iVar8 << 4);
    if (iVar1 != 0) goto LAB_1473b0d90;
  }
  if ((bVar7 & 0x10) == 0) {
    iVar8 = *(int *)(param_1 + 0x7c);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x7c);
    if (*(int *)((longlong)param_2 + 0x70) == iVar8) goto LAB_1473b0cd8;
  }
  (*DAT_14ca791f0)(*(undefined8 *)((longlong)param_2 + 0x88),3,iVar8);
  *(undefined4 *)((longlong)param_2 + 0x70) = *(undefined4 *)(param_1 + 0x7c);
  bVar7 = *(byte *)((longlong)param_2 + 0x75) | 0x10;
LAB_1473b0cd8:
  *(byte *)((longlong)param_2 + 0x75) = bVar7 & 0xfe;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b0e70 FUN_1473b0e70 body=105 status=ok
// SIG undefined FUN_1473b0e70(void)

void * FUN_1473b0e70(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x38);
    *(int *)((longlong)param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
    }
    else {
      FUN_1473c6f5a(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x30);
        if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1473b0eda FUN_1473b0eda body=104 status=ok
// SIG undefined FUN_1473b0eda(void)

void * FUN_1473b0eda(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 2;
    }
    else {
      FUN_1473c6fd0(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1473b0f42 FUN_1473b0f42 body=103 status=ok
// SIG undefined FUN_1473b0f42(void)

void FUN_1473b0f42(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  FUN_1473afcc2(uVar1,*(undefined8 *)(lVar2 + 0x78),0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473b0faa FUN_1473b0faa body=103 status=ok
// SIG undefined FUN_1473b0faa(void)

void FUN_1473b0faa(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x200) + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  FUN_1473afeb0(uVar1,*(undefined8 *)(lVar2 + 0x78),0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1473b1012 FUN_1473b1012 body=116 status=ok
// SIG undefined FUN_1473b1012(void)

undefined8 * FUN_1473b1012(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  uVar2 = FUN_14001cc68(0x120,0x10);
  FUN_1473b1516(uVar2,param_2,0x80,&DAT_14a35f1b0);
  iVar1 = *(int *)(param_1 + 2);
  *(uint *)(param_1 + 2) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar1 + 1U) {
    FUN_1473c737a(param_1 + 1,iVar1);
  }
  *(undefined8 *)(param_1[1] + (longlong)iVar1 * 8) = uVar2;
  return param_1;
}



// FUNCTION 1473b1086 FUN_1473b1086 body=74 status=ok
// SIG undefined FUN_1473b1086(void)

void FUN_1473b1086(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_1431b1aa6(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1473c7035(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473b10d0 FUN_1473b10d0 body=163 status=ok
// SIG undefined FUN_1473b10d0(void)

void FUN_1473b10d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (*DAT_14ca791c8)(**(undefined8 **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),0);
  if (iVar1 != 0) {
    FUN_1431b4552(iVar1,
                  "VulkanRHI::vkResetDescriptorPool(Device->GetInstanceHandle(), DescriptorPool, 0)"
                  ,".\\Runtime/VulkanRHI/Private/VulkanPendingState.cpp",0x297);
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    FUN_1473c7f8c(param_1 + 0x50);
    FUN_1473c80d0(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    FUN_1473c8200(param_1 + 0xa0);
    FUN_1473c8344(param_1 + 0xa0);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  return;
}



// FUNCTION 1473b1174 FUN_1473b1174 body=109 status=ok
// SIG undefined FUN_1473b1174(void)

undefined8 FUN_1473b1174(longlong param_1,undefined4 *param_2,void *param_3)

{
  int iVar1;
  ulonglong uVar2;
  void *_Src;
  
  iVar1 = FUN_1473c7460((longlong *)(param_1 + 0x50),*param_2,param_2);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = (longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x50);
  }
  _Src = (void *)(uVar2 + 0x18);
  if (uVar2 == 0) {
    _Src = (void *)0x0;
  }
  if (_Src != (void *)0x0) {
    memcpy(param_3,_Src,(longlong)*(int *)((longlong)_Src + 0x30) << 3);
    uVar2 = (ulonglong)DAT_14c7590b0;
    *(uint *)(param_1 + 0xf0) = DAT_14c7590b0;
  }
  return CONCAT71((int7)(uVar2 >> 8),_Src != (void *)0x0);
}



// FUNCTION 1473b11e2 FUN_1473b11e2 body=818 status=ok
// SIG undefined FUN_1473b11e2(void)

undefined8
FUN_1473b11e2(int *param_1,undefined4 *param_2,longlong param_3,longlong *param_4,void *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 **local_b8;
  undefined4 *local_b0;
  undefined8 *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98 [6];
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_68 = (ulonglong)*(uint *)(param_4 + 1);
  local_e8 = param_3;
  local_e0 = param_2;
  if (0 < (int)*(uint *)(param_4 + 1)) {
    plVar10 = (longlong *)(param_1 + 0x28);
    lVar9 = 0;
    local_f0 = plVar10;
    do {
      if (*(int *)(*param_4 + 0x18 + lVar9 * 0x48) == 0) {
        local_98[lVar9] = 0;
      }
      else {
        plVar1 = (longlong *)(*param_4 + lVar9 * 0x48);
        puVar4 = (undefined4 *)FUN_1473b15d2(plVar1);
        iVar3 = FUN_1473c74ea(plVar10,*puVar4,puVar4);
        if ((iVar3 == -1) ||
           (lVar2 = *plVar10 + (longlong)iVar3 * 0x28, puVar5 = (undefined8 *)(lVar2 + 0x18),
           puVar5 == (undefined8 *)0x0 || lVar2 == 0)) {
          if (param_1[0x2a] - param_1[0x35] != *param_1) {
            puVar5 = local_98 + lVar9;
            local_b0 = *(undefined4 **)(*(longlong *)(local_e8 + 0x138) + lVar9 * 8);
            local_d8 = 0x22;
            local_d4 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_c8 = (undefined4)*(undefined8 *)(param_1 + 6);
            uStack_c4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
            uStack_c0 = 1;
            local_b8 = &local_b0;
            iVar3 = (*DAT_14ca791d0)(**(undefined8 **)(param_1 + 2),&local_d8,puVar5);
            if (iVar3 == 0) {
              puVar4 = (undefined4 *)FUN_1473b15d2(plVar1);
              uStack_d0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0;
              uStack_c4 = 0;
              local_d8 = *puVar4;
              FUN_1473c7574(puVar4,&local_d8);
              local_b0 = &local_d8;
              local_a8 = puVar5;
              FUN_1473c7604(local_f0,local_9c,&local_b0);
              plVar10 = (longlong *)CONCAT44(uStack_c4,uStack_c8);
              if (plVar10 != (longlong *)0x0) {
                if (*plVar10 != 0) {
                  FUN_1400020a8();
                }
                FUN_1400020a8(plVar10);
              }
              lVar2 = local_e8;
              if ((int)plVar1[3] != 0) {
                uVar6 = *puVar5;
                lVar7 = 0x10;
                uVar8 = 0;
                do {
                  *(undefined8 *)(*plVar1 + lVar7) = uVar6;
                  uVar8 = uVar8 + 1;
                  lVar7 = lVar7 + 0x40;
                } while (uVar8 < *(uint *)(plVar1 + 3));
              }
              uVar8 = 0;
              do {
                iVar3 = FUN_1473af3b4(lVar2,uVar8 & 0xffffffff);
                param_1[uVar8 + 0x3d] = param_1[uVar8 + 0x3d] + iVar3;
                uVar8 = uVar8 + 1;
              } while (uVar8 != 0xb);
              local_f8 = 0;
              (*DAT_14ca791f8)(**(undefined8 **)(param_1 + 2),(int)plVar1[3],*plVar1,0);
              plVar10 = local_f0;
              goto LAB_1473b1298;
            }
          }
          uVar6 = 0;
          goto LAB_1473b144d;
        }
        local_98[lVar9] = *puVar5;
      }
LAB_1473b1298:
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)local_68);
  }
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d8 = *local_e0;
  FUN_1473c7574(local_e0,&local_d8);
  local_a8 = local_98;
  local_b0 = &local_d8;
  FUN_1473c7abc(param_1 + 0x14,local_9c);
  plVar10 = (longlong *)CONCAT44(uStack_c4,uStack_c8);
  if (plVar10 != (longlong *)0x0) {
    if (*plVar10 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar10);
  }
  memcpy(param_5,local_98,(longlong)(int)local_68 << 3);
  iVar3 = DAT_14c7590b0;
  param_1[0x3c] = DAT_14c7590b0;
  uVar6 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
LAB_1473b144d:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1473b1516 FUN_1473b1516 body=187 status=ok
// SIG undefined FUN_1473b1516(void)

undefined4 * FUN_1473b1516(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1._4_12_ = in_XMM0._4_12_;
  auVar1._0_4_ = (float)param_3 * 16.0;
  auVar1 = blendps(auVar1,ZEXT816(0),0xe);
  auVar1 = roundps(auVar1,auVar1,1);
  *param_1 = (int)(longlong)auVar1._0_4_;
  FUN_1431a15ce(param_1 + 2);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0xffffffff00000080;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x33) = 0xffffffff00000080;
  param_1[0x35] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 1473b15d2 FUN_1473b15d2 body=142 status=ok
// SIG undefined FUN_1473b15d2(void)

longlong FUN_1473b15d2(longlong param_1)

{
  void *_Src;
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar3 = *(int *)(param_1 + 0x18) * 0xc + 0xc;
    _Src = *(void **)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x38) == 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 **)(param_1 + 0x38) = puVar2;
      *(undefined8 **)(param_1 + 0x30) = puVar2;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x30);
    }
    FUN_144a5eaa2(puVar2,uVar3,1);
    memcpy((void *)**(undefined8 **)(param_1 + 0x30),_Src,(ulonglong)uVar3);
    uVar1 = (*(code *)PTR_FUN_14c75b148)(_Src,uVar3,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return param_1 + 0x28;
}



// FUNCTION 1473b1660 FUN_1473b1660 body=1535 status=ok
// SIG undefined FUN_1473b1660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1473b1660(undefined8 *param_1,ulonglong param_2,char param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
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
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  int iVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  undefined1 auVar25 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  longlong lVar37;
  undefined1 auVar38 [16];
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 local_c4 [4];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x11] == param_2) {
    if (param_3 == '\0') {
      uVar20 = 0;
      goto LAB_1473b1bea;
    }
  }
  else {
    param_1[0x11] = param_2;
    if (*(int *)(param_1 + 0x14) != *(int *)((longlong)param_1 + 0xcc)) {
      uVar18 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      puVar19 = param_1 + 0x1a;
      if ((undefined8 *)param_1[0x1b] != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)param_1[0x1b];
      }
      iVar22 = *(int *)((longlong)puVar19 +
                       (ulonglong)(*(int *)(param_1 + 0x1c) - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
      if (iVar22 != -1) {
        do {
          puVar1 = (ulonglong *)(param_1[0x13] + (longlong)iVar22 * 0x18);
          if (*puVar1 == param_2) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              param_1[0x12] = puVar1[1];
              goto LAB_1473b17c7;
            }
            break;
          }
          iVar22 = (int)puVar1[2];
        } while (iVar22 != -1);
      }
    }
    uVar20 = FUN_14001cc68(0x170,0x10);
    FUN_1431a1aa6(uVar20,*param_1,param_2);
    local_d0 = param_1 + 0x12;
    param_1[0x12] = uVar20;
    local_d8 = param_1 + 0x11;
    FUN_1473c8474(param_1 + 0x13,local_c4);
LAB_1473b17c7:
    *(uint *)(param_1 + 0xf) = (uint)*(byte *)(param_2 + 0x48);
  }
  lVar3 = param_1[0x12];
  *(undefined4 *)(lVar3 + 0x164) = *(undefined4 *)(lVar3 + 0x150);
  *(undefined8 *)(lVar3 + 0x154) = *(undefined8 *)(lVar3 + 0x140);
  *(undefined8 *)(lVar3 + 0x15c) = *(undefined8 *)(lVar3 + 0x148);
  auVar17 = _DAT_149931e80;
  puVar21 = (undefined1 *)0x0;
  if ((longlong)*(int *)(lVar3 + 200) != 0) {
    uVar2 = (longlong)*(int *)(lVar3 + 200) * 0x48 - 0x48;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar2;
    uVar24 = SUB164(auVar27 * ZEXT816(0xe38e38e38e38e38f),8);
    uVar26 = (undefined4)(uVar2 / 0x120000000);
    auVar28._0_8_ = CONCAT44(uVar26,uVar24);
    auVar28._8_4_ = uVar24;
    auVar28._12_4_ = uVar26;
    auVar25._0_8_ = auVar28._0_8_ >> 6;
    auVar25._8_8_ = auVar28._8_8_ >> 6;
    puVar21 = (undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0x479);
    uVar23 = 0;
    auVar27 = pmovsxbq(in_XMM1,0xf0e);
    auVar28 = pmovsxbq(in_XMM2,0xd0c);
    auVar29 = pmovsxbq(in_XMM3,0xb0a);
    auVar30 = pmovsxbq(in_XMM4,0x908);
    auVar31 = pmovsxbq(in_XMM5,0x706);
    auVar32 = pmovsxbq(unaff_XMM6,0x504);
    auVar33 = pmovsxbq(unaff_XMM7,0x302);
    auVar34 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar35._8_4_ = (int)uVar23;
      auVar35._0_8_ = uVar23;
      auVar35._12_4_ = (int)(uVar23 >> 0x20);
      auVar38 = auVar25 | auVar17;
      auVar40 = (auVar35 | auVar34) ^ auVar17;
      lVar37 = auVar38._0_8_;
      auVar41._0_8_ = -(ulonglong)(lVar37 < auVar40._0_8_);
      lVar39 = auVar38._8_8_;
      auVar41._8_8_ = -(ulonglong)(lVar39 < auVar40._8_8_);
      auVar48 = pshuflw(unaff_XMM14,auVar41,0xe8);
      auVar40._8_4_ = 0xffffffff;
      auVar40._0_8_ = 0xffffffffffffffff;
      auVar40._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar48 ^ auVar40,auVar48 ^ auVar40);
      if ((auVar40._0_4_ & 1) != 0) {
        puVar21[-0x438] = 0;
      }
      auVar41 = packssdw(auVar41,auVar41);
      auVar48._8_4_ = 0xffffffff;
      auVar48._0_8_ = 0xffffffffffffffff;
      auVar48._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar48,auVar41 ^ auVar48);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[1] & 1) != 0) {
        puVar21[-0x3f0] = 0;
      }
      auVar41 = (auVar35 | auVar33) ^ auVar17;
      auVar42._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
      auVar42._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
      auVar40 = packssdw(auVar40,auVar42);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar4,auVar40 ^ auVar4);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[2] & 1) != 0) {
        puVar21[-0x3a8] = 0;
      }
      auVar41 = pshufhw(auVar42,auVar42,0x84);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar5,auVar41 ^ auVar5);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[3] & 1) != 0) {
        puVar21[-0x360] = 0;
      }
      auVar41 = (auVar35 | auVar32) ^ auVar17;
      auVar43._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
      auVar43._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
      auVar40 = pshuflw(auVar40,auVar43,0xe8);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar6,auVar40 ^ auVar6);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[4] & 1) != 0) {
        puVar21[-0x318] = 0;
      }
      auVar41 = packssdw(auVar43,auVar43);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar7,auVar41 ^ auVar7);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[5] & 1) != 0) {
        puVar21[-0x2d0] = 0;
      }
      auVar41 = (auVar35 | auVar31) ^ auVar17;
      auVar44._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
      auVar44._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
      auVar40 = packssdw(auVar40,auVar44);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar8,auVar40 ^ auVar8);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[6] & 1) != 0) {
        puVar21[-0x288] = 0;
      }
      auVar41 = pshufhw(auVar44,auVar44,0x84);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar9,auVar41 ^ auVar9);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[7] & 1) != 0) {
        puVar21[-0x240] = 0;
      }
      auVar41 = (auVar35 | auVar30) ^ auVar17;
      auVar45._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
      auVar45._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
      auVar40 = pshuflw(auVar40,auVar45,0xe8);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar10,auVar40 ^ auVar10);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[8] & 1) != 0) {
        puVar21[-0x1f8] = 0;
      }
      auVar41 = packssdw(auVar45,auVar45);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar11,auVar41 ^ auVar11);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[9] & 1) != 0) {
        puVar21[-0x1b0] = 0;
      }
      auVar41 = (auVar35 | auVar29) ^ auVar17;
      auVar46._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
      auVar46._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
      auVar40 = packssdw(auVar40,auVar46);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar12,auVar40 ^ auVar12);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[10] & 1) != 0) {
        puVar21[-0x168] = 0;
      }
      auVar41 = pshufhw(auVar46,auVar46,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar41 = packssdw(auVar41 ^ auVar13,auVar41 ^ auVar13);
      auVar41 = packsswb(auVar41,auVar41);
      if ((auVar41[0xb] & 1) != 0) {
        puVar21[-0x120] = 0;
      }
      auVar41 = (auVar35 | auVar28) ^ auVar17;
      auVar47._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
      auVar47._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
      auVar40 = pshuflw(auVar40,auVar47,0xe8);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar14,auVar40 ^ auVar14);
      unaff_XMM14 = packsswb(auVar40,auVar40);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar21[-0xd8] = 0;
      }
      auVar40 = packssdw(auVar47,auVar47);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar15,auVar40 ^ auVar15);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[0xd] & 1) != 0) {
        puVar21[-0x90] = 0;
      }
      auVar40 = (auVar35 | auVar27) ^ auVar17;
      auVar36._0_8_ = -(ulonglong)(lVar37 < auVar40._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar39 < auVar40._8_8_);
      auVar40 = packssdw(auVar38,auVar36);
      auVar38._8_4_ = 0xffffffff;
      auVar38._0_8_ = 0xffffffffffffffff;
      auVar38._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar38,auVar40 ^ auVar38);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[0xe] & 1) != 0) {
        puVar21[-0x48] = 0;
      }
      auVar40 = pshufhw(auVar36,auVar36,0x84);
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = 0xffffffffffffffff;
      auVar16._12_4_ = 0xffffffff;
      auVar40 = packssdw(auVar40 ^ auVar16,auVar40 ^ auVar16);
      auVar40 = packsswb(auVar40,auVar40);
      if ((auVar40[0xf] & 1) != 0) {
        *puVar21 = 0;
      }
      uVar23 = uVar23 + 0x10;
      puVar21 = puVar21 + 0x480;
    } while ((uVar2 / 0x48 + 0x10 & 0xfffffffffffffff0) != uVar23);
  }
  *(undefined1 *)(lVar3 + 0xb8) = 1;
  uVar20 = CONCAT71((int7)((ulonglong)puVar21 >> 8),1);
LAB_1473b1bea:
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b1c60 FUN_1473b1c60 body=100 status=ok
// SIG undefined FUN_1473b1c60(void)

void FUN_1473b1c60(longlong param_1)

{
  FUN_1473c13de(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1473c141b(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473b1cc4 FUN_1473b1cc4 body=216 status=ok
// SIG undefined FUN_1473b1cc4(void)

void FUN_1473b1cc4(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = 0;
  do {
    if (*(longlong *)(param_3 + lVar4) != 0) {
      local_48 = *(undefined4 *)(*(longlong *)(param_1 + 0x318) + 0x138);
      FUN_1473b1d9e(*(longlong *)(param_3 + lVar4),&local_40,param_1 + 0x328);
      ppuVar2 = (undefined8 **)(param_2 + lVar4);
      if (ppuVar2 != &local_40) {
        puVar3 = *ppuVar2;
        *ppuVar2 = local_40;
        local_40 = (undefined8 *)0x0;
        if (puVar3 == (undefined8 *)0x0) goto LAB_1473b1d01;
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      if (local_40 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_40 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_40)(local_40,1);
        }
      }
    }
LAB_1473b1d01:
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x28) {
      if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1473b1d9e FUN_1473b1d9e body=252 status=ok
// SIG undefined FUN_1473b1d9e(void)

longlong *
FUN_1473b1d9e(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  cVar2 = FUN_1473d2052(param_1,param_3);
  if (cVar2 != '\0') {
    param_5 = FUN_144a78877(param_5,1);
  }
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar3 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd0);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xd8) - 1U & param_5) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_5) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            lVar3 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
            goto LAB_1473b1e0a;
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  FUN_1473d2064(param_1,param_2,param_3,param_4,param_5);
LAB_1473b1e0a:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  return param_2;
}



// FUNCTION 1473b1e9a FUN_1473b1e9a body=654 status=ok
// SIG undefined FUN_1473b1e9a(void)

undefined8 * FUN_1473b1e9a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 8));
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x14));
  param_1[0x15] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x16));
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x24),4000);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3d),4000);
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4c),4000);
  param_1[0x51] = &PTR_FUN_14a3694e0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x61) = 1;
  piVar2 = DAT_14ca783d8;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar5 + 0xc60) == 0x40000002) {
    *(bool *)(param_1 + 0x61) = *DAT_14ca783d8 != 0;
    uVar4 = 0;
    lVar5 = DAT_14ca78420;
  }
  else {
    bVar3 = FUN_144a61b4f();
    iVar1 = *(int *)(lVar5 + 0xc60);
    *(bool *)(param_1 + 0x61) = piVar2[bVar3 ^ 1] != 0;
    lVar5 = DAT_14ca78420;
    if (iVar1 == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
  }
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(lVar5 + uVar4 * 4);
  return param_1;
}



// FUNCTION 1473b2128 FUN_1473b2128 body=1061 status=ok
// SIG undefined FUN_1473b2128(void)

void FUN_1473b2128(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[6] != 0) {
    FUN_14480f766(&DAT_14ca9f2a8);
  }
  if (param_1[7] != 0) {
    FUN_14480f766(&DAT_14ca9f2f0);
  }
  FUN_1431a232c(param_1);
  plVar1 = param_1 + 0x29;
  puVar2 = param_1 + 0x2b;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = puVar2;
  if (*(int *)(param_1 + 0x2e) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x2e);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar7) || (local_58 != puVar2)) {
    do {
      puVar4 = *(undefined8 **)(*local_88 + 0x130 + (longlong)iStack_6c * 0x140);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != puVar2 || iStack_6c != iVar7));
  }
  plVar3 = param_1 + 0x33;
  puVar2 = param_1 + 0x35;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar7 = 0;
  local_58 = puVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x38);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar3;
  if ((iStack_4c != iVar7) || (local_58 != puVar2)) {
    do {
      (*DAT_14ca79200)(*(undefined8 *)*param_1,
                       *(undefined8 *)(*local_88 + 0x18 + (longlong)iStack_6c * 0x30),0);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar3 || (local_78 != puVar2 || iStack_6c != iVar7));
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  (*DAT_14ca79208)(*(undefined8 *)*param_1,param_1[0x13],0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x14));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    (*DAT_14ca79208)(*(undefined8 *)*param_1,param_1[0x15],0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x16));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c1446(param_1 + 0x57);
  ppuVar5 = &PTR_FUN_14a3694e0;
  param_1[0x51] = &PTR_FUN_14a3694e0;
  lVar6 = param_1[0x52];
  if (lVar6 != 0) {
    do {
      lVar6 = *(longlong *)(lVar6 + 8);
      FUN_1400020a8();
      param_1[0x52] = lVar6;
    } while (lVar6 != 0);
    ppuVar5 = (undefined **)param_1[0x51];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  (*(code *)ppuVar5[1])(param_1 + 0x51,0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c14d4(param_1 + 0x42);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c1656(plVar3);
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c17c8(plVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1473c1960(param_1 + 9);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b254e FUN_1473b254e body=223 status=ok
// SIG undefined FUN_1473b254e(void)

undefined8 FUN_1473b254e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a369560;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a3694f0;
  local_30[3] = param_2;
  local_30[4] = FUN_1431a2f0c;
  FUN_1473c8e46(&DAT_14ca9f2a8,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b262e FUN_1473b262e body=223 status=ok
// SIG undefined FUN_1473b262e(void)

undefined8 FUN_1473b262e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14a369640;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a3695d0;
  local_30[3] = param_2;
  local_30[4] = FUN_1431a364a;
  FUN_1473c90de(&DAT_14ca9f2f0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b270e FUN_1473b270e body=337 status=ok
// SIG undefined FUN_1473b270e(void)

void FUN_1473b270e(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar7) {
    FUN_1473c936c(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar5 = iStack_5c;
      lVar6 = *local_78;
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1473c93cc(param_2,iVar7);
      }
      lVar6 = (longlong)iVar5 * 0x20 + lVar6;
      uVar2 = *(undefined4 *)(lVar6 + 0xc);
      uVar3 = *(undefined4 *)(lVar6 + 0x10);
      uVar4 = *(undefined4 *)(lVar6 + 0x14);
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar7 * 0x10);
      *puVar1 = *(undefined4 *)(lVar6 + 8);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b2862 FUN_1473b2862 body=173 status=ok
// SIG undefined FUN_1473b2862(void)

void FUN_1473b2862(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1431a5f02(param_2,param_1 + 2);
  return;
}



// FUNCTION 1473b290f FUN_1473b290f body=525 status=ok
// SIG undefined FUN_1473b290f(void)

longlong * FUN_1473b290f(longlong *param_1,byte *param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,1);
  }
  else {
    param_2[2] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,1);
  }
  else {
    param_2[3] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,1);
  }
  else {
    param_2[4] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,1);
  }
  else {
    param_2[5] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,1);
  }
  else {
    param_2[6] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar2 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,1);
  }
  else {
    param_2[7] = *pbVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b2b1d FUN_1473b2b1d body=207 status=ok
// SIG undefined FUN_1473b2b1d(void)

longlong * FUN_1473b2b1d(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 5),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 1473b2bec FUN_1473b2bec body=248 status=ok
// SIG undefined FUN_1473b2bec(void)

longlong * FUN_1473b2bec(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = (undefined2 *)((longlong)param_2 + 6);
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 1473b2ce4 FUN_1473b2ce4 body=324 status=ok
// SIG undefined FUN_1473b2ce4(void)

longlong * FUN_1473b2ce4(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1473b2e28 FUN_1473b2e28 body=269 status=ok
// SIG undefined FUN_1473b2e28(void)

longlong * FUN_1473b2e28(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = (undefined4 *)(param_2 + 8);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1473b2f35 FUN_1473b2f35 body=1390 status=ok
// SIG undefined FUN_1473b2f35(void)

longlong * FUN_1473b2f35(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)(byte)param_2[1];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[1] = local_24 != 0;
  }
  else {
    param_2[1] = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)(byte)param_2[2];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[2] = local_24 != 0;
  }
  else {
    param_2[2] = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)(byte)param_2[4];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[4] = local_24 != 0;
  }
  else {
    param_2[4] = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)(byte)param_2[3];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[3] = local_24 != 0;
  }
  else {
    param_2[3] = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,1);
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,1);
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,1);
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,1);
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xc,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x10,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x14,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x18,1);
  }
  else {
    param_2[0x18] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x19,1);
  }
  else {
    param_2[0x19] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1a,1);
  }
  else {
    param_2[0x1a] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1b,1);
  }
  else {
    param_2[0x1b] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x1c,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1c) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x20,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = (undefined4 *)(param_2 + 0x24);
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
    }
    else {
      FUN_14572512c(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b34a4 FUN_1473b34a4 body=170 status=ok
// SIG undefined FUN_1473b34a4(void)

longlong * FUN_1473b34a4(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = (undefined8 *)(param_2 + 2);
  puVar2 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,8);
    }
    else {
      thunk_FUN_146821949(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1473b354e FUN_1473b354e body=84 status=ok
// SIG undefined FUN_1473b354e(void)

longlong * FUN_1473b354e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1473b35a2 FUN_1473b35a2 body=560 status=ok
// SIG undefined FUN_1473b35a2(void)

longlong * FUN_1473b35a2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 5),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 6),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 7),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 7) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 9),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 9) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar3 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *(undefined8 *)(param_2 + 4) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar4 = (undefined8 *)(param_2 + 6);
  puVar3 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar4,8);
    }
    else {
      thunk_FUN_146821949(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1473b37d2 FUN_1473b37d2 body=172 status=ok
// SIG undefined FUN_1473b37d2(void)

longlong * FUN_1473b37d2(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 1473b387e FUN_1473b387e body=471 status=ok
// SIG undefined FUN_1473b387e(void)

void FUN_1473b387e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x379);
  *(bool *)(param_1 + 0x6a) = *(char *)(param_2 + 0x37b) != '\0';
  *(bool *)(param_1 + 0x6b) = *(char *)(param_2 + 0x37c) != '\0';
  *(bool *)(param_1 + 0x6c) = *(char *)(param_2 + 0x37d) != '\0';
  *(bool *)(param_1 + 0x6d) = *(char *)(param_2 + 0x37e) != '\0';
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x380);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 900);
  *(double *)(param_1 + 0x78) = (double)*(uint *)(param_2 + 0x398);
  *(double *)(param_1 + 0x80) = (double)*(uint *)(param_2 + 0x39c);
  *(double *)(param_1 + 0x88) = (double)*(uint *)(param_2 + 0x3a0);
  lVar6 = 0;
  do {
    puVar4 = (undefined4 *)FUN_1473c19ee(param_1);
    *puVar4 = *(undefined4 *)(param_2 + lVar6 * 8);
    *(longlong *)(puVar4 + 2) = (longlong)*(int *)(param_2 + 4 + lVar6 * 8);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 8);
  lVar6 = 0;
  do {
    puVar4 = (undefined4 *)FUN_1473c19ee(param_1 + 0x10);
    *puVar4 = *(undefined4 *)(param_2 + 0x68 + lVar6 * 8);
    *(longlong *)(puVar4 + 2) = (longlong)*(int *)(param_2 + 0x6c + lVar6 * 8);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x28) = (longlong)*(int *)(param_2 + 0x44);
  *(longlong *)(param_1 + 0x30) = (longlong)*(int *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x60);
  *(longlong *)(param_1 + 0x40) = (longlong)*(int *)(param_2 + 100);
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar2 + 0x13;
  if ((uint)(*(int *)(param_1 + 0x54) - iVar2) < 0x13) {
    FUN_1473c9452(plVar1);
  }
  lVar6 = 0;
  memset((void *)((longlong)iVar2 * 0x20 + *plVar1),0,0x260);
  piVar5 = (int *)(param_2 + 0xd0);
  do {
    lVar3 = *plVar1;
    *(int *)(lVar3 + lVar6) = piVar5[-7];
    *(char *)(lVar3 + 4 + lVar6) = (char)piVar5[-8];
    *(char *)(lVar3 + 5 + lVar6) = (char)piVar5[-6];
    *(char *)(lVar3 + 6 + lVar6) = (char)piVar5[-5];
    *(char *)(lVar3 + 7 + lVar6) = (char)piVar5[-4];
    *(char *)(lVar3 + 8 + lVar6) = (char)piVar5[-3];
    *(char *)(lVar3 + 9 + lVar6) = (char)piVar5[-2];
    *(longlong *)(lVar3 + 0x10 + lVar6) = (longlong)piVar5[-1];
    *(longlong *)(lVar3 + 0x18 + lVar6) = (longlong)*piVar5;
    lVar6 = lVar6 + 0x20;
    piVar5 = piVar5 + 9;
  } while (lVar6 != 0x260);
  *(longlong *)(param_1 + 0x58) = (longlong)*(int *)(param_2 + 0x370);
  *(longlong *)(param_1 + 0x60) = (longlong)*(int *)(param_2 + 0x374);
  return;
}



// FUNCTION 1473b3a55 FUN_1473b3a55 body=501 status=ok
// SIG undefined FUN_1473b3a55(void)

longlong * FUN_1473b3a55(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x68),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x68) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x69),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x69) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x6e),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x6e) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_1473c94d8(param_1,param_2);
  FUN_1473c94d8(param_1,param_2 + 0x10);
  FUN_1473b34a4(param_1,param_2 + 0x20);
  FUN_1473b354e(param_1,param_2 + 0x30);
  FUN_1473b34a4(param_1,param_2 + 0x38);
  FUN_1473c96aa(param_1,param_2 + 0x48);
  FUN_1473b37d2(param_1,param_2 + 0x58);
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x6a),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x6a) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x6b),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x6b) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x6c),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x6c) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x70),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x70) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14480c34d(param_1,param_2 + 0x78);
  return param_1;
}



// FUNCTION 1473b3c4a FUN_1473b3c4a body=735 status=ok
// SIG undefined FUN_1473b3c4a(void)

longlong * FUN_1473b3c4a(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 1) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar4 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)((longlong)param_2 + 6),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 6) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1473c98b2(param_1,param_2 + 4);
  FUN_1473c9b28(param_1,param_2 + 8);
  FUN_1473c9fd8(param_1,param_2 + 0xc);
  FUN_1473ca24e(param_1,param_2 + 0x10);
  FUN_1473b2e28(param_1,param_2 + 0x14);
  FUN_1473b2f35(param_1,param_2 + 0x17);
  lVar7 = 0;
  do {
    puVar2 = (undefined8 *)((longlong)param_2 + lVar7 + 0x88);
    puVar5 = *(undefined8 **)param_1[1];
    if ((undefined8 *)((longlong *)param_1[1])[1] < puVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar2,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      *puVar2 = *puVar5;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    lVar7 = lVar7 + 8;
  } while (lVar7 != 0x28);
  FUN_1473b3a55(param_1,param_2 + 0x2e);
  local_29 = *(undefined1 *)((longlong)param_2 + 0x14a);
  local_2a = *(undefined1 *)((longlong)param_2 + 0x14b);
  puVar6 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar6 + 1;
  if ((undefined1 *)puVar6[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_29,1);
  }
  else {
    local_29 = *(undefined1 *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
  }
  puVar6 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar6 + 1;
  if ((undefined1 *)puVar6[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_2a,1);
  }
  else {
    local_2a = *(undefined1 *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x149),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x149) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b3f2a FUN_1473b3f2a body=170 status=ok
// SIG undefined FUN_1473b3f2a(void)

longlong * FUN_1473b3f2a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  param_2 = param_2 + 1;
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1473b3fd4 FUN_1473b3fd4 body=265 status=ok
// SIG undefined FUN_1473b3fd4(void)

undefined4 * FUN_1473b3fd4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [5];
  byte local_b0;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 **)(param_2 + 4) = puVar2;
  *(undefined8 **)(param_2 + 2) = puVar2;
  memset(local_d8,0,0x90);
  FUN_144869430(local_d8);
  local_48 = 0;
  local_d8[0] = &PTR_FUN_149e1e590;
  local_38 = 0;
  local_b0 = local_b0 | 4;
  local_40 = puVar2;
  FUN_1449c2eca(local_d8,0);
  local_d8[0] = &PTR_FUN_149e1e330;
  *(undefined4 *)(puVar2 + 1) = 0;
  if (*(int *)((longlong)puVar2 + 0xc) < 0) {
    FUN_144893a1c(puVar2,0);
  }
  FUN_1473b3c4a(local_d8,param_1);
  uVar1 = (*(code *)PTR_FUN_14c75b148)(*puVar2,*(undefined4 *)(puVar2 + 1),0);
  *param_2 = uVar1;
  FUN_144a7fc42(local_d8);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b40de FUN_1473b40de body=74 status=ok
// SIG undefined FUN_1473b40de(void)

longlong FUN_1473b40de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar1 + 1U) {
    FUN_1473ca55c(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar2 = param_1;
  }
  return lVar2 + (longlong)iVar1 * 0xc;
}



// FUNCTION 1473b4128 FUN_1473b4128 body=76 status=ok
// SIG undefined FUN_1473b4128(void)

longlong FUN_1473b4128(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x208);
  *(uint *)(param_1 + 0x208) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar1 + 1U) {
    FUN_1473ca67c(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar2 = param_1;
  }
  return (longlong)iVar1 * 0x10 + lVar2;
}



// FUNCTION 1473b4174 FUN_1473b4174 body=280 status=ok
// SIG undefined FUN_1473b4174(void)

longlong FUN_1473b4174(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  plVar1 = param_1 + 0x29;
  iVar2 = FUN_1473caa92(plVar1,*(undefined4 *)(param_2 + 0x120),param_2);
  if (iVar2 != -1) {
    if ((*plVar1 + (longlong)iVar2 * 0x140 != 0) &&
       (plVar3 = (longlong *)((longlong)iVar2 * 0x140 + *plVar1 + 0x130), plVar3 != (longlong *)0x0)
       ) {
      lVar4 = *plVar3;
      goto LAB_1473b41f0;
    }
  }
  lVar4 = FUN_14001cc68(0x1a0,0x10);
  FUN_1473d4ef4(lVar4,*param_1,param_3,param_4);
  local_60 = lVar4;
  FUN_1473b428e(lVar4 + 0x18,param_2);
  FUN_1473d4f80(lVar4,param_1 + 0x33);
  local_58 = param_2;
  local_50 = &local_60;
  FUN_1473cac4c(plVar1,local_44);
  lVar4 = local_60;
LAB_1473b41f0:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b428e FUN_1473b428e body=126 status=ok
// SIG undefined FUN_1473b428e(void)

void FUN_1473b428e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1473c1b0a(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  FUN_1473c1aaa(param_1 + 0x110,param_2 + 0x110);
  lVar2 = 0;
  do {
    FUN_1473c1dfe(param_1 + lVar2,param_2 + lVar2);
    uVar1 = *(undefined8 *)(param_2 + 0x16 + lVar2);
    *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
    *(undefined8 *)(param_1 + 0x16 + lVar2) = uVar1;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xc0);
  return;
}



// FUNCTION 1473b430c FUN_1473b430c body=1852 status=ok
// SIG undefined FUN_1473b430c(void)

void FUN_1473b430c(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_748 [32];
  undefined1 local_728;
  undefined8 *local_720;
  longlong local_718;
  longlong local_710;
  undefined8 *local_708;
  undefined4 local_700;
  longlong local_6f8;
  longlong lStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8;
  undefined1 local_6c4;
  byte local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined1 local_6b0;
  undefined1 local_6ac;
  undefined1 local_6a8;
  byte local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  longlong lStack_330;
  undefined8 local_328;
  longlong lStack_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 local_270;
  undefined1 local_268 [480];
  longlong local_88 [9];
  
  local_88[5] = DAT_14c707940 ^ (ulonglong)auStack_748;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[1] = 0;
  local_88[4] = 0;
  lVar9 = param_2[1] + 0xa0;
  if (param_2[1] == 0) {
    lVar9 = 0;
  }
  if (param_2[2] != 0) {
    local_88[1] = param_2[2] + 0xa0;
  }
  lVar7 = local_88[1];
  if (param_2[3] != 0) {
    local_88[3] = param_2[3] + 0xa0;
  }
  lVar17 = local_88[3];
  if (param_2[4] != 0) {
    local_88[4] = param_2[4] + 0xa0;
  }
  lVar8 = local_88[4];
  uVar19 = 0;
  if (param_2[5] != 0) {
    local_88[2] = param_2[5] + 0xa0;
  }
  lVar14 = local_88[2];
  local_318 = 0;
  local_310 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2dc = 0xffffffff00000080;
  local_2d4 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_28c = 0xffffffff00000080;
  local_284 = 0;
  local_278 = 0;
  local_270 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  lStack_330 = 0;
  local_328 = 0;
  lStack_320 = 0;
  local_720 = param_2;
  local_718 = param_3;
  local_710 = param_4;
  local_88[0] = lVar9;
  memset(local_268,0,0x1e0);
  local_6d8 = 0;
  uStack_6d0 = 0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6f8 = 0;
  lStack_6f0 = 0;
  if (lVar9 != 0) {
    FUN_1473db120(&local_348,*local_720,*(undefined4 *)(lVar9 + 0x54));
    local_6f8 = lVar9 + 0x18;
    uVar19 = (uint)*(byte *)(lVar9 + 0xe1);
  }
  lVar9 = local_710;
  if (lVar7 != 0) {
    lStack_6f0 = lVar7 + 0x18;
    uVar19 = uVar19 + *(byte *)(lVar7 + 0xe1);
  }
  if (lVar17 != 0) {
    uStack_6e0 = lVar17 + 0x18;
    uVar19 = uVar19 + *(byte *)(lVar17 + 0xe1);
  }
  if (lVar8 != 0) {
    local_6d8 = lVar8 + 0x18;
    uVar19 = uVar19 + *(byte *)(lVar8 + 0xe1);
  }
  if (lVar14 != 0) {
    local_6e8 = lVar14 + 0x18;
    uVar19 = uVar19 + *(byte *)(lVar14 + 0xe1);
  }
  local_708 = local_720 + 9;
  local_700 = 2;
  local_728 = uVar19 != 0;
  FUN_1473d54d0(local_718,*param_1,&local_6f8);
  *(undefined1 *)(lVar9 + 0x148) = *(undefined1 *)((longlong)local_720 + 0xc3);
  lVar7 = local_720[6];
  if (*(ushort *)(local_720 + 0x18) < 2) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined1 *)(lVar7 + 0x149);
  }
  *(undefined1 *)(lVar9 + 0x149) = uVar6;
  *(undefined2 *)(lVar9 + 4) = *(undefined2 *)(local_720 + 0x18);
  uVar19 = *(uint *)(local_720 + 0xb);
  *(undefined2 *)(lVar9 + 6) = 0;
  uVar10 = 0x7fffffff;
  if ((ulonglong)uVar19 < 5) {
    uVar10 = *(undefined4 *)(&DAT_14a369960 + (ulonglong)uVar19 * 4);
  }
  *(undefined4 *)(lVar9 + 8) = uVar10;
  uVar13 = (ulonglong)*(uint *)((longlong)local_720 + 0x5c);
  if (uVar13 == 0) {
LAB_1473b45bd:
    uVar19 = 0;
  }
  else {
    uVar19 = *(uint *)((longlong)local_720 + 0x5c) + 1;
    do {
      if ((int)uVar13 < 1) goto LAB_1473b45bd;
      uVar19 = uVar19 - 1;
      lVar17 = uVar13 + 0x5f;
      uVar13 = uVar13 - 1;
    } while (*(char *)((longlong)local_720 + lVar17) == '\0');
  }
  cVar2 = *(char *)((longlong)local_720 + 0xc2);
  bVar3 = *(byte *)((longlong)local_720 + 0xc3);
  uVar16 = uVar19;
  if (1 < bVar3) {
    uVar16 = 1;
  }
  if (cVar2 != '\x02') {
    uVar16 = uVar19;
  }
  uVar19 = 1;
  if (bVar3 == 0) {
    uVar19 = uVar16;
  }
  if (cVar2 != '\x01') {
    uVar19 = uVar16;
  }
  if (cVar2 == '\x03') {
    uVar19 = 1;
  }
  if (cVar2 == '\x03' && 1 < bVar3) {
    *(undefined2 *)(lVar9 + 4) = 1;
    uVar19 = 1;
  }
  iVar12 = *(int *)(lVar9 + 0x18);
  iVar11 = iVar12 + uVar19;
  *(int *)(lVar9 + 0x18) = iVar11;
  if ((uint)(*(int *)(lVar9 + 0x1c) - iVar12) < uVar19) {
    FUN_1473c9aa2(lVar9 + 0x10);
    iVar11 = *(int *)(lVar9 + 0x18);
  }
  if (0 < iVar11) {
    puVar18 = (undefined1 *)(lVar7 + 0x2c);
    lVar7 = 0;
    do {
      lVar17 = *(longlong *)(lVar9 + 0x10);
      *(bool *)(lVar17 + lVar7 * 8) = *(int *)(puVar18 + -0x1c) != 0;
      *(undefined1 *)(lVar17 + 1 + lVar7 * 8) = puVar18[-0x10];
      *(undefined1 *)(lVar17 + 2 + lVar7 * 8) = puVar18[-0x18];
      *(undefined1 *)(lVar17 + 3 + lVar7 * 8) = puVar18[-0x14];
      *(undefined1 *)(lVar17 + 4 + lVar7 * 8) = puVar18[-4];
      *(undefined1 *)(lVar17 + 5 + lVar7 * 8) = puVar18[-0xc];
      *(undefined1 *)(lVar17 + 6 + lVar7 * 8) = puVar18[-8];
      *(undefined1 *)(lVar17 + 7 + lVar7 * 8) = *puVar18;
      lVar7 = lVar7 + 1;
      puVar18 = puVar18 + 0x20;
    } while (lVar7 < *(int *)(lVar9 + 0x18));
  }
  iVar12 = *(int *)(lVar9 + 0x38);
  *(uint *)(lVar9 + 0x38) = iVar12 + local_338._4_4_;
  if ((uint)(*(int *)(lVar9 + 0x3c) - iVar12) < local_338._4_4_) {
    FUN_1473ca1c8((longlong *)(lVar9 + 0x30));
  }
  if (local_338._4_4_ != 0) {
    uVar19 = 0;
    lVar7 = 8;
    do {
      lVar17 = *(longlong *)(lVar9 + 0x30);
      lVar8 = (longlong)(int)uVar19;
      *(undefined2 *)(lVar17 + 4 + lVar8 * 8) = *(undefined2 *)(lStack_330 + -8 + lVar7);
      *(undefined2 *)(lVar17 + 6 + lVar8 * 8) = *(undefined2 *)(lStack_330 + lVar7);
      *(undefined4 *)(lVar17 + lVar8 * 8) = *(undefined4 *)(lStack_330 + -4 + lVar7);
      uVar19 = uVar19 + 1;
      lVar7 = lVar7 + 0xc;
    } while (uVar19 < local_338._4_4_);
  }
  iVar12 = *(int *)(lVar9 + 0x48);
  *(uint *)(lVar9 + 0x48) = iVar12 + (uint)local_328;
  if ((uint)(*(int *)(lVar9 + 0x4c) - iVar12) < (uint)local_328) {
    FUN_1473ca456((longlong *)(lVar9 + 0x40));
  }
  if ((uint)local_328 != 0) {
    uVar19 = 0;
    lVar7 = 0xc;
    do {
      lVar17 = *(longlong *)(lVar9 + 0x40);
      lVar8 = (longlong)(int)uVar19 * 0x10;
      *(undefined4 *)(lVar17 + 4 + lVar8) = *(undefined4 *)(lStack_320 + -8 + lVar7);
      *(undefined4 *)(lVar17 + 8 + lVar8) = *(undefined4 *)(lStack_320 + -4 + lVar7);
      *(undefined4 *)(lVar17 + lVar8) = *(undefined4 *)(lStack_320 + -0xc + lVar7);
      *(undefined4 *)(lVar17 + 0xc + lVar8) = *(undefined4 *)(lStack_320 + lVar7);
      uVar19 = uVar19 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar19 < (uint)local_328);
  }
  plVar1 = (longlong *)(lVar9 + 0x20);
  uVar19 = *(uint *)(local_718 + 0x118);
  iVar12 = *(int *)(lVar9 + 0x28);
  *(uint *)(lVar9 + 0x28) = iVar12 + uVar19;
  if ((uint)(*(int *)(lVar9 + 0x2c) - iVar12) < uVar19) {
    FUN_1473c9f52(plVar1);
  }
  memset((void *)((longlong)iVar12 * 0x10 + *plVar1),0,(longlong)(int)uVar19 << 4);
  iVar12 = *(int *)(local_718 + 0x118);
  if (0 < iVar12) {
    lVar9 = *(longlong *)(local_718 + 0x110);
    lVar17 = 0;
    lVar7 = local_718;
    do {
      if (0 < *(int *)(lVar9 + 8 + lVar17 * 0x18)) {
        lVar14 = lVar17 * 0x10;
        lVar15 = 0;
        lVar8 = 0;
        do {
          lVar9 = *plVar1;
          iVar12 = *(int *)(lVar9 + 8 + lVar14);
          lVar20 = (longlong)iVar12;
          *(uint *)(lVar9 + 8 + lVar14) = iVar12 + 1U;
          if (*(uint *)(lVar9 + 0xc + lVar14) < iVar12 + 1U) {
            FUN_1473cb316((longlong *)(lVar9 + lVar14),iVar12);
            lVar7 = local_718;
          }
          lVar9 = *(longlong *)(lVar9 + lVar14);
          lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x110) + lVar17 * 0x18);
          *(undefined4 *)(lVar9 + lVar20 * 8) = *(undefined4 *)(lVar4 + lVar15);
          *(undefined1 *)(lVar9 + 4 + lVar20 * 8) = *(undefined1 *)(lVar4 + 4 + lVar15);
          *(undefined1 *)(lVar9 + 5 + lVar20 * 8) = *(undefined1 *)(lVar4 + 0xc + lVar15);
          lVar8 = lVar8 + 1;
          lVar9 = *(longlong *)(lVar7 + 0x110);
          lVar15 = lVar15 + 0x18;
        } while (lVar8 < *(int *)(lVar9 + 8 + lVar17 * 0x18));
        iVar12 = *(int *)(lVar7 + 0x118);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar12);
  }
  lVar7 = local_710;
  lVar9 = local_720[7];
  *(undefined1 *)(local_710 + 0x50) = *(undefined1 *)(lVar9 + 0x2c);
  *(undefined1 *)(local_710 + 0x51) = *(undefined1 *)(lVar9 + 0x30);
  *(undefined4 *)(local_710 + 0x54) = *(undefined4 *)(lVar9 + 0x44);
  *(undefined4 *)(local_710 + 0x58) = *(undefined4 *)(lVar9 + 0x3c);
  FUN_1473d5b00(local_720[8],local_720,&local_6f8);
  puVar5 = local_720;
  *(undefined1 *)(lVar7 + 0x5c) = uStack_6e0._4_1_;
  *(bool *)(lVar7 + 0x5d) = local_6e8._4_4_ != 0;
  *(bool *)(lVar7 + 0x5e) = (int)uStack_6e0 != 0;
  *(bool *)(lVar7 + 0x60) = (int)local_6d8 != 0;
  *(bool *)(lVar7 + 0x5f) = local_6d8._4_4_ != 0;
  *(undefined1 *)(lVar7 + 0x61) = (undefined1)uStack_6d0;
  *(undefined1 *)(lVar7 + 0x62) = uStack_6d0._4_1_;
  *(undefined1 *)(lVar7 + 99) = local_6c8;
  *(undefined1 *)(lVar7 + 100) = local_6c4;
  *(uint *)(lVar7 + 0x68) = (uint)local_6c0;
  *(undefined4 *)(lVar7 + 0x6c) = local_6bc;
  *(undefined4 *)(lVar7 + 0x70) = local_6b8;
  *(undefined1 *)(lVar7 + 0x74) = local_6b4;
  *(undefined1 *)(lVar7 + 0x75) = local_6b0;
  *(undefined1 *)(lVar7 + 0x76) = local_6ac;
  *(undefined1 *)(lVar7 + 0x77) = local_6a8;
  *(uint *)(lVar7 + 0x78) = (uint)local_6a4;
  *(undefined4 *)(lVar7 + 0x7c) = local_6a0;
  *(undefined4 *)(lVar7 + 0x80) = local_69c;
  lVar9 = 0;
  lVar17 = 0;
  do {
    if (*(longlong *)((longlong)local_88 + lVar9) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)((longlong)local_88 + lVar9) + 0x10);
    }
    *(longlong *)(lVar7 + 0x88 + lVar9) = lVar8;
    lVar17 = lVar17 + lVar8 * *(longlong *)((longlong)&DAT_14a360660 + lVar9);
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x28);
  *(longlong *)(lVar7 + 0xb0) = lVar17;
  FUN_1473b4a4a(&local_6f8,local_720);
  FUN_1473b387e(lVar7 + 0xb8,&local_6f8);
  uVar6 = 0;
  if (*(char *)(puVar5 + 0x19) != '\0') {
    uVar6 = *(undefined1 *)((longlong)puVar5 + 0xc9);
  }
  *(undefined1 *)(lVar7 + 0x14a) = uVar6;
  *(undefined1 *)(lVar7 + 0x14b) = 3;
  FUN_1473db02c(&local_348);
  if ((local_88[5] ^ (ulonglong)auStack_748) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b4a4a FUN_1473b4a4a body=1776 status=ok
// SIG undefined FUN_1473b4a4a(void)

undefined8 * FUN_1473b4a4a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  char cVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  byte bVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar17 = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  memset(param_1 + 0xc,0,0x2fc);
  param_1[0x6f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x37f) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3b9e7769;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3b9e776a;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  *(undefined1 *)((longlong)param_1 + 0x382) = *(undefined1 *)(param_2 + 0xc6);
  *(undefined1 *)((longlong)param_1 + 0x37f) = *(undefined1 *)(param_2 + 0xc0);
  uVar14 = *(uint *)(param_2 + 0x5c);
  cVar19 = '\0';
  if (uVar14 != 0) {
    uVar17 = 0;
    uVar27 = 0;
    cVar19 = '\0';
    do {
      bVar25 = *(byte *)(param_2 + 0x60 + uVar27);
      if ((ulonglong)bVar25 != 0) {
        if ((uVar27 != uVar14 - 1) || (uVar14 = 1, *(char *)(param_2 + 0xc2) != '\x03')) {
          uVar14 = (uint)*(byte *)((longlong)param_1 + 0x37f);
        }
        lVar1 = uVar17 * 0x24;
        *(uint *)((longlong)param_1 + lVar1 + 0xb8) = uVar14;
        puVar15 = (undefined4 *)
                  ((longlong)&DAT_14c873434 + (ulonglong)(((uint)bVar25 * 2 + (uint)bVar25) * 0x10))
        ;
        if ((*(byte *)(param_2 + 0x68 + uVar27 * 8) & 0x10) != 0) {
          puVar15 = &DAT_14ca781f0 + bVar25;
        }
        *(undefined4 *)((longlong)param_1 + lVar1 + 0xb4) = *puVar15;
        *(undefined1 **)((longlong)param_1 + lVar1 + 0xbc) = &DAT_100000002;
        *(undefined1 **)((longlong)param_1 + lVar1 + 0xc4) = &DAT_100000002;
        *(undefined1 **)((longlong)param_1 + lVar1 + 0xcc) = &DAT_200000002;
        *(uint *)(param_1 + *(byte *)((longlong)param_1 + 0x379)) = (uint)*(byte *)(param_1 + 0x6f);
        uVar16 = (ulonglong)*(byte *)((longlong)param_1 + 0x379);
        *(undefined4 *)((longlong)param_1 + uVar16 * 8 + 4) = 2;
        bVar25 = *(byte *)(param_1 + 0x6f);
        if (1 < *(int *)((longlong)param_1 + lVar1 + 0xb8)) {
          uVar17 = (ulonglong)bVar25;
          *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xf4) =
               *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xd0);
          puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xb0);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xc0);
          uVar8 = puVar2[1];
          puVar3 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xe4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xd4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xdc) =
               1;
          *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xe0) =
               2;
          *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xe4) =
               0;
          *(uint *)(param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x379) + 0xd) =
               *(byte *)(param_1 + 0x6f) + 1;
          bVar25 = *(byte *)((longlong)param_1 + 0x379);
          uVar16 = (ulonglong)bVar25;
          *(undefined4 *)((longlong)param_1 + uVar16 * 8 + 0x6c) = 2;
          local_68 = CONCAT22(local_68._2_2_,(ushort)local_68 | (ushort)(1 << (bVar25 & 0x1f)));
          bVar25 = *(char *)(param_1 + 0x6f) + 1;
          *(undefined1 *)((longlong)param_1 + 0x37c) = 1;
        }
        uVar17 = (ulonglong)(uint)((int)uVar16 * 4);
        *(undefined4 *)((longlong)&local_98 + uVar17 + 4) =
             *(undefined4 *)((longlong)param_1 + lVar1 + 0xb4);
        *(undefined1 *)((longlong)&local_e8 + uVar16) =
             *(undefined1 *)((longlong)param_1 + lVar1 + 0xbc);
        *(undefined1 *)((longlong)&uStack_e0 + uVar16 + 3) =
             *(undefined1 *)((longlong)param_1 + lVar1 + 0xc0);
        *(undefined4 *)((longlong)&uStack_d0 + uVar17) = 2;
        cVar19 = cVar19 + '\x01';
        uVar17 = (ulonglong)(byte)(bVar25 + 1);
        *(byte *)(param_1 + 0x6f) = bVar25 + 1;
        *(char *)((longlong)param_1 + 0x379) = (char)uVar16 + '\x01';
        uVar14 = *(uint *)(param_2 + 0x5c);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 < uVar14);
  }
  uVar6 = local_d8;
  if (*(char *)(param_2 + 0xa8) == '\0') {
    bVar10 = false;
  }
  else {
    puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xb0);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    bVar25 = *(byte *)((longlong)param_1 + 0x37f);
    *(uint *)(puVar2 + 1) = (uint)bVar25;
    uVar13 = *(undefined4 *)
              ((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_2 + 0xa8) * 0x30));
    *(undefined4 *)((longlong)puVar2 + 4) = uVar13;
    cVar5 = *(char *)(param_2 + 0xb8);
    if (cVar5 == '\0') {
      uVar20 = 2;
      bVar12 = 0;
    }
    else if (cVar5 == '\x02') {
      uVar20 = 1;
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
      if (cVar5 == '\x01') {
        uVar20 = 0;
        bVar12 = 0;
      }
      else {
        uVar20 = 0x7fffffff;
      }
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar20;
    cVar5 = *(char *)(param_2 + 0xba);
    if (cVar5 == '\0') {
      uVar21 = 2;
      bVar11 = 0;
    }
    else if (cVar5 == '\x02') {
      uVar21 = 1;
      bVar11 = 1;
    }
    else if (cVar5 == '\x01') {
      bVar11 = 0;
      uVar21 = 0;
    }
    else {
      bVar11 = 0;
      uVar21 = 0x7fffffff;
    }
    *(undefined4 *)((longlong)puVar2 + 0x14) = uVar21;
    uVar22 = 0x7fffffff;
    uVar21 = 0x7fffffff;
    if ((ulonglong)*(byte *)(param_2 + 0xb9) < 3) {
      uVar21 = *(undefined4 *)(&DAT_14a369974 + (ulonglong)*(byte *)(param_2 + 0xb9) * 4);
    }
    *(undefined4 *)(puVar2 + 2) = uVar21;
    if ((ulonglong)*(byte *)(param_2 + 0xbb) < 3) {
      uVar22 = *(undefined4 *)(&DAT_14a369974 + (ulonglong)*(byte *)(param_2 + 0xbb) * 4);
    }
    *(undefined4 *)(puVar2 + 3) = uVar22;
    uVar14 = (uint)((*(uint *)(param_2 + 0xbc) & 0xf) == 2);
    uVar23 = uVar14 | 0x3b9f9490;
    bVar28 = (*(uint *)(param_2 + 0xbc) & 0xf0) == 0x20;
    uVar24 = bVar28 | 0x3b9f9490;
    *(uint *)((longlong)puVar2 + 0x1c) = uVar23;
    *(uint *)(puVar2 + 4) = uVar23;
    *(uint *)(param_1 + 0x6e) = uVar24;
    *(uint *)((longlong)param_1 + 0x374) = uVar24;
    bVar26 = *(byte *)(param_1 + 0x6f);
    uVar17 = (ulonglong)bVar26;
    *(uint *)(param_1 + 8) = (uint)bVar26;
    *(uint *)((longlong)param_1 + 0x44) = uVar23;
    *(uint *)(param_1 + 0xb) = uVar24;
    if (((*(char *)(param_2 + 0xb9) == '\x02') || (*(char *)(param_2 + 0xbb) == '\x02')) &&
       ((1 < bVar25 & DAT_14ca8507f) == 1)) {
      *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xf4) =
           *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xd0);
      puVar3 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xb0);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      puVar3 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xc0);
      uVar9 = puVar3[1];
      puVar4 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xe4);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar3 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xd4);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xdc) = 1;
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xe0) = 2;
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xe4) = 0;
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xe8) = 2;
      *(undefined4 *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x6f) * 0x24 + 0xec) = 0;
      *(uint *)(param_1 + 0x15) = *(byte *)(param_1 + 0x6f) + 1;
      *(undefined4 *)((longlong)param_1 + 0xac) = 3;
      bVar26 = *(byte *)(param_1 + 0x6f) + 1;
      local_68 = CONCAT22(local_68._2_2_,
                          (ushort)local_68 |
                          (ushort)(1 << (*(byte *)((longlong)param_1 + 0x379) & 0x1f)));
      *(undefined1 *)((longlong)param_1 + 0x37d) = 1;
      uVar13 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar20 = *(undefined4 *)((longlong)puVar2 + 0xc);
      uVar21 = *(undefined4 *)(puVar2 + 2);
    }
    bVar10 = (bool)(bVar12 | bVar11);
    uStack_e0._0_2_ = CONCAT11(*(undefined1 *)((longlong)puVar2 + 0x14),(char)uVar20);
    local_d8._5_3_ = SUB83(uVar6,5);
    local_d8._0_5_ =
         CONCAT14(*(undefined1 *)(puVar2 + 3),CONCAT13((char)uVar21,(undefined3)local_d8));
    uStack_b0 = (ulonglong)CONCAT14(bVar28,uVar14) | 0x3b9f94903b9f9490;
    local_78 = CONCAT44(uVar13,(undefined4)local_78);
    uVar17 = (ulonglong)(byte)(bVar26 + 1);
    *(byte *)(param_1 + 0x6f) = bVar26 + 1;
    *(undefined1 *)((longlong)param_1 + 0x37b) = 1;
  }
  if ((*(char *)(param_2 + 199) == '\x01') && (*(char *)(param_2 + 200) == '\x01')) {
    *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xd0) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xc0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xb0);
    *puVar2 = 0;
    puVar2[1] = 0;
    uVar13 = 0x3b9e1d90;
    if (DAT_14ca84f48 != '\x02') {
      uVar13 = 0;
    }
    local_a8 = 0x3b9d4aa3;
    if (DAT_14ca84f48 != '\x01') {
      local_a8 = uVar13;
    }
    if (1 < (byte)(DAT_14ca84f48 - 1U)) {
      local_a8 = 0;
    }
    uVar13 = *(undefined4 *)((longlong)&DAT_14c873434 + (ulonglong)((uint)DAT_14ca84f49 * 0x30));
    *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xb4) = uVar13;
    puVar2 = (undefined8 *)((longlong)param_1 + uVar17 * 0x24 + 0xb8);
    *puVar2 = 1;
    puVar2[1] = 0x200000001;
    *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 200) = 1;
    *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xcc) = local_a8;
    *(undefined4 *)((longlong)param_1 + uVar17 * 0x24 + 0xd0) = local_a8;
    *(uint *)(param_1 + 0xc) = (uint)*(byte *)(param_1 + 0x6f);
    *(undefined4 *)((longlong)param_1 + 100) = local_a8;
    uStack_e0._0_3_ = CONCAT12(2,(undefined2)uStack_e0);
    local_d8._0_6_ = CONCAT15(1,(undefined5)local_d8);
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar13);
    *(byte *)(param_1 + 0x6f) = *(byte *)(param_1 + 0x6f) + 1;
    *(undefined1 *)((longlong)param_1 + 0x37e) = 1;
  }
  uVar18 = *(undefined1 *)(param_2 + 0xc2);
  *(undefined1 *)((longlong)param_1 + 0x381) = uVar18;
  local_98 = CONCAT62(CONCAT51(CONCAT41(local_98._4_4_,uVar18),
                               *(undefined1 *)((longlong)param_1 + 0x37f)),
                      CONCAT11(*(undefined1 *)((longlong)param_1 + 0x382),cVar19));
  uVar18 = 0;
  uVar13 = (*(code *)PTR_FUN_14c75b148)(&local_98,0x34,0);
  *(undefined4 *)((longlong)param_1 + 900) = uVar13;
  uVar13 = (*(code *)PTR_FUN_14c75b148)(&local_e8,0x44,uVar13);
  *(undefined4 *)(param_1 + 0x71) = uVar13;
  if (bVar10) {
    uVar18 = *(undefined1 *)(param_1 + 0x6f);
  }
  *(undefined1 *)(param_1 + 0x70) = uVar18;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 1;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b513c FUN_1473b513c body=345 status=ok
// SIG undefined FUN_1473b513c(void)

undefined8 * FUN_1473b513c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1473c1fe8(param_1 + 2,iVar1);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1473c2042(param_1 + 4,iVar1);
    FUN_1473c209a(param_1[4],uVar3,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1473c2164(param_1 + 6,iVar1);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1473c21be(param_1 + 8,iVar1);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 4);
  }
  puVar5 = param_2 + 10;
  puVar6 = param_1 + 10;
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_1473c1eb8(param_1 + 0x17,param_2 + 0x17);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  return param_1;
}



// FUNCTION 1473b5296 FUN_1473b5296 body=134 status=ok
// SIG undefined FUN_1473b5296(void)

void FUN_1473b5296(longlong param_1,char param_2)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    if (param_2 == '\0') {
      FUN_1473a8b5a(*(longlong *)(param_1 + 800) + 0x590,5);
    }
    else {
      (*DAT_14ca79238)(**(undefined8 **)(param_1 + 800),*(longlong *)(param_1 + 0x50),0);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x25e8);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x260));
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x260);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001473b52f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 1473b531c FUN_1473b531c body=314 status=ok
// SIG undefined FUN_1473b531c(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_1473b531c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  int local_60 [2];
  int *local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0xe + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xc0);
  iVar3 = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0x7fffffffffffffff;
  do {
    local_60[1] = 0;
    local_60[0] = iVar3;
    local_58 = local_60;
    local_50 = local_60 + 1;
    FUN_1473c22c6(param_1 + 0xc0,local_44,&local_58);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0xb);
  local_60[1] = 0;
  local_60[0] = 0x3b9d13f0;
  local_58 = local_60;
  local_50 = local_60 + 1;
  FUN_1473c22c6(param_1 + 0xc0,local_44);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b5457 FUN_1473b5457 body=67 status=ok
// SIG undefined FUN_1473b5457(void)

undefined8 FUN_1473b5457(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  switch(param_2) {
  case 0:
    lVar1 = *(longlong *)(param_1 + 8);
    break;
  case 1:
    lVar1 = *(longlong *)(param_1 + 0x10);
    break;
  case 2:
    lVar1 = *(longlong *)(param_1 + 0x28);
    break;
  case 3:
    lVar1 = *(longlong *)(param_1 + 0x18);
    break;
  case 4:
    lVar1 = *(longlong *)(param_1 + 0x20);
    break;
  default:
    goto switchD_1473b546c_default;
  }
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0xb0);
  }
switchD_1473b546c_default:
  return 0;
}



// FUNCTION 1473b549a FUN_1473b549a body=126 status=ok
// SIG undefined FUN_1473b549a(void)

void FUN_1473b549a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x308) == '\x01') {
    GetCurrentThreadId();
    lVar2 = DAT_14ca78408;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    uVar1 = *(uint *)(lVar2 + uVar4 * 4);
    while ((uVar1 < (uint)(*(int *)(param_1 + 0x2a8) + param_2) ||
           (*(uint *)(param_1 + 0x2b0) < *(uint *)(param_1 + 0x2ac)))) {
      FUN_1473b57be(param_1);
    }
  }
  return;
}



// FUNCTION 1473b5518 FUN_1473b5518 body=119 status=ok
// SIG undefined FUN_1473b5518(void)

void FUN_1473b5518(longlong param_1)

{
  longlong lVar1;
  
  FUN_1473c1c7b(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_1473c27b0(param_1 + 0xc0);
  lVar1 = 0xc0;
  do {
    if (*(longlong *)(param_1 + -0x20 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1473b5590 FUN_1473b5590 body=210 status=ok
// SIG undefined FUN_1473b5590(void)

longlong * FUN_1473b5590(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar2 = param_1 + 200;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd0);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xd8) - 1U & param_4) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x90) + (longlong)(int)uVar3 * 0x18);
        if (*puVar1 == param_4) {
          if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            goto LAB_1473b55d3;
          }
          break;
        }
        uVar3 = puVar1[4];
      } while (uVar3 != 0xffffffff);
    }
  }
  FUN_1473d2330(param_1,param_2,param_3,param_4);
LAB_1473b55d3:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca793b8);
  return param_2;
}



// FUNCTION 1473b5662 FUN_1473b5662 body=79 status=ok
// SIG undefined FUN_1473b5662(void)

void FUN_1473b5662(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x38) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0xb8);
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
  FUN_1473cbf84(param_1 + 0x48,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001473b56aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
  return;
}



// FUNCTION 1473b56b2 FUN_1473b56b2 body=268 status=ok
// SIG undefined FUN_1473b56b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473b56b2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (DAT_14ca77a98 != 0) {
    FUN_147398962(&DAT_14ca77b20);
  }
  if ((*(char *)(param_1 + 0x308) != '\x01') || (DAT_14ca78490 == 0)) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x260));
  iVar4 = 5;
  do {
    GetCurrentThreadId();
    lVar3 = **(longlong **)(param_1 + 0x298);
    if (lVar3 == 0) {
      if (DAT_14c7590b0 <= (uint)(DAT_14ca78490 + _DAT_000004b0)) break;
      FUN_1431a4f08(param_1,0);
    }
    else {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      if (DAT_14c7590b0 <= (uint)(DAT_14ca78490 + *(int *)(lVar3 + 0x4b0))) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar3);
        }
        break;
      }
      FUN_1431a4f08(param_1,lVar3);
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar3);
      }
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
                    /* WARNING: Could not recover jumptable at 0x0001473b578d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x260));
  return;
}



// FUNCTION 1473b57be FUN_1473b57be body=103 status=ok
// SIG undefined FUN_1473b57be(void)

void FUN_1473b57be(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  GetCurrentThreadId();
  lVar3 = **(longlong **)(param_1 + 0x298);
  if (lVar3 == 0) {
    FUN_1431a4f08(param_1,0);
    return;
  }
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  UNLOCK();
  FUN_1431a4f08(param_1,lVar3);
  LOCK();
  puVar1 = (uint *)(lVar3 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    FUN_144a54812(lVar3);
    return;
  }
  return;
}



// FUNCTION 1473b5826 FUN_1473b5826 body=110 status=ok
// SIG undefined FUN_1473b5826(void)

void FUN_1473b5826(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = *param_2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    plVar1 = (longlong *)param_1[1];
    plVar3 = param_1;
    if (plVar1 != (longlong *)0x0) {
      puVar2[1] = plVar1;
      plVar3 = plVar1;
    }
    plVar3[2] = (longlong)puVar2;
    param_1[1] = (longlong)puVar2;
                    /* WARNING: Could not recover jumptable at 0x0001473b5889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,(int)param_1[3] + 1);
    return;
  }
  return;
}



// FUNCTION 1473b5894 FUN_1473b5894 body=198 status=ok
// SIG undefined FUN_1473b5894(void)

void FUN_1473b5894(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  if ((int)param_1[3] == 1) {
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      lVar1 = param_1[1];
      while (lVar1 != 0) {
        lVar1 = *(longlong *)(lVar1 + 8);
        FUN_1400020a8();
        param_1[1] = lVar1;
      }
      param_1[1] = 0;
      param_1[2] = 0;
    }
    iVar2 = 0;
  }
  else {
    if (param_1[1] == param_2) {
      lVar1 = *(longlong *)(param_1[1] + 8);
      param_1[1] = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    else if (param_1[2] == param_2) {
      lVar1 = *(longlong *)(param_1[2] + 0x10);
      param_1[2] = lVar1;
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x10);
      *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = lVar1;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 8);
    }
    if (param_3 == '\0') {
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      FUN_1400020a8(param_2);
    }
    iVar2 = (int)param_1[3] + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001473b5933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,iVar2);
  return;
}



// FUNCTION 1473b595a FUN_1473b595a body=1533 status=ok
// SIG undefined FUN_1473b595a(void)

void FUN_1473b595a(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_98 = param_1 + 0x48;
    local_a0 = param_1 + 0x28;
    local_80 = param_1 + 0x38;
    local_88 = param_1 + 0x68;
    local_90 = param_1 + 0x58;
    lVar5 = 0x1c;
    uVar12 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0x88);
      uVar6 = *(uint *)(lVar13 + -0x14 + lVar5);
      if ((longlong)(int)uVar6 != 0) {
        if (DAT_14c760db4 < 2) {
          lVar15 = (longlong)(int)uVar6 + 1;
          iVar4 = *(int *)(param_1 + 0x20);
          uVar6 = (uint)lVar15;
          *(uint *)(param_1 + 0x20) = iVar4 + uVar6;
          if ((uint)(*(int *)(param_1 + 0x24) - iVar4) < uVar6) {
            FUN_1473cc15c((longlong *)(param_1 + 0x18));
          }
          memset((void *)((longlong)iVar4 * 0xc + *(longlong *)(param_1 + 0x18)),0,lVar15 * 0xc);
          uVar6 = *(uint *)(lVar13 + -0x14 + lVar5);
        }
        iVar4 = *(int *)(param_1 + 0x50);
        *(uint *)(param_1 + 0x50) = iVar4 + uVar6;
        if ((uint)(*(int *)(param_1 + 0x54) - iVar4) < uVar6) {
          FUN_1473cc1f0(local_98);
        }
        memset((void *)((longlong)iVar4 * 0x40 + *(longlong *)(param_1 + 0x48)),0,
               (longlong)(int)uVar6 << 6);
        uVar2 = *(ushort *)(lVar13 + -4 + lVar5);
        iVar4 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar4 + (uint)uVar2;
        if ((uint)(*(int *)(param_1 + 0x34) - iVar4) < (uint)uVar2) {
          FUN_1473cc276(local_a0);
        }
        memset((void *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 0x28)),0,
               (ulonglong)uVar2 * 0x18);
        uVar2 = *(ushort *)(lVar13 + -2 + lVar5);
        iVar4 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar4 + (uint)uVar2;
        if ((uint)(*(int *)(param_1 + 0x44) - iVar4) < (uint)uVar2) {
          FUN_1473cc30a(local_80);
        }
        memset((void *)((longlong)iVar4 * 0x18 + *(longlong *)(param_1 + 0x38)),0,
               (ulonglong)uVar2 * 0x18);
        uVar2 = *(ushort *)(lVar13 + lVar5);
        iVar4 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar4 + (uint)uVar2;
        if ((uint)(*(int *)(param_1 + 0x74) - iVar4) < (uint)uVar2) {
          FUN_1473cc39e(local_88);
        }
        memset((void *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x68)),0,
               (ulonglong)uVar2 << 5);
        uVar2 = *(ushort *)(lVar13 + lVar5);
        iVar4 = *(int *)(param_1 + 0x60);
        *(uint *)(param_1 + 0x60) = iVar4 + (uint)uVar2;
        if ((uint)(*(int *)(param_1 + 100) - iVar4) < (uint)uVar2) {
          FUN_1473cc424(local_90);
        }
        memset((void *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x58)),0,(ulonglong)uVar2 << 3
              );
        uVar6 = *(uint *)(lVar13 + -0x14 + lVar5);
        uVar8 = *(uint *)(param_1 + 0x80);
        param_2 = (ulonglong)uVar8;
        *(uint *)(param_1 + 0x80) = uVar8 + uVar6;
        if (*(int *)(param_1 + 0x84) - uVar8 < uVar6) {
          FUN_1447403be(param_1 + 0x78);
        }
      }
      uVar12 = uVar12 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar12 < *(uint *)(param_1 + 0x10));
  }
  memset(*(void **)(param_1 + 0x78),(int)CONCAT71((int7)(param_2 >> 8),0xff),
         (longlong)*(int *)(param_1 + 0x80));
  local_68 = (longlong *)(param_1 + 0xc0);
  FUN_1473b5f58();
  if (DAT_14c760db4 < 2) {
    local_a0 = *(longlong *)(param_1 + 0x18);
  }
  else {
    local_a0 = 0;
  }
  local_78 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xae0) + 0x78);
  local_70 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xad8);
  lVar10 = *(longlong *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar13 = *(longlong *)(param_1 + 0x38);
  local_98 = *(longlong *)(param_1 + 0x68);
  lVar15 = *(longlong *)(param_1 + 0x58);
  lVar11 = *(longlong *)(param_1 + 0x78);
  local_58 = (void *)0x0;
  uVar6 = *(uint *)(param_1 + 0x10);
  uStack_50 = (ulonglong)uVar6;
  if ((longlong)(int)uVar6 != 0) {
    FUN_1447808da(&local_58);
  }
  uVar8 = 0;
  memset(local_58,0,(longlong)(int)uVar6 << 2);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (uVar6 == 0) {
    iVar4 = *(int *)(param_1 + 0xb0);
    uVar6 = 0;
  }
  else {
    local_78 = local_78 + 0x10;
    lVar16 = 0;
    uVar12 = 0;
    lVar7 = local_a0;
    lVar9 = local_98;
    do {
      lVar3 = *(longlong *)(param_1 + 0x88);
      if (*(int *)(lVar3 + 8 + lVar16) != 0) {
        lVar14 = (longlong)(int)uVar8;
        *(int *)((longlong)local_58 + lVar14 * 4) = (int)uVar12;
        local_a8 = local_78;
        local_b0 = local_70;
        local_d8 = lVar5;
        local_d0 = lVar13;
        local_c8 = lVar11;
        local_c0 = lVar9;
        local_b8 = lVar15;
        local_a0 = lVar13;
        local_98 = lVar9;
        local_90 = lVar5;
        local_88 = lVar11;
        local_80 = lVar15;
        local_60 = uVar12;
        iVar4 = FUN_1473d5016(lVar14 * 0x48 + *local_68,lVar16 + lVar3,lVar7,lVar10);
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          puVar1 = (undefined8 *)(lVar7 + (longlong)*(int *)(lVar3 + 8 + lVar16) * 0xc);
          lVar7 = (longlong)puVar1 + 0xc;
          *puVar1 = 0xffffffffffffffff;
          *(undefined4 *)(puVar1 + 1) =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x148) + lVar14 * 4);
        }
        uVar12 = (ulonglong)(uint)((int)local_60 + iVar4);
        lVar5 = (longlong)*(int *)(lVar3 + 8 + lVar16);
        lVar11 = local_88 + lVar5;
        lVar10 = lVar10 + lVar5 * 0x40;
        lVar5 = local_90 + (ulonglong)*(ushort *)(lVar3 + 0x18 + lVar16) * 0x18;
        lVar13 = local_a0 + (ulonglong)*(ushort *)(lVar3 + 0x1a + lVar16) * 0x18;
        uVar2 = *(ushort *)(lVar3 + 0x1c + lVar16);
        lVar15 = local_80 + (ulonglong)uVar2 * 8;
        lVar9 = local_98 + (ulonglong)uVar2 * 0x20;
        uVar6 = *(uint *)(param_1 + 0x10);
      }
      uVar8 = uVar8 + 1;
      lVar16 = lVar16 + 0x20;
    } while (uVar8 < uVar6);
    iVar4 = *(int *)(param_1 + 0xb0);
    uVar6 = (uint)uVar12;
    *(uint *)(param_1 + 0xb0) = uVar6 + iVar4;
    if ((uint)(*(int *)(param_1 + 0xb4) - iVar4) < uVar6) {
      FUN_1447808da(param_1 + 0xa8);
    }
  }
  uVar8 = 0;
  memset((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0xa8)),0,(longlong)(int)uVar6 << 2);
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x98);
    uVar6 = 0;
  }
  else {
    do {
      *(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 0x10 + (longlong)(int)uVar8 * 0x48) =
           (ulonglong)*(uint *)((longlong)local_58 + (longlong)(int)uVar8 * 4) * 4 +
           *(longlong *)(param_1 + 0xa8);
      uVar8 = uVar8 + 1;
      uVar6 = *(uint *)(param_1 + 0x10);
    } while (uVar8 < uVar6);
    iVar4 = *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = iVar4 + uVar6;
    if ((uint)(*(int *)(param_1 + 0x9c) - iVar4) < uVar6) {
      FUN_1473cc572(param_1 + 0x90);
    }
  }
  memset((void *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 0x90)),0,(longlong)(int)uVar6 << 3);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473b5f58 FUN_1473b5f58 body=66 status=ok
// SIG undefined FUN_1473b5f58(void)

void FUN_1473b5f58(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1473cc4de(param_1,iVar1);
  }
  FUN_1473cc4a9((longlong)iVar1 * 0x48 + *param_1,param_2);
  return;
}



// FUNCTION 1473b5f9a FUN_1473b5f9a body=123 status=ok
// SIG undefined FUN_1473b5f9a(void)

void FUN_1473b5f9a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1473c360a(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x28 + *param_1),0,(longlong)(param_2 - iVar1) * 0x28);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1473cc5f8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473b6016 FUN_1473b6016 body=193 status=ok
// SIG undefined FUN_1473b6016(void)

longlong FUN_1473b6016(PSRWLOCK param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  PSRWLOCK pRVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  AcquireSRWLockShared(param_1);
  if (*(int *)&param_1[0xd].Ptr != *(int *)((longlong)&param_1[0x12].Ptr + 4)) {
    pRVar4 = param_1 + 0x13;
    if (param_1[0x14].Ptr != (PSRWLOCK)0x0) {
      pRVar4 = param_1[0x14].Ptr;
    }
    iVar3 = *(int *)((longlong)&pRVar4->Ptr +
                    (ulonglong)
                    (*(int *)&param_1[0x15].Ptr - 1U &
                    (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar5 = 0;
      do {
        plVar1 = (longlong *)((longlong)param_1[0xc].Ptr + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473b6039;
          lVar2 = plVar1[1];
          lVar5 = lVar2 + -0xa0;
          if (lVar2 == 0) {
            lVar5 = 0;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_1473b603b;
    }
  }
LAB_1473b6039:
  lVar5 = 0;
LAB_1473b603b:
  ReleaseSRWLockShared(param_1);
  return lVar5;
}



// FUNCTION 1473b60d8 FUN_1473b60d8 body=206 status=ok
// SIG undefined FUN_1473b60d8(void)

longlong FUN_1473b60d8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar4 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar4 = *(longlong *)(param_1 + 400);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x198) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473b6105;
          lVar2 = plVar1[1];
          lVar4 = lVar2 + -0xa0;
          if (lVar2 == 0) {
            lVar4 = 0;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_1473b6107;
    }
  }
LAB_1473b6105:
  lVar4 = 0;
LAB_1473b6107:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  return lVar4;
}



// FUNCTION 1473b61a6 FUN_1473b61a6 body=206 status=ok
// SIG undefined FUN_1473b61a6(void)

longlong FUN_1473b61a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 8));
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar4 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473b61d3;
          lVar2 = plVar1[1];
          lVar4 = lVar2 + -0xa0;
          if (lVar2 == 0) {
            lVar4 = 0;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_1473b61d5;
    }
  }
LAB_1473b61d3:
  lVar4 = 0;
LAB_1473b61d5:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 8));
  return lVar4;
}



// FUNCTION 1473b6274 FUN_1473b6274 body=206 status=ok
// SIG undefined FUN_1473b6274(void)

longlong FUN_1473b6274(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
    lVar4 = param_1 + 0x138;
    if (*(longlong *)(param_1 + 0x140) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x140);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x148) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473b62a1;
          lVar2 = plVar1[1];
          lVar4 = lVar2 + -0xa0;
          if (lVar2 == 0) {
            lVar4 = 0;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_1473b62a3;
    }
  }
LAB_1473b62a1:
  lVar4 = 0;
LAB_1473b62a3:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x10));
  return lVar4;
}



// FUNCTION 1473b6342 FUN_1473b6342 body=206 status=ok
// SIG undefined FUN_1473b6342(void)

longlong FUN_1473b6342(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar4 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1e8) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_1473b636f;
          lVar2 = plVar1[1];
          lVar4 = lVar2 + -0xa0;
          if (lVar2 == 0) {
            lVar4 = 0;
          }
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_1473b6371;
    }
  }
LAB_1473b636f:
  lVar4 = 0;
LAB_1473b6371:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  return lVar4;
}



// FUNCTION 1473b6410 FUN_1473b6410 body=332 status=ok
// SIG undefined FUN_1473b6410(void)

void FUN_1473b6410(longlong param_1,longlong param_2,int param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1431a4faa(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x25e8));
  *(undefined4 *)(param_2 + 0x4d8) = DAT_14c7590b0;
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  cVar1 = FUN_1473b1660(*(undefined8 *)(param_1 + 0x170),param_2,(*(byte *)(lVar2 + 0x75) & 2) == 0)
  ;
  if (cVar1 != '\0') {
    (*DAT_14ca79318)(*(undefined8 *)(lVar2 + 0x88),0,
                     *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x88) + 0x50));
    *(byte *)(lVar2 + 0x75) = *(byte *)(lVar2 + 0x75) | 2;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x170) + 0x7c) != param_3) {
    *(int *)(*(longlong *)(param_1 + 0x170) + 0x7c) = param_3;
  }
  if (param_4 == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x478) + -0xa0;
  if (*(longlong *)(param_2 + 0x478) == 0) {
    lVar2 = 0;
  }
  FUN_1473b655c(param_1,lVar2);
  lVar2 = *(longlong *)(param_2 + 0x490) + -0xa0;
  if (*(longlong *)(param_2 + 0x490) == 0) {
    lVar2 = 0;
  }
  FUN_1473b65da(param_1,lVar2);
  lVar2 = *(longlong *)(param_2 + 0x498) + -0xa0;
  if (*(longlong *)(param_2 + 0x498) == 0) {
    lVar2 = 0;
  }
  FUN_1473b6658(param_1,lVar2);
  lVar2 = *(longlong *)(param_2 + 0x488) + -0xa0;
  if (*(longlong *)(param_2 + 0x488) == 0) {
    lVar2 = 0;
  }
  FUN_1473b66d6(param_1,lVar2);
  lVar2 = *(longlong *)(param_2 + 0x480) + -0xa0;
  if (*(longlong *)(param_2 + 0x480) == 0) {
    lVar2 = 0;
  }
  FUN_1473b6754(param_1,lVar2);
  return;
}



// FUNCTION 1473b655c FUN_1473b655c body=125 status=ok
// SIG undefined FUN_1473b655c(void)

void FUN_1473b655c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x80))) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x78) + uVar3);
      if (uVar2 != 0xff) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + uVar2 * 8);
        FUN_144b0ddfe(lVar1,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 200) + uVar3 * 8));
        if (lVar1 != 0) {
          FUN_14739ac4a(param_1,param_2,uVar3 & 0xffffffff,lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1473b65da FUN_1473b65da body=125 status=ok
// SIG undefined FUN_1473b65da(void)

void FUN_1473b65da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x80))) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x78) + uVar3);
      if (uVar2 != 0xff) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + uVar2 * 8);
        FUN_144b0ddfe(lVar1,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 200) + uVar3 * 8));
        if (lVar1 != 0) {
          FUN_14739ac4a(param_1,param_2,uVar3 & 0xffffffff,lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1473b6658 FUN_1473b6658 body=125 status=ok
// SIG undefined FUN_1473b6658(void)

void FUN_1473b6658(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x80))) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x78) + uVar3);
      if (uVar2 != 0xff) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + uVar2 * 8);
        FUN_144b0ddfe(lVar1,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 200) + uVar3 * 8));
        if (lVar1 != 0) {
          FUN_14739ac4a(param_1,param_2,uVar3 & 0xffffffff,lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1473b66d6 FUN_1473b66d6 body=125 status=ok
// SIG undefined FUN_1473b66d6(void)

void FUN_1473b66d6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x80))) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x78) + uVar3);
      if (uVar2 != 0xff) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + uVar2 * 8);
        FUN_144b0ddfe(lVar1,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 200) + uVar3 * 8));
        if (lVar1 != 0) {
          FUN_14739ac4a(param_1,param_2,uVar3 & 0xffffffff,lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1473b6754 FUN_1473b6754 body=125 status=ok
// SIG undefined FUN_1473b6754(void)

void FUN_1473b6754(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x80))) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x78) + uVar3);
      if (uVar2 != 0xff) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + uVar2 * 8);
        FUN_144b0ddfe(lVar1,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 200) + uVar3 * 8));
        if (lVar1 != 0) {
          FUN_14739ac4a(param_1,param_2,uVar3 & 0xffffffff,lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1473b67d2 FUN_1473b67d2 body=261 status=ok
// SIG undefined FUN_1473b67d2(void)

void FUN_1473b67d2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x150);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    FUN_14739859c(lVar2,0,0);
  }
  lVar2 = *(longlong *)(lVar2 + 0x78);
  if ((*(char *)(lVar2 + 0x74) == '\x02') && (DAT_14ca77c4c != 0)) {
    local_30 = 0;
    local_28 = 0;
    FUN_14318eafa(*(undefined8 *)(param_1 + 0x150));
    FUN_14739639c(*(undefined8 *)(param_1 + 0x150));
    lVar2 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar2 + 0x80) != 0) {
      FUN_14739859c(lVar2,0,0);
    }
    lVar2 = *(longlong *)(lVar2 + 0x78);
  }
  if (*(longlong *)(lVar2 + 0x78) == 0) {
    uVar1 = FUN_1473af9fe(*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x6a8));
    *(undefined8 *)(lVar2 + 0x78) = uVar1;
  }
  lVar2 = param_2 + -0x28;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  FUN_1473b68d8(*(undefined8 *)(param_1 + 0x178),lVar2);
  *(undefined4 *)(lVar2 + 8) = DAT_14c7590b0;
  FUN_1473b6e84(param_1,*(undefined8 *)(lVar2 + 0x38));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b68d8 FUN_1473b68d8 body=1451 status=ok
// SIG undefined FUN_1473b68d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473b68d8(undefined8 *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  uint uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  undefined4 uVar26;
  undefined1 auVar25 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar33 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  longlong lVar37;
  undefined1 auVar38 [16];
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 local_c4 [4];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[1] != param_2) {
    param_1[1] = param_2;
    if (*(int *)(param_1 + 4) != *(int *)((longlong)param_1 + 0x4c)) {
      uVar17 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      puVar18 = param_1 + 10;
      if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        puVar18 = (undefined8 *)param_1[0xb];
      }
      iVar21 = *(int *)((longlong)puVar18 +
                       (ulonglong)(*(int *)(param_1 + 0xc) - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
      if (iVar21 != -1) {
        do {
          puVar1 = (ulonglong *)(param_1[3] + (longlong)iVar21 * 0x18);
          if (*puVar1 == param_2) {
            if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
              uVar22 = puVar1[1];
              param_1[2] = uVar22;
              goto LAB_1473b6a1f;
            }
            break;
          }
          iVar21 = (int)puVar1[2];
        } while (iVar21 != -1);
      }
    }
    uVar19 = FUN_14001cc68(0x110,0x10);
    FUN_1431a6010(uVar19,*param_1,param_2);
    local_d0 = param_1 + 2;
    param_1[2] = uVar19;
    local_d8 = param_1 + 1;
    FUN_1473c294e(param_1 + 3,local_c4);
    uVar22 = param_1[2];
LAB_1473b6a1f:
    auVar16 = _DAT_149931e80;
    if ((longlong)*(int *)(uVar22 + 200) != 0) {
      uVar2 = (longlong)*(int *)(uVar22 + 200) * 0x48 - 0x48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar2;
      uVar24 = SUB164(auVar27 * ZEXT816(0xe38e38e38e38e38f),8);
      uVar26 = (undefined4)(uVar2 / 0x120000000);
      auVar28._0_8_ = CONCAT44(uVar26,uVar24);
      auVar28._8_4_ = uVar24;
      auVar28._12_4_ = uVar26;
      auVar25._0_8_ = auVar28._0_8_ >> 6;
      auVar25._8_8_ = auVar28._8_8_ >> 6;
      puVar20 = (undefined1 *)(*(longlong *)(uVar22 + 0xc0) + 0x479);
      uVar23 = 0;
      auVar27 = pmovsxbq(in_XMM1,0xf0e);
      auVar28 = pmovsxbq(in_XMM2,0xd0c);
      auVar29 = pmovsxbq(in_XMM3,0xb0a);
      auVar30 = pmovsxbq(in_XMM4,0x908);
      auVar31 = pmovsxbq(in_XMM5,0x706);
      auVar32 = pmovsxbq(unaff_XMM6,0x504);
      auVar33 = pmovsxbq(unaff_XMM7,0x302);
      auVar34 = pmovsxbq(unaff_XMM8,0x100);
      do {
        auVar35._8_4_ = (int)uVar23;
        auVar35._0_8_ = uVar23;
        auVar35._12_4_ = (int)(uVar23 >> 0x20);
        auVar38 = auVar25 | auVar16;
        auVar40 = (auVar35 | auVar34) ^ auVar16;
        lVar37 = auVar38._0_8_;
        auVar41._0_8_ = -(ulonglong)(lVar37 < auVar40._0_8_);
        lVar39 = auVar38._8_8_;
        auVar41._8_8_ = -(ulonglong)(lVar39 < auVar40._8_8_);
        auVar48 = pshuflw(unaff_XMM14,auVar41,0xe8);
        auVar40._8_4_ = 0xffffffff;
        auVar40._0_8_ = 0xffffffffffffffff;
        auVar40._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar48 ^ auVar40,auVar48 ^ auVar40);
        if ((auVar40._0_4_ & 1) != 0) {
          puVar20[-0x438] = 0;
        }
        auVar41 = packssdw(auVar41,auVar41);
        auVar48._8_4_ = 0xffffffff;
        auVar48._0_8_ = 0xffffffffffffffff;
        auVar48._12_4_ = 0xffffffff;
        auVar41 = packssdw(auVar41 ^ auVar48,auVar41 ^ auVar48);
        auVar41 = packsswb(auVar41,auVar41);
        if ((auVar41[1] & 1) != 0) {
          puVar20[-0x3f0] = 0;
        }
        auVar41 = (auVar35 | auVar33) ^ auVar16;
        auVar42._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
        auVar42._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
        auVar40 = packssdw(auVar40,auVar42);
        auVar3._8_4_ = 0xffffffff;
        auVar3._0_8_ = 0xffffffffffffffff;
        auVar3._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar3,auVar40 ^ auVar3);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[2] & 1) != 0) {
          puVar20[-0x3a8] = 0;
        }
        auVar41 = pshufhw(auVar42,auVar42,0x84);
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar41 = packssdw(auVar41 ^ auVar4,auVar41 ^ auVar4);
        auVar41 = packsswb(auVar41,auVar41);
        if ((auVar41[3] & 1) != 0) {
          puVar20[-0x360] = 0;
        }
        auVar41 = (auVar35 | auVar32) ^ auVar16;
        auVar43._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
        auVar43._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
        auVar40 = pshuflw(auVar40,auVar43,0xe8);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar5,auVar40 ^ auVar5);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[4] & 1) != 0) {
          puVar20[-0x318] = 0;
        }
        auVar41 = packssdw(auVar43,auVar43);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar41 = packssdw(auVar41 ^ auVar6,auVar41 ^ auVar6);
        auVar41 = packsswb(auVar41,auVar41);
        if ((auVar41[5] & 1) != 0) {
          puVar20[-0x2d0] = 0;
        }
        auVar41 = (auVar35 | auVar31) ^ auVar16;
        auVar44._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
        auVar44._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
        auVar40 = packssdw(auVar40,auVar44);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar7,auVar40 ^ auVar7);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[6] & 1) != 0) {
          puVar20[-0x288] = 0;
        }
        auVar41 = pshufhw(auVar44,auVar44,0x84);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar41 = packssdw(auVar41 ^ auVar8,auVar41 ^ auVar8);
        auVar41 = packsswb(auVar41,auVar41);
        if ((auVar41[7] & 1) != 0) {
          puVar20[-0x240] = 0;
        }
        auVar41 = (auVar35 | auVar30) ^ auVar16;
        auVar45._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
        auVar45._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
        auVar40 = pshuflw(auVar40,auVar45,0xe8);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar9,auVar40 ^ auVar9);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[8] & 1) != 0) {
          puVar20[-0x1f8] = 0;
        }
        auVar41 = packssdw(auVar45,auVar45);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar41 = packssdw(auVar41 ^ auVar10,auVar41 ^ auVar10);
        auVar41 = packsswb(auVar41,auVar41);
        if ((auVar41[9] & 1) != 0) {
          puVar20[-0x1b0] = 0;
        }
        auVar41 = (auVar35 | auVar29) ^ auVar16;
        auVar46._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
        auVar46._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
        auVar40 = packssdw(auVar40,auVar46);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar11,auVar40 ^ auVar11);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[10] & 1) != 0) {
          puVar20[-0x168] = 0;
        }
        auVar41 = pshufhw(auVar46,auVar46,0x84);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar41 = packssdw(auVar41 ^ auVar12,auVar41 ^ auVar12);
        auVar41 = packsswb(auVar41,auVar41);
        if ((auVar41[0xb] & 1) != 0) {
          puVar20[-0x120] = 0;
        }
        auVar41 = (auVar35 | auVar28) ^ auVar16;
        auVar47._0_8_ = -(ulonglong)(lVar37 < auVar41._0_8_);
        auVar47._8_8_ = -(ulonglong)(lVar39 < auVar41._8_8_);
        auVar40 = pshuflw(auVar40,auVar47,0xe8);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar13,auVar40 ^ auVar13);
        unaff_XMM14 = packsswb(auVar40,auVar40);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          puVar20[-0xd8] = 0;
        }
        auVar40 = packssdw(auVar47,auVar47);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar14,auVar40 ^ auVar14);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[0xd] & 1) != 0) {
          puVar20[-0x90] = 0;
        }
        auVar40 = (auVar35 | auVar27) ^ auVar16;
        auVar36._0_8_ = -(ulonglong)(lVar37 < auVar40._0_8_);
        auVar36._8_8_ = -(ulonglong)(lVar39 < auVar40._8_8_);
        auVar40 = packssdw(auVar38,auVar36);
        auVar38._8_4_ = 0xffffffff;
        auVar38._0_8_ = 0xffffffffffffffff;
        auVar38._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar38,auVar40 ^ auVar38);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[0xe] & 1) != 0) {
          puVar20[-0x48] = 0;
        }
        auVar40 = pshufhw(auVar36,auVar36,0x84);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar40 = packssdw(auVar40 ^ auVar15,auVar40 ^ auVar15);
        auVar40 = packsswb(auVar40,auVar40);
        if ((auVar40[0xf] & 1) != 0) {
          *puVar20 = 0;
        }
        uVar23 = uVar23 + 0x10;
        puVar20 = puVar20 + 0x480;
      } while ((uVar2 / 0x48 + 0x10 & 0xfffffffffffffff0) != uVar23);
    }
    *(undefined4 *)(uVar22 + 0x104) = *(undefined4 *)(uVar22 + 0x100);
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b6e84 FUN_1473b6e84 body=125 status=ok
// SIG undefined FUN_1473b6e84(void)

void FUN_1473b6e84(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x80))) {
    uVar3 = 0;
    do {
      uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x78) + uVar3);
      if (uVar2 != 0xff) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x578) + uVar2 * 8);
        FUN_144b0ddfe(lVar1,uVar2,*(undefined4 *)(*(longlong *)(param_2 + 0xd0) + uVar3 * 8));
        if (lVar1 != 0) {
          FUN_14739ad98(param_1,param_2,uVar3 & 0xffffffff,lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_2 + 0x80));
  }
  return;
}



// FUNCTION 1473b6f02 FUN_1473b6f02 body=645 status=ok
// SIG undefined FUN_1473b6f02(void)

bool FUN_1473b6f02(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  void *_Dst;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  ulonglong local_90;
  undefined4 local_88;
  int local_7c;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar13 = *(int *)(param_1 + 0xa0);
  local_70 = param_2;
  if (iVar13 != 0) {
    local_78 = param_1 + 0xc0;
    lVar14 = 0x154;
    lVar16 = 0;
    local_7c = iVar13;
    do {
      if (*(int *)(param_1 + lVar14) != 0) {
        uVar15 = (ulonglong)*(uint *)(param_1 + -0x458 + lVar14 * 4);
        uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 0x80) + 0xd58);
        FUN_1473a8036(local_68);
        local_90 = 0;
        local_98 = local_68;
        _Dst = (void *)FUN_1473a9066(*(undefined8 *)(local_70 + 0x138),uVar15,uVar2,param_3);
        memcpy(_Dst,*(void **)(param_1 + -0x460 + lVar14 * 4),uVar15);
        uVar7 = local_58;
        uVar2 = local_60;
        lVar3 = *(longlong *)(param_1 + 0xc0);
        uVar15 = (ulonglong)local_5c;
        uVar11 = FUN_1473a81fc();
        local_88 = uVar7;
        local_98 = (undefined1 *)0x0;
        local_90 = uVar15;
        bVar8 = FUN_1473a1850(lVar3 + lVar16,0,uVar11,uVar2);
        *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar8;
        *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar8;
        *(undefined4 *)(param_1 + lVar14) = 0;
      }
      iVar13 = local_7c;
      lVar14 = lVar14 + 4;
      lVar16 = lVar16 + 0x48;
    } while (lVar14 != 0x168);
    if (DAT_14c760db4 < 2) {
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        lVar14 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x41 + lVar14) != '\0') goto LAB_1473b70af;
          lVar14 = lVar14 + 0x48;
        } while ((longlong)*(int *)(param_1 + 200) * 0x48 != lVar14);
      }
      if (*(char *)(param_1 + 0xb8) != '\x01') goto LAB_1473b715b;
      uVar11 = *(undefined8 *)(param_1 + 0x88);
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x6a0);
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      uVar12 = FUN_1473b7188(param_1);
      local_98 = (undefined1 *)uVar5;
      FUN_1431a1704(uVar4,uVar12,uVar11,local_78);
    }
    else {
LAB_1473b70af:
      cVar9 = FUN_1473993a0(param_3,*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0xb8),
                            *(undefined8 *)(param_1 + 0x90));
      if (cVar9 == '\0') goto LAB_1473b715b;
      if (*(uint *)(param_1 + 0xa0) != 0) {
        lVar14 = 0;
        uVar10 = *(uint *)(param_1 + 0xa0);
        do {
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x18 + lVar14 * 0x48) != 0) {
              uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar14 * 8);
              plVar1 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar14 * 0x48);
              lVar16 = 0x10;
              uVar15 = 0;
              do {
                *(undefined8 *)(*plVar1 + lVar16) = uVar11;
                uVar15 = uVar15 + 1;
                lVar16 = lVar16 + 0x40;
              } while (uVar15 < *(uint *)(plVar1 + 3));
            }
          }
          lVar14 = lVar14 + 1;
          bVar6 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar6);
      }
      local_98 = (undefined1 *)0x0;
      (*DAT_14ca791f8)(**(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),
                       *(undefined8 *)(param_1 + 0x48),0);
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
LAB_1473b715b:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar13 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b7188 FUN_1473b7188 body=165 status=ok
// SIG undefined FUN_1473b7188(void)

longlong FUN_1473b7188(longlong param_1)

{
  void *_Src;
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    uVar1 = *(int *)(param_1 + 0x20) * 0xc;
    _Src = *(void **)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 **)(param_1 + 0xe0) = puVar3;
      *(undefined8 **)(param_1 + 0xd8) = puVar3;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0xd8);
    }
    FUN_144a5eaa2(puVar3,uVar1,1);
    memcpy((void *)**(undefined8 **)(param_1 + 0xd8),_Src,(ulonglong)uVar1);
    uVar2 = (*(code *)PTR_FUN_14c75b148)(_Src,uVar1,0);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  return param_1 + 0xd0;
}



// FUNCTION 1473b722e FUN_1473b722e body=638 status=ok
// SIG undefined FUN_1473b722e(void)

bool FUN_1473b722e(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  void *_Dst;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  ulonglong local_90;
  undefined4 local_88;
  int local_7c;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar11 = *(int *)(param_1 + 0xa0);
  local_70 = param_2;
  if (iVar11 != 0) {
    local_78 = param_1 + 0xc0;
    lVar12 = 0x154;
    lVar14 = 0;
    local_7c = iVar11;
    do {
      if (*(int *)(param_1 + lVar12) != 0) {
        uVar13 = (ulonglong)*(uint *)(param_1 + -0x458 + lVar12 * 4);
        uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 0x80) + 0xd58);
        FUN_1473a8036(local_68);
        local_90 = 0;
        local_98 = local_68;
        _Dst = (void *)FUN_1473a9066(*(undefined8 *)(local_70 + 0x138),uVar13,uVar2,param_3);
        memcpy(_Dst,*(void **)(param_1 + -0x460 + lVar12 * 4),uVar13);
        uVar2 = local_60;
        lVar3 = *(longlong *)(param_1 + 0xc0);
        uVar13 = (ulonglong)local_5c;
        uVar15 = (ulonglong)local_58;
        uVar9 = FUN_1473a81fc();
        local_88 = 0;
        local_98 = (undefined1 *)uVar15;
        local_90 = uVar13;
        bVar6 = FUN_1473a192a(lVar3 + lVar14,0,uVar9,uVar2);
        *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | bVar6;
        *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | bVar6;
        *(undefined4 *)(param_1 + lVar12) = 0;
      }
      iVar11 = local_7c;
      lVar12 = lVar12 + 4;
      lVar14 = lVar14 + 0x48;
    } while (lVar12 != 0x168);
    if (DAT_14c760db4 < 2) {
      if ((longlong)*(int *)(param_1 + 200) != 0) {
        lVar12 = 0;
        do {
          if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x41 + lVar12) != '\0') goto LAB_1473b73d4;
          lVar12 = lVar12 + 0x48;
        } while ((longlong)*(int *)(param_1 + 200) * 0x48 != lVar12);
      }
      if (*(char *)(param_1 + 0xb8) != '\x01') goto LAB_1473b7480;
      uVar9 = *(undefined8 *)(param_1 + 0x88);
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x6a0);
      uVar13 = *(ulonglong *)(param_1 + 0x90);
      uVar10 = FUN_1473b7188(param_1);
      local_98 = (undefined1 *)uVar13;
      FUN_1431a1704(uVar4,uVar10,uVar9,local_78);
    }
    else {
LAB_1473b73d4:
      cVar7 = FUN_1473993a0(param_3,*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0xb8),
                            *(undefined8 *)(param_1 + 0x90));
      if (cVar7 == '\0') goto LAB_1473b7480;
      if (*(uint *)(param_1 + 0xa0) != 0) {
        lVar12 = 0;
        uVar8 = *(uint *)(param_1 + 0xa0);
        do {
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*(longlong *)(param_1 + 0xc0) + 0x18 + lVar12 * 0x48) != 0) {
              uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + lVar12 * 8);
              plVar1 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar12 * 0x48);
              lVar14 = 0x10;
              uVar13 = 0;
              do {
                *(undefined8 *)(*plVar1 + lVar14) = uVar9;
                uVar13 = uVar13 + 1;
                lVar14 = lVar14 + 0x40;
              } while (uVar13 < *(uint *)(plVar1 + 3));
            }
          }
          lVar12 = lVar12 + 1;
          bVar5 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar5);
      }
      local_98 = (undefined1 *)0x0;
      (*DAT_14ca791f8)(**(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),
                       *(undefined8 *)(param_1 + 0x48),0);
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
LAB_1473b7480:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar11 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b74ae FUN_1473b74ae body=383 status=ok
// SIG undefined FUN_1473b74ae(void)

undefined8 FUN_1473b74ae(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined1 local_68 [8];
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0xa0) != 0) {
    if (*(int *)(param_1 + 0x104) != 0) {
      uVar1 = *(uint *)(param_1 + 0xf8);
      uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 0x80) + 0xd58);
      FUN_1473a8036(local_68);
      local_80 = 0;
      local_88 = local_68;
      _Dst = (void *)FUN_1473a9066(*(undefined8 *)(param_2 + 0x138),(ulonglong)uVar1,uVar2,param_3);
      memcpy(_Dst,*(void **)(param_1 + 0xf0),(ulonglong)uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      uVar6 = FUN_1473a81fc(local_68);
      local_78 = local_58;
      local_88 = (undefined1 *)0x0;
      local_80 = (ulonglong)local_5c;
      FUN_1473a1850(uVar5,0,uVar6,local_60);
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    cVar4 = FUN_1473993a0(param_3,*(undefined8 *)(param_1 + 0x88),1,*(undefined8 *)(param_1 + 0x90))
    ;
    if (cVar4 != '\0') {
      plVar3 = *(longlong **)(param_1 + 0xc0);
      if ((int)plVar3[3] != 0) {
        uVar5 = **(undefined8 **)(param_1 + 0x90);
        lVar7 = 0x10;
        uVar8 = 0;
        do {
          *(undefined8 *)(*plVar3 + lVar7) = uVar5;
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x40;
        } while (uVar8 < *(uint *)(plVar3 + 3));
      }
      local_88 = (undefined1 *)0x0;
      (*DAT_14ca791f8)(**(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),
                       *(undefined8 *)(param_1 + 0x48),0);
      uVar5 = 1;
      goto LAB_1473b7566;
    }
  }
  uVar5 = 0;
LAB_1473b7566:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b762e FUN_1473b762e body=377 status=ok
// SIG undefined FUN_1473b762e(void)

undefined8 FUN_1473b762e(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  uint local_54;
  uint local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0xa0) != 0) {
    if (*(int *)(param_1 + 0x104) != 0) {
      uVar1 = *(uint *)(param_1 + 0xf8);
      uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 0x80) + 0xd58);
      FUN_1473a8036(local_60);
      local_70 = 0;
      local_78 = local_60;
      _Dst = (void *)FUN_1473a9066(*(undefined8 *)(param_2 + 0x138),(ulonglong)uVar1,uVar2,param_3);
      memcpy(_Dst,*(void **)(param_1 + 0xf0),(ulonglong)uVar1);
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      uVar6 = FUN_1473a81fc(local_60);
      local_68 = 0;
      local_78 = (undefined1 *)(ulonglong)local_50;
      local_70 = (ulonglong)local_54;
      FUN_1473a192a(uVar5,0,uVar6,local_58);
      *(undefined4 *)(param_1 + 0x104) = 0;
    }
    cVar4 = FUN_1473993a0(param_3,*(undefined8 *)(param_1 + 0x88),1,*(undefined8 *)(param_1 + 0x90))
    ;
    if (cVar4 != '\0') {
      plVar3 = *(longlong **)(param_1 + 0xc0);
      if ((int)plVar3[3] != 0) {
        uVar5 = **(undefined8 **)(param_1 + 0x90);
        lVar7 = 0x10;
        uVar8 = 0;
        do {
          *(undefined8 *)(*plVar3 + lVar7) = uVar5;
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x40;
        } while (uVar8 < *(uint *)(plVar3 + 3));
      }
      local_78 = (undefined1 *)0x0;
      (*DAT_14ca791f8)(**(undefined8 **)(param_1 + 8),*(undefined4 *)(param_1 + 0x50),
                       *(undefined8 *)(param_1 + 0x48),0);
      uVar5 = 1;
      goto LAB_1473b76e4;
    }
  }
  uVar5 = 0;
LAB_1473b76e4:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b77a8 FUN_1473b77a8 body=1 status=ok
// SIG undefined FUN_1473b77a8(void)

void FUN_1473b77a8(void)

{
  return;
}



// FUNCTION 1473b77aa FUN_1473b77aa body=1 status=ok
// SIG undefined FUN_1473b77aa(void)

void FUN_1473b77aa(void)

{
  return;
}



// FUNCTION 1473b77ac FUN_1473b77ac body=1 status=ok
// SIG undefined FUN_1473b77ac(void)

void FUN_1473b77ac(void)

{
  return;
}



// FUNCTION 1473b77ae FUN_1473b77ae body=277 status=ok
// SIG undefined FUN_1473b77ae(void)

void FUN_1473b77ae(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  memset(*(void **)(param_1 + 0x58),0,(longlong)*(int *)(param_1 + 100) << 3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  (*DAT_14ca79280)(**(undefined8 **)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  (*DAT_14ca79288)(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_1 + 0x10),0,
                   *(undefined4 *)(param_1 + 0x20));
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x1a94) == 0x1002) {
    local_70 = &local_40;
    local_40 = 0x2e;
    local_34 = 0;
    local_3c = 0;
    local_30 = 0x200000001000;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_78 = 1;
    (*DAT_14ca79290)(*(undefined8 *)(param_2 + 0x88),0x1000,0x4000,0);
  }
  (*DAT_14ca79298)(*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_1 + 0x18),0x2000);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b78c4 FUN_1473b78c4 body=1650 status=ok
// SIG undefined FUN_1473b78c4(void)

longlong FUN_1473b78c4(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_388 [32];
  longlong local_368;
  uint local_35c;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  plVar1 = (longlong *)(param_1 + 0x1a48);
  local_368 = param_1;
  local_350 = param_2;
  if ((longlong)*(int *)(param_1 + 0x1a50) < 1) {
    bVar2 = 0;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x1a58);
    bVar2 = 0;
    uVar21 = (longlong)*(int *)(param_1 + 0x1a50);
    do {
      lVar23 = *plVar1;
      lVar4 = *(longlong *)(lVar23 + -8 + uVar21 * 8);
      uVar8 = *(uint *)(lVar4 + 0x40);
      if (0x3f < uVar8) {
        uVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0x58) + uVar12 * 8) != 0) goto LAB_1473b7968;
          uVar12 = uVar12 + 1;
        } while (uVar8 >> 6 != uVar12);
      }
      if (((uVar8 & 0x3f) == 0) ||
         ((*(ulonglong *)(*(longlong *)(lVar4 + 0x58) + (ulonglong)(uVar8 >> 6) * 8) &
          ~(-1L << ((byte)uVar8 & 0x3f))) == 0)) {
        uVar8 = *(uint *)(param_1 + 0x1a50);
        if (uVar21 != uVar8) {
          iVar16 = uVar8 - (int)uVar21;
          if (0 < iVar16) {
            iVar16 = 1;
          }
          memmove((void *)(lVar23 + uVar21 * 8 + -8),
                  (void *)(lVar23 + (longlong)(int)(uVar8 - iVar16) * 8),(longlong)iVar16 << 3);
          uVar8 = *(uint *)(local_368 + 0x1a50);
          param_1 = local_368;
        }
        *(uint *)(param_1 + 0x1a50) = uVar8 - 1;
LAB_1473b79ee:
        FUN_1473aa774(plVar1);
        iVar16 = *(int *)(local_368 + 0x1a60);
        uVar8 = iVar16 + 1;
        *(uint *)(local_368 + 0x1a60) = uVar8;
        if (*(uint *)(local_368 + 0x1a64) < uVar8) {
          FUN_1473aa6ee(plVar5);
        }
        *(longlong *)(*plVar5 + (longlong)iVar16 * 8) = lVar4;
        *(uint *)(lVar4 + 0x3c) = DAT_14c7590b0;
        bVar2 = 1;
        param_1 = local_368;
      }
      else {
LAB_1473b7968:
        if (*(int *)(lVar4 + 0x78) + 10U < DAT_14c7590b0) {
          FUN_1473b7f38(lVar4);
          uVar8 = *(uint *)(local_368 + 0x1a50);
          if (uVar21 != uVar8) {
            iVar16 = uVar8 - (int)uVar21;
            if (0 < iVar16) {
              iVar16 = 1;
            }
            memmove((void *)(*(longlong *)(local_368 + 0x1a48) + (uVar21 - 1) * 8),
                    (void *)(*(longlong *)(local_368 + 0x1a48) + (longlong)(int)(uVar8 - iVar16) * 8
                            ),(longlong)iVar16 << 3);
            uVar8 = *(uint *)(local_368 + 0x1a50);
          }
          *(uint *)(local_368 + 0x1a50) = uVar8 - 1;
          goto LAB_1473b79ee;
        }
      }
      bVar24 = 1 < (longlong)uVar21;
      uVar21 = uVar21 - 1;
    } while (bVar24);
  }
  uVar8 = param_3 + 0xff + (uint)(param_3 == 0) & 0xffffff00;
  iVar16 = *(int *)(param_1 + 0x1a60);
  uVar21 = (ulonglong)iVar16;
  if (0 < (longlong)uVar21) {
    plVar5 = (longlong *)(param_1 + 0x1a58);
    if (!(bool)(~bVar2 & 1 | iVar16 == 1)) {
      lVar23 = *plVar5;
      local_35c = uVar8;
      local_358 = plVar5;
      memset(local_338,0,0x2f0);
      local_340 = lVar23 + uVar21 * 8 + -8;
      local_348 = lVar23;
      fVar25 = logf((float)iVar16);
      local_338[0] = (int)(longlong)(fVar25 + fVar25);
      plVar5 = &local_348;
      do {
        plVar7 = (longlong *)*plVar5;
        plVar9 = (longlong *)plVar5[1];
        iVar16 = (int)plVar5[2];
        iVar11 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar7) >> 3);
        uVar21 = (ulonglong)(iVar11 + 1);
        plVar14 = plVar9;
        plVar19 = plVar7;
        if (iVar16 != 0) {
LAB_1473b7b50:
          if (8 < (int)(uint)uVar21) {
            uVar8 = (uint)uVar21 >> 1;
            lVar23 = plVar7[uVar8];
            plVar7[uVar8] = *plVar7;
            *plVar7 = lVar23;
            plVar20 = plVar14 + 1;
            plVar6 = plVar7;
            do {
              plVar3 = plVar6 + 1;
              plVar15 = plVar6 + 1;
              do {
                plVar22 = plVar15;
                plVar6 = plVar3;
                if (plVar14 < plVar6) break;
                plVar3 = plVar6 + 1;
                plVar15 = plVar22 + 1;
              } while (*(uint *)(*plVar6 + 0x20) <= *(uint *)(*plVar7 + 0x20));
              plVar3 = plVar20 + -2;
              do {
                plVar15 = plVar20;
                plVar10 = plVar3;
                plVar20 = plVar15 + -1;
                if (plVar20 <= plVar7) break;
                plVar3 = plVar10 + -1;
              } while (*(uint *)(*plVar7 + 0x20) <= *(uint *)(*plVar20 + 0x20));
              if (plVar20 < plVar6) goto LAB_1473b7bdf;
              lVar23 = *plVar6;
              *plVar6 = *plVar20;
              *plVar20 = lVar23;
            } while( true );
          }
          if (plVar7 < plVar14) {
            do {
              plVar9 = plVar7;
              if (plVar7 + 1 <= plVar14) {
                plVar19 = plVar7 + 1;
                lVar23 = *plVar7;
                plVar20 = plVar7;
                do {
                  plVar9 = plVar19;
                  lVar4 = *plVar19;
                  if (*(uint *)(*plVar19 + 0x20) <= *(uint *)(lVar23 + 0x20)) {
                    plVar9 = plVar20;
                    lVar4 = lVar23;
                  }
                  plVar19 = plVar19 + 1;
                  lVar23 = lVar4;
                  plVar20 = plVar9;
                } while (plVar19 <= plVar14);
              }
              lVar23 = *plVar9;
              *plVar9 = *plVar14;
              *plVar14 = lVar23;
              plVar14 = plVar14 + -1;
            } while (plVar7 < plVar14);
          }
          goto LAB_1473b7e0f;
        }
LAB_1473b7c72:
        iVar16 = (int)uVar21;
        if (iVar16 != 0) {
          iVar11 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
          iVar18 = iVar11;
joined_r0x0001473b7c99:
          do {
            iVar13 = iVar11 * 2 + 1;
            if (iVar13 < iVar16) {
              iVar17 = iVar11 * 2 + 2;
              if ((iVar17 < iVar16) &&
                 (*(uint *)(plVar7[iVar13] + 0x20) <= *(uint *)(plVar7[iVar17] + 0x20))) {
                iVar13 = iVar17;
              }
              lVar23 = plVar7[iVar11];
              if (*(uint *)(lVar23 + 0x20) < *(uint *)(plVar7[iVar13] + 0x20)) {
                plVar7[iVar11] = plVar7[iVar13];
                plVar7[iVar13] = lVar23;
                iVar11 = iVar13;
                goto joined_r0x0001473b7c99;
              }
            }
            bVar24 = iVar18 != 0;
            iVar11 = iVar18 + -1;
            iVar18 = iVar11;
          } while (bVar24);
          if (1 < iVar16) {
            lVar23 = *plVar7;
            *plVar7 = plVar7[uVar21 - 1];
            plVar7[uVar21 - 1] = lVar23;
            if (iVar16 != 2) {
              do {
                uVar12 = uVar21 - 1;
                iVar16 = 0;
                iVar18 = 1;
                iVar11 = 0;
                do {
                  iVar16 = iVar16 + 2;
                  iVar13 = iVar18;
                  if (((longlong)iVar16 < (longlong)uVar12) &&
                     (*(uint *)(plVar7[iVar18] + 0x20) <= *(uint *)(plVar7[iVar16] + 0x20))) {
                    iVar13 = iVar16;
                  }
                  lVar23 = plVar7[iVar11];
                  if (*(uint *)(plVar7[iVar13] + 0x20) <= *(uint *)(lVar23 + 0x20)) break;
                  plVar7[iVar11] = plVar7[iVar13];
                  plVar7[iVar13] = lVar23;
                  iVar16 = iVar13 * 2;
                  iVar18 = iVar13 * 2 + 1;
                  iVar11 = iVar13;
                } while ((longlong)iVar18 < (longlong)uVar12);
                lVar23 = *plVar7;
                *plVar7 = plVar7[uVar21 - 2];
                plVar7[uVar21 - 2] = lVar23;
                uVar21 = uVar12;
              } while (2 < uVar12);
            }
          }
        }
LAB_1473b7e0f:
        plVar5 = plVar5 + -3;
      } while (&local_348 <= plVar5);
      uVar21 = (ulonglong)*(uint *)(local_368 + 0x1a60);
      plVar5 = local_358;
      param_1 = local_368;
      uVar8 = local_35c;
      if ((int)*(uint *)(local_368 + 0x1a60) < 1) goto LAB_1473b7e5b;
    }
    iVar16 = (int)uVar21;
    lVar23 = *plVar5;
    uVar12 = 0;
    do {
      lVar4 = *(longlong *)(lVar23 + uVar12 * 8);
      if (uVar8 <= *(uint *)(lVar4 + 0x20)) {
        if (iVar16 + -1 != (int)uVar12) {
          memmove((void *)(lVar23 + uVar12 * 8),(void *)(lVar23 + uVar12 * 8 + 8),
                  (longlong)((iVar16 + -1) - (int)uVar12) << 3);
          iVar16 = *(int *)(local_368 + 0x1a60);
          param_1 = local_368;
        }
        *(int *)(param_1 + 0x1a60) = iVar16 + -1;
        FUN_1473aa774(plVar5);
        goto LAB_1473b7e83;
      }
      uVar12 = uVar12 + 1;
    } while ((uVar21 & 0xffffffff) != uVar12);
  }
LAB_1473b7e5b:
  lVar4 = FUN_14001cc68(0x80,0x10);
  FUN_1473b7fbe(lVar4,param_1,local_350,uVar8);
LAB_1473b7e83:
  iVar16 = *(int *)(param_1 + 0x1a50);
  *(uint *)(param_1 + 0x1a50) = iVar16 + 1U;
  if (*(uint *)(param_1 + 0x1a54) < iVar16 + 1U) {
    FUN_1473aa6ee(plVar1,iVar16);
  }
  *(longlong *)(*plVar1 + (longlong)iVar16 * 8) = lVar4;
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
LAB_1473b7bdf:
  lVar23 = *plVar7;
  *plVar7 = *plVar20;
  *plVar20 = lVar23;
  iVar16 = iVar16 + -1;
  plVar15 = plVar15 + -2;
  if ((longlong)plVar10 - (longlong)plVar19 < (longlong)plVar9 - (longlong)plVar22) {
    if (plVar6 < plVar14) {
      *plVar5 = (longlong)plVar6;
      plVar5[1] = (longlong)plVar14;
      *(int *)(plVar5 + 2) = iVar16;
      plVar5 = plVar5 + 3;
    }
    plVar9 = plVar10;
    plVar22 = plVar7;
    if (plVar20 <= plVar7 + 1) goto LAB_1473b7e0f;
  }
  else {
    if (plVar7 + 1 < plVar20) {
      *plVar5 = (longlong)plVar7;
      plVar5[1] = (longlong)plVar15;
      *(int *)(plVar5 + 2) = iVar16;
      plVar5 = plVar5 + 3;
    }
    plVar7 = plVar6;
    plVar15 = plVar14;
    plVar9 = plVar14;
    if (plVar14 <= plVar6) goto LAB_1473b7e0f;
  }
  iVar11 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar22) >> 3);
  uVar21 = (ulonglong)(iVar11 + 1);
  plVar14 = plVar15;
  plVar19 = plVar22;
  if (iVar16 == 0) goto LAB_1473b7c72;
  goto LAB_1473b7b50;
}



// FUNCTION 1473b7f38 FUN_1473b7f38 body=134 status=ok
// SIG undefined FUN_1473b7f38(void)

void FUN_1473b7f38(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar2 = 0;
    lVar3 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x58);
      uVar4 = *(ulonglong *)(lVar6 + lVar3 * 8);
      iVar5 = iVar2;
      if (uVar4 != 0) {
        do {
          if ((uVar4 & 1) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 8);
            *(uint *)(lVar6 + 0x30) = (uint)(*(int *)(lVar6 + 0x30) == 3) << 2;
            *(undefined8 *)(lVar6 + 0x28) = 0;
            *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar5 * 8) = 0;
          }
          bVar1 = 1 < uVar4;
          uVar4 = uVar4 >> 1;
          iVar5 = iVar5 + 1;
        } while (bVar1);
        lVar6 = *(longlong *)(param_1 + 0x58);
      }
      *(undefined8 *)(lVar6 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (lVar3 < *(int *)(param_1 + 0x60));
  }
  return;
}



// FUNCTION 1473b7fbe FUN_1473b7fbe body=203 status=ok
// SIG undefined FUN_1473b7fbe(void)

undefined8 * FUN_1473b7fbe(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  void *_Dst;
  uint uVar2;
  
  _Dst = (void *)0x0;
  FUN_1431a614c();
  *param_1 = &PTR_FUN_14a363360;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  uVar2 = param_4 + 0x3f >> 6;
  *(uint *)(param_1 + 0xc) = uVar2;
  if (param_4 != 0) {
    FUN_14479d316(param_1 + 0xb);
    _Dst = (void *)param_1[0xb];
  }
  memset(_Dst,0,(ulonglong)(uVar2 << 3));
  iVar1 = *(int *)(param_1 + 10);
  *(uint *)(param_1 + 10) = iVar1 + param_4;
  if ((uint)(*(int *)((longlong)param_1 + 0x54) - iVar1) < param_4) {
    FUN_1473c2eda(param_1 + 9);
  }
  memset((void *)((longlong)iVar1 * 8 + param_1[9]),0,(longlong)(int)param_4 << 3);
  return param_1;
}



// FUNCTION 1473b808a FUN_1473b808a body=142 status=ok
// SIG undefined FUN_1473b808a(void)

void FUN_1473b808a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = 0;
  if ((DAT_14ca84e01 == '\x01') && (*(longlong *)(param_1 + 0x570) != 0)) {
    if (DAT_14ca77c50 == 0) {
      uVar2 = FUN_1431ba44c(*(longlong *)(param_1 + 0x570),0);
    }
    else {
      uVar1 = FUN_147399ca2(*(undefined8 *)(param_1 + 0x150));
      uVar2 = (ulonglong)uVar1;
    }
    auVar4._8_4_ = (int)(uVar2 >> 0x20);
    auVar4._0_8_ = uVar2;
    auVar4._12_4_ = 0x45300000;
    uVar3 = (undefined4)
            (longlong)
            (((((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
              (auVar4._8_8_ - 1.9342813113834067e+25)) /
             (((double)CONCAT44(0x43300000,(int)DAT_14ca813c0) - 4503599627370496.0) +
             ((double)CONCAT44(0x45300000,(int)((ulonglong)DAT_14ca813c0 >> 0x20)) -
             1.9342813113834067e+25))) / DAT_14c83f420);
  }
  DAT_14ca84ac0 = uVar3;
  return;
}



// FUNCTION 1473b8118 FUN_1473b8118 body=239 status=ok
// SIG undefined FUN_1473b8118(void)

undefined8 * FUN_1473b8118(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 == 2) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1c;
    *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
    *(undefined4 *)(puVar1 + 2) = 2;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *puVar1 = &PTR_FUN_14a360a38;
    puVar1[5] = 0;
  }
  else if (param_3 == 1) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1c;
    *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
    *(undefined4 *)(puVar1 + 2) = 1;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *puVar1 = &PTR_FUN_14a360a30;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0x1c;
    *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
    *puVar1 = &PTR_FUN_14a363368;
    *(int *)(puVar1 + 2) = param_3;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1473b8208 FUN_1473b8208 body=248 status=ok
// SIG undefined FUN_1473b8208(void)

void FUN_1473b8208(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  
  if ((*(int *)(param_2 + 0x10) == 1) && (*(longlong *)(param_1 + 0x168) != 0)) {
    if (*(int *)(param_2 + 0x30) == 2) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      uVar2 = *(uint *)(param_2 + 0x20);
      bVar4 = (byte)uVar2 & 0x3f;
      puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (ulonglong)(uVar2 >> 6) * 8);
      *puVar1 = *puVar1 & (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4);
      *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    }
    *(undefined4 *)(param_2 + 0x30) = 1;
    lVar3 = *(longlong *)(param_1 + 0x168);
    uVar2 = *(uint *)(lVar3 + 0x40);
    puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (ulonglong)(uVar2 >> 6) * 8);
    *puVar1 = *puVar1 | 1L << ((byte)uVar2 & 0x3f);
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
    *(longlong *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) = param_2;
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x168);
    *(uint *)(param_2 + 0x20) = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar3 + 0x80) != 0) {
      FUN_14739859c(lVar3,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001473b82f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca792a0)(*(undefined8 *)(*(longlong *)(lVar3 + 0x78) + 0x88),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x10),uVar2,1);
    return;
  }
  return;
}



// FUNCTION 1473b8300 FUN_1473b8300 body=487 status=ok
// SIG undefined FUN_1473b8300(void)

void FUN_1473b8300(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(int *)(param_2 + 0x10) == 2) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    if (lVar5 == 0) {
      lVar5 = FUN_14001cc68(0x68,0x10);
      FUN_1473b84e8(lVar5,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x150),4);
      *(longlong *)(param_2 + 0x28) = lVar5;
      uVar3 = FUN_143192298(*(longlong *)(param_1 + 0x120) + 0x5d0,*(int *)(lVar5 + 0x40) << 3,2,4);
      *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58) = uVar3;
      uVar3 = FUN_1473a804a(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) + 0x18);
      *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x60) = uVar3;
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
    *(uint *)(lVar5 + 0x38) = (*(int *)(lVar5 + 0x38) + 1U) % *(uint *)(lVar5 + 0x40);
    lVar5 = *(longlong *)(param_2 + 0x28);
    iVar1 = *(int *)(lVar5 + 0x38);
    lVar2 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar2 + 0x80) != 0) {
      FUN_14739859c(lVar2,0,0);
      lVar5 = *(longlong *)(param_2 + 0x28);
    }
    lVar2 = *(longlong *)(lVar2 + 0x78);
    (*DAT_14ca792b0)(*(undefined8 *)(lVar2 + 0x88),1,*(undefined8 *)(lVar5 + 0x10),iVar1);
    FUN_147398fc4(lVar2,iVar1,1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) + 0x38),1);
    lVar5 = (longlong)iVar1 * 0x20;
    *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x48) + lVar5) = lVar2;
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x48) + 8 + lVar5) =
         *(undefined8 *)(lVar2 + 0xe0);
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x48) + 0x10 + lVar5) =
         *(undefined8 *)(param_1 + 0x490);
    lVar5 = *(longlong *)(param_2 + 0x28);
    uVar4 = *(int *)(lVar5 + 0x3c) + 1;
    if (*(uint *)(lVar5 + 0x40) <= uVar4) {
      uVar4 = *(uint *)(lVar5 + 0x40);
    }
    *(uint *)(lVar5 + 0x3c) = uVar4;
  }
  else if ((*(int *)(param_2 + 0x10) == 1) && (*(longlong *)(param_1 + 0x168) != 0)) {
    *(undefined4 *)(param_2 + 0x30) = 2;
    lVar5 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(lVar5 + 0x80) != 0) {
      FUN_14739859c(lVar5,0,0);
    }
                    /* WARNING: Could not recover jumptable at 0x0001473b837d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14ca792a8)(*(undefined8 *)(*(longlong *)(lVar5 + 0x78) + 0x88),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x10),
                     *(undefined4 *)(param_2 + 0x20),DAT_14ca792a8);
    return;
  }
  return;
}



// FUNCTION 1473b84e8 FUN_1473b84e8 body=122 status=ok
// SIG undefined FUN_1473b84e8(void)

undefined8 * FUN_1473b84e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_4 * 2;
  FUN_1431a614c(param_1,param_2,param_3,iVar1,2,0);
  *param_1 = &PTR_FUN_14a369930;
  param_1[7] = 0;
  *(int *)(param_1 + 8) = param_4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_1473c3006(param_1 + 9);
    _Dst = (void *)param_1[9];
  }
  memset(_Dst,0,(longlong)iVar1 << 5);
  return param_1;
}



// FUNCTION 1473b8562 FUN_1473b8562 body=97 status=ok
// SIG undefined FUN_1473b8562(void)

void FUN_1473b8562(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(*(longlong *)(param_1 + 0x120) + 0x20f9) & 0x40) != 0) {
    FUN_1473a4d72(*(longlong *)(param_1 + 0x120),&local_28);
    *(undefined8 *)(param_2 + 0x50) = local_20;
    *(undefined8 *)(param_2 + 0x10) = local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473b85c4 FUN_1473b85c4 body=84 status=ok
// SIG undefined FUN_1473b85c4(void)

void FUN_1473b85c4(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a360a38;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_1473a2c42(*(longlong *)(lVar1 + 8) + 0x5d0,0,lVar1 + 0x58);
    puVar2 = (undefined8 *)param_1[5];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473b8618 FUN_1473b8618 body=173 status=ok
// SIG undefined FUN_1473b8618(void)

undefined8 * FUN_1473b8618(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  (*DAT_14ca792b8)(*(undefined8 *)param_1[2],*(undefined4 *)(param_1 + 1),
                   *(undefined4 *)((longlong)param_1 + 0xc),param_1);
  FUN_1473b86c6(param_1);
  return param_1;
}



// FUNCTION 1473b86c6 FUN_1473b86c6 body=236 status=ok
// SIG undefined FUN_1473b86c6(void)

void FUN_1473b86c6(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  pbVar1 = (byte *)(*(longlong *)(lVar2 + 0x1138) + (longlong)*(int *)(param_1 + 8) * 0x18);
  *(undefined4 *)(param_1 + 0x58) = 0x16001;
  uVar4 = 0x16001;
  if ((*pbVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0x1f78f;
    uVar3 = (uint)(*(int *)(lVar2 + 0xf08) != 0) << 6;
    uVar4 = uVar3 | 0x1f78f;
    *(uint *)(param_1 + 0x58) = uVar4;
    uVar5 = *(ulonglong *)(lVar2 + 0x20f8);
    if ((uVar5 & 0x40) != 0) {
      uVar4 = uVar3 | 0x41f78f;
      *(uint *)(param_1 + 0x58) = uVar4;
      uVar5 = *(ulonglong *)(lVar2 + 0x20f8);
    }
    uVar3 = (uint)uVar5;
    if ((uVar5 & 0x10) != 0) {
      uVar4 = uVar4 | 0x800000;
      *(uint *)(param_1 + 0x58) = uVar4;
      uVar3 = (uint)*(undefined8 *)(lVar2 + 0x20f8);
    }
    if ((uVar3 >> 0x12 & 1) != 0) {
      uVar4 = uVar4 | 0x180000;
      *(uint *)(param_1 + 0x58) = uVar4;
    }
  }
  if ((*pbVar1 & 2) != 0) {
    *(uint *)(param_1 + 0x58) = uVar4 | 0x1802;
    uVar6 = (uint)*(undefined8 *)(lVar2 + 0x20f8);
    uVar3 = uVar4 | 0x1802;
    if ((uVar6 >> 10 & 1) != 0) {
      *(uint *)(param_1 + 0x58) = uVar4 | 0x2001802;
      uVar6 = (uint)*(undefined8 *)(lVar2 + 0x20f8);
      uVar3 = uVar4 | 0x2001802;
    }
    uVar4 = uVar3;
    if ((uVar6 >> 0xb & 1) != 0) {
      uVar4 = uVar4 | 0x200000;
      *(uint *)(param_1 + 0x58) = uVar4;
    }
  }
  if ((*pbVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x58) = uVar4 | 0x1000;
  }
  return;
}



// FUNCTION 1473b87b2 FUN_1473b87b2 body=63 status=ok
// SIG undefined FUN_1473b87b2(void)

void FUN_1473b87b2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14739cd58(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0001473b87ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1473b87f2 FUN_1473b87f2 body=197 status=ok
// SIG undefined FUN_1473b87f2(void)

void FUN_1473b87f2(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_14480809c(param_1 + 0x98,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_1 + 0xc0) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xc4) == 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    FUN_1473c308c((undefined8 *)(param_1 + 0xb8),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xb8),_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (-1 < *(int *)(param_1 + 0xb4)) {
    return;
  }
  FUN_1473a0dda(param_1 + 0xa8,0);
  return;
}



// FUNCTION 1473b88b8 FUN_1473b88b8 body=9 status=ok
// SIG undefined FUN_1473b88b8(void)

void FUN_1473b88b8(longlong param_1)

{
  thunk_FUN_14739e122(param_1 + 0x60);
  return;
}



// FUNCTION 1473b88c2 FUN_1473b88c2 body=159 status=ok
// SIG undefined FUN_1473b88c2(void)

void FUN_1473b88c2(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x6b0);
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    lVar4 = 0;
    do {
      FUN_1473a3066(uVar2,*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1473b8d02(param_1 + 0xb8,*(undefined4 *)(param_1 + 0x48));
  if ((*(int *)(param_1 + 200) != -1) && (*(char *)(param_1 + 0xcc) != -1)) {
    FUN_1473a3066(uVar2,*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0xffffffffff;
  }
  return;
}



// FUNCTION 1473b8962 FUN_1473b8962 body=176 status=ok
// SIG undefined FUN_1473b8962(void)

void FUN_1473b8962(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x88);
  lVar5 = *(longlong *)(param_1 + 0x88);
  if (lVar5 != lVar4) {
    *(longlong *)(param_1 + 0x88) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  FUN_147372d8e(param_1 + 0x28,param_2 + 0x28);
  return;
}



// FUNCTION 1473b8a12 FUN_1473b8a12 body=186 status=ok
// SIG undefined FUN_1473b8a12(void)

void FUN_1473b8a12(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_28 = &local_30;
  iVar4 = FUN_1473cdab2(param_1 + 0x30);
  if ((iVar4 < 1) && (0 < (longlong)*(int *)(param_1 + 0x48))) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar5 * 8);
      if (lVar3 == local_30) {
        if (local_30 != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar5 * 8) = 0;
          LOCK();
          puVar1 = (uint *)(lVar3 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (*(int *)(param_1 + 0x48) != lVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


