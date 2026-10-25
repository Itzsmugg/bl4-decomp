// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14945980e FUN_14945980e body=59 status=ok
// SIG undefined FUN_14945980e(void)

undefined8 FUN_14945980e(longlong *param_1)

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



// FUNCTION 149459854 FUN_149459854 body=37 status=ok
// SIG undefined FUN_149459854(void)

void FUN_149459854(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1494598c8 FUN_1494598c8 body=79 status=ok
// SIG undefined FUN_1494598c8(void)

undefined8 * FUN_1494598c8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149459918(param_1,iVar1);
      FUN_14945997a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149459918 FUN_149459918 body=98 status=ok
// SIG undefined FUN_149459918(void)

void FUN_149459918(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14945997a FUN_14945997a body=78 status=ok
// SIG undefined FUN_14945997a(void)

void FUN_14945997a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 149459a0a FUN_149459a0a body=60 status=ok
// SIG undefined FUN_149459a0a(void)

undefined1 FUN_149459a0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 149459a6e FUN_149459a6e body=59 status=ok
// SIG undefined FUN_149459a6e(void)

undefined8 FUN_149459a6e(longlong *param_1)

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



// FUNCTION 149459ab4 FUN_149459ab4 body=37 status=ok
// SIG undefined FUN_149459ab4(void)

void FUN_149459ab4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 149459b3a FUN_149459b3a body=44 status=ok
// SIG undefined FUN_149459b3a(void)

void FUN_149459b3a(undefined8 param_1,longlong *param_2)

{
  FUN_1458184ed(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149459b7c FUN_149459b7c body=54 status=ok
// SIG undefined FUN_149459b7c(void)

undefined1 FUN_149459b7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149459c76(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149459bda FUN_149459bda body=59 status=ok
// SIG undefined FUN_149459bda(void)

undefined8 FUN_149459bda(longlong *param_1)

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



// FUNCTION 149459c76 FUN_149459c76 body=95 status=ok
// SIG undefined FUN_149459c76(void)

undefined8 * FUN_149459c76(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458184ed(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149459cd6(param_1,iVar1);
      FUN_149459d49(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149459cd6 FUN_149459cd6 body=115 status=ok
// SIG undefined FUN_149459cd6(void)

void FUN_149459cd6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149459d49 FUN_149459d49 body=124 status=ok
// SIG undefined FUN_149459d49(void)

void FUN_149459d49(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -8);
      _Src = *(void **)(puVar2 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined1 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149459dc6 FUN_149459dc6 body=50 status=ok
// SIG undefined FUN_149459dc6(void)

void FUN_149459dc6(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1458184ed(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149459e10 FUN_149459e10 body=47 status=ok
// SIG undefined FUN_149459e10(void)

void FUN_149459e10(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149459e56 FUN_149459e56 body=67 status=ok
// SIG undefined FUN_149459e56(void)

undefined1 FUN_149459e56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 149459ec2 FUN_149459ec2 body=59 status=ok
// SIG undefined FUN_149459ec2(void)

undefined8 FUN_149459ec2(longlong *param_1)

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



// FUNCTION 149459f60 FUN_149459f60 body=51 status=ok
// SIG undefined FUN_149459f60(void)

void FUN_149459f60(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 149459fa4 FUN_149459fa4 body=44 status=ok
// SIG undefined FUN_149459fa4(void)

void FUN_149459fa4(undefined8 param_1,longlong *param_2)

{
  FUN_14581851a(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149459fe6 FUN_149459fe6 body=54 status=ok
// SIG undefined FUN_149459fe6(void)

undefined1 FUN_149459fe6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14945a0e0(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14945a044 FUN_14945a044 body=59 status=ok
// SIG undefined FUN_14945a044(void)

undefined8 FUN_14945a044(longlong *param_1)

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



// FUNCTION 14945a0e0 FUN_14945a0e0 body=95 status=ok
// SIG undefined FUN_14945a0e0(void)

undefined8 * FUN_14945a0e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14581851a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14945a140(param_1,iVar1);
      FUN_14945a1a2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14945a140 FUN_14945a140 body=98 status=ok
// SIG undefined FUN_14945a140(void)

void FUN_14945a140(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14945a1a2 FUN_14945a1a2 body=52 status=ok
// SIG undefined FUN_14945a1a2(void)

void FUN_14945a1a2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14945a1d6(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 14945a1d6 FUN_14945a1d6 body=156 status=ok
// SIG undefined FUN_14945a1d6(void)

undefined8 * FUN_14945a1d6(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14945a274 FUN_14945a274 body=50 status=ok
// SIG undefined FUN_14945a274(void)

void FUN_14945a274(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_14581851a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14945a306 FUN_14945a306 body=42 status=ok
// SIG undefined FUN_14945a306(void)

void FUN_14945a306(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14577537e(param_2);
  return;
}



// FUNCTION 14945a346 FUN_14945a346 body=74 status=ok
// SIG undefined FUN_14945a346(void)

undefined8 FUN_14945a346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14945a484(param_2,param_3);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14945a3b8 FUN_14945a3b8 body=59 status=ok
// SIG undefined FUN_14945a3b8(void)

undefined8 FUN_14945a3b8(longlong *param_1)

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



// FUNCTION 14945a3fe FUN_14945a3fe body=55 status=ok
// SIG undefined FUN_14945a3fe(void)

void FUN_14945a3fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14577537e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14945a484 FUN_14945a484 body=122 status=ok
// SIG undefined FUN_14945a484(void)

longlong FUN_14945a484(longlong param_1,longlong param_2)

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
    FUN_14945a4fe(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14945a4fe FUN_14945a4fe body=202 status=ok
// SIG undefined FUN_14945a4fe(void)

undefined8 * FUN_14945a4fe(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145775430(param_1,(ulonglong)uVar1);
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
          FUN_14945a5c8(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14945a5c8 FUN_14945a5c8 body=103 status=ok
// SIG undefined FUN_14945a5c8(void)

undefined8 * FUN_14945a5c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 14945a630 FUN_14945a630 body=38 status=ok
// SIG undefined FUN_14945a630(void)

undefined8 FUN_14945a630(undefined8 param_1,int param_2)

{
  FUN_14099d7b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14945a656 FUN_14945a656 body=61 status=ok
// SIG undefined FUN_14945a656(void)

ulonglong * FUN_14945a656(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_1407b78d0(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 14945a694 FUN_14945a694 body=38 status=ok
// SIG undefined FUN_14945a694(void)

undefined8 FUN_14945a694(undefined8 param_1,int param_2)

{
  FUN_14945a6ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14945a6ba FUN_14945a6ba body=167 status=ok
// SIG undefined FUN_14945a6ba(void)

void FUN_14945a6ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcdbfa0;
  FUN_14945a761(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14945a788(param_1 + 1);
  return;
}



// FUNCTION 14945a761 FUN_14945a761 body=38 status=ok
// SIG undefined FUN_14945a761(void)

void FUN_14945a761(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149457c42(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 14945a788 FUN_14945a788 body=52 status=ok
// SIG undefined FUN_14945a788(void)

void FUN_14945a788(longlong *param_1)

{
  FUN_14945a7bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14945a7bc FUN_14945a7bc body=337 status=ok
// SIG undefined FUN_14945a7bc(void)

void FUN_14945a7bc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_14945a90e(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945a90e FUN_14945a90e body=38 status=ok
// SIG undefined FUN_14945a90e(void)

void FUN_14945a90e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149457bda(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 14945a98a FUN_14945a98a body=70 status=ok
// SIG undefined FUN_14945a98a(void)

void FUN_14945a98a(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1410a73e0(*param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945aa6c FUN_14945aa6c body=54 status=ok
// SIG undefined FUN_14945aa6c(void)

undefined1 FUN_14945aa6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14945aaca FUN_14945aaca body=59 status=ok
// SIG undefined FUN_14945aaca(void)

undefined8 FUN_14945aaca(longlong *param_1)

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



// FUNCTION 14945ab10 FUN_14945ab10 body=37 status=ok
// SIG undefined FUN_14945ab10(void)

void FUN_14945ab10(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14945abbc FUN_14945abbc body=67 status=ok
// SIG undefined FUN_14945abbc(void)

undefined1 FUN_14945abbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    FUN_14945acde(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14945ac28 FUN_14945ac28 body=59 status=ok
// SIG undefined FUN_14945ac28(void)

undefined8 FUN_14945ac28(longlong *param_1)

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



// FUNCTION 14945ac6e FUN_14945ac6e body=34 status=ok
// SIG undefined FUN_14945ac6e(void)

void FUN_14945ac6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_145b26c5e(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14945acde FUN_14945acde body=95 status=ok
// SIG undefined FUN_14945acde(void)

undefined8 * FUN_14945acde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b26c9a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14945ad3e(param_1,iVar1);
      FUN_14945ada0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14945ad3e FUN_14945ad3e body=98 status=ok
// SIG undefined FUN_14945ad3e(void)

void FUN_14945ad3e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14945ada0 FUN_14945ada0 body=115 status=ok
// SIG undefined FUN_14945ada0(void)

void FUN_14945ada0(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_1447a127e(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14945ae5e FUN_14945ae5e body=78 status=ok
// SIG undefined FUN_14945ae5e(void)

undefined8 FUN_14945ae5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0xb) = *(undefined8 *)(param_3 + -0xb);
      *(undefined8 *)(param_2 + -0x10) = uVar1;
      FUN_14945af9a(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14945aed4 FUN_14945aed4 body=70 status=ok
// SIG undefined FUN_14945aed4(void)

void FUN_14945aed4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1410a73e0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945af26 FUN_14945af26 body=38 status=ok
// SIG undefined FUN_14945af26(void)

void FUN_14945af26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14945af9a FUN_14945af9a body=88 status=ok
// SIG undefined FUN_14945af9a(void)

undefined8 * FUN_14945af9a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14945aff2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14945aff2 FUN_14945aff2 body=98 status=ok
// SIG undefined FUN_14945aff2(void)

void FUN_14945aff2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14945b066 FUN_14945b066 body=47 status=ok
// SIG undefined FUN_14945b066(void)

void FUN_14945b066(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14945b0ac FUN_14945b0ac body=83 status=ok
// SIG undefined FUN_14945b0ac(void)

undefined8 FUN_14945b0ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined8 *)(param_3 + 0x25);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x25) = uVar1;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 14945b128 FUN_14945b128 body=59 status=ok
// SIG undefined FUN_14945b128(void)

undefined8 FUN_14945b128(longlong *param_1)

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



// FUNCTION 14945b1c6 FUN_14945b1c6 body=51 status=ok
// SIG undefined FUN_14945b1c6(void)

void FUN_14945b1c6(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 14945b228 FUN_14945b228 body=73 status=ok
// SIG undefined FUN_14945b228(void)

undefined1 FUN_14945b228(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_14945b38a(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 14945b29a FUN_14945b29a body=59 status=ok
// SIG undefined FUN_14945b29a(void)

undefined8 FUN_14945b29a(longlong *param_1)

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



// FUNCTION 14945b2e0 FUN_14945b2e0 body=32 status=ok
// SIG undefined FUN_14945b2e0(void)

void FUN_14945b2e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_14945b34e(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14945b34e FUN_14945b34e body=59 status=ok
// SIG undefined FUN_14945b34e(void)

void FUN_14945b34e(longlong *param_1)

{
  FUN_1411611a0(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14945b38a FUN_14945b38a body=93 status=ok
// SIG undefined FUN_14945b38a(void)

undefined8 * FUN_14945b38a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1411611a0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14945b3e8(param_1,iVar1);
      FUN_14945b45b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14945b3e8 FUN_14945b3e8 body=115 status=ok
// SIG undefined FUN_14945b3e8(void)

void FUN_14945b3e8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14945b45b FUN_14945b45b body=52 status=ok
// SIG undefined FUN_14945b45b(void)

void FUN_14945b45b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14945b490(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 14945b490 FUN_14945b490 body=176 status=ok
// SIG undefined FUN_14945b490(void)

undefined8 * FUN_14945b490(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[4];
  *(undefined8 *)((longlong)param_1 + 0x25) = *(undefined8 *)((longlong)param_2 + 0x25);
  param_1[4] = uVar3;
  return param_1;
}



// FUNCTION 14945b542 FUN_14945b542 body=132 status=ok
// SIG undefined FUN_14945b542(void)

void FUN_14945b542(longlong param_1,int param_2)

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



// FUNCTION 14945b5c8 FUN_14945b5c8 body=31 status=ok
// SIG undefined FUN_14945b5c8(void)

undefined8 FUN_14945b5c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14945b604 FUN_14945b604 body=93 status=ok
// SIG undefined FUN_14945b604(void)

void FUN_14945b604(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcdcd30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14945b662 FUN_14945b662 body=126 status=ok
// SIG undefined FUN_14945b662(void)

void FUN_14945b662(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcdcd30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014945b6d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14945b6e0 FUN_14945b6e0 body=21 status=ok
// SIG undefined FUN_14945b6e0(void)

undefined8 FUN_14945b6e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14945b6f6 FUN_14945b6f6 body=62 status=ok
// SIG undefined FUN_14945b6f6(void)

void FUN_14945b6f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14945b734(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14945b734 FUN_14945b734 body=93 status=ok
// SIG undefined FUN_14945b734(void)

ulonglong FUN_14945b734(uint param_1,uint param_2)

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



// FUNCTION 14945b792 FUN_14945b792 body=132 status=ok
// SIG undefined FUN_14945b792(void)

void FUN_14945b792(longlong param_1,int param_2)

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



// FUNCTION 14945b818 FUN_14945b818 body=62 status=ok
// SIG undefined FUN_14945b818(void)

void FUN_14945b818(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14945b856(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14945b856 FUN_14945b856 body=93 status=ok
// SIG undefined FUN_14945b856(void)

ulonglong FUN_14945b856(uint param_1,uint param_2)

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



// FUNCTION 14945b8b4 FUN_14945b8b4 body=48 status=ok
// SIG undefined FUN_14945b8b4(void)

void FUN_14945b8b4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 14945b8e4 FUN_14945b8e4 body=143 status=ok
// SIG undefined FUN_14945b8e4(void)

void FUN_14945b8e4(longlong param_1,int param_2)

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



// FUNCTION 14945b974 FUN_14945b974 body=48 status=ok
// SIG undefined FUN_14945b974(void)

void FUN_14945b974(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14945b9a4 FUN_14945b9a4 body=132 status=ok
// SIG undefined FUN_14945b9a4(void)

void FUN_14945b9a4(longlong param_1,int param_2)

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



// FUNCTION 14945ba2a FUN_14945ba2a body=89 status=ok
// SIG undefined FUN_14945ba2a(void)

void FUN_14945ba2a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14945ba84 FUN_14945ba84 body=181 status=ok
// SIG undefined FUN_14945ba84(void)

longlong FUN_14945ba84(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_14945bb1c;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14945bb3a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_14945bb1c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14945bb3a FUN_14945bb3a body=286 status=ok
// SIG undefined FUN_14945bb3a(void)

undefined4 * FUN_14945bb3a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_14945bc5a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_14945a90e(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_14945bd40(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_14945be60(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945bc5a FUN_14945bc5a body=229 status=ok
// SIG undefined FUN_14945bc5a(void)

int * FUN_14945bc5a(longlong *param_1,int *param_2)

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



// FUNCTION 14945bd40 FUN_14945bd40 body=174 status=ok
// SIG undefined FUN_14945bd40(void)

undefined8 FUN_14945bd40(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_14945a90e(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14945bdee(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14945bdee FUN_14945bdee body=114 status=ok
// SIG undefined FUN_14945bdee(void)

void FUN_14945bdee(longlong *param_1,int param_2)

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



// FUNCTION 14945be60 FUN_14945be60 body=476 status=ok
// SIG undefined FUN_14945be60(void)

void FUN_14945be60(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14945c03d FUN_14945c03d body=26 status=ok
// SIG undefined FUN_14945c03d(void)

void FUN_14945c03d(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 14945c058 FUN_14945c058 body=132 status=ok
// SIG undefined FUN_14945c058(void)

void FUN_14945c058(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14945c0de FUN_14945c0de body=115 status=ok
// SIG undefined FUN_14945c0de(void)

void FUN_14945c0de(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x60 + lVar1);
  FUN_149457c42(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x60),(longlong)iVar3 * 0x60);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14945c152 FUN_14945c152 body=62 status=ok
// SIG undefined FUN_14945c152(void)

void FUN_14945c152(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14945c190(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,0x10);
  }
  return;
}



// FUNCTION 14945c190 FUN_14945c190 body=112 status=ok
// SIG undefined FUN_14945c190(void)

ulonglong FUN_14945c190(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14945c1ca;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,0x10);
      param_2 = param_2 / 0x60;
    }
  }
LAB_14945c1ca:
  return param_2 & 0xffffffff;
}



// FUNCTION 14945c200 FUN_14945c200 body=95 status=ok
// SIG undefined FUN_14945c200(void)

void FUN_14945c200(longlong param_1,uint param_2)

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



// FUNCTION 14945c260 FUN_14945c260 body=48 status=ok
// SIG undefined FUN_14945c260(void)

void FUN_14945c260(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14945c290 FUN_14945c290 body=132 status=ok
// SIG undefined FUN_14945c290(void)

void FUN_14945c290(longlong param_1,int param_2)

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



// FUNCTION 14945c316 FUN_14945c316 body=132 status=ok
// SIG undefined FUN_14945c316(void)

void FUN_14945c316(longlong param_1,int param_2)

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



// FUNCTION 14945c39b FUN_14945c39b body=19 status=ok
// SIG undefined FUN_14945c39b(void)

void FUN_14945c39b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 14945c3ae FUN_14945c3ae body=243 status=ok
// SIG undefined FUN_14945c3ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14945c3ae(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar2 = (ulonglong)param_2 - 1;
    auVar4._8_4_ = (int)lVar2;
    auVar4._0_8_ = lVar2;
    auVar4._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x302);
    auVar7 = pmovsxbq(in_XMM2,0x100);
    auVar4 = auVar4 ^ _DAT_149931e80;
    do {
      lVar2 = auVar4._0_8_;
      lVar5 = auVar4._8_8_;
      if ((bool)(~(lVar2 < (longlong)(uVar3 ^ auVar1._0_8_)) & 1)) {
        *(undefined4 *)(param_1 + uVar3 * 8) = 0;
      }
      auVar8._8_4_ = (int)uVar3;
      auVar8._0_8_ = uVar3;
      auVar8._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ auVar1._8_8_) <= lVar5) {
        *(undefined4 *)(param_1 + 8 + uVar3 * 8) = 0;
      }
      auVar8 = (auVar8 | auVar6) ^ auVar1;
      if (auVar8._0_8_ <= lVar2) {
        *(undefined4 *)(param_1 + 0x10 + uVar3 * 8) = 0;
      }
      if (auVar8._8_8_ <= lVar5) {
        *(undefined4 *)(param_1 + 0x18 + uVar3 * 8) = 0;
      }
      uVar3 = uVar3 + 4;
    } while (((ulonglong)param_2 + 3 & 0xfffffffffffffffc) != uVar3);
  }
  return;
}



// FUNCTION 14945c4a2 FUN_14945c4a2 body=79 status=ok
// SIG undefined FUN_14945c4a2(void)

longlong FUN_14945c4a2(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((ulonglong)uVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_144b3cc66((longlong)*(int *)(param_1 + 0x10) * uVar2 + *(longlong *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0x18));
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14945c4f2 FUN_14945c4f2 body=350 status=ok
// SIG undefined FUN_14945c4f2(void)

void FUN_14945c4f2(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,0x12);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_58 = *(longlong *)(param_3 + 0x48);
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_68 = 2;
  local_60 = param_4;
  local_50 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_60,uVar13);
  *puVar16 = &PTR_FUN_14bcdced0;
  uVar13 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  uVar5 = param_5[4];
  uVar6 = param_5[5];
  uVar7 = param_5[6];
  uVar8 = param_5[7];
  uVar9 = param_5[8];
  uVar10 = param_5[9];
  uVar11 = param_5[10];
  uVar12 = param_5[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_5;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar16);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945c652 FUN_14945c652 body=38 status=ok
// SIG undefined FUN_14945c652(void)

undefined8 FUN_14945c652(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14945c678 FUN_14945c678 body=163 status=ok
// SIG undefined FUN_14945c678(void)

void FUN_14945c678(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1445251ae();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_144525296(param_1,param_2);
  return;
}



// FUNCTION 14945c71b FUN_14945c71b body=374 status=ok
// SIG undefined FUN_14945c71b(void)

void FUN_14945c71b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14945c892 FUN_14945c892 body=48 status=ok
// SIG undefined FUN_14945c892(void)

void FUN_14945c892(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14945c8c2 FUN_14945c8c2 body=147 status=ok
// SIG undefined FUN_14945c8c2(void)

void FUN_14945c8c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14945c956 FUN_14945c956 body=48 status=ok
// SIG undefined FUN_14945c956(void)

void FUN_14945c956(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 14945c9fa FUN_14945c9fa body=152 status=ok
// SIG undefined FUN_14945c9fa(void)

void FUN_14945c9fa(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     ((int)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20) * 0x17 +
                     (int)*(undefined8 *)(param_2 + 8)) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x38 + lVar1;
        cVar2 = FUN_149457db0(lVar5,param_2);
        if (cVar2 != '\0') {
          FUN_14945ca92(param_1,iVar4);
          return;
        }
        iVar4 = *(int *)(lVar5 + 0x30);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 14945ca92 FUN_14945ca92 body=236 status=ok
// SIG undefined FUN_14945ca92(void)

void FUN_14945ca92(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar2 = *param_1;
  lVar5 = (longlong)param_2 * 0x38;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar9 = (longlong)*(int *)(lVar2 + 0x34 + lVar5);
  iVar8 = *(int *)((longlong)plVar4 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar6 = (undefined4 *)((longlong)plVar4 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar2 + 0x30 + lVar9 * 0x38);
    } while (iVar8 != param_2);
    puVar6 = (undefined4 *)(lVar2 + lVar9 * 0x38 + 0x30);
  }
  *puVar6 = *(undefined4 *)(lVar2 + lVar5 + 0x30);
  FUN_144a886ae(*param_1 + lVar5 + 0x10);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14945cb0a FUN_14945cb0a body=262 status=ok
// SIG undefined FUN_14945cb0a(void)

undefined4 * FUN_14945cb0a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 14945cc10 FUN_14945cc10 body=147 status=ok
// SIG undefined FUN_14945cc10(void)

void FUN_14945cc10(longlong param_1,int param_2)

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



// FUNCTION 14945cca4 FUN_14945cca4 body=142 status=ok
// SIG undefined FUN_14945cca4(void)

void FUN_14945cca4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 1;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}



// FUNCTION 14945cd32 FUN_14945cd32 body=143 status=ok
// SIG undefined FUN_14945cd32(void)

void FUN_14945cd32(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 4;
  return;
}



// FUNCTION 14945cdc2 FUN_14945cdc2 body=143 status=ok
// SIG undefined FUN_14945cdc2(void)

void FUN_14945cdc2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 7U & 0xfffffff8;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 8;
  return;
}



// FUNCTION 14945ce52 FUN_14945ce52 body=143 status=ok
// SIG undefined FUN_14945ce52(void)

void FUN_14945ce52(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 14945cee2 FUN_14945cee2 body=143 status=ok
// SIG undefined FUN_14945cee2(void)

void FUN_14945cee2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 4;
  return;
}



// FUNCTION 14945cf72 FUN_14945cf72 body=143 status=ok
// SIG undefined FUN_14945cf72(void)

void FUN_14945cf72(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 7U & 0xfffffff8;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 8;
  return;
}



// FUNCTION 14945d002 FUN_14945d002 body=143 status=ok
// SIG undefined FUN_14945d002(void)

void FUN_14945d002(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 14945d092 FUN_14945d092 body=143 status=ok
// SIG undefined FUN_14945d092(void)

void FUN_14945d092(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 3U & 0xfffffffc;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 4;
  return;
}



// FUNCTION 14945d122 FUN_14945d122 body=143 status=ok
// SIG undefined FUN_14945d122(void)

void FUN_14945d122(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 7U & 0xfffffff8;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 8;
  return;
}



// FUNCTION 14945d1b2 FUN_14945d1b2 body=143 status=ok
// SIG undefined FUN_14945d1b2(void)

void FUN_14945d1b2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0xc;
  return;
}



// FUNCTION 14945d242 FUN_14945d242 body=143 status=ok
// SIG undefined FUN_14945d242(void)

void FUN_14945d242(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 14945d2d2 FUN_14945d2d2 body=143 status=ok
// SIG undefined FUN_14945d2d2(void)

void FUN_14945d2d2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar3;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar3 = *(uint *)(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(uint *)(lVar2 + 0x14 + lVar4) = uVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar4) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = 0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 14945d362 FUN_14945d362 body=128 status=ok
// SIG undefined FUN_14945d362(void)

void FUN_14945d362(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc1a940;
  if (DAT_14cc1a974 != 0) {
    *(int *)(DAT_14cc1a940 + (longlong)DAT_14cc1a970 * 0x70) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x70) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc1a974) {
    iVar4 = DAT_14cc1a970;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x70) = iVar4;
  DAT_14cc1a974 = DAT_14cc1a974 + 1;
  puVar3 = &DAT_14cc1a950;
  if (DAT_14cc1a960 != (undefined *)0x0) {
    puVar3 = DAT_14cc1a960;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc1a970 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14945d3e2 FUN_14945d3e2 body=114 status=ok
// SIG undefined FUN_14945d3e2(void)

void FUN_14945d3e2(longlong *param_1,int param_2)

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



// FUNCTION 14945d454 FUN_14945d454 body=96 status=ok
// SIG undefined FUN_14945d454(void)

void FUN_14945d454(longlong param_1,int param_2)

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



// FUNCTION 14945d4b4 FUN_14945d4b4 body=414 status=ok
// SIG undefined FUN_14945d4b4(void)

longlong * FUN_14945d4b4(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14945d690(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 8;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar5 + -8);
      FUN_1410a6f0a(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_14945d690(param_2), 0 < (int)local_3c)) {
      iVar4 = 0;
      do {
        lVar5 = FUN_14945d654(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar5);
        FUN_1410a6f0a(param_1,lVar5 + 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14945d654 FUN_14945d654 body=59 status=ok
// SIG undefined FUN_14945d654(void)

longlong FUN_14945d654(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1460379cc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14945d6ef(lVar2);
  return lVar2;
}



// FUNCTION 14945d690 FUN_14945d690 body=95 status=ok
// SIG undefined FUN_14945d690(void)

void FUN_14945d690(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14945d6ef FUN_14945d6ef body=7 status=ok
// SIG undefined FUN_14945d6ef(void)

void FUN_14945d6ef(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14945d6f6 FUN_14945d6f6 body=147 status=ok
// SIG undefined FUN_14945d6f6(void)

void FUN_14945d6f6(longlong param_1,int param_2)

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



// FUNCTION 14945d78e thunk_FUN_149456f7d body=5 status=ok
// SIG undefined thunk_FUN_149456f7d(void)

bool thunk_FUN_149456f7d(void)

{
  return DAT_14cc17420 != 0 && 0 < DAT_14c765cec;
}



// FUNCTION 14945d794 FUN_14945d794 body=140 status=ok
// SIG undefined FUN_14945d794(void)

longlong * FUN_14945d794(longlong param_1,longlong *param_2,char *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145a962c8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) goto LAB_14945d80c;
  }
  if (((*(char *)(lVar2 + 0x38) == '\x02') ||
      ((*(char *)(lVar2 + 0x38) == '\x01' && (*param_3 == '\x01')))) &&
     (((param_3[1] == '\x01' && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) ||
      (lVar2 = *(longlong *)(param_1 + 8), lVar2 != 0)))) {
    *param_2 = lVar2;
    if (DAT_14c950c29 != '\x01') {
      return param_2;
    }
    FUN_14689c22e();
    return param_2;
  }
LAB_14945d80c:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14945d820 FUN_14945d820 body=36 status=ok
// SIG undefined FUN_14945d820(void)

undefined8 FUN_14945d820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14945d85c FUN_14945d85c body=101 status=ok
// SIG undefined FUN_14945d85c(void)

void FUN_14945d85c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcdd850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14945d8c2 FUN_14945d8c2 body=101 status=ok
// SIG undefined FUN_14945d8c2(void)

void FUN_14945d8c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcdd850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14945d928 FUN_14945d928 body=131 status=ok
// SIG undefined FUN_14945d928(void)

void FUN_14945d928(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcdd850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14945d9bc FUN_14945d9bc body=36 status=ok
// SIG undefined FUN_14945d9bc(void)

undefined8 FUN_14945d9bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14945d9fc FUN_14945d9fc body=93 status=ok
// SIG undefined FUN_14945d9fc(void)

void FUN_14945d9fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcdd8c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14945da5a FUN_14945da5a body=123 status=ok
// SIG undefined FUN_14945da5a(void)

void FUN_14945da5a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcdd8c0;
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



// FUNCTION 14945dad6 FUN_14945dad6 body=21 status=ok
// SIG undefined FUN_14945dad6(void)

undefined8 FUN_14945dad6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14945daec FUN_14945daec body=50 status=ok
// SIG undefined FUN_14945daec(void)

longlong FUN_14945daec(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145cb4190(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14945dbbe FUN_14945dbbe body=69 status=ok
// SIG undefined FUN_14945dbbe(void)

void FUN_14945dbbe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar2 = FUN_144828ac0(*param_2,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar1 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar1 * 0x14));
  FUN_14945dc34(*(undefined8 *)(param_1 + 0xc0),uVar2);
  return;
}



// FUNCTION 14945dc04 FUN_14945dc04 body=47 status=ok
// SIG undefined FUN_14945dc04(void)

void FUN_14945dc04(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14945dc34(param_1 + 0x10,param_1 + 0x1f0);
  return;
}



// FUNCTION 14945dc34 FUN_14945dc34 body=1214 status=ok
// SIG undefined FUN_14945dc34(void)

void FUN_14945dc34(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  void *local_e0;
  undefined8 local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 *local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong local_98;
  int local_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    FUN_1412e3d1e(&local_108);
    *param_2 = (int)local_108;
    param_2[1] = local_108._4_4_;
    param_2[2] = (int)uStack_100;
    param_2[3] = uStack_100._4_4_;
  }
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 != 0) {
    lVar6 = FUN_144a74fb4();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      iVar2 = *(int *)(param_1 + 0xf0);
      plVar11 = *(longlong **)(param_1 + 0xe8);
      lVar6 = (longlong)iVar2 << 5;
      plVar12 = plVar11;
      local_130 = lVar6;
      local_120 = param_1;
      lVar9 = (longlong)iVar2;
      while (lVar9 != 0) {
        cVar5 = FUN_149482e66(plVar12);
        if ((cVar5 != '\0') && (local_128 = *plVar12, local_128 != 0)) goto LAB_14945dd23;
        plVar12 = plVar12 + 4;
        lVar6 = lVar6 + -0x20;
        lVar9 = lVar6;
      }
      local_128 = 0;
LAB_14945dd23:
      FUN_144525fe2(&local_98,lVar3,*(undefined1 *)(local_128 + 0x20),
                    *(undefined8 *)(local_128 + 0x24));
      lVar6 = local_98;
      lVar9 = (longlong)local_90;
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          lVar8 = *(longlong *)(lVar6 + lVar10);
          if (((0 < *(int *)(lVar8 + 0x6b8)) && ((longlong)**(char **)(lVar8 + 0x6b0) != -1)) &&
             (lVar8 = *(longlong *)
                       (*(longlong *)(lVar8 + 0x6a0) + (longlong)**(char **)(lVar8 + 0x6b0) * 8),
             lVar8 != 0)) {
            lVar7 = FUN_145ba3e1e();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              local_a8 = *param_2;
              iStack_a4 = param_2[1];
              iStack_a0 = param_2[2];
              iStack_9c = param_2[3];
              FUN_1494b3616(lVar8,&local_a8,*(undefined1 *)(local_128 + 0x18),
                            *(undefined4 *)(local_128 + 0x1c));
            }
          }
          lVar10 = lVar10 + 8;
        } while (lVar9 * 8 != lVar10);
      }
      if (iVar2 != 0) {
        plVar12 = (longlong *)(local_130 + (longlong)plVar11);
        do {
          cVar5 = FUN_149482ec6(plVar11);
          if ((cVar5 == '\0') || (lVar6 = *plVar11, lVar6 == 0)) {
            cVar5 = FUN_149482f64(plVar11);
            lVar6 = local_98;
            if ((cVar5 != '\0') &&
               ((plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0 &&
                (lVar9 = (longlong)local_90, lVar9 != 0)))) {
              lVar10 = 0;
              do {
                lVar8 = *(longlong *)(lVar6 + lVar10);
                if (((0 < *(int *)(lVar8 + 0x6b8)) && ((longlong)**(char **)(lVar8 + 0x6b0) != -1))
                   && (local_130 = *(longlong *)
                                    (*(longlong *)(lVar8 + 0x6a0) +
                                    (longlong)**(char **)(lVar8 + 0x6b0) * 8), local_130 != 0)) {
                  lVar8 = FUN_145ba3e1e();
                  if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(local_130 + 0x10) + 0x38))
                      && (*(longlong *)
                           (*(longlong *)(*(longlong *)(local_130 + 0x10) + 0x30) +
                           (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) &&
                     (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0)) {
                    local_118 = *param_2;
                    iStack_114 = param_2[1];
                    iStack_110 = param_2[2];
                    iStack_10c = param_2[3];
                    lVar8 = FUN_1494b35c2(local_130);
                    if (lVar8 != 0) {
                      (**(code **)(*plVar4 + 0x80))(plVar4,lVar8);
                    }
                  }
                }
                lVar10 = lVar10 + 8;
              } while (lVar9 << 3 != lVar10);
            }
          }
          else if (*(longlong *)(lVar6 + 0x20) != 0) {
            local_108 = 0;
            FUN_14485c47a(&local_108,lVar3);
            uStack_100 = 0;
            FUN_14485c47a(&uStack_100,*(undefined8 *)(local_120 + 0x1b8));
            local_f8 = *(undefined8 *)(lVar6 + 0x18);
            local_f0 = *(undefined4 *)(lVar6 + 0x20);
            uStack_ec = *(undefined4 *)(lVar6 + 0x24);
            uStack_e8 = *(undefined4 *)(lVar6 + 0x28);
            uStack_e4 = *(undefined4 *)(lVar6 + 0x2c);
            local_e0 = (void *)0x0;
            iVar2 = *(int *)(lVar6 + 0x38);
            _Src = *(void **)(lVar6 + 0x30);
            local_d8._0_4_ = iVar2;
            if ((longlong)iVar2 == 0) {
              local_d8._4_4_ = 0;
            }
            else {
              FUN_1446dd670(&local_e0,iVar2,0);
              memcpy(local_e0,_Src,(longlong)iVar2 * 2);
            }
            local_d0 = *param_2;
            iStack_cc = param_2[1];
            iStack_c8 = param_2[2];
            iStack_c4 = param_2[3];
            local_c0 = CONCAT31(local_c0._1_3_,*(undefined1 *)(local_128 + 0x20));
            local_bc = *(undefined8 *)(local_128 + 0x24);
            local_88[0] = (code *)0x0;
            local_78 = (undefined8 *)0x0;
            local_78 = (undefined8 *)FUN_14001cc68(0x60,8);
            *local_78 = &PTR_LAB_14bcfd870;
            local_78[1] = local_108;
            local_78[2] = uStack_100;
            local_78[3] = local_f8;
            local_78[4] = CONCAT44(uStack_ec,local_f0);
            local_78[5] = CONCAT44(uStack_e4,uStack_e8);
            local_78[6] = local_e0;
            local_e0 = (void *)0x0;
            *(int *)(local_78 + 7) = (int)local_d8;
            *(undefined4 *)((longlong)local_78 + 0x3c) = local_d8._4_4_;
            local_d8 = 0;
            *(int *)((longlong)local_78 + 0x4c) = iStack_c4;
            *(undefined4 *)(local_78 + 10) = local_c0;
            *(undefined4 *)((longlong)local_78 + 0x54) = (undefined4)local_bc;
            *(undefined4 *)(local_78 + 0xb) = local_bc._4_4_;
            *(int *)(local_78 + 8) = local_d0;
            *(int *)((longlong)local_78 + 0x44) = iStack_cc;
            *(int *)(local_78 + 9) = iStack_c8;
            *(int *)((longlong)local_78 + 0x4c) = iStack_c4;
            if (local_78 + 1 != (undefined8 *)0x0) {
              local_88[0] = FUN_14452737c;
            }
            local_138 = 1;
            FUN_14014aede(&local_b0,local_88);
            if (local_b0 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_b0 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_b0)(local_b0,1);
              }
            }
            if (local_e0 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          plVar11 = plVar11 + 4;
        } while (plVar11 != plVar12);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945e0fa FUN_14945e0fa body=101 status=ok
// SIG undefined FUN_14945e0fa(void)

undefined8 * FUN_14945e0fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bce9c00;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14945e160 FUN_14945e160 body=174 status=ok
// SIG undefined FUN_14945e160(void)

undefined8 * FUN_14945e160(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  local_30 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_30[1] = &DAT_100000001;
  *local_30 = &PTR_LAB_14bcfe3d0;
  local_30[2] = param_3;
  FUN_14945e210(param_1,&local_38);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = (longlong)(*(int *)(param_1 + 0x20) + -1) * 0x10;
  *param_2 = *(undefined8 *)(lVar1 + lVar2);
  lVar1 = *(longlong *)(lVar1 + 8 + lVar2);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945e210 FUN_14945e210 body=128 status=ok
// SIG undefined FUN_14945e210(void)

void FUN_14945e210(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_14947b622((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014945e277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14945e290 FUN_14945e290 body=128 status=ok
// SIG undefined FUN_14945e290(void)

ulonglong FUN_14945e290(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar5);
      cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
      if (cVar2 == '\0') {
        if (lVar4 != 0) {
          lVar4 = lVar4 + 1;
          do {
            plVar1 = *(longlong **)
                      (*(longlong *)(param_1 + 0x18) + (ulonglong)((int)lVar4 - 2) * 0x10);
            (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
            lVar4 = lVar4 + -1;
          } while (1 < lVar4);
        }
        uVar3 = 0;
        break;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14945e310 FUN_14945e310 body=123 status=ok
// SIG undefined FUN_14945e310(void)

bool FUN_14945e310(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x20);
  lVar3 = uVar6 * 0x10 + 0x10;
  do {
    iVar4 = (int)uVar6;
    if (iVar4 < 1) goto LAB_14945e379;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -0x20 + lVar3);
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    lVar3 = lVar3 + -0x10;
    uVar6 = (ulonglong)(iVar4 - 1);
    iVar5 = iVar4;
  } while (cVar2 != '\0');
  for (; iVar5 < *(int *)(param_1 + 0x20); iVar5 = iVar5 + 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3);
    (**(code **)(*plVar1 + 8))(plVar1,param_2);
    lVar3 = lVar3 + 0x10;
  }
LAB_14945e379:
  return iVar4 < 1;
}



// FUNCTION 14945e38c FUN_14945e38c body=208 status=ok
// SIG undefined FUN_14945e38c(void)

undefined8 * FUN_14945e38c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bce9fc0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    FUN_1414d7078(*(undefined8 *)(param_2 + 0x10),&local_38);
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_34;
    *(int *)(param_1 + 5) = iStack_30;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_2c;
    param_1[3] = param_3;
    FUN_1400021e4(param_1 + 3,&local_38);
    if (iStack_30 == 0) {
      local_40 = &DAT_149dfb77a;
    }
    else {
      local_40 = (undefined2 *)CONCAT44(uStack_34,local_38);
    }
    FUN_14945e45e(param_1);
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945e45e FUN_14945e45e body=139 status=ok
// SIG undefined FUN_14945e45e(void)

void FUN_14945e45e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Add component binding \'%s\'",*param_2);
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945e4ea FUN_14945e4ea body=20 status=ok
// SIG undefined FUN_14945e4ea(void)

void FUN_14945e4ea(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014945e4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x18),*(code **)(*param_2 + 0x40));
  return;
}



// FUNCTION 14945e4fe FUN_14945e4fe body=280 status=ok
// SIG undefined FUN_14945e4fe(void)

undefined8 FUN_14945e4fe(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == (longlong *)0x0) || (lVar2 = (**(code **)(*param_2 + 8))(param_2), lVar2 == 0)) {
LAB_14945e54f:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14945e54f;
  }
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = FUN_144a797b2();
  uVar6 = 0;
  lVar3 = FUN_140be8491(uVar4,&local_38,0);
  if (lVar3 == 0) goto LAB_14945e59d;
  lVar5 = FUN_144a797b2();
  if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    lVar5 = *(longlong *)(lVar3 + 0x110);
    if (lVar5 == 0) {
      FUN_140aa6c08(lVar3);
      lVar5 = *(longlong *)(lVar3 + 0x110);
      if (lVar5 == 0) goto LAB_14945e59b;
    }
    lVar3 = FUN_1494adbc4(lVar2,lVar5,*(undefined8 *)(param_1 + 0x18));
    if (lVar3 != 0) {
      cVar1 = FUN_1494adcd6(lVar2,lVar3,0xffffffff);
      uVar6 = 1;
      if (cVar1 != '\0') goto LAB_14945e59d;
      FUN_1494acfa0(lVar3);
    }
  }
LAB_14945e59b:
  uVar6 = 0;
LAB_14945e59d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14945e618 FUN_14945e618 body=112 status=ok
// SIG undefined FUN_14945e618(void)

undefined8 FUN_14945e618(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f36a4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14945e66e;
    }
  }
  lVar2 = 0;
LAB_14945e66e:
  uVar4 = FUN_1494ade78(lVar2,lVar1);
  return uVar4;
}



// FUNCTION 14945e688 FUN_14945e688 body=112 status=ok
// SIG undefined FUN_14945e688(void)

undefined8 FUN_14945e688(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f36a4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14945e6de;
    }
  }
  lVar2 = 0;
LAB_14945e6de:
  uVar4 = FUN_1494ade78(lVar2,lVar1);
  return uVar4;
}



// FUNCTION 14945e6f8 FUN_14945e6f8 body=297 status=ok
// SIG undefined FUN_14945e6f8(void)

undefined8 FUN_14945e6f8(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == (longlong *)0x0) || (lVar2 = (**(code **)(*param_2 + 8))(param_2), lVar2 == 0)) {
LAB_14945e749:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14945e749;
  }
  local_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  uStack_30 = *(undefined4 *)(param_1 + 0x28);
  uStack_2c = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = FUN_144a797b2();
  uVar6 = 0;
  lVar3 = FUN_140be8491(uVar4,&local_38,0);
  if (lVar3 == 0) goto LAB_14945e797;
  lVar5 = FUN_144a797b2();
  if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    lVar5 = *(longlong *)(lVar3 + 0x110);
    if (lVar5 == 0) {
      FUN_140aa6c08(lVar3);
      lVar5 = *(longlong *)(lVar3 + 0x110);
      if (lVar5 == 0) goto LAB_14945e795;
    }
    lVar3 = FUN_1494adbc4(lVar2,lVar5,*(undefined8 *)(param_1 + 0x18));
    if (lVar3 != 0) {
      FUN_1406fa324(lVar3 + 0x38,param_1 + 0x30);
      cVar1 = FUN_1494adcd6(lVar2,lVar3,*(undefined4 *)(param_1 + 0x40));
      uVar6 = 1;
      if (cVar1 != '\0') goto LAB_14945e797;
      FUN_1494acfa0(lVar3);
    }
  }
LAB_14945e795:
  uVar6 = 0;
LAB_14945e797:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14945e822 FUN_14945e822 body=115 status=ok
// SIG undefined FUN_14945e822(void)

undefined8 FUN_14945e822(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14945e863;
    }
  }
  lVar1 = 0;
LAB_14945e863:
  lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x40))
                    (lVar1 + 0x30,*(undefined8 *)(param_1 + 0x20));
  if (lVar2 != 0) {
    uVar3 = FUN_1494adf52(lVar1,lVar2,*(undefined8 *)(param_1 + 0x18));
    return uVar3;
  }
  return 0;
}



// FUNCTION 14945e896 FUN_14945e896 body=115 status=ok
// SIG undefined FUN_14945e896(void)

undefined8 FUN_14945e896(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14945e8d7;
    }
  }
  lVar1 = 0;
LAB_14945e8d7:
  lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x40))
                    (lVar1 + 0x30,*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    uVar3 = FUN_1494adf52(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20));
    return uVar3;
  }
  return 0;
}



// FUNCTION 14945e90a FUN_14945e90a body=64 status=ok
// SIG undefined FUN_14945e90a(void)

void FUN_14945e90a(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  uStack_10 = *(undefined4 *)(param_1 + 0x28);
  uStack_c = *(undefined4 *)(param_1 + 0x2c);
  FUN_14945e94c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945e94c FUN_14945e94c body=274 status=ok
// SIG undefined FUN_14945e94c(void)

undefined4 FUN_14945e94c(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar2 = FUN_144a797b2();
  uVar1 = 0;
  lVar3 = FUN_140be8491(uVar2,&local_38,0);
  if (lVar3 == 0) goto LAB_14945e9b6;
  lVar4 = FUN_144a797b2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    lVar4 = *(longlong *)(lVar3 + 0x110);
    if (lVar4 == 0) {
      FUN_140aa6c08(lVar3);
      lVar4 = *(longlong *)(lVar3 + 0x110);
      if (lVar4 == 0) goto LAB_14945e9b4;
    }
    if ((param_2 == (longlong *)0x0) || (lVar3 = (**(code **)(*param_2 + 8))(param_2), lVar3 == 0))
    {
LAB_14945ea1b:
      lVar3 = 0;
    }
    else {
      lVar5 = FUN_1458f36a4();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_14945ea1b;
    }
    lVar5 = (**(code **)(*(longlong *)(lVar3 + 0x30) + 0x40))
                      (lVar3 + 0x30,*(undefined8 *)(param_1 + 0x18));
    if (lVar5 != 0) {
      uVar1 = FUN_1494ae058(lVar3,lVar5,lVar4);
      goto LAB_14945e9b6;
    }
  }
LAB_14945e9b4:
  uVar1 = 0;
LAB_14945e9b6:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14945ea60 FUN_14945ea60 body=64 status=ok
// SIG undefined FUN_14945ea60(void)

void FUN_14945ea60(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x30);
  uStack_14 = *(undefined4 *)(param_1 + 0x34);
  uStack_10 = *(undefined4 *)(param_1 + 0x38);
  uStack_c = *(undefined4 *)(param_1 + 0x3c);
  FUN_14945e94c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945eaa2 FUN_14945eaa2 body=123 status=ok
// SIG undefined FUN_14945eaa2(void)

bool FUN_14945eaa2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    local_28 = *(longlong **)(param_1 + 0x28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x30);
    FUN_1458d0f32(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945eb1e FUN_14945eb1e body=123 status=ok
// SIG undefined FUN_14945eb1e(void)

bool FUN_14945eb1e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    local_28 = *(longlong **)(param_1 + 0x38);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))();
    }
    local_20 = *(undefined4 *)(param_1 + 0x40);
    FUN_1458d0f32(lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945eb9a FUN_14945eb9a body=186 status=ok
// SIG undefined FUN_14945eb9a(void)

undefined8 * FUN_14945eb9a(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe590;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_14949b022(param_2,&local_40);
  if (param_1 + 3 == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_40;
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
  }
  uVar4 = param_3[1];
  param_1[5] = *param_3;
  param_1[6] = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945ec56 FUN_14945ec56 body=58 status=ok
// SIG undefined FUN_14945ec56(void)

undefined8 FUN_14945ec56(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1494bd73c(lVar1,param_1 + 0x28);
  return uVar2;
}



// FUNCTION 14945ec90 FUN_14945ec90 body=58 status=ok
// SIG undefined FUN_14945ec90(void)

undefined8 FUN_14945ec90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1494bd73c(lVar1,param_1 + 0x38);
  return uVar2;
}



// FUNCTION 14945ecca FUN_14945ecca body=58 status=ok
// SIG undefined FUN_14945ecca(void)

undefined8 FUN_14945ecca(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e7156(lVar1,param_1 + 0x28);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14945ed04 FUN_14945ed04 body=58 status=ok
// SIG undefined FUN_14945ed04(void)

undefined8 FUN_14945ed04(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e7156(lVar1,param_1 + 0x38);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14945ed3e FUN_14945ed3e body=192 status=ok
// SIG undefined FUN_14945ed3e(void)

undefined8 * FUN_14945ed3e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe430;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 != 0) {
    FUN_1494e67ec(param_2,&local_40);
    if (param_1 + 3 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
    }
    param_1[5] = param_3;
    param_1[6] = *(undefined8 *)(param_2 + 0x18);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945ee0a FUN_14945ee0a body=193 status=ok
// SIG undefined FUN_14945ee0a(void)

undefined8 FUN_14945ee0a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_2 + 0x28))(param_2,(longlong *)(param_1 + 0x18));
  if (lVar2 != 0) {
    uVar3 = FUN_1494e64f0(lVar2);
    cVar1 = FUN_1494beae8(uVar3,lVar2,param_3);
    if (cVar1 != '\0') {
      FUN_1494e67ec(lVar2,&local_38);
      if ((longlong *)(param_1 + 0x18) == &local_38) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x18) = local_38;
        *(undefined4 *)(param_1 + 0x20) = local_30;
        *(undefined4 *)(param_1 + 0x24) = local_2c;
      }
      uVar3 = 1;
      goto LAB_14945ee9a;
    }
  }
  uVar3 = 0;
LAB_14945ee9a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945eed6 FUN_14945eed6 body=293 status=ok
// SIG undefined FUN_14945eed6(void)

undefined8 * FUN_14945eed6(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe450;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_2 != 0) {
    FUN_1494e67ec(param_2,&local_40);
    if ((undefined8 **)(param_1 + 3) == &local_40) {
      if (local_40 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      local_40 = (undefined8 *)0x0;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_34;
    }
    param_1[5] = *param_3;
    FUN_1494947ba(param_2 + 0x70,&local_40);
    param_1[6] = *local_40;
    plVar3 = (longlong *)CONCAT44(uStack_34,local_38);
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
  }
  if (param_3[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945f006 FUN_14945f006 body=287 status=ok
// SIG undefined FUN_14945f006(void)

undefined4 FUN_14945f006(longlong param_1,longlong *param_2,undefined8 param_3)

{
  void *_Src;
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_140f4f540();
    FUN_140f4f5a6(uVar3,local_70,param_3);
    FUN_140e6511c(&local_60,local_70);
    uVar3 = FUN_1494e64f0(lVar2);
    _Src = local_40;
    local_a0 = local_60;
    uStack_9c = uStack_5c;
    uStack_98 = uStack_58;
    uStack_94 = uStack_54;
    local_90 = local_50;
    uStack_8c = uStack_4c;
    uStack_88 = uStack_48;
    uStack_84 = uStack_44;
    local_80 = (void *)0x0;
    local_78 = local_38;
    if ((longlong)local_38 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_38,0);
      memcpy(local_80,_Src,(longlong)local_38 * 2);
    }
    uVar1 = FUN_1494be8dc(uVar3,lVar2,&local_a0);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945f130 FUN_14945f130 body=114 status=ok
// SIG undefined FUN_14945f130(void)

undefined8 * FUN_14945f130(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14945f1a2 FUN_14945f1a2 body=334 status=ok
// SIG undefined FUN_14945f1a2(void)

undefined8 * FUN_14945f1a2(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe4f0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_140e6507e(param_1 + 5);
  FUN_140e6507e(param_1 + 0xd);
  if (param_2 != 0) {
    FUN_1494e67ec(param_2,&local_40);
    if (param_1 + 3 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
    }
    *(undefined4 *)(param_1 + 5) = *param_3;
    FUN_1406fa324(param_1 + 6,param_3 + 2);
    *(undefined4 *)(param_1 + 8) = param_3[6];
    FUN_144a787a6(param_1 + 9,param_3 + 8);
    FUN_1406fa324(param_1 + 0xb,param_3 + 0xc);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x30);
    FUN_1406fa324(param_1 + 0xe,param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x48);
    FUN_144a787a6(param_1 + 0x11,param_2 + 0x50);
    FUN_1406fa324(param_1 + 0x13,param_2 + 0x60);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945f2f2 FUN_14945f2f2 body=75 status=ok
// SIG undefined FUN_14945f2f2(void)

undefined8 FUN_14945f2f2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e64f0(lVar1);
    uVar2 = FUN_1494becc2(uVar2,lVar1,param_1 + 0x28);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14945f33e FUN_14945f33e body=75 status=ok
// SIG undefined FUN_14945f33e(void)

undefined8 FUN_14945f33e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e64f0(lVar1);
    uVar2 = FUN_1494becc2(uVar2,lVar1,param_1 + 0x68);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14945f38a FUN_14945f38a body=668 status=ok
// SIG undefined FUN_14945f38a(void)

undefined8 *
FUN_14945f38a(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined4 *param_5,undefined8 *param_6,longlong param_7,longlong param_8)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe120;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  FUN_140e6507e(param_1 + 7);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  if (param_2 == 0) goto LAB_14945f424;
  if (param_7 != 0) {
    lVar1 = FUN_1494e64f0(param_7);
    if (lVar1 != param_2) goto LAB_14945f424;
    lVar1 = FUN_1494e63d6(param_7);
    if (lVar1 != param_8) goto LAB_14945f424;
  }
  if (param_8 != 0) {
    lVar1 = FUN_1494e64f0(param_8);
    if ((lVar1 != param_2) || (*(char *)(param_8 + 0x28) != '\x01')) goto LAB_14945f424;
  }
  FUN_14949b022(param_2,&local_70);
  if (param_1 + 3 == &local_70) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_70;
    local_70 = 0;
    *(undefined4 *)(param_1 + 4) = local_68;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_64;
  }
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined4 *)(param_1 + 7) = *param_5;
  FUN_1406fa324(param_1 + 8,param_5 + 2);
  *(undefined4 *)(param_1 + 10) = param_5[6];
  FUN_144a787a6(param_1 + 0xb,param_5 + 8);
  FUN_1406fa324(param_1 + 0xd,param_5 + 0xc);
  param_1[0xf] = *param_6;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (param_7 != 0) {
    FUN_1494e67ec(param_7,&local_70);
    if (param_1 + 0x10 == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x10] != 0) {
        FUN_1400020a8();
      }
      param_1[0x10] = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x11) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x8c) = local_64;
    }
  }
  if (param_8 != 0) {
    FUN_1494e67ec(param_8,&local_70);
    if (param_1 + 0x12 == &local_70) {
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x12] != 0) {
        FUN_1400020a8();
      }
      param_1[0x12] = local_70;
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x13) = local_68;
      *(undefined4 *)((longlong)param_1 + 0x9c) = local_64;
    }
  }
LAB_14945f424:
  if (param_6[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945f628 FUN_14945f628 body=877 status=ok
// SIG undefined FUN_14945f628(void)

undefined8 * FUN_14945f628(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe120;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  FUN_140e6507e(param_1 + 7);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  if (param_2 != 0) {
    uVar7 = FUN_1494e64f0(param_2);
    FUN_14949b022(uVar7,&local_60);
    if ((undefined8 **)(param_1 + 3) == &local_60) {
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_60;
      local_60 = (undefined8 *)0x0;
      *(undefined4 *)(param_1 + 4) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_54;
    }
    FUN_1494e67ec(param_2,&local_60);
    if ((undefined8 **)(param_1 + 0x14) == &local_60) {
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      param_1[0x14] = local_60;
      local_60 = (undefined8 *)0x0;
      *(undefined4 *)(param_1 + 0x15) = local_58;
      *(undefined4 *)((longlong)param_1 + 0xac) = uStack_54;
    }
    param_1[5] = *(undefined8 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x29);
    cVar3 = *(char *)(param_2 + 0x28);
    *(char *)((longlong)param_1 + 0x31) = cVar3;
    if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x30);
      FUN_1406fa324(param_1 + 8,param_2 + 0x38);
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x48);
      FUN_144a787a6(param_1 + 0xb,param_2 + 0x50);
      FUN_1406fa324(param_1 + 0xd,param_2 + 0x60);
      FUN_1494947ba(param_2 + 0x70,&local_60);
      param_1[0xf] = *local_60;
      plVar4 = (longlong *)CONCAT44(uStack_54,local_58);
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
    }
    uVar5 = FUN_1494e76d6(param_2);
    *(undefined1 *)(param_1 + 0x16) = uVar5;
    lVar8 = FUN_1494e639c(param_2);
    if (lVar8 == 0) {
      lVar9 = FUN_1494e64f0(param_2);
      lVar8 = *(longlong *)(lVar9 + 0x50);
      iVar11 = *(int *)(lVar9 + 0x58);
    }
    else {
      lVar9 = FUN_1494e639c(param_2);
      lVar8 = *(longlong *)(lVar9 + 0xa0);
      iVar11 = *(int *)(lVar9 + 0xa8);
      uVar7 = FUN_1494e639c(param_2);
      FUN_1494e67ec(uVar7,&local_60);
      if ((undefined8 **)(param_1 + 0x12) == &local_60) {
        if (local_60 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if ((undefined8 *)param_1[0x12] != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        param_1[0x12] = local_60;
        local_60 = (undefined8 *)0x0;
        *(undefined4 *)(param_1 + 0x13) = local_58;
        *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_54;
      }
    }
    if (iVar11 != 0) {
      lVar9 = (longlong)iVar11 * 8;
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar10 * 8) == param_2) {
          iVar6 = (int)lVar10;
          if (iVar6 < iVar11 + -1 && (iVar6 < iVar11 && -1 < iVar6)) {
            FUN_1494e67ec(*(undefined8 *)(lVar8 + (ulonglong)(iVar6 + 1) * 8),&local_60);
            if ((undefined8 **)(param_1 + 0x10) == &local_60) {
              if (local_60 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              param_1[0x10] = local_60;
              *(undefined4 *)(param_1 + 0x11) = local_58;
              *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_54;
            }
          }
          break;
        }
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945f996 FUN_14945f996 body=632 status=ok
// SIG undefined FUN_14945f996(void)

undefined8 FUN_14945f996(longlong param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x88) < 2) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x80);
      if (lVar4 == 0) goto LAB_14945fab5;
    }
    if (*(int *)(param_1 + 0x98) < 2) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x90);
      if (lVar5 == 0) goto LAB_14945fab5;
    }
    if (*(char *)(param_1 + 0x31) == '\x01') {
      puVar3 = (undefined1 *)
               FUN_14949d916(lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
                             lVar4);
    }
    else {
      uVar6 = FUN_140f4f540();
      puVar3 = local_88;
      FUN_140f4f5a6(uVar6,puVar3,*(undefined8 *)(param_1 + 0x78));
      FUN_140e6511c(&local_78,puVar3);
      cVar1 = FUN_14945fc10(&local_78);
      _Src = local_58;
      if (cVar1 != '\0') {
        local_b8 = local_78;
        uStack_b4 = uStack_74;
        uStack_b0 = uStack_70;
        uStack_ac = uStack_6c;
        local_a8 = local_68;
        uStack_a4 = uStack_64;
        uStack_a0 = uStack_60;
        uStack_9c = uStack_5c;
        local_98 = (void *)0x0;
        local_90 = local_50;
        if ((longlong)local_50 == 0) {
          local_8c = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_50,0);
          memcpy(local_98,_Src,(longlong)local_50 * 2);
        }
        local_d8 = &local_b8;
        local_d0 = lVar4;
        local_c8 = lVar5;
        puVar3 = (undefined1 *)
                 FUN_149495630(lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30)
                               ,param_1 + 0x38);
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 == '\0') goto LAB_14945fab5;
    }
    if (puVar3 != (undefined1 *)0x0) {
      FUN_1494e76b2(puVar3,*(undefined1 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar3 + 0x18);
      FUN_1494e67ec(puVar3,&local_78);
      if ((undefined4 *)(param_1 + 0xa0) == &local_78) {
        if (CONCAT44(uStack_74,local_78) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_74,local_78);
        *(undefined4 *)(param_1 + 0xa8) = uStack_70;
        *(undefined4 *)(param_1 + 0xac) = uStack_6c;
      }
      uVar6 = 1;
      goto LAB_14945fab7;
    }
  }
LAB_14945fab5:
  uVar6 = 0;
LAB_14945fab7:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14945fc10 FUN_14945fc10 body=110 status=ok
// SIG undefined FUN_14945fc10(void)

bool FUN_14945fc10(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1494947ba(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945fc80 FUN_14945fc80 body=392 status=ok
// SIG undefined FUN_14945fc80(void)

undefined8 * FUN_14945fc80(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe5d0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_2 != 0) {
    FUN_1494e67ec(param_2,&local_40);
    if (param_1 + 3 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
    }
    lVar1 = FUN_1494e6410(param_2);
    if (lVar1 != 0) {
      FUN_1494e67ec(lVar1,&local_40);
      if (param_1 + 5 == &local_40) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[5] != 0) {
          FUN_1400020a8();
        }
        param_1[5] = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 6) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x34) = local_34;
      }
    }
    if (param_3 != 0) {
      FUN_1494e67ec(param_3,&local_40);
      if (param_1 + 7 == &local_40) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[7] != 0) {
          FUN_1400020a8();
        }
        param_1[7] = local_40;
        *(undefined4 *)(param_1 + 8) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x44) = local_34;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945fe0a FUN_14945fe0a body=101 status=ok
// SIG undefined FUN_14945fe0a(void)

undefined8 FUN_14945fe0a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 8) < 2) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x28))(param_2,param_3);
    if (lVar3 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_1494e64f0(lVar1);
  uVar2 = FUN_14949eee4(uVar2,lVar1,lVar3);
  return uVar2;
}



// FUNCTION 14945fe70 FUN_14945fe70 body=172 status=ok
// SIG undefined FUN_14945fe70(void)

undefined8 *
FUN_14945fe70(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,longlong *param_6)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe5f0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_144a787a6(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[6] = param_4;
  *(undefined4 *)(param_1 + 7) = param_5;
  FUN_14945ff1c(param_1 + 8,param_6);
  FUN_149460040(param_1);
  if (*param_6 != 0) {
    plVar1 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_1;
}



// FUNCTION 14945ff1c FUN_14945ff1c body=290 status=ok
// SIG undefined FUN_14945ff1c(void)

longlong * FUN_14945ff1c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460040 FUN_149460040 body=136 status=ok
// SIG undefined FUN_149460040(void)

void FUN_149460040(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Add graph");
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494600ca FUN_1494600ca body=330 status=ok
// SIG undefined FUN_1494600ca(void)

undefined8 FUN_1494600ca(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    local_34 = 0;
    lVar4 = (**(code **)(*plVar3 + 0x38))
                      (plVar3,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
    if (lVar4 != 0) {
      pcVar1 = *(code **)(param_1 + 0x40);
      if (pcVar1 == (code *)0x0) {
LAB_14946015d:
        cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,lVar4,*(undefined4 *)(param_1 + 0x38));
        if (cVar2 != '\0') {
          if (*(longlong *)(param_1 + 0x30) == 0) {
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar4 + 0x18);
          }
          (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28,&local_48);
          if ((longlong *)(param_1 + 0x80) == &local_48) {
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_1 + 0x80) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_1 + 0x80) = local_48;
            *(undefined4 *)(param_1 + 0x88) = local_40;
            *(undefined4 *)(param_1 + 0x8c) = local_3c;
          }
          uVar5 = 1;
          goto LAB_1494601e1;
        }
      }
      else {
        plVar6 = (longlong *)(param_1 + 0x60);
        if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 0x50);
        }
        local_48 = lVar4;
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar2 = (*pcVar1)(uVar5,&local_48);
        if (cVar2 != '\0') goto LAB_14946015d;
      }
      FUN_1494acfa0(lVar4);
    }
  }
  uVar5 = 0;
LAB_1494601e1:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460216 FUN_149460216 body=79 status=ok
// SIG undefined FUN_149460216(void)

undefined8 FUN_149460216(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x80);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00014946025a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,lVar1,1,*(code **)(*plVar2 + 0x48));
    return uVar3;
  }
  return 0;
}



// FUNCTION 149460266 FUN_149460266 body=347 status=ok
// SIG undefined FUN_149460266(void)

undefined8 * FUN_149460266(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe3f0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_2 + 0x28);
    (**(code **)(*(longlong *)(param_2 + 0x28) + 0x20))(plVar2,&local_48);
    if (param_1 + 3 == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 4) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_3c;
    }
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    if (param_1 + 5 == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[5] != 0) {
        FUN_1400020a8();
      }
      param_1[5] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 6) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_3c;
    }
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x18);
    uVar1 = FUN_1494b2700(param_2);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
    FUN_1494603c2(param_1,L"Remove graph");
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494603c2 FUN_1494603c2 body=129 status=ok
// SIG undefined FUN_1494603c2(void)

void FUN_1494603c2(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28);
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460444 FUN_149460444 body=166 status=ok
// SIG undefined FUN_149460444(void)

undefined8 FUN_149460444(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [168];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x28);
    if (plVar2 != (longlong *)0x0) {
      FUN_1494604ec(local_d0,lVar1,param_1 + 0x48);
      FUN_144a7fc42(local_d0);
      uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,lVar1,1);
      goto LAB_149460491;
    }
  }
  uVar3 = 0;
LAB_149460491:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494604ec FUN_1494604ec body=149 status=ok
// SIG undefined FUN_1494604ec(void)

longlong * FUN_1494604ec(longlong *param_1,longlong *param_2,longlong param_3)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = param_3;
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = (longlong)&PTR_FUN_14bcfbda0;
  FUN_146821b46(param_1,1);
  (**(code **)(*param_2 + 0xd8))(param_2,param_1);
  return param_1;
}



// FUNCTION 149460582 FUN_149460582 body=197 status=ok
// SIG undefined FUN_149460582(void)

undefined8 FUN_149460582(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [164];
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_2c = 0;
    lVar3 = (**(code **)(*plVar2 + 0x38))
                      (plVar2,*(undefined4 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x3c));
    if (lVar3 != 0) {
      FUN_149460648(local_d0,lVar3,param_1 + 0x48);
      FUN_144a7fc42(local_d0);
      cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,lVar3,*(undefined4 *)(param_1 + 0x44));
      uVar4 = 1;
      if (cVar1 != '\0') goto LAB_1494605e0;
      FUN_1494acfa0(lVar3);
    }
  }
  uVar4 = 0;
LAB_1494605e0:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460648 FUN_149460648 body=129 status=ok
// SIG undefined FUN_149460648(void)

undefined8 * FUN_149460648(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_149fba270;
  param_1[0x13] = param_3;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  FUN_1449c2eca(param_1,0);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = &PTR_FUN_14bcfc000;
  FUN_146821b46(param_1,1);
  (**(code **)(*param_2 + 0xd8))(param_2,param_1);
  return param_1;
}



// FUNCTION 1494606ca FUN_1494606ca body=472 status=ok
// SIG undefined FUN_1494606ca(void)

undefined8 * FUN_1494606ca(undefined8 *param_1,longlong param_2,undefined2 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe570;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_48 = param_3;
  if ((param_2 != 0) && (*(undefined2 **)(param_2 + 0x18) != param_3)) {
    plVar1 = (longlong *)(param_2 + 0x28);
    (**(code **)(*(longlong *)(param_2 + 0x28) + 0x20))(plVar1,&local_58);
    if ((undefined2 **)(param_1 + 5) == &local_58) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      param_1[5] = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_1 + 6) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_4c;
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_58);
    if ((undefined2 **)(param_1 + 3) == &local_58) {
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((undefined2 *)param_1[3] != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_58;
      local_58 = (undefined2 *)0x0;
      *(int *)(param_1 + 4) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_4c;
    }
    FUN_1400021e4(&local_48,&local_58);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = FUN_141155906();
    lVar3 = FUN_140277b32(uVar2,uVar4,puVar5,0);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar3 != 0) {
      uVar4 = FUN_141155906();
      local_68 = 0;
      FUN_140af9fb2(&local_58,*(undefined8 *)(param_2 + 0x20),uVar4,param_3);
      param_3 = local_58;
    }
    param_1[7] = param_3;
    param_1[8] = *(undefined8 *)(param_2 + 0x18);
    FUN_1494603c2(param_1,L"Rename graph");
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494608a4 FUN_1494608a4 body=251 status=ok
// SIG undefined FUN_1494608a4(void)

undefined8 FUN_1494608a4(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2,(longlong *)(param_1 + 0x28));
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      FUN_1400021e4(param_1 + 0x38,&local_48);
      cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,lVar2,&local_48);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,&local_48);
        if ((longlong *)(param_1 + 0x28) == &local_48) {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x28) = local_48;
          *(undefined4 *)(param_1 + 0x30) = local_40;
          *(undefined4 *)(param_1 + 0x34) = local_3c;
        }
        uVar4 = 1;
        goto LAB_14946096b;
      }
    }
  }
  uVar4 = 0;
LAB_14946096b:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494609a0 FUN_1494609a0 body=251 status=ok
// SIG undefined FUN_1494609a0(void)

undefined8 FUN_1494609a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2,(longlong *)(param_1 + 0x28));
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      FUN_1400021e4(param_1 + 0x40,&local_48);
      cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,lVar2,&local_48);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,&local_48);
        if ((longlong *)(param_1 + 0x28) == &local_48) {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x28) = local_48;
          *(undefined4 *)(param_1 + 0x30) = local_40;
          *(undefined4 *)(param_1 + 0x34) = local_3c;
        }
        uVar4 = 1;
        goto LAB_149460a67;
      }
    }
  }
  uVar4 = 0;
LAB_149460a67:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460a9c FUN_149460a9c body=314 status=ok
// SIG undefined FUN_149460a9c(void)

undefined8 *
FUN_149460a9c(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe610;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_3 != 0) {
    FUN_144a787a6(param_1 + 3);
    FUN_14010318a(param_3,&local_50,0);
    if (param_1 + 5 == &local_50) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[5] != 0) {
        FUN_1400020a8();
      }
      param_1[5] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 6) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_44;
    }
    param_1[0x12] = param_4;
    FUN_149460bd8(param_1 + 8,param_5);
    FUN_149460cfc(param_1,L"Add Node");
  }
  if (*param_5 != 0) {
    plVar1 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460bd8 FUN_149460bd8 body=290 status=ok
// SIG undefined FUN_149460bd8(void)

longlong * FUN_149460bd8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460cfc FUN_149460cfc body=129 status=ok
// SIG undefined FUN_149460cfc(void)

void FUN_149460cfc(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28);
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460d7e FUN_149460d7e body=23 status=ok
// SIG undefined FUN_149460d7e(void)

void FUN_149460d7e(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000149460d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x80,*(code **)(*param_2 + 0x20));
  return;
}



// FUNCTION 149460d96 FUN_149460d96 body=286 status=ok
// SIG undefined FUN_149460d96(void)

undefined8 FUN_149460d96(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    lVar2 = FUN_149460eb5(param_1 + 0x28);
    if (lVar2 != 0) {
      local_68[0] = *(longlong *)(param_1 + 0x40);
      local_58[0] = 0;
      if (local_68[0] != 0) {
        puVar4 = (undefined8 *)(param_1 + 0x60);
        if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
          puVar4 = *(undefined8 **)(param_1 + 0x50);
        }
        (**(code **)*puVar4)(puVar4,local_58);
      }
      lVar1 = FUN_1494c95c4(lVar1,lVar2,*(undefined8 *)(param_1 + 0x90),local_68);
      if (lVar1 != 0) {
        FUN_14949b022(lVar1,&local_78);
        if ((longlong *)(param_1 + 0x80) == &local_78) {
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x80) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x80) = local_78;
          *(undefined4 *)(param_1 + 0x88) = local_70;
          *(undefined4 *)(param_1 + 0x8c) = local_6c;
        }
        uVar3 = 1;
        goto LAB_149460dca;
      }
    }
  }
  uVar3 = 0;
LAB_149460dca:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149460eb5 FUN_149460eb5 body=373 status=ok
// SIG undefined FUN_149460eb5(void)

longlong FUN_149460eb5(undefined8 *param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 1);
  lVar5 = (longlong)local_40;
  _Src = (void *)*param_1;
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar5 * 2);
  }
  FUN_140056680(local_58,&DAT_149e0635c);
  cVar1 = FUN_1407cdba6(param_1,local_58,&local_38,&local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar4 = local_38;
    if ((int)uStack_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar2 = FUN_140277851(0,puVar4);
  }
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  uVar3 = FUN_144a797b2();
  lVar5 = FUN_140277b32(uVar3,uVar2,puVar4,0);
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    uVar2 = FUN_144a797b2();
    local_68 = L"Optimus::FindObjectInPackageOrGlobal";
    lVar5 = FUN_140277cc4(uVar2,puVar4,0,3);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14946102c FUN_14946102c body=90 status=ok
// SIG undefined FUN_14946102c(void)

undefined8 FUN_14946102c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN_149494c46(lVar1);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x18);
      uVar3 = FUN_1494c949e(lVar2,lVar1,1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 149461086 FUN_149461086 body=552 status=ok
// SIG undefined FUN_149461086(void)

undefined8 *
FUN_149461086(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  undefined ***local_f8;
  undefined **local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe630;
  param_1[0xc] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_3 != (longlong *)0x0) {
    local_f8 = (undefined ***)(param_1 + 8);
    FUN_14949b022(param_3,&local_f0);
    if ((undefined ***)(param_1 + 3) == &local_f0) {
      if (local_f0 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if ((undefined **)param_1[3] != (undefined **)0x0) {
        FUN_1400020a8();
      }
      param_1[3] = local_f0;
      local_f0 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 4) = local_e8;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_e4;
    }
    local_100 = param_1 + 10;
    FUN_144a787a6(param_1 + 5,param_2);
    param_1[7] = param_4;
    FUN_14010318a(param_3[2],&local_f0,0);
    if (local_f8 == &local_f0) {
      if (local_f0 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*local_f8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      param_1[8] = local_f0;
      local_f0 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 9) = local_e8;
      *(undefined4 *)((longlong)param_1 + 0x4c) = local_e4;
    }
    FUN_149460bd8(local_100);
    memset(&local_f0,0,0x90);
    FUN_144869430(&local_f0);
    local_60 = 0;
    local_f0 = &PTR_FUN_149e1e590;
    local_50 = 0;
    local_58 = param_1 + 0x12;
    FUN_144a69558(&local_f0,1);
    (*(code *)local_f0[0x1e])(&local_f0,0);
    local_f0 = &PTR_FUN_149e1e330;
    (**(code **)(*param_3 + 0x2e8))(param_3,&local_f0);
    FUN_144a7fc42(&local_f0);
  }
  if (*param_5 != 0) {
    plVar1 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494612b0 FUN_1494612b0 body=23 status=ok
// SIG undefined FUN_1494612b0(void)

void FUN_1494612b0(longlong param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001494612c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xa0,*(code **)(*param_2 + 0x20));
  return;
}



// FUNCTION 1494612c8 FUN_1494612c8 body=832 status=ok
// SIG undefined FUN_1494612c8(void)

ulonglong FUN_1494612c8(longlong param_1,longlong *param_2)

{
  undefined **_Src;
  void *_Src_00;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 auStack_198 [40];
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [48];
  undefined **local_130;
  int local_128;
  undefined4 local_124;
  longlong local_120;
  undefined8 local_a0;
  void **local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong uStack_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  if (plVar1 == (longlong *)0x0) {
    FUN_1447a122a(&local_88,param_1 + 0x90);
  }
  else {
    memset(&local_130,0,0x90);
    FUN_144869430(&local_130);
    local_a0 = 0;
    local_130 = &PTR_FUN_149e1e590;
    local_98 = &local_88;
    local_90 = 0;
    FUN_144a69558(&local_130,1);
    (*(code *)local_130[0x1e])(&local_130,0);
    local_130 = &PTR_FUN_149e1e330;
    (**(code **)(*plVar1 + 0x2e8))(plVar1,&local_130);
    FUN_144a7fc42(&local_130);
  }
  _Src_00 = local_88;
  local_130 = (undefined **)0x0;
  sVar6 = (size_t)(int)uStack_80;
  local_128 = (int)uStack_80;
  if (sVar6 == 0) {
    local_124 = 0;
  }
  else {
    FUN_1447a127e(&local_130,uStack_80 & 0xffffffff,0);
    memcpy(local_130,_Src_00,sVar6);
  }
  local_120 = param_1;
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = FUN_149460eb5(param_1 + 0x40);
    if (lVar3 != 0) {
      lVar4 = FUN_145ba69fe();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_14945f130(local_160,lVar3 + 0x250);
        uVar5 = FUN_144b00ba4(lVar2);
        lVar3 = FUN_14949a7cc(uVar5,local_160);
      }
      _Src = local_130;
      local_78 = (code *)0x0;
      local_68 = 0;
      local_58 = &PTR_FUN_14bcfd7f0;
      local_50 = (void *)0x0;
      sVar6 = (size_t)local_128;
      local_48 = local_128;
      if (sVar6 == 0) {
        local_44 = 0;
      }
      else {
        FUN_1447a127e(&local_50,local_128,0);
        memcpy(local_50,_Src,sVar6);
      }
      local_40 = local_120;
      local_78 = FUN_144526ea0;
      plVar1 = (longlong *)FUN_1494c95c4(lVar2,lVar3,*(undefined8 *)(param_1 + 0x38));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xf0))(plVar1,0);
        *(longlong *)(param_1 + 0x38) = plVar1[3];
        FUN_14949b022(plVar1,&local_170);
        if ((longlong *)(param_1 + 0xa0) == &local_170) {
          if (local_170 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0xa0) = local_170;
          local_170 = 0;
          *(undefined4 *)(param_1 + 0xa8) = local_168;
          *(undefined4 *)(param_1 + 0xac) = local_164;
        }
        uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        goto LAB_1494613f3;
      }
    }
  }
  uVar7 = 0;
LAB_1494613f3:
  if (local_130 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946160a FUN_14946160a body=73 status=ok
// SIG undefined FUN_14946160a(void)

undefined8 FUN_14946160a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xa0);
  if (lVar1 != 0) {
    lVar2 = FUN_149494c46(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1494c949e(lVar2,lVar1,1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 149461654 FUN_149461654 body=410 status=ok
// SIG undefined FUN_149461654(void)

undefined8 * FUN_149461654(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe690;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (param_2 != 0) {
    FUN_14949b022(param_2,&local_40);
    if (param_1 + 3 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
    }
    lVar1 = FUN_149494c46(param_2);
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28,&local_40);
    if (param_1 + 5 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[5] != 0) {
        FUN_1400020a8();
      }
      param_1[5] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 6) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_34;
    }
    param_1[9] = *(undefined8 *)(param_2 + 0x18);
    FUN_14010318a(*(undefined8 *)(param_2 + 0x10),&local_40,0);
    if (param_1 + 7 == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[7] != 0) {
        FUN_1400020a8();
      }
      param_1[7] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 8) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x44) = local_34;
    }
    FUN_1494617f0(param_1,L"Remove Node");
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494617f0 FUN_1494617f0 body=129 status=ok
// SIG undefined FUN_1494617f0(void)

void FUN_1494617f0(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28);
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149461872 FUN_149461872 body=270 status=ok
// SIG undefined FUN_149461872(void)

undefined4 FUN_149461872(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_149494c46(plVar2);
    if (lVar3 != 0) {
      memset(local_d8,0,0x90);
      FUN_144869430(local_d8);
      local_48 = 0;
      local_d8[0] = &PTR_FUN_149e1e590;
      local_38 = 0;
      local_40 = param_1 + 0x50;
      FUN_144a69558(local_d8,1);
      (*(code *)local_d8[0][0x1e])(local_d8,0);
      local_d8[0] = &PTR_FUN_149e1e330;
      (**(code **)(*plVar2 + 0x2e8))(plVar2,local_d8);
      uVar1 = FUN_1494c949e(lVar3,plVar2,1);
      FUN_144a7fc42(local_d8);
      goto LAB_149461956;
    }
  }
  uVar1 = 0;
LAB_149461956:
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149461982 FUN_149461982 body=155 status=ok
// SIG undefined FUN_149461982(void)

bool FUN_149461982(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = FUN_149460eb5(param_1 + 0x38);
    if (lVar2 != 0) {
      local_48 = 0;
      local_38 = &PTR_LAB_14bcfd810;
      local_58 = FUN_1445270aa;
      local_30 = param_1;
      lVar1 = FUN_1494c95c4(lVar1,lVar2,*(undefined8 *)(param_1 + 0x48));
      bVar3 = lVar1 != 0;
      goto LAB_1494619b2;
    }
  }
  bVar3 = false;
LAB_1494619b2:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149461a1e FUN_149461a1e body=109 status=ok
// SIG undefined FUN_149461a1e(void)

undefined8 * FUN_149461a1e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe670;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_144a787a6(param_1 + 3);
  FUN_144a787a6(param_1 + 5,param_3);
  *param_1 = &PTR_FUN_14bcfe650;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_149461a8c(param_1);
  return param_1;
}



// FUNCTION 149461a8c FUN_149461a8c body=136 status=ok
// SIG undefined FUN_149461a8c(void)

void FUN_149461a8c(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Add Node Pair");
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149461b16 FUN_149461b16 body=221 status=ok
// SIG undefined FUN_149461b16(void)

undefined8 * FUN_149461b16(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe650;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    param_1[7] = uVar2;
    param_1[8] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_1[8];
    param_1[7] = uVar2;
    param_1[8] = lVar3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  uVar2 = *param_3;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[10];
  param_1[9] = uVar2;
  param_1[10] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_149461a8c(param_1);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 149461bf4 FUN_149461bf4 body=658 status=ok
// SIG undefined FUN_149461bf4(void)

undefined8 FUN_149461bf4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x18);
  if ((1 < *(int *)(param_1 + 0x20)) && (1 < *(int *)(param_1 + 0x30))) {
    uVar9 = (**(code **)(*param_2 + 0x20))(param_2,plVar1);
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x28);
    FUN_149494c46(uVar9);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if (((((*(longlong *)(param_1 + 0x38) == 0) ||
        (plVar4 = *(longlong **)(param_1 + 0x40), plVar4 == (longlong *)0x0)) ||
       ((int)plVar4[1] < 1)) ||
      ((*(longlong *)(param_1 + 0x48) == 0 || (*(longlong *)(param_1 + 0x50) == 0)))) ||
     (*(int *)(*(longlong *)(param_1 + 0x50) + 8) < 1)) {
    uVar9 = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        lVar7 = (**(code **)(*param_2 + 0x20))(param_2,0x80);
        goto LAB_149461d3b;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar12);
    lVar7 = (**(code **)(*param_2 + 0x20))(param_2,*(longlong *)(param_1 + 0x38) + 0x80);
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
LAB_149461d3b:
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (plVar4 == (longlong *)0x0) {
LAB_149461d92:
      lVar8 = (**(code **)(*param_2 + 0x20))(param_2,0x80);
    }
    else {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_149461d92;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar12 = iVar6 == iVar5;
        if (bVar12) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar12);
      lVar8 = (**(code **)(*param_2 + 0x20))(param_2,*(longlong *)(param_1 + 0x48) + 0x80);
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
    uVar9 = 0;
    if ((lVar7 != 0) && (lVar8 != 0)) {
      FUN_14949b022(lVar7,&local_48);
      if (plVar1 == &local_48) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x18) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x20) = local_40;
        *(undefined4 *)(param_1 + 0x24) = local_3c;
      }
      FUN_14949b022(lVar8,&local_48);
      if ((longlong *)(param_1 + 0x28) == &local_48) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x28) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x28) = local_48;
        local_48 = 0;
        *(undefined4 *)(param_1 + 0x30) = local_40;
        *(undefined4 *)(param_1 + 0x34) = local_3c;
      }
      uVar9 = (**(code **)(*param_2 + 0x20))(param_2,plVar1);
      uVar10 = (**(code **)(*param_2 + 0x20))(param_2,(longlong *)(param_1 + 0x28));
      uVar11 = FUN_149494c46(uVar9);
      uVar9 = FUN_1494cc474(uVar11,uVar9,uVar10);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149461ea2 FUN_149461ea2 body=99 status=ok
// SIG undefined FUN_149461ea2(void)

undefined8 FUN_149461ea2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((1 < *(int *)(param_1 + 0x20)) && (1 < *(int *)(param_1 + 0x30))) {
    uVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x28);
    uVar3 = FUN_149494c46(uVar1);
    uVar1 = FUN_1494cc658(uVar3,uVar1,uVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 149461f06 FUN_149461f06 body=321 status=ok
// SIG undefined FUN_149461f06(void)

undefined8 * FUN_149461f06(undefined8 *param_1,longlong param_2)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14949b022(*(undefined8 *)(param_2 + 0x30),&local_48);
  FUN_14949b022(*(undefined8 *)(param_2 + 0x28),&local_58);
  pvVar3 = local_58;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe670;
  ppvVar1 = (void **)(param_1 + 3);
  ppvVar2 = (void **)(param_1 + 5);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (ppvVar1 != &local_58) {
    *(int *)(param_1 + 4) = local_50;
    if ((longlong)local_50 != 0) {
      FUN_1446dd670(ppvVar1,local_50,0);
      memcpy(*ppvVar1,pvVar3,(longlong)local_50 * 2);
    }
  }
  pvVar3 = local_48;
  if (ppvVar2 != &local_48) {
    *(int *)(param_1 + 6) = local_40;
    if (local_40 == 0 && *(int *)((longlong)param_1 + 0x34) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(ppvVar2,local_40);
      if (local_40 != 0) {
        memcpy(*ppvVar2,pvVar3,(longlong)local_40 * 2);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bceb520;
  FUN_149462048(param_1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149462048 FUN_149462048 body=136 status=ok
// SIG undefined FUN_149462048(void)

void FUN_149462048(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"Remove Node Pair");
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494620d2 FUN_1494620d2 body=375 status=ok
// SIG undefined FUN_1494620d2(void)

undefined8 * FUN_1494620d2(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe470;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if (((param_3 != 0 && param_2 != 0) && (*(char *)(param_2 + 0x29) == '\x02')) &&
     (*(char *)(param_3 + 0x29) == '\x01')) {
    lVar1 = FUN_1494e64f0(param_2);
    lVar2 = FUN_1494e64f0(param_3);
    if (lVar1 != lVar2) {
      uVar3 = FUN_1494e64f0(param_2);
      lVar1 = FUN_149494c46(uVar3);
      uVar3 = FUN_1494e64f0(param_3);
      lVar2 = FUN_149494c46(uVar3);
      if (lVar1 == lVar2) {
        FUN_1494e67ec(param_2,&local_50);
        if (param_1 + 3 == &local_50) {
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_1[3] != 0) {
            FUN_1400020a8();
          }
          param_1[3] = local_50;
          local_50 = 0;
          *(undefined4 *)(param_1 + 4) = local_48;
          *(undefined4 *)((longlong)param_1 + 0x24) = local_44;
        }
        FUN_1494e67ec(param_3,&local_50);
        if (param_1 + 5 == &local_50) {
          if (local_50 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (param_1[5] != 0) {
            FUN_1400020a8();
          }
          param_1[5] = local_50;
          *(undefined4 *)(param_1 + 6) = local_48;
          *(undefined4 *)((longlong)param_1 + 0x34) = local_44;
        }
        *(undefined1 *)(param_1 + 7) = param_4;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946224a FUN_14946224a body=100 status=ok
// SIG undefined FUN_14946224a(void)

undefined8 * FUN_14946224a(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe470;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  if ((1 < *(int *)(param_2 + 8)) && (1 < *(int *)(param_3 + 8))) {
    FUN_144a787a6(param_1 + 3);
    FUN_144a787a6(param_1 + 5,param_3);
    *(undefined1 *)(param_1 + 7) = param_4;
  }
  return param_1;
}



// FUNCTION 1494622ae FUN_1494622ae body=103 status=ok
// SIG undefined FUN_1494622ae(void)

ulonglong FUN_1494622ae(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x28);
    if (lVar2 != 0) {
      uVar3 = FUN_1494e64f0(lVar1);
      uVar3 = FUN_149494c46(uVar3);
      uVar4 = FUN_1494c969c(uVar3,lVar1,lVar2);
      return uVar4;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 0x38);
}



// FUNCTION 149462316 FUN_149462316 body=103 status=ok
// SIG undefined FUN_149462316(void)

ulonglong FUN_149462316(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x28);
    if (lVar2 != 0) {
      uVar3 = FUN_1494e64f0(lVar1);
      uVar3 = FUN_149494c46(uVar3);
      uVar4 = FUN_1494cc7da(uVar3,lVar1,lVar2);
      return uVar4;
    }
  }
  return (ulonglong)*(byte *)(param_1 + 0x38);
}



// FUNCTION 14946237e FUN_14946237e body=47 status=ok
// SIG undefined FUN_14946237e(void)

undefined8 * FUN_14946237e(undefined8 *param_1)

{
  FUN_1494620d2();
  *param_1 = &PTR_FUN_14bceb560;
  FUN_149460cfc(param_1,L"Add Link");
  return param_1;
}



// FUNCTION 1494623ae FUN_1494623ae body=47 status=ok
// SIG undefined FUN_1494623ae(void)

undefined8 * FUN_1494623ae(undefined8 *param_1)

{
  FUN_14946224a();
  *param_1 = &PTR_FUN_14bceb560;
  FUN_149460cfc(param_1,L"Add Link");
  return param_1;
}



// FUNCTION 1494623de FUN_1494623de body=61 status=ok
// SIG undefined FUN_1494623de(void)

undefined8 * FUN_1494623de(undefined8 *param_1,longlong param_2)

{
  FUN_1494620d2(param_1,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30),0);
  *param_1 = &PTR_FUN_14bceb590;
  FUN_1494617f0(param_1,L"Remove Link");
  return param_1;
}



// FUNCTION 14946241c FUN_14946241c body=50 status=ok
// SIG undefined FUN_14946241c(void)

undefined8 * FUN_14946241c(undefined8 *param_1)

{
  FUN_1494620d2();
  *param_1 = &PTR_FUN_14bceb590;
  FUN_1494617f0(param_1,L"Remove Link");
  return param_1;
}



// FUNCTION 14946244e FUN_14946244e body=933 status=ok
// SIG undefined FUN_14946244e(void)

/* WARNING: Removing unreachable block (ram,0x0001494625ed) */

ulonglong FUN_14946244e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_98;
  longlong *local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x40);
  if (lVar4 != 0) {
    uVar5 = FUN_1459f6fd2();
    plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x80);
      lVar4 = *(longlong *)(lVar7 + 0x18);
      lVar8 = FUN_1494e64f0(lVar7);
      local_a8 = lVar4;
      if (lVar8 != 0) {
        uVar5 = FUN_145a96cec();
        plVar9 = (longlong *)FUN_144718840(lVar8,uVar5);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x18))(plVar9,&local_58,lVar7);
          local_a8 = local_58;
        }
      }
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_68,param_1 + 0x50,lVar7);
      if (local_60 == 0) {
LAB_14946262f:
        uVar10 = 0;
      }
      else {
        plVar9 = (longlong *)(param_1 + 0x90);
        iVar3 = *(int *)(param_1 + 0x9c);
        local_98 = lVar7;
        FUN_1447a1747(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
        *(undefined4 *)(param_1 + 0x98) = 0;
        if ((iVar3 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
          FUN_1408be2c4(plVar9,0);
        }
        lVar4 = local_68;
        lVar7 = (longlong)local_60;
        if (lVar7 == 0) {
          iVar3 = 0;
        }
        else {
          lVar11 = 0;
          local_90 = plVar6;
          lVar8 = local_58;
          uVar5 = local_50;
          do {
            local_50 = uVar5;
            local_58 = lVar8;
            FUN_1494e67ec(*(undefined8 *)(lVar4 + lVar11),&local_58);
            iVar3 = *(int *)(param_1 + 0x98);
            *(uint *)(param_1 + 0x98) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x9c) < iVar3 + 1U) {
              FUN_1447a1bd6(plVar9,iVar3);
            }
            lVar1 = *plVar9;
            lVar12 = (longlong)iVar3 * 0x10;
            *(undefined8 *)(lVar1 + lVar12) = 0;
            *(longlong *)(lVar1 + lVar12) = local_58;
            local_58 = 0;
            lVar8 = local_58;
            *(undefined4 *)(lVar1 + 8 + lVar12) = (undefined4)local_50;
            *(undefined4 *)(lVar1 + 0xc + lVar12) = local_50._4_4_;
            local_50 = 0;
            uVar5 = local_50;
            local_50 = 0;
            local_58 = 0;
            lVar11 = lVar11 + 8;
            plVar6 = local_90;
            iVar3 = local_60;
          } while (lVar7 * 8 != lVar11);
        }
        lVar4 = *(longlong *)(local_68 + (longlong)(iVar3 + -1) * 8);
        if (*(char *)(lVar4 + 0x28) == '\x01') {
          plVar9 = local_78;
          local_78[0] = local_68;
          local_60 = iVar3;
LAB_149462623:
          *(int *)(plVar9 + 1) = local_60;
          (**(code **)(*plVar6 + 0x20))(plVar6);
          goto LAB_14946262f;
        }
        uVar10 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        if (*(char *)(param_1 + 0x78) == '\x01') {
          if (*(char *)(local_98 + 0x29) == '\x02') {
            FUN_1494e67ec(local_98,&local_58);
            if ((longlong *)(param_1 + 0x18) == &local_58) {
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(param_1 + 0x18) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(param_1 + 0x18) = local_58;
              local_58 = 0;
              *(undefined4 *)(param_1 + 0x20) = (undefined4)local_50;
              *(undefined4 *)(param_1 + 0x24) = local_50._4_4_;
            }
          }
          else {
            FUN_1494e67ec(lVar4,&local_58);
            if ((longlong *)(param_1 + 0x18) == &local_58) {
              lVar4 = local_98;
              if (local_58 != 0) {
                FUN_1400020a8();
                lVar4 = local_98;
              }
            }
            else {
              if (*(longlong *)(param_1 + 0x18) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(param_1 + 0x18) = local_58;
              local_58 = 0;
              *(undefined4 *)(param_1 + 0x20) = (undefined4)local_50;
              *(undefined4 *)(param_1 + 0x24) = local_50._4_4_;
              lVar4 = local_98;
            }
          }
          FUN_1494e67ec(lVar4,&local_58);
          if ((longlong *)(param_1 + 0x28) == &local_58) {
            if (local_58 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_1 + 0x28) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(param_1 + 0x28) = local_58;
            local_58 = 0;
            *(undefined4 *)(param_1 + 0x30) = (undefined4)local_50;
            *(undefined4 *)(param_1 + 0x34) = local_50._4_4_;
          }
          cVar2 = FUN_1494622ae(param_1,param_2);
          if (cVar2 == '\0') {
            plVar9 = local_88;
            goto LAB_149462623;
          }
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14946248d;
    }
  }
  uVar10 = 0;
LAB_14946248d:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494627f4 FUN_1494627f4 body=327 status=ok
// SIG undefined FUN_1494627f4(void)

undefined4 FUN_1494627f4(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x40);
  if (lVar5 != 0) {
    uVar6 = FUN_1459f6fd2();
    plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
    if ((plVar7 != (longlong *)0x0) &&
       ((*(char *)(param_1 + 0x78) != '\x01' ||
        (cVar2 = FUN_149462316(param_1,param_2), cVar2 != '\0')))) {
      local_58 = 0;
      uStack_50 = 0;
      if ((longlong)*(int *)(param_1 + 0x98) == 0) {
        uStack_50._0_4_ = 0;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x90);
        lVar9 = (longlong)*(int *)(param_1 + 0x98) << 4;
        do {
          uVar6 = (**(code **)(*param_2 + 0x28))(param_2,lVar5);
          uVar1 = uStack_50;
          lVar8 = (longlong)(int)uStack_50;
          uVar3 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
          if (uStack_50._4_4_ < uVar3) {
            FUN_149482de0(&local_58,uVar1 & 0xffffffff);
          }
          *(undefined8 *)(local_58 + lVar8 * 8) = uVar6;
          lVar5 = lVar5 + 0x10;
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != 0);
      }
      local_68 = local_58;
      local_60 = (int)uStack_50;
      uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14946282c;
    }
  }
  uVar4 = 0;
LAB_14946282c:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14946293c FUN_14946293c body=385 status=ok
// SIG undefined FUN_14946293c(void)

undefined8 * FUN_14946293c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bceb5b0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
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
  if (param_2 != 0) {
    lVar5 = FUN_149494c46(param_2);
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,&local_58);
    if (param_1 + 3 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 4) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_4c;
    }
    param_1[5] = param_3;
    uVar2 = *(undefined4 *)(param_2 + 0x44);
    uVar3 = *(undefined4 *)(param_2 + 0x48);
    uVar4 = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 7) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
    param_1[8] = *(undefined8 *)(param_2 + 0x130);
    param_1[9] = *(undefined8 *)(param_2 + 0x138);
    param_1[10] = *(undefined8 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x168);
    FUN_145ebd534(param_1 + 0xc,param_2 + 0x1a0);
    FUN_145ebd534(param_1 + 0xe,param_2 + 0x1b0);
    iVar1 = *(int *)(param_2 + 0x1f8) + -1;
    if (*(int *)(param_2 + 0x1f8) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1 + 0x10,*(undefined8 *)(param_2 + 0x1f0),iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149462abe FUN_149462abe body=504 status=ok
// SIG undefined FUN_149462abe(void)

undefined8 FUN_149462abe(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18);
  if (lVar2 != 0) {
    local_98 = *(undefined4 *)(param_1 + 0x58);
    local_a0 = *(undefined8 *)(param_1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = FUN_144b00ba4(lVar2);
    local_c8 = param_1 + 0x60;
    local_c0 = param_1 + 0x70;
    local_b8 = param_1 + 0x80;
    lVar4 = FUN_1494999c6(uVar3,uVar5,uVar1,&local_a0);
    if (lVar4 != 0) {
      FUN_1494cd150(lVar2,0x15,lVar4);
      local_90 = *(undefined8 *)(lVar4 + 0x18);
      FUN_1400021e4(&local_90,&local_b0);
      if ((longlong *)(param_1 + 0x90) == &local_b0) {
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x90) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x90) = local_b0;
        local_b0 = 0;
        *(undefined4 *)(param_1 + 0x98) = local_a8;
        *(undefined4 *)(param_1 + 0x9c) = local_a4;
      }
      local_60 = *(undefined4 *)(param_1 + 0x30);
      uStack_5c = *(undefined4 *)(param_1 + 0x34);
      uStack_58 = *(undefined4 *)(param_1 + 0x38);
      uStack_54 = *(undefined4 *)(param_1 + 0x3c);
      local_78 = 0;
      local_68 = &PTR_LAB_14bcfd830;
      local_88 = &LAB_1445271f8;
      lVar2 = FUN_1494c95c4(lVar2,lVar4,*(undefined8 *)(param_1 + 0x28));
      if (lVar2 != 0) {
        FUN_14949b022(lVar2,&local_b0);
        if ((longlong *)(param_1 + 0xa0) == &local_b0) {
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0xa0) = local_b0;
          *(undefined4 *)(param_1 + 0xa8) = local_a8;
          *(undefined4 *)(param_1 + 0xac) = local_a4;
        }
        uVar5 = 1;
        goto LAB_149462c60;
      }
    }
  }
  uVar5 = 0;
LAB_149462c60:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149462cb8 FUN_149462cb8 body=228 status=ok
// SIG undefined FUN_149462cb8(void)

undefined8 FUN_149462cb8(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0xa0);
    if (*(int *)(param_1 + 0x98) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(param_1 + 0x90);
    }
    uVar4 = FUN_144b00ba4(lVar2);
    uVar5 = FUN_144a797b2();
    plVar6 = (longlong *)FUN_140277b32(uVar5,uVar4,puVar7,0);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    cVar1 = FUN_1494c949e(lVar2,uVar3,1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*plVar6 + 0x170))(plVar6,0,DAT_14c951640,0x30);
      if (cVar1 == '\0') {
        return 0;
      }
      FUN_1494cd150(lVar2,0x16,plVar6);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 149462d9c FUN_149462d9c body=315 status=ok
// SIG undefined FUN_149462d9c(void)

undefined8 * FUN_149462d9c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bceb5d0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (param_2 != 0) {
    lVar4 = FUN_149494c46(param_2);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))(lVar4 + 0x28,&local_48);
    if (param_1 + 3 == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 4) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_3c;
    }
    FUN_14010318a(*(undefined8 *)(param_2 + 0x10),&local_48,0);
    if (param_1 + 5 == &local_48) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[5] != 0) {
        FUN_1400020a8();
      }
      param_1[5] = local_48;
      *(undefined4 *)(param_1 + 6) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_3c;
    }
    param_1[7] = param_3;
    uVar1 = *(undefined4 *)(param_2 + 0x44);
    uVar2 = *(undefined4 *)(param_2 + 0x48);
    uVar3 = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 9) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149462ed8 FUN_149462ed8 body=267 status=ok
// SIG undefined FUN_149462ed8(void)

undefined8 FUN_149462ed8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    lVar2 = FUN_149462fe4(param_1 + 0x28);
    if (lVar2 != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x40);
      uStack_34 = *(undefined4 *)(param_1 + 0x44);
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
      uStack_2c = *(undefined4 *)(param_1 + 0x4c);
      local_58 = 0;
      local_48 = &PTR_LAB_14bcfd850;
      local_68[0] = FUN_14452724e;
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      local_40 = lVar2;
      uVar3 = FUN_145ba6bd2();
      lVar1 = FUN_1494c95c4(lVar1,uVar3,uVar4,local_68);
      if (lVar1 != 0) {
        FUN_14949b022(lVar1,&local_78);
        if ((longlong *)(param_1 + 0x50) == &local_78) {
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x50) = local_78;
          *(undefined4 *)(param_1 + 0x58) = local_70;
          *(undefined4 *)(param_1 + 0x5c) = local_6c;
        }
        uVar4 = 1;
        goto LAB_149462f0b;
      }
    }
  }
  uVar4 = 0;
LAB_149462f0b:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149462fe4 FUN_149462fe4 body=373 status=ok
// SIG undefined FUN_149462fe4(void)

longlong FUN_149462fe4(undefined8 *param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  longlong local_58 [2];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 1);
  lVar5 = (longlong)local_40;
  _Src = (void *)*param_1;
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar5 * 2);
  }
  FUN_140056680(local_58,&DAT_149e0635c);
  cVar1 = FUN_1407cdba6(param_1,local_58,&local_38,&local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    puVar4 = local_38;
    if ((int)uStack_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar2 = FUN_140277851(0,puVar4);
  }
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  uVar3 = FUN_145ba682a();
  lVar5 = FUN_140277b32(uVar3,uVar2,puVar4,0);
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_1;
    }
    uVar2 = FUN_145ba682a();
    local_68 = L"Optimus::FindObjectInPackageOrGlobal";
    lVar5 = FUN_140277cc4(uVar2,puVar4,0,3);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14946315a FUN_14946315a body=81 status=ok
// SIG undefined FUN_14946315a(void)

undefined8 FUN_14946315a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x50);
    uVar2 = FUN_1494c949e(lVar1,uVar2,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1494631ac FUN_1494631ac body=322 status=ok
// SIG undefined FUN_1494631ac(void)

undefined8 *
FUN_1494631ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe3b0;
  param_1[3] = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6511c(param_1 + 4);
  FUN_140e6507e(param_1 + 10);
  param_1[3] = param_3;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 8,param_2 + 4);
  *(undefined4 *)(param_1 + 10) = *param_4;
  FUN_1406fa324(param_1 + 0xb,param_4 + 2);
  *(undefined4 *)(param_1 + 0xd) = param_4[6];
  FUN_144a787a6(param_1 + 0xe,param_4 + 8);
  FUN_1406fa324(param_1 + 0x10,param_4 + 0xc);
  FUN_1400021e4(param_1 + 3,&local_60);
  local_50 = local_60;
  if (local_58 == 0) {
    local_50 = &DAT_149dfb77a;
  }
  FUN_1494632f0(param_1,L"Add resource \'%s\'");
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14121c54c(param_4);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494632f0 FUN_1494632f0 body=132 status=ok
// SIG undefined FUN_1494632f0(void)

void FUN_1494632f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,param_2,*param_3);
  if ((longlong *)(param_1 + 8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 8) = local_28;
    *(undefined4 *)(param_1 + 0x10) = local_20;
    *(undefined4 *)(param_1 + 0x14) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463376 FUN_149463376 body=252 status=ok
// SIG undefined FUN_149463376(void)

undefined8 FUN_149463376(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_2 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_2 + 8))(param_2), lVar6 != 0)) {
    lVar7 = FUN_1458f36a4();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_1494633b8;
  }
  lVar6 = 0;
LAB_1494633b8:
  lVar7 = FUN_1494ad4d2(lVar6,*(undefined8 *)(param_1 + 0x18));
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(lVar7 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(lVar7 + 0x44) = uVar2;
    *(undefined4 *)(lVar7 + 0x48) = uVar3;
    *(undefined4 *)(lVar7 + 0x4c) = uVar4;
    FUN_144a787a6(lVar7 + 0x50,param_1 + 0x40);
    *(undefined4 *)(lVar7 + 0x68) = *(undefined4 *)(param_1 + 0x50);
    FUN_1406fa324(lVar7 + 0x70,param_1 + 0x58);
    *(undefined4 *)(lVar7 + 0x80) = *(undefined4 *)(param_1 + 0x68);
    FUN_144a787a6(lVar7 + 0x88,param_1 + 0x70);
    FUN_1406fa324(lVar7 + 0x98,param_1 + 0x80);
    cVar5 = FUN_1494ad5ae(lVar6,lVar7,0xffffffff);
    if (cVar5 != '\0') {
      uVar1 = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
    FUN_1494acfa0(lVar7);
  }
  return 0;
}



// FUNCTION 149463472 FUN_149463472 body=67 status=ok
// SIG undefined FUN_149463472(void)

undefined8 FUN_149463472(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    lVar2 = FUN_1494e7b7c(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1494ad740(lVar2,lVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1494634b6 FUN_1494634b6 body=151 status=ok
// SIG undefined FUN_1494634b6(void)

undefined8 FUN_1494634b6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [168];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    FUN_1494604ec(local_c8,lVar1,param_1 + 0x58);
    FUN_144a7fc42(local_c8);
    lVar2 = FUN_1494e7b7c(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1494ad740(lVar2,lVar1);
      goto LAB_1494634ed;
    }
  }
  uVar3 = 0;
LAB_1494634ed:
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946354e FUN_14946354e body=210 status=ok
// SIG undefined FUN_14946354e(void)

undefined8 FUN_14946354e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == (longlong *)0x0) {
LAB_1494635a5:
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 == 0) goto LAB_1494635a5;
    lVar3 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1494635a5;
  }
  lVar3 = FUN_1494ad4d2(lVar2,*(undefined8 *)(param_1 + 0x18));
  if (lVar3 != 0) {
    FUN_149460648(local_c8,lVar3,param_1 + 0x58);
    FUN_144a7fc42(local_c8);
    cVar1 = FUN_1494ad5ae(lVar2,lVar3,*(undefined4 *)(param_1 + 0x50));
    uVar4 = 1;
    if (cVar1 != '\0') goto LAB_1494635ba;
    FUN_1494acfa0(lVar3);
  }
  uVar4 = 0;
LAB_1494635ba:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463622 FUN_149463622 body=77 status=ok
// SIG undefined FUN_149463622(void)

undefined8 FUN_149463622(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    lVar2 = FUN_1494e7b7c(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1494ad81a(lVar2,lVar1,*(undefined8 *)(param_1 + 0x18));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 149463670 FUN_149463670 body=77 status=ok
// SIG undefined FUN_149463670(void)

undefined8 FUN_149463670(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    lVar2 = FUN_1494e7b7c(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1494ad81a(lVar2,lVar1,*(undefined8 *)(param_1 + 0x20));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1494636be FUN_1494636be body=89 status=ok
// SIG undefined FUN_1494636be(void)

void FUN_1494636be(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14945f130(local_50,param_1 + 0x20);
  FUN_149463718(param_1,param_2,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463718 FUN_149463718 body=152 status=ok
// SIG undefined FUN_149463718(void)

undefined4 FUN_149463718(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    lVar3 = FUN_1494e7b7c(lVar2);
    if (lVar3 != 0) {
      FUN_14945f130(local_58,param_3);
      uVar1 = FUN_1494ad920(lVar3,lVar2,local_58);
      goto LAB_14946375b;
    }
  }
  uVar1 = 0;
LAB_14946375b:
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494637b2 FUN_1494637b2 body=89 status=ok
// SIG undefined FUN_1494637b2(void)

void FUN_1494637b2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14945f130(local_50,param_1 + 0x50);
  FUN_149463718(param_1,param_2,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463816 FUN_149463816 body=76 status=ok
// SIG undefined FUN_149463816(void)

undefined8 FUN_149463816(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_2 + 0x30))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 != 0) {
    lVar2 = FUN_1494e7b7c(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_1494ad9f8(lVar2,lVar1,param_3);
      return uVar3;
    }
  }
  return 0;
}


