// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1486513bc FUN_1486513bc body=87 status=ok
// SIG undefined FUN_1486513bc(void)

void FUN_1486513bc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86960(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_1);
  return;
}



// FUNCTION 148651414 FUN_148651414 body=122 status=ok
// SIG undefined FUN_148651414(void)

longlong FUN_148651414(longlong param_1,longlong param_2)

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
    FUN_14865148e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14865148e FUN_14865148e body=325 status=ok
// SIG undefined FUN_14865148e(void)

longlong * FUN_14865148e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_140c86a20(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar6) = 0;
          FUN_14865105c(lVar4 + 8 + lVar6,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(lVar3 + 0x58 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 148651642 FUN_148651642 body=118 status=ok
// SIG undefined FUN_148651642(void)

undefined1 FUN_148651642(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865105c(param_2,param_3);
    FUN_148651414(param_2 + 0x50,param_3 + 0x50);
    FUN_1403de7ba(param_2 + 0xa0,param_3 + 0xa0);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 1486516e0 FUN_1486516e0 body=59 status=ok
// SIG undefined FUN_1486516e0(void)

undefined8 FUN_1486516e0(longlong *param_1)

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



// FUNCTION 14865172c FUN_14865172c body=38 status=ok
// SIG undefined FUN_14865172c(void)

void FUN_14865172c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_148651794(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148651794 FUN_148651794 body=121 status=ok
// SIG undefined FUN_148651794(void)

void FUN_148651794(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86960(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_1);
  return;
}



// FUNCTION 14865182c FUN_14865182c body=63 status=ok
// SIG undefined FUN_14865182c(void)

undefined1 FUN_14865182c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148651a6a(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148651894 FUN_148651894 body=59 status=ok
// SIG undefined FUN_148651894(void)

undefined8 FUN_148651894(longlong *param_1)

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



// FUNCTION 1486518e0 FUN_1486518e0 body=38 status=ok
// SIG undefined FUN_1486518e0(void)

void FUN_1486518e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_1486519d0(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 14865193e FUN_14865193e body=146 status=ok
// SIG undefined FUN_14865193e(void)

undefined8 * FUN_14865193e(undefined8 *param_1)

{
  FUN_1406dfcd4();
  *param_1 = &PTR_FUN_14b07d840;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 1486519d0 FUN_1486519d0 body=153 status=ok
// SIG undefined FUN_1486519d0(void)

void FUN_1486519d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07d840;
  FUN_140c86997(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140c86960(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_1 + 0x11);
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 148651a6a FUN_148651a6a body=81 status=ok
// SIG undefined FUN_148651a6a(void)

longlong FUN_148651a6a(longlong param_1,longlong param_2)

{
  FUN_148650a5e();
  FUN_14865105c(param_1 + 0x88,param_2 + 0x88);
  FUN_148651414(param_1 + 0xd8,param_2 + 0xd8);
  FUN_148651abc(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}



// FUNCTION 148651abc FUN_148651abc body=93 status=ok
// SIG undefined FUN_148651abc(void)

undefined8 * FUN_148651abc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c86997(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148651b1a(param_1,iVar1);
      FUN_148651b8d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148651b1a FUN_148651b1a body=115 status=ok
// SIG undefined FUN_148651b1a(void)

void FUN_148651b1a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,8);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148651b8d FUN_148651b8d body=106 status=ok
// SIG undefined FUN_148651b8d(void)

void FUN_148651b8d(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xa0);
    do {
      FUN_148651bf8(puVar1 + -0x14,param_2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_1403de7ba(puVar1,param_2 + 0xa0);
      param_2 = param_2 + 0xc0;
      puVar1 = puVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148651bf8 FUN_148651bf8 body=132 status=ok
// SIG undefined FUN_148651bf8(void)

undefined8 * FUN_148651bf8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14865105c();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_148651414(param_1 + 10,param_2 + 0x50);
  return param_1;
}



// FUNCTION 148651ce0 FUN_148651ce0 body=46 status=ok
// SIG undefined FUN_148651ce0(void)

void FUN_148651ce0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140c78afe(param_2 + 0x18);
  return;
}



// FUNCTION 148651d24 FUN_148651d24 body=78 status=ok
// SIG undefined FUN_148651d24(void)

undefined8 FUN_148651d24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_148651e64(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148651d9a FUN_148651d9a body=59 status=ok
// SIG undefined FUN_148651d9a(void)

undefined8 FUN_148651d9a(longlong *param_1)

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



// FUNCTION 148651de0 FUN_148651de0 body=54 status=ok
// SIG undefined FUN_148651de0(void)

void FUN_148651de0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_140c78afe(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148651e64 FUN_148651e64 body=122 status=ok
// SIG undefined FUN_148651e64(void)

longlong FUN_148651e64(longlong param_1,longlong param_2)

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
    FUN_148651ede(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148651ede FUN_148651ede body=325 status=ok
// SIG undefined FUN_148651ede(void)

longlong * FUN_148651ede(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_140c78c8e(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar6) = 0;
          FUN_148652024(lVar4 + 8 + lVar6,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(lVar3 + 0x58 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 148652024 FUN_148652024 body=122 status=ok
// SIG undefined FUN_148652024(void)

longlong FUN_148652024(longlong param_1,longlong param_2)

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
    FUN_14865209e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14865209e FUN_14865209e body=119 status=ok
// SIG undefined FUN_14865209e(void)

undefined8 * FUN_14865209e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1406c8f04(param_1,uVar1);
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



// FUNCTION 148652116 FUN_148652116 body=56 status=ok
// SIG undefined FUN_148652116(void)

void FUN_148652116(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07dc30;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 148652164 FUN_148652164 body=125 status=ok
// SIG undefined FUN_148652164(void)

undefined8 FUN_148652164(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    uVar1 = *(undefined4 *)(param_3 + 0x94);
    uVar2 = *(undefined4 *)(param_3 + 0x98);
    uVar3 = *(undefined4 *)(param_3 + 0x9c);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    *(undefined4 *)(param_2 + 0x94) = uVar1;
    *(undefined4 *)(param_2 + 0x98) = uVar2;
    *(undefined4 *)(param_2 + 0x9c) = uVar3;
    FUN_144a787a6(param_2 + 0xa0,param_3 + 0xa0);
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 14865220a FUN_14865220a body=59 status=ok
// SIG undefined FUN_14865220a(void)

undefined8 FUN_14865220a(longlong *param_1)

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



// FUNCTION 148652256 FUN_148652256 body=65 status=ok
// SIG undefined FUN_148652256(void)

void FUN_148652256(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b07dc30;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1486522d2 FUN_1486522d2 body=71 status=ok
// SIG undefined FUN_1486522d2(void)

void FUN_1486522d2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07de20;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 1;
  *(undefined2 *)((longlong)param_2 + 0x9c) = 1;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 148652330 FUN_148652330 body=111 status=ok
// SIG undefined FUN_148652330(void)

undefined8 FUN_148652330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_14862fb42(param_2 + 0x88,param_3 + 0x88);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_3 + 0x98);
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_3 + 0xa0);
    param_2 = param_2 + 0xa8;
    param_3 = param_3 + 0xa8;
  }
  return 1;
}



// FUNCTION 1486523c8 FUN_1486523c8 body=59 status=ok
// SIG undefined FUN_1486523c8(void)

undefined8 FUN_1486523c8(longlong *param_1)

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



// FUNCTION 148652414 FUN_148652414 body=65 status=ok
// SIG undefined FUN_148652414(void)

void FUN_148652414(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x15) == '\x01') {
    *param_2 = &PTR_FUN_14b07de20;
    if (param_2[0x11] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x15) = 0;
  }
  return;
}



// FUNCTION 1486524c0 FUN_1486524c0 body=64 status=ok
// SIG undefined FUN_1486524c0(void)

undefined1 FUN_1486524c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409e3b3c(param_2,param_3);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148652528 FUN_148652528 body=59 status=ok
// SIG undefined FUN_148652528(void)

undefined8 FUN_148652528(longlong *param_1)

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



// FUNCTION 1486525ca FUN_1486525ca body=58 status=ok
// SIG undefined FUN_1486525ca(void)

void FUN_1486525ca(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07e170;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148652604 FUN_148652604 body=42 status=ok
// SIG undefined FUN_148652604(void)

void FUN_148652604(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07e170;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148652652 FUN_148652652 body=105 status=ok
// SIG undefined FUN_148652652(void)

undefined1 FUN_148652652(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_14865284c(param_2 + 0x88,param_3 + 0x88);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1486526e4 FUN_1486526e4 body=59 status=ok
// SIG undefined FUN_1486526e4(void)

undefined8 FUN_1486526e4(longlong *param_1)

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



// FUNCTION 148652730 FUN_148652730 body=65 status=ok
// SIG undefined FUN_148652730(void)

void FUN_148652730(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b07e170;
    if (param_2[0x11] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 1486527d0 FUN_1486527d0 body=68 status=ok
// SIG undefined FUN_1486527d0(void)

undefined8 * FUN_1486527d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07e170;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148652814 FUN_148652814 body=55 status=ok
// SIG undefined FUN_148652814(void)

void FUN_148652814(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb585c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb585c8 = FUN_140002ddd(FUN_1464c18cb,uVar1,L"GbxActorPartDef_Checklist");
  }
  return;
}



// FUNCTION 14865284c FUN_14865284c body=79 status=ok
// SIG undefined FUN_14865284c(void)

undefined8 * FUN_14865284c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14865289c(param_1,iVar1);
      FUN_1486528fe(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14865289c FUN_14865289c body=98 status=ok
// SIG undefined FUN_14865289c(void)

void FUN_14865289c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486528fe FUN_1486528fe body=62 status=ok
// SIG undefined FUN_1486528fe(void)

void FUN_1486528fe(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141845010(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148652990 FUN_148652990 body=110 status=ok
// SIG undefined FUN_148652990(void)

undefined1 FUN_148652990(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    FUN_140e7790a(param_2 + 0x20,param_3 + 0x20);
    FUN_1457b9864(param_2 + 0x38,param_3 + 0x38);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148652a26 FUN_148652a26 body=59 status=ok
// SIG undefined FUN_148652a26(void)

undefined8 FUN_148652a26(longlong *param_1)

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



// FUNCTION 148652a72 FUN_148652a72 body=38 status=ok
// SIG undefined FUN_148652a72(void)

void FUN_148652a72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_148652ada(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148652ada FUN_148652ada body=87 status=ok
// SIG undefined FUN_148652ada(void)

void FUN_148652ada(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 7);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148652b58 FUN_148652b58 body=87 status=ok
// SIG undefined FUN_148652b58(void)

undefined1 FUN_148652b58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    FUN_148652cca(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148652bd8 FUN_148652bd8 body=59 status=ok
// SIG undefined FUN_148652bd8(void)

undefined8 FUN_148652bd8(longlong *param_1)

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



// FUNCTION 148652c1e FUN_148652c1e body=32 status=ok
// SIG undefined FUN_148652c1e(void)

void FUN_148652c1e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148652c80(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148652c80 FUN_148652c80 body=74 status=ok
// SIG undefined FUN_148652c80(void)

void FUN_148652c80(longlong *param_1)

{
  FUN_140cd0f82(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148652cca FUN_148652cca body=93 status=ok
// SIG undefined FUN_148652cca(void)

undefined8 * FUN_148652cca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cd0f82(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148652d28(param_1,iVar1);
      FUN_148652d9e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148652d28 FUN_148652d28 body=118 status=ok
// SIG undefined FUN_148652d28(void)

void FUN_148652d28(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148652d9e FUN_148652d9e body=60 status=ok
// SIG undefined FUN_148652d9e(void)

void FUN_148652d9e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148652dda(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 148652dda FUN_148652dda body=116 status=ok
// SIG undefined FUN_148652dda(void)

undefined8 * FUN_148652dda(undefined8 *param_1,longlong param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1403de7ba();
  FUN_140f746b6(param_1 + 4,param_2 + 0x20);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_1457b9864(param_1 + 7,param_2 + 0x38);
  return param_1;
}



// FUNCTION 148652e50 FUN_148652e50 body=42 status=ok
// SIG undefined FUN_148652e50(void)

void FUN_148652e50(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07e620;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148652e90 FUN_148652e90 body=105 status=ok
// SIG undefined FUN_148652e90(void)

undefined1 FUN_148652e90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_14865300e(param_2 + 0x88,param_3 + 0x88);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148652f22 FUN_148652f22 body=59 status=ok
// SIG undefined FUN_148652f22(void)

undefined8 FUN_148652f22(longlong *param_1)

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



// FUNCTION 148652f6e FUN_148652f6e body=38 status=ok
// SIG undefined FUN_148652f6e(void)

void FUN_148652f6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_148652fcc(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148652fcc FUN_148652fcc body=66 status=ok
// SIG undefined FUN_148652fcc(void)

void FUN_148652fcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07e620;
  FUN_140cf4402(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 14865300e FUN_14865300e body=93 status=ok
// SIG undefined FUN_14865300e(void)

undefined8 * FUN_14865300e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cf4402(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14865306c(param_1,iVar1);
      FUN_1486530df(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14865306c FUN_14865306c body=115 status=ok
// SIG undefined FUN_14865306c(void)

void FUN_14865306c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486530df FUN_1486530df body=52 status=ok
// SIG undefined FUN_1486530df(void)

void FUN_1486530df(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148653114(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148653114 FUN_148653114 body=105 status=ok
// SIG undefined FUN_148653114(void)

undefined8 * FUN_148653114(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1403de7ba();
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148652d28(param_1 + 4,iVar1,0);
    FUN_148652d9e(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486531a4 FUN_1486531a4 body=54 status=ok
// SIG undefined FUN_1486531a4(void)

undefined1 FUN_1486531a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141471d82(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148653202 FUN_148653202 body=59 status=ok
// SIG undefined FUN_148653202(void)

undefined8 FUN_148653202(longlong *param_1)

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



// FUNCTION 1486532be FUN_1486532be body=87 status=ok
// SIG undefined FUN_1486532be(void)

undefined1 FUN_1486532be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    FUN_148653422(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 14865333e FUN_14865333e body=59 status=ok
// SIG undefined FUN_14865333e(void)

undefined8 FUN_14865333e(longlong *param_1)

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



// FUNCTION 148653384 FUN_148653384 body=32 status=ok
// SIG undefined FUN_148653384(void)

void FUN_148653384(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1486533e6(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486533e6 FUN_1486533e6 body=60 status=ok
// SIG undefined FUN_1486533e6(void)

void FUN_1486533e6(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148653422 FUN_148653422 body=79 status=ok
// SIG undefined FUN_148653422(void)

undefined8 * FUN_148653422(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148653472(param_1,iVar1);
      FUN_1486534e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148653472 FUN_148653472 body=115 status=ok
// SIG undefined FUN_148653472(void)

void FUN_148653472(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1486534e5 FUN_1486534e5 body=52 status=ok
// SIG undefined FUN_1486534e5(void)

void FUN_1486534e5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14107d9f8(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 14865351a FUN_14865351a body=42 status=ok
// SIG undefined FUN_14865351a(void)

void FUN_14865351a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07eae0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 14865355a FUN_14865355a body=105 status=ok
// SIG undefined FUN_14865355a(void)

undefined1 FUN_14865355a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_1486536d8(param_2 + 0x88,param_3 + 0x88);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1486535ec FUN_1486535ec body=59 status=ok
// SIG undefined FUN_1486535ec(void)

undefined8 FUN_1486535ec(longlong *param_1)

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



// FUNCTION 148653638 FUN_148653638 body=38 status=ok
// SIG undefined FUN_148653638(void)

void FUN_148653638(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_148653696(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148653696 FUN_148653696 body=66 status=ok
// SIG undefined FUN_148653696(void)

void FUN_148653696(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07eae0;
  FUN_140caa71a(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 1486536d8 FUN_1486536d8 body=93 status=ok
// SIG undefined FUN_1486536d8(void)

undefined8 * FUN_1486536d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140caa71a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148653736(param_1,iVar1);
      FUN_1486537a9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148653736 FUN_148653736 body=115 status=ok
// SIG undefined FUN_148653736(void)

void FUN_148653736(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486537a9 FUN_1486537a9 body=52 status=ok
// SIG undefined FUN_1486537a9(void)

void FUN_1486537a9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486537de(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1486537de FUN_1486537de body=105 status=ok
// SIG undefined FUN_1486537de(void)

undefined8 * FUN_1486537de(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1403de7ba();
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148653472(param_1 + 4,iVar1,0);
    FUN_1486534e5(param_1[4],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148653896 FUN_148653896 body=91 status=ok
// SIG undefined FUN_148653896(void)

undefined8 FUN_148653896(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      FUN_1403de7ba(param_2 + -0x38,param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14865391a FUN_14865391a body=59 status=ok
// SIG undefined FUN_14865391a(void)

undefined8 FUN_14865391a(longlong *param_1)

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



// FUNCTION 148653960 FUN_148653960 body=34 status=ok
// SIG undefined FUN_148653960(void)

void FUN_148653960(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1458868c2(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486539d2 FUN_1486539d2 body=42 status=ok
// SIG undefined FUN_1486539d2(void)

void FUN_1486539d2(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07ee30;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148653a12 FUN_148653a12 body=105 status=ok
// SIG undefined FUN_148653a12(void)

undefined1 FUN_148653a12(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_148653b68(param_2 + 0x88,param_3 + 0x88);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148653aa4 FUN_148653aa4 body=59 status=ok
// SIG undefined FUN_148653aa4(void)

undefined8 FUN_148653aa4(longlong *param_1)

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



// FUNCTION 148653af0 FUN_148653af0 body=40 status=ok
// SIG undefined FUN_148653af0(void)

void FUN_148653af0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1458f64e4(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148653b68 FUN_148653b68 body=95 status=ok
// SIG undefined FUN_148653b68(void)

undefined8 * FUN_148653b68(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458f6526(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148653bc8(param_1,iVar1);
      FUN_148653c3b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148653bc8 FUN_148653bc8 body=115 status=ok
// SIG undefined FUN_148653bc8(void)

void FUN_148653bc8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148653c3b FUN_148653c3b body=52 status=ok
// SIG undefined FUN_148653c3b(void)

void FUN_148653c3b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148653c70(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148653c70 FUN_148653c70 body=126 status=ok
// SIG undefined FUN_148653c70(void)

undefined8 * FUN_148653c70(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1403de7ba();
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  _Src = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148653d1e FUN_148653d1e body=87 status=ok
// SIG undefined FUN_148653d1e(void)

undefined1 FUN_148653d1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    FUN_1409e3b3c(param_2 + 0x20,param_3 + 0x20);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148653d9e FUN_148653d9e body=59 status=ok
// SIG undefined FUN_148653d9e(void)

undefined8 FUN_148653d9e(longlong *param_1)

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



// FUNCTION 148653e30 FUN_148653e30 body=51 status=ok
// SIG undefined FUN_148653e30(void)

void FUN_148653e30(longlong *param_1)

{
  if ((char)param_1[7] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 148653ece FUN_148653ece body=59 status=ok
// SIG undefined FUN_148653ece(void)

undefined8 FUN_148653ece(longlong *param_1)

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



// FUNCTION 148653f14 FUN_148653f14 body=34 status=ok
// SIG undefined FUN_148653f14(void)

void FUN_148653f14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145856d32(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148653f86 FUN_148653f86 body=60 status=ok
// SIG undefined FUN_148653f86(void)

void FUN_148653f86(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b07f2f0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 148653fd8 FUN_148653fd8 body=108 status=ok
// SIG undefined FUN_148653fd8(void)

undefined1 FUN_148653fd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_148654190(param_2 + 0x88,param_3 + 0x88);
    FUN_1409e3b3c(param_2 + 0x98,param_3 + 0x98);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 14865406c FUN_14865406c body=59 status=ok
// SIG undefined FUN_14865406c(void)

undefined8 FUN_14865406c(longlong *param_1)

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



// FUNCTION 1486540b8 FUN_1486540b8 body=38 status=ok
// SIG undefined FUN_1486540b8(void)

void FUN_1486540b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14865414e(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148654116 FUN_148654116 body=55 status=ok
// SIG undefined FUN_148654116(void)

void FUN_148654116(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb586b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb586b8 = FUN_140002ddd(FUN_1464c1dce,uVar1,L"GbxActorPartInsertInfo_Filter");
  }
  return;
}



// FUNCTION 14865414e FUN_14865414e body=66 status=ok
// SIG undefined FUN_14865414e(void)

void FUN_14865414e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07f2f0;
  FUN_14096ab1a(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 148654190 FUN_148654190 body=93 status=ok
// SIG undefined FUN_148654190(void)

undefined8 * FUN_148654190(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14096ab1a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486541ee(param_1,iVar1);
      FUN_14865425d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486541ee FUN_1486541ee body=111 status=ok
// SIG undefined FUN_1486541ee(void)

void FUN_1486541ee(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14865425d FUN_14865425d body=85 status=ok
// SIG undefined FUN_14865425d(void)

void FUN_14865425d(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1403de7ba(param_1,param_2);
    FUN_141845010(param_1 + 4,param_2 + 0x20);
    param_1 = param_1 + 7;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 1486542d2 FUN_1486542d2 body=54 status=ok
// SIG undefined FUN_1486542d2(void)

undefined1 FUN_1486542d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862205e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148654330 FUN_148654330 body=59 status=ok
// SIG undefined FUN_148654330(void)

undefined8 FUN_148654330(longlong *param_1)

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



// FUNCTION 1486543c2 FUN_1486543c2 body=48 status=ok
// SIG undefined FUN_1486543c2(void)

void FUN_1486543c2(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140925a98(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148654434 FUN_148654434 body=87 status=ok
// SIG undefined FUN_148654434(void)

undefined1 FUN_148654434(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862205e(param_2,param_3);
    FUN_1486545ae(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1486544b4 FUN_1486544b4 body=59 status=ok
// SIG undefined FUN_1486544b4(void)

undefined8 FUN_1486544b4(longlong *param_1)

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



// FUNCTION 1486544fa FUN_1486544fa body=32 status=ok
// SIG undefined FUN_1486544fa(void)

void FUN_1486544fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14865455c(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14865455c FUN_14865455c body=81 status=ok
// SIG undefined FUN_14865455c(void)

void FUN_14865455c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140925aca(param_1 + 2);
  FUN_140925a98(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1486545ae FUN_1486545ae body=122 status=ok
// SIG undefined FUN_1486545ae(void)

longlong FUN_1486545ae(longlong param_1,longlong param_2)

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
    FUN_148654628(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148654628 FUN_148654628 body=255 status=ok
// SIG undefined FUN_148654628(void)

longlong * FUN_148654628(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140925b76(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447711aa(param_1);
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
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_148654728(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x18 + lVar6) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148654728 FUN_148654728 body=77 status=ok
// SIG undefined FUN_148654728(void)

undefined8 * FUN_148654728(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1486220bc(param_1,iVar1,0);
    FUN_14862212f(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1486547c0 FUN_1486547c0 body=110 status=ok
// SIG undefined FUN_1486547c0(void)

undefined1 FUN_1486547c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862205e(param_2,param_3);
    FUN_1486545ae(param_2 + 0x10,param_3 + 0x10);
    FUN_1403de7ba(param_2 + 0x60,param_3 + 0x60);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148654856 FUN_148654856 body=59 status=ok
// SIG undefined FUN_148654856(void)

undefined8 FUN_148654856(longlong *param_1)

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



// FUNCTION 1486548a2 FUN_1486548a2 body=38 status=ok
// SIG undefined FUN_1486548a2(void)

void FUN_1486548a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_14865490a(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14865490a FUN_14865490a body=109 status=ok
// SIG undefined FUN_14865490a(void)

void FUN_14865490a(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140925aca(param_1 + 2);
  FUN_140925a98(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148654996 FUN_148654996 body=63 status=ok
// SIG undefined FUN_148654996(void)

undefined1 FUN_148654996(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148654b6c(param_2,param_3);
    param_3 = param_3 + 0x1a0;
    param_2 = param_2 + 0x1a0;
  }
  return 1;
}



// FUNCTION 1486549fe FUN_1486549fe body=59 status=ok
// SIG undefined FUN_1486549fe(void)

undefined8 FUN_1486549fe(longlong *param_1)

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



// FUNCTION 148654a4a FUN_148654a4a body=38 status=ok
// SIG undefined FUN_148654a4a(void)

void FUN_148654a4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_14092596a(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 148654aa8 FUN_148654aa8 body=195 status=ok
// SIG undefined FUN_148654aa8(void)

undefined8 * FUN_148654aa8(undefined8 *param_1)

{
  FUN_1406dfcd4();
  *param_1 = &PTR_FUN_14b07f9b0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  return param_1;
}



// FUNCTION 148654b6c FUN_148654b6c body=200 status=ok
// SIG undefined FUN_148654b6c(void)

longlong FUN_148654b6c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_148650a5e();
  FUN_14862205e(param_1 + 0x88,param_2 + 0x88);
  FUN_1486545ae(param_1 + 0x98,param_2 + 0x98);
  FUN_148654c34(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  FUN_144a787a6(param_1 + 0x110,param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  uVar1 = *(undefined4 *)(param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  FUN_144a787a6(param_1 + 0x138,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  FUN_148654de2(param_1 + 0x150,param_2 + 0x150);
  return param_1;
}



// FUNCTION 148654c34 FUN_148654c34 body=93 status=ok
// SIG undefined FUN_148654c34(void)

undefined8 * FUN_148654c34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140925b01(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148654c92(param_1,iVar1);
      FUN_148654cf4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148654c92 FUN_148654c92 body=98 status=ok
// SIG undefined FUN_148654c92(void)

void FUN_148654c92(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148654cf4 FUN_148654cf4 body=97 status=ok
// SIG undefined FUN_148654cf4(void)

void FUN_148654cf4(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
    do {
      FUN_148654d56(puVar1 + -0xc,param_2);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_1403de7ba(puVar1,param_2 + 0x60);
      param_2 = param_2 + 0x80;
      puVar1 = puVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148654d56 FUN_148654d56 body=140 status=ok
// SIG undefined FUN_148654d56(void)

undefined8 * FUN_148654d56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1486220bc(param_1,iVar1,0);
    FUN_14862212f(*param_1,uVar2,iVar1);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1486545ae(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148654de2 FUN_148654de2 body=122 status=ok
// SIG undefined FUN_148654de2(void)

longlong FUN_148654de2(longlong param_1,longlong param_2)

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
    FUN_148654e5c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148654e5c FUN_148654e5c body=211 status=ok
// SIG undefined FUN_148654e5c(void)

undefined8 * FUN_148654e5c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140925d9e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148654f30(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148654f30 FUN_148654f30 body=114 status=ok
// SIG undefined FUN_148654f30(void)

undefined8 * FUN_148654f30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  _Src = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148655012 FUN_148655012 body=56 status=ok
// SIG undefined FUN_148655012(void)

void FUN_148655012(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140c78bdc(param_2 + 0x18);
  return;
}



// FUNCTION 148655060 FUN_148655060 body=106 status=ok
// SIG undefined FUN_148655060(void)

undefined8 FUN_148655060(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_3 + 4);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    FUN_14865518e(param_2 + 6,param_3 + 6);
    if (param_2 != param_3) {
      if (*(char *)(param_3 + 0x1c) == '\x01') {
        *(undefined8 *)(param_2 + 0x1a) = *(undefined8 *)(param_3 + 0x1a);
        uVar4 = 1;
      }
      else {
        if (*(char *)(param_2 + 0x1c) != '\x01') goto LAB_1486550a8;
        uVar4 = 0;
      }
      *(undefined1 *)(param_2 + 0x1c) = uVar4;
    }
LAB_1486550a8:
    param_3 = param_3 + 0x1e;
    param_2 = param_2 + 0x1e;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 1486550f2 FUN_1486550f2 body=59 status=ok
// SIG undefined FUN_1486550f2(void)

undefined8 FUN_1486550f2(longlong *param_1)

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



// FUNCTION 14865518e FUN_14865518e body=122 status=ok
// SIG undefined FUN_14865518e(void)

longlong FUN_14865518e(longlong param_1,longlong param_2)

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
    FUN_148655208(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148655208 FUN_148655208 body=202 status=ok
// SIG undefined FUN_148655208(void)

undefined8 * FUN_148655208(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c78ebe(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1486552d2(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1486552d2 FUN_1486552d2 body=111 status=ok
// SIG undefined FUN_1486552d2(void)

undefined8 * FUN_1486552d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148655342(param_1 + 1,iVar1);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148655342 FUN_148655342 body=89 status=ok
// SIG undefined FUN_148655342(void)

void FUN_148655342(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14865539c FUN_14865539c body=64 status=ok
// SIG undefined FUN_14865539c(void)

void FUN_14865539c(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(param_1 + 0x70) == '\x01') {
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_140c78bdc(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1486553fa FUN_1486553fa body=63 status=ok
// SIG undefined FUN_1486553fa(void)

undefined1 FUN_1486553fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486555ec(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 148655462 FUN_148655462 body=59 status=ok
// SIG undefined FUN_148655462(void)

undefined8 FUN_148655462(longlong *param_1)

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



// FUNCTION 1486554ae FUN_1486554ae body=38 status=ok
// SIG undefined FUN_1486554ae(void)

void FUN_1486554ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_140550c26(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 14865550c FUN_14865550c body=224 status=ok
// SIG undefined FUN_14865550c(void)

undefined8 * FUN_14865550c(undefined8 *param_1)

{
  FUN_1406dfcd4();
  *param_1 = &PTR_FUN_14b080120;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return param_1;
}



// FUNCTION 1486555ec FUN_1486555ec body=352 status=ok
// SIG undefined FUN_1486555ec(void)

longlong FUN_1486555ec(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_148650a5e();
  FUN_14865574c(param_1 + 0x88,param_2 + 0x88);
  FUN_1406fa324(param_1 + 0xa0,param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb5);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb5) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined4 *)(param_2 + 0xf4);
  uVar3 = *(undefined4 *)(param_2 + 0xf8);
  uVar4 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  *(undefined4 *)(param_1 + 0xfc) = uVar4;
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  FUN_143c443e8(param_1 + 0x110,param_2 + 0x110);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  FUN_140816ffa(param_1 + 0x168,param_2 + 0x168);
  FUN_143c4432c(param_1 + 0x178,param_2 + 0x178);
  FUN_143c4438a(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  uVar2 = *(undefined4 *)(param_2 + 0x1a4);
  uVar3 = *(undefined4 *)(param_2 + 0x1a8);
  uVar4 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined4 *)(param_1 + 0x1a8) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  FUN_144a787a6(param_1 + 0x1b0,param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  uVar2 = *(undefined4 *)(param_2 + 0x1cc);
  uVar3 = *(undefined4 *)(param_2 + 0x1d0);
  uVar4 = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  *(undefined4 *)(param_1 + 0x1d4) = uVar4;
  FUN_144a787a6(param_1 + 0x1d8,param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 14865574c FUN_14865574c body=84 status=ok
// SIG undefined FUN_14865574c(void)

longlong * FUN_14865574c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148655804 FUN_148655804 body=46 status=ok
// SIG undefined FUN_148655804(void)

void FUN_148655804(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140c78b64(param_2 + 0x18);
  return;
}



// FUNCTION 148655848 FUN_148655848 body=78 status=ok
// SIG undefined FUN_148655848(void)

undefined8 FUN_148655848(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_148655988(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486558be FUN_1486558be body=59 status=ok
// SIG undefined FUN_1486558be(void)

undefined8 FUN_1486558be(longlong *param_1)

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



// FUNCTION 148655904 FUN_148655904 body=54 status=ok
// SIG undefined FUN_148655904(void)

void FUN_148655904(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_140c78b64(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148655988 FUN_148655988 body=122 status=ok
// SIG undefined FUN_148655988(void)

longlong FUN_148655988(longlong param_1,longlong param_2)

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
    FUN_148655a02(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148655a02 FUN_148655a02 body=115 status=ok
// SIG undefined FUN_148655a02(void)

undefined8 * FUN_148655a02(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140c78c14(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 148655a9e FUN_148655a9e body=125 status=ok
// SIG undefined FUN_148655a9e(void)

void FUN_148655a9e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487bbbb6(param_1,&local_28);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148655b1c FUN_148655b1c body=174 status=ok
// SIG undefined FUN_148655b1c(void)

void FUN_148655b1c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487bbc0c(param_1,&local_30,local_24);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148655c44 FUN_148655c44 body=164 status=ok
// SIG undefined FUN_148655c44(void)

void FUN_148655c44(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148655cf2 FUN_148655cf2 body=187 status=ok
// SIG undefined FUN_148655cf2(void)

void FUN_148655cf2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148659cb4(plVar1,param_1 + 0xb8);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148655dc2 FUN_148655dc2 body=45 status=ok
// SIG undefined FUN_148655dc2(void)

longlong FUN_148655dc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655df0 FUN_148655df0 body=48 status=ok
// SIG undefined FUN_148655df0(void)

longlong FUN_148655df0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655e20 FUN_148655e20 body=48 status=ok
// SIG undefined FUN_148655e20(void)

longlong FUN_148655e20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655e50 FUN_148655e50 body=48 status=ok
// SIG undefined FUN_148655e50(void)

longlong FUN_148655e50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655e80 FUN_148655e80 body=45 status=ok
// SIG undefined FUN_148655e80(void)

longlong FUN_148655e80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655eae FUN_148655eae body=48 status=ok
// SIG undefined FUN_148655eae(void)

longlong FUN_148655eae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655ede FUN_148655ede body=48 status=ok
// SIG undefined FUN_148655ede(void)

longlong FUN_148655ede(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655f0e FUN_148655f0e body=48 status=ok
// SIG undefined FUN_148655f0e(void)

longlong FUN_148655f0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655f3e FUN_148655f3e body=45 status=ok
// SIG undefined FUN_148655f3e(void)

longlong FUN_148655f3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655f6c FUN_148655f6c body=45 status=ok
// SIG undefined FUN_148655f6c(void)

longlong FUN_148655f6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655f9a FUN_148655f9a body=45 status=ok
// SIG undefined FUN_148655f9a(void)

longlong FUN_148655f9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148655fc8 FUN_148655fc8 body=48 status=ok
// SIG undefined FUN_148655fc8(void)

longlong FUN_148655fc8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148656000 FUN_148656000 body=48 status=ok
// SIG undefined FUN_148656000(void)

longlong FUN_148656000(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_140b96afe(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148656030 FUN_148656030 body=48 status=ok
// SIG undefined FUN_148656030(void)

longlong FUN_148656030(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140b96afe(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148656060 FUN_148656060 body=45 status=ok
// SIG undefined FUN_148656060(void)

longlong FUN_148656060(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140c11d04(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148656094 FUN_148656094 body=45 status=ok
// SIG undefined FUN_148656094(void)

longlong FUN_148656094(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140c11d04(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1486560c8 FUN_1486560c8 body=48 status=ok
// SIG undefined FUN_1486560c8(void)

longlong FUN_1486560c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_140c11d04(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148656100 FUN_148656100 body=56 status=ok
// SIG undefined FUN_148656100(void)

void FUN_148656100(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08ae00;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 14865614e FUN_14865614e body=127 status=ok
// SIG undefined FUN_14865614e(void)

undefined8 FUN_14865614e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    uVar1 = *(undefined4 *)(param_3 + 0x94);
    uVar2 = *(undefined4 *)(param_3 + 0x98);
    uVar3 = *(undefined4 *)(param_3 + 0x9c);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x90);
    *(undefined4 *)(param_2 + 0x94) = uVar1;
    *(undefined4 *)(param_2 + 0x98) = uVar2;
    *(undefined4 *)(param_2 + 0x9c) = uVar3;
    FUN_144a787a6(param_2 + 0xa0,param_3 + 0xa0);
    *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 1486561f6 FUN_1486561f6 body=59 status=ok
// SIG undefined FUN_1486561f6(void)

undefined8 FUN_1486561f6(longlong *param_1)

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



// FUNCTION 148656242 FUN_148656242 body=65 status=ok
// SIG undefined FUN_148656242(void)

void FUN_148656242(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b08ae00;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 14865631c FUN_14865631c body=46 status=ok
// SIG undefined FUN_14865631c(void)

void FUN_14865631c(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145826ce4(param_2 + 0x20);
  return;
}



// FUNCTION 148656360 FUN_148656360 body=84 status=ok
// SIG undefined FUN_148656360(void)

undefined8 FUN_148656360(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1486564a8(param_2,param_3);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486563dc FUN_1486563dc body=59 status=ok
// SIG undefined FUN_1486563dc(void)

undefined8 FUN_1486563dc(longlong *param_1)

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



// FUNCTION 148656422 FUN_148656422 body=56 status=ok
// SIG undefined FUN_148656422(void)

void FUN_148656422(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined4 *)(param_2 + 0x68) = 0;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_145826ce4(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1486564a8 FUN_1486564a8 body=122 status=ok
// SIG undefined FUN_1486564a8(void)

longlong FUN_1486564a8(longlong param_1,longlong param_2)

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
    FUN_148656522(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148656522 FUN_148656522 body=121 status=ok
// SIG undefined FUN_148656522(void)

undefined8 * FUN_148656522(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145826d1c(param_1,uVar1);
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



// FUNCTION 1486565ce FUN_1486565ce body=91 status=ok
// SIG undefined FUN_1486565ce(void)

undefined8 FUN_1486565ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_1403de7ba(param_2,param_3);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148656652 FUN_148656652 body=59 status=ok
// SIG undefined FUN_148656652(void)

undefined8 FUN_148656652(longlong *param_1)

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



// FUNCTION 148656698 FUN_148656698 body=32 status=ok
// SIG undefined FUN_148656698(void)

void FUN_148656698(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1486566fa(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1486566fa FUN_1486566fa body=61 status=ok
// SIG undefined FUN_1486566fa(void)

void FUN_1486566fa(longlong param_1)

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



// FUNCTION 148656756 FUN_148656756 body=63 status=ok
// SIG undefined FUN_148656756(void)

undefined1 FUN_148656756(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486569de(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 1486567be FUN_1486567be body=59 status=ok
// SIG undefined FUN_1486567be(void)

undefined8 FUN_1486567be(longlong *param_1)

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



// FUNCTION 14865680a FUN_14865680a body=38 status=ok
// SIG undefined FUN_14865680a(void)

void FUN_14865680a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_14865695a(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148656874 FUN_148656874 body=229 status=ok
// SIG undefined FUN_148656874(void)

undefined8 * FUN_148656874(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1406dfcd4();
  *param_1 = &PTR_FUN_14b08b340;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1b] = DAT_14c8464e0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = DAT_14c8464f0;
  param_1[0x20] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x1e] = DAT_14c8464f8;
  param_1[0x1f] = uVar1;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 14865695a FUN_14865695a body=131 status=ok
// SIG undefined FUN_14865695a(void)

void FUN_14865695a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b08b340;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x26);
  FUN_14108c80b(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 1486569de FUN_1486569de body=149 status=ok
// SIG undefined FUN_1486569de(void)

longlong FUN_1486569de(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_148650a5e();
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  FUN_148656a74(param_1 + 0xb0,param_2 + 0xb0);
  puVar5 = (undefined8 *)(param_2 + 0xc0);
  puVar6 = (undefined8 *)(param_1 + 0xc0);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  FUN_141262aba(param_1 + 0x130,param_2 + 0x130);
  return param_1;
}



// FUNCTION 148656a74 FUN_148656a74 body=93 status=ok
// SIG undefined FUN_148656a74(void)

undefined8 * FUN_148656a74(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14108c80b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148656ad2(param_1,iVar1);
      FUN_148656b45(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148656ad2 FUN_148656ad2 body=115 status=ok
// SIG undefined FUN_148656ad2(void)

void FUN_148656ad2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148656b45 FUN_148656b45 body=52 status=ok
// SIG undefined FUN_148656b45(void)

void FUN_148656b45(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148656b7a(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148656b7a FUN_148656b7a body=140 status=ok
// SIG undefined FUN_148656b7a(void)

undefined8 * FUN_148656b7a(undefined8 *param_1,undefined8 *param_2)

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
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1403de7ba(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 148656c08 FUN_148656c08 body=62 status=ok
// SIG undefined FUN_148656c08(void)

void FUN_148656c08(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0xffffffff00000080;
  *(undefined1 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  return;
}



// FUNCTION 148656cc4 FUN_148656cc4 body=111 status=ok
// SIG undefined FUN_148656cc4(void)

undefined8 FUN_148656cc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      *(undefined8 *)(param_2 + -0x68) = *(undefined8 *)(param_3 + -0x68);
      uVar1 = *(undefined4 *)(param_3 + -0x74);
      uVar2 = *(undefined4 *)(param_3 + -0x70);
      uVar3 = *(undefined4 *)(param_3 + -0x6c);
      *(undefined4 *)(param_2 + -0x78) = *(undefined4 *)(param_3 + -0x78);
      *(undefined4 *)(param_2 + -0x74) = uVar1;
      *(undefined4 *)(param_2 + -0x70) = uVar2;
      *(undefined4 *)(param_2 + -0x6c) = uVar3;
      *(undefined1 *)(param_2 + -0x60) = *(undefined1 *)(param_3 + -0x60);
      FUN_148656e1e(param_2 + -0x58,param_3 + -0x58);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_148656f12(param_2,param_3);
      param_3 = param_3 + 200;
      param_2 = param_2 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148656d5c FUN_148656d5c body=59 status=ok
// SIG undefined FUN_148656d5c(void)

undefined8 FUN_148656d5c(longlong *param_1)

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



// FUNCTION 148656da8 FUN_148656da8 body=40 status=ok
// SIG undefined FUN_148656da8(void)

void FUN_148656da8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1459428c6(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148656e1e FUN_148656e1e body=122 status=ok
// SIG undefined FUN_148656e1e(void)

longlong FUN_148656e1e(longlong param_1,longlong param_2)

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
    FUN_148656e98(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148656e98 FUN_148656e98 body=121 status=ok
// SIG undefined FUN_148656e98(void)

undefined8 * FUN_148656e98(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145942990(param_1,uVar1);
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



// FUNCTION 148656f12 FUN_148656f12 body=122 status=ok
// SIG undefined FUN_148656f12(void)

longlong FUN_148656f12(longlong param_1,longlong param_2)

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
    FUN_148656f8c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148656f8c FUN_148656f8c body=353 status=ok
// SIG undefined FUN_148656f8c(void)

longlong * FUN_148656f8c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_1413d7b3a(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_1406a7630(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 8 + lVar6) = *(undefined8 *)(lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x30 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x38 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x3c + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x44 + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x50 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x58 + lVar6) = 0;
          FUN_141262aba(lVar4 + 0x10 + lVar6,lVar3 + 0x10 + lVar6);
          *(undefined8 *)(lVar4 + 0x60 + lVar6) = *(undefined8 *)(lVar3 + 0x60 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x68;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1486570ee FUN_1486570ee body=46 status=ok
// SIG undefined FUN_1486570ee(void)

void FUN_1486570ee(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08b710;
  param_2[0x11] = 0xc2c8000000000001;
  param_2[0x12] = 0x3e842c80000;
  return;
}



// FUNCTION 148657132 FUN_148657132 body=76 status=ok
// SIG undefined FUN_148657132(void)

undefined1 FUN_148657132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x8c);
    uVar2 = *(undefined4 *)(param_3 + 0x90);
    uVar3 = *(undefined4 *)(param_3 + 0x94);
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x88);
    *(undefined4 *)(param_2 + 0x8c) = uVar1;
    *(undefined4 *)(param_2 + 0x90) = uVar2;
    *(undefined4 *)(param_2 + 0x94) = uVar3;
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 1486571a6 FUN_1486571a6 body=59 status=ok
// SIG undefined FUN_1486571a6(void)

undefined8 FUN_1486571a6(longlong *param_1)

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



// FUNCTION 1486571f2 FUN_1486571f2 body=38 status=ok
// SIG undefined FUN_1486571f2(void)

void FUN_1486571f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 14865725e FUN_14865725e body=56 status=ok
// SIG undefined FUN_14865725e(void)

void FUN_14865725e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08b900;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  return;
}



// FUNCTION 1486572ac FUN_1486572ac body=120 status=ok
// SIG undefined FUN_1486572ac(void)

undefined8 FUN_1486572ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_1409e3b3c(param_2 + 0x88,param_3 + 0x88);
    FUN_14862fb42(param_2 + 0xa0,param_3 + 0xa0);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
    param_2 = param_2 + 0xb8;
    param_3 = param_3 + 0xb8;
  }
  return 1;
}



// FUNCTION 14865734c FUN_14865734c body=59 status=ok
// SIG undefined FUN_14865734c(void)

undefined8 FUN_14865734c(longlong *param_1)

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



// FUNCTION 148657398 FUN_148657398 body=65 status=ok
// SIG undefined FUN_148657398(void)

void FUN_148657398(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b08b900;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 148657442 FUN_148657442 body=72 status=ok
// SIG undefined FUN_148657442(void)

undefined1 FUN_148657442(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1403de7ba(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1486574b2 FUN_1486574b2 body=59 status=ok
// SIG undefined FUN_1486574b2(void)

undefined8 FUN_1486574b2(longlong *param_1)

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



// FUNCTION 148657544 FUN_148657544 body=52 status=ok
// SIG undefined FUN_148657544(void)

void FUN_148657544(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1486575a8 FUN_1486575a8 body=77 status=ok
// SIG undefined FUN_1486575a8(void)

undefined1 FUN_1486575a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409e3b3c(param_2,param_3);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    FUN_1486576ae(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 14865761e FUN_14865761e body=59 status=ok
// SIG undefined FUN_14865761e(void)

undefined8 FUN_14865761e(longlong *param_1)

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



// FUNCTION 1486576ae FUN_1486576ae body=93 status=ok
// SIG undefined FUN_1486576ae(void)

undefined8 * FUN_1486576ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14090341b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14865770c(param_1,iVar1);
      FUN_14865777f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14865770c FUN_14865770c body=115 status=ok
// SIG undefined FUN_14865770c(void)

void FUN_14865770c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14865777f FUN_14865777f body=90 status=ok
// SIG undefined FUN_14865777f(void)

void FUN_14865777f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(puVar1 + -1) = *(undefined4 *)(param_2 + -8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      FUN_1403de7ba(puVar1,param_2);
      puVar1 = puVar1 + 5;
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486577da FUN_1486577da body=50 status=ok
// SIG undefined FUN_1486577da(void)

void FUN_1486577da(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_14090341b(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1486578a6 FUN_1486578a6 body=59 status=ok
// SIG undefined FUN_1486578a6(void)

undefined8 FUN_1486578a6(longlong *param_1)

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



// FUNCTION 148657946 FUN_148657946 body=29 status=ok
// SIG undefined FUN_148657946(void)

undefined8 FUN_148657946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148657964 FUN_148657964 body=55 status=ok
// SIG undefined FUN_148657964(void)

void FUN_148657964(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58900 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58900 = FUN_140002ddd(FUN_1464c2cf1,uVar1,L"GbxActorPartInsertInfo_Random");
  }
  return;
}



// FUNCTION 14865799c FUN_14865799c body=66 status=ok
// SIG undefined FUN_14865799c(void)

void FUN_14865799c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08bf20;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0x3f800000;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1486579f4 FUN_1486579f4 body=122 status=ok
// SIG undefined FUN_1486579f4(void)

undefined8 FUN_1486579f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_3 + 0x88);
    FUN_1486576ae(param_2 + 0x90,param_3 + 0x90);
    FUN_148657be0(param_2 + 0xa0,param_3 + 0xa0);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 148657a96 FUN_148657a96 body=59 status=ok
// SIG undefined FUN_148657a96(void)

undefined8 FUN_148657a96(longlong *param_1)

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



// FUNCTION 148657ae2 FUN_148657ae2 body=38 status=ok
// SIG undefined FUN_148657ae2(void)

void FUN_148657ae2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_148657b78(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148657b40 FUN_148657b40 body=55 status=ok
// SIG undefined FUN_148657b40(void)

void FUN_148657b40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58900 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58900 = FUN_140002ddd(FUN_1464c2cf1,uVar1,L"GbxActorPartInsertInfo_Random");
  }
  return;
}



// FUNCTION 148657b78 FUN_148657b78 body=103 status=ok
// SIG undefined FUN_148657b78(void)

void FUN_148657b78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b08bf20;
  FUN_140ca808b(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14090341b(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 148657be0 FUN_148657be0 body=93 status=ok
// SIG undefined FUN_148657be0(void)

undefined8 * FUN_148657be0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ca808b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148657c3e(param_1,iVar1);
      FUN_148657cb1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148657c3e FUN_148657c3e body=115 status=ok
// SIG undefined FUN_148657c3e(void)

void FUN_148657c3e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148657cb1 FUN_148657cb1 body=52 status=ok
// SIG undefined FUN_148657cb1(void)

void FUN_148657cb1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148657ce6(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148657ce6 FUN_148657ce6 body=105 status=ok
// SIG undefined FUN_148657ce6(void)

longlong FUN_148657ce6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_141845010();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_14865770c((undefined8 *)(param_1 + 0x20),iVar1,0);
    FUN_14865777f(*(undefined8 *)(param_1 + 0x20),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148657d50 FUN_148657d50 body=42 status=ok
// SIG undefined FUN_148657d50(void)

void FUN_148657d50(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08c110;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 148657d90 FUN_148657d90 body=85 status=ok
// SIG undefined FUN_148657d90(void)

undefined1 FUN_148657d90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_14862fb42(param_2 + 0x88,param_3 + 0x88);
    param_2 = param_2 + 0x98;
    param_3 = param_3 + 0x98;
  }
  return 1;
}



// FUNCTION 148657e0e FUN_148657e0e body=59 status=ok
// SIG undefined FUN_148657e0e(void)

undefined8 FUN_148657e0e(longlong *param_1)

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



// FUNCTION 148657e5a FUN_148657e5a body=65 status=ok
// SIG undefined FUN_148657e5a(void)

void FUN_148657e5a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b08c110;
    if (param_2[0x11] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 148657ed6 FUN_148657ed6 body=32 status=ok
// SIG undefined FUN_148657ed6(void)

void FUN_148657ed6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b08c300;
  return;
}



// FUNCTION 148657f0c FUN_148657f0c body=63 status=ok
// SIG undefined FUN_148657f0c(void)

undefined1 FUN_148657f0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148657f74 FUN_148657f74 body=59 status=ok
// SIG undefined FUN_148657f74(void)

undefined8 FUN_148657f74(longlong *param_1)

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



// FUNCTION 148657fc0 FUN_148657fc0 body=38 status=ok
// SIG undefined FUN_148657fc0(void)

void FUN_148657fc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1486580fa FUN_1486580fa body=63 status=ok
// SIG undefined FUN_1486580fa(void)

undefined1 FUN_1486580fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148658248(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148658162 FUN_148658162 body=59 status=ok
// SIG undefined FUN_148658162(void)

undefined8 FUN_148658162(longlong *param_1)

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



// FUNCTION 1486581ae FUN_1486581ae body=38 status=ok
// SIG undefined FUN_1486581ae(void)

void FUN_1486581ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_140c3bb74(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148658222 FUN_148658222 body=38 status=ok
// SIG undefined FUN_148658222(void)

undefined8 FUN_148658222(undefined8 param_1,int param_2)

{
  FUN_140c3bb74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


