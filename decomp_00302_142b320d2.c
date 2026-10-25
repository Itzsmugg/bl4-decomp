// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b320d2 FUN_142b320d2 body=111 status=ok
// SIG undefined FUN_142b320d2(void)

undefined1 FUN_142b320d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142b321be FUN_142b321be body=490 status=ok
// SIG undefined FUN_142b321be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b321be(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18e570);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a4598 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18e5f0);
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18e730);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a18eb70,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a18ec90);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a18fe60;
  local_68 = 7;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a18ffa0,2,&PTR_FUN_14a18fe80);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a190320,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a190e10,2,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a195460;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a195480,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b323ac FUN_142b323ac body=55 status=ok
// SIG undefined FUN_142b323ac(void)

void FUN_142b323ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4968 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4968 = FUN_14171c317(FUN_1462a930a,uVar1,L"EGbxAttributeEvaluatorType");
  }
  return;
}



// FUNCTION 142b323e3 FUN_142b323e3 body=55 status=ok
// SIG undefined FUN_142b323e3(void)

void FUN_142b323e3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4a80 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4a80 = FUN_14171c317(FUN_1462a988c,uVar1,L"EGbxBindSource");
  }
  return;
}



// FUNCTION 142b3245e FUN_142b3245e body=57 status=ok
// SIG undefined FUN_142b3245e(void)

void FUN_142b3245e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4908 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4908 = FUN_140002ddd(FUN_14173afca,uVar1,L"GbxAttributeDef");
  }
  return;
}



// FUNCTION 142b32562 FUN_142b32562 body=55 status=ok
// SIG undefined FUN_142b32562(void)

void FUN_142b32562(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000142b32595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b3260c FUN_142b3260c body=55 status=ok
// SIG undefined FUN_142b3260c(void)

void FUN_142b3260c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000142b3263f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b32644 FUN_142b32644 body=120 status=ok
// SIG undefined FUN_142b32644(void)

undefined8 FUN_142b32644(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + lVar6);
      lVar4 = *(longlong *)(param_3 + 8 + lVar6);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + 8 + lVar6);
      *(undefined8 *)(param_2 + lVar6) = uVar3;
      *(longlong *)(param_2 + 8 + lVar6) = lVar4;
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
      lVar6 = lVar6 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142b326d8 FUN_142b326d8 body=73 status=ok
// SIG undefined FUN_142b326d8(void)

void FUN_142b326d8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x38) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0x3f800000;
  return;
}



// FUNCTION 142b3273e FUN_142b3273e body=99 status=ok
// SIG undefined FUN_142b3273e(void)

void FUN_142b3273e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  *param_2 = &PTR_FUN_14a19f670;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xf00000d0;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x11) = 0x3f800000;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 142b327ca FUN_142b327ca body=123 status=ok
// SIG undefined FUN_142b327ca(void)

void FUN_142b327ca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != param_2) {
    FUN_142b32846(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < (int)uVar2 || 0x20 < *(int *)(param_1 + 0x44)) {
    uVar1 = 0x20;
    if (0x20 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x44) = uVar1;
    FUN_14008f53c(param_1 + 0x30,0);
    return;
  }
  return;
}



// FUNCTION 142b32846 FUN_142b32846 body=227 status=ok
// SIG undefined FUN_142b32846(void)

void FUN_142b32846(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (2 < param_2) {
      uVar1 = (longlong)(int)param_2 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x7ff1) {
            uVar1 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)
                                          [(longlong)(int)param_2 & 0xfffffffffffffff]];
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
          uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0);
        }
      }
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 4)) {
        uVar2 = uVar1 >> 4 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_142b3292a(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 142b3292a FUN_142b3292a body=133 status=ok
// SIG undefined FUN_142b3292a(void)

void FUN_142b3292a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 142b329b0 FUN_142b329b0 body=133 status=ok
// SIG undefined FUN_142b329b0(void)

void * FUN_142b329b0(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)((longlong)param_2 + 0x28);
    FUN_142b327ca(param_1,uVar1);
    iVar2 = *(int *)((longlong)param_1 + 0x28);
    *(uint *)((longlong)param_1 + 0x28) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar2) < uVar1) {
      FUN_142b32a36(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    FUN_1470c60fc((longlong)param_1 + 0x30,(longlong)param_2 + 0x30);
    if (uVar1 != 0) {
      _Src = *(void **)((longlong)param_2 + 0x20);
      if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 0x20);
      if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 142b32a36 FUN_142b32a36 body=264 status=ok
// SIG undefined FUN_142b32a36(void)

void FUN_142b32a36(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
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
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar4 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_142b3292a(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142b32ca0 FUN_142b32ca0 body=84 status=ok
// SIG undefined FUN_142b32ca0(void)

void FUN_142b32ca0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x928);
  *(undefined4 *)((longlong)param_2 + 0x91c) = 0x20;
  *(undefined8 *)((longlong)param_2 + 0x928) = 0;
  *(undefined8 *)((longlong)param_2 + 0x930) = 0;
  *(undefined8 *)((longlong)param_2 + 0x938) = 0;
  *(undefined8 *)((longlong)param_2 + 0x940) = 0;
  *(undefined4 *)((longlong)param_2 + 0x948) = 2;
  *(undefined8 *)((longlong)param_2 + 0x94c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x954) = 0;
  *(undefined4 *)((longlong)param_2 + 0x95c) = 0;
  return;
}



// FUNCTION 142b32cf4 FUN_142b32cf4 body=502 status=ok
// SIG undefined FUN_142b32cf4(void)

void FUN_142b32cf4(void)

{
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a196740,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a196870,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a196940,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a196b10,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a196da0,1,&PTR_FUN_14a196d80,1);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a196e80,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a197040,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a197100,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1971e0,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a197520,2,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a197b50,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1988f0,0xc,&PTR_FUN_14a1988d0,1);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a198c50,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a19e5e0,1,0,0,0,0);
  return;
}



// FUNCTION 142b32eec FUN_142b32eec body=55 status=ok
// SIG undefined FUN_142b32eec(void)

void FUN_142b32eec(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4eb0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4eb0 = FUN_14171c317(FUN_1462ab354,uVar1,L"EGbxPoseOptions");
  }
  return;
}



// FUNCTION 142b32f24 FUN_142b32f24 body=234 status=ok
// SIG undefined FUN_142b32f24(void)

longlong FUN_142b32f24(void)

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
  if (DAT_14cad2858 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146395584;
    local_38 = &LAB_147a0ba80;
    local_40 = &LAB_14575ccce;
    local_48 = L"Engine";
    local_50 = 0x40000000000;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2858;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3300f FUN_142b3300f body=55 status=ok
// SIG undefined FUN_142b3300f(void)

void FUN_142b3300f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a51f8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a51f8 = FUN_14171c317(FUN_1462ac443,uVar1,L"EQueryInterfaceExec");
  }
  return;
}



// FUNCTION 142b33058 FUN_142b33058 body=48 status=ok
// SIG undefined FUN_142b33058(void)

longlong FUN_142b33058(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140cbb07c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b33088 FUN_142b33088 body=48 status=ok
// SIG undefined FUN_142b33088(void)

longlong FUN_142b33088(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x748;
  FUN_140cbb07c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b330be FUN_142b330be body=48 status=ok
// SIG undefined FUN_142b330be(void)

longlong FUN_142b330be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x750;
  FUN_140cbb07c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b33106 FUN_142b33106 body=74 status=ok
// SIG undefined FUN_142b33106(void)

void FUN_142b33106(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[0x27] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x25) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  (**(code **)(*param_1 + 0x4d0))();
                    /* WARNING: Could not recover jumptable at 0x000142b33149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x2f] + 0xf8))(param_1 + 0x2f);
  return;
}



// FUNCTION 142b3315e FUN_142b3315e body=68 status=ok
// SIG undefined FUN_142b3315e(void)

void FUN_142b3315e(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[-8] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + -10) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + -0x4c) = uVar1;
  *(undefined4 *)(param_1 + -9) = uVar2;
  *(undefined4 *)((longlong)param_1 + -0x44) = uVar3;
  (**(code **)(param_1[-0x2f] + 0x4d0))(param_1 + -0x2f);
                    /* WARNING: Could not recover jumptable at 0x000142b3319b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf8))(param_1);
  return;
}



// FUNCTION 142b331a2 FUN_142b331a2 body=48 status=ok
// SIG undefined FUN_142b331a2(void)

longlong FUN_142b331a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1058;
  FUN_140d7a33a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b33214 FUN_142b33214 body=26 status=ok
// SIG undefined FUN_142b33214(void)

undefined8 FUN_142b33214(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_3);
  return 1;
}



// FUNCTION 142b3336c FUN_142b3336c body=55 status=ok
// SIG undefined FUN_142b3336c(void)

void FUN_142b3336c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x60);
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
                    /* WARNING: Could not recover jumptable at 0x000142b3339f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b333be FUN_142b333be body=109 status=ok
// SIG undefined FUN_142b333be(void)

void FUN_142b333be(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14a1a8050;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 142b33624 FUN_142b33624 body=1264 status=ok
// SIG undefined FUN_142b33624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b33624(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a0e40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a11d0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a12c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a1370);
  FUN_1446f470e(&DAT_14c9a4df8,L"OnBlackboardChangedBP",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a17a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a1870);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a19d0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a2010,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2120);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a2480,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1a2710;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2730);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2a60);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2b90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2cf0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2e40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a2f30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a3060);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a33d0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a3850,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a3e40,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a3f20);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a4020);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a5008 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a4690,1,&PTR_FUN_14a1a45c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 6;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a5150,1,&PTR_FUN_14a1a5060);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1a52c0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14c9a5178);
  if (cVar1 == '\0') {
    _DAT_14c9a5178 = 0;
    uRam000000014c9a5180 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1446f470e(&DAT_14c9a51c8,L"OnAnimAssetsLoaded",1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a5e70,1,&PTR_FUN_14a1a5e40);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1a6d20;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a6d40,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a6e70,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1a7020,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b33b18 FUN_142b33b18 body=55 status=ok
// SIG undefined FUN_142b33b18(void)

void FUN_142b33b18(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a52b0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a52b0 = FUN_14171c317(FUN_1462acd6e,uVar1,L"EGbxTestResult");
  }
  return;
}



// FUNCTION 142b33b4f FUN_142b33b4f body=55 status=ok
// SIG undefined FUN_142b33b4f(void)

void FUN_142b33b4f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5318 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5318 = FUN_14171c317(FUN_1462acee9,uVar1,L"EAttributeExpressionOperator");
  }
  return;
}



// FUNCTION 142b33b86 FUN_142b33b86 body=55 status=ok
// SIG undefined FUN_142b33b86(void)

void FUN_142b33b86(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5480 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5480 = FUN_14171c317(FUN_1462ad592,uVar1,L"EGbxGraphNodeSettingsRefType");
  }
  return;
}



// FUNCTION 142b33bbd FUN_142b33bbd body=55 status=ok
// SIG undefined FUN_142b33bbd(void)

void FUN_142b33bbd(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a55c8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a55c8 = FUN_14171c317(FUN_1462adc09,uVar1,L"EGbxMovementMode");
  }
  return;
}



// FUNCTION 142b33cb6 FUN_142b33cb6 body=57 status=ok
// SIG undefined FUN_142b33cb6(void)

void FUN_142b33cb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5348 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5348 = FUN_140002ddd(FUN_1462ad015,uVar1,L"GbxExpressionValueResolver");
  }
  return;
}



// FUNCTION 142b33e4a FUN_142b33e4a body=126 status=ok
// SIG undefined FUN_142b33e4a(void)

undefined8
FUN_142b33e4a(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 extraout_AL;
  int iVar1;
  ulonglong uVar2;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  undefined7 uVar3;
  undefined8 *_Buf1;
  void *_Buf2;
  undefined1 uVar4;
  
  if (*(byte *)(param_2 + 0x28) == *(byte *)(param_3 + 0x28)) {
    if (*(ushort *)(param_3 + 0x20) < 0x19) {
      _Buf2 = (void *)(param_3 + 8);
    }
    else {
      _Buf2 = *(void **)(param_3 + 8);
    }
    _Buf1 = (undefined8 *)(param_2 + 8);
    if (0x18 < *(ushort *)(param_2 + 0x20)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    uVar2 = (ulonglong)((uint)*(byte *)(param_2 + 0x28) * 0x120);
    if (*(code **)(&DAT_14c9a85e0 + uVar2) == (code *)0x0) {
      iVar1 = memcmp(_Buf1,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
      uVar4 = iVar1 == 0;
      uVar3 = (undefined7)(CONCAT44(extraout_var_00,iVar1) >> 8);
    }
    else {
      (**(code **)(&DAT_14c9a85e0 + uVar2))(_Buf1,_Buf2);
      uVar4 = extraout_AL;
      uVar3 = extraout_var;
    }
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
  }
  *param_5 = uVar4;
  return CONCAT71(uVar3,1);
}



// FUNCTION 142b33ecf FUN_142b33ecf body=920 status=ok
// SIG undefined FUN_142b33ecf(void)

void FUN_142b33ecf(void)

{
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1ac950,1,0,0,&PTR_FUN_14a1ac930,1);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1acca0,2,&PTR_FUN_14a1acc80,1);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ace80,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1acf00,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1ad260,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ad430,2,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1ad7d0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1adc00,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1ae370,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ae420,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ae530,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1ae8a0,1,0,0,0,0);
  FUN_14098d3d2(FUN_142b33b86,L"/Script/GbxEngine",L"EGbxGraphNodeSettingsRefType",&DAT_14c9a5478);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ae9f0,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1aeb60,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1aecf0,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1aee20,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1aef90,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1af020,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1af1c0,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1af6f0,1,0,0,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1af980,2,0,0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1afa50,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1afb00,1,0,0,0,0);
  FUN_14098d3d2(FUN_142b33bbd,L"/Script/GbxEngine",L"EGbxMovementMode",&DAT_14c9a55c0);
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1afcb0,1,0,0);
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1b3f90,1,0,0,0,0);
  return;
}



// FUNCTION 142b34268 FUN_142b34268 body=55 status=ok
// SIG undefined FUN_142b34268(void)

void FUN_142b34268(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a57b0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a57b0 = FUN_14171c317(FUN_1462ae9ef,uVar1,L"EParticleParameterType");
  }
  return;
}



// FUNCTION 142b3429f FUN_142b3429f body=55 status=ok
// SIG undefined FUN_142b3429f(void)

void FUN_142b3429f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5858 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5858 = FUN_14171c317(FUN_1462aed1f,uVar1,L"EGbxRelativeLocationType");
  }
  return;
}



// FUNCTION 142b342d6 FUN_142b342d6 body=55 status=ok
// SIG undefined FUN_142b342d6(void)

void FUN_142b342d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5888 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5888 = FUN_14171c317(FUN_1462aedb1,uVar1,L"EGbxRelativeRotationType");
  }
  return;
}



// FUNCTION 142b3430d FUN_142b3430d body=55 status=ok
// SIG undefined FUN_142b3430d(void)

void FUN_142b3430d(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a58a0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a58a0 = FUN_14171c317(FUN_1462aede0,uVar1,L"EGbxRelativeRotationModifier");
  }
  return;
}



// FUNCTION 142b34344 FUN_142b34344 body=55 status=ok
// SIG undefined FUN_142b34344(void)

void FUN_142b34344(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5970 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5970 = FUN_14171c317(FUN_1462af0dd,uVar1,L"EGbxTransformResolverValue");
  }
  return;
}



// FUNCTION 142b3437b FUN_142b3437b body=55 status=ok
// SIG undefined FUN_142b3437b(void)

void FUN_142b3437b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a59a0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a59a0 = FUN_14171c317(FUN_1462af19d,uVar1,L"EGbxType");
  }
  return;
}



// FUNCTION 142b343b2 FUN_142b343b2 body=55 status=ok
// SIG undefined FUN_142b343b2(void)

void FUN_142b343b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5a80 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5a80 = FUN_14171c317(FUN_1462af5c5,uVar1,L"EGbxWeightedAttributeInitMode");
  }
  return;
}



// FUNCTION 142b343e9 FUN_142b343e9 body=55 status=ok
// SIG undefined FUN_142b343e9(void)

void FUN_142b343e9(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5ac8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5ac8 = FUN_14171c317(FUN_1462af6e1,uVar1,L"EGenerateMapYamlBehavior");
  }
  return;
}



// FUNCTION 142b34420 FUN_142b34420 body=55 status=ok
// SIG undefined FUN_142b34420(void)

void FUN_142b34420(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5ae0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5ae0 = FUN_14171c317(FUN_1462af710,uVar1,L"EEnforceWorldPartitionUsageMode");
  }
  return;
}



// FUNCTION 142b34458 FUN_142b34458 body=221 status=ok
// SIG undefined FUN_142b34458(void)

longlong FUN_142b34458(void)

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
  if (DAT_14cacda40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147957ee7;
    local_40 = FUN_1463ac712;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AssetUserData",&DAT_14cacda40,&DAT_147957ee6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacda40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b34536 FUN_142b34536 body=55 status=ok
// SIG undefined FUN_142b34536(void)

void FUN_142b34536(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5c78 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5c78 = FUN_14171c317(FUN_1462afd0d,uVar1,L"ENumericRangeEditMode");
  }
  return;
}



// FUNCTION 142b3456e FUN_142b3456e body=64 status=ok
// SIG undefined FUN_142b3456e(void)

undefined8 * FUN_142b3456e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 == (longlong *)0x0) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
  }
  else {
    (**(code **)(*plVar1 + 0x4e0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 142b345b2 FUN_142b345b2 body=48 status=ok
// SIG undefined FUN_142b345b2(void)

longlong FUN_142b345b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140612a20(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b346ec FUN_142b346ec body=39 status=ok
// SIG undefined FUN_142b346ec(void)

undefined8 FUN_142b346ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142b347b6 FUN_142b347b6 body=97 status=ok
// SIG undefined FUN_142b347b6(void)

void FUN_142b347b6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *param_2 = &PTR_FUN_14a1c2160;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 1;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0xffffffff00000080;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 142b34824 FUN_142b34824 body=57 status=ok
// SIG undefined FUN_142b34824(void)

void FUN_142b34824(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a59c0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a59c0 = FUN_140002ddd(FUN_14173d665,uVar1,L"GbxUEDataTableDef");
  }
  return;
}



// FUNCTION 142b3491c FUN_142b3491c body=76 status=ok
// SIG undefined FUN_142b3491c(void)

void FUN_142b3491c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x38) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0x3f800000;
  return;
}



// FUNCTION 142b34a5e FUN_142b34a5e body=58 status=ok
// SIG undefined FUN_142b34a5e(void)

undefined8 FUN_142b34a5e(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 extraout_XMM0_Da;
  
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 1)) {
    uVar1 = 0;
  }
  else {
    FUN_140b963dc(param_2,0);
    *param_3 = extraout_XMM0_Da;
    param_3[1] = 0;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 142b34a9f FUN_142b34a9f body=1152 status=ok
// SIG undefined FUN_142b34a9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b34a9f(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1b7180;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b71a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b7700);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1b7ab0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b7bd0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1b7eb0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b7ed0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14a1b8300;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b8340);
  FUN_1446f470e(&DAT_14c9a58e0,L"K2_Resolve",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1b91c0,4,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1b9580,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b96d0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1b98e0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b9900);
  FUN_14098d3d2(FUN_142b3437b,L"/Script/GbxEngine",L"EGbxType",&DAT_14c9a5998);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14c9a59b0 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1b9fe0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ba190);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ba560);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1ba980;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1ba9a0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14a1bbbd0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bbc40,2,&PTR_FUN_14a1bbc10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1bbd90);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1bbe40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bc2c0,1,&PTR_FUN_14a1bc290);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bc390,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bc4f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bc5c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bc690,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bc760,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1bc960);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1bcb40);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14a1bdd10;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1bdd60,1,&PTR_FUN_14a1bdd30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1bdef0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b34f2c FUN_142b34f2c body=370 status=ok
// SIG undefined FUN_142b34f2c(void)

undefined8 FUN_142b34f2c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_142b34fca;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((((int)plVar3[2] == *(int *)(param_1 + 0x14) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0))
        && (lVar6 = *plVar3, lVar5 = DAT_14cac9ca8, lVar6 != 0)))) {
      do {
        if (lVar5 == 0) {
          local_30 = &local_18;
          local_18 = FUN_141030f22;
          local_20 = FUN_14081d0ea;
          local_28 = FUN_14081d0ea;
          local_38 = &LAB_1478c0a72;
          local_40 = &LAB_1417b2375;
          local_48 = L"Engine";
          local_50 = 0x1000000000;
          local_58 = 0x10000004;
          local_60 = 8;
          local_68 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          lVar5 = DAT_14cac9ca8;
        }
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30),
           *(longlong *)(lVar2 + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(char *)(lVar6 + 0x178) == '\x03');
          break;
        }
        lVar6 = *(longlong *)(lVar6 + 0x20);
        uVar4 = 0;
      } while (lVar6 != 0);
      goto LAB_142b34fca;
    }
  }
  uVar4 = 0;
LAB_142b34fca:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 142b350ae FUN_142b350ae body=243 status=ok
// SIG undefined FUN_142b350ae(void)

longlong * FUN_142b350ae(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_140437988();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140437988();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        plVar5 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6);
        *param_1 = 0;
        param_1[1] = 0;
        iVar1 = (int)plVar5[1];
        if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar1);
        }
        if (iVar1 == 0) {
          return param_1;
        }
        FUN_1470d93b6(param_1);
        if ((int)plVar5[1] < 1) {
          return param_1;
        }
        lVar7 = 0x68;
        lVar8 = 0;
        do {
          lVar2 = *plVar5;
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_145a6124c(param_1,iVar1);
          }
          lVar3 = *param_1;
          *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *(undefined8 *)(lVar2 + lVar7);
          *(int *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = (int)lVar8;
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x88;
        } while (lVar8 < (int)plVar5[1]);
        return param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142b351a2 FUN_142b351a2 body=351 status=ok
// SIG undefined FUN_142b351a2(void)

undefined4 FUN_142b351a2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  uVar7 = 0xffffffff;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if ((*param_2 == 0) && ((int)param_2[1] == -1)) {
    return 0xffffffff;
  }
  uVar3 = FUN_140437988();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
  if (plVar4 == (longlong *)0x0) {
    return 0xffffffff;
  }
  uVar3 = FUN_140437988();
  plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
  if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) {
    return 0xffffffff;
  }
  plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5);
  lVar2 = *param_2;
  uVar8 = *(uint *)(param_2 + 1);
  if (lVar2 == 0 && uVar8 == 0xffffffff) {
    return 0xffffffff;
  }
  if ((int)uVar8 < 0) {
    lVar6 = *plVar4;
    uVar10 = *(uint *)(plVar4 + 1);
LAB_142b35249:
    if (uVar10 != 0) {
      uVar9 = (ulonglong)(int)uVar10;
      goto LAB_142b3525c;
    }
  }
  else {
    uVar10 = *(uint *)(plVar4 + 1);
    uVar9 = (ulonglong)uVar10;
    lVar6 = *plVar4;
    if ((int)uVar10 <= (int)uVar8) goto LAB_142b35249;
    if (*(longlong *)(lVar6 + 0x68 + (ulonglong)uVar8 * 0x88) == lVar2) {
      bVar12 = true;
      goto LAB_142b352a1;
    }
LAB_142b3525c:
    uVar11 = 0;
    do {
      if (*(longlong *)(lVar6 + 0x68 + uVar11) == lVar2) {
        uVar8 = (int)(uVar11 >> 3) * -0xf0f0f0f;
        goto LAB_142b35293;
      }
      lVar1 = lVar6 + uVar11;
      uVar11 = uVar11 + 0x88;
    } while (lVar1 + 0x88 != uVar9 * 0x88 + lVar6);
  }
  uVar8 = 0xffffffff;
LAB_142b35293:
  *(uint *)(param_2 + 1) = uVar8;
  bVar12 = uVar8 != 0xffffffff;
  lVar6 = *plVar4;
LAB_142b352a1:
  if ((bVar12) && (lVar6 = lVar6 + (longlong)(int)uVar8 * 0x88, lVar6 != 0)) {
    uVar7 = *(undefined4 *)(lVar6 + 0x80);
  }
  return uVar7;
}



// FUNCTION 142b35302 FUN_142b35302 body=918 status=ok
// SIG undefined FUN_142b35302(void)

undefined8 * FUN_142b35302(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 == (longlong *)0x0) || ((*param_3 == 0 && ((int)param_3[1] == -1))))
  goto LAB_142b35375;
  uVar4 = FUN_140437988();
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_142b35375;
  uVar4 = FUN_140437988();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if (plVar5 == plVar6 || plVar6 == (longlong *)0x0) goto LAB_142b35375;
  plVar5 = (longlong *)(**(code **)(*plVar6 + 0x18))(plVar6);
  if (((((plVar5[3] == 0) || (*(int *)((longlong)plVar5 + 0x14) == 0)) ||
       (uVar7 = *(uint *)(plVar5 + 2), (int)uVar7 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar7 ||
       (lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar10 == 0)))) ||
     ((*(int *)(lVar10 + 0x10) != *(int *)((longlong)plVar5 + 0x14) ||
      (((*(uint *)(lVar10 + 8) & 0x10200000) != 0 || (cVar3 = FUN_142b34f2c(plVar5), cVar3 == '\0'))
      )))) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    goto LAB_142b3548c;
  }
  lVar10 = *param_3;
  uVar7 = *(uint *)(param_3 + 1);
  if (lVar10 == 0 && uVar7 == 0xffffffff) goto LAB_142b35375;
  if ((int)uVar7 < 0) {
    lVar15 = *plVar5;
    uVar9 = *(uint *)(plVar5 + 1);
LAB_142b35442:
    if (uVar9 != 0) {
      uVar8 = (ulonglong)(int)uVar9;
LAB_142b35454:
      uVar11 = 0;
      do {
        if (*(longlong *)(lVar15 + 0x68 + uVar11) == lVar10) {
          uVar7 = (int)(uVar11 >> 3) * -0xf0f0f0f;
          goto LAB_142b354b1;
        }
        lVar12 = lVar15 + uVar11;
        uVar11 = uVar11 + 0x88;
      } while (lVar12 + 0x88 != uVar8 * 0x88 + lVar15);
    }
    uVar7 = 0xffffffff;
LAB_142b354b1:
    *(uint *)(param_3 + 1) = uVar7;
    bVar16 = uVar7 != 0xffffffff;
    lVar15 = *plVar5;
  }
  else {
    uVar9 = *(uint *)(plVar5 + 1);
    uVar8 = (ulonglong)uVar9;
    lVar15 = *plVar5;
    if ((int)uVar9 <= (int)uVar7) goto LAB_142b35442;
    if (*(longlong *)(lVar15 + 0x68 + (ulonglong)uVar7 * 0x88) != lVar10) goto LAB_142b35454;
    bVar16 = true;
  }
  if ((!bVar16) || (lVar15 = lVar15 + (longlong)(int)uVar7 * 0x88, lVar15 == 0)) {
LAB_142b35375:
    *(undefined4 *)(param_1 + 1) = DAT_14c9a632c;
    *param_1 = DAT_14c9a6324;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  FUN_1448ec792(lVar15 + 0x18,&local_50);
  if (local_50 == 0) {
LAB_142b35691:
    lVar10 = 0;
  }
  else {
    iVar13 = *(int *)(lVar15 + 0x70);
    if ((longlong)iVar13 < 0) {
      lVar10 = *(longlong *)(local_50 + 0x78);
      uVar7 = *(uint *)(local_50 + 0x80);
LAB_142b3564f:
      if (uVar7 != 0) {
        lVar14 = (longlong)(int)uVar7 * 0x90 + lVar10;
        lVar12 = *(longlong *)(lVar15 + 0x68);
LAB_142b35604:
        uVar8 = 0;
        do {
          if (*(longlong *)(lVar10 + uVar8) == lVar12) {
            iVar13 = (int)(uVar8 >> 4) * 0x38e38e39;
            *(int *)(lVar15 + 0x70) = iVar13;
            if (iVar13 == -1) goto LAB_142b35691;
            lVar10 = *(longlong *)(local_50 + 0x78);
            goto LAB_142b35530;
          }
          lVar2 = lVar10 + uVar8;
          uVar8 = uVar8 + 0x90;
        } while (lVar2 + 0x90 != lVar14);
      }
      *(undefined4 *)(lVar15 + 0x70) = 0xffffffff;
      goto LAB_142b35691;
    }
    uVar7 = *(uint *)(local_50 + 0x80);
    lVar10 = *(longlong *)(local_50 + 0x78);
    if ((int)uVar7 <= iVar13) goto LAB_142b3564f;
    lVar12 = *(longlong *)(lVar15 + 0x68);
    if (*(longlong *)(lVar10 + (longlong)iVar13 * 0x90) != lVar12) {
      lVar14 = (ulonglong)uVar7 * 0x90 + lVar10;
      goto LAB_142b35604;
    }
LAB_142b35530:
    lVar10 = (longlong)iVar13 * 0x90 + lVar10;
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((lVar10 == 0) || ((int)*(uint *)(lVar10 + 0x10) < 1)) {
    *(undefined4 *)(param_1 + 1) = DAT_14c9a632c;
    *param_1 = DAT_14c9a6324;
  }
  else {
    uVar7 = *(int *)(lVar15 + 0x80) + 1;
    if (*(uint *)(lVar10 + 0x10) <= uVar7) {
      uVar7 = 0;
    }
    if (*(int *)(lVar15 + 0x80) < -1) {
      uVar7 = 0;
    }
    local_3c = 0;
    FUN_14063ffb4(plVar5,(int)param_3[1],uVar7);
    *param_1 = *(undefined8 *)(lVar15 + 0x78);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar15 + 0x80);
  }
LAB_142b3548c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3569a FUN_142b3569a body=548 status=ok
// SIG undefined FUN_142b3569a(void)

void FUN_142b3569a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 == (longlong *)0x0) || (*param_2 == 0 && (int)param_2[1] == -1)) || (*param_3 == 0))
  goto LAB_142b35771;
  uVar3 = FUN_140437988();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_142b35771;
  uVar3 = FUN_140437988();
  plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
  if (((((plVar5 == (longlong *)0x0 || plVar4 == plVar5) ||
        (plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5), plVar4[3] == 0)) ||
       ((*(int *)((longlong)plVar4 + 0x14) == 0 ||
        ((uVar7 = *(uint *)(plVar4 + 2), (int)uVar7 < 0 || (DAT_14c9647dc <= (int)uVar7)))))) ||
      (lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar8 == 0)) ||
     ((*(int *)(lVar8 + 0x10) != *(int *)((longlong)plVar4 + 0x14) ||
      ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_142b35771;
  lVar8 = FUN_1470d685e(plVar4 + 4,param_2);
  if (*(longlong *)(lVar8 + 0xc) != *param_3) {
    *(longlong *)(lVar8 + 0xc) = *param_3;
    *(int *)(lVar8 + 0x14) = (int)param_3[1];
  }
  cVar2 = FUN_142b34f2c(plVar4);
  if (cVar2 == '\0') goto LAB_142b35771;
  lVar8 = *param_2;
  uVar7 = *(uint *)(param_2 + 1);
  if (lVar8 == 0 && uVar7 == 0xffffffff) goto LAB_142b35771;
  if ((int)uVar7 < 0) {
    lVar6 = *plVar4;
    uVar10 = *(uint *)(plVar4 + 1);
LAB_142b357e5:
    if (uVar10 != 0) {
      uVar9 = (ulonglong)(int)uVar10;
LAB_142b357f8:
      uVar11 = 0;
      do {
        if (*(longlong *)(lVar6 + 0x68 + uVar11) == lVar8) {
          uVar7 = (int)(uVar11 >> 3) * -0xf0f0f0f;
          goto LAB_142b3582e;
        }
        lVar1 = lVar6 + uVar11;
        uVar11 = uVar11 + 0x88;
      } while (lVar1 + 0x88 != uVar9 * 0x88 + lVar6);
    }
    uVar7 = 0xffffffff;
LAB_142b3582e:
    *(uint *)(param_2 + 1) = uVar7;
    bVar12 = uVar7 != 0xffffffff;
    lVar6 = *plVar4;
  }
  else {
    uVar10 = *(uint *)(plVar4 + 1);
    uVar9 = (ulonglong)uVar10;
    lVar6 = *plVar4;
    if ((int)uVar10 <= (int)uVar7) goto LAB_142b357e5;
    if (*(longlong *)(lVar6 + 0x68 + (ulonglong)uVar7 * 0x88) != lVar8) goto LAB_142b357f8;
    bVar12 = true;
  }
  if (((bVar12) && (lVar6 = lVar6 + (longlong)(int)uVar7 * 0x88, lVar6 != 0)) &&
     (cVar2 = FUN_1448ec59e(lVar6,param_3), cVar2 != '\0')) {
    local_24 = 0;
    FUN_140f8b8f2(plVar4,param_2,param_3);
  }
LAB_142b35771:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b358c0 FUN_142b358c0 body=18 status=ok
// SIG undefined FUN_142b358c0(void)

void FUN_142b358c0(longlong *param_1,longlong *param_2)

{
  if (*param_1 != *param_2) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return;
}



// FUNCTION 142b358d2 FUN_142b358d2 body=298 status=ok
// SIG undefined FUN_142b358d2(void)

void FUN_142b358d2(longlong *param_1,undefined8 *param_2,int *param_3)

{
  wchar_t *_Str;
  wint_t wVar1;
  wint_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  wint_t *pwVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  *param_3 = -1;
  pwVar2 = (wint_t *)*param_1;
  wVar1 = *pwVar2;
  iVar3 = iswalnum(wVar1);
  pwVar5 = (wint_t *)*param_1;
  while ((wVar1 == 0x5f || (iVar3 != 0))) {
    *param_1 = (longlong)(pwVar5 + 1);
    wVar1 = pwVar5[1];
    iVar3 = iswalnum(wVar1);
    pwVar5 = (wint_t *)*param_1;
  }
  if (pwVar2 < pwVar5) {
    FUN_1446f82e2(&local_40,(ulonglong)((longlong)pwVar5 - (longlong)pwVar2) >> 1,pwVar2,1);
    *param_2 = local_40;
    pwVar5 = (wint_t *)*param_1;
  }
  if (*pwVar5 == 0x28) {
    _Str = (wchar_t *)(pwVar5 + 1);
    *param_1 = (longlong)_Str;
    wVar1 = pwVar5[1];
    if (wVar1 == 0x2d) {
      *param_1 = (longlong)(pwVar5 + 2);
      wVar1 = pwVar5[2];
    }
    iVar3 = iswdigit(wVar1);
    pwVar4 = (wchar_t *)*param_1;
    while (iVar3 != 0) {
      *param_1 = (longlong)(pwVar4 + 1);
      iVar3 = iswdigit(pwVar4[1]);
      pwVar4 = (wchar_t *)*param_1;
    }
    if (_Str < pwVar4) {
      iVar3 = _wtoi(_Str);
      *param_3 = iVar3;
      pwVar4 = (wchar_t *)*param_1;
    }
    if (*pwVar4 == L')') {
      *param_1 = (longlong)(pwVar4 + 1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b359fe FUN_142b359fe body=18 status=ok
// SIG undefined FUN_142b359fe(void)

void FUN_142b359fe(longlong *param_1,longlong *param_2)

{
  if (*param_1 != *param_2) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return;
}



// FUNCTION 142b35a10 FUN_142b35a10 body=239 status=ok
// SIG undefined FUN_142b35a10(void)

void FUN_142b35a10(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if ((((plVar3 != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = *(longlong *)(param_1 + 0x38);
      puVar4 = *(undefined8 **)(param_1 + 0x40);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (lVar6 != 0) {
        uVar5 = (**(code **)(*plVar3 + 0x18))();
        if (*(longlong *)(lVar6 + 0x60) != *(longlong *)(param_1 + 0x28)) {
          local_24 = 0;
          FUN_140f8b8f2(uVar5,lVar6 + 0x60,lVar6 + 0x6c);
        }
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4);
          LOCK();
          piVar1 = (int *)((longlong)puVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b35b11 FUN_142b35b11 body=49 status=ok
// SIG undefined FUN_142b35b11(void)

void FUN_142b35b11(void)

{
  FUN_1462b0f17(DAT_14c9a5f98,DAT_14c9a5fa0);
  if (DAT_14c9a5f98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b35b53 FUN_142b35b53 body=113 status=ok
// SIG undefined FUN_142b35b53(void)

void FUN_142b35b53(void)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_14072ffb2(DAT_14c9a5f78,DAT_14c9a5f80);
  if (DAT_14c9a5f78 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14c9a5f70;
  if (DAT_14c9a5f70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c9a5f70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (DAT_14c9a5f40 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a5f08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b35bf7 FUN_142b35bf7 body=169 status=ok
// SIG undefined FUN_142b35bf7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b35bf7(void)

{
  int *piVar1;
  longlong *plVar2;
  
  _DAT_14c9a5ff0 = &PTR_FUN_14a18e458;
  FUN_1401edebb(DAT_14c9a6068,DAT_14c9a6070);
  if (DAT_14c9a6068 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ede73(DAT_14c9a6058,DAT_14c9a6060);
  if (DAT_14c9a6058 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14c9a6050;
  if (DAT_14c9a6050 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c9a6050 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (DAT_14c9a6020 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14c9a6000;
  if (DAT_14c9a6000 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14c9a6000 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b35c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 142b35d06 FUN_142b35d06 body=41 status=ok
// SIG undefined FUN_142b35d06(void)

void FUN_142b35d06(void)

{
  DAT_14c9a63e0 = 0;
  if (DAT_14c9a63d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d623a8();
  return;
}



// FUNCTION 142b35d40 FUN_142b35d40 body=41 status=ok
// SIG undefined FUN_142b35d40(void)

void FUN_142b35d40(void)

{
  DAT_14c9a6390 = 0;
  if (DAT_14c9a6388 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62446();
  return;
}



// FUNCTION 142b35d6a FUN_142b35d6a body=106 status=ok
// SIG undefined FUN_142b35d6a(void)

void FUN_142b35d6a(longlong *param_1)

{
  DAT_14cacf914 = *(undefined1 *)((longlong)param_1 + 0x552);
  param_1[0xa8] = param_1[0xa5];
  *(int *)(param_1 + 0xa6) = (int)param_1[0xa3];
  *(undefined4 *)((longlong)param_1 + 0x534) = *(undefined4 *)((longlong)param_1 + 0x51c);
  *(int *)(param_1 + 0xa7) = (int)param_1[0xa4];
  *(undefined4 *)((longlong)param_1 + 0x53c) = *(undefined4 *)((longlong)param_1 + 0x524);
  DAT_14cac9ff0 = *(byte *)(param_1 + 0xc) >> 7;
  DAT_14cac9ff8 = param_1[0x2d];
  DAT_14caca000 = *(byte *)(param_1 + 0x2b) >> 1 & 1;
  DAT_14c9a6220 = (**(code **)(*param_1 + 0x708))();
  return;
}



// FUNCTION 142b35dec FUN_142b35dec body=2464 status=ok
// SIG undefined FUN_142b35dec(void)

int FUN_142b35dec(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 **local_d0;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140efa5a0();
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x1c))))) &&
     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if (*(int *)(param_3 + 8) != 0) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar11 = *plVar9;
      }
      else {
        lVar11 = 0;
      }
      local_58 = (undefined8 *)0x0;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar4 = local_58;
      local_50._0_4_ = 3;
      *local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14a1c7180;
      local_58[3] = 0;
      iVar13 = 0;
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar11 + 0xc);
        *(uint *)(local_58 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar13 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar13 = *(int *)(lVar11 + 0x10);
          bVar16 = iVar13 == 0;
          if (bVar16) {
            *(int *)(lVar11 + 0x10) = iVar15;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar13 = iVar15;
          }
        }
      }
      uVar14 = (int)local_50;
      puVar6 = local_58;
      *(int *)((longlong)puVar4 + 0x1c) = iVar13;
      puVar4[4] = param_1;
      plVar9 = (longlong *)(param_1 + 0x40);
      local_58 = (undefined8 *)0x0;
      local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
      if (*(int *)(param_1 + 0x48) == 0) {
LAB_142b35f8d:
        if (*plVar9 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar4 = (undefined8 *)*plVar9;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar9,0,0,0x10);
          *(undefined4 *)(param_1 + 0x48) = 0;
          goto LAB_142b35f8d;
        }
      }
      *(undefined8 **)(param_1 + 0x40) = puVar6;
      *(undefined4 *)(param_1 + 0x48) = uVar14;
      if ((int)local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_142b35fee;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_142b35fee:
    if (*(int *)(param_2 + 1) != 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
LAB_142b36676:
        lVar11 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x18);
        lVar11 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(param_1 + 0x1c) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_142b36676;
          lVar11 = *plVar9;
        }
      }
      local_58 = (undefined8 *)0x0;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      local_c0 = param_3;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar4 = local_58;
      local_50._0_4_ = 3;
      *local_58 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14a1c71f0;
      local_58[3] = 0;
      iVar13 = 0;
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar11 + 0xc);
        *(uint *)(local_58 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar13 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar15 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar13 = *(int *)(lVar11 + 0x10);
          bVar16 = iVar13 == 0;
          if (bVar16) {
            *(int *)(lVar11 + 0x10) = iVar15;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar13 = iVar15;
          }
        }
      }
      uVar14 = (int)local_50;
      puVar6 = local_58;
      param_3 = local_c0;
      *(int *)((longlong)puVar4 + 0x1c) = iVar13;
      puVar4[4] = param_1;
      plVar9 = (longlong *)(param_1 + 0x68);
      local_58 = (undefined8 *)0x0;
      local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
      if (*(int *)(param_1 + 0x70) == 0) {
LAB_142b36150:
        if (*plVar9 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar4 = (undefined8 *)*plVar9;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar9,0,0,0x10);
          *(undefined4 *)(param_1 + 0x70) = 0;
          goto LAB_142b36150;
        }
      }
      *(undefined8 **)(param_1 + 0x68) = puVar6;
      *(undefined4 *)(param_1 + 0x70) = uVar14;
      if ((int)local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_142b361b1;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_142b361b1:
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar5 = DAT_14c9a6268;
  if (*(int *)(param_3 + 8) != 0) {
    DAT_14c9a6270 = DAT_14c9a6270 + 1;
    uVar12 = (ulonglong)DAT_14c9a6270;
    uVar14 = 100;
    if (param_4 == '\0') {
      uVar14 = 0;
    }
    uVar8 = FUN_14050fd64();
    local_90 = uVar5;
    local_88 = uVar5 & 0xffffffff | uVar12 << 0x20;
    local_80 = 0;
    FUN_14050f74e(uVar8,&local_58,&local_90,uVar14);
    plVar9 = local_50;
    if ((undefined8 **)(param_1 + 0x28) != &local_58) {
      *(undefined8 **)(param_1 + 0x28) = local_58;
      local_58 = (undefined8 *)0x0;
      plVar3 = *(longlong **)(param_1 + 0x30);
      if (local_50 != plVar3) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x30) = plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
    }
    plVar9 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_14050f264(puVar4,DAT_14c9a1ab0);
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xc1) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))
                (*(longlong **)(param_1 + 0x28),param_3,0,0);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      local_a0 = 0;
      local_98 = 0;
      FUN_14009d848(&local_a0,param_1 + 0x40);
      FUN_140844560(uVar8,&local_58,&local_a0);
      *(undefined8 **)(param_1 + 0x38) = local_58;
      *(undefined1 *)(param_1 + 0x21) = 1;
      lVar11 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(lVar11 + 0x170) = 0xffffffff;
      FUN_1407d0516(lVar11,4,0x32);
    }
  }
  if ((*(int *)(param_2 + 1) != 0) && (lVar11 = FUN_14050fd64(), *(int *)(param_2 + 1) != 0)) {
    uVar14 = 100;
    if (param_4 == '\0') {
      uVar14 = 0;
    }
    *(undefined1 *)(param_1 + 0x22) = 1;
    local_68 = (undefined8 *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    local_c0 = param_3;
    FUN_14009d848(&local_68,param_1 + 0x68);
    local_58 = local_68;
    local_50 = (longlong *)CONCAT44(local_50._4_4_,(undefined4)uStack_60);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_78 = 0;
    iVar13 = *(int *)(param_2 + 1);
    uVar8 = *param_2;
    local_b8 = param_2;
    local_70 = iVar13;
    if (iVar13 == 0) {
      local_6c = 0;
    }
    else {
      FUN_140a1e386(&local_78,iVar13,0);
      FUN_140a1e307(local_78,uVar8,iVar13);
    }
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = uVar14;
    local_d0 = &local_68;
    FUN_140421d62(lVar11 + 0x1e8,&local_b0,&local_78,&local_58);
    FUN_140861e20(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    param_3 = local_c0;
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    param_2 = local_b8;
    if ((int)local_50 == 0) {
LAB_142b364bf:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      goto LAB_142b364bf;
    }
    plVar9 = local_a8;
    if ((undefined8 *)(param_1 + 0x50) != &local_b0) {
      *(undefined8 *)(param_1 + 0x50) = local_b0;
      local_b0 = 0;
      plVar3 = *(longlong **)(param_1 + 0x58);
      if (local_a8 != plVar3) {
        local_a8 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x58) = plVar9;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar3 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
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
      }
    }
    plVar9 = local_a8;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar13 = *(int *)(param_1 + 0x1c);
  if ((((iVar13 != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0 &&
       (*(int *)(lVar11 + 0x10) == iVar13)) && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
    if (*(int *)(param_3 + 8) == 0 && *(int *)(param_2 + 1) == 0) {
      FUN_1447f69b6(param_1);
      iVar13 = *(int *)(param_1 + 0x1c);
      if (iVar13 == 0) goto LAB_142b365e4;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    if (((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
       ((lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 != 0 &&
        (*(int *)(lVar11 + 0x10) == iVar13)))) {
      iVar13 = *(int *)(lVar11 + 8);
    }
  }
LAB_142b365e4:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar13;
}



// FUNCTION 142b3678e FUN_142b3678e body=223 status=ok
// SIG undefined FUN_142b3678e(void)

void FUN_142b3678e(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    uStack_44 = *(undefined4 *)(param_1 + 0x28);
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    uStack_3c = param_2[7];
    local_38 = param_2[8];
    uStack_34 = param_2[9];
    uStack_30 = param_2[10];
    uStack_2c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_58,plVar1);
      FUN_144b1fd46(&local_58,*(undefined8 *)(param_1 + 0x20));
      FUN_144b1fe18(&local_58,*(undefined8 *)(param_1 + 0x20));
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b368ba FUN_142b368ba body=69 status=ok
// SIG undefined FUN_142b368ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b368ba(void)

{
  _DAT_14c9a6290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b368fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a6298,1);
  return;
}



// FUNCTION 142b3691e FUN_142b3691e body=141 status=ok
// SIG undefined FUN_142b3691e(void)

undefined8 FUN_142b3691e(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (0 < *(int *)(param_1 + 0x960)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      cVar1 = FUN_14173e630(*(longlong *)(param_1 + 0x958) + lVar3,&local_38);
      if (cVar1 != '\0') {
        *param_3 = (char)lVar4;
        uVar2 = 1;
        goto LAB_142b36989;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (lVar4 < *(int *)(param_1 + 0x960));
  }
  uVar2 = 0;
LAB_142b36989:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b369ad FUN_142b369ad body=69 status=ok
// SIG undefined FUN_142b369ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b369ad(void)

{
  _DAT_14c9a62b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b369ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a62b8,1);
  return;
}



// FUNCTION 142b369f2 FUN_142b369f2 body=393 status=ok
// SIG undefined FUN_142b369f2(void)

ulonglong FUN_142b369f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x510) == '\0') {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      if (0 < (longlong)*(int *)(param_1 + 0x520)) {
        plVar6 = *(longlong **)(param_1 + 0x518);
        lVar7 = (longlong)*(int *)(param_1 + 0x520) << 3;
        bVar3 = DAT_14c950c29;
        do {
          lVar1 = *(longlong *)(param_2 + 0x48);
          lVar4 = *plVar6;
          if ((lVar4 != 0 & bVar3) == 1) {
            FUN_1456cec3c(lVar4);
LAB_142b36a74:
            lVar2 = FUN_14105c5c0();
            bVar3 = DAT_14c950c29;
            if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
                lVar2 + 0x30)) goto LAB_142b36a9c;
          }
          else {
            if (lVar4 != 0) goto LAB_142b36a74;
LAB_142b36a9c:
            lVar4 = 0;
          }
          lVar1 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            if (plVar6 != (longlong *)0x0) goto LAB_142b36a26;
            break;
          }
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
        goto LAB_142b36a38;
      }
LAB_142b36a26:
      if ((longlong)*(int *)(param_1 + 0x540) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x538);
        lVar7 = (longlong)*(int *)(param_1 + 0x540) << 3;
        bVar3 = DAT_14c950c29;
        do {
          lVar1 = *(longlong *)(param_2 + 0x48);
          lVar4 = *plVar6;
          if ((lVar4 != 0 & bVar3) == 1) {
            FUN_1456cec3c(lVar4);
LAB_142b36b00:
            lVar2 = FUN_14105c5c0();
            bVar3 = DAT_14c950c29;
            if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
                lVar2 + 0x30)) goto LAB_142b36b27;
          }
          else {
            if (lVar4 != 0) goto LAB_142b36b00;
LAB_142b36b27:
            lVar4 = 0;
          }
          lVar1 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            if (plVar6 != (longlong *)0x0) goto LAB_142b36a38;
            break;
          }
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    uVar5 = 0;
  }
LAB_142b36a38:
  return uVar5 & 0xffffffff;
}



// FUNCTION 142b36b7c FUN_142b36b7c body=375 status=ok
// SIG undefined FUN_142b36b7c(void)

bool FUN_142b36b7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x510) == '\0') {
    if (param_2 != 0) {
      if (0 < (longlong)*(int *)(param_1 + 0x530)) {
        plVar5 = *(longlong **)(param_1 + 0x528);
        lVar4 = (longlong)*(int *)(param_1 + 0x530) << 3;
        bVar2 = DAT_14c950c29;
        do {
          lVar3 = *plVar5;
          if ((lVar3 != 0 & bVar2) == 1) {
            FUN_1456cec3c(lVar3);
LAB_142b36bf2:
            lVar1 = FUN_141116c40();
            bVar2 = DAT_14c950c29;
            if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
                lVar1 + 0x30)) goto LAB_142b36c19;
          }
          else {
            if (lVar3 != 0) goto LAB_142b36bf2;
LAB_142b36c19:
            lVar3 = 0;
          }
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            if (plVar5 == (longlong *)0x0) goto LAB_142b36cd7;
            break;
          }
          plVar5 = plVar5 + 1;
          lVar4 = lVar4 + -8;
          if (lVar4 == 0) {
            return false;
          }
        } while( true );
      }
      if ((longlong)*(int *)(param_1 + 0x550) != 0) {
        plVar5 = *(longlong **)(param_1 + 0x548);
        lVar4 = (longlong)*(int *)(param_1 + 0x550) << 3;
        bVar2 = DAT_14c950c29;
        do {
          lVar3 = *plVar5;
          if ((lVar3 != 0 & bVar2) == 1) {
            FUN_1456cec3c(lVar3);
LAB_142b36c7a:
            lVar1 = FUN_141116c40();
            bVar2 = DAT_14c950c29;
            if (((lVar1 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
                lVar1 + 0x30)) goto LAB_142b36ca1;
          }
          else {
            if (lVar3 != 0) goto LAB_142b36c7a;
LAB_142b36ca1:
            lVar3 = 0;
          }
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            if (plVar5 != (longlong *)0x0) goto LAB_142b36cd7;
            break;
          }
          plVar5 = plVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    bVar6 = param_2 != 0;
  }
  else {
LAB_142b36cd7:
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 142b36d26 FUN_142b36d26 body=50 status=ok
// SIG undefined FUN_142b36d26(void)

void FUN_142b36d26(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xf0) = param_2;
  return;
}



// FUNCTION 142b36d9c FUN_142b36d9c body=149 status=ok
// SIG undefined FUN_142b36d9c(void)

void FUN_142b36d9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  memset(param_2 + 1,0,0x160);
  *param_2 = &PTR_FUN_14a1c6480;
  lVar2 = 0x20;
  do {
    *(undefined8 *)((longlong)param_2 + lVar2 + -0x10) = 0;
    *(undefined2 *)((longlong)param_2 + lVar2 + -8) = 0;
    *(undefined8 *)((longlong)param_2 + lVar2) = 0;
    ((undefined8 *)((longlong)param_2 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x20) = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x138);
  *(undefined4 *)(param_2 + 0x25) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  InitializeSRWLock((PSRWLOCK)(param_2 + 0x2a));
  *(undefined1 *)(param_2 + 0x2c) = 0;
  param_2[0x2b] = 0;
  return;
}



// FUNCTION 142b36e3e FUN_142b36e3e body=57 status=ok
// SIG undefined FUN_142b36e3e(void)

void FUN_142b36e3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5d50 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5d50 = FUN_140002ddd(FUN_1462b06b5,uVar1,L"PropertyValueResolver");
  }
  return;
}



// FUNCTION 142b36f36 FUN_142b36f36 body=39 status=ok
// SIG undefined FUN_142b36f36(void)

undefined8 FUN_142b36f36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142b36f5e FUN_142b36f5e body=462 status=ok
// SIG undefined FUN_142b36f5e(void)

void FUN_142b36f5e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_40 [4];
  char local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_1;
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_50);
  plVar10 = local_48;
  plVar6 = local_50;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  iVar2 = *(int *)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x10) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x14) < iVar2 + 1U) {
    FUN_1470d908a(lVar4 + 8,iVar2);
  }
  plVar9 = local_50;
  lVar5 = *(longlong *)(lVar4 + 8);
  *(longlong **)(lVar5 + (longlong)iVar2 * 0x10) = plVar6;
  *(longlong **)(lVar5 + 8 + (longlong)iVar2 * 0x10) = plVar10;
  lVar5 = param_1[1];
  uVar3 = *(undefined4 *)(lVar5 + 0x14);
  uVar7 = *(undefined4 *)(lVar5 + 0x18);
  uVar8 = *(undefined4 *)(lVar5 + 0x1c);
  *(undefined4 *)(local_50 + 3) = *(undefined4 *)(lVar5 + 0x10);
  *(undefined4 *)((longlong)local_50 + 0x1c) = uVar3;
  *(undefined4 *)(local_50 + 4) = uVar7;
  *(undefined4 *)((longlong)local_50 + 0x24) = uVar8;
  if (local_50[5] != *(longlong *)(lVar4 + 0x68)) {
    uVar3 = *(undefined4 *)(lVar4 + 0x70);
    local_50[5] = *(longlong *)(lVar4 + 0x68);
    *(undefined4 *)(local_50 + 6) = uVar3;
  }
  lVar5 = *param_2;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 == (longlong *)0x0) {
    local_50[7] = lVar5;
    plVar10 = (longlong *)local_50[8];
    if (plVar10 == (longlong *)0x0) goto LAB_142b37022;
    local_50[8] = 0;
LAB_142b370e0:
    LOCK();
    plVar6 = plVar10 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_142b37022;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar10;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_50[7] = lVar5;
    plVar10 = (longlong *)local_50[8];
    if (plVar6 != plVar10) {
      local_50[8] = (longlong)plVar6;
      if (plVar10 == (longlong *)0x0) goto LAB_142b37022;
      goto LAB_142b370e0;
    }
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_142b37022;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_142b37022:
  (**(code **)(*plVar9 + 0x18))(plVar9,lVar4);
  local_60 = 0;
  local_58 = 0xffffffff;
  local_68 = 0;
  (**(code **)(*local_50 + 0x30))(local_50,local_40,lVar4);
  if (local_3c == '\x01') {
    local_3c = '\0';
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3712e FUN_142b3712e body=31 status=ok
// SIG undefined FUN_142b3712e(void)

undefined8 FUN_142b3712e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b37156 FUN_142b37156 body=29 status=ok
// SIG undefined FUN_142b37156(void)

undefined8 FUN_142b37156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b372f2 FUN_142b372f2 body=93 status=ok
// SIG undefined FUN_142b372f2(void)

void FUN_142b372f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b37350 FUN_142b37350 body=93 status=ok
// SIG undefined FUN_142b37350(void)

void FUN_142b37350(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b373ae FUN_142b373ae body=126 status=ok
// SIG undefined FUN_142b373ae(void)

void FUN_142b373ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c7180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3741d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b37436 FUN_142b37436 body=269 status=ok
// SIG undefined FUN_142b37436(void)

undefined8 FUN_142b37436(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b3753d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142b3753d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_142b3753d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b374f1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_142b37544(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_142b374f1;
    }
  }
  uVar6 = 0;
LAB_142b374f1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b37544 FUN_142b37544 body=124 status=ok
// SIG undefined FUN_142b37544(void)

void FUN_142b37544(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  
  param_1 = (longlong *)*param_1;
  if ((((((*(int *)((longlong)param_1 + 0x1c) == 0) ||
         (uVar1 = *(uint *)(param_1 + 3), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
       (((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x1c))) ||
        (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
         (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))))) ||
      ((*(uint *)(*plVar6 + 8) >> 0x1e & 1) != 0)) ||
     (((char)param_1[4] != '\0' ||
      (*(undefined1 *)((longlong)param_1 + 0x21) = 0, *(char *)((longlong)param_1 + 0x22) != '\0')))
     ) {
    return;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar5 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar5;
  }
  else {
    bVar10 = false;
    do {
      lVar12 = uVar7 * 0x10 + -8;
      uVar9 = uVar7;
      while ((*(int *)(*param_1 + lVar12) != 0 &&
             (plVar6 = *(longlong **)(*param_1 + -8 + lVar12), plVar6 != (longlong *)0x0))) {
        pcVar2 = *(code **)(*plVar6 + 0x60);
        if (pcVar2 == FUN_144b34594) {
          if ((code *)plVar6[4] == (code *)&LAB_1480d7d86) {
            *(undefined1 *)(plVar6[3] + 0x2b4) = 1;
          }
          else {
            (*(code *)plVar6[4])(plVar6[3]);
          }
        }
        else if (pcVar2 == FUN_1467bbd2a) {
          (*(code *)plVar6[3])();
        }
        else {
          if (pcVar2 == FUN_1447f6b4c) {
            cVar4 = FUN_1447f6b4c();
          }
          else {
            cVar4 = (*pcVar2)();
          }
          if (cVar4 == '\0') break;
        }
        lVar12 = lVar12 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          iVar5 = *(int *)((longlong)param_1 + 0x14) + -1;
          *(int *)((longlong)param_1 + 0x14) = iVar5;
          if (!bVar10) {
            return;
          }
          goto LAB_1447f6aac;
        }
      }
      uVar7 = uVar9 - 1;
      bVar10 = true;
    } while (1 < uVar9);
    iVar5 = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)((longlong)param_1 + 0x14) = iVar5;
LAB_1447f6aac:
    if (iVar5 < 1) {
      iVar5 = (int)param_1[1];
      iVar8 = iVar5;
      if (0 < iVar5) {
        iVar11 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar6 = *(longlong **)(*param_1 + (longlong)iVar11 * 0x10),
              plVar6 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar6 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(param_1,iVar11);
            FUN_14005b248(param_1);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          iVar8 = (int)param_1[1];
        } while (iVar11 < iVar8);
      }
      iVar11 = 2;
      if (2 < iVar8 * 2) {
        iVar11 = iVar8 * 2;
      }
      *(int *)(param_1 + 2) = iVar11;
      if ((iVar11 < iVar5) && (*(int *)((longlong)param_1 + 0xc) != iVar8)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b375c0 FUN_142b375c0 body=29 status=ok
// SIG undefined FUN_142b375c0(void)

undefined8 FUN_142b375c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3775c FUN_142b3775c body=93 status=ok
// SIG undefined FUN_142b3775c(void)

void FUN_142b3775c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c71f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b377ba FUN_142b377ba body=93 status=ok
// SIG undefined FUN_142b377ba(void)

void FUN_142b377ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c71f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b37818 FUN_142b37818 body=126 status=ok
// SIG undefined FUN_142b37818(void)

void FUN_142b37818(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c71f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b37887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b378a0 FUN_142b378a0 body=269 status=ok
// SIG undefined FUN_142b378a0(void)

undefined8 FUN_142b378a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b379a7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142b379a7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_142b379a7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b3795b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_142b379ae(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_142b3795b;
    }
  }
  uVar6 = 0;
LAB_142b3795b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b379ae FUN_142b379ae body=124 status=ok
// SIG undefined FUN_142b379ae(void)

void FUN_142b379ae(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  
  param_1 = (longlong *)*param_1;
  if ((((((*(int *)((longlong)param_1 + 0x1c) == 0) ||
         (uVar1 = *(uint *)(param_1 + 3), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
       (((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x1c))) ||
        (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
         (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))))) ||
      ((*(uint *)(*plVar6 + 8) >> 0x1e & 1) != 0)) ||
     (((char)param_1[4] != '\0' ||
      (*(undefined1 *)((longlong)param_1 + 0x22) = 0, *(char *)((longlong)param_1 + 0x21) != '\0')))
     ) {
    return;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar5 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar5;
  }
  else {
    bVar10 = false;
    do {
      lVar12 = uVar7 * 0x10 + -8;
      uVar9 = uVar7;
      while ((*(int *)(*param_1 + lVar12) != 0 &&
             (plVar6 = *(longlong **)(*param_1 + -8 + lVar12), plVar6 != (longlong *)0x0))) {
        pcVar2 = *(code **)(*plVar6 + 0x60);
        if (pcVar2 == FUN_144b34594) {
          if ((code *)plVar6[4] == (code *)&LAB_1480d7d86) {
            *(undefined1 *)(plVar6[3] + 0x2b4) = 1;
          }
          else {
            (*(code *)plVar6[4])(plVar6[3]);
          }
        }
        else if (pcVar2 == FUN_1467bbd2a) {
          (*(code *)plVar6[3])();
        }
        else {
          if (pcVar2 == FUN_1447f6b4c) {
            cVar4 = FUN_1447f6b4c();
          }
          else {
            cVar4 = (*pcVar2)();
          }
          if (cVar4 == '\0') break;
        }
        lVar12 = lVar12 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          iVar5 = *(int *)((longlong)param_1 + 0x14) + -1;
          *(int *)((longlong)param_1 + 0x14) = iVar5;
          if (!bVar10) {
            return;
          }
          goto LAB_1447f6aac;
        }
      }
      uVar7 = uVar9 - 1;
      bVar10 = true;
    } while (1 < uVar9);
    iVar5 = *(int *)((longlong)param_1 + 0x14) + -1;
    *(int *)((longlong)param_1 + 0x14) = iVar5;
LAB_1447f6aac:
    if (iVar5 < 1) {
      iVar5 = (int)param_1[1];
      iVar8 = iVar5;
      if (0 < iVar5) {
        iVar11 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar6 = *(longlong **)(*param_1 + (longlong)iVar11 * 0x10),
              plVar6 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar6 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(param_1,iVar11);
            FUN_14005b248(param_1);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          iVar8 = (int)param_1[1];
        } while (iVar11 < iVar8);
      }
      iVar11 = 2;
      if (2 < iVar8 * 2) {
        iVar11 = iVar8 * 2;
      }
      *(int *)(param_1 + 2) = iVar11;
      if ((iVar11 < iVar5) && (*(int *)((longlong)param_1 + 0xc) != iVar8)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b37a2a FUN_142b37a2a body=29 status=ok
// SIG undefined FUN_142b37a2a(void)

undefined8 FUN_142b37a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b37bc6 FUN_142b37bc6 body=93 status=ok
// SIG undefined FUN_142b37bc6(void)

void FUN_142b37bc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b37c24 FUN_142b37c24 body=93 status=ok
// SIG undefined FUN_142b37c24(void)

void FUN_142b37c24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7260;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b37c82 FUN_142b37c82 body=126 status=ok
// SIG undefined FUN_142b37c82(void)

void FUN_142b37c82(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c7260;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b37cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b37d00 FUN_142b37d00 body=51 status=ok
// SIG undefined FUN_142b37d00(void)

void FUN_142b37d00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  uVar2 = FUN_14477b072(plVar1,DAT_14c9a51c8);
                    /* WARNING: Could not recover jumptable at 0x000142b37d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,0,*(code **)(*plVar1 + 0x248));
  return;
}



// FUNCTION 142b37d34 FUN_142b37d34 body=295 status=ok
// SIG undefined FUN_142b37d34(void)

undefined8 FUN_142b37d34(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b37e55;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_142b37e55;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_142b37e55:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b37e09;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar6 = FUN_14477b072(plVar3,DAT_14c9a51c8);
      (**(code **)(*plVar3 + 0x248))(plVar3,uVar6,0);
      uVar6 = 1;
      goto LAB_142b37e09;
    }
  }
  uVar6 = 0;
LAB_142b37e09:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b37e5c FUN_142b37e5c body=2306 status=ok
// SIG undefined FUN_142b37e5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b37e5c(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 2;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1c3150);
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1c3f00,1,&PTR_FUN_14a1c3ed0);
  uStack_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1c4b10,2,0);
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1c4c10);
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/GbxEngine",0,0,&PTR_FUN_14a1c4d00);
  uStack_90 = 0;
  uStack_88 = 0;
  local_98 = 5;
  FUN_14282b410(L"/Script/GbxEngine",&PTR_FUN_14a1c5c70,1,&PTR_FUN_14a1c5ba0);
  local_78 = "AssetRegistry";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_78,1);
  _DAT_14c9a5e88 = (ulonglong)uVar6;
  _DAT_14c9a5e90 = 0;
  uRam000000014c9a5e98 = 0;
  _DAT_14c9a5ea0 = 0;
  uRam000000014c9a5ea8 = 0;
  _DAT_14c9a5eb0 = 0;
  uRam000000014c9a5eb8 = 0;
  _DAT_14c9a5ec0 = 0;
  uRam000000014c9a5ec8 = 0;
  _DAT_14c9a5ed0 = 0;
  uRam000000014c9a5ed8 = 0;
  _DAT_14c9a5ee0 = 2;
  _DAT_14c9a5ee4 = 0;
  uRam000000014c9a5eec = 0;
  _DAT_14c9a5ef4 = 0;
  _DAT_14c9a5ef8 = 2;
  atexit((_func_5014 *)&LAB_142b34f20);
  DAT_14c9a6318 = 0;
  DAT_14c9a6320 = 0xffffffff;
  DAT_14c9a6324 = 0;
  DAT_14c9a632c = 0xffffffff;
  local_78 = "nexus";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_78,1);
  _DAT_14c9a5f90 = (ulonglong)uVar6;
  DAT_14c9a5f98 = 0;
  _DAT_14c9a5fa0 = 0;
  atexit(FUN_142b35b11);
  FUN_1446f470e(&local_78,&DAT_14a1c72e4,1);
  FUN_1446f470e(&uStack_70,&DAT_149e74618,1);
  DAT_14c9a5fa8 = (undefined8 *)0x0;
  DAT_14c9a5fb0 = 2;
  FUN_1401b309e(&DAT_14c9a5fa8,2,0);
  puVar1 = DAT_14c9a5fa8;
  *DAT_14c9a5fa8 = local_78;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  atexit((_func_5014 *)&LAB_142b35b42);
  DAT_14c9a5f00 = 0;
  DAT_14c9a5f08 = 0;
  _DAT_14c9a5f10 = 0;
  DAT_14c9a5f18 = 0;
  DAT_14c9a5f20 = 0xffffffff;
  _DAT_14c9a5f28 = 0;
  uRam000000014c9a5f30 = 0;
  _DAT_14c9a5f38 = 0;
  DAT_14c9a5f40 = 0;
  _DAT_14c9a5f48 = 0;
  uRam000000014c9a5f50 = 0;
  _DAT_14c9a5f58 = 0;
  uRam000000014c9a5f60 = 0;
  _DAT_14c9a5f68 = 0;
  DAT_14c9a5f70 = 0;
  DAT_14c9a5f78 = 0;
  _DAT_14c9a5f80 = 0;
  DAT_14c9a5f88 = 0;
  atexit(FUN_142b35b53);
  FUN_1446f470e(&DAT_14c9a5fb8,L"State",1);
  FUN_1446f470e(&DAT_14c9a5fc0,L"StateMachine",1);
  _DAT_14c9a5fc8 = 0;
  FUN_1446f470e(&DAT_14c9a63f8,L"False",1);
  FUN_1446f470e(&DAT_14c9a6400,&DAT_149e0617a,1);
  pcVar4 = DAT_14c9a6400;
  pcVar3 = DAT_14c9a63f8;
  DAT_14c9a6308 = (undefined8 *)0x0;
  DAT_14c9a6310 = 2;
  FUN_1401b309e(&DAT_14c9a6308,2,0);
  puVar1 = DAT_14c9a6308;
  *DAT_14c9a6308 = pcVar3;
  puVar1[1] = pcVar4;
  atexit((_func_5014 *)&LAB_142b35bc4);
  local_78 = pcVar3;
  FUN_1446f470e(&uStack_70,&DAT_149e25dfc,1);
  FUN_1446f470e(&local_68,&DAT_149e1d734,1);
  FUN_1446f470e(&lStack_60,&DAT_149e06338,1);
  FUN_1446f470e(&local_58,L"Disabled",1);
  DAT_14c9a5fd0 = (undefined8 *)0x0;
  DAT_14c9a5fd8 = 5;
  FUN_1401b309e(&DAT_14c9a5fd0,5,0);
  puVar1 = DAT_14c9a5fd0;
  DAT_14c9a5fd0[4] = local_58;
  puVar1[2] = local_68;
  puVar1[3] = lStack_60;
  *puVar1 = local_78;
  puVar1[1] = CONCAT44(uStack_6c,uStack_70);
  atexit((_func_5014 *)&LAB_142b35bd5);
  local_78 = pcVar4;
  FUN_1446f470e(&uStack_70,&DAT_149e0209e,1);
  FUN_1446f470e(&local_68,&DAT_149e060ac,1);
  FUN_1446f470e(&lStack_60,&DAT_149e06384,1);
  FUN_1446f470e(&local_58,L"Enabled",1);
  DAT_14c9a5fe0 = (longlong *)0x0;
  DAT_14c9a5fe8 = 5;
  FUN_1401b309e(&DAT_14c9a5fe0,5,0);
  plVar2 = DAT_14c9a5fe0;
  DAT_14c9a5fe0[4] = local_58;
  plVar2[2] = local_68;
  plVar2[3] = lStack_60;
  *plVar2 = (longlong)local_78;
  plVar2[1] = CONCAT44(uStack_6c,uStack_70);
  atexit((_func_5014 *)&LAB_142b35be6);
  _DAT_14c9a5ff0 = &PTR_FUN_14a18e458;
  _DAT_14c9a5ff8 = 0;
  DAT_14c9a6000 = 0;
  _DAT_14c9a6008 = 0;
  uRam000000014c9a6010 = 0;
  _DAT_14c9a6018 = 0;
  DAT_14c9a6020 = 0;
  _DAT_14c9a6028 = 0;
  uRam000000014c9a6030 = 0;
  _DAT_14c9a6038 = 0;
  uRam000000014c9a6040 = 0;
  _DAT_14c9a6048 = 0;
  DAT_14c9a6050 = 0;
  DAT_14c9a6058 = 0;
  _DAT_14c9a6060 = 0;
  DAT_14c9a6068 = 0;
  _DAT_14c9a6070 = 0;
  atexit(FUN_142b35bf7);
  FUN_1446f470e(&local_78,L"Source",1);
  FUN_1446dcdd4(&DAT_14c9a6078,&local_78);
  atexit((_func_5014 *)&LAB_142b35ca0);
  FUN_1446f470e(&local_78,L"StateMachines",1);
  FUN_1446dcdd4(&DAT_14c9a60a0,&local_78);
  atexit((_func_5014 *)&LAB_142b35cb1);
  FUN_1446f470e(&local_78,L"Name",1);
  FUN_1446dcdd4(&DAT_14c9a60c8,&local_78);
  atexit((_func_5014 *)&LAB_142b35cc2);
  FUN_1446f470e(&local_78,L"DefaultState",1);
  FUN_1446dcdd4(&DAT_14c9a60f0,&local_78);
  atexit((_func_5014 *)&LAB_142b35cd3);
  FUN_1446f470e(&local_78,L"States",1);
  FUN_1446dcdd4(&DAT_14c9a6118,&local_78);
  atexit((_func_5014 *)&LAB_142b35ce4);
  FUN_1446f470e(&local_78,L"Aspects",1);
  FUN_1446dcdd4(&DAT_14c9a6140,&local_78);
  atexit((_func_5014 *)&LAB_142b35cf5);
  ram0x00014c9a616c = 0;
  FUN_14052b5e0(&DAT_14c9a6168,"StructType",0);
  _DAT_14c9a6178 = "StructType";
  DAT_14c9a63b8 = 0;
  DAT_14c9a63c0 = 0;
  DAT_14c9a6398 = 0;
  _DAT_14c9a63a0 = 0;
  _DAT_14c9a63c4 = 0xffffffff00000080;
  DAT_14c9a63cc = 0;
  DAT_14c9a63d8 = 0;
  DAT_14c9a63e0 = 0;
  atexit(FUN_142b35d06);
  DAT_14c9a6200 = 0;
  _DAT_14c9a6208 = 0x800000000;
  atexit((_func_5014 *)&LAB_142b35d2f);
  DAT_14c9a6368 = 0;
  DAT_14c9a6370 = 0;
  DAT_14c9a6348 = 0;
  _DAT_14c9a6350 = 0;
  _DAT_14c9a6374 = 0xffffffff00000080;
  DAT_14c9a637c = 0;
  DAT_14c9a6388 = 0;
  DAT_14c9a6390 = 0;
  atexit(FUN_142b35d40);
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar5 = FUN_140b10a34(&local_78,&DAT_14c9a6210);
  if (cVar5 == '\0') {
    _DAT_14c9a6210 = 0;
    uRam000000014c9a6218 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = "bone";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  DAT_14c9a6228 = 0;
  atexit((_func_5014 *)&LAB_142b35dd4);
  local_78 = "GbxAnimLoader";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_78,1);
  DAT_14c9a6268 = (ulonglong)uVar6;
  FUN_1446f470e(&DAT_14c9a63f0,L"Character",1);
  FUN_1446f470e(&DAT_14c9a63e8,L"Weapon",1);
  DAT_14c9a6338 = 0;
  DAT_14c9a6330 = 0;
  DAT_14c9a6340 = 0;
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9a6290,L"a.gbx.DynAnimNodesLog.Enable",&local_78,
                L"Logging and deletion of lingering dynamic animnodes for bug investigation OAK2-105147"
               );
  atexit(FUN_142b368ba);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c9a62b0,L"a.gbx.AttributesConcurrent",&DAT_14c9a62a8,
                L"If enabled, AnimInstances will update their attributes concurrently instead of all on the game thread."
               );
  atexit(FUN_142b369ad);
  _DAT_14c9a62c4 = 0;
  FUN_14052b5e0(&DAT_14c9a62c0,"context_def",0);
  _DAT_14c9a62d0 = "context_def";
  _DAT_14c9a62dc = 0;
  FUN_14052b5e0(&DAT_14c9a62d8,"context_class",0);
  _DAT_14c9a62e8 = "context_class";
  _DAT_14c9a62f4 = 0;
  FUN_14052b5e0(&DAT_14c9a62f0,"context_params",0);
  _DAT_14c9a6300 = "context_params";
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b38760 FUN_142b38760 body=44 status=ok
// SIG undefined FUN_142b38760(void)

void FUN_142b38760(longlong *param_1,undefined1 *param_2)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
  }
  FUN_14053d96a(param_1);
  *param_2 = 0;
  return;
}



// FUNCTION 142b3878c FUN_142b3878c body=38 status=ok
// SIG undefined FUN_142b3878c(void)

undefined8 FUN_142b3878c(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
  }
  FUN_14053d96a(param_1);
  return 1;
}



// FUNCTION 142b387b2 FUN_142b387b2 body=51 status=ok
// SIG undefined FUN_142b387b2(void)

undefined8 FUN_142b387b2(undefined8 param_1,longlong *param_2)

{
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
    FUN_140056680(param_1,L"Invalid handle");
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
  }
  return param_1;
}



// FUNCTION 142b387e6 FUN_142b387e6 body=695 status=ok
// SIG undefined FUN_142b387e6(void)

undefined8
FUN_142b387e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined1 local_b8 [24];
  longlong local_a0;
  char local_90 [16];
  longlong *local_80;
  int local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = 0;
  local_90[0] = '\0';
  local_68 = 0;
  local_c0 = param_2;
  FUN_1456bb102(local_90,param_3);
  local_60 = '\0';
  local_38 = 0;
  FUN_1446dcdd4(local_b8,&local_c0);
  if (DAT_14c9a66c8 != 0) {
    uVar4 = FUN_144837462(DAT_14c9a66c8,local_b8);
  }
  FUN_1470daf87(param_1,uVar4,local_90,param_4);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_38 != 0) {
    lVar9 = (longlong)local_38 + -1;
    lVar7 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar3 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar3 + lVar7) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar7) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar2 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_38 = 0;
  }
  if (local_60 != '\0') {
    if (local_60 == '\x01') {
      local_58 = 0;
    }
    else if ((local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    local_60 = '\0';
  }
  lVar3 = DAT_14c9a3da0;
  if ((longlong)local_68 != 0) {
    lVar9 = (longlong)local_68 + -1;
    lVar7 = lVar9 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar3 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14c9a3da0;
    iVar8 = (int)lVar9;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar3 + lVar7) = 0xffffffff;
    iVar5 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar5 = DAT_14c9a3dd0;
    }
    *(int *)(lVar3 + 4 + lVar7) = iVar5;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar6 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a3dc0;
    }
    iVar5 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar5 = iVar8;
    }
    bVar2 = (byte)lVar9 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_68 = 0;
  }
  if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b38a9e FUN_142b38a9e body=41 status=ok
// SIG undefined FUN_142b38a9e(void)

void FUN_142b38a9e(void)

{
  DAT_14c9a6460 = 0;
  if (DAT_14c9a6458 != 0) {
    FUN_1400020a8();
  }
  FUN_145d624e4();
  return;
}



// FUNCTION 142b38acc FUN_142b38acc body=36 status=ok
// SIG undefined FUN_142b38acc(void)

bool FUN_142b38acc(char *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
      return true;
    }
    lVar2 = *(longlong *)(param_1 + 8);
  }
  return lVar2 == 0;
}



// FUNCTION 142b38af0 FUN_142b38af0 body=59 status=ok
// SIG undefined FUN_142b38af0(void)

void FUN_142b38af0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9a6548;
  if (DAT_14c9a6548 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9a6548 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b38b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b38b3c FUN_142b38b3c body=130 status=ok
// SIG undefined FUN_142b38b3c(void)

void FUN_142b38b3c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140261af2();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 142b38c5f FUN_142b38c5f body=246 status=ok
// SIG undefined FUN_142b38c5f(void)

ulonglong FUN_142b38c5f(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float _X;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float _Y;
  uint uVar9;
  undefined1 extraout_var [12];
  
  _Y = (float)param_3;
  uVar2 = (uint)((ulonglong)param_2 >> 0x20);
  _X = (float)param_2;
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._0_8_ = param_2;
  auVar4._12_4_ = in_XMM1_Dd;
  auVar6._4_12_ = auVar4._4_12_;
  switch(param_1) {
  case 1:
                    /* WARNING: Could not recover jumptable at 0x000142b38c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar5._0_4_ = powf(_X,_Y);
    auVar5._4_12_ = extraout_var;
    return auVar5._0_8_;
  case 2:
    auVar7._0_4_ = _X * _Y;
    auVar7._4_12_ = auVar6._4_12_;
    return auVar7._0_8_;
  case 3:
    uVar9 = (uint)((ulonglong)param_3 >> 0x20) & 0x7fffffff;
    return CONCAT44(uVar2 & uVar9,(uint)_X & -(uint)(ABS(_Y) <= 1e-08)) |
           CONCAT44(~uVar9 & uVar2,~-(uint)(ABS(_Y) <= 1e-08) & (uint)(_X / _Y));
  case 4:
    uVar3 = FUN_1447c7e44(&switchD_142b38c7e::switchdataD_14a1c88ac,_Y);
    return uVar3;
  case 5:
    auVar6._0_4_ = _X + _Y;
    return auVar6._0_8_;
  case 6:
    auVar8._0_4_ = _X - _Y;
    auVar8._4_12_ = auVar6._4_12_;
    return auVar8._0_8_;
  case 7:
    uVar2 = -(uint)(_X < _Y);
    break;
  case 8:
    uVar2 = -(uint)(_X <= _Y);
    break;
  case 9:
    bVar1 = _Y < _X;
    goto LAB_142b38d45;
  case 10:
    bVar1 = _Y <= _X;
LAB_142b38d45:
    return (ulonglong)(-(uint)bVar1 & 0x3f800000);
  case 0xb:
    uVar2 = -(uint)(ABS(_X - _Y) <= 1e-08);
    break;
  case 0xc:
    uVar2 = -(uint)(1e-08 < ABS(_X - _Y));
    break;
  case 0xd:
    bVar1 = _Y != 0.0 && _X != 0.0;
    goto LAB_142b38d0a;
  case 0xe:
    bVar1 = _X != 0.0 || _Y != 0.0;
LAB_142b38d0a:
    return (ulonglong)(uint)(float)bVar1;
  default:
    return 0;
  }
  return (ulonglong)(uVar2 & 0x3f800000);
}



// FUNCTION 142b38d56 FUN_142b38d56 body=207 status=ok
// SIG undefined FUN_142b38d56(void)

undefined4 * FUN_142b38d56(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x05') {
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,5);
  pppuVar5 = (undefined8 ***)&DAT_14c9ab1b8;
  if (local_20 != 0) {
    pppuVar5 = local_40;
  }
  *(undefined8 ***)(param_2 + 4) = pppuVar5[2];
  uVar2 = *(undefined4 *)((longlong)pppuVar5 + 4);
  uVar3 = *(undefined4 *)(pppuVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)pppuVar5 + 0xc);
  *param_2 = *(undefined4 *)pppuVar5;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_40;
    if (0x18 < local_28) {
      pppuVar5 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142b38e2e FUN_142b38e2e body=210 status=ok
// SIG undefined FUN_142b38e2e(void)

undefined4 * FUN_142b38e2e(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_50 = 0;
  local_88 = &local_58;
  local_58 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,param_3,&local_48,&local_50);
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = local_58;
  local_88 = (undefined8 *)local_50;
  FUN_1401097ec(param_1 + 1,&local_3a,&local_78,local_48);
  if (local_39 == '\0') {
    *(undefined8 *)(param_2 + 4) = local_68;
    *param_2 = (undefined4)local_78;
    param_2[1] = local_78._4_4_;
    param_2[2] = (undefined4)uStack_70;
    param_2[3] = uStack_70._4_4_;
  }
  *(bool *)(param_2 + 6) = local_39 == '\0';
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b38f02 FUN_142b38f02 body=968 status=ok
// SIG undefined FUN_142b38f02(void)

ulonglong FUN_142b38f02(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  longlong *local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  void *pvStack_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_3a;
  byte local_39;
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = (**(code **)(*param_1 + 0x18))();
  if (cVar2 == '\0') {
    uVar6 = 0;
    goto LAB_142b38f36;
  }
  local_48 = 0;
  local_50 = 0;
  local_c8 = &local_58;
  local_58 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,param_3,&local_48,&local_50);
  local_88 = 0;
  local_98 = 0;
  pvStack_90 = (void *)0x0;
  local_a8 = (longlong *)0x0;
  pvStack_a0 = (void *)0x0;
  local_80 = &PTR_FUN_149eacb10;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  local_c0 = local_58;
  local_c8 = (undefined8 *)local_50;
  FUN_1470b41d0(param_1 + 2,&local_3a,&local_a8,local_48);
  bVar5 = pvStack_a0 != (void *)0x0 & local_a8 != (longlong *)0x0 & ~local_39;
  uVar6 = CONCAT71((int7)((ulonglong)&local_3a >> 8),bVar5);
  if (bVar5 != 1) goto LAB_142b391a1;
  (**(code **)(*param_1 + 0x98))(param_1,&local_a8);
  plVar1 = local_a8;
  if (local_a8 == (longlong *)0x0) {
LAB_142b390d7:
    if (pvStack_90 == (void *)0x0) {
      if ((~local_a8[7] & 0x1000000200U) == 0) {
        memset(pvStack_a0,0,(longlong)*(int *)((longlong)local_a8 + 0x34));
      }
      else {
        (**(code **)(*local_a8 + 0x140))();
      }
    }
    else if (pvStack_a0 != pvStack_90) {
      if ((*(byte *)((longlong)local_a8 + 0x3b) & 0x40) == 0) {
        (**(code **)(*local_a8 + 0x100))(local_a8,pvStack_a0,pvStack_90,(int)local_a8[6]);
      }
      else {
        memcpy(pvStack_a0,pvStack_90,
               (longlong)(int)local_a8[6] * (longlong)*(int *)((longlong)local_a8 + 0x34));
      }
    }
  }
  else {
    puVar7 = (undefined *)local_a8[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_b8 = (undefined *)FUN_140342cba();
        local_b0 = FUN_1468c7f1e;
        local_c0 = 0;
        local_c8 = (undefined8 *)0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_b0 = FUN_1403a682c;
      local_b8 = &DAT_14c951a38;
      local_c0 = 0;
      local_c8 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar8 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c952a08 && bVar8) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar8 = puVar7 != (undefined *)0x0;
          if (puVar7 == &DAT_14c952a08) break;
        } while (puVar7 != (undefined *)0x0);
      }
      if (bVar8) goto LAB_142b390ad;
      goto LAB_142b390d7;
    }
    if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c952a10) == 0) goto LAB_142b390d7;
LAB_142b390ad:
    lVar3 = FUN_140168d6e();
    if (plVar1[0xe] == lVar3) {
      if (pvStack_90 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((longlong)pvStack_90 + 8);
      }
      *(undefined4 *)((longlong)pvStack_a0 + 8) = uVar9;
      FUN_14020a6cc(pvStack_a0,1);
    }
    else {
      lVar4 = FUN_140168da8();
      lVar3 = plVar1[0xe];
      if (lVar3 != lVar4) {
        if (lVar3 != 0) {
          FUN_1462a421e();
        }
        goto LAB_142b390d7;
      }
      if (pvStack_90 == (void *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined4 *)((longlong)pvStack_90 + 8);
      }
      *(undefined4 *)((longlong)pvStack_a0 + 8) = uVar9;
      FUN_140841e14(pvStack_a0,1);
    }
  }
LAB_142b391a1:
  FUN_1448eac94(&local_80);
LAB_142b38f36:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 142b392cc FUN_142b392cc body=56 status=ok
// SIG undefined FUN_142b392cc(void)

void FUN_142b392cc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000142b392f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b39304 FUN_142b39304 body=56 status=ok
// SIG undefined FUN_142b39304(void)

void FUN_142b39304(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000142b39331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142b39341 FUN_142b39341 body=113 status=ok
// SIG undefined FUN_142b39341(void)

void FUN_142b39341(void)

{
  FUN_140754d76(DAT_14c9a70e0,DAT_14c9a70e8);
  if (DAT_14c9a70e0 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14c9a70c8,DAT_14c9a70d0);
  if (DAT_14c9a70c8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a70b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140754d9e(&DAT_14c9a67a0);
  return;
}



// FUNCTION 142b393b2 FUN_142b393b2 body=499 status=ok
// SIG undefined FUN_142b393b2(void)

void FUN_142b393b2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
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
  if ((param_2 != (longlong *)0x0) && (*param_1 != 0)) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1470c76a3;
      local_50 = FUN_1462ab034;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14c9a4e08);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1470c76a3;
        local_50 = FUN_1462ab034;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14c9a4e08);
      if (plVar2 != (longlong *)0x0 && plVar1 != plVar2) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3960a FUN_142b3960a body=49 status=ok
// SIG undefined FUN_142b3960a(void)

void FUN_142b3960a(void)

{
  FUN_140358fe5(DAT_14c9a7840,DAT_14c9a7848);
  if (DAT_14c9a7840 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b3963c FUN_142b3963c body=136 status=ok
// SIG undefined FUN_142b3963c(void)

longlong FUN_142b3963c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar1 = (int)param_2[1];
  if (((longlong)iVar1 < 0) || ((int)param_1[1] <= iVar1)) {
    lVar4 = *param_2;
  }
  else {
    lVar2 = (longlong)iVar1 * 0x58;
    lVar4 = *param_2;
    if (*(longlong *)(*param_1 + 0x38 + lVar2) == lVar4) {
      return *param_1 + lVar2;
    }
  }
  if (lVar4 != 0) {
    if ((longlong)(int)param_1[1] != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*param_1 + 0x38 + lVar2) == lVar4) {
          uVar3 = (int)(lVar2 >> 3) * -0x45d1745d;
          *(uint *)(param_2 + 1) = uVar3;
          if ((int)uVar3 < 0) {
            return 0;
          }
          if ((int)param_1[1] <= (int)uVar3) {
            return 0;
          }
          return (ulonglong)(uVar3 & 0x7fffffff) * 0x58 + *param_1;
        }
        lVar2 = lVar2 + 0x58;
      } while ((longlong)(int)param_1[1] * 0x58 - lVar2 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 142b396d5 FUN_142b396d5 body=49 status=ok
// SIG undefined FUN_142b396d5(void)

void FUN_142b396d5(void)

{
  FUN_141741bbf(DAT_14c9a71d0,DAT_14c9a71d8);
  if (DAT_14c9a71d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b39706 FUN_142b39706 body=899 status=ok
// SIG undefined FUN_142b39706(void)

void FUN_142b39706(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
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
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 != (longlong *)0x0) {
    do {
      uVar3 = FUN_1459204c0();
      plVar4 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar3);
      if (plVar4 == (longlong *)0x0) {
LAB_142b39775:
        if (DAT_14c9a4e08 == 0) {
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_1427b09ee;
          local_78 = &LAB_1470c76a3;
          local_80 = FUN_1462ab034;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10004001;
          local_a0 = 8;
          local_a8 = 0x28;
          local_70 = &local_50;
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
        }
        plVar4 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14c9a4e08);
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14c9a4e08 == 0) {
            local_50 = FUN_1449e2820;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_1427b09ee;
            local_78 = &LAB_1470c76a3;
            local_80 = FUN_1462ab034;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10004001;
            local_a0 = 8;
            local_a8 = 0x28;
            local_70 = &local_50;
            FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
          }
          plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14c9a4e08);
          if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
            lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
            lVar7 = lVar6 + 0x10;
            lVar8 = (longlong)(int)param_1[1];
            iVar2 = *(int *)(lVar6 + 0x918);
            if ((lVar8 < 0) || (iVar2 <= (int)param_1[1])) {
              lVar9 = *param_1;
            }
            else {
              lVar11 = *(longlong *)(lVar6 + 0x910);
              if (*(longlong *)(lVar6 + 0x910) == 0) {
                lVar11 = lVar7;
              }
              lVar9 = *param_1;
              if (*(longlong *)(lVar11 + 0x28 + lVar8 * 0x48) == lVar9) {
                lVar11 = lVar11 + lVar8 * 0x48;
LAB_142b3980b:
                if (lVar11 != 0) {
                  uVar1 = *(undefined1 *)(lVar11 + 0x20);
                  iVar2 = *(int *)(param_2 + 0x30);
                  *(uint *)(param_2 + 0x30) = iVar2 + 1U;
                  local_58 = param_1;
                  if (*(uint *)(param_2 + 0x34) < iVar2 + 1U) {
                    FUN_142b3d46e(param_2,iVar2);
                  }
                  lVar7 = *(longlong *)(param_2 + 0x28);
                  if (*(longlong *)(param_2 + 0x28) == 0) {
                    lVar7 = param_2;
                  }
                  *(undefined1 *)(lVar7 + iVar2) = uVar1;
                  param_1 = local_58;
                }
                goto LAB_142b398a4;
              }
            }
            if (lVar9 != 0) {
              lVar8 = *(longlong *)(lVar6 + 0x910);
              if (*(longlong *)(lVar6 + 0x910) == 0) {
                lVar8 = lVar7;
              }
              if (iVar2 != 0) {
                lVar11 = 0;
                do {
                  if (*(longlong *)(lVar8 + 0x28 + lVar11) == lVar9) {
                    uVar10 = (int)(lVar11 >> 3) * 0x38e38e39;
                    *(uint *)(param_1 + 1) = uVar10;
                    if (((int)uVar10 < 0) || (*(int *)(lVar6 + 0x918) <= (int)uVar10))
                    goto LAB_142b398a4;
                    if (*(longlong *)(lVar6 + 0x910) != 0) {
                      lVar7 = *(longlong *)(lVar6 + 0x910);
                    }
                    lVar11 = lVar7 + (ulonglong)(uVar10 & 0x7fffffff) * 0x48;
                    goto LAB_142b3980b;
                  }
                  lVar11 = lVar11 + 0x48;
                } while ((longlong)iVar2 * 0x48 != lVar11);
              }
              *(undefined4 *)(param_1 + 1) = 0xffffffff;
            }
          }
        }
      }
      else {
        uVar3 = FUN_1459204c0();
        plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
        if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) goto LAB_142b39775;
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar7 = FUN_142b3963c(uVar3,param_1);
        if (lVar7 != 0) {
          FUN_142b45ec2(lVar7,param_2,param_3);
        }
      }
LAB_142b398a4:
      param_3 = (longlong *)param_3[4];
    } while (param_3 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b39a90 FUN_142b39a90 body=458 status=ok
// SIG undefined FUN_142b39a90(void)

longlong FUN_142b39a90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  if (DAT_14cb10130 == 0) {
    local_40 = &local_20;
    local_20 = FUN_140754f84;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147da9a76;
    local_50 = FUN_1409f3105;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  lVar2 = DAT_14cb10130;
  if (DAT_14c951858 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         (lVar3 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar3 = 0;
      }
    } while ((lVar3 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b39c5c FUN_142b39c5c body=90 status=ok
// SIG undefined FUN_142b39c5c(void)

ulonglong FUN_142b39c5c(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong unaff_RDI;
  
  if ((((char)param_1[0x1f0] != '\0') ||
      (unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1), (char)param_1[0x220] == '\a')) &&
     (unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1), (char)param_1[0x233] == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0xbe0))();
    if (cVar1 == '\0') {
      if (param_2 != 0) {
        FUN_14020fad6(param_2,L"RootMotion");
      }
      unaff_RDI = 0;
    }
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 142b39cb6 FUN_142b39cb6 body=41 status=ok
// SIG undefined FUN_142b39cb6(void)

void FUN_142b39cb6(void)

{
  DAT_14c9a74b0 = 0;
  if (DAT_14c9a74a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62582();
  return;
}



// FUNCTION 142b39d1e FUN_142b39d1e body=452 status=ok
// SIG undefined FUN_142b39d1e(void)

void FUN_142b39d1e(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  cVar3 = (**(code **)(*param_1 + 0x308))();
  if (cVar3 == '\0') {
    return;
  }
  iVar2 = (int)param_1[0x54];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x51);
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_142b39dd8;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar13 = 0xffffffff;
    iVar4 = iVar2;
    do {
      lVar11 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar6 * 0x20);
      if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x30) != 0)) {
        FUN_14016a17c();
        iVar4 = (int)param_1[0x54];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar5 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x51);
      }
      iVar6 = (int)uVar14;
      lVar11 = (longlong)iVar6;
      uVar7 = puVar5[lVar11] & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar5[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_142b39e9a;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_142b39e9a:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_142b39dd8:
  FUN_14114d3d8(param_1);
  return;
}



// FUNCTION 142b39ee2 FUN_142b39ee2 body=41 status=ok
// SIG undefined FUN_142b39ee2(void)

void FUN_142b39ee2(void)

{
  DAT_14c9a76b8 = 0;
  if (DAT_14c9a76b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d62620();
  return;
}



// FUNCTION 142b39f49 FUN_142b39f49 body=91 status=ok
// SIG undefined FUN_142b39f49(void)

void FUN_142b39f49(void)

{
  if (DAT_14c9a7788 != 0) {
    if (DAT_14c9a7780 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9a7780)(DAT_14c9a7780,0);
    FUN_1446efa72(&DAT_14c9a7780,0,0,0x10);
    DAT_14c9a7788 = 0;
  }
  if (DAT_14c9a7780 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142b3a0fa FUN_142b3a0fa body=73 status=ok
// SIG undefined FUN_142b3a0fa(void)

undefined8 FUN_142b3a0fa(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3a144 FUN_142b3a144 body=690 status=ok
// SIG undefined FUN_142b3a144(void)

/* WARNING: Removing unreachable block (ram,0x000142b3a3a9) */

undefined8 FUN_142b3a144(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_f8 [32];
  char local_d8 [8];
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  char local_b8;
  undefined4 local_b0 [2];
  char local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_80 [2];
  undefined1 local_78 [48];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8[0] = *param_3;
  if (local_d8[0] == '\x01') {
    local_d8[0] = '\x02';
    if (*(longlong *)(param_3 + 8) == 0) {
      local_d0._0_4_ = 0;
      iVar3 = 0;
      uVar2 = (uint)local_d0;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_3 + 8) + 0xc);
      local_d0 = (ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar3 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_d0;
        if (bVar9) {
          iVar3 = iVar6;
        }
      }
    }
    local_d0._0_4_ = uVar2;
    local_d0 = CONCAT44(iVar3,(uint)local_d0);
  }
  else if (local_d8[0] == '\x02') {
    local_d0 = *(ulonglong *)(param_3 + 8);
  }
  else if (local_d8[0] == '\x03') {
    local_d0 = *(undefined8 *)(param_3 + 8);
    local_c8 = *(longlong **)(param_3 + 0x10);
    if (local_c8 == (longlong *)0x0) {
      local_c0 = *(undefined8 *)(param_3 + 0x18);
      local_b8 = param_3[0x20];
    }
    else {
      LOCK();
      *(int *)((longlong)local_c8 + 0xc) = *(int *)((longlong)local_c8 + 0xc) + 1;
      UNLOCK();
      local_c0 = *(undefined8 *)(param_3 + 0x18);
      local_b8 = param_3[0x20];
    }
  }
  local_b0[0] = 0;
  if (*(int *)(param_3 + 0x28) != 0) {
    uVar4 = FUN_1448174c4(local_b0);
    FUN_1400e08b0(uVar4,DAT_14c9a3da0 + (longlong)*(int *)(param_3 + 0x28) * 0x10 + -0x10);
  }
  local_a8 = '\0';
  local_80[0] = 0;
  uVar4 = FUN_144873cc0(param_2);
  FUN_1400606f6(local_78,uVar4,local_d8);
  puVar5 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  puVar7 = &DAT_14c9a40e0;
  if (0 < local_40) {
    puVar7 = puVar5;
  }
  FUN_1400603ec(param_1,uVar4,puVar7);
  puVar5 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  FUN_1446fdf58(puVar5,local_40);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1448173f8(local_80);
  if (local_a8 != '\0') {
    if (local_a8 == '\x01') {
      local_a0 = 0;
    }
    else if ((local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
    local_a8 = '\0';
  }
  FUN_1448173f8(local_b0);
  if ((local_d8[0] == '\x03') && (local_c8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3a3f8 FUN_142b3a3f8 body=77 status=ok
// SIG undefined FUN_142b3a3f8(void)

void FUN_142b3a3f8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_144873cc0();
  if (lVar3 != 0) {
    uVar2 = FUN_140103674(lVar3);
    iVar1 = *(int *)(param_2 + 0x30);
    *(uint *)(param_2 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
      FUN_142b3d46e(param_2,iVar1);
    }
    lVar3 = *(longlong *)(param_2 + 0x28);
    if (*(longlong *)(param_2 + 0x28) == 0) {
      lVar3 = param_2;
    }
    *(undefined1 *)(lVar3 + iVar1) = uVar2;
  }
  return;
}



// FUNCTION 142b3a446 FUN_142b3a446 body=33 status=ok
// SIG undefined FUN_142b3a446(void)

undefined8 FUN_142b3a446(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144873cc0();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470dbef6(lVar1);
  return uVar2;
}



// FUNCTION 142b3a468 FUN_142b3a468 body=605 status=ok
// SIG undefined FUN_142b3a468(void)

/* WARNING: Removing unreachable block (ram,0x000142b3a682) */

void FUN_142b3a468(undefined8 param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  char local_98 [8];
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  char local_78;
  undefined4 local_70 [2];
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_144873cc0();
  if (lVar4 != 0) {
    local_98[0] = *param_2;
    if (local_98[0] == '\x01') {
      local_98[0] = '\x02';
      if (*(longlong *)(param_2 + 8) == 0) {
        local_90._0_4_ = 0;
        iVar3 = 0;
        uVar2 = (uint)local_90;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
        local_90 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar3 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar3 = *(int *)(lVar7 + 0x10);
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(lVar7 + 0x10) = iVar6;
            iVar3 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_90;
          if (bVar8) {
            iVar3 = iVar6;
          }
        }
      }
      local_90._0_4_ = uVar2;
      local_90 = CONCAT44(iVar3,(uint)local_90);
    }
    else if (local_98[0] == '\x02') {
      local_90 = *(ulonglong *)(param_2 + 8);
    }
    else if (local_98[0] == '\x03') {
      local_90 = *(undefined8 *)(param_2 + 8);
      local_88 = *(longlong **)(param_2 + 0x10);
      if (local_88 == (longlong *)0x0) {
        local_80 = *(undefined8 *)(param_2 + 0x18);
        local_78 = param_2[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_88 + 0xc) = *(int *)((longlong)local_88 + 0xc) + 1;
        UNLOCK();
        local_80 = *(undefined8 *)(param_2 + 0x18);
        local_78 = param_2[0x20];
      }
    }
    local_70[0] = 0;
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar5 = FUN_1448174c4(local_70);
      FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
    }
    local_68 = '\0';
    local_40[0] = 0;
    FUN_140e4698e(lVar4,local_98,param_3);
    FUN_1448173f8(local_40);
    if (local_68 != '\0') {
      if (local_68 == '\x01') {
        local_60 = 0;
      }
      else if ((local_68 == '\x03') && (local_58 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      local_68 = '\0';
    }
    FUN_1448173f8(local_70);
    if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3a6c6 FUN_142b3a6c6 body=603 status=ok
// SIG undefined FUN_142b3a6c6(void)

/* WARNING: Removing unreachable block (ram,0x000142b3a8de) */

void FUN_142b3a6c6(undefined8 param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  char local_88 [8];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  char local_68;
  undefined4 local_60 [2];
  char local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_144873cc0();
  if (lVar4 != 0) {
    local_88[0] = *param_2;
    if (local_88[0] == '\x01') {
      local_88[0] = '\x02';
      if (*(longlong *)(param_2 + 8) == 0) {
        local_80._0_4_ = 0;
        iVar3 = 0;
        uVar2 = (uint)local_80;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
        local_80 = (ulonglong)uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar3 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar6 = DAT_14c964868 + 1;
          bVar8 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar8) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar6);
          }
          LOCK();
          iVar3 = *(int *)(lVar7 + 0x10);
          bVar8 = iVar3 == 0;
          if (bVar8) {
            *(int *)(lVar7 + 0x10) = iVar6;
            iVar3 = 0;
          }
          UNLOCK();
          uVar2 = (uint)local_80;
          if (bVar8) {
            iVar3 = iVar6;
          }
        }
      }
      local_80._0_4_ = uVar2;
      local_80 = CONCAT44(iVar3,(uint)local_80);
    }
    else if (local_88[0] == '\x02') {
      local_80 = *(ulonglong *)(param_2 + 8);
    }
    else if (local_88[0] == '\x03') {
      local_80 = *(undefined8 *)(param_2 + 8);
      local_78 = *(longlong **)(param_2 + 0x10);
      if (local_78 == (longlong *)0x0) {
        local_70 = *(undefined8 *)(param_2 + 0x18);
        local_68 = param_2[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_78 + 0xc) = *(int *)((longlong)local_78 + 0xc) + 1;
        UNLOCK();
        local_70 = *(undefined8 *)(param_2 + 0x18);
        local_68 = param_2[0x20];
      }
    }
    local_60[0] = 0;
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar5 = FUN_1448174c4(local_60);
      FUN_1400e08b0(uVar5,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
    }
    local_58 = '\0';
    local_30[0] = 0;
    FUN_1470da1c3(lVar4,local_88);
    FUN_1448173f8(local_30);
    if (local_58 != '\0') {
      if (local_58 == '\x01') {
        local_50 = 0;
      }
      else if ((local_58 == '\x03') && (local_48 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      local_58 = '\0';
    }
    FUN_1448173f8(local_60);
    if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3aa34 FUN_142b3aa34 body=28 status=ok
// SIG undefined FUN_142b3aa34(void)

undefined8 FUN_142b3aa34(undefined8 param_1,undefined8 param_2)

{
  FUN_1470dc2d0(param_2,param_1);
  return param_1;
}



// FUNCTION 142b3aa50 FUN_142b3aa50 body=28 status=ok
// SIG undefined FUN_142b3aa50(void)

undefined8 FUN_142b3aa50(undefined8 param_1,undefined8 *param_2)

{
  FUN_140168de2(*param_2,param_1);
  return param_1;
}



// FUNCTION 142b3aa74 FUN_142b3aa74 body=92 status=ok
// SIG undefined FUN_142b3aa74(void)

bool FUN_142b3aa74(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == (char *)0x0 || param_1 == (char *)0x0) {
    bVar2 = param_1 == (char *)0x0 && param_2 == (char *)0x0;
  }
  else {
    if ((*param_1 == *param_2) && (cVar1 = FUN_14470eb98(param_1 + 8,param_2 + 8), cVar1 != '\0')) {
      return *(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28) &&
             *(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20);
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 142b3aad0 FUN_142b3aad0 body=81 status=ok
// SIG undefined FUN_142b3aad0(void)

bool FUN_142b3aad0(char *param_1)

{
  char cVar1;
  
  if (((param_1 != (char *)0x0) && (*param_1 == DAT_14c9a6538)) &&
     (cVar1 = FUN_14470eb98(param_1 + 8,&DAT_14c9a6540), cVar1 != '\0')) {
    return *(int *)(param_1 + 0x28) == DAT_14c9a6560 &&
           *(longlong *)(param_1 + 0x20) == DAT_14c9a6558;
  }
  return false;
}



// FUNCTION 142b3ab22 FUN_142b3ab22 body=1 status=ok
// SIG undefined FUN_142b3ab22(void)

void FUN_142b3ab22(void)

{
  return;
}



// FUNCTION 142b3ab24 FUN_142b3ab24 body=29 status=ok
// SIG undefined FUN_142b3ab24(void)

void FUN_142b3ab24(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 0) {
    return;
  }
  plVar1 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000142b3ab3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return;
}



// FUNCTION 142b3ac06 FUN_142b3ac06 body=98 status=ok
// SIG undefined FUN_142b3ac06(void)

void FUN_142b3ac06(undefined1 *param_1)

{
  memset(param_1,0,0xa8);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xf00000d0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xf00000d0;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 142b3ac76 FUN_142b3ac76 body=28 status=ok
// SIG undefined FUN_142b3ac76(void)

undefined8 FUN_142b3ac76(undefined8 param_1,undefined8 param_2)

{
  FUN_1470db82c(param_2,param_1);
  return param_1;
}



// FUNCTION 142b3ac92 FUN_142b3ac92 body=1463 status=ok
// SIG undefined FUN_142b3ac92(void)

longlong * FUN_142b3ac92(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  float *pfVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auStack_1c8 [44];
  int local_19c;
  float local_198;
  undefined4 uStack_194;
  ushort local_180;
  byte local_178;
  undefined8 ***local_170;
  undefined1 local_168 [16];
  ushort local_158;
  byte local_150;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_a8;
  undefined4 local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  pcVar1 = (char *)*param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*pcVar1 == '\x01') {
    FUN_1448729ea(pcVar1 + 8,&local_170,param_3);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar2 != (code *)0x0) {
      plVar8 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        plVar8 = (longlong *)*param_1;
      }
      (*pcVar2)(plVar8);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(ushort *)(param_1 + 3) = local_158;
    if (local_158 < 0x19) {
      uVar6 = (ulonglong)((uint)local_150 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar6) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar6) == (code *)0x0) {
          memcpy(param_1,&local_170,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar6))(param_1,&local_170);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar6))(param_1,&local_170);
      }
    }
    else {
      *param_1 = (longlong)local_170;
      local_170 = (undefined8 ****)0x0;
      local_158 = 0;
    }
    *(byte *)(param_1 + 4) = local_150;
    local_150 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar9 = &local_170;
      if (0x18 < local_158) {
        ppppuVar9 = (undefined8 ****)local_170;
      }
      (*DAT_14c9a85d0)(ppppuVar9);
    }
    if (0x18 < local_158) {
      FUN_1400020a8(local_170);
    }
  }
  if (0 < *(int *)(pcVar1 + 0xb0)) {
    local_170 = (undefined8 ***)((ulonglong)local_170 & 0xffffff0000000000);
    local_e8 = 0;
    local_e0 = 0x800000000;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c4 = 0x20;
    uStack_c0 = 0xffffffff;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_140df3458(local_168,*(int *)(pcVar1 + 0xb0) + 1);
    if (*pcVar1 == '\x01') {
      pfVar7 = &local_198;
      FUN_1448729ea(pcVar1 + 0x58,pfVar7,param_3);
      if (local_178 == 3) {
        uVar5 = 3;
        fVar11 = local_198;
      }
      else {
        pfVar10 = &local_98;
        FUN_1400b56fe(pfVar10,&local_198,3);
        fVar11 = 0.0;
        if (local_78 != 0) {
          fVar11 = local_98;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_80) {
            pfVar10 = (float *)CONCAT44(uStack_94,local_98);
          }
          (*pcVar2)(pfVar10);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(CONCAT44(uStack_94,local_98));
        }
        uVar5 = (uint)local_178;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_180) {
          pfVar7 = (float *)CONCAT44(uStack_194,local_198);
        }
        (*pcVar2)(pfVar7);
      }
      if (0x18 < local_180) {
        FUN_1400020a8(CONCAT44(uStack_194,local_198));
      }
      if (0.0 < fVar11) {
        local_98 = -NAN;
        FUN_140df34dc(&local_170,fVar11);
      }
    }
    local_19c = 0;
    if (0 < *(int *)(pcVar1 + 0xb0)) {
      do {
        FUN_1448729ea(*(longlong *)(pcVar1 + 0xa8) + (longlong)local_19c * 0xa0 + 0x50,&local_198,
                      param_3);
        if (local_178 == 3) {
          fVar11 = local_198;
          bVar3 = 3;
        }
        else {
          FUN_1400b56fe(&local_98,&local_198,3);
          fVar11 = 0.0;
          if (local_78 != 0) {
            fVar11 = local_98;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar2 != (code *)0x0) {
            pfVar7 = &local_98;
            if (0x18 < local_80) {
              pfVar7 = (float *)CONCAT44(uStack_94,local_98);
            }
            (*pcVar2)(pfVar7);
          }
          bVar3 = local_178;
          if (0x18 < local_80) {
            FUN_1400020a8(CONCAT44(uStack_94,local_98));
            bVar3 = local_178;
          }
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pfVar7 = &local_198;
          if (0x18 < local_180) {
            pfVar7 = (float *)CONCAT44(uStack_194,local_198);
          }
          (*pcVar2)(pfVar7);
        }
        if (0x18 < local_180) {
          FUN_1400020a8(CONCAT44(uStack_194,local_198));
        }
        if (0.0 < fVar11) {
          FUN_140df34dc(&local_170,fVar11,&local_19c);
        }
        local_19c = local_19c + 1;
      } while (local_19c < *(int *)(pcVar1 + 0xb0));
    }
    local_198 = -NAN;
    cVar4 = FUN_140df3cba(&local_170,&local_198,0xbf800000);
    if (((cVar4 != '\0') && (-1 < (longlong)(int)local_198)) &&
       ((int)local_198 < *(int *)(pcVar1 + 0xb0))) {
      pfVar7 = &local_98;
      FUN_1448729ea((longlong)(int)local_198 * 0xa0 + *(longlong *)(pcVar1 + 0xa8),pfVar7,param_3);
      FUN_140df3eb8(param_1,pfVar7);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar7 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar2)(pfVar7);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140df3294(local_168);
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b3b24a FUN_142b3b24a body=98 status=ok
// SIG undefined FUN_142b3b24a(void)

void FUN_142b3b24a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\x01') {
    pcVar4 = pcVar4 + 8;
  }
  else {
    uVar2 = 3;
    if (*(int *)(pcVar4 + 0xb0) < 1) goto LAB_142b3b267;
    pcVar4 = *(char **)(pcVar4 + 0xa8);
  }
  uVar2 = FUN_1470dc3be(pcVar4);
LAB_142b3b267:
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar3 = param_2;
  }
  *(undefined1 *)(lVar3 + iVar1) = uVar2;
  return;
}



// FUNCTION 142b3b40c FUN_142b3b40c body=208 status=ok
// SIG undefined FUN_142b3b40c(void)

undefined8 * FUN_142b3b40c(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\b') {
    FUN_1400021e4(param_2,&local_30);
    _Src = local_30;
    *(undefined2 *)(param_1 + 3) = 0x10;
    *param_1 = 0;
    *(int *)(param_1 + 1) = local_28;
    if ((longlong)local_28 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,local_28,0);
      memcpy((void *)*param_1,_Src,(longlong)local_28 * 2);
    }
    *(undefined1 *)(param_1 + 4) = 8;
    if (local_30 != (void *)0x0) {
      FUN_1400020a8(local_30);
    }
  }
  else if (param_3 == '\x12') {
    *(undefined2 *)(param_1 + 3) = 8;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 4) = 0x12;
  }
  else {
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3b4fe FUN_142b3b4fe body=1490 status=ok
// SIG undefined FUN_142b3b4fe(void)

longlong * FUN_142b3b4fe(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  code ****ppppcVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *_Src;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code ***local_70;
  code *local_68;
  code *local_60;
  code ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if ((*param_2 == 0) || (plVar4 = (longlong *)FUN_1447262c2(param_3), plVar4 == (longlong *)0x0))
  goto LAB_142b3b531;
  if (DAT_14c9a4e08 == 0) {
    local_70 = (code ***)local_58;
    local_58[0] = (code ***)FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_1427b09ee;
    local_78 = &LAB_1470c76a3;
    local_80 = FUN_1462ab034;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10004001;
    local_a0 = 8;
    local_a8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14c9a4e08);
  if (plVar4 == (longlong *)0x0) goto LAB_142b3b531;
  if (DAT_14c9a4e08 == 0) {
    local_70 = (code ***)local_58;
    local_58[0] = (code ***)FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_1427b09ee;
    local_78 = &LAB_1470c76a3;
    local_80 = FUN_1462ab034;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10004001;
    local_a0 = 8;
    local_a8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14c9a4e08);
  if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) goto LAB_142b3b531;
  lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (*(char *)(lVar6 + 0x924) == '\x01') {
    lVar10 = lVar6 + 0x10;
    lVar12 = (longlong)(int)param_2[1];
    iVar2 = *(int *)(lVar6 + 0x918);
    if ((lVar12 < 0) || (iVar2 <= (int)param_2[1])) {
      lVar13 = *param_2;
LAB_142b3b729:
      if (lVar13 != 0) {
        lVar12 = *(longlong *)(lVar6 + 0x910);
        if (*(longlong *)(lVar6 + 0x910) == 0) {
          lVar12 = lVar10;
        }
        if (iVar2 != 0) {
          lVar15 = 0;
          do {
            if (*(longlong *)(lVar12 + 0x28 + lVar15) == lVar13) {
              uVar11 = (int)(lVar15 >> 3) * 0x38e38e39;
              *(uint *)(param_2 + 1) = uVar11;
              if (((int)uVar11 < 0) || (*(int *)(lVar6 + 0x918) <= (int)uVar11)) goto LAB_142b3b76a;
              if (*(longlong *)(lVar6 + 0x910) != 0) {
                lVar10 = *(longlong *)(lVar6 + 0x910);
              }
              puVar14 = (undefined8 *)(lVar10 + (ulonglong)(uVar11 & 0x7fffffff) * 0x48);
              goto LAB_142b3b624;
            }
            lVar15 = lVar15 + 0x48;
          } while ((longlong)iVar2 * 0x48 != lVar15);
        }
        *(undefined4 *)(param_2 + 1) = 0xffffffff;
      }
LAB_142b3b76a:
      local_40 = 0;
      local_38 = 0;
    }
    else {
      lVar15 = *(longlong *)(lVar6 + 0x910);
      if (*(longlong *)(lVar6 + 0x910) == 0) {
        lVar15 = lVar10;
      }
      lVar13 = *param_2;
      if (*(longlong *)(lVar15 + 0x28 + lVar12 * 0x48) != lVar13) goto LAB_142b3b729;
      puVar14 = (undefined8 *)(lVar15 + lVar12 * 0x48);
LAB_142b3b624:
      if (puVar14 == (undefined8 *)0x0) goto LAB_142b3b76a;
      bVar1 = *(byte *)(puVar14 + 4);
      local_40 = *(ushort *)(puVar14 + 3);
      if (local_40 < 0x19) {
        ppppcVar9 = local_58;
        _Src = puVar14;
      }
      else {
        ppppcVar9 = (code ****)FUN_14001cc68(local_40,0);
        _Src = (undefined8 *)*puVar14;
        local_58[0] = (code ***)ppppcVar9;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(ppppcVar9,_Src,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      local_38 = *(byte *)(puVar14 + 4);
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar3 != (code *)0x0) {
      plVar4 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        plVar4 = (longlong *)*param_1;
      }
      (*pcVar3)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(ushort *)(param_1 + 3) = local_40;
    if (local_40 < 0x19) {
      uVar8 = (ulonglong)((uint)local_38 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
          memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(param_1,local_58);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(param_1,local_58);
      }
    }
    else {
      *param_1 = (longlong)local_58[0];
      local_58[0] = (code ***)0x0;
      local_40 = 0;
    }
    *(byte *)(param_1 + 4) = local_38;
    local_38 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppcVar9 = (code ****)local_58[0];
      if (local_40 < 0x19) {
        ppppcVar9 = local_58;
      }
LAB_142b3b911:
      local_38 = 0;
      (*DAT_14c9a85d0)(ppppcVar9);
    }
  }
  else {
    uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar6 = FUN_142b3963c(uVar7,param_2);
    if (lVar6 == 0) goto LAB_142b3b531;
    FUN_1447c3578(lVar6,local_58,param_3);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar3 != (code *)0x0) {
      plVar4 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        plVar4 = (longlong *)*param_1;
      }
      (*pcVar3)(plVar4);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(ushort *)(param_1 + 3) = local_40;
    if (local_40 < 0x19) {
      uVar8 = (ulonglong)((uint)local_38 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
          memcpy(param_1,local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(param_1,local_58);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(param_1,local_58);
      }
    }
    else {
      *param_1 = (longlong)local_58[0];
      local_58[0] = (code ***)0x0;
      local_40 = 0;
    }
    *(byte *)(param_1 + 4) = local_38;
    local_38 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppcVar9 = local_58;
      if (0x18 < local_40) {
        ppppcVar9 = (code ****)local_58[0];
      }
      goto LAB_142b3b911;
    }
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
LAB_142b3b531:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b3bad6 FUN_142b3bad6 body=33 status=ok
// SIG undefined FUN_142b3bad6(void)

bool FUN_142b3bad6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_14049cbd6(param_2);
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 142b3baf7 FUN_142b3baf7 body=904 status=ok
// SIG undefined FUN_142b3baf7(void)

undefined8 *
FUN_142b3baf7(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*param_2 == 0) || ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0)) ||
      (cVar3 = (**(code **)(*(longlong *)*param_4 + 0x30))(), cVar3 == '\0')) ||
     (lVar5 = FUN_141740d12(param_3), lVar5 == 0)) {
    *param_1 = 0;
    goto LAB_142b3bca0;
  }
  local_60 = (undefined4)param_2[1];
  local_68 = *param_2;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_141741876(&local_58,param_4);
  if (((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) ||
     (lVar6 = (**(code **)(*(longlong *)*param_4 + 8))(), lVar6 == 0)) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,4,0x10);
    local_40 = 4;
    *local_48 = &PTR_LAB_14a1c7f40;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_48[2] = lVar9;
    *local_48 = &PTR_FUN_14a1c7fb0;
    local_48[3] = local_68;
    *(undefined4 *)(local_48 + 4) = local_60;
    puVar8 = local_48 + 5;
    local_48[5] = 0;
    *(undefined4 *)(local_48 + 6) = 0;
  }
  else {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,4,0x10);
    puVar2 = local_48;
    local_40 = 4;
    *local_48 = &PTR_LAB_14a1c7f40;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_48[2] = lVar7;
    *local_48 = &PTR_FUN_14a1c7ed0;
    local_48[3] = 0;
    uVar1 = *(uint *)(lVar6 + 0xc);
    *(uint *)(local_48 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar6 + 0x10) = iVar10;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar10;
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar4;
    puVar2[4] = local_68;
    *(undefined4 *)(puVar2 + 5) = local_60;
    puVar8 = puVar2 + 6;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
  }
  FUN_141741876(puVar8,&local_58);
  FUN_140d4dc72(lVar5 + 0x938,param_1,&local_48);
  if (local_40 == 0) {
LAB_142b3bdac:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_142b3bdac;
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_142b3bca0;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142b3bca0:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b3be80 FUN_142b3be80 body=55 status=ok
// SIG undefined FUN_142b3be80(void)

void FUN_142b3be80(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_141740d12(param_2);
  if ((lVar1 != 0) && (*param_3 != 0)) {
    FUN_14480f766(lVar1 + 0x938);
    return;
  }
  return;
}



// FUNCTION 142b3bebf FUN_142b3bebf body=59 status=ok
// SIG undefined FUN_142b3bebf(void)

void FUN_142b3bebf(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_141740d12(param_2);
    if (lVar1 != 0) {
      FUN_140af060e(lVar1,param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 142b3befa FUN_142b3befa body=50 status=ok
// SIG undefined FUN_142b3befa(void)

void FUN_142b3befa(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_141740d12(param_2);
    if (lVar1 != 0) {
      FUN_1402b8b80(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142b3bf2c FUN_142b3bf2c body=57 status=ok
// SIG undefined FUN_142b3bf2c(void)

void FUN_142b3bf2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4dd0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4dd0 = FUN_140002ddd(FUN_14173b99c,uVar1,L"GbxBlackboardEntryRef");
  }
  return;
}



// FUNCTION 142b3bf96 FUN_142b3bf96 body=111 status=ok
// SIG undefined FUN_142b3bf96(void)

undefined8 * FUN_142b3bf96(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a1c7ed0;
  plVar1 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_142b3bfe7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_142b3bfe7:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3c184 FUN_142b3c184 body=137 status=ok
// SIG undefined FUN_142b3c184(void)

void FUN_142b3c184(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7ed0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_141741876(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 142b3c20e FUN_142b3c20e body=137 status=ok
// SIG undefined FUN_142b3c20e(void)

void FUN_142b3c20e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7ed0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_141741876(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 142b3c298 FUN_142b3c298 body=171 status=ok
// SIG undefined FUN_142b3c298(void)

void FUN_142b3c298(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c7ed0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_141741876(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3c334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b3c370 FUN_142b3c370 body=309 status=ok
// SIG undefined FUN_142b3c370(void)

undefined8 FUN_142b3c370(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b3c49f;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_142b3c49f;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_142b3c49f:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b3c424;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar7 = 1;
      if ((*param_2 == *(longlong *)(param_1 + 0x20)) &&
         (plVar3 = *(longlong **)(param_1 + 0x30),
         plVar3 != (longlong *)0x0 && *(int *)(param_1 + 0x38) != 0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,param_4);
      }
      goto LAB_142b3c424;
    }
  }
  uVar7 = 0;
LAB_142b3c424:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3c4a6 FUN_142b3c4a6 body=111 status=ok
// SIG undefined FUN_142b3c4a6(void)

undefined8 * FUN_142b3c4a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a1c7fb0;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_142b3c4f7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_142b3c4f7:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3c52a FUN_142b3c52a body=129 status=ok
// SIG undefined FUN_142b3c52a(void)

void FUN_142b3c52a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7fb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_141741876(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 142b3c5ac FUN_142b3c5ac body=129 status=ok
// SIG undefined FUN_142b3c5ac(void)

void FUN_142b3c5ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7f40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c7fb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_141741876(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 142b3c62e FUN_142b3c62e body=163 status=ok
// SIG undefined FUN_142b3c62e(void)

void FUN_142b3c62e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7f40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c7fb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_141741876(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3c6c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b3c6fe FUN_142b3c6fe body=50 status=ok
// SIG undefined FUN_142b3c6fe(void)

undefined8 FUN_142b3c6fe(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*param_2 == *(longlong *)(param_1 + 0x18)) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x30) != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_4);
    }
  }
  return 1;
}



// FUNCTION 142b3c818 FUN_142b3c818 body=28 status=ok
// SIG undefined FUN_142b3c818(void)

undefined8 FUN_142b3c818(undefined8 param_1,undefined8 param_2)

{
  FUN_1462464fe(param_2,param_1);
  return param_1;
}



// FUNCTION 142b3c852 FUN_142b3c852 body=28 status=ok
// SIG undefined FUN_142b3c852(void)

undefined8 FUN_142b3c852(undefined8 param_1,undefined8 *param_2)

{
  FUN_140168c66(*param_2,param_1);
  return param_1;
}



// FUNCTION 142b3c86e FUN_142b3c86e body=264 status=ok
// SIG undefined FUN_142b3c86e(void)

void FUN_142b3c86e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    uVar5 = FUN_140261af2();
    lVar7 = FUN_14477b664(uVar5);
    param_1[1] = lVar7;
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if ((lVar7 != 0) && (*param_1 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
        param_1[2] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,param_1);
        param_1[2] = lVar6;
        if (lVar6 != 0) goto LAB_142b3c8a0;
      }
    }
    uVar3 = 0;
  }
  else {
LAB_142b3c8a0:
    local_2c = 0xffffffff;
    local_28 = param_1[4];
    uVar3 = FUN_1470e0ba0(lVar6);
  }
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_142b3d46e(param_2,iVar1);
  }
  lVar7 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    lVar7 = param_2;
  }
  *(undefined1 *)(lVar7 + iVar1) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b3c98c FUN_142b3c98c body=29 status=ok
// SIG undefined FUN_142b3c98c(void)

undefined8 FUN_142b3c98c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3cb28 FUN_142b3cb28 body=116 status=ok
// SIG undefined FUN_142b3cb28(void)

void FUN_142b3cb28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 142b3cb9c FUN_142b3cb9c body=116 status=ok
// SIG undefined FUN_142b3cb9c(void)

void FUN_142b3cb9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 142b3cc10 FUN_142b3cc10 body=149 status=ok
// SIG undefined FUN_142b3cc10(void)

void FUN_142b3cc10(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c8190;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3cc96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b3cca6 FUN_142b3cca6 body=176 status=ok
// SIG undefined FUN_142b3cca6(void)

void FUN_142b3cca6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 0x28),1);
        if (lVar2 != 0) {
          FUN_1470ac064((uint *)(param_1 + 0x20),param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142b3cd56 FUN_142b3cd56 body=418 status=ok
// SIG undefined FUN_142b3cd56(void)

undefined8 FUN_142b3cd56(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b3cef2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142b3cef2;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar7 = local_48;
  }
  else {
LAB_142b3cef2:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b3ce8c;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x20);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 != (longlong *)0x0) &&
             ((((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) {
            lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 0x28),1);
            if (lVar8 != 0) {
              FUN_1470ac064((uint *)(param_1 + 0x20),param_2,param_3);
            }
          }
        }
      }
      goto LAB_142b3ce8c;
    }
  }
  uVar6 = 0;
LAB_142b3ce8c:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3cefa FUN_142b3cefa body=29 status=ok
// SIG undefined FUN_142b3cefa(void)

undefined8 FUN_142b3cefa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3d096 FUN_142b3d096 body=116 status=ok
// SIG undefined FUN_142b3d096(void)

void FUN_142b3d096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 142b3d10a FUN_142b3d10a body=116 status=ok
// SIG undefined FUN_142b3d10a(void)

void FUN_142b3d10a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8200;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 142b3d17e FUN_142b3d17e body=149 status=ok
// SIG undefined FUN_142b3d17e(void)

void FUN_142b3d17e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c8200;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3d204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b3d214 FUN_142b3d214 body=176 status=ok
// SIG undefined FUN_142b3d214(void)

void FUN_142b3d214(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
          ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_1 + 0x28),1);
        if (lVar2 != 0) {
          FUN_1470ac064((uint *)(param_1 + 0x20),param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142b3d2c4 FUN_142b3d2c4 body=418 status=ok
// SIG undefined FUN_142b3d2c4(void)

undefined8 FUN_142b3d2c4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b3d460;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142b3d460;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar7 = local_48;
  }
  else {
LAB_142b3d460:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b3d3fa;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x24) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x20);
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 != (longlong *)0x0) &&
             ((((int)plVar5[2] == *(int *)(param_1 + 0x24) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))) {
            lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),*(longlong *)(param_1 + 0x28),1);
            if (lVar8 != 0) {
              FUN_1470ac064((uint *)(param_1 + 0x20),param_2,param_3);
            }
          }
        }
      }
      goto LAB_142b3d3fa;
    }
  }
  uVar6 = 0;
LAB_142b3d3fa:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3d46e FUN_142b3d46e body=324 status=ok
// SIG undefined FUN_142b3d46e(void)

void FUN_142b3d46e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  uVar6 = 0x24;
  if (0x24 < uVar3) {
    uVar4 = (ulonglong)(int)uVar3;
    if (0x24 < *(uint *)(param_1 + 0x34)) {
      uVar4 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
    }
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_142b3d4f8;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_142b3d4f8:
    uVar6 = 0x7fffffff;
    if ((int)uVar3 <= (int)uVar4) {
      uVar6 = uVar4 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x34) = (int)uVar6;
  FUN_142b3d5b2(param_1,param_2,uVar6,1);
  return;
}



// FUNCTION 142b3d5b2 FUN_142b3d5b2 body=129 status=ok
// SIG undefined FUN_142b3d5b2(void)

void FUN_142b3d5b2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 0x25) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 142b3d654 FUN_142b3d654 body=388 status=ok
// SIG undefined FUN_142b3d654(void)

void FUN_142b3d654(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
LAB_142b3d677:
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x40),(longlong)param_2 << 4);
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = (ulonglong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0x4c)) {
      uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
    }
    uVar4 = uVar2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar2 & (uVar4 + uVar2) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
    uVar4 = uVar4 >> 4;
    uVar3 = (uint)uVar4;
    if ((int)uVar3 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar4 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar3;
      if (uVar3 < 5) goto LAB_142b3d677;
    }
    if (*(longlong *)((longlong)param_1 + 0x40) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar4,0x10);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar4,0x10);
  return;
}



// FUNCTION 142b3d7d8 FUN_142b3d7d8 body=146 status=ok
// SIG undefined FUN_142b3d7d8(void)

void FUN_142b3d7d8(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar2 = *(longlong *)(lVar3 + 0x30);
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    lVar2 = lVar3;
  }
  if ((longlong)*(int *)(lVar3 + 0x38) != 0) {
    lVar3 = (longlong)*(int *)(lVar3 + 0x38) * 0x30;
    do {
      cVar1 = FUN_140308e2a(lVar2,param_2);
      if (cVar1 != '\0') {
        FUN_1470dbf74(param_1[1],param_2);
        FUN_140308d36(*param_1,param_2);
        return;
      }
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142b3d847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1[2] + 0x88))
            (*(longlong **)param_1[2],*(undefined8 *)param_1[3],param_2,param_1[4]);
  return;
}



// FUNCTION 142b3d86a FUN_142b3d86a body=43 status=ok
// SIG undefined FUN_142b3d86a(void)

void FUN_142b3d86a(undefined8 *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x30))(param_2,*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



// FUNCTION 142b3d8be FUN_142b3d8be body=29 status=ok
// SIG undefined FUN_142b3d8be(void)

undefined8 FUN_142b3d8be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3da5a FUN_142b3da5a body=109 status=ok
// SIG undefined FUN_142b3da5a(void)

void FUN_142b3da5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 142b3dac8 FUN_142b3dac8 body=109 status=ok
// SIG undefined FUN_142b3dac8(void)

void FUN_142b3dac8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c85c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c8470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 142b3db36 FUN_142b3db36 body=142 status=ok
// SIG undefined FUN_142b3db36(void)

void FUN_142b3db36(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c85c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c8470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3dbb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b3dbce FUN_142b3dbce body=278 status=ok
// SIG undefined FUN_142b3dbce(void)

undefined8 FUN_142b3dbce(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b3dcde;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_142b3dcde;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_142b3dcde:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b3dc91;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_142b3dce6(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_142b3dc91;
    }
  }
  uVar6 = 0;
LAB_142b3dc91:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3dce6 FUN_142b3dce6 body=124 status=ok
// SIG undefined FUN_142b3dce6(void)

void FUN_142b3dce6(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((((*(longlong **)(param_1 + 2) != (longlong *)0x0) && (param_1[1] != 0)) &&
      (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x28))();
      FUN_140af060e(uVar2,param_1 + 4,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142b3dd62 FUN_142b3dd62 body=57 status=ok
// SIG undefined FUN_142b3dd62(void)

void FUN_142b3dd62(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *(undefined8 *)(param_2 + 0x18);
  return;
}



// FUNCTION 142b3dd9c FUN_142b3dd9c body=219 status=ok
// SIG undefined FUN_142b3dd9c(void)

void FUN_142b3dd9c(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 *local_68;
  int local_5c;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)*param_1;
  uVar2 = *(uint *)(param_2 + 0x20);
  if (((*(uint *)param_1[1] & uVar2) == 0) == ((uVar2 & uVar1) != 0)) {
    plVar3 = (longlong *)param_1[2];
    local_74 = 1;
    FUN_1446dcdd4(local_58,param_2 + 0x18);
    local_70 = local_58;
    local_68 = &local_74;
    FUN_1412e1952(plVar3,&local_5c,&local_70,0);
    lVar4 = *(longlong *)(*plVar3 + 0x28 + (longlong)local_5c * 0x40);
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 1) & 2) == 0)) {
      pcVar5 = "false";
      if ((uVar2 & uVar1) != 0) {
        pcVar5 = "true";
      }
      FUN_140126aca(lVar4,pcVar5);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3de78 FUN_142b3de78 body=144 status=ok
// SIG undefined FUN_142b3de78(void)

void FUN_142b3de78(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x01') {
    FUN_140002184(param_1[1],0x2c);
    pcVar2 = (char *)*param_1;
  }
  *pcVar2 = '\x01';
  FUN_1400021e4(param_2 + 0x18,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1[1],local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3df10 FUN_142b3df10 body=29 status=ok
// SIG undefined FUN_142b3df10(void)

undefined8 FUN_142b3df10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b3e0ac FUN_142b3e0ac body=93 status=ok
// SIG undefined FUN_142b3e0ac(void)

void FUN_142b3e0ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c84e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b3e10a FUN_142b3e10a body=93 status=ok
// SIG undefined FUN_142b3e10a(void)

void FUN_142b3e10a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c84e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 142b3e168 FUN_142b3e168 body=126 status=ok
// SIG undefined FUN_142b3e168(void)

void FUN_142b3e168(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c84e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b3e1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142b3e1e6 FUN_142b3e1e6 body=47 status=ok
// SIG undefined FUN_142b3e1e6(void)

void FUN_142b3e1e6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = FUN_1447210f0(uVar1);
  if (lVar2 != param_2) {
    return;
  }
  FUN_140288ad0(uVar1);
  return;
}



// FUNCTION 142b3e216 FUN_142b3e216 body=288 status=ok
// SIG undefined FUN_142b3e216(void)

undefined8 FUN_142b3e216(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_142b3e330;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_142b3e330;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar8 = local_30;
  }
  else {
LAB_142b3e330:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b3e2c5;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar6 = FUN_1447210f0(uVar3);
      uVar7 = 1;
      if (lVar6 == param_2) {
        FUN_140288ad0(uVar3);
      }
      goto LAB_142b3e2c5;
    }
  }
  uVar7 = 0;
LAB_142b3e2c5:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3e33d FUN_142b3e33d body=4244 status=ok
// SIG undefined FUN_142b3e33d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b3e33d(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_138 [32];
  char **local_118;
  undefined8 *local_110;
  char *local_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **ppuStack_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = "AssetRegistry";
  uStack_100._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a6408 = (ulonglong)uVar2;
  DAT_14c9a6470 = 0;
  uRam000000014c9a6478 = 0;
  uStack_f8 = 0;
  ppuStack_e8 = &PTR_LAB_14a1795c0;
  local_e0 = &LAB_142b3d468;
  local_108 = &DAT_14011fc1e;
  FUN_1460ddee6(&local_108);
  atexit((_func_5014 *)&LAB_142b38ac7);
  DAT_14c9a6500 = 1;
  _DAT_14c9a6510 = &LAB_142b39fa4;
  DAT_14c9a6518 = 10;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9050 = 0x18;
    DAT_14c9a90e8 = &LAB_142b3a088;
    _DAT_14c9a9110 = &DAT_14063b6ac;
    DAT_14c9a90f0 = &LAB_142b3a09a;
    DAT_14c9a90f8 = &LAB_142b3a0b0;
    _DAT_14c9a9100 = &LAB_142b3a0c6;
    _DAT_14c9a9108 = &LAB_1470e17e6;
    _DAT_14c9a9070 = FUN_1462005c4;
    _DAT_14c9a9058 = 0;
    uRam000000014c9a905c = 0x3ecccccd;
    uRam000000014c9a9060 = 0x3f68f5c3;
    uRam000000014c9a9064 = 0x3f800000;
    DAT_14c9a9054 = 0x60;
    _DAT_14c9a9118 = FUN_142b3a0fa;
    _DAT_14c9a90c0 = FUN_142b3a144;
    _DAT_14c9a90d0 = FUN_142b3a3f8;
    _DAT_14c9a9148 = FUN_142b3a446;
    _DAT_14c9a9150 = FUN_142b3a468;
    _DAT_14c9a9158 = FUN_142b3a6c6;
    _DAT_14c9a9120 = &LAB_142b3a922;
    _DAT_14c9a9160 = &LAB_142b3a93a;
  }
  else {
    _DAT_14c9a6508 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a6508;
  }
  local_108 = "attribute";
  uStack_100._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a6520 = (ulonglong)uVar2;
  local_108 = "type";
  uStack_100._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a6528 = (ulonglong)uVar2;
  local_108 = "value";
  uStack_100 = CONCAT35(uStack_100._5_3_,5);
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a6530 = (ulonglong)uVar2;
  DAT_14c9a6538 = 0;
  _DAT_14c9a6540 = 0;
  DAT_14c9a6548 = 0;
  _DAT_14c9a6550 = 0;
  DAT_14c9a6558 = 0;
  DAT_14c9a6560 = 0xf00000d0;
  _DAT_14c9a6568 = 0;
  atexit(FUN_142b38af0);
  _DAT_14c9a6578 = &LAB_142b3a962;
  DAT_14c9a6580 = 0x21;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aaa30 = 0x38;
    DAT_14c9aaac8 = &LAB_1470e1b76;
    _DAT_14c9aaaf0 = FUN_1470e1b94;
    _DAT_14c9aaad0 = FUN_1470e1bcc;
    _DAT_14c9aaad8 = FUN_1470e1c06;
    _DAT_14c9aaae0 = &LAB_1470e1c40;
    _DAT_14c9aaae8 = &LAB_1470e1c46;
    _DAT_14c9aaa50 = FUN_1461fd774;
    _DAT_14c9aaa48 = &LAB_1470e1b70;
    _DAT_14c9aaa38 = 0x3f7ae148;
    uRam000000014c9aaa3c = 0x3f800000;
    uRam000000014c9aaa40 = 0x3e4ccccd;
    uRam000000014c9aaa44 = 0x3f800000;
    DAT_14c9aaa34 = 0x20;
    _DAT_14c9aaaf8 = FUN_142b3aa34;
    _DAT_14c9aaaa0 = FUN_142b3aa50;
    _DAT_14c9aaab0 = &LAB_142b3aa6c;
    _DAT_14c9aab00 = FUN_142b3aa74;
    _DAT_14c9aab40 = FUN_142b3aad0;
  }
  else {
    _DAT_14c9a6570 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a6570;
  }
  _DAT_14c9a77a0 = 0;
  DAT_14c9a77a8 = 0;
  DAT_14c9a77b0 = 0;
  _DAT_14c9a77b8 = 0;
  uRam000000014c9a77c0 = 0;
  _DAT_14c9a77c8 = 0;
  DAT_14c9a77d0 = 0;
  DAT_14c9a77d8 = 0xf00000d0;
  _DAT_14c9a77e0 = 0;
  _DAT_14c9a77e8 = 0x3f800000;
  _DAT_14c9a77f0 = 0x3f800000;
  _DAT_14c9a77f8 = 0;
  uRam000000014c9a7800 = 0;
  _DAT_14c9a7808 = 0;
  uRam000000014c9a7810 = 0;
  _DAT_14c9a7818 = 0;
  uRam000000014c9a7820 = 0;
  _DAT_14c9a7828 = 0xf00000d0;
  _DAT_14c9a7830 = 0;
  _DAT_14c9a7838 = 0x3f800000;
  local_110 = (undefined8 *)local_68;
  local_108 = (char *)((ulonglong)local_108 & 0xffffffff00000000);
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  ppuStack_e8 = (undefined **)0x0;
  local_e0 = (undefined1 *)0x0;
  uStack_d8 = 0;
  local_d0 = 0xf00000d0;
  local_c8 = 0;
  local_c0 = 0x3f800000;
  local_b8 = 0x3f800000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0xf00000d0;
  local_78 = 0;
  local_70 = 0x3f800000;
  local_118 = &local_108;
  FUN_145c4cafa();
  atexit((_func_5014 *)&LAB_142b38b2b);
  InitializeSRWLock((PSRWLOCK)&DAT_14c9a6598);
  local_108 = "constant";
  uStack_100._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a65a0 = (ulonglong)uVar2;
  local_108 = "attribute";
  uStack_100._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a65a8 = (ulonglong)uVar2;
  local_108 = "post_scale";
  uStack_100._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a65b0 = (ulonglong)uVar2;
  DAT_14c9a65b8 = 0;
  _DAT_14c9a65c0 = 0;
  DAT_14c9a65c8 = 0;
  _DAT_14c9a65d0 = 0;
  DAT_14c9a65d8 = 1;
  _DAT_14c9a65e0 = 0;
  _DAT_14c9a65e8 = 0;
  uRam000000014c9a65f0 = 0;
  _DAT_14c9a65f8 = 0;
  uRam000000014c9a6600 = 0;
  _DAT_14c9a6608 = 0;
  uRam000000014c9a6610 = 0;
  _DAT_14c9a6618 = 0xf00000d0;
  _DAT_14c9a6620 = 0;
  _DAT_14c9a6628 = 0x3f800000;
  _DAT_14c9a6630 = 0x3f800000;
  _DAT_14c9a6638 = 0;
  uRam000000014c9a6640 = 0;
  _DAT_14c9a6648 = 0;
  uRam000000014c9a6650 = 0;
  _DAT_14c9a6658 = 0;
  uRam000000014c9a6660 = 0;
  _DAT_14c9a6668 = 0xf00000d0;
  _DAT_14c9a6670 = 0;
  _DAT_14c9a6678 = 0x3f800000;
  DAT_14c9a6680 = 0;
  uRam000000014c9a6688 = 0;
  atexit((_func_5014 *)&LAB_142b38be2);
  _DAT_14c9a6698 = &LAB_142b3ab42;
  DAT_14c9a66a0 = 0x1e;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aa6d0 = 0xb8;
    DAT_14c9aa768 = FUN_142b3ac06;
    _DAT_14c9aa790 = &LAB_141741864;
    _DAT_14c9aa770 = &LAB_1458d0452;
    _DAT_14c9aa778 = FUN_1470e1fb2;
    _DAT_14c9aa780 = FUN_1470e20b8;
    _DAT_14c9aa788 = &LAB_1470e20fe;
    _DAT_14c9aa6f0 = FUN_1461fda60;
    _DAT_14c9aa6e8 = &LAB_1462b120a;
    _DAT_14c9aa6d8 = 0;
    uRam000000014c9aa6dc = 0x3f800000;
    uRam000000014c9aa6e0 = 0x3e800000;
    uRam000000014c9aa6e4 = 0x3f800000;
    DAT_14c9aa6d4 = 0x60;
    _DAT_14c9aa798 = FUN_142b3ac76;
    _DAT_14c9aa740 = FUN_142b3ac92;
    _DAT_14c9aa750 = FUN_142b3b24a;
    _DAT_14c9aa7a0 = &LAB_142b3b2ac;
    _DAT_14c9aa7e0 = &LAB_142b3b2ca;
  }
  else {
    _DAT_14c9a6690 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a6690;
  }
  local_108 = "nexus";
  uStack_100 = CONCAT35(uStack_100._5_3_,5);
  uVar2 = FUN_14001a6c0(&local_108,1);
  _DAT_14c9a66a8 = (ulonglong)uVar2;
  _DAT_14c9a66b8 = &LAB_142b38bf3;
  _DAT_14c9a66c0 = 0x431a0000;
  DAT_14c9a66c4 = 1;
  DAT_14c9a66b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a66b0;
  atexit((_func_5014 *)&LAB_142b38bf8);
  DAT_14c9a66f0 = 0;
  _DAT_14c9a66f8 = 0x400000000;
  atexit((_func_5014 *)&LAB_142b38c2c);
  FUN_1400b22c2(&local_108,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_108,&DAT_14c9a6700);
  if (cVar1 == '\0') {
    _DAT_14c9a6700 = 0;
    uRam000000014c9a6708 = 0;
  }
  if (local_108 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_108 = "bone";
  uStack_100._0_5_ = 4;
  FUN_14001a6c0(&local_108,1);
  _DAT_14c9a6710 = 0;
  uRam000000014c9a6718 = 0;
  _DAT_14c9a6720 = 0;
  DAT_14c9a6728 = 0;
  uRam000000014c9a6730 = 0;
  FUN_1446ddda2(&DAT_14c9a6710,"formula",0);
  atexit((_func_5014 *)&LAB_142b38c3d);
  _DAT_14c9a6738 = 0;
  uRam000000014c9a6740 = 0;
  _DAT_14c9a6748 = 0;
  DAT_14c9a6750 = 0;
  uRam000000014c9a6758 = 0;
  FUN_1446ddda2(&DAT_14c9a6738,"variables",0);
  atexit((_func_5014 *)&LAB_142b38c4e);
  local_108 = "attr";
  uStack_100._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_108,1);
  DAT_14c9a6760 = (ulonglong)uVar2;
  local_108 = "bb";
  uStack_100._0_5_ = 2;
  uVar2 = FUN_14001a6c0(&local_108,1);
  DAT_14c9a6768 = (ulonglong)uVar2;
  local_108 = "true";
  uStack_100._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_108,1);
  DAT_14c9a6770 = (ulonglong)uVar2;
  local_108 = "false";
  uStack_100 = CONCAT35(uStack_100._5_3_,5);
  uVar2 = FUN_14001a6c0(&local_108,1);
  DAT_14c9a6778 = (ulonglong)uVar2;
  _DAT_14c9a6788 = 0;
  LOCK();
  DAT_14c9a6780 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_142b3933c);
  _DAT_14c9a70a0 = 0;
  _DAT_14c9a70a8 = 0;
  _DAT_14c9a6790 = 0;
  uRam000000014c9a6798 = 0;
  _DAT_14c9a70ac = 0x20;
  DAT_14c9a70b4 = 0;
  DAT_14c9a70b8 = 0;
  uRam000000014c9a70c0 = 0;
  DAT_14c9a70c8 = 0;
  _DAT_14c9a70d0 = 0;
  _DAT_14c9a70d8 = 2;
  _DAT_14c9a70dc = 0;
  ram0x00014c9a70e4 = 0;
  _DAT_14c9a70ec = 0;
  atexit(FUN_142b39341);
  FUN_1446f470e(&DAT_14c9a70f0,L"Entry",1);
  FUN_1446f470e(&DAT_14c9a7794,L"GbxBlackboardEntryDefault",1);
  local_108 = (char *)0x6cd643d518be4cea;
  uStack_100 = 0xb4d336a89717bcb0;
  _DAT_14c9a70f8 = 0x18be4cea;
  uRam000000014c9a70fc = 0x6cd643d5;
  uRam000000014c9a7100 = 0x9717bcb0;
  uRam000000014c9a7104 = 0xb4d336a8;
  FUN_141005458(&local_108,2,L"GbxBlackboardEntryDefault",0);
  atexit((_func_5014 *)&LAB_142b395ba);
  FUN_1446f470e(&local_108,L"Name",1);
  FUN_1446dcdd4(&DAT_14c9a7108,&local_108);
  atexit((_func_5014 *)&LAB_142b395c6);
  FUN_1446f470e(&local_108,L"Description",1);
  FUN_1446dcdd4(&DAT_14c9a7130,&local_108);
  atexit((_func_5014 *)&LAB_142b395d7);
  FUN_1446f470e(&local_108,L"bReplicateToClients",1);
  FUN_1446dcdd4(&DAT_14c9a7158,&local_108);
  atexit((_func_5014 *)&LAB_142b395e8);
  FUN_1446f470e(&local_108,L"EnabledExtensions",1);
  FUN_1446dcdd4(&DAT_14c9a7180,&local_108);
  atexit((_func_5014 *)&LAB_142b395f9);
  DAT_14c9a7840 = 0;
  _DAT_14c9a7848 = 0;
  _DAT_14c9a7850 = 0;
  atexit(FUN_142b3960a);
  FUN_1446f470e(&local_108,L"Entries",1);
  FUN_1446dcdd4(&DAT_14c9a71a8,&local_108);
  atexit((_func_5014 *)&LAB_142b396c4);
  uStack_f8 = 0;
  local_108 = (char *)0x0;
  uStack_100 = 0;
  local_110 = &local_f0;
  local_118 = &local_108;
  FUN_145c8a1b2();
  FUN_140358fe5(local_108,uStack_100 & 0xffffffff);
  if (local_108 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_142b396d5);
  _DAT_14c9a71e0 = 0;
  _DAT_14c9a71e8 = 0xffffffff;
  _DAT_14c9a71f8 = &LAB_142b3b2de;
  DAT_14c9a7200 = 0x14;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9b90 = 0xc;
    DAT_14c9a9c28 = &LAB_144b08946;
    _DAT_14c9a9c50 = &DAT_144b08956;
    _DAT_14c9a9c30 = &LAB_142b3bf66;
    _DAT_14c9a9c38 = &LAB_140383ef2;
    _DAT_14c9a9c40 = &LAB_142b3bf74;
    _DAT_14c9a9c48 = &LAB_1470e27b0;
    _DAT_14c9a9bb0 = FUN_1461fdd4c;
    _DAT_14c9a9ba8 = FUN_142b3bf2c;
    _DAT_14c9a9ca0 = FUN_144a12576;
    _DAT_14c9a9b98 = 0x3f000000;
    uRam000000014c9a9ba0 = 0x3f80000000000000;
    DAT_14c9a9c20 = 1;
    DAT_14c9a9b94 = 0x60;
    _DAT_14c9a9be0 = &LAB_142b3b405;
    _DAT_14c9a9bf0 = FUN_142b3b40c;
    _DAT_14c9a9c60 = &LAB_142b3b4dd;
    _DAT_14c9a9c00 = FUN_142b3b4fe;
    _DAT_14c9a9c10 = &LAB_142b3bad1;
    _DAT_14c9a9c70 = FUN_142b3bad6;
    _DAT_14c9a9c78 = FUN_142b3baf7;
    _DAT_14c9a9c80 = FUN_142b3be80;
    _DAT_14c9a9c88 = &LAB_142b3beb7;
    _DAT_14c9a9c90 = FUN_142b3bebf;
    _DAT_14c9a9c98 = FUN_142b3befa;
  }
  else {
    _DAT_14c9a71f0 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a71f0;
  }
  DAT_14c9a7410 = 0;
  _DAT_14c9a7418 = 0x2000000000;
  atexit((_func_5014 *)&LAB_142b39a8a);
  _DAT_14c9a7420 = 0;
  uRam000000014c9a7428 = 0;
  _DAT_14c9a7430 = 0;
  uRam000000014c9a7438 = 0;
  _DAT_14c9a7440 = 0;
  _DAT_14c9a7450 = &LAB_142b3c730;
  DAT_14c9a7458 = 0x17;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9a9ef0 = 0x28;
    DAT_14c9a9f88 = &LAB_142b3c7f4;
    _DAT_14c9a9fb0 = &DAT_142b3c808;
    _DAT_14c9a9f90 = FUN_1417419a8;
    _DAT_14c9a9f98 = FUN_1470e2b2a;
    _DAT_14c9a9fa0 = FUN_1417419f4;
    _DAT_14c9a9fa8 = FUN_1470e2b4a;
    _DAT_14c9a9f10 = FUN_1461fe038;
    _DAT_14c9a9f08 = &LAB_140cdfcca;
    _DAT_14c9a9ef8 = 0;
    uRam000000014c9a9efc = 0x3f4ccccd;
    uRam000000014c9a9f00 = 0x3f68f5c3;
    uRam000000014c9a9f04 = 0x3f800000;
    DAT_14c9a9ef4 = 0x20;
    _DAT_14c9a9fb8 = FUN_142b3c818;
    _DAT_14c9a9fc0 = &LAB_142b3c834;
    _DAT_14c9a9f60 = FUN_142b3c852;
    _DAT_14c9a9f70 = FUN_142b3c86e;
    _DAT_14c9aa000 = &LAB_142b3c978;
  }
  else {
    _DAT_14c9a7448 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14c9a7448;
  }
  DAT_14c9a74c0 = 0;
  uRam000000014c9a74c8 = 0;
  uStack_f8 = 0;
  ppuStack_e8 = &PTR_LAB_14a1795c0;
  local_e0 = &LAB_142b3df0a;
  local_108 = &DAT_14011fc1e;
  FUN_1460de67c();
  atexit((_func_5014 *)&LAB_142b39cdf);
  _DAT_14c9a7554 = 0;
  FUN_14052b5e0(&DAT_14c9a7550,"script_struct",0);
  _DAT_14c9a7560 = "script_struct";
  ram0x00014c9a756c = 0;
  FUN_14052b5e0(&DAT_14c9a7568,&DAT_14a1c1ce0,0);
  _DAT_14c9a7578 = &DAT_14a1c1ce0;
  ram0x00014c9a7584 = 0;
  FUN_14052b5e0(&DAT_14c9a7580,"row_struct",0);
  _DAT_14c9a7590 = "row_struct";
  ram0x00014c9a759c = 0;
  FUN_14052b5e0(&DAT_14c9a7598,"always_loaded_struct",0);
  _DAT_14c9a75a8 = "always_loaded_struct";
  ram0x00014c9a75b4 = 0;
  FUN_14052b5e0(&DAT_14c9a75b0,"row_name",0);
  _DAT_14c9a75c0 = "row_name";
  ram0x00014c9a75cc = 0;
  FUN_14052b5e0(&DAT_14c9a75c8,"row_value",0);
  _DAT_14c9a75d8 = "row_value";
  _DAT_14c9a75e8 = &LAB_142b39ce4;
  _DAT_14c9a75f0 = 0x431e0000;
  DAT_14c9a75f4 = 1;
  DAT_14c9a75e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a75e0;
  atexit((_func_5014 *)&LAB_142b39ce9);
  FUN_1446f470e(&local_108,L"GbxDefPtrEngineTestStructRefs",1);
  DAT_14c9a7600 = local_108;
  FUN_1446f470e(&local_108,L"GbxDefPtrEngineTestSimpleStruct",1);
  DAT_14c9a7608 = local_108;
  DAT_14c9a76c8 = 0;
  _DAT_14c9a76d0 = 0;
  uStack_f8 = 0;
  ppuStack_e8 = &PTR_LAB_14a1795c0;
  local_e0 = &LAB_142b3e338;
  local_108 = &DAT_14011fc1e;
  FUN_1460dee12(&local_108);
  atexit((_func_5014 *)&LAB_142b39f0b);
  _DAT_14c9a7768 = &LAB_142b39f10;
  _DAT_14c9a7770 = 0x3dcccccd;
  DAT_14c9a7774 = 1;
  DAT_14c9a7760 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14c9a7760;
  atexit((_func_5014 *)&LAB_142b39f15);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3f410 FUN_142b3f410 body=1 status=ok
// SIG undefined FUN_142b3f410(void)

void FUN_142b3f410(void)

{
  return;
}



// FUNCTION 142b3f412 FUN_142b3f412 body=1 status=ok
// SIG undefined FUN_142b3f412(void)

void FUN_142b3f412(void)

{
  return;
}



// FUNCTION 142b3f414 FUN_142b3f414 body=484 status=ok
// SIG undefined FUN_142b3f414(void)

void FUN_142b3f414(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  code *local_48 [2];
  undefined *local_38;
  code **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = FUN_1470dbcfe;
  local_38 = &DAT_14a1c89d4;
  local_30 = local_48;
  FUN_14614d136(&local_58,&local_38);
  local_48[0] = FUN_1470dbdbc;
  local_38 = &DAT_14a1c89d4;
  local_30 = local_48;
  FUN_14614d5d8(&local_58,&local_38);
  FUN_141742c5e();
  FUN_1456d6dba();
  FUN_1462b14a2();
  local_58 = 0;
  uStack_50._0_4_ = 1;
  uStack_50._4_4_ = 0;
  FUN_141518130(&local_58,0);
  lVar3 = local_58;
  FUN_140056680(&local_38,L"/Script/GbxEngine.GbxActorStateBlueprintLibrary.IsInActorState");
  FUN_140056680(local_48,L"/Script/GbxEngine.GbxActorStateBlueprintLibrary.IsActorStateEnabled");
  FUN_141517fc0(lVar3,0x10,local_48,&local_38);
  iVar1 = (int)uStack_50;
  lVar3 = (longlong)(int)uStack_50;
  uVar2 = (int)uStack_50 + 1;
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  if (uStack_50._4_4_ < uVar2) {
    FUN_141518130(&local_58,iVar1);
  }
  lVar3 = lVar3 * 0xa0 + local_58;
  FUN_140056680(&local_38,L"/Script/GbxEngine.SeparatedGestaltSkeletalMeshPart");
  FUN_140056680(local_48,L"/Script/Engine.SeparatedGestaltSkeletalMeshPart");
  FUN_141517fc0(lVar3,2,local_48,&local_38);
  FUN_140056680(&local_38,L"GbxEngine");
  local_68 = local_58;
  local_60 = (int)uStack_50;
  FUN_141071fba(&local_68,&local_38);
  if (local_38 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  FUN_1462b0c9f();
  FUN_14123f5ce(&DAT_14c9a1e20,&local_38,FUN_146007ae4);
  FUN_14123f5ce(&DAT_14c9a1e20,&local_38,&LAB_145d04ae0);
  FUN_1407a3a24(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3f5fa FUN_142b3f5fa body=29 status=ok
// SIG undefined FUN_142b3f5fa(void)

void FUN_142b3f5fa(void)

{
  FUN_1462b1542();
  FUN_1462b1c36();
  FUN_145db1c38();
  FUN_145db1d88();
  return;
}



// FUNCTION 142b3f624 FUN_142b3f624 body=474 status=ok
// SIG undefined FUN_142b3f624(void)

void FUN_142b3f624(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar4 = *(code **)(*(longlong *)param_1[2] + 0x390);
  if (pcVar4 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar4)((longlong *)param_1[2],param_1,1,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    param_1[6] = local_30;
    plVar6 = (longlong *)param_1[7];
    if (plVar6 == (longlong *)0x0) goto LAB_142b3f6c6;
    param_1[7] = 0;
LAB_142b3f787:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_142b3f6c6;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    param_1[6] = local_30;
    plVar6 = (longlong *)param_1[7];
    if (local_28 != plVar6) {
      param_1[7] = (longlong)local_28;
      if (plVar6 == (longlong *)0x0) goto LAB_142b3f6c6;
      goto LAB_142b3f787;
    }
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_142b3f6c6;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_142b3f6c6:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  lVar5 = param_1[6];
  if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar5 + 0x10) = param_1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3f80e FUN_142b3f80e body=145 status=ok
// SIG undefined FUN_142b3f80e(void)

void FUN_142b3f80e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_142b3f80e(param_1);
    FUN_140002184(param_1,0x2e);
  }
  FUN_1400021e4(param_2 + 0x10,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_1,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b3f8cc FUN_142b3f8cc body=23 status=ok
// SIG undefined FUN_142b3f8cc(void)

undefined8 FUN_142b3f8cc(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x30))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 142b3f8e4 FUN_142b3f8e4 body=23 status=ok
// SIG undefined FUN_142b3f8e4(void)

undefined8 FUN_142b3f8e4(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x78))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 142b3f8fc FUN_142b3f8fc body=73 status=ok
// SIG undefined FUN_142b3f8fc(void)

void FUN_142b3f8fc(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x30) << 5;
    lVar2 = *(longlong *)(param_1 + 0x28) + 0xc;
    do {
      if ((*(char *)(lVar2 + -4) == '\x03') && (*(longlong *)(lVar2 + -0xc) != 0)) {
        (*(code *)*param_2)(param_2[1],*(longlong *)(lVar2 + -0xc),lVar2);
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 142b3f946 FUN_142b3f946 body=73 status=ok
// SIG undefined FUN_142b3f946(void)

void FUN_142b3f946(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x30) << 5;
    lVar2 = *(longlong *)(param_1 + 0x28) + 0xc;
    do {
      if ((*(char *)(lVar2 + -4) == '\x05') && (*(longlong *)(lVar2 + -0xc) != 0)) {
        (*(code *)*param_2)(param_2[1],*(longlong *)(lVar2 + -0xc),lVar2);
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 142b3f993 FUN_142b3f993 body=49 status=ok
// SIG undefined FUN_142b3f993(void)

void FUN_142b3f993(void)

{
  FUN_1470e8557(DAT_14c9a78c0,DAT_14c9a78c8);
  if (DAT_14c9a78c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b3f9c4 FUN_142b3f9c4 body=140 status=ok
// SIG undefined FUN_142b3f9c4(void)

undefined8 * FUN_142b3f9c4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
    bVar1 = *(byte *)(param_3 + 4);
    uVar2 = *(ushort *)(param_3 + 3);
    *(ushort *)(param_2 + 3) = uVar2;
    _Dst = param_2;
    _Src = param_3;
    if (0x18 < uVar2) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
      *param_2 = _Dst;
      _Src = (undefined8 *)*param_3;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
  }
  else {
    (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 142b3fa50 FUN_142b3fa50 body=43 status=ok
// SIG undefined FUN_142b3fa50(void)

undefined8 FUN_142b3fa50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78))) {
      return *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 142b3fa7c FUN_142b3fa7c body=147 status=ok
// SIG undefined FUN_142b3fa7c(void)

void FUN_142b3fa7c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x40) != 0) && (lVar3 = *(longlong *)(param_1 + 0x48), lVar3 != 0))
     && (iVar1 = *(int *)(lVar3 + 0x30), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar4 = 0;
    do {
      if (((*(char *)(lVar3 + 8 + lVar4) == '\x03') &&
          (*(longlong *)(lVar3 + 0xc + lVar4) == *param_2)) && (*(longlong *)(lVar3 + lVar4) != 0))
      {
        iVar2 = *(int *)(*(longlong *)(lVar3 + lVar4) + 0x18);
        if (((-1 < (longlong)iVar2) && (iVar2 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78))) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar2 * 8)
            != 0)) {
          (*(code *)*param_3)(param_3[1]);
        }
      }
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 142b3fb1d FUN_142b3fb1d body=49 status=ok
// SIG undefined FUN_142b3fb1d(void)

void FUN_142b3fb1d(void)

{
  FUN_1470e8847(DAT_14c9a7928,DAT_14c9a7930);
  if (DAT_14c9a7928 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b3fb4e FUN_142b3fb4e body=461 status=ok
// SIG undefined FUN_142b3fb4e(void)

void FUN_142b3fb4e(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = *param_1;
    iVar2 = (int)param_2[5];
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar16 = 0;
      iVar12 = 0;
      iVar6 = 0;
    }
    else {
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      uVar15 = *puVar5;
      if (uVar15 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar16 = 0;
        uVar14 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar14 = uVar16;
        }
        iVar12 = 0;
        do {
          if (uVar14 == uVar16) {
            return;
          }
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar5[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar16 = 0;
        iVar12 = 0;
      }
      uVar14 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar15 = 0xffffffff;
      iVar4 = iVar2;
      do {
        lVar13 = (longlong)*(int *)(lVar3 + 0x98);
        if (lVar13 != 0) {
          plVar11 = (longlong *)((longlong)iVar6 * 0x48 + *param_2);
          lVar10 = *(longlong *)(lVar3 + 0x90);
          lVar13 = lVar13 * 0x58;
          do {
            if (*(longlong *)(lVar10 + 0x38) == *plVar11) {
              if (lVar10 != 0) {
                FUN_144983130(lVar10,plVar11 + 1);
                iVar4 = (int)param_2[5];
              }
              break;
            }
            lVar10 = lVar10 + 0x58;
            lVar13 = lVar13 + -0x58;
          } while (lVar13 != 0);
        }
        uVar15 = uVar15 & ~(uint)uVar14;
        puVar5 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar5 = (uint *)(param_2 + 2);
        }
        iVar6 = (int)uVar16;
        lVar13 = (longlong)iVar6;
        uVar7 = puVar5[lVar13] & uVar15;
        if (uVar7 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar6 < iVar8) {
            lVar10 = 0;
            do {
              uVar7 = puVar5[lVar13 + lVar10 + 1];
              if (uVar7 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar10 + 1);
                uVar15 = 0xffffffff;
                goto LAB_142b3fcd2;
              }
              iVar12 = iVar12 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar9 - lVar13 != lVar10);
            uVar15 = 0xffffffff;
            iVar6 = iVar9;
          }
          uVar16 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar4;
        }
        else {
LAB_142b3fcd2:
          uVar14 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar14 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar6) {
            iVar6 = iVar4;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
  return;
}



// FUNCTION 142b3fd2c FUN_142b3fd2c body=41 status=ok
// SIG undefined FUN_142b3fd2c(void)

void FUN_142b3fd2c(void)

{
  DAT_14c9a7ba8 = 0;
  if (DAT_14c9a7ba0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d626be();
  return;
}



// FUNCTION 142b3fd94 FUN_142b3fd94 body=173 status=ok
// SIG undefined FUN_142b3fd94(void)

void FUN_142b3fd94(longlong param_1,longlong *param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) &&
     (((param_3 ^ 1) & *(int *)(lVar2 + 0x170) != 0) == 0 && *(int *)(lVar2 + 0x170) < 1)) {
    DAT_14c9a7c70 = DAT_14c9a7c70 + 1;
    *(int *)(lVar2 + 0x170) = DAT_14c9a7c70;
    iVar1 = *(int *)(param_1 + 0x5e0);
    *(uint *)(param_1 + 0x5e0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5e4) < iVar1 + 1U) {
      FUN_14088d55a((longlong *)(param_1 + 0x5d8),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x5d8);
    *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    FUN_141741e8a(param_1);
    return;
  }
  return;
}



// FUNCTION 142b3fe75 FUN_142b3fe75 body=69 status=ok
// SIG undefined FUN_142b3fe75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b3fe75(void)

{
  _DAT_14c9a7c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b3feb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a7c88,1);
  return;
}



// FUNCTION 142b3feba FUN_142b3feba body=13 status=ok
// SIG undefined FUN_142b3feba(void)

void FUN_142b3feba(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 142b3fec8 FUN_142b3fec8 body=13 status=ok
// SIG undefined FUN_142b3fec8(void)

void FUN_142b3fec8(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 142b3ff08 FUN_142b3ff08 body=69 status=ok
// SIG undefined FUN_142b3ff08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b3ff08(void)

{
  _DAT_14c9a7ce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b3ff4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9a7ce8,1);
  return;
}



// FUNCTION 142b3ff4e FUN_142b3ff4e body=1210 status=ok
// SIG undefined FUN_142b3ff4e(void)

longlong ****
FUN_142b3ff4e(undefined8 param_1,longlong ****param_2,longlong param_3,longlong ***param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong ***ppplVar4;
  longlong ***ppplVar5;
  longlong **pplVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  longlong **pplVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  longlong **local_58;
  longlong ***local_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar7 = *(char *)((longlong)param_4 + 0x152);
  local_58 = (longlong **)param_4;
  if ((cVar7 == '\x01') || (cVar7 == '\x03')) {
    *param_2 = (longlong ***)0x0;
    param_2[1] = (longlong ***)0x0;
  }
  else {
    if (cVar7 != '\x05') {
      *param_2 = (longlong ***)0x0;
      param_2[1] = (longlong ***)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    bVar2 = *(byte *)(param_3 + 0x20);
    *param_2 = (longlong ***)0x0;
    param_2[1] = (longlong ***)0x0;
    if ((bVar2 & 8) == 0) goto LAB_142b40350;
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(param_3 + 0x10);
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,&local_50);
  ppplVar5 = (longlong ***)local_48;
  if (&local_50 != param_2) {
    *param_2 = local_50;
    local_50 = (longlong ***)0x0;
    ppplVar4 = param_2[1];
    if (local_48 != (longlong ****)ppplVar4) {
      local_48 = (longlong ****)0x0;
      param_2[1] = ppplVar5;
      if (ppplVar4 != (longlong ***)0x0) {
        LOCK();
        ppplVar5 = ppplVar4 + 1;
        *(int *)ppplVar5 = *(int *)ppplVar5 + -1;
        UNLOCK();
        if (*(int *)ppplVar5 == 0) {
          (*(code *)**ppplVar4)(ppplVar4);
          LOCK();
          piVar1 = (int *)((longlong)ppplVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppplVar4)[2])(ppplVar4);
          }
        }
      }
    }
  }
  ppplVar5 = (longlong ***)local_48;
  if (local_48 != (longlong ****)0x0) {
    LOCK();
    ppplVar4 = (longlong ***)(local_48 + 1);
    *(int *)ppplVar4 = *(int *)ppplVar4 + -1;
    UNLOCK();
    if (*(int *)ppplVar4 == 0) {
      (*(code *)**local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)ppplVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppplVar5)[2])(ppplVar5);
      }
    }
  }
  local_50 = &local_58;
  local_48 = param_2;
  FUN_14111f10c(param_3 + 0x28,local_40);
  (*(code *)(**param_2)[1])(*param_2,local_58);
  pplVar6 = local_58;
  ppplVar5 = *param_2;
  ppplVar4 = param_2[1];
  if (ppplVar4 == (longlong ***)0x0) {
    local_50 = (longlong ***)0x0;
    local_48 = (longlong ****)((ulonglong)local_48._4_4_ << 0x20);
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = (longlong ****)CONCAT44(local_48._4_4_,3);
    *local_50 = (longlong **)&PTR_LAB_14a1ca410;
    LOCK();
    UNLOCK();
    pplVar10 = (longlong **)(DAT_14c758608 + 1);
    lVar12 = DAT_14c758608 + 1;
    if (pplVar10 == (longlong **)0x0) {
      LOCK();
      UNLOCK();
      pplVar10 = (longlong **)(DAT_14c758608 + 2);
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_50[2] = pplVar10;
    *local_50 = (longlong **)&PTR_FUN_14a1ca190;
    local_50[3] = (longlong **)ppplVar5;
    local_50[4] = (longlong **)0x0;
    local_50[5] = (longlong **)&LAB_140eb3a1e;
  }
  else {
    LOCK();
    *(int *)(ppplVar4 + 1) = *(int *)(ppplVar4 + 1) + 1;
    UNLOCK();
    local_50 = (longlong ***)0x0;
    local_48 = (longlong ****)((ulonglong)local_48._4_4_ << 0x20);
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = (longlong ****)CONCAT44(local_48._4_4_,3);
    LOCK();
    *(int *)(ppplVar4 + 1) = *(int *)(ppplVar4 + 1) + 1;
    UNLOCK();
    *local_50 = (longlong **)&PTR_LAB_14a1ca410;
    LOCK();
    UNLOCK();
    pplVar10 = (longlong **)(DAT_14c758608 + 1);
    lVar12 = DAT_14c758608 + 1;
    if (pplVar10 == (longlong **)0x0) {
      LOCK();
      UNLOCK();
      pplVar10 = (longlong **)(DAT_14c758608 + 2);
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_50[2] = pplVar10;
    *local_50 = (longlong **)&PTR_FUN_14a1ca190;
    local_50[3] = (longlong **)ppplVar5;
    local_50[4] = (longlong **)ppplVar4;
    LOCK();
    *(int *)((longlong)ppplVar4 + 0xc) = *(int *)((longlong)ppplVar4 + 0xc) + 1;
    UNLOCK();
    local_50[5] = (longlong **)&LAB_140eb3a1e;
    LOCK();
    ppplVar5 = ppplVar4 + 1;
    *(int *)ppplVar5 = *(int *)ppplVar5 + -1;
    UNLOCK();
    if (*(int *)ppplVar5 == 0) {
      (*(code *)**ppplVar4)(ppplVar4);
      LOCK();
      piVar1 = (int *)((longlong)ppplVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppplVar4)[2])(ppplVar4);
      }
    }
  }
  if (((int)local_48 == 0) || (local_50 == (longlong ***)0x0)) {
LAB_142b403aa:
    if ((int)local_48 == 0) goto LAB_142b40302;
    if (local_50 != (longlong ***)0x0) {
      (*(code *)**local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_142b402f5;
    }
  }
  else {
    cVar7 = (*(code *)(*local_50)[6])();
    if (cVar7 == '\0') {
      goto LAB_142b403aa;
    }
    ppplVar5 = (longlong ***)(pplVar6 + 0xf4);
    if (*(int *)((longlong)pplVar6 + 0x7b4) < 1) {
      iVar3 = *(int *)(pplVar6 + 0xf5);
      iVar9 = *(int *)(pplVar6 + 0xf6);
      *(int *)(pplVar6 + 0xf6) = iVar9 + -1;
      if (iVar9 + -1 <= iVar3) {
        iVar9 = iVar3;
        if (0 < iVar3) {
          iVar11 = 0;
          do {
            if (((*(int *)(*ppplVar5 + (longlong)iVar11 * 2 + 1) == 0) ||
                (plVar8 = (*ppplVar5)[(longlong)iVar11 * 2], plVar8 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar8 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(ppplVar5,iVar11);
              FUN_14005b248(ppplVar5);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar9 = *(int *)(pplVar6 + 0xf5);
          } while (iVar11 < iVar9);
        }
        iVar11 = 2;
        if (2 < iVar9 * 2) {
          iVar11 = iVar9 * 2;
        }
        *(int *)(pplVar6 + 0xf6) = iVar11;
        if ((iVar11 < iVar3) && (*(int *)((longlong)pplVar6 + 0x7ac) != iVar9)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)local_48 != 0) && (local_50 != (longlong ***)0x0)) {
      (*(code *)(*local_50)[7])(local_50,local_40);
    }
    iVar3 = *(int *)(pplVar6 + 0xf5);
    lVar12 = (longlong)iVar3;
    *(uint *)(pplVar6 + 0xf5) = iVar3 + 1U;
    if (*(uint *)((longlong)pplVar6 + 0x7ac) < iVar3 + 1U) {
      FUN_1447a71f6(ppplVar5,iVar3);
    }
    pplVar6 = *ppplVar5;
    pplVar6[lVar12 * 2] = (longlong *)0x0;
    *(undefined4 *)(pplVar6 + lVar12 * 2 + 1) = 0;
    pplVar6[lVar12 * 2] = (longlong *)local_50;
    local_50 = (longlong ***)0x0;
    *(int *)(pplVar6 + lVar12 * 2 + 1) = (int)local_48;
LAB_142b402f5:
    local_48 = (longlong ****)((ulonglong)local_48 & 0xffffffff00000000);
LAB_142b40302:
    if (local_50 != (longlong ***)0x0) {
      FUN_1400020a8();
    }
  }
  if (ppplVar4 != (longlong ***)0x0) {
    LOCK();
    ppplVar5 = ppplVar4 + 1;
    *(int *)ppplVar5 = *(int *)ppplVar5 + -1;
    UNLOCK();
    if (*(int *)ppplVar5 == 0) {
      (*(code *)**ppplVar4)(ppplVar4);
      LOCK();
      piVar1 = (int *)((longlong)ppplVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppplVar4)[2])(ppplVar4);
      }
    }
  }
  if (*(char *)((longlong)local_58 + 0x154) < '\0') {
    local_50 = (longlong ***)local_58;
    local_48 = (longlong ****)((ulonglong)local_48 & 0xffffffffffffff00);
    (*(code *)(**param_2)[2])();
  }
LAB_142b40350:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142b4040e FUN_142b4040e body=49 status=ok
// SIG undefined FUN_142b4040e(void)

void FUN_142b4040e(void)

{
  FUN_144760e21(DAT_14c9a7d18,DAT_14c9a7d20);
  if (DAT_14c9a7d18 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b4043f FUN_142b4043f body=49 status=ok
// SIG undefined FUN_142b4043f(void)

void FUN_142b4043f(void)

{
  FUN_144760e21(DAT_14c9a7d30,DAT_14c9a7d38);
  if (DAT_14c9a7d30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b4047c FUN_142b4047c body=25 status=ok
// SIG undefined FUN_142b4047c(void)

void FUN_142b4047c(void)

{
  FUN_141742824();
  FUN_14493be96(&DAT_14c9a8040);
  return;
}



// FUNCTION 142b404f4 FUN_142b404f4 body=145 status=ok
// SIG undefined FUN_142b404f4(void)

double * FUN_142b404f4(float *param_1,double *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = sinf((param_1[3] * param_3 + param_1[5]) * 0.017453292);
  fVar1 = param_1[4];
  fVar3 = sinf((param_3 * *param_1 + param_1[2]) * 0.017453292);
  *param_2 = (double)(fVar3 * param_1[1]);
  param_2[1] = (double)(fVar2 * fVar1);
  return param_2;
}



// FUNCTION 142b405a8 FUN_142b405a8 body=1317 status=ok
// SIG undefined FUN_142b405a8(void)

undefined8 FUN_142b405a8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_b8 [32];
  byte *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  local_98 = *(byte **)(param_3 + 0x48);
  local_90 = *(longlong **)(param_3 + 0x50);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  do {
    plVar10 = local_90;
    if (param_3 == 0) break;
    lVar6 = *(longlong *)(param_3 + 0x58);
    puVar7 = &DAT_14c9a1308;
    if (lVar6 != 0) {
      do {
        pbVar5 = *(byte **)(lVar6 + 0x18);
        puVar7 = &DAT_14c9a1308;
        if (pbVar5 != (byte *)0x0) {
          plVar9 = &DAT_14c9a1288;
          if ((*pbVar5 & 2) != 0) {
            plVar9 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
          }
          puVar7 = &DAT_14c9a1308;
          if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
            plVar11 = plVar9 + 8;
            if ((longlong *)plVar9[9] != (longlong *)0x0) {
              plVar11 = (longlong *)plVar9[9];
            }
            iVar13 = *(int *)((longlong)plVar11 +
                             (ulonglong)((int)plVar9[10] - 1U & DAT_14c9a8170) * 4);
            puVar7 = &DAT_14c9a1308;
            if (iVar13 != -1) {
              do {
                lVar3 = *plVar9 + (longlong)iVar13 * 0x40;
                if (*(uint *)(*plVar9 + (longlong)iVar13 * 0x40) == DAT_14c9a8170) {
                  puVar7 = &DAT_14c9a1308;
                  if (lVar3 == 0) goto LAB_142b406c4;
                  puVar8 = (undefined8 *)(lVar3 + 0x28);
                  puVar7 = &DAT_14c9a1308;
                  if ((puVar8 == (undefined8 *)0x0) ||
                     (((byte *)*puVar8 != (byte *)0x0 &&
                      (puVar7 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_142b406c4;
                  break;
                }
                iVar13 = *(int *)(lVar3 + 0x38);
              } while (iVar13 != -1);
              puVar7 = &DAT_14c9a1308;
            }
          }
        }
LAB_142b406c4:
        pbVar5 = (byte *)*puVar7;
        if (((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) == 1)) && (*(longlong *)(pbVar5 + 8) != 0)) {
          puVar7 = (undefined8 *)(lVar6 + 0x18);
          goto LAB_142b406f9;
        }
        lVar6 = *(longlong *)(lVar6 + 0x28);
      } while (lVar6 != 0);
      puVar7 = &DAT_14c9a1308;
    }
LAB_142b406f9:
    pbVar5 = (byte *)*puVar7;
    plVar9 = (longlong *)puVar7[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) == 0)) {
      lVar6 = *(longlong *)(param_3 + 0x58);
      puVar7 = &DAT_14c9a1308;
      if (lVar6 != 0) {
        do {
          pbVar5 = *(byte **)(lVar6 + 0x18);
          puVar7 = &DAT_14c9a1308;
          if (pbVar5 != (byte *)0x0) {
            plVar10 = &DAT_14c9a1288;
            if ((*pbVar5 & 2) != 0) {
              plVar10 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
            }
            puVar7 = &DAT_14c9a1308;
            if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
              plVar11 = plVar10 + 8;
              if ((longlong *)plVar10[9] != (longlong *)0x0) {
                plVar11 = (longlong *)plVar10[9];
              }
              iVar13 = *(int *)((longlong)plVar11 +
                               (ulonglong)((int)plVar10[10] - 1U & DAT_14c9a8198) * 4);
              puVar7 = &DAT_14c9a1308;
              if (iVar13 != -1) {
                do {
                  lVar3 = *plVar10 + (longlong)iVar13 * 0x40;
                  if (*(uint *)(*plVar10 + (longlong)iVar13 * 0x40) == DAT_14c9a8198) {
                    puVar7 = &DAT_14c9a1308;
                    if (lVar3 == 0) goto LAB_142b407fa;
                    puVar8 = (undefined8 *)(lVar3 + 0x28);
                    puVar7 = &DAT_14c9a1308;
                    if ((puVar8 == (undefined8 *)0x0) ||
                       (((byte *)*puVar8 != (byte *)0x0 &&
                        (puVar7 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_142b407fa;
                    break;
                  }
                  iVar13 = *(int *)(lVar3 + 0x38);
                } while (iVar13 != -1);
                puVar7 = &DAT_14c9a1308;
              }
            }
          }
LAB_142b407fa:
          pbVar5 = (byte *)*puVar7;
          if (((pbVar5 != (byte *)0x0) && ((*pbVar5 & 3) == 1)) && (*(longlong *)(pbVar5 + 8) != 0))
          {
            puVar7 = (undefined8 *)(lVar6 + 0x18);
            goto LAB_142b4082f;
          }
          lVar6 = *(longlong *)(lVar6 + 0x28);
        } while (lVar6 != 0);
        puVar7 = &DAT_14c9a1308;
      }
LAB_142b4082f:
      pbVar5 = (byte *)*puVar7;
      plVar10 = (longlong *)puVar7[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar9 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      puVar7 = &DAT_14c9a1308;
      if (pbVar5 != (byte *)0x0) {
        plVar9 = &DAT_14c9a1288;
        if ((*pbVar5 & 2) != 0) {
          plVar9 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
        }
        puVar7 = &DAT_14c9a1308;
        if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
          plVar11 = plVar9 + 8;
          if ((longlong *)plVar9[9] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar9[9];
          }
          iVar13 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar9[10] - 1U & DAT_14c9a8198) * 4);
          puVar7 = &DAT_14c9a1308;
          if (iVar13 != -1) {
            do {
              lVar6 = *plVar9 + (longlong)iVar13 * 0x40;
              if (*(uint *)(*plVar9 + (longlong)iVar13 * 0x40) == DAT_14c9a8198) {
                puVar7 = &DAT_14c9a1308;
                if (lVar6 == 0) goto LAB_142b408ea;
                puVar8 = (undefined8 *)(lVar6 + 0x28);
                puVar7 = &DAT_14c9a1308;
                if ((puVar8 == (undefined8 *)0x0) ||
                   (((byte *)*puVar8 != (byte *)0x0 &&
                    (puVar7 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_142b408ea;
                break;
              }
              iVar13 = *(int *)(lVar6 + 0x38);
            } while (iVar13 != -1);
            puVar7 = &DAT_14c9a1308;
          }
        }
      }
LAB_142b408ea:
      pbVar5 = (byte *)*puVar7;
      if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(pbVar5 + 8);
      }
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,uVar12,0);
      iVar13 = 3;
      if ((((int)local_88 != 0) && (local_88._4_4_ != 0)) && ((int)local_88 != DAT_14c948000)) {
        param_3 = FUN_144837648(param_1,&local_88);
        iVar13 = 0;
      }
      plVar9 = plVar10;
      plVar11 = local_90;
      if (local_70 != 0) {
        FUN_1400020a8();
        plVar11 = local_90;
      }
    }
    else {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      iVar13 = 3;
      local_98 = pbVar5;
      plVar11 = plVar9;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          puVar7 = (undefined8 *)*local_90;
          local_90 = plVar9;
          (*(code *)*puVar7)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar11 = local_90;
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            plVar11 = local_90;
          }
        }
      }
    }
    local_90 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  } while (iVar13 == 0);
  FUN_14483827e(param_1,&local_88,&local_98);
  plVar10 = plStack_80;
  if ((local_88 != 0) && (*(int *)(local_88 + 0x3c) != 0)) {
    uVar4 = *(uint *)(local_88 + 0x38);
    uVar12 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_142b40a6d;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == *(int *)(local_88 + 0x3c))) &&
       ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
      uVar12 = *puVar7;
      goto LAB_142b40a6d;
    }
  }
  uVar12 = 0;
LAB_142b40a6d:
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_80 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 142b40aec FUN_142b40aec body=258 status=ok
// SIG undefined FUN_142b40aec(void)

void FUN_142b40aec(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  FUN_14012b5ea(uVar3,&local_30,uVar4);
  if (*(int *)(local_30 + 0x3c) != 0) {
    uVar2 = *(uint *)(local_30 + 0x38);
    plVar5 = (longlong *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b40b7b;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(local_30 + 0x3c) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      plVar5 = (longlong *)*puVar6;
      goto LAB_142b40b7b;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_142b40b7b:
  (**(code **)(*plVar5 + 0x2f0))(plVar5,param_2,1);
  *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + -1;
  *param_2 = *(longlong *)(local_30 + 8);
  *(longlong **)(local_30 + 8) = param_2;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b40c3a FUN_142b40c3a body=258 status=ok
// SIG undefined FUN_142b40c3a(void)

void FUN_142b40c3a(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *param_1;
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1470e6d40(uVar3,&local_30,uVar4);
  if (*(int *)(local_30 + 0x3c) != 0) {
    uVar2 = *(uint *)(local_30 + 0x38);
    plVar5 = (longlong *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_142b40cc9;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == *(int *)(local_30 + 0x3c) &&
        ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      plVar5 = (longlong *)*puVar6;
      goto LAB_142b40cc9;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_142b40cc9:
  (**(code **)(*plVar5 + 0x2f0))(plVar5,param_2,1);
  *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + -1;
  *param_2 = *(longlong *)(local_30 + 8);
  *(longlong **)(local_30 + 8) = param_2;
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b40d56 FUN_142b40d56 body=41 status=ok
// SIG undefined FUN_142b40d56(void)

void FUN_142b40d56(void)

{
  DAT_14c9a8248 = 0;
  if (DAT_14c9a8240 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6275c();
  return;
}



// FUNCTION 142b40d84 FUN_142b40d84 body=41 status=ok
// SIG undefined FUN_142b40d84(void)

void FUN_142b40d84(void)

{
  DAT_14c9a8340 = 0;
  if (DAT_14c9a8338 != 0) {
    FUN_1400020a8();
  }
  FUN_145d627fa();
  return;
}



// FUNCTION 142b40db2 FUN_142b40db2 body=1374 status=ok
// SIG undefined FUN_142b40db2(void)

void FUN_142b40db2(longlong param_1,void *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  void *_Dst;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_3f8 [32];
  undefined1 **local_3d8;
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [864];
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  memcpy(local_3c8,param_2,0x360);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_142b40e0e;
    if (iVar6 != 1) goto LAB_142b40e09;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_142b40e0e;
  }
  else {
LAB_142b40e09:
    if (iVar6 == 0x10) goto LAB_142b40e0e;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_142b40e0e:
      _Dst = *(void **)(param_1 + 0x20);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)FUN_14001cc68(0x360,0x10);
        *(void **)(param_1 + 0x20) = _Dst;
      }
      memcpy(_Dst,local_3c8,0x360);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_3f8);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_142b40e0e;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_142b4102f;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_142b450b9);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_142b4102f:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar14 = (uint *)(puVar16 + 0x84);
      uVar13 = puVar11[0x12];
      if (puVar14 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x67U & 0xfffffffffffffff0);
        puVar14 = (uint *)(puVar16 + 0x84);
        uVar13 = 0;
        if (puVar14 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_142b410af;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_142b410af:
    *(uint **)(puVar11 + 0x10) = puVar14;
    puVar11[0x12] = uVar13;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14a1ca258;
    puVar16[0x16] = param_1;
    memcpy(puVar16 + 0x17,local_3d0,0x368);
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar6 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar15 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar12 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_68[0] = (undefined1 *)0x0;
    plVar9 = (longlong *)FUN_14001cc68(0x380,0x10);
    *plVar9 = (longlong)&PTR_LAB_14a1ca200;
    plVar9[2] = param_1;
    local_58 = plVar9;
    memcpy(plVar9 + 3,local_3d0,0x368);
    if (plVar9 != (longlong *)&DAT_fffffffffffffff0) {
      local_68[0] = &LAB_1470eb32c;
    }
    local_3d8 = local_68;
    FUN_14005a792(&DAT_14ca9a440,L"SetUniformBufferContents",&DAT_14c9a83e0);
    if (local_68[0] != (undefined1 *)0x0) {
      plVar9 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar9 = local_48;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b41328 FUN_142b41328 body=47 status=ok
// SIG undefined FUN_142b41328(void)

void FUN_142b41328(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x44fa0000;
  param_1[4] = 0xbf80000043800000;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  return;
}



// FUNCTION 142b4136c FUN_142b4136c body=29 status=ok
// SIG undefined FUN_142b4136c(void)

undefined8 FUN_142b4136c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b4138a FUN_142b4138a body=366 status=ok
// SIG undefined FUN_142b4138a(void)

void FUN_142b4138a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  
  if ((((*(int *)(param_1 + 0xc) == 0) || (uVar9 = *(uint *)(param_1 + 8), (int)uVar9 < 0)) ||
      (DAT_14c9647dc <= (int)uVar9)) ||
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xc))) ||
      ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
    **(undefined8 **)(param_1 + 0x28) = 0;
  }
  else {
    lVar10 = *plVar7;
    **(longlong **)(param_1 + 0x28) = lVar10;
    if (lVar10 != 0) {
      bVar11 = (*(byte *)(lVar10 + 0x65) & 0x18) == 0x10;
      goto LAB_142b41404;
    }
  }
  bVar11 = false;
LAB_142b41404:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar4 = *(uint *)(lVar10 + 0x10);
      bVar12 = uVar4 == 0;
      if (bVar12) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar4 = uVar8;
      }
      uVar6 = (ulonglong)uVar4;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(bool *)(param_2 + 0x60) = bVar11;
  if (bVar11 != false) {
    iVar2 = *(int *)(param_2 + 0x58);
    lVar10 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar5 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar5 = param_2;
    }
    *(undefined8 *)(lVar5 + lVar10 * 0x14) = uVar3;
    *(undefined4 *)(lVar5 + 8 + lVar10 * 0x14) = uVar1;
    *(ulonglong *)(lVar5 + 0xc + lVar10 * 0x14) = (ulonglong)uVar9 | uVar6 << 0x20;
  }
  return;
}



// FUNCTION 142b4162a FUN_142b4162a body=28 status=ok
// SIG undefined FUN_142b4162a(void)

undefined8 FUN_142b4162a(undefined8 param_1,undefined8 param_2)

{
  FUN_1470e491e(param_2,param_1);
  return param_1;
}



// FUNCTION 142b41646 FUN_142b41646 body=61 status=ok
// SIG undefined FUN_142b41646(void)

longlong FUN_142b41646(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14057746a(param_2,param_3);
  if (plVar1 == (longlong *)0x0) {
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_1,0);
  }
  return param_1;
}



// FUNCTION 142b41684 FUN_142b41684 body=109 status=ok
// SIG undefined FUN_142b41684(void)

void FUN_142b41684(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    plVar4 = *(longlong **)(param_1 + 8);
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
    if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142b416e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142b416f2 FUN_142b416f2 body=303 status=ok
// SIG undefined FUN_142b416f2(void)

undefined8 FUN_142b416f2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  if (param_1 != 0) {
    lVar1 = FUN_144a7ef38();
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      do {
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (lVar4 = lVar2,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0));
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 != 0);
      goto LAB_142b41768;
    }
  }
  uVar3 = 0;
LAB_142b41768:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b41976 FUN_142b41976 body=28 status=ok
// SIG undefined FUN_142b41976(void)

undefined8 FUN_142b41976(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4(param_2,param_1);
  return param_1;
}



// FUNCTION 142b41992 FUN_142b41992 body=1085 status=ok
// SIG undefined FUN_142b41992(void)

longlong FUN_142b41992(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 local_79;
  char local_78;
  undefined7 uStack_77;
  longlong *local_70;
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = FUN_1405774e2(param_3);
  lVar8 = lVar6;
  if (lVar6 != 0) {
    do {
      lVar7 = FUN_1402b888a(param_2,lVar8 + 0x90);
      if (lVar7 != 0) {
        if ((*(char *)(lVar7 + 0x28) != '\x11') && (*(char *)(lVar7 + 0x28) != '\r')) {
          FUN_1447c3578(lVar7,param_1,param_3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
        }
        plVar9 = *(longlong **)(lVar8 + 0x58);
        if (plVar9 == (longlong *)0x0) goto LAB_142b41acd;
        iVar5 = (int)plVar9[1];
        goto LAB_142b41a8d;
      }
      plVar9 = *(longlong **)(lVar8 + 0x58);
      if (plVar9 == (longlong *)0x0) goto LAB_142b41ae0;
      iVar5 = (int)plVar9[1];
      do {
        if (iVar5 == 0) goto LAB_142b41ad7;
        LOCK();
        iVar10 = (int)plVar9[1];
        bVar14 = iVar5 == iVar10;
        if (bVar14) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
          iVar10 = iVar5;
        }
        iVar5 = iVar10;
        UNLOCK();
      } while (!bVar14);
      lVar8 = *(longlong *)(lVar8 + 0x50);
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
    } while (lVar8 != 0);
    goto LAB_142b41ad7;
  }
  FUN_1470e49c0(param_3,&local_78);
  lVar8 = CONCAT71(uStack_77,local_78);
  if (lVar8 == 0) {
    lVar8 = FUN_1470e869c(param_3);
    if (lVar8 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      goto LAB_142b41b76;
    }
    FUN_1470e4aac(param_3,&local_98);
    bVar14 = true;
    if ((local_98 != 0) && (*(longlong *)(local_98 + 8) != 0)) {
      FUN_1470e4a4c(*(longlong *)(local_98 + 8),param_1,param_2,param_3);
      bVar14 = false;
    }
    plVar9 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
LAB_142b41b76:
    FUN_1470e4a4c(lVar8,param_1,param_2,param_3);
    bVar14 = false;
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_70 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if (!bVar14) goto LAB_142b41bb6;
  goto LAB_142b41aed;
  while( true ) {
    LOCK();
    iVar10 = (int)plVar9[1];
    bVar14 = iVar5 == iVar10;
    if (bVar14) {
      *(int *)(plVar9 + 1) = iVar5 + 1;
      iVar10 = iVar5;
    }
    iVar5 = iVar10;
    UNLOCK();
    if (bVar14) break;
LAB_142b41a8d:
    if (iVar5 == 0) goto LAB_142b41acd;
  }
  lVar8 = *(longlong *)(lVar8 + 0x50);
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
  if (lVar8 == 0) {
LAB_142b41acd:
    *(undefined2 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    local_88 = FUN_1447262c2(param_3);
    local_79 = 2;
    if (local_88 == 0) {
      if (*(int *)(lVar8 + 0x4c) == 0) {
LAB_142b41dc9:
        local_88 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar8 + 0x48);
        local_88 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(lVar8 + 0x4c) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_142b41dc9;
          local_88 = *plVar9;
        }
      }
    }
    local_98 = *(longlong *)(lVar8 + 8);
    local_90 = *(longlong **)(lVar8 + 0x10);
    if (local_90 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)local_90 + 0xc) = *(int *)((longlong)local_90 + 0xc) + 1;
      UNLOCK();
      plVar9 = local_90;
    }
    local_78 = '\0';
    local_50 = 0;
    FUN_1402b8912(&local_78,&local_98,&local_88,&local_79);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    FUN_1447c3578(lVar7,param_1,&local_78);
    lVar8 = DAT_14c9a3da0;
    if ((longlong)local_50 != 0) {
      lVar12 = (longlong)local_50 + -1;
      lVar13 = lVar12 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
      if (*(longlong *)(lVar8 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar8 = DAT_14c9a3da0;
      iVar5 = (int)lVar12;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
      }
      *(undefined4 *)(lVar8 + lVar13) = 0xffffffff;
      iVar10 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar10 = DAT_14c9a3dd0;
      }
      *(int *)(lVar8 + 4 + lVar13) = iVar10;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar11 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar11 = DAT_14c9a3dc0;
      }
      iVar10 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar10 = iVar5;
      }
      bVar4 = (byte)lVar12 & 0x1f;
      DAT_14c9a3dd0 = iVar5;
      *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) =
           *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_50 = 0;
    }
    if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
LAB_142b41ad7:
  if (lVar7 != 0) goto LAB_142b41bb6;
LAB_142b41ae0:
  if (*(longlong *)(lVar6 + 0x40) != 0) {
    FUN_1470e4a4c(*(longlong *)(lVar6 + 0x40),param_1,param_2,param_3);
    goto LAB_142b41bb6;
  }
LAB_142b41aed:
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
LAB_142b41bb6:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b41dd0 FUN_142b41dd0 body=112 status=ok
// SIG undefined FUN_142b41dd0(void)

void FUN_142b41dd0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    lVar1 = FUN_144a7ef38();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) break;
    param_3 = *(longlong *)(param_3 + 0x20);
  }
  lVar1 = FUN_140c58ad8(param_1,*(longlong *)(param_3 + 0x30) + 0x58);
  if (lVar1 == 0) {
    return;
  }
  FUN_142b45ec2(lVar1,param_2,param_3);
  return;
}



// FUNCTION 142b41e40 FUN_142b41e40 body=303 status=ok
// SIG undefined FUN_142b41e40(void)

undefined8 FUN_142b41e40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  if (param_1 != 0) {
    lVar1 = FUN_144a7ef38();
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      do {
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (lVar4 = lVar2,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0));
      uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 != 0);
      goto LAB_142b41eb6;
    }
  }
  uVar3 = 0;
LAB_142b41eb6:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b41f84 FUN_142b41f84 body=49 status=ok
// SIG undefined FUN_142b41f84(void)

void FUN_142b41f84(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = FUN_1405774e2(param_2);
    if (lVar1 != 0) {
      FUN_1470e4bae(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142b41fb6 FUN_142b41fb6 body=51 status=ok
// SIG undefined FUN_142b41fb6(void)

bool FUN_142b41fb6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((*param_1 != 0) && (lVar1 = FUN_14049cbd6(param_2), lVar1 != 0)) {
    lVar1 = FUN_1405774e2(param_2);
    return lVar1 != 0;
  }
  return false;
}



// FUNCTION 142b41fea FUN_142b41fea body=3387 status=ok
// SIG undefined FUN_142b41fea(void)

longlong * FUN_142b41fea(longlong *param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  uint *puVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  int iVar34;
  longlong lVar35;
  uint uVar36;
  bool bVar37;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong *local_c0;
  int local_b4;
  uint *local_b0;
  longlong local_a8;
  longlong local_a0;
  char *local_98;
  longlong local_90;
  longlong *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((*param_2 != 0) && ((longlong *)*param_4 != (longlong *)0x0 && (int)param_4[1] != 0)) &&
      (cVar15 = (**(code **)(*(longlong *)*param_4 + 0x30))(), cVar15 != '\0')) &&
     ((lVar19 = FUN_1405774e2(param_3), lVar19 != 0 && (*param_2 != 0)))) {
    cVar15 = *param_3;
    if (cVar15 == '\x01') {
      if (*(longlong *)(param_3 + 8) == 0) goto LAB_142b42074;
    }
    else if (cVar15 == '\x02') {
      if (((*(int *)(param_3 + 0xc) == 0) || (uVar17 = *(uint *)(param_3 + 8), (int)uVar17 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar17 ||
          (((lVar20 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8), lVar20 == 0 ||
            (*(int *)(lVar20 + 0x10) != *(int *)(param_3 + 0xc))) ||
           ((*(uint *)(lVar20 + 8) & 0x10200000) != 0)))))) goto LAB_142b42074;
    }
    else if (((cVar15 != '\x03') || (*(longlong *)(param_3 + 8) == 0)) ||
            ((*(longlong *)(param_3 + 0x10) == 0 ||
             (*(int *)(*(longlong *)(param_3 + 0x10) + 8) < 1)))) goto LAB_142b42074;
    if ((((int)param_4[1] != 0) && ((longlong *)*param_4 != (longlong *)0x0)) &&
       (cVar15 = (**(code **)(*(longlong *)*param_4 + 0x30))(), pcVar14 = param_3, cVar15 != '\0'))
    {
      do {
        local_98 = pcVar14;
        local_a0 = FUN_1402b888a(param_2,lVar19 + 0x90);
        if (local_a0 == 0) {
          *param_1 = 0;
        }
        else {
          local_c0 = (longlong *)(lVar19 + 0xa0);
          lVar20 = *param_2;
          uVar17 = (uint)((ulonglong)lVar20 >> 0x10);
          uVar30 = (uint)lVar20 & 0xffff;
          uVar36 = ((uint)lVar20 << 0x10 | uVar30) + (int)((ulonglong)lVar20 >> 0x20) +
                   (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar30 >> 4);
          uVar17 = *(uint *)(lVar19 + 0xa8);
          uVar23 = (ulonglong)uVar17;
          uVar30 = *(uint *)(lVar19 + 0xd4);
          if (uVar17 != uVar30) {
            lVar32 = lVar19 + 0xd8;
            if (*(longlong *)(lVar19 + 0xe0) != 0) {
              lVar32 = *(longlong *)(lVar19 + 0xe0);
            }
            iVar27 = *(int *)(lVar32 + (ulonglong)(*(int *)(lVar19 + 0xe8) - 1U & uVar36) * 4);
            if (iVar27 != -1) {
              do {
                lVar32 = *local_c0 + (longlong)iVar27 * 0x38;
                if (*(longlong *)(*local_c0 + (longlong)iVar27 * 0x38) == lVar20) {
                  if (lVar32 != 0) goto LAB_142b424aa;
                  break;
                }
                iVar27 = *(int *)(lVar32 + 0x30);
              } while (iVar27 != -1);
            }
          }
          if (uVar30 == 0) {
            *(uint *)(lVar19 + 0xa8) = uVar17 + 1;
            if (*(uint *)(lVar19 + 0xac) == uVar17) {
              FUN_1447030e2(local_c0,uVar23);
            }
            iVar27 = *(int *)(lVar19 + 200);
            if (iVar27 == 0) {
              iVar16 = -1;
            }
            else {
              iVar16 = iVar27 + 0x1e;
              if (-1 < iVar27 + -1) {
                iVar16 = iVar27 + -1;
              }
              iVar16 = iVar16 >> 5;
            }
            puVar22 = (uint *)(lVar19 + 0xb0);
            iVar31 = iVar27 + 1;
            iVar34 = iVar27 + 0x1f;
            if (-1 < iVar27) {
              iVar34 = iVar27;
            }
            local_c8 = uVar23;
            if (iVar34 >> 5 == iVar16) {
              *(int *)(lVar19 + 200) = iVar31;
            }
            else {
              if (*(int *)(lVar19 + 0xcc) <= iVar27) {
                iVar16 = iVar27;
                local_b0 = puVar22;
                if (iVar27 + 0x20U < 0xa0) {
                  iVar31 = 0x80;
                }
                else {
                  uVar17 = iVar27 + 0x20U >> 5;
                  if (*(int *)(lVar19 + 0xcc) + 0x1fU < 0xa0) {
                    uVar30 = 4;
                    if (4 < uVar17) {
                      uVar30 = uVar17;
                    }
                  }
                  else {
                    uVar30 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
                  }
                  uVar23 = (ulonglong)(uVar30 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar18 = (uint)(uVar23 + 0xf);
                      if (uVar30 < 0x1ffd) {
                        uVar23 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar23 + 0xf >> 4]];
                      }
                      else {
                        uVar26 = (ulonglong)(uVar18 & 0xfffffff0);
                        if (uVar26 < 0x7ff1) {
                          bVar21 = (&DAT_14c841e00)[uVar18 >> 4];
                          uVar29 = 0x32;
                          if (0x32 < bVar21) {
                            uVar29 = (ulonglong)bVar21;
                          }
                          uVar33 = 0x32 - (ulonglong)bVar21;
                          do {
                            uVar23 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar33 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar33 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b42a75;
                            lVar20 = uVar29 + 1 + uVar33;
                            uVar33 = uVar33 - 1;
                          } while (lVar20 != 0x33);
                        }
                        uVar23 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar23 = 0x10;
                        }
                        uVar23 = -uVar23 & (uVar26 + uVar23) - 1;
                      }
                    }
                    else {
                      uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                      iVar16 = *(int *)(lVar19 + 200);
                    }
                  }
LAB_142b42a75:
                  iVar24 = (int)(uVar23 >> 2);
                  iVar31 = iVar24 << 5;
                  if (iVar24 < (int)uVar17) {
                    iVar31 = -0x20;
                  }
                }
                puVar22 = local_b0;
                *(int *)(lVar19 + 0xcc) = iVar31;
                FUN_1446efbd8(local_b0,iVar16);
                iVar31 = *(int *)(lVar19 + 200) + 1;
              }
              iVar16 = iVar31 + 0x1f;
              if (-1 < iVar31) {
                iVar16 = iVar31;
              }
              *(int *)(lVar19 + 200) = iVar31;
              if (iVar31 % 0x20 != 0) {
                lVar20 = *(longlong *)(lVar19 + 0xc0);
                if (*(longlong *)(lVar19 + 0xc0) == 0) {
                  lVar20 = (longlong)puVar22;
                }
                bVar21 = -(char)(iVar31 % 0x20);
                *(uint *)(lVar20 + (longlong)(iVar16 >> 5) * 4) =
                     (uint)(*(int *)(lVar20 + (longlong)(iVar16 >> 5) * 4) << (bVar21 & 0x1f)) >>
                     (bVar21 & 0x1f);
              }
            }
            lVar20 = (longlong)(int)local_c8;
            if (*(longlong *)(lVar19 + 0xc0) != 0) {
              puVar22 = (uint *)*(longlong *)(lVar19 + 0xc0);
            }
            bVar21 = (byte)iVar27 & 0x1f;
            puVar22 = (uint *)((longlong)puVar22 + (longlong)(iVar34 >> 5) * 4);
            *puVar22 = *puVar22 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
          }
          else {
            local_c8 = (ulonglong)*(uint *)(lVar19 + 0xd0);
            lVar20 = (longlong)(int)*(uint *)(lVar19 + 0xd0);
            iVar27 = *(int *)(*(longlong *)(lVar19 + 0xa0) + 4 + lVar20 * 0x38);
            *(int *)(lVar19 + 0xd0) = iVar27;
            *(uint *)(lVar19 + 0xd4) = uVar30 - 1;
            if (uVar30 - 1 != 0) {
              *(undefined4 *)(*(longlong *)(lVar19 + 0xa0) + (longlong)iVar27 * 0x38) = 0xffffffff;
            }
          }
          local_b0 = (uint *)(lVar19 + 0xb0);
          iVar27 = (int)local_c8;
          puVar22 = *(uint **)(lVar19 + 0xc0);
          if (*(uint **)(lVar19 + 0xc0) == (uint *)0x0) {
            puVar22 = local_b0;
          }
          iVar16 = iVar27 + 0x1f;
          if (-1 < iVar27) {
            iVar16 = iVar27;
          }
          puVar22[iVar16 >> 5] = puVar22[iVar16 >> 5] | 1 << ((byte)local_c8 & 0x1f);
          lVar32 = *(longlong *)(lVar19 + 0xa0);
          local_88 = (longlong *)0x0;
          uStack_80 = 0;
          local_78 = 2;
          local_70 = 0;
          puVar3 = (undefined8 *)(lVar32 + 0x10 + lVar20 * 0x38);
          *(int *)(puVar3 + -1) = (int)param_2[1];
          puVar3[-2] = *param_2;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 2;
          FUN_14019d794(puVar3,&local_88);
          puVar3[3] = local_70;
          FUN_144760e21(local_88,uStack_80 & 0xffffffff);
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          plVar28 = (longlong *)(lVar32 + lVar20 * 0x38);
          *(undefined4 *)(plVar28 + 6) = 0xffffffff;
          uVar17 = *(int *)(lVar19 + 0xa8) - *(int *)(lVar19 + 0xd4);
          if (1 < uVar17) {
            lVar20 = lVar19 + 0xd8;
            if (*(longlong *)(lVar19 + 0xe0) != 0) {
              lVar20 = *(longlong *)(lVar19 + 0xe0);
            }
            iVar27 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar19 + 0xe8) - 1U & uVar36) * 4);
            if (iVar27 != -1) {
              do {
                puVar1 = (undefined4 *)(*local_c0 + (longlong)iVar27 * 0x38);
                if (*(longlong *)(*local_c0 + (longlong)iVar27 * 0x38) == *plVar28) {
                  FUN_144760e21(*(undefined8 *)(puVar1 + 4),puVar1[6]);
                  if (*(longlong *)(puVar1 + 4) != 0) {
                    FUN_1400020a8();
                  }
                  lVar20 = *plVar28;
                  uVar6 = *(undefined4 *)((longlong)plVar28 + 4);
                  lVar32 = plVar28[1];
                  uVar7 = *(undefined4 *)((longlong)plVar28 + 0xc);
                  lVar35 = plVar28[2];
                  uVar8 = *(undefined4 *)((longlong)plVar28 + 0x14);
                  lVar12 = plVar28[3];
                  uVar9 = *(undefined4 *)((longlong)plVar28 + 0x1c);
                  uVar10 = *(undefined4 *)((longlong)plVar28 + 0x24);
                  lVar13 = plVar28[5];
                  uVar11 = *(undefined4 *)((longlong)plVar28 + 0x2c);
                  puVar1[8] = (int)plVar28[4];
                  puVar1[9] = uVar10;
                  puVar1[10] = (int)lVar13;
                  puVar1[0xb] = uVar11;
                  puVar1[4] = (int)lVar35;
                  puVar1[5] = uVar8;
                  puVar1[6] = (int)lVar12;
                  puVar1[7] = uVar9;
                  *puVar1 = (int)lVar20;
                  puVar1[1] = uVar6;
                  puVar1[2] = (int)lVar32;
                  puVar1[3] = uVar7;
                  iVar27 = (int)local_c8;
                  FUN_142b44724(local_c0,local_c8 & 0xffffffff);
                  goto LAB_142b42490;
                }
                iVar27 = puVar1[0xc];
              } while (iVar27 != -1);
            }
          }
          uVar30 = 1;
          if (3 < uVar17) {
            uVar23 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
            lVar20 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar30 = 1 << ((byte)lVar20 & 0x1f);
          }
          if (((int)uVar17 < 1) || ((int)uVar30 <= *(int *)(lVar19 + 0xe8))) {
            uVar36 = *(int *)(lVar19 + 0xe8) - 1U & uVar36;
            *(uint *)((longlong)plVar28 + 0x34) = uVar36;
            lVar20 = *(longlong *)(lVar19 + 0xe0);
            if (*(longlong *)(lVar19 + 0xe0) == 0) {
              lVar20 = lVar19 + 0xd8;
            }
            *(undefined4 *)(plVar28 + 6) =
                 *(undefined4 *)
                  (lVar20 + ((longlong)*(int *)(lVar19 + 0xe8) - 1U & (longlong)(int)uVar36) * 4);
            lVar20 = *(longlong *)(lVar19 + 0xe0);
            if (*(longlong *)(lVar19 + 0xe0) == 0) {
              lVar20 = lVar19 + 0xd8;
            }
            iVar27 = (int)local_c8;
            *(int *)(lVar20 + ((longlong)*(int *)(lVar19 + 0xe8) - 1U & (longlong)(int)uVar36) * 4)
                 = iVar27;
          }
          else {
            *(uint *)(lVar19 + 0xe8) = uVar30;
            plVar28 = (longlong *)(lVar19 + 0xe0);
            if (*(longlong *)(lVar19 + 0xe0) != 0) {
              FUN_1446efa72(plVar28,0,0,4);
              uVar30 = *(uint *)(lVar19 + 0xe8);
            }
            local_a8 = lVar19 + 0xd8;
            iVar27 = (int)local_c8;
            if (uVar30 == 1) {
              if (*plVar28 != 0) {
                FUN_1446efa72(plVar28,0,0,4);
              }
LAB_142b426d4:
              uVar17 = 0;
              do {
                lVar20 = *(longlong *)(lVar19 + 0xe0);
                if (*(longlong *)(lVar19 + 0xe0) == 0) {
                  lVar20 = local_a8;
                }
                *(undefined4 *)
                 (lVar20 + (ulonglong)(*(int *)(lVar19 + 0xe8) + 0x7fffffffU & uVar17) * 4) =
                     0xffffffff;
                uVar17 = uVar17 + 1;
              } while (uVar30 != uVar17);
            }
            else {
              if (uVar30 == 0) goto LAB_142b42490;
              FUN_1446efa72(plVar28,0,uVar30,4);
              if (0 < (int)uVar30) goto LAB_142b426d4;
            }
            iVar16 = *(int *)(lVar19 + 200);
            if (iVar16 == 0) {
              uVar23 = 0;
              uVar26 = 1;
              iVar34 = 0;
              iVar31 = 0;
            }
            else {
              puVar22 = *(uint **)(lVar19 + 0xc0);
              if (*(uint **)(lVar19 + 0xc0) == (uint *)0x0) {
                puVar22 = local_b0;
              }
              uVar17 = *puVar22;
              if (uVar17 == 0) {
                iVar31 = iVar16 + 0x1e;
                if (-1 < iVar16 + -1) {
                  iVar31 = iVar16 + -1;
                }
                uVar23 = 0;
                uVar30 = iVar31 >> 5;
                if (iVar31 >> 5 < 1) {
                  uVar30 = 0;
                }
                iVar31 = 0;
                do {
                  if (uVar30 == uVar23) goto LAB_142b42490;
                  iVar31 = iVar31 + 0x20;
                  uVar17 = puVar22[uVar23 + 1];
                  uVar23 = uVar23 + 1;
                } while (uVar17 == 0);
              }
              else {
                uVar23 = 0;
                iVar31 = 0;
              }
              uVar26 = (ulonglong)(-uVar17 & uVar17);
              uVar29 = uVar26 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar34 = (iVar31 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar16 <= iVar34) {
                iVar34 = iVar16;
              }
            }
            if (iVar34 < iVar16) {
              uVar17 = 0xffffffff;
              do {
                local_b4 = iVar31;
                lVar20 = *(longlong *)(lVar19 + 0xa0);
                lVar35 = (longlong)iVar34 * 0x38;
                uVar5 = *(undefined8 *)(lVar20 + lVar35);
                uVar30 = (uint)((ulonglong)uVar5 >> 0x10);
                uVar36 = (uint)uVar5 & 0xffff;
                uVar29 = (longlong)
                         (int)(((uint)uVar5 << 0x10 | uVar36) + (int)((ulonglong)uVar5 >> 0x20) +
                               (uVar30 << 0x13 | uVar30 & 0xffff) + (uVar36 >> 4)) &
                         (longlong)*(int *)(lVar19 + 0xe8) - 1U;
                iVar27 = (int)uVar29;
                *(int *)(lVar20 + 0x34 + lVar35) = iVar27;
                lVar32 = *(longlong *)(lVar19 + 0xe0);
                if (*(longlong *)(lVar19 + 0xe0) == 0) {
                  lVar32 = local_a8;
                }
                *(undefined4 *)(lVar20 + 0x30 + lVar35) =
                     *(undefined4 *)(lVar32 + ((longlong)*(int *)(lVar19 + 0xe8) - 1U & uVar29) * 4)
                ;
                lVar20 = *(longlong *)(lVar19 + 0xe0);
                if (*(longlong *)(lVar19 + 0xe0) == 0) {
                  lVar20 = local_a8;
                }
                *(int *)(lVar20 + ((longlong)iVar27 & (longlong)*(int *)(lVar19 + 0xe8) - 1U) * 4) =
                     iVar34;
                uVar17 = ~(uint)uVar26 & uVar17;
                puVar22 = *(uint **)(lVar19 + 0xc0);
                if (*(uint **)(lVar19 + 0xc0) == (uint *)0x0) {
                  puVar22 = local_b0;
                }
                iVar16 = *(int *)(lVar19 + 200);
                iVar34 = (int)uVar23;
                lVar20 = (longlong)iVar34;
                uVar30 = puVar22[lVar20] & uVar17;
                iVar27 = (int)local_c8;
                iVar31 = local_b4;
                if (uVar30 == 0) {
                  iVar24 = iVar16 + 0x1e;
                  if (-1 < iVar16 + -1) {
                    iVar24 = iVar16 + -1;
                  }
                  iVar24 = iVar24 >> 5;
                  iVar25 = iVar24;
                  if (iVar24 < iVar34) {
                    iVar25 = iVar34;
                  }
                  if (iVar24 <= iVar34) break;
                  lVar32 = 0;
                  while( true ) {
                    iVar31 = iVar31 + 0x20;
                    uVar30 = puVar22[lVar20 + lVar32 + 1];
                    if (uVar30 != 0) break;
                    lVar32 = lVar32 + 1;
                    if (iVar25 - lVar20 == lVar32) goto LAB_142b42490;
                  }
                  uVar23 = (ulonglong)(iVar34 + (int)lVar32 + 1);
                  uVar17 = 0xffffffff;
                }
                uVar26 = (ulonglong)(-uVar30 & uVar30);
                uVar29 = uVar26 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar29 != 0) {
                  for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar34 = (iVar31 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              } while (iVar34 < iVar16);
            }
          }
LAB_142b42490:
          lVar32 = *local_c0 + (longlong)iVar27 * 0x38;
LAB_142b424aa:
          plVar28 = (longlong *)(lVar32 + 0x10);
          if ((((*(longlong *)(lVar32 + 0x28) == 0) && (*(longlong *)(lVar19 + 8) != 0)) &&
              (*(longlong *)(lVar19 + 0x10) != 0)) &&
             ((0 < *(int *)(*(longlong *)(lVar19 + 0x10) + 8) &&
              (*(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(local_a0 + 0x28) * 0x120) != (code *)0x0)
              ))) {
            lVar20 = local_a0 + 8;
            cVar15 = (**(code **)(&DAT_14c9a85f0 + (uint)*(byte *)(local_a0 + 0x28) * 0x120))
                               (lVar20,local_98);
            if (cVar15 != '\0') {
              FUN_1402b964e(&local_88,lVar19,param_2);
              if (*(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(local_a0 + 0x28) * 0x120) ==
                  (code *)0x0) {
                local_90 = 0;
              }
              else {
                (**(code **)(&DAT_14c9a85f8 + (uint)*(byte *)(local_a0 + 0x28) * 0x120))
                          (&local_90,lVar20,local_98,&local_88);
              }
              *(longlong *)(lVar32 + 0x28) = local_90;
              if ((int)uStack_80 != 0) {
                if (local_88 == (longlong *)0x0) goto LAB_142b424ef;
                (**(code **)*local_88)(local_88,0);
                FUN_1446efa72(&local_88,0,0,0x10);
                uStack_80 = uStack_80 & 0xffffffff00000000;
              }
              if (local_88 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_142b424ef:
          local_88 = (longlong *)0x0;
          uStack_80 = uStack_80 & 0xffffffff00000000;
          FUN_141741876(&local_88,param_4);
          *param_1 = 0;
          if (((int)uStack_80 == 0) || (local_88 == (longlong *)0x0)) {
LAB_142b42b8b:
            if ((int)uStack_80 != 0) {
              if (local_88 == (longlong *)0x0) goto LAB_142b42b21;
              (**(code **)*local_88)(local_88,0);
              FUN_1446efa72(&local_88,0,0,0x10);
              lVar20 = 0;
              goto LAB_142b42629;
            }
            lVar20 = 0;
          }
          else {
            cVar15 = (**(code **)(*local_88 + 0x30))();
            if (cVar15 == '\0') {
              goto LAB_142b42b8b;
            }
            if (*(int *)(lVar32 + 0x24) < 1) {
              iVar27 = *(int *)(lVar32 + 0x18);
              iVar16 = *(int *)(lVar32 + 0x20) + -1;
              *(int *)(lVar32 + 0x20) = iVar16;
              if (iVar16 <= iVar27) {
                iVar16 = iVar27;
                if (0 < iVar27) {
                  iVar31 = 0;
                  do {
                    if (((*(int *)(*plVar28 + 8 + (longlong)iVar31 * 0x10) == 0) ||
                        (plVar4 = *(longlong **)(*plVar28 + (longlong)iVar31 * 0x10),
                        plVar4 == (longlong *)0x0)) ||
                       (cVar15 = (**(code **)(*plVar4 + 0x28))(), cVar15 != '\0')) {
                      FUN_14005b288(plVar28,iVar31);
                      FUN_14005b248(plVar28);
                    }
                    else {
                      iVar31 = iVar31 + 1;
                    }
                    iVar16 = *(int *)(lVar32 + 0x18);
                  } while (iVar31 < iVar16);
                }
                iVar31 = iVar16 * 2;
                if (iVar31 < 3) {
                  iVar31 = 2;
                }
                *(int *)(lVar32 + 0x20) = iVar31;
                if ((iVar31 < iVar27) && (*(int *)(lVar32 + 0x1c) != iVar16)) {
                  FUN_14045812c(plVar28);
                }
              }
            }
            if ((int)uStack_80 == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = 0;
              if (local_88 != (longlong *)0x0) {
                (**(code **)(*local_88 + 0x38))(local_88,&local_90);
                lVar20 = local_90;
              }
            }
            *param_1 = lVar20;
            iVar27 = *(int *)(lVar32 + 0x18);
            *(uint *)(lVar32 + 0x18) = iVar27 + 1U;
            if (*(uint *)(lVar32 + 0x1c) < iVar27 + 1U) {
              FUN_1447a71f6(plVar28,iVar27);
            }
            lVar32 = *plVar28;
            lVar35 = (longlong)iVar27 * 0x10;
            *(undefined8 *)(lVar32 + lVar35) = 0;
            *(undefined4 *)(lVar32 + 8 + lVar35) = 0;
            *(longlong **)(lVar32 + lVar35) = local_88;
            local_88 = (longlong *)0x0;
            *(int *)(lVar32 + 8 + lVar35) = (int)uStack_80;
LAB_142b42629:
            uStack_80 = uStack_80 & 0xffffffff00000000;
          }
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (lVar20 != 0) goto LAB_142b4207b;
        }
LAB_142b42b21:
        plVar28 = *(longlong **)(lVar19 + 0x58);
        if (plVar28 == (longlong *)0x0) break;
        iVar27 = (int)plVar28[1];
        do {
          if (iVar27 == 0) goto LAB_142b42074;
          LOCK();
          iVar16 = (int)plVar28[1];
          bVar37 = iVar27 == iVar16;
          if (bVar37) {
            *(int *)(plVar28 + 1) = iVar27 + 1;
            iVar16 = iVar27;
          }
          iVar27 = iVar16;
          UNLOCK();
        } while (!bVar37);
        lVar19 = *(longlong *)(lVar19 + 0x50);
        LOCK();
        plVar4 = plVar28 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar2 = (int *)((longlong)plVar28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
        }
        pcVar14 = local_98;
        if (lVar19 == 0) break;
      } while( true );
    }
  }
LAB_142b42074:
  *param_1 = 0;
LAB_142b4207b:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b42d26 FUN_142b42d26 body=746 status=ok
// SIG undefined FUN_142b42d26(void)

void FUN_142b42d26(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  bool bVar14;
  
  if (*param_1 == 0) {
    return;
  }
  if (*param_3 == 0) {
    return;
  }
  lVar6 = FUN_1405774e2(param_2);
  if (lVar6 == 0) {
    return;
  }
  plVar2 = (longlong *)(lVar6 + 0xa0);
  lVar7 = lVar6;
  do {
    if (*(int *)(lVar6 + 0xa8) != *(int *)(lVar6 + 0xd4)) {
      lVar11 = *param_1;
      uVar4 = (uint)((ulonglong)lVar11 >> 0x10);
      uVar9 = (uint)lVar11 & 0xffff;
      lVar8 = *(longlong *)(lVar6 + 0xe0);
      if (*(longlong *)(lVar6 + 0xe0) == 0) {
        lVar8 = lVar6 + 0xd8;
      }
      iVar10 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(lVar6 + 0xe8) - 1U &
                                (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar9) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar10 != -1) {
        do {
          lVar8 = *plVar2 + (longlong)iVar10 * 0x38;
          if (*(longlong *)(*plVar2 + (longlong)iVar10 * 0x38) == lVar11) {
            if ((lVar8 != 0) && (lVar8 != -0x10)) {
              if (*param_3 != 0) {
                FUN_14480f766();
              }
              if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
                lVar7 = 0;
                do {
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 8 + lVar7) != 0) &&
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar7) != 0)) {
                    return;
                  }
                  lVar7 = lVar7 + 0x10;
                } while ((longlong)*(int *)(lVar8 + 0x18) * 0x10 != lVar7);
              }
              if (*(longlong *)(lVar8 + 0x28) != 0) {
                lVar7 = FUN_1402b888a(param_1,lVar6 + 0x90);
                if ((lVar7 != 0) &&
                   (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar7 + 0x28) * 0x120) !=
                    (code *)0x0)) {
                  (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(lVar7 + 0x28) * 0x120))
                            (lVar7 + 8,param_2,(undefined8 *)(lVar8 + 0x28));
                }
                *(undefined8 *)(lVar8 + 0x28) = 0;
                if (*(int *)(lVar6 + 0xa8) != *(int *)(lVar6 + 0xd4)) {
                  lVar7 = *param_1;
                  uVar4 = (uint)((ulonglong)lVar7 >> 0x10);
                  uVar9 = (uint)lVar7 & 0xffff;
                  lVar11 = lVar6 + 0xd8;
                  if (*(longlong *)(lVar6 + 0xe0) != 0) {
                    lVar11 = *(longlong *)(lVar6 + 0xe0);
                  }
                  iVar10 = *(int *)(lVar11 + ((longlong)
                                              (int)(((uint)lVar7 << 0x10 | uVar9) +
                                                    (int)((ulonglong)lVar7 >> 0x20) +
                                                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4))
                                             & (longlong)*(int *)(lVar6 + 0xe8) - 1U) * 4);
                  if (iVar10 != -1) {
                    lVar6 = *plVar2;
                    do {
                      lVar12 = (longlong)iVar10 * 0x38;
                      lVar8 = lVar6 + lVar12;
                      if (*(longlong *)(lVar6 + lVar12) == lVar7) {
                        iVar5 = *(int *)(lVar11 + (longlong)*(int *)(lVar8 + 0x34) * 4);
                        if (iVar5 == iVar10) {
                          piVar13 = (int *)((longlong)*(int *)(lVar8 + 0x34) * 4 + lVar11);
                        }
                        else {
                          do {
                            piVar13 = (int *)(lVar6 + (longlong)iVar5 * 0x38 + 0x30);
                            iVar5 = *piVar13;
                          } while (iVar5 != iVar10);
                        }
                        *piVar13 = *(int *)(lVar8 + 0x30);
                        lVar6 = *plVar2;
                        FUN_144760e21(*(undefined8 *)(lVar6 + 0x10 + lVar12),
                                      *(undefined4 *)(lVar6 + 0x18 + lVar12));
                        if (*(longlong *)(lVar6 + 0x10 + lVar12) != 0) {
                          FUN_1400020a8();
                        }
                        FUN_142b44724(plVar2,iVar10);
                        return;
                      }
                      iVar10 = *(int *)(lVar8 + 0x30);
                    } while (iVar10 != -1);
                  }
                }
              }
              return;
            }
            break;
          }
          iVar10 = *(int *)(lVar8 + 0x30);
        } while (iVar10 != -1);
      }
    }
    plVar3 = *(longlong **)(lVar7 + 0x58);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    iVar10 = (int)plVar3[1];
    do {
      if (iVar10 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar14 = iVar10 == iVar5;
      if (bVar14) {
        *(int *)(plVar3 + 1) = iVar10 + 1;
        iVar5 = iVar10;
      }
      iVar10 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(lVar7 + 0x50);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar13 = (int *)((longlong)plVar3 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (lVar7 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 142b43010 FUN_142b43010 body=64 status=ok
// SIG undefined FUN_142b43010(void)

undefined8 * FUN_142b43010(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_149eb0140;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b43076 FUN_142b43076 body=2403 status=ok
// SIG undefined FUN_142b43076(void)

undefined8 FUN_142b43076(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  float fVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  dVar34 = (double)*(float *)(param_1 + 0x18);
  if (1.0 <= dVar34) {
    dVar34 = 1.0;
  }
  if (dVar34 <= 0.0) {
    dVar34 = 0.0;
  }
  *(float *)(param_1 + 0x18) = (float)dVar34;
  dVar34 = (double)*(float *)(param_1 + 0x1c);
  if (1.0 <= dVar34) {
    dVar34 = 1.0;
  }
  if (dVar34 <= 0.0) {
    dVar34 = 0.0;
  }
  *(float *)(param_1 + 0x1c) = (float)dVar34;
  lVar12 = 0x40;
  do {
    fVar4 = *(float *)(param_1 + -0x18 + lVar12);
    dVar35 = 0.0;
    dVar36 = 0.0;
    if (0.0 < fVar4) {
      dVar35 = (double)fVar4 / 1000.0;
      dVar36 = *(double *)(param_1 + -8 + lVar12) * (double)(float)dVar34;
    }
    *(double *)(param_1 + -0x10 + lVar12) = dVar35;
    *(double *)(param_1 + lVar12) = dVar36;
    lVar12 = lVar12 + 0x28;
  } while (lVar12 != 0x1a8);
  if (*(int *)(param_1 + 0x280) != *(int *)(param_1 + 0x2ac)) {
    plVar2 = (longlong *)(param_1 + 0x278);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
    puVar3 = (uint *)(param_1 + 0x288);
    iVar11 = *(int *)(param_1 + 0x2a0);
    if (iVar11 == 0) {
      uVar30 = 1;
      uVar32 = 0;
      iVar31 = 0;
      iVar19 = 0;
    }
    else {
      puVar21 = *(uint **)(param_1 + 0x298);
      if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
        puVar21 = puVar3;
      }
      uVar28 = *puVar21;
      if (uVar28 == 0) {
        iVar19 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar19 = iVar11 + -1;
        }
        uVar32 = 0;
        uVar30 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar30 = uVar32;
        }
        iVar31 = 0;
        do {
          if (uVar30 == uVar32) goto LAB_142b437a4;
          iVar31 = iVar31 + 0x20;
          uVar28 = puVar21[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar28 == 0);
      }
      else {
        uVar32 = 0;
        iVar31 = 0;
      }
      uVar30 = (ulonglong)(-uVar28 & uVar28);
      uVar17 = uVar30 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar19 = (iVar31 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar19) {
        iVar19 = iVar11;
      }
    }
    if (iVar19 < iVar11) {
      lVar12 = param_1 + 0x228;
      uVar28 = 0xffffffff;
      do {
        plVar5 = *(longlong **)(*plVar2 + (longlong)iVar19 * 0x10);
        cVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (cVar6 != '\x02') {
          uVar13 = (**(code **)(*plVar5 + 0x48))(plVar5);
          lVar14 = FUN_140be5900(param_1,uVar13);
          plVar15 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar15[1] = (longlong)&DAT_100000001;
          *plVar15 = (longlong)&PTR_FUN_14a1c9c80;
          plVar15[2] = (longlong)plVar5;
          uVar8 = (**(code **)(*plVar5 + 0x30))(plVar5);
          *(undefined4 *)(plVar15 + 3) = uVar8;
          uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
          *(undefined1 *)((longlong)plVar15 + 0x1c) = uVar7;
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
          if (*(int *)(param_1 + 0x24c) == 0) {
            iVar11 = *(int *)(param_1 + 0x220);
            *(int *)(param_1 + 0x220) = iVar11 + 1;
            if (*(int *)(param_1 + 0x224) == iVar11) {
              FUN_1446efaca(param_1 + 0x218,iVar11);
            }
            iVar19 = *(int *)(param_1 + 0x240);
            if (iVar19 == 0) {
              iVar23 = -1;
            }
            else {
              iVar23 = iVar19 + 0x1e;
              if (-1 < iVar19 + -1) {
                iVar23 = iVar19 + -1;
              }
              iVar23 = iVar23 >> 5;
            }
            iVar27 = iVar19 + 1;
            iVar26 = iVar19 + 0x1f;
            if (-1 < iVar19) {
              iVar26 = iVar19;
            }
            if (iVar26 >> 5 == iVar23) {
              *(int *)(param_1 + 0x240) = iVar27;
            }
            else {
              if (*(int *)(param_1 + 0x244) <= iVar19) {
                iVar23 = iVar19;
                if (iVar19 + 0x20U < 0xa0) {
                  iVar27 = 0x80;
                }
                else {
                  uVar20 = iVar19 + 0x20U >> 5;
                  if (*(int *)(param_1 + 0x244) + 0x1fU < 0xa0) {
                    uVar24 = 4;
                    if (4 < uVar20) {
                      uVar24 = uVar20;
                    }
                  }
                  else {
                    uVar24 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
                  }
                  uVar17 = (ulonglong)(uVar24 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar9 = (uint)(uVar17 + 0xf);
                      if (uVar24 < 0x1ffd) {
                        uVar17 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
                      }
                      else {
                        uVar22 = (ulonglong)(uVar9 & 0xfffffff0);
                        if (uVar22 < 0x7ff1) {
                          bVar18 = (&DAT_14c841e00)[uVar9 >> 4];
                          uVar25 = 0x32;
                          if (0x32 < bVar18) {
                            uVar25 = (ulonglong)bVar18;
                          }
                          uVar29 = 0x32 - (ulonglong)bVar18;
                          do {
                            uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0)
                            goto LAB_142b4365f;
                            lVar33 = uVar25 + 1 + uVar29;
                            uVar29 = uVar29 - 1;
                          } while (lVar33 != 0x33);
                        }
                        uVar17 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar17 = 0x10;
                        }
                        uVar17 = -uVar17 & (uVar22 + uVar17) - 1;
                      }
                    }
                    else {
                      uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                      iVar23 = *(int *)(param_1 + 0x240);
                    }
                  }
LAB_142b4365f:
                  iVar10 = (int)(uVar17 >> 2);
                  iVar27 = iVar10 << 5;
                  if (iVar10 < (int)uVar20) {
                    iVar27 = -0x20;
                  }
                }
                *(int *)(param_1 + 0x244) = iVar27;
                FUN_1446efbd8(lVar12,iVar23);
                iVar27 = *(int *)(param_1 + 0x240) + 1;
              }
              iVar23 = iVar27 + 0x1f;
              if (-1 < iVar27) {
                iVar23 = iVar27;
              }
              *(int *)(param_1 + 0x240) = iVar27;
              if (iVar27 % 0x20 != 0) {
                lVar33 = *(longlong *)(param_1 + 0x238);
                if (*(longlong *)(param_1 + 0x238) == 0) {
                  lVar33 = lVar12;
                }
                bVar18 = -(char)(iVar27 % 0x20);
                *(uint *)(lVar33 + (longlong)(iVar23 >> 5) * 4) =
                     (uint)(*(int *)(lVar33 + (longlong)(iVar23 >> 5) * 4) << (bVar18 & 0x1f)) >>
                     (bVar18 & 0x1f);
              }
            }
            lVar16 = (longlong)iVar11;
            lVar33 = *(longlong *)(param_1 + 0x238);
            if (*(longlong *)(param_1 + 0x238) == 0) {
              lVar33 = lVar12;
            }
            bVar18 = (byte)iVar19 & 0x1f;
            puVar21 = (uint *)(lVar33 + (longlong)(iVar26 >> 5) * 4);
            *puVar21 = *puVar21 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
          }
          else {
            iVar11 = *(int *)(param_1 + 0x248);
            lVar16 = (longlong)iVar11;
            iVar19 = *(int *)(*(longlong *)(param_1 + 0x218) + 4 + lVar16 * 0x10);
            *(int *)(param_1 + 0x248) = iVar19;
            iVar23 = *(int *)(param_1 + 0x24c) + -1;
            *(int *)(param_1 + 0x24c) = iVar23;
            if (iVar23 != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x218) + (longlong)iVar19 * 0x10) = 0xffffffff
              ;
            }
          }
          lVar33 = *(longlong *)(param_1 + 0x238);
          if (*(longlong *)(param_1 + 0x238) == 0) {
            lVar33 = lVar12;
          }
          iVar19 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar19 = iVar11;
          }
          puVar21 = (uint *)(lVar33 + (longlong)(iVar19 >> 5) * 4);
          *puVar21 = *puVar21 | 1 << ((byte)iVar11 & 0x1f);
          lVar33 = *(longlong *)(param_1 + 0x218);
          *(longlong **)(lVar33 + lVar16 * 0x10) = plVar15 + 2;
          *(longlong **)(lVar33 + 8 + lVar16 * 0x10) = plVar15;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
          }
          *(int *)(plVar5 + 1) = iVar11;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
          uVar13 = (**(code **)(*plVar5 + 0x50))(plVar5);
          if ((*(int *)(lVar14 + 0x48) != 0) || (uVar8 = 8, *(int *)(lVar14 + 0x4c) != 0)) {
            uVar8 = (undefined4)plVar15[3];
          }
          lVar14 = FUN_140be57e8(lVar14,uVar8);
          iVar11 = *(int *)(lVar14 + 0x28);
          *(uint *)(lVar14 + 0x28) = iVar11 + 1U;
          if (*(uint *)(lVar14 + 0x2c) < iVar11 + 1U) {
            FUN_1462b1bb0((longlong *)(lVar14 + 0x20),iVar11);
          }
          lVar14 = *(longlong *)(lVar14 + 0x20);
          if (plVar15 == (longlong *)0x0) {
            lVar33 = (longlong)iVar11 * 0x20;
            *(undefined8 *)(lVar14 + lVar33) = 0x10;
            *(undefined8 *)(lVar14 + 8 + lVar33) = 0;
            *(undefined8 *)(lVar14 + 0x10 + lVar33) = uVar13;
            *(undefined8 *)(lVar14 + 0x18 + lVar33) = 0;
          }
          else {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            lVar33 = (longlong)iVar11 * 0x20;
            *(longlong **)(lVar14 + lVar33) = plVar15 + 2;
            *(longlong **)(lVar14 + 8 + lVar33) = plVar15;
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            *(undefined8 *)(lVar14 + 0x10 + lVar33) = uVar13;
            *(undefined8 *)(lVar14 + 0x18 + lVar33) = 0;
            LOCK();
            plVar5 = plVar15 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
            LOCK();
            plVar5 = plVar15 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        uVar28 = uVar28 & ~(uint)uVar30;
        puVar21 = *(uint **)(param_1 + 0x298);
        if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
          puVar21 = puVar3;
        }
        iVar11 = *(int *)(param_1 + 0x2a0);
        iVar19 = (int)uVar32;
        lVar14 = (longlong)iVar19;
        uVar20 = puVar21[lVar14] & uVar28;
        if (uVar20 == 0) {
          iVar23 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar23 = iVar11 + -1;
          }
          iVar23 = iVar23 >> 5;
          iVar27 = iVar23;
          if (iVar23 < iVar19) {
            iVar27 = iVar19;
          }
          if (iVar23 <= iVar19) break;
          lVar33 = 0;
          while( true ) {
            iVar31 = iVar31 + 0x20;
            uVar20 = puVar21[lVar14 + lVar33 + 1];
            if (uVar20 != 0) break;
            lVar33 = lVar33 + 1;
            if (iVar27 - lVar14 == lVar33) goto LAB_142b437a4;
          }
          uVar32 = (ulonglong)(iVar19 + (int)lVar33 + 1);
          uVar28 = 0xffffffff;
        }
        uVar30 = (ulonglong)(-uVar20 & uVar20);
        uVar17 = uVar30 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar19 = (iVar31 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar19 < iVar11);
    }
LAB_142b437a4:
    iVar19 = *(int *)(param_1 + 0x2c0);
    if (iVar19 < 2) {
      lVar12 = param_1 + 0x2b0;
      if (*(longlong *)(param_1 + 0x2b8) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x2b8);
      }
      iVar31 = iVar19 + 3;
      if (-1 < iVar19) {
        iVar31 = iVar19;
      }
      if (*(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x2ac) < iVar31 >> 2) {
        if (iVar11 != 0) {
          puVar21 = *(uint **)(param_1 + 0x298);
          if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
            puVar21 = puVar3;
          }
          uVar28 = *puVar21;
          if (uVar28 == 0) {
            iVar19 = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              iVar19 = iVar11 + -1;
            }
            uVar30 = 0;
            uVar32 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar32 = uVar30;
            }
            iVar19 = 0;
            do {
              if (uVar32 == uVar30) goto LAB_142b43806;
              iVar19 = iVar19 + 0x20;
              uVar28 = puVar21[uVar30 + 1];
              uVar30 = uVar30 + 1;
            } while (uVar28 == 0);
          }
          else {
            uVar30 = 0;
            iVar19 = 0;
          }
          uVar17 = (ulonglong)(-uVar28 & uVar28);
          uVar32 = uVar17 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar31 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar31 < iVar11) {
            uVar28 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar12 + (longlong)
                         *(int *)(*(longlong *)(param_1 + 0x278) + 0xc + (longlong)iVar31 * 0x10) *
                         4) = 0xffffffff;
              uVar28 = ~(uint)uVar17 & uVar28;
              puVar21 = *(uint **)(param_1 + 0x298);
              if (*(uint **)(param_1 + 0x298) == (uint *)0x0) {
                puVar21 = puVar3;
              }
              iVar23 = *(int *)(param_1 + 0x2a0);
              iVar31 = (int)uVar30;
              lVar14 = (longlong)iVar31;
              uVar20 = puVar21[lVar14] & uVar28;
              if (uVar20 == 0) {
                iVar27 = iVar23 + 0x1e;
                if (-1 < iVar23 + -1) {
                  iVar27 = iVar23 + -1;
                }
                iVar27 = iVar27 >> 5;
                iVar19 = iVar19 + 0x20;
                iVar26 = iVar27;
                if (iVar27 < iVar31) {
                  iVar26 = iVar31;
                }
                if (iVar31 < iVar27) {
                  lVar33 = 0;
                  do {
                    uVar20 = puVar21[lVar14 + lVar33 + 1];
                    if (uVar20 != 0) {
                      uVar30 = (ulonglong)(iVar31 + (int)lVar33 + 1);
                      uVar28 = 0xffffffff;
                      goto LAB_142b43982;
                    }
                    iVar19 = iVar19 + 0x20;
                    lVar33 = lVar33 + 1;
                  } while (iVar26 - lVar14 != lVar33);
                  uVar28 = 0xffffffff;
                  iVar31 = iVar26;
                }
                uVar30 = (ulonglong)(iVar31 + 1);
                iVar31 = iVar23;
              }
              else {
LAB_142b43982:
                uVar17 = (ulonglong)(-uVar20 & uVar20);
                uVar32 = uVar17 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                iVar31 = (iVar19 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if (iVar23 <= iVar31) {
                  iVar31 = iVar23;
                }
              }
            } while (iVar31 != iVar11);
          }
        }
      }
      else if (iVar19 == 1) {
        lVar14 = 0;
        do {
          *(undefined4 *)(lVar12 + lVar14 * 4) = 0xffffffff;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(param_1 + 0x2c0));
      }
LAB_142b43806:
      FUN_14155b898(plVar2);
    }
    else {
      FUN_14155b898(plVar2);
      *(undefined4 *)(param_1 + 0x2c0) = 1;
      FUN_140e68bfe(plVar2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  }
  return 1;
}



// FUNCTION 142b439de FUN_142b439de body=2934 status=ok
// SIG undefined FUN_142b439de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b439de(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  LARGE_INTEGER *pLVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  byte bVar24;
  undefined4 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  longlong *plVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  LPCRITICAL_SECTION local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  int *local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140 [8];
  LARGE_INTEGER *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  lVar20 = DAT_14c9a7d48;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (DAT_14c9a7d48 == 0) goto LAB_142b4447a;
  local_190 = DAT_14c9a7d48;
  if (((((*(int *)(param_1 + 0xc) == 0) || (uVar9 = *(uint *)(param_1 + 8), (int)uVar9 < 0)) ||
       (DAT_14c9647dc <= (int)uVar9)) ||
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + 0xc))))) ||
     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) {
    lVar22 = DAT_14c9a7d48 + (longlong)*(int *)(param_1 + 0x10) * 0x28 + 0x28;
    local_194 = (undefined4)
                CONCAT71((int7)((ulonglong)((longlong)*(int *)(param_1 + 0x10) * 5) >> 8),1);
LAB_142b43bdb:
    lVar26 = 0;
    local_180 = 0;
  }
  else {
    lVar26 = *plVar18;
    lVar22 = DAT_14c9a7d48 + (longlong)*(int *)(param_1 + 0x10) * 0x28 + 0x28;
    local_194 = (undefined4)
                CONCAT71((int7)((ulonglong)((longlong)*(int *)(param_1 + 0x10) * 5) >> 8),1);
    if (lVar26 == 0) goto LAB_142b43bdb;
    if ((((*(longlong *)(lVar26 + 0x30) != 0) &&
         (lVar11 = *(longlong *)(*(longlong *)(lVar26 + 0x30) + 0x2b0), lVar11 != 0)) &&
        ((*(longlong *)(lVar11 + 0x588) != 0 &&
         (*(double *)(lVar26 + 0x708) <= *(double *)(lVar26 + 0x6d0))))) ||
       (((*(byte *)(lVar26 + 0x154) & 0x40) != 0 &&
        (lVar11 = FUN_14490d72a(lVar26), (int)lVar11 == 3)))) {
      local_180 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
    }
    else {
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
        lVar11 = (longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8;
        lVar19 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar19);
          if (*(longlong *)(lVar4 + 0x360) == lVar26) {
            if ((lVar4 != 0) &&
               (local_180 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1),
               (*(byte *)(lVar4 + 0x278) & 1) != 0)) goto LAB_142b43b9b;
            break;
          }
          lVar19 = lVar19 + 8;
        } while (lVar11 != lVar19);
      }
      uVar15 = FUN_144a80e00(lVar26);
      lVar20 = local_190;
      if ((char)uVar15 == '\0') {
        local_180 = 0;
      }
      else {
        local_180 = CONCAT71((int7)((ulonglong)uVar15 >> 8),*(byte *)(lVar26 + 0x155) >> 7);
      }
    }
LAB_142b43b9b:
    bVar24 = *(byte *)(lVar26 + 0x152);
    if ((bVar24 != 1) && ((6 < bVar24 || ((0x68U >> (bVar24 & 0x1f) & 1) == 0)))) {
      local_194 = 0;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar20 + 0x1f0);
  local_178 = lVar22;
  EnterCriticalSection(lpCriticalSection);
  plVar18 = (longlong *)(param_1 + 0x20);
  local_170 = lpCriticalSection;
  local_168 = plVar18;
  local_160 = param_1;
  if (*(double *)(lVar22 + 8) <= 0.0) {
    QueryPerformanceCounter(local_140);
    uVar25 = local_194;
    dVar6 = (double)local_140[0].QuadPart * DAT_14c83f420;
    iVar17 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar17 == 0) {
      local_190 = (ulonglong)local_190._4_4_ << 0x20;
    }
    else {
      lVar22 = *(longlong *)(param_1 + 0x20);
      local_188 = lVar20 + 0x218;
      lVar11 = 0;
      local_190 = (ulonglong)local_190._4_4_ << 0x20;
      do {
        lVar19 = *(longlong *)(lVar22 + 8 + lVar11);
        if ((lVar19 == 0) || (uVar9 = *(uint *)(lVar19 + 8), uVar13 = (ulonglong)uVar9, uVar9 != 1))
        {
          uVar9 = *(uint *)((longlong *)**(longlong **)(lVar22 + lVar11) + 1);
          uVar13 = (ulonglong)uVar9;
          lVar19 = *(longlong *)(lVar20 + 0x238);
          if (*(longlong *)(lVar20 + 0x238) == 0) {
            lVar19 = lVar20 + 0x228;
          }
          uVar27 = uVar9 + 0x1f;
          if (-1 < (int)uVar9) {
            uVar27 = uVar9;
          }
          if ((*(uint *)(lVar19 + (longlong)((int)uVar27 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)
          goto LAB_142b4401e;
          lVar19 = (**(code **)(*(longlong *)**(longlong **)(lVar22 + lVar11) + 0x48))();
          plVar18 = *(longlong **)(lVar22 + lVar11);
          plVar29 = (longlong *)*plVar18;
          if (lVar19 != lVar26) {
            FUN_140f48678(local_188,(int)plVar29[1],1);
            uVar13 = FUN_1457ca9b2(lVar20,plVar29);
            goto LAB_142b4401e;
          }
          if (*(code **)(*plVar29 + 0x20) == (code *)&LAB_1470e73b8) {
LAB_142b43f73:
            bVar24 = (byte)uVar25;
            if (*(char *)((longlong)plVar18 + 0xc) != '\x01') {
              bVar7 = (**(code **)(*plVar29 + 0x18))(plVar29);
              bVar24 = bVar24 & bVar7;
            }
            if ((bVar24 != 0) &&
               (((char)local_180 == '\0' ||
                (cVar8 = (**(code **)(*plVar29 + 0x38))(plVar29), cVar8 != '\0')))) {
              plVar18 = (longlong *)**(undefined8 **)(lVar22 + lVar11);
              fVar3 = *(float *)(*(longlong *)(lVar22 + 0x10 + lVar11) + 8);
              DAT_14c9a8028 = '\0';
              dVar32 = 0.0;
              if (0.0 < fVar3) {
                QueryPerformanceCounter(local_140);
                dVar32 = (double)(fVar3 * _DAT_14c75f7b8) / 1000.0 +
                         (double)local_140[0].QuadPart * DAT_14c83f420 + 16777216.0;
                DAT_14c9a8029 = 1;
              }
              DAT_14c9a8020 = dVar32;
              (**(code **)(*plVar18 + 8))(plVar18,param_2);
            }
          }
          else {
            cVar8 = (**(code **)(*plVar29 + 0x20))(plVar29);
            if (cVar8 != '\0') {
              plVar18 = *(longlong **)(lVar22 + lVar11);
              goto LAB_142b43f73;
            }
          }
        }
        else {
LAB_142b4401e:
          local_190 = CONCAT44(local_190._4_4_,(int)CONCAT71((int7)(uVar13 >> 8),1));
        }
        lVar11 = lVar11 + 0x20;
      } while ((longlong)iVar17 * 0x20 != lVar11);
    }
    QueryPerformanceCounter(local_140);
    *(double *)(local_178 + 0x20) =
         ((double)local_140[0].QuadPart * DAT_14c83f420 + 16777216.0) - (dVar6 + 16777216.0);
    *(undefined8 *)(local_178 + 0x10) = 0;
    LeaveCriticalSection(local_170);
    bVar24 = (byte)local_190;
  }
  else {
    local_100 = (LARGE_INTEGER *)0x0;
    local_f8 = 0x800000000;
    uVar9 = *(uint *)(param_1 + 0x28);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
    if (8 < uVar9) {
      FUN_1402a2924(local_140);
      uVar9 = *(uint *)(param_1 + 0x28);
    }
    local_150 = (int *)(param_1 + 0x10);
    if (uVar9 == 0) {
      local_188 = 0;
    }
    else {
      puVar14 = (undefined8 *)*plVar18;
      puVar23 = puVar14 + (longlong)(int)uVar9 * 4;
      local_158 = lVar20 + 0x218;
      lVar22 = lVar20 + 0x228;
      local_188 = 0;
      uVar25 = local_194;
      do {
        if ((puVar14[1] == 0) ||
           (uVar9 = *(uint *)(puVar14[1] + 8), uVar13 = (ulonglong)uVar9, uVar9 != 1)) {
          uVar9 = *(uint *)(*(longlong **)*puVar14 + 1);
          uVar13 = (ulonglong)uVar9;
          lVar11 = *(longlong *)(lVar20 + 0x238);
          if (*(longlong *)(lVar20 + 0x238) == 0) {
            lVar11 = lVar22;
          }
          uVar27 = uVar9 + 0x1f;
          if (-1 < (int)uVar9) {
            uVar27 = uVar9;
          }
          if ((*(uint *)(lVar11 + (longlong)((int)uVar27 >> 5) * 4) >> (uVar9 & 0x1f) & 1) == 0)
          goto LAB_142b43e74;
          lVar11 = (**(code **)(**(longlong **)*puVar14 + 0x48))();
          plVar18 = (longlong *)*puVar14;
          plVar29 = (longlong *)*plVar18;
          if (lVar11 != lVar26) {
            FUN_140f48678(local_158,(int)plVar29[1],1);
            uVar13 = FUN_1457ca9b2(lVar20,plVar29);
            goto LAB_142b43e74;
          }
          if (*(code **)(*plVar29 + 0x20) == (code *)&LAB_1470e73b8) {
LAB_142b43d16:
            bVar24 = (byte)uVar25;
            if (*(char *)((longlong)plVar18 + 0xc) != '\x01') {
              bVar7 = (**(code **)(*plVar29 + 0x18))(plVar29);
              bVar24 = bVar24 & bVar7;
            }
            if ((bVar24 != 0) &&
               (((char)local_180 == '\0' ||
                (cVar8 = (**(code **)(*plVar29 + 0x38))(plVar29), cVar8 != '\0')))) {
              uVar13 = local_f8;
              piVar2 = (int *)puVar14[2];
              iVar16 = *piVar2 + *(int *)((longlong)puVar14 + 0x1c);
              *(int *)(puVar14 + 3) = iVar16;
              iVar17 = piVar2[1];
              if ((iVar17 < 0) || (0 < iVar17 && iVar17 < *(int *)((longlong)puVar14 + 0x1c))) {
                iVar16 = iVar16 + 1000;
                *(int *)(puVar14 + 3) = iVar16;
              }
              iVar17 = (int)local_f8;
              if ((int)local_f8 < 1) {
                uVar21 = 0;
              }
              else {
                pLVar12 = local_100;
                if (local_100 == (LARGE_INTEGER *)0x0) {
                  pLVar12 = local_140;
                }
                uVar21 = 0;
                do {
                  iVar10 = *(int *)(pLVar12[uVar21].QuadPart + 0x18);
                  if ((iVar10 < iVar16) ||
                     ((iVar10 == iVar16 && (**(int **)(pLVar12[uVar21].QuadPart + 0x10) < *piVar2)))
                     ) goto LAB_142b43dc0;
                  uVar21 = uVar21 + 1;
                } while ((local_f8 & 0xffffffff) != uVar21);
                uVar21 = local_f8 & 0xffffffff;
              }
LAB_142b43dc0:
              uVar9 = (int)local_f8 + 1;
              local_f8 = CONCAT44(local_f8._4_4_,uVar9);
              if (local_f8._4_4_ < uVar9) {
                FUN_1470e815c(local_140,uVar13 & 0xffffffff);
              }
              pLVar12 = local_100;
              if (local_100 == (LARGE_INTEGER *)0x0) {
                pLVar12 = local_140;
              }
              uVar13 = uVar21 & 0xffffffff;
              memmove(pLVar12 + uVar13 + 1,pLVar12 + uVar13,
                      (ulonglong)(uint)(iVar17 - (int)uVar21) << 3);
              pLVar12 = local_100;
              if (local_100 == (LARGE_INTEGER *)0x0) {
                pLVar12 = local_140;
              }
              pLVar12[uVar13].QuadPart = (LONGLONG)puVar14;
              lVar20 = local_190;
              uVar25 = local_194;
            }
          }
          else {
            cVar8 = (**(code **)(*plVar29 + 0x20))(plVar29);
            if (cVar8 != '\0') {
              plVar18 = (longlong *)*puVar14;
              goto LAB_142b43d16;
            }
          }
        }
        else {
LAB_142b43e74:
          local_188 = CONCAT71((int7)(uVar13 >> 8),1);
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar23);
    }
    lVar22 = lVar20 + 0x28 + (longlong)(*local_150 + -1) * 0x28;
    if (*local_150 == 0) {
      lVar22 = lVar20 + 0x168;
    }
    QueryPerformanceCounter(&local_148);
    dVar6 = (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar32 = (double)_DAT_14c75f7b8 * *(double *)(local_178 + 8) + dVar6;
    pLVar12 = local_100;
    if (local_100 == (LARGE_INTEGER *)0x0) {
      pLVar12 = local_140;
    }
    lVar26 = (longlong)(int)local_f8;
    if (lVar26 != 0) {
      dVar31 = (dVar32 - *(double *)(local_178 + 0x18)) -
               (double)*(float *)(lVar20 + 0x18) * *(double *)(lVar22 + 0x10);
      lVar20 = 0;
      bVar28 = false;
      do {
        puVar14 = *(undefined8 **)((longlong)pLVar12 + lVar20);
        if ((puVar14[1] == 0) || (*(int *)(puVar14[1] + 8) != 1)) {
          plVar18 = *(longlong **)*puVar14;
          iVar17 = *(int *)(puVar14[2] + 4);
          if ((iVar17 < 0) ||
             (iVar16 = *(int *)((longlong)puVar14 + 0x1c), iVar17 < iVar16 && iVar17 != 0)) {
LAB_142b4421d:
            *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
            fVar3 = *(float *)(*(longlong *)(*(longlong *)((longlong)pLVar12 + lVar20) + 0x10) + 8);
            DAT_14c9a8028 = '\0';
            if (dVar31 <= 0.0) {
              if (0.0 < fVar3) {
                QueryPerformanceCounter(&local_148);
                DAT_14c9a8020 =
                     (double)(fVar3 * _DAT_14c75f7b8) / 1000.0 +
                     (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
                DAT_14c9a8029 = 1;
              }
              else {
                DAT_14c9a8020 = 0.0;
              }
            }
            else {
              dVar30 = dVar31;
              if (0.01 < fVar3) {
                QueryPerformanceCounter(&local_148);
                dVar30 = (double)(fVar3 * _DAT_14c75f7b8) / 1000.0 +
                         (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
              }
              DAT_14c9a8029 = dVar30 < dVar31;
              DAT_14c9a8020 = dVar30;
            }
            (**(code **)(*plVar18 + 8))(plVar18,param_2);
            if (DAT_14c9a8028 != '\x01') goto LAB_142b44287;
            *(undefined4 *)(*(longlong *)((longlong)pLVar12 + lVar20) + 0x1c) = 1;
          }
          else {
            if (!bVar28) {
              QueryPerformanceCounter(&local_148);
              puVar14 = *(undefined8 **)((longlong)pLVar12 + lVar20);
              if ((double)local_148.QuadPart * DAT_14c83f420 + 16777216.0 <= dVar31)
              goto LAB_142b4421d;
              iVar16 = *(int *)((longlong)puVar14 + 0x1c);
            }
            *(int *)((longlong)puVar14 + 0x1c) = iVar16 + 1;
          }
          bVar28 = true;
        }
        else {
          local_188 = CONCAT71((int7)((ulonglong)puVar14 >> 8),1);
        }
LAB_142b44287:
        lVar20 = lVar20 + 8;
      } while (lVar26 * 8 != lVar20);
    }
    QueryPerformanceCounter(&local_148);
    dVar31 = (double)local_148.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar32 = dVar31 - dVar32;
    *(double *)(local_178 + 0x20) = dVar31 - dVar6;
    if (dVar32 <= 0.0) {
      dVar32 = 0.0;
    }
    *(double *)(local_178 + 0x10) = dVar32;
    if (local_100 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    LeaveCriticalSection(local_170);
    bVar24 = (byte)local_188;
  }
  lVar20 = local_160;
  plVar18 = local_168;
  if (((bVar24 & 1) != 0) && (iVar17 = *(int *)(local_160 + 0x28), 0 < iVar17)) {
    lVar22 = 0;
    bVar28 = false;
    do {
      lVar26 = *plVar18;
      iVar16 = (int)lVar22;
      lVar22 = (longlong)iVar16;
      plVar29 = (longlong *)(lVar26 + lVar22 * 0x20 + 8);
      while( true ) {
        plVar5 = (longlong *)*plVar29;
        if ((plVar5 != (longlong *)0x0) && ((int)plVar5[1] == 1)) break;
        lVar22 = lVar22 + 1;
        plVar29 = plVar29 + 4;
        iVar16 = iVar16 + 1;
        if (iVar17 <= lVar22) {
          if (!bVar28) goto LAB_142b4447a;
          goto LAB_142b44472;
        }
      }
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
      iVar17 = *(int *)(lVar20 + 0x28);
      iVar10 = iVar17 - (iVar16 + 1);
      if (iVar10 != 0) {
        if (0 < iVar10) {
          iVar10 = 1;
        }
        memmove(plVar29 + -1,(void *)(lVar26 + (longlong)(iVar17 - iVar10) * 0x20),
                (longlong)iVar10 << 5);
        iVar17 = *(int *)(lVar20 + 0x28);
      }
      iVar17 = iVar17 + -1;
      *(int *)(lVar20 + 0x28) = iVar17;
      bVar28 = true;
    } while (iVar16 < iVar17);
LAB_142b44472:
    FUN_142b4455e(plVar18);
  }
LAB_142b4447a:
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


