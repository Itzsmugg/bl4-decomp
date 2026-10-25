// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498d08cc FUN_1498d08cc body=116 status=ok
// SIG undefined FUN_1498d08cc(void)

void FUN_1498d08cc(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1498d0940(param_1,iVar1);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1498d0940 FUN_1498d0940 body=88 status=ok
// SIG undefined FUN_1498d0940(void)

void FUN_1498d0940(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1498d0998 FUN_1498d0998 body=142 status=ok
// SIG undefined FUN_1498d0998(void)

longlong FUN_1498d0998(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
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
  undefined8 uVar13;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0x54);
  uVar10 = *(undefined4 *)(param_2 + 0x58);
  uVar11 = *(undefined4 *)(param_2 + 0x5c);
  uVar12 = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 0x58) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar12;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_1498d0a86(param_1 + 0x80,param_2 + 0x80);
  FUN_1498d0a26(param_1 + 0x90,param_2 + 0x90);
  uVar13 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar13;
  return param_1;
}



// FUNCTION 1498d0a26 FUN_1498d0a26 body=95 status=ok
// SIG undefined FUN_1498d0a26(void)

undefined8 * FUN_1498d0a26(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1498d0b14(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498d086a(param_1,iVar1);
      FUN_1498d08cc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1498d0a86 FUN_1498d0a86 body=95 status=ok
// SIG undefined FUN_1498d0a86(void)

undefined8 * FUN_1498d0a86(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1498d0ae5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498d0766(param_1,iVar1);
      FUN_1498d07d9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1498d0ae5 FUN_1498d0ae5 body=47 status=ok
// SIG undefined FUN_1498d0ae5(void)

void FUN_1498d0ae5(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1498d0b14 FUN_1498d0b14 body=43 status=ok
// SIG undefined FUN_1498d0b14(void)

void FUN_1498d0b14(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1498d0b40 FUN_1498d0b40 body=130 status=ok
// SIG undefined FUN_1498d0b40(void)

void FUN_1498d0b40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d0bc4 FUN_1498d0bc4 body=122 status=ok
// SIG undefined FUN_1498d0bc4(void)

longlong FUN_1498d0bc4(longlong param_1,longlong param_2)

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
    FUN_1498d0c3e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1498d0c3e FUN_1498d0c3e body=220 status=ok
// SIG undefined FUN_1498d0c3e(void)

longlong * FUN_1498d0c3e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1498d0d1a(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar8 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar5 + 8 + lVar6) = *(undefined8 *)(lVar3 + 8 + lVar6);
          lVar4 = *(longlong *)(lVar3 + 0x10 + lVar6);
          *(longlong *)(lVar5 + 0x10 + lVar6) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar6) = *(undefined8 *)(lVar3 + 0x18 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1498d0d1a FUN_1498d0d1a body=386 status=ok
// SIG undefined FUN_1498d0d1a(void)

void FUN_1498d0d1a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1498d0e9e FUN_1498d0e9e body=43 status=ok
// SIG undefined FUN_1498d0e9e(void)

void FUN_1498d0e9e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1498d0eca FUN_1498d0eca body=132 status=ok
// SIG undefined FUN_1498d0eca(void)

void FUN_1498d0eca(longlong param_1,int param_2)

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



// FUNCTION 1498d0f50 FUN_1498d0f50 body=291 status=ok
// SIG undefined FUN_1498d0f50(void)

undefined4 * FUN_1498d0f50(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498cfc26(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1498d1074(local_40 + 2,uVar1);
  local_40[0x12] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1498cfd14(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x13] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x12] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1498cfe34(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d1074 FUN_1498d1074 body=91 status=ok
// SIG undefined FUN_1498d1074(void)

void FUN_1498d1074(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[2] = 0;
  lVar2 = param_2[2];
  if (lVar2 == 0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    lVar2 = param_2[2];
  }
  param_1[2] = lVar2;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return;
}



// FUNCTION 1498d10d0 FUN_1498d10d0 body=291 status=ok
// SIG undefined FUN_1498d10d0(void)

undefined4 * FUN_1498d10d0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498cfc26(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(uint *)*param_3;
  FUN_1498d1074(local_40 + 2,uVar1);
  local_40[0x12] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1498cfd14(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[0x13] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[0x12] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1498cfe34(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d11f4 FUN_1498d11f4 body=132 status=ok
// SIG undefined FUN_1498d11f4(void)

void FUN_1498d11f4(longlong param_1,int param_2)

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



// FUNCTION 1498d127a FUN_1498d127a body=62 status=ok
// SIG undefined FUN_1498d127a(void)

void FUN_1498d127a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498d12b8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1498d12b8 FUN_1498d12b8 body=93 status=ok
// SIG undefined FUN_1498d12b8(void)

ulonglong FUN_1498d12b8(uint param_1,uint param_2)

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



// FUNCTION 1498d1316 FUN_1498d1316 body=48 status=ok
// SIG undefined FUN_1498d1316(void)

void FUN_1498d1316(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1498d1346 FUN_1498d1346 body=326 status=ok
// SIG undefined FUN_1498d1346(void)

void FUN_1498d1346(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 1498d148e FUN_1498d148e body=289 status=ok
// SIG undefined FUN_1498d148e(void)

void FUN_1498d148e(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 0x18 + (longlong)iStack_44 * 0x50) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d15b0 FUN_1498d15b0 body=29 status=ok
// SIG undefined FUN_1498d15b0(void)

undefined8 FUN_1498d15b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d15ea FUN_1498d15ea body=101 status=ok
// SIG undefined FUN_1498d15ea(void)

void FUN_1498d15ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef1400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498d1650 FUN_1498d1650 body=101 status=ok
// SIG undefined FUN_1498d1650(void)

void FUN_1498d1650(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef1400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498d16b6 FUN_1498d16b6 body=134 status=ok
// SIG undefined FUN_1498d16b6(void)

void FUN_1498d16b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bef1400;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498d172d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498d174c FUN_1498d174c body=25 status=ok
// SIG undefined FUN_1498d174c(void)

undefined8 FUN_1498d174c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498d1766 FUN_1498d1766 body=114 status=ok
// SIG undefined FUN_1498d1766(void)

void FUN_1498d1766(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1a0,0x10);
    iVar2 = (int)(uVar1 / 0x1a0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1a0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1498d17d8 FUN_1498d17d8 body=258 status=ok
// SIG undefined FUN_1498d17d8(void)

void FUN_1498d17d8(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      memcpy((void *)(param_1 + lVar2),(void *)(param_2 + lVar2),0x130);
      *(undefined8 *)(param_1 + 0x130 + lVar2) = *(undefined8 *)(param_2 + 0x130 + lVar2);
      *(undefined8 *)(param_1 + 0x138 + lVar2) = *(undefined8 *)(param_2 + 0x138 + lVar2);
      *(undefined1 *)(param_1 + 0x144 + lVar2) = *(undefined1 *)(param_2 + 0x144 + lVar2);
      *(undefined4 *)(param_1 + 0x140 + lVar2) = *(undefined4 *)(param_2 + 0x140 + lVar2);
      *(undefined8 *)(param_1 + 0x168 + lVar2) = 0;
      *(undefined4 *)(param_1 + 0x170 + lVar2) = 0;
      puVar1 = (undefined8 *)(param_1 + 0x148 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0x174 + lVar2) = 0xffffffff00000080;
      *(undefined4 *)(param_1 + 0x17c + lVar2) = 0;
      *(undefined8 *)(param_1 + 0x188 + lVar2) = 0;
      *(undefined4 *)(param_1 + 400 + lVar2) = 0;
      FUN_144899d7a(param_1 + lVar2 + 0x148,param_2 + lVar2 + 0x148);
      lVar2 = lVar2 + 0x1a0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1498d18da FUN_1498d18da body=337 status=ok
// SIG undefined FUN_1498d18da(void)

undefined4 * FUN_1498d18da(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498d1a2c(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  iVar6 = FUN_144a788f7();
  uVar7 = iVar6 + (int)((ulonglong)uVar3 >> 0x20);
  uVar7 = (uVar7 >> 2) + uVar7 * 0x40 + *(int *)(local_40 + 1) + 0x9e3779b9 ^ uVar7;
  cVar5 = FUN_1498d1b12(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1498d1c16(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d1a2c FUN_1498d1a2c body=229 status=ok
// SIG undefined FUN_1498d1a2c(void)

int * FUN_1498d1a2c(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1498d1b12 FUN_1498d1b12 body=145 status=ok
// SIG undefined FUN_1498d1b12(void)

undefined8 FUN_1498d1b12(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x20;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        if ((*(longlong *)(lVar2 + lVar7) == *param_3) &&
           (*(int *)(lVar2 + 8 + lVar7) == (int)param_3[1])) {
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar4;
          FUN_1498d1ba4((int)lVar2,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498d1ba4 FUN_1498d1ba4 body=114 status=ok
// SIG undefined FUN_1498d1ba4(void)

void FUN_1498d1ba4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1498d1c16 FUN_1498d1c16 body=485 status=ok
// SIG undefined FUN_1498d1c16(void)

void FUN_1498d1c16(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  uVar3 = local_78;
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar3 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar4 = local_78._4_4_;
      local_78 = uVar3;
      do {
        lVar2 = *local_90;
        lVar10 = (longlong)iVar4 * 0x20;
        uVar3 = *(undefined8 *)(lVar2 + lVar10);
        iVar5 = FUN_144a788f7();
        uVar6 = iVar5 + (int)((ulonglong)uVar3 >> 0x20);
        uVar8 = (longlong)
                (int)(uVar6 * 0x40 + *(int *)(lVar2 + 8 + lVar10) + (uVar6 >> 2) + 0x9e3779b9 ^
                     uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar8;
        *(int *)(lVar2 + 0x1c + lVar10) = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d1dfc FUN_1498d1dfc body=163 status=ok
// SIG undefined FUN_1498d1dfc(void)

void FUN_1498d1dfc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    iVar2 = FUN_144a788f7();
    uVar3 = iVar2 + (int)((ulonglong)lVar1 >> 0x20);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(uVar3 * 0x40 + (int)param_2[1] + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        if ((*(longlong *)(lVar1 + lVar5) == *param_2) &&
           (*(int *)(lVar1 + 8 + lVar5) == (int)param_2[1])) {
          FUN_1498d1ea0(param_1);
          return;
        }
        iVar2 = *(int *)(lVar5 + lVar1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1498d1ea0 FUN_1498d1ea0 body=90 status=ok
// SIG undefined FUN_1498d1ea0(void)

void FUN_1498d1ea0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1498d1ba4();
  return;
}



// FUNCTION 1498d1efa FUN_1498d1efa body=326 status=ok
// SIG undefined FUN_1498d1efa(void)

undefined4 * FUN_1498d1efa(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498d2042(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1498d2128(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1498d221a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d2042 FUN_1498d2042 body=230 status=ok
// SIG undefined FUN_1498d2042(void)

int * FUN_1498d2042(longlong *param_1,int *param_2)

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



// FUNCTION 1498d2128 FUN_1498d2128 body=128 status=ok
// SIG undefined FUN_1498d2128(void)

undefined8 FUN_1498d2128(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1498d21a8((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498d21a8 FUN_1498d21a8 body=114 status=ok
// SIG undefined FUN_1498d21a8(void)

void FUN_1498d21a8(longlong *param_1,int param_2)

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



// FUNCTION 1498d221a FUN_1498d221a body=474 status=ok
// SIG undefined FUN_1498d221a(void)

void FUN_1498d221a(longlong *param_1)

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



// FUNCTION 1498d23f6 FUN_1498d23f6 body=306 status=ok
// SIG undefined FUN_1498d23f6(void)

undefined4 * FUN_1498d23f6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498d252a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  iVar5 = FUN_144a788f7();
  uVar9 = iVar5 + (int)((ulonglong)uVar2 >> 0x20);
  cVar4 = FUN_1498d2610(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1498d2702(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d252a FUN_1498d252a body=230 status=ok
// SIG undefined FUN_1498d252a(void)

int * FUN_1498d252a(longlong *param_1,int *param_2)

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



// FUNCTION 1498d2610 FUN_1498d2610 body=128 status=ok
// SIG undefined FUN_1498d2610(void)

undefined8 FUN_1498d2610(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1498d2690((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498d2690 FUN_1498d2690 body=114 status=ok
// SIG undefined FUN_1498d2690(void)

void FUN_1498d2690(longlong *param_1,int param_2)

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



// FUNCTION 1498d2702 FUN_1498d2702 body=455 status=ok
// SIG undefined FUN_1498d2702(void)

void FUN_1498d2702(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d28ca FUN_1498d28ca body=132 status=ok
// SIG undefined FUN_1498d28ca(void)

void FUN_1498d28ca(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1498d294e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1498d294e FUN_1498d294e body=87 status=ok
// SIG undefined FUN_1498d294e(void)

void FUN_1498d294e(longlong *param_1,int param_2)

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
  FUN_1498d21a8();
  return;
}



// FUNCTION 1498d29a6 FUN_1498d29a6 body=326 status=ok
// SIG undefined FUN_1498d29a6(void)

undefined4 * FUN_1498d29a6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498d2042(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1498d2128(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1498d221a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d2aee FUN_1498d2aee body=306 status=ok
// SIG undefined FUN_1498d2aee(void)

undefined4 * FUN_1498d2aee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498d252a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  iVar5 = FUN_144a788f7();
  uVar9 = iVar5 + (int)((ulonglong)uVar2 >> 0x20);
  cVar4 = FUN_1498d2610(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1498d2702(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d2c22 FUN_1498d2c22 body=63 status=ok
// SIG undefined FUN_1498d2c22(void)

void FUN_1498d2c22(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1498cf44a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1498d2702(param_1);
    return;
  }
  FUN_1498d2c62(param_1);
  FUN_1498cf44a(param_1);
  return;
}



// FUNCTION 1498d2c62 FUN_1498d2c62 body=322 status=ok
// SIG undefined FUN_1498d2c62(void)

void FUN_1498d2c62(longlong *param_1)

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



// FUNCTION 1498d2da6 FUN_1498d2da6 body=63 status=ok
// SIG undefined FUN_1498d2da6(void)

void FUN_1498d2da6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1498cf3bc(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1498d221a(param_1);
    return;
  }
  FUN_1498d2de6(param_1);
  FUN_1498cf3bc(param_1);
  return;
}



// FUNCTION 1498d2de6 FUN_1498d2de6 body=322 status=ok
// SIG undefined FUN_1498d2de6(void)

void FUN_1498d2de6(longlong *param_1)

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



// FUNCTION 1498d2f2a FUN_1498d2f2a body=63 status=ok
// SIG undefined FUN_1498d2f2a(void)

void FUN_1498d2f2a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1498cf32e(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1498d1c16(param_1);
    return;
  }
  FUN_1498d2f6a(param_1);
  FUN_1498cf32e(param_1);
  return;
}



// FUNCTION 1498d2f6a FUN_1498d2f6a body=322 status=ok
// SIG undefined FUN_1498d2f6a(void)

void FUN_1498d2f6a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1498d30ae FUN_1498d30ae body=31 status=ok
// SIG undefined FUN_1498d30ae(void)

undefined8 FUN_1498d30ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d30ea FUN_1498d30ea body=93 status=ok
// SIG undefined FUN_1498d30ea(void)

void FUN_1498d30ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bef1490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498d3148 FUN_1498d3148 body=126 status=ok
// SIG undefined FUN_1498d3148(void)

void FUN_1498d3148(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bef1490;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498d31b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498d31c6 FUN_1498d31c6 body=21 status=ok
// SIG undefined FUN_1498d31c6(void)

undefined8 FUN_1498d31c6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498d31dc FUN_1498d31dc body=442 status=ok
// SIG undefined FUN_1498d31dc(void)

longlong * FUN_1498d31dc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_1498d360c(param_1);
  }
  if (DAT_14cc31610 == 0) {
    FUN_1498d37e8();
  }
  local_50 = DAT_14cc31610;
  local_48 = DAT_14cc31618;
  if (DAT_14cc31618 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14cc31618 + 1) = (int)DAT_14cc31618[1] + 1;
    UNLOCK();
  }
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_58 = *(longlong **)(param_1 + 0x28);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bef1670;
  plVar1 = plVar3 + 2;
  FUN_1498cb36c(plVar1,param_3,&local_60,&local_50);
  local_40 = plVar1;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1498d3ac6(param_1 + 8,&local_40);
  plVar1 = local_38;
  *param_2 = (longlong)local_40;
  param_2[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d33a0 FUN_1498d33a0 body=63 status=ok
// SIG undefined FUN_1498d33a0(void)

longlong FUN_1498d33a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1498d33df(param_2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  FUN_1498c8426(lVar1,param_1);
  return lVar1;
}



// FUNCTION 1498d33df FUN_1498d33df body=174 status=ok
// SIG undefined FUN_1498d33df(void)

undefined8 FUN_1498d33df(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a985d0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d348e FUN_1498d348e body=31 status=ok
// SIG undefined FUN_1498d348e(void)

undefined8 FUN_1498d348e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d34c6 FUN_1498d34c6 body=93 status=ok
// SIG undefined FUN_1498d34c6(void)

void FUN_1498d34c6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef15a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498d3524 FUN_1498d3524 body=93 status=ok
// SIG undefined FUN_1498d3524(void)

void FUN_1498d3524(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef15a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498d3582 FUN_1498d3582 body=126 status=ok
// SIG undefined FUN_1498d3582(void)

void FUN_1498d3582(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bef15a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498d35f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498d360c FUN_1498d360c body=474 status=ok
// SIG undefined FUN_1498d360c(void)

void FUN_1498d360c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x80,0x10);
  FUN_1498d392e(plVar3);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x28);
    if (plVar5 == (longlong *)0x0) goto LAB_1498d36eb;
    *(undefined8 *)(param_1 + 0x28) = 0;
LAB_1498d366a:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1498d36eb;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x20) = plVar3 + 2;
    plVar5 = *(longlong **)(param_1 + 0x28);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x28) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1498d366a;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1498d36eb:
  FUN_1498ce49c(*(undefined8 *)(param_1 + 0x20));
  FUN_1446ddc76(&local_30,"Media",1);
  uVar4 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1405f3750(uVar4,local_30,0);
  if (plVar3 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0xa8))(plVar3);
    local_40 = *(undefined8 *)(param_1 + 0x20);
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_40);
    plVar5 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d37e8 FUN_1498d37e8 body=324 status=ok
// SIG undefined FUN_1498d37e8(void)

void FUN_1498d37e8(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = (longlong *)FUN_14001cc68(0x158,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bef1650;
  plVar1 = plVar4 + 2;
  FUN_1498c8f78(plVar1);
  local_28 = plVar1;
  local_20 = plVar4;
  FUN_1498d39fa(&local_28,plVar1);
  plVar5 = DAT_14cc31618;
  DAT_14cc31610 = plVar1;
  if (plVar4 == (longlong *)0x0) {
    if (DAT_14cc31618 == (longlong *)0x0) goto LAB_1498d3863;
    DAT_14cc31618 = (longlong *)0x0;
LAB_1498d38f1:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1498d3863;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != DAT_14cc31618) {
      bVar6 = DAT_14cc31618 == (longlong *)0x0;
      plVar5 = DAT_14cc31618;
      DAT_14cc31618 = plVar4;
      if (bVar6) goto LAB_1498d3863;
      goto LAB_1498d38f1;
    }
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1498d3863;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar5 = plVar4;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_1498d3863:
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1498c911c(DAT_14cc31610);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1498d392e FUN_1498d392e body=124 status=ok
// SIG undefined FUN_1498d392e(void)

undefined8 * FUN_1498d392e(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bef1630;
  param_1[2] = &PTR_LAB_14bef1110;
  param_1[3] = &PTR_FUN_14bef1138;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  return param_1;
}



// FUNCTION 1498d39b4 FUN_1498d39b4 body=29 status=ok
// SIG undefined FUN_1498d39b4(void)

undefined8 FUN_1498d39b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d39d2 FUN_1498d39d2 body=9 status=ok
// SIG undefined FUN_1498d39d2(void)

void FUN_1498d39d2(longlong param_1)

{
  FUN_1498c9038(param_1 + 0x10);
  return;
}



// FUNCTION 1498d39dc FUN_1498d39dc body=29 status=ok
// SIG undefined FUN_1498d39dc(void)

undefined8 FUN_1498d39dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d39fa FUN_1498d39fa body=164 status=ok
// SIG undefined FUN_1498d39fa(void)

void FUN_1498d39fa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1498d3a72;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1498d3a72;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1498d3a72:
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
                    /* WARNING: Could not recover jumptable at 0x0001498d3a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1498d3a9e FUN_1498d3a9e body=9 status=ok
// SIG undefined FUN_1498d3a9e(void)

void FUN_1498d3a9e(longlong param_1)

{
  FUN_1498cb450(param_1 + 0x10);
  return;
}



// FUNCTION 1498d3aa8 FUN_1498d3aa8 body=29 status=ok
// SIG undefined FUN_1498d3aa8(void)

undefined8 FUN_1498d3aa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d3ac6 FUN_1498d3ac6 body=164 status=ok
// SIG undefined FUN_1498d3ac6(void)

void FUN_1498d3ac6(longlong *param_1,undefined8 param_2)

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
        goto LAB_1498d3b46;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1498d3b46:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1498d3b6a FUN_1498d3b6a body=31 status=ok
// SIG undefined FUN_1498d3b6a(void)

undefined8 FUN_1498d3b6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d3ba6 FUN_1498d3ba6 body=101 status=ok
// SIG undefined FUN_1498d3ba6(void)

void FUN_1498d3ba6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef1690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498d3c0c FUN_1498d3c0c body=101 status=ok
// SIG undefined FUN_1498d3c0c(void)

void FUN_1498d3c0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bef1690;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1498d3c72 FUN_1498d3c72 body=134 status=ok
// SIG undefined FUN_1498d3c72(void)

void FUN_1498d3c72(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bef1690;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498d3ce9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498d3d08 FUN_1498d3d08 body=48 status=ok
// SIG undefined FUN_1498d3d08(void)

void FUN_1498d3d08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1a0,0x10);
  }
  return;
}



// FUNCTION 1498d3d38 FUN_1498d3d38 body=54 status=ok
// SIG undefined FUN_1498d3d38(void)

void FUN_1498d3d38(longlong *param_1)

{
  FUN_1498d3d6e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498d3d6e FUN_1498d3d6e body=117 status=ok
// SIG undefined FUN_1498d3d6e(void)

void FUN_1498d3d6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1498d3de4 FUN_1498d3de4 body=48 status=ok
// SIG undefined FUN_1498d3de4(void)

void FUN_1498d3de4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1498d3e14 FUN_1498d3e14 body=108 status=ok
// SIG undefined FUN_1498d3e14(void)

void FUN_1498d3e14(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  if (3 < param_2) {
    uVar1 = (param_2 | 1) + 0xe;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = 1 << ((byte)iVar2 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar2 && 0 < (int)param_2 || iVar2 < *(int *)(param_1 + 0x48)) {
    FUN_1498d3d6e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar2;
    FUN_1498d3fc4(param_1);
    return;
  }
  FUN_1498d3e80(param_1);
  FUN_1498d3d6e(param_1,param_2);
  return;
}



// FUNCTION 1498d3e80 FUN_1498d3e80 body=322 status=ok
// SIG undefined FUN_1498d3e80(void)

void FUN_1498d3e80(longlong *param_1)

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



// FUNCTION 1498d3fc4 FUN_1498d3fc4 body=429 status=ok
// SIG undefined FUN_1498d3fc4(void)

void FUN_1498d3fc4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)**(int **)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1498d4172 FUN_1498d4172 body=132 status=ok
// SIG undefined FUN_1498d4172(void)

undefined8 * FUN_1498d4172(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x1b0,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14bef1700;
  puVar2[2] = &PTR_LAB_14bef1720;
  puVar2[3] = 0;
  FUN_1498cb28e(puVar2 + 4);
  uVar1 = DAT_14c967818;
  puVar2[0x30] = DAT_14c967818;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x19c) = uVar1;
  *(undefined8 *)((longlong)puVar2 + 0x1a4) = uVar1;
  *(undefined4 *)((longlong)puVar2 + 0x1ac) = 0;
  return puVar2;
}



// FUNCTION 1498d420a FUN_1498d420a body=29 status=ok
// SIG undefined FUN_1498d420a(void)

undefined8 FUN_1498d420a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d422e FUN_1498d422e body=59 status=ok
// SIG undefined FUN_1498d422e(void)

undefined8 * FUN_1498d422e(longlong param_1,undefined8 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  *param_2 = *(undefined8 *)(param_1 + 0xe0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return param_2;
}



// FUNCTION 1498d42e6 FUN_1498d42e6 body=51 status=ok
// SIG undefined FUN_1498d42e6(void)

ulonglong FUN_1498d42e6(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  uVar1 = *(undefined1 *)(param_1 + 0x100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff;
}



// FUNCTION 1498d431e FUN_1498d431e body=75 status=ok
// SIG undefined FUN_1498d431e(void)

void FUN_1498d431e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x30))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((double)local_18 / (double)local_14);
}



// FUNCTION 1498d438e FUN_1498d438e body=253 status=ok
// SIG undefined FUN_1498d438e(void)

undefined8 FUN_1498d438e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [128];
  ulonglong local_a8 [7];
  ulonglong local_70;
  ulonglong local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar3 = &DAT_14c846400;
  puVar5 = local_a8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  uVar2 = iVar1 - 0xe;
  if (uVar2 < 5) {
    puVar3 = (ulonglong *)(&PTR_DAT_14bef1cf8)[uVar2];
    puVar5 = (ulonglong *)(&PTR_DAT_14bef1d20)[uVar2];
    puVar6 = (ulonglong *)(&PTR_DAT_14bef1d48)[uVar2];
  }
  else {
    puVar6 = &DAT_14ca8d260;
    puVar5 = &DAT_14ca8d268;
    puVar3 = &DAT_14ca8d270;
  }
  local_a8[3] = *puVar6 ^ 0x8000000000000000;
  local_70 = *puVar5 ^ 0x8000000000000000;
  local_50 = *puVar3 ^ 0x8000000000000000;
  FUN_1447fea8d(local_128,&DAT_14ca8cf60);
  FUN_144a928e2(param_2,local_128);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d4492 FUN_1498d4492 body=82 status=ok
// SIG undefined FUN_1498d4492(void)

undefined8 FUN_1498d4492(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147428a19(local_58,0);
  FUN_144b10ee8(param_2,local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d4566 FUN_1498d4566 body=20 status=ok
// SIG undefined FUN_1498d4566(void)

char FUN_1498d4566(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  return cVar1 + '\x01';
}



// FUNCTION 1498d457a FUN_1498d457a body=68 status=ok
// SIG undefined FUN_1498d457a(void)

undefined4 FUN_1498d457a(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xf0))();
  if (cVar1 == '\x02') {
    uVar2 = 0x3f800000;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    uVar2 = *(undefined4 *)(&DAT_14beef318 + (ulonglong)(cVar1 == '\x01') * 4);
  }
  return uVar2;
}



// FUNCTION 1498d45d8 FUN_1498d45d8 body=52 status=ok
// SIG undefined FUN_1498d45d8(void)

undefined8 * FUN_1498d45d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bef1720;
  FUN_1498cf4a4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d460c FUN_1498d460c body=62 status=ok
// SIG undefined FUN_1498d460c(void)

void FUN_1498d460c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498d464a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1498d464a FUN_1498d464a body=93 status=ok
// SIG undefined FUN_1498d464a(void)

ulonglong FUN_1498d464a(uint param_1,uint param_2)

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



// FUNCTION 1498d46a8 FUN_1498d46a8 body=132 status=ok
// SIG undefined FUN_1498d46a8(void)

void FUN_1498d46a8(longlong param_1,int param_2)

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



// FUNCTION 1498d472e FUN_1498d472e body=25 status=ok
// SIG undefined FUN_1498d472e(void)

void FUN_1498d472e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001498d4743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1498d4748 FUN_1498d4748 body=29 status=ok
// SIG undefined FUN_1498d4748(void)

undefined8 FUN_1498d4748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d4766 FUN_1498d4766 body=103 status=ok
// SIG undefined FUN_1498d4766(void)

undefined8 FUN_1498d4766(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 1498d47ce FUN_1498d47ce body=297 status=ok
// SIG undefined FUN_1498d47ce(void)

void FUN_1498d47ce(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar8 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar8 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x18) <= *param_2)) {
      piVar9 = (int *)(lVar7 + (ulonglong)uVar8 * 0x18);
      FUN_1498cf832(piVar9,1);
      goto LAB_1498d4882;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1498d48f8(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar5 = (ulonglong)uVar8 * 0x18;
  memmove((void *)(lVar7 + lVar5 + 0x18),(void *)(lVar7 + lVar5),(ulonglong)(uVar2 - uVar8) * 0x18);
  piVar9 = (int *)(lVar5 + *param_1);
LAB_1498d4882:
  *piVar9 = *param_2;
  piVar9[2] = 0;
  piVar9[3] = 0;
  iVar3 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  piVar9[4] = iVar3;
  if ((longlong)iVar3 != 0) {
    FUN_1446dd670(piVar9 + 2,iVar3,0);
    memcpy(*(void **)(piVar9 + 2),_Src,(longlong)iVar3 * 2);
    return;
  }
  piVar9[5] = 0;
  return;
}



// FUNCTION 1498d48f8 FUN_1498d48f8 body=147 status=ok
// SIG undefined FUN_1498d48f8(void)

void FUN_1498d48f8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498d498c FUN_1498d498c body=62 status=ok
// SIG undefined FUN_1498d498c(void)

void FUN_1498d498c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498d49ca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1498d49ca FUN_1498d49ca body=93 status=ok
// SIG undefined FUN_1498d49ca(void)

ulonglong FUN_1498d49ca(uint param_1,uint param_2)

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



// FUNCTION 1498d4a28 FUN_1498d4a28 body=9 status=ok
// SIG undefined FUN_1498d4a28(void)

void FUN_1498d4a28(longlong param_1)

{
  FUN_1498cf4a4(param_1 + 0x10);
  return;
}



// FUNCTION 1498d4a32 FUN_1498d4a32 body=29 status=ok
// SIG undefined FUN_1498d4a32(void)

undefined8 FUN_1498d4a32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d4a50 FUN_1498d4a50 body=341 status=ok
// SIG undefined FUN_1498d4a50(void)

int FUN_1498d4a50(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar4 = *(int *)(param_1 + 1);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    iVar3 = 0;
    bVar11 = false;
    if (piVar1[1] == ((int *)*param_2)[1]) {
      bVar11 = *piVar1 == *(int *)*param_2;
    }
    iVar10 = 0;
    do {
      if (iVar10 + 1 < iVar4) {
        do {
          lVar9 = (longlong)iVar10 + 2;
          bVar13 = true;
          lVar7 = -1;
          do {
            if (piVar1[lVar9 * 2 + -1] == ((int *)*param_2)[1]) {
              if ((piVar1[lVar9 * 2 + -2] == *(int *)*param_2) != bVar11) {
                iVar8 = iVar10 - (int)lVar7;
                break;
              }
            }
            else if (bVar11 != false) {
              if (bVar13 == false) goto LAB_1498d4b89;
              iVar8 = iVar10 - (int)lVar7;
              goto LAB_1498d4b0f;
            }
            bVar13 = lVar9 < lVar5;
            lVar7 = lVar7 + -1;
            lVar9 = lVar9 + 1;
            iVar8 = iVar4;
          } while (iVar10 - lVar5 != lVar7);
          bVar12 = bVar11 == false;
          bVar11 = bVar13;
          iVar2 = iVar8;
          iVar6 = iVar10;
          if (bVar12) break;
          if (bVar13 == false) goto LAB_1498d4b89;
LAB_1498d4b0f:
          bVar11 = false;
          iVar2 = iVar8 + 1;
          iVar6 = iVar8;
          iVar10 = iVar8;
        } while (iVar8 + 1 < iVar4);
      }
      else {
        if (bVar11 != false) break;
        bVar11 = false;
        iVar2 = iVar10 + 1;
        iVar6 = iVar10;
      }
      iVar10 = iVar2;
      if (iVar3 != iVar6) {
        memmove(piVar1 + (longlong)iVar3 * 2,piVar1 + (longlong)iVar6 * 2,
                (longlong)(iVar10 - iVar6) << 3);
      }
      iVar3 = iVar3 + (iVar10 - iVar6);
      bVar13 = bVar11 != false;
      bVar11 = true;
    } while (bVar13);
LAB_1498d4b89:
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1498d4ba6 FUN_1498d4ba6 body=132 status=ok
// SIG undefined FUN_1498d4ba6(void)

void FUN_1498d4ba6(longlong param_1,int param_2)

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



// FUNCTION 1498d4c2c FUN_1498d4c2c body=84 status=ok
// SIG undefined FUN_1498d4c2c(void)

void FUN_1498d4c2c(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (**(int **)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1498d4c80(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1498d4c80 FUN_1498d4c80 body=90 status=ok
// SIG undefined FUN_1498d4c80(void)

void FUN_1498d4c80(longlong *param_1,int param_2)

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
  FUN_1498d4cda();
  return;
}



// FUNCTION 1498d4cda FUN_1498d4cda body=114 status=ok
// SIG undefined FUN_1498d4cda(void)

void FUN_1498d4cda(longlong *param_1,int param_2)

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



// FUNCTION 1498d4d4c FUN_1498d4d4c body=277 status=ok
// SIG undefined FUN_1498d4d4c(void)

undefined4 * FUN_1498d4d4c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1498d4e62(param_1,local_48);
  puVar1 = (uint *)*param_3;
  *local_40 = puVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *puVar1;
  cVar3 = FUN_1498d4f48(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0xc) = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1498d3fc4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d4e62 FUN_1498d4e62 body=229 status=ok
// SIG undefined FUN_1498d4e62(void)

int * FUN_1498d4e62(longlong *param_1,int *param_2)

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



// FUNCTION 1498d4f48 FUN_1498d4f48 body=129 status=ok
// SIG undefined FUN_1498d4f48(void)

undefined8 FUN_1498d4f48(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  undefined8 *puVar1;
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
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 0x10);
        if (**(int **)(*param_1 + (longlong)iVar3 * 0x10) == *(int *)*param_3) {
          *puVar1 = (int *)*param_3;
          FUN_1498d4cda(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(puVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498d4fca FUN_1498d4fca body=46 status=ok
// SIG undefined FUN_1498d4fca(void)

void FUN_1498d4fca(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) <= *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  FUN_1498d4ff8();
  FUN_1498d5166(*param_1,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
  return;
}



// FUNCTION 1498d4ff8 FUN_1498d4ff8 body=366 status=ok
// SIG undefined FUN_1498d4ff8(void)

void FUN_1498d4ff8(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar11 = uVar3 - iVar2;
    iVar8 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar5 = *param_1;
      iVar6 = (int)param_1[6];
      uVar13 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 0x50);
        if (iVar6 < iVar11) {
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          pvVar10 = (void *)((longlong)(int)(uVar13 - 1) * 0x50 + lVar5 + 0x50);
          uVar12 = uVar13;
          do {
            uVar13 = uVar12 - 1;
            uVar14 = uVar12 + 0x1e;
            if (-1 < (int)uVar13) {
              uVar14 = uVar13;
            }
            pvVar10 = (void *)((longlong)pvVar10 + -0x50);
            uVar12 = uVar13;
          } while ((*(uint *)((longlong)plVar7 + (longlong)((int)uVar14 >> 5) * 4) >>
                    (uVar13 & 0x1f) & 1) == 0);
          memmove((void *)((longlong)iVar6 * 0x50 + lVar5),pvVar10,0x50);
          plVar7 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar7 = param_1 + 2;
          }
          iVar9 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar9 = iVar6;
          }
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar9 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
        }
        iVar6 = iVar4;
      } while (iVar4 != -1);
      iVar6 = (int)param_1[1] - uVar3;
      if (iVar6 != 0) {
        pvVar10 = (void *)((longlong)iVar11 * 0x50 + *param_1);
        memmove(pvVar10,(void *)((longlong)iVar2 * 0x50 + (longlong)pvVar10),(longlong)iVar6 * 0x50)
        ;
        iVar8 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    FUN_144a6134a(param_1 + 2,iVar11,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_140e9549c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1498d5166 FUN_1498d5166 body=731 status=ok
// SIG undefined FUN_1498d5166(void)

void FUN_1498d5166(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  longlong *plVar18;
  float fVar19;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [188];
  undefined8 local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (1 < (int)param_2) {
    memset(local_388,0,0x2f0);
    local_390 = (ulonglong)param_2 * 0x50 + param_1 + -0x50;
    local_398 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_388[0] = (int)(longlong)(fVar19 + fVar19);
    plVar18 = &local_398;
    do {
      piVar1 = (int *)*plVar18;
      piVar14 = (int *)plVar18[1];
      iVar16 = (int)plVar18[2];
      iVar2 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar1) >> 4);
      piVar6 = piVar1;
      piVar15 = piVar14;
      if (iVar16 != 0) {
LAB_1498d523d:
        uVar5 = iVar2 * -0x33333333 + 1;
        if (8 < (int)uVar5) {
          piVar11 = piVar1 + (ulonglong)(uVar5 >> 1) * 0x14;
          puVar10 = local_98;
          for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar10 = *(undefined8 *)piVar11;
            piVar11 = piVar11 + 2;
            puVar10 = puVar10 + 1;
          }
          piVar11 = piVar1;
          piVar12 = piVar1 + (ulonglong)(uVar5 >> 1) * 0x14;
          for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined8 *)piVar12 = *(undefined8 *)piVar11;
            piVar11 = piVar11 + 2;
            piVar12 = piVar12 + 2;
          }
          puVar10 = local_98;
          piVar11 = piVar1;
          for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
            *(undefined8 *)piVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            piVar11 = piVar11 + 2;
          }
          piVar11 = piVar14 + 0x14;
          piVar12 = piVar1;
          do {
            piVar9 = piVar12 + 0x14;
            piVar13 = piVar12 + 0x14;
            do {
              piVar12 = piVar13;
              piVar7 = piVar9;
              if (piVar14 < piVar12) break;
              piVar9 = piVar7 + 0x14;
              piVar13 = piVar12 + 0x14;
            } while (*piVar12 <= *piVar1);
            piVar9 = piVar11 + -0x28;
            do {
              piVar13 = piVar11;
              piVar17 = piVar9;
              piVar11 = piVar13 + -0x14;
              if (piVar11 <= piVar1) break;
              piVar9 = piVar17 + -0x14;
            } while (*piVar1 <= *piVar11);
            lVar4 = 10;
            piVar9 = piVar1;
            piVar8 = piVar12;
            puVar10 = local_98;
            if (piVar11 < piVar12) goto code_r0x0001498d5305;
            for (; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar10 = *(undefined8 *)piVar8;
              piVar8 = piVar8 + 2;
              puVar10 = puVar10 + 1;
            }
            piVar9 = piVar11;
            piVar13 = piVar12;
            for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined8 *)piVar13 = *(undefined8 *)piVar9;
              piVar9 = piVar9 + 2;
              piVar13 = piVar13 + 2;
            }
            puVar10 = local_98;
            piVar9 = piVar11;
            for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined8 *)piVar9 = *puVar10;
              puVar10 = puVar10 + 1;
              piVar9 = piVar9 + 2;
            }
          } while( true );
        }
        if (piVar1 < piVar14) {
          do {
            piVar6 = piVar1;
            if (piVar1 + 0x14 <= piVar14) {
              piVar15 = piVar1 + 0x14;
              iVar16 = *piVar1;
              do {
                iVar2 = *piVar15;
                iVar3 = iVar16;
                if (iVar16 <= iVar2) {
                  iVar3 = iVar2;
                }
                if (iVar16 < iVar2) {
                  piVar6 = piVar15;
                }
                piVar15 = piVar15 + 0x14;
                iVar16 = iVar3;
              } while (piVar15 <= piVar14);
            }
            piVar15 = piVar14 + -0x14;
            piVar11 = piVar6;
            puVar10 = local_98;
            for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar10 = *(undefined8 *)piVar11;
              piVar11 = piVar11 + 2;
              puVar10 = puVar10 + 1;
            }
            piVar11 = piVar14;
            for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined8 *)piVar6 = *(undefined8 *)piVar11;
              piVar11 = piVar11 + 2;
              piVar6 = piVar6 + 2;
            }
            puVar10 = local_98;
            for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *(undefined8 *)piVar14 = *puVar10;
              puVar10 = puVar10 + 1;
              piVar14 = piVar14 + 2;
            }
            piVar14 = piVar15;
          } while (piVar1 < piVar15);
        }
        goto LAB_1498d5418;
      }
LAB_1498d5432:
      FUN_1498d5442(piVar1);
LAB_1498d5418:
      plVar18 = plVar18 + -3;
    } while (&local_398 <= plVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001498d5305:
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar10 = *(undefined8 *)piVar9;
    piVar9 = piVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  piVar9 = piVar11;
  piVar8 = piVar1;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)piVar8 = *(undefined8 *)piVar9;
    piVar9 = piVar9 + 2;
    piVar8 = piVar8 + 2;
  }
  puVar10 = local_98;
  piVar9 = piVar11;
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)piVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    piVar9 = piVar9 + 2;
  }
  iVar16 = iVar16 + -1;
  piVar13 = piVar13 + -0x28;
  if ((longlong)piVar17 - (longlong)piVar6 < (longlong)piVar15 - (longlong)piVar7) {
    if (piVar12 < piVar14) {
      *plVar18 = (longlong)piVar12;
      plVar18[1] = (longlong)piVar14;
      *(int *)(plVar18 + 2) = iVar16;
      plVar18 = plVar18 + 3;
    }
    piVar7 = piVar1;
    if (piVar11 <= piVar1 + 0x14) goto LAB_1498d5418;
  }
  else {
    if (piVar1 + 0x14 < piVar11) {
      *plVar18 = (longlong)piVar1;
      plVar18[1] = (longlong)piVar13;
      *(int *)(plVar18 + 2) = iVar16;
      plVar18 = plVar18 + 3;
    }
    piVar1 = piVar12;
    piVar13 = piVar14;
    piVar17 = piVar14;
    if (piVar14 <= piVar12) goto LAB_1498d5418;
  }
  iVar2 = (int)((ulonglong)((longlong)piVar17 - (longlong)piVar7) >> 4);
  piVar14 = piVar13;
  piVar6 = piVar7;
  piVar15 = piVar17;
  if (iVar16 == 0) goto LAB_1498d5432;
  goto LAB_1498d523d;
}



// FUNCTION 1498d5442 FUN_1498d5442 body=591 status=ok
// SIG undefined FUN_1498d5442(void)

void FUN_1498d5442(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  undefined8 local_70 [10];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x0001498d5486:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar5 * 10) <= *(int *)(param_1 + (longlong)iVar6 * 10))) {
          iVar5 = iVar6;
        }
        if (*(int *)(param_1 + (longlong)iVar1 * 10) < *(int *)(param_1 + (longlong)iVar5 * 10)) {
          puVar3 = param_1 + (longlong)iVar1 * 10;
          puVar4 = local_70;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 10;
          puVar4 = param_1 + (longlong)iVar1 * 10;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_70;
          puVar4 = param_1 + (longlong)iVar5 * 10;
          for (lVar2 = 10; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x0001498d5486;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_70;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 10;
      puVar4 = param_1;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_70;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 10;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(int *)(param_1 + (longlong)iVar5 * 10) <= *(int *)(param_1 + (longlong)iVar1 * 10)
               )) {
              iVar6 = iVar1;
            }
            if (*(int *)(param_1 + (longlong)iVar6 * 10) <= *(int *)(param_1 + (longlong)iVar8 * 10)
               ) break;
            puVar3 = param_1 + (longlong)iVar8 * 10;
            puVar4 = local_70;
            for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 10;
            puVar4 = param_1 + (longlong)iVar8 * 10;
            for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_70;
            puVar4 = param_1 + (longlong)iVar6 * 10;
            for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_70;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 10;
          puVar4 = param_1;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_70;
          puVar4 = param_1 + (uVar7 - 1) * 10;
          for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d5692 FUN_1498d5692 body=41 status=ok
// SIG undefined FUN_1498d5692(void)

void FUN_1498d5692(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1498cf4a4(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1498d56bc FUN_1498d56bc body=29 status=ok
// SIG undefined FUN_1498d56bc(void)

undefined8 FUN_1498d56bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d56da FUN_1498d56da body=9 status=ok
// SIG undefined FUN_1498d56da(void)

void FUN_1498d56da(longlong param_1)

{
  FUN_14468b4f0(param_1 + 0x10);
  return;
}



// FUNCTION 1498d56e4 FUN_1498d56e4 body=29 status=ok
// SIG undefined FUN_1498d56e4(void)

undefined8 FUN_1498d56e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d5702 FUN_1498d5702 body=167 status=ok
// SIG undefined FUN_1498d5702(void)

void FUN_1498d5702(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1498d577d;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1498d577d;
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
LAB_1498d577d:
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
                    /* WARNING: Could not recover jumptable at 0x0001498d579d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1498d57aa FUN_1498d57aa body=252 status=ok
// SIG undefined FUN_1498d57aa(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_1498d57aa(char *param_1,char *param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  
  cVar3 = *param_1;
  if ((cVar3 != '\x02') && (param_1[8] != '\x02')) {
    fVar2 = *(float *)(param_1 + 4);
    pfVar1 = (float *)(param_1 + 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      return false;
    }
    if (((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) &&
       (param_1[8] == '\0' || cVar3 == '\0')) {
      return false;
    }
  }
  cVar4 = *param_2;
  cVar5 = param_2[8];
  if (cVar4 != '\x02') {
    if (cVar5 != '\x02') {
      fVar2 = *(float *)(param_2 + 4);
      pfVar1 = (float *)(param_2 + 0xc);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        return false;
      }
      if (((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) && (cVar5 == '\0' || cVar4 == '\0')
         ) {
        return false;
      }
    }
    cVar6 = param_1[8];
    if (cVar6 != '\x02') {
      if ((*(float *)(param_1 + 0xc) == *(float *)(param_2 + 4)) &&
         (!NAN(*(float *)(param_1 + 0xc)) && !NAN(*(float *)(param_2 + 4)))) {
        if (cVar6 != '\x01' || cVar4 != '\0') {
          return cVar4 == '\x01' && cVar6 == '\0';
        }
        return true;
      }
    }
  }
  if (cVar5 != '\x02' && cVar3 != '\x02') {
    if ((*(float *)(param_2 + 0xc) == *(float *)(param_1 + 4)) &&
       (!NAN(*(float *)(param_2 + 0xc)) && !NAN(*(float *)(param_1 + 4)))) {
      if (cVar5 != '\x01' || cVar3 != '\0') {
        return cVar3 == '\x01' && cVar5 == '\0';
      }
      return true;
    }
  }
  return false;
}



// FUNCTION 1498d58a6 FUN_1498d58a6 body=307 status=ok
// SIG undefined FUN_1498d58a6(void)

undefined8 FUN_1498d58a6(char *param_1,char *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  longlong in_RAX;
  uint7 uVar8;
  undefined7 uVar9;
  bool bVar10;
  
  cVar4 = *param_1;
  if (cVar4 != '\x02') {
    cVar5 = param_1[8];
    uVar8 = (uint7)((ulonglong)in_RAX >> 8);
    in_RAX = CONCAT71(uVar8,cVar5);
    if (cVar5 != '\x02') {
      fVar2 = *(float *)(param_1 + 4);
      pfVar1 = (float *)(param_1 + 0xc);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        return 0;
      }
      if (((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) &&
         (in_RAX = (ulonglong)uVar8 << 8, cVar5 == '\0' || cVar4 == '\0')) {
        return 0;
      }
    }
  }
  cVar5 = *param_2;
  cVar6 = param_2[8];
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  if (cVar5 == '\x02') {
    bVar7 = true;
    bVar10 = true;
    if (cVar4 == '\x02' || cVar6 == '\x02') goto LAB_1498d5972;
  }
  else {
    if (cVar6 != '\x02') {
      fVar2 = *(float *)(param_2 + 4);
      pfVar1 = (float *)(param_2 + 0xc);
      if ((*pfVar1 <= fVar2 && fVar2 != *pfVar1) ||
         (((fVar2 == *pfVar1 && (!NAN(fVar2) && !NAN(*pfVar1))) &&
          (in_RAX = CONCAT71(uVar9,cVar5 == '\0'), cVar6 == '\0' || cVar5 == '\0')))) {
        return 0;
      }
    }
    uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar7 = true;
    if (param_1[8] != '\x02') {
      fVar2 = *(float *)(param_1 + 0xc);
      fVar3 = *(float *)(param_2 + 4);
      bVar7 = fVar3 < fVar2;
      if (param_1[8] == '\x01') {
        bVar7 = fVar3 < fVar2;
        if (cVar5 == '\x01') {
          bVar7 = fVar3 <= fVar2;
        }
        uVar9 = 0;
      }
    }
    bVar10 = true;
    if (cVar4 == '\x02' || cVar6 == '\x02') goto LAB_1498d5972;
  }
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_2 + 0xc);
  bVar10 = fVar2 < fVar3;
  if (cVar4 == '\x01') {
    bVar10 = fVar2 < fVar3;
    if (cVar6 == '\x01') {
      bVar10 = fVar2 <= fVar3;
    }
  }
LAB_1498d5972:
  return CONCAT71(uVar9,bVar7 & bVar10);
}



// FUNCTION 1498d59da FUN_1498d59da body=63 status=ok
// SIG undefined FUN_1498d59da(void)

void FUN_1498d59da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498d5a1a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1498d5a1a FUN_1498d5a1a body=97 status=ok
// SIG undefined FUN_1498d5a1a(void)

ulonglong FUN_1498d5a1a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1498d5a7c FUN_1498d5a7c body=132 status=ok
// SIG undefined FUN_1498d5a7c(void)

void FUN_1498d5a7c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498d5b02 FUN_1498d5b02 body=132 status=ok
// SIG undefined FUN_1498d5b02(void)

void FUN_1498d5b02(longlong param_1,int param_2)

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



// FUNCTION 1498d5ba2 FUN_1498d5ba2 body=29 status=ok
// SIG undefined FUN_1498d5ba2(void)

undefined8 FUN_1498d5ba2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d5bc0 FUN_1498d5bc0 body=9 status=ok
// SIG undefined FUN_1498d5bc0(void)

void FUN_1498d5bc0(longlong param_1)

{
  FUN_14468e072(param_1 + 0x10);
  return;
}



// FUNCTION 1498d5bca FUN_1498d5bca body=29 status=ok
// SIG undefined FUN_1498d5bca(void)

undefined8 FUN_1498d5bca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d5be8 FUN_1498d5be8 body=195 status=ok
// SIG undefined FUN_1498d5be8(void)

void FUN_1498d5be8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0xe0) != 0) && (*(longlong *)(param_2 + 0xe8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0xe8) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0xe0) = param_2;
    plVar3 = *(longlong **)(param_2 + 0xe8);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0xe0) = param_2;
    if (*(longlong **)(param_2 + 0xe8) == plVar2) goto LAB_1498d5c7f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0xe8);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0xe8) = plVar2;
      goto LAB_1498d5c7f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0xe8) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1498d5c7f:
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
                    /* WARNING: Could not recover jumptable at 0x0001498d5c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1498d5cac FUN_1498d5cac body=681 status=ok
// SIG undefined FUN_1498d5cac(void)

void FUN_1498d5cac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_146b7f620(&local_98,uVar5);
    iVar2 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar2)) {
      local_50 = iVar2;
      FUN_1449809d4();
    }
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar5 = *(uint *)(lVar1 + lVar3 * 0x18);
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar2 = *(int *)(puVar4 + (ulonglong)(local_50 - 1U & uVar5) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == uVar5) goto LAB_1498d5e3e;
        }
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1447808da(param_2,iVar2);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 * 0x18 + lVar1);
      FUN_144980568(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_1498d5e3e:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d5f58 FUN_1498d5f58 body=190 status=ok
// SIG undefined FUN_1498d5f58(void)

void FUN_1498d5f58(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[9] != 0) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (longlong)(int)((int)param_1[9] - 1U & param_2) * 4);
    while (iVar3 = iVar4, iVar3 != -1) {
      lVar5 = *param_1;
      iVar4 = *(int *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18);
      if (*(uint *)(lVar5 + (longlong)iVar3 * 0x18) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1498d6016(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) =
               *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x18 + 8);
          do {
            iVar3 = iVar4;
            if (iVar3 == -1) {
              return;
            }
            lVar5 = *param_1;
            iVar4 = *(int *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18);
          } while (*(uint *)(lVar5 + (longlong)iVar3 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1498d6016 FUN_1498d6016 body=132 status=ok
// SIG undefined FUN_1498d6016(void)

void FUN_1498d6016(longlong param_1,int param_2)

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



// FUNCTION 1498d609c FUN_1498d609c body=123 status=ok
// SIG undefined FUN_1498d609c(void)

undefined8 * FUN_1498d609c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1498d6118();
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



// FUNCTION 1498d6118 FUN_1498d6118 body=146 status=ok
// SIG undefined FUN_1498d6118(void)

longlong * FUN_1498d6118(longlong *param_1,longlong *param_2)

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



// FUNCTION 1498d61aa FUN_1498d61aa body=88 status=ok
// SIG undefined FUN_1498d61aa(void)

void FUN_1498d61aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1498d6202 FUN_1498d6202 body=303 status=ok
// SIG undefined FUN_1498d6202(void)

undefined8 * FUN_1498d6202(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bef1a50;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x10000ea60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xffffffff;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1c),4000);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x23));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x23),4000);
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  return param_1;
}



// FUNCTION 1498d6332 FUN_1498d6332 body=9 status=ok
// SIG undefined FUN_1498d6332(void)

void FUN_1498d6332(longlong param_1)

{
  FUN_1498d6384(param_1 + 0x10);
  return;
}



// FUNCTION 1498d633c FUN_1498d633c body=29 status=ok
// SIG undefined FUN_1498d633c(void)

undefined8 FUN_1498d633c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d635a FUN_1498d635a body=38 status=ok
// SIG undefined FUN_1498d635a(void)

undefined8 FUN_1498d635a(undefined8 param_1,int param_2)

{
  FUN_1498d6384();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d6384 FUN_1498d6384 body=165 status=ok
// SIG undefined FUN_1498d6384(void)

void FUN_1498d6384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bef1a50;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1498d642a(param_1 + 0x32);
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1498d642a(param_1 + 0x28);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x23));
  FUN_1449db362(param_1 + 0x21);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  FUN_1498cdf8c(param_1 + 6);
                    /* WARNING: Could not recover jumptable at 0x0001498d6426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 1498d642a FUN_1498d642a body=54 status=ok
// SIG undefined FUN_1498d642a(void)

void FUN_1498d642a(longlong *param_1)

{
  FUN_1498d0d1a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1498d6460 FUN_1498d6460 body=213 status=ok
// SIG undefined FUN_1498d6460(void)

int * FUN_1498d6460(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(int *)(lVar6 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar6 + (ulonglong)uVar7 * 0x18) <= *param_2)) {
      piVar8 = (int *)(lVar6 + (ulonglong)uVar7 * 0x18);
      FUN_1498d0ae5(piVar8,1);
      goto LAB_1498d6506;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1498d6536(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x18);
  piVar8 = (int *)(lVar4 + *param_1);
LAB_1498d6506:
  *piVar8 = *param_2;
  piVar8[2] = 0;
  piVar8[3] = 0;
  piVar8[4] = 0;
  piVar8[5] = 0;
  return piVar8 + 2;
}



// FUNCTION 1498d6536 FUN_1498d6536 body=147 status=ok
// SIG undefined FUN_1498d6536(void)

void FUN_1498d6536(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498d65d8 FUN_1498d65d8 body=201 status=ok
// SIG undefined FUN_1498d65d8(void)

void FUN_1498d65d8(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1498d66a2 FUN_1498d66a2 body=247 status=ok
// SIG undefined FUN_1498d66a2(void)

undefined4 * FUN_1498d66a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1498d679a(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  local_30[4] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[5] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[4] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1498d6880(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d679a FUN_1498d679a body=230 status=ok
// SIG undefined FUN_1498d679a(void)

int * FUN_1498d679a(longlong *param_1,int *param_2)

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



// FUNCTION 1498d6880 FUN_1498d6880 body=419 status=ok
// SIG undefined FUN_1498d6880(void)

void FUN_1498d6880(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1498d6a24 FUN_1498d6a24 body=54 status=ok
// SIG undefined FUN_1498d6a24(void)

void FUN_1498d6a24(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1498d6a5a FUN_1498d6a5a body=132 status=ok
// SIG undefined FUN_1498d6a5a(void)

void FUN_1498d6a5a(longlong param_1,int param_2)

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



// FUNCTION 1498d6ae0 FUN_1498d6ae0 body=132 status=ok
// SIG undefined FUN_1498d6ae0(void)

void FUN_1498d6ae0(longlong param_1,int param_2)

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



// FUNCTION 1498d6b66 FUN_1498d6b66 body=48 status=ok
// SIG undefined FUN_1498d6b66(void)

void FUN_1498d6b66(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1498d6b96 FUN_1498d6b96 body=95 status=ok
// SIG undefined FUN_1498d6b96(void)

void FUN_1498d6b96(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (ulonglong)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (ulonglong)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1498d6bf6 FUN_1498d6bf6 body=62 status=ok
// SIG undefined FUN_1498d6bf6(void)

void FUN_1498d6bf6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498d6c34(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1498d6c34 FUN_1498d6c34 body=93 status=ok
// SIG undefined FUN_1498d6c34(void)

ulonglong FUN_1498d6c34(uint param_1,uint param_2)

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



// FUNCTION 1498d6c92 FUN_1498d6c92 body=62 status=ok
// SIG undefined FUN_1498d6c92(void)

void FUN_1498d6c92(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1498d6cd0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1498d6cd0 FUN_1498d6cd0 body=93 status=ok
// SIG undefined FUN_1498d6cd0(void)

ulonglong FUN_1498d6cd0(uint param_1,uint param_2)

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



// FUNCTION 1498d6d2e FUN_1498d6d2e body=208 status=ok
// SIG undefined FUN_1498d6d2e(void)

void FUN_1498d6d2e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bef0990;
  plVar3 = (longlong *)param_1[0x12];
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
  plVar3 = (longlong *)param_1[0x10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xe];
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145a36c6e(param_1 + 3);
  *param_1 = IQueuedWork::vftable;
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001498d6df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 1498d6e14 FUN_1498d6e14 body=36 status=ok
// SIG undefined FUN_1498d6e14(void)

undefined8 FUN_1498d6e14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1498d6e54 FUN_1498d6e54 body=93 status=ok
// SIG undefined FUN_1498d6e54(void)

void FUN_1498d6e54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bef2550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498d6eb2 FUN_1498d6eb2 body=123 status=ok
// SIG undefined FUN_1498d6eb2(void)

void FUN_1498d6eb2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bef2550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498d6f2e FUN_1498d6f2e body=21 status=ok
// SIG undefined FUN_1498d6f2e(void)

undefined8 FUN_1498d6f2e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1498d6f44 FUN_1498d6f44 body=31 status=ok
// SIG undefined FUN_1498d6f44(void)

bool FUN_1498d6f44(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  return 0 < iVar1;
}



// FUNCTION 1498d6f64 FUN_1498d6f64 body=138 status=ok
// SIG undefined FUN_1498d6f64(void)

undefined8 * FUN_1498d6f64(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"ImgMedia",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_1405f3750(uVar1,local_28,0);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d6ff0 FUN_1498d6ff0 body=151 status=ok
// SIG undefined FUN_1498d6ff0(void)

undefined8 FUN_1498d6ff0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"MediaPlayerDisplayName";
  local_30 = 0x16;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"FImgMediaFactoryModule";
  local_30 = 0x16;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(param_2,local_40,local_3c,L"Image Sequence");
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d7088 FUN_1498d7088 body=120 status=ok
// SIG undefined FUN_1498d7088(void)

undefined8 * FUN_1498d7088(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31760) {
    FUN_144b3d300(&DAT_14cc31760);
    if (DAT_14cc31760 == -1) {
      FUN_1446f470e(&DAT_14cc31758,L"ImgMedia",1);
      _Init_thread_footer(&DAT_14cc31760);
    }
  }
  *param_2 = DAT_14cc31758;
  return param_2;
}



// FUNCTION 1498d711e FUN_1498d711e body=903 status=ok
// SIG undefined FUN_1498d711e(void)

undefined8
FUN_1498d711e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  wchar_t *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8 [5];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_140056680(&local_60,&DAT_149e3579e);
  local_110 = 0;
  local_118 = 0;
  cVar4 = FUN_1407cdbc6(param_2,&local_60,local_b8 + 2,local_b8);
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    uVar5 = 0;
    if (param_5 == (longlong *)0x0) goto LAB_1498d7453;
    local_60 = L"NoSchemeFound";
    local_58 = 0xd;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"FImgMediaFactoryModule";
    local_58 = 0x16;
    FUN_1446e940c(&local_80,&local_60);
    FUN_140208bae(&local_60,&local_80,&local_70,L"No URI scheme found");
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,&local_60);
    local_f8[0] = local_60;
  }
  else {
    cVar4 = FUN_144a23846(param_1 + 0x30,local_b8 + 2);
    uVar5 = 100;
    if ((cVar4 != '\0') || (uVar5 = 0, param_5 == (longlong *)0x0)) goto LAB_1498d7453;
    FUN_140009b9a(local_d8,local_b8 + 2);
    local_60 = L"SchemeNotSupported";
    local_58 = 0x12;
    FUN_1446e940c(local_fc,&local_60);
    local_60 = L"FImgMediaFactoryModule";
    local_58 = 0x16;
    FUN_1446e940c(local_100,&local_60);
    FUN_140208bae(local_f8,local_100,local_fc,L"The URI scheme \'{0}\' is not supported");
    FUN_14023409e(&local_e8,local_f8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_d8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_e8;
    local_88 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    iVar3 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
      FUN_14001d63e(param_5,iVar3);
    }
    FUN_14023423e((longlong)iVar3 * 0x10 + *param_5,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
  }
  uVar5 = 0;
  if (local_f8[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_f8[0] + 0x10))();
  }
LAB_1498d7453:
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1498d74a6 FUN_1498d74a6 body=43 status=ok
// SIG undefined FUN_1498d74a6(void)

undefined8 FUN_1498d74a6(undefined8 param_1,int param_2)

{
  FUN_145dbe47a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1498d74d2 FUN_1498d74d2 body=180 status=ok
// SIG undefined FUN_1498d74d2(void)

void FUN_1498d74d2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14bef2750;
  if (param_1[5] != 0) {
    FUN_140457ffc(param_1[5] + 0x118,param_1);
    FUN_14336dabe(param_1[5]);
    if (*(char *)((longlong)param_1 + 0x21) == '\0') {
      FUN_145e272d8(param_1[5]);
    }
    uVar3 = *(uint *)(param_1[5] + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    FUN_14482b126(lVar5,0x40000000);
  }
  *param_1 = &PTR_FUN_14a47b380;
  plVar4 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001498d757b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498d7586 FUN_1498d7586 body=343 status=ok
// SIG undefined FUN_1498d7586(void)

void FUN_1498d7586(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x28);
    if (param_2 == 0) {
      uVar3 = FUN_14117a870();
      uVar4 = FUN_1409ffe1d();
      local_58 = 0;
      FUN_140af9fb2(&local_40,uVar4,uVar3,0);
      uVar3 = FUN_1409ffe1d();
      local_50 = 0;
      local_58 = local_58 & 0xffffff00;
      param_2 = FUN_145e78b7d(uVar3,local_40,0,0);
      *(longlong *)(param_1 + 0x28) = param_2;
    }
  }
  else {
    *(longlong *)(param_1 + 0x28) = param_2;
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  *(undefined1 *)(param_2 + 0xd9) = 0;
  FUN_1498d76de(*(longlong *)(param_1 + 0x28) + 0x118,local_48,param_1);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  FUN_1447f71cc(lVar5,0x40000000);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined4 *)(param_1 + 0x44) = param_5;
  if ((param_3 != 0) && (lVar5 = *(longlong *)(param_3 + 0x10), lVar5 != 0)) {
    uVar3 = FUN_145b3a31a();
    cVar2 = FUN_144a7ff9e(lVar5,uVar3);
    if (cVar2 != '\0') {
      FUN_14485c47a(param_1 + 0x30,param_3);
      goto LAB_1498d76ba;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
LAB_1498d76ba:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d76de FUN_1498d76de body=228 status=ok
// SIG undefined FUN_1498d76de(void)

undefined8 FUN_1498d76de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14a5981a0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14bef4b40;
  local_38[3] = param_3;
  local_38[4] = FUN_1498d77c4;
  FUN_14603a25e(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d77c4 FUN_1498d77c4 body=258 status=ok
// SIG undefined FUN_1498d77c4(void)

void FUN_1498d77c4(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 == 3) && (-1 < *(longlong *)(param_1 + 0x48))) {
    cVar2 = FUN_1478102ae(*(undefined8 *)(param_1 + 0x28));
    if (cVar2 != '\0') {
      FUN_14780d4f2(*(undefined8 *)(param_1 + 0x28),&local_20);
      if (local_20 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        FUN_14780e912(uVar1);
        FUN_14336d8d6(uVar1);
        cVar2 = FUN_14780e912(*(undefined8 *)(param_1 + 0x28));
        if (cVar2 == '\0') {
          auVar3 = roundpd(ZEXT816(0x40c3884000000000),ZEXT816(0x40c3884000000000),1);
          local_20 = local_20 - (longlong)auVar3._0_8_;
          if (*(longlong *)(param_1 + 0x48) < local_20) {
            local_20 = *(longlong *)(param_1 + 0x48);
          }
          local_28 = 0;
          if (0 < local_20) {
            local_28 = local_20;
          }
        }
        else {
          local_28 = *(longlong *)(param_1 + 0x48) % local_20;
        }
        FUN_14336e9c4(*(undefined8 *)(param_1 + 0x28),0);
        FUN_14336e718(*(undefined8 *)(param_1 + 0x28),&local_28);
        *(undefined8 *)(param_1 + 0x48) = 0x8000000000000000;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d78c8 FUN_1498d78c8 body=156 status=ok
// SIG undefined FUN_1498d78c8(void)

void FUN_1498d78c8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar3 = FUN_14493c216(param_1 + 0x30,0);
  if (cVar3 == '\0') {
    lVar1 = param_1 + 0x38;
    cVar3 = FUN_1498d7a00(lVar1);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(param_1 + 0x30);
      if (lVar4 != 0) {
        uVar2 = FUN_145b3a31a();
        plVar5 = (longlong *)FUN_144718840(lVar4,uVar2);
        if (plVar5 != (longlong *)0x0) {
          uVar2 = (**(code **)(*plVar5 + 0x38))
                            (plVar5,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44))
          ;
          FUN_14485c47a(lVar1,uVar2);
        }
      }
    }
    cVar3 = FUN_1498d7a00(lVar1);
    if (cVar3 == '\0') {
      uVar2 = FUN_14479d2ce(lVar1);
      FUN_14780c128(uVar2,*(undefined8 *)(param_1 + 0x28));
      return;
    }
  }
  return;
}



// FUNCTION 1498d7964 FUN_1498d7964 body=155 status=ok
// SIG undefined FUN_1498d7964(void)

void FUN_1498d7964(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar3 = FUN_14493c216(param_1 + 0x30,0);
  if (cVar3 == '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x38);
    cVar3 = FUN_1498d7a00(puVar1);
    if (cVar3 == '\0') {
      uVar2 = FUN_14479d2ce(puVar1);
      lVar4 = FUN_14780c03e(uVar2);
      if (lVar4 == *(longlong *)(param_1 + 0x28)) {
        uVar2 = FUN_14479d2ce(puVar1);
        FUN_14780c128(uVar2,0);
      }
      lVar4 = FUN_14479d2ce(param_1 + 0x30);
      if (lVar4 != 0) {
        uVar2 = FUN_145b3a31a();
        plVar5 = (longlong *)FUN_144718840(lVar4,uVar2);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x40))
                    (plVar5,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
        }
      }
      *puVar1 = 0;
    }
  }
  return;
}



// FUNCTION 1498d7a00 FUN_1498d7a00 body=16 status=ok
// SIG undefined FUN_1498d7a00(void)

byte FUN_1498d7a00(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 1498d7a22 FUN_1498d7a22 body=220 status=ok
// SIG undefined FUN_1498d7a22(void)

undefined8 * FUN_1498d7a22(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_3 + 0x108);
  FUN_1400021e4(&local_40,local_38);
  FUN_1475579bc(param_1,*(undefined8 *)(param_3 + 0x100),local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bef2e20;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar1 = *(longlong *)(param_2 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0xf8);
    }
  }
  param_1[7] = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)(param_2 + 0x100);
  if ((char)*(undefined8 *)(param_2 + 0x98) != '\x02') {
    *(int *)(param_1 + 8) = (int)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d7b00 FUN_1498d7b00 body=1056 status=ok
// SIG undefined FUN_1498d7b00(void)

void FUN_1498d7b00(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [40];
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    uVar4 = *(ulonglong *)(param_3 + 0x18);
    iVar10 = (int)uVar4;
    if ((*(byte *)(param_3 + 0x7c) & 0x14) == 0) {
      iVar6 = *(int *)(param_3 + 0x24);
      if (SBORROW4(0,iVar6)) {
        piVar7 = (int *)(param_3 + 4);
        if (*(int *)(param_3 + 0x20) == 0) {
          piVar7 = (int *)(param_3 + 0x10);
        }
        iVar6 = *piVar7;
      }
      lVar5 = ((longlong)uVar4 >> 0x20) * ((longlong)iVar6 - (longlong)*(int *)(param_1 + 0x40)) *
              10000000;
      iVar9 = (int)(((uint)(uVar4 >> 0x1f) & 1) + iVar10) >> 1;
      iVar6 = iVar9;
      if (lVar5 < 0) {
        iVar6 = 1 - iVar9;
      }
      uVar2 = *(undefined1 *)(param_1 + 0x44);
      local_128 = (undefined4)param_5[0x24];
      local_138 = param_5[0x22];
      lStack_130 = param_5[0x23];
      uStack_124 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
      uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
      uStack_11c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
      uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
      local_110 = (undefined4)param_5[0x27];
      uStack_10c = *(undefined4 *)((longlong)param_5 + 0x13c);
      uStack_108 = (undefined4)param_5[0x28];
      uStack_104 = *(undefined4 *)((longlong)param_5 + 0x144);
      local_100 = (undefined4)param_5[0x29];
      uStack_fc = *(undefined4 *)((longlong)param_5 + 0x14c);
      uStack_f8 = (undefined4)param_5[0x2a];
      uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x154);
      local_f0 = param_5[0x2b];
      FUN_144a3f8b4(&local_e8,param_5 + 0x2c);
      FUN_144b1f2a6(local_c8,param_5 + 0x30);
      local_a0 = (undefined5)param_5[0x35];
      uStack_9b = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
      uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
      local_90 = &PTR_FUN_14bef47f0;
      local_80 = (longlong)(iVar9 / iVar10) + (lVar5 + iVar6) / (longlong)iVar10;
      uStack_78 = uVar2;
    }
    else {
      if ((*(byte *)(param_3 + 0x7c) & 0x10) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (longlong)*(int *)(param_3 + 0x74) - (longlong)*(int *)(param_1 + 0x40);
      }
      lVar5 = ((longlong)uVar4 >> 0x20) * lVar5 * 10000000;
      if (lVar5 < 0) {
        iVar6 = 1 - ((int)(((uint)(uVar4 >> 0x1f) & 1) + iVar10) >> 1);
      }
      else {
        iVar6 = (int)(((uint)(uVar4 >> 0x1f) & 1) + iVar10) >> 1;
      }
      uVar2 = *(undefined1 *)(param_1 + 0x44);
      local_128 = (undefined4)param_5[0x24];
      local_138 = param_5[0x22];
      lStack_130 = param_5[0x23];
      uStack_124 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
      uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
      uStack_11c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
      uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
      local_110 = (undefined4)param_5[0x27];
      uStack_10c = *(undefined4 *)((longlong)param_5 + 0x13c);
      uStack_108 = (undefined4)param_5[0x28];
      uStack_104 = *(undefined4 *)((longlong)param_5 + 0x144);
      local_100 = (undefined4)param_5[0x29];
      uStack_fc = *(undefined4 *)((longlong)param_5 + 0x14c);
      uStack_f8 = (undefined4)param_5[0x2a];
      uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x154);
      local_f0 = param_5[0x2b];
      FUN_144a3f8b4(&local_e8,param_5 + 0x2c);
      FUN_144b1f2a6(local_c8,param_5 + 0x30);
      local_a0 = (undefined5)param_5[0x35];
      uStack_9b = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
      uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
      local_90 = &PTR_FUN_14bef47e0;
      local_80 = (lVar5 + iVar6) / (longlong)iVar10;
      uStack_78 = uVar2;
    }
    local_50 = local_50 | 3;
    iVar10 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar10 + 1U;
    uStack_88 = lVar3;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
      FUN_140ac5684(param_5,iVar10);
    }
    lVar5 = *param_5;
    lVar11 = (longlong)iVar10 * 0xf0;
    plVar1 = (longlong *)(lVar11 + lVar5);
    *(undefined4 *)(plVar1 + 4) = uStack_118;
    plVar1[2] = CONCAT44(uStack_124,local_128);
    plVar1[3] = CONCAT44(uStack_11c,uStack_120);
    *plVar1 = local_138;
    plVar1[1] = lStack_130;
    plVar1[9] = local_f0;
    *(undefined4 *)(plVar1 + 7) = local_100;
    *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_fc;
    *(undefined4 *)(plVar1 + 8) = uStack_f8;
    *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_f4;
    *(undefined4 *)(plVar1 + 5) = local_110;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_10c;
    *(undefined4 *)(plVar1 + 6) = uStack_108;
    *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_104;
    plVar1[10] = local_e8;
    *(undefined4 *)(plVar1 + 0xb) = local_e0;
    plVar1[0xc] = 0;
    plVar1[0xc] = local_d8;
    local_d8 = 0;
    *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_d0;
    *(undefined4 *)((longlong)plVar1 + 0x6c) = local_d0._4_4_;
    local_d0 = 0;
    FUN_144b1f34a(plVar1 + 0xe,local_c8);
    plVar1[0x13] = CONCAT35(uStack_9b,local_a0);
    *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_98,uStack_9b);
    lVar3 = lVar11 + lVar5;
    *(byte *)(lVar3 + 0xe8) = *(byte *)(lVar3 + 0xe8) & 0xfc | 2;
    FUN_144adeb48((undefined4 *)(lVar3 + 0xa8));
    if ((local_50 & 1) != 0) {
      lVar5 = lVar5 + lVar11;
      *(byte *)(lVar5 + 0xe8) = *(byte *)(lVar5 + 0xe8) | 1;
      *(byte *)(lVar5 + 0xe8) = *(byte *)(lVar5 + 0xe8) & 0xfd | local_50 & 2;
      *(undefined8 *)(lVar3 + 0xd8) = local_60;
      *(undefined8 *)(lVar3 + 0xe0) = uStack_58;
      *(undefined8 *)(lVar3 + 200) = local_70;
      *(undefined8 *)(lVar3 + 0xd0) = uStack_68;
      *(longlong *)(lVar3 + 0xb8) = local_80;
      *(ulonglong *)(lVar3 + 0xc0) = CONCAT71(uStack_77,uStack_78);
      *(undefined4 *)(lVar3 + 0xa8) = (undefined4)local_90;
      *(undefined4 *)(lVar3 + 0xac) = local_90._4_4_;
      *(undefined4 *)(lVar3 + 0xb0) = (undefined4)uStack_88;
      *(undefined4 *)(lVar3 + 0xb4) = uStack_88._4_4_;
      local_50 = local_50 & 0xfe;
    }
    if ((local_50 & 1) != 0) {
      ppuVar8 = (undefined **)&local_90;
      if ((local_50 & 2) == 0) {
        ppuVar8 = local_90;
      }
      local_50 = local_50 & 0xfe;
      (**(code **)*ppuVar8)(ppuVar8,0);
      if ((local_50 & 2) == 0) {
        FUN_1400020a8(local_90);
      }
    }
    FUN_144adeafa(&local_110);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d7f26 FUN_1498d7f26 body=75 status=ok
// SIG undefined FUN_1498d7f26(void)

bool FUN_1498d7f26(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1498d7f5f;
    }
  }
  lVar2 = 0;
LAB_1498d7f5f:
  lVar1 = FUN_145bb42a0();
  return lVar2 == lVar1;
}



// FUNCTION 1498d7f77 FUN_1498d7f77 body=174 status=ok
// SIG undefined FUN_1498d7f77(void)

undefined8 FUN_1498d7f77(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145bb42a0();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d8026 FUN_1498d8026 body=108 status=ok
// SIG undefined FUN_1498d8026(void)

longlong FUN_1498d8026(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1498d7a22(local_60,param_3,param_1 + -0x128);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 3;
  FUN_1498db71a(param_2,local_60);
  FUN_14179e8b8(local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d80b0 FUN_1498d80b0 body=163 status=ok
// SIG undefined FUN_1498d80b0(void)

void FUN_1498d80b0(longlong param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_145c40fca(param_1,1);
  if (cVar1 != '\0') {
    if ((char)param_3 != '\0') {
      uVar3 = *(ulonglong *)(param_1 + 0x98) & 0xff;
      iVar2 = 0;
      if (uVar3 != 2) {
        iVar2 = (*(int *)(param_1 + 0x108) -
                ((uint)((int)uVar3 != 1) + (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20))) +
                *param_2;
      }
      *(int *)(param_1 + 0x108) = iVar2;
    }
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    iStack_2c = param_2[3];
    FUN_147575be8(param_1,&local_38,param_3,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d8154 FUN_1498d8154 body=185 status=ok
// SIG undefined FUN_1498d8154(void)

longlong FUN_1498d8154(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x108);
  uVar4 = *(ulonglong *)(param_1 + 0x98) & 0xff;
  iVar6 = 0;
  if (uVar4 != 2) {
    iVar6 = ((iVar1 - (int)(*(ulonglong *)(param_1 + 0x98) >> 0x20)) - (uint)((int)uVar4 != 1)) +
            *param_2;
  }
  local_38 = *param_2;
  iStack_34 = param_2[1];
  iStack_30 = param_2[2];
  iStack_2c = param_2[3];
  lVar2 = FUN_1475759e6(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_1459fdac2();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (lVar5 = lVar2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
       != lVar3 + 0x30)) {
      lVar5 = 0;
    }
    *(int *)(lVar5 + 0x108) = iVar6;
  }
  *(int *)(param_1 + 0x108) = iVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d8226 FUN_1498d8226 body=92 status=ok
// SIG undefined FUN_1498d8226(void)

void FUN_1498d8226(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (longlong)*(int *)(param_1 + 0x108)) {
    FUN_144a808d5(local_20,(longlong)*(int *)(param_1 + 0x108),param_2,param_3);
    *(undefined4 *)(param_1 + 0x108) = local_20[0];
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d8284 FUN_1498d8284 body=335 status=ok
// SIG undefined FUN_1498d8284(void)

void FUN_1498d8284(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_54 [16];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_14179f016((undefined4 *)(param_1 + 0x248),local_54,param_3,&local_68);
  uVar4 = FUN_1447addd0(local_54,0x10);
  iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
  if (iVar5 != -1) {
    uVar6 = FUN_147552f3e(*param_4);
    uVar4 = FUN_1447addd0(local_54,0x10);
    iVar5 = FUN_1475a0174(param_2,uVar4 ^ local_44,local_54);
    lVar7 = 0;
    if (iVar5 != -1) {
      lVar7 = (longlong)iVar5 * 0x30 + *param_2;
    }
    FUN_14757416c(lVar7 + 0x14,&local_80,param_3,uVar6);
    *(undefined4 *)(param_1 + 0x248) = local_80;
    *(undefined4 *)(param_1 + 0x24c) = uStack_7c;
    *(undefined4 *)(param_1 + 0x250) = uStack_78;
    *(undefined4 *)(param_1 + 0x254) = uStack_74;
    *(undefined4 *)(param_1 + 600) = local_70;
    *(undefined4 *)(param_1 + 0x25c) = local_6c;
  }
  plVar3 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d83d4 FUN_1498d83d4 body=64 status=ok
// SIG undefined FUN_1498d83d4(void)

void FUN_1498d83d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_140c60952(param_2,iVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x250);
  puVar1 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
  *puVar1 = *(undefined8 *)(param_1 + 0x248);
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 1498d8414 FUN_1498d8414 body=368 status=ok
// SIG undefined FUN_1498d8414(void)

longlong FUN_1498d8414(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1475741e2(param_4,&local_70,param_2,param_1);
  if ((longlong)local_68 != 0) {
    puVar6 = local_70;
    do {
      local_78 = *puVar6;
      lVar2 = FUN_14479d2ce(&local_78);
      if (lVar2 != 0) {
        lVar3 = FUN_144a6c4d8();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_88 = 0;
          uStack_80 = 0;
          FUN_140b36638(lVar2,&local_88,0);
          lVar2 = local_88;
          lVar3 = (longlong)(int)uStack_80;
          if (lVar3 != 0) {
            lVar7 = 0;
            do {
              lVar1 = *(longlong *)(lVar2 + lVar7);
              if (lVar1 != 0) {
                uVar4 = FUN_145b3a31a();
                plVar5 = (longlong *)FUN_144718840(lVar1,uVar4);
                if (plVar5 != (longlong *)0x0) {
                  param_3 = (**(code **)(*plVar5 + 0x30))(plVar5,param_5);
                  break;
                }
              }
              lVar7 = lVar7 + 8;
            } while (lVar3 * 8 != lVar7);
          }
          if (local_88 != 0) {
            FUN_1400020a8(local_88);
          }
          if (param_3 != 0) break;
          param_3 = 0;
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != local_70 + local_68);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1498d858b FUN_1498d858b body=1124 status=ok
// SIG undefined FUN_1498d858b(void)

ulonglong FUN_1498d858b(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  void *pvVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  size_t sVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  uint local_f8 [2];
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined3 uStack_a8;
  undefined4 uStack_a5;
  undefined4 uStack_a1;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_147810ecc(param_1,&local_e0);
  lVar6 = CONCAT44(uStack_dc,local_e0);
  local_48 = *(char *)(lVar6 + 0xb8);
  if (local_48 == '\x01') {
    local_c8 = *(undefined8 *)(lVar6 + 0x38);
    uStack_c0 = *(undefined8 *)(lVar6 + 0x40);
    uStack_b8 = *(undefined4 *)(lVar6 + 0x48);
    uStack_b4 = *(undefined4 *)(lVar6 + 0x4c);
    uStack_b0 = *(undefined4 *)(lVar6 + 0x50);
    uStack_ac = *(undefined4 *)(lVar6 + 0x54);
    uStack_a5 = *(undefined4 *)(lVar6 + 0x5b);
    uStack_a1 = *(undefined4 *)(lVar6 + 0x5f);
    uStack_a8 = (undefined3)((uint)*(undefined4 *)(lVar6 + 0x57) >> 8);
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    FUN_147807ed0(&local_98,lVar6 + 0x68);
  }
  plVar7 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  uVar12 = 0x3e4ccccd00000000;
  if (local_48 == '\x01') {
    puVar10 = (ulonglong *)FUN_1498cc6df();
    uVar3 = *puVar10;
    iVar9 = FUN_144a788f7(uVar3 & 0xffffffff);
    if ((int)uStack_90 != local_64) {
      puVar11 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar11 = local_60;
      }
      iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & iVar9 + (int)(uVar3 >> 0x20)) * 4);
      if (iVar9 != -1) {
        uVar13 = 0;
        do {
          if (*(ulonglong *)(local_98 + (longlong)iVar9 * 0x28) == uVar3) {
            puVar10 = (ulonglong *)FUN_1498cc74c();
            uVar3 = *puVar10;
            iVar9 = FUN_144a788f7(uVar3 & 0xffffffff);
            if ((int)uStack_90 == local_64) goto LAB_1498d8615;
            puVar11 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar11 = local_60;
            }
            iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & iVar9 + (int)(uVar3 >> 0x20)) * 4
                            );
            if (iVar9 == -1) goto LAB_1498d8615;
            uVar13 = 0;
            goto LAB_1498d87b5;
          }
          iVar9 = *(int *)(local_98 + (longlong)iVar9 * 0x28 + 0x20);
        } while (iVar9 != -1);
        goto LAB_1498d8617;
      }
    }
  }
LAB_1498d8615:
  uVar13 = 0;
  goto LAB_1498d8617;
  while (iVar9 = *(int *)(local_98 + (longlong)iVar9 * 0x28 + 0x20), iVar9 != -1) {
LAB_1498d87b5:
    if (*(ulonglong *)(local_98 + (longlong)iVar9 * 0x28) == uVar3) {
      puVar10 = (ulonglong *)FUN_1498cc6df();
      uVar12 = *puVar10;
      iVar9 = FUN_144a788f7(uVar12 & 0xffffffff);
      if ((int)uStack_90 == local_64) goto LAB_1498d8821;
      puVar11 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar11 = local_60;
      }
      iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & iVar9 + (int)(uVar12 >> 0x20)) * 4);
      if (iVar9 == -1) goto LAB_1498d8821;
      goto LAB_1498d8995;
    }
  }
  goto LAB_1498d8617;
  while (iVar9 = (int)puVar10[4], iVar9 != -1) {
LAB_1498d8995:
    puVar10 = (ulonglong *)(local_98 + (longlong)iVar9 * 0x28);
    if (*puVar10 == uVar12) goto LAB_1498d8823;
  }
LAB_1498d8821:
  puVar10 = (ulonglong *)0x0;
LAB_1498d8823:
  local_e0 = (int)puVar10[1];
  local_d8 = (longlong *)0x0;
  local_d0 = (int)puVar10[3];
  sVar14 = (size_t)local_d0;
  pvVar4 = (void *)puVar10[2];
  if (sVar14 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1447a127e(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar4,sVar14);
  }
  puVar10 = (ulonglong *)FUN_1498cc74c();
  uVar12 = *puVar10;
  iVar9 = FUN_144a788f7(uVar12 & 0xffffffff);
  if ((int)uStack_90 != local_64) {
    puVar11 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    iVar9 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & iVar9 + (int)(uVar12 >> 0x20)) * 4);
    while (iVar9 != -1) {
      puVar10 = (ulonglong *)(local_98 + (longlong)iVar9 * 0x28);
      if (*puVar10 == uVar12) goto LAB_1498d8893;
      iVar9 = (int)puVar10[4];
    }
  }
  puVar10 = (ulonglong *)0x0;
LAB_1498d8893:
  local_f8[0] = (uint)puVar10[1];
  local_f0 = (void *)0x0;
  local_e8 = (int)puVar10[3];
  sVar14 = (size_t)local_e8;
  pvVar4 = (void *)puVar10[2];
  if (sVar14 == 0) {
    local_e4 = 0;
  }
  else {
    FUN_1447a127e(&local_f0,local_e8,0);
    memcpy(local_f0,pvVar4,sVar14);
  }
  fVar15 = 0.2;
  if ((local_e0 == 2) && ((local_f8[0] | 2) == 10)) {
    bVar8 = FUN_146918d3a(&local_e0);
    if (local_f8[0] == 10) {
      fVar15 = (float)FUN_146918f70(local_f8);
    }
    else {
      dVar5 = (double)FUN_146918e4a(local_f8);
      fVar15 = (float)dVar5;
    }
  }
  else {
    bVar8 = 0;
  }
  if (local_f0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar12 = (ulonglong)(uint)fVar15 << 0x20;
  uVar13 = (ulonglong)bVar8;
LAB_1498d8617:
  if (local_48 == '\x01') {
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_145a369d8(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar13 | uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d89f0 FUN_1498d89f0 body=512 status=ok
// SIG undefined FUN_1498d89f0(void)

undefined8 * FUN_1498d89f0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14bef4120;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = DAT_14cc31788;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  FUN_1406ed278(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3e4ccccd;
  param_1[0x31] = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(param_2);
  }
  lVar5 = *(longlong *)(param_2 + 0xf8);
  if (lVar5 != 0 && (~DAT_14c950c29 & 1) == 0) {
    FUN_14689c22e(lVar5);
  }
  bVar4 = DAT_14c950c29;
  param_1[5] = lVar5;
  param_1[8] = *(undefined8 *)(param_2 + 600);
  uVar1 = *(undefined4 *)(param_2 + 0x24c);
  uVar2 = *(undefined4 *)(param_2 + 0x250);
  uVar3 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x100);
  lVar5 = *(longlong *)(param_2 + 0x118);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 0x118);
    }
  }
  param_1[4] = lVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x104);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x108);
  param_1[0x30] = *(undefined8 *)(param_2 + 0x130);
  if (*(char *)(param_2 + 0x120) == '\x01') {
    lVar5 = *(longlong *)(param_2 + 0x128);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar5);
    }
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar5);
    }
  }
  else {
    lVar5 = 0;
  }
  param_1[0xb] = lVar5;
  if (*(char *)(param_2 + 0x120) == '\0') {
    lVar5 = *(longlong *)(param_2 + 0x110);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar5);
    }
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar5);
    }
  }
  else {
    lVar5 = 0;
  }
  param_1[10] = lVar5;
  if ((char)*(undefined8 *)(param_2 + 0x98) != '\x02') {
    *(int *)(param_1 + 0xc) = (int)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20);
  }
  if ((char)*(undefined8 *)(param_2 + 0xa0) != '\x02') {
    *(int *)((longlong)param_1 + 100) = (int)((ulonglong)*(undefined8 *)(param_2 + 0xa0) >> 0x20);
  }
  return param_1;
}



// FUNCTION 1498d8bf0 FUN_1498d8bf0 body=1518 status=ok
// SIG undefined FUN_1498d8bf0(void)

void FUN_1498d8bf0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined **ppuVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auStack_1a8 [32];
  undefined *local_188;
  undefined1 local_179;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined *local_168;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [40];
  undefined5 local_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar4 = *(undefined **)(param_1 + 0x28);
  if (((puVar4 != (undefined *)0x0) ||
      (((*(int *)(param_1 + 0x34) != 0 || *(int *)(param_1 + 0x30) != 0) ||
       *(int *)(param_1 + 0x38) != 0) || *(int *)(param_1 + 0x3c) != 0)) &&
     (bVar2 = *(byte *)(param_3 + 0x7c), (bVar2 & 0x28) == 0)) {
    if ((bVar2 & 0x14) == 0) {
      uVar10 = *(uint *)(param_3 + 0x24);
      uVar8 = uVar10;
      if (SBORROW4(0,uVar10)) {
        puVar12 = (uint *)(param_3 + 4);
        if (*(int *)(param_3 + 0x20) == 0) {
          puVar12 = (uint *)(param_3 + 0x10);
        }
        uVar8 = *puVar12;
      }
      if (*(int *)(param_1 + 100) <= (int)uVar8) goto LAB_1498d8c35;
      lVar5 = *(longlong *)(param_3 + 0x18);
      dVar7 = (double)(int)lVar5;
      fVar18 = *(float *)(param_3 + 0x14) - *(float *)(param_3 + 8);
      auVar20 = roundps(in_XMM3,ZEXT416((uint)fVar18),1);
      iVar13 = (int)((ulonglong)lVar5 >> 0x20);
      dVar21 = (double)iVar13;
      dVar22 = (double)((ulonglong)dVar21 & 0x8000000000000000);
      fVar18 = (fVar18 - auVar20._0_4_) + 0.5 + -0.5;
      if (0.99999994 <= fVar18) {
        fVar18 = 0.99999994;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      dVar19 = ((double)((longlong)
                         ((int)auVar20._0_4_ + (*(int *)(param_3 + 0x10) - *(int *)(param_3 + 4))) *
                        (lVar5 >> 0x20)) + (double)fVar18 * dVar21) / dVar7;
      dVar21 = ((double)iVar13 + dVar22) / dVar7;
      if (dVar21 <= dVar19) {
        dVar21 = dVar19;
      }
      if (SBORROW4(0,uVar10)) {
        puVar12 = (uint *)(param_3 + 4);
        if (*(int *)(param_3 + 0x20) == 0) {
          puVar12 = (uint *)(param_3 + 0x10);
        }
        uVar10 = *puVar12;
        uVar14 = (ulonglong)puVar12[1] << 0x20;
      }
      else {
        uVar14 = 0;
      }
      local_188 = (undefined *)
                  (longlong)
                  ((((double)((longlong)
                              (int)((uVar8 + *(int *)(param_1 + 0x6c)) - *(int *)(param_1 + 0x60)) *
                             (lVar5 >> 0x20)) + dVar22) / dVar7) * 10000000.0);
      uVar17 = FUN_140cf0978(*(undefined8 *)(param_1 + 0x188),uVar10 | uVar14);
      local_179 = 1;
      uVar10 = *(uint *)(param_3 + 0x24);
      if (SBORROW4(0,uVar10)) {
        puVar12 = (uint *)(param_3 + 4);
        if (*(int *)(param_3 + 0x20) == 0) {
          puVar12 = (uint *)(param_3 + 0x10);
        }
        uVar10 = *puVar12;
        uVar14 = (ulonglong)puVar12[1] << 0x20;
      }
      else {
        uVar14 = 0;
      }
      FUN_140aef73c(*(longlong *)(param_1 + 0x188) + 0x140,uVar10 | uVar14,&local_179);
      uVar9 = local_179;
      uVar6 = *(undefined8 *)(param_1 + 0x180);
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      local_178 = *(undefined **)(param_1 + 0x30);
      uStack_170 = *(undefined **)(param_1 + 0x38);
      local_168 = *(undefined **)(param_1 + 0x40);
      ppuVar11 = (undefined **)FUN_14001cc68(0x58,8);
      ppuVar11[1] = puVar4;
      ppuVar11[2] = local_178;
      ppuVar11[3] = uStack_170;
      ppuVar11[4] = local_168;
      *(undefined4 *)(ppuVar11 + 5) = uVar3;
      *(undefined8 *)((longlong)ppuVar11 + 0x2c) = uVar6;
      *ppuVar11 = (undefined *)&PTR_FUN_14bef4b28;
      ppuVar11[7] = local_188;
      ppuVar11[8] = (undefined *)(longlong)(dVar21 * 10000000.0);
      *(undefined4 *)(ppuVar11 + 9) = 0x3f800000;
      *(undefined4 *)((longlong)ppuVar11 + 0x4c) = uVar17;
      *(undefined1 *)(ppuVar11 + 10) = uVar9;
      local_148 = (undefined4)param_5[0x24];
      local_158 = param_5[0x22];
      lStack_150 = param_5[0x23];
      uStack_144 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
      uStack_140 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
      uStack_13c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
      uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
      local_130 = (undefined4)param_5[0x27];
      uStack_12c = *(undefined4 *)((longlong)param_5 + 0x13c);
      uStack_128 = (undefined4)param_5[0x28];
      uStack_124 = *(undefined4 *)((longlong)param_5 + 0x144);
      local_120 = (undefined4)param_5[0x29];
      uStack_11c = *(undefined4 *)((longlong)param_5 + 0x14c);
      uStack_118 = (undefined4)param_5[0x2a];
      uStack_114 = *(undefined4 *)((longlong)param_5 + 0x154);
      local_110 = param_5[0x2b];
      FUN_144a3f8b4(&local_108,param_5 + 0x2c);
      FUN_144b1f2a6(local_e8,param_5 + 0x30);
      local_c0 = (undefined5)param_5[0x35];
      uStack_bb = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
      uStack_b8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
      local_70 = (local_70 & 0xfc) + 1;
      local_b0 = ppuVar11;
    }
    else {
      lVar5 = *(longlong *)(param_3 + 0x18);
      iVar13 = *(int *)(param_1 + 0x6c);
      if ((bVar2 & 0x10) != 0) {
        iVar13 = (iVar13 - *(int *)(param_1 + 0x60)) + *(int *)(param_3 + 0x74);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x180);
      uVar17 = *(undefined4 *)(param_1 + 0x48);
      local_168 = *(undefined **)(param_1 + 0x40);
      local_178 = *(undefined **)(param_1 + 0x30);
      uStack_170 = *(undefined **)(param_1 + 0x38);
      local_148 = (undefined4)param_5[0x24];
      local_158 = param_5[0x22];
      lStack_150 = param_5[0x23];
      uStack_144 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
      uStack_140 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
      uStack_13c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
      uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
      local_130 = (undefined4)param_5[0x27];
      uStack_12c = *(undefined4 *)((longlong)param_5 + 0x13c);
      uStack_128 = (undefined4)param_5[0x28];
      uStack_124 = *(undefined4 *)((longlong)param_5 + 0x144);
      local_120 = (undefined4)param_5[0x29];
      uStack_11c = *(undefined4 *)((longlong)param_5 + 0x14c);
      uStack_118 = (undefined4)param_5[0x2a];
      uStack_114 = *(undefined4 *)((longlong)param_5 + 0x154);
      local_110 = param_5[0x2b];
      FUN_144a3f8b4(&local_108,param_5 + 0x2c);
      FUN_144b1f2a6(local_e8,param_5 + 0x30);
      local_c0 = (undefined5)param_5[0x35];
      uStack_bb = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
      uStack_b8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
      local_70 = local_70 | 3;
      local_b0 = &PTR_FUN_14bef4b00;
      local_90 = local_168;
      local_a0 = (undefined4)local_178;
      uStack_9c = local_178._4_4_;
      uStack_98 = (undefined4)uStack_170;
      uStack_94 = uStack_170._4_4_;
      uStack_84 = (undefined4)uVar6;
      uStack_80 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_a8 = puVar4;
      uStack_88 = uVar17;
      lStack_78 = (longlong)
                  ((((double)((lVar5 >> 0x20) * (longlong)iVar13) +
                    (double)((ulonglong)(double)(int)((ulonglong)lVar5 >> 0x20) & 0x8000000000000000
                            )) / (double)(int)lVar5) * 10000000.0);
    }
    iVar13 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar13 + 1U) {
      FUN_140ac5684(param_5,iVar13);
    }
    lVar16 = *param_5;
    lVar15 = (longlong)iVar13 * 0xf0;
    plVar1 = (longlong *)(lVar15 + lVar16);
    *(undefined4 *)(plVar1 + 4) = uStack_138;
    plVar1[2] = CONCAT44(uStack_144,local_148);
    plVar1[3] = CONCAT44(uStack_13c,uStack_140);
    *plVar1 = local_158;
    plVar1[1] = lStack_150;
    plVar1[9] = local_110;
    *(undefined4 *)(plVar1 + 7) = local_120;
    *(undefined4 *)((longlong)plVar1 + 0x3c) = uStack_11c;
    *(undefined4 *)(plVar1 + 8) = uStack_118;
    *(undefined4 *)((longlong)plVar1 + 0x44) = uStack_114;
    *(undefined4 *)(plVar1 + 5) = local_130;
    *(undefined4 *)((longlong)plVar1 + 0x2c) = uStack_12c;
    *(undefined4 *)(plVar1 + 6) = uStack_128;
    *(undefined4 *)((longlong)plVar1 + 0x34) = uStack_124;
    plVar1[10] = local_108;
    *(undefined4 *)(plVar1 + 0xb) = local_100;
    plVar1[0xc] = 0;
    plVar1[0xc] = local_f8;
    local_f8 = 0;
    *(undefined4 *)(plVar1 + 0xd) = (undefined4)local_f0;
    *(undefined4 *)((longlong)plVar1 + 0x6c) = local_f0._4_4_;
    local_f0 = 0;
    FUN_144b1f34a(plVar1 + 0xe,local_e8);
    plVar1[0x13] = CONCAT35(uStack_bb,local_c0);
    *(ulonglong *)((longlong)plVar1 + 0x9d) = CONCAT53(uStack_b8,uStack_bb);
    lVar5 = lVar15 + lVar16;
    *(byte *)(lVar5 + 0xe8) = *(byte *)(lVar5 + 0xe8) & 0xfc | 2;
    FUN_144adeb48((undefined4 *)(lVar5 + 0xa8));
    if ((local_70 & 1) != 0) {
      lVar16 = lVar16 + lVar15;
      *(byte *)(lVar16 + 0xe8) = *(byte *)(lVar16 + 0xe8) | 1;
      *(byte *)(lVar16 + 0xe8) = *(byte *)(lVar16 + 0xe8) & 0xfd | local_70 & 2;
      *(ulonglong *)(lVar5 + 0xd8) = CONCAT44(uStack_7c,uStack_80);
      *(longlong *)(lVar5 + 0xe0) = lStack_78;
      *(undefined **)(lVar5 + 200) = local_90;
      *(ulonglong *)(lVar5 + 0xd0) = CONCAT44(uStack_84,uStack_88);
      *(ulonglong *)(lVar5 + 0xb8) = CONCAT44(uStack_9c,local_a0);
      *(ulonglong *)(lVar5 + 0xc0) = CONCAT44(uStack_94,uStack_98);
      *(undefined4 *)(lVar5 + 0xa8) = (undefined4)local_b0;
      *(undefined4 *)(lVar5 + 0xac) = local_b0._4_4_;
      *(undefined4 *)(lVar5 + 0xb0) = (undefined4)uStack_a8;
      *(undefined4 *)(lVar5 + 0xb4) = uStack_a8._4_4_;
      local_70 = local_70 & 0xfe;
    }
    if ((local_70 & 1) != 0) {
      ppuVar11 = (undefined **)&local_b0;
      if ((local_70 & 2) == 0) {
        ppuVar11 = local_b0;
      }
      local_70 = local_70 & 0xfe;
      (**(code **)*ppuVar11)(ppuVar11,0);
      if ((local_70 & 2) == 0) {
        FUN_1400020a8(local_b0);
      }
    }
    FUN_144adeafa(&local_130);
  }
LAB_1498d8c35:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d91e0 FUN_1498d91e0 body=57 status=ok
// SIG undefined FUN_1498d91e0(void)

void FUN_1498d91e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc31810 == 0) {
    uVar1 = FUN_14596ef71();
    DAT_14cc31810 = FUN_140002ddd(FUN_146771053,uVar1,L"MovieSceneMediaSectionTemplate");
  }
  return;
}



// FUNCTION 1498d921a FUN_1498d921a body=614 status=ok
// SIG undefined FUN_1498d921a(void)

void FUN_1498d921a(longlong param_1,int *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1446996a6(param_4,param_4 + 0x24);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x188);
    uVar8 = 0;
    uVar9 = 0;
    if (lVar1 != 0) {
      uVar8 = *(undefined4 *)(lVar1 + 0xb8);
      uVar9 = *(undefined4 *)(lVar1 + 0x138);
    }
    local_78 = *(longlong *)(param_1 + 0x58);
    local_50 = 0;
    local_98 = uVar9;
    if ((local_78 == 0) &&
       (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0)) {
      FUN_1446ddc76(&local_58,"MediaAssets",1);
      uVar2 = FUN_144a52528();
      plVar3 = (longlong *)FUN_1405f3750(uVar2,local_58,0);
      if (plVar3 != (longlong *)0x0) {
        local_88 = uVar9;
        local_84 = uVar8;
        local_80 = plVar3;
        FUN_1401abe9c(param_5,&local_68,param_2,param_2 + 4);
        uVar8 = local_84;
        local_98 = local_88;
        if ((longlong)local_60 != 0) {
          lVar1 = 0;
          do {
            local_70 = *(undefined8 *)(local_68 + lVar1);
            lVar4 = FUN_14479d2ce(&local_70);
            if (lVar4 != 0) {
              (**(code **)(*local_80 + 0x50))(local_80,lVar4,&local_50);
              uVar8 = local_84;
              local_98 = local_88;
              break;
            }
            lVar1 = lVar1 + 8;
            uVar8 = local_84;
            local_98 = local_88;
          } while ((longlong)local_60 * 8 != lVar1);
        }
      }
    }
    lVar1 = FUN_1446996f0(param_4,param_4 + 0x24);
    FUN_1498d7586(lVar1,local_78,local_50,uVar8);
    if (lVar1 == 0) goto LAB_1498d9269;
  }
  lVar4 = *(longlong *)(lVar1 + 0x28);
  if (lVar4 == 0) goto LAB_1498d9269;
  if ((*(byte *)(param_3 + 0x7c) & 0x3c) == 0) {
    iVar5 = *(int *)(param_3 + 0x24);
    if (SBORROW4(0,iVar5)) {
      piVar6 = (int *)(param_3 + 4);
      if (*(int *)(param_3 + 0x20) == 0) {
        piVar6 = (int *)(param_3 + 0x10);
      }
      iVar5 = *piVar6;
    }
    if (*(int *)(param_1 + 100) <= iVar5) goto LAB_1498d93de;
    FUN_1498d78c8(lVar1);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_147812726(*(longlong *)(param_1 + 0x20),lVar4);
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    lVar7 = lVar4;
    if (lVar1 != 0) goto LAB_1498d941d;
  }
  else {
LAB_1498d93de:
    FUN_1498d7964(lVar1);
    if ((*(longlong *)(param_1 + 0x20) != 0) && (lVar1 = FUN_14781220c(), lVar1 == lVar4)) {
      FUN_147812726(*(undefined8 *)(param_1 + 0x20),0);
    }
    if ((*(longlong *)(param_1 + 0x50) != 0) && (lVar1 = FUN_14780c03e(), lVar1 == lVar4)) {
      lVar1 = *(longlong *)(param_1 + 0x50);
      lVar7 = 0;
LAB_1498d941d:
      FUN_14780c128(lVar1,lVar7);
    }
  }
  FUN_14336d8d6(lVar4,*(undefined1 *)(param_1 + 0x68));
LAB_1498d9269:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d9488 FUN_1498d9488 body=186 status=ok
// SIG undefined FUN_1498d9488(void)

void FUN_1498d9488(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = FUN_1446996a6(param_2,param_2 + 0x24);
  if ((lVar1 != 0) && (lVar3 = *(longlong *)(lVar1 + 0x28), lVar3 != 0)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      lVar2 = FUN_14781220c();
      if (lVar2 == lVar3) {
        FUN_147812726(*(undefined8 *)(param_1 + 0x20),0);
      }
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar2 = FUN_14780c03e();
      if (lVar2 == lVar3) {
        FUN_14780c128(*(undefined8 *)(param_1 + 0x50),0);
      }
    }
    lVar3 = FUN_14479d2ce(lVar1 + 0x30);
    if (lVar3 != 0) {
      uVar4 = FUN_145b3a31a();
      plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x50))
                  (plVar5,*(undefined4 *)(lVar1 + 0x40),*(undefined4 *)(lVar1 + 0x44),0);
      }
    }
    FUN_1498d7964(lVar1);
    return;
  }
  return;
}



// FUNCTION 1498d9546 FUN_1498d9546 body=62 status=ok
// SIG undefined FUN_1498d9546(void)

longlong FUN_1498d9546(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1498d9584(param_1,param_3,param_4);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  *(longlong *)(lVar1 + 0xf8) = param_2;
  return lVar1;
}



// FUNCTION 1498d9584 FUN_1498d9584 body=251 status=ok
// SIG undefined FUN_1498d9584(void)

longlong * FUN_1498d9584(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  uVar3 = FUN_14073751e();
  lVar4 = FUN_144a78ede(param_1,uVar3);
  dVar6 = (double)(int)*(undefined8 *)(lVar4 + 0x118) /
          (double)(int)((ulonglong)*(undefined8 *)(lVar4 + 0x118) >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar6;
  auVar8 = roundpd(auVar8,auVar8,1);
  dVar7 = auVar8._0_8_;
  dVar6 = dVar6 - dVar7;
  if (2147483647.0 <= dVar7) {
    dVar7 = 2147483647.0;
  }
  if (dVar7 <= -2147483648.0) {
    dVar7 = -2147483648.0;
  }
  plVar5 = (longlong *)FUN_1498d96bc(param_1);
  plVar1 = (longlong *)(param_1 + 0x100);
  (**(code **)(*plVar5 + 0x308))(plVar5,plVar1,param_2,(int)dVar6 + (int)dVar7,param_3);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  iVar2 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar2 + 1U) {
    FUN_14759143a(plVar1,iVar2);
  }
  *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar5;
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar5);
  }
  return plVar5;
}



// FUNCTION 1498d9680 FUN_1498d9680 body=60 status=ok
// SIG undefined FUN_1498d9680(void)

void FUN_1498d9680(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1498d9584(param_1,param_5,param_6);
  uVar1 = param_3[1];
  *(undefined8 *)(lVar2 + 0x248) = *param_3;
  *(undefined8 *)(lVar2 + 0x250) = uVar1;
  *(undefined8 *)(lVar2 + 600) = param_3[2];
  *(undefined4 *)(lVar2 + 0x100) = param_4;
  return;
}



// FUNCTION 1498d96bc FUN_1498d96bc body=174 status=ok
// SIG undefined FUN_1498d96bc(void)

undefined8 FUN_1498d96bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459fdac2();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d976c FUN_1498d976c body=131 status=ok
// SIG undefined FUN_1498d976c(void)

void FUN_1498d976c(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0x100),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 1498d97f0 FUN_1498d97f0 body=75 status=ok
// SIG undefined FUN_1498d97f0(void)

bool FUN_1498d97f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1498d9829;
    }
  }
  lVar2 = 0;
LAB_1498d9829:
  lVar1 = FUN_1459fdac2();
  return lVar2 == lVar1;
}



// FUNCTION 1498d988e FUN_1498d988e body=106 status=ok
// SIG undefined FUN_1498d988e(void)

void FUN_1498d988e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0x100);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d98fa FUN_1498d98fa body=95 status=ok
// SIG undefined FUN_1498d98fa(void)

void FUN_1498d98fa(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0x100) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x108);
  }
  *(int *)(param_1 + 0x108) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0x100);
  return;
}



// FUNCTION 1498d995a FUN_1498d995a body=125 status=ok
// SIG undefined FUN_1498d995a(void)

longlong FUN_1498d995a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8 [14];
  undefined1 local_138 [288];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1498d89f0(local_1a8,param_3);
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) & 0xfe;
  FUN_1498db768(param_2,local_1a8);
  local_1a8[0] = &PTR_FUN_14bef4120;
  FUN_1404dbc70(local_138);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d99d8 FUN_1498d99d8 body=38 status=ok
// SIG undefined FUN_1498d99d8(void)

undefined8 FUN_1498d99d8(undefined8 param_1,int param_2)

{
  FUN_1498d74d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d99fe FUN_1498d99fe body=38 status=ok
// SIG undefined FUN_1498d99fe(void)

undefined8 FUN_1498d99fe(undefined8 param_1,int param_2)

{
  FUN_14179e8b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d9a2a FUN_1498d9a2a body=57 status=ok
// SIG undefined FUN_1498d9a2a(void)

void FUN_1498d9a2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc317b0 == 0) {
    uVar1 = FUN_14596ef71();
    DAT_14cc317b0 =
         FUN_140002ddd(FUN_146770e86,uVar1,L"MovieSceneMediaPlayerPropertySectionTemplate");
  }
  return;
}



// FUNCTION 1498d9a64 FUN_1498d9a64 body=48 status=ok
// SIG undefined FUN_1498d9a64(void)

longlong FUN_1498d9a64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x128;
  FUN_140885ffc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d9a9c FUN_1498d9a9c body=52 status=ok
// SIG undefined FUN_1498d9a9c(void)

undefined8 * FUN_1498d9a9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bef4120;
  FUN_1404dbc70(param_1 + 0xe);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d9ae8 FUN_1498d9ae8 body=36 status=ok
// SIG undefined FUN_1498d9ae8(void)

void FUN_1498d9ae8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x350))();
  return;
}



// FUNCTION 1498d9b20 FUN_1498d9b20 body=51 status=ok
// SIG undefined FUN_1498d9b20(void)

void FUN_1498d9b20(undefined8 param_1,undefined8 *param_2)

{
  FUN_1432db5b8(param_2);
  *param_2 = &PTR_FUN_14bef2e20;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 0;
  return;
}



// FUNCTION 1498d9b54 FUN_1498d9b54 body=51 status=ok
// SIG undefined FUN_1498d9b54(void)

void FUN_1498d9b54(undefined8 param_1,undefined8 *param_2)

{
  FUN_1432db5b8(param_2);
  *param_2 = &PTR_FUN_14bef2e20;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 0;
  return;
}



// FUNCTION 1498d9bac FUN_1498d9bac body=54 status=ok
// SIG undefined FUN_1498d9bac(void)

undefined1 FUN_1498d9bac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498d9cbe(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1498d9c0a FUN_1498d9c0a body=59 status=ok
// SIG undefined FUN_1498d9c0a(void)

undefined8 FUN_1498d9c0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498d9c50 FUN_1498d9c50 body=32 status=ok
// SIG undefined FUN_1498d9c50(void)

void FUN_1498d9c50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14179e8b8(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1498d9cbe FUN_1498d9cbe body=110 status=ok
// SIG undefined FUN_1498d9cbe(void)

longlong FUN_1498d9cbe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  return param_1;
}



// FUNCTION 1498d9d2e FUN_1498d9d2e body=29 status=ok
// SIG undefined FUN_1498d9d2e(void)

undefined8 FUN_1498d9d2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498d9d4c FUN_1498d9d4c body=641 status=ok
// SIG undefined FUN_1498d9d4c(void)

void FUN_1498d9d4c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  int local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  char local_c6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = FUN_1432f41ce(param_4,param_4 + 0x24);
  FUN_1401abe9c(param_5,&local_100,param_3,param_3 + 0x10);
  if ((longlong)local_f8 != 0) {
    auVar7 = roundpd(ZEXT816(0x41296e6bb761e000),ZEXT816(0x41296e6bb761e000),1);
    local_118 = (longlong)auVar7._0_8_;
    local_120 = (longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      local_108 = *(undefined8 *)(local_100 + lVar6);
      lVar3 = FUN_14479d2ce(&local_108);
      if ((lVar3 != 0) && (lVar3 = FUN_1498d9fce(*(undefined8 *)(lVar2 + 8),lVar3), lVar3 != 0)) {
        iVar1 = *(int *)(lVar3 + 0xe8);
        if (iVar1 == -1) {
          lVar5 = *(longlong *)(param_1 + 8);
        }
        else {
          FUN_147810652(lVar3);
          lVar4 = FUN_1478110dc(*(undefined8 *)(lVar3 + 0xe0),iVar1);
          lVar5 = *(longlong *)(param_1 + 8);
          if (lVar4 == lVar5) {
            FUN_14780d4f2(lVar3,&local_f0);
            if ((CONCAT44(uStack_ec,local_f0) != 0) &&
               (*(longlong *)(param_1 + 0x10) < CONCAT44(uStack_ec,local_f0))) {
              FUN_14780dd44(lVar3,&local_110);
              lVar5 = -(local_110 - *local_120);
              if (lVar5 < 0) {
                lVar5 = local_110 - *local_120;
              }
              if (local_118 <= lVar5) {
                FUN_14336e718(lVar3,local_120);
              }
              FUN_14336e9c4(lVar3,0);
            }
            goto LAB_1498d9e12;
          }
        }
        local_f0 = 0;
        uStack_ec = 0xffffffff;
        uStack_e8 = 0xffffffff;
        uStack_e4 = 0xffffffff;
        uStack_e0 = 0xffffffff;
        local_dc = 0xffffffff;
        local_d4 = 1;
        local_c8 = 1;
        local_a0 = 0;
        local_98 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_94 = 0xffffffff00000080;
        local_8c = 0;
        local_80 = 0;
        local_78 = 0;
        local_d0 = *(undefined8 *)(param_1 + 0x10);
        local_c7 = 2;
        local_c6 = '\x02' - *(char *)(param_1 + 0x18);
        thunk_FUN_14336e9d0(lVar3,lVar5,&local_f0);
        local_78 = 0;
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        FUN_145a369d8(&local_c0);
      }
LAB_1498d9e12:
      lVar6 = lVar6 + 8;
    } while ((longlong)local_f8 * 8 != lVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498d9fce FUN_1498d9fce body=113 status=ok
// SIG undefined FUN_1498d9fce(void)

undefined8 FUN_1498d9fce(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406f9c46(param_1,local_50,param_2);
  lVar1 = FUN_1406f977c(local_50);
  if ((lVar1 == 0) ||
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_28), puVar2 == (undefined8 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498da040 FUN_1498da040 body=29 status=ok
// SIG undefined FUN_1498da040(void)

undefined8 FUN_1498da040(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498da05e FUN_1498da05e body=1070 status=ok
// SIG undefined FUN_1498da05e(void)

void FUN_1498da05e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_178 [40];
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  undefined **local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined1 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  char local_d7;
  char local_d6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  longlong local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_130 = param_4 + 0x24;
  local_148 = param_1;
  local_138 = param_2;
  local_128 = FUN_1432f41ce(param_4);
  FUN_1401abe9c(param_5,&local_110,param_3,param_3 + 0x10);
  if ((longlong)local_108 != 0) {
    auVar7 = roundpd(ZEXT816(0x41296e6bb761e000),ZEXT816(0x41296e6bb761e000),1);
    local_140 = (longlong)auVar7._0_8_;
    local_150 = (longlong *)(local_148 + 0x10);
    lVar5 = 0;
    do {
      local_118 = *(undefined8 *)(local_110 + lVar5);
      lVar3 = FUN_14479d2ce(&local_118);
      if ((lVar3 != 0) && (lVar3 = FUN_1498d9fce(*(undefined8 *)(local_128 + 8),lVar3), lVar3 != 0))
      {
        FUN_140388fde(&local_100,param_5 + 0x110,local_130,1);
        local_120 = &PTR_FUN_14bef4800;
        lVar4 = DAT_14cc31838;
        if (DAT_14cc31838 == 0) {
          lVar4 = FUN_14570767c(&DAT_14cc31838,0);
        }
        FUN_140273752(param_5 + 0x110,lVar3,lVar4,&local_120);
        FUN_1432dab96(&local_100);
        iVar1 = *(int *)(lVar3 + 0xe8);
        if ((iVar1 == -1) || (FUN_147810652(lVar3), *(longlong *)(lVar3 + 0xe0) == 0)) {
LAB_1498da2c3:
          local_100 = 0;
          uStack_fc = 0xffffffff;
          uStack_f8 = 0xffffffff;
          uStack_f4 = 0xffffffff;
          uStack_f0 = 0xffffffff;
          local_ec = 0xffffffff;
          local_e4 = 1;
          local_d8 = 1;
          local_b0 = 0;
          local_a8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_a4 = 0xffffffff00000080;
          local_9c = 0;
          local_90 = 0;
          local_88 = 0;
          local_e0 = *(undefined8 *)(local_148 + 0x10);
          local_d7 = '\x02' - (*(int *)(local_138 + 0x70) == 1);
          local_d6 = '\x02' - *(char *)(local_148 + 0x18);
          thunk_FUN_14336e9d0(lVar3,*(undefined8 *)(local_148 + 8),&local_100);
          local_88 = 0;
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          FUN_145a369d8(&local_d0);
        }
        else {
          FUN_147810652(lVar3);
          lVar4 = FUN_1478110dc(*(undefined8 *)(lVar3 + 0xe0),iVar1);
          if (lVar4 != *(longlong *)(local_148 + 8)) goto LAB_1498da2c3;
        }
        FUN_14780d4f2(lVar3,&local_100);
        lVar4 = CONCAT44(uStack_fc,local_100);
        if (lVar4 != 0) {
          if (*(char *)(local_148 + 0x18) == '\x01') {
            *local_150 = *(longlong *)(local_148 + 0x10) % lVar4;
LAB_1498da262:
            FUN_14780dd44(lVar3,&local_120);
            if (*(int *)(local_138 + 0x70) == 1) {
              cVar2 = FUN_14780e98a(lVar3);
              if (cVar2 == '\0') {
                lVar4 = -((longlong)local_120 - *local_150);
                if (lVar4 < 0) {
                  lVar4 = (longlong)local_120 - *local_150;
                }
                if (local_140 <= lVar4) {
                  FUN_14336e718(lVar3,local_150);
                }
                fVar6 = (float)FUN_14780da82(lVar3);
                if ((fVar6 != 1.0) || (NAN(fVar6))) {
                  FUN_14336e9c4(lVar3,0x3f800000);
                }
              }
              else if ((*(byte *)(local_138 + 0x7c) & 1) != 0) {
                lVar4 = -((longlong)local_120 - *local_150);
                if (lVar4 < 0) {
                  lVar4 = (longlong)local_120 - *local_150;
                }
                if (local_140 <= lVar4) {
                  FUN_14336e718(lVar3,local_150);
                }
              }
              goto LAB_1498da15b;
            }
            lVar4 = -((longlong)local_120 - *local_150);
            if (lVar4 < 0) {
              lVar4 = (longlong)local_120 - *local_150;
            }
            if (local_140 <= lVar4) {
              FUN_14336e718(lVar3,local_150);
            }
          }
          else if (*(longlong *)(local_148 + 0x10) <= lVar4) goto LAB_1498da262;
          FUN_14336e524(lVar3);
        }
      }
LAB_1498da15b:
      lVar5 = lVar5 + 8;
    } while ((longlong)local_108 * 8 != lVar5);
  }
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498da48e FUN_1498da48e body=29 status=ok
// SIG undefined FUN_1498da48e(void)

undefined8 FUN_1498da48e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498da4be FUN_1498da4be body=29 status=ok
// SIG undefined FUN_1498da4be(void)

undefined8 FUN_1498da4be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498da4e4 FUN_1498da4e4 body=83 status=ok
// SIG undefined FUN_1498da4e4(void)

void FUN_1498da4e4(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 4) = DAT_14cc31788;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined8 *)((longlong)param_2 + 0x39) = 0;
  *(undefined8 *)((longlong)param_2 + 0x41) = 0;
  FUN_1406ed278(param_2 + 10);
  *(undefined1 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0x3e4ccccd;
  return;
}



// FUNCTION 1498da538 FUN_1498da538 body=83 status=ok
// SIG undefined FUN_1498da538(void)

void FUN_1498da538(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 4) = DAT_14cc31788;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined8 *)((longlong)param_2 + 0x39) = 0;
  *(undefined8 *)((longlong)param_2 + 0x41) = 0;
  FUN_1406ed278(param_2 + 10);
  *(undefined1 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0x3e4ccccd;
  return;
}



// FUNCTION 1498da5ac FUN_1498da5ac body=63 status=ok
// SIG undefined FUN_1498da5ac(void)

undefined1 FUN_1498da5ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498da6d6(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 1498da614 FUN_1498da614 body=59 status=ok
// SIG undefined FUN_1498da614(void)

undefined8 FUN_1498da614(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498da660 FUN_1498da660 body=39 status=ok
// SIG undefined FUN_1498da660(void)

void FUN_1498da660(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_1404dbc70(param_2 + 0x50);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1498da6d6 FUN_1498da6d6 body=214 status=ok
// SIG undefined FUN_1498da6d6(void)

longlong * FUN_1498da6d6(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar8 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *param_2;
    }
  }
  bVar7 = DAT_14c950c29;
  *param_1 = lVar8;
  lVar8 = param_2[1];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[1];
      bVar7 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar8;
  lVar8 = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar4 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar5 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar6 = param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 4) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(int *)(param_1 + 5) = (int)lVar6;
  *(int *)(param_1 + 2) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  lVar8 = param_2[6];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[6];
      bVar7 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar8;
  lVar8 = param_2[7];
  if ((bVar7 & 1) != 0) {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = param_2[7];
    }
  }
  param_1[7] = lVar8;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar8 = param_2[9];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(int *)(param_1 + 9) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar2;
  FUN_14753be88(param_1 + 10,param_2 + 10);
  param_1[0x2c] = param_2[0x2c];
  return param_1;
}



// FUNCTION 1498da7e2 FUN_1498da7e2 body=63 status=ok
// SIG undefined FUN_1498da7e2(void)

undefined1 FUN_1498da7e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1498da98e(param_2,param_3);
    param_3 = param_3 + 400;
    param_2 = param_2 + 400;
  }
  return 1;
}



// FUNCTION 1498da84a FUN_1498da84a body=59 status=ok
// SIG undefined FUN_1498da84a(void)

undefined8 FUN_1498da84a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498da896 FUN_1498da896 body=49 status=ok
// SIG undefined FUN_1498da896(void)

void FUN_1498da896(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x32) == '\x01') {
    *param_2 = &PTR_FUN_14bef4120;
    FUN_1404dbc70(param_2 + 0xe);
    *(undefined1 *)(param_2 + 0x32) = 0;
  }
  return;
}



// FUNCTION 1498da916 FUN_1498da916 body=120 status=ok
// SIG undefined FUN_1498da916(void)

undefined8 * FUN_1498da916(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14bef4120;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = DAT_14cc31788;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  FUN_1406ed278(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3e4ccccd;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 1498da98e FUN_1498da98e body=99 status=ok
// SIG undefined FUN_1498da98e(void)

longlong FUN_1498da98e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1498da6d6(param_1 + 0x20,param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x188);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = *(longlong *)(param_2 + 0x188);
    }
  }
  *(longlong *)(param_1 + 0x188) = lVar1;
  return param_1;
}



// FUNCTION 1498da9f2 FUN_1498da9f2 body=29 status=ok
// SIG undefined FUN_1498da9f2(void)

undefined8 FUN_1498da9f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498daa10 FUN_1498daa10 body=630 status=ok
// SIG undefined FUN_1498daa10(void)

void FUN_1498daa10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_d8;
  undefined **local_d0;
  undefined1 local_c4 [4];
  uint local_c0 [10];
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_90 [2] [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = FUN_1446996a6(param_4,param_4 + 0x24);
  lVar1 = *(longlong *)(lVar2 + 0x28);
  lVar3 = FUN_14479d2ce(lVar2 + 0x30);
  if (lVar3 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    uVar4 = FUN_145b3a31a();
    plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
  }
  local_f8 = *(undefined4 *)(param_1 + 0x28);
  lVar3 = FUN_1498d8414(param_5,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_1 + 8),
                        param_1 + 0x10);
  if ((lVar1 != 0) && (lVar3 != 0)) {
    lVar6 = FUN_14780e192(lVar1);
    if (*(int *)(lVar6 + 8) < 2) {
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0x38);
      local_c0[0] = 0;
      local_c0[1] = 0xffffffff;
      local_c0[2] = 0xffffffff;
      local_c0[3] = 0xffffffff;
      local_c0[4] = 0xffffffff;
      local_c0[5] = 0xffffffff;
      local_c0[6] = 0;
      local_70 = 0;
      local_68 = 0;
      local_90[0] = (undefined1  [16])0x0;
      local_64 = 0xffffffff00000080;
      local_5c = 0;
      local_50 = 0;
      local_48 = 0;
      local_c0[8] = 0;
      local_c0[9] = 0x80000000;
      local_c0[7] = local_c0[7] & 0xffffff00;
      local_98 = 0;
      local_96 = 0;
      FUN_1498dac87();
      FUN_1498dacef();
      local_f0 = &DAT_14cc3184c;
      local_e8 = &DAT_14cc31840;
      FUN_1498dad58(local_90,&local_d8,&local_f0);
      if (plVar5 != (longlong *)0x0) {
        puVar7 = (undefined1 *)(**(code **)(*plVar5 + 0x28))(plVar5);
        FUN_14171d2aa(&local_f0,*puVar7);
        local_d8 = FUN_1498cc6df();
        local_d0 = &local_f0;
        FUN_1498daf6c(local_90,local_c4);
        if (local_e8 != (undefined *)0x0) {
          FUN_1400020a8();
        }
        FUN_146a549a6(&local_f0,*(undefined4 *)(puVar7 + 4));
        local_d8 = FUN_1498cc74c();
        local_d0 = &local_f0;
        FUN_1498daf6c(local_90,local_c4);
        if (local_e8 != (undefined *)0x0) {
          FUN_1400020a8();
        }
      }
      thunk_FUN_14336e9d0(lVar1,lVar3,local_c0);
      local_48 = 0;
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      FUN_145a369d8(local_90);
    }
    else if ((*(int *)(param_2 + 0x70) != 1) || ((*(byte *)(param_2 + 0x7c) & 1) != 0)) {
      FUN_14336e9c4(lVar1,0);
      FUN_14336e718(lVar1,param_1 + 0x38);
      local_c0[0] = local_c0[0] & 0xffffff00;
      local_c0[2] = 0;
      local_c0[3] = 0;
      local_c0[4] = local_c0[4] & 0xffffff00;
      local_c0[6] = 0;
      local_c0[7] = 0;
      FUN_14336ebd0(lVar1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498dac87 FUN_1498dac87 body=104 status=ok
// SIG undefined FUN_1498dac87(void)

void FUN_1498dac87(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31848) {
    FUN_144b3d300(&DAT_14cc31848);
    if (DAT_14cc31848 == -1) {
      FUN_1446f470e(&DAT_14cc31840,L"Sequencer",1);
      _Init_thread_footer(&DAT_14cc31848);
      return;
    }
  }
  return;
}



// FUNCTION 1498dacef FUN_1498dacef body=104 status=ok
// SIG undefined FUN_1498dacef(void)

void FUN_1498dacef(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc31854) {
    FUN_144b3d300(&DAT_14cc31854);
    if (DAT_14cc31854 == -1) {
      FUN_1446f470e(&DAT_14cc3184c,L"Environment",1);
      _Init_thread_footer(&DAT_14cc31854);
      return;
    }
  }
  return;
}



// FUNCTION 1498dad58 FUN_1498dad58 body=332 status=ok
// SIG undefined FUN_1498dad58(void)

undefined4 * FUN_1498dad58(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478186a6(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1498daea6(local_40 + 1,*puVar1);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  iVar4 = FUN_144a788f7();
  uVar7 = iVar4 + (int)((ulonglong)uVar2 >> 0x20);
  local_58 = 0;
  cVar3 = FUN_14781878c(param_1,uVar7,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147818940(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498daea6 FUN_1498daea6 body=196 status=ok
// SIG undefined FUN_1498daea6(void)

undefined4 * FUN_1498daea6(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_108 [40];
  undefined **local_e0 [5];
  byte local_b8;
  byte local_b7;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  local_38 = param_2;
  memset(local_e0,0,0x90);
  FUN_144869430(local_e0);
  local_50 = 0;
  local_40 = 0;
  local_b8 = local_b8 | 4;
  local_b7 = local_b7 | 1;
  local_e0[0] = &PTR_FUN_149e1e330;
  local_48 = param_1 + 2;
  FUN_140bb5ffe(local_e0,&local_38);
  *param_1 = 0x13;
  FUN_144a7fc42(local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498daf6c FUN_1498daf6c body=362 status=ok
// SIG undefined FUN_1498daf6c(void)

undefined4 * FUN_1498daf6c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1478186a6(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  local_48[2] = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined4 *)(local_48 + 3) = puVar1[4];
  *(undefined4 *)((longlong)local_48 + 0x1c) = puVar1[5];
  *(undefined8 *)(puVar1 + 4) = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = *local_48;
  iVar4 = FUN_144a788f7();
  uVar7 = iVar4 + (int)((ulonglong)uVar2 >> 0x20);
  local_68 = 0;
  cVar3 = FUN_14781878c(param_1,uVar7,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_48 + 0x24) = uVar7;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147818940(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498db0d8 FUN_1498db0d8 body=29 status=ok
// SIG undefined FUN_1498db0d8(void)

undefined8 FUN_1498db0d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498db0f6 FUN_1498db0f6 body=1136 status=ok
// SIG undefined FUN_1498db0f6(void)

void FUN_1498db0f6(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined1 *puVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined1 local_cc [4];
  undefined4 local_c8;
  undefined4 local_c4;
  longlong lStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_98 [2] [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = FUN_1446996a6(param_4,param_4 + 0x24);
  lVar2 = *(longlong *)(lVar6 + 0x28);
  lVar7 = FUN_14479d2ce(lVar6 + 0x30);
  local_108 = *(undefined4 *)(param_1 + 0x28);
  lVar8 = FUN_1498d8414(param_5,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_1 + 8),
                        param_1 + 0x10);
  local_b0 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
  if ((lVar2 == 0) || (local_b0 = CONCAT44(local_b0._4_4_,(undefined4)local_b0), lVar8 == 0))
  goto LAB_1498db1da;
  bVar4 = true;
  if (lVar7 == 0) {
LAB_1498db1c1:
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar9 = FUN_145b3a31a();
    plVar10 = (longlong *)FUN_144718840(lVar7,uVar9);
    if (plVar10 == (longlong *)0x0) goto LAB_1498db1c1;
    (**(code **)(*plVar10 + 0x50))
              (plVar10,*(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),
               *(undefined4 *)(param_1 + 0x4c));
    cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10);
    if (cVar5 == '\0') goto LAB_1498db1da;
    if ((*(char *)(lVar6 + 0x20) == '\0') &&
       (cVar5 = (**(code **)(*plVar10 + 0x48))(plVar10,lVar2), cVar5 != '\0')) {
      *(undefined1 *)(lVar6 + 0x20) = 1;
    }
    bVar4 = false;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    cVar5 = FUN_14780e8a6(lVar2);
    if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
    goto LAB_1498db1da;
  }
  uVar9 = FUN_1498d858b(lVar2);
  if (bVar4) {
    bVar3 = false;
  }
  else {
    pcVar11 = (char *)(**(code **)(*plVar10 + 0x28))(plVar10);
    bVar3 = true;
    if (*pcVar11 == (char)uVar9) {
      bVar3 = 1e-08 < ABS(*(float *)(pcVar11 + 4) - (float)((ulonglong)uVar9 >> 0x20));
    }
  }
  lVar7 = FUN_14780e192(lVar2);
  if ((bVar3) || (*(int *)(lVar7 + 8) < 2)) {
    *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(param_1 + 0x38);
    local_c8 = 0;
    local_c4 = 0xffffffff;
    lStack_c0 = -1;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    local_b0._0_4_ = 0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = (undefined1  [16])0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a8 = 0x8000000000000000;
    local_b0._4_4_ = local_b0._4_4_ & 0xffffff00;
    local_a0 = 0;
    local_9e = 0;
    FUN_1498dac87();
    FUN_1498dacef();
    local_100 = &DAT_14cc3184c;
    local_f8 = &DAT_14cc31840;
    FUN_1498dad58(local_98,&local_e0,&local_100);
    if (!bVar4) {
      puVar12 = (undefined1 *)(**(code **)(*plVar10 + 0x28))(plVar10);
      FUN_14171d2aa(&local_100,*puVar12);
      local_e0 = FUN_1498cc6df();
      local_d8 = &local_100;
      FUN_1498daf6c(local_98,local_cc);
      if (local_f8 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      FUN_146a549a6(&local_100,*(undefined4 *)(puVar12 + 4));
      local_e0 = FUN_1498cc74c();
      local_d8 = &local_100;
      FUN_1498daf6c(local_98,local_cc);
      if (local_f8 != (undefined *)0x0) {
        FUN_1400020a8();
      }
    }
    local_f8 = *(undefined **)(param_1 + 0x38);
    local_e8 = *(longlong *)(param_1 + 0x40) + (longlong)local_f8;
    local_100 = (undefined *)CONCAT71(local_100._1_7_,1);
    local_f0 = 0;
    FUN_14336ebd0(lVar2);
    thunk_FUN_14336e9d0(lVar2,lVar8,&local_c8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145a369d8(local_98);
    goto LAB_1498db1da;
  }
  cVar5 = FUN_14780e9c6(lVar2);
  if (cVar5 == '\0') {
    FUN_14780d4f2(lVar2,&local_100);
    if (local_100 == (undefined *)0x0) goto LAB_1498db1da;
    local_e0 = *(undefined8 *)(param_1 + 0x38);
    iVar1 = *(int *)(param_2 + 0x70);
    cVar5 = FUN_14780e98a(lVar2);
    if (iVar1 == 1) {
      if (cVar5 == '\0') {
        FUN_14336e718(lVar2,&local_e0);
        FUN_14336e9c4(lVar2,*(undefined4 *)
                             ((longlong)&DAT_149935368 +
                             (ulonglong)(*(int *)(param_2 + 0x20) == 0) * 4));
      }
      else {
        if ((*(byte *)(param_2 + 0x7c) & 1) != 0) {
          FUN_14336e718(lVar2,&local_e0);
        }
        fVar13 = (float)FUN_14780da82(lVar2);
        if (0.0 <= fVar13 || *(int *)(param_2 + 0x20) != 0) {
          if (fVar13 <= 0.0 || *(int *)(param_2 + 0x20) != 1) goto LAB_1498db39c;
          uVar14 = 0xbf800000;
        }
        else {
          uVar14 = 0x3f800000;
        }
        cVar5 = FUN_14336e9c4(lVar2,uVar14);
        if (cVar5 == '\0') goto LAB_1498db38f;
      }
    }
    else {
      if (cVar5 != '\0') {
        FUN_14336e9c4(lVar2,0);
      }
LAB_1498db38f:
      FUN_14336e718(lVar2,&local_e0);
    }
LAB_1498db39c:
    lStack_c0 = *(longlong *)(param_1 + 0x38);
  }
  else {
    lStack_c0 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(lVar6 + 0x48) = lStack_c0;
  }
  local_b0 = *(longlong *)(param_1 + 0x40) + lStack_c0;
  local_c8 = CONCAT31(local_c8._1_3_,1);
  uStack_b8 = uStack_b8 & 0xffffff00;
  FUN_14336ebd0(lVar2);
LAB_1498db1da:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498db582 FUN_1498db582 body=29 status=ok
// SIG undefined FUN_1498db582(void)

undefined8 FUN_1498db582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498db5bc FUN_1498db5bc body=93 status=ok
// SIG undefined FUN_1498db5bc(void)

void FUN_1498db5bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bef4b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498db61a FUN_1498db61a body=93 status=ok
// SIG undefined FUN_1498db61a(void)

void FUN_1498db61a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5981a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bef4b40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


