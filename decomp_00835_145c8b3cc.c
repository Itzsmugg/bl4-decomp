// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c8b3cc FUN_145c8b3cc body=120 status=ok
// SIG undefined FUN_145c8b3cc(void)

longlong FUN_145c8b3cc(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145c8b444(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c8b444 FUN_145c8b444 body=117 status=ok
// SIG undefined FUN_145c8b444(void)

undefined8 * FUN_145c8b444(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e20c2c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 145c8b4ba FUN_145c8b4ba body=120 status=ok
// SIG undefined FUN_145c8b4ba(void)

longlong FUN_145c8b4ba(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145c8b622(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c8b532 FUN_145c8b532 body=120 status=ok
// SIG undefined FUN_145c8b532(void)

longlong FUN_145c8b532(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145c8b91e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c8b5aa FUN_145c8b5aa body=120 status=ok
// SIG undefined FUN_145c8b5aa(void)

longlong FUN_145c8b5aa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145c8ba20(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145c8b622 FUN_145c8b622 body=121 status=ok
// SIG undefined FUN_145c8b622(void)

undefined8 * FUN_145c8b622(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e20ca6(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 145c8b69b FUN_145c8b69b body=132 status=ok
// SIG undefined FUN_145c8b69b(void)

void FUN_145c8b69b(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145c8b720 FUN_145c8b720 body=254 status=ok
// SIG undefined FUN_145c8b720(void)

undefined8
FUN_145c8b720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b961b70;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b961b00;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c8b820(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8b820 FUN_145c8b820 body=216 status=ok
// SIG undefined FUN_145c8b820(void)

undefined8 * FUN_145c8b820(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8b906 FUN_145c8b906 body=24 status=ok
// SIG undefined FUN_145c8b906(void)

bool FUN_145c8b906(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145c8b91e FUN_145c8b91e body=258 status=ok
// SIG undefined FUN_145c8b91e(void)

longlong * FUN_145c8b91e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e20d20(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined1 *)(lVar3 + lVar6) = *(undefined1 *)(lVar2 + lVar6);
          FUN_141515f52(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 145c8ba20 FUN_145c8ba20 body=258 status=ok
// SIG undefined FUN_145c8ba20(void)

longlong * FUN_145c8ba20(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e20d9a(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined1 *)(lVar3 + lVar6) = *(undefined1 *)(lVar2 + lVar6);
          FUN_141515f52(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 145c8bb22 FUN_145c8bb22 body=95 status=ok
// SIG undefined FUN_145c8bb22(void)

void FUN_145c8bb22(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 6;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 6) {
    FUN_145c8bb82(param_1,iVar1);
  }
  lVar3 = (longlong)iVar1 * 0x20 + *param_1;
  lVar2 = 0;
  do {
    *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0;
    *(undefined8 *)(lVar3 + lVar2) = 0;
    ((undefined8 *)(lVar3 + lVar2))[1] = 0;
    *(undefined1 *)(lVar3 + 0x10 + lVar2) = 0;
    lVar2 = lVar2 + 0x20;
  } while ((int)lVar2 != 0xc0);
  return;
}



// FUNCTION 145c8bb82 FUN_145c8bb82 body=132 status=ok
// SIG undefined FUN_145c8bb82(void)

void FUN_145c8bb82(longlong param_1,int param_2)

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



// FUNCTION 145c8bc06 FUN_145c8bc06 body=142 status=ok
// SIG undefined FUN_145c8bc06(void)

code * FUN_145c8bc06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c8bc94();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"OutputDevice";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FTonemapperOutputDeviceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14728f932;
}



// FUNCTION 145c8bc94 FUN_145c8bc94 body=265 status=ok
// SIG undefined FUN_145c8bc94(void)

undefined * FUN_145c8bc94(void)

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
              0x110) < DAT_14ca2c4c0) {
    FUN_144b3d300(&DAT_14ca2c4c0);
    if (DAT_14ca2c4c0 == -1) {
      FUN_145c8bd9e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FTonemapperOutputDeviceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2c440,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbf69);
      _Init_thread_footer(&DAT_14ca2c4c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca2c440;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8bd9e FUN_145c8bd9e body=226 status=ok
// SIG undefined FUN_145c8bd9e(void)

longlong * FUN_145c8bd9e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f9802;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8be86 FUN_145c8be86 body=132 status=ok
// SIG undefined FUN_145c8be86(void)

undefined1 * FUN_145c8be86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InverseGamma";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c8be82;
}



// FUNCTION 145c8bf0a FUN_145c8bf0a body=138 status=ok
// SIG undefined FUN_145c8bf0a(void)

code * FUN_145c8bf0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDevice";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c8be86;
}



// FUNCTION 145c8bf9a FUN_145c8bf9a body=38 status=ok
// SIG undefined FUN_145c8bf9a(void)

undefined8 FUN_145c8bf9a(undefined8 param_1,int param_2)

{
  FUN_145c8bfc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8bfc0 FUN_145c8bfc0 body=93 status=ok
// SIG undefined FUN_145c8bfc0(void)

void FUN_145c8bfc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cad60;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  FUN_145c8c01e(param_1 + 5);
  *param_1 = &PTR_LAB_14a8cac90;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c8c01e FUN_145c8c01e body=96 status=ok
// SIG undefined FUN_145c8c01e(void)

void FUN_145c8c01e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145abd15e(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145c64f3a(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8c07e FUN_145c8c07e body=38 status=ok
// SIG undefined FUN_145c8c07e(void)

undefined8 FUN_145c8c07e(undefined8 param_1,int param_2)

{
  FUN_145c8c0a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8c0a4 FUN_145c8c0a4 body=93 status=ok
// SIG undefined FUN_145c8c0a4(void)

void FUN_145c8c0a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cadd0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  FUN_145c8c102(param_1 + 5);
  *param_1 = &PTR_LAB_14a8cac90;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c8c102 FUN_145c8c102 body=96 status=ok
// SIG undefined FUN_145c8c102(void)

void FUN_145c8c102(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145abd15e(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145c64784(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8c162 FUN_145c8c162 body=38 status=ok
// SIG undefined FUN_145c8c162(void)

undefined8 FUN_145c8c162(undefined8 param_1,int param_2)

{
  FUN_145c8c188();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8c188 FUN_145c8c188 body=93 status=ok
// SIG undefined FUN_145c8c188(void)

void FUN_145c8c188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cae40;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  FUN_145c8c1e6(param_1 + 5);
  *param_1 = &PTR_LAB_14a8cac90;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c8c1e6 FUN_145c8c1e6 body=96 status=ok
// SIG undefined FUN_145c8c1e6(void)

void FUN_145c8c1e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145abd15e(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145c640ce(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8c246 FUN_145c8c246 body=174 status=ok
// SIG undefined FUN_145c8c246(void)

void FUN_145c8c246(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x6cd4) = 1;
  UNLOCK();
  lVar5 = 0;
  do {
    while( true ) {
      plVar4 = (longlong *)FUN_145c8c2f4(lVar5 * 0x1200 + param_1 + 0x80);
      if (plVar4 == (longlong *)0x0) break;
      (**(code **)(*plVar4 + 8))(plVar4);
      LOCK();
      *(int *)(param_1 + 0x6cd0) = *(int *)(param_1 + 0x6cd0) + 1;
      UNLOCK();
      uVar3 = *(undefined8 *)(param_1 + 0x6c80);
      lVar5 = 0;
      LOCK();
      puVar1 = (ulonglong *)(plVar4 + 9);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 2;
      UNLOCK();
      if ((uVar2 >> 1 & 1) == 0) {
        lVar5 = 0;
        FUN_144713628(uVar3,plVar4 + 2,0,1);
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  if (*(int *)(param_1 + 0x6cd0) == 0) {
    return;
  }
  FUN_144ae2234(param_1 + 0x6cd6,0x7ff0000000000000);
  return;
}



// FUNCTION 145c8c2f4 FUN_145c8c2f4 body=506 status=ok
// SIG undefined FUN_145c8c2f4(void)

longlong FUN_145c8c2f4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  undefined **local_38;
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x300);
  if ((uVar6 & 1) == 0) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(uint *)(lVar9 + 0x300) = uVar6 | 1;
    LOCK();
    UNLOCK();
    uVar6 = (DAT_14c82b9c4 >> 0x10 ^ DAT_14c82b9c4) * 0x45d9f3b;
    uVar6 = (uVar6 >> 0x10 ^ uVar6) * 0x45d9f3b;
    puVar7 = (uint *)(lVar9 + 0x2fc);
    DAT_14c82b9c4 = DAT_14c82b9c4 + 1;
    *puVar7 = uVar6 >> 0x10 ^ uVar6;
  }
  else {
    puVar7 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2fc);
  }
  plVar1 = param_1 + 0x20;
  plVar8 = plVar1;
  do {
    lVar9 = 0;
    do {
      uVar10 = (ulonglong)((*puVar7 + (int)lVar9 & 0x1f) << 7);
      plVar2 = (longlong *)((longlong)plVar8 + uVar10);
      LOCK();
      bVar11 = *plVar2 == -1;
      if (bVar11) {
        *plVar2 = 0;
      }
      UNLOCK();
      if (bVar11) {
        plVar8 = (longlong *)((longlong)plVar8 + uVar10);
        goto LAB_145c8c379;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x20);
    plVar8 = (longlong *)plVar8[0x200];
  } while (plVar8 != (longlong *)0x0);
  plVar8 = (longlong *)FUN_1467ad79e(plVar1);
LAB_145c8c379:
  do {
    while( true ) {
      do {
        *plVar8 = *param_1;
        LOCK();
        local_38 = (undefined **)CONCAT44(local_38._4_4_,(int)local_38 + 1);
        UNLOCK();
        piVar5 = (int *)*plVar8;
      } while (piVar5 != (int *)*param_1);
      if ((piVar5[0x802] <= *piVar5) && (lVar9 = 0, *(longlong *)(piVar5 + 0x804) == 0))
      goto LAB_145c8c3ab;
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      if (iVar3 < 0x400) break;
      if (*(longlong *)(piVar5 + 0x804) == 0) {
        lVar9 = 0;
        goto LAB_145c8c3ab;
      }
      LOCK();
      piVar4 = (int *)*param_1;
      if (piVar5 == piVar4) {
        *param_1 = *(longlong *)(piVar5 + 0x804);
      }
      UNLOCK();
      if ((piVar5 == piVar4) && (*plVar8 = 0, piVar5 != (int *)0x0)) {
        local_38 = &PTR_LAB_14ab46018;
        local_30 = piVar5;
        FUN_140665d24(plVar1,&local_38,0xffffffff);
      }
    }
    LOCK();
    lVar9 = *(longlong *)(piVar5 + (longlong)iVar3 * 2 + 2);
    *(longlong *)(piVar5 + (longlong)iVar3 * 2 + 2) = -1;
    UNLOCK();
  } while (lVar9 == 0);
LAB_145c8c3ab:
  *plVar8 = 0;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = -1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 145c8c4ef FUN_145c8c4ef body=59 status=ok
// SIG undefined FUN_145c8c4ef(void)

void FUN_145c8c4ef(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c8c52a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14af002c0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  return;
}



// FUNCTION 145c8c52a FUN_145c8c52a body=168 status=ok
// SIG undefined FUN_145c8c52a(void)

undefined8 * FUN_145c8c52a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14af04aa0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 145c8c5de FUN_145c8c5de body=153 status=ok
// SIG undefined FUN_145c8c5de(void)

undefined8 * FUN_145c8c5de(undefined8 *param_1)

{
  FUN_145c8c678();
  *param_1 = &PTR_FUN_14b076490;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  return param_1;
}



// FUNCTION 145c8c678 FUN_145c8c678 body=63 status=ok
// SIG undefined FUN_145c8c678(void)

undefined8 * FUN_145c8c678(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14a3bf720;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 1;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  return param_1;
}



// FUNCTION 145c8c6b8 FUN_145c8c6b8 body=40 status=ok
// SIG undefined FUN_145c8c6b8(void)

undefined8 FUN_145c8c6b8(undefined8 param_1,int param_2)

{
  FUN_145c8c6e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8c6e0 FUN_145c8c6e0 body=137 status=ok
// SIG undefined FUN_145c8c6e0(void)

void FUN_145c8c6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b076490;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_1406feffc(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x76);
  FUN_145c8c76a(param_1);
  return;
}



// FUNCTION 145c8c76a FUN_145c8c76a body=50 status=ok
// SIG undefined FUN_145c8c76a(void)

void FUN_145c8c76a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3bf720;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c8c79c FUN_145c8c79c body=139 status=ok
// SIG undefined FUN_145c8c79c(void)

void FUN_145c8c79c(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  puVar1 = &DAT_14c9a7210;
  if (DAT_14c9a7410 != (undefined8 *)0x0) {
    puVar1 = DAT_14c9a7410;
  }
  if ((longlong)DAT_14c9a7418 != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      if ((*(longlong *)((longlong)puVar1 + lVar3) != 0) &&
         (*(longlong *)(*(longlong *)((longlong)puVar1 + lVar3) + 0x18) == *param_1)) {
        if ((int)uVar2 < 0) {
          return;
        }
        if (DAT_14c9a7418 <= (int)uVar2) {
          return;
        }
        if (puVar1[(ulonglong)(uVar2 & 0x7fffffff) * 2] != 0) {
          DAT_14c9a7208 =
               DAT_14c9a7208 & ~*(uint *)(puVar1[(ulonglong)(uVar2 & 0x7fffffff) * 2] + 0x20);
        }
        FUN_145c8c8ce();
        FUN_145c8c828();
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)DAT_14c9a7418 << 4 != lVar3);
  }
  return;
}



// FUNCTION 145c8c828 FUN_145c8c828 body=57 status=ok
// SIG undefined FUN_145c8c828(void)

void FUN_145c8c828(void)

{
  int iVar1;
  
  iVar1 = FUN_145c8c862(DAT_14c9a7418,DAT_14c9a741c);
  if (iVar1 == DAT_14c9a741c) {
    return;
  }
  DAT_14c9a741c = iVar1;
  FUN_1470e3c04(DAT_14c9a7418,iVar1);
  return;
}



// FUNCTION 145c8c862 FUN_145c8c862 body=108 status=ok
// SIG undefined FUN_145c8c862(void)

ulonglong FUN_145c8c862(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145c8c8ce FUN_145c8c8ce body=138 status=ok
// SIG undefined FUN_145c8c8ce(void)

void FUN_145c8c8ce(uint param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = &DAT_14c9a7210;
  if (DAT_14c9a7410 != (undefined8 *)0x0) {
    puVar4 = DAT_14c9a7410;
  }
  plVar3 = (longlong *)puVar4[(ulonglong)param_1 * 2 + 1];
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
  if (~param_1 + DAT_14c9a7418 != 0) {
    memmove(puVar4 + (ulonglong)param_1 * 2,puVar4 + (ulonglong)param_1 * 2 + 2,
            (longlong)(int)(~param_1 + DAT_14c9a7418) << 4);
  }
  DAT_14c9a7418 = DAT_14c9a7418 + -1;
  return;
}



// FUNCTION 145c8c958 FUN_145c8c958 body=635 status=ok
// SIG undefined FUN_145c8c958(void)

void FUN_145c8c958(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [40];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    lVar4 = FUN_144a7af92();
    if (lVar4 != 0) {
      if ((DAT_14cb8cc08 != 0) && (DAT_14cb8cc00 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*DAT_14cb8cc00 + 0x30))();
        if (cVar3 != '\0') {
          if ((DAT_14cb8cc08 == 0) || (DAT_14cb8cc00 == (longlong *)0x0)) {
            local_68 = (undefined8 *)0x0;
          }
          else {
            (**(code **)(*DAT_14cb8cc00 + 0x38))(DAT_14cb8cc00,&local_68);
          }
          FUN_144928b90(local_50,2);
          local_60 = DAT_14cb8cbb8;
          local_58 = DAT_14cb8cbc0;
          FUN_1411efe9e(local_50);
          puVar2 = local_68;
          lVar5 = FUN_140149a73(lVar4,0);
          if (lVar5 != 0) {
            FUN_140825b72(local_50,puVar2,lVar5,0);
          }
          if (local_28 != 0) {
            FUN_1400020a8();
          }
          if ((DAT_14cb8cc08 != 0) && (DAT_14cb8cc00 != (longlong *)0x0)) {
            (**(code **)*DAT_14cb8cc00)(DAT_14cb8cc00,0);
            FUN_1446efa72(&DAT_14cb8cc00,0,0,0x10);
            DAT_14cb8cc08 = 0;
          }
        }
      }
      if ((DAT_14cb8cc18 != 0) && (DAT_14cb8cc10 != (longlong *)0x0)) {
        cVar3 = (**(code **)(*DAT_14cb8cc10 + 0x30))();
        if (cVar3 != '\0') {
          if ((DAT_14cb8cc18 == 0) || (DAT_14cb8cc10 == (longlong *)0x0)) {
            local_70 = 0;
          }
          else {
            (**(code **)(*DAT_14cb8cc10 + 0x38))(DAT_14cb8cc10,&local_70);
          }
          FUN_144928b90(local_50,3);
          local_60 = DAT_14cb8cbd0;
          local_58 = DAT_14cb8cbd8;
          FUN_1411efe9e(local_50);
          uVar1 = local_70;
          lVar4 = FUN_140149a73(lVar4,0);
          if (lVar4 != 0) {
            FUN_140825b72(local_50,uVar1,lVar4,0);
          }
          if (local_28 != 0) {
            FUN_1400020a8();
          }
          if ((DAT_14cb8cc18 != 0) && (DAT_14cb8cc10 != (longlong *)0x0)) {
            (**(code **)*DAT_14cb8cc10)(DAT_14cb8cc10,0);
            FUN_1446efa72(&DAT_14cb8cc10,0,0,0x10);
            DAT_14cb8cc18 = 0;
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8cbe4 FUN_145c8cbe4 body=31 status=ok
// SIG undefined FUN_145c8cbe4(void)

undefined8 FUN_145c8cbe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8cc04 FUN_145c8cc04 body=61 status=ok
// SIG undefined FUN_145c8cc04(void)

void FUN_145c8cc04(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_145c8cc42(param_1);
    return;
  }
  FUN_1407ddd26(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145c8cc42 FUN_145c8cc42 body=58 status=ok
// SIG undefined FUN_145c8cc42(void)

void FUN_145c8cc42(undefined8 *param_1,int param_2)

{
  FUN_1407ddd26(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145c8cc7c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145c8cc7c FUN_145c8cc7c body=108 status=ok
// SIG undefined FUN_145c8cc7c(void)

void FUN_145c8cc7c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 145c8cce8 FUN_145c8cce8 body=40 status=ok
// SIG undefined FUN_145c8cce8(void)

undefined8 FUN_145c8cce8(undefined8 param_1,int param_2)

{
  FUN_145c8cd10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8cd10 FUN_145c8cd10 body=84 status=ok
// SIG undefined FUN_145c8cd10(void)

void FUN_145c8cd10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3eeb0;
  param_1[5] = &PTR_FUN_14bd3f4d0;
  param_1[6] = &PTR_LAB_14bd3f510;
  if (param_1[0x134] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8cd64(param_1 + 0x123);
  FUN_145821784(param_1);
  return;
}



// FUNCTION 145c8cd64 FUN_145c8cd64 body=103 status=ok
// SIG undefined FUN_145c8cd64(void)

void FUN_145c8cd64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bd3c250;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8cdcc FUN_145c8cdcc body=40 status=ok
// SIG undefined FUN_145c8cdcc(void)

undefined8 FUN_145c8cdcc(undefined8 param_1,int param_2)

{
  FUN_145c8cdf4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8cdf4 FUN_145c8cdf4 body=342 status=ok
// SIG undefined FUN_145c8cdf4(void)

void FUN_145c8cdf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd6ba20;
  param_1[5] = &PTR_FUN_14bd6bdc0;
  param_1[0x13] = &PTR_FUN_14bd6bde0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8cf4a(param_1 + 0x83);
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8cf4a(param_1 + 0x79);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8cfe0(param_1 + 0x6f);
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8cf7f(param_1[0x6b],*(undefined4 *)(param_1 + 0x6c));
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8cfac(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_14008cd94(param_1 + 0x3e);
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145c8cf4a FUN_145c8cf4a body=53 status=ok
// SIG undefined FUN_145c8cf4a(void)

void FUN_145c8cf4a(longlong *param_1)

{
  FUN_145c8d070();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8cf7f FUN_145c8cf7f body=45 status=ok
// SIG undefined FUN_145c8cf7f(void)

void FUN_145c8cf7f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145c8cfac FUN_145c8cfac body=52 status=ok
// SIG undefined FUN_145c8cfac(void)

void FUN_145c8cfac(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x29;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c8cfe0 FUN_145c8cfe0 body=53 status=ok
// SIG undefined FUN_145c8cfe0(void)

void FUN_145c8cfe0(longlong *param_1)

{
  FUN_145c8d016();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8d016 FUN_145c8d016 body=90 status=ok
// SIG undefined FUN_145c8d016(void)

void FUN_145c8d016(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c8d070 FUN_145c8d070 body=346 status=ok
// SIG undefined FUN_145c8d070(void)

void FUN_145c8d070(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c8d1cc FUN_145c8d1cc body=216 status=ok
// SIG undefined FUN_145c8d1cc(void)

undefined8 * FUN_145c8d1cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x800);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b405ec0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x7f0);
  FUN_145c8d346(plVar1);
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145c8d2a8(&local_30,plVar1);
  plVar3 = local_28;
  *param_1 = plVar1;
  param_1[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8d2a8 FUN_145c8d2a8 body=157 status=ok
// SIG undefined FUN_145c8d2a8(void)

void FUN_145c8d2a8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145c8d2e2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145c8d2e2;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145c8d2e2:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c8d341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145c8d346 FUN_145c8d346 body=476 status=ok
// SIG undefined FUN_145c8d346(void)

void FUN_145c8d346(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b0c96b0;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 8;
  *(undefined2 *)(param_1 + 0xdd) = 0;
  param_1[0xdf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xe0] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xe1) = 0xff7fffff;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xe3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x724) = 0;
  param_1[0xe5] = 0;
  *(undefined2 *)(param_1 + 0xe6) = 0;
  *(undefined2 *)((longlong)param_1 + 0x73c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0;
  *(undefined2 *)(param_1 + 0xe9) = 0;
  param_1[0xe8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x754) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x755) = 0x1000002;
  *(undefined1 *)((longlong)param_1 + 0x759) = 0;
  *(undefined2 *)((longlong)param_1 + 0x75c) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0x3f80000041c80000;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined2 *)(param_1 + 0xf2) = 0;
  param_1[0xf7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x785) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined2 *)((longlong)param_1 + 0x79c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x794) = 0;
  *(undefined2 *)(param_1 + 0xf5) = 0;
  param_1[0xf4] = 0;
  *(undefined2 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 5;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xfa] = 0;
  *(undefined2 *)(param_1 + 0xfb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7da) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7dc) = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  return;
}



// FUNCTION 145c8d522 FUN_145c8d522 body=275 status=ok
// SIG undefined FUN_145c8d522(void)

void FUN_145c8d522(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [31];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x818))(param_1,local_19,local_38);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerExitVehicle_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x820))(param_1,local_19,local_38);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8d640 FUN_145c8d640 body=144 status=ok
// SIG undefined FUN_145c8d640(void)

code * FUN_145c8d640(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c8d6d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubstrateTileSpectialComplex";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubstrateTileParameter";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x37000000a9d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ea9c0;
  return FUN_1462d65cc;
}



// FUNCTION 145c8d6d0 FUN_145c8d6d0 body=258 status=ok
// SIG undefined FUN_145c8d6d0(void)

void FUN_145c8d6d0(void)

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
              0x110) < DAT_14c9eaa40) {
    FUN_144b3d300(&DAT_14c9eaa40);
    if (DAT_14c9eaa40 == -1) {
      FUN_145c8d7d4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubstrateTileParameter";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x33;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea9c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf6ff4);
      _Init_thread_footer(&DAT_14c9eaa40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8d7d4 FUN_145c8d7d4 body=226 status=ok
// SIG undefined FUN_145c8d7d4(void)

longlong * FUN_145c8d7d4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d665e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8d8bc FUN_145c8d8bc body=138 status=ok
// SIG undefined FUN_145c8d8bc(void)

code * FUN_145c8d8bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileListBufferOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d87de;
}



// FUNCTION 145c8d946 FUN_145c8d946 body=138 status=ok
// SIG undefined FUN_145c8d946(void)

code * FUN_145c8d946(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileEncoding";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c8d8bc;
}



// FUNCTION 145c8d9d0 FUN_145c8d9d0 body=227 status=ok
// SIG undefined FUN_145c8d9d0(void)

void FUN_145c8d9d0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1415166b2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8dab4 FUN_145c8dab4 body=202 status=ok
// SIG undefined FUN_145c8dab4(void)

void FUN_145c8dab4(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x390) != 0) && (lVar3 = param_3[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *param_3;
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x390) + 0x100))
                (*(longlong **)(param_1 + 0x390),
                 *(undefined8 *)(*(longlong *)(lVar1 + lVar4) + 0x18));
      lVar4 = lVar4 + 0x28;
    } while ((longlong)(int)lVar3 * 0x28 != lVar4);
  }
  FUN_145c8dbc0(local_78,0);
  plVar2 = (longlong *)*param_5;
  if (plVar2 != (longlong *)0x0 && (int)param_5[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2,local_78);
  }
  FUN_145c8db80(local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8db80 FUN_145c8db80 body=64 status=ok
// SIG undefined FUN_145c8db80(void)

void FUN_145c8db80(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8dbc0 FUN_145c8dbc0 body=162 status=ok
// SIG undefined FUN_145c8dbc0(void)

longlong FUN_145c8dbc0(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_144a5dc74(param_1 + 0x28);
  *(char *)(param_1 + 0x38) = (char)param_2;
  FUN_145c8dee8(local_30,param_2);
  FUN_145c8dc64(local_40,*(undefined1 *)(param_1 + 0x38));
  FUN_145c8dd56(param_1,*(undefined1 *)(param_1 + 0x38),local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8dc64 FUN_145c8dc64 body=241 status=ok
// SIG undefined FUN_145c8dc64(void)

undefined8 * FUN_145c8dc64(undefined8 *param_1,char param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    switch(param_2) {
    case '\x01':
      pwVar1 = L"no_connection";
      break;
    case '\x02':
      pwVar1 = L"request_failure";
      break;
    case '\x03':
      pwVar1 = L"invalid_creds";
      break;
    case '\x04':
      pwVar1 = L"invalid_user";
      break;
    case '\x05':
      pwVar1 = L"invalid_auth";
      break;
    case '\x06':
      pwVar1 = L"access_denied";
      break;
    case '\a':
      pwVar1 = L"too_many_requests";
      break;
    case '\b':
      pwVar1 = L"already_pending";
      break;
    case '\t':
      pwVar1 = L"invalid_params";
      break;
    case '\n':
      pwVar1 = L"cant_parse";
      break;
    case '\v':
      pwVar1 = L"invalid_results";
      break;
    case '\f':
      pwVar1 = L"incompatible_version";
      break;
    case '\r':
      pwVar1 = L"not_configured";
      break;
    case '\x0e':
      pwVar1 = L"not_implemented";
      break;
    case '\x0f':
      pwVar1 = L"missing_interface";
      break;
    case '\x10':
      pwVar1 = L"canceled";
      break;
    case '\x11':
      pwVar1 = L"fail_extended";
      break;
    default:
      pwVar1 = L"unknown_error_result";
    }
    FUN_140056680(param_1,pwVar1);
  }
  return param_1;
}



// FUNCTION 145c8dd56 FUN_145c8dd56 body=400 status=ok
// SIG undefined FUN_145c8dd56(void)

void FUN_145c8dd56(longlong param_1,char param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(bool *)param_1 = param_2 == '\0';
  if ((param_2 == '\0') || (param_2 == '\x13')) {
    *(char *)(param_1 + 0x38) = param_2;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_1446f8c06(param_1 + 0x18,0);
    }
    param_4 = (undefined8 *)FUN_140e82300();
    plVar3 = (longlong *)*param_4;
  }
  else {
    *(char *)(param_1 + 0x38) = param_2;
    FUN_144a787a6(param_1 + 8,param_3);
    if (*(int *)(param_3 + 8) < 2) {
      FUN_145c8dc64(&local_30,*(undefined1 *)(param_1 + 0x38));
      if ((longlong **)(param_1 + 0x18) == &local_30) {
        if (local_30 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(param_1 + 0x18) = local_30;
        local_30 = (longlong *)0x0;
        *(undefined4 *)(param_1 + 0x20) = local_28;
        *(undefined4 *)(param_1 + 0x24) = local_24;
      }
    }
    else {
      FUN_144a787a6(param_1 + 0x18,param_3);
    }
    cVar2 = FUN_144a7c5f6(param_4);
    if (cVar2 != '\0') {
      FUN_145c8dee8(&local_30,*(undefined1 *)(param_1 + 0x38));
      FUN_140008f88(param_1 + 0x28,&local_30);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x10))();
      }
      goto LAB_145c8ddc2;
    }
    plVar3 = (longlong *)*param_4;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != plVar3) {
    *(longlong **)(param_1 + 0x28) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_4 + 1);
LAB_145c8ddc2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8dee8 FUN_145c8dee8 body=1656 status=ok
// SIG undefined FUN_145c8dee8(void)

longlong * FUN_145c8dee8(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == '\0') {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar2[1];
  }
  else {
    switch(param_2) {
    case '\x01':
      local_38 = L"NotConnected";
      local_30 = 0xc;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"No valid connection";
      break;
    case '\x02':
      local_38 = L"RequestFailure";
      local_30 = 0xe;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Failed to send request";
      break;
    case '\x03':
      local_38 = L"InvalidCreds";
      local_30 = 0xc;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Invalid credentials";
      break;
    case '\x04':
      local_38 = L"InvalidUser";
      local_30 = 0xb;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"No valid user";
      break;
    case '\x05':
      local_38 = L"InvalidAuth";
      local_30 = 0xb;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"No valid auth";
      break;
    case '\x06':
      local_38 = L"AccessDenied";
      local_30 = 0xc;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Access denied";
      break;
    case '\a':
      local_38 = L"TooManyRequests";
      local_30 = 0xf;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Too many requests";
      break;
    case '\b':
      local_38 = L"AlreadyPending";
      local_30 = 0xe;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Request already pending";
      break;
    case '\t':
      local_38 = L"InvalidParams";
      local_30 = 0xd;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Invalid params specified";
      break;
    case '\n':
      local_38 = L"CantParse";
      local_30 = 9;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Cannot parse results";
      break;
    case '\v':
      local_38 = L"InvalidResults";
      local_30 = 0xe;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Results were invalid";
      break;
    case '\f':
      local_38 = L"IncompatibleVersion";
      local_30 = 0x13;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Incompatible client version";
      break;
    case '\r':
      local_38 = L"NotConfigured";
      local_30 = 0xd;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"No valid configuration";
      break;
    case '\x0e':
      local_38 = L"NotImplemented";
      local_30 = 0xe;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Not implemented";
      break;
    case '\x0f':
      local_38 = L"MissingInterface";
      local_30 = 0x10;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Interface not found";
      break;
    case '\x10':
      local_38 = L"Canceled";
      local_30 = 8;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Operation was canceled";
      break;
    case '\x11':
      local_38 = L"FailExtended";
      local_30 = 0xc;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Extended error";
      break;
    default:
      local_38 = L"Unknown";
      local_30 = 7;
      FUN_1446e940c(local_3c,&local_38);
      local_38 = L"OnlineError";
      local_30 = 0xb;
      FUN_1446e940c(local_40,&local_38);
      pwVar3 = L"Unknown error";
    }
    FUN_140208bae(param_1,local_40,local_3c,pwVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145c8e561 FUN_145c8e561 body=30 status=ok
// SIG undefined FUN_145c8e561(void)

void FUN_145c8e561(longlong param_1)

{
  FUN_145c8e580(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145c8e580 FUN_145c8e580 body=169 status=ok
// SIG undefined FUN_145c8e580(void)

void FUN_145c8e580(longlong *param_1)

{
  param_1[0x3b] = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0x16);
  FUN_144760e21(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c8e62a FUN_145c8e62a body=144 status=ok
// SIG undefined FUN_145c8e62a(void)

code * FUN_145c8e62a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c8e6ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HZBParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHZBParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000002a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b8e30;
}



// FUNCTION 145c8e6ba FUN_145c8e6ba body=265 status=ok
// SIG undefined FUN_145c8e6ba(void)

undefined * FUN_145c8e6ba(void)

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
              0x110) < DAT_14c9c0408) {
    FUN_144b3d300(&DAT_14c9c0408);
    if (DAT_14c9c0408 == -1) {
      FUN_145c8e7c4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHZBParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xe9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0388,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b9090d);
      _Init_thread_footer(&DAT_14c9c0408);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8e7c4 FUN_145c8e7c4 body=226 status=ok
// SIG undefined FUN_145c8e7c4(void)

longlong * FUN_145c8e7c4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b8ec0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8e8ac FUN_145c8e8ac body=132 status=ok
// SIG undefined FUN_145c8e8ac(void)

undefined1 * FUN_145c8e8ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c8e8a8;
}



// FUNCTION 145c8e930 FUN_145c8e930 body=138 status=ok
// SIG undefined FUN_145c8e930(void)

code * FUN_145c8e930(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c8e8ac;
}



// FUNCTION 145c8e9ba FUN_145c8e9ba body=39 status=ok
// SIG undefined FUN_145c8e9ba(void)

void FUN_145c8e9ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_145c8e9e2(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 145c8e9e2 FUN_145c8e9e2 body=216 status=ok
// SIG undefined FUN_145c8e9e2(void)

bool FUN_145c8e9e2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  lVar1 = FUN_1401e9420(*param_2,&local_88,1);
  if (lVar1 != 0) {
    local_60 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      local_60 = 0;
    }
    local_70 = &local_58;
    local_68 = local_88;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_78 = &local_68;
    FUN_140b7c76e(&local_58);
    FUN_14071d490(&local_58,param_1);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8eabc FUN_145c8eabc body=120 status=ok
// SIG undefined FUN_145c8eabc(void)

byte FUN_145c8eabc(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14591f246(param_2);
  bVar1 = (byte)param_2;
  if (lVar2 != 0) {
    local_28 = *param_3;
    bVar1 = FUN_141516940(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10),&local_28,
                          *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8));
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 145c8eb36 FUN_145c8eb36 body=145 status=ok
// SIG undefined FUN_145c8eb36(void)

undefined8 * FUN_145c8eb36(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_145c8ebc8(param_2,param_2 + 3);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1447c44f6(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8ebc8 FUN_145c8ebc8 body=166 status=ok
// SIG undefined FUN_145c8ebc8(void)

void FUN_145c8ebc8(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8ec70 FUN_145c8ec70 body=42 status=ok
// SIG undefined FUN_145c8ec70(void)

void FUN_145c8ec70(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_145c8ec9a();
    return;
  }
  return;
}



// FUNCTION 145c8ec9a FUN_145c8ec9a body=95 status=ok
// SIG undefined FUN_145c8ec9a(void)

void FUN_145c8ec9a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 145c8ecfa FUN_145c8ecfa body=116 status=ok
// SIG undefined FUN_145c8ecfa(void)

void FUN_145c8ecfa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145c8ed70(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14920c406(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145c8ed70 FUN_145c8ed70 body=132 status=ok
// SIG undefined FUN_145c8ed70(void)

void FUN_145c8ed70(longlong param_1,int param_2)

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



// FUNCTION 145c8edf6 FUN_145c8edf6 body=144 status=ok
// SIG undefined FUN_145c8edf6(void)

bool FUN_145c8edf6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c8ee8e FUN_145c8ee8e body=695 status=ok
// SIG undefined FUN_145c8ee8e(void)

void FUN_145c8ee8e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined1 auStack_a8 [36];
  uint local_84;
  int local_80;
  uint local_7c;
  void *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145c8f1c2(&local_60);
  plVar1 = (longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x40);
  pvVar16 = (void *)(longlong)(int)uVar2;
  if (pvVar16 != (void *)0x0) {
    local_70 = (longlong *)*plVar1;
    if ((longlong)local_58 == 0) {
      local_84 = (uint)CONCAT71((int7)((ulonglong)local_70 >> 8),1);
    }
    else {
      lVar11 = *local_70;
      lVar13 = (longlong)local_58 << 3;
      puVar9 = local_60;
      do {
        uVar6 = (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,&local_50);
        if (local_50 == lVar11) goto LAB_145c8effb;
        puVar9 = puVar9 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
      puVar9 = (undefined8 *)0x0;
LAB_145c8effb:
      local_84 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),puVar9 == (undefined8 *)0x0);
    }
    local_80 = 0;
    pvVar15 = (void *)0x0;
LAB_145c8f01a:
    do {
      local_78 = pvVar15;
      uVar14 = (int)local_78 + 1;
      pvVar15 = (void *)(ulonglong)uVar14;
      local_68 = (longlong)(int)local_78;
      if ((int)uVar14 < (int)uVar2) {
        pvVar15 = (void *)(local_68 + 1);
        uVar6 = CONCAT71((int7)(int3)((ulonglong)local_78 >> 8),1);
        local_7c = (uint)uVar6;
        do {
          if ((longlong)local_58 != 0) {
            lVar11 = *(longlong *)((longlong)local_70 + (longlong)pvVar15 * 0xc);
            lVar13 = (longlong)local_58 << 3;
            puVar9 = local_60;
            do {
              uVar6 = (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,&local_50);
              if (local_50 == lVar11) {
                bVar5 = puVar9 == (undefined8 *)0x0 ^ (byte)local_84;
                uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),bVar5);
                if ((bVar5 & 1) != 0) goto LAB_145c8f0aa;
                goto LAB_145c8f086;
              }
              puVar9 = puVar9 + 1;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
          if ((local_84 & 1) == 0) goto LAB_145c8f0da;
LAB_145c8f086:
          pvVar15 = (void *)((longlong)pvVar15 + 1);
          uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),(longlong)pvVar15 < (longlong)pvVar16);
          local_7c = (uint)uVar6;
        } while (pvVar15 != pvVar16);
        pvVar15 = (void *)(ulonglong)uVar2;
LAB_145c8f0aa:
        if ((local_84 & 1) != 0) {
          local_84 = 0;
          local_78 = pvVar15;
          if ((local_7c & 1) == 0) break;
          goto LAB_145c8f01a;
        }
      }
      else {
        if ((byte)local_84 != '\0') break;
        local_7c = 0;
      }
LAB_145c8f0da:
      iVar10 = (int)pvVar15 - (int)local_78;
      pvVar7 = local_78;
      if (local_80 != (int)local_78) {
        pvVar7 = memmove((void *)((longlong)local_70 + (longlong)local_80 * 0xc),
                         (void *)((longlong)local_70 + local_68 * 0xc),(longlong)iVar10 * 0xc);
      }
      local_80 = local_80 + iVar10;
      local_84 = (uint)CONCAT71((int7)((ulonglong)pvVar7 >> 8),1);
    } while ((local_7c & 1) != 0);
    *(int *)(param_1 + 0x40) = local_80;
  }
  if ((longlong)local_58 != 0) {
    puVar9 = local_60 + local_58;
    puVar8 = local_60;
    do {
      plVar3 = (longlong *)*puVar8;
      if ((longlong)*(int *)(param_1 + 0x40) != 0) {
        plVar12 = *(longlong **)(param_1 + 0x38);
        lVar11 = (longlong)*(int *)(param_1 + 0x40) * 0xc;
        do {
          (**(code **)*plVar3)(plVar3,&local_50);
          if (*plVar12 == local_50) {
            if (plVar12 != (longlong *)0x0) goto LAB_145c8ef59;
            break;
          }
          plVar12 = (longlong *)((longlong)plVar12 + 0xc);
          lVar11 = lVar11 + -0xc;
        } while (lVar11 != 0);
      }
      iVar10 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar10 + 1U) {
        FUN_145c8f2be(plVar1,iVar10);
      }
      lVar11 = *plVar1 + (longlong)iVar10 * 0xc;
      (**(code **)*plVar3)(plVar3,lVar11);
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined1 *)(lVar11 + 8) = uVar4;
LAB_145c8ef59:
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar9);
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c8f14a FUN_145c8f14a body=120 status=ok
// SIG undefined FUN_145c8f14a(void)

undefined8 * FUN_145c8f14a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1e18) {
    FUN_144b3d300(&DAT_14c9a1e18);
    if (DAT_14c9a1e18 == -1) {
      FUN_1446f470e(&DAT_14c9a1e10,L"always_loaded",1);
      _Init_thread_footer(&DAT_14c9a1e18);
    }
  }
  *param_2 = DAT_14c9a1e10;
  return param_2;
}



// FUNCTION 145c8f1c2 FUN_145c8f1c2 body=119 status=ok
// SIG undefined FUN_145c8f1c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145c8f1c2(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14595fe5a();
  LOCK();
  UNLOCK();
  LOCK();
  _DAT_14c9a1bf0 = _DAT_14c9a1bf0 + 2;
  UNLOCK();
  for (puVar3 = DAT_14c9a1be8; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    uVar2 = puVar3[2];
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_145c8f23a(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  }
  LOCK();
  UNLOCK();
  LOCK();
  _DAT_14c9a1bf0 = _DAT_14c9a1bf0 + -2;
  UNLOCK();
  return param_1;
}



// FUNCTION 145c8f23a FUN_145c8f23a body=132 status=ok
// SIG undefined FUN_145c8f23a(void)

void FUN_145c8f23a(longlong param_1,int param_2)

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



// FUNCTION 145c8f2be FUN_145c8f2be body=147 status=ok
// SIG undefined FUN_145c8f2be(void)

void FUN_145c8f2be(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c8f351 FUN_145c8f351 body=303 status=ok
// SIG undefined FUN_145c8f351(void)

undefined4 * FUN_145c8f351(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  FUN_145c8f480();
  if (*(char *)(param_3 + 0x1c) == '\x01') {
    *param_1 = *(undefined4 *)(param_3 + 0x18);
  }
  FUN_14115e11a(param_1 + 2,param_3);
  if (*(char *)(param_3 + 0x1d) == '\x01') {
    param_1[6] = *(undefined4 *)(param_3 + 0x20);
    param_1[7] = *(undefined4 *)(param_3 + 0x24);
    param_1[8] = *(undefined4 *)(param_3 + 0x28);
  }
  if (*(char *)(param_3 + 0x1e) == '\x01') {
    FUN_14115e0ba(param_1 + 10,param_3 + 0x30);
  }
  if (*(char *)(param_3 + 0xb8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_3 + 0xb9);
  }
  lVar1 = *(longlong *)(param_3 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_3 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x2e) = lVar1;
  if (*(char *)(param_3 + 0xba) == '\x01') {
    param_1[0x30] = *(undefined4 *)(param_3 + 0xbc);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_3 + 0xc0);
  }
  if (*(char *)(param_3 + 0xc1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc5) = *(undefined1 *)(param_3 + 0xc2);
  }
  if (*(char *)(param_3 + 0xc3) == '\x01') {
    param_1[0x32] = *(undefined4 *)(param_3 + 0xc4);
  }
  if (*(char *)(param_3 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_3 + 0xc9);
  }
  if (*(char *)(param_3 + 0xca) == '\x01') {
    param_1[0x34] = *(undefined4 *)(param_3 + 0xcc);
  }
  return param_1;
}



// FUNCTION 145c8f480 FUN_145c8f480 body=409 status=ok
// SIG undefined FUN_145c8f480(void)

undefined4 * FUN_145c8f480(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_14115e1e0(param_1 + 2,iVar1,0);
    FUN_14115e177(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  FUN_140501b78(param_1 + 10,param_2 + 10);
  lVar3 = *(longlong *)(param_2 + 0x2a);
  *(longlong *)(param_1 + 0x2a) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar11 = DAT_14c950c29;
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  lVar3 = *(longlong *)(param_2 + 0x2e);
  *(longlong *)(param_1 + 0x2e) = lVar3;
  if ((lVar3 != 0 & bVar11) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)param_1 + 0xcd) = *(undefined8 *)((longlong)param_2 + 0xcd);
  uVar4 = param_2[0x31];
  uVar5 = param_2[0x32];
  uVar6 = param_2[0x33];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar4;
  param_1[0x32] = uVar5;
  param_1[0x33] = uVar6;
  *(undefined8 *)(param_1 + 0x36) = 0;
  iVar1 = param_2[0x38];
  _Src = *(void **)(param_2 + 0x36);
  param_1[0x38] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x39] = 0;
  }
  else {
    FUN_14126e37a(param_1 + 0x36,iVar1,0);
    memcpy(*(void **)(param_1 + 0x36),_Src,(longlong)iVar1);
  }
  param_1[0x46] = param_2[0x46];
  uVar2 = *(undefined8 *)(param_2 + 0x3a);
  uVar7 = *(undefined8 *)(param_2 + 0x3c);
  uVar8 = *(undefined8 *)(param_2 + 0x3e);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar10 = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x44) = uVar10;
  *(undefined8 *)(param_1 + 0x3e) = uVar8;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  *(undefined8 *)(param_1 + 0x3a) = uVar2;
  *(undefined8 *)(param_1 + 0x3c) = uVar7;
  return param_1;
}



// FUNCTION 145c8f61e FUN_145c8f61e body=109 status=ok
// SIG undefined FUN_145c8f61e(void)

void FUN_145c8f61e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a3f8bd0;
  puVar1[5] = &PTR_FUN_14a3f9060;
  puVar1[6] = &PTR_LAB_14a3f90a0;
  puVar1[0x22] = 0x3f800000;
  puVar1[0x23] = 0x3f800000;
  puVar4 = &DAT_14c846480;
  puVar5 = puVar1 + 0x24;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(puVar1 + 0x30) = 1;
  return;
}



// FUNCTION 145c8f68c FUN_145c8f68c body=40 status=ok
// SIG undefined FUN_145c8f68c(void)

undefined8 FUN_145c8f68c(undefined8 param_1,int param_2)

{
  FUN_145c8f6b4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8f6b4 FUN_145c8f6b4 body=74 status=ok
// SIG undefined FUN_145c8f6b4(void)

void FUN_145c8f6b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a486540;
  param_1[5] = &PTR_FUN_14a4867e0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8f6fe FUN_145c8f6fe body=40 status=ok
// SIG undefined FUN_145c8f6fe(void)

undefined8 FUN_145c8f6fe(undefined8 param_1,int param_2)

{
  FUN_145c8f726();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8f726 FUN_145c8f726 body=74 status=ok
// SIG undefined FUN_145c8f726(void)

void FUN_145c8f726(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a76b020;
  puVar2 = (undefined8 *)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8f770 FUN_145c8f770 body=40 status=ok
// SIG undefined FUN_145c8f770(void)

undefined8 FUN_145c8f770(undefined8 param_1,int param_2)

{
  FUN_145c8f798();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8f798 FUN_145c8f798 body=74 status=ok
// SIG undefined FUN_145c8f798(void)

void FUN_145c8f798(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abdcaf0;
  param_1[5] = &PTR_FUN_14abdcd90;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8f7ea FUN_145c8f7ea body=448 status=ok
// SIG undefined FUN_145c8f7ea(void)

undefined8 * FUN_145c8f7ea(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac8cc20;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x13] = DAT_14c9ab028;
  *(undefined1 *)(param_1 + 0x14) = 2;
  param_1[0x12] = &PTR_FUN_14a1a0a20;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x1c) = 0x42c80000;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x20) = 0x42c80000;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = &PTR_FUN_14a1a0a60;
  param_1[0x2a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x28] = DAT_14c8464e0;
  param_1[0x29] = uVar1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x30] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x2e] = DAT_14c8464f8;
  param_1[0x2f] = uVar1;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x34] = DAT_14c8464e0;
  param_1[0x35] = uVar1;
  param_1[0x36] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = &PTR_FUN_14a1a0a80;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xc4750000bf800000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 145c8f9b6 FUN_145c8f9b6 body=103 status=ok
// SIG undefined FUN_145c8f9b6(void)

undefined8 * FUN_145c8f9b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14add0f70;
  FUN_14043110a(param_1 + 7);
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_14add3e40;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145c8fa1e FUN_145c8fa1e body=40 status=ok
// SIG undefined FUN_145c8fa1e(void)

undefined8 FUN_145c8fa1e(undefined8 param_1,int param_2)

{
  FUN_145c8fa46();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8fa46 FUN_145c8fa46 body=115 status=ok
// SIG undefined FUN_145c8fa46(void)

void FUN_145c8fa46(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14af0c4c0;
  FUN_145c8faba(param_1[0x16]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8faba FUN_145c8faba body=73 status=ok
// SIG undefined FUN_145c8faba(void)

void FUN_145c8faba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 == 0) {
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145c8fb1a FUN_145c8fb1a body=93 status=ok
// SIG undefined FUN_145c8fb1a(void)

void FUN_145c8fb1a(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x530) == DAT_14cb71810) {
    return;
  }
  plVar2 = (longlong *)FUN_1401b2ade();
  if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar1 != '\0')
     ) {
    return;
  }
  uVar3 = FUN_1403b0700(param_1);
  FUN_145d0a0b4(uVar3,param_1 + 0x530,0);
  return;
}



// FUNCTION 145c8fb78 FUN_145c8fb78 body=40 status=ok
// SIG undefined FUN_145c8fb78(void)

undefined8 FUN_145c8fb78(undefined8 param_1,int param_2)

{
  FUN_145c8fba0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8fba0 FUN_145c8fba0 body=74 status=ok
// SIG undefined FUN_145c8fba0(void)

void FUN_145c8fba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b567900;
  param_1[5] = &PTR_LAB_14b567ea0;
  param_1[0x2d] = &PTR_LAB_14b567ee0;
  if ((longlong *)param_1[0x277] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x277] + 0x10))();
  }
  FUN_1414c321a(param_1);
  return;
}



// FUNCTION 145c8fbea FUN_145c8fbea body=40 status=ok
// SIG undefined FUN_145c8fbea(void)

undefined8 FUN_145c8fbea(undefined8 param_1,int param_2)

{
  FUN_145c8fc12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8fc12 FUN_145c8fc12 body=188 status=ok
// SIG undefined FUN_145c8fc12(void)

void FUN_145c8fc12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7586b0;
  if ((param_1[0x87] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x87] + 0x50));
  }
  if ((param_1[0x81] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x81] + 0x50));
  }
  if ((param_1[0x7b] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x7b] + 0x50));
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410265d4(param_1 + 0x33);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c8fcce FUN_145c8fcce body=38 status=ok
// SIG undefined FUN_145c8fcce(void)

undefined8 FUN_145c8fcce(undefined8 param_1,int param_2)

{
  FUN_145c8fcf4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8fcf4 FUN_145c8fcf4 body=178 status=ok
// SIG undefined FUN_145c8fcf4(void)

void FUN_145c8fcf4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b7dc0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8fda6(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8fde5(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145a24368(param_1);
  return;
}



// FUNCTION 145c8fda6 FUN_145c8fda6 body=63 status=ok
// SIG undefined FUN_145c8fda6(void)

void FUN_145c8fda6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c8fde5 FUN_145c8fde5 body=63 status=ok
// SIG undefined FUN_145c8fde5(void)

void FUN_145c8fde5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c8fe24 FUN_145c8fe24 body=40 status=ok
// SIG undefined FUN_145c8fe24(void)

undefined8 FUN_145c8fe24(undefined8 param_1,int param_2)

{
  FUN_145c8fe4c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c8fe4c FUN_145c8fe4c body=199 status=ok
// SIG undefined FUN_145c8fe4c(void)

void FUN_145c8fe4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba89f30;
  FUN_1414f3614(param_1 + 0x4c);
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c8ff13(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140852690(param_1);
  return;
}



// FUNCTION 145c8ff13 FUN_145c8ff13 body=38 status=ok
// SIG undefined FUN_145c8ff13(void)

void FUN_145c8ff13(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c8ff3a(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 145c8ff3a FUN_145c8ff3a body=65 status=ok
// SIG undefined FUN_145c8ff3a(void)

void FUN_145c8ff3a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
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



// FUNCTION 145c8ff7c FUN_145c8ff7c body=261 status=ok
// SIG undefined FUN_145c8ff7c(void)

undefined8 *
FUN_145c8ff7c(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_145c90082(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c90082 FUN_145c90082 body=423 status=ok
// SIG undefined FUN_145c90082(void)

void FUN_145c90082(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c90158:
    *puVar5 = &PTR_LAB_14b47b160;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3530;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c90158;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b47b160;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3530;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000145c90211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c9022a FUN_145c9022a body=38 status=ok
// SIG undefined FUN_145c9022a(void)

undefined8 FUN_145c9022a(undefined8 param_1,int param_2)

{
  FUN_145c90250();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c90250 FUN_145c90250 body=271 status=ok
// SIG undefined FUN_145c90250(void)

void FUN_145c90250(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x4f8) = &PTR_FUN_14b9062f0;
  FUN_145c9038a(*(undefined8 *)(param_1 + 0x500),*(undefined4 *)(param_1 + 0x508));
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FUN_1400020a8();
  }
  FUN_145878e5e(*(undefined8 *)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x4e8));
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_1400020a8();
  }
  FUN_145c9035f(*(undefined8 *)(param_1 + 0x4d0),*(undefined4 *)(param_1 + 0x4d8));
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FUN_1400020a8();
  }
  FUN_145c9035f(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c8));
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FUN_1400020a8();
  }
  FUN_145c903c6(param_1 + 0x3d8);
  if (*(longlong **)(param_1 + 0x3c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3c8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x10))();
  }
  FUN_1412d6bec(param_1);
  return;
}



// FUNCTION 145c9035f FUN_145c9035f body=43 status=ok
// SIG undefined FUN_145c9035f(void)

void FUN_145c9035f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145c903c6(param_1);
    param_1 = param_1 + 0xe0;
  }
  return;
}



// FUNCTION 145c9038a FUN_145c9038a body=60 status=ok
// SIG undefined FUN_145c9038a(void)

void FUN_145c9038a(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c903c6 FUN_145c903c6 body=159 status=ok
// SIG undefined FUN_145c903c6(void)

void FUN_145c903c6(longlong param_1)

{
  FUN_1412d6a39(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  FUN_1458d82dc(param_1);
  return;
}



// FUNCTION 145c90466 FUN_145c90466 body=67 status=ok
// SIG undefined FUN_145c90466(void)

undefined8 * FUN_145c90466(undefined8 *param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_14031ec32(param_1);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145c904aa(param_2,param_1);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return param_1;
}



// FUNCTION 145c904aa FUN_145c904aa body=187 status=ok
// SIG undefined FUN_145c904aa(void)

void FUN_145c904aa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar7 = 2;
  do {
    lVar2 = *(longlong *)(param_1 + lVar7 * 8);
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x68);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      *(undefined4 *)(puVar6 + 0xd) = uVar1;
      *(undefined1 *)((longlong)puVar6 + 0x6c) = 0;
      *(undefined8 **)(param_2 + lVar7 * 8) = puVar6;
      FUN_145c904aa(lVar2,puVar6);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 6);
  FUN_145c90566(param_2,param_1);
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x48) = uVar5;
  *(undefined8 *)(param_2 + 0x30) = uVar3;
  *(undefined8 *)(param_2 + 0x38) = uVar4;
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = uVar3;
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
  return;
}



// FUNCTION 145c90566 FUN_145c90566 body=89 status=ok
// SIG undefined FUN_145c90566(void)

undefined8 * FUN_145c90566(undefined8 *param_1,undefined8 *param_2)

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
      FUN_143cda7c8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 145c905c0 FUN_145c905c0 body=343 status=ok
// SIG undefined FUN_145c905c0(void)

void FUN_145c905c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c90718(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c90718 FUN_145c90718 body=227 status=ok
// SIG undefined FUN_145c90718(void)

void FUN_145c90718(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_145c9079c;
  FUN_1449027d0(param_1,&local_38);
  pcVar3 = *(char **)(local_38 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
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
  if (pcVar3[0x10] == '\0') {
    if (*(int *)(pcVar3 + 0x14) == 0) {
      iVar4 = 1;
      goto LAB_145c907bf;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x14) + 1;
LAB_145c907bf:
    pcVar3[0x10] = '\0';
    *(int *)(pcVar3 + 0x14) = iVar4;
  }
  if (param_4 != '\0') {
    if (pcVar3[8] == *pcVar3) {
      if (*(int *)(pcVar3 + 4) != 0) goto LAB_145c90793;
      iVar4 = 1;
    }
    else {
      iVar4 = *(int *)(pcVar3 + 4) + 1;
    }
    *pcVar3 = pcVar3[8];
    *(int *)(pcVar3 + 4) = iVar4;
  }
LAB_145c90793:
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
LAB_145c9079c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c907fc FUN_145c907fc body=140 status=ok
// SIG undefined FUN_145c907fc(void)

undefined1 * FUN_145c907fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c90888();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenHardwareRayTracingUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenHardwareRayTracingUniformBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x35;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ed478;
  return &LAB_145e2f12a;
}



// FUNCTION 145c90888 FUN_145c90888 body=275 status=ok
// SIG undefined FUN_145c90888(void)

undefined * FUN_145c90888(void)

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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ed4f8) {
    FUN_144b3d300(&DAT_14c9ed4f8);
    if (DAT_14c9ed4f8 == -1) {
      FUN_145c9099c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LumenHardwareRayTracingUniformBuffer";
      local_78 = L"FLumenHardwareRayTracingUniformBufferParameters";
      local_50 = 0x10;
      local_58 = 0x150;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ed478,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d1200a);
      _Init_thread_footer(&DAT_14c9ed4f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ed478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9099c FUN_145c9099c body=226 status=ok
// SIG undefined FUN_145c9099c(void)

longlong * FUN_145c9099c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d7fe6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c90a84 FUN_145c90a84 body=132 status=ok
// SIG undefined FUN_145c90a84(void)

undefined1 * FUN_145c90a84(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkipBackFaceHitDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x151;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c90a80;
}



// FUNCTION 145c90b08 FUN_145c90b08 body=138 status=ok
// SIG undefined FUN_145c90b08(void)

code * FUN_145c90b08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkipTwoSidedHitDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c90a84;
}



// FUNCTION 145c90b92 FUN_145c90b92 body=38 status=ok
// SIG undefined FUN_145c90b92(void)

undefined8 FUN_145c90b92(undefined8 param_1,int param_2)

{
  FUN_145c90bb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c90bb8 FUN_145c90bb8 body=112 status=ok
// SIG undefined FUN_145c90bb8(void)

void FUN_145c90bb8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a3d08f0;
  FUN_140457ffc(&DAT_14c867450,param_1);
  FUN_140457ffc(&DAT_14c867438,param_1);
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_141517f70(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145806982(param_1);
  return;
}



// FUNCTION 145c90c28 FUN_145c90c28 body=40 status=ok
// SIG undefined FUN_145c90c28(void)

undefined8 FUN_145c90c28(undefined8 param_1,int param_2)

{
  FUN_145c90c50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c90c50 FUN_145c90c50 body=189 status=ok
// SIG undefined FUN_145c90c50(void)

void FUN_145c90c50(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a511ed0;
  param_1[5] = &PTR_FUN_14a5121d0;
  param_1[0x2d] = &PTR_FUN_14a512210;
  plVar3 = (longlong *)param_1[0x81];
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
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x5e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x72];
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
  FUN_145924cf8(param_1 + 0x2e);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145c90d0e FUN_145c90d0e body=112 status=ok
// SIG undefined FUN_145c90d0e(void)

void FUN_145c90d0e(void)

{
  if (DAT_14caea190 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caea180 != 0) {
    FUN_1400020a8();
  }
  FUN_145c90db6(DAT_14caea170,DAT_14caea178);
  if (DAT_14caea170 != 0) {
    FUN_1400020a8();
  }
  DAT_14caea168 = 0;
  if (DAT_14caea160 != 0) {
    FUN_1400020a8();
  }
  FUN_145c90d7e();
  return;
}



// FUNCTION 145c90d7e FUN_145c90d7e body=56 status=ok
// SIG undefined FUN_145c90d7e(void)

void FUN_145c90d7e(void)

{
  FUN_14165e0c4(0);
  if (DAT_14caea140 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caea120 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c90db6 FUN_145c90db6 body=61 status=ok
// SIG undefined FUN_145c90db6(void)

void FUN_145c90db6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c90df4 FUN_145c90df4 body=86 status=ok
// SIG undefined FUN_145c90df4(void)

void FUN_145c90df4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa61cc0;
  param_1[1] = &PTR_FUN_14aa61d10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145c90e4a(param_1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  FUN_140af926c(param_1);
  return;
}



// FUNCTION 145c90e4a FUN_145c90e4a body=53 status=ok
// SIG undefined FUN_145c90e4a(void)

void FUN_145c90e4a(longlong *param_1)

{
  FUN_145c90e80();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c90e80 FUN_145c90e80 body=90 status=ok
// SIG undefined FUN_145c90e80(void)

void FUN_145c90e80(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14074f60a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c90eda FUN_145c90eda body=229 status=ok
// SIG undefined FUN_145c90eda(void)

void FUN_145c90eda(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b7466f0;
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0x7fffffff3f800000;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x3f0000003f800000;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 1;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0x3f800000;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 1;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1f] = 0x47c3500042c80000;
  return;
}



// FUNCTION 145c90fc8 FUN_145c90fc8 body=221 status=ok
// SIG undefined FUN_145c90fc8(void)

undefined8 * FUN_145c90fc8(undefined8 *param_1)

{
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b83cd40;
  param_1[6] = &PTR_FUN_14b83d000;
  param_1[7] = &PTR_LAB_14b83d090;
  param_1[0xb] = 0;
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
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  memset(param_1 + 0x19,0,0x99);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return param_1;
}



// FUNCTION 145c910b0 FUN_145c910b0 body=217 status=ok
// SIG undefined FUN_145c910b0(void)

undefined8 * FUN_145c910b0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409dad0c();
  *param_1 = &PTR_FUN_14befe740;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)((longlong)param_1 + 0x61) = 1;
  FUN_1446ddc76(&local_30,"MovieScene",1);
  local_48 = FUN_14073751e();
  local_40 = 1;
  local_38 = 0;
  lVar1 = FUN_140486aac(param_2,param_1,local_30,local_48);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  param_1[0xd] = lVar1;
  FUN_144757f48(lVar1,8);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9118a FUN_145c9118a body=1986 status=ok
// SIG undefined FUN_145c9118a(void)

void FUN_145c9118a(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60._0_4_ = 1;
  uStack_60._4_4_ = 0;
  FUN_141518130(&local_68,0);
  lVar4 = local_68;
  FUN_140056680(&local_40,L"GbxActorData");
  FUN_140056680(local_58,L"GbxSpawnableData");
  FUN_141517fc0(lVar4,4,local_58,&local_40);
  iVar1 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,iVar1);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"GbxActorData.GbxActorDef");
  FUN_140056680(local_58,L"GbxActorData.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"GbxActorDef.bCanAdjustSpawnLocation");
  FUN_140056680(local_58,L"GbxActorDef.can_adjust_spawn_location");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"GbxPreviewComponent.GbxActorDef");
  FUN_140056680(local_58,L"GbxPreviewComponent.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"GbxPreviewComponent.bUseDefaultGbxActorDef");
  FUN_140056680(local_58,L"GbxPreviewComponent.bUseDefaultGbxActorDef");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnEncounter.SpawnerActivation");
  FUN_140056680(local_58,L"SpawnEncounter.Activation");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnerComponent.GbxActorDef");
  FUN_140056680(local_58,L"SpawnerComponent.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnBlueprintLibrary.GbxSpawnActorAtSpawnPoint.GbxActorDef");
  FUN_140056680(local_58,L"SpawnBlueprintLibrary.GbxSpawnActorAtSpawnPoint.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnBlueprintLibrary.GbxSpawnActorAtSpawnPointComponent.GbxActorDef");
  FUN_140056680(local_58,L"SpawnBlueprintLibrary.GbxSpawnActorAtSpawnPointComponent.SpawnDefinition"
               );
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnBlueprintLibrary.GbxSpawnActorAtTransform.GbxActorDef");
  FUN_140056680(local_58,L"SpawnBlueprintLibrary.GbxSpawnActorAtTransform.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnBlueprintLibrary.GenerateSpawnerByRadius.GbxActorDef");
  FUN_140056680(local_58,L"SpawnBlueprintLibrary.GenerateSpawnerByRadius.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner.GbxActorDef");
  FUN_140056680(local_58,L"SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner.SpawnDefinition");
  FUN_141517fc0(lVar4,0x20,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"Spawner.SetGbxActorDef");
  FUN_140056680(local_58,L"Spawner.SetSpawnDefinition");
  FUN_141517fc0(lVar4,0x10,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnerComponent.SetGbxActorDef");
  FUN_140056680(local_58,L"SpawnerComponent.SetSpawnDefinition");
  FUN_141517fc0(lVar4,0x10,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"SpawnPoint.ResetStretchyPoints");
  FUN_140056680(local_58,L"SpawnPoint.ResetStretchyPoint");
  FUN_141517fc0(lVar4,0x10,local_58,&local_40);
  uVar2 = (uint)uStack_60;
  lVar4 = (longlong)(int)(uint)uStack_60;
  uStack_60._0_4_ = (uint)uStack_60 + 1;
  if (uStack_60._4_4_ < (uint)uStack_60) {
    FUN_141518130(&local_68,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_68;
  FUN_140056680(&local_40,L"/Script/GbxSpawn.ESpawnEncounterEventEnableMode");
  FUN_140056680(local_58,L"/Script/GbxSpawn.ESpawnEncounterSpawnerEnableMode");
  FUN_141517fc0(lVar4,8,local_58,&local_40);
  FUN_140056680(&local_40,L"GbxSpawn");
  local_78 = local_68;
  local_70 = (uint)uStack_60;
  FUN_141071fba(&local_78,&local_40);
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58[0] = 0;
  local_48 = FUN_145c9194d();
  local_40 = &local_48;
  local_38 = local_58;
  FUN_145c919fe(local_2c,&local_40);
  local_58[0] = 0;
  local_48 = FUN_145c9194d();
  local_40 = &local_48;
  local_38 = local_58;
  FUN_145c91cee(local_2c,&local_40);
  uVar3 = FUN_140927942();
  FUN_145c91986(uVar3,0x4000);
  FUN_1407a3a24(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9194d FUN_145c9194d body=57 status=ok
// SIG undefined FUN_145c9194d(void)

void FUN_145c9194d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a370 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a370 = FUN_140002ddd(FUN_1417fe1d2,uVar1,L"GbxActorDef");
  }
  return;
}



// FUNCTION 145c91986 FUN_145c91986 body=44 status=ok
// SIG undefined FUN_145c91986(void)

void FUN_145c91986(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_140315840();
    if (lVar1 == 0) {
      plVar2 = (longlong *)FUN_145c919b2();
      *plVar2 = param_1;
      *(undefined4 *)(plVar2 + 1) = param_2;
    }
  }
  return;
}



// FUNCTION 145c919b2 FUN_145c919b2 body=75 status=ok
// SIG undefined FUN_145c919b2(void)

undefined8 * FUN_145c919b2(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  iVar1 = DAT_14c9a6208;
  lVar3 = (longlong)(int)DAT_14c9a6208;
  DAT_14c9a6208 = DAT_14c9a6208 + 1;
  if (DAT_14c9a620c < DAT_14c9a6208) {
    FUN_1470d97ec(iVar1);
  }
  puVar2 = &DAT_14c9a6180;
  if (DAT_14c9a6200 != (undefined8 *)0x0) {
    puVar2 = DAT_14c9a6200;
  }
  return puVar2 + lVar3 * 2;
}



// FUNCTION 145c919fe FUN_145c919fe body=335 status=ok
// SIG undefined FUN_145c919fe(void)

undefined4 * FUN_145c919fe(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c91be0(local_40);
  uVar7 = *(ulonglong *)*param_2;
  *local_38 = uVar7;
  local_38[1] = (ulonglong)&LAB_1437ed6be;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145c91b4e(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14c9a6350 - DAT_14c9a637c;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14c9a6390)) {
      uVar4 = DAT_14c9a6390 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0x14) = uVar4;
      puVar6 = DAT_14c9a6388;
      if (DAT_14c9a6388 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a6380;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14c9a6390 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14c9a6388;
      if (DAT_14c9a6388 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a6380;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c9a6390 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14c9a6390 = iVar8;
      FUN_145c91ffc();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c91b4e FUN_145c91b4e body=145 status=ok
// SIG undefined FUN_145c91b4e(void)

undefined8 FUN_145c91b4e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a6350 - DAT_14c9a637c != 1) && (DAT_14c9a6350 != DAT_14c9a637c)) {
    puVar6 = &DAT_14c9a6380;
    if (DAT_14c9a6388 != (undefined *)0x0) {
      puVar6 = DAT_14c9a6388;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a6390 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a6348 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145e03ab4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c91be0 FUN_145c91be0 body=270 status=ok
// SIG undefined FUN_145c91be0(void)

int * FUN_145c91be0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a6378;
  iVar3 = DAT_14c9a6350;
  if (DAT_14c9a637c == 0) {
    iVar2 = DAT_14c9a6350 + 1;
    bVar7 = DAT_14c9a6354 == DAT_14c9a6350;
    DAT_14c9a6350 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a6348,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a6358,1);
    puVar4 = DAT_14c9a6368;
    if (DAT_14c9a6368 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a6358;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a6378;
    DAT_14c9a6378 = *(int *)(DAT_14c9a6348 + 4 + lVar6 * 0x18);
    DAT_14c9a637c = DAT_14c9a637c + -1;
    if (DAT_14c9a637c != 0) {
      *(undefined4 *)(DAT_14c9a6348 + (longlong)DAT_14c9a6378 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a6358;
  if (DAT_14c9a6368 != (undefined *)0x0) {
    puVar4 = DAT_14c9a6368;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a6348;
  return param_1;
}



// FUNCTION 145c91cee FUN_145c91cee body=357 status=ok
// SIG undefined FUN_145c91cee(void)

undefined4 * FUN_145c91cee(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145c91eee(local_40);
  uVar7 = *(ulonglong *)*param_2;
  *local_38 = uVar7;
  local_38[1] = (ulonglong)FUN_1437ed6cc;
  local_38[2] = (ulonglong)&LAB_147e27a36;
  local_38[3] = (ulonglong)&LAB_1437ed6ec;
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145c91e54(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14c9a63a0 - DAT_14c9a63cc;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14c9a63e0)) {
      uVar4 = DAT_14c9a63e0 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0x24) = uVar4;
      puVar6 = DAT_14c9a63d8;
      if (DAT_14c9a63d8 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a63d0;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14c9a63e0 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14c9a63d8;
      if (DAT_14c9a63d8 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a63d0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c9a63e0 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14c9a63e0 = iVar8;
      FUN_145c9220a();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c91e54 FUN_145c91e54 body=153 status=ok
// SIG undefined FUN_145c91e54(void)

undefined8 FUN_145c91e54(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined *puVar10;
  
  if ((DAT_14c9a63a0 - DAT_14c9a63cc != 1) && (DAT_14c9a63a0 != DAT_14c9a63cc)) {
    puVar10 = &DAT_14c9a63d0;
    if (DAT_14c9a63d8 != (undefined *)0x0) {
      puVar10 = DAT_14c9a63d8;
    }
    iVar9 = *(int *)(puVar10 + (ulonglong)(DAT_14c9a63e0 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a6398 + (longlong)iVar9 * 0x28);
        if (*plVar1 == *param_2) {
          lVar6 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar7 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar8 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          *(int *)(plVar1 + 2) = (int)param_2[2];
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar8;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar6;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar7;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145e03944(*param_3);
          *param_3 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar1[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145c91eee FUN_145c91eee body=270 status=ok
// SIG undefined FUN_145c91eee(void)

int * FUN_145c91eee(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a63c8;
  iVar3 = DAT_14c9a63a0;
  if (DAT_14c9a63cc == 0) {
    iVar2 = DAT_14c9a63a0 + 1;
    bVar7 = DAT_14c9a63a4 == DAT_14c9a63a0;
    DAT_14c9a63a0 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14c9a6398,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a63a8,1);
    puVar4 = DAT_14c9a63b8;
    if (DAT_14c9a63b8 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a63a8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c9a63c8;
    DAT_14c9a63c8 = *(int *)(DAT_14c9a6398 + 4 + lVar6 * 0x28);
    DAT_14c9a63cc = DAT_14c9a63cc + -1;
    if (DAT_14c9a63cc != 0) {
      *(undefined4 *)(DAT_14c9a6398 + (longlong)DAT_14c9a63c8 * 0x28) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a63a8;
  if (DAT_14c9a63b8 != (undefined *)0x0) {
    puVar4 = DAT_14c9a63b8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14c9a6398;
  return param_1;
}



// FUNCTION 145c91ffc FUN_145c91ffc body=524 status=ok
// SIG undefined FUN_145c91ffc(void)

void FUN_145c91ffc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a6388 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a6388,0,0,4);
  }
  uVar7 = DAT_14c9a6390;
  uVar2 = local_50;
  if (DAT_14c9a6390 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14c9a6380,0,DAT_14c9a6390,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14c9a6388;
        if (DAT_14c9a6388 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a6380;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c9a6390 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a6358;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a6370 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a6348;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14c9a6390 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar4 * 0x18) = iVar8;
        puVar5 = DAT_14c9a6388;
        if (DAT_14c9a6388 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a6380;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c9a6390 - 1U & uVar9) * 4);
        puVar5 = DAT_14c9a6388;
        if (DAT_14c9a6388 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a6380;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a6390 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c9220a FUN_145c9220a body=524 status=ok
// SIG undefined FUN_145c9220a(void)

void FUN_145c9220a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a63d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a63d8,0,0,4);
  }
  uVar7 = DAT_14c9a63e0;
  uVar2 = local_50;
  if (DAT_14c9a63e0 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14c9a63d0,0,DAT_14c9a63e0,4);
    if (0 < (int)uVar7) {
      do {
        puVar5 = DAT_14c9a63d8;
        if (DAT_14c9a63d8 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a63d0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c9a63e0 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a63a8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a63c0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a6398;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar4 = (longlong)iVar3;
        uVar9 = *(ulonglong *)(lVar1 + lVar4 * 0x28);
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14c9a63e0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x24 + lVar4 * 0x28) = iVar8;
        puVar5 = DAT_14c9a63d8;
        if (DAT_14c9a63d8 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a63d0;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar4 * 0x28) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c9a63e0 - 1U & uVar9) * 4);
        puVar5 = DAT_14c9a63d8;
        if (DAT_14c9a63d8 == (undefined *)0x0) {
          puVar5 = &DAT_14c9a63d0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a63e0 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c92417 FUN_145c92417 body=67 status=ok
// SIG undefined FUN_145c92417(void)

void FUN_145c92417(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c9245a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a774d40;
  puVar1[5] = &PTR_FUN_14a774fe0;
  puVar1[6] = &PTR_FUN_14a774ff0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  return;
}



// FUNCTION 145c9245a FUN_145c9245a body=277 status=ok
// SIG undefined FUN_145c9245a(void)

undefined8 * FUN_145c9245a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab24500;
  param_1[5] = &PTR_FUN_14ab247a0;
  param_1[6] = &PTR_FUN_14ab247b0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  return param_1;
}



// FUNCTION 145c92570 FUN_145c92570 body=175 status=ok
// SIG undefined FUN_145c92570(void)

void FUN_145c92570(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141518244(&local_38,local_20);
  *(undefined8 *)(param_3 + 4) = local_28;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c92620 FUN_145c92620 body=123 status=ok
// SIG undefined FUN_145c92620(void)

void FUN_145c92620(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x280);
  FUN_145c9269c(param_2);
  *param_2 = &PTR_FUN_14b63c960;
  memset(param_2 + 0x36,0,0x81);
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  *(undefined8 *)((longlong)param_2 + 0x199) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a1) = 0;
  return;
}



// FUNCTION 145c9269c FUN_145c9269c body=135 status=ok
// SIG undefined FUN_145c9269c(void)

undefined8 * FUN_145c9269c(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1411b9bf0();
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b99ae50;
  lVar1 = FUN_1458ad644();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[10] = lVar1;
  return param_1;
}



// FUNCTION 145c92724 FUN_145c92724 body=345 status=ok
// SIG undefined FUN_145c92724(void)

void FUN_145c92724(longlong param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_144729dda(param_1 + 0xc18);
  if (cVar3 != '\0') {
    uVar4 = FUN_14479d2ce(param_1 + 0xc18);
    local_58 = 0;
    FUN_14485c47a(&local_58,uVar4);
    uVar4 = local_58;
    if (*param_4 == 0) {
      uVar5 = FUN_14479d2ce();
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,4,0x10);
      puVar1 = local_50;
      local_48 = 4;
      *local_50 = &PTR_LAB_14b96b8b0;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_50[2] = lVar6;
      *local_50 = &PTR_FUN_14b96d1a0;
      local_50[3] = 0;
      FUN_14485c47a(local_50 + 3,uVar5);
      puVar1[4] = uVar4;
      *(undefined1 *)(puVar1 + 5) = param_2;
      puVar1[6] = param_1;
      FUN_145c9287e(param_3,&local_60,&local_50);
      FUN_1449db362(&local_50);
      *param_4 = local_60;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9287e FUN_145c9287e body=216 status=ok
// SIG undefined FUN_145c9287e(void)

undefined8 * FUN_145c9287e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c9296c FUN_145c9296c body=151 status=ok
// SIG undefined FUN_145c9296c(void)

void FUN_145c9296c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_145c92a04();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d6d8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 145c92a04 FUN_145c92a04 body=261 status=ok
// SIG undefined FUN_145c92a04(void)

void FUN_145c92a04(void)

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
              0x110) < DAT_14cc1d758) {
    FUN_144b3d300(&DAT_14cc1d758);
    if (DAT_14cc1d758 == -1) {
      FUN_145c92b0a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSkinedMeshWriteDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x59;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1d6d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14452f1f1);
      _Init_thread_footer(&DAT_14cc1d758);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c92b0a FUN_145c92b0a body=226 status=ok
// SIG undefined FUN_145c92b0a(void)

longlong * FUN_145c92b0a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14673c254;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c92bf2 FUN_145c92bf2 body=130 status=ok
// SIG undefined FUN_145c92bf2(void)

undefined1 * FUN_145c92bf2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c92bee;
}



// FUNCTION 145c92c74 FUN_145c92c74 body=138 status=ok
// SIG undefined FUN_145c92c74(void)

code * FUN_145c92c74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494d4d12;
}



// FUNCTION 145c92cfe FUN_145c92cfe body=67 status=ok
// SIG undefined FUN_145c92cfe(void)

void FUN_145c92cfe(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  FUN_145c92d42(param_1 + 0x30);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c92d42 FUN_145c92d42 body=77 status=ok
// SIG undefined FUN_145c92d42(void)

void FUN_145c92d42(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c92d90(param_1,DAT_14ca8b9f8);
  if (0 < *(int *)(param_1 + 0x88)) {
    uVar1 = *param_2;
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar3 = param_1;
      }
      *(undefined8 *)(lVar3 + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 145c92d90 FUN_145c92d90 body=84 status=ok
// SIG undefined FUN_145c92d90(void)

void FUN_145c92d90(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x88) = param_2;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14742ceb6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x88) = param_2;
      FUN_14742cf2e();
      return;
    }
  }
  return;
}



// FUNCTION 145c92df0 FUN_145c92df0 body=104 status=ok
// SIG undefined FUN_145c92df0(void)

undefined8 * FUN_145c92df0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a448310;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) & 0xfe;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 145c92e64 FUN_145c92e64 body=104 status=ok
// SIG undefined FUN_145c92e64(void)

undefined8 * FUN_145c92e64(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_14a58c230;
  param_1[5] = &PTR_LAB_14a58c4e0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 145c92ed8 FUN_145c92ed8 body=104 status=ok
// SIG undefined FUN_145c92ed8(void)

undefined8 * FUN_145c92ed8(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64e350;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 145c92f4c FUN_145c92f4c body=104 status=ok
// SIG undefined FUN_145c92f4c(void)

undefined8 * FUN_145c92f4c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a663860;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 145c92fc0 FUN_145c92fc0 body=104 status=ok
// SIG undefined FUN_145c92fc0(void)

undefined8 * FUN_145c92fc0(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a690e40;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  return param_1;
}



// FUNCTION 145c93034 FUN_145c93034 body=104 status=ok
// SIG undefined FUN_145c93034(void)

undefined8 * FUN_145c93034(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_14a6a7b50;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x20;
  return param_1;
}



// FUNCTION 145c930a8 FUN_145c930a8 body=219 status=ok
// SIG undefined FUN_145c930a8(void)

undefined8 * FUN_145c930a8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9bdec0;
  param_1[0x72] = &PTR_FUN_14a9be580;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  lVar1 = FUN_144a6c4d8();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x76] = lVar1;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar2 = FUN_145a1e508();
    FUN_147b9df7e(uVar2,param_1);
  }
  return param_1;
}



// FUNCTION 145c93184 FUN_145c93184 body=123 status=ok
// SIG undefined FUN_145c93184(void)

void FUN_145c93184(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = 0;
  lVar2 = 0;
  do {
    FUN_141518296();
    if (DAT_14cb05a00 <= lVar2) break;
    FUN_141518296();
    local_24 = (int)lVar2 + 0xe2;
    cVar1 = (*(code *)*param_1)(param_1[1],&local_24,DAT_14cb059f8 + lVar3);
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 0x30;
  } while (cVar1 != '\0');
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c93200 FUN_145c93200 body=40 status=ok
// SIG undefined FUN_145c93200(void)

undefined8 FUN_145c93200(undefined8 param_1,int param_2)

{
  FUN_145c93228();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c93228 FUN_145c93228 body=62 status=ok
// SIG undefined FUN_145c93228(void)

void FUN_145c93228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab80f60;
  FUN_145c93266(param_1 + 0x7c);
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145c93266 FUN_145c93266 body=128 status=ok
// SIG undefined FUN_145c93266(void)

void FUN_145c93266(longlong *param_1)

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



// FUNCTION 145c932f2 FUN_145c932f2 body=104 status=ok
// SIG undefined FUN_145c932f2(void)

undefined8 * FUN_145c932f2(undefined8 *param_1)

{
  FUN_140b96638();
  *param_1 = &PTR_FUN_14b097160;
  param_1[5] = &PTR_FUN_14b0977d0;
  param_1[6] = &PTR_LAB_14b097810;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x4000;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  return param_1;
}



// FUNCTION 145c9335a FUN_145c9335a body=38 status=ok
// SIG undefined FUN_145c9335a(void)

undefined8 FUN_145c9335a(undefined8 param_1,int param_2)

{
  FUN_145c93380();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c93380 FUN_145c93380 body=77 status=ok
// SIG undefined FUN_145c93380(void)

void FUN_145c93380(IFileManipulator *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_14b439b50;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000145c933b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  renoir::IFileManipulator::~IFileManipulator(param_1);
  return;
}



// FUNCTION 145c933d6 FUN_145c933d6 body=107 status=ok
// SIG undefined FUN_145c933d6(void)

undefined8 * FUN_145c933d6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14b7808e0;
  param_1[5] = &PTR_FUN_14b7812e0;
  param_1[6] = &PTR_LAB_14b781320;
  param_1[0x55] = &PTR_FUN_14b781370;
  param_1[0x56] = &PTR_FUN_14b7813f0;
  param_1[0x57] = &PTR_FUN_14b781400;
  return param_1;
}



// FUNCTION 145c9344a FUN_145c9344a body=107 status=ok
// SIG undefined FUN_145c9344a(void)

undefined8 * FUN_145c9344a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14b781430;
  param_1[5] = &PTR_FUN_14b781e30;
  param_1[6] = &PTR_LAB_14b781e70;
  param_1[0x55] = &PTR_FUN_14b781ec0;
  param_1[0x56] = &PTR_FUN_14b781f40;
  param_1[0x57] = &PTR_FUN_14b781f50;
  return param_1;
}



// FUNCTION 145c934be FUN_145c934be body=107 status=ok
// SIG undefined FUN_145c934be(void)

undefined8 * FUN_145c934be(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14b7de170;
  param_1[5] = &PTR_FUN_14b7deb70;
  param_1[6] = &PTR_LAB_14b7debb0;
  param_1[0x55] = &PTR_FUN_14b7dec00;
  param_1[0x56] = &PTR_FUN_14b7dec80;
  param_1[0x57] = &PTR_FUN_14b7dec90;
  return param_1;
}



// FUNCTION 145c93532 FUN_145c93532 body=107 status=ok
// SIG undefined FUN_145c93532(void)

undefined8 * FUN_145c93532(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14b9241a0;
  param_1[5] = &PTR_FUN_14b924ba0;
  param_1[6] = &PTR_LAB_14b924be0;
  param_1[0x55] = &PTR_FUN_14b924c30;
  param_1[0x56] = &PTR_FUN_14b924cb0;
  param_1[0x57] = &PTR_FUN_14b924cc0;
  return param_1;
}



// FUNCTION 145c9359e FUN_145c9359e body=115 status=ok
// SIG undefined FUN_145c9359e(void)

void FUN_145c9359e(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (0x18 < param_3) {
        FUN_1415aa586(lVar1 + 0x200,&DAT_14cbca380);
        return;
      }
      return;
    }
  }
  return;
}



// FUNCTION 145c93612 FUN_145c93612 body=38 status=ok
// SIG undefined FUN_145c93612(void)

undefined8 FUN_145c93612(undefined8 param_1,int param_2)

{
  FUN_145c93638();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c93638 FUN_145c93638 body=77 status=ok
// SIG undefined FUN_145c93638(void)

void FUN_145c93638(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba44ad0;
  FUN_1449db362(param_1 + 0xb);
  plVar3 = (longlong *)param_1[7];
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
                    /* WARNING: Could not recover jumptable at 0x000145c93681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145c9368e FUN_145c9368e body=107 status=ok
// SIG undefined FUN_145c9368e(void)

undefined8 * FUN_145c9368e(undefined8 *param_1)

{
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc84a40;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"ExpressionClassName");
  *param_1 = &PTR_FUN_14bc85830;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"MaterialFunctionDependency");
  return param_1;
}



// FUNCTION 145c936fa FUN_145c936fa body=40 status=ok
// SIG undefined FUN_145c936fa(void)

undefined8 FUN_145c936fa(undefined8 param_1,int param_2)

{
  FUN_145c93722();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c93722 FUN_145c93722 body=75 status=ok
// SIG undefined FUN_145c93722(void)

void FUN_145c93722(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc85830;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bc84a40;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145c9376e FUN_145c9376e body=40 status=ok
// SIG undefined FUN_145c9376e(void)

undefined8 FUN_145c9376e(undefined8 param_1,int param_2)

{
  FUN_145c93796();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c93796 FUN_145c93796 body=75 status=ok
// SIG undefined FUN_145c93796(void)

void FUN_145c93796(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc9cc50;
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  *param_1 = &PTR_FUN_14bc9bde0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e32(param_1);
  return;
}



// FUNCTION 145c937e2 FUN_145c937e2 body=40 status=ok
// SIG undefined FUN_145c937e2(void)

undefined8 FUN_145c937e2(undefined8 param_1,int param_2)

{
  FUN_145c9380a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c9380a FUN_145c9380a body=75 status=ok
// SIG undefined FUN_145c9380a(void)

void FUN_145c9380a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc9cff0;
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  *param_1 = &PTR_FUN_14bc9c8b0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145852e32(param_1);
  return;
}



// FUNCTION 145c93856 FUN_145c93856 body=26 status=ok
// SIG undefined FUN_145c93856(void)

void FUN_145c93856(undefined8 param_1)

{
  FUN_145c93870();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145c93870 FUN_145c93870 body=89 status=ok
// SIG undefined FUN_145c93870(void)

void FUN_145c93870(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14950e5e4();
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x298))();
    FUN_14126849c(uVar1,param_1);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2a0))();
    FUN_14126849c(uVar1,param_1);
    *(undefined8 *)(param_1 + 0x60) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x5c) = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 145c938c9 FUN_145c938c9 body=65 status=ok
// SIG undefined FUN_145c938c9(void)

void FUN_145c938c9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *(undefined1 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_FUN_14bed9910;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x35) = 0;
  FUN_145c9390a(puVar1 + 10);
  return;
}



// FUNCTION 145c9390a FUN_145c9390a body=169 status=ok
// SIG undefined FUN_145c9390a(void)

longlong FUN_145c9390a(longlong param_1)

{
  undefined1 auStack_8f8 [32];
  undefined1 local_8d8 [2088];
  longlong local_b0;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_144894d4c(local_8d8);
  FUN_145c939b4(param_1,local_8d8);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_8f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c939b4 FUN_145c939b4 body=225 status=ok
// SIG undefined FUN_145c939b4(void)

void FUN_145c939b4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *param_1;
  uVar5 = *param_2 >> 1 & 1;
  *param_1 = uVar1 & 0xfffffffe | uVar5;
  param_1[2] = param_2[0xe];
  uVar6 = param_2[3] >> 4 & 4;
  *param_1 = uVar1 & 0xfffffffa | uVar5 | uVar6;
  param_1[3] = param_2[0x16a];
  uVar7 = *param_2 >> 2 & 2;
  *param_1 = uVar1 & 0xfffffff8 | uVar5 | uVar6 | uVar7;
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 6) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar4;
  uVar8 = param_2[2] >> 3 & 8;
  *param_1 = uVar1 & 0xfffffff0 | uVar5 | uVar6 | uVar7 | uVar8;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0x36);
  uVar9 = param_2[2] >> 1 & 0x10;
  *param_1 = uVar1 & 0xffffffe0 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
  param_1[0xd] = param_2[0x11b];
  *param_1 = (uVar1 & 0xffffffc0 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9) + (param_2[2] & 0x10) * 2;
  param_1[0xe] = param_2[0x11a];
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfe | *(byte *)((longlong)param_2 + 0x1a) >> 4 & 1;
  param_1[0xf] = param_2[0x11c];
  return;
}



// FUNCTION 145c93a96 FUN_145c93a96 body=40 status=ok
// SIG undefined FUN_145c93a96(void)

undefined8 FUN_145c93a96(undefined8 param_1,int param_2)

{
  FUN_145c93abe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c93abe FUN_145c93abe body=75 status=ok
// SIG undefined FUN_145c93abe(void)

void FUN_145c93abe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14befa0c0;
  FUN_1447a1747(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c93b0a FUN_145c93b0a body=287 status=ok
// SIG undefined FUN_145c93b0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c93b0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b08b8) {
    FUN_144b3d300(&DAT_14c9b08b8);
    if (DAT_14c9b08b8 == -1) {
      FUN_145c93c2a();
      FUN_140db5666(&DAT_14c9b0810,2,&DAT_14c9b07a8,
                    L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712d760,
                    FUN_14712d738,FUN_141750066,&LAB_14712d734,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b0810 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5d4);
      _Init_thread_footer(&DAT_14c9b08b8);
    }
  }
  return &DAT_14c9b0810;
}



// FUNCTION 145c93c2a FUN_145c93c2a body=205 status=ok
// SIG undefined FUN_145c93c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c93c2a(void)

{
  if ((DAT_14c9b080f & 2) == 0) {
    DAT_14c9b080f = DAT_14c9b080f | 2;
    _DAT_14c9b07b0 = L"TBasePassPSFPrecomputedVolumetricLightmapLightingPolicySkylight";
    _DAT_14c9b07c8 = FUN_146826540;
    _DAT_14c9b07d0 = FUN_146825d77;
    _DAT_14c9b07d8 = FUN_146825fd6;
    _DAT_14c9b07e0 = FUN_1407e02ea;
    _DAT_14c9b07e8 = FUN_146826273;
    _DAT_14c9b07c0 = FUN_14712d6fa;
    _DAT_14c9b0800 = 0xffffffff00000110;
    _DAT_14c9b0808 = 8;
    DAT_14c9b080c = 0;
    _DAT_14c9b07f0 = &LAB_14712d730;
    FUN_145c93cf8();
    FUN_1407e00cc(&DAT_14c9b07a8);
    return;
  }
  return;
}



// FUNCTION 145c93cf8 FUN_145c93cf8 body=133 status=ok
// SIG undefined FUN_145c93cf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c93cf8(void)

{
  _DAT_14c9bbe00 = L"BASE";
  DAT_14c9bbe2a = 4;
  FUN_145c93d7e();
  _DAT_14c9bbe10 = DAT_14c9b07b8;
  _DAT_14c9bbe08 = &DAT_14c9bbe30;
  _DAT_14c9bbe18 = &LAB_14682652b;
  DAT_14c9b07b8 = &DAT_14c9bbe00;
  DAT_14c9b080d = DAT_14c9b080d + '\x01';
  _DAT_14c9bbe20 = 0x100000000;
  if (DAT_14c9bbe94 != '\0') {
    DAT_14c9b080e = DAT_14c9b080e + '\x01';
  }
  return;
}



// FUNCTION 145c93d7e FUN_145c93d7e body=200 status=ok
// SIG undefined FUN_145c93d7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c93d7e(void)

{
  if ((DAT_14c9bbe97 & 2) != 0) {
    return;
  }
  DAT_14c9bbe97 = DAT_14c9bbe97 | 2;
  _DAT_14c9bbe38 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9bbe50 = FUN_146826540;
  _DAT_14c9bbe58 = FUN_146825d77;
  _DAT_14c9bbe60 = FUN_146825fd6;
  _DAT_14c9bbe68 = FUN_1407e02ea;
  _DAT_14c9bbe70 = FUN_146826273;
  _DAT_14c9bbe48 = FUN_14713d15c;
  _DAT_14c9bbe88 = 0xffffffff00000110;
  _DAT_14c9bbe90 = 8;
  DAT_14c9bbe94 = 0;
  _DAT_14c9bbe78 = &LAB_14713d192;
  FUN_145c93e46();
  FUN_1407e00cc(&DAT_14c9bbe30);
  return;
}



// FUNCTION 145c93e46 FUN_145c93e46 body=133 status=ok
// SIG undefined FUN_145c93e46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c93e46(void)

{
  _DAT_14c9bbe98 = L"BASE";
  DAT_14c9bbec2 = 4;
  FUN_145c93ecc();
  _DAT_14c9bbea8 = DAT_14c9bbe40;
  _DAT_14c9bbea0 = &DAT_14c9bbec8;
  _DAT_14c9bbeb0 = &LAB_14682652b;
  DAT_14c9bbe40 = &DAT_14c9bbe98;
  DAT_14c9bbe95 = DAT_14c9bbe95 + '\x01';
  _DAT_14c9bbeb8 = 0x100000000;
  if (DAT_14c9bbf2c != '\0') {
    DAT_14c9bbe96 = DAT_14c9bbe96 + '\x01';
  }
  return;
}



// FUNCTION 145c93ecc FUN_145c93ecc body=313 status=ok
// SIG undefined FUN_145c93ecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c93ecc(void)

{
  if ((DAT_14c9bbf2f & 2) == 0) {
    DAT_14c9bbf2f = DAT_14c9bbf2f | 2;
    _DAT_14c9bbed0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9bbee8 = FUN_146826540;
    _DAT_14c9bbef0 = FUN_146825d77;
    _DAT_14c9bbef8 = FUN_146825fd6;
    _DAT_14c9bbf00 = FUN_1407e02ea;
    _DAT_14c9bbf08 = FUN_146826273;
    _DAT_14c9bbee0 = FUN_14713d196;
    _DAT_14c9bbf20 = 0xffffffff00000110;
    _DAT_14c9bbf28 = 8;
    DAT_14c9bbf2c = 0;
    _DAT_14c9bbf10 = &LAB_14713d1cc;
    _DAT_14c9bbf30 = L"ReflectionCaptureBuffer";
    DAT_14c9bbf5a = FUN_140850cc5();
    _DAT_14c9bbf38 = FUN_14106a12a();
    _DAT_14c9bbf48 = &LAB_14682652b;
    _DAT_14c9bbf50 = 0x10000010e;
    _DAT_14c9bbf58 = 0;
    _DAT_14c9bbf40 = DAT_14c9bbed8;
    DAT_14c9bbed8 = &DAT_14c9bbf30;
    FUN_145c94006();
    FUN_1407e00cc(&DAT_14c9bbec8);
    return;
  }
  return;
}



// FUNCTION 145c94006 FUN_145c94006 body=225 status=ok
// SIG undefined FUN_145c94006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94006(void)

{
  _DAT_14c9bbf60 = L"BASE";
  DAT_14c9bbf8a = 4;
  _DAT_14c9bbf68 = FUN_1411cad6c();
  _DAT_14c9bbf70 = DAT_14c9bbed8;
  _DAT_14c9bbf78 = &LAB_14682652b;
  DAT_14c9bbed8 = &DAT_14c9bbf60;
  DAT_14c9bbf2d = DAT_14c9bbf2d + '\x01';
  _DAT_14c9bbf80 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bbf68 + 100) != '\0') {
    DAT_14c9bbf2e = DAT_14c9bbf2e + '\x01';
  }
  _DAT_14c9bbf90 = L"BASE";
  DAT_14c9bbfba = 4;
  _DAT_14c9bbf98 = FUN_141092e92();
  _DAT_14c9bbfa0 = DAT_14c9bbed8;
  _DAT_14c9bbfa8 = &LAB_14682652b;
  DAT_14c9bbed8 = &DAT_14c9bbf90;
  DAT_14c9bbf2d = DAT_14c9bbf2d + '\x01';
  _DAT_14c9bbfb0 = 0x100000000;
  if (*(char *)(_DAT_14c9bbf98 + 100) != '\0') {
    DAT_14c9bbf2e = DAT_14c9bbf2e + '\x01';
  }
  return;
}



// FUNCTION 145c940e8 FUN_145c940e8 body=287 status=ok
// SIG undefined FUN_145c940e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c940e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b17c0) {
    FUN_144b3d300(&DAT_14c9b17c0);
    if (DAT_14c9b17c0 == -1) {
      FUN_145c94208();
      FUN_140db5666(&DAT_14c9b1718,2,&DAT_14c9b16b0,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e096,
                    FUN_14712e06e,FUN_141752708,&LAB_14712e06a,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1718 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c670);
      _Init_thread_footer(&DAT_14c9b17c0);
    }
  }
  return &DAT_14c9b1718;
}



// FUNCTION 145c94208 FUN_145c94208 body=205 status=ok
// SIG undefined FUN_145c94208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94208(void)

{
  if ((DAT_14c9b1717 & 2) == 0) {
    DAT_14c9b1717 = DAT_14c9b1717 | 2;
    _DAT_14c9b16b8 = L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylight";
    _DAT_14c9b16d0 = FUN_146826540;
    _DAT_14c9b16d8 = FUN_146825d77;
    _DAT_14c9b16e0 = FUN_146825fd6;
    _DAT_14c9b16e8 = FUN_1407e02ea;
    _DAT_14c9b16f0 = FUN_146826273;
    _DAT_14c9b16c8 = FUN_14712e030;
    _DAT_14c9b1708 = 0xffffffff00000110;
    _DAT_14c9b1710 = 8;
    DAT_14c9b1714 = 0;
    _DAT_14c9b16f8 = &LAB_14712e066;
    FUN_145c942d6();
    FUN_1407e00cc(&DAT_14c9b16b0);
    return;
  }
  return;
}



// FUNCTION 145c942d6 FUN_145c942d6 body=133 status=ok
// SIG undefined FUN_145c942d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c942d6(void)

{
  _DAT_14c9bc8f0 = L"BASE";
  DAT_14c9bc91a = 4;
  FUN_145c9435c();
  _DAT_14c9bc900 = DAT_14c9b16c0;
  _DAT_14c9bc8f8 = &DAT_14c9bc920;
  _DAT_14c9bc908 = &LAB_14682652b;
  DAT_14c9b16c0 = &DAT_14c9bc8f0;
  DAT_14c9b1715 = DAT_14c9b1715 + '\x01';
  _DAT_14c9bc910 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1716 = DAT_14c9b1716 + '\x01';
  }
  return;
}



// FUNCTION 145c9435c FUN_145c9435c body=200 status=ok
// SIG undefined FUN_145c9435c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c9435c(void)

{
  if ((DAT_14c9bc987 & 2) != 0) {
    return;
  }
  DAT_14c9bc987 = DAT_14c9bc987 | 2;
  _DAT_14c9bc928 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9bc940 = FUN_146826540;
  _DAT_14c9bc948 = FUN_146825d77;
  _DAT_14c9bc950 = FUN_146825fd6;
  _DAT_14c9bc958 = FUN_1407e02ea;
  _DAT_14c9bc960 = FUN_146826273;
  _DAT_14c9bc938 = FUN_14713d656;
  _DAT_14c9bc978 = 0xffffffff00000110;
  _DAT_14c9bc980 = 8;
  DAT_14c9bc984 = 0;
  _DAT_14c9bc968 = &LAB_14713d68c;
  FUN_145c94424();
  FUN_1407e00cc(&DAT_14c9bc920);
  return;
}



// FUNCTION 145c94424 FUN_145c94424 body=133 status=ok
// SIG undefined FUN_145c94424(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94424(void)

{
  _DAT_14c9bc988 = L"BASE";
  DAT_14c9bc9b2 = 4;
  FUN_145c944aa();
  _DAT_14c9bc998 = DAT_14c9bc930;
  _DAT_14c9bc990 = &DAT_14c9bc9b8;
  _DAT_14c9bc9a0 = &LAB_14682652b;
  DAT_14c9bc930 = &DAT_14c9bc988;
  DAT_14c9bc985 = DAT_14c9bc985 + '\x01';
  _DAT_14c9bc9a8 = 0x100000000;
  if (DAT_14c9bca1c != '\0') {
    DAT_14c9bc986 = DAT_14c9bc986 + '\x01';
  }
  return;
}



// FUNCTION 145c944aa FUN_145c944aa body=313 status=ok
// SIG undefined FUN_145c944aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c944aa(void)

{
  if ((DAT_14c9bca1f & 2) == 0) {
    DAT_14c9bca1f = DAT_14c9bca1f | 2;
    _DAT_14c9bc9c0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9bc9d8 = FUN_146826540;
    _DAT_14c9bc9e0 = FUN_146825d77;
    _DAT_14c9bc9e8 = FUN_146825fd6;
    _DAT_14c9bc9f0 = FUN_1407e02ea;
    _DAT_14c9bc9f8 = FUN_146826273;
    _DAT_14c9bc9d0 = FUN_14713d690;
    _DAT_14c9bca10 = 0xffffffff00000110;
    _DAT_14c9bca18 = 8;
    DAT_14c9bca1c = 0;
    _DAT_14c9bca00 = &LAB_14713d6c6;
    _DAT_14c9bca20 = L"ReflectionCaptureBuffer";
    DAT_14c9bca4a = FUN_140850cc5();
    _DAT_14c9bca28 = FUN_14106a12a();
    _DAT_14c9bca38 = &LAB_14682652b;
    _DAT_14c9bca40 = 0x10000010e;
    _DAT_14c9bca48 = 0;
    _DAT_14c9bca30 = DAT_14c9bc9c8;
    DAT_14c9bc9c8 = &DAT_14c9bca20;
    FUN_145c945e4();
    FUN_1407e00cc(&DAT_14c9bc9b8);
    return;
  }
  return;
}



// FUNCTION 145c945e4 FUN_145c945e4 body=225 status=ok
// SIG undefined FUN_145c945e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c945e4(void)

{
  _DAT_14c9bca50 = L"BASE";
  DAT_14c9bca7a = 4;
  _DAT_14c9bca58 = FUN_1411cad6c();
  _DAT_14c9bca60 = DAT_14c9bc9c8;
  _DAT_14c9bca68 = &LAB_14682652b;
  DAT_14c9bc9c8 = &DAT_14c9bca50;
  DAT_14c9bca1d = DAT_14c9bca1d + '\x01';
  _DAT_14c9bca70 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bca58 + 100) != '\0') {
    DAT_14c9bca1e = DAT_14c9bca1e + '\x01';
  }
  _DAT_14c9bca80 = L"BASE";
  DAT_14c9bcaaa = 4;
  _DAT_14c9bca88 = FUN_141092e92();
  _DAT_14c9bca90 = DAT_14c9bc9c8;
  _DAT_14c9bca98 = &LAB_14682652b;
  DAT_14c9bc9c8 = &DAT_14c9bca80;
  DAT_14c9bca1d = DAT_14c9bca1d + '\x01';
  _DAT_14c9bcaa0 = 0x100000000;
  if (*(char *)(_DAT_14c9bca88 + 100) != '\0') {
    DAT_14c9bca1e = DAT_14c9bca1e + '\x01';
  }
  return;
}



// FUNCTION 145c946c6 FUN_145c946c6 body=287 status=ok
// SIG undefined FUN_145c946c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c946c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b26c8) {
    FUN_144b3d300(&DAT_14c9b26c8);
    if (DAT_14c9b26c8 == -1) {
      FUN_145c947e6();
      FUN_140db5666(&DAT_14c9b2620,2,&DAT_14c9b25b8,
                    L"TBasePassPSFCachedPointIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e9cc,
                    FUN_14712e9a4,FUN_141754daa,&LAB_14712e9a0,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2620 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c70c);
      _Init_thread_footer(&DAT_14c9b26c8);
    }
  }
  return &DAT_14c9b2620;
}



// FUNCTION 145c947e6 FUN_145c947e6 body=205 status=ok
// SIG undefined FUN_145c947e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c947e6(void)

{
  if ((DAT_14c9b261f & 2) == 0) {
    DAT_14c9b261f = DAT_14c9b261f | 2;
    _DAT_14c9b25c0 = L"TBasePassPSFCachedPointIndirectLightingPolicySkylight";
    _DAT_14c9b25d8 = FUN_146826540;
    _DAT_14c9b25e0 = FUN_146825d77;
    _DAT_14c9b25e8 = FUN_146825fd6;
    _DAT_14c9b25f0 = FUN_1407e02ea;
    _DAT_14c9b25f8 = FUN_146826273;
    _DAT_14c9b25d0 = FUN_14712e966;
    _DAT_14c9b2610 = 0xffffffff00000110;
    _DAT_14c9b2618 = 8;
    DAT_14c9b261c = 0;
    _DAT_14c9b2600 = &LAB_14712e99c;
    FUN_145c948b4();
    FUN_1407e00cc(&DAT_14c9b25b8);
    return;
  }
  return;
}



// FUNCTION 145c948b4 FUN_145c948b4 body=133 status=ok
// SIG undefined FUN_145c948b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c948b4(void)

{
  _DAT_14c9bd3e0 = L"BASE";
  DAT_14c9bd40a = 4;
  FUN_145c9493a();
  _DAT_14c9bd3f0 = DAT_14c9b25c8;
  _DAT_14c9bd3e8 = &DAT_14c9bd410;
  _DAT_14c9bd3f8 = &LAB_14682652b;
  DAT_14c9b25c8 = &DAT_14c9bd3e0;
  DAT_14c9b261d = DAT_14c9b261d + '\x01';
  _DAT_14c9bd400 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b261e = DAT_14c9b261e + '\x01';
  }
  return;
}



// FUNCTION 145c9493a FUN_145c9493a body=200 status=ok
// SIG undefined FUN_145c9493a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c9493a(void)

{
  if ((DAT_14c9bd477 & 2) != 0) {
    return;
  }
  DAT_14c9bd477 = DAT_14c9bd477 | 2;
  _DAT_14c9bd418 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9bd430 = FUN_146826540;
  _DAT_14c9bd438 = FUN_146825d77;
  _DAT_14c9bd440 = FUN_146825fd6;
  _DAT_14c9bd448 = FUN_1407e02ea;
  _DAT_14c9bd450 = FUN_146826273;
  _DAT_14c9bd428 = FUN_14713db50;
  _DAT_14c9bd468 = 0xffffffff00000110;
  _DAT_14c9bd470 = 8;
  DAT_14c9bd474 = 0;
  _DAT_14c9bd458 = &LAB_14713db86;
  FUN_145c94a02();
  FUN_1407e00cc(&DAT_14c9bd410);
  return;
}



// FUNCTION 145c94a02 FUN_145c94a02 body=133 status=ok
// SIG undefined FUN_145c94a02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94a02(void)

{
  _DAT_14c9bd478 = L"BASE";
  DAT_14c9bd4a2 = 4;
  FUN_145c94a88();
  _DAT_14c9bd488 = DAT_14c9bd420;
  _DAT_14c9bd480 = &DAT_14c9bd4a8;
  _DAT_14c9bd490 = &LAB_14682652b;
  DAT_14c9bd420 = &DAT_14c9bd478;
  DAT_14c9bd475 = DAT_14c9bd475 + '\x01';
  _DAT_14c9bd498 = 0x100000000;
  if (DAT_14c9bd50c != '\0') {
    DAT_14c9bd476 = DAT_14c9bd476 + '\x01';
  }
  return;
}



// FUNCTION 145c94a88 FUN_145c94a88 body=313 status=ok
// SIG undefined FUN_145c94a88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94a88(void)

{
  if ((DAT_14c9bd50f & 2) == 0) {
    DAT_14c9bd50f = DAT_14c9bd50f | 2;
    _DAT_14c9bd4b0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9bd4c8 = FUN_146826540;
    _DAT_14c9bd4d0 = FUN_146825d77;
    _DAT_14c9bd4d8 = FUN_146825fd6;
    _DAT_14c9bd4e0 = FUN_1407e02ea;
    _DAT_14c9bd4e8 = FUN_146826273;
    _DAT_14c9bd4c0 = FUN_14713db8a;
    _DAT_14c9bd500 = 0xffffffff00000110;
    _DAT_14c9bd508 = 8;
    DAT_14c9bd50c = 0;
    _DAT_14c9bd4f0 = &LAB_14713dbc0;
    _DAT_14c9bd510 = L"ReflectionCaptureBuffer";
    DAT_14c9bd53a = FUN_140850cc5();
    _DAT_14c9bd518 = FUN_14106a12a();
    _DAT_14c9bd528 = &LAB_14682652b;
    _DAT_14c9bd530 = 0x10000010e;
    _DAT_14c9bd538 = 0;
    _DAT_14c9bd520 = DAT_14c9bd4b8;
    DAT_14c9bd4b8 = &DAT_14c9bd510;
    FUN_145c94bc2();
    FUN_1407e00cc(&DAT_14c9bd4a8);
    return;
  }
  return;
}



// FUNCTION 145c94bc2 FUN_145c94bc2 body=225 status=ok
// SIG undefined FUN_145c94bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94bc2(void)

{
  _DAT_14c9bd540 = L"BASE";
  DAT_14c9bd56a = 4;
  _DAT_14c9bd548 = FUN_1411cad6c();
  _DAT_14c9bd550 = DAT_14c9bd4b8;
  _DAT_14c9bd558 = &LAB_14682652b;
  DAT_14c9bd4b8 = &DAT_14c9bd540;
  DAT_14c9bd50d = DAT_14c9bd50d + '\x01';
  _DAT_14c9bd560 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bd548 + 100) != '\0') {
    DAT_14c9bd50e = DAT_14c9bd50e + '\x01';
  }
  _DAT_14c9bd570 = L"BASE";
  DAT_14c9bd59a = 4;
  _DAT_14c9bd578 = FUN_141092e92();
  _DAT_14c9bd580 = DAT_14c9bd4b8;
  _DAT_14c9bd588 = &LAB_14682652b;
  DAT_14c9bd4b8 = &DAT_14c9bd570;
  DAT_14c9bd50d = DAT_14c9bd50d + '\x01';
  _DAT_14c9bd590 = 0x100000000;
  if (*(char *)(_DAT_14c9bd578 + 100) != '\0') {
    DAT_14c9bd50e = DAT_14c9bd50e + '\x01';
  }
  return;
}



// FUNCTION 145c94ca4 FUN_145c94ca4 body=287 status=ok
// SIG undefined FUN_145c94ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c94ca4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b35d0) {
    FUN_144b3d300(&DAT_14c9b35d0);
    if (DAT_14c9b35d0 == -1) {
      FUN_145c94dc4();
      FUN_140db5666(&DAT_14c9b3528,2,&DAT_14c9b34c0,L"TBasePassPSTLightMapPolicyLQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f302,
                    FUN_14712f2da,FUN_14175744c,&LAB_14712f2d6,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3528 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7a8);
      _Init_thread_footer(&DAT_14c9b35d0);
    }
  }
  return &DAT_14c9b3528;
}



// FUNCTION 145c94dc4 FUN_145c94dc4 body=205 status=ok
// SIG undefined FUN_145c94dc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94dc4(void)

{
  if ((DAT_14c9b3527 & 2) == 0) {
    DAT_14c9b3527 = DAT_14c9b3527 | 2;
    _DAT_14c9b34c8 = L"TBasePassPSTLightMapPolicyLQSkylight";
    _DAT_14c9b34e0 = FUN_146826540;
    _DAT_14c9b34e8 = FUN_146825d77;
    _DAT_14c9b34f0 = FUN_146825fd6;
    _DAT_14c9b34f8 = FUN_1407e02ea;
    _DAT_14c9b3500 = FUN_146826273;
    _DAT_14c9b34d8 = FUN_14712f29c;
    _DAT_14c9b3518 = 0xffffffff00000110;
    _DAT_14c9b3520 = 8;
    DAT_14c9b3524 = 0;
    _DAT_14c9b3508 = &LAB_14712f2d2;
    FUN_145c94e92();
    FUN_1407e00cc(&DAT_14c9b34c0);
    return;
  }
  return;
}



// FUNCTION 145c94e92 FUN_145c94e92 body=133 status=ok
// SIG undefined FUN_145c94e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94e92(void)

{
  _DAT_14c9bded0 = L"BASE";
  DAT_14c9bdefa = 4;
  FUN_145c94f18();
  _DAT_14c9bdee0 = DAT_14c9b34d0;
  _DAT_14c9bded8 = &DAT_14c9bdf00;
  _DAT_14c9bdee8 = &LAB_14682652b;
  DAT_14c9b34d0 = &DAT_14c9bded0;
  DAT_14c9b3525 = DAT_14c9b3525 + '\x01';
  _DAT_14c9bdef0 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b3526 = DAT_14c9b3526 + '\x01';
  }
  return;
}



// FUNCTION 145c94f18 FUN_145c94f18 body=200 status=ok
// SIG undefined FUN_145c94f18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94f18(void)

{
  if ((DAT_14c9bdf67 & 2) != 0) {
    return;
  }
  DAT_14c9bdf67 = DAT_14c9bdf67 | 2;
  _DAT_14c9bdf08 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9bdf20 = FUN_146826540;
  _DAT_14c9bdf28 = FUN_146825d77;
  _DAT_14c9bdf30 = FUN_146825fd6;
  _DAT_14c9bdf38 = FUN_1407e02ea;
  _DAT_14c9bdf40 = FUN_146826273;
  _DAT_14c9bdf18 = FUN_14713e04a;
  _DAT_14c9bdf58 = 0xffffffff00000110;
  _DAT_14c9bdf60 = 8;
  DAT_14c9bdf64 = 0;
  _DAT_14c9bdf48 = &LAB_14713e080;
  FUN_145c94fe0();
  FUN_1407e00cc(&DAT_14c9bdf00);
  return;
}



// FUNCTION 145c94fe0 FUN_145c94fe0 body=133 status=ok
// SIG undefined FUN_145c94fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c94fe0(void)

{
  _DAT_14c9bdf68 = L"BASE";
  DAT_14c9bdf92 = 4;
  FUN_145c95066();
  _DAT_14c9bdf78 = DAT_14c9bdf10;
  _DAT_14c9bdf70 = &DAT_14c9bdf98;
  _DAT_14c9bdf80 = &LAB_14682652b;
  DAT_14c9bdf10 = &DAT_14c9bdf68;
  DAT_14c9bdf65 = DAT_14c9bdf65 + '\x01';
  _DAT_14c9bdf88 = 0x100000000;
  if (DAT_14c9bdffc != '\0') {
    DAT_14c9bdf66 = DAT_14c9bdf66 + '\x01';
  }
  return;
}



// FUNCTION 145c95066 FUN_145c95066 body=313 status=ok
// SIG undefined FUN_145c95066(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c95066(void)

{
  if ((DAT_14c9bdfff & 2) == 0) {
    DAT_14c9bdfff = DAT_14c9bdfff | 2;
    _DAT_14c9bdfa0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9bdfb8 = FUN_146826540;
    _DAT_14c9bdfc0 = FUN_146825d77;
    _DAT_14c9bdfc8 = FUN_146825fd6;
    _DAT_14c9bdfd0 = FUN_1407e02ea;
    _DAT_14c9bdfd8 = FUN_146826273;
    _DAT_14c9bdfb0 = FUN_14713e084;
    _DAT_14c9bdff0 = 0xffffffff00000110;
    _DAT_14c9bdff8 = 8;
    DAT_14c9bdffc = 0;
    _DAT_14c9bdfe0 = &LAB_14713e0ba;
    _DAT_14c9be000 = L"ReflectionCaptureBuffer";
    DAT_14c9be02a = FUN_140850cc5();
    _DAT_14c9be008 = FUN_14106a12a();
    _DAT_14c9be018 = &LAB_14682652b;
    _DAT_14c9be020 = 0x10000010e;
    _DAT_14c9be028 = 0;
    _DAT_14c9be010 = DAT_14c9bdfa8;
    DAT_14c9bdfa8 = &DAT_14c9be000;
    FUN_145c951a0();
    FUN_1407e00cc(&DAT_14c9bdf98);
    return;
  }
  return;
}



// FUNCTION 145c951a0 FUN_145c951a0 body=225 status=ok
// SIG undefined FUN_145c951a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c951a0(void)

{
  _DAT_14c9be030 = L"BASE";
  DAT_14c9be05a = 4;
  _DAT_14c9be038 = FUN_1411cad6c();
  _DAT_14c9be040 = DAT_14c9bdfa8;
  _DAT_14c9be048 = &LAB_14682652b;
  DAT_14c9bdfa8 = &DAT_14c9be030;
  DAT_14c9bdffd = DAT_14c9bdffd + '\x01';
  _DAT_14c9be050 = &DAT_100000108;
  if (*(char *)(_DAT_14c9be038 + 100) != '\0') {
    DAT_14c9bdffe = DAT_14c9bdffe + '\x01';
  }
  _DAT_14c9be060 = L"BASE";
  DAT_14c9be08a = 4;
  _DAT_14c9be068 = FUN_141092e92();
  _DAT_14c9be070 = DAT_14c9bdfa8;
  _DAT_14c9be078 = &LAB_14682652b;
  DAT_14c9bdfa8 = &DAT_14c9be060;
  DAT_14c9bdffd = DAT_14c9bdffd + '\x01';
  _DAT_14c9be080 = 0x100000000;
  if (*(char *)(_DAT_14c9be068 + 100) != '\0') {
    DAT_14c9bdffe = DAT_14c9bdffe + '\x01';
  }
  return;
}



// FUNCTION 145c95282 FUN_145c95282 body=287 status=ok
// SIG undefined FUN_145c95282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c95282(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b44d8) {
    FUN_144b3d300(&DAT_14c9b44d8);
    if (DAT_14c9b44d8 == -1) {
      FUN_145c953a2();
      FUN_140db5666(&DAT_14c9b4430,2,&DAT_14c9b43c8,L"TBasePassPSTLightMapPolicyHQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712fc38,
                    FUN_14712fc10,FUN_141759aee,&LAB_14712fc0c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b4430 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c844);
      _Init_thread_footer(&DAT_14c9b44d8);
    }
  }
  return &DAT_14c9b4430;
}



// FUNCTION 145c953a2 FUN_145c953a2 body=205 status=ok
// SIG undefined FUN_145c953a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c953a2(void)

{
  if ((DAT_14c9b442f & 2) == 0) {
    DAT_14c9b442f = DAT_14c9b442f | 2;
    _DAT_14c9b43d0 = L"TBasePassPSTLightMapPolicyHQSkylight";
    _DAT_14c9b43e8 = FUN_146826540;
    _DAT_14c9b43f0 = FUN_146825d77;
    _DAT_14c9b43f8 = FUN_146825fd6;
    _DAT_14c9b4400 = FUN_1407e02ea;
    _DAT_14c9b4408 = FUN_146826273;
    _DAT_14c9b43e0 = FUN_14712fbd2;
    _DAT_14c9b4420 = 0xffffffff00000110;
    _DAT_14c9b4428 = 8;
    DAT_14c9b442c = 0;
    _DAT_14c9b4410 = &LAB_14712fc08;
    FUN_145c95470();
    FUN_1407e00cc(&DAT_14c9b43c8);
    return;
  }
  return;
}



// FUNCTION 145c95470 FUN_145c95470 body=133 status=ok
// SIG undefined FUN_145c95470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c95470(void)

{
  _DAT_14c9be9c0 = L"BASE";
  DAT_14c9be9ea = 4;
  FUN_145c954f6();
  _DAT_14c9be9d0 = DAT_14c9b43d8;
  _DAT_14c9be9c8 = &DAT_14c9be9f0;
  _DAT_14c9be9d8 = &LAB_14682652b;
  DAT_14c9b43d8 = &DAT_14c9be9c0;
  DAT_14c9b442d = DAT_14c9b442d + '\x01';
  _DAT_14c9be9e0 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b442e = DAT_14c9b442e + '\x01';
  }
  return;
}



// FUNCTION 145c954f6 FUN_145c954f6 body=200 status=ok
// SIG undefined FUN_145c954f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c954f6(void)

{
  if ((DAT_14c9bea57 & 2) != 0) {
    return;
  }
  DAT_14c9bea57 = DAT_14c9bea57 | 2;
  _DAT_14c9be9f8 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9bea10 = FUN_146826540;
  _DAT_14c9bea18 = FUN_146825d77;
  _DAT_14c9bea20 = FUN_146825fd6;
  _DAT_14c9bea28 = FUN_1407e02ea;
  _DAT_14c9bea30 = FUN_146826273;
  _DAT_14c9bea08 = FUN_14713e544;
  _DAT_14c9bea48 = 0xffffffff00000110;
  _DAT_14c9bea50 = 8;
  DAT_14c9bea54 = 0;
  _DAT_14c9bea38 = &LAB_14713e57a;
  FUN_145c955be();
  FUN_1407e00cc(&DAT_14c9be9f0);
  return;
}



// FUNCTION 145c955be FUN_145c955be body=133 status=ok
// SIG undefined FUN_145c955be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c955be(void)

{
  _DAT_14c9bea58 = L"BASE";
  DAT_14c9bea82 = 4;
  FUN_145c95644();
  _DAT_14c9bea68 = DAT_14c9bea00;
  _DAT_14c9bea60 = &DAT_14c9bea88;
  _DAT_14c9bea70 = &LAB_14682652b;
  DAT_14c9bea00 = &DAT_14c9bea58;
  DAT_14c9bea55 = DAT_14c9bea55 + '\x01';
  _DAT_14c9bea78 = 0x100000000;
  if (DAT_14c9beaec != '\0') {
    DAT_14c9bea56 = DAT_14c9bea56 + '\x01';
  }
  return;
}



// FUNCTION 145c95644 FUN_145c95644 body=313 status=ok
// SIG undefined FUN_145c95644(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c95644(void)

{
  if ((DAT_14c9beaef & 2) == 0) {
    DAT_14c9beaef = DAT_14c9beaef | 2;
    _DAT_14c9bea90 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9beaa8 = FUN_146826540;
    _DAT_14c9beab0 = FUN_146825d77;
    _DAT_14c9beab8 = FUN_146825fd6;
    _DAT_14c9beac0 = FUN_1407e02ea;
    _DAT_14c9beac8 = FUN_146826273;
    _DAT_14c9beaa0 = FUN_14713e57e;
    _DAT_14c9beae0 = 0xffffffff00000110;
    _DAT_14c9beae8 = 8;
    DAT_14c9beaec = 0;
    _DAT_14c9bead0 = &LAB_14713e5b4;
    _DAT_14c9beaf0 = L"ReflectionCaptureBuffer";
    DAT_14c9beb1a = FUN_140850cc5();
    _DAT_14c9beaf8 = FUN_14106a12a();
    _DAT_14c9beb08 = &LAB_14682652b;
    _DAT_14c9beb10 = 0x10000010e;
    _DAT_14c9beb18 = 0;
    _DAT_14c9beb00 = DAT_14c9bea98;
    DAT_14c9bea98 = &DAT_14c9beaf0;
    FUN_145c9577e();
    FUN_1407e00cc(&DAT_14c9bea88);
    return;
  }
  return;
}



// FUNCTION 145c9577e FUN_145c9577e body=225 status=ok
// SIG undefined FUN_145c9577e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c9577e(void)

{
  _DAT_14c9beb20 = L"BASE";
  DAT_14c9beb4a = 4;
  _DAT_14c9beb28 = FUN_1411cad6c();
  _DAT_14c9beb30 = DAT_14c9bea98;
  _DAT_14c9beb38 = &LAB_14682652b;
  DAT_14c9bea98 = &DAT_14c9beb20;
  DAT_14c9beaed = DAT_14c9beaed + '\x01';
  _DAT_14c9beb40 = &DAT_100000108;
  if (*(char *)(_DAT_14c9beb28 + 100) != '\0') {
    DAT_14c9beaee = DAT_14c9beaee + '\x01';
  }
  _DAT_14c9beb50 = L"BASE";
  DAT_14c9beb7a = 4;
  _DAT_14c9beb58 = FUN_141092e92();
  _DAT_14c9beb60 = DAT_14c9bea98;
  _DAT_14c9beb68 = &LAB_14682652b;
  DAT_14c9bea98 = &DAT_14c9beb50;
  DAT_14c9beaed = DAT_14c9beaed + '\x01';
  _DAT_14c9beb70 = 0x100000000;
  if (*(char *)(_DAT_14c9beb58 + 100) != '\0') {
    DAT_14c9beaee = DAT_14c9beaee + '\x01';
  }
  return;
}



// FUNCTION 145c95860 FUN_145c95860 body=287 status=ok
// SIG undefined FUN_145c95860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c95860(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b53e0) {
    FUN_144b3d300(&DAT_14c9b53e0);
    if (DAT_14c9b53e0 == -1) {
      FUN_145c95980();
      FUN_140db5666(&DAT_14c9b5338,2,&DAT_14c9b52d0,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14713056e,
                    FUN_147130546,FUN_14175c190,&LAB_147130542,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5338 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8e0);
      _Init_thread_footer(&DAT_14c9b53e0);
    }
  }
  return &DAT_14c9b5338;
}


