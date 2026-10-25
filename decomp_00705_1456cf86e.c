// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1456cf86e FUN_1456cf86e body=138 status=ok
// SIG undefined FUN_1456cf86e(void)

code * FUN_1456cf86e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferCTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf38aa;
}



// FUNCTION 1456cf8f8 FUN_1456cf8f8 body=138 status=ok
// SIG undefined FUN_1456cf8f8(void)

code * FUN_1456cf8f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferETexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf3820;
}



// FUNCTION 1456cf982 FUN_1456cf982 body=589 status=ok
// SIG undefined FUN_1456cf982(void)

void FUN_1456cf982(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(char *)(param_1 + 10000) = param_2;
  lVar4 = FUN_1447210f0();
  if (lVar4 != 0) {
    lVar4 = FUN_14011c706(lVar4);
    if (lVar4 != 0) {
      if (param_2 == '\0') {
        FUN_145a00c8a(lVar4,param_1 + 0x26f8);
      }
      else {
        FUN_14011c8a2();
      }
      if (((*(longlong *)(param_1 + 0x2700) != 0) && (*(longlong *)(param_1 + 0x2708) != 0)) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x2708) + 8))) {
        FUN_1401cb356();
        local_40 = *(undefined8 *)(param_1 + 0x2700);
        local_38 = *(longlong *)(param_1 + 0x2708);
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
          UNLOCK();
        }
        FUN_140d61352(&local_40);
        plVar2 = *(longlong **)(param_1 + 0x2708);
        *(undefined8 *)(param_1 + 0x2700) = 0;
        *(undefined8 *)(param_1 + 0x2708) = 0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
      goto LAB_1456cf9de;
    }
  }
  if (((*(longlong *)(param_1 + 0x2700) == 0) || (*(longlong *)(param_1 + 0x2708) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x2708) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar3 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_60[2] = lVar6;
    *local_60 = &PTR_FUN_14b9a5630;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_148e15f8c;
    local_68 = 0;
    FUN_1405f67fc(uVar5,&local_50,&local_60,L"AStreamableTravelStationObject.StreamAroundStation");
    if ((undefined8 *)(param_1 + 0x2700) != &local_50) {
      *(undefined8 *)(param_1 + 0x2700) = local_50;
      local_50 = 0;
      plVar2 = *(longlong **)(param_1 + 0x2708);
      *(longlong **)(param_1 + 0x2708) = local_48;
      local_48 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    FUN_1449db362(&local_60);
  }
LAB_1456cf9de:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cfbd0 FUN_1456cfbd0 body=74 status=ok
// SIG undefined FUN_1456cfbd0(void)

ulonglong FUN_1456cfbd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14018d992();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar3;
    bVar1 = thunk_FUN_1401225c0(lVar3,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1456cfc1a thunk_FUN_1401225c0 body=5 status=ok
// SIG undefined thunk_FUN_1401225c0(void)

bool thunk_FUN_1401225c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [4];
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar3 = (longlong *)FUN_144741050(param_2 + 1);
    lVar4 = *plVar3;
    if (DAT_14c950c29 == 1) {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *plVar3;
      }
    }
    *param_3 = lVar4;
    param_3[1] = plVar3[1];
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar1 = *param_2;
    iVar2 = FUN_144830b78(auStack_3c,param_3);
    lVar5 = (longlong)*(int *)(lVar4 + 0x270);
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar4 + 0x268);
      lVar5 = lVar5 * 0xc;
      do {
        if ((*plVar3 == lVar1) && ((int)plVar3[1] == iVar2)) {
          bVar6 = true;
          if (plVar3 != (longlong *)0x0) goto LAB_14012266e;
          break;
        }
        plVar3 = (longlong *)((longlong)plVar3 + 0xc);
        lVar5 = lVar5 + -0xc;
      } while (lVar5 != 0);
    }
    plVar3 = (longlong *)FUN_144741050(param_2 + 1);
    lVar4 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    if (((*plVar3 == lVar4) && ((short)plVar3[1] == DAT_14cb42138)) &&
       (*(char *)((longlong)plVar3 + 10) == DAT_14cb4213a)) {
      lVar4 = DAT_14cb42140;
      if (DAT_14c950c29 == 1) {
        if (DAT_14cb42140 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = DAT_14cb42140;
        }
      }
      *param_3 = lVar4;
      param_3[1] = DAT_14cb42148;
      lVar4 = *(longlong *)(param_1 + 0xd8);
      lVar1 = *param_2;
      iVar2 = FUN_144830b78(auStack_48,param_3);
      lVar5 = (longlong)*(int *)(lVar4 + 0x270);
      if (lVar5 != 0) {
        plVar3 = *(longlong **)(lVar4 + 0x268);
        lVar5 = lVar5 * 0xc;
        do {
          if ((*plVar3 == lVar1) && ((int)plVar3[1] == iVar2)) goto LAB_140122749;
          plVar3 = (longlong *)((longlong)plVar3 + 0xc);
          lVar5 = lVar5 + -0xc;
        } while (lVar5 != 0);
        plVar3 = (longlong *)0x0;
LAB_140122749:
        bVar6 = plVar3 != (longlong *)0x0;
        goto LAB_14012266e;
      }
    }
  }
  bVar6 = false;
LAB_14012266e:
  if ((uStack_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1456cfc20 FUN_1456cfc20 body=162 status=ok
// SIG undefined FUN_1456cfc20(void)

void FUN_1456cfc20(longlong param_1)

{
  FUN_14034a294(param_1 + 0x88);
  if (*(int *)(param_1 + 0x84) != -1) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0xffffffff00000000;
  }
  FUN_14034a294(param_1 + 0x50);
  if (*(int *)(param_1 + 0x4c) != -1) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0xffffffff00000000;
  }
  FUN_14034a294(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != -1) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
  }
  return;
}



// FUNCTION 1456cfcc2 FUN_1456cfcc2 body=647 status=ok
// SIG undefined FUN_1456cfcc2(void)

undefined8 * FUN_1456cfcc2(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3a5c8) {
    FUN_144b3d300(&DAT_14cb3a5c8);
    if (DAT_14cb3a5c8 == -1) {
      FUN_140056680(&DAT_14cb3a5b8,L"Emitter.");
      atexit((_func_5014 *)&LAB_143a047f5);
      _Init_thread_footer(&DAT_14cb3a5c8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3a5e0) {
    FUN_144b3d300(&DAT_14cb3a5e0);
    if (DAT_14cb3a5e0 == -1) {
      FUN_140056680(&DAT_14cb3a5d0,L"StackContext.");
      atexit((_func_5014 *)&LAB_143a04806);
      _Init_thread_footer(&DAT_14cb3a5e0);
    }
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1);
  }
  local_158 = local_138;
  local_140 = '\0';
  local_148 = &local_38;
  local_150 = local_158;
  FUN_14005eb5c(param_2,&local_158);
  puVar5 = local_158;
  uVar4 = (ulonglong)((longlong)local_150 - (longlong)local_158) >> 1;
  uVar7 = (ulonglong)(DAT_14cb3a5c0 - 1);
  if (DAT_14cb3a5c0 == 0) {
    uVar7 = 0;
  }
  iVar6 = (int)uVar7;
  iVar3 = (int)uVar4;
  iVar1 = iVar3;
  if (iVar6 < iVar3) {
    iVar1 = iVar6;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar6 == iVar2) {
    if ((1 < DAT_14cb3a5c0) && (0 < iVar1)) {
      iVar1 = FUN_144a54874(DAT_14cb3a5b8,local_158,uVar7);
      if (iVar1 != 0) goto LAB_1456cfe01;
    }
  }
  else {
LAB_1456cfe01:
    uVar7 = (ulonglong)(DAT_14cb3a5d8 - 1);
    if (DAT_14cb3a5d8 == 0) {
      uVar7 = 0;
    }
    iVar6 = (int)uVar7;
    iVar1 = iVar3;
    if (iVar6 < iVar3) {
      iVar1 = iVar6;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar6 != iVar2) goto LAB_1456cfe4e;
    if ((1 < DAT_14cb3a5d8) && (0 < iVar1)) {
      iVar1 = FUN_144a54874(DAT_14cb3a5d0,puVar5,uVar7);
      if (iVar1 != 0) goto LAB_1456cfe4e;
    }
  }
  puVar5 = puVar5 + uVar7 * 2;
  uVar4 = (ulonglong)(uint)(iVar3 - iVar6);
LAB_1456cfe4e:
  FUN_1446f82e2(&local_160,uVar4 & 0xffffffff,puVar5,1);
  *param_1 = local_160;
  if (local_140 == '\x01') {
    FUN_1400020a8(local_158);
  }
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cff4a FUN_1456cff4a body=349 status=ok
// SIG undefined FUN_1456cff4a(void)

void FUN_1456cff4a(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1456d01c0();
  FUN_1456d00a8(param_2,param_1 + 0x58);
  FUN_140124ae4(param_2,param_1 + 0xf8);
  FUN_1456d0134(param_2,param_1 + 0x108);
  local_40 = 0;
  FUN_1408383eb(param_2,&local_40);
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  lVar1 = lVar1 + local_40;
  if ((0 < local_40 & *param_3) == 1) {
    FUN_1470212ec(param_2,param_1 + 0x158);
    FUN_1456d0134(param_2,param_1 + 0x168);
    FUN_1456d0134(param_2,param_1 + 0x1b8);
  }
  (**(code **)(*param_2 + 0x1a0))(param_2,lVar1);
  local_48 = 0;
  FUN_1408383eb(param_2,&local_48);
  lVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  lVar1 = local_48;
  if ((0 < local_48 & param_3[1]) == 1) {
    FUN_1470215fc(param_2,param_1 + 0x208);
  }
  (**(code **)(*param_2 + 0x1a0))(param_2,lVar1 + lVar2);
  FUN_1448325b8(param_1 + 0x58);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d00a8 FUN_1456d00a8 body=140 status=ok
// SIG undefined FUN_1456d00a8(void)

longlong FUN_1456d00a8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_144832c23();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14498d7c0(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1456d0134 FUN_1456d0134 body=140 status=ok
// SIG undefined FUN_1456d0134(void)

longlong FUN_1456d0134(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_140124d15();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1403faa6c(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1456d01c0 FUN_1456d01c0 body=210 status=ok
// SIG undefined FUN_1456d01c0(void)

void FUN_1456d01c0(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  iVar3 = FUN_1448332aa(param_2,&DAT_149e5ddf8);
  if (0x12 < iVar3) {
    local_1c = 1;
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      }
      else {
        FUN_14572512c(param_2,&local_1c);
      }
    }
    else {
      local_1c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
  }
  FUN_1446f470e(&local_28,L"NexusAssetRegistryState",1);
  FUN_1414dd3d2(param_2,&DAT_149fcaa14,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d0294 FUN_1456d0294 body=69 status=ok
// SIG undefined FUN_1456d0294(void)

void FUN_1456d0294(longlong param_1)

{
  if (0x20 < *(int *)(param_1 + 0xcb8)) {
    FUN_145b2699c(param_1);
    *(undefined4 *)(param_1 + 0xcb8) = 0x20;
    FUN_141005912(param_1);
    return;
  }
  FUN_146828710(param_1);
  FUN_145b2699c(param_1);
  return;
}



// FUNCTION 1456d02da FUN_1456d02da body=410 status=ok
// SIG undefined FUN_1456d02da(void)

void FUN_1456d02da(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 1:
    FUN_1400dafd4(param_1,0);
    if ((DAT_14c760da4 < 2) || (*(uint *)(*(longlong *)(param_1 + 0x10) + 8) < 2))
    goto switchD_1456d030d_caseD_7;
    lVar2 = *(longlong *)(param_1 + 0x10);
    break;
  case 2:
    if (*(char *)(param_1 + 0x71) == '\x02') {
      while (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1471254ee();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_1 + 0x71) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  default:
    goto switchD_1456d030d_caseD_3;
  case 5:
  case 6:
    if (*(char *)(param_1 + 0x71) == '\x02') {
      FUN_1471254ee(param_1 + 0x20);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (((*(byte *)(lVar2 + 0xdf) & 8) == 0) ||
       (piVar1 = (int *)(lVar2 + 8), lVar2 = *(longlong *)(param_1 + 0x10), *piVar1 != 1)) {
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (lVar2 != 0 && *piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      goto switchD_1456d030d_caseD_3;
    }
LAB_1456d03a0:
    local_30 = lVar2;
    FUN_14021db38(DAT_14ca77418);
    goto switchD_1456d030d_caseD_3;
  case 7:
switchD_1456d030d_caseD_7:
    lVar2 = *(longlong *)(param_1 + 0x10);
    if ((*(byte *)(lVar2 + 0xdf) & 8) != 0) goto LAB_1456d03a0;
  }
  LOCK();
  piVar1 = (int *)(lVar2 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (lVar2 != 0 && *piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
switchD_1456d030d_caseD_3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d04de FUN_1456d04de body=114 status=ok
// SIG undefined FUN_1456d04de(void)

void FUN_1456d04de(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  param_1[2] = param_3;
  *param_1 = -(uint)(0 < param_3);
  if (param_2 < 1) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x7c,
                  L"Max UObject count is invalid. It must be a number that is greater than 0.");
  }
  FUN_1456d0550(param_1 + 4,param_2,param_4);
  if (0 < param_1[2]) {
    FUN_140127bb2(param_1 + 4);
    return;
  }
  return;
}



// FUNCTION 1456d0550 FUN_1456d0550 body=304 status=ok
// SIG undefined FUN_1456d0550(void)

void FUN_1456d0550(longlong *param_1,int param_2,char param_3)

{
  size_t _Size;
  undefined1 auVar1 [16];
  int iVar2;
  void *_Dst;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar2 = param_2 + 0xffff;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar2 = iVar2 >> 0x10;
  iVar6 = iVar2 + 1;
  *(int *)(param_1 + 3) = iVar6;
  *(int *)(param_1 + 2) = iVar6 * 0x10000;
  _Size = (longlong)iVar2 * 8 + 8;
  lVar4 = (longlong)iVar2 * 8 + 8 + (ulonglong)(_Size == 0);
  if (param_2 < -0x1ffff) {
    lVar4 = -1;
  }
  _Dst = (void *)FUN_14001cc68(lVar4);
  *param_1 = (longlong)_Dst;
  memset(_Dst,0,_Size);
  if (param_3 != '\0') {
    uVar8 = (ulonglong)(iVar6 * 0x10000);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar8;
    uVar7 = 0xffffffffffffffff;
    if (SUB168(auVar1 * ZEXT816(0x18),8) == 0) {
      uVar7 = SUB168(auVar1 * ZEXT816(0x18),0) | 8;
    }
    puVar3 = (ulonglong *)FUN_14001cc68(uVar7,0x10);
    *puVar3 = uVar8;
    if (iVar6 != 0) {
      memset(puVar3 + 1,0,((uVar8 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
    }
    param_1[1] = (longlong)(puVar3 + 1);
    if (-0x10000 < param_2) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        *(longlong *)(*param_1 + lVar5 * 8) = param_1[1] + lVar4;
        lVar5 = lVar5 + 1;
        iVar6 = (int)param_1[3];
        lVar4 = lVar4 + 0x180000;
      } while (lVar5 < iVar6);
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar6;
  }
  return;
}



// FUNCTION 1456d0680 FUN_1456d0680 body=87 status=ok
// SIG undefined FUN_1456d0680(void)

longlong FUN_1456d0680(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1710);
  *(uint *)(param_1 + 0x1710) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1714) < iVar1 + 1U) {
    FUN_148208648(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1700);
  if (*(longlong *)(param_1 + 0x1700) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x2e0 + lVar2;
  FUN_14012d1a7(lVar2);
  return lVar2;
}



// FUNCTION 1456d06d8 FUN_1456d06d8 body=187 status=ok
// SIG undefined FUN_1456d06d8(void)

longlong * FUN_1456d06d8(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14018d992();
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_58 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(uVar2,&local_40,param_3,param_2);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d0794 FUN_1456d0794 body=79 status=ok
// SIG undefined FUN_1456d0794(void)

undefined8 * FUN_1456d0794(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_149e8f028;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return puVar2;
}



// FUNCTION 1456d07e4 FUN_1456d07e4 body=97 status=ok
// SIG undefined FUN_1456d07e4(void)

void FUN_1456d07e4(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_140694960(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x2c) + 0x1fU >> 5,4);
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1456d0846 FUN_1456d0846 body=121 status=ok
// SIG undefined FUN_1456d0846(void)

void FUN_1456d0846(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      iVar5 = 0x20;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1456d08c0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456d08c0 FUN_1456d08c0 body=140 status=ok
// SIG undefined FUN_1456d08c0(void)

void FUN_1456d08c0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,4);
  return;
}



// FUNCTION 1456d094c FUN_1456d094c body=202 status=ok
// SIG undefined FUN_1456d094c(void)

undefined8 * FUN_1456d094c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 2;
  FUN_1456d0a16(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x26));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x27));
  return param_1;
}



// FUNCTION 1456d0a16 FUN_1456d0a16 body=207 status=ok
// SIG undefined FUN_1456d0a16(void)

undefined4 * FUN_1456d0a16(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = 0xffffff;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x8000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  uVar2 = FUN_14001cc68(0x200,8);
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = 0x400000004;
  FUN_1456d0ae6(param_1 + 2);
  iVar4 = param_1[0x10];
  if (1 < iVar4) {
    lVar3 = 1;
    do {
      *(uint *)(*(longlong *)(param_1 + 2) + -4 + lVar3 * 4) =
           (uint)lVar3 & 0xffffff |
           (uint)*(byte *)(*(longlong *)(param_1 + 2) + -1 + lVar3 * 4) << 0x18;
      lVar3 = lVar3 + 1;
      iVar4 = param_1[0x10];
    } while (lVar3 < iVar4);
  }
  *param_1 = 0;
  if (-1 < iVar4) {
    uVar1 = FUN_144a54ea4(param_1 + 6,iVar4);
    FUN_1447c6044(param_1 + 6,uVar1,iVar4,0);
  }
  return param_1;
}



// FUNCTION 1456d0ae6 FUN_1456d0ae6 body=65 status=ok
// SIG undefined FUN_1456d0ae6(void)

void FUN_1456d0ae6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 4;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 4) {
    FUN_1457da84e(param_1,iVar1);
  }
  FUN_140fb6b79((longlong)iVar1 * 4 + *param_1,4);
  return;
}



// FUNCTION 1456d0b28 FUN_1456d0b28 body=81 status=ok
// SIG undefined FUN_1456d0b28(void)

undefined8 * FUN_1456d0b28(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ab018d0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456d0b7a FUN_1456d0b7a body=87 status=ok
// SIG undefined FUN_1456d0b7a(void)

void FUN_1456d0b7a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1482081b8();
  return;
}



// FUNCTION 1456d0bd2 FUN_1456d0bd2 body=48 status=ok
// SIG undefined FUN_1456d0bd2(void)

void FUN_1456d0bd2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1456d0c02 FUN_1456d0c02 body=10 status=ok
// SIG undefined FUN_1456d0c02(void)

void FUN_1456d0c02(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001456d0c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14cb52708)();
  return;
}



// FUNCTION 1456d0c0c FUN_1456d0c0c body=93 status=ok
// SIG undefined FUN_1456d0c0c(void)

longlong FUN_1456d0c0c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140146544(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_14484f202(param_1);
  FUN_146d8d4c4(param_1);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14014789c(param_1);
    *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  }
  return param_1;
}



// FUNCTION 1456d0c6a FUN_1456d0c6a body=224 status=ok
// SIG undefined FUN_1456d0c6a(void)

undefined8 FUN_1456d0c6a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar4 = FUN_144b0634e();
    if (cVar4 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x40);
      *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(param_2 + 0x28);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar1 + 0xe0) = uVar5;
      lVar1 = *(longlong *)(param_1 + 0x40);
      *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)(param_2 + 0x40);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(lVar1 + 0xf8) = uVar5;
      lVar1 = *(longlong *)(param_1 + 0x40);
      *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_2 + 0x80);
      uVar5 = *(undefined8 *)(param_2 + 0x48);
      uVar3 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(lVar1 + 0x90) = uVar5;
      *(undefined8 *)(lVar1 + 0x98) = uVar3;
      uVar5 = *(undefined8 *)(param_2 + 0x60);
      uVar3 = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(lVar1 + 0xa8) = uVar5;
      *(undefined8 *)(lVar1 + 0xb0) = uVar3;
      *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_2 + 0x78);
      plVar2 = *(longlong **)(param_2 + 0x88);
      if ((plVar2 == (longlong *)0x0) || ((longlong)(int)plVar2[1] == -1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(*(longlong *)(*plVar2 + 200) + (longlong)(int)plVar2[1] * 8);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28) = uVar5;
    }
  }
  return 1;
}



// FUNCTION 1456d0d4a FUN_1456d0d4a body=113 status=ok
// SIG undefined FUN_1456d0d4a(void)

void FUN_1456d0d4a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 1456d0dbc FUN_1456d0dbc body=92 status=ok
// SIG undefined FUN_1456d0dbc(void)

void FUN_1456d0dbc(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 100 + (longlong)param_2 * 0x70);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x70 + 0x60);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x70 + 0x60);
  FUN_1456d0e18(param_1,param_2,1);
  return;
}



// FUNCTION 1456d0e18 FUN_1456d0e18 body=119 status=ok
// SIG undefined FUN_1456d0e18(void)

void FUN_1456d0e18(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x70 + *param_1 + 0x20);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 0xe;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_14115499c(param_1,param_2,param_3);
  return;
}



// FUNCTION 1456d0e90 FUN_1456d0e90 body=132 status=ok
// SIG undefined FUN_1456d0e90(void)

void FUN_1456d0e90(longlong param_1,int param_2)

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



// FUNCTION 1456d0f14 FUN_1456d0f14 body=331 status=ok
// SIG undefined FUN_1456d0f14(void)

undefined8 * FUN_1456d0f14(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar7[1] = 0xffffffff;
    *puVar7 = &PTR_FUN_149f6d9a0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[8] = 0;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xb] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0xc] = DAT_14c8463e0;
    puVar7[0xd] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0x10] = DAT_14c8463e0;
    puVar7[0x11] = uVar2;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[0xe] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xf] = uVar2;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    *(undefined8 **)(param_1 + 0x60) = puVar7;
  }
  else {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar7 = puVar1;
    if (iVar6 != 1) {
      uVar2 = puVar1[1];
      puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
      puVar7[1] = uVar2;
      *puVar7 = &PTR_FUN_149f6d9a0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[8] = 0;
      uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar7[0xb] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0xc] = DAT_14c8463e0;
      puVar7[0xd] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0x10] = DAT_14c8463e0;
      puVar7[0x11] = uVar2;
      uVar5 = DAT_14c8463d8._4_4_;
      uVar4 = (undefined4)DAT_14c8463d8;
      uVar3 = DAT_14c8463d0._4_4_;
      *(undefined4 *)(puVar7 + 0xe) = (undefined4)DAT_14c8463d0;
      *(undefined4 *)((longlong)puVar7 + 0x74) = uVar3;
      *(undefined4 *)(puVar7 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar5;
      *(undefined4 *)(puVar7 + 0x12) = 0;
      *(undefined8 **)(param_1 + 0x60) = puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar7 = *(undefined8 **)(param_1 + 0x60);
      }
    }
  }
  return puVar7;
}



// FUNCTION 1456d1060 FUN_1456d1060 body=297 status=ok
// SIG undefined FUN_1456d1060(void)

undefined4 * FUN_1456d1060(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1456d1256();
  *local_40 = *(undefined8 *)*param_4;
  memset(local_40 + 2,0,0x81);
  *(undefined4 *)(local_40 + 0x14) = 0xffffffff;
  cVar1 = FUN_1456d118a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0xa4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x14) =
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
      FUN_1456d1536(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d118a FUN_1456d118a body=203 status=ok
// SIG undefined FUN_1456d118a(void)

undefined8 FUN_1456d118a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar4 * 0xb0);
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0xb0) == *param_3) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x20);
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
          memmove(_Dst,param_3,0xa0);
          FUN_1456d3c20(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)((longlong)_Dst + 0xa0);
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1456d1256 FUN_1456d1256 body=237 status=ok
// SIG undefined FUN_1456d1256(void)

int * FUN_1456d1256(longlong *param_1,int *param_2)

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
      FUN_1456d14a2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb0);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xb0 + *param_1;
  return param_2;
}



// FUNCTION 1456d1344 FUN_1456d1344 body=345 status=ok
// SIG undefined FUN_1456d1344(void)

undefined8 * FUN_1456d1344(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if (*(longlong **)(param_1 + 0x880) == (longlong *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
    puVar7[1] = 0xffffffff;
    *puVar7 = &PTR_FUN_149f6d9a0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[8] = 0;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xb] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0xc] = DAT_14c8463e0;
    puVar7[0xd] = uVar2;
    uVar2 = DAT_14c8463e8;
    puVar7[0x10] = DAT_14c8463e0;
    puVar7[0x11] = uVar2;
    uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
    puVar7[0xe] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
    puVar7[0xf] = uVar2;
    *(undefined4 *)(puVar7 + 0x12) = 0;
    *(undefined8 **)(param_1 + 0x880) = puVar7;
  }
  else {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
    puVar1 = *(undefined8 **)(param_1 + 0x880);
    puVar7 = puVar1;
    if (iVar6 != 1) {
      uVar2 = puVar1[1];
      puVar7 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
      puVar7[1] = uVar2;
      *puVar7 = &PTR_FUN_149f6d9a0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[8] = 0;
      uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar7[10] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar7[0xb] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0xc] = DAT_14c8463e0;
      puVar7[0xd] = uVar2;
      uVar2 = DAT_14c8463e8;
      puVar7[0x10] = DAT_14c8463e0;
      puVar7[0x11] = uVar2;
      uVar5 = DAT_14c8463d8._4_4_;
      uVar4 = (undefined4)DAT_14c8463d8;
      uVar3 = DAT_14c8463d0._4_4_;
      *(undefined4 *)(puVar7 + 0xe) = (undefined4)DAT_14c8463d0;
      *(undefined4 *)((longlong)puVar7 + 0x74) = uVar3;
      *(undefined4 *)(puVar7 + 0xf) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x7c) = uVar5;
      *(undefined4 *)(puVar7 + 0x12) = 0;
      *(undefined8 **)(param_1 + 0x880) = puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        puVar7 = *(undefined8 **)(param_1 + 0x880);
      }
    }
  }
  return puVar7;
}



// FUNCTION 1456d14a2 FUN_1456d14a2 body=146 status=ok
// SIG undefined FUN_1456d14a2(void)

void FUN_1456d14a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456d1536 FUN_1456d1536 body=492 status=ok
// SIG undefined FUN_1456d1536(void)

void FUN_1456d1536(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0xb0;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xa4 + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0xa0 + lVar6) =
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



// FUNCTION 1456d1724 FUN_1456d1724 body=9 status=ok
// SIG undefined FUN_1456d1724(void)

void FUN_1456d1724(longlong param_1)

{
  FUN_14474dbbc(param_1 + 0x10);
  return;
}



// FUNCTION 1456d172d FUN_1456d172d body=51 status=ok
// SIG undefined FUN_1456d172d(void)

void FUN_1456d172d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456d1760 FUN_1456d1760 body=170 status=ok
// SIG undefined FUN_1456d1760(void)

longlong FUN_1456d1760(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  
  lVar3 = DAT_14ca19a50;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (*piVar1 == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  iVar2 = *(int *)(lVar3 + uVar5 * 4);
  iVar6 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  FUN_1401a8b70(param_1,iVar6 >> 2,L"Nanite.PrimitiveMaterialData",1);
  lVar3 = DAT_14ca19a38;
  if (*piVar1 == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  iVar2 = *(int *)(lVar3 + uVar5 * 4);
  iVar6 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  FUN_1401a8b70(param_1 + 0x20,iVar6 >> 2,L"Nanite.MaterialData",1);
  return param_1;
}



// FUNCTION 1456d180a FUN_1456d180a body=132 status=ok
// SIG undefined FUN_1456d180a(void)

void FUN_1456d180a(longlong param_1,int param_2)

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



// FUNCTION 1456d188e FUN_1456d188e body=228 status=ok
// SIG undefined FUN_1456d188e(void)

longlong FUN_1456d188e(void)

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
  if (DAT_14cb115c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147dbe6ab;
    local_40 = &LAB_145aa781a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionHLODRuntimeSubsystem",&DAT_14cb115c8,
                  &DAT_147dbe6aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb115c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d1974 FUN_1456d1974 body=138 status=ok
// SIG undefined FUN_1456d1974(void)

void FUN_1456d1974(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1456d1a00 FUN_1456d1a00 body=226 status=ok
// SIG undefined FUN_1456d1a00(void)

longlong * FUN_1456d1a00(longlong *param_1)

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
  pcVar13 = FUN_14646f39c;
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



// FUNCTION 1456d1ae8 FUN_1456d1ae8 body=132 status=ok
// SIG undefined FUN_1456d1ae8(void)

undefined1 * FUN_1456d1ae8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ArrayBufferParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456d1ae4;
}



// FUNCTION 1456d1b6c FUN_1456d1b6c body=138 status=ok
// SIG undefined FUN_1456d1b6c(void)

code * FUN_1456d1b6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ArrayReadBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456d1ae8;
}



// FUNCTION 1456d1bf6 FUN_1456d1bf6 body=303 status=ok
// SIG undefined FUN_1456d1bf6(void)

void FUN_1456d1bf6(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 != 0)) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_14015c354(lVar2);
      if (cVar1 != '\0') {
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        plVar5 = (longlong *)FUN_140d172b5(uVar4,param_2);
        if ((plVar5 != (longlong *)0x0) && ((char)plVar5[0x2f] == '\x03')) {
          cVar1 = FUN_141107632(plVar5);
          if (cVar1 != '\0') {
            cVar1 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
            if ((cVar1 != '\0') && (lVar2 = param_1[0x1f], (longlong)(int)lVar2 != 0)) {
              lVar3 = param_1[0x1e];
              lVar8 = 0;
              do {
                plVar5 = *(longlong **)(lVar3 + lVar8);
                lVar6 = FUN_140d18446(param_1,param_2,plVar5);
                if ((lVar6 != 0) &&
                   ((*(char *)(lVar6 + 0x11) != '\0' || (*(char *)(lVar6 + 0x12) == '\x01')))) {
                  lVar6 = *plVar5;
                  uVar7 = 0xffffffff;
                  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x139) == '\x01')) {
                    uVar7 = *(undefined4 *)(lVar6 + 0x13c);
                  }
                  FUN_148cfd17a(param_1,param_2,uVar7,1);
                }
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)lVar2 * 8 != lVar8);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1456d1d26 FUN_1456d1d26 body=32 status=ok
// SIG undefined FUN_1456d1d26(void)

void FUN_1456d1d26(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar2 = 0;
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x58))) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8);
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 1456d1d46 FUN_1456d1d46 body=106 status=ok
// SIG undefined FUN_1456d1d46(void)

void FUN_1456d1d46(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_140724ba4(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x8c) + 0x1fU >> 5,4);
  iVar1 = *(int *)(param_1 + 0x88);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 1456d1db2 FUN_1456d1db2 body=47 status=ok
// SIG undefined FUN_1456d1db2(void)

undefined8 FUN_1456d1db2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14016394c();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x168) != 0)) {
    uVar2 = FUN_1447fa3ae();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1456d1de2 FUN_1456d1de2 body=205 status=ok
// SIG undefined FUN_1456d1de2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d1de2(void)

{
  if ((DAT_14c9f9607 & 2) == 0) {
    DAT_14c9f9607 = DAT_14c9f9607 | 2;
    _DAT_14c9f95a8 = L"FLumenSceneDirectLightingTraceDistanceFieldShadowsCS";
    _DAT_14c9f95c0 = FUN_146826540;
    _DAT_14c9f95c8 = FUN_146825d77;
    _DAT_14c9f95d0 = FUN_146825fd6;
    _DAT_14c9f95d8 = FUN_1407e02ea;
    _DAT_14c9f95e0 = FUN_146826273;
    _DAT_14c9f95b8 = FUN_1472052c2;
    _DAT_14c9f95f8 = 0xffffffff000000e0;
    _DAT_14c9f9600 = 8;
    DAT_14c9f9604 = 0;
    _DAT_14c9f95e8 = &LAB_1472052ec;
    FUN_1456d1eb0();
    FUN_1407e00cc(&DAT_14c9f95a0);
    return;
  }
  return;
}



// FUNCTION 1456d1eb0 FUN_1456d1eb0 body=123 status=ok
// SIG undefined FUN_1456d1eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d1eb0(void)

{
  _DAT_14c9ffd38 = L"BASE";
  DAT_14c9ffd62 = 4;
  _DAT_14c9ffd40 = FUN_140b35ae4();
  _DAT_14c9ffd48 = DAT_14c9f95b0;
  _DAT_14c9ffd50 = &LAB_14682652b;
  DAT_14c9f95b0 = &DAT_14c9ffd38;
  DAT_14c9f9605 = DAT_14c9f9605 + '\x01';
  _DAT_14c9ffd58 = 0x100000000;
  if (*(char *)(_DAT_14c9ffd40 + 100) != '\0') {
    DAT_14c9f9606 = DAT_14c9f9606 + '\x01';
  }
  return;
}



// FUNCTION 1456d1f2c FUN_1456d1f2c body=256 status=ok
// SIG undefined FUN_1456d1f2c(void)

void FUN_1456d1f2c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == (longlong *)0x0 || *(byte *)((longlong)param_2 + 0xc) < 2) {
    if (*(byte *)((longlong)param_2 + 0xc) == 0 || param_2 == (longlong *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_144b0231c(param_2,uVar4);
  }
  else {
    *(undefined1 *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + (longlong)(int)param_2[1] * 0x10) = 1;
    lVar3 = param_2[1];
    lVar2 = *(longlong *)(*param_2 + 0x278);
    *(undefined8 *)(lVar2 + (longlong)(int)lVar3 * 0xc) = 0;
    *(undefined4 *)(lVar2 + 8 + (longlong)(int)lVar3 * 0xc) = 0;
    lVar3 = param_2[1];
    lVar2 = *(longlong *)(*param_2 + 0x290);
    *(undefined8 *)(lVar2 + (longlong)(int)lVar3 * 0xc) = 0;
    *(undefined4 *)(lVar2 + 8 + (longlong)(int)lVar3 * 0xc) = 0;
    if (*(byte *)((longlong)param_2 + 0xc) < 6) {
      if (*(byte *)((longlong)param_2 + 0xc) < 3) {
        FUN_1456cc2b4();
      }
      else {
        FUN_1400ca6de();
      }
    }
    else {
      FUN_1400c9b9a(param_1,param_2);
    }
    FUN_1400c9f82(param_1,param_2,0);
    if (DAT_14c75f3b3 == '\x01') {
      puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x318);
      FUN_1447dd1e0(param_1 + 0x2b8,param_2);
    }
  }
  FUN_1447dd35a(param_1);
  return;
}



// FUNCTION 1456d202c FUN_1456d202c body=370 status=ok
// SIG undefined FUN_1456d202c(void)

void FUN_1456d202c(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  ulonglong *local_68;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (longlong)(int)(*(longlong **)(param_2 + 0x18))[1];
  if (lVar7 != 0) {
    puVar9 = (ulonglong *)**(longlong **)(param_2 + 0x18);
    local_68 = puVar9 + lVar7 * 5;
    do {
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      iVar1 = (int)puVar9[3];
      uVar6 = puVar9[4];
      iVar8 = *(int *)(param_1 + 0x40);
      if ((((iVar8 == -1) || (*(int *)(param_1 + 0x38) != iVar1)) ||
          (*(ulonglong *)(param_1 + 0x20) != uVar2)) ||
         ((*(ulonglong *)(param_1 + 0x28) != uVar3 || (*(ulonglong *)(param_1 + 0x30) != uVar4)))) {
        local_4c = iVar1 + 3;
        local_58 = (int)(uVar2 >> 3);
        local_54 = (int)(uVar3 >> 3);
        local_50 = (int)(uVar4 >> 3);
        plVar5 = *(longlong **)(param_1 + 0x70);
        local_6c = *(undefined4 *)((longlong)puVar9 + 0x1c);
        FUN_144b1698e(plVar5,&local_5c,
                      local_4c * 0x4b5fa4d9 + local_50 * 0x4c72a443 +
                      local_54 * 0x499d0f21 + local_58 * 0x448e2f4b & 0x7fffffff,&local_58);
        iVar8 = (((uint)uVar2 & 7) + ((uint)uVar3 & 7) * 8 | ((uint)uVar4 & 7) << 6) +
                *(int *)(*plVar5 + 0x18 + (longlong)local_5c * 0x20);
        *(int *)(param_1 + 0x40) = iVar8;
        *(ulonglong *)(param_1 + 0x20) = uVar2;
        *(ulonglong *)(param_1 + 0x28) = uVar3;
        *(ulonglong *)(param_1 + 0x30) = uVar4;
        *(int *)(param_1 + 0x38) = iVar1;
        *(undefined4 *)(param_1 + 0x3c) = local_6c;
      }
      FUN_144ab76a4(param_1,iVar8,(int)uVar6);
      puVar9 = puVar9 + 5;
    } while (puVar9 != local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d21a0 FUN_1456d21a0 body=94 status=ok
// SIG undefined FUN_1456d21a0(void)

void FUN_1456d21a0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  thunk_FUN_14016fae4();
  FUN_1446ddc76(&local_20,"FishingSpotState",1);
  *(undefined8 *)(param_1 + 0x2b0) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d2200 FUN_1456d2200 body=44 status=ok
// SIG undefined FUN_1456d2200(void)

void FUN_1456d2200(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1456d232a();
  if (cVar1 == '\0') {
    FUN_140170a76(param_1,&DAT_14cbc3ee8);
    return;
  }
  return;
}



// FUNCTION 1456d222c FUN_1456d222c body=253 status=ok
// SIG undefined FUN_1456d222c(void)

void FUN_1456d222c(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1 + 0x1eb) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x1c7) == '\0')) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined4 *)(lVar6 + 0xc7c);
    uVar5 = *puVar2;
    pbVar3 = (byte *)(lVar6 + 0xc80);
    bVar4 = *pbVar3;
    if ((bVar4 & 1) != 0) {
      *pbVar3 = 0;
      *puVar2 = 0;
    }
    local_60 = &PTR_FUN_14b00be10;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_1406b39e6(&local_58,param_2 + 0x18);
    FUN_140d853aa(param_1,local_70,&local_60,0);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    FUN_140170ace(&local_60);
    if ((bVar4 & 1) != 0) {
      *puVar2 = uVar5;
      *pbVar3 = 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d232a FUN_1456d232a body=857 status=ok
// SIG undefined FUN_1456d232a(void)

ulonglong FUN_1456d232a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  int local_94 [3];
  longlong local_88;
  longlong *local_80;
  undefined1 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar11 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar5 = FUN_1456d2684(param_1);
  if (lVar5 != 0) {
    FUN_141068c44(param_1,&local_70);
    uVar6 = FUN_141068cca(param_1);
    FUN_140f4ea62(lVar5 + 0x18,&local_88,uVar6,&local_70);
    if (*(longlong *)(param_1 + 0x60) != local_88) {
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(longlong *)(param_1 + 0x60) = local_88;
    lVar7 = FUN_1410d0064(param_1);
    if ((((lVar7 != 0) && (lVar8 = FUN_1406f625c(lVar7), lVar8 != 0)) &&
        (FUN_141068c44(param_1,local_94), local_94[0] != 0)) &&
       (((*(int *)(lVar5 + 0x48) != 0 &&
         (lVar5 = FUN_1456d28b8(lVar5 + 0x48,local_94,lVar8), lVar5 != 0)) &&
        (FUN_14040d984(&local_88,lVar7), local_80 != (longlong *)0x0)))) {
      iVar4 = (int)local_80[1];
      do {
        if (iVar4 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_80[1];
        bVar12 = iVar4 == iVar3;
        if (bVar12) {
          *(int *)(local_80 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar11 = local_80;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
      if (plVar11 != (longlong *)0x0) {
        if (local_88 == 0) {
          uVar10 = 0;
        }
        else {
          FUN_140170b22(local_88,&local_a8,param_1 + 0x60,lVar5);
          uVar10 = CONCAT71((int7)((ulonglong)lVar5 >> 8),local_a8 != 0);
          if (local_a8 != 0) {
            local_70 = &LAB_145941cb8;
            local_68 = 0;
            FUN_1456d270c(&local_88,param_1);
            FUN_1448b6402(local_a8 + 0x58,&local_70,&local_88);
            FUN_1449db362(&local_88);
            local_70 = &LAB_145941cac;
            local_68 = 0;
            FUN_1456d270c(&local_88,param_1,&local_70);
            FUN_1448b6402(local_a8 + 0x40,&local_70,&local_88);
            FUN_1449db362(&local_88);
            local_70 = &LAB_148ce0174;
            local_68 = 0;
            FUN_1456d270c(&local_88,param_1,&local_70);
            FUN_1448b6402(local_a8 + 0x70,&local_70,&local_88);
            FUN_1449db362(&local_88);
            plVar2 = local_a0;
            *(longlong *)(param_1 + 0x78) = local_a8;
            plVar9 = *(longlong **)(param_1 + 0x80);
            if (plVar9 != local_a0) {
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
                UNLOCK();
                plVar9 = *(longlong **)(param_1 + 0x80);
              }
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar9 + 0x10))();
                }
              }
              *(longlong **)(param_1 + 0x80) = plVar2;
            }
          }
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_a0 + 1;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar1 = (int *)((longlong)local_a0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_a0 + 0x10))(local_a0);
              }
            }
          }
        }
        LOCK();
        plVar9 = plVar11 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        goto LAB_1456d25d5;
      }
    }
  }
  uVar10 = 0;
LAB_1456d25d5:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1456d2684 FUN_1456d2684 body=78 status=ok
// SIG undefined FUN_1456d2684(void)

longlong * FUN_1456d2684(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1456d26d2();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1456d26d2 FUN_1456d26d2 body=57 status=ok
// SIG undefined FUN_1456d26d2(void)

void FUN_1456d26d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaccd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaccd0 = FUN_140002ddd(FUN_1465e4260,uVar1,L"OakMigrationBehaviorMod");
  }
  return;
}



// FUNCTION 1456d270c FUN_1456d270c body=428 status=ok
// SIG undefined FUN_1456d270c(void)

longlong * FUN_1456d270c(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1456d27ec:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9613a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1456d27ec;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b9613a0;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1456d28b8 FUN_1456d28b8 body=458 status=ok
// SIG undefined FUN_1456d28b8(void)

undefined8 FUN_1456d28b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e0 [3];
  ushort local_c8;
  byte local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 **local_88 [3];
  ushort local_70;
  byte local_68;
  undefined1 local_60 [40];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1456d2b0e(param_1,local_60,param_2,param_3);
  cVar2 = FUN_1401144ce(local_60);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    FUN_140ca9cce(&local_118,local_60);
    local_b8[0] = 0;
    local_90 = 0;
    FUN_1456bb102(local_b8,param_3);
    local_c8 = 0x30;
    local_e0[0] = (undefined8 **)FUN_14001cc68(0x30,0);
    *(undefined4 *)local_e0[0] = (undefined4)local_118;
    *(undefined4 *)((longlong)local_e0[0] + 4) = local_118._4_4_;
    *(undefined4 *)(local_e0[0] + 1) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)local_e0[0] + 0xc) = uStack_110._4_4_;
    *(undefined4 *)(local_e0[0] + 2) = (undefined4)local_108;
    *(undefined4 *)((longlong)local_e0[0] + 0x14) = local_108._4_4_;
    *(undefined4 *)(local_e0[0] + 3) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)local_e0[0] + 0x1c) = uStack_100._4_4_;
    *(undefined4 *)(local_e0[0] + 4) = (undefined4)local_f8;
    *(undefined4 *)((longlong)local_e0[0] + 0x24) = local_f8._4_4_;
    *(undefined4 *)(local_e0[0] + 5) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)local_e0[0] + 0x2c) = uStack_f0._4_4_;
    local_c0 = 0x13;
    FUN_1456d2a84(local_88,local_e0,local_b8);
    uVar3 = FUN_14030a32e(local_88);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_88;
      if (0x18 < local_70) {
        pppuVar4 = (undefined8 ***)local_88[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_e0;
      if (0x18 < local_c8) {
        pppuVar4 = (undefined8 ***)local_e0[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(local_e0[0]);
    }
    FUN_144a5ac3a(local_b8);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d2a84 FUN_1456d2a84 body=138 status=ok
// SIG undefined FUN_1456d2a84(void)

undefined8 * FUN_1456d2a84(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  uVar2 = (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120);
  if (*(code **)(&DAT_14c9a8580 + uVar2) == (code *)0x0) {
    uVar1 = *(ushort *)(param_2 + 3);
    *(ushort *)(param_1 + 3) = uVar1;
    _Dst = param_1;
    _Src = param_2;
    if (0x18 < uVar1) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar1,0);
      *param_1 = _Dst;
      _Src = (undefined8 *)*param_2;
    }
    if (*(code **)((longlong)&DAT_14c9a85b0 + uVar2) == (code *)0x0) {
      memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b0 + uVar2))();
    }
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  else {
    (**(code **)(&DAT_14c9a8580 + uVar2))(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1456d2b0e FUN_1456d2b0e body=147 status=ok
// SIG undefined FUN_1456d2b0e(void)

undefined8 FUN_1456d2b0e(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ca9a50(param_1,local_40);
  FUN_14096c63a(local_40,param_2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_40;
    if (0x18 < local_28) {
      pppuVar2 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d2ba2 FUN_1456d2ba2 body=94 status=ok
// SIG undefined FUN_1456d2ba2(void)

void FUN_1456d2ba2(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x4c + (longlong)param_2 * 0x50);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x50 + 0x48);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x50 + 0x48);
  FUN_1456d2c00();
  return;
}



// FUNCTION 1456d2c00 FUN_1456d2c00 body=124 status=ok
// SIG undefined FUN_1456d2c00(void)

void FUN_1456d2c00(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1456d2c7c FUN_1456d2c7c body=79 status=ok
// SIG undefined FUN_1456d2c7c(void)

longlong FUN_1456d2c7c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405e677a();
  if (0 < (int)*(uint *)(lVar2 + 0x2b8)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x2b0) + lVar3);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x200) == param_3)) {
        return lVar1;
      }
      lVar3 = lVar3 + 0x10;
    } while ((ulonglong)*(uint *)(lVar2 + 0x2b8) << 4 != lVar3);
  }
  return 0;
}



// FUNCTION 1456d2ccc FUN_1456d2ccc body=226 status=ok
// SIG undefined FUN_1456d2ccc(void)

longlong * FUN_1456d2ccc(longlong *param_1)

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
  pcVar13 = FUN_146470544;
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



// FUNCTION 1456d2db4 FUN_1456d2db4 body=132 status=ok
// SIG undefined FUN_1456d2db4(void)

undefined1 * FUN_1456d2db4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456d2db0;
}



// FUNCTION 1456d2e38 FUN_1456d2e38 body=138 status=ok
// SIG undefined FUN_1456d2e38(void)

code * FUN_1456d2e38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxCameraLocation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456d2db4;
}



// FUNCTION 1456d2ec2 FUN_1456d2ec2 body=18 status=ok
// SIG undefined FUN_1456d2ec2(void)

void FUN_1456d2ec2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 1456d2ed4 FUN_1456d2ed4 body=90 status=ok
// SIG undefined FUN_1456d2ed4(void)

undefined8 * FUN_1456d2ed4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad61ff0;
  param_1[7] = &PTR_LAB_14ad62430;
  FUN_14017ae7a(param_1 + 0x19);
  FUN_145bf558a(param_1 + 0xb);
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456d2f2e FUN_1456d2f2e body=1017 status=ok
// SIG undefined FUN_1456d2f2e(void)

void FUN_1456d2f2e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(code **)(*(longlong *)(param_1 + -0x28) + 0x18) != FUN_147380f9e) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  lVar1 = *(longlong *)(param_1 + -0x18);
  if (*(byte *)(param_1 + -0x10) < 2) {
    local_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_48 = 0;
    FUN_144b1c3c6(param_1 + -0x10,&local_80,lVar1);
    uVar6 = 0;
    if (local_70._2_1_ == '\0') {
      uStack_60 = 0x1688;
      if ((char)local_70 == '\x03') {
        local_68 = 0;
        uStack_64 = 0xb;
        uVar3 = (local_80 & 0xffffffff) + *(longlong *)(lVar1 + 0xd0);
        iVar5 = 0xb;
        uVar4 = 0;
        local_58 = uVar3;
      }
      else {
        uVar4 = *(uint *)((longlong)&DAT_14c873434 + (ulonglong)((uint)local_70._1_1_ * 0x30));
        if ((int)uVar4 < 0x49) {
          if ((int)uVar4 < 0x2c) {
            if (uVar4 == 0x1b) {
              uVar4 = 0x1c;
            }
            else if (uVar4 == 0x13) {
              uVar4 = 0x15;
            }
            else if (uVar4 == 0x27) {
              uVar4 = 0x29;
            }
          }
          else if (uVar4 == 0x46) {
            uVar4 = 0x47;
          }
          else if (uVar4 == 0x35) {
            uVar4 = 0x38;
          }
          else if (uVar4 == 0x2c) {
            uVar4 = 0x2e;
          }
        }
        else if ((int)uVar4 < 0x61) {
          if (uVar4 == 0x5a) {
            uVar4 = 0x57;
          }
          else if (uVar4 == 0x4c) {
            uVar4 = 0x4d;
          }
          else if (uVar4 == 0x49) {
            uVar4 = 0x4a;
          }
        }
        else if (uVar4 == 0x61) {
          uVar4 = 0x62;
        }
        uStack_64 = 1;
        uVar2 = uStack_64;
        uStack_64 = 1;
        uVar6 = 0;
        uVar3 = ((local_80 & 0xffffffff) + *(longlong *)(lVar1 + 0xd8)) / (ulonglong)local_80._4_4_;
        uStack_50 = (undefined4)local_78;
        iVar5 = 1;
        local_58 = uVar3;
        local_68 = uVar4;
        if ((char)local_70 == '\x02') {
          uStack_4c = local_80._4_4_;
          uVar6 = (ulonglong)local_80._4_4_;
        }
        else {
          uStack_64 = uVar2;
          if ((char)local_70 == '\x04') {
            local_68 = 0x27;
            local_48 = CONCAT44(local_48._4_4_,1);
            uVar4 = 0x27;
          }
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
      iVar5 = 0;
    }
    local_80 = lVar1 + 0x30;
    if (lVar1 == 0) {
      local_80 = lVar1;
    }
    local_78 = local_80 + 0x48;
    if (local_80 == 0) {
      local_70 = 0;
      local_78 = 0;
    }
    else {
      local_70 = *(undefined8 *)(local_80 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x8c) = 0;
    if (iVar5 == 1) {
      if ((uVar4 != 0) && (uVar6 = 0, uVar4 < 0x74)) {
        uVar6 = (ulonglong)*(uint *)(&UNK_14a3507d8 + (longlong)(int)uVar4 * 4);
      }
      *(int *)(param_1 + 0x88) = (int)uVar6;
      *(ulonglong *)(param_1 + 0x80) = uVar3 * uVar6 - *(longlong *)(local_78 + 0x60);
    }
    else if (iVar5 == 0xb) {
      *(ulonglong *)(param_1 + 0x80) = uVar3 - *(longlong *)(local_78 + 0x58);
      *(undefined4 *)(param_1 + 0x88) = 1;
    }
    *(undefined8 *)(param_1 + 0x78) = local_48;
    *(undefined4 *)(param_1 + 0x68) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x6c) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x70) = uStack_50;
    *(uint *)(param_1 + 0x74) = uStack_4c;
    *(uint *)(param_1 + 0x58) = local_68;
    *(undefined4 *)(param_1 + 0x5c) = uStack_64;
    *(undefined4 *)(param_1 + 0x60) = uStack_60;
    *(undefined4 *)(param_1 + 100) = uStack_5c;
    FUN_1447f3744(&local_38);
    *(undefined8 *)(param_1 + 0x2c) = local_38;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    local_48 = 0;
    FUN_140100962(param_1 + -0x10,&local_80,lVar1);
    uVar2 = FUN_140100a1e(&local_68,lVar1,&local_80);
    local_80 = lVar1 + 0x60;
    if (lVar1 == 0) {
      local_80 = lVar1;
    }
    local_78 = local_80 + 0x48;
    if (local_80 == 0) {
      local_70 = 0;
      local_78 = 0;
    }
    else {
      local_70 = *(undefined8 *)(local_80 + 0x58);
    }
    FUN_1400db952(param_1,&local_80,&local_68,uVar2);
    *(undefined8 *)(param_1 + 0x78) = local_48;
    *(undefined4 *)(param_1 + 0x68) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x6c) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x70) = uStack_50;
    *(uint *)(param_1 + 0x74) = uStack_4c;
    *(uint *)(param_1 + 0x58) = local_68;
    *(undefined4 *)(param_1 + 0x5c) = uStack_64;
    *(undefined4 *)(param_1 + 0x60) = uStack_60;
    *(undefined4 *)(param_1 + 100) = uStack_5c;
    FUN_1447f3744(&local_38,&local_68);
    *(undefined8 *)(param_1 + 0x2c) = local_38;
  }
  FUN_14493819a(param_1,param_2,&local_80,0);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456d3342 FUN_1456d3342 body=226 status=ok
// SIG undefined FUN_1456d3342(void)

longlong * FUN_1456d3342(longlong *param_1)

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
  pcVar13 = FUN_1462b6650;
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



// FUNCTION 1456d342a FUN_1456d342a body=138 status=ok
// SIG undefined FUN_1456d342a(void)

code * FUN_1456d342a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UseForwardScreenSpaceShadowMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa2000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d012fc;
}



// FUNCTION 1456d34b4 FUN_1456d34b4 body=138 status=ok
// SIG undefined FUN_1456d34b4(void)

code * FUN_1456d34b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ForwardScreenSpaceShadowMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa2800000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456d342a;
}



// FUNCTION 1456d353e FUN_1456d353e body=71 status=ok
// SIG undefined FUN_1456d353e(void)

longlong FUN_1456d353e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_141498c8a();
  if (lVar1 != 0) {
    lVar2 = FUN_145a747aa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1456d3586 FUN_1456d3586 body=73 status=ok
// SIG undefined FUN_1456d3586(void)

void FUN_1456d3586(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456d35d0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb0c));
  if (iVar1 == *(int *)(param_1 + 0xb0c)) {
    return;
  }
  *(int *)(param_1 + 0xb0c) = iVar1;
  FUN_144b39528(param_1,*(undefined4 *)(param_1 + 0xb08),iVar1,0x58);
  return;
}



// FUNCTION 1456d35d0 FUN_1456d35d0 body=121 status=ok
// SIG undefined FUN_1456d35d0(void)

ulonglong FUN_1456d35d0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x58) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x58,0);
      uVar1 = uVar1 / 0x58;
    }
  }
  return uVar1;
}



// FUNCTION 1456d364a FUN_1456d364a body=114 status=ok
// SIG undefined FUN_1456d364a(void)

void FUN_1456d364a(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0xb00);
  if (*(longlong *)(param_1 + 0xb00) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x58 + lVar2);
  FUN_1401823d6(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0xb08);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar3 * 0x58);
    iVar1 = *(int *)(param_1 + 0xb08);
  }
  *(uint *)(param_1 + 0xb08) = iVar1 - param_3;
  return;
}



// FUNCTION 1456d36c2 FUN_1456d36c2 body=132 status=ok
// SIG undefined FUN_1456d36c2(void)

void FUN_1456d36c2(longlong param_1,int param_2)

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



// FUNCTION 1456d3748 FUN_1456d3748 body=205 status=ok
// SIG undefined FUN_1456d3748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d3748(void)

{
  if ((DAT_14c9ed0e7 & 2) == 0) {
    DAT_14c9ed0e7 = DAT_14c9ed0e7 | 2;
    _DAT_14c9ed088 = L"FLumenFrontLayerTranslucencyGBufferVS";
    _DAT_14c9ed0a0 = FUN_146826540;
    _DAT_14c9ed0a8 = FUN_146825d77;
    _DAT_14c9ed0b0 = FUN_146825fd6;
    _DAT_14c9ed0b8 = FUN_1407e02ea;
    _DAT_14c9ed0c0 = FUN_146826273;
    _DAT_14c9ed098 = FUN_1471dcb2a;
    _DAT_14c9ed0d8 = 0xffffffff00000108;
    _DAT_14c9ed0e0 = 8;
    DAT_14c9ed0e4 = 0;
    _DAT_14c9ed0c8 = &LAB_1471dcb60;
    FUN_1456d3816();
    FUN_1407e00cc(&DAT_14c9ed080);
    return;
  }
  return;
}



// FUNCTION 1456d3816 FUN_1456d3816 body=123 status=ok
// SIG undefined FUN_1456d3816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d3816(void)

{
  _DAT_14c9f17a0 = L"BASE";
  DAT_14c9f17ca = 4;
  _DAT_14c9f17a8 = FUN_141092e92();
  _DAT_14c9f17b0 = DAT_14c9ed090;
  _DAT_14c9f17b8 = &LAB_14682652b;
  DAT_14c9ed090 = &DAT_14c9f17a0;
  DAT_14c9ed0e5 = DAT_14c9ed0e5 + '\x01';
  _DAT_14c9f17c0 = 0x100000000;
  if (*(char *)(_DAT_14c9f17a8 + 100) != '\0') {
    DAT_14c9ed0e6 = DAT_14c9ed0e6 + '\x01';
  }
  return;
}



// FUNCTION 1456d3892 FUN_1456d3892 body=205 status=ok
// SIG undefined FUN_1456d3892(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d3892(void)

{
  if ((DAT_14c9ed20f & 2) == 0) {
    DAT_14c9ed20f = DAT_14c9ed20f | 2;
    _DAT_14c9ed1b0 = L"FLumenFrontLayerTranslucencyGBufferPS";
    _DAT_14c9ed1c8 = FUN_146826540;
    _DAT_14c9ed1d0 = FUN_146825d77;
    _DAT_14c9ed1d8 = FUN_146825fd6;
    _DAT_14c9ed1e0 = FUN_1407e02ea;
    _DAT_14c9ed1e8 = FUN_146826273;
    _DAT_14c9ed1c0 = FUN_1471dcbdc;
    _DAT_14c9ed200 = 0xffffffff00000108;
    _DAT_14c9ed208 = 8;
    DAT_14c9ed20c = 0;
    _DAT_14c9ed1f0 = &LAB_1471dcc12;
    FUN_1456d3960();
    FUN_1407e00cc(&DAT_14c9ed1a8);
    return;
  }
  return;
}



// FUNCTION 1456d3960 FUN_1456d3960 body=123 status=ok
// SIG undefined FUN_1456d3960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d3960(void)

{
  _DAT_14c9f17d0 = L"BASE";
  DAT_14c9f17fa = 4;
  _DAT_14c9f17d8 = FUN_141092e92();
  _DAT_14c9f17e0 = DAT_14c9ed1b8;
  _DAT_14c9f17e8 = &LAB_14682652b;
  DAT_14c9ed1b8 = &DAT_14c9f17d0;
  DAT_14c9ed20d = DAT_14c9ed20d + '\x01';
  _DAT_14c9f17f0 = 0x100000000;
  if (*(char *)(_DAT_14c9f17d8 + 100) != '\0') {
    DAT_14c9ed20e = DAT_14c9ed20e + '\x01';
  }
  return;
}



// FUNCTION 1456d39db FUN_1456d39db body=94 status=ok
// SIG undefined FUN_1456d39db(void)

void FUN_1456d39db(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1456d3a3a(param_1,param_2);
    puVar2 = (undefined8 *)(param_2 + 0x80);
    puVar3 = (undefined8 *)(param_1 + 0x80);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 1456d3a3a FUN_1456d3a3a body=181 status=ok
// SIG undefined FUN_1456d3a3a(void)

undefined4 * FUN_1456d3a3a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  FUN_140cbcab6(param_1 + 4,param_2 + 4);
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    FUN_140acb810(param_1 + 0x18,iVar1,0);
    FUN_140acb4e6(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    FUN_14576c354(param_1 + 0x1c,iVar1,0);
    FUN_140acbd53(*(undefined8 *)(param_1 + 0x1c),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1456d3af0 FUN_1456d3af0 body=118 status=ok
// SIG undefined FUN_1456d3af0(void)

void FUN_1456d3af0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1456d3b66 FUN_1456d3b66 body=101 status=ok
// SIG undefined FUN_1456d3b66(void)

void FUN_1456d3b66(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xa4 + (longlong)param_2 * 0xb0);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0xb0 + 0xa0);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0xb0 + 0xa0);
  FUN_1456d3bcc();
  return;
}



// FUNCTION 1456d3bcc FUN_1456d3bcc body=83 status=ok
// SIG undefined FUN_1456d3bcc(void)

void FUN_1456d3bcc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x20 + (longlong)param_2 * 0xb0);
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
  FUN_1456d3c20(param_1,param_2);
  return;
}



// FUNCTION 1456d3c20 FUN_1456d3c20 body=122 status=ok
// SIG undefined FUN_1456d3c20(void)

void FUN_1456d3c20(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb0 + 4) = uVar5;
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



// FUNCTION 1456d3ca6 FUN_1456d3ca6 body=226 status=ok
// SIG undefined FUN_1456d3ca6(void)

longlong * FUN_1456d3ca6(longlong *param_1)

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
  pcVar13 = FUN_146474832;
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



// FUNCTION 1456d3d8e FUN_1456d3d8e body=132 status=ok
// SIG undefined FUN_1456d3d8e(void)

undefined1 * FUN_1456d3d8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TilingAxes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456d3d8a;
}



// FUNCTION 1456d3e12 FUN_1456d3e12 body=138 status=ok
// SIG undefined FUN_1456d3e12(void)

code * FUN_1456d3e12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481c3be4;
}



// FUNCTION 1456d3e9c FUN_1456d3e9c body=1435 status=ok
// SIG undefined FUN_1456d3e9c(void)

char * FUN_1456d3e9c(char *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint *puVar7;
  char cVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  bool bVar18;
  
  uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2f0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(uint *)(lVar4 + 0x2f0) = uVar3 | 1;
    *(undefined8 *)(lVar4 + 0x2e0) = 0;
    *(undefined1 *)(lVar4 + 0x2e8) = 0;
    LOCK();
    UNLOCK();
    iVar13 = DAT_14c82b990 + 1;
    DAT_14c82b990 = DAT_14c82b990 + 1;
    FUN_1400c0f56(iVar13);
    __tlregdtor(FUN_1427339ca);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar15 = *(ulonglong **)(lVar4 + 0x2e0);
  if (*(ulonglong **)(lVar4 + 0x2e0) == (ulonglong *)0x0) {
    puVar2 = (undefined8 *)(lVar4 + 0x2e0);
    cVar8 = *(char *)(lVar4 + 0x2e8);
    puVar9 = (ulonglong *)FUN_1400c0eac(0x40,0x800);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 1;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    if (cVar8 == '\x01') {
      puVar15 = puVar9;
      if (puVar9 != (ulonglong *)0x0) goto LAB_1456d3ef9;
      puVar15 = (ulonglong *)0x0;
    }
    else {
      puVar15 = (ulonglong *)*puVar2;
      if (puVar15 != puVar9) {
        *puVar2 = puVar9;
        if (puVar9 != (ulonglong *)0x0) {
          LOCK();
          *(int *)((longlong)puVar9 + 0x1c) = *(int *)((longlong)puVar9 + 0x1c) + 1;
          UNLOCK();
        }
        if (puVar15 != (ulonglong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)puVar15 + 0x1c);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            FUN_142733a74();
          }
        }
        puVar15 = (ulonglong *)*puVar2;
      }
      if (puVar15 != (ulonglong *)0x0) goto LAB_1456d3ef9;
      puVar15 = (ulonglong *)0x0;
    }
  }
  else {
LAB_1456d3ef9:
    LOCK();
    *(int *)((longlong)puVar15 + 0x1c) = *(int *)((longlong)puVar15 + 0x1c) + 1;
    UNLOCK();
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  uVar16 = (param_2 >> 0x20) * -0x5087ae1f62d043d7 + param_2 * -0x34efebe6d34d3a04 +
           0x5b12db9242bd7ce7;
  while( true ) {
    puVar11 = DAT_14c82b988;
    if (DAT_14c82b988 == (uint *)0x0) {
      puVar11 = _aligned_malloc(0x108,8);
      memset(puVar11,0,0x108);
      *puVar11 = 0x20;
      puVar12 = (uint *)0x0;
      LOCK();
      bVar18 = DAT_14c82b988 != (uint *)0x0;
      puVar7 = puVar11;
      if (bVar18) {
        puVar12 = DAT_14c82b988;
        puVar7 = DAT_14c82b988;
      }
      DAT_14c82b988 = puVar7;
      UNLOCK();
      if (bVar18) {
        _aligned_free(puVar11);
        puVar11 = puVar12;
      }
    }
    uVar5 = (uVar16 >> 0x20) % (ulonglong)*puVar11;
    puVar9 = *(ulonglong **)(puVar11 + uVar5 * 2 + 2);
    if (*(ulonglong **)(puVar11 + uVar5 * 2 + 2) == (ulonglong *)0x0) {
      puVar9 = (ulonglong *)FUN_1400c0d5e(0x40,0x40);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      LOCK();
      puVar10 = *(ulonglong **)(puVar11 + uVar5 * 2 + 2);
      bVar18 = puVar10 == (ulonglong *)0x0;
      if (bVar18) {
        *(ulonglong **)(puVar11 + uVar5 * 2 + 2) = puVar9;
        puVar10 = (ulonglong *)0x0;
      }
      UNLOCK();
      if (!bVar18) {
        FUN_1467ab492(puVar9);
        puVar9 = puVar10;
      }
    }
    LOCK();
    uVar5 = *puVar9;
    if (uVar5 == 0) {
      *puVar9 = 1;
    }
    UNLOCK();
    if (uVar5 != 0) {
      FUN_1400c0ca8(puVar9);
    }
    if (puVar11 == DAT_14c82b988) break;
    LOCK();
    uVar5 = *puVar9;
    *puVar9 = *puVar9 - 1;
    UNLOCK();
    if ((char)(((uint)uVar5 & 2) >> 1) == '\0' && 3 < uVar5) {
      FUN_1400c0e08(puVar9);
    }
  }
  if ((code *)*param_3 == (code *)&LAB_14682da92) {
    bVar18 = (**(uint **)param_3[1] & 0xfffffffe) == *(uint *)((undefined8 *)param_3[1] + 1);
    *param_1 = bVar18;
    if (!bVar18) {
LAB_1456d407c:
      LOCK();
      uVar16 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      if ((char)(((uint)uVar16 & 2) >> 1) == '\0' && 3 < uVar16) {
        FUN_1400c0e08(puVar9);
      }
      goto LAB_1456d4041;
    }
  }
  else {
    cVar8 = (*(code *)*param_3)();
    *param_1 = cVar8;
    if (cVar8 == '\0') goto LAB_1456d407c;
  }
  puVar15[1] = param_2;
  *(undefined1 *)(puVar15 + 3) = 1;
  if ((undefined8 *)puVar9[2] == (undefined8 *)0x0) {
    puVar9[1] = (ulonglong)puVar15;
  }
  else {
    *(undefined8 *)puVar9[2] = puVar15;
  }
  puVar9[2] = (ulonglong)puVar15;
  LOCK();
  uVar5 = *puVar9;
  *puVar9 = *puVar9 - 1;
  UNLOCK();
  if ((char)(((uint)uVar5 & 2) >> 1) == '\0' && 3 < uVar5) {
    FUN_1400c0e08(puVar9);
  }
  if ((code *)*param_4 != (code *)&DAT_14682da90) {
    (*(code *)*param_4)(param_4[1]);
  }
  FUN_1400c094e(puVar15 + 3);
  puVar11 = DAT_14c82b988;
  if (puVar15[1] != 0) {
    while ((DAT_14c82b988 = puVar11, puVar11 != (uint *)0x0 &&
           (puVar9 = *(ulonglong **)(puVar11 + ((uVar16 >> 0x20) % (ulonglong)*puVar11) * 2 + 2),
           puVar9 != (ulonglong *)0x0))) {
      LOCK();
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        *puVar9 = 1;
      }
      UNLOCK();
      if (uVar5 != 0) {
        FUN_1400c0ca8(puVar9);
      }
      if (puVar11 == DAT_14c82b988) {
        puVar10 = puVar9 + 1;
        puVar6 = (ulonglong *)0x0;
        goto LAB_1456d412f;
      }
      LOCK();
      uVar5 = *puVar9;
      *puVar9 = *puVar9 - 1;
      UNLOCK();
      puVar11 = DAT_14c82b988;
      if ((char)(((uint)uVar5 & 2) >> 1) == '\0' && 3 < uVar5) {
        FUN_1400c0e08(puVar9);
        puVar11 = DAT_14c82b988;
      }
    }
    goto LAB_1456d43b4;
  }
  goto LAB_1456d402d;
  while (puVar6 = puVar10, puVar15 != puVar10) {
LAB_1456d412f:
    puVar17 = puVar6;
    puVar14 = puVar10;
    puVar10 = (ulonglong *)*puVar14;
    if (puVar10 == (ulonglong *)0x0) goto LAB_1456d4164;
  }
  puVar10[1] = 0;
  if ((ulonglong *)puVar9[2] == puVar15) {
    puVar9[2] = (ulonglong)puVar17;
  }
  *puVar14 = *puVar10;
  *puVar10 = 0;
LAB_1456d4164:
  LOCK();
  uVar16 = *puVar9;
  *puVar9 = *puVar9 - 1;
  UNLOCK();
  if ((char)(((uint)uVar16 & 2) >> 1) == '\0' && 3 < uVar16) {
    FUN_1400c0e08(puVar9);
  }
  if (puVar10 != (ulonglong *)0x0) goto LAB_1456d4041;
LAB_1456d43b4:
  FUN_1400c094e(puVar15 + 3,0x7ff0000000000000);
LAB_1456d402d:
  param_1[1] = '\x01';
  *(ulonglong *)(param_1 + 8) = puVar15[2];
  puVar15[2] = 0;
LAB_1456d4041:
  if (puVar15 != (ulonglong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar15 + 0x1c);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_142733a74(puVar15);
    }
  }
  return param_1;
}



// FUNCTION 1456d4438 FUN_1456d4438 body=146 status=ok
// SIG undefined FUN_1456d4438(void)

void FUN_1456d4438(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456d44ca FUN_1456d44ca body=390 status=ok
// SIG undefined FUN_1456d44ca(void)

void FUN_1456d44ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a8e9fd0;
  plVar4[2] = (longlong)&PTR_FUN_14a8e9ff0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0x10;
    plVar5 = *(longlong **)(param_1 + 400);
    if (plVar5 == (longlong *)0x0) goto LAB_1456d4566;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_1456d45dc:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1456d4566;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x188) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 400);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 400) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1456d45dc;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1456d4566:
  uVar3 = DAT_14c98e618;
  local_38 = *(undefined8 *)(param_1 + 0x188);
  local_30 = *(longlong *)(param_1 + 400);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1456d4652(uVar3,&local_38,2);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456d4652 FUN_1456d4652 body=151 status=ok
// SIG undefined FUN_1456d4652(void)

undefined4 FUN_1456d4652(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0xffffffff;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_20[0] = param_3;
  uVar4 = FUN_1456d46ea(param_1,&local_30,local_20);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d46ea FUN_1456d46ea body=271 status=ok
// SIG undefined FUN_1456d46ea(void)

undefined4 FUN_1456d46ea(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    local_40 = *param_3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_30 = plVar5;
    }
    local_38 = lVar4;
    uVar6 = FUN_1456d47fa(param_1 + 0x648,&local_40);
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d47fa FUN_1456d47fa body=451 status=ok
// SIG undefined FUN_1456d47fa(void)

ulonglong FUN_1456d47fa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *unaff_RBX;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_1 + 0x80;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar7;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_144a81a4c(&local_50);
    iVar5 = *(int *)(param_1 + 0x90);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_78 = (undefined8 *)param_1;
  if ((iStack_3c != iVar5) || (uStack_48 != lVar7)) {
    unaff_RBX = &local_70;
    do {
      puVar3 = (undefined8 *)*(longlong *)((longlong)local_78 + 0x70);
      if (*(longlong *)((longlong)local_78 + 0x70) == 0) {
        puVar3 = local_78;
      }
      lVar2 = (longlong)*(int *)((longlong)puVar3 + 8 + (longlong)iStack_5c * 0x10);
      if (lVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)((longlong)puVar3 + (longlong)iStack_5c * 0x10) + lVar6) ==
              param_2[1]) {
            uVar4 = 0;
            goto LAB_1456d4912;
          }
          lVar6 = lVar6 + 0x10;
        } while (lVar2 * 0x10 != lVar6);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_144a81a4c(unaff_RBX);
    } while (((iStack_5c != iVar5) || (CONCAT44(uStack_64,uStack_68) != lVar7)) ||
            (local_78 != (undefined8 *)param_1));
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    FUN_1456d49be(param_1,param_2);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    plVar1 = (longlong *)(param_1 + 200);
    iVar5 = *(int *)(param_1 + 0xd0);
    lVar7 = (longlong)iVar5;
    *(uint *)(param_1 + 0xd0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar5 + 1U) {
      FUN_1469b6b76(plVar1,iVar5);
    }
    lVar2 = *plVar1;
    *(undefined8 *)(lVar2 + lVar7 * 0x18) = *param_2;
    *(undefined8 *)(lVar2 + 8 + lVar7 * 0x18) = param_2[1];
    lVar6 = param_2[2];
    *(longlong *)(lVar2 + 0x10 + lVar7 * 0x18) = lVar6;
    uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
LAB_1456d4912:
  local_78 = param_2 + 1;
  FUN_145a38772(param_1 + 0xb8);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d49be FUN_1456d49be body=704 status=ok
// SIG undefined FUN_1456d49be(void)

void FUN_1456d49be(longlong param_1,byte *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar5 = *param_2;
  lVar1 = param_1 + 0x80;
  if ((int)(uint)bVar5 < *(int *)(param_1 + 0x90)) {
    lVar6 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar6 = lVar1;
    }
    if ((*(uint *)(lVar6 + (ulonglong)(bVar5 >> 5) * 4) >> (bVar5 & 0x1f) & 1) != 0)
    goto LAB_1456d4a3b;
  }
  FUN_1456d4d04(param_1,&local_90);
  *(undefined8 *)CONCAT44(uStack_84,local_88) = 0;
  ((undefined8 *)CONCAT44(uStack_84,local_88))[1] = 0;
  FUN_1402c4db1(0,0);
  bVar5 = *param_2;
LAB_1456d4a3b:
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar6 = param_1;
  }
  plVar7 = (longlong *)((ulonglong)bVar5 * 0x10 + lVar6);
  iVar8 = *(int *)(param_2 + 4);
  if (iVar8 == -1) {
    iVar8 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar8 + 1U) {
      FUN_1456d4c80(plVar7,iVar8);
    }
    lVar6 = *plVar7;
    *(undefined8 *)(lVar6 + (longlong)iVar8 * 0x10) = *(undefined8 *)(param_2 + 8);
    lVar9 = *(longlong *)(param_2 + 0x10);
    *(longlong *)(lVar6 + 8 + (longlong)iVar8 * 0x10) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    if ((int)plVar7[1] <= iVar8) {
      FUN_1469af86e(plVar7,iVar8);
      iVar8 = *(int *)(param_2 + 4);
    }
    FUN_1469af8f2(plVar7,param_2 + 8,iVar8);
  }
  local_98 = (longlong *)(param_1 + 0xa0);
  iVar8 = *(int *)(param_1 + 0xac);
  FUN_1402c4db1(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar8 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_1469b6d70(local_98);
  }
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_144a81a4c(&local_68);
    iVar8 = *(int *)(param_1 + 0x90);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_90 = param_1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar1)) {
    do {
      lVar6 = *(longlong *)(local_90 + 0x70);
      if (*(longlong *)(local_90 + 0x70) == 0) {
        lVar6 = local_90;
      }
      lVar9 = (longlong)*(int *)(lVar6 + 8 + (longlong)iStack_74 * 0x10);
      if (lVar9 != 0) {
        lVar6 = *(longlong *)(lVar6 + (longlong)iStack_74 * 0x10);
        lVar10 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar10) != 0) {
            iVar2 = *(int *)(param_1 + 0xa8);
            *(uint *)(param_1 + 0xa8) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0xac) < iVar2 + 1U) {
              FUN_1456d4c80(local_98,iVar2);
            }
            lVar3 = *local_98;
            *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = *(undefined8 *)(lVar6 + lVar10);
            lVar4 = *(longlong *)(lVar6 + 8 + lVar10);
            *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
          }
          lVar10 = lVar10 + 0x10;
        } while (lVar9 * 0x10 != lVar10);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_144a81a4c(&local_88);
    } while (local_90 != param_1 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456d4c80 FUN_1456d4c80 body=132 status=ok
// SIG undefined FUN_1456d4c80(void)

void FUN_1456d4c80(longlong param_1,int param_2)

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



// FUNCTION 1456d4d04 FUN_1456d4d04 body=387 status=ok
// SIG undefined FUN_1456d4d04(void)

uint * FUN_1456d4d04(longlong param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((int)param_3 < iVar3) {
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar6 = param_1;
    }
  }
  else {
    iVar5 = param_3 + 1;
    *(int *)(param_1 + 0x78) = iVar5;
    if ((uint)(*(int *)(param_1 + 0x7c) - iVar3) < (uint)(iVar5 - iVar3)) {
      FUN_1469b6c0a(param_1);
      iVar5 = *(int *)(param_1 + 0x78);
    }
    lVar6 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar6 = param_1;
    }
    iVar3 = *(int *)(param_1 + 0x90);
    if (iVar3 < iVar5) {
      do {
        *(undefined4 *)(lVar6 + (longlong)iVar3 * 0x10) = 0xffffffff;
        iVar5 = *(int *)(param_1 + 0x98);
        *(int *)(lVar6 + 4 + (longlong)iVar3 * 0x10) = iVar5;
        if (*(int *)(param_1 + 0x9c) != 0) {
          *(int *)(lVar6 + (longlong)iVar5 * 0x10) = iVar3;
        }
        *(int *)(param_1 + 0x98) = iVar3;
        iVar3 = FUN_14489e6aa(param_1 + 0x80,1);
        lVar4 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar4 = param_1 + 0x80;
        }
        iVar5 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar5 = iVar3;
        }
        bVar2 = (byte)iVar3 & 0x1f;
        puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        iVar3 = *(int *)(param_1 + 0x90);
      } while (iVar3 < *(int *)(param_1 + 0x78));
    }
  }
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  lVar4 = (ulonglong)param_3 * 0x10;
  iVar3 = *(int *)(lVar6 + lVar4);
  iVar5 = *(int *)(lVar6 + 4 + lVar4);
  if ((longlong)iVar3 == -1) {
    *(int *)(param_1 + 0x98) = iVar5;
  }
  else {
    *(int *)(lVar6 + 4 + (longlong)iVar3 * 0x10) = iVar5;
  }
  if (iVar5 != -1) {
    *(int *)(lVar6 + (longlong)iVar5 * 0x10) = iVar3;
  }
  lVar6 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x88);
  }
  puVar1 = (uint *)(lVar6 + (ulonglong)(param_3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  *param_2 = param_3;
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar6 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar6 + lVar4;
  return param_2;
}



// FUNCTION 1456d4e88 FUN_1456d4e88 body=144 status=ok
// SIG undefined FUN_1456d4e88(void)

void FUN_1456d4e88(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 <= *(int *)(param_1 + 0x14)) {
    return;
  }
  iVar3 = 0x20;
  if (0x3f < param_2 + 0x1fU) {
    uVar4 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0x14) + 0x1fU < 0x40) {
      uVar1 = 4;
      if (4 < uVar4) {
        uVar1 = uVar4;
      }
    }
    else {
      uVar1 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
    }
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1 << 2,0);
      uVar1 = (uint)(uVar2 >> 2);
    }
    iVar3 = -0x20;
    if ((int)uVar4 <= (int)uVar1) {
      iVar3 = uVar1 << 5;
    }
  }
  *(int *)(param_1 + 0x14) = iVar3;
  FUN_14008f53c(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1456d4f18 FUN_1456d4f18 body=136 status=ok
// SIG undefined FUN_1456d4f18(void)

code * FUN_1456d4f18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"U1DistributionMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148046128;
}



// FUNCTION 1456d4fa0 FUN_1456d4fa0 body=138 status=ok
// SIG undefined FUN_1456d4fa0(void)

code * FUN_1456d4fa0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialParam3DataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480468b4;
}



// FUNCTION 1456d502a FUN_1456d502a body=138 status=ok
// SIG undefined FUN_1456d502a(void)

code * FUN_1456d502a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InterpIdShift";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480463da;
}



// FUNCTION 1456d50b4 FUN_1456d50b4 body=226 status=ok
// SIG undefined FUN_1456d50b4(void)

longlong * FUN_1456d50b4(longlong *param_1)

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
  pcVar13 = FUN_14645fe64;
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



// FUNCTION 1456d5198 FUN_1456d5198 body=138 status=ok
// SIG undefined FUN_1456d5198(void)

code * FUN_1456d5198(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SortedIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480475a2;
}



// FUNCTION 1456d5222 FUN_1456d5222 body=138 status=ok
// SIG undefined FUN_1456d5222(void)

code * FUN_1456d5222(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FacingMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480476b6;
}



// FUNCTION 1456d52ac FUN_1456d52ac body=138 status=ok
// SIG undefined FUN_1456d52ac(void)

code * FUN_1456d52ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NeedsPreciseMotionVectors";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804762c;
}



// FUNCTION 1456d5336 FUN_1456d5336 body=306 status=ok
// SIG undefined FUN_1456d5336(void)

void FUN_1456d5336(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x10);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x2e8) = 0;
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar4) || (local_68 != lVar2)) || (local_78 != plVar1));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140194d98(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456d546a FUN_1456d546a body=471 status=ok
// SIG undefined FUN_1456d546a(void)

undefined1 * FUN_1456d546a(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar3 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  FUN_1456d5642(plVar1,param_2 + 0x28);
  puVar2 = param_1 + 0x38;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar5 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (local_48 != puVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + (longlong)iStack_5c * 0x10);
      if (lVar3 != 0) {
        *(undefined1 **)(lVar3 + 0x2e8) = param_1;
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar5) || (local_68 != puVar2)) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456d5642 FUN_1456d5642 body=125 status=ok
// SIG undefined FUN_1456d5642(void)

undefined8 * FUN_1456d5642(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1456d56c0();
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



// FUNCTION 1456d56c0 FUN_1456d56c0 body=150 status=ok
// SIG undefined FUN_1456d56c0(void)

longlong * FUN_1456d56c0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 1456d5756 FUN_1456d5756 body=39 status=ok
// SIG undefined FUN_1456d5756(void)

undefined4 * FUN_1456d5756(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  FUN_14485c47a(param_1 + 3);
  return param_1;
}



// FUNCTION 1456d577e FUN_1456d577e body=232 status=ok
// SIG undefined FUN_1456d577e(void)

longlong * FUN_1456d577e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462b7768;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456d586c FUN_1456d586c body=24 status=ok
// SIG undefined FUN_1456d586c(void)

void FUN_1456d586c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456d5880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1456d5884 FUN_1456d5884 body=38 status=ok
// SIG undefined FUN_1456d5884(void)

undefined8 FUN_1456d5884(undefined8 param_1,int param_2)

{
  FUN_1456d58aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456d58aa FUN_1456d58aa body=100 status=ok
// SIG undefined FUN_1456d58aa(void)

void FUN_1456d58aa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b455300;
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 1456d590e FUN_1456d590e body=143 status=ok
// SIG undefined FUN_1456d590e(void)

void FUN_1456d590e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456d599e FUN_1456d599e body=292 status=ok
// SIG undefined FUN_1456d599e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d599e(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
  iVar3 = DAT_14cb10c4c;
  iVar2 = DAT_14cb10c20;
  _DAT_14cb10c98 = 0;
  _DAT_14cb10ca0 = 0;
  _DAT_14cb10ca8 = 0;
  _DAT_14cb10cb0 = 0;
  iVar6 = DAT_14cb10c20;
  DAT_14cb10c90 = param_1;
  if (DAT_14cb10c20 != DAT_14cb10c4c) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cb10c50;
    if (DAT_14cb10c58 != (undefined *)0x0) {
      puVar5 = DAT_14cb10c58;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar4 >> 0x10 ^ uVar4) &
                                   (longlong)DAT_14cb10c60 - 1U) * 4); iVar6 = DAT_14cb10c4c,
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x30 + DAT_14cb10c18 + 0x28)) {
      if (*(ulonglong *)(DAT_14cb10c18 + (longlong)iVar1 * 0x30) == param_1) {
        FUN_14019d2dc(&DAT_14cb10c18);
        iVar6 = DAT_14cb10c4c;
        break;
      }
    }
  }
  iVar1 = DAT_14cb10c20;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10c68);
  if ((iVar3 < iVar2) && (iVar1 == iVar6)) {
    FUN_140f93338(&DAT_14c9647b8,&DAT_14cb10c10);
    return;
  }
  return;
}



// FUNCTION 1456d5ac2 FUN_1456d5ac2 body=288 status=ok
// SIG undefined FUN_1456d5ac2(void)

longlong FUN_1456d5ac2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  lVar2 = DAT_14ca1a490;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (*piVar1 == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  FUN_1401a8b70(param_1,*(int *)(lVar2 + uVar4 * 4) >> 2,L"Nanite.SkinningHeaders",1);
  lVar2 = DAT_14ca1a478;
  if (*piVar1 == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  FUN_1401a8b70(param_1 + 0x20,*(int *)(lVar2 + uVar4 * 4) >> 2,L"Nanite.BoneHierarchy",1);
  lVar2 = DAT_14ca1a478;
  if (*piVar1 == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  FUN_1401a8b70(param_1 + 0x40,*(int *)(lVar2 + uVar4 * 4) >> 2,L"Nanite.BoneObjectSpace",1);
  lVar2 = DAT_14ca1a478;
  if (*piVar1 == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar3 ^ 1);
  }
  FUN_1401a8b70(param_1 + 0x60,*(int *)(lVar2 + uVar4 * 4) >> 2,L"Nanite.BoneTransforms",1);
  return param_1;
}



// FUNCTION 1456d5be2 FUN_1456d5be2 body=132 status=ok
// SIG undefined FUN_1456d5be2(void)

void FUN_1456d5be2(longlong param_1,int param_2)

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



// FUNCTION 1456d5c68 FUN_1456d5c68 body=267 status=ok
// SIG undefined FUN_1456d5c68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1456d5c68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000028;
  
  *param_1 = &PTR_LAB_14a915960;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14c846350;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_14c846358;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  uVar1 = CONCAT44(DAT_14c84628c,DAT_14c846288);
  param_1[0x10] = CONCAT44(DAT_14c846284,DAT_14c846280);
  param_1[0x11] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0xe] = _DAT_14c846270;
  param_1[0xf] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[0xc] = _DAT_14c846260;
  param_1[0xd] = uVar1;
  uVar1 = DAT_14c846258;
  param_1[10] = _DAT_14c846250;
  param_1[0xb] = uVar1;
  uVar1 = DAT_14c846258;
  param_1[0x12] = _DAT_14c846250;
  param_1[0x13] = uVar1;
  uVar1 = _DAT_14c846268;
  param_1[0x14] = _DAT_14c846260;
  param_1[0x15] = uVar1;
  uVar1 = _DAT_14c846278;
  param_1[0x16] = _DAT_14c846270;
  param_1[0x17] = uVar1;
  uVar4 = DAT_14c84628c;
  uVar3 = DAT_14c846288;
  uVar2 = DAT_14c846284;
  *(undefined4 *)(param_1 + 0x18) = DAT_14c846280;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 4) = in_stack_00000028;
  FUN_1417c9f30(param_1 + 0x1c);
  *param_1 = &PTR_FUN_14a915a60;
  param_1[0x1c] = &PTR_FUN_14a915a90;
  param_1[0x50] = 0;
  return param_1;
}



// FUNCTION 1456d5d74 FUN_1456d5d74 body=68 status=ok
// SIG undefined FUN_1456d5d74(void)

void FUN_1456d5d74(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1401d38b5(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147d2e616(param_1,param_2);
  return;
}



// FUNCTION 1456d5dba FUN_1456d5dba body=226 status=ok
// SIG undefined FUN_1456d5dba(void)

longlong * FUN_1456d5dba(longlong *param_1)

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
  pcVar13 = FUN_1462b7bb8;
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



// FUNCTION 1456d5ea2 FUN_1456d5ea2 body=138 status=ok
// SIG undefined FUN_1456d5ea2(void)

code * FUN_1456d5ea2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneHeightfieldObjectData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147138d02;
}



// FUNCTION 1456d5f2c FUN_1456d5f2c body=138 status=ok
// SIG undefined FUN_1456d5f2c(void)

code * FUN_1456d5f2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSceneObjects";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b7c40;
}



// FUNCTION 1456d5fb6 FUN_1456d5fb6 body=56 status=ok
// SIG undefined FUN_1456d5fb6(void)

undefined8 FUN_1456d5fb6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1401ae3d4();
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001456d5fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1d0))(*(longlong **)(param_1 + 8),param_2)
    ;
    return uVar2;
  }
  return 0;
}



// FUNCTION 1456d5fee FUN_1456d5fee body=54 status=ok
// SIG undefined FUN_1456d5fee(void)

LPCRITICAL_SECTION FUN_1456d5fee(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  memset(param_1 + 1,0,0xfe);
  return param_1;
}



// FUNCTION 1456d6024 FUN_1456d6024 body=59 status=ok
// SIG undefined FUN_1456d6024(void)

void FUN_1456d6024(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 4));
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// FUNCTION 1456d6060 FUN_1456d6060 body=205 status=ok
// SIG undefined FUN_1456d6060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d6060(void)

{
  if ((DAT_14c9e552f & 2) == 0) {
    DAT_14c9e552f = DAT_14c9e552f | 2;
    _DAT_14c9e54d0 = L"FCalculateCompactBlockInstanceOffsetsCs";
    _DAT_14c9e54e8 = FUN_146826540;
    _DAT_14c9e54f0 = FUN_146825d77;
    _DAT_14c9e54f8 = FUN_146825fd6;
    _DAT_14c9e5500 = FUN_1407e02ea;
    _DAT_14c9e5508 = FUN_146826273;
    _DAT_14c9e54e0 = FUN_1471be224;
    _DAT_14c9e5520 = 0xffffffff000000e0;
    _DAT_14c9e5528 = 8;
    DAT_14c9e552c = 0;
    _DAT_14c9e5510 = &LAB_1471be24e;
    FUN_1456d612e();
    FUN_1407e00cc(&DAT_14c9e54c8);
    return;
  }
  return;
}



// FUNCTION 1456d612e FUN_1456d612e body=123 status=ok
// SIG undefined FUN_1456d612e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d612e(void)

{
  _DAT_14c9e7118 = L"BASE";
  DAT_14c9e7142 = 4;
  _DAT_14c9e7120 = FUN_140b35ae4();
  _DAT_14c9e7128 = DAT_14c9e54d8;
  _DAT_14c9e7130 = &LAB_14682652b;
  DAT_14c9e54d8 = &DAT_14c9e7118;
  DAT_14c9e552d = DAT_14c9e552d + '\x01';
  _DAT_14c9e7138 = 0x100000000;
  if (*(char *)(_DAT_14c9e7120 + 100) != '\0') {
    DAT_14c9e552e = DAT_14c9e552e + '\x01';
  }
  return;
}



// FUNCTION 1456d61aa FUN_1456d61aa body=226 status=ok
// SIG undefined FUN_1456d61aa(void)

longlong * FUN_1456d61aa(longlong *param_1)

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
  pcVar13 = FUN_1462d4126;
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



// FUNCTION 1456d6292 FUN_1456d6292 body=132 status=ok
// SIG undefined FUN_1456d6292(void)

undefined1 * FUN_1456d6292(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DrawCommandCompactionData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FInstanceCullingContext::FCompactionData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456d628e;
}



// FUNCTION 1456d6316 FUN_1456d6316 body=138 status=ok
// SIG undefined FUN_1456d6316(void)

code * FUN_1456d6316(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlockDestInstanceOffsetsOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c7662;
}



// FUNCTION 1456d63a0 FUN_1456d63a0 body=205 status=ok
// SIG undefined FUN_1456d63a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d63a0(void)

{
  if ((DAT_14c9e5657 & 2) == 0) {
    DAT_14c9e5657 = DAT_14c9e5657 | 2;
    _DAT_14c9e55f8 = L"FCompactVisibleInstancesCs";
    _DAT_14c9e5610 = FUN_146826540;
    _DAT_14c9e5618 = FUN_146825d77;
    _DAT_14c9e5620 = FUN_146825fd6;
    _DAT_14c9e5628 = FUN_1407e02ea;
    _DAT_14c9e5630 = FUN_146826273;
    _DAT_14c9e5608 = FUN_1471be2ea;
    _DAT_14c9e5648 = 0xffffffff000000e0;
    _DAT_14c9e5650 = 8;
    DAT_14c9e5654 = 0;
    _DAT_14c9e5638 = &LAB_1471be314;
    FUN_1456d646e();
    FUN_1407e00cc(&DAT_14c9e55f0);
    return;
  }
  return;
}



// FUNCTION 1456d646e FUN_1456d646e body=123 status=ok
// SIG undefined FUN_1456d646e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d646e(void)

{
  _DAT_14c9e7148 = L"BASE";
  DAT_14c9e7172 = 4;
  _DAT_14c9e7150 = FUN_140b35ae4();
  _DAT_14c9e7158 = DAT_14c9e5600;
  _DAT_14c9e7160 = &LAB_14682652b;
  DAT_14c9e5600 = &DAT_14c9e7148;
  DAT_14c9e5655 = DAT_14c9e5655 + '\x01';
  _DAT_14c9e7168 = 0x100000000;
  if (*(char *)(_DAT_14c9e7150 + 100) != '\0') {
    DAT_14c9e5656 = DAT_14c9e5656 + '\x01';
  }
  return;
}



// FUNCTION 1456d64ea FUN_1456d64ea body=226 status=ok
// SIG undefined FUN_1456d64ea(void)

longlong * FUN_1456d64ea(longlong *param_1)

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
  pcVar13 = FUN_1462d41ae;
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



// FUNCTION 1456d65d2 FUN_1456d65d2 body=138 status=ok
// SIG undefined FUN_1456d65d2(void)

code * FUN_1456d65d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdsBufferOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c76ec;
}



// FUNCTION 1456d665c FUN_1456d665c body=138 status=ok
// SIG undefined FUN_1456d665c(void)

code * FUN_1456d665c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdsBufferIn";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001dd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d4236;
}



// FUNCTION 1456d66e6 FUN_1456d66e6 body=51 status=ok
// SIG undefined FUN_1456d66e6(void)

void FUN_1456d66e6(longlong param_1)

{
  FUN_1448b6576();
  if ((*(char *)(param_1 + 0x9b8) == '\x01') && (*(longlong *)(param_1 + 800) != 0)) {
    FUN_1411096d2();
    return;
  }
  return;
}



// FUNCTION 1456d671a FUN_1456d671a body=205 status=ok
// SIG undefined FUN_1456d671a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d671a(void)

{
  if ((DAT_14c9fd527 & 2) == 0) {
    DAT_14c9fd527 = DAT_14c9fd527 | 2;
    _DAT_14c9fd4c8 = L"FScreenProbeIntegrateCS";
    _DAT_14c9fd4e0 = FUN_146826540;
    _DAT_14c9fd4e8 = FUN_146825d77;
    _DAT_14c9fd4f0 = FUN_146825fd6;
    _DAT_14c9fd4f8 = FUN_1407e02ea;
    _DAT_14c9fd500 = FUN_146826273;
    _DAT_14c9fd4d8 = FUN_1472093a2;
    _DAT_14c9fd518 = 0xffffffff000000e0;
    _DAT_14c9fd520 = 8;
    DAT_14c9fd524 = 0;
    _DAT_14c9fd508 = &LAB_1472093cc;
    FUN_1456d67e8();
    FUN_1407e00cc(&DAT_14c9fd4c0);
    return;
  }
  return;
}



// FUNCTION 1456d67e8 FUN_1456d67e8 body=123 status=ok
// SIG undefined FUN_1456d67e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d67e8(void)

{
  _DAT_14ca00708 = L"BASE";
  DAT_14ca00732 = 4;
  _DAT_14ca00710 = FUN_140b35ae4();
  _DAT_14ca00718 = DAT_14c9fd4d0;
  _DAT_14ca00720 = &LAB_14682652b;
  DAT_14c9fd4d0 = &DAT_14ca00708;
  DAT_14c9fd525 = DAT_14c9fd525 + '\x01';
  _DAT_14ca00728 = 0x100000000;
  if (*(char *)(_DAT_14ca00710 + 100) != '\0') {
    DAT_14c9fd526 = DAT_14c9fd526 + '\x01';
  }
  return;
}



// FUNCTION 1456d6864 FUN_1456d6864 body=144 status=ok
// SIG undefined FUN_1456d6864(void)

code * FUN_1456d6864(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4cff4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ScreenSpaceBentNormalParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenScreenSpaceBentNormalParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1d000000398;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1456d68f4;
}



// FUNCTION 1456d68f4 FUN_1456d68f4 body=144 status=ok
// SIG undefined FUN_1456d68f4(void)

code * FUN_1456d68f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1c000000397;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e68fa;
}



// FUNCTION 1456d6984 FUN_1456d6984 body=146 status=ok
// SIG undefined FUN_1456d6984(void)

code * FUN_1456d6984(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456d6a16();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GatherParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FScreenProbeGatherParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000394;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ff900;
  return FUN_1462e6a1a;
}



// FUNCTION 1456d6a16 FUN_1456d6a16 body=261 status=ok
// SIG undefined FUN_1456d6a16(void)

void FUN_1456d6a16(void)

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
              0x110) < DAT_14c9ff980) {
    FUN_144b3d300(&DAT_14c9ff980);
    if (DAT_14c9ff980 == -1) {
      FUN_1456d6b1c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenProbeGatherParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x83;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff900,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c701);
      _Init_thread_footer(&DAT_14c9ff980);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d6b1c FUN_1456d6b1c body=226 status=ok
// SIG undefined FUN_1456d6b1c(void)

longlong * FUN_1456d6b1c(longlong *param_1)

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
  pcVar13 = FUN_1462e6aaa;
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



// FUNCTION 1456d6c04 FUN_1456d6c04 body=136 status=ok
// SIG undefined FUN_1456d6c04(void)

code * FUN_1456d6c04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeRadianceWithBorder";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472184b0;
}



// FUNCTION 1456d6c8c FUN_1456d6c8c body=138 status=ok
// SIG undefined FUN_1456d6c8c(void)

code * FUN_1456d6c8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeRadianceSHDirectional";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147218426;
}



// FUNCTION 1456d6d22 FUN_1456d6d22 body=65 status=ok
// SIG undefined FUN_1456d6d22(void)

undefined8 * FUN_1456d6d22(undefined8 *param_1)

{
  FUN_1456d6d64();
  *param_1 = &PTR_FUN_14b759e80;
  param_1[5] = &PTR_FUN_14b75a3f0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_1456d6dba();
  }
  return param_1;
}



// FUNCTION 1456d6d64 FUN_1456d6d64 body=85 status=ok
// SIG undefined FUN_1456d6d64(void)

undefined8 * FUN_1456d6d64(undefined8 *param_1)

{
  FUN_1456d6e4a();
  *param_1 = &PTR_FUN_14a8d5d90;
  param_1[5] = &PTR_FUN_14a8d6300;
  param_1[0x274] = 0;
  param_1[0x26b] = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  param_1[0x270] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1384) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138c) = 0;
  return param_1;
}



// FUNCTION 1456d6dba FUN_1456d6dba body=143 status=ok
// SIG undefined FUN_1456d6dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1456d6dba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a7b40) {
    FUN_144b3d300(&DAT_14c9a7b40);
    if (DAT_14c9a7b40 == -1) {
      DAT_14c9a7b10 = 0;
      uRam000000014c9a7b18 = 0;
      DAT_14c9a7b00 = 0;
      uRam000000014c9a7b08 = 0;
      _DAT_14c9a7af0 = 0;
      uRam000000014c9a7af8 = 0;
      _DAT_14c9a7b20 = 0;
      DAT_14c9a7b28 = 1;
      _DAT_14c9a7b30 = 0;
      uRam000000014c9a7b38 = 0;
      atexit((_func_5014 *)&LAB_142b3fd27);
      _Init_thread_footer(&DAT_14c9a7b40);
    }
  }
  return &DAT_14c9a7af0;
}



// FUNCTION 1456d6e4a FUN_1456d6e4a body=1965 status=ok
// SIG undefined FUN_1456d6e4a(void)

undefined8 * FUN_1456d6e4a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5f3070;
  param_1[5] = &PTR_FUN_14a5f35e0;
  memset(param_1 + 6,0,0x720);
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  memset(param_1 + 0x111,0,0x390);
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4c) = 2;
  *(undefined4 *)(param_1 + 0x18a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc54) = 2;
  *(undefined4 *)(param_1 + 0x18b) = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 2;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 2;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf4) = 0x10000ea60;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 2;
  *(undefined8 *)((longlong)param_1 + 0xe64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xe7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xe94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xea4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xeac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xebc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xec4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xecc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xed4) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xeec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xedc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee4) = 0;
  *(undefined4 *)(param_1 + 0x1de) = 2;
  *(undefined4 *)((longlong)param_1 + 0xf04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xef4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xefc) = 0;
  param_1[0x1e1] = 2;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  *(undefined4 *)(param_1 + 0x1ed) = 0xffffffff;
  param_1[500] = 0;
  *(undefined4 *)(param_1 + 0x1f5) = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfb4) = 0;
  param_1[0x1f8] = 0;
  *(undefined4 *)(param_1 + 0x1f9) = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  puVar5[1] = 0;
  param_1[0x1fe] = puVar5;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_14a8e9bd0;
  puVar6[2] = puVar5;
  param_1[0x1ff] = puVar6;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  *(undefined4 *)(param_1 + 0x204) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1024) = 0;
  *(undefined8 *)((longlong)param_1 + 0x102c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1034) = 0;
  *(undefined8 *)((longlong)param_1 + 0x103c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1044) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1054) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1064) = 0;
  *(undefined8 *)((longlong)param_1 + 0x106c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1074) = 0;
  *(undefined8 *)((longlong)param_1 + 0x107c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1084) = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  *(undefined4 *)(param_1 + 0x214) = 2;
  *(undefined8 *)((longlong)param_1 + 0x10a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10b4) = 0;
  param_1[0x217] = 2;
  *(undefined4 *)(param_1 + 0x21a) = 0;
  param_1[0x225] = 0;
  *(undefined4 *)(param_1 + 0x226) = 0;
  param_1[0x227] = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  uVar7 = FUN_1411791a8();
  FUN_14112365e(param_1 + 0x22c,uVar7);
  param_1[0x22c] = &PTR_FUN_14a5f83f0;
  param_1[0x24c] = 0;
  *(undefined4 *)(param_1 + 0x24d) = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  param_1[0x246] = 0;
  param_1[0x247] = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined8 *)((longlong)param_1 + 0x126c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1274) = 0;
  param_1[0x250] = 0;
  *(undefined4 *)(param_1 + 0x251) = 0;
  param_1[0x256] = 0;
  *(undefined4 *)(param_1 + 599) = 0;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  *(undefined8 *)((longlong)param_1 + 0x12bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x12c4) = 0;
  param_1[0x25a] = 0;
  *(undefined4 *)(param_1 + 0x25b) = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = 0;
  param_1[0x260] = 0;
  param_1[0x261] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0c) = 0xffc00000ff000028;
  *(undefined8 *)((longlong)param_1 + 0xd14) = 0xffff7f7fff7f7fff;
  *(undefined8 *)((longlong)param_1 + 0xd1c) = 0xff3fc020ff7fff00;
  *(undefined8 *)((longlong)param_1 + 0xd24) = 0xffdf959dff000000;
  *(undefined4 *)((longlong)param_1 + 0xd2c) = 0xff95df9d;
  *(undefined4 *)(param_1 + 0x1a6) = 0xff959ddf;
  *(undefined4 *)((longlong)param_1 + 0xd34) = 0xff1e1e1e;
  *(undefined4 *)(param_1 + 0x1a7) = 0xffffc4ff;
  *(undefined4 *)((longlong)param_1 + 0xd3c) = 0xff80ff80;
  param_1[0x1c6] = 0;
  *(undefined4 *)(param_1 + 0x1c7) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x1e2) = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  *(uint *)((longlong)param_1 + 0xc44) = *(uint *)((longlong)param_1 + 0xc44) & 0xffffffb8 | 7;
  *(undefined4 *)(param_1 + 0x189) = 0x41f00000;
  *(undefined1 *)(param_1 + 0x224) = 0;
  *(undefined1 *)(param_1 + 0x19e) = 1;
  *(undefined1 **)((longlong)param_1 + 0xcf4) = &DAT_100000018;
  *(undefined4 *)((longlong)param_1 + 0xcfc) = 0;
  FUN_1456d7a74(&local_60);
  if ((undefined8 **)(param_1 + 0x1a9) == &local_60) {
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((undefined8 *)param_1[0x1a9] != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x1a9] = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x1aa) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_1 + 0xd54) = local_58._4_4_;
  }
  param_1[0x1e3] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1e9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf26) = 3;
  if (DAT_14c872bf0 != '\0') goto LAB_1456d73e4;
  FUN_1456d75f8(&local_60);
  plVar3 = local_58;
  puVar5 = local_60;
  if ((undefined8 **)(param_1 + 0x1e7) == &local_60) {
LAB_1456d7591:
    puVar5 = (undefined8 *)param_1[0x1e7];
    plVar8 = (longlong *)param_1[0x1e8];
  }
  else {
    param_1[0x1e7] = local_60;
    local_60 = (undefined8 *)0x0;
    plVar2 = (longlong *)param_1[0x1e8];
    plVar8 = plVar2;
    if (local_58 != plVar2) {
      local_58 = (longlong *)0x0;
      param_1[0x1e8] = plVar3;
      plVar8 = plVar3;
      if (plVar2 != (longlong *)0x0) {
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        goto LAB_1456d7591;
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x1e6];
  param_1[0x1e5] = puVar5;
  param_1[0x1e6] = plVar8;
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
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1456d73e4:
  local_60 = (undefined8 *)0x0;
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *local_60 = &PTR_LAB_14a8e9c60;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_60[2] = lVar9;
  *local_60 = &PTR_FUN_14a8e9bf0;
  local_60[3] = param_1;
  FUN_1456d7658(param_1 + 0x1cd,local_68,&local_60);
  FUN_1449db362(&local_60);
  local_60 = (undefined8 *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = (longlong *)CONCAT44(local_58._4_4_,2);
  *local_60 = &PTR_LAB_14a8e9c60;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_60[2] = lVar9;
  *local_60 = &PTR_FUN_14a8e9cd0;
  local_60[3] = param_1;
  FUN_1456d7658(param_1 + 0x1d3,local_68,&local_60);
  FUN_1449db362(&local_60);
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456d75f8 FUN_1456d75f8 body=95 status=ok
// SIG undefined FUN_1456d75f8(void)

undefined8 * FUN_1456d75f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x18,0x10);
  FUN_1456d773e(uVar1);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a8cac00;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1456d7658 FUN_1456d7658 body=216 status=ok
// SIG undefined FUN_1456d7658(void)

undefined8 * FUN_1456d7658(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1456d773e FUN_1456d773e body=115 status=ok
// SIG undefined FUN_1456d773e(void)

undefined8 * FUN_1456d773e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a8ca2b0;
  lVar1 = FUN_14001cc68(0x148,0x10);
  FUN_1456d7906(lVar1);
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  FUN_1456d77b2(lVar1 + 0x130);
  *(undefined4 *)(lVar1 + 0x140) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x144) = 0;
  param_1[1] = lVar1;
  *(undefined2 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1456d77b2 FUN_1456d77b2 body=115 status=ok
// SIG undefined FUN_1456d77b2(void)

void FUN_1456d77b2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 4) {
    *(undefined4 *)(param_1 + 1) = 4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 4U - iVar1) {
      FUN_1456d79e0(param_1,iVar1);
    }
    FUN_1456d7825((longlong)iVar1 * 0x48 + *param_1,4U - iVar1);
    return;
  }
  if (iVar1 == 4) {
    return;
  }
  FUN_147a89c7c(param_1,iVar1 + -4);
  FUN_147a89cd2(param_1);
  return;
}



// FUNCTION 1456d7825 FUN_1456d7825 body=62 status=ok
// SIG undefined FUN_1456d7825(void)

void FUN_1456d7825(undefined8 *param_1,int param_2)

{
  do {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1456d7864(param_1);
    param_1 = param_1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1456d7864 FUN_1456d7864 body=161 status=ok
// SIG undefined FUN_1456d7864(void)

void FUN_1456d7864(longlong *param_1)

{
  longlong *plVar1;
  
  param_1[8] = -1;
  plVar1 = (longlong *)param_1[1];
  if ((plVar1 != (longlong *)0x0) && (*param_1 != 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    param_1[1] = 0;
  }
  if (((longlong *)param_1[3] != (longlong *)0x0) && (param_1[2] != 0)) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
    param_1[3] = 0;
  }
  if (((longlong *)param_1[5] != (longlong *)0x0) && (param_1[4] != 0)) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
  }
  if (((longlong *)param_1[7] != (longlong *)0x0) && (param_1[6] != 0)) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
    param_1[7] = 0;
  }
  return;
}



// FUNCTION 1456d7906 FUN_1456d7906 body=145 status=ok
// SIG undefined FUN_1456d7906(void)

undefined8 * FUN_1456d7906(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x1000000000;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1448b6aaa(param_1 + 5,DAT_14ca8b9f8);
  param_1[0x17] = 0;
  param_1[0x18] = 0x1000000000;
  FUN_1448b6aaa(param_1 + 0xf,DAT_14ca8b9f8);
  param_1[0x21] = 0;
  param_1[0x22] = 0x1000000000;
  FUN_1456d7998(param_1 + 0x19,DAT_14ca8b9f8);
  param_1[0x23] = 0;
  FUN_1456d7b38(param_1);
  return param_1;
}



// FUNCTION 1456d7998 FUN_1456d7998 body=71 status=ok
// SIG undefined FUN_1456d7998(void)

void FUN_1456d7998(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147a8c1ce();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x48) = param_2;
      FUN_147a8c2c2();
      return;
    }
  }
  return;
}



// FUNCTION 1456d79e0 FUN_1456d79e0 body=147 status=ok
// SIG undefined FUN_1456d79e0(void)

void FUN_1456d79e0(longlong param_1,int param_2)

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



// FUNCTION 1456d7a74 FUN_1456d7a74 body=194 status=ok
// SIG undefined FUN_1456d7a74(void)

undefined8 FUN_1456d7a74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(local_48,"Windows");
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(local_58,uVar1,L"Screenshots/");
  FUN_1401c7f3e(local_38,local_58,local_48);
  FUN_144a882a8(param_1,local_38,&DAT_149e065c6);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d7b38 FUN_1456d7b38 body=201 status=ok
// SIG undefined FUN_1456d7b38(void)

void FUN_1456d7b38(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0xffffffff;
  local_24 = 0;
  FUN_1456d7c48(param_1 + 0x19);
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1456d7c02(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_147a8c362(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  local_24 = 0x3f800000;
  FUN_1448b6b20(param_1 + 5,&local_24);
  local_24 = 0x3f800000;
  FUN_1448b6b20(param_1 + 0xf,&local_24);
  param_1[3] = 0;
  param_1[0x24] = 0x408000003c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d7c02 FUN_1456d7c02 body=69 status=ok
// SIG undefined FUN_1456d7c02(void)

void FUN_1456d7c02(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1456d7c48 FUN_1456d7c48 body=66 status=ok
// SIG undefined FUN_1456d7c48(void)

void FUN_1456d7c48(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456d7998(param_1,DAT_14ca8b9f8);
  if (0 < *(int *)(param_1 + 0x48)) {
    uVar1 = *param_2;
    lVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1;
      }
      *(undefined4 *)(lVar3 + lVar2 * 4) = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1456d7c8a FUN_1456d7c8a body=40 status=ok
// SIG undefined FUN_1456d7c8a(void)

undefined8 FUN_1456d7c8a(undefined8 param_1,int param_2)

{
  FUN_1456d7cb2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456d7cb2 FUN_1456d7cb2 body=81 status=ok
// SIG undefined FUN_1456d7cb2(void)

void FUN_1456d7cb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a675430;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b97de(param_1 + 0x1c);
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 1456d7d04 FUN_1456d7d04 body=131 status=ok
// SIG undefined FUN_1456d7d04(void)

void FUN_1456d7d04(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1456d7d88 FUN_1456d7d88 body=1416 status=ok
// SIG undefined FUN_1456d7d88(void)

void FUN_1456d7d88(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  undefined1 *puVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [40];
  undefined4 local_c0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 ***local_98 [2];
  undefined8 ***local_88;
  int local_80;
  uint local_7c;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x40) == '\0') {
    iVar7 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar7 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar15 = 0;
      do {
        plVar2 = *(longlong **)(lVar11 + lVar15);
        if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x409) != '\0')) {
          *(undefined1 *)((longlong)plVar2 + 0x409) = 0;
          FUN_140af93c2(plVar2,3);
          (**(code **)(*plVar2 + 0x650))(plVar2,*(undefined1 *)((longlong)plVar2 + 0x409));
        }
        lVar15 = lVar15 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar15);
    }
    goto LAB_1456d810a;
  }
  iVar7 = *(int *)(param_1 + 0x44);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar7 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar15 = 0;
      do {
        plVar2 = *(longlong **)(lVar11 + lVar15);
        if (plVar2 != (longlong *)0x0) {
          cVar6 = FUN_140d0050e(plVar2);
          if (cVar6 != '\0') {
            if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1456d7e36;
            FUN_14152b6d4(plVar2,0);
          }
          if (*(char *)((longlong)plVar2 + 0x409) == '\0') {
            *(undefined1 *)((longlong)plVar2 + 0x409) = 1;
            FUN_140af93c2(plVar2,2);
            (**(code **)(*plVar2 + 0x650))(plVar2);
          }
        }
LAB_1456d7e36:
        lVar15 = lVar15 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar15);
    }
    goto LAB_1456d810a;
  }
  if (iVar7 != 2) {
    if ((iVar7 == 1) && (iVar7 = *(int *)(param_1 + 0x38), (longlong)iVar7 != 0)) {
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar15 = 0;
      do {
        plVar2 = *(longlong **)(lVar11 + lVar15);
        if (plVar2 != (longlong *)0x0) {
          cVar6 = FUN_140d0050e(plVar2);
          if (cVar6 != '\0') {
            if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1456d827a;
            FUN_14152b6d4(plVar2,0);
          }
          fVar17 = (float)FUN_140ce4006();
          if ((fVar17 < *(float *)(lVar11 + 8 + lVar15)) &&
             (*(char *)((longlong)plVar2 + 0x409) == '\0')) {
            *(undefined1 *)((longlong)plVar2 + 0x409) = 1;
            FUN_140af93c2(plVar2,2);
            (**(code **)(*plVar2 + 0x650))(plVar2);
          }
        }
LAB_1456d827a:
        lVar15 = lVar15 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar15);
    }
    goto LAB_1456d810a;
  }
  local_e8[0] = 0;
  local_c0 = 0;
  FUN_1456bb102(local_e8,param_1);
  FUN_1447c3578(param_1 + 0x48,local_98,local_e8);
  iVar7 = FUN_1405d5f74(local_98);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar8 = local_98;
    if (0x18 < (ushort)local_80) {
      ppppuVar8 = (undefined8 ****)local_98[0];
    }
    (*pcVar3)(ppppuVar8);
  }
  if (0x18 < (ushort)local_80) {
    FUN_1400020a8(local_98[0]);
  }
  FUN_144a5ac3a(local_e8);
  if ((iVar7 < 0) || (*(int *)(param_1 + 0x38) <= iVar7)) goto LAB_1456d810a;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x1000000000;
  FUN_14097f3c8(local_e8,*(int *)(param_1 + 0x38),1);
  local_88 = (undefined8 ****)0x0;
  local_7c = 0x80;
  local_80 = *(int *)(param_1 + 0x38);
  uVar13 = local_80 + 0x1f;
  if (0x1f < uVar13) {
    if (uVar13 < 0xa0) {
      ppppuVar8 = local_98;
LAB_1456d7f3e:
      uVar13 = uVar13 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(local_98,0,uVar13 >> 5,4);
      local_7c = uVar13 & 0xffffffe0;
      ppppuVar8 = (undefined8 ****)local_88;
      if ((undefined8 ****)local_88 == (undefined8 ****)0x0) {
        ppppuVar8 = local_98;
      }
      if (uVar13 < 0x120) goto LAB_1456d7f3e;
      uVar13 = (uVar13 >> 5) << 2;
    }
    memset(ppppuVar8,0,(ulonglong)uVar13);
    iVar14 = local_80 + 0x1f;
    if (-1 < local_80) {
      iVar14 = local_80;
    }
    if (local_80 % 0x20 != 0) {
      ppppuVar8 = (undefined8 ****)local_88;
      if ((undefined8 ****)local_88 == (undefined8 ****)0x0) {
        ppppuVar8 = local_98;
      }
      bVar10 = -(char)(local_80 % 0x20);
      *(uint *)((longlong)ppppuVar8 + (longlong)(iVar14 >> 5) * 4) =
           (uint)(*(int *)((longlong)ppppuVar8 + (longlong)(iVar14 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar15 = 8;
      lVar11 = 0;
      fVar17 = 0.0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x30);
        lVar5 = *(longlong *)(lVar4 + -8 + lVar15);
        if (lVar5 != 0) {
          cVar6 = FUN_140d0050e(lVar5);
          if (cVar6 != '\0') {
            if (*(char *)(param_1 + 0x80) != '\x01') goto LAB_1456d7ff1;
            FUN_14152b6d4(lVar5);
          }
          fVar16 = *(float *)(lVar4 + lVar15);
          if (1.0 <= fVar16) {
            fVar16 = 1.0;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          fVar17 = fVar17 + fVar16;
          puVar9 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar9 = local_e8;
          }
          *(float *)(puVar9 + lVar11 * 4) = fVar16;
        }
LAB_1456d7ff1:
        lVar11 = lVar11 + 1;
        lVar15 = lVar15 + 0x10;
      } while (lVar11 < *(int *)(param_1 + 0x38));
      if ((0.0 < fVar17) && (0 < iVar7)) {
        iVar14 = 0;
        do {
          fVar16 = (float)FUN_140ce4006();
          if (0 < (int)*(uint *)(param_1 + 0x38)) {
            fVar16 = fVar16 * fVar17;
            puVar9 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar9 = local_e8;
            }
            lVar11 = 0;
            uVar12 = 0;
            do {
              fVar1 = *(float *)(puVar9 + uVar12 * 4);
              if (0.0 < fVar1) {
                if ((fVar16 < fVar1) &&
                   (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar11),
                   plVar2 != (longlong *)0x0)) {
                  ppppuVar8 = (undefined8 ****)local_88;
                  if ((undefined8 ****)local_88 == (undefined8 ****)0x0) {
                    ppppuVar8 = local_98;
                  }
                  if ((*(uint *)((longlong)ppppuVar8 + (uVar12 >> 5 & 0x7ffffff) * 4) >>
                       ((uint)uVar12 & 0x1f) & 1) != 0) {
                    FUN_14152b6d4(plVar2);
                  }
                  if (*(char *)((longlong)plVar2 + 0x409) == '\0') {
                    *(undefined1 *)((longlong)plVar2 + 0x409) = 1;
                    FUN_140af93c2(plVar2,2);
                    (**(code **)(*plVar2 + 0x650))(plVar2);
                  }
                  puVar9 = local_a8;
                  if (local_a8 == (undefined1 *)0x0) {
                    puVar9 = local_e8;
                  }
                  fVar17 = fVar17 - *(float *)(puVar9 + uVar12 * 4);
                  *(undefined4 *)(puVar9 + uVar12 * 4) = 0;
                  break;
                }
                fVar16 = fVar16 - fVar1;
              }
              uVar12 = uVar12 + 1;
              lVar11 = lVar11 + 0x10;
            } while (*(uint *)(param_1 + 0x38) != uVar12);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar7);
      }
    }
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1456d810a:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456d8312 thunk_FUN_1456d8318 body=5 status=ok
// SIG undefined thunk_FUN_1456d8318(void)

bool thunk_FUN_1456d8318(void)

{
  char cVar1;
  
  FUN_1456d8330();
  cVar1 = FUN_1456d839c();
  return cVar1 == '\0';
}



// FUNCTION 1456d8318 FUN_1456d8318 body=24 status=ok
// SIG undefined FUN_1456d8318(void)

bool FUN_1456d8318(void)

{
  char cVar1;
  
  FUN_1456d8330();
  cVar1 = FUN_1456d839c();
  return cVar1 == '\0';
}



// FUNCTION 1456d8330 FUN_1456d8330 body=73 status=ok
// SIG undefined FUN_1456d8330(void)

void FUN_1456d8330(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (DAT_14cb530d8 == '\0') {
    cVar1 = FUN_144a84189();
    if (cVar1 == '\0') {
      FUN_1485f5c02();
    }
    else {
      plVar3 = (longlong *)FUN_1448c2e7d();
      cVar1 = (**(code **)(*plVar3 + 0x50))(plVar3);
      if (cVar1 != '\0') {
        uVar2 = FUN_1456d867b();
        FUN_1456d8379(uVar2);
      }
    }
    DAT_14cb530d8 = '\x01';
  }
  return;
}



// FUNCTION 1456d8379 FUN_1456d8379 body=34 status=ok
// SIG undefined FUN_1456d8379(void)

ulonglong FUN_1456d8379(uint param_1)

{
  ulonglong uVar1;
  
  uVar1 = 1;
  if (param_1 < 7) {
    uVar1 = 0x6030405020100U >> ((char)param_1 * '\b' & 0x3fU) & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1456d839c FUN_1456d839c body=359 status=ok
// SIG undefined FUN_1456d839c(void)

byte FUN_1456d839c(void)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = FUN_1448c2e86();
  FUN_1401c23cc(&local_50);
  FUN_1401c2444(uVar6,&local_48,local_50);
  lVar2 = local_48;
  if ((longlong)local_40 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar8);
      plVar7 = (longlong *)FUN_14589669c();
      if (plVar1 == plVar7) {
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*plVar1 + 0x18))(plVar1);
        }
        else {
          uVar5 = 1;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)local_40 * 8 != lVar8);
  }
  uVar6 = FUN_1448c2e86();
  FUN_1448c303c(&local_68);
  FUN_1448c30b4(uVar6,&local_60,local_68);
  lVar2 = local_60;
  if ((longlong)local_58 == 0) {
    bVar3 = 1;
  }
  else {
    lVar8 = 0;
    bVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar2 + lVar8);
      plVar7 = (longlong *)thunk_FUN_1456d850a();
      if (plVar1 == plVar7) {
        if ((bVar3 & 1) == 0) {
          bVar3 = (**(code **)(*plVar1 + 0x18))(plVar1);
        }
        else {
          bVar3 = 1;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)local_58 * 8 != lVar8);
    bVar3 = ~bVar3 & 1;
  }
  if (local_60 != 0) {
    FUN_1400020a8(local_60);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  bVar4 = 1;
  if ((uVar5 & 1) != 0) {
    bVar4 = bVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d8504 thunk_FUN_1456d850a body=5 status=ok
// SIG undefined thunk_FUN_1456d850a(void)

undefined8 * thunk_FUN_1456d850a(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  
  if (DAT_14cb52ac8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *puVar2 = &PTR__purecall_14afc85d0;
    puVar2[1] = &PTR__purecall_14afc86b8;
    FUN_1409e1656(puVar2 + 2);
    ppuVar3 = &PTR_FUN_14afc8490;
    *puVar2 = &PTR_FUN_14afc8490;
    puVar2[1] = &PTR_FUN_14afc8578;
    puVar2[2] = &PTR_FUN_14afc8580;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x41) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x49) = 0;
    if (DAT_14cb52ac8 != (undefined8 *)0x0) {
      plVar1 = DAT_14cb52ac8 + 2;
      puVar4 = DAT_14cb52ac8 + 2;
      DAT_14cb52ac8 = puVar2;
      (**(code **)(*plVar1 + 0x30))(puVar4,1);
      ppuVar3 = (undefined **)*DAT_14cb52ac8;
      puVar2 = DAT_14cb52ac8;
    }
    DAT_14cb52ac8 = puVar2;
    (*(code *)*ppuVar3)(DAT_14cb52ac8);
  }
  return DAT_14cb52ac8;
}



// FUNCTION 1456d850a FUN_1456d850a body=220 status=ok
// SIG undefined FUN_1456d850a(void)

undefined8 * FUN_1456d850a(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  
  if (DAT_14cb52ac8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    *puVar2 = &PTR__purecall_14afc85d0;
    puVar2[1] = &PTR__purecall_14afc86b8;
    FUN_1409e1656(puVar2 + 2);
    ppuVar3 = &PTR_FUN_14afc8490;
    *puVar2 = &PTR_FUN_14afc8490;
    puVar2[1] = &PTR_FUN_14afc8578;
    puVar2[2] = &PTR_FUN_14afc8580;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined8 *)((longlong)puVar2 + 0x41) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x49) = 0;
    if (DAT_14cb52ac8 != (undefined8 *)0x0) {
      plVar1 = DAT_14cb52ac8 + 2;
      puVar4 = DAT_14cb52ac8 + 2;
      DAT_14cb52ac8 = puVar2;
      (**(code **)(*plVar1 + 0x30))(puVar4,1);
      ppuVar3 = (undefined **)*DAT_14cb52ac8;
      puVar2 = DAT_14cb52ac8;
    }
    DAT_14cb52ac8 = puVar2;
    (*(code *)*ppuVar3)(DAT_14cb52ac8);
  }
  return DAT_14cb52ac8;
}



// FUNCTION 1456d85e6 FUN_1456d85e6 body=149 status=ok
// SIG undefined FUN_1456d85e6(void)

undefined8 * FUN_1456d85e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e015b0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 2;
  return param_1;
}



// FUNCTION 1456d867b FUN_1456d867b body=491 status=ok
// SIG undefined FUN_1456d867b(void)

undefined4 FUN_1456d867b(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (DAT_14cb52ae4 != '\0') {
    return DAT_14c763210;
  }
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
      DAT_14c763210 = 1;
      DAT_14cb52ae4 = 1;
      return 1;
    }
    if ((DAT_14c8442b8 & 1) != 0) {
      DAT_14c763210 = 1;
      DAT_14cb52ae4 = 1;
      return 1;
    }
  }
  else if (DAT_14c8442b8 != 0) {
    DAT_14c763210 = 1;
    DAT_14cb52ae4 = 1;
    return 1;
  }
  cVar2 = FUN_144848644();
  plVar1 = DAT_14cb527c8;
  if (cVar2 == '\0') {
    DAT_14c763210 = 2;
    DAT_14cb52ae4 = 1;
    return 2;
  }
  if (DAT_14cb527d0 == '\x01') {
    if ((DAT_14cb526f4 & 1) == 0) {
      DAT_14c763210 = 1;
      DAT_14cb52ae4 = 1;
      return 1;
    }
    cVar2 = (**(code **)(*DAT_14cb527c8 + 0x50))(DAT_14cb527c8);
    uVar5 = 6;
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
      uVar5 = 3;
      iVar3 = FUN_1456d0c02(3,uVar4);
      uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_1401435b5(3,uVar4);
      if (iVar3 == 0) {
        DAT_14c763210 = 0;
        DAT_14cb52ae4 = 1;
        FUN_140527e63(1);
        return DAT_14c763210;
      }
      switch(iVar3) {
      case 2:
        uVar5 = 5;
        break;
      case 3:
        uVar5 = 4;
        break;
      case 4:
        break;
      case 6:
      case 7:
        uVar5 = 2;
        break;
      default:
        if (iVar3 == 0x1c) {
          DAT_14c763210 = 6;
          DAT_14cb52ae4 = 1;
          return 6;
        }
      case 5:
        uVar5 = 1;
      }
    }
    DAT_14cb52ae4 = 1;
    DAT_14c763210 = uVar5;
    return uVar5;
  }
  DAT_14c763210 = 1;
  DAT_14cb52ae4 = 1;
  return 1;
}



// FUNCTION 1456d8866 FUN_1456d8866 body=205 status=ok
// SIG undefined FUN_1456d8866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d8866(void)

{
  if ((DAT_14c9ac4cf & 2) == 0) {
    DAT_14c9ac4cf = DAT_14c9ac4cf | 2;
    _DAT_14c9ac470 = L"FAnisotropyVS";
    _DAT_14c9ac488 = FUN_146826540;
    _DAT_14c9ac490 = FUN_146825d77;
    _DAT_14c9ac498 = FUN_146825fd6;
    _DAT_14c9ac4a0 = FUN_1407e02ea;
    _DAT_14c9ac4a8 = FUN_146826273;
    _DAT_14c9ac480 = FUN_14712abce;
    _DAT_14c9ac4c0 = 0xffffffff00000108;
    _DAT_14c9ac4c8 = 8;
    DAT_14c9ac4cc = 0;
    _DAT_14c9ac4b0 = &LAB_14712ac04;
    FUN_1456d8934();
    FUN_1407e00cc(&DAT_14c9ac468);
    return;
  }
  return;
}



// FUNCTION 1456d8934 FUN_1456d8934 body=123 status=ok
// SIG undefined FUN_1456d8934(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d8934(void)

{
  _DAT_14c9b8ad0 = L"BASE";
  DAT_14c9b8afa = 4;
  _DAT_14c9b8ad8 = FUN_141092e92();
  _DAT_14c9b8ae0 = DAT_14c9ac478;
  _DAT_14c9b8ae8 = &LAB_14682652b;
  DAT_14c9ac478 = &DAT_14c9b8ad0;
  DAT_14c9ac4cd = DAT_14c9ac4cd + '\x01';
  _DAT_14c9b8af0 = 0x100000000;
  if (*(char *)(_DAT_14c9b8ad8 + 100) != '\0') {
    DAT_14c9ac4ce = DAT_14c9ac4ce + '\x01';
  }
  return;
}



// FUNCTION 1456d89b0 FUN_1456d89b0 body=205 status=ok
// SIG undefined FUN_1456d89b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d89b0(void)

{
  if ((DAT_14c9ac5f7 & 2) == 0) {
    DAT_14c9ac5f7 = DAT_14c9ac5f7 | 2;
    _DAT_14c9ac598 = L"FAnisotropyPS";
    _DAT_14c9ac5b0 = FUN_146826540;
    _DAT_14c9ac5b8 = FUN_146825d77;
    _DAT_14c9ac5c0 = FUN_146825fd6;
    _DAT_14c9ac5c8 = FUN_1407e02ea;
    _DAT_14c9ac5d0 = FUN_146826273;
    _DAT_14c9ac5a8 = FUN_14712ac88;
    _DAT_14c9ac5e8 = 0xffffffff00000108;
    _DAT_14c9ac5f0 = 8;
    DAT_14c9ac5f4 = 0;
    _DAT_14c9ac5d8 = &LAB_14712acbe;
    FUN_1456d8a7e();
    FUN_1407e00cc(&DAT_14c9ac590);
    return;
  }
  return;
}



// FUNCTION 1456d8a7e FUN_1456d8a7e body=123 status=ok
// SIG undefined FUN_1456d8a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456d8a7e(void)

{
  _DAT_14c9b8b00 = L"BASE";
  DAT_14c9b8b2a = 4;
  _DAT_14c9b8b08 = FUN_141092e92();
  _DAT_14c9b8b10 = DAT_14c9ac5a0;
  _DAT_14c9b8b18 = &LAB_14682652b;
  DAT_14c9ac5a0 = &DAT_14c9b8b00;
  DAT_14c9ac5f5 = DAT_14c9ac5f5 + '\x01';
  _DAT_14c9b8b20 = 0x100000000;
  if (*(char *)(_DAT_14c9b8b08 + 100) != '\0') {
    DAT_14c9ac5f6 = DAT_14c9ac5f6 + '\x01';
  }
  return;
}



// FUNCTION 1456d8afa FUN_1456d8afa body=132 status=ok
// SIG undefined FUN_1456d8afa(void)

void FUN_1456d8afa(longlong param_1,int param_2)

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



// FUNCTION 1456d8b80 FUN_1456d8b80 body=267 status=ok
// SIG undefined FUN_1456d8b80(void)

void FUN_1456d8b80(longlong param_1)

{
  byte bVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  thunk_FUN_1401c3c2c();
  local_50[0] = 0;
  FUN_1446f470e(&local_38,L"OnBeginOverlap",1);
  FUN_14485c47a(local_50,param_1);
  local_30 = local_38;
  local_38 = local_50[0];
  FUN_140838726(param_1 + 0x599,&local_40);
  bVar1 = FUN_140819c20(param_1,local_40,&local_38);
  *(byte *)(param_1 + 0x599) = *(byte *)(param_1 + 0x599) | bVar1;
  local_50[0] = 0;
  FUN_1446f470e(&local_38,L"OnEndOverlap",1);
  FUN_14485c47a(local_50,param_1);
  local_30 = local_38;
  local_38 = local_50[0];
  FUN_140852908(param_1 + 0x59a,&local_40);
  bVar1 = FUN_140819c20(param_1,local_40,&local_38);
  *(byte *)(param_1 + 0x59a) = *(byte *)(param_1 + 0x59a) | bVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d8c8c FUN_1456d8c8c body=98 status=ok
// SIG undefined FUN_1456d8c8c(void)

void FUN_1456d8c8c(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_141245f18();
  if (((int)param_1[8] != 0) || (*(int *)((longlong)param_1 + 0x44) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if ((cVar1 != '\0') && (lVar2 = FUN_14479d2ce(param_1 + 8), lVar2 == param_2)) {
      return;
    }
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001456d8cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 1456d8cee FUN_1456d8cee body=241 status=ok
// SIG undefined FUN_1456d8cee(void)

void FUN_1456d8cee(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    plVar1[5] = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1456d8de0 FUN_1456d8de0 body=415 status=ok
// SIG undefined FUN_1456d8de0(void)

void FUN_1456d8de0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x60;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar8 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x78);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (local_60 != lVar2)) {
    do {
      lVar5 = *local_90;
      lVar7 = (longlong)iStack_74;
      lVar9 = lVar5 + lVar7 * 0x78 + 0x58;
      cVar6 = FUN_144904448(lVar9);
      if (cVar6 != '\0') {
        FUN_14072d42a(lVar9,0);
      }
      FUN_1457ef98c(lVar5 + lVar7 * 0x78 + 8);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar8) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    FUN_1456d9184(plVar1);
    FUN_1456d8f80(plVar1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar4 = (int *)((longlong)plVar1 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456d8f80 FUN_1456d8f80 body=284 status=ok
// SIG undefined FUN_1456d8f80(void)

void FUN_1456d8f80(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1456d909e(*local_60 + (longlong)iStack_44 * 0x78 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d909e FUN_1456d909e body=51 status=ok
// SIG undefined FUN_1456d909e(void)

void FUN_1456d909e(longlong param_1)

{
  FUN_144a7b030(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1456d90d2(param_1);
  return;
}



// FUNCTION 1456d90d2 FUN_1456d90d2 body=55 status=ok
// SIG undefined FUN_1456d90d2(void)

void FUN_1456d90d2(longlong *param_1)

{
  FUN_1456d910a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456d910a FUN_1456d910a body=121 status=ok
// SIG undefined FUN_1456d910a(void)

void FUN_1456d910a(longlong param_1,int param_2)

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



// FUNCTION 1456d9184 FUN_1456d9184 body=325 status=ok
// SIG undefined FUN_1456d9184(void)

void FUN_1456d9184(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x74 + (longlong)iVar4 * 0x78) * 4) =
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



// FUNCTION 1456d92ca FUN_1456d92ca body=48 status=ok
// SIG undefined FUN_1456d92ca(void)

void FUN_1456d92ca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 1456d92fa FUN_1456d92fa body=132 status=ok
// SIG undefined FUN_1456d92fa(void)

void FUN_1456d92fa(longlong param_1,int param_2)

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



// FUNCTION 1456d9380 FUN_1456d9380 body=207 status=ok
// SIG undefined FUN_1456d9380(void)

void FUN_1456d9380(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 1) {
    FUN_1487f49b0(param_1 + 0x60);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  FUN_1456ef96d(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((iVar1 < 1) && (*(int *)(param_1 + 0x8c) != 1)) {
    FUN_1487f4a40(param_1 + 0x80);
  }
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14480809c(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14480809c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_14594e8da(param_1 + 0x60);
  FUN_14594e934(param_1 + 0x80);
  return;
}



// FUNCTION 1456d9450 FUN_1456d9450 body=136 status=ok
// SIG undefined FUN_1456d9450(void)

code * FUN_1456d9450(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PostVolumeUserFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220400000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d01eca;
}



// FUNCTION 1456d94d8 FUN_1456d94d8 body=138 status=ok
// SIG undefined FUN_1456d94d8(void)

code * FUN_1456d94d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubSurfaceColorAsTransmittanceAtDistanceInMeters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x213400000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d02206;
}



// FUNCTION 1456d9562 FUN_1456d9562 body=138 status=ok
// SIG undefined FUN_1456d9562(void)

code * FUN_1456d9562(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlintLUTParameters1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21e000000544;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d01f54;
}



// FUNCTION 1456d95ec FUN_1456d95ec body=226 status=ok
// SIG undefined FUN_1456d95ec(void)

longlong * FUN_1456d95ec(longlong *param_1)

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
  pcVar13 = FUN_1462bc4b4;
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



// FUNCTION 1456d96d0 FUN_1456d96d0 body=136 status=ok
// SIG undefined FUN_1456d96d0(void)

code * FUN_1456d96d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalReprojectionEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147148b64;
}



// FUNCTION 1456d9758 FUN_1456d9758 body=138 status=ok
// SIG undefined FUN_1456d9758(void)

code * FUN_1456d9758(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalReprojectionThresholdHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456d97e2;
}



// FUNCTION 1456d97e2 FUN_1456d97e2 body=138 status=ok
// SIG undefined FUN_1456d97e2(void)

code * FUN_1456d97e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalReprojectionThresholdLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456d96d0;
}



// FUNCTION 1456d986c FUN_1456d986c body=602 status=ok
// SIG undefined FUN_1456d986c(void)

undefined4 * FUN_1456d986c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  uint local_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1456d9b40(param_1,local_50);
  FUN_1456d9ac8(local_48,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  local_80 = *local_48;
  local_78 = *(uint *)(local_48 + 1);
  iStack_74 = *(int *)((longlong)local_48 + 0xc);
  uStack_70 = *(uint *)(local_48 + 2);
  iStack_6c = *(int *)((longlong)local_48 + 0x14);
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(local_48 + 4);
  lVar9 = (longlong)local_60;
  _Src = (void *)local_48[3];
  if (lVar9 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar9 * 2);
  }
  uVar6 = (uint)(CONCAT44(iStack_6c,uStack_70) >> 0x10);
  uVar3 = (uint)(CONCAT44(iStack_74,local_78) >> 0x10);
  uVar3 = (local_78 << 0x10 | local_78 & 0xffff) + iStack_74 + (uVar3 << 0x13 | uVar3 & 0xffff) +
          ((local_78 & 0xffff) >> 4);
  uVar4 = FUN_144a78877(0,(uVar3 >> 2) +
                          (uStack_70 << 0x10 | uStack_70 & 0xffff) + iStack_6c +
                          (uVar6 << 0x13 | uVar6 & 0xffff) + ((uStack_70 & 0xffff) >> 4) +
                          uVar3 * 0x40 + 0x9e3779b9 ^ uVar3);
  iVar8 = local_60 + -1;
  puVar1 = local_68;
  if (local_60 == 0) {
    iVar8 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar1);
  uVar6 = FUN_144a78877(uVar4,uVar5);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_1456d9c24(param_1,uVar6,local_48,&local_54);
  uVar4 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar3) {
      uVar7 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x34) = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1456d9d4e(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d9ac8 FUN_1456d9ac8 body=120 status=ok
// SIG undefined FUN_1456d9ac8(void)

undefined8 * FUN_1456d9ac8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = *param_3;
  return param_1;
}



// FUNCTION 1456d9b40 FUN_1456d9b40 body=227 status=ok
// SIG undefined FUN_1456d9b40(void)

int * FUN_1456d9b40(longlong *param_1,int *param_2)

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
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1456d9c24 FUN_1456d9c24 body=296 status=ok
// SIG undefined FUN_1456d9c24(void)

undefined8 FUN_1456d9c24(longlong *param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *param_3;
    local_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_58 = *(undefined4 *)(param_3 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 4);
    lVar15 = (longlong)local_48;
    _Src = (void *)param_3[3];
    if (lVar15 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar15 * 2);
    }
    iVar13 = FUN_1448cadea(param_1,param_2,&local_68);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (iVar13 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar13 * 0x38) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 2);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar8 = *(undefined4 *)(param_3 + 3);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar11 = *(undefined4 *)(param_3 + 5);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar1[8] = *(undefined4 *)(param_3 + 4);
      puVar1[9] = uVar10;
      puVar1[10] = uVar11;
      puVar1[0xb] = uVar12;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148dc58d6(param_1,*param_4);
      *param_4 = iVar13;
      uVar14 = 1;
      goto LAB_1456d9cb0;
    }
  }
  uVar14 = 0;
LAB_1456d9cb0:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456d9d4e FUN_1456d9d4e body=754 status=ok
// SIG undefined FUN_1456d9d4e(void)

void FUN_1456d9d4e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    lStack_60 = 0xffffffff;
    local_58 = (undefined2 *)((ulonglong)local_58 & 0xffffffff00000000);
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = lStack_60;
    local_78 = (undefined4)local_58;
    local_74 = local_58._4_4_;
    local_98 = param_1;
    while (iVar4 = local_80._4_4_, local_80._4_4_ < (int)local_88[3]) {
      lVar3 = *local_98;
      lVar14 = (longlong)local_80._4_4_ * 0x38;
      local_70 = *(undefined8 *)(lVar3 + lVar14);
      plVar8 = (longlong *)(lVar3 + 8 + lVar14);
      local_68 = (longlong *)*plVar8;
      lStack_60 = plVar8[1];
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(lVar3 + 0x20 + lVar14);
      lVar15 = (longlong)local_50;
      _Src = *(void **)(lVar3 + 0x18 + lVar14);
      if (lVar15 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar15 * 2);
      }
      uVar2 = (uint)((ulonglong)lStack_60 >> 0x10);
      uVar13 = (uint)lStack_60 & 0xffff;
      uVar11 = (uint)((ulonglong)local_68 >> 0x10);
      uVar12 = (uint)local_68 & 0xffff;
      uVar11 = ((uint)local_68 << 0x10 | uVar12) + (int)((ulonglong)local_68 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4);
      uVar5 = FUN_144a78877(0,(uVar11 >> 2) +
                              ((uint)lStack_60 << 0x10 | uVar13) +
                              (int)((ulonglong)lStack_60 >> 0x20) + (uVar2 << 0x13 | uVar2 & 0xffff)
                              + (uVar13 >> 4) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
      puVar10 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar10 = local_58;
      }
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar7,puVar10);
      iVar7 = FUN_144a78877(uVar5,uVar6);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar9;
      *(int *)(lVar3 + lVar14 + 0x34) = iVar7;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar3 + lVar14 + 0x30) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
      FUN_1449c0562(&local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456da048 FUN_1456da048 body=174 status=ok
// SIG undefined FUN_1456da048(void)

void FUN_1456da048(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FGbxUIEvent_StatusMenu_Damage",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x2b8);
    FUN_1446ddc76(&local_38,"FGbxUIEvent_StatusMenu_ShieldBreak",1);
    FUN_1401cd85c(lVar1,local_38,param_1 + 0x2c0);
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456da0f8 FUN_1456da0f8 body=226 status=ok
// SIG undefined FUN_1456da0f8(void)

longlong * FUN_1456da0f8(longlong *param_1)

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
  pcVar13 = FUN_1462f3ad4;
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



// FUNCTION 1456da1e0 FUN_1456da1e0 body=132 status=ok
// SIG undefined FUN_1456da1e0(void)

undefined1 * FUN_1456da1e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageConstants";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x147;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456da1dc;
}



// FUNCTION 1456da264 FUN_1456da264 body=138 status=ok
// SIG undefined FUN_1456da264(void)

code * FUN_1456da264(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvDiceRate";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000014d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147266f50;
}



// FUNCTION 1456da2ee FUN_1456da2ee body=205 status=ok
// SIG undefined FUN_1456da2ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da2ee(void)

{
  if ((DAT_14ca63dcf & 2) == 0) {
    DAT_14ca63dcf = DAT_14ca63dcf | 2;
    _DAT_14ca63d70 = L"FVelocityVS";
    _DAT_14ca63d88 = FUN_146826540;
    _DAT_14ca63d90 = FUN_146825d77;
    _DAT_14ca63d98 = FUN_146825fd6;
    _DAT_14ca63da0 = FUN_1407e02ea;
    _DAT_14ca63da8 = FUN_146826273;
    _DAT_14ca63d80 = FUN_14732a3a0;
    _DAT_14ca63dc0 = 0xffffffff00000108;
    _DAT_14ca63dc8 = 8;
    DAT_14ca63dcc = 0;
    _DAT_14ca63db0 = &LAB_14732a3d6;
    FUN_1456da3bc();
    FUN_1407e00cc(&DAT_14ca63d68);
    return;
  }
  return;
}



// FUNCTION 1456da3bc FUN_1456da3bc body=123 status=ok
// SIG undefined FUN_1456da3bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da3bc(void)

{
  _DAT_14ca68a80 = L"BASE";
  DAT_14ca68aaa = 4;
  _DAT_14ca68a88 = FUN_141092e92();
  _DAT_14ca68a90 = DAT_14ca63d78;
  _DAT_14ca68a98 = &LAB_14682652b;
  DAT_14ca63d78 = &DAT_14ca68a80;
  DAT_14ca63dcd = DAT_14ca63dcd + '\x01';
  _DAT_14ca68aa0 = 0x100000000;
  if (*(char *)(_DAT_14ca68a88 + 100) != '\0') {
    DAT_14ca63dce = DAT_14ca63dce + '\x01';
  }
  return;
}



// FUNCTION 1456da438 FUN_1456da438 body=205 status=ok
// SIG undefined FUN_1456da438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da438(void)

{
  if ((DAT_14ca63ef7 & 2) == 0) {
    DAT_14ca63ef7 = DAT_14ca63ef7 | 2;
    _DAT_14ca63e98 = L"FVelocityPS";
    _DAT_14ca63eb0 = FUN_146826540;
    _DAT_14ca63eb8 = FUN_146825d77;
    _DAT_14ca63ec0 = FUN_146825fd6;
    _DAT_14ca63ec8 = FUN_1407e02ea;
    _DAT_14ca63ed0 = FUN_146826273;
    _DAT_14ca63ea8 = FUN_14732a56e;
    _DAT_14ca63ee8 = 0xffffffff00000108;
    _DAT_14ca63ef0 = 8;
    DAT_14ca63ef4 = 0;
    _DAT_14ca63ed8 = &LAB_14732a5a4;
    FUN_1456da506();
    FUN_1407e00cc(&DAT_14ca63e90);
    return;
  }
  return;
}



// FUNCTION 1456da506 FUN_1456da506 body=123 status=ok
// SIG undefined FUN_1456da506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da506(void)

{
  _DAT_14ca68ab0 = L"BASE";
  DAT_14ca68ada = 4;
  _DAT_14ca68ab8 = FUN_141092e92();
  _DAT_14ca68ac0 = DAT_14ca63ea0;
  _DAT_14ca68ac8 = &LAB_14682652b;
  DAT_14ca63ea0 = &DAT_14ca68ab0;
  DAT_14ca63ef5 = DAT_14ca63ef5 + '\x01';
  _DAT_14ca68ad0 = 0x100000000;
  if (*(char *)(_DAT_14ca68ab8 + 100) != '\0') {
    DAT_14ca63ef6 = DAT_14ca63ef6 + '\x01';
  }
  return;
}



// FUNCTION 1456da582 FUN_1456da582 body=205 status=ok
// SIG undefined FUN_1456da582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da582(void)

{
  if ((DAT_14ca6401f & 2) == 0) {
    DAT_14ca6401f = DAT_14ca6401f | 2;
    _DAT_14ca63fc0 = L"FMaskedDigistructVelocityPS";
    _DAT_14ca63fd8 = FUN_146826540;
    _DAT_14ca63fe0 = FUN_146825d77;
    _DAT_14ca63fe8 = FUN_146825fd6;
    _DAT_14ca63ff0 = FUN_1407e02ea;
    _DAT_14ca63ff8 = FUN_146826273;
    _DAT_14ca63fd0 = FUN_14732a73c;
    _DAT_14ca64010 = 0xffffffff00000108;
    _DAT_14ca64018 = 8;
    DAT_14ca6401c = 0;
    _DAT_14ca64000 = &LAB_14732a772;
    FUN_1456da650();
    FUN_1407e00cc(&DAT_14ca63fb8);
    return;
  }
  return;
}



// FUNCTION 1456da650 FUN_1456da650 body=123 status=ok
// SIG undefined FUN_1456da650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da650(void)

{
  _DAT_14ca68ae0 = L"BASE";
  DAT_14ca68b0a = 4;
  _DAT_14ca68ae8 = FUN_141092e92();
  _DAT_14ca68af0 = DAT_14ca63fc8;
  _DAT_14ca68af8 = &LAB_14682652b;
  DAT_14ca63fc8 = &DAT_14ca68ae0;
  DAT_14ca6401d = DAT_14ca6401d + '\x01';
  _DAT_14ca68b00 = 0x100000000;
  if (*(char *)(_DAT_14ca68ae8 + 100) != '\0') {
    DAT_14ca6401e = DAT_14ca6401e + '\x01';
  }
  return;
}



// FUNCTION 1456da6cb FUN_1456da6cb body=57 status=ok
// SIG undefined FUN_1456da6cb(void)

void FUN_1456da6cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac2498 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac2498 = FUN_14171c317(FUN_14637e2bc,uVar1,L"EMaterialDomain");
  }
  return;
}



// FUNCTION 1456da704 FUN_1456da704 body=57 status=ok
// SIG undefined FUN_1456da704(void)

void FUN_1456da704(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0620 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0620 = FUN_14171c317(FUN_146374c09,uVar1,L"EMaterialSamplerType");
  }
  return;
}



// FUNCTION 1456da73e FUN_1456da73e body=42 status=ok
// SIG undefined FUN_1456da73e(void)

void FUN_1456da73e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1401d0d18();
    return;
  }
  return;
}



// FUNCTION 1456da76a FUN_1456da76a body=96 status=ok
// SIG undefined FUN_1456da76a(void)

void FUN_1456da76a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1456da7ca FUN_1456da7ca body=205 status=ok
// SIG undefined FUN_1456da7ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da7ca(void)

{
  if ((DAT_14c9d0077 & 2) == 0) {
    DAT_14c9d0077 = DAT_14c9d0077 | 2;
    _DAT_14c9d0018 = L"FGPUSceneSetInstancePrimitiveIdCS";
    _DAT_14c9d0030 = FUN_146826540;
    _DAT_14c9d0038 = FUN_146825d77;
    _DAT_14c9d0040 = FUN_146825fd6;
    _DAT_14c9d0048 = FUN_1407e02ea;
    _DAT_14c9d0050 = FUN_146826273;
    _DAT_14c9d0028 = FUN_147169f5c;
    _DAT_14c9d0068 = 0xffffffff000000e0;
    _DAT_14c9d0070 = 8;
    DAT_14c9d0074 = 0;
    _DAT_14c9d0058 = &LAB_147169f88;
    FUN_1456da898();
    FUN_1407e00cc(&DAT_14c9d0010);
    return;
  }
  return;
}



// FUNCTION 1456da898 FUN_1456da898 body=123 status=ok
// SIG undefined FUN_1456da898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456da898(void)

{
  _DAT_14c9d4c98 = L"BASE";
  DAT_14c9d4cc2 = 4;
  _DAT_14c9d4ca0 = FUN_140b35ae4();
  _DAT_14c9d4ca8 = DAT_14c9d0020;
  _DAT_14c9d4cb0 = &LAB_14682652b;
  DAT_14c9d0020 = &DAT_14c9d4c98;
  DAT_14c9d0075 = DAT_14c9d0075 + '\x01';
  _DAT_14c9d4cb8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4ca0 + 100) != '\0') {
    DAT_14c9d0076 = DAT_14c9d0076 + '\x01';
  }
  return;
}



// FUNCTION 1456da914 FUN_1456da914 body=226 status=ok
// SIG undefined FUN_1456da914(void)

longlong * FUN_1456da914(longlong *param_1)

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
  pcVar13 = FUN_145d4278c;
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



// FUNCTION 1456da9fc FUN_1456da9fc body=138 status=ok
// SIG undefined FUN_1456da9fc(void)

undefined1 * FUN_1456da9fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1456daa86();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BatcherParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FGPUScene::FInstanceGPULoadBalancer::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1456da9f8;
}



// FUNCTION 1456daa86 FUN_1456daa86 body=265 status=ok
// SIG undefined FUN_1456daa86(void)

undefined * FUN_1456daa86(void)

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
              0x110) < DAT_14c9d5870) {
    FUN_144b3d300(&DAT_14c9d5870);
    if (DAT_14c9d5870 == -1) {
      FUN_1456dab90(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d57f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46db9);
      _Init_thread_footer(&DAT_14c9d5870);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d57f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456dab90 FUN_1456dab90 body=226 status=ok
// SIG undefined FUN_1456dab90(void)

longlong * FUN_1456dab90(longlong *param_1)

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
  pcVar13 = FUN_1462c6530;
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



// FUNCTION 1456dac74 FUN_1456dac74 body=130 status=ok
// SIG undefined FUN_1456dac74(void)

undefined1 * FUN_1456dac74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BatchBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPackedBatch >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14716e8e8;
}



// FUNCTION 1456dacf6 FUN_1456dacf6 body=138 status=ok
// SIG undefined FUN_1456dacf6(void)

code * FUN_1456dacf6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ItemBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FPackedItem >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456dac74;
}



// FUNCTION 1456dad80 FUN_1456dad80 body=138 status=ok
// SIG undefined FUN_1456dad80(void)

code * FUN_1456dad80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBatches";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456dacf6;
}



// FUNCTION 1456dae0a FUN_1456dae0a body=102 status=ok
// SIG undefined FUN_1456dae0a(void)

undefined8 FUN_1456dae0a(undefined8 param_1,longlong param_2)

{
  FUN_1401d5472();
  FUN_1401d5472(param_1,param_2 + 0x10);
  FUN_1401d601a(param_1,param_2 + 0x20);
  FUN_1401d58bc(param_1,param_2 + 0x30);
  FUN_1401d5b12(param_1,param_2 + 0x40);
  FUN_1401d5d14(param_1,param_2 + 0x50);
  FUN_1447a84cc(param_1,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1456dae70 FUN_1456dae70 body=95 status=ok
// SIG undefined FUN_1456dae70(void)

void FUN_1456dae70(longlong param_1,uint param_2)

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



// FUNCTION 1456daed0 FUN_1456daed0 body=95 status=ok
// SIG undefined FUN_1456daed0(void)

void FUN_1456daed0(longlong param_1,uint param_2)

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



// FUNCTION 1456daf30 FUN_1456daf30 body=95 status=ok
// SIG undefined FUN_1456daf30(void)

void FUN_1456daf30(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1456daf90 FUN_1456daf90 body=226 status=ok
// SIG undefined FUN_1456daf90(void)

longlong * FUN_1456daf90(longlong *param_1)

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
  pcVar13 = FUN_1462b7aa8;
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



// FUNCTION 1456db074 FUN_1456db074 body=132 status=ok
// SIG undefined FUN_1456db074(void)

undefined1 * FUN_1456db074(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDistanceFieldAssetData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147138c74;
}



// FUNCTION 1456db0f8 FUN_1456db0f8 body=138 status=ok
// SIG undefined FUN_1456db0f8(void)

code * FUN_1456db0f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147138a4c;
}



// FUNCTION 1456db182 FUN_1456db182 body=138 status=ok
// SIG undefined FUN_1456db182(void)

code * FUN_1456db182(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldBrickAtlasHalfTexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713879a;
}



// FUNCTION 1456db20c FUN_1456db20c body=210 status=ok
// SIG undefined FUN_1456db20c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456db20c(void)

{
  if ((DAT_14ca19e67 & 2) == 0) {
    DAT_14ca19e67 = DAT_14ca19e67 | 2;
    _DAT_14ca19e08 = L"FShadingBinBuildCS";
    _DAT_14ca19e20 = FUN_146826540;
    _DAT_14ca19e28 = FUN_146825d77;
    _DAT_14ca19e30 = FUN_146825fd6;
    _DAT_14ca19e38 = FUN_1407e02ea;
    _DAT_14ca19e40 = FUN_146826273;
    _DAT_14ca19e18 = FUN_147263016;
    _DAT_14ca19e58 = 0xffffffff000000f0;
    _DAT_14ca19e60 = 8;
    DAT_14ca19e64 = 0;
    _DAT_14ca19e48 = &LAB_147263040;
    FUN_1456db35a();
    FUN_1456db2de();
    FUN_1407e00cc(&DAT_14ca19e00);
    return;
  }
  return;
}



// FUNCTION 1456db2de FUN_1456db2de body=123 status=ok
// SIG undefined FUN_1456db2de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456db2de(void)

{
  _DAT_14ca1bdf0 = L"BASE";
  DAT_14ca1be1a = 4;
  _DAT_14ca1bdf8 = FUN_140b35ae4();
  _DAT_14ca1be00 = DAT_14ca19e10;
  _DAT_14ca1be08 = &LAB_14682652b;
  DAT_14ca19e10 = &DAT_14ca1bdf0;
  DAT_14ca19e65 = DAT_14ca19e65 + '\x01';
  _DAT_14ca1be10 = 0x100000000;
  if (*(char *)(_DAT_14ca1bdf8 + 100) != '\0') {
    DAT_14ca19e66 = DAT_14ca19e66 + '\x01';
  }
  return;
}



// FUNCTION 1456db35a FUN_1456db35a body=216 status=ok
// SIG undefined FUN_1456db35a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456db35a(void)

{
  _DAT_14ca1b4a0 = L"SubTileMatchParam";
  DAT_14ca1b4ca = FUN_140850cc5();
  _DAT_14ca1b4a8 = FUN_140ec6960();
  _DAT_14ca1b4b8 = &LAB_14682652b;
  _DAT_14ca1b4c0 = 0x1000000e6;
  _DAT_14ca1b4c8 = 0;
  _DAT_14ca1b4b0 = DAT_14ca19e10;
  DAT_14ca19e10 = &DAT_14ca1b4a0;
  _DAT_14ca1b470 = L"PlatformDataParam";
  DAT_14ca1b49a = FUN_140850cc5();
  _DAT_14ca1b478 = FUN_140ec6960();
  _DAT_14ca1b488 = &LAB_14682652b;
  _DAT_14ca1b490 = 0x1000000e0;
  _DAT_14ca1b498 = 0;
  _DAT_14ca1b480 = DAT_14ca19e10;
  DAT_14ca19e10 = &DAT_14ca1b470;
  return;
}



// FUNCTION 1456db432 FUN_1456db432 body=231 status=ok
// SIG undefined FUN_1456db432(void)

void FUN_1456db432(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  local_20 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_20 = 0x2ffffffff;
  *(undefined4 *)(local_20 + 1) = 0;
  local_20[2] = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar2 == *(undefined8 **)(param_1 + 0x100)) {
    FUN_1401dcede(param_1 + 0xf0,puVar2,&local_20);
    lVar1 = *(longlong *)(param_1 + 0xf8);
    puVar2 = local_20;
  }
  else {
    *puVar2 = local_20;
    lVar1 = *(longlong *)(param_1 + 0xf8) + 8;
    *(longlong *)(param_1 + 0xf8) = lVar1;
    puVar2 = (undefined8 *)0x0;
  }
  local_28 = *(undefined8 *)(lVar1 + -8);
  FUN_1401daab2(param_1 + 200);
  if (puVar2 == (undefined8 *)0x0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}


